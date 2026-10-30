#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8009B480
void f_8009B480(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 8009B480
  f_8009B470(c); return; // 8009B484
}

// fn_8009B490
void f_8009B490(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 8009B490
  f_8009B460(c); return; // 8009B494
}

// fn_8009B4A0
void f_8009B4A0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 8009B4A0
  f_8009B420(c); return; // 8009B4A4
}

// fn_8009B4B0
void f_8009B4B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 8009B4B0
  f_8009ABB0(c); return; // 8009B4B4
}

// fn_8009B4C0
void f_8009B4C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B4C0
  c->r[0]=c->lr; // 8009B4C4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8009B4C8
  c->r[11]=c->r[1]+0x00000030u; // 8009B4CC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8009B4D0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8009B4D4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8009B4D8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 8009B4DC
  c->lr=0x8009B4E4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009B4E0
  c->f[30]=c->f[1]; // 8009B4E4
  c->r[25]=c->r[4]|c->r[4]; // 8009B4E8
  c->f[31]=c->f[2]; // 8009B4EC
  c->r[24]=c->r[3]|c->r[3]; // 8009B4F0
  c->r[26]=c->r[5]|c->r[5]; // 8009B4F4
  c->r[4]=0u+0x00000005u; // 8009B4F8
  c->lr=0x8009B500u; f_8000BF70(c); // 8009B4FC
  c->r[4]=0u+0x80220000u; // 8009B500
  c->r[3]=c->r[24]+0x00000044u; // 8009B504
  c->r[30]=c->r[4]+0xFFFF9C60u; // 8009B508
  W32(c->r[24]+0x00000000u,c->r[30]); // 8009B50C
  c->lr=0x8009B514u; f_8004F070(c); // 8009B510
  c->r[31]=0u+0x00000000u; // 8009B514
  W32(c->r[24]+0x00000070u,c->r[31]); // 8009B518
  c->r[3]=c->r[24]|c->r[24]; // 8009B51C
  c->r[4]=c->r[25]|c->r[25]; // 8009B520
  W32(c->r[24]+0x00000074u,c->r[31]); // 8009B524
  c->r[5]=0u+0x00000000u; // 8009B528
  c->r[6]=0u+0x00000000u; // 8009B52C
  W32(c->r[24]+0x00000078u,c->r[31]); // 8009B530
  {uint32_t ea=c->r[24]+0x00000080u; WF32(ea,c->f[30]);} // 8009B534
  {uint32_t ea=c->r[24]+0x00000084u; WF32(ea,c->f[31]);} // 8009B538
  W32(c->r[24]+0x0000011Cu,c->r[26]); // 8009B53C
  c->lr=0x8009B544u; f_8009B600(c); // 8009B540
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009B544
  c->r[28]=c->r[24]|c->r[24]; // 8009B548
  c->r[27]=0u+0x00000000u; // 8009B54C
L_8009B550:;
  cmpu(c,0,c->r[27],0x00000008u); // 8009B550
  c->r[26]=0u+0x00000001u; // 8009B554
  if (!crb(c,2)) { goto L_8009B560; } // 8009B558
  c->r[26]=0u+0x00000002u; // 8009B55C
L_8009B560:;
  cmpu(c,0,c->r[27],0x00000009u); // 8009B560
  if (!crb(c,2)) { goto L_8009B56C; } // 8009B564
  c->r[26]=0u+0x00000003u; // 8009B568
L_8009B56C:;
  c->r[3]=0u+0x00000124u; // 8009B56C
  c->lr=0x8009B574u; f_800D8ED0(c); // 8009B570
  cmps(c,0,(int32_t)c->r[3],0); // 8009B574
  c->r[29]=c->r[3]|c->r[3]; // 8009B578
  if (crb(c,2)) { goto L_8009B5BC; } // 8009B57C
  c->r[4]=0u+0x00000005u; // 8009B580
  c->lr=0x8009B588u; f_8000BF70(c); // 8009B584
  W32(c->r[29]+0x00000000u,c->r[30]); // 8009B588
  c->r[3]=c->r[29]+0x00000044u; // 8009B58C
  c->lr=0x8009B594u; f_8004F070(c); // 8009B590
  W32(c->r[29]+0x00000070u,c->r[31]); // 8009B594
  c->r[3]=c->r[29]|c->r[29]; // 8009B598
  c->r[4]=c->r[25]|c->r[25]; // 8009B59C
  c->r[5]=c->r[27]|c->r[27]; // 8009B5A0
  W32(c->r[29]+0x00000074u,c->r[28]); // 8009B5A4
  c->r[6]=c->r[26]|c->r[26]; // 8009B5A8
  W32(c->r[29]+0x00000078u,c->r[31]); // 8009B5AC
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[30]);} // 8009B5B0
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[31]);} // 8009B5B4
  c->lr=0x8009B5BCu; f_8009B600(c); // 8009B5B8
L_8009B5BC:;
  c->r[27]=c->r[27]+0x00000001u; // 8009B5BC
  W32(c->r[28]+0x00000078u,c->r[29]); // 8009B5C0
  cmpu(c,0,c->r[27],0x0000000Au); // 8009B5C4
  c->r[28]=c->r[29]|c->r[29]; // 8009B5C8
  if (crb(c,0)) { IRQCHK(c); goto L_8009B550; } // 8009B5CC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8009B5D0
  c->r[3]=c->r[24]|c->r[24]; // 8009B5D4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8009B5D8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 8009B5DC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 8009B5E0
  c->r[11]=c->r[1]+0x00000030u; // 8009B5E4
  c->lr=0x8009B5ECu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009B5E8
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009B5EC
  c->lr=c->r[0]; // 8009B5F0
  c->r[1]=c->r[1]+0x00000050u; // 8009B5F4
  return; // 8009B5F8
}

// fn_8009B600
void f_8009B600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B600
  c->r[0]=c->lr; // 8009B604
  W32(c->r[1]+0x00000064u,c->r[0]); // 8009B608
  c->r[11]=c->r[1]+0x00000050u; // 8009B60C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8009B610
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8009B614
  c->lr=0x8009B61Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009B618
  c->r[9]=R32(c->r[13]+0xFFFFADD8u); // 8009B61C
  c->r[7]=0u+0x80210000u; // 8009B620
  c->r[31]=0u+0x80220000u; // 8009B624
  c->r[28]=0u+0x00000000u; // 8009B628
  c->r[8]=R32(c->r[9]+0x0000009Cu); // 8009B62C
  c->r[7]=c->r[7]+0xFFFFAFB8u; // 8009B630
  c->r[0]=0u+0x00000008u; // 8009B634
  c->r[29]=c->r[3]|c->r[3]; // 8009B638
  c->r[8]=c->r[8]+0x00000001u; // 8009B63C
  W32(c->r[9]+0x0000009Cu,c->r[8]); // 8009B640
  c->r[30]=c->r[5]|c->r[5]; // 8009B644
  c->r[23]=c->r[6]|c->r[6]; // 8009B648
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B64C
  c->r[31]=c->r[31]+0xFFFF9AA0u; // 8009B650
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009B654
  c->r[27]=0u+0x00000000u; // 8009B658
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B65C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8009B660
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B664
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009B668
  {uint32_t ea=c->r[7]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B66C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009B670
  {uint32_t ea=c->r[7]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B674
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8009B678
  {uint32_t ea=c->r[7]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B67C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8009B680
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B684
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8009B688
  {uint32_t ea=c->r[7]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B68C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8009B690
  {uint32_t ea=c->r[7]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B694
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 8009B698
  W32(c->r[3]+0x00000034u,c->r[28]); // 8009B69C
  W32(c->r[3]+0x00000038u,c->r[28]); // 8009B6A0
  W32(c->r[3]+0x00000040u,c->r[0]); // 8009B6A4
  W32(c->r[3]+0x0000007Cu,c->r[5]); // 8009B6A8
  c->r[3]=0u+0x00000118u; // 8009B6AC
  c->lr=0x8009B6B4u; f_800D8ED0(c); // 8009B6B0
  cmps(c,0,(int32_t)c->r[3],0); // 8009B6B4
  c->r[26]=c->r[3]|c->r[3]; // 8009B6B8
  if (crb(c,2)) { goto L_8009B730; } // 8009B6BC
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 8009B6C0
  c->r[25]=c->r[13]+0xFFFF9E38u; // 8009B6C4
  c->r[24]=c->r[1]+0x00000010u; // 8009B6C8
  c->r[27]=R32(c->r[3]+0x00000118u); // 8009B6CC
  c->r[3]=c->r[25]|c->r[25]; // 8009B6D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8009B6D4
  W32(c->r[1]+0x00000014u,c->r[28]); // 8009B6D8
  W32(c->r[1]+0x00000018u,c->r[28]); // 8009B6DC
  c->lr=0x8009B6E4u; f_801D4D44(c); // 8009B6E0
  c->r[28]=c->r[3]|c->r[3]; // 8009B6E4
  c->r[3]=c->r[24]|c->r[24]; // 8009B6E8
  c->r[4]=c->r[28]|c->r[28]; // 8009B6EC
  c->lr=0x8009B6F4u; f_800081B0(c); // 8009B6F0
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8009B6F4
  c->r[3]=c->r[24]|c->r[24]; // 8009B6F8
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009B6FC
  c->r[6]=c->r[25]|c->r[25]; // 8009B700
  c->r[7]=c->r[25]+c->r[28]; // 8009B704
  c->r[8]=c->r[1]+0x00000008u; // 8009B708
  c->r[4]=0u+0x00000000u; // 8009B70C
  c->r[5]=0u+0x00000000u; // 8009B710
  c->lr=0x8009B718u; f_80008370(c); // 8009B714
  c->r[4]=c->r[27]|c->r[27]; // 8009B718
  c->r[3]=c->r[26]|c->r[26]; // 8009B71C
  c->r[5]=c->r[24]|c->r[24]; // 8009B720
  c->r[27]=0u+0x00000001u; // 8009B724
  c->lr=0x8009B72Cu; f_800FE130(c); // 8009B728
  c->r[26]=c->r[3]|c->r[3]; // 8009B72C
L_8009B730:;
  cmps(c,0,(int32_t)c->r[27],0); // 8009B730
  W32(c->r[29]+0x00000058u,c->r[26]); // 8009B734
  if (crb(c,2)) { goto L_8009B750; } // 8009B738
  c->r[0]=R32(c->r[1]+0x00000010u); // 8009B73C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009B740
  if (crb(c,2)) { goto L_8009B750; } // 8009B744
  c->r[3]=R32(c->r[1]+0x00000018u); // 8009B748
  c->lr=0x8009B750u; f_800D93B0(c); // 8009B74C
L_8009B750:;
  c->r[3]=R32(c->r[29]+0x00000058u); // 8009B750
  {uint32_t ea=c->r[29]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B754
  {uint32_t ea=c->r[29]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009B758
  c->lr=0x8009B760u; f_801017C0(c); // 8009B75C
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 8009B760
  c->r[4]=c->r[31]+0x00000000u; // 8009B764
  {uint32_t ea=c->r[2]+0xFFFFA2ECu; c->f[31]=c->ps1[31]=RF32(ea);} // 8009B768
  c->r[5]=0u+0x00000000u; // 8009B76C
  c->r[3]=R32(c->r[29]+0x00000058u); // 8009B770
  c->r[4]=R32(c->r[4]+c->r[0]); // 8009B774
  c->lr=0x8009B77Cu; f_80100840(c); // 8009B778
  c->r[0]=R32(c->r[29]+0x00000074u); // 8009B77C
  cmps(c,0,(int32_t)c->r[0],0); // 8009B780
  if (crb(c,2)) { goto L_8009B7D0; } // 8009B784
  c->r[3]=c->r[30]+0x00000001u; // 8009B788
  c->r[0]=0u+0x43300000u; // 8009B78C
  W32(c->r[1]+0x00000024u,c->r[3]); // 8009B790
  c->r[3]=c->r[31]+0x00000010u; // 8009B794
  {uint32_t ea=c->r[2]+0xFFFFA2F8u; c->f[2]=RF64(ea);} // 8009B798
  W32(c->r[1]+0x00000020u,c->r[0]); // 8009B79C
  {uint32_t ea=c->r[2]+0xFFFFA2F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B7A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8009B7A4
  c->r[4]=R32(c->r[31]+0x00000010u); // 8009B7A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8009B7AC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8009B7B0
  W32(c->r[29]+0x00000060u,c->r[0]); // 8009B7B4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8009B7B8
  W32(c->r[29]+0x0000005Cu,c->r[4]); // 8009B7BC
  c->r[0]=R32(c->r[3]+0x00000008u); // 8009B7C0
  W32(c->r[29]+0x00000064u,c->r[0]); // 8009B7C4
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8009B7C8
  goto L_8009B818; // 8009B7CC
L_8009B7D0:;
  c->r[3]=0u+0x00000020u; // 8009B7D0
  c->lr=0x8009B7D8u; f_800D8ED0(c); // 8009B7D4
  cmps(c,0,(int32_t)c->r[3],0); // 8009B7D8
  c->r[24]=c->r[3]|c->r[3]; // 8009B7DC
  if (crb(c,2)) { goto L_8009B7F8; } // 8009B7E0
  c->lr=0x8009B7E8u; f_80047210(c); // 8009B7E4
  c->r[3]=0u+0x80220000u; // 8009B7E8
  c->r[3]=c->r[3]+0xFFFF9C30u; // 8009B7EC
  W32(c->r[24]+0x00000000u,c->r[3]); // 8009B7F0
  W32(c->r[24]+0x0000001Cu,c->r[29]); // 8009B7F4
L_8009B7F8:;
  W32(c->r[29]+0x00000070u,c->r[24]); // 8009B7F8
  c->r[3]=c->r[31]+0x0000001Cu; // 8009B7FC
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8009B800
  c->r[0]=R32(c->r[3]+0x00000004u); // 8009B804
  W32(c->r[29]+0x00000060u,c->r[0]); // 8009B808
  W32(c->r[29]+0x0000005Cu,c->r[4]); // 8009B80C
  c->r[0]=R32(c->r[3]+0x00000008u); // 8009B810
  W32(c->r[29]+0x00000064u,c->r[0]); // 8009B814
L_8009B818:;
  c->f[1]=c->f[31]; // 8009B818
  c->r[3]=R32(c->r[29]+0x00000058u); // 8009B81C
  c->lr=0x8009B824u; f_80101610(c); // 8009B820
  c->r[3]=R32(c->r[29]+0x00000058u); // 8009B824
  {uint32_t ea=c->r[29]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009B828
  c->lr=0x8009B830u; f_80101920(c); // 8009B82C
  c->r[3]=R32(c->r[29]+0x00000058u); // 8009B830
  c->lr=0x8009B838u; f_80101780(c); // 8009B834
  c->r[3]=0u+0x0000000Cu; // 8009B838
  c->lr=0x8009B840u; f_800D8ED0(c); // 8009B83C
  cmps(c,0,(int32_t)c->r[3],0); // 8009B840
  c->r[4]=c->r[3]|c->r[3]; // 8009B844
  if (crb(c,2)) { goto L_8009B858; } // 8009B848
  c->r[4]=0u+0x00000005u; // 8009B84C
  c->lr=0x8009B854u; f_8004F180(c); // 8009B850
  c->r[4]=c->r[3]|c->r[3]; // 8009B854
L_8009B858:;
  W32(c->r[29]+0x00000068u,c->r[4]); // 8009B858
  c->r[0]=0u+0x00000001u; // 8009B85C
  c->r[30]=0u+0x00000000u; // 8009B860
  c->r[3]=0u+0x00000030u; // 8009B864
  W8(c->r[4]+0x00000008u,c->r[0]); // 8009B868
  W8(c->r[29]+0x0000000Cu,c->r[30]); // 8009B86C
  c->lr=0x8009B874u; f_800D8ED0(c); // 8009B870
  cmps(c,0,(int32_t)c->r[3],0); // 8009B874
  c->r[24]=c->r[3]|c->r[3]; // 8009B878
  if (crb(c,2)) { goto L_8009B8C0; } // 8009B87C
  W32(c->r[3]+0x00000008u,c->r[30]); // 8009B880
  c->r[4]=0u+0x80210000u; // 8009B884
  c->r[4]=c->r[4]+0xFFFFAEA8u; // 8009B888
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 8009B88C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009B890
  c->r[3]=c->r[3]+0x00000018u; // 8009B894
  c->lr=0x8009B89Cu; f_8015C1A0(c); // 8009B898
  W8(c->r[24]+0x0000000Du,c->r[30]); // 8009B89C
  c->r[3]=0u+0x80220000u; // 8009B8A0
  c->r[0]=c->r[24]+0x00000010u; // 8009B8A4
  W8(c->r[24]+0x0000000Fu,c->r[30]); // 8009B8A8
  c->r[3]=c->r[3]+0xFFFFFC04u; // 8009B8AC
  W32(c->r[24]+0x00000010u,c->r[30]); // 8009B8B0
  W32(c->r[24]+0x00000014u,c->r[0]); // 8009B8B4
  W32(c->r[24]+0x00000000u,c->r[3]); // 8009B8B8
  W8(c->r[24]+0x0000000Eu,c->r[30]); // 8009B8BC
L_8009B8C0:;
  c->r[0]=0u+0x00000000u; // 8009B8C0
  W32(c->r[29]+0x0000006Cu,c->r[24]); // 8009B8C4
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B8C8
  W32(c->r[29]+0x00000110u,c->r[0]); // 8009B8CC
  {uint32_t ea=c->r[29]+0x00000098u; WF32(ea,c->f[0]);} // 8009B8D0
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B8D4
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009B8D8
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B8DC
  {uint32_t ea=c->r[29]+0x000000A0u; WF32(ea,c->f[0]);} // 8009B8E0
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B8E4
  {uint32_t ea=c->r[29]+0x000000A4u; WF32(ea,c->f[0]);} // 8009B8E8
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B8EC
  {uint32_t ea=c->r[29]+0x000000A8u; WF32(ea,c->f[0]);} // 8009B8F0
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B8F4
  {uint32_t ea=c->r[29]+0x000000ACu; WF32(ea,c->f[0]);} // 8009B8F8
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B8FC
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[0]);} // 8009B900
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B904
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[0]);} // 8009B908
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B90C
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[0]);} // 8009B910
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B914
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[0]);} // 8009B918
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B91C
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[0]);} // 8009B920
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B924
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[0]);} // 8009B928
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B92C
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[0]);} // 8009B930
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B934
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[0]);} // 8009B938
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B93C
  {uint32_t ea=c->r[29]+0x000000D0u; WF32(ea,c->f[0]);} // 8009B940
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B944
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[0]);} // 8009B948
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B94C
  {uint32_t ea=c->r[29]+0x000000D8u; WF32(ea,c->f[0]);} // 8009B950
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B954
  {uint32_t ea=c->r[29]+0x000000DCu; WF32(ea,c->f[0]);} // 8009B958
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B95C
  {uint32_t ea=c->r[29]+0x000000E0u; WF32(ea,c->f[0]);} // 8009B960
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B964
  {uint32_t ea=c->r[29]+0x000000E4u; WF32(ea,c->f[0]);} // 8009B968
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B96C
  {uint32_t ea=c->r[29]+0x000000E8u; WF32(ea,c->f[0]);} // 8009B970
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B974
  {uint32_t ea=c->r[29]+0x000000ECu; WF32(ea,c->f[0]);} // 8009B978
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B97C
  {uint32_t ea=c->r[29]+0x000000F0u; WF32(ea,c->f[0]);} // 8009B980
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B984
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[0]);} // 8009B988
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B98C
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 8009B990
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B994
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[0]);} // 8009B998
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B99C
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[0]);} // 8009B9A0
  {uint32_t ea=c->r[29]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B9A4
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[0]);} // 8009B9A8
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B9AC
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[0]);} // 8009B9B0
  {uint32_t ea=c->r[29]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009B9B4
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[0]);} // 8009B9B8
  W8(c->r[29]+0x00000120u,c->r[0]); // 8009B9BC
  W32(c->r[29]+0x00000114u,c->r[0]); // 8009B9C0
  W32(c->r[29]+0x00000118u,c->r[0]); // 8009B9C4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 8009B9C8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8009B9CC
  c->r[11]=c->r[1]+0x00000050u; // 8009B9D0
  c->lr=0x8009B9D8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009B9D4
  c->r[0]=R32(c->r[1]+0x00000064u); // 8009B9D8
  c->lr=c->r[0]; // 8009B9DC
  c->r[1]=c->r[1]+0x00000060u; // 8009B9E0
  return; // 8009B9E4
}

// fn_8009B9F0
void f_8009B9F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009B9F0
  c->r[0]=c->lr; // 8009B9F4
  cmps(c,0,(int32_t)c->r[3],0); // 8009B9F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009B9FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009BA00
  c->r[31]=c->r[4]|c->r[4]; // 8009BA04
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009BA08
  c->r[30]=c->r[3]|c->r[3]; // 8009BA0C
  if (crb(c,2)) { goto L_8009BAC8; } // 8009BA10
  c->r[0]=R32(c->r[3]+0x00000070u); // 8009BA14
  c->r[4]=0u+0x80220000u; // 8009BA18
  c->r[4]=c->r[4]+0xFFFF9C60u; // 8009BA1C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009BA20
  cmps(c,0,(int32_t)c->r[0],0); // 8009BA24
  if (crb(c,2)) { goto L_8009BA44; } // 8009BA28
  c->r[3]=c->r[0]|c->r[0]; // 8009BA2C
  c->r[4]=0u+0x00000001u; // 8009BA30
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009BA34
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009BA38
  c->ctr=c->r[12]; // 8009BA3C
  if (true) { c->lr=0x8009BA44u; dispatch(c,c->ctr); } // 8009BA40
L_8009BA44:;
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 8009BA44
  cmps(c,0,(int32_t)c->r[3],0); // 8009BA48
  if (crb(c,2)) { goto L_8009BA64; } // 8009BA4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009BA50
  c->r[4]=0u+0x00000001u; // 8009BA54
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009BA58
  c->ctr=c->r[12]; // 8009BA5C
  if (true) { c->lr=0x8009BA64u; dispatch(c,c->ctr); } // 8009BA60
L_8009BA64:;
  c->r[3]=R32(c->r[30]+0x00000068u); // 8009BA64
  c->r[4]=0u+0x00000001u; // 8009BA68
  c->lr=0x8009BA70u; f_8004F270(c); // 8009BA6C
  c->r[3]=R32(c->r[30]+0x00000058u); // 8009BA70
  cmps(c,0,(int32_t)c->r[3],0); // 8009BA74
  if (crb(c,2)) { goto L_8009BA90; } // 8009BA78
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009BA7C
  c->r[4]=0u+0x00000001u; // 8009BA80
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009BA84
  c->ctr=c->r[12]; // 8009BA88
  if (true) { c->lr=0x8009BA90u; dispatch(c,c->ctr); } // 8009BA8C
L_8009BA90:;
  c->r[6]=R32(c->r[13]+0xFFFFADD8u); // 8009BA90
  c->r[3]=c->r[30]+0x00000044u; // 8009BA94
  c->r[4]=0u+0xFFFFFFFFu; // 8009BA98
  c->r[5]=R32(c->r[6]+0x0000009Cu); // 8009BA9C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8009BAA0
  W32(c->r[6]+0x0000009Cu,c->r[0]); // 8009BAA4
  c->lr=0x8009BAACu; f_8004F0A0(c); // 8009BAA8
  c->r[3]=c->r[30]|c->r[30]; // 8009BAAC
  c->r[4]=0u+0x00000000u; // 8009BAB0
  c->lr=0x8009BAB8u; f_8000BFD0(c); // 8009BAB4
  cmps(c,0,(int32_t)c->r[31],0); // 8009BAB8
  if (!crb(c,1)) { goto L_8009BAC8; } // 8009BABC
  c->r[3]=c->r[30]|c->r[30]; // 8009BAC0
  c->lr=0x8009BAC8u; f_800D93B0(c); // 8009BAC4
L_8009BAC8:;
  c->r[3]=c->r[30]|c->r[30]; // 8009BAC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009BACC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009BAD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009BAD4
  c->lr=c->r[0]; // 8009BAD8
  c->r[1]=c->r[1]+0x00000010u; // 8009BADC
  return; // 8009BAE0
}

// fn_8009BAF0
void f_8009BAF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BAF0
  c->r[0]=c->lr; // 8009BAF4
  cmps(c,0,(int32_t)c->r[3],0); // 8009BAF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009BAFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009BB00
  c->r[31]=c->r[4]|c->r[4]; // 8009BB04
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009BB08
  c->r[30]=c->r[3]|c->r[3]; // 8009BB0C
  if (crb(c,2)) { goto L_8009BB2C; } // 8009BB10
  c->r[4]=0u+0x00000000u; // 8009BB14
  c->lr=0x8009BB1Cu; f_80047250(c); // 8009BB18
  cmps(c,0,(int32_t)c->r[31],0); // 8009BB1C
  if (!crb(c,1)) { goto L_8009BB2C; } // 8009BB20
  c->r[3]=c->r[30]|c->r[30]; // 8009BB24
  c->lr=0x8009BB2Cu; f_800D93B0(c); // 8009BB28
L_8009BB2C:;
  c->r[3]=c->r[30]|c->r[30]; // 8009BB2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009BB30
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009BB34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009BB38
  c->lr=c->r[0]; // 8009BB3C
  c->r[1]=c->r[1]+0x00000010u; // 8009BB40
  return; // 8009BB44
}

// fn_8009BB50
void f_8009BB50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BB50
  c->r[0]=c->lr; // 8009BB54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009BB58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009BB5C
  c->r[31]=c->r[3]|c->r[3]; // 8009BB60
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009BB64
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 8009BB68
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009BB6C
  cmps(c,0,(int32_t)c->r[0],0); // 8009BB70
  if (!crb(c,2)) { goto L_8009BB8C; } // 8009BB74
  c->r[12]=R32(c->r[4]+0x00000000u); // 8009BB78
  c->r[3]=c->r[4]|c->r[4]; // 8009BB7C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8009BB80
  c->ctr=c->r[12]; // 8009BB84
  if (true) { c->lr=0x8009BB8Cu; dispatch(c,c->ctr); } // 8009BB88
L_8009BB8C:;
  c->r[3]=c->r[31]|c->r[31]; // 8009BB8C
  c->r[12]=c->r[31]+0x0000005Cu; // 8009BB90
  c->lr=0x8009BB98u; f_801D5688(c); // 8009BB94
  c->r[0]=c->r[0]|0x00000000u; // 8009BB98
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 8009BB9C
  c->r[4]=c->r[31]+0x00000010u; // 8009BBA0
  {uint32_t ea=c->r[2]+0xFFFFA300u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BBA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009BBA8
  c->r[12]=R32(c->r[12]+0x00000020u); // 8009BBAC
  c->ctr=c->r[12]; // 8009BBB0
  if (true) { c->lr=0x8009BBB8u; dispatch(c,c->ctr); } // 8009BBB4
  c->r[0]=cntlz(c->r[3]); // 8009BBB8
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009BBBC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8009BBC0
  W8(c->r[31]+0x00000120u,c->r[0]); // 8009BBC4
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BBC8
  c->lr=0x8009BBD0u; f_80101920(c); // 8009BBCC
  c->r[4]=R32(c->r[31]+0x00000110u); // 8009BBD0
  c->r[3]=0u+0xCCCD0000u; // 8009BBD4
  c->r[0]=c->r[3]+0xFFFFCCCDu; // 8009BBD8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BBDC
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8009BBE0
  c->r[3]=c->r[31]+c->r[3]; // 8009BBE4
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 8009BBE8
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BBEC
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8009BBF0
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BBF4
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 8009BBF8
  c->r[3]=R32(c->r[31]+0x00000110u); // 8009BBFC
  c->r[30]=R32(c->r[31]+0x00000078u); // 8009BC00
  c->r[3]=c->r[3]+0x00000001u; // 8009BC04
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 8009BC08
  cmps(c,0,(int32_t)c->r[30],0); // 8009BC0C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8009BC10
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8009BC14
  c->r[0]=c->r[3]-c->r[0]; // 8009BC18
  W32(c->r[31]+0x00000110u,c->r[0]); // 8009BC1C
  if (crb(c,2)) { goto L_8009BCA4; } // 8009BC20
  c->r[0]=R32(c->r[31]+0x00000114u); // 8009BC24
  cmps(c,0,(int32_t)c->r[0],0); // 8009BC28
  if (crb(c,2)) { goto L_8009BC4C; } // 8009BC2C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8009BC30
  W32(c->r[31]+0x00000114u,c->r[0]); // 8009BC34
  if (!crb(c,2)) { goto L_8009BC4C; } // 8009BC38
  c->r[3]=c->r[30]+0x00000044u; // 8009BC3C
  c->lr=0x8009BC44u; f_8004F0E0(c); // 8009BC40
  c->r[0]=0u+0x00000002u; // 8009BC44
  W32(c->r[30]+0x00000114u,c->r[0]); // 8009BC48
L_8009BC4C:;
  c->r[0]=R32(c->r[31]+0x00000118u); // 8009BC4C
  cmps(c,0,(int32_t)c->r[0],0); // 8009BC50
  if (crb(c,2)) { goto L_8009BCA4; } // 8009BC54
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8009BC58
  W32(c->r[31]+0x00000118u,c->r[0]); // 8009BC5C
  if (!crb(c,2)) { goto L_8009BCA4; } // 8009BC60
  c->r[30]=R32(c->r[31]+0x00000078u); // 8009BC64
  c->r[0]=0u+0x00000000u; // 8009BC68
  c->r[3]=R32(c->r[30]+0x00000068u); // 8009BC6C
  W8(c->r[3]+0x00000008u,c->r[0]); // 8009BC70
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009BC74
  c->lr=0x8009BC7Cu; f_800FBF40(c); // 8009BC78
  c->r[4]=0u+0xAAAB0000u; // 8009BC7C
  c->r[0]=0u+0x00000012u; // 8009BC80
  c->r[4]=c->r[4]+0xFFFFAAABu; // 8009BC84
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[3])>>32); // 8009BC88
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 8009BC8C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 8009BC90
  c->r[3]=c->r[3]-c->r[4]; // 8009BC94
  c->r[3]=c->r[3]+0x00000003u; // 8009BC98
  W32(c->r[30]+0x00000118u,c->r[3]); // 8009BC9C
  W32(c->r[30]+0x00000034u,c->r[0]); // 8009BCA0
L_8009BCA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009BCA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009BCA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009BCAC
  c->lr=c->r[0]; // 8009BCB0
  c->r[1]=c->r[1]+0x00000010u; // 8009BCB4
  return; // 8009BCB8
}

// fn_8009BCC0
void f_8009BCC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009BCC0
  c->r[0]=c->lr; // 8009BCC4
  W32(c->r[1]+0x00000114u,c->r[0]); // 8009BCC8
  c->r[11]=c->r[1]+0x000000E0u; // 8009BCCC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 8009BCD0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 8009BCD4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 8009BCD8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 8009BCDC
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 8009BCE0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 8009BCE4
  c->lr=0x8009BCECu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009BCE8
  c->r[0]=R8(c->r[3]+0x00000120u); // 8009BCEC
  c->r[4]=0u+0x43300000u; // 8009BCF0
  c->r[27]=0u+0x801F0000u; // 8009BCF4
  c->r[26]=0u+0x80220000u; // 8009BCF8
  cmps(c,0,(int32_t)c->r[0],0); // 8009BCFC
  W32(c->r[1]+0x00000098u,c->r[4]); // 8009BD00
  c->r[31]=c->r[3]|c->r[3]; // 8009BD04
  c->r[27]=c->r[27]+0xFFFFAF70u; // 8009BD08
  W32(c->r[1]+0x000000A0u,c->r[4]); // 8009BD0C
  c->r[26]=c->r[26]+0xFFFF9AA0u; // 8009BD10
  if (crb(c,2)) { goto L_8009BD70; } // 8009BD14
  c->r[5]=R32(c->r[3]+0x00000078u); // 8009BD18
  c->r[4]=0u+0x00000001u; // 8009BD1C
  goto L_8009BD40; // 8009BD20
  c->r[0]=c->r[0]|0x00000000u; // 8009BD24
L_8009BD28:;
  c->r[0]=R8(c->r[5]+0x00000120u); // 8009BD28
  cmps(c,0,(int32_t)c->r[0],0); // 8009BD2C
  if (!crb(c,2)) { goto L_8009BD3C; } // 8009BD30
  c->r[4]=0u+0x00000000u; // 8009BD34
  goto L_8009BD48; // 8009BD38
L_8009BD3C:;
  c->r[5]=R32(c->r[5]+0x00000078u); // 8009BD3C
L_8009BD40:;
  cmps(c,0,(int32_t)c->r[5],0); // 8009BD40
  if (!crb(c,2)) { IRQCHK(c); goto L_8009BD28; } // 8009BD44
L_8009BD48:;
  cmps(c,0,(int32_t)c->r[4],0); // 8009BD48
  if (crb(c,2)) { goto L_8009BD70; } // 8009BD4C
  c->r[0]=0u+0x00000002u; // 8009BD50
  goto L_8009BD64; // 8009BD54
L_8009BD58:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 8009BD58
  W32(c->r[31]+0x00000008u,c->r[0]); // 8009BD5C
  c->r[31]=c->r[3]|c->r[3]; // 8009BD60
L_8009BD64:;
  cmps(c,0,(int32_t)c->r[31],0); // 8009BD64
  if (!crb(c,2)) { IRQCHK(c); goto L_8009BD58; } // 8009BD68
  goto L_8009C790; // 8009BD6C
L_8009BD70:;
  c->r[3]=R32(c->r[3]+0x00000068u); // 8009BD70
  c->r[4]=c->r[1]+0x0000000Cu; // 8009BD74
  c->r[5]=c->r[1]+0x00000008u; // 8009BD78
  c->lr=0x8009BD80u; f_8004F390(c); // 8009BD7C
  c->r[4]=R32(c->r[1]+0x00000008u); // 8009BD80
  cmps(c,0,(int32_t)c->r[4],0); // 8009BD84
  if (crb(c,2)) { goto L_8009BE74; } // 8009BD88
  c->r[0]=R32(c->r[31]+0x00000040u); // 8009BD8C
  c->r[3]=c->r[31]+0x00000044u; // 8009BD90
  c->r[0]=c->r[0]-c->r[4]; // 8009BD94
  W32(c->r[31]+0x00000040u,c->r[0]); // 8009BD98
  c->lr=0x8009BDA0u; f_8004F0E0(c); // 8009BD9C
  c->r[3]=c->r[31]+0x00000044u; // 8009BDA0
  c->lr=0x8009BDA8u; f_8004F0E0(c); // 8009BDA4
  c->r[0]=R32(c->r[31]+0x00000040u); // 8009BDA8
  c->r[3]=0u+0x00000002u; // 8009BDAC
  W32(c->r[31]+0x00000114u,c->r[3]); // 8009BDB0
  cmps(c,0,(int32_t)c->r[0],0); // 8009BDB4
  if (crb(c,1)) { goto L_8009BE74; } // 8009BDB8
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 8009BDBC
  c->r[5]=0u+0x00000000u; // 8009BDC0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8009BDC4
  c->lr=0x8009BDCCu; f_80012AF0(c); // 8009BDC8
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 8009BDCC
  c->r[4]=0u+0x00000030u; // 8009BDD0
  c->lr=0x8009BDD8u; f_800A8BE0(c); // 8009BDD4
  c->r[3]=0u+0x00000014u; // 8009BDD8
  c->lr=0x8009BDE0u; f_800D8ED0(c); // 8009BDDC
  cmps(c,0,(int32_t)c->r[3],0); // 8009BDE0
  if (crb(c,2)) { goto L_8009BE20; } // 8009BDE4
  c->r[8]=R32(c->r[31]+0x00000010u); // 8009BDE8
  c->r[4]=c->r[1]+0x00000034u; // 8009BDEC
  c->r[0]=R32(c->r[31]+0x00000014u); // 8009BDF0
  c->r[5]=0u+0x00000002u; // 8009BDF4
  W32(c->r[1]+0x00000038u,c->r[0]); // 8009BDF8
  c->r[6]=0u+0x00000002u; // 8009BDFC
  {uint32_t ea=c->r[2]+0xFFFFA304u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BE00
  c->r[7]=0u+0x00000002u; // 8009BE04
  W32(c->r[1]+0x00000034u,c->r[8]); // 8009BE08
  {uint32_t ea=c->r[2]+0xFFFFA308u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009BE0C
  c->r[0]=R32(c->r[31]+0x00000018u); // 8009BE10
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8009BE14
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009BE18
  c->lr=0x8009BE20u; f_80090690(c); // 8009BE1C
L_8009BE20:;
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 8009BE20
  c->r[4]=c->r[31]+0x00000010u; // 8009BE24
  c->lr=0x8009BE2Cu; f_80012CE0(c); // 8009BE28
  c->r[3]=R32(c->r[31]+0x00000068u); // 8009BE2C
  c->r[22]=0u+0x00000000u; // 8009BE30
  W8(c->r[3]+0x00000008u,c->r[22]); // 8009BE34
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009BE38
  c->lr=0x8009BE40u; f_800FBF40(c); // 8009BE3C
  c->r[4]=0u+0xAAAB0000u; // 8009BE40
  c->r[0]=0u+0x00000012u; // 8009BE44
  c->r[4]=c->r[4]+0xFFFFAAABu; // 8009BE48
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009BE4C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[3])>>32); // 8009BE50
  c->r[4]=R32(c->r[31]+0x00000070u); // 8009BE54
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8009BE58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8009BE5C
  c->r[3]=c->r[3]-c->r[0]; // 8009BE60
  c->r[0]=c->r[3]+0x00000003u; // 8009BE64
  W32(c->r[31]+0x00000118u,c->r[0]); // 8009BE68
  W8(c->r[4]+0x00000004u,c->r[22]); // 8009BE6C
  W32(c->r[31]+0x00000038u,c->r[22]); // 8009BE70
L_8009BE74:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 8009BE74
  cmps(c,0,(int32_t)c->r[3],0); // 8009BE78
  if (crb(c,2)) { goto L_8009BE8C; } // 8009BE7C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009BE80
  W32(c->r[31]+0x00000038u,c->r[0]); // 8009BE84
  goto L_8009C6AC; // 8009BE88
L_8009BE8C:;
  c->r[4]=R32(c->r[31]+0x00000034u); // 8009BE8C
  cmpu(c,0,c->r[4],0x00000013u); // 8009BE90
  if (crb(c,1)) { goto L_8009C6AC; } // 8009BE94
  c->r[3]=0u+0x80220000u; // 8009BE98
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8009BE9C
  c->r[3]=c->r[3]+0xFFFF9AECu; // 8009BEA0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8009BEA4
  c->ctr=c->r[3]; // 8009BEA8
  if (true) { switch (c->ctr) { case 0x8009BEB0u: goto L_8009BEB0; case 0x8009BF1Cu: goto L_8009BF1C; case 0x8009BF30u: goto L_8009BF30; case 0x8009BF40u: goto L_8009BF40; case 0x8009BF8Cu: goto L_8009BF8C; case 0x8009BFACu: goto L_8009BFAC; case 0x8009BFD4u: goto L_8009BFD4; case 0x8009C690u: goto L_8009C690; case 0x8009C6A4u: goto L_8009C6A4; case 0x8009C6ACu: goto L_8009C6AC; default: break; } dispatch(c,c->ctr); return; } // 8009BEAC
L_8009BEB0:;
  c->r[0]=R32(c->r[31]+0x0000011Cu); // 8009BEB0
  cmps(c,0,(int32_t)c->r[0],0); // 8009BEB4
  if (crb(c,2)) { goto L_8009BED0; } // 8009BEB8
  cmps(c,0,(int32_t)c->r[0],1); // 8009BEBC
  if (crb(c,2)) { goto L_8009BEE4; } // 8009BEC0
  cmps(c,0,(int32_t)c->r[0],2); // 8009BEC4
  if (crb(c,2)) { goto L_8009BEF8; } // 8009BEC8
  goto L_8009BF08; // 8009BECC
L_8009BED0:;
  c->r[3]=0u+0x00000014u; // 8009BED0
  c->r[0]=0u+0x00000001u; // 8009BED4
  W32(c->r[31]+0x00000038u,c->r[3]); // 8009BED8
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009BEDC
  goto L_8009BF08; // 8009BEE0
L_8009BEE4:;
  c->r[3]=0u+0x00000014u; // 8009BEE4
  c->r[0]=0u+0x00000004u; // 8009BEE8
  W32(c->r[31]+0x00000038u,c->r[3]); // 8009BEEC
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009BEF0
  goto L_8009BF08; // 8009BEF4
L_8009BEF8:;
  c->r[3]=0u+0x00000014u; // 8009BEF8
  c->r[0]=0u+0x00000007u; // 8009BEFC
  W32(c->r[31]+0x00000038u,c->r[3]); // 8009BF00
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009BF04
L_8009BF08:;
  c->r[3]=0u+0x00000000u; // 8009BF08
  c->r[0]=0u+0x0000000Du; // 8009BF0C
  W32(c->r[31]+0x00000038u,c->r[3]); // 8009BF10
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009BF14
  goto L_8009C6AC; // 8009BF18
L_8009BF1C:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BF1C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BF20
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009BF24
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 8009BF28
  goto L_8009C6AC; // 8009BF2C
L_8009BF30:;
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BF30
  c->r[0]=c->r[4]+0x00000001u; // 8009BF34
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 8009BF38
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009BF3C
L_8009BF40:;
  {uint32_t ea=c->r[2]+0xFFFFA310u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009BF40
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BF44
  {uint32_t ea=c->r[2]+0xFFFFA314u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BF48
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8009BF4C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8009BF50
  c->lr=0x8009BF58u; f_801E20DC(c); // 8009BF54
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8009BF58
  {uint32_t ea=c->r[2]+0xFFFFA318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BF5C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009BF60
  {uint32_t ea=c->r[31]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009BF64
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 8009BF68
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BF6C
  {uint32_t ea=c->r[2]+0xFFFFA31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BF70
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 8009BF74
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009BF78
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[3]); // 8009BF7C
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 8009BF80
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[1]);} // 8009BF84
  goto L_8009C6AC; // 8009BF88
L_8009BF8C:;
  {uint32_t ea=c->r[2]+0xFFFFA320u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BF8C
  c->r[0]=c->r[4]+0x00000001u; // 8009BF90
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BF94
  c->r[3]=0u+0x0000003Cu; // 8009BF98
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 8009BF9C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8009BFA0
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009BFA4
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 8009BFA8
L_8009BFAC:;
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8009BFAC
  cmps(c,0,(int32_t)c->r[3],0); // 8009BFB0
  if (crb(c,2)) { goto L_8009C6AC; } // 8009BFB4
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009BFB8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009BFBC
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009BFC0
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 8009BFC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009BFC8
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 8009BFCC
  goto L_8009C6AC; // 8009BFD0
L_8009BFD4:;
  c->r[0]=R32(c->r[31]+0x0000011Cu); // 8009BFD4
  cmps(c,0,(int32_t)c->r[0],0); // 8009BFD8
  if (crb(c,2)) { goto L_8009BFF4; } // 8009BFDC
  cmps(c,0,(int32_t)c->r[0],1); // 8009BFE0
  if (crb(c,2)) { goto L_8009C224; } // 8009BFE4
  cmps(c,0,(int32_t)c->r[0],2); // 8009BFE8
  if (crb(c,2)) { goto L_8009C454; } // 8009BFEC
  goto L_8009C680; // 8009BFF0
L_8009BFF4:;
  c->r[25]=c->r[27]+0x00000000u; // 8009BFF4
  c->r[3]=0u+0x00000030u; // 8009BFF8
  c->lr=0x8009C000u; f_800D8ED0(c); // 8009BFFC
  cmps(c,0,(int32_t)c->r[3],0); // 8009C000
  c->r[24]=c->r[3]|c->r[3]; // 8009C004
  if (crb(c,2)) { goto L_8009C054; } // 8009C008
  c->r[22]=0u+0x00000000u; // 8009C00C
  W32(c->r[3]+0x00000008u,c->r[22]); // 8009C010
  c->r[4]=0u+0x80210000u; // 8009C014
  W8(c->r[3]+0x0000000Cu,c->r[22]); // 8009C018
  c->r[4]=c->r[4]+0xFFFFAEA8u; // 8009C01C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009C020
  c->r[3]=c->r[3]+0x00000018u; // 8009C024
  c->lr=0x8009C02Cu; f_8015C1A0(c); // 8009C028
  W8(c->r[24]+0x0000000Du,c->r[22]); // 8009C02C
  c->r[3]=0u+0x80220000u; // 8009C030
  c->r[4]=c->r[24]+0x00000010u; // 8009C034
  c->r[0]=0u+0x00000001u; // 8009C038
  W8(c->r[24]+0x0000000Fu,c->r[22]); // 8009C03C
  c->r[3]=c->r[3]+0xFFFFFC04u; // 8009C040
  W32(c->r[24]+0x00000010u,c->r[22]); // 8009C044
  W32(c->r[24]+0x00000014u,c->r[4]); // 8009C048
  W32(c->r[24]+0x00000000u,c->r[3]); // 8009C04C
  W8(c->r[24]+0x0000000Eu,c->r[0]); // 8009C050
L_8009C054:;
  c->r[28]=0u+0x80210000u; // 8009C054
  c->r[29]=0u+0x80220000u; // 8009C058
  c->r[27]=0u+0x80210000u; // 8009C05C
  c->r[22]=0u+0x80220000u; // 8009C060
  {uint32_t ea=c->r[31]+0x00000080u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009C064
  c->r[29]=c->r[29]+0xFFFFFDA0u; // 8009C068
  {uint32_t ea=c->r[2]+0xFFFFA330u; c->f[30]=RF64(ea);} // 8009C06C
  c->r[28]=c->r[28]+0x0000293Cu; // 8009C070
  c->r[27]=c->r[27]+0x00002908u; // 8009C074
  c->r[23]=c->r[26]+0x00000028u; // 8009C078
  c->r[22]=c->r[22]+0xFFFF9B48u; // 8009C07C
  c->r[30]=0u+0x00000000u; // 8009C080
  goto L_8009C208; // 8009C084
L_8009C088:;
  cmps(c,0,(int32_t)c->r[0],0); // 8009C088
  if (crb(c,2)) { goto L_8009C0A4; } // 8009C08C
  cmps(c,0,(int32_t)c->r[0],1); // 8009C090
  if (crb(c,2)) { goto L_8009C0E8; } // 8009C094
  cmps(c,0,(int32_t)c->r[0],3); // 8009C098
  if (crb(c,2)) { goto L_8009C1A4; } // 8009C09C
  goto L_8009C204; // 8009C0A0
L_8009C0A4:;
  c->r[3]=0u+0x00000014u; // 8009C0A4
  c->lr=0x8009C0ACu; f_800D8ED0(c); // 8009C0A8
  cmps(c,0,(int32_t)c->r[3],0); // 8009C0AC
  c->r[4]=c->r[3]|c->r[3]; // 8009C0B0
  if (crb(c,2)) { goto L_8009C0DC; } // 8009C0B4
  c->r[0]=R32(c->r[25]+0x00000004u); // 8009C0B8
  W32(c->r[3]+0x00000008u,c->r[30]); // 8009C0BC
  c->r[0]=c->r[0]^0x80000000u; // 8009C0C0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009C0C4
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 8009C0C8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 8009C0CC
  W32(c->r[3]+0x00000000u,c->r[29]); // 8009C0D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8009C0D4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009C0D8
L_8009C0DC:;
  c->r[3]=c->r[24]|c->r[24]; // 8009C0DC
  c->lr=0x8009C0E4u; f_800DA000(c); // 8009C0E0
  goto L_8009C204; // 8009C0E4
L_8009C0E8:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 8009C0E8
  c->r[3]=0u+0x00000034u; // 8009C0EC
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C0F0
  c->r[0]=c->r[0]^0x80000000u; // 8009C0F4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009C0F8
  c->r[21]=R32(c->r[25]+0x00000008u); // 8009C0FC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 8009C100
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 8009C104
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8009C108
  c->f[31]=c->ps1[31]=S(c->f[29]+c->f[0]); // 8009C10C
  c->lr=0x8009C114u; f_800D8ED0(c); // 8009C110
  cmps(c,0,(int32_t)c->r[3],0); // 8009C114
  c->r[4]=c->r[3]|c->r[3]; // 8009C118
  if (crb(c,2)) { goto L_8009C194; } // 8009C11C
  cmps(c,0,(int32_t)c->r[21],0); // 8009C120
  W32(c->r[1]+0x00000078u,c->r[28]); // 8009C124
  c->r[7]=R8(c->r[25]+0x00000018u); // 8009C128
  c->r[6]=0u+0x00000001u; // 8009C12C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[29]);} // 8009C130
  {uint32_t ea=c->r[25]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C134
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[31]);} // 8009C138
  W32(c->r[1]+0x00000084u,c->r[30]); // 8009C13C
  if (crb(c,2)) { goto L_8009C148; } // 8009C140
  c->r[6]=c->r[21]|c->r[21]; // 8009C144
L_8009C148:;
  W32(c->r[3]+0x00000008u,c->r[30]); // 8009C148
  c->r[0]=c->r[31]+0x00000080u; // 8009C14C
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C150
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 8009C154
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C158
  W32(c->r[3]+0x00000000u,c->r[27]); // 8009C15C
  c->r[5]=R32(c->r[1]+0x00000084u); // 8009C160
  W32(c->r[3]+0x00000010u,c->r[28]); // 8009C164
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8009C168
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009C16C
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8009C170
  W32(c->r[3]+0x00000020u,c->r[6]); // 8009C174
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 8009C178
  W8(c->r[3]+0x00000028u,c->r[7]); // 8009C17C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8009C180
  W32(c->r[1]+0x00000088u,c->r[6]); // 8009C184
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 8009C188
  W8(c->r[1]+0x00000090u,c->r[7]); // 8009C18C
  W32(c->r[3]+0x00000030u,c->r[30]); // 8009C190
L_8009C194:;
  c->r[3]=c->r[24]|c->r[24]; // 8009C194
  c->lr=0x8009C19Cu; f_800DA000(c); // 8009C198
  c->f[29]=c->f[31]; // 8009C19C
  goto L_8009C204; // 8009C1A0
L_8009C1A4:;
  c->r[5]=R32(c->r[26]+0x00000028u); // 8009C1A4
  c->r[3]=0u+0x00000024u; // 8009C1A8
  c->r[4]=R32(c->r[23]+0x00000004u); // 8009C1AC
  c->r[0]=R32(c->r[23]+0x00000008u); // 8009C1B0
  W32(c->r[1]+0x00000028u,c->r[5]); // 8009C1B4
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8009C1B8
  W32(c->r[1]+0x00000030u,c->r[0]); // 8009C1BC
  c->lr=0x8009C1C4u; f_800D8ED0(c); // 8009C1C0
  cmps(c,0,(int32_t)c->r[3],0); // 8009C1C4
  c->r[4]=c->r[3]|c->r[3]; // 8009C1C8
  if (crb(c,2)) { goto L_8009C1FC; } // 8009C1CC
  W32(c->r[3]+0x00000008u,c->r[30]); // 8009C1D0
  c->r[6]=R32(c->r[1]+0x00000028u); // 8009C1D4
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 8009C1D8
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 8009C1DC
  W32(c->r[3]+0x00000000u,c->r[22]); // 8009C1E0
  c->r[0]=R32(c->r[1]+0x00000030u); // 8009C1E4
  W32(c->r[3]+0x00000010u,c->r[31]); // 8009C1E8
  W32(c->r[3]+0x00000014u,c->r[6]); // 8009C1EC
  W32(c->r[3]+0x00000018u,c->r[5]); // 8009C1F0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8009C1F4
  W32(c->r[3]+0x00000020u,c->r[25]); // 8009C1F8
L_8009C1FC:;
  c->r[3]=c->r[24]|c->r[24]; // 8009C1FC
  c->lr=0x8009C204u; f_800DA000(c); // 8009C200
L_8009C204:;
  c->r[25]=c->r[25]+0x0000001Cu; // 8009C204
L_8009C208:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8009C208
  cmps(c,0,(int32_t)c->r[0],4); // 8009C20C
  if (!crb(c,2)) { IRQCHK(c); goto L_8009C088; } // 8009C210
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 8009C214
  c->r[4]=c->r[24]|c->r[24]; // 8009C218
  c->lr=0x8009C220u; f_800DA000(c); // 8009C21C
  goto L_8009C680; // 8009C220
L_8009C224:;
  c->r[24]=c->r[27]+0x00000058u; // 8009C224
  c->r[3]=0u+0x00000030u; // 8009C228
  c->lr=0x8009C230u; f_800D8ED0(c); // 8009C22C
  cmps(c,0,(int32_t)c->r[3],0); // 8009C230
  c->r[25]=c->r[3]|c->r[3]; // 8009C234
  if (crb(c,2)) { goto L_8009C284; } // 8009C238
  c->r[22]=0u+0x00000000u; // 8009C23C
  W32(c->r[3]+0x00000008u,c->r[22]); // 8009C240
  c->r[4]=0u+0x80210000u; // 8009C244
  W8(c->r[3]+0x0000000Cu,c->r[22]); // 8009C248
  c->r[4]=c->r[4]+0xFFFFAEA8u; // 8009C24C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009C250
  c->r[3]=c->r[3]+0x00000018u; // 8009C254
  c->lr=0x8009C25Cu; f_8015C1A0(c); // 8009C258
  W8(c->r[25]+0x0000000Du,c->r[22]); // 8009C25C
  c->r[3]=0u+0x80220000u; // 8009C260
  c->r[4]=c->r[25]+0x00000010u; // 8009C264
  c->r[0]=0u+0x00000001u; // 8009C268
  W8(c->r[25]+0x0000000Fu,c->r[22]); // 8009C26C
  c->r[3]=c->r[3]+0xFFFFFC04u; // 8009C270
  W32(c->r[25]+0x00000010u,c->r[22]); // 8009C274
  W32(c->r[25]+0x00000014u,c->r[4]); // 8009C278
  W32(c->r[25]+0x00000000u,c->r[3]); // 8009C27C
  W8(c->r[25]+0x0000000Eu,c->r[0]); // 8009C280
L_8009C284:;
  c->r[28]=0u+0x80210000u; // 8009C284
  c->r[29]=0u+0x80220000u; // 8009C288
  c->r[27]=0u+0x80210000u; // 8009C28C
  c->r[22]=0u+0x80220000u; // 8009C290
  {uint32_t ea=c->r[31]+0x00000080u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009C294
  c->r[29]=c->r[29]+0xFFFFFDA0u; // 8009C298
  {uint32_t ea=c->r[2]+0xFFFFA330u; c->f[30]=RF64(ea);} // 8009C29C
  c->r[28]=c->r[28]+0x0000293Cu; // 8009C2A0
  c->r[27]=c->r[27]+0x00002908u; // 8009C2A4
  c->r[23]=c->r[26]+0x00000034u; // 8009C2A8
  c->r[22]=c->r[22]+0xFFFF9B48u; // 8009C2AC
  c->r[30]=0u+0x00000000u; // 8009C2B0
  goto L_8009C438; // 8009C2B4
L_8009C2B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8009C2B8
  if (crb(c,2)) { goto L_8009C2D4; } // 8009C2BC
  cmps(c,0,(int32_t)c->r[0],1); // 8009C2C0
  if (crb(c,2)) { goto L_8009C318; } // 8009C2C4
  cmps(c,0,(int32_t)c->r[0],3); // 8009C2C8
  if (crb(c,2)) { goto L_8009C3D4; } // 8009C2CC
  goto L_8009C434; // 8009C2D0
L_8009C2D4:;
  c->r[3]=0u+0x00000014u; // 8009C2D4
  c->lr=0x8009C2DCu; f_800D8ED0(c); // 8009C2D8
  cmps(c,0,(int32_t)c->r[3],0); // 8009C2DC
  c->r[4]=c->r[3]|c->r[3]; // 8009C2E0
  if (crb(c,2)) { goto L_8009C30C; } // 8009C2E4
  c->r[0]=R32(c->r[24]+0x00000004u); // 8009C2E8
  W32(c->r[3]+0x00000008u,c->r[30]); // 8009C2EC
  c->r[0]=c->r[0]^0x80000000u; // 8009C2F0
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009C2F4
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 8009C2F8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 8009C2FC
  W32(c->r[3]+0x00000000u,c->r[29]); // 8009C300
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8009C304
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009C308
L_8009C30C:;
  c->r[3]=c->r[25]|c->r[25]; // 8009C30C
  c->lr=0x8009C314u; f_800DA000(c); // 8009C310
  goto L_8009C434; // 8009C314
L_8009C318:;
  c->r[0]=R32(c->r[24]+0x00000004u); // 8009C318
  c->r[3]=0u+0x00000034u; // 8009C31C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C320
  c->r[0]=c->r[0]^0x80000000u; // 8009C324
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009C328
  c->r[21]=R32(c->r[24]+0x00000008u); // 8009C32C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 8009C330
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 8009C334
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8009C338
  c->f[29]=c->ps1[29]=S(c->f[31]+c->f[0]); // 8009C33C
  c->lr=0x8009C344u; f_800D8ED0(c); // 8009C340
  cmps(c,0,(int32_t)c->r[3],0); // 8009C344
  c->r[4]=c->r[3]|c->r[3]; // 8009C348
  if (crb(c,2)) { goto L_8009C3C4; } // 8009C34C
  cmps(c,0,(int32_t)c->r[21],0); // 8009C350
  W32(c->r[1]+0x0000005Cu,c->r[28]); // 8009C354
  c->r[7]=R8(c->r[24]+0x00000018u); // 8009C358
  c->r[6]=0u+0x00000001u; // 8009C35C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[31]);} // 8009C360
  {uint32_t ea=c->r[24]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C364
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[29]);} // 8009C368
  W32(c->r[1]+0x00000068u,c->r[30]); // 8009C36C
  if (crb(c,2)) { goto L_8009C378; } // 8009C370
  c->r[6]=c->r[21]|c->r[21]; // 8009C374
L_8009C378:;
  W32(c->r[3]+0x00000008u,c->r[30]); // 8009C378
  c->r[0]=c->r[31]+0x00000080u; // 8009C37C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C380
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 8009C384
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C388
  W32(c->r[3]+0x00000000u,c->r[27]); // 8009C38C
  c->r[5]=R32(c->r[1]+0x00000068u); // 8009C390
  W32(c->r[3]+0x00000010u,c->r[28]); // 8009C394
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8009C398
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009C39C
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8009C3A0
  W32(c->r[3]+0x00000020u,c->r[6]); // 8009C3A4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 8009C3A8
  W8(c->r[3]+0x00000028u,c->r[7]); // 8009C3AC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8009C3B0
  W32(c->r[1]+0x0000006Cu,c->r[6]); // 8009C3B4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[2]);} // 8009C3B8
  W8(c->r[1]+0x00000074u,c->r[7]); // 8009C3BC
  W32(c->r[3]+0x00000030u,c->r[30]); // 8009C3C0
L_8009C3C4:;
  c->r[3]=c->r[25]|c->r[25]; // 8009C3C4
  c->lr=0x8009C3CCu; f_800DA000(c); // 8009C3C8
  c->f[31]=c->f[29]; // 8009C3CC
  goto L_8009C434; // 8009C3D0
L_8009C3D4:;
  c->r[5]=R32(c->r[26]+0x00000034u); // 8009C3D4
  c->r[3]=0u+0x00000024u; // 8009C3D8
  c->r[4]=R32(c->r[23]+0x00000004u); // 8009C3DC
  c->r[0]=R32(c->r[23]+0x00000008u); // 8009C3E0
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 8009C3E4
  W32(c->r[1]+0x00000020u,c->r[4]); // 8009C3E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C3EC
  c->lr=0x8009C3F4u; f_800D8ED0(c); // 8009C3F0
  cmps(c,0,(int32_t)c->r[3],0); // 8009C3F4
  c->r[4]=c->r[3]|c->r[3]; // 8009C3F8
  if (crb(c,2)) { goto L_8009C42C; } // 8009C3FC
  W32(c->r[3]+0x00000008u,c->r[30]); // 8009C400
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 8009C404
  W8(c->r[3]+0x0000000Cu,c->r[30]); // 8009C408
  c->r[5]=R32(c->r[1]+0x00000020u); // 8009C40C
  W32(c->r[3]+0x00000000u,c->r[22]); // 8009C410
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009C414
  W32(c->r[3]+0x00000010u,c->r[31]); // 8009C418
  W32(c->r[3]+0x00000014u,c->r[6]); // 8009C41C
  W32(c->r[3]+0x00000018u,c->r[5]); // 8009C420
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8009C424
  W32(c->r[3]+0x00000020u,c->r[24]); // 8009C428
L_8009C42C:;
  c->r[3]=c->r[25]|c->r[25]; // 8009C42C
  c->lr=0x8009C434u; f_800DA000(c); // 8009C430
L_8009C434:;
  c->r[24]=c->r[24]+0x0000001Cu; // 8009C434
L_8009C438:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 8009C438
  cmps(c,0,(int32_t)c->r[0],4); // 8009C43C
  if (!crb(c,2)) { IRQCHK(c); goto L_8009C2B8; } // 8009C440
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 8009C444
  c->r[4]=c->r[25]|c->r[25]; // 8009C448
  c->lr=0x8009C450u; f_800DA000(c); // 8009C44C
  goto L_8009C680; // 8009C450
L_8009C454:;
  c->r[24]=c->r[27]+0x00000218u; // 8009C454
  c->r[3]=0u+0x00000030u; // 8009C458
  c->lr=0x8009C460u; f_800D8ED0(c); // 8009C45C
  cmps(c,0,(int32_t)c->r[3],0); // 8009C460
  c->r[25]=c->r[3]|c->r[3]; // 8009C464
  if (crb(c,2)) { goto L_8009C4B4; } // 8009C468
  c->r[22]=0u+0x00000000u; // 8009C46C
  W32(c->r[3]+0x00000008u,c->r[22]); // 8009C470
  c->r[4]=0u+0x80210000u; // 8009C474
  W8(c->r[3]+0x0000000Cu,c->r[22]); // 8009C478
  c->r[4]=c->r[4]+0xFFFFAEA8u; // 8009C47C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009C480
  c->r[3]=c->r[3]+0x00000018u; // 8009C484
  c->lr=0x8009C48Cu; f_8015C1A0(c); // 8009C488
  W8(c->r[25]+0x0000000Du,c->r[22]); // 8009C48C
  c->r[3]=0u+0x80220000u; // 8009C490
  c->r[4]=c->r[25]+0x00000010u; // 8009C494
  c->r[0]=0u+0x00000001u; // 8009C498
  W8(c->r[25]+0x0000000Fu,c->r[22]); // 8009C49C
  c->r[3]=c->r[3]+0xFFFFFC04u; // 8009C4A0
  W32(c->r[25]+0x00000010u,c->r[22]); // 8009C4A4
  W32(c->r[25]+0x00000014u,c->r[4]); // 8009C4A8
  W32(c->r[25]+0x00000000u,c->r[3]); // 8009C4AC
  W8(c->r[25]+0x0000000Eu,c->r[0]); // 8009C4B0
L_8009C4B4:;
  c->r[29]=0u+0x80210000u; // 8009C4B4
  c->r[28]=0u+0x80220000u; // 8009C4B8
  c->r[30]=0u+0x80210000u; // 8009C4BC
  c->r[23]=0u+0x80220000u; // 8009C4C0
  {uint32_t ea=c->r[31]+0x00000080u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009C4C4
  c->r[28]=c->r[28]+0xFFFFFDA0u; // 8009C4C8
  {uint32_t ea=c->r[2]+0xFFFFA330u; c->f[30]=RF64(ea);} // 8009C4CC
  c->r[29]=c->r[29]+0x0000293Cu; // 8009C4D0
  c->r[30]=c->r[30]+0x00002908u; // 8009C4D4
  c->r[22]=c->r[26]+0x00000040u; // 8009C4D8
  c->r[23]=c->r[23]+0xFFFF9B48u; // 8009C4DC
  c->r[27]=0u+0x00000000u; // 8009C4E0
  goto L_8009C668; // 8009C4E4
L_8009C4E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8009C4E8
  if (crb(c,2)) { goto L_8009C504; } // 8009C4EC
  cmps(c,0,(int32_t)c->r[0],1); // 8009C4F0
  if (crb(c,2)) { goto L_8009C548; } // 8009C4F4
  cmps(c,0,(int32_t)c->r[0],3); // 8009C4F8
  if (crb(c,2)) { goto L_8009C604; } // 8009C4FC
  goto L_8009C664; // 8009C500
L_8009C504:;
  c->r[3]=0u+0x00000014u; // 8009C504
  c->lr=0x8009C50Cu; f_800D8ED0(c); // 8009C508
  cmps(c,0,(int32_t)c->r[3],0); // 8009C50C
  c->r[4]=c->r[3]|c->r[3]; // 8009C510
  if (crb(c,2)) { goto L_8009C53C; } // 8009C514
  c->r[0]=R32(c->r[24]+0x00000004u); // 8009C518
  W32(c->r[3]+0x00000008u,c->r[27]); // 8009C51C
  c->r[0]=c->r[0]^0x80000000u; // 8009C520
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009C524
  W8(c->r[3]+0x0000000Cu,c->r[27]); // 8009C528
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=RF64(ea);} // 8009C52C
  W32(c->r[3]+0x00000000u,c->r[28]); // 8009C530
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8009C534
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009C538
L_8009C53C:;
  c->r[3]=c->r[25]|c->r[25]; // 8009C53C
  c->lr=0x8009C544u; f_800DA000(c); // 8009C540
  goto L_8009C664; // 8009C544
L_8009C548:;
  c->r[0]=R32(c->r[24]+0x00000004u); // 8009C548
  c->r[3]=0u+0x00000034u; // 8009C54C
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C550
  c->r[0]=c->r[0]^0x80000000u; // 8009C554
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8009C558
  c->r[21]=R32(c->r[24]+0x00000008u); // 8009C55C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=RF64(ea);} // 8009C560
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 8009C564
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8009C568
  c->f[29]=c->ps1[29]=S(c->f[31]+c->f[0]); // 8009C56C
  c->lr=0x8009C574u; f_800D8ED0(c); // 8009C570
  cmps(c,0,(int32_t)c->r[3],0); // 8009C574
  c->r[4]=c->r[3]|c->r[3]; // 8009C578
  if (crb(c,2)) { goto L_8009C5F4; } // 8009C57C
  cmps(c,0,(int32_t)c->r[21],0); // 8009C580
  W32(c->r[1]+0x00000040u,c->r[29]); // 8009C584
  c->r[7]=R8(c->r[24]+0x00000018u); // 8009C588
  c->r[6]=0u+0x00000001u; // 8009C58C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[31]);} // 8009C590
  {uint32_t ea=c->r[24]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C594
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[29]);} // 8009C598
  W32(c->r[1]+0x0000004Cu,c->r[27]); // 8009C59C
  if (crb(c,2)) { goto L_8009C5A8; } // 8009C5A0
  c->r[6]=c->r[21]|c->r[21]; // 8009C5A4
L_8009C5A8:;
  W32(c->r[3]+0x00000008u,c->r[27]); // 8009C5A8
  c->r[0]=c->r[31]+0x00000080u; // 8009C5AC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C5B0
  W8(c->r[3]+0x0000000Cu,c->r[27]); // 8009C5B4
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C5B8
  W32(c->r[3]+0x00000000u,c->r[30]); // 8009C5BC
  c->r[5]=R32(c->r[1]+0x0000004Cu); // 8009C5C0
  W32(c->r[3]+0x00000010u,c->r[29]); // 8009C5C4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8009C5C8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009C5CC
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 8009C5D0
  W32(c->r[3]+0x00000020u,c->r[6]); // 8009C5D4
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 8009C5D8
  W8(c->r[3]+0x00000028u,c->r[7]); // 8009C5DC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8009C5E0
  W32(c->r[1]+0x00000050u,c->r[6]); // 8009C5E4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[2]);} // 8009C5E8
  W8(c->r[1]+0x00000058u,c->r[7]); // 8009C5EC
  W32(c->r[3]+0x00000030u,c->r[27]); // 8009C5F0
L_8009C5F4:;
  c->r[3]=c->r[25]|c->r[25]; // 8009C5F4
  c->lr=0x8009C5FCu; f_800DA000(c); // 8009C5F8
  c->f[31]=c->f[29]; // 8009C5FC
  goto L_8009C664; // 8009C600
L_8009C604:;
  c->r[5]=R32(c->r[26]+0x00000040u); // 8009C604
  c->r[3]=0u+0x00000024u; // 8009C608
  c->r[4]=R32(c->r[22]+0x00000004u); // 8009C60C
  c->r[0]=R32(c->r[22]+0x00000008u); // 8009C610
  W32(c->r[1]+0x00000010u,c->r[5]); // 8009C614
  W32(c->r[1]+0x00000014u,c->r[4]); // 8009C618
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009C61C
  c->lr=0x8009C624u; f_800D8ED0(c); // 8009C620
  cmps(c,0,(int32_t)c->r[3],0); // 8009C624
  c->r[4]=c->r[3]|c->r[3]; // 8009C628
  if (crb(c,2)) { goto L_8009C65C; } // 8009C62C
  W32(c->r[3]+0x00000008u,c->r[27]); // 8009C630
  c->r[6]=R32(c->r[1]+0x00000010u); // 8009C634
  W8(c->r[3]+0x0000000Cu,c->r[27]); // 8009C638
  c->r[5]=R32(c->r[1]+0x00000014u); // 8009C63C
  W32(c->r[3]+0x00000000u,c->r[23]); // 8009C640
  c->r[0]=R32(c->r[1]+0x00000018u); // 8009C644
  W32(c->r[3]+0x00000010u,c->r[31]); // 8009C648
  W32(c->r[3]+0x00000014u,c->r[6]); // 8009C64C
  W32(c->r[3]+0x00000018u,c->r[5]); // 8009C650
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8009C654
  W32(c->r[3]+0x00000020u,c->r[24]); // 8009C658
L_8009C65C:;
  c->r[3]=c->r[25]|c->r[25]; // 8009C65C
  c->lr=0x8009C664u; f_800DA000(c); // 8009C660
L_8009C664:;
  c->r[24]=c->r[24]+0x0000001Cu; // 8009C664
L_8009C668:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 8009C668
  cmps(c,0,(int32_t)c->r[0],4); // 8009C66C
  if (!crb(c,2)) { IRQCHK(c); goto L_8009C4E8; } // 8009C670
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 8009C674
  c->r[4]=c->r[25]|c->r[25]; // 8009C678
  c->lr=0x8009C680u; f_800DA000(c); // 8009C67C
L_8009C680:;
  c->r[3]=R32(c->r[31]+0x00000034u); // 8009C680
  c->r[0]=c->r[3]+0x00000001u; // 8009C684
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009C688
  goto L_8009C6AC; // 8009C68C
L_8009C690:;
  c->r[0]=c->r[4]+0x00000001u; // 8009C690
  c->r[3]=0u+0x00000004u; // 8009C694
  W32(c->r[31]+0x00000038u,c->r[3]); // 8009C698
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009C69C
  goto L_8009C6AC; // 8009C6A0
L_8009C6A4:;
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009C6A4
  c->lr=0x8009C6ACu; f_80101790(c); // 8009C6A8
L_8009C6AC:;
  {uint32_t ea=c->r[2]+0xFFFFA310u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C6AC
  {uint32_t ea=c->r[31]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C6B0
  {uint32_t ea=c->r[2]+0xFFFFA314u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C6B4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8009C6B8
  {uint32_t ea=c->r[2]+0xFFFFA324u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009C6BC
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[0]); // 8009C6C0
  c->f[1]=c->f[29]; // 8009C6C4
  c->lr=0x8009C6CCu; f_801E1CD0(c); // 8009C6C8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8009C6CC
  c->f[1]=c->f[29]; // 8009C6D0
  c->f[0]=-c->f[0]; // 8009C6D4
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[0]); // 8009C6D8
  c->lr=0x8009C6E0u; f_801E20DC(c); // 8009C6DC
  c->f[8]=c->ps1[8]=S(c->f[1]); // 8009C6E0
  {uint32_t ea=c->r[2]+0xFFFFA328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C6E4
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 8009C6E8
  c->r[3]=c->r[31]+0x00000044u; // 8009C6EC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009C6F0
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[6]); // 8009C6F4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[4]); // 8009C6F8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C6FC
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[7]=c->ps1[7]=RF32(ea);} // 8009C700
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 8009C704
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009C708
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[3]); // 8009C70C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009C710
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[31]);} // 8009C714
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[8]); // 8009C718
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[5]); // 8009C71C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[7]);} // 8009C720
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8009C724
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C728
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C72C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[6]); // 8009C730
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 8009C734
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[6]);} // 8009C738
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 8009C73C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[5]);} // 8009C740
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[31]); // 8009C744
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[7]); // 8009C748
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[4]);} // 8009C74C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[3]);} // 8009C750
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[2]);} // 8009C754
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 8009C758
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8009C75C
  c->lr=0x8009C764u; f_8004F0F0(c); // 8009C760
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009C764
  c->r[4]=R32(c->r[31]+0x00000050u); // 8009C768
  c->r[5]=R32(c->r[31]+0x00000054u); // 8009C76C
  c->lr=0x8009C774u; f_80100330(c); // 8009C770
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009C774
  c->lr=0x8009C77Cu; f_80103410(c); // 8009C778
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009C77C
  c->lr=0x8009C784u; f_801063E0(c); // 8009C780
  c->r[3]=R32(c->r[31]+0x00000068u); // 8009C784
  c->r[4]=R32(c->r[31]+0x00000058u); // 8009C788
  c->lr=0x8009C790u; f_8004F400(c); // 8009C78C
L_8009C790:;
  c->r[11]=c->r[1]+0x000000E0u; // 8009C790
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 8009C794
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 8009C798
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 8009C79C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 8009C7A0
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 8009C7A4
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 8009C7A8
  c->lr=0x8009C7B0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009C7AC
  c->r[0]=R32(c->r[1]+0x00000114u); // 8009C7B0
  c->lr=c->r[0]; // 8009C7B4
  c->r[1]=c->r[1]+0x00000110u; // 8009C7B8
  return; // 8009C7BC
}

// fn_8009C7C0
void f_8009C7C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C7C0
  c->r[0]=c->lr; // 8009C7C4
  W32(c->r[1]+0x00000094u,c->r[0]); // 8009C7C8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 8009C7CC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 8009C7D0
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009C7D4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 8009C7D8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 8009C7DC
  {uint32_t ea=c->r[2]+0xFFFFA338u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009C7E0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 8009C7E4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 8009C7E8
  {uint32_t ea=c->r[2]+0xFFFFA330u; c->f[29]=RF64(ea);} // 8009C7EC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 8009C7F0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 8009C7F4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 8009C7F8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 8009C7FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8009C800
  c->r[31]=0u+0x43300000u; // 8009C804
  W32(c->r[1]+0x00000038u,c->r[30]); // 8009C808
  c->r[30]=0u+0x00000000u; // 8009C80C
  W32(c->r[1]+0x00000034u,c->r[29]); // 8009C810
  c->r[29]=c->r[4]|c->r[4]; // 8009C814
  W32(c->r[1]+0x00000030u,c->r[28]); // 8009C818
  c->r[28]=c->r[3]|c->r[3]; // 8009C81C
  goto L_8009C8C4; // 8009C820
L_8009C824:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8009C824
  c->r[0]=R32(c->r[29]+0x00000008u); // 8009C828
  c->r[3]=c->r[3]^0x80000000u; // 8009C82C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8009C830
  c->r[0]=c->r[0]^0x80000000u; // 8009C834
  {uint32_t ea=c->r[28]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C838
  W32(c->r[1]+0x00000018u,c->r[31]); // 8009C83C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009C840
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8009C844
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C848
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 8009C84C
  W32(c->r[1]+0x00000020u,c->r[31]); // 8009C850
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 8009C854
  c->f[27]=c->ps1[27]=S(c->f[2]*c->f[1]); // 8009C858
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 8009C85C
  c->f[28]=c->ps1[28]=S(c->f[0]*c->f[1]); // 8009C860
  c->lr=0x8009C868u; f_800FC0C0(c); // 8009C864
  c->f[0]=c->ps1[0]=S(c->f[27]-c->f[28]); // 8009C868
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 8009C86C
  c->r[4]=0u+0x00000000u; // 8009C870
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009C874
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009C878
  c->r[12]=R32(c->r[12]+0x00000018u); // 8009C87C
  c->f[27]=c->ps1[27]=S(c->f[28]+c->f[0]); // 8009C880
  c->ctr=c->r[12]; // 8009C884
  if (true) { c->lr=0x8009C88Cu; dispatch(c,c->ctr); } // 8009C888
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C88C
  c->r[3]=0u+0x000001D0u; // 8009C890
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[27]); // 8009C894
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 8009C898
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8009C89C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 8009C8A0
  c->lr=0x8009C8A8u; f_800D8ED0(c); // 8009C8A4
  cmps(c,0,(int32_t)c->r[3],0); // 8009C8A8
  if (crb(c,2)) { goto L_8009C8C0; } // 8009C8AC
  c->r[5]=R32(c->r[29]+0x00000010u); // 8009C8B0
  c->r[4]=c->r[1]+0x00000008u; // 8009C8B4
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C8B8
  c->lr=0x8009C8C0u; f_80098700(c); // 8009C8BC
L_8009C8C0:;
  c->r[30]=c->r[30]+0x00000001u; // 8009C8C0
L_8009C8C4:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 8009C8C4
  cmpu(c,0,c->r[30],c->r[0]); // 8009C8C8
  if (crb(c,0)) { IRQCHK(c); goto L_8009C824; } // 8009C8CC
  c->r[0]=R32(c->r[1]+0x00000094u); // 8009C8D0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 8009C8D4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 8009C8D8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 8009C8DC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 8009C8E0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 8009C8E4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 8009C8E8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 8009C8EC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 8009C8F0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 8009C8F4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 8009C8F8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8009C8FC
  c->r[30]=R32(c->r[1]+0x00000038u); // 8009C900
  c->r[29]=R32(c->r[1]+0x00000034u); // 8009C904
  c->r[28]=R32(c->r[1]+0x00000030u); // 8009C908
  c->lr=c->r[0]; // 8009C90C
  c->r[1]=c->r[1]+0x00000090u; // 8009C910
  return; // 8009C914
}

// fn_8009C920
void f_8009C920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009C920
  c->r[0]=c->lr; // 8009C924
  W32(c->r[1]+0x00000044u,c->r[0]); // 8009C928
  c->r[4]=c->r[1]+0x0000000Cu; // 8009C92C
  c->r[5]=c->r[1]+0x00000008u; // 8009C930
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8009C934
  c->r[31]=c->r[3]|c->r[3]; // 8009C938
  c->r[3]=R32(c->r[3]+0x00000068u); // 8009C93C
  c->lr=0x8009C944u; f_8004F390(c); // 8009C940
  c->r[6]=R32(c->r[31]+0x00000074u); // 8009C944
  c->r[3]=0u+0xCCCD0000u; // 8009C948
  c->r[0]=c->r[3]+0xFFFFCCCDu; // 8009C94C
  c->r[4]=R32(c->r[31]+0x00000010u); // 8009C950
  c->r[3]=R32(c->r[6]+0x00000110u); // 8009C954
  W32(c->r[1]+0x00000028u,c->r[4]); // 8009C958
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 8009C95C
  c->r[4]=R32(c->r[31]+0x00000018u); // 8009C960
  c->r[5]=R32(c->r[31]+0x00000014u); // 8009C964
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8009C968
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C96C
  W32(c->r[1]+0x00000030u,c->r[4]); // 8009C970
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8009C974
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C978
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8009C97C
  c->r[0]=c->r[3]-c->r[0]; // 8009C980
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8009C984
  c->r[4]=c->r[6]+c->r[0]; // 8009C988
  c->r[0]=R32(c->r[4]+0x00000098u); // 8009C98C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009C990
  c->r[3]=R32(c->r[4]+0x0000009Cu); // 8009C994
  W32(c->r[1]+0x00000020u,c->r[3]); // 8009C998
  c->r[0]=R32(c->r[4]+0x000000A0u); // 8009C99C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 8009C9A0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009C9A4
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[1]); // 8009C9A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009C9AC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[0]); // 8009C9B0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C9B4
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[4]);} // 8009C9B8
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[3]);} // 8009C9BC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 8009C9C0
  c->lr=0x8009C9C8u; f_801E2224(c); // 8009C9C4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8009C9C8
  {uint32_t ea=c->r[2]+0xFFFFA314u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C9CC
  c->r[0]=R32(c->r[31]+0x00000034u); // 8009C9D0
  {uint32_t ea=c->r[2]+0xFFFFA310u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009C9D4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 8009C9D8
  {uint32_t ea=c->r[2]+0xFFFFA33Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009C9DC
  cmps(c,0,(int32_t)c->r[0],18); // 8009C9E0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8009C9E4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8009C9E8
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 8009C9EC
  if (crb(c,2)) { goto L_8009CA00; } // 8009C9F0
  cmps(c,0,(int32_t)c->r[0],19); // 8009C9F4
  if (crb(c,2)) { goto L_8009CA9C; } // 8009C9F8
  goto L_8009CAA4; // 8009C9FC
L_8009CA00:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009CA00
  c->lr=0x8009CA08u; f_800FBF40(c); // 8009CA04
  c->r[0]=c->r[3]|c->r[3]; // 8009CA08
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 8009CA0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8009CA10
  c->r[4]=0u-c->r[0]; // 8009CA14
  c->r[4]=c->r[4]+0x0000002Cu; // 8009CA18
  c->lr=0x8009CA20u; f_800A8BE0(c); // 8009CA1C
  c->r[3]=0u+0x00000098u; // 8009CA20
  c->lr=0x8009CA28u; f_800D8ED0(c); // 8009CA24
  cmps(c,0,(int32_t)c->r[3],0); // 8009CA28
  c->r[4]=c->r[3]|c->r[3]; // 8009CA2C
  if (crb(c,2)) { goto L_8009CA70; } // 8009CA30
  c->r[8]=R32(c->r[31]+0x00000010u); // 8009CA34
  c->r[4]=c->r[1]+0x00000010u; // 8009CA38
  c->r[0]=R32(c->r[31]+0x00000014u); // 8009CA3C
  c->r[5]=0u+0x00000002u; // 8009CA40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CA44
  c->r[6]=0u+0x00000002u; // 8009CA48
  {uint32_t ea=c->r[2]+0xFFFFA304u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CA4C
  c->r[7]=0u+0x00000002u; // 8009CA50
  W32(c->r[1]+0x00000010u,c->r[8]); // 8009CA54
  {uint32_t ea=c->r[2]+0xFFFFA308u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CA58
  c->r[0]=R32(c->r[31]+0x00000018u); // 8009CA5C
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009CA60
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009CA64
  c->lr=0x8009CA6Cu; f_80090470(c); // 8009CA68
  c->r[4]=c->r[3]|c->r[3]; // 8009CA6C
L_8009CA70:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 8009CA70
  c->lr=0x8009CA78u; f_800DA000(c); // 8009CA74
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 8009CA78
  c->r[4]=c->r[31]+0x00000010u; // 8009CA7C
  c->lr=0x8009CA84u; f_80012CE0(c); // 8009CA80
  c->r[3]=R32(c->r[31]+0x00000034u); // 8009CA84
  c->r[0]=0u+0x00000004u; // 8009CA88
  W32(c->r[31]+0x00000038u,c->r[0]); // 8009CA8C
  c->r[0]=c->r[3]+0x00000001u; // 8009CA90
  W32(c->r[31]+0x00000034u,c->r[0]); // 8009CA94
  goto L_8009CAA4; // 8009CA98
L_8009CA9C:;
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009CA9C
  c->lr=0x8009CAA4u; f_80101790(c); // 8009CAA0
L_8009CAA4:;
  c->r[3]=c->r[31]+0x00000044u; // 8009CAA4
  c->lr=0x8009CAACu; f_8004F0F0(c); // 8009CAA8
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009CAAC
  c->r[4]=R32(c->r[31]+0x00000050u); // 8009CAB0
  c->r[5]=R32(c->r[31]+0x00000054u); // 8009CAB4
  c->lr=0x8009CABCu; f_80100330(c); // 8009CAB8
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009CABC
  c->lr=0x8009CAC4u; f_80103410(c); // 8009CAC0
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009CAC4
  c->lr=0x8009CACCu; f_801063E0(c); // 8009CAC8
  c->r[3]=R32(c->r[31]+0x00000068u); // 8009CACC
  c->r[4]=R32(c->r[31]+0x00000058u); // 8009CAD0
  c->lr=0x8009CAD8u; f_8004F400(c); // 8009CAD4
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009CAD8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8009CADC
  c->lr=c->r[0]; // 8009CAE0
  c->r[1]=c->r[1]+0x00000040u; // 8009CAE4
  return; // 8009CAE8
}

// fn_8009CAF0
void f_8009CAF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CAF0
  c->r[0]=c->lr; // 8009CAF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CAF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CAFC
  c->r[31]=c->r[3]|c->r[3]; // 8009CB00
  c->r[3]=R32(c->r[3]+0x00000058u); // 8009CB04
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CB08
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CB0C
  c->lr=0x8009CB14u; f_801017C0(c); // 8009CB10
  c->r[3]=R32(c->r[31]+0x00000058u); // 8009CB14
  c->lr=0x8009CB1Cu; f_80107F60(c); // 8009CB18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CB1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CB20
  c->lr=c->r[0]; // 8009CB24
  c->r[1]=c->r[1]+0x00000010u; // 8009CB28
  return; // 8009CB2C
}

// fn_8009CB30
void f_8009CB30(Ctx* __restrict c) {
  c->r[10]=0u+0x80220000u; // 8009CB30
  c->r[0]=0u+0x00000000u; // 8009CB34
  c->r[10]=c->r[10]+0xFFFF9C00u; // 8009CB38
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009CB3C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8009CB40
  W32(c->r[3]+0x00000000u,c->r[10]); // 8009CB44
  W32(c->r[3]+0x00000010u,c->r[4]); // 8009CB48
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8009CB4C
  W32(c->r[3]+0x00000030u,c->r[8]); // 8009CB50
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8009CB54
  W8(c->r[3]+0x00000038u,c->r[9]); // 8009CB58
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CB5C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8009CB60
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CB64
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009CB68
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CB6C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8009CB70
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CB74
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8009CB78
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CB7C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8009CB80
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CB84
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 8009CB88
  return; // 8009CB8C
}

// fn_8009CB90
void f_8009CB90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CB90
  c->r[0]=c->lr; // 8009CB94
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8009CB98
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 8009CB9C
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 8009CBA0
  W32(c->r[1]+0x000000CCu,c->r[31]); // 8009CBA4
  c->r[31]=c->r[3]|c->r[3]; // 8009CBA8
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 8009CBAC
  c->r[5]=R32(c->r[3]+0x00000030u); // 8009CBB0
  c->r[0]=c->r[4]+0x00000001u; // 8009CBB4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8009CBB8
  cmpu(c,0,c->r[0],c->r[5]); // 8009CBBC
  if (crb(c,0)) { goto L_8009CBE4; } // 8009CBC0
  c->r[4]=R32(c->r[3]+0x00000010u); // 8009CBC4
  c->r[0]=0u+0x00000002u; // 8009CBC8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CBCC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8009CBD0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CBD4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009CBD8
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009CBDC
  goto L_8009CEFC; // 8009CBE0
L_8009CBE4:;
  c->r[4]=0u+0x43300000u; // 8009CBE4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8009CBE8
  c->r[0]=R8(c->r[3]+0x00000038u); // 8009CBEC
  W32(c->r[1]+0x000000B0u,c->r[4]); // 8009CBF0
  {uint32_t ea=c->r[2]+0xFFFFA2F8u; c->f[3]=RF64(ea);} // 8009CBF4
  cmps(c,0,(int32_t)c->r[0],0); // 8009CBF8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[0]=RF64(ea);} // 8009CBFC
  W32(c->r[1]+0x000000BCu,c->r[5]); // 8009CC00
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 8009CC04
  {uint32_t ea=c->r[3]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CC08
  W32(c->r[1]+0x000000B8u,c->r[4]); // 8009CC0C
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 8009CC10
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8009CC14
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8009CC18
  if (!crb(c,2)) { goto L_8009CC6C; } // 8009CC1C
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC20
  fcmp(c,0,c->f[2],c->f[0]); // 8009CC24
  if (!crb(c,1)) { goto L_8009CC48; } // 8009CC28
  c->lr=0x8009CC30u; f_801E2230(c); // 8009CC2C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8009CC30
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CC34
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC38
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8009CC3C
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 8009CC40
  goto L_8009CD34; // 8009CC44
L_8009CC48:;
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC48
  c->f[2]=-c->f[2]; // 8009CC4C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8009CC50
  c->lr=0x8009CC58u; f_801E2230(c); // 8009CC54
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8009CC58
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CC5C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8009CC60
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 8009CC64
  goto L_8009CD34; // 8009CC68
L_8009CC6C:;
  {uint32_t ea=c->r[2]+0xFFFFA308u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009CC6C
  fcmp(c,0,c->f[31],c->f[1]); // 8009CC70
  if (crb(c,2)) { goto L_8009CD34; } // 8009CC74
  fcmp(c,0,c->f[1],c->f[31]); // 8009CC78
  if (!crb(c,0)) { goto L_8009CCD8; } // 8009CC7C
  {uint32_t ea=c->r[2]+0xFFFFA320u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009CC80
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CC84
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8009CC88
  fcmp(c,0,c->f[2],c->f[0]); // 8009CC8C
  if (!crb(c,1)) { goto L_8009CCB0; } // 8009CC90
  c->lr=0x8009CC98u; f_801E2230(c); // 8009CC94
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CC98
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8009CC9C
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[2]); // 8009CCA0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009CCA4
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 8009CCA8
  goto L_8009CD34; // 8009CCAC
L_8009CCB0:;
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCB0
  c->f[2]=-c->f[2]; // 8009CCB4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8009CCB8
  c->lr=0x8009CCC0u; f_801E2230(c); // 8009CCBC
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCC0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8009CCC4
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[0]); // 8009CCC8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009CCCC
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 8009CCD0
  goto L_8009CD34; // 8009CCD4
L_8009CCD8:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 8009CCD8
  {uint32_t ea=c->r[2]+0xFFFFA320u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009CCDC
  c->f[2]=-c->f[2]; // 8009CCE0
  {uint32_t ea=c->r[2]+0xFFFFA2E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCE4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8009CCE8
  fcmp(c,0,c->f[2],c->f[0]); // 8009CCEC
  if (!crb(c,1)) { goto L_8009CD10; } // 8009CCF0
  c->lr=0x8009CCF8u; f_801E2230(c); // 8009CCF4
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CCF8
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8009CCFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8009CD00
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009CD04
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[0]); // 8009CD08
  goto L_8009CD34; // 8009CD0C
L_8009CD10:;
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD10
  c->f[2]=-c->f[2]; // 8009CD14
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8009CD18
  c->lr=0x8009CD20u; f_801E2230(c); // 8009CD1C
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CD20
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8009CD24
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[31]); // 8009CD28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009CD2C
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[0]); // 8009CD30
L_8009CD34:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 8009CD34
  {uint32_t ea=c->r[2]+0xFFFFA30Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD38
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8009CD3C
  c->f[7]=c->ps1[7]=S(c->f[0]-c->f[31]); // 8009CD40
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8009CD44
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD48
  c->r[3]=R32(c->r[31]+0x00000018u); // 8009CD4C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[7]); // 8009CD50
  W32(c->r[1]+0x00000098u,c->r[0]); // 8009CD54
  c->r[4]=R32(c->r[31]+0x00000014u); // 8009CD58
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 8009CD5C
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD60
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8009CD64
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[7]); // 8009CD68
  W32(c->r[1]+0x000000A4u,c->r[3]); // 8009CD6C
  c->r[5]=R32(c->r[31]+0x00000028u); // 8009CD70
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD74
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009CD78
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[7]); // 8009CD7C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 8009CD80
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CD84
  W32(c->r[1]+0x000000A0u,c->r[4]); // 8009CD88
  c->r[0]=R32(c->r[1]+0x00000058u); // 8009CD8C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[31]); // 8009CD90
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[2]);} // 8009CD94
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CD98
  W32(c->r[1]+0x00000030u,c->r[0]); // 8009CD9C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 8009CDA0
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[7]); // 8009CDA4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8009CDA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CDAC
  W32(c->r[1]+0x00000094u,c->r[5]); // 8009CDB0
  c->r[3]=R32(c->r[1]+0x00000064u); // 8009CDB4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[31]); // 8009CDB8
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 8009CDBC
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CDC0
  c->r[4]=R32(c->r[31]+0x00000024u); // 8009CDC4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[31]); // 8009CDC8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8009CDCC
  {uint32_t ea=c->r[2]+0xFFFFA320u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CDD0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CDD4
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 8009CDD8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[2]); // 8009CDDC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CDE0
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[6]);} // 8009CDE4
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[7]); // 8009CDE8
  c->r[3]=R32(c->r[1]+0x00000060u); // 8009CDEC
  W32(c->r[1]+0x00000090u,c->r[4]); // 8009CDF0
  c->r[0]=R32(c->r[1]+0x00000048u); // 8009CDF4
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[3]);} // 8009CDF8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CDFC
  W32(c->r[1]+0x00000028u,c->r[3]); // 8009CE00
  c->r[4]=R32(c->r[1]+0x0000007Cu); // 8009CE04
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[31]); // 8009CE08
  W32(c->r[1]+0x00000018u,c->r[0]); // 8009CE0C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CE10
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[5]);} // 8009CE14
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CE18
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 8009CE1C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[6]);} // 8009CE20
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 8009CE24
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[7]); // 8009CE28
  W32(c->r[1]+0x00000044u,c->r[4]); // 8009CE2C
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009CE30
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CE38
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[31]); // 8009CE3C
  W32(c->r[1]+0x00000024u,c->r[3]); // 8009CE40
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CE44
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[4]);} // 8009CE48
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CE4C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 8009CE50
  c->r[4]=R32(c->r[1]+0x00000078u); // 8009CE54
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 8009CE58
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[5]);} // 8009CE5C
  c->r[3]=R32(c->r[1]+0x00000068u); // 8009CE60
  W32(c->r[1]+0x00000040u,c->r[4]); // 8009CE64
  c->r[0]=R32(c->r[1]+0x00000050u); // 8009CE68
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CE6C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009CE70
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[31]); // 8009CE74
  W32(c->r[1]+0x00000020u,c->r[3]); // 8009CE78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CE7C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[3]);} // 8009CE80
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CE84
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[4]);} // 8009CE88
  c->r[3]=R32(c->r[1]+0x00000084u); // 8009CE8C
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 8009CE90
  c->r[0]=R32(c->r[1]+0x00000074u); // 8009CE94
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8009CE98
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8009CE9C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CEA0
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 8009CEA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CEA8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[3]);} // 8009CEAC
  c->r[3]=R32(c->r[1]+0x00000080u); // 8009CEB0
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 8009CEB4
  c->r[0]=R32(c->r[1]+0x00000070u); // 8009CEB8
  W32(c->r[1]+0x00000038u,c->r[3]); // 8009CEBC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8009CEC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CEC4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CEC8
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[2]);} // 8009CECC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009CED0
  c->r[4]=R32(c->r[31]+0x00000010u); // 8009CED4
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 8009CED8
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8009CEDC
  c->r[3]=R32(c->r[1]+0x00000088u); // 8009CEE0
  W32(c->r[1]+0x000000A8u,c->r[3]); // 8009CEE4
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CEE8
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8009CEEC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 8009CEF0
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CEF4
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 8009CEF8
L_8009CEFC:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 8009CEFC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 8009CF00
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 8009CF04
  c->r[31]=R32(c->r[1]+0x000000CCu); // 8009CF08
  c->lr=c->r[0]; // 8009CF0C
  c->r[1]=c->r[1]+0x000000E0u; // 8009CF10
  return; // 8009CF14
}

// fn_8009CF20
void f_8009CF20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CF20
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 8009CF24
  c->r[5]=R32(c->r[6]+0x00000010u); // 8009CF28
  c->r[4]=R32(c->r[6]+0x00000014u); // 8009CF2C
  c->r[0]=R32(c->r[6]+0x00000018u); // 8009CF30
  W32(c->r[1]+0x00000008u,c->r[5]); // 8009CF34
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8009CF38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009CF3C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009CF40
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009CF44
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009CF48
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8009CF4C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8009CF50
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 8009CF54
  c->r[3]=c->r[3]+0x00000010u; // 8009CF58
  c->r[1]=c->r[1]+0x00000020u; // 8009CF5C
  return; // 8009CF60
}

// fn_8009CF70
void f_8009CF70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CF70
  c->r[0]=c->lr; // 8009CF74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CF78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CF7C
  c->r[31]=c->r[3]|c->r[3]; // 8009CF80
  c->r[12]=c->r[31]+0x00000014u; // 8009CF84
  c->r[3]=R32(c->r[3]+0x00000010u); // 8009CF88
  c->r[4]=R32(c->r[31]+0x00000020u); // 8009CF8C
  c->lr=0x8009CF94u; f_801D5688(c); // 8009CF90
  c->r[0]=c->r[0]|0x00000000u; // 8009CF94
  c->r[0]=0u+0x00000002u; // 8009CF98
  W32(c->r[31]+0x00000008u,c->r[0]); // 8009CF9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CFA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CFA4
  c->lr=c->r[0]; // 8009CFA8
  c->r[1]=c->r[1]+0x00000010u; // 8009CFAC
  return; // 8009CFB0
}

// fn_8009CFC0
void f_8009CFC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009CFC0
  c->r[0]=c->lr; // 8009CFC4
  cmps(c,0,(int32_t)c->r[3],0); // 8009CFC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009CFCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009CFD0
  c->r[31]=c->r[3]|c->r[3]; // 8009CFD4
  if (crb(c,2)) { goto L_8009CFE8; } // 8009CFD8
  cmps(c,0,(int32_t)c->r[4],0); // 8009CFDC
  if (!crb(c,1)) { goto L_8009CFE8; } // 8009CFE0
  c->lr=0x8009CFE8u; f_800D93B0(c); // 8009CFE4
L_8009CFE8:;
  c->r[3]=c->r[31]|c->r[31]; // 8009CFE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009CFEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009CFF0
  c->lr=c->r[0]; // 8009CFF4
  c->r[1]=c->r[1]+0x00000010u; // 8009CFF8
  return; // 8009CFFC
}

// fn_8009D000
void f_8009D000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D000
  c->r[0]=c->lr; // 8009D004
  cmps(c,0,(int32_t)c->r[3],0); // 8009D008
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D00C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D010
  c->r[31]=c->r[3]|c->r[3]; // 8009D014
  if (crb(c,2)) { goto L_8009D028; } // 8009D018
  cmps(c,0,(int32_t)c->r[4],0); // 8009D01C
  if (!crb(c,1)) { goto L_8009D028; } // 8009D020
  c->lr=0x8009D028u; f_800D93B0(c); // 8009D024
L_8009D028:;
  c->r[3]=c->r[31]|c->r[31]; // 8009D028
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009D02C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D030
  c->lr=c->r[0]; // 8009D034
  c->r[1]=c->r[1]+0x00000010u; // 8009D038
  return; // 8009D03C
}

// fn_8009D040
void f_8009D040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D040
  c->r[0]=c->lr; // 8009D044
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8009D048
  c->r[11]=c->r[1]+0x000000B0u; // 8009D04C
  c->lr=0x8009D054u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009D050
  c->r[27]=c->r[4]|c->r[4]; // 8009D054
  c->r[31]=c->r[3]|c->r[3]; // 8009D058
  c->r[26]=c->r[5]|c->r[5]; // 8009D05C
  c->r[4]=0u+0x00000005u; // 8009D060
  c->lr=0x8009D068u; f_8000BF70(c); // 8009D064
  c->r[3]=c->r[31]+0x00000010u; // 8009D068
  c->lr=0x8009D070u; f_80008DD0(c); // 8009D06C
  c->r[3]=c->r[31]+0x00000020u; // 8009D070
  c->lr=0x8009D078u; f_80047210(c); // 8009D074
  c->r[5]=0u+0x80220000u; // 8009D078
  c->r[3]=c->r[31]+0x00000084u; // 8009D07C
  c->r[5]=c->r[5]+0xFFFFA164u; // 8009D080
  W32(c->r[31]+0x00000000u,c->r[5]); // 8009D084
  c->r[4]=c->r[5]+0x00000014u; // 8009D088
  c->r[0]=c->r[5]+0x0000002Cu; // 8009D08C
  W32(c->r[31]+0x00000010u,c->r[4]); // 8009D090
  W32(c->r[31]+0x00000020u,c->r[0]); // 8009D094
  c->lr=0x8009D09Cu; f_8009D860(c); // 8009D098
  c->r[3]=c->r[31]+0x000000A4u; // 8009D09C
  c->lr=0x8009D0A4u; f_8004F070(c); // 8009D0A0
  c->r[3]=c->r[31]+0x000000F4u; // 8009D0A4
  c->lr=0x8009D0ACu; f_8009D870(c); // 8009D0A8
  c->r[0]=0u+0x00000001u; // 8009D0AC
  W32(c->r[31]+0x00000118u,c->r[27]); // 8009D0B0
  c->r[3]=c->r[27]|c->r[27]; // 8009D0B4
  W8(c->r[31]+0x00000122u,c->r[0]); // 8009D0B8
  c->lr=0x8009D0C0u; f_8009D5A0(c); // 8009D0BC
  c->lr=0x8009D0C4u; f_80014A90(c); // 8009D0C0
  c->lr=0x8009D0C8u; f_8009D5B0(c); // 8009D0C4
  c->r[6]=R32(c->r[3]+0x00000000u); // 8009D0C8
  c->r[5]=0u+0x801F0000u; // 8009D0CC
  c->r[5]=c->r[5]+0xFFFFB2D8u; // 8009D0D0
  c->r[4]=c->r[26]|c->r[26]; // 8009D0D4
  c->r[0]=c->r[6]+0x00000001u; // 8009D0D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009D0DC
  c->r[3]=c->r[31]+0x00000030u; // 8009D0E0
  W32(c->r[31]+0x00000114u,c->r[5]); // 8009D0E4
  W32(c->r[31]+0x00000110u,c->r[5]); // 8009D0E8
  c->lr=0x8009D0F0u; f_800427A0(c); // 8009D0EC
  c->lr=0x8009D0F4u; f_8009D5C0(c); // 8009D0F0
  c->r[4]=c->r[3]|c->r[3]; // 8009D0F4
  c->r[3]=c->r[31]+0x0000003Cu; // 8009D0F8
  c->lr=0x8009D100u; f_800427A0(c); // 8009D0FC
  c->lr=0x8009D104u; f_80046D20(c); // 8009D100
  c->r[4]=c->r[3]|c->r[3]; // 8009D104
  c->r[3]=c->r[31]+0x00000060u; // 8009D108
  c->lr=0x8009D110u; f_800427A0(c); // 8009D10C
  c->lr=0x8009D114u; f_8009D5C0(c); // 8009D110
  c->r[4]=c->r[3]|c->r[3]; // 8009D114
  c->r[3]=c->r[31]+0x00000048u; // 8009D118
  c->lr=0x8009D120u; f_800427A0(c); // 8009D11C
  c->r[3]=c->r[31]+0x0000006Cu; // 8009D120
  c->r[4]=c->r[31]+0x00000030u; // 8009D124
  c->lr=0x8009D12Cu; f_800427A0(c); // 8009D128
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009D12C
  c->r[3]=0u+0x00000000u; // 8009D130
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009D134
  c->r[0]=0u+0x000000C8u; // 8009D138
  W32(c->r[31]+0x00000094u,c->r[3]); // 8009D13C
  c->r[29]=0u+0x00000000u; // 8009D140
  c->r[3]=0u+0x00000118u; // 8009D144
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 8009D148
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[1]);} // 8009D14C
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 8009D150
  c->lr=0x8009D158u; f_800D8ED0(c); // 8009D154
  cmps(c,0,(int32_t)c->r[3],0); // 8009D158
  c->r[30]=c->r[3]|c->r[3]; // 8009D15C
  if (crb(c,2)) { goto L_8009D194; } // 8009D160
  c->r[3]=c->r[1]+0x0000006Cu; // 8009D164
  c->r[4]=c->r[13]+0xFFFF9E60u; // 8009D168
  c->lr=0x8009D170u; f_80014ED0(c); // 8009D16C
  c->r[29]=0u+0x00000001u; // 8009D170
  c->lr=0x8009D178u; f_80094710(c); // 8009D174
  c->r[4]=0u+0x00000004u; // 8009D178
  c->lr=0x8009D180u; f_80043080(c); // 8009D17C
  c->r[4]=c->r[3]|c->r[3]; // 8009D180
  c->r[3]=c->r[30]|c->r[30]; // 8009D184
  c->r[5]=c->r[1]+0x0000006Cu; // 8009D188
  c->lr=0x8009D190u; f_800FE130(c); // 8009D18C
  c->r[30]=c->r[3]|c->r[3]; // 8009D190
L_8009D194:;
  cmps(c,0,(int32_t)c->r[29],0); // 8009D194
  W32(c->r[31]+0x000000B8u,c->r[30]); // 8009D198
  if (crb(c,2)) { goto L_8009D1AC; } // 8009D19C
  c->r[3]=c->r[1]+0x0000006Cu; // 8009D1A0
  c->r[4]=0u+0xFFFFFFFFu; // 8009D1A4
  c->lr=0x8009D1ACu; f_80008140(c); // 8009D1A8
L_8009D1AC:;
  c->r[3]=R32(c->r[31]+0x000000B8u); // 8009D1AC
  {uint32_t ea=c->r[2]+0xFFFFA348u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009D1B0
  c->lr=0x8009D1B8u; f_80101610(c); // 8009D1B4
  c->r[3]=R32(c->r[31]+0x000000B8u); // 8009D1B8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009D1BC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009D1C0
  c->lr=0x8009D1C8u; f_801017C0(c); // 8009D1C4
  c->r[3]=R32(c->r[31]+0x000000B8u); // 8009D1C8
  c->r[4]=c->r[13]+0xFFFF9E64u; // 8009D1CC
  c->r[5]=0u+0x00000000u; // 8009D1D0
  c->lr=0x8009D1D8u; f_80100840(c); // 8009D1D4
  c->r[3]=R32(c->r[31]+0x000000B8u); // 8009D1D8
  c->lr=0x8009D1E0u; f_80101780(c); // 8009D1DC
  c->r[3]=0u+0x0000000Cu; // 8009D1E0
  c->lr=0x8009D1E8u; f_800D8ED0(c); // 8009D1E4
  cmps(c,0,(int32_t)c->r[3],0); // 8009D1E8
  if (crb(c,2)) { goto L_8009D1F8; } // 8009D1EC
  c->r[4]=0u+0x00000020u; // 8009D1F0
  c->lr=0x8009D1F8u; f_8004F180(c); // 8009D1F4
L_8009D1F8:;
  W32(c->r[31]+0x000000BCu,c->r[3]); // 8009D1F8
  c->r[30]=0u+0x00000001u; // 8009D1FC
  c->lr=0x8009D204u; f_80095030(c); // 8009D200
  W8(c->r[3]+0x00000000u,c->r[30]); // 8009D204
  c->r[29]=0u+0x00000000u; // 8009D208
  W8(c->r[31]+0x00000121u,c->r[29]); // 8009D20C
  c->r[3]=R32(c->r[31]+0x000000BCu); // 8009D210
  c->lr=0x8009D218u; f_80095040(c); // 8009D214
  W8(c->r[3]+0x00000000u,c->r[30]); // 8009D218
  c->r[3]=c->r[31]+0x00000010u; // 8009D21C
  c->lr=0x8009D224u; f_8009D5D0(c); // 8009D220
  W8(c->r[3]+0x00000000u,c->r[29]); // 8009D224
  c->r[3]=c->r[31]+0x000000C8u; // 8009D228
  c->r[4]=0u+0x00000000u; // 8009D22C
  c->r[5]=0u+0x00000010u; // 8009D230
  W32(c->r[31]+0x000000C0u,c->r[29]); // 8009D234
  W8(c->r[31]+0x00000120u,c->r[29]); // 8009D238
  c->lr=0x8009D240u; f_800046B4(c); // 8009D23C
  c->r[3]=0u+0x00000030u; // 8009D240
  c->lr=0x8009D248u; f_800D8ED0(c); // 8009D244
  cmps(c,0,(int32_t)c->r[3],0); // 8009D248
  if (crb(c,2)) { goto L_8009D258; } // 8009D24C
  c->r[4]=0u+0x00000000u; // 8009D250
  c->lr=0x8009D258u; f_80095060(c); // 8009D254
L_8009D258:;
  W32(c->r[31]+0x00000104u,c->r[3]); // 8009D258
  c->r[3]=0u+0x00000030u; // 8009D25C
  c->lr=0x8009D264u; f_800D8ED0(c); // 8009D260
  cmps(c,0,(int32_t)c->r[3],0); // 8009D264
  if (crb(c,2)) { goto L_8009D274; } // 8009D268
  c->r[4]=0u+0x00000000u; // 8009D26C
  c->lr=0x8009D274u; f_80095060(c); // 8009D270
L_8009D274:;
  W32(c->r[31]+0x00000108u,c->r[3]); // 8009D274
  c->r[3]=0u+0x00000030u; // 8009D278
  c->lr=0x8009D280u; f_800D8ED0(c); // 8009D27C
  cmps(c,0,(int32_t)c->r[3],0); // 8009D280
  if (crb(c,2)) { goto L_8009D290; } // 8009D284
  c->r[4]=0u+0x00000000u; // 8009D288
  c->lr=0x8009D290u; f_8009D5E0(c); // 8009D28C
L_8009D290:;
  W32(c->r[31]+0x0000010Cu,c->r[3]); // 8009D290
  c->r[3]=0u+0x0000001Cu; // 8009D294
  c->lr=0x8009D29Cu; f_800D8ED0(c); // 8009D298
  cmps(c,0,(int32_t)c->r[3],0); // 8009D29C
  c->r[29]=c->r[3]|c->r[3]; // 8009D2A0
  if (crb(c,2)) { goto L_8009D2B4; } // 8009D2A4
  c->r[4]=0u+0x00000001u; // 8009D2A8
  c->lr=0x8009D2B0u; f_8009D670(c); // 8009D2AC
  c->r[29]=c->r[3]|c->r[3]; // 8009D2B0
L_8009D2B4:;
  c->r[3]=0u+0x0000001Cu; // 8009D2B4
  c->lr=0x8009D2BCu; f_800D8ED0(c); // 8009D2B8
  cmps(c,0,(int32_t)c->r[3],0); // 8009D2BC
  c->r[4]=c->r[3]|c->r[3]; // 8009D2C0
  if (crb(c,2)) { goto L_8009D2D4; } // 8009D2C4
  c->r[4]=0u+0x00000000u; // 8009D2C8
  c->lr=0x8009D2D0u; f_8009D670(c); // 8009D2CC
  c->r[4]=c->r[3]|c->r[3]; // 8009D2D0
L_8009D2D4:;
  c->r[3]=R32(c->r[31]+0x0000010Cu); // 8009D2D4
  c->lr=0x8009D2DCu; f_800144A0(c); // 8009D2D8
  c->r[4]=c->r[29]|c->r[29]; // 8009D2DC
  c->lr=0x8009D2E4u; f_800144A0(c); // 8009D2E0
  c->r[29]=0u+0x80260000u; // 8009D2E4
  c->r[3]=c->r[29]+0xFFFFBD2Cu; // 8009D2E8
  c->lr=0x8009D2F0u; f_8009D890(c); // 8009D2EC
  c->lr=0x8009D2F4u; f_800426C0(c); // 8009D2F0
  c->r[4]=0u+0x0000002Cu; // 8009D2F4
  c->lr=0x8009D2FCu; f_80043060(c); // 8009D2F8
  c->lr=0x8009D300u; f_800D7EB0(c); // 8009D2FC
  W32(c->r[1]+0x00000024u,c->r[4]); // 8009D300
  c->r[4]=c->r[13]+0xFFFF9E6Cu; // 8009D304
  W32(c->r[1]+0x00000020u,c->r[3]); // 8009D308
  c->r[3]=c->r[1]+0x00000020u; // 8009D30C
  c->lr=0x8009D314u; f_800D7BD0(c); // 8009D310
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8009D314
  c->r[4]=c->r[1]+0x00000028u; // 8009D318
  W32(c->r[1]+0x00000028u,c->r[3]); // 8009D31C
  c->r[3]=c->r[1]+0x00000030u; // 8009D320
  c->lr=0x8009D328u; f_8009D910(c); // 8009D324
  c->r[3]=c->r[1]+0x00000084u; // 8009D328
  c->lr=0x8009D330u; f_8009D930(c); // 8009D32C
  c->r[3]=c->r[1]+0x00000030u; // 8009D330
  c->r[4]=c->r[1]+0x00000084u; // 8009D334
  c->lr=0x8009D33Cu; f_800D6900(c); // 8009D338
  c->r[28]=0u+0x00000000u; // 8009D33C
  goto L_8009D54C; // 8009D340
L_8009D344:;
  c->r[4]=c->r[28]|c->r[28]; // 8009D344
  c->r[3]=c->r[1]+0x00000084u; // 8009D348
  c->lr=0x8009D350u; f_8009D950(c); // 8009D34C
  c->r[4]=c->r[13]+0xFFFF9E60u; // 8009D350
  c->lr=0x8009D358u; f_8009D760(c); // 8009D354
  cmps(c,0,(int32_t)c->r[3],0); // 8009D358
  if (crb(c,2)) { goto L_8009D548; } // 8009D35C
  c->r[3]=c->r[1]+0x00000078u; // 8009D360
  c->lr=0x8009D368u; f_8009D930(c); // 8009D364
  c->r[4]=c->r[28]|c->r[28]; // 8009D368
  c->r[3]=c->r[1]+0x00000084u; // 8009D36C
  c->lr=0x8009D374u; f_8009D950(c); // 8009D370
  c->r[4]=c->r[3]|c->r[3]; // 8009D374
  c->r[3]=c->r[1]+0x00000030u; // 8009D378
  c->lr=0x8009D380u; f_800D7B40(c); // 8009D37C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8009D380
  c->r[4]=c->r[13]+0xFFFF9E74u; // 8009D384
  W32(c->r[1]+0x00000010u,c->r[3]); // 8009D388
  c->r[3]=c->r[1]+0x00000010u; // 8009D38C
  c->lr=0x8009D394u; f_800D7BD0(c); // 8009D390
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8009D394
  c->r[4]=c->r[1]+0x00000078u; // 8009D398
  W32(c->r[1]+0x00000018u,c->r[3]); // 8009D39C
  c->r[3]=c->r[1]+0x00000018u; // 8009D3A0
  c->lr=0x8009D3A8u; f_800D6900(c); // 8009D3A4
  c->r[30]=0u+0x00000000u; // 8009D3A8
  c->r[3]=0u+0x00000118u; // 8009D3AC
  c->lr=0x8009D3B4u; f_800D8ED0(c); // 8009D3B0
  cmps(c,0,(int32_t)c->r[3],0); // 8009D3B4
  c->r[27]=c->r[3]|c->r[3]; // 8009D3B8
  if (crb(c,2)) { goto L_8009D3F0; } // 8009D3BC
  c->r[3]=c->r[1]+0x00000060u; // 8009D3C0
  c->r[4]=c->r[13]+0xFFFF9E60u; // 8009D3C4
  c->lr=0x8009D3CCu; f_80014ED0(c); // 8009D3C8
  c->r[30]=0u+0x00000001u; // 8009D3CC
  c->lr=0x8009D3D4u; f_80094710(c); // 8009D3D0
  c->r[4]=0u+0x00000004u; // 8009D3D4
  c->lr=0x8009D3DCu; f_80043080(c); // 8009D3D8
  c->r[4]=c->r[3]|c->r[3]; // 8009D3DC
  c->r[3]=c->r[27]|c->r[27]; // 8009D3E0
  c->r[5]=c->r[1]+0x00000060u; // 8009D3E4
  c->lr=0x8009D3ECu; f_800FE130(c); // 8009D3E8
  c->r[27]=c->r[3]|c->r[3]; // 8009D3EC
L_8009D3F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8009D3F0
  if (crb(c,2)) { goto L_8009D404; } // 8009D3F4
  c->r[3]=c->r[1]+0x00000060u; // 8009D3F8
  c->r[4]=0u+0xFFFFFFFFu; // 8009D3FC
  c->lr=0x8009D404u; f_80008140(c); // 8009D400
L_8009D404:;
  c->r[26]=0u+0x00000000u; // 8009D404
  goto L_8009D50C; // 8009D408
L_8009D40C:;
  c->r[4]=c->r[26]|c->r[26]; // 8009D40C
  c->r[3]=c->r[1]+0x00000078u; // 8009D410
  c->lr=0x8009D418u; f_8009D950(c); // 8009D414
  c->r[4]=c->r[3]|c->r[3]; // 8009D418
  c->r[3]=c->r[1]+0x00000054u; // 8009D41C
  c->r[5]=0u+0x00000000u; // 8009D420
  c->r[6]=0u+0x00000004u; // 8009D424
  c->lr=0x8009D42Cu; f_8009D960(c); // 8009D428
  c->r[3]=c->r[1]+0x00000054u; // 8009D42C
  c->r[4]=c->r[13]+0xFFFF9E7Cu; // 8009D430
  c->lr=0x8009D438u; f_8009D760(c); // 8009D434
  c->r[30]=c->r[3]|c->r[3]; // 8009D438
  c->r[3]=c->r[1]+0x00000054u; // 8009D43C
  c->r[4]=0u+0xFFFFFFFFu; // 8009D440
  c->lr=0x8009D448u; f_80008140(c); // 8009D444
  cmps(c,0,(int32_t)c->r[30],0); // 8009D448
  if (crb(c,2)) { goto L_8009D508; } // 8009D44C
  c->r[4]=c->r[26]|c->r[26]; // 8009D450
  c->r[3]=c->r[1]+0x00000078u; // 8009D454
  c->lr=0x8009D45Cu; f_8009D950(c); // 8009D458
  c->r[4]=c->r[3]|c->r[3]; // 8009D45C
  c->r[3]=c->r[27]|c->r[27]; // 8009D460
  c->r[5]=0u+0x00000000u; // 8009D464
  c->lr=0x8009D46Cu; f_80100820(c); // 8009D468
  c->r[3]=c->r[27]|c->r[27]; // 8009D46C
  c->lr=0x8009D474u; f_80103410(c); // 8009D470
  c->r[3]=c->r[27]|c->r[27]; // 8009D474
  c->lr=0x8009D47Cu; f_801063E0(c); // 8009D478
  c->r[3]=c->r[27]|c->r[27]; // 8009D47C
  c->r[5]=c->r[1]+0x00000008u; // 8009D480
  c->r[4]=c->r[13]+0xFFFF9E84u; // 8009D484
  c->lr=0x8009D48Cu; f_80101C20(c); // 8009D488
  cmps(c,0,(int32_t)c->r[3],0); // 8009D48C
  if (crb(c,2)) { goto L_8009D508; } // 8009D490
  c->r[4]=R32(c->r[1]+0x00000008u); // 8009D494
  c->r[3]=c->r[27]|c->r[27]; // 8009D498
  c->lr=0x8009D4A0u; f_80101D60(c); // 8009D49C
  c->r[0]=R8(c->r[3]+0x00000000u); // 8009D4A0
  cmps(c,0,(int32_t)c->r[0],0); // 8009D4A4
  if (crb(c,2)) { goto L_8009D508; } // 8009D4A8
  c->r[4]=R32(c->r[1]+0x00000008u); // 8009D4AC
  c->r[3]=c->r[27]|c->r[27]; // 8009D4B0
  c->lr=0x8009D4B8u; f_80101DA0(c); // 8009D4B4
  c->r[30]=c->r[3]|c->r[3]; // 8009D4B8
  c->r[4]=c->r[26]|c->r[26]; // 8009D4BC
  c->r[3]=c->r[1]+0x00000078u; // 8009D4C0
  c->lr=0x8009D4C8u; f_8009D950(c); // 8009D4C4
  c->r[4]=c->r[3]|c->r[3]; // 8009D4C8
  c->r[3]=c->r[1]+0x00000048u; // 8009D4CC
  c->lr=0x8009D4D4u; f_800A1AB0(c); // 8009D4D0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009D4D4
  c->r[3]=c->r[1]+0x00000038u; // 8009D4D8
  c->r[4]=c->r[1]+0x00000048u; // 8009D4DC
  c->lr=0x8009D4E4u; f_8009D6B0(c); // 8009D4E0
  c->r[3]=c->r[29]+0xFFFFBD2Cu; // 8009D4E4
  c->r[4]=c->r[1]+0x00000038u; // 8009D4E8
  c->lr=0x8009D4F0u; f_8009DB20(c); // 8009D4EC
  c->r[3]=c->r[1]+0x00000038u; // 8009D4F0
  c->r[4]=0u+0xFFFFFFFFu; // 8009D4F4
  c->lr=0x8009D4FCu; f_8009DAB0(c); // 8009D4F8
  c->r[3]=c->r[1]+0x00000048u; // 8009D4FC
  c->r[4]=0u+0xFFFFFFFFu; // 8009D500
  c->lr=0x8009D508u; f_80008140(c); // 8009D504
L_8009D508:;
  c->r[26]=c->r[26]+0x00000001u; // 8009D508
L_8009D50C:;
  c->r[3]=c->r[1]+0x00000078u; // 8009D50C
  c->lr=0x8009D514u; f_8009DFC0(c); // 8009D510
  cmpu(c,0,c->r[26],c->r[3]); // 8009D514
  if (crb(c,0)) { IRQCHK(c); goto L_8009D40C; } // 8009D518
  cmps(c,0,(int32_t)c->r[27],0); // 8009D51C
  if (crb(c,2)) { goto L_8009D53C; } // 8009D520
  c->r[12]=R32(c->r[27]+0x00000000u); // 8009D524
  c->r[3]=c->r[27]|c->r[27]; // 8009D528
  c->r[4]=0u+0x00000001u; // 8009D52C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009D530
  c->ctr=c->r[12]; // 8009D534
  if (true) { c->lr=0x8009D53Cu; dispatch(c,c->ctr); } // 8009D538
L_8009D53C:;
  c->r[3]=c->r[1]+0x00000078u; // 8009D53C
  c->r[4]=0u+0xFFFFFFFFu; // 8009D540
  c->lr=0x8009D548u; f_80097D70(c); // 8009D544
L_8009D548:;
  c->r[28]=c->r[28]+0x00000001u; // 8009D548
L_8009D54C:;
  c->r[3]=c->r[1]+0x00000084u; // 8009D54C
  c->lr=0x8009D554u; f_8009DFC0(c); // 8009D550
  cmpu(c,0,c->r[28],c->r[3]); // 8009D554
  if (crb(c,0)) { IRQCHK(c); goto L_8009D344; } // 8009D558
  c->r[3]=c->r[1]+0x00000084u; // 8009D55C
  c->r[4]=0u+0xFFFFFFFFu; // 8009D560
  c->lr=0x8009D568u; f_80097D70(c); // 8009D564
  c->r[0]=0u+0xFFFFFFFFu; // 8009D568
  W32(c->r[31]+0x00000100u,c->r[0]); // 8009D56C
  c->r[3]=c->r[31]|c->r[31]; // 8009D570
  c->lr=0x8009D578u; f_80014AD0(c); // 8009D574
  c->r[11]=c->r[1]+0x000000B0u; // 8009D578
  c->r[3]=c->r[31]|c->r[31]; // 8009D57C
  c->lr=0x8009D584u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009D580
  c->r[0]=R32(c->r[1]+0x000000B4u); // 8009D584
  c->lr=c->r[0]; // 8009D588
  c->r[1]=c->r[1]+0x000000B0u; // 8009D58C
  return; // 8009D590
}

// fn_8009D5A0
void f_8009D5A0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000004u); // 8009D5A0
  c->r[0]=c->r[4]+0x00000001u; // 8009D5A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009D5A8
  return; // 8009D5AC
}

// fn_8009D5B0
void f_8009D5B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000009Cu; // 8009D5B0
  return; // 8009D5B4
}

// fn_8009D5C0
void f_8009D5C0(Ctx* __restrict c) {
  c->r[3]=0u+0x80210000u; // 8009D5C0
  c->r[3]=c->r[3]+0xFFFFAFB8u; // 8009D5C4
  c->r[3]=c->r[3]+0x00000018u; // 8009D5C8
  return; // 8009D5CC
}

// fn_8009D5D0
void f_8009D5D0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000004u; // 8009D5D0
  return; // 8009D5D4
}

// fn_8009D5E0
void f_8009D5E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D5E0
  c->r[0]=c->lr; // 8009D5E4
  c->r[5]=0u+0x80210000u; // 8009D5E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D5EC
  c->r[5]=c->r[5]+0xFFFFAEA8u; // 8009D5F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8009D5F4
  c->r[31]=0u+0x00000000u; // 8009D5F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8009D5FC
  c->r[30]=c->r[4]|c->r[4]; // 8009D600
  W32(c->r[1]+0x00000014u,c->r[29]); // 8009D604
  c->r[29]=c->r[3]|c->r[3]; // 8009D608
  W32(c->r[3]+0x00000008u,c->r[31]); // 8009D60C
  W8(c->r[3]+0x0000000Cu,c->r[31]); // 8009D610
  W32(c->r[3]+0x00000000u,c->r[5]); // 8009D614
  c->r[3]=c->r[3]+0x00000018u; // 8009D618
  c->lr=0x8009D620u; f_8015C1A0(c); // 8009D61C
  c->r[4]=0u+0x80220000u; // 8009D620
  c->r[0]=c->r[29]+0x00000010u; // 8009D624
  c->r[4]=c->r[4]+0xFFFFFBC8u; // 8009D628
  W8(c->r[29]+0x0000000Du,c->r[31]); // 8009D62C
  c->r[3]=c->r[29]|c->r[29]; // 8009D630
  W8(c->r[29]+0x0000000Fu,c->r[31]); // 8009D634
  W32(c->r[29]+0x00000010u,c->r[31]); // 8009D638
  W32(c->r[29]+0x00000014u,c->r[0]); // 8009D63C
  W32(c->r[29]+0x00000000u,c->r[4]); // 8009D640
  W8(c->r[29]+0x0000000Eu,c->r[30]); // 8009D644
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8009D648
  c->r[30]=R32(c->r[1]+0x00000018u); // 8009D64C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8009D650
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D654
  c->lr=c->r[0]; // 8009D658
  c->r[1]=c->r[1]+0x00000020u; // 8009D65C
  return; // 8009D660
}

// fn_8009D670
void f_8009D670(Ctx* __restrict c) {
  c->r[5]=0u+0x80220000u; // 8009D670
  c->r[6]=0u+0x00000000u; // 8009D674
  c->r[5]=c->r[5]+0xFFFFA07Cu; // 8009D678
  W32(c->r[3]+0x00000008u,c->r[6]); // 8009D67C
  c->r[0]=rotl(c->r[4],6)&0xFFFFFFC0u; // 8009D680
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 8009D684
  W32(c->r[3]+0x00000000u,c->r[5]); // 8009D688
  W32(c->r[3]+0x00000010u,c->r[4]); // 8009D68C
  c->r[4]=R32(c->r[13]+0xFFFFADD8u); // 8009D690
  c->r[4]=c->r[4]+c->r[0]; // 8009D694
  c->r[0]=R32(c->r[4]+0x00000028u); // 8009D698
  c->r[0]=cntlz(c->r[0]); // 8009D69C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8009D6A0
  W32(c->r[3]+0x00000014u,c->r[0]); // 8009D6A4
  return; // 8009D6A8
}

// fn_8009D6B0
void f_8009D6B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D6B0
  c->r[0]=c->lr; // 8009D6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8009D6B8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8009D6BC
  c->f[31]=c->f[1]; // 8009D6C0
  W32(c->r[1]+0x00000014u,c->r[31]); // 8009D6C4
  c->r[31]=c->r[4]|c->r[4]; // 8009D6C8
  W32(c->r[1]+0x00000010u,c->r[30]); // 8009D6CC
  c->r[30]=c->r[3]|c->r[3]; // 8009D6D0
  c->r[5]=R32(c->r[4]+0x00000000u); // 8009D6D4
  c->r[0]=rotl(c->r[5],1)&0x00000001u; cr0(c,c->r[0]); // 8009D6D8
  if (!crb(c,2)) { goto L_8009D6F8; } // 8009D6DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009D6E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009D6E4
  W32(c->r[3]+0x00000000u,c->r[5]); // 8009D6E8
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009D6EC
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009D6F0
  goto L_8009D738; // 8009D6F4
L_8009D6F8:;
  c->r[0]=0u+0x00000000u; // 8009D6F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009D6FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009D700
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009D704
  c->r[4]=R32(c->r[4]+0x00000004u); // 8009D708
  c->lr=0x8009D710u; f_800081B0(c); // 8009D70C
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8009D710
  c->r[3]=c->r[30]|c->r[30]; // 8009D714
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009D718
  c->r[8]=c->r[1]+0x00000008u; // 8009D71C
  c->r[4]=0u+0x00000000u; // 8009D720
  c->r[5]=0u+0x00000000u; // 8009D724
  c->r[6]=R32(c->r[31]+0x00000008u); // 8009D728
  c->r[0]=R32(c->r[31]+0x00000004u); // 8009D72C
  c->r[7]=c->r[6]+c->r[0]; // 8009D730
  c->lr=0x8009D738u; f_80008370(c); // 8009D734
L_8009D738:;
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[31]);} // 8009D738
  c->r[3]=c->r[30]|c->r[30]; // 8009D73C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8009D740
  c->r[31]=R32(c->r[1]+0x00000014u); // 8009D744
  c->r[30]=R32(c->r[1]+0x00000010u); // 8009D748
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009D74C
  c->lr=c->r[0]; // 8009D750
  c->r[1]=c->r[1]+0x00000020u; // 8009D754
  return; // 8009D758
}

// fn_8009D760
void f_8009D760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D760
  c->r[0]=c->lr; // 8009D764
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009D768
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8009D76C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8009D770
  c->r[30]=c->r[4]|c->r[4]; // 8009D774
  W32(c->r[1]+0x00000024u,c->r[29]); // 8009D778
  c->r[29]=c->r[3]|c->r[3]; // 8009D77C
  c->r[3]=c->r[30]|c->r[30]; // 8009D780
  c->lr=0x8009D788u; f_801D4D44(c); // 8009D784
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8009D788
  c->r[31]=c->r[3]|c->r[3]; // 8009D78C
  c->r[0]=R32(c->r[29]+0x00000000u); // 8009D790
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009D794
  if (!crb(c,2)) { goto L_8009D7A8; } // 8009D798
  c->r[0]=R8(c->r[29]+0x00000000u); // 8009D79C
  c->r[4]=rotl(c->r[0],0)&0x0000007Fu; // 8009D7A0
  goto L_8009D7AC; // 8009D7A4
L_8009D7A8:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 8009D7A8
L_8009D7AC:;
  W32(c->r[1]+0x00000008u,c->r[4]); // 8009D7AC
  c->r[0]=R32(c->r[29]+0x00000000u); // 8009D7B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009D7B4
  if (!crb(c,2)) { goto L_8009D7CC; } // 8009D7B8
  c->r[0]=R8(c->r[29]+0x00000000u); // 8009D7BC
  c->r[3]=c->r[29]+0x00000001u; // 8009D7C0
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 8009D7C4
  goto L_8009D7D4; // 8009D7C8
L_8009D7CC:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 8009D7CC
  c->r[0]=R32(c->r[29]+0x00000004u); // 8009D7D0
L_8009D7D4:;
  cmpu(c,0,c->r[4],c->r[0]); // 8009D7D4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8009D7D8
  c->r[4]=c->r[1]+0x00000010u; // 8009D7DC
  if (!crb(c,0)) { goto L_8009D7E8; } // 8009D7E0
  c->r[4]=c->r[1]+0x00000008u; // 8009D7E4
L_8009D7E8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009D7E8
  c->r[4]=c->r[30]|c->r[30]; // 8009D7EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D7F0
  c->r[5]=c->r[1]+0x00000014u; // 8009D7F4
  cmpu(c,0,c->r[31],c->r[0]); // 8009D7F8
  if (!crb(c,0)) { goto L_8009D804; } // 8009D7FC
  c->r[5]=c->r[1]+0x0000000Cu; // 8009D800
L_8009D804:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 8009D804
  c->lr=0x8009D80Cu; f_801D8F78(c); // 8009D808
  cmps(c,0,(int32_t)c->r[3],0); // 8009D80C
  if (!crb(c,2)) { goto L_8009D838; } // 8009D810
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D814
  cmpu(c,0,c->r[0],c->r[31]); // 8009D818
  if (!crb(c,0)) { goto L_8009D828; } // 8009D81C
  c->r[3]=0u+0xFFFFFFFFu; // 8009D820
  goto L_8009D838; // 8009D824
L_8009D828:;
  if (!crb(c,2)) { goto L_8009D834; } // 8009D828
  c->r[3]=0u+0x00000000u; // 8009D82C
  goto L_8009D838; // 8009D830
L_8009D834:;
  c->r[3]=0u+0x00000001u; // 8009D834
L_8009D838:;
  c->r[0]=cntlz(c->r[3]); // 8009D838
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8009D83C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8009D840
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8009D844
  c->r[29]=R32(c->r[1]+0x00000024u); // 8009D848
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009D84C
  c->lr=c->r[0]; // 8009D850
  c->r[1]=c->r[1]+0x00000030u; // 8009D854
  return; // 8009D858
}

// fn_8009D860
void f_8009D860(Ctx* __restrict c) {
  return; // 8009D860
}

// fn_8009D870
void f_8009D870(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8009D870
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009D874
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009D878
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009D87C
  return; // 8009D880
}

// fn_8009D890
void f_8009D890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D890
  c->r[0]=c->lr; // 8009D894
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009D89C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009D8A0
  c->r[30]=R32(c->r[3]+0x00000004u); // 8009D8A4
  c->r[5]=R32(c->r[3]+0x00000000u); // 8009D8A8
  c->r[4]=rotl(c->r[30],4)&0xFFFFFFF0u; // 8009D8AC
  c->r[0]=c->r[30]-c->r[30]; // 8009D8B0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009D8B4
  c->r[31]=c->r[5]+c->r[4]; // 8009D8B8
  goto L_8009D8E4; // 8009D8BC
L_8009D8C0:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFF0u,0); cr0(c,c->r[31]); // 8009D8C0
  if (crb(c,2)) { goto L_8009D8E0; } // 8009D8C4
  if (crb(c,2)) { goto L_8009D8E0; } // 8009D8C8
  c->r[0]=R32(c->r[31]+0x00000000u); // 8009D8CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009D8D0
  if (crb(c,2)) { goto L_8009D8E0; } // 8009D8D4
  c->r[3]=R32(c->r[31]+0x00000008u); // 8009D8D8
  c->lr=0x8009D8E0u; f_800D93B0(c); // 8009D8DC
L_8009D8E0:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8009D8E0
L_8009D8E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8009D8E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8009D8C0; } // 8009D8E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009D8EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009D8F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009D8F4
  c->lr=c->r[0]; // 8009D8F8
  c->r[1]=c->r[1]+0x00000010u; // 8009D8FC
  return; // 8009D900
}

// fn_8009D910
void f_8009D910(Ctx* __restrict c) {
  c->r[5]=R32(c->r[4]+0x00000000u); // 8009D910
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009D914
  W32(c->r[3]+0x00000000u,c->r[5]); // 8009D918
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009D91C
  return; // 8009D920
}

// fn_8009D930
void f_8009D930(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8009D930
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009D934
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009D938
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009D93C
  return; // 8009D940
}

// fn_8009D950
void f_8009D950(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8009D950
  c->r[3]=R32(c->r[3]+0x00000000u); // 8009D954
  c->r[3]=c->r[3]+c->r[0]; // 8009D958
  return; // 8009D95C
}

// fn_8009D960
void f_8009D960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009D960
  c->r[0]=c->lr; // 8009D964
  W32(c->r[1]+0x00000034u,c->r[0]); // 8009D968
  c->r[0]=0u+0x00000000u; // 8009D96C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8009D970
  c->r[31]=c->r[5]|c->r[5]; // 8009D974
  W32(c->r[1]+0x00000028u,c->r[30]); // 8009D978
  c->r[30]=c->r[3]|c->r[3]; // 8009D97C
  W32(c->r[1]+0x00000024u,c->r[29]); // 8009D980
  W32(c->r[1]+0x00000020u,c->r[28]); // 8009D984
  c->r[28]=c->r[4]|c->r[4]; // 8009D988
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 8009D98C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8009D990
  W32(c->r[3]+0x00000004u,c->r[0]); // 8009D994
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009D998
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009D99C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009D9A0
  if (!crb(c,2)) { goto L_8009D9B4; } // 8009D9A4
  c->r[0]=R8(c->r[4]+0x00000000u); // 8009D9A8
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 8009D9AC
  goto L_8009D9B8; // 8009D9B0
L_8009D9B4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8009D9B4
L_8009D9B8:;
  cmpu(c,0,c->r[5],c->r[3]); // 8009D9B8
  if (crb(c,1)) { goto L_8009D9E4; } // 8009D9BC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8009D9C0
  c->r[4]=c->r[3]-c->r[5]; // 8009D9C4
  W32(c->r[1]+0x00000010u,c->r[4]); // 8009D9C8
  c->r[3]=c->r[1]+0x0000001Cu; // 8009D9CC
  cmpu(c,0,c->r[4],c->r[0]); // 8009D9D0
  if (!crb(c,0)) { goto L_8009D9DC; } // 8009D9D4
  c->r[3]=c->r[1]+0x00000010u; // 8009D9D8
L_8009D9DC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8009D9DC
  goto L_8009D9E8; // 8009D9E0
L_8009D9E4:;
  c->r[4]=0u+0x00000000u; // 8009D9E4
L_8009D9E8:;
  c->r[3]=c->r[30]|c->r[30]; // 8009D9E8
  c->lr=0x8009D9F0u; f_800081B0(c); // 8009D9EC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8009D9F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009D9F4
  c->r[0]=R32(c->r[28]+0x00000000u); // 8009D9F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009D9FC
  if (!crb(c,2)) { goto L_8009DA14; } // 8009DA00
  c->r[0]=R8(c->r[28]+0x00000000u); // 8009DA04
  c->r[29]=c->r[28]+0x00000001u; // 8009DA08
  c->r[28]=rotl(c->r[0],0)&0x0000007Fu; // 8009DA0C
  goto L_8009DA1C; // 8009DA10
L_8009DA14:;
  c->r[29]=R32(c->r[28]+0x00000008u); // 8009DA14
  c->r[28]=R32(c->r[28]+0x00000004u); // 8009DA18
L_8009DA1C:;
  cmpu(c,0,c->r[31],c->r[28]); // 8009DA1C
  if (!crb(c,1)) { goto L_8009DA44; } // 8009DA20
  c->r[3]=0u+0x80250000u; // 8009DA24
  c->r[4]=0u+0x80220000u; // 8009DA28
  c->r[3]=c->r[3]+0xFFFF98E0u; // 8009DA2C
  c->r[4]=c->r[4]+0xFFFF9D78u; // 8009DA30
  c->r[3]=c->r[3]+0x000000A0u; // 8009DA34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009DA38
  c->lr=0x8009DA40u; f_801DB440(c); // 8009DA3C
  c->lr=0x8009DA44u; f_801DE64C(c); // 8009DA40
L_8009DA44:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8009DA44
  c->r[3]=c->r[28]-c->r[31]; // 8009DA48
  W32(c->r[1]+0x00000018u,c->r[3]); // 8009DA4C
  c->r[29]=c->r[29]+c->r[31]; // 8009DA50
  cmpu(c,0,c->r[3],c->r[0]); // 8009DA54
  c->r[3]=c->r[1]+0x00000014u; // 8009DA58
  if (!crb(c,0)) { goto L_8009DA64; } // 8009DA5C
  c->r[3]=c->r[1]+0x00000018u; // 8009DA60
L_8009DA64:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8009DA64
  c->r[3]=c->r[30]|c->r[30]; // 8009DA68
  c->r[0]=R8(c->r[1]+0x00000008u); // 8009DA6C
  c->r[6]=c->r[29]|c->r[29]; // 8009DA70
  W32(c->r[1]+0x00000014u,c->r[4]); // 8009DA74
  c->r[7]=c->r[29]+c->r[4]; // 8009DA78
  c->r[8]=c->r[1]+0x0000000Cu; // 8009DA7C
  c->r[4]=0u+0x00000000u; // 8009DA80
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8009DA84
  c->r[5]=0u+0x00000000u; // 8009DA88
  c->lr=0x8009DA90u; f_80008370(c); // 8009DA8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009DA90
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8009DA94
  c->r[30]=R32(c->r[1]+0x00000028u); // 8009DA98
  c->r[29]=R32(c->r[1]+0x00000024u); // 8009DA9C
  c->r[28]=R32(c->r[1]+0x00000020u); // 8009DAA0
  c->lr=c->r[0]; // 8009DAA4
  c->r[1]=c->r[1]+0x00000030u; // 8009DAA8
  return; // 8009DAAC
}

// fn_8009DAB0
void f_8009DAB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009DAB0
  c->r[0]=c->lr; // 8009DAB4
  cmps(c,0,(int32_t)c->r[3],0); // 8009DAB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009DABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009DAC0
  c->r[31]=c->r[4]|c->r[4]; // 8009DAC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009DAC8
  c->r[30]=c->r[3]|c->r[3]; // 8009DACC
  if (crb(c,2)) { goto L_8009DAFC; } // 8009DAD0
  if (crb(c,2)) { goto L_8009DAEC; } // 8009DAD4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DAD8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009DADC
  if (crb(c,2)) { goto L_8009DAEC; } // 8009DAE0
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009DAE4
  c->lr=0x8009DAECu; f_800D93B0(c); // 8009DAE8
L_8009DAEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8009DAEC
  if (!crb(c,1)) { goto L_8009DAFC; } // 8009DAF0
  c->r[3]=c->r[30]|c->r[30]; // 8009DAF4
  c->lr=0x8009DAFCu; f_800D93B0(c); // 8009DAF8
L_8009DAFC:;
  c->r[3]=c->r[30]|c->r[30]; // 8009DAFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009DB00
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009DB04
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009DB08
  c->lr=c->r[0]; // 8009DB0C
  c->r[1]=c->r[1]+0x00000010u; // 8009DB10
  return; // 8009DB14
}

// fn_8009DB20
void f_8009DB20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009DB20
  c->r[0]=c->lr; // 8009DB24
  W32(c->r[1]+0x00000064u,c->r[0]); // 8009DB28
  c->r[11]=c->r[1]+0x00000060u; // 8009DB2C
  c->lr=0x8009DB34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009DB30
  c->r[0]=R32(c->r[3]+0x00000004u); // 8009DB34
  c->r[29]=c->r[3]|c->r[3]; // 8009DB38
  c->r[5]=R32(c->r[3]+0x00000008u); // 8009DB3C
  c->r[30]=c->r[4]|c->r[4]; // 8009DB40
  cmpu(c,0,c->r[0],c->r[5]); // 8009DB44
  if (!crb(c,0)) { goto L_8009DBDC; } // 8009DB48
  c->r[3]=R32(c->r[3]+0x00000000u); // 8009DB4C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8009DB50
  c->r[31]=c->r[3]+c->r[0]; cr0(c,c->r[31]); // 8009DB54
  if (crb(c,2)) { goto L_8009DBCC; } // 8009DB58
  c->r[3]=R32(c->r[4]+0x00000000u); // 8009DB5C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 8009DB60
  if (!crb(c,2)) { goto L_8009DB80; } // 8009DB64
  W32(c->r[31]+0x00000000u,c->r[3]); // 8009DB68
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009DB6C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8009DB70
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009DB74
  W32(c->r[31]+0x00000008u,c->r[0]); // 8009DB78
  goto L_8009DBC4; // 8009DB7C
L_8009DB80:;
  c->r[0]=0u+0x00000000u; // 8009DB80
  W32(c->r[31]+0x00000000u,c->r[0]); // 8009DB84
  c->r[4]=R32(c->r[4]+0x00000004u); // 8009DB88
  c->r[3]=c->r[31]|c->r[31]; // 8009DB8C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8009DB90
  W32(c->r[31]+0x00000008u,c->r[0]); // 8009DB94
  c->lr=0x8009DB9Cu; f_800081B0(c); // 8009DB98
  c->r[5]=R8(c->r[1]+0x0000001Cu); // 8009DB9C
  c->r[3]=c->r[31]|c->r[31]; // 8009DBA0
  W8(c->r[1]+0x00000018u,c->r[5]); // 8009DBA4
  c->r[8]=c->r[1]+0x00000018u; // 8009DBA8
  c->r[6]=R32(c->r[30]+0x00000008u); // 8009DBAC
  c->r[4]=0u+0x00000000u; // 8009DBB0
  c->r[0]=R32(c->r[30]+0x00000004u); // 8009DBB4
  c->r[5]=0u+0x00000000u; // 8009DBB8
  c->r[7]=c->r[6]+c->r[0]; // 8009DBBC
  c->lr=0x8009DBC4u; f_80008370(c); // 8009DBC0
L_8009DBC4:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DBC4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 8009DBC8
L_8009DBCC:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8009DBCC
  c->r[0]=c->r[3]+0x00000001u; // 8009DBD0
  W32(c->r[29]+0x00000004u,c->r[0]); // 8009DBD4
  goto L_8009DFA4; // 8009DBD8
L_8009DBDC:;
  c->r[3]=0u+0x10000000u; // 8009DBDC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009DBE0
  c->r[0]=c->r[0]-c->r[5]; // 8009DBE4
  cmpu(c,0,c->r[0],0x00000001u); // 8009DBE8
  if (!crb(c,0)) { goto L_8009DC10; } // 8009DBEC
  c->r[3]=0u+0x80250000u; // 8009DBF0
  c->r[4]=0u+0x80220000u; // 8009DBF4
  c->r[3]=c->r[3]+0xFFFF98E0u; // 8009DBF8
  c->r[4]=c->r[4]+0xFFFF9D94u; // 8009DBFC
  c->r[3]=c->r[3]+0x000000A0u; // 8009DC00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009DC04
  c->lr=0x8009DC0Cu; f_801DB440(c); // 8009DC08
  c->lr=0x8009DC10u; f_801DE64C(c); // 8009DC0C
L_8009DC10:;
  c->r[5]=0u+0x00000000u; // 8009DC10
  c->r[4]=c->r[29]+0x00000008u; // 8009DC14
  c->r[3]=0u+0x10000000u; // 8009DC18
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8009DC1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009DC20
  W32(c->r[1]+0x00000030u,c->r[5]); // 8009DC24
  W32(c->r[1]+0x00000034u,c->r[5]); // 8009DC28
  W32(c->r[1]+0x00000038u,c->r[4]); // 8009DC2C
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 8009DC30
  c->r[3]=R32(c->r[29]+0x00000004u); // 8009DC34
  c->r[31]=R32(c->r[29]+0x00000008u); // 8009DC38
  c->r[3]=c->r[3]+0x00000001u; // 8009DC3C
  c->r[3]=c->r[3]-c->r[31]; // 8009DC40
  c->r[0]=c->r[0]-c->r[31]; // 8009DC44
  cmpu(c,0,c->r[3],c->r[0]); // 8009DC48
  W32(c->r[1]+0x00000020u,c->r[3]); // 8009DC4C
  if (!crb(c,1)) { goto L_8009DC74; } // 8009DC50
  c->r[3]=0u+0x80250000u; // 8009DC54
  c->r[4]=0u+0x80220000u; // 8009DC58
  c->r[3]=c->r[3]+0xFFFF98E0u; // 8009DC5C
  c->r[4]=c->r[4]+0xFFFF9D94u; // 8009DC60
  c->r[3]=c->r[3]+0x000000A0u; // 8009DC64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009DC68
  c->lr=0x8009DC70u; f_801DB440(c); // 8009DC6C
  c->lr=0x8009DC74u; f_801DE64C(c); // 8009DC70
L_8009DC74:;
  c->r[3]=0u+0x05550000u; // 8009DC74
  c->r[0]=c->r[3]+0x00005555u; // 8009DC78
  cmpu(c,0,c->r[31],c->r[0]); // 8009DC7C
  if (!crb(c,0)) { goto L_8009DCC4; } // 8009DC80
  c->r[5]=c->r[31]+0x00000001u; // 8009DC84
  c->r[3]=0u+0xCCCD0000u; // 8009DC88
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8009DC8C
  c->r[0]=R32(c->r[1]+0x00000020u); // 8009DC90
  c->r[4]=c->r[4]-c->r[5]; // 8009DC94
  c->r[3]=c->r[3]+0xFFFFCCCDu; // 8009DC98
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 8009DC9C
  c->r[3]=c->r[1]+0x00000028u; // 8009DCA0
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 8009DCA4
  W32(c->r[1]+0x00000028u,c->r[4]); // 8009DCA8
  cmpu(c,0,c->r[4],c->r[0]); // 8009DCAC
  if (!crb(c,0)) { goto L_8009DCB8; } // 8009DCB0
  c->r[3]=c->r[1]+0x00000020u; // 8009DCB4
L_8009DCB8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DCB8
  c->r[28]=c->r[31]+c->r[0]; // 8009DCBC
  goto L_8009DD08; // 8009DCC0
L_8009DCC4:;
  c->r[3]=0u+0x0AAB0000u; // 8009DCC4
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 8009DCC8
  cmpu(c,0,c->r[31],c->r[0]); // 8009DCCC
  if (!crb(c,0)) { goto L_8009DD00; } // 8009DCD0
  c->r[3]=c->r[31]+0x00000001u; // 8009DCD4
  c->r[0]=R32(c->r[1]+0x00000020u); // 8009DCD8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8009DCDC
  W32(c->r[1]+0x00000024u,c->r[3]); // 8009DCE0
  cmpu(c,0,c->r[3],c->r[0]); // 8009DCE4
  c->r[3]=c->r[1]+0x00000024u; // 8009DCE8
  if (!crb(c,0)) { goto L_8009DCF4; } // 8009DCEC
  c->r[3]=c->r[1]+0x00000020u; // 8009DCF0
L_8009DCF4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009DCF4
  c->r[28]=c->r[31]+c->r[0]; // 8009DCF8
  goto L_8009DD08; // 8009DCFC
L_8009DD00:;
  c->r[3]=0u+0x10000000u; // 8009DD00
  c->r[28]=c->r[3]+0xFFFFFFFFu; // 8009DD04
L_8009DD08:;
  c->r[3]=0u+0x10000000u; // 8009DD08
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009DD0C
  cmpu(c,0,c->r[28],c->r[0]); // 8009DD10
  if (!crb(c,1)) { goto L_8009DD38; } // 8009DD14
  c->r[3]=0u+0x80250000u; // 8009DD18
  c->r[4]=0u+0x80220000u; // 8009DD1C
  c->r[3]=c->r[3]+0xFFFF98E0u; // 8009DD20
  c->r[4]=c->r[4]+0xFFFF9D94u; // 8009DD24
  c->r[3]=c->r[3]+0x000000A0u; // 8009DD28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009DD2C
  c->lr=0x8009DD34u; f_801DB440(c); // 8009DD30
  c->lr=0x8009DD38u; f_801DE64C(c); // 8009DD34
L_8009DD38:;
  c->r[3]=rotl(c->r[28],4)&0xFFFFFFF0u; // 8009DD38
  c->lr=0x8009DD40u; f_800D8ED0(c); // 8009DD3C
  cmps(c,0,(int32_t)c->r[3],0); // 8009DD40
  c->r[27]=c->r[3]|c->r[3]; // 8009DD44
  if (!crb(c,2)) { goto L_8009DD6C; } // 8009DD48
  c->r[3]=0u+0x80250000u; // 8009DD4C
  c->r[4]=0u+0x80220000u; // 8009DD50
  c->r[3]=c->r[3]+0xFFFF98E0u; // 8009DD54
  c->r[3]=c->r[3]+0x000000A0u; // 8009DD58
  c->r[4]=c->r[4]+0xFFFFA2C8u; // 8009DD5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009DD60
  c->lr=0x8009DD68u; f_801DB440(c); // 8009DD64
  c->lr=0x8009DD6Cu; f_801DE64C(c); // 8009DD68
L_8009DD6C:;
  c->r[3]=R32(c->r[1]+0x00000030u); // 8009DD6C
  c->r[0]=0u+0x00000000u; // 8009DD70
  W32(c->r[1]+0x0000002Cu,c->r[27]); // 8009DD74
  c->r[4]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8009DD78
  W32(c->r[1]+0x00000034u,c->r[28]); // 8009DD7C
  c->r[3]=R32(c->r[29]+0x00000004u); // 8009DD80
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8009DD84
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8009DD88
  c->r[3]=c->r[27]+c->r[3]; // 8009DD8C
  c->r[27]=c->r[4]+c->r[3]; cr0(c,c->r[27]); // 8009DD90
  if (crb(c,2)) { goto L_8009DE04; } // 8009DD94
  c->r[4]=R32(c->r[30]+0x00000000u); // 8009DD98
  c->r[3]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[3]); // 8009DD9C
  if (!crb(c,2)) { goto L_8009DDBC; } // 8009DDA0
  W32(c->r[27]+0x00000000u,c->r[4]); // 8009DDA4
  c->r[0]=R32(c->r[30]+0x00000004u); // 8009DDA8
  W32(c->r[27]+0x00000004u,c->r[0]); // 8009DDAC
  c->r[0]=R32(c->r[30]+0x00000008u); // 8009DDB0
  W32(c->r[27]+0x00000008u,c->r[0]); // 8009DDB4
  goto L_8009DDFC; // 8009DDB8
L_8009DDBC:;
  W32(c->r[27]+0x00000000u,c->r[0]); // 8009DDBC
  c->r[3]=c->r[27]|c->r[27]; // 8009DDC0
  c->r[4]=R32(c->r[30]+0x00000004u); // 8009DDC4
  W32(c->r[27]+0x00000004u,c->r[0]); // 8009DDC8
  W32(c->r[27]+0x00000008u,c->r[0]); // 8009DDCC
  c->lr=0x8009DDD4u; f_800081B0(c); // 8009DDD0
  c->r[5]=R8(c->r[1]+0x00000008u); // 8009DDD4
  c->r[3]=c->r[27]|c->r[27]; // 8009DDD8
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 8009DDDC
  c->r[8]=c->r[1]+0x0000000Cu; // 8009DDE0
  c->r[6]=R32(c->r[30]+0x00000008u); // 8009DDE4
  c->r[4]=0u+0x00000000u; // 8009DDE8
  c->r[0]=R32(c->r[30]+0x00000004u); // 8009DDEC
  c->r[5]=0u+0x00000000u; // 8009DDF0
  c->r[7]=c->r[6]+c->r[0]; // 8009DDF4
  c->lr=0x8009DDFCu; f_80008370(c); // 8009DDF8
L_8009DDFC:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DDFC
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 8009DE00
L_8009DE04:;
  c->r[3]=R32(c->r[1]+0x00000030u); // 8009DE04
  c->r[30]=0u+0x00000000u; // 8009DE08
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8009DE0C
  c->r[3]=c->r[3]+0x00000001u; // 8009DE10
  W32(c->r[1]+0x00000030u,c->r[3]); // 8009DE14
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 8009DE18
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8009DE1C
  c->r[4]=R32(c->r[29]+0x00000004u); // 8009DE20
  c->r[31]=R32(c->r[29]+0x00000000u); // 8009DE24
  c->r[27]=c->r[3]+c->r[0]; // 8009DE28
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 8009DE2C
  c->r[28]=c->r[31]+c->r[0]; // 8009DE30
  goto L_8009DEC8; // 8009DE34
L_8009DE38:;
  c->r[27]=addc(c,c->r[27],0xFFFFFFF0u,0); cr0(c,c->r[27]); // 8009DE38
  c->r[28]=c->r[28]+0xFFFFFFF0u; // 8009DE3C
  if (crb(c,2)) { goto L_8009DEB0; } // 8009DE40
  c->r[3]=R32(c->r[28]+0x00000000u); // 8009DE44
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 8009DE48
  if (!crb(c,2)) { goto L_8009DE68; } // 8009DE4C
  c->r[0]=R32(c->r[28]+0x00000004u); // 8009DE50
  W32(c->r[27]+0x00000000u,c->r[3]); // 8009DE54
  W32(c->r[27]+0x00000004u,c->r[0]); // 8009DE58
  c->r[0]=R32(c->r[28]+0x00000008u); // 8009DE5C
  W32(c->r[27]+0x00000008u,c->r[0]); // 8009DE60
  goto L_8009DEA8; // 8009DE64
L_8009DE68:;
  W32(c->r[27]+0x00000000u,c->r[30]); // 8009DE68
  c->r[3]=c->r[27]|c->r[27]; // 8009DE6C
  W32(c->r[27]+0x00000004u,c->r[30]); // 8009DE70
  W32(c->r[27]+0x00000008u,c->r[30]); // 8009DE74
  c->r[4]=R32(c->r[28]+0x00000004u); // 8009DE78
  c->lr=0x8009DE80u; f_800081B0(c); // 8009DE7C
  c->r[0]=R8(c->r[1]+0x00000010u); // 8009DE80
  c->r[3]=c->r[27]|c->r[27]; // 8009DE84
  W8(c->r[1]+0x00000014u,c->r[0]); // 8009DE88
  c->r[8]=c->r[1]+0x00000014u; // 8009DE8C
  c->r[4]=0u+0x00000000u; // 8009DE90
  c->r[5]=0u+0x00000000u; // 8009DE94
  c->r[6]=R32(c->r[28]+0x00000008u); // 8009DE98
  c->r[0]=R32(c->r[28]+0x00000004u); // 8009DE9C
  c->r[7]=c->r[6]+c->r[0]; // 8009DEA0
  c->lr=0x8009DEA8u; f_80008370(c); // 8009DEA4
L_8009DEA8:;
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009DEA8
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[0]);} // 8009DEAC
L_8009DEB0:;
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 8009DEB0
  c->r[3]=R32(c->r[1]+0x00000030u); // 8009DEB4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8009DEB8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 8009DEBC
  c->r[0]=c->r[3]+0x00000001u; // 8009DEC0
  W32(c->r[1]+0x00000030u,c->r[0]); // 8009DEC4
L_8009DEC8:;
  cmpu(c,0,c->r[28],c->r[31]); // 8009DEC8
  if (crb(c,1)) { IRQCHK(c); goto L_8009DE38; } // 8009DECC
  c->r[3]=R32(c->r[29]+0x00000008u); // 8009DED0
  c->r[31]=c->r[1]+0x0000002Cu; // 8009DED4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8009DED8
  W32(c->r[29]+0x00000008u,c->r[0]); // 8009DEDC
  W32(c->r[1]+0x00000034u,c->r[3]); // 8009DEE0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8009DEE4
  c->r[3]=R32(c->r[29]+0x00000000u); // 8009DEE8
  W32(c->r[29]+0x00000000u,c->r[0]); // 8009DEEC
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 8009DEF0
  c->r[0]=R32(c->r[1]+0x00000030u); // 8009DEF4
  c->r[5]=R32(c->r[29]+0x00000004u); // 8009DEF8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8009DEFC
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 8009DF00
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 8009DF04
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 8009DF08
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8009DF0C
  W32(c->r[1]+0x00000030u,c->r[5]); // 8009DF10
  c->r[29]=c->r[4]+c->r[3]; // 8009DF14
  c->r[30]=c->r[29]+c->r[0]; // 8009DF18
  goto L_8009DF40; // 8009DF1C
L_8009DF20:;
  c->r[30]=addc(c,c->r[30],0xFFFFFFF0u,0); cr0(c,c->r[30]); // 8009DF20
  if (crb(c,2)) { goto L_8009DF40; } // 8009DF24
  if (crb(c,2)) { goto L_8009DF40; } // 8009DF28
  c->r[0]=R32(c->r[30]+0x00000000u); // 8009DF2C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009DF30
  if (crb(c,2)) { goto L_8009DF40; } // 8009DF34
  c->r[3]=R32(c->r[30]+0x00000008u); // 8009DF38
  c->lr=0x8009DF40u; f_800D93B0(c); // 8009DF3C
L_8009DF40:;
  cmpu(c,0,c->r[30],c->r[29]); // 8009DF40
  if (crb(c,1)) { IRQCHK(c); goto L_8009DF20; } // 8009DF44
  cmps(c,0,(int32_t)c->r[31],0); // 8009DF48
  c->r[0]=0u+0x00000000u; // 8009DF4C
  W32(c->r[1]+0x00000030u,c->r[0]); // 8009DF50
  if (crb(c,2)) { goto L_8009DFA4; } // 8009DF54
  c->r[29]=R32(c->r[1]+0x0000002Cu); // 8009DF58
  cmps(c,0,(int32_t)c->r[29],0); // 8009DF5C
  if (crb(c,2)) { goto L_8009DFA4; } // 8009DF60
  c->r[30]=0u+0x00000000u; // 8009DF64
  W32(c->r[1]+0x00000030u,c->r[30]); // 8009DF68
  goto L_8009DF94; // 8009DF6C
L_8009DF70:;
  c->r[29]=addc(c,c->r[29],0xFFFFFFF0u,0); cr0(c,c->r[29]); // 8009DF70
  if (crb(c,2)) { goto L_8009DF90; } // 8009DF74
  if (crb(c,2)) { goto L_8009DF90; } // 8009DF78
  c->r[0]=R32(c->r[29]+0x00000000u); // 8009DF7C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009DF80
  if (crb(c,2)) { goto L_8009DF90; } // 8009DF84
  c->r[3]=R32(c->r[29]+0x00000008u); // 8009DF88
  c->lr=0x8009DF90u; f_800D93B0(c); // 8009DF8C
L_8009DF90:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 8009DF90
L_8009DF94:;
  cmps(c,0,(int32_t)c->r[30],0); // 8009DF94
  if (!crb(c,2)) { IRQCHK(c); goto L_8009DF70; } // 8009DF98
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 8009DF9C
  c->lr=0x8009DFA4u; f_800D93B0(c); // 8009DFA0
L_8009DFA4:;
  c->r[11]=c->r[1]+0x00000060u; // 8009DFA4
  c->lr=0x8009DFACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8009DFA8
  c->r[0]=R32(c->r[1]+0x00000064u); // 8009DFAC
  c->lr=c->r[0]; // 8009DFB0
  c->r[1]=c->r[1]+0x00000060u; // 8009DFB4
  return; // 8009DFB8
}

// fn_8009DFC0
void f_8009DFC0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 8009DFC0
  return; // 8009DFC4
}

// fn_8009DFD0
void f_8009DFD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009DFD0
  c->r[0]=c->lr; // 8009DFD4
  cmps(c,0,(int32_t)c->r[3],0); // 8009DFD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8009DFDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8009DFE0
  c->r[31]=c->r[4]|c->r[4]; // 8009DFE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8009DFE8
  c->r[30]=c->r[3]|c->r[3]; // 8009DFEC
  if (crb(c,2)) { goto L_8009E150; } // 8009DFF0
  c->r[5]=0u+0x80220000u; // 8009DFF4
  c->r[6]=R32(c->r[3]+0x00000118u); // 8009DFF8
  c->r[5]=c->r[5]+0xFFFFA164u; // 8009DFFC
  W32(c->r[3]+0x00000000u,c->r[5]); // 8009E000
  c->r[4]=c->r[5]+0x00000014u; // 8009E004
  c->r[0]=c->r[5]+0x0000002Cu; // 8009E008
  W32(c->r[3]+0x00000010u,c->r[4]); // 8009E00C
  W32(c->r[3]+0x00000020u,c->r[0]); // 8009E010
  c->r[0]=R32(c->r[6]+0x00000004u); // 8009E014
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8009E018
  W32(c->r[6]+0x00000004u,c->r[0]); // 8009E01C
  if (!crb(c,2)) { goto L_8009E044; } // 8009E020
  cmps(c,0,(int32_t)c->r[6],0); // 8009E024
  if (crb(c,2)) { goto L_8009E044; } // 8009E028
  c->r[12]=R32(c->r[6]+0x00000000u); // 8009E02C
  c->r[3]=c->r[6]|c->r[6]; // 8009E030
  c->r[4]=0u+0x00000001u; // 8009E034
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009E038
  c->ctr=c->r[12]; // 8009E03C
  if (true) { c->lr=0x8009E044u; dispatch(c,c->ctr); } // 8009E040
L_8009E044:;
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 8009E044
  cmps(c,0,(int32_t)c->r[3],0); // 8009E048
  if (crb(c,2)) { goto L_8009E064; } // 8009E04C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009E050
  c->r[4]=0u+0x00000001u; // 8009E054
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009E058
  c->ctr=c->r[12]; // 8009E05C
  if (true) { c->lr=0x8009E064u; dispatch(c,c->ctr); } // 8009E060
L_8009E064:;
  c->r[3]=R32(c->r[30]+0x00000104u); // 8009E064
  cmps(c,0,(int32_t)c->r[3],0); // 8009E068
  if (crb(c,2)) { goto L_8009E084; } // 8009E06C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009E070
  c->r[4]=0u+0x00000001u; // 8009E074
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009E078
  c->ctr=c->r[12]; // 8009E07C
  if (true) { c->lr=0x8009E084u; dispatch(c,c->ctr); } // 8009E080
L_8009E084:;
  c->r[3]=R32(c->r[30]+0x00000108u); // 8009E084
  cmps(c,0,(int32_t)c->r[3],0); // 8009E088
  if (crb(c,2)) { goto L_8009E0A4; } // 8009E08C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009E090
  c->r[4]=0u+0x00000001u; // 8009E094
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009E098
  c->ctr=c->r[12]; // 8009E09C
  if (true) { c->lr=0x8009E0A4u; dispatch(c,c->ctr); } // 8009E0A0
L_8009E0A4:;
  c->r[3]=R32(c->r[30]+0x000000BCu); // 8009E0A4
  c->r[4]=0u+0x00000001u; // 8009E0A8
  c->lr=0x8009E0B0u; f_8004F270(c); // 8009E0AC
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009E0B0
  cmps(c,0,(int32_t)c->r[3],0); // 8009E0B4
  if (crb(c,2)) { goto L_8009E0D0; } // 8009E0B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009E0BC
  c->r[4]=0u+0x00000001u; // 8009E0C0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8009E0C4
  c->ctr=c->r[12]; // 8009E0C8
  if (true) { c->lr=0x8009E0D0u; dispatch(c,c->ctr); } // 8009E0CC
L_8009E0D0:;
  c->r[4]=R32(c->r[13]+0xFFFFADD8u); // 8009E0D0
  c->r[5]=addc(c,c->r[30],0x000000F4u,0); cr0(c,c->r[5]); // 8009E0D4
  c->r[3]=R32(c->r[4]+0x0000009Cu); // 8009E0D8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009E0DC
  W32(c->r[4]+0x0000009Cu,c->r[0]); // 8009E0E0
  if (crb(c,2)) { goto L_8009E110; } // 8009E0E4
  if (crb(c,2)) { goto L_8009E110; } // 8009E0E8
  if (crb(c,2)) { goto L_8009E110; } // 8009E0EC
  if (crb(c,2)) { goto L_8009E110; } // 8009E0F0
  c->r[3]=R32(c->r[5]+0x00000000u); // 8009E0F4
  cmps(c,0,(int32_t)c->r[3],0); // 8009E0F8
  if (crb(c,2)) { goto L_8009E110; } // 8009E0FC
  c->r[0]=R32(c->r[5]+0x00000004u); // 8009E100
  c->r[0]=c->r[0]-c->r[0]; // 8009E104
  W32(c->r[5]+0x00000004u,c->r[0]); // 8009E108
  c->lr=0x8009E110u; f_800D93B0(c); // 8009E10C
L_8009E110:;
  c->r[3]=c->r[30]+0x000000A4u; // 8009E110
  c->r[4]=0u+0xFFFFFFFFu; // 8009E114
  c->lr=0x8009E11Cu; f_8004F0A0(c); // 8009E118
  c->r[3]=c->r[30]+0x00000020u; // 8009E11C
  c->r[4]=0u+0x00000000u; // 8009E120
  c->lr=0x8009E128u; f_80047250(c); // 8009E124
  c->r[3]=c->r[30]+0x00000010u; // 8009E128
  c->r[4]=0u+0x00000000u; // 8009E12C
  c->lr=0x8009E134u; f_80008E10(c); // 8009E130
  c->r[3]=c->r[30]|c->r[30]; // 8009E134
  c->r[4]=0u+0x00000000u; // 8009E138
  c->lr=0x8009E140u; f_8000BFD0(c); // 8009E13C
  cmps(c,0,(int32_t)c->r[31],0); // 8009E140
  if (!crb(c,1)) { goto L_8009E150; } // 8009E144
  c->r[3]=c->r[30]|c->r[30]; // 8009E148
  c->lr=0x8009E150u; f_800D93B0(c); // 8009E14C
L_8009E150:;
  c->r[3]=c->r[30]|c->r[30]; // 8009E150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8009E154
  c->r[30]=R32(c->r[1]+0x00000008u); // 8009E158
  c->r[0]=R32(c->r[1]+0x00000014u); // 8009E15C
  c->lr=c->r[0]; // 8009E160
  c->r[1]=c->r[1]+0x00000010u; // 8009E164
  return; // 8009E168
}

// fn_8009E170
void f_8009E170(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFC20u; W32(ea,c->r[1]); c->r[1]=ea;} // 8009E170
  c->r[0]=c->lr; // 8009E174
  W32(c->r[1]+0x000003E4u,c->r[0]); // 8009E178
  c->r[11]=c->r[1]+0x00000350u; // 8009E17C
  {uint32_t ea=c->r[1]+0x000003D0u; WF64(ea,c->f[31]);} // 8009E180
  {uint32_t ea=c->r[1]+0x000003D8u; psq_store(c,31,ea,0,0);} // 8009E184
  {uint32_t ea=c->r[1]+0x000003C0u; WF64(ea,c->f[30]);} // 8009E188
  {uint32_t ea=c->r[1]+0x000003C8u; psq_store(c,30,ea,0,0);} // 8009E18C
  {uint32_t ea=c->r[1]+0x000003B0u; WF64(ea,c->f[29]);} // 8009E190
  {uint32_t ea=c->r[1]+0x000003B8u; psq_store(c,29,ea,0,0);} // 8009E194
  {uint32_t ea=c->r[1]+0x000003A0u; WF64(ea,c->f[28]);} // 8009E198
  {uint32_t ea=c->r[1]+0x000003A8u; psq_store(c,28,ea,0,0);} // 8009E19C
  {uint32_t ea=c->r[1]+0x00000390u; WF64(ea,c->f[27]);} // 8009E1A0
  {uint32_t ea=c->r[1]+0x00000398u; psq_store(c,27,ea,0,0);} // 8009E1A4
  {uint32_t ea=c->r[1]+0x00000380u; WF64(ea,c->f[26]);} // 8009E1A8
  {uint32_t ea=c->r[1]+0x00000388u; psq_store(c,26,ea,0,0);} // 8009E1AC
  {uint32_t ea=c->r[1]+0x00000370u; WF64(ea,c->f[25]);} // 8009E1B0
  {uint32_t ea=c->r[1]+0x00000378u; psq_store(c,25,ea,0,0);} // 8009E1B4
  {uint32_t ea=c->r[1]+0x00000360u; WF64(ea,c->f[24]);} // 8009E1B8
  {uint32_t ea=c->r[1]+0x00000368u; psq_store(c,24,ea,0,0);} // 8009E1BC
  {uint32_t ea=c->r[1]+0x00000350u; WF64(ea,c->f[23]);} // 8009E1C0
  {uint32_t ea=c->r[1]+0x00000358u; psq_store(c,23,ea,0,0);} // 8009E1C4
  c->lr=0x8009E1CCu; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8009E1C8
  c->r[4]=R32(c->r[3]+0x00000104u); // 8009E1CC
  c->r[31]=0u+0x80220000u; // 8009E1D0
  c->r[30]=c->r[3]|c->r[3]; // 8009E1D4
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009E1D8
  c->r[31]=c->r[31]+0xFFFF9D78u; // 8009E1DC
  cmps(c,0,(int32_t)c->r[0],0); // 8009E1E0
  if (!crb(c,2)) { goto L_8009E1FC; } // 8009E1E4
  c->r[12]=R32(c->r[4]+0x00000000u); // 8009E1E8
  c->r[3]=c->r[4]|c->r[4]; // 8009E1EC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8009E1F0
  c->ctr=c->r[12]; // 8009E1F4
  if (true) { c->lr=0x8009E1FCu; dispatch(c,c->ctr); } // 8009E1F8
L_8009E1FC:;
  c->r[3]=R32(c->r[30]+0x00000108u); // 8009E1FC
  c->r[0]=R32(c->r[3]+0x00000008u); // 8009E200
  cmps(c,0,(int32_t)c->r[0],0); // 8009E204
  if (!crb(c,2)) { goto L_8009E21C; } // 8009E208
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009E20C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8009E210
  c->ctr=c->r[12]; // 8009E214
  if (true) { c->lr=0x8009E21Cu; dispatch(c,c->ctr); } // 8009E218
L_8009E21C:;
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 8009E21C
  c->r[0]=R32(c->r[3]+0x00000008u); // 8009E220
  cmps(c,0,(int32_t)c->r[0],0); // 8009E224
  if (!crb(c,2)) { goto L_8009E23C; } // 8009E228
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009E22C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8009E230
  c->ctr=c->r[12]; // 8009E234
  if (true) { c->lr=0x8009E23Cu; dispatch(c,c->ctr); } // 8009E238
L_8009E23C:;
  c->r[0]=R8(c->r[30]+0x00000121u); // 8009E23C
  cmps(c,0,(int32_t)c->r[0],0); // 8009E240
  if (!crb(c,2)) { goto L_8009E3A8; } // 8009E244
  c->r[3]=R32(c->r[30]+0x000000BCu); // 8009E248
  c->r[4]=c->r[1]+0x00000034u; // 8009E24C
  c->r[5]=c->r[1]+0x00000030u; // 8009E250
  c->lr=0x8009E258u; f_8004F390(c); // 8009E254
  c->r[4]=R32(c->r[1]+0x00000030u); // 8009E258
  cmps(c,0,(int32_t)c->r[4],0); // 8009E25C
  if (crb(c,2)) { goto L_8009E3A8; } // 8009E260
  c->r[0]=R32(c->r[30]+0x0000009Cu); // 8009E264
  c->r[3]=c->r[30]+0x000000A4u; // 8009E268
  c->r[0]=c->r[0]-c->r[4]; // 8009E26C
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 8009E270
  c->lr=0x8009E278u; f_8004F0E0(c); // 8009E274
  c->r[0]=R32(c->r[30]+0x0000009Cu); // 8009E278
  cmps(c,0,(int32_t)c->r[0],0); // 8009E27C
  if (crb(c,1)) { goto L_8009E3A8; } // 8009E280
  c->r[15]=0u+0x00000000u; // 8009E284
  c->r[16]=c->r[13]+0xFFFF9E8Cu; // 8009E288
  W32(c->r[1]+0x000001C8u,c->r[15]); // 8009E28C
  c->r[3]=c->r[16]|c->r[16]; // 8009E290
  c->r[17]=c->r[1]+0x000001C8u; // 8009E294
  W32(c->r[1]+0x000001CCu,c->r[15]); // 8009E298
  W32(c->r[1]+0x000001D0u,c->r[15]); // 8009E29C
  c->lr=0x8009E2A4u; f_801D4D44(c); // 8009E2A0
  c->r[18]=c->r[3]|c->r[3]; // 8009E2A4
  c->r[3]=c->r[17]|c->r[17]; // 8009E2A8
  c->r[4]=c->r[18]|c->r[18]; // 8009E2AC
  c->lr=0x8009E2B4u; f_800081B0(c); // 8009E2B0
  c->r[0]=R8(c->r[1]+0x00000014u); // 8009E2B4
  c->r[3]=c->r[17]|c->r[17]; // 8009E2B8
  W8(c->r[1]+0x00000010u,c->r[0]); // 8009E2BC
  c->r[6]=c->r[16]|c->r[16]; // 8009E2C0
  c->r[7]=c->r[16]+c->r[18]; // 8009E2C4
  c->r[8]=c->r[1]+0x00000010u; // 8009E2C8
  c->r[4]=0u+0x00000000u; // 8009E2CC
  c->r[5]=0u+0x00000000u; // 8009E2D0
  c->lr=0x8009E2D8u; f_80008370(c); // 8009E2D4
  c->r[16]=c->r[13]+0xFFFF9E94u; // 8009E2D8
  W32(c->r[1]+0x000001BCu,c->r[15]); // 8009E2DC
  c->r[18]=c->r[1]+0x000001BCu; // 8009E2E0
  W32(c->r[1]+0x000001C0u,c->r[15]); // 8009E2E4
  c->r[3]=c->r[16]|c->r[16]; // 8009E2E8
  W32(c->r[1]+0x000001C4u,c->r[15]); // 8009E2EC
  c->lr=0x8009E2F4u; f_801D4D44(c); // 8009E2F0
  c->r[15]=c->r[3]|c->r[3]; // 8009E2F4
  c->r[3]=c->r[18]|c->r[18]; // 8009E2F8
  c->r[4]=c->r[15]|c->r[15]; // 8009E2FC
  c->lr=0x8009E304u; f_800081B0(c); // 8009E300
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8009E304
  c->r[3]=c->r[18]|c->r[18]; // 8009E308
  W8(c->r[1]+0x00000008u,c->r[0]); // 8009E30C
  c->r[6]=c->r[16]|c->r[16]; // 8009E310
  c->r[7]=c->r[16]+c->r[15]; // 8009E314
  c->r[8]=c->r[1]+0x00000008u; // 8009E318
  c->r[4]=0u+0x00000000u; // 8009E31C
  c->r[5]=0u+0x00000000u; // 8009E320
  c->lr=0x8009E328u; f_80008370(c); // 8009E324
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 8009E328
  c->r[5]=c->r[17]|c->r[17]; // 8009E32C
  c->r[4]=R32(c->r[1]+0x00000034u); // 8009E330
  c->r[6]=c->r[18]|c->r[18]; // 8009E334
  c->lr=0x8009E33Cu; f_80012C00(c); // 8009E338
  c->r[0]=R32(c->r[1]+0x000001BCu); // 8009E33C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009E340
  if (crb(c,2)) { goto L_8009E350; } // 8009E344
  c->r[3]=R32(c->r[1]+0x000001C4u); // 8009E348
  c->lr=0x8009E350u; f_800D93B0(c); // 8009E34C
L_8009E350:;
  c->r[0]=R32(c->r[1]+0x000001C8u); // 8009E350
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8009E354
  if (crb(c,2)) { goto L_8009E364; } // 8009E358
  c->r[3]=R32(c->r[1]+0x000001D0u); // 8009E35C
  c->lr=0x8009E364u; f_800D93B0(c); // 8009E360
L_8009E364:;
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 8009E364
  c->r[0]=0u+0x00000003u; // 8009E368
  W32(c->r[3]+0x00000094u,c->r[0]); // 8009E36C
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 8009E370
  c->lr=0x8009E378u; f_800A8D70(c); // 8009E374
  c->r[15]=0u+0x00000000u; // 8009E378
  W8(c->r[30]+0x00000024u,c->r[15]); // 8009E37C
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009E380
  c->r[4]=c->r[31]+0x00000060u; // 8009E384
  c->r[5]=0u+0x00000000u; // 8009E388
  c->lr=0x8009E390u; f_80100840(c); // 8009E38C
  c->r[3]=0u+0x00000001u; // 8009E390
  c->r[0]=0u+0x00000026u; // 8009E394
  W8(c->r[30]+0x00000121u,c->r[3]); // 8009E398
  W32(c->r[30]+0x000000C0u,c->r[15]); // 8009E39C
  W8(c->r[30]+0x00000120u,c->r[15]); // 8009E3A0
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009E3A4
L_8009E3A8:;
  c->r[0]=R8(c->r[30]+0x00000120u); // 8009E3A8
  cmps(c,0,(int32_t)c->r[0],0); // 8009E3AC
  if (crb(c,2)) { goto L_8009E3CC; } // 8009E3B0
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009E3B4
  c->lr=0x8009E3BCu; f_80101220(c); // 8009E3B8
  cmps(c,0,(int32_t)c->r[3],0); // 8009E3BC
  if (!crb(c,2)) { goto L_8009E3CC; } // 8009E3C0
  c->r[0]=0u+0x00000000u; // 8009E3C4
  W8(c->r[30]+0x00000120u,c->r[0]); // 8009E3C8
L_8009E3CC:;
  c->r[0]=R32(c->r[30]+0x000000C0u); // 8009E3CC
  cmps(c,0,(int32_t)c->r[0],0); // 8009E3D0
  if (!crb(c,2)) { goto L_8009E3F4; } // 8009E3D4
  c->r[0]=R8(c->r[30]+0x00000120u); // 8009E3D8
  cmps(c,0,(int32_t)c->r[0],0); // 8009E3DC
  if (crb(c,2)) { goto L_8009E40C; } // 8009E3E0
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009E3E4
  c->lr=0x8009E3ECu; f_80101220(c); // 8009E3E8
  cmps(c,0,(int32_t)c->r[3],0); // 8009E3EC
  if (crb(c,2)) { goto L_8009E40C; } // 8009E3F0
L_8009E3F4:;
  c->r[3]=R32(c->r[30]+0x000000C0u); // 8009E3F4
  cmps(c,0,(int32_t)c->r[3],0); // 8009E3F8
  if (crb(c,2)) { goto L_800A0F08; } // 8009E3FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8009E400
  W32(c->r[30]+0x000000C0u,c->r[0]); // 8009E404
  goto L_800A0F08; // 8009E408
L_8009E40C:;
  c->r[4]=R32(c->r[30]+0x00000094u); // 8009E40C
  cmpu(c,0,c->r[4],0x0000002Au); // 8009E410
  if (crb(c,1)) { goto L_800A0F08; } // 8009E414
  c->r[3]=0u+0x80220000u; // 8009E418
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8009E41C
  c->r[3]=c->r[3]+0xFFFF9E74u; // 8009E420
  c->r[3]=R32(c->r[3]+c->r[0]); // 8009E424
  c->ctr=c->r[3]; // 8009E428
  if (true) { switch (c->ctr) { case 0x8009E430u: goto L_8009E430; case 0x8009E8B4u: goto L_8009E8B4; case 0x8009EC60u: goto L_8009EC60; case 0x8009ECC0u: goto L_8009ECC0; case 0x8009ECC8u: goto L_8009ECC8; case 0x8009ED34u: goto L_8009ED34; case 0x8009ED40u: goto L_8009ED40; case 0x8009EDDCu: goto L_8009EDDC; case 0x8009EE14u: goto L_8009EE14; case 0x8009EE28u: goto L_8009EE28; case 0x8009EE30u: goto L_8009EE30; case 0x8009EE38u: goto L_8009EE38; case 0x8009EE40u: goto L_8009EE40; case 0x8009EE44u: goto L_8009EE44; case 0x8009EE50u: goto L_8009EE50; case 0x8009EED0u: goto L_8009EED0; case 0x8009EF30u: goto L_8009EF30; case 0x8009EF58u: goto L_8009EF58; case 0x8009EF80u: goto L_8009EF80; case 0x8009EFD4u: goto L_8009EFD4; case 0x8009F314u: goto L_8009F314; case 0x8009F400u: goto L_8009F400; case 0x8009F428u: goto L_8009F428; case 0x8009F450u: goto L_8009F450; case 0x8009F474u: goto L_8009F474; case 0x8009F48Cu: goto L_8009F48C; case 0x8009F760u: goto L_8009F760; case 0x8009F7D8u: goto L_8009F7D8; case 0x8009FA84u: goto L_8009FA84; case 0x8009FB3Cu: goto L_8009FB3C; case 0x8009FD0Cu: goto L_8009FD0C; case 0x8009FDECu: goto L_8009FDEC; case 0x8009FE80u: goto L_8009FE80; case 0x800A0150u: goto L_800A0150; case 0x800A02C8u: goto L_800A02C8; case 0x800A03E0u: goto L_800A03E0; case 0x800A0404u: goto L_800A0404; case 0x800A04DCu: goto L_800A04DC; case 0x800A05C4u: goto L_800A05C4; case 0x800A07ACu: goto L_800A07AC; case 0x800A0A00u: goto L_800A0A00; case 0x800A0BD0u: goto L_800A0BD0; case 0x800A0EFCu: goto L_800A0EFC; case 0x800A0F08u: goto L_800A0F08; default: break; } dispatch(c,c->ctr); return; } // 8009E42C
L_8009E430:;
  c->r[3]=0u+0x0000003Cu; // 8009E430
  c->lr=0x8009E438u; f_800D8ED0(c); // 8009E434
  cmps(c,0,(int32_t)c->r[3],0); // 8009E438
  c->r[4]=c->r[3]|c->r[3]; // 8009E43C
  if (crb(c,2)) { goto L_8009E4D0; } // 8009E440
  {uint32_t ea=c->r[30]+0x00000030u; c->f[6]=c->ps1[6]=RF32(ea);} // 8009E444
  c->r[4]=c->r[30]+0x00000084u; // 8009E448
  {uint32_t ea=c->r[2]+0xFFFFA350u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E44C
  c->r[5]=c->r[1]+0x00000100u; // 8009E450
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E454
  c->r[6]=c->r[1]+0x00000110u; // 8009E458
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[1]); // 8009E45C
  {uint32_t ea=c->r[2]+0xFFFFA34Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009E460
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[6]); // 8009E464
  {uint32_t ea=c->r[2]+0xFFFFA354u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009E468
  {uint32_t ea=c->r[2]+0xFFFFA35Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E46C
  c->r[7]=c->r[1]+0x00000120u; // 8009E470
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[6]);} // 8009E474
  c->r[8]=0u+0x00000190u; // 8009E478
  {uint32_t ea=c->r[2]+0xFFFFA360u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009E47C
  c->r[9]=0u+0x00000001u; // 8009E480
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[3]);} // 8009E484
  c->r[16]=R32(c->r[1]+0x00000118u); // 8009E488
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[5]);} // 8009E48C
  c->r[15]=R32(c->r[1]+0x0000011Cu); // 8009E490
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[2]);} // 8009E494
  c->r[12]=R32(c->r[1]+0x00000108u); // 8009E498
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[4]);} // 8009E49C
  c->r[11]=R32(c->r[1]+0x0000010Cu); // 8009E4A0
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8009E4A4
  c->r[10]=R32(c->r[1]+0x000000F8u); // 8009E4A8
  c->r[0]=R32(c->r[1]+0x000000FCu); // 8009E4AC
  W32(c->r[1]+0x00000120u,c->r[16]); // 8009E4B0
  W32(c->r[1]+0x00000124u,c->r[15]); // 8009E4B4
  W32(c->r[1]+0x00000110u,c->r[12]); // 8009E4B8
  W32(c->r[1]+0x00000114u,c->r[11]); // 8009E4BC
  W32(c->r[1]+0x00000100u,c->r[10]); // 8009E4C0
  W32(c->r[1]+0x00000104u,c->r[0]); // 8009E4C4
  c->lr=0x8009E4CCu; f_8009CB30(c); // 8009E4C8
  c->r[4]=c->r[3]|c->r[3]; // 8009E4CC
L_8009E4D0:;
  c->r[3]=R32(c->r[30]+0x00000104u); // 8009E4D0
  c->lr=0x8009E4D8u; f_800DA000(c); // 8009E4D4
  c->r[4]=c->r[31]+0x00000030u; // 8009E4D8
  c->r[6]=R32(c->r[31]+0x00000030u); // 8009E4DC
  c->r[5]=R32(c->r[4]+0x00000004u); // 8009E4E0
  c->r[3]=0u+0x00000024u; // 8009E4E4
  c->r[0]=R32(c->r[4]+0x00000008u); // 8009E4E8
  W32(c->r[1]+0x000001B0u,c->r[6]); // 8009E4EC
  c->r[15]=R32(c->r[13]+0xFFFFAE34u); // 8009E4F0
  W32(c->r[1]+0x000001B4u,c->r[5]); // 8009E4F4
  W32(c->r[1]+0x000001B8u,c->r[0]); // 8009E4F8
  c->lr=0x8009E500u; f_800D8ED0(c); // 8009E4FC
  cmps(c,0,(int32_t)c->r[3],0); // 8009E500
  if (crb(c,2)) { goto L_8009E544; } // 8009E504
  c->r[0]=0u+0x00000000u; // 8009E508
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009E50C
  c->r[4]=0u+0x80210000u; // 8009E510
  c->r[6]=R32(c->r[1]+0x000001B0u); // 8009E514
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8009E518
  c->r[4]=c->r[4]+0x00002590u; // 8009E51C
  c->r[5]=R32(c->r[1]+0x000001B4u); // 8009E520
  c->r[0]=0u+0x0000000Au; // 8009E524
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009E528
  c->r[4]=R32(c->r[1]+0x000001B8u); // 8009E52C
  W32(c->r[3]+0x00000010u,c->r[15]); // 8009E530
  W32(c->r[3]+0x00000014u,c->r[6]); // 8009E534
  W32(c->r[3]+0x00000018u,c->r[5]); // 8009E538
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8009E53C
  W32(c->r[3]+0x00000020u,c->r[0]); // 8009E540
L_8009E544:;
  c->r[18]=c->r[3]|c->r[3]; // 8009E544
  c->r[3]=0u+0x00000014u; // 8009E548
  c->lr=0x8009E550u; f_800D8ED0(c); // 8009E54C
  cmps(c,0,(int32_t)c->r[3],0); // 8009E550
  if (crb(c,2)) { goto L_8009E578; } // 8009E554
  c->r[0]=0u+0x00000000u; // 8009E558
  W32(c->r[3]+0x00000008u,c->r[0]); // 8009E55C
  c->r[4]=0u+0x80220000u; // 8009E560
  {uint32_t ea=c->r[2]+0xFFFFA364u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009E564
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8009E568
  c->r[4]=c->r[4]+0xFFFFFDA0u; // 8009E56C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009E570
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8009E574
L_8009E578:;
  c->r[16]=c->r[3]|c->r[3]; // 8009E578
  c->r[3]=0u+0x00000030u; // 8009E57C
  c->lr=0x8009E584u; f_800D8ED0(c); // 8009E580
  cmps(c,0,(int32_t)c->r[3],0); // 8009E584
  c->r[17]=c->r[3]|c->r[3]; // 8009E588
  if (crb(c,2)) { goto L_8009E5D8; } // 8009E58C
  c->r[15]=0u+0x00000000u; // 8009E590
  W32(c->r[3]+0x00000008u,c->r[15]); // 8009E594
  c->r[4]=0u+0x80210000u; // 8009E598
  W8(c->r[3]+0x0000000Cu,c->r[15]); // 8009E59C
  c->r[4]=c->r[4]+0xFFFFAEA8u; // 8009E5A0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8009E5A4
  c->r[3]=c->r[3]+0x00000018u; // 8009E5A8
  c->lr=0x8009E5B0u; f_8015C1A0(c); // 8009E5AC
  W8(c->r[17]+0x0000000Du,c->r[15]); // 8009E5B0
  c->r[3]=0u+0x80220000u; // 8009E5B4
  c->r[4]=c->r[17]+0x00000010u; // 8009E5B8
  c->r[0]=0u+0x00000001u; // 8009E5BC
  W8(c->r[17]+0x0000000Fu,c->r[15]); // 8009E5C0
  c->r[3]=c->r[3]+0xFFFFFC04u; // 8009E5C4
  W32(c->r[17]+0x00000010u,c->r[15]); // 8009E5C8
  W32(c->r[17]+0x00000014u,c->r[4]); // 8009E5CC
  W32(c->r[17]+0x00000000u,c->r[3]); // 8009E5D0
  W8(c->r[17]+0x0000000Eu,c->r[0]); // 8009E5D4
L_8009E5D8:;
  c->r[3]=c->r[17]|c->r[17]; // 8009E5D8
  c->r[4]=c->r[16]|c->r[16]; // 8009E5DC
  c->lr=0x8009E5E4u; f_800DA000(c); // 8009E5E0
  c->r[3]=c->r[17]|c->r[17]; // 8009E5E4
  c->r[4]=c->r[18]|c->r[18]; // 8009E5E8
  c->lr=0x8009E5F0u; f_800DA000(c); // 8009E5EC
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 8009E5F0
  c->r[4]=c->r[17]|c->r[17]; // 8009E5F4
  c->lr=0x8009E5FCu; f_800DA000(c); // 8009E5F8
  c->r[3]=0u+0x80250000u; // 8009E5FC
  c->r[4]=0u+0x00000004u; // 8009E600
  c->r[0]=0u+0x00000001u; // 8009E604
  W32(c->r[30]+0x00000094u,c->r[4]); // 8009E608
  c->r[25]=c->r[3]+0xFFFF98E0u; // 8009E60C
  c->r[27]=c->r[1]+0x00000274u; // 8009E610
  W8(c->r[30]+0x00000122u,c->r[0]); // 8009E614
  c->r[15]=0u+0x00000000u; // 8009E618
  c->r[21]=0u+0xCCCD0000u; // 8009E61C
  c->r[26]=0u+0x40000000u; // 8009E620
  c->r[24]=0u+0x00000000u; // 8009E624
  c->r[22]=0u+0x15550000u; // 8009E628
  c->r[20]=0u+0x2AAB0000u; // 8009E62C
  c->r[19]=0u+0x80210000u; // 8009E630
L_8009E634:;
  c->r[4]=R32(c->r[30]+0x000000F8u); // 8009E634
  c->r[3]=R32(c->r[30]+0x000000FCu); // 8009E638
  cmpu(c,0,c->r[4],c->r[3]); // 8009E63C
  if (!crb(c,0)) { goto L_8009E660; } // 8009E640
  c->r[4]=c->r[4]+0x00000001u; // 8009E644
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8009E648
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8009E64C
  W32(c->r[30]+0x000000F8u,c->r[4]); // 8009E650
  c->r[3]=c->r[3]+c->r[0]; // 8009E654
  W32(c->r[3]+0xFFFFFFFCu,c->r[15]); // 8009E658
  goto L_8009E858; // 8009E65C
L_8009E660:;
  c->r[0]=c->r[26]+0xFFFFFFFFu; // 8009E660
  c->r[0]=c->r[0]-c->r[3]; // 8009E664
  cmpu(c,0,c->r[0],0x00000001u); // 8009E668
  if (!crb(c,0)) { goto L_8009E684; } // 8009E66C
  c->r[4]=c->r[31]+0x0000001Cu; // 8009E670
  c->r[3]=c->r[25]+0x000000A0u; // 8009E674
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009E678
  c->lr=0x8009E680u; f_801DB440(c); // 8009E67C
  c->lr=0x8009E684u; f_801DE64C(c); // 8009E680
L_8009E684:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 8009E684
  c->r[4]=c->r[30]+0x000000FCu; // 8009E688
  c->r[23]=R32(c->r[30]+0x000000FCu); // 8009E68C
  c->r[0]=c->r[26]+0xFFFFFFFFu; // 8009E690
  c->r[3]=c->r[3]+0x00000001u; // 8009E694
  W32(c->r[1]+0x00000274u,c->r[24]); // 8009E698
  c->r[3]=c->r[3]-c->r[23]; // 8009E69C
  c->r[0]=c->r[0]-c->r[23]; // 8009E6A0
  cmpu(c,0,c->r[3],c->r[0]); // 8009E6A4
  W32(c->r[1]+0x00000278u,c->r[24]); // 8009E6A8
  W32(c->r[1]+0x0000027Cu,c->r[24]); // 8009E6AC
  W32(c->r[1]+0x00000280u,c->r[4]); // 8009E6B0
  W32(c->r[1]+0x00000284u,c->r[24]); // 8009E6B4
  W32(c->r[1]+0x00000024u,c->r[3]); // 8009E6B8
  if (!crb(c,1)) { goto L_8009E6D4; } // 8009E6BC
  c->r[4]=c->r[31]+0x0000001Cu; // 8009E6C0
  c->r[3]=c->r[25]+0x000000A0u; // 8009E6C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009E6C8
  c->lr=0x8009E6D0u; f_801DB440(c); // 8009E6CC
  c->lr=0x8009E6D4u; f_801DE64C(c); // 8009E6D0
L_8009E6D4:;
  c->r[0]=c->r[22]+0x00005555u; // 8009E6D4
  cmpu(c,0,c->r[23],c->r[0]); // 8009E6D8
  if (!crb(c,0)) { goto L_8009E71C; } // 8009E6DC
  c->r[4]=c->r[23]+0x00000001u; // 8009E6E0
  c->r[5]=c->r[21]+0xFFFFCCCDu; // 8009E6E4
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8009E6E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009E6EC
  c->r[4]=c->r[3]-c->r[4]; // 8009E6F0
  c->r[4]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 8009E6F4
  c->r[3]=c->r[1]+0x0000002Cu; // 8009E6F8
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 8009E6FC
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8009E700
  cmpu(c,0,c->r[4],c->r[0]); // 8009E704
  if (!crb(c,0)) { goto L_8009E710; } // 8009E708
  c->r[3]=c->r[1]+0x00000024u; // 8009E70C
L_8009E710:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009E710
  c->r[23]=c->r[23]+c->r[0]; // 8009E714
  goto L_8009E758; // 8009E718
L_8009E71C:;
  c->r[0]=c->r[20]+0xFFFFAAAAu; // 8009E71C
  cmpu(c,0,c->r[23],c->r[0]); // 8009E720
  if (!crb(c,0)) { goto L_8009E754; } // 8009E724
  c->r[3]=c->r[23]+0x00000001u; // 8009E728
  c->r[0]=R32(c->r[1]+0x00000024u); // 8009E72C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8009E730
  W32(c->r[1]+0x00000028u,c->r[3]); // 8009E734
  cmpu(c,0,c->r[3],c->r[0]); // 8009E738
  c->r[3]=c->r[1]+0x00000028u; // 8009E73C
  if (!crb(c,0)) { goto L_8009E748; } // 8009E740
  c->r[3]=c->r[1]+0x00000024u; // 8009E744
L_8009E748:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009E748
  c->r[23]=c->r[23]+c->r[0]; // 8009E74C
  goto L_8009E758; // 8009E750
L_8009E754:;
  c->r[23]=c->r[26]+0xFFFFFFFFu; // 8009E754
L_8009E758:;
  c->r[0]=c->r[26]+0xFFFFFFFFu; // 8009E758
  cmpu(c,0,c->r[23],c->r[0]); // 8009E75C
  if (!crb(c,1)) { goto L_8009E778; } // 8009E760
  c->r[4]=c->r[31]+0x0000001Cu; // 8009E764
  c->r[3]=c->r[25]+0x000000A0u; // 8009E768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009E76C
  c->lr=0x8009E774u; f_801DB440(c); // 8009E770
  c->lr=0x8009E778u; f_801DE64C(c); // 8009E774
L_8009E778:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 8009E778
  c->lr=0x8009E780u; f_800D8ED0(c); // 8009E77C
  cmps(c,0,(int32_t)c->r[3],0); // 8009E780
  c->r[28]=c->r[3]|c->r[3]; // 8009E784
  if (!crb(c,2)) { goto L_8009E7A0; } // 8009E788
  c->r[3]=c->r[25]+0x000000A0u; // 8009E78C
  c->r[4]=c->r[19]+0xFFFFC7A0u; // 8009E790
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009E794
  c->lr=0x8009E79Cu; f_801DB440(c); // 8009E798
  c->lr=0x8009E7A0u; f_801DE64C(c); // 8009E79C
L_8009E7A0:;
  c->r[5]=R32(c->r[30]+0x000000F8u); // 8009E7A0
  c->r[3]=R32(c->r[1]+0x00000278u); // 8009E7A4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8009E7A8
  W32(c->r[1]+0x0000027Cu,c->r[23]); // 8009E7AC
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8009E7B0
  c->r[3]=c->r[3]+0x00000001u; // 8009E7B4
  c->r[0]=c->r[28]+c->r[0]; // 8009E7B8
  W32(c->r[1]+0x00000278u,c->r[3]); // 8009E7BC
  W32(c->r[4]+c->r[0],c->r[15]); // 8009E7C0
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8009E7C4
  c->r[17]=R32(c->r[30]+0x000000F4u); // 8009E7C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009E7CC
  c->r[0]=c->r[17]+c->r[0]; // 8009E7D0
  c->r[4]=c->r[17]|c->r[17]; // 8009E7D4
  c->r[0]=c->r[0]-c->r[17]; // 8009E7D8
  c->r[0]=sraw(c,c->r[0],2); // 8009E7DC
  c->r[23]=addc(c,c->r[0],0,c->xer_ca); // 8009E7E0
  c->r[0]=c->r[5]-c->r[23]; // 8009E7E4
  W32(c->r[1]+0x00000284u,c->r[0]); // 8009E7E8
  c->r[16]=rotl(c->r[23],2)&0xFFFFFFFCu; // 8009E7EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009E7F0
  c->r[5]=c->r[16]|c->r[16]; // 8009E7F4
  c->r[3]=c->r[28]+c->r[0]; // 8009E7F8
  c->lr=0x8009E800u; f_80004364(c); // 8009E7FC
  c->r[3]=c->r[17]|c->r[17]; // 8009E800
  c->r[5]=c->r[16]|c->r[16]; // 8009E804
  c->r[4]=0u+0x00000000u; // 8009E808
  c->lr=0x8009E810u; f_800046B4(c); // 8009E80C
  c->r[0]=R32(c->r[1]+0x00000278u); // 8009E810
  cmps(c,0,(int32_t)c->r[27],0); // 8009E814
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8009E818
  c->r[5]=c->r[0]+c->r[23]; // 8009E81C
  c->r[0]=c->r[28]|c->r[28]; // 8009E820
  c->r[6]=R32(c->r[30]+0x000000FCu); // 8009E824
  c->r[4]=R32(c->r[1]+0x0000027Cu); // 8009E828
  W32(c->r[30]+0x000000FCu,c->r[4]); // 8009E82C
  W32(c->r[1]+0x0000027Cu,c->r[6]); // 8009E830
  W32(c->r[30]+0x000000F4u,c->r[0]); // 8009E834
  W32(c->r[1]+0x00000274u,c->r[3]); // 8009E838
  W32(c->r[30]+0x000000F8u,c->r[5]); // 8009E83C
  W32(c->r[1]+0x00000278u,c->r[24]); // 8009E840
  if (crb(c,2)) { goto L_8009E858; } // 8009E844
  cmps(c,0,(int32_t)c->r[3],0); // 8009E848
  if (crb(c,2)) { goto L_8009E858; } // 8009E84C
  W32(c->r[1]+0x00000278u,c->r[24]); // 8009E850
  c->lr=0x8009E858u; f_800D93B0(c); // 8009E854
L_8009E858:;
  c->r[15]=c->r[15]+0x00000001u; // 8009E858
  cmps(c,0,(int32_t)c->r[15],4); // 8009E85C
  if (crb(c,0)) { IRQCHK(c); goto L_8009E634; } // 8009E860
  c->r[16]=0u+0x00000001u; // 8009E864
  c->r[15]=0u+0x00000004u; // 8009E868
L_8009E86C:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009E86C
  c->lr=0x8009E874u; f_800FBF40(c); // 8009E870
  c->r[4]=addc(c,~c->r[16],0x00000004u,1); // 8009E874
  c->r[6]=R32(c->r[30]+0x000000F4u); // 8009E878
  c->r[0]=divwu(c->r[3],c->r[4]); // 8009E87C
  c->r[5]=R32(c->r[6]+c->r[15]); // 8009E880
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8009E884
  c->r[0]=c->r[3]-c->r[0]; // 8009E888
  c->r[0]=c->r[16]+c->r[0]; // 8009E88C
  c->r[16]=c->r[16]+0x00000001u; // 8009E890
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009E894
  c->r[0]=R32(c->r[6]+c->r[3]); // 8009E898
  cmps(c,0,(int32_t)c->r[16],4); // 8009E89C
  W32(c->r[6]+c->r[15],c->r[0]); // 8009E8A0
  c->r[15]=c->r[15]+0x00000004u; // 8009E8A4
  W32(c->r[6]+c->r[3],c->r[5]); // 8009E8A8
  if (crb(c,0)) { IRQCHK(c); goto L_8009E86C; } // 8009E8AC
  goto L_800A0F08; // 8009E8B0
L_8009E8B4:;
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8009E8B4
  cmps(c,0,(int32_t)c->r[0],0); // 8009E8B8
  if (!crb(c,2)) { goto L_8009EB84; } // 8009E8BC
  c->r[29]=0u+0x00000000u; // 8009E8C0
  c->r[3]=0u+0x80250000u; // 8009E8C4
  c->r[18]=c->r[1]+0x00000260u; // 8009E8C8
  c->r[24]=0u+0xCCCD0000u; // 8009E8CC
  c->r[21]=c->r[29]|c->r[29]; // 8009E8D0
  c->r[28]=c->r[29]|c->r[29]; // 8009E8D4
  c->r[27]=c->r[29]|c->r[29]; // 8009E8D8
  c->r[20]=c->r[3]+0xFFFF98E0u; // 8009E8DC
  c->r[19]=0u+0x40000000u; // 8009E8E0
  c->r[23]=0u+0x15550000u; // 8009E8E4
  c->r[25]=0u+0x2AAB0000u; // 8009E8E8
  c->r[26]=0u+0x80210000u; // 8009E8EC
L_8009E8F0:;
  c->r[4]=R32(c->r[30]+0x000000F8u); // 8009E8F0
  c->r[3]=R32(c->r[30]+0x000000FCu); // 8009E8F4
  cmpu(c,0,c->r[4],c->r[3]); // 8009E8F8
  if (!crb(c,0)) { goto L_8009E91C; } // 8009E8FC
  c->r[4]=c->r[4]+0x00000001u; // 8009E900
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8009E904
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8009E908
  W32(c->r[30]+0x000000F8u,c->r[4]); // 8009E90C
  c->r[3]=c->r[3]+c->r[0]; // 8009E910
  W32(c->r[3]+0xFFFFFFFCu,c->r[29]); // 8009E914
  goto L_8009EB14; // 8009E918
L_8009E91C:;
  c->r[0]=c->r[19]+0xFFFFFFFFu; // 8009E91C
  c->r[0]=c->r[0]-c->r[3]; // 8009E920
  cmpu(c,0,c->r[0],0x00000001u); // 8009E924
  if (!crb(c,0)) { goto L_8009E940; } // 8009E928
  c->r[4]=c->r[31]+0x0000001Cu; // 8009E92C
  c->r[3]=c->r[20]+0x000000A0u; // 8009E930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009E934
  c->lr=0x8009E93Cu; f_801DB440(c); // 8009E938
  c->lr=0x8009E940u; f_801DE64C(c); // 8009E93C
L_8009E940:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 8009E940
  c->r[4]=c->r[30]+0x000000FCu; // 8009E944
  c->r[22]=R32(c->r[30]+0x000000FCu); // 8009E948
  c->r[0]=c->r[19]+0xFFFFFFFFu; // 8009E94C
  c->r[3]=c->r[3]+0x00000001u; // 8009E950
  W32(c->r[1]+0x00000260u,c->r[21]); // 8009E954
  c->r[3]=c->r[3]-c->r[22]; // 8009E958
  c->r[0]=c->r[0]-c->r[22]; // 8009E95C
  cmpu(c,0,c->r[3],c->r[0]); // 8009E960
  W32(c->r[1]+0x00000264u,c->r[21]); // 8009E964
  W32(c->r[1]+0x00000268u,c->r[21]); // 8009E968
  W32(c->r[1]+0x0000026Cu,c->r[4]); // 8009E96C
  W32(c->r[1]+0x00000270u,c->r[21]); // 8009E970
  W32(c->r[1]+0x00000018u,c->r[3]); // 8009E974
  if (!crb(c,1)) { goto L_8009E990; } // 8009E978
  c->r[4]=c->r[31]+0x0000001Cu; // 8009E97C
  c->r[3]=c->r[20]+0x000000A0u; // 8009E980
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009E984
  c->lr=0x8009E98Cu; f_801DB440(c); // 8009E988
  c->lr=0x8009E990u; f_801DE64C(c); // 8009E98C
L_8009E990:;
  c->r[0]=c->r[23]+0x00005555u; // 8009E990
  cmpu(c,0,c->r[22],c->r[0]); // 8009E994
  if (!crb(c,0)) { goto L_8009E9D8; } // 8009E998
  c->r[4]=c->r[22]+0x00000001u; // 8009E99C
  c->r[5]=c->r[24]+0xFFFFCCCDu; // 8009E9A0
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8009E9A4
  c->r[0]=R32(c->r[1]+0x00000018u); // 8009E9A8
  c->r[4]=c->r[3]-c->r[4]; // 8009E9AC
  c->r[4]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 8009E9B0
  c->r[3]=c->r[1]+0x00000020u; // 8009E9B4
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 8009E9B8
  W32(c->r[1]+0x00000020u,c->r[4]); // 8009E9BC
  cmpu(c,0,c->r[4],c->r[0]); // 8009E9C0
  if (!crb(c,0)) { goto L_8009E9CC; } // 8009E9C4
  c->r[3]=c->r[1]+0x00000018u; // 8009E9C8
L_8009E9CC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009E9CC
  c->r[22]=c->r[22]+c->r[0]; // 8009E9D0
  goto L_8009EA14; // 8009E9D4
L_8009E9D8:;
  c->r[0]=c->r[25]+0xFFFFAAAAu; // 8009E9D8
  cmpu(c,0,c->r[22],c->r[0]); // 8009E9DC
  if (!crb(c,0)) { goto L_8009EA10; } // 8009E9E0
  c->r[3]=c->r[22]+0x00000001u; // 8009E9E4
  c->r[0]=R32(c->r[1]+0x00000018u); // 8009E9E8
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8009E9EC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8009E9F0
  cmpu(c,0,c->r[3],c->r[0]); // 8009E9F4
  c->r[3]=c->r[1]+0x0000001Cu; // 8009E9F8
  if (!crb(c,0)) { goto L_8009EA04; } // 8009E9FC
  c->r[3]=c->r[1]+0x00000018u; // 8009EA00
L_8009EA04:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009EA04
  c->r[22]=c->r[22]+c->r[0]; // 8009EA08
  goto L_8009EA14; // 8009EA0C
L_8009EA10:;
  c->r[22]=c->r[19]+0xFFFFFFFFu; // 8009EA10
L_8009EA14:;
  c->r[0]=c->r[19]+0xFFFFFFFFu; // 8009EA14
  cmpu(c,0,c->r[22],c->r[0]); // 8009EA18
  if (!crb(c,1)) { goto L_8009EA34; } // 8009EA1C
  c->r[4]=c->r[31]+0x0000001Cu; // 8009EA20
  c->r[3]=c->r[20]+0x000000A0u; // 8009EA24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009EA28
  c->lr=0x8009EA30u; f_801DB440(c); // 8009EA2C
  c->lr=0x8009EA34u; f_801DE64C(c); // 8009EA30
L_8009EA34:;
  c->r[3]=rotl(c->r[22],2)&0xFFFFFFFCu; // 8009EA34
  c->lr=0x8009EA3Cu; f_800D8ED0(c); // 8009EA38
  cmps(c,0,(int32_t)c->r[3],0); // 8009EA3C
  c->r[17]=c->r[3]|c->r[3]; // 8009EA40
  if (!crb(c,2)) { goto L_8009EA5C; } // 8009EA44
  c->r[3]=c->r[20]+0x000000A0u; // 8009EA48
  c->r[4]=c->r[26]+0xFFFFC7A0u; // 8009EA4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8009EA50
  c->lr=0x8009EA58u; f_801DB440(c); // 8009EA54
  c->lr=0x8009EA5Cu; f_801DE64C(c); // 8009EA58
L_8009EA5C:;
  c->r[5]=R32(c->r[30]+0x000000F8u); // 8009EA5C
  c->r[3]=R32(c->r[1]+0x00000264u); // 8009EA60
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8009EA64
  W32(c->r[1]+0x00000268u,c->r[22]); // 8009EA68
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8009EA6C
  c->r[3]=c->r[3]+0x00000001u; // 8009EA70
  c->r[0]=c->r[17]+c->r[0]; // 8009EA74
  W32(c->r[1]+0x00000264u,c->r[3]); // 8009EA78
  W32(c->r[4]+c->r[0],c->r[29]); // 8009EA7C
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8009EA80
  c->r[16]=R32(c->r[30]+0x000000F4u); // 8009EA84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009EA88
  c->r[0]=c->r[16]+c->r[0]; // 8009EA8C
  c->r[4]=c->r[16]|c->r[16]; // 8009EA90
  c->r[0]=c->r[0]-c->r[16]; // 8009EA94
  c->r[0]=sraw(c,c->r[0],2); // 8009EA98
  c->r[22]=addc(c,c->r[0],0,c->xer_ca); // 8009EA9C
  c->r[0]=c->r[5]-c->r[22]; // 8009EAA0
  W32(c->r[1]+0x00000270u,c->r[0]); // 8009EAA4
  c->r[15]=rotl(c->r[22],2)&0xFFFFFFFCu; // 8009EAA8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009EAAC
  c->r[5]=c->r[15]|c->r[15]; // 8009EAB0
  c->r[3]=c->r[17]+c->r[0]; // 8009EAB4
  c->lr=0x8009EABCu; f_80004364(c); // 8009EAB8
  c->r[3]=c->r[16]|c->r[16]; // 8009EABC
  c->r[5]=c->r[15]|c->r[15]; // 8009EAC0
  c->r[4]=0u+0x00000000u; // 8009EAC4
  c->lr=0x8009EACCu; f_800046B4(c); // 8009EAC8
  c->r[0]=R32(c->r[1]+0x00000264u); // 8009EACC
  cmps(c,0,(int32_t)c->r[18],0); // 8009EAD0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8009EAD4
  c->r[5]=c->r[0]+c->r[22]; // 8009EAD8
  c->r[0]=c->r[17]|c->r[17]; // 8009EADC
  c->r[6]=R32(c->r[30]+0x000000FCu); // 8009EAE0
  c->r[4]=R32(c->r[1]+0x00000268u); // 8009EAE4
  W32(c->r[30]+0x000000FCu,c->r[4]); // 8009EAE8
  W32(c->r[1]+0x00000268u,c->r[6]); // 8009EAEC
  W32(c->r[30]+0x000000F4u,c->r[0]); // 8009EAF0
  W32(c->r[1]+0x00000260u,c->r[3]); // 8009EAF4
  W32(c->r[30]+0x000000F8u,c->r[5]); // 8009EAF8
  W32(c->r[1]+0x00000264u,c->r[27]); // 8009EAFC
  if (crb(c,2)) { goto L_8009EB14; } // 8009EB00
  cmps(c,0,(int32_t)c->r[3],0); // 8009EB04
  if (crb(c,2)) { goto L_8009EB14; } // 8009EB08
  W32(c->r[1]+0x00000264u,c->r[28]); // 8009EB0C
  c->lr=0x8009EB14u; f_800D93B0(c); // 8009EB10
L_8009EB14:;
  c->r[29]=c->r[29]+0x00000001u; // 8009EB14
  cmps(c,0,(int32_t)c->r[29],4); // 8009EB18
  if (crb(c,0)) { IRQCHK(c); goto L_8009E8F0; } // 8009EB1C
L_8009EB20:;
  c->r[16]=0u+0x00000000u; // 8009EB20
  c->r[15]=0u+0x00000000u; // 8009EB24
L_8009EB28:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009EB28
  c->lr=0x8009EB30u; f_800FBF40(c); // 8009EB2C
  c->r[4]=addc(c,~c->r[16],0x00000004u,1); // 8009EB30
  c->r[6]=R32(c->r[30]+0x000000F4u); // 8009EB34
  c->r[0]=divwu(c->r[3],c->r[4]); // 8009EB38
  c->r[5]=R32(c->r[6]+c->r[15]); // 8009EB3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 8009EB40
  c->r[0]=c->r[3]-c->r[0]; // 8009EB44
  c->r[0]=c->r[16]+c->r[0]; // 8009EB48
  c->r[16]=c->r[16]+0x00000001u; // 8009EB4C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009EB50
  c->r[0]=R32(c->r[6]+c->r[3]); // 8009EB54
  cmps(c,0,(int32_t)c->r[16],4); // 8009EB58
  W32(c->r[6]+c->r[15],c->r[0]); // 8009EB5C
  c->r[15]=c->r[15]+0x00000004u; // 8009EB60
  W32(c->r[6]+c->r[3],c->r[5]); // 8009EB64
  if (crb(c,0)) { IRQCHK(c); goto L_8009EB28; } // 8009EB68
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8009EB6C
  c->r[4]=R32(c->r[30]+0x00000100u); // 8009EB70
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009EB74
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8009EB78
  if (crb(c,2)) { IRQCHK(c); goto L_8009EB20; } // 8009EB7C
  goto L_800A0F08; // 8009EB80
L_8009EB84:;
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8009EB84
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8009EB88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009EB8C
  c->r[0]=c->r[3]+c->r[0]; // 8009EB90
  c->r[15]=R32(c->r[3]+0x00000000u); // 8009EB94
  c->r[0]=c->r[0]-c->r[3]; // 8009EB98
  c->r[4]=c->r[3]+0x00000004u; // 8009EB9C
  c->r[0]=sraw(c,c->r[0],2); // 8009EBA0
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 8009EBA4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8009EBA8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009EBAC
  c->lr=0x8009EBB4u; f_801D8E54(c); // 8009EBB0
  c->r[11]=0u+0x801F0000u; // 8009EBB4
  {uint32_t ea=c->r[11]+0xFFFFB370u; c->r[3]=R32(ea); c->r[11]=ea;} // 8009EBB8
  c->r[4]=R32(c->r[30]+0x000000F8u); // 8009EBBC
  c->r[16]=rotl(c->r[15],3)&0xFFFFFFF8u; // 8009EBC0
  c->r[10]=R32(c->r[11]+0x00000004u); // 8009EBC4
  c->r[9]=R32(c->r[11]+0x00000008u); // 8009EBC8
  c->r[12]=c->r[4]+0xFFFFFFFFu; // 8009EBCC
  c->r[8]=R32(c->r[11]+0x0000000Cu); // 8009EBD0
  c->r[4]=c->r[1]+0x000002E0u; // 8009EBD4
  c->r[7]=R32(c->r[11]+0x00000010u); // 8009EBD8
  c->r[6]=R32(c->r[11]+0x00000014u); // 8009EBDC
  c->r[5]=R32(c->r[11]+0x00000018u); // 8009EBE0
  c->r[0]=R32(c->r[11]+0x0000001Cu); // 8009EBE4
  W32(c->r[1]+0x000002E0u,c->r[3]); // 8009EBE8
  c->r[3]=R32(c->r[30]+0x00000118u); // 8009EBEC
  W32(c->r[1]+0x000002E4u,c->r[10]); // 8009EBF0
  W32(c->r[1]+0x000002E8u,c->r[9]); // 8009EBF4
  W32(c->r[1]+0x000002ECu,c->r[8]); // 8009EBF8
  W32(c->r[1]+0x000002F0u,c->r[7]); // 8009EBFC
  W32(c->r[1]+0x000002F4u,c->r[6]); // 8009EC00
  W32(c->r[1]+0x000002F8u,c->r[5]); // 8009EC04
  W32(c->r[1]+0x000002FCu,c->r[0]); // 8009EC08
  c->r[0]=R32(c->r[4]+c->r[16]); // 8009EC0C
  W32(c->r[30]+0x000000F8u,c->r[12]); // 8009EC10
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009EC14
  c->r[3]=R32(c->r[3]+0x00000010u); // 8009EC18
  cmps(c,0,(int32_t)c->r[3],0); // 8009EC1C
  if (crb(c,2)) { goto L_8009EC38; } // 8009EC20
  c->r[4]=c->r[1]+0x000002E4u; // 8009EC24
  c->r[5]=0u+0x00000001u; // 8009EC28
  {uint32_t ea=c->r[4]+c->r[16]; c->f[1]=c->ps1[1]=RF32(ea);} // 8009EC2C
  c->r[4]=0u+0x00000008u; // 8009EC30
  c->lr=0x8009EC38u; f_80044740(c); // 8009EC34
L_8009EC38:;
  c->r[0]=R8(c->r[30]+0x00000122u); // 8009EC38
  c->r[3]=0u+0x0000003Cu; // 8009EC3C
  W32(c->r[30]+0x000000C0u,c->r[3]); // 8009EC40
  cmps(c,0,(int32_t)c->r[0],0); // 8009EC44
  if (crb(c,2)) { goto L_8009EC58; } // 8009EC48
  c->r[0]=0u+0x00000000u; // 8009EC4C
  W32(c->r[30]+0x000000C0u,c->r[0]); // 8009EC50
  W8(c->r[30]+0x00000122u,c->r[0]); // 8009EC54
L_8009EC58:;
  W32(c->r[30]+0x00000100u,c->r[15]); // 8009EC58
  goto L_800A0F08; // 8009EC5C
L_8009EC60:;
  {uint32_t ea=c->r[2]+0xFFFFA368u; c->f[27]=c->ps1[27]=RF32(ea);} // 8009EC60
  c->r[29]=0u+0x00000000u; // 8009EC64
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[26]=c->ps1[26]=RF32(ea);} // 8009EC68
  c->r[20]=0u+0x43300000u; // 8009EC6C
  {uint32_t ea=c->r[2]+0xFFFFA36Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 8009EC70
  c->r[16]=0u+0x0000001Cu; // 8009EC74
  {uint32_t ea=c->r[2]+0xFFFFA428u; c->f[24]=RF64(ea);} // 8009EC78
  c->r[17]=0u+0x00000016u; // 8009EC7C
  c->r[18]=0u+0x00000012u; // 8009EC80
  c->r[19]=0u+0x00000007u; // 8009EC84
  c->r[21]=0u+0x00000004u; // 8009EC88
  c->r[28]=0u+0x80220000u; // 8009EC8C
L_8009EC90:;
  c->r[4]=R32(c->r[30]+0x00000114u); // 8009EC90
  c->r[15]=0u+0x00000000u; // 8009EC94
  c->r[0]=c->r[4]+0x00000008u; // 8009EC98
  W32(c->r[30]+0x00000114u,c->r[0]); // 8009EC9C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8009ECA0
  cmpu(c,0,c->r[0],0x0000000Au); // 8009ECA4
  if (crb(c,1)) { goto L_8009EE44; } // 8009ECA8
  c->r[3]=c->r[28]+0xFFFF9E48u; // 8009ECAC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009ECB0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8009ECB4
  c->ctr=c->r[3]; // 8009ECB8
  if (true) { switch (c->ctr) { case 0x8009E430u: goto L_8009E430; case 0x8009E8B4u: goto L_8009E8B4; case 0x8009EC60u: goto L_8009EC60; case 0x8009ECC0u: goto L_8009ECC0; case 0x8009ECC8u: goto L_8009ECC8; case 0x8009ED34u: goto L_8009ED34; case 0x8009ED40u: goto L_8009ED40; case 0x8009EDDCu: goto L_8009EDDC; case 0x8009EE14u: goto L_8009EE14; case 0x8009EE28u: goto L_8009EE28; case 0x8009EE30u: goto L_8009EE30; case 0x8009EE38u: goto L_8009EE38; case 0x8009EE40u: goto L_8009EE40; case 0x8009EE44u: goto L_8009EE44; case 0x8009EE50u: goto L_8009EE50; case 0x8009EED0u: goto L_8009EED0; case 0x8009EF30u: goto L_8009EF30; case 0x8009EF58u: goto L_8009EF58; case 0x8009EF80u: goto L_8009EF80; case 0x8009EFD4u: goto L_8009EFD4; case 0x8009F314u: goto L_8009F314; case 0x8009F400u: goto L_8009F400; case 0x8009F428u: goto L_8009F428; case 0x8009F450u: goto L_8009F450; case 0x8009F474u: goto L_8009F474; case 0x8009F48Cu: goto L_8009F48C; case 0x8009F760u: goto L_8009F760; case 0x8009F7D8u: goto L_8009F7D8; case 0x8009FA84u: goto L_8009FA84; case 0x8009FB3Cu: goto L_8009FB3C; case 0x8009FD0Cu: goto L_8009FD0C; case 0x8009FDECu: goto L_8009FDEC; case 0x8009FE80u: goto L_8009FE80; case 0x800A0150u: goto L_800A0150; case 0x800A02C8u: goto L_800A02C8; case 0x800A03E0u: goto L_800A03E0; case 0x800A0404u: goto L_800A0404; case 0x800A04DCu: goto L_800A04DC; case 0x800A05C4u: goto L_800A05C4; case 0x800A07ACu: goto L_800A07AC; case 0x800A0A00u: goto L_800A0A00; case 0x800A0BD0u: goto L_800A0BD0; case 0x800A0EFCu: goto L_800A0EFC; case 0x800A0F08u: goto L_800A0F08; default: break; } dispatch(c,c->ctr); return; } // 8009ECBC
L_8009ECC0:;
  c->r[15]=0u+0x00000001u; // 8009ECC0
  goto L_8009EE44; // 8009ECC4
L_8009ECC8:;
  c->r[7]=R32(c->r[30]+0x00000110u); // 8009ECC8
  c->r[9]=0u+0x00000000u; // 8009ECCC
  W32(c->r[30]+0x00000114u,c->r[29]); // 8009ECD0
  c->r[5]=0u+0x00000000u; // 8009ECD4
  c->r[6]=c->r[7]|c->r[7]; // 8009ECD8
  goto L_8009ED20; // 8009ECDC
L_8009ECE0:;
  c->r[0]=R32(c->r[7]+c->r[5]); // 8009ECE0
  c->r[8]=c->r[7]+c->r[5]; // 8009ECE4
  cmpu(c,0,c->r[0],0x00000001u); // 8009ECE8
  if (!crb(c,2)) { goto L_8009ED14; } // 8009ECEC
  c->r[3]=R32(c->r[4]+0x00000004u); // 8009ECF0
  c->r[0]=R32(c->r[8]+0x00000004u); // 8009ECF4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8009ECF8
  if (!crb(c,2)) { goto L_8009ED14; } // 8009ECFC
  c->r[0]=rotl(c->r[9],3)&0xFFFFFFF8u; // 8009ED00
  c->r[3]=c->r[7]+c->r[0]; // 8009ED04
  c->r[0]=c->r[3]+0x00000008u; // 8009ED08
  W32(c->r[30]+0x00000114u,c->r[0]); // 8009ED0C
  goto L_8009ED2C; // 8009ED10
L_8009ED14:;
  c->r[5]=c->r[5]+0x00000008u; // 8009ED14
  c->r[6]=c->r[6]+0x00000008u; // 8009ED18
  c->r[9]=c->r[9]+0x00000001u; // 8009ED1C
L_8009ED20:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 8009ED20
  cmps(c,0,(int32_t)c->r[0],0); // 8009ED24
  if (!crb(c,2)) { IRQCHK(c); goto L_8009ECE0; } // 8009ED28
L_8009ED2C:;
  c->r[15]=0u+0x00000001u; // 8009ED2C
  goto L_8009EE44; // 8009ED30
L_8009ED34:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009ED34
  W32(c->r[30]+0x000000C0u,c->r[0]); // 8009ED38
  goto L_8009EE44; // 8009ED3C
L_8009ED40:;
  c->r[3]=0u+0x0000003Cu; // 8009ED40
  c->lr=0x8009ED48u; f_800D8ED0(c); // 8009ED44
  cmps(c,0,(int32_t)c->r[3],0); // 8009ED48
  c->r[4]=c->r[3]|c->r[3]; // 8009ED4C
  if (crb(c,2)) { goto L_8009EDCC; } // 8009ED50
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009ED54
  c->r[4]=c->r[30]+0x00000084u; // 8009ED58
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[2]);} // 8009ED5C
  c->r[5]=c->r[1]+0x000000D0u; // 8009ED60
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[26]); // 8009ED64
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009ED68
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[27]);} // 8009ED6C
  c->r[6]=c->r[1]+0x000000E0u; // 8009ED70
  c->r[10]=R32(c->r[1]+0x000000E8u); // 8009ED74
  c->r[7]=c->r[1]+0x000000F0u; // 8009ED78
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 8009ED7C
  c->r[8]=0u+0x00000040u; // 8009ED80
  c->r[12]=R32(c->r[1]+0x000000ECu); // 8009ED84
  c->r[9]=0u+0x00000001u; // 8009ED88
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[25]);} // 8009ED8C
  c->r[11]=R32(c->r[1]+0x000000D8u); // 8009ED90
  c->r[0]=R32(c->r[1]+0x000000DCu); // 8009ED94
  W32(c->r[1]+0x000000F0u,c->r[10]); // 8009ED98
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[2]);} // 8009ED9C
  W32(c->r[1]+0x000000F4u,c->r[12]); // 8009EDA0
  c->r[10]=R32(c->r[1]+0x000000C8u); // 8009EDA4
  W32(c->r[1]+0x000000E0u,c->r[11]); // 8009EDA8
  W32(c->r[1]+0x000000E4u,c->r[0]); // 8009EDAC
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009EDB0
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 8009EDB4
  c->r[0]=R32(c->r[1]+0x000000CCu); // 8009EDB8
  W32(c->r[1]+0x000000D0u,c->r[10]); // 8009EDBC
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8009EDC0
  c->lr=0x8009EDC8u; f_8009CB30(c); // 8009EDC4
  c->r[4]=c->r[3]|c->r[3]; // 8009EDC8
L_8009EDCC:;
  c->r[3]=R32(c->r[30]+0x00000104u); // 8009EDCC
  c->lr=0x8009EDD4u; f_800DA000(c); // 8009EDD0
  W32(c->r[30]+0x00000094u,c->r[21]); // 8009EDD4
  goto L_8009EE44; // 8009EDD8
L_8009EDDC:;
  c->r[3]=R32(c->r[30]+0x00000118u); // 8009EDDC
  c->r[3]=R32(c->r[3]+0x00000010u); // 8009EDE0
  cmps(c,0,(int32_t)c->r[3],0); // 8009EDE4
  if (crb(c,2)) { goto L_8009EE44; } // 8009EDE8
  c->r[0]=R32(c->r[4]+0x00000004u); // 8009EDEC
  c->r[4]=0u+0x00000008u; // 8009EDF0
  W32(c->r[1]+0x00000300u,c->r[20]); // 8009EDF4
  c->r[5]=0u+0x00000001u; // 8009EDF8
  c->r[0]=c->r[0]^0x80000000u; // 8009EDFC
  W32(c->r[1]+0x00000304u,c->r[0]); // 8009EE00
  {uint32_t ea=c->r[1]+0x00000300u; c->f[0]=RF64(ea);} // 8009EE04
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[24]); // 8009EE08
  c->lr=0x8009EE10u; f_80044740(c); // 8009EE0C
  goto L_8009EE44; // 8009EE10
L_8009EE14:;
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 8009EE14
  c->r[4]=R32(c->r[4]+0x00000004u); // 8009EE18
  c->lr=0x8009EE20u; f_800A8BE0(c); // 8009EE1C
  c->r[15]=0u+0x00000001u; // 8009EE20
  goto L_8009EE44; // 8009EE24
L_8009EE28:;
  W32(c->r[30]+0x00000094u,c->r[19]); // 8009EE28
  goto L_8009EE44; // 8009EE2C
L_8009EE30:;
  W32(c->r[30]+0x00000094u,c->r[18]); // 8009EE30
  goto L_8009EE44; // 8009EE34
L_8009EE38:;
  W32(c->r[30]+0x00000094u,c->r[17]); // 8009EE38
  goto L_8009EE44; // 8009EE3C
L_8009EE40:;
  W32(c->r[30]+0x00000094u,c->r[16]); // 8009EE40
L_8009EE44:;
  cmps(c,0,(int32_t)c->r[15],0); // 8009EE44
  if (!crb(c,2)) { IRQCHK(c); goto L_8009EC90; } // 8009EE48
  goto L_800A0F08; // 8009EE4C
L_8009EE50:;
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009EE50
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009EE54
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009EE58
  c->r[16]=R32(c->r[30]+0x00000104u); // 8009EE5C
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 8009EE60
  c->r[17]=c->r[16]+0x00000018u; // 8009EE64
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[2]);} // 8009EE68
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 8009EE6C
  c->r[15]=R8(c->r[16]+0x0000000Fu); // 8009EE70
  cmps(c,0,(int32_t)c->r[15],0); // 8009EE74
  if (crb(c,2)) { goto L_8009EE84; } // 8009EE78
  c->r[3]=c->r[17]|c->r[17]; // 8009EE7C
  c->lr=0x8009EE84u; f_8015C1E0(c); // 8009EE80
L_8009EE84:;
  c->r[0]=R32(c->r[16]+0x00000010u); // 8009EE84
  cmps(c,0,(int32_t)c->r[15],0); // 8009EE88
  c->r[0]=cntlz(c->r[0]); // 8009EE8C
  c->r[15]=rotl(c->r[0],27)&0x07FFFFFFu; // 8009EE90
  if (crb(c,2)) { goto L_8009EEA0; } // 8009EE94
  c->r[3]=c->r[17]|c->r[17]; // 8009EE98
  c->lr=0x8009EEA0u; f_8015C2C0(c); // 8009EE9C
L_8009EEA0:;
  cmps(c,0,(int32_t)c->r[15],0); // 8009EEA0
  if (crb(c,2)) { goto L_800A0F08; } // 8009EEA4
  c->r[3]=R32(c->r[30]+0x00000118u); // 8009EEA8
  c->r[4]=0u+0x00000001u; // 8009EEAC
  c->r[0]=0u+0x00000000u; // 8009EEB0
  W8(c->r[3]+0x0000004Eu,c->r[4]); // 8009EEB4
  c->r[3]=R32(c->r[30]+0x000000BCu); // 8009EEB8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8009EEBC
  W8(c->r[30]+0x00000120u,c->r[0]); // 8009EEC0
  W32(c->r[30]+0x000000C0u,c->r[0]); // 8009EEC4
  W32(c->r[30]+0x00000094u,c->r[4]); // 8009EEC8
  goto L_800A0F08; // 8009EECC
L_8009EED0:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009EED0
  c->lr=0x8009EED8u; f_800FBF40(c); // 8009EED4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8009EED8
  c->r[3]=0u+0x80210000u; // 8009EEDC
  c->r[3]=c->r[3]+0xFFFFAFB8u; // 8009EEE0
  c->r[6]=c->r[3]+0x00000014u; // 8009EEE4
  if (crb(c,2)) { goto L_8009EEF0; } // 8009EEE8
  c->r[6]=c->r[3]+0x00000008u; // 8009EEEC
L_8009EEF0:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009EEF0
  c->r[4]=c->r[13]+0xFFFF9E9Cu; // 8009EEF4
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 8009EEF8
  c->r[5]=0u+0x00000000u; // 8009EEFC
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009EF00
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009EF04
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 8009EF08
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009EF0C
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 8009EF10
  c->lr=0x8009EF18u; f_80100840(c); // 8009EF14
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009EF18
  c->r[0]=0u+0x00000001u; // 8009EF1C
  W8(c->r[30]+0x00000120u,c->r[0]); // 8009EF20
  c->r[0]=c->r[3]+0x00000001u; // 8009EF24
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009EF28
  goto L_800A0F08; // 8009EF2C
L_8009EF30:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009EF30
  c->r[4]=c->r[31]+0x0000006Cu; // 8009EF34
  c->r[5]=0u+0x00000000u; // 8009EF38
  c->lr=0x8009EF40u; f_80100840(c); // 8009EF3C
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009EF40
  c->r[0]=0u+0x00000001u; // 8009EF44
  W8(c->r[30]+0x00000120u,c->r[0]); // 8009EF48
  c->r[0]=c->r[3]+0x00000001u; // 8009EF4C
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009EF50
  goto L_800A0F08; // 8009EF54
L_8009EF58:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009EF58
  c->r[4]=c->r[31]+0x00000078u; // 8009EF5C
  c->r[5]=0u+0x00000000u; // 8009EF60
  c->lr=0x8009EF68u; f_80100840(c); // 8009EF64
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009EF68
  c->r[0]=0u+0x0000000Fu; // 8009EF6C
  W32(c->r[30]+0x000000C0u,c->r[0]); // 8009EF70
  c->r[0]=c->r[3]+0x00000001u; // 8009EF74
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009EF78
  goto L_800A0F08; // 8009EF7C
L_8009EF80:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009EF80
  c->r[4]=c->r[31]+0x00000088u; // 8009EF84
  c->r[5]=0u+0x00000000u; // 8009EF88
  c->lr=0x8009EF90u; f_80100840(c); // 8009EF8C
  c->r[3]=0u+0x0000012Cu; // 8009EF90
  c->r[0]=0u+0x00000000u; // 8009EF94
  W32(c->r[30]+0x000000C8u,c->r[3]); // 8009EF98
  W32(c->r[30]+0x000000CCu,c->r[0]); // 8009EF9C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009EFA0
  c->lr=0x8009EFA8u; f_800FC0C0(c); // 8009EFA4
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009EFA8
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009EFAC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8009EFB0
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009EFB4
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 8009EFB8
  c->r[0]=c->r[3]+0x00000001u; // 8009EFBC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009EFC0
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 8009EFC4
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 8009EFC8
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009EFCC
  goto L_800A0F08; // 8009EFD0
L_8009EFD4:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 8009EFD4
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8009EFD8
  W32(c->r[30]+0x000000C8u,c->r[0]); // 8009EFDC
  if (crb(c,1)) { goto L_8009F044; } // 8009EFE0
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 8009EFE4
  c->r[4]=0u+0x00000000u; // 8009EFE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8009EFEC
  c->r[12]=R32(c->r[12]+0x00000018u); // 8009EFF0
  c->ctr=c->r[12]; // 8009EFF4
  if (true) { c->lr=0x8009EFFCu; dispatch(c,c->ctr); } // 8009EFF8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009EFFC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F000
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F004
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009F008
  fcmp(c,0,c->f[1],c->f[0]); // 8009F00C
  if (!crb(c,0)) { goto L_8009F018; } // 8009F010
  c->f[1]=-c->f[1]; // 8009F014
L_8009F018:;
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F018
  fcmp(c,0,c->f[1],c->f[0]); // 8009F01C
  if (!crb(c,0)) { goto L_8009F044; } // 8009F020
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009F024
  c->r[4]=c->r[31]+0x00000078u; // 8009F028
  c->r[5]=0u+0x00000000u; // 8009F02C
  c->lr=0x8009F034u; f_80100840(c); // 8009F030
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009F034
  c->r[0]=c->r[3]+0x00000001u; // 8009F038
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F03C
  goto L_800A0F08; // 8009F040
L_8009F044:;
  {uint32_t ea=c->r[2]+0xFFFFA378u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F044
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F048
  {uint32_t ea=c->r[30]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F04C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[0]); // 8009F050
  fcmp(c,0,c->f[2],c->f[3]); // 8009F054
  if (crb(c,2)) { goto L_8009F0A8; } // 8009F058
  fcmp(c,0,c->f[2],c->f[3]); // 8009F05C
  if (!crb(c,1)) { goto L_8009F088; } // 8009F060
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009F064
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F068
  fcmp(c,0,c->f[1],c->f[0]); // 8009F06C
  if (!crb(c,1)) { goto L_8009F080; } // 8009F070
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8009F074
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8009F078
  goto L_8009F0A8; // 8009F07C
L_8009F080:;
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[3]);} // 8009F080
  goto L_8009F0A8; // 8009F084
L_8009F088:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009F088
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F08C
  fcmp(c,0,c->f[1],c->f[0]); // 8009F090
  if (!crb(c,1)) { goto L_8009F0A4; } // 8009F094
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8009F098
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8009F09C
  goto L_8009F0A8; // 8009F0A0
L_8009F0A4:;
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[3]);} // 8009F0A4
L_8009F0A8:;
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F0A8
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F0AC
  fcmp(c,0,c->f[1],c->f[0]); // 8009F0B0
  if (!crb(c,0)) { goto L_8009F0C0; } // 8009F0B4
  {uint32_t ea=c->r[2]+0xFFFFA380u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F0B8
  goto L_8009F0C4; // 8009F0BC
L_8009F0C0:;
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F0C0
L_8009F0C4:;
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F0C4
  fcmp(c,0,c->f[2],c->f[3]); // 8009F0C8
  if (crb(c,2)) { goto L_8009F11C; } // 8009F0CC
  fcmp(c,0,c->f[2],c->f[3]); // 8009F0D0
  if (!crb(c,1)) { goto L_8009F0FC; } // 8009F0D4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009F0D8
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F0DC
  fcmp(c,0,c->f[1],c->f[0]); // 8009F0E0
  if (!crb(c,1)) { goto L_8009F0F4; } // 8009F0E4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8009F0E8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009F0EC
  goto L_8009F11C; // 8009F0F0
L_8009F0F4:;
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[3]);} // 8009F0F4
  goto L_8009F11C; // 8009F0F8
L_8009F0FC:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009F0FC
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F100
  fcmp(c,0,c->f[1],c->f[0]); // 8009F104
  if (!crb(c,1)) { goto L_8009F118; } // 8009F108
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8009F10C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009F110
  goto L_8009F11C; // 8009F114
L_8009F118:;
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[3]);} // 8009F118
L_8009F11C:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009F11C
  c->lr=0x8009F124u; f_80101220(c); // 8009F120
  cmps(c,0,(int32_t)c->r[3],0); // 8009F124
  if (!crb(c,2)) { goto L_8009F13C; } // 8009F128
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009F12C
  c->r[4]=c->r[31]+0x00000088u; // 8009F130
  c->r[5]=0u+0x00000000u; // 8009F134
  c->lr=0x8009F13Cu; f_80100840(c); // 8009F138
L_8009F13C:;
  {uint32_t ea=c->r[30]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F13C
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F140
  fcmp(c,0,c->f[1],c->f[0]); // 8009F144
  if (!crb(c,1)) { goto L_8009F1A0; } // 8009F148
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F14C
  {uint32_t ea=c->r[2]+0xFFFFA388u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F150
  fcmp(c,0,c->f[1],c->f[0]); // 8009F154
  if (!crb(c,1)) { goto L_8009F1A0; } // 8009F158
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F15C
  c->lr=0x8009F164u; f_800FC0C0(c); // 8009F160
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F164
  c->r[4]=c->r[31]+0x00000094u; // 8009F168
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F16C
  c->r[5]=0u+0x00000000u; // 8009F170
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8009F174
  {uint32_t ea=c->r[2]+0xFFFFA38Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F178
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F17C
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[2]);} // 8009F180
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 8009F184
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009F188
  c->f[0]=-c->f[0]; // 8009F18C
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[2]);} // 8009F190
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 8009F194
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 8009F198
  c->lr=0x8009F1A0u; f_80100840(c); // 8009F19C
L_8009F1A0:;
  {uint32_t ea=c->r[30]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F1A0
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F1A4
  fcmp(c,0,c->f[1],c->f[0]); // 8009F1A8
  if (!crb(c,0)) { goto L_8009F204; } // 8009F1AC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F1B0
  {uint32_t ea=c->r[2]+0xFFFFA390u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F1B4
  fcmp(c,0,c->f[1],c->f[0]); // 8009F1B8
  if (!crb(c,0)) { goto L_8009F204; } // 8009F1BC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F1C0
  c->lr=0x8009F1C8u; f_800FC0C0(c); // 8009F1C4
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F1C8
  c->r[4]=c->r[31]+0x000000A4u; // 8009F1CC
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F1D0
  c->r[5]=0u+0x00000000u; // 8009F1D4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8009F1D8
  {uint32_t ea=c->r[2]+0xFFFFA38Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F1DC
  {uint32_t ea=c->r[30]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F1E0
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[2]);} // 8009F1E4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 8009F1E8
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009F1EC
  c->f[0]=-c->f[0]; // 8009F1F0
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[2]);} // 8009F1F4
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 8009F1F8
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 8009F1FC
  c->lr=0x8009F204u; f_80100840(c); // 8009F200
L_8009F204:;
  c->r[3]=R32(c->r[30]+0x000000CCu); // 8009F204
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8009F208
  W32(c->r[30]+0x000000CCu,c->r[0]); // 8009F20C
  if (crb(c,1)) { goto L_800A0F08; } // 8009F210
  c->r[3]=R32(c->r[30]+0x00000030u); // 8009F214
  c->r[0]=R32(c->r[30]+0x00000034u); // 8009F218
  W32(c->r[1]+0x0000023Cu,c->r[0]); // 8009F21C
  {uint32_t ea=c->r[2]+0xFFFFA394u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F220
  W32(c->r[1]+0x00000238u,c->r[3]); // 8009F224
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 8009F228
  c->r[0]=R32(c->r[30]+0x00000038u); // 8009F22C
  W32(c->r[1]+0x00000240u,c->r[0]); // 8009F230
  {uint32_t ea=c->r[1]+0x00000238u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F234
  {uint32_t ea=c->r[30]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F238
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8009F23C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009F240
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[0]);} // 8009F244
  c->lr=0x8009F24Cu; f_800126B0(c); // 8009F248
  {uint32_t ea=c->r[2]+0xFFFFA39Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F24C
  c->r[3]=c->r[1]+0x00000228u; // 8009F250
  {uint32_t ea=c->r[2]+0xFFFFA398u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F254
  c->r[16]=0u+0x00000000u; // 8009F258
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8009F25C
  c->r[0]=0u+0x00000000u; // 8009F260
  c->r[6]=0u+0x00000000u; // 8009F264
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009F268
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8009F26C
  {uint32_t ea=c->r[1]+0x00000300u; WF64(ea,c->f[0]);} // 8009F270
  c->r[4]=R32(c->r[1]+0x00000304u); // 8009F274
  W32(c->r[30]+0x000000CCu,c->r[4]); // 8009F278
  c->r[5]=R32(c->r[13]+0xFFFFADD8u); // 8009F27C
  c->r[4]=R32(c->r[5]+0x0000003Cu); // 8009F280
  cmps(c,0,(int32_t)c->r[4],0); // 8009F284
  if (!crb(c,1)) { goto L_8009F298; } // 8009F288
  W32(c->r[1]+0x00000228u,c->r[6]); // 8009F28C
  c->r[16]=0u+0x00000001u; // 8009F290
  c->r[0]=0u+0x00000004u; // 8009F294
L_8009F298:;
  c->r[4]=R32(c->r[5]+0x0000007Cu); // 8009F298
  c->r[6]=0u+0x00000001u; // 8009F29C
  cmps(c,0,(int32_t)c->r[4],0); // 8009F2A0
  if (!crb(c,1)) { goto L_8009F2B0; } // 8009F2A4
  W32(c->r[3]+c->r[0],c->r[6]); // 8009F2A8
  c->r[16]=c->r[16]+0x00000001u; // 8009F2AC
L_8009F2B0:;
  cmps(c,0,(int32_t)c->r[16],0); // 8009F2B0
  if (crb(c,2)) { goto L_800A0F08; } // 8009F2B4
  c->r[3]=0u+0x000000B0u; // 8009F2B8
  c->lr=0x8009F2C0u; f_800D8ED0(c); // 8009F2BC
  cmps(c,0,(int32_t)c->r[3],0); // 8009F2C0
  c->r[15]=c->r[3]|c->r[3]; // 8009F2C4
  if (crb(c,2)) { goto L_800A0F08; } // 8009F2C8
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F2CC
  c->lr=0x8009F2D4u; f_800FBF40(c); // 8009F2D0
  c->r[8]=c->r[3]|c->r[3]; // 8009F2D4
  c->r[5]=c->r[1]+0x00000228u; // 8009F2D8
  c->r[0]=divwu(c->r[8],c->r[16]); // 8009F2DC
  c->r[7]=R32(c->r[13]+0xFFFFADD8u); // 8009F2E0
  c->r[6]=R32(c->r[30]+0x00000118u); // 8009F2E4
  c->r[3]=c->r[15]|c->r[15]; // 8009F2E8
  c->r[4]=c->r[1]+0x00000238u; // 8009F2EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[16]); // 8009F2F0
  c->r[0]=c->r[8]-c->r[0]; // 8009F2F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8009F2F8
  c->r[0]=R32(c->r[5]+c->r[0]); // 8009F2FC
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 8009F300
  c->r[5]=c->r[7]+c->r[0]; // 8009F304
  c->r[5]=R32(c->r[5]+0x00000008u); // 8009F308
  c->lr=0x8009F310u; f_800A1E20(c); // 8009F30C
  goto L_800A0F08; // 8009F310
L_8009F314:;
  {uint32_t ea=c->r[30]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F314
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F318
  fcmp(c,0,c->f[3],c->f[2]); // 8009F31C
  if (crb(c,2)) { goto L_8009F378; } // 8009F320
  fcmp(c,0,c->f[3],c->f[2]); // 8009F324
  if (!crb(c,1)) { goto L_8009F354; } // 8009F328
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009F32C
  {uint32_t ea=c->r[2]+0xFFFFA3A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F330
  fcmp(c,0,c->f[1],c->f[0]); // 8009F334
  if (!crb(c,1)) { goto L_8009F34C; } // 8009F338
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 8009F33C
  c->r[0]=0u+0x00000000u; // 8009F340
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8009F344
  goto L_8009F37C; // 8009F348
L_8009F34C:;
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 8009F34C
  goto L_8009F378; // 8009F350
L_8009F354:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009F354
  {uint32_t ea=c->r[2]+0xFFFFA3A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F358
  fcmp(c,0,c->f[1],c->f[0]); // 8009F35C
  if (!crb(c,1)) { goto L_8009F374; } // 8009F360
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8009F364
  c->r[0]=0u+0x00000000u; // 8009F368
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8009F36C
  goto L_8009F37C; // 8009F370
L_8009F374:;
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 8009F374
L_8009F378:;
  c->r[0]=0u+0x00000001u; // 8009F378
L_8009F37C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8009F37C
  if (crb(c,2)) { goto L_800A0F08; } // 8009F380
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F384
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F388
  fcmp(c,0,c->f[3],c->f[2]); // 8009F38C
  if (crb(c,2)) { goto L_8009F3E8; } // 8009F390
  fcmp(c,0,c->f[3],c->f[2]); // 8009F394
  if (!crb(c,1)) { goto L_8009F3C4; } // 8009F398
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009F39C
  {uint32_t ea=c->r[2]+0xFFFFA3A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F3A0
  fcmp(c,0,c->f[1],c->f[0]); // 8009F3A4
  if (!crb(c,1)) { goto L_8009F3BC; } // 8009F3A8
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 8009F3AC
  c->r[0]=0u+0x00000000u; // 8009F3B0
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009F3B4
  goto L_8009F3EC; // 8009F3B8
L_8009F3BC:;
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[2]);} // 8009F3BC
  goto L_8009F3E8; // 8009F3C0
L_8009F3C4:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009F3C4
  {uint32_t ea=c->r[2]+0xFFFFA3A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F3C8
  fcmp(c,0,c->f[1],c->f[0]); // 8009F3CC
  if (!crb(c,1)) { goto L_8009F3E4; } // 8009F3D0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8009F3D4
  c->r[0]=0u+0x00000000u; // 8009F3D8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009F3DC
  goto L_8009F3EC; // 8009F3E0
L_8009F3E4:;
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[2]);} // 8009F3E4
L_8009F3E8:;
  c->r[0]=0u+0x00000001u; // 8009F3E8
L_8009F3EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8009F3EC
  if (crb(c,2)) { goto L_800A0F08; } // 8009F3F0
  c->r[0]=0u+0x0000000Fu; // 8009F3F4
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F3F8
  goto L_800A0F08; // 8009F3FC
L_8009F400:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009F400
  c->r[4]=c->r[31]+0x000000B4u; // 8009F404
  c->r[5]=0u+0x00000000u; // 8009F408
  c->lr=0x8009F410u; f_80100840(c); // 8009F40C
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009F410
  c->r[0]=0u+0x00000001u; // 8009F414
  W8(c->r[30]+0x00000120u,c->r[0]); // 8009F418
  c->r[0]=c->r[3]+0x00000001u; // 8009F41C
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F420
  goto L_800A0F08; // 8009F424
L_8009F428:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009F428
  c->r[4]=c->r[13]+0xFFFF9E9Cu; // 8009F42C
  c->r[5]=0u+0x00000000u; // 8009F430
  c->lr=0x8009F438u; f_80100840(c); // 8009F434
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009F438
  c->r[0]=0u+0x00000001u; // 8009F43C
  W8(c->r[30]+0x00000120u,c->r[0]); // 8009F440
  c->r[0]=c->r[3]+0x00000001u; // 8009F444
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F448
  goto L_800A0F08; // 8009F44C
L_8009F450:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8009F450
  c->r[4]=c->r[13]+0xFFFF9E64u; // 8009F454
  c->r[5]=0u+0x00000000u; // 8009F458
  c->lr=0x8009F460u; f_80100840(c); // 8009F45C
  c->r[3]=0u+0x0000003Cu; // 8009F460
  c->r[0]=0u+0x00000001u; // 8009F464
  W32(c->r[30]+0x000000C0u,c->r[3]); // 8009F468
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F46C
  goto L_800A0F08; // 8009F470
L_8009F474:;
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F474
  c->r[0]=c->r[4]+0x00000001u; // 8009F478
  c->r[3]=0u+0x00000003u; // 8009F47C
  W32(c->r[30]+0x000000C8u,c->r[3]); // 8009F480
  {uint32_t ea=c->r[30]+0x000000DCu; WF32(ea,c->f[0]);} // 8009F484
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F488
L_8009F48C:;
  c->r[4]=R32(c->r[13]+0xFFFFADD8u); // 8009F48C
  c->r[3]=c->r[1]+0x000001A4u; // 8009F490
  c->lr=0x8009F498u; f_80012A00(c); // 8009F494
  c->r[3]=R32(c->r[1]+0x000001A4u); // 8009F498
  c->r[4]=R32(c->r[1]+0x000001A8u); // 8009F49C
  c->r[0]=R32(c->r[1]+0x000001ACu); // 8009F4A0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F4A4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F4A8
  W32(c->r[1]+0x0000021Cu,c->r[3]); // 8009F4AC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F4B0
  W32(c->r[1]+0x00000220u,c->r[4]); // 8009F4B4
  W32(c->r[1]+0x00000224u,c->r[0]); // 8009F4B8
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[0]);} // 8009F4BC
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[1]);} // 8009F4C0
  c->lr=0x8009F4C8u; f_800FC0C0(c); // 8009F4C4
  {uint32_t ea=c->r[2]+0xFFFFA3ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F4C8
  {uint32_t ea=c->r[2]+0xFFFFA3A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F4CC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8009F4D0
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F4D4
  c->f[23]=c->ps1[23]=S(c->f[0]+c->f[1]); // 8009F4D8
  c->lr=0x8009F4E0u; f_800FC0C0(c); // 8009F4DC
  {uint32_t ea=c->r[2]+0xFFFFA3ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F4E0
  {uint32_t ea=c->r[2]+0xFFFFA3B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F4E4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8009F4E8
  {uint32_t ea=c->r[1]+0x0000021Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F4EC
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F4F0
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[23]);} // 8009F4F4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 8009F4F8
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[2]); // 8009F4FC
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[4]);} // 8009F500
  fcmp(c,0,c->f[4],c->f[0]); // 8009F504
  if (!crb(c,0)) { goto L_8009F510; } // 8009F508
  c->f[4]=c->f[0]; // 8009F50C
L_8009F510:;
  {uint32_t ea=c->r[2]+0xFFFFA3B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F510
  fcmp(c,0,c->f[4],c->f[0]); // 8009F514
  if (!crb(c,1)) { goto L_8009F520; } // 8009F518
  c->f[4]=c->f[0]; // 8009F51C
L_8009F520:;
  c->f[0]=c->ps1[0]=S(c->f[4]); // 8009F520
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F524
  {uint32_t ea=c->r[1]+0x00000164u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F528
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F52C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8009F530
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[4]);} // 8009F534
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[2]); // 8009F538
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8009F53C
  c->r[0]=R32(c->r[1]+0x00000068u); // 8009F540
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8009F544
  W32(c->r[1]+0x000000C0u,c->r[0]); // 8009F548
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 8009F54C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F550
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8009F554
  c->f[1]=-c->f[0]; // 8009F558
  {uint32_t ea=c->r[1]+0x000000C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F55C
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 8009F560
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[2]);} // 8009F564
  c->lr=0x8009F56Cu; f_801E2224(c); // 8009F568
  c->f[24]=c->ps1[24]=S(c->f[1]); // 8009F56C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F570
  c->lr=0x8009F578u; f_800FBF40(c); // 8009F574
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8009F578
  if (crb(c,2)) { goto L_8009F588; } // 8009F57C
  {uint32_t ea=c->r[2]+0xFFFFA3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F580
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 8009F584
L_8009F588:;
  {uint32_t ea=c->r[1]+0x00000164u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F588
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F58C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F590
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F594
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8009F598
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8009F59C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[2]);} // 8009F5A0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8009F5A4
  c->r[0]=R32(c->r[1]+0x00000054u); // 8009F5A8
  c->r[3]=R32(c->r[1]+0x00000050u); // 8009F5AC
  W32(c->r[1]+0x00000090u,c->r[3]); // 8009F5B0
  W32(c->r[1]+0x00000094u,c->r[0]); // 8009F5B4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F5B8
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F5BC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 8009F5C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 8009F5C4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8009F5C8
  c->lr=0x8009F5D0u; f_801E247C(c); // 8009F5CC
  c->f[23]=c->ps1[23]=S(c->f[1]); // 8009F5D0
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F5D4
  c->lr=0x8009F5DCu; f_800FC0C0(c); // 8009F5D8
  {uint32_t ea=c->r[2]+0xFFFFA35Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F5DC
  c->f[0]=c->ps1[0]=S(c->f[23]-c->f[2]); // 8009F5E0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8009F5E4
  c->f[1]=c->f[24]; // 8009F5E8
  c->f[23]=c->ps1[23]=S(c->f[2]+c->f[0]); // 8009F5EC
  c->lr=0x8009F5F4u; f_801E20DC(c); // 8009F5F0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8009F5F4
  c->f[1]=c->f[24]; // 8009F5F8
  c->f[31]=-c->f[0]; // 8009F5FC
  c->lr=0x8009F604u; f_801E1CD0(c); // 8009F600
  c->f[6]=c->ps1[6]=S(c->f[1]); // 8009F604
  {uint32_t ea=c->r[1]+0x00000164u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F608
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F60C
  c->f[4]=c->ps1[4]=S(c->f[31]); // 8009F610
  {uint32_t ea=c->r[1]+0x00000160u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F614
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 8009F618
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F61C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[23]); // 8009F620
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[3]);} // 8009F624
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[23]); // 8009F628
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8009F62C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8009F630
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 8009F634
  {uint32_t ea=c->r[2]+0xFFFFA3BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F638
  c->r[3]=R32(c->r[1]+0x00000060u); // 8009F63C
  W32(c->r[1]+0x000000A8u,c->r[3]); // 8009F640
  c->r[3]=R32(c->r[30]+0x00000104u); // 8009F644
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8009F648
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F64C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[5]);} // 8009F650
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8009F654
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F658
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[4]);} // 8009F65C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[1]); // 8009F660
  c->r[6]=R32(c->r[1]+0x00000048u); // 8009F664
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[3]);} // 8009F668
  c->r[5]=R32(c->r[1]+0x0000004Cu); // 8009F66C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 8009F670
  c->r[4]=R32(c->r[1]+0x00000058u); // 8009F674
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8009F678
  W32(c->r[1]+0x000000A0u,c->r[6]); // 8009F67C
  W32(c->r[1]+0x000000A4u,c->r[5]); // 8009F680
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F684
  W32(c->r[1]+0x000000B0u,c->r[4]); // 8009F688
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F68C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 8009F690
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F694
  {uint32_t ea=c->r[1]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F698
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8009F69C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[6]);} // 8009F6A0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[2]); // 8009F6A4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 8009F6A8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8009F6AC
  c->r[4]=R32(c->r[1]+0x00000040u); // 8009F6B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8009F6B4
  W32(c->r[1]+0x000000B8u,c->r[4]); // 8009F6B8
  W32(c->r[1]+0x000000BCu,c->r[0]); // 8009F6BC
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F6C0
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F6C4
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[31]);} // 8009F6C8
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[1]);} // 8009F6CC
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 8009F6D0
  c->lr=0x8009F6D8u; f_800DA150(c); // 8009F6D4
  c->r[3]=0u+0x0000003Cu; // 8009F6D8
  c->lr=0x8009F6E0u; f_800D8ED0(c); // 8009F6DC
  cmps(c,0,(int32_t)c->r[3],0); // 8009F6E0
  c->r[4]=c->r[3]|c->r[3]; // 8009F6E4
  if (crb(c,2)) { goto L_8009F740; } // 8009F6E8
  c->r[16]=R32(c->r[1]+0x00000158u); // 8009F6EC
  c->r[4]=c->r[30]+0x00000084u; // 8009F6F0
  c->r[15]=R32(c->r[1]+0x0000015Cu); // 8009F6F4
  c->r[5]=c->r[1]+0x00000078u; // 8009F6F8
  c->r[12]=R32(c->r[1]+0x00000148u); // 8009F6FC
  c->r[6]=c->r[1]+0x00000080u; // 8009F700
  c->r[11]=R32(c->r[1]+0x0000014Cu); // 8009F704
  c->r[7]=c->r[1]+0x00000088u; // 8009F708
  c->r[10]=R32(c->r[1]+0x00000160u); // 8009F70C
  c->r[8]=0u+0x0000003Cu; // 8009F710
  c->r[0]=R32(c->r[1]+0x00000164u); // 8009F714
  c->r[9]=0u+0x00000001u; // 8009F718
  W32(c->r[1]+0x00000088u,c->r[16]); // 8009F71C
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F720
  W32(c->r[1]+0x0000008Cu,c->r[15]); // 8009F724
  W32(c->r[1]+0x00000080u,c->r[12]); // 8009F728
  W32(c->r[1]+0x00000084u,c->r[11]); // 8009F72C
  W32(c->r[1]+0x00000078u,c->r[10]); // 8009F730
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8009F734
  c->lr=0x8009F73Cu; f_8009CB30(c); // 8009F738
  c->r[4]=c->r[3]|c->r[3]; // 8009F73C
L_8009F740:;
  c->r[3]=R32(c->r[30]+0x00000104u); // 8009F740
  c->lr=0x8009F748u; f_800DA000(c); // 8009F744
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009F748
  {uint32_t ea=c->r[2]+0xFFFFA3C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F74C
  c->r[0]=c->r[3]+0x00000001u; // 8009F750
  {uint32_t ea=c->r[30]+0x000000D8u; WF32(ea,c->f[0]);} // 8009F754
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F758
  goto L_800A0F08; // 8009F75C
L_8009F760:;
  {uint32_t ea=c->r[30]+0x00000088u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F760
  {uint32_t ea=c->r[30]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F764
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F768
  c->r[16]=R32(c->r[30]+0x00000104u); // 8009F76C
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[1]);} // 8009F770
  c->r[17]=c->r[16]+0x00000018u; // 8009F774
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[2]);} // 8009F778
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 8009F77C
  c->r[15]=R8(c->r[16]+0x0000000Fu); // 8009F780
  cmps(c,0,(int32_t)c->r[15],0); // 8009F784
  if (crb(c,2)) { goto L_8009F794; } // 8009F788
  c->r[3]=c->r[17]|c->r[17]; // 8009F78C
  c->lr=0x8009F794u; f_8015C1E0(c); // 8009F790
L_8009F794:;
  c->r[0]=R32(c->r[16]+0x00000010u); // 8009F794
  cmps(c,0,(int32_t)c->r[15],0); // 8009F798
  c->r[0]=cntlz(c->r[0]); // 8009F79C
  c->r[15]=rotl(c->r[0],27)&0x07FFFFFFu; // 8009F7A0
  if (crb(c,2)) { goto L_8009F7B0; } // 8009F7A4
  c->r[3]=c->r[17]|c->r[17]; // 8009F7A8
  c->lr=0x8009F7B0u; f_8015C2C0(c); // 8009F7AC
L_8009F7B0:;
  cmps(c,0,(int32_t)c->r[15],0); // 8009F7B0
  if (crb(c,2)) { goto L_800A0F08; } // 8009F7B4
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009F7B8
  c->r[0]=0u+0x00000005u; // 8009F7BC
  c->r[4]=0u+0x00000000u; // 8009F7C0
  W32(c->r[30]+0x000000C0u,c->r[0]); // 8009F7C4
  c->r[0]=c->r[3]+0x00000001u; // 8009F7C8
  W32(c->r[30]+0x000000C4u,c->r[4]); // 8009F7CC
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F7D0
  goto L_800A0F08; // 8009F7D4
L_8009F7D8:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 8009F7D8
  c->r[0]=c->r[3]+0x00000001u; // 8009F7DC
  W32(c->r[30]+0x000000C4u,c->r[0]); // 8009F7E0
  cmps(c,0,(int32_t)c->r[0],60); // 8009F7E4
  if (crb(c,0)) { goto L_8009F820; } // 8009F7E8
  c->r[3]=R32(c->r[30]+0x000000C8u); // 8009F7EC
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8009F7F0
  W32(c->r[30]+0x000000C8u,c->r[0]); // 8009F7F4
  if (crb(c,1)) { goto L_8009F810; } // 8009F7F8
  c->r[3]=0u+0x0000003Cu; // 8009F7FC
  c->r[0]=0u+0x00000001u; // 8009F800
  W32(c->r[30]+0x000000C0u,c->r[3]); // 8009F804
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F808
  goto L_8009F820; // 8009F80C
L_8009F810:;
  c->r[3]=0u+0x0000003Cu; // 8009F810
  c->r[0]=0u+0x00000013u; // 8009F814
  W32(c->r[30]+0x000000C0u,c->r[3]); // 8009F818
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009F81C
L_8009F820:;
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 8009F820
  c->lr=0x8009F828u; f_800126B0(c); // 8009F824
  {uint32_t ea=c->r[30]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F828
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F82C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009F830
  {uint32_t ea=c->r[30]+0x000000DCu; WF32(ea,c->f[1]);} // 8009F834
  fcmp(c,0,c->f[1],c->f[0]); // 8009F838
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8009F83C
  if (!crb(c,2)) { goto L_8009F94C; } // 8009F840
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F844
  c->r[3]=R32(c->r[30]+0x00000030u); // 8009F848
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8009F84C
  c->r[0]=R32(c->r[30]+0x00000034u); // 8009F850
  {uint32_t ea=c->r[30]+0x000000DCu; WF32(ea,c->f[0]);} // 8009F854
  W32(c->r[1]+0x00000210u,c->r[3]); // 8009F858
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F85C
  W32(c->r[1]+0x00000214u,c->r[0]); // 8009F860
  c->r[0]=R32(c->r[30]+0x00000038u); // 8009F864
  W32(c->r[1]+0x00000218u,c->r[0]); // 8009F868
  c->lr=0x8009F870u; f_800FC0C0(c); // 8009F86C
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F870
  {uint32_t ea=c->r[2]+0xFFFFA3C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F874
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009F878
  {uint32_t ea=c->r[1]+0x00000210u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F87C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F880
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009F884
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8009F888
  {uint32_t ea=c->r[1]+0x00000210u; WF32(ea,c->f[0]);} // 8009F88C
  c->lr=0x8009F894u; f_800FC0C0(c); // 8009F890
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F894
  {uint32_t ea=c->r[2]+0xFFFFA3C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F898
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 8009F89C
  {uint32_t ea=c->r[1]+0x00000214u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F8A0
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F8A4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009F8A8
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8009F8AC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8009F8B0
  {uint32_t ea=c->r[1]+0x00000214u; WF32(ea,c->f[0]);} // 8009F8B4
  c->lr=0x8009F8BCu; f_800FC0C0(c); // 8009F8B8
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F8BC
  {uint32_t ea=c->r[2]+0xFFFFA3CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009F8C0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[1]); // 8009F8C4
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F8C8
  {uint32_t ea=c->r[2]+0xFFFFA3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F8CC
  {uint32_t ea=c->r[2]+0xFFFFA3C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F8D0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 8009F8D4
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009F8D8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 8009F8DC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 8009F8E0
  c->f[24]=c->ps1[24]=S(c->f[1]/c->f[0]); // 8009F8E4
  c->lr=0x8009F8ECu; f_800FC0C0(c); // 8009F8E8
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F8EC
  {uint32_t ea=c->r[2]+0xFFFFA378u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F8F0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 8009F8F4
  c->f[1]=c->f[24]; // 8009F8F8
  c->f[23]=c->ps1[23]=S(c->f[0]+c->f[2]); // 8009F8FC
  c->lr=0x8009F904u; f_801E1CD0(c); // 8009F900
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8009F904
  c->f[1]=c->f[24]; // 8009F908
  c->f[0]=-c->f[0]; // 8009F90C
  c->f[24]=c->ps1[24]=S(c->f[23]*c->f[0]); // 8009F910
  c->lr=0x8009F918u; f_801E20DC(c); // 8009F914
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8009F918
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F91C
  {uint32_t ea=c->r[1]+0x00000208u; WF32(ea,c->f[24]);} // 8009F920
  c->r[3]=0u+0x00000090u; // 8009F924
  c->f[1]=c->ps1[1]=S(c->f[23]*c->f[1]); // 8009F928
  {uint32_t ea=c->r[1]+0x0000020Cu; WF32(ea,c->f[0]);} // 8009F92C
  {uint32_t ea=c->r[1]+0x00000204u; WF32(ea,c->f[1]);} // 8009F930
  c->lr=0x8009F938u; f_800D8ED0(c); // 8009F934
  cmps(c,0,(int32_t)c->r[3],0); // 8009F938
  if (crb(c,2)) { goto L_8009F94C; } // 8009F93C
  c->r[4]=c->r[1]+0x00000210u; // 8009F940
  c->r[5]=c->r[1]+0x00000204u; // 8009F944
  c->lr=0x8009F94Cu; f_800A2A90(c); // 8009F948
L_8009F94C:;
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 8009F94C
  c->r[4]=c->r[30]+0x00000030u; // 8009F950
  c->lr=0x8009F958u; f_80012930(c); // 8009F954
  {uint32_t ea=c->r[2]+0xFFFFA3B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009F958
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F95C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8009F960
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8009F964
  {uint32_t ea=c->r[2]+0xFFFFA3C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F968
  W32(c->r[1]+0x000001FCu,c->r[0]); // 8009F96C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8009F970
  c->f[23]=c->ps1[23]=S(c->f[1]/c->f[0]); // 8009F974
  W32(c->r[1]+0x000001F8u,c->r[0]); // 8009F978
  {uint32_t ea=c->r[30]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 8009F97C
  {uint32_t ea=c->r[1]+0x000001F8u; c->f[6]=c->ps1[6]=RF32(ea);} // 8009F980
  {uint32_t ea=c->r[30]+0x00000034u; c->f[5]=c->ps1[5]=RF32(ea);} // 8009F984
  {uint32_t ea=c->r[1]+0x000001FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F988
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F98C
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[6]); // 8009F990
  c->r[3]=R32(c->r[3]+0x00000008u); // 8009F994
  c->f[1]=c->f[23]; // 8009F998
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 8009F99C
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[7]);} // 8009F9A0
  c->r[0]=R32(c->r[1]+0x00000038u); // 8009F9A4
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[3]); // 8009F9A8
  W32(c->r[1]+0x00000070u,c->r[0]); // 8009F9AC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009F9B0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F9B4
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8009F9B8
  W32(c->r[1]+0x00000074u,c->r[0]); // 8009F9BC
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009F9C0
  W32(c->r[1]+0x00000200u,c->r[3]); // 8009F9C4
  {uint32_t ea=c->r[1]+0x000001FCu; WF32(ea,c->f[3]);} // 8009F9C8
  {uint32_t ea=c->r[1]+0x00000140u; WF32(ea,c->f[4]);} // 8009F9CC
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[5]);} // 8009F9D0
  {uint32_t ea=c->r[1]+0x00000138u; WF32(ea,c->f[6]);} // 8009F9D4
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[3]);} // 8009F9D8
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[2]);} // 8009F9DC
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 8009F9E0
  c->lr=0x8009F9E8u; f_801E1CD0(c); // 8009F9E4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8009F9E8
  c->f[1]=c->f[23]; // 8009F9EC
  c->f[24]=-c->f[0]; // 8009F9F0
  c->lr=0x8009F9F8u; f_801E20DC(c); // 8009F9F4
  c->f[3]=c->ps1[3]=S(c->f[1]); // 8009F9F8
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009F9FC
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FA00
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA04
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 8009FA08
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[3]);} // 8009FA0C
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[24]);} // 8009FA10
  fcmp(c,0,c->f[2],c->f[0]); // 8009FA14
  if (!crb(c,0)) { goto L_8009FA20; } // 8009FA18
  c->f[2]=-c->f[2]; // 8009FA1C
L_8009FA20:;
  {uint32_t ea=c->r[2]+0xFFFFA390u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FA20
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA24
  c->f[4]=c->ps1[4]=S(c->f[1]/c->f[2]); // 8009FA28
  fcmp(c,0,c->f[4],c->f[0]); // 8009FA2C
  if (!crb(c,0)) { goto L_8009FA38; } // 8009FA30
  c->f[4]=c->f[0]; // 8009FA34
L_8009FA38:;
  {uint32_t ea=c->r[1]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009FA38
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA3C
  {uint32_t ea=c->r[1]+0x00000134u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FA40
  {uint32_t ea=c->r[1]+0x00000128u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FA44
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 8009FA48
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA4C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8009FA50
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 8009FA54
  fcmp(c,0,c->f[1],c->f[0]); // 8009FA58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009FA5C
  if (!crb(c,2)) { goto L_8009FA6C; } // 8009FA60
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA64
  goto L_8009FA70; // 8009FA68
L_8009FA6C:;
  {uint32_t ea=c->r[2]+0xFFFFA3D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA6C
L_8009FA70:;
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[0]); // 8009FA70
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FA74
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8009FA78
  {uint32_t ea=c->r[30]+0x000000D8u; WF32(ea,c->f[0]);} // 8009FA7C
  goto L_800A0F08; // 8009FA80
L_8009FA84:;
  c->r[3]=R32(c->r[30]+0x00000108u); // 8009FA84
  c->lr=0x8009FA8Cu; f_800DA150(c); // 8009FA88
  c->r[3]=0u+0x0000002Cu; // 8009FA8C
  c->lr=0x8009FA94u; f_800D8ED0(c); // 8009FA90
  cmps(c,0,(int32_t)c->r[3],0); // 8009FA94
  c->r[4]=c->r[3]|c->r[3]; // 8009FA98
  if (crb(c,2)) { goto L_8009FAD8; } // 8009FA9C
  c->r[7]=R32(c->r[30]+0x00000118u); // 8009FAA0
  c->r[6]=0u+0x00000000u; // 8009FAA4
  c->r[5]=0u+0x80220000u; // 8009FAA8
  c->r[0]=0u+0x00000016u; // 8009FAAC
  W32(c->r[3]+0x00000008u,c->r[6]); // 8009FAB0
  c->r[5]=c->r[5]+0xFFFFA0A8u; // 8009FAB4
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 8009FAB8
  W32(c->r[3]+0x00000000u,c->r[5]); // 8009FABC
  W32(c->r[3]+0x00000010u,c->r[0]); // 8009FAC0
  W32(c->r[3]+0x00000014u,c->r[6]); // 8009FAC4
  W32(c->r[3]+0x00000028u,c->r[7]); // 8009FAC8
  c->r[3]=R32(c->r[7]+0x00000004u); // 8009FACC
  c->r[0]=c->r[3]+0x00000001u; // 8009FAD0
  W32(c->r[7]+0x00000004u,c->r[0]); // 8009FAD4
L_8009FAD8:;
  c->r[3]=R32(c->r[30]+0x00000108u); // 8009FAD8
  c->lr=0x8009FAE0u; f_800DA000(c); // 8009FADC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009FAE0
  c->lr=0x8009FAE8u; f_800FC0C0(c); // 8009FAE4
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FAE8
  {uint32_t ea=c->r[2]+0xFFFFA3C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FAEC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8009FAF0
  {uint32_t ea=c->r[2]+0xFFFFA3ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FAF4
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009FAF8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 8009FAFC
  c->f[24]=c->ps1[24]=S(c->f[0]+c->f[1]); // 8009FB00
  c->lr=0x8009FB08u; f_800FC0C0(c); // 8009FB04
  {uint32_t ea=c->r[2]+0xFFFFA3E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FB08
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009FB0C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8009FB10
  {uint32_t ea=c->r[2]+0xFFFFA3DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FB14
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FB18
  c->r[0]=c->r[3]+0x00000001u; // 8009FB1C
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FB20
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 8009FB24
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[24]);} // 8009FB28
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8009FB2C
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 8009FB30
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 8009FB34
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009FB38
L_8009FB3C:;
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FB3C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FB40
  fcmp(c,0,c->f[1],c->f[0]); // 8009FB44
  if (!crb(c,1)) { goto L_8009FB54; } // 8009FB48
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009FB4C
  goto L_8009FB58; // 8009FB50
L_8009FB54:;
  {uint32_t ea=c->r[2]+0xFFFFA380u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009FB54
L_8009FB58:;
  {uint32_t ea=c->r[30]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FB58
  fcmp(c,0,c->f[2],c->f[3]); // 8009FB5C
  if (crb(c,2)) { goto L_8009FBB0; } // 8009FB60
  fcmp(c,0,c->f[2],c->f[3]); // 8009FB64
  if (!crb(c,1)) { goto L_8009FB90; } // 8009FB68
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009FB6C
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FB70
  fcmp(c,0,c->f[1],c->f[0]); // 8009FB74
  if (!crb(c,1)) { goto L_8009FB88; } // 8009FB78
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8009FB7C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8009FB80
  goto L_8009FBB0; // 8009FB84
L_8009FB88:;
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[3]);} // 8009FB88
  goto L_8009FBB0; // 8009FB8C
L_8009FB90:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009FB90
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FB94
  fcmp(c,0,c->f[1],c->f[0]); // 8009FB98
  if (!crb(c,1)) { goto L_8009FBAC; } // 8009FB9C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8009FBA0
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8009FBA4
  goto L_8009FBB0; // 8009FBA8
L_8009FBAC:;
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[3]);} // 8009FBAC
L_8009FBB0:;
  {uint32_t ea=c->r[30]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FBB0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FBB4
  fcmp(c,0,c->f[1],c->f[0]); // 8009FBB8
  if (!crb(c,1)) { goto L_8009FBC8; } // 8009FBBC
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009FBC0
  goto L_8009FBCC; // 8009FBC4
L_8009FBC8:;
  {uint32_t ea=c->r[2]+0xFFFFA380u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009FBC8
L_8009FBCC:;
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FBCC
  fcmp(c,0,c->f[2],c->f[3]); // 8009FBD0
  if (crb(c,2)) { goto L_8009FC24; } // 8009FBD4
  fcmp(c,0,c->f[2],c->f[3]); // 8009FBD8
  if (!crb(c,1)) { goto L_8009FC04; } // 8009FBDC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009FBE0
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FBE4
  fcmp(c,0,c->f[1],c->f[0]); // 8009FBE8
  if (!crb(c,1)) { goto L_8009FBFC; } // 8009FBEC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8009FBF0
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009FBF4
  goto L_8009FC24; // 8009FBF8
L_8009FBFC:;
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[3]);} // 8009FBFC
  goto L_8009FC24; // 8009FC00
L_8009FC04:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009FC04
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FC08
  fcmp(c,0,c->f[1],c->f[0]); // 8009FC0C
  if (!crb(c,1)) { goto L_8009FC20; } // 8009FC10
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8009FC14
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009FC18
  goto L_8009FC24; // 8009FC1C
L_8009FC20:;
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[3]);} // 8009FC20
L_8009FC24:;
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FC24
  {uint32_t ea=c->r[30]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FC28
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FC2C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009FC30
  fcmp(c,0,c->f[1],c->f[0]); // 8009FC34
  if (!crb(c,0)) { goto L_8009FC40; } // 8009FC38
  c->f[1]=-c->f[1]; // 8009FC3C
L_8009FC40:;
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FC40
  fcmp(c,0,c->f[1],c->f[0]); // 8009FC44
  if (!crb(c,0)) { goto L_8009FCBC; } // 8009FC48
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009FC4C
  {uint32_t ea=c->r[2]+0xFFFFA3C4u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009FC50
  {uint32_t ea=c->r[2]+0xFFFFA3ACu; c->f[29]=c->ps1[29]=RF32(ea);} // 8009FC54
  {uint32_t ea=c->r[2]+0xFFFFA3E0u; c->f[28]=c->ps1[28]=RF32(ea);} // 8009FC58
  {uint32_t ea=c->r[2]+0xFFFFA3DCu; c->f[27]=c->ps1[27]=RF32(ea);} // 8009FC5C
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[26]=c->ps1[26]=RF32(ea);} // 8009FC60
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[25]=c->ps1[25]=RF32(ea);} // 8009FC64
  {uint32_t ea=c->r[2]+0xFFFFA358u; c->f[24]=c->ps1[24]=RF32(ea);} // 8009FC68
L_8009FC6C:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009FC6C
  c->lr=0x8009FC74u; f_800FC0C0(c); // 8009FC70
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 8009FC74
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009FC78
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 8009FC7C
  c->f[23]=c->ps1[23]=S(c->f[29]+c->f[0]); // 8009FC80
  c->lr=0x8009FC88u; f_800FC0C0(c); // 8009FC84
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 8009FC88
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FC8C
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[23]);} // 8009FC90
  c->f[1]=c->ps1[1]=S(c->f[27]+c->f[1]); // 8009FC94
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[25]);} // 8009FC98
  c->f[1]=c->ps1[1]=S(c->f[26]+c->f[1]); // 8009FC9C
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[1]);} // 8009FCA0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009FCA4
  fcmp(c,0,c->f[0],c->f[25]); // 8009FCA8
  if (!crb(c,0)) { goto L_8009FCB4; } // 8009FCAC
  c->f[0]=-c->f[0]; // 8009FCB0
L_8009FCB4:;
  fcmp(c,0,c->f[0],c->f[24]); // 8009FCB4
  if (crb(c,0)) { IRQCHK(c); goto L_8009FC6C; } // 8009FCB8
L_8009FCBC:;
  c->r[16]=R32(c->r[30]+0x00000108u); // 8009FCBC
  c->r[15]=R8(c->r[16]+0x0000000Fu); // 8009FCC0
  c->r[17]=c->r[16]+0x00000018u; // 8009FCC4
  cmps(c,0,(int32_t)c->r[15],0); // 8009FCC8
  if (crb(c,2)) { goto L_8009FCD8; } // 8009FCCC
  c->r[3]=c->r[17]|c->r[17]; // 8009FCD0
  c->lr=0x8009FCD8u; f_8015C1E0(c); // 8009FCD4
L_8009FCD8:;
  c->r[0]=R32(c->r[16]+0x00000010u); // 8009FCD8
  cmps(c,0,(int32_t)c->r[15],0); // 8009FCDC
  c->r[0]=cntlz(c->r[0]); // 8009FCE0
  c->r[15]=rotl(c->r[0],27)&0x07FFFFFFu; // 8009FCE4
  if (crb(c,2)) { goto L_8009FCF4; } // 8009FCE8
  c->r[3]=c->r[17]|c->r[17]; // 8009FCEC
  c->lr=0x8009FCF4u; f_8015C2C0(c); // 8009FCF0
L_8009FCF4:;
  cmps(c,0,(int32_t)c->r[15],0); // 8009FCF4
  if (crb(c,2)) { goto L_800A0F08; } // 8009FCF8
  c->r[3]=R32(c->r[30]+0x00000094u); // 8009FCFC
  c->r[0]=c->r[3]+0x00000001u; // 8009FD00
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009FD04
  goto L_800A0F08; // 8009FD08
L_8009FD0C:;
  {uint32_t ea=c->r[30]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 8009FD0C
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FD10
  fcmp(c,0,c->f[3],c->f[2]); // 8009FD14
  if (crb(c,2)) { goto L_8009FD68; } // 8009FD18
  fcmp(c,0,c->f[3],c->f[2]); // 8009FD1C
  if (!crb(c,1)) { goto L_8009FD48; } // 8009FD20
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009FD24
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FD28
  fcmp(c,0,c->f[1],c->f[0]); // 8009FD2C
  if (!crb(c,1)) { goto L_8009FD40; } // 8009FD30
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 8009FD34
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8009FD38
  goto L_8009FD68; // 8009FD3C
L_8009FD40:;
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 8009FD40
  goto L_8009FD68; // 8009FD44
L_8009FD48:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009FD48
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FD4C
  fcmp(c,0,c->f[1],c->f[0]); // 8009FD50
  if (!crb(c,1)) { goto L_8009FD64; } // 8009FD54
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8009FD58
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8009FD5C
  goto L_8009FD68; // 8009FD60
L_8009FD64:;
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 8009FD64
L_8009FD68:;
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8009FD68
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FD6C
  fcmp(c,0,c->f[3],c->f[2]); // 8009FD70
  if (crb(c,2)) { goto L_8009FDC4; } // 8009FD74
  fcmp(c,0,c->f[3],c->f[2]); // 8009FD78
  if (!crb(c,1)) { goto L_8009FDA4; } // 8009FD7C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009FD80
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FD84
  fcmp(c,0,c->f[1],c->f[0]); // 8009FD88
  if (!crb(c,1)) { goto L_8009FD9C; } // 8009FD8C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 8009FD90
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009FD94
  goto L_8009FDC4; // 8009FD98
L_8009FD9C:;
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[2]);} // 8009FD9C
  goto L_8009FDC4; // 8009FDA0
L_8009FDA4:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009FDA4
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FDA8
  fcmp(c,0,c->f[1],c->f[0]); // 8009FDAC
  if (!crb(c,1)) { goto L_8009FDC0; } // 8009FDB0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8009FDB4
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8009FDB8
  goto L_8009FDC4; // 8009FDBC
L_8009FDC0:;
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[2]);} // 8009FDC0
L_8009FDC4:;
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FDC4
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FDC8
  fcmp(c,0,c->f[1],c->f[0]); // 8009FDCC
  if (!crb(c,2)) { goto L_800A0F08; } // 8009FDD0
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FDD4
  fcmp(c,0,c->f[1],c->f[0]); // 8009FDD8
  if (!crb(c,2)) { goto L_800A0F08; } // 8009FDDC
  c->r[0]=0u+0x00000001u; // 8009FDE0
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009FDE4
  goto L_800A0F08; // 8009FDE8
L_8009FDEC:;
  c->r[3]=c->r[30]+0x000000D8u; // 8009FDEC
  c->r[4]=0u+0x00000000u; // 8009FDF0
  c->r[5]=0u+0x00000010u; // 8009FDF4
  c->lr=0x8009FDFCu; f_800046B4(c); // 8009FDF8
  c->r[4]=R32(c->r[30]+0x00000030u); // 8009FDFC
  c->r[5]=0u+0x00000000u; // 8009FE00
  c->r[3]=R32(c->r[30]+0x00000034u); // 8009FE04
  c->r[0]=0u+0x00000001u; // 8009FE08
  W32(c->r[1]+0x000001F0u,c->r[3]); // 8009FE0C
  c->r[3]=0u+0x0000004Cu; // 8009FE10
  W32(c->r[1]+0x000001ECu,c->r[4]); // 8009FE14
  c->r[4]=R32(c->r[30]+0x00000038u); // 8009FE18
  W32(c->r[1]+0x000001F4u,c->r[4]); // 8009FE1C
  c->r[4]=R32(c->r[30]+0x00000118u); // 8009FE20
  W8(c->r[4]+0x0000004Cu,c->r[5]); // 8009FE24
  c->r[4]=R32(c->r[30]+0x00000118u); // 8009FE28
  W8(c->r[4]+0x0000004Du,c->r[0]); // 8009FE2C
  c->lr=0x8009FE34u; f_800D8ED0(c); // 8009FE30
  cmps(c,0,(int32_t)c->r[3],0); // 8009FE34
  if (crb(c,2)) { goto L_8009FE54; } // 8009FE38
  c->r[6]=0u+0x80210000u; // 8009FE3C
  c->r[4]=R32(c->r[30]+0x00000118u); // 8009FE40
  c->r[6]=c->r[6]+0xFFFFAFB8u; // 8009FE44
  c->r[5]=c->r[1]+0x000001ECu; // 8009FE48
  c->r[6]=c->r[6]+0x00000018u; // 8009FE4C
  c->lr=0x8009FE54u; f_800A5450(c); // 8009FE50
L_8009FE54:;
  c->r[4]=R32(c->r[30]+0x00000094u); // 8009FE54
  c->r[6]=0u+0x00000000u; // 8009FE58
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FE5C
  c->r[5]=0u+0x000001F4u; // 8009FE60
  c->r[0]=c->r[4]+0x00000001u; // 8009FE64
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 8009FE68
  {uint32_t ea=c->r[30]+0x000000D8u; WF32(ea,c->f[0]);} // 8009FE6C
  W32(c->r[30]+0x000000C8u,c->r[6]); // 8009FE70
  W32(c->r[30]+0x000000CCu,c->r[5]); // 8009FE74
  W32(c->r[30]+0x00000094u,c->r[0]); // 8009FE78
  goto L_800A0F08; // 8009FE7C
L_8009FE80:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 8009FE80
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8009FE84
  W32(c->r[30]+0x000000C8u,c->r[0]); // 8009FE88
  if (crb(c,1)) { goto L_8009FF3C; } // 8009FE8C
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[24]=c->ps1[24]=RF32(ea);} // 8009FE90
  c->r[15]=0u+0x00000000u; // 8009FE94
  {uint32_t ea=c->r[2]+0xFFFFA3C4u; c->f[25]=c->ps1[25]=RF32(ea);} // 8009FE98
  {uint32_t ea=c->r[2]+0xFFFFA3ACu; c->f[26]=c->ps1[26]=RF32(ea);} // 8009FE9C
  {uint32_t ea=c->r[2]+0xFFFFA3E0u; c->f[27]=c->ps1[27]=RF32(ea);} // 8009FEA0
  {uint32_t ea=c->r[2]+0xFFFFA3DCu; c->f[28]=c->ps1[28]=RF32(ea);} // 8009FEA4
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[29]=c->ps1[29]=RF32(ea);} // 8009FEA8
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[30]=c->ps1[30]=RF32(ea);} // 8009FEAC
  {uint32_t ea=c->r[2]+0xFFFFA390u; c->f[31]=c->ps1[31]=RF32(ea);} // 8009FEB0
L_8009FEB4:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009FEB4
  c->lr=0x8009FEBCu; f_800FC0C0(c); // 8009FEB8
  c->f[0]=c->ps1[0]=S(c->f[24]*c->f[1]); // 8009FEBC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009FEC0
  c->f[0]=c->ps1[0]=S(c->f[25]+c->f[0]); // 8009FEC4
  c->f[23]=c->ps1[23]=S(c->f[26]+c->f[0]); // 8009FEC8
  c->lr=0x8009FED0u; f_800FC0C0(c); // 8009FECC
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[1]); // 8009FED0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FED4
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[23]);} // 8009FED8
  c->f[1]=c->ps1[1]=S(c->f[28]+c->f[1]); // 8009FEDC
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[30]);} // 8009FEE0
  c->f[1]=c->ps1[1]=S(c->f[29]+c->f[1]); // 8009FEE4
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[1]);} // 8009FEE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8009FEEC
  fcmp(c,0,c->f[0],c->f[30]); // 8009FEF0
  if (!crb(c,0)) { goto L_8009FEFC; } // 8009FEF4
  c->f[0]=-c->f[0]; // 8009FEF8
L_8009FEFC:;
  fcmp(c,0,c->f[0],c->f[31]); // 8009FEFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009FF00
  if (crb(c,2)) { goto L_8009FF14; } // 8009FF04
  c->r[15]=c->r[15]+0x00000001u; // 8009FF08
  cmpu(c,0,c->r[15],0x0000000Au); // 8009FF0C
  if (crb(c,0)) { IRQCHK(c); goto L_8009FEB4; } // 8009FF10
L_8009FF14:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 8009FF14
  c->lr=0x8009FF1Cu; f_800FC0C0(c); // 8009FF18
  {uint32_t ea=c->r[2]+0xFFFFA364u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FF1C
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FF20
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8009FF24
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8009FF28
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8009FF2C
  {uint32_t ea=c->r[1]+0x00000300u; WF64(ea,c->f[0]);} // 8009FF30
  c->r[0]=R32(c->r[1]+0x00000304u); // 8009FF34
  W32(c->r[30]+0x000000C8u,c->r[0]); // 8009FF38
L_8009FF3C:;
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FF3C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FF40
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FF44
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009FF48
  fcmp(c,0,c->f[1],c->f[0]); // 8009FF4C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009FF50
  if (!crb(c,2)) { goto L_8009FF60; } // 8009FF54
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FF58
  goto L_8009FF64; // 8009FF5C
L_8009FF60:;
  {uint32_t ea=c->r[2]+0xFFFFA3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FF60
L_8009FF64:;
  {uint32_t ea=c->r[2]+0xFFFFA378u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FF64
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FF68
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8009FF6C
  fcmp(c,0,c->f[2],c->f[3]); // 8009FF70
  if (crb(c,2)) { goto L_8009FFC4; } // 8009FF74
  fcmp(c,0,c->f[2],c->f[3]); // 8009FF78
  if (!crb(c,1)) { goto L_8009FFA4; } // 8009FF7C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 8009FF80
  {uint32_t ea=c->r[2]+0xFFFFA3A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FF84
  fcmp(c,0,c->f[1],c->f[0]); // 8009FF88
  if (!crb(c,1)) { goto L_8009FF9C; } // 8009FF8C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8009FF90
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009FF94
  goto L_8009FFC4; // 8009FF98
L_8009FF9C:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[3]);} // 8009FF9C
  goto L_8009FFC4; // 8009FFA0
L_8009FFA4:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 8009FFA4
  {uint32_t ea=c->r[2]+0xFFFFA3A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FFA8
  fcmp(c,0,c->f[1],c->f[0]); // 8009FFAC
  if (!crb(c,1)) { goto L_8009FFC0; } // 8009FFB0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8009FFB4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8009FFB8
  goto L_8009FFC4; // 8009FFBC
L_8009FFC0:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[3]);} // 8009FFC0
L_8009FFC4:;
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FFC4
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FFC8
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FFCC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8009FFD0
  fcmp(c,0,c->f[1],c->f[0]); // 8009FFD4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8009FFD8
  if (!crb(c,2)) { goto L_8009FFE8; } // 8009FFDC
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FFE0
  goto L_8009FFEC; // 8009FFE4
L_8009FFE8:;
  {uint32_t ea=c->r[2]+0xFFFFA3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8009FFE8
L_8009FFEC:;
  {uint32_t ea=c->r[2]+0xFFFFA378u; c->f[0]=c->ps1[0]=RF32(ea);} // 8009FFEC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 8009FFF0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 8009FFF4
  fcmp(c,0,c->f[2],c->f[3]); // 8009FFF8
  if (crb(c,2)) { goto L_800A004C; } // 8009FFFC
  fcmp(c,0,c->f[2],c->f[3]); // 800A0000
  if (!crb(c,1)) { goto L_800A002C; } // 800A0004
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A0008
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A000C
  fcmp(c,0,c->f[1],c->f[0]); // 800A0010
  if (!crb(c,1)) { goto L_800A0024; } // 800A0014
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800A0018
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A001C
  goto L_800A004C; // 800A0020
L_800A0024:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[3]);} // 800A0024
  goto L_800A004C; // 800A0028
L_800A002C:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A002C
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0030
  fcmp(c,0,c->f[1],c->f[0]); // 800A0034
  if (!crb(c,1)) { goto L_800A0048; } // 800A0038
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800A003C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A0040
  goto L_800A004C; // 800A0044
L_800A0048:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[3]);} // 800A0048
L_800A004C:;
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A004C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0050
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 800A0054
  {uint32_t ea=c->r[2]+0xFFFFA3ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0058
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 800A005C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A0060
  fcmp(c,0,c->f[1],c->f[0]); // 800A0064
  if (!crb(c,1)) { goto L_800A0094; } // 800A0068
  c->r[3]=c->r[30]+0x0000003Cu; // 800A006C
  c->r[4]=c->r[3]|c->r[3]; // 800A0070
  c->lr=0x800A0078u; f_8016B580(c); // 800A0074
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0078
  {uint32_t ea=c->r[2]+0xFFFFA3F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A007C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0080
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800A0084
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800A0088
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800A008C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A0090
L_800A0094:;
  c->r[3]=R32(c->r[30]+0x000000CCu); // 800A0094
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A0098
  W32(c->r[30]+0x000000CCu,c->r[0]); // 800A009C
  cmps(c,0,(int32_t)c->r[0],100); // 800A00A0
  if (!crb(c,2)) { goto L_800A0100; } // 800A00A4
  c->r[3]=R32(c->r[30]+0x00000118u); // 800A00A8
  c->r[0]=0u+0x00000000u; // 800A00AC
  c->r[4]=0u+0x00000062u; // 800A00B0
  W8(c->r[3]+0x0000004Du,c->r[0]); // 800A00B4
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A00B8
  c->lr=0x800A00C0u; f_800A8BE0(c); // 800A00BC
  c->r[4]=R32(c->r[13]+0xFFFFADD8u); // 800A00C0
  c->r[3]=c->r[1]+0x00000198u; // 800A00C4
  c->lr=0x800A00CCu; f_80012A00(c); // 800A00C8
  {uint32_t ea=c->r[1]+0x00000198u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A00CC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A00D0
  fcmp(c,0,c->f[0],c->f[1]); // 800A00D4
  if (!crb(c,0)) { goto L_800A00F0; } // 800A00D8
  c->r[3]=R32(c->r[30]+0x0000011Cu); // 800A00DC
  c->r[4]=0u+0x00000001u; // 800A00E0
  {uint32_t ea=c->r[2]+0xFFFFA35Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A00E4
  c->lr=0x800A00ECu; f_800A5A00(c); // 800A00E8
  goto L_800A0100; // 800A00EC
L_800A00F0:;
  c->r[3]=R32(c->r[30]+0x0000011Cu); // 800A00F0
  c->r[4]=0u+0x00000001u; // 800A00F4
  {uint32_t ea=c->r[2]+0xFFFFA3F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A00F8
  c->lr=0x800A0100u; f_800A5A00(c); // 800A00FC
L_800A0100:;
  c->r[0]=R32(c->r[30]+0x000000CCu); // 800A0100
  cmps(c,0,(int32_t)c->r[0],0); // 800A0104
  if (!crb(c,2)) { goto L_800A0F08; } // 800A0108
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A010C
  c->lr=0x800A0114u; f_800FC0C0(c); // 800A0110
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0114
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A0118
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800A011C
  {uint32_t ea=c->r[2]+0xFFFFA390u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0120
  {uint32_t ea=c->r[2]+0xFFFFA3A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0124
  c->r[0]=c->r[3]+0x00000001u; // 800A0128
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A012C
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[3]); // 800A0130
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0134
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[1]);} // 800A0138
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[3]); // 800A013C
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[0]);} // 800A0140
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[1]);} // 800A0144
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A0148
  goto L_800A0F08; // 800A014C
L_800A0150:;
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0150
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0154
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0158
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800A015C
  fcmp(c,0,c->f[1],c->f[0]); // 800A0160
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800A0164
  if (!crb(c,2)) { goto L_800A0174; } // 800A0168
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A016C
  goto L_800A0178; // 800A0170
L_800A0174:;
  {uint32_t ea=c->r[2]+0xFFFFA3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0174
L_800A0178:;
  {uint32_t ea=c->r[2]+0xFFFFA378u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0178
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A017C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800A0180
  fcmp(c,0,c->f[2],c->f[3]); // 800A0184
  if (crb(c,2)) { goto L_800A01D8; } // 800A0188
  fcmp(c,0,c->f[2],c->f[3]); // 800A018C
  if (!crb(c,1)) { goto L_800A01B8; } // 800A0190
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A0194
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0198
  fcmp(c,0,c->f[1],c->f[0]); // 800A019C
  if (!crb(c,1)) { goto L_800A01B0; } // 800A01A0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800A01A4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A01A8
  goto L_800A01D8; // 800A01AC
L_800A01B0:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[3]);} // 800A01B0
  goto L_800A01D8; // 800A01B4
L_800A01B8:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A01B8
  {uint32_t ea=c->r[2]+0xFFFFA37Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A01BC
  fcmp(c,0,c->f[1],c->f[0]); // 800A01C0
  if (!crb(c,1)) { goto L_800A01D4; } // 800A01C4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800A01C8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A01CC
  goto L_800A01D8; // 800A01D0
L_800A01D4:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[3]);} // 800A01D4
L_800A01D8:;
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A01D8
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A01DC
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A01E0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800A01E4
  fcmp(c,0,c->f[1],c->f[0]); // 800A01E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800A01EC
  if (!crb(c,2)) { goto L_800A01FC; } // 800A01F0
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A01F4
  goto L_800A0200; // 800A01F8
L_800A01FC:;
  {uint32_t ea=c->r[2]+0xFFFFA3D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A01FC
L_800A0200:;
  {uint32_t ea=c->r[2]+0xFFFFA378u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0200
  {uint32_t ea=c->r[30]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0204
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800A0208
  fcmp(c,0,c->f[2],c->f[3]); // 800A020C
  if (crb(c,2)) { goto L_800A0260; } // 800A0210
  fcmp(c,0,c->f[2],c->f[3]); // 800A0214
  if (!crb(c,1)) { goto L_800A0240; } // 800A0218
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A021C
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0220
  fcmp(c,0,c->f[1],c->f[0]); // 800A0224
  if (!crb(c,1)) { goto L_800A0238; } // 800A0228
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800A022C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A0230
  goto L_800A0260; // 800A0234
L_800A0238:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[3]);} // 800A0238
  goto L_800A0260; // 800A023C
L_800A0240:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A0240
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0244
  fcmp(c,0,c->f[1],c->f[0]); // 800A0248
  if (!crb(c,1)) { goto L_800A025C; } // 800A024C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800A0250
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A0254
  goto L_800A0260; // 800A0258
L_800A025C:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[3]);} // 800A025C
L_800A0260:;
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0260
  {uint32_t ea=c->r[30]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0264
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 800A0268
  {uint32_t ea=c->r[2]+0xFFFFA3ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A026C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 800A0270
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A0274
  fcmp(c,0,c->f[1],c->f[0]); // 800A0278
  if (!crb(c,1)) { goto L_800A02A8; } // 800A027C
  c->r[3]=c->r[30]+0x0000003Cu; // 800A0280
  c->r[4]=c->r[3]|c->r[3]; // 800A0284
  c->lr=0x800A028Cu; f_8016B580(c); // 800A0288
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A028C
  {uint32_t ea=c->r[2]+0xFFFFA3F0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0290
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0294
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800A0298
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800A029C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[1]);} // 800A02A0
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A02A4
L_800A02A8:;
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A02A8
  {uint32_t ea=c->r[2]+0xFFFFA3A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A02AC
  fcmp(c,0,c->f[1],c->f[0]); // 800A02B0
  if (!crb(c,0)) { goto L_800A0F08; } // 800A02B4
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A02B8
  c->r[0]=c->r[3]+0x00000001u; // 800A02BC
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A02C0
  goto L_800A0F08; // 800A02C4
L_800A02C8:;
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800A02C8
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A02CC
  fcmp(c,0,c->f[3],c->f[2]); // 800A02D0
  if (crb(c,2)) { goto L_800A032C; } // 800A02D4
  fcmp(c,0,c->f[3],c->f[2]); // 800A02D8
  if (!crb(c,1)) { goto L_800A0308; } // 800A02DC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A02E0
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A02E4
  fcmp(c,0,c->f[1],c->f[0]); // 800A02E8
  if (!crb(c,1)) { goto L_800A0300; } // 800A02EC
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A02F0
  c->r[0]=0u+0x00000000u; // 800A02F4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A02F8
  goto L_800A0330; // 800A02FC
L_800A0300:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A0300
  goto L_800A032C; // 800A0304
L_800A0308:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A0308
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A030C
  fcmp(c,0,c->f[1],c->f[0]); // 800A0310
  if (!crb(c,1)) { goto L_800A0328; } // 800A0314
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A0318
  c->r[0]=0u+0x00000000u; // 800A031C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A0320
  goto L_800A0330; // 800A0324
L_800A0328:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A0328
L_800A032C:;
  c->r[0]=0u+0x00000001u; // 800A032C
L_800A0330:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A0330
  if (crb(c,2)) { goto L_800A0F08; } // 800A0334
  {uint32_t ea=c->r[30]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A0338
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A033C
  fcmp(c,0,c->f[3],c->f[2]); // 800A0340
  if (crb(c,2)) { goto L_800A039C; } // 800A0344
  fcmp(c,0,c->f[3],c->f[2]); // 800A0348
  if (!crb(c,1)) { goto L_800A0378; } // 800A034C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A0350
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0354
  fcmp(c,0,c->f[1],c->f[0]); // 800A0358
  if (!crb(c,1)) { goto L_800A0370; } // 800A035C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A0360
  c->r[0]=0u+0x00000000u; // 800A0364
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A0368
  goto L_800A03A0; // 800A036C
L_800A0370:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 800A0370
  goto L_800A039C; // 800A0374
L_800A0378:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A0378
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A037C
  fcmp(c,0,c->f[1],c->f[0]); // 800A0380
  if (!crb(c,1)) { goto L_800A0398; } // 800A0384
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A0388
  c->r[0]=0u+0x00000000u; // 800A038C
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A0390
  goto L_800A03A0; // 800A0394
L_800A0398:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 800A0398
L_800A039C:;
  c->r[0]=0u+0x00000001u; // 800A039C
L_800A03A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A03A0
  if (crb(c,2)) { goto L_800A0F08; } // 800A03A4
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A03A8
  c->r[0]=c->r[3]+0x00000001u; // 800A03AC
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A03B0
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A03B4
  c->lr=0x800A03BCu; f_800126B0(c); // 800A03B8
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A03BC
  {uint32_t ea=c->r[2]+0xFFFFA364u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A03C0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A03C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A03C8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800A03CC
  {uint32_t ea=c->r[1]+0x00000300u; WF64(ea,c->f[0]);} // 800A03D0
  c->r[0]=R32(c->r[1]+0x00000304u); // 800A03D4
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800A03D8
  goto L_800A0F08; // 800A03DC
L_800A03E0:;
  c->r[3]=R32(c->r[30]+0x00000118u); // 800A03E0
  c->r[4]=0u+0x00000001u; // 800A03E4
  c->r[0]=0u+0x0000003Cu; // 800A03E8
  W8(c->r[3]+0x0000004Cu,c->r[4]); // 800A03EC
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A03F0
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800A03F4
  c->r[0]=c->r[3]+0x00000001u; // 800A03F8
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A03FC
  goto L_800A0F08; // 800A0400
L_800A0404:;
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800A0404
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0408
  fcmp(c,0,c->f[3],c->f[2]); // 800A040C
  if (crb(c,2)) { goto L_800A0460; } // 800A0410
  fcmp(c,0,c->f[3],c->f[2]); // 800A0414
  if (!crb(c,1)) { goto L_800A0440; } // 800A0418
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A041C
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0420
  fcmp(c,0,c->f[1],c->f[0]); // 800A0424
  if (!crb(c,1)) { goto L_800A0438; } // 800A0428
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A042C
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A0430
  goto L_800A0460; // 800A0434
L_800A0438:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A0438
  goto L_800A0460; // 800A043C
L_800A0440:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A0440
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0444
  fcmp(c,0,c->f[1],c->f[0]); // 800A0448
  if (!crb(c,1)) { goto L_800A045C; } // 800A044C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A0450
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A0454
  goto L_800A0460; // 800A0458
L_800A045C:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A045C
L_800A0460:;
  {uint32_t ea=c->r[30]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A0460
  {uint32_t ea=c->r[2]+0xFFFFA3FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0464
  fcmp(c,0,c->f[3],c->f[2]); // 800A0468
  if (crb(c,2)) { goto L_800A04BC; } // 800A046C
  fcmp(c,0,c->f[3],c->f[2]); // 800A0470
  if (!crb(c,1)) { goto L_800A049C; } // 800A0474
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A0478
  {uint32_t ea=c->r[2]+0xFFFFA400u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A047C
  fcmp(c,0,c->f[1],c->f[0]); // 800A0480
  if (!crb(c,1)) { goto L_800A0494; } // 800A0484
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A0488
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A048C
  goto L_800A04BC; // 800A0490
L_800A0494:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 800A0494
  goto L_800A04BC; // 800A0498
L_800A049C:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A049C
  {uint32_t ea=c->r[2]+0xFFFFA400u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A04A0
  fcmp(c,0,c->f[1],c->f[0]); // 800A04A4
  if (!crb(c,1)) { goto L_800A04B8; } // 800A04A8
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A04AC
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A04B0
  goto L_800A04BC; // 800A04B4
L_800A04B8:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 800A04B8
L_800A04BC:;
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A04BC
  {uint32_t ea=c->r[2]+0xFFFFA404u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A04C0
  fcmp(c,0,c->f[1],c->f[0]); // 800A04C4
  if (!crb(c,0)) { goto L_800A0F08; } // 800A04C8
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A04CC
  c->r[0]=c->r[3]+0x00000001u; // 800A04D0
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A04D4
  goto L_800A0F08; // 800A04D8
L_800A04DC:;
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800A04DC
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A04E0
  fcmp(c,0,c->f[3],c->f[2]); // 800A04E4
  if (crb(c,2)) { goto L_800A0538; } // 800A04E8
  fcmp(c,0,c->f[3],c->f[2]); // 800A04EC
  if (!crb(c,1)) { goto L_800A0518; } // 800A04F0
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A04F4
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A04F8
  fcmp(c,0,c->f[1],c->f[0]); // 800A04FC
  if (!crb(c,1)) { goto L_800A0510; } // 800A0500
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A0504
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A0508
  goto L_800A0538; // 800A050C
L_800A0510:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A0510
  goto L_800A0538; // 800A0514
L_800A0518:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A0518
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A051C
  fcmp(c,0,c->f[1],c->f[0]); // 800A0520
  if (!crb(c,1)) { goto L_800A0534; } // 800A0524
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A0528
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A052C
  goto L_800A0538; // 800A0530
L_800A0534:;
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A0534
L_800A0538:;
  {uint32_t ea=c->r[30]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A0538
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A053C
  fcmp(c,0,c->f[3],c->f[2]); // 800A0540
  if (crb(c,2)) { goto L_800A0594; } // 800A0544
  fcmp(c,0,c->f[3],c->f[2]); // 800A0548
  if (!crb(c,1)) { goto L_800A0574; } // 800A054C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A0550
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0554
  fcmp(c,0,c->f[1],c->f[0]); // 800A0558
  if (!crb(c,1)) { goto L_800A056C; } // 800A055C
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A0560
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A0564
  goto L_800A0594; // 800A0568
L_800A056C:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 800A056C
  goto L_800A0594; // 800A0570
L_800A0574:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A0574
  {uint32_t ea=c->r[2]+0xFFFFA3E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0578
  fcmp(c,0,c->f[1],c->f[0]); // 800A057C
  if (!crb(c,1)) { goto L_800A0590; } // 800A0580
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A0584
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 800A0588
  goto L_800A0594; // 800A058C
L_800A0590:;
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[2]);} // 800A0590
L_800A0594:;
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0594
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0598
  fcmp(c,0,c->f[1],c->f[0]); // 800A059C
  if (!crb(c,2)) { goto L_800A0F08; } // 800A05A0
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A05A4
  fcmp(c,0,c->f[1],c->f[0]); // 800A05A8
  if (!crb(c,2)) { goto L_800A0F08; } // 800A05AC
  c->r[3]=0u+0x0000003Cu; // 800A05B0
  c->r[0]=0u+0x00000001u; // 800A05B4
  W32(c->r[30]+0x000000C0u,c->r[3]); // 800A05B8
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A05BC
  goto L_800A0F08; // 800A05C0
L_800A05C4:;
  c->r[4]=0u+0x80210000u; // 800A05C4
  c->r[3]=R32(c->r[30]+0x00000118u); // 800A05C8
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A05CC
  c->r[0]=0u+0x00000001u; // 800A05D0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A05D4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[2]);} // 800A05D8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A05DC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[1]);} // 800A05E0
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A05E4
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 800A05E8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A05EC
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 800A05F0
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 800A05F4
  W8(c->r[3]+0x0000004Fu,c->r[0]); // 800A05F8
  c->r[3]=R32(c->r[30]+0x00000104u); // 800A05FC
  c->lr=0x800A0604u; f_800DA150(c); // 800A0600
  c->r[3]=0u+0x00000034u; // 800A0604
  c->lr=0x800A060Cu; f_800D8ED0(c); // 800A0608
  cmps(c,0,(int32_t)c->r[3],0); // 800A060C
  if (crb(c,2)) { goto L_800A0688; } // 800A0610
  {uint32_t ea=c->r[30]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0614
  c->r[6]=0u+0x00000000u; // 800A0618
  c->r[4]=0u+0x80210000u; // 800A061C
  c->r[7]=0u+0x80210000u; // 800A0620
  W32(c->r[3]+0x00000008u,c->r[6]); // 800A0624
  c->r[7]=c->r[7]+0x0000293Cu; // 800A0628
  {uint32_t ea=c->r[2]+0xFFFFA368u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A062C
  c->r[5]=0u+0x000000B4u; // 800A0630
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 800A0634
  c->r[4]=c->r[4]+0x00002908u; // 800A0638
  {uint32_t ea=c->r[2]+0xFFFFA360u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A063C
  c->r[0]=c->r[30]+0x00000034u; // 800A0640
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A0644
  W32(c->r[3]+0x00000010u,c->r[7]); // 800A0648
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 800A064C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800A0650
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800A0654
  W32(c->r[3]+0x00000020u,c->r[5]); // 800A0658
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A065C
  W8(c->r[3]+0x00000028u,c->r[6]); // 800A0660
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A0664
  W32(c->r[1]+0x000002A4u,c->r[7]); // 800A0668
  {uint32_t ea=c->r[1]+0x000002A8u; WF32(ea,c->f[2]);} // 800A066C
  {uint32_t ea=c->r[1]+0x000002ACu; WF32(ea,c->f[1]);} // 800A0670
  W32(c->r[1]+0x000002B0u,c->r[6]); // 800A0674
  W32(c->r[1]+0x000002B4u,c->r[5]); // 800A0678
  {uint32_t ea=c->r[1]+0x000002B8u; WF32(ea,c->f[0]);} // 800A067C
  W8(c->r[1]+0x000002BCu,c->r[6]); // 800A0680
  W32(c->r[3]+0x00000030u,c->r[6]); // 800A0684
L_800A0688:;
  c->r[17]=c->r[3]|c->r[3]; // 800A0688
  c->r[3]=0u+0x00000034u; // 800A068C
  c->lr=0x800A0694u; f_800D8ED0(c); // 800A0690
  cmps(c,0,(int32_t)c->r[3],0); // 800A0694
  if (crb(c,2)) { goto L_800A0710; } // 800A0698
  {uint32_t ea=c->r[30]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A069C
  c->r[6]=0u+0x00000000u; // 800A06A0
  c->r[4]=0u+0x80210000u; // 800A06A4
  c->r[7]=0u+0x80210000u; // 800A06A8
  W32(c->r[3]+0x00000008u,c->r[6]); // 800A06AC
  c->r[7]=c->r[7]+0x0000293Cu; // 800A06B0
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A06B4
  c->r[5]=0u+0x000000B4u; // 800A06B8
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 800A06BC
  c->r[4]=c->r[4]+0x00002908u; // 800A06C0
  {uint32_t ea=c->r[2]+0xFFFFA360u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A06C4
  c->r[0]=c->r[30]+0x00000030u; // 800A06C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A06CC
  W32(c->r[3]+0x00000010u,c->r[7]); // 800A06D0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 800A06D4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800A06D8
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800A06DC
  W32(c->r[3]+0x00000020u,c->r[5]); // 800A06E0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A06E4
  W8(c->r[3]+0x00000028u,c->r[6]); // 800A06E8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A06EC
  W32(c->r[1]+0x000002C0u,c->r[7]); // 800A06F0
  {uint32_t ea=c->r[1]+0x000002C4u; WF32(ea,c->f[2]);} // 800A06F4
  {uint32_t ea=c->r[1]+0x000002C8u; WF32(ea,c->f[1]);} // 800A06F8
  W32(c->r[1]+0x000002CCu,c->r[6]); // 800A06FC
  W32(c->r[1]+0x000002D0u,c->r[5]); // 800A0700
  {uint32_t ea=c->r[1]+0x000002D4u; WF32(ea,c->f[0]);} // 800A0704
  W8(c->r[1]+0x000002D8u,c->r[6]); // 800A0708
  W32(c->r[3]+0x00000030u,c->r[6]); // 800A070C
L_800A0710:;
  c->r[16]=c->r[3]|c->r[3]; // 800A0710
  c->r[3]=0u+0x00000030u; // 800A0714
  c->lr=0x800A071Cu; f_800D8ED0(c); // 800A0718
  cmps(c,0,(int32_t)c->r[3],0); // 800A071C
  c->r[18]=c->r[3]|c->r[3]; // 800A0720
  if (crb(c,2)) { goto L_800A0770; } // 800A0724
  c->r[15]=0u+0x00000000u; // 800A0728
  W32(c->r[3]+0x00000008u,c->r[15]); // 800A072C
  c->r[4]=0u+0x80210000u; // 800A0730
  W8(c->r[3]+0x0000000Cu,c->r[15]); // 800A0734
  c->r[4]=c->r[4]+0xFFFFAEA8u; // 800A0738
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A073C
  c->r[3]=c->r[3]+0x00000018u; // 800A0740
  c->lr=0x800A0748u; f_8015C1A0(c); // 800A0744
  W8(c->r[18]+0x0000000Du,c->r[15]); // 800A0748
  c->r[3]=0u+0x80220000u; // 800A074C
  c->r[4]=c->r[18]+0x00000010u; // 800A0750
  c->r[0]=0u+0x00000001u; // 800A0754
  W8(c->r[18]+0x0000000Fu,c->r[15]); // 800A0758
  c->r[3]=c->r[3]+0xFFFFFBC8u; // 800A075C
  W32(c->r[18]+0x00000010u,c->r[15]); // 800A0760
  W32(c->r[18]+0x00000014u,c->r[4]); // 800A0764
  W32(c->r[18]+0x00000000u,c->r[3]); // 800A0768
  W8(c->r[18]+0x0000000Eu,c->r[0]); // 800A076C
L_800A0770:;
  c->r[3]=c->r[18]|c->r[18]; // 800A0770
  c->r[4]=c->r[16]|c->r[16]; // 800A0774
  c->lr=0x800A077Cu; f_800DA000(c); // 800A0778
  c->r[3]=c->r[18]|c->r[18]; // 800A077C
  c->r[4]=c->r[17]|c->r[17]; // 800A0780
  c->lr=0x800A0788u; f_800DA000(c); // 800A0784
  c->r[3]=R32(c->r[30]+0x00000104u); // 800A0788
  c->r[4]=c->r[18]|c->r[18]; // 800A078C
  c->lr=0x800A0794u; f_800DA000(c); // 800A0790
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A0794
  c->r[0]=0u+0x00000005u; // 800A0798
  W32(c->r[30]+0x000000C8u,c->r[0]); // 800A079C
  c->r[0]=c->r[3]+0x00000001u; // 800A07A0
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A07A4
  goto L_800A0F08; // 800A07A8
L_800A07AC:;
  c->r[16]=R32(c->r[30]+0x00000104u); // 800A07AC
  c->r[15]=R8(c->r[16]+0x0000000Fu); // 800A07B0
  c->r[17]=c->r[16]+0x00000018u; // 800A07B4
  cmps(c,0,(int32_t)c->r[15],0); // 800A07B8
  if (crb(c,2)) { goto L_800A07C8; } // 800A07BC
  c->r[3]=c->r[17]|c->r[17]; // 800A07C0
  c->lr=0x800A07C8u; f_8015C1E0(c); // 800A07C4
L_800A07C8:;
  c->r[0]=R32(c->r[16]+0x00000010u); // 800A07C8
  cmps(c,0,(int32_t)c->r[15],0); // 800A07CC
  c->r[0]=cntlz(c->r[0]); // 800A07D0
  c->r[15]=rotl(c->r[0],27)&0x07FFFFFFu; // 800A07D4
  if (crb(c,2)) { goto L_800A07E4; } // 800A07D8
  c->r[3]=c->r[17]|c->r[17]; // 800A07DC
  c->lr=0x800A07E4u; f_8015C2C0(c); // 800A07E0
L_800A07E4:;
  cmps(c,0,(int32_t)c->r[15],0); // 800A07E4
  if (crb(c,2)) { goto L_800A0894; } // 800A07E8
  c->r[3]=0u+0x00000034u; // 800A07EC
  c->lr=0x800A07F4u; f_800D8ED0(c); // 800A07F0
  cmps(c,0,(int32_t)c->r[3],0); // 800A07F4
  c->r[4]=c->r[3]|c->r[3]; // 800A07F8
  if (crb(c,2)) { goto L_800A0874; } // 800A07FC
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0800
  c->r[7]=0u+0x00000000u; // 800A0804
  c->r[5]=0u+0x80210000u; // 800A0808
  c->r[8]=0u+0x80210000u; // 800A080C
  W32(c->r[3]+0x00000008u,c->r[7]); // 800A0810
  c->r[8]=c->r[8]+0x0000293Cu; // 800A0814
  {uint32_t ea=c->r[2]+0xFFFFA384u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0818
  c->r[6]=0u+0x00000078u; // 800A081C
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 800A0820
  c->r[5]=c->r[5]+0x00002908u; // 800A0824
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0828
  c->r[0]=c->r[30]+0x0000008Cu; // 800A082C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A0830
  W32(c->r[3]+0x00000010u,c->r[8]); // 800A0834
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 800A0838
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800A083C
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800A0840
  W32(c->r[3]+0x00000020u,c->r[6]); // 800A0844
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A0848
  W8(c->r[3]+0x00000028u,c->r[7]); // 800A084C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A0850
  W32(c->r[1]+0x00000288u,c->r[8]); // 800A0854
  {uint32_t ea=c->r[1]+0x0000028Cu; WF32(ea,c->f[2]);} // 800A0858
  {uint32_t ea=c->r[1]+0x00000290u; WF32(ea,c->f[1]);} // 800A085C
  W32(c->r[1]+0x00000294u,c->r[7]); // 800A0860
  W32(c->r[1]+0x00000298u,c->r[6]); // 800A0864
  {uint32_t ea=c->r[1]+0x0000029Cu; WF32(ea,c->f[0]);} // 800A0868
  W8(c->r[1]+0x000002A0u,c->r[7]); // 800A086C
  W32(c->r[3]+0x00000030u,c->r[7]); // 800A0870
L_800A0874:;
  c->r[3]=R32(c->r[30]+0x00000104u); // 800A0874
  c->lr=0x800A087Cu; f_800DA000(c); // 800A0878
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A087C
  c->r[0]=0u+0x00000032u; // 800A0880
  W32(c->r[30]+0x000000C8u,c->r[0]); // 800A0884
  c->r[0]=c->r[3]+0x00000001u; // 800A0888
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A088C
  goto L_800A0F08; // 800A0890
L_800A0894:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A0894
  c->lr=0x800A089Cu; f_800FC0C0(c); // 800A0898
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A089C
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A08A0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A08A4
  {uint32_t ea=c->r[2]+0xFFFFA3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A08A8
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A08AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800A08B0
  c->f[23]=c->ps1[23]=S(c->f[0]*c->f[1]); // 800A08B4
  c->lr=0x800A08BCu; f_800FC0C0(c); // 800A08B8
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A08BC
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A08C0
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800A08C4
  {uint32_t ea=c->r[2]+0xFFFFA3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A08C8
  c->f[1]=c->f[23]; // 800A08CC
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800A08D0
  c->f[24]=c->ps1[24]=S(c->f[0]*c->f[2]); // 800A08D4
  c->lr=0x800A08DCu; f_801E20DC(c); // 800A08D8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800A08DC
  c->f[1]=c->f[23]; // 800A08E0
  {uint32_t ea=c->r[1]+0x000001E0u; WF32(ea,c->f[0]);} // 800A08E4
  c->lr=0x800A08ECu; f_801E1CD0(c); // 800A08E8
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800A08EC
  c->f[1]=c->f[24]; // 800A08F0
  {uint32_t ea=c->r[1]+0x000001E8u; WF32(ea,c->f[0]);} // 800A08F4
  c->lr=0x800A08FCu; f_801E20DC(c); // 800A08F8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A08FC
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0900
  c->f[1]=c->f[24]; // 800A0904
  c->f[2]=-c->f[2]; // 800A0908
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800A090C
  {uint32_t ea=c->r[1]+0x000001E4u; WF32(ea,c->f[0]);} // 800A0910
  c->lr=0x800A0918u; f_801E1CD0(c); // 800A0914
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800A0918
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A091C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A0920
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800A0924
  {uint32_t ea=c->r[1]+0x000001E8u; WF32(ea,c->f[0]);} // 800A0928
  c->lr=0x800A0930u; f_800FC0C0(c); // 800A092C
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0930
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0934
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 800A0938
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A093C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A0940
  {uint32_t ea=c->r[1]+0x000001E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0944
  c->f[5]=c->ps1[5]=S(c->f[0]+c->f[4]); // 800A0948
  {uint32_t ea=c->r[1]+0x000001E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A094C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A0950
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[2]); // 800A0954
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 800A0958
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800A095C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[4]); // 800A0960
  {uint32_t ea=c->r[1]+0x000001E0u; WF32(ea,c->f[0]);} // 800A0964
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0968
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A096C
  {uint32_t ea=c->r[1]+0x000001E4u; WF32(ea,c->f[0]);} // 800A0970
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0974
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A0978
  {uint32_t ea=c->r[1]+0x000001E8u; WF32(ea,c->f[0]);} // 800A097C
  c->lr=0x800A0984u; f_800FBF40(c); // 800A0980
  c->r[15]=0u+0xAAAB0000u; // 800A0984
  c->r[4]=c->r[3]|c->r[3]; // 800A0988
  c->r[0]=c->r[15]+0xFFFFAAABu; // 800A098C
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A0990
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[4])>>32); // 800A0994
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800A0998
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800A099C
  c->r[4]=c->r[4]-c->r[0]; // 800A09A0
  c->r[4]=c->r[4]+0x0000002Du; // 800A09A4
  c->lr=0x800A09ACu; f_800A8BE0(c); // 800A09A8
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A09AC
  c->lr=0x800A09B4u; f_800FBF40(c); // 800A09B0
  c->r[8]=c->r[3]|c->r[3]; // 800A09B4
  c->r[0]=c->r[15]+0xFFFFAAABu; // 800A09B8
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[8])>>32); // 800A09BC
  c->r[4]=0u+0x80210000u; // 800A09C0
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A09C4
  c->r[3]=c->r[1]+0x000001E0u; // 800A09C8
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A09CC
  c->r[5]=0u+0x00000003u; // 800A09D0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800A09D4
  c->r[4]=c->r[4]+0x00000018u; // 800A09D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800A09DC
  c->r[6]=0u+0x00000000u; // 800A09E0
  c->r[7]=0u+0x00000001u; // 800A09E4
  c->r[8]=c->r[8]-c->r[0]; // 800A09E8
  c->r[8]=c->r[8]+0x000000A7u; // 800A09EC
  c->lr=0x800A09F4u; f_8004FB70(c); // 800A09F0
  c->r[0]=0u+0x00000005u; // 800A09F4
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800A09F8
  goto L_800A0F08; // 800A09FC
L_800A0A00:;
  c->r[16]=R32(c->r[30]+0x00000104u); // 800A0A00
  c->r[15]=R8(c->r[16]+0x0000000Fu); // 800A0A04
  c->r[17]=c->r[16]+0x00000018u; // 800A0A08
  cmps(c,0,(int32_t)c->r[15],0); // 800A0A0C
  if (crb(c,2)) { goto L_800A0A1C; } // 800A0A10
  c->r[3]=c->r[17]|c->r[17]; // 800A0A14
  c->lr=0x800A0A1Cu; f_8015C1E0(c); // 800A0A18
L_800A0A1C:;
  c->r[0]=R32(c->r[16]+0x00000010u); // 800A0A1C
  cmps(c,0,(int32_t)c->r[15],0); // 800A0A20
  c->r[0]=cntlz(c->r[0]); // 800A0A24
  c->r[15]=rotl(c->r[0],27)&0x07FFFFFFu; // 800A0A28
  if (crb(c,2)) { goto L_800A0A38; } // 800A0A2C
  c->r[3]=c->r[17]|c->r[17]; // 800A0A30
  c->lr=0x800A0A38u; f_8015C2C0(c); // 800A0A34
L_800A0A38:;
  cmps(c,0,(int32_t)c->r[15],0); // 800A0A38
  if (crb(c,2)) { goto L_800A0A58; } // 800A0A3C
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A0A40
  c->r[0]=0u+0x00000014u; // 800A0A44
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800A0A48
  c->r[0]=c->r[3]+0x00000001u; // 800A0A4C
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A0A50
  goto L_800A0F08; // 800A0A54
L_800A0A58:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A0A58
  c->lr=0x800A0A60u; f_800FC0C0(c); // 800A0A5C
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0A60
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0A64
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A0A68
  {uint32_t ea=c->r[2]+0xFFFFA3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0A6C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A0A70
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800A0A74
  c->f[23]=c->ps1[23]=S(c->f[0]*c->f[1]); // 800A0A78
  c->lr=0x800A0A80u; f_800FC0C0(c); // 800A0A7C
  {uint32_t ea=c->r[2]+0xFFFFA370u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0A80
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0A84
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800A0A88
  {uint32_t ea=c->r[2]+0xFFFFA3B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0A8C
  c->f[1]=c->f[23]; // 800A0A90
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800A0A94
  c->f[24]=c->ps1[24]=S(c->f[0]*c->f[2]); // 800A0A98
  c->lr=0x800A0AA0u; f_801E20DC(c); // 800A0A9C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800A0AA0
  c->f[1]=c->f[23]; // 800A0AA4
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[0]);} // 800A0AA8
  c->lr=0x800A0AB0u; f_801E1CD0(c); // 800A0AAC
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800A0AB0
  c->f[1]=c->f[24]; // 800A0AB4
  {uint32_t ea=c->r[1]+0x000001DCu; WF32(ea,c->f[0]);} // 800A0AB8
  c->lr=0x800A0AC0u; f_801E20DC(c); // 800A0ABC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A0AC0
  {uint32_t ea=c->r[1]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0AC4
  c->f[1]=c->f[24]; // 800A0AC8
  c->f[2]=-c->f[2]; // 800A0ACC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800A0AD0
  {uint32_t ea=c->r[1]+0x000001D8u; WF32(ea,c->f[0]);} // 800A0AD4
  c->lr=0x800A0ADCu; f_801E1CD0(c); // 800A0AD8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A0ADC
  {uint32_t ea=c->r[1]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0AE0
  {uint32_t ea=c->r[2]+0xFFFFA3D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0AE4
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A0AE8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800A0AEC
  {uint32_t ea=c->r[1]+0x000001DCu; WF32(ea,c->f[0]);} // 800A0AF0
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0AF4
  c->f[23]=c->ps1[23]=S(c->f[1]*c->f[0]); // 800A0AF8
  c->lr=0x800A0B00u; f_800FC0C0(c); // 800A0AFC
  {uint32_t ea=c->r[2]+0xFFFFA408u; c->f[6]=c->ps1[6]=RF32(ea);} // 800A0B00
  {uint32_t ea=c->r[1]+0x000001D4u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A0B04
  c->f[5]=c->ps1[5]=S(c->f[23]-c->f[6]); // 800A0B08
  {uint32_t ea=c->r[30]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A0B0C
  {uint32_t ea=c->r[1]+0x000001D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0B10
  {uint32_t ea=c->r[1]+0x000001DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0B14
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 800A0B18
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A0B1C
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[1]); // 800A0B20
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800A0B24
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800A0B28
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800A0B2C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[4]); // 800A0B30
  {uint32_t ea=c->r[1]+0x000001D4u; WF32(ea,c->f[0]);} // 800A0B34
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0B38
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A0B3C
  {uint32_t ea=c->r[1]+0x000001D8u; WF32(ea,c->f[0]);} // 800A0B40
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0B44
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A0B48
  {uint32_t ea=c->r[1]+0x000001DCu; WF32(ea,c->f[0]);} // 800A0B4C
  c->lr=0x800A0B54u; f_800FBF40(c); // 800A0B50
  c->r[4]=0u+0xAAAB0000u; // 800A0B54
  c->r[5]=c->r[3]|c->r[3]; // 800A0B58
  c->r[0]=c->r[4]+0xFFFFAAABu; // 800A0B5C
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A0B60
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 800A0B64
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800A0B68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800A0B6C
  c->r[4]=c->r[5]-c->r[0]; // 800A0B70
  c->r[4]=c->r[4]+0x0000002Du; // 800A0B74
  c->lr=0x800A0B7Cu; f_800A8BE0(c); // 800A0B78
  c->r[4]=0u+0x80210000u; // 800A0B7C
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0B80
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A0B84
  c->r[3]=c->r[1]+0x000001D4u; // 800A0B88
  c->r[4]=c->r[4]+0x00000018u; // 800A0B8C
  c->r[5]=0u+0x00000002u; // 800A0B90
  c->r[6]=0u+0x00000000u; // 800A0B94
  c->r[7]=0u+0x00000001u; // 800A0B98
  c->r[8]=0u+0x000000A9u; // 800A0B9C
  c->lr=0x800A0BA4u; f_8004FB70(c); // 800A0BA0
  c->r[3]=0u+0x66660000u; // 800A0BA4
  c->r[4]=R32(c->r[30]+0x000000C8u); // 800A0BA8
  c->r[0]=c->r[3]+0x00006667u; // 800A0BAC
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 800A0BB0
  c->r[0]=c->r[4]+0x00000005u; // 800A0BB4
  W32(c->r[30]+0x000000C8u,c->r[0]); // 800A0BB8
  c->r[0]=sraw(c,c->r[3],2); // 800A0BBC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800A0BC0
  c->r[0]=c->r[0]+c->r[3]; // 800A0BC4
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800A0BC8
  goto L_800A0F08; // 800A0BCC
L_800A0BD0:;
  c->r[3]=0u+0x00000080u; // 800A0BD0
  c->lr=0x800A0BD8u; f_800D8ED0(c); // 800A0BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800A0BD8
  c->r[17]=c->r[3]|c->r[3]; // 800A0BDC
  if (crb(c,2)) { goto L_800A0CAC; } // 800A0BE0
  c->lr=0x800A0BE8u; f_800DA5C0(c); // 800A0BE4
  c->r[3]=0u+0x80220000u; // 800A0BE8
  {uint32_t ea=c->r[2]+0xFFFFA410u; c->f[1]=RF64(ea);} // 800A0BEC
  c->r[3]=c->r[3]+0xFFFFA128u; // 800A0BF0
  W32(c->r[17]+0x00000000u,c->r[3]); // 800A0BF4
  c->lr=0x800A0BFCu; f_801E1D98(c); // 800A0BF8
  c->f[23]=c->ps1[23]=S(c->f[1]); // 800A0BFC
  {uint32_t ea=c->r[2]+0xFFFFA418u; c->f[1]=RF64(ea);} // 800A0C00
  c->lr=0x800A0C08u; f_801E1D98(c); // 800A0C04
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800A0C08
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0C0C
  c->r[3]=0u+0x00000034u; // 800A0C10
  {uint32_t ea=c->r[17]+0x00000070u; WF32(ea,c->f[1]);} // 800A0C14
  {uint32_t ea=c->r[17]+0x00000074u; WF32(ea,c->f[23]);} // 800A0C18
  {uint32_t ea=c->r[17]+0x0000007Cu; WF32(ea,c->f[0]);} // 800A0C1C
  c->lr=0x800A0C24u; f_800D8ED0(c); // 800A0C20
  cmps(c,0,(int32_t)c->r[3],0); // 800A0C24
  if (crb(c,2)) { goto L_800A0CA0; } // 800A0C28
  c->r[5]=0u+0x00000000u; // 800A0C2C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800A0C30
  c->r[4]=0u+0x80210000u; // 800A0C34
  c->r[6]=0u+0x80210000u; // 800A0C38
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 800A0C3C
  c->r[4]=c->r[4]+0x00002908u; // 800A0C40
  c->r[6]=c->r[6]+0x0000293Cu; // 800A0C44
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0C48
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A0C4C
  c->r[4]=0u+0x00000014u; // 800A0C50
  {uint32_t ea=c->r[2]+0xFFFFA420u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0C54
  c->r[0]=c->r[17]+0x00000078u; // 800A0C58
  W32(c->r[3]+0x00000010u,c->r[6]); // 800A0C5C
  {uint32_t ea=c->r[2]+0xFFFFA378u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0C60
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 800A0C64
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800A0C68
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 800A0C6C
  W32(c->r[3]+0x00000020u,c->r[4]); // 800A0C70
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A0C74
  W8(c->r[3]+0x00000028u,c->r[5]); // 800A0C78
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A0C7C
  W32(c->r[1]+0x00000244u,c->r[6]); // 800A0C80
  {uint32_t ea=c->r[1]+0x00000248u; WF32(ea,c->f[2]);} // 800A0C84
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[1]);} // 800A0C88
  W32(c->r[1]+0x00000250u,c->r[5]); // 800A0C8C
  W32(c->r[1]+0x00000254u,c->r[4]); // 800A0C90
  {uint32_t ea=c->r[1]+0x00000258u; WF32(ea,c->f[0]);} // 800A0C94
  W8(c->r[1]+0x0000025Cu,c->r[5]); // 800A0C98
  W32(c->r[3]+0x00000030u,c->r[5]); // 800A0C9C
L_800A0CA0:;
  c->r[4]=c->r[3]|c->r[3]; // 800A0CA0
  c->r[3]=c->r[17]+0x00000010u; // 800A0CA4
  c->lr=0x800A0CACu; f_800DA000(c); // 800A0CA8
L_800A0CAC:;
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A0CAC
  c->r[4]=c->r[17]|c->r[17]; // 800A0CB0
  c->r[3]=R32(c->r[3]+0x00000114u); // 800A0CB4
  c->lr=0x800A0CBCu; f_800DA000(c); // 800A0CB8
  c->r[4]=c->r[31]+0x0000003Cu; // 800A0CBC
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 800A0CC0
  c->r[5]=R32(c->r[4]+0x00000004u); // 800A0CC4
  c->r[3]=0u+0x00000024u; // 800A0CC8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800A0CCC
  W32(c->r[1]+0x00000174u,c->r[6]); // 800A0CD0
  W32(c->r[1]+0x00000178u,c->r[5]); // 800A0CD4
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 800A0CD8
  c->lr=0x800A0CE0u; f_800D8ED0(c); // 800A0CDC
  cmps(c,0,(int32_t)c->r[3],0); // 800A0CE0
  if (crb(c,2)) { goto L_800A0D24; } // 800A0CE4
  c->r[0]=0u+0x00000000u; // 800A0CE8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A0CEC
  c->r[4]=0u+0x80220000u; // 800A0CF0
  c->r[6]=R32(c->r[1]+0x00000174u); // 800A0CF4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A0CF8
  c->r[4]=c->r[4]+0xFFFFA020u; // 800A0CFC
  c->r[5]=R32(c->r[1]+0x00000178u); // 800A0D00
  c->r[0]=0u+0x0000005Au; // 800A0D04
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A0D08
  c->r[4]=R32(c->r[1]+0x0000017Cu); // 800A0D0C
  W32(c->r[3]+0x00000010u,c->r[17]); // 800A0D10
  W32(c->r[3]+0x00000014u,c->r[6]); // 800A0D14
  W32(c->r[3]+0x00000018u,c->r[5]); // 800A0D18
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800A0D1C
  W32(c->r[3]+0x00000020u,c->r[0]); // 800A0D20
L_800A0D24:;
  c->r[5]=c->r[31]+0x00000048u; // 800A0D24
  c->r[4]=R32(c->r[30]+0x00000118u); // 800A0D28
  c->r[7]=R32(c->r[31]+0x00000048u); // 800A0D2C
  c->r[17]=c->r[3]|c->r[3]; // 800A0D30
  c->r[6]=R32(c->r[5]+0x00000004u); // 800A0D34
  c->r[3]=0u+0x0000002Cu; // 800A0D38
  c->r[0]=R32(c->r[5]+0x00000008u); // 800A0D3C
  W32(c->r[1]+0x00000180u,c->r[7]); // 800A0D40
  c->r[15]=R32(c->r[4]+0x00000010u); // 800A0D44
  W32(c->r[1]+0x00000184u,c->r[6]); // 800A0D48
  W32(c->r[1]+0x00000188u,c->r[0]); // 800A0D4C
  c->lr=0x800A0D54u; f_800D8ED0(c); // 800A0D50
  cmps(c,0,(int32_t)c->r[3],0); // 800A0D54
  if (crb(c,2)) { goto L_800A0DA0; } // 800A0D58
  c->r[7]=0u+0x00000000u; // 800A0D5C
  W32(c->r[3]+0x00000008u,c->r[7]); // 800A0D60
  c->r[6]=0u+0x80220000u; // 800A0D64
  c->r[5]=R32(c->r[1]+0x00000180u); // 800A0D68
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 800A0D6C
  c->r[6]=c->r[6]+0xFFFF9FC4u; // 800A0D70
  c->r[4]=R32(c->r[1]+0x00000184u); // 800A0D74
  W32(c->r[3]+0x00000000u,c->r[6]); // 800A0D78
  c->r[0]=R32(c->r[1]+0x00000188u); // 800A0D7C
  W32(c->r[3]+0x00000010u,c->r[15]); // 800A0D80
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0D84
  W32(c->r[3]+0x00000014u,c->r[5]); // 800A0D88
  W32(c->r[3]+0x00000018u,c->r[4]); // 800A0D8C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800A0D90
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800A0D94
  W32(c->r[3]+0x00000024u,c->r[7]); // 800A0D98
  W8(c->r[3]+0x00000028u,c->r[7]); // 800A0D9C
L_800A0DA0:;
  c->r[4]=c->r[31]+0x00000054u; // 800A0DA0
  c->r[6]=R32(c->r[31]+0x00000054u); // 800A0DA4
  c->r[5]=R32(c->r[4]+0x00000004u); // 800A0DA8
  c->r[18]=c->r[3]|c->r[3]; // 800A0DAC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800A0DB0
  c->r[3]=0u+0x00000024u; // 800A0DB4
  W32(c->r[1]+0x0000018Cu,c->r[6]); // 800A0DB8
  c->r[15]=R32(c->r[30]+0x000000B8u); // 800A0DBC
  W32(c->r[1]+0x00000190u,c->r[5]); // 800A0DC0
  W32(c->r[1]+0x00000194u,c->r[0]); // 800A0DC4
  c->lr=0x800A0DCCu; f_800D8ED0(c); // 800A0DC8
  cmps(c,0,(int32_t)c->r[3],0); // 800A0DCC
  if (crb(c,2)) { goto L_800A0E08; } // 800A0DD0
  c->r[0]=0u+0x00000000u; // 800A0DD4
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A0DD8
  c->r[6]=0u+0x80220000u; // 800A0DDC
  c->r[5]=R32(c->r[1]+0x0000018Cu); // 800A0DE0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A0DE4
  c->r[6]=c->r[6]+0xFFFF9F78u; // 800A0DE8
  c->r[4]=R32(c->r[1]+0x00000190u); // 800A0DEC
  W32(c->r[3]+0x00000000u,c->r[6]); // 800A0DF0
  c->r[0]=R32(c->r[1]+0x00000194u); // 800A0DF4
  W32(c->r[3]+0x00000014u,c->r[15]); // 800A0DF8
  W32(c->r[3]+0x00000018u,c->r[5]); // 800A0DFC
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800A0E00
  W32(c->r[3]+0x00000020u,c->r[0]); // 800A0E04
L_800A0E08:;
  c->r[20]=c->r[3]|c->r[3]; // 800A0E08
  c->r[3]=0u+0x00000014u; // 800A0E0C
  c->lr=0x800A0E14u; f_800D8ED0(c); // 800A0E10
  cmps(c,0,(int32_t)c->r[3],0); // 800A0E14
  if (crb(c,2)) { goto L_800A0E3C; } // 800A0E18
  c->r[0]=0u+0x00000000u; // 800A0E1C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A0E20
  c->r[4]=0u+0x80220000u; // 800A0E24
  {uint32_t ea=c->r[2]+0xFFFFA3E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0E28
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A0E2C
  c->r[4]=c->r[4]+0xFFFFFDA0u; // 800A0E30
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A0E34
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800A0E38
L_800A0E3C:;
  c->r[16]=c->r[3]|c->r[3]; // 800A0E3C
  c->r[3]=0u+0x00000030u; // 800A0E40
  c->lr=0x800A0E48u; f_800D8ED0(c); // 800A0E44
  cmps(c,0,(int32_t)c->r[3],0); // 800A0E48
  c->r[19]=c->r[3]|c->r[3]; // 800A0E4C
  if (crb(c,2)) { goto L_800A0E9C; } // 800A0E50
  c->r[15]=0u+0x00000000u; // 800A0E54
  W32(c->r[3]+0x00000008u,c->r[15]); // 800A0E58
  c->r[4]=0u+0x80210000u; // 800A0E5C
  W8(c->r[3]+0x0000000Cu,c->r[15]); // 800A0E60
  c->r[4]=c->r[4]+0xFFFFAEA8u; // 800A0E64
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A0E68
  c->r[3]=c->r[3]+0x00000018u; // 800A0E6C
  c->lr=0x800A0E74u; f_8015C1A0(c); // 800A0E70
  W8(c->r[19]+0x0000000Du,c->r[15]); // 800A0E74
  c->r[3]=0u+0x80220000u; // 800A0E78
  c->r[4]=c->r[19]+0x00000010u; // 800A0E7C
  c->r[0]=0u+0x00000001u; // 800A0E80
  W8(c->r[19]+0x0000000Fu,c->r[15]); // 800A0E84
  c->r[3]=c->r[3]+0xFFFFFC04u; // 800A0E88
  W32(c->r[19]+0x00000010u,c->r[15]); // 800A0E8C
  W32(c->r[19]+0x00000014u,c->r[4]); // 800A0E90
  W32(c->r[19]+0x00000000u,c->r[3]); // 800A0E94
  W8(c->r[19]+0x0000000Eu,c->r[0]); // 800A0E98
L_800A0E9C:;
  c->r[3]=c->r[19]|c->r[19]; // 800A0E9C
  c->r[4]=c->r[16]|c->r[16]; // 800A0EA0
  c->lr=0x800A0EA8u; f_800DA000(c); // 800A0EA4
  c->r[3]=c->r[19]|c->r[19]; // 800A0EA8
  c->r[4]=c->r[20]|c->r[20]; // 800A0EAC
  c->lr=0x800A0EB4u; f_800DA000(c); // 800A0EB0
  c->r[3]=c->r[19]|c->r[19]; // 800A0EB4
  c->r[4]=c->r[18]|c->r[18]; // 800A0EB8
  c->lr=0x800A0EC0u; f_800DA000(c); // 800A0EBC
  c->r[3]=c->r[19]|c->r[19]; // 800A0EC0
  c->r[4]=c->r[17]|c->r[17]; // 800A0EC4
  c->lr=0x800A0ECCu; f_800DA000(c); // 800A0EC8
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 800A0ECC
  c->r[4]=c->r[19]|c->r[19]; // 800A0ED0
  c->lr=0x800A0ED8u; f_800DA000(c); // 800A0ED4
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A0ED8
  c->r[4]=0u+0x00000064u; // 800A0EDC
  c->lr=0x800A0EE4u; f_800A8BE0(c); // 800A0EE0
  c->r[3]=R32(c->r[30]+0x00000094u); // 800A0EE4
  c->r[0]=0u+0x000000B4u; // 800A0EE8
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800A0EEC
  c->r[0]=c->r[3]+0x00000001u; // 800A0EF0
  W32(c->r[30]+0x00000094u,c->r[0]); // 800A0EF4
  goto L_800A0F08; // 800A0EF8
L_800A0EFC:;
  c->r[0]=0u+0x00000002u; // 800A0EFC
  W32(c->r[30]+0x00000008u,c->r[0]); // 800A0F00
  goto L_800A1034; // 800A0F04
L_800A0F08:;
  {uint32_t ea=c->r[30]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A0F08
  c->r[3]=c->r[30]+0x000000A4u; // 800A0F0C
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0F10
  {uint32_t ea=c->r[30]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0F14
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[0]); // 800A0F18
  {uint32_t ea=c->r[30]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0F1C
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0F20
  c->f[3]=c->ps1[3]=S(c->f[2]+c->f[1]); // 800A0F24
  {uint32_t ea=c->r[30]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A0F28
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 800A0F2C
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0F30
  {uint32_t ea=c->r[30]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0F34
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[2]); // 800A0F38
  {uint32_t ea=c->r[30]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A0F3C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A0F40
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[1]);} // 800A0F44
  c->r[4]=R32(c->r[30]+0x00000118u); // 800A0F48
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 800A0F4C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 800A0F50
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[1]);} // 800A0F54
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 800A0F58
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[2]);} // 800A0F5C
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[2]);} // 800A0F60
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[2]);} // 800A0F64
  {uint32_t ea=c->r[30]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0F68
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A0F6C
  {uint32_t ea=c->r[30]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0F70
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 800A0F74
  c->lr=0x800A0F7Cu; f_8004F0F0(c); // 800A0F78
  c->r[4]=R32(c->r[30]+0x000000B8u); // 800A0F7C
  c->r[3]=c->r[1]+0x00000168u; // 800A0F80
  c->lr=0x800A0F88u; f_80101230(c); // 800A0F84
  c->r[15]=c->r[31]+0x000000C4u; // 800A0F88
  c->r[3]=c->r[15]|c->r[15]; // 800A0F8C
  c->lr=0x800A0F94u; f_801D4D44(c); // 800A0F90
  c->r[6]=c->r[3]|c->r[3]; // 800A0F94
  c->r[4]=c->r[15]|c->r[15]; // 800A0F98
  c->r[3]=c->r[1]+0x00000168u; // 800A0F9C
  c->r[5]=0u+0x00000000u; // 800A0FA0
  c->lr=0x800A0FA8u; f_80092310(c); // 800A0FA4
  c->r[0]=R32(c->r[1]+0x00000168u); // 800A0FA8
  c->r[3]=c->r[3]+0x00000001u; // 800A0FAC
  c->r[3]=cntlz(c->r[3]); // 800A0FB0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A0FB4
  c->r[15]=rotl(c->r[3],27)&0x07FFFFFFu; // 800A0FB8
  if (crb(c,2)) { goto L_800A0FC8; } // 800A0FBC
  c->r[3]=R32(c->r[1]+0x00000170u); // 800A0FC0
  c->lr=0x800A0FC8u; f_800D93B0(c); // 800A0FC4
L_800A0FC8:;
  cmps(c,0,(int32_t)c->r[15],0); // 800A0FC8
  if (crb(c,2)) { goto L_800A0FF0; } // 800A0FCC
  {uint32_t ea=c->r[30]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0FD0
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A0FD4
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800A0FD8
  fcmp(c,0,c->f[1],c->f[0]); // 800A0FDC
  c->r[4]=c->cr; // 800A0FE0
  c->r[5]=0u+0x00000000u; // 800A0FE4
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 800A0FE8
  c->lr=0x800A0FF0u; f_80101870(c); // 800A0FEC
L_800A0FF0:;
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800A0FF0
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A0FF4
  c->lr=0x800A0FFCu; f_80101990(c); // 800A0FF8
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800A0FFC
  {uint32_t ea=c->r[30]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1000
  c->lr=0x800A1008u; f_80101920(c); // 800A1004
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800A1008
  c->r[4]=R32(c->r[30]+0x000000B0u); // 800A100C
  c->r[5]=R32(c->r[30]+0x000000B4u); // 800A1010
  c->lr=0x800A1018u; f_80100330(c); // 800A1014
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800A1018
  c->lr=0x800A1020u; f_80103410(c); // 800A101C
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800A1020
  c->lr=0x800A1028u; f_801063E0(c); // 800A1024
  c->r[3]=R32(c->r[30]+0x000000BCu); // 800A1028
  c->r[4]=R32(c->r[30]+0x000000B8u); // 800A102C
  c->lr=0x800A1034u; f_8004F400(c); // 800A1030
L_800A1034:;
  c->r[11]=c->r[1]+0x00000350u; // 800A1034
  {uint32_t ea=c->r[1]+0x000003D8u; psq_load(c,31,ea,0,0);} // 800A1038
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[31]=RF64(ea);} // 800A103C
  {uint32_t ea=c->r[1]+0x000003C8u; psq_load(c,30,ea,0,0);} // 800A1040
  {uint32_t ea=c->r[1]+0x000003C0u; c->f[30]=RF64(ea);} // 800A1044
  {uint32_t ea=c->r[1]+0x000003B8u; psq_load(c,29,ea,0,0);} // 800A1048
  {uint32_t ea=c->r[1]+0x000003B0u; c->f[29]=RF64(ea);} // 800A104C
  {uint32_t ea=c->r[1]+0x000003A8u; psq_load(c,28,ea,0,0);} // 800A1050
  {uint32_t ea=c->r[1]+0x000003A0u; c->f[28]=RF64(ea);} // 800A1054
  {uint32_t ea=c->r[1]+0x00000398u; psq_load(c,27,ea,0,0);} // 800A1058
  {uint32_t ea=c->r[1]+0x00000390u; c->f[27]=RF64(ea);} // 800A105C
  {uint32_t ea=c->r[1]+0x00000388u; psq_load(c,26,ea,0,0);} // 800A1060
  {uint32_t ea=c->r[1]+0x00000380u; c->f[26]=RF64(ea);} // 800A1064
  {uint32_t ea=c->r[1]+0x00000378u; psq_load(c,25,ea,0,0);} // 800A1068
  {uint32_t ea=c->r[1]+0x00000370u; c->f[25]=RF64(ea);} // 800A106C
  {uint32_t ea=c->r[1]+0x00000368u; psq_load(c,24,ea,0,0);} // 800A1070
  {uint32_t ea=c->r[1]+0x00000360u; c->f[24]=RF64(ea);} // 800A1074
  {uint32_t ea=c->r[1]+0x00000358u; psq_load(c,23,ea,0,0);} // 800A1078
  {uint32_t ea=c->r[1]+0x00000350u; c->f[23]=RF64(ea);} // 800A107C
  c->lr=0x800A1084u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A1080
  c->r[0]=R32(c->r[1]+0x000003E4u); // 800A1084
  c->lr=c->r[0]; // 800A1088
  c->r[1]=c->r[1]+0x000003E0u; // 800A108C
  return; // 800A1090
}

// fn_800A10A0
void f_800A10A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A10A0
  c->r[0]=c->lr; // 800A10A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A10A8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800A10AC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800A10B0
  c->r[30]=c->r[4]|c->r[4]; // 800A10B4
  W32(c->r[1]+0x00000034u,c->r[29]); // 800A10B8
  c->r[29]=c->r[3]|c->r[3]; // 800A10BC
  c->lr=0x800A10C4u; f_800D9CC0(c); // 800A10C0
  c->r[31]=c->r[3]|c->r[3]; // 800A10C4
  c->r[3]=0u+0x00000034u; // 800A10C8
  c->lr=0x800A10D0u; f_800D8ED0(c); // 800A10CC
  cmps(c,0,(int32_t)c->r[3],0); // 800A10D0
  if (crb(c,2)) { goto L_800A1170; } // 800A10D4
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A10D8
  c->r[4]=0u+0x80210000u; // 800A10DC
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A10E0
  c->r[4]=c->r[4]+0x0000293Cu; // 800A10E4
  c->r[0]=0u+0x00000000u; // 800A10E8
  cmps(c,0,(int32_t)c->r[30],0); // 800A10EC
  W32(c->r[1]+0x00000008u,c->r[4]); // 800A10F0
  c->r[7]=0u+0x00000001u; // 800A10F4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800A10F8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A10FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1100
  if (crb(c,2)) { goto L_800A110C; } // 800A1104
  c->r[7]=c->r[30]|c->r[30]; // 800A1108
L_800A110C:;
  c->r[6]=0u+0x00000000u; // 800A110C
  W32(c->r[3]+0x00000008u,c->r[6]); // 800A1110
  c->r[5]=0u+0x80210000u; // 800A1114
  c->r[4]=0u+0x80210000u; // 800A1118
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 800A111C
  c->r[5]=c->r[5]+0x00002908u; // 800A1120
  {uint32_t ea=c->r[2]+0xFFFFA340u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A1124
  c->r[4]=c->r[4]+0x0000293Cu; // 800A1128
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A112C
  c->r[0]=c->r[29]+0x0000007Cu; // 800A1130
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1134
  W32(c->r[3]+0x00000010u,c->r[4]); // 800A1138
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A113C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800A1140
  c->r[4]=R32(c->r[1]+0x00000014u); // 800A1144
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800A1148
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800A114C
  W32(c->r[3]+0x00000020u,c->r[7]); // 800A1150
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 800A1154
  W8(c->r[3]+0x00000028u,c->r[6]); // 800A1158
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A115C
  W32(c->r[1]+0x00000018u,c->r[7]); // 800A1160
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 800A1164
  W8(c->r[1]+0x00000020u,c->r[6]); // 800A1168
  W32(c->r[3]+0x00000030u,c->r[6]); // 800A116C
L_800A1170:;
  c->r[30]=c->r[29]+0x00000010u; // 800A1170
  c->r[4]=c->r[3]|c->r[3]; // 800A1174
  c->r[3]=c->r[30]|c->r[30]; // 800A1178
  c->lr=0x800A1180u; f_800DA000(c); // 800A117C
  c->r[3]=c->r[30]|c->r[30]; // 800A1180
  c->r[4]=c->r[31]|c->r[31]; // 800A1184
  c->lr=0x800A118Cu; f_800DA000(c); // 800A1188
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A118C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800A1190
  c->r[30]=R32(c->r[1]+0x00000038u); // 800A1194
  c->r[29]=R32(c->r[1]+0x00000034u); // 800A1198
  c->lr=c->r[0]; // 800A119C
  c->r[1]=c->r[1]+0x00000040u; // 800A11A0
  return; // 800A11A4
}

// fn_800A11B0
void f_800A11B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A11B0
  c->r[0]=c->lr; // 800A11B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A11B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A11BC
  c->r[31]=c->r[3]|c->r[3]; // 800A11C0
  c->r[3]=R32(c->r[3]+0x000000B8u); // 800A11C4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A11C8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A11CC
  c->lr=0x800A11D4u; f_801017C0(c); // 800A11D0
  c->r[3]=R32(c->r[31]+0x000000B8u); // 800A11D4
  c->lr=0x800A11DCu; f_80107F60(c); // 800A11D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A11DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A11E0
  c->lr=c->r[0]; // 800A11E4
  c->r[1]=c->r[1]+0x00000010u; // 800A11E8
  return; // 800A11EC
}

// fn_800A11F0
void f_800A11F0(Ctx* __restrict c) {
  return; // 800A11F0
}

// fn_800A1200
void f_800A1200(Ctx* __restrict c) {
  return; // 800A1200
}

// fn_800A1210
void f_800A1210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1210
  c->r[0]=c->lr; // 800A1214
  {uint32_t ea=c->r[2]+0xFFFFA3C8u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A1218
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A121C
  c->r[5]=c->r[1]+0x00000008u; // 800A1220
  c->r[6]=c->r[1]+0x00000020u; // 800A1224
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800A1228
  c->r[31]=0u+0x80210000u; // 800A122C
  c->r[31]=c->r[31]+0xFFFFAFB8u; // 800A1230
  W32(c->r[1]+0x00000048u,c->r[30]); // 800A1234
  c->r[30]=0u+0x00000000u; // 800A1238
  W32(c->r[1]+0x00000044u,c->r[29]); // 800A123C
  c->r[29]=c->r[3]|c->r[3]; // 800A1240
  c->r[3]=c->r[4]|c->r[4]; // 800A1244
  c->r[4]=c->r[1]+0x00000014u; // 800A1248
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A124C
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1250
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 800A1254
  {uint32_t ea=c->r[29]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A1258
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A125C
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 800A1260
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 800A1264
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800A1268
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800A126C
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1270
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A1274
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A1278
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A127C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A1280
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A1284
  {uint32_t ea=c->r[29]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1288
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A128C
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1290
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A1294
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1298
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A129C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A12A0
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A12A4
  c->ctr=c->r[12]; // 800A12A8
  if (true) { c->lr=0x800A12B0u; dispatch(c,c->ctr); } // 800A12AC
  cmps(c,0,(int32_t)c->r[3],0); // 800A12B0
  if (crb(c,2)) { goto L_800A1314; } // 800A12B4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A12B8
  c->r[30]=0u+0x00000001u; // 800A12BC
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A12C0
  {uint32_t ea=c->r[29]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A12C4
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A12C8
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800A12CC
  {uint32_t ea=c->r[29]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A12D0
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A12D4
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 800A12D8
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A12DC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A12E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A12E4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800A12E8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A12EC
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[2]);} // 800A12F0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A12F4
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A12F8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A12FC
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[1]);} // 800A1300
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1304
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A1308
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A130C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 800A1310
L_800A1314:;
  c->r[3]=c->r[30]|c->r[30]; // 800A1314
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800A1318
  c->r[30]=R32(c->r[1]+0x00000048u); // 800A131C
  c->r[29]=R32(c->r[1]+0x00000044u); // 800A1320
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A1324
  c->lr=c->r[0]; // 800A1328
  c->r[1]=c->r[1]+0x00000050u; // 800A132C
  return; // 800A1330
}

// fn_800A1340
void f_800A1340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1340
  c->r[0]=c->lr; // 800A1344
  W32(c->r[1]+0x00000084u,c->r[0]); // 800A1348
  c->r[11]=c->r[1]+0x00000080u; // 800A134C
  c->lr=0x800A1354u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A1350
  c->r[6]=c->r[3]|c->r[3]; // 800A1354
  c->r[5]=0u+0x80220000u; // 800A1358
  c->r[26]=c->r[4]|c->r[4]; // 800A135C
  c->r[3]=c->r[1]+0x00000020u; // 800A1360
  c->r[4]=c->r[5]+0xFFFF9F20u; // 800A1364
  c->r[5]=c->r[6]+0x00000001u; // 800A1368
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A136C
  c->lr=0x800A1374u; f_801DB784(c); // 800A1370
  c->r[31]=0u+0x00000000u; // 800A1374
  c->r[3]=0u+0x00000118u; // 800A1378
  c->lr=0x800A1380u; f_800D8ED0(c); // 800A137C
  cmps(c,0,(int32_t)c->r[3],0); // 800A1380
  c->r[30]=c->r[3]|c->r[3]; // 800A1384
  if (crb(c,2)) { goto L_800A1400; } // 800A1388
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A138C
  c->r[29]=c->r[13]+0xFFFF9E60u; // 800A1390
  c->r[0]=0u+0x00000000u; // 800A1394
  c->r[28]=c->r[1]+0x00000010u; // 800A1398
  c->r[31]=R32(c->r[3]+0x00000118u); // 800A139C
  c->r[3]=c->r[29]|c->r[29]; // 800A13A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A13A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A13A8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A13AC
  c->lr=0x800A13B4u; f_801D4D44(c); // 800A13B0
  c->r[27]=c->r[3]|c->r[3]; // 800A13B4
  c->r[3]=c->r[28]|c->r[28]; // 800A13B8
  c->r[4]=c->r[27]|c->r[27]; // 800A13BC
  c->lr=0x800A13C4u; f_800081B0(c); // 800A13C0
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800A13C4
  c->r[3]=c->r[28]|c->r[28]; // 800A13C8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A13CC
  c->r[6]=c->r[29]|c->r[29]; // 800A13D0
  c->r[7]=c->r[29]+c->r[27]; // 800A13D4
  c->r[8]=c->r[1]+0x00000008u; // 800A13D8
  c->r[4]=0u+0x00000000u; // 800A13DC
  c->r[5]=0u+0x00000000u; // 800A13E0
  c->lr=0x800A13E8u; f_80008370(c); // 800A13E4
  c->r[4]=c->r[31]|c->r[31]; // 800A13E8
  c->r[3]=c->r[30]|c->r[30]; // 800A13EC
  c->r[5]=c->r[28]|c->r[28]; // 800A13F0
  c->r[31]=0u+0x00000001u; // 800A13F4
  c->lr=0x800A13FCu; f_800FE130(c); // 800A13F8
  c->r[30]=c->r[3]|c->r[3]; // 800A13FC
L_800A1400:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A1400
  if (crb(c,2)) { goto L_800A141C; } // 800A1404
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A1408
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A140C
  if (crb(c,2)) { goto L_800A141C; } // 800A1410
  c->r[3]=R32(c->r[1]+0x00000018u); // 800A1414
  c->lr=0x800A141Cu; f_800D93B0(c); // 800A1418
L_800A141C:;
  {uint32_t ea=c->r[2]+0xFFFFA404u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A141C
  c->r[3]=c->r[30]|c->r[30]; // 800A1420
  c->lr=0x800A1428u; f_80101610(c); // 800A1424
  {uint32_t ea=c->r[26]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1428
  c->r[3]=c->r[30]|c->r[30]; // 800A142C
  {uint32_t ea=c->r[26]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A1430
  c->lr=0x800A1438u; f_801017C0(c); // 800A1434
  c->r[3]=c->r[30]|c->r[30]; // 800A1438
  c->r[4]=c->r[1]+0x00000020u; // 800A143C
  c->r[5]=0u+0x00000000u; // 800A1440
  c->lr=0x800A1448u; f_80100840(c); // 800A1444
  c->r[3]=c->r[30]|c->r[30]; // 800A1448
  c->lr=0x800A1450u; f_80101780(c); // 800A144C
  c->r[11]=c->r[1]+0x00000080u; // 800A1450
  c->r[3]=c->r[30]|c->r[30]; // 800A1454
  c->lr=0x800A145Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A1458
  c->r[0]=R32(c->r[1]+0x00000084u); // 800A145C
  c->lr=c->r[0]; // 800A1460
  c->r[1]=c->r[1]+0x00000080u; // 800A1464
  return; // 800A1468
}

// fn_800A1470
void f_800A1470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1470
  c->r[0]=c->lr; // 800A1474
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1478
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A147C
  c->r[31]=c->r[3]|c->r[3]; // 800A1480
  c->r[0]=R32(c->r[3]+0x00000010u); // 800A1484
  c->r[5]=R32(c->r[3]+0x00000014u); // 800A1488
  c->r[4]=R32(c->r[13]+0xFFFFADD8u); // 800A148C
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800A1490
  cmps(c,0,(int32_t)c->r[5],0); // 800A1494
  c->r[4]=c->r[4]+c->r[0]; // 800A1498
  c->r[0]=R32(c->r[4]+0x00000028u); // 800A149C
  if (crb(c,2)) { goto L_800A14B8; } // 800A14A0
  cmpu(c,0,c->r[5],0x00000001u); // 800A14A4
  if (crb(c,2)) { goto L_800A14CC; } // 800A14A8
  cmpu(c,0,c->r[5],0x00000002u); // 800A14AC
  if (crb(c,2)) { goto L_800A14E8; } // 800A14B0
  goto L_800A150C; // 800A14B4
L_800A14B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A14B8
  if (!crb(c,2)) { goto L_800A150C; } // 800A14BC
  c->r[0]=c->r[5]+0x00000001u; // 800A14C0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800A14C4
  goto L_800A150C; // 800A14C8
L_800A14CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800A14CC
  if (crb(c,2)) { goto L_800A150C; } // 800A14D0
  c->r[0]=c->r[5]+0x00000001u; // 800A14D4
  c->r[4]=0u+0x0000001Eu; // 800A14D8
  W32(c->r[3]+0x00000018u,c->r[4]); // 800A14DC
  W32(c->r[3]+0x00000014u,c->r[0]); // 800A14E0
  goto L_800A150C; // 800A14E4
L_800A14E8:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800A14E8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A14EC
  W32(c->r[3]+0x00000018u,c->r[0]); // 800A14F0
  if (!crb(c,2)) { goto L_800A150C; } // 800A14F4
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A14F8
  c->r[4]=0u+0x00000063u; // 800A14FC
  c->lr=0x800A1504u; f_800A8BE0(c); // 800A1500
  c->r[0]=0u+0x00000000u; // 800A1504
  W32(c->r[31]+0x00000014u,c->r[0]); // 800A1508
L_800A150C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A150C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1510
  c->lr=c->r[0]; // 800A1514
  c->r[1]=c->r[1]+0x00000010u; // 800A1518
  return; // 800A151C
}

// fn_800A1520
void f_800A1520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1520
  c->r[0]=c->lr; // 800A1524
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A1528
  c->r[11]=c->r[1]+0x00000040u; // 800A152C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800A1530
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800A1534
  c->lr=0x800A153Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A1538
  c->r[4]=R32(c->r[13]+0xFFFFADD8u); // 800A153C
  c->r[31]=c->r[3]|c->r[3]; // 800A1540
  c->r[0]=R32(c->r[4]+0x00000094u); // 800A1544
  cmps(c,0,(int32_t)c->r[0],3); // 800A1548
  if (!crb(c,2)) { goto L_800A155C; } // 800A154C
  c->r[0]=0u+0x00000002u; // 800A1550
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A1554
  goto L_800A17D4; // 800A1558
L_800A155C:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 800A155C
  cmps(c,0,(int32_t)c->r[4],0); // 800A1560
  if (crb(c,2)) { goto L_800A1574; } // 800A1564
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A1568
  W32(c->r[3]+0x00000014u,c->r[0]); // 800A156C
  goto L_800A17D4; // 800A1570
L_800A1574:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 800A1574
  cmps(c,0,(int32_t)c->r[0],22); // 800A1578
  if (crb(c,2)) { goto L_800A15A4; } // 800A157C
  cmps(c,0,(int32_t)c->r[0],23); // 800A1580
  if (crb(c,2)) { goto L_800A164C; } // 800A1584
  cmps(c,0,(int32_t)c->r[0],24); // 800A1588
  if (crb(c,2)) { goto L_800A16C8; } // 800A158C
  cmps(c,0,(int32_t)c->r[0],25); // 800A1590
  if (crb(c,2)) { goto L_800A1758; } // 800A1594
  cmps(c,0,(int32_t)c->r[0],27); // 800A1598
  if (crb(c,2)) { goto L_800A17CC; } // 800A159C
  goto L_800A17D4; // 800A15A0
L_800A15A4:;
  c->r[3]=R32(c->r[3]+0x00000028u); // 800A15A4
  c->r[29]=0u+0x80210000u; // 800A15A8
  c->r[0]=0u+0x00000000u; // 800A15AC
  {uint32_t ea=c->r[2]+0xFFFFA438u; c->f[31]=RF64(ea);} // 800A15B0
  W32(c->r[3]+0x00000034u,c->r[0]); // 800A15B4
  c->r[29]=c->r[29]+0xFFFFAFB8u; // 800A15B8
  c->r[27]=0u+0x00000000u; // 800A15BC
  c->r[28]=0u+0x00000000u; // 800A15C0
  c->r[4]=R32(c->r[29]+0x00000018u); // 800A15C4
  c->r[30]=0u+0x43300000u; // 800A15C8
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 800A15CC
  c->r[0]=R32(c->r[29]+0x00000020u); // 800A15D0
  W32(c->r[1]+0x00000008u,c->r[4]); // 800A15D4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800A15D8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A15DC
L_800A15E0:;
  c->r[0]=c->r[28]+0x00000050u; // 800A15E0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A15E4
  c->r[3]=0u+0x00000084u; // 800A15E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A15EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800A15F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800A15F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A15F8
  c->lr=0x800A1600u; f_800D8ED0(c); // 800A15FC
  cmps(c,0,(int32_t)c->r[3],0); // 800A1600
  if (crb(c,2)) { goto L_800A161C; } // 800A1604
  c->r[4]=R32(c->r[31]+0x00000028u); // 800A1608
  c->r[7]=c->r[27]|c->r[27]; // 800A160C
  c->r[5]=c->r[1]+0x00000008u; // 800A1610
  c->r[6]=c->r[29]+0x00000018u; // 800A1614
  c->lr=0x800A161Cu; f_800A3310(c); // 800A1618
L_800A161C:;
  c->r[27]=c->r[27]+0x00000001u; // 800A161C
  c->r[28]=c->r[28]+0x00000050u; // 800A1620
  cmpu(c,0,c->r[27],0x00000004u); // 800A1624
  if (crb(c,0)) { IRQCHK(c); goto L_800A15E0; } // 800A1628
  c->r[3]=R32(c->r[31]+0x00000010u); // 800A162C
  c->r[0]=0u+0x00000004u; // 800A1630
  c->r[4]=0u+0x00000078u; // 800A1634
  W32(c->r[31]+0x00000018u,c->r[0]); // 800A1638
  c->r[0]=c->r[3]+0x00000001u; // 800A163C
  W32(c->r[31]+0x00000014u,c->r[4]); // 800A1640
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A1644
  goto L_800A17D4; // 800A1648
L_800A164C:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 800A164C
  cmps(c,0,(int32_t)c->r[4],0); // 800A1650
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A1654
  W32(c->r[3]+0x00000018u,c->r[0]); // 800A1658
  if (crb(c,1)) { goto L_800A1680; } // 800A165C
  c->r[5]=R32(c->r[3]+0x00000028u); // 800A1660
  c->r[6]=0u+0x00000001u; // 800A1664
  c->r[4]=0u+0x0000003Cu; // 800A1668
  c->r[0]=0u+0x0000001Bu; // 800A166C
  W32(c->r[5]+0x00000034u,c->r[6]); // 800A1670
  W32(c->r[3]+0x00000014u,c->r[4]); // 800A1674
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A1678
  goto L_800A17D4; // 800A167C
L_800A1680:;
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A1680
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800A1684
  cmps(c,0,(int32_t)c->r[0],1); // 800A1688
  if (!crb(c,1)) { goto L_800A16A0; } // 800A168C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A1690
  c->lr=0x800A1698u; f_800FBF40(c); // 800A1694
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 800A1698
  if (crb(c,2)) { goto L_800A16AC; } // 800A169C
L_800A16A0:;
  c->r[0]=0u+0xFFFFFFFFu; // 800A16A0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800A16A4
  goto L_800A16BC; // 800A16A8
L_800A16AC:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A16AC
  c->lr=0x800A16B4u; f_800FBF40(c); // 800A16B0
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 800A16B4
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800A16B8
L_800A16BC:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 800A16BC
  c->r[0]=c->r[3]+0x00000001u; // 800A16C0
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A16C4
L_800A16C8:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A16C8
  c->lr=0x800A16D0u; f_800FBF40(c); // 800A16CC
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A16D0
  c->r[28]=rotl(c->r[3],2)&0x0000000Cu; // 800A16D4
  c->r[3]=c->r[0]+c->r[28]; // 800A16D8
  c->r[0]=R32(c->r[3]+0x00000014u); // 800A16DC
  cmps(c,0,(int32_t)c->r[0],0); // 800A16E0
  if (!crb(c,2)) { goto L_800A17D4; } // 800A16E4
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800A16E8
  cmps(c,0,(int32_t)c->r[0],-1); // 800A16EC
  if (!crb(c,2)) { goto L_800A173C; } // 800A16F0
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A16F4
  c->r[4]=0u+0x00000062u; // 800A16F8
  c->lr=0x800A1700u; f_800A8BE0(c); // 800A16FC
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A1700
  c->r[4]=0u+0x00000001u; // 800A1704
  c->r[3]=c->r[0]+c->r[28]; // 800A1708
  W32(c->r[3]+0x00000014u,c->r[4]); // 800A170C
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A1710
  c->lr=0x800A1718u; f_800126B0(c); // 800A1714
  {uint32_t ea=c->r[2]+0xFFFFA374u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A1718
  {uint32_t ea=c->r[2]+0xFFFFA430u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A171C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A1720
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800A1724
  c->lr=0x800A172Cu; f_801D5958(c); // 800A1728
  c->r[0]=0u+0x00000017u; // 800A172C
  W32(c->r[31]+0x00000014u,c->r[3]); // 800A1730
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A1734
  goto L_800A17D4; // 800A1738
L_800A173C:;
  c->r[0]=0u+0x00000002u; // 800A173C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800A1740
  c->r[3]=0u+0x0000001Eu; // 800A1744
  c->r[0]=0u+0xFFFFFFFFu; // 800A1748
  W32(c->r[31]+0x00000014u,c->r[3]); // 800A174C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800A1750
  goto L_800A17D4; // 800A1754
L_800A1758:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 800A1758
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A175C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800A1760
  if (crb(c,1)) { goto L_800A1788; } // 800A1764
  c->r[5]=R32(c->r[3]+0x00000028u); // 800A1768
  c->r[6]=0u+0x00000001u; // 800A176C
  c->r[4]=0u+0x0000003Cu; // 800A1770
  c->r[0]=0u+0x0000001Bu; // 800A1774
  W32(c->r[5]+0x00000034u,c->r[6]); // 800A1778
  W32(c->r[3]+0x00000014u,c->r[4]); // 800A177C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A1780
  goto L_800A17D4; // 800A1784
L_800A1788:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A1788
  c->lr=0x800A1790u; f_800FBF40(c); // 800A178C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A1790
  c->r[3]=rotl(c->r[3],2)&0x0000000Cu; // 800A1794
  c->r[3]=c->r[0]+c->r[3]; // 800A1798
  c->r[0]=R32(c->r[3]+0x00000014u); // 800A179C
  cmps(c,0,(int32_t)c->r[0],0); // 800A17A0
  if (crb(c,2)) { goto L_800A17B8; } // 800A17A4
  c->r[3]=R32(c->r[31]+0x00000018u); // 800A17A8
  c->r[0]=c->r[3]+0x00000001u; // 800A17AC
  W32(c->r[31]+0x00000018u,c->r[0]); // 800A17B0
  goto L_800A17D4; // 800A17B4
L_800A17B8:;
  c->r[0]=0u+0x00000078u; // 800A17B8
  W32(c->r[31]+0x00000014u,c->r[0]); // 800A17BC
  c->r[0]=0u+0x00000001u; // 800A17C0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800A17C4
  goto L_800A17D4; // 800A17C8
L_800A17CC:;
  c->r[0]=0u+0x00000002u; // 800A17CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A17D0
L_800A17D4:;
  c->r[11]=c->r[1]+0x00000040u; // 800A17D4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800A17D8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800A17DC
  c->lr=0x800A17E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A17E0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A17E4
  c->lr=c->r[0]; // 800A17E8
  c->r[1]=c->r[1]+0x00000050u; // 800A17EC
  return; // 800A17F0
}

// fn_800A1800
void f_800A1800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1800
  c->r[0]=c->lr; // 800A1804
  cmps(c,0,(int32_t)c->r[3],0); // 800A1808
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A180C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1810
  c->r[31]=c->r[4]|c->r[4]; // 800A1814
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A1818
  c->r[30]=c->r[3]|c->r[3]; // 800A181C
  if (crb(c,2)) { goto L_800A1874; } // 800A1820
  c->r[4]=0u+0x80220000u; // 800A1824
  c->r[5]=R32(c->r[3]+0x00000028u); // 800A1828
  c->r[4]=c->r[4]+0xFFFFA0A8u; // 800A182C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A1830
  c->r[0]=R32(c->r[5]+0x00000004u); // 800A1834
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A1838
  W32(c->r[5]+0x00000004u,c->r[0]); // 800A183C
  if (!crb(c,2)) { goto L_800A1864; } // 800A1840
  cmps(c,0,(int32_t)c->r[5],0); // 800A1844
  if (crb(c,2)) { goto L_800A1864; } // 800A1848
  c->r[12]=R32(c->r[5]+0x00000000u); // 800A184C
  c->r[3]=c->r[5]|c->r[5]; // 800A1850
  c->r[4]=0u+0x00000001u; // 800A1854
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A1858
  c->ctr=c->r[12]; // 800A185C
  if (true) { c->lr=0x800A1864u; dispatch(c,c->ctr); } // 800A1860
L_800A1864:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A1864
  if (!crb(c,1)) { goto L_800A1874; } // 800A1868
  c->r[3]=c->r[30]|c->r[30]; // 800A186C
  c->lr=0x800A1874u; f_800D93B0(c); // 800A1870
L_800A1874:;
  c->r[3]=c->r[30]|c->r[30]; // 800A1874
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1878
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A187C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1880
  c->lr=c->r[0]; // 800A1884
  c->r[1]=c->r[1]+0x00000010u; // 800A1888
  return; // 800A188C
}

// fn_800A1890
void f_800A1890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1890
  c->r[0]=c->lr; // 800A1894
  {uint32_t ea=c->r[2]+0xFFFFA440u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1898
  W32(c->r[1]+0x00000064u,c->r[0]); // 800A189C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800A18A0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800A18A4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800A18A8
  W32(c->r[1]+0x00000048u,c->r[30]); // 800A18AC
  c->r[30]=c->r[3]|c->r[3]; // 800A18B0
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A18B4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800A18B8
  c->lr=0x800A18C0u; f_801D5958(c); // 800A18BC
  c->r[0]=0u+0xFFFFFF00u; // 800A18C0
  {uint32_t ea=c->r[30]+0x00000074u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A18C4
  c->r[31]=c->r[3]|c->r[0]; // 800A18C8
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A18CC
  c->r[4]=0u+0x00000004u; // 800A18D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A18D4
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A18D8
  c->ctr=c->r[12]; // 800A18DC
  if (true) { c->lr=0x800A18E4u; dispatch(c,c->ctr); } // 800A18E0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A18E4
  c->r[0]=0u+0x43300000u; // 800A18E8
  {uint32_t ea=c->r[2]+0xFFFFA3F8u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A18EC
  c->r[4]=c->r[31]|c->r[31]; // 800A18F0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800A18F4
  {uint32_t ea=c->r[30]+0x00000078u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A18F8
  {uint32_t ea=c->r[2]+0xFFFFA3BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A18FC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800A1900
  c->f[0]=-c->f[2]; // 800A1904
  c->f[7]=c->ps1[7]=S(c->f[2]*c->f[1]); // 800A1908
  c->r[3]=R32(c->r[1]+0x0000003Cu); // 800A190C
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[1]); // 800A1910
  {uint32_t ea=c->r[2]+0xFFFFA3D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A1914
  c->r[3]=c->r[3]^0x80000000u; // 800A1918
  W32(c->r[1]+0x00000044u,c->r[3]); // 800A191C
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[31]); // 800A1920
  {uint32_t ea=c->r[2]+0xFFFFA428u; c->f[5]=RF64(ea);} // 800A1924
  W32(c->r[1]+0x00000040u,c->r[0]); // 800A1928
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[31]); // 800A192C
  c->r[3]=c->r[1]+0x00000028u; // 800A1930
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 800A1934
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800A1938
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[5]); // 800A193C
  {uint32_t ea=c->r[2]+0xFFFFA344u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1940
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800A1944
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 800A1948
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[5]); // 800A194C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A1950
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[5]); // 800A1954
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 800A1958
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800A195C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800A1960
  c->r[7]=R32(c->r[1]+0x00000018u); // 800A1964
  c->r[5]=R32(c->r[1]+0x00000020u); // 800A1968
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[6]);} // 800A196C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 800A1970
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[7]);} // 800A1974
  W32(c->r[1]+0x00000028u,c->r[7]); // 800A1978
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800A197C
  W32(c->r[1]+0x00000030u,c->r[5]); // 800A1980
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A1984
  c->lr=0x800A198Cu; f_800FA5D0(c); // 800A1988
  c->r[0]=R32(c->r[1]+0x00000064u); // 800A198C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 800A1990
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800A1994
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800A1998
  c->r[30]=R32(c->r[1]+0x00000048u); // 800A199C
  c->lr=c->r[0]; // 800A19A0
  c->r[1]=c->r[1]+0x00000060u; // 800A19A4
  return; // 800A19A8
}

// fn_800A19B0
void f_800A19B0(Ctx* __restrict c) {
  return; // 800A19B0
}

// fn_800A19C0
void f_800A19C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000006Cu; // 800A19C0
  return; // 800A19C4
}

// fn_800A19D0
void f_800A19D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A19D0
  c->r[0]=c->lr; // 800A19D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A19D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A19DC
  c->r[31]=c->r[3]|c->r[3]; // 800A19E0
  c->r[12]=c->r[31]+0x00000014u; // 800A19E4
  c->r[3]=R32(c->r[3]+0x00000010u); // 800A19E8
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A19EC
  c->r[4]=R32(c->r[31]+0x00000024u); // 800A19F0
  c->r[5]=R8(c->r[31]+0x00000028u); // 800A19F4
  c->lr=0x800A19FCu; f_801D5688(c); // 800A19F8
  c->r[0]=c->r[0]|0x00000000u; // 800A19FC
  c->r[0]=0u+0x00000002u; // 800A1A00
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A1A04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1A08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1A0C
  c->lr=c->r[0]; // 800A1A10
  c->r[1]=c->r[1]+0x00000010u; // 800A1A14
  return; // 800A1A18
}

// fn_800A1A20
void f_800A1A20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1A20
  c->r[0]=c->lr; // 800A1A24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1A28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1A2C
  c->r[31]=c->r[3]|c->r[3]; // 800A1A30
  c->r[12]=c->r[31]+0x00000014u; // 800A1A34
  c->r[3]=R32(c->r[3]+0x00000010u); // 800A1A38
  c->r[4]=R32(c->r[31]+0x00000020u); // 800A1A3C
  c->lr=0x800A1A44u; f_801D5688(c); // 800A1A40
  c->r[0]=c->r[0]|0x00000000u; // 800A1A44
  c->r[0]=0u+0x00000002u; // 800A1A48
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A1A4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1A50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1A54
  c->lr=c->r[0]; // 800A1A58
  c->r[1]=c->r[1]+0x00000010u; // 800A1A5C
  return; // 800A1A60
}

// fn_800A1A70
void f_800A1A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1A70
  c->r[0]=c->lr; // 800A1A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1A78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1A7C
  c->r[31]=c->r[3]|c->r[3]; // 800A1A80
  c->r[12]=c->r[31]+0x00000018u; // 800A1A84
  c->r[3]=R32(c->r[3]+0x00000014u); // 800A1A88
  c->lr=0x800A1A90u; f_801D5688(c); // 800A1A8C
  c->r[0]=c->r[0]|0x00000000u; // 800A1A90
  c->r[0]=0u+0x00000002u; // 800A1A94
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A1A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1AA0
  c->lr=c->r[0]; // 800A1AA4
  c->r[1]=c->r[1]+0x00000010u; // 800A1AA8
  return; // 800A1AAC
}

// fn_800A1AB0
void f_800A1AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1AB0
  c->r[0]=c->lr; // 800A1AB4
  c->r[6]=R32(c->r[4]+0x00000000u); // 800A1AB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A1ABC
  c->r[0]=rotl(c->r[6],1)&0x00000001u; cr0(c,c->r[0]); // 800A1AC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A1AC4
  c->r[31]=c->r[4]|c->r[4]; // 800A1AC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A1ACC
  c->r[30]=c->r[3]|c->r[3]; // 800A1AD0
  if (!crb(c,2)) { goto L_800A1AF0; } // 800A1AD4
  c->r[5]=R32(c->r[4]+0x00000004u); // 800A1AD8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800A1ADC
  W32(c->r[3]+0x00000000u,c->r[6]); // 800A1AE0
  W32(c->r[3]+0x00000004u,c->r[5]); // 800A1AE4
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A1AE8
  goto L_800A1B30; // 800A1AEC
L_800A1AF0:;
  c->r[0]=0u+0x00000000u; // 800A1AF0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A1AF4
  c->r[4]=R32(c->r[4]+0x00000004u); // 800A1AF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A1AFC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A1B00
  c->lr=0x800A1B08u; f_800081B0(c); // 800A1B04
  c->r[5]=R8(c->r[1]+0x00000008u); // 800A1B08
  c->r[3]=c->r[30]|c->r[30]; // 800A1B0C
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 800A1B10
  c->r[8]=c->r[1]+0x0000000Cu; // 800A1B14
  c->r[6]=R32(c->r[31]+0x00000008u); // 800A1B18
  c->r[4]=0u+0x00000000u; // 800A1B1C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800A1B20
  c->r[5]=0u+0x00000000u; // 800A1B24
  c->r[7]=c->r[6]+c->r[0]; // 800A1B28
  c->lr=0x800A1B30u; f_80008370(c); // 800A1B2C
L_800A1B30:;
  c->r[3]=c->r[30]|c->r[30]; // 800A1B30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A1B34
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A1B38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A1B3C
  c->lr=c->r[0]; // 800A1B40
  c->r[1]=c->r[1]+0x00000020u; // 800A1B44
  return; // 800A1B48
}

// fn_800A1B50
void f_800A1B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1B50
  c->r[0]=c->lr; // 800A1B54
  cmps(c,0,(int32_t)c->r[3],0); // 800A1B58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1B5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1B60
  c->r[31]=c->r[4]|c->r[4]; // 800A1B64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A1B68
  c->r[30]=c->r[3]|c->r[3]; // 800A1B6C
  if (crb(c,2)) { goto L_800A1BA8; } // 800A1B70
  if (crb(c,2)) { goto L_800A1B98; } // 800A1B74
  c->r[3]=addc(c,c->r[3],0x00000040u,0); cr0(c,c->r[3]); // 800A1B78
  if (crb(c,2)) { goto L_800A1B88; } // 800A1B7C
  c->r[4]=0u+0x00000000u; // 800A1B80
  c->lr=0x800A1B88u; f_800D9E90(c); // 800A1B84
L_800A1B88:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800A1B88
  if (crb(c,2)) { goto L_800A1B98; } // 800A1B8C
  c->r[4]=0u+0x00000000u; // 800A1B90
  c->lr=0x800A1B98u; f_800D9E90(c); // 800A1B94
L_800A1B98:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A1B98
  if (!crb(c,1)) { goto L_800A1BA8; } // 800A1B9C
  c->r[3]=c->r[30]|c->r[30]; // 800A1BA0
  c->lr=0x800A1BA8u; f_800D93B0(c); // 800A1BA4
L_800A1BA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800A1BA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1BAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A1BB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1BB4
  c->lr=c->r[0]; // 800A1BB8
  c->r[1]=c->r[1]+0x00000010u; // 800A1BBC
  return; // 800A1BC0
}

// fn_800A1BD0
void f_800A1BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1BD0
  c->r[0]=c->lr; // 800A1BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800A1BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1BDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1BE0
  c->r[31]=c->r[3]|c->r[3]; // 800A1BE4
  if (crb(c,2)) { goto L_800A1BF8; } // 800A1BE8
  cmps(c,0,(int32_t)c->r[4],0); // 800A1BEC
  if (!crb(c,1)) { goto L_800A1BF8; } // 800A1BF0
  c->lr=0x800A1BF8u; f_800D93B0(c); // 800A1BF4
L_800A1BF8:;
  c->r[3]=c->r[31]|c->r[31]; // 800A1BF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1C00
  c->lr=c->r[0]; // 800A1C04
  c->r[1]=c->r[1]+0x00000010u; // 800A1C08
  return; // 800A1C0C
}

// fn_800A1C10
void f_800A1C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1C10
  c->r[0]=c->lr; // 800A1C14
  cmps(c,0,(int32_t)c->r[3],0); // 800A1C18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1C1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1C20
  c->r[31]=c->r[3]|c->r[3]; // 800A1C24
  if (crb(c,2)) { goto L_800A1C38; } // 800A1C28
  cmps(c,0,(int32_t)c->r[4],0); // 800A1C2C
  if (!crb(c,1)) { goto L_800A1C38; } // 800A1C30
  c->lr=0x800A1C38u; f_800D93B0(c); // 800A1C34
L_800A1C38:;
  c->r[3]=c->r[31]|c->r[31]; // 800A1C38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1C3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1C40
  c->lr=c->r[0]; // 800A1C44
  c->r[1]=c->r[1]+0x00000010u; // 800A1C48
  return; // 800A1C4C
}

// fn_800A1C50
void f_800A1C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1C50
  c->r[0]=c->lr; // 800A1C54
  cmps(c,0,(int32_t)c->r[3],0); // 800A1C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1C5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1C60
  c->r[31]=c->r[3]|c->r[3]; // 800A1C64
  if (crb(c,2)) { goto L_800A1C78; } // 800A1C68
  cmps(c,0,(int32_t)c->r[4],0); // 800A1C6C
  if (!crb(c,1)) { goto L_800A1C78; } // 800A1C70
  c->lr=0x800A1C78u; f_800D93B0(c); // 800A1C74
L_800A1C78:;
  c->r[3]=c->r[31]|c->r[31]; // 800A1C78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1C80
  c->lr=c->r[0]; // 800A1C84
  c->r[1]=c->r[1]+0x00000010u; // 800A1C88
  return; // 800A1C8C
}

// fn_800A1C90
void f_800A1C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1C90
  c->r[0]=c->lr; // 800A1C94
  cmps(c,0,(int32_t)c->r[3],0); // 800A1C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A1C9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A1CA0
  c->r[31]=c->r[3]|c->r[3]; // 800A1CA4
  if (crb(c,2)) { goto L_800A1CB8; } // 800A1CA8
  cmps(c,0,(int32_t)c->r[4],0); // 800A1CAC
  if (!crb(c,1)) { goto L_800A1CB8; } // 800A1CB0
  c->lr=0x800A1CB8u; f_800D93B0(c); // 800A1CB4
L_800A1CB8:;
  c->r[3]=c->r[31]|c->r[31]; // 800A1CB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A1CBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A1CC0
  c->lr=c->r[0]; // 800A1CC4
  c->r[1]=c->r[1]+0x00000010u; // 800A1CC8
  return; // 800A1CCC
}

// fn_800A1CD0
void f_800A1CD0(Ctx* __restrict c) {
  c->r[6]=0u+0x80260000u; // 800A1CD0
  c->r[0]=0u+0x00000000u; // 800A1CD4
  c->r[3]=c->r[6]+0xFFFFBD2Cu; // 800A1CD8
  c->r[4]=0u+0x800A0000u; // 800A1CDC
  c->r[5]=0u+0x80260000u; // 800A1CE0
  W32(c->r[6]+0xFFFFBD2Cu,c->r[0]); // 800A1CE4
  c->r[4]=c->r[4]+0x00001D00u; // 800A1CE8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A1CEC
  c->r[5]=c->r[5]+0xFFFFBD20u; // 800A1CF0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A1CF4
  f_801D4E28(c); return; // 800A1CF8
}

// fn_800A1D00
void f_800A1D00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1D00
  c->r[0]=c->lr; // 800A1D04
  cmps(c,0,(int32_t)c->r[3],0); // 800A1D08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A1D0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A1D10
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A1D14
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A1D18
  c->r[29]=c->r[4]|c->r[4]; // 800A1D1C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800A1D20
  c->r[28]=c->r[3]|c->r[3]; // 800A1D24
  if (crb(c,2)) { goto L_800A1D9C; } // 800A1D28
  if (crb(c,2)) { goto L_800A1D8C; } // 800A1D2C
  if (crb(c,2)) { goto L_800A1D8C; } // 800A1D30
  c->r[5]=R32(c->r[3]+0x00000000u); // 800A1D34
  cmps(c,0,(int32_t)c->r[5],0); // 800A1D38
  if (crb(c,2)) { goto L_800A1D8C; } // 800A1D3C
  c->r[30]=R32(c->r[3]+0x00000004u); // 800A1D40
  c->r[4]=rotl(c->r[30],4)&0xFFFFFFF0u; // 800A1D44
  c->r[0]=c->r[30]-c->r[30]; // 800A1D48
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A1D4C
  c->r[31]=c->r[5]+c->r[4]; // 800A1D50
  goto L_800A1D7C; // 800A1D54
L_800A1D58:;
  c->r[31]=addc(c,c->r[31],0xFFFFFFF0u,0); cr0(c,c->r[31]); // 800A1D58
  if (crb(c,2)) { goto L_800A1D78; } // 800A1D5C
  if (crb(c,2)) { goto L_800A1D78; } // 800A1D60
  c->r[0]=R32(c->r[31]+0x00000000u); // 800A1D64
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A1D68
  if (crb(c,2)) { goto L_800A1D78; } // 800A1D6C
  c->r[3]=R32(c->r[31]+0x00000008u); // 800A1D70
  c->lr=0x800A1D78u; f_800D93B0(c); // 800A1D74
L_800A1D78:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800A1D78
L_800A1D7C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800A1D7C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A1D58; } // 800A1D80
  c->r[3]=R32(c->r[28]+0x00000000u); // 800A1D84
  c->lr=0x800A1D8Cu; f_800D93B0(c); // 800A1D88
L_800A1D8C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A1D8C
  if (!crb(c,1)) { goto L_800A1D9C; } // 800A1D90
  c->r[3]=c->r[28]|c->r[28]; // 800A1D94
  c->lr=0x800A1D9Cu; f_800D93B0(c); // 800A1D98
L_800A1D9C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A1D9C
  c->r[3]=c->r[28]|c->r[28]; // 800A1DA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A1DA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A1DA8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800A1DAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A1DB0
  c->lr=c->r[0]; // 800A1DB4
  c->r[1]=c->r[1]+0x00000020u; // 800A1DB8
  return; // 800A1DBC
}

// fn_800A1DC0
void f_800A1DC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A1DC0
  f_800A1210(c); return; // 800A1DC4
}

// fn_800A1DD0
void f_800A1DD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A1DD0
  f_800A1200(c); return; // 800A1DD4
}

// fn_800A1DE0
void f_800A1DE0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A1DE0
  f_800A11F0(c); return; // 800A1DE4
}

// fn_800A1DF0
void f_800A1DF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A1DF0
  f_8009DFD0(c); return; // 800A1DF4
}

// fn_800A1E00
void f_800A1E00(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 800A1E00
  f_800A19C0(c); return; // 800A1E04
}

// fn_800A1E10
void f_800A1E10(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 800A1E10
  f_8009DFD0(c); return; // 800A1E14
}

// fn_800A1E20
void f_800A1E20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A1E20
  c->r[0]=c->lr; // 800A1E24
  W32(c->r[1]+0x00000094u,c->r[0]); // 800A1E28
  c->r[11]=c->r[1]+0x00000090u; // 800A1E2C
  c->lr=0x800A1E34u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A1E30
  c->r[28]=c->r[4]|c->r[4]; // 800A1E34
  c->r[31]=c->r[3]|c->r[3]; // 800A1E38
  c->r[27]=c->r[5]|c->r[5]; // 800A1E3C
  c->r[26]=c->r[6]|c->r[6]; // 800A1E40
  c->r[4]=0u+0x00000005u; // 800A1E44
  c->lr=0x800A1E4Cu; f_8000BF70(c); // 800A1E48
  c->r[3]=c->r[31]+0x00000010u; // 800A1E4C
  c->lr=0x800A1E54u; f_80008DD0(c); // 800A1E50
  c->r[3]=c->r[31]+0x00000020u; // 800A1E54
  c->lr=0x800A1E5Cu; f_80047210(c); // 800A1E58
  c->r[5]=0u+0x80220000u; // 800A1E5C
  c->r[3]=c->r[31]+0x0000008Cu; // 800A1E60
  c->r[5]=c->r[5]+0xFFFFA318u; // 800A1E64
  W32(c->r[31]+0x00000000u,c->r[5]); // 800A1E68
  c->r[4]=c->r[5]+0x00000014u; // 800A1E6C
  c->r[0]=c->r[5]+0x0000002Cu; // 800A1E70
  W32(c->r[31]+0x00000010u,c->r[4]); // 800A1E74
  W32(c->r[31]+0x00000020u,c->r[0]); // 800A1E78
  c->lr=0x800A1E80u; f_8004F070(c); // 800A1E7C
  W32(c->r[31]+0x000000A8u,c->r[26]); // 800A1E80
  c->r[30]=0u+0x80210000u; // 800A1E84
  c->r[30]=c->r[30]+0xFFFFAFB8u; // 800A1E88
  c->r[3]=R32(c->r[26]+0x00000004u); // 800A1E8C
  c->r[0]=c->r[3]+0x00000001u; // 800A1E90
  W32(c->r[26]+0x00000004u,c->r[0]); // 800A1E94
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1E98
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A1E9C
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1EA0
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800A1EA4
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1EA8
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800A1EAC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1EB0
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A1EB4
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1EB8
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800A1EBC
  {uint32_t ea=c->r[30]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1EC0
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800A1EC4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1EC8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800A1ECC
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1ED0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A1ED4
  {uint32_t ea=c->r[30]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1ED8
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800A1EDC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A1EE0
  c->lr=0x800A1EE8u; f_800FBF40(c); // 800A1EE4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800A1EE8
  c->r[3]=c->r[30]+0x00000014u; // 800A1EEC
  if (crb(c,2)) { goto L_800A1EF8; } // 800A1EF0
  c->r[3]=c->r[30]+0x00000008u; // 800A1EF4
L_800A1EF8:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1EF8
  c->r[6]=0u+0x80210000u; // 800A1EFC
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800A1F00
  c->r[5]=rotl(c->r[27],0)&0x00000003u; // 800A1F04
  c->r[4]=0u+0x80220000u; // 800A1F08
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1F0C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1F10
  c->r[6]=c->r[6]+0xFFFFAFB8u; // 800A1F14
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800A1F18
  c->r[30]=0u+0x00000000u; // 800A1F1C
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1F20
  c->r[0]=0u+0x00000001u; // 800A1F24
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A1F28
  c->r[3]=c->r[1]+0x00000030u; // 800A1F2C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A1F30
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A1F34
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A1F38
  c->r[4]=c->r[4]+0xFFFFA300u; // 800A1F3C
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[3]);} // 800A1F40
  c->r[5]=c->r[5]+0x00000001u; // 800A1F44
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[2]);} // 800A1F48
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800A1F4C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800A1F50
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1F54
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800A1F58
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1F5C
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800A1F60
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A1F64
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800A1F68
  W32(c->r[31]+0x00000078u,c->r[30]); // 800A1F6C
  W32(c->r[31]+0x0000007Cu,c->r[30]); // 800A1F70
  W8(c->r[31]+0x00000080u,c->r[30]); // 800A1F74
  W8(c->r[31]+0x00000081u,c->r[30]); // 800A1F78
  W32(c->r[31]+0x00000084u,c->r[0]); // 800A1F7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A1F80
  c->lr=0x800A1F88u; f_801DB784(c); // 800A1F84
  c->r[29]=0u+0x00000000u; // 800A1F88
  c->r[3]=0u+0x00000118u; // 800A1F8C
  c->lr=0x800A1F94u; f_800D8ED0(c); // 800A1F90
  cmps(c,0,(int32_t)c->r[3],0); // 800A1F94
  c->r[28]=c->r[3]|c->r[3]; // 800A1F98
  if (crb(c,2)) { goto L_800A2010; } // 800A1F9C
  c->r[4]=R32(c->r[13]+0xFFFFADC0u); // 800A1FA0
  c->r[27]=c->r[1]+0x00000024u; // 800A1FA4
  c->r[3]=c->r[1]+0x00000030u; // 800A1FA8
  c->r[29]=R32(c->r[4]+0x00000118u); // 800A1FAC
  W32(c->r[1]+0x00000024u,c->r[30]); // 800A1FB0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A1FB4
  W32(c->r[1]+0x0000002Cu,c->r[30]); // 800A1FB8
  c->lr=0x800A1FC0u; f_801D4D44(c); // 800A1FBC
  c->r[30]=c->r[3]|c->r[3]; // 800A1FC0
  c->r[3]=c->r[27]|c->r[27]; // 800A1FC4
  c->r[4]=c->r[30]|c->r[30]; // 800A1FC8
  c->lr=0x800A1FD0u; f_800081B0(c); // 800A1FCC
  c->r[6]=c->r[1]+0x00000030u; // 800A1FD0
  c->r[0]=R8(c->r[1]+0x00000014u); // 800A1FD4
  c->r[7]=c->r[6]|c->r[6]; // 800A1FD8
  W8(c->r[1]+0x00000010u,c->r[0]); // 800A1FDC
  c->r[3]=c->r[27]|c->r[27]; // 800A1FE0
  c->r[8]=c->r[1]+0x00000010u; // 800A1FE4
  c->r[7]=c->r[7]+c->r[30]; // 800A1FE8
  c->r[4]=0u+0x00000000u; // 800A1FEC
  c->r[5]=0u+0x00000000u; // 800A1FF0
  c->lr=0x800A1FF8u; f_80008370(c); // 800A1FF4
  c->r[4]=c->r[29]|c->r[29]; // 800A1FF8
  c->r[3]=c->r[28]|c->r[28]; // 800A1FFC
  c->r[5]=c->r[27]|c->r[27]; // 800A2000
  c->r[29]=0u+0x00000001u; // 800A2004
  c->lr=0x800A200Cu; f_800FE130(c); // 800A2008
  c->r[28]=c->r[3]|c->r[3]; // 800A200C
L_800A2010:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A2010
  W32(c->r[31]+0x000000A0u,c->r[28]); // 800A2014
  if (crb(c,2)) { goto L_800A2030; } // 800A2018
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A201C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A2020
  if (crb(c,2)) { goto L_800A2030; } // 800A2024
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800A2028
  c->lr=0x800A2030u; f_800D93B0(c); // 800A202C
L_800A2030:;
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A2030
  {uint32_t ea=c->r[2]+0xFFFFA44Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2034
  c->lr=0x800A203Cu; f_80101610(c); // 800A2038
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A203C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2040
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2044
  c->lr=0x800A204Cu; f_801017C0(c); // 800A2048
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A204C
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2050
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A2054
  fcmp(c,0,c->f[1],c->f[0]); // 800A2058
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800A205C
  if (!crb(c,2)) { goto L_800A206C; } // 800A2060
  c->r[4]=c->r[13]+0xFFFF9EE0u; // 800A2064
  goto L_800A2070; // 800A2068
L_800A206C:;
  c->r[4]=c->r[13]+0xFFFF9EE8u; // 800A206C
L_800A2070:;
  c->r[5]=0u+0x00000000u; // 800A2070
  c->lr=0x800A2078u; f_80100840(c); // 800A2074
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A2078
  c->lr=0x800A2080u; f_80101780(c); // 800A207C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A2080
  c->lr=0x800A2088u; f_800FC0C0(c); // 800A2084
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A2088
  {uint32_t ea=c->r[31]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A208C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800A2090
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2094
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A2098
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 800A209C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A20A0
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 800A20A4
  fcmp(c,0,c->f[1],c->f[0]); // 800A20A8
  if (!crb(c,0)) { goto L_800A20B4; } // 800A20AC
  c->f[1]=-c->f[1]; // 800A20B0
L_800A20B4:;
  c->lr=0x800A20B8u; f_80101A00(c); // 800A20B4
  c->r[29]=0u+0x00000000u; // 800A20B8
  c->r[3]=0u+0x00000118u; // 800A20BC
  c->lr=0x800A20C4u; f_800D8ED0(c); // 800A20C0
  cmps(c,0,(int32_t)c->r[3],0); // 800A20C4
  c->r[27]=c->r[3]|c->r[3]; // 800A20C8
  if (crb(c,2)) { goto L_800A2148; } // 800A20CC
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A20D0
  c->r[29]=0u+0x80220000u; // 800A20D4
  c->r[29]=c->r[29]+0xFFFFA30Cu; // 800A20D8
  c->r[0]=0u+0x00000000u; // 800A20DC
  c->r[28]=R32(c->r[3]+0x00000118u); // 800A20E0
  c->r[3]=c->r[29]|c->r[29]; // 800A20E4
  c->r[30]=c->r[1]+0x00000018u; // 800A20E8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A20EC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A20F0
  W32(c->r[1]+0x00000020u,c->r[0]); // 800A20F4
  c->lr=0x800A20FCu; f_801D4D44(c); // 800A20F8
  c->r[26]=c->r[3]|c->r[3]; // 800A20FC
  c->r[3]=c->r[30]|c->r[30]; // 800A2100
  c->r[4]=c->r[26]|c->r[26]; // 800A2104
  c->lr=0x800A210Cu; f_800081B0(c); // 800A2108
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800A210C
  c->r[3]=c->r[30]|c->r[30]; // 800A2110
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A2114
  c->r[6]=c->r[29]|c->r[29]; // 800A2118
  c->r[7]=c->r[29]+c->r[26]; // 800A211C
  c->r[8]=c->r[1]+0x00000008u; // 800A2120
  c->r[4]=0u+0x00000000u; // 800A2124
  c->r[5]=0u+0x00000000u; // 800A2128
  c->lr=0x800A2130u; f_80008370(c); // 800A212C
  c->r[3]=c->r[27]|c->r[27]; // 800A2130
  c->r[4]=c->r[28]|c->r[28]; // 800A2134
  c->r[5]=c->r[30]|c->r[30]; // 800A2138
  c->r[29]=0u+0x00000001u; // 800A213C
  c->lr=0x800A2144u; f_800FE130(c); // 800A2140
  c->r[27]=c->r[3]|c->r[3]; // 800A2144
L_800A2148:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A2148
  W32(c->r[31]+0x000000A4u,c->r[27]); // 800A214C
  if (crb(c,2)) { goto L_800A2168; } // 800A2150
  c->r[0]=R32(c->r[1]+0x00000018u); // 800A2154
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A2158
  if (crb(c,2)) { goto L_800A2168; } // 800A215C
  c->r[3]=R32(c->r[1]+0x00000020u); // 800A2160
  c->lr=0x800A2168u; f_800D93B0(c); // 800A2164
L_800A2168:;
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2168
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A216C
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800A2170
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800A2174
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2178
  c->lr=0x800A2180u; f_801017C0(c); // 800A217C
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800A2180
  c->r[4]=c->r[13]+0xFFFF9EF0u; // 800A2184
  c->r[5]=0u+0x00000000u; // 800A2188
  c->lr=0x800A2190u; f_80100840(c); // 800A218C
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800A2190
  c->lr=0x800A2198u; f_80101790(c); // 800A2194
  c->r[3]=0u+0x0000000Cu; // 800A2198
  c->lr=0x800A21A0u; f_800D8ED0(c); // 800A219C
  cmps(c,0,(int32_t)c->r[3],0); // 800A21A0
  if (crb(c,2)) { goto L_800A21B0; } // 800A21A4
  c->r[4]=0u+0x00000001u; // 800A21A8
  c->lr=0x800A21B0u; f_8004F180(c); // 800A21AC
L_800A21B0:;
  W32(c->r[31]+0x00000088u,c->r[3]); // 800A21B0
  c->r[0]=0u+0x00000001u; // 800A21B4
  W8(c->r[3]+0x00000008u,c->r[0]); // 800A21B8
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A21BC
  c->lr=0x800A21C4u; f_800FC0C0(c); // 800A21C0
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A21C4
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A21C8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A21CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A21D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800A21D4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A21D8
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A21DC
  c->lr=0x800A21E4u; f_800FC0C0(c); // 800A21E0
  {uint32_t ea=c->r[2]+0xFFFFA45Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A21E4
  {uint32_t ea=c->r[2]+0xFFFFA458u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A21E8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A21EC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A21F0
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A21F4
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A21F8
  c->lr=0x800A2200u; f_800FC0C0(c); // 800A21FC
  {uint32_t ea=c->r[2]+0xFFFFA460u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2200
  c->r[0]=0u+0x00000000u; // 800A2204
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800A2208
  c->r[11]=c->r[1]+0x00000090u; // 800A220C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800A2210
  c->r[3]=c->r[31]|c->r[31]; // 800A2214
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 800A2218
  c->lr=0x800A2220u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A221C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800A2220
  c->lr=c->r[0]; // 800A2224
  c->r[1]=c->r[1]+0x00000090u; // 800A2228
  return; // 800A222C
}

// fn_800A2230
void f_800A2230(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2230
  c->r[0]=c->lr; // 800A2234
  cmps(c,0,(int32_t)c->r[3],0); // 800A2238
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A223C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A2240
  c->r[31]=c->r[4]|c->r[4]; // 800A2244
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A2248
  c->r[30]=c->r[3]|c->r[3]; // 800A224C
  if (crb(c,2)) { goto L_800A2330; } // 800A2250
  c->r[5]=0u+0x80220000u; // 800A2254
  c->r[6]=R32(c->r[3]+0x000000A8u); // 800A2258
  c->r[5]=c->r[5]+0xFFFFA318u; // 800A225C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A2260
  c->r[4]=c->r[5]+0x00000014u; // 800A2264
  c->r[0]=c->r[5]+0x0000002Cu; // 800A2268
  W32(c->r[3]+0x00000010u,c->r[4]); // 800A226C
  W32(c->r[3]+0x00000020u,c->r[0]); // 800A2270
  c->r[0]=R32(c->r[6]+0x00000004u); // 800A2274
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A2278
  W32(c->r[6]+0x00000004u,c->r[0]); // 800A227C
  if (!crb(c,2)) { goto L_800A22A4; } // 800A2280
  cmps(c,0,(int32_t)c->r[6],0); // 800A2284
  if (crb(c,2)) { goto L_800A22A4; } // 800A2288
  c->r[12]=R32(c->r[6]+0x00000000u); // 800A228C
  c->r[3]=c->r[6]|c->r[6]; // 800A2290
  c->r[4]=0u+0x00000001u; // 800A2294
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A2298
  c->ctr=c->r[12]; // 800A229C
  if (true) { c->lr=0x800A22A4u; dispatch(c,c->ctr); } // 800A22A0
L_800A22A4:;
  c->r[3]=R32(c->r[30]+0x00000088u); // 800A22A4
  c->r[4]=0u+0x00000001u; // 800A22A8
  c->lr=0x800A22B0u; f_8004F270(c); // 800A22AC
  c->r[3]=R32(c->r[30]+0x000000A0u); // 800A22B0
  cmps(c,0,(int32_t)c->r[3],0); // 800A22B4
  if (crb(c,2)) { goto L_800A22D0; } // 800A22B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A22BC
  c->r[4]=0u+0x00000001u; // 800A22C0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A22C4
  c->ctr=c->r[12]; // 800A22C8
  if (true) { c->lr=0x800A22D0u; dispatch(c,c->ctr); } // 800A22CC
L_800A22D0:;
  c->r[3]=R32(c->r[30]+0x000000A4u); // 800A22D0
  cmps(c,0,(int32_t)c->r[3],0); // 800A22D4
  if (crb(c,2)) { goto L_800A22F0; } // 800A22D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A22DC
  c->r[4]=0u+0x00000001u; // 800A22E0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A22E4
  c->ctr=c->r[12]; // 800A22E8
  if (true) { c->lr=0x800A22F0u; dispatch(c,c->ctr); } // 800A22EC
L_800A22F0:;
  c->r[3]=c->r[30]+0x0000008Cu; // 800A22F0
  c->r[4]=0u+0xFFFFFFFFu; // 800A22F4
  c->lr=0x800A22FCu; f_8004F0A0(c); // 800A22F8
  c->r[3]=c->r[30]+0x00000020u; // 800A22FC
  c->r[4]=0u+0x00000000u; // 800A2300
  c->lr=0x800A2308u; f_80047250(c); // 800A2304
  c->r[3]=c->r[30]+0x00000010u; // 800A2308
  c->r[4]=0u+0x00000000u; // 800A230C
  c->lr=0x800A2314u; f_80008E10(c); // 800A2310
  c->r[3]=c->r[30]|c->r[30]; // 800A2314
  c->r[4]=0u+0x00000000u; // 800A2318
  c->lr=0x800A2320u; f_8000BFD0(c); // 800A231C
  cmps(c,0,(int32_t)c->r[31],0); // 800A2320
  if (!crb(c,1)) { goto L_800A2330; } // 800A2324
  c->r[3]=c->r[30]|c->r[30]; // 800A2328
  c->lr=0x800A2330u; f_800D93B0(c); // 800A232C
L_800A2330:;
  c->r[3]=c->r[30]|c->r[30]; // 800A2330
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A2334
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A2338
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A233C
  c->lr=c->r[0]; // 800A2340
  c->r[1]=c->r[1]+0x00000010u; // 800A2344
  return; // 800A2348
}

// fn_800A2350
void f_800A2350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2350
  c->r[0]=c->lr; // 800A2354
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A2358
  c->r[4]=c->r[1]+0x0000000Cu; // 800A235C
  c->r[5]=c->r[1]+0x00000008u; // 800A2360
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800A2364
  c->r[31]=c->r[3]|c->r[3]; // 800A2368
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A236C
  c->r[3]=R32(c->r[3]+0x00000088u); // 800A2370
  c->lr=0x800A2378u; f_8004F390(c); // 800A2374
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A2378
  cmps(c,0,(int32_t)c->r[4],0); // 800A237C
  if (crb(c,2)) { goto L_800A24C0; } // 800A2380
  c->r[0]=R32(c->r[31]+0x00000084u); // 800A2384
  c->r[3]=c->r[31]+0x0000008Cu; // 800A2388
  c->r[0]=c->r[0]-c->r[4]; // 800A238C
  W32(c->r[31]+0x00000084u,c->r[0]); // 800A2390
  c->lr=0x800A2398u; f_8004F0E0(c); // 800A2394
  c->r[0]=R32(c->r[31]+0x00000084u); // 800A2398
  cmps(c,0,(int32_t)c->r[0],0); // 800A239C
  if (crb(c,1)) { goto L_800A24C0; } // 800A23A0
  {uint32_t ea=c->r[2]+0xFFFFA464u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A23A4
  c->r[4]=0u+0x80210000u; // 800A23A8
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A23AC
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A23B0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A23B4
  c->r[3]=c->r[1]+0x00000010u; // 800A23B8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[1]); // 800A23BC
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A23C0
  c->r[4]=c->r[4]+0x00000018u; // 800A23C4
  c->r[5]=0u+0x00000001u; // 800A23C8
  c->r[6]=0u+0x00000000u; // 800A23CC
  c->r[7]=0u+0x00000001u; // 800A23D0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A23D4
  c->r[8]=0u+0x00000090u; // 800A23D8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A23DC
  {uint32_t ea=c->r[31]+0x00000070u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A23E0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A23E4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800A23E8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A23EC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800A23F0
  {uint32_t ea=c->r[31]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A23F4
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A23F8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800A23FC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A2400
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A2404
  c->lr=0x800A240Cu; f_8004FB70(c); // 800A2408
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A240C
  c->r[4]=c->r[1]+0x00000010u; // 800A2410
  c->lr=0x800A2418u; f_80012CE0(c); // 800A2414
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A2418
  c->r[5]=0u+0x00000000u; // 800A241C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800A2420
  c->lr=0x800A2428u; f_80012AF0(c); // 800A2424
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A2428
  c->r[4]=0u+0x00000030u; // 800A242C
  c->lr=0x800A2434u; f_800A8BE0(c); // 800A2430
  c->r[5]=R32(c->r[31]+0x000000A8u); // 800A2434
  c->r[6]=R32(c->r[13]+0xFFFFADD8u); // 800A2438
  c->r[3]=R32(c->r[5]+0x00000048u); // 800A243C
  c->r[4]=c->r[3]+0x00000001u; // 800A2440
  W32(c->r[5]+0x00000048u,c->r[4]); // 800A2444
  c->r[0]=R32(c->r[6]+0x000000B8u); // 800A2448
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A244C
  c->r[0]=c->r[3]+0x00000006u; // 800A2450
  cmpu(c,0,c->r[4],c->r[0]); // 800A2454
  if (crb(c,0)) { goto L_800A24B4; } // 800A2458
  c->r[4]=R32(c->r[31]+0x000000A8u); // 800A245C
  c->r[0]=0u+0x00000000u; // 800A2460
  c->r[3]=0u+0x00000068u; // 800A2464
  W32(c->r[4]+0x00000048u,c->r[0]); // 800A2468
  c->lr=0x800A2470u; f_800D8ED0(c); // 800A246C
  cmps(c,0,(int32_t)c->r[3],0); // 800A2470
  c->r[30]=c->r[3]|c->r[3]; // 800A2474
  if (crb(c,2)) { goto L_800A24B4; } // 800A2478
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A247C
  c->lr=0x800A2484u; f_800FBF40(c); // 800A2480
  c->r[4]=0u+0xAAAB0000u; // 800A2484
  c->r[5]=c->r[3]|c->r[3]; // 800A2488
  c->r[0]=c->r[4]+0xFFFFAAABu; // 800A248C
  c->r[3]=c->r[30]|c->r[30]; // 800A2490
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 800A2494
  c->r[4]=c->r[31]+0x00000030u; // 800A2498
  c->r[6]=0u+0x00000000u; // 800A249C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800A24A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800A24A4
  c->r[5]=c->r[5]-c->r[0]; // 800A24A8
  c->r[5]=c->r[5]+0x00000001u; // 800A24AC
  c->lr=0x800A24B4u; f_80054060(c); // 800A24B0
L_800A24B4:;
  c->r[0]=0u+0x00000002u; // 800A24B4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A24B8
  goto L_800A277C; // 800A24BC
L_800A24C0:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800A24C0
  cmps(c,0,(int32_t)c->r[3],0); // 800A24C4
  if (crb(c,2)) { goto L_800A24E0; } // 800A24C8
  cmps(c,0,(int32_t)c->r[3],1); // 800A24CC
  if (crb(c,2)) { goto L_800A2510; } // 800A24D0
  cmps(c,0,(int32_t)c->r[3],2); // 800A24D4
  if (crb(c,2)) { goto L_800A25AC; } // 800A24D8
  goto L_800A25FC; // 800A24DC
L_800A24E0:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 800A24E0
  cmps(c,0,(int32_t)c->r[0],0); // 800A24E4
  if (crb(c,2)) { goto L_800A25FC; } // 800A24E8
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A24EC
  c->lr=0x800A24F4u; f_800FC0C0(c); // 800A24F0
  {uint32_t ea=c->r[2]+0xFFFFA46Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A24F4
  {uint32_t ea=c->r[2]+0xFFFFA468u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A24F8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A24FC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A2500
  c->f[0]=-c->f[0]; // 800A2504
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A2508
  goto L_800A25FC; // 800A250C
L_800A2510:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 800A2510
  cmps(c,0,(int32_t)c->r[0],0); // 800A2514
  if (!crb(c,2)) { goto L_800A2540; } // 800A2518
  {uint32_t ea=c->r[2]+0xFFFFA470u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A251C
  c->r[0]=c->r[3]+0x00000001u; // 800A2520
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2524
  {uint32_t ea=c->r[2]+0xFFFFA474u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2528
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A252C
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A2530
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 800A2534
  W32(c->r[31]+0x00000078u,c->r[0]); // 800A2538
  goto L_800A25FC; // 800A253C
L_800A2540:;
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A2540
  c->r[4]=c->r[31]+0x00000030u; // 800A2544
  c->lr=0x800A254Cu; f_80012930(c); // 800A2548
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A254C
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2550
  fcmp(c,0,c->f[2],c->f[0]); // 800A2554
  if (!crb(c,0)) { goto L_800A2560; } // 800A2558
  c->f[2]=-c->f[2]; // 800A255C
L_800A2560:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2560
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2564
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 800A2568
  fcmp(c,0,c->f[2],c->f[0]); // 800A256C
  if (!crb(c,0)) { goto L_800A25FC; } // 800A2570
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2574
  {uint32_t ea=c->r[2]+0xFFFFA468u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2578
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A257C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800A2580
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 800A2584
  c->lr=0x800A258Cu; f_801017C0(c); // 800A2588
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A258C
  c->r[4]=0u+0x00000000u; // 800A2590
  c->r[5]=0u+0x00000000u; // 800A2594
  c->lr=0x800A259Cu; f_80101870(c); // 800A2598
  c->r[3]=R32(c->r[31]+0x00000078u); // 800A259C
  c->r[0]=c->r[3]+0x00000001u; // 800A25A0
  W32(c->r[31]+0x00000078u,c->r[0]); // 800A25A4
  goto L_800A25FC; // 800A25A8
L_800A25AC:;
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A25AC
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A25B0
  fcmp(c,0,c->f[1],c->f[0]); // 800A25B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800A25B8
  if (!crb(c,2)) { goto L_800A25C8; } // 800A25BC
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A25C0
  goto L_800A25CC; // 800A25C4
L_800A25C8:;
  {uint32_t ea=c->r[2]+0xFFFFA478u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A25C8
L_800A25CC:;
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A25CC
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A25D0
  fcmp(c,0,c->f[1],c->f[0]); // 800A25D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800A25D8
  if (!crb(c,2)) { goto L_800A25E8; } // 800A25DC
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A25E0
  goto L_800A25EC; // 800A25E4
L_800A25E8:;
  {uint32_t ea=c->r[2]+0xFFFFA478u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A25E8
L_800A25EC:;
  fcmp(c,0,c->f[0],c->f[2]); // 800A25EC
  if (!crb(c,2)) { goto L_800A25FC; } // 800A25F0
  c->r[0]=0u+0x00000000u; // 800A25F4
  W32(c->r[31]+0x00000078u,c->r[0]); // 800A25F8
L_800A25FC:;
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A25FC
  c->r[4]=c->r[31]+0x00000030u; // 800A2600
  {uint32_t ea=c->r[2]+0xFFFFA47Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2604
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A2608
  c->r[12]=R32(c->r[12]+0x00000020u); // 800A260C
  c->ctr=c->r[12]; // 800A2610
  if (true) { c->lr=0x800A2618u; dispatch(c,c->ctr); } // 800A2614
  cmps(c,0,(int32_t)c->r[3],0); // 800A2618
  if (!crb(c,2)) { goto L_800A2688; } // 800A261C
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A2620
  c->r[4]=c->r[31]+0x00000030u; // 800A2624
  c->lr=0x800A262Cu; f_80012930(c); // 800A2628
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A262C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2630
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2634
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800A2638
  fcmp(c,0,c->f[1],c->f[0]); // 800A263C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800A2640
  if (!crb(c,2)) { goto L_800A2650; } // 800A2644
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2648
  goto L_800A2654; // 800A264C
L_800A2650:;
  {uint32_t ea=c->r[2]+0xFFFFA478u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2650
L_800A2654:;
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2654
  {uint32_t ea=c->r[2]+0xFFFFA450u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2658
  fcmp(c,0,c->f[1],c->f[0]); // 800A265C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800A2660
  if (!crb(c,2)) { goto L_800A2670; } // 800A2664
  {uint32_t ea=c->r[2]+0xFFFFA454u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2668
  goto L_800A2674; // 800A266C
L_800A2670:;
  {uint32_t ea=c->r[2]+0xFFFFA478u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2670
L_800A2674:;
  fcmp(c,0,c->f[2],c->f[0]); // 800A2674
  if (crb(c,2)) { goto L_800A2688; } // 800A2678
  c->r[0]=0u+0x00000002u; // 800A267C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A2680
  goto L_800A277C; // 800A2684
L_800A2688:;
  {uint32_t ea=c->r[2]+0xFFFFA480u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A2688
  c->r[3]=c->r[31]+0x0000008Cu; // 800A268C
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2690
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2694
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[1]); // 800A2698
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800A269C
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A26A0
  c->f[7]=c->ps1[7]=S(c->f[5]*c->f[2]); // 800A26A4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A26A8
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[0]); // 800A26AC
  {uint32_t ea=c->r[31]+0x00000048u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A26B0
  c->f[6]=c->ps1[6]=S(c->f[3]+c->f[4]); // 800A26B4
  {uint32_t ea=c->r[2]+0xFFFFA484u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A26B8
  c->f[8]=c->ps1[8]=S(c->f[5]+c->f[7]); // 800A26BC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A26C0
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[2]); // 800A26C4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A26C8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[6]); // 800A26CC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[8]); // 800A26D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[5]); // 800A26D4
  c->f[7]=c->ps1[7]=S(c->f[6]-c->f[2]); // 800A26D8
  {uint32_t ea=c->r[31]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A26DC
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[3]); // 800A26E0
  c->f[6]=c->ps1[6]=S(c->f[5]-c->f[0]); // 800A26E4
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A26E8
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[7]); // 800A26EC
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[8]); // 800A26F0
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A26F4
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[6]); // 800A26F8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[0]); // 800A26FC
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2700
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 800A2704
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 800A2708
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A270C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[8]);} // 800A2710
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800A2714
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[7]);} // 800A2718
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[6]);} // 800A271C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[3]);} // 800A2720
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 800A2724
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 800A2728
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[3]);} // 800A272C
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[1]);} // 800A2730
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[0]);} // 800A2734
  c->lr=0x800A273Cu; f_8004F0F0(c); // 800A2738
  c->r[4]=0u+0xC0400000u; // 800A273C
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A2740
  c->r[5]=c->r[4]+0x00004060u; // 800A2744
  c->r[4]=0u+0x00000001u; // 800A2748
  c->lr=0x800A2750u; f_80100330(c); // 800A274C
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A2750
  c->lr=0x800A2758u; f_80103410(c); // 800A2754
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A2758
  c->lr=0x800A2760u; f_801063E0(c); // 800A275C
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800A2760
  c->lr=0x800A2768u; f_80103410(c); // 800A2764
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800A2768
  c->lr=0x800A2770u; f_801063E0(c); // 800A276C
  c->r[3]=R32(c->r[31]+0x00000088u); // 800A2770
  c->r[4]=R32(c->r[31]+0x000000A4u); // 800A2774
  c->lr=0x800A277Cu; f_8004F400(c); // 800A2778
L_800A277C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A277C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800A2780
  c->r[30]=R32(c->r[1]+0x00000028u); // 800A2784
  c->lr=c->r[0]; // 800A2788
  c->r[1]=c->r[1]+0x00000030u; // 800A278C
  return; // 800A2790
}

// fn_800A27A0
void f_800A27A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A27A0
  c->r[0]=c->lr; // 800A27A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A27A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A27AC
  c->r[31]=c->r[3]|c->r[3]; // 800A27B0
  c->r[3]=R32(c->r[3]+0x000000A0u); // 800A27B4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A27B8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A27BC
  c->lr=0x800A27C4u; f_801017C0(c); // 800A27C0
  c->r[3]=R32(c->r[31]+0x000000A0u); // 800A27C4
  c->lr=0x800A27CCu; f_80107F60(c); // 800A27C8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A27CC
  {uint32_t ea=c->r[2]+0xFFFFA448u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A27D0
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800A27D4
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800A27D8
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A27DC
  c->lr=0x800A27E4u; f_801017C0(c); // 800A27E0
  c->r[3]=R32(c->r[31]+0x000000A4u); // 800A27E4
  c->lr=0x800A27ECu; f_80107F60(c); // 800A27E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A27EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A27F0
  c->lr=c->r[0]; // 800A27F4
  c->r[1]=c->r[1]+0x00000010u; // 800A27F8
  return; // 800A27FC
}

// fn_800A2800
void f_800A2800(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800A2800
  W8(c->r[3]+0x00000080u,c->r[0]); // 800A2804
  W8(c->r[3]+0x00000081u,c->r[0]); // 800A2808
  return; // 800A280C
}

// fn_800A2810
void f_800A2810(Ctx* __restrict c) {
  return; // 800A2810
}

// fn_800A2820
void f_800A2820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2820
  c->r[0]=c->lr; // 800A2824
  {uint32_t ea=c->r[2]+0xFFFFA468u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A2828
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A282C
  c->r[5]=c->r[1]+0x00000008u; // 800A2830
  c->r[6]=c->r[1]+0x00000020u; // 800A2834
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800A2838
  c->r[31]=0u+0x80210000u; // 800A283C
  c->r[31]=c->r[31]+0xFFFFAFB8u; // 800A2840
  W32(c->r[1]+0x00000048u,c->r[30]); // 800A2844
  c->r[30]=0u+0x00000000u; // 800A2848
  W32(c->r[1]+0x00000044u,c->r[29]); // 800A284C
  c->r[29]=c->r[4]|c->r[4]; // 800A2850
  c->r[4]=c->r[1]+0x00000014u; // 800A2854
  W32(c->r[1]+0x00000040u,c->r[28]); // 800A2858
  c->r[28]=c->r[3]|c->r[3]; // 800A285C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2860
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2864
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 800A2868
  {uint32_t ea=c->r[3]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A286C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2870
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 800A2874
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 800A2878
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800A287C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800A2880
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2884
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A2888
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A288C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2890
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A2894
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A2898
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A289C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A28A0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A28A4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A28A8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A28AC
  c->r[3]=c->r[29]|c->r[29]; // 800A28B0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A28B4
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A28B8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A28BC
  c->ctr=c->r[12]; // 800A28C0
  if (true) { c->lr=0x800A28C8u; dispatch(c,c->ctr); } // 800A28C4
  cmps(c,0,(int32_t)c->r[3],0); // 800A28C8
  if (crb(c,2)) { goto L_800A2934; } // 800A28CC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A28D0
  c->r[0]=0u+0x00000001u; // 800A28D4
  {uint32_t ea=c->r[28]+0x00000048u; WF32(ea,c->f[0]);} // 800A28D8
  c->r[30]=0u+0x00000001u; // 800A28DC
  {uint32_t ea=c->r[28]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A28E0
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A28E4
  {uint32_t ea=c->r[28]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A28E8
  {uint32_t ea=c->r[28]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A28EC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A28F0
  {uint32_t ea=c->r[28]+0x00000050u; WF32(ea,c->f[0]);} // 800A28F4
  {uint32_t ea=c->r[28]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A28F8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A28FC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A2900
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800A2904
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A2908
  {uint32_t ea=c->r[28]+0x00000030u; WF32(ea,c->f[2]);} // 800A290C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2910
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A2914
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A2918
  {uint32_t ea=c->r[28]+0x00000034u; WF32(ea,c->f[1]);} // 800A291C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2920
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A2924
  W8(c->r[28]+0x00000081u,c->r[0]); // 800A2928
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A292C
  {uint32_t ea=c->r[28]+0x00000038u; WF32(ea,c->f[0]);} // 800A2930
L_800A2934:;
  c->r[5]=0u+0x80210000u; // 800A2934
  {uint32_t ea=c->r[2]+0xFFFFA464u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2938
  c->r[5]=c->r[5]+0xFFFFAFB8u; // 800A293C
  {uint32_t ea=c->r[28]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A2940
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2944
  c->r[3]=c->r[29]|c->r[29]; // 800A2948
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A294C
  c->r[4]=c->r[1]+0x00000014u; // 800A2950
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[0]); // 800A2954
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2958
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800A295C
  c->r[5]=c->r[1]+0x00000020u; // 800A2960
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800A2964
  {uint32_t ea=c->r[2]+0xFFFFA488u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2968
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[5]); // 800A296C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800A2970
  {uint32_t ea=c->r[28]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2974
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 800A2978
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A297C
  {uint32_t ea=c->r[28]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2980
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A2984
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A2988
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A298C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800A2990
  c->ctr=c->r[12]; // 800A2994
  if (true) { c->lr=0x800A299Cu; dispatch(c,c->ctr); } // 800A2998
  cmps(c,0,(int32_t)c->r[3],0); // 800A299C
  if (crb(c,2)) { goto L_800A29F0; } // 800A29A0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A29A4
  c->r[0]=0u+0x00000001u; // 800A29A8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A29AC
  c->r[30]=0u+0x00000001u; // 800A29B0
  {uint32_t ea=c->r[28]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A29B4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[0]); // 800A29B8
  {uint32_t ea=c->r[28]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A29BC
  {uint32_t ea=c->r[28]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A29C0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A29C4
  {uint32_t ea=c->r[28]+0x00000030u; WF32(ea,c->f[2]);} // 800A29C8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A29CC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A29D0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A29D4
  {uint32_t ea=c->r[28]+0x00000034u; WF32(ea,c->f[1]);} // 800A29D8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A29DC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A29E0
  W8(c->r[28]+0x00000080u,c->r[0]); // 800A29E4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A29E8
  {uint32_t ea=c->r[28]+0x00000038u; WF32(ea,c->f[0]);} // 800A29EC
L_800A29F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800A29F0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800A29F4
  c->r[30]=R32(c->r[1]+0x00000048u); // 800A29F8
  c->r[29]=R32(c->r[1]+0x00000044u); // 800A29FC
  c->r[28]=R32(c->r[1]+0x00000040u); // 800A2A00
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A2A04
  c->lr=c->r[0]; // 800A2A08
  c->r[1]=c->r[1]+0x00000050u; // 800A2A0C
  return; // 800A2A10
}

// fn_800A2A20
void f_800A2A20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000060u; // 800A2A20
  return; // 800A2A24
}

// fn_800A2A30
void f_800A2A30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A2A30
  f_800A2820(c); return; // 800A2A34
}

// fn_800A2A40
void f_800A2A40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A2A40
  f_800A2810(c); return; // 800A2A44
}

// fn_800A2A50
void f_800A2A50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A2A50
  f_800A2800(c); return; // 800A2A54
}

// fn_800A2A60
void f_800A2A60(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A2A60
  f_800A2230(c); return; // 800A2A64
}

// fn_800A2A70
void f_800A2A70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 800A2A70
  f_800A2A20(c); return; // 800A2A74
}

// fn_800A2A80
void f_800A2A80(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 800A2A80
  f_800A2230(c); return; // 800A2A84
}

// fn_800A2A90
void f_800A2A90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2A90
  c->r[0]=c->lr; // 800A2A94
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A2A98
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800A2A9C
  c->r[31]=c->r[3]|c->r[3]; // 800A2AA0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A2AA4
  c->r[30]=c->r[5]|c->r[5]; // 800A2AA8
  W32(c->r[1]+0x00000024u,c->r[29]); // 800A2AAC
  c->r[29]=c->r[4]|c->r[4]; // 800A2AB0
  c->r[4]=0u+0x00000005u; // 800A2AB4
  c->lr=0x800A2ABCu; f_8000BF70(c); // 800A2AB8
  c->r[3]=c->r[31]+0x00000010u; // 800A2ABC
  c->lr=0x800A2AC4u; f_80008DD0(c); // 800A2AC0
  c->r[4]=0u+0x80220000u; // 800A2AC4
  c->r[3]=c->r[31]+0x00000070u; // 800A2AC8
  c->r[4]=c->r[4]+0xFFFFA3A0u; // 800A2ACC
  W32(c->r[31]+0x00000000u,c->r[4]); // 800A2AD0
  c->r[0]=c->r[4]+0x00000014u; // 800A2AD4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A2AD8
  c->lr=0x800A2AE0u; f_8004F070(c); // 800A2ADC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2AE0
  c->r[6]=0u+0x80210000u; // 800A2AE4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800A2AE8
  c->r[6]=c->r[6]+0xFFFFAFB8u; // 800A2AEC
  c->r[5]=0u+0x00000000u; // 800A2AF0
  c->r[4]=0u+0x00000001u; // 800A2AF4
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2AF8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800A2AFC
  c->r[3]=R32(c->r[31]+0x00000020u); // 800A2B00
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B04
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A2B08
  c->r[0]=R32(c->r[31]+0x00000024u); // 800A2B0C
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B10
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A2B14
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B18
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A2B1C
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B20
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800A2B24
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B28
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800A2B2C
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B30
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A2B34
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B38
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[0]);} // 800A2B3C
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B40
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800A2B44
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B48
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800A2B4C
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B50
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A2B54
  {uint32_t ea=c->r[6]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B58
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[0]);} // 800A2B5C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B60
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[0]);} // 800A2B64
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2B68
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800A2B6C
  W32(c->r[31]+0x0000005Cu,c->r[5]); // 800A2B70
  W32(c->r[31]+0x00000060u,c->r[5]); // 800A2B74
  W8(c->r[31]+0x00000064u,c->r[5]); // 800A2B78
  W8(c->r[31]+0x00000065u,c->r[5]); // 800A2B7C
  W32(c->r[31]+0x00000068u,c->r[4]); // 800A2B80
  W32(c->r[1]+0x00000008u,c->r[3]); // 800A2B84
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A2B88
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A2B8C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A2B90
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A2B94
  c->lr=0x800A2B9Cu; f_800FBF40(c); // 800A2B98
  c->r[5]=0u+0x80260000u; // 800A2B9C
  c->r[4]=c->r[1]+0x00000008u; // 800A2BA0
  c->r[5]=c->r[5]+0xFFFFBD2Cu; // 800A2BA4
  c->r[5]=R32(c->r[5]+0x00000004u); // 800A2BA8
  c->r[0]=divwu(c->r[3],c->r[5]); // 800A2BAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800A2BB0
  c->r[3]=c->r[3]-c->r[0]; // 800A2BB4
  c->lr=0x800A2BBCu; f_800A1340(c); // 800A2BB8
  W32(c->r[31]+0x00000084u,c->r[3]); // 800A2BBC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A2BC0
  c->lr=0x800A2BC8u; f_800FC0C0(c); // 800A2BC4
  {uint32_t ea=c->r[2]+0xFFFFA494u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2BC8
  {uint32_t ea=c->r[2]+0xFFFFA490u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2BCC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A2BD0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A2BD4
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[0]);} // 800A2BD8
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A2BDC
  c->lr=0x800A2BE4u; f_800FC0C0(c); // 800A2BE0
  {uint32_t ea=c->r[2]+0xFFFFA49Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2BE4
  {uint32_t ea=c->r[2]+0xFFFFA498u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2BE8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A2BEC
  {uint32_t ea=c->r[31]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2BF0
  c->r[3]=R32(c->r[31]+0x00000084u); // 800A2BF4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A2BF8
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[1]);} // 800A2BFC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800A2C00
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800A2C04
  c->lr=0x800A2C0Cu; f_80101920(c); // 800A2C08
  c->r[3]=0u+0x0000000Cu; // 800A2C0C
  c->lr=0x800A2C14u; f_800D8ED0(c); // 800A2C10
  cmps(c,0,(int32_t)c->r[3],0); // 800A2C14
  c->r[5]=c->r[3]|c->r[3]; // 800A2C18
  if (crb(c,2)) { goto L_800A2C2C; } // 800A2C1C
  c->r[4]=0u+0x00000004u; // 800A2C20
  c->lr=0x800A2C28u; f_8004F180(c); // 800A2C24
  c->r[5]=c->r[3]|c->r[3]; // 800A2C28
L_800A2C2C:;
  W32(c->r[31]+0x0000006Cu,c->r[5]); // 800A2C2C
  c->r[4]=0u+0x00000001u; // 800A2C30
  c->r[0]=0u+0x00000000u; // 800A2C34
  c->r[3]=c->r[31]|c->r[31]; // 800A2C38
  W8(c->r[5]+0x00000008u,c->r[4]); // 800A2C3C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2C40
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A2C44
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2C48
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A2C4C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2C50
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800A2C54
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800A2C58
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800A2C5C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800A2C60
  c->r[29]=R32(c->r[1]+0x00000024u); // 800A2C64
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A2C68
  c->lr=c->r[0]; // 800A2C6C
  c->r[1]=c->r[1]+0x00000030u; // 800A2C70
  return; // 800A2C74
}

// fn_800A2C80
void f_800A2C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2C80
  c->r[0]=c->lr; // 800A2C84
  cmps(c,0,(int32_t)c->r[3],0); // 800A2C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A2C8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A2C90
  c->r[31]=c->r[4]|c->r[4]; // 800A2C94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A2C98
  c->r[30]=c->r[3]|c->r[3]; // 800A2C9C
  if (crb(c,2)) { goto L_800A2D18; } // 800A2CA0
  c->r[5]=0u+0x80220000u; // 800A2CA4
  c->r[4]=0u+0x00000001u; // 800A2CA8
  c->r[5]=c->r[5]+0xFFFFA3A0u; // 800A2CAC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A2CB0
  c->r[0]=c->r[5]+0x00000014u; // 800A2CB4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A2CB8
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 800A2CBC
  c->lr=0x800A2CC4u; f_8004F270(c); // 800A2CC0
  c->r[3]=R32(c->r[30]+0x00000084u); // 800A2CC4
  cmps(c,0,(int32_t)c->r[3],0); // 800A2CC8
  if (crb(c,2)) { goto L_800A2CE4; } // 800A2CCC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A2CD0
  c->r[4]=0u+0x00000001u; // 800A2CD4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A2CD8
  c->ctr=c->r[12]; // 800A2CDC
  if (true) { c->lr=0x800A2CE4u; dispatch(c,c->ctr); } // 800A2CE0
L_800A2CE4:;
  c->r[3]=c->r[30]+0x00000070u; // 800A2CE4
  c->r[4]=0u+0xFFFFFFFFu; // 800A2CE8
  c->lr=0x800A2CF0u; f_8004F0A0(c); // 800A2CEC
  c->r[3]=c->r[30]+0x00000010u; // 800A2CF0
  c->r[4]=0u+0x00000000u; // 800A2CF4
  c->lr=0x800A2CFCu; f_80008E10(c); // 800A2CF8
  c->r[3]=c->r[30]|c->r[30]; // 800A2CFC
  c->r[4]=0u+0x00000000u; // 800A2D00
  c->lr=0x800A2D08u; f_8000BFD0(c); // 800A2D04
  cmps(c,0,(int32_t)c->r[31],0); // 800A2D08
  if (!crb(c,1)) { goto L_800A2D18; } // 800A2D0C
  c->r[3]=c->r[30]|c->r[30]; // 800A2D10
  c->lr=0x800A2D18u; f_800D93B0(c); // 800A2D14
L_800A2D18:;
  c->r[3]=c->r[30]|c->r[30]; // 800A2D18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A2D1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A2D20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A2D24
  c->lr=c->r[0]; // 800A2D28
  c->r[1]=c->r[1]+0x00000010u; // 800A2D2C
  return; // 800A2D30
}

// fn_800A2D40
void f_800A2D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2D40
  c->r[0]=c->lr; // 800A2D44
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A2D48
  c->r[11]=c->r[1]+0x00000050u; // 800A2D4C
  c->lr=0x800A2D54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A2D50
  c->r[31]=c->r[3]|c->r[3]; // 800A2D54
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 800A2D58
  c->r[4]=c->r[1]+0x0000001Cu; // 800A2D5C
  c->r[5]=c->r[1]+0x00000018u; // 800A2D60
  c->lr=0x800A2D68u; f_8004F390(c); // 800A2D64
  c->r[4]=R32(c->r[1]+0x00000018u); // 800A2D68
  cmps(c,0,(int32_t)c->r[4],0); // 800A2D6C
  if (crb(c,2)) { goto L_800A2EB4; } // 800A2D70
  c->r[0]=R32(c->r[31]+0x00000068u); // 800A2D74
  c->r[3]=c->r[31]+0x00000070u; // 800A2D78
  c->r[0]=c->r[0]-c->r[4]; // 800A2D7C
  W32(c->r[31]+0x00000068u,c->r[0]); // 800A2D80
  c->lr=0x800A2D88u; f_8004F0E0(c); // 800A2D84
  c->r[0]=R32(c->r[31]+0x00000068u); // 800A2D88
  cmps(c,0,(int32_t)c->r[0],0); // 800A2D8C
  if (crb(c,1)) { goto L_800A2EB4; } // 800A2D90
  c->r[4]=0u+0x80210000u; // 800A2D94
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2D98
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A2D9C
  c->r[3]=c->r[31]+0x00000020u; // 800A2DA0
  c->r[4]=c->r[4]+0x00000018u; // 800A2DA4
  c->r[5]=0u+0x00000001u; // 800A2DA8
  c->r[6]=0u+0x00000000u; // 800A2DAC
  c->r[7]=0u+0x00000001u; // 800A2DB0
  c->r[8]=0u+0x00000090u; // 800A2DB4
  c->lr=0x800A2DBCu; f_8004FB70(c); // 800A2DB8
  c->r[30]=0u+0x00000000u; // 800A2DBC
  c->r[29]=c->r[13]+0xFFFF9F00u; // 800A2DC0
  W32(c->r[1]+0x0000002Cu,c->r[30]); // 800A2DC4
  c->r[3]=c->r[29]|c->r[29]; // 800A2DC8
  c->r[28]=c->r[1]+0x0000002Cu; // 800A2DCC
  W32(c->r[1]+0x00000030u,c->r[30]); // 800A2DD0
  W32(c->r[1]+0x00000034u,c->r[30]); // 800A2DD4
  c->lr=0x800A2DDCu; f_801D4D44(c); // 800A2DD8
  c->r[27]=c->r[3]|c->r[3]; // 800A2DDC
  c->r[3]=c->r[28]|c->r[28]; // 800A2DE0
  c->r[4]=c->r[27]|c->r[27]; // 800A2DE4
  c->lr=0x800A2DECu; f_800081B0(c); // 800A2DE8
  c->r[0]=R8(c->r[1]+0x00000014u); // 800A2DEC
  c->r[3]=c->r[28]|c->r[28]; // 800A2DF0
  W8(c->r[1]+0x00000010u,c->r[0]); // 800A2DF4
  c->r[6]=c->r[29]|c->r[29]; // 800A2DF8
  c->r[7]=c->r[29]+c->r[27]; // 800A2DFC
  c->r[8]=c->r[1]+0x00000010u; // 800A2E00
  c->r[4]=0u+0x00000000u; // 800A2E04
  c->r[5]=0u+0x00000000u; // 800A2E08
  c->lr=0x800A2E10u; f_80008370(c); // 800A2E0C
  c->r[29]=c->r[13]+0xFFFF9F08u; // 800A2E10
  W32(c->r[1]+0x00000020u,c->r[30]); // 800A2E14
  c->r[27]=c->r[1]+0x00000020u; // 800A2E18
  W32(c->r[1]+0x00000024u,c->r[30]); // 800A2E1C
  c->r[3]=c->r[29]|c->r[29]; // 800A2E20
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A2E24
  c->lr=0x800A2E2Cu; f_801D4D44(c); // 800A2E28
  c->r[30]=c->r[3]|c->r[3]; // 800A2E2C
  c->r[3]=c->r[27]|c->r[27]; // 800A2E30
  c->r[4]=c->r[30]|c->r[30]; // 800A2E34
  c->lr=0x800A2E3Cu; f_800081B0(c); // 800A2E38
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800A2E3C
  c->r[3]=c->r[27]|c->r[27]; // 800A2E40
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A2E44
  c->r[6]=c->r[29]|c->r[29]; // 800A2E48
  c->r[7]=c->r[29]+c->r[30]; // 800A2E4C
  c->r[8]=c->r[1]+0x00000008u; // 800A2E50
  c->r[4]=0u+0x00000000u; // 800A2E54
  c->r[5]=0u+0x00000000u; // 800A2E58
  c->lr=0x800A2E60u; f_80008370(c); // 800A2E5C
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A2E60
  c->r[5]=c->r[28]|c->r[28]; // 800A2E64
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800A2E68
  c->r[6]=c->r[27]|c->r[27]; // 800A2E6C
  c->lr=0x800A2E74u; f_80012C00(c); // 800A2E70
  c->r[0]=R32(c->r[1]+0x00000020u); // 800A2E74
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A2E78
  if (crb(c,2)) { goto L_800A2E88; } // 800A2E7C
  c->r[3]=R32(c->r[1]+0x00000028u); // 800A2E80
  c->lr=0x800A2E88u; f_800D93B0(c); // 800A2E84
L_800A2E88:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800A2E88
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A2E8C
  if (crb(c,2)) { goto L_800A2E9C; } // 800A2E90
  c->r[3]=R32(c->r[1]+0x00000034u); // 800A2E94
  c->lr=0x800A2E9Cu; f_800D93B0(c); // 800A2E98
L_800A2E9C:;
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A2E9C
  c->r[4]=0u+0x0000002Cu; // 800A2EA0
  c->lr=0x800A2EA8u; f_800A8BE0(c); // 800A2EA4
  c->r[0]=0u+0x00000002u; // 800A2EA8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A2EAC
  goto L_800A2FC4; // 800A2EB0
L_800A2EB4:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 800A2EB4
  cmps(c,0,(int32_t)c->r[0],0); // 800A2EB8
  if (!crb(c,2)) { goto L_800A2F18; } // 800A2EBC
  c->r[0]=R8(c->r[31]+0x00000065u); // 800A2EC0
  cmps(c,0,(int32_t)c->r[0],0); // 800A2EC4
  if (!crb(c,2)) { goto L_800A2ED8; } // 800A2EC8
  c->r[0]=R8(c->r[31]+0x00000064u); // 800A2ECC
  cmps(c,0,(int32_t)c->r[0],0); // 800A2ED0
  if (crb(c,2)) { goto L_800A2F18; } // 800A2ED4
L_800A2ED8:;
  c->r[4]=0u+0x80210000u; // 800A2ED8
  {uint32_t ea=c->r[2]+0xFFFFA4A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2EDC
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A2EE0
  c->r[3]=c->r[31]+0x00000020u; // 800A2EE4
  c->r[4]=c->r[4]+0x00000018u; // 800A2EE8
  c->r[5]=0u+0x00000001u; // 800A2EEC
  c->r[6]=0u+0x00000000u; // 800A2EF0
  c->r[7]=0u+0x00000001u; // 800A2EF4
  c->r[8]=0u+0x00000090u; // 800A2EF8
  c->lr=0x800A2F00u; f_8004FB70(c); // 800A2EFC
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A2F00
  c->r[4]=0u+0x0000002Bu; // 800A2F04
  c->lr=0x800A2F0Cu; f_800A8BE0(c); // 800A2F08
  c->r[0]=0u+0x00000002u; // 800A2F0C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A2F10
  goto L_800A2FC4; // 800A2F14
L_800A2F18:;
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A2F18
  c->r[4]=c->r[31]+0x00000020u; // 800A2F1C
  {uint32_t ea=c->r[2]+0xFFFFA4A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2F20
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A2F24
  c->r[12]=R32(c->r[12]+0x00000020u); // 800A2F28
  c->ctr=c->r[12]; // 800A2F2C
  if (true) { c->lr=0x800A2F34u; dispatch(c,c->ctr); } // 800A2F30
  cmps(c,0,(int32_t)c->r[3],0); // 800A2F34
  if (!crb(c,2)) { goto L_800A2F48; } // 800A2F38
  c->r[0]=0u+0x00000002u; // 800A2F3C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A2F40
  goto L_800A2FC4; // 800A2F44
L_800A2F48:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2F48
  c->r[3]=c->r[31]+0x00000070u; // 800A2F4C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2F50
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A2F54
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800A2F58
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2F5C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2F60
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2F64
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800A2F68
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[4]);} // 800A2F6C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A2F70
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 800A2F74
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A2F78
  c->lr=0x800A2F80u; f_8004F0F0(c); // 800A2F7C
  {uint32_t ea=c->r[31]+0x00000088u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2F80
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A2F84
  c->r[3]=R32(c->r[31]+0x00000084u); // 800A2F88
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800A2F8C
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800A2F90
  c->lr=0x800A2F98u; f_80101920(c); // 800A2F94
  c->r[3]=R32(c->r[31]+0x00000084u); // 800A2F98
  c->r[4]=R32(c->r[31]+0x0000007Cu); // 800A2F9C
  c->r[5]=R32(c->r[31]+0x00000080u); // 800A2FA0
  c->lr=0x800A2FA8u; f_80100330(c); // 800A2FA4
  c->r[3]=R32(c->r[31]+0x00000084u); // 800A2FA8
  c->lr=0x800A2FB0u; f_80103410(c); // 800A2FAC
  c->r[3]=R32(c->r[31]+0x00000084u); // 800A2FB0
  c->lr=0x800A2FB8u; f_801063E0(c); // 800A2FB4
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800A2FB8
  c->r[4]=R32(c->r[31]+0x00000084u); // 800A2FBC
  c->lr=0x800A2FC4u; f_8004F400(c); // 800A2FC0
L_800A2FC4:;
  c->r[11]=c->r[1]+0x00000050u; // 800A2FC4
  c->lr=0x800A2FCCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A2FC8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A2FCC
  c->lr=c->r[0]; // 800A2FD0
  c->r[1]=c->r[1]+0x00000050u; // 800A2FD4
  return; // 800A2FD8
}

// fn_800A2FE0
void f_800A2FE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A2FE0
  c->r[0]=c->lr; // 800A2FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A2FE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A2FEC
  c->r[31]=c->r[3]|c->r[3]; // 800A2FF0
  c->r[3]=R32(c->r[3]+0x00000084u); // 800A2FF4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A2FF8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A2FFC
  c->lr=0x800A3004u; f_801017C0(c); // 800A3000
  c->r[3]=R32(c->r[31]+0x00000084u); // 800A3004
  c->lr=0x800A300Cu; f_80107F60(c); // 800A3008
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A300C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A3010
  c->lr=c->r[0]; // 800A3014
  c->r[1]=c->r[1]+0x00000010u; // 800A3018
  return; // 800A301C
}

// fn_800A3020
void f_800A3020(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800A3020
  W8(c->r[3]+0x00000064u,c->r[0]); // 800A3024
  W8(c->r[3]+0x00000065u,c->r[0]); // 800A3028
  return; // 800A302C
}

// fn_800A3030
void f_800A3030(Ctx* __restrict c) {
  return; // 800A3030
}

// fn_800A3040
void f_800A3040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3040
  c->r[0]=c->lr; // 800A3044
  {uint32_t ea=c->r[2]+0xFFFFA49Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800A3048
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A304C
  c->r[5]=c->r[1]+0x00000008u; // 800A3050
  c->r[6]=c->r[1]+0x00000020u; // 800A3054
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800A3058
  c->r[31]=0u+0x80210000u; // 800A305C
  c->r[31]=c->r[31]+0xFFFFAFB8u; // 800A3060
  W32(c->r[1]+0x00000048u,c->r[30]); // 800A3064
  c->r[30]=0u+0x00000000u; // 800A3068
  W32(c->r[1]+0x00000044u,c->r[29]); // 800A306C
  c->r[29]=c->r[4]|c->r[4]; // 800A3070
  c->r[4]=c->r[1]+0x00000014u; // 800A3074
  W32(c->r[1]+0x00000040u,c->r[28]); // 800A3078
  c->r[28]=c->r[3]|c->r[3]; // 800A307C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3080
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3084
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 800A3088
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A308C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3090
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 800A3094
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 800A3098
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800A309C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800A30A0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A30A4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A30A8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A30AC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A30B0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A30B4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A30B8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A30BC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A30C0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A30C4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A30C8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A30CC
  c->r[3]=c->r[29]|c->r[29]; // 800A30D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A30D4
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A30D8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A30DC
  c->ctr=c->r[12]; // 800A30E0
  if (true) { c->lr=0x800A30E8u; dispatch(c,c->ctr); } // 800A30E4
  cmps(c,0,(int32_t)c->r[3],0); // 800A30E8
  if (crb(c,2)) { goto L_800A3154; } // 800A30EC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A30F0
  c->r[0]=0u+0x00000001u; // 800A30F4
  {uint32_t ea=c->r[28]+0x00000038u; WF32(ea,c->f[0]);} // 800A30F8
  c->r[30]=0u+0x00000001u; // 800A30FC
  {uint32_t ea=c->r[28]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A3100
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3104
  {uint32_t ea=c->r[28]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A3108
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A310C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3110
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[0]);} // 800A3114
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3118
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A311C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A3120
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800A3124
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A3128
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 800A312C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A3130
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A3134
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A3138
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[1]);} // 800A313C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3140
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A3144
  W8(c->r[28]+0x00000065u,c->r[0]); // 800A3148
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A314C
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 800A3150
L_800A3154:;
  c->r[5]=0u+0x80210000u; // 800A3154
  {uint32_t ea=c->r[2]+0xFFFFA4A8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A3158
  c->r[5]=c->r[5]+0xFFFFAFB8u; // 800A315C
  {uint32_t ea=c->r[28]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A3160
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3164
  c->r[3]=c->r[29]|c->r[29]; // 800A3168
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A316C
  c->r[4]=c->r[1]+0x00000014u; // 800A3170
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[0]); // 800A3174
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3178
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800A317C
  c->r[5]=c->r[1]+0x00000020u; // 800A3180
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800A3184
  {uint32_t ea=c->r[2]+0xFFFFA4ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3188
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[5]); // 800A318C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800A3190
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3194
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 800A3198
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A319C
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A31A0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A31A4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A31A8
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A31AC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800A31B0
  c->ctr=c->r[12]; // 800A31B4
  if (true) { c->lr=0x800A31BCu; dispatch(c,c->ctr); } // 800A31B8
  cmps(c,0,(int32_t)c->r[3],0); // 800A31BC
  if (crb(c,2)) { goto L_800A3210; } // 800A31C0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A31C4
  c->r[0]=0u+0x00000001u; // 800A31C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A31CC
  c->r[30]=0u+0x00000001u; // 800A31D0
  {uint32_t ea=c->r[28]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A31D4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[0]); // 800A31D8
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A31DC
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A31E0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A31E4
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 800A31E8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A31EC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A31F0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A31F4
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[1]);} // 800A31F8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A31FC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A3200
  W8(c->r[28]+0x00000064u,c->r[0]); // 800A3204
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A3208
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 800A320C
L_800A3210:;
  c->r[3]=c->r[30]|c->r[30]; // 800A3210
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800A3214
  c->r[30]=R32(c->r[1]+0x00000048u); // 800A3218
  c->r[29]=R32(c->r[1]+0x00000044u); // 800A321C
  c->r[28]=R32(c->r[1]+0x00000040u); // 800A3220
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A3224
  c->lr=c->r[0]; // 800A3228
  c->r[1]=c->r[1]+0x00000050u; // 800A322C
  return; // 800A3230
}

// fn_800A3240
void f_800A3240(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A3240
  f_800A3040(c); return; // 800A3244
}

// fn_800A3250
void f_800A3250(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A3250
  f_800A3030(c); return; // 800A3254
}

// fn_800A3260
void f_800A3260(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A3260
  f_800A3020(c); return; // 800A3264
}

// fn_800A3270
void f_800A3270(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A3270
  f_800A2C80(c); return; // 800A3274
}

// fn_800A3280
void f_800A3280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3280
  c->r[0]=c->lr; // 800A3284
  cmps(c,0,(int32_t)c->r[3],0); // 800A3288
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A328C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A3290
  c->r[31]=c->r[4]|c->r[4]; // 800A3294
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A3298
  c->r[30]=c->r[3]|c->r[3]; // 800A329C
  if (crb(c,2)) { goto L_800A32F0; } // 800A32A0
  c->r[4]=addc(c,c->r[3],0x00000024u,0); cr0(c,c->r[4]); // 800A32A4
  if (crb(c,2)) { goto L_800A32D4; } // 800A32A8
  if (crb(c,2)) { goto L_800A32D4; } // 800A32AC
  if (crb(c,2)) { goto L_800A32D4; } // 800A32B0
  if (crb(c,2)) { goto L_800A32D4; } // 800A32B4
  c->r[3]=R32(c->r[4]+0x00000000u); // 800A32B8
  cmps(c,0,(int32_t)c->r[3],0); // 800A32BC
  if (crb(c,2)) { goto L_800A32D4; } // 800A32C0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800A32C4
  c->r[0]=c->r[0]-c->r[0]; // 800A32C8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800A32CC
  c->lr=0x800A32D4u; f_800D93B0(c); // 800A32D0
L_800A32D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800A32D4
  c->r[4]=0u+0x00000000u; // 800A32D8
  c->lr=0x800A32E0u; f_80008970(c); // 800A32DC
  cmps(c,0,(int32_t)c->r[31],0); // 800A32E0
  if (!crb(c,1)) { goto L_800A32F0; } // 800A32E4
  c->r[3]=c->r[30]|c->r[30]; // 800A32E8
  c->lr=0x800A32F0u; f_800D93B0(c); // 800A32EC
L_800A32F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800A32F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A32F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A32F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A32FC
  c->lr=c->r[0]; // 800A3300
  c->r[1]=c->r[1]+0x00000010u; // 800A3304
  return; // 800A3308
}

// fn_800A3310
void f_800A3310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3310
  c->r[0]=c->lr; // 800A3314
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800A3318
  c->r[11]=c->r[1]+0x00000090u; // 800A331C
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[31]);} // 800A3320
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,31,ea,0,0);} // 800A3324
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[30]);} // 800A3328
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,30,ea,0,0);} // 800A332C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[29]);} // 800A3330
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,29,ea,0,0);} // 800A3334
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[28]);} // 800A3338
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,28,ea,0,0);} // 800A333C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[27]);} // 800A3340
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,27,ea,0,0);} // 800A3344
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[26]);} // 800A3348
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,26,ea,0,0);} // 800A334C
  c->lr=0x800A3354u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A3350
  c->r[17]=c->r[4]|c->r[4]; // 800A3354
  c->r[28]=c->r[3]|c->r[3]; // 800A3358
  c->r[16]=c->r[5]|c->r[5]; // 800A335C
  c->r[15]=c->r[7]|c->r[7]; // 800A3360
  c->r[4]=0u+0x00000005u; // 800A3364
  c->lr=0x800A336Cu; f_8000BF70(c); // 800A3368
  c->r[3]=c->r[28]+0x00000010u; // 800A336C
  c->lr=0x800A3374u; f_80008DD0(c); // 800A3370
  c->r[4]=0u+0x80220000u; // 800A3374
  W32(c->r[28]+0x00000068u,c->r[15]); // 800A3378
  c->r[4]=c->r[4]+0xFFFFA508u; // 800A337C
  c->r[3]=0u+0x0000003Cu; // 800A3380
  c->r[0]=c->r[4]+0x00000014u; // 800A3384
  W32(c->r[28]+0x00000000u,c->r[4]); // 800A3388
  W32(c->r[28]+0x00000010u,c->r[0]); // 800A338C
  W32(c->r[28]+0x00000070u,c->r[17]); // 800A3390
  c->r[4]=R32(c->r[17]+0x00000004u); // 800A3394
  c->r[0]=c->r[4]+0x00000001u; // 800A3398
  W32(c->r[17]+0x00000004u,c->r[0]); // 800A339C
  c->lr=0x800A33A4u; f_800D8ED0(c); // 800A33A0
  cmps(c,0,(int32_t)c->r[3],0); // 800A33A4
  c->r[15]=c->r[3]|c->r[3]; // 800A33A8
  if (crb(c,2)) { goto L_800A33E8; } // 800A33AC
  c->lr=0x800A33B4u; f_80008920(c); // 800A33B0
  c->r[3]=0u+0x80220000u; // 800A33B4
  c->r[0]=0u+0x00000000u; // 800A33B8
  c->r[3]=c->r[3]+0xFFFFA570u; // 800A33BC
  W32(c->r[15]+0x00000000u,c->r[3]); // 800A33C0
  W32(c->r[15]+0x00000010u,c->r[28]); // 800A33C4
  W32(c->r[15]+0x00000024u,c->r[0]); // 800A33C8
  W32(c->r[15]+0x00000028u,c->r[0]); // 800A33CC
  W32(c->r[15]+0x0000002Cu,c->r[0]); // 800A33D0
  W8(c->r[15]+0x00000038u,c->r[0]); // 800A33D4
  W32(c->r[15]+0x00000030u,c->r[0]); // 800A33D8
  W32(c->r[15]+0x00000034u,c->r[0]); // 800A33DC
  W8(c->r[15]+0x00000039u,c->r[0]); // 800A33E0
  W8(c->r[15]+0x0000003Au,c->r[0]); // 800A33E4
L_800A33E8:;
  W32(c->r[28]+0x00000074u,c->r[15]); // 800A33E8
  c->r[3]=0u+0x80210000u; // 800A33EC
  c->r[3]=c->r[3]+0xFFFFAFB8u; // 800A33F0
  c->r[18]=0u+0x00000000u; // 800A33F4
  {uint32_t ea=c->r[16]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A33F8
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 800A33FC
  {uint32_t ea=c->r[16]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3400
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[0]);} // 800A3404
  {uint32_t ea=c->r[16]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3408
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 800A340C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3410
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A3414
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3418
  {uint32_t ea=c->r[28]+0x00000030u; WF32(ea,c->f[0]);} // 800A341C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3420
  {uint32_t ea=c->r[28]+0x00000034u; WF32(ea,c->f[0]);} // 800A3424
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3428
  {uint32_t ea=c->r[28]+0x00000038u; WF32(ea,c->f[0]);} // 800A342C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3430
  {uint32_t ea=c->r[28]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A3434
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3438
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[0]);} // 800A343C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3440
  {uint32_t ea=c->r[28]+0x00000044u; WF32(ea,c->f[0]);} // 800A3444
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3448
  {uint32_t ea=c->r[28]+0x00000048u; WF32(ea,c->f[0]);} // 800A344C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3450
  {uint32_t ea=c->r[28]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A3454
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3458
  {uint32_t ea=c->r[28]+0x00000050u; WF32(ea,c->f[0]);} // 800A345C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3460
  {uint32_t ea=c->r[28]+0x00000054u; WF32(ea,c->f[0]);} // 800A3464
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3468
  {uint32_t ea=c->r[28]+0x00000058u; WF32(ea,c->f[0]);} // 800A346C
  W32(c->r[28]+0x0000005Cu,c->r[18]); // 800A3470
  W32(c->r[28]+0x00000060u,c->r[18]); // 800A3474
  W8(c->r[28]+0x00000064u,c->r[18]); // 800A3478
  W8(c->r[28]+0x00000065u,c->r[18]); // 800A347C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A3480
  c->lr=0x800A3488u; f_800FC0C0(c); // 800A3484
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A3488
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A348C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A3490
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A3494
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 800A3498
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A349C
  c->lr=0x800A34A4u; f_800FC0C0(c); // 800A34A0
  {uint32_t ea=c->r[2]+0xFFFFA4BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A34A4
  c->r[3]=0u+0x80250000u; // 800A34A8
  c->r[19]=0u+0x80260000u; // 800A34AC
  {uint32_t ea=c->r[2]+0xFFFFA4B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A34B0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A34B4
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A34B8
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[28]=c->ps1[28]=RF32(ea);} // 800A34BC
  c->r[20]=c->r[19]+0xFFFFBD2Cu; // 800A34C0
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[29]=c->ps1[29]=RF32(ea);} // 800A34C4
  c->r[23]=c->r[3]+0xFFFF98E0u; // 800A34C8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A34CC
  {uint32_t ea=c->r[2]+0xFFFFA4C0u; c->f[30]=c->ps1[30]=RF32(ea);} // 800A34D0
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A34D4
  c->r[31]=c->r[1]+0x00000014u; // 800A34D8
  {uint32_t ea=c->r[28]+0x00000080u; WF32(ea,c->f[1]);} // 800A34DC
  c->r[29]=0u+0x00000000u; // 800A34E0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A34E4
  c->r[25]=0u+0xCCCD0000u; // 800A34E8
  c->r[22]=0u+0x80220000u; // 800A34EC
  c->r[21]=0u+0x40000000u; // 800A34F0
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 800A34F4
  c->r[24]=0u+0x15550000u; // 800A34F8
  c->r[26]=0u+0x2AAB0000u; // 800A34FC
  c->r[27]=0u+0x80210000u; // 800A3500
L_800A3504:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A3504
  c->lr=0x800A350Cu; f_800FBF40(c); // 800A3508
  c->r[4]=R32(c->r[20]+0x00000004u); // 800A350C
  c->r[0]=divwu(c->r[3],c->r[4]); // 800A3510
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800A3514
  c->r[15]=c->r[3]-c->r[0]; // 800A3518
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A351C
  c->lr=0x800A3524u; f_800FC0C0(c); // 800A3520
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[1]); // 800A3524
  c->r[4]=R32(c->r[19]+0xFFFFBD2Cu); // 800A3528
  c->r[0]=rotl(c->r[15],4)&0xFFFFFFF0u; // 800A352C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A3530
  c->r[4]=c->r[4]+c->r[0]; // 800A3534
  c->f[26]=c->ps1[26]=S(c->f[29]+c->f[0]); // 800A3538
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A353C
  c->f[27]=c->ps1[27]=S(c->f[30]-c->f[0]); // 800A3540
  c->lr=0x800A3548u; f_800FC0C0(c); // 800A3544
  c->f[0]=c->ps1[0]=S(c->f[27]-c->f[31]); // 800A3548
  c->r[3]=0u+0x00000078u; // 800A354C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800A3550
  c->f[27]=c->ps1[27]=S(c->f[31]+c->f[0]); // 800A3554
  c->lr=0x800A355Cu; f_800D8ED0(c); // 800A3558
  cmps(c,0,(int32_t)c->r[3],0); // 800A355C
  c->r[30]=c->r[3]|c->r[3]; // 800A3560
  if (crb(c,2)) { goto L_800A3580; } // 800A3564
  c->f[1]=c->f[26]; // 800A3568
  c->r[4]=R32(c->r[28]+0x00000074u); // 800A356C
  c->f[2]=c->f[27]; // 800A3570
  c->r[5]=c->r[15]|c->r[15]; // 800A3574
  c->lr=0x800A357Cu; f_800A44F0(c); // 800A3578
  c->r[30]=c->r[3]|c->r[3]; // 800A357C
L_800A3580:;
  c->r[17]=R32(c->r[28]+0x00000074u); // 800A3580
  c->r[4]=R32(c->r[17]+0x00000028u); // 800A3584
  c->r[3]=R32(c->r[17]+0x0000002Cu); // 800A3588
  cmpu(c,0,c->r[4],c->r[3]); // 800A358C
  if (!crb(c,0)) { goto L_800A35B0; } // 800A3590
  c->r[0]=c->r[4]+0x00000001u; // 800A3594
  W32(c->r[17]+0x00000028u,c->r[0]); // 800A3598
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A359C
  c->r[3]=R32(c->r[17]+0x00000024u); // 800A35A0
  c->r[3]=c->r[3]+c->r[0]; // 800A35A4
  W32(c->r[3]+0xFFFFFFFCu,c->r[30]); // 800A35A8
  goto L_800A37D0; // 800A35AC
L_800A35B0:;
  c->r[0]=c->r[21]+0xFFFFFFFFu; // 800A35B0
  c->r[0]=c->r[0]-c->r[3]; // 800A35B4
  cmpu(c,0,c->r[0],0x00000001u); // 800A35B8
  if (!crb(c,0)) { goto L_800A35D4; } // 800A35BC
  c->r[4]=c->r[22]+0xFFFFA408u; // 800A35C0
  c->r[3]=c->r[23]+0x000000A0u; // 800A35C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A35C8
  c->lr=0x800A35D0u; f_801DB440(c); // 800A35CC
  c->lr=0x800A35D4u; f_801DE64C(c); // 800A35D0
L_800A35D4:;
  c->r[3]=c->r[17]+0x0000002Cu; // 800A35D4
  W32(c->r[1]+0x00000014u,c->r[18]); // 800A35D8
  c->r[0]=c->r[21]+0xFFFFFFFFu; // 800A35DC
  W32(c->r[1]+0x00000018u,c->r[18]); // 800A35E0
  W32(c->r[1]+0x0000001Cu,c->r[18]); // 800A35E4
  W32(c->r[1]+0x00000020u,c->r[3]); // 800A35E8
  W32(c->r[1]+0x00000024u,c->r[18]); // 800A35EC
  c->r[3]=R32(c->r[17]+0x00000028u); // 800A35F0
  c->r[4]=R32(c->r[17]+0x0000002Cu); // 800A35F4
  c->r[3]=c->r[3]+0x00000001u; // 800A35F8
  c->r[3]=c->r[3]-c->r[4]; // 800A35FC
  W32(c->r[1]+0x00000010u,c->r[3]); // 800A3600
  c->r[16]=R32(c->r[17]+0x0000002Cu); // 800A3604
  c->r[0]=c->r[0]-c->r[16]; // 800A3608
  cmpu(c,0,c->r[3],c->r[0]); // 800A360C
  if (!crb(c,1)) { goto L_800A3628; } // 800A3610
  c->r[4]=c->r[22]+0xFFFFA408u; // 800A3614
  c->r[3]=c->r[23]+0x000000A0u; // 800A3618
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A361C
  c->lr=0x800A3624u; f_801DB440(c); // 800A3620
  c->lr=0x800A3628u; f_801DE64C(c); // 800A3624
L_800A3628:;
  c->r[0]=c->r[24]+0x00005555u; // 800A3628
  cmpu(c,0,c->r[16],c->r[0]); // 800A362C
  if (!crb(c,0)) { goto L_800A3670; } // 800A3630
  c->r[4]=c->r[16]+0x00000001u; // 800A3634
  c->r[5]=c->r[25]+0xFFFFCCCDu; // 800A3638
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800A363C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A3640
  c->r[4]=c->r[3]-c->r[4]; // 800A3644
  c->r[4]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 800A3648
  c->r[3]=c->r[1]+0x00000008u; // 800A364C
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 800A3650
  W32(c->r[1]+0x00000008u,c->r[4]); // 800A3654
  cmpu(c,0,c->r[4],c->r[0]); // 800A3658
  if (!crb(c,0)) { goto L_800A3664; } // 800A365C
  c->r[3]=c->r[1]+0x00000010u; // 800A3660
L_800A3664:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A3664
  c->r[16]=c->r[16]+c->r[0]; // 800A3668
  goto L_800A36AC; // 800A366C
L_800A3670:;
  c->r[0]=c->r[26]+0xFFFFAAAAu; // 800A3670
  cmpu(c,0,c->r[16],c->r[0]); // 800A3674
  if (!crb(c,0)) { goto L_800A36A8; } // 800A3678
  c->r[3]=c->r[16]+0x00000001u; // 800A367C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A3680
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800A3684
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800A3688
  cmpu(c,0,c->r[3],c->r[0]); // 800A368C
  c->r[3]=c->r[1]+0x0000000Cu; // 800A3690
  if (!crb(c,0)) { goto L_800A369C; } // 800A3694
  c->r[3]=c->r[1]+0x00000010u; // 800A3698
L_800A369C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A369C
  c->r[16]=c->r[16]+c->r[0]; // 800A36A0
  goto L_800A36AC; // 800A36A4
L_800A36A8:;
  c->r[16]=c->r[21]+0xFFFFFFFFu; // 800A36A8
L_800A36AC:;
  c->r[0]=c->r[21]+0xFFFFFFFFu; // 800A36AC
  cmpu(c,0,c->r[16],c->r[0]); // 800A36B0
  if (!crb(c,1)) { goto L_800A36CC; } // 800A36B4
  c->r[4]=c->r[22]+0xFFFFA408u; // 800A36B8
  c->r[3]=c->r[23]+0x000000A0u; // 800A36BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A36C0
  c->lr=0x800A36C8u; f_801DB440(c); // 800A36C4
  c->lr=0x800A36CCu; f_801DE64C(c); // 800A36C8
L_800A36CC:;
  c->r[3]=rotl(c->r[16],2)&0xFFFFFFFCu; // 800A36CC
  c->lr=0x800A36D4u; f_800D8ED0(c); // 800A36D0
  cmps(c,0,(int32_t)c->r[3],0); // 800A36D4
  c->r[15]=c->r[3]|c->r[3]; // 800A36D8
  if (!crb(c,2)) { goto L_800A36F4; } // 800A36DC
  c->r[3]=c->r[23]+0x000000A0u; // 800A36E0
  c->r[4]=c->r[27]+0xFFFFC7A0u; // 800A36E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A36E8
  c->lr=0x800A36F0u; f_801DB440(c); // 800A36EC
  c->lr=0x800A36F4u; f_801DE64C(c); // 800A36F0
L_800A36F4:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800A36F4
  W32(c->r[1]+0x00000014u,c->r[15]); // 800A36F8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A36FC
  W32(c->r[1]+0x0000001Cu,c->r[16]); // 800A3700
  c->r[0]=R32(c->r[17]+0x00000028u); // 800A3704
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A3708
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A370C
  c->r[0]=c->r[15]+c->r[0]; // 800A3710
  W32(c->r[3]+c->r[0],c->r[30]); // 800A3714
  c->r[3]=R32(c->r[1]+0x00000018u); // 800A3718
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A371C
  c->r[3]=c->r[3]+0x00000001u; // 800A3720
  W32(c->r[1]+0x00000018u,c->r[3]); // 800A3724
  c->r[3]=R32(c->r[1]+0x00000014u); // 800A3728
  c->r[4]=R32(c->r[17]+0x00000028u); // 800A372C
  c->r[16]=R32(c->r[17]+0x00000024u); // 800A3730
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800A3734
  c->r[5]=c->r[16]+c->r[4]; // 800A3738
  c->r[5]=c->r[5]-c->r[16]; // 800A373C
  c->r[4]=c->r[16]|c->r[16]; // 800A3740
  c->r[5]=sraw(c,c->r[5],2); // 800A3744
  c->r[15]=addc(c,c->r[5],0,c->xer_ca); // 800A3748
  c->r[0]=c->r[0]-c->r[15]; // 800A374C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A3750
  c->r[30]=rotl(c->r[15],2)&0xFFFFFFFCu; // 800A3754
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A3758
  c->r[5]=c->r[30]|c->r[30]; // 800A375C
  c->r[3]=c->r[3]+c->r[0]; // 800A3760
  c->lr=0x800A3768u; f_80004364(c); // 800A3764
  c->r[3]=c->r[16]|c->r[16]; // 800A3768
  c->r[5]=c->r[30]|c->r[30]; // 800A376C
  c->r[4]=0u+0x00000000u; // 800A3770
  c->lr=0x800A3778u; f_800046B4(c); // 800A3774
  c->r[0]=R32(c->r[1]+0x00000018u); // 800A3778
  cmps(c,0,(int32_t)c->r[31],0); // 800A377C
  c->r[0]=c->r[0]+c->r[15]; // 800A3780
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A3784
  W32(c->r[17]+0x00000028u,c->r[18]); // 800A3788
  c->r[3]=R32(c->r[17]+0x0000002Cu); // 800A378C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800A3790
  W32(c->r[17]+0x0000002Cu,c->r[0]); // 800A3794
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800A3798
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A379C
  c->r[3]=R32(c->r[17]+0x00000024u); // 800A37A0
  W32(c->r[17]+0x00000024u,c->r[0]); // 800A37A4
  W32(c->r[1]+0x00000014u,c->r[3]); // 800A37A8
  c->r[0]=R32(c->r[1]+0x00000018u); // 800A37AC
  W32(c->r[17]+0x00000028u,c->r[0]); // 800A37B0
  W32(c->r[1]+0x00000018u,c->r[18]); // 800A37B4
  if (crb(c,2)) { goto L_800A37D0; } // 800A37B8
  c->r[3]=R32(c->r[1]+0x00000014u); // 800A37BC
  cmps(c,0,(int32_t)c->r[3],0); // 800A37C0
  if (crb(c,2)) { goto L_800A37D0; } // 800A37C4
  W32(c->r[1]+0x00000018u,c->r[18]); // 800A37C8
  c->lr=0x800A37D0u; f_800D93B0(c); // 800A37CC
L_800A37D0:;
  c->r[29]=c->r[29]+0x00000001u; // 800A37D0
  cmpu(c,0,c->r[29],0x00000040u); // 800A37D4
  if (crb(c,0)) { IRQCHK(c); goto L_800A3504; } // 800A37D8
  c->r[3]=0u+0x00000030u; // 800A37DC
  c->lr=0x800A37E4u; f_800D8ED0(c); // 800A37E0
  cmps(c,0,(int32_t)c->r[3],0); // 800A37E4
  c->r[16]=c->r[3]|c->r[3]; // 800A37E8
  if (crb(c,2)) { goto L_800A3834; } // 800A37EC
  c->r[15]=0u+0x00000000u; // 800A37F0
  W32(c->r[3]+0x00000008u,c->r[15]); // 800A37F4
  c->r[4]=0u+0x80210000u; // 800A37F8
  W8(c->r[3]+0x0000000Cu,c->r[15]); // 800A37FC
  c->r[4]=c->r[4]+0xFFFFAEA8u; // 800A3800
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A3804
  c->r[3]=c->r[3]+0x00000018u; // 800A3808
  c->lr=0x800A3810u; f_8015C1A0(c); // 800A380C
  W8(c->r[16]+0x0000000Du,c->r[15]); // 800A3810
  c->r[3]=0u+0x80220000u; // 800A3814
  c->r[0]=c->r[16]+0x00000010u; // 800A3818
  W8(c->r[16]+0x0000000Fu,c->r[15]); // 800A381C
  c->r[3]=c->r[3]+0xFFFFFC04u; // 800A3820
  W32(c->r[16]+0x00000010u,c->r[15]); // 800A3824
  W32(c->r[16]+0x00000014u,c->r[0]); // 800A3828
  W32(c->r[16]+0x00000000u,c->r[3]); // 800A382C
  W8(c->r[16]+0x0000000Eu,c->r[15]); // 800A3830
L_800A3834:;
  {uint32_t ea=c->r[2]+0xFFFFA4C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3834
  c->r[3]=0u+0x00000034u; // 800A3838
  W32(c->r[28]+0x00000078u,c->r[16]); // 800A383C
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[0]);} // 800A3840
  c->lr=0x800A3848u; f_800D8ED0(c); // 800A3844
  cmps(c,0,(int32_t)c->r[3],0); // 800A3848
  c->r[4]=c->r[3]|c->r[3]; // 800A384C
  if (crb(c,2)) { goto L_800A38C8; } // 800A3850
  {uint32_t ea=c->r[28]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A3854
  c->r[7]=0u+0x00000000u; // 800A3858
  c->r[5]=0u+0x80210000u; // 800A385C
  c->r[8]=0u+0x80210000u; // 800A3860
  W32(c->r[3]+0x00000008u,c->r[7]); // 800A3864
  c->r[8]=c->r[8]+0x0000293Cu; // 800A3868
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A386C
  c->r[6]=0u+0x00000078u; // 800A3870
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 800A3874
  c->r[5]=c->r[5]+0x00002908u; // 800A3878
  {uint32_t ea=c->r[2]+0xFFFFA4D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A387C
  c->r[0]=c->r[28]+0x00000024u; // 800A3880
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A3884
  W32(c->r[3]+0x00000010u,c->r[8]); // 800A3888
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 800A388C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800A3890
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800A3894
  W32(c->r[3]+0x00000020u,c->r[6]); // 800A3898
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A389C
  W8(c->r[3]+0x00000028u,c->r[7]); // 800A38A0
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A38A4
  W32(c->r[1]+0x00000028u,c->r[8]); // 800A38A8
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800A38AC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800A38B0
  W32(c->r[1]+0x00000034u,c->r[7]); // 800A38B4
  W32(c->r[1]+0x00000038u,c->r[6]); // 800A38B8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A38BC
  W8(c->r[1]+0x00000040u,c->r[7]); // 800A38C0
  W32(c->r[3]+0x00000030u,c->r[7]); // 800A38C4
L_800A38C8:;
  c->r[3]=R32(c->r[28]+0x00000078u); // 800A38C8
  c->lr=0x800A38D0u; f_800DA000(c); // 800A38CC
  c->r[4]=R32(c->r[28]+0x00000074u); // 800A38D0
  c->r[0]=0u+0x00000000u; // 800A38D4
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A38D8
  c->r[3]=c->r[28]|c->r[28]; // 800A38DC
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 800A38E0
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A38E4
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A38E8
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[1]);} // 800A38EC
  {uint32_t ea=c->r[28]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A38F0
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[1]);} // 800A38F4
  c->r[4]=R32(c->r[28]+0x00000074u); // 800A38F8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A38FC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A3900
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[0]);} // 800A3904
  c->r[4]=R32(c->r[28]+0x00000074u); // 800A3908
  {uint32_t ea=c->r[28]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A390C
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[0]);} // 800A3910
  W32(c->r[28]+0x0000006Cu,c->r[0]); // 800A3914
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 800A3918
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,31,ea,0,0);} // 800A391C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[31]=RF64(ea);} // 800A3920
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,30,ea,0,0);} // 800A3924
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[30]=RF64(ea);} // 800A3928
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,29,ea,0,0);} // 800A392C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[29]=RF64(ea);} // 800A3930
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,28,ea,0,0);} // 800A3934
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[28]=RF64(ea);} // 800A3938
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,27,ea,0,0);} // 800A393C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[27]=RF64(ea);} // 800A3940
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,26,ea,0,0);} // 800A3944
  {uint32_t ea=c->r[1]+0x00000090u; c->f[26]=RF64(ea);} // 800A3948
  c->r[11]=c->r[1]+0x00000090u; // 800A394C
  c->lr=0x800A3954u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A3950
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800A3954
  c->lr=c->r[0]; // 800A3958
  c->r[1]=c->r[1]+0x000000F0u; // 800A395C
  return; // 800A3960
}

// fn_800A3970
void f_800A3970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3970
  c->r[0]=c->lr; // 800A3974
  cmps(c,0,(int32_t)c->r[3],0); // 800A3978
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A397C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A3980
  c->r[31]=c->r[4]|c->r[4]; // 800A3984
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A3988
  c->r[30]=c->r[3]|c->r[3]; // 800A398C
  if (crb(c,2)) { goto L_800A3A54; } // 800A3990
  c->r[4]=0u+0x80220000u; // 800A3994
  c->r[5]=R32(c->r[3]+0x00000074u); // 800A3998
  c->r[4]=c->r[4]+0xFFFFA508u; // 800A399C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A39A0
  c->r[0]=c->r[4]+0x00000014u; // 800A39A4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A39A8
  c->r[0]=R32(c->r[5]+0x00000004u); // 800A39AC
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A39B0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800A39B4
  if (!crb(c,2)) { goto L_800A39DC; } // 800A39B8
  cmps(c,0,(int32_t)c->r[5],0); // 800A39BC
  if (crb(c,2)) { goto L_800A39DC; } // 800A39C0
  c->r[12]=R32(c->r[5]+0x00000000u); // 800A39C4
  c->r[3]=c->r[5]|c->r[5]; // 800A39C8
  c->r[4]=0u+0x00000001u; // 800A39CC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A39D0
  c->ctr=c->r[12]; // 800A39D4
  if (true) { c->lr=0x800A39DCu; dispatch(c,c->ctr); } // 800A39D8
L_800A39DC:;
  c->r[3]=R32(c->r[30]+0x00000070u); // 800A39DC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A39E0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A39E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A39E8
  if (!crb(c,2)) { goto L_800A3A0C; } // 800A39EC
  cmps(c,0,(int32_t)c->r[3],0); // 800A39F0
  if (crb(c,2)) { goto L_800A3A0C; } // 800A39F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A39F8
  c->r[4]=0u+0x00000001u; // 800A39FC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A3A00
  c->ctr=c->r[12]; // 800A3A04
  if (true) { c->lr=0x800A3A0Cu; dispatch(c,c->ctr); } // 800A3A08
L_800A3A0C:;
  c->r[3]=R32(c->r[30]+0x00000078u); // 800A3A0C
  cmps(c,0,(int32_t)c->r[3],0); // 800A3A10
  if (crb(c,2)) { goto L_800A3A2C; } // 800A3A14
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A3A18
  c->r[4]=0u+0x00000001u; // 800A3A1C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A3A20
  c->ctr=c->r[12]; // 800A3A24
  if (true) { c->lr=0x800A3A2Cu; dispatch(c,c->ctr); } // 800A3A28
L_800A3A2C:;
  c->r[3]=c->r[30]+0x00000010u; // 800A3A2C
  c->r[4]=0u+0x00000000u; // 800A3A30
  c->lr=0x800A3A38u; f_80008E10(c); // 800A3A34
  c->r[3]=c->r[30]|c->r[30]; // 800A3A38
  c->r[4]=0u+0x00000000u; // 800A3A3C
  c->lr=0x800A3A44u; f_8000BFD0(c); // 800A3A40
  cmps(c,0,(int32_t)c->r[31],0); // 800A3A44
  if (!crb(c,1)) { goto L_800A3A54; } // 800A3A48
  c->r[3]=c->r[30]|c->r[30]; // 800A3A4C
  c->lr=0x800A3A54u; f_800D93B0(c); // 800A3A50
L_800A3A54:;
  c->r[3]=c->r[30]|c->r[30]; // 800A3A54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A3A58
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A3A5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A3A60
  c->lr=c->r[0]; // 800A3A64
  c->r[1]=c->r[1]+0x00000010u; // 800A3A68
  return; // 800A3A6C
}

// fn_800A3A70
void f_800A3A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A3A70
  c->r[0]=c->lr; // 800A3A74
  W32(c->r[1]+0x00000164u,c->r[0]); // 800A3A78
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 800A3A7C
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 800A3A80
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 800A3A84
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 800A3A88
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 800A3A8C
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 800A3A90
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 800A3A94
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 800A3A98
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 800A3A9C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 800A3AA0
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 800A3AA4
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 800A3AA8
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 800A3AAC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 800A3AB0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 800A3AB4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 800A3AB8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 800A3ABC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 800A3AC0
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[22]);} // 800A3AC4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,22,ea,0,0);} // 800A3AC8
  W32(c->r[1]+0x000000BCu,c->r[31]); // 800A3ACC
  c->r[31]=c->r[3]|c->r[3]; // 800A3AD0
  W32(c->r[1]+0x000000B8u,c->r[30]); // 800A3AD4
  W32(c->r[1]+0x000000B4u,c->r[29]); // 800A3AD8
  W32(c->r[1]+0x000000B0u,c->r[28]); // 800A3ADC
  c->r[5]=R32(c->r[3]+0x00000074u); // 800A3AE0
  c->r[0]=R32(c->r[5]+0x00000030u); // 800A3AE4
  cmps(c,0,(int32_t)c->r[0],0); // 800A3AE8
  if (!crb(c,2)) { goto L_800A3AFC; } // 800A3AEC
  c->r[0]=0u+0x00000002u; // 800A3AF0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A3AF4
  goto L_800A4320; // 800A3AF8
L_800A3AFC:;
  c->r[4]=R32(c->r[13]+0xFFFFADD8u); // 800A3AFC
  c->r[0]=R32(c->r[4]+0x00000094u); // 800A3B00
  cmps(c,0,(int32_t)c->r[0],3); // 800A3B04
  if (!crb(c,2)) { goto L_800A3B9C; } // 800A3B08
  c->r[0]=R8(c->r[5]+0x00000039u); // 800A3B0C
  cmps(c,0,(int32_t)c->r[0],0); // 800A3B10
  if (crb(c,2)) { goto L_800A3B6C; } // 800A3B14
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 800A3B18
  cmps(c,0,(int32_t)c->r[4],0); // 800A3B1C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A3B20
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800A3B24
  if (!crb(c,2)) { goto L_800A3B9C; } // 800A3B28
  c->r[4]=0u+0x80210000u; // 800A3B2C
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3B30
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A3B34
  c->r[5]=0u+0x00000014u; // 800A3B38
  c->r[4]=c->r[4]+0x00000018u; // 800A3B3C
  c->r[6]=0u+0x00000002u; // 800A3B40
  c->r[7]=0u+0x00000001u; // 800A3B44
  c->r[8]=0u+0x00000090u; // 800A3B48
  c->r[3]=c->r[3]+0x00000020u; // 800A3B4C
  c->lr=0x800A3B54u; f_8004FB70(c); // 800A3B50
  c->r[3]=R32(c->r[31]+0x00000074u); // 800A3B54
  c->r[4]=0u+0x00000001u; // 800A3B58
  c->r[0]=0u+0x00000002u; // 800A3B5C
  W8(c->r[3]+0x0000003Au,c->r[4]); // 800A3B60
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A3B64
  goto L_800A4320; // 800A3B68
L_800A3B6C:;
  c->r[0]=0u+0x00000001u; // 800A3B6C
  W8(c->r[5]+0x00000039u,c->r[0]); // 800A3B70
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A3B74
  c->lr=0x800A3B7Cu; f_800FBF40(c); // 800A3B78
  c->r[4]=0u+0x88890000u; // 800A3B7C
  c->r[0]=c->r[4]+0xFFFF8889u; // 800A3B80
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800A3B84
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800A3B88
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 800A3B8C
  c->r[3]=c->r[3]-c->r[0]; // 800A3B90
  c->r[0]=c->r[3]+0x0000000Au; // 800A3B94
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 800A3B98
L_800A3B9C:;
  c->r[4]=R32(c->r[31]+0x00000074u); // 800A3B9C
  c->r[3]=R32(c->r[4]+0x00000034u); // 800A3BA0
  cmps(c,0,(int32_t)c->r[3],0); // 800A3BA4
  if (crb(c,2)) { goto L_800A3BB4; } // 800A3BA8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A3BAC
  W32(c->r[4]+0x00000034u,c->r[0]); // 800A3BB0
L_800A3BB4:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800A3BB4
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A3BB8
  cmps(c,0,(int32_t)c->r[0],0); // 800A3BBC
  if (!crb(c,2)) { goto L_800A3BD4; } // 800A3BC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A3BC4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A3BC8
  c->ctr=c->r[12]; // 800A3BCC
  if (true) { c->lr=0x800A3BD4u; dispatch(c,c->ctr); } // 800A3BD0
L_800A3BD4:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800A3BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800A3BD8
  if (crb(c,2)) { goto L_800A3BEC; } // 800A3BDC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A3BE0
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 800A3BE4
  goto L_800A4298; // 800A3BE8
L_800A3BEC:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 800A3BEC
  cmps(c,0,(int32_t)c->r[0],100); // 800A3BF0
  if (crb(c,2)) { goto L_800A3EE4; } // 800A3BF4
  if (!crb(c,0)) { goto L_800A3C20; } // 800A3BF8
  cmps(c,0,(int32_t)c->r[0],50); // 800A3BFC
  if (crb(c,2)) { goto L_800A3D40; } // 800A3C00
  if (!crb(c,0)) { goto L_800A3C14; } // 800A3C04
  cmps(c,0,(int32_t)c->r[0],0); // 800A3C08
  if (crb(c,2)) { goto L_800A3C48; } // 800A3C0C
  goto L_800A4298; // 800A3C10
L_800A3C14:;
  cmps(c,0,(int32_t)c->r[0],52); // 800A3C14
  if (!crb(c,0)) { goto L_800A4298; } // 800A3C18
  goto L_800A3E84; // 800A3C1C
L_800A3C20:;
  cmps(c,0,(int32_t)c->r[0],500); // 800A3C20
  if (crb(c,2)) { goto L_800A41FC; } // 800A3C24
  if (!crb(c,0)) { goto L_800A3C3C; } // 800A3C28
  cmps(c,0,(int32_t)c->r[0],102); // 800A3C2C
  if (crb(c,2)) { goto L_800A419C; } // 800A3C30
  if (!crb(c,0)) { goto L_800A4298; } // 800A3C34
  goto L_800A40F8; // 800A3C38
L_800A3C3C:;
  cmps(c,0,(int32_t)c->r[0],502); // 800A3C3C
  if (!crb(c,0)) { goto L_800A4298; } // 800A3C40
  goto L_800A4230; // 800A3C44
L_800A3C48:;
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A3C48
  c->r[0]=R32(c->r[3]+0x00000034u); // 800A3C4C
  cmps(c,0,(int32_t)c->r[0],0); // 800A3C50
  if (crb(c,2)) { goto L_800A3C64; } // 800A3C54
  c->r[0]=0u+0x000001F4u; // 800A3C58
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800A3C5C
  goto L_800A4298; // 800A3C60
L_800A3C64:;
  c->r[0]=R32(c->r[31]+0x00000068u); // 800A3C64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A3C68
  c->r[3]=c->r[3]+c->r[0]; // 800A3C6C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800A3C70
  cmps(c,0,(int32_t)c->r[0],0); // 800A3C74
  if (crb(c,2)) { goto L_800A4298; } // 800A3C78
  cmpu(c,0,c->r[0],0x00000001u); // 800A3C7C
  if (crb(c,2)) { goto L_800A3C90; } // 800A3C80
  cmpu(c,0,c->r[0],0x00000002u); // 800A3C84
  if (crb(c,2)) { goto L_800A3D34; } // 800A3C88
  goto L_800A4298; // 800A3C8C
L_800A3C90:;
  c->r[3]=0u+0x00000034u; // 800A3C90
  c->lr=0x800A3C98u; f_800D8ED0(c); // 800A3C94
  cmps(c,0,(int32_t)c->r[3],0); // 800A3C98
  c->r[4]=c->r[3]|c->r[3]; // 800A3C9C
  if (crb(c,2)) { goto L_800A3D20; } // 800A3CA0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3CA4
  c->r[8]=0u+0x00000000u; // 800A3CA8
  c->r[5]=0u+0x80210000u; // 800A3CAC
  c->r[9]=0u+0x80210000u; // 800A3CB0
  W32(c->r[3]+0x00000008u,c->r[8]); // 800A3CB4
  c->r[9]=c->r[9]+0x0000293Cu; // 800A3CB8
  {uint32_t ea=c->r[2]+0xFFFFA4DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3CBC
  c->r[7]=0u+0x00000028u; // 800A3CC0
  W8(c->r[3]+0x0000000Cu,c->r[8]); // 800A3CC4
  c->r[5]=c->r[5]+0x00002908u; // 800A3CC8
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800A3CCC
  {uint32_t ea=c->r[2]+0xFFFFA4E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3CD0
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A3CD4
  c->r[6]=0u+0x00000001u; // 800A3CD8
  c->r[0]=c->r[31]+0x00000024u; // 800A3CDC
  W32(c->r[3]+0x00000010u,c->r[9]); // 800A3CE0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800A3CE4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 800A3CE8
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 800A3CEC
  W32(c->r[3]+0x00000020u,c->r[7]); // 800A3CF0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A3CF4
  W8(c->r[3]+0x00000028u,c->r[6]); // 800A3CF8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A3CFC
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 800A3D00
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 800A3D04
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[2]);} // 800A3D08
  W32(c->r[1]+0x00000098u,c->r[8]); // 800A3D0C
  W32(c->r[1]+0x0000009Cu,c->r[7]); // 800A3D10
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 800A3D14
  W8(c->r[1]+0x000000A4u,c->r[6]); // 800A3D18
  W32(c->r[3]+0x00000030u,c->r[8]); // 800A3D1C
L_800A3D20:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800A3D20
  c->lr=0x800A3D28u; f_800DA000(c); // 800A3D24
  c->r[0]=0u+0x00000064u; // 800A3D28
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800A3D2C
  goto L_800A4298; // 800A3D30
L_800A3D34:;
  c->r[0]=0u+0x00000032u; // 800A3D34
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800A3D38
  goto L_800A4298; // 800A3D3C
L_800A3D40:;
  c->r[3]=0u+0x00000034u; // 800A3D40
  c->lr=0x800A3D48u; f_800D8ED0(c); // 800A3D44
  cmps(c,0,(int32_t)c->r[3],0); // 800A3D48
  if (crb(c,2)) { goto L_800A3DCC; } // 800A3D4C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A3D50
  c->r[7]=0u+0x00000000u; // 800A3D54
  c->r[4]=0u+0x80210000u; // 800A3D58
  {uint32_t ea=c->r[2]+0xFFFFA4DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3D5C
  W32(c->r[3]+0x00000008u,c->r[7]); // 800A3D60
  c->r[8]=0u+0x80210000u; // 800A3D64
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 800A3D68
  c->r[8]=c->r[8]+0x0000293Cu; // 800A3D6C
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 800A3D70
  c->r[4]=c->r[4]+0x00002908u; // 800A3D74
  c->r[6]=0u+0x0000001Eu; // 800A3D78
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3D7C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A3D80
  c->r[5]=0u+0x00000001u; // 800A3D84
  c->r[0]=c->r[31]+0x00000024u; // 800A3D88
  W32(c->r[3]+0x00000010u,c->r[8]); // 800A3D8C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800A3D90
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 800A3D94
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800A3D98
  W32(c->r[3]+0x00000020u,c->r[6]); // 800A3D9C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A3DA0
  W8(c->r[3]+0x00000028u,c->r[5]); // 800A3DA4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A3DA8
  W32(c->r[1]+0x00000054u,c->r[8]); // 800A3DAC
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 800A3DB0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 800A3DB4
  W32(c->r[1]+0x00000060u,c->r[7]); // 800A3DB8
  W32(c->r[1]+0x00000064u,c->r[6]); // 800A3DBC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 800A3DC0
  W8(c->r[1]+0x0000006Cu,c->r[5]); // 800A3DC4
  W32(c->r[3]+0x00000030u,c->r[7]); // 800A3DC8
L_800A3DCC:;
  c->r[29]=c->r[3]|c->r[3]; // 800A3DCC
  c->r[3]=0u+0x00000034u; // 800A3DD0
  c->lr=0x800A3DD8u; f_800D8ED0(c); // 800A3DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800A3DD8
  if (crb(c,2)) { goto L_800A3E5C; } // 800A3DDC
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A3DE0
  c->r[7]=0u+0x00000000u; // 800A3DE4
  c->r[4]=0u+0x80210000u; // 800A3DE8
  c->r[8]=0u+0x80210000u; // 800A3DEC
  W32(c->r[3]+0x00000008u,c->r[7]); // 800A3DF0
  c->r[8]=c->r[8]+0x0000293Cu; // 800A3DF4
  {uint32_t ea=c->r[2]+0xFFFFA4DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3DF8
  c->r[6]=0u+0x00000028u; // 800A3DFC
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 800A3E00
  c->r[4]=c->r[4]+0x00002908u; // 800A3E04
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 800A3E08
  {uint32_t ea=c->r[2]+0xFFFFA4E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3E0C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A3E10
  c->r[5]=0u+0x00000001u; // 800A3E14
  c->r[0]=c->r[31]+0x00000024u; // 800A3E18
  W32(c->r[3]+0x00000010u,c->r[8]); // 800A3E1C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 800A3E20
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 800A3E24
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800A3E28
  W32(c->r[3]+0x00000020u,c->r[6]); // 800A3E2C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A3E30
  W8(c->r[3]+0x00000028u,c->r[5]); // 800A3E34
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A3E38
  W32(c->r[1]+0x00000070u,c->r[8]); // 800A3E3C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 800A3E40
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 800A3E44
  W32(c->r[1]+0x0000007Cu,c->r[7]); // 800A3E48
  W32(c->r[1]+0x00000080u,c->r[6]); // 800A3E4C
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 800A3E50
  W8(c->r[1]+0x00000088u,c->r[5]); // 800A3E54
  W32(c->r[3]+0x00000030u,c->r[7]); // 800A3E58
L_800A3E5C:;
  c->r[30]=R32(c->r[31]+0x00000078u); // 800A3E5C
  c->r[4]=c->r[3]|c->r[3]; // 800A3E60
  c->r[3]=c->r[30]|c->r[30]; // 800A3E64
  c->lr=0x800A3E6Cu; f_800DA000(c); // 800A3E68
  c->r[3]=c->r[30]|c->r[30]; // 800A3E6C
  c->r[4]=c->r[29]|c->r[29]; // 800A3E70
  c->lr=0x800A3E78u; f_800DA000(c); // 800A3E74
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A3E78
  c->r[0]=c->r[3]+0x00000001u; // 800A3E7C
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800A3E80
L_800A3E84:;
  c->r[29]=R32(c->r[31]+0x00000078u); // 800A3E84
  c->r[30]=R8(c->r[29]+0x0000000Fu); // 800A3E88
  c->r[28]=c->r[29]+0x00000018u; // 800A3E8C
  cmps(c,0,(int32_t)c->r[30],0); // 800A3E90
  if (crb(c,2)) { goto L_800A3EA0; } // 800A3E94
  c->r[3]=c->r[28]|c->r[28]; // 800A3E98
  c->lr=0x800A3EA0u; f_8015C1E0(c); // 800A3E9C
L_800A3EA0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 800A3EA0
  cmps(c,0,(int32_t)c->r[30],0); // 800A3EA4
  c->r[0]=cntlz(c->r[0]); // 800A3EA8
  c->r[29]=rotl(c->r[0],27)&0x07FFFFFFu; // 800A3EAC
  if (crb(c,2)) { goto L_800A3EBC; } // 800A3EB0
  c->r[3]=c->r[28]|c->r[28]; // 800A3EB4
  c->lr=0x800A3EBCu; f_8015C2C0(c); // 800A3EB8
L_800A3EBC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A3EBC
  if (crb(c,2)) { goto L_800A4298; } // 800A3EC0
  c->r[0]=R32(c->r[31]+0x00000068u); // 800A3EC4
  c->r[4]=0u+0x00000000u; // 800A3EC8
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A3ECC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A3ED0
  c->r[3]=c->r[3]+c->r[0]; // 800A3ED4
  W32(c->r[3]+0x00000014u,c->r[4]); // 800A3ED8
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 800A3EDC
  goto L_800A4298; // 800A3EE0
L_800A3EE4:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A3EE4
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A3EE8
  fcmp(c,0,c->f[3],c->f[2]); // 800A3EEC
  if (crb(c,2)) { goto L_800A3F40; } // 800A3EF0
  fcmp(c,0,c->f[3],c->f[2]); // 800A3EF4
  if (!crb(c,1)) { goto L_800A3F20; } // 800A3EF8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A3EFC
  {uint32_t ea=c->r[2]+0xFFFFA4E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3F00
  fcmp(c,0,c->f[1],c->f[0]); // 800A3F04
  if (!crb(c,1)) { goto L_800A3F18; } // 800A3F08
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A3F0C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A3F10
  goto L_800A3F40; // 800A3F14
L_800A3F18:;
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[2]);} // 800A3F18
  goto L_800A3F40; // 800A3F1C
L_800A3F20:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A3F20
  {uint32_t ea=c->r[2]+0xFFFFA4E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A3F24
  fcmp(c,0,c->f[1],c->f[0]); // 800A3F28
  if (!crb(c,1)) { goto L_800A3F3C; } // 800A3F2C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A3F30
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A3F34
  goto L_800A3F40; // 800A3F38
L_800A3F3C:;
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[2]);} // 800A3F3C
L_800A3F40:;
  c->r[0]=R8(c->r[31]+0x00000065u); // 800A3F40
  cmps(c,0,(int32_t)c->r[0],0); // 800A3F44
  if (crb(c,2)) { goto L_800A4298; } // 800A3F48
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A3F4C
  c->r[4]=0u+0x0000002Fu; // 800A3F50
  c->lr=0x800A3F58u; f_800A8BE0(c); // 800A3F54
  c->r[3]=R32(c->r[31]+0x00000074u); // 800A3F58
  c->r[0]=0u+0x00000001u; // 800A3F5C
  c->r[30]=0u+0x80260000u; // 800A3F60
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[24]=c->ps1[24]=RF32(ea);} // 800A3F64
  W32(c->r[3]+0x00000034u,c->r[0]); // 800A3F68
  c->r[30]=c->r[30]+0xFFFFBD2Cu; // 800A3F6C
  {uint32_t ea=c->r[2]+0xFFFFA4F0u; c->f[25]=c->ps1[25]=RF32(ea);} // 800A3F70
  c->r[28]=0u+0x00000000u; // 800A3F74
  {uint32_t ea=c->r[2]+0xFFFFA4ECu; c->f[26]=c->ps1[26]=RF32(ea);} // 800A3F78
  {uint32_t ea=c->r[2]+0xFFFFA4F4u; c->f[27]=c->ps1[27]=RF32(ea);} // 800A3F7C
  {uint32_t ea=c->r[2]+0xFFFFA4F8u; c->f[28]=c->ps1[28]=RF32(ea);} // 800A3F80
  {uint32_t ea=c->r[2]+0xFFFFA4FCu; c->f[29]=c->ps1[29]=RF32(ea);} // 800A3F84
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[30]=c->ps1[30]=RF32(ea);} // 800A3F88
  {uint32_t ea=c->r[2]+0xFFFFA500u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A3F8C
L_800A3F90:;
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A3F90
  c->lr=0x800A3F98u; f_800126B0(c); // 800A3F94
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[24]); // 800A3F98
  c->r[3]=R32(c->r[31]+0x00000020u); // 800A3F9C
  c->r[4]=R32(c->r[31]+0x00000024u); // 800A3FA0
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A3FA4
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[0]); // 800A3FA8
  W32(c->r[1]+0x00000020u,c->r[3]); // 800A3FAC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A3FB0
  W32(c->r[1]+0x00000024u,c->r[4]); // 800A3FB4
  c->f[23]=c->ps1[23]=S(c->f[26]+c->f[0]); // 800A3FB8
  W32(c->r[1]+0x00000028u,c->r[0]); // 800A3FBC
  c->lr=0x800A3FC4u; f_800FC0C0(c); // 800A3FC0
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[1]); // 800A3FC4
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A3FC8
  c->f[22]=c->ps1[22]=S(c->f[27]+c->f[0]); // 800A3FCC
  c->lr=0x800A3FD4u; f_800FC0C0(c); // 800A3FD0
  c->f[2]=-c->f[23]; // 800A3FD4
  c->f[0]=c->ps1[0]=S(c->f[23]-c->f[2]); // 800A3FD8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800A3FDC
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800A3FE0
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[0]); // 800A3FE4
  c->f[23]=c->ps1[23]=S(c->f[0]/c->f[29]); // 800A3FE8
  c->f[1]=c->f[23]; // 800A3FEC
  c->lr=0x800A3FF4u; f_801E1CD0(c); // 800A3FF0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800A3FF4
  c->f[1]=c->f[23]; // 800A3FF8
  c->f[0]=-c->f[0]; // 800A3FFC
  c->f[23]=c->ps1[23]=S(c->f[22]*c->f[0]); // 800A4000
  c->lr=0x800A4008u; f_801E20DC(c); // 800A4004
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800A4008
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A400C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[23]);} // 800A4010
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800A4014
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A4018
  c->f[1]=c->ps1[1]=S(c->f[22]*c->f[1]); // 800A401C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[30]);} // 800A4020
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800A4024
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800A4028
  c->lr=0x800A4030u; f_800FBF40(c); // 800A402C
  c->r[4]=R32(c->r[30]+0x00000004u); // 800A4030
  c->r[0]=divwu(c->r[3],c->r[4]); // 800A4034
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800A4038
  c->r[29]=c->r[3]-c->r[0]; // 800A403C
  c->r[3]=0u+0x00000068u; // 800A4040
  c->lr=0x800A4048u; f_800D8ED0(c); // 800A4044
  cmps(c,0,(int32_t)c->r[3],0); // 800A4048
  if (crb(c,2)) { goto L_800A4090; } // 800A404C
  c->r[11]=R32(c->r[1]+0x0000002Cu); // 800A4050
  c->r[4]=c->r[29]|c->r[29]; // 800A4054
  c->r[10]=R32(c->r[1]+0x00000030u); // 800A4058
  c->r[5]=c->r[1]+0x00000008u; // 800A405C
  c->r[9]=R32(c->r[1]+0x00000034u); // 800A4060
  c->r[6]=c->r[1]+0x00000014u; // 800A4064
  c->r[8]=R32(c->r[1]+0x00000020u); // 800A4068
  c->r[7]=R32(c->r[1]+0x00000024u); // 800A406C
  c->r[0]=R32(c->r[1]+0x00000028u); // 800A4070
  W32(c->r[1]+0x00000014u,c->r[11]); // 800A4074
  W32(c->r[1]+0x00000018u,c->r[10]); // 800A4078
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800A407C
  W32(c->r[1]+0x00000008u,c->r[8]); // 800A4080
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800A4084
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A4088
  c->lr=0x800A4090u; f_800A4C30(c); // 800A408C
L_800A4090:;
  c->r[28]=c->r[28]+0x00000001u; // 800A4090
  cmpu(c,0,c->r[28],0x0000000Cu); // 800A4094
  if (crb(c,0)) { IRQCHK(c); goto L_800A3F90; } // 800A4098
  c->r[4]=0u+0x80210000u; // 800A409C
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A40A0
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A40A4
  c->r[3]=c->r[31]+0x00000020u; // 800A40A8
  c->r[4]=c->r[4]+0x00000018u; // 800A40AC
  c->r[5]=0u+0x00000008u; // 800A40B0
  c->r[6]=0u+0x00000002u; // 800A40B4
  c->r[7]=0u+0x00000001u; // 800A40B8
  c->r[8]=0u+0x00000090u; // 800A40BC
  c->lr=0x800A40C4u; f_8004FB70(c); // 800A40C0
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A40C4
  c->r[4]=0u+0x0000003Cu; // 800A40C8
  {uint32_t ea=c->r[2]+0xFFFFA504u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A40CC
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A40D0
  c->lr=0x800A40D8u; f_8000A3F0(c); // 800A40D4
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A40D8
  c->r[4]=0u+0x00000014u; // 800A40DC
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A40E0
  c->r[0]=c->r[3]+0x00000001u; // 800A40E4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A40E8
  W32(c->r[31]+0x0000006Cu,c->r[4]); // 800A40EC
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800A40F0
  goto L_800A4298; // 800A40F4
L_800A40F8:;
  c->r[3]=0u+0x00000034u; // 800A40F8
  c->lr=0x800A4100u; f_800D8ED0(c); // 800A40FC
  cmps(c,0,(int32_t)c->r[3],0); // 800A4100
  c->r[4]=c->r[3]|c->r[3]; // 800A4104
  if (crb(c,2)) { goto L_800A4184; } // 800A4108
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A410C
  c->r[8]=0u+0x00000000u; // 800A4110
  c->r[5]=0u+0x80210000u; // 800A4114
  c->r[9]=0u+0x80210000u; // 800A4118
  W32(c->r[3]+0x00000008u,c->r[8]); // 800A411C
  c->r[9]=c->r[9]+0x0000293Cu; // 800A4120
  {uint32_t ea=c->r[2]+0xFFFFA4CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4124
  c->r[7]=0u+0x0000005Au; // 800A4128
  W8(c->r[3]+0x0000000Cu,c->r[8]); // 800A412C
  c->r[5]=c->r[5]+0x00002908u; // 800A4130
  {uint32_t ea=c->r[2]+0xFFFFA4E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4134
  c->r[6]=0u+0x00000001u; // 800A4138
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A413C
  c->r[0]=c->r[31]+0x00000024u; // 800A4140
  W32(c->r[3]+0x00000010u,c->r[9]); // 800A4144
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 800A4148
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800A414C
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 800A4150
  W32(c->r[3]+0x00000020u,c->r[7]); // 800A4154
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A4158
  W8(c->r[3]+0x00000028u,c->r[6]); // 800A415C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800A4160
  W32(c->r[1]+0x00000038u,c->r[9]); // 800A4164
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A4168
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800A416C
  W32(c->r[1]+0x00000044u,c->r[8]); // 800A4170
  W32(c->r[1]+0x00000048u,c->r[7]); // 800A4174
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A4178
  W8(c->r[1]+0x00000050u,c->r[6]); // 800A417C
  W32(c->r[3]+0x00000030u,c->r[8]); // 800A4180
L_800A4184:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 800A4184
  c->lr=0x800A418Cu; f_800DA000(c); // 800A4188
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A418C
  c->r[0]=c->r[3]+0x00000001u; // 800A4190
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800A4194
  goto L_800A4298; // 800A4198
L_800A419C:;
  c->r[29]=R32(c->r[31]+0x00000078u); // 800A419C
  c->r[30]=R8(c->r[29]+0x0000000Fu); // 800A41A0
  c->r[28]=c->r[29]+0x00000018u; // 800A41A4
  cmps(c,0,(int32_t)c->r[30],0); // 800A41A8
  if (crb(c,2)) { goto L_800A41B8; } // 800A41AC
  c->r[3]=c->r[28]|c->r[28]; // 800A41B0
  c->lr=0x800A41B8u; f_8015C1E0(c); // 800A41B4
L_800A41B8:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 800A41B8
  cmps(c,0,(int32_t)c->r[30],0); // 800A41BC
  c->r[0]=cntlz(c->r[0]); // 800A41C0
  c->r[29]=rotl(c->r[0],27)&0x07FFFFFFu; // 800A41C4
  if (crb(c,2)) { goto L_800A41D4; } // 800A41C8
  c->r[3]=c->r[28]|c->r[28]; // 800A41CC
  c->lr=0x800A41D4u; f_8015C2C0(c); // 800A41D0
L_800A41D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A41D4
  if (crb(c,2)) { goto L_800A4298; } // 800A41D8
  c->r[0]=R32(c->r[31]+0x00000068u); // 800A41DC
  c->r[4]=0u+0x00000000u; // 800A41E0
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A41E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A41E8
  c->r[3]=c->r[3]+c->r[0]; // 800A41EC
  W32(c->r[3]+0x00000014u,c->r[4]); // 800A41F0
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 800A41F4
  goto L_800A4298; // 800A41F8
L_800A41FC:;
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A41FC
  c->lr=0x800A4204u; f_800FBF40(c); // 800A4200
  c->r[5]=0u+0x88890000u; // 800A4204
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 800A4208
  c->r[0]=c->r[5]+0xFFFF8889u; // 800A420C
  c->r[5]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 800A4210
  c->r[0]=c->r[4]+0x00000001u; // 800A4214
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800A4218
  c->r[5]=rotl(c->r[5],28)&0x0FFFFFFFu; // 800A421C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)30); // 800A4220
  c->r[0]=c->r[3]-c->r[0]; // 800A4224
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 800A4228
  goto L_800A4298; // 800A422C
L_800A4230:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800A4230
  c->r[0]=0u+0x00000001u; // 800A4234
  {uint32_t ea=c->r[2]+0xFFFFA508u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4238
  W8(c->r[3]+0x00000038u,c->r[0]); // 800A423C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A4240
  fcmp(c,0,c->f[3],c->f[2]); // 800A4244
  if (crb(c,2)) { goto L_800A4298; } // 800A4248
  fcmp(c,0,c->f[3],c->f[2]); // 800A424C
  if (!crb(c,1)) { goto L_800A4278; } // 800A4250
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A4254
  {uint32_t ea=c->r[2]+0xFFFFA4E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4258
  fcmp(c,0,c->f[1],c->f[0]); // 800A425C
  if (!crb(c,1)) { goto L_800A4270; } // 800A4260
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A4264
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A4268
  goto L_800A4298; // 800A426C
L_800A4270:;
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[2]);} // 800A4270
  goto L_800A4298; // 800A4274
L_800A4278:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A4278
  {uint32_t ea=c->r[2]+0xFFFFA4E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A427C
  fcmp(c,0,c->f[1],c->f[0]); // 800A4280
  if (!crb(c,1)) { goto L_800A4294; } // 800A4284
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A4288
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A428C
  goto L_800A4298; // 800A4290
L_800A4294:;
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[2]);} // 800A4294
L_800A4298:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4298
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A429C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A42A0
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800A42A4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A42A8
  c->r[0]=R8(c->r[31]+0x00000065u); // 800A42AC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800A42B0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A42B4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42B8
  cmps(c,0,(int32_t)c->r[0],0); // 800A42BC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[4]);} // 800A42C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A42C4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 800A42C8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A42CC
  if (!crb(c,2)) { goto L_800A42E4; } // 800A42D0
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A42D4
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42D8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A42DC
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[0]);} // 800A42E0
L_800A42E4:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800A42E4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42E8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800A42EC
  {uint32_t ea=c->r[2]+0xFFFFA4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A42F0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A42F4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 800A42F8
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A42FC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 800A4300
  c->r[3]=R32(c->r[31]+0x00000074u); // 800A4304
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4308
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A430C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800A4310
  c->r[3]=R32(c->r[31]+0x00000074u); // 800A4314
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4318
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800A431C
L_800A4320:;
  c->r[0]=R32(c->r[1]+0x00000164u); // 800A4320
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 800A4324
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 800A4328
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 800A432C
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 800A4330
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 800A4334
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 800A4338
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 800A433C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 800A4340
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 800A4344
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 800A4348
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 800A434C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 800A4350
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 800A4354
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 800A4358
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 800A435C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 800A4360
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 800A4364
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 800A4368
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,22,ea,0,0);} // 800A436C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[22]=RF64(ea);} // 800A4370
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800A4374
  c->r[30]=R32(c->r[1]+0x000000B8u); // 800A4378
  c->r[29]=R32(c->r[1]+0x000000B4u); // 800A437C
  c->r[28]=R32(c->r[1]+0x000000B0u); // 800A4380
  c->lr=c->r[0]; // 800A4384
  c->r[1]=c->r[1]+0x00000160u; // 800A4388
  return; // 800A438C
}

// fn_800A4390
void f_800A4390(Ctx* __restrict c) {
  return; // 800A4390
}

// fn_800A43A0
void f_800A43A0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800A43A0
  W8(c->r[3]+0x00000064u,c->r[0]); // 800A43A4
  W8(c->r[3]+0x00000065u,c->r[0]); // 800A43A8
  return; // 800A43AC
}

// fn_800A43B0
void f_800A43B0(Ctx* __restrict c) {
  return; // 800A43B0
}

// fn_800A43C0
void f_800A43C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A43C0
  c->r[0]=c->lr; // 800A43C4
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A43C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A43CC
  c->r[5]=c->r[1]+0x00000008u; // 800A43D0
  c->r[6]=c->r[1]+0x00000020u; // 800A43D4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800A43D8
  c->r[31]=0u+0x80210000u; // 800A43DC
  c->r[31]=c->r[31]+0xFFFFAFB8u; // 800A43E0
  W32(c->r[1]+0x00000048u,c->r[30]); // 800A43E4
  c->r[30]=0u+0x00000000u; // 800A43E8
  W32(c->r[1]+0x00000044u,c->r[29]); // 800A43EC
  c->r[29]=c->r[3]|c->r[3]; // 800A43F0
  c->r[3]=c->r[4]|c->r[4]; // 800A43F4
  c->r[4]=c->r[1]+0x00000014u; // 800A43F8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A43FC
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4400
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 800A4404
  {uint32_t ea=c->r[29]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A4408
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A440C
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 800A4410
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 800A4414
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800A4418
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800A441C
  {uint32_t ea=c->r[29]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4420
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A4424
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A4428
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A442C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A4430
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A4434
  {uint32_t ea=c->r[29]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4438
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A443C
  {uint32_t ea=c->r[29]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4440
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A4444
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4448
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A444C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A4450
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A4454
  c->ctr=c->r[12]; // 800A4458
  if (true) { c->lr=0x800A4460u; dispatch(c,c->ctr); } // 800A445C
  cmps(c,0,(int32_t)c->r[3],0); // 800A4460
  if (crb(c,2)) { goto L_800A44CC; } // 800A4464
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4468
  c->r[0]=0u+0x00000001u; // 800A446C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 800A4470
  c->r[30]=0u+0x00000001u; // 800A4474
  {uint32_t ea=c->r[29]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4478
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A447C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A4480
  {uint32_t ea=c->r[29]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4484
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4488
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800A448C
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4490
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A4494
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A4498
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800A449C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A44A0
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[2]);} // 800A44A4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A44A8
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A44AC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A44B0
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[1]);} // 800A44B4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A44B8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A44BC
  W8(c->r[29]+0x00000065u,c->r[0]); // 800A44C0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A44C4
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 800A44C8
L_800A44CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800A44CC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800A44D0
  c->r[30]=R32(c->r[1]+0x00000048u); // 800A44D4
  c->r[29]=R32(c->r[1]+0x00000044u); // 800A44D8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A44DC
  c->lr=c->r[0]; // 800A44E0
  c->r[1]=c->r[1]+0x00000050u; // 800A44E4
  return; // 800A44E8
}

// fn_800A44F0
void f_800A44F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A44F0
  c->r[0]=c->lr; // 800A44F4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800A44F8
  c->r[11]=c->r[1]+0x00000080u; // 800A44FC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800A4500
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800A4504
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800A4508
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800A450C
  c->lr=0x800A4514u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A4510
  c->f[30]=c->f[1]; // 800A4514
  c->r[27]=c->r[4]|c->r[4]; // 800A4518
  c->f[31]=c->f[2]; // 800A451C
  c->r[31]=c->r[3]|c->r[3]; // 800A4520
  c->r[26]=c->r[5]|c->r[5]; // 800A4524
  c->r[4]=0u+0x00000005u; // 800A4528
  c->lr=0x800A4530u; f_8000BF70(c); // 800A452C
  c->r[3]=c->r[31]+0x00000010u; // 800A4530
  c->lr=0x800A4538u; f_80008DD0(c); // 800A4534
  c->r[4]=0u+0x80220000u; // 800A4538
  c->r[3]=c->r[31]+0x0000004Cu; // 800A453C
  c->r[4]=c->r[4]+0xFFFFA498u; // 800A4540
  W32(c->r[31]+0x00000000u,c->r[4]); // 800A4544
  c->r[0]=c->r[4]+0x00000014u; // 800A4548
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A454C
  c->lr=0x800A4554u; f_8004F070(c); // 800A4550
  W32(c->r[31]+0x00000068u,c->r[27]); // 800A4554
  c->r[3]=R32(c->r[27]+0x00000004u); // 800A4558
  c->r[0]=c->r[3]+0x00000001u; // 800A455C
  W32(c->r[27]+0x00000004u,c->r[0]); // 800A4560
  c->r[4]=R32(c->r[31]+0x00000068u); // 800A4564
  c->r[3]=R32(c->r[4]+0x00000030u); // 800A4568
  c->r[0]=c->r[3]+0x00000001u; // 800A456C
  W32(c->r[4]+0x00000030u,c->r[0]); // 800A4570
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[30]);} // 800A4574
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[31]);} // 800A4578
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A457C
  c->lr=0x800A4584u; f_800FC0C0(c); // 800A4580
  {uint32_t ea=c->r[2]+0xFFFFA4F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4584
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4588
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A458C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800A4590
  {uint32_t ea=c->r[2]+0xFFFFA4FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4594
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 800A4598
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A459C
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A45A0
  c->f[30]=c->ps1[30]=S(c->f[2]/c->f[0]); // 800A45A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[3]); // 800A45A8
  c->f[1]=c->f[30]; // 800A45AC
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800A45B0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A45B4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800A45B8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A45BC
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800A45C0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A45C4
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A45C8
  c->lr=0x800A45D0u; f_801E20DC(c); // 800A45CC
  c->f[3]=c->ps1[3]=S(c->f[1]); // 800A45D0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A45D4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A45D8
  c->f[1]=c->f[30]; // 800A45DC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800A45E0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A45E4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800A45E8
  c->lr=0x800A45F0u; f_801E1CD0(c); // 800A45EC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A45F0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A45F4
  c->r[3]=0u+0x80210000u; // 800A45F8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A45FC
  c->r[3]=c->r[3]+0xFFFFAFB8u; // 800A4600
  c->r[30]=0u+0x00000000u; // 800A4604
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800A4608
  c->r[0]=0u+0x00000001u; // 800A460C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A4610
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800A4614
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4618
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A461C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4620
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A4624
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4628
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800A462C
  W32(c->r[31]+0x00000060u,c->r[30]); // 800A4630
  W8(c->r[31]+0x00000064u,c->r[30]); // 800A4634
  W32(c->r[31]+0x00000038u,c->r[0]); // 800A4638
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A463C
  c->lr=0x800A4644u; f_800FC0C0(c); // 800A4640
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4644
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4648
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A464C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A4650
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800A4654
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A4658
  c->lr=0x800A4660u; f_800FC0C0(c); // 800A465C
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4660
  c->r[4]=0u+0x80220000u; // 800A4664
  c->r[7]=R32(c->r[31]+0x00000020u); // 800A4668
  c->r[3]=c->r[1]+0x00000028u; // 800A466C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A4670
  {uint32_t ea=c->r[2]+0xFFFFA50Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4674
  c->r[6]=R32(c->r[31]+0x00000024u); // 800A4678
  c->r[4]=c->r[4]+0xFFFFA41Cu; // 800A467C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A4680
  c->r[5]=c->r[26]+0x00000001u; // 800A4684
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800A4688
  {uint32_t ea=c->r[31]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A468C
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 800A4690
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A4694
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800A4698
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[0]);} // 800A469C
  W32(c->r[1]+0x00000020u,c->r[6]); // 800A46A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A46A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A46A8
  c->lr=0x800A46B0u; f_801DB784(c); // 800A46AC
  c->r[27]=0u+0x00000000u; // 800A46B0
  c->r[3]=0u+0x00000118u; // 800A46B4
  c->lr=0x800A46BCu; f_800D8ED0(c); // 800A46B8
  cmps(c,0,(int32_t)c->r[3],0); // 800A46BC
  c->r[26]=c->r[3]|c->r[3]; // 800A46C0
  if (crb(c,2)) { goto L_800A4738; } // 800A46C4
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A46C8
  c->r[28]=c->r[13]+0xFFFF9F18u; // 800A46CC
  c->r[29]=c->r[1]+0x00000010u; // 800A46D0
  c->r[27]=R32(c->r[3]+0x00000118u); // 800A46D4
  c->r[3]=c->r[28]|c->r[28]; // 800A46D8
  W32(c->r[1]+0x00000010u,c->r[30]); // 800A46DC
  W32(c->r[1]+0x00000014u,c->r[30]); // 800A46E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A46E4
  c->lr=0x800A46ECu; f_801D4D44(c); // 800A46E8
  c->r[30]=c->r[3]|c->r[3]; // 800A46EC
  c->r[3]=c->r[29]|c->r[29]; // 800A46F0
  c->r[4]=c->r[30]|c->r[30]; // 800A46F4
  c->lr=0x800A46FCu; f_800081B0(c); // 800A46F8
  c->r[0]=R8(c->r[1]+0x00000008u); // 800A46FC
  c->r[3]=c->r[29]|c->r[29]; // 800A4700
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800A4704
  c->r[6]=c->r[28]|c->r[28]; // 800A4708
  c->r[7]=c->r[28]+c->r[30]; // 800A470C
  c->r[8]=c->r[1]+0x0000000Cu; // 800A4710
  c->r[4]=0u+0x00000000u; // 800A4714
  c->r[5]=0u+0x00000000u; // 800A4718
  c->lr=0x800A4720u; f_80008370(c); // 800A471C
  c->r[4]=c->r[27]|c->r[27]; // 800A4720
  c->r[3]=c->r[26]|c->r[26]; // 800A4724
  c->r[5]=c->r[29]|c->r[29]; // 800A4728
  c->r[27]=0u+0x00000001u; // 800A472C
  c->lr=0x800A4734u; f_800FE130(c); // 800A4730
  c->r[26]=c->r[3]|c->r[3]; // 800A4734
L_800A4738:;
  cmps(c,0,(int32_t)c->r[27],0); // 800A4738
  if (crb(c,2)) { goto L_800A4754; } // 800A473C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A4740
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A4744
  if (crb(c,2)) { goto L_800A4754; } // 800A4748
  c->r[3]=R32(c->r[1]+0x00000018u); // 800A474C
  c->lr=0x800A4754u; f_800D93B0(c); // 800A4750
L_800A4754:;
  {uint32_t ea=c->r[2]+0xFFFFA510u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4754
  c->r[3]=c->r[26]|c->r[26]; // 800A4758
  c->lr=0x800A4760u; f_80101610(c); // 800A475C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4760
  c->r[3]=c->r[26]|c->r[26]; // 800A4764
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4768
  c->lr=0x800A4770u; f_801017C0(c); // 800A476C
  c->r[3]=c->r[26]|c->r[26]; // 800A4770
  c->r[4]=c->r[1]+0x00000028u; // 800A4774
  c->r[5]=0u+0x00000000u; // 800A4778
  c->lr=0x800A4780u; f_80100840(c); // 800A477C
  c->r[3]=c->r[26]|c->r[26]; // 800A4780
  c->lr=0x800A4788u; f_80101780(c); // 800A4784
  W32(c->r[31]+0x0000006Cu,c->r[26]); // 800A4788
  c->r[3]=c->r[26]|c->r[26]; // 800A478C
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4790
  c->lr=0x800A4798u; f_80101920(c); // 800A4794
  c->r[3]=0u+0x0000000Cu; // 800A4798
  c->lr=0x800A47A0u; f_800D8ED0(c); // 800A479C
  cmps(c,0,(int32_t)c->r[3],0); // 800A47A0
  c->r[4]=c->r[3]|c->r[3]; // 800A47A4
  if (crb(c,2)) { goto L_800A47B8; } // 800A47A8
  c->r[4]=0u+0x00000004u; // 800A47AC
  c->lr=0x800A47B4u; f_8004F180(c); // 800A47B0
  c->r[4]=c->r[3]|c->r[3]; // 800A47B4
L_800A47B8:;
  W32(c->r[31]+0x00000048u,c->r[4]); // 800A47B8
  c->r[5]=0u+0x00000001u; // 800A47BC
  c->r[0]=0u+0x00000000u; // 800A47C0
  c->r[3]=c->r[31]|c->r[31]; // 800A47C4
  W8(c->r[4]+0x00000008u,c->r[5]); // 800A47C8
  c->r[4]=R32(c->r[31]+0x00000048u); // 800A47CC
  W8(c->r[4]+0x0000000Au,c->r[5]); // 800A47D0
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800A47D4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800A47D8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800A47DC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800A47E0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800A47E4
  c->r[11]=c->r[1]+0x00000080u; // 800A47E8
  c->lr=0x800A47F0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A47EC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800A47F0
  c->lr=c->r[0]; // 800A47F4
  c->r[1]=c->r[1]+0x000000A0u; // 800A47F8
  return; // 800A47FC
}

// fn_800A4800
void f_800A4800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4800
  c->r[0]=c->lr; // 800A4804
  cmps(c,0,(int32_t)c->r[3],0); // 800A4808
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A480C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A4810
  c->r[31]=c->r[4]|c->r[4]; // 800A4814
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A4818
  c->r[30]=c->r[3]|c->r[3]; // 800A481C
  if (crb(c,2)) { goto L_800A48D8; } // 800A4820
  c->r[4]=0u+0x80220000u; // 800A4824
  c->r[5]=R32(c->r[3]+0x00000068u); // 800A4828
  c->r[4]=c->r[4]+0xFFFFA498u; // 800A482C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A4830
  c->r[0]=c->r[4]+0x00000014u; // 800A4834
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A4838
  c->r[4]=R32(c->r[5]+0x00000030u); // 800A483C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A4840
  W32(c->r[5]+0x00000030u,c->r[0]); // 800A4844
  c->r[3]=R32(c->r[3]+0x00000068u); // 800A4848
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A484C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A4850
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A4854
  if (!crb(c,2)) { goto L_800A4878; } // 800A4858
  cmps(c,0,(int32_t)c->r[3],0); // 800A485C
  if (crb(c,2)) { goto L_800A4878; } // 800A4860
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A4864
  c->r[4]=0u+0x00000001u; // 800A4868
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A486C
  c->ctr=c->r[12]; // 800A4870
  if (true) { c->lr=0x800A4878u; dispatch(c,c->ctr); } // 800A4874
L_800A4878:;
  c->r[3]=R32(c->r[30]+0x00000048u); // 800A4878
  c->r[4]=0u+0x00000001u; // 800A487C
  c->lr=0x800A4884u; f_8004F270(c); // 800A4880
  c->r[3]=R32(c->r[30]+0x0000006Cu); // 800A4884
  cmps(c,0,(int32_t)c->r[3],0); // 800A4888
  if (crb(c,2)) { goto L_800A48A4; } // 800A488C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A4890
  c->r[4]=0u+0x00000001u; // 800A4894
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A4898
  c->ctr=c->r[12]; // 800A489C
  if (true) { c->lr=0x800A48A4u; dispatch(c,c->ctr); } // 800A48A0
L_800A48A4:;
  c->r[3]=c->r[30]+0x0000004Cu; // 800A48A4
  c->r[4]=0u+0xFFFFFFFFu; // 800A48A8
  c->lr=0x800A48B0u; f_8004F0A0(c); // 800A48AC
  c->r[3]=c->r[30]+0x00000010u; // 800A48B0
  c->r[4]=0u+0x00000000u; // 800A48B4
  c->lr=0x800A48BCu; f_80008E10(c); // 800A48B8
  c->r[3]=c->r[30]|c->r[30]; // 800A48BC
  c->r[4]=0u+0x00000000u; // 800A48C0
  c->lr=0x800A48C8u; f_8000BFD0(c); // 800A48C4
  cmps(c,0,(int32_t)c->r[31],0); // 800A48C8
  if (!crb(c,1)) { goto L_800A48D8; } // 800A48CC
  c->r[3]=c->r[30]|c->r[30]; // 800A48D0
  c->lr=0x800A48D8u; f_800D93B0(c); // 800A48D4
L_800A48D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800A48D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A48DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A48E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A48E4
  c->lr=c->r[0]; // 800A48E8
  c->r[1]=c->r[1]+0x00000010u; // 800A48EC
  return; // 800A48F0
}

// fn_800A4900
void f_800A4900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4900
  c->r[0]=c->lr; // 800A4904
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A4908
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A490C
  c->r[5]=c->r[1]+0x00000008u; // 800A4910
  c->r[6]=c->r[1]+0x00000020u; // 800A4914
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800A4918
  c->r[31]=0u+0x80210000u; // 800A491C
  c->r[31]=c->r[31]+0xFFFFAFB8u; // 800A4920
  W32(c->r[1]+0x00000048u,c->r[30]); // 800A4924
  c->r[30]=0u+0x00000000u; // 800A4928
  W32(c->r[1]+0x00000044u,c->r[29]); // 800A492C
  c->r[29]=c->r[3]|c->r[3]; // 800A4930
  c->r[3]=c->r[4]|c->r[4]; // 800A4934
  c->r[4]=c->r[1]+0x00000014u; // 800A4938
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A493C
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4940
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 800A4944
  {uint32_t ea=c->r[29]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A4948
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A494C
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 800A4950
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 800A4954
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800A4958
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800A495C
  {uint32_t ea=c->r[29]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4960
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A4964
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A4968
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A496C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A4970
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A4974
  {uint32_t ea=c->r[29]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4978
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A497C
  {uint32_t ea=c->r[29]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4980
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A4984
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4988
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A498C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A4990
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A4994
  c->ctr=c->r[12]; // 800A4998
  if (true) { c->lr=0x800A49A0u; dispatch(c,c->ctr); } // 800A499C
  cmps(c,0,(int32_t)c->r[3],0); // 800A49A0
  if (crb(c,2)) { goto L_800A4A0C; } // 800A49A4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A49A8
  c->r[0]=0u+0x00000001u; // 800A49AC
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A49B0
  c->r[30]=0u+0x00000001u; // 800A49B4
  {uint32_t ea=c->r[29]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A49B8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A49BC
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 800A49C0
  {uint32_t ea=c->r[29]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A49C4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A49C8
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 800A49CC
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A49D0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A49D4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A49D8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800A49DC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A49E0
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[2]);} // 800A49E4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A49E8
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A49EC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A49F0
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[1]);} // 800A49F4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A49F8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A49FC
  W8(c->r[29]+0x00000064u,c->r[0]); // 800A4A00
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A4A04
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 800A4A08
L_800A4A0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800A4A0C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800A4A10
  c->r[30]=R32(c->r[1]+0x00000048u); // 800A4A14
  c->r[29]=R32(c->r[1]+0x00000044u); // 800A4A18
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A4A1C
  c->lr=c->r[0]; // 800A4A20
  c->r[1]=c->r[1]+0x00000050u; // 800A4A24
  return; // 800A4A28
}

// fn_800A4A30
void f_800A4A30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4A30
  c->r[0]=c->lr; // 800A4A34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A4A38
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800A4A3C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800A4A40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A4A44
  c->r[31]=c->r[3]|c->r[3]; // 800A4A48
  c->r[4]=R32(c->r[3]+0x00000068u); // 800A4A4C
  c->r[0]=R8(c->r[4]+0x0000003Au); // 800A4A50
  cmps(c,0,(int32_t)c->r[0],0); // 800A4A54
  if (crb(c,2)) { goto L_800A4A68; } // 800A4A58
  c->r[0]=0u+0x00000002u; // 800A4A5C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A4A60
  goto L_800A4BFC; // 800A4A64
L_800A4A68:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 800A4A68
  cmps(c,0,(int32_t)c->r[0],0); // 800A4A6C
  if (crb(c,2)) { goto L_800A4A98; } // 800A4A70
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A4A74
  c->lr=0x800A4A7Cu; f_800FC0C0(c); // 800A4A78
  {uint32_t ea=c->r[2]+0xFFFFA518u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4A7C
  {uint32_t ea=c->r[2]+0xFFFFA514u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4A80
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A4A84
  {uint32_t ea=c->r[31]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4A88
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A4A8C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A4A90
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800A4A94
L_800A4A98:;
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A4A98
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4A9C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4AA0
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800A4AA4
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[0]); // 800A4AA8
  {uint32_t ea=c->r[2]+0xFFFFA4F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4AAC
  {uint32_t ea=c->r[2]+0xFFFFA4FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4AB0
  {uint32_t ea=c->r[31]+0x00000070u; WF32(ea,c->f[2]);} // 800A4AB4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4AB8
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[2]);} // 800A4ABC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4AC0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 800A4AC4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4AC8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 800A4ACC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4AD0
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800A4AD4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800A4AD8
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800A4ADC
  c->f[1]=c->f[31]; // 800A4AE0
  c->lr=0x800A4AE8u; f_801E20DC(c); // 800A4AE4
  c->f[3]=c->ps1[3]=S(c->f[1]); // 800A4AE8
  {uint32_t ea=c->r[31]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4AEC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4AF0
  c->f[1]=c->f[31]; // 800A4AF4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800A4AF8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A4AFC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800A4B00
  c->lr=0x800A4B08u; f_801E1CD0(c); // 800A4B04
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A4B08
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4B0C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4B10
  c->r[3]=R32(c->r[31]+0x00000068u); // 800A4B14
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800A4B18
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A4B1C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800A4B20
  c->r[0]=R8(c->r[3]+0x00000038u); // 800A4B24
  cmps(c,0,(int32_t)c->r[0],0); // 800A4B28
  if (crb(c,2)) { goto L_800A4B60; } // 800A4B2C
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A4B30
  c->r[4]=c->r[31]+0x00000020u; // 800A4B34
  {uint32_t ea=c->r[2]+0xFFFFA51Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4B38
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A4B3C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800A4B40
  c->ctr=c->r[12]; // 800A4B44
  if (true) { c->lr=0x800A4B4Cu; dispatch(c,c->ctr); } // 800A4B48
  cmps(c,0,(int32_t)c->r[3],0); // 800A4B4C
  if (!crb(c,2)) { goto L_800A4B60; } // 800A4B50
  c->r[0]=0u+0x00000002u; // 800A4B54
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A4B58
  goto L_800A4BFC; // 800A4B5C
L_800A4B60:;
  c->r[0]=R8(c->r[31]+0x00000064u); // 800A4B60
  cmps(c,0,(int32_t)c->r[0],0); // 800A4B64
  if (crb(c,2)) { goto L_800A4BAC; } // 800A4B68
  c->r[4]=0u+0x80210000u; // 800A4B6C
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4B70
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A4B74
  c->r[3]=c->r[31]+0x00000020u; // 800A4B78
  c->r[4]=c->r[4]+0x00000018u; // 800A4B7C
  c->r[5]=0u+0x00000001u; // 800A4B80
  c->r[6]=0u+0x00000000u; // 800A4B84
  c->r[7]=0u+0x00000001u; // 800A4B88
  c->r[8]=0u+0x00000090u; // 800A4B8C
  c->lr=0x800A4B94u; f_8004FB70(c); // 800A4B90
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A4B94
  c->r[4]=0u+0x0000002Bu; // 800A4B98
  c->lr=0x800A4BA0u; f_800A8BE0(c); // 800A4B9C
  c->r[0]=0u+0x00000002u; // 800A4BA0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A4BA4
  goto L_800A4BFC; // 800A4BA8
L_800A4BAC:;
  c->r[3]=c->r[31]+0x0000004Cu; // 800A4BAC
  c->lr=0x800A4BB4u; f_8004F0F0(c); // 800A4BB0
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800A4BB4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4BB8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4BBC
  c->lr=0x800A4BC4u; f_801017C0(c); // 800A4BC0
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800A4BC4
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4BC8
  c->lr=0x800A4BD0u; f_80101920(c); // 800A4BCC
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800A4BD0
  c->r[4]=R32(c->r[31]+0x00000058u); // 800A4BD4
  c->r[5]=R32(c->r[31]+0x0000005Cu); // 800A4BD8
  c->lr=0x800A4BE0u; f_80100330(c); // 800A4BDC
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800A4BE0
  c->lr=0x800A4BE8u; f_80103410(c); // 800A4BE4
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800A4BE8
  c->lr=0x800A4BF0u; f_801063E0(c); // 800A4BEC
  c->r[3]=R32(c->r[31]+0x00000048u); // 800A4BF0
  c->r[4]=R32(c->r[31]+0x0000006Cu); // 800A4BF4
  c->lr=0x800A4BFCu; f_8004F400(c); // 800A4BF8
L_800A4BFC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A4BFC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800A4C00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800A4C04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A4C08
  c->lr=c->r[0]; // 800A4C0C
  c->r[1]=c->r[1]+0x00000020u; // 800A4C10
  return; // 800A4C14
}

// fn_800A4C20
void f_800A4C20(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 800A4C20
  f_80107F60(c); return; // 800A4C24
}

// fn_800A4C30
void f_800A4C30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4C30
  c->r[0]=c->lr; // 800A4C34
  W32(c->r[1]+0x00000084u,c->r[0]); // 800A4C38
  c->r[11]=c->r[1]+0x00000080u; // 800A4C3C
  c->lr=0x800A4C44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A4C40
  c->r[28]=c->r[4]|c->r[4]; // 800A4C44
  c->r[31]=c->r[3]|c->r[3]; // 800A4C48
  c->r[27]=c->r[5]|c->r[5]; // 800A4C4C
  c->r[26]=c->r[6]|c->r[6]; // 800A4C50
  c->r[4]=0u+0x00000005u; // 800A4C54
  c->lr=0x800A4C5Cu; f_8000BF70(c); // 800A4C58
  c->r[3]=c->r[31]+0x00000010u; // 800A4C5C
  c->lr=0x800A4C64u; f_80008DD0(c); // 800A4C60
  c->r[4]=0u+0x80220000u; // 800A4C64
  c->r[3]=c->r[31]+0x00000040u; // 800A4C68
  c->r[4]=c->r[4]+0xFFFFA428u; // 800A4C6C
  W32(c->r[31]+0x00000000u,c->r[4]); // 800A4C70
  c->r[0]=c->r[4]+0x00000014u; // 800A4C74
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A4C78
  c->lr=0x800A4C80u; f_8004F070(c); // 800A4C7C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4C80
  c->r[30]=0u+0x00000000u; // 800A4C84
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800A4C88
  c->r[0]=0u+0x00000001u; // 800A4C8C
  {uint32_t ea=c->r[27]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4C90
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800A4C94
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4C98
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A4C9C
  {uint32_t ea=c->r[26]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4CA0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A4CA4
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4CA8
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A4CAC
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4CB0
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800A4CB4
  W32(c->r[31]+0x00000054u,c->r[30]); // 800A4CB8
  W8(c->r[31]+0x00000058u,c->r[30]); // 800A4CBC
  W32(c->r[31]+0x00000038u,c->r[0]); // 800A4CC0
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A4CC4
  c->lr=0x800A4CCCu; f_800FC0C0(c); // 800A4CC8
  {uint32_t ea=c->r[2]+0xFFFFA4B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4CCC
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4CD0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A4CD4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A4CD8
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800A4CDC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A4CE0
  c->lr=0x800A4CE8u; f_800FC0C0(c); // 800A4CE4
  {uint32_t ea=c->r[2]+0xFFFFA500u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4CE8
  c->r[4]=0u+0x80220000u; // 800A4CEC
  c->r[7]=R32(c->r[31]+0x00000020u); // 800A4CF0
  c->r[3]=c->r[1]+0x00000028u; // 800A4CF4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A4CF8
  {uint32_t ea=c->r[2]+0xFFFFA508u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4CFC
  c->r[6]=R32(c->r[31]+0x00000024u); // 800A4D00
  c->r[4]=c->r[4]+0xFFFFA41Cu; // 800A4D04
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A4D08
  c->r[5]=c->r[28]+0x00000001u; // 800A4D0C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800A4D10
  {uint32_t ea=c->r[31]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A4D14
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 800A4D18
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A4D1C
  {uint32_t ea=c->r[31]+0x00000064u; WF32(ea,c->f[1]);} // 800A4D20
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800A4D24
  W32(c->r[1]+0x00000020u,c->r[6]); // 800A4D28
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A4D2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A4D30
  c->lr=0x800A4D38u; f_801DB784(c); // 800A4D34
  c->r[27]=0u+0x00000000u; // 800A4D38
  c->r[3]=0u+0x00000118u; // 800A4D3C
  c->lr=0x800A4D44u; f_800D8ED0(c); // 800A4D40
  cmps(c,0,(int32_t)c->r[3],0); // 800A4D44
  c->r[26]=c->r[3]|c->r[3]; // 800A4D48
  if (crb(c,2)) { goto L_800A4DC0; } // 800A4D4C
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A4D50
  c->r[28]=c->r[13]+0xFFFF9F18u; // 800A4D54
  c->r[29]=c->r[1]+0x00000010u; // 800A4D58
  c->r[27]=R32(c->r[3]+0x00000118u); // 800A4D5C
  c->r[3]=c->r[28]|c->r[28]; // 800A4D60
  W32(c->r[1]+0x00000010u,c->r[30]); // 800A4D64
  W32(c->r[1]+0x00000014u,c->r[30]); // 800A4D68
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A4D6C
  c->lr=0x800A4D74u; f_801D4D44(c); // 800A4D70
  c->r[30]=c->r[3]|c->r[3]; // 800A4D74
  c->r[3]=c->r[29]|c->r[29]; // 800A4D78
  c->r[4]=c->r[30]|c->r[30]; // 800A4D7C
  c->lr=0x800A4D84u; f_800081B0(c); // 800A4D80
  c->r[0]=R8(c->r[1]+0x00000008u); // 800A4D84
  c->r[3]=c->r[29]|c->r[29]; // 800A4D88
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800A4D8C
  c->r[6]=c->r[28]|c->r[28]; // 800A4D90
  c->r[7]=c->r[28]+c->r[30]; // 800A4D94
  c->r[8]=c->r[1]+0x0000000Cu; // 800A4D98
  c->r[4]=0u+0x00000000u; // 800A4D9C
  c->r[5]=0u+0x00000000u; // 800A4DA0
  c->lr=0x800A4DA8u; f_80008370(c); // 800A4DA4
  c->r[4]=c->r[27]|c->r[27]; // 800A4DA8
  c->r[3]=c->r[26]|c->r[26]; // 800A4DAC
  c->r[5]=c->r[29]|c->r[29]; // 800A4DB0
  c->r[27]=0u+0x00000001u; // 800A4DB4
  c->lr=0x800A4DBCu; f_800FE130(c); // 800A4DB8
  c->r[26]=c->r[3]|c->r[3]; // 800A4DBC
L_800A4DC0:;
  cmps(c,0,(int32_t)c->r[27],0); // 800A4DC0
  if (crb(c,2)) { goto L_800A4DDC; } // 800A4DC4
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A4DC8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A4DCC
  if (crb(c,2)) { goto L_800A4DDC; } // 800A4DD0
  c->r[3]=R32(c->r[1]+0x00000018u); // 800A4DD4
  c->lr=0x800A4DDCu; f_800D93B0(c); // 800A4DD8
L_800A4DDC:;
  {uint32_t ea=c->r[2]+0xFFFFA510u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4DDC
  c->r[3]=c->r[26]|c->r[26]; // 800A4DE0
  c->lr=0x800A4DE8u; f_80101610(c); // 800A4DE4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4DE8
  c->r[3]=c->r[26]|c->r[26]; // 800A4DEC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A4DF0
  c->lr=0x800A4DF8u; f_801017C0(c); // 800A4DF4
  c->r[3]=c->r[26]|c->r[26]; // 800A4DF8
  c->r[4]=c->r[1]+0x00000028u; // 800A4DFC
  c->r[5]=0u+0x00000000u; // 800A4E00
  c->lr=0x800A4E08u; f_80100840(c); // 800A4E04
  c->r[3]=c->r[26]|c->r[26]; // 800A4E08
  c->lr=0x800A4E10u; f_80101780(c); // 800A4E0C
  W32(c->r[31]+0x0000005Cu,c->r[26]); // 800A4E10
  c->r[3]=c->r[26]|c->r[26]; // 800A4E14
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4E18
  c->lr=0x800A4E20u; f_80101920(c); // 800A4E1C
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A4E20
  c->lr=0x800A4E28u; f_80101780(c); // 800A4E24
  c->r[3]=0u+0x0000000Cu; // 800A4E28
  c->lr=0x800A4E30u; f_800D8ED0(c); // 800A4E2C
  cmps(c,0,(int32_t)c->r[3],0); // 800A4E30
  c->r[5]=c->r[3]|c->r[3]; // 800A4E34
  if (crb(c,2)) { goto L_800A4E48; } // 800A4E38
  c->r[4]=0u+0x00000004u; // 800A4E3C
  c->lr=0x800A4E44u; f_8004F180(c); // 800A4E40
  c->r[5]=c->r[3]|c->r[3]; // 800A4E44
L_800A4E48:;
  W32(c->r[31]+0x0000003Cu,c->r[5]); // 800A4E48
  c->r[4]=0u+0x00000001u; // 800A4E4C
  c->r[0]=0u+0x00000000u; // 800A4E50
  c->r[11]=c->r[1]+0x00000080u; // 800A4E54
  W8(c->r[5]+0x00000008u,c->r[4]); // 800A4E58
  c->r[3]=c->r[31]|c->r[31]; // 800A4E5C
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800A4E60
  c->lr=0x800A4E68u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A4E64
  c->r[0]=R32(c->r[1]+0x00000084u); // 800A4E68
  c->lr=c->r[0]; // 800A4E6C
  c->r[1]=c->r[1]+0x00000080u; // 800A4E70
  return; // 800A4E74
}

// fn_800A4E80
void f_800A4E80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4E80
  c->r[0]=c->lr; // 800A4E84
  cmps(c,0,(int32_t)c->r[3],0); // 800A4E88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A4E8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A4E90
  c->r[31]=c->r[4]|c->r[4]; // 800A4E94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A4E98
  c->r[30]=c->r[3]|c->r[3]; // 800A4E9C
  if (crb(c,2)) { goto L_800A4F18; } // 800A4EA0
  c->r[5]=0u+0x80220000u; // 800A4EA4
  c->r[4]=0u+0x00000001u; // 800A4EA8
  c->r[5]=c->r[5]+0xFFFFA428u; // 800A4EAC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A4EB0
  c->r[0]=c->r[5]+0x00000014u; // 800A4EB4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A4EB8
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 800A4EBC
  c->lr=0x800A4EC4u; f_8004F270(c); // 800A4EC0
  c->r[3]=R32(c->r[30]+0x0000005Cu); // 800A4EC4
  cmps(c,0,(int32_t)c->r[3],0); // 800A4EC8
  if (crb(c,2)) { goto L_800A4EE4; } // 800A4ECC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A4ED0
  c->r[4]=0u+0x00000001u; // 800A4ED4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A4ED8
  c->ctr=c->r[12]; // 800A4EDC
  if (true) { c->lr=0x800A4EE4u; dispatch(c,c->ctr); } // 800A4EE0
L_800A4EE4:;
  c->r[3]=c->r[30]+0x00000040u; // 800A4EE4
  c->r[4]=0u+0xFFFFFFFFu; // 800A4EE8
  c->lr=0x800A4EF0u; f_8004F0A0(c); // 800A4EEC
  c->r[3]=c->r[30]+0x00000010u; // 800A4EF0
  c->r[4]=0u+0x00000000u; // 800A4EF4
  c->lr=0x800A4EFCu; f_80008E10(c); // 800A4EF8
  c->r[3]=c->r[30]|c->r[30]; // 800A4EFC
  c->r[4]=0u+0x00000000u; // 800A4F00
  c->lr=0x800A4F08u; f_8000BFD0(c); // 800A4F04
  cmps(c,0,(int32_t)c->r[31],0); // 800A4F08
  if (!crb(c,1)) { goto L_800A4F18; } // 800A4F0C
  c->r[3]=c->r[30]|c->r[30]; // 800A4F10
  c->lr=0x800A4F18u; f_800D93B0(c); // 800A4F14
L_800A4F18:;
  c->r[3]=c->r[30]|c->r[30]; // 800A4F18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A4F1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A4F20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A4F24
  c->lr=c->r[0]; // 800A4F28
  c->r[1]=c->r[1]+0x00000010u; // 800A4F2C
  return; // 800A4F30
}

// fn_800A4F40
void f_800A4F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A4F40
  c->r[0]=c->lr; // 800A4F44
  W32(c->r[1]+0x00000064u,c->r[0]); // 800A4F48
  c->r[11]=c->r[1]+0x00000060u; // 800A4F4C
  c->lr=0x800A4F54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A4F50
  c->r[31]=c->r[3]|c->r[3]; // 800A4F54
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A4F58
  c->r[4]=c->r[31]+0x00000020u; // 800A4F5C
  {uint32_t ea=c->r[2]+0xFFFFA51Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4F60
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A4F64
  c->r[12]=R32(c->r[12]+0x00000020u); // 800A4F68
  c->ctr=c->r[12]; // 800A4F6C
  if (true) { c->lr=0x800A4F74u; dispatch(c,c->ctr); } // 800A4F70
  cmps(c,0,(int32_t)c->r[3],0); // 800A4F74
  if (!crb(c,2)) { goto L_800A4F88; } // 800A4F78
  c->r[0]=0u+0x00000002u; // 800A4F7C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A4F80
  goto L_800A51E4; // 800A4F84
L_800A4F88:;
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800A4F88
  c->r[4]=c->r[1]+0x00000018u; // 800A4F8C
  c->r[5]=c->r[1]+0x0000001Cu; // 800A4F90
  c->lr=0x800A4F98u; f_8004F390(c); // 800A4F94
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800A4F98
  cmps(c,0,(int32_t)c->r[4],0); // 800A4F9C
  if (crb(c,2)) { goto L_800A50FC; } // 800A4FA0
  c->r[0]=R32(c->r[31]+0x00000038u); // 800A4FA4
  c->r[3]=c->r[31]+0x00000040u; // 800A4FA8
  c->r[0]=c->r[0]-c->r[4]; // 800A4FAC
  W32(c->r[31]+0x00000038u,c->r[0]); // 800A4FB0
  c->lr=0x800A4FB8u; f_8004F0E0(c); // 800A4FB4
  c->r[0]=R32(c->r[31]+0x00000038u); // 800A4FB8
  cmps(c,0,(int32_t)c->r[0],0); // 800A4FBC
  if (crb(c,1)) { goto L_800A50FC; } // 800A4FC0
  c->r[5]=R32(c->r[31]+0x00000020u); // 800A4FC4
  c->r[4]=0u+0x80210000u; // 800A4FC8
  c->r[0]=R32(c->r[31]+0x00000024u); // 800A4FCC
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A4FD0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800A4FD4
  c->r[3]=c->r[1]+0x00000038u; // 800A4FD8
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A4FDC
  c->r[4]=c->r[4]+0x00000018u; // 800A4FE0
  W32(c->r[1]+0x00000038u,c->r[5]); // 800A4FE4
  c->r[5]=0u+0x00000002u; // 800A4FE8
  c->r[6]=0u+0x00000000u; // 800A4FEC
  c->r[7]=0u+0x00000001u; // 800A4FF0
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A4FF4
  c->r[8]=0u+0x00000090u; // 800A4FF8
  W32(c->r[1]+0x00000040u,c->r[0]); // 800A4FFC
  c->lr=0x800A5004u; f_8004FB70(c); // 800A5000
  c->r[30]=0u+0x00000000u; // 800A5004
  c->r[29]=c->r[13]+0xFFFF9F1Cu; // 800A5008
  W32(c->r[1]+0x0000002Cu,c->r[30]); // 800A500C
  c->r[3]=c->r[29]|c->r[29]; // 800A5010
  c->r[28]=c->r[1]+0x0000002Cu; // 800A5014
  W32(c->r[1]+0x00000030u,c->r[30]); // 800A5018
  W32(c->r[1]+0x00000034u,c->r[30]); // 800A501C
  c->lr=0x800A5024u; f_801D4D44(c); // 800A5020
  c->r[27]=c->r[3]|c->r[3]; // 800A5024
  c->r[3]=c->r[28]|c->r[28]; // 800A5028
  c->r[4]=c->r[27]|c->r[27]; // 800A502C
  c->lr=0x800A5034u; f_800081B0(c); // 800A5030
  c->r[0]=R8(c->r[1]+0x00000014u); // 800A5034
  c->r[3]=c->r[28]|c->r[28]; // 800A5038
  W8(c->r[1]+0x00000010u,c->r[0]); // 800A503C
  c->r[6]=c->r[29]|c->r[29]; // 800A5040
  c->r[7]=c->r[29]+c->r[27]; // 800A5044
  c->r[8]=c->r[1]+0x00000010u; // 800A5048
  c->r[4]=0u+0x00000000u; // 800A504C
  c->r[5]=0u+0x00000000u; // 800A5050
  c->lr=0x800A5058u; f_80008370(c); // 800A5054
  c->r[29]=c->r[13]+0xFFFF9F24u; // 800A5058
  W32(c->r[1]+0x00000020u,c->r[30]); // 800A505C
  c->r[27]=c->r[1]+0x00000020u; // 800A5060
  W32(c->r[1]+0x00000024u,c->r[30]); // 800A5064
  c->r[3]=c->r[29]|c->r[29]; // 800A5068
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A506C
  c->lr=0x800A5074u; f_801D4D44(c); // 800A5070
  c->r[30]=c->r[3]|c->r[3]; // 800A5074
  c->r[3]=c->r[27]|c->r[27]; // 800A5078
  c->r[4]=c->r[30]|c->r[30]; // 800A507C
  c->lr=0x800A5084u; f_800081B0(c); // 800A5080
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800A5084
  c->r[3]=c->r[27]|c->r[27]; // 800A5088
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A508C
  c->r[6]=c->r[29]|c->r[29]; // 800A5090
  c->r[7]=c->r[29]+c->r[30]; // 800A5094
  c->r[8]=c->r[1]+0x00000008u; // 800A5098
  c->r[4]=0u+0x00000000u; // 800A509C
  c->r[5]=0u+0x00000000u; // 800A50A0
  c->lr=0x800A50A8u; f_80008370(c); // 800A50A4
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A50A8
  c->r[5]=c->r[28]|c->r[28]; // 800A50AC
  c->r[4]=R32(c->r[1]+0x00000018u); // 800A50B0
  c->r[6]=c->r[27]|c->r[27]; // 800A50B4
  c->lr=0x800A50BCu; f_80012C00(c); // 800A50B8
  c->r[0]=R32(c->r[1]+0x00000020u); // 800A50BC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A50C0
  if (crb(c,2)) { goto L_800A50D0; } // 800A50C4
  c->r[3]=R32(c->r[1]+0x00000028u); // 800A50C8
  c->lr=0x800A50D0u; f_800D93B0(c); // 800A50CC
L_800A50D0:;
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800A50D0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A50D4
  if (crb(c,2)) { goto L_800A50E4; } // 800A50D8
  c->r[3]=R32(c->r[1]+0x00000034u); // 800A50DC
  c->lr=0x800A50E4u; f_800D93B0(c); // 800A50E0
L_800A50E4:;
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A50E4
  c->r[4]=0u+0x0000002Bu; // 800A50E8
  c->lr=0x800A50F0u; f_800A8BE0(c); // 800A50EC
  c->r[0]=0u+0x00000002u; // 800A50F0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A50F4
  goto L_800A51E4; // 800A50F8
L_800A50FC:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A50FC
  {uint32_t ea=c->r[2]+0xFFFFA520u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5100
  c->r[0]=R8(c->r[31]+0x00000058u); // 800A5104
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800A5108
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A510C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A5110
  cmps(c,0,(int32_t)c->r[0],0); // 800A5114
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5118
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[4]); // 800A511C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[1]); // 800A5120
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5124
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5128
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[4]);} // 800A512C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A5130
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 800A5134
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 800A5138
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A513C
  if (crb(c,2)) { goto L_800A5184; } // 800A5140
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A5144
  c->r[4]=0u+0x0000002Bu; // 800A5148
  c->lr=0x800A5150u; f_800A8BE0(c); // 800A514C
  c->r[4]=0u+0x80210000u; // 800A5150
  {uint32_t ea=c->r[2]+0xFFFFA4D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5154
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A5158
  c->r[3]=c->r[31]+0x00000020u; // 800A515C
  c->r[4]=c->r[4]+0x00000018u; // 800A5160
  c->r[5]=0u+0x00000002u; // 800A5164
  c->r[6]=0u+0x00000001u; // 800A5168
  c->r[7]=0u+0x00000001u; // 800A516C
  c->r[8]=0u+0x00000090u; // 800A5170
  c->lr=0x800A5178u; f_8004FB70(c); // 800A5174
  c->r[0]=0u+0x00000002u; // 800A5178
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A517C
  goto L_800A51E4; // 800A5180
L_800A5184:;
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5184
  c->r[3]=c->r[31]+0x00000040u; // 800A5188
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A518C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A5190
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800A5194
  c->lr=0x800A519Cu; f_8004F0F0(c); // 800A5198
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A519C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A51A0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A51A4
  c->lr=0x800A51ACu; f_801017C0(c); // 800A51A8
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A51AC
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A51B0
  c->lr=0x800A51B8u; f_80101920(c); // 800A51B4
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A51B8
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 800A51BC
  c->r[5]=R32(c->r[31]+0x00000050u); // 800A51C0
  c->lr=0x800A51C8u; f_80100330(c); // 800A51C4
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A51C8
  c->lr=0x800A51D0u; f_80103410(c); // 800A51CC
  c->r[3]=R32(c->r[31]+0x0000005Cu); // 800A51D0
  c->lr=0x800A51D8u; f_801063E0(c); // 800A51D4
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800A51D8
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 800A51DC
  c->lr=0x800A51E4u; f_8004F400(c); // 800A51E0
L_800A51E4:;
  c->r[11]=c->r[1]+0x00000060u; // 800A51E4
  c->lr=0x800A51ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A51E8
  c->r[0]=R32(c->r[1]+0x00000064u); // 800A51EC
  c->lr=c->r[0]; // 800A51F0
  c->r[1]=c->r[1]+0x00000060u; // 800A51F4
  return; // 800A51F8
}

// fn_800A5200
void f_800A5200(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 800A5200
  f_80107F60(c); return; // 800A5204
}

// fn_800A5210
void f_800A5210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5210
  c->r[0]=c->lr; // 800A5214
  {uint32_t ea=c->r[2]+0xFFFFA4C4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5218
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A521C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800A5220
  c->r[31]=0u+0x80210000u; // 800A5224
  c->r[31]=c->r[31]+0xFFFFAFB8u; // 800A5228
  W32(c->r[1]+0x00000048u,c->r[30]); // 800A522C
  c->r[30]=0u+0x00000000u; // 800A5230
  W32(c->r[1]+0x00000044u,c->r[29]); // 800A5234
  c->r[29]=c->r[3]|c->r[3]; // 800A5238
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A523C
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5240
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[1]); // 800A5244
  {uint32_t ea=c->r[3]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A5248
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A524C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[0]); // 800A5250
  {uint32_t ea=c->r[2]+0xFFFFA4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5254
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 800A5258
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 800A525C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 800A5260
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5264
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 800A5268
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 800A526C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5270
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A5274
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 800A5278
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A527C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800A5280
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5284
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800A5288
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A528C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800A5290
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5294
  fcmp(c,0,c->f[1],c->f[0]); // 800A5298
  if (!crb(c,1)) { goto L_800A532C; } // 800A529C
  c->r[3]=c->r[4]|c->r[4]; // 800A52A0
  c->r[4]=c->r[1]+0x00000014u; // 800A52A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A52A8
  c->r[5]=c->r[1]+0x00000008u; // 800A52AC
  c->r[6]=c->r[1]+0x00000020u; // 800A52B0
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A52B4
  c->ctr=c->r[12]; // 800A52B8
  if (true) { c->lr=0x800A52C0u; dispatch(c,c->ctr); } // 800A52BC
  cmps(c,0,(int32_t)c->r[3],0); // 800A52C0
  if (crb(c,2)) { goto L_800A532C; } // 800A52C4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A52C8
  c->r[0]=0u+0x00000001u; // 800A52CC
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A52D0
  c->r[30]=0u+0x00000001u; // 800A52D4
  {uint32_t ea=c->r[29]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A52D8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A52DC
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 800A52E0
  {uint32_t ea=c->r[29]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A52E4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A52E8
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 800A52EC
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A52F0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A52F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A52F8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800A52FC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A5300
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[2]);} // 800A5304
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5308
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A530C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A5310
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[1]);} // 800A5314
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5318
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A531C
  W8(c->r[29]+0x00000058u,c->r[0]); // 800A5320
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A5324
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 800A5328
L_800A532C:;
  c->r[3]=c->r[30]|c->r[30]; // 800A532C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800A5330
  c->r[30]=R32(c->r[1]+0x00000048u); // 800A5334
  c->r[29]=R32(c->r[1]+0x00000044u); // 800A5338
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A533C
  c->lr=c->r[0]; // 800A5340
  c->r[1]=c->r[1]+0x00000050u; // 800A5344
  return; // 800A5348
}

// fn_800A5350
void f_800A5350(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800A5350
  W8(c->r[3]+0x00000058u,c->r[0]); // 800A5354
  return; // 800A5358
}

// fn_800A5360
void f_800A5360(Ctx* __restrict c) {
  return; // 800A5360
}

// fn_800A5370
void f_800A5370(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800A5370
  W8(c->r[3]+0x00000064u,c->r[0]); // 800A5374
  return; // 800A5378
}

// fn_800A5380
void f_800A5380(Ctx* __restrict c) {
  return; // 800A5380
}

// fn_800A5390
void f_800A5390(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A5390
  f_800A43C0(c); return; // 800A5394
}

// fn_800A53A0
void f_800A53A0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A53A0
  f_800A43B0(c); return; // 800A53A4
}

// fn_800A53B0
void f_800A53B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A53B0
  f_800A43A0(c); return; // 800A53B4
}

// fn_800A53C0
void f_800A53C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A53C0
  f_800A3970(c); return; // 800A53C4
}

// fn_800A53D0
void f_800A53D0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A53D0
  f_800A4900(c); return; // 800A53D4
}

// fn_800A53E0
void f_800A53E0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A53E0
  f_800A5380(c); return; // 800A53E4
}

// fn_800A53F0
void f_800A53F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A53F0
  f_800A5370(c); return; // 800A53F4
}

// fn_800A5400
void f_800A5400(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A5400
  f_800A4800(c); return; // 800A5404
}

// fn_800A5410
void f_800A5410(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A5410
  f_800A5210(c); return; // 800A5414
}

// fn_800A5420
void f_800A5420(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A5420
  f_800A5360(c); return; // 800A5424
}

// fn_800A5430
void f_800A5430(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A5430
  f_800A5350(c); return; // 800A5434
}

// fn_800A5440
void f_800A5440(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A5440
  f_800A4E80(c); return; // 800A5444
}

// fn_800A5450
void f_800A5450(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5450
  c->r[0]=c->lr; // 800A5454
  W32(c->r[1]+0x00000074u,c->r[0]); // 800A5458
  c->r[11]=c->r[1]+0x00000070u; // 800A545C
  c->lr=0x800A5464u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A5460
  c->r[26]=c->r[4]|c->r[4]; // 800A5464
  c->r[27]=c->r[3]|c->r[3]; // 800A5468
  c->r[28]=c->r[5]|c->r[5]; // 800A546C
  c->r[29]=c->r[6]|c->r[6]; // 800A5470
  c->r[4]=0u+0x00000005u; // 800A5474
  c->lr=0x800A547Cu; f_8000BF70(c); // 800A5478
  c->r[4]=0u+0x80220000u; // 800A547C
  W32(c->r[27]+0x00000048u,c->r[26]); // 800A5480
  c->r[4]=c->r[4]+0xFFFFA648u; // 800A5484
  c->r[3]=0u+0x0000003Cu; // 800A5488
  W32(c->r[27]+0x00000000u,c->r[4]); // 800A548C
  c->r[4]=R32(c->r[26]+0x00000044u); // 800A5490
  c->r[0]=c->r[4]+0x00000001u; // 800A5494
  W32(c->r[26]+0x00000044u,c->r[0]); // 800A5498
  c->r[5]=R32(c->r[27]+0x00000048u); // 800A549C
  c->r[4]=R32(c->r[5]+0x00000004u); // 800A54A0
  c->r[0]=c->r[4]+0x00000001u; // 800A54A4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800A54A8
  c->lr=0x800A54B0u; f_800D8ED0(c); // 800A54AC
  cmps(c,0,(int32_t)c->r[3],0); // 800A54B0
  c->r[31]=c->r[3]|c->r[3]; // 800A54B4
  if (crb(c,2)) { goto L_800A5520; } // 800A54B8
  c->lr=0x800A54C0u; f_80008920(c); // 800A54BC
  c->r[3]=0u+0x80220000u; // 800A54C0
  c->r[0]=0u+0x00000000u; // 800A54C4
  c->r[3]=c->r[3]+0xFFFFA5B4u; // 800A54C8
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A54CC
  c->r[3]=c->r[31]+0x00000030u; // 800A54D0
  c->r[4]=0u+0x00000000u; // 800A54D4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A54D8
  c->r[5]=0u+0x0000000Cu; // 800A54DC
  W32(c->r[31]+0x00000014u,c->r[0]); // 800A54E0
  W32(c->r[31]+0x00000018u,c->r[0]); // 800A54E4
  W32(c->r[31]+0x0000001Cu,c->r[27]); // 800A54E8
  c->r[0]=R32(c->r[27]+0x00000010u); // 800A54EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A54F0
  c->r[6]=R32(c->r[27]+0x00000014u); // 800A54F4
  c->r[0]=R32(c->r[27]+0x00000018u); // 800A54F8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800A54FC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5500
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800A5504
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5508
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A550C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 800A5510
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5514
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A5518
  c->lr=0x800A5520u; f_800046B4(c); // 800A551C
L_800A5520:;
  W32(c->r[27]+0x00000044u,c->r[31]); // 800A5520
  c->r[7]=0u+0x00000000u; // 800A5524
  {uint32_t ea=c->r[2]+0xFFFFA528u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A5528
  c->r[3]=R32(c->r[31]+0x00000014u); // 800A552C
  c->r[4]=R32(c->r[31]+0x00000018u); // 800A5530
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5534
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5538
  cmpu(c,0,c->r[3],c->r[4]); // 800A553C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5540
  W32(c->r[1]+0x00000038u,c->r[7]); // 800A5544
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[3]);} // 800A5548
  W8(c->r[1]+0x0000004Cu,c->r[7]); // 800A554C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A5550
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800A5554
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800A5558
  if (!crb(c,0)) { goto L_800A559C; } // 800A555C
  c->r[3]=c->r[3]+0x00000001u; // 800A5560
  W32(c->r[31]+0x00000014u,c->r[3]); // 800A5564
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A5568
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 800A556C
  c->r[6]=R32(c->r[31]+0x00000010u); // 800A5570
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800A5574
  c->r[3]=R32(c->r[1]+0x00000040u); // 800A5578
  {uint32_t ea=c->r[5]+c->r[6]; W32(ea,c->r[7]); c->r[5]=ea;} // 800A557C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A5580
  W32(c->r[5]+0x00000004u,c->r[4]); // 800A5584
  W32(c->r[5]+0x00000008u,c->r[3]); // 800A5588
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800A558C
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 800A5590
  W8(c->r[5]+0x00000014u,c->r[7]); // 800A5594
  goto L_800A5878; // 800A5598
L_800A559C:;
  c->r[3]=0u+0x0AAB0000u; // 800A559C
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 800A55A0
  c->r[0]=c->r[0]-c->r[4]; // 800A55A4
  cmpu(c,0,c->r[0],0x00000001u); // 800A55A8
  if (!crb(c,0)) { goto L_800A55D0; } // 800A55AC
  c->r[3]=0u+0x80250000u; // 800A55B0
  c->r[4]=0u+0x80220000u; // 800A55B4
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A55B8
  c->r[4]=c->r[4]+0xFFFFA5A0u; // 800A55BC
  c->r[3]=c->r[3]+0x000000A0u; // 800A55C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A55C4
  c->lr=0x800A55CCu; f_801DB440(c); // 800A55C8
  c->lr=0x800A55D0u; f_801DE64C(c); // 800A55CC
L_800A55D0:;
  c->r[5]=0u+0x00000000u; // 800A55D0
  c->r[4]=c->r[31]+0x00000018u; // 800A55D4
  c->r[3]=0u+0x0AAB0000u; // 800A55D8
  W32(c->r[1]+0x00000020u,c->r[5]); // 800A55DC
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 800A55E0
  W32(c->r[1]+0x00000024u,c->r[5]); // 800A55E4
  W32(c->r[1]+0x00000028u,c->r[5]); // 800A55E8
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800A55EC
  W32(c->r[1]+0x00000030u,c->r[5]); // 800A55F0
  c->r[3]=R32(c->r[31]+0x00000014u); // 800A55F4
  c->r[4]=R32(c->r[31]+0x00000018u); // 800A55F8
  c->r[3]=c->r[3]+0x00000001u; // 800A55FC
  c->r[3]=c->r[3]-c->r[4]; // 800A5600
  W32(c->r[1]+0x00000010u,c->r[3]); // 800A5604
  c->r[30]=R32(c->r[31]+0x00000018u); // 800A5608
  c->r[0]=c->r[0]-c->r[30]; // 800A560C
  cmpu(c,0,c->r[3],c->r[0]); // 800A5610
  if (!crb(c,1)) { goto L_800A5638; } // 800A5614
  c->r[3]=0u+0x80250000u; // 800A5618
  c->r[4]=0u+0x80220000u; // 800A561C
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A5620
  c->r[4]=c->r[4]+0xFFFFA5A0u; // 800A5624
  c->r[3]=c->r[3]+0x000000A0u; // 800A5628
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A562C
  c->lr=0x800A5634u; f_801DB440(c); // 800A5630
  c->lr=0x800A5638u; f_801DE64C(c); // 800A5634
L_800A5638:;
  c->r[3]=0u+0x038E0000u; // 800A5638
  c->r[0]=c->r[3]+0x000038E3u; // 800A563C
  cmpu(c,0,c->r[30],c->r[0]); // 800A5640
  if (!crb(c,0)) { goto L_800A5688; } // 800A5644
  c->r[5]=c->r[30]+0x00000001u; // 800A5648
  c->r[3]=0u+0xCCCD0000u; // 800A564C
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800A5650
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A5654
  c->r[4]=c->r[4]-c->r[5]; // 800A5658
  c->r[3]=c->r[3]+0xFFFFCCCDu; // 800A565C
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 800A5660
  c->r[3]=c->r[1]+0x00000008u; // 800A5664
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 800A5668
  W32(c->r[1]+0x00000008u,c->r[4]); // 800A566C
  cmpu(c,0,c->r[4],c->r[0]); // 800A5670
  if (!crb(c,0)) { goto L_800A567C; } // 800A5674
  c->r[3]=c->r[1]+0x00000010u; // 800A5678
L_800A567C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A567C
  c->r[30]=c->r[30]+c->r[0]; // 800A5680
  goto L_800A56CC; // 800A5684
L_800A5688:;
  c->r[3]=0u+0x071C0000u; // 800A5688
  c->r[0]=c->r[3]+0x000071C6u; // 800A568C
  cmpu(c,0,c->r[30],c->r[0]); // 800A5690
  if (!crb(c,0)) { goto L_800A56C4; } // 800A5694
  c->r[3]=c->r[30]+0x00000001u; // 800A5698
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A569C
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800A56A0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800A56A4
  cmpu(c,0,c->r[3],c->r[0]); // 800A56A8
  c->r[3]=c->r[1]+0x0000000Cu; // 800A56AC
  if (!crb(c,0)) { goto L_800A56B8; } // 800A56B0
  c->r[3]=c->r[1]+0x00000010u; // 800A56B4
L_800A56B8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A56B8
  c->r[30]=c->r[30]+c->r[0]; // 800A56BC
  goto L_800A56CC; // 800A56C0
L_800A56C4:;
  c->r[3]=0u+0x0AAB0000u; // 800A56C4
  c->r[30]=c->r[3]+0xFFFFAAAAu; // 800A56C8
L_800A56CC:;
  c->r[3]=0u+0x0AAB0000u; // 800A56CC
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 800A56D0
  cmpu(c,0,c->r[30],c->r[0]); // 800A56D4
  if (!crb(c,1)) { goto L_800A56FC; } // 800A56D8
  c->r[3]=0u+0x80250000u; // 800A56DC
  c->r[4]=0u+0x80220000u; // 800A56E0
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A56E4
  c->r[4]=c->r[4]+0xFFFFA5A0u; // 800A56E8
  c->r[3]=c->r[3]+0x000000A0u; // 800A56EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A56F0
  c->lr=0x800A56F8u; f_801DB440(c); // 800A56F4
  c->lr=0x800A56FCu; f_801DE64C(c); // 800A56F8
L_800A56FC:;
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 800A56FC
  c->lr=0x800A5704u; f_800D8ED0(c); // 800A5700
  cmps(c,0,(int32_t)c->r[3],0); // 800A5704
  c->r[26]=c->r[3]|c->r[3]; // 800A5708
  if (!crb(c,2)) { goto L_800A5730; } // 800A570C
  c->r[3]=0u+0x80250000u; // 800A5710
  c->r[4]=0u+0x80220000u; // 800A5714
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A5718
  c->r[3]=c->r[3]+0x000000A0u; // 800A571C
  c->r[4]=c->r[4]+0xFFFFA684u; // 800A5720
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A5724
  c->lr=0x800A572Cu; f_801DB440(c); // 800A5728
  c->lr=0x800A5730u; f_801DE64C(c); // 800A572C
L_800A5730:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 800A5730
  c->r[0]=0u+0x00000018u; // 800A5734
  W32(c->r[1]+0x00000020u,c->r[26]); // 800A5738
  c->r[8]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 800A573C
  c->r[7]=R32(c->r[1]+0x00000038u); // 800A5740
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A5744
  c->r[6]=R32(c->r[1]+0x0000003Cu); // 800A5748
  c->r[3]=R32(c->r[31]+0x00000014u); // 800A574C
  W32(c->r[1]+0x00000030u,c->r[3]); // 800A5750
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 800A5754
  c->r[5]=R32(c->r[1]+0x00000040u); // 800A5758
  c->r[4]=R32(c->r[1]+0x00000044u); // 800A575C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5760
  c->r[3]=c->r[26]+c->r[3]; // 800A5764
  c->r[8]=c->r[8]+c->r[3]; // 800A5768
  c->r[3]=R8(c->r[1]+0x0000004Cu); // 800A576C
  W32(c->r[8]+0x00000000u,c->r[7]); // 800A5770
  W32(c->r[8]+0x00000004u,c->r[6]); // 800A5774
  W32(c->r[8]+0x00000008u,c->r[5]); // 800A5778
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 800A577C
  {uint32_t ea=c->r[8]+0x00000010u; WF32(ea,c->f[0]);} // 800A5780
  W8(c->r[8]+0x00000014u,c->r[3]); // 800A5784
  c->r[4]=R32(c->r[1]+0x00000024u); // 800A5788
  c->r[3]=R32(c->r[1]+0x00000030u); // 800A578C
  c->r[4]=c->r[4]+0x00000001u; // 800A5790
  W32(c->r[1]+0x00000024u,c->r[4]); // 800A5794
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 800A5798
  c->r[4]=R32(c->r[1]+0x00000020u); // 800A579C
  c->r[5]=R32(c->r[31]+0x00000014u); // 800A57A0
  c->r[7]=R32(c->r[31]+0x00000010u); // 800A57A4
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 800A57A8
  c->r[6]=c->r[4]+c->r[3]; // 800A57AC
  c->r[5]=c->r[7]+c->r[5]; // 800A57B0
  c->r[3]=c->r[5]+0x00000017u; // 800A57B4
  c->r[3]=c->r[3]-c->r[7]; // 800A57B8
  c->r[3]=divwu(c->r[3],c->r[0]); // 800A57BC
  c->ctr=c->r[3]; // 800A57C0
  cmpu(c,0,c->r[5],c->r[7]); // 800A57C4
  if (!crb(c,1)) { goto L_800A5828; } // 800A57C8
  c->r[0]=c->r[0]|0x00000000u; // 800A57CC
L_800A57D0:;
  c->r[6]=addc(c,c->r[6],0xFFFFFFE8u,0); cr0(c,c->r[6]); // 800A57D0
  c->r[5]=c->r[5]+0xFFFFFFE8u; // 800A57D4
  if (crb(c,2)) { goto L_800A580C; } // 800A57D8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800A57DC
  W32(c->r[6]+0x00000000u,c->r[0]); // 800A57E0
  c->r[0]=R32(c->r[5]+0x00000008u); // 800A57E4
  c->r[3]=R32(c->r[5]+0x00000004u); // 800A57E8
  W32(c->r[6]+0x00000004u,c->r[3]); // 800A57EC
  W32(c->r[6]+0x00000008u,c->r[0]); // 800A57F0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800A57F4
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800A57F8
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A57FC
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 800A5800
  c->r[0]=R8(c->r[5]+0x00000014u); // 800A5804
  W8(c->r[6]+0x00000014u,c->r[0]); // 800A5808
L_800A580C:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 800A580C
  c->r[3]=R32(c->r[1]+0x00000024u); // 800A5810
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A5814
  W32(c->r[1]+0x00000030u,c->r[0]); // 800A5818
  c->r[0]=c->r[3]+0x00000001u; // 800A581C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A5820
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A57D0; } // 800A5824
L_800A5828:;
  c->r[4]=0u+0x00000000u; // 800A5828
  W32(c->r[31]+0x00000014u,c->r[4]); // 800A582C
  c->r[0]=addc(c,c->r[1],0x00000020u,0); cr0(c,c->r[0]); // 800A5830
  c->r[3]=R32(c->r[31]+0x00000018u); // 800A5834
  c->r[0]=R32(c->r[1]+0x00000028u); // 800A5838
  W32(c->r[31]+0x00000018u,c->r[0]); // 800A583C
  W32(c->r[1]+0x00000028u,c->r[3]); // 800A5840
  c->r[0]=R32(c->r[1]+0x00000020u); // 800A5844
  c->r[3]=R32(c->r[31]+0x00000010u); // 800A5848
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A584C
  W32(c->r[1]+0x00000020u,c->r[3]); // 800A5850
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A5854
  W32(c->r[31]+0x00000014u,c->r[0]); // 800A5858
  W32(c->r[1]+0x00000024u,c->r[4]); // 800A585C
  if (crb(c,2)) { goto L_800A5878; } // 800A5860
  c->r[3]=R32(c->r[1]+0x00000020u); // 800A5864
  cmps(c,0,(int32_t)c->r[3],0); // 800A5868
  if (crb(c,2)) { goto L_800A5878; } // 800A586C
  W32(c->r[1]+0x00000024u,c->r[4]); // 800A5870
  c->lr=0x800A5878u; f_800D93B0(c); // 800A5874
L_800A5878:;
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5878
  c->r[0]=0u+0x00000000u; // 800A587C
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[0]);} // 800A5880
  {uint32_t ea=c->r[28]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5884
  {uint32_t ea=c->r[27]+0x00000014u; WF32(ea,c->f[0]);} // 800A5888
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A588C
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[0]);} // 800A5890
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5894
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A5898
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A589C
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[0]);} // 800A58A0
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A58A4
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[0]);} // 800A58A8
  W32(c->r[27]+0x00000028u,c->r[0]); // 800A58AC
  W32(c->r[27]+0x00000034u,c->r[0]); // 800A58B0
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A58B4
  c->lr=0x800A58BCu; f_800FC0C0(c); // 800A58B8
  {uint32_t ea=c->r[2]+0xFFFFA530u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A58BC
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A58C0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A58C4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A58C8
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A58CC
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A58D0
  c->lr=0x800A58D8u; f_800FC0C0(c); // 800A58D4
  {uint32_t ea=c->r[2]+0xFFFFA538u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A58D8
  c->r[11]=c->r[1]+0x00000070u; // 800A58DC
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A58E0
  c->r[3]=c->r[27]|c->r[27]; // 800A58E4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800A58E8
  {uint32_t ea=c->r[2]+0xFFFFA534u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A58EC
  {uint32_t ea=c->r[27]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A58F0
  {uint32_t ea=c->r[27]+0x00000038u; WF32(ea,c->f[0]);} // 800A58F4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A58F8
  {uint32_t ea=c->r[27]+0x00000040u; WF32(ea,c->f[0]);} // 800A58FC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 800A5900
  {uint32_t ea=c->r[27]+0x00000030u; WF32(ea,c->f[2]);} // 800A5904
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A5908
  c->lr=0x800A5910u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A590C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800A5910
  c->lr=c->r[0]; // 800A5914
  c->r[1]=c->r[1]+0x00000070u; // 800A5918
  return; // 800A591C
}

// fn_800A5920
void f_800A5920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5920
  c->r[0]=c->lr; // 800A5924
  cmps(c,0,(int32_t)c->r[3],0); // 800A5928
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A592C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A5930
  c->r[31]=c->r[4]|c->r[4]; // 800A5934
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A5938
  c->r[30]=c->r[3]|c->r[3]; // 800A593C
  if (crb(c,2)) { goto L_800A59DC; } // 800A5940
  c->r[4]=0u+0x80220000u; // 800A5944
  c->r[5]=R32(c->r[3]+0x00000048u); // 800A5948
  c->r[4]=c->r[4]+0xFFFFA648u; // 800A594C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A5950
  c->r[4]=R32(c->r[5]+0x00000044u); // 800A5954
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A5958
  W32(c->r[5]+0x00000044u,c->r[0]); // 800A595C
  c->r[3]=R32(c->r[3]+0x00000044u); // 800A5960
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A5964
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A5968
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A596C
  if (!crb(c,2)) { goto L_800A5990; } // 800A5970
  cmps(c,0,(int32_t)c->r[3],0); // 800A5974
  if (crb(c,2)) { goto L_800A5990; } // 800A5978
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A597C
  c->r[4]=0u+0x00000001u; // 800A5980
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A5984
  c->ctr=c->r[12]; // 800A5988
  if (true) { c->lr=0x800A5990u; dispatch(c,c->ctr); } // 800A598C
L_800A5990:;
  c->r[3]=R32(c->r[30]+0x00000048u); // 800A5990
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A5994
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A5998
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A599C
  if (!crb(c,2)) { goto L_800A59C0; } // 800A59A0
  cmps(c,0,(int32_t)c->r[3],0); // 800A59A4
  if (crb(c,2)) { goto L_800A59C0; } // 800A59A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A59AC
  c->r[4]=0u+0x00000001u; // 800A59B0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A59B4
  c->ctr=c->r[12]; // 800A59B8
  if (true) { c->lr=0x800A59C0u; dispatch(c,c->ctr); } // 800A59BC
L_800A59C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800A59C0
  c->r[4]=0u+0x00000000u; // 800A59C4
  c->lr=0x800A59CCu; f_8000BFD0(c); // 800A59C8
  cmps(c,0,(int32_t)c->r[31],0); // 800A59CC
  if (!crb(c,1)) { goto L_800A59DC; } // 800A59D0
  c->r[3]=c->r[30]|c->r[30]; // 800A59D4
  c->lr=0x800A59DCu; f_800D93B0(c); // 800A59D8
L_800A59DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800A59DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A59E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A59E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A59E8
  c->lr=c->r[0]; // 800A59EC
  c->r[1]=c->r[1]+0x00000010u; // 800A59F0
  return; // 800A59F4
}

// fn_800A5A00
void f_800A5A00(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000044u); // 800A5A00
  W32(c->r[5]+0x00000030u,c->r[4]); // 800A5A04
  c->r[3]=R32(c->r[3]+0x00000044u); // 800A5A08
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 800A5A0C
  return; // 800A5A10
}

// fn_800A5A20
void f_800A5A20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A5A20
  c->r[0]=c->lr; // 800A5A24
  {uint32_t ea=c->r[2]+0xFFFFA53Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5A28
  W32(c->r[1]+0x00000074u,c->r[0]); // 800A5A2C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800A5A30
  W32(c->r[1]+0x00000068u,c->r[30]); // 800A5A34
  W32(c->r[1]+0x00000064u,c->r[29]); // 800A5A38
  W32(c->r[1]+0x00000060u,c->r[28]); // 800A5A3C
  c->r[28]=c->r[3]|c->r[3]; // 800A5A40
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5A44
  c->r[29]=R32(c->r[3]+0x00000044u); // 800A5A48
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800A5A4C
  {uint32_t ea=c->r[2]+0xFFFFA540u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5A50
  c->r[0]=R32(c->r[29]+0x00000030u); // 800A5A54
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800A5A58
  cmps(c,0,(int32_t)c->r[0],0); // 800A5A5C
  if (crb(c,2)) { goto L_800A5A70; } // 800A5A60
  cmpu(c,0,c->r[0],0x00000001u); // 800A5A64
  if (crb(c,2)) { goto L_800A5A98; } // 800A5A68
  goto L_800A5AF4; // 800A5A6C
L_800A5A70:;
  c->lr=0x800A5A74u; f_801E20DC(c); // 800A5A70
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A5A74
  {uint32_t ea=c->r[2]+0xFFFFA544u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5A78
  {uint32_t ea=c->r[2]+0xFFFFA548u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5A7C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800A5A80
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[1]);} // 800A5A84
  {uint32_t ea=c->r[28]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5A88
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A5A8C
  {uint32_t ea=c->r[28]+0x00000038u; WF32(ea,c->f[0]);} // 800A5A90
  goto L_800A5AF4; // 800A5A94
L_800A5A98:;
  {uint32_t ea=c->r[29]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A5A98
  {uint32_t ea=c->r[29]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5A9C
  fcmp(c,0,c->f[2],c->f[3]); // 800A5AA0
  if (crb(c,2)) { goto L_800A5AF4; } // 800A5AA4
  fcmp(c,0,c->f[2],c->f[3]); // 800A5AA8
  if (!crb(c,1)) { goto L_800A5AD4; } // 800A5AAC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A5AB0
  {uint32_t ea=c->r[2]+0xFFFFA548u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5AB4
  fcmp(c,0,c->f[1],c->f[0]); // 800A5AB8
  if (!crb(c,1)) { goto L_800A5ACC; } // 800A5ABC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800A5AC0
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 800A5AC4
  goto L_800A5AF4; // 800A5AC8
L_800A5ACC:;
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[3]);} // 800A5ACC
  goto L_800A5AF4; // 800A5AD0
L_800A5AD4:;
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A5AD4
  {uint32_t ea=c->r[2]+0xFFFFA548u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5AD8
  fcmp(c,0,c->f[1],c->f[0]); // 800A5ADC
  if (!crb(c,1)) { goto L_800A5AF0; } // 800A5AE0
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800A5AE4
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 800A5AE8
  goto L_800A5AF4; // 800A5AEC
L_800A5AF0:;
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[3]);} // 800A5AF0
L_800A5AF4:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 800A5AF4
  cmps(c,0,(int32_t)c->r[3],0); // 800A5AF8
  if (crb(c,2)) { goto L_800A5B0C; } // 800A5AFC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A5B00
  W32(c->r[28]+0x00000034u,c->r[0]); // 800A5B04
  goto L_800A60A0; // 800A5B08
L_800A5B0C:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 800A5B0C
  cmps(c,0,(int32_t)c->r[0],0); // 800A5B10
  if (crb(c,2)) { goto L_800A5B2C; } // 800A5B14
  cmps(c,0,(int32_t)c->r[0],1); // 800A5B18
  if (crb(c,2)) { goto L_800A600C; } // 800A5B1C
  cmps(c,0,(int32_t)c->r[0],2); // 800A5B20
  if (crb(c,2)) { goto L_800A6084; } // 800A5B24
  goto L_800A60A0; // 800A5B28
L_800A5B2C:;
  c->r[3]=R32(c->r[28]+0x00000048u); // 800A5B2C
  c->r[0]=R8(c->r[3]+0x0000004Du); // 800A5B30
  cmps(c,0,(int32_t)c->r[0],0); // 800A5B34
  if (crb(c,2)) { goto L_800A5F5C; } // 800A5B38
  c->r[3]=R32(c->r[28]+0x00000044u); // 800A5B3C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800A5B40
  cmpu(c,0,c->r[0],0x00000064u); // 800A5B44
  if (!crb(c,0)) { goto L_800A5F5C; } // 800A5B48
  c->r[4]=R32(c->r[28]+0x00000010u); // 800A5B4C
  c->r[0]=R32(c->r[28]+0x00000014u); // 800A5B50
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A5B54
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A5B58
  W32(c->r[1]+0x00000020u,c->r[4]); // 800A5B5C
  c->r[0]=R32(c->r[28]+0x00000018u); // 800A5B60
  W32(c->r[1]+0x00000028u,c->r[0]); // 800A5B64
  c->lr=0x800A5B6Cu; f_800FC0C0(c); // 800A5B68
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5B6C
  {uint32_t ea=c->r[2]+0xFFFFA54Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5B70
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A5B74
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5B78
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A5B7C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A5B80
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A5B84
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800A5B88
  c->lr=0x800A5B90u; f_800FC0C0(c); // 800A5B8C
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5B90
  c->r[3]=0u+0x00000078u; // 800A5B94
  {uint32_t ea=c->r[2]+0xFFFFA54Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5B98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800A5B9C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5BA0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A5BA4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A5BA8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800A5BAC
  c->lr=0x800A5BB4u; f_800D8ED0(c); // 800A5BB0
  cmps(c,0,(int32_t)c->r[3],0); // 800A5BB4
  if (crb(c,2)) { goto L_800A5BC8; } // 800A5BB8
  c->r[4]=R32(c->r[28]+0x00000044u); // 800A5BBC
  c->r[5]=c->r[1]+0x00000020u; // 800A5BC0
  c->lr=0x800A5BC8u; f_800A6190(c); // 800A5BC4
L_800A5BC8:;
  c->r[31]=R32(c->r[28]+0x00000044u); // 800A5BC8
  c->r[4]=0u+0x80260000u; // 800A5BCC
  c->r[0]=R32(c->r[3]+0x00000064u); // 800A5BD0
  c->r[8]=0u+0x00000000u; // 800A5BD4
  c->r[6]=R32(c->r[4]+0xFFFFBD2Cu); // 800A5BD8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800A5BDC
  c->r[5]=R32(c->r[31]+0x00000014u); // 800A5BE0
  c->r[4]=R32(c->r[31]+0x00000018u); // 800A5BE4
  c->r[6]=c->r[6]+c->r[0]; // 800A5BE8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A5BEC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5BF0
  cmpu(c,0,c->r[5],c->r[4]); // 800A5BF4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5BF8
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5BFC
  W32(c->r[1]+0x00000040u,c->r[3]); // 800A5C00
  W8(c->r[1]+0x00000054u,c->r[8]); // 800A5C04
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 800A5C08
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 800A5C0C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 800A5C10
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 800A5C14
  if (!crb(c,0)) { goto L_800A5C58; } // 800A5C18
  c->r[4]=c->r[5]+0x00000001u; // 800A5C1C
  W32(c->r[31]+0x00000014u,c->r[4]); // 800A5C20
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A5C24
  c->r[5]=R32(c->r[1]+0x00000044u); // 800A5C28
  c->r[7]=R32(c->r[31]+0x00000010u); // 800A5C2C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800A5C30
  c->r[4]=R32(c->r[1]+0x00000048u); // 800A5C34
  {uint32_t ea=c->r[6]+c->r[7]; W32(ea,c->r[3]); c->r[6]=ea;} // 800A5C38
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 800A5C3C
  W32(c->r[6]+0x00000004u,c->r[5]); // 800A5C40
  W32(c->r[6]+0x00000008u,c->r[4]); // 800A5C44
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800A5C48
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 800A5C4C
  W8(c->r[6]+0x00000014u,c->r[8]); // 800A5C50
  goto L_800A5F14; // 800A5C54
L_800A5C58:;
  c->r[3]=0u+0x0AAB0000u; // 800A5C58
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 800A5C5C
  c->r[0]=c->r[0]-c->r[4]; // 800A5C60
  cmpu(c,0,c->r[0],0x00000001u); // 800A5C64
  if (!crb(c,0)) { goto L_800A5C8C; } // 800A5C68
  c->r[3]=0u+0x80250000u; // 800A5C6C
  c->r[4]=0u+0x80220000u; // 800A5C70
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A5C74
  c->r[4]=c->r[4]+0xFFFFA5A0u; // 800A5C78
  c->r[3]=c->r[3]+0x000000A0u; // 800A5C7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A5C80
  c->lr=0x800A5C88u; f_801DB440(c); // 800A5C84
  c->lr=0x800A5C8Cu; f_801DE64C(c); // 800A5C88
L_800A5C8C:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 800A5C8C
  c->r[7]=0u+0x00000000u; // 800A5C90
  c->r[5]=R32(c->r[31]+0x00000018u); // 800A5C94
  c->r[6]=c->r[31]+0x00000018u; // 800A5C98
  c->r[0]=c->r[4]+0x00000001u; // 800A5C9C
  c->r[3]=0u+0x0AAB0000u; // 800A5CA0
  c->r[4]=c->r[0]-c->r[5]; // 800A5CA4
  W32(c->r[1]+0x00000010u,c->r[4]); // 800A5CA8
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 800A5CAC
  c->r[30]=R32(c->r[31]+0x00000018u); // 800A5CB0
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 800A5CB4
  c->r[0]=c->r[0]-c->r[30]; // 800A5CB8
  cmpu(c,0,c->r[4],c->r[0]); // 800A5CBC
  W32(c->r[1]+0x00000030u,c->r[7]); // 800A5CC0
  W32(c->r[1]+0x00000034u,c->r[7]); // 800A5CC4
  W32(c->r[1]+0x00000038u,c->r[6]); // 800A5CC8
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 800A5CCC
  if (!crb(c,1)) { goto L_800A5CF4; } // 800A5CD0
  c->r[3]=0u+0x80250000u; // 800A5CD4
  c->r[4]=0u+0x80220000u; // 800A5CD8
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A5CDC
  c->r[4]=c->r[4]+0xFFFFA5A0u; // 800A5CE0
  c->r[3]=c->r[3]+0x000000A0u; // 800A5CE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A5CE8
  c->lr=0x800A5CF0u; f_801DB440(c); // 800A5CEC
  c->lr=0x800A5CF4u; f_801DE64C(c); // 800A5CF0
L_800A5CF4:;
  c->r[3]=0u+0x038E0000u; // 800A5CF4
  c->r[0]=c->r[3]+0x000038E3u; // 800A5CF8
  cmpu(c,0,c->r[30],c->r[0]); // 800A5CFC
  if (!crb(c,0)) { goto L_800A5D44; } // 800A5D00
  c->r[5]=c->r[30]+0x00000001u; // 800A5D04
  c->r[3]=0u+0xCCCD0000u; // 800A5D08
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800A5D0C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A5D10
  c->r[4]=c->r[4]-c->r[5]; // 800A5D14
  c->r[3]=c->r[3]+0xFFFFCCCDu; // 800A5D18
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 800A5D1C
  c->r[3]=c->r[1]+0x00000008u; // 800A5D20
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 800A5D24
  W32(c->r[1]+0x00000008u,c->r[4]); // 800A5D28
  cmpu(c,0,c->r[4],c->r[0]); // 800A5D2C
  if (!crb(c,0)) { goto L_800A5D38; } // 800A5D30
  c->r[3]=c->r[1]+0x00000010u; // 800A5D34
L_800A5D38:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A5D38
  c->r[30]=c->r[30]+c->r[0]; // 800A5D3C
  goto L_800A5D88; // 800A5D40
L_800A5D44:;
  c->r[3]=0u+0x071C0000u; // 800A5D44
  c->r[0]=c->r[3]+0x000071C6u; // 800A5D48
  cmpu(c,0,c->r[30],c->r[0]); // 800A5D4C
  if (!crb(c,0)) { goto L_800A5D80; } // 800A5D50
  c->r[3]=c->r[30]+0x00000001u; // 800A5D54
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A5D58
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 800A5D5C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800A5D60
  cmpu(c,0,c->r[3],c->r[0]); // 800A5D64
  c->r[3]=c->r[1]+0x0000000Cu; // 800A5D68
  if (!crb(c,0)) { goto L_800A5D74; } // 800A5D6C
  c->r[3]=c->r[1]+0x00000010u; // 800A5D70
L_800A5D74:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A5D74
  c->r[30]=c->r[30]+c->r[0]; // 800A5D78
  goto L_800A5D88; // 800A5D7C
L_800A5D80:;
  c->r[3]=0u+0x0AAB0000u; // 800A5D80
  c->r[30]=c->r[3]+0xFFFFAAAAu; // 800A5D84
L_800A5D88:;
  c->r[3]=0u+0x0AAB0000u; // 800A5D88
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 800A5D8C
  cmpu(c,0,c->r[30],c->r[0]); // 800A5D90
  if (!crb(c,1)) { goto L_800A5DB8; } // 800A5D94
  c->r[3]=0u+0x80250000u; // 800A5D98
  c->r[4]=0u+0x80220000u; // 800A5D9C
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A5DA0
  c->r[4]=c->r[4]+0xFFFFA5A0u; // 800A5DA4
  c->r[3]=c->r[3]+0x000000A0u; // 800A5DA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A5DAC
  c->lr=0x800A5DB4u; f_801DB440(c); // 800A5DB0
  c->lr=0x800A5DB8u; f_801DE64C(c); // 800A5DB4
L_800A5DB8:;
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)24); // 800A5DB8
  c->lr=0x800A5DC0u; f_800D8ED0(c); // 800A5DBC
  cmps(c,0,(int32_t)c->r[3],0); // 800A5DC0
  c->r[29]=c->r[3]|c->r[3]; // 800A5DC4
  if (!crb(c,2)) { goto L_800A5DEC; } // 800A5DC8
  c->r[3]=0u+0x80250000u; // 800A5DCC
  c->r[4]=0u+0x80220000u; // 800A5DD0
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A5DD4
  c->r[3]=c->r[3]+0x000000A0u; // 800A5DD8
  c->r[4]=c->r[4]+0xFFFFA684u; // 800A5DDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A5DE0
  c->lr=0x800A5DE8u; f_801DB440(c); // 800A5DE4
  c->lr=0x800A5DECu; f_801DE64C(c); // 800A5DE8
L_800A5DEC:;
  c->r[11]=R32(c->r[31]+0x00000014u); // 800A5DEC
  c->r[0]=0u+0x00000018u; // 800A5DF0
  c->r[4]=R32(c->r[1]+0x00000030u); // 800A5DF4
  c->r[3]=(uint32_t)((int32_t)c->r[11]*(int32_t)24); // 800A5DF8
  c->r[9]=R32(c->r[1]+0x00000040u); // 800A5DFC
  c->r[5]=c->r[4]+0x00000001u; // 800A5E00
  c->r[8]=R32(c->r[1]+0x00000044u); // 800A5E04
  c->r[7]=R32(c->r[1]+0x00000048u); // 800A5E08
  c->r[10]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 800A5E0C
  c->r[3]=c->r[29]+c->r[3]; // 800A5E10
  c->r[6]=R32(c->r[1]+0x0000004Cu); // 800A5E14
  {uint32_t ea=c->r[10]+c->r[3]; W32(ea,c->r[9]); c->r[10]=ea;} // 800A5E18
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E1C
  W32(c->r[10]+0x00000004u,c->r[8]); // 800A5E20
  c->r[4]=R8(c->r[1]+0x00000054u); // 800A5E24
  W32(c->r[10]+0x00000008u,c->r[7]); // 800A5E28
  W32(c->r[10]+0x0000000Cu,c->r[6]); // 800A5E2C
  {uint32_t ea=c->r[10]+0x00000010u; WF32(ea,c->f[0]);} // 800A5E30
  W8(c->r[10]+0x00000014u,c->r[4]); // 800A5E34
  c->r[4]=R32(c->r[31]+0x00000014u); // 800A5E38
  c->r[7]=R32(c->r[31]+0x00000010u); // 800A5E3C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 800A5E40
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800A5E44
  W32(c->r[1]+0x00000034u,c->r[30]); // 800A5E48
  c->r[6]=c->r[7]+c->r[4]; // 800A5E4C
  c->r[4]=c->r[6]+0x00000017u; // 800A5E50
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 800A5E54
  c->r[4]=c->r[4]-c->r[7]; // 800A5E58
  c->r[4]=divwu(c->r[4],c->r[0]); // 800A5E5C
  W32(c->r[1]+0x00000030u,c->r[5]); // 800A5E60
  c->ctr=c->r[4]; // 800A5E64
  cmpu(c,0,c->r[6],c->r[7]); // 800A5E68
  if (!crb(c,1)) { goto L_800A5EC8; } // 800A5E6C
L_800A5E70:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFE8u,0); cr0(c,c->r[3]); // 800A5E70
  c->r[6]=c->r[6]+0xFFFFFFE8u; // 800A5E74
  if (crb(c,2)) { goto L_800A5EAC; } // 800A5E78
  c->r[0]=R32(c->r[6]+0x00000000u); // 800A5E7C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800A5E80
  c->r[0]=R32(c->r[6]+0x00000008u); // 800A5E84
  c->r[4]=R32(c->r[6]+0x00000004u); // 800A5E88
  W32(c->r[3]+0x00000004u,c->r[4]); // 800A5E8C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A5E90
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800A5E94
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800A5E98
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5E9C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800A5EA0
  c->r[0]=R8(c->r[6]+0x00000014u); // 800A5EA4
  W8(c->r[3]+0x00000014u,c->r[0]); // 800A5EA8
L_800A5EAC:;
  c->r[5]=R32(c->r[1]+0x0000003Cu); // 800A5EAC
  c->r[4]=R32(c->r[1]+0x00000030u); // 800A5EB0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800A5EB4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800A5EB8
  c->r[0]=c->r[4]+0x00000001u; // 800A5EBC
  W32(c->r[1]+0x00000030u,c->r[0]); // 800A5EC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A5E70; } // 800A5EC4
L_800A5EC8:;
  c->r[5]=0u+0x00000000u; // 800A5EC8
  W32(c->r[31]+0x00000014u,c->r[5]); // 800A5ECC
  c->r[0]=addc(c,c->r[1],0x0000002Cu,0); cr0(c,c->r[0]); // 800A5ED0
  c->r[0]=R32(c->r[1]+0x00000030u); // 800A5ED4
  c->r[6]=R32(c->r[31]+0x00000018u); // 800A5ED8
  c->r[3]=R32(c->r[1]+0x00000034u); // 800A5EDC
  W32(c->r[31]+0x00000018u,c->r[3]); // 800A5EE0
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 800A5EE4
  c->r[3]=R32(c->r[31]+0x00000010u); // 800A5EE8
  W32(c->r[1]+0x00000034u,c->r[6]); // 800A5EEC
  W32(c->r[31]+0x00000010u,c->r[4]); // 800A5EF0
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800A5EF4
  W32(c->r[31]+0x00000014u,c->r[0]); // 800A5EF8
  W32(c->r[1]+0x00000030u,c->r[5]); // 800A5EFC
  if (crb(c,2)) { goto L_800A5F14; } // 800A5F00
  cmps(c,0,(int32_t)c->r[3],0); // 800A5F04
  if (crb(c,2)) { goto L_800A5F14; } // 800A5F08
  W32(c->r[1]+0x00000030u,c->r[5]); // 800A5F0C
  c->lr=0x800A5F14u; f_800D93B0(c); // 800A5F10
L_800A5F14:;
  {uint32_t ea=c->r[28]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5F14
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5F18
  fcmp(c,0,c->f[1],c->f[0]); // 800A5F1C
  if (!crb(c,1)) { goto L_800A5F6C; } // 800A5F20
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A5F24
  c->lr=0x800A5F2Cu; f_800126B0(c); // 800A5F28
  {uint32_t ea=c->r[2]+0xFFFFA558u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5F2C
  {uint32_t ea=c->r[2]+0xFFFFA538u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A5F30
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 800A5F34
  {uint32_t ea=c->r[28]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5F38
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5F3C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800A5F40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800A5F44
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[1]);} // 800A5F48
  fcmp(c,0,c->f[1],c->f[0]); // 800A5F4C
  if (!crb(c,0)) { goto L_800A5F6C; } // 800A5F50
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[0]);} // 800A5F54
  goto L_800A5F6C; // 800A5F58
L_800A5F5C:;
  {uint32_t ea=c->r[28]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5F5C
  {uint32_t ea=c->r[2]+0xFFFFA548u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5F60
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A5F64
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[0]);} // 800A5F68
L_800A5F6C:;
  c->r[4]=R32(c->r[28]+0x00000048u); // 800A5F6C
  c->r[0]=R8(c->r[4]+0x0000004Cu); // 800A5F70
  cmps(c,0,(int32_t)c->r[0],0); // 800A5F74
  if (!crb(c,2)) { goto L_800A5F8C; } // 800A5F78
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A5F7C
  c->r[0]=R32(c->r[3]+0x00000094u); // 800A5F80
  cmps(c,0,(int32_t)c->r[0],3); // 800A5F84
  if (!crb(c,2)) { goto L_800A5FA4; } // 800A5F88
L_800A5F8C:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 800A5F8C
  c->r[0]=0u+0x00000000u; // 800A5F90
  W32(c->r[28]+0x0000003Cu,c->r[0]); // 800A5F94
  c->r[0]=c->r[3]+0x00000001u; // 800A5F98
  W32(c->r[28]+0x00000028u,c->r[0]); // 800A5F9C
  goto L_800A60A0; // 800A5FA0
L_800A5FA4:;
  c->r[0]=R8(c->r[4]+0x0000004Du); // 800A5FA4
  cmps(c,0,(int32_t)c->r[0],0); // 800A5FA8
  if (crb(c,2)) { goto L_800A60A0; } // 800A5FAC
  {uint32_t ea=c->r[28]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A5FB0
  {uint32_t ea=c->r[2]+0xFFFFA55Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5FB4
  fcmp(c,0,c->f[1],c->f[0]); // 800A5FB8
  if (!crb(c,1)) { goto L_800A60A0; } // 800A5FBC
  {uint32_t ea=c->r[2]+0xFFFFA560u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A5FC0
  c->r[3]=R32(c->r[28]+0x00000044u); // 800A5FC4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A5FC8
  {uint32_t ea=c->r[28]+0x00000040u; WF32(ea,c->f[0]);} // 800A5FCC
  c->r[29]=R32(c->r[3]+0x00000014u); // 800A5FD0
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A5FD4
  c->lr=0x800A5FDCu; f_800FBF40(c); // 800A5FD8
  c->r[4]=c->r[29]+0xFFFFFFFFu; // 800A5FDC
  c->r[5]=R32(c->r[28]+0x00000044u); // 800A5FE0
  c->r[0]=divwu(c->r[3],c->r[4]); // 800A5FE4
  c->r[6]=0u+0x00000001u; // 800A5FE8
  c->r[5]=R32(c->r[5]+0x00000010u); // 800A5FEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800A5FF0
  c->r[3]=c->r[3]-c->r[0]; // 800A5FF4
  c->r[0]=c->r[3]+0x00000001u; // 800A5FF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800A5FFC
  c->r[3]=c->r[5]+c->r[0]; // 800A6000
  W8(c->r[3]+0x00000014u,c->r[6]); // 800A6004
  goto L_800A60A0; // 800A6008
L_800A600C:;
  c->r[4]=R32(c->r[28]+0x0000003Cu); // 800A600C
  c->r[3]=R32(c->r[28]+0x00000044u); // 800A6010
  c->r[0]=c->r[4]+0x00000001u; // 800A6014
  W32(c->r[28]+0x0000003Cu,c->r[0]); // 800A6018
  c->r[3]=R32(c->r[3]+0x00000014u); // 800A601C
  cmpu(c,0,c->r[0],c->r[3]); // 800A6020
  if (!crb(c,1)) { goto L_800A602C; } // 800A6024
  W32(c->r[28]+0x0000003Cu,c->r[3]); // 800A6028
L_800A602C:;
  c->r[7]=0u+0x00000000u; // 800A602C
  c->r[5]=0u+0x00000000u; // 800A6030
  c->r[4]=0u+0x00000001u; // 800A6034
  goto L_800A6058; // 800A6038
  c->r[0]=c->r[0]|0x00000000u; // 800A603C
L_800A6040:;
  c->r[3]=R32(c->r[28]+0x00000044u); // 800A6040
  c->r[7]=c->r[7]+0x00000001u; // 800A6044
  c->r[0]=R32(c->r[3]+0x00000010u); // 800A6048
  c->r[3]=c->r[0]+c->r[5]; // 800A604C
  c->r[5]=c->r[5]+0x00000018u; // 800A6050
  W8(c->r[3]+0x00000014u,c->r[4]); // 800A6054
L_800A6058:;
  c->r[6]=R32(c->r[28]+0x0000003Cu); // 800A6058
  cmpu(c,0,c->r[7],c->r[6]); // 800A605C
  if (crb(c,0)) { IRQCHK(c); goto L_800A6040; } // 800A6060
  c->r[3]=R32(c->r[28]+0x00000044u); // 800A6064
  c->r[0]=R32(c->r[3]+0x00000014u); // 800A6068
  cmpu(c,0,c->r[6],c->r[0]); // 800A606C
  if (crb(c,0)) { goto L_800A60A0; } // 800A6070
  c->r[3]=R32(c->r[28]+0x00000028u); // 800A6074
  c->r[0]=c->r[3]+0x00000001u; // 800A6078
  W32(c->r[28]+0x00000028u,c->r[0]); // 800A607C
  goto L_800A60A0; // 800A6080
L_800A6084:;
  c->r[3]=R32(c->r[28]+0x00000044u); // 800A6084
  c->r[0]=R32(c->r[3]+0x00000014u); // 800A6088
  cmps(c,0,(int32_t)c->r[0],0); // 800A608C
  if (!crb(c,2)) { goto L_800A60A0; } // 800A6090
  c->r[0]=0u+0x00000002u; // 800A6094
  W32(c->r[28]+0x00000008u,c->r[0]); // 800A6098
  goto L_800A616C; // 800A609C
L_800A60A0:;
  c->r[4]=R32(c->r[28]+0x00000044u); // 800A60A0
  c->r[8]=0u+0x00000000u; // 800A60A4
  c->r[5]=0u+0x00000000u; // 800A60A8
  goto L_800A60FC; // 800A60AC
L_800A60B0:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 800A60B0
  c->r[6]=R32(c->r[5]+c->r[0]); // 800A60B4
  c->r[7]=c->r[0]+c->r[5]; // 800A60B8
  cmps(c,0,(int32_t)c->r[6],0); // 800A60BC
  if (crb(c,2)) { goto L_800A60F4; } // 800A60C0
  c->r[0]=R32(c->r[6]+0x00000020u); // 800A60C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A60C8
  c->r[3]=R32(c->r[6]+0x00000024u); // 800A60CC
  c->r[0]=R32(c->r[6]+0x00000028u); // 800A60D0
  W32(c->r[1]+0x00000018u,c->r[3]); // 800A60D4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A60D8
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 800A60DC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A60E0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A60E4
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[1]);} // 800A60E8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A60EC
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A60F0
L_800A60F4:;
  c->r[5]=c->r[5]+0x00000018u; // 800A60F4
  c->r[8]=c->r[8]+0x00000001u; // 800A60F8
L_800A60FC:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 800A60FC
  cmpu(c,0,c->r[8],c->r[0]); // 800A6100
  if (crb(c,0)) { IRQCHK(c); goto L_800A60B0; } // 800A6104
  c->r[4]=R32(c->r[28]+0x00000048u); // 800A6108
  c->r[3]=R32(c->r[28]+0x00000044u); // 800A610C
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6110
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[1]);} // 800A6114
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6118
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[0]);} // 800A611C
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6120
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 800A6124
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 800A6128
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A612C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A6130
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6134
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 800A6138
  c->r[3]=R32(c->r[28]+0x00000044u); // 800A613C
  {uint32_t ea=c->r[28]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6140
  c->r[3]=R32(c->r[3]+0x00000010u); // 800A6144
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800A6148
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A614C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800A6150
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6154
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A6158
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A615C
  {uint32_t ea=c->r[28]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6160
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A6164
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A6168
L_800A616C:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800A616C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800A6170
  c->r[30]=R32(c->r[1]+0x00000068u); // 800A6174
  c->r[29]=R32(c->r[1]+0x00000064u); // 800A6178
  c->r[28]=R32(c->r[1]+0x00000060u); // 800A617C
  c->lr=c->r[0]; // 800A6180
  c->r[1]=c->r[1]+0x00000070u; // 800A6184
  return; // 800A6188
}

// fn_800A6190
void f_800A6190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6190
  c->r[0]=c->lr; // 800A6194
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A6198
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800A619C
  c->r[31]=c->r[3]|c->r[3]; // 800A61A0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A61A4
  c->r[30]=c->r[5]|c->r[5]; // 800A61A8
  W32(c->r[1]+0x00000024u,c->r[29]); // 800A61AC
  c->r[29]=c->r[4]|c->r[4]; // 800A61B0
  c->r[4]=0u+0x00000005u; // 800A61B4
  c->lr=0x800A61BCu; f_8000BF70(c); // 800A61B8
  c->r[3]=c->r[31]+0x00000010u; // 800A61BC
  c->lr=0x800A61C4u; f_80008DD0(c); // 800A61C0
  c->r[4]=0u+0x80220000u; // 800A61C4
  c->r[3]=c->r[31]+0x00000050u; // 800A61C8
  c->r[4]=c->r[4]+0xFFFFA5E0u; // 800A61CC
  W32(c->r[31]+0x00000000u,c->r[4]); // 800A61D0
  c->r[0]=c->r[4]+0x00000014u; // 800A61D4
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A61D8
  c->lr=0x800A61E0u; f_8004F070(c); // 800A61DC
  W32(c->r[31]+0x0000006Cu,c->r[29]); // 800A61E0
  c->r[4]=0u+0x80210000u; // 800A61E4
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A61E8
  c->r[3]=0u+0x00000000u; // 800A61EC
  c->r[5]=R32(c->r[29]+0x00000004u); // 800A61F0
  c->r[0]=0u+0x00000001u; // 800A61F4
  c->r[5]=c->r[5]+0x00000001u; // 800A61F8
  W32(c->r[29]+0x00000004u,c->r[5]); // 800A61FC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6200
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 800A6204
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6208
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 800A620C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6210
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A6214
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6218
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A621C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6220
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A6224
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6228
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[0]);} // 800A622C
  W32(c->r[31]+0x00000040u,c->r[3]); // 800A6230
  W8(c->r[31]+0x00000044u,c->r[3]); // 800A6234
  W8(c->r[31]+0x00000045u,c->r[3]); // 800A6238
  W32(c->r[31]+0x00000048u,c->r[0]); // 800A623C
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A6240
  c->lr=0x800A6248u; f_800FBF40(c); // 800A6244
  c->r[8]=0u+0x80260000u; // 800A6248
  c->r[5]=R32(c->r[31]+0x00000020u); // 800A624C
  c->r[4]=c->r[8]+0xFFFFBD2Cu; // 800A6250
  c->r[0]=R32(c->r[31]+0x00000024u); // 800A6254
  c->r[7]=R32(c->r[4]+0x00000004u); // 800A6258
  c->r[4]=c->r[1]+0x00000008u; // 800A625C
  c->r[6]=divwu(c->r[3],c->r[7]); // 800A6260
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 800A6264
  c->r[3]=c->r[3]-c->r[6]; // 800A6268
  W32(c->r[31]+0x00000064u,c->r[3]); // 800A626C
  c->r[6]=rotl(c->r[3],4)&0xFFFFFFF0u; // 800A6270
  c->r[7]=R32(c->r[8]+0xFFFFBD2Cu); // 800A6274
  c->r[6]=c->r[7]+c->r[6]; // 800A6278
  {uint32_t ea=c->r[6]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A627C
  {uint32_t ea=c->r[31]+0x00000068u; WF32(ea,c->f[0]);} // 800A6280
  W32(c->r[1]+0x00000008u,c->r[5]); // 800A6284
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A6288
  c->r[0]=R32(c->r[31]+0x00000028u); // 800A628C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A6290
  c->lr=0x800A6298u; f_800A1340(c); // 800A6294
  W32(c->r[31]+0x00000070u,c->r[3]); // 800A6298
  {uint32_t ea=c->r[2]+0xFFFFA564u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A629C
  c->lr=0x800A62A4u; f_80101610(c); // 800A62A0
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A62A4
  c->lr=0x800A62ACu; f_800FC0C0(c); // 800A62A8
  {uint32_t ea=c->r[2]+0xFFFFA530u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A62AC
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A62B0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800A62B4
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800A62B8
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A62BC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800A62C0
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 800A62C4
  c->lr=0x800A62CCu; f_80101920(c); // 800A62C8
  c->r[3]=0u+0x00000014u; // 800A62CC
  c->lr=0x800A62D4u; f_800D8ED0(c); // 800A62D0
  cmps(c,0,(int32_t)c->r[3],0); // 800A62D4
  c->r[5]=c->r[3]|c->r[3]; // 800A62D8
  if (crb(c,2)) { goto L_800A62F4; } // 800A62DC
  {uint32_t ea=c->r[2]+0xFFFFA538u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A62E0
  c->r[4]=0u+0x00000004u; // 800A62E4
  {uint32_t ea=c->r[2]+0xFFFFA554u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A62E8
  c->lr=0x800A62F0u; f_800A6E00(c); // 800A62EC
  c->r[5]=c->r[3]|c->r[3]; // 800A62F0
L_800A62F4:;
  W32(c->r[31]+0x0000004Cu,c->r[5]); // 800A62F4
  c->r[4]=0u+0x00000001u; // 800A62F8
  c->r[0]=0u+0x00000000u; // 800A62FC
  c->r[3]=c->r[31]|c->r[31]; // 800A6300
  W8(c->r[5]+0x00000010u,c->r[4]); // 800A6304
  W8(c->r[31]+0x00000074u,c->r[4]); // 800A6308
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800A630C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800A6310
  c->r[30]=R32(c->r[1]+0x00000028u); // 800A6314
  c->r[29]=R32(c->r[1]+0x00000024u); // 800A6318
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A631C
  c->lr=c->r[0]; // 800A6320
  c->r[1]=c->r[1]+0x00000030u; // 800A6324
  return; // 800A6328
}

// fn_800A6330
void f_800A6330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6330
  c->r[0]=c->lr; // 800A6334
  cmps(c,0,(int32_t)c->r[3],0); // 800A6338
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A633C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A6340
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A6344
  c->r[30]=c->r[4]|c->r[4]; // 800A6348
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A634C
  c->r[29]=c->r[3]|c->r[3]; // 800A6350
  if (crb(c,2)) { goto L_800A6480; } // 800A6354
  c->r[4]=0u+0x80220000u; // 800A6358
  c->r[31]=R32(c->r[3]+0x0000006Cu); // 800A635C
  c->r[4]=c->r[4]+0xFFFFA5E0u; // 800A6360
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A6364
  c->r[0]=c->r[4]+0x00000014u; // 800A6368
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A636C
  c->r[0]=R32(c->r[31]+0x00000014u); // 800A6370
  c->r[7]=R32(c->r[31]+0x00000010u); // 800A6374
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800A6378
  c->r[4]=c->r[7]+c->r[0]; // 800A637C
  goto L_800A63E8; // 800A6380
  c->r[0]=c->r[0]|0x00000000u; // 800A6384
L_800A6388:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 800A6388
  cmpu(c,0,c->r[0],c->r[3]); // 800A638C
  if (!crb(c,2)) { goto L_800A63E4; } // 800A6390
  c->r[0]=R32(c->r[31]+0x00000014u); // 800A6394
  c->r[3]=0u+0x2AAB0000u; // 800A6398
  c->r[6]=c->r[3]+0xFFFFAAABu; // 800A639C
  c->r[5]=R32(c->r[31]+0x00000010u); // 800A63A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800A63A4
  c->r[3]=c->r[7]|c->r[7]; // 800A63A8
  c->r[4]=c->r[7]+0x00000018u; // 800A63AC
  c->r[0]=c->r[5]+c->r[0]; // 800A63B0
  c->r[0]=c->r[0]-c->r[7]; // 800A63B4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[6]*(int64_t)(int32_t)c->r[0])>>32); // 800A63B8
  c->r[0]=sraw(c,c->r[0],2); // 800A63BC
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800A63C0
  c->r[5]=c->r[0]+c->r[5]; // 800A63C4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800A63C8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800A63CC
  c->lr=0x800A63D4u; f_801D8E54(c); // 800A63D0
  c->r[3]=R32(c->r[31]+0x00000014u); // 800A63D4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A63D8
  W32(c->r[31]+0x00000014u,c->r[0]); // 800A63DC
  goto L_800A63F0; // 800A63E0
L_800A63E4:;
  c->r[7]=c->r[7]+0x00000018u; // 800A63E4
L_800A63E8:;
  cmpu(c,0,c->r[7],c->r[4]); // 800A63E8
  if (!crb(c,2)) { IRQCHK(c); goto L_800A6388; } // 800A63EC
L_800A63F0:;
  c->r[3]=R32(c->r[29]+0x0000006Cu); // 800A63F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A63F4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A63F8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A63FC
  if (!crb(c,2)) { goto L_800A6420; } // 800A6400
  cmps(c,0,(int32_t)c->r[3],0); // 800A6404
  if (crb(c,2)) { goto L_800A6420; } // 800A6408
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A640C
  c->r[4]=0u+0x00000001u; // 800A6410
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A6414
  c->ctr=c->r[12]; // 800A6418
  if (true) { c->lr=0x800A6420u; dispatch(c,c->ctr); } // 800A641C
L_800A6420:;
  c->r[3]=R32(c->r[29]+0x0000004Cu); // 800A6420
  c->r[4]=0u+0x00000001u; // 800A6424
  c->lr=0x800A642Cu; f_800A6F10(c); // 800A6428
  c->r[3]=R32(c->r[29]+0x00000070u); // 800A642C
  cmps(c,0,(int32_t)c->r[3],0); // 800A6430
  if (crb(c,2)) { goto L_800A644C; } // 800A6434
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6438
  c->r[4]=0u+0x00000001u; // 800A643C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A6440
  c->ctr=c->r[12]; // 800A6444
  if (true) { c->lr=0x800A644Cu; dispatch(c,c->ctr); } // 800A6448
L_800A644C:;
  c->r[3]=c->r[29]+0x00000050u; // 800A644C
  c->r[4]=0u+0xFFFFFFFFu; // 800A6450
  c->lr=0x800A6458u; f_8004F0A0(c); // 800A6454
  c->r[3]=c->r[29]+0x00000010u; // 800A6458
  c->r[4]=0u+0x00000000u; // 800A645C
  c->lr=0x800A6464u; f_80008E10(c); // 800A6460
  c->r[3]=c->r[29]|c->r[29]; // 800A6464
  c->r[4]=0u+0x00000000u; // 800A6468
  c->lr=0x800A6470u; f_8000BFD0(c); // 800A646C
  cmps(c,0,(int32_t)c->r[30],0); // 800A6470
  if (!crb(c,1)) { goto L_800A6480; } // 800A6474
  c->r[3]=c->r[29]|c->r[29]; // 800A6478
  c->lr=0x800A6480u; f_800D93B0(c); // 800A647C
L_800A6480:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A6480
  c->r[3]=c->r[29]|c->r[29]; // 800A6484
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A6488
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A648C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A6490
  c->lr=c->r[0]; // 800A6494
  c->r[1]=c->r[1]+0x00000020u; // 800A6498
  return; // 800A649C
}

// fn_800A64A0
void f_800A64A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A64A0
  c->r[0]=c->lr; // 800A64A4
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800A64A8
  c->r[11]=c->r[1]+0x00000080u; // 800A64AC
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 800A64B0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 800A64B4
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[30]);} // 800A64B8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,30,ea,0,0);} // 800A64BC
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[29]);} // 800A64C0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,29,ea,0,0);} // 800A64C4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[28]);} // 800A64C8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,28,ea,0,0);} // 800A64CC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[27]);} // 800A64D0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,27,ea,0,0);} // 800A64D4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[26]);} // 800A64D8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,26,ea,0,0);} // 800A64DC
  c->lr=0x800A64E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A64E0
  c->r[31]=c->r[3]|c->r[3]; // 800A64E4
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800A64E8
  c->r[4]=c->r[1]+0x0000001Cu; // 800A64EC
  c->r[5]=c->r[1]+0x00000018u; // 800A64F0
  c->lr=0x800A64F8u; f_800A7030(c); // 800A64F4
  c->r[4]=R32(c->r[1]+0x00000018u); // 800A64F8
  cmps(c,0,(int32_t)c->r[4],0); // 800A64FC
  if (crb(c,2)) { goto L_800A6644; } // 800A6500
  c->r[0]=R32(c->r[31]+0x00000048u); // 800A6504
  c->r[3]=c->r[31]+0x00000050u; // 800A6508
  c->r[0]=c->r[0]-c->r[4]; // 800A650C
  W32(c->r[31]+0x00000048u,c->r[0]); // 800A6510
  c->lr=0x800A6518u; f_8004F0E0(c); // 800A6514
  c->r[0]=R32(c->r[31]+0x00000048u); // 800A6518
  cmps(c,0,(int32_t)c->r[0],0); // 800A651C
  if (crb(c,1)) { goto L_800A6644; } // 800A6520
  c->r[4]=0u+0x80210000u; // 800A6524
  {uint32_t ea=c->r[2]+0xFFFFA548u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6528
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 800A652C
  c->r[3]=c->r[31]+0x00000020u; // 800A6530
  c->r[4]=c->r[4]+0x00000018u; // 800A6534
  c->r[5]=0u+0x00000001u; // 800A6538
  c->r[6]=0u+0x00000001u; // 800A653C
  c->r[7]=0u+0x00000001u; // 800A6540
  c->r[8]=0u+0x00000090u; // 800A6544
  c->lr=0x800A654Cu; f_8004FB70(c); // 800A6548
  c->r[28]=0u+0x00000000u; // 800A654C
  c->r[29]=c->r[13]+0xFFFF9F50u; // 800A6550
  W32(c->r[1]+0x00000044u,c->r[28]); // 800A6554
  c->r[3]=c->r[29]|c->r[29]; // 800A6558
  c->r[30]=c->r[1]+0x00000044u; // 800A655C
  W32(c->r[1]+0x00000048u,c->r[28]); // 800A6560
  W32(c->r[1]+0x0000004Cu,c->r[28]); // 800A6564
  c->lr=0x800A656Cu; f_801D4D44(c); // 800A6568
  c->r[27]=c->r[3]|c->r[3]; // 800A656C
  c->r[3]=c->r[30]|c->r[30]; // 800A6570
  c->r[4]=c->r[27]|c->r[27]; // 800A6574
  c->lr=0x800A657Cu; f_800081B0(c); // 800A6578
  c->r[0]=R8(c->r[1]+0x00000014u); // 800A657C
  c->r[3]=c->r[30]|c->r[30]; // 800A6580
  W8(c->r[1]+0x00000010u,c->r[0]); // 800A6584
  c->r[6]=c->r[29]|c->r[29]; // 800A6588
  c->r[7]=c->r[29]+c->r[27]; // 800A658C
  c->r[8]=c->r[1]+0x00000010u; // 800A6590
  c->r[4]=0u+0x00000000u; // 800A6594
  c->r[5]=0u+0x00000000u; // 800A6598
  c->lr=0x800A65A0u; f_80008370(c); // 800A659C
  c->r[29]=c->r[13]+0xFFFF9F58u; // 800A65A0
  W32(c->r[1]+0x00000038u,c->r[28]); // 800A65A4
  c->r[27]=c->r[1]+0x00000038u; // 800A65A8
  W32(c->r[1]+0x0000003Cu,c->r[28]); // 800A65AC
  c->r[3]=c->r[29]|c->r[29]; // 800A65B0
  W32(c->r[1]+0x00000040u,c->r[28]); // 800A65B4
  c->lr=0x800A65BCu; f_801D4D44(c); // 800A65B8
  c->r[28]=c->r[3]|c->r[3]; // 800A65BC
  c->r[3]=c->r[27]|c->r[27]; // 800A65C0
  c->r[4]=c->r[28]|c->r[28]; // 800A65C4
  c->lr=0x800A65CCu; f_800081B0(c); // 800A65C8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800A65CC
  c->r[3]=c->r[27]|c->r[27]; // 800A65D0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A65D4
  c->r[6]=c->r[29]|c->r[29]; // 800A65D8
  c->r[7]=c->r[29]+c->r[28]; // 800A65DC
  c->r[8]=c->r[1]+0x00000008u; // 800A65E0
  c->r[4]=0u+0x00000000u; // 800A65E4
  c->r[5]=0u+0x00000000u; // 800A65E8
  c->lr=0x800A65F0u; f_80008370(c); // 800A65EC
  c->r[3]=R32(c->r[13]+0xFFFFADD8u); // 800A65F0
  c->r[5]=c->r[30]|c->r[30]; // 800A65F4
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800A65F8
  c->r[6]=c->r[27]|c->r[27]; // 800A65FC
  c->lr=0x800A6604u; f_80012C00(c); // 800A6600
  c->r[0]=R32(c->r[1]+0x00000038u); // 800A6604
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A6608
  if (crb(c,2)) { goto L_800A6618; } // 800A660C
  c->r[3]=R32(c->r[1]+0x00000040u); // 800A6610
  c->lr=0x800A6618u; f_800D93B0(c); // 800A6614
L_800A6618:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A6618
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A661C
  if (crb(c,2)) { goto L_800A662C; } // 800A6620
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 800A6624
  c->lr=0x800A662Cu; f_800D93B0(c); // 800A6628
L_800A662C:;
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A662C
  c->r[4]=0u+0x0000002Bu; // 800A6630
  c->lr=0x800A6638u; f_800A8BE0(c); // 800A6634
  c->r[0]=0u+0x00000002u; // 800A6638
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A663C
  goto L_800A6A80; // 800A6640
L_800A6644:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 800A6644
  cmps(c,0,(int32_t)c->r[0],0); // 800A6648
  if (crb(c,2)) { goto L_800A665C; } // 800A664C
  cmps(c,0,(int32_t)c->r[0],100); // 800A6650
  if (crb(c,2)) { goto L_800A68D8; } // 800A6654
  goto L_800A6998; // 800A6658
L_800A665C:;
  c->r[28]=R32(c->r[31]+0x0000006Cu); // 800A665C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A6660
  c->r[3]=R32(c->r[28]+0x00000010u); // 800A6664
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6668
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A666C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6670
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800A6674
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800A6678
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 800A667C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 800A6680
  c->lr=0x800A6688u; f_801E2224(c); // 800A6684
  c->f[28]=c->ps1[28]=S(c->f[1]); // 800A6688
  c->f[1]=c->f[28]; // 800A668C
  c->lr=0x800A6694u; f_801E20DC(c); // 800A6690
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A6694
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6698
  c->f[1]=c->f[28]; // 800A669C
  c->f[2]=-c->f[2]; // 800A66A0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A66A4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A66A8
  c->lr=0x800A66B0u; f_801E1CD0(c); // 800A66AC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800A66B0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A66B4
  {uint32_t ea=c->r[2]+0xFFFFA550u; c->f[29]=c->ps1[29]=RF32(ea);} // 800A66B8
  c->r[25]=0u+0x00000000u; // 800A66BC
  {uint32_t ea=c->r[2]+0xFFFFA56Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800A66C0
  c->r[27]=0u+0x00000000u; // 800A66C4
  c->f[1]=-c->f[1]; // 800A66C8
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800A66CC
  {uint32_t ea=c->r[2]+0xFFFFA568u; c->f[28]=c->ps1[28]=RF32(ea);} // 800A66D0
  c->r[29]=0u+0x00000000u; // 800A66D4
  c->r[30]=0u+0x00000064u; // 800A66D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A66DC
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A66E0
  goto L_800A67D8; // 800A66E4
L_800A66E8:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 800A66E8
  c->r[26]=c->r[0]+c->r[27]; // 800A66EC
  c->r[0]=R32(c->r[27]+c->r[0]); // 800A66F0
  cmpu(c,0,c->r[0],c->r[31]); // 800A66F4
  if (crb(c,2)) { goto L_800A67A8; } // 800A66F8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A66FC
  {uint32_t ea=c->r[26]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6700
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6704
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800A6708
  {uint32_t ea=c->r[26]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A670C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800A6710
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 800A6714
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[2]); // 800A6718
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800A671C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 800A6720
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800A6724
  c->lr=0x800A672Cu; f_801E247C(c); // 800A6728
  {uint32_t ea=c->r[31]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A672C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800A6730
  {uint32_t ea=c->r[26]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6734
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A6738
  c->f[3]=c->ps1[3]=S(c->f[28]*c->f[0]); // 800A673C
  fcmp(c,0,c->f[1],c->f[3]); // 800A6740
  if (!crb(c,0)) { goto L_800A67D0; } // 800A6744
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[1]); // 800A6748
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A674C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6750
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 800A6754
  c->f[27]=c->ps1[27]=S(c->f[0]/c->f[3]); // 800A6758
  c->lr=0x800A6760u; f_801E2224(c); // 800A675C
  c->f[26]=c->ps1[26]=S(c->f[1]); // 800A6760
  c->f[1]=c->f[26]; // 800A6764
  c->lr=0x800A676Cu; f_801E20DC(c); // 800A6768
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A676C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6770
  c->f[1]=c->f[26]; // 800A6774
  c->f[2]=-c->f[2]; // 800A6778
  c->f[2]=c->ps1[2]=S(c->f[27]*c->f[2]); // 800A677C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800A6780
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A6784
  c->lr=0x800A678Cu; f_801E1CD0(c); // 800A6788
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800A678C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6790
  c->f[1]=-c->f[1]; // 800A6794
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[1]); // 800A6798
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800A679C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A67A0
  goto L_800A67D0; // 800A67A4
L_800A67A8:;
  c->r[0]=R8(c->r[26]+0x00000014u); // 800A67A8
  cmps(c,0,(int32_t)c->r[0],0); // 800A67AC
  if (crb(c,2)) { goto L_800A67D0; } // 800A67B0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A67B4
  W8(c->r[31]+0x00000074u,c->r[29]); // 800A67B8
  fcmp(c,0,c->f[0],c->f[30]); // 800A67BC
  if (!crb(c,1)) { goto L_800A67CC; } // 800A67C0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[31]); // 800A67C4
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A67C8
L_800A67CC:;
  W32(c->r[31]+0x00000040u,c->r[30]); // 800A67CC
L_800A67D0:;
  c->r[27]=c->r[27]+0x00000018u; // 800A67D0
  c->r[25]=c->r[25]+0x00000001u; // 800A67D4
L_800A67D8:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 800A67D8
  cmpu(c,0,c->r[25],c->r[0]); // 800A67DC
  if (crb(c,0)) { IRQCHK(c); goto L_800A66E8; } // 800A67E0
  {uint32_t ea=c->r[31]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A67E4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800A67E8
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[4]); // 800A67EC
  {uint32_t ea=c->r[2]+0xFFFFA570u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A67F0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[3]); // 800A67F4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 800A67F8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[4]);} // 800A67FC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A6800
  fcmp(c,0,c->f[1],c->f[0]); // 800A6804
  if (!crb(c,1)) { goto L_800A6834; } // 800A6808
  c->r[3]=c->r[31]+0x0000002Cu; // 800A680C
  c->r[4]=c->r[3]|c->r[3]; // 800A6810
  c->lr=0x800A6818u; f_8016B580(c); // 800A6814
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6818
  {uint32_t ea=c->r[2]+0xFFFFA574u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A681C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6820
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800A6824
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800A6828
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 800A682C
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A6830
L_800A6834:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6834
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6838
  c->lr=0x800A6840u; f_801E2224(c); // 800A683C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800A6840
  {uint32_t ea=c->r[2]+0xFFFFA578u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6844
  {uint32_t ea=c->r[2]+0xFFFFA57Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6848
  c->f[26]=c->ps1[26]=S(c->f[2]-c->f[1]); // 800A684C
  c->f[27]=c->ps1[27]=S(c->f[0]+c->f[26]); // 800A6850
  c->f[1]=c->f[27]; // 800A6854
  c->lr=0x800A685Cu; f_801E1CD0(c); // 800A6858
  c->f[28]=c->ps1[28]=S(c->f[1]); // 800A685C
  c->f[1]=c->f[26]; // 800A6860
  c->lr=0x800A6868u; f_801E1CD0(c); // 800A6864
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800A6868
  c->f[1]=c->f[27]; // 800A686C
  c->f[0]=-c->f[0]; // 800A6870
  c->f[28]=c->ps1[28]=S(c->f[0]+c->f[28]); // 800A6874
  c->lr=0x800A687Cu; f_801E20DC(c); // 800A6878
  c->f[29]=c->ps1[29]=S(c->f[1]); // 800A687C
  c->f[1]=c->f[26]; // 800A6880
  c->lr=0x800A6888u; f_801E20DC(c); // 800A6884
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800A6888
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800A688C
  {uint32_t ea=c->r[2]+0xFFFFA52Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800A6890
  {uint32_t ea=c->r[3]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A6894
  c->f[6]=c->ps1[6]=S(c->f[0]-c->f[29]); // 800A6898
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A689C
  c->f[3]=c->ps1[3]=S(c->f[28]*c->f[4]); // 800A68A0
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A68A4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[5]); // 800A68A8
  {uint32_t ea=c->r[31]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A68AC
  c->f[4]=c->ps1[4]=S(c->f[6]*c->f[4]); // 800A68B0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[5]);} // 800A68B4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 800A68B8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[4]);} // 800A68BC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[4]); // 800A68C0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[3]);} // 800A68C4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[2]);} // 800A68C8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 800A68CC
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A68D0
  goto L_800A6998; // 800A68D4
L_800A68D8:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A68D8
  {uint32_t ea=c->r[2]+0xFFFFA580u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A68DC
  fcmp(c,0,c->f[3],c->f[2]); // 800A68E0
  if (crb(c,2)) { goto L_800A6934; } // 800A68E4
  fcmp(c,0,c->f[3],c->f[2]); // 800A68E8
  if (!crb(c,1)) { goto L_800A6914; } // 800A68EC
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[2]); // 800A68F0
  {uint32_t ea=c->r[2]+0xFFFFA584u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A68F4
  fcmp(c,0,c->f[1],c->f[0]); // 800A68F8
  if (!crb(c,1)) { goto L_800A690C; } // 800A68FC
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A6900
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A6904
  goto L_800A6934; // 800A6908
L_800A690C:;
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[2]);} // 800A690C
  goto L_800A6934; // 800A6910
L_800A6914:;
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[3]); // 800A6914
  {uint32_t ea=c->r[2]+0xFFFFA584u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6918
  fcmp(c,0,c->f[1],c->f[0]); // 800A691C
  if (!crb(c,1)) { goto L_800A6930; } // 800A6920
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A6924
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[0]);} // 800A6928
  goto L_800A6934; // 800A692C
L_800A6930:;
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[2]);} // 800A6930
L_800A6934:;
  c->r[0]=R8(c->r[31]+0x00000045u); // 800A6934
  cmps(c,0,(int32_t)c->r[0],0); // 800A6938
  if (!crb(c,2)) { goto L_800A694C; } // 800A693C
  c->r[0]=R8(c->r[31]+0x00000044u); // 800A6940
  cmps(c,0,(int32_t)c->r[0],0); // 800A6944
  if (crb(c,2)) { goto L_800A6998; } // 800A6948
L_800A694C:;
  c->r[3]=0u+0x00000044u; // 800A694C
  c->lr=0x800A6954u; f_800D8ED0(c); // 800A6950
  cmps(c,0,(int32_t)c->r[3],0); // 800A6954
  if (crb(c,2)) { goto L_800A6980; } // 800A6958
  c->r[5]=0u+0x80210000u; // 800A695C
  {uint32_t ea=c->r[2]+0xFFFFA548u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6960
  c->r[5]=c->r[5]+0xFFFFAFB8u; // 800A6964
  c->r[4]=c->r[31]+0x00000020u; // 800A6968
  c->r[5]=c->r[5]+0x00000018u; // 800A696C
  c->r[6]=0u+0x00000000u; // 800A6970
  c->r[7]=0u+0x00000000u; // 800A6974
  c->r[8]=0u+0x00000090u; // 800A6978
  c->lr=0x800A6980u; f_8004F6F0(c); // 800A697C
L_800A6980:;
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A6980
  c->r[4]=0u+0x0000002Bu; // 800A6984
  c->lr=0x800A698Cu; f_800A8BE0(c); // 800A6988
  c->r[0]=0u+0x00000002u; // 800A698C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A6990
  goto L_800A6A80; // 800A6994
L_800A6998:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6998
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A699C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A69A0
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800A69A4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A69A8
  c->r[0]=R8(c->r[31]+0x00000074u); // 800A69AC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800A69B0
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A69B4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A69B8
  cmps(c,0,(int32_t)c->r[0],0); // 800A69BC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[4]);} // 800A69C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A69C4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 800A69C8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A69CC
  if (!crb(c,2)) { goto L_800A6A04; } // 800A69D0
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A69D4
  c->r[4]=c->r[31]+0x00000020u; // 800A69D8
  {uint32_t ea=c->r[2]+0xFFFFA588u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A69DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A69E0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800A69E4
  c->ctr=c->r[12]; // 800A69E8
  if (true) { c->lr=0x800A69F0u; dispatch(c,c->ctr); } // 800A69EC
  cmps(c,0,(int32_t)c->r[3],0); // 800A69F0
  if (!crb(c,2)) { goto L_800A6A04; } // 800A69F4
  c->r[0]=0u+0x00000002u; // 800A69F8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A69FC
  goto L_800A6A80; // 800A6A00
L_800A6A04:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6A04
  c->r[3]=c->r[31]+0x00000050u; // 800A6A08
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6A0C
  {uint32_t ea=c->r[31]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A6A10
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800A6A14
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6A18
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6A1C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6A20
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800A6A24
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[4]);} // 800A6A28
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A6A2C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[2]);} // 800A6A30
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 800A6A34
  c->lr=0x800A6A3Cu; f_8004F0F0(c); // 800A6A38
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6A3C
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6A40
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A6A44
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800A6A48
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 800A6A4C
  c->lr=0x800A6A54u; f_80101920(c); // 800A6A50
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A6A54
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 800A6A58
  c->r[5]=R32(c->r[31]+0x00000060u); // 800A6A5C
  c->lr=0x800A6A64u; f_80100330(c); // 800A6A60
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A6A64
  c->lr=0x800A6A6Cu; f_80103410(c); // 800A6A68
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A6A6C
  c->lr=0x800A6A74u; f_801063E0(c); // 800A6A70
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800A6A74
  c->r[4]=R32(c->r[31]+0x00000070u); // 800A6A78
  c->lr=0x800A6A80u; f_800A70A0(c); // 800A6A7C
L_800A6A80:;
  c->r[11]=c->r[1]+0x00000080u; // 800A6A80
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 800A6A84
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 800A6A88
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,30,ea,0,0);} // 800A6A8C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[30]=RF64(ea);} // 800A6A90
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,29,ea,0,0);} // 800A6A94
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[29]=RF64(ea);} // 800A6A98
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,28,ea,0,0);} // 800A6A9C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[28]=RF64(ea);} // 800A6AA0
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,27,ea,0,0);} // 800A6AA4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[27]=RF64(ea);} // 800A6AA8
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,26,ea,0,0);} // 800A6AAC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[26]=RF64(ea);} // 800A6AB0
  c->lr=0x800A6AB8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A6AB4
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800A6AB8
  c->lr=c->r[0]; // 800A6ABC
  c->r[1]=c->r[1]+0x000000E0u; // 800A6AC0
  return; // 800A6AC4
}

// fn_800A6AD0
void f_800A6AD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6AD0
  c->r[0]=c->lr; // 800A6AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6AD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6ADC
  c->r[31]=c->r[3]|c->r[3]; // 800A6AE0
  c->r[3]=R32(c->r[3]+0x00000070u); // 800A6AE4
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6AE8
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6AEC
  c->lr=0x800A6AF4u; f_801017C0(c); // 800A6AF0
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A6AF4
  c->lr=0x800A6AFCu; f_80107F60(c); // 800A6AF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6AFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6B00
  c->lr=c->r[0]; // 800A6B04
  c->r[1]=c->r[1]+0x00000010u; // 800A6B08
  return; // 800A6B0C
}

// fn_800A6B10
void f_800A6B10(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800A6B10
  W8(c->r[3]+0x00000044u,c->r[0]); // 800A6B14
  W8(c->r[3]+0x00000045u,c->r[0]); // 800A6B18
  return; // 800A6B1C
}

// fn_800A6B20
void f_800A6B20(Ctx* __restrict c) {
  return; // 800A6B20
}

// fn_800A6B30
void f_800A6B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6B30
  c->r[0]=c->lr; // 800A6B34
  {uint32_t ea=c->r[2]+0xFFFFA538u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A6B38
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A6B3C
  c->r[5]=c->r[1]+0x00000008u; // 800A6B40
  c->r[6]=c->r[1]+0x00000020u; // 800A6B44
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800A6B48
  c->r[31]=0u+0x80210000u; // 800A6B4C
  c->r[31]=c->r[31]+0xFFFFAFB8u; // 800A6B50
  W32(c->r[1]+0x00000048u,c->r[30]); // 800A6B54
  c->r[30]=0u+0x00000000u; // 800A6B58
  W32(c->r[1]+0x00000044u,c->r[29]); // 800A6B5C
  c->r[29]=c->r[4]|c->r[4]; // 800A6B60
  c->r[4]=c->r[1]+0x00000014u; // 800A6B64
  W32(c->r[1]+0x00000040u,c->r[28]); // 800A6B68
  c->r[28]=c->r[3]|c->r[3]; // 800A6B6C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6B70
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6B74
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[0]); // 800A6B78
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A6B7C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6B80
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[1]); // 800A6B84
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 800A6B88
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[0]); // 800A6B8C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 800A6B90
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6B94
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A6B98
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A6B9C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6BA0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A6BA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A6BA8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6BAC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A6BB0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6BB4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A6BB8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6BBC
  c->r[3]=c->r[29]|c->r[29]; // 800A6BC0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A6BC4
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A6BC8
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A6BCC
  c->ctr=c->r[12]; // 800A6BD0
  if (true) { c->lr=0x800A6BD8u; dispatch(c,c->ctr); } // 800A6BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800A6BD8
  if (crb(c,2)) { goto L_800A6C44; } // 800A6BDC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6BE0
  c->r[0]=0u+0x00000001u; // 800A6BE4
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A6BE8
  c->r[30]=0u+0x00000001u; // 800A6BEC
  {uint32_t ea=c->r[28]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6BF0
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6BF4
  {uint32_t ea=c->r[28]+0x00000030u; WF32(ea,c->f[0]);} // 800A6BF8
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6BFC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6C00
  {uint32_t ea=c->r[28]+0x00000034u; WF32(ea,c->f[0]);} // 800A6C04
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6C08
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A6C0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A6C10
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800A6C14
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A6C18
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 800A6C1C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6C20
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A6C24
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A6C28
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[1]);} // 800A6C2C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6C30
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A6C34
  W8(c->r[28]+0x00000045u,c->r[0]); // 800A6C38
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A6C3C
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 800A6C40
L_800A6C44:;
  c->r[5]=0u+0x80210000u; // 800A6C44
  {uint32_t ea=c->r[2]+0xFFFFA58Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6C48
  c->r[5]=c->r[5]+0xFFFFAFB8u; // 800A6C4C
  {uint32_t ea=c->r[28]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A6C50
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6C54
  c->r[3]=c->r[29]|c->r[29]; // 800A6C58
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6C5C
  c->r[4]=c->r[1]+0x00000014u; // 800A6C60
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[0]); // 800A6C64
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6C68
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800A6C6C
  c->r[5]=c->r[1]+0x00000020u; // 800A6C70
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800A6C74
  {uint32_t ea=c->r[2]+0xFFFFA590u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6C78
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[5]); // 800A6C7C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800A6C80
  {uint32_t ea=c->r[28]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6C84
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 800A6C88
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800A6C8C
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6C90
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A6C94
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A6C98
  c->r[12]=R32(c->r[29]+0x00000000u); // 800A6C9C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800A6CA0
  c->ctr=c->r[12]; // 800A6CA4
  if (true) { c->lr=0x800A6CACu; dispatch(c,c->ctr); } // 800A6CA8
  cmps(c,0,(int32_t)c->r[3],0); // 800A6CAC
  if (crb(c,2)) { goto L_800A6D00; } // 800A6CB0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800A6CB4
  c->r[0]=0u+0x00000001u; // 800A6CB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6CBC
  c->r[30]=0u+0x00000001u; // 800A6CC0
  {uint32_t ea=c->r[28]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6CC4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[0]); // 800A6CC8
  {uint32_t ea=c->r[28]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6CCC
  {uint32_t ea=c->r[28]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A6CD0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 800A6CD4
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[2]);} // 800A6CD8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A6CDC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 800A6CE0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 800A6CE4
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[1]);} // 800A6CE8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A6CEC
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 800A6CF0
  W8(c->r[28]+0x00000044u,c->r[0]); // 800A6CF4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800A6CF8
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 800A6CFC
L_800A6D00:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6D00
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800A6D04
  c->r[30]=R32(c->r[1]+0x00000048u); // 800A6D08
  c->r[29]=R32(c->r[1]+0x00000044u); // 800A6D0C
  c->r[28]=R32(c->r[1]+0x00000040u); // 800A6D10
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A6D14
  c->lr=c->r[0]; // 800A6D18
  c->r[1]=c->r[1]+0x00000050u; // 800A6D1C
  return; // 800A6D20
}

// fn_800A6D30
void f_800A6D30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6D30
  c->r[0]=c->lr; // 800A6D34
  cmps(c,0,(int32_t)c->r[3],0); // 800A6D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6D40
  c->r[31]=c->r[4]|c->r[4]; // 800A6D44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6D48
  c->r[30]=c->r[3]|c->r[3]; // 800A6D4C
  if (crb(c,2)) { goto L_800A6D9C; } // 800A6D50
  c->r[4]=addc(c,c->r[3],0x00000010u,0); cr0(c,c->r[4]); // 800A6D54
  if (crb(c,2)) { goto L_800A6D80; } // 800A6D58
  if (crb(c,2)) { goto L_800A6D80; } // 800A6D5C
  if (crb(c,2)) { goto L_800A6D80; } // 800A6D60
  c->r[3]=R32(c->r[4]+0x00000000u); // 800A6D64
  cmps(c,0,(int32_t)c->r[3],0); // 800A6D68
  if (crb(c,2)) { goto L_800A6D80; } // 800A6D6C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800A6D70
  c->r[0]=c->r[0]-c->r[0]; // 800A6D74
  W32(c->r[4]+0x00000004u,c->r[0]); // 800A6D78
  c->lr=0x800A6D80u; f_800D93B0(c); // 800A6D7C
L_800A6D80:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6D80
  c->r[4]=0u+0x00000000u; // 800A6D84
  c->lr=0x800A6D8Cu; f_80008970(c); // 800A6D88
  cmps(c,0,(int32_t)c->r[31],0); // 800A6D8C
  if (!crb(c,1)) { goto L_800A6D9C; } // 800A6D90
  c->r[3]=c->r[30]|c->r[30]; // 800A6D94
  c->lr=0x800A6D9Cu; f_800D93B0(c); // 800A6D98
L_800A6D9C:;
  c->r[3]=c->r[30]|c->r[30]; // 800A6D9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A6DA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A6DA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A6DA8
  c->lr=c->r[0]; // 800A6DAC
  c->r[1]=c->r[1]+0x00000010u; // 800A6DB0
  return; // 800A6DB4
}

// fn_800A6DC0
void f_800A6DC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A6DC0
  f_800A6B30(c); return; // 800A6DC4
}

// fn_800A6DD0
void f_800A6DD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A6DD0
  f_800A6B20(c); return; // 800A6DD4
}

// fn_800A6DE0
void f_800A6DE0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A6DE0
  f_800A6B10(c); return; // 800A6DE4
}

// fn_800A6DF0
void f_800A6DF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A6DF0
  f_800A6330(c); return; // 800A6DF4
}

// fn_800A6E00
void f_800A6E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6E00
  c->r[0]=c->lr; // 800A6E04
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A6E08
  c->r[11]=c->r[1]+0x00000020u; // 800A6E0C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800A6E10
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800A6E14
  c->lr=0x800A6E1Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A6E18
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 800A6E1C
  c->r[26]=c->r[3]|c->r[3]; // 800A6E20
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800A6E24
  W32(c->r[3]+0x00000008u,c->r[4]); // 800A6E28
  c->r[3]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800A6E2C
  c->lr=0x800A6E34u; f_800D9140(c); // 800A6E30
  c->r[30]=0u+0x80220000u; // 800A6E34
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 800A6E38
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A6E3C
  c->r[30]=c->r[30]+0xFFFFA6ACu; // 800A6E40
  c->r[27]=0u+0x00000000u; // 800A6E44
  c->r[28]=0u+0x00000000u; // 800A6E48
  c->r[31]=0u+0x00000000u; // 800A6E4C
  goto L_800A6EC4; // 800A6E50
L_800A6E54:;
  c->r[3]=0u+0x00000060u; // 800A6E54
  c->lr=0x800A6E5Cu; f_800D8ED0(c); // 800A6E58
  cmps(c,0,(int32_t)c->r[3],0); // 800A6E5C
  c->r[29]=c->r[3]|c->r[3]; // 800A6E60
  if (crb(c,2)) { goto L_800A6E9C; } // 800A6E64
  c->r[4]=0u+0x00000001u; // 800A6E68
  c->lr=0x800A6E70u; f_80008EA0(c); // 800A6E6C
  c->r[3]=c->r[29]+0x00000038u; // 800A6E70
  c->r[4]=0u+0x00000001u; // 800A6E74
  c->lr=0x800A6E7Cu; f_80008FE0(c); // 800A6E78
  W32(c->r[29]+0x00000000u,c->r[30]); // 800A6E7C
  c->r[0]=c->r[30]+0x00000018u; // 800A6E80
  W32(c->r[29]+0x00000038u,c->r[0]); // 800A6E84
  W8(c->r[29]+0x0000004Cu,c->r[31]); // 800A6E88
  W32(c->r[29]+0x0000005Cu,c->r[31]); // 800A6E8C
  W32(c->r[29]+0x00000058u,c->r[31]); // 800A6E90
  W32(c->r[29]+0x00000054u,c->r[31]); // 800A6E94
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[31]);} // 800A6E98
L_800A6E9C:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800A6E9C
  c->r[27]=c->r[27]+0x00000001u; // 800A6EA0
  W32(c->r[3]+c->r[28],c->r[29]); // 800A6EA4
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800A6EA8
  c->r[3]=R32(c->r[3]+c->r[28]); // 800A6EAC
  W8(c->r[3]+0x00000008u,c->r[31]); // 800A6EB0
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800A6EB4
  c->r[3]=R32(c->r[3]+c->r[28]); // 800A6EB8
  c->r[28]=c->r[28]+0x00000004u; // 800A6EBC
  W8(c->r[3]+0x00000040u,c->r[31]); // 800A6EC0
L_800A6EC4:;
  c->r[0]=R32(c->r[26]+0x00000008u); // 800A6EC4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800A6EC8
  if (crb(c,0)) { IRQCHK(c); goto L_800A6E54; } // 800A6ECC
  c->r[4]=0u+0x00000000u; // 800A6ED0
  c->r[0]=0u+0x00000001u; // 800A6ED4
  W8(c->r[26]+0x00000010u,c->r[4]); // 800A6ED8
  c->r[3]=c->r[26]|c->r[26]; // 800A6EDC
  W8(c->r[26]+0x00000011u,c->r[0]); // 800A6EE0
  W8(c->r[26]+0x00000012u,c->r[4]); // 800A6EE4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800A6EE8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800A6EEC
  c->r[11]=c->r[1]+0x00000020u; // 800A6EF0
  c->lr=0x800A6EF8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A6EF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A6EF8
  c->lr=c->r[0]; // 800A6EFC
  c->r[1]=c->r[1]+0x00000030u; // 800A6F00
  return; // 800A6F04
}

// fn_800A6F10
void f_800A6F10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6F10
  c->r[0]=c->lr; // 800A6F14
  cmps(c,0,(int32_t)c->r[3],0); // 800A6F18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A6F1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A6F20
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A6F24
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A6F28
  c->r[29]=c->r[4]|c->r[4]; // 800A6F2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800A6F30
  c->r[28]=c->r[3]|c->r[3]; // 800A6F34
  if (crb(c,2)) { goto L_800A6F98; } // 800A6F38
  c->r[30]=0u+0x00000000u; // 800A6F3C
  c->r[31]=0u+0x00000000u; // 800A6F40
  goto L_800A6F74; // 800A6F44
L_800A6F48:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800A6F48
  c->r[3]=R32(c->r[3]+c->r[31]); // 800A6F4C
  cmps(c,0,(int32_t)c->r[3],0); // 800A6F50
  if (crb(c,2)) { goto L_800A6F6C; } // 800A6F54
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A6F58
  c->r[4]=0u+0x00000001u; // 800A6F5C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A6F60
  c->ctr=c->r[12]; // 800A6F64
  if (true) { c->lr=0x800A6F6Cu; dispatch(c,c->ctr); } // 800A6F68
L_800A6F6C:;
  c->r[31]=c->r[31]+0x00000004u; // 800A6F6C
  c->r[30]=c->r[30]+0x00000001u; // 800A6F70
L_800A6F74:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800A6F74
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800A6F78
  if (crb(c,0)) { IRQCHK(c); goto L_800A6F48; } // 800A6F7C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800A6F80
  c->lr=0x800A6F88u; f_800D9450(c); // 800A6F84
  cmps(c,0,(int32_t)c->r[29],0); // 800A6F88
  if (!crb(c,1)) { goto L_800A6F98; } // 800A6F8C
  c->r[3]=c->r[28]|c->r[28]; // 800A6F90
  c->lr=0x800A6F98u; f_800D93B0(c); // 800A6F94
L_800A6F98:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A6F98
  c->r[3]=c->r[28]|c->r[28]; // 800A6F9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A6FA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A6FA4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800A6FA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A6FAC
  c->lr=c->r[0]; // 800A6FB0
  c->r[1]=c->r[1]+0x00000020u; // 800A6FB4
  return; // 800A6FB8
}

// fn_800A6FC0
void f_800A6FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A6FC0
  c->r[0]=c->lr; // 800A6FC4
  cmps(c,0,(int32_t)c->r[3],0); // 800A6FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A6FCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A6FD0
  c->r[31]=c->r[4]|c->r[4]; // 800A6FD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A6FD8
  c->r[30]=c->r[3]|c->r[3]; // 800A6FDC
  if (crb(c,2)) { goto L_800A700C; } // 800A6FE0
  c->r[4]=0u+0x00000000u; // 800A6FE4
  c->r[3]=c->r[3]+0x00000038u; // 800A6FE8
  c->lr=0x800A6FF0u; f_80009030(c); // 800A6FEC
  c->r[3]=c->r[30]|c->r[30]; // 800A6FF0
  c->r[4]=0u+0x00000000u; // 800A6FF4
  c->lr=0x800A6FFCu; f_80008F30(c); // 800A6FF8
  cmps(c,0,(int32_t)c->r[31],0); // 800A6FFC
  if (!crb(c,1)) { goto L_800A700C; } // 800A7000
  c->r[3]=c->r[30]|c->r[30]; // 800A7004
  c->lr=0x800A700Cu; f_800D93B0(c); // 800A7008
L_800A700C:;
  c->r[3]=c->r[30]|c->r[30]; // 800A700C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A7010
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A7014
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7018
  c->lr=c->r[0]; // 800A701C
  c->r[1]=c->r[1]+0x00000010u; // 800A7020
  return; // 800A7024
}

// fn_800A7030
void f_800A7030(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000010u); // 800A7030
  c->r[9]=0u+0x00000000u; // 800A7034
  cmps(c,0,(int32_t)c->r[0],0); // 800A7038
  if (crb(c,2)) { goto L_800A7090; } // 800A703C
  c->r[10]=0u+0x00000000u; // 800A7040
  c->r[6]=0u+0x00000000u; // 800A7044
  goto L_800A7084; // 800A7048
  c->r[0]=c->r[0]|0x00000000u; // 800A704C
L_800A7050:;
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 800A7050
  c->r[8]=R32(c->r[7]+c->r[6]); // 800A7054
  c->r[0]=R8(c->r[8]+0x00000040u); // 800A7058
  cmps(c,0,(int32_t)c->r[0],0); // 800A705C
  if (crb(c,2)) { goto L_800A707C; } // 800A7060
  c->r[7]=R32(c->r[8]+0x00000058u); // 800A7064
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[9]); // 800A7068
  if (!crb(c,1)) { goto L_800A707C; } // 800A706C
  c->r[0]=R32(c->r[8]+0x00000054u); // 800A7070
  c->r[9]=c->r[7]|c->r[7]; // 800A7074
  W32(c->r[4]+0x00000000u,c->r[0]); // 800A7078
L_800A707C:;
  c->r[6]=c->r[6]+0x00000004u; // 800A707C
  c->r[10]=c->r[10]+0x00000001u; // 800A7080
L_800A7084:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A7084
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 800A7088
  if (crb(c,0)) { IRQCHK(c); goto L_800A7050; } // 800A708C
L_800A7090:;
  W32(c->r[5]+0x00000000u,c->r[9]); // 800A7090
  return; // 800A7094
}

// fn_800A70A0
void f_800A70A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A70A0
  c->r[0]=c->lr; // 800A70A4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800A70A8
  c->r[11]=c->r[1]+0x00000060u; // 800A70AC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800A70B0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800A70B4
  c->lr=0x800A70BCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A70B8
  c->r[5]=0u+0x80210000u; // 800A70BC
  {uint32_t ea=c->r[2]+0xFFFFA598u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A70C0
  c->r[24]=c->r[3]|c->r[3]; // 800A70C4
  c->r[25]=c->r[4]|c->r[4]; // 800A70C8
  c->r[28]=c->r[5]+0xFFFFAFB8u; // 800A70CC
  c->r[26]=0u+0x00000000u; // 800A70D0
  c->r[27]=0u+0x00000000u; // 800A70D4
  c->r[30]=0u+0x80220000u; // 800A70D8
  c->r[31]=0u+0x00000001u; // 800A70DC
  c->r[29]=0u+0x00000000u; // 800A70E0
  goto L_800A7254; // 800A70E4
L_800A70E8:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800A70E8
  c->r[3]=R32(c->r[3]+c->r[27]); // 800A70EC
  W8(c->r[3]+0x00000008u,c->r[29]); // 800A70F0
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800A70F4
  c->r[3]=R32(c->r[3]+c->r[27]); // 800A70F8
  W8(c->r[3]+0x00000040u,c->r[29]); // 800A70FC
  c->r[0]=R8(c->r[24]+0x00000010u); // 800A7100
  cmps(c,0,(int32_t)c->r[0],0); // 800A7104
  if (crb(c,2)) { goto L_800A724C; } // 800A7108
  c->r[5]=c->r[26]|c->r[26]; // 800A710C
  c->r[3]=c->r[1]+0x00000010u; // 800A7110
  c->r[4]=c->r[30]+0xFFFFA6A0u; // 800A7114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A7118
  c->lr=0x800A7120u; f_801DB784(c); // 800A711C
  c->r[3]=c->r[25]|c->r[25]; // 800A7120
  c->r[4]=c->r[1]+0x00000010u; // 800A7124
  c->r[5]=c->r[1]+0x00000008u; // 800A7128
  c->lr=0x800A7130u; f_80101C20(c); // 800A712C
  cmps(c,0,(int32_t)c->r[3],0); // 800A7130
  if (crb(c,2)) { goto L_800A724C; } // 800A7134
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A7138
  c->r[3]=c->r[25]|c->r[25]; // 800A713C
  c->lr=0x800A7144u; f_80101D60(c); // 800A7140
  c->r[0]=R8(c->r[3]+0x00000000u); // 800A7144
  cmps(c,0,(int32_t)c->r[0],0); // 800A7148
  if (crb(c,2)) { goto L_800A724C; } // 800A714C
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 800A7150
  c->r[3]=c->r[25]|c->r[25]; // 800A7154
  c->r[4]=R32(c->r[4]+c->r[27]); // 800A7158
  W8(c->r[4]+0x00000040u,c->r[31]); // 800A715C
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 800A7160
  c->r[0]=R8(c->r[24]+0x00000011u); // 800A7164
  c->r[4]=R32(c->r[4]+c->r[27]); // 800A7168
  W8(c->r[4]+0x00000008u,c->r[0]); // 800A716C
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 800A7170
  c->r[0]=R8(c->r[24]+0x00000012u); // 800A7174
  c->r[4]=R32(c->r[4]+c->r[27]); // 800A7178
  W8(c->r[4]+0x0000004Cu,c->r[0]); // 800A717C
  c->r[5]=R32(c->r[24]+0x0000000Cu); // 800A7180
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A7184
  c->r[23]=R32(c->r[5]+c->r[27]); // 800A7188
  c->lr=0x800A7190u; f_80101DA0(c); // 800A718C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7190
  c->r[3]=c->r[25]|c->r[25]; // 800A7194
  {uint32_t ea=c->r[23]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A7198
  c->r[5]=R32(c->r[24]+0x0000000Cu); // 800A719C
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A71A0
  c->r[23]=R32(c->r[5]+c->r[27]); // 800A71A4
  c->lr=0x800A71ACu; f_80101DA0(c); // 800A71A8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A71AC
  c->r[3]=c->r[25]|c->r[25]; // 800A71B0
  {uint32_t ea=c->r[23]+0x00000010u; WF32(ea,c->f[0]);} // 800A71B4
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 800A71B8
  c->r[4]=R32(c->r[4]+c->r[27]); // 800A71BC
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[31]);} // 800A71C0
  c->r[5]=R32(c->r[24]+0x0000000Cu); // 800A71C4
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A71C8
  c->r[23]=R32(c->r[5]+c->r[27]); // 800A71CC
  c->lr=0x800A71D4u; f_80101DA0(c); // 800A71D0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A71D4
  c->r[3]=c->r[25]|c->r[25]; // 800A71D8
  {uint32_t ea=c->r[23]+0x00000018u; WF32(ea,c->f[0]);} // 800A71DC
  c->r[5]=R32(c->r[24]+0x0000000Cu); // 800A71E0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A71E4
  c->r[23]=R32(c->r[5]+c->r[27]); // 800A71E8
  c->lr=0x800A71F0u; f_80101DA0(c); // 800A71EC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A71F0
  {uint32_t ea=c->r[23]+0x00000050u; WF32(ea,c->f[0]);} // 800A71F4
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800A71F8
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A71FC
  c->r[3]=R32(c->r[3]+c->r[27]); // 800A7200
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A7204
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7208
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 800A720C
  {uint32_t ea=c->r[28]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7210
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 800A7214
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800A7218
  c->r[3]=R32(c->r[3]+c->r[27]); // 800A721C
  W32(c->r[3]+0x00000028u,c->r[31]); // 800A7220
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800A7224
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7228
  c->r[3]=R32(c->r[3]+c->r[27]); // 800A722C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7230
  fcmp(c,0,c->f[1],c->f[0]); // 800A7234
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800A7238
  if (!crb(c,2)) { goto L_800A724C; } // 800A723C
  {uint32_t ea=c->r[24]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7240
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A7244
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 800A7248
L_800A724C:;
  c->r[27]=c->r[27]+0x00000004u; // 800A724C
  c->r[26]=c->r[26]+0x00000001u; // 800A7250
L_800A7254:;
  c->r[0]=R32(c->r[24]+0x00000008u); // 800A7254
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800A7258
  if (crb(c,0)) { IRQCHK(c); goto L_800A70E8; } // 800A725C
  c->r[11]=c->r[1]+0x00000060u; // 800A7260
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800A7264
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800A7268
  c->lr=0x800A7270u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A726C
  c->r[0]=R32(c->r[1]+0x00000074u); // 800A7270
  c->lr=c->r[0]; // 800A7274
  c->r[1]=c->r[1]+0x00000070u; // 800A7278
  return; // 800A727C
}

// fn_800A7280
void f_800A7280(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800A7280
  W32(c->r[3]+0x00000058u,c->r[0]); // 800A7284
  W32(c->r[3]+0x00000054u,c->r[0]); // 800A7288
  return; // 800A728C
}

// fn_800A7290
void f_800A7290(Ctx* __restrict c) {
  return; // 800A7290
}

// fn_800A72A0
void f_800A72A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A72A0
  c->r[0]=c->lr; // 800A72A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A72A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A72AC
  c->r[31]=c->r[4]|c->r[4]; // 800A72B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A72B4
  c->r[30]=c->r[3]|c->r[3]; // 800A72B8
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A72BC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A72C0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A72C4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A72C8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A72CC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A72D0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A72D4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800A72D8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A72DC
  c->r[3]=c->r[1]+0x00000008u; // 800A72E0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A72E4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A72E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800A72EC
  c->lr=0x800A72F4u; f_8016B5D0(c); // 800A72F0
  {uint32_t ea=c->r[30]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A72F4
  {uint32_t ea=c->r[31]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A72F8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800A72FC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800A7300
  fcmp(c,0,c->f[1],c->f[0]); // 800A7304
  if (!crb(c,0)) { goto L_800A7340; } // 800A7308
  c->r[0]=R8(c->r[30]+0x0000004Cu); // 800A730C
  cmps(c,0,(int32_t)c->r[0],0); // 800A7310
  if (crb(c,2)) { goto L_800A7324; } // 800A7314
  c->r[0]=0u+0xFFFFFFFFu; // 800A7318
  W32(c->r[31]+0x00000028u,c->r[0]); // 800A731C
  goto L_800A7338; // 800A7320
L_800A7324:;
  c->r[3]=R32(c->r[30]+0x00000058u); // 800A7324
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 800A7328
  W32(c->r[30]+0x00000054u,c->r[0]); // 800A732C
  c->r[0]=c->r[3]+0x00000001u; // 800A7330
  W32(c->r[30]+0x00000058u,c->r[0]); // 800A7334
L_800A7338:;
  c->r[3]=0u+0x00000001u; // 800A7338
  goto L_800A7344; // 800A733C
L_800A7340:;
  c->r[3]=0u+0x00000000u; // 800A7340
L_800A7344:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A7344
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A7348
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A734C
  c->lr=c->r[0]; // 800A7350
  c->r[1]=c->r[1]+0x00000020u; // 800A7354
  return; // 800A7358
}

// fn_800A7360
void f_800A7360(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x0000005Cu); // 800A7360
  c->r[0]=c->r[4]+0x00000001u; // 800A7364
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800A7368
  return; // 800A736C
}

// fn_800A7370
void f_800A7370(Ctx* __restrict c) {
  return; // 800A7370
}

// fn_800A7380
void f_800A7380(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800A7380
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800A7384
  return; // 800A7388
}

// fn_800A7390
void f_800A7390(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFC8u; // 800A7390
  f_800A72A0(c); return; // 800A7394
}

// fn_800A73A0
void f_800A73A0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFC8u; // 800A73A0
  f_800A7290(c); return; // 800A73A4
}

// fn_800A73B0
void f_800A73B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFC8u; // 800A73B0
  f_800A7280(c); return; // 800A73B4
}

// fn_800A73C0
void f_800A73C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFC8u; // 800A73C0
  f_800A6FC0(c); return; // 800A73C4
}

// fn_800A73D0
void f_800A73D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A73D0
  c->r[0]=c->lr; // 800A73D4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A73D8
  c->r[11]=c->r[1]+0x00000050u; // 800A73DC
  c->lr=0x800A73E4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A73E0
  c->r[26]=c->r[4]|c->r[4]; // 800A73E4
  c->r[31]=c->r[3]|c->r[3]; // 800A73E8
  c->r[4]=0u+0x00000001u; // 800A73EC
  c->lr=0x800A73F4u; f_8000BF70(c); // 800A73F0
  c->r[3]=c->r[31]+0x00000010u; // 800A73F4
  c->lr=0x800A73FCu; f_80008CE0(c); // 800A73F8
  c->r[3]=0u+0x80220000u; // 800A73FC
  {uint32_t ea=c->r[2]+0xFFFFA5A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7400
  c->r[3]=c->r[3]+0xFFFFA868u; // 800A7404
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7408
  c->r[30]=0u+0x00000000u; // 800A740C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A7410
  c->r[0]=c->r[3]+0x00000014u; // 800A7414
  c->r[29]=0u+0x00000000u; // 800A7418
  W32(c->r[31]+0x00000010u,c->r[0]); // 800A741C
  c->r[3]=0u+0x00000118u; // 800A7420
  W32(c->r[31]+0x0000002Cu,c->r[26]); // 800A7424
  W32(c->r[31]+0x000000A4u,c->r[30]); // 800A7428
  W32(c->r[31]+0x000000A8u,c->r[30]); // 800A742C
  W32(c->r[31]+0x000000ACu,c->r[30]); // 800A7430
  W32(c->r[31]+0x000000B0u,c->r[30]); // 800A7434
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[1]);} // 800A7438
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[1]);} // 800A743C
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 800A7440
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[1]);} // 800A7444
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 800A7448
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[0]);} // 800A744C
  c->lr=0x800A7454u; f_800D8ED0(c); // 800A7450
  cmps(c,0,(int32_t)c->r[3],0); // 800A7454
  c->r[28]=c->r[3]|c->r[3]; // 800A7458
  if (crb(c,2)) { goto L_800A74D0; } // 800A745C
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A7460
  c->r[27]=c->r[13]+0xFFFF9F80u; // 800A7464
  c->r[26]=c->r[1]+0x00000024u; // 800A7468
  c->r[29]=R32(c->r[3]+0x00000118u); // 800A746C
  c->r[3]=c->r[27]|c->r[27]; // 800A7470
  W32(c->r[1]+0x00000024u,c->r[30]); // 800A7474
  W32(c->r[1]+0x00000028u,c->r[30]); // 800A7478
  W32(c->r[1]+0x0000002Cu,c->r[30]); // 800A747C
  c->lr=0x800A7484u; f_801D4D44(c); // 800A7480
  c->r[30]=c->r[3]|c->r[3]; // 800A7484
  c->r[3]=c->r[26]|c->r[26]; // 800A7488
  c->r[4]=c->r[30]|c->r[30]; // 800A748C
  c->lr=0x800A7494u; f_800081B0(c); // 800A7490
  c->r[0]=R8(c->r[1]+0x00000014u); // 800A7494
  c->r[3]=c->r[26]|c->r[26]; // 800A7498
  W8(c->r[1]+0x00000010u,c->r[0]); // 800A749C
  c->r[6]=c->r[27]|c->r[27]; // 800A74A0
  c->r[7]=c->r[27]+c->r[30]; // 800A74A4
  c->r[8]=c->r[1]+0x00000010u; // 800A74A8
  c->r[4]=0u+0x00000000u; // 800A74AC
  c->r[5]=0u+0x00000000u; // 800A74B0
  c->lr=0x800A74B8u; f_80008370(c); // 800A74B4
  c->r[4]=c->r[29]|c->r[29]; // 800A74B8
  c->r[3]=c->r[28]|c->r[28]; // 800A74BC
  c->r[5]=c->r[26]|c->r[26]; // 800A74C0
  c->r[29]=0u+0x00000001u; // 800A74C4
  c->lr=0x800A74CCu; f_800FE130(c); // 800A74C8
  c->r[28]=c->r[3]|c->r[3]; // 800A74CC
L_800A74D0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A74D0
  W32(c->r[31]+0x000000C0u,c->r[28]); // 800A74D4
  if (crb(c,2)) { goto L_800A74F0; } // 800A74D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A74DC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A74E0
  if (crb(c,2)) { goto L_800A74F0; } // 800A74E4
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800A74E8
  c->lr=0x800A74F0u; f_800D93B0(c); // 800A74EC
L_800A74F0:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 800A74F0
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A74F4
  c->lr=0x800A74FCu; f_80101610(c); // 800A74F8
  c->r[3]=R32(c->r[31]+0x000000C0u); // 800A74FC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7500
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7504
  c->lr=0x800A750Cu; f_801017C0(c); // 800A7508
  c->r[3]=R32(c->r[31]+0x000000C0u); // 800A750C
  c->r[4]=c->r[13]+0xFFFF9F88u; // 800A7510
  c->r[5]=0u+0x00000000u; // 800A7514
  c->lr=0x800A751Cu; f_80100840(c); // 800A7518
  c->r[3]=R32(c->r[31]+0x000000C0u); // 800A751C
  c->lr=0x800A7524u; f_80101780(c); // 800A7520
  c->r[29]=0u+0x00000000u; // 800A7524
  c->r[3]=0u+0x00000118u; // 800A7528
  c->lr=0x800A7530u; f_800D8ED0(c); // 800A752C
  cmps(c,0,(int32_t)c->r[3],0); // 800A7530
  c->r[26]=c->r[3]|c->r[3]; // 800A7534
  if (crb(c,2)) { goto L_800A75B0; } // 800A7538
  c->r[3]=R32(c->r[13]+0xFFFFADC0u); // 800A753C
  c->r[28]=c->r[13]+0xFFFF9F80u; // 800A7540
  c->r[0]=0u+0x00000000u; // 800A7544
  c->r[29]=c->r[1]+0x00000018u; // 800A7548
  c->r[27]=R32(c->r[3]+0x00000118u); // 800A754C
  c->r[3]=c->r[28]|c->r[28]; // 800A7550
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A7554
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A7558
  W32(c->r[1]+0x00000020u,c->r[0]); // 800A755C
  c->lr=0x800A7564u; f_801D4D44(c); // 800A7560
  c->r[30]=c->r[3]|c->r[3]; // 800A7564
  c->r[3]=c->r[29]|c->r[29]; // 800A7568
  c->r[4]=c->r[30]|c->r[30]; // 800A756C
  c->lr=0x800A7574u; f_800081B0(c); // 800A7570
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800A7574
  c->r[3]=c->r[29]|c->r[29]; // 800A7578
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A757C
  c->r[6]=c->r[28]|c->r[28]; // 800A7580
  c->r[7]=c->r[28]+c->r[30]; // 800A7584
  c->r[8]=c->r[1]+0x00000008u; // 800A7588
  c->r[4]=0u+0x00000000u; // 800A758C
  c->r[5]=0u+0x00000000u; // 800A7590
  c->lr=0x800A7598u; f_80008370(c); // 800A7594
  c->r[5]=c->r[29]|c->r[29]; // 800A7598
  c->r[3]=c->r[26]|c->r[26]; // 800A759C
  c->r[4]=c->r[27]|c->r[27]; // 800A75A0
  c->r[29]=0u+0x00000001u; // 800A75A4
  c->lr=0x800A75ACu; f_800FE130(c); // 800A75A8
  c->r[26]=c->r[3]|c->r[3]; // 800A75AC
L_800A75B0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A75B0
  W32(c->r[31]+0x000000C4u,c->r[26]); // 800A75B4
  if (crb(c,2)) { goto L_800A75D0; } // 800A75B8
  c->r[0]=R32(c->r[1]+0x00000018u); // 800A75BC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A75C0
  if (crb(c,2)) { goto L_800A75D0; } // 800A75C4
  c->r[3]=R32(c->r[1]+0x00000020u); // 800A75C8
  c->lr=0x800A75D0u; f_800D93B0(c); // 800A75CC
L_800A75D0:;
  c->r[3]=R32(c->r[31]+0x000000C4u); // 800A75D0
  {uint32_t ea=c->r[2]+0xFFFFA5A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A75D4
  c->lr=0x800A75DCu; f_80101610(c); // 800A75D8
  c->r[3]=R32(c->r[31]+0x000000C4u); // 800A75DC
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A75E0
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A75E4
  c->lr=0x800A75ECu; f_801017C0(c); // 800A75E8
  c->r[3]=R32(c->r[31]+0x000000C4u); // 800A75EC
  c->r[4]=c->r[13]+0xFFFF9F90u; // 800A75F0
  c->r[5]=0u+0x00000000u; // 800A75F4
  c->lr=0x800A75FCu; f_80100840(c); // 800A75F8
  c->r[3]=R32(c->r[31]+0x000000C4u); // 800A75FC
  c->lr=0x800A7604u; f_80101780(c); // 800A7600
  c->r[12]=R32(c->r[31]+0x00000000u); // 800A7604
  c->r[3]=c->r[31]|c->r[31]; // 800A7608
  c->r[12]=R32(c->r[12]+0x00000034u); // 800A760C
  c->ctr=c->r[12]; // 800A7610
  if (true) { c->lr=0x800A7618u; dispatch(c,c->ctr); } // 800A7614
  c->r[10]=0u+0x80220000u; // 800A7618
  c->r[6]=0u+0x80210000u; // 800A761C
  c->r[10]=c->r[10]+0xFFFFA710u; // 800A7620
  c->r[7]=c->r[31]+0x000000C8u; // 800A7624
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x00000024u); // 800A7628
  c->r[0]=0u+0x00000008u; // 800A762C
  W16(c->r[31]+0x000000ECu,c->r[3]); // 800A7630
  c->r[6]=c->r[6]+0xFFFFAFB8u; // 800A7634
  c->r[8]=R32(c->r[31]+0x0000002Cu); // 800A7638
  c->r[3]=c->r[31]+0x0000005Cu; // 800A763C
  c->r[5]=R16(c->r[10]+0x00000026u); // 800A7640
  c->r[4]=0u+0x00000000u; // 800A7644
  W16(c->r[31]+0x000000EEu,c->r[5]); // 800A7648
  c->r[5]=0u+0x00000040u; // 800A764C
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7650
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x0000004Cu); // 800A7654
  W16(c->r[31]+0x00000114u,c->r[9]); // 800A7658
  c->r[9]=R16(c->r[10]+0x0000004Eu); // 800A765C
  W16(c->r[31]+0x00000116u,c->r[9]); // 800A7660
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x00000074u); // 800A7664
  W16(c->r[31]+0x0000013Cu,c->r[9]); // 800A7668
  c->r[9]=R16(c->r[10]+0x00000076u); // 800A766C
  W16(c->r[31]+0x0000013Eu,c->r[9]); // 800A7670
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x0000009Cu); // 800A7674
  W16(c->r[31]+0x00000164u,c->r[9]); // 800A7678
  c->r[9]=R16(c->r[10]+0x0000009Eu); // 800A767C
  W16(c->r[31]+0x00000166u,c->r[9]); // 800A7680
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x000000C4u); // 800A7684
  W16(c->r[31]+0x0000018Cu,c->r[9]); // 800A7688
  c->r[9]=R16(c->r[10]+0x000000C6u); // 800A768C
  W16(c->r[31]+0x0000018Eu,c->r[9]); // 800A7690
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x000000ECu); // 800A7694
  W16(c->r[31]+0x000001B4u,c->r[9]); // 800A7698
  c->r[9]=R16(c->r[10]+0x000000EEu); // 800A769C
  W16(c->r[31]+0x000001B6u,c->r[9]); // 800A76A0
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x00000114u); // 800A76A4
  W16(c->r[31]+0x000001DCu,c->r[9]); // 800A76A8
  c->r[9]=R16(c->r[10]+0x00000116u); // 800A76AC
  W16(c->r[31]+0x000001DEu,c->r[9]); // 800A76B0
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[10]+0x0000013Cu); // 800A76B4
  W16(c->r[31]+0x00000204u,c->r[9]); // 800A76B8
  c->r[9]=R16(c->r[10]+0x0000013Eu); // 800A76BC
  W16(c->r[31]+0x00000206u,c->r[9]); // 800A76C0
  W32(c->r[31]+0x00000208u,c->r[7]); // 800A76C4
  W32(c->r[31]+0x0000020Cu,c->r[0]); // 800A76C8
  c->r[7]=R32(c->r[8]+0x00000004u); // 800A76CC
  c->r[0]=c->r[7]+0x00000001u; // 800A76D0
  W32(c->r[8]+0x00000004u,c->r[0]); // 800A76D4
  {uint32_t ea=c->r[6]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A76D8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800A76DC
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A76E0
  {uint32_t ea=c->r[6]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A76E4
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[2]);} // 800A76E8
  {uint32_t ea=c->r[6]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A76EC
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[2]);} // 800A76F0
  {uint32_t ea=c->r[31]+0x00000054u; WF32(ea,c->f[1]);} // 800A76F4
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800A76F8
  c->lr=0x800A7700u; f_800046B4(c); // 800A76FC
  c->r[30]=0u+0x00000000u; // 800A7700
  c->r[3]=0u+0x80260000u; // 800A7704
  W32(c->r[31]+0x0000009Cu,c->r[30]); // 800A7708
  c->r[3]=c->r[3]+0xFFFF96F0u; // 800A770C
  W32(c->r[31]+0x000000A0u,c->r[30]); // 800A7710
  W32(c->r[31]+0x000000B4u,c->r[30]); // 800A7714
  W32(c->r[31]+0x000000B8u,c->r[30]); // 800A7718
  c->r[3]=R32(c->r[3]+0x0000244Cu); // 800A771C
  c->lr=0x800A7724u; f_8003A5E0(c); // 800A7720
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7724
  c->r[11]=c->r[1]+0x00000050u; // 800A7728
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 800A772C
  c->r[3]=c->r[31]|c->r[31]; // 800A7730
  W8(c->r[31]+0x0000000Cu,c->r[30]); // 800A7734
  c->lr=0x800A773Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A7738
  c->r[0]=R32(c->r[1]+0x00000054u); // 800A773C
  c->lr=c->r[0]; // 800A7740
  c->r[1]=c->r[1]+0x00000050u; // 800A7744
  return; // 800A7748
}

// fn_800A7750
void f_800A7750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7750
  c->r[0]=c->lr; // 800A7754
  cmps(c,0,(int32_t)c->r[3],0); // 800A7758
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A775C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A7760
  c->r[31]=c->r[4]|c->r[4]; // 800A7764
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A7768
  c->r[30]=c->r[3]|c->r[3]; // 800A776C
  if (crb(c,2)) { goto L_800A7830; } // 800A7770
  c->r[5]=R32(c->r[3]+0x000000C0u); // 800A7774
  c->r[4]=0u+0x80220000u; // 800A7778
  c->r[4]=c->r[4]+0xFFFFA868u; // 800A777C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A7780
  cmps(c,0,(int32_t)c->r[5],0); // 800A7784
  c->r[0]=c->r[4]+0x00000014u; // 800A7788
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A778C
  if (crb(c,2)) { goto L_800A77AC; } // 800A7790
  c->r[12]=R32(c->r[5]+0x00000000u); // 800A7794
  c->r[3]=c->r[5]|c->r[5]; // 800A7798
  c->r[4]=0u+0x00000001u; // 800A779C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A77A0
  c->ctr=c->r[12]; // 800A77A4
  if (true) { c->lr=0x800A77ACu; dispatch(c,c->ctr); } // 800A77A8
L_800A77AC:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 800A77AC
  cmps(c,0,(int32_t)c->r[3],0); // 800A77B0
  if (crb(c,2)) { goto L_800A77CC; } // 800A77B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A77B8
  c->r[4]=0u+0x00000001u; // 800A77BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A77C0
  c->ctr=c->r[12]; // 800A77C4
  if (true) { c->lr=0x800A77CCu; dispatch(c,c->ctr); } // 800A77C8
L_800A77CC:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A77CC
  c->r[0]=0u+0x00000000u; // 800A77D0
  W32(c->r[3]+0x00000010u,c->r[0]); // 800A77D4
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A77D8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800A77DC
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A77E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800A77E4
  if (!crb(c,2)) { goto L_800A7808; } // 800A77E8
  cmps(c,0,(int32_t)c->r[3],0); // 800A77EC
  if (crb(c,2)) { goto L_800A7808; } // 800A77F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A77F4
  c->r[4]=0u+0x00000001u; // 800A77F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A77FC
  c->ctr=c->r[12]; // 800A7800
  if (true) { c->lr=0x800A7808u; dispatch(c,c->ctr); } // 800A7804
L_800A7808:;
  c->r[3]=c->r[30]+0x00000010u; // 800A7808
  c->r[4]=0u+0x00000000u; // 800A780C
  c->lr=0x800A7814u; f_80008D40(c); // 800A7810
  c->r[3]=c->r[30]|c->r[30]; // 800A7814
  c->r[4]=0u+0x00000000u; // 800A7818
  c->lr=0x800A7820u; f_8000BFD0(c); // 800A781C
  cmps(c,0,(int32_t)c->r[31],0); // 800A7820
  if (!crb(c,1)) { goto L_800A7830; } // 800A7824
  c->r[3]=c->r[30]|c->r[30]; // 800A7828
  c->lr=0x800A7830u; f_800D93B0(c); // 800A782C
L_800A7830:;
  c->r[3]=c->r[30]|c->r[30]; // 800A7830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A7834
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A7838
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A783C
  c->lr=c->r[0]; // 800A7840
  c->r[1]=c->r[1]+0x00000010u; // 800A7844
  return; // 800A7848
}

// fn_800A7850
void f_800A7850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7850
  c->r[0]=c->lr; // 800A7854
  c->r[6]=0u+0x80210000u; // 800A7858
  c->r[8]=0u+0x00000000u; // 800A785C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800A7860
  c->r[6]=c->r[6]+0xFFFFAFB8u; // 800A7864
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800A7868
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800A786C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800A7870
  W32(c->r[1]+0x00000058u,c->r[30]); // 800A7874
  c->r[30]=c->r[3]|c->r[3]; // 800A7878
  c->r[4]=R32(c->r[3]+0x000000B4u); // 800A787C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7880
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7884
  c->r[0]=c->r[4]+0x00000001u; // 800A7888
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A788C
  c->r[7]=R32(c->r[3]+0x0000002Cu); // 800A7890
  W32(c->r[3]+0x000000B4u,c->r[0]); // 800A7894
  cmps(c,0,(int32_t)c->r[7],0); // 800A7898
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 800A789C
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 800A78A0
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 800A78A4
  c->r[5]=R32(c->r[6]+0x00000018u); // 800A78A8
  c->r[4]=R32(c->r[6]+0x0000001Cu); // 800A78AC
  c->r[0]=R32(c->r[6]+0x00000020u); // 800A78B0
  W32(c->r[1]+0x00000040u,c->r[5]); // 800A78B4
  W32(c->r[1]+0x00000044u,c->r[4]); // 800A78B8
  W32(c->r[1]+0x00000048u,c->r[0]); // 800A78BC
  if (crb(c,2)) { goto L_800A78DC; } // 800A78C0
  c->r[0]=R32(c->r[7]+0x00000048u); // 800A78C4
  cmps(c,0,(int32_t)c->r[0],0); // 800A78C8
  if (crb(c,2)) { goto L_800A78DC; } // 800A78CC
  {uint32_t ea=c->r[7]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A78D0
  c->r[8]=0u+0x00000001u; // 800A78D4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800A78D8
L_800A78DC:;
  cmps(c,0,(int32_t)c->r[8],0); // 800A78DC
  if (!crb(c,2)) { goto L_800A7950; } // 800A78E0
  c->r[5]=R32(c->r[13]+0xFFFFADD8u); // 800A78E4
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A78E8
  c->r[0]=R32(c->r[5]+0x00000024u); // 800A78EC
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A78F0
  cmps(c,0,(int32_t)c->r[0],0); // 800A78F4
  if (crb(c,2)) { goto L_800A7910; } // 800A78F8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A78FC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 800A7900
  {uint32_t ea=c->r[5]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7904
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A7908
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800A790C
L_800A7910:;
  c->r[4]=c->r[5]+0x00000064u; // 800A7910
  c->r[5]=c->r[5]+0x0000004Cu; // 800A7914
  c->r[0]=R32(c->r[4]+0x00000000u); // 800A7918
  cmps(c,0,(int32_t)c->r[0],0); // 800A791C
  if (crb(c,2)) { goto L_800A7938; } // 800A7920
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7924
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 800A7928
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A792C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800A7930
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800A7934
L_800A7938:;
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7938
  fcmp(c,0,c->f[3],c->f[0]); // 800A793C
  if (!crb(c,1)) { goto L_800A7950; } // 800A7940
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7944
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 800A7948
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 800A794C
L_800A7950:;
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7950
  c->r[4]=0u+0x80260000u; // 800A7954
  {uint32_t ea=c->r[3]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A7958
  c->r[4]=c->r[4]+0xFFFF96F0u; // 800A795C
  {uint32_t ea=c->r[4]+0x000023B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7960
  c->r[31]=0u+0x00000000u; // 800A7964
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[3]); // 800A7968
  {uint32_t ea=c->r[1]+0x00000040u; c->f[5]=c->ps1[5]=RF32(ea);} // 800A796C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A7970
  {uint32_t ea=c->r[4]+0x000023B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7974
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800A7978
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 800A797C
  c->f[5]=c->ps1[5]=S(c->f[2]/c->f[1]); // 800A7980
  c->f[2]=std::fabs(c->f[4]); // 800A7984
  c->f[2]=c->ps1[2]=S(c->f[2]); // 800A7988
  fcmp(c,0,c->f[2],c->f[0]); // 800A798C
  if (!crb(c,1)) { goto L_800A79F0; } // 800A7990
  fcmp(c,0,c->f[4],c->f[5]); // 800A7994
  if (crb(c,1)) { goto L_800A79B4; } // 800A7998
  c->f[0]=-c->f[5]; // 800A799C
  fcmp(c,0,c->f[4],c->f[0]); // 800A79A0
  if (!crb(c,1)) { goto L_800A79D0; } // 800A79A4
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A79A8
  fcmp(c,0,c->f[4],c->f[0]); // 800A79AC
  if (!crb(c,0)) { goto L_800A79D0; } // 800A79B0
L_800A79B4:;
  c->r[4]=0u+0x80260000u; // 800A79B4
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A79B8
  c->r[4]=c->r[4]+0xFFFF96F0u; // 800A79BC
  {uint32_t ea=c->r[4]+0x000023B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A79C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A79C4
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800A79C8
  goto L_800A7A28; // 800A79CC
L_800A79D0:;
  c->r[4]=0u+0x80260000u; // 800A79D0
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A79D4
  c->r[4]=c->r[4]+0xFFFF96F0u; // 800A79D8
  c->r[31]=0u+0x00000001u; // 800A79DC
  {uint32_t ea=c->r[4]+0x000023B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A79E0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800A79E4
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800A79E8
  goto L_800A7A28; // 800A79EC
L_800A79F0:;
  fcmp(c,0,c->f[3],c->f[1]); // 800A79F0
  if (!crb(c,1)) { goto L_800A7A08; } // 800A79F4
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[1]); // 800A79F8
  c->r[31]=0u+0x00000001u; // 800A79FC
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800A7A00
  goto L_800A7A28; // 800A7A04
L_800A7A08:;
  c->f[0]=-c->f[1]; // 800A7A08
  fcmp(c,0,c->f[3],c->f[0]); // 800A7A0C
  if (!crb(c,0)) { goto L_800A7A20; } // 800A7A10
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[1]); // 800A7A14
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800A7A18
  goto L_800A7A28; // 800A7A1C
L_800A7A20:;
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A20
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800A7A24
L_800A7A28:;
  c->r[4]=0u+0x80260000u; // 800A7A28
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7A2C
  c->r[4]=c->r[4]+0xFFFF96F0u; // 800A7A30
  {uint32_t ea=c->r[4]+0x000023B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A34
  fcmp(c,0,c->f[1],c->f[0]); // 800A7A38
  if (!crb(c,1)) { goto L_800A7A44; } // 800A7A3C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800A7A40
L_800A7A44:;
  c->r[4]=0u+0x80260000u; // 800A7A44
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7A48
  c->r[4]=c->r[4]+0xFFFF96F0u; // 800A7A4C
  {uint32_t ea=c->r[4]+0x000023B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A50
  c->f[0]=-c->f[0]; // 800A7A54
  fcmp(c,0,c->f[1],c->f[0]); // 800A7A58
  if (!crb(c,0)) { goto L_800A7A64; } // 800A7A5C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 800A7A60
L_800A7A64:;
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 800A7A64
  c->r[0]=R32(c->r[4]+0x00000048u); // 800A7A68
  cmps(c,0,(int32_t)c->r[0],0); // 800A7A6C
  if (crb(c,2)) { goto L_800A7AB0; } // 800A7A70
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7A74
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7A78
  {uint32_t ea=c->r[2]+0xFFFFA5B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7A7C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800A7A80
  c->f[1]=std::fabs(c->f[1]); // 800A7A84
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800A7A88
  fcmp(c,0,c->f[1],c->f[0]); // 800A7A8C
  if (!crb(c,1)) { goto L_800A7AB0; } // 800A7A90
  c->r[0]=R32(c->r[4]+0x00000020u); // 800A7A94
  cmps(c,0,(int32_t)c->r[0],10); // 800A7A98
  if (!crb(c,0)) { goto L_800A7AB0; } // 800A7A9C
  c->r[3]=0u+0x80260000u; // 800A7AA0
  c->r[3]=c->r[3]+0xFFFF96F0u; // 800A7AA4
  c->r[3]=R32(c->r[3]+0x0000244Cu); // 800A7AA8
  c->lr=0x800A7AB0u; f_8003A5E0(c); // 800A7AAC
L_800A7AB0:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A7AB0
  {uint32_t ea=c->r[30]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7AB4
  {uint32_t ea=c->r[30]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7AB8
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7ABC
  fcmp(c,0,c->f[1],c->f[0]); // 800A7AC0
  {uint32_t ea=c->r[30]+0x000000BCu; WF32(ea,c->f[2]);} // 800A7AC4
  if (!crb(c,0)) { goto L_800A7AE8; } // 800A7AC8
  c->r[3]=0u+0x80260000u; // 800A7ACC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7AD0
  c->r[3]=c->r[3]+0xFFFF96F0u; // 800A7AD4
  {uint32_t ea=c->r[3]+0x000023BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7AD8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7ADC
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A7AE0
  goto L_800A7B38; // 800A7AE4
L_800A7AE8:;
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7AE8
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7AEC
  fcmp(c,0,c->f[0],c->f[2]); // 800A7AF0
  if (!crb(c,1)) { goto L_800A7B38; } // 800A7AF4
  {uint32_t ea=c->r[30]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7AF8
  {uint32_t ea=c->r[2]+0xFFFFA5B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7AFC
  fcmp(c,0,c->f[1],c->f[0]); // 800A7B00
  if (!crb(c,0)) { goto L_800A7B14; } // 800A7B04
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[2]);} // 800A7B08
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[2]);} // 800A7B0C
  goto L_800A7B38; // 800A7B10
L_800A7B14:;
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7B14
  c->r[3]=0u+0x80260000u; // 800A7B18
  c->r[3]=c->r[3]+0xFFFF96F0u; // 800A7B1C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800A7B20
  c->r[0]=R32(c->r[3]+0x000023C0u); // 800A7B24
  W32(c->r[30]+0x000000A0u,c->r[0]); // 800A7B28
  c->f[0]=-c->f[1]; // 800A7B2C
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[1]);} // 800A7B30
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A7B34
L_800A7B38:;
  c->r[3]=R32(c->r[30]+0x000000A0u); // 800A7B38
  cmps(c,0,(int32_t)c->r[3],0); // 800A7B3C
  if (crb(c,1)) { goto L_800A7B7C; } // 800A7B40
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A7B44
  c->lr=0x800A7B4Cu; f_800FC0C0(c); // 800A7B48
  c->r[3]=0u+0x80260000u; // 800A7B4C
  c->r[3]=c->r[3]+0xFFFF96F0u; // 800A7B50
  {uint32_t ea=c->r[3]+0x000023C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7B54
  fcmp(c,0,c->f[1],c->f[0]); // 800A7B58
  if (!crb(c,0)) { goto L_800A7B70; } // 800A7B5C
  {uint32_t ea=c->r[3]+0x000023CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7B60
  {uint32_t ea=c->r[3]+0x000023D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7B64
  c->r[3]=R32(c->r[3]+0x000023D4u); // 800A7B68
  c->lr=0x800A7B70u; f_8003A6C0(c); // 800A7B6C
L_800A7B70:;
  c->r[0]=0u+0x00000000u; // 800A7B70
  W32(c->r[30]+0x000000A0u,c->r[0]); // 800A7B74
  goto L_800A7B84; // 800A7B78
L_800A7B7C:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800A7B7C
  W32(c->r[30]+0x000000A0u,c->r[0]); // 800A7B80
L_800A7B84:;
  c->r[4]=0u+0x80260000u; // 800A7B84
  cmps(c,0,(int32_t)c->r[31],0); // 800A7B88
  c->r[4]=c->r[4]+0xFFFF96F0u; // 800A7B8C
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7B90
  {uint32_t ea=c->r[4]+0x000023E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7B94
  c->r[31]=0u+0x00000007u; // 800A7B98
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A7B9C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7BA0
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 800A7BA4
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7BA8
  {uint32_t ea=c->r[4]+0x000023E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7BAC
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A7BB0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7BB4
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800A7BB8
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7BBC
  {uint32_t ea=c->r[4]+0x000023ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7BC0
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A7BC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7BC8
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 800A7BCC
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7BD0
  {uint32_t ea=c->r[30]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7BD4
  {uint32_t ea=c->r[30]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7BD8
  c->f[6]=c->ps1[6]=S(c->f[1]+c->f[0]); // 800A7BDC
  {uint32_t ea=c->r[30]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7BE0
  {uint32_t ea=c->r[30]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A7BE4
  c->f[5]=c->ps1[5]=S(c->f[2]+c->f[0]); // 800A7BE8
  {uint32_t ea=c->r[30]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A7BEC
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7BF0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 800A7BF4
  c->r[3]=R32(c->r[30]+0x0000009Cu); // 800A7BF8
  c->f[2]=c->ps1[2]=S(c->f[6]-c->f[1]); // 800A7BFC
  {uint32_t ea=c->r[30]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7C00
  c->r[0]=c->r[3]+0x00000001u; // 800A7C04
  c->r[4]=rotl(c->r[0],0)&0x0000000Fu; // 800A7C08
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[0]); // 800A7C0C
  {uint32_t ea=c->r[30]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7C10
  c->r[0]=rotl(c->r[0],2)&0x0000003Cu; // 800A7C14
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[6]);} // 800A7C18
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[0]); // 800A7C1C
  c->r[3]=c->r[30]+c->r[0]; // 800A7C20
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[3]);} // 800A7C24
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 800A7C28
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[1]);} // 800A7C2C
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 800A7C30
  W32(c->r[30]+0x0000009Cu,c->r[4]); // 800A7C34
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[5]);} // 800A7C38
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[5]);} // 800A7C3C
  if (crb(c,2)) { goto L_800A7C48; } // 800A7C40
  c->r[31]=0u+0x00000003u; // 800A7C44
L_800A7C48:;
  c->r[0]=R32(c->r[30]+0x000000B4u); // 800A7C48
  c->r[0]=c->r[0]&c->r[31]; cr0(c,c->r[0]); // 800A7C4C
  if (!crb(c,2)) { goto L_800A7CFC; } // 800A7C50
  c->r[4]=0u+0x80220000u; // 800A7C54
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A7C58
  c->r[4]=c->r[4]+0xFFFFA850u; // 800A7C5C
  c->r[5]=c->r[1]+0x0000000Cu; // 800A7C60
  c->lr=0x800A7C68u; f_80101C20(c); // 800A7C64
  cmps(c,0,(int32_t)c->r[3],0); // 800A7C68
  if (crb(c,2)) { goto L_800A7CFC; } // 800A7C6C
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A7C70
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800A7C74
  c->lr=0x800A7C7Cu; f_80101D60(c); // 800A7C78
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7C7C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800A7C80
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800A7C84
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A7C88
  c->lr=0x800A7C90u; f_80101D60(c); // 800A7C8C
  c->r[5]=0u+0x80210000u; // 800A7C90
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7C94
  c->r[5]=c->r[5]+0xFFFFAFB8u; // 800A7C98
  cmpu(c,0,c->r[31],0x00000007u); // 800A7C9C
  c->r[4]=R32(c->r[5]+0x00000018u); // 800A7CA0
  c->r[3]=R32(c->r[5]+0x0000001Cu); // 800A7CA4
  c->r[0]=R32(c->r[5]+0x00000020u); // 800A7CA8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800A7CAC
  W32(c->r[1]+0x00000028u,c->r[4]); // 800A7CB0
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800A7CB4
  W32(c->r[1]+0x00000030u,c->r[0]); // 800A7CB8
  if (!crb(c,2)) { goto L_800A7CD4; } // 800A7CBC
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A7CC0
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7CC4
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7CC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800A7CCC
  goto L_800A7CDC; // 800A7CD0
L_800A7CD4:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A7CD4
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7CD8
L_800A7CDC:;
  {uint32_t ea=c->r[2]+0xFFFFA5BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7CDC
  c->r[4]=c->r[1]+0x00000034u; // 800A7CE0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800A7CE4
  c->r[5]=c->r[1]+0x00000028u; // 800A7CE8
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7CEC
  c->r[3]=0u+0x0000001Eu; // 800A7CF0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A7CF4
  c->lr=0x800A7CFCu; f_8003A1B0(c); // 800A7CF8
L_800A7CFC:;
  c->r[0]=R32(c->r[30]+0x000000B8u); // 800A7CFC
  c->r[31]=0u+0x00000000u; // 800A7D00
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800A7D04
  cmpu(c,0,c->r[0],0x00000005u); // 800A7D08
  if (crb(c,0)) { goto L_800A7D5C; } // 800A7D0C
  cmpu(c,0,c->r[0],0x00000064u); // 800A7D10
  if (!crb(c,0)) { goto L_800A7D3C; } // 800A7D14
  c->r[0]=R32(c->r[30]+0x000000B4u); // 800A7D18
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[0]); // 800A7D1C
  if (!crb(c,2)) { goto L_800A7D5C; } // 800A7D20
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A7D24
  c->r[31]=0u+0x0000001Fu; // 800A7D28
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7D2C
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7D30
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 800A7D34
  goto L_800A7D5C; // 800A7D38
L_800A7D3C:;
  c->r[0]=R32(c->r[30]+0x000000B4u); // 800A7D3C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800A7D40
  if (!crb(c,2)) { goto L_800A7D5C; } // 800A7D44
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800A7D48
  c->r[31]=0u+0x0000001Fu; // 800A7D4C
  {uint32_t ea=c->r[2]+0xFFFFA5B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7D50
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7D54
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 800A7D58
L_800A7D5C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A7D5C
  if (crb(c,2)) { goto L_800A7DF0; } // 800A7D60
  c->r[4]=0u+0x80220000u; // 800A7D64
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A7D68
  c->r[4]=c->r[4]+0xFFFFA85Cu; // 800A7D6C
  c->r[5]=c->r[1]+0x00000008u; // 800A7D70
  c->lr=0x800A7D78u; f_80101C20(c); // 800A7D74
  cmps(c,0,(int32_t)c->r[3],0); // 800A7D78
  if (crb(c,2)) { goto L_800A7DF0; } // 800A7D7C
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A7D80
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A7D84
  c->lr=0x800A7D8Cu; f_80101D60(c); // 800A7D88
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7D8C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800A7D90
  c->r[4]=R32(c->r[1]+0x00000008u); // 800A7D94
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A7D98
  c->lr=0x800A7DA0u; f_80101D60(c); // 800A7D9C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7DA0
  cmps(c,0,(int32_t)c->r[31],0); // 800A7DA4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800A7DA8
  if (crb(c,2)) { goto L_800A7DF0; } // 800A7DAC
  c->r[7]=0u+0x80210000u; // 800A7DB0
  {uint32_t ea=c->r[2]+0xFFFFA5BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7DB4
  c->r[7]=c->r[7]+0xFFFFAFB8u; // 800A7DB8
  {uint32_t ea=c->r[2]+0xFFFFA5ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7DBC
  c->r[0]=R32(c->r[7]+0x00000018u); // 800A7DC0
  c->r[3]=c->r[31]|c->r[31]; // 800A7DC4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A7DC8
  c->r[4]=c->r[1]+0x0000001Cu; // 800A7DCC
  c->r[6]=R32(c->r[7]+0x0000001Cu); // 800A7DD0
  c->r[5]=c->r[1]+0x00000010u; // 800A7DD4
  W32(c->r[1]+0x00000014u,c->r[6]); // 800A7DD8
  c->r[0]=R32(c->r[7]+0x00000020u); // 800A7DDC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A7DE0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 800A7DE4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800A7DE8
  c->lr=0x800A7DF0u; f_8003A1B0(c); // 800A7DEC
L_800A7DF0:;
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A7DF0
  c->lr=0x800A7DF8u; f_80103410(c); // 800A7DF4
  c->r[3]=R32(c->r[30]+0x000000C0u); // 800A7DF8
  c->lr=0x800A7E00u; f_801063E0(c); // 800A7DFC
  c->r[0]=R32(c->r[30]+0x000000A4u); // 800A7E00
  cmpu(c,0,c->r[0],0x00000002u); // 800A7E04
  if (crb(c,2)) { goto L_800A7E34; } // 800A7E08
  c->r[3]=R32(c->r[30]+0x000000ACu); // 800A7E0C
  cmps(c,0,(int32_t)c->r[3],0); // 800A7E10
  if (crb(c,2)) { goto L_800A7E2C; } // 800A7E14
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800A7E18
  c->r[0]=0u+0x00000001u; // 800A7E1C
  W32(c->r[30]+0x000000ACu,c->r[3]); // 800A7E20
  W32(c->r[30]+0x000000A4u,c->r[0]); // 800A7E24
  goto L_800A7E34; // 800A7E28
L_800A7E2C:;
  c->r[0]=0u+0x00000000u; // 800A7E2C
  W32(c->r[30]+0x000000A4u,c->r[0]); // 800A7E30
L_800A7E34:;
  c->r[3]=R32(c->r[30]+0x000000A4u); // 800A7E34
  c->r[0]=R32(c->r[30]+0x000000A8u); // 800A7E38
  cmpu(c,0,c->r[0],c->r[3]); // 800A7E3C
  if (crb(c,2)) { goto L_800A7EA0; } // 800A7E40
  cmps(c,0,(int32_t)c->r[3],0); // 800A7E44
  if (crb(c,2)) { goto L_800A7E60; } // 800A7E48
  cmpu(c,0,c->r[3],0x00000001u); // 800A7E4C
  if (crb(c,2)) { goto L_800A7E74; } // 800A7E50
  cmpu(c,0,c->r[3],0x00000002u); // 800A7E54
  if (crb(c,2)) { goto L_800A7E88; } // 800A7E58
  goto L_800A7E98; // 800A7E5C
L_800A7E60:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 800A7E60
  c->r[4]=c->r[13]+0xFFFF9F90u; // 800A7E64
  c->r[5]=0u+0x00000000u; // 800A7E68
  c->lr=0x800A7E70u; f_80100840(c); // 800A7E6C
  goto L_800A7E98; // 800A7E70
L_800A7E74:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 800A7E74
  c->r[4]=c->r[13]+0xFFFF9F98u; // 800A7E78
  c->r[5]=0u+0x00000000u; // 800A7E7C
  c->lr=0x800A7E84u; f_80100840(c); // 800A7E80
  goto L_800A7E98; // 800A7E84
L_800A7E88:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 800A7E88
  c->r[4]=c->r[13]+0xFFFF9FA0u; // 800A7E8C
  c->r[5]=0u+0x00000000u; // 800A7E90
  c->lr=0x800A7E98u; f_80100840(c); // 800A7E94
L_800A7E98:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 800A7E98
  c->lr=0x800A7EA0u; f_80101780(c); // 800A7E9C
L_800A7EA0:;
  c->r[0]=R32(c->r[30]+0x000000A4u); // 800A7EA0
  W32(c->r[30]+0x000000A8u,c->r[0]); // 800A7EA4
  c->r[3]=R32(c->r[30]+0x000000C4u); // 800A7EA8
  c->lr=0x800A7EB0u; f_80103410(c); // 800A7EAC
  c->r[3]=R32(c->r[30]+0x000000C4u); // 800A7EB0
  c->lr=0x800A7EB8u; f_801063E0(c); // 800A7EB4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800A7EB8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800A7EBC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800A7EC0
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800A7EC4
  c->r[30]=R32(c->r[1]+0x00000058u); // 800A7EC8
  c->lr=c->r[0]; // 800A7ECC
  c->r[1]=c->r[1]+0x00000070u; // 800A7ED0
  return; // 800A7ED4
}

// fn_800A7EE0
void f_800A7EE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A7EE0
  c->r[0]=c->lr; // 800A7EE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A7EE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A7EEC
  c->r[31]=c->r[3]|c->r[3]; // 800A7EF0
  c->r[3]=R32(c->r[3]+0x000000C0u); // 800A7EF4
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7EF8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7EFC
  c->lr=0x800A7F04u; f_801017C0(c); // 800A7F00
  c->r[3]=R32(c->r[31]+0x000000C0u); // 800A7F04
  c->lr=0x800A7F0Cu; f_80107F60(c); // 800A7F08
  c->r[3]=R32(c->r[31]+0x000000C4u); // 800A7F0C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7F10
  {uint32_t ea=c->r[31]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A7F14
  c->lr=0x800A7F1Cu; f_801017C0(c); // 800A7F18
  c->r[3]=R32(c->r[31]+0x000000C4u); // 800A7F1C
  c->lr=0x800A7F24u; f_80107F60(c); // 800A7F20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A7F24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A7F28
  c->lr=c->r[0]; // 800A7F2C
  c->r[1]=c->r[1]+0x00000010u; // 800A7F30
  return; // 800A7F34
}

// fn_800A7F40
void f_800A7F40(Ctx* __restrict c) {
  c->r[4]=0u+0x80220000u; // 800A7F40
  c->r[0]=0u+0x00000004u; // 800A7F44
  c->r[6]=c->r[3]|c->r[3]; // 800A7F48
  c->r[5]=c->r[3]+0x000000C8u; // 800A7F4C
  c->r[4]=c->r[4]+0xFFFFA710u; // 800A7F50
  c->ctr=c->r[0]; // 800A7F54
L_800A7F58:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7F58
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7F5C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7F60
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800A7F64
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7F68
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7F6C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7F70
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[0]);} // 800A7F74
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7F78
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7F7C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7F80
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[0]);} // 800A7F84
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7F88
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7F8C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7F90
  {uint32_t ea=c->r[6]+0x000000D4u; WF32(ea,c->f[0]);} // 800A7F94
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7F98
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7F9C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7FA0
  {uint32_t ea=c->r[6]+0x000000D8u; WF32(ea,c->f[0]);} // 800A7FA4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7FA8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7FAC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7FB0
  {uint32_t ea=c->r[6]+0x000000DCu; WF32(ea,c->f[0]);} // 800A7FB4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7FB8
  {uint32_t ea=c->r[6]+0x000000E0u; WF32(ea,c->f[0]);} // 800A7FBC
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7FC0
  {uint32_t ea=c->r[6]+0x000000E4u; WF32(ea,c->f[0]);} // 800A7FC4
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7FC8
  {uint32_t ea=c->r[6]+0x000000E8u; WF32(ea,c->f[0]);} // 800A7FCC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7FD0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7FD4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7FD8
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 800A7FDC
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7FE0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7FE4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7FE8
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[0]);} // 800A7FEC
  {uint32_t ea=c->r[4]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A7FF0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A7FF4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A7FF8
  {uint32_t ea=c->r[5]+0x00000030u; WF32(ea,c->f[0]);} // 800A7FFC
  c->r[5]=c->r[5]+0x00000050u; // 800A8000
  {uint32_t ea=c->r[4]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8004
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8008
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A800C
  {uint32_t ea=c->r[6]+0x000000FCu; WF32(ea,c->f[0]);} // 800A8010
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8014
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8018
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A801C
  {uint32_t ea=c->r[6]+0x00000100u; WF32(ea,c->f[0]);} // 800A8020
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8024
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8028
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800A802C
  {uint32_t ea=c->r[6]+0x00000104u; WF32(ea,c->f[0]);} // 800A8030
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8034
  {uint32_t ea=c->r[6]+0x00000108u; WF32(ea,c->f[0]);} // 800A8038
  {uint32_t ea=c->r[4]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A803C
  {uint32_t ea=c->r[6]+0x0000010Cu; WF32(ea,c->f[0]);} // 800A8040
  {uint32_t ea=c->r[4]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8044
  c->r[4]=c->r[4]+0x00000050u; // 800A8048
  {uint32_t ea=c->r[6]+0x00000110u; WF32(ea,c->f[0]);} // 800A804C
  c->r[6]=c->r[6]+0x00000050u; // 800A8050
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A7F58; } // 800A8054
  return; // 800A8058
}

// fn_800A8060
void f_800A8060(Ctx* __restrict c) {
  return; // 800A8060
}

// fn_800A8070
void f_800A8070(Ctx* __restrict c) {
  return; // 800A8070
}

// fn_800A8080
void f_800A8080(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000208u; // 800A8080
  f_80008A60(c); return; // 800A8084
}

// fn_800A8090
void f_800A8090(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000208u; // 800A8090
  f_80008BB0(c); return; // 800A8094
}

// fn_800A80A0
void f_800A80A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A80A0
  c->r[0]=c->lr; // 800A80A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A80A8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800A80AC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800A80B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A80B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A80B8
  c->r[30]=c->r[3]|c->r[3]; // 800A80BC
  c->r[0]=R32(c->r[3]+0x000000B0u); // 800A80C0
  cmps(c,0,(int32_t)c->r[0],0); // 800A80C4
  if (!crb(c,2)) { goto L_800A80D4; } // 800A80C8
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A80CC
  goto L_800A818C; // 800A80D0
L_800A80D4:;
  {uint32_t ea=c->r[2]+0xFFFFA5C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A80D4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A80D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 800A80DC
  fcmp(c,0,c->f[2],c->f[0]); // 800A80E0
  c->r[4]=c->cr; // 800A80E4
  {uint32_t ea=c->r[2]+0xFFFFA5C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A80E8
  c->r[4]=rotl(c->r[4],2)&0x00000001u; // 800A80EC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[4]); // 800A80F0
  fcmp(c,0,c->f[1],c->f[0]); // 800A80F4
  c->r[0]=c->cr; // 800A80F8
  cmps(c,0,(int32_t)c->r[4],0); // 800A80FC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800A8100
  if (crb(c,2)) { goto L_800A8188; } // 800A8104
  cmps(c,0,(int32_t)c->r[0],0); // 800A8108
  if (crb(c,2)) { goto L_800A8188; } // 800A810C
  {uint32_t ea=c->r[3]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8110
  c->r[31]=0u+0x80260000u; // 800A8114
  c->r[31]=c->r[31]+0xFFFF96F0u; // 800A8118
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[3]);} // 800A811C
  c->f[31]=c->ps1[31]=S(c->f[3]+c->f[0]); // 800A8120
  {uint32_t ea=c->r[31]+0x000023D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8124
  {uint32_t ea=c->r[31]+0x000023DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A8128
  c->r[3]=R32(c->r[31]+0x000023E0u); // 800A812C
  c->lr=0x800A8134u; f_8003A6C0(c); // 800A8130
  c->r[3]=R32(c->r[31]+0x000023E0u); // 800A8134
  c->r[0]=0u+0x0000002Du; // 800A8138
  W32(c->r[30]+0x000000A0u,c->r[3]); // 800A813C
  W32(c->r[30]+0x000000ACu,c->r[0]); // 800A8140
  c->r[3]=R32(c->r[31]+0x00002450u); // 800A8144
  c->lr=0x800A814Cu; f_8003A5E0(c); // 800A8148
  c->r[3]=R32(c->r[30]+0x000000B8u); // 800A814C
  c->r[0]=c->r[3]+0x00000001u; // 800A8150
  W32(c->r[30]+0x000000B8u,c->r[0]); // 800A8154
  c->r[3]=R32(c->r[13]+0xFFFFADA0u); // 800A8158
  c->lr=0x800A8160u; f_800FC0C0(c); // 800A815C
  {uint32_t ea=c->r[2]+0xFFFFA5C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A8160
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A8164
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[1]); // 800A8168
  c->f[1]=c->f[31]; // 800A816C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 800A8170
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800A8174
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 800A8178
  c->f[0]=-c->f[0]; // 800A817C
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 800A8180
  goto L_800A818C; // 800A8184
L_800A8188:;
  {uint32_t ea=c->r[2]+0xFFFFA5A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8188
L_800A818C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A818C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800A8190
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800A8194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8198
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A819C
  c->lr=c->r[0]; // 800A81A0
  c->r[1]=c->r[1]+0x00000020u; // 800A81A4
  return; // 800A81A8
}

// fn_800A81B0
void f_800A81B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A81B0
  f_800A8090(c); return; // 800A81B4
}

// fn_800A81C0
void f_800A81C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A81C0
  f_800A8080(c); return; // 800A81C4
}

// fn_800A81D0
void f_800A81D0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A81D0
  f_800A8070(c); return; // 800A81D4
}

// fn_800A81E0
void f_800A81E0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A81E0
  f_800A8060(c); return; // 800A81E4
}

// fn_800A81F0
void f_800A81F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A81F0
  f_800A7F40(c); return; // 800A81F4
}

// fn_800A8200
void f_800A8200(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800A8200
  f_800A7750(c); return; // 800A8204
}

// fn_800A8210
void f_800A8210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8210
  c->r[0]=c->lr; // 800A8214
  c->r[4]=0u+0x80210000u; // 800A8218
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A821C
  c->r[4]=c->r[4]+0xFFFFAED4u; // 800A8220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8224
  c->r[31]=0u+0x00000000u; // 800A8228
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A822C
  c->r[30]=c->r[3]|c->r[3]; // 800A8230
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A8234
  W32(c->r[3]+0x00000008u,c->r[31]); // 800A8238
  W8(c->r[3]+0x0000000Cu,c->r[31]); // 800A823C
  c->r[3]=c->r[3]+0x00000010u; // 800A8240
  c->lr=0x800A8248u; f_801138E0(c); // 800A8244
  c->r[3]=c->r[30]+0x00000014u; // 800A8248
  c->lr=0x800A8250u; f_800F5470(c); // 800A824C
  c->r[3]=0u+0x80220000u; // 800A8250
  c->r[0]=c->r[30]+0x00000028u; // 800A8254
  c->r[3]=c->r[3]+0xFFFFACF8u; // 800A8258
  W32(c->r[30]+0x00000000u,c->r[3]); // 800A825C
  c->r[4]=c->r[3]+0x00000014u; // 800A8260
  c->r[3]=c->r[3]+0x00000028u; // 800A8264
  W32(c->r[30]+0x00000010u,c->r[4]); // 800A8268
  W32(c->r[30]+0x00000014u,c->r[3]); // 800A826C
  W32(c->r[30]+0x00000018u,c->r[31]); // 800A8270
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 800A8274
  W32(c->r[30]+0x00000020u,c->r[31]); // 800A8278
  W32(c->r[30]+0x00000024u,c->r[31]); // 800A827C
  W32(c->r[30]+0x00000028u,c->r[31]); // 800A8280
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 800A8284
  W32(c->r[13]+0xFFFFAE34u,c->r[30]); // 800A8288
  c->lr=0x800A8290u; f_80115FBC(c); // 800A828C
  c->r[3]=0u+0x0000189Cu; // 800A8290
  c->lr=0x800A8298u; f_800D8ED0(c); // 800A8294
  cmps(c,0,(int32_t)c->r[3],0); // 800A8298
  if (crb(c,2)) { goto L_800A82A4; } // 800A829C
  c->lr=0x800A82A4u; f_80115C88(c); // 800A82A0
L_800A82A4:;
  {uint32_t ea=c->r[2]+0xFFFFA5D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A82A4
  c->r[6]=0u+0x80260000u; // 800A82A8
  c->r[5]=0u+0x00000001u; // 800A82AC
  c->r[4]=0u+0x00000000u; // 800A82B0
  c->r[0]=0u+0x00000004u; // 800A82B4
  W32(c->r[30]+0x00000374u,c->r[3]); // 800A82B8
  c->r[6]=c->r[6]+0xFFFFBD58u; // 800A82BC
  W8(c->r[30]+0x00000378u,c->r[5]); // 800A82C0
  W8(c->r[30]+0x00000379u,c->r[4]); // 800A82C4
  {uint32_t ea=c->r[30]+0x0000037Cu; WF32(ea,c->f[0]);} // 800A82C8
  {uint32_t ea=c->r[30]+0x00000380u; WF32(ea,c->f[0]);} // 800A82CC
  c->ctr=c->r[0]; // 800A82D0
L_800A82D4:;
  W8(c->r[6]+0x00000000u,c->r[4]); // 800A82D4
  W8(c->r[6]+0x00000001u,c->r[4]); // 800A82D8
  W8(c->r[6]+0x00000002u,c->r[4]); // 800A82DC
  W8(c->r[6]+0x00000003u,c->r[4]); // 800A82E0
  W8(c->r[6]+0x00000004u,c->r[4]); // 800A82E4
  W8(c->r[6]+0x00000005u,c->r[4]); // 800A82E8
  W8(c->r[6]+0x00000006u,c->r[4]); // 800A82EC
  W8(c->r[6]+0x00000007u,c->r[4]); // 800A82F0
  W8(c->r[6]+0x00000008u,c->r[4]); // 800A82F4
  W8(c->r[6]+0x00000009u,c->r[4]); // 800A82F8
  W8(c->r[6]+0x0000000Au,c->r[4]); // 800A82FC
  W8(c->r[6]+0x0000000Bu,c->r[4]); // 800A8300
  W8(c->r[6]+0x0000000Cu,c->r[4]); // 800A8304
  W8(c->r[6]+0x0000000Du,c->r[4]); // 800A8308
  W8(c->r[6]+0x0000000Eu,c->r[4]); // 800A830C
  W8(c->r[6]+0x0000000Fu,c->r[4]); // 800A8310
  W8(c->r[6]+0x00000010u,c->r[4]); // 800A8314
  W8(c->r[6]+0x00000011u,c->r[4]); // 800A8318
  W8(c->r[6]+0x00000012u,c->r[4]); // 800A831C
  W8(c->r[6]+0x00000013u,c->r[4]); // 800A8320
  W8(c->r[6]+0x00000014u,c->r[4]); // 800A8324
  W8(c->r[6]+0x00000015u,c->r[4]); // 800A8328
  W8(c->r[6]+0x00000016u,c->r[4]); // 800A832C
  W8(c->r[6]+0x00000017u,c->r[4]); // 800A8330
  W8(c->r[6]+0x00000018u,c->r[4]); // 800A8334
  W8(c->r[6]+0x00000019u,c->r[4]); // 800A8338
  W8(c->r[6]+0x0000001Au,c->r[4]); // 800A833C
  W8(c->r[6]+0x0000001Bu,c->r[4]); // 800A8340
  W8(c->r[6]+0x0000001Cu,c->r[4]); // 800A8344
  W8(c->r[6]+0x0000001Du,c->r[4]); // 800A8348
  W8(c->r[6]+0x0000001Eu,c->r[4]); // 800A834C
  W8(c->r[6]+0x0000001Fu,c->r[4]); // 800A8350
  c->r[6]=c->r[6]+0x00000020u; // 800A8354
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A82D4; } // 800A8358
  c->r[3]=c->r[30]|c->r[30]; // 800A835C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8360
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A8364
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8368
  c->lr=c->r[0]; // 800A836C
  c->r[1]=c->r[1]+0x00000010u; // 800A8370
  return; // 800A8374
}

// fn_800A8380
void f_800A8380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8380
  c->r[0]=c->lr; // 800A8384
  W32(c->r[1]+0x00000034u,c->r[0]); // 800A8388
  c->r[11]=c->r[1]+0x00000030u; // 800A838C
  c->lr=0x800A8394u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A8390
  cmps(c,0,(int32_t)c->r[3],0); // 800A8394
  c->r[30]=c->r[3]|c->r[3]; // 800A8398
  c->r[31]=c->r[4]|c->r[4]; // 800A839C
  if (crb(c,2)) { goto L_800A8698; } // 800A83A0
  c->r[6]=R32(c->r[3]+0x00000374u); // 800A83A4
  c->r[5]=0u+0x80220000u; // 800A83A8
  c->r[5]=c->r[5]+0xFFFFACF8u; // 800A83AC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A83B0
  cmps(c,0,(int32_t)c->r[6],0); // 800A83B4
  c->r[4]=c->r[5]+0x00000014u; // 800A83B8
  c->r[0]=c->r[5]+0x00000028u; // 800A83BC
  W32(c->r[3]+0x00000010u,c->r[4]); // 800A83C0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800A83C4
  if (crb(c,2)) { goto L_800A83E4; } // 800A83C8
  c->r[12]=R32(c->r[6]+0x00000000u); // 800A83CC
  c->r[3]=c->r[6]|c->r[6]; // 800A83D0
  c->r[4]=0u+0x00000001u; // 800A83D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 800A83D8
  c->ctr=c->r[12]; // 800A83DC
  if (true) { c->lr=0x800A83E4u; dispatch(c,c->ctr); } // 800A83E0
L_800A83E4:;
  c->r[29]=addc(c,c->r[30],0x00000024u,0); cr0(c,c->r[29]); // 800A83E4
  c->r[0]=0u+0x00000000u; // 800A83E8
  W32(c->r[13]+0xFFFFAE34u,c->r[0]); // 800A83EC
  if (crb(c,2)) { goto L_800A8670; } // 800A83F0
  if (crb(c,2)) { goto L_800A8670; } // 800A83F4
  if (crb(c,2)) { goto L_800A8670; } // 800A83F8
  if (crb(c,2)) { goto L_800A8670; } // 800A83FC
  if (crb(c,2)) { goto L_800A8670; } // 800A8400
  c->r[28]=R32(c->r[29]+0x00000004u); // 800A8404
  cmps(c,0,(int32_t)c->r[28],0); // 800A8408
  if (crb(c,2)) { goto L_800A8670; } // 800A840C
  c->r[27]=R32(c->r[28]+0x00000000u); // 800A8410
  cmps(c,0,(int32_t)c->r[27],0); // 800A8414
  if (crb(c,2)) { goto L_800A853C; } // 800A8418
  c->r[26]=R32(c->r[27]+0x00000000u); // 800A841C
  cmps(c,0,(int32_t)c->r[26],0); // 800A8420
  if (crb(c,2)) { goto L_800A84A8; } // 800A8424
  c->r[25]=R32(c->r[26]+0x00000000u); // 800A8428
  cmps(c,0,(int32_t)c->r[25],0); // 800A842C
  if (crb(c,2)) { goto L_800A8464; } // 800A8430
  c->r[4]=R32(c->r[25]+0x00000000u); // 800A8434
  cmps(c,0,(int32_t)c->r[4],0); // 800A8438
  if (crb(c,2)) { goto L_800A8448; } // 800A843C
  c->r[3]=c->r[29]|c->r[29]; // 800A8440
  c->lr=0x800A8448u; f_80007430(c); // 800A8444
L_800A8448:;
  c->r[4]=R32(c->r[25]+0x00000004u); // 800A8448
  cmps(c,0,(int32_t)c->r[4],0); // 800A844C
  if (crb(c,2)) { goto L_800A845C; } // 800A8450
  c->r[3]=c->r[29]|c->r[29]; // 800A8454
  c->lr=0x800A845Cu; f_80007430(c); // 800A8458
L_800A845C:;
  c->r[3]=c->r[25]|c->r[25]; // 800A845C
  c->lr=0x800A8464u; f_800D93B0(c); // 800A8460
L_800A8464:;
  c->r[25]=R32(c->r[26]+0x00000004u); // 800A8464
  cmps(c,0,(int32_t)c->r[25],0); // 800A8468
  if (crb(c,2)) { goto L_800A84A0; } // 800A846C
  c->r[4]=R32(c->r[25]+0x00000000u); // 800A8470
  cmps(c,0,(int32_t)c->r[4],0); // 800A8474
  if (crb(c,2)) { goto L_800A8484; } // 800A8478
  c->r[3]=c->r[29]|c->r[29]; // 800A847C
  c->lr=0x800A8484u; f_80007430(c); // 800A8480
L_800A8484:;
  c->r[4]=R32(c->r[25]+0x00000004u); // 800A8484
  cmps(c,0,(int32_t)c->r[4],0); // 800A8488
  if (crb(c,2)) { goto L_800A8498; } // 800A848C
  c->r[3]=c->r[29]|c->r[29]; // 800A8490
  c->lr=0x800A8498u; f_80007430(c); // 800A8494
L_800A8498:;
  c->r[3]=c->r[25]|c->r[25]; // 800A8498
  c->lr=0x800A84A0u; f_800D93B0(c); // 800A849C
L_800A84A0:;
  c->r[3]=c->r[26]|c->r[26]; // 800A84A0
  c->lr=0x800A84A8u; f_800D93B0(c); // 800A84A4
L_800A84A8:;
  c->r[25]=R32(c->r[27]+0x00000004u); // 800A84A8
  cmps(c,0,(int32_t)c->r[25],0); // 800A84AC
  if (crb(c,2)) { goto L_800A8534; } // 800A84B0
  c->r[26]=R32(c->r[25]+0x00000000u); // 800A84B4
  cmps(c,0,(int32_t)c->r[26],0); // 800A84B8
  if (crb(c,2)) { goto L_800A84F0; } // 800A84BC
  c->r[4]=R32(c->r[26]+0x00000000u); // 800A84C0
  cmps(c,0,(int32_t)c->r[4],0); // 800A84C4
  if (crb(c,2)) { goto L_800A84D4; } // 800A84C8
  c->r[3]=c->r[29]|c->r[29]; // 800A84CC
  c->lr=0x800A84D4u; f_80007430(c); // 800A84D0
L_800A84D4:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 800A84D4
  cmps(c,0,(int32_t)c->r[4],0); // 800A84D8
  if (crb(c,2)) { goto L_800A84E8; } // 800A84DC
  c->r[3]=c->r[29]|c->r[29]; // 800A84E0
  c->lr=0x800A84E8u; f_80007430(c); // 800A84E4
L_800A84E8:;
  c->r[3]=c->r[26]|c->r[26]; // 800A84E8
  c->lr=0x800A84F0u; f_800D93B0(c); // 800A84EC
L_800A84F0:;
  c->r[26]=R32(c->r[25]+0x00000004u); // 800A84F0
  cmps(c,0,(int32_t)c->r[26],0); // 800A84F4
  if (crb(c,2)) { goto L_800A852C; } // 800A84F8
  c->r[4]=R32(c->r[26]+0x00000000u); // 800A84FC
  cmps(c,0,(int32_t)c->r[4],0); // 800A8500
  if (crb(c,2)) { goto L_800A8510; } // 800A8504
  c->r[3]=c->r[29]|c->r[29]; // 800A8508
  c->lr=0x800A8510u; f_80007430(c); // 800A850C
L_800A8510:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 800A8510
  cmps(c,0,(int32_t)c->r[4],0); // 800A8514
  if (crb(c,2)) { goto L_800A8524; } // 800A8518
  c->r[3]=c->r[29]|c->r[29]; // 800A851C
  c->lr=0x800A8524u; f_80007430(c); // 800A8520
L_800A8524:;
  c->r[3]=c->r[26]|c->r[26]; // 800A8524
  c->lr=0x800A852Cu; f_800D93B0(c); // 800A8528
L_800A852C:;
  c->r[3]=c->r[25]|c->r[25]; // 800A852C
  c->lr=0x800A8534u; f_800D93B0(c); // 800A8530
L_800A8534:;
  c->r[3]=c->r[27]|c->r[27]; // 800A8534
  c->lr=0x800A853Cu; f_800D93B0(c); // 800A8538
L_800A853C:;
  c->r[25]=R32(c->r[28]+0x00000004u); // 800A853C
  cmps(c,0,(int32_t)c->r[25],0); // 800A8540
  if (crb(c,2)) { goto L_800A8668; } // 800A8544
  c->r[26]=R32(c->r[25]+0x00000000u); // 800A8548
  cmps(c,0,(int32_t)c->r[26],0); // 800A854C
  if (crb(c,2)) { goto L_800A85D4; } // 800A8550
  c->r[27]=R32(c->r[26]+0x00000000u); // 800A8554
  cmps(c,0,(int32_t)c->r[27],0); // 800A8558
  if (crb(c,2)) { goto L_800A8590; } // 800A855C
  c->r[4]=R32(c->r[27]+0x00000000u); // 800A8560
  cmps(c,0,(int32_t)c->r[4],0); // 800A8564
  if (crb(c,2)) { goto L_800A8574; } // 800A8568
  c->r[3]=c->r[29]|c->r[29]; // 800A856C
  c->lr=0x800A8574u; f_80007430(c); // 800A8570
L_800A8574:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 800A8574
  cmps(c,0,(int32_t)c->r[4],0); // 800A8578
  if (crb(c,2)) { goto L_800A8588; } // 800A857C
  c->r[3]=c->r[29]|c->r[29]; // 800A8580
  c->lr=0x800A8588u; f_80007430(c); // 800A8584
L_800A8588:;
  c->r[3]=c->r[27]|c->r[27]; // 800A8588
  c->lr=0x800A8590u; f_800D93B0(c); // 800A858C
L_800A8590:;
  c->r[27]=R32(c->r[26]+0x00000004u); // 800A8590
  cmps(c,0,(int32_t)c->r[27],0); // 800A8594
  if (crb(c,2)) { goto L_800A85CC; } // 800A8598
  c->r[4]=R32(c->r[27]+0x00000000u); // 800A859C
  cmps(c,0,(int32_t)c->r[4],0); // 800A85A0
  if (crb(c,2)) { goto L_800A85B0; } // 800A85A4
  c->r[3]=c->r[29]|c->r[29]; // 800A85A8
  c->lr=0x800A85B0u; f_80007430(c); // 800A85AC
L_800A85B0:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 800A85B0
  cmps(c,0,(int32_t)c->r[4],0); // 800A85B4
  if (crb(c,2)) { goto L_800A85C4; } // 800A85B8
  c->r[3]=c->r[29]|c->r[29]; // 800A85BC
  c->lr=0x800A85C4u; f_80007430(c); // 800A85C0
L_800A85C4:;
  c->r[3]=c->r[27]|c->r[27]; // 800A85C4
  c->lr=0x800A85CCu; f_800D93B0(c); // 800A85C8
L_800A85CC:;
  c->r[3]=c->r[26]|c->r[26]; // 800A85CC
  c->lr=0x800A85D4u; f_800D93B0(c); // 800A85D0
L_800A85D4:;
  c->r[26]=R32(c->r[25]+0x00000004u); // 800A85D4
  cmps(c,0,(int32_t)c->r[26],0); // 800A85D8
  if (crb(c,2)) { goto L_800A8660; } // 800A85DC
  c->r[27]=R32(c->r[26]+0x00000000u); // 800A85E0
  cmps(c,0,(int32_t)c->r[27],0); // 800A85E4
  if (crb(c,2)) { goto L_800A861C; } // 800A85E8
  c->r[4]=R32(c->r[27]+0x00000000u); // 800A85EC
  cmps(c,0,(int32_t)c->r[4],0); // 800A85F0
  if (crb(c,2)) { goto L_800A8600; } // 800A85F4
  c->r[3]=c->r[29]|c->r[29]; // 800A85F8
  c->lr=0x800A8600u; f_80007430(c); // 800A85FC
L_800A8600:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 800A8600
  cmps(c,0,(int32_t)c->r[4],0); // 800A8604
  if (crb(c,2)) { goto L_800A8614; } // 800A8608
  c->r[3]=c->r[29]|c->r[29]; // 800A860C
  c->lr=0x800A8614u; f_80007430(c); // 800A8610
L_800A8614:;
  c->r[3]=c->r[27]|c->r[27]; // 800A8614
  c->lr=0x800A861Cu; f_800D93B0(c); // 800A8618
L_800A861C:;
  c->r[27]=R32(c->r[26]+0x00000004u); // 800A861C
  cmps(c,0,(int32_t)c->r[27],0); // 800A8620
  if (crb(c,2)) { goto L_800A8658; } // 800A8624
  c->r[4]=R32(c->r[27]+0x00000000u); // 800A8628
  cmps(c,0,(int32_t)c->r[4],0); // 800A862C
  if (crb(c,2)) { goto L_800A863C; } // 800A8630
  c->r[3]=c->r[29]|c->r[29]; // 800A8634
  c->lr=0x800A863Cu; f_80007430(c); // 800A8638
L_800A863C:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 800A863C
  cmps(c,0,(int32_t)c->r[4],0); // 800A8640
  if (crb(c,2)) { goto L_800A8650; } // 800A8644
  c->r[3]=c->r[29]|c->r[29]; // 800A8648
  c->lr=0x800A8650u; f_80007430(c); // 800A864C
L_800A8650:;
  c->r[3]=c->r[27]|c->r[27]; // 800A8650
  c->lr=0x800A8658u; f_800D93B0(c); // 800A8654
L_800A8658:;
  c->r[3]=c->r[26]|c->r[26]; // 800A8658
  c->lr=0x800A8660u; f_800D93B0(c); // 800A865C
L_800A8660:;
  c->r[3]=c->r[25]|c->r[25]; // 800A8660
  c->lr=0x800A8668u; f_800D93B0(c); // 800A8664
L_800A8668:;
  c->r[3]=c->r[28]|c->r[28]; // 800A8668
  c->lr=0x800A8670u; f_800D93B0(c); // 800A866C
L_800A8670:;
  c->r[3]=c->r[30]+0x00000014u; // 800A8670
  c->r[4]=0u+0x00000000u; // 800A8674
  c->lr=0x800A867Cu; f_800F58A0(c); // 800A8678
  c->r[3]=c->r[30]+0x00000010u; // 800A867C
  c->r[4]=0u+0x00000000u; // 800A8680
  c->lr=0x800A8688u; f_80113C10(c); // 800A8684
  cmps(c,0,(int32_t)c->r[31],0); // 800A8688
  if (!crb(c,1)) { goto L_800A8698; } // 800A868C
  c->r[3]=c->r[30]|c->r[30]; // 800A8690
  c->lr=0x800A8698u; f_800D93B0(c); // 800A8694
L_800A8698:;
  c->r[11]=c->r[1]+0x00000030u; // 800A8698
  c->r[3]=c->r[30]|c->r[30]; // 800A869C
  c->lr=0x800A86A4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A86A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800A86A4
  c->lr=c->r[0]; // 800A86A8
  c->r[1]=c->r[1]+0x00000030u; // 800A86AC
  return; // 800A86B0
}

// fn_800A86C0
void f_800A86C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A86C0
  c->r[0]=c->lr; // 800A86C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A86C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A86CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A86D0
  c->r[30]=c->r[3]|c->r[3]; // 800A86D4
  c->r[3]=0u+0x000000C4u; // 800A86D8
  c->lr=0x800A86E0u; f_800D8ED0(c); // 800A86DC
  cmps(c,0,(int32_t)c->r[3],0); // 800A86E0
  c->r[31]=c->r[3]|c->r[3]; // 800A86E4
  if (crb(c,2)) { goto L_800A8720; } // 800A86E8
  c->r[30]=R32(c->r[30]+0x00000374u); // 800A86EC
  c->lr=0x800A86F4u; f_800DA5C0(c); // 800A86F0
  c->r[4]=0u+0x80220000u; // 800A86F4
  c->r[3]=0u+0x00000000u; // 800A86F8
  c->r[4]=c->r[4]+0xFFFFAC78u; // 800A86FC
  W32(c->r[31]+0x00000000u,c->r[4]); // 800A8700
  W32(c->r[31]+0x00000070u,c->r[30]); // 800A8704
  W32(c->r[31]+0x00000074u,c->r[3]); // 800A8708
  W32(c->r[31]+0x00000078u,c->r[3]); // 800A870C
  W32(c->r[31]+0x000000C0u,c->r[3]); // 800A8710
  W8(c->r[31]+0x00000080u,c->r[3]); // 800A8714
  goto L_800A8720; // 800A8718
  W8(c->r[3]+0x00000000u,c->r[3]); // 800A871C
L_800A8720:;
  c->r[3]=c->r[31]|c->r[31]; // 800A8720
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8724
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A8728
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A872C
  c->lr=c->r[0]; // 800A8730
  c->r[1]=c->r[1]+0x00000010u; // 800A8734
  return; // 800A8738
}

// fn_800A8740
void f_800A8740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8740
  c->r[0]=c->lr; // 800A8744
  c->r[3]=0u+0x00000010u; // 800A8748
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A874C
  c->lr=0x800A8754u; f_800D8ED0(c); // 800A8750
  cmps(c,0,(int32_t)c->r[3],0); // 800A8754
  if (crb(c,2)) { goto L_800A8774; } // 800A8758
  c->r[0]=0u+0x00000000u; // 800A875C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A8760
  c->r[4]=0u+0x80220000u; // 800A8764
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A8768
  c->r[4]=c->r[4]+0xFFFFAC44u; // 800A876C
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A8770
L_800A8774:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8774
  c->lr=c->r[0]; // 800A8778
  c->r[1]=c->r[1]+0x00000010u; // 800A877C
  return; // 800A8780
}

// fn_800A8790
void f_800A8790(Ctx* __restrict c) {
  c->r[3]=R8(c->r[13]+0xFFFFAE30u); // 800A8790
  return; // 800A8794
}

// fn_800A87A0
void f_800A87A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A87A0
  c->r[0]=c->lr; // 800A87A4
  cmps(c,0,(int32_t)c->r[3],0); // 800A87A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A87AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A87B0
  c->r[31]=c->r[4]|c->r[4]; // 800A87B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A87B8
  c->r[30]=c->r[3]|c->r[3]; // 800A87BC
  if (crb(c,2)) { goto L_800A8818; } // 800A87C0
  c->r[5]=0u+0x80220000u; // 800A87C4
  c->r[4]=0u+0x80220000u; // 800A87C8
  c->r[5]=c->r[5]+0xFFFFAC78u; // 800A87CC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800A87D0
  c->r[3]=c->r[4]+0xFFFFAAB0u; // 800A87D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A87D8
  c->lr=0x800A87E0u; f_80157240(c); // 800A87DC
  cmps(c,0,(int32_t)c->r[30],0); // 800A87E0
  if (crb(c,2)) { goto L_800A8808; } // 800A87E4
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800A87E8
  if (crb(c,2)) { goto L_800A87F8; } // 800A87EC
  c->r[4]=0u+0x00000000u; // 800A87F0
  c->lr=0x800A87F8u; f_800D9E90(c); // 800A87F4
L_800A87F8:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800A87F8
  if (crb(c,2)) { goto L_800A8808; } // 800A87FC
  c->r[4]=0u+0x00000000u; // 800A8800
  c->lr=0x800A8808u; f_800D9E90(c); // 800A8804
L_800A8808:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A8808
  if (!crb(c,1)) { goto L_800A8818; } // 800A880C
  c->r[3]=c->r[30]|c->r[30]; // 800A8810
  c->lr=0x800A8818u; f_800D93B0(c); // 800A8814
L_800A8818:;
  c->r[3]=c->r[30]|c->r[30]; // 800A8818
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A881C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A8820
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8824
  c->lr=c->r[0]; // 800A8828
  c->r[1]=c->r[1]+0x00000010u; // 800A882C
  return; // 800A8830
}

// fn_800A8840
void f_800A8840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8840
  c->r[0]=c->lr; // 800A8844
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A8848
  c->r[11]=c->r[1]+0x00000040u; // 800A884C
  c->lr=0x800A8854u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A8850
  c->r[4]=R32(c->r[3]+0x00000074u); // 800A8854
  c->r[29]=0u+0x80220000u; // 800A8858
  c->r[31]=c->r[3]|c->r[3]; // 800A885C
  cmps(c,0,(int32_t)c->r[4],0); // 800A8860
  c->r[29]=c->r[29]+0xFFFFA8D0u; // 800A8864
  if (crb(c,2)) { goto L_800A8888; } // 800A8868
  cmpu(c,0,c->r[4],0x00000001u); // 800A886C
  if (crb(c,2)) { goto L_800A8968; } // 800A8870
  cmpu(c,0,c->r[4],0x00000002u); // 800A8874
  if (crb(c,2)) { goto L_800A8974; } // 800A8878
  cmpu(c,0,c->r[4],0x00000003u); // 800A887C
  if (crb(c,2)) { goto L_800A8AB0; } // 800A8880
  goto L_800A8AE8; // 800A8884
L_800A8888:;
  c->r[3]=0u+0x00000098u; // 800A8888
  c->lr=0x800A8890u; f_800D8ED0(c); // 800A888C
  cmps(c,0,(int32_t)c->r[3],0); // 800A8890
  c->r[28]=c->r[3]|c->r[3]; // 800A8894
  if (crb(c,2)) { goto L_800A894C; } // 800A8898
  c->r[29]=c->r[29]+0x00000200u; // 800A889C
  c->lr=0x800A88A4u; f_800DA5C0(c); // 800A88A0
  c->r[3]=0u+0x80220000u; // 800A88A4
  c->r[30]=0u+0x00000000u; // 800A88A8
  c->r[3]=c->r[3]+0xFFFFAC08u; // 800A88AC
  W32(c->r[28]+0x00000000u,c->r[3]); // 800A88B0
  c->r[3]=c->r[29]|c->r[29]; // 800A88B4
  W32(c->r[28]+0x00000070u,c->r[30]); // 800A88B8
  W32(c->r[28]+0x00000074u,c->r[30]); // 800A88BC
  W32(c->r[28]+0x0000007Cu,c->r[30]); // 800A88C0
  W32(c->r[28]+0x00000080u,c->r[30]); // 800A88C4
  W32(c->r[28]+0x00000084u,c->r[30]); // 800A88C8
  c->lr=0x800A88D0u; f_801D4D44(c); // 800A88CC
  c->r[27]=c->r[3]|c->r[3]; // 800A88D0
  c->r[3]=c->r[28]+0x0000007Cu; // 800A88D4
  c->r[4]=c->r[27]|c->r[27]; // 800A88D8
  c->lr=0x800A88E0u; f_800081B0(c); // 800A88DC
  c->r[0]=R8(c->r[1]+0x00000018u); // 800A88E0
  c->r[6]=c->r[29]|c->r[29]; // 800A88E4
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800A88E8
  c->r[3]=c->r[28]+0x0000007Cu; // 800A88EC
  c->r[7]=c->r[29]+c->r[27]; // 800A88F0
  c->r[8]=c->r[1]+0x0000001Cu; // 800A88F4
  c->r[4]=0u+0x00000000u; // 800A88F8
  c->r[5]=0u+0x00000000u; // 800A88FC
  c->lr=0x800A8904u; f_80008370(c); // 800A8900
  W32(c->r[28]+0x00000088u,c->r[30]); // 800A8904
  c->r[3]=c->r[29]|c->r[29]; // 800A8908
  W32(c->r[28]+0x0000008Cu,c->r[30]); // 800A890C
  W32(c->r[28]+0x00000090u,c->r[30]); // 800A8910
  c->lr=0x800A8918u; f_801D4D44(c); // 800A8914
  c->r[27]=c->r[3]|c->r[3]; // 800A8918
  c->r[3]=c->r[28]+0x00000088u; // 800A891C
  c->r[4]=c->r[27]|c->r[27]; // 800A8920
  c->lr=0x800A8928u; f_800081B0(c); // 800A8924
  c->r[0]=R8(c->r[1]+0x00000020u); // 800A8928
  c->r[6]=c->r[29]|c->r[29]; // 800A892C
  W8(c->r[1]+0x00000024u,c->r[0]); // 800A8930
  c->r[3]=c->r[28]+0x00000088u; // 800A8934
  c->r[7]=c->r[29]+c->r[27]; // 800A8938
  c->r[8]=c->r[1]+0x00000024u; // 800A893C
  c->r[4]=0u+0x00000000u; // 800A8940
  c->r[5]=0u+0x00000000u; // 800A8944
  c->lr=0x800A894Cu; f_80008370(c); // 800A8948
L_800A894C:;
  c->r[4]=c->r[28]|c->r[28]; // 800A894C
  c->r[3]=c->r[31]+0x00000010u; // 800A8950
  c->lr=0x800A8958u; f_800DA000(c); // 800A8954
  c->r[3]=R32(c->r[31]+0x00000074u); // 800A8958
  c->r[0]=c->r[3]+0x00000001u; // 800A895C
  W32(c->r[31]+0x00000074u,c->r[0]); // 800A8960
  goto L_800A8AE8; // 800A8964
L_800A8968:;
  c->r[0]=c->r[4]+0x00000001u; // 800A8968
  W32(c->r[3]+0x00000074u,c->r[0]); // 800A896C
  goto L_800A8AE8; // 800A8970
L_800A8974:;
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800A8974
  c->r[30]=0u+0x801F0000u; // 800A8978
  c->r[30]=c->r[30]+0xFFFFB390u; // 800A897C
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800A8980
  c->r[0]=R32(c->r[30]+c->r[3]); // 800A8984
  cmps(c,0,(int32_t)c->r[0],0); // 800A8988
  if (crb(c,2)) { goto L_800A8A94; } // 800A898C
  c->r[4]=c->r[30]+c->r[3]; // 800A8990
  c->r[3]=c->r[29]+0x00000214u; // 800A8994
  c->r[4]=R32(c->r[4]+0x00000004u); // 800A8998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A899C
  c->lr=0x800A89A4u; f_80157240(c); // 800A89A0
  c->r[3]=0u+0x00000098u; // 800A89A4
  c->lr=0x800A89ACu; f_800D8ED0(c); // 800A89A8
  cmps(c,0,(int32_t)c->r[3],0); // 800A89AC
  c->r[28]=c->r[3]|c->r[3]; // 800A89B0
  if (crb(c,2)) { goto L_800A8A78; } // 800A89B4
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800A89B8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800A89BC
  c->r[4]=c->r[30]+c->r[0]; // 800A89C0
  c->r[29]=R32(c->r[30]+c->r[0]); // 800A89C4
  c->r[27]=R32(c->r[4]+0x00000004u); // 800A89C8
  c->lr=0x800A89D0u; f_800DA5C0(c); // 800A89CC
  c->r[3]=0u+0x80220000u; // 800A89D0
  c->r[30]=0u+0x00000000u; // 800A89D4
  c->r[3]=c->r[3]+0xFFFFAC08u; // 800A89D8
  W32(c->r[28]+0x00000000u,c->r[3]); // 800A89DC
  c->r[3]=c->r[29]|c->r[29]; // 800A89E0
  W32(c->r[28]+0x00000070u,c->r[30]); // 800A89E4
  W32(c->r[28]+0x00000074u,c->r[30]); // 800A89E8
  W32(c->r[28]+0x0000007Cu,c->r[30]); // 800A89EC
  W32(c->r[28]+0x00000080u,c->r[30]); // 800A89F0
  W32(c->r[28]+0x00000084u,c->r[30]); // 800A89F4
  c->lr=0x800A89FCu; f_801D4D44(c); // 800A89F8
  c->r[26]=c->r[3]|c->r[3]; // 800A89FC
  c->r[3]=c->r[28]+0x0000007Cu; // 800A8A00
  c->r[4]=c->r[26]|c->r[26]; // 800A8A04
  c->lr=0x800A8A0Cu; f_800081B0(c); // 800A8A08
  c->r[0]=R8(c->r[1]+0x00000008u); // 800A8A0C
  c->r[6]=c->r[29]|c->r[29]; // 800A8A10
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800A8A14
  c->r[3]=c->r[28]+0x0000007Cu; // 800A8A18
  c->r[7]=c->r[29]+c->r[26]; // 800A8A1C
  c->r[8]=c->r[1]+0x0000000Cu; // 800A8A20
  c->r[4]=0u+0x00000000u; // 800A8A24
  c->r[5]=0u+0x00000000u; // 800A8A28
  c->lr=0x800A8A30u; f_80008370(c); // 800A8A2C
  W32(c->r[28]+0x00000088u,c->r[30]); // 800A8A30
  c->r[3]=c->r[27]|c->r[27]; // 800A8A34
  W32(c->r[28]+0x0000008Cu,c->r[30]); // 800A8A38
  W32(c->r[28]+0x00000090u,c->r[30]); // 800A8A3C
  c->lr=0x800A8A44u; f_801D4D44(c); // 800A8A40
  c->r[26]=c->r[3]|c->r[3]; // 800A8A44
  c->r[3]=c->r[28]+0x00000088u; // 800A8A48
  c->r[4]=c->r[26]|c->r[26]; // 800A8A4C
  c->lr=0x800A8A54u; f_800081B0(c); // 800A8A50
  c->r[0]=R8(c->r[1]+0x00000010u); // 800A8A54
  c->r[6]=c->r[27]|c->r[27]; // 800A8A58
  W8(c->r[1]+0x00000014u,c->r[0]); // 800A8A5C
  c->r[3]=c->r[28]+0x00000088u; // 800A8A60
  c->r[7]=c->r[27]+c->r[26]; // 800A8A64
  c->r[8]=c->r[1]+0x00000014u; // 800A8A68
  c->r[4]=0u+0x00000000u; // 800A8A6C
  c->r[5]=0u+0x00000000u; // 800A8A70
  c->lr=0x800A8A78u; f_80008370(c); // 800A8A74
L_800A8A78:;
  c->r[4]=c->r[28]|c->r[28]; // 800A8A78
  c->r[3]=c->r[31]+0x00000010u; // 800A8A7C
  c->lr=0x800A8A84u; f_800DA000(c); // 800A8A80
  c->r[3]=R32(c->r[31]+0x000000C0u); // 800A8A84
  c->r[0]=c->r[3]+0x00000001u; // 800A8A88
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800A8A8C
  goto L_800A8AE8; // 800A8A90
L_800A8A94:;
  c->r[3]=c->r[29]+0x00000228u; // 800A8A94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A8A98
  c->lr=0x800A8AA0u; f_80157240(c); // 800A8A9C
  c->r[3]=R32(c->r[31]+0x00000074u); // 800A8AA0
  c->r[0]=c->r[3]+0x00000001u; // 800A8AA4
  W32(c->r[31]+0x00000074u,c->r[0]); // 800A8AA8
  goto L_800A8AE8; // 800A8AAC
L_800A8AB0:;
  c->r[4]=0u+0x80260000u; // 800A8AB0
  c->r[3]=R32(c->r[3]+0x00000070u); // 800A8AB4
  c->r[4]=c->r[4]+0xFFFFBD48u; // 800A8AB8
  c->r[5]=c->r[29]+0x00000200u; // 800A8ABC
  c->lr=0x800A8AC4u; f_80116048(c); // 800A8AC0
  c->r[3]=R32(c->r[31]+0x00000078u); // 800A8AC4
  cmps(c,0,(int32_t)c->r[3],0); // 800A8AC8
  if (crb(c,2)) { goto L_800A8AD8; } // 800A8ACC
  c->r[0]=0u+0x00000001u; // 800A8AD0
  W8(c->r[3]+0x00000000u,c->r[0]); // 800A8AD4
L_800A8AD8:;
  c->r[0]=0u+0x00000001u; // 800A8AD8
  W8(c->r[13]+0xFFFFAE30u,c->r[0]); // 800A8ADC
  c->r[0]=0u+0x00000002u; // 800A8AE0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A8AE4
L_800A8AE8:;
  c->r[11]=c->r[1]+0x00000040u; // 800A8AE8
  c->lr=0x800A8AF0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A8AEC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A8AF0
  c->lr=c->r[0]; // 800A8AF4
  c->r[1]=c->r[1]+0x00000040u; // 800A8AF8
  return; // 800A8AFC
}

// fn_800A8B00
void f_800A8B00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8B00
  c->r[0]=c->lr; // 800A8B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8B08
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8B0C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A8B10
  cmps(c,0,(int32_t)c->r[0],0); // 800A8B14
  if (!crb(c,2)) { goto L_800A8B2C; } // 800A8B18
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8B1C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8B20
  c->ctr=c->r[12]; // 800A8B24
  if (true) { c->lr=0x800A8B2Cu; dispatch(c,c->ctr); } // 800A8B28
L_800A8B2C:;
  c->r[4]=0u+0x80260000u; // 800A8B2C
  c->r[0]=0u+0x00000004u; // 800A8B30
  c->r[4]=c->r[4]+0xFFFFBD58u; // 800A8B34
  c->r[3]=0u+0x00000000u; // 800A8B38
  c->ctr=c->r[0]; // 800A8B3C
L_800A8B40:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 800A8B40
  W8(c->r[4]+0x00000001u,c->r[3]); // 800A8B44
  W8(c->r[4]+0x00000002u,c->r[3]); // 800A8B48
  W8(c->r[4]+0x00000003u,c->r[3]); // 800A8B4C
  W8(c->r[4]+0x00000004u,c->r[3]); // 800A8B50
  W8(c->r[4]+0x00000005u,c->r[3]); // 800A8B54
  W8(c->r[4]+0x00000006u,c->r[3]); // 800A8B58
  W8(c->r[4]+0x00000007u,c->r[3]); // 800A8B5C
  W8(c->r[4]+0x00000008u,c->r[3]); // 800A8B60
  W8(c->r[4]+0x00000009u,c->r[3]); // 800A8B64
  W8(c->r[4]+0x0000000Au,c->r[3]); // 800A8B68
  W8(c->r[4]+0x0000000Bu,c->r[3]); // 800A8B6C
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 800A8B70
  W8(c->r[4]+0x0000000Du,c->r[3]); // 800A8B74
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 800A8B78
  W8(c->r[4]+0x0000000Fu,c->r[3]); // 800A8B7C
  W8(c->r[4]+0x00000010u,c->r[3]); // 800A8B80
  W8(c->r[4]+0x00000011u,c->r[3]); // 800A8B84
  W8(c->r[4]+0x00000012u,c->r[3]); // 800A8B88
  W8(c->r[4]+0x00000013u,c->r[3]); // 800A8B8C
  W8(c->r[4]+0x00000014u,c->r[3]); // 800A8B90
  W8(c->r[4]+0x00000015u,c->r[3]); // 800A8B94
  W8(c->r[4]+0x00000016u,c->r[3]); // 800A8B98
  W8(c->r[4]+0x00000017u,c->r[3]); // 800A8B9C
  W8(c->r[4]+0x00000018u,c->r[3]); // 800A8BA0
  W8(c->r[4]+0x00000019u,c->r[3]); // 800A8BA4
  W8(c->r[4]+0x0000001Au,c->r[3]); // 800A8BA8
  W8(c->r[4]+0x0000001Bu,c->r[3]); // 800A8BAC
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 800A8BB0
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800A8BB4
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 800A8BB8
  W8(c->r[4]+0x0000001Fu,c->r[3]); // 800A8BBC
  c->r[4]=c->r[4]+0x00000020u; // 800A8BC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A8B40; } // 800A8BC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8BC8
  c->lr=c->r[0]; // 800A8BCC
  c->r[1]=c->r[1]+0x00000010u; // 800A8BD0
  return; // 800A8BD4
}

// fn_800A8BE0
void f_800A8BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8BE0
  c->r[0]=c->lr; // 800A8BE4
  c->r[5]=0u+0x80260000u; // 800A8BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8BEC
  c->r[5]=c->r[5]+0xFFFFBD58u; // 800A8BF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8BF4
  c->r[31]=c->r[4]|c->r[4]; // 800A8BF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A8BFC
  c->r[30]=c->r[3]|c->r[3]; // 800A8C00
  c->r[0]=R8(c->r[5]+c->r[4]); // 800A8C04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A8C08
  if (!crb(c,2)) { goto L_800A8C30; } // 800A8C0C
  c->r[0]=0u+0x00000001u; // 800A8C10
  W8(c->r[5]+c->r[4],c->r[0]); // 800A8C14
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8C18
  c->lr=0x800A8C20u; f_80116438(c); // 800A8C1C
  c->r[3]=R32(c->r[30]+0x00000374u); // 800A8C20
  c->r[4]=c->r[31]|c->r[31]; // 800A8C24
  c->r[5]=c->r[31]|c->r[31]; // 800A8C28
  c->lr=0x800A8C30u; f_80116458(c); // 800A8C2C
L_800A8C30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8C30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8C34
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A8C38
  c->lr=c->r[0]; // 800A8C3C
  c->r[1]=c->r[1]+0x00000010u; // 800A8C40
  return; // 800A8C44
}

// fn_800A8C50
void f_800A8C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8C50
  c->r[0]=c->lr; // 800A8C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8C58
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8C5C
  c->lr=0x800A8C64u; f_801164C4(c); // 800A8C60
  c->r[4]=0u+0x80260000u; // 800A8C64
  c->r[0]=0u+0x00000004u; // 800A8C68
  c->r[4]=c->r[4]+0xFFFFBD58u; // 800A8C6C
  c->r[3]=0u+0x00000000u; // 800A8C70
  c->ctr=c->r[0]; // 800A8C74
L_800A8C78:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 800A8C78
  W8(c->r[4]+0x00000001u,c->r[3]); // 800A8C7C
  W8(c->r[4]+0x00000002u,c->r[3]); // 800A8C80
  W8(c->r[4]+0x00000003u,c->r[3]); // 800A8C84
  W8(c->r[4]+0x00000004u,c->r[3]); // 800A8C88
  W8(c->r[4]+0x00000005u,c->r[3]); // 800A8C8C
  W8(c->r[4]+0x00000006u,c->r[3]); // 800A8C90
  W8(c->r[4]+0x00000007u,c->r[3]); // 800A8C94
  W8(c->r[4]+0x00000008u,c->r[3]); // 800A8C98
  W8(c->r[4]+0x00000009u,c->r[3]); // 800A8C9C
  W8(c->r[4]+0x0000000Au,c->r[3]); // 800A8CA0
  W8(c->r[4]+0x0000000Bu,c->r[3]); // 800A8CA4
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 800A8CA8
  W8(c->r[4]+0x0000000Du,c->r[3]); // 800A8CAC
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 800A8CB0
  W8(c->r[4]+0x0000000Fu,c->r[3]); // 800A8CB4
  W8(c->r[4]+0x00000010u,c->r[3]); // 800A8CB8
  W8(c->r[4]+0x00000011u,c->r[3]); // 800A8CBC
  W8(c->r[4]+0x00000012u,c->r[3]); // 800A8CC0
  W8(c->r[4]+0x00000013u,c->r[3]); // 800A8CC4
  W8(c->r[4]+0x00000014u,c->r[3]); // 800A8CC8
  W8(c->r[4]+0x00000015u,c->r[3]); // 800A8CCC
  W8(c->r[4]+0x00000016u,c->r[3]); // 800A8CD0
  W8(c->r[4]+0x00000017u,c->r[3]); // 800A8CD4
  W8(c->r[4]+0x00000018u,c->r[3]); // 800A8CD8
  W8(c->r[4]+0x00000019u,c->r[3]); // 800A8CDC
  W8(c->r[4]+0x0000001Au,c->r[3]); // 800A8CE0
  W8(c->r[4]+0x0000001Bu,c->r[3]); // 800A8CE4
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 800A8CE8
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800A8CEC
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 800A8CF0
  W8(c->r[4]+0x0000001Fu,c->r[3]); // 800A8CF4
  c->r[4]=c->r[4]+0x00000020u; // 800A8CF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A8C78; } // 800A8CFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8D00
  c->lr=c->r[0]; // 800A8D04
  c->r[1]=c->r[1]+0x00000010u; // 800A8D08
  return; // 800A8D0C
}

// fn_800A8D10
void f_800A8D10(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000378u); // 800A8D10
  return; // 800A8D14
}

// fn_800A8D20
void f_800A8D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8D20
  c->r[0]=c->lr; // 800A8D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8D28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8D2C
  c->r[31]=c->r[4]|c->r[4]; // 800A8D30
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A8D34
  c->r[30]=c->r[3]|c->r[3]; // 800A8D38
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8D3C
  c->lr=0x800A8D44u; f_801161A4(c); // 800A8D40
  c->r[3]=R32(c->r[30]+0x00000374u); // 800A8D44
  c->r[4]=c->r[31]|c->r[31]; // 800A8D48
  c->lr=0x800A8D50u; f_801161EC(c); // 800A8D4C
  c->r[0]=0u+0x00000000u; // 800A8D50
  W8(c->r[30]+0x00000378u,c->r[0]); // 800A8D54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8D58
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A8D5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8D60
  c->lr=c->r[0]; // 800A8D64
  c->r[1]=c->r[1]+0x00000010u; // 800A8D68
  return; // 800A8D6C
}

// fn_800A8D70
void f_800A8D70(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800A8D70
  W8(c->r[3]+0x00000378u,c->r[0]); // 800A8D74
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8D78
  f_801161A4(c); return; // 800A8D7C
}

// fn_800A8D80
void f_800A8D80(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000037Cu; WF32(ea,c->f[1]);} // 800A8D80
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8D84
  f_80116548(c); return; // 800A8D88
}

// fn_800A8D90
void f_800A8D90(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000380u; WF32(ea,c->f[1]);} // 800A8D90
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8D94
  f_80116568(c); return; // 800A8D98
}

// fn_800A8DA0
void f_800A8DA0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8DA0
  f_8011652C(c); return; // 800A8DA4
}

// fn_800A8DB0
void f_800A8DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8DB0
  c->r[0]=c->lr; // 800A8DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8DBC
  c->r[31]=c->r[3]|c->r[3]; // 800A8DC0
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8DC4
  c->lr=0x800A8DCCu; f_801163EC(c); // 800A8DC8
  cmps(c,0,(int32_t)c->r[3],0); // 800A8DCC
  if (!crb(c,2)) { goto L_800A8DE8; } // 800A8DD0
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8DD4
  c->lr=0x800A8DDCu; f_8011626C(c); // 800A8DD8
  c->r[0]=0u+0x00000001u; // 800A8DDC
  W8(c->r[31]+0x00000379u,c->r[0]); // 800A8DE0
  goto L_800A8DF0; // 800A8DE4
L_800A8DE8:;
  c->r[0]=0u+0x00000000u; // 800A8DE8
  W8(c->r[31]+0x00000379u,c->r[0]); // 800A8DEC
L_800A8DF0:;
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8DF0
  {uint32_t ea=c->r[2]+0xFFFFA5D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8DF4
  c->lr=0x800A8DFCu; f_80116548(c); // 800A8DF8
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8DFC
  {uint32_t ea=c->r[2]+0xFFFFA5D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8E00
  c->lr=0x800A8E08u; f_80116568(c); // 800A8E04
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8E08
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A8E0C
  cmps(c,0,(int32_t)c->r[0],0); // 800A8E10
  if (!crb(c,2)) { goto L_800A8E28; } // 800A8E14
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8E18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8E1C
  c->ctr=c->r[12]; // 800A8E20
  if (true) { c->lr=0x800A8E28u; dispatch(c,c->ctr); } // 800A8E24
L_800A8E28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8E28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8E2C
  c->lr=c->r[0]; // 800A8E30
  c->r[1]=c->r[1]+0x00000010u; // 800A8E34
  return; // 800A8E38
}

// fn_800A8E40
void f_800A8E40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8E40
  c->r[0]=c->lr; // 800A8E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8E4C
  c->r[31]=c->r[3]|c->r[3]; // 800A8E50
  c->r[0]=R8(c->r[3]+0x00000379u); // 800A8E54
  cmps(c,0,(int32_t)c->r[0],0); // 800A8E58
  if (crb(c,2)) { goto L_800A8E68; } // 800A8E5C
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8E60
  c->lr=0x800A8E68u; f_8011632C(c); // 800A8E64
L_800A8E68:;
  c->r[0]=0u+0x00000000u; // 800A8E68
  W8(c->r[31]+0x00000379u,c->r[0]); // 800A8E6C
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8E70
  {uint32_t ea=c->r[31]+0x0000037Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8E74
  c->lr=0x800A8E7Cu; f_80116548(c); // 800A8E78
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8E7C
  {uint32_t ea=c->r[31]+0x00000380u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8E80
  c->lr=0x800A8E88u; f_80116568(c); // 800A8E84
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8E88
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A8E8C
  cmps(c,0,(int32_t)c->r[0],0); // 800A8E90
  if (!crb(c,2)) { goto L_800A8EA8; } // 800A8E94
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8E98
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8E9C
  c->ctr=c->r[12]; // 800A8EA0
  if (true) { c->lr=0x800A8EA8u; dispatch(c,c->ctr); } // 800A8EA4
L_800A8EA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8EA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8EAC
  c->lr=c->r[0]; // 800A8EB0
  c->r[1]=c->r[1]+0x00000010u; // 800A8EB4
  return; // 800A8EB8
}

// fn_800A8EC0
void f_800A8EC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8EC0
  c->r[0]=c->lr; // 800A8EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8EC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8ECC
  c->r[31]=c->r[3]|c->r[3]; // 800A8ED0
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A8ED4
  c->lr=0x800A8EDCu; f_801163EC(c); // 800A8ED8
  cmps(c,0,(int32_t)c->r[3],0); // 800A8EDC
  if (!crb(c,2)) { goto L_800A8EEC; } // 800A8EE0
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8EE4
  c->lr=0x800A8EECu; f_8011626C(c); // 800A8EE8
L_800A8EEC:;
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8EEC
  {uint32_t ea=c->r[2]+0xFFFFA5D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8EF0
  c->lr=0x800A8EF8u; f_80116548(c); // 800A8EF4
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8EF8
  {uint32_t ea=c->r[2]+0xFFFFA5D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A8EFC
  c->lr=0x800A8F04u; f_80116568(c); // 800A8F00
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A8F04
  c->r[0]=R32(c->r[3]+0x00000008u); // 800A8F08
  cmps(c,0,(int32_t)c->r[0],0); // 800A8F0C
  if (!crb(c,2)) { goto L_800A8F24; } // 800A8F10
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A8F14
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800A8F18
  c->ctr=c->r[12]; // 800A8F1C
  if (true) { c->lr=0x800A8F24u; dispatch(c,c->ctr); } // 800A8F20
L_800A8F24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8F24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8F28
  c->lr=c->r[0]; // 800A8F2C
  c->r[1]=c->r[1]+0x00000010u; // 800A8F30
  return; // 800A8F34
}

// fn_800A8F40
void f_800A8F40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8F40
  c->r[0]=c->lr; // 800A8F44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8F48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8F4C
  c->r[31]=c->r[3]|c->r[3]; // 800A8F50
  c->r[3]=0u+0x00000014u; // 800A8F54
  c->lr=0x800A8F5Cu; f_800D8ED0(c); // 800A8F58
  cmps(c,0,(int32_t)c->r[3],0); // 800A8F5C
  if (crb(c,2)) { goto L_800A8F80; } // 800A8F60
  c->r[0]=0u+0x00000000u; // 800A8F64
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A8F68
  c->r[4]=0u+0x80220000u; // 800A8F6C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A8F70
  c->r[4]=c->r[4]+0xFFFFAB80u; // 800A8F74
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A8F78
  W32(c->r[3]+0x00000010u,c->r[31]); // 800A8F7C
L_800A8F80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8F80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8F84
  c->lr=c->r[0]; // 800A8F88
  c->r[1]=c->r[1]+0x00000010u; // 800A8F8C
  return; // 800A8F90
}

// fn_800A8FA0
void f_800A8FA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A8FA0
  c->r[0]=c->lr; // 800A8FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A8FA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A8FAC
  c->r[31]=c->r[4]|c->r[4]; // 800A8FB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A8FB4
  c->r[30]=c->r[3]|c->r[3]; // 800A8FB8
  c->r[3]=0u+0x00000018u; // 800A8FBC
  c->lr=0x800A8FC4u; f_800D8ED0(c); // 800A8FC0
  cmps(c,0,(int32_t)c->r[3],0); // 800A8FC4
  if (crb(c,2)) { goto L_800A8FEC; } // 800A8FC8
  c->r[0]=0u+0x00000000u; // 800A8FCC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A8FD0
  c->r[4]=0u+0x80220000u; // 800A8FD4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800A8FD8
  c->r[4]=c->r[4]+0xFFFFAB54u; // 800A8FDC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A8FE0
  W32(c->r[3]+0x00000010u,c->r[30]); // 800A8FE4
  W32(c->r[3]+0x00000014u,c->r[31]); // 800A8FE8
L_800A8FEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A8FEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A8FF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A8FF4
  c->lr=c->r[0]; // 800A8FF8
  c->r[1]=c->r[1]+0x00000010u; // 800A8FFC
  return; // 800A9000
}

// fn_800A9010
void f_800A9010(Ctx* __restrict c) {
  return; // 800A9010
}

// fn_800A9020
void f_800A9020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9020
  c->r[0]=c->lr; // 800A9024
  c->r[4]=c->r[13]+0xFFFF9FB8u; // 800A9028
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800A902C
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800A9030
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800A9034
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800A9038
  c->r[29]=c->r[3]|c->r[3]; // 800A903C
  c->r[3]=c->r[1]+0x00000020u; // 800A9040
  c->r[0]=R32(c->r[29]+0x00000078u); // 800A9044
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9048
  if (!crb(c,2)) { goto L_800A9058; } // 800A904C
  c->r[5]=c->r[29]+0x00000079u; // 800A9050
  goto L_800A905C; // 800A9054
L_800A9058:;
  c->r[5]=R32(c->r[29]+0x00000080u); // 800A9058
L_800A905C:;
  c->r[6]=R32(c->r[29]+0x00000070u); // 800A905C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9060
  c->lr=0x800A9068u; f_801DB784(c); // 800A9064
  c->r[0]=0u+0x00000000u; // 800A9068
  W32(c->r[1]+0x00000010u,c->r[0]); // 800A906C
  c->r[31]=c->r[1]+0x00000010u; // 800A9070
  c->r[3]=c->r[1]+0x00000020u; // 800A9074
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9078
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A907C
  c->lr=0x800A9084u; f_801D4D44(c); // 800A9080
  c->r[30]=c->r[3]|c->r[3]; // 800A9084
  c->r[3]=c->r[31]|c->r[31]; // 800A9088
  c->r[4]=c->r[30]|c->r[30]; // 800A908C
  c->lr=0x800A9094u; f_800081B0(c); // 800A9090
  c->r[6]=c->r[1]+0x00000020u; // 800A9094
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800A9098
  c->r[7]=c->r[6]|c->r[6]; // 800A909C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800A90A0
  c->r[3]=c->r[31]|c->r[31]; // 800A90A4
  c->r[8]=c->r[1]+0x00000008u; // 800A90A8
  c->r[7]=c->r[7]+c->r[30]; // 800A90AC
  c->r[4]=0u+0x00000000u; // 800A90B0
  c->r[5]=0u+0x00000000u; // 800A90B4
  c->lr=0x800A90BCu; f_80008370(c); // 800A90B8
  c->r[3]=R32(c->r[29]+0x00000074u); // 800A90BC
  c->r[4]=c->r[31]|c->r[31]; // 800A90C0
  c->lr=0x800A90C8u; f_800E6690(c); // 800A90C4
  c->r[0]=R32(c->r[1]+0x00000010u); // 800A90C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A90CC
  if (crb(c,2)) { goto L_800A90DC; } // 800A90D0
  c->r[3]=R32(c->r[1]+0x00000018u); // 800A90D4
  c->lr=0x800A90DCu; f_800D93B0(c); // 800A90D8
L_800A90DC:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800A90DC
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800A90E0
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800A90E4
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800A90E8
  c->lr=c->r[0]; // 800A90EC
  c->r[1]=c->r[1]+0x000000B0u; // 800A90F0
  return; // 800A90F4
}

// fn_800A9100
void f_800A9100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9100
  c->r[0]=c->lr; // 800A9104
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A910C
  c->r[31]=c->r[3]|c->r[3]; // 800A9110
  c->lr=0x800A9118u; f_800DA5C0(c); // 800A9114
  c->r[3]=0u+0x80220000u; // 800A9118
  c->r[4]=0u+0x00000000u; // 800A911C
  c->r[3]=c->r[3]+0xFFFFACB8u; // 800A9120
  c->r[0]=0u+0x00000002u; // 800A9124
  W32(c->r[31]+0x00000000u,c->r[3]); // 800A9128
  c->r[3]=c->r[31]|c->r[31]; // 800A912C
  W32(c->r[31]+0x00000070u,c->r[4]); // 800A9130
  W32(c->r[31]+0x00000074u,c->r[4]); // 800A9134
  W32(c->r[31]+0x00000080u,c->r[4]); // 800A9138
  W32(c->r[31]+0x00000084u,c->r[4]); // 800A913C
  W32(c->r[31]+0x00000088u,c->r[4]); // 800A9140
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A9144
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A9148
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A914C
  c->lr=c->r[0]; // 800A9150
  c->r[1]=c->r[1]+0x00000010u; // 800A9154
  return; // 800A9158
}

// fn_800A9160
void f_800A9160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9160
  c->r[0]=c->lr; // 800A9164
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A916C
  c->r[31]=c->r[3]|c->r[3]; // 800A9170
  c->r[0]=R32(c->r[3]+0x00000074u); // 800A9174
  cmps(c,0,(int32_t)c->r[0],0); // 800A9178
  if (!crb(c,2)) { goto L_800A9464; } // 800A917C
  c->r[4]=R32(c->r[3]+0x0000007Cu); // 800A9180
  c->r[5]=R32(c->r[4]+0x00000004u); // 800A9184
  c->r[4]=R32(c->r[4]+0x00000008u); // 800A9188
  c->r[0]=c->r[5]&0x0000DFFFu; cr0(c,c->r[0]); // 800A918C
  c->r[4]=c->r[5]^c->r[4]; // 800A9190
  c->r[0]=c->r[4]&c->r[0]; // 800A9194
  cmpu(c,0,c->r[0],0x00000040u); // 800A9198
  if (crb(c,2)) { goto L_800A91D4; } // 800A919C
  cmpu(c,0,c->r[0],0x00000080u); // 800A91A0
  if (crb(c,2)) { goto L_800A91F0; } // 800A91A4
  cmpu(c,0,c->r[0],0x00000020u); // 800A91A8
  if (crb(c,2)) { goto L_800A9214; } // 800A91AC
  cmpu(c,0,c->r[0],0x00000010u); // 800A91B0
  if (crb(c,2)) { goto L_800A9268; } // 800A91B4
  cmpu(c,0,c->r[0],0x00000001u); // 800A91B8
  if (crb(c,2)) { goto L_800A92BC; } // 800A91BC
  cmpu(c,0,c->r[0],0x00000002u); // 800A91C0
  if (crb(c,2)) { goto L_800A92E0; } // 800A91C4
  cmpu(c,0,c->r[0],0x00000400u); // 800A91C8
  if (crb(c,2)) { goto L_800A93A0; } // 800A91CC
  goto L_800A9464; // 800A91D0
L_800A91D4:;
  c->r[4]=R32(c->r[3]+0x00000070u); // 800A91D4
  c->r[0]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800A91D8
  W32(c->r[3]+0x00000070u,c->r[0]); // 800A91DC
  if (!crb(c,0)) { goto L_800A9464; } // 800A91E0
  c->r[0]=0u+0x00000000u; // 800A91E4
  W32(c->r[3]+0x00000070u,c->r[0]); // 800A91E8
  goto L_800A9464; // 800A91EC
L_800A91F0:;
  c->r[4]=R32(c->r[3]+0x00000070u); // 800A91F0
  c->r[5]=R32(c->r[3]+0x00000084u); // 800A91F4
  c->r[0]=c->r[4]+0x00000001u; // 800A91F8
  W32(c->r[3]+0x00000070u,c->r[0]); // 800A91FC
  cmpu(c,0,c->r[0],c->r[5]); // 800A9200
  if (crb(c,0)) { goto L_800A9464; } // 800A9204
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800A9208
  W32(c->r[3]+0x00000070u,c->r[0]); // 800A920C
  goto L_800A9464; // 800A9210
L_800A9214:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 800A9214
  c->r[3]=R32(c->r[3]+0x00000080u); // 800A9218
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A921C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800A9220
  c->r[4]=R32(c->r[3]+0x00000070u); // 800A9224
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800A9228
  W32(c->r[3]+0x00000070u,c->r[0]); // 800A922C
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 800A9230
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800A9234
  if (!crb(c,0)) { goto L_800A9240; } // 800A9238
  W32(c->r[3]+0x00000070u,c->r[4]); // 800A923C
L_800A9240:;
  c->r[4]=R32(c->r[3]+0x00000090u); // 800A9240
  c->r[0]=R32(c->r[3]+0x00000070u); // 800A9244
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800A9248
  if (!crb(c,1)) { goto L_800A9254; } // 800A924C
  W32(c->r[3]+0x00000070u,c->r[4]); // 800A9250
L_800A9254:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A9254
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800A9258
  c->ctr=c->r[12]; // 800A925C
  if (true) { c->lr=0x800A9264u; dispatch(c,c->ctr); } // 800A9260
  goto L_800A9464; // 800A9264
L_800A9268:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 800A9268
  c->r[3]=R32(c->r[3]+0x00000080u); // 800A926C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A9270
  c->r[3]=R32(c->r[3]+c->r[0]); // 800A9274
  c->r[4]=R32(c->r[3]+0x00000070u); // 800A9278
  c->r[0]=c->r[4]+0x00000001u; // 800A927C
  W32(c->r[3]+0x00000070u,c->r[0]); // 800A9280
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 800A9284
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800A9288
  if (!crb(c,0)) { goto L_800A9294; } // 800A928C
  W32(c->r[3]+0x00000070u,c->r[4]); // 800A9290
L_800A9294:;
  c->r[4]=R32(c->r[3]+0x00000090u); // 800A9294
  c->r[0]=R32(c->r[3]+0x00000070u); // 800A9298
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800A929C
  if (!crb(c,1)) { goto L_800A92A8; } // 800A92A0
  W32(c->r[3]+0x00000070u,c->r[4]); // 800A92A4
L_800A92A8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A92A8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800A92AC
  c->ctr=c->r[12]; // 800A92B0
  if (true) { c->lr=0x800A92B8u; dispatch(c,c->ctr); } // 800A92B4
  goto L_800A9464; // 800A92B8
L_800A92BC:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 800A92BC
  c->r[3]=R32(c->r[3]+0x00000080u); // 800A92C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A92C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800A92C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800A92CC
  c->r[12]=R32(c->r[12]+0x00000018u); // 800A92D0
  c->ctr=c->r[12]; // 800A92D4
  if (true) { c->lr=0x800A92DCu; dispatch(c,c->ctr); } // 800A92D8
  goto L_800A9464; // 800A92DC
L_800A92E0:;
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A92E0
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A92E4
  c->lr=0x800A92ECu; f_801164C4(c); // 800A92E8
  c->r[4]=0u+0x80260000u; // 800A92EC
  c->r[0]=0u+0x00000004u; // 800A92F0
  c->r[4]=c->r[4]+0xFFFFBD58u; // 800A92F4
  c->r[3]=0u+0x00000000u; // 800A92F8
  c->ctr=c->r[0]; // 800A92FC
L_800A9300:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 800A9300
  W8(c->r[4]+0x00000001u,c->r[3]); // 800A9304
  W8(c->r[4]+0x00000002u,c->r[3]); // 800A9308
  W8(c->r[4]+0x00000003u,c->r[3]); // 800A930C
  W8(c->r[4]+0x00000004u,c->r[3]); // 800A9310
  W8(c->r[4]+0x00000005u,c->r[3]); // 800A9314
  W8(c->r[4]+0x00000006u,c->r[3]); // 800A9318
  W8(c->r[4]+0x00000007u,c->r[3]); // 800A931C
  W8(c->r[4]+0x00000008u,c->r[3]); // 800A9320
  W8(c->r[4]+0x00000009u,c->r[3]); // 800A9324
  W8(c->r[4]+0x0000000Au,c->r[3]); // 800A9328
  W8(c->r[4]+0x0000000Bu,c->r[3]); // 800A932C
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 800A9330
  W8(c->r[4]+0x0000000Du,c->r[3]); // 800A9334
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 800A9338
  W8(c->r[4]+0x0000000Fu,c->r[3]); // 800A933C
  W8(c->r[4]+0x00000010u,c->r[3]); // 800A9340
  W8(c->r[4]+0x00000011u,c->r[3]); // 800A9344
  W8(c->r[4]+0x00000012u,c->r[3]); // 800A9348
  W8(c->r[4]+0x00000013u,c->r[3]); // 800A934C
  W8(c->r[4]+0x00000014u,c->r[3]); // 800A9350
  W8(c->r[4]+0x00000015u,c->r[3]); // 800A9354
  W8(c->r[4]+0x00000016u,c->r[3]); // 800A9358
  W8(c->r[4]+0x00000017u,c->r[3]); // 800A935C
  W8(c->r[4]+0x00000018u,c->r[3]); // 800A9360
  W8(c->r[4]+0x00000019u,c->r[3]); // 800A9364
  W8(c->r[4]+0x0000001Au,c->r[3]); // 800A9368
  W8(c->r[4]+0x0000001Bu,c->r[3]); // 800A936C
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 800A9370
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800A9374
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 800A9378
  W8(c->r[4]+0x0000001Fu,c->r[3]); // 800A937C
  c->r[4]=c->r[4]+0x00000020u; // 800A9380
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A9300; } // 800A9384
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A9388
  c->r[0]=0u+0x00000001u; // 800A938C
  W8(c->r[3]+0x00000378u,c->r[0]); // 800A9390
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A9394
  c->lr=0x800A939Cu; f_801161A4(c); // 800A9398
  goto L_800A9464; // 800A939C
L_800A93A0:;
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A93A0
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A93A4
  c->lr=0x800A93ACu; f_801164C4(c); // 800A93A8
  c->r[4]=0u+0x80260000u; // 800A93AC
  c->r[0]=0u+0x00000004u; // 800A93B0
  c->r[4]=c->r[4]+0xFFFFBD58u; // 800A93B4
  c->r[3]=0u+0x00000000u; // 800A93B8
  c->ctr=c->r[0]; // 800A93BC
L_800A93C0:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 800A93C0
  W8(c->r[4]+0x00000001u,c->r[3]); // 800A93C4
  W8(c->r[4]+0x00000002u,c->r[3]); // 800A93C8
  W8(c->r[4]+0x00000003u,c->r[3]); // 800A93CC
  W8(c->r[4]+0x00000004u,c->r[3]); // 800A93D0
  W8(c->r[4]+0x00000005u,c->r[3]); // 800A93D4
  W8(c->r[4]+0x00000006u,c->r[3]); // 800A93D8
  W8(c->r[4]+0x00000007u,c->r[3]); // 800A93DC
  W8(c->r[4]+0x00000008u,c->r[3]); // 800A93E0
  W8(c->r[4]+0x00000009u,c->r[3]); // 800A93E4
  W8(c->r[4]+0x0000000Au,c->r[3]); // 800A93E8
  W8(c->r[4]+0x0000000Bu,c->r[3]); // 800A93EC
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 800A93F0
  W8(c->r[4]+0x0000000Du,c->r[3]); // 800A93F4
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 800A93F8
  W8(c->r[4]+0x0000000Fu,c->r[3]); // 800A93FC
  W8(c->r[4]+0x00000010u,c->r[3]); // 800A9400
  W8(c->r[4]+0x00000011u,c->r[3]); // 800A9404
  W8(c->r[4]+0x00000012u,c->r[3]); // 800A9408
  W8(c->r[4]+0x00000013u,c->r[3]); // 800A940C
  W8(c->r[4]+0x00000014u,c->r[3]); // 800A9410
  W8(c->r[4]+0x00000015u,c->r[3]); // 800A9414
  W8(c->r[4]+0x00000016u,c->r[3]); // 800A9418
  W8(c->r[4]+0x00000017u,c->r[3]); // 800A941C
  W8(c->r[4]+0x00000018u,c->r[3]); // 800A9420
  W8(c->r[4]+0x00000019u,c->r[3]); // 800A9424
  W8(c->r[4]+0x0000001Au,c->r[3]); // 800A9428
  W8(c->r[4]+0x0000001Bu,c->r[3]); // 800A942C
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 800A9430
  W8(c->r[4]+0x0000001Du,c->r[3]); // 800A9434
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 800A9438
  W8(c->r[4]+0x0000001Fu,c->r[3]); // 800A943C
  c->r[4]=c->r[4]+0x00000020u; // 800A9440
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800A93C0; } // 800A9444
  c->r[3]=R32(c->r[13]+0xFFFFAE34u); // 800A9448
  c->r[0]=0u+0x00000001u; // 800A944C
  W8(c->r[3]+0x00000378u,c->r[0]); // 800A9450
  c->r[3]=R32(c->r[3]+0x00000374u); // 800A9454
  c->lr=0x800A945Cu; f_801161A4(c); // 800A9458
  c->r[0]=0u+0x00000002u; // 800A945C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A9460
L_800A9464:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A9464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A9468
  c->lr=c->r[0]; // 800A946C
  c->r[1]=c->r[1]+0x00000010u; // 800A9470
  return; // 800A9474
}

// fn_800A9480
void f_800A9480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9480
  c->r[0]=c->lr; // 800A9484
  W32(c->r[1]+0x00000064u,c->r[0]); // 800A9488
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800A948C
  c->r[31]=c->r[3]|c->r[3]; // 800A9490
  c->lr=0x800A9498u; f_800DA780(c); // 800A9494
  c->r[0]=R32(c->r[31]+0x00000070u); // 800A9498
  c->r[3]=c->r[1]+0x00000048u; // 800A949C
  c->r[5]=R32(c->r[31]+0x00000080u); // 800A94A0
  c->r[4]=0u+0xFFFFFFFFu; // 800A94A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800A94A8
  {uint32_t ea=c->r[2]+0xFFFFA5D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800A94AC
  c->r[6]=R32(c->r[5]+c->r[0]); // 800A94B0
  {uint32_t ea=c->r[2]+0xFFFFA5E0u; c->f[4]=c->ps1[4]=RF32(ea);} // 800A94B4
  c->r[5]=R32(c->r[6]+0x00000084u); // 800A94B8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800A94BC
  c->r[0]=R32(c->r[6]+0x00000088u); // 800A94C0
  {uint32_t ea=c->r[2]+0xFFFFA5D8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800A94C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A94C8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800A94CC
  {uint32_t ea=c->r[2]+0xFFFFA5DCu; c->f[5]=c->ps1[5]=RF32(ea);} // 800A94D0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800A94D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 800A94D8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 800A94DC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[5]); // 800A94E0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800A94E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 800A94E8
  c->r[5]=R32(c->r[1]+0x00000008u); // 800A94EC
  W32(c->r[1]+0x00000020u,c->r[5]); // 800A94F0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800A94F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 800A94F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A94FC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 800A9500
  {uint32_t ea=c->r[1]+0x00000024u; c->f[6]=c->ps1[6]=RF32(ea);} // 800A9504
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 800A9508
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 800A950C
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[6]); // 800A9510
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[6]); // 800A9514
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 800A9518
  c->r[7]=R32(c->r[1]+0x00000038u); // 800A951C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[3]);} // 800A9520
  c->r[5]=R32(c->r[1]+0x00000040u); // 800A9524
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800A9528
  c->r[6]=R32(c->r[1]+0x0000003Cu); // 800A952C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A9530
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 800A9534
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 800A9538
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800A953C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[4]);} // 800A9540
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[4]);} // 800A9544
  W32(c->r[1]+0x00000048u,c->r[7]); // 800A9548
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 800A954C
  W32(c->r[1]+0x00000050u,c->r[5]); // 800A9550
  W32(c->r[1]+0x00000054u,c->r[0]); // 800A9554
  c->lr=0x800A955Cu; f_800FA5D0(c); // 800A9558
  c->r[0]=R32(c->r[1]+0x00000064u); // 800A955C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800A9560
  c->lr=c->r[0]; // 800A9564
  c->r[1]=c->r[1]+0x00000060u; // 800A9568
  return; // 800A956C
}

// fn_800A9570
void f_800A9570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9570
  c->r[0]=c->lr; // 800A9574
  cmps(c,0,(int32_t)c->r[3],0); // 800A9578
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A957C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A9580
  c->r[31]=c->r[4]|c->r[4]; // 800A9584
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A9588
  c->r[30]=c->r[3]|c->r[3]; // 800A958C
  if (crb(c,2)) { goto L_800A95E8; } // 800A9590
  c->r[0]=addc(c,c->r[3],0x00000078u,0); cr0(c,c->r[0]); // 800A9594
  if (crb(c,2)) { goto L_800A95B0; } // 800A9598
  c->r[0]=R32(c->r[3]+0x00000078u); // 800A959C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A95A0
  if (crb(c,2)) { goto L_800A95B0; } // 800A95A4
  c->r[3]=R32(c->r[3]+0x00000080u); // 800A95A8
  c->lr=0x800A95B0u; f_800D93B0(c); // 800A95AC
L_800A95B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800A95B0
  if (crb(c,2)) { goto L_800A95D8; } // 800A95B4
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800A95B8
  if (crb(c,2)) { goto L_800A95C8; } // 800A95BC
  c->r[4]=0u+0x00000000u; // 800A95C0
  c->lr=0x800A95C8u; f_800D9E90(c); // 800A95C4
L_800A95C8:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800A95C8
  if (crb(c,2)) { goto L_800A95D8; } // 800A95CC
  c->r[4]=0u+0x00000000u; // 800A95D0
  c->lr=0x800A95D8u; f_800D9E90(c); // 800A95D4
L_800A95D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A95D8
  if (!crb(c,1)) { goto L_800A95E8; } // 800A95DC
  c->r[3]=c->r[30]|c->r[30]; // 800A95E0
  c->lr=0x800A95E8u; f_800D93B0(c); // 800A95E4
L_800A95E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800A95E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A95EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A95F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A95F4
  c->lr=c->r[0]; // 800A95F8
  c->r[1]=c->r[1]+0x00000010u; // 800A95FC
  return; // 800A9600
}

// fn_800A9610
void f_800A9610(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9610
  c->r[0]=c->lr; // 800A9614
  c->r[4]=0u+0x80260000u; // 800A9618
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A961C
  c->r[4]=c->r[4]+0xFFFFBD58u; // 800A9620
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A9624
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A9628
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A962C
  c->r[29]=c->r[3]|c->r[3]; // 800A9630
  c->r[30]=R32(c->r[3]+0x00000014u); // 800A9634
  c->r[31]=R32(c->r[3]+0x00000010u); // 800A9638
  c->r[0]=R8(c->r[4]+c->r[30]); // 800A963C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800A9640
  if (!crb(c,2)) { goto L_800A966C; } // 800A9644
  c->r[0]=0u+0x00000001u; // 800A9648
  W8(c->r[4]+c->r[30],c->r[0]); // 800A964C
  c->r[4]=c->r[30]|c->r[30]; // 800A9650
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A9654
  c->lr=0x800A965Cu; f_80116438(c); // 800A9658
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A965C
  c->r[4]=c->r[30]|c->r[30]; // 800A9660
  c->r[5]=c->r[30]|c->r[30]; // 800A9664
  c->lr=0x800A966Cu; f_80116458(c); // 800A9668
L_800A966C:;
  c->r[0]=0u+0x00000002u; // 800A966C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800A9670
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A9674
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A9678
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A967C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A9680
  c->lr=c->r[0]; // 800A9684
  c->r[1]=c->r[1]+0x00000020u; // 800A9688
  return; // 800A968C
}

// fn_800A9690
void f_800A9690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9690
  c->r[0]=c->lr; // 800A9694
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9698
  c->r[0]=0u+0x00000001u; // 800A969C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A96A0
  c->r[31]=c->r[3]|c->r[3]; // 800A96A4
  c->r[4]=R32(c->r[3]+0x00000010u); // 800A96A8
  W8(c->r[4]+0x00000378u,c->r[0]); // 800A96AC
  c->r[3]=R32(c->r[4]+0x00000374u); // 800A96B0
  c->lr=0x800A96B8u; f_801161A4(c); // 800A96B4
  c->r[0]=0u+0x00000002u; // 800A96B8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A96BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A96C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A96C4
  c->lr=c->r[0]; // 800A96C8
  c->r[1]=c->r[1]+0x00000010u; // 800A96CC
  return; // 800A96D0
}

// fn_800A96E0
void f_800A96E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A96E0
  c->r[0]=c->lr; // 800A96E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A96E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800A96EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800A96F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800A96F4
  c->r[29]=c->r[3]|c->r[3]; // 800A96F8
  c->r[31]=R32(c->r[3]+0x00000010u); // 800A96FC
  c->r[30]=R32(c->r[3]+0x00000014u); // 800A9700
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A9704
  c->lr=0x800A970Cu; f_801161A4(c); // 800A9708
  c->r[3]=R32(c->r[31]+0x00000374u); // 800A970C
  c->r[4]=c->r[30]|c->r[30]; // 800A9710
  c->lr=0x800A9718u; f_801161EC(c); // 800A9714
  c->r[0]=0u+0x00000000u; // 800A9718
  W8(c->r[31]+0x00000378u,c->r[0]); // 800A971C
  c->r[0]=0u+0x00000002u; // 800A9720
  W32(c->r[29]+0x00000008u,c->r[0]); // 800A9724
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800A9728
  c->r[30]=R32(c->r[1]+0x00000018u); // 800A972C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800A9730
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A9734
  c->lr=c->r[0]; // 800A9738
  c->r[1]=c->r[1]+0x00000020u; // 800A973C
  return; // 800A9740
}

// fn_800A9750
void f_800A9750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9750
  c->r[0]=c->lr; // 800A9754
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9758
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A975C
  c->r[31]=c->r[3]|c->r[3]; // 800A9760
  c->r[5]=R32(c->r[3]+0x00000010u); // 800A9764
  c->r[4]=R32(c->r[3]+0x00000014u); // 800A9768
  c->r[3]=R32(c->r[5]+0x00000374u); // 800A976C
  c->lr=0x800A9774u; f_8011652C(c); // 800A9770
  c->r[0]=0u+0x00000002u; // 800A9774
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A9778
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A977C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A9780
  c->lr=c->r[0]; // 800A9784
  c->r[1]=c->r[1]+0x00000010u; // 800A9788
  return; // 800A978C
}

// fn_800A9790
void f_800A9790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9790
  c->r[0]=c->lr; // 800A9794
  W32(c->r[1]+0x00000084u,c->r[0]); // 800A9798
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800A979C
  c->r[31]=c->r[3]|c->r[3]; // 800A97A0
  W32(c->r[1]+0x00000078u,c->r[30]); // 800A97A4
  W32(c->r[1]+0x00000074u,c->r[29]); // 800A97A8
  c->r[0]=R32(c->r[3]+0x00000070u); // 800A97AC
  cmps(c,0,(int32_t)c->r[0],0); // 800A97B0
  if (crb(c,2)) { goto L_800A97C4; } // 800A97B4
  cmpu(c,0,c->r[0],0x00000001u); // 800A97B8
  if (crb(c,2)) { goto L_800A9824; } // 800A97BC
  goto L_800A9B3C; // 800A97C0
L_800A97C4:;
  c->r[3]=0u+0x0000009Cu; // 800A97C4
  c->lr=0x800A97CCu; f_800D8ED0(c); // 800A97C8
  cmps(c,0,(int32_t)c->r[3],0); // 800A97CC
  c->r[29]=c->r[3]|c->r[3]; // 800A97D0
  if (crb(c,2)) { goto L_800A97E4; } // 800A97D4
  c->r[4]=0u+0x00000002u; // 800A97D8
  c->lr=0x800A97E0u; f_801144F0(c); // 800A97DC
  c->r[29]=c->r[3]|c->r[3]; // 800A97E0
L_800A97E4:;
  c->r[3]=c->r[29]|c->r[29]; // 800A97E4
  c->r[4]=0u+0x00000002u; // 800A97E8
  c->lr=0x800A97F0u; f_800FAB40(c); // 800A97EC
  c->r[3]=c->r[29]|c->r[29]; // 800A97F0
  c->r[4]=c->r[31]+0x0000007Cu; // 800A97F4
  c->r[5]=c->r[31]+0x00000074u; // 800A97F8
  c->r[6]=c->r[31]+0x00000078u; // 800A97FC
  c->r[7]=0u+0x00000000u; // 800A9800
  c->lr=0x800A9808u; f_800FACA0(c); // 800A9804
  c->r[4]=c->r[29]|c->r[29]; // 800A9808
  c->r[3]=c->r[31]+0x00000010u; // 800A980C
  c->lr=0x800A9814u; f_800DA000(c); // 800A9810
  c->r[3]=R32(c->r[31]+0x00000070u); // 800A9814
  c->r[0]=c->r[3]+0x00000001u; // 800A9818
  W32(c->r[31]+0x00000070u,c->r[0]); // 800A981C
  goto L_800A9B3C; // 800A9820
L_800A9824:;
  c->r[3]=R32(c->r[3]+0x00000078u); // 800A9824
  c->lr=0x800A982Cu; f_800D8DA0(c); // 800A9828
  c->r[4]=R32(c->r[31]+0x00000074u); // 800A982C
  c->r[29]=c->r[3]|c->r[3]; // 800A9830
  c->r[5]=R32(c->r[31]+0x00000078u); // 800A9834
  c->lr=0x800A983Cu; f_80004364(c); // 800A9838
  c->r[4]=0u+0x00000000u; // 800A983C
  W32(c->r[1]+0x00000058u,c->r[4]); // 800A9840
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 800A9844
  W32(c->r[1]+0x00000060u,c->r[4]); // 800A9848
  c->r[3]=R32(c->r[31]+0x0000007Cu); // 800A984C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800A9850
  if (!crb(c,2)) { goto L_800A9870; } // 800A9854
  c->r[0]=R32(c->r[31]+0x00000080u); // 800A9858
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800A985C
  W32(c->r[1]+0x00000058u,c->r[3]); // 800A9860
  c->r[0]=R32(c->r[31]+0x00000084u); // 800A9864
  W32(c->r[1]+0x00000060u,c->r[0]); // 800A9868
  goto L_800A98C8; // 800A986C
L_800A9870:;
  cmps(c,0,(int32_t)c->r[4],0); // 800A9870
  if (crb(c,2)) { goto L_800A9880; } // 800A9874
  c->r[5]=c->r[4]|c->r[4]; // 800A9878
  goto L_800A9888; // 800A987C
L_800A9880:;
  c->r[0]=R8(c->r[1]+0x00000058u); // 800A9880
  c->r[5]=rotl(c->r[0],0)&0x0000007Fu; // 800A9884
L_800A9888:;
  c->r[0]=R32(c->r[31]+0x0000007Cu); // 800A9888
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A988C
  if (!crb(c,2)) { goto L_800A98A4; } // 800A9890
  c->r[0]=R8(c->r[31]+0x0000007Cu); // 800A9894
  c->r[6]=c->r[31]+0x0000007Du; // 800A9898
  c->r[4]=rotl(c->r[0],0)&0x0000007Fu; // 800A989C
  goto L_800A98AC; // 800A98A0
L_800A98A4:;
  c->r[6]=R32(c->r[31]+0x00000084u); // 800A98A4
  c->r[4]=R32(c->r[31]+0x00000080u); // 800A98A8
L_800A98AC:;
  c->r[0]=R8(c->r[1]+0x00000020u); // 800A98AC
  c->r[7]=c->r[6]+c->r[4]; // 800A98B0
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800A98B4
  c->r[3]=c->r[1]+0x00000058u; // 800A98B8
  c->r[8]=c->r[1]+0x0000001Cu; // 800A98BC
  c->r[4]=0u+0x00000000u; // 800A98C0
  c->lr=0x800A98C8u; f_80008370(c); // 800A98C4
L_800A98C8:;
  W32(c->r[1]+0x00000064u,c->r[29]); // 800A98C8
  c->r[30]=c->r[1]+0x00000038u; // 800A98CC
  c->r[0]=R32(c->r[31]+0x00000078u); // 800A98D0
  W32(c->r[1]+0x00000068u,c->r[0]); // 800A98D4
  c->r[3]=R32(c->r[31]+0x0000007Cu); // 800A98D8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800A98DC
  if (!crb(c,2)) { goto L_800A98FC; } // 800A98E0
  c->r[0]=R32(c->r[31]+0x00000080u); // 800A98E4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800A98E8
  W32(c->r[1]+0x00000038u,c->r[3]); // 800A98EC
  c->r[0]=R32(c->r[31]+0x00000084u); // 800A98F0
  W32(c->r[1]+0x00000040u,c->r[0]); // 800A98F4
  goto L_800A9940; // 800A98F8
L_800A98FC:;
  c->r[0]=0u+0x00000000u; // 800A98FC
  W32(c->r[1]+0x00000038u,c->r[0]); // 800A9900
  c->r[3]=c->r[30]|c->r[30]; // 800A9904
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800A9908
  W32(c->r[1]+0x00000040u,c->r[0]); // 800A990C
  c->r[4]=R32(c->r[31]+0x00000080u); // 800A9910
  c->lr=0x800A9918u; f_800081B0(c); // 800A9914
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800A9918
  c->r[3]=c->r[30]|c->r[30]; // 800A991C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800A9920
  c->r[8]=c->r[1]+0x00000010u; // 800A9924
  c->r[4]=0u+0x00000000u; // 800A9928
  c->r[5]=0u+0x00000000u; // 800A992C
  c->r[6]=R32(c->r[31]+0x00000084u); // 800A9930
  c->r[0]=R32(c->r[31]+0x00000080u); // 800A9934
  c->r[7]=c->r[6]+c->r[0]; // 800A9938
  c->lr=0x800A9940u; f_80008370(c); // 800A993C
L_800A9940:;
  c->r[4]=R32(c->r[1]+0x00000058u); // 800A9940
  c->r[30]=c->r[30]+0x0000000Cu; // 800A9944
  c->r[0]=rotl(c->r[4],1)&0x00000001u; cr0(c,c->r[0]); // 800A9948
  if (!crb(c,2)) { goto L_800A9968; } // 800A994C
  c->r[3]=R32(c->r[1]+0x0000005Cu); // 800A9950
  c->r[0]=R32(c->r[1]+0x00000060u); // 800A9954
  W32(c->r[30]+0x00000000u,c->r[4]); // 800A9958
  W32(c->r[30]+0x00000004u,c->r[3]); // 800A995C
  W32(c->r[30]+0x00000008u,c->r[0]); // 800A9960
  goto L_800A99AC; // 800A9964
L_800A9968:;
  c->r[0]=0u+0x00000000u; // 800A9968
  W32(c->r[30]+0x00000000u,c->r[0]); // 800A996C
  c->r[4]=R32(c->r[1]+0x0000005Cu); // 800A9970
  c->r[3]=c->r[30]|c->r[30]; // 800A9974
  W32(c->r[30]+0x00000004u,c->r[0]); // 800A9978
  W32(c->r[30]+0x00000008u,c->r[0]); // 800A997C
  c->lr=0x800A9984u; f_800081B0(c); // 800A9980
  c->r[5]=R8(c->r[1]+0x00000018u); // 800A9984
  c->r[3]=c->r[30]|c->r[30]; // 800A9988
  W8(c->r[1]+0x00000014u,c->r[5]); // 800A998C
  c->r[8]=c->r[1]+0x00000014u; // 800A9990
  c->r[6]=R32(c->r[1]+0x00000060u); // 800A9994
  c->r[4]=0u+0x00000000u; // 800A9998
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800A999C
  c->r[5]=0u+0x00000000u; // 800A99A0
  c->r[7]=c->r[6]+c->r[0]; // 800A99A4
  c->lr=0x800A99ACu; f_80008370(c); // 800A99A8
L_800A99AC:;
  c->r[4]=R32(c->r[1]+0x00000064u); // 800A99AC
  c->r[3]=0u+0x80260000u; // 800A99B0
  c->r[0]=R32(c->r[1]+0x00000068u); // 800A99B4
  c->r[3]=c->r[3]+0xFFFFBD48u; // 800A99B8
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800A99BC
  c->r[4]=c->r[1]+0x00000038u; // 800A99C0
  c->r[5]=c->r[1]+0x00000034u; // 800A99C4
  c->r[6]=c->r[1]+0x00000009u; // 800A99C8
  W32(c->r[30]+0x00000010u,c->r[0]); // 800A99CC
  c->r[7]=c->r[1]+0x00000008u; // 800A99D0
  c->lr=0x800A99D8u; f_800A9E60(c); // 800A99D4
  c->r[6]=R32(c->r[1]+0x00000034u); // 800A99D8
  c->r[30]=c->r[3]|c->r[3]; // 800A99DC
  cmps(c,0,(int32_t)c->r[6],0); // 800A99E0
  if (crb(c,2)) { goto L_800A9ABC; } // 800A99E4
  c->r[0]=R32(c->r[1]+0x00000038u); // 800A99E8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A99EC
  if (!crb(c,2)) { goto L_800A9A04; } // 800A99F0
  c->r[0]=R8(c->r[1]+0x00000038u); // 800A99F4
  c->r[4]=c->r[1]+0x00000039u; // 800A99F8
  c->r[29]=rotl(c->r[0],0)&0x0000007Fu; // 800A99FC
  goto L_800A9A0C; // 800A9A00
L_800A9A04:;
  c->r[4]=R32(c->r[1]+0x00000040u); // 800A9A04
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 800A9A08
L_800A9A0C:;
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 800A9A0C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800A9A10
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9A14
  if (!crb(c,2)) { goto L_800A9A28; } // 800A9A18
  c->r[0]=R8(c->r[6]+0x0000000Cu); // 800A9A1C
  c->r[5]=rotl(c->r[0],0)&0x0000007Fu; // 800A9A20
  goto L_800A9A2C; // 800A9A24
L_800A9A28:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800A9A28
L_800A9A2C:;
  W32(c->r[1]+0x00000030u,c->r[5]); // 800A9A2C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800A9A30
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9A34
  if (!crb(c,2)) { goto L_800A9A4C; } // 800A9A38
  c->r[0]=R8(c->r[6]+0x0000000Cu); // 800A9A3C
  c->r[3]=c->r[6]+0x0000000Du; // 800A9A40
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800A9A44
  goto L_800A9A54; // 800A9A48
L_800A9A4C:;
  c->r[3]=R32(c->r[6]+0x00000014u); // 800A9A4C
  c->r[0]=R32(c->r[6]+0x00000010u); // 800A9A50
L_800A9A54:;
  cmpu(c,0,c->r[5],c->r[0]); // 800A9A54
  W32(c->r[1]+0x00000028u,c->r[0]); // 800A9A58
  c->r[5]=c->r[1]+0x00000028u; // 800A9A5C
  if (!crb(c,0)) { goto L_800A9A68; } // 800A9A60
  c->r[5]=c->r[1]+0x00000030u; // 800A9A64
L_800A9A68:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800A9A68
  c->r[5]=c->r[1]+0x00000024u; // 800A9A6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800A9A70
  cmpu(c,0,c->r[29],c->r[0]); // 800A9A74
  if (!crb(c,0)) { goto L_800A9A80; } // 800A9A78
  c->r[5]=c->r[1]+0x0000002Cu; // 800A9A7C
L_800A9A80:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800A9A80
  c->lr=0x800A9A88u; f_801D8F78(c); // 800A9A84
  cmps(c,0,(int32_t)c->r[3],0); // 800A9A88
  if (!crb(c,2)) { goto L_800A9AB4; } // 800A9A8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800A9A90
  cmpu(c,0,c->r[0],c->r[29]); // 800A9A94
  if (!crb(c,0)) { goto L_800A9AA4; } // 800A9A98
  c->r[3]=0u+0xFFFFFFFFu; // 800A9A9C
  goto L_800A9AB4; // 800A9AA0
L_800A9AA4:;
  if (!crb(c,2)) { goto L_800A9AB0; } // 800A9AA4
  c->r[3]=0u+0x00000000u; // 800A9AA8
  goto L_800A9AB4; // 800A9AAC
L_800A9AB0:;
  c->r[3]=0u+0x00000001u; // 800A9AB0
L_800A9AB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A9AB4
  if (!crb(c,0)) { goto L_800A9AD8; } // 800A9AB8
L_800A9ABC:;
  c->r[3]=0u+0x80260000u; // 800A9ABC
  c->r[5]=R8(c->r[1]+0x00000009u); // 800A9AC0
  c->r[6]=R8(c->r[1]+0x00000008u); // 800A9AC4
  c->r[4]=c->r[30]|c->r[30]; // 800A9AC8
  c->r[3]=c->r[3]+0xFFFFBD48u; // 800A9ACC
  c->r[7]=c->r[1]+0x00000038u; // 800A9AD0
  c->lr=0x800A9AD8u; f_800A9C50(c); // 800A9AD4
L_800A9AD8:;
  c->r[29]=c->r[1]+0x00000038u; // 800A9AD8
  c->r[3]=addc(c,c->r[29],0x0000000Cu,0); cr0(c,c->r[3]); // 800A9ADC
  if (crb(c,2)) { goto L_800A9AFC; } // 800A9AE0
  if (crb(c,2)) { goto L_800A9AFC; } // 800A9AE4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800A9AE8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9AEC
  if (crb(c,2)) { goto L_800A9AFC; } // 800A9AF0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800A9AF4
  c->lr=0x800A9AFCu; f_800D93B0(c); // 800A9AF8
L_800A9AFC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A9AFC
  if (crb(c,2)) { goto L_800A9B18; } // 800A9B00
  c->r[0]=R32(c->r[1]+0x00000038u); // 800A9B04
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9B08
  if (crb(c,2)) { goto L_800A9B18; } // 800A9B0C
  c->r[3]=R32(c->r[1]+0x00000040u); // 800A9B10
  c->lr=0x800A9B18u; f_800D93B0(c); // 800A9B14
L_800A9B18:;
  c->r[0]=addc(c,c->r[1],0x00000058u,0); cr0(c,c->r[0]); // 800A9B18
  c->r[0]=0u+0x00000002u; // 800A9B1C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800A9B20
  if (crb(c,2)) { goto L_800A9B3C; } // 800A9B24
  c->r[0]=R32(c->r[1]+0x00000058u); // 800A9B28
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9B2C
  if (crb(c,2)) { goto L_800A9B3C; } // 800A9B30
  c->r[3]=R32(c->r[1]+0x00000060u); // 800A9B34
  c->lr=0x800A9B3Cu; f_800D93B0(c); // 800A9B38
L_800A9B3C:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800A9B3C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800A9B40
  c->r[30]=R32(c->r[1]+0x00000078u); // 800A9B44
  c->r[29]=R32(c->r[1]+0x00000074u); // 800A9B48
  c->lr=c->r[0]; // 800A9B4C
  c->r[1]=c->r[1]+0x00000080u; // 800A9B50
  return; // 800A9B54
}

// fn_800A9B60
void f_800A9B60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9B60
  c->r[0]=c->lr; // 800A9B64
  cmps(c,0,(int32_t)c->r[3],0); // 800A9B68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9B6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A9B70
  c->r[31]=c->r[4]|c->r[4]; // 800A9B74
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A9B78
  c->r[30]=c->r[3]|c->r[3]; // 800A9B7C
  if (crb(c,2)) { goto L_800A9C08; } // 800A9B80
  c->r[4]=0u+0x80220000u; // 800A9B84
  c->r[4]=c->r[4]+0xFFFFAC08u; // 800A9B88
  W32(c->r[3]+0x00000000u,c->r[4]); // 800A9B8C
  c->r[3]=R32(c->r[3]+0x00000074u); // 800A9B90
  c->lr=0x800A9B98u; f_800D8BD0(c); // 800A9B94
  c->r[0]=addc(c,c->r[30],0x00000088u,0); cr0(c,c->r[0]); // 800A9B98
  if (crb(c,2)) { goto L_800A9BB4; } // 800A9B9C
  c->r[0]=R32(c->r[30]+0x00000088u); // 800A9BA0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9BA4
  if (crb(c,2)) { goto L_800A9BB4; } // 800A9BA8
  c->r[3]=R32(c->r[30]+0x00000090u); // 800A9BAC
  c->lr=0x800A9BB4u; f_800D93B0(c); // 800A9BB0
L_800A9BB4:;
  c->r[0]=addc(c,c->r[30],0x0000007Cu,0); cr0(c,c->r[0]); // 800A9BB4
  if (crb(c,2)) { goto L_800A9BD0; } // 800A9BB8
  c->r[0]=R32(c->r[30]+0x0000007Cu); // 800A9BBC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9BC0
  if (crb(c,2)) { goto L_800A9BD0; } // 800A9BC4
  c->r[3]=R32(c->r[30]+0x00000084u); // 800A9BC8
  c->lr=0x800A9BD0u; f_800D93B0(c); // 800A9BCC
L_800A9BD0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800A9BD0
  if (crb(c,2)) { goto L_800A9BF8; } // 800A9BD4
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800A9BD8
  if (crb(c,2)) { goto L_800A9BE8; } // 800A9BDC
  c->r[4]=0u+0x00000000u; // 800A9BE0
  c->lr=0x800A9BE8u; f_800D9E90(c); // 800A9BE4
L_800A9BE8:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800A9BE8
  if (crb(c,2)) { goto L_800A9BF8; } // 800A9BEC
  c->r[4]=0u+0x00000000u; // 800A9BF0
  c->lr=0x800A9BF8u; f_800D9E90(c); // 800A9BF4
L_800A9BF8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800A9BF8
  if (!crb(c,1)) { goto L_800A9C08; } // 800A9BFC
  c->r[3]=c->r[30]|c->r[30]; // 800A9C00
  c->lr=0x800A9C08u; f_800D93B0(c); // 800A9C04
L_800A9C08:;
  c->r[3]=c->r[30]|c->r[30]; // 800A9C08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800A9C0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800A9C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800A9C14
  c->lr=c->r[0]; // 800A9C18
  c->r[1]=c->r[1]+0x00000010u; // 800A9C1C
  return; // 800A9C20
}

// fn_800A9C30
void f_800A9C30(Ctx* __restrict c) {
  c->r[0]=R8(c->r[13]+0xFFFFAE30u); // 800A9C30
  cmps(c,0,(int32_t)c->r[0],0); // 800A9C34
  if (crb(c,2)) return; // 800A9C38
  c->r[0]=0u+0x00000002u; // 800A9C3C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800A9C40
  return; // 800A9C44
}

// fn_800A9C50
void f_800A9C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9C50
  c->r[0]=c->lr; // 800A9C54
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A9C58
  c->r[11]=c->r[1]+0x00000040u; // 800A9C5C
  c->lr=0x800A9C64u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A9C60
  c->r[8]=R32(c->r[3]+0x00000000u); // 800A9C64
  c->r[27]=c->r[3]|c->r[3]; // 800A9C68
  c->r[28]=c->r[4]|c->r[4]; // 800A9C6C
  c->r[29]=c->r[5]|c->r[5]; // 800A9C70
  c->r[0]=c->r[8]+0x00010000u; // 800A9C74
  c->r[30]=c->r[6]|c->r[6]; // 800A9C78
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800A9C7C
  c->r[31]=c->r[7]|c->r[7]; // 800A9C80
  if (!crb(c,2)) { goto L_800A9CA8; } // 800A9C84
  c->r[3]=0u+0x80250000u; // 800A9C88
  c->r[4]=0u+0x80220000u; // 800A9C8C
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A9C90
  c->r[4]=c->r[4]+0xFFFFADCCu; // 800A9C94
  c->r[3]=c->r[3]+0x000000A0u; // 800A9C98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9C9C
  c->lr=0x800A9CA4u; f_801DB440(c); // 800A9CA0
  c->lr=0x800A9CA8u; f_801DE64C(c); // 800A9CA4
L_800A9CA8:;
  c->r[3]=0u+0x0000002Cu; // 800A9CA8
  c->lr=0x800A9CB0u; f_800D8ED0(c); // 800A9CAC
  cmps(c,0,(int32_t)c->r[3],0); // 800A9CB0
  c->r[26]=c->r[3]|c->r[3]; // 800A9CB4
  if (!crb(c,2)) { goto L_800A9CDC; } // 800A9CB8
  c->r[3]=0u+0x80250000u; // 800A9CBC
  c->r[4]=0u+0x80220000u; // 800A9CC0
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800A9CC4
  c->r[3]=c->r[3]+0x000000A0u; // 800A9CC8
  c->r[4]=c->r[4]+0xFFFFAE60u; // 800A9CCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800A9CD0
  c->lr=0x800A9CD8u; f_801DB440(c); // 800A9CD4
  c->lr=0x800A9CDCu; f_801DE64C(c); // 800A9CD8
L_800A9CDC:;
  c->r[25]=addc(c,c->r[26],0x0000000Cu,0); cr0(c,c->r[25]); // 800A9CDC
  c->r[0]=c->r[27]+0x00000004u; // 800A9CE0
  W32(c->r[1]+0x00000018u,c->r[0]); // 800A9CE4
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 800A9CE8
  if (crb(c,2)) { goto L_800A9DD4; } // 800A9CEC
  c->r[3]=R32(c->r[31]+0x00000000u); // 800A9CF0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800A9CF4
  if (!crb(c,2)) { goto L_800A9D14; } // 800A9CF8
  W32(c->r[25]+0x00000000u,c->r[3]); // 800A9CFC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800A9D00
  W32(c->r[25]+0x00000004u,c->r[0]); // 800A9D04
  c->r[0]=R32(c->r[31]+0x00000008u); // 800A9D08
  W32(c->r[25]+0x00000008u,c->r[0]); // 800A9D0C
  goto L_800A9D58; // 800A9D10
L_800A9D14:;
  c->r[0]=0u+0x00000000u; // 800A9D14
  W32(c->r[25]+0x00000000u,c->r[0]); // 800A9D18
  c->r[4]=R32(c->r[31]+0x00000004u); // 800A9D1C
  c->r[3]=c->r[25]|c->r[25]; // 800A9D20
  W32(c->r[25]+0x00000004u,c->r[0]); // 800A9D24
  W32(c->r[25]+0x00000008u,c->r[0]); // 800A9D28
  c->lr=0x800A9D30u; f_800081B0(c); // 800A9D2C
  c->r[5]=R8(c->r[1]+0x00000014u); // 800A9D30
  c->r[3]=c->r[25]|c->r[25]; // 800A9D34
  W8(c->r[1]+0x00000010u,c->r[5]); // 800A9D38
  c->r[8]=c->r[1]+0x00000010u; // 800A9D3C
  c->r[6]=R32(c->r[31]+0x00000008u); // 800A9D40
  c->r[4]=0u+0x00000000u; // 800A9D44
  c->r[0]=R32(c->r[31]+0x00000004u); // 800A9D48
  c->r[5]=0u+0x00000000u; // 800A9D4C
  c->r[7]=c->r[6]+c->r[0]; // 800A9D50
  c->lr=0x800A9D58u; f_80008370(c); // 800A9D54
L_800A9D58:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800A9D58
  c->r[26]=c->r[25]+0x0000000Cu; // 800A9D5C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[0]); // 800A9D60
  if (!crb(c,2)) { goto L_800A9D80; } // 800A9D64
  W32(c->r[26]+0x00000000u,c->r[3]); // 800A9D68
  c->r[0]=R32(c->r[31]+0x00000010u); // 800A9D6C
  W32(c->r[26]+0x00000004u,c->r[0]); // 800A9D70
  c->r[0]=R32(c->r[31]+0x00000014u); // 800A9D74
  W32(c->r[26]+0x00000008u,c->r[0]); // 800A9D78
  goto L_800A9DC4; // 800A9D7C
L_800A9D80:;
  c->r[0]=0u+0x00000000u; // 800A9D80
  W32(c->r[26]+0x00000000u,c->r[0]); // 800A9D84
  c->r[4]=R32(c->r[31]+0x00000010u); // 800A9D88
  c->r[3]=c->r[26]|c->r[26]; // 800A9D8C
  W32(c->r[26]+0x00000004u,c->r[0]); // 800A9D90
  W32(c->r[26]+0x00000008u,c->r[0]); // 800A9D94
  c->lr=0x800A9D9Cu; f_800081B0(c); // 800A9D98
  c->r[5]=R8(c->r[1]+0x00000008u); // 800A9D9C
  c->r[3]=c->r[26]|c->r[26]; // 800A9DA0
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 800A9DA4
  c->r[8]=c->r[1]+0x0000000Cu; // 800A9DA8
  c->r[6]=R32(c->r[31]+0x00000014u); // 800A9DAC
  c->r[4]=0u+0x00000000u; // 800A9DB0
  c->r[0]=R32(c->r[31]+0x00000010u); // 800A9DB4
  c->r[5]=0u+0x00000000u; // 800A9DB8
  c->r[7]=c->r[6]+c->r[0]; // 800A9DBC
  c->lr=0x800A9DC4u; f_80008370(c); // 800A9DC0
L_800A9DC4:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 800A9DC4
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 800A9DC8
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 800A9DCC
  W32(c->r[26]+0x00000010u,c->r[0]); // 800A9DD0
L_800A9DD4:;
  c->r[25]=R32(c->r[1]+0x0000001Cu); // 800A9DD4
  c->r[0]=0u+0x00000000u; // 800A9DD8
  W32(c->r[25]+0x00000004u,c->r[0]); // 800A9DDC
  c->r[3]=addc(c,c->r[25],0x00000008u,0); cr0(c,c->r[3]); // 800A9DE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800A9DE4
  W32(c->r[25]+0x00000000u,c->r[0]); // 800A9DE8
  if (crb(c,2)) { goto L_800A9DF4; } // 800A9DEC
  W32(c->r[3]+0x00000000u,c->r[28]); // 800A9DF0
L_800A9DF4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800A9DF4
  if (crb(c,2)) { goto L_800A9E04; } // 800A9DF8
  W32(c->r[28]+0x00000000u,c->r[25]); // 800A9DFC
  goto L_800A9E08; // 800A9E00
L_800A9E04:;
  W32(c->r[28]+0x00000004u,c->r[25]); // 800A9E04
L_800A9E08:;
  c->r[5]=R32(c->r[27]+0x00000000u); // 800A9E08
  c->r[3]=c->r[25]|c->r[25]; // 800A9E0C
  c->r[4]=R32(c->r[27]+0x00000004u); // 800A9E10
  c->r[0]=c->r[5]+0x00000001u; // 800A9E14
  W32(c->r[27]+0x00000000u,c->r[0]); // 800A9E18
  c->lr=0x800A9E20u; f_800076C0(c); // 800A9E1C
  cmps(c,0,(int32_t)c->r[30],0); // 800A9E20
  if (crb(c,2)) { goto L_800A9E2C; } // 800A9E24
  W32(c->r[27]+0x0000000Cu,c->r[25]); // 800A9E28
L_800A9E2C:;
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800A9E2C
  cmps(c,0,(int32_t)c->r[3],0); // 800A9E30
  if (crb(c,2)) { goto L_800A9E3C; } // 800A9E34
  c->lr=0x800A9E3Cu; f_800D93B0(c); // 800A9E38
L_800A9E3C:;
  c->r[11]=c->r[1]+0x00000040u; // 800A9E3C
  c->r[3]=c->r[25]|c->r[25]; // 800A9E40
  c->lr=0x800A9E48u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A9E44
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A9E48
  c->lr=c->r[0]; // 800A9E4C
  c->r[1]=c->r[1]+0x00000040u; // 800A9E50
  return; // 800A9E54
}

// fn_800A9E60
void f_800A9E60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9E60
  c->r[0]=c->lr; // 800A9E64
  W32(c->r[1]+0x00000044u,c->r[0]); // 800A9E68
  c->r[11]=c->r[1]+0x00000040u; // 800A9E6C
  c->lr=0x800A9E74u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800A9E70
  c->r[30]=0u+0x00000000u; // 800A9E74
  W32(c->r[5]+0x00000000u,c->r[30]); // 800A9E78
  c->r[31]=0u+0x00000001u; // 800A9E7C
  c->r[22]=c->r[4]|c->r[4]; // 800A9E80
  c->r[26]=R32(c->r[3]+0x00000004u); // 800A9E84
  c->r[23]=c->r[5]|c->r[5]; // 800A9E88
  c->r[24]=c->r[6]|c->r[6]; // 800A9E8C
  c->r[25]=c->r[7]|c->r[7]; // 800A9E90
  W8(c->r[6]+0x00000000u,c->r[31]); // 800A9E94
  c->r[27]=c->r[3]+0x00000004u; // 800A9E98
  c->r[28]=c->r[4]+0x00000001u; // 800A9E9C
  W8(c->r[7]+0x00000000u,c->r[31]); // 800A9EA0
  goto L_800A9F9C; // 800A9EA4
L_800A9EA8:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800A9EA8
  c->r[27]=c->r[26]|c->r[26]; // 800A9EAC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9EB0
  if (!crb(c,2)) { goto L_800A9EC8; } // 800A9EB4
  c->r[0]=R8(c->r[26]+0x0000000Cu); // 800A9EB8
  c->r[4]=c->r[26]+0x0000000Du; // 800A9EBC
  c->r[29]=rotl(c->r[0],0)&0x0000007Fu; // 800A9EC0
  goto L_800A9ED0; // 800A9EC4
L_800A9EC8:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 800A9EC8
  c->r[29]=R32(c->r[26]+0x00000010u); // 800A9ECC
L_800A9ED0:;
  W32(c->r[1]+0x00000010u,c->r[29]); // 800A9ED0
  c->r[0]=R32(c->r[22]+0x00000000u); // 800A9ED4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9ED8
  if (!crb(c,2)) { goto L_800A9EEC; } // 800A9EDC
  c->r[0]=R8(c->r[22]+0x00000000u); // 800A9EE0
  c->r[5]=rotl(c->r[0],0)&0x0000007Fu; // 800A9EE4
  goto L_800A9EF0; // 800A9EE8
L_800A9EEC:;
  c->r[5]=R32(c->r[22]+0x00000004u); // 800A9EEC
L_800A9EF0:;
  W32(c->r[1]+0x00000014u,c->r[5]); // 800A9EF0
  c->r[0]=R32(c->r[22]+0x00000000u); // 800A9EF4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800A9EF8
  if (!crb(c,2)) { goto L_800A9F10; } // 800A9EFC
  c->r[0]=R8(c->r[22]+0x00000000u); // 800A9F00
  c->r[3]=c->r[28]|c->r[28]; // 800A9F04
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 800A9F08
  goto L_800A9F18; // 800A9F0C
L_800A9F10:;
  c->r[3]=R32(c->r[22]+0x00000008u); // 800A9F10
  c->r[0]=R32(c->r[22]+0x00000004u); // 800A9F14
L_800A9F18:;
  cmpu(c,0,c->r[5],c->r[0]); // 800A9F18
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800A9F1C
  c->r[5]=c->r[1]+0x0000000Cu; // 800A9F20
  if (!crb(c,0)) { goto L_800A9F2C; } // 800A9F24
  c->r[5]=c->r[1]+0x00000014u; // 800A9F28
L_800A9F2C:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800A9F2C
  c->r[5]=c->r[1]+0x00000008u; // 800A9F30
  W32(c->r[1]+0x00000008u,c->r[0]); // 800A9F34
  cmpu(c,0,c->r[29],c->r[0]); // 800A9F38
  if (!crb(c,0)) { goto L_800A9F44; } // 800A9F3C
  c->r[5]=c->r[1]+0x00000010u; // 800A9F40
L_800A9F44:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800A9F44
  c->lr=0x800A9F4Cu; f_801D8F78(c); // 800A9F48
  cmps(c,0,(int32_t)c->r[3],0); // 800A9F4C
  if (!crb(c,2)) { goto L_800A9F78; } // 800A9F50
  c->r[0]=R32(c->r[1]+0x00000008u); // 800A9F54
  cmpu(c,0,c->r[0],c->r[29]); // 800A9F58
  if (!crb(c,0)) { goto L_800A9F68; } // 800A9F5C
  c->r[3]=0u+0xFFFFFFFFu; // 800A9F60
  goto L_800A9F78; // 800A9F64
L_800A9F68:;
  if (!crb(c,2)) { goto L_800A9F74; } // 800A9F68
  c->r[3]=0u+0x00000000u; // 800A9F6C
  goto L_800A9F78; // 800A9F70
L_800A9F74:;
  c->r[3]=0u+0x00000001u; // 800A9F74
L_800A9F78:;
  cmps(c,0,(int32_t)c->r[3],0); // 800A9F78
  if (!crb(c,0)) { goto L_800A9F8C; } // 800A9F7C
  c->r[26]=R32(c->r[26]+0x00000000u); // 800A9F80
  W8(c->r[24]+0x00000000u,c->r[31]); // 800A9F84
  goto L_800A9F9C; // 800A9F88
L_800A9F8C:;
  W32(c->r[23]+0x00000000u,c->r[26]); // 800A9F8C
  c->r[26]=R32(c->r[26]+0x00000004u); // 800A9F90
  W8(c->r[24]+0x00000000u,c->r[30]); // 800A9F94
  W8(c->r[25]+0x00000000u,c->r[30]); // 800A9F98
L_800A9F9C:;
  cmps(c,0,(int32_t)c->r[26],0); // 800A9F9C
  if (!crb(c,2)) { IRQCHK(c); goto L_800A9EA8; } // 800A9FA0
  c->r[11]=c->r[1]+0x00000040u; // 800A9FA4
  c->r[3]=c->r[27]|c->r[27]; // 800A9FA8
  c->lr=0x800A9FB0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800A9FAC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800A9FB0
  c->lr=c->r[0]; // 800A9FB4
  c->r[1]=c->r[1]+0x00000040u; // 800A9FB8
  return; // 800A9FBC
}

// fn_800A9FC0
void f_800A9FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800A9FC0
  c->r[0]=c->lr; // 800A9FC4
  cmps(c,0,(int32_t)c->r[3],0); // 800A9FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800A9FCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800A9FD0
  c->r[31]=c->r[4]|c->r[4]; // 800A9FD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800A9FD8
  c->r[30]=c->r[3]|c->r[3]; // 800A9FDC
  if (crb(c,2)) { goto L_800AA04C; } // 800A9FE0
  c->r[4]=addc(c,c->r[3],0x00000080u,0); cr0(c,c->r[4]); // 800A9FE4
  if (crb(c,2)) { goto L_800AA014; } // 800A9FE8
  if (crb(c,2)) { goto L_800AA014; } // 800A9FEC
  if (crb(c,2)) { goto L_800AA014; } // 800A9FF0
  if (crb(c,2)) { goto L_800AA014; } // 800A9FF4
  c->r[3]=R32(c->r[4]+0x00000000u); // 800A9FF8
  cmps(c,0,(int32_t)c->r[3],0); // 800A9FFC
  if (crb(c,2)) { goto L_800AA014; } // 800AA000
  c->r[0]=R32(c->r[4]+0x00000004u); // 800AA004
  c->r[0]=c->r[0]-c->r[0]; // 800AA008
  W32(c->r[4]+0x00000004u,c->r[0]); // 800AA00C
  c->lr=0x800AA014u; f_800D93B0(c); // 800AA010
L_800AA014:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AA014
  if (crb(c,2)) { goto L_800AA03C; } // 800AA018
  c->r[3]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[3]); // 800AA01C
  if (crb(c,2)) { goto L_800AA02C; } // 800AA020
  c->r[4]=0u+0x00000000u; // 800AA024
  c->lr=0x800AA02Cu; f_800D9E90(c); // 800AA028
L_800AA02C:;
  c->r[3]=addc(c,c->r[30],0x00000010u,0); cr0(c,c->r[3]); // 800AA02C
  if (crb(c,2)) { goto L_800AA03C; } // 800AA030
  c->r[4]=0u+0x00000000u; // 800AA034
  c->lr=0x800AA03Cu; f_800D9E90(c); // 800AA038
L_800AA03C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AA03C
  if (!crb(c,1)) { goto L_800AA04C; } // 800AA040
  c->r[3]=c->r[30]|c->r[30]; // 800AA044
  c->lr=0x800AA04Cu; f_800D93B0(c); // 800AA048
L_800AA04C:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA04C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AA050
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AA054
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AA058
  c->lr=c->r[0]; // 800AA05C
  c->r[1]=c->r[1]+0x00000010u; // 800AA060
  return; // 800AA064
}

// fn_800AA070
void f_800AA070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA070
  c->r[0]=c->lr; // 800AA074
  cmps(c,0,(int32_t)c->r[3],0); // 800AA078
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AA07C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AA080
  c->r[31]=c->r[3]|c->r[3]; // 800AA084
  if (crb(c,2)) { goto L_800AA098; } // 800AA088
  cmps(c,0,(int32_t)c->r[4],0); // 800AA08C
  if (!crb(c,1)) { goto L_800AA098; } // 800AA090
  c->lr=0x800AA098u; f_800D93B0(c); // 800AA094
L_800AA098:;
  c->r[3]=c->r[31]|c->r[31]; // 800AA098
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AA09C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AA0A0
  c->lr=c->r[0]; // 800AA0A4
  c->r[1]=c->r[1]+0x00000010u; // 800AA0A8
  return; // 800AA0AC
}

// fn_800AA0B0
void f_800AA0B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA0B0
  c->r[0]=c->lr; // 800AA0B4
  cmps(c,0,(int32_t)c->r[3],0); // 800AA0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AA0BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AA0C0
  c->r[31]=c->r[3]|c->r[3]; // 800AA0C4
  if (crb(c,2)) { goto L_800AA0D8; } // 800AA0C8
  cmps(c,0,(int32_t)c->r[4],0); // 800AA0CC
  if (!crb(c,1)) { goto L_800AA0D8; } // 800AA0D0
  c->lr=0x800AA0D8u; f_800D93B0(c); // 800AA0D4
L_800AA0D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800AA0D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AA0DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AA0E0
  c->lr=c->r[0]; // 800AA0E4
  c->r[1]=c->r[1]+0x00000010u; // 800AA0E8
  return; // 800AA0EC
}

// fn_800AA0F0
void f_800AA0F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA0F0
  c->r[0]=c->lr; // 800AA0F4
  cmps(c,0,(int32_t)c->r[3],0); // 800AA0F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AA0FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AA100
  c->r[31]=c->r[3]|c->r[3]; // 800AA104
  if (crb(c,2)) { goto L_800AA118; } // 800AA108
  cmps(c,0,(int32_t)c->r[4],0); // 800AA10C
  if (!crb(c,1)) { goto L_800AA118; } // 800AA110
  c->lr=0x800AA118u; f_800D93B0(c); // 800AA114
L_800AA118:;
  c->r[3]=c->r[31]|c->r[31]; // 800AA118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AA11C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AA120
  c->lr=c->r[0]; // 800AA124
  c->r[1]=c->r[1]+0x00000010u; // 800AA128
  return; // 800AA12C
}

// fn_800AA130
void f_800AA130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA130
  c->r[0]=c->lr; // 800AA134
  cmps(c,0,(int32_t)c->r[3],0); // 800AA138
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AA13C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AA140
  c->r[31]=c->r[3]|c->r[3]; // 800AA144
  if (crb(c,2)) { goto L_800AA158; } // 800AA148
  cmps(c,0,(int32_t)c->r[4],0); // 800AA14C
  if (!crb(c,1)) { goto L_800AA158; } // 800AA150
  c->lr=0x800AA158u; f_800D93B0(c); // 800AA154
L_800AA158:;
  c->r[3]=c->r[31]|c->r[31]; // 800AA158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AA15C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AA160
  c->lr=c->r[0]; // 800AA164
  c->r[1]=c->r[1]+0x00000010u; // 800AA168
  return; // 800AA16C
}

// fn_800AA170
void f_800AA170(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA170
  c->r[0]=c->lr; // 800AA174
  cmps(c,0,(int32_t)c->r[3],0); // 800AA178
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AA17C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AA180
  c->r[31]=c->r[3]|c->r[3]; // 800AA184
  if (crb(c,2)) { goto L_800AA198; } // 800AA188
  cmps(c,0,(int32_t)c->r[4],0); // 800AA18C
  if (!crb(c,1)) { goto L_800AA198; } // 800AA190
  c->lr=0x800AA198u; f_800D93B0(c); // 800AA194
L_800AA198:;
  c->r[3]=c->r[31]|c->r[31]; // 800AA198
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AA19C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AA1A0
  c->lr=c->r[0]; // 800AA1A4
  c->r[1]=c->r[1]+0x00000010u; // 800AA1A8
  return; // 800AA1AC
}

// fn_800AA1B0
void f_800AA1B0(Ctx* __restrict c) {
  c->r[3]=0u+0x80260000u; // 800AA1B0
  c->r[4]=0u+0x800B0000u; // 800AA1B4
  c->r[3]=c->r[3]+0xFFFFBD48u; // 800AA1B8
  c->r[6]=0u+0x00000000u; // 800AA1BC
  c->r[0]=c->r[3]+0x00000004u; // 800AA1C0
  c->r[5]=0u+0x80260000u; // 800AA1C4
  W32(c->r[3]+0x00000000u,c->r[6]); // 800AA1C8
  c->r[4]=c->r[4]+0xFFFFA1E0u; // 800AA1CC
  c->r[5]=c->r[5]+0xFFFFBD38u; // 800AA1D0
  W32(c->r[3]+0x00000004u,c->r[6]); // 800AA1D4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800AA1D8
  f_801D4E28(c); return; // 800AA1DC
}

// fn_800AA1E0
void f_800AA1E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA1E0
  c->r[0]=c->lr; // 800AA1E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AA1E8
  c->r[11]=c->r[1]+0x00000020u; // 800AA1EC
  c->lr=0x800AA1F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AA1F0
  cmps(c,0,(int32_t)c->r[3],0); // 800AA1F4
  c->r[30]=c->r[3]|c->r[3]; // 800AA1F8
  c->r[31]=c->r[4]|c->r[4]; // 800AA1FC
  if (crb(c,2)) { goto L_800AA578; } // 800AA200
  if (crb(c,2)) { goto L_800AA568; } // 800AA204
  if (crb(c,2)) { goto L_800AA568; } // 800AA208
  if (crb(c,2)) { goto L_800AA568; } // 800AA20C
  if (crb(c,2)) { goto L_800AA568; } // 800AA210
  c->r[28]=R32(c->r[3]+0x00000004u); // 800AA214
  cmps(c,0,(int32_t)c->r[28],0); // 800AA218
  if (crb(c,2)) { goto L_800AA568; } // 800AA21C
  c->r[29]=R32(c->r[28]+0x00000000u); // 800AA220
  cmps(c,0,(int32_t)c->r[29],0); // 800AA224
  if (crb(c,2)) { goto L_800AA39C; } // 800AA228
  c->r[27]=R32(c->r[29]+0x00000000u); // 800AA22C
  cmps(c,0,(int32_t)c->r[27],0); // 800AA230
  if (crb(c,2)) { goto L_800AA2D8; } // 800AA234
  c->r[26]=R32(c->r[27]+0x00000000u); // 800AA238
  cmps(c,0,(int32_t)c->r[26],0); // 800AA23C
  if (crb(c,2)) { goto L_800AA27C; } // 800AA240
  c->r[4]=R32(c->r[26]+0x00000000u); // 800AA244
  cmps(c,0,(int32_t)c->r[4],0); // 800AA248
  if (crb(c,2)) { goto L_800AA254; } // 800AA24C
  c->lr=0x800AA254u; f_800AA5A0(c); // 800AA250
L_800AA254:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 800AA254
  cmps(c,0,(int32_t)c->r[4],0); // 800AA258
  if (crb(c,2)) { goto L_800AA268; } // 800AA25C
  c->r[3]=c->r[30]|c->r[30]; // 800AA260
  c->lr=0x800AA268u; f_800AA5A0(c); // 800AA264
L_800AA268:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA268
  c->r[4]=c->r[26]+0x0000000Cu; // 800AA26C
  c->lr=0x800AA274u; f_800AA920(c); // 800AA270
  c->r[3]=c->r[26]|c->r[26]; // 800AA274
  c->lr=0x800AA27Cu; f_800D93B0(c); // 800AA278
L_800AA27C:;
  c->r[26]=R32(c->r[27]+0x00000004u); // 800AA27C
  cmps(c,0,(int32_t)c->r[26],0); // 800AA280
  if (crb(c,2)) { goto L_800AA2C4; } // 800AA284
  c->r[4]=R32(c->r[26]+0x00000000u); // 800AA288
  cmps(c,0,(int32_t)c->r[4],0); // 800AA28C
  if (crb(c,2)) { goto L_800AA29C; } // 800AA290
  c->r[3]=c->r[30]|c->r[30]; // 800AA294
  c->lr=0x800AA29Cu; f_800AA5A0(c); // 800AA298
L_800AA29C:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 800AA29C
  cmps(c,0,(int32_t)c->r[4],0); // 800AA2A0
  if (crb(c,2)) { goto L_800AA2B0; } // 800AA2A4
  c->r[3]=c->r[30]|c->r[30]; // 800AA2A8
  c->lr=0x800AA2B0u; f_800AA5A0(c); // 800AA2AC
L_800AA2B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA2B0
  c->r[4]=c->r[26]+0x0000000Cu; // 800AA2B4
  c->lr=0x800AA2BCu; f_800AA920(c); // 800AA2B8
  c->r[3]=c->r[26]|c->r[26]; // 800AA2BC
  c->lr=0x800AA2C4u; f_800D93B0(c); // 800AA2C0
L_800AA2C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA2C4
  c->r[4]=c->r[27]+0x0000000Cu; // 800AA2C8
  c->lr=0x800AA2D0u; f_800AA920(c); // 800AA2CC
  c->r[3]=c->r[27]|c->r[27]; // 800AA2D0
  c->lr=0x800AA2D8u; f_800D93B0(c); // 800AA2D4
L_800AA2D8:;
  c->r[26]=R32(c->r[29]+0x00000004u); // 800AA2D8
  cmps(c,0,(int32_t)c->r[26],0); // 800AA2DC
  if (crb(c,2)) { goto L_800AA388; } // 800AA2E0
  c->r[27]=R32(c->r[26]+0x00000000u); // 800AA2E4
  cmps(c,0,(int32_t)c->r[27],0); // 800AA2E8
  if (crb(c,2)) { goto L_800AA32C; } // 800AA2EC
  c->r[4]=R32(c->r[27]+0x00000000u); // 800AA2F0
  cmps(c,0,(int32_t)c->r[4],0); // 800AA2F4
  if (crb(c,2)) { goto L_800AA304; } // 800AA2F8
  c->r[3]=c->r[30]|c->r[30]; // 800AA2FC
  c->lr=0x800AA304u; f_800AA5A0(c); // 800AA300
L_800AA304:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 800AA304
  cmps(c,0,(int32_t)c->r[4],0); // 800AA308
  if (crb(c,2)) { goto L_800AA318; } // 800AA30C
  c->r[3]=c->r[30]|c->r[30]; // 800AA310
  c->lr=0x800AA318u; f_800AA5A0(c); // 800AA314
L_800AA318:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA318
  c->r[4]=c->r[27]+0x0000000Cu; // 800AA31C
  c->lr=0x800AA324u; f_800AA920(c); // 800AA320
  c->r[3]=c->r[27]|c->r[27]; // 800AA324
  c->lr=0x800AA32Cu; f_800D93B0(c); // 800AA328
L_800AA32C:;
  c->r[27]=R32(c->r[26]+0x00000004u); // 800AA32C
  cmps(c,0,(int32_t)c->r[27],0); // 800AA330
  if (crb(c,2)) { goto L_800AA374; } // 800AA334
  c->r[4]=R32(c->r[27]+0x00000000u); // 800AA338
  cmps(c,0,(int32_t)c->r[4],0); // 800AA33C
  if (crb(c,2)) { goto L_800AA34C; } // 800AA340
  c->r[3]=c->r[30]|c->r[30]; // 800AA344
  c->lr=0x800AA34Cu; f_800AA5A0(c); // 800AA348
L_800AA34C:;
  c->r[4]=R32(c->r[27]+0x00000004u); // 800AA34C
  cmps(c,0,(int32_t)c->r[4],0); // 800AA350
  if (crb(c,2)) { goto L_800AA360; } // 800AA354
  c->r[3]=c->r[30]|c->r[30]; // 800AA358
  c->lr=0x800AA360u; f_800AA5A0(c); // 800AA35C
L_800AA360:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA360
  c->r[4]=c->r[27]+0x0000000Cu; // 800AA364
  c->lr=0x800AA36Cu; f_800AA920(c); // 800AA368
  c->r[3]=c->r[27]|c->r[27]; // 800AA36C
  c->lr=0x800AA374u; f_800D93B0(c); // 800AA370
L_800AA374:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA374
  c->r[4]=c->r[26]+0x0000000Cu; // 800AA378
  c->lr=0x800AA380u; f_800AA920(c); // 800AA37C
  c->r[3]=c->r[26]|c->r[26]; // 800AA380
  c->lr=0x800AA388u; f_800D93B0(c); // 800AA384
L_800AA388:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA388
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA38C
  c->lr=0x800AA394u; f_800AA920(c); // 800AA390
  c->r[3]=c->r[29]|c->r[29]; // 800AA394
  c->lr=0x800AA39Cu; f_800D93B0(c); // 800AA398
L_800AA39C:;
  c->r[26]=R32(c->r[28]+0x00000004u); // 800AA39C
  cmps(c,0,(int32_t)c->r[26],0); // 800AA3A0
  if (crb(c,2)) { goto L_800AA51C; } // 800AA3A4
  c->r[27]=R32(c->r[26]+0x00000000u); // 800AA3A8
  cmps(c,0,(int32_t)c->r[27],0); // 800AA3AC
  if (crb(c,2)) { goto L_800AA458; } // 800AA3B0
  c->r[29]=R32(c->r[27]+0x00000000u); // 800AA3B4
  cmps(c,0,(int32_t)c->r[29],0); // 800AA3B8
  if (crb(c,2)) { goto L_800AA3FC; } // 800AA3BC
  c->r[4]=R32(c->r[29]+0x00000000u); // 800AA3C0
  cmps(c,0,(int32_t)c->r[4],0); // 800AA3C4
  if (crb(c,2)) { goto L_800AA3D4; } // 800AA3C8
  c->r[3]=c->r[30]|c->r[30]; // 800AA3CC
  c->lr=0x800AA3D4u; f_800AA5A0(c); // 800AA3D0
L_800AA3D4:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800AA3D4
  cmps(c,0,(int32_t)c->r[4],0); // 800AA3D8
  if (crb(c,2)) { goto L_800AA3E8; } // 800AA3DC
  c->r[3]=c->r[30]|c->r[30]; // 800AA3E0
  c->lr=0x800AA3E8u; f_800AA5A0(c); // 800AA3E4
L_800AA3E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA3E8
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA3EC
  c->lr=0x800AA3F4u; f_800AA920(c); // 800AA3F0
  c->r[3]=c->r[29]|c->r[29]; // 800AA3F4
  c->lr=0x800AA3FCu; f_800D93B0(c); // 800AA3F8
L_800AA3FC:;
  c->r[29]=R32(c->r[27]+0x00000004u); // 800AA3FC
  cmps(c,0,(int32_t)c->r[29],0); // 800AA400
  if (crb(c,2)) { goto L_800AA444; } // 800AA404
  c->r[4]=R32(c->r[29]+0x00000000u); // 800AA408
  cmps(c,0,(int32_t)c->r[4],0); // 800AA40C
  if (crb(c,2)) { goto L_800AA41C; } // 800AA410
  c->r[3]=c->r[30]|c->r[30]; // 800AA414
  c->lr=0x800AA41Cu; f_800AA5A0(c); // 800AA418
L_800AA41C:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800AA41C
  cmps(c,0,(int32_t)c->r[4],0); // 800AA420
  if (crb(c,2)) { goto L_800AA430; } // 800AA424
  c->r[3]=c->r[30]|c->r[30]; // 800AA428
  c->lr=0x800AA430u; f_800AA5A0(c); // 800AA42C
L_800AA430:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA430
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA434
  c->lr=0x800AA43Cu; f_800AA920(c); // 800AA438
  c->r[3]=c->r[29]|c->r[29]; // 800AA43C
  c->lr=0x800AA444u; f_800D93B0(c); // 800AA440
L_800AA444:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA444
  c->r[4]=c->r[27]+0x0000000Cu; // 800AA448
  c->lr=0x800AA450u; f_800AA920(c); // 800AA44C
  c->r[3]=c->r[27]|c->r[27]; // 800AA450
  c->lr=0x800AA458u; f_800D93B0(c); // 800AA454
L_800AA458:;
  c->r[27]=R32(c->r[26]+0x00000004u); // 800AA458
  cmps(c,0,(int32_t)c->r[27],0); // 800AA45C
  if (crb(c,2)) { goto L_800AA508; } // 800AA460
  c->r[29]=R32(c->r[27]+0x00000000u); // 800AA464
  cmps(c,0,(int32_t)c->r[29],0); // 800AA468
  if (crb(c,2)) { goto L_800AA4AC; } // 800AA46C
  c->r[4]=R32(c->r[29]+0x00000000u); // 800AA470
  cmps(c,0,(int32_t)c->r[4],0); // 800AA474
  if (crb(c,2)) { goto L_800AA484; } // 800AA478
  c->r[3]=c->r[30]|c->r[30]; // 800AA47C
  c->lr=0x800AA484u; f_800AA5A0(c); // 800AA480
L_800AA484:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800AA484
  cmps(c,0,(int32_t)c->r[4],0); // 800AA488
  if (crb(c,2)) { goto L_800AA498; } // 800AA48C
  c->r[3]=c->r[30]|c->r[30]; // 800AA490
  c->lr=0x800AA498u; f_800AA5A0(c); // 800AA494
L_800AA498:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA498
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA49C
  c->lr=0x800AA4A4u; f_800AA920(c); // 800AA4A0
  c->r[3]=c->r[29]|c->r[29]; // 800AA4A4
  c->lr=0x800AA4ACu; f_800D93B0(c); // 800AA4A8
L_800AA4AC:;
  c->r[29]=R32(c->r[27]+0x00000004u); // 800AA4AC
  cmps(c,0,(int32_t)c->r[29],0); // 800AA4B0
  if (crb(c,2)) { goto L_800AA4F4; } // 800AA4B4
  c->r[4]=R32(c->r[29]+0x00000000u); // 800AA4B8
  cmps(c,0,(int32_t)c->r[4],0); // 800AA4BC
  if (crb(c,2)) { goto L_800AA4CC; } // 800AA4C0
  c->r[3]=c->r[30]|c->r[30]; // 800AA4C4
  c->lr=0x800AA4CCu; f_800AA5A0(c); // 800AA4C8
L_800AA4CC:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800AA4CC
  cmps(c,0,(int32_t)c->r[4],0); // 800AA4D0
  if (crb(c,2)) { goto L_800AA4E0; } // 800AA4D4
  c->r[3]=c->r[30]|c->r[30]; // 800AA4D8
  c->lr=0x800AA4E0u; f_800AA5A0(c); // 800AA4DC
L_800AA4E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA4E0
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA4E4
  c->lr=0x800AA4ECu; f_800AA920(c); // 800AA4E8
  c->r[3]=c->r[29]|c->r[29]; // 800AA4EC
  c->lr=0x800AA4F4u; f_800D93B0(c); // 800AA4F0
L_800AA4F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA4F4
  c->r[4]=c->r[27]+0x0000000Cu; // 800AA4F8
  c->lr=0x800AA500u; f_800AA920(c); // 800AA4FC
  c->r[3]=c->r[27]|c->r[27]; // 800AA500
  c->lr=0x800AA508u; f_800D93B0(c); // 800AA504
L_800AA508:;
  c->r[3]=c->r[30]|c->r[30]; // 800AA508
  c->r[4]=c->r[26]+0x0000000Cu; // 800AA50C
  c->lr=0x800AA514u; f_800AA920(c); // 800AA510
  c->r[3]=c->r[26]|c->r[26]; // 800AA514
  c->lr=0x800AA51Cu; f_800D93B0(c); // 800AA518
L_800AA51C:;
  c->r[29]=addc(c,c->r[28],0x0000000Cu,0); cr0(c,c->r[29]); // 800AA51C
  if (crb(c,2)) { goto L_800AA560; } // 800AA520
  c->r[3]=addc(c,c->r[29],0x0000000Cu,0); cr0(c,c->r[3]); // 800AA524
  if (crb(c,2)) { goto L_800AA544; } // 800AA528
  if (crb(c,2)) { goto L_800AA544; } // 800AA52C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AA530
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800AA534
  if (crb(c,2)) { goto L_800AA544; } // 800AA538
  c->r[3]=R32(c->r[3]+0x00000008u); // 800AA53C
  c->lr=0x800AA544u; f_800D93B0(c); // 800AA540
L_800AA544:;
  cmps(c,0,(int32_t)c->r[29],0); // 800AA544
  if (crb(c,2)) { goto L_800AA560; } // 800AA548
  c->r[0]=R32(c->r[29]+0x00000000u); // 800AA54C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800AA550
  if (crb(c,2)) { goto L_800AA560; } // 800AA554
  c->r[3]=R32(c->r[29]+0x00000008u); // 800AA558
  c->lr=0x800AA560u; f_800D93B0(c); // 800AA55C
L_800AA560:;
  c->r[3]=c->r[28]|c->r[28]; // 800AA560
  c->lr=0x800AA568u; f_800D93B0(c); // 800AA564
L_800AA568:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AA568
  if (!crb(c,1)) { goto L_800AA578; } // 800AA56C
  c->r[3]=c->r[30]|c->r[30]; // 800AA570
  c->lr=0x800AA578u; f_800D93B0(c); // 800AA574
L_800AA578:;
  c->r[11]=c->r[1]+0x00000020u; // 800AA578
  c->r[3]=c->r[30]|c->r[30]; // 800AA57C
  c->lr=0x800AA584u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AA580
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AA584
  c->lr=c->r[0]; // 800AA588
  c->r[1]=c->r[1]+0x00000020u; // 800AA58C
  return; // 800AA590
}

// fn_800AA5A0
void f_800AA5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA5A0
  c->r[0]=c->lr; // 800AA5A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AA5A8
  c->r[11]=c->r[1]+0x00000020u; // 800AA5AC
  c->lr=0x800AA5B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AA5B0
  c->r[30]=R32(c->r[4]+0x00000000u); // 800AA5B4
  c->r[27]=c->r[3]|c->r[3]; // 800AA5B8
  c->r[31]=c->r[4]|c->r[4]; // 800AA5BC
  cmps(c,0,(int32_t)c->r[30],0); // 800AA5C0
  if (crb(c,2)) { goto L_800AA738; } // 800AA5C4
  c->r[29]=R32(c->r[30]+0x00000000u); // 800AA5C8
  cmps(c,0,(int32_t)c->r[29],0); // 800AA5CC
  if (crb(c,2)) { goto L_800AA674; } // 800AA5D0
  c->r[28]=R32(c->r[29]+0x00000000u); // 800AA5D4
  cmps(c,0,(int32_t)c->r[28],0); // 800AA5D8
  if (crb(c,2)) { goto L_800AA618; } // 800AA5DC
  c->r[4]=R32(c->r[28]+0x00000000u); // 800AA5E0
  cmps(c,0,(int32_t)c->r[4],0); // 800AA5E4
  if (crb(c,2)) { goto L_800AA5F0; } // 800AA5E8
  c->lr=0x800AA5F0u; f_800AA5A0(c); // 800AA5EC
L_800AA5F0:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 800AA5F0
  cmps(c,0,(int32_t)c->r[4],0); // 800AA5F4
  if (crb(c,2)) { goto L_800AA604; } // 800AA5F8
  c->r[3]=c->r[27]|c->r[27]; // 800AA5FC
  c->lr=0x800AA604u; f_800AA5A0(c); // 800AA600
L_800AA604:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA604
  c->r[4]=c->r[28]+0x0000000Cu; // 800AA608
  c->lr=0x800AA610u; f_800AA920(c); // 800AA60C
  c->r[3]=c->r[28]|c->r[28]; // 800AA610
  c->lr=0x800AA618u; f_800D93B0(c); // 800AA614
L_800AA618:;
  c->r[28]=R32(c->r[29]+0x00000004u); // 800AA618
  cmps(c,0,(int32_t)c->r[28],0); // 800AA61C
  if (crb(c,2)) { goto L_800AA660; } // 800AA620
  c->r[4]=R32(c->r[28]+0x00000000u); // 800AA624
  cmps(c,0,(int32_t)c->r[4],0); // 800AA628
  if (crb(c,2)) { goto L_800AA638; } // 800AA62C
  c->r[3]=c->r[27]|c->r[27]; // 800AA630
  c->lr=0x800AA638u; f_800AA5A0(c); // 800AA634
L_800AA638:;
  c->r[4]=R32(c->r[28]+0x00000004u); // 800AA638
  cmps(c,0,(int32_t)c->r[4],0); // 800AA63C
  if (crb(c,2)) { goto L_800AA64C; } // 800AA640
  c->r[3]=c->r[27]|c->r[27]; // 800AA644
  c->lr=0x800AA64Cu; f_800AA5A0(c); // 800AA648
L_800AA64C:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA64C
  c->r[4]=c->r[28]+0x0000000Cu; // 800AA650
  c->lr=0x800AA658u; f_800AA920(c); // 800AA654
  c->r[3]=c->r[28]|c->r[28]; // 800AA658
  c->lr=0x800AA660u; f_800D93B0(c); // 800AA65C
L_800AA660:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA660
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA664
  c->lr=0x800AA66Cu; f_800AA920(c); // 800AA668
  c->r[3]=c->r[29]|c->r[29]; // 800AA66C
  c->lr=0x800AA674u; f_800D93B0(c); // 800AA670
L_800AA674:;
  c->r[28]=R32(c->r[30]+0x00000004u); // 800AA674
  cmps(c,0,(int32_t)c->r[28],0); // 800AA678
  if (crb(c,2)) { goto L_800AA724; } // 800AA67C
  c->r[29]=R32(c->r[28]+0x00000000u); // 800AA680
  cmps(c,0,(int32_t)c->r[29],0); // 800AA684
  if (crb(c,2)) { goto L_800AA6C8; } // 800AA688
  c->r[4]=R32(c->r[29]+0x00000000u); // 800AA68C
  cmps(c,0,(int32_t)c->r[4],0); // 800AA690
  if (crb(c,2)) { goto L_800AA6A0; } // 800AA694
  c->r[3]=c->r[27]|c->r[27]; // 800AA698
  c->lr=0x800AA6A0u; f_800AA5A0(c); // 800AA69C
L_800AA6A0:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800AA6A0
  cmps(c,0,(int32_t)c->r[4],0); // 800AA6A4
  if (crb(c,2)) { goto L_800AA6B4; } // 800AA6A8
  c->r[3]=c->r[27]|c->r[27]; // 800AA6AC
  c->lr=0x800AA6B4u; f_800AA5A0(c); // 800AA6B0
L_800AA6B4:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA6B4
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA6B8
  c->lr=0x800AA6C0u; f_800AA920(c); // 800AA6BC
  c->r[3]=c->r[29]|c->r[29]; // 800AA6C0
  c->lr=0x800AA6C8u; f_800D93B0(c); // 800AA6C4
L_800AA6C8:;
  c->r[29]=R32(c->r[28]+0x00000004u); // 800AA6C8
  cmps(c,0,(int32_t)c->r[29],0); // 800AA6CC
  if (crb(c,2)) { goto L_800AA710; } // 800AA6D0
  c->r[4]=R32(c->r[29]+0x00000000u); // 800AA6D4
  cmps(c,0,(int32_t)c->r[4],0); // 800AA6D8
  if (crb(c,2)) { goto L_800AA6E8; } // 800AA6DC
  c->r[3]=c->r[27]|c->r[27]; // 800AA6E0
  c->lr=0x800AA6E8u; f_800AA5A0(c); // 800AA6E4
L_800AA6E8:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800AA6E8
  cmps(c,0,(int32_t)c->r[4],0); // 800AA6EC
  if (crb(c,2)) { goto L_800AA6FC; } // 800AA6F0
  c->r[3]=c->r[27]|c->r[27]; // 800AA6F4
  c->lr=0x800AA6FCu; f_800AA5A0(c); // 800AA6F8
L_800AA6FC:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA6FC
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA700
  c->lr=0x800AA708u; f_800AA920(c); // 800AA704
  c->r[3]=c->r[29]|c->r[29]; // 800AA708
  c->lr=0x800AA710u; f_800D93B0(c); // 800AA70C
L_800AA710:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA710
  c->r[4]=c->r[28]+0x0000000Cu; // 800AA714
  c->lr=0x800AA71Cu; f_800AA920(c); // 800AA718
  c->r[3]=c->r[28]|c->r[28]; // 800AA71C
  c->lr=0x800AA724u; f_800D93B0(c); // 800AA720
L_800AA724:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA724
  c->r[4]=c->r[30]+0x0000000Cu; // 800AA728
  c->lr=0x800AA730u; f_800AA920(c); // 800AA72C
  c->r[3]=c->r[30]|c->r[30]; // 800AA730
  c->lr=0x800AA738u; f_800D93B0(c); // 800AA734
L_800AA738:;
  c->r[28]=R32(c->r[31]+0x00000004u); // 800AA738
  cmps(c,0,(int32_t)c->r[28],0); // 800AA73C
  if (crb(c,2)) { goto L_800AA8B8; } // 800AA740
  c->r[29]=R32(c->r[28]+0x00000000u); // 800AA744
  cmps(c,0,(int32_t)c->r[29],0); // 800AA748
  if (crb(c,2)) { goto L_800AA7F4; } // 800AA74C
  c->r[30]=R32(c->r[29]+0x00000000u); // 800AA750
  cmps(c,0,(int32_t)c->r[30],0); // 800AA754
  if (crb(c,2)) { goto L_800AA798; } // 800AA758
  c->r[4]=R32(c->r[30]+0x00000000u); // 800AA75C
  cmps(c,0,(int32_t)c->r[4],0); // 800AA760
  if (crb(c,2)) { goto L_800AA770; } // 800AA764
  c->r[3]=c->r[27]|c->r[27]; // 800AA768
  c->lr=0x800AA770u; f_800AA5A0(c); // 800AA76C
L_800AA770:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800AA770
  cmps(c,0,(int32_t)c->r[4],0); // 800AA774
  if (crb(c,2)) { goto L_800AA784; } // 800AA778
  c->r[3]=c->r[27]|c->r[27]; // 800AA77C
  c->lr=0x800AA784u; f_800AA5A0(c); // 800AA780
L_800AA784:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA784
  c->r[4]=c->r[30]+0x0000000Cu; // 800AA788
  c->lr=0x800AA790u; f_800AA920(c); // 800AA78C
  c->r[3]=c->r[30]|c->r[30]; // 800AA790
  c->lr=0x800AA798u; f_800D93B0(c); // 800AA794
L_800AA798:;
  c->r[30]=R32(c->r[29]+0x00000004u); // 800AA798
  cmps(c,0,(int32_t)c->r[30],0); // 800AA79C
  if (crb(c,2)) { goto L_800AA7E0; } // 800AA7A0
  c->r[4]=R32(c->r[30]+0x00000000u); // 800AA7A4
  cmps(c,0,(int32_t)c->r[4],0); // 800AA7A8
  if (crb(c,2)) { goto L_800AA7B8; } // 800AA7AC
  c->r[3]=c->r[27]|c->r[27]; // 800AA7B0
  c->lr=0x800AA7B8u; f_800AA5A0(c); // 800AA7B4
L_800AA7B8:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800AA7B8
  cmps(c,0,(int32_t)c->r[4],0); // 800AA7BC
  if (crb(c,2)) { goto L_800AA7CC; } // 800AA7C0
  c->r[3]=c->r[27]|c->r[27]; // 800AA7C4
  c->lr=0x800AA7CCu; f_800AA5A0(c); // 800AA7C8
L_800AA7CC:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA7CC
  c->r[4]=c->r[30]+0x0000000Cu; // 800AA7D0
  c->lr=0x800AA7D8u; f_800AA920(c); // 800AA7D4
  c->r[3]=c->r[30]|c->r[30]; // 800AA7D8
  c->lr=0x800AA7E0u; f_800D93B0(c); // 800AA7DC
L_800AA7E0:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA7E0
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA7E4
  c->lr=0x800AA7ECu; f_800AA920(c); // 800AA7E8
  c->r[3]=c->r[29]|c->r[29]; // 800AA7EC
  c->lr=0x800AA7F4u; f_800D93B0(c); // 800AA7F0
L_800AA7F4:;
  c->r[29]=R32(c->r[28]+0x00000004u); // 800AA7F4
  cmps(c,0,(int32_t)c->r[29],0); // 800AA7F8
  if (crb(c,2)) { goto L_800AA8A4; } // 800AA7FC
  c->r[30]=R32(c->r[29]+0x00000000u); // 800AA800
  cmps(c,0,(int32_t)c->r[30],0); // 800AA804
  if (crb(c,2)) { goto L_800AA848; } // 800AA808
  c->r[4]=R32(c->r[30]+0x00000000u); // 800AA80C
  cmps(c,0,(int32_t)c->r[4],0); // 800AA810
  if (crb(c,2)) { goto L_800AA820; } // 800AA814
  c->r[3]=c->r[27]|c->r[27]; // 800AA818
  c->lr=0x800AA820u; f_800AA5A0(c); // 800AA81C
L_800AA820:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800AA820
  cmps(c,0,(int32_t)c->r[4],0); // 800AA824
  if (crb(c,2)) { goto L_800AA834; } // 800AA828
  c->r[3]=c->r[27]|c->r[27]; // 800AA82C
  c->lr=0x800AA834u; f_800AA5A0(c); // 800AA830
L_800AA834:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA834
  c->r[4]=c->r[30]+0x0000000Cu; // 800AA838
  c->lr=0x800AA840u; f_800AA920(c); // 800AA83C
  c->r[3]=c->r[30]|c->r[30]; // 800AA840
  c->lr=0x800AA848u; f_800D93B0(c); // 800AA844
L_800AA848:;
  c->r[30]=R32(c->r[29]+0x00000004u); // 800AA848
  cmps(c,0,(int32_t)c->r[30],0); // 800AA84C
  if (crb(c,2)) { goto L_800AA890; } // 800AA850
  c->r[4]=R32(c->r[30]+0x00000000u); // 800AA854
  cmps(c,0,(int32_t)c->r[4],0); // 800AA858
  if (crb(c,2)) { goto L_800AA868; } // 800AA85C
  c->r[3]=c->r[27]|c->r[27]; // 800AA860
  c->lr=0x800AA868u; f_800AA5A0(c); // 800AA864
L_800AA868:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 800AA868
  cmps(c,0,(int32_t)c->r[4],0); // 800AA86C
  if (crb(c,2)) { goto L_800AA87C; } // 800AA870
  c->r[3]=c->r[27]|c->r[27]; // 800AA874
  c->lr=0x800AA87Cu; f_800AA5A0(c); // 800AA878
L_800AA87C:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA87C
  c->r[4]=c->r[30]+0x0000000Cu; // 800AA880
  c->lr=0x800AA888u; f_800AA920(c); // 800AA884
  c->r[3]=c->r[30]|c->r[30]; // 800AA888
  c->lr=0x800AA890u; f_800D93B0(c); // 800AA88C
L_800AA890:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA890
  c->r[4]=c->r[29]+0x0000000Cu; // 800AA894
  c->lr=0x800AA89Cu; f_800AA920(c); // 800AA898
  c->r[3]=c->r[29]|c->r[29]; // 800AA89C
  c->lr=0x800AA8A4u; f_800D93B0(c); // 800AA8A0
L_800AA8A4:;
  c->r[3]=c->r[27]|c->r[27]; // 800AA8A4
  c->r[4]=c->r[28]+0x0000000Cu; // 800AA8A8
  c->lr=0x800AA8B0u; f_800AA920(c); // 800AA8AC
  c->r[3]=c->r[28]|c->r[28]; // 800AA8B0
  c->lr=0x800AA8B8u; f_800D93B0(c); // 800AA8B4
L_800AA8B8:;
  c->r[30]=addc(c,c->r[31],0x0000000Cu,0); cr0(c,c->r[30]); // 800AA8B8
  if (crb(c,2)) { goto L_800AA8FC; } // 800AA8BC
  c->r[3]=addc(c,c->r[30],0x0000000Cu,0); cr0(c,c->r[3]); // 800AA8C0
  if (crb(c,2)) { goto L_800AA8E0; } // 800AA8C4
  if (crb(c,2)) { goto L_800AA8E0; } // 800AA8C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AA8CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800AA8D0
  if (crb(c,2)) { goto L_800AA8E0; } // 800AA8D4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800AA8D8
  c->lr=0x800AA8E0u; f_800D93B0(c); // 800AA8DC
L_800AA8E0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AA8E0
  if (crb(c,2)) { goto L_800AA8FC; } // 800AA8E4
  c->r[0]=R32(c->r[30]+0x00000000u); // 800AA8E8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800AA8EC
  if (crb(c,2)) { goto L_800AA8FC; } // 800AA8F0
  c->r[3]=R32(c->r[30]+0x00000008u); // 800AA8F4
  c->lr=0x800AA8FCu; f_800D93B0(c); // 800AA8F8
L_800AA8FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800AA8FC
  c->lr=0x800AA904u; f_800D93B0(c); // 800AA900
  c->r[11]=c->r[1]+0x00000020u; // 800AA904
  c->lr=0x800AA90Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AA908
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AA90C
  c->lr=c->r[0]; // 800AA910
  c->r[1]=c->r[1]+0x00000020u; // 800AA914
  return; // 800AA918
}

// fn_800AA920
void f_800AA920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA920
  c->r[0]=c->lr; // 800AA924
  cmps(c,0,(int32_t)c->r[4],0); // 800AA928
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AA92C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AA930
  c->r[31]=c->r[4]|c->r[4]; // 800AA934
  if (crb(c,2)) { goto L_800AA978; } // 800AA938
  c->r[3]=addc(c,c->r[4],0x0000000Cu,0); cr0(c,c->r[3]); // 800AA93C
  if (crb(c,2)) { goto L_800AA95C; } // 800AA940
  if (crb(c,2)) { goto L_800AA95C; } // 800AA944
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AA948
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800AA94C
  if (crb(c,2)) { goto L_800AA95C; } // 800AA950
  c->r[3]=R32(c->r[3]+0x00000008u); // 800AA954
  c->lr=0x800AA95Cu; f_800D93B0(c); // 800AA958
L_800AA95C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AA95C
  if (crb(c,2)) { goto L_800AA978; } // 800AA960
  c->r[0]=R32(c->r[31]+0x00000000u); // 800AA964
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800AA968
  if (crb(c,2)) { goto L_800AA978; } // 800AA96C
  c->r[3]=R32(c->r[31]+0x00000008u); // 800AA970
  c->lr=0x800AA978u; f_800D93B0(c); // 800AA974
L_800AA978:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AA978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AA97C
  c->lr=c->r[0]; // 800AA980
  c->r[1]=c->r[1]+0x00000010u; // 800AA984
  return; // 800AA988
}

// fn_800AA990
void f_800AA990(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800AA990
  f_800A8E40(c); return; // 800AA994
}

// fn_800AA9A0
void f_800AA9A0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800AA9A0
  f_800A8DB0(c); return; // 800AA9A4
}

// fn_800AA9B0
void f_800AA9B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFF0u; // 800AA9B0
  f_800A8380(c); return; // 800AA9B4
}

// fn_800AA9C0
void f_800AA9C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFECu; // 800AA9C0
  f_800A8EC0(c); return; // 800AA9C4
}

// fn_800AA9D0
void f_800AA9D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AA9D0
  c->r[0]=c->lr; // 800AA9D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AA9D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AA9DC
  c->r[31]=c->r[3]|c->r[3]; // 800AA9E0
  c->r[4]=R32(c->r[3]+0x00000000u); // 800AA9E4
  c->r[0]=c->r[4]+0xFFE00000u; // 800AA9E8
  cmpu(c,0,c->r[0],0x0000AF30u); // 800AA9EC
  if (crb(c,2)) { goto L_800AAA0C; } // 800AA9F0
  c->r[5]=0u+0x80220000u; // 800AA9F4
  c->r[3]=c->r[13]+0xFFFFA028u; // 800AA9F8
  c->r[5]=c->r[5]+0xFFFFAE80u; // 800AA9FC
  c->r[4]=0u+0x00000019u; // 800AAA00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AAA04
  c->lr=0x800AAA0Cu; f_801572D0(c); // 800AAA08
L_800AAA0C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AAA0C
  c->r[3]=0u+0x00000000u; // 800AAA10
  c->r[5]=0u+0x00000001u; // 800AAA14
  c->r[0]=c->r[0]+c->r[31]; // 800AAA18
  W32(c->r[31]+0x00000008u,c->r[0]); // 800AAA1C
  goto L_800AAAC4; // 800AAA20
  c->r[0]=c->r[0]|0x00000000u; // 800AAA24
L_800AAA28:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 800AAA28
  c->r[6]=rotl(c->r[3],3)&0x0007FFF8u; // 800AAA2C
  c->r[0]=R32(c->r[4]+c->r[6]); // 800AAA30
  cmps(c,0,(int32_t)c->r[0],0); // 800AAA34
  if (crb(c,2)) { goto L_800AAA70; } // 800AAA38
  c->r[0]=c->r[31]+c->r[0]; // 800AAA3C
  W32(c->r[4]+c->r[6],c->r[0]); // 800AAA40
  c->r[4]=R32(c->r[31]+0x00000008u); // 800AAA44
  c->r[4]=R32(c->r[4]+c->r[6]); // 800AAA48
  c->r[0]=R8(c->r[4]+0x00000023u); // 800AAA4C
  cmps(c,0,(int32_t)c->r[0],0); // 800AAA50
  if (!crb(c,2)) { goto L_800AAA70; } // 800AAA54
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AAA58
  c->r[0]=c->r[31]+c->r[0]; // 800AAA5C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800AAA60
  c->r[4]=R32(c->r[31]+0x00000008u); // 800AAA64
  c->r[4]=R32(c->r[4]+c->r[6]); // 800AAA68
  W8(c->r[4]+0x00000023u,c->r[5]); // 800AAA6C
L_800AAA70:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AAA70
  c->r[4]=c->r[0]+c->r[6]; // 800AAA74
  c->r[0]=R32(c->r[4]+0x00000004u); // 800AAA78
  cmps(c,0,(int32_t)c->r[0],0); // 800AAA7C
  if (crb(c,2)) { goto L_800AAAC0; } // 800AAA80
  c->r[0]=c->r[31]+c->r[0]; // 800AAA84
  W32(c->r[4]+0x00000004u,c->r[0]); // 800AAA88
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AAA8C
  c->r[4]=c->r[0]+c->r[6]; // 800AAA90
  c->r[4]=R32(c->r[4]+0x00000004u); // 800AAA94
  c->r[0]=R8(c->r[4]+0x00000002u); // 800AAA98
  cmps(c,0,(int32_t)c->r[0],0); // 800AAA9C
  if (!crb(c,2)) { goto L_800AAAC0; } // 800AAAA0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800AAAA4
  c->r[0]=c->r[31]+c->r[0]; // 800AAAA8
  W32(c->r[4]+0x00000008u,c->r[0]); // 800AAAAC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800AAAB0
  c->r[4]=c->r[0]+c->r[6]; // 800AAAB4
  c->r[4]=R32(c->r[4]+0x00000004u); // 800AAAB8
  W8(c->r[4]+0x00000002u,c->r[5]); // 800AAABC
L_800AAAC0:;
  c->r[3]=c->r[3]+0x00000001u; // 800AAAC0
L_800AAAC4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800AAAC4
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 800AAAC8
  cmpu(c,0,c->r[4],c->r[0]); // 800AAACC
  if (crb(c,0)) { IRQCHK(c); goto L_800AAA28; } // 800AAAD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AAAD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AAAD8
  c->lr=c->r[0]; // 800AAADC
  c->r[1]=c->r[1]+0x00000010u; // 800AAAE0
  return; // 800AAAE4
}

// fn_800AAAF0
void f_800AAAF0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000004u); // 800AAAF0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800AAAF4
  c->r[0]=divwu(c->r[4],c->r[5]); // 800AAAF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800AAAFC
  c->r[0]=c->r[4]-c->r[0]; // 800AAB00
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800AAB04
  c->r[3]=c->r[3]+c->r[0]; // 800AAB08
  return; // 800AAB0C
}

// fn_800AAB10
void f_800AAB10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAB10
  c->r[0]=c->lr; // 800AAB14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AAB18
  c->r[0]=R32(c->r[13]+0xFFFFAE38u); // 800AAB1C
  cmps(c,0,(int32_t)c->r[0],0); // 800AAB20
  if (!crb(c,2)) { goto L_800AAB44; } // 800AAB24
  c->lr=0x800AAB2Cu; f_801888B0(c); // 800AAB28
  c->lr=0x800AAB30u; f_8015AF30(c); // 800AAB2C
  c->r[0]=0u+0x00000001u; // 800AAB30
  W32(c->r[13]+0xFFFFAE38u,c->r[0]); // 800AAB34
  c->lr=0x800AAB3Cu; f_8015AF70(c); // 800AAB38
  c->r[3]=R32(c->r[13]+0xFFFFA030u); // 800AAB3C
  c->lr=0x800AAB44u; f_801553B0(c); // 800AAB40
L_800AAB44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AAB44
  c->lr=c->r[0]; // 800AAB48
  c->r[1]=c->r[1]+0x00000010u; // 800AAB4C
  return; // 800AAB50
}

// fn_800AAB60
void f_800AAB60(Ctx* __restrict c) {
  f_80188910(c); return; // 800AAB60
}

// fn_800AAB70
void f_800AAB70(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800AAB70
  c->r[12]=c->r[1]|c->r[1]; // 800AAB74
  c->r[11]=addc(c,~c->r[11],0xFFFFFF80u,1); // 800AAB78
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAB7C
  c->r[0]=c->lr; // 800AAB80
  c->r[11]=c->r[12]|c->r[12]; // 800AAB84
  W32(c->r[12]+0x00000004u,c->r[0]); // 800AAB88
  c->lr=0x800AAB90u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AAB8C
  c->r[27]=c->r[4]|c->r[4]; // 800AAB90
  c->r[28]=c->r[5]|c->r[5]; // 800AAB94
  c->lr=0x800AAB9Cu; f_80188A00(c); // 800AAB98
  cmps(c,0,(int32_t)c->r[3],0); // 800AAB9C
  c->r[29]=c->r[3]|c->r[3]; // 800AABA0
  if (!crb(c,0)) { goto L_800AABB0; } // 800AABA4
  c->lr=0x800AABACu; f_800AAF40(c); // 800AABA8
  goto L_800AAC78; // 800AABAC
L_800AABB0:;
  c->r[4]=c->r[1]+0x00000040u; // 800AABB0
  c->r[5]=0u+0x00000020u; // 800AABB4
  c->lr=0x800AABBCu; f_80188A70(c); // 800AABB8
  cmps(c,0,(int32_t)c->r[3],0); // 800AABBC
  if (!crb(c,0)) { goto L_800AABCC; } // 800AABC0
  c->lr=0x800AABC8u; f_800AAF40(c); // 800AABC4
  goto L_800AAC78; // 800AABC8
L_800AABCC:;
  c->r[6]=R32(c->r[1]+0x0000004Cu); // 800AABCC
  c->r[3]=c->r[29]|c->r[29]; // 800AABD0
  c->r[4]=0u+0x00000000u; // 800AABD4
  c->r[5]=0u+0x00000000u; // 800AABD8
  c->r[0]=c->r[6]+0x0000001Fu; // 800AABDC
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800AABE0
  c->lr=0x800AABE8u; f_80188B10(c); // 800AABE4
  cmps(c,0,(int32_t)c->r[3],0); // 800AABE8
  if (!crb(c,0)) { goto L_800AABF8; } // 800AABEC
  c->lr=0x800AABF4u; f_800AAF40(c); // 800AABF0
  goto L_800AAC78; // 800AABF4
L_800AABF8:;
  c->r[3]=c->r[28]|c->r[28]; // 800AABF8
  c->r[4]=c->r[30]|c->r[30]; // 800AABFC
  c->lr=0x800AAC04u; f_80180360(c); // 800AAC00
  c->r[0]=0u+0x00000000u; // 800AAC04
  c->r[31]=c->r[3]|c->r[3]; // 800AAC08
  cmpu(c,0,c->r[3],c->r[0]); // 800AAC0C
  if (!crb(c,2)) { goto L_800AAC1C; } // 800AAC10
  c->r[3]=0u+0xFFFFEC77u; // 800AAC14
  goto L_800AAC78; // 800AAC18
L_800AAC1C:;
  c->r[3]=c->r[29]|c->r[29]; // 800AAC1C
  c->r[4]=c->r[31]|c->r[31]; // 800AAC20
  c->r[5]=c->r[30]|c->r[30]; // 800AAC24
  c->lr=0x800AAC2Cu; f_80188A70(c); // 800AAC28
  cmps(c,0,(int32_t)c->r[3],0); // 800AAC2C
  c->r[30]=c->r[3]|c->r[3]; // 800AAC30
  if (!crb(c,0)) { goto L_800AAC50; } // 800AAC34
  c->r[3]=c->r[28]|c->r[28]; // 800AAC38
  c->r[4]=c->r[31]|c->r[31]; // 800AAC3C
  c->lr=0x800AAC44u; f_80180370(c); // 800AAC40
  c->r[3]=c->r[30]|c->r[30]; // 800AAC44
  c->lr=0x800AAC4Cu; f_800AAF40(c); // 800AAC48
  goto L_800AAC78; // 800AAC4C
L_800AAC50:;
  c->r[3]=c->r[31]|c->r[31]; // 800AAC50
  c->r[4]=c->r[1]+0x00000020u; // 800AAC54
  c->lr=0x800AAC5Cu; f_80187ED0(c); // 800AAC58
  c->r[3]=c->r[27]|c->r[27]; // 800AAC5C
  c->r[4]=c->r[1]+0x00000020u; // 800AAC60
  c->r[5]=0u+0x0000001Cu; // 800AAC64
  c->lr=0x800AAC6Cu; f_80004364(c); // 800AAC68
  W32(c->r[27]+0x0000001Cu,c->r[29]); // 800AAC6C
  c->r[3]=0u+0x00000000u; // 800AAC70
  W32(c->r[27]+0x00000020u,c->r[28]); // 800AAC74
L_800AAC78:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800AAC78
  c->r[11]=c->r[10]|c->r[10]; // 800AAC7C
  c->lr=0x800AAC84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AAC80
  c->r[0]=R32(c->r[10]+0x00000004u); // 800AAC84
  c->lr=c->r[0]; // 800AAC88
  c->r[1]=c->r[10]|c->r[10]; // 800AAC8C
  return; // 800AAC90
}

// fn_800AACA0
void f_800AACA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AACA0
  c->r[0]=c->lr; // 800AACA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AACA8
  c->r[11]=c->r[1]+0x00000020u; // 800AACAC
  c->lr=0x800AACB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AACB0
  c->r[31]=R32(c->r[3]+0x00000008u); // 800AACB4
  c->r[29]=c->r[3]|c->r[3]; // 800AACB8
  c->r[30]=c->r[4]|c->r[4]; // 800AACBC
  c->lr=0x800AACC4u; f_80172800(c); // 800AACC0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800AACC4
  c->r[5]=0u+0x80250000u; // 800AACC8
  c->r[5]=c->r[5]+0xFFFF9CF8u; // 800AACCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800AACD0
  c->r[8]=c->r[3]+c->r[0]; // 800AACD4
L_800AACD8:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 800AACD8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800AACDC
  if (!crb(c,2)) { goto L_800AACEC; } // 800AACE0
  c->r[3]=c->r[31]|c->r[31]; // 800AACE4
  goto L_800AAF1C; // 800AACE8
L_800AACEC:;
  cmps(c,0,(int32_t)c->r[0],47); // 800AACEC
  if (!crb(c,2)) { goto L_800AAD00; } // 800AACF0
  c->r[31]=R32(c->r[29]+0x00000004u); // 800AACF4
  c->r[30]=c->r[30]+0x00000001u; // 800AACF8
  IRQCHK(c); goto L_800AACD8; // 800AACFC
L_800AAD00:;
  cmps(c,0,(int32_t)c->r[0],46); // 800AAD00
  if (!crb(c,2)) { goto L_800AAD88; } // 800AAD04
  c->r[0]=R8(c->r[30]+0x00000001u); // 800AAD08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800AAD0C
  cmps(c,0,(int32_t)c->r[0],46); // 800AAD10
  if (!crb(c,2)) { goto L_800AAD68; } // 800AAD14
  c->r[0]=R8(c->r[30]+0x00000002u); // 800AAD18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800AAD1C
  cmps(c,0,(int32_t)c->r[0],47); // 800AAD20
  if (!crb(c,2)) { goto L_800AAD50; } // 800AAD24
  c->r[0]=R32(c->r[29]+0x00000004u); // 800AAD28
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800AAD2C
  if (!crb(c,2)) { goto L_800AAD3C; } // 800AAD30
  c->r[3]=0u+0xFFFFFFFFu; // 800AAD34
  goto L_800AAF1C; // 800AAD38
L_800AAD3C:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800AAD3C
  c->r[30]=c->r[30]+0x00000003u; // 800AAD40
  c->r[4]=c->r[3]+c->r[0]; // 800AAD44
  c->r[31]=R32(c->r[4]+0x00000004u); // 800AAD48
  IRQCHK(c); goto L_800AACD8; // 800AAD4C
L_800AAD50:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AAD50
  if (!crb(c,2)) { goto L_800AAD88; } // 800AAD54
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800AAD58
  c->r[3]=c->r[3]+c->r[0]; // 800AAD5C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800AAD60
  goto L_800AAF1C; // 800AAD64
L_800AAD68:;
  cmps(c,0,(int32_t)c->r[0],47); // 800AAD68
  if (!crb(c,2)) { goto L_800AAD78; } // 800AAD6C
  c->r[30]=c->r[30]+0x00000002u; // 800AAD70
  IRQCHK(c); goto L_800AACD8; // 800AAD74
L_800AAD78:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AAD78
  if (!crb(c,2)) { goto L_800AAD88; } // 800AAD7C
  c->r[3]=c->r[31]|c->r[31]; // 800AAD80
  goto L_800AAF1C; // 800AAD84
L_800AAD88:;
  c->r[7]=c->r[30]|c->r[30]; // 800AAD88
  goto L_800AAD94; // 800AAD8C
L_800AAD90:;
  c->r[7]=c->r[7]+0x00000001u; // 800AAD90
L_800AAD94:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800AAD94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800AAD98
  if (crb(c,2)) { goto L_800AADAC; } // 800AAD9C
  cmps(c,0,(int32_t)c->r[0],47); // 800AADA0
  if (crb(c,2)) { goto L_800AADB4; } // 800AADA4
  IRQCHK(c); goto L_800AAD90; // 800AADA8
L_800AADAC:;
  c->r[0]=0u+0x00000000u; // 800AADAC
  goto L_800AADB8; // 800AADB0
L_800AADB4:;
  c->r[0]=0u+0x00000001u; // 800AADB4
L_800AADB8:;
  c->r[6]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800AADB8
  c->r[4]=R32(c->r[5]+0x00000038u); // 800AADBC
  c->r[7]=c->r[7]-c->r[30]; // 800AADC0
  c->r[31]=c->r[31]+0x00000001u; // 800AADC4
  c->r[6]=c->r[3]+c->r[6]; // 800AADC8
  c->r[6]=R32(c->r[6]+0x00000008u); // 800AADCC
  goto L_800AAEF0; // 800AADD0
  c->r[0]=c->r[0]|0x00000000u; // 800AADD4
L_800AADD8:;
  c->r[9]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800AADD8
  c->r[10]=c->r[3]+c->r[9]; // 800AADDC
L_800AADE0:;
  c->r[11]=R32(c->r[10]+0x00000000u); // 800AADE0
  c->r[9]=rotl(c->r[11],0)&0xFF000000u; cr0(c,c->r[9]); // 800AADE4
  if (!crb(c,2)) { goto L_800AADF4; } // 800AADE8
  cmps(c,0,(int32_t)c->r[0],1); // 800AADEC
  if (crb(c,2)) { goto L_800AAED0; } // 800AADF0
L_800AADF4:;
  c->r[9]=rotl(c->r[11],0)&0x00FFFFFFu; // 800AADF4
  c->r[27]=c->r[8]+c->r[9]; // 800AADF8
  c->r[9]=R8(c->r[8]+c->r[9]); // 800AADFC
  cmps(c,0,(int32_t)c->r[9],46); // 800AAE00
  if (!crb(c,2)) { goto L_800AAE20; } // 800AAE04
  c->r[9]=R8(c->r[27]+0x00000001u); // 800AAE08
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; cr0(c,c->r[9]); // 800AAE0C
  if (!crb(c,2)) { goto L_800AAE20; } // 800AAE10
  c->r[10]=c->r[10]+0x0000000Cu; // 800AAE14
  c->r[31]=c->r[31]+0x00000001u; // 800AAE18
  IRQCHK(c); goto L_800AADE0; // 800AAE1C
L_800AAE20:;
  c->r[10]=c->r[30]|c->r[30]; // 800AAE20
  goto L_800AAE98; // 800AAE24
L_800AAE28:;
  c->r[9]=R8(c->r[27]+0x00000000u); // 800AAE28
  c->r[11]=0u+0x00000001u; // 800AAE2C
  c->r[27]=c->r[27]+0x00000001u; // 800AAE30
  c->r[12]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 800AAE34
  cmpu(c,0,c->r[12],0x000000FFu); // 800AAE38
  if (crb(c,1)) { goto L_800AAE44; } // 800AAE3C
  c->r[11]=0u+0x00000000u; // 800AAE40
L_800AAE44:;
  cmps(c,0,(int32_t)c->r[11],0); // 800AAE44
  if (crb(c,2)) { goto L_800AAE50; } // 800AAE48
  goto L_800AAE58; // 800AAE4C
L_800AAE50:;
  c->r[9]=R32(c->r[4]+0x00000010u); // 800AAE50
  c->r[12]=R8(c->r[9]+c->r[12]); // 800AAE54
L_800AAE58:;
  c->r[9]=R8(c->r[10]+0x00000000u); // 800AAE58
  c->r[28]=0u+0x00000001u; // 800AAE5C
  c->r[10]=c->r[10]+0x00000001u; // 800AAE60
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 800AAE64
  cmpu(c,0,c->r[11],0x000000FFu); // 800AAE68
  if (crb(c,1)) { goto L_800AAE74; } // 800AAE6C
  c->r[28]=0u+0x00000000u; // 800AAE70
L_800AAE74:;
  cmps(c,0,(int32_t)c->r[28],0); // 800AAE74
  if (crb(c,2)) { goto L_800AAE80; } // 800AAE78
  goto L_800AAE88; // 800AAE7C
L_800AAE80:;
  c->r[9]=R32(c->r[4]+0x00000010u); // 800AAE80
  c->r[11]=R8(c->r[9]+c->r[11]); // 800AAE84
L_800AAE88:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[12]); // 800AAE88
  if (crb(c,2)) { goto L_800AAE98; } // 800AAE8C
  c->r[9]=0u+0x00000000u; // 800AAE90
  goto L_800AAEC8; // 800AAE94
L_800AAE98:;
  c->r[9]=R8(c->r[27]+0x00000000u); // 800AAE98
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; cr0(c,c->r[9]); // 800AAE9C
  if (!crb(c,2)) { IRQCHK(c); goto L_800AAE28; } // 800AAEA0
  c->r[9]=R8(c->r[10]+0x00000000u); // 800AAEA4
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; // 800AAEA8
  cmps(c,0,(int32_t)c->r[9],47); // 800AAEAC
  if (crb(c,2)) { goto L_800AAEBC; } // 800AAEB0
  cmps(c,0,(int32_t)c->r[9],0); // 800AAEB4
  if (!crb(c,2)) { goto L_800AAEC4; } // 800AAEB8
L_800AAEBC:;
  c->r[9]=0u+0x00000001u; // 800AAEBC
  goto L_800AAEC8; // 800AAEC0
L_800AAEC4:;
  c->r[9]=0u+0x00000000u; // 800AAEC4
L_800AAEC8:;
  cmps(c,0,(int32_t)c->r[9],1); // 800AAEC8
  if (crb(c,2)) { goto L_800AAF00; } // 800AAECC
L_800AAED0:;
  c->r[9]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800AAED0
  c->r[10]=c->r[3]+c->r[9]; // 800AAED4
  c->r[9]=R32(c->r[3]+c->r[9]); // 800AAED8
  c->r[9]=rotl(c->r[9],0)&0xFF000000u; cr0(c,c->r[9]); // 800AAEDC
  if (crb(c,2)) { goto L_800AAEEC; } // 800AAEE0
  c->r[31]=R32(c->r[10]+0x00000008u); // 800AAEE4
  goto L_800AAEF0; // 800AAEE8
L_800AAEEC:;
  c->r[31]=c->r[31]+0x00000001u; // 800AAEEC
L_800AAEF0:;
  cmpu(c,0,c->r[31],c->r[6]); // 800AAEF0
  if (crb(c,0)) { IRQCHK(c); goto L_800AADD8; } // 800AAEF4
  c->r[3]=0u+0xFFFFFFFFu; // 800AAEF8
  goto L_800AAF1C; // 800AAEFC
L_800AAF00:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AAF00
  if (!crb(c,2)) { goto L_800AAF10; } // 800AAF04
  c->r[3]=c->r[31]|c->r[31]; // 800AAF08
  goto L_800AAF1C; // 800AAF0C
L_800AAF10:;
  c->r[4]=c->r[7]+c->r[30]; // 800AAF10
  c->r[30]=c->r[4]+0x00000001u; // 800AAF14
  IRQCHK(c); goto L_800AACD8; // 800AAF18
L_800AAF1C:;
  c->r[11]=c->r[1]+0x00000020u; // 800AAF1C
  c->lr=0x800AAF24u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AAF20
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AAF24
  c->lr=c->r[0]; // 800AAF28
  c->r[1]=c->r[1]+0x00000020u; // 800AAF2C
  return; // 800AAF30
}

// fn_800AAF40
void f_800AAF40(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[1],0)&0x0000003Fu; // 800AAF40
  c->r[12]=c->r[1]|c->r[1]; // 800AAF44
  c->r[11]=addc(c,~c->r[11],0xFFFFFC00u,1); // 800AAF48
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800AAF4C
  c->r[0]=c->lr; // 800AAF50
  c->r[4]=0u+0x801F0000u; // 800AAF54
  W32(c->r[12]+0x00000004u,c->r[0]); // 800AAF58
  c->r[4]=c->r[4]+0xFFFFB410u; // 800AAF5C
  c->r[0]=0u+0x0000004Fu; // 800AAF60
  c->r[6]=c->r[1]+0x0000013Cu; // 800AAF64
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800AAF68
  c->r[31]=0u+0x80220000u; // 800AAF6C
  c->r[31]=c->r[31]+0xFFFFAEB0u; // 800AAF70
  c->r[5]=c->r[4]+0xFFFFFFFCu; // 800AAF74
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800AAF78
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800AAF7C
  c->r[29]=c->r[3]|c->r[3]; // 800AAF80
  c->ctr=c->r[0]; // 800AAF84
L_800AAF88:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 800AAF88
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 800AAF8C
  W32(c->r[6]+0x00000004u,c->r[4]); // 800AAF90
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800AAF94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AAF88; } // 800AAF98
  cmps(c,0,(int32_t)c->r[3],0); // 800AAF9C
  c->r[30]=0u+0x00000000u; // 800AAFA0
  c->r[4]=0u+0x00000000u; // 800AAFA4
  if (crb(c,0)) { goto L_800AAFB4; } // 800AAFA8
  c->r[3]=c->r[29]|c->r[29]; // 800AAFAC
  goto L_800AB070; // 800AAFB0
L_800AAFB4:;
  c->r[0]=0u+0x0000004Fu; // 800AAFB4
  c->r[5]=c->r[1]+0x00000140u; // 800AAFB8
  c->ctr=c->r[0]; // 800AAFBC
L_800AAFC0:;
  c->r[0]=R32(c->r[5]+c->r[4]); // 800AAFC0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800AAFC4
  if (!crb(c,2)) { goto L_800AB02C; } // 800AAFC8
  cmps(c,0,(int32_t)c->r[3],-114); // 800AAFCC
  if (crb(c,2)) { goto L_800AAFF4; } // 800AAFD0
  cmps(c,0,(int32_t)c->r[3],-116); // 800AAFD4
  if (crb(c,2)) { goto L_800AAFF4; } // 800AAFD8
  cmps(c,0,(int32_t)c->r[3],-117); // 800AAFDC
  if (crb(c,2)) { goto L_800AAFF4; } // 800AAFE0
  cmps(c,0,(int32_t)c->r[3],-9); // 800AAFE4
  if (crb(c,2)) { goto L_800AAFF4; } // 800AAFE8
  cmps(c,0,(int32_t)c->r[3],-12); // 800AAFEC
  if (!crb(c,2)) { goto L_800AB018; } // 800AAFF0
L_800AAFF4:;
  c->r[5]=c->r[29]|c->r[29]; // 800AAFF4
  c->r[3]=c->r[1]+0x000000C0u; // 800AAFF8
  c->r[4]=c->r[31]+0x00000124u; // 800AAFFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AB000
  c->lr=0x800AB008u; f_801DB784(c); // 800AB004
  c->r[4]=c->r[1]+0x000000C0u; // 800AB008
  c->r[3]=0u+0x00000000u; // 800AB00C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AB010
  c->lr=0x800AB018u; f_80183F50(c); // 800AB014
L_800AB018:;
  c->r[0]=c->r[30]+0x00000001u; // 800AB018
  c->r[3]=c->r[1]+0x00000140u; // 800AB01C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800AB020
  c->r[3]=R32(c->r[3]+c->r[0]); // 800AB024
  goto L_800AB070; // 800AB028
L_800AB02C:;
  c->r[30]=c->r[30]+0x00000002u; // 800AB02C
  c->r[4]=c->r[4]+0x00000008u; // 800AB030
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800AAFC0; } // 800AB034
  c->r[4]=c->r[29]|c->r[29]; // 800AB038
  c->r[3]=c->r[31]+0x00000138u; // 800AB03C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AB040
  c->lr=0x800AB048u; f_80157240(c); // 800AB044
  c->r[5]=c->r[29]|c->r[29]; // 800AB048
  c->r[3]=c->r[1]+0x00000040u; // 800AB04C
  c->r[4]=c->r[31]+0x0000016Cu; // 800AB050
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AB054
  c->lr=0x800AB05Cu; f_801DB784(c); // 800AB058
  c->r[4]=c->r[1]+0x00000040u; // 800AB05C
  c->r[3]=0u+0x00000000u; // 800AB060
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800AB064
  c->lr=0x800AB06Cu; f_80183F50(c); // 800AB068
  c->r[3]=0u+0xFFFFEC39u; // 800AB06C
L_800AB070:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800AB070
  c->r[0]=R32(c->r[10]+0x00000004u); // 800AB074
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800AB078
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800AB07C
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800AB080
  c->lr=c->r[0]; // 800AB084
  c->r[1]=c->r[10]|c->r[10]; // 800AB088
  return; // 800AB08C
}

// fn_800AB090
void f_800AB090(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800AB090
  W8(c->r[4]+0x00000024u,c->r[0]); // 800AB094
  f_800AAB70(c); return; // 800AB098
}

// fn_800AB0A0
void f_800AB0A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB0A0
  c->r[0]=c->lr; // 800AB0A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AB0A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AB0AC
  c->r[31]=c->r[3]|c->r[3]; // 800AB0B0
  c->r[0]=R8(c->r[3]+0x00000024u); // 800AB0B4
  cmps(c,0,(int32_t)c->r[0],1); // 800AB0B8
  if (crb(c,2)) { goto L_800AB0CC; } // 800AB0BC
  cmps(c,0,(int32_t)c->r[0],2); // 800AB0C0
  if (crb(c,2)) { goto L_800AB0E8; } // 800AB0C4
  goto L_800AB0F0; // 800AB0C8
L_800AB0CC:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 800AB0CC
  c->r[4]=R32(c->r[31]+0x00000000u); // 800AB0D0
  c->lr=0x800AB0D8u; f_80180370(c); // 800AB0D4
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 800AB0D8
  c->lr=0x800AB0E0u; f_80188BA0(c); // 800AB0DC
  c->lr=0x800AB0E4u; f_800AAF40(c); // 800AB0E0
  goto L_800AB0F4; // 800AB0E4
L_800AB0E8:;
  c->r[3]=0u+0x00000000u; // 800AB0E8
  goto L_800AB0F4; // 800AB0EC
L_800AB0F0:;
  c->r[3]=0u+0xFFFFEC39u; // 800AB0F0
L_800AB0F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AB0F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AB0F8
  c->lr=c->r[0]; // 800AB0FC
  c->r[1]=c->r[1]+0x00000010u; // 800AB100
  return; // 800AB104
}

// fn_800AB110
void f_800AB110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB110
  c->r[0]=c->lr; // 800AB114
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AB118
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AB11C
  c->r[31]=c->r[5]|c->r[5]; // 800AB120
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AB124
  c->r[30]=c->r[4]|c->r[4]; // 800AB128
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AB12C
  c->r[29]=c->r[3]|c->r[3]; // 800AB130
  c->r[0]=R8(c->r[3]+0x00000040u); // 800AB134
  cmps(c,0,(int32_t)c->r[0],1); // 800AB138
  if (crb(c,2)) { goto L_800AB14C; } // 800AB13C
  cmps(c,0,(int32_t)c->r[0],2); // 800AB140
  if (crb(c,2)) { goto L_800AB1C4; } // 800AB144
  goto L_800AB204; // 800AB148
L_800AB14C:;
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800AB14C
  cmps(c,0,(int32_t)c->r[4],0); // 800AB150
  if (crb(c,0)) { goto L_800AB164; } // 800AB154
  c->r[0]=R32(c->r[3]+0x00000008u); // 800AB158
  cmpu(c,0,c->r[4],c->r[0]); // 800AB15C
  if (!crb(c,1)) { goto L_800AB16C; } // 800AB160
L_800AB164:;
  c->r[3]=0u+0xFFFFEC6Fu; // 800AB164
  goto L_800AB1AC; // 800AB168
L_800AB16C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800AB16C
  c->r[5]=0u+0x00000000u; // 800AB170
  c->r[0]=R32(c->r[29]+0x00000004u); // 800AB174
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800AB178
  c->r[4]=c->r[0]+c->r[4]; // 800AB17C
  c->lr=0x800AB184u; f_80188B10(c); // 800AB180
  cmps(c,0,(int32_t)c->r[3],0); // 800AB184
  if (!crb(c,0)) { goto L_800AB194; } // 800AB188
  c->lr=0x800AB190u; f_800AAF40(c); // 800AB18C
  goto L_800AB1AC; // 800AB190
L_800AB194:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 800AB194
  c->r[4]=c->r[30]|c->r[30]; // 800AB198
  c->r[5]=c->r[31]|c->r[31]; // 800AB19C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800AB1A0
  c->lr=0x800AB1A8u; f_80188A70(c); // 800AB1A4
  c->lr=0x800AB1ACu; f_800AAF40(c); // 800AB1A8
L_800AB1AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800AB1AC
  if (!crb(c,1)) { goto L_800AB208; } // 800AB1B0
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800AB1B4
  c->r[0]=c->r[0]+c->r[3]; // 800AB1B8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800AB1BC
  goto L_800AB208; // 800AB1C0
L_800AB1C4:;
  c->r[6]=R32(c->r[3]+0x0000003Cu); // 800AB1C4
  c->r[7]=0u+0x00000002u; // 800AB1C8
  c->lr=0x800AB1D0u; f_801726C0(c); // 800AB1CC
  cmps(c,0,(int32_t)c->r[3],0); // 800AB1D0
  if (!crb(c,0)) { goto L_800AB1EC; } // 800AB1D4
  cmps(c,0,(int32_t)c->r[3],-3); // 800AB1D8
  if (!crb(c,2)) { goto L_800AB1E8; } // 800AB1DC
  c->r[3]=0u+0xFFFFEC6Au; // 800AB1E0
  goto L_800AB1EC; // 800AB1E4
L_800AB1E8:;
  c->r[3]=0u+0xFFFFEC75u; // 800AB1E8
L_800AB1EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800AB1EC
  if (!crb(c,1)) { goto L_800AB208; } // 800AB1F0
  c->r[0]=R32(c->r[29]+0x0000003Cu); // 800AB1F4
  c->r[0]=c->r[0]+c->r[3]; // 800AB1F8
  W32(c->r[29]+0x0000003Cu,c->r[0]); // 800AB1FC
  goto L_800AB208; // 800AB200
L_800AB204:;
  c->r[3]=0u+0xFFFFEC39u; // 800AB204
L_800AB208:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AB208
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AB20C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AB210
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AB214
  c->lr=c->r[0]; // 800AB218
  c->r[1]=c->r[1]+0x00000020u; // 800AB21C
  return; // 800AB220
}

// fn_800AB230
void f_800AB230(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000040u); // 800AB230
  cmps(c,0,(int32_t)c->r[0],1); // 800AB234
  if (crb(c,2)) { goto L_800AB248; } // 800AB238
  cmps(c,0,(int32_t)c->r[0],2); // 800AB23C
  if (crb(c,2)) { goto L_800AB250; } // 800AB240
  goto L_800AB258; // 800AB244
L_800AB248:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 800AB248
  return; // 800AB24C
L_800AB250:;
  c->r[3]=R32(c->r[3]+0x00000034u); // 800AB250
  return; // 800AB254
L_800AB258:;
  c->r[3]=0u+0x00000000u; // 800AB258
  return; // 800AB25C
}

// fn_800AB260
void f_800AB260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB260
  c->r[0]=c->lr; // 800AB264
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AB268
  c->r[0]=R8(c->r[3]+0x00000040u); // 800AB26C
  cmps(c,0,(int32_t)c->r[0],1); // 800AB270
  if (crb(c,2)) { goto L_800AB284; } // 800AB274
  cmps(c,0,(int32_t)c->r[0],2); // 800AB278
  if (crb(c,2)) { goto L_800AB28C; } // 800AB27C
  goto L_800AB2A8; // 800AB280
L_800AB284:;
  c->r[3]=0u+0x00000000u; // 800AB284
  goto L_800AB2AC; // 800AB288
L_800AB28C:;
  c->lr=0x800AB290u; f_801725A0(c); // 800AB28C
  c->r[4]=0u-c->r[3]; // 800AB290
  c->r[0]=0u+0xFFFFEC73u; // 800AB294
  c->r[3]=c->r[4]|c->r[3]; // 800AB298
  c->r[3]=sraw(c,c->r[3],31); // 800AB29C
  c->r[3]=c->r[0]&~c->r[3]; // 800AB2A0
  goto L_800AB2AC; // 800AB2A4
L_800AB2A8:;
  c->r[3]=0u+0xFFFFEC39u; // 800AB2A8
L_800AB2AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AB2AC
  c->lr=c->r[0]; // 800AB2B0
  c->r[1]=c->r[1]+0x00000010u; // 800AB2B4
  return; // 800AB2B8
}

// fn_800AB2C0
void f_800AB2C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB2C0
  c->r[0]=c->lr; // 800AB2C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AB2C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AB2CC
  c->r[31]=c->r[5]|c->r[5]; // 800AB2D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AB2D4
  c->r[30]=c->r[3]|c->r[3]; // 800AB2D8
  c->r[0]=R8(c->r[3]+0x00000024u); // 800AB2DC
  cmps(c,0,(int32_t)c->r[0],1); // 800AB2E0
  if (crb(c,2)) { goto L_800AB2F4; } // 800AB2E4
  cmps(c,0,(int32_t)c->r[0],2); // 800AB2E8
  if (crb(c,2)) { goto L_800AB338; } // 800AB2EC
  goto L_800AB36C; // 800AB2F0
L_800AB2F4:;
  c->r[0]=0u+0x00000001u; // 800AB2F4
  W8(c->r[5]+0x00000040u,c->r[0]); // 800AB2F8
  c->r[5]=c->r[1]+0x00000008u; // 800AB2FC
  c->lr=0x800AB304u; f_80188220(c); // 800AB300
  cmps(c,0,(int32_t)c->r[3],0); // 800AB304
  if (!crb(c,2)) { goto L_800AB314; } // 800AB308
  c->r[3]=0u+0xFFFFEC6Fu; // 800AB30C
  goto L_800AB370; // 800AB310
L_800AB314:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 800AB314
  c->r[0]=0u+0x00000000u; // 800AB318
  c->r[3]=0u+0x00000000u; // 800AB31C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800AB320
  W32(c->r[31]+0x00000004u,c->r[4]); // 800AB324
  c->r[4]=R32(c->r[1]+0x00000010u); // 800AB328
  W32(c->r[31]+0x00000008u,c->r[4]); // 800AB32C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800AB330
  goto L_800AB370; // 800AB334
L_800AB338:;
  c->r[0]=0u+0x00000002u; // 800AB338
  W8(c->r[5]+0x00000040u,c->r[0]); // 800AB33C
  c->r[3]=c->r[4]|c->r[4]; // 800AB340
  c->r[4]=c->r[31]|c->r[31]; // 800AB344
  c->lr=0x800AB34Cu; f_80172530(c); // 800AB348
  cmps(c,0,(int32_t)c->r[3],0); // 800AB34C
  if (!crb(c,2)) { goto L_800AB35C; } // 800AB350
  c->r[3]=0u+0xFFFFEC6Fu; // 800AB354
  goto L_800AB370; // 800AB358
L_800AB35C:;
  c->r[0]=0u+0x00000000u; // 800AB35C
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800AB360
  c->r[3]=0u+0x00000000u; // 800AB364
  goto L_800AB370; // 800AB368
L_800AB36C:;
  c->r[3]=0u+0xFFFFEC39u; // 800AB36C
L_800AB370:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AB370
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AB374
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AB378
  c->lr=c->r[0]; // 800AB37C
  c->r[1]=c->r[1]+0x00000020u; // 800AB380
  return; // 800AB384
}

// fn_800AB390
void f_800AB390(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000024u); // 800AB390
  cmps(c,0,(int32_t)c->r[0],1); // 800AB394
  if (crb(c,2)) { goto L_800AB3A8; } // 800AB398
  cmps(c,0,(int32_t)c->r[0],2); // 800AB39C
  if (crb(c,2)) { goto L_800AB3AC; } // 800AB3A0
  goto L_800AB3B0; // 800AB3A4
L_800AB3A8:;
  f_80188270(c); return; // 800AB3A8
L_800AB3AC:;
  f_800AACA0(c); return; // 800AB3AC
L_800AB3B0:;
  c->r[3]=0u+0xFFFFEC39u; // 800AB3B0
  return; // 800AB3B4
}

// init__Q210homebutton15FrameControllerFifff
void f_800AB3C0(Ctx* __restrict c) {
  trace_call(0x800AB3C0u);
  cmps(c,0,(int32_t)c->r[4],1); // 800AB3C0
  c->r[0]=0u+0x00000000u; // 800AB3C4
  W32(c->r[3]+0x00000018u,c->r[4]); // 800AB3C8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 800AB3CC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 800AB3D0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 800AB3D4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800AB3D8
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800AB3DC
  if (!crb(c,2)) { goto L_800AB3EC; } // 800AB3E0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800AB3E4
  goto L_800AB3F0; // 800AB3E8
L_800AB3EC:;
  c->f[0]=c->ps1[0]=S(c->f[2]); // 800AB3EC
L_800AB3F0:;
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AB3F0
  return; // 800AB3F4
}

// initFrame__Q210homebutton15FrameControllerFv
void f_800AB400(Ctx* __restrict c) {
  trace_call(0x800AB400u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 800AB400
  cmps(c,0,(int32_t)c->r[0],1); // 800AB404
  if (!crb(c,2)) { goto L_800AB414; } // 800AB408
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB40C
  goto L_800AB418; // 800AB410
L_800AB414:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB414
L_800AB418:;
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AB418
  return; // 800AB41C
}

// calc__Q210homebutton15FrameControllerFv
void f_800AB420(Ctx* __restrict c) {
  trace_call(0x800AB420u);
  c->r[0]=R32(c->r[3]+0x00000014u); // 800AB420
  cmps(c,0,(int32_t)c->r[0],1); // 800AB424
  if (!crb(c,2)) return; // 800AB428
  c->r[0]=R32(c->r[3]+0x00000018u); // 800AB42C
  cmps(c,0,(int32_t)c->r[0],0); // 800AB430
  if (crb(c,2)) { goto L_800AB454; } // 800AB434
  cmps(c,0,(int32_t)c->r[0],1); // 800AB438
  if (crb(c,2)) { goto L_800AB490; } // 800AB43C
  cmps(c,0,(int32_t)c->r[0],2); // 800AB440
  if (crb(c,2)) { goto L_800AB4C0; } // 800AB444
  cmps(c,0,(int32_t)c->r[0],3); // 800AB448
  if (crb(c,2)) { goto L_800AB4F4; } // 800AB44C
  return; // 800AB450
L_800AB454:;
  c->r[4]=0u+0x801F0000u; // 800AB454
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AB458
  {uint32_t ea=c->r[4]+0xFFFFB688u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AB45C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AB460
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB464
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800AB468
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800AB46C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AB470
  fcmp(c,0,c->f[0],c->f[2]); // 800AB474
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AB478
  if (!crb(c,2)) return; // 800AB47C
  c->r[0]=0u+0x00000000u; // 800AB480
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 800AB484
  W32(c->r[3]+0x00000014u,c->r[0]); // 800AB488
  return; // 800AB48C
L_800AB490:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AB490
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AB494
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB498
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800AB49C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800AB4A0
  fcmp(c,0,c->f[1],c->f[0]); // 800AB4A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800AB4A8
  if (!crb(c,2)) return; // 800AB4AC
  c->r[0]=0u+0x00000000u; // 800AB4B0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AB4B4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800AB4B8
  return; // 800AB4BC
L_800AB4C0:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AB4C0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB4C4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AB4C8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 800AB4CC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 800AB4D0
  fcmp(c,0,c->f[2],c->f[1]); // 800AB4D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AB4D8
  if (!crb(c,2)) return; // 800AB4DC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB4E0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800AB4E4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800AB4E8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AB4EC
  return; // 800AB4F0
L_800AB4F4:;
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800AB4F4
  cmps(c,0,(int32_t)c->r[0],0); // 800AB4F8
  if (!crb(c,2)) { goto L_800AB53C; } // 800AB4FC
  c->r[4]=0u+0x801F0000u; // 800AB500
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800AB504
  {uint32_t ea=c->r[4]+0xFFFFB688u; c->f[2]=c->ps1[2]=RF32(ea);} // 800AB508
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AB50C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB510
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 800AB514
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800AB518
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AB51C
  fcmp(c,0,c->f[0],c->f[2]); // 800AB520
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800AB524
  if (!crb(c,2)) return; // 800AB528
  c->r[0]=0u+0x00000001u; // 800AB52C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 800AB530
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800AB534
  return; // 800AB538
L_800AB53C:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800AB53C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AB540
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB544
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800AB548
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 800AB54C
  fcmp(c,0,c->f[1],c->f[0]); // 800AB550
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800AB554
  if (!crb(c,2)) return; // 800AB558
  c->r[0]=0u+0x00000000u; // 800AB55C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800AB560
  W8(c->r[3]+0x0000001Cu,c->r[0]); // 800AB564
  return; // 800AB568
}

// __ct__Q210homebutton18GroupAnmControllerFv
void f_800AB570(Ctx* __restrict c) {
  trace_call(0x800AB570u);
  c->r[4]=0u+0x80220000u; // 800AB570
  c->r[0]=0u+0x00000000u; // 800AB574
  c->r[4]=c->r[4]+0xFFFFB068u; // 800AB578
  W32(c->r[3]+0x00000000u,c->r[4]); // 800AB57C
  W32(c->r[3]+0x00000020u,c->r[0]); // 800AB580
  W32(c->r[3]+0x00000024u,c->r[0]); // 800AB584
  return; // 800AB588
}

// __dt__Q210homebutton18GroupAnmControllerFv
void f_800AB590(Ctx* __restrict c) {
  trace_call(0x800AB590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB590
  c->r[0]=c->lr; // 800AB594
  cmps(c,0,(int32_t)c->r[3],0); // 800AB598
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AB59C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AB5A0
  c->r[31]=c->r[3]|c->r[3]; // 800AB5A4
  if (crb(c,2)) { goto L_800AB5B8; } // 800AB5A8
  cmps(c,0,(int32_t)c->r[4],0); // 800AB5AC
  if (!crb(c,1)) { goto L_800AB5B8; } // 800AB5B0
  c->lr=0x800AB5B8u; f_800D93B0(c); // 800AB5B4
L_800AB5B8:;
  c->r[3]=c->r[31]|c->r[31]; // 800AB5B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AB5BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AB5C0
  c->lr=c->r[0]; // 800AB5C4
  c->r[1]=c->r[1]+0x00000010u; // 800AB5C8
  return; // 800AB5CC
}

// do_calc__Q210homebutton18GroupAnmControllerFv
void f_800AB5D0(Ctx* __restrict c) {
  trace_call(0x800AB5D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB5D0
  c->r[0]=c->lr; // 800AB5D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AB5D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AB5DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AB5E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AB5E4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800AB5E8
  c->r[28]=c->r[3]|c->r[3]; // 800AB5EC
  c->r[0]=R32(c->r[3]+0x00000014u); // 800AB5F0
  cmps(c,0,(int32_t)c->r[0],1); // 800AB5F4
  if (!crb(c,2)) { goto L_800AB620; } // 800AB5F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AB5FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800AB600
  c->ctr=c->r[12]; // 800AB604
  if (true) { c->lr=0x800AB60Cu; dispatch(c,c->ctr); } // 800AB608
  c->r[3]=R32(c->r[28]+0x00000024u); // 800AB60C
  c->r[29]=0u+0x00000001u; // 800AB610
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AB614
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800AB618
  goto L_800AB624; // 800AB61C
L_800AB620:;
  c->r[29]=0u+0x00000000u; // 800AB620
L_800AB624:;
  c->r[3]=R32(c->r[28]+0x00000020u); // 800AB624
  c->r[31]=R32(c->r[3]+0x00000010u); // 800AB628
  c->r[30]=c->r[3]+0x00000010u; // 800AB62C
  goto L_800AB658; // 800AB630
L_800AB634:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800AB634
  c->r[5]=c->r[29]|c->r[29]; // 800AB638
  c->r[4]=R32(c->r[28]+0x00000024u); // 800AB63C
  c->r[6]=0u+0x00000000u; // 800AB640
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AB644
  c->r[12]=R32(c->r[12]+0x00000058u); // 800AB648
  c->ctr=c->r[12]; // 800AB64C
  if (true) { c->lr=0x800AB654u; dispatch(c,c->ctr); } // 800AB650
  c->r[31]=R32(c->r[31]+0x00000000u); // 800AB654
L_800AB658:;
  cmpu(c,0,c->r[31],c->r[30]); // 800AB658
  if (!crb(c,2)) { IRQCHK(c); goto L_800AB634; } // 800AB65C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AB660
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AB664
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AB668
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AB66C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800AB670
  c->lr=c->r[0]; // 800AB674
  c->r[1]=c->r[1]+0x00000020u; // 800AB678
  return; // 800AB67C
}

// drawLine___Q210homebutton3guiFfffffUcR8_GXColor
void f_800AB680(Ctx* __restrict c) {
  trace_call(0x800AB680u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB680
  c->r[0]=c->lr; // 800AB684
  W32(c->r[1]+0x00000094u,c->r[0]); // 800AB688
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800AB68C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800AB690
  c->f[31]=c->f[5]; // 800AB694
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800AB698
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800AB69C
  c->f[30]=c->f[4]; // 800AB6A0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 800AB6A4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 800AB6A8
  c->f[29]=c->f[3]; // 800AB6AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 800AB6B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 800AB6B4
  c->f[28]=c->f[2]; // 800AB6B8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 800AB6BC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 800AB6C0
  c->f[27]=c->f[1]; // 800AB6C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800AB6C8
  c->r[31]=c->r[4]|c->r[4]; // 800AB6CC
  W32(c->r[1]+0x00000038u,c->r[30]); // 800AB6D0
  c->r[30]=c->r[3]|c->r[3]; // 800AB6D4
  c->lr=0x800AB6DCu; f_8016D660(c); // 800AB6D8
  c->r[3]=0u+0x00000009u; // 800AB6DC
  c->r[4]=0u+0x00000001u; // 800AB6E0
  c->lr=0x800AB6E8u; f_8016D210(c); // 800AB6E4
  c->r[3]=0u+0x0000000Bu; // 800AB6E8
  c->r[4]=0u+0x00000001u; // 800AB6EC
  c->lr=0x800AB6F4u; f_8016D210(c); // 800AB6F0
  c->r[3]=0u+0x00000000u; // 800AB6F4
  c->r[4]=0u+0x00000009u; // 800AB6F8
  c->r[5]=0u+0x00000001u; // 800AB6FC
  c->r[6]=0u+0x00000004u; // 800AB700
  c->r[7]=0u+0x00000000u; // 800AB704
  c->lr=0x800AB70Cu; f_8016D6A0(c); // 800AB708
  c->r[3]=0u+0x00000000u; // 800AB70C
  c->r[4]=0u+0x0000000Bu; // 800AB710
  c->r[5]=0u+0x00000001u; // 800AB714
  c->r[6]=0u+0x00000005u; // 800AB718
  c->r[7]=0u+0x00000000u; // 800AB71C
  c->lr=0x800AB724u; f_8016D6A0(c); // 800AB720
  c->r[3]=0u+0x00000000u; // 800AB724
  c->lr=0x800AB72Cu; f_8016E9F0(c); // 800AB728
  c->r[3]=0u+0x00000001u; // 800AB72C
  c->lr=0x800AB734u; f_8016F6D0(c); // 800AB730
  c->r[3]=0u+0x00000004u; // 800AB734
  c->r[4]=0u+0x00000000u; // 800AB738
  c->r[5]=0u+0x00000001u; // 800AB73C
  c->r[6]=0u+0x00000001u; // 800AB740
  c->r[7]=0u+0x00000000u; // 800AB744
  c->r[8]=0u+0x00000000u; // 800AB748
  c->r[9]=0u+0x00000002u; // 800AB74C
  c->lr=0x800AB754u; f_8016F700(c); // 800AB750
  c->r[3]=0u+0x00000000u; // 800AB754
  c->lr=0x800AB75Cu; f_8016DD30(c); // 800AB758
  c->r[3]=0u+0x00000001u; // 800AB75C
  c->lr=0x800AB764u; f_80171170(c); // 800AB760
  c->r[3]=0u+0x00000000u; // 800AB764
  c->r[4]=0u+0x00000004u; // 800AB768
  c->lr=0x800AB770u; f_80170AD0(c); // 800AB76C
  c->r[3]=0u+0x00000000u; // 800AB770
  c->r[4]=0u+0x000000FFu; // 800AB774
  c->r[5]=0u+0x000000FFu; // 800AB778
  c->r[6]=0u+0x00000004u; // 800AB77C
  c->lr=0x800AB784u; f_80171010(c); // 800AB780
  c->r[3]=0u+0x00000000u; // 800AB784
  c->r[4]=0u+0x00000000u; // 800AB788
  c->r[5]=0u+0x00000000u; // 800AB78C
  c->r[6]=0u+0x00000005u; // 800AB790
  c->lr=0x800AB798u; f_801714E0(c); // 800AB794
  c->r[4]=0u+0x801F0000u; // 800AB798
  c->r[3]=c->r[1]+0x00000008u; // 800AB79C
  {uint32_t ea=c->r[4]+0xFFFFB690u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AB7A0
  c->f[2]=c->f[1]; // 800AB7A4
  c->f[3]=c->f[1]; // 800AB7A8
  c->lr=0x800AB7B0u; f_8016B170(c); // 800AB7AC
  c->r[3]=c->r[1]+0x00000008u; // 800AB7B0
  c->r[4]=0u+0x00000000u; // 800AB7B4
  c->lr=0x800AB7BCu; f_801718D0(c); // 800AB7B8
  c->r[3]=c->r[30]|c->r[30]; // 800AB7BC
  c->r[4]=0u+0x00000000u; // 800AB7C0
  c->lr=0x800AB7C8u; f_8016E930(c); // 800AB7C4
  c->r[3]=0u+0x000000A8u; // 800AB7C8
  c->r[4]=0u+0x00000000u; // 800AB7CC
  c->r[5]=0u+0x00000002u; // 800AB7D0
  c->lr=0x800AB7D8u; f_8016E7E0(c); // 800AB7D4
  c->r[3]=0u+0xCC010000u; // 800AB7D8
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[27]);} // 800AB7DC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[28]);} // 800AB7E0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 800AB7E4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800AB7E8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800AB7EC
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[29]);} // 800AB7F0
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[30]);} // 800AB7F4
  {uint32_t ea=c->r[3]+0xFFFF8000u; WF32(ea,c->f[31]);} // 800AB7F8
  c->r[0]=R32(c->r[31]+0x00000000u); // 800AB7FC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800AB800
  c->r[0]=R32(c->r[1]+0x00000094u); // 800AB804
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800AB808
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800AB80C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800AB810
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800AB814
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 800AB818
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 800AB81C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 800AB820
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 800AB824
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 800AB828
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 800AB82C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800AB830
  c->r[30]=R32(c->r[1]+0x00000038u); // 800AB834
  c->lr=c->r[0]; // 800AB838
  c->r[1]=c->r[1]+0x00000090u; // 800AB83C
  return; // 800AB840
}

// update__Q310homebutton3gui9ComponentFiffUlUlUlPv
void f_800AB850(Ctx* __restrict c) {
  trace_call(0x800AB850u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AB850
  c->r[0]=c->lr; // 800AB854
  W32(c->r[1]+0x00000034u,c->r[0]); // 800AB858
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800AB85C
  c->f[31]=c->f[2]; // 800AB860
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800AB864
  c->f[30]=c->f[1]; // 800AB868
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AB86C
  c->r[31]=0u+0x00000000u; // 800AB870
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AB874
  c->r[30]=c->r[8]|c->r[8]; // 800AB878
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AB87C
  c->r[29]=c->r[4]|c->r[4]; // 800AB880
  W32(c->r[1]+0x00000010u,c->r[28]); // 800AB884
  c->r[28]=c->r[3]|c->r[3]; // 800AB888
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AB88C
  c->r[12]=R32(c->r[12]+0x00000058u); // 800AB890
  c->ctr=c->r[12]; // 800AB894
  if (true) { c->lr=0x800AB89Cu; dispatch(c,c->ctr); } // 800AB898
  cmps(c,0,(int32_t)c->r[3],0); // 800AB89C
  if (crb(c,2)) { goto L_800ABA2C; } // 800AB8A0
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB8A4
  c->f[1]=c->f[30]; // 800AB8A8
  c->f[2]=c->f[31]; // 800AB8AC
  c->r[3]=c->r[28]|c->r[28]; // 800AB8B0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 800AB8B4
  c->ctr=c->r[12]; // 800AB8B8
  if (true) { c->lr=0x800AB8C0u; dispatch(c,c->ctr); } // 800AB8BC
  cmps(c,0,(int32_t)c->r[3],0); // 800AB8C0
  if (crb(c,2)) { goto L_800AB9A8; } // 800AB8C4
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB8C8
  c->r[3]=c->r[28]|c->r[28]; // 800AB8CC
  c->r[4]=c->r[29]|c->r[29]; // 800AB8D0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AB8D4
  c->ctr=c->r[12]; // 800AB8D8
  if (true) { c->lr=0x800AB8E0u; dispatch(c,c->ctr); } // 800AB8DC
  cmps(c,0,(int32_t)c->r[3],0); // 800AB8E0
  if (crb(c,2)) { goto L_800AB93C; } // 800AB8E4
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB8E8
  c->f[1]=c->f[30]; // 800AB8EC
  c->f[2]=c->f[31]; // 800AB8F0
  c->r[3]=c->r[28]|c->r[28]; // 800AB8F4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800AB8F8
  c->ctr=c->r[12]; // 800AB8FC
  if (true) { c->lr=0x800AB904u; dispatch(c,c->ctr); } // 800AB900
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB904
  c->r[3]=c->r[28]|c->r[28]; // 800AB908
  c->r[12]=R32(c->r[12]+0x00000020u); // 800AB90C
  c->ctr=c->r[12]; // 800AB910
  if (true) { c->lr=0x800AB918u; dispatch(c,c->ctr); } // 800AB914
  c->r[4]=c->r[3]|c->r[3]; // 800AB918
  c->r[3]=R32(c->r[28]+0x00000028u); // 800AB91C
  c->r[6]=c->r[30]|c->r[30]; // 800AB920
  c->r[5]=0u+0x00000003u; // 800AB924
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AB928
  c->r[12]=R32(c->r[12]+0x00000034u); // 800AB92C
  c->ctr=c->r[12]; // 800AB930
  if (true) { c->lr=0x800AB938u; dispatch(c,c->ctr); } // 800AB934
  goto L_800AB9A0; // 800AB938
L_800AB93C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB93C
  c->r[3]=c->r[28]|c->r[28]; // 800AB940
  c->r[4]=c->r[29]|c->r[29]; // 800AB944
  c->r[5]=0u+0x00000001u; // 800AB948
  c->r[12]=R32(c->r[12]+0x00000028u); // 800AB94C
  c->ctr=c->r[12]; // 800AB950
  if (true) { c->lr=0x800AB958u; dispatch(c,c->ctr); } // 800AB954
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB958
  c->r[3]=c->r[28]|c->r[28]; // 800AB95C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800AB960
  c->ctr=c->r[12]; // 800AB964
  if (true) { c->lr=0x800AB96Cu; dispatch(c,c->ctr); } // 800AB968
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB96C
  c->r[3]=c->r[28]|c->r[28]; // 800AB970
  c->r[12]=R32(c->r[12]+0x00000020u); // 800AB974
  c->ctr=c->r[12]; // 800AB978
  if (true) { c->lr=0x800AB980u; dispatch(c,c->ctr); } // 800AB97C
  c->r[4]=c->r[3]|c->r[3]; // 800AB980
  c->r[3]=R32(c->r[28]+0x00000028u); // 800AB984
  c->r[6]=c->r[30]|c->r[30]; // 800AB988
  c->r[5]=0u+0x00000001u; // 800AB98C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AB990
  c->r[12]=R32(c->r[12]+0x00000034u); // 800AB994
  c->ctr=c->r[12]; // 800AB998
  if (true) { c->lr=0x800AB9A0u; dispatch(c,c->ctr); } // 800AB99C
L_800AB9A0:;
  c->r[31]=0u+0x00000001u; // 800AB9A0
  goto L_800ABA2C; // 800AB9A4
L_800AB9A8:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB9A8
  c->r[3]=c->r[28]|c->r[28]; // 800AB9AC
  c->r[4]=c->r[29]|c->r[29]; // 800AB9B0
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AB9B4
  c->ctr=c->r[12]; // 800AB9B8
  if (true) { c->lr=0x800AB9C0u; dispatch(c,c->ctr); } // 800AB9BC
  cmps(c,0,(int32_t)c->r[3],0); // 800AB9C0
  if (crb(c,2)) { goto L_800ABA2C; } // 800AB9C4
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB9C8
  c->r[3]=c->r[28]|c->r[28]; // 800AB9CC
  c->r[4]=c->r[29]|c->r[29]; // 800AB9D0
  c->r[5]=0u+0x00000000u; // 800AB9D4
  c->r[12]=R32(c->r[12]+0x00000028u); // 800AB9D8
  c->ctr=c->r[12]; // 800AB9DC
  if (true) { c->lr=0x800AB9E4u; dispatch(c,c->ctr); } // 800AB9E0
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB9E4
  c->r[3]=c->r[28]|c->r[28]; // 800AB9E8
  c->r[12]=R32(c->r[12]+0x00000030u); // 800AB9EC
  c->ctr=c->r[12]; // 800AB9F0
  if (true) { c->lr=0x800AB9F8u; dispatch(c,c->ctr); } // 800AB9F4
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AB9F8
  c->r[3]=c->r[28]|c->r[28]; // 800AB9FC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800ABA00
  c->ctr=c->r[12]; // 800ABA04
  if (true) { c->lr=0x800ABA0Cu; dispatch(c,c->ctr); } // 800ABA08
  c->r[4]=c->r[3]|c->r[3]; // 800ABA0C
  c->r[3]=R32(c->r[28]+0x00000028u); // 800ABA10
  c->r[6]=c->r[30]|c->r[30]; // 800ABA14
  c->r[5]=0u+0x00000002u; // 800ABA18
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ABA1C
  c->r[12]=R32(c->r[12]+0x00000034u); // 800ABA20
  c->ctr=c->r[12]; // 800ABA24
  if (true) { c->lr=0x800ABA2Cu; dispatch(c,c->ctr); } // 800ABA28
L_800ABA2C:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800ABA2C
  c->r[3]=c->r[31]|c->r[31]; // 800ABA30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800ABA34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ABA38
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ABA3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ABA40
  c->r[28]=R32(c->r[1]+0x00000010u); // 800ABA44
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ABA48
  c->lr=c->r[0]; // 800ABA4C
  c->r[1]=c->r[1]+0x00000030u; // 800ABA50
  return; // 800ABA54
}

// isVisible__Q310homebutton3gui9ComponentFv
void f_800ABA60(Ctx* __restrict c) {
  trace_call(0x800ABA60u);
  c->r[3]=0u+0x00000001u; // 800ABA60
  return; // 800ABA64
}

// isPointed__Q310homebutton3gui9ComponentFi
void f_800ABA70(Ctx* __restrict c) {
  trace_call(0x800ABA70u);
  c->r[3]=c->r[3]+c->r[4]; // 800ABA70
  c->r[3]=R8(c->r[3]+0x00000004u); // 800ABA74
  return; // 800ABA78
}

// onMove__Q310homebutton3gui9ComponentFff
void f_800ABA80(Ctx* __restrict c) {
  trace_call(0x800ABA80u);
  return; // 800ABA80
}

// onEvent__Q310homebutton3gui7ManagerFUlUlPv
void f_800ABA90(Ctx* __restrict c) {
  trace_call(0x800ABA90u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 800ABA90
  cmps(c,0,(int32_t)c->r[3],0); // 800ABA94
  if (crb(c,2)) return; // 800ABA98
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ABA9C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800ABAA0
  c->ctr=c->r[12]; // 800ABAA4
  if (true) { dispatch(c,c->ctr); return; } // 800ABAA8
  return; // 800ABAAC
}

// onEvent__Q310homebutton3gui12EventHandlerFUlUlPv
void f_800ABAB0(Ctx* __restrict c) {
  trace_call(0x800ABAB0u);
  return; // 800ABAB0
}

// getID__Q310homebutton3gui9ComponentFv
void f_800ABAC0(Ctx* __restrict c) {
  trace_call(0x800ABAC0u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 800ABAC0
  return; // 800ABAC4
}

// setPointed__Q310homebutton3gui9ComponentFib
void f_800ABAD0(Ctx* __restrict c) {
  trace_call(0x800ABAD0u);
  c->r[3]=c->r[3]+c->r[4]; // 800ABAD0
  W8(c->r[3]+0x00000004u,c->r[5]); // 800ABAD4
  return; // 800ABAD8
}

// onPoint__Q310homebutton3gui9ComponentFv
void f_800ABAE0(Ctx* __restrict c) {
  trace_call(0x800ABAE0u);
  return; // 800ABAE0
}

// offPoint__Q310homebutton3gui9ComponentFv
void f_800ABAF0(Ctx* __restrict c) {
  trace_call(0x800ABAF0u);
  return; // 800ABAF0
}

// __dt__Q310homebutton3gui7ManagerFv
void f_800ABB00(Ctx* __restrict c) {
  trace_call(0x800ABB00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABB00
  c->r[0]=c->lr; // 800ABB04
  cmps(c,0,(int32_t)c->r[3],0); // 800ABB08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ABB0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ABB10
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ABB14
  c->r[30]=c->r[4]|c->r[4]; // 800ABB18
  W32(c->r[1]+0x00000014u,c->r[29]); // 800ABB1C
  c->r[29]=c->r[3]|c->r[3]; // 800ABB20
  if (crb(c,2)) { goto L_800ABB9C; } // 800ABB24
  c->r[5]=0u+0x80220000u; // 800ABB28
  c->r[4]=0u+0x00000000u; // 800ABB2C
  c->r[5]=c->r[5]+0xFFFFB1F8u; // 800ABB30
  W32(c->r[3]+0x00000000u,c->r[5]); // 800ABB34
  c->r[3]=c->r[3]+0x00000008u; // 800ABB38
  c->lr=0x800ABB40u; f_800C6830(c); // 800ABB3C
  c->r[31]=c->r[3]|c->r[3]; // 800ABB40
  goto L_800ABB84; // 800ABB44
L_800ABB48:;
  c->r[4]=c->r[31]|c->r[31]; // 800ABB48
  c->r[3]=c->r[29]+0x00000008u; // 800ABB4C
  c->lr=0x800ABB54u; f_800C67C0(c); // 800ABB50
  c->r[3]=R32(c->r[29]+0x00000014u); // 800ABB54
  cmps(c,0,(int32_t)c->r[3],0); // 800ABB58
  if (crb(c,2)) { goto L_800ABB6C; } // 800ABB5C
  c->r[4]=c->r[31]|c->r[31]; // 800ABB60
  c->lr=0x800ABB68u; f_80180370(c); // 800ABB64
  goto L_800ABB74; // 800ABB68
L_800ABB6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800ABB6C
  c->lr=0x800ABB74u; f_800D93B0(c); // 800ABB70
L_800ABB74:;
  c->r[3]=c->r[29]+0x00000008u; // 800ABB74
  c->r[4]=0u+0x00000000u; // 800ABB78
  c->lr=0x800ABB80u; f_800C6830(c); // 800ABB7C
  c->r[31]=c->r[3]|c->r[3]; // 800ABB80
L_800ABB84:;
  cmps(c,0,(int32_t)c->r[31],0); // 800ABB84
  if (!crb(c,2)) { IRQCHK(c); goto L_800ABB48; } // 800ABB88
  cmps(c,0,(int32_t)c->r[30],0); // 800ABB8C
  if (!crb(c,1)) { goto L_800ABB9C; } // 800ABB90
  c->r[3]=c->r[29]|c->r[29]; // 800ABB94
  c->lr=0x800ABB9Cu; f_800D93B0(c); // 800ABB98
L_800ABB9C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ABB9C
  c->r[3]=c->r[29]|c->r[29]; // 800ABBA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ABBA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ABBA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ABBAC
  c->lr=c->r[0]; // 800ABBB0
  c->r[1]=c->r[1]+0x00000020u; // 800ABBB4
  return; // 800ABBB8
}

// init__Q310homebutton3gui7ManagerFv
void f_800ABBC0(Ctx* __restrict c) {
  trace_call(0x800ABBC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABBC0
  c->r[0]=c->lr; // 800ABBC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ABBC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ABBCC
  c->r[31]=0u+0x00000000u; // 800ABBD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800ABBD4
  c->r[30]=c->r[3]|c->r[3]; // 800ABBD8
  goto L_800ABC04; // 800ABBDC
L_800ABBE0:;
  c->r[3]=c->r[30]+0x00000008u; // 800ABBE0
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 800ABBE4
  c->lr=0x800ABBECu; f_800C6850(c); // 800ABBE8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800ABBEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ABBF0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ABBF4
  c->ctr=c->r[12]; // 800ABBF8
  if (true) { c->lr=0x800ABC00u; dispatch(c,c->ctr); } // 800ABBFC
  c->r[31]=c->r[31]+0x00000001u; // 800ABC00
L_800ABC04:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 800ABC04
  cmpu(c,0,c->r[31],c->r[0]); // 800ABC08
  if (crb(c,0)) { IRQCHK(c); goto L_800ABBE0; } // 800ABC0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ABC10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ABC14
  c->r[30]=R32(c->r[1]+0x00000008u); // 800ABC18
  c->lr=c->r[0]; // 800ABC1C
  c->r[1]=c->r[1]+0x00000010u; // 800ABC20
  return; // 800ABC24
}

// init__Q310homebutton3gui9ComponentFv
void f_800ABC30(Ctx* __restrict c) {
  trace_call(0x800ABC30u);
  c->r[0]=0u+0x00000000u; // 800ABC30
  W8(c->r[3]+0x00000018u,c->r[0]); // 800ABC34
  W8(c->r[3]+0x00000004u,c->r[0]); // 800ABC38
  W8(c->r[3]+0x00000005u,c->r[0]); // 800ABC3C
  W8(c->r[3]+0x00000006u,c->r[0]); // 800ABC40
  W8(c->r[3]+0x00000007u,c->r[0]); // 800ABC44
  W8(c->r[3]+0x00000008u,c->r[0]); // 800ABC48
  W8(c->r[3]+0x00000009u,c->r[0]); // 800ABC4C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 800ABC50
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 800ABC54
  return; // 800ABC58
}

// addComponent__Q310homebutton3gui7ManagerFPQ310homebutton3gui9Component
void f_800ABC60(Ctx* __restrict c) {
  trace_call(0x800ABC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABC60
  c->r[0]=c->lr; // 800ABC64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ABC68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ABC6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ABC70
  c->r[30]=c->r[4]|c->r[4]; // 800ABC74
  W32(c->r[1]+0x00000014u,c->r[29]); // 800ABC78
  c->r[29]=c->r[3]|c->r[3]; // 800ABC7C
  c->r[3]=c->r[30]|c->r[30]; // 800ABC80
  c->r[12]=R32(c->r[30]+0x00000000u); // 800ABC84
  c->r[12]=R32(c->r[12]+0x00000020u); // 800ABC88
  c->ctr=c->r[12]; // 800ABC8C
  if (true) { c->lr=0x800ABC94u; dispatch(c,c->ctr); } // 800ABC90
  c->r[12]=R32(c->r[30]+0x00000000u); // 800ABC94
  c->r[31]=c->r[3]|c->r[3]; // 800ABC98
  c->r[3]=c->r[30]|c->r[30]; // 800ABC9C
  c->r[4]=c->r[29]|c->r[29]; // 800ABCA0
  c->r[12]=R32(c->r[12]+0x00000054u); // 800ABCA4
  c->ctr=c->r[12]; // 800ABCA8
  if (true) { c->lr=0x800ABCB0u; dispatch(c,c->ctr); } // 800ABCAC
  c->r[3]=R32(c->r[29]+0x00000014u); // 800ABCB0
  cmps(c,0,(int32_t)c->r[3],0); // 800ABCB4
  if (crb(c,2)) { goto L_800ABCE4; } // 800ABCB8
  c->r[4]=0u+0x00000010u; // 800ABCBC
  c->lr=0x800ABCC4u; f_80180360(c); // 800ABCC0
  cmps(c,0,(int32_t)c->r[3],0); // 800ABCC4
  if (crb(c,2)) { goto L_800ABCD4; } // 800ABCC8
  W32(c->r[3]+0x00000000u,c->r[31]); // 800ABCCC
  W32(c->r[3]+0x00000004u,c->r[30]); // 800ABCD0
L_800ABCD4:;
  c->r[4]=c->r[3]|c->r[3]; // 800ABCD4
  c->r[3]=c->r[29]+0x00000008u; // 800ABCD8
  c->lr=0x800ABCE0u; f_800C6750(c); // 800ABCDC
  goto L_800ABD08; // 800ABCE0
L_800ABCE4:;
  c->r[3]=0u+0x00000010u; // 800ABCE4
  c->lr=0x800ABCECu; f_800D8ED0(c); // 800ABCE8
  cmps(c,0,(int32_t)c->r[3],0); // 800ABCEC
  if (crb(c,2)) { goto L_800ABCFC; } // 800ABCF0
  W32(c->r[3]+0x00000000u,c->r[31]); // 800ABCF4
  W32(c->r[3]+0x00000004u,c->r[30]); // 800ABCF8
L_800ABCFC:;
  c->r[4]=c->r[3]|c->r[3]; // 800ABCFC
  c->r[3]=c->r[29]+0x00000008u; // 800ABD00
  c->lr=0x800ABD08u; f_800C6750(c); // 800ABD04
L_800ABD08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ABD08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ABD0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ABD10
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ABD14
  c->lr=c->r[0]; // 800ABD18
  c->r[1]=c->r[1]+0x00000020u; // 800ABD1C
  return; // 800ABD20
}

// setManager__Q310homebutton3gui9ComponentFPQ310homebutton3gui7Manager
void f_800ABD30(Ctx* __restrict c) {
  trace_call(0x800ABD30u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 800ABD30
  return; // 800ABD34
}

// delComponent__Q310homebutton3gui7ManagerFPQ310homebutton3gui9Component
void f_800ABD40(Ctx* __restrict c) {
  trace_call(0x800ABD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABD40
  c->r[0]=c->lr; // 800ABD44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ABD48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ABD4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ABD50
  c->r[30]=c->r[4]|c->r[4]; // 800ABD54
  c->r[4]=0u+0x00000000u; // 800ABD58
  W32(c->r[1]+0x00000014u,c->r[29]); // 800ABD5C
  c->r[29]=c->r[3]|c->r[3]; // 800ABD60
  c->r[3]=c->r[3]+0x00000008u; // 800ABD64
  c->lr=0x800ABD6Cu; f_800C6830(c); // 800ABD68
  c->r[31]=c->r[3]|c->r[3]; // 800ABD6C
  goto L_800ABD90; // 800ABD70
L_800ABD74:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800ABD74
  cmpu(c,0,c->r[0],c->r[30]); // 800ABD78
  if (crb(c,2)) { goto L_800ABD98; } // 800ABD7C
  c->r[4]=c->r[31]|c->r[31]; // 800ABD80
  c->r[3]=c->r[29]+0x00000008u; // 800ABD84
  c->lr=0x800ABD8Cu; f_800C6830(c); // 800ABD88
  c->r[31]=c->r[3]|c->r[3]; // 800ABD8C
L_800ABD90:;
  cmps(c,0,(int32_t)c->r[31],0); // 800ABD90
  if (!crb(c,2)) { IRQCHK(c); goto L_800ABD74; } // 800ABD94
L_800ABD98:;
  c->r[4]=c->r[31]|c->r[31]; // 800ABD98
  c->r[3]=c->r[29]+0x00000008u; // 800ABD9C
  c->lr=0x800ABDA4u; f_800C67C0(c); // 800ABDA0
  c->r[3]=R32(c->r[29]+0x00000014u); // 800ABDA4
  cmps(c,0,(int32_t)c->r[3],0); // 800ABDA8
  if (crb(c,2)) { goto L_800ABDBC; } // 800ABDAC
  c->r[4]=c->r[31]|c->r[31]; // 800ABDB0
  c->lr=0x800ABDB8u; f_80180370(c); // 800ABDB4
  goto L_800ABDC4; // 800ABDB8
L_800ABDBC:;
  c->r[3]=c->r[31]|c->r[31]; // 800ABDBC
  c->lr=0x800ABDC4u; f_800D93B0(c); // 800ABDC0
L_800ABDC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ABDC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ABDC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ABDCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ABDD0
  c->lr=c->r[0]; // 800ABDD4
  c->r[1]=c->r[1]+0x00000020u; // 800ABDD8
  return; // 800ABDDC
}

// getComponent__Q310homebutton3gui7ManagerFUl
void f_800ABDE0(Ctx* __restrict c) {
  trace_call(0x800ABDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABDE0
  c->r[0]=c->lr; // 800ABDE4
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 800ABDE8
  c->r[3]=c->r[3]+0x00000008u; // 800ABDEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ABDF0
  c->lr=0x800ABDF8u; f_800C6850(c); // 800ABDF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ABDF8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800ABDFC
  c->lr=c->r[0]; // 800ABE00
  c->r[1]=c->r[1]+0x00000010u; // 800ABE04
  return; // 800ABE08
}

// update__Q310homebutton3gui7ManagerFiffUlUlUlPv
void f_800ABE10(Ctx* __restrict c) {
  trace_call(0x800ABE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ABE10
  c->r[0]=c->lr; // 800ABE14
  W32(c->r[1]+0x00000064u,c->r[0]); // 800ABE18
  c->r[11]=c->r[1]+0x00000050u; // 800ABE1C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[31]);} // 800ABE20
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800ABE24
  c->lr=0x800ABE2Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ABE28
  c->f[30]=c->f[1]; // 800ABE2C
  c->r[22]=c->r[3]|c->r[3]; // 800ABE30
  c->f[31]=c->f[2]; // 800ABE34
  c->r[23]=c->r[4]|c->r[4]; // 800ABE38
  c->r[24]=c->r[5]|c->r[5]; // 800ABE3C
  c->r[25]=c->r[6]|c->r[6]; // 800ABE40
  c->r[26]=c->r[7]|c->r[7]; // 800ABE44
  c->r[27]=c->r[8]|c->r[8]; // 800ABE48
  c->r[30]=0u+0x00000000u; // 800ABE4C
  c->r[29]=0u+0x00000000u; // 800ABE50
  c->r[28]=0u+0x00000000u; // 800ABE54
  goto L_800ABECC; // 800ABE58
L_800ABE5C:;
  c->r[3]=c->r[22]+0x00000008u; // 800ABE5C
  c->r[4]=rotl(c->r[28],0)&0x0000FFFFu; // 800ABE60
  c->lr=0x800ABE68u; f_800C6850(c); // 800ABE64
  c->r[31]=c->r[3]|c->r[3]; // 800ABE68
  c->r[3]=R32(c->r[3]+0x00000004u); // 800ABE6C
  c->f[1]=c->f[30]; // 800ABE70
  c->r[4]=c->r[23]|c->r[23]; // 800ABE74
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ABE78
  c->f[2]=c->f[31]; // 800ABE7C
  c->r[5]=c->r[24]|c->r[24]; // 800ABE80
  c->r[6]=c->r[25]|c->r[25]; // 800ABE84
  c->r[12]=R32(c->r[12]+0x00000048u); // 800ABE88
  c->r[7]=c->r[26]|c->r[26]; // 800ABE8C
  c->r[8]=c->r[27]|c->r[27]; // 800ABE90
  c->ctr=c->r[12]; // 800ABE94
  if (true) { c->lr=0x800ABE9Cu; dispatch(c,c->ctr); } // 800ABE98
  cmps(c,0,(int32_t)c->r[3],0); // 800ABE9C
  if (crb(c,2)) { goto L_800ABEC8; } // 800ABEA0
  c->r[3]=R32(c->r[31]+0x00000004u); // 800ABEA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ABEA8
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 800ABEAC
  c->ctr=c->r[12]; // 800ABEB0
  if (true) { c->lr=0x800ABEB8u; dispatch(c,c->ctr); } // 800ABEB4
  cmps(c,0,(int32_t)c->r[3],0); // 800ABEB8
  if (crb(c,2)) { goto L_800ABEC4; } // 800ABEBC
  c->r[29]=R32(c->r[31]+0x00000004u); // 800ABEC0
L_800ABEC4:;
  c->r[30]=0u+0x00000001u; // 800ABEC4
L_800ABEC8:;
  c->r[28]=c->r[28]+0x00000001u; // 800ABEC8
L_800ABECC:;
  c->r[0]=R16(c->r[22]+0x00000010u); // 800ABECC
  cmpu(c,0,c->r[28],c->r[0]); // 800ABED0
  if (crb(c,0)) { IRQCHK(c); goto L_800ABE5C; } // 800ABED4
  cmps(c,0,(int32_t)c->r[29],0); // 800ABED8
  if (crb(c,2)) { goto L_800ABF90; } // 800ABEDC
  cmps(c,0,(int32_t)c->r[24],0); // 800ABEE0
  if (crb(c,2)) { goto L_800ABF38; } // 800ABEE4
  c->r[12]=R32(c->r[29]+0x00000000u); // 800ABEE8
  c->r[3]=c->r[29]|c->r[29]; // 800ABEEC
  c->r[4]=c->r[24]|c->r[24]; // 800ABEF0
  c->r[5]=c->r[1]+0x00000014u; // 800ABEF4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800ABEF8
  c->ctr=c->r[12]; // 800ABEFC
  if (true) { c->lr=0x800ABF04u; dispatch(c,c->ctr); } // 800ABF00
  c->r[12]=R32(c->r[29]+0x00000000u); // 800ABF04
  c->r[3]=c->r[29]|c->r[29]; // 800ABF08
  c->r[12]=R32(c->r[12]+0x00000020u); // 800ABF0C
  c->ctr=c->r[12]; // 800ABF10
  if (true) { c->lr=0x800ABF18u; dispatch(c,c->ctr); } // 800ABF14
  c->r[12]=R32(c->r[22]+0x00000000u); // 800ABF18
  c->r[4]=c->r[3]|c->r[3]; // 800ABF1C
  c->r[3]=c->r[22]|c->r[22]; // 800ABF20
  c->r[6]=c->r[27]|c->r[27]; // 800ABF24
  c->r[12]=R32(c->r[12]+0x00000034u); // 800ABF28
  c->r[5]=0u+0x00000000u; // 800ABF2C
  c->ctr=c->r[12]; // 800ABF30
  if (true) { c->lr=0x800ABF38u; dispatch(c,c->ctr); } // 800ABF34
L_800ABF38:;
  cmps(c,0,(int32_t)c->r[26],0); // 800ABF38
  if (crb(c,2)) { goto L_800ABF90; } // 800ABF3C
  c->r[12]=R32(c->r[29]+0x00000000u); // 800ABF40
  c->r[3]=c->r[29]|c->r[29]; // 800ABF44
  c->r[4]=c->r[26]|c->r[26]; // 800ABF48
  c->r[5]=c->r[1]+0x00000008u; // 800ABF4C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800ABF50
  c->ctr=c->r[12]; // 800ABF54
  if (true) { c->lr=0x800ABF5Cu; dispatch(c,c->ctr); } // 800ABF58
  c->r[12]=R32(c->r[29]+0x00000000u); // 800ABF5C
  c->r[3]=c->r[29]|c->r[29]; // 800ABF60
  c->r[12]=R32(c->r[12]+0x00000020u); // 800ABF64
  c->ctr=c->r[12]; // 800ABF68
  if (true) { c->lr=0x800ABF70u; dispatch(c,c->ctr); } // 800ABF6C
  c->r[12]=R32(c->r[22]+0x00000000u); // 800ABF70
  c->r[4]=c->r[3]|c->r[3]; // 800ABF74
  c->r[3]=c->r[22]|c->r[22]; // 800ABF78
  c->r[6]=c->r[27]|c->r[27]; // 800ABF7C
  c->r[12]=R32(c->r[12]+0x00000034u); // 800ABF80
  c->r[5]=0u+0x00000005u; // 800ABF84
  c->ctr=c->r[12]; // 800ABF88
  if (true) { c->lr=0x800ABF90u; dispatch(c,c->ctr); } // 800ABF8C
L_800ABF90:;
  {uint32_t ea=c->r[1]+0x00000058u; c->f[31]=RF64(ea);} // 800ABF90
  c->r[3]=c->r[30]|c->r[30]; // 800ABF94
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800ABF98
  c->r[11]=c->r[1]+0x00000050u; // 800ABF9C
  c->lr=0x800ABFA4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ABFA0
  c->r[0]=R32(c->r[1]+0x00000064u); // 800ABFA4
  c->lr=c->r[0]; // 800ABFA8
  c->r[1]=c->r[1]+0x00000060u; // 800ABFAC
  return; // 800ABFB0
}

// isTriggerTarger__Q310homebutton3gui9ComponentFv
void f_800ABFC0(Ctx* __restrict c) {
  trace_call(0x800ABFC0u);
  c->r[3]=R8(c->r[3]+0x00000024u); // 800ABFC0
  return; // 800ABFC4
}

// onTrig__Q310homebutton3gui9ComponentFUlR3Vec
void f_800ABFD0(Ctx* __restrict c) {
  trace_call(0x800ABFD0u);
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800ABFD0
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800ABFD4
  if (crb(c,2)) return; // 800ABFD8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ABFDC
  c->r[0]=0u+0x00000001u; // 800ABFE0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800ABFE4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ABFE8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 800ABFEC
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ABFF0
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 800ABFF4
  W8(c->r[3]+0x00000018u,c->r[0]); // 800ABFF8
  return; // 800ABFFC
}

// calc__Q310homebutton3gui7ManagerFv
void f_800AC000(Ctx* __restrict c) {
  trace_call(0x800AC000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC000
  c->r[0]=c->lr; // 800AC004
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AC008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AC00C
  c->r[31]=0u+0x00000000u; // 800AC010
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AC014
  c->r[30]=c->r[3]|c->r[3]; // 800AC018
  goto L_800AC044; // 800AC01C
L_800AC020:;
  c->r[3]=c->r[30]+0x00000008u; // 800AC020
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 800AC024
  c->lr=0x800AC02Cu; f_800C6850(c); // 800AC028
  c->r[3]=R32(c->r[3]+0x00000004u); // 800AC02C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC030
  c->r[12]=R32(c->r[12]+0x00000010u); // 800AC034
  c->ctr=c->r[12]; // 800AC038
  if (true) { c->lr=0x800AC040u; dispatch(c,c->ctr); } // 800AC03C
  c->r[31]=c->r[31]+0x00000001u; // 800AC040
L_800AC044:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 800AC044
  cmpu(c,0,c->r[31],c->r[0]); // 800AC048
  if (crb(c,0)) { IRQCHK(c); goto L_800AC020; } // 800AC04C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AC050
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AC054
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AC058
  c->lr=c->r[0]; // 800AC05C
  c->r[1]=c->r[1]+0x00000010u; // 800AC060
  return; // 800AC064
}

// calc__Q310homebutton3gui9InterfaceFv
void f_800AC070(Ctx* __restrict c) {
  trace_call(0x800AC070u);
  return; // 800AC070
}

// draw__Q310homebutton3gui7ManagerFv
void f_800AC080(Ctx* __restrict c) {
  trace_call(0x800AC080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC080
  c->r[0]=c->lr; // 800AC084
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AC088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AC08C
  c->r[31]=0u+0x00000000u; // 800AC090
  W32(c->r[1]+0x00000008u,c->r[30]); // 800AC094
  c->r[30]=c->r[3]|c->r[3]; // 800AC098
  goto L_800AC0C4; // 800AC09C
L_800AC0A0:;
  c->r[3]=c->r[30]+0x00000008u; // 800AC0A0
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 800AC0A4
  c->lr=0x800AC0ACu; f_800C6850(c); // 800AC0A8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800AC0AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC0B0
  c->r[12]=R32(c->r[12]+0x00000018u); // 800AC0B4
  c->ctr=c->r[12]; // 800AC0B8
  if (true) { c->lr=0x800AC0C0u; dispatch(c,c->ctr); } // 800AC0BC
  c->r[31]=c->r[31]+0x00000001u; // 800AC0C0
L_800AC0C4:;
  c->r[0]=R16(c->r[30]+0x00000010u); // 800AC0C4
  cmpu(c,0,c->r[31],c->r[0]); // 800AC0C8
  if (crb(c,0)) { IRQCHK(c); goto L_800AC0A0; } // 800AC0CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AC0D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AC0D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800AC0D8
  c->lr=c->r[0]; // 800AC0DC
  c->r[1]=c->r[1]+0x00000010u; // 800AC0E0
  return; // 800AC0E4
}

// draw__Q310homebutton3gui9InterfaceFv
void f_800AC0F0(Ctx* __restrict c) {
  trace_call(0x800AC0F0u);
  return; // 800AC0F0
}

// setAllComponentTriggerTarget__Q310homebutton3gui7ManagerFb
void f_800AC100(Ctx* __restrict c) {
  trace_call(0x800AC100u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC100
  c->r[0]=c->lr; // 800AC104
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AC108
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AC10C
  c->r[31]=0u+0x00000000u; // 800AC110
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AC114
  c->r[30]=c->r[4]|c->r[4]; // 800AC118
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AC11C
  c->r[29]=c->r[3]|c->r[3]; // 800AC120
  goto L_800AC150; // 800AC124
L_800AC128:;
  c->r[3]=c->r[29]+0x00000008u; // 800AC128
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 800AC12C
  c->lr=0x800AC134u; f_800C6850(c); // 800AC130
  c->r[3]=R32(c->r[3]+0x00000004u); // 800AC134
  c->r[4]=c->r[30]|c->r[30]; // 800AC138
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC13C
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AC140
  c->ctr=c->r[12]; // 800AC144
  if (true) { c->lr=0x800AC14Cu; dispatch(c,c->ctr); } // 800AC148
  c->r[31]=c->r[31]+0x00000001u; // 800AC14C
L_800AC150:;
  c->r[0]=R16(c->r[29]+0x00000010u); // 800AC150
  cmpu(c,0,c->r[31],c->r[0]); // 800AC154
  if (crb(c,0)) { IRQCHK(c); goto L_800AC128; } // 800AC158
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AC15C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AC160
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AC164
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AC168
  c->lr=c->r[0]; // 800AC16C
  c->r[1]=c->r[1]+0x00000020u; // 800AC170
  return; // 800AC174
}

// setTriggerTarget__Q310homebutton3gui9ComponentFb
void f_800AC180(Ctx* __restrict c) {
  trace_call(0x800AC180u);
  W8(c->r[3]+0x00000024u,c->r[4]); // 800AC180
  return; // 800AC184
}

// __dt__Q310homebutton3gui11PaneManagerFv
void f_800AC190(Ctx* __restrict c) {
  trace_call(0x800AC190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC190
  c->r[0]=c->lr; // 800AC194
  cmps(c,0,(int32_t)c->r[3],0); // 800AC198
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AC19C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AC1A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AC1A4
  c->r[30]=c->r[4]|c->r[4]; // 800AC1A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AC1AC
  c->r[29]=c->r[3]|c->r[3]; // 800AC1B0
  if (crb(c,2)) { goto L_800AC2C4; } // 800AC1B4
  c->r[5]=0u+0x80220000u; // 800AC1B8
  c->r[4]=0u+0x00000000u; // 800AC1BC
  c->r[5]=c->r[5]+0xFFFFB158u; // 800AC1C0
  W32(c->r[3]+0x00000000u,c->r[5]); // 800AC1C4
  c->r[3]=c->r[3]+0x00000018u; // 800AC1C8
  c->lr=0x800AC1D0u; f_800C6830(c); // 800AC1CC
  c->r[31]=c->r[3]|c->r[3]; // 800AC1D0
  goto L_800AC240; // 800AC1D4
L_800AC1D8:;
  c->r[4]=c->r[31]|c->r[31]; // 800AC1D8
  c->r[3]=c->r[29]+0x00000018u; // 800AC1DC
  c->lr=0x800AC1E4u; f_800C67C0(c); // 800AC1E0
  c->r[3]=R32(c->r[29]+0x00000014u); // 800AC1E4
  cmps(c,0,(int32_t)c->r[3],0); // 800AC1E8
  if (crb(c,2)) { goto L_800AC208; } // 800AC1EC
  c->r[4]=R32(c->r[31]+0x00000004u); // 800AC1F0
  c->lr=0x800AC1F8u; f_80180370(c); // 800AC1F4
  c->r[3]=R32(c->r[29]+0x00000014u); // 800AC1F8
  c->r[4]=c->r[31]|c->r[31]; // 800AC1FC
  c->lr=0x800AC204u; f_80180370(c); // 800AC200
  goto L_800AC230; // 800AC204
L_800AC208:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800AC208
  cmps(c,0,(int32_t)c->r[3],0); // 800AC20C
  if (crb(c,2)) { goto L_800AC228; } // 800AC210
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC214
  c->r[4]=0u+0x00000001u; // 800AC218
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800AC21C
  c->ctr=c->r[12]; // 800AC220
  if (true) { c->lr=0x800AC228u; dispatch(c,c->ctr); } // 800AC224
L_800AC228:;
  c->r[3]=c->r[31]|c->r[31]; // 800AC228
  c->lr=0x800AC230u; f_800D93B0(c); // 800AC22C
L_800AC230:;
  c->r[3]=c->r[29]+0x00000018u; // 800AC230
  c->r[4]=0u+0x00000000u; // 800AC234
  c->lr=0x800AC23Cu; f_800C6830(c); // 800AC238
  c->r[31]=c->r[3]|c->r[3]; // 800AC23C
L_800AC240:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AC240
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC1D8; } // 800AC244
  cmps(c,0,(int32_t)c->r[29],0); // 800AC248
  if (crb(c,2)) { goto L_800AC2B4; } // 800AC24C
  c->r[4]=0u+0x80220000u; // 800AC250
  c->r[3]=c->r[29]+0x00000008u; // 800AC254
  c->r[4]=c->r[4]+0xFFFFB1F8u; // 800AC258
  W32(c->r[29]+0x00000000u,c->r[4]); // 800AC25C
  c->r[4]=0u+0x00000000u; // 800AC260
  c->lr=0x800AC268u; f_800C6830(c); // 800AC264
  c->r[31]=c->r[3]|c->r[3]; // 800AC268
  goto L_800AC2AC; // 800AC26C
L_800AC270:;
  c->r[4]=c->r[31]|c->r[31]; // 800AC270
  c->r[3]=c->r[29]+0x00000008u; // 800AC274
  c->lr=0x800AC27Cu; f_800C67C0(c); // 800AC278
  c->r[3]=R32(c->r[29]+0x00000014u); // 800AC27C
  cmps(c,0,(int32_t)c->r[3],0); // 800AC280
  if (crb(c,2)) { goto L_800AC294; } // 800AC284
  c->r[4]=c->r[31]|c->r[31]; // 800AC288
  c->lr=0x800AC290u; f_80180370(c); // 800AC28C
  goto L_800AC29C; // 800AC290
L_800AC294:;
  c->r[3]=c->r[31]|c->r[31]; // 800AC294
  c->lr=0x800AC29Cu; f_800D93B0(c); // 800AC298
L_800AC29C:;
  c->r[3]=c->r[29]+0x00000008u; // 800AC29C
  c->r[4]=0u+0x00000000u; // 800AC2A0
  c->lr=0x800AC2A8u; f_800C6830(c); // 800AC2A4
  c->r[31]=c->r[3]|c->r[3]; // 800AC2A8
L_800AC2AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800AC2AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC270; } // 800AC2B0
L_800AC2B4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AC2B4
  if (!crb(c,1)) { goto L_800AC2C4; } // 800AC2B8
  c->r[3]=c->r[29]|c->r[29]; // 800AC2BC
  c->lr=0x800AC2C4u; f_800D93B0(c); // 800AC2C0
L_800AC2C4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AC2C4
  c->r[3]=c->r[29]|c->r[29]; // 800AC2C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AC2CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AC2D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AC2D4
  c->lr=c->r[0]; // 800AC2D8
  c->r[1]=c->r[1]+0x00000020u; // 800AC2DC
  return; // 800AC2E0
}

// __dt__Q310homebutton3gui13PaneComponentFv
void f_800AC2F0(Ctx* __restrict c) {
  trace_call(0x800AC2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC2F0
  c->r[0]=c->lr; // 800AC2F4
  cmps(c,0,(int32_t)c->r[3],0); // 800AC2F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AC2FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AC300
  c->r[31]=c->r[3]|c->r[3]; // 800AC304
  if (crb(c,2)) { goto L_800AC318; } // 800AC308
  cmps(c,0,(int32_t)c->r[4],0); // 800AC30C
  if (!crb(c,1)) { goto L_800AC318; } // 800AC310
  c->lr=0x800AC318u; f_800D93B0(c); // 800AC314
L_800AC318:;
  c->r[3]=c->r[31]|c->r[31]; // 800AC318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AC31C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AC320
  c->lr=c->r[0]; // 800AC324
  c->r[1]=c->r[1]+0x00000010u; // 800AC328
  return; // 800AC32C
}

// __dt__Q310homebutton3gui9ComponentFv
void f_800AC330(Ctx* __restrict c) {
  trace_call(0x800AC330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC330
  c->r[0]=c->lr; // 800AC334
  cmps(c,0,(int32_t)c->r[3],0); // 800AC338
  W32(c->r[1]+0x00000014u,c->r[0]); // 800AC33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800AC340
  c->r[31]=c->r[3]|c->r[3]; // 800AC344
  if (crb(c,2)) { goto L_800AC358; } // 800AC348
  cmps(c,0,(int32_t)c->r[4],0); // 800AC34C
  if (!crb(c,1)) { goto L_800AC358; } // 800AC350
  c->lr=0x800AC358u; f_800D93B0(c); // 800AC354
L_800AC358:;
  c->r[3]=c->r[31]|c->r[31]; // 800AC358
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800AC35C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800AC360
  c->lr=c->r[0]; // 800AC364
  c->r[1]=c->r[1]+0x00000010u; // 800AC368
  return; // 800AC36C
}

// createLayoutScene__Q310homebutton3gui11PaneManagerFRCQ36nw4hbm3lyt6Layout
void f_800AC370(Ctx* __restrict c) {
  trace_call(0x800AC370u);
  c->r[5]=0u+0x80260000u; // 800AC370
  c->r[0]=0u+0x00000000u; // 800AC374
  W32(c->r[5]+0xFFFFBDD8u,c->r[0]); // 800AC378
  c->r[4]=R32(c->r[4]+0x00000010u); // 800AC37C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC380
  c->r[4]=c->r[4]+0x00000010u; // 800AC384
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 800AC388
  c->ctr=c->r[12]; // 800AC38C
  if (true) { dispatch(c,c->ctr); return; } // 800AC390
}

// addLayoutScene__Q310homebutton3gui11PaneManagerFRCQ36nw4hbm3lyt6Layout
void f_800AC3A0(Ctx* __restrict c) {
  trace_call(0x800AC3A0u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC3A0
  c->r[4]=R32(c->r[4]+0x00000010u); // 800AC3A4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 800AC3A8
  c->r[4]=c->r[4]+0x00000010u; // 800AC3AC
  c->ctr=c->r[12]; // 800AC3B0
  if (true) { dispatch(c,c->ctr); return; } // 800AC3B4
}

// walkInChildren__Q310homebutton3gui11PaneManagerFRQ36nw4hbm2ut30LinkList<Q36nw4hbm3lyt4Pane,4>
void f_800AC3C0(Ctx* __restrict c) {
  trace_call(0x800AC3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC3C0
  c->r[0]=c->lr; // 800AC3C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800AC3C8
  c->r[11]=c->r[1]+0x00000040u; // 800AC3CC
  c->lr=0x800AC3D4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AC3D0
  c->r[23]=0u+0x80220000u; // 800AC3D4
  c->r[25]=0u+0x80220000u; // 800AC3D8
  c->r[31]=0u+0x80260000u; // 800AC3DC
  c->r[30]=0u+0x80260000u; // 800AC3E0
  c->r[27]=R32(c->r[4]+0x00000004u); // 800AC3E4
  c->r[28]=c->r[3]|c->r[3]; // 800AC3E8
  c->r[23]=c->r[23]+0xFFFFB268u; // 800AC3EC
  c->r[25]=c->r[25]+0xFFFFB0B0u; // 800AC3F0
  c->r[31]=c->r[31]+0xFFFFBFF8u; // 800AC3F4
  c->r[30]=c->r[30]+0xFFFFC008u; // 800AC3F8
  c->r[26]=c->r[4]+0x00000004u; // 800AC3FC
  c->r[22]=0u+0x80260000u; // 800AC400
  c->r[24]=0u+0x00000000u; // 800AC404
  goto L_800AC638; // 800AC408
L_800AC40C:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 800AC40C
  cmps(c,0,(int32_t)c->r[3],0); // 800AC410
  if (crb(c,2)) { goto L_800AC48C; } // 800AC414
  c->r[4]=0u+0x00000030u; // 800AC418
  c->lr=0x800AC420u; f_80180360(c); // 800AC41C
  c->r[29]=c->r[3]|c->r[3]; // 800AC420
  c->r[3]=R32(c->r[28]+0x00000014u); // 800AC424
  c->r[4]=0u+0x00000010u; // 800AC428
  c->lr=0x800AC430u; f_80180360(c); // 800AC42C
  cmps(c,0,(int32_t)c->r[29],0); // 800AC430
  c->r[21]=c->r[3]|c->r[3]; // 800AC434
  if (crb(c,2)) { goto L_800AC474; } // 800AC438
  c->r[0]=R32(c->r[22]+0xFFFFBDD8u); // 800AC43C
  c->r[3]=c->r[29]|c->r[29]; // 800AC440
  W32(c->r[29]+0x00000000u,c->r[23]); // 800AC444
  W8(c->r[29]+0x00000018u,c->r[24]); // 800AC448
  W32(c->r[29]+0x0000001Cu,c->r[24]); // 800AC44C
  W32(c->r[29]+0x00000020u,c->r[0]); // 800AC450
  W8(c->r[29]+0x00000024u,c->r[24]); // 800AC454
  W32(c->r[29]+0x00000028u,c->r[24]); // 800AC458
  c->r[12]=R32(c->r[29]+0x00000000u); // 800AC45C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800AC460
  c->ctr=c->r[12]; // 800AC464
  if (true) { c->lr=0x800AC46Cu; dispatch(c,c->ctr); } // 800AC468
  W32(c->r[29]+0x00000000u,c->r[25]); // 800AC46C
  W32(c->r[29]+0x0000002Cu,c->r[24]); // 800AC470
L_800AC474:;
  cmps(c,0,(int32_t)c->r[21],0); // 800AC474
  if (crb(c,2)) { goto L_800AC4F0; } // 800AC478
  c->r[0]=c->r[27]+0xFFFFFFFCu; // 800AC47C
  W32(c->r[21]+0x00000000u,c->r[0]); // 800AC480
  W32(c->r[21]+0x00000004u,c->r[29]); // 800AC484
  goto L_800AC4F0; // 800AC488
L_800AC48C:;
  c->r[3]=0u+0x00000030u; // 800AC48C
  c->lr=0x800AC494u; f_800D8ED0(c); // 800AC490
  cmps(c,0,(int32_t)c->r[3],0); // 800AC494
  c->r[29]=c->r[3]|c->r[3]; // 800AC498
  if (crb(c,2)) { goto L_800AC4D0; } // 800AC49C
  c->r[0]=R32(c->r[22]+0xFFFFBDD8u); // 800AC4A0
  W32(c->r[3]+0x00000000u,c->r[23]); // 800AC4A4
  W8(c->r[3]+0x00000018u,c->r[24]); // 800AC4A8
  W32(c->r[3]+0x0000001Cu,c->r[24]); // 800AC4AC
  W32(c->r[3]+0x00000020u,c->r[0]); // 800AC4B0
  W8(c->r[3]+0x00000024u,c->r[24]); // 800AC4B4
  W32(c->r[3]+0x00000028u,c->r[24]); // 800AC4B8
  c->r[12]=R32(c->r[23]+0x0000000Cu); // 800AC4BC
  c->ctr=c->r[12]; // 800AC4C0
  if (true) { c->lr=0x800AC4C8u; dispatch(c,c->ctr); } // 800AC4C4
  W32(c->r[29]+0x00000000u,c->r[25]); // 800AC4C8
  W32(c->r[29]+0x0000002Cu,c->r[24]); // 800AC4CC
L_800AC4D0:;
  c->r[3]=0u+0x00000010u; // 800AC4D0
  c->lr=0x800AC4D8u; f_800D8ED0(c); // 800AC4D4
  cmps(c,0,(int32_t)c->r[3],0); // 800AC4D8
  if (crb(c,2)) { goto L_800AC4EC; } // 800AC4DC
  c->r[0]=c->r[27]+0xFFFFFFFCu; // 800AC4E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800AC4E4
  W32(c->r[3]+0x00000004u,c->r[29]); // 800AC4E8
L_800AC4EC:;
  c->r[21]=c->r[3]|c->r[3]; // 800AC4EC
L_800AC4F0:;
  c->r[4]=c->r[21]|c->r[21]; // 800AC4F0
  c->r[3]=c->r[28]+0x00000018u; // 800AC4F4
  c->lr=0x800AC4FCu; f_800C6750(c); // 800AC4F8
  c->r[4]=R32(c->r[22]+0xFFFFBDD8u); // 800AC4FC
  c->r[21]=c->r[27]+0xFFFFFFFCu; // 800AC500
  c->r[3]=c->r[29]|c->r[29]; // 800AC504
  c->r[0]=c->r[4]+0x00000001u; // 800AC508
  W32(c->r[22]+0xFFFFBDD8u,c->r[0]); // 800AC50C
  c->r[4]=c->r[21]|c->r[21]; // 800AC510
  c->r[12]=R32(c->r[29]+0x00000000u); // 800AC514
  c->r[12]=R32(c->r[12]+0x00000060u); // 800AC518
  c->ctr=c->r[12]; // 800AC51C
  if (true) { c->lr=0x800AC524u; dispatch(c,c->ctr); } // 800AC520
  c->r[12]=R32(c->r[21]+0x00000000u); // 800AC524
  c->r[3]=c->r[21]|c->r[21]; // 800AC528
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800AC52C
  c->ctr=c->r[12]; // 800AC530
  if (true) { c->lr=0x800AC538u; dispatch(c,c->ctr); } // 800AC534
  goto L_800AC554; // 800AC538
  c->r[0]=c->r[0]|0x00000000u; // 800AC53C
L_800AC540:;
  cmpu(c,0,c->r[3],c->r[31]); // 800AC540
  if (!crb(c,2)) { goto L_800AC550; } // 800AC544
  c->r[0]=0u+0x00000001u; // 800AC548
  goto L_800AC560; // 800AC54C
L_800AC550:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800AC550
L_800AC554:;
  cmps(c,0,(int32_t)c->r[3],0); // 800AC554
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC540; } // 800AC558
  c->r[0]=0u+0x00000000u; // 800AC55C
L_800AC560:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AC560
  if (crb(c,2)) { goto L_800AC570; } // 800AC564
  c->r[0]=c->r[21]|c->r[21]; // 800AC568
  goto L_800AC574; // 800AC56C
L_800AC570:;
  c->r[0]=0u+0x00000000u; // 800AC570
L_800AC574:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AC574
  if (crb(c,2)) { goto L_800AC594; } // 800AC578
  c->r[12]=R32(c->r[29]+0x00000000u); // 800AC57C
  c->r[3]=c->r[29]|c->r[29]; // 800AC580
  c->r[4]=0u+0x00000001u; // 800AC584
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AC588
  c->ctr=c->r[12]; // 800AC58C
  if (true) { c->lr=0x800AC594u; dispatch(c,c->ctr); } // 800AC590
L_800AC594:;
  c->r[12]=R32(c->r[21]+0x00000000u); // 800AC594
  c->r[3]=c->r[21]|c->r[21]; // 800AC598
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800AC59C
  c->ctr=c->r[12]; // 800AC5A0
  if (true) { c->lr=0x800AC5A8u; dispatch(c,c->ctr); } // 800AC5A4
  goto L_800AC5C4; // 800AC5A8
  c->r[0]=c->r[0]|0x00000000u; // 800AC5AC
L_800AC5B0:;
  cmpu(c,0,c->r[3],c->r[30]); // 800AC5B0
  if (!crb(c,2)) { goto L_800AC5C0; } // 800AC5B4
  c->r[0]=0u+0x00000001u; // 800AC5B8
  goto L_800AC5D0; // 800AC5BC
L_800AC5C0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800AC5C0
L_800AC5C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800AC5C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC5B0; } // 800AC5C8
  c->r[0]=0u+0x00000000u; // 800AC5CC
L_800AC5D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AC5D0
  if (crb(c,2)) { goto L_800AC5E0; } // 800AC5D4
  c->r[0]=c->r[21]|c->r[21]; // 800AC5D8
  goto L_800AC5E4; // 800AC5DC
L_800AC5E0:;
  c->r[0]=0u+0x00000000u; // 800AC5E0
L_800AC5E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AC5E4
  if (crb(c,2)) { goto L_800AC604; } // 800AC5E8
  c->r[12]=R32(c->r[29]+0x00000000u); // 800AC5EC
  c->r[3]=c->r[29]|c->r[29]; // 800AC5F0
  c->r[4]=0u+0x00000001u; // 800AC5F4
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AC5F8
  c->ctr=c->r[12]; // 800AC5FC
  if (true) { c->lr=0x800AC604u; dispatch(c,c->ctr); } // 800AC600
L_800AC604:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AC604
  c->r[3]=c->r[28]|c->r[28]; // 800AC608
  c->r[4]=c->r[29]|c->r[29]; // 800AC60C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800AC610
  c->ctr=c->r[12]; // 800AC614
  if (true) { c->lr=0x800AC61Cu; dispatch(c,c->ctr); } // 800AC618
  c->r[12]=R32(c->r[28]+0x00000000u); // 800AC61C
  c->r[3]=c->r[28]|c->r[28]; // 800AC620
  c->r[4]=c->r[21]+0x00000010u; // 800AC624
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 800AC628
  c->ctr=c->r[12]; // 800AC62C
  if (true) { c->lr=0x800AC634u; dispatch(c,c->ctr); } // 800AC630
  c->r[27]=R32(c->r[27]+0x00000000u); // 800AC634
L_800AC638:;
  cmpu(c,0,c->r[27],c->r[26]); // 800AC638
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC40C; } // 800AC63C
  c->r[11]=c->r[1]+0x00000040u; // 800AC640
  c->lr=0x800AC648u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AC644
  c->r[0]=R32(c->r[1]+0x00000044u); // 800AC648
  c->lr=c->r[0]; // 800AC64C
  c->r[1]=c->r[1]+0x00000040u; // 800AC650
  return; // 800AC654
}

// setPane__Q310homebutton3gui13PaneComponentFPQ36nw4hbm3lyt4Pane
void f_800AC660(Ctx* __restrict c) {
  trace_call(0x800AC660u);
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800AC660
  return; // 800AC664
}

// GetRuntimeTypeInfo__Q36nw4hbm3lyt4PaneCFv
void f_800AC670(Ctx* __restrict c) {
  trace_call(0x800AC670u);
  c->r[3]=0u+0x80260000u; // 800AC670
  c->r[3]=c->r[3]+0xFFFFBFF0u; // 800AC674
  return; // 800AC678
}

// delLayoutScene__Q310homebutton3gui11PaneManagerFRCQ36nw4hbm3lyt6Layout
void f_800AC680(Ctx* __restrict c) {
  trace_call(0x800AC680u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC680
  c->r[4]=R32(c->r[4]+0x00000010u); // 800AC684
  c->r[12]=R32(c->r[12]+0x00000060u); // 800AC688
  c->r[4]=c->r[4]+0x00000010u; // 800AC68C
  c->ctr=c->r[12]; // 800AC690
  if (true) { dispatch(c,c->ctr); return; } // 800AC694
}

// walkInChildrenDel__Q310homebutton3gui11PaneManagerFRQ36nw4hbm2ut30LinkList<Q36nw4hbm3lyt4Pane,4>
void f_800AC6A0(Ctx* __restrict c) {
  trace_call(0x800AC6A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC6A0
  c->r[0]=c->lr; // 800AC6A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AC6A8
  c->r[11]=c->r[1]+0x00000020u; // 800AC6AC
  c->lr=0x800AC6B4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AC6B0
  c->r[31]=R32(c->r[4]+0x00000004u); // 800AC6B4
  c->r[26]=c->r[3]|c->r[3]; // 800AC6B8
  c->r[30]=c->r[4]+0x00000004u; // 800AC6BC
  c->r[29]=0u+0x80260000u; // 800AC6C0
  goto L_800AC79C; // 800AC6C4
L_800AC6C8:;
  c->r[3]=c->r[26]+0x00000018u; // 800AC6C8
  c->r[4]=0u+0x00000000u; // 800AC6CC
  c->lr=0x800AC6D4u; f_800C6830(c); // 800AC6D0
  c->r[27]=c->r[3]|c->r[3]; // 800AC6D4
  c->r[28]=c->r[31]+0xFFFFFFFCu; // 800AC6D8
  goto L_800AC6FC; // 800AC6DC
L_800AC6E0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800AC6E0
  cmpu(c,0,c->r[0],c->r[28]); // 800AC6E4
  if (crb(c,2)) { goto L_800AC704; } // 800AC6E8
  c->r[4]=c->r[27]|c->r[27]; // 800AC6EC
  c->r[3]=c->r[26]+0x00000018u; // 800AC6F0
  c->lr=0x800AC6F8u; f_800C6830(c); // 800AC6F4
  c->r[27]=c->r[3]|c->r[3]; // 800AC6F8
L_800AC6FC:;
  cmps(c,0,(int32_t)c->r[27],0); // 800AC6FC
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC6E0; } // 800AC700
L_800AC704:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 800AC704
  c->r[3]=c->r[26]|c->r[26]; // 800AC708
  c->r[4]=R32(c->r[27]+0x00000004u); // 800AC70C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800AC710
  c->ctr=c->r[12]; // 800AC714
  if (true) { c->lr=0x800AC71Cu; dispatch(c,c->ctr); } // 800AC718
  c->r[4]=c->r[27]|c->r[27]; // 800AC71C
  c->r[3]=c->r[26]+0x00000018u; // 800AC720
  c->lr=0x800AC728u; f_800C67C0(c); // 800AC724
  c->r[3]=R32(c->r[29]+0xFFFFBDD8u); // 800AC728
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800AC72C
  W32(c->r[29]+0xFFFFBDD8u,c->r[0]); // 800AC730
  c->r[3]=R32(c->r[26]+0x00000014u); // 800AC734
  cmps(c,0,(int32_t)c->r[3],0); // 800AC738
  if (crb(c,2)) { goto L_800AC758; } // 800AC73C
  c->r[4]=R32(c->r[27]+0x00000004u); // 800AC740
  c->lr=0x800AC748u; f_80180370(c); // 800AC744
  c->r[3]=R32(c->r[26]+0x00000014u); // 800AC748
  c->r[4]=c->r[27]|c->r[27]; // 800AC74C
  c->lr=0x800AC754u; f_80180370(c); // 800AC750
  goto L_800AC780; // 800AC754
L_800AC758:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 800AC758
  cmps(c,0,(int32_t)c->r[3],0); // 800AC75C
  if (crb(c,2)) { goto L_800AC778; } // 800AC760
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC764
  c->r[4]=0u+0x00000001u; // 800AC768
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800AC76C
  c->ctr=c->r[12]; // 800AC770
  if (true) { c->lr=0x800AC778u; dispatch(c,c->ctr); } // 800AC774
L_800AC778:;
  c->r[3]=c->r[27]|c->r[27]; // 800AC778
  c->lr=0x800AC780u; f_800D93B0(c); // 800AC77C
L_800AC780:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 800AC780
  c->r[3]=c->r[26]|c->r[26]; // 800AC784
  c->r[4]=c->r[31]+0x0000000Cu; // 800AC788
  c->r[12]=R32(c->r[12]+0x00000060u); // 800AC78C
  c->ctr=c->r[12]; // 800AC790
  if (true) { c->lr=0x800AC798u; dispatch(c,c->ctr); } // 800AC794
  c->r[31]=R32(c->r[31]+0x00000000u); // 800AC798
L_800AC79C:;
  cmpu(c,0,c->r[31],c->r[30]); // 800AC79C
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC6C8; } // 800AC7A0
  c->r[11]=c->r[1]+0x00000020u; // 800AC7A4
  c->lr=0x800AC7ACu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AC7A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AC7AC
  c->lr=c->r[0]; // 800AC7B0
  c->r[1]=c->r[1]+0x00000020u; // 800AC7B4
  return; // 800AC7B8
}

// getPaneComponentByPane__Q310homebutton3gui11PaneManagerFPQ36nw4hbm3lyt4Pane
void f_800AC7C0(Ctx* __restrict c) {
  trace_call(0x800AC7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC7C0
  c->r[0]=c->lr; // 800AC7C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AC7C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800AC7CC
  c->r[31]=0u+0x00000000u; // 800AC7D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800AC7D4
  c->r[30]=c->r[4]|c->r[4]; // 800AC7D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800AC7DC
  c->r[29]=c->r[3]|c->r[3]; // 800AC7E0
  goto L_800AC80C; // 800AC7E4
L_800AC7E8:;
  c->r[3]=c->r[29]+0x00000018u; // 800AC7E8
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 800AC7EC
  c->lr=0x800AC7F4u; f_800C6850(c); // 800AC7F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800AC7F4
  cmpu(c,0,c->r[0],c->r[30]); // 800AC7F8
  if (!crb(c,2)) { goto L_800AC808; } // 800AC7FC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800AC800
  goto L_800AC81C; // 800AC804
L_800AC808:;
  c->r[31]=c->r[31]+0x00000001u; // 800AC808
L_800AC80C:;
  c->r[0]=R16(c->r[29]+0x00000010u); // 800AC80C
  cmpu(c,0,c->r[31],c->r[0]); // 800AC810
  if (crb(c,0)) { IRQCHK(c); goto L_800AC7E8; } // 800AC814
  c->r[3]=0u+0x00000000u; // 800AC818
L_800AC81C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AC81C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800AC820
  c->r[30]=R32(c->r[1]+0x00000018u); // 800AC824
  c->r[29]=R32(c->r[1]+0x00000014u); // 800AC828
  c->lr=c->r[0]; // 800AC82C
  c->r[1]=c->r[1]+0x00000020u; // 800AC830
  return; // 800AC834
}

// setAllBoundingBoxComponentTriggerTarget__Q310homebutton3gui11PaneManagerFb
void f_800AC840(Ctx* __restrict c) {
  trace_call(0x800AC840u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC840
  c->r[0]=c->lr; // 800AC844
  W32(c->r[1]+0x00000024u,c->r[0]); // 800AC848
  c->r[11]=c->r[1]+0x00000020u; // 800AC84C
  c->lr=0x800AC854u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800AC850
  c->r[29]=0u+0x80260000u; // 800AC854
  c->r[26]=c->r[3]|c->r[3]; // 800AC858
  c->r[27]=c->r[4]|c->r[4]; // 800AC85C
  c->r[28]=0u+0x00000000u; // 800AC860
  c->r[29]=c->r[29]+0xFFFFBFB8u; // 800AC864
  goto L_800AC8EC; // 800AC868
L_800AC86C:;
  c->r[3]=c->r[26]+0x00000018u; // 800AC86C
  c->r[4]=rotl(c->r[28],0)&0x0000FFFFu; // 800AC870
  c->lr=0x800AC878u; f_800C6850(c); // 800AC874
  c->r[30]=R32(c->r[3]+0x00000000u); // 800AC878
  c->r[31]=c->r[3]|c->r[3]; // 800AC87C
  c->r[12]=R32(c->r[30]+0x00000000u); // 800AC880
  c->r[3]=c->r[30]|c->r[30]; // 800AC884
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800AC888
  c->ctr=c->r[12]; // 800AC88C
  if (true) { c->lr=0x800AC894u; dispatch(c,c->ctr); } // 800AC890
  goto L_800AC8AC; // 800AC894
L_800AC898:;
  cmpu(c,0,c->r[3],c->r[29]); // 800AC898
  if (!crb(c,2)) { goto L_800AC8A8; } // 800AC89C
  c->r[0]=0u+0x00000001u; // 800AC8A0
  goto L_800AC8B8; // 800AC8A4
L_800AC8A8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800AC8A8
L_800AC8AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800AC8AC
  if (!crb(c,2)) { IRQCHK(c); goto L_800AC898; } // 800AC8B0
  c->r[0]=0u+0x00000000u; // 800AC8B4
L_800AC8B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800AC8B8
  if (crb(c,2)) { goto L_800AC8C4; } // 800AC8BC
  goto L_800AC8C8; // 800AC8C0
L_800AC8C4:;
  c->r[30]=0u+0x00000000u; // 800AC8C4
L_800AC8C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800AC8C8
  if (crb(c,2)) { goto L_800AC8E8; } // 800AC8CC
  c->r[3]=R32(c->r[31]+0x00000004u); // 800AC8D0
  c->r[4]=c->r[27]|c->r[27]; // 800AC8D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC8D8
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AC8DC
  c->ctr=c->r[12]; // 800AC8E0
  if (true) { c->lr=0x800AC8E8u; dispatch(c,c->ctr); } // 800AC8E4
L_800AC8E8:;
  c->r[28]=c->r[28]+0x00000001u; // 800AC8E8
L_800AC8EC:;
  c->r[0]=R16(c->r[26]+0x00000010u); // 800AC8EC
  cmpu(c,0,c->r[28],c->r[0]); // 800AC8F0
  if (crb(c,0)) { IRQCHK(c); goto L_800AC86C; } // 800AC8F4
  c->r[11]=c->r[1]+0x00000020u; // 800AC8F8
  c->lr=0x800AC900u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800AC8FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800AC900
  c->lr=c->r[0]; // 800AC904
  c->r[1]=c->r[1]+0x00000020u; // 800AC908
  return; // 800AC90C
}

// contain__Q310homebutton3gui13PaneComponentFff
void f_800AC910(Ctx* __restrict c) {
  trace_call(0x800AC910u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800AC910
  c->r[0]=c->lr; // 800AC914
  W32(c->r[1]+0x00000094u,c->r[0]); // 800AC918
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800AC91C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800AC920
  c->f[31]=c->f[2]; // 800AC924
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800AC928
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800AC92C
  c->f[30]=c->f[1]; // 800AC930
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800AC934
  W32(c->r[1]+0x00000068u,c->r[30]); // 800AC938
  c->r[30]=c->r[3]|c->r[3]; // 800AC93C
  c->r[0]=R32(c->r[3]+0x00000028u); // 800AC940
  cmps(c,0,(int32_t)c->r[0],0); // 800AC944
  if (!crb(c,2)) { goto L_800AC954; } // 800AC948
  c->r[3]=0u+0x00000000u; // 800AC94C
  goto L_800ACA14; // 800AC950
L_800AC954:;
  c->r[3]=c->r[0]|c->r[0]; // 800AC954
  c->r[12]=R32(c->r[3]+0x00000000u); // 800AC958
  c->r[12]=R32(c->r[12]+0x00000050u); // 800AC95C
  c->ctr=c->r[12]; // 800AC960
  if (true) { c->lr=0x800AC968u; dispatch(c,c->ctr); } // 800AC964
  cmps(c,0,(int32_t)c->r[3],0); // 800AC968
  c->r[31]=c->r[3]|c->r[3]; // 800AC96C
  if (!crb(c,2)) { goto L_800AC97C; } // 800AC970
  c->r[3]=0u+0x00000000u; // 800AC974
  goto L_800ACA14; // 800AC978
L_800AC97C:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800AC97C
  c->r[4]=c->r[1]+0x00000038u; // 800AC980
  c->r[3]=c->r[3]+0x00000084u; // 800AC984
  c->lr=0x800AC98Cu; f_8016AF40(c); // 800AC988
  c->r[3]=0u+0x801F0000u; // 800AC98C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[30]);} // 800AC990
  {uint32_t ea=c->r[3]+0xFFFFB690u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC994
  c->r[3]=c->r[1]+0x00000038u; // 800AC998
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[31]);} // 800AC99C
  c->r[4]=c->r[1]+0x00000008u; // 800AC9A0
  c->r[5]=c->r[1]+0x00000028u; // 800AC9A4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800AC9A8
  c->lr=0x800AC9B0u; f_8016B480(c); // 800AC9AC
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 800AC9B0
  c->r[5]=c->r[31]|c->r[31]; // 800AC9B4
  c->r[3]=c->r[1]+0x00000018u; // 800AC9B8
  c->lr=0x800AC9C0u; f_800BF950(c); // 800AC9BC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC9C0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC9C4
  fcmp(c,0,c->f[0],c->f[1]); // 800AC9C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800AC9CC
  if (!crb(c,2)) { goto L_800ACA10; } // 800AC9D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC9D4
  fcmp(c,0,c->f[1],c->f[0]); // 800AC9D8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800AC9DC
  if (!crb(c,2)) { goto L_800ACA10; } // 800AC9E0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC9E4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800AC9E8
  fcmp(c,0,c->f[0],c->f[1]); // 800AC9EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800AC9F0
  if (!crb(c,2)) { goto L_800ACA10; } // 800AC9F4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800AC9F8
  fcmp(c,0,c->f[1],c->f[0]); // 800AC9FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800ACA00
  if (!crb(c,2)) { goto L_800ACA10; } // 800ACA04
  c->r[3]=0u+0x00000001u; // 800ACA08
  goto L_800ACA14; // 800ACA0C
L_800ACA10:;
  c->r[3]=0u+0x00000000u; // 800ACA10
L_800ACA14:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800ACA14
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800ACA18
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800ACA1C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 800ACA20
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800ACA24
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800ACA28
  c->r[30]=R32(c->r[1]+0x00000068u); // 800ACA2C
  c->lr=c->r[0]; // 800ACA30
  c->r[1]=c->r[1]+0x00000090u; // 800ACA34
  return; // 800ACA38
}

// getDrawInfo__Q310homebutton3gui11PaneManagerFv
void f_800ACA40(Ctx* __restrict c) {
  trace_call(0x800ACA40u);
  c->r[3]=R32(c->r[3]+0x00000024u); // 800ACA40
  return; // 800ACA44
}

// draw__Q310homebutton3gui13PaneComponentFv
void f_800ACA50(Ctx* __restrict c) {
  trace_call(0x800ACA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACA50
  c->r[0]=c->lr; // 800ACA54
  W32(c->r[1]+0x00000044u,c->r[0]); // 800ACA58
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800ACA5C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800ACA60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800ACA64
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800ACA68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ACA6C
  c->r[31]=0u+0x801F0000u; // 800ACA70
  c->r[31]=c->r[31]+0xFFFFB690u; // 800ACA74
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ACA78
  c->r[30]=c->r[3]|c->r[3]; // 800ACA7C
  c->r[3]=R32(c->r[3]+0x00000028u); // 800ACA80
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ACA84
  c->r[12]=R32(c->r[12]+0x00000050u); // 800ACA88
  c->ctr=c->r[12]; // 800ACA8C
  if (true) { c->lr=0x800ACA94u; dispatch(c,c->ctr); } // 800ACA90
  cmps(c,0,(int32_t)c->r[3],0); // 800ACA94
  if (crb(c,2)) { goto L_800ACBAC; } // 800ACA98
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 800ACA9C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800ACAA0
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACAA4
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACAA8
  {uint32_t ea=c->r[3]+0x00000090u; c->f[31]=c->ps1[31]=RF32(ea);} // 800ACAAC
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 800ACAB0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800ACAB4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800ACAB8
  c->r[0]=R8(c->r[30]+0x00000004u); // 800ACABC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800ACAC0
  cmps(c,0,(int32_t)c->r[0],0); // 800ACAC4
  if (crb(c,2)) { goto L_800ACADC; } // 800ACAC8
  c->r[3]=0u+0x00000000u; // 800ACACC
  c->r[0]=0u+0x000000FFu; // 800ACAD0
  W8(c->r[1]+0x00000008u,c->r[3]); // 800ACAD4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800ACAD8
L_800ACADC:;
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACADC
  c->r[4]=c->r[1]+0x00000008u; // 800ACAE0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACAE4
  c->r[3]=0u+0x00000008u; // 800ACAE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACAEC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800ACAF0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 800ACAF4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800ACAF8
  c->f[2]=c->ps1[2]=S(c->f[30]-c->f[0]); // 800ACAFC
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[3]); // 800ACB00
  c->f[3]=c->ps1[3]=S(c->f[31]+c->f[3]); // 800ACB04
  c->f[4]=c->f[2]; // 800ACB08
  c->lr=0x800ACB10u; f_800AB680(c); // 800ACB0C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACB10
  c->r[4]=c->r[1]+0x00000008u; // 800ACB14
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACB18
  c->r[3]=0u+0x00000008u; // 800ACB1C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACB20
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800ACB24
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 800ACB28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800ACB2C
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[1]); // 800ACB30
  c->f[2]=c->ps1[2]=S(c->f[30]-c->f[0]); // 800ACB34
  c->f[4]=c->ps1[4]=S(c->f[30]+c->f[0]); // 800ACB38
  c->f[3]=c->f[1]; // 800ACB3C
  c->lr=0x800ACB44u; f_800AB680(c); // 800ACB40
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACB44
  c->r[4]=c->r[1]+0x00000008u; // 800ACB48
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACB4C
  c->r[3]=0u+0x00000008u; // 800ACB50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACB54
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800ACB58
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 800ACB5C
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 800ACB60
  c->f[2]=c->ps1[2]=S(c->f[30]+c->f[0]); // 800ACB64
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[3]); // 800ACB68
  c->f[3]=c->ps1[3]=S(c->f[31]-c->f[3]); // 800ACB6C
  c->f[4]=c->f[2]; // 800ACB70
  c->lr=0x800ACB78u; f_800AB680(c); // 800ACB74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ACB78
  c->r[4]=c->r[1]+0x00000008u; // 800ACB7C
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ACB80
  c->r[3]=0u+0x00000008u; // 800ACB84
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ACB88
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800ACB8C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 800ACB90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800ACB94
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 800ACB98
  c->f[2]=c->ps1[2]=S(c->f[30]+c->f[0]); // 800ACB9C
  c->f[4]=c->ps1[4]=S(c->f[30]-c->f[0]); // 800ACBA0
  c->f[3]=c->f[1]; // 800ACBA4
  c->lr=0x800ACBACu; f_800AB680(c); // 800ACBA8
L_800ACBAC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800ACBAC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800ACBB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800ACBB4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800ACBB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800ACBBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ACBC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ACBC4
  c->lr=c->r[0]; // 800ACBC8
  c->r[1]=c->r[1]+0x00000040u; // 800ACBCC
  return; // 800ACBD0
}

// is_visible__Q210homebutton3guiFPQ36nw4hbm3lyt4Pane
void f_800ACBE0(Ctx* __restrict c) {
  trace_call(0x800ACBE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ACBE0
  c->r[0]=c->lr; // 800ACBE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ACBE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ACBEC
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACBF0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACBF4
  if (!crb(c,2)) { goto L_800ACC04; } // 800ACBF8
  c->r[3]=0u+0x00000000u; // 800ACBFC
  goto L_800ACCCC; // 800ACC00
L_800ACC04:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACC04
  cmps(c,0,(int32_t)c->r[3],0); // 800ACC08
  if (!crb(c,2)) { goto L_800ACC18; } // 800ACC0C
  c->r[3]=0u+0x00000001u; // 800ACC10
  goto L_800ACCCC; // 800ACC14
L_800ACC18:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACC18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACC1C
  if (!crb(c,2)) { goto L_800ACC2C; } // 800ACC20
  c->r[3]=0u+0x00000000u; // 800ACC24
  goto L_800ACCCC; // 800ACC28
L_800ACC2C:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACC2C
  cmps(c,0,(int32_t)c->r[3],0); // 800ACC30
  if (!crb(c,2)) { goto L_800ACC40; } // 800ACC34
  c->r[3]=0u+0x00000001u; // 800ACC38
  goto L_800ACCCC; // 800ACC3C
L_800ACC40:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACC40
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACC44
  if (!crb(c,2)) { goto L_800ACC54; } // 800ACC48
  c->r[3]=0u+0x00000000u; // 800ACC4C
  goto L_800ACCCC; // 800ACC50
L_800ACC54:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACC54
  cmps(c,0,(int32_t)c->r[3],0); // 800ACC58
  if (!crb(c,2)) { goto L_800ACC68; } // 800ACC5C
  c->r[3]=0u+0x00000001u; // 800ACC60
  goto L_800ACCCC; // 800ACC64
L_800ACC68:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACC68
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACC6C
  if (!crb(c,2)) { goto L_800ACC7C; } // 800ACC70
  c->r[3]=0u+0x00000000u; // 800ACC74
  goto L_800ACCCC; // 800ACC78
L_800ACC7C:;
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 800ACC7C
  cmps(c,0,(int32_t)c->r[31],0); // 800ACC80
  if (!crb(c,2)) { goto L_800ACC90; } // 800ACC84
  c->r[3]=0u+0x00000001u; // 800ACC88
  goto L_800ACCCC; // 800ACC8C
L_800ACC90:;
  c->r[3]=c->r[31]|c->r[31]; // 800ACC90
  c->lr=0x800ACC98u; f_800ACCE0(c); // 800ACC94
  cmps(c,0,(int32_t)c->r[3],0); // 800ACC98
  if (!crb(c,2)) { goto L_800ACCA8; } // 800ACC9C
  c->r[3]=0u+0x00000000u; // 800ACCA0
  goto L_800ACCCC; // 800ACCA4
L_800ACCA8:;
  c->r[3]=c->r[31]|c->r[31]; // 800ACCA8
  c->lr=0x800ACCB0u; f_800ACCF0(c); // 800ACCAC
  cmps(c,0,(int32_t)c->r[3],0); // 800ACCB0
  if (!crb(c,2)) { goto L_800ACCC0; } // 800ACCB4
  c->r[3]=0u+0x00000001u; // 800ACCB8
  goto L_800ACCCC; // 800ACCBC
L_800ACCC0:;
  c->r[3]=c->r[31]|c->r[31]; // 800ACCC0
  c->lr=0x800ACCC8u; f_800ACCF0(c); // 800ACCC4
  c->lr=0x800ACCCCu; f_800ACBE0(c); // 800ACCC8
L_800ACCCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ACCCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ACCD0
  c->lr=c->r[0]; // 800ACCD4
  c->r[1]=c->r[1]+0x00000010u; // 800ACCD8
  return; // 800ACCDC
}

// IsVisible__Q36nw4hbm3lyt4PaneCFv
void f_800ACCE0(Ctx* __restrict c) {
  trace_call(0x800ACCE0u);
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACCE0
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800ACCE4
  return; // 800ACCE8
}

// GetParent__Q36nw4hbm3lyt4PaneCFv
void f_800ACCF0(Ctx* __restrict c) {
  trace_call(0x800ACCF0u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACCF0
  return; // 800ACCF4
}

// isVisible__Q310homebutton3gui13PaneComponentFv
void f_800ACD00(Ctx* __restrict c) {
  trace_call(0x800ACD00u);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800ACD00
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACD04
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACD08
  if (!crb(c,2)) { goto L_800ACD18; } // 800ACD0C
  c->r[3]=0u+0x00000000u; // 800ACD10
  return; // 800ACD14
L_800ACD18:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACD18
  cmps(c,0,(int32_t)c->r[3],0); // 800ACD1C
  if (!crb(c,2)) { goto L_800ACD2C; } // 800ACD20
  c->r[3]=0u+0x00000001u; // 800ACD24
  return; // 800ACD28
L_800ACD2C:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACD2C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACD30
  if (!crb(c,2)) { goto L_800ACD40; } // 800ACD34
  c->r[3]=0u+0x00000000u; // 800ACD38
  return; // 800ACD3C
L_800ACD40:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACD40
  cmps(c,0,(int32_t)c->r[3],0); // 800ACD44
  if (!crb(c,2)) { goto L_800ACD54; } // 800ACD48
  c->r[3]=0u+0x00000001u; // 800ACD4C
  return; // 800ACD50
L_800ACD54:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACD54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACD58
  if (!crb(c,2)) { goto L_800ACD68; } // 800ACD5C
  c->r[3]=0u+0x00000000u; // 800ACD60
  return; // 800ACD64
L_800ACD68:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACD68
  cmps(c,0,(int32_t)c->r[3],0); // 800ACD6C
  if (!crb(c,2)) { goto L_800ACD7C; } // 800ACD70
  c->r[3]=0u+0x00000001u; // 800ACD74
  return; // 800ACD78
L_800ACD7C:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACD7C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACD80
  if (!crb(c,2)) { goto L_800ACD90; } // 800ACD84
  c->r[3]=0u+0x00000000u; // 800ACD88
  return; // 800ACD8C
L_800ACD90:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACD90
  cmps(c,0,(int32_t)c->r[3],0); // 800ACD94
  if (!crb(c,2)) { goto L_800ACDA4; } // 800ACD98
  c->r[3]=0u+0x00000001u; // 800ACD9C
  return; // 800ACDA0
L_800ACDA4:;
  c->r[0]=R8(c->r[3]+0x000000CFu); // 800ACDA4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800ACDA8
  if (!crb(c,2)) { goto L_800ACDB8; } // 800ACDAC
  c->r[3]=0u+0x00000000u; // 800ACDB0
  return; // 800ACDB4
L_800ACDB8:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800ACDB8
  cmps(c,0,(int32_t)c->r[3],0); // 800ACDBC
  if (!crb(c,2)) { goto L_800ACDCC; } // 800ACDC0
  c->r[3]=0u+0x00000001u; // 800ACDC4
  return; // 800ACDC8
L_800ACDCC:;
  f_800ACBE0(c); return; // 800ACDCC
  return; // 800ACDD0
}

// draw__Q310homebutton3gui9InterfaceFRA3_A4_f
void f_800ACDE0(Ctx* __restrict c) {
  trace_call(0x800ACDE0u);
  return; // 800ACDE0
}

// create__Q310homebutton3gui9InterfaceFv
void f_800ACDF0(Ctx* __restrict c) {
  trace_call(0x800ACDF0u);
  return; // 800ACDF0
}

// update__Q310homebutton3gui9ComponentFiPC10KPADStatusffPv
void f_800ACE00(Ctx* __restrict c) {
  trace_call(0x800ACE00u);
  c->r[3]=0u+0x00000000u; // 800ACE00
  return; // 800ACE04
}

// setDraggingButton__Q310homebutton3gui9ComponentFUl
void f_800ACE10(Ctx* __restrict c) {
  trace_call(0x800ACE10u);
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800ACE10
  return; // 800ACE14
}

// onDrag__Q310homebutton3gui9ComponentFff
void f_800ACE20(Ctx* __restrict c) {
  trace_call(0x800ACE20u);
  return; // 800ACE20
}

// getPane__Q310homebutton3gui13PaneComponentFv
void f_800ACE30(Ctx* __restrict c) {
  trace_call(0x800ACE30u);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 800ACE30
  return; // 800ACE34
}

// setEventHandler__Q310homebutton3gui7ManagerFPQ310homebutton3gui12EventHandler
void f_800ACE40(Ctx* __restrict c) {
  trace_call(0x800ACE40u);
  cmps(c,0,(int32_t)c->r[4],0); // 800ACE40
  W32(c->r[3]+0x00000004u,c->r[4]); // 800ACE44
  c->r[0]=c->r[3]|c->r[3]; // 800ACE48
  if (crb(c,2)) return; // 800ACE4C
  c->r[3]=c->r[4]|c->r[4]; // 800ACE50
  c->r[4]=c->r[0]|c->r[0]; // 800ACE54
  c->r[12]=R32(c->r[3]+0x00000000u); // 800ACE58
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800ACE5C
  c->ctr=c->r[12]; // 800ACE60
  if (true) { dispatch(c,c->ctr); return; } // 800ACE64
  return; // 800ACE68
}

// setManager__Q310homebutton3gui12EventHandlerFPQ310homebutton3gui7Manager
void f_800ACE70(Ctx* __restrict c) {
  trace_call(0x800ACE70u);
  W32(c->r[3]+0x00000004u,c->r[4]); // 800ACE70
  return; // 800ACE74
}

// update__Q310homebutton3gui7ManagerFiPC10KPADStatusffPv
void f_800ACE80(Ctx* __restrict c) {
  trace_call(0x800ACE80u);
  c->r[3]=0u+0x00000000u; // 800ACE80
  return; // 800ACE84
}

