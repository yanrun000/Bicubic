
package bicubic
import Chisel._
// import chisel3 ._
import chisel3.util._
import chisel3 . iotesters ._
import org.scalatest._
import chisel3.iotesters.PeekPokeTester
import chisel3.iotesters.Driver


class coefficient_compute_spline extends Module{
 val io = IO(new Bundle{
        val pix_0   = Input(UInt(8.W))
        val pix_1   = Input(UInt(8.W))   
        val pix_2   = Input(UInt(8.W))
        val pix_3   = Input(UInt(8.W))
        val pix_4   = Input(UInt(8.W))   
        val pix_5   = Input(UInt(8.W))
        val pix_6   = Input(UInt(8.W))
        val pix_7   = Input(UInt(8.W))   
        val pix_8   = Input(UInt(8.W))
        val pix_9   = Input(UInt(8.W))
        val pix_10 = Input(UInt(8.W))    
        val pix_11 = Input(UInt(8.W))
        val pix_12 = Input(UInt(8.W))    
        val pix_13 = Input(UInt(8.W))
        val pix_14 = Input(UInt(8.W))
        val pix_15 = Input(UInt(8.W))
        val i_in      = Input(UInt(8.W))
        val j_in      = Input(UInt(8.W))
//这里暂定32位，到时候再说，可能16位就够用了
        val coefficient_0   = Output(SInt(32.W))
        val coefficient_1   = Output(SInt(32.W))
        val coefficient_2   = Output(SInt(32.W))
        val coefficient_3   = Output(SInt(32.W))
        val coefficient_4   = Output(SInt(32.W))
        val coefficient_5   = Output(SInt(32.W))
        val coefficient_6   = Output(SInt(32.W))
        val coefficient_7   = Output(SInt(32.W))
        val coefficient_8   = Output(SInt(32.W))
        val coefficient_9   = Output(SInt(32.W))
        val coefficient_10 = Output(SInt(32.W))
        val coefficient_11 = Output(SInt(32.W))
        val coefficient_12 = Output(SInt(32.W))
        val coefficient_13 = Output(SInt(32.W))
        val coefficient_14 = Output(SInt(32.W))
        val coefficient_15 = Output(SInt(32.W))
        val i_out                   = Output(UInt(8.W))
        val j_out                   = Output(UInt(8.W))

        // val test_in_U                      = Input(UInt(5.W))
        // val test_in_S                       = Input(SInt(5.W))

        // val test_out_U_U             = Output(UInt(5.W))
        // val test_out_U_S              = Output(SInt(5.W))

        // val test_out_S_U             = Output(UInt(5.W))
        // val test_out_S_S              = Output(SInt(5.W))

    })

      // io.test_out_U_U            := io.test_in_U
      // io.test_out_U_S             := io.test_in_U 

      // io.test_out_S_U            := io.test_in_S.asUInt
      // io.test_out_S_S             := io.test_in_S



    io.coefficient_0    :=   (io.pix_5* 16.U).asSInt 
    io.coefficient_1    :=    (io.pix_6 * 8.U- io.pix_4 * 8.U).asSInt 
    io.coefficient_2    :=    (io.pix_4* 16.U - io.pix_5 * 40.U + io.pix_6 * 32.U  - io.pix_7* 8.U).asSInt 

    io.coefficient_3    :=   (io.pix_5 * 24.U - io.pix_6 * 24.U  + io.pix_7 * 8.U  - io.pix_4 * 8.U) .asSInt 
    
    io.coefficient_4    :=     ( io.pix_9 * 8.U - io.pix_1 * 8.U).asSInt

    io.coefficient_5    :=    (io.pix_5 * 4.U + io.pix_10 * 4.U -io.pix_1 * 4.U - io.pix_4 * 4.U).asSInt
   
    io.coefficient_6    :=  ( io.pix_1 * 32.U - io.pix_2 * 20.U + io.pix_4 * 8.U  - io.pix_5 * 4.U   -  io.pix_6 * 4.U  - io.pix_9 * 24.U  + io.pix_10 * 16.U - io.pix_11 * 4.U).asSInt

    io.coefficient_7    :=   (io.pix_2 * 12.U - io.pix_4 * 4.U  + io.pix_6  * 4.U   + io.pix_9  * 16.U - io.pix_10  * 12.U +  io.pix_11  * 4.U  - io.pix_1  * 20.U).asSInt

    io.coefficient_8    :=    (io.pix_9  * 32.U  - io.pix_13  * 8.U +  io.pix_1  * 16.U - io.pix_5  * 40.U).asSInt   
    
