#include "./bmp_reader.h"
#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#define SPLINE

int bicubic_param_matrix[16][16] = {
    {0  ,0  ,0  ,0  ,0  ,36 ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },//0
    {0  ,0  ,0  ,0  ,-12,-18,36 ,-6 ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },//1
    {0  ,0  ,0  ,0  ,18 ,-36,18 ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },//2
    {0  ,0  ,0  ,0  ,-6 ,18 ,-18,6  ,0  ,0  ,0  ,0  ,0  ,0  ,0  ,0  },//3
    {0  ,-12,0  ,0  ,0  ,-18,0  ,0  ,0  ,36 ,0  ,0  ,0  ,-6 ,0  ,0  },//4
    {4  ,6  ,-12,2  ,6  ,9  ,-18,3  ,-12,-18,36 ,-6 ,2  ,3  ,-6 ,1  },//5

    {-6 ,12 ,-6 ,0  ,-9 ,18 ,-9 ,0  ,18 ,-36,18 ,0  ,-3 ,6  ,-3 ,0  },//6
  
    {2  ,-6 ,6  ,-2 ,3  ,-9 ,9  ,-3 ,-6 ,18 ,-18,6  ,1  ,-3 ,3  ,-1 },//7

    {0  ,18 ,0  ,0  ,0  ,-36,0  ,0  ,0  ,18 ,0  ,0  ,0  ,0  ,0  ,0  },//8
    {-6 ,-9 ,18 ,-3 ,12 ,18 ,-36,6  ,-6 ,-9 ,18 ,-3 ,0  ,0  ,0  ,0  },//9
    {9  ,-18,9  ,0  ,-18,36 ,-18,0  ,9  ,-18,9  ,0  ,0  ,0  ,0  ,0  },//10
    {-3 ,9  ,-9 ,3  ,6  ,-18,18 ,-6 ,-3 ,9  ,-9 ,3  ,0  ,0  ,0  ,0  },//11
    {0  ,-6 ,0  ,0  ,0  ,18 ,0  ,0  ,0  ,-18,0  ,0  ,0  ,6  ,0  ,0  },//12
    {2  ,3  ,-6 ,1  ,-6 ,-9 ,18 ,-3 ,6  ,9  ,-18,3  ,-2 ,-3 ,6  ,-1 },//13
    {-3 ,6  ,-3 ,0  ,9  ,-18,9  ,9  ,-9 ,18 ,-9 ,0  ,3  ,-6 ,3  ,0  },//14
    {1  ,-3 ,3  ,-1 ,-3 ,9  ,-9 ,3  ,3  ,-9 ,9  ,-3 ,-1 ,3  ,-3 ,1  }//15
};

int bicubic_spline_param_matrix[16][16]=
    {
        {0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //0
        {0, 0, 0, 0, -8,  0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0},//1
        {0, 0, 0, 0, 16, -40, 32, -8, 0, 0, 0, 0, 0, 0, 0, 0},//2 

        {0, 0, 0, 0, -8, 24, -24, 8, 0, 0, 0, 0, 0, 0, 0, 0}, //3

        {0, -8, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0}, //4

        {0, -4, 0, 0, -4, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0}, //5
        
        {0, 32, -20, 0, 8, -4, -4, 0, 0, -24, 16, -4, 0, 0, 0, 0},//6 

        {0, -20, 12, 0, -4, 0, 4, 0, 0, 16, -12, 4, 0, 0, 0, 0}, //7

        {0, 16, 0, 0, 0, -40, 0, 0, 0, 32, 0, 0, 0, -8, 0, 0}, //8

        {0, 8, 0, 0, 32, -4, -24, 0, -20, -4, 16, 0, 0, 0, -4, 0},//9 

        {0, -64, 40, 0, -64, 96, -68, 24, 40, -68, 68, -16, 0, 24, -16, 4},//10 
       
        {0, 40, -24, 0, 32, -52, 52, -24, -20, 40, -52, 16, 0, -16, 12, -4}, //11
        
        {0, -8, 0, 0, 0, 24, 0, 0, 0, -24, 0, 0, 0, 8, 0, 0}, //12
        {0, -4, 0, 0, -20, 0, 16, 0, 12, 4, -12, 0, 0, 0, 4, 0}, //13
        {0, 32, -20, 0, 40, -52, 40, -16, -24, 52, -52, 12, 0, -24, 16, -4},//14 
        {0, -20, 12, 0, -20, 28, -32, 16, 12, -32, 40, -12, 0, 16, -12, 4}//15
    };

unsigned char pixel_matrix[16] = {        
    // rearranged pixel data
    0,0,0,0,
    0,0,0,0,
    0,0,0,0,
    0,0,0,0
};

int coefficient[16] = {
    0,0,0,0,
    0,0,0,0,
    0,0,0,0,
    0,0,0,0
};

void coefficient_compute(){
    for(int i = 0;i<16;i++){
        for(int j = 0;j<16;j++){
            coefficient[i] += pixel_matrix[j] * bicubic_param_matrix[i][j];
        }
    }
}
void coefficient_compute_spline(){
    for(int i = 0;i<16;i++){
        for(int j = 0;j<16;j++){
            coefficient[i] += pixel_matrix[j] * bicubic_spline_param_matrix[i][j];
        }
    }
}

void coefficient_init(){
    for(int i = 0;i<16;i++){
        for(int j = 0;j<16;j++){
            coefficient[i] = 0;
        }
    }
}

unsigned char interpolation_compute(float x, float y){
    return (unsigned char)min(((coefficient[0] + coefficient[1]*x + coefficient[2]*x*x + coefficient[3]*x*x*x +
            coefficient[4]*y + coefficient[5]*x*y + coefficient[6]*x*x*y+ coefficient[7]*x*x*x*y +
            coefficient[8]*y*y + coefficient[9]*x*y*y + coefficient[10]*x*x*y*y+ coefficient[11]*x*x*x*y*y +
            coefficient[12]*y*y*y + coefficient[13]*x*y*y*y + coefficient[14]*x*x*y*y*y+ coefficient[15]*x*x*x*y*y*y
            )/36), 255);
}

unsigned char interpolation_compute_spline(float x, float y){
    return (unsigned char)min(((coefficient[0] + coefficient[1]*x + coefficient[2]*x*x + coefficient[3]*x*x*x +
            coefficient[4]*y + coefficient[5]*x*y + coefficient[6]*x*x*y+ coefficient[7]*x*x*x*y +
            coefficient[8]*y*y + coefficient[9]*x*y*y + coefficient[10]*x*x*y*y+ coefficient[11]*x*x*x*y*y +
            coefficient[12]*y*y*y + coefficient[13]*x*y*y*y + coefficient[14]*x*x*y*y*y+ coefficient[15]*x*x*x*y*y*y
            )/16),255);
}


void bicubic_interpolation(RGB * pixel_old, RGBa * pixel_new){
    for (int rgb=0; rgb<1; ){
        for (int j=1; j<(2); j++){      // (i,j) represent location of orgin img.
            for (int i=1; i< (2); i++){
                memcpy(pixel_matrix , (unsigned char []){
*((unsigned char *)(&pixel_old[(i-1)+((j-1)*960)])+rgb), *((unsigned char *)(&pixel_old[(i)+((j-1)*960)])+ rgb), *((unsigned char *)(&pixel_old[(i+1)+((j-1)*960)])+ rgb), *((unsigned char *)(&pixel_old[(i+2)+((j-1)*960)])+ rgb),
*((unsigned char *)(&pixel_old[(i-1)+((j  )*960)])+rgb), *((unsigned char *)(&pixel_old[(i)+((j  )*960)])+ rgb), *((unsigned char *)(&pixel_old[(i+1)+((j  )*960)])+ rgb), *((unsigned char *)(&pixel_old[(i+2)+((j  )*960)])+ rgb),
*((unsigned char *)(&pixel_old[(i-1)+((j+1)*960)])+rgb), *((unsigned char *)(&pixel_old[(i)+((j+1)*960)])+ rgb), *((unsigned char *)(&pixel_old[(i+1)+((j+1)*960)])+ rgb), *((unsigned char *)(&pixel_old[(i+2)+((j+1)*960)])+ rgb),
*((unsigned char *)(&pixel_old[(i-1)+((j+2)*960)])+rgb), *((unsigned char *)(&pixel_old[(i)+((j+2)*960)])+ rgb), *((unsigned char *)(&pixel_old[(i+1)+((j+2)*960)])+ rgb), *((unsigned char *)(&pixel_old[(i+2)+((j+2)*960)])+ rgb)
                },16);
            for (int h = 0 ; h<16; h++){
                printf("%d\n",pixel_matrix[h]);
            }
                coefficient_init();
                #ifdef SPLINE
                coefficient_compute_spline();
            for (int z = 0 ; z<16; z++){
                printf("%d\n",coefficient[z]);
            }
                #else
                coefficient_compute();
                #endif
                unsigned char temp;
                for(int y=0;y<=3;y++){
                    for(int x=0;x<=3;x++){
                #ifdef SPLINE
                        *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = interpolation_compute_spline(0.25*x,0.25*y);
                    if(i==960-3){
                        for(int y_=1;y_<=3;y_++){
                        int x_=4;
                        *(((unsigned char *)(&pixel_new[(i*4+x_)+((j*4+y_)*3840)])) + rgb) = interpolation_compute_spline(0.25*x_,0.25*y_);
                        }
                    }
                    if(j==540-3){
                        for(int x_=1;x_<=3;x_++){
                        int y_=4;
                        *(((unsigned char *)(&pixel_new[(i*4+x_)+((j*4+y_)*3840)])) + rgb) = interpolation_compute_spline(0.25*x_,0.25*y_);
                        }
                    }

                #else
                        *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = interpolation_compute(0.25*x,0.25*y);
                    if(i==960-3){
                        for(int y_=1;y_<=3;y_++){
                        int x_=4;
                        *(((unsigned char *)(&pixel_new[(i*4+x_)+((j*4+y_)*3840)])) + rgb) = interpolation_compute(0.25*x_,0.25*y_);
                        }
                    }
                    if(j==540-3){
                        for(int x_=1;x_<=3;x_++){
                        int y_=4;
                        *(((unsigned char *)(&pixel_new[(i*4+x_)+((j*4+y_)*3840)])) + rgb) = interpolation_compute(0.25*x_,0.25*y_);
                        }
                    }
                #endif
                    }
                }
            }
        }
    rgb++;
    }

    // process edge
    for (int rgb=0; rgb<3; rgb++){
        for (int i=0; i< (960-1); i++){
        int j=0;        // first line
            short b=*((unsigned char *)(&pixel_new[(i*4)+((j*4)*3840)])+rgb);
            short k=*((unsigned char *)(&pixel_new[((i+1)*4)+((j*4)*3840)])+rgb) - b;
            for(int x=0;x<=3;x++){
                int y=0;
                *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = \
                min(((k*x)/4) + b, 255);
            }
        }
        for (int i=0; i< (960-1); i++){
        int j=540-1;        // last line
            short b=*((unsigned char *)(&pixel_new[(i*4)+((j*4)*3840)])+rgb);
            short k=*((unsigned char *)(&pixel_new[((i+1)*4)+((j*4)*3840)])+rgb) - b;
            for(int x=0;x<=3;x++){
                int y=0;
                *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = \
                min(((k*x)/4) + b, 255);
            }
        }

        for (int j=0; j<(540-1); j++){      // (i,j) represent location of orgin img.
            int i=0;    // first column
            short b=*((unsigned char *)(&pixel_new[(i*4)+((j*4)*3840)])+rgb);
            short k=*((unsigned char *)(&pixel_new[((i)*4)+(((j+1)*4)*3840)])+rgb) - b;
            for(int y=0;y<=3;y++){
                int x=0;
                *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = \
                min(((k*y)/4) + b, 255);
            }
        }
        for (int j=0; j<(540-1); j++){      // (i,j) represent location of orgin img.
            int i=960-1;        //last column
            short b=*((unsigned char *)(&pixel_new[(i*4)+((j*4)*3840)])+rgb);
            short k=*((unsigned char *)(&pixel_new[((i)*4)+(((j+1)*4)*3840)])+rgb) - b;
            for(int y=0;y<=3;y++){
                int x=0;
                *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = \
                min(((k*y)/4) + b, 255);
            }
        }

        for (int i=1; i<(960-2); i++){      // (i,j) represent location of orgin img.
            int j=0;        //first line space
            for(int x=0;x<=3;x++){
            short b=*((unsigned char *)(&pixel_new[(i*4 + x)+((j*4)*3840)])+rgb);
            short k=*((unsigned char *)(&pixel_new[(i*4 + x)+(((j+1)*4)*3840)])+rgb) - b;
                
                for(int y=1;y<=3;y++){
                *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = \
                min(((k*y)/4) + b, 255);
                }
            }
            if(i==960-3){
                short b=*((unsigned char *)(&pixel_new[((i+1)*4)+((j*4)*3840)])+rgb);
                short k=*((unsigned char *)(&pixel_new[((i+1)*4)+(((j+1)*4)*3840)])+rgb) - b;
                
                for(int y=1;y<=3;y++){
                *(((unsigned char *)(&pixel_new[((i+1)*4)+((j*4+y)*3840)])) + rgb) = \
                min(((k*y)/4) + b, 255);
                }
            }
        }
        for (int i=1; i<(960-2); i++){      // (i,j) represent location of orgin img.
            int j=540-2;        //last line space
            for(int x=0;x<=3;x++){
            short b=*((unsigned char *)(&pixel_new[(i*4 + x)+((j*4)*3840)])+rgb);
            short k=*((unsigned char *)(&pixel_new[(i*4 + x)+(((j+1)*4)*3840)])+rgb) - b;
                
                for(int y=1;y<=3;y++){
                *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = \
                min(((k*y)/4) + b, 255);
                }
            }
            if(i==960-3){
                short b=*((unsigned char *)(&pixel_new[((i+1)*4)+((j*4)*3840)])+rgb);
                short k=*((unsigned char *)(&pixel_new[((i+1)*4)+(((j+1)*4)*3840)])+rgb) - b;
                
                for(int y=1;y<=3;y++){
                *(((unsigned char *)(&pixel_new[((i+1)*4)+((j*4+y)*3840)])) + rgb) = \
                min(((k*y)/4) + b, 255);
                }
            }
        }

        for (int j=0; j<(540-1); j++){      // (i,j) represent location of orgin img.
            int i=0;        //first column space
            for(int y=0;y<=3;y++){
            short b=*((unsigned char *)(&pixel_new[(i*4)+((j*4 + y)*3840)])+rgb);
            short k=*((unsigned char *)(&pixel_new[((i+1)*4)+((j*4 + y)*3840)])+rgb) - b;
                
                for(int x=1;x<=3;x++){
                *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = \
                min(((k*x)/4) + b, 255);
                }
            }
        }
        for (int j=0; j<(540-1); j++){      // (i,j) represent location of orgin img.
            int i=960-2;        //last column space
            for(int y=0;y<=3;y++){
            short b=*((unsigned char *)(&pixel_new[(i*4)+((j*4 + y)*3840)])+rgb);
            short k=*((unsigned char *)(&pixel_new[((i+1)*4)+((j*4 + y)*3840)])+rgb) - b;
                
                for(int x=1;x<=3;x++){
                *(((unsigned char *)(&pixel_new[(i*4+x)+((j*4+y)*3840)])) + rgb) = \
                min(((k*x)/4) + b, 255);
                }
            }
        }


    }
}
