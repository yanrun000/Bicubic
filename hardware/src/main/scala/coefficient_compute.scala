
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
//这里暂定32位，到时候再说，可能16位就够用了
        val coefficient_0   = Output(UInt(32.W))
        val coefficient_1   = Output(UInt(32.W))
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
    })

    io.coefficient_0    :=   (io.pix_5* 16.U)
    io.coefficient_1    :=    (- io.pix_4 * 8.U + io.pix_6 * 8.U)
    io.coefficient_2    :=    io.pix_4.asSInt * 16.S - io.pix_5.asSInt * 40.S + io.pix_6.asSInt * 32.S  - io.pix_7.asSInt * 8.S

    io.coefficient_3    :=   0.S - io.pix_4 * 8.S + io.pix_5.asSInt * 24.S - io.pix_6.asSInt * 24.S  + io.pix_7.asSInt * 8.S  
    
    io.coefficient_4    :=   0.S - io.pix_1.asSInt * 8.S + io.pix_9.asSInt * 8.S 

    io.coefficient_5    :=   0.S-io.pix_1.asSInt * 4.S - io.pix_4.asSInt * 4.S + io.pix_5.asSInt * 4.S + io.pix_10.asSInt * 4.S
   
    io.coefficient_6    :=   io.pix_1.asSInt * 32.S - io.pix_2.asSInt * 20.S + io.pix_4.asSInt * 8.S  - io.pix_5.asSInt * 4.S   -  io.pix_6.asSInt * 4.S 
                                               - io.pix_9.asSInt * 24.S  + io.pix_10.asSInt * 16.S - io.pix_11.asSInt * 4.S  

    io.coefficient_7    :=    - io.pix_1.asSInt * 20.S + io.pix_2.asSInt * 12.S - io.pix_4.asSInt * 4.S  + io.pix_6.asSInt * 4.S   - io.pix_9.asSInt * 16.S - io.pix_10.asSInt * 12.S +  io.pix_11.asSInt * 4.S

    io.coefficient_8    :=    - io.pix_1.asSInt * 16.S - io.pix_5.asSInt * 40.S + io.pix_9.asSInt * 32.S  - io.pix_13.asSInt * 8.S   
    
    io.coefficient_9    :=    - io.pix_1.asSInt * 8.S + io.pix_4.asSInt * 32.S - io.pix_5.asSInt * 4.S  - io.pix_6.asSInt * 24.S   - io.pix_8.asSInt * 20.S - io.pix_9.asSInt * 4.S +  io.pix_10.asSInt * 16.S -io.pix_14.asSInt * 4.S
   
    io.coefficient_10    :=    - io.pix_1.asSInt * 64.S + io.pix_2.asSInt * 40.S - io.pix_4.asSInt * 64.S  + io.pix_5.asSInt * 96.S   - io.pix_6.asSInt * 68.S + io.pix_7.asSInt * 24.S +  io.pix_8.asSInt * 40.S -io.pix_9.asSInt * 68.S+ io.pix_10.asSInt * 68.S - io.pix_11.asSInt * 16.S + io.pix_13.asSInt * 24.S  - io.pix_14.asSInt * 16.S   + io.pix_15.asSInt * 4.S 
    
    io.coefficient_11    :=     io.pix_1.asSInt * 40.S - io.pix_2.asSInt * 24.S + io.pix_4.asSInt * 32.S  -  io.pix_5.asSInt * 52.S   + io.pix_6.asSInt * 52.S - io.pix_7.asSInt * 24.S -  io.pix_8.asSInt * 20.S + io.pix_9.asSInt * 40.S
                                                - io.pix_10.asSInt * 52.S + io.pix_11.asSInt * 16.S - io.pix_13.asSInt * 16.S  + io.pix_14.asSInt * 12.S   -  io.pix_15.asSInt * 4.S 

    io.coefficient_12    :=    - io.pix_1.asSInt * 8.S + io.pix_5.asSInt * 24.S - io.pix_9.asSInt * 24.S  +  io.pix_13.asSInt * 8.S 

    io.coefficient_13    :=    - io.pix_1.asSInt * 4.S + io.pix_4.asSInt * 20.S + io.pix_6.asSInt * 16.S  +  io.pix_8.asSInt * 12.S  +  io.pix_9.asSInt * 4.S -  io.pix_10.asSInt * 12.S +  io.pix_14.asSInt * 4.S

    io.coefficient_14    :=    io.pix_1.asSInt * 32.S - io.pix_3.asSInt * 20.S + io.pix_4.asSInt * 40.S  -  io.pix_5.asSInt * 52.S  +  io.pix_6.asSInt * 40.S -  io.pix_7.asSInt * 16.S -  io.pix_8.asSInt * 24.S  +  io.pix_9.asSInt * 52.S                               
                                                 -io.pix_10.asSInt * 52.S + io.pix_11.asSInt * 12.S - io.pix_13.asSInt * 24.S  +  io.pix_14.asSInt * 52.S  - io.pix_15.asSInt * 4.S        
    io.coefficient_15    :=    -io.pix_1.asSInt * 20.S + io.pix_2.asSInt * 12.S - io.pix_4.asSInt * 20.S  +  io.pix_5.asSInt * 28.S  -  io.pix_6.asSInt * 32.S +  io.pix_7.asSInt * 16.S +  io.pix_8.asSInt * 12.S  -  io.pix_9.asSInt * 32.S +io.pix_10.asSInt * 40.S - io.pix_11.asSInt * 12.S - io.pix_13.asSInt * 16.S  -  io.pix_14.asSInt * 12.S  + io.pix_15.asSInt * 4.S        
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
// -68