    io.coefficient_9    :=    (io.pix_1  * 8.U + io.pix_4  * 32.U - io.pix_5  * 4.U  - io.pix_6  * 24.U   - io.pix_8  * 20.U - io.pix_9  * 4.U +  io.pix_10  * 16.U -io.pix_14  * 4.U ).asSInt   
   
    io.coefficient_10    :=   ( io.pix_2  * 40.U - io.pix_1  * 64.U - io.pix_4  * 64.U  + io.pix_5  * 96.U   - io.pix_6  * 68.U + io.pix_7  * 24.U +  io.pix_8  * 40.U -io.pix_9  * 68.U+ io.pix_10  * 68.U - io.pix_11  * 16.U + io.pix_13  * 24.U  - io.pix_14  * 16.U   + io.pix_15  * 4.U ).asSInt
    
    io.coefficient_11    :=     (io.pix_1  * 40.U - io.pix_2  * 24.U + io.pix_4  * 32.U  -  io.pix_5  * 52.U   + io.pix_6  * 52.U - io.pix_7  * 24.U -  io.pix_8  * 20.U + io.pix_9  * 40.U
                                                - io.pix_10  * 52.U + io.pix_11  * 16.U - io.pix_13  * 16.U  + io.pix_14  * 12.U   -  io.pix_15  * 4.U ).asSInt   

    io.coefficient_12    :=    ( io.pix_5  * 24.U - io.pix_9  * 24.U  +  io.pix_13  * 8.U  - io.pix_1  * 8.U).asSInt

    io.coefficient_13    :=    ( io.pix_6  * 16.U  +  io.pix_8  * 12.U  +  io.pix_9  * 4.U -  io.pix_10  * 12.U +  io.pix_14  * 4.U- io.pix_1  * 4.U - io.pix_4  * 20.U).asSInt

    io.coefficient_14    :=   ( io.pix_1  * 32.U - io.pix_2  * 20.U + io.pix_4  * 40.U  -  io.pix_5  * 52.U  +  io.pix_6  * 40.U -  io.pix_7  * 16.U -  io.pix_8  * 24.U  +  io.pix_9  * 52.U  - io.pix_10  * 52.U + io.pix_11  * 12.U - io.pix_13  * 24.U  +  io.pix_14  * 16.U  - io.pix_15  * 4.U).asSInt      
   

    io.coefficient_15  := ( 0.U-32.U*io.pix_9+io.pix_2*12.U - io.pix_1*20.U-20.U * io.pix_4 +28.U * io.pix_5 -32.U * io.pix_6 +16.U * io.pix_7+12.U*io.pix_8 
                                           +40.U*io.pix_10-12.U*io.pix_11+16.U*io.pix_13-12.U*io.pix_14+4.U * io.pix_15).asSInt   

    io.i_out            := io.i_in
    io.j_out            := io.j_in



}
object coefficient_compute extends App {
  chisel3.Driver.execute(args, () => new coefficient_compute_spline())
}

class coefficient_compute_test (dut:coefficient_compute_spline) extends PeekPokeTester(dut){
        poke(dut.io.pix_0,251.U)
        poke(dut.io.pix_1,250.U)
        poke(dut.io.pix_2,251.U)
        poke(dut.io.pix_3,250.U)
        poke(dut.io.pix_4,251.U)
        poke(dut.io.pix_5,249.U)
        poke(dut.io.pix_6,252.U)
        poke(dut.io.pix_7,253.U)
        poke(dut.io.pix_8,250.U)
        poke(dut.io.pix_9,252.U)
        poke(dut.io.pix_10,251.U)
        poke(dut.io.pix_11,252.U)
        poke(dut.io.pix_12,252.U)
        poke(dut.io.pix_13,251.U)
        poke(dut.io.pix_14,250.U)
        poke(dut.io.pix_15,254.U)
        // poke(dut.io.pix_2,1.U)
        // poke(dut.io.pix_1,1.U)


        // poke(dut.io.test_in_U,5.U)
        // poke(dut.io.test_in_S,-5.S)


        step(5)



}
object coefficient_test extends App {
  chisel3.iotesters.Driver.execute(args, () => new coefficient_compute_spline())(c => new coefficient_compute_test(c))
}


// 251
// 250
// 251
// 250
// 251
// 249
// 252
// 253
// 250
// 252
// 251
// 252
// 252
// 251
// 250
// 254

// 3984
// 8
// 96
// -56
// 16
// -4
// -56
// 44
// 96
// -4
// -244
// 120
// -64
// 8
// 140
// -68  现在的数字是8124

