
package bicubic
import Chisel._
// import chisel3 ._
import chisel3.util._
import chisel3 . iotesters ._
import org.scalatest._
import chisel3.iotesters.PeekPokeTester
import chisel3.iotesters.Driver


class interpolation_compute_spline extends Module{
 val io = IO(new Bundle{
        val i_in                      = Input(SInt(8.W))
        val j_in                      = Input(SInt(8.W))
        val x_in                     = Input(SInt(8.W))
        val y_in                     = Input(SInt(8.W))
        
        val coefficient_0   = Input(SInt(32.W))
        val coefficient_1   = Input(SInt(32.W))
        val coefficient_2   = Input(SInt(32.W))
        val coefficient_3   = Input(SInt(32.W))
        val coefficient_4   = Input(SInt(32.W))
        val coefficient_5   = Input(SInt(32.W))
        val coefficient_6   = Input(SInt(32.W))
        val coefficient_7   = Input(SInt(32.W))
        val coefficient_8   = Input(SInt(32.W))
        val coefficient_9   = Input(SInt(32.W))
        val coefficient_10 = Input(SInt(32.W))
        val coefficient_11 = Input(SInt(32.W))
        val coefficient_12 = Input(SInt(32.W))
        val coefficient_13 = Input(SInt(32.W))
        val coefficient_14 = Input(SInt(32.W))
        val coefficient_15 = Input(SInt(32.W))

        val interpolation_compute_spline  = Output(UInt(8.W)) 
        val i_out                   = Output(UInt(8.W))
        val j_out                   = Output(UInt(8.W))
        val x_out                  = Output(UInt(8.W))
        val y_out                  = Output(UInt(8.W))
        val wr_addr            = Output(UInt(32.W))
     

    })

    //step(1)
      val temp_1 = RegInit(0.S(32.W))
      val i_1           = RegInit(0.U(8.W))
      val j_1           = RegInit(0.U(8.W)) 
      val x_1           = RegInit(0.U(8.W))
      val y_1           = RegInit(0.U(8.W)) 
    temp_1 := (io.coefficient_0  + io.coefficient_1 / 4.S * io.x_in + io.coefficient_2 / 16.S *io.x_in * io.x_in  + io.coefficient_3 / 64.S *io.x_in *io.x_in*io.x_in
                    + io.coefficient_4 /4.S *io.y_in +io.coefficient_5 /16.S *io.x_in*io.y_in + io.coefficient_6 /64.S *io.y_in*io.x_in*io.x_in +io.coefficient_7 /256.S *io.x_in*io.x_in*io.x_in*io.y_in
                    + io.coefficient_8 /16.S *io.y_in*io.y_in + io.coefficient_9 /64.S *io.x_in*io.y_in*io.y_in +io.coefficient_10 /256.S *io.x_in*io.x_in*io.y_in*io.y_in +io.coefficient_11 /1024.S *io.x_in*io.x_in*io.x_in*io.y_in
                    + io.coefficient_12 /64.S *io.y_in*io.y_in*io.y_in +io.coefficient_13 /256.S *io.x_in*io.y_in*io.y_in*io.y_in+io.coefficient_14 /1024.S *io.x_in*io.x_in*io.y_in*io.y_in*io.y_in
                    + io.coefficient_15 /4096.S *io.x_in*io.x_in*io.x_in*io.y_in*io.y_in*io.y_in)

      i_1                       := io.i_in.asUInt
      j_1                       := io.j_in.asUInt
      x_1                       := io.x_in.asUInt
      y_1                       := io.y_in.asUInt
      //step(2)
      val temp_2  = RegInit(0.S(32.W))
      val i_2            = RegInit(0.U(8.W))
      val j_2            = RegInit(0.U(8.W)) 
      val x_2           = RegInit(0.U(8.W))
      val y_2           = RegInit(0.U(8.W)) 
      temp_2   := temp_1/16.S
      i_2                   := i_1 
      j_2                   := j_1
      x_2                   := x_1 
      y_2                   := y_1
      //step(3)
      val temp_3  = RegInit(0.S(32.W))
      val i_3            = RegInit(0.U(8.W))
      val j_3            = RegInit(0.U(8.W)) 
      val x_3           = RegInit(0.U(8.W))
      val y_3           = RegInit(0.U(8.W)) 
      temp_3    := Mux(temp_2>= 255.S,255.S,temp_2)
      i_3                   := i_2 
      j_3                   := j_2
      x_3                   := x_2 
      y_3                   := y_2
    //step(4)
    when ((positive(temp_3))===1.U){
      io.interpolation_compute_spline := temp_3.asUInt
    }.elsewhen((positive(temp_3))===0.U){
      io.interpolation_compute_spline := 0.U
    }

