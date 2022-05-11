# Bicubic
SR图像大小：3840*2160 = 8,294,400 = 0x7E 9000

LR图像大小：960*540 = 518,400 = 0x7 E900

图像格式RGB，保存方式为RGB分区域保存，可直接通过AXI总线发送地址请求获取相应的数据。另外IP需要一个外部输入valid信号，标识当前LR图像数据已经就绪，可以开始计算，上升沿有效。计算完成后IP需要输出一个ready信号，标识当前的SR图像数据已经计算完成并存储在相应的地址区域。


LR图像保存地址分配：

R:       0x1000_0000 ~ 0x1007 E900

G:       0x1008_0000 ~ 0x100F E900

B:       0x1010_0000 ~ 0x1017 3900


SR 图像保存地址分配：

       R:       0x1020_0000 ~ 0x109E 9000

       G:       0x10A0_0000 ~ 0x111E 9000

       B:       0x1120_0000 ~ 0x119E 9000

       