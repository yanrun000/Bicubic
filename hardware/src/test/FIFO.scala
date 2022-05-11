// package hardfloat
// import Chisel._
// import consts._
// // import chisel3 ._
// import chisel3.util._
// import chisel3 . iotesters ._
// import org.scalatest._
// import chisel3.iotesters.PeekPokeTester
// import chisel3.iotesters.Driver
 //这个FIFO有问题

// class FIFO (val w : Int, val depth : Int) extends Module {
//   val io = IO(new Bundle {
//     val datain = Input(SInt(w.W))//数据输入
//     val dataout = Output(SInt(w.W))//数据输出
//     val wr = Input(Bool())//写信号
//     val rd = Input(Bool())//读信号
//     val full = Output(Bool())//FIFO满
//     val empty = Output(Bool())//FIFO空
//     val enable= Output(Bool())
//   })

//   val count = RegInit(0.U(depth.W))//FIFO的一个计数
//   val mem = Mem(depth, SInt(w.W))//位宽为w的depth层存储空间
//   val wp = RegInit(0.U(depth.W))
//   val rp = RegInit(0.U(depth.W))
//   val dataout = RegInit(0.S(w.W))

//   def IndexAdd(index : UInt) : UInt = {
//     val temp = RegInit(index)
//     when(index === (depth - 1).U) { temp := 0.U }//depth是这个函数的输入
//     .otherwise { temp := index + 1.U }
//     temp
//   }

//   when(io.wr === true.B && io.rd === true.B) {//当写信号和读信号同时为真时
//     when(count === 0.U) { 
//       dataout := io.datain 
//       io.enable   := true.B 
//       }//当计数器为0，那么数据输出等于数据输入
//     .otherwise {
//       io.dataout := mem(rp)//否则的话，等于
//       io.enable   := true.B
//       rp := IndexAdd(rp)
//       mem(wp) := io.datain
//       wp := IndexAdd(wp)
//     } 
//   } .elsewhen (io.wr === true.B && io.rd === false.B) {//当写信号为真，读信号为假时
//     dataout := 0.S
//     io.enable   := false.B
//     when(count < depth.U) {
//       mem(wp) := io.datain
//       wp := IndexAdd(wp)
//       count := count + 1.U
//     }
//   } .elsewhen (io.wr === false.B && io.rd === true.B) {//当写信号为假，读信号为真时
//     when(count > 0.U) {
//       dataout := mem(rp)
//       io.enable   := true.B
//       rp := IndexAdd(rp)
//       count := count - 1.U
//     } .otherwise {//count=0时
//       dataout := 0.S
//       io.enable   := false.B
//     }
//   } .otherwise {
//     dataout := 0.S
//     io.enable   := false.B
//   }

//   io.full := (depth.U === count)
//   io.empty := (count === 0.U)
//   io.dataout    := dataout
// }

// // object Main extends App {
// //   chisel3.Driver.execute(args, () => new FIFO(8,16))
// // }
// // class FIFOTester (dut:FIFO) extends PeekPokeTester(dut){
// //         poke(dut.io.datain,1.U)
// //         poke(dut.io.wr,1.S)
// //         step(1)
// //         poke(dut.io.datain,2.U)
// //         poke(dut.io.wr,1.S)
// //         step(1)
// //         poke(dut.io.datain,3.U)
// //         poke(dut.io.wr,1.S)
// //         step(1)
// //         poke(dut.io.wr,0.S)
// //         poke(dut.io.rd,1.S)
// //          step(1)
// //         poke(dut.io.rd,1.S)
// //          step(1)
// //         poke(dut.io.rd,1.S)
// //         step(70)
// // }
// // object FIFOtest extends App {
// //   chisel3.iotesters.Driver.execute(args, () => new FIFO(3,3))(c => new FIFOTester(c))
// // }