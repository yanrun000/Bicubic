
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
        
     

    })

    val temp_1 = RegInit(0.S(32.W))
    val temp_2 = RegInit(0.S(32.W))
  temp_1 := (io.coefficient_0  + io.coefficient_1 / 4.S * io.x_in + io.coefficient_2 / 16.S *io.x_in * io.x_in  + io.coefficient_3 / 64.S *io.x_in *io.x_in*io.x_in
                  + io.coefficient_4 /4.S *io.y_in +io.coefficient_5 /16.S *io.x_in*io.y_in + io.coefficient_6 /64.S *io.y_in*io.x_in*io.x_in +io.coefficient_7 /256.S *io.x_in*io.x_in*io.x_in*io.y_in
                  + io.coefficient_8 /16.S *io.y_in*io.y_in + io.coefficient_9 /64.S *io.x_in*io.y_in*io.y_in +io.coefficient_10 /256.S *io.x_in*io.x_in*io.y_in*io.y_in +io.coefficient_11 /1024.S *io.x_in*io.x_in*io.x_in*io.y_in
                  + io.coefficient_12 /64.S *io.y_in*io.y_in*io.y_in +io.coefficient_13 /256.S *io.x_in*io.y_in*io.y_in*io.y_in+io.coefficient_14 /1024.S *io.x_in*io.x_in*io.y_in*io.y_in*io.y_in
                  + io.coefficient_15 /4096.S *io.x_in*io.x_in*io.x_in*io.y_in*io.y_in*io.y_in)
  temp_2   := temp_1.asUInt/16.S

  io.interpolation_compute_spline:= Mux(temp_2>= 255.U,255.U,temp_2)

}
object interpolation_compute_spline extends App {
  chisel3.Driver.execute(args, () => new interpolation_compute_spline())
}

// class coefficient_compute_test (dut:coefficient_compute_spline) extends PeekPokeTester(dut){
//         poke(dut.io.pix_0,251.U)
//         poke(dut.io.pix_1,250.U)
//         poke(dut.io.pix_2,251.U)
//         poke(dut.io.pix_3,250.U)
//         poke(dut.io.pix_4,251.U)
//         poke(dut.io.pix_5,249.U)
//         poke(dut.io.pix_6,252.U)
//         poke(dut.io.pix_7,253.U)
//         poke(dut.io.pix_8,250.U)
//         poke(dut.io.pix_9,252.U)
//         poke(dut.io.pix_10,251.U)
//         poke(dut.io.pix_11,252.U)
//         poke(dut.io.pix_12,252.U)
//         poke(dut.io.pix_13,251.U)
//         poke(dut.io.pix_14,250.U)
//         poke(dut.io.pix_15,254.U)
//         // poke(dut.io.pix_2,1.U)
//         // poke(dut.io.pix_1,1.U)


//         // poke(dut.io.test_in_U,5.U)
//         // poke(dut.io.test_in_S,-5.S)


//         step(5)



// }
// object coefficient_test extends App {
//   chisel3.iotesters.Driver.execute(args, () => new coefficient_compute_spline())(c => new coefficient_compute_test(c))
// }


