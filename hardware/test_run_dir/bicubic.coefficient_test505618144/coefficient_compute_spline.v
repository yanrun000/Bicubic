module coefficient_compute_spline(
  input         clock,
  input         reset,
  input  [7:0]  io_pix_0,
  input  [7:0]  io_pix_1,
  input  [7:0]  io_pix_2,
  input  [7:0]  io_pix_3,
  input  [7:0]  io_pix_4,
  input  [7:0]  io_pix_5,
  input  [7:0]  io_pix_6,
  input  [7:0]  io_pix_7,
  input  [7:0]  io_pix_8,
  input  [7:0]  io_pix_9,
  input  [7:0]  io_pix_10,
  input  [7:0]  io_pix_11,
  input  [7:0]  io_pix_12,
  input  [7:0]  io_pix_13,
  input  [7:0]  io_pix_14,
  input  [7:0]  io_pix_15,
  output [31:0] io_coefficient_0,
  output [31:0] io_coefficient_1,
  output [31:0] io_coefficient_2,
  output [31:0] io_coefficient_3,
  output [31:0] io_coefficient_4,
  output [31:0] io_coefficient_5,
  output [31:0] io_coefficient_6,
  output [31:0] io_coefficient_7,
  output [31:0] io_coefficient_8,
  output [31:0] io_coefficient_9,
  output [31:0] io_coefficient_10,
  output [31:0] io_coefficient_11,
  output [31:0] io_coefficient_12,
  output [31:0] io_coefficient_13,
  output [31:0] io_coefficient_14,
  output [31:0] io_coefficient_15
);
  wire [12:0] _T_1 = io_pix_5 * 8'h10; // @[coefficient_compute.scala 68:47]
  wire [11:0] _T_2 = io_pix_6 * 8'h8; // @[coefficient_compute.scala 69:41]
  wire [11:0] _T_3 = io_pix_4 * 8'h8; // @[coefficient_compute.scala 69:57]
  wire [11:0] _T_6 = _T_2 - _T_3; // @[coefficient_compute.scala 69:64]
  wire [12:0] _T_7 = io_pix_4 * 8'h10; // @[coefficient_compute.scala 70:40]
  wire [13:0] _T_8 = io_pix_5 * 8'h28; // @[coefficient_compute.scala 70:58]
  wire [13:0] _GEN_0 = {{1'd0}, _T_7}; // @[coefficient_compute.scala 70:47]
  wire [13:0] _T_10 = _GEN_0 - _T_8; // @[coefficient_compute.scala 70:47]
  wire [13:0] _T_11 = io_pix_6 * 8'h20; // @[coefficient_compute.scala 70:76]
  wire [13:0] _T_13 = _T_10 + _T_11; // @[coefficient_compute.scala 70:65]
  wire [11:0] _T_14 = io_pix_7 * 8'h8; // @[coefficient_compute.scala 70:94]
  wire [13:0] _GEN_1 = {{2'd0}, _T_14}; // @[coefficient_compute.scala 70:84]
  wire [13:0] _T_17 = _T_13 - _GEN_1; // @[coefficient_compute.scala 70:101]
  wire [12:0] _T_18 = io_pix_5 * 8'h18; // @[coefficient_compute.scala 72:40]
  wire [12:0] _T_19 = io_pix_6 * 8'h18; // @[coefficient_compute.scala 72:58]
  wire [12:0] _T_21 = _T_18 - _T_19; // @[coefficient_compute.scala 72:47]
  wire [12:0] _GEN_2 = {{1'd0}, _T_14}; // @[coefficient_compute.scala 72:66]
  wire [12:0] _T_24 = _T_21 + _GEN_2; // @[coefficient_compute.scala 72:66]
  wire [12:0] _GEN_3 = {{1'd0}, _T_3}; // @[coefficient_compute.scala 72:84]
  wire [12:0] _T_28 = _T_24 - _GEN_3; // @[coefficient_compute.scala 72:103]
  wire [11:0] _T_29 = io_pix_9 * 8'h8; // @[coefficient_compute.scala 74:43]
  wire [11:0] _T_30 = io_pix_1 * 8'h8; // @[coefficient_compute.scala 74:60]
  wire [11:0] _T_33 = _T_29 - _T_30; // @[coefficient_compute.scala 74:67]
  wire [10:0] _T_34 = io_pix_5 * 8'h4; // @[coefficient_compute.scala 76:41]
  wire [10:0] _T_35 = io_pix_10 * 8'h4; // @[coefficient_compute.scala 76:59]
  wire [10:0] _T_37 = _T_34 + _T_35; // @[coefficient_compute.scala 76:47]
  wire [10:0] _T_38 = io_pix_1 * 8'h4; // @[coefficient_compute.scala 76:75]
  wire [10:0] _T_40 = _T_37 - _T_38; // @[coefficient_compute.scala 76:65]
  wire [10:0] _T_41 = io_pix_4 * 8'h4; // @[coefficient_compute.scala 76:92]
  wire [10:0] _T_44 = _T_40 - _T_41; // @[coefficient_compute.scala 76:99]
  wire [13:0] _T_45 = io_pix_1 * 8'h20; // @[coefficient_compute.scala 78:40]
  wire [12:0] _T_46 = io_pix_2 * 8'h14; // @[coefficient_compute.scala 78:58]
  wire [13:0] _GEN_4 = {{1'd0}, _T_46}; // @[coefficient_compute.scala 78:47]
  wire [13:0] _T_48 = _T_45 - _GEN_4; // @[coefficient_compute.scala 78:47]
  wire [13:0] _GEN_5 = {{2'd0}, _T_3}; // @[coefficient_compute.scala 78:65]
  wire [13:0] _T_51 = _T_48 + _GEN_5; // @[coefficient_compute.scala 78:65]
  wire [13:0] _GEN_6 = {{3'd0}, _T_34}; // @[coefficient_compute.scala 78:83]
  wire [13:0] _T_54 = _T_51 - _GEN_6; // @[coefficient_compute.scala 78:83]
  wire [10:0] _T_55 = io_pix_6 * 8'h4; // @[coefficient_compute.scala 78:114]
  wire [13:0] _GEN_7 = {{3'd0}, _T_55}; // @[coefficient_compute.scala 78:102]
  wire [13:0] _T_57 = _T_54 - _GEN_7; // @[coefficient_compute.scala 78:102]
  wire [12:0] _T_58 = io_pix_9 * 8'h18; // @[coefficient_compute.scala 78:132]
  wire [13:0] _GEN_8 = {{1'd0}, _T_58}; // @[coefficient_compute.scala 78:121]
  wire [13:0] _T_60 = _T_57 - _GEN_8; // @[coefficient_compute.scala 78:121]
  wire [12:0] _T_61 = io_pix_10 * 8'h10; // @[coefficient_compute.scala 78:152]
  wire [13:0] _GEN_9 = {{1'd0}, _T_61}; // @[coefficient_compute.scala 78:140]
  wire [13:0] _T_63 = _T_60 + _GEN_9; // @[coefficient_compute.scala 78:140]
  wire [10:0] _T_64 = io_pix_11 * 8'h4; // @[coefficient_compute.scala 78:171]
  wire [13:0] _GEN_10 = {{3'd0}, _T_64}; // @[coefficient_compute.scala 78:159]
  wire [13:0] _T_67 = _T_63 - _GEN_10; // @[coefficient_compute.scala 78:178]
  wire [11:0] _T_68 = io_pix_2 * 8'hc; // @[coefficient_compute.scala 80:40]
  wire [11:0] _GEN_11 = {{1'd0}, _T_41}; // @[coefficient_compute.scala 80:47]
  wire [11:0] _T_71 = _T_68 - _GEN_11; // @[coefficient_compute.scala 80:47]
  wire [11:0] _GEN_12 = {{1'd0}, _T_55}; // @[coefficient_compute.scala 80:65]
  wire [11:0] _T_74 = _T_71 + _GEN_12; // @[coefficient_compute.scala 80:65]
  wire [12:0] _T_75 = io_pix_9 * 8'h10; // @[coefficient_compute.scala 80:97]
  wire [12:0] _GEN_13 = {{1'd0}, _T_74}; // @[coefficient_compute.scala 80:85]
  wire [12:0] _T_77 = _GEN_13 + _T_75; // @[coefficient_compute.scala 80:85]
  wire [11:0] _T_78 = io_pix_10 * 8'hc; // @[coefficient_compute.scala 80:117]
  wire [12:0] _GEN_14 = {{1'd0}, _T_78}; // @[coefficient_compute.scala 80:104]
  wire [12:0] _T_80 = _T_77 - _GEN_14; // @[coefficient_compute.scala 80:104]
  wire [12:0] _GEN_15 = {{2'd0}, _T_64}; // @[coefficient_compute.scala 80:124]
  wire [12:0] _T_83 = _T_80 + _GEN_15; // @[coefficient_compute.scala 80:124]
  wire [12:0] _T_84 = io_pix_1 * 8'h14; // @[coefficient_compute.scala 80:157]
  wire [12:0] _T_87 = _T_83 - _T_84; // @[coefficient_compute.scala 80:165]
  wire [13:0] _T_88 = io_pix_9 * 8'h20; // @[coefficient_compute.scala 82:42]
  wire [11:0] _T_89 = io_pix_13 * 8'h8; // @[coefficient_compute.scala 82:63]
  wire [13:0] _GEN_16 = {{2'd0}, _T_89}; // @[coefficient_compute.scala 82:50]
  wire [13:0] _T_91 = _T_88 - _GEN_16; // @[coefficient_compute.scala 82:50]
  wire [12:0] _T_92 = io_pix_1 * 8'h10; // @[coefficient_compute.scala 82:82]
  wire [13:0] _GEN_17 = {{1'd0}, _T_92}; // @[coefficient_compute.scala 82:69]
  wire [13:0] _T_94 = _T_91 + _GEN_17; // @[coefficient_compute.scala 82:69]
  wire [13:0] _T_98 = _T_94 - _T_8; // @[coefficient_compute.scala 82:109]
  wire [13:0] _T_100 = io_pix_4 * 8'h20; // @[coefficient_compute.scala 84:60]
  wire [13:0] _GEN_18 = {{2'd0}, _T_30}; // @[coefficient_compute.scala 84:48]
  wire [13:0] _T_102 = _GEN_18 + _T_100; // @[coefficient_compute.scala 84:48]
  wire [13:0] _T_105 = _T_102 - _GEN_6; // @[coefficient_compute.scala 84:67]
  wire [13:0] _GEN_20 = {{1'd0}, _T_19}; // @[coefficient_compute.scala 84:86]
  wire [13:0] _T_108 = _T_105 - _GEN_20; // @[coefficient_compute.scala 84:86]
  wire [12:0] _T_109 = io_pix_8 * 8'h14; // @[coefficient_compute.scala 84:119]
  wire [13:0] _GEN_21 = {{1'd0}, _T_109}; // @[coefficient_compute.scala 84:107]
  wire [13:0] _T_111 = _T_108 - _GEN_21; // @[coefficient_compute.scala 84:107]
  wire [10:0] _T_112 = io_pix_9 * 8'h4; // @[coefficient_compute.scala 84:138]
  wire [13:0] _GEN_22 = {{3'd0}, _T_112}; // @[coefficient_compute.scala 84:126]
  wire [13:0] _T_114 = _T_111 - _GEN_22; // @[coefficient_compute.scala 84:126]
  wire [13:0] _T_117 = _T_114 + _GEN_9; // @[coefficient_compute.scala 84:144]
  wire [10:0] _T_118 = io_pix_14 * 8'h4; // @[coefficient_compute.scala 84:177]
  wire [13:0] _GEN_24 = {{3'd0}, _T_118}; // @[coefficient_compute.scala 84:165]
  wire [13:0] _T_121 = _T_117 - _GEN_24; // @[coefficient_compute.scala 84:185]
  wire [13:0] _T_122 = io_pix_2 * 8'h28; // @[coefficient_compute.scala 86:43]
  wire [14:0] _T_123 = io_pix_1 * 8'h40; // @[coefficient_compute.scala 86:62]
  wire [14:0] _GEN_25 = {{1'd0}, _T_122}; // @[coefficient_compute.scala 86:50]
  wire [14:0] _T_125 = _GEN_25 - _T_123; // @[coefficient_compute.scala 86:50]
  wire [14:0] _T_126 = io_pix_4 * 8'h40; // @[coefficient_compute.scala 86:81]
  wire [14:0] _T_128 = _T_125 - _T_126; // @[coefficient_compute.scala 86:69]
  wire [14:0] _T_129 = io_pix_5 * 8'h60; // @[coefficient_compute.scala 86:101]
  wire [14:0] _T_131 = _T_128 + _T_129; // @[coefficient_compute.scala 86:89]
  wire [14:0] _T_132 = io_pix_6 * 8'h44; // @[coefficient_compute.scala 86:122]
  wire [14:0] _T_134 = _T_131 - _T_132; // @[coefficient_compute.scala 86:110]
  wire [12:0] _T_135 = io_pix_7 * 8'h18; // @[coefficient_compute.scala 86:141]
  wire [14:0] _GEN_26 = {{2'd0}, _T_135}; // @[coefficient_compute.scala 86:129]
  wire [14:0] _T_137 = _T_134 + _GEN_26; // @[coefficient_compute.scala 86:129]
  wire [13:0] _T_138 = io_pix_8 * 8'h28; // @[coefficient_compute.scala 86:161]
  wire [14:0] _GEN_27 = {{1'd0}, _T_138}; // @[coefficient_compute.scala 86:148]
  wire [14:0] _T_140 = _T_137 + _GEN_27; // @[coefficient_compute.scala 86:148]
  wire [14:0] _T_141 = io_pix_9 * 8'h44; // @[coefficient_compute.scala 86:179]
  wire [14:0] _T_143 = _T_140 - _T_141; // @[coefficient_compute.scala 86:168]
  wire [14:0] _T_144 = io_pix_10 * 8'h44; // @[coefficient_compute.scala 86:198]
  wire [14:0] _T_146 = _T_143 + _T_144; // @[coefficient_compute.scala 86:185]
  wire [12:0] _T_147 = io_pix_11 * 8'h10; // @[coefficient_compute.scala 86:218]
  wire [14:0] _GEN_28 = {{2'd0}, _T_147}; // @[coefficient_compute.scala 86:205]
  wire [14:0] _T_149 = _T_146 - _GEN_28; // @[coefficient_compute.scala 86:205]
  wire [12:0] _T_150 = io_pix_13 * 8'h18; // @[coefficient_compute.scala 86:238]
  wire [14:0] _GEN_29 = {{2'd0}, _T_150}; // @[coefficient_compute.scala 86:225]
  wire [14:0] _T_152 = _T_149 + _GEN_29; // @[coefficient_compute.scala 86:225]
  wire [12:0] _T_153 = io_pix_14 * 8'h10; // @[coefficient_compute.scala 86:259]
  wire [14:0] _GEN_30 = {{2'd0}, _T_153}; // @[coefficient_compute.scala 86:246]
  wire [14:0] _T_155 = _T_152 - _GEN_30; // @[coefficient_compute.scala 86:246]
  wire [10:0] _T_156 = io_pix_15 * 8'h4; // @[coefficient_compute.scala 86:281]
  wire [14:0] _GEN_31 = {{4'd0}, _T_156}; // @[coefficient_compute.scala 86:268]
  wire [14:0] _T_159 = _T_155 + _GEN_31; // @[coefficient_compute.scala 86:289]
  wire [13:0] _T_160 = io_pix_1 * 8'h28; // @[coefficient_compute.scala 88:44]
  wire [12:0] _T_161 = io_pix_2 * 8'h18; // @[coefficient_compute.scala 88:63]
  wire [13:0] _GEN_32 = {{1'd0}, _T_161}; // @[coefficient_compute.scala 88:51]
  wire [13:0] _T_163 = _T_160 - _GEN_32; // @[coefficient_compute.scala 88:51]
  wire [13:0] _T_166 = _T_163 + _T_100; // @[coefficient_compute.scala 88:70]
  wire [13:0] _T_167 = io_pix_5 * 8'h34; // @[coefficient_compute.scala 88:103]
  wire [13:0] _T_169 = _T_166 - _T_167; // @[coefficient_compute.scala 88:90]
  wire [13:0] _T_170 = io_pix_6 * 8'h34; // @[coefficient_compute.scala 88:124]
  wire [13:0] _T_172 = _T_169 + _T_170; // @[coefficient_compute.scala 88:112]
  wire [13:0] _GEN_33 = {{1'd0}, _T_135}; // @[coefficient_compute.scala 88:131]
  wire [13:0] _T_175 = _T_172 - _GEN_33; // @[coefficient_compute.scala 88:131]
  wire [13:0] _T_178 = _T_175 - _GEN_21; // @[coefficient_compute.scala 88:150]
  wire [13:0] _T_179 = io_pix_9 * 8'h28; // @[coefficient_compute.scala 88:182]
  wire [13:0] _T_181 = _T_178 + _T_179; // @[coefficient_compute.scala 88:170]
  wire [13:0] _T_182 = io_pix_10 * 8'h34; // @[coefficient_compute.scala 89:62]
  wire [13:0] _T_184 = _T_181 - _T_182; // @[coefficient_compute.scala 89:49]
  wire [13:0] _GEN_35 = {{1'd0}, _T_147}; // @[coefficient_compute.scala 89:69]
  wire [13:0] _T_187 = _T_184 + _GEN_35; // @[coefficient_compute.scala 89:69]
  wire [12:0] _T_188 = io_pix_13 * 8'h10; // @[coefficient_compute.scala 89:102]
  wire [13:0] _GEN_36 = {{1'd0}, _T_188}; // @[coefficient_compute.scala 89:89]
  wire [13:0] _T_190 = _T_187 - _GEN_36; // @[coefficient_compute.scala 89:89]
  wire [11:0] _T_191 = io_pix_14 * 8'hc; // @[coefficient_compute.scala 89:123]
  wire [13:0] _GEN_37 = {{2'd0}, _T_191}; // @[coefficient_compute.scala 89:110]
  wire [13:0] _T_193 = _T_190 + _GEN_37; // @[coefficient_compute.scala 89:110]
  wire [13:0] _GEN_38 = {{3'd0}, _T_156}; // @[coefficient_compute.scala 89:132]
  wire [13:0] _T_197 = _T_193 - _GEN_38; // @[coefficient_compute.scala 89:154]
  wire [12:0] _T_201 = _T_18 - _T_58; // @[coefficient_compute.scala 91:51]
  wire [12:0] _GEN_39 = {{1'd0}, _T_89}; // @[coefficient_compute.scala 91:71]
  wire [12:0] _T_204 = _T_201 + _GEN_39; // @[coefficient_compute.scala 91:71]
  wire [12:0] _GEN_40 = {{1'd0}, _T_30}; // @[coefficient_compute.scala 91:92]
  wire [12:0] _T_208 = _T_204 - _GEN_40; // @[coefficient_compute.scala 91:111]
  wire [12:0] _T_209 = io_pix_6 * 8'h10; // @[coefficient_compute.scala 93:44]
  wire [11:0] _T_210 = io_pix_8 * 8'hc; // @[coefficient_compute.scala 93:65]
  wire [12:0] _GEN_41 = {{1'd0}, _T_210}; // @[coefficient_compute.scala 93:52]
  wire [12:0] _T_212 = _T_209 + _GEN_41; // @[coefficient_compute.scala 93:52]
  wire [12:0] _GEN_42 = {{2'd0}, _T_112}; // @[coefficient_compute.scala 93:73]
  wire [12:0] _T_215 = _T_212 + _GEN_42; // @[coefficient_compute.scala 93:73]
  wire [12:0] _T_218 = _T_215 - _GEN_14; // @[coefficient_compute.scala 93:92]
  wire [12:0] _GEN_44 = {{2'd0}, _T_118}; // @[coefficient_compute.scala 93:113]
  wire [12:0] _T_221 = _T_218 + _GEN_44; // @[coefficient_compute.scala 93:113]
  wire [12:0] _GEN_45 = {{2'd0}, _T_38}; // @[coefficient_compute.scala 93:132]
  wire [12:0] _T_224 = _T_221 - _GEN_45; // @[coefficient_compute.scala 93:132]
  wire [12:0] _T_225 = io_pix_4 * 8'h14; // @[coefficient_compute.scala 93:162]
  wire [12:0] _T_228 = _T_224 - _T_225; // @[coefficient_compute.scala 93:170]
  wire [13:0] _T_233 = io_pix_4 * 8'h28; // @[coefficient_compute.scala 95:81]
  wire [13:0] _T_235 = _T_48 + _T_233; // @[coefficient_compute.scala 95:69]
  wire [13:0] _T_238 = _T_235 - _T_167; // @[coefficient_compute.scala 95:89]
  wire [13:0] _T_239 = io_pix_6 * 8'h28; // @[coefficient_compute.scala 95:123]
  wire [13:0] _T_241 = _T_238 + _T_239; // @[coefficient_compute.scala 95:110]
  wire [12:0] _T_242 = io_pix_7 * 8'h10; // @[coefficient_compute.scala 95:143]
  wire [13:0] _GEN_47 = {{1'd0}, _T_242}; // @[coefficient_compute.scala 95:130]
  wire [13:0] _T_244 = _T_241 - _GEN_47; // @[coefficient_compute.scala 95:130]
  wire [12:0] _T_245 = io_pix_8 * 8'h18; // @[coefficient_compute.scala 95:163]
  wire [13:0] _GEN_48 = {{1'd0}, _T_245}; // @[coefficient_compute.scala 95:150]
  wire [13:0] _T_247 = _T_244 - _GEN_48; // @[coefficient_compute.scala 95:150]
  wire [13:0] _T_248 = io_pix_9 * 8'h34; // @[coefficient_compute.scala 95:184]
  wire [13:0] _T_250 = _T_247 + _T_248; // @[coefficient_compute.scala 95:171]
  wire [13:0] _T_253 = _T_250 - _T_182; // @[coefficient_compute.scala 95:192]
  wire [11:0] _T_254 = io_pix_11 * 8'hc; // @[coefficient_compute.scala 95:225]
  wire [13:0] _GEN_49 = {{2'd0}, _T_254}; // @[coefficient_compute.scala 95:212]
  wire [13:0] _T_256 = _T_253 + _GEN_49; // @[coefficient_compute.scala 95:212]
  wire [13:0] _GEN_50 = {{1'd0}, _T_150}; // @[coefficient_compute.scala 95:232]
  wire [13:0] _T_259 = _T_256 - _GEN_50; // @[coefficient_compute.scala 95:232]
  wire [13:0] _GEN_51 = {{1'd0}, _T_153}; // @[coefficient_compute.scala 95:253]
  wire [13:0] _T_262 = _T_259 + _GEN_51; // @[coefficient_compute.scala 95:253]
  wire [13:0] _T_266 = _T_262 - _GEN_38; // @[coefficient_compute.scala 95:295]
  wire [12:0] _GEN_53 = {{1'd0}, _T_68}; // @[coefficient_compute.scala 97:52]
  wire [12:0] _T_270 = _GEN_53 - _T_84; // @[coefficient_compute.scala 97:52]
  wire [12:0] _T_273 = _T_270 - _T_225; // @[coefficient_compute.scala 97:70]
  wire [12:0] _T_274 = io_pix_5 * 8'h1c; // @[coefficient_compute.scala 97:103]
  wire [12:0] _T_276 = _T_273 + _T_274; // @[coefficient_compute.scala 97:90]
  wire [13:0] _GEN_54 = {{1'd0}, _T_276}; // @[coefficient_compute.scala 97:111]
  wire [13:0] _T_279 = _GEN_54 - _T_11; // @[coefficient_compute.scala 97:111]
  wire [13:0] _T_282 = _T_279 + _GEN_47; // @[coefficient_compute.scala 97:131]
  wire [13:0] _GEN_56 = {{2'd0}, _T_210}; // @[coefficient_compute.scala 97:151]
  wire [13:0] _T_285 = _T_282 + _GEN_56; // @[coefficient_compute.scala 97:151]
  wire [13:0] _T_288 = _T_285 - _T_88; // @[coefficient_compute.scala 97:172]
  wire [13:0] _T_289 = io_pix_10 * 8'h28; // @[coefficient_compute.scala 97:204]
  wire [13:0] _T_291 = _T_288 + _T_289; // @[coefficient_compute.scala 97:192]
  wire [13:0] _T_294 = _T_291 - _GEN_49; // @[coefficient_compute.scala 97:211]
  wire [13:0] _T_297 = _T_294 + _GEN_36; // @[coefficient_compute.scala 97:231]
  wire [13:0] _T_300 = _T_297 - _GEN_37; // @[coefficient_compute.scala 97:252]
  wire [13:0] _T_304 = _T_300 + _GEN_38; // @[coefficient_compute.scala 97:294]
  assign io_coefficient_0 = {{19{_T_1[12]}},_T_1}; // @[coefficient_compute.scala 68:47]
  assign io_coefficient_1 = {{20{_T_6[11]}},_T_6}; // @[coefficient_compute.scala 69:64]
  assign io_coefficient_2 = {{18{_T_17[13]}},_T_17}; // @[coefficient_compute.scala 70:101]
  assign io_coefficient_3 = {{19{_T_28[12]}},_T_28}; // @[coefficient_compute.scala 72:103]
  assign io_coefficient_4 = {{20{_T_33[11]}},_T_33}; // @[coefficient_compute.scala 74:67]
  assign io_coefficient_5 = {{21{_T_44[10]}},_T_44}; // @[coefficient_compute.scala 76:99]
  assign io_coefficient_6 = {{18{_T_67[13]}},_T_67}; // @[coefficient_compute.scala 78:178]
  assign io_coefficient_7 = {{19{_T_87[12]}},_T_87}; // @[coefficient_compute.scala 80:165]
  assign io_coefficient_8 = {{18{_T_98[13]}},_T_98}; // @[coefficient_compute.scala 82:109]
  assign io_coefficient_9 = {{18{_T_121[13]}},_T_121}; // @[coefficient_compute.scala 84:185]
  assign io_coefficient_10 = {{17{_T_159[14]}},_T_159}; // @[coefficient_compute.scala 86:289]
  assign io_coefficient_11 = {{18{_T_197[13]}},_T_197}; // @[coefficient_compute.scala 89:154]
  assign io_coefficient_12 = {{19{_T_208[12]}},_T_208}; // @[coefficient_compute.scala 91:111]
  assign io_coefficient_13 = {{19{_T_228[12]}},_T_228}; // @[coefficient_compute.scala 93:170]
  assign io_coefficient_14 = {{18{_T_266[13]}},_T_266}; // @[coefficient_compute.scala 95:295]
  assign io_coefficient_15 = {{18{_T_304[13]}},_T_304}; // @[coefficient_compute.scala 97:294]
endmodule