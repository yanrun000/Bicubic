package bicubic
import chisel3._
import chisel3.util._

class read_mem extends Module{
    val io = IO (new Bundle{
        val read_valid       = Input(Bool())
        val addr_0              = Input(UInt(32.W))
        val addr_1              = Input(UInt(32.W))
        val addr_2              = Input(UInt(32.W))
        val addr_3              = Input(UInt(32.W))
        val rd_finish          = Input(Bool())
       

        val rd_addr           = Output(UInt(32.W))
        val data_out          = Output(128)
    })


    // val IDLE :: Ready_1 ::Ready_2
    val count               = RegInit(0.U(3.W))
    val addr_0            = RegInit(0.U(3.W))
    when(read_vliad){
        
    }
}