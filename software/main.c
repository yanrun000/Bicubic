#include<stdio.h>
#include<stdlib.h>
#include "matrix_relavent.h"

typedef unsigned char byte;
char* bmpfile,* bmpfile_new;

#define WIDTH   3840
#define HEIGHT  2160
#define BPP     24

void header_init_4k(HEADER* header_4k, WINBITMAP* winbitmap_4k){
    header_4k->type      =19778                             ;       // 0x4D 0x42
    header_4k->size      =(WIDTH*HEIGHT*(BPP/8) + 14 + 40)  ;       // 3840*2160*3 + 14fileheader + 40winbitmap
    header_4k->reserved  =0                                 ;
    header_4k->offset    =54                                ;       // 14fileheader + 40winbitmap
                        
    winbitmap_4k->size   =40                                ;       // fixed
    winbitmap_4k->width  =WIDTH                             ;       // 3840 pixels width
    winbitmap_4k->height =HEIGHT                            ;       // 2160 pixels height
    winbitmap_4k->planes =1                                 ;
    winbitmap_4k->bits   =BPP                               ;       // 24bpp
    winbitmap_4k->compression=0                             ;
    winbitmap_4k->imagesize=WIDTH*HEIGHT*(BPP/8)            ;       // 3840*2160*3
    winbitmap_4k->xresolution=3779                          ;       // pixel per metre
    winbitmap_4k->yresolution=3779                          ;
    winbitmap_4k->ncolours=0                                ;
    winbitmap_4k->importantcolours=0                        ;
}

int parse_args(int argc, char** argv){
    int i =1;
    while (i<argc)
    {
        if(!strcmp(argv[i], "-s")){
            i++;
            bmpfile = argv[i];
        }
        else if(!strcmp(argv[i], "-d")){
            i++;
            bmpfile_new = argv[i];
        }
        else{
            printf("\nunexpected params!\t%s\t\n", argv[i]);
            exit(0);
        }
        i++;
    }
    return 0;
}

void main(int argc, char** argv){
    parse_args(argc, argv);

    HEADER header_orgin, header_4k;
    WINBITMAP winbitmap_orgin, winbitmap_4k;
    RGB temp_pixel;
    RGB *pixel,*pixel_backup;
    pixel = (RGB*) malloc(sizeof(RGB) * 960 * 540);
    pixel_backup = pixel;

    RGBa *pixel_new,* pixel_new_backup;
    pixel_new = (RGBa*) malloc(sizeof(RGBa) * 3840 * 2160);
    pixel_new_backup = pixel_new;

    // "./dataset_v0.0.1/downscaled/0.bmp";
    // char* ="./dataset_v0.0.1/bicubic_new/0.bmp";
    read_header(bmpfile, &header_orgin);
    read_winbitmap(bmpfile, &winbitmap_orgin);

    for (int i =0; i<540;i++){
        for(int j=0; j<960;j++){
            read_pixel_win(j,i,bmpfile,header_orgin,winbitmap_orgin, &temp_pixel);
            *pixel = temp_pixel;
            pixel++;
        }
    }
    pixel = pixel_backup;

    for (int i =0; i<3840;i++){         // init 4k image
        for(int j=0; j<2160;j++){
            pixel_new->rgb = (RGB){(unsigned char)(0),(unsigned char)(0),(unsigned char)(0)};
            // pixel_new->alpha = (unsigned char)(0);
            pixel_new++;
        }
    }
    pixel_new = pixel_new_backup;
    pixel_new+=(3840*2);
    pixel_new+=2;

    for (int i =0; i<2160;i+=4){        // put old pixels into new image
        for(int j=0; j<3840;j+=4){
            pixel_new->rgb = *pixel;
            pixel_new+=4;
            pixel++;
        }
        pixel_new+=(3840*3);
    }
    pixel = pixel_backup;
    pixel_new = pixel_new_backup;

    bicubic_interpolation(pixel, pixel_new);

    header_init_4k(&header_4k,&winbitmap_4k);
    write_bmp_file(bmpfile_new, &header_4k, &winbitmap_4k, pixel_new_backup);
    free(pixel_new_backup);
    free(pixel_backup);
}