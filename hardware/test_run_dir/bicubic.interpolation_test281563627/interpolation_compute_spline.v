module interpolation_compute_spline(
  input         clock,
  input         reset,
  input  [7:0]  io_i_in,
  input  [7:0]  io_j_in,
  input  [7:0]  io_x_in,
  input  [7:0]  io_y_in,
  input  [31:0] io_coefficient_0,
  input  [31:0] io_coefficient_1,
  input  [31:0] io_coefficient_2,
  input  [31:0] io_coefficient_3,
  input  [31:0] io_coefficient_4,
  input  [31:0] io_coefficient_5,
  input  [31:0] io_coefficient_6,
  input  [31:0] io_coefficient_7,
  input  [31:0] io_coefficient_8,
  input  [31:0] io_coefficient_9,
  input  [31:0] io_coefficient_10,
  input  [31:0] io_coefficient_11,
  input  [31:0] io_coefficient_12,
  input  [31:0] io_coefficient_13,
  input  [31:0] io_coefficient_14,
  input  [31:0] io_coefficient_15,
  output [7:0]  io_interpolation_compute_spline,
  output [7:0]  io_i_out,
  output [7:0]  io_j_out,
  output [7:0]  io_x_out,
  output [7:0]  io_y_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] temp_1; // @[interpolation_compute.scala 47:27]
  reg [7:0] i_1; // @[interpolation_compute.scala 48:34]
  reg [7:0] j_1; // @[interpolation_compute.scala 49:34]
  reg [7:0] x_1; // @[interpolation_compute.scala 50:34]
  reg [7:0] y_1; // @[interpolation_compute.scala 51:34]
  wire [32:0] _T = $signed(io_coefficient_1) / 32'sh4; // @[interpolation_compute.scala 52:53]
  wire [32:0] _GEN_2 = {{25{io_x_in[7]}},io_x_in}; // @[interpolation_compute.scala 52:59]
  wire [40:0] _T_1 = $signed(_T) * $signed(_GEN_2); // @[interpolation_compute.scala 52:59]
  wire [40:0] _GEN_3 = {{9{io_coefficient_0[31]}},io_coefficient_0}; // @[interpolation_compute.scala 52:34]
  wire [40:0] _T_4 = $signed(_GEN_3) + $signed(_T_1); // @[interpolation_compute.scala 52:34]
  wire [32:0] _T_5 = $signed(io_coefficient_2) / 32'sh10; // @[interpolation_compute.scala 52:88]
  wire [40:0] _T_6 = $signed(_T_5) * $signed(_GEN_2); // @[interpolation_compute.scala 52:95]
  wire [40:0] _GEN_5 = {{33{io_x_in[7]}},io_x_in}; // @[interpolation_compute.scala 52:104]
  wire [48:0] _T_7 = $signed(_T_6) * $signed(_GEN_5); // @[interpolation_compute.scala 52:104]
  wire [48:0] _GEN_6 = {{8{_T_4[40]}},_T_4}; // @[interpolation_compute.scala 52:69]
  wire [48:0] _T_10 = $signed(_GEN_6) + $signed(_T_7); // @[interpolation_compute.scala 52:69]
  wire [32:0] _T_11 = $signed(io_coefficient_3) / 32'sh40; // @[interpolation_compute.scala 52:134]
  wire [40:0] _T_12 = $signed(_T_11) * $signed(_GEN_2); // @[interpolation_compute.scala 52:141]
  wire [48:0] _T_13 = $signed(_T_12) * $signed(_GEN_5); // @[interpolation_compute.scala 52:150]
  wire [48:0] _GEN_9 = {{41{io_x_in[7]}},io_x_in}; // @[interpolation_compute.scala 52:158]
  wire [56:0] _T_14 = $signed(_T_13) * $signed(_GEN_9); // @[interpolation_compute.scala 52:158]
  wire [56:0] _GEN_10 = {{8{_T_10[48]}},_T_10}; // @[interpolation_compute.scala 52:115]
  wire [56:0] _T_17 = $signed(_GEN_10) + $signed(_T_14); // @[interpolation_compute.scala 52:115]
  wire [32:0] _T_18 = $signed(io_coefficient_4) / 32'sh4; // @[interpolation_compute.scala 53:40]
  wire [32:0] _GEN_11 = {{25{io_y_in[7]}},io_y_in}; // @[interpolation_compute.scala 53:45]
  wire [40:0] _T_19 = $signed(_T_18) * $signed(_GEN_11); // @[interpolation_compute.scala 53:45]
  wire [56:0] _GEN_12 = {{16{_T_19[40]}},_T_19}; // @[interpolation_compute.scala 53:21]
  wire [56:0] _T_22 = $signed(_T_17) + $signed(_GEN_12); // @[interpolation_compute.scala 53:21]
  wire [32:0] _T_23 = $signed(io_coefficient_5) / 32'sh10; // @[interpolation_compute.scala 53:72]
  wire [40:0] _T_24 = $signed(_T_23) * $signed(_GEN_2); // @[interpolation_compute.scala 53:78]
  wire [40:0] _GEN_14 = {{33{io_y_in[7]}},io_y_in}; // @[interpolation_compute.scala 53:86]
  wire [48:0] _T_25 = $signed(_T_24) * $signed(_GEN_14); // @[interpolation_compute.scala 53:86]
  wire [56:0] _GEN_15 = {{8{_T_25[48]}},_T_25}; // @[interpolation_compute.scala 53:54]
  wire [56:0] _T_28 = $signed(_T_22) + $signed(_GEN_15); // @[interpolation_compute.scala 53:54]
  wire [32:0] _T_29 = $signed(io_coefficient_6) / 32'sh40; // @[interpolation_compute.scala 53:114]
  wire [40:0] _T_30 = $signed(_T_29) * $signed(_GEN_11); // @[interpolation_compute.scala 53:120]
  wire [48:0] _T_31 = $signed(_T_30) * $signed(_GEN_5); // @[interpolation_compute.scala 53:128]
  wire [56:0] _T_32 = $signed(_T_31) * $signed(_GEN_9); // @[interpolation_compute.scala 53:136]
  wire [56:0] _T_35 = $signed(_T_28) + $signed(_T_32); // @[interpolation_compute.scala 53:95]
  wire [32:0] _T_36 = $signed(io_coefficient_7) / 32'sh100; // @[interpolation_compute.scala 53:163]
  wire [40:0] _T_37 = $signed(_T_36) * $signed(_GEN_2); // @[interpolation_compute.scala 53:170]
  wire [48:0] _T_38 = $signed(_T_37) * $signed(_GEN_5); // @[interpolation_compute.scala 53:178]
  wire [56:0] _T_39 = $signed(_T_38) * $signed(_GEN_9); // @[interpolation_compute.scala 53:186]
  wire [56:0] _GEN_22 = {{49{io_y_in[7]}},io_y_in}; // @[interpolation_compute.scala 53:194]
  wire [64:0] _T_40 = $signed(_T_39) * $signed(_GEN_22); // @[interpolation_compute.scala 53:194]
  wire [64:0] _GEN_23 = {{8{_T_35[56]}},_T_35}; // @[interpolation_compute.scala 53:145]
  wire [64:0] _T_43 = $signed(_GEN_23) + $signed(_T_40); // @[interpolation_compute.scala 53:145]
  wire [32:0] _T_44 = $signed(io_coefficient_8) / 32'sh10; // @[interpolation_compute.scala 54:40]
  wire [40:0] _T_45 = $signed(_T_44) * $signed(_GEN_11); // @[interpolation_compute.scala 54:46]
  wire [48:0] _T_46 = $signed(_T_45) * $signed(_GEN_14); // @[interpolation_compute.scala 54:54]
  wire [64:0] _GEN_26 = {{16{_T_46[48]}},_T_46}; // @[interpolation_compute.scala 54:21]
  wire [64:0] _T_49 = $signed(_T_43) + $signed(_GEN_26); // @[interpolation_compute.scala 54:21]
  wire [32:0] _T_50 = $signed(io_coefficient_9) / 32'sh40; // @[interpolation_compute.scala 54:82]
  wire [40:0] _T_51 = $signed(_T_50) * $signed(_GEN_2); // @[interpolation_compute.scala 54:88]
  wire [48:0] _T_52 = $signed(_T_51) * $signed(_GEN_14); // @[interpolation_compute.scala 54:96]
  wire [48:0] _GEN_29 = {{41{io_y_in[7]}},io_y_in}; // @[interpolation_compute.scala 54:104]
  wire [56:0] _T_53 = $signed(_T_52) * $signed(_GEN_29); // @[interpolation_compute.scala 54:104]
  wire [64:0] _GEN_30 = {{8{_T_53[56]}},_T_53}; // @[interpolation_compute.scala 54:63]
  wire [64:0] _T_56 = $signed(_T_49) + $signed(_GEN_30); // @[interpolation_compute.scala 54:63]
  wire [32:0] _T_57 = $signed(io_coefficient_10) / 32'sh100; // @[interpolation_compute.scala 54:132]
  wire [40:0] _T_58 = $signed(_T_57) * $signed(_GEN_2); // @[interpolation_compute.scala 54:139]
  wire [48:0] _T_59 = $signed(_T_58) * $signed(_GEN_5); // @[interpolation_compute.scala 54:147]
  wire [56:0] _T_60 = $signed(_T_59) * $signed(_GEN_29); // @[interpolation_compute.scala 54:155]
  wire [64:0] _T_61 = $signed(_T_60) * $signed(_GEN_22); // @[interpolation_compute.scala 54:163]
  wire [64:0] _T_64 = $signed(_T_56) + $signed(_T_61); // @[interpolation_compute.scala 54:113]
  wire [32:0] _T_65 = $signed(io_coefficient_11) / 32'sh400; // @[interpolation_compute.scala 54:191]
  wire [40:0] _T_66 = $signed(_T_65) * $signed(_GEN_2); // @[interpolation_compute.scala 54:199]
  wire [48:0] _T_67 = $signed(_T_66) * $signed(_GEN_5); // @[interpolation_compute.scala 54:207]
  wire [56:0] _T_68 = $signed(_T_67) * $signed(_GEN_9); // @[interpolation_compute.scala 54:215]
  wire [64:0] _T_69 = $signed(_T_68) * $signed(_GEN_22); // @[interpolation_compute.scala 54:223]
  wire [64:0] _T_72 = $signed(_T_64) + $signed(_T_69); // @[interpolation_compute.scala 54:172]
  wire [32:0] _T_73 = $signed(io_coefficient_12) / 32'sh40; // @[interpolation_compute.scala 55:41]
  wire [40:0] _T_74 = $signed(_T_73) * $signed(_GEN_11); // @[interpolation_compute.scala 55:47]
  wire [48:0] _T_75 = $signed(_T_74) * $signed(_GEN_14); // @[interpolation_compute.scala 55:55]
  wire [56:0] _T_76 = $signed(_T_75) * $signed(_GEN_29); // @[interpolation_compute.scala 55:63]
  wire [64:0] _GEN_42 = {{8{_T_76[56]}},_T_76}; // @[interpolation_compute.scala 55:21]
  wire [64:0] _T_79 = $signed(_T_72) + $signed(_GEN_42); // @[interpolation_compute.scala 55:21]
  wire [32:0] _T_80 = $signed(io_coefficient_13) / 32'sh100; // @[interpolation_compute.scala 55:91]
  wire [40:0] _T_81 = $signed(_T_80) * $signed(_GEN_2); // @[interpolation_compute.scala 55:98]
  wire [48:0] _T_82 = $signed(_T_81) * $signed(_GEN_14); // @[interpolation_compute.scala 55:106]
  wire [56:0] _T_83 = $signed(_T_82) * $signed(_GEN_29); // @[interpolation_compute.scala 55:114]
  wire [64:0] _T_84 = $signed(_T_83) * $signed(_GEN_22); // @[interpolation_compute.scala 55:122]
  wire [64:0] _T_87 = $signed(_T_79) + $signed(_T_84); // @[interpolation_compute.scala 55:72]
  wire [32:0] _T_88 = $signed(io_coefficient_14) / 32'sh400; // @[interpolation_compute.scala 55:149]
  wire [40:0] _T_89 = $signed(_T_88) * $signed(_GEN_2); // @[interpolation_compute.scala 55:157]
  wire [48:0] _T_90 = $signed(_T_89) * $signed(_GEN_5); // @[interpolation_compute.scala 55:165]
  wire [56:0] _T_91 = $signed(_T_90) * $signed(_GEN_29); // @[interpolation_compute.scala 55:173]
  wire [64:0] _T_92 = $signed(_T_91) * $signed(_GEN_22); // @[interpolation_compute.scala 55:181]
  wire [64:0] _GEN_51 = {{57{io_y_in[7]}},io_y_in}; // @[interpolation_compute.scala 55:189]
  wire [72:0] _T_93 = $signed(_T_92) * $signed(_GEN_51); // @[interpolation_compute.scala 55:189]
  wire [72:0] _GEN_52 = {{8{_T_87[64]}},_T_87}; // @[interpolation_compute.scala 55:130]
  wire [72:0] _T_96 = $signed(_GEN_52) + $signed(_T_93); // @[interpolation_compute.scala 55:130]
  wire [32:0] _T_97 = $signed(io_coefficient_15) / 32'sh1000; // @[interpolation_compute.scala 56:41]
  wire [40:0] _T_98 = $signed(_T_97) * $signed(_GEN_2); // @[interpolation_compute.scala 56:49]
  wire [48:0] _T_99 = $signed(_T_98) * $signed(_GEN_5); // @[interpolation_compute.scala 56:57]
  wire [56:0] _T_100 = $signed(_T_99) * $signed(_GEN_9); // @[interpolation_compute.scala 56:65]
  wire [64:0] _T_101 = $signed(_T_100) * $signed(_GEN_22); // @[interpolation_compute.scala 56:73]
  wire [72:0] _T_102 = $signed(_T_101) * $signed(_GEN_51); // @[interpolation_compute.scala 56:81]
  wire [72:0] _GEN_58 = {{65{io_y_in[7]}},io_y_in}; // @[interpolation_compute.scala 56:89]
  wire [80:0] _T_103 = $signed(_T_102) * $signed(_GEN_58); // @[interpolation_compute.scala 56:89]
  wire [80:0] _GEN_59 = {{8{_T_96[72]}},_T_96}; // @[interpolation_compute.scala 56:21]
  wire [80:0] _T_106 = $signed(_GEN_59) + $signed(_T_103); // @[interpolation_compute.scala 56:21]
  reg [31:0] temp_2; // @[interpolation_compute.scala 63:28]
  reg [7:0] i_2; // @[interpolation_compute.scala 64:35]
  reg [7:0] j_2; // @[interpolation_compute.scala 65:35]
  reg [7:0] x_2; // @[interpolation_compute.scala 66:34]
  reg [7:0] y_2; // @[interpolation_compute.scala 67:34]
  wire [32:0] _T_111 = $signed(temp_1) / 32'sh10; // @[interpolation_compute.scala 68:25]
  reg [31:0] temp_3; // @[interpolation_compute.scala 74:28]
  reg [7:0] i_3; // @[interpolation_compute.scala 75:35]
  reg [7:0] j_3; // @[interpolation_compute.scala 76:35]
  reg [7:0] x_3; // @[interpolation_compute.scala 77:34]
  reg [7:0] y_3; // @[interpolation_compute.scala 78:34]
  wire  _T_115 = ~temp_3[31]; // @[common.scala 11:25]
  wire [31:0] _GEN_1 = _T_115 ? temp_3 : 32'h0; // @[interpolation_compute.scala 85:36 interpolation_compute.scala 86:39]
  assign io_interpolation_compute_spline = _GEN_1[7:0];
  assign io_i_out = i_3; // @[interpolation_compute.scala 91:15]
  assign io_j_out = j_3; // @[interpolation_compute.scala 92:15]
  assign io_x_out = x_3; // @[interpolation_compute.scala 93:15]
  assign io_y_out = y_3; // @[interpolation_compute.scala 94:15]
  always @(posedge clock) begin
    if (reset) begin // @[interpolation_compute.scala 47:27]
      temp_1 <= 32'sh0; // @[interpolation_compute.scala 47:27]
    end else begin
      temp_1 <= _T_106[31:0]; // @[interpolation_compute.scala 52:12]
    end
    if (reset) begin // @[interpolation_compute.scala 48:34]
      i_1 <= 8'h0; // @[interpolation_compute.scala 48:34]
    end else begin
      i_1 <= io_i_in; // @[interpolation_compute.scala 58:33]
    end
    if (reset) begin // @[interpolation_compute.scala 49:34]
      j_1 <= 8'h0; // @[interpolation_compute.scala 49:34]
    end else begin
      j_1 <= io_j_in; // @[interpolation_compute.scala 59:33]
    end
    if (reset) begin // @[interpolation_compute.scala 50:34]
      x_1 <= 8'h0; // @[interpolation_compute.scala 50:34]
    end else begin
      x_1 <= io_x_in; // @[interpolation_compute.scala 60:33]
    end
    if (reset) begin // @[interpolation_compute.scala 51:34]
      y_1 <= 8'h0; // @[interpolation_compute.scala 51:34]
    end else begin
      y_1 <= io_y_in; // @[interpolation_compute.scala 61:33]
    end
    if (reset) begin // @[interpolation_compute.scala 63:28]
      temp_2 <= 32'sh0; // @[interpolation_compute.scala 63:28]
    end else begin
      temp_2 <= _T_111[31:0]; // @[interpolation_compute.scala 68:16]
    end
    if (reset) begin // @[interpolation_compute.scala 64:35]
      i_2 <= 8'h0; // @[interpolation_compute.scala 64:35]
    end else begin
      i_2 <= i_1; // @[interpolation_compute.scala 69:29]
    end
    if (reset) begin // @[interpolation_compute.scala 65:35]
      j_2 <= 8'h0; // @[interpolation_compute.scala 65:35]
    end else begin
      j_2 <= j_1; // @[interpolation_compute.scala 70:29]
    end
    if (reset) begin // @[interpolation_compute.scala 66:34]
      x_2 <= 8'h0; // @[interpolation_compute.scala 66:34]
    end else begin
      x_2 <= x_1; // @[interpolation_compute.scala 71:29]
    end
    if (reset) begin // @[interpolation_compute.scala 67:34]
      y_2 <= 8'h0; // @[interpolation_compute.scala 67:34]
    end else begin
      y_2 <= y_1; // @[interpolation_compute.scala 72:29]
    end
    if (reset) begin // @[interpolation_compute.scala 74:28]
      temp_3 <= 32'sh0; // @[interpolation_compute.scala 74:28]
    end else if ($signed(temp_2) >= 32'shff) begin // @[interpolation_compute.scala 79:23]
      temp_3 <= 32'shff;
    end else begin
      temp_3 <= temp_2;
    end
    if (reset) begin // @[interpolation_compute.scala 75:35]
      i_3 <= 8'h0; // @[interpolation_compute.scala 75:35]
    end else begin
      i_3 <= i_2; // @[interpolation_compute.scala 80:29]
    end
    if (reset) begin // @[interpolation_compute.scala 76:35]
      j_3 <= 8'h0; // @[interpolation_compute.scala 76:35]
    end else begin
      j_3 <= j_2; // @[interpolation_compute.scala 81:29]
    end
    if (reset) begin // @[interpolation_compute.scala 77:34]
      x_3 <= 8'h0; // @[interpolation_compute.scala 77:34]
    end else begin
      x_3 <= x_2; // @[interpolation_compute.scala 82:29]
    end
    if (reset) begin // @[interpolation_compute.scala 78:34]
      y_3 <= 8'h0; // @[interpolation_compute.scala 78:34]
    end else begin
      y_3 <= y_2; // @[interpolation_compute.scala 83:29]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  temp_1 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  i_1 = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  j_1 = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  x_1 = _RAND_3[7:0];
  _RAND_4 = {1{`RANDOM}};
  y_1 = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  temp_2 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  i_2 = _RAND_6[7:0];
  _RAND_7 = {1{`RANDOM}};
  j_2 = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  x_2 = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  y_2 = _RAND_9[7:0];
  _RAND_10 = {1{`RANDOM}};
  temp_3 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  i_3 = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  j_3 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  x_3 = _RAND_13[7:0];
  _RAND_14 = {1{`RANDOM}};
  y_3 = _RAND_14[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
