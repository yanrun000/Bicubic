
package bicubic
import Chisel._
// import chisel3 ._
import chisel3.util._
import chisel3 . iotesters ._
import org.scalatest._
import chisel3.iotesters.PeekPokeTester
import chisel3.iotesters.Driver


class Fetch_pixel extends Module{
    val io = IO(new Bundle{
        val i                         = Input(UInt(12.W))
        val j                         = Input(UInt(12.W))
        val base                = Input(UInt(32.W))
        val pix_0_addr   = Output(UInt(32.W))
        val pix_1_addr   = Output(UInt(32.W))    
        val pix_2_addr   = Output(UInt(32.W))
        val pix_3_addr   = Output(UInt(32.W))
        val pix_4_addr   = Output(UInt(32.W))    
        val pix_5_addr   = Output(UInt(32.W))
        val pix_6_addr   = Output(UInt(32.W))
        val pix_7_addr   = Output(UInt(32.W))    
        val pix_8_addr   = Output(UInt(32.W))
        val pix_9_addr   = Output(UInt(32.W))
        val pix_10_addr = Output(UInt(32.W))    
        val pix_11_addr = Output(UInt(32.W))
        val pix_12_addr = Output(UInt(32.W))    
        val pix_13_addr = Output(UInt(32.W))
        val pix_14_addr = Output(UInt(32.W))    
        val pix_15_addr = Output(UInt(32.W))
    })
    io.pix_0_addr          := io.base + io.i - 1.U + (io.j-1.U)*960.U
    io.pix_1_addr          := io.base + io.i + (io.j-1.U)*960.U
    io.pix_2_addr          := io.base + io.i +1.U + (io.j-1.U)*960.U
    io.pix_3_addr          := io.base + io.i +2.U + (io.j-1.U)*960.U

    io.pix_4_addr          := io.base + io.i - 1.U + io.j *960.U
    io.pix_5_addr          := io.base + io.i + io.j *960.U
    io.pix_6_addr          := io.base + io.i +1.U + io.j *960.U
    io.pix_7_addr          := io.base + io.i +2.U + io.j *960.U
    
    io.pix_8_addr          := io.base + io.i - 1.U + (io.j+1.U) *960.U
    io.pix_9_addr          := io.base + io.i + (io.j +1.U)*960.U
    io.pix_10_addr        := io.base + io.i +1.U + (io.j+1.U) *960.U
    io.pix_11_addr        := io.base + io.i +2.U + (io.j+1.U) *960.U
    
    io.pix_12_addr        := io.base + io.i - 1.U + (io.j+2.U) *960.U
    io.pix_13_addr        := io.base + io.i + (io.j +2.U)*960.U
    io.pix_14_addr        := io.base + io.i +1.U + (io.j+2.U) *960.U
    io.pix_15_addr        := io.base + io.i +2.U + (io.j+2.U) *960.U

}

object Fetch_pixel extends App {
  chisel3.Driver.execute(args, () => new Fetch_pixel())
}