    io.i_out  := i_3
    io.j_out  := j_3
    io.x_out  := x_3
    io.y_out  := y_3
    io.wr_addr    :=  i_3*4.U+ x_3+2.U + (j_3 *4.U+y_3+2.U)*3840.U 


}
object interpolation_compute_spline extends App {
  chisel3.Driver.execute(args, () => new interpolation_compute_spline())
}

class cinterpolation_compute_spline_test (dut:interpolation_compute_spline) extends PeekPokeTester(dut){
        
        step(1)
        poke(dut.io.coefficient_0,3984.S)
        poke(dut.io.coefficient_1,8.S)
        poke(dut.io.coefficient_2,96.S)
        poke(dut.io.coefficient_3,-56.S)
        poke(dut.io.coefficient_4,16.S)
        poke(dut.io.coefficient_5,-4.S)
        poke(dut.io.coefficient_6,-56.S)
        poke(dut.io.coefficient_7,44.S)
        poke(dut.io.coefficient_8,96.S)
        poke(dut.io.coefficient_9,-4.S)
        poke(dut.io.coefficient_10,-244.S)
        poke(dut.io.coefficient_11,120.S)
        poke(dut.io.coefficient_12,-64.S)
        poke(dut.io.coefficient_13,8.S)
        poke(dut.io.coefficient_14,140.S)
        poke(dut.io.coefficient_15,-68.S)
        poke(dut.io.i_in,1.S)
        poke(dut.io.j_in,1.S)
        poke(dut.io.x_in,0.S)
        poke(dut.io.y_in,0.S)
        step(1)
        poke(dut.io.coefficient_0,3984.S)
        poke(dut.io.coefficient_1,8.S)
        poke(dut.io.coefficient_2,96.S)
        poke(dut.io.coefficient_3,-56.S)
        poke(dut.io.coefficient_4,16.S)
        poke(dut.io.coefficient_5,-4.S)
        poke(dut.io.coefficient_6,-56.S)
        poke(dut.io.coefficient_7,44.S)
        poke(dut.io.coefficient_8,96.S)
        poke(dut.io.coefficient_9,-4.S)
        poke(dut.io.coefficient_10,-244.S)
        poke(dut.io.coefficient_11,120.S)
        poke(dut.io.coefficient_12,-64.S)
        poke(dut.io.coefficient_13,8.S)
        poke(dut.io.coefficient_14,140.S)
        poke(dut.io.coefficient_15,-68.S)
        poke(dut.io.i_in,1.S)
        poke(dut.io.j_in,1.S)
        poke(dut.io.x_in,1.S)
        poke(dut.io.y_in,0.S)
        step(1)
        poke(dut.io.coefficient_0,3984.S)
        poke(dut.io.coefficient_1,8.S)
        poke(dut.io.coefficient_2,96.S)
        poke(dut.io.coefficient_3,-56.S)
        poke(dut.io.coefficient_4,16.S)
        poke(dut.io.coefficient_5,-4.S)
        poke(dut.io.coefficient_6,-56.S)
        poke(dut.io.coefficient_7,44.S)
        poke(dut.io.coefficient_8,96.S)
        poke(dut.io.coefficient_9,-4.S)
        poke(dut.io.coefficient_10,-244.S)
        poke(dut.io.coefficient_11,120.S)
        poke(dut.io.coefficient_12,-64.S)
        poke(dut.io.coefficient_13,8.S)
        poke(dut.io.coefficient_14,140.S)
        poke(dut.io.coefficient_15,-68.S)
        poke(dut.io.i_in,1.S)
        poke(dut.io.j_in,1.S)
        poke(dut.io.x_in,2.S)
        poke(dut.io.y_in,0.S)
        step(1)
        poke(dut.io.coefficient_0,3984.S)
        poke(dut.io.coefficient_1,8.S)
        poke(dut.io.coefficient_2,96.S)
        poke(dut.io.coefficient_3,-56.S)
        poke(dut.io.coefficient_4,16.S)
        poke(dut.io.coefficient_5,-4.S)
        poke(dut.io.coefficient_6,-56.S)
        poke(dut.io.coefficient_7,44.S)
        poke(dut.io.coefficient_8,96.S)
        poke(dut.io.coefficient_9,-4.S)
        poke(dut.io.coefficient_10,-244.S)
        poke(dut.io.coefficient_11,120.S)
        poke(dut.io.coefficient_12,-64.S)
        poke(dut.io.coefficient_13,8.S)
        poke(dut.io.coefficient_14,140.S)
        poke(dut.io.coefficient_15,-68.S)
        poke(dut.io.i_in,1.S)
        poke(dut.io.j_in,1.S)
        poke(dut.io.x_in,3.S)
        poke(dut.io.y_in,0.S)


        // poke(dut.io.test_in_U,5.U)
        // poke(dut.io.test_in_S,-5.S)

        step(1)
        poke(dut.io.coefficient_0,1504.S)
        poke(dut.io.coefficient_1,-64.S)
        poke(dut.io.coefficient_2,368.S)
        poke(dut.io.coefficient_3,-192.S)
        poke(dut.io.coefficient_4,-16.S)
        poke(dut.io.coefficient_5,-32.S)
        poke(dut.io.coefficient_6,120.S)
        poke(dut.io.coefficient_7,-56.S)
        poke(dut.io.coefficient_8,224.S)
        poke(dut.io.coefficient_9,404.S)
        poke(dut.io.coefficient_10, -140.S)
        poke(dut.io.coefficient_11,-88.S)
        poke(dut.io.coefficient_12,-96.S)
        poke(dut.io.coefficient_13,-252.S)
        poke(dut.io.coefficient_14,-108.S)
        poke(dut.io.coefficient_15,184.S)
        poke(dut.io.i_in,1.S)
        poke(dut.io.j_in,1.S)
        poke(dut.io.x_in,0.S)
        poke(dut.io.y_in,0.S)
              step(1)
        poke(dut.io.coefficient_0,1504.S)
        poke(dut.io.coefficient_1,-64.S)
        poke(dut.io.coefficient_2,368.S)
        poke(dut.io.coefficient_3,-192.S)
        poke(dut.io.coefficient_4,-16.S)
        poke(dut.io.coefficient_5,-32.S)
        poke(dut.io.coefficient_6,120.S)
        poke(dut.io.coefficient_7,-56.S)
        poke(dut.io.coefficient_8,224.S)
        poke(dut.io.coefficient_9,404.S)
        poke(dut.io.coefficient_10, -140.S)
        poke(dut.io.coefficient_11,-88.S)
        poke(dut.io.coefficient_12,-96.S)
        poke(dut.io.coefficient_13,-252.S)
        poke(dut.io.coefficient_14,-108.S)
        poke(dut.io.coefficient_15,184.S)
        poke(dut.io.i_in,1.S)
        poke(dut.io.j_in,1.S)
        poke(dut.io.x_in,1.S)
        poke(dut.io.y_in,0.S)
        step(1)
        poke(dut.io.coefficient_0,1504.S)
        poke(dut.io.coefficient_1,-64.S)
        poke(dut.io.coefficient_2,368.S)
        poke(dut.io.coefficient_3,-192.S)
        poke(dut.io.coefficient_4,-16.S)
        poke(dut.io.coefficient_5,-32.S)
        poke(dut.io.coefficient_6,120.S)
        poke(dut.io.coefficient_7,-56.S)
        poke(dut.io.coefficient_8,224.S)
        poke(dut.io.coefficient_9,404.S)
        poke(dut.io.coefficient_10, -140.S)
        poke(dut.io.coefficient_11,-88.S)
        poke(dut.io.coefficient_12,-96.S)
        poke(dut.io.coefficient_13,-252.S)
        poke(dut.io.coefficient_14,-108.S)
        poke(dut.io.coefficient_15,184.S)
        poke(dut.io.i_in,1.S)
        poke(dut.io.j_in,1.S)
        poke(dut.io.x_in,2.S)
        poke(dut.io.y_in,0.S)
              step(1)
        poke(dut.io.coefficient_0,1504.S)
        poke(dut.io.coefficient_1,-64.S)
        poke(dut.io.coefficient_2,368.S)
        poke(dut.io.coefficient_3,-192.S)
        poke(dut.io.coefficient_4,-16.S)
        poke(dut.io.coefficient_5,-32.S)
        poke(dut.io.coefficient_6,120.S)
        poke(dut.io.coefficient_7,-56.S)
        poke(dut.io.coefficient_8,224.S)
        poke(dut.io.coefficient_9,404.S)
        poke(dut.io.coefficient_10, -140.S)
        poke(dut.io.coefficient_11,-88.S)
        poke(dut.io.coefficient_12,-96.S)
        poke(dut.io.coefficient_13,-252.S)
        poke(dut.io.coefficient_14,-108.S)
        poke(dut.io.coefficient_15,184.S)
        poke(dut.io.i_in,1.S)
        poke(dut.io.j_in,1.S)
        poke(dut.io.x_in,3.S)
        poke(dut.io.y_in,0.S)
                
      step(5)

}
object interpolation_test extends App {
  chisel3.iotesters.Driver.execute(args, () => new interpolation_compute_spline())(c => new cinterpolation_compute_spline_test(c))
}


// 1504
// -64
// 368
// -192
// -16
// -32
// 120
// -56
// 224
// 404
// -140
// -88
// -96
// -252
// -108
// 184
