
package bicubic
import Chisel._
// import chisel3 ._

object positive//这个是高位，用来判断是否为负
{
    def apply(in:SInt) =
    {
        val out = Wire(Bits(1.W))
        out :=Mux(in(31)===0.U,1.U,0.U)//out为1说明是正数
        out
    }
}