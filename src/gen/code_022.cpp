#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801D4F14
void f_801D4F14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4F14
  c->r[0]=c->lr; // 801D4F18
  cmps(c,0,(int32_t)c->r[3],0); // 801D4F1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D4F20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D4F24
  c->r[31]=c->r[3]|c->r[3]; // 801D4F28
  if (crb(c,2)) { goto L_801D4F3C; } // 801D4F2C
  cmps(c,0,(int32_t)c->r[4],0); // 801D4F30
  if (!crb(c,1)) { goto L_801D4F3C; } // 801D4F34
  c->lr=0x801D4F3Cu; f_800D93B0(c); // 801D4F38
L_801D4F3C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D4F3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D4F40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D4F44
  c->lr=c->r[0]; // 801D4F48
  c->r[1]=c->r[1]+0x00000010u; // 801D4F4C
  return; // 801D4F50
}

// fn_801D4F54
void f_801D4F54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4F54
  c->r[0]=c->lr; // 801D4F58
  cmps(c,0,(int32_t)c->r[3],0); // 801D4F5C
  W32(c->r[1]+0x00000084u,c->r[0]); // 801D4F60
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801D4F64
  c->r[31]=c->r[1]|c->r[1]; // 801D4F68
  W32(c->r[1]+0x00000078u,c->r[30]); // 801D4F6C
  c->r[30]=c->r[3]|c->r[3]; // 801D4F70
  W32(c->r[1]+0x0000003Cu,c->r[1]); // 801D4F74
  if (!crb(c,2)) { goto L_801D4F80; } // 801D4F78
  c->r[30]=0u+0x00000004u; // 801D4F7C
L_801D4F80:;
  c->r[3]=c->r[30]|c->r[30]; // 801D4F80
  c->lr=0x801D4F88u; f_800D94F0(c); // 801D4F84
  cmps(c,0,(int32_t)c->r[3],0); // 801D4F88
  if (!crb(c,2)) { goto L_801D501C; } // 801D4F8C
  c->r[12]=R32(c->r[13]+0xFFFFB768u); // 801D4F90
  cmps(c,0,(int32_t)c->r[12],0); // 801D4F94
  if (crb(c,2)) { goto L_801D4FA8; } // 801D4F98
  c->ctr=c->r[12]; // 801D4F9C
  if (true) { c->lr=0x801D4FA4u; dispatch(c,c->ctr); } // 801D4FA0
  IRQCHK(c); goto L_801D4F80; // 801D4FA4
L_801D4FA8:;
  c->r[4]=0u+0x80250000u; // 801D4FA8
  c->r[3]=0u+0x80200000u; // 801D4FAC
  c->r[4]=c->r[4]+0xFFFF97D8u; // 801D4FB0
  c->r[5]=0u+0x801D0000u; // 801D4FB4
  W32(c->r[31]+0x00000008u,c->r[4]); // 801D4FB8
  c->r[3]=c->r[3]+0xFFFFA8C4u; // 801D4FBC
  c->r[4]=c->r[31]+0x00000008u; // 801D4FC0
  c->r[5]=c->r[5]+0x00004F14u; // 801D4FC4
  c->lr=0x801D4FCCu; f_801D76B8(c); // 801D4FC8
  IRQCHK(c); goto L_801D4F80; // 801D4FCC
  c->r[3]=c->r[31]+0x00000010u; // 801D4FD0
  c->lr=0x801D4FD8u; f_801D6FB4(c); // 801D4FD4
L_801D4FD8:;
  IRQCHK(c); goto L_801D4FD8; // 801D4FD8
  goto L_801D501C; // 801D4FDC
  c->r[3]=c->r[31]+0x00000028u; // 801D4FE0
  c->lr=0x801D4FE8u; f_801D77FC(c); // 801D4FE4
  c->r[0]=c->r[0]|0x00000000u; // 801D4FE8
  c->r[0]=R32(c->r[1]+0x00000000u); // 801D4FEC
  c->r[1]=R32(c->r[31]+0x0000003Cu); // 801D4FF0
  W32(c->r[1]+0x00000000u,c->r[0]); // 801D4FF4
  c->r[3]=0u+0x00000000u; // 801D4FF8
  goto L_801D501C; // 801D4FFC
  c->r[3]=c->r[31]+0x00000040u; // 801D5000
  c->lr=0x801D5008u; f_801D6FB4(c); // 801D5004
L_801D5008:;
  IRQCHK(c); goto L_801D5008; // 801D5008
  goto L_801D501C; // 801D500C
  c->r[3]=c->r[31]+0x00000058u; // 801D5010
  c->lr=0x801D5018u; f_801D6FB4(c); // 801D5014
L_801D5018:;
  IRQCHK(c); goto L_801D5018; // 801D5018
L_801D501C:;
  c->r[10]=c->r[31]|c->r[31]; // 801D501C
  c->r[31]=R32(c->r[31]+0x0000007Cu); // 801D5020
  c->r[30]=R32(c->r[10]+0x00000078u); // 801D5024
  c->r[10]=R32(c->r[1]+0x00000000u); // 801D5028
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D502C
  c->r[1]=c->r[10]|c->r[10]; // 801D5030
  c->lr=c->r[0]; // 801D5034
  return; // 801D5038
}

// fn_801D503C
void f_801D503C(Ctx* __restrict c) {
  c->r[3]=0u+0x80250000u; // 801D503C
  c->r[3]=c->r[3]+0xFFFF97F4u; // 801D5040
  return; // 801D5044
}

// fn_801D5048
void f_801D5048(Ctx* __restrict c) {
  f_801DE64C(c); return; // 801D5048
}

// fn_801D504C
void f_801D504C(Ctx* __restrict c) {
  f_801D5050(c); return; // 801D504C
}

// fn_801D5050
void f_801D5050(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFFAD08u); // 801D5050
  c->ctr=c->r[12]; // 801D5054
  if (true) { dispatch(c,c->ctr); return; } // 801D5058
}

// terminate__3stdFv
void f_801D505C(Ctx* __restrict c) {
  trace_call(0x801D505Cu);
  c->r[12]=R32(c->r[13]+0xFFFFAD0Cu); // 801D505C
  c->ctr=c->r[12]; // 801D5060
  if (true) { dispatch(c,c->ctr); return; } // 801D5064
}

// __throw_catch_compare
void f_801D5068(Ctx* __restrict c) {
  trace_call(0x801D5068u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D5068
  c->r[0]=0u+0x00000000u; // 801D506C
  W32(c->r[5]+0x00000000u,c->r[0]); // 801D5070
  c->r[7]=c->r[4]|c->r[4]; // 801D5074
  if (!crb(c,2)) { goto L_801D5084; } // 801D5078
  c->r[3]=0u+0x00000001u; // 801D507C
  return; // 801D5080
L_801D5084:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D5084
  c->r[6]=c->r[3]|c->r[3]; // 801D5088
  cmps(c,0,(int32_t)c->r[0],80); // 801D508C
  if (!crb(c,2)) { goto L_801D50E8; } // 801D5090
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D5094
  c->r[7]=c->r[4]+0x00000001u; // 801D5098
  cmps(c,0,(int32_t)c->r[0],67); // 801D509C
  if (!crb(c,2)) { goto L_801D50A8; } // 801D50A0
  c->r[7]=c->r[7]+0x00000001u; // 801D50A4
L_801D50A8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D50A8
  cmps(c,0,(int32_t)c->r[0],86); // 801D50AC
  if (!crb(c,2)) { goto L_801D50B8; } // 801D50B0
  c->r[7]=c->r[7]+0x00000001u; // 801D50B4
L_801D50B8:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D50B8
  cmps(c,0,(int32_t)c->r[0],118); // 801D50BC
  if (!crb(c,2)) { goto L_801D50E4; } // 801D50C0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D50C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D50C8
  cmps(c,0,(int32_t)c->r[0],80); // 801D50CC
  if (crb(c,2)) { goto L_801D50DC; } // 801D50D0
  cmps(c,0,(int32_t)c->r[0],42); // 801D50D4
  if (!crb(c,2)) { goto L_801D50E4; } // 801D50D8
L_801D50DC:;
  c->r[3]=0u+0x00000001u; // 801D50DC
  return; // 801D50E0
L_801D50E4:;
  c->r[7]=c->r[4]|c->r[4]; // 801D50E4
L_801D50E8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D50E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D50EC
  cmps(c,0,(int32_t)c->r[0],42); // 801D50F0
  if (crb(c,2)) { goto L_801D5100; } // 801D50F4
  cmps(c,0,(int32_t)c->r[0],33); // 801D50F8
  if (!crb(c,2)) { goto L_801D5234; } // 801D50FC
L_801D5100:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D5100
  c->r[6]=c->r[3]+0x00000001u; // 801D5104
  c->r[3]=R8(c->r[3]+0x00000000u); // 801D5108
  c->r[7]=c->r[7]+0x00000001u; // 801D510C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D5110
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D5114
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D5118
  if (crb(c,2)) { goto L_801D5128; } // 801D511C
  c->r[3]=0u+0x00000000u; // 801D5120
  return; // 801D5124
L_801D5128:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D5128
  c->r[7]=c->r[7]+0x00000001u; // 801D512C
  c->r[3]=R8(c->r[6]+0x00000000u); // 801D5130
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D5134
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D5138
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D513C
  if (!crb(c,2)) { goto L_801D5188; } // 801D5140
  cmps(c,0,(int32_t)c->r[3],33); // 801D5144
  c->r[6]=c->r[6]+0x00000001u; // 801D5148
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5128; } // 801D514C
  c->r[4]=0u+0x00000000u; // 801D5150
  goto L_801D5170; // 801D5154
L_801D5158:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 801D5158
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801D515C
  c->r[6]=c->r[6]+0x00000001u; // 801D5160
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D5164
  c->r[4]=c->r[3]+c->r[0]; // 801D5168
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 801D516C
L_801D5170:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801D5170
  cmps(c,0,(int32_t)c->r[0],33); // 801D5174
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5158; } // 801D5178
  W32(c->r[5]+0x00000000u,c->r[4]); // 801D517C
  c->r[3]=0u+0x00000001u; // 801D5180
  return; // 801D5184
L_801D5188:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801D5188
  c->r[6]=c->r[6]+0x00000001u; // 801D518C
  cmps(c,0,(int32_t)c->r[0],33); // 801D5190
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5188; } // 801D5194
L_801D5198:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801D5198
  c->r[6]=c->r[6]+0x00000001u; // 801D519C
  cmps(c,0,(int32_t)c->r[0],33); // 801D51A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5198; } // 801D51A4
  c->r[0]=R8(c->r[6]+0x00000000u); // 801D51A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D51AC
  if (!crb(c,2)) { goto L_801D51BC; } // 801D51B0
  c->r[3]=0u+0x00000000u; // 801D51B4
  return; // 801D51B8
L_801D51BC:;
  c->r[7]=c->r[4]+0x00000001u; // 801D51BC
  IRQCHK(c); goto L_801D5128; // 801D51C0
  goto L_801D5234; // 801D51C4
L_801D51C8:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 801D51C8
  c->r[6]=c->r[6]+0x00000001u; // 801D51CC
  cmps(c,0,(int32_t)c->r[0],67); // 801D51D0
  if (!crb(c,2)) { goto L_801D51EC; } // 801D51D4
  c->r[0]=R8(c->r[6]+0x00000000u); // 801D51D8
  cmps(c,0,(int32_t)c->r[0],67); // 801D51DC
  if (!crb(c,2)) { goto L_801D51E8; } // 801D51E0
  c->r[6]=c->r[6]+0x00000001u; // 801D51E4
L_801D51E8:;
  c->r[7]=c->r[7]+0x00000001u; // 801D51E8
L_801D51EC:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801D51EC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D51F0
  cmps(c,0,(int32_t)c->r[3],67); // 801D51F4
  if (!crb(c,2)) { goto L_801D5204; } // 801D51F8
  c->r[3]=0u+0x00000000u; // 801D51FC
  return; // 801D5200
L_801D5204:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D5204
  cmps(c,0,(int32_t)c->r[0],86); // 801D5208
  if (!crb(c,2)) { goto L_801D5220; } // 801D520C
  cmps(c,0,(int32_t)c->r[3],86); // 801D5210
  if (!crb(c,2)) { goto L_801D521C; } // 801D5214
  c->r[6]=c->r[6]+0x00000001u; // 801D5218
L_801D521C:;
  c->r[7]=c->r[7]+0x00000001u; // 801D521C
L_801D5220:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801D5220
  cmps(c,0,(int32_t)c->r[0],86); // 801D5224
  if (!crb(c,2)) { goto L_801D5234; } // 801D5228
  c->r[3]=0u+0x00000000u; // 801D522C
  return; // 801D5230
L_801D5234:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 801D5234
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D5238
  cmps(c,0,(int32_t)c->r[0],80); // 801D523C
  if (crb(c,2)) { goto L_801D524C; } // 801D5240
  cmps(c,0,(int32_t)c->r[0],82); // 801D5244
  if (!crb(c,2)) { goto L_801D527C; } // 801D5248
L_801D524C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D524C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801D5250
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D5254
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D5258
  if (crb(c,2)) { IRQCHK(c); goto L_801D51C8; } // 801D525C
  goto L_801D527C; // 801D5260
L_801D5264:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801D5264
  if (!crb(c,2)) { goto L_801D5274; } // 801D5268
  c->r[3]=0u+0x00000001u; // 801D526C
  return; // 801D5270
L_801D5274:;
  c->r[6]=c->r[6]+0x00000001u; // 801D5274
  c->r[7]=c->r[7]+0x00000001u; // 801D5278
L_801D527C:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 801D527C
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D5280
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801D5284
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D5288
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801D528C
  if (crb(c,2)) { IRQCHK(c); goto L_801D5264; } // 801D5290
  c->r[3]=0u+0x00000000u; // 801D5294
  return; // 801D5298
}

// __construct_new_array
void f_801D529C(Ctx* __restrict c) {
  trace_call(0x801D529Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D529C
  c->r[0]=c->lr; // 801D52A0
  cmps(c,0,(int32_t)c->r[3],0); // 801D52A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D52A8
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D52AC
  c->r[30]=c->r[3]|c->r[3]; // 801D52B0
  c->r[27]=c->r[4]|c->r[4]; // 801D52B4
  c->r[28]=c->r[6]|c->r[6]; // 801D52B8
  c->r[29]=c->r[7]|c->r[7]; // 801D52BC
  if (crb(c,2)) { goto L_801D5388; } // 801D52C0
  cmps(c,0,(int32_t)c->r[4],0); // 801D52C4
  W32(c->r[3]+0x00000000u,c->r[6]); // 801D52C8
  c->r[30]=c->r[3]+0x00000010u; // 801D52CC
  W32(c->r[3]+0x00000004u,c->r[7]); // 801D52D0
  if (crb(c,2)) { goto L_801D5388; } // 801D52D4
  c->r[0]=0u+0x00000000u; // 801D52D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D52DC
  c->r[31]=c->r[30]|c->r[30]; // 801D52E0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801D52E4
  W32(c->r[1]+0x00000010u,c->r[7]); // 801D52E8
  W32(c->r[1]+0x00000014u,c->r[5]); // 801D52EC
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D52F0
  goto L_801D531C; // 801D52F4
L_801D52F8:;
  c->r[12]=c->r[27]|c->r[27]; // 801D52F8
  c->r[3]=c->r[31]|c->r[31]; // 801D52FC
  c->r[4]=0u+0x00000001u; // 801D5300
  c->ctr=c->r[12]; // 801D5304
  if (true) { c->lr=0x801D530Cu; dispatch(c,c->ctr); } // 801D5308
  c->r[3]=R32(c->r[1]+0x00000018u); // 801D530C
  c->r[31]=c->r[31]+c->r[28]; // 801D5310
  c->r[0]=c->r[3]+0x00000001u; // 801D5314
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D5318
L_801D531C:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 801D531C
  cmpu(c,0,c->r[4],c->r[29]); // 801D5320
  if (crb(c,0)) { IRQCHK(c); goto L_801D52F8; } // 801D5324
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D5328
  cmpu(c,0,c->r[4],c->r[0]); // 801D532C
  if (!crb(c,0)) { goto L_801D5388; } // 801D5330
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D5334
  cmps(c,0,(int32_t)c->r[0],0); // 801D5338
  if (crb(c,2)) { goto L_801D5388; } // 801D533C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D5340
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D5344
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801D5348
  c->r[31]=c->r[3]+c->r[0]; // 801D534C
  goto L_801D537C; // 801D5350
L_801D5354:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D5354
  c->r[4]=0u+0xFFFFFFFFu; // 801D5358
  c->r[12]=R32(c->r[1]+0x00000014u); // 801D535C
  c->r[31]=c->r[31]-c->r[0]; // 801D5360
  c->r[3]=c->r[31]|c->r[31]; // 801D5364
  c->ctr=c->r[12]; // 801D5368
  if (true) { c->lr=0x801D5370u; dispatch(c,c->ctr); } // 801D536C
  c->r[3]=R32(c->r[1]+0x00000018u); // 801D5370
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D5374
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D5378
L_801D537C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801D537C
  cmps(c,0,(int32_t)c->r[0],0); // 801D5380
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5354; } // 801D5384
L_801D5388:;
  c->r[3]=c->r[30]|c->r[30]; // 801D5388
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D538C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D5390
  c->lr=c->r[0]; // 801D5394
  c->r[1]=c->r[1]+0x00000040u; // 801D5398
  return; // 801D539C
}

// dtor_801D53A0
void f_801D53A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D53A0
  c->r[0]=c->lr; // 801D53A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D53A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D53AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D53B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D53B4
  c->r[30]=c->r[4]|c->r[4]; // 801D53B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D53BC
  c->r[29]=c->r[3]|c->r[3]; // 801D53C0
  if (crb(c,2)) { goto L_801D543C; } // 801D53C4
  c->r[4]=R32(c->r[3]+0x00000010u); // 801D53C8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D53CC
  cmpu(c,0,c->r[4],c->r[0]); // 801D53D0
  if (!crb(c,0)) { goto L_801D542C; } // 801D53D4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801D53D8
  cmps(c,0,(int32_t)c->r[0],0); // 801D53DC
  if (crb(c,2)) { goto L_801D542C; } // 801D53E0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D53E4
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D53E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801D53EC
  c->r[31]=c->r[3]+c->r[0]; // 801D53F0
  goto L_801D5420; // 801D53F4
L_801D53F8:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D53F8
  c->r[4]=0u+0xFFFFFFFFu; // 801D53FC
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 801D5400
  c->r[31]=c->r[31]-c->r[0]; // 801D5404
  c->r[3]=c->r[31]|c->r[31]; // 801D5408
  c->ctr=c->r[12]; // 801D540C
  if (true) { c->lr=0x801D5414u; dispatch(c,c->ctr); } // 801D5410
  c->r[3]=R32(c->r[29]+0x00000010u); // 801D5414
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D5418
  W32(c->r[29]+0x00000010u,c->r[0]); // 801D541C
L_801D5420:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 801D5420
  cmps(c,0,(int32_t)c->r[0],0); // 801D5424
  if (!crb(c,2)) { IRQCHK(c); goto L_801D53F8; } // 801D5428
L_801D542C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D542C
  if (!crb(c,1)) { goto L_801D543C; } // 801D5430
  c->r[3]=c->r[29]|c->r[29]; // 801D5434
  c->lr=0x801D543Cu; f_800D93B0(c); // 801D5438
L_801D543C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D543C
  c->r[3]=c->r[29]|c->r[29]; // 801D5440
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5444
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5448
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D544C
  c->lr=c->r[0]; // 801D5450
  c->r[1]=c->r[1]+0x00000020u; // 801D5454
  return; // 801D5458
}

// __construct_array
void f_801D545C(Ctx* __restrict c) {
  trace_call(0x801D545Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D545C
  c->r[0]=c->lr; // 801D5460
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D5464
  c->r[0]=0u+0x00000000u; // 801D5468
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D546C
  c->r[31]=c->r[3]|c->r[3]; // 801D5470
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D5474
  c->r[30]=c->r[7]|c->r[7]; // 801D5478
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D547C
  c->r[29]=c->r[6]|c->r[6]; // 801D5480
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D5484
  c->r[28]=c->r[4]|c->r[4]; // 801D5488
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D548C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801D5490
  W32(c->r[1]+0x00000010u,c->r[7]); // 801D5494
  W32(c->r[1]+0x00000014u,c->r[5]); // 801D5498
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D549C
  goto L_801D54C8; // 801D54A0
L_801D54A4:;
  c->r[12]=c->r[28]|c->r[28]; // 801D54A4
  c->r[3]=c->r[31]|c->r[31]; // 801D54A8
  c->r[4]=0u+0x00000001u; // 801D54AC
  c->ctr=c->r[12]; // 801D54B0
  if (true) { c->lr=0x801D54B8u; dispatch(c,c->ctr); } // 801D54B4
  c->r[3]=R32(c->r[1]+0x00000018u); // 801D54B8
  c->r[31]=c->r[31]+c->r[29]; // 801D54BC
  c->r[0]=c->r[3]+0x00000001u; // 801D54C0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D54C4
L_801D54C8:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 801D54C8
  cmpu(c,0,c->r[4],c->r[30]); // 801D54CC
  if (crb(c,0)) { IRQCHK(c); goto L_801D54A4; } // 801D54D0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D54D4
  cmpu(c,0,c->r[4],c->r[0]); // 801D54D8
  if (!crb(c,0)) { goto L_801D5534; } // 801D54DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D54E0
  cmps(c,0,(int32_t)c->r[0],0); // 801D54E4
  if (crb(c,2)) { goto L_801D5534; } // 801D54E8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D54EC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D54F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801D54F4
  c->r[31]=c->r[3]+c->r[0]; // 801D54F8
  goto L_801D5528; // 801D54FC
L_801D5500:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D5500
  c->r[4]=0u+0xFFFFFFFFu; // 801D5504
  c->r[12]=R32(c->r[1]+0x00000014u); // 801D5508
  c->r[31]=c->r[31]-c->r[0]; // 801D550C
  c->r[3]=c->r[31]|c->r[31]; // 801D5510
  c->ctr=c->r[12]; // 801D5514
  if (true) { c->lr=0x801D551Cu; dispatch(c,c->ctr); } // 801D5518
  c->r[3]=R32(c->r[1]+0x00000018u); // 801D551C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D5520
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D5524
L_801D5528:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801D5528
  cmps(c,0,(int32_t)c->r[0],0); // 801D552C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5500; } // 801D5530
L_801D5534:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D5534
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D5538
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D553C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D5540
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D5544
  c->lr=c->r[0]; // 801D5548
  c->r[1]=c->r[1]+0x00000030u; // 801D554C
  return; // 801D5550
}

// __destroy_arr
void f_801D5554(Ctx* __restrict c) {
  trace_call(0x801D5554u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5554
  c->r[0]=c->lr; // 801D5558
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D555C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801D5560
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5564
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5568
  c->r[30]=c->r[6]|c->r[6]; // 801D556C
  c->r[31]=c->r[3]+c->r[0]; // 801D5570
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D5574
  c->r[29]=c->r[5]|c->r[5]; // 801D5578
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D557C
  c->r[28]=c->r[4]|c->r[4]; // 801D5580
  goto L_801D55A4; // 801D5584
L_801D5588:;
  c->r[31]=c->r[31]-c->r[29]; // 801D5588
  c->r[12]=c->r[28]|c->r[28]; // 801D558C
  c->r[3]=c->r[31]|c->r[31]; // 801D5590
  c->r[4]=0u+0xFFFFFFFFu; // 801D5594
  c->ctr=c->r[12]; // 801D5598
  if (true) { c->lr=0x801D55A0u; dispatch(c,c->ctr); } // 801D559C
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801D55A0
L_801D55A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D55A4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5588; } // 801D55A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D55AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D55B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D55B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D55B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D55BC
  c->lr=c->r[0]; // 801D55C0
  c->r[1]=c->r[1]+0x00000020u; // 801D55C4
  return; // 801D55C8
}

// __destroy_new_array
void f_801D55CC(Ctx* __restrict c) {
  trace_call(0x801D55CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D55CC
  c->r[0]=c->lr; // 801D55D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D55D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D55D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D55DC
  c->r[26]=c->r[3]|c->r[3]; // 801D55E0
  c->r[27]=c->r[4]|c->r[4]; // 801D55E4
  if (crb(c,2)) { goto L_801D5638; } // 801D55E8
  cmps(c,0,(int32_t)c->r[4],0); // 801D55EC
  if (crb(c,2)) { goto L_801D5630; } // 801D55F0
  c->r[29]=R32(c->r[3]+0xFFFFFFF0u); // 801D55F4
  c->r[31]=0u+0x00000000u; // 801D55F8
  c->r[30]=R32(c->r[3]+0xFFFFFFF4u); // 801D55FC
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[30]); // 801D5600
  c->r[28]=c->r[3]+c->r[0]; // 801D5604
  goto L_801D5628; // 801D5608
L_801D560C:;
  c->r[28]=c->r[28]-c->r[29]; // 801D560C
  c->r[12]=c->r[27]|c->r[27]; // 801D5610
  c->r[3]=c->r[28]|c->r[28]; // 801D5614
  c->r[4]=0u+0xFFFFFFFFu; // 801D5618
  c->ctr=c->r[12]; // 801D561C
  if (true) { c->lr=0x801D5624u; dispatch(c,c->ctr); } // 801D5620
  c->r[31]=c->r[31]+0x00000001u; // 801D5624
L_801D5628:;
  cmpu(c,0,c->r[31],c->r[30]); // 801D5628
  if (crb(c,0)) { IRQCHK(c); goto L_801D560C; } // 801D562C
L_801D5630:;
  c->r[3]=c->r[26]+0xFFFFFFF0u; // 801D5630
  c->lr=0x801D5638u; f_800D9450(c); // 801D5634
L_801D5638:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D5638
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D563C
  c->lr=c->r[0]; // 801D5640
  c->r[1]=c->r[1]+0x00000020u; // 801D5644
  return; // 801D5648
}

// __ptmf_cmpr
void f_801D564C(Ctx* __restrict c) {
  trace_call(0x801D564Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 801D564C
  c->r[6]=R32(c->r[4]+0x00000000u); // 801D5650
  c->r[7]=R32(c->r[3]+0x00000004u); // 801D5654
  c->r[8]=R32(c->r[4]+0x00000004u); // 801D5658
  c->r[9]=R32(c->r[3]+0x00000008u); // 801D565C
  c->r[10]=R32(c->r[4]+0x00000008u); // 801D5660
  c->r[3]=0u+0x00000001u; // 801D5664
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801D5668
  cmps(c,6,(int32_t)c->r[7],(int32_t)c->r[8]); // 801D566C
  cmps(c,7,(int32_t)c->r[9],(int32_t)c->r[10]); // 801D5670
  if (!crb(c,2)) return; // 801D5674
  if (!crb(c,26)) return; // 801D5678
  if (!crb(c,30)) return; // 801D567C
  c->r[3]=0u+0x00000000u; // 801D5680
  return; // 801D5684
}

// __ptmf_scall
void f_801D5688(Ctx* __restrict c) {
  trace_call(0x801D5688u);
  c->r[0]=R32(c->r[12]+0x00000000u); // 801D5688
  c->r[11]=R32(c->r[12]+0x00000004u); // 801D568C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801D5690
  c->r[3]=c->r[3]+c->r[0]; // 801D5694
  cmps(c,0,(int32_t)c->r[11],0); // 801D5698
  if (crb(c,0)) { goto L_801D56A8; } // 801D569C
  c->r[12]=R32(c->r[3]+c->r[12]); // 801D56A0
  c->r[12]=R32(c->r[12]+c->r[11]); // 801D56A4
L_801D56A8:;
  c->ctr=c->r[12]; // 801D56A8
  if (true) { dispatch(c,c->ctr); return; } // 801D56AC
}

// __dynamic_cast
void f_801D56B0(Ctx* __restrict c) {
  trace_call(0x801D56B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D56B0
  c->r[0]=c->lr; // 801D56B4
  cmps(c,0,(int32_t)c->r[3],0); // 801D56B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D56BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D56C0
  if (!crb(c,2)) { goto L_801D56D0; } // 801D56C4
  c->r[3]=0u+0x00000000u; // 801D56C8
  goto L_801D58F8; // 801D56CC
L_801D56D0:;
  c->r[4]=R32(c->r[3]+c->r[4]); // 801D56D0
  c->r[11]=R32(c->r[4]+0x00000000u); // 801D56D4
  cmps(c,0,(int32_t)c->r[11],0); // 801D56D8
  if (crb(c,2)) { goto L_801D58C4; } // 801D56DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801D56E0
  cmps(c,0,(int32_t)c->r[5],0); // 801D56E4
  c->r[3]=c->r[3]+c->r[0]; // 801D56E8
  if (crb(c,2)) { goto L_801D58F8; } // 801D56EC
  c->r[4]=R32(c->r[5]+0x00000000u); // 801D56F0
  c->r[9]=R32(c->r[11]+0x00000000u); // 801D56F4
  c->r[10]=c->r[4]|c->r[4]; // 801D56F8
  goto L_801D5718; // 801D56FC
L_801D5700:;
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[12]; cr0(c,c->r[5]); // 801D5700
  if (!crb(c,2)) { goto L_801D5710; } // 801D5704
  c->r[5]=0u+0x00000000u; // 801D5708
  goto L_801D573C; // 801D570C
L_801D5710:;
  c->r[9]=c->r[9]+0x00000001u; // 801D5710
  c->r[10]=c->r[10]+0x00000001u; // 801D5714
L_801D5718:;
  c->r[12]=R8(c->r[9]+0x00000000u); // 801D5718
  c->r[5]=R8(c->r[10]+0x00000000u); // 801D571C
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 801D5720
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D5724
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 801D5728
  if (crb(c,2)) { IRQCHK(c); goto L_801D5700; } // 801D572C
  c->r[8]=R8(c->r[10]+0x00000000u); // 801D5730
  c->r[5]=R8(c->r[9]+0x00000000u); // 801D5734
  c->r[5]=c->r[5]-c->r[8]; // 801D5738
L_801D573C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D573C
  if (!crb(c,2)) { goto L_801D5748; } // 801D5740
  goto L_801D58F8; // 801D5744
L_801D5748:;
  c->r[5]=R32(c->r[11]+0x00000004u); // 801D5748
  cmps(c,0,(int32_t)c->r[5],0); // 801D574C
  if (crb(c,2)) { goto L_801D58C4; } // 801D5750
  goto L_801D58B8; // 801D5754
L_801D5758:;
  c->r[12]=R32(c->r[5]+0x00000004u); // 801D5758
  c->r[8]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[8]); // 801D575C
  if (crb(c,2)) { goto L_801D585C; } // 801D5760
  c->r[8]=rotl(c->r[12],0)&0x7FFFFFFFu; // 801D5764
  c->r[31]=R32(c->r[5]+0x00000008u); // 801D5768
  c->r[8]=c->r[0]+c->r[8]; cr0(c,c->r[8]); // 801D576C
  if (!crb(c,2)) { goto L_801D5848; } // 801D5770
  c->r[10]=R32(c->r[9]+0x00000000u); // 801D5774
  c->r[11]=c->r[4]|c->r[4]; // 801D5778
  goto L_801D5798; // 801D577C
L_801D5780:;
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[12]; cr0(c,c->r[8]); // 801D5780
  if (!crb(c,2)) { goto L_801D5790; } // 801D5784
  c->r[8]=0u+0x00000000u; // 801D5788
  goto L_801D57BC; // 801D578C
L_801D5790:;
  c->r[10]=c->r[10]+0x00000001u; // 801D5790
  c->r[11]=c->r[11]+0x00000001u; // 801D5794
L_801D5798:;
  c->r[12]=R8(c->r[10]+0x00000000u); // 801D5798
  c->r[8]=R8(c->r[11]+0x00000000u); // 801D579C
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[12]; // 801D57A0
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801D57A4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 801D57A8
  if (crb(c,2)) { IRQCHK(c); goto L_801D5780; } // 801D57AC
  c->r[9]=R8(c->r[11]+0x00000000u); // 801D57B0
  c->r[8]=R8(c->r[10]+0x00000000u); // 801D57B4
  c->r[8]=c->r[8]-c->r[9]; // 801D57B8
L_801D57BC:;
  cmps(c,0,(int32_t)c->r[8],0); // 801D57BC
  if (!crb(c,2)) { goto L_801D5848; } // 801D57C0
  c->r[12]=c->r[5]+0x0000000Cu; // 801D57C4
  c->ctr=c->r[31]; // 801D57C8
  cmps(c,0,(int32_t)c->r[31],0); // 801D57CC
  if (!crb(c,1)) { goto L_801D58C4; } // 801D57D0
L_801D57D4:;
  c->r[11]=R32(c->r[12]+0x00000004u); // 801D57D4
  c->r[4]=c->r[0]+c->r[11]; cr0(c,c->r[4]); // 801D57D8
  if (!crb(c,2)) { goto L_801D583C; } // 801D57DC
  c->r[4]=R32(c->r[12]+0x00000000u); // 801D57E0
  c->r[9]=R32(c->r[6]+0x00000000u); // 801D57E4
  c->r[8]=R32(c->r[4]+0x00000000u); // 801D57E8
  goto L_801D5808; // 801D57EC
L_801D57F0:;
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[4]); // 801D57F0
  if (!crb(c,2)) { goto L_801D5800; } // 801D57F4
  c->r[4]=0u+0x00000000u; // 801D57F8
  goto L_801D582C; // 801D57FC
L_801D5800:;
  c->r[8]=c->r[8]+0x00000001u; // 801D5800
  c->r[9]=c->r[9]+0x00000001u; // 801D5804
L_801D5808:;
  c->r[10]=R8(c->r[8]+0x00000000u); // 801D5808
  c->r[4]=R8(c->r[9]+0x00000000u); // 801D580C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 801D5810
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801D5814
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801D5818
  if (crb(c,2)) { IRQCHK(c); goto L_801D57F0; } // 801D581C
  c->r[5]=R8(c->r[9]+0x00000000u); // 801D5820
  c->r[4]=R8(c->r[8]+0x00000000u); // 801D5824
  c->r[4]=c->r[4]-c->r[5]; // 801D5828
L_801D582C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D582C
  if (!crb(c,2)) { goto L_801D583C; } // 801D5830
  c->r[3]=c->r[3]+c->r[11]; // 801D5834
  goto L_801D58F8; // 801D5838
L_801D583C:;
  c->r[12]=c->r[12]+0x00000008u; // 801D583C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D57D4; } // 801D5840
  goto L_801D58C4; // 801D5844
L_801D5848:;
  c->r[8]=c->r[31]+0xFFFFFFFFu; // 801D5848
  c->r[5]=c->r[5]+0x0000000Cu; // 801D584C
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801D5850
  c->r[5]=c->r[5]+c->r[8]; // 801D5854
  goto L_801D58B4; // 801D5858
L_801D585C:;
  c->r[10]=R32(c->r[9]+0x00000000u); // 801D585C
  c->r[11]=c->r[4]|c->r[4]; // 801D5860
  goto L_801D5880; // 801D5864
L_801D5868:;
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[31]; cr0(c,c->r[8]); // 801D5868
  if (!crb(c,2)) { goto L_801D5878; } // 801D586C
  c->r[8]=0u+0x00000000u; // 801D5870
  goto L_801D58A4; // 801D5874
L_801D5878:;
  c->r[10]=c->r[10]+0x00000001u; // 801D5878
  c->r[11]=c->r[11]+0x00000001u; // 801D587C
L_801D5880:;
  c->r[31]=R8(c->r[10]+0x00000000u); // 801D5880
  c->r[8]=R8(c->r[11]+0x00000000u); // 801D5884
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801D5888
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[8]; // 801D588C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 801D5890
  if (crb(c,2)) { IRQCHK(c); goto L_801D5868; } // 801D5894
  c->r[9]=R8(c->r[11]+0x00000000u); // 801D5898
  c->r[8]=R8(c->r[10]+0x00000000u); // 801D589C
  c->r[8]=c->r[8]-c->r[9]; // 801D58A0
L_801D58A4:;
  cmps(c,0,(int32_t)c->r[8],0); // 801D58A4
  if (!crb(c,2)) { goto L_801D58B4; } // 801D58A8
  c->r[3]=c->r[3]+c->r[12]; // 801D58AC
  goto L_801D58F8; // 801D58B0
L_801D58B4:;
  c->r[5]=c->r[5]+0x00000008u; // 801D58B4
L_801D58B8:;
  c->r[9]=R32(c->r[5]+0x00000000u); // 801D58B8
  cmps(c,0,(int32_t)c->r[9],0); // 801D58BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5758; } // 801D58C0
L_801D58C4:;
  cmps(c,0,(int32_t)c->r[7],0); // 801D58C4
  if (crb(c,2)) { goto L_801D58F4; } // 801D58C8
  c->r[4]=0u+0x80250000u; // 801D58CC
  c->r[3]=0u+0x80200000u; // 801D58D0
  c->r[4]=c->r[4]+0xFFFF9800u; // 801D58D4
  c->r[5]=0u+0x801D0000u; // 801D58D8
  c->r[3]=c->r[3]+0xFFFFA908u; // 801D58DC
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D58E0
  c->r[3]=c->r[3]+0x00000027u; // 801D58E4
  c->r[4]=c->r[1]+0x00000008u; // 801D58E8
  c->r[5]=c->r[5]+0x0000590Cu; // 801D58EC
  c->lr=0x801D58F4u; f_801D76B8(c); // 801D58F0
L_801D58F4:;
  c->r[3]=0u+0x00000000u; // 801D58F4
L_801D58F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D58F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D58FC
  c->lr=c->r[0]; // 801D5900
  c->r[1]=c->r[1]+0x00000020u; // 801D5904
  return; // 801D5908
}

// __dt__Q23std8bad_castFv
void f_801D590C(Ctx* __restrict c) {
  trace_call(0x801D590Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D590C
  c->r[0]=c->lr; // 801D5910
  cmps(c,0,(int32_t)c->r[3],0); // 801D5914
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D591C
  c->r[31]=c->r[3]|c->r[3]; // 801D5920
  if (crb(c,2)) { goto L_801D5934; } // 801D5924
  cmps(c,0,(int32_t)c->r[4],0); // 801D5928
  if (!crb(c,1)) { goto L_801D5934; } // 801D592C
  c->lr=0x801D5934u; f_800D93B0(c); // 801D5930
L_801D5934:;
  c->r[3]=c->r[31]|c->r[31]; // 801D5934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D5938
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D593C
  c->lr=c->r[0]; // 801D5940
  c->r[1]=c->r[1]+0x00000010u; // 801D5944
  return; // 801D5948
}

// what__Q23std8bad_castCFv
void f_801D594C(Ctx* __restrict c) {
  trace_call(0x801D594Cu);
  c->r[3]=0u+0x80250000u; // 801D594C
  c->r[3]=c->r[3]+0xFFFF981Cu; // 801D5950
  return; // 801D5954
}

// __cvt_fp2unsigned
void f_801D5958(Ctx* __restrict c) {
  trace_call(0x801D5958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5958
  c->r[4]=0u+0x80200000u; // 801D595C
  c->r[4]=c->r[4]+0xFFFFA950u; // 801D5960
  c->r[3]=0u+0x00000000u; // 801D5964
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801D5968
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=RF64(ea);} // 801D596C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=RF64(ea);} // 801D5970
  fcmp(c,0,c->f[1],c->f[0]); // 801D5974
  fcmp(c,6,c->f[1],c->f[3]); // 801D5978
  if (crb(c,0)) { goto L_801D59AC; } // 801D597C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D5980
  if (!crb(c,24)) { goto L_801D59AC; } // 801D5984
  fcmp(c,7,c->f[1],c->f[4]); // 801D5988
  c->f[2]=c->f[1]; // 801D598C
  if (crb(c,28)) { goto L_801D5998; } // 801D5990
  c->f[2]=c->f[1]-c->f[4]; // 801D5994
L_801D5998:;
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801D5998
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 801D599C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801D59A0
  if (crb(c,28)) { goto L_801D59AC; } // 801D59A4
  c->r[3]=c->r[3]+0x80000000u; // 801D59A8
L_801D59AC:;
  c->r[1]=c->r[1]+0x00000010u; // 801D59AC
  return; // 801D59B0
}

// __save_fpr
void f_801D59B4(Ctx* __restrict c) {
  trace_call(0x801D59B4u);
  {uint32_t ea=c->r[11]+0xFFFFFF70u; WF64(ea,c->f[14]);} // 801D59B4
  {uint32_t ea=c->r[11]+0xFFFFFF78u; WF64(ea,c->f[15]);} // 801D59B8
  {uint32_t ea=c->r[11]+0xFFFFFF80u; WF64(ea,c->f[16]);} // 801D59BC
  {uint32_t ea=c->r[11]+0xFFFFFF88u; WF64(ea,c->f[17]);} // 801D59C0
  {uint32_t ea=c->r[11]+0xFFFFFF90u; WF64(ea,c->f[18]);} // 801D59C4
  {uint32_t ea=c->r[11]+0xFFFFFF98u; WF64(ea,c->f[19]);} // 801D59C8
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; WF64(ea,c->f[20]);} // 801D59CC
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; WF64(ea,c->f[21]);} // 801D59D0
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; WF64(ea,c->f[22]);} // 801D59D4
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; WF64(ea,c->f[23]);} // 801D59D8
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; WF64(ea,c->f[24]);} // 801D59DC
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; WF64(ea,c->f[25]);} // 801D59E0
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; WF64(ea,c->f[26]);} // 801D59E4
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} // 801D59E8
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} // 801D59EC
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} // 801D59F0
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} // 801D59F4
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} // 801D59F8
  return; // 801D59FC
}

// __restore_fpr
void f_801D5A00(Ctx* __restrict c) {
  trace_call(0x801D5A00u);
  {uint32_t ea=c->r[11]+0xFFFFFF70u; c->f[14]=RF64(ea);} // 801D5A00
  {uint32_t ea=c->r[11]+0xFFFFFF78u; c->f[15]=RF64(ea);} // 801D5A04
  {uint32_t ea=c->r[11]+0xFFFFFF80u; c->f[16]=RF64(ea);} // 801D5A08
  {uint32_t ea=c->r[11]+0xFFFFFF88u; c->f[17]=RF64(ea);} // 801D5A0C
  {uint32_t ea=c->r[11]+0xFFFFFF90u; c->f[18]=RF64(ea);} // 801D5A10
  {uint32_t ea=c->r[11]+0xFFFFFF98u; c->f[19]=RF64(ea);} // 801D5A14
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; c->f[20]=RF64(ea);} // 801D5A18
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; c->f[21]=RF64(ea);} // 801D5A1C
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; c->f[22]=RF64(ea);} // 801D5A20
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; c->f[23]=RF64(ea);} // 801D5A24
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; c->f[24]=RF64(ea);} // 801D5A28
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; c->f[25]=RF64(ea);} // 801D5A2C
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; c->f[26]=RF64(ea);} // 801D5A30
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} // 801D5A34
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} // 801D5A38
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} // 801D5A3C
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} // 801D5A40
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} // 801D5A44
  return; // 801D5A48
}

// __save_gpr
void f_801D5A4C(Ctx* __restrict c) {
  trace_call(0x801D5A4Cu);
  W32(c->r[11]+0xFFFFFFB8u,c->r[14]); // 801D5A4C
  W32(c->r[11]+0xFFFFFFBCu,c->r[15]); // 801D5A50
  W32(c->r[11]+0xFFFFFFC0u,c->r[16]); // 801D5A54
  W32(c->r[11]+0xFFFFFFC4u,c->r[17]); // 801D5A58
  W32(c->r[11]+0xFFFFFFC8u,c->r[18]); // 801D5A5C
  W32(c->r[11]+0xFFFFFFCCu,c->r[19]); // 801D5A60
  W32(c->r[11]+0xFFFFFFD0u,c->r[20]); // 801D5A64
  W32(c->r[11]+0xFFFFFFD4u,c->r[21]); // 801D5A68
  W32(c->r[11]+0xFFFFFFD8u,c->r[22]); // 801D5A6C
  W32(c->r[11]+0xFFFFFFDCu,c->r[23]); // 801D5A70
  W32(c->r[11]+0xFFFFFFE0u,c->r[24]); // 801D5A74
  W32(c->r[11]+0xFFFFFFE4u,c->r[25]); // 801D5A78
  W32(c->r[11]+0xFFFFFFE8u,c->r[26]); // 801D5A7C
  W32(c->r[11]+0xFFFFFFECu,c->r[27]); // 801D5A80
  W32(c->r[11]+0xFFFFFFF0u,c->r[28]); // 801D5A84
  W32(c->r[11]+0xFFFFFFF4u,c->r[29]); // 801D5A88
  W32(c->r[11]+0xFFFFFFF8u,c->r[30]); // 801D5A8C
  W32(c->r[11]+0xFFFFFFFCu,c->r[31]); // 801D5A90
  return; // 801D5A94
}

// __restore_gpr
void f_801D5A98(Ctx* __restrict c) {
  trace_call(0x801D5A98u);
  c->r[14]=R32(c->r[11]+0xFFFFFFB8u); // 801D5A98
  c->r[15]=R32(c->r[11]+0xFFFFFFBCu); // 801D5A9C
  c->r[16]=R32(c->r[11]+0xFFFFFFC0u); // 801D5AA0
  c->r[17]=R32(c->r[11]+0xFFFFFFC4u); // 801D5AA4
  c->r[18]=R32(c->r[11]+0xFFFFFFC8u); // 801D5AA8
  c->r[19]=R32(c->r[11]+0xFFFFFFCCu); // 801D5AAC
  c->r[20]=R32(c->r[11]+0xFFFFFFD0u); // 801D5AB0
  c->r[21]=R32(c->r[11]+0xFFFFFFD4u); // 801D5AB4
  c->r[22]=R32(c->r[11]+0xFFFFFFD8u); // 801D5AB8
  c->r[23]=R32(c->r[11]+0xFFFFFFDCu); // 801D5ABC
  c->r[24]=R32(c->r[11]+0xFFFFFFE0u); // 801D5AC0
  c->r[25]=R32(c->r[11]+0xFFFFFFE4u); // 801D5AC4
  c->r[26]=R32(c->r[11]+0xFFFFFFE8u); // 801D5AC8
  c->r[27]=R32(c->r[11]+0xFFFFFFECu); // 801D5ACC
  c->r[28]=R32(c->r[11]+0xFFFFFFF0u); // 801D5AD0
  c->r[29]=R32(c->r[11]+0xFFFFFFF4u); // 801D5AD4
  c->r[30]=R32(c->r[11]+0xFFFFFFF8u); // 801D5AD8
  c->r[31]=R32(c->r[11]+0xFFFFFFFCu); // 801D5ADC
  return; // 801D5AE0
}

// __div2u
void f_801D5AE4(Ctx* __restrict c) {
  trace_call(0x801D5AE4u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D5AE4
  c->r[0]=cntlz(c->r[3]); // 801D5AE8
  c->r[9]=cntlz(c->r[4]); // 801D5AEC
  if (!crb(c,2)) { goto L_801D5AF8; } // 801D5AF0
  c->r[0]=c->r[9]+0x00000020u; // 801D5AF4
L_801D5AF8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D5AF8
  c->r[9]=cntlz(c->r[5]); // 801D5AFC
  c->r[10]=cntlz(c->r[6]); // 801D5B00
  if (!crb(c,2)) { goto L_801D5B0C; } // 801D5B04
  c->r[9]=c->r[10]+0x00000020u; // 801D5B08
L_801D5B0C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 801D5B0C
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 801D5B10
  if (crb(c,1)) { goto L_801D5BC4; } // 801D5B14
  c->r[9]=c->r[9]+0x00000001u; // 801D5B18
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 801D5B1C
  c->r[0]=c->r[0]+c->r[9]; // 801D5B20
  c->r[9]=c->r[10]-c->r[9]; // 801D5B24
  c->ctr=c->r[9]; // 801D5B28
  cmps(c,0,(int32_t)c->r[9],32); // 801D5B2C
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801D5B30
  if (crb(c,0)) { goto L_801D5B44; } // 801D5B34
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801D5B38
  c->r[7]=0u+0x00000000u; // 801D5B3C
  goto L_801D5B58; // 801D5B40
L_801D5B44:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801D5B44
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801D5B48
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801D5B4C
  c->r[8]=c->r[8]|c->r[7]; // 801D5B50
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801D5B54
L_801D5B58:;
  cmps(c,0,(int32_t)c->r[0],32); // 801D5B58
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801D5B5C
  if (crb(c,0)) { goto L_801D5B70; } // 801D5B60
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801D5B64
  c->r[4]=0u+0x00000000u; // 801D5B68
  goto L_801D5B84; // 801D5B6C
L_801D5B70:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D5B70
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801D5B74
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801D5B78
  c->r[3]=c->r[3]|c->r[9]; // 801D5B7C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801D5B80
L_801D5B84:;
  c->r[10]=0u+0xFFFFFFFFu; // 801D5B84
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801D5B88
L_801D5B8C:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801D5B8C
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801D5B90
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 801D5B94
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 801D5B98
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 801D5B9C
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 801D5BA0
  if (crb(c,0)) { goto L_801D5BB4; } // 801D5BA4
  c->r[8]=c->r[0]|c->r[0]; // 801D5BA8
  c->r[7]=c->r[9]|c->r[9]; // 801D5BAC
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 801D5BB0
L_801D5BB4:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5B8C; } // 801D5BB4
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801D5BB8
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801D5BBC
  return; // 801D5BC0
L_801D5BC4:;
  c->r[4]=0u+0x00000000u; // 801D5BC4
  c->r[3]=0u+0x00000000u; // 801D5BC8
  return; // 801D5BCC
}

// __div2i
void f_801D5BD0(Ctx* __restrict c) {
  trace_call(0x801D5BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5BD0
  c->r[9]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[9]); // 801D5BD4
  if (crb(c,2)) { goto L_801D5BE4; } // 801D5BD8
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801D5BDC
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801D5BE0
L_801D5BE4:;
  W32(c->r[1]+0x00000008u,c->r[9]); // 801D5BE4
  c->r[10]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[10]); // 801D5BE8
  if (crb(c,2)) { goto L_801D5BF8; } // 801D5BEC
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 801D5BF0
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 801D5BF4
L_801D5BF8:;
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 801D5BF8
  cmps(c,0,(int32_t)c->r[3],0); // 801D5BFC
  c->r[0]=cntlz(c->r[3]); // 801D5C00
  c->r[9]=cntlz(c->r[4]); // 801D5C04
  if (!crb(c,2)) { goto L_801D5C10; } // 801D5C08
  c->r[0]=c->r[9]+0x00000020u; // 801D5C0C
L_801D5C10:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D5C10
  c->r[9]=cntlz(c->r[5]); // 801D5C14
  c->r[10]=cntlz(c->r[6]); // 801D5C18
  if (!crb(c,2)) { goto L_801D5C24; } // 801D5C1C
  c->r[9]=c->r[10]+0x00000020u; // 801D5C20
L_801D5C24:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 801D5C24
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 801D5C28
  if (crb(c,1)) { goto L_801D5CF8; } // 801D5C2C
  c->r[9]=c->r[9]+0x00000001u; // 801D5C30
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 801D5C34
  c->r[0]=c->r[0]+c->r[9]; // 801D5C38
  c->r[9]=c->r[10]-c->r[9]; // 801D5C3C
  c->ctr=c->r[9]; // 801D5C40
  cmps(c,0,(int32_t)c->r[9],32); // 801D5C44
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801D5C48
  if (crb(c,0)) { goto L_801D5C5C; } // 801D5C4C
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801D5C50
  c->r[7]=0u+0x00000000u; // 801D5C54
  goto L_801D5C70; // 801D5C58
L_801D5C5C:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801D5C5C
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801D5C60
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801D5C64
  c->r[8]=c->r[8]|c->r[7]; // 801D5C68
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801D5C6C
L_801D5C70:;
  cmps(c,0,(int32_t)c->r[0],32); // 801D5C70
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801D5C74
  if (crb(c,0)) { goto L_801D5C88; } // 801D5C78
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801D5C7C
  c->r[4]=0u+0x00000000u; // 801D5C80
  goto L_801D5C9C; // 801D5C84
L_801D5C88:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D5C88
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801D5C8C
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801D5C90
  c->r[3]=c->r[3]|c->r[9]; // 801D5C94
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801D5C98
L_801D5C9C:;
  c->r[10]=0u+0xFFFFFFFFu; // 801D5C9C
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801D5CA0
L_801D5CA4:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801D5CA4
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801D5CA8
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 801D5CAC
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 801D5CB0
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 801D5CB4
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 801D5CB8
  if (crb(c,0)) { goto L_801D5CCC; } // 801D5CBC
  c->r[8]=c->r[0]|c->r[0]; // 801D5CC0
  c->r[7]=c->r[9]|c->r[9]; // 801D5CC4
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 801D5CC8
L_801D5CCC:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5CA4; } // 801D5CCC
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801D5CD0
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801D5CD4
  c->r[9]=R32(c->r[1]+0x00000008u); // 801D5CD8
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 801D5CDC
  c->r[7]=c->r[9]^c->r[10]; cr0(c,c->r[7]); // 801D5CE0
  if (crb(c,2)) { goto L_801D5CF4; } // 801D5CE4
  cmps(c,0,(int32_t)c->r[9],0); // 801D5CE8
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801D5CEC
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801D5CF0
L_801D5CF4:;
  goto L_801D5D00; // 801D5CF4
L_801D5CF8:;
  c->r[4]=0u+0x00000000u; // 801D5CF8
  c->r[3]=0u+0x00000000u; // 801D5CFC
L_801D5D00:;
  c->r[1]=c->r[1]+0x00000010u; // 801D5D00
  return; // 801D5D04
}

// __mod2u
void f_801D5D08(Ctx* __restrict c) {
  trace_call(0x801D5D08u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D5D08
  c->r[0]=cntlz(c->r[3]); // 801D5D0C
  c->r[9]=cntlz(c->r[4]); // 801D5D10
  if (!crb(c,2)) { goto L_801D5D1C; } // 801D5D14
  c->r[0]=c->r[9]+0x00000020u; // 801D5D18
L_801D5D1C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D5D1C
  c->r[9]=cntlz(c->r[5]); // 801D5D20
  c->r[10]=cntlz(c->r[6]); // 801D5D24
  if (!crb(c,2)) { goto L_801D5D30; } // 801D5D28
  c->r[9]=c->r[10]+0x00000020u; // 801D5D2C
L_801D5D30:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 801D5D30
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 801D5D34
  if (crb(c,1)) { goto L_801D5DE8; } // 801D5D38
  c->r[9]=c->r[9]+0x00000001u; // 801D5D3C
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 801D5D40
  c->r[0]=c->r[0]+c->r[9]; // 801D5D44
  c->r[9]=c->r[10]-c->r[9]; // 801D5D48
  c->ctr=c->r[9]; // 801D5D4C
  cmps(c,0,(int32_t)c->r[9],32); // 801D5D50
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801D5D54
  if (crb(c,0)) { goto L_801D5D68; } // 801D5D58
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801D5D5C
  c->r[7]=0u+0x00000000u; // 801D5D60
  goto L_801D5D7C; // 801D5D64
L_801D5D68:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801D5D68
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801D5D6C
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801D5D70
  c->r[8]=c->r[8]|c->r[7]; // 801D5D74
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801D5D78
L_801D5D7C:;
  cmps(c,0,(int32_t)c->r[0],32); // 801D5D7C
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801D5D80
  if (crb(c,0)) { goto L_801D5D94; } // 801D5D84
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801D5D88
  c->r[4]=0u+0x00000000u; // 801D5D8C
  goto L_801D5DA8; // 801D5D90
L_801D5D94:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D5D94
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801D5D98
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801D5D9C
  c->r[3]=c->r[3]|c->r[9]; // 801D5DA0
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801D5DA4
L_801D5DA8:;
  c->r[10]=0u+0xFFFFFFFFu; // 801D5DA8
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801D5DAC
L_801D5DB0:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801D5DB0
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801D5DB4
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 801D5DB8
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 801D5DBC
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 801D5DC0
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 801D5DC4
  if (crb(c,0)) { goto L_801D5DD8; } // 801D5DC8
  c->r[8]=c->r[0]|c->r[0]; // 801D5DCC
  c->r[7]=c->r[9]|c->r[9]; // 801D5DD0
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 801D5DD4
L_801D5DD8:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5DB0; } // 801D5DD8
  c->r[4]=c->r[8]|c->r[8]; // 801D5DDC
  c->r[3]=c->r[7]|c->r[7]; // 801D5DE0
  return; // 801D5DE4
L_801D5DE8:;
  return; // 801D5DE8
}

// __mod2i
void f_801D5DEC(Ctx* __restrict c) {
  trace_call(0x801D5DECu);
  cmps(c,7,(int32_t)c->r[3],0); // 801D5DEC
  if (!crb(c,28)) { goto L_801D5DFC; } // 801D5DF0
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801D5DF4
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801D5DF8
L_801D5DFC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D5DFC
  if (!crb(c,0)) { goto L_801D5E0C; } // 801D5E00
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 801D5E04
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 801D5E08
L_801D5E0C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D5E0C
  c->r[0]=cntlz(c->r[3]); // 801D5E10
  c->r[9]=cntlz(c->r[4]); // 801D5E14
  if (!crb(c,2)) { goto L_801D5E20; } // 801D5E18
  c->r[0]=c->r[9]+0x00000020u; // 801D5E1C
L_801D5E20:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D5E20
  c->r[9]=cntlz(c->r[5]); // 801D5E24
  c->r[10]=cntlz(c->r[6]); // 801D5E28
  if (!crb(c,2)) { goto L_801D5E34; } // 801D5E2C
  c->r[9]=c->r[10]+0x00000020u; // 801D5E30
L_801D5E34:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 801D5E34
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 801D5E38
  if (crb(c,1)) { goto L_801D5EE8; } // 801D5E3C
  c->r[9]=c->r[9]+0x00000001u; // 801D5E40
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 801D5E44
  c->r[0]=c->r[0]+c->r[9]; // 801D5E48
  c->r[9]=c->r[10]-c->r[9]; // 801D5E4C
  c->ctr=c->r[9]; // 801D5E50
  cmps(c,0,(int32_t)c->r[9],32); // 801D5E54
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801D5E58
  if (crb(c,0)) { goto L_801D5E6C; } // 801D5E5C
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 801D5E60
  c->r[7]=0u+0x00000000u; // 801D5E64
  goto L_801D5E80; // 801D5E68
L_801D5E6C:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801D5E6C
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801D5E70
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801D5E74
  c->r[8]=c->r[8]|c->r[7]; // 801D5E78
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801D5E7C
L_801D5E80:;
  cmps(c,0,(int32_t)c->r[0],32); // 801D5E80
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 801D5E84
  if (crb(c,0)) { goto L_801D5E98; } // 801D5E88
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801D5E8C
  c->r[4]=0u+0x00000000u; // 801D5E90
  goto L_801D5EAC; // 801D5E94
L_801D5E98:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D5E98
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 801D5E9C
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 801D5EA0
  c->r[3]=c->r[3]|c->r[9]; // 801D5EA4
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801D5EA8
L_801D5EAC:;
  c->r[10]=0u+0xFFFFFFFFu; // 801D5EAC
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 801D5EB0
L_801D5EB4:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 801D5EB4
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 801D5EB8
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 801D5EBC
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 801D5EC0
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 801D5EC4
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 801D5EC8
  if (crb(c,0)) { goto L_801D5EDC; } // 801D5ECC
  c->r[8]=c->r[0]|c->r[0]; // 801D5ED0
  c->r[7]=c->r[9]|c->r[9]; // 801D5ED4
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 801D5ED8
L_801D5EDC:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5EB4; } // 801D5EDC
  c->r[4]=c->r[8]|c->r[8]; // 801D5EE0
  c->r[3]=c->r[7]|c->r[7]; // 801D5EE4
L_801D5EE8:;
  if (!crb(c,28)) { goto L_801D5EF4; } // 801D5EE8
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801D5EEC
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801D5EF0
L_801D5EF4:;
  return; // 801D5EF4
}

// __shl2i
void f_801D5EF8(Ctx* __restrict c) {
  trace_call(0x801D5EF8u);
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801D5EF8
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 801D5EFC
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 801D5F00
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801D5F04
  c->r[3]=c->r[3]|c->r[10]; // 801D5F08
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801D5F0C
  c->r[3]=c->r[3]|c->r[10]; // 801D5F10
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 801D5F14
  return; // 801D5F18
}

// __cvt_sll_flt
void f_801D5F1C(Ctx* __restrict c) {
  trace_call(0x801D5F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5F1C
  c->r[5]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[5]); // 801D5F20
  if (crb(c,2)) { goto L_801D5F30; } // 801D5F24
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 801D5F28
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 801D5F2C
L_801D5F30:;
  c->r[7]=c->r[3]|c->r[4]; cr0(c,c->r[7]); // 801D5F30
  c->r[6]=0u+0x00000000u; // 801D5F34
  if (crb(c,2)) { goto L_801D5FB8; } // 801D5F38
  c->r[7]=cntlz(c->r[3]); // 801D5F3C
  c->r[8]=cntlz(c->r[4]); // 801D5F40
  c->r[9]=rotl(c->r[7],26)&0xF8000000u; // 801D5F44
  c->r[9]=sraw(c,c->r[9],31); // 801D5F48
  c->r[9]=c->r[9]&c->r[8]; // 801D5F4C
  c->r[7]=c->r[7]+c->r[9]; // 801D5F50
  c->r[8]=addc(c,~c->r[7],0x00000020u,1); // 801D5F54
  c->r[9]=addc(c,c->r[7],0xFFFFFFE0u,0); // 801D5F58
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 801D5F5C
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801D5F60
  c->r[3]=c->r[3]|c->r[10]; // 801D5F64
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801D5F68
  c->r[3]=c->r[3]|c->r[10]; // 801D5F6C
  c->r[4]=((c->r[7])&0x20)?0u:(c->r[4]<<((c->r[7])&31)); // 801D5F70
  c->r[6]=c->r[6]-c->r[7]; // 801D5F74
  c->r[7]=rotl(c->r[4],0)&0x000007FFu; // 801D5F78
  cmps(c,0,(int32_t)c->r[7],1024); // 801D5F7C
  c->r[6]=c->r[6]+0x0000043Eu; // 801D5F80
  if (crb(c,0)) { goto L_801D5FA0; } // 801D5F84
  if (crb(c,1)) { goto L_801D5F94; } // 801D5F88
  c->r[7]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[7]); // 801D5F8C
  if (crb(c,2)) { goto L_801D5FA0; } // 801D5F90
L_801D5F94:;
  c->r[4]=addc(c,c->r[4],0x00000800u,0); // 801D5F94
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801D5F98
  c->r[6]=addc(c,c->r[6],0,c->xer_ca); // 801D5F9C
L_801D5FA0:;
  c->r[4]=rotl(c->r[4],21)&0xFFFFFFFFu; // 801D5FA0
  c->r[4]=(rotl(c->r[3],21)&0xFFE00000u)|(c->r[4]&~0xFFE00000u); // 801D5FA4
  c->r[3]=rotl(c->r[3],21)&0x000FFFFFu; // 801D5FA8
  c->r[6]=rotl(c->r[6],20)&0xFFF00000u; // 801D5FAC
  c->r[3]=c->r[6]|c->r[3]; // 801D5FB0
  c->r[3]=c->r[5]|c->r[3]; // 801D5FB4
L_801D5FB8:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D5FB8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D5FBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801D5FC0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801D5FC4
  c->r[1]=c->r[1]+0x00000010u; // 801D5FC8
  return; // 801D5FCC
}

// __cvt_dbl_ull
void f_801D5FD0(Ctx* __restrict c) {
  trace_call(0x801D5FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5FD0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801D5FD4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D5FD8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801D5FDC
  c->r[5]=rotl(c->r[3],12)&0x000007FFu; // 801D5FE0
  cmpu(c,0,c->r[5],0x000003FFu); // 801D5FE4
  if (!crb(c,0)) { goto L_801D5FF8; } // 801D5FE8
L_801D5FEC:;
  c->r[3]=0u+0x00000000u; // 801D5FEC
  c->r[4]=0u+0x00000000u; // 801D5FF0
  goto L_801D6070; // 801D5FF4
L_801D5FF8:;
  c->r[6]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[6]); // 801D5FF8
  if (!crb(c,2)) { IRQCHK(c); goto L_801D5FEC; } // 801D5FFC
  c->r[3]=rotl(c->r[3],0)&0x000FFFFFu; // 801D6000
  c->r[3]=c->r[3]|0x00100000u; // 801D6004
  c->r[5]=c->r[5]+0xFFFFFBCDu; // 801D6008
  cmps(c,0,(int32_t)c->r[5],0); // 801D600C
  if (!crb(c,0)) { goto L_801D603C; } // 801D6010
  c->r[5]=0u-c->r[5]; // 801D6014
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801D6018
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 801D601C
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]>>((c->r[5])&31)); // 801D6020
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 801D6024
  c->r[4]=c->r[4]|c->r[10]; // 801D6028
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 801D602C
  c->r[4]=c->r[4]|c->r[10]; // 801D6030
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 801D6034
  goto L_801D6070; // 801D6038
L_801D603C:;
  cmps(c,0,(int32_t)c->r[5],11); // 801D603C
  if (!crb(c,1)) { goto L_801D6050; } // 801D6040
  c->r[3]=0u+0xFFFFFFFFu; // 801D6044
  c->r[4]=0u+0xFFFFFFFFu; // 801D6048
  goto L_801D6070; // 801D604C
L_801D6050:;
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 801D6050
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 801D6054
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 801D6058
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 801D605C
  c->r[3]=c->r[3]|c->r[10]; // 801D6060
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 801D6064
  c->r[3]=c->r[3]|c->r[10]; // 801D6068
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 801D606C
L_801D6070:;
  c->r[1]=c->r[1]+0x00000010u; // 801D6070
  return; // 801D6074
}

// __init_cpp_exceptions
void f_801D6078(Ctx* __restrict c) {
  trace_call(0x801D6078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6078
  c->r[0]=c->lr; // 801D607C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6080
  c->r[0]=R32(c->r[13]+0xFFFFAD18u); // 801D6084
  cmps(c,0,(int32_t)c->r[0],-2); // 801D6088
  if (!crb(c,2)) { goto L_801D60A4; } // 801D608C
  c->r[3]=0u+0x80000000u; // 801D6090
  c->r[4]=c->r[2]|c->r[2]; // 801D6094
  c->r[3]=c->r[3]+0x00006EE4u; // 801D6098
  c->lr=0x801D60A0u; f_801D60E8(c); // 801D609C
  W32(c->r[13]+0xFFFFAD18u,c->r[3]); // 801D60A0
L_801D60A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D60A4
  c->lr=c->r[0]; // 801D60A8
  c->r[1]=c->r[1]+0x00000010u; // 801D60AC
  return; // 801D60B0
}

// __fini_cpp_exceptions
void f_801D60B4(Ctx* __restrict c) {
  trace_call(0x801D60B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D60B4
  c->r[0]=c->lr; // 801D60B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D60BC
  c->r[3]=R32(c->r[13]+0xFFFFAD18u); // 801D60C0
  cmps(c,0,(int32_t)c->r[3],-2); // 801D60C4
  if (crb(c,2)) { goto L_801D60D8; } // 801D60C8
  c->lr=0x801D60D0u; f_801D6134(c); // 801D60CC
  c->r[0]=0u+0xFFFFFFFEu; // 801D60D0
  W32(c->r[13]+0xFFFFAD18u,c->r[0]); // 801D60D4
L_801D60D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D60D8
  c->lr=c->r[0]; // 801D60DC
  c->r[1]=c->r[1]+0x00000010u; // 801D60E0
  return; // 801D60E4
}

// __register_fragment
void f_801D60E8(Ctx* __restrict c) {
  trace_call(0x801D60E8u);
  c->r[5]=0u+0x802E0000u; // 801D60E8
  c->r[0]=0u+0x00000020u; // 801D60EC
  c->r[5]=c->r[5]+0xFFFFA9D8u; // 801D60F0
  c->r[6]=0u+0x00000000u; // 801D60F4
  c->ctr=c->r[0]; // 801D60F8
L_801D60FC:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 801D60FC
  cmps(c,0,(int32_t)c->r[0],0); // 801D6100
  if (!crb(c,2)) { goto L_801D6120; } // 801D6104
  W32(c->r[5]+0x00000000u,c->r[3]); // 801D6108
  c->r[0]=0u+0x00000001u; // 801D610C
  c->r[3]=c->r[6]|c->r[6]; // 801D6110
  W32(c->r[5]+0x00000004u,c->r[4]); // 801D6114
  W32(c->r[5]+0x00000008u,c->r[0]); // 801D6118
  return; // 801D611C
L_801D6120:;
  c->r[6]=c->r[6]+0x00000001u; // 801D6120
  c->r[5]=c->r[5]+0x0000000Cu; // 801D6124
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D60FC; } // 801D6128
  c->r[3]=0u+0xFFFFFFFFu; // 801D612C
  return; // 801D6130
}

// __unregister_fragment
void f_801D6134(Ctx* __restrict c) {
  trace_call(0x801D6134u);
  cmpu(c,0,c->r[3],0x0000001Fu); // 801D6134
  if (crb(c,1)) return; // 801D6138
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801D613C
  c->r[3]=0u+0x802E0000u; // 801D6140
  c->r[0]=0u+0x00000000u; // 801D6144
  c->r[3]=c->r[3]+0xFFFFA9D8u; // 801D6148
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 801D614C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D6150
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D6154
  return; // 801D6158
}

// ExPPC_FindExceptionFragment__FPcP12FragmentInfo
void f_801D615C(Ctx* __restrict c) {
  trace_call(0x801D615Cu);
  c->r[6]=0u+0x802E0000u; // 801D615C
  c->r[0]=0u+0x00000020u; // 801D6160
  c->r[6]=c->r[6]+0xFFFFA9D8u; // 801D6164
  c->ctr=c->r[0]; // 801D6168
L_801D616C:;
  c->r[0]=R32(c->r[6]+0x00000008u); // 801D616C
  cmps(c,0,(int32_t)c->r[0],0); // 801D6170
  if (crb(c,2)) { goto L_801D61E4; } // 801D6174
  c->r[7]=R32(c->r[6]+0x00000000u); // 801D6178
L_801D617C:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801D617C
  cmps(c,0,(int32_t)c->r[0],0); // 801D6180
  if (crb(c,2)) { goto L_801D61E4; } // 801D6184
  c->r[5]=R32(c->r[7]+0x00000008u); // 801D6188
  cmpu(c,0,c->r[3],c->r[5]); // 801D618C
  if (crb(c,0)) { goto L_801D61DC; } // 801D6190
  c->r[0]=c->r[5]+c->r[0]; // 801D6194
  cmpu(c,0,c->r[3],c->r[0]); // 801D6198
  if (!crb(c,0)) { goto L_801D61DC; } // 801D619C
  c->r[3]=R32(c->r[7]+0x00000000u); // 801D61A0
  c->r[0]=0u+0x00000000u; // 801D61A4
  W32(c->r[4]+0x00000000u,c->r[3]); // 801D61A8
  c->r[3]=0u+0x00000001u; // 801D61AC
  c->r[5]=R32(c->r[7]+0x00000004u); // 801D61B0
  W32(c->r[4]+0x00000004u,c->r[5]); // 801D61B4
  W32(c->r[4]+0x00000008u,c->r[0]); // 801D61B8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801D61BC
  W32(c->r[4]+0x00000010u,c->r[0]); // 801D61C0
  W32(c->r[4]+0x00000014u,c->r[0]); // 801D61C4
  c->r[0]=R32(c->r[6]+0x00000004u); // 801D61C8
  W32(c->r[4]+0x00000018u,c->r[0]); // 801D61CC
  c->r[0]=R32(c->r[6]+0x00000008u); // 801D61D0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801D61D4
  return; // 801D61D8
L_801D61DC:;
  c->r[7]=c->r[7]+0x00000010u; // 801D61DC
  IRQCHK(c); goto L_801D617C; // 801D61E0
L_801D61E4:;
  c->r[6]=c->r[6]+0x0000000Cu; // 801D61E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D616C; } // 801D61E8
  c->r[3]=0u+0x00000000u; // 801D61EC
  return; // 801D61F0
}

// ExPPC_FindExceptionRecord__FPcP15MWExceptionInfo
void f_801D61F4(Ctx* __restrict c) {
  trace_call(0x801D61F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D61F4
  c->r[0]=c->lr; // 801D61F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D61FC
  c->r[0]=0u+0x00000000u; // 801D6200
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D6204
  c->r[31]=c->r[4]|c->r[4]; // 801D6208
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D620C
  c->r[30]=c->r[3]|c->r[3]; // 801D6210
  W32(c->r[4]+0x00000000u,c->r[0]); // 801D6214
  W32(c->r[4]+0x00000008u,c->r[0]); // 801D6218
  c->r[4]=c->r[1]+0x00000008u; // 801D621C
  c->lr=0x801D6224u; f_801D615C(c); // 801D6220
  cmps(c,0,(int32_t)c->r[3],0); // 801D6224
  if (crb(c,2)) { goto L_801D638C; } // 801D6228
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D622C
  c->r[3]=0u+0x2AAB0000u; // 801D6230
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801D6234
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801D6238
  c->r[7]=0u+0x00000000u; // 801D623C
  c->r[0]=R32(c->r[1]+0x00000018u); // 801D6240
  W32(c->r[31]+0x00000010u,c->r[0]); // 801D6244
  c->r[0]=R32(c->r[1]+0x00000020u); // 801D6248
  W32(c->r[31]+0x00000014u,c->r[0]); // 801D624C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801D6250
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D6254
  c->r[4]=R32(c->r[1]+0x00000010u); // 801D6258
  c->r[0]=c->r[0]-c->r[5]; // 801D625C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801D6260
  c->r[0]=c->r[30]-c->r[4]; // 801D6264
  c->r[3]=sraw(c,c->r[3],1); // 801D6268
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801D626C
  c->r[9]=c->r[3]+c->r[4]; // 801D6270
L_801D6274:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[9]); // 801D6274
  if (crb(c,1)) { goto L_801D638C; } // 801D6278
  c->r[4]=c->r[7]+c->r[9]; // 801D627C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801D6280
  c->r[3]=c->r[3]+c->r[4]; // 801D6284
  c->r[8]=sraw(c,c->r[3],1); // 801D6288
  c->r[3]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 801D628C
  c->r[4]=R32(c->r[5]+c->r[3]); // 801D6290
  c->r[6]=c->r[5]+c->r[3]; // 801D6294
  cmpu(c,0,c->r[0],c->r[4]); // 801D6298
  if (!crb(c,0)) { goto L_801D62A8; } // 801D629C
  c->r[9]=c->r[8]+0xFFFFFFFFu; // 801D62A0
  IRQCHK(c); goto L_801D6274; // 801D62A4
L_801D62A8:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 801D62A8
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801D62AC
  c->r[3]=c->r[4]+c->r[3]; // 801D62B0
  cmpu(c,0,c->r[0],c->r[3]); // 801D62B4
  if (!crb(c,1)) { goto L_801D62C4; } // 801D62B8
  c->r[7]=c->r[8]+0x00000001u; // 801D62BC
  IRQCHK(c); goto L_801D6274; // 801D62C0
L_801D62C4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801D62C4
  c->r[3]=c->r[3]+c->r[4]; // 801D62C8
  W32(c->r[31]+0x00000004u,c->r[3]); // 801D62CC
  c->r[3]=R32(c->r[6]+0x00000004u); // 801D62D0
  c->r[3]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[3]); // 801D62D4
  if (crb(c,2)) { goto L_801D62E4; } // 801D62D8
  c->r[5]=c->r[6]+0x00000008u; // 801D62DC
  goto L_801D62F0; // 801D62E0
L_801D62E4:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 801D62E4
  c->r[3]=R32(c->r[6]+0x00000008u); // 801D62E8
  c->r[5]=c->r[4]+c->r[3]; // 801D62EC
L_801D62F0:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 801D62F0
  c->r[3]=R16(c->r[5]+0x00000000u); // 801D62F4
  c->r[4]=R32(c->r[6]+0x00000000u); // 801D62F8
  c->r[3]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[3]); // 801D62FC
  c->r[0]=c->r[0]-c->r[4]; // 801D6300
  if (crb(c,2)) { goto L_801D6350; } // 801D6304
  c->r[6]=c->r[5]+0x00000004u; // 801D6308
  goto L_801D6340; // 801D630C
L_801D6310:;
  c->r[3]=R16(c->r[6]+0x00000004u); // 801D6310
  cmpu(c,0,c->r[4],c->r[0]); // 801D6314
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801D6318
  c->r[3]=c->r[4]+c->r[3]; // 801D631C
  if (crb(c,1)) { goto L_801D633C; } // 801D6320
  cmpu(c,0,c->r[3],c->r[0]); // 801D6324
  if (crb(c,0)) { goto L_801D633C; } // 801D6328
  c->r[0]=R16(c->r[6]+0x00000006u); // 801D632C
  c->r[0]=c->r[5]+c->r[0]; // 801D6330
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D6334
  goto L_801D638C; // 801D6338
L_801D633C:;
  c->r[6]=c->r[6]+0x00000008u; // 801D633C
L_801D6340:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 801D6340
  cmps(c,0,(int32_t)c->r[4],0); // 801D6344
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6310; } // 801D6348
  goto L_801D638C; // 801D634C
L_801D6350:;
  c->r[4]=c->r[5]+0x00000002u; // 801D6350
  goto L_801D6380; // 801D6354
L_801D6358:;
  cmpu(c,0,c->r[3],c->r[0]); // 801D6358
  if (crb(c,1)) { goto L_801D637C; } // 801D635C
  c->r[3]=R16(c->r[4]+0x00000002u); // 801D6360
  cmpu(c,0,c->r[3],c->r[0]); // 801D6364
  if (crb(c,0)) { goto L_801D637C; } // 801D6368
  c->r[0]=R16(c->r[4]+0x00000004u); // 801D636C
  c->r[0]=c->r[5]+c->r[0]; // 801D6370
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D6374
  goto L_801D638C; // 801D6378
L_801D637C:;
  c->r[4]=c->r[4]+0x00000006u; // 801D637C
L_801D6380:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 801D6380
  cmps(c,0,(int32_t)c->r[3],0); // 801D6384
  if (!crb(c,2)) { IRQCHK(c); goto L_801D6358; } // 801D6388
L_801D638C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D638C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D6390
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D6394
  c->lr=c->r[0]; // 801D6398
  c->r[1]=c->r[1]+0x00000030u; // 801D639C
  return; // 801D63A0
}

// ExPPC_NextAction__FP14ActionIterator
void f_801D63A4(Ctx* __restrict c) {
  trace_call(0x801D63A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D63A4
  c->r[0]=c->lr; // 801D63A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D63AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D63B0
  c->r[31]=c->r[3]|c->r[3]; // 801D63B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D63B8
L_801D63BC:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801D63BC
  cmps(c,0,(int32_t)c->r[4],0); // 801D63C0
  if (crb(c,2)) { goto L_801D63D4; } // 801D63C4
  c->r[5]=R8(c->r[4]+0x00000000u); // 801D63C8
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801D63CC
  if (crb(c,2)) { goto L_801D6444; } // 801D63D0
L_801D63D4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D63D4
  c->r[4]=R32(c->r[31]+0x00000018u); // 801D63D8
  c->r[3]=R16(c->r[3]+0x00000000u); // 801D63DC
  c->r[30]=R32(c->r[4]+0x00000000u); // 801D63E0
  c->r[0]=sraw(c,c->r[3],11); cr0(c,c->r[0]); // 801D63E4
  if (crb(c,2)) { goto L_801D63FC; } // 801D63E8
  c->r[0]=rotl(c->r[3],29)&0x000000F8u; // 801D63EC
  c->r[3]=c->r[30]-c->r[0]; // 801D63F0
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 801D63F4
  W32(c->r[31]+0x00000020u,c->r[0]); // 801D63F8
L_801D63FC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801D63FC
  c->r[4]=c->r[31]|c->r[31]; // 801D6400
  c->lr=0x801D6408u; f_801D61F4(c); // 801D6404
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D6408
  cmps(c,0,(int32_t)c->r[0],0); // 801D640C
  if (!crb(c,2)) { goto L_801D6418; } // 801D6410
  c->lr=0x801D6418u; f_801D5050(c); // 801D6414
L_801D6418:;
  W32(c->r[31]+0x00000018u,c->r[30]); // 801D6418
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D641C
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D6420
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801D6424
  if (crb(c,2)) { goto L_801D6430; } // 801D6428
  c->r[30]=R32(c->r[31]+0x00000020u); // 801D642C
L_801D6430:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D6430
  W32(c->r[31]+0x0000001Cu,c->r[30]); // 801D6434
  cmps(c,0,(int32_t)c->r[0],0); // 801D6438
  if (crb(c,2)) { IRQCHK(c); goto L_801D63BC; } // 801D643C
  goto L_801D6510; // 801D6440
L_801D6444:;
  cmpu(c,0,c->r[5],0x00000010u); // 801D6444
  if (crb(c,1)) { goto L_801D650C; } // 801D6448
  c->r[3]=0u+0x80250000u; // 801D644C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D6450
  c->r[3]=c->r[3]+0xFFFF9828u; // 801D6454
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D6458
  c->ctr=c->r[3]; // 801D645C
  if (true) { switch (c->ctr) { case 0x801D6464u: goto L_801D6464; case 0x801D6470u: goto L_801D6470; case 0x801D647Cu: goto L_801D647C; case 0x801D6488u: goto L_801D6488; case 0x801D6494u: goto L_801D6494; case 0x801D64A0u: goto L_801D64A0; case 0x801D64ACu: goto L_801D64AC; case 0x801D64B8u: goto L_801D64B8; case 0x801D64C4u: goto L_801D64C4; case 0x801D64D0u: goto L_801D64D0; case 0x801D64DCu: goto L_801D64DC; case 0x801D64E8u: goto L_801D64E8; case 0x801D64F4u: goto L_801D64F4; case 0x801D650Cu: goto L_801D650C; default: break; } dispatch(c,c->ctr); return; } // 801D6460
L_801D6464:;
  c->r[0]=c->r[4]+0x00000008u; // 801D6464
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D6468
  goto L_801D6510; // 801D646C
L_801D6470:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801D6470
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D6474
  goto L_801D6510; // 801D6478
L_801D647C:;
  c->r[0]=c->r[4]+0x00000008u; // 801D647C
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D6480
  goto L_801D6510; // 801D6484
L_801D6488:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801D6488
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D648C
  goto L_801D6510; // 801D6490
L_801D6494:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801D6494
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D6498
  goto L_801D6510; // 801D649C
L_801D64A0:;
  c->r[0]=c->r[4]+0x00000010u; // 801D64A0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D64A4
  goto L_801D6510; // 801D64A8
L_801D64AC:;
  c->r[0]=c->r[4]+0x00000014u; // 801D64AC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D64B0
  goto L_801D6510; // 801D64B4
L_801D64B8:;
  c->r[0]=c->r[4]+0x00000008u; // 801D64B8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D64BC
  goto L_801D6510; // 801D64C0
L_801D64C4:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801D64C4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D64C8
  goto L_801D6510; // 801D64CC
L_801D64D0:;
  c->r[0]=c->r[4]+0x0000000Cu; // 801D64D0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D64D4
  goto L_801D6510; // 801D64D8
L_801D64DC:;
  c->r[0]=c->r[4]+0x00000010u; // 801D64DC
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D64E0
  goto L_801D6510; // 801D64E4
L_801D64E8:;
  c->r[0]=c->r[4]+0x00000004u; // 801D64E8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D64EC
  goto L_801D6510; // 801D64F0
L_801D64F4:;
  c->r[0]=R16(c->r[4]+0x00000002u); // 801D64F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D64F8
  c->r[3]=c->r[0]+c->r[4]; // 801D64FC
  c->r[0]=c->r[3]+0x0000000Cu; // 801D6500
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D6504
  goto L_801D6510; // 801D6508
L_801D650C:;
  c->lr=0x801D6510u; f_801D5050(c); // 801D650C
L_801D6510:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 801D6510
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D6514
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 801D6518
  cmpu(c,0,c->r[3],0x00000001u); // 801D651C
  if (!crb(c,2)) { goto L_801D653C; } // 801D6520
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D6524
  c->r[0]=R16(c->r[4]+0x00000002u); // 801D6528
  c->r[3]=c->r[3]+c->r[0]; // 801D652C
  W32(c->r[31]+0x00000008u,c->r[3]); // 801D6530
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D6534
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 801D6538
L_801D653C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D653C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6540
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6544
  c->lr=c->r[0]; // 801D6548
  c->r[1]=c->r[1]+0x00000010u; // 801D654C
  return; // 801D6550
}

// ExPPC_PopStackFrame__FP12ThrowContextP15MWExceptionInfo
void f_801D6554(Ctx* __restrict c) {
  trace_call(0x801D6554u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6554
  c->r[0]=c->lr; // 801D6558
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D655C
  c->r[11]=c->r[1]+0x00000020u; // 801D6560
  c->lr=0x801D6568u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801D6564
  c->r[5]=R32(c->r[4]+0x00000000u); // 801D6568
  c->r[6]=R32(c->r[3]+0x00000284u); // 801D656C
  c->r[0]=R16(c->r[5]+0x00000000u); // 801D6570
  c->r[7]=R32(c->r[6]+0x00000000u); // 801D6574
  c->r[5]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[5]); // 801D6578
  c->r[12]=rotl(c->r[0],26)&0x0000001Fu; // 801D657C
  if (crb(c,2)) { goto L_801D6590; } // 801D6580
  c->r[0]=rotl(c->r[12],4)&0xFFFFFFF0u; // 801D6584
  c->r[8]=c->r[7]-c->r[0]; // 801D6588
  goto L_801D6598; // 801D658C
L_801D6590:;
  c->r[0]=rotl(c->r[12],3)&0xFFFFFFF8u; // 801D6590
  c->r[8]=c->r[7]-c->r[0]; // 801D6594
L_801D6598:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D6598
  if (crb(c,2)) { goto L_801D67B4; } // 801D659C
  c->r[5]=addc(c,~c->r[12],0x00000020u,1); // 801D65A0
  c->r[6]=0u+0x00000000u; // 801D65A4
  cmps(c,0,(int32_t)c->r[5],32); // 801D65A8
  c->r[9]=0u+0x00000000u; // 801D65AC
  if (!crb(c,0)) { goto L_801D6914; } // 801D65B0
  cmps(c,0,(int32_t)c->r[12],8); // 801D65B4
  if (!crb(c,1)) { goto L_801D676C; } // 801D65B8
  cmps(c,0,(int32_t)c->r[5],33); // 801D65BC
  c->r[10]=0u+0x00000000u; // 801D65C0
  c->r[11]=0u+0x00000000u; // 801D65C4
  c->r[0]=0u+0x00000000u; // 801D65C8
  if (!crb(c,0)) { goto L_801D65D4; } // 801D65CC
  c->r[0]=0u+0x00000001u; // 801D65D0
L_801D65D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D65D4
  if (crb(c,2)) { goto L_801D65EC; } // 801D65D8
  c->r[0]=c->r[5]+0x80000000u; // 801D65DC
  cmpu(c,0,c->r[0],0x00000000u); // 801D65E0
  if (crb(c,2)) { goto L_801D65EC; } // 801D65E4
  c->r[11]=0u+0x00000001u; // 801D65E8
L_801D65EC:;
  cmps(c,0,(int32_t)c->r[11],0); // 801D65EC
  if (crb(c,2)) { goto L_801D661C; } // 801D65F0
  c->r[0]=0u-c->r[5]; // 801D65F4
  c->r[11]=0u+0x00000001u; // 801D65F8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801D65FC
  if (!crb(c,2)) { goto L_801D6610; } // 801D6600
  c->r[0]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[0]); // 801D6604
  if (crb(c,2)) { goto L_801D6610; } // 801D6608
  c->r[11]=0u+0x00000000u; // 801D660C
L_801D6610:;
  cmps(c,0,(int32_t)c->r[11],0); // 801D6610
  if (crb(c,2)) { goto L_801D661C; } // 801D6614
  c->r[10]=0u+0x00000001u; // 801D6618
L_801D661C:;
  cmps(c,0,(int32_t)c->r[10],0); // 801D661C
  if (crb(c,2)) { goto L_801D676C; } // 801D6620
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 801D6624
  c->r[10]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801D6628
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D662C
  c->r[29]=c->r[3]+c->r[10]; // 801D6630
  c->ctr=c->r[0]; // 801D6634
  cmps(c,0,(int32_t)c->r[5],24); // 801D6638
  if (!crb(c,0)) { goto L_801D676C; } // 801D663C
L_801D6640:;
  c->r[11]=c->r[8]+c->r[9]; // 801D6640
  c->r[0]=c->r[6]+0x00000001u; // 801D6644
  {uint32_t ea=c->r[11]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6648
  c->r[10]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D664C
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 801D6650
  c->r[28]=c->r[8]+c->r[10]; // 801D6654
  c->r[0]=c->r[6]+0x00000002u; // 801D6658
  c->r[10]=c->r[6]+0x00000006u; // 801D665C
  {uint32_t ea=c->r[11]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6660
  c->r[31]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D6664
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D6668
  c->r[0]=c->r[6]+0x00000003u; // 801D666C
  c->r[30]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D6670
  c->r[10]=rotl(c->r[10],4)&0xFFFFFFF0u; // 801D6674
  {uint32_t ea=c->r[8]+c->r[9]; c->f[0]=RF64(ea);} // 801D6678
  c->r[0]=c->r[6]+0x00000004u; // 801D667C
  {uint32_t ea=c->r[29]+0x00000000u; WF64(ea,c->f[0]);} // 801D6680
  c->r[12]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D6684
  c->r[0]=c->r[6]+0x00000005u; // 801D6688
  c->r[31]=c->r[8]+c->r[31]; // 801D668C
  {uint32_t ea=c->r[28]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6690
  c->r[11]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D6694
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[0]);} // 801D6698
  c->r[0]=c->r[6]+0x00000007u; // 801D669C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801D66A0
  c->r[30]=c->r[8]+c->r[30]; // 801D66A4
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D66A8
  c->r[12]=c->r[8]+c->r[12]; // 801D66AC
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 801D66B0
  c->r[11]=c->r[8]+c->r[11]; // 801D66B4
  c->r[10]=c->r[8]+c->r[10]; // 801D66B8
  c->r[27]=c->r[8]+c->r[0]; // 801D66BC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=RF64(ea);} // 801D66C0
  c->r[6]=c->r[6]+0x00000008u; // 801D66C4
  {uint32_t ea=c->r[29]+0x00000010u; WF64(ea,c->f[0]);} // 801D66C8
  c->r[9]=c->r[9]+0x00000080u; // 801D66CC
  c->r[5]=c->r[5]+0x00000008u; // 801D66D0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D66D4
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 801D66D8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D66DC
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 801D66E0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=RF64(ea);} // 801D66E4
  {uint32_t ea=c->r[29]+0x00000020u; WF64(ea,c->f[0]);} // 801D66E8
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D66EC
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 801D66F0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D66F4
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 801D66F8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=RF64(ea);} // 801D66FC
  {uint32_t ea=c->r[29]+0x00000030u; WF64(ea,c->f[0]);} // 801D6700
  {uint32_t ea=c->r[12]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6704
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 801D6708
  {uint32_t ea=c->r[12]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D670C
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[0]);} // 801D6710
  {uint32_t ea=c->r[12]+0x00000000u; c->f[0]=RF64(ea);} // 801D6714
  {uint32_t ea=c->r[29]+0x00000040u; WF64(ea,c->f[0]);} // 801D6718
  {uint32_t ea=c->r[11]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D671C
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 801D6720
  {uint32_t ea=c->r[11]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6724
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 801D6728
  {uint32_t ea=c->r[11]+0x00000000u; c->f[0]=RF64(ea);} // 801D672C
  {uint32_t ea=c->r[29]+0x00000050u; WF64(ea,c->f[0]);} // 801D6730
  {uint32_t ea=c->r[10]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6734
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 801D6738
  {uint32_t ea=c->r[10]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D673C
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[0]);} // 801D6740
  {uint32_t ea=c->r[10]+0x00000000u; c->f[0]=RF64(ea);} // 801D6744
  {uint32_t ea=c->r[29]+0x00000060u; WF64(ea,c->f[0]);} // 801D6748
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D674C
  {uint32_t ea=c->r[29]+0x00000078u; WF32(ea,c->f[0]);} // 801D6750
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6754
  {uint32_t ea=c->r[29]+0x0000007Cu; WF32(ea,c->f[0]);} // 801D6758
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 801D675C
  {uint32_t ea=c->r[29]+0x00000070u; WF64(ea,c->f[0]);} // 801D6760
  c->r[29]=c->r[29]+0x00000080u; // 801D6764
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6640; } // 801D6768
L_801D676C:;
  c->r[9]=rotl(c->r[6],4)&0xFFFFFFF0u; // 801D676C
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801D6770
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 801D6774
  c->r[9]=c->r[8]+c->r[9]; // 801D6778
  c->r[6]=c->r[3]+c->r[6]; // 801D677C
  c->ctr=c->r[0]; // 801D6780
  cmps(c,0,(int32_t)c->r[5],32); // 801D6784
  if (!crb(c,0)) { goto L_801D6914; } // 801D6788
L_801D678C:;
  {uint32_t ea=c->r[9]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801D678C
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 801D6790
  {uint32_t ea=c->r[9]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801D6794
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 801D6798
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=RF64(ea);} // 801D679C
  c->r[9]=c->r[9]+0x00000010u; // 801D67A0
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[0]);} // 801D67A4
  c->r[6]=c->r[6]+0x00000010u; // 801D67A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D678C; } // 801D67AC
  goto L_801D6914; // 801D67B0
L_801D67B4:;
  c->r[5]=addc(c,~c->r[12],0x00000020u,1); // 801D67B4
  c->r[6]=0u+0x00000000u; // 801D67B8
  cmps(c,0,(int32_t)c->r[5],32); // 801D67BC
  c->r[9]=0u+0x00000000u; // 801D67C0
  if (!crb(c,0)) { goto L_801D6914; } // 801D67C4
  cmps(c,0,(int32_t)c->r[12],8); // 801D67C8
  if (!crb(c,1)) { goto L_801D68E0; } // 801D67CC
  cmps(c,0,(int32_t)c->r[5],33); // 801D67D0
  c->r[10]=0u+0x00000000u; // 801D67D4
  c->r[11]=0u+0x00000000u; // 801D67D8
  c->r[0]=0u+0x00000000u; // 801D67DC
  if (!crb(c,0)) { goto L_801D67E8; } // 801D67E0
  c->r[0]=0u+0x00000001u; // 801D67E4
L_801D67E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D67E8
  if (crb(c,2)) { goto L_801D6800; } // 801D67EC
  c->r[0]=c->r[5]+0x80000000u; // 801D67F0
  cmpu(c,0,c->r[0],0x00000000u); // 801D67F4
  if (crb(c,2)) { goto L_801D6800; } // 801D67F8
  c->r[11]=0u+0x00000001u; // 801D67FC
L_801D6800:;
  cmps(c,0,(int32_t)c->r[11],0); // 801D6800
  if (crb(c,2)) { goto L_801D6830; } // 801D6804
  c->r[0]=0u-c->r[5]; // 801D6808
  c->r[11]=0u+0x00000001u; // 801D680C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801D6810
  if (!crb(c,2)) { goto L_801D6824; } // 801D6814
  c->r[0]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[0]); // 801D6818
  if (crb(c,2)) { goto L_801D6824; } // 801D681C
  c->r[11]=0u+0x00000000u; // 801D6820
L_801D6824:;
  cmps(c,0,(int32_t)c->r[11],0); // 801D6824
  if (crb(c,2)) { goto L_801D6830; } // 801D6828
  c->r[10]=0u+0x00000001u; // 801D682C
L_801D6830:;
  cmps(c,0,(int32_t)c->r[10],0); // 801D6830
  if (crb(c,2)) { goto L_801D68E0; } // 801D6834
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 801D6838
  c->r[10]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801D683C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D6840
  c->r[31]=c->r[3]+c->r[10]; // 801D6844
  c->ctr=c->r[0]; // 801D6848
  cmps(c,0,(int32_t)c->r[5],24); // 801D684C
  if (!crb(c,0)) { goto L_801D68E0; } // 801D6850
L_801D6854:;
  {uint32_t ea=c->r[8]+c->r[9]; c->f[0]=RF64(ea);} // 801D6854
  c->r[0]=c->r[6]+0x00000001u; // 801D6858
  {uint32_t ea=c->r[31]+0x00000000u; WF64(ea,c->f[0]);} // 801D685C
  c->r[10]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D6860
  c->r[0]=c->r[6]+0x00000002u; // 801D6864
  c->r[30]=c->r[6]+0x00000003u; // 801D6868
  {uint32_t ea=c->r[8]+c->r[10]; c->f[0]=RF64(ea);} // 801D686C
  c->r[12]=c->r[6]+0x00000004u; // 801D6870
  {uint32_t ea=c->r[31]+0x00000010u; WF64(ea,c->f[0]);} // 801D6874
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D6878
  c->r[11]=c->r[6]+0x00000005u; // 801D687C
  c->r[10]=c->r[6]+0x00000006u; // 801D6880
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 801D6884
  c->r[0]=c->r[6]+0x00000007u; // 801D6888
  {uint32_t ea=c->r[31]+0x00000020u; WF64(ea,c->f[0]);} // 801D688C
  c->r[30]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801D6890
  c->r[12]=rotl(c->r[12],3)&0xFFFFFFF8u; // 801D6894
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801D6898
  {uint32_t ea=c->r[8]+c->r[30]; c->f[0]=RF64(ea);} // 801D689C
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 801D68A0
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[0]);} // 801D68A4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D68A8
  c->r[6]=c->r[6]+0x00000008u; // 801D68AC
  c->r[9]=c->r[9]+0x00000040u; // 801D68B0
  {uint32_t ea=c->r[8]+c->r[12]; c->f[0]=RF64(ea);} // 801D68B4
  c->r[5]=c->r[5]+0x00000008u; // 801D68B8
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[0]);} // 801D68BC
  {uint32_t ea=c->r[8]+c->r[11]; c->f[0]=RF64(ea);} // 801D68C0
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[0]);} // 801D68C4
  {uint32_t ea=c->r[8]+c->r[10]; c->f[0]=RF64(ea);} // 801D68C8
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[0]);} // 801D68CC
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 801D68D0
  {uint32_t ea=c->r[31]+0x00000070u; WF64(ea,c->f[0]);} // 801D68D4
  c->r[31]=c->r[31]+0x00000080u; // 801D68D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6854; } // 801D68DC
L_801D68E0:;
  c->r[9]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801D68E0
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801D68E4
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 801D68E8
  c->r[9]=c->r[8]+c->r[9]; // 801D68EC
  c->r[6]=c->r[3]+c->r[6]; // 801D68F0
  c->ctr=c->r[0]; // 801D68F4
  cmps(c,0,(int32_t)c->r[5],32); // 801D68F8
  if (!crb(c,0)) { goto L_801D6914; } // 801D68FC
L_801D6900:;
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=RF64(ea);} // 801D6900
  c->r[9]=c->r[9]+0x00000008u; // 801D6904
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[0]);} // 801D6908
  c->r[6]=c->r[6]+0x00000010u; // 801D690C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6900; } // 801D6910
L_801D6914:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801D6914
  c->r[6]=0u+0x00000000u; // 801D6918
  c->r[9]=0u+0x00000000u; // 801D691C
  c->r[0]=R16(c->r[4]+0x00000000u); // 801D6920
  c->r[11]=sraw(c,c->r[0],11); // 801D6924
  c->r[5]=addc(c,~c->r[11],0x00000020u,1); // 801D6928
  cmps(c,0,(int32_t)c->r[5],32); // 801D692C
  c->r[0]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801D6930
  c->r[8]=c->r[8]-c->r[0]; // 801D6934
  if (!crb(c,0)) { goto L_801D6A88; } // 801D6938
  cmps(c,0,(int32_t)c->r[11],8); // 801D693C
  if (!crb(c,1)) { goto L_801D6A54; } // 801D6940
  cmps(c,0,(int32_t)c->r[5],33); // 801D6944
  c->r[4]=0u+0x00000000u; // 801D6948
  c->r[10]=0u+0x00000000u; // 801D694C
  c->r[0]=0u+0x00000000u; // 801D6950
  if (!crb(c,0)) { goto L_801D695C; } // 801D6954
  c->r[0]=0u+0x00000001u; // 801D6958
L_801D695C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D695C
  if (crb(c,2)) { goto L_801D6974; } // 801D6960
  c->r[0]=c->r[5]+0x80000000u; // 801D6964
  cmpu(c,0,c->r[0],0x00000000u); // 801D6968
  if (crb(c,2)) { goto L_801D6974; } // 801D696C
  c->r[10]=0u+0x00000001u; // 801D6970
L_801D6974:;
  cmps(c,0,(int32_t)c->r[10],0); // 801D6974
  if (crb(c,2)) { goto L_801D69A4; } // 801D6978
  c->r[0]=0u-c->r[5]; // 801D697C
  c->r[10]=0u+0x00000001u; // 801D6980
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801D6984
  if (!crb(c,2)) { goto L_801D6998; } // 801D6988
  c->r[0]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[0]); // 801D698C
  if (crb(c,2)) { goto L_801D6998; } // 801D6990
  c->r[10]=0u+0x00000000u; // 801D6994
L_801D6998:;
  cmps(c,0,(int32_t)c->r[10],0); // 801D6998
  if (crb(c,2)) { goto L_801D69A4; } // 801D699C
  c->r[4]=0u+0x00000001u; // 801D69A0
L_801D69A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D69A4
  if (crb(c,2)) { goto L_801D6A54; } // 801D69A8
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 801D69AC
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D69B0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801D69B4
  c->r[4]=c->r[3]+c->r[4]; // 801D69B8
  c->ctr=c->r[0]; // 801D69BC
  cmps(c,0,(int32_t)c->r[5],24); // 801D69C0
  if (!crb(c,0)) { goto L_801D6A54; } // 801D69C4
L_801D69C8:;
  c->r[10]=R32(c->r[8]+c->r[9]); // 801D69C8
  c->r[31]=c->r[6]+0x00000003u; // 801D69CC
  c->r[0]=c->r[6]+0x00000001u; // 801D69D0
  W32(c->r[4]+0x00000200u,c->r[10]); // 801D69D4
  c->r[10]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D69D8
  c->r[12]=c->r[6]+0x00000004u; // 801D69DC
  c->r[10]=R32(c->r[8]+c->r[10]); // 801D69E0
  c->r[0]=c->r[6]+0x00000002u; // 801D69E4
  W32(c->r[4]+0x00000204u,c->r[10]); // 801D69E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D69EC
  c->r[11]=c->r[6]+0x00000005u; // 801D69F0
  c->r[10]=c->r[6]+0x00000006u; // 801D69F4
  c->r[30]=R32(c->r[8]+c->r[0]); // 801D69F8
  c->r[0]=c->r[6]+0x00000007u; // 801D69FC
  W32(c->r[4]+0x00000208u,c->r[30]); // 801D6A00
  c->r[31]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801D6A04
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 801D6A08
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801D6A0C
  c->r[31]=R32(c->r[8]+c->r[31]); // 801D6A10
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801D6A14
  W32(c->r[4]+0x0000020Cu,c->r[31]); // 801D6A18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6A1C
  c->r[6]=c->r[6]+0x00000008u; // 801D6A20
  c->r[9]=c->r[9]+0x00000020u; // 801D6A24
  c->r[12]=R32(c->r[8]+c->r[12]); // 801D6A28
  c->r[5]=c->r[5]+0x00000008u; // 801D6A2C
  W32(c->r[4]+0x00000210u,c->r[12]); // 801D6A30
  c->r[11]=R32(c->r[8]+c->r[11]); // 801D6A34
  W32(c->r[4]+0x00000214u,c->r[11]); // 801D6A38
  c->r[10]=R32(c->r[8]+c->r[10]); // 801D6A3C
  W32(c->r[4]+0x00000218u,c->r[10]); // 801D6A40
  c->r[0]=R32(c->r[8]+c->r[0]); // 801D6A44
  W32(c->r[4]+0x0000021Cu,c->r[0]); // 801D6A48
  c->r[4]=c->r[4]+0x00000020u; // 801D6A4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D69C8; } // 801D6A50
L_801D6A54:;
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D6A54
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801D6A58
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 801D6A5C
  c->r[6]=c->r[8]+c->r[6]; // 801D6A60
  c->r[4]=c->r[3]+c->r[4]; // 801D6A64
  c->ctr=c->r[0]; // 801D6A68
  cmps(c,0,(int32_t)c->r[5],32); // 801D6A6C
  if (!crb(c,0)) { goto L_801D6A88; } // 801D6A70
L_801D6A74:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801D6A74
  c->r[6]=c->r[6]+0x00000004u; // 801D6A78
  W32(c->r[4]+0x00000200u,c->r[0]); // 801D6A7C
  c->r[4]=c->r[4]+0x00000004u; // 801D6A80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6A74; } // 801D6A84
L_801D6A88:;
  W32(c->r[3]+0x00000284u,c->r[7]); // 801D6A88
  c->r[11]=c->r[1]+0x00000020u; // 801D6A8C
  c->r[3]=R32(c->r[7]+0x00000004u); // 801D6A90
  c->lr=0x801D6A98u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801D6A94
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D6A98
  c->lr=c->r[0]; // 801D6A9C
  c->r[1]=c->r[1]+0x00000020u; // 801D6AA0
  return; // 801D6AA4
}

// ExPPC_UnwindStack__FP12ThrowContextP15MWExceptionInfoPv
void f_801D6AA8(Ctx* __restrict c) {
  trace_call(0x801D6AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6AA8
  c->r[0]=c->lr; // 801D6AAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D6AB0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D6AB4
  c->r[26]=c->r[3]|c->r[3]; // 801D6AB8
  c->r[27]=c->r[4]|c->r[4]; // 801D6ABC
  c->r[28]=c->r[5]|c->r[5]; // 801D6AC0
  c->r[31]=0u+0x80250000u; // 801D6AC4
  c->r[25]=0u+0x00000000u; // 801D6AC8
L_801D6ACC:;
  c->r[30]=R32(c->r[27]+0x00000008u); // 801D6ACC
  cmps(c,0,(int32_t)c->r[30],0); // 801D6AD0
  if (!crb(c,2)) { goto L_801D6B20; } // 801D6AD4
  c->r[3]=c->r[26]|c->r[26]; // 801D6AD8
  c->r[4]=c->r[27]|c->r[27]; // 801D6ADC
  c->lr=0x801D6AE4u; f_801D6554(c); // 801D6AE0
  c->r[4]=c->r[27]|c->r[27]; // 801D6AE4
  c->lr=0x801D6AECu; f_801D61F4(c); // 801D6AE8
  c->r[0]=R32(c->r[27]+0x00000000u); // 801D6AEC
  cmps(c,0,(int32_t)c->r[0],0); // 801D6AF0
  if (!crb(c,2)) { goto L_801D6AFC; } // 801D6AF4
  c->lr=0x801D6AFCu; f_801D5050(c); // 801D6AF8
L_801D6AFC:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D6AFC
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D6B00
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801D6B04
  if (crb(c,2)) { goto L_801D6B14; } // 801D6B08
  c->r[0]=R32(c->r[26]+0x0000027Cu); // 801D6B0C
  goto L_801D6B18; // 801D6B10
L_801D6B14:;
  c->r[0]=R32(c->r[26]+0x00000284u); // 801D6B14
L_801D6B18:;
  W32(c->r[26]+0x00000288u,c->r[0]); // 801D6B18
  IRQCHK(c); goto L_801D6ACC; // 801D6B1C
L_801D6B20:;
  c->r[29]=R8(c->r[30]+0x00000000u); // 801D6B20
  c->r[0]=rotl(c->r[29],0)&0x0000007Fu; // 801D6B24
  cmpu(c,0,c->r[0],0x00000010u); // 801D6B28
  if (crb(c,1)) { goto L_801D6F8C; } // 801D6B2C
  c->r[3]=c->r[31]+0xFFFF986Cu; // 801D6B30
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6B34
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D6B38
  c->ctr=c->r[3]; // 801D6B3C
  if (true) { switch (c->ctr) { case 0x801D6B44u: goto L_801D6B44; case 0x801D6B58u: goto L_801D6B58; case 0x801D6B84u: goto L_801D6B84; case 0x801D6BE8u: goto L_801D6BE8; case 0x801D6C34u: goto L_801D6C34; case 0x801D6C88u: goto L_801D6C88; case 0x801D6CDCu: goto L_801D6CDC; case 0x801D6D30u: goto L_801D6D30; case 0x801D6DB8u: goto L_801D6DB8; case 0x801D6E34u: goto L_801D6E34; case 0x801D6E7Cu: goto L_801D6E7C; case 0x801D6EF8u: goto L_801D6EF8; case 0x801D6F0Cu: goto L_801D6F0C; case 0x801D6F20u: goto L_801D6F20; case 0x801D6F6Cu: goto L_801D6F6C; case 0x801D6F8Cu: goto L_801D6F8C; default: break; } dispatch(c,c->ctr); return; } // 801D6B40
L_801D6B44:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801D6B44
  c->r[0]=R16(c->r[30]+0x00000002u); // 801D6B48
  c->r[0]=c->r[3]+c->r[0]; // 801D6B4C
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6B50
  goto L_801D6F90; // 801D6B54
L_801D6B58:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6B58
  c->r[4]=0u+0xFFFFFFFFu; // 801D6B5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6B60
  c->r[12]=R32(c->r[30]+0x00000004u); // 801D6B64
  c->r[3]=c->r[3]+c->r[0]; // 801D6B68
  c->ctr=c->r[12]; // 801D6B6C
  if (true) { c->lr=0x801D6B74u; dispatch(c,c->ctr); } // 801D6B70
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6B74
  c->r[0]=c->r[3]+0x00000008u; // 801D6B78
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6B7C
  goto L_801D6F90; // 801D6B80
L_801D6B84:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D6B84
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801D6B88
  if (crb(c,2)) { goto L_801D6BA8; } // 801D6B8C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6B90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6B94
  c->r[3]=c->r[26]+c->r[0]; // 801D6B98
  c->r[0]=R32(c->r[3]+0x00000200u); // 801D6B9C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D6BA0
  goto L_801D6BB4; // 801D6BA4
L_801D6BA8:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6BA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6BAC
  c->r[0]=R8(c->r[3]+c->r[0]); // 801D6BB0
L_801D6BB4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D6BB4
  if (crb(c,2)) { goto L_801D6BD8; } // 801D6BB8
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6BBC
  c->r[4]=0u+0xFFFFFFFFu; // 801D6BC0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 801D6BC4
  c->r[12]=R32(c->r[30]+0x00000008u); // 801D6BC8
  c->r[3]=c->r[3]+c->r[0]; // 801D6BCC
  c->ctr=c->r[12]; // 801D6BD0
  if (true) { c->lr=0x801D6BD8u; dispatch(c,c->ctr); } // 801D6BD4
L_801D6BD8:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6BD8
  c->r[0]=c->r[3]+0x0000000Cu; // 801D6BDC
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6BE0
  goto L_801D6F90; // 801D6BE4
L_801D6BE8:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D6BE8
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801D6BEC
  if (crb(c,2)) { goto L_801D6C08; } // 801D6BF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6BF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6BF8
  c->r[3]=c->r[26]+c->r[0]; // 801D6BFC
  c->r[3]=R32(c->r[3]+0x00000200u); // 801D6C00
  goto L_801D6C14; // 801D6C04
L_801D6C08:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6C08
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6C0C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D6C10
L_801D6C14:;
  c->r[12]=R32(c->r[30]+0x00000004u); // 801D6C14
  c->r[4]=0u+0xFFFFFFFFu; // 801D6C18
  c->ctr=c->r[12]; // 801D6C1C
  if (true) { c->lr=0x801D6C24u; dispatch(c,c->ctr); } // 801D6C20
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6C24
  c->r[0]=c->r[3]+0x00000008u; // 801D6C28
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6C2C
  goto L_801D6F90; // 801D6C30
L_801D6C34:;
  c->r[23]=R16(c->r[30]+0x00000004u); // 801D6C34
  c->r[24]=R16(c->r[30]+0x00000006u); // 801D6C38
  c->r[4]=R32(c->r[26]+0x00000288u); // 801D6C3C
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[23]); // 801D6C40
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6C44
  c->r[22]=c->r[4]+c->r[3]; // 801D6C48
  c->r[22]=c->r[22]+c->r[0]; // 801D6C4C
  goto L_801D6C70; // 801D6C50
L_801D6C54:;
  c->r[12]=R32(c->r[30]+0x00000008u); // 801D6C54
  c->r[22]=c->r[22]-c->r[24]; // 801D6C58
  c->r[3]=c->r[22]|c->r[22]; // 801D6C5C
  c->r[4]=0u+0xFFFFFFFFu; // 801D6C60
  c->ctr=c->r[12]; // 801D6C64
  if (true) { c->lr=0x801D6C6Cu; dispatch(c,c->ctr); } // 801D6C68
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 801D6C6C
L_801D6C70:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D6C70
  if (crb(c,1)) { IRQCHK(c); goto L_801D6C54; } // 801D6C74
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6C78
  c->r[0]=c->r[3]+0x0000000Cu; // 801D6C7C
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6C80
  goto L_801D6F90; // 801D6C84
L_801D6C88:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D6C88
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801D6C8C
  if (crb(c,2)) { goto L_801D6CA8; } // 801D6C90
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6C94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6C98
  c->r[3]=c->r[26]+c->r[0]; // 801D6C9C
  c->r[3]=R32(c->r[3]+0x00000200u); // 801D6CA0
  goto L_801D6CB4; // 801D6CA4
L_801D6CA8:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6CA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6CAC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D6CB0
L_801D6CB4:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D6CB4
  c->r[4]=0u+0x00000000u; // 801D6CB8
  c->r[12]=R32(c->r[30]+0x00000008u); // 801D6CBC
  c->r[3]=c->r[3]+c->r[0]; // 801D6CC0
  c->ctr=c->r[12]; // 801D6CC4
  if (true) { c->lr=0x801D6CCCu; dispatch(c,c->ctr); } // 801D6CC8
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6CCC
  c->r[0]=c->r[3]+0x0000000Cu; // 801D6CD0
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6CD4
  goto L_801D6F90; // 801D6CD8
L_801D6CDC:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D6CDC
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801D6CE0
  if (crb(c,2)) { goto L_801D6CFC; } // 801D6CE4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6CE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6CEC
  c->r[3]=c->r[26]+c->r[0]; // 801D6CF0
  c->r[3]=R32(c->r[3]+0x00000200u); // 801D6CF4
  goto L_801D6D08; // 801D6CF8
L_801D6CFC:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6CFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6D00
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D6D04
L_801D6D08:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D6D08
  c->r[4]=0u+0xFFFFFFFFu; // 801D6D0C
  c->r[12]=R32(c->r[30]+0x00000008u); // 801D6D10
  c->r[3]=c->r[3]+c->r[0]; // 801D6D14
  c->ctr=c->r[12]; // 801D6D18
  if (true) { c->lr=0x801D6D20u; dispatch(c,c->ctr); } // 801D6D1C
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6D20
  c->r[0]=c->r[3]+0x0000000Cu; // 801D6D24
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6D28
  goto L_801D6F90; // 801D6D2C
L_801D6D30:;
  c->r[4]=R8(c->r[30]+0x00000001u); // 801D6D30
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 801D6D34
  if (crb(c,2)) { goto L_801D6D50; } // 801D6D38
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 801D6D3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6D40
  c->r[3]=c->r[26]+c->r[0]; // 801D6D44
  c->r[5]=R32(c->r[3]+0x00000200u); // 801D6D48
  goto L_801D6D5C; // 801D6D4C
L_801D6D50:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6D50
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 801D6D54
  c->r[5]=R32(c->r[3]+c->r[0]); // 801D6D58
L_801D6D5C:;
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 801D6D5C
  if (crb(c,2)) { goto L_801D6D7C; } // 801D6D60
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6D64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6D68
  c->r[3]=c->r[26]+c->r[0]; // 801D6D6C
  c->r[0]=R32(c->r[3]+0x00000200u); // 801D6D70
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801D6D74
  goto L_801D6D88; // 801D6D78
L_801D6D7C:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6D7C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6D80
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[0]); // 801D6D84
L_801D6D88:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D6D88
  if (crb(c,2)) { goto L_801D6DA8; } // 801D6D8C
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D6D90
  c->r[4]=0u+0x00000000u; // 801D6D94
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 801D6D98
  c->r[3]=c->r[5]+c->r[0]; // 801D6D9C
  c->ctr=c->r[12]; // 801D6DA0
  if (true) { c->lr=0x801D6DA8u; dispatch(c,c->ctr); } // 801D6DA4
L_801D6DA8:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6DA8
  c->r[0]=c->r[3]+0x00000010u; // 801D6DAC
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6DB0
  goto L_801D6F90; // 801D6DB4
L_801D6DB8:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D6DB8
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801D6DBC
  if (crb(c,2)) { goto L_801D6DD8; } // 801D6DC0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6DC4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6DC8
  c->r[3]=c->r[26]+c->r[0]; // 801D6DCC
  c->r[24]=R32(c->r[3]+0x00000200u); // 801D6DD0
  goto L_801D6DE4; // 801D6DD4
L_801D6DD8:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6DD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6DDC
  c->r[24]=R32(c->r[3]+c->r[0]); // 801D6DE0
L_801D6DE4:;
  c->r[23]=R32(c->r[30]+0x00000008u); // 801D6DE4
  c->r[22]=R32(c->r[30]+0x0000000Cu); // 801D6DE8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801D6DEC
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)c->r[23]); // 801D6DF0
  c->r[24]=c->r[24]+c->r[3]; // 801D6DF4
  c->r[24]=c->r[24]+c->r[0]; // 801D6DF8
  goto L_801D6E1C; // 801D6DFC
L_801D6E00:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801D6E00
  c->r[24]=c->r[24]-c->r[22]; // 801D6E04
  c->r[3]=c->r[24]|c->r[24]; // 801D6E08
  c->r[4]=0u+0xFFFFFFFFu; // 801D6E0C
  c->ctr=c->r[12]; // 801D6E10
  if (true) { c->lr=0x801D6E18u; dispatch(c,c->ctr); } // 801D6E14
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 801D6E18
L_801D6E1C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801D6E1C
  if (crb(c,1)) { IRQCHK(c); goto L_801D6E00; } // 801D6E20
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6E24
  c->r[0]=c->r[3]+0x00000014u; // 801D6E28
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6E2C
  goto L_801D6F90; // 801D6E30
L_801D6E34:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801D6E34
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 801D6E38
  if (crb(c,2)) { goto L_801D6E54; } // 801D6E3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6E40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6E44
  c->r[3]=c->r[26]+c->r[0]; // 801D6E48
  c->r[3]=R32(c->r[3]+0x00000200u); // 801D6E4C
  goto L_801D6E60; // 801D6E50
L_801D6E54:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6E54
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6E58
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D6E5C
L_801D6E60:;
  c->r[12]=R32(c->r[30]+0x00000004u); // 801D6E60
  c->ctr=c->r[12]; // 801D6E64
  if (true) { c->lr=0x801D6E6Cu; dispatch(c,c->ctr); } // 801D6E68
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6E6C
  c->r[0]=c->r[3]+0x00000008u; // 801D6E70
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6E74
  goto L_801D6F90; // 801D6E78
L_801D6E7C:;
  c->r[4]=R8(c->r[30]+0x00000001u); // 801D6E7C
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 801D6E80
  if (crb(c,2)) { goto L_801D6E9C; } // 801D6E84
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 801D6E88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6E8C
  c->r[3]=c->r[26]+c->r[0]; // 801D6E90
  c->r[3]=R32(c->r[3]+0x00000200u); // 801D6E94
  goto L_801D6EA8; // 801D6E98
L_801D6E9C:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6E9C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000004u); // 801D6EA0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D6EA4
L_801D6EA8:;
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 801D6EA8
  if (crb(c,2)) { goto L_801D6EC8; } // 801D6EAC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6EB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6EB4
  c->r[4]=c->r[26]+c->r[0]; // 801D6EB8
  c->r[0]=R32(c->r[4]+0x00000200u); // 801D6EBC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D6EC0
  goto L_801D6ED4; // 801D6EC4
L_801D6EC8:;
  c->r[4]=R32(c->r[26]+0x00000288u); // 801D6EC8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6ECC
  c->r[0]=R8(c->r[4]+c->r[0]); // 801D6ED0
L_801D6ED4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D6ED4
  if (crb(c,2)) { goto L_801D6EE8; } // 801D6ED8
  c->r[12]=R32(c->r[30]+0x00000008u); // 801D6EDC
  c->ctr=c->r[12]; // 801D6EE0
  if (true) { c->lr=0x801D6EE8u; dispatch(c,c->ctr); } // 801D6EE4
L_801D6EE8:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6EE8
  c->r[0]=c->r[3]+0x0000000Cu; // 801D6EEC
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6EF0
  goto L_801D6F90; // 801D6EF4
L_801D6EF8:;
  cmpu(c,0,c->r[28],c->r[30]); // 801D6EF8
  if (crb(c,2)) { goto L_801D6FA0; } // 801D6EFC
  c->r[0]=c->r[30]+0x0000000Cu; // 801D6F00
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6F04
  goto L_801D6F90; // 801D6F08
L_801D6F0C:;
  cmpu(c,0,c->r[28],c->r[30]); // 801D6F0C
  if (crb(c,2)) { goto L_801D6FA0; } // 801D6F10
  c->r[0]=c->r[30]+0x00000010u; // 801D6F14
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6F18
  goto L_801D6F90; // 801D6F1C
L_801D6F20:;
  c->r[3]=R32(c->r[26]+0x00000288u); // 801D6F20
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D6F24
  c->r[3]=c->r[3]+c->r[0]; // 801D6F28
  c->r[12]=R32(c->r[3]+0x00000008u); // 801D6F2C
  cmps(c,0,(int32_t)c->r[12],0); // 801D6F30
  if (crb(c,2)) { goto L_801D6F5C; } // 801D6F34
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D6F38
  c->r[0]=R32(c->r[26]+0x00000298u); // 801D6F3C
  cmpu(c,0,c->r[0],c->r[3]); // 801D6F40
  if (!crb(c,2)) { goto L_801D6F50; } // 801D6F44
  W32(c->r[26]+0x0000029Cu,c->r[12]); // 801D6F48
  goto L_801D6F5C; // 801D6F4C
L_801D6F50:;
  c->r[4]=0u+0xFFFFFFFFu; // 801D6F50
  c->ctr=c->r[12]; // 801D6F54
  if (true) { c->lr=0x801D6F5Cu; dispatch(c,c->ctr); } // 801D6F58
L_801D6F5C:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801D6F5C
  c->r[0]=c->r[3]+0x00000004u; // 801D6F60
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6F64
  goto L_801D6F90; // 801D6F68
L_801D6F6C:;
  cmpu(c,0,c->r[28],c->r[30]); // 801D6F6C
  if (crb(c,2)) { goto L_801D6FA0; } // 801D6F70
  c->r[0]=R16(c->r[30]+0x00000002u); // 801D6F74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D6F78
  c->r[3]=c->r[0]+c->r[30]; // 801D6F7C
  c->r[0]=c->r[3]+0x0000000Cu; // 801D6F80
  W32(c->r[27]+0x00000008u,c->r[0]); // 801D6F84
  goto L_801D6F90; // 801D6F88
L_801D6F8C:;
  c->lr=0x801D6F90u; f_801D5050(c); // 801D6F8C
L_801D6F90:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 801D6F90
  if (crb(c,2)) { IRQCHK(c); goto L_801D6ACC; } // 801D6F94
  W32(c->r[27]+0x00000008u,c->r[25]); // 801D6F98
  IRQCHK(c); goto L_801D6ACC; // 801D6F9C
L_801D6FA0:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D6FA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D6FA4
  c->lr=c->r[0]; // 801D6FA8
  c->r[1]=c->r[1]+0x00000030u; // 801D6FAC
  return; // 801D6FB0
}

// fn_801D6FB4
void f_801D6FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6FB4
  c->r[0]=c->lr; // 801D6FB8
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D6FBC
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D6FC0
  c->r[31]=c->r[1]|c->r[1]; // 801D6FC4
  c->r[30]=R32(c->r[3]+0x00000014u); // 801D6FC8
  W32(c->r[1]+0x00000034u,c->r[1]); // 801D6FCC
  c->lr=0x801D6FD4u; f_801D505C(c); // 801D6FD0
  goto L_801D714C; // 801D6FD4
  c->r[29]=R32(c->r[31]+0x00000024u); // 801D6FD8
  c->r[27]=c->r[30]|c->r[30]; // 801D6FDC
  c->r[28]=0u+0x00000000u; // 801D6FE0
  goto L_801D7010; // 801D6FE4
L_801D6FE8:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801D6FE8
  c->r[3]=c->r[29]|c->r[29]; // 801D6FEC
  c->r[5]=c->r[31]+0x00000010u; // 801D6FF0
  c->lr=0x801D6FF8u; f_801D5068(c); // 801D6FF4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D6FF8
  if (crb(c,2)) { goto L_801D7008; } // 801D6FFC
  c->r[0]=0u+0x00000001u; // 801D7000
  goto L_801D7020; // 801D7004
L_801D7008:;
  c->r[27]=c->r[27]+0x00000004u; // 801D7008
  c->r[28]=c->r[28]+0x00000001u; // 801D700C
L_801D7010:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801D7010
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D7014
  if (crb(c,0)) { IRQCHK(c); goto L_801D6FE8; } // 801D7018
  c->r[0]=0u+0x00000000u; // 801D701C
L_801D7020:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7020
  if (crb(c,2)) { goto L_801D7038; } // 801D7024
  c->r[3]=0u+0x00000000u; // 801D7028
  c->r[4]=0u+0x00000000u; // 801D702C
  c->r[5]=0u+0x00000000u; // 801D7030
  c->lr=0x801D7038u; f_801D76B8(c); // 801D7034
L_801D7038:;
  c->r[28]=0u+0x80200000u; // 801D7038
  c->r[27]=c->r[30]|c->r[30]; // 801D703C
  c->r[28]=c->r[28]+0xFFFFA97Cu; // 801D7040
  c->r[29]=0u+0x00000000u; // 801D7044
  goto L_801D7074; // 801D7048
L_801D704C:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801D704C
  c->r[3]=c->r[28]|c->r[28]; // 801D7050
  c->r[5]=c->r[31]+0x0000000Cu; // 801D7054
  c->lr=0x801D705Cu; f_801D5068(c); // 801D7058
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D705C
  if (crb(c,2)) { goto L_801D706C; } // 801D7060
  c->r[0]=0u+0x00000001u; // 801D7064
  goto L_801D7084; // 801D7068
L_801D706C:;
  c->r[27]=c->r[27]+0x00000004u; // 801D706C
  c->r[29]=c->r[29]+0x00000001u; // 801D7070
L_801D7074:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801D7074
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D7078
  if (crb(c,0)) { IRQCHK(c); goto L_801D704C; } // 801D707C
  c->r[0]=0u+0x00000000u; // 801D7080
L_801D7084:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7084
  if (crb(c,2)) { goto L_801D70B4; } // 801D7088
  c->r[4]=0u+0x80250000u; // 801D708C
  c->r[3]=0u+0x80200000u; // 801D7090
  c->r[4]=c->r[4]+0xFFFF98B0u; // 801D7094
  c->r[5]=0u+0x801D0000u; // 801D7098
  c->r[3]=c->r[3]+0xFFFFA97Cu; // 801D709C
  W32(c->r[31]+0x00000018u,c->r[4]); // 801D70A0
  c->r[3]=c->r[3]+0x00000011u; // 801D70A4
  c->r[4]=c->r[31]+0x00000018u; // 801D70A8
  c->r[5]=c->r[5]+0x0000716Cu; // 801D70AC
  c->lr=0x801D70B4u; f_801D76B8(c); // 801D70B0
L_801D70B4:;
  c->r[3]=0u+0x80200000u; // 801D70B4
  c->r[27]=c->r[30]|c->r[30]; // 801D70B8
  c->r[3]=c->r[3]+0xFFFFA97Cu; // 801D70BC
  c->r[29]=0u+0x00000000u; // 801D70C0
  c->r[28]=c->r[3]+0x00000037u; // 801D70C4
  goto L_801D70F4; // 801D70C8
L_801D70CC:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801D70CC
  c->r[3]=c->r[28]|c->r[28]; // 801D70D0
  c->r[5]=c->r[31]+0x00000008u; // 801D70D4
  c->lr=0x801D70DCu; f_801D5068(c); // 801D70D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D70DC
  if (crb(c,2)) { goto L_801D70EC; } // 801D70E0
  c->r[0]=0u+0x00000001u; // 801D70E4
  goto L_801D7104; // 801D70E8
L_801D70EC:;
  c->r[27]=c->r[27]+0x00000004u; // 801D70EC
  c->r[29]=c->r[29]+0x00000001u; // 801D70F0
L_801D70F4:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 801D70F4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801D70F8
  if (crb(c,0)) { IRQCHK(c); goto L_801D70CC; } // 801D70FC
  c->r[0]=0u+0x00000000u; // 801D7100
L_801D7104:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7104
  if (crb(c,2)) { goto L_801D7134; } // 801D7108
  c->r[4]=0u+0x80250000u; // 801D710C
  c->r[3]=0u+0x80200000u; // 801D7110
  c->r[4]=c->r[4]+0xFFFF98B0u; // 801D7114
  c->r[5]=0u+0x801D0000u; // 801D7118
  c->r[3]=c->r[3]+0xFFFFA97Cu; // 801D711C
  W32(c->r[31]+0x00000014u,c->r[4]); // 801D7120
  c->r[3]=c->r[3]+0x00000011u; // 801D7124
  c->r[4]=c->r[31]+0x00000014u; // 801D7128
  c->r[5]=c->r[5]+0x0000716Cu; // 801D712C
  c->lr=0x801D7134u; f_801D76B8(c); // 801D7130
L_801D7134:;
  c->r[3]=c->r[31]+0x00000020u; // 801D7134
  c->lr=0x801D713Cu; f_801D77FC(c); // 801D7138
  c->r[0]=c->r[0]|0x00000000u; // 801D713C
  c->r[0]=R32(c->r[1]+0x00000000u); // 801D7140
  c->r[1]=R32(c->r[31]+0x00000034u); // 801D7144
  W32(c->r[1]+0x00000000u,c->r[0]); // 801D7148
L_801D714C:;
  c->lr=0x801D7150u; f_801D5050(c); // 801D714C
  c->r[10]=c->r[31]|c->r[31]; // 801D7150
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D7154
  c->r[10]=R32(c->r[1]+0x00000000u); // 801D7158
  c->r[0]=R32(c->r[10]+0x00000004u); // 801D715C
  c->r[1]=c->r[10]|c->r[10]; // 801D7160
  c->lr=c->r[0]; // 801D7164
  return; // 801D7168
}

// fn_801D716C
void f_801D716C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D716C
  c->r[0]=c->lr; // 801D7170
  cmps(c,0,(int32_t)c->r[3],0); // 801D7174
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7178
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D717C
  c->r[31]=c->r[3]|c->r[3]; // 801D7180
  if (crb(c,2)) { goto L_801D7194; } // 801D7184
  cmps(c,0,(int32_t)c->r[4],0); // 801D7188
  if (!crb(c,1)) { goto L_801D7194; } // 801D718C
  c->lr=0x801D7194u; f_800D93B0(c); // 801D7190
L_801D7194:;
  c->r[3]=c->r[31]|c->r[31]; // 801D7194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7198
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D719C
  c->lr=c->r[0]; // 801D71A0
  c->r[1]=c->r[1]+0x00000010u; // 801D71A4
  return; // 801D71A8
}

// fn_801D71AC
void f_801D71AC(Ctx* __restrict c) {
  c->r[8]=c->r[5]|c->r[5]; // 801D71AC
  c->r[2]=c->r[4]|c->r[4]; // 801D71B0
  c->r[0]=R32(c->r[3]+0x00000280u); // 801D71B4
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[0]&0xFFFFFFFFu); // 801D71B8
  {uint32_t ea=c->r[3]+0x00000234u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D71BC
  c->r[7]=c->r[3]+0x000000E8u; // 801D71C0
  {uint32_t ea=0u+c->r[7]; psq_load(c,14,ea,0,0);} // 801D71C4
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[14]=RF64(ea);} // 801D71C8
  c->r[7]=c->r[3]+0x000000F8u; // 801D71CC
  {uint32_t ea=0u+c->r[7]; psq_load(c,15,ea,0,0);} // 801D71D0
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[15]=RF64(ea);} // 801D71D4
  c->r[7]=c->r[3]+0x00000108u; // 801D71D8
  {uint32_t ea=0u+c->r[7]; psq_load(c,16,ea,0,0);} // 801D71DC
  {uint32_t ea=c->r[3]+0x00000100u; c->f[16]=RF64(ea);} // 801D71E0
  c->r[7]=c->r[3]+0x00000118u; // 801D71E4
  {uint32_t ea=0u+c->r[7]; psq_load(c,17,ea,0,0);} // 801D71E8
  {uint32_t ea=c->r[3]+0x00000110u; c->f[17]=RF64(ea);} // 801D71EC
  c->r[7]=c->r[3]+0x00000128u; // 801D71F0
  {uint32_t ea=0u+c->r[7]; psq_load(c,18,ea,0,0);} // 801D71F4
  {uint32_t ea=c->r[3]+0x00000120u; c->f[18]=RF64(ea);} // 801D71F8
  c->r[7]=c->r[3]+0x00000138u; // 801D71FC
  {uint32_t ea=0u+c->r[7]; psq_load(c,19,ea,0,0);} // 801D7200
  {uint32_t ea=c->r[3]+0x00000130u; c->f[19]=RF64(ea);} // 801D7204
  c->r[7]=c->r[3]+0x00000148u; // 801D7208
  {uint32_t ea=0u+c->r[7]; psq_load(c,20,ea,0,0);} // 801D720C
  {uint32_t ea=c->r[3]+0x00000140u; c->f[20]=RF64(ea);} // 801D7210
  c->r[7]=c->r[3]+0x00000158u; // 801D7214
  {uint32_t ea=0u+c->r[7]; psq_load(c,21,ea,0,0);} // 801D7218
  {uint32_t ea=c->r[3]+0x00000150u; c->f[21]=RF64(ea);} // 801D721C
  c->r[7]=c->r[3]+0x00000168u; // 801D7220
  {uint32_t ea=0u+c->r[7]; psq_load(c,22,ea,0,0);} // 801D7224
  {uint32_t ea=c->r[3]+0x00000160u; c->f[22]=RF64(ea);} // 801D7228
  c->r[7]=c->r[3]+0x00000178u; // 801D722C
  {uint32_t ea=0u+c->r[7]; psq_load(c,23,ea,0,0);} // 801D7230
  {uint32_t ea=c->r[3]+0x00000170u; c->f[23]=RF64(ea);} // 801D7234
  c->r[7]=c->r[3]+0x00000188u; // 801D7238
  {uint32_t ea=0u+c->r[7]; psq_load(c,24,ea,0,0);} // 801D723C
  {uint32_t ea=c->r[3]+0x00000180u; c->f[24]=RF64(ea);} // 801D7240
  c->r[7]=c->r[3]+0x00000198u; // 801D7244
  {uint32_t ea=0u+c->r[7]; psq_load(c,25,ea,0,0);} // 801D7248
  {uint32_t ea=c->r[3]+0x00000190u; c->f[25]=RF64(ea);} // 801D724C
  c->r[7]=c->r[3]+0x000001A8u; // 801D7250
  {uint32_t ea=0u+c->r[7]; psq_load(c,26,ea,0,0);} // 801D7254
  {uint32_t ea=c->r[3]+0x000001A0u; c->f[26]=RF64(ea);} // 801D7258
  c->r[7]=c->r[3]+0x000001B8u; // 801D725C
  {uint32_t ea=0u+c->r[7]; psq_load(c,27,ea,0,0);} // 801D7260
  {uint32_t ea=c->r[3]+0x000001B0u; c->f[27]=RF64(ea);} // 801D7264
  c->r[7]=c->r[3]+0x000001C8u; // 801D7268
  {uint32_t ea=0u+c->r[7]; psq_load(c,28,ea,0,0);} // 801D726C
  {uint32_t ea=c->r[3]+0x000001C0u; c->f[28]=RF64(ea);} // 801D7270
  c->r[7]=c->r[3]+0x000001D8u; // 801D7274
  {uint32_t ea=0u+c->r[7]; psq_load(c,29,ea,0,0);} // 801D7278
  {uint32_t ea=c->r[3]+0x000001D0u; c->f[29]=RF64(ea);} // 801D727C
  c->r[7]=c->r[3]+0x000001E8u; // 801D7280
  {uint32_t ea=0u+c->r[7]; psq_load(c,30,ea,0,0);} // 801D7284
  {uint32_t ea=c->r[3]+0x000001E0u; c->f[30]=RF64(ea);} // 801D7288
  c->r[7]=c->r[3]+0x000001F8u; // 801D728C
  {uint32_t ea=0u+c->r[7]; psq_load(c,31,ea,0,0);} // 801D7290
  {uint32_t ea=c->r[3]+0x000001F0u; c->f[31]=RF64(ea);} // 801D7294
  c->lr=c->r[8]; // 801D7298
  c->r[1]=R32(c->r[3]+0x0000028Cu); // 801D729C
  c->r[3]=R32(c->r[3]+0x00000284u); // 801D72A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D72A4
  W32(c->r[1]+0x00000000u,c->r[3]); // 801D72A8
  return; // 801D72AC
}

// fn_801D72B0
void f_801D72B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D72B0
  c->r[0]=c->lr; // 801D72B4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D72B8
  c->r[4]=c->r[1]+0x00000010u; // 801D72BC
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D72C0
  c->r[30]=c->r[3]|c->r[3]; // 801D72C4
  c->r[3]=R32(c->r[3]+0x00000290u); // 801D72C8
  c->lr=0x801D72D0u; f_801D61F4(c); // 801D72CC
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D72D0
  cmps(c,0,(int32_t)c->r[0],0); // 801D72D4
  if (!crb(c,2)) { goto L_801D72E0; } // 801D72D8
  c->lr=0x801D72E0u; f_801D5050(c); // 801D72DC
L_801D72E0:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801D72E0
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D72E4
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 801D72E8
  if (crb(c,2)) { goto L_801D72F8; } // 801D72EC
  c->r[8]=R32(c->r[30]+0x0000027Cu); // 801D72F0
  goto L_801D72FC; // 801D72F4
L_801D72F8:;
  c->r[8]=R32(c->r[30]+0x00000284u); // 801D72F8
L_801D72FC:;
  c->r[0]=R32(c->r[30]+0x00000294u); // 801D72FC
  W32(c->r[30]+0x00000288u,c->r[8]); // 801D7300
  cmps(c,0,(int32_t)c->r[0],0); // 801D7304
  if (!crb(c,2)) { goto L_801D73D8; } // 801D7308
  c->r[5]=R32(c->r[1]+0x00000018u); // 801D730C
  c->r[7]=R32(c->r[1]+0x00000010u); // 801D7310
  c->r[6]=R32(c->r[1]+0x00000014u); // 801D7314
  cmps(c,0,(int32_t)c->r[5],0); // 801D7318
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801D731C
  c->r[3]=R32(c->r[1]+0x00000020u); // 801D7320
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7324
  W32(c->r[1]+0x00000028u,c->r[7]); // 801D7328
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 801D732C
  W32(c->r[1]+0x00000030u,c->r[5]); // 801D7330
  W32(c->r[1]+0x00000034u,c->r[4]); // 801D7334
  W32(c->r[1]+0x00000038u,c->r[3]); // 801D7338
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801D733C
  c->r[0]=R32(c->r[30]+0x00000284u); // 801D7340
  W32(c->r[1]+0x00000040u,c->r[0]); // 801D7344
  W32(c->r[1]+0x00000044u,c->r[8]); // 801D7348
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 801D734C
  W32(c->r[1]+0x00000048u,c->r[0]); // 801D7350
  if (!crb(c,2)) { goto L_801D7360; } // 801D7354
  c->r[3]=0u+0x00000000u; // 801D7358
  goto L_801D7368; // 801D735C
L_801D7360:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D7360
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 801D7364
L_801D7368:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D7368
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D736C
  cmpu(c,0,c->r[0],0x0000000Au); // 801D7370
  if (!crb(c,1)) { goto L_801D739C; } // 801D7374
  c->r[0]=c->r[3]+0xFFFFFFF1u; // 801D7378
  cmpu(c,0,c->r[0],0x00000001u); // 801D737C
  if (!crb(c,1)) { goto L_801D739C; } // 801D7380
  cmps(c,0,(int32_t)c->r[3],13); // 801D7384
  if (crb(c,2)) { goto L_801D73A8; } // 801D7388
  cmps(c,0,(int32_t)c->r[3],0); // 801D738C
  if (crb(c,2)) { goto L_801D739C; } // 801D7390
  c->lr=0x801D7398u; f_801D5050(c); // 801D7394
  goto L_801D73A8; // 801D7398
L_801D739C:;
  c->r[3]=c->r[1]+0x00000028u; // 801D739C
  c->lr=0x801D73A4u; f_801D63A4(c); // 801D73A0
  IRQCHK(c); goto L_801D7368; // 801D73A4
L_801D73A8:;
  c->r[3]=R32(c->r[1]+0x00000030u); // 801D73A8
  c->r[0]=0u+0x00000000u; // 801D73AC
  c->r[4]=R32(c->r[1]+0x00000044u); // 801D73B0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801D73B4
  c->r[4]=c->r[4]+c->r[3]; // 801D73B8
  c->r[3]=R32(c->r[4]+0x00000004u); // 801D73BC
  W32(c->r[30]+0x00000294u,c->r[3]); // 801D73C0
  c->r[3]=R32(c->r[4]+0x00000000u); // 801D73C4
  W32(c->r[30]+0x00000298u,c->r[3]); // 801D73C8
  W32(c->r[30]+0x0000029Cu,c->r[0]); // 801D73CC
  W32(c->r[30]+0x000002A0u,c->r[4]); // 801D73D0
  goto L_801D73E0; // 801D73D4
L_801D73D8:;
  c->r[0]=0u+0x00000000u; // 801D73D8
  W32(c->r[30]+0x000002A0u,c->r[0]); // 801D73DC
L_801D73E0:;
  c->r[5]=R32(c->r[1]+0x00000018u); // 801D73E0
  c->r[7]=R32(c->r[1]+0x00000010u); // 801D73E4
  c->r[6]=R32(c->r[1]+0x00000014u); // 801D73E8
  cmps(c,0,(int32_t)c->r[5],0); // 801D73EC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 801D73F0
  c->r[3]=R32(c->r[1]+0x00000020u); // 801D73F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D73F8
  W32(c->r[1]+0x00000028u,c->r[7]); // 801D73FC
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 801D7400
  W32(c->r[1]+0x00000030u,c->r[5]); // 801D7404
  W32(c->r[1]+0x00000034u,c->r[4]); // 801D7408
  W32(c->r[1]+0x00000038u,c->r[3]); // 801D740C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801D7410
  c->r[0]=R32(c->r[30]+0x00000284u); // 801D7414
  W32(c->r[1]+0x00000040u,c->r[0]); // 801D7418
  c->r[0]=R32(c->r[30]+0x00000288u); // 801D741C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D7420
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 801D7424
  W32(c->r[1]+0x00000048u,c->r[0]); // 801D7428
  if (!crb(c,2)) { goto L_801D7438; } // 801D742C
  c->r[27]=0u+0x00000000u; // 801D7430
  goto L_801D7440; // 801D7434
L_801D7438:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D7438
  c->r[27]=rotl(c->r[0],0)&0x0000007Fu; // 801D743C
L_801D7440:;
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 801D7440
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D7444
  cmpu(c,0,c->r[0],0x00000009u); // 801D7448
  if (!crb(c,1)) { goto L_801D756C; } // 801D744C
  cmps(c,0,(int32_t)c->r[3],16); // 801D7450
  if (crb(c,2)) { goto L_801D747C; } // 801D7454
  cmps(c,0,(int32_t)c->r[3],12); // 801D7458
  if (crb(c,2)) { goto L_801D749C; } // 801D745C
  cmps(c,0,(int32_t)c->r[3],15); // 801D7460
  if (crb(c,2)) { goto L_801D74BC; } // 801D7464
  cmps(c,0,(int32_t)c->r[3],0); // 801D7468
  if (crb(c,2)) { goto L_801D756C; } // 801D746C
  cmps(c,0,(int32_t)c->r[3],13); // 801D7470
  if (crb(c,2)) { goto L_801D756C; } // 801D7474
  goto L_801D7564; // 801D7478
L_801D747C:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 801D747C
  c->r[5]=c->r[1]+0x0000000Cu; // 801D7480
  c->r[3]=R32(c->r[30]+0x00000294u); // 801D7484
  c->r[4]=R32(c->r[4]+0x00000004u); // 801D7488
  c->lr=0x801D7490u; f_801D5068(c); // 801D748C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D7490
  if (!crb(c,2)) { goto L_801D757C; } // 801D7494
  goto L_801D756C; // 801D7498
L_801D749C:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 801D749C
  c->r[5]=c->r[1]+0x0000000Cu; // 801D74A0
  c->r[3]=R32(c->r[30]+0x00000294u); // 801D74A4
  c->r[4]=R32(c->r[4]+0x00000004u); // 801D74A8
  c->lr=0x801D74B0u; f_801D5068(c); // 801D74AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D74B0
  if (!crb(c,2)) { goto L_801D757C; } // 801D74B4
  goto L_801D756C; // 801D74B8
L_801D74BC:;
  c->r[29]=R32(c->r[1]+0x00000030u); // 801D74BC
  c->r[28]=0u+0x00000000u; // 801D74C0
  c->r[31]=R32(c->r[30]+0x00000294u); // 801D74C4
  c->r[27]=c->r[29]|c->r[29]; // 801D74C8
  goto L_801D74F8; // 801D74CC
L_801D74D0:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 801D74D0
  c->r[3]=c->r[31]|c->r[31]; // 801D74D4
  c->r[5]=c->r[1]+0x00000008u; // 801D74D8
  c->lr=0x801D74E0u; f_801D5068(c); // 801D74DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801D74E0
  if (crb(c,2)) { goto L_801D74F0; } // 801D74E4
  c->r[0]=0u+0x00000001u; // 801D74E8
  goto L_801D7508; // 801D74EC
L_801D74F0:;
  c->r[27]=c->r[27]+0x00000004u; // 801D74F0
  c->r[28]=c->r[28]+0x00000001u; // 801D74F4
L_801D74F8:;
  c->r[0]=R16(c->r[29]+0x00000002u); // 801D74F8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801D74FC
  if (crb(c,0)) { IRQCHK(c); goto L_801D74D0; } // 801D7500
  c->r[0]=0u+0x00000000u; // 801D7504
L_801D7508:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D7508
  if (!crb(c,2)) { goto L_801D756C; } // 801D750C
  c->r[28]=R32(c->r[1]+0x00000030u); // 801D7510
  c->r[3]=c->r[30]|c->r[30]; // 801D7514
  c->r[4]=c->r[1]+0x00000010u; // 801D7518
  c->r[5]=c->r[28]|c->r[28]; // 801D751C
  c->lr=0x801D7524u; f_801D6AA8(c); // 801D7520
  c->r[5]=R32(c->r[30]+0x00000288u); // 801D7524
  c->r[3]=c->r[30]|c->r[30]; // 801D7528
  c->r[4]=R32(c->r[28]+0x00000008u); // 801D752C
  c->r[0]=R32(c->r[30]+0x00000298u); // 801D7530
  {uint32_t ea=c->r[4]+c->r[5]; W32(ea,c->r[0]); c->r[4]=ea;} // 801D7534
  c->r[0]=R32(c->r[30]+0x00000294u); // 801D7538
  W32(c->r[4]+0x00000004u,c->r[0]); // 801D753C
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 801D7540
  W32(c->r[4]+0x00000008u,c->r[0]); // 801D7544
  W32(c->r[4]+0x00000014u,c->r[28]); // 801D7548
  c->r[5]=R32(c->r[1]+0x00000014u); // 801D754C
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D7550
  c->r[4]=R32(c->r[1]+0x00000024u); // 801D7554
  c->r[5]=c->r[5]+c->r[0]; // 801D7558
  c->lr=0x801D7560u; f_801D71AC(c); // 801D755C
  goto L_801D756C; // 801D7560
L_801D7564:;
  c->lr=0x801D7568u; f_801D5050(c); // 801D7564
  goto L_801D757C; // 801D7568
L_801D756C:;
  c->r[3]=c->r[1]+0x00000028u; // 801D756C
  c->lr=0x801D7574u; f_801D63A4(c); // 801D7570
  c->r[27]=c->r[3]|c->r[3]; // 801D7574
  IRQCHK(c); goto L_801D7440; // 801D7578
L_801D757C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D757C
  cmpu(c,0,c->r[0],0x00000010u); // 801D7580
  if (!crb(c,2)) { goto L_801D7618; } // 801D7584
  c->r[31]=R32(c->r[1]+0x00000030u); // 801D7588
  c->r[3]=c->r[30]|c->r[30]; // 801D758C
  c->r[4]=c->r[1]+0x00000010u; // 801D7590
  c->r[5]=c->r[31]|c->r[31]; // 801D7594
  c->lr=0x801D759Cu; f_801D6AA8(c); // 801D7598
  c->r[4]=R32(c->r[30]+0x00000288u); // 801D759C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801D75A0
  c->r[0]=R32(c->r[30]+0x00000298u); // 801D75A4
  {uint32_t ea=c->r[4]+c->r[3]; W32(ea,c->r[0]); c->r[4]=ea;} // 801D75A8
  c->r[0]=R32(c->r[30]+0x00000294u); // 801D75AC
  W32(c->r[4]+0x00000004u,c->r[0]); // 801D75B0
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 801D75B4
  W32(c->r[4]+0x00000008u,c->r[0]); // 801D75B8
  c->r[3]=R32(c->r[30]+0x00000294u); // 801D75BC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D75C0
  cmps(c,0,(int32_t)c->r[0],42); // 801D75C4
  if (!crb(c,2)) { goto L_801D75EC; } // 801D75C8
  c->r[0]=c->r[4]+0x00000010u; // 801D75CC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801D75D0
  c->r[3]=R32(c->r[30]+0x00000298u); // 801D75D4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D75D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D75DC
  c->r[0]=c->r[3]+c->r[0]; // 801D75E0
  W32(c->r[4]+0x00000010u,c->r[0]); // 801D75E4
  goto L_801D75FC; // 801D75E8
L_801D75EC:;
  c->r[3]=R32(c->r[30]+0x00000298u); // 801D75EC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D75F0
  c->r[0]=c->r[3]+c->r[0]; // 801D75F4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801D75F8
L_801D75FC:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 801D75FC
  c->r[3]=c->r[30]|c->r[30]; // 801D7600
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D7604
  c->r[4]=R32(c->r[1]+0x00000024u); // 801D7608
  c->r[5]=c->r[5]+c->r[0]; // 801D760C
  c->lr=0x801D7614u; f_801D71AC(c); // 801D7610
  goto L_801D76A4; // 801D7614
L_801D7618:;
  c->r[31]=R32(c->r[1]+0x00000030u); // 801D7618
  c->r[3]=c->r[30]|c->r[30]; // 801D761C
  c->r[4]=c->r[1]+0x00000010u; // 801D7620
  c->r[5]=c->r[31]|c->r[31]; // 801D7624
  c->lr=0x801D762Cu; f_801D6AA8(c); // 801D7628
  c->r[4]=R32(c->r[30]+0x00000288u); // 801D762C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 801D7630
  c->r[0]=R32(c->r[30]+0x00000298u); // 801D7634
  {uint32_t ea=c->r[4]+c->r[3]; W32(ea,c->r[0]); c->r[4]=ea;} // 801D7638
  c->r[0]=R32(c->r[30]+0x00000294u); // 801D763C
  W32(c->r[4]+0x00000004u,c->r[0]); // 801D7640
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 801D7644
  W32(c->r[4]+0x00000008u,c->r[0]); // 801D7648
  c->r[3]=R32(c->r[30]+0x00000294u); // 801D764C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D7650
  cmps(c,0,(int32_t)c->r[0],42); // 801D7654
  if (!crb(c,2)) { goto L_801D767C; } // 801D7658
  c->r[0]=c->r[4]+0x00000010u; // 801D765C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801D7660
  c->r[3]=R32(c->r[30]+0x00000298u); // 801D7664
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D7668
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D766C
  c->r[0]=c->r[3]+c->r[0]; // 801D7670
  W32(c->r[4]+0x00000010u,c->r[0]); // 801D7674
  goto L_801D768C; // 801D7678
L_801D767C:;
  c->r[3]=R32(c->r[30]+0x00000298u); // 801D767C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D7680
  c->r[0]=c->r[3]+c->r[0]; // 801D7684
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801D7688
L_801D768C:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 801D768C
  c->r[3]=c->r[30]|c->r[30]; // 801D7690
  c->r[0]=R16(c->r[31]+0x00000008u); // 801D7694
  c->r[4]=R32(c->r[1]+0x00000024u); // 801D7698
  c->r[5]=c->r[5]+c->r[0]; // 801D769C
  c->lr=0x801D76A4u; f_801D71AC(c); // 801D76A0
L_801D76A4:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D76A4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D76A8
  c->lr=c->r[0]; // 801D76AC
  c->r[1]=c->r[1]+0x00000070u; // 801D76B0
  return; // 801D76B4
}

// fn_801D76B8
void f_801D76B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D76B8
  c->r[0]=c->lr; // 801D76BC
  W32(c->r[1]+0x000002C4u,c->r[0]); // 801D76C0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D76C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D76C8
  W32(c->r[1]+0x00000010u,c->r[5]); // 801D76CC
  {uint32_t ea=c->r[1]+0x0000024Cu; for(int i=13;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D76D0
  {uint32_t ea=c->r[1]+0x000000F8u; WF64(ea,c->f[14]);} // 801D76D4
  c->r[3]=c->r[1]+0x00000100u; // 801D76D8
  {uint32_t ea=0u+c->r[3]; psq_store(c,14,ea,0,0);} // 801D76DC
  {uint32_t ea=c->r[1]+0x00000108u; WF64(ea,c->f[15]);} // 801D76E0
  c->r[3]=c->r[1]+0x00000110u; // 801D76E4
  {uint32_t ea=0u+c->r[3]; psq_store(c,15,ea,0,0);} // 801D76E8
  {uint32_t ea=c->r[1]+0x00000118u; WF64(ea,c->f[16]);} // 801D76EC
  c->r[3]=c->r[1]+0x00000120u; // 801D76F0
  {uint32_t ea=0u+c->r[3]; psq_store(c,16,ea,0,0);} // 801D76F4
  {uint32_t ea=c->r[1]+0x00000128u; WF64(ea,c->f[17]);} // 801D76F8
  c->r[3]=c->r[1]+0x00000130u; // 801D76FC
  {uint32_t ea=0u+c->r[3]; psq_store(c,17,ea,0,0);} // 801D7700
  {uint32_t ea=c->r[1]+0x00000138u; WF64(ea,c->f[18]);} // 801D7704
  c->r[3]=c->r[1]+0x00000140u; // 801D7708
  {uint32_t ea=0u+c->r[3]; psq_store(c,18,ea,0,0);} // 801D770C
  {uint32_t ea=c->r[1]+0x00000148u; WF64(ea,c->f[19]);} // 801D7710
  c->r[3]=c->r[1]+0x00000150u; // 801D7714
  {uint32_t ea=0u+c->r[3]; psq_store(c,19,ea,0,0);} // 801D7718
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[20]);} // 801D771C
  c->r[3]=c->r[1]+0x00000160u; // 801D7720
  {uint32_t ea=0u+c->r[3]; psq_store(c,20,ea,0,0);} // 801D7724
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[21]);} // 801D7728
  c->r[3]=c->r[1]+0x00000170u; // 801D772C
  {uint32_t ea=0u+c->r[3]; psq_store(c,21,ea,0,0);} // 801D7730
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[22]);} // 801D7734
  c->r[3]=c->r[1]+0x00000180u; // 801D7738
  {uint32_t ea=0u+c->r[3]; psq_store(c,22,ea,0,0);} // 801D773C
  {uint32_t ea=c->r[1]+0x00000188u; WF64(ea,c->f[23]);} // 801D7740
  c->r[3]=c->r[1]+0x00000190u; // 801D7744
  {uint32_t ea=0u+c->r[3]; psq_store(c,23,ea,0,0);} // 801D7748
  {uint32_t ea=c->r[1]+0x00000198u; WF64(ea,c->f[24]);} // 801D774C
  c->r[3]=c->r[1]+0x000001A0u; // 801D7750
  {uint32_t ea=0u+c->r[3]; psq_store(c,24,ea,0,0);} // 801D7754
  {uint32_t ea=c->r[1]+0x000001A8u; WF64(ea,c->f[25]);} // 801D7758
  c->r[3]=c->r[1]+0x000001B0u; // 801D775C
  {uint32_t ea=0u+c->r[3]; psq_store(c,25,ea,0,0);} // 801D7760
  {uint32_t ea=c->r[1]+0x000001B8u; WF64(ea,c->f[26]);} // 801D7764
  c->r[3]=c->r[1]+0x000001C0u; // 801D7768
  {uint32_t ea=0u+c->r[3]; psq_store(c,26,ea,0,0);} // 801D776C
  {uint32_t ea=c->r[1]+0x000001C8u; WF64(ea,c->f[27]);} // 801D7770
  c->r[3]=c->r[1]+0x000001D0u; // 801D7774
  {uint32_t ea=0u+c->r[3]; psq_store(c,27,ea,0,0);} // 801D7778
  {uint32_t ea=c->r[1]+0x000001D8u; WF64(ea,c->f[28]);} // 801D777C
  c->r[3]=c->r[1]+0x000001E0u; // 801D7780
  {uint32_t ea=0u+c->r[3]; psq_store(c,28,ea,0,0);} // 801D7784
  {uint32_t ea=c->r[1]+0x000001E8u; WF64(ea,c->f[29]);} // 801D7788
  c->r[3]=c->r[1]+0x000001F0u; // 801D778C
  {uint32_t ea=0u+c->r[3]; psq_store(c,29,ea,0,0);} // 801D7790
  {uint32_t ea=c->r[1]+0x000001F8u; WF64(ea,c->f[30]);} // 801D7794
  c->r[3]=c->r[1]+0x00000200u; // 801D7798
  {uint32_t ea=0u+c->r[3]; psq_store(c,30,ea,0,0);} // 801D779C
  {uint32_t ea=c->r[1]+0x00000208u; WF64(ea,c->f[31]);} // 801D77A0
  c->r[3]=c->r[1]+0x00000210u; // 801D77A4
  {uint32_t ea=0u+c->r[3]; psq_store(c,31,ea,0,0);} // 801D77A8
  c->r[3]=c->cr; // 801D77AC
  W32(c->r[1]+0x00000298u,c->r[3]); // 801D77B0
  c->r[3]=R32(c->r[1]+0x00000000u); // 801D77B4
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D77B8
  W32(c->r[1]+0x0000029Cu,c->r[3]); // 801D77BC
  W32(c->r[1]+0x000002A4u,c->r[3]); // 801D77C0
  W32(c->r[1]+0x000002A8u,c->r[4]); // 801D77C4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D77C8
  W32(c->r[1]+0x000002ACu,c->r[3]); // 801D77CC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801D77D0
  W32(c->r[1]+0x000002B0u,c->r[3]); // 801D77D4
  c->r[3]=R32(c->r[1]+0x00000010u); // 801D77D8
  W32(c->r[1]+0x000002B4u,c->r[3]); // 801D77DC
  c->r[3]=c->r[1]+0x00000018u; // 801D77E0
  c->lr=0x801D77E8u; f_801D72B0(c); // 801D77E4
  c->r[0]=c->r[0]|0x00000000u; // 801D77E8
  c->r[0]=R32(c->r[1]+0x000002C4u); // 801D77EC
  c->lr=c->r[0]; // 801D77F0
  c->r[1]=c->r[1]+0x000002C0u; // 801D77F4
  return; // 801D77F8
}

// fn_801D77FC
void f_801D77FC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D77FC
  cmps(c,0,(int32_t)c->r[0],0); // 801D7800
  if (crb(c,2)) return; // 801D7804
  c->r[12]=R32(c->r[3]+0x00000008u); // 801D7808
  cmps(c,0,(int32_t)c->r[12],0); // 801D780C
  if (crb(c,2)) return; // 801D7810
  c->r[3]=c->r[0]|c->r[0]; // 801D7814
  c->r[4]=0u+0xFFFFFFFFu; // 801D7818
  c->ctr=c->r[12]; // 801D781C
  if (true) { dispatch(c,c->ctr); return; } // 801D7820
  return; // 801D7824
}

// fn_801D7828
void f_801D7828(Ctx* __restrict c) {
  c->r[3]=0u+0x80250000u; // 801D7828
  c->r[3]=c->r[3]+0xFFFF98CCu; // 801D782C
  return; // 801D7830
}

// __close_all
void f_801D7834(Ctx* __restrict c) {
  trace_call(0x801D7834u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7834
  c->r[0]=c->lr; // 801D7838
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D783C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7840
  c->r[31]=0u+0x00000000u; // 801D7844
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7848
  c->r[30]=0u+0x00000003u; // 801D784C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7850
  c->r[29]=0u+0x80250000u; // 801D7854
  c->r[29]=c->r[29]+0xFFFF98E0u; // 801D7858
  goto L_801D78B4; // 801D785C
L_801D7860:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D7860
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 801D7864
  if (crb(c,2)) { goto L_801D7874; } // 801D7868
  c->r[3]=c->r[29]|c->r[29]; // 801D786C
  c->lr=0x801D7874u; f_801D87FC(c); // 801D7870
L_801D7874:;
  c->r[3]=c->r[29]|c->r[29]; // 801D7874
  c->r[29]=R32(c->r[29]+0x0000004Cu); // 801D7878
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D787C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7880
  if (crb(c,2)) { goto L_801D7890; } // 801D7884
  c->lr=0x801D788Cu; f_800D96F0(c); // 801D7888
  goto L_801D78B4; // 801D788C
L_801D7890:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D7890
  cmps(c,0,(int32_t)c->r[29],0); // 801D7894
  c->r[0]=(rotl(c->r[30],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 801D7898
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D789C
  if (crb(c,2)) { goto L_801D78B4; } // 801D78A0
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 801D78A4
  cmps(c,0,(int32_t)c->r[0],0); // 801D78A8
  if (crb(c,2)) { goto L_801D78B4; } // 801D78AC
  W32(c->r[3]+0x0000004Cu,c->r[31]); // 801D78B0
L_801D78B4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D78B4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7860; } // 801D78B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D78BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D78C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D78C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D78C8
  c->lr=c->r[0]; // 801D78CC
  c->r[1]=c->r[1]+0x00000020u; // 801D78D0
  return; // 801D78D4
}

// __flush_all
void f_801D78D8(Ctx* __restrict c) {
  trace_call(0x801D78D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D78D8
  c->r[0]=c->lr; // 801D78DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D78E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D78E4
  c->r[31]=0u+0x00000000u; // 801D78E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D78EC
  c->r[30]=0u+0x80250000u; // 801D78F0
  c->r[30]=c->r[30]+0xFFFF98E0u; // 801D78F4
  goto L_801D7920; // 801D78F8
L_801D78FC:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D78FC
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 801D7900
  if (crb(c,2)) { goto L_801D791C; } // 801D7904
  c->r[3]=c->r[30]|c->r[30]; // 801D7908
  c->lr=0x801D7910u; f_801D88B8(c); // 801D790C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7910
  if (crb(c,2)) { goto L_801D791C; } // 801D7914
  c->r[31]=0u+0xFFFFFFFFu; // 801D7918
L_801D791C:;
  c->r[30]=R32(c->r[30]+0x0000004Cu); // 801D791C
L_801D7920:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D7920
  if (!crb(c,2)) { IRQCHK(c); goto L_801D78FC; } // 801D7924
  c->r[3]=c->r[31]|c->r[31]; // 801D7928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D792C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7930
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7934
  c->lr=c->r[0]; // 801D7938
  c->r[1]=c->r[1]+0x00000010u; // 801D793C
  return; // 801D7940
}

// __ull2dec
void f_801D7944(Ctx* __restrict c) {
  trace_call(0x801D7944u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7944
  c->r[0]=c->lr; // 801D7948
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D794C
  c->r[0]=0u+0x00000000u; // 801D7950
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7954
  c->r[31]=c->r[5]|c->r[5]; // 801D7958
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D795C
  c->r[30]=c->r[6]|c->r[6]; // 801D7960
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7964
  c->r[29]=c->r[3]|c->r[3]; // 801D7968
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D796C
  W8(c->r[3]+0x00000004u,c->r[0]); // 801D7970
  goto L_801D79BC; // 801D7974
L_801D7978:;
  c->r[3]=c->r[31]|c->r[31]; // 801D7978
  c->r[4]=c->r[30]|c->r[30]; // 801D797C
  c->r[6]=0u+0x0000000Au; // 801D7980
  c->r[5]=0u+0x00000000u; // 801D7984
  c->lr=0x801D798Cu; f_801D5D08(c); // 801D7988
  c->r[8]=R8(c->r[29]+0x00000004u); // 801D798C
  c->r[3]=c->r[31]|c->r[31]; // 801D7990
  c->r[6]=0u+0x0000000Au; // 801D7994
  c->r[5]=0u+0x00000000u; // 801D7998
  c->r[7]=c->r[29]+c->r[8]; // 801D799C
  c->r[0]=c->r[8]+0x00000001u; // 801D79A0
  W8(c->r[7]+0x00000005u,c->r[4]); // 801D79A4
  c->r[4]=c->r[30]|c->r[30]; // 801D79A8
  W8(c->r[29]+0x00000004u,c->r[0]); // 801D79AC
  c->lr=0x801D79B4u; f_801D5AE4(c); // 801D79B0
  c->r[30]=c->r[4]|c->r[4]; // 801D79B4
  c->r[31]=c->r[3]|c->r[3]; // 801D79B8
L_801D79BC:;
  c->r[0]=c->r[30]|c->r[31]; cr0(c,c->r[0]); // 801D79BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7978; } // 801D79C0
  c->r[0]=R8(c->r[29]+0x00000004u); // 801D79C4
  c->r[4]=c->r[29]+0x00000005u; // 801D79C8
  c->r[3]=c->r[29]+c->r[0]; // 801D79CC
  c->r[3]=c->r[3]+0x00000005u; // 801D79D0
  goto L_801D79EC; // 801D79D4
L_801D79D8:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 801D79D8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D79DC
  W8(c->r[4]+0x00000000u,c->r[0]); // 801D79E0
  c->r[4]=c->r[4]+0x00000001u; // 801D79E4
  W8(c->r[3]+0x00000000u,c->r[5]); // 801D79E8
L_801D79EC:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D79EC
  cmpu(c,0,c->r[4],c->r[3]); // 801D79F0
  if (crb(c,0)) { IRQCHK(c); goto L_801D79D8; } // 801D79F4
  c->r[3]=R8(c->r[29]+0x00000004u); // 801D79F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D79FC
  W16(c->r[29]+0x00000002u,c->r[0]); // 801D7A00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7A04
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7A08
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D7A0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7A10
  c->lr=c->r[0]; // 801D7A14
  c->r[1]=c->r[1]+0x00000020u; // 801D7A18
  return; // 801D7A1C
}

// __timesdec
void f_801D7A20(Ctx* __restrict c) {
  trace_call(0x801D7A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7A20
  c->r[6]=0u+0xCCCD0000u; // 801D7A24
  c->r[8]=R8(c->r[4]+0x00000004u); // 801D7A28
  c->r[9]=c->r[6]+0xFFFFCCCDu; // 801D7A2C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801D7A30
  c->r[0]=c->r[1]+0x00000008u; // 801D7A34
  c->r[7]=R8(c->r[5]+0x00000004u); // 801D7A38
  c->r[11]=0u+0x00000000u; // 801D7A3C
  W32(c->r[1]+0x00000058u,c->r[30]); // 801D7A40
  c->r[12]=c->r[8]+c->r[7]; // 801D7A44
  W32(c->r[1]+0x00000054u,c->r[29]); // 801D7A48
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 801D7A4C
  c->r[6]=c->r[0]+c->r[12]; // 801D7A50
  c->r[6]=c->r[6]+0x00000001u; // 801D7A54
  W8(c->r[3]+0x00000000u,c->r[11]); // 801D7A58
  c->r[0]=c->r[6]|c->r[6]; // 801D7A5C
  goto L_801D7B90; // 801D7A60
L_801D7A64:;
  c->r[7]=R8(c->r[5]+0x00000004u); // 801D7A64
  c->r[31]=c->r[7]+0xFFFFFFFFu; // 801D7A68
  c->r[7]=c->r[12]-c->r[31]; // 801D7A6C
  c->r[30]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 801D7A70
  if (!crb(c,0)) { goto L_801D7A80; } // 801D7A74
  c->r[30]=0u+0x00000000u; // 801D7A78
  c->r[31]=c->r[12]+0xFFFFFFFFu; // 801D7A7C
L_801D7A80:;
  c->r[7]=R8(c->r[4]+0x00000004u); // 801D7A80
  c->r[8]=c->r[5]+c->r[31]; // 801D7A84
  c->r[31]=c->r[31]+0x00000001u; // 801D7A88
  c->r[10]=c->r[4]+c->r[30]; // 801D7A8C
  c->r[7]=c->r[7]-c->r[30]; // 801D7A90
  c->r[29]=c->r[8]+0x00000005u; // 801D7A94
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[7]); // 801D7A98
  c->r[30]=c->r[10]+0x00000005u; // 801D7A9C
  if (!crb(c,1)) { goto L_801D7AA8; } // 801D7AA0
  c->r[31]=c->r[7]|c->r[7]; // 801D7AA4
L_801D7AA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D7AA8
  if (!crb(c,1)) { goto L_801D7B70; } // 801D7AAC
  c->r[7]=rotl(c->r[31],29)&0x1FFFFFFFu; cr0(c,c->r[7]); // 801D7AB0
  c->ctr=c->r[7]; // 801D7AB4
  if (crb(c,2)) { goto L_801D7B50; } // 801D7AB8
L_801D7ABC:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 801D7ABC
  c->r[8]=R8(c->r[29]+0x00000000u); // 801D7AC0
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7AC4
  c->r[10]=R8(c->r[30]+0x00000001u); // 801D7AC8
  c->r[8]=R8(c->r[29]+0xFFFFFFFFu); // 801D7ACC
  c->r[11]=c->r[11]+c->r[7]; // 801D7AD0
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7AD4
  c->r[10]=R8(c->r[30]+0x00000002u); // 801D7AD8
  c->r[8]=R8(c->r[29]+0xFFFFFFFEu); // 801D7ADC
  c->r[11]=c->r[11]+c->r[7]; // 801D7AE0
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7AE4
  c->r[10]=R8(c->r[30]+0x00000003u); // 801D7AE8
  c->r[8]=R8(c->r[29]+0xFFFFFFFDu); // 801D7AEC
  c->r[11]=c->r[11]+c->r[7]; // 801D7AF0
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7AF4
  c->r[10]=R8(c->r[30]+0x00000004u); // 801D7AF8
  c->r[8]=R8(c->r[29]+0xFFFFFFFCu); // 801D7AFC
  c->r[11]=c->r[11]+c->r[7]; // 801D7B00
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7B04
  c->r[10]=R8(c->r[30]+0x00000005u); // 801D7B08
  c->r[8]=R8(c->r[29]+0xFFFFFFFBu); // 801D7B0C
  c->r[11]=c->r[11]+c->r[7]; // 801D7B10
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7B14
  c->r[10]=R8(c->r[30]+0x00000006u); // 801D7B18
  c->r[8]=R8(c->r[29]+0xFFFFFFFAu); // 801D7B1C
  c->r[11]=c->r[11]+c->r[7]; // 801D7B20
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7B24
  c->r[10]=R8(c->r[30]+0x00000007u); // 801D7B28
  c->r[8]=R8(c->r[29]+0xFFFFFFF9u); // 801D7B2C
  c->r[30]=c->r[30]+0x00000008u; // 801D7B30
  c->r[29]=c->r[29]+0xFFFFFFF8u; // 801D7B34
  c->r[11]=c->r[11]+c->r[7]; // 801D7B38
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7B3C
  c->r[11]=c->r[11]+c->r[7]; // 801D7B40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D7ABC; } // 801D7B44
  c->r[31]=c->r[31]&0x00000007u; cr0(c,c->r[31]); // 801D7B48
  if (crb(c,2)) { goto L_801D7B70; } // 801D7B4C
L_801D7B50:;
  c->ctr=c->r[31]; // 801D7B50
L_801D7B54:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 801D7B54
  c->r[30]=c->r[30]+0x00000001u; // 801D7B58
  c->r[8]=R8(c->r[29]+0x00000000u); // 801D7B5C
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 801D7B60
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 801D7B64
  c->r[11]=c->r[11]+c->r[7]; // 801D7B68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D7B54; } // 801D7B6C
L_801D7B70:;
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[11])>>32); // 801D7B70
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 801D7B74
  c->r[7]=c->r[8]|c->r[8]; // 801D7B78
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 801D7B7C
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)10); // 801D7B80
  c->r[8]=c->r[11]-c->r[8]; // 801D7B84
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[8]); c->r[6]=ea;} // 801D7B88
  c->r[11]=rotl(c->r[7],29)&0x1FFFFFFFu; // 801D7B8C
L_801D7B90:;
  cmps(c,0,(int32_t)c->r[12],0); // 801D7B90
  if (crb(c,1)) { IRQCHK(c); goto L_801D7A64; } // 801D7B94
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 801D7B98
  cmps(c,0,(int32_t)c->r[11],0); // 801D7B9C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 801D7BA0
  c->r[4]=c->r[7]+c->r[4]; // 801D7BA4
  W16(c->r[3]+0x00000002u,c->r[4]); // 801D7BA8
  if (crb(c,2)) { goto L_801D7BC0; } // 801D7BAC
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[11]); c->r[6]=ea;} // 801D7BB0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801D7BB4
  c->r[4]=c->r[4]+0x00000001u; // 801D7BB8
  W16(c->r[3]+0x00000002u,c->r[4]); // 801D7BBC
L_801D7BC0:;
  c->r[7]=0u+0x00000000u; // 801D7BC0
  goto L_801D7BDC; // 801D7BC4
L_801D7BC8:;
  c->r[4]=c->r[3]+c->r[7]; // 801D7BC8
  c->r[5]=R8(c->r[6]+0x00000000u); // 801D7BCC
  W8(c->r[4]+0x00000005u,c->r[5]); // 801D7BD0
  c->r[7]=c->r[7]+0x00000001u; // 801D7BD4
  c->r[6]=c->r[6]+0x00000001u; // 801D7BD8
L_801D7BDC:;
  cmps(c,0,(int32_t)c->r[7],36); // 801D7BDC
  if (!crb(c,0)) { goto L_801D7BEC; } // 801D7BE0
  cmpu(c,0,c->r[6],c->r[0]); // 801D7BE4
  if (crb(c,0)) { IRQCHK(c); goto L_801D7BC8; } // 801D7BE8
L_801D7BEC:;
  cmpu(c,0,c->r[6],c->r[0]); // 801D7BEC
  W8(c->r[3]+0x00000004u,c->r[7]); // 801D7BF0
  if (!crb(c,0)) { goto L_801D7C94; } // 801D7BF4
  c->r[4]=R8(c->r[6]+0x00000000u); // 801D7BF8
  cmpu(c,0,c->r[4],0x00000005u); // 801D7BFC
  if (crb(c,0)) { goto L_801D7C94; } // 801D7C00
  if (!crb(c,2)) { goto L_801D7C3C; } // 801D7C04
  c->r[5]=c->r[6]+0x00000001u; // 801D7C08
  c->r[4]=c->r[0]-c->r[5]; // 801D7C0C
  c->ctr=c->r[4]; // 801D7C10
  cmpu(c,0,c->r[5],c->r[0]); // 801D7C14
  if (!crb(c,0)) { goto L_801D7C30; } // 801D7C18
L_801D7C1C:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D7C1C
  cmps(c,0,(int32_t)c->r[0],0); // 801D7C20
  if (!crb(c,2)) { goto L_801D7C3C; } // 801D7C24
  c->r[5]=c->r[5]+0x00000001u; // 801D7C28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D7C1C; } // 801D7C2C
L_801D7C30:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 801D7C30
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D7C34
  if (crb(c,2)) { goto L_801D7C94; } // 801D7C38
L_801D7C3C:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 801D7C3C
  c->r[6]=c->r[3]+0x00000005u; // 801D7C40
  c->r[0]=0u+0x00000000u; // 801D7C44
  c->r[5]=c->r[6]+c->r[4]; // 801D7C48
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D7C4C
L_801D7C50:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801D7C50
  cmpu(c,0,c->r[4],0x00000009u); // 801D7C54
  if (!crb(c,0)) { goto L_801D7C68; } // 801D7C58
  c->r[0]=c->r[4]+0x00000001u; // 801D7C5C
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D7C60
  goto L_801D7C94; // 801D7C64
L_801D7C68:;
  cmpu(c,0,c->r[5],c->r[6]); // 801D7C68
  if (!crb(c,2)) { goto L_801D7C88; } // 801D7C6C
  c->r[0]=0u+0x00000001u; // 801D7C70
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D7C74
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801D7C78
  c->r[0]=c->r[4]+0x00000001u; // 801D7C7C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801D7C80
  goto L_801D7C94; // 801D7C84
L_801D7C88:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D7C88
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D7C8C
  IRQCHK(c); goto L_801D7C50; // 801D7C90
L_801D7C94:;
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801D7C94
  c->r[30]=R32(c->r[1]+0x00000058u); // 801D7C98
  c->r[29]=R32(c->r[1]+0x00000054u); // 801D7C9C
  c->r[1]=c->r[1]+0x00000060u; // 801D7CA0
  return; // 801D7CA4
}

// __str2dec
void f_801D7CA8(Ctx* __restrict c) {
  trace_call(0x801D7CA8u);
  c->r[0]=0u+0x00000000u; // 801D7CA8
  W16(c->r[3]+0x00000002u,c->r[5]); // 801D7CAC
  c->r[7]=0u+0x00000000u; // 801D7CB0
  W8(c->r[3]+0x00000000u,c->r[0]); // 801D7CB4
  goto L_801D7CD4; // 801D7CB8
L_801D7CBC:;
  c->r[6]=R8(c->r[4]+0x00000000u); // 801D7CBC
  c->r[5]=c->r[3]+c->r[7]; // 801D7CC0
  c->r[4]=c->r[4]+0x00000001u; // 801D7CC4
  c->r[7]=c->r[7]+0x00000001u; // 801D7CC8
  c->r[0]=c->r[6]+0xFFFFFFD0u; // 801D7CCC
  W8(c->r[5]+0x00000005u,c->r[0]); // 801D7CD0
L_801D7CD4:;
  cmps(c,0,(int32_t)c->r[7],36); // 801D7CD4
  if (!crb(c,0)) { goto L_801D7CE8; } // 801D7CD8
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D7CDC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D7CE0
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7CBC; } // 801D7CE4
L_801D7CE8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D7CE8
  W8(c->r[3]+0x00000004u,c->r[7]); // 801D7CEC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D7CF0
  if (crb(c,2)) return; // 801D7CF4
  cmps(c,0,(int32_t)c->r[0],5); // 801D7CF8
  if (crb(c,0)) return; // 801D7CFC
  if (crb(c,1)) { goto L_801D7D38; } // 801D7D00
  c->r[5]=c->r[4]+0x00000001u; // 801D7D04
  goto L_801D7D1C; // 801D7D08
L_801D7D0C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801D7D0C
  cmps(c,0,(int32_t)c->r[0],48); // 801D7D10
  if (!crb(c,2)) { goto L_801D7D38; } // 801D7D14
  c->r[5]=c->r[5]+0x00000001u; // 801D7D18
L_801D7D1C:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801D7D1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 801D7D20
  if (!crb(c,2)) { IRQCHK(c); goto L_801D7D0C; } // 801D7D24
  c->r[4]=c->r[7]+c->r[3]; // 801D7D28
  c->r[0]=R8(c->r[4]+0x00000004u); // 801D7D2C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D7D30
  if (crb(c,2)) return; // 801D7D34
L_801D7D38:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 801D7D38
  c->r[6]=c->r[3]+0x00000005u; // 801D7D3C
  c->r[0]=0u+0x00000000u; // 801D7D40
  c->r[5]=c->r[6]+c->r[4]; // 801D7D44
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D7D48
L_801D7D4C:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 801D7D4C
  cmpu(c,0,c->r[4],0x00000009u); // 801D7D50
  if (!crb(c,0)) { goto L_801D7D64; } // 801D7D54
  c->r[0]=c->r[4]+0x00000001u; // 801D7D58
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D7D5C
  return; // 801D7D60
L_801D7D64:;
  cmpu(c,0,c->r[5],c->r[6]); // 801D7D64
  if (!crb(c,2)) { goto L_801D7D84; } // 801D7D68
  c->r[0]=0u+0x00000001u; // 801D7D6C
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D7D70
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801D7D74
  c->r[0]=c->r[4]+0x00000001u; // 801D7D78
  W16(c->r[3]+0x00000002u,c->r[0]); // 801D7D7C
  return; // 801D7D80
L_801D7D84:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D7D84
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D7D88
  IRQCHK(c); goto L_801D7D4C; // 801D7D8C
  return; // 801D7D90
}

// __two_exp
void f_801D7D94(Ctx* __restrict c) {
  trace_call(0x801D7D94u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7D94
  c->r[0]=c->lr; // 801D7D98
  W32(c->r[1]+0x00000074u,c->r[0]); // 801D7D9C
  c->r[0]=c->r[4]+0x00000040u; // 801D7DA0
  cmpu(c,0,c->r[0],0x00000048u); // 801D7DA4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801D7DA8
  c->r[31]=c->r[3]|c->r[3]; // 801D7DAC
  W32(c->r[1]+0x00000068u,c->r[30]); // 801D7DB0
  c->r[30]=c->r[4]|c->r[4]; // 801D7DB4
  if (crb(c,1)) { goto L_801D7FC8; } // 801D7DB8
  c->r[5]=0u+0x80250000u; // 801D7DBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D7DC0
  c->r[5]=c->r[5]+0xFFFF9A20u; // 801D7DC4
  c->r[5]=R32(c->r[5]+c->r[0]); // 801D7DC8
  c->ctr=c->r[5]; // 801D7DCC
  if (true) { switch (c->ctr) { case 0x801D7DD4u: goto L_801D7DD4; case 0x801D7DE8u: goto L_801D7DE8; case 0x801D7E00u: goto L_801D7E00; case 0x801D7E18u: goto L_801D7E18; case 0x801D7E30u: goto L_801D7E30; case 0x801D7E48u: goto L_801D7E48; case 0x801D7E60u: goto L_801D7E60; case 0x801D7E78u: goto L_801D7E78; case 0x801D7E90u: goto L_801D7E90; case 0x801D7EA8u: goto L_801D7EA8; case 0x801D7EC0u: goto L_801D7EC0; case 0x801D7ED8u: goto L_801D7ED8; case 0x801D7EF0u: goto L_801D7EF0; case 0x801D7F08u: goto L_801D7F08; case 0x801D7F20u: goto L_801D7F20; case 0x801D7F38u: goto L_801D7F38; case 0x801D7F50u: goto L_801D7F50; case 0x801D7F68u: goto L_801D7F68; case 0x801D7F80u: goto L_801D7F80; case 0x801D7F98u: goto L_801D7F98; case 0x801D7FB0u: goto L_801D7FB0; case 0x801D7FC8u: goto L_801D7FC8; default: break; } dispatch(c,c->ctr); return; } // 801D7DD0
L_801D7DD4:;
  c->r[4]=0u+0x80200000u; // 801D7DD4
  c->r[5]=0u+0xFFFFFFECu; // 801D7DD8
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7DDC
  c->lr=0x801D7DE4u; f_801D7CA8(c); // 801D7DE0
  goto L_801D8098; // 801D7DE4
L_801D7DE8:;
  c->r[4]=0u+0x80200000u; // 801D7DE8
  c->r[5]=0u+0xFFFFFFF0u; // 801D7DEC
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7DF0
  c->r[4]=c->r[4]+0x0000002Eu; // 801D7DF4
  c->lr=0x801D7DFCu; f_801D7CA8(c); // 801D7DF8
  goto L_801D8098; // 801D7DFC
L_801D7E00:;
  c->r[4]=0u+0x80200000u; // 801D7E00
  c->r[5]=0u+0xFFFFFFF6u; // 801D7E04
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7E08
  c->r[4]=c->r[4]+0x00000055u; // 801D7E0C
  c->lr=0x801D7E14u; f_801D7CA8(c); // 801D7E10
  goto L_801D8098; // 801D7E14
L_801D7E18:;
  c->r[4]=0u+0x80200000u; // 801D7E18
  c->r[5]=0u+0xFFFFFFFBu; // 801D7E1C
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7E20
  c->r[4]=c->r[4]+0x0000006Du; // 801D7E24
  c->lr=0x801D7E2Cu; f_801D7CA8(c); // 801D7E28
  goto L_801D8098; // 801D7E2C
L_801D7E30:;
  c->r[4]=0u+0x80200000u; // 801D7E30
  c->r[5]=0u+0xFFFFFFFDu; // 801D7E34
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7E38
  c->r[4]=c->r[4]+0x0000007Au; // 801D7E3C
  c->lr=0x801D7E44u; f_801D7CA8(c); // 801D7E40
  goto L_801D8098; // 801D7E44
L_801D7E48:;
  c->r[4]=0u+0x80200000u; // 801D7E48
  c->r[5]=0u+0xFFFFFFFDu; // 801D7E4C
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7E50
  c->r[4]=c->r[4]+0x00000081u; // 801D7E54
  c->lr=0x801D7E5Cu; f_801D7CA8(c); // 801D7E58
  goto L_801D8098; // 801D7E5C
L_801D7E60:;
  c->r[4]=0u+0x80200000u; // 801D7E60
  c->r[5]=0u+0xFFFFFFFEu; // 801D7E64
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7E68
  c->r[4]=c->r[4]+0x00000087u; // 801D7E6C
  c->lr=0x801D7E74u; f_801D7CA8(c); // 801D7E70
  goto L_801D8098; // 801D7E74
L_801D7E78:;
  c->r[4]=0u+0x80200000u; // 801D7E78
  c->r[5]=0u+0xFFFFFFFEu; // 801D7E7C
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7E80
  c->r[4]=c->r[4]+0x0000008Du; // 801D7E84
  c->lr=0x801D7E8Cu; f_801D7CA8(c); // 801D7E88
  goto L_801D8098; // 801D7E8C
L_801D7E90:;
  c->r[4]=0u+0x80200000u; // 801D7E90
  c->r[5]=0u+0xFFFFFFFEu; // 801D7E94
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7E98
  c->r[4]=c->r[4]+0x00000092u; // 801D7E9C
  c->lr=0x801D7EA4u; f_801D7CA8(c); // 801D7EA0
  goto L_801D8098; // 801D7EA4
L_801D7EA8:;
  c->r[4]=0u+0x80200000u; // 801D7EA8
  c->r[5]=0u+0xFFFFFFFFu; // 801D7EAC
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7EB0
  c->r[4]=c->r[4]+0x00000096u; // 801D7EB4
  c->lr=0x801D7EBCu; f_801D7CA8(c); // 801D7EB8
  goto L_801D8098; // 801D7EBC
L_801D7EC0:;
  c->r[4]=0u+0x80200000u; // 801D7EC0
  c->r[5]=0u+0xFFFFFFFFu; // 801D7EC4
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7EC8
  c->r[4]=c->r[4]+0x0000009Au; // 801D7ECC
  c->lr=0x801D7ED4u; f_801D7CA8(c); // 801D7ED0
  goto L_801D8098; // 801D7ED4
L_801D7ED8:;
  c->r[4]=0u+0x80200000u; // 801D7ED8
  c->r[5]=0u+0xFFFFFFFFu; // 801D7EDC
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7EE0
  c->r[4]=c->r[4]+0x0000009Du; // 801D7EE4
  c->lr=0x801D7EECu; f_801D7CA8(c); // 801D7EE8
  goto L_801D8098; // 801D7EEC
L_801D7EF0:;
  c->r[4]=0u+0x80200000u; // 801D7EF0
  c->r[5]=0u+0x00000000u; // 801D7EF4
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7EF8
  c->r[4]=c->r[4]+0x0000009Fu; // 801D7EFC
  c->lr=0x801D7F04u; f_801D7CA8(c); // 801D7F00
  goto L_801D8098; // 801D7F04
L_801D7F08:;
  c->r[4]=0u+0x80200000u; // 801D7F08
  c->r[5]=0u+0x00000000u; // 801D7F0C
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7F10
  c->r[4]=c->r[4]+0x000000A1u; // 801D7F14
  c->lr=0x801D7F1Cu; f_801D7CA8(c); // 801D7F18
  goto L_801D8098; // 801D7F1C
L_801D7F20:;
  c->r[4]=0u+0x80200000u; // 801D7F20
  c->r[5]=0u+0x00000000u; // 801D7F24
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7F28
  c->r[4]=c->r[4]+0x000000A3u; // 801D7F2C
  c->lr=0x801D7F34u; f_801D7CA8(c); // 801D7F30
  goto L_801D8098; // 801D7F34
L_801D7F38:;
  c->r[4]=0u+0x80200000u; // 801D7F38
  c->r[5]=0u+0x00000000u; // 801D7F3C
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7F40
  c->r[4]=c->r[4]+0x000000A5u; // 801D7F44
  c->lr=0x801D7F4Cu; f_801D7CA8(c); // 801D7F48
  goto L_801D8098; // 801D7F4C
L_801D7F50:;
  c->r[4]=0u+0x80200000u; // 801D7F50
  c->r[5]=0u+0x00000001u; // 801D7F54
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7F58
  c->r[4]=c->r[4]+0x000000A7u; // 801D7F5C
  c->lr=0x801D7F64u; f_801D7CA8(c); // 801D7F60
  goto L_801D8098; // 801D7F64
L_801D7F68:;
  c->r[4]=0u+0x80200000u; // 801D7F68
  c->r[5]=0u+0x00000001u; // 801D7F6C
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7F70
  c->r[4]=c->r[4]+0x000000AAu; // 801D7F74
  c->lr=0x801D7F7Cu; f_801D7CA8(c); // 801D7F78
  goto L_801D8098; // 801D7F7C
L_801D7F80:;
  c->r[4]=0u+0x80200000u; // 801D7F80
  c->r[5]=0u+0x00000001u; // 801D7F84
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7F88
  c->r[4]=c->r[4]+0x000000ADu; // 801D7F8C
  c->lr=0x801D7F94u; f_801D7CA8(c); // 801D7F90
  goto L_801D8098; // 801D7F94
L_801D7F98:;
  c->r[4]=0u+0x80200000u; // 801D7F98
  c->r[5]=0u+0x00000002u; // 801D7F9C
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7FA0
  c->r[4]=c->r[4]+0x000000B0u; // 801D7FA4
  c->lr=0x801D7FACu; f_801D7CA8(c); // 801D7FA8
  goto L_801D8098; // 801D7FAC
L_801D7FB0:;
  c->r[4]=0u+0x80200000u; // 801D7FB0
  c->r[5]=0u+0x00000002u; // 801D7FB4
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D7FB8
  c->r[4]=c->r[4]+0x000000B4u; // 801D7FBC
  c->lr=0x801D7FC4u; f_801D7CA8(c); // 801D7FC0
  goto L_801D8098; // 801D7FC4
L_801D7FC8:;
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801D7FC8
  c->r[3]=c->r[1]+0x00000034u; // 801D7FCC
  c->r[0]=c->r[0]+c->r[4]; // 801D7FD0
  c->r[4]=sraw(c,c->r[0],1); // 801D7FD4
  c->lr=0x801D7FDCu; f_801D7D94(c); // 801D7FD8
  c->r[4]=c->r[1]+0x00000034u; // 801D7FDC
  c->r[3]=c->r[31]|c->r[31]; // 801D7FE0
  c->r[5]=c->r[4]|c->r[4]; // 801D7FE4
  c->lr=0x801D7FECu; f_801D7A20(c); // 801D7FE8
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 801D7FEC
  if (crb(c,2)) { goto L_801D8098; } // 801D7FF0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801D7FF4
  cmps(c,0,(int32_t)c->r[30],0); // 801D7FF8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801D7FFC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D8000
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D8004
  c->r[3]=R32(c->r[31]+0x00000008u); // 801D8008
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801D800C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8010
  W32(c->r[1]+0x00000010u,c->r[3]); // 801D8014
  c->r[3]=R32(c->r[31]+0x00000010u); // 801D8018
  c->r[0]=R32(c->r[31]+0x00000014u); // 801D801C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D8020
  W32(c->r[1]+0x00000018u,c->r[3]); // 801D8024
  c->r[3]=R32(c->r[31]+0x00000018u); // 801D8028
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801D802C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8030
  W32(c->r[1]+0x00000020u,c->r[3]); // 801D8034
  c->r[3]=R32(c->r[31]+0x00000020u); // 801D8038
  c->r[0]=R32(c->r[31]+0x00000024u); // 801D803C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801D8040
  W32(c->r[1]+0x00000028u,c->r[3]); // 801D8044
  c->r[0]=R16(c->r[31]+0x00000028u); // 801D8048
  W16(c->r[1]+0x00000030u,c->r[0]); // 801D804C
  if (!crb(c,1)) { goto L_801D8070; } // 801D8050
  c->r[4]=0u+0x80200000u; // 801D8054
  c->r[3]=c->r[1]+0x00000034u; // 801D8058
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D805C
  c->r[5]=0u+0x00000000u; // 801D8060
  c->r[4]=c->r[4]+0x000000A1u; // 801D8064
  c->lr=0x801D806Cu; f_801D7CA8(c); // 801D8068
  goto L_801D8088; // 801D806C
L_801D8070:;
  c->r[4]=0u+0x80200000u; // 801D8070
  c->r[3]=c->r[1]+0x00000034u; // 801D8074
  c->r[4]=c->r[4]+0xFFFFA9D0u; // 801D8078
  c->r[5]=0u+0xFFFFFFFFu; // 801D807C
  c->r[4]=c->r[4]+0x0000009Du; // 801D8080
  c->lr=0x801D8088u; f_801D7CA8(c); // 801D8084
L_801D8088:;
  c->r[3]=c->r[31]|c->r[31]; // 801D8088
  c->r[4]=c->r[1]+0x00000008u; // 801D808C
  c->r[5]=c->r[1]+0x00000034u; // 801D8090
  c->lr=0x801D8098u; f_801D7A20(c); // 801D8094
L_801D8098:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 801D8098
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801D809C
  c->r[30]=R32(c->r[1]+0x00000068u); // 801D80A0
  c->lr=c->r[0]; // 801D80A4
  c->r[1]=c->r[1]+0x00000070u; // 801D80A8
  return; // 801D80AC
}

// fn_801D80B0
void f_801D80B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D80B0
  c->r[0]=c->lr; // 801D80B4
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D80B8
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[31]);} // 801D80BC
  c->f[31]=c->f[1]; // 801D80C0
  W32(c->r[1]+0x00000084u,c->r[31]); // 801D80C4
  W32(c->r[1]+0x00000080u,c->r[30]); // 801D80C8
  c->r[30]=c->r[3]|c->r[3]; // 801D80CC
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 801D80D0
  c->lr=0x801D80D8u; f_801D92F4(c); // 801D80D4
  {uint32_t ea=c->r[2]+0xFFFFAE68u; c->f[0]=RF64(ea);} // 801D80D8
  c->r[0]=0u-c->r[3]; // 801D80DC
  c->r[0]=c->r[0]|c->r[3]; // 801D80E0
  fcmp(c,0,c->f[0],c->f[31]); // 801D80E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801D80E8
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D80EC
  if (!crb(c,2)) { goto L_801D8110; } // 801D80F0
  c->r[3]=0u+0x00000000u; // 801D80F4
  c->r[0]=0u+0x00000001u; // 801D80F8
  W8(c->r[30]+0x00000000u,c->r[31]); // 801D80FC
  W16(c->r[30]+0x00000002u,c->r[3]); // 801D8100
  W8(c->r[30]+0x00000004u,c->r[0]); // 801D8104
  W8(c->r[30]+0x00000005u,c->r[3]); // 801D8108
  goto L_801D81F4; // 801D810C
L_801D8110:;
  c->f[1]=c->f[31]; // 801D8110
  c->lr=0x801D8118u; f_801D930C(c); // 801D8114
  cmps(c,0,(int32_t)c->r[3],2); // 801D8118
  if (crb(c,1)) { goto L_801D8154; } // 801D811C
  c->f[1]=c->f[31]; // 801D8120
  c->r[3]=0u+0x00000000u; // 801D8124
  c->r[0]=0u+0x00000001u; // 801D8128
  W8(c->r[30]+0x00000000u,c->r[31]); // 801D812C
  W16(c->r[30]+0x00000002u,c->r[3]); // 801D8130
  W8(c->r[30]+0x00000004u,c->r[0]); // 801D8134
  c->lr=0x801D813Cu; f_801D930C(c); // 801D8138
  cmps(c,0,(int32_t)c->r[3],1); // 801D813C
  c->r[0]=0u+0x00000049u; // 801D8140
  if (!crb(c,2)) { goto L_801D814C; } // 801D8144
  c->r[0]=0u+0x0000004Eu; // 801D8148
L_801D814C:;
  W8(c->r[30]+0x00000005u,c->r[0]); // 801D814C
  goto L_801D81F4; // 801D8150
L_801D8154:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D8154
  if (crb(c,2)) { goto L_801D8160; } // 801D8158
  c->f[31]=-c->f[31]; // 801D815C
L_801D8160:;
  c->f[1]=c->f[31]; // 801D8160
  c->r[3]=c->r[1]+0x00000008u; // 801D8164
  c->lr=0x801D816Cu; f_801E1EE8(c); // 801D8168
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 801D816C
  c->f[31]=c->f[1]; // 801D8170
  c->r[4]=R32(c->r[1]+0x00000014u); // 801D8174
  c->r[3]=R32(c->r[1]+0x00000010u); // 801D8178
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D817C
  cmps(c,0,(int32_t)c->r[4],0); // 801D8180
  c->r[0]=c->r[0]&~c->r[4]; // 801D8184
  c->r[3]=c->r[3]|0x00100000u; // 801D8188
  c->r[0]=cntlz(c->r[0]); // 801D818C
  c->r[4]=addc(c,~c->r[0],0x00000020u,1); // 801D8190
  if (!crb(c,2)) { goto L_801D81AC; } // 801D8194
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D8198
  c->r[0]=c->r[0]&~c->r[3]; // 801D819C
  c->r[0]=cntlz(c->r[0]); // 801D81A0
  c->r[3]=addc(c,~c->r[0],0x00000020u,1); // 801D81A4
  c->r[4]=c->r[3]+0x00000020u; // 801D81A8
L_801D81AC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D81AC
  c->r[29]=addc(c,~c->r[4],0x00000035u,1); // 801D81B0
  c->r[3]=c->r[1]+0x00000018u; // 801D81B4
  c->r[4]=c->r[0]-c->r[29]; // 801D81B8
  c->lr=0x801D81C0u; f_801D7D94(c); // 801D81BC
  c->f[1]=c->f[31]; // 801D81C0
  c->r[3]=c->r[29]|c->r[29]; // 801D81C4
  c->lr=0x801D81CCu; f_801E1F70(c); // 801D81C8
  c->lr=0x801D81D0u; f_801D5FD0(c); // 801D81CC
  c->r[5]=c->r[3]|c->r[3]; // 801D81D0
  c->r[6]=c->r[4]|c->r[4]; // 801D81D4
  c->r[3]=c->r[1]+0x00000044u; // 801D81D8
  c->lr=0x801D81E0u; f_801D7944(c); // 801D81DC
  c->r[3]=c->r[30]|c->r[30]; // 801D81E0
  c->r[4]=c->r[1]+0x00000044u; // 801D81E4
  c->r[5]=c->r[1]+0x00000018u; // 801D81E8
  c->lr=0x801D81F0u; f_801D7A20(c); // 801D81EC
  W8(c->r[30]+0x00000000u,c->r[31]); // 801D81F0
L_801D81F4:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801D81F4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[31]=RF64(ea);} // 801D81F8
  c->r[31]=R32(c->r[1]+0x00000084u); // 801D81FC
  c->r[30]=R32(c->r[1]+0x00000080u); // 801D8200
  c->r[29]=R32(c->r[1]+0x0000007Cu); // 801D8204
  c->lr=c->r[0]; // 801D8208
  c->r[1]=c->r[1]+0x00000090u; // 801D820C
  return; // 801D8210
}

// fn_801D8214
void f_801D8214(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8214
  c->r[0]=c->lr; // 801D8218
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D821C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8220
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801D8224
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D8228
  c->r[30]=c->r[4]|c->r[4]; // 801D822C
  c->r[3]=c->r[30]|c->r[30]; // 801D8230
  c->lr=0x801D8238u; f_801D80B0(c); // 801D8234
  c->r[0]=R8(c->r[30]+0x00000005u); // 801D8238
  cmpu(c,0,c->r[0],0x00000009u); // 801D823C
  if (crb(c,1)) { goto L_801D83A0; } // 801D8240
  cmps(c,0,(int32_t)c->r[31],36); // 801D8244
  if (!crb(c,1)) { goto L_801D8250; } // 801D8248
  c->r[31]=0u+0x00000024u; // 801D824C
L_801D8250:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D8250
  if (!crb(c,1)) { goto L_801D833C; } // 801D8254
  c->r[0]=R8(c->r[30]+0x00000004u); // 801D8258
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801D825C
  if (!crb(c,0)) { goto L_801D833C; } // 801D8260
  c->r[4]=c->r[30]+0x00000005u; // 801D8264
  c->r[0]=R8(c->r[4]+c->r[31]); // 801D8268
  c->r[3]=c->r[4]+c->r[31]; // 801D826C
  cmpu(c,0,c->r[0],0x00000005u); // 801D8270
  if (!crb(c,1)) { goto L_801D8280; } // 801D8274
  c->r[4]=0u+0x00000001u; // 801D8278
  goto L_801D82DC; // 801D827C
L_801D8280:;
  if (!crb(c,0)) { goto L_801D828C; } // 801D8280
  c->r[4]=0u+0xFFFFFFFFu; // 801D8284
  goto L_801D82DC; // 801D8288
L_801D828C:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 801D828C
  c->r[3]=c->r[3]+0x00000001u; // 801D8290
  c->r[4]=c->r[4]+c->r[0]; // 801D8294
  c->r[0]=c->r[4]-c->r[3]; // 801D8298
  c->ctr=c->r[0]; // 801D829C
  cmpu(c,0,c->r[3],c->r[4]); // 801D82A0
  if (!crb(c,0)) { goto L_801D82C4; } // 801D82A4
L_801D82A8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D82A8
  cmps(c,0,(int32_t)c->r[0],0); // 801D82AC
  if (crb(c,2)) { goto L_801D82BC; } // 801D82B0
  c->r[4]=0u+0x00000001u; // 801D82B4
  goto L_801D82DC; // 801D82B8
L_801D82BC:;
  c->r[3]=c->r[3]+0x00000001u; // 801D82BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D82A8; } // 801D82C0
L_801D82C4:;
  c->r[3]=c->r[31]+c->r[30]; // 801D82C4
  c->r[4]=0u+0xFFFFFFFFu; // 801D82C8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D82CC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D82D0
  if (crb(c,2)) { goto L_801D82DC; } // 801D82D4
  c->r[4]=0u+0x00000001u; // 801D82D8
L_801D82DC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D82DC
  W8(c->r[30]+0x00000004u,c->r[31]); // 801D82E0
  if (crb(c,0)) { goto L_801D833C; } // 801D82E4
  c->r[4]=c->r[30]+0x00000005u; // 801D82E8
  c->r[0]=0u+0x00000000u; // 801D82EC
  c->r[5]=c->r[4]+c->r[31]; // 801D82F0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D82F4
L_801D82F8:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 801D82F8
  cmpu(c,0,c->r[3],0x00000009u); // 801D82FC
  if (!crb(c,0)) { goto L_801D8310; } // 801D8300
  c->r[0]=c->r[3]+0x00000001u; // 801D8304
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D8308
  goto L_801D833C; // 801D830C
L_801D8310:;
  cmpu(c,0,c->r[5],c->r[4]); // 801D8310
  if (!crb(c,2)) { goto L_801D8330; } // 801D8314
  c->r[0]=0u+0x00000001u; // 801D8318
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D831C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D8320
  c->r[0]=c->r[3]+0x00000001u; // 801D8324
  W16(c->r[30]+0x00000002u,c->r[0]); // 801D8328
  goto L_801D833C; // 801D832C
L_801D8330:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 801D8330
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D8334
  IRQCHK(c); goto L_801D82F8; // 801D8338
L_801D833C:;
  c->r[5]=0u+0x00000000u; // 801D833C
  goto L_801D8358; // 801D8340
L_801D8344:;
  c->r[4]=R8(c->r[30]+0x00000004u); // 801D8344
  c->r[3]=c->r[30]+c->r[4]; // 801D8348
  c->r[0]=c->r[4]+0x00000001u; // 801D834C
  W8(c->r[3]+0x00000005u,c->r[5]); // 801D8350
  W8(c->r[30]+0x00000004u,c->r[0]); // 801D8354
L_801D8358:;
  c->r[3]=R8(c->r[30]+0x00000004u); // 801D8358
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 801D835C
  if (crb(c,0)) { IRQCHK(c); goto L_801D8344; } // 801D8360
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D8364
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 801D8368
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801D836C
  c->r[5]=0u+0x00000000u; // 801D8370
  c->r[0]=c->r[0]-c->r[3]; // 801D8374
  W16(c->r[30]+0x00000002u,c->r[0]); // 801D8378
  goto L_801D8394; // 801D837C
L_801D8380:;
  c->r[4]=c->r[30]+c->r[5]; // 801D8380
  c->r[5]=c->r[5]+0x00000001u; // 801D8384
  c->r[3]=R8(c->r[4]+0x00000005u); // 801D8388
  c->r[0]=c->r[3]+0x00000030u; // 801D838C
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D8390
L_801D8394:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 801D8394
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801D8398
  if (crb(c,0)) { IRQCHK(c); goto L_801D8380; } // 801D839C
L_801D83A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D83A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D83A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D83A8
  c->lr=c->r[0]; // 801D83AC
  c->r[1]=c->r[1]+0x00000010u; // 801D83B0
  return; // 801D83B4
}

// div
void f_801D83B8(Ctx* __restrict c) {
  trace_call(0x801D83B8u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D83B8
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D83BC
  c->r[7]=c->r[3]|c->r[3]; // 801D83C0
  c->r[5]=0u+0x00000001u; // 801D83C4
  c->r[6]=0u+0x00000001u; // 801D83C8
  if (!crb(c,0)) { goto L_801D83D8; } // 801D83CC
  c->r[7]=0u-c->r[3]; // 801D83D0
  c->r[5]=0u+0xFFFFFFFFu; // 801D83D4
L_801D83D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D83D8
  if (!crb(c,0)) { goto L_801D83E8; } // 801D83DC
  c->r[4]=0u-c->r[4]; // 801D83E0
  c->r[6]=0u+0xFFFFFFFFu; // 801D83E4
L_801D83E8:;
  c->r[3]=divw((int32_t)c->r[7],(int32_t)c->r[4]); // 801D83E8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 801D83EC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801D83F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801D83F4
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 801D83F8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801D83FC
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[5]); // 801D8400
  c->r[4]=c->r[0]-c->r[4]; // 801D8404
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801D8408
  c->r[1]=c->r[1]+0x00000010u; // 801D840C
  return; // 801D8410
}

// __prep_buffer
void f_801D8414(Ctx* __restrict c) {
  trace_call(0x801D8414u);
  c->r[4]=R32(c->r[3]+0x00000018u); // 801D8414
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801D8418
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 801D841C
  c->r[5]=R32(c->r[3]+0x00000020u); // 801D8420
  c->r[0]=c->r[4]&c->r[0]; // 801D8424
  W32(c->r[3]+0x00000024u,c->r[6]); // 801D8428
  c->r[0]=c->r[5]-c->r[0]; // 801D842C
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D8430
  W32(c->r[3]+0x00000034u,c->r[4]); // 801D8434
  return; // 801D8438
}

// __flush_buffer
void f_801D843C(Ctx* __restrict c) {
  trace_call(0x801D843Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D843C
  c->r[0]=c->lr; // 801D8440
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8444
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8448
  c->r[31]=c->r[4]|c->r[4]; // 801D844C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D8450
  c->r[30]=c->r[3]|c->r[3]; // 801D8454
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 801D8458
  c->r[0]=R32(c->r[3]+0x00000024u); // 801D845C
  c->r[0]=c->r[0]-c->r[5]; cr0(c,c->r[0]); // 801D8460
  if (crb(c,2)) { goto L_801D84B4; } // 801D8464
  c->r[12]=R32(c->r[30]+0x00000040u); // 801D8468
  c->r[4]=c->r[5]|c->r[5]; // 801D846C
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D8470
  c->r[5]=c->r[30]+0x00000028u; // 801D8474
  c->r[3]=R32(c->r[3]+0x00000000u); // 801D8478
  c->r[6]=R32(c->r[30]+0x00000048u); // 801D847C
  c->ctr=c->r[12]; // 801D8480
  if (true) { c->lr=0x801D8488u; dispatch(c,c->ctr); } // 801D8484
  cmps(c,0,(int32_t)c->r[31],0); // 801D8488
  if (crb(c,2)) { goto L_801D8498; } // 801D848C
  c->r[0]=R32(c->r[30]+0x00000028u); // 801D8490
  W32(c->r[31]+0x00000000u,c->r[0]); // 801D8494
L_801D8498:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D8498
  if (crb(c,2)) { goto L_801D84A4; } // 801D849C
  goto L_801D84DC; // 801D84A0
L_801D84A4:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 801D84A4
  c->r[0]=R32(c->r[30]+0x00000028u); // 801D84A8
  c->r[0]=c->r[3]+c->r[0]; // 801D84AC
  W32(c->r[30]+0x00000018u,c->r[0]); // 801D84B0
L_801D84B4:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 801D84B4
  c->r[3]=0u+0x00000000u; // 801D84B8
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 801D84BC
  c->r[6]=R32(c->r[30]+0x0000001Cu); // 801D84C0
  c->r[5]=R32(c->r[30]+0x00000020u); // 801D84C4
  c->r[0]=c->r[4]&c->r[0]; // 801D84C8
  W32(c->r[30]+0x00000024u,c->r[6]); // 801D84CC
  c->r[0]=c->r[5]-c->r[0]; // 801D84D0
  W32(c->r[30]+0x00000028u,c->r[0]); // 801D84D4
  W32(c->r[30]+0x00000034u,c->r[4]); // 801D84D8
L_801D84DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D84DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D84E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D84E4
  c->lr=c->r[0]; // 801D84E8
  c->r[1]=c->r[1]+0x00000010u; // 801D84EC
  return; // 801D84F0
}

// __fwrite
void f_801D84F4(Ctx* __restrict c) {
  trace_call(0x801D84F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D84F4
  c->r[0]=c->lr; // 801D84F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D84FC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D8500
  c->r[27]=c->r[4]|c->r[4]; // 801D8504
  c->r[28]=c->r[6]|c->r[6]; // 801D8508
  c->r[26]=c->r[3]|c->r[3]; // 801D850C
  c->r[25]=c->r[5]|c->r[5]; // 801D8510
  c->r[4]=0u+0x00000000u; // 801D8514
  c->r[3]=c->r[28]|c->r[28]; // 801D8518
  c->lr=0x801D8520u; f_801DE4FC(c); // 801D851C
  cmps(c,0,(int32_t)c->r[3],0); // 801D8520
  if (!crb(c,2)) { goto L_801D8534; } // 801D8524
  c->r[3]=c->r[28]|c->r[28]; // 801D8528
  c->r[4]=0u+0xFFFFFFFFu; // 801D852C
  c->lr=0x801D8534u; f_801DE4FC(c); // 801D8530
L_801D8534:;
  c->r[30]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[25]); cr0(c,c->r[30]); // 801D8534
  if (crb(c,2)) { goto L_801D8554; } // 801D8538
  c->r[0]=R8(c->r[28]+0x0000000Au); // 801D853C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8540
  if (!crb(c,2)) { goto L_801D8554; } // 801D8544
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D8548
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 801D854C
  if (!crb(c,2)) { goto L_801D855C; } // 801D8550
L_801D8554:;
  c->r[3]=0u+0x00000000u; // 801D8554
  goto L_801D87E8; // 801D8558
L_801D855C:;
  cmpu(c,0,c->r[0],0x00000002u); // 801D855C
  if (!crb(c,2)) { goto L_801D8568; } // 801D8560
  c->lr=0x801D8568u; f_801D9388(c); // 801D8564
L_801D8568:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801D8568
  c->r[31]=0u+0x00000001u; // 801D856C
  c->r[4]=0u+0x00000000u; // 801D8570
  c->r[0]=rotl(c->r[3],13)&0x00000001u; cr0(c,c->r[0]); // 801D8574
  if (crb(c,2)) { goto L_801D8588; } // 801D8578
  c->r[0]=rotl(c->r[3],7)&0x00000003u; // 801D857C
  cmpu(c,0,c->r[0],0x00000002u); // 801D8580
  if (!crb(c,2)) { goto L_801D858C; } // 801D8584
L_801D8588:;
  c->r[4]=0u+0x00000001u; // 801D8588
L_801D858C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D858C
  if (!crb(c,2)) { goto L_801D85A8; } // 801D8590
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D8594
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 801D8598
  cmpu(c,0,c->r[0],0x00000001u); // 801D859C
  if (crb(c,2)) { goto L_801D85A8; } // 801D85A0
  c->r[31]=0u+0x00000000u; // 801D85A4
L_801D85A8:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801D85A8
  c->r[0]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[0]); // 801D85AC
  if (!crb(c,2)) { goto L_801D8604; } // 801D85B0
  c->r[3]=R32(c->r[28]+0x00000004u); // 801D85B4
  c->r[0]=rotl(c->r[3],5)&0x00000002u; cr0(c,c->r[0]); // 801D85B8
  c->r[0]=rotl(c->r[3],5)&0x00000007u; // 801D85BC
  if (crb(c,2)) { goto L_801D8604; } // 801D85C0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801D85C4
  if (crb(c,2)) { goto L_801D85EC; } // 801D85C8
  c->r[3]=c->r[28]|c->r[28]; // 801D85CC
  c->r[4]=0u+0x00000000u; // 801D85D0
  c->r[5]=0u+0x00000002u; // 801D85D4
  c->lr=0x801D85DCu; f_801D8A98(c); // 801D85D8
  cmps(c,0,(int32_t)c->r[3],0); // 801D85DC
  if (crb(c,2)) { goto L_801D85EC; } // 801D85E0
  c->r[3]=0u+0x00000000u; // 801D85E4
  goto L_801D87E8; // 801D85E8
L_801D85EC:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801D85EC
  c->r[3]=0u+0x00000001u; // 801D85F0
  c->r[0]=(rotl(c->r[3],29)&0xE0000000u)|(c->r[0]&~0xE0000000u); // 801D85F4
  W32(c->r[28]+0x00000008u,c->r[0]); // 801D85F8
  c->r[3]=c->r[28]|c->r[28]; // 801D85FC
  c->lr=0x801D8604u; f_801D8414(c); // 801D8600
L_801D8604:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 801D8604
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 801D8608
  cmpu(c,0,c->r[0],0x00000001u); // 801D860C
  if (crb(c,2)) { goto L_801D862C; } // 801D8610
  c->r[3]=0u+0x00000001u; // 801D8614
  c->r[0]=0u+0x00000000u; // 801D8618
  W8(c->r[28]+0x0000000Au,c->r[3]); // 801D861C
  c->r[3]=0u+0x00000000u; // 801D8620
  W32(c->r[28]+0x00000028u,c->r[0]); // 801D8624
  goto L_801D87E8; // 801D8628
L_801D862C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D862C
  c->r[29]=0u+0x00000000u; // 801D8630
  if (crb(c,2)) { goto L_801D875C; } // 801D8634
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 801D8638
  c->r[4]=R32(c->r[28]+0x00000024u); // 801D863C
  cmpu(c,0,c->r[4],c->r[3]); // 801D8640
  if (!crb(c,2)) { goto L_801D8650; } // 801D8644
  cmps(c,0,(int32_t)c->r[31],0); // 801D8648
  if (crb(c,2)) { goto L_801D875C; } // 801D864C
L_801D8650:;
  c->r[0]=R32(c->r[28]+0x00000020u); // 801D8650
  c->r[3]=c->r[4]-c->r[3]; // 801D8654
  c->r[0]=c->r[0]-c->r[3]; // 801D8658
  W32(c->r[28]+0x00000028u,c->r[0]); // 801D865C
L_801D8660:;
  c->r[5]=R32(c->r[28]+0x00000028u); // 801D8660
  c->r[25]=0u+0x00000000u; // 801D8664
  W32(c->r[1]+0x00000008u,c->r[5]); // 801D8668
  cmpu(c,0,c->r[5],c->r[30]); // 801D866C
  if (!crb(c,1)) { goto L_801D867C; } // 801D8670
  c->r[5]=c->r[30]|c->r[30]; // 801D8674
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D8678
L_801D867C:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D867C
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 801D8680
  cmpu(c,0,c->r[0],0x00000001u); // 801D8684
  if (!crb(c,2)) { goto L_801D86B8; } // 801D8688
  cmps(c,0,(int32_t)c->r[5],0); // 801D868C
  if (crb(c,2)) { goto L_801D86B8; } // 801D8690
  c->r[3]=c->r[26]|c->r[26]; // 801D8694
  c->r[4]=0u+0x0000000Au; // 801D8698
  c->lr=0x801D86A0u; f_801D8F4C(c); // 801D869C
  cmps(c,0,(int32_t)c->r[3],0); // 801D86A0
  c->r[25]=c->r[3]|c->r[3]; // 801D86A4
  if (crb(c,2)) { goto L_801D86B8; } // 801D86A8
  c->r[0]=c->r[3]+0x00000001u; // 801D86AC
  c->r[5]=c->r[0]-c->r[26]; // 801D86B0
  W32(c->r[1]+0x00000008u,c->r[5]); // 801D86B4
L_801D86B8:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 801D86B8
  cmps(c,0,(int32_t)c->r[5],0); // 801D86BC
  if (crb(c,2)) { goto L_801D86F8; } // 801D86C0
  c->r[3]=R32(c->r[28]+0x00000024u); // 801D86C4
  c->r[4]=c->r[26]|c->r[26]; // 801D86C8
  c->lr=0x801D86D0u; f_80004364(c); // 801D86CC
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D86D0
  c->r[3]=R32(c->r[28]+0x00000024u); // 801D86D4
  c->r[0]=R32(c->r[28]+0x00000028u); // 801D86D8
  c->r[26]=c->r[26]+c->r[4]; // 801D86DC
  c->r[3]=c->r[3]+c->r[4]; // 801D86E0
  W32(c->r[28]+0x00000024u,c->r[3]); // 801D86E4
  c->r[30]=c->r[30]-c->r[4]; // 801D86E8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D86EC
  c->r[0]=c->r[0]-c->r[3]; // 801D86F0
  W32(c->r[28]+0x00000028u,c->r[0]); // 801D86F4
L_801D86F8:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 801D86F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D86FC
  if (crb(c,2)) { goto L_801D8718; } // 801D8700
  cmps(c,0,(int32_t)c->r[25],0); // 801D8704
  if (!crb(c,2)) { goto L_801D8718; } // 801D8708
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D870C
  c->r[0]=rotl(c->r[0],7)&0x00000003u; cr0(c,c->r[0]); // 801D8710
  if (!crb(c,2)) { goto L_801D8744; } // 801D8714
L_801D8718:;
  c->r[3]=c->r[28]|c->r[28]; // 801D8718
  c->r[4]=0u+0x00000000u; // 801D871C
  c->lr=0x801D8724u; f_801D843C(c); // 801D8720
  cmps(c,0,(int32_t)c->r[3],0); // 801D8724
  if (crb(c,2)) { goto L_801D8744; } // 801D8728
  c->r[3]=0u+0x00000001u; // 801D872C
  c->r[0]=0u+0x00000000u; // 801D8730
  W8(c->r[28]+0x0000000Au,c->r[3]); // 801D8734
  c->r[30]=0u+0x00000000u; // 801D8738
  W32(c->r[28]+0x00000028u,c->r[0]); // 801D873C
  goto L_801D875C; // 801D8740
L_801D8744:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D8744
  cmps(c,0,(int32_t)c->r[30],0); // 801D8748
  c->r[29]=c->r[29]+c->r[0]; // 801D874C
  if (crb(c,2)) { goto L_801D875C; } // 801D8750
  cmps(c,0,(int32_t)c->r[31],0); // 801D8754
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8660; } // 801D8758
L_801D875C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D875C
  if (crb(c,2)) { goto L_801D87CC; } // 801D8760
  cmps(c,0,(int32_t)c->r[31],0); // 801D8764
  if (!crb(c,2)) { goto L_801D87CC; } // 801D8768
  c->r[25]=R32(c->r[28]+0x0000001Cu); // 801D876C
  c->r[0]=c->r[26]+c->r[30]; // 801D8770
  c->r[31]=R32(c->r[28]+0x00000020u); // 801D8774
  c->r[3]=c->r[28]|c->r[28]; // 801D8778
  W32(c->r[28]+0x0000001Cu,c->r[26]); // 801D877C
  c->r[4]=c->r[1]+0x00000008u; // 801D8780
  W32(c->r[28]+0x00000020u,c->r[30]); // 801D8784
  W32(c->r[28]+0x00000024u,c->r[0]); // 801D8788
  c->lr=0x801D8790u; f_801D843C(c); // 801D878C
  cmps(c,0,(int32_t)c->r[3],0); // 801D8790
  if (crb(c,2)) { goto L_801D87AC; } // 801D8794
  c->r[3]=0u+0x00000001u; // 801D8798
  c->r[0]=0u+0x00000000u; // 801D879C
  W8(c->r[28]+0x0000000Au,c->r[3]); // 801D87A0
  W32(c->r[28]+0x00000028u,c->r[0]); // 801D87A4
  goto L_801D87B4; // 801D87A8
L_801D87AC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D87AC
  c->r[29]=c->r[29]+c->r[0]; // 801D87B0
L_801D87B4:;
  W32(c->r[28]+0x0000001Cu,c->r[25]); // 801D87B4
  c->r[3]=c->r[28]|c->r[28]; // 801D87B8
  W32(c->r[28]+0x00000020u,c->r[31]); // 801D87BC
  c->lr=0x801D87C4u; f_801D8414(c); // 801D87C0
  c->r[0]=0u+0x00000000u; // 801D87C4
  W32(c->r[28]+0x00000028u,c->r[0]); // 801D87C8
L_801D87CC:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D87CC
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 801D87D0
  cmpu(c,0,c->r[0],0x00000002u); // 801D87D4
  if (crb(c,2)) { goto L_801D87E4; } // 801D87D8
  c->r[0]=0u+0x00000000u; // 801D87DC
  W32(c->r[28]+0x00000028u,c->r[0]); // 801D87E0
L_801D87E4:;
  c->r[3]=divwu(c->r[29],c->r[27]); // 801D87E4
L_801D87E8:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D87E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D87EC
  c->lr=c->r[0]; // 801D87F0
  c->r[1]=c->r[1]+0x00000030u; // 801D87F4
  return; // 801D87F8
}

// fclose
void f_801D87FC(Ctx* __restrict c) {
  trace_call(0x801D87FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D87FC
  c->r[0]=c->lr; // 801D8800
  cmps(c,0,(int32_t)c->r[3],0); // 801D8804
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8808
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D880C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8810
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8814
  c->r[29]=c->r[3]|c->r[3]; // 801D8818
  if (!crb(c,2)) { goto L_801D8828; } // 801D881C
  c->r[3]=0u+0xFFFFFFFFu; // 801D8820
  goto L_801D889C; // 801D8824
L_801D8828:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8828
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 801D882C
  if (!crb(c,2)) { goto L_801D883C; } // 801D8830
  c->r[3]=0u+0x00000000u; // 801D8834
  goto L_801D889C; // 801D8838
L_801D883C:;
  c->lr=0x801D8840u; f_801D88B8(c); // 801D883C
  c->r[12]=R32(c->r[29]+0x00000044u); // 801D8840
  c->r[30]=c->r[3]|c->r[3]; // 801D8844
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D8848
  c->ctr=c->r[12]; // 801D884C
  if (true) { c->lr=0x801D8854u; dispatch(c,c->ctr); } // 801D8850
  c->r[0]=R32(c->r[29]+0x00000008u); // 801D8854
  c->r[5]=0u+0x00000000u; // 801D8858
  c->r[4]=R32(c->r[29]+0x00000004u); // 801D885C
  c->r[31]=c->r[3]|c->r[3]; // 801D8860
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 801D8864
  W32(c->r[29]+0x00000000u,c->r[5]); // 801D8868
  c->r[4]=rotl(c->r[4],0)&0xFE3FFFFFu; // 801D886C
  W32(c->r[29]+0x00000004u,c->r[4]); // 801D8870
  if (crb(c,2)) { goto L_801D8880; } // 801D8874
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 801D8878
  c->lr=0x801D8880u; f_800D96F0(c); // 801D887C
L_801D8880:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D8880
  c->r[0]=0u+0x00000000u; // 801D8884
  if (!crb(c,2)) { goto L_801D8894; } // 801D8888
  cmps(c,0,(int32_t)c->r[31],0); // 801D888C
  if (crb(c,2)) { goto L_801D8898; } // 801D8890
L_801D8894:;
  c->r[0]=0u+0x00000001u; // 801D8894
L_801D8898:;
  c->r[3]=0u-c->r[0]; // 801D8898
L_801D889C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D889C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D88A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D88A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D88A8
  c->lr=c->r[0]; // 801D88AC
  c->r[1]=c->r[1]+0x00000020u; // 801D88B0
  return; // 801D88B4
}

// fflush
void f_801D88B8(Ctx* __restrict c) {
  trace_call(0x801D88B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D88B8
  c->r[0]=c->lr; // 801D88BC
  cmps(c,0,(int32_t)c->r[3],0); // 801D88C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D88C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D88C8
  c->r[31]=c->r[3]|c->r[3]; // 801D88CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D88D0
  if (!crb(c,2)) { goto L_801D88E0; } // 801D88D4
  c->lr=0x801D88DCu; f_801D78D8(c); // 801D88D8
  goto L_801D89D4; // 801D88DC
L_801D88E0:;
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801D88E0
  cmps(c,0,(int32_t)c->r[0],0); // 801D88E4
  if (!crb(c,2)) { goto L_801D88F8; } // 801D88E8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801D88EC
  c->r[0]=rotl(c->r[4],10)&0x00000007u; cr0(c,c->r[0]); // 801D88F0
  if (!crb(c,2)) { goto L_801D8900; } // 801D88F4
L_801D88F8:;
  c->r[3]=0u+0xFFFFFFFFu; // 801D88F8
  goto L_801D89D4; // 801D88FC
L_801D8900:;
  c->r[0]=rotl(c->r[4],5)&0x00000007u; // 801D8900
  cmpu(c,0,c->r[0],0x00000001u); // 801D8904
  if (!crb(c,2)) { goto L_801D8914; } // 801D8908
  c->r[3]=0u+0x00000000u; // 801D890C
  goto L_801D89D4; // 801D8910
L_801D8914:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 801D8914
  c->r[0]=rotl(c->r[4],3)&0x00000007u; // 801D8918
  cmpu(c,0,c->r[0],0x00000003u); // 801D891C
  if (crb(c,0)) { goto L_801D8930; } // 801D8920
  c->r[0]=0u+0x00000002u; // 801D8924
  c->r[4]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[4]&~0xE0000000u); // 801D8928
  W32(c->r[3]+0x00000008u,c->r[4]); // 801D892C
L_801D8930:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D8930
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 801D8934
  cmpu(c,0,c->r[0],0x00000002u); // 801D8938
  if (!crb(c,2)) { goto L_801D8948; } // 801D893C
  c->r[0]=0u+0x00000000u; // 801D8940
  W32(c->r[3]+0x00000028u,c->r[0]); // 801D8944
L_801D8948:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 801D8948
  c->r[0]=rotl(c->r[4],3)&0x00000007u; // 801D894C
  cmpu(c,0,c->r[0],0x00000001u); // 801D8950
  if (crb(c,2)) { goto L_801D8968; } // 801D8954
  c->r[0]=rotl(c->r[4],0)&0x1FFFFFFFu; // 801D8958
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D895C
  c->r[3]=0u+0x00000000u; // 801D8960
  goto L_801D89D4; // 801D8964
L_801D8968:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8968
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 801D896C
  cmpu(c,0,c->r[0],0x00000001u); // 801D8970
  if (crb(c,2)) { goto L_801D8980; } // 801D8974
  c->r[30]=0u+0x00000000u; // 801D8978
  goto L_801D898C; // 801D897C
L_801D8980:;
  c->r[3]=c->r[31]|c->r[31]; // 801D8980
  c->lr=0x801D8988u; f_801D8A94(c); // 801D8984
  c->r[30]=c->r[3]|c->r[3]; // 801D8988
L_801D898C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D898C
  c->r[4]=0u+0x00000000u; // 801D8990
  c->lr=0x801D8998u; f_801D843C(c); // 801D8994
  cmps(c,0,(int32_t)c->r[3],0); // 801D8998
  if (crb(c,2)) { goto L_801D89B8; } // 801D899C
  c->r[3]=0u+0x00000001u; // 801D89A0
  c->r[0]=0u+0x00000000u; // 801D89A4
  W8(c->r[31]+0x0000000Au,c->r[3]); // 801D89A8
  c->r[3]=0u+0xFFFFFFFFu; // 801D89AC
  W32(c->r[31]+0x00000028u,c->r[0]); // 801D89B0
  goto L_801D89D4; // 801D89B4
L_801D89B8:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801D89B8
  c->r[4]=0u+0x00000000u; // 801D89BC
  W32(c->r[31]+0x00000018u,c->r[30]); // 801D89C0
  c->r[3]=0u+0x00000000u; // 801D89C4
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 801D89C8
  W32(c->r[31]+0x00000008u,c->r[0]); // 801D89CC
  W32(c->r[31]+0x00000028u,c->r[4]); // 801D89D0
L_801D89D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D89D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D89D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D89DC
  c->lr=c->r[0]; // 801D89E0
  c->r[1]=c->r[1]+0x00000010u; // 801D89E4
  return; // 801D89E8
}

// _ftell
void f_801D89EC(Ctx* __restrict c) {
  trace_call(0x801D89ECu);
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D89EC
  c->r[6]=0u+0x00000000u; // 801D89F0
  c->r[4]=rotl(c->r[0],10)&0x00000007u; // 801D89F4
  c->r[0]=c->r[4]+0x000000FFu; // 801D89F8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D89FC
  cmpu(c,0,c->r[0],0x00000001u); // 801D8A00
  if (crb(c,1)) { goto L_801D8A14; } // 801D8A04
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801D8A08
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A0C
  if (crb(c,2)) { goto L_801D8A24; } // 801D8A10
L_801D8A14:;
  c->r[0]=0u+0x00000028u; // 801D8A14
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801D8A18
  c->r[3]=0u+0xFFFFFFFFu; // 801D8A1C
  return; // 801D8A20
L_801D8A24:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D8A24
  c->r[5]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[5]); // 801D8A28
  if (!crb(c,2)) { goto L_801D8A38; } // 801D8A2C
  c->r[3]=R32(c->r[3]+0x00000018u); // 801D8A30
  return; // 801D8A34
L_801D8A38:;
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 801D8A38
  cmpu(c,0,c->r[5],0x00000003u); // 801D8A3C
  c->r[4]=R32(c->r[3]+0x00000024u); // 801D8A40
  c->r[0]=R32(c->r[3]+0x00000034u); // 801D8A44
  c->r[4]=c->r[4]-c->r[8]; // 801D8A48
  c->r[7]=c->r[0]+c->r[4]; // 801D8A4C
  if (crb(c,0)) { goto L_801D8A5C; } // 801D8A50
  c->r[6]=c->r[5]+0xFFFFFFFEu; // 801D8A54
  c->r[7]=c->r[7]-c->r[6]; // 801D8A58
L_801D8A5C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8A5C
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 801D8A60
  if (!crb(c,2)) { goto L_801D8A8C; } // 801D8A64
  c->r[0]=c->r[4]-c->r[6]; cr0(c,c->r[0]); // 801D8A68
  c->ctr=c->r[0]; // 801D8A6C
  if (crb(c,2)) { goto L_801D8A8C; } // 801D8A70
L_801D8A74:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801D8A74
  c->r[8]=c->r[8]+0x00000001u; // 801D8A78
  cmpu(c,0,c->r[0],0x0000000Au); // 801D8A7C
  if (!crb(c,2)) { goto L_801D8A88; } // 801D8A80
  c->r[7]=c->r[7]+0x00000001u; // 801D8A84
L_801D8A88:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8A74; } // 801D8A88
L_801D8A8C:;
  c->r[3]=c->r[7]|c->r[7]; // 801D8A8C
  return; // 801D8A90
}

// ftell
void f_801D8A94(Ctx* __restrict c) {
  trace_call(0x801D8A94u);
  f_801D89EC(c); return; // 801D8A94
}

// _fseek
void f_801D8A98(Ctx* __restrict c) {
  trace_call(0x801D8A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8A98
  c->r[0]=c->lr; // 801D8A9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8AA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8AA4
  c->r[31]=c->r[5]|c->r[5]; // 801D8AA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8AAC
  c->r[30]=c->r[3]|c->r[3]; // 801D8AB0
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D8AB4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801D8AB8
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 801D8ABC
  cmpu(c,0,c->r[0],0x00000001u); // 801D8AC0
  if (!crb(c,2)) { goto L_801D8AD4; } // 801D8AC4
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801D8AC8
  cmps(c,0,(int32_t)c->r[0],0); // 801D8ACC
  if (crb(c,2)) { goto L_801D8AE4; } // 801D8AD0
L_801D8AD4:;
  c->r[0]=0u+0x00000028u; // 801D8AD4
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801D8AD8
  c->r[3]=0u+0xFFFFFFFFu; // 801D8ADC
  goto L_801D8C44; // 801D8AE0
L_801D8AE4:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801D8AE4
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 801D8AE8
  cmpu(c,0,c->r[0],0x00000001u); // 801D8AEC
  if (!crb(c,2)) { goto L_801D8B24; } // 801D8AF0
  c->r[4]=0u+0x00000000u; // 801D8AF4
  c->lr=0x801D8AFCu; f_801D843C(c); // 801D8AF8
  cmps(c,0,(int32_t)c->r[3],0); // 801D8AFC
  if (crb(c,2)) { goto L_801D8B24; } // 801D8B00
  c->r[4]=0u+0x00000000u; // 801D8B04
  W32(c->r[30]+0x00000028u,c->r[4]); // 801D8B08
  c->r[0]=0u+0x00000001u; // 801D8B0C
  c->r[3]=0u+0xFFFFFFFFu; // 801D8B10
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D8B14
  c->r[0]=0u+0x00000028u; // 801D8B18
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801D8B1C
  goto L_801D8C44; // 801D8B20
L_801D8B24:;
  cmps(c,0,(int32_t)c->r[31],1); // 801D8B24
  if (!crb(c,2)) { goto L_801D8B44; } // 801D8B28
  c->r[3]=c->r[30]|c->r[30]; // 801D8B2C
  c->r[31]=0u+0x00000000u; // 801D8B30
  c->lr=0x801D8B38u; f_801D89EC(c); // 801D8B34
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D8B38
  c->r[0]=c->r[0]+c->r[3]; // 801D8B3C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801D8B40
L_801D8B44:;
  cmps(c,0,(int32_t)c->r[31],2); // 801D8B44
  if (crb(c,2)) { goto L_801D8BC8; } // 801D8B48
  c->r[0]=R32(c->r[30]+0x00000004u); // 801D8B4C
  c->r[0]=rotl(c->r[0],5)&0x00000007u; // 801D8B50
  cmpu(c,0,c->r[0],0x00000003u); // 801D8B54
  if (crb(c,2)) { goto L_801D8BC8; } // 801D8B58
  c->r[6]=R32(c->r[30]+0x00000008u); // 801D8B5C
  c->r[3]=rotl(c->r[6],3)&0x00000007u; // 801D8B60
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D8B64
  cmpu(c,0,c->r[0],0x00000001u); // 801D8B68
  if (crb(c,1)) { goto L_801D8BC8; } // 801D8B6C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D8B70
  c->r[5]=R32(c->r[30]+0x00000018u); // 801D8B74
  cmpu(c,0,c->r[0],c->r[5]); // 801D8B78
  if (!crb(c,0)) { goto L_801D8B8C; } // 801D8B7C
  c->r[3]=R32(c->r[30]+0x00000034u); // 801D8B80
  cmpu(c,0,c->r[0],c->r[3]); // 801D8B84
  if (!crb(c,0)) { goto L_801D8B9C; } // 801D8B88
L_801D8B8C:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D8B8C
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 801D8B90
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D8B94
  goto L_801D8BD4; // 801D8B98
L_801D8B9C:;
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 801D8B9C
  c->r[3]=c->r[0]-c->r[3]; // 801D8BA0
  c->r[0]=0u+0x00000002u; // 801D8BA4
  c->r[3]=c->r[4]+c->r[3]; // 801D8BA8
  W32(c->r[30]+0x00000024u,c->r[3]); // 801D8BAC
  c->r[6]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[6]&~0xE0000000u); // 801D8BB0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D8BB4
  c->r[0]=c->r[5]-c->r[0]; // 801D8BB8
  W32(c->r[30]+0x00000028u,c->r[0]); // 801D8BBC
  W32(c->r[30]+0x00000008u,c->r[6]); // 801D8BC0
  goto L_801D8BD4; // 801D8BC4
L_801D8BC8:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D8BC8
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 801D8BCC
  W32(c->r[30]+0x00000008u,c->r[0]); // 801D8BD0
L_801D8BD4:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801D8BD4
  c->r[0]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[0]); // 801D8BD8
  if (!crb(c,2)) { goto L_801D8C40; } // 801D8BDC
  c->r[12]=R32(c->r[30]+0x00000038u); // 801D8BE0
  cmps(c,0,(int32_t)c->r[12],0); // 801D8BE4
  if (crb(c,2)) { goto L_801D8C2C; } // 801D8BE8
  c->r[5]=c->r[31]|c->r[31]; // 801D8BEC
  c->r[4]=c->r[1]+0x00000008u; // 801D8BF0
  c->r[3]=R32(c->r[30]+0x00000000u); // 801D8BF4
  c->r[6]=R32(c->r[30]+0x00000048u); // 801D8BF8
  c->ctr=c->r[12]; // 801D8BFC
  if (true) { c->lr=0x801D8C04u; dispatch(c,c->ctr); } // 801D8C00
  cmps(c,0,(int32_t)c->r[3],0); // 801D8C04
  if (crb(c,2)) { goto L_801D8C2C; } // 801D8C08
  c->r[4]=0u+0x00000000u; // 801D8C0C
  W32(c->r[30]+0x00000028u,c->r[4]); // 801D8C10
  c->r[0]=0u+0x00000001u; // 801D8C14
  c->r[3]=0u+0xFFFFFFFFu; // 801D8C18
  W8(c->r[30]+0x0000000Au,c->r[0]); // 801D8C1C
  c->r[0]=0u+0x00000028u; // 801D8C20
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801D8C24
  goto L_801D8C44; // 801D8C28
L_801D8C2C:;
  c->r[3]=0u+0x00000000u; // 801D8C2C
  W8(c->r[30]+0x00000009u,c->r[3]); // 801D8C30
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D8C34
  W32(c->r[30]+0x00000018u,c->r[0]); // 801D8C38
  W32(c->r[30]+0x00000028u,c->r[3]); // 801D8C3C
L_801D8C40:;
  c->r[3]=0u+0x00000000u; // 801D8C40
L_801D8C44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8C44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D8C48
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D8C4C
  c->lr=c->r[0]; // 801D8C50
  c->r[1]=c->r[1]+0x00000020u; // 801D8C54
  return; // 801D8C58
}

// mbtowc
void f_801D8C5C(Ctx* __restrict c) {
  trace_call(0x801D8C5Cu);
  c->r[6]=0u+0x80250000u; // 801D8C5C
  c->r[6]=c->r[6]+0xFFFF9CF8u; // 801D8C60
  c->r[6]=R32(c->r[6]+0x00000038u); // 801D8C64
  c->r[12]=R32(c->r[6]+0x00000020u); // 801D8C68
  c->ctr=c->r[12]; // 801D8C6C
  if (true) { dispatch(c,c->ctr); return; } // 801D8C70
}

// __mbtowc_noconv
void f_801D8C74(Ctx* __restrict c) {
  trace_call(0x801D8C74u);
  cmps(c,0,(int32_t)c->r[4],0); // 801D8C74
  if (!crb(c,2)) { goto L_801D8C84; } // 801D8C78
  c->r[3]=0u+0x00000000u; // 801D8C7C
  return; // 801D8C80
L_801D8C84:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D8C84
  if (!crb(c,2)) { goto L_801D8C94; } // 801D8C88
  c->r[3]=0u+0xFFFFFFFFu; // 801D8C8C
  return; // 801D8C90
L_801D8C94:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D8C94
  if (crb(c,2)) { goto L_801D8CA4; } // 801D8C98
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D8C9C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D8CA0
L_801D8CA4:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D8CA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D8CA8
  if (!crb(c,2)) { goto L_801D8CB8; } // 801D8CAC
  c->r[3]=0u+0x00000000u; // 801D8CB0
  return; // 801D8CB4
L_801D8CB8:;
  c->r[3]=0u+0x00000001u; // 801D8CB8
  return; // 801D8CBC
}

// __wctomb_noconv
void f_801D8CC0(Ctx* __restrict c) {
  trace_call(0x801D8CC0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D8CC0
  if (!crb(c,2)) { goto L_801D8CD0; } // 801D8CC4
  c->r[3]=0u+0x00000000u; // 801D8CC8
  return; // 801D8CCC
L_801D8CD0:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 801D8CD0
  c->r[3]=0u+0x00000001u; // 801D8CD4
  return; // 801D8CD8
}

// mbstowcs
void f_801D8CDC(Ctx* __restrict c) {
  trace_call(0x801D8CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8CDC
  c->r[0]=c->lr; // 801D8CE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8CE4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D8CE8
  c->r[27]=c->r[4]|c->r[4]; // 801D8CEC
  c->r[26]=c->r[3]|c->r[3]; // 801D8CF0
  c->r[28]=c->r[5]|c->r[5]; // 801D8CF4
  c->r[3]=c->r[27]|c->r[27]; // 801D8CF8
  c->lr=0x801D8D00u; f_801D4D44(c); // 801D8CFC
  cmps(c,0,(int32_t)c->r[26],0); // 801D8D00
  c->r[29]=c->r[3]|c->r[3]; // 801D8D04
  if (crb(c,2)) { goto L_801D8D80; } // 801D8D08
  c->r[31]=0u+0x80250000u; // 801D8D0C
  c->r[30]=0u+0x00000000u; // 801D8D10
  c->r[31]=c->r[31]+0xFFFF9CF8u; // 801D8D14
  goto L_801D8D74; // 801D8D18
L_801D8D1C:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801D8D1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D8D20
  if (crb(c,2)) { goto L_801D8D64; } // 801D8D24
  c->r[6]=R32(c->r[31]+0x00000038u); // 801D8D28
  c->r[3]=c->r[26]|c->r[26]; // 801D8D2C
  c->r[4]=c->r[27]|c->r[27]; // 801D8D30
  c->r[5]=c->r[29]|c->r[29]; // 801D8D34
  c->r[12]=R32(c->r[6]+0x00000020u); // 801D8D38
  c->ctr=c->r[12]; // 801D8D3C
  c->r[26]=c->r[26]+0x00000002u; // 801D8D40
  if (true) { c->lr=0x801D8D48u; dispatch(c,c->ctr); } // 801D8D44
  cmps(c,0,(int32_t)c->r[3],0); // 801D8D48
  if (!crb(c,1)) { goto L_801D8D5C; } // 801D8D4C
  c->r[27]=c->r[27]+c->r[3]; // 801D8D50
  c->r[29]=c->r[29]-c->r[3]; // 801D8D54
  goto L_801D8D70; // 801D8D58
L_801D8D5C:;
  c->r[3]=0u+0xFFFFFFFFu; // 801D8D5C
  goto L_801D8D88; // 801D8D60
L_801D8D64:;
  c->r[0]=0u+0x00000000u; // 801D8D64
  W16(c->r[26]+0x00000000u,c->r[0]); // 801D8D68
  goto L_801D8D84; // 801D8D6C
L_801D8D70:;
  c->r[30]=c->r[30]+0x00000001u; // 801D8D70
L_801D8D74:;
  cmpu(c,0,c->r[30],c->r[28]); // 801D8D74
  if (crb(c,0)) { IRQCHK(c); goto L_801D8D1C; } // 801D8D78
  goto L_801D8D84; // 801D8D7C
L_801D8D80:;
  c->r[30]=0u+0x00000000u; // 801D8D80
L_801D8D84:;
  c->r[3]=c->r[30]|c->r[30]; // 801D8D84
L_801D8D88:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D8D88
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8D8C
  c->lr=c->r[0]; // 801D8D90
  c->r[1]=c->r[1]+0x00000020u; // 801D8D94
  return; // 801D8D98
}

// wcstombs
void f_801D8D9C(Ctx* __restrict c) {
  trace_call(0x801D8D9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8D9C
  c->r[0]=c->lr; // 801D8DA0
  cmps(c,0,(int32_t)c->r[3],0); // 801D8DA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D8DA8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D8DAC
  c->r[26]=c->r[3]|c->r[3]; // 801D8DB0
  c->r[27]=c->r[5]|c->r[5]; // 801D8DB4
  c->r[29]=0u+0x00000000u; // 801D8DB8
  if (crb(c,2)) { goto L_801D8DC8; } // 801D8DBC
  cmps(c,0,(int32_t)c->r[4],0); // 801D8DC0
  if (!crb(c,2)) { goto L_801D8DD0; } // 801D8DC4
L_801D8DC8:;
  c->r[3]=0u+0x00000000u; // 801D8DC8
  goto L_801D8E40; // 801D8DCC
L_801D8DD0:;
  c->r[31]=0u+0x80250000u; // 801D8DD0
  c->r[28]=c->r[4]|c->r[4]; // 801D8DD4
  c->r[31]=c->r[31]+0xFFFF9CF8u; // 801D8DD8
  goto L_801D8E34; // 801D8DDC
L_801D8DE0:;
  c->r[4]=R16(c->r[28]+0x00000000u); // 801D8DE0
  cmps(c,0,(int32_t)c->r[4],0); // 801D8DE4
  if (!crb(c,2)) { goto L_801D8DF8; } // 801D8DE8
  c->r[0]=0u+0x00000000u; // 801D8DEC
  W8(c->r[26]+c->r[29],c->r[0]); // 801D8DF0
  goto L_801D8E3C; // 801D8DF4
L_801D8DF8:;
  c->r[5]=R32(c->r[31]+0x00000038u); // 801D8DF8
  c->r[3]=c->r[1]+0x00000008u; // 801D8DFC
  c->r[12]=R32(c->r[5]+0x00000024u); // 801D8E00
  c->ctr=c->r[12]; // 801D8E04
  c->r[28]=c->r[28]+0x00000002u; // 801D8E08
  if (true) { c->lr=0x801D8E10u; dispatch(c,c->ctr); } // 801D8E0C
  c->r[0]=c->r[29]+c->r[3]; // 801D8E10
  c->r[30]=c->r[3]|c->r[3]; // 801D8E14
  cmpu(c,0,c->r[0],c->r[27]); // 801D8E18
  if (crb(c,1)) { goto L_801D8E3C; } // 801D8E1C
  c->r[5]=c->r[30]|c->r[30]; // 801D8E20
  c->r[3]=c->r[26]+c->r[29]; // 801D8E24
  c->r[4]=c->r[1]+0x00000008u; // 801D8E28
  c->lr=0x801D8E30u; f_801DBA48(c); // 801D8E2C
  c->r[29]=c->r[29]+c->r[30]; // 801D8E30
L_801D8E34:;
  cmpu(c,0,c->r[29],c->r[27]); // 801D8E34
  if (!crb(c,1)) { IRQCHK(c); goto L_801D8DE0; } // 801D8E38
L_801D8E3C:;
  c->r[3]=c->r[29]|c->r[29]; // 801D8E3C
L_801D8E40:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D8E40
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D8E44
  c->lr=c->r[0]; // 801D8E48
  c->r[1]=c->r[1]+0x00000030u; // 801D8E4C
  return; // 801D8E50
}

// memmove
void f_801D8E54(Ctx* __restrict c) {
  trace_call(0x801D8E54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8E54
  c->r[0]=c->lr; // 801D8E58
  c->r[6]=c->r[3]^c->r[4]; // 801D8E5C
  cmpu(c,0,c->r[5],0x00000020u); // 801D8E60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D8E64
  c->r[0]=cntlz(c->r[6]); // 801D8E68
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D8E6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8E70
  c->r[31]=c->r[3]|c->r[3]; // 801D8E74
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 801D8E78
  if (crb(c,0)) { goto L_801D8EBC; } // 801D8E7C
  c->r[0]=rotl(c->r[6],0)&0x00000003u; cr0(c,c->r[0]); // 801D8E80
  if (crb(c,2)) { goto L_801D8EA0; } // 801D8E84
  cmps(c,0,(int32_t)c->r[7],0); // 801D8E88
  if (!crb(c,2)) { goto L_801D8E98; } // 801D8E8C
  c->lr=0x801D8E94u; f_801D9128(c); // 801D8E90
  goto L_801D8EB4; // 801D8E94
L_801D8E98:;
  c->lr=0x801D8E9Cu; f_801D91E8(c); // 801D8E98
  goto L_801D8EB4; // 801D8E9C
L_801D8EA0:;
  cmps(c,0,(int32_t)c->r[7],0); // 801D8EA0
  if (!crb(c,2)) { goto L_801D8EB0; } // 801D8EA4
  c->lr=0x801D8EACu; f_801D8FC4(c); // 801D8EA8
  goto L_801D8EB4; // 801D8EAC
L_801D8EB0:;
  c->lr=0x801D8EB4u; f_801D9080(c); // 801D8EB0
L_801D8EB4:;
  c->r[3]=c->r[31]|c->r[31]; // 801D8EB4
  goto L_801D8F0C; // 801D8EB8
L_801D8EBC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801D8EBC
  if (!crb(c,2)) { goto L_801D8EE8; } // 801D8EC0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801D8EC4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D8EC8
  c->r[5]=c->r[5]+0x00000001u; // 801D8ECC
  goto L_801D8EDC; // 801D8ED0
L_801D8ED4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801D8ED4
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 801D8ED8
L_801D8EDC:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801D8EDC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8ED4; } // 801D8EE0
  goto L_801D8F08; // 801D8EE4
L_801D8EE8:;
  c->r[4]=c->r[4]+c->r[5]; // 801D8EE8
  c->r[3]=c->r[3]+c->r[5]; // 801D8EEC
  c->r[5]=c->r[5]+0x00000001u; // 801D8EF0
  goto L_801D8F00; // 801D8EF4
L_801D8EF8:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 801D8EF8
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801D8EFC
L_801D8F00:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801D8F00
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8EF8; } // 801D8F04
L_801D8F08:;
  c->r[3]=c->r[31]|c->r[31]; // 801D8F08
L_801D8F0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8F0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8F10
  c->lr=c->r[0]; // 801D8F14
  c->r[1]=c->r[1]+0x00000010u; // 801D8F18
  return; // 801D8F1C
}

// memchr
void f_801D8F20(Ctx* __restrict c) {
  trace_call(0x801D8F20u);
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801D8F20
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D8F24
  c->r[5]=c->r[5]+0x00000001u; // 801D8F28
  goto L_801D8F3C; // 801D8F2C
L_801D8F30:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[0]=R8(ea); c->r[3]=ea;} // 801D8F30
  cmpu(c,0,c->r[0],c->r[4]); // 801D8F34
  if (crb(c,2)) return; // 801D8F38
L_801D8F3C:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801D8F3C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8F30; } // 801D8F40
  c->r[3]=0u+0x00000000u; // 801D8F44
  return; // 801D8F48
}

// __memrchr
void f_801D8F4C(Ctx* __restrict c) {
  trace_call(0x801D8F4Cu);
  c->r[3]=c->r[3]+c->r[5]; // 801D8F4C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 801D8F50
  c->r[5]=c->r[5]+0x00000001u; // 801D8F54
  goto L_801D8F68; // 801D8F58
L_801D8F5C:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[3]=ea;} // 801D8F5C
  cmpu(c,0,c->r[0],c->r[4]); // 801D8F60
  if (crb(c,2)) return; // 801D8F64
L_801D8F68:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801D8F68
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8F5C; } // 801D8F6C
  c->r[3]=0u+0x00000000u; // 801D8F70
  return; // 801D8F74
}

// memcmp
void f_801D8F78(Ctx* __restrict c) {
  trace_call(0x801D8F78u);
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801D8F78
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 801D8F7C
  c->r[4]=c->r[5]+0x00000001u; // 801D8F80
  goto L_801D8FB4; // 801D8F84
L_801D8F88:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[3]=R8(ea); c->r[6]=ea;} // 801D8F88
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 801D8F8C
  cmpu(c,0,c->r[3],c->r[0]); // 801D8F90
  if (crb(c,2)) { goto L_801D8FB4; } // 801D8F94
  c->r[4]=R8(c->r[6]+0x00000000u); // 801D8F98
  c->r[3]=0u+0x00000001u; // 801D8F9C
  c->r[0]=R8(c->r[7]+0x00000000u); // 801D8FA0
  cmpu(c,0,c->r[4],c->r[0]); // 801D8FA4
  if (!crb(c,0)) return; // 801D8FA8
  c->r[3]=0u+0xFFFFFFFFu; // 801D8FAC
  return; // 801D8FB0
L_801D8FB4:;
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 801D8FB4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8F88; } // 801D8FB8
  c->r[3]=0u+0x00000000u; // 801D8FBC
  return; // 801D8FC0
}

// __copy_longs_aligned
void f_801D8FC4(Ctx* __restrict c) {
  trace_call(0x801D8FC4u);
  c->r[0]=0u-c->r[3]; // 801D8FC4
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801D8FC8
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 801D8FCC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D8FD0
  if (crb(c,2)) { goto L_801D8FEC; } // 801D8FD4
  c->r[5]=c->r[5]-c->r[6]; // 801D8FD8
L_801D8FDC:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 801D8FDC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 801D8FE0
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 801D8FE4
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8FDC; } // 801D8FE8
L_801D8FEC:;
  c->r[4]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 801D8FEC
  c->r[6]=c->r[7]+0xFFFFFFFDu; // 801D8FF0
  c->r[3]=c->r[3]+0xFFFFFFFDu; // 801D8FF4
  if (crb(c,2)) { goto L_801D9044; } // 801D8FF8
L_801D8FFC:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 801D8FFC
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 801D9000
  W32(c->r[3]+0x00000004u,c->r[0]); // 801D9004
  c->r[0]=R32(c->r[6]+0x00000008u); // 801D9008
  W32(c->r[3]+0x00000008u,c->r[0]); // 801D900C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801D9010
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D9014
  c->r[0]=R32(c->r[6]+0x00000010u); // 801D9018
  W32(c->r[3]+0x00000010u,c->r[0]); // 801D901C
  c->r[0]=R32(c->r[6]+0x00000014u); // 801D9020
  W32(c->r[3]+0x00000014u,c->r[0]); // 801D9024
  c->r[0]=R32(c->r[6]+0x00000018u); // 801D9028
  W32(c->r[3]+0x00000018u,c->r[0]); // 801D902C
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 801D9030
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801D9034
  {uint32_t ea=c->r[6]+0x00000020u; c->r[0]=R32(ea); c->r[6]=ea;} // 801D9038
  {uint32_t ea=c->r[3]+0x00000020u; W32(ea,c->r[0]); c->r[3]=ea;} // 801D903C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D8FFC; } // 801D9040
L_801D9044:;
  c->r[4]=rotl(c->r[5],30)&0x00000007u; cr0(c,c->r[4]); // 801D9044
  if (crb(c,2)) { goto L_801D905C; } // 801D9048
L_801D904C:;
  {uint32_t ea=c->r[6]+0x00000004u; c->r[0]=R32(ea); c->r[6]=ea;} // 801D904C
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 801D9050
  {uint32_t ea=c->r[3]+0x00000004u; W32(ea,c->r[0]); c->r[3]=ea;} // 801D9054
  if (!crb(c,2)) { IRQCHK(c); goto L_801D904C; } // 801D9058
L_801D905C:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 801D905C
  c->r[4]=c->r[6]+0x00000003u; // 801D9060
  c->r[3]=c->r[3]+0x00000003u; // 801D9064
  if (crb(c,2)) return; // 801D9068
L_801D906C:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801D906C
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801D9070
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 801D9074
  if (!crb(c,2)) { IRQCHK(c); goto L_801D906C; } // 801D9078
  return; // 801D907C
}

// __copy_longs_rev_aligned
void f_801D9080(Ctx* __restrict c) {
  trace_call(0x801D9080u);
  c->r[6]=c->r[3]+c->r[5]; // 801D9080
  c->r[4]=c->r[4]+c->r[5]; // 801D9084
  c->r[3]=rotl(c->r[6],0)&0x00000003u; cr0(c,c->r[3]); // 801D9088
  if (crb(c,2)) { goto L_801D90A4; } // 801D908C
  c->r[5]=c->r[5]-c->r[3]; // 801D9090
L_801D9094:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 801D9094
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801D9098
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 801D909C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9094; } // 801D90A0
L_801D90A4:;
  c->r[3]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[3]); // 801D90A4
  if (crb(c,2)) { goto L_801D90F4; } // 801D90A8
L_801D90AC:;
  c->r[0]=R32(c->r[4]+0xFFFFFFFCu); // 801D90AC
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801D90B0
  W32(c->r[6]+0xFFFFFFFCu,c->r[0]); // 801D90B4
  c->r[0]=R32(c->r[4]+0xFFFFFFF8u); // 801D90B8
  W32(c->r[6]+0xFFFFFFF8u,c->r[0]); // 801D90BC
  c->r[0]=R32(c->r[4]+0xFFFFFFF4u); // 801D90C0
  W32(c->r[6]+0xFFFFFFF4u,c->r[0]); // 801D90C4
  c->r[0]=R32(c->r[4]+0xFFFFFFF0u); // 801D90C8
  W32(c->r[6]+0xFFFFFFF0u,c->r[0]); // 801D90CC
  c->r[0]=R32(c->r[4]+0xFFFFFFECu); // 801D90D0
  W32(c->r[6]+0xFFFFFFECu,c->r[0]); // 801D90D4
  c->r[0]=R32(c->r[4]+0xFFFFFFE8u); // 801D90D8
  W32(c->r[6]+0xFFFFFFE8u,c->r[0]); // 801D90DC
  c->r[0]=R32(c->r[4]+0xFFFFFFE4u); // 801D90E0
  W32(c->r[6]+0xFFFFFFE4u,c->r[0]); // 801D90E4
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->r[0]=R32(ea); c->r[4]=ea;} // 801D90E8
  {uint32_t ea=c->r[6]+0xFFFFFFE0u; W32(ea,c->r[0]); c->r[6]=ea;} // 801D90EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D90AC; } // 801D90F0
L_801D90F4:;
  c->r[3]=rotl(c->r[5],30)&0x00000007u; cr0(c,c->r[3]); // 801D90F4
  if (crb(c,2)) { goto L_801D910C; } // 801D90F8
L_801D90FC:;
  {uint32_t ea=c->r[4]+0xFFFFFFFCu; c->r[0]=R32(ea); c->r[4]=ea;} // 801D90FC
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801D9100
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; W32(ea,c->r[0]); c->r[6]=ea;} // 801D9104
  if (!crb(c,2)) { IRQCHK(c); goto L_801D90FC; } // 801D9108
L_801D910C:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 801D910C
  if (crb(c,2)) return; // 801D9110
L_801D9114:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 801D9114
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801D9118
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 801D911C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9114; } // 801D9120
  return; // 801D9124
}

// __copy_longs_unaligned
void f_801D9128(Ctx* __restrict c) {
  trace_call(0x801D9128u);
  c->r[0]=0u-c->r[3]; // 801D9128
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 801D912C
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 801D9130
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D9134
  if (crb(c,2)) { goto L_801D9150; } // 801D9138
  c->r[5]=c->r[5]-c->r[6]; // 801D913C
L_801D9140:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 801D9140
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 801D9144
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 801D9148
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9140; } // 801D914C
L_801D9150:;
  c->r[0]=c->r[7]+0x00000001u; // 801D9150
  c->r[4]=c->r[3]+0xFFFFFFFDu; // 801D9154
  c->r[10]=rotl(c->r[0],0)&0x00000003u; // 801D9158
  c->r[6]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801D915C
  c->r[7]=c->r[7]-c->r[10]; // 801D9160
  c->r[11]=rotl(c->r[0],3)&0x00000018u; // 801D9164
  {uint32_t ea=c->r[7]+0x00000001u; c->r[8]=R32(ea); c->r[7]=ea;} // 801D9168
  c->r[12]=addc(c,~c->r[11],0x00000020u,1); // 801D916C
L_801D9170:;
  c->r[9]=R32(c->r[7]+0x00000004u); // 801D9170
  c->r[3]=((c->r[11])&0x20)?0u:(c->r[8]<<((c->r[11])&31)); // 801D9174
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 801D9178
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[9]>>((c->r[12])&31)); // 801D917C
  c->r[0]=c->r[3]|c->r[0]; // 801D9180
  W32(c->r[4]+0x00000004u,c->r[0]); // 801D9184
  c->r[3]=((c->r[11])&0x20)?0u:(c->r[9]<<((c->r[11])&31)); // 801D9188
  {uint32_t ea=c->r[7]+0x00000008u; c->r[8]=R32(ea); c->r[7]=ea;} // 801D918C
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[8]>>((c->r[12])&31)); // 801D9190
  c->r[0]=c->r[3]|c->r[0]; // 801D9194
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[0]); c->r[4]=ea;} // 801D9198
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9170; } // 801D919C
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 801D91A0
  if (crb(c,2)) { goto L_801D91BC; } // 801D91A4
  {uint32_t ea=c->r[7]+0x00000004u; c->r[0]=R32(ea); c->r[7]=ea;} // 801D91A8
  c->r[3]=((c->r[11])&0x20)?0u:(c->r[8]<<((c->r[11])&31)); // 801D91AC
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[0]>>((c->r[12])&31)); // 801D91B0
  c->r[0]=c->r[3]|c->r[0]; // 801D91B4
  {uint32_t ea=c->r[4]+0x00000004u; W32(ea,c->r[0]); c->r[4]=ea;} // 801D91B8
L_801D91BC:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 801D91BC
  c->r[6]=c->r[7]+0x00000003u; // 801D91C0
  c->r[3]=c->r[4]+0x00000003u; // 801D91C4
  if (crb(c,2)) return; // 801D91C8
  c->r[0]=addc(c,~c->r[10],0x00000004u,1); // 801D91CC
  c->r[6]=c->r[6]-c->r[0]; // 801D91D0
L_801D91D4:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[0]=R8(ea); c->r[6]=ea;} // 801D91D4
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801D91D8
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 801D91DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801D91D4; } // 801D91E0
  return; // 801D91E4
}

// __copy_longs_rev_unaligned
void f_801D91E8(Ctx* __restrict c) {
  trace_call(0x801D91E8u);
  c->r[12]=c->r[3]+c->r[5]; // 801D91E8
  c->r[4]=c->r[4]+c->r[5]; // 801D91EC
  c->r[3]=rotl(c->r[12],0)&0x00000003u; cr0(c,c->r[3]); // 801D91F0
  if (crb(c,2)) { goto L_801D920C; } // 801D91F4
  c->r[5]=c->r[5]-c->r[3]; // 801D91F8
L_801D91FC:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 801D91FC
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801D9200
  {uint32_t ea=c->r[12]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[12]=ea;} // 801D9204
  if (!crb(c,2)) { IRQCHK(c); goto L_801D91FC; } // 801D9208
L_801D920C:;
  c->r[10]=rotl(c->r[4],3)&0x00000018u; // 801D920C
  c->r[9]=rotl(c->r[4],0)&0x00000003u; // 801D9210
  c->r[11]=addc(c,~c->r[10],0x00000020u,1); // 801D9214
  c->r[6]=rotl(c->r[5],29)&0x1FFFFFFFu; // 801D9218
  c->r[0]=addc(c,~c->r[9],0x00000004u,1); // 801D921C
  c->r[4]=c->r[4]+c->r[0]; // 801D9220
  {uint32_t ea=c->r[4]+0xFFFFFFFCu; c->r[7]=R32(ea); c->r[4]=ea;} // 801D9224
L_801D9228:;
  c->r[8]=R32(c->r[4]+0xFFFFFFFCu); // 801D9228
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[7]>>((c->r[11])&31)); // 801D922C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 801D9230
  c->r[3]=((c->r[10])&0x20)?0u:(c->r[8]<<((c->r[10])&31)); // 801D9234
  c->r[0]=c->r[3]|c->r[0]; // 801D9238
  W32(c->r[12]+0xFFFFFFFCu,c->r[0]); // 801D923C
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[8]>>((c->r[11])&31)); // 801D9240
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->r[7]=R32(ea); c->r[4]=ea;} // 801D9244
  c->r[3]=((c->r[10])&0x20)?0u:(c->r[7]<<((c->r[10])&31)); // 801D9248
  c->r[0]=c->r[3]|c->r[0]; // 801D924C
  {uint32_t ea=c->r[12]+0xFFFFFFF8u; W32(ea,c->r[0]); c->r[12]=ea;} // 801D9250
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9228; } // 801D9254
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 801D9258
  if (crb(c,2)) { goto L_801D9274; } // 801D925C
  {uint32_t ea=c->r[4]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[4]=ea;} // 801D9260
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[7]>>((c->r[11])&31)); // 801D9264
  c->r[3]=((c->r[10])&0x20)?0u:(c->r[3]<<((c->r[10])&31)); // 801D9268
  c->r[0]=c->r[3]|c->r[0]; // 801D926C
  {uint32_t ea=c->r[12]+0xFFFFFFFCu; W32(ea,c->r[0]); c->r[12]=ea;} // 801D9270
L_801D9274:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 801D9274
  if (crb(c,2)) return; // 801D9278
  c->r[3]=c->r[4]+c->r[9]; // 801D927C
L_801D9280:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[3]=ea;} // 801D9280
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801D9284
  {uint32_t ea=c->r[12]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[12]=ea;} // 801D9288
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9280; } // 801D928C
  return; // 801D9290
}

// __fpclassifyf
void f_801D9294(Ctx* __restrict c) {
  trace_call(0x801D9294u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9294
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801D9298
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D929C
  c->r[4]=rotl(c->r[3],0)&0x7F800000u; // 801D92A0
  c->r[0]=c->r[4]+0x80800000u; // 801D92A4
  cmpu(c,0,c->r[0],0x00000000u); // 801D92A8
  if (crb(c,2)) { goto L_801D92BC; } // 801D92AC
  cmps(c,0,(int32_t)c->r[4],0); // 801D92B0
  if (crb(c,2)) { goto L_801D92D4; } // 801D92B4
  goto L_801D92E8; // 801D92B8
L_801D92BC:;
  c->r[3]=rotl(c->r[3],0)&0x007FFFFFu; // 801D92BC
  c->r[0]=0u-c->r[3]; // 801D92C0
  c->r[0]=c->r[0]|c->r[3]; // 801D92C4
  c->r[3]=sraw(c,c->r[0],31); // 801D92C8
  c->r[3]=c->r[3]+0x00000002u; // 801D92CC
  goto L_801D92EC; // 801D92D0
L_801D92D4:;
  c->r[0]=rotl(c->r[3],0)&0x007FFFFFu; cr0(c,c->r[0]); // 801D92D4
  c->r[3]=0u+0x00000003u; // 801D92D8
  if (crb(c,2)) { goto L_801D92EC; } // 801D92DC
  c->r[3]=0u+0x00000005u; // 801D92E0
  goto L_801D92EC; // 801D92E4
L_801D92E8:;
  c->r[3]=0u+0x00000004u; // 801D92E8
L_801D92EC:;
  c->r[1]=c->r[1]+0x00000010u; // 801D92EC
  return; // 801D92F0
}

// __signbitd
void f_801D92F4(Ctx* __restrict c) {
  trace_call(0x801D92F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D92F4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801D92F8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D92FC
  c->r[3]=rotl(c->r[0],0)&0x80000000u; // 801D9300
  c->r[1]=c->r[1]+0x00000010u; // 801D9304
  return; // 801D9308
}

// __fpclassifyd
void f_801D930C(Ctx* __restrict c) {
  trace_call(0x801D930Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D930C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801D9310
  c->r[3]=R32(c->r[1]+0x00000008u); // 801D9314
  c->r[4]=rotl(c->r[3],0)&0x7FF00000u; // 801D9318
  c->r[0]=c->r[4]+0x80100000u; // 801D931C
  cmpu(c,0,c->r[0],0x00000000u); // 801D9320
  if (crb(c,2)) { goto L_801D9334; } // 801D9324
  cmps(c,0,(int32_t)c->r[4],0); // 801D9328
  if (crb(c,2)) { goto L_801D9358; } // 801D932C
  goto L_801D937C; // 801D9330
L_801D9334:;
  c->r[0]=rotl(c->r[3],0)&0x000FFFFFu; cr0(c,c->r[0]); // 801D9334
  if (!crb(c,2)) { goto L_801D9348; } // 801D9338
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D933C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9340
  if (crb(c,2)) { goto L_801D9350; } // 801D9344
L_801D9348:;
  c->r[3]=0u+0x00000001u; // 801D9348
  goto L_801D9380; // 801D934C
L_801D9350:;
  c->r[3]=0u+0x00000002u; // 801D9350
  goto L_801D9380; // 801D9354
L_801D9358:;
  c->r[0]=rotl(c->r[3],0)&0x000FFFFFu; cr0(c,c->r[0]); // 801D9358
  if (!crb(c,2)) { goto L_801D936C; } // 801D935C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D9360
  cmps(c,0,(int32_t)c->r[0],0); // 801D9364
  if (crb(c,2)) { goto L_801D9374; } // 801D9368
L_801D936C:;
  c->r[3]=0u+0x00000005u; // 801D936C
  goto L_801D9380; // 801D9370
L_801D9374:;
  c->r[3]=0u+0x00000003u; // 801D9374
  goto L_801D9380; // 801D9378
L_801D937C:;
  c->r[3]=0u+0x00000004u; // 801D937C
L_801D9380:;
  c->r[1]=c->r[1]+0x00000010u; // 801D9380
  return; // 801D9384
}

// __stdio_atexit
void f_801D9388(Ctx* __restrict c) {
  trace_call(0x801D9388u);
  c->r[3]=0u+0x801D0000u; // 801D9388
  c->r[3]=c->r[3]+0x00007834u; // 801D938C
  W32(c->r[13]+0xFFFFB784u,c->r[3]); // 801D9390
  return; // 801D9394
}

// parse_format
void f_801D9398(Ctx* __restrict c) {
  trace_call(0x801D9398u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9398
  c->r[0]=c->lr; // 801D939C
  c->r[7]=0u+0x00000000u; // 801D93A0
  c->r[6]=R8(c->r[3]+0x00000001u); // 801D93A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D93A8
  c->r[8]=0u+0x00000001u; // 801D93AC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D93B0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D93B4
  cmps(c,0,(int32_t)c->r[6],37); // 801D93B8
  c->r[31]=c->r[3]+0x00000001u; // 801D93BC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D93C0
  c->r[30]=c->r[5]|c->r[5]; // 801D93C4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D93C8
  c->r[29]=c->r[4]|c->r[4]; // 801D93CC
  W8(c->r[1]+0x00000008u,c->r[8]); // 801D93D0
  W8(c->r[1]+0x00000009u,c->r[7]); // 801D93D4
  W8(c->r[1]+0x0000000Au,c->r[7]); // 801D93D8
  W8(c->r[1]+0x0000000Bu,c->r[7]); // 801D93DC
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 801D93E0
  W32(c->r[1]+0x00000010u,c->r[7]); // 801D93E4
  W32(c->r[1]+0x00000014u,c->r[7]); // 801D93E8
  if (!crb(c,2)) { goto L_801D9414; } // 801D93EC
  W8(c->r[1]+0x0000000Du,c->r[6]); // 801D93F0
  c->r[3]=c->r[31]+0x00000001u; // 801D93F4
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D93F8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801D93FC
  W32(c->r[5]+0x00000000u,c->r[4]); // 801D9400
  W32(c->r[5]+0x00000004u,c->r[0]); // 801D9404
  W32(c->r[5]+0x00000008u,c->r[7]); // 801D9408
  W32(c->r[5]+0x0000000Cu,c->r[7]); // 801D940C
  goto L_801D9938; // 801D9410
L_801D9414:;
  c->r[0]=0u+0x00000002u; // 801D9414
L_801D9418:;
  cmps(c,0,(int32_t)c->r[6],45); // 801D9418
  c->r[4]=0u+0x00000001u; // 801D941C
  if (crb(c,2)) { goto L_801D9448; } // 801D9420
  cmps(c,0,(int32_t)c->r[6],43); // 801D9424
  if (crb(c,2)) { goto L_801D9450; } // 801D9428
  cmps(c,0,(int32_t)c->r[6],32); // 801D942C
  if (crb(c,2)) { goto L_801D9458; } // 801D9430
  cmps(c,0,(int32_t)c->r[6],35); // 801D9434
  if (crb(c,2)) { goto L_801D946C; } // 801D9438
  cmps(c,0,(int32_t)c->r[6],48); // 801D943C
  if (crb(c,2)) { goto L_801D9474; } // 801D9440
  goto L_801D9488; // 801D9444
L_801D9448:;
  W8(c->r[1]+0x00000008u,c->r[7]); // 801D9448
  goto L_801D948C; // 801D944C
L_801D9450:;
  W8(c->r[1]+0x00000009u,c->r[8]); // 801D9450
  goto L_801D948C; // 801D9454
L_801D9458:;
  c->r[3]=R8(c->r[1]+0x00000009u); // 801D9458
  cmpu(c,0,c->r[3],0x00000001u); // 801D945C
  if (crb(c,2)) { goto L_801D948C; } // 801D9460
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D9464
  goto L_801D948C; // 801D9468
L_801D946C:;
  W8(c->r[1]+0x0000000Bu,c->r[8]); // 801D946C
  goto L_801D948C; // 801D9470
L_801D9474:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801D9474
  cmps(c,0,(int32_t)c->r[3],0); // 801D9478
  if (crb(c,2)) { goto L_801D948C; } // 801D947C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D9480
  goto L_801D948C; // 801D9484
L_801D9488:;
  c->r[4]=0u+0x00000000u; // 801D9488
L_801D948C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D948C
  if (crb(c,2)) { goto L_801D94A0; } // 801D9490
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 801D9494
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D9498
  IRQCHK(c); goto L_801D9418; // 801D949C
L_801D94A0:;
  cmps(c,0,(int32_t)c->r[6],42); // 801D94A0
  if (!crb(c,2)) { goto L_801D94E0; } // 801D94A4
  c->r[3]=c->r[29]|c->r[29]; // 801D94A8
  c->r[4]=0u+0x00000001u; // 801D94AC
  c->lr=0x801D94B4u; f_801D4D60(c); // 801D94B0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D94B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D94B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D94BC
  if (!crb(c,0)) { goto L_801D94D4; } // 801D94C0
  c->r[0]=0u-c->r[0]; // 801D94C4
  c->r[3]=0u+0x00000000u; // 801D94C8
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D94CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D94D0
L_801D94D4:;
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 801D94D4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D94D8
  goto L_801D9544; // 801D94DC
L_801D94E0:;
  c->r[3]=0u+0x80250000u; // 801D94E0
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801D94E4
  c->r[4]=R32(c->r[3]+0x00000038u); // 801D94E8
  goto L_801D950C; // 801D94EC
L_801D94F0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801D94F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801D94F4
  c->r[3]=c->r[6]+c->r[0]; // 801D94F8
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 801D94FC
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801D9500
  W32(c->r[1]+0x00000010u,c->r[0]); // 801D9504
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D9508
L_801D950C:;
  cmpu(c,0,c->r[6],0x000000FFu); // 801D950C
  c->r[0]=0u+0x00000001u; // 801D9510
  if (crb(c,1)) { goto L_801D951C; } // 801D9514
  c->r[0]=0u+0x00000000u; // 801D9518
L_801D951C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D951C
  if (crb(c,2)) { goto L_801D952C; } // 801D9520
  c->r[0]=0u+0x00000000u; // 801D9524
  goto L_801D953C; // 801D9528
L_801D952C:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 801D952C
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801D9530
  c->r[0]=R16(c->r[3]+c->r[0]); // 801D9534
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 801D9538
L_801D953C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D953C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D94F0; } // 801D9540
L_801D9544:;
  c->r[7]=R32(c->r[1]+0x00000010u); // 801D9544
  cmps(c,0,(int32_t)c->r[7],509); // 801D9548
  if (!crb(c,1)) { goto L_801D957C; } // 801D954C
  c->r[0]=0u+0x000000FFu; // 801D9550
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D9554
  c->r[5]=R32(c->r[1]+0x00000008u); // 801D9558
  c->r[3]=c->r[31]+0x00000001u; // 801D955C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801D9560
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9564
  W32(c->r[30]+0x00000000u,c->r[5]); // 801D9568
  W32(c->r[30]+0x00000004u,c->r[4]); // 801D956C
  W32(c->r[30]+0x00000008u,c->r[7]); // 801D9570
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D9574
  goto L_801D9938; // 801D9578
L_801D957C:;
  cmps(c,0,(int32_t)c->r[6],46); // 801D957C
  if (!crb(c,2)) { goto L_801D9630; } // 801D9580
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 801D9584
  c->r[0]=0u+0x00000001u; // 801D9588
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D958C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D9590
  cmps(c,0,(int32_t)c->r[6],42); // 801D9594
  if (!crb(c,2)) { goto L_801D95CC; } // 801D9598
  c->r[3]=c->r[29]|c->r[29]; // 801D959C
  c->r[4]=0u+0x00000001u; // 801D95A0
  c->lr=0x801D95A8u; f_801D4D60(c); // 801D95A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801D95A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D95AC
  cmps(c,0,(int32_t)c->r[0],0); // 801D95B0
  if (!crb(c,0)) { goto L_801D95C0; } // 801D95B4
  c->r[0]=0u+0x00000000u; // 801D95B8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D95BC
L_801D95C0:;
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 801D95C0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D95C4
  goto L_801D9630; // 801D95C8
L_801D95CC:;
  c->r[3]=0u+0x80250000u; // 801D95CC
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801D95D0
  c->r[4]=R32(c->r[3]+0x00000038u); // 801D95D4
  goto L_801D95F8; // 801D95D8
L_801D95DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D95DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801D95E0
  c->r[3]=c->r[6]+c->r[0]; // 801D95E4
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 801D95E8
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 801D95EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D95F0
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D95F4
L_801D95F8:;
  cmpu(c,0,c->r[6],0x000000FFu); // 801D95F8
  c->r[0]=0u+0x00000001u; // 801D95FC
  if (crb(c,1)) { goto L_801D9608; } // 801D9600
  c->r[0]=0u+0x00000000u; // 801D9604
L_801D9608:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D9608
  if (crb(c,2)) { goto L_801D9618; } // 801D960C
  c->r[0]=0u+0x00000000u; // 801D9610
  goto L_801D9628; // 801D9614
L_801D9618:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 801D9618
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801D961C
  c->r[0]=R16(c->r[3]+c->r[0]); // 801D9620
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 801D9624
L_801D9628:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D9628
  if (!crb(c,2)) { IRQCHK(c); goto L_801D95DC; } // 801D962C
L_801D9630:;
  cmps(c,0,(int32_t)c->r[6],104); // 801D9630
  c->r[4]=0u+0x00000001u; // 801D9634
  if (crb(c,2)) { goto L_801D9668; } // 801D9638
  cmps(c,0,(int32_t)c->r[6],108); // 801D963C
  if (crb(c,2)) { goto L_801D9694; } // 801D9640
  cmps(c,0,(int32_t)c->r[6],76); // 801D9644
  if (crb(c,2)) { goto L_801D96C0; } // 801D9648
  cmps(c,0,(int32_t)c->r[6],106); // 801D964C
  if (crb(c,2)) { goto L_801D96CC; } // 801D9650
  cmps(c,0,(int32_t)c->r[6],116); // 801D9654
  if (crb(c,2)) { goto L_801D96D8; } // 801D9658
  cmps(c,0,(int32_t)c->r[6],122); // 801D965C
  if (crb(c,2)) { goto L_801D96E4; } // 801D9660
  goto L_801D96F0; // 801D9664
L_801D9668:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 801D9668
  c->r[3]=0u+0x00000002u; // 801D966C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801D9670
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D9674
  cmps(c,0,(int32_t)c->r[3],104); // 801D9678
  if (!crb(c,2)) { goto L_801D96F4; } // 801D967C
  c->r[0]=0u+0x00000001u; // 801D9680
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D9684
  c->r[6]=c->r[3]|c->r[3]; // 801D9688
  c->r[31]=c->r[31]+0x00000001u; // 801D968C
  goto L_801D96F4; // 801D9690
L_801D9694:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 801D9694
  c->r[3]=0u+0x00000003u; // 801D9698
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801D969C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801D96A0
  cmps(c,0,(int32_t)c->r[3],108); // 801D96A4
  if (!crb(c,2)) { goto L_801D96F4; } // 801D96A8
  c->r[0]=0u+0x00000004u; // 801D96AC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D96B0
  c->r[6]=c->r[3]|c->r[3]; // 801D96B4
  c->r[31]=c->r[31]+0x00000001u; // 801D96B8
  goto L_801D96F4; // 801D96BC
L_801D96C0:;
  c->r[0]=0u+0x00000009u; // 801D96C0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D96C4
  goto L_801D96F4; // 801D96C8
L_801D96CC:;
  c->r[0]=0u+0x00000006u; // 801D96CC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D96D0
  goto L_801D96F4; // 801D96D4
L_801D96D8:;
  c->r[0]=0u+0x00000008u; // 801D96D8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D96DC
  goto L_801D96F4; // 801D96E0
L_801D96E4:;
  c->r[0]=0u+0x00000007u; // 801D96E4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D96E8
  goto L_801D96F4; // 801D96EC
L_801D96F0:;
  c->r[4]=0u+0x00000000u; // 801D96F0
L_801D96F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D96F4
  if (crb(c,2)) { goto L_801D9704; } // 801D96F8
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 801D96FC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801D9700
L_801D9704:;
  c->r[0]=c->r[6]+0xFFFFFFBFu; // 801D9704
  W8(c->r[1]+0x0000000Du,c->r[6]); // 801D9708
  cmpu(c,0,c->r[0],0x00000037u); // 801D970C
  if (crb(c,1)) { goto L_801D990C; } // 801D9710
  c->r[3]=0u+0x80250000u; // 801D9714
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D9718
  c->r[3]=c->r[3]+0xFFFF9D40u; // 801D971C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D9720
  c->ctr=c->r[3]; // 801D9724
  if (true) { switch (c->ctr) { case 0x801D972Cu: goto L_801D972C; case 0x801D9774u: goto L_801D9774; case 0x801D97BCu: goto L_801D97BC; case 0x801D9808u: goto L_801D9808; case 0x801D981Cu: goto L_801D981C; case 0x801D986Cu: goto L_801D986C; case 0x801D9890u: goto L_801D9890; case 0x801D98C8u: goto L_801D98C8; case 0x801D98F4u: goto L_801D98F4; case 0x801D990Cu: goto L_801D990C; default: break; } dispatch(c,c->ctr); return; } // 801D9728
L_801D972C:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801D972C
  cmpu(c,0,c->r[0],0x00000009u); // 801D9730
  if (!crb(c,2)) { goto L_801D9744; } // 801D9734
  c->r[0]=0u+0x000000FFu; // 801D9738
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D973C
  goto L_801D9914; // 801D9740
L_801D9744:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801D9744
  cmps(c,0,(int32_t)c->r[0],0); // 801D9748
  if (!crb(c,2)) { goto L_801D975C; } // 801D974C
  c->r[0]=0u+0x00000001u; // 801D9750
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9754
  goto L_801D9914; // 801D9758
L_801D975C:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D975C
  cmpu(c,0,c->r[0],0x00000002u); // 801D9760
  if (!crb(c,2)) { goto L_801D9914; } // 801D9764
  c->r[0]=0u+0x00000001u; // 801D9768
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D976C
  goto L_801D9914; // 801D9770
L_801D9774:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801D9774
  c->r[0]=c->r[3]+0x000000FAu; // 801D9778
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D977C
  cmpu(c,0,c->r[0],0x00000002u); // 801D9780
  if (!crb(c,1)) { goto L_801D9798; } // 801D9784
  cmpu(c,0,c->r[3],0x00000002u); // 801D9788
  if (crb(c,2)) { goto L_801D9798; } // 801D978C
  cmpu(c,0,c->r[3],0x00000004u); // 801D9790
  if (!crb(c,2)) { goto L_801D97A4; } // 801D9794
L_801D9798:;
  c->r[0]=0u+0x000000FFu; // 801D9798
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D979C
  goto L_801D9914; // 801D97A0
L_801D97A4:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801D97A4
  cmps(c,0,(int32_t)c->r[0],0); // 801D97A8
  if (!crb(c,2)) { goto L_801D9914; } // 801D97AC
  c->r[0]=0u+0x00000006u; // 801D97B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D97B4
  goto L_801D9914; // 801D97B8
L_801D97BC:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801D97BC
  cmps(c,0,(int32_t)c->r[0],0); // 801D97C0
  if (!crb(c,2)) { goto L_801D97D0; } // 801D97C4
  c->r[0]=0u+0x0000000Du; // 801D97C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D97CC
L_801D97D0:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801D97D0
  c->r[0]=c->r[3]+0x000000FAu; // 801D97D4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D97D8
  cmpu(c,0,c->r[0],0x00000002u); // 801D97DC
  if (!crb(c,1)) { goto L_801D97FC; } // 801D97E0
  c->r[0]=c->r[3]+0x000000FFu; // 801D97E4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D97E8
  cmpu(c,0,c->r[0],0x00000001u); // 801D97EC
  if (!crb(c,1)) { goto L_801D97FC; } // 801D97F0
  cmpu(c,0,c->r[3],0x00000004u); // 801D97F4
  if (!crb(c,2)) { goto L_801D9914; } // 801D97F8
L_801D97FC:;
  c->r[0]=0u+0x000000FFu; // 801D97FC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D9800
  goto L_801D9914; // 801D9804
L_801D9808:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9808
  cmps(c,0,(int32_t)c->r[0],0); // 801D980C
  if (!crb(c,2)) { goto L_801D981C; } // 801D9810
  c->r[0]=0u+0x00000001u; // 801D9814
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9818
L_801D981C:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801D981C
  c->r[0]=c->r[3]+0x000000FAu; // 801D9820
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D9824
  cmpu(c,0,c->r[0],0x00000002u); // 801D9828
  if (!crb(c,1)) { goto L_801D9848; } // 801D982C
  c->r[0]=c->r[3]+0x000000FFu; // 801D9830
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D9834
  cmpu(c,0,c->r[0],0x00000001u); // 801D9838
  if (!crb(c,1)) { goto L_801D9848; } // 801D983C
  cmpu(c,0,c->r[3],0x00000004u); // 801D9840
  if (!crb(c,2)) { goto L_801D9854; } // 801D9844
L_801D9848:;
  c->r[0]=0u+0x000000FFu; // 801D9848
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D984C
  goto L_801D9914; // 801D9850
L_801D9854:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801D9854
  cmps(c,0,(int32_t)c->r[0],0); // 801D9858
  if (!crb(c,2)) { goto L_801D9914; } // 801D985C
  c->r[0]=0u+0x00000006u; // 801D9860
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9864
  goto L_801D9914; // 801D9868
L_801D986C:;
  c->r[5]=0u+0x00000078u; // 801D986C
  c->r[4]=0u+0x00000001u; // 801D9870
  c->r[3]=0u+0x00000003u; // 801D9874
  c->r[0]=0u+0x00000008u; // 801D9878
  W8(c->r[1]+0x0000000Du,c->r[5]); // 801D987C
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 801D9880
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801D9884
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9888
  goto L_801D9914; // 801D988C
L_801D9890:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801D9890
  cmpu(c,0,c->r[3],0x00000003u); // 801D9894
  if (!crb(c,2)) { goto L_801D98A8; } // 801D9898
  c->r[0]=0u+0x00000005u; // 801D989C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D98A0
  goto L_801D9914; // 801D98A4
L_801D98A8:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801D98A8
  cmps(c,0,(int32_t)c->r[0],0); // 801D98AC
  if (!crb(c,2)) { goto L_801D98BC; } // 801D98B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D98B4
  if (crb(c,2)) { goto L_801D9914; } // 801D98B8
L_801D98BC:;
  c->r[0]=0u+0x000000FFu; // 801D98BC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D98C0
  goto L_801D9914; // 801D98C4
L_801D98C8:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801D98C8
  cmpu(c,0,c->r[0],0x00000003u); // 801D98CC
  if (!crb(c,2)) { goto L_801D98E0; } // 801D98D0
  c->r[0]=0u+0x00000005u; // 801D98D4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D98D8
  goto L_801D9914; // 801D98DC
L_801D98E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D98E0
  if (crb(c,2)) { goto L_801D9914; } // 801D98E4
  c->r[0]=0u+0x000000FFu; // 801D98E8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D98EC
  goto L_801D9914; // 801D98F0
L_801D98F4:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801D98F4
  cmpu(c,0,c->r[0],0x00000009u); // 801D98F8
  if (!crb(c,2)) { goto L_801D9914; } // 801D98FC
  c->r[0]=0u+0x000000FFu; // 801D9900
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D9904
  goto L_801D9914; // 801D9908
L_801D990C:;
  c->r[0]=0u+0x000000FFu; // 801D990C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D9910
L_801D9914:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 801D9914
  c->r[3]=c->r[31]+0x00000001u; // 801D9918
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801D991C
  c->r[4]=R32(c->r[1]+0x00000010u); // 801D9920
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9924
  W32(c->r[30]+0x00000000u,c->r[6]); // 801D9928
  W32(c->r[30]+0x00000004u,c->r[5]); // 801D992C
  W32(c->r[30]+0x00000008u,c->r[4]); // 801D9930
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801D9934
L_801D9938:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D9938
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D993C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D9940
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D9944
  c->lr=c->r[0]; // 801D9948
  c->r[1]=c->r[1]+0x00000030u; // 801D994C
  return; // 801D9950
}

// long2str
void f_801D9954(Ctx* __restrict c) {
  trace_call(0x801D9954u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D9954
  c->r[8]=0u+0x00000000u; // 801D9958
  W8(c->r[4]+0xFFFFFFFFu,c->r[8]); // 801D995C
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 801D9960
  c->r[7]=0u+0x00000000u; // 801D9964
  if (!crb(c,2)) { goto L_801D9998; } // 801D9968
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D996C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9970
  if (!crb(c,2)) { goto L_801D9998; } // 801D9974
  c->r[0]=R8(c->r[5]+0x00000003u); // 801D9978
  cmps(c,0,(int32_t)c->r[0],0); // 801D997C
  if (crb(c,2)) { goto L_801D9990; } // 801D9980
  c->r[0]=R8(c->r[5]+0x00000005u); // 801D9984
  cmpu(c,0,c->r[0],0x0000006Fu); // 801D9988
  if (crb(c,2)) { goto L_801D9998; } // 801D998C
L_801D9990:;
  c->r[3]=c->r[6]|c->r[6]; // 801D9990
  return; // 801D9994
L_801D9998:;
  c->r[9]=R8(c->r[5]+0x00000005u); // 801D9998
  cmps(c,0,(int32_t)c->r[9],100); // 801D999C
  if (crb(c,2)) { goto L_801D99D0; } // 801D99A0
  cmps(c,0,(int32_t)c->r[9],105); // 801D99A4
  if (crb(c,2)) { goto L_801D99D0; } // 801D99A8
  cmps(c,0,(int32_t)c->r[9],111); // 801D99AC
  if (crb(c,2)) { goto L_801D99FC; } // 801D99B0
  cmps(c,0,(int32_t)c->r[9],117); // 801D99B4
  if (crb(c,2)) { goto L_801D9A0C; } // 801D99B8
  cmps(c,0,(int32_t)c->r[9],120); // 801D99BC
  if (crb(c,2)) { goto L_801D9A1C; } // 801D99C0
  cmps(c,0,(int32_t)c->r[9],88); // 801D99C4
  if (crb(c,2)) { goto L_801D9A1C; } // 801D99C8
  goto L_801D9A28; // 801D99CC
L_801D99D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D99D0
  c->r[0]=0u+0x0000000Au; // 801D99D4
  if (!crb(c,0)) { goto L_801D9A28; } // 801D99D8
  c->r[9]=sraw(c,c->r[3],31); // 801D99DC
  c->r[8]=0u+0x80000000u; // 801D99E0
  c->r[8]=c->r[9]^c->r[8]; // 801D99E4
  c->r[8]=c->r[3]|c->r[8]; cr0(c,c->r[8]); // 801D99E8
  if (crb(c,2)) { goto L_801D99F4; } // 801D99EC
  c->r[3]=0u-c->r[3]; // 801D99F0
L_801D99F4:;
  c->r[8]=0u+0x00000001u; // 801D99F4
  goto L_801D9A28; // 801D99F8
L_801D99FC:;
  c->r[0]=0u+0x00000000u; // 801D99FC
  W8(c->r[5]+0x00000001u,c->r[0]); // 801D9A00
  c->r[0]=0u+0x00000008u; // 801D9A04
  goto L_801D9A28; // 801D9A08
L_801D9A0C:;
  c->r[0]=0u+0x00000000u; // 801D9A0C
  W8(c->r[5]+0x00000001u,c->r[0]); // 801D9A10
  c->r[0]=0u+0x0000000Au; // 801D9A14
  goto L_801D9A28; // 801D9A18
L_801D9A1C:;
  c->r[0]=0u+0x00000000u; // 801D9A1C
  W8(c->r[5]+0x00000001u,c->r[0]); // 801D9A20
  c->r[0]=0u+0x00000010u; // 801D9A24
L_801D9A28:;
  c->r[9]=divwu(c->r[3],c->r[0]); // 801D9A28
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 801D9A2C
  c->r[11]=c->r[3]-c->r[9]; // 801D9A30
  c->r[3]=divwu(c->r[3],c->r[0]); // 801D9A34
  cmps(c,0,(int32_t)c->r[11],10); // 801D9A38
  if (!crb(c,0)) { goto L_801D9A48; } // 801D9A3C
  c->r[11]=c->r[11]+0x00000030u; // 801D9A40
  goto L_801D9A60; // 801D9A44
L_801D9A48:;
  c->r[9]=R8(c->r[5]+0x00000005u); // 801D9A48
  c->r[10]=c->r[11]+0x00000037u; // 801D9A4C
  cmpu(c,0,c->r[9],0x00000078u); // 801D9A50
  if (!crb(c,2)) { goto L_801D9A5C; } // 801D9A54
  c->r[10]=c->r[11]+0x00000057u; // 801D9A58
L_801D9A5C:;
  c->r[11]=c->r[10]|c->r[10]; // 801D9A5C
L_801D9A60:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D9A60
  W8(c->r[6]+0xFFFFFFFFu,c->r[11]); // 801D9A64
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801D9A68
  c->r[7]=c->r[7]+0x00000001u; // 801D9A6C
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9A28; } // 801D9A70
  cmpu(c,0,c->r[0],0x00000008u); // 801D9A74
  if (!crb(c,2)) { goto L_801D9AA0; } // 801D9A78
  c->r[3]=R8(c->r[5]+0x00000003u); // 801D9A7C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9A80
  if (crb(c,2)) { goto L_801D9AA0; } // 801D9A84
  c->r[3]=R8(c->r[6]+0x00000000u); // 801D9A88
  cmps(c,0,(int32_t)c->r[3],48); // 801D9A8C
  if (crb(c,2)) { goto L_801D9AA0; } // 801D9A90
  c->r[3]=0u+0x00000030u; // 801D9A94
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[6]=ea;} // 801D9A98
  c->r[7]=c->r[7]+0x00000001u; // 801D9A9C
L_801D9AA0:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 801D9AA0
  cmpu(c,0,c->r[3],0x00000002u); // 801D9AA4
  if (!crb(c,2)) { goto L_801D9AF4; } // 801D9AA8
  c->r[3]=R32(c->r[5]+0x00000008u); // 801D9AAC
  cmps(c,0,(int32_t)c->r[8],0); // 801D9AB0
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801D9AB4
  if (!crb(c,2)) { goto L_801D9AC8; } // 801D9AB8
  c->r[3]=R8(c->r[5]+0x00000001u); // 801D9ABC
  cmps(c,0,(int32_t)c->r[3],0); // 801D9AC0
  if (crb(c,2)) { goto L_801D9AD4; } // 801D9AC4
L_801D9AC8:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 801D9AC8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D9ACC
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801D9AD0
L_801D9AD4:;
  cmpu(c,0,c->r[0],0x00000010u); // 801D9AD4
  if (!crb(c,2)) { goto L_801D9AF4; } // 801D9AD8
  c->r[3]=R8(c->r[5]+0x00000003u); // 801D9ADC
  cmps(c,0,(int32_t)c->r[3],0); // 801D9AE0
  if (crb(c,2)) { goto L_801D9AF4; } // 801D9AE4
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 801D9AE8
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 801D9AEC
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801D9AF0
L_801D9AF4:;
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 801D9AF4
  c->r[3]=c->r[4]-c->r[6]; // 801D9AF8
  c->r[3]=c->r[9]+c->r[3]; // 801D9AFC
  cmps(c,0,(int32_t)c->r[3],509); // 801D9B00
  if (!crb(c,1)) { goto L_801D9B10; } // 801D9B04
  c->r[3]=0u+0x00000000u; // 801D9B08
  return; // 801D9B0C
L_801D9B10:;
  c->r[4]=0u+0x00000030u; // 801D9B10
  goto L_801D9B20; // 801D9B14
L_801D9B18:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[6]=ea;} // 801D9B18
  c->r[7]=c->r[7]+0x00000001u; // 801D9B1C
L_801D9B20:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 801D9B20
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 801D9B24
  if (crb(c,0)) { IRQCHK(c); goto L_801D9B18; } // 801D9B28
  cmpu(c,0,c->r[0],0x00000010u); // 801D9B2C
  if (!crb(c,2)) { goto L_801D9B50; } // 801D9B30
  c->r[0]=R8(c->r[5]+0x00000003u); // 801D9B34
  cmps(c,0,(int32_t)c->r[0],0); // 801D9B38
  if (crb(c,2)) { goto L_801D9B50; } // 801D9B3C
  c->r[3]=R8(c->r[5]+0x00000005u); // 801D9B40
  c->r[0]=0u+0x00000030u; // 801D9B44
  W8(c->r[6]+0xFFFFFFFFu,c->r[3]); // 801D9B48
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[6]=ea;} // 801D9B4C
L_801D9B50:;
  cmps(c,0,(int32_t)c->r[8],0); // 801D9B50
  if (crb(c,2)) { goto L_801D9B64; } // 801D9B54
  c->r[0]=0u+0x0000002Du; // 801D9B58
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 801D9B5C
  goto L_801D9B8C; // 801D9B60
L_801D9B64:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D9B64
  cmpu(c,0,c->r[0],0x00000001u); // 801D9B68
  if (!crb(c,2)) { goto L_801D9B7C; } // 801D9B6C
  c->r[0]=0u+0x0000002Bu; // 801D9B70
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 801D9B74
  goto L_801D9B8C; // 801D9B78
L_801D9B7C:;
  cmpu(c,0,c->r[0],0x00000002u); // 801D9B7C
  if (!crb(c,2)) { goto L_801D9B8C; } // 801D9B80
  c->r[0]=0u+0x00000020u; // 801D9B84
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 801D9B88
L_801D9B8C:;
  c->r[3]=c->r[6]|c->r[6]; // 801D9B8C
  return; // 801D9B90
}

// longlong2str
void f_801D9B94(Ctx* __restrict c) {
  trace_call(0x801D9B94u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9B94
  c->r[0]=c->lr; // 801D9B98
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D9B9C
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 801D9BA0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801D9BA4
  c->r[25]=0u+0x00000000u; // 801D9BA8
  c->r[31]=c->r[3]|c->r[3]; // 801D9BAC
  c->r[30]=c->r[4]|c->r[4]; // 801D9BB0
  c->r[23]=c->r[5]|c->r[5]; // 801D9BB4
  c->r[24]=c->r[6]|c->r[6]; // 801D9BB8
  c->r[27]=c->r[5]+0xFFFFFFFFu; // 801D9BBC
  c->r[26]=0u+0x00000000u; // 801D9BC0
  W8(c->r[5]+0xFFFFFFFFu,c->r[25]); // 801D9BC4
  if (!crb(c,2)) { goto L_801D9BF8; } // 801D9BC8
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801D9BCC
  cmps(c,0,(int32_t)c->r[0],0); // 801D9BD0
  if (!crb(c,2)) { goto L_801D9BF8; } // 801D9BD4
  c->r[0]=R8(c->r[6]+0x00000003u); // 801D9BD8
  cmps(c,0,(int32_t)c->r[0],0); // 801D9BDC
  if (crb(c,2)) { goto L_801D9BF0; } // 801D9BE0
  c->r[0]=R8(c->r[6]+0x00000005u); // 801D9BE4
  cmpu(c,0,c->r[0],0x0000006Fu); // 801D9BE8
  if (crb(c,2)) { goto L_801D9BF8; } // 801D9BEC
L_801D9BF0:;
  c->r[3]=c->r[27]|c->r[27]; // 801D9BF0
  goto L_801D9E30; // 801D9BF4
L_801D9BF8:;
  c->r[0]=R8(c->r[6]+0x00000005u); // 801D9BF8
  cmps(c,0,(int32_t)c->r[0],100); // 801D9BFC
  if (crb(c,2)) { goto L_801D9C30; } // 801D9C00
  cmps(c,0,(int32_t)c->r[0],105); // 801D9C04
  if (crb(c,2)) { goto L_801D9C30; } // 801D9C08
  cmps(c,0,(int32_t)c->r[0],111); // 801D9C0C
  if (crb(c,2)) { goto L_801D9C74; } // 801D9C10
  cmps(c,0,(int32_t)c->r[0],117); // 801D9C14
  if (crb(c,2)) { goto L_801D9C84; } // 801D9C18
  cmps(c,0,(int32_t)c->r[0],120); // 801D9C1C
  if (crb(c,2)) { goto L_801D9C94; } // 801D9C20
  cmps(c,0,(int32_t)c->r[0],88); // 801D9C24
  if (crb(c,2)) { goto L_801D9C94; } // 801D9C28
  goto L_801D9CA0; // 801D9C2C
L_801D9C30:;
  c->r[29]=0u+0x00000000u; // 801D9C30
  c->r[0]=c->r[3]^0x80000000u; // 801D9C34
  c->r[6]=c->r[29]^0x80000000u; // 801D9C38
  c->r[28]=0u+0x0000000Au; // 801D9C3C
  c->r[5]=addc(c,~c->r[29],c->r[4],1); // 801D9C40
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 801D9C44
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801D9C48
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801D9C4C
  if (crb(c,2)) { goto L_801D9CA0; } // 801D9C50
  c->r[0]=0u+0x80000000u; // 801D9C54
  c->r[0]=c->r[3]^c->r[0]; // 801D9C58
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 801D9C5C
  if (crb(c,2)) { goto L_801D9C6C; } // 801D9C60
  c->r[30]=addc(c,~c->r[4],0x00000000u,1); // 801D9C64
  c->r[31]=addc(c,~c->r[3],0,c->xer_ca); // 801D9C68
L_801D9C6C:;
  c->r[25]=0u+0x00000001u; // 801D9C6C
  goto L_801D9CA0; // 801D9C70
L_801D9C74:;
  c->r[29]=0u+0x00000000u; // 801D9C74
  W8(c->r[6]+0x00000001u,c->r[29]); // 801D9C78
  c->r[28]=0u+0x00000008u; // 801D9C7C
  goto L_801D9CA0; // 801D9C80
L_801D9C84:;
  c->r[29]=0u+0x00000000u; // 801D9C84
  W8(c->r[6]+0x00000001u,c->r[29]); // 801D9C88
  c->r[28]=0u+0x0000000Au; // 801D9C8C
  goto L_801D9CA0; // 801D9C90
L_801D9C94:;
  c->r[29]=0u+0x00000000u; // 801D9C94
  W8(c->r[6]+0x00000001u,c->r[29]); // 801D9C98
  c->r[28]=0u+0x00000010u; // 801D9C9C
L_801D9CA0:;
  c->r[3]=c->r[31]|c->r[31]; // 801D9CA0
  c->r[4]=c->r[30]|c->r[30]; // 801D9CA4
  c->r[5]=c->r[29]|c->r[29]; // 801D9CA8
  c->r[6]=c->r[28]|c->r[28]; // 801D9CAC
  c->lr=0x801D9CB4u; f_801D5D08(c); // 801D9CB0
  c->r[22]=c->r[4]|c->r[4]; // 801D9CB4
  c->r[3]=c->r[31]|c->r[31]; // 801D9CB8
  c->r[4]=c->r[30]|c->r[30]; // 801D9CBC
  c->r[5]=c->r[29]|c->r[29]; // 801D9CC0
  c->r[6]=c->r[28]|c->r[28]; // 801D9CC4
  c->lr=0x801D9CCCu; f_801D5AE4(c); // 801D9CC8
  cmps(c,0,(int32_t)c->r[22],10); // 801D9CCC
  c->r[30]=c->r[4]|c->r[4]; // 801D9CD0
  c->r[31]=c->r[3]|c->r[3]; // 801D9CD4
  if (!crb(c,0)) { goto L_801D9CE4; } // 801D9CD8
  c->r[5]=c->r[22]+0x00000030u; // 801D9CDC
  goto L_801D9CF8; // 801D9CE0
L_801D9CE4:;
  c->r[0]=R8(c->r[24]+0x00000005u); // 801D9CE4
  c->r[5]=c->r[22]+0x00000037u; // 801D9CE8
  cmpu(c,0,c->r[0],0x00000078u); // 801D9CEC
  if (!crb(c,2)) { goto L_801D9CF8; } // 801D9CF0
  c->r[5]=c->r[22]+0x00000057u; // 801D9CF4
L_801D9CF8:;
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 801D9CF8
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[5]); c->r[27]=ea;} // 801D9CFC
  c->r[26]=c->r[26]+0x00000001u; // 801D9D00
  if (!crb(c,2)) { IRQCHK(c); goto L_801D9CA0; } // 801D9D04
  c->r[0]=c->r[28]^0x00000008u; // 801D9D08
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 801D9D0C
  if (!crb(c,2)) { goto L_801D9D38; } // 801D9D10
  c->r[0]=R8(c->r[24]+0x00000003u); // 801D9D14
  cmps(c,0,(int32_t)c->r[0],0); // 801D9D18
  if (crb(c,2)) { goto L_801D9D38; } // 801D9D1C
  c->r[0]=R8(c->r[27]+0x00000000u); // 801D9D20
  cmps(c,0,(int32_t)c->r[0],48); // 801D9D24
  if (crb(c,2)) { goto L_801D9D38; } // 801D9D28
  c->r[0]=0u+0x00000030u; // 801D9D2C
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 801D9D30
  c->r[26]=c->r[26]+0x00000001u; // 801D9D34
L_801D9D38:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 801D9D38
  cmpu(c,0,c->r[0],0x00000002u); // 801D9D3C
  if (!crb(c,2)) { goto L_801D9D90; } // 801D9D40
  c->r[0]=R32(c->r[24]+0x00000008u); // 801D9D44
  cmps(c,0,(int32_t)c->r[25],0); // 801D9D48
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 801D9D4C
  if (!crb(c,2)) { goto L_801D9D60; } // 801D9D50
  c->r[0]=R8(c->r[24]+0x00000001u); // 801D9D54
  cmps(c,0,(int32_t)c->r[0],0); // 801D9D58
  if (crb(c,2)) { goto L_801D9D6C; } // 801D9D5C
L_801D9D60:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 801D9D60
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D9D64
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 801D9D68
L_801D9D6C:;
  c->r[0]=c->r[28]^0x00000010u; // 801D9D6C
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 801D9D70
  if (!crb(c,2)) { goto L_801D9D90; } // 801D9D74
  c->r[0]=R8(c->r[24]+0x00000003u); // 801D9D78
  cmps(c,0,(int32_t)c->r[0],0); // 801D9D7C
  if (crb(c,2)) { goto L_801D9D90; } // 801D9D80
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 801D9D84
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801D9D88
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 801D9D8C
L_801D9D90:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 801D9D90
  c->r[0]=c->r[23]-c->r[27]; // 801D9D94
  c->r[0]=c->r[3]+c->r[0]; // 801D9D98
  cmps(c,0,(int32_t)c->r[0],509); // 801D9D9C
  if (!crb(c,1)) { goto L_801D9DAC; } // 801D9DA0
  c->r[3]=0u+0x00000000u; // 801D9DA4
  goto L_801D9E30; // 801D9DA8
L_801D9DAC:;
  c->r[3]=0u+0x00000030u; // 801D9DAC
  goto L_801D9DBC; // 801D9DB0
L_801D9DB4:;
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[27]=ea;} // 801D9DB4
  c->r[26]=c->r[26]+0x00000001u; // 801D9DB8
L_801D9DBC:;
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 801D9DBC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801D9DC0
  if (crb(c,0)) { IRQCHK(c); goto L_801D9DB4; } // 801D9DC4
  c->r[0]=c->r[28]^0x00000010u; // 801D9DC8
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 801D9DCC
  if (!crb(c,2)) { goto L_801D9DF0; } // 801D9DD0
  c->r[0]=R8(c->r[24]+0x00000003u); // 801D9DD4
  cmps(c,0,(int32_t)c->r[0],0); // 801D9DD8
  if (crb(c,2)) { goto L_801D9DF0; } // 801D9DDC
  c->r[3]=R8(c->r[24]+0x00000005u); // 801D9DE0
  c->r[0]=0u+0x00000030u; // 801D9DE4
  W8(c->r[27]+0xFFFFFFFFu,c->r[3]); // 801D9DE8
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[27]=ea;} // 801D9DEC
L_801D9DF0:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D9DF0
  if (crb(c,2)) { goto L_801D9E04; } // 801D9DF4
  c->r[0]=0u+0x0000002Du; // 801D9DF8
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 801D9DFC
  goto L_801D9E2C; // 801D9E00
L_801D9E04:;
  c->r[0]=R8(c->r[24]+0x00000001u); // 801D9E04
  cmpu(c,0,c->r[0],0x00000001u); // 801D9E08
  if (!crb(c,2)) { goto L_801D9E1C; } // 801D9E0C
  c->r[0]=0u+0x0000002Bu; // 801D9E10
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 801D9E14
  goto L_801D9E2C; // 801D9E18
L_801D9E1C:;
  cmpu(c,0,c->r[0],0x00000002u); // 801D9E1C
  if (!crb(c,2)) { goto L_801D9E2C; } // 801D9E20
  c->r[0]=0u+0x00000020u; // 801D9E24
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 801D9E28
L_801D9E2C:;
  c->r[3]=c->r[27]|c->r[27]; // 801D9E2C
L_801D9E30:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801D9E30
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D9E34
  c->lr=c->r[0]; // 801D9E38
  c->r[1]=c->r[1]+0x00000030u; // 801D9E3C
  return; // 801D9E40
}

// double2hex
void f_801D9E44(Ctx* __restrict c) {
  trace_call(0x801D9E44u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9E44
  c->r[0]=c->lr; // 801D9E48
  c->r[5]=0u+0x80250000u; // 801D9E4C
  W32(c->r[1]+0x00000094u,c->r[0]); // 801D9E50
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801D9E54
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801D9E58
  c->f[31]=c->f[1]; // 801D9E5C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801D9E60
  W32(c->r[1]+0x00000078u,c->r[30]); // 801D9E64
  c->r[30]=c->r[4]|c->r[4]; // 801D9E68
  W32(c->r[1]+0x00000074u,c->r[29]); // 801D9E6C
  c->r[29]=c->r[3]|c->r[3]; // 801D9E70
  W32(c->r[1]+0x00000070u,c->r[28]); // 801D9E74
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801D9E78
  c->r[5]=R32(c->r[5]+0xFFFF9B48u); // 801D9E7C
  cmps(c,0,(int32_t)c->r[0],509); // 801D9E80
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801D9E84
  c->r[31]=R8(c->r[5]+0x00000000u); // 801D9E88
  if (!crb(c,1)) { goto L_801D9E98; } // 801D9E8C
  c->r[3]=0u+0x00000000u; // 801D9E90
  goto L_801DA1E4; // 801D9E94
L_801D9E98:;
  c->r[28]=0u+0x00000000u; // 801D9E98
  c->r[0]=0u+0x00000020u; // 801D9E9C
  W8(c->r[1]+0x00000010u,c->r[28]); // 801D9EA0
  c->r[3]=c->r[1]+0x00000010u; // 801D9EA4
  c->r[4]=c->r[1]+0x00000038u; // 801D9EA8
  W16(c->r[1]+0x00000012u,c->r[0]); // 801D9EAC
  c->lr=0x801D9EB4u; f_801D8214(c); // 801D9EB0
  c->r[0]=R8(c->r[1]+0x0000003Du); // 801D9EB4
  cmps(c,0,(int32_t)c->r[0],48); // 801D9EB8
  if (crb(c,2)) { goto L_801D9ED4; } // 801D9EBC
  cmps(c,0,(int32_t)c->r[0],73); // 801D9EC0
  if (crb(c,2)) { goto L_801D9EDC; } // 801D9EC4
  cmps(c,0,(int32_t)c->r[0],78); // 801D9EC8
  if (crb(c,2)) { goto L_801D9F68; } // 801D9ECC
  goto L_801D9FF8; // 801D9ED0
L_801D9ED4:;
  W16(c->r[1]+0x0000003Au,c->r[28]); // 801D9ED4
  goto L_801D9FF8; // 801D9ED8
L_801D9EDC:;
  c->r[0]=R8(c->r[1]+0x00000038u); // 801D9EDC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D9EE0
  if (crb(c,2)) { goto L_801D9F24; } // 801D9EE4
  c->r[0]=R8(c->r[30]+0x00000005u); // 801D9EE8
  c->r[28]=c->r[29]+0xFFFFFFFBu; // 801D9EEC
  cmpu(c,0,c->r[0],0x00000041u); // 801D9EF0
  if (!crb(c,2)) { goto L_801D9F0C; } // 801D9EF4
  c->r[4]=0u+0x80200000u; // 801D9EF8
  c->r[3]=c->r[28]|c->r[28]; // 801D9EFC
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801D9F00
  c->lr=0x801D9F08u; f_801DB988(c); // 801D9F04
  goto L_801D9F60; // 801D9F08
L_801D9F0C:;
  c->r[4]=0u+0x80200000u; // 801D9F0C
  c->r[3]=c->r[28]|c->r[28]; // 801D9F10
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801D9F14
  c->r[4]=c->r[4]+0x00000005u; // 801D9F18
  c->lr=0x801D9F20u; f_801DB988(c); // 801D9F1C
  goto L_801D9F60; // 801D9F20
L_801D9F24:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 801D9F24
  c->r[28]=c->r[29]+0xFFFFFFFCu; // 801D9F28
  cmpu(c,0,c->r[0],0x00000041u); // 801D9F2C
  if (!crb(c,2)) { goto L_801D9F4C; } // 801D9F30
  c->r[4]=0u+0x80200000u; // 801D9F34
  c->r[3]=c->r[28]|c->r[28]; // 801D9F38
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801D9F3C
  c->r[4]=c->r[4]+0x0000000Au; // 801D9F40
  c->lr=0x801D9F48u; f_801DB988(c); // 801D9F44
  goto L_801D9F60; // 801D9F48
L_801D9F4C:;
  c->r[4]=0u+0x80200000u; // 801D9F4C
  c->r[3]=c->r[28]|c->r[28]; // 801D9F50
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801D9F54
  c->r[4]=c->r[4]+0x0000000Eu; // 801D9F58
  c->lr=0x801D9F60u; f_801DB988(c); // 801D9F5C
L_801D9F60:;
  c->r[3]=c->r[28]|c->r[28]; // 801D9F60
  goto L_801DA1E4; // 801D9F64
L_801D9F68:;
  c->r[0]=R8(c->r[1]+0x00000038u); // 801D9F68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801D9F6C
  if (crb(c,2)) { goto L_801D9FB4; } // 801D9F70
  c->r[0]=R8(c->r[30]+0x00000005u); // 801D9F74
  c->r[28]=c->r[29]+0xFFFFFFFBu; // 801D9F78
  cmpu(c,0,c->r[0],0x00000041u); // 801D9F7C
  if (!crb(c,2)) { goto L_801D9F9C; } // 801D9F80
  c->r[4]=0u+0x80200000u; // 801D9F84
  c->r[3]=c->r[28]|c->r[28]; // 801D9F88
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801D9F8C
  c->r[4]=c->r[4]+0x00000012u; // 801D9F90
  c->lr=0x801D9F98u; f_801DB988(c); // 801D9F94
  goto L_801D9FF0; // 801D9F98
L_801D9F9C:;
  c->r[4]=0u+0x80200000u; // 801D9F9C
  c->r[3]=c->r[28]|c->r[28]; // 801D9FA0
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801D9FA4
  c->r[4]=c->r[4]+0x00000017u; // 801D9FA8
  c->lr=0x801D9FB0u; f_801DB988(c); // 801D9FAC
  goto L_801D9FF0; // 801D9FB0
L_801D9FB4:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 801D9FB4
  c->r[28]=c->r[29]+0xFFFFFFFCu; // 801D9FB8
  cmpu(c,0,c->r[0],0x00000041u); // 801D9FBC
  if (!crb(c,2)) { goto L_801D9FDC; } // 801D9FC0
  c->r[4]=0u+0x80200000u; // 801D9FC4
  c->r[3]=c->r[28]|c->r[28]; // 801D9FC8
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801D9FCC
  c->r[4]=c->r[4]+0x0000001Cu; // 801D9FD0
  c->lr=0x801D9FD8u; f_801DB988(c); // 801D9FD4
  goto L_801D9FF0; // 801D9FD8
L_801D9FDC:;
  c->r[4]=0u+0x80200000u; // 801D9FDC
  c->r[3]=c->r[28]|c->r[28]; // 801D9FE0
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801D9FE4
  c->r[4]=c->r[4]+0x00000020u; // 801D9FE8
  c->lr=0x801D9FF0u; f_801DB988(c); // 801D9FEC
L_801D9FF0:;
  c->r[3]=c->r[28]|c->r[28]; // 801D9FF0
  goto L_801DA1E4; // 801D9FF4
L_801D9FF8:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801D9FF8
  c->r[8]=0u+0x00000000u; // 801D9FFC
  c->r[3]=R8(c->r[1]+0x00000008u); // 801DA000
  c->r[9]=0u+0x00000001u; // 801DA004
  c->r[0]=rotl(c->r[0],17)&0xFFFE0000u; // 801DA008
  c->r[7]=0u+0x00000064u; // 801DA00C
  c->r[0]=(rotl(c->r[3],25)&0xFE000000u)|(c->r[0]&~0xFE000000u); // 801DA010
  W8(c->r[1]+0x00000028u,c->r[9]); // 801DA014
  c->r[5]=rotl(c->r[0],11)&0x000007FFu; // 801DA018
  c->r[4]=c->r[29]|c->r[29]; // 801DA01C
  c->r[0]=0u-c->r[5]; // 801DA020
  W8(c->r[1]+0x00000029u,c->r[9]); // 801DA024
  c->r[3]=c->r[0]|c->r[5]; // 801DA028
  c->r[0]=c->r[5]+0xFFFFFC01u; // 801DA02C
  W8(c->r[1]+0x0000002Au,c->r[8]); // 801DA030
  c->r[3]=sraw(c,c->r[3],31); // 801DA034
  c->r[5]=c->r[1]+0x00000018u; // 801DA038
  W8(c->r[1]+0x0000002Bu,c->r[8]); // 801DA03C
  c->r[3]=c->r[0]&c->r[3]; // 801DA040
  c->r[6]=R32(c->r[1]+0x00000028u); // 801DA044
  W8(c->r[1]+0x0000002Cu,c->r[8]); // 801DA048
  W8(c->r[1]+0x0000002Du,c->r[7]); // 801DA04C
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801DA050
  W32(c->r[1]+0x00000030u,c->r[8]); // 801DA054
  W32(c->r[1]+0x00000034u,c->r[9]); // 801DA058
  W32(c->r[1]+0x00000018u,c->r[6]); // 801DA05C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DA060
  W32(c->r[1]+0x00000020u,c->r[8]); // 801DA064
  W32(c->r[1]+0x00000024u,c->r[9]); // 801DA068
  c->lr=0x801DA070u; f_801D9954(c); // 801DA06C
  c->r[0]=R8(c->r[30]+0x00000005u); // 801DA070
  cmpu(c,0,c->r[0],0x00000061u); // 801DA074
  if (!crb(c,2)) { goto L_801DA088; } // 801DA078
  c->r[0]=0u+0x00000070u; // 801DA07C
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA080
  goto L_801DA090; // 801DA084
L_801DA088:;
  c->r[0]=0u+0x00000050u; // 801DA088
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA08C
L_801DA090:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DA090
  c->r[8]=c->r[1]+0x00000008u; // 801DA094
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DA098
  c->r[9]=c->r[4]+0x0000000Bu; // 801DA09C
  c->ctr=c->r[0]; // 801DA0A0
  cmps(c,0,(int32_t)c->r[0],1); // 801DA0A4
  if (crb(c,0)) { goto L_801DA13C; } // 801DA0A8
L_801DA0AC:;
  cmps(c,0,(int32_t)c->r[9],64); // 801DA0AC
  if (!crb(c,0)) { goto L_801DA12C; } // 801DA0B0
  c->r[4]=sraw(c,c->r[9],3); // 801DA0B4
  c->r[0]=c->r[9]+0xFFFFFFFCu; // 801DA0B8
  c->r[7]=c->r[8]+c->r[4]; // 801DA0BC
  c->r[6]=rotl(c->r[9],0)&0x00000007u; // 801DA0C0
  c->r[4]=rotl(c->r[9],0)&0xFFFFFFF8u; // 801DA0C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801DA0C8
  c->r[5]=R8(c->r[7]+0x00000000u); // 801DA0CC
  c->r[6]=addc(c,~c->r[6],0x00000007u,1); // 801DA0D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DA0D4
  c->r[0]=sraw(c,c->r[5],(c->r[6])&63); // 801DA0D8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801DA0DC
  if (crb(c,2)) { goto L_801DA0FC; } // 801DA0E0
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 801DA0E4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DA0E8
  c->r[0]=sraw(c,c->r[0],(c->r[6])&63); // 801DA0EC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DA0F0
  c->r[0]=c->r[4]|c->r[0]; // 801DA0F4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801DA0F8
L_801DA0FC:;
  c->r[4]=rotl(c->r[4],0)&0x0000000Fu; // 801DA0FC
  cmpu(c,0,c->r[4],0x0000000Au); // 801DA100
  if (!crb(c,0)) { goto L_801DA110; } // 801DA104
  c->r[4]=c->r[4]+0x00000030u; // 801DA108
  goto L_801DA130; // 801DA10C
L_801DA110:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 801DA110
  cmpu(c,0,c->r[0],0x00000061u); // 801DA114
  if (!crb(c,2)) { goto L_801DA124; } // 801DA118
  c->r[4]=c->r[4]+0x00000057u; // 801DA11C
  goto L_801DA130; // 801DA120
L_801DA124:;
  c->r[4]=c->r[4]+0x00000037u; // 801DA124
  goto L_801DA130; // 801DA128
L_801DA12C:;
  c->r[4]=0u+0x00000030u; // 801DA12C
L_801DA130:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[3]=ea;} // 801DA130
  c->r[9]=c->r[9]+0xFFFFFFFCu; // 801DA134
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA0AC; } // 801DA138
L_801DA13C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DA13C
  cmps(c,0,(int32_t)c->r[0],0); // 801DA140
  if (!crb(c,2)) { goto L_801DA154; } // 801DA144
  c->r[0]=R8(c->r[30]+0x00000003u); // 801DA148
  cmps(c,0,(int32_t)c->r[0],0); // 801DA14C
  if (crb(c,2)) { goto L_801DA158; } // 801DA150
L_801DA154:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[31]); c->r[3]=ea;} // 801DA154
L_801DA158:;
  c->f[1]=std::fabs(c->f[31]); // 801DA158
  {uint32_t ea=c->r[2]+0xFFFFAE88u; c->f[0]=RF64(ea);} // 801DA15C
  fcmp(c,0,c->f[0],c->f[1]); // 801DA160
  if (crb(c,2)) { goto L_801DA174; } // 801DA164
  c->r[0]=0u+0x00000031u; // 801DA168
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA16C
  goto L_801DA17C; // 801DA170
L_801DA174:;
  c->r[0]=0u+0x00000030u; // 801DA174
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA178
L_801DA17C:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 801DA17C
  cmpu(c,0,c->r[0],0x00000061u); // 801DA180
  if (!crb(c,2)) { goto L_801DA194; } // 801DA184
  c->r[0]=0u+0x00000078u; // 801DA188
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA18C
  goto L_801DA19C; // 801DA190
L_801DA194:;
  c->r[0]=0u+0x00000058u; // 801DA194
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA198
L_801DA19C:;
  c->r[0]=0u+0x00000030u; // 801DA19C
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA1A0
  c->r[0]=R8(c->r[1]+0x00000038u); // 801DA1A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DA1A8
  if (crb(c,2)) { goto L_801DA1BC; } // 801DA1AC
  c->r[0]=0u+0x0000002Du; // 801DA1B0
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA1B4
  goto L_801DA1E4; // 801DA1B8
L_801DA1BC:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801DA1BC
  cmpu(c,0,c->r[0],0x00000001u); // 801DA1C0
  if (!crb(c,2)) { goto L_801DA1D4; } // 801DA1C4
  c->r[0]=0u+0x0000002Bu; // 801DA1C8
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA1CC
  goto L_801DA1E4; // 801DA1D0
L_801DA1D4:;
  cmpu(c,0,c->r[0],0x00000002u); // 801DA1D4
  if (!crb(c,2)) { goto L_801DA1E4; } // 801DA1D8
  c->r[0]=0u+0x00000020u; // 801DA1DC
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 801DA1E0
L_801DA1E4:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801DA1E4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801DA1E8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801DA1EC
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801DA1F0
  c->r[30]=R32(c->r[1]+0x00000078u); // 801DA1F4
  c->r[29]=R32(c->r[1]+0x00000074u); // 801DA1F8
  c->r[28]=R32(c->r[1]+0x00000070u); // 801DA1FC
  c->lr=c->r[0]; // 801DA200
  c->r[1]=c->r[1]+0x00000090u; // 801DA204
  return; // 801DA208
}

// round_decimal_801DA20C
void f_801DA20C(Ctx* __restrict c) {
  trace_call(0x801DA20Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 801DA20C
  if (!crb(c,0)) { goto L_801DA230; } // 801DA210
L_801DA214:;
  c->r[5]=0u+0x00000000u; // 801DA214
  c->r[4]=0u+0x00000001u; // 801DA218
  c->r[0]=0u+0x00000030u; // 801DA21C
  W16(c->r[3]+0x00000002u,c->r[5]); // 801DA220
  W8(c->r[3]+0x00000004u,c->r[4]); // 801DA224
  W8(c->r[3]+0x00000005u,c->r[0]); // 801DA228
  return; // 801DA22C
L_801DA230:;
  c->r[7]=R8(c->r[3]+0x00000004u); // 801DA230
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 801DA234
  if (!crb(c,0)) return; // 801DA238
  c->r[6]=c->r[3]+c->r[4]; // 801DA23C
  c->r[5]=R8(c->r[6]+0x00000005u); // 801DA240
  c->r[8]=c->r[6]+0x00000005u; // 801DA244
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 801DA248
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DA24C
  cmps(c,0,(int32_t)c->r[6],5); // 801DA250
  if (!crb(c,2)) { goto L_801DA294; } // 801DA254
  c->r[5]=c->r[3]+c->r[7]; // 801DA258
  c->r[5]=c->r[5]+0x00000005u; // 801DA25C
L_801DA260:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801DA260
  cmpu(c,0,c->r[5],c->r[8]); // 801DA264
  if (!crb(c,1)) { goto L_801DA278; } // 801DA268
  c->r[0]=R8(c->r[5]+0x00000000u); // 801DA26C
  cmps(c,0,(int32_t)c->r[0],48); // 801DA270
  if (crb(c,2)) { IRQCHK(c); goto L_801DA260; } // 801DA274
L_801DA278:;
  cmpu(c,0,c->r[5],c->r[8]); // 801DA278
  if (!crb(c,2)) { goto L_801DA28C; } // 801DA27C
  c->r[0]=R8(c->r[8]+0xFFFFFFFFu); // 801DA280
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 801DA284
  goto L_801DA2A8; // 801DA288
L_801DA28C:;
  c->r[5]=0u+0x00000001u; // 801DA28C
  goto L_801DA2A8; // 801DA290
L_801DA294:;
  c->r[0]=c->r[6]^0x00000005u; // 801DA294
  c->r[5]=sraw(c,c->r[0],1); // 801DA298
  c->r[0]=c->r[0]&c->r[6]; // 801DA29C
  c->r[0]=c->r[5]-c->r[0]; // 801DA2A0
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801DA2A4
L_801DA2A8:;
  c->ctr=c->r[4]; // 801DA2A8
  cmps(c,0,(int32_t)c->r[4],0); // 801DA2AC
  if (crb(c,2)) { goto L_801DA2FC; } // 801DA2B0
L_801DA2B4:;
  {uint32_t ea=c->r[8]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[8]=ea;} // 801DA2B4
  c->r[5]=c->r[0]+c->r[5]; // 801DA2B8
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 801DA2BC
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DA2C0
  c->r[0]=c->r[6]^0x00000009u; // 801DA2C4
  c->r[5]=sraw(c,c->r[0],1); // 801DA2C8
  c->r[0]=c->r[0]&c->r[6]; // 801DA2CC
  c->r[0]=c->r[5]-c->r[0]; // 801DA2D0
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 801DA2D4
  if (!crb(c,2)) { goto L_801DA2E4; } // 801DA2D8
  cmps(c,0,(int32_t)c->r[6],0); // 801DA2DC
  if (!crb(c,2)) { goto L_801DA2EC; } // 801DA2E0
L_801DA2E4:;
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DA2E4
  goto L_801DA2F8; // 801DA2E8
L_801DA2EC:;
  c->r[0]=c->r[6]+0x00000030u; // 801DA2EC
  W8(c->r[8]+0x00000000u,c->r[0]); // 801DA2F0
  goto L_801DA2FC; // 801DA2F4
L_801DA2F8:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA2B4; } // 801DA2F8
L_801DA2FC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DA2FC
  if (crb(c,2)) { goto L_801DA324; } // 801DA300
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801DA304
  c->r[4]=0u+0x00000001u; // 801DA308
  c->r[0]=0u+0x00000031u; // 801DA30C
  W8(c->r[3]+0x00000004u,c->r[4]); // 801DA310
  c->r[4]=c->r[5]+0x00000001u; // 801DA314
  W16(c->r[3]+0x00000002u,c->r[4]); // 801DA318
  W8(c->r[3]+0x00000005u,c->r[0]); // 801DA31C
  return; // 801DA320
L_801DA324:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DA324
  if (crb(c,2)) { IRQCHK(c); goto L_801DA214; } // 801DA328
  W8(c->r[3]+0x00000004u,c->r[4]); // 801DA32C
  return; // 801DA330
}

// float2str
void f_801DA334(Ctx* __restrict c) {
  trace_call(0x801DA334u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA334
  c->r[0]=c->lr; // 801DA338
  c->r[5]=0u+0x80250000u; // 801DA33C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801DA340
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[31]);} // 801DA344
  c->f[31]=c->f[1]; // 801DA348
  W32(c->r[1]+0x00000044u,c->r[31]); // 801DA34C
  W32(c->r[1]+0x00000040u,c->r[30]); // 801DA350
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 801DA354
  c->r[29]=c->r[4]|c->r[4]; // 801DA358
  W32(c->r[1]+0x00000038u,c->r[28]); // 801DA35C
  c->r[28]=c->r[3]|c->r[3]; // 801DA360
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801DA364
  c->r[5]=R32(c->r[5]+0xFFFF9B48u); // 801DA368
  cmps(c,0,(int32_t)c->r[0],509); // 801DA36C
  c->r[30]=R8(c->r[5]+0x00000000u); // 801DA370
  if (!crb(c,1)) { goto L_801DA380; } // 801DA374
  c->r[3]=0u+0x00000000u; // 801DA378
  goto L_801DAAAC; // 801DA37C
L_801DA380:;
  c->r[3]=0u+0x00000000u; // 801DA380
  c->r[0]=0u+0x00000020u; // 801DA384
  W8(c->r[1]+0x00000008u,c->r[3]); // 801DA388
  c->r[3]=c->r[1]+0x00000008u; // 801DA38C
  c->r[4]=c->r[1]+0x0000000Cu; // 801DA390
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801DA394
  c->lr=0x801DA39Cu; f_801D8214(c); // 801DA398
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DA39C
  c->r[5]=c->r[1]+0x00000011u; // 801DA3A0
  c->r[5]=c->r[5]+c->r[0]; // 801DA3A4
  goto L_801DA3C4; // 801DA3A8
L_801DA3AC:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 801DA3AC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DA3B0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801DA3B4
  W8(c->r[1]+0x00000010u,c->r[0]); // 801DA3B8
  c->r[0]=c->r[3]+0x00000001u; // 801DA3BC
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DA3C0
L_801DA3C4:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DA3C4
  cmpu(c,0,c->r[0],0x00000001u); // 801DA3C8
  if (!crb(c,1)) { goto L_801DA3DC; } // 801DA3CC
  {uint32_t ea=c->r[5]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[5]=ea;} // 801DA3D0
  cmps(c,0,(int32_t)c->r[0],48); // 801DA3D4
  if (crb(c,2)) { IRQCHK(c); goto L_801DA3AC; } // 801DA3D8
L_801DA3DC:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 801DA3DC
  cmps(c,0,(int32_t)c->r[0],48); // 801DA3E0
  if (crb(c,2)) { goto L_801DA3FC; } // 801DA3E4
  cmps(c,0,(int32_t)c->r[0],73); // 801DA3E8
  if (crb(c,2)) { goto L_801DA408; } // 801DA3EC
  cmps(c,0,(int32_t)c->r[0],78); // 801DA3F0
  if (crb(c,2)) { goto L_801DA50C; } // 801DA3F4
  goto L_801DA614; // 801DA3F8
L_801DA3FC:;
  c->r[0]=0u+0x00000000u; // 801DA3FC
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DA400
  goto L_801DA614; // 801DA404
L_801DA408:;
  {uint32_t ea=c->r[2]+0xFFFFAE88u; c->f[0]=RF64(ea);} // 801DA408
  fcmp(c,0,c->f[31],c->f[0]); // 801DA40C
  if (!crb(c,0)) { goto L_801DA48C; } // 801DA410
  c->r[0]=R8(c->r[29]+0x00000005u); // 801DA414
  c->r[31]=c->r[28]+0xFFFFFFFBu; // 801DA418
  c->r[3]=0u+0x00000001u; // 801DA41C
  cmpu(c,0,c->r[0],0x000000FFu); // 801DA420
  if (crb(c,1)) { goto L_801DA42C; } // 801DA424
  c->r[3]=0u+0x00000000u; // 801DA428
L_801DA42C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DA42C
  if (crb(c,2)) { goto L_801DA43C; } // 801DA430
  c->r[0]=0u+0x00000000u; // 801DA434
  goto L_801DA458; // 801DA438
L_801DA43C:;
  c->r[3]=0u+0x80250000u; // 801DA43C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DA440
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DA444
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DA448
  c->r[3]=R32(c->r[3]+0x00000008u); // 801DA44C
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DA450
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801DA454
L_801DA458:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DA458
  if (crb(c,2)) { goto L_801DA474; } // 801DA45C
  c->r[4]=0u+0x80200000u; // 801DA460
  c->r[3]=c->r[31]|c->r[31]; // 801DA464
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801DA468
  c->lr=0x801DA470u; f_801DB988(c); // 801DA46C
  goto L_801DA504; // 801DA470
L_801DA474:;
  c->r[4]=0u+0x80200000u; // 801DA474
  c->r[3]=c->r[31]|c->r[31]; // 801DA478
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801DA47C
  c->r[4]=c->r[4]+0x00000005u; // 801DA480
  c->lr=0x801DA488u; f_801DB988(c); // 801DA484
  goto L_801DA504; // 801DA488
L_801DA48C:;
  c->r[0]=R8(c->r[29]+0x00000005u); // 801DA48C
  c->r[31]=c->r[28]+0xFFFFFFFCu; // 801DA490
  c->r[3]=0u+0x00000001u; // 801DA494
  cmpu(c,0,c->r[0],0x000000FFu); // 801DA498
  if (crb(c,1)) { goto L_801DA4A4; } // 801DA49C
  c->r[3]=0u+0x00000000u; // 801DA4A0
L_801DA4A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DA4A4
  if (crb(c,2)) { goto L_801DA4B4; } // 801DA4A8
  c->r[0]=0u+0x00000000u; // 801DA4AC
  goto L_801DA4D0; // 801DA4B0
L_801DA4B4:;
  c->r[3]=0u+0x80250000u; // 801DA4B4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DA4B8
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DA4BC
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DA4C0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801DA4C4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DA4C8
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801DA4CC
L_801DA4D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DA4D0
  if (crb(c,2)) { goto L_801DA4F0; } // 801DA4D4
  c->r[4]=0u+0x80200000u; // 801DA4D8
  c->r[3]=c->r[31]|c->r[31]; // 801DA4DC
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801DA4E0
  c->r[4]=c->r[4]+0x0000000Au; // 801DA4E4
  c->lr=0x801DA4ECu; f_801DB988(c); // 801DA4E8
  goto L_801DA504; // 801DA4EC
L_801DA4F0:;
  c->r[4]=0u+0x80200000u; // 801DA4F0
  c->r[3]=c->r[31]|c->r[31]; // 801DA4F4
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801DA4F8
  c->r[4]=c->r[4]+0x0000000Eu; // 801DA4FC
  c->lr=0x801DA504u; f_801DB988(c); // 801DA500
L_801DA504:;
  c->r[3]=c->r[31]|c->r[31]; // 801DA504
  goto L_801DAAAC; // 801DA508
L_801DA50C:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DA50C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DA510
  if (crb(c,2)) { goto L_801DA594; } // 801DA514
  c->r[0]=R8(c->r[29]+0x00000005u); // 801DA518
  c->r[31]=c->r[28]+0xFFFFFFFBu; // 801DA51C
  c->r[3]=0u+0x00000001u; // 801DA520
  cmpu(c,0,c->r[0],0x000000FFu); // 801DA524
  if (crb(c,1)) { goto L_801DA530; } // 801DA528
  c->r[3]=0u+0x00000000u; // 801DA52C
L_801DA530:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DA530
  if (crb(c,2)) { goto L_801DA540; } // 801DA534
  c->r[0]=0u+0x00000000u; // 801DA538
  goto L_801DA55C; // 801DA53C
L_801DA540:;
  c->r[3]=0u+0x80250000u; // 801DA540
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DA544
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DA548
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DA54C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801DA550
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DA554
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801DA558
L_801DA55C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DA55C
  if (crb(c,2)) { goto L_801DA57C; } // 801DA560
  c->r[4]=0u+0x80200000u; // 801DA564
  c->r[3]=c->r[31]|c->r[31]; // 801DA568
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801DA56C
  c->r[4]=c->r[4]+0x00000012u; // 801DA570
  c->lr=0x801DA578u; f_801DB988(c); // 801DA574
  goto L_801DA60C; // 801DA578
L_801DA57C:;
  c->r[4]=0u+0x80200000u; // 801DA57C
  c->r[3]=c->r[31]|c->r[31]; // 801DA580
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801DA584
  c->r[4]=c->r[4]+0x00000017u; // 801DA588
  c->lr=0x801DA590u; f_801DB988(c); // 801DA58C
  goto L_801DA60C; // 801DA590
L_801DA594:;
  c->r[0]=R8(c->r[29]+0x00000005u); // 801DA594
  c->r[31]=c->r[28]+0xFFFFFFFCu; // 801DA598
  c->r[3]=0u+0x00000001u; // 801DA59C
  cmpu(c,0,c->r[0],0x000000FFu); // 801DA5A0
  if (crb(c,1)) { goto L_801DA5AC; } // 801DA5A4
  c->r[3]=0u+0x00000000u; // 801DA5A8
L_801DA5AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DA5AC
  if (crb(c,2)) { goto L_801DA5BC; } // 801DA5B0
  c->r[0]=0u+0x00000000u; // 801DA5B4
  goto L_801DA5D8; // 801DA5B8
L_801DA5BC:;
  c->r[3]=0u+0x80250000u; // 801DA5BC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801DA5C0
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DA5C4
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DA5C8
  c->r[3]=R32(c->r[3]+0x00000008u); // 801DA5CC
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DA5D0
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801DA5D4
L_801DA5D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DA5D8
  if (crb(c,2)) { goto L_801DA5F8; } // 801DA5DC
  c->r[4]=0u+0x80200000u; // 801DA5E0
  c->r[3]=c->r[31]|c->r[31]; // 801DA5E4
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801DA5E8
  c->r[4]=c->r[4]+0x0000001Cu; // 801DA5EC
  c->lr=0x801DA5F4u; f_801DB988(c); // 801DA5F0
  goto L_801DA60C; // 801DA5F4
L_801DA5F8:;
  c->r[4]=0u+0x80200000u; // 801DA5F8
  c->r[3]=c->r[31]|c->r[31]; // 801DA5FC
  c->r[4]=c->r[4]+0xFFFFAFB8u; // 801DA600
  c->r[4]=c->r[4]+0x00000020u; // 801DA604
  c->lr=0x801DA60Cu; f_801DB988(c); // 801DA608
L_801DA60C:;
  c->r[3]=c->r[31]|c->r[31]; // 801DA60C
  goto L_801DAAAC; // 801DA610
L_801DA614:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 801DA614
  c->r[0]=0u+0x00000000u; // 801DA618
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DA61C
  c->r[31]=c->r[28]+0xFFFFFFFFu; // 801DA620
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DA624
  c->r[3]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801DA628
  c->r[3]=c->r[4]+c->r[3]; // 801DA62C
  W16(c->r[1]+0x0000000Eu,c->r[3]); // 801DA630
  W8(c->r[28]+0xFFFFFFFFu,c->r[0]); // 801DA634
  c->r[0]=R8(c->r[29]+0x00000005u); // 801DA638
  cmps(c,0,(int32_t)c->r[0],103); // 801DA63C
  if (crb(c,2)) { goto L_801DA670; } // 801DA640
  cmps(c,0,(int32_t)c->r[0],71); // 801DA644
  if (crb(c,2)) { goto L_801DA670; } // 801DA648
  cmps(c,0,(int32_t)c->r[0],101); // 801DA64C
  if (crb(c,2)) { goto L_801DA728; } // 801DA650
  cmps(c,0,(int32_t)c->r[0],69); // 801DA654
  if (crb(c,2)) { goto L_801DA728; } // 801DA658
  cmps(c,0,(int32_t)c->r[0],102); // 801DA65C
  if (crb(c,2)) { goto L_801DA88C; } // 801DA660
  cmps(c,0,(int32_t)c->r[0],70); // 801DA664
  if (crb(c,2)) { goto L_801DA88C; } // 801DA668
  goto L_801DAAA8; // 801DA66C
L_801DA670:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801DA670
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DA674
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DA678
  if (!crb(c,1)) { goto L_801DA688; } // 801DA67C
  c->r[3]=c->r[1]+0x0000000Cu; // 801DA680
  c->lr=0x801DA688u; f_801DA20C(c); // 801DA684
L_801DA688:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DA688
  cmps(c,0,(int32_t)c->r[4],-4); // 801DA68C
  if (crb(c,0)) { goto L_801DA6A0; } // 801DA690
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801DA694
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801DA698
  if (crb(c,0)) { goto L_801DA6EC; } // 801DA69C
L_801DA6A0:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 801DA6A0
  cmps(c,0,(int32_t)c->r[0],0); // 801DA6A4
  if (crb(c,2)) { goto L_801DA6BC; } // 801DA6A8
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801DA6AC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DA6B0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DA6B4
  goto L_801DA6C8; // 801DA6B8
L_801DA6BC:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 801DA6BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DA6C0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DA6C4
L_801DA6C8:;
  c->r[0]=R8(c->r[29]+0x00000005u); // 801DA6C8
  cmpu(c,0,c->r[0],0x00000067u); // 801DA6CC
  if (!crb(c,2)) { goto L_801DA6E0; } // 801DA6D0
  c->r[0]=0u+0x00000065u; // 801DA6D4
  W8(c->r[29]+0x00000005u,c->r[0]); // 801DA6D8
  goto L_801DA728; // 801DA6DC
L_801DA6E0:;
  c->r[0]=0u+0x00000045u; // 801DA6E0
  W8(c->r[29]+0x00000005u,c->r[0]); // 801DA6E4
  goto L_801DA728; // 801DA6E8
L_801DA6EC:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 801DA6EC
  cmps(c,0,(int32_t)c->r[0],0); // 801DA6F0
  if (crb(c,2)) { goto L_801DA708; } // 801DA6F4
  c->r[0]=c->r[4]+0x00000001u; // 801DA6F8
  c->r[0]=c->r[3]-c->r[0]; // 801DA6FC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DA700
  goto L_801DA88C; // 801DA704
L_801DA708:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DA708
  c->r[3]=c->r[4]+0x00000001u; // 801DA70C
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 801DA710
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DA714
  if (!crb(c,0)) { goto L_801DA88C; } // 801DA718
  c->r[0]=0u+0x00000000u; // 801DA71C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DA720
  goto L_801DA88C; // 801DA724
L_801DA728:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801DA728
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DA72C
  c->r[4]=c->r[3]+0x00000001u; // 801DA730
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DA734
  if (!crb(c,1)) { goto L_801DA744; } // 801DA738
  c->r[3]=c->r[1]+0x0000000Cu; // 801DA73C
  c->lr=0x801DA744u; f_801DA20C(c); // 801DA740
L_801DA744:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DA744
  c->r[8]=0u+0x0000002Bu; // 801DA748
  cmps(c,0,(int32_t)c->r[6],0); // 801DA74C
  if (!crb(c,0)) { goto L_801DA75C; } // 801DA750
  c->r[6]=0u-c->r[6]; // 801DA754
  c->r[8]=0u+0x0000002Du; // 801DA758
L_801DA75C:;
  c->r[3]=0u+0x66660000u; // 801DA75C
  c->r[7]=0u+0x00000000u; // 801DA760
  c->r[5]=c->r[3]+0x00006667u; // 801DA764
  goto L_801DA7A0; // 801DA768
L_801DA76C:;
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 801DA76C
  c->r[7]=c->r[7]+0x00000001u; // 801DA770
  c->r[3]=sraw(c,c->r[0],2); // 801DA774
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801DA778
  c->r[0]=sraw(c,c->r[0],2); // 801DA77C
  c->r[3]=c->r[3]+c->r[4]; // 801DA780
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 801DA784
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801DA788
  c->r[4]=c->r[6]-c->r[4]; // 801DA78C
  c->r[6]=c->r[0]+c->r[3]; // 801DA790
  c->r[0]=c->r[4]+0x00000030u; // 801DA794
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 801DA798
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801DA79C
L_801DA7A0:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DA7A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA76C; } // 801DA7A4
  cmps(c,0,(int32_t)c->r[7],2); // 801DA7A8
  if (crb(c,0)) { IRQCHK(c); goto L_801DA76C; } // 801DA7AC
  W8(c->r[31]+0xFFFFFFFFu,c->r[8]); // 801DA7B0
  c->r[0]=R8(c->r[29]+0x00000005u); // 801DA7B4
  {uint32_t ea=c->r[31]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DA7B8
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801DA7BC
  c->r[0]=c->r[28]-c->r[31]; // 801DA7C0
  c->r[0]=c->r[3]+c->r[0]; // 801DA7C4
  cmps(c,0,(int32_t)c->r[0],509); // 801DA7C8
  if (!crb(c,1)) { goto L_801DA7D8; } // 801DA7CC
  c->r[3]=0u+0x00000000u; // 801DA7D0
  goto L_801DAAAC; // 801DA7D4
L_801DA7D8:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 801DA7D8
  c->r[0]=c->r[3]+0x00000001u; // 801DA7DC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DA7E0
  if (!crb(c,0)) { goto L_801DA804; } // 801DA7E4
  c->r[3]=c->r[3]+0x00000002u; // 801DA7E8
  c->r[0]=0u+0x00000030u; // 801DA7EC
  c->r[3]=c->r[3]-c->r[4]; // 801DA7F0
  goto L_801DA7FC; // 801DA7F4
L_801DA7F8:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DA7F8
L_801DA7FC:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801DA7FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA7F8; } // 801DA800
L_801DA804:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 801DA804
  c->r[4]=c->r[1]+0x00000011u; // 801DA808
  c->r[4]=c->r[4]+c->r[3]; // 801DA80C
  goto L_801DA81C; // 801DA810
L_801DA814:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 801DA814
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DA818
L_801DA81C:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801DA81C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DA814; } // 801DA820
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DA824
  cmps(c,0,(int32_t)c->r[0],0); // 801DA828
  if (!crb(c,2)) { goto L_801DA83C; } // 801DA82C
  c->r[0]=R8(c->r[29]+0x00000003u); // 801DA830
  cmps(c,0,(int32_t)c->r[0],0); // 801DA834
  if (crb(c,2)) { goto L_801DA840; } // 801DA838
L_801DA83C:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 801DA83C
L_801DA840:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 801DA840
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DA844
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DA848
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DA84C
  if (crb(c,2)) { goto L_801DA860; } // 801DA850
  c->r[0]=0u+0x0000002Du; // 801DA854
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DA858
  goto L_801DAAA8; // 801DA85C
L_801DA860:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801DA860
  cmpu(c,0,c->r[0],0x00000001u); // 801DA864
  if (!crb(c,2)) { goto L_801DA878; } // 801DA868
  c->r[0]=0u+0x0000002Bu; // 801DA86C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DA870
  goto L_801DAAA8; // 801DA874
L_801DA878:;
  cmpu(c,0,c->r[0],0x00000002u); // 801DA878
  if (!crb(c,2)) { goto L_801DAAA8; } // 801DA87C
  c->r[0]=0u+0x00000020u; // 801DA880
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DA884
  goto L_801DAAA8; // 801DA888
L_801DA88C:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 801DA88C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DA890
  c->r[3]=c->r[4]-c->r[5]; // 801DA894
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 801DA898
  if (!crb(c,0)) { goto L_801DA8A4; } // 801DA89C
  c->r[8]=0u+0x00000000u; // 801DA8A0
L_801DA8A4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DA8A4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DA8A8
  if (!crb(c,1)) { goto L_801DA8D8; } // 801DA8AC
  c->r[0]=c->r[8]-c->r[0]; // 801DA8B0
  c->r[3]=c->r[1]+0x0000000Cu; // 801DA8B4
  c->r[4]=c->r[4]-c->r[0]; // 801DA8B8
  c->lr=0x801DA8C0u; f_801DA20C(c); // 801DA8BC
  c->r[4]=R8(c->r[1]+0x00000010u); // 801DA8C0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DA8C4
  c->r[3]=c->r[4]-c->r[5]; // 801DA8C8
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 801DA8CC
  if (!crb(c,0)) { goto L_801DA8D8; } // 801DA8D0
  c->r[8]=0u+0x00000000u; // 801DA8D4
L_801DA8D8:;
  c->r[7]=addc(c,c->r[5],0x00000001u,0); cr0(c,c->r[7]); // 801DA8D8
  if (!crb(c,0)) { goto L_801DA8E4; } // 801DA8DC
  c->r[7]=0u+0x00000000u; // 801DA8E0
L_801DA8E4:;
  c->r[0]=c->r[7]+c->r[8]; // 801DA8E4
  cmps(c,0,(int32_t)c->r[0],509); // 801DA8E8
  if (!crb(c,1)) { goto L_801DA8F8; } // 801DA8EC
  c->r[3]=0u+0x00000000u; // 801DA8F0
  goto L_801DAAAC; // 801DA8F4
L_801DA8F8:;
  c->r[6]=c->r[1]+0x00000011u; // 801DA8F8
  c->r[5]=0u+0x00000000u; // 801DA8FC
  c->r[6]=c->r[6]+c->r[4]; // 801DA900
  c->r[3]=0u+0x00000030u; // 801DA904
  goto L_801DA914; // 801DA908
L_801DA90C:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 801DA90C
  c->r[5]=c->r[5]+0x00000001u; // 801DA910
L_801DA914:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DA914
  c->r[0]=c->r[0]-c->r[8]; // 801DA918
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801DA91C
  if (crb(c,0)) { IRQCHK(c); goto L_801DA90C; } // 801DA920
  c->r[3]=0u+0x00000000u; // 801DA924
  goto L_801DA938; // 801DA928
L_801DA92C:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 801DA92C
  c->r[3]=c->r[3]+0x00000001u; // 801DA930
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DA934
L_801DA938:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 801DA938
  if (!crb(c,0)) { goto L_801DA94C; } // 801DA93C
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DA940
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DA944
  if (crb(c,0)) { IRQCHK(c); goto L_801DA92C; } // 801DA948
L_801DA94C:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 801DA94C
  c->r[3]=c->r[8]-c->r[3]; // 801DA950
  c->r[4]=0u+0x00000030u; // 801DA954
  if (!crb(c,0)) { goto L_801DA9A0; } // 801DA958
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801DA95C
  c->ctr=c->r[0]; // 801DA960
  if (crb(c,2)) { goto L_801DA994; } // 801DA964
L_801DA968:;
  W8(c->r[31]+0xFFFFFFFFu,c->r[4]); // 801DA968
  W8(c->r[31]+0xFFFFFFFEu,c->r[4]); // 801DA96C
  W8(c->r[31]+0xFFFFFFFDu,c->r[4]); // 801DA970
  W8(c->r[31]+0xFFFFFFFCu,c->r[4]); // 801DA974
  W8(c->r[31]+0xFFFFFFFBu,c->r[4]); // 801DA978
  W8(c->r[31]+0xFFFFFFFAu,c->r[4]); // 801DA97C
  W8(c->r[31]+0xFFFFFFF9u,c->r[4]); // 801DA980
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[4]); c->r[31]=ea;} // 801DA984
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA968; } // 801DA988
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801DA98C
  if (crb(c,2)) { goto L_801DA9A0; } // 801DA990
L_801DA994:;
  c->ctr=c->r[3]; // 801DA994
L_801DA998:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[31]=ea;} // 801DA998
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DA998; } // 801DA99C
L_801DA9A0:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DA9A0
  cmps(c,0,(int32_t)c->r[0],0); // 801DA9A4
  if (!crb(c,2)) { goto L_801DA9B8; } // 801DA9A8
  c->r[0]=R8(c->r[29]+0x00000003u); // 801DA9AC
  cmps(c,0,(int32_t)c->r[0],0); // 801DA9B0
  if (crb(c,2)) { goto L_801DA9BC; } // 801DA9B4
L_801DA9B8:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 801DA9B8
L_801DA9BC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DA9BC
  if (crb(c,2)) { goto L_801DAA60; } // 801DA9C0
  c->r[4]=0u+0x00000000u; // 801DA9C4
  c->r[3]=0u+0x00000030u; // 801DA9C8
  goto L_801DA9D8; // 801DA9CC
L_801DA9D0:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 801DA9D0
  c->r[4]=c->r[4]+0x00000001u; // 801DA9D4
L_801DA9D8:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DA9D8
  c->r[0]=c->r[7]-c->r[0]; // 801DA9DC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DA9E0
  if (crb(c,0)) { IRQCHK(c); goto L_801DA9D0; } // 801DA9E4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 801DA9E8
  c->r[3]=c->r[7]-c->r[4]; // 801DA9EC
  if (!crb(c,0)) { goto L_801DAA68; } // 801DA9F0
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801DA9F4
  c->ctr=c->r[0]; // 801DA9F8
  if (crb(c,2)) { goto L_801DAA4C; } // 801DA9FC
L_801DAA00:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 801DAA00
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 801DAA04
  c->r[0]=R8(c->r[6]+0xFFFFFFFEu); // 801DAA08
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 801DAA0C
  c->r[0]=R8(c->r[6]+0xFFFFFFFDu); // 801DAA10
  W8(c->r[31]+0xFFFFFFFDu,c->r[0]); // 801DAA14
  c->r[0]=R8(c->r[6]+0xFFFFFFFCu); // 801DAA18
  W8(c->r[31]+0xFFFFFFFCu,c->r[0]); // 801DAA1C
  c->r[0]=R8(c->r[6]+0xFFFFFFFBu); // 801DAA20
  W8(c->r[31]+0xFFFFFFFBu,c->r[0]); // 801DAA24
  c->r[0]=R8(c->r[6]+0xFFFFFFFAu); // 801DAA28
  W8(c->r[31]+0xFFFFFFFAu,c->r[0]); // 801DAA2C
  c->r[0]=R8(c->r[6]+0xFFFFFFF9u); // 801DAA30
  W8(c->r[31]+0xFFFFFFF9u,c->r[0]); // 801DAA34
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->r[0]=R8(ea); c->r[6]=ea;} // 801DAA38
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[0]); c->r[31]=ea;} // 801DAA3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAA00; } // 801DAA40
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801DAA44
  if (crb(c,2)) { goto L_801DAA68; } // 801DAA48
L_801DAA4C:;
  c->ctr=c->r[3]; // 801DAA4C
L_801DAA50:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 801DAA50
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DAA54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAA50; } // 801DAA58
  goto L_801DAA68; // 801DAA5C
L_801DAA60:;
  c->r[0]=0u+0x00000030u; // 801DAA60
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DAA64
L_801DAA68:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DAA68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DAA6C
  if (crb(c,2)) { goto L_801DAA80; } // 801DAA70
  c->r[0]=0u+0x0000002Du; // 801DAA74
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DAA78
  goto L_801DAAA8; // 801DAA7C
L_801DAA80:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801DAA80
  cmpu(c,0,c->r[0],0x00000001u); // 801DAA84
  if (!crb(c,2)) { goto L_801DAA98; } // 801DAA88
  c->r[0]=0u+0x0000002Bu; // 801DAA8C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DAA90
  goto L_801DAAA8; // 801DAA94
L_801DAA98:;
  cmpu(c,0,c->r[0],0x00000002u); // 801DAA98
  if (!crb(c,2)) { goto L_801DAAA8; } // 801DAA9C
  c->r[0]=0u+0x00000020u; // 801DAAA0
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DAAA4
L_801DAAA8:;
  c->r[3]=c->r[31]|c->r[31]; // 801DAAA8
L_801DAAAC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 801DAAAC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[31]=RF64(ea);} // 801DAAB0
  c->r[31]=R32(c->r[1]+0x00000044u); // 801DAAB4
  c->r[30]=R32(c->r[1]+0x00000040u); // 801DAAB8
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 801DAABC
  c->r[28]=R32(c->r[1]+0x00000038u); // 801DAAC0
  c->lr=c->r[0]; // 801DAAC4
  c->r[1]=c->r[1]+0x00000050u; // 801DAAC8
  return; // 801DAACC
}

// __pformatter
void f_801DAAD0(Ctx* __restrict c) {
  trace_call(0x801DAAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFD30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAAD0
  c->r[0]=c->lr; // 801DAAD4
  W32(c->r[1]+0x000002D4u,c->r[0]); // 801DAAD8
  {uint32_t ea=c->r[1]+0x0000028Cu; for(int i=15;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801DAADC
  c->r[24]=0u+0x00000020u; // 801DAAE0
  c->r[22]=0u+0x80200000u; // 801DAAE4
  c->r[25]=c->r[3]|c->r[3]; // 801DAAE8
  c->r[26]=c->r[4]|c->r[4]; // 801DAAEC
  c->r[15]=c->r[5]|c->r[5]; // 801DAAF0
  c->r[27]=c->r[6]|c->r[6]; // 801DAAF4
  c->r[28]=c->r[7]|c->r[7]; // 801DAAF8
  c->r[22]=c->r[22]+0xFFFFAFB8u; // 801DAAFC
  c->r[21]=c->r[1]+0x0000027Fu; // 801DAB00
  c->r[17]=0u+0x00000000u; // 801DAB04
  c->r[20]=0u+0x80250000u; // 801DAB08
  c->r[23]=0u+0x00000025u; // 801DAB0C
  W8(c->r[1]+0x00000009u,c->r[24]); // 801DAB10
  goto L_801DB358; // 801DAB14
L_801DAB18:;
  c->r[3]=c->r[15]|c->r[15]; // 801DAB18
  c->r[4]=0u+0x00000025u; // 801DAB1C
  c->lr=0x801DAB24u; f_801DBC60(c); // 801DAB20
  cmps(c,0,(int32_t)c->r[3],0); // 801DAB24
  c->r[16]=c->r[3]|c->r[3]; // 801DAB28
  if (!crb(c,2)) { goto L_801DAB6C; } // 801DAB2C
  c->r[3]=c->r[15]|c->r[15]; // 801DAB30
  c->lr=0x801DAB38u; f_801D4D44(c); // 801DAB34
  cmps(c,0,(int32_t)c->r[3],0); // 801DAB38
  c->r[5]=c->r[3]|c->r[3]; // 801DAB3C
  c->r[17]=c->r[17]+c->r[3]; // 801DAB40
  if (crb(c,2)) { goto L_801DB364; } // 801DAB44
  c->r[12]=c->r[25]|c->r[25]; // 801DAB48
  c->r[3]=c->r[26]|c->r[26]; // 801DAB4C
  c->r[4]=c->r[15]|c->r[15]; // 801DAB50
  c->ctr=c->r[12]; // 801DAB54
  if (true) { c->lr=0x801DAB5Cu; dispatch(c,c->ctr); } // 801DAB58
  cmps(c,0,(int32_t)c->r[3],0); // 801DAB5C
  if (!crb(c,2)) { goto L_801DB364; } // 801DAB60
  c->r[3]=0u+0xFFFFFFFFu; // 801DAB64
  goto L_801DB368; // 801DAB68
L_801DAB6C:;
  c->r[5]=c->r[3]-c->r[15]; cr0(c,c->r[5]); // 801DAB6C
  c->r[17]=c->r[17]+c->r[5]; // 801DAB70
  if (crb(c,2)) { goto L_801DAB9C; } // 801DAB74
  c->r[12]=c->r[25]|c->r[25]; // 801DAB78
  c->r[3]=c->r[26]|c->r[26]; // 801DAB7C
  c->r[4]=c->r[15]|c->r[15]; // 801DAB80
  c->ctr=c->r[12]; // 801DAB84
  if (true) { c->lr=0x801DAB8Cu; dispatch(c,c->ctr); } // 801DAB88
  cmps(c,0,(int32_t)c->r[3],0); // 801DAB8C
  if (!crb(c,2)) { goto L_801DAB9C; } // 801DAB90
  c->r[3]=0u+0xFFFFFFFFu; // 801DAB94
  goto L_801DB368; // 801DAB98
L_801DAB9C:;
  c->r[3]=c->r[16]|c->r[16]; // 801DAB9C
  c->r[4]=c->r[27]|c->r[27]; // 801DABA0
  c->r[5]=c->r[1]+0x00000070u; // 801DABA4
  c->lr=0x801DABACu; f_801D9398(c); // 801DABA8
  c->r[4]=R8(c->r[1]+0x00000075u); // 801DABAC
  c->r[15]=c->r[3]|c->r[3]; // 801DABB0
  c->r[0]=c->r[4]+0xFFFFFFDBu; // 801DABB4
  cmpu(c,0,c->r[0],0x00000053u); // 801DABB8
  if (crb(c,1)) { goto L_801DB178; } // 801DABBC
  c->r[3]=c->r[20]+0xFFFF9E20u; // 801DABC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DABC4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801DABC8
  c->ctr=c->r[3]; // 801DABCC
  if (true) { switch (c->ctr) { case 0x801DABD4u: goto L_801DABD4; case 0x801DAD30u: goto L_801DAD30; case 0x801DAE8Cu: goto L_801DAE8C; case 0x801DAEFCu: goto L_801DAEFC; case 0x801DAF6Cu: goto L_801DAF6C; case 0x801DB090u: goto L_801DB090; case 0x801DB148u: goto L_801DB148; case 0x801DB168u: goto L_801DB168; case 0x801DB178u: goto L_801DB178; default: break; } dispatch(c,c->ctr); return; } // 801DABD0
L_801DABD4:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DABD4
  cmpu(c,0,c->r[0],0x00000003u); // 801DABD8
  if (!crb(c,2)) { goto L_801DABF4; } // 801DABDC
  c->r[3]=c->r[27]|c->r[27]; // 801DABE0
  c->r[4]=0u+0x00000001u; // 801DABE4
  c->lr=0x801DABECu; f_801D4D60(c); // 801DABE8
  c->r[31]=R32(c->r[3]+0x00000000u); // 801DABEC
  goto L_801DAC7C; // 801DABF0
L_801DABF4:;
  cmpu(c,0,c->r[0],0x00000004u); // 801DABF4
  if (!crb(c,2)) { goto L_801DAC14; } // 801DABF8
  c->r[3]=c->r[27]|c->r[27]; // 801DABFC
  c->r[4]=0u+0x00000002u; // 801DAC00
  c->lr=0x801DAC08u; f_801D4D60(c); // 801DAC04
  c->r[30]=R32(c->r[3]+0x00000000u); // 801DAC08
  c->r[29]=R32(c->r[3]+0x00000004u); // 801DAC0C
  goto L_801DAC7C; // 801DAC10
L_801DAC14:;
  cmpu(c,0,c->r[0],0x00000006u); // 801DAC14
  if (!crb(c,2)) { goto L_801DAC34; } // 801DAC18
  c->r[3]=c->r[27]|c->r[27]; // 801DAC1C
  c->r[4]=0u+0x00000002u; // 801DAC20
  c->lr=0x801DAC28u; f_801D4D60(c); // 801DAC24
  c->r[30]=R32(c->r[3]+0x00000000u); // 801DAC28
  c->r[29]=R32(c->r[3]+0x00000004u); // 801DAC2C
  goto L_801DAC7C; // 801DAC30
L_801DAC34:;
  cmpu(c,0,c->r[0],0x00000007u); // 801DAC34
  if (!crb(c,2)) { goto L_801DAC50; } // 801DAC38
  c->r[3]=c->r[27]|c->r[27]; // 801DAC3C
  c->r[4]=0u+0x00000001u; // 801DAC40
  c->lr=0x801DAC48u; f_801D4D60(c); // 801DAC44
  c->r[31]=R32(c->r[3]+0x00000000u); // 801DAC48
  goto L_801DAC7C; // 801DAC4C
L_801DAC50:;
  cmpu(c,0,c->r[0],0x00000008u); // 801DAC50
  if (!crb(c,2)) { goto L_801DAC6C; } // 801DAC54
  c->r[3]=c->r[27]|c->r[27]; // 801DAC58
  c->r[4]=0u+0x00000001u; // 801DAC5C
  c->lr=0x801DAC64u; f_801D4D60(c); // 801DAC60
  c->r[31]=R32(c->r[3]+0x00000000u); // 801DAC64
  goto L_801DAC7C; // 801DAC68
L_801DAC6C:;
  c->r[3]=c->r[27]|c->r[27]; // 801DAC6C
  c->r[4]=0u+0x00000001u; // 801DAC70
  c->lr=0x801DAC78u; f_801D4D60(c); // 801DAC74
  c->r[31]=R32(c->r[3]+0x00000000u); // 801DAC78
L_801DAC7C:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DAC7C
  cmpu(c,0,c->r[0],0x00000002u); // 801DAC80
  if (!crb(c,2)) { goto L_801DAC8C; } // 801DAC84
  c->r[31]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801DAC88
L_801DAC8C:;
  cmpu(c,0,c->r[0],0x00000001u); // 801DAC8C
  if (!crb(c,2)) { goto L_801DAC98; } // 801DAC90
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 801DAC94
L_801DAC98:;
  cmpu(c,0,c->r[0],0x00000004u); // 801DAC98
  if (crb(c,2)) { goto L_801DACA8; } // 801DAC9C
  cmpu(c,0,c->r[0],0x00000006u); // 801DACA0
  if (!crb(c,2)) { goto L_801DACEC; } // 801DACA4
L_801DACA8:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 801DACA8
  c->r[4]=c->r[29]|c->r[29]; // 801DACAC
  c->r[8]=R32(c->r[1]+0x00000074u); // 801DACB0
  c->r[3]=c->r[30]|c->r[30]; // 801DACB4
  c->r[7]=R32(c->r[1]+0x00000078u); // 801DACB8
  c->r[5]=c->r[1]+0x00000280u; // 801DACBC
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DACC0
  c->r[6]=c->r[1]+0x00000060u; // 801DACC4
  W32(c->r[1]+0x00000060u,c->r[9]); // 801DACC8
  W32(c->r[1]+0x00000064u,c->r[8]); // 801DACCC
  W32(c->r[1]+0x00000068u,c->r[7]); // 801DACD0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801DACD4
  c->lr=0x801DACDCu; f_801D9B94(c); // 801DACD8
  cmps(c,0,(int32_t)c->r[3],0); // 801DACDC
  c->r[18]=c->r[3]|c->r[3]; // 801DACE0
  if (crb(c,2)) { goto L_801DB178; } // 801DACE4
  goto L_801DAD28; // 801DACE8
L_801DACEC:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 801DACEC
  c->r[3]=c->r[31]|c->r[31]; // 801DACF0
  c->r[7]=R32(c->r[1]+0x00000074u); // 801DACF4
  c->r[4]=c->r[1]+0x00000280u; // 801DACF8
  c->r[6]=R32(c->r[1]+0x00000078u); // 801DACFC
  c->r[5]=c->r[1]+0x00000050u; // 801DAD00
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DAD04
  W32(c->r[1]+0x00000050u,c->r[8]); // 801DAD08
  W32(c->r[1]+0x00000054u,c->r[7]); // 801DAD0C
  W32(c->r[1]+0x00000058u,c->r[6]); // 801DAD10
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801DAD14
  c->lr=0x801DAD1Cu; f_801D9954(c); // 801DAD18
  cmps(c,0,(int32_t)c->r[3],0); // 801DAD1C
  c->r[18]=c->r[3]|c->r[3]; // 801DAD20
  if (crb(c,2)) { goto L_801DB178; } // 801DAD24
L_801DAD28:;
  c->r[19]=c->r[21]-c->r[18]; // 801DAD28
  goto L_801DB1BC; // 801DAD2C
L_801DAD30:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DAD30
  cmpu(c,0,c->r[0],0x00000003u); // 801DAD34
  if (!crb(c,2)) { goto L_801DAD50; } // 801DAD38
  c->r[3]=c->r[27]|c->r[27]; // 801DAD3C
  c->r[4]=0u+0x00000001u; // 801DAD40
  c->lr=0x801DAD48u; f_801D4D60(c); // 801DAD44
  c->r[31]=R32(c->r[3]+0x00000000u); // 801DAD48
  goto L_801DADD8; // 801DAD4C
L_801DAD50:;
  cmpu(c,0,c->r[0],0x00000004u); // 801DAD50
  if (!crb(c,2)) { goto L_801DAD70; } // 801DAD54
  c->r[3]=c->r[27]|c->r[27]; // 801DAD58
  c->r[4]=0u+0x00000002u; // 801DAD5C
  c->lr=0x801DAD64u; f_801D4D60(c); // 801DAD60
  c->r[30]=R32(c->r[3]+0x00000000u); // 801DAD64
  c->r[29]=R32(c->r[3]+0x00000004u); // 801DAD68
  goto L_801DADD8; // 801DAD6C
L_801DAD70:;
  cmpu(c,0,c->r[0],0x00000006u); // 801DAD70
  if (!crb(c,2)) { goto L_801DAD90; } // 801DAD74
  c->r[3]=c->r[27]|c->r[27]; // 801DAD78
  c->r[4]=0u+0x00000002u; // 801DAD7C
  c->lr=0x801DAD84u; f_801D4D60(c); // 801DAD80
  c->r[30]=R32(c->r[3]+0x00000000u); // 801DAD84
  c->r[29]=R32(c->r[3]+0x00000004u); // 801DAD88
  goto L_801DADD8; // 801DAD8C
L_801DAD90:;
  cmpu(c,0,c->r[0],0x00000007u); // 801DAD90
  if (!crb(c,2)) { goto L_801DADAC; } // 801DAD94
  c->r[3]=c->r[27]|c->r[27]; // 801DAD98
  c->r[4]=0u+0x00000001u; // 801DAD9C
  c->lr=0x801DADA4u; f_801D4D60(c); // 801DADA0
  c->r[31]=R32(c->r[3]+0x00000000u); // 801DADA4
  goto L_801DADD8; // 801DADA8
L_801DADAC:;
  cmpu(c,0,c->r[0],0x00000008u); // 801DADAC
  if (!crb(c,2)) { goto L_801DADC8; } // 801DADB0
  c->r[3]=c->r[27]|c->r[27]; // 801DADB4
  c->r[4]=0u+0x00000001u; // 801DADB8
  c->lr=0x801DADC0u; f_801D4D60(c); // 801DADBC
  c->r[31]=R32(c->r[3]+0x00000000u); // 801DADC0
  goto L_801DADD8; // 801DADC4
L_801DADC8:;
  c->r[3]=c->r[27]|c->r[27]; // 801DADC8
  c->r[4]=0u+0x00000001u; // 801DADCC
  c->lr=0x801DADD4u; f_801D4D60(c); // 801DADD0
  c->r[31]=R32(c->r[3]+0x00000000u); // 801DADD4
L_801DADD8:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DADD8
  cmpu(c,0,c->r[0],0x00000002u); // 801DADDC
  if (!crb(c,2)) { goto L_801DADE8; } // 801DADE0
  c->r[31]=rotl(c->r[31],0)&0x0000FFFFu; // 801DADE4
L_801DADE8:;
  cmpu(c,0,c->r[0],0x00000001u); // 801DADE8
  if (!crb(c,2)) { goto L_801DADF4; } // 801DADEC
  c->r[31]=rotl(c->r[31],0)&0x000000FFu; // 801DADF0
L_801DADF4:;
  cmpu(c,0,c->r[0],0x00000004u); // 801DADF4
  if (crb(c,2)) { goto L_801DAE04; } // 801DADF8
  cmpu(c,0,c->r[0],0x00000006u); // 801DADFC
  if (!crb(c,2)) { goto L_801DAE48; } // 801DAE00
L_801DAE04:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 801DAE04
  c->r[4]=c->r[29]|c->r[29]; // 801DAE08
  c->r[8]=R32(c->r[1]+0x00000074u); // 801DAE0C
  c->r[3]=c->r[30]|c->r[30]; // 801DAE10
  c->r[7]=R32(c->r[1]+0x00000078u); // 801DAE14
  c->r[5]=c->r[1]+0x00000280u; // 801DAE18
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DAE1C
  c->r[6]=c->r[1]+0x00000040u; // 801DAE20
  W32(c->r[1]+0x00000040u,c->r[9]); // 801DAE24
  W32(c->r[1]+0x00000044u,c->r[8]); // 801DAE28
  W32(c->r[1]+0x00000048u,c->r[7]); // 801DAE2C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801DAE30
  c->lr=0x801DAE38u; f_801D9B94(c); // 801DAE34
  cmps(c,0,(int32_t)c->r[3],0); // 801DAE38
  c->r[18]=c->r[3]|c->r[3]; // 801DAE3C
  if (crb(c,2)) { goto L_801DB178; } // 801DAE40
  goto L_801DAE84; // 801DAE44
L_801DAE48:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 801DAE48
  c->r[3]=c->r[31]|c->r[31]; // 801DAE4C
  c->r[7]=R32(c->r[1]+0x00000074u); // 801DAE50
  c->r[4]=c->r[1]+0x00000280u; // 801DAE54
  c->r[6]=R32(c->r[1]+0x00000078u); // 801DAE58
  c->r[5]=c->r[1]+0x00000030u; // 801DAE5C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DAE60
  W32(c->r[1]+0x00000030u,c->r[8]); // 801DAE64
  W32(c->r[1]+0x00000034u,c->r[7]); // 801DAE68
  W32(c->r[1]+0x00000038u,c->r[6]); // 801DAE6C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801DAE70
  c->lr=0x801DAE78u; f_801D9954(c); // 801DAE74
  cmps(c,0,(int32_t)c->r[3],0); // 801DAE78
  c->r[18]=c->r[3]|c->r[3]; // 801DAE7C
  if (crb(c,2)) { goto L_801DB178; } // 801DAE80
L_801DAE84:;
  c->r[19]=c->r[21]-c->r[18]; // 801DAE84
  goto L_801DB1BC; // 801DAE88
L_801DAE8C:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DAE8C
  cmpu(c,0,c->r[0],0x00000009u); // 801DAE90
  if (!crb(c,2)) { goto L_801DAEAC; } // 801DAE94
  c->r[3]=c->r[27]|c->r[27]; // 801DAE98
  c->r[4]=0u+0x00000003u; // 801DAE9C
  c->lr=0x801DAEA4u; f_801D4D60(c); // 801DAEA0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DAEA4
  goto L_801DAEBC; // 801DAEA8
L_801DAEAC:;
  c->r[3]=c->r[27]|c->r[27]; // 801DAEAC
  c->r[4]=0u+0x00000003u; // 801DAEB0
  c->lr=0x801DAEB8u; f_801D4D60(c); // 801DAEB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DAEB8
L_801DAEBC:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 801DAEBC
  c->r[3]=c->r[1]+0x00000280u; // 801DAEC0
  c->r[6]=R32(c->r[1]+0x00000074u); // 801DAEC4
  c->r[4]=c->r[1]+0x00000020u; // 801DAEC8
  c->r[5]=R32(c->r[1]+0x00000078u); // 801DAECC
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DAED0
  W32(c->r[1]+0x00000020u,c->r[7]); // 801DAED4
  W32(c->r[1]+0x00000024u,c->r[6]); // 801DAED8
  W32(c->r[1]+0x00000028u,c->r[5]); // 801DAEDC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801DAEE0
  c->lr=0x801DAEE8u; f_801DA334(c); // 801DAEE4
  cmps(c,0,(int32_t)c->r[3],0); // 801DAEE8
  c->r[18]=c->r[3]|c->r[3]; // 801DAEEC
  if (crb(c,2)) { goto L_801DB178; } // 801DAEF0
  c->r[19]=c->r[21]-c->r[3]; // 801DAEF4
  goto L_801DB1BC; // 801DAEF8
L_801DAEFC:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DAEFC
  cmpu(c,0,c->r[0],0x00000009u); // 801DAF00
  if (!crb(c,2)) { goto L_801DAF1C; } // 801DAF04
  c->r[3]=c->r[27]|c->r[27]; // 801DAF08
  c->r[4]=0u+0x00000003u; // 801DAF0C
  c->lr=0x801DAF14u; f_801D4D60(c); // 801DAF10
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DAF14
  goto L_801DAF2C; // 801DAF18
L_801DAF1C:;
  c->r[3]=c->r[27]|c->r[27]; // 801DAF1C
  c->r[4]=0u+0x00000003u; // 801DAF20
  c->lr=0x801DAF28u; f_801D4D60(c); // 801DAF24
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DAF28
L_801DAF2C:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 801DAF2C
  c->r[3]=c->r[1]+0x00000280u; // 801DAF30
  c->r[6]=R32(c->r[1]+0x00000074u); // 801DAF34
  c->r[4]=c->r[1]+0x00000010u; // 801DAF38
  c->r[5]=R32(c->r[1]+0x00000078u); // 801DAF3C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DAF40
  W32(c->r[1]+0x00000010u,c->r[7]); // 801DAF44
  W32(c->r[1]+0x00000014u,c->r[6]); // 801DAF48
  W32(c->r[1]+0x00000018u,c->r[5]); // 801DAF4C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DAF50
  c->lr=0x801DAF58u; f_801D9E44(c); // 801DAF54
  cmps(c,0,(int32_t)c->r[3],0); // 801DAF58
  c->r[18]=c->r[3]|c->r[3]; // 801DAF5C
  if (crb(c,2)) { goto L_801DB178; } // 801DAF60
  c->r[19]=c->r[21]-c->r[3]; // 801DAF64
  goto L_801DB1BC; // 801DAF68
L_801DAF6C:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DAF6C
  cmpu(c,0,c->r[0],0x00000005u); // 801DAF70
  if (!crb(c,2)) { goto L_801DAFD8; } // 801DAF74
  c->r[3]=c->r[27]|c->r[27]; // 801DAF78
  c->r[4]=0u+0x00000001u; // 801DAF7C
  c->lr=0x801DAF84u; f_801D4D60(c); // 801DAF80
  cmps(c,0,(int32_t)c->r[28],0); // 801DAF84
  c->r[4]=R32(c->r[3]+0x00000000u); // 801DAF88
  if (crb(c,2)) { goto L_801DAFB0; } // 801DAF8C
  cmps(c,0,(int32_t)c->r[4],0); // 801DAF90
  if (!crb(c,2)) { goto L_801DAFB0; } // 801DAF94
  c->r[3]=0u+0x00000000u; // 801DAF98
  c->r[4]=0u+0x00000000u; // 801DAF9C
  c->r[5]=0u+0xFFFFFFFFu; // 801DAFA0
  c->lr=0x801DAFA8u; f_801DE684(c); // 801DAFA4
  c->r[3]=0u+0xFFFFFFFFu; // 801DAFA8
  goto L_801DB368; // 801DAFAC
L_801DAFB0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DAFB0
  if (!crb(c,2)) { goto L_801DAFBC; } // 801DAFB4
  c->r[4]=c->r[13]+0xFFFFAD28u; // 801DAFB8
L_801DAFBC:;
  c->r[3]=c->r[1]+0x00000080u; // 801DAFBC
  c->r[5]=0u+0x00000200u; // 801DAFC0
  c->lr=0x801DAFC8u; f_801D8D9C(c); // 801DAFC4
  cmps(c,0,(int32_t)c->r[3],0); // 801DAFC8
  if (crb(c,0)) { goto L_801DB178; } // 801DAFCC
  c->r[18]=c->r[1]+0x00000080u; // 801DAFD0
  goto L_801DAFE8; // 801DAFD4
L_801DAFD8:;
  c->r[3]=c->r[27]|c->r[27]; // 801DAFD8
  c->r[4]=0u+0x00000001u; // 801DAFDC
  c->lr=0x801DAFE4u; f_801D4D60(c); // 801DAFE0
  c->r[18]=R32(c->r[3]+0x00000000u); // 801DAFE4
L_801DAFE8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DAFE8
  if (crb(c,2)) { goto L_801DB010; } // 801DAFEC
  cmps(c,0,(int32_t)c->r[18],0); // 801DAFF0
  if (!crb(c,2)) { goto L_801DB010; } // 801DAFF4
  c->r[3]=0u+0x00000000u; // 801DAFF8
  c->r[4]=0u+0x00000000u; // 801DAFFC
  c->r[5]=0u+0xFFFFFFFFu; // 801DB000
  c->lr=0x801DB008u; f_801DE684(c); // 801DB004
  c->r[3]=0u+0xFFFFFFFFu; // 801DB008
  goto L_801DB368; // 801DB00C
L_801DB010:;
  cmps(c,0,(int32_t)c->r[18],0); // 801DB010
  if (!crb(c,2)) { goto L_801DB01C; } // 801DB014
  c->r[18]=c->r[22]+0x00000024u; // 801DB018
L_801DB01C:;
  c->r[0]=R8(c->r[1]+0x00000073u); // 801DB01C
  cmps(c,0,(int32_t)c->r[0],0); // 801DB020
  if (crb(c,2)) { goto L_801DB050; } // 801DB024
  c->r[0]=R8(c->r[1]+0x00000072u); // 801DB028
  c->r[19]=R8(c->r[18]+0x00000000u); // 801DB02C
  c->r[18]=c->r[18]+0x00000001u; // 801DB030
  cmps(c,0,(int32_t)c->r[0],0); // 801DB034
  if (crb(c,2)) { goto L_801DB1BC; } // 801DB038
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DB03C
  cmps(c,0,(int32_t)c->r[19],(int32_t)c->r[0]); // 801DB040
  if (!crb(c,1)) { goto L_801DB1BC; } // 801DB044
  c->r[19]=c->r[0]|c->r[0]; // 801DB048
  goto L_801DB1BC; // 801DB04C
L_801DB050:;
  c->r[0]=R8(c->r[1]+0x00000072u); // 801DB050
  cmps(c,0,(int32_t)c->r[0],0); // 801DB054
  if (crb(c,2)) { goto L_801DB080; } // 801DB058
  c->r[19]=R32(c->r[1]+0x0000007Cu); // 801DB05C
  c->r[3]=c->r[18]|c->r[18]; // 801DB060
  c->r[4]=0u+0x00000000u; // 801DB064
  c->r[5]=c->r[19]|c->r[19]; // 801DB068
  c->lr=0x801DB070u; f_801D8F20(c); // 801DB06C
  cmps(c,0,(int32_t)c->r[3],0); // 801DB070
  if (crb(c,2)) { goto L_801DB1BC; } // 801DB074
  c->r[19]=c->r[3]-c->r[18]; // 801DB078
  goto L_801DB1BC; // 801DB07C
L_801DB080:;
  c->r[3]=c->r[18]|c->r[18]; // 801DB080
  c->lr=0x801DB088u; f_801D4D44(c); // 801DB084
  c->r[19]=c->r[3]|c->r[3]; // 801DB088
  goto L_801DB1BC; // 801DB08C
L_801DB090:;
  c->r[3]=c->r[27]|c->r[27]; // 801DB090
  c->r[4]=0u+0x00000001u; // 801DB094
  c->lr=0x801DB09Cu; f_801D4D60(c); // 801DB098
  cmps(c,0,(int32_t)c->r[28],0); // 801DB09C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DB0A0
  if (crb(c,2)) { goto L_801DB0C0; } // 801DB0A4
  c->r[3]=0u+0x00000000u; // 801DB0A8
  c->r[4]=0u+0x00000000u; // 801DB0AC
  c->r[5]=0u+0xFFFFFFFFu; // 801DB0B0
  c->lr=0x801DB0B8u; f_801DE684(c); // 801DB0B4
  c->r[3]=0u+0xFFFFFFFFu; // 801DB0B8
  goto L_801DB368; // 801DB0BC
L_801DB0C0:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DB0C0
  cmps(c,0,(int32_t)c->r[0],0); // 801DB0C4
  if (crb(c,2)) { goto L_801DB100; } // 801DB0C8
  cmps(c,0,(int32_t)c->r[0],2); // 801DB0CC
  if (crb(c,2)) { goto L_801DB108; } // 801DB0D0
  cmps(c,0,(int32_t)c->r[0],3); // 801DB0D4
  if (crb(c,2)) { goto L_801DB110; } // 801DB0D8
  cmps(c,0,(int32_t)c->r[0],6); // 801DB0DC
  if (crb(c,2)) { goto L_801DB118; } // 801DB0E0
  cmps(c,0,(int32_t)c->r[0],7); // 801DB0E4
  if (crb(c,2)) { goto L_801DB128; } // 801DB0E8
  cmps(c,0,(int32_t)c->r[0],8); // 801DB0EC
  if (crb(c,2)) { goto L_801DB130; } // 801DB0F0
  cmps(c,0,(int32_t)c->r[0],4); // 801DB0F4
  if (crb(c,2)) { goto L_801DB138; } // 801DB0F8
  goto L_801DB358; // 801DB0FC
L_801DB100:;
  W32(c->r[3]+0x00000000u,c->r[17]); // 801DB100
  goto L_801DB358; // 801DB104
L_801DB108:;
  W16(c->r[3]+0x00000000u,c->r[17]); // 801DB108
  goto L_801DB358; // 801DB10C
L_801DB110:;
  W32(c->r[3]+0x00000000u,c->r[17]); // 801DB110
  goto L_801DB358; // 801DB114
L_801DB118:;
  W32(c->r[3]+0x00000004u,c->r[17]); // 801DB118
  c->r[0]=sraw(c,c->r[17],31); // 801DB11C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DB120
  goto L_801DB358; // 801DB124
L_801DB128:;
  W32(c->r[3]+0x00000000u,c->r[17]); // 801DB128
  goto L_801DB358; // 801DB12C
L_801DB130:;
  W32(c->r[3]+0x00000000u,c->r[17]); // 801DB130
  goto L_801DB358; // 801DB134
L_801DB138:;
  W32(c->r[3]+0x00000004u,c->r[17]); // 801DB138
  c->r[0]=sraw(c,c->r[17],31); // 801DB13C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DB140
  goto L_801DB358; // 801DB144
L_801DB148:;
  c->r[3]=c->r[27]|c->r[27]; // 801DB148
  c->r[18]=c->r[1]+0x00000080u; // 801DB14C
  c->r[4]=0u+0x00000001u; // 801DB150
  c->lr=0x801DB158u; f_801D4D60(c); // 801DB154
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DB158
  c->r[19]=0u+0x00000001u; // 801DB15C
  W8(c->r[1]+0x00000080u,c->r[0]); // 801DB160
  goto L_801DB1BC; // 801DB164
L_801DB168:;
  W8(c->r[1]+0x00000080u,c->r[23]); // 801DB168
  c->r[18]=c->r[1]+0x00000080u; // 801DB16C
  c->r[19]=0u+0x00000001u; // 801DB170
  goto L_801DB1BC; // 801DB174
L_801DB178:;
  c->r[3]=c->r[16]|c->r[16]; // 801DB178
  c->lr=0x801DB180u; f_801D4D44(c); // 801DB17C
  cmps(c,0,(int32_t)c->r[3],0); // 801DB180
  c->r[5]=c->r[3]|c->r[3]; // 801DB184
  c->r[17]=c->r[17]+c->r[3]; // 801DB188
  if (crb(c,2)) { goto L_801DB1B4; } // 801DB18C
  c->r[12]=c->r[25]|c->r[25]; // 801DB190
  c->r[3]=c->r[26]|c->r[26]; // 801DB194
  c->r[4]=c->r[16]|c->r[16]; // 801DB198
  c->ctr=c->r[12]; // 801DB19C
  if (true) { c->lr=0x801DB1A4u; dispatch(c,c->ctr); } // 801DB1A0
  cmps(c,0,(int32_t)c->r[3],0); // 801DB1A4
  if (!crb(c,2)) { goto L_801DB1B4; } // 801DB1A8
  c->r[3]=0u+0xFFFFFFFFu; // 801DB1AC
  goto L_801DB368; // 801DB1B0
L_801DB1B4:;
  c->r[3]=c->r[17]|c->r[17]; // 801DB1B4
  goto L_801DB368; // 801DB1B8
L_801DB1BC:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 801DB1BC
  c->r[16]=c->r[19]|c->r[19]; // 801DB1C0
  cmps(c,0,(int32_t)c->r[0],0); // 801DB1C4
  if (crb(c,2)) { goto L_801DB2D8; } // 801DB1C8
  cmpu(c,0,c->r[0],0x00000002u); // 801DB1CC
  c->r[3]=0u+0x00000020u; // 801DB1D0
  if (!crb(c,2)) { goto L_801DB1DC; } // 801DB1D4
  c->r[3]=0u+0x00000030u; // 801DB1D8
L_801DB1DC:;
  W8(c->r[1]+0x00000009u,c->r[3]); // 801DB1DC
  c->r[0]=R8(c->r[18]+0x00000000u); // 801DB1E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DB1E4
  cmps(c,0,(int32_t)c->r[0],43); // 801DB1E8
  if (crb(c,2)) { goto L_801DB200; } // 801DB1EC
  cmps(c,0,(int32_t)c->r[0],45); // 801DB1F0
  if (crb(c,2)) { goto L_801DB200; } // 801DB1F4
  cmps(c,0,(int32_t)c->r[0],32); // 801DB1F8
  if (!crb(c,2)) { goto L_801DB23C; } // 801DB1FC
L_801DB200:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801DB200
  cmps(c,0,(int32_t)c->r[0],48); // 801DB204
  if (!crb(c,2)) { goto L_801DB23C; } // 801DB208
  c->r[12]=c->r[25]|c->r[25]; // 801DB20C
  c->r[3]=c->r[26]|c->r[26]; // 801DB210
  c->r[4]=c->r[18]|c->r[18]; // 801DB214
  c->r[5]=0u+0x00000001u; // 801DB218
  c->ctr=c->r[12]; // 801DB21C
  if (true) { c->lr=0x801DB224u; dispatch(c,c->ctr); } // 801DB220
  cmps(c,0,(int32_t)c->r[3],0); // 801DB224
  if (!crb(c,2)) { goto L_801DB234; } // 801DB228
  c->r[3]=0u+0xFFFFFFFFu; // 801DB22C
  goto L_801DB368; // 801DB230
L_801DB234:;
  c->r[18]=c->r[18]+0x00000001u; // 801DB234
  c->r[19]=c->r[19]+0xFFFFFFFFu; // 801DB238
L_801DB23C:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 801DB23C
  cmpu(c,0,c->r[0],0x00000002u); // 801DB240
  if (!crb(c,2)) { goto L_801DB2CC; } // 801DB244
  c->r[0]=R8(c->r[1]+0x00000075u); // 801DB248
  cmpu(c,0,c->r[0],0x00000061u); // 801DB24C
  if (crb(c,2)) { goto L_801DB25C; } // 801DB250
  cmpu(c,0,c->r[0],0x00000041u); // 801DB254
  if (!crb(c,2)) { goto L_801DB2CC; } // 801DB258
L_801DB25C:;
  cmps(c,0,(int32_t)c->r[19],2); // 801DB25C
  if (!crb(c,0)) { goto L_801DB26C; } // 801DB260
  c->r[3]=0u+0xFFFFFFFFu; // 801DB264
  goto L_801DB368; // 801DB268
L_801DB26C:;
  c->r[12]=c->r[25]|c->r[25]; // 801DB26C
  c->r[3]=c->r[26]|c->r[26]; // 801DB270
  c->r[4]=c->r[18]|c->r[18]; // 801DB274
  c->r[5]=0u+0x00000002u; // 801DB278
  c->ctr=c->r[12]; // 801DB27C
  if (true) { c->lr=0x801DB284u; dispatch(c,c->ctr); } // 801DB280
  cmps(c,0,(int32_t)c->r[3],0); // 801DB284
  if (!crb(c,2)) { goto L_801DB294; } // 801DB288
  c->r[3]=0u+0xFFFFFFFFu; // 801DB28C
  goto L_801DB368; // 801DB290
L_801DB294:;
  c->r[19]=c->r[19]+0xFFFFFFFEu; // 801DB294
  c->r[18]=c->r[18]+0x00000002u; // 801DB298
  goto L_801DB2CC; // 801DB29C
L_801DB2A0:;
  c->r[12]=c->r[25]|c->r[25]; // 801DB2A0
  c->r[3]=c->r[26]|c->r[26]; // 801DB2A4
  c->r[4]=c->r[1]+0x00000009u; // 801DB2A8
  c->r[5]=0u+0x00000001u; // 801DB2AC
  c->ctr=c->r[12]; // 801DB2B0
  if (true) { c->lr=0x801DB2B8u; dispatch(c,c->ctr); } // 801DB2B4
  cmps(c,0,(int32_t)c->r[3],0); // 801DB2B8
  if (!crb(c,2)) { goto L_801DB2C8; } // 801DB2BC
  c->r[3]=0u+0xFFFFFFFFu; // 801DB2C0
  goto L_801DB368; // 801DB2C4
L_801DB2C8:;
  c->r[16]=c->r[16]+0x00000001u; // 801DB2C8
L_801DB2CC:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 801DB2CC
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 801DB2D0
  if (crb(c,0)) { IRQCHK(c); goto L_801DB2A0; } // 801DB2D4
L_801DB2D8:;
  cmps(c,0,(int32_t)c->r[19],0); // 801DB2D8
  if (crb(c,2)) { goto L_801DB308; } // 801DB2DC
  c->r[12]=c->r[25]|c->r[25]; // 801DB2E0
  c->r[3]=c->r[26]|c->r[26]; // 801DB2E4
  c->r[4]=c->r[18]|c->r[18]; // 801DB2E8
  c->r[5]=c->r[19]|c->r[19]; // 801DB2EC
  c->ctr=c->r[12]; // 801DB2F0
  if (true) { c->lr=0x801DB2F8u; dispatch(c,c->ctr); } // 801DB2F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DB2F8
  if (!crb(c,2)) { goto L_801DB308; } // 801DB2FC
  c->r[3]=0u+0xFFFFFFFFu; // 801DB300
  goto L_801DB368; // 801DB304
L_801DB308:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 801DB308
  cmps(c,0,(int32_t)c->r[0],0); // 801DB30C
  if (!crb(c,2)) { goto L_801DB354; } // 801DB310
  goto L_801DB348; // 801DB314
L_801DB318:;
  c->r[12]=c->r[25]|c->r[25]; // 801DB318
  c->r[3]=c->r[26]|c->r[26]; // 801DB31C
  W8(c->r[1]+0x00000008u,c->r[24]); // 801DB320
  c->r[4]=c->r[1]+0x00000008u; // 801DB324
  c->r[5]=0u+0x00000001u; // 801DB328
  c->ctr=c->r[12]; // 801DB32C
  if (true) { c->lr=0x801DB334u; dispatch(c,c->ctr); } // 801DB330
  cmps(c,0,(int32_t)c->r[3],0); // 801DB334
  if (!crb(c,2)) { goto L_801DB344; } // 801DB338
  c->r[3]=0u+0xFFFFFFFFu; // 801DB33C
  goto L_801DB368; // 801DB340
L_801DB344:;
  c->r[16]=c->r[16]+0x00000001u; // 801DB344
L_801DB348:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 801DB348
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 801DB34C
  if (crb(c,0)) { IRQCHK(c); goto L_801DB318; } // 801DB350
L_801DB354:;
  c->r[17]=c->r[17]+c->r[16]; // 801DB354
L_801DB358:;
  c->r[0]=R8(c->r[15]+0x00000000u); // 801DB358
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DB35C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DAB18; } // 801DB360
L_801DB364:;
  c->r[3]=c->r[17]|c->r[17]; // 801DB364
L_801DB368:;
  {uint32_t ea=c->r[1]+0x0000028Cu; for(int i=15;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801DB368
  c->r[0]=R32(c->r[1]+0x000002D4u); // 801DB36C
  c->lr=c->r[0]; // 801DB370
  c->r[1]=c->r[1]+0x000002D0u; // 801DB374
  return; // 801DB378
}

// __FileWrite
void f_801DB37C(Ctx* __restrict c) {
  trace_call(0x801DB37Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB37C
  c->r[0]=c->lr; // 801DB380
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB388
  c->r[31]=c->r[5]|c->r[5]; // 801DB38C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DB390
  c->r[30]=c->r[3]|c->r[3]; // 801DB394
  c->r[3]=c->r[4]|c->r[4]; // 801DB398
  c->r[4]=0u+0x00000001u; // 801DB39C
  c->r[6]=c->r[30]|c->r[30]; // 801DB3A0
  c->lr=0x801DB3A8u; f_801D84F4(c); // 801DB3A4
  cmpu(c,0,c->r[31],c->r[3]); // 801DB3A8
  if (!crb(c,2)) { goto L_801DB3B4; } // 801DB3AC
  goto L_801DB3B8; // 801DB3B0
L_801DB3B4:;
  c->r[30]=0u+0x00000000u; // 801DB3B4
L_801DB3B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801DB3B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB3BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DB3C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB3C4
  c->lr=c->r[0]; // 801DB3C8
  c->r[1]=c->r[1]+0x00000010u; // 801DB3CC
  return; // 801DB3D0
}

// __StringWrite
void f_801DB3D4(Ctx* __restrict c) {
  trace_call(0x801DB3D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB3D4
  c->r[0]=c->lr; // 801DB3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB3DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB3E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DB3E4
  c->r[30]=c->r[3]|c->r[3]; // 801DB3E8
  c->r[6]=R32(c->r[3]+0x00000008u); // 801DB3EC
  c->r[7]=R32(c->r[3]+0x00000004u); // 801DB3F0
  c->r[0]=c->r[6]+c->r[5]; // 801DB3F4
  cmpu(c,0,c->r[0],c->r[7]); // 801DB3F8
  c->r[31]=c->r[7]-c->r[6]; // 801DB3FC
  if (crb(c,1)) { goto L_801DB408; } // 801DB400
  c->r[31]=c->r[5]|c->r[5]; // 801DB404
L_801DB408:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DB408
  c->r[5]=c->r[31]|c->r[31]; // 801DB40C
  c->r[3]=c->r[0]+c->r[6]; // 801DB410
  c->lr=0x801DB418u; f_80004364(c); // 801DB414
  c->r[0]=R32(c->r[30]+0x00000008u); // 801DB418
  c->r[3]=0u+0x00000001u; // 801DB41C
  c->r[0]=c->r[0]+c->r[31]; // 801DB420
  W32(c->r[30]+0x00000008u,c->r[0]); // 801DB424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB428
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DB42C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB430
  c->lr=c->r[0]; // 801DB434
  c->r[1]=c->r[1]+0x00000010u; // 801DB438
  return; // 801DB43C
}

// fn_801DB440
void f_801DB440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB440
  c->r[0]=c->lr; // 801DB444
  W32(c->r[1]+0x00000084u,c->r[0]); // 801DB448
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801DB44C
  c->r[31]=c->r[4]|c->r[4]; // 801DB450
  W32(c->r[1]+0x00000078u,c->r[30]); // 801DB454
  c->r[30]=c->r[3]|c->r[3]; // 801DB458
  if (!crb(c,6)) { goto L_801DB480; } // 801DB45C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801DB460
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801DB464
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801DB468
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801DB46C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801DB470
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801DB474
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801DB478
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801DB47C
L_801DB480:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DB480
  c->r[3]=c->r[30]|c->r[30]; // 801DB484
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DB488
  c->r[4]=0u+0xFFFFFFFFu; // 801DB48C
  W32(c->r[1]+0x00000010u,c->r[5]); // 801DB490
  W32(c->r[1]+0x00000014u,c->r[6]); // 801DB494
  W32(c->r[1]+0x00000018u,c->r[7]); // 801DB498
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801DB49C
  W32(c->r[1]+0x00000020u,c->r[9]); // 801DB4A0
  W32(c->r[1]+0x00000024u,c->r[10]); // 801DB4A4
  c->lr=0x801DB4ACu; f_801DE4FC(c); // 801DB4A8
  cmps(c,0,(int32_t)c->r[3],0); // 801DB4AC
  if (crb(c,0)) { goto L_801DB4BC; } // 801DB4B0
  c->r[3]=0u+0xFFFFFFFFu; // 801DB4B4
  goto L_801DB4F0; // 801DB4B8
L_801DB4BC:;
  c->r[7]=c->r[1]+0x00000088u; // 801DB4BC
  c->r[0]=c->r[1]+0x00000008u; // 801DB4C0
  c->r[4]=0u+0x02000000u; // 801DB4C4
  c->r[3]=0u+0x801E0000u; // 801DB4C8
  W32(c->r[1]+0x00000068u,c->r[4]); // 801DB4CC
  c->r[6]=c->r[1]+0x00000068u; // 801DB4D0
  c->r[4]=c->r[30]|c->r[30]; // 801DB4D4
  c->r[5]=c->r[31]|c->r[31]; // 801DB4D8
  W32(c->r[1]+0x0000006Cu,c->r[7]); // 801DB4DC
  c->r[3]=c->r[3]+0xFFFFB37Cu; // 801DB4E0
  c->r[7]=0u+0x00000000u; // 801DB4E4
  W32(c->r[1]+0x00000070u,c->r[0]); // 801DB4E8
  c->lr=0x801DB4F0u; f_801DAAD0(c); // 801DB4EC
L_801DB4F0:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 801DB4F0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801DB4F4
  c->r[30]=R32(c->r[1]+0x00000078u); // 801DB4F8
  c->lr=c->r[0]; // 801DB4FC
  c->r[1]=c->r[1]+0x00000080u; // 801DB500
  return; // 801DB504
}

// vprintf
void f_801DB508(Ctx* __restrict c) {
  trace_call(0x801DB508u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB508
  c->r[0]=c->lr; // 801DB50C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB510
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB514
  c->r[31]=0u+0x80250000u; // 801DB518
  c->r[31]=c->r[31]+0xFFFF98E0u; // 801DB51C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB520
  c->r[30]=c->r[4]|c->r[4]; // 801DB524
  c->r[4]=0u+0xFFFFFFFFu; // 801DB528
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB52C
  c->r[29]=c->r[3]|c->r[3]; // 801DB530
  c->r[3]=c->r[31]+0x00000050u; // 801DB534
  c->lr=0x801DB53Cu; f_801DE4FC(c); // 801DB538
  cmps(c,0,(int32_t)c->r[3],0); // 801DB53C
  if (crb(c,0)) { goto L_801DB54C; } // 801DB540
  c->r[3]=0u+0xFFFFFFFFu; // 801DB544
  goto L_801DB568; // 801DB548
L_801DB54C:;
  c->r[3]=0u+0x801E0000u; // 801DB54C
  c->r[5]=c->r[29]|c->r[29]; // 801DB550
  c->r[6]=c->r[30]|c->r[30]; // 801DB554
  c->r[4]=c->r[31]+0x00000050u; // 801DB558
  c->r[3]=c->r[3]+0xFFFFB37Cu; // 801DB55C
  c->r[7]=0u+0x00000000u; // 801DB560
  c->lr=0x801DB568u; f_801DAAD0(c); // 801DB564
L_801DB568:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB568
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DB56C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DB570
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DB574
  c->lr=c->r[0]; // 801DB578
  c->r[1]=c->r[1]+0x00000020u; // 801DB57C
  return; // 801DB580
}

// vsnprintf
void f_801DB584(Ctx* __restrict c) {
  trace_call(0x801DB584u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB584
  c->r[0]=c->lr; // 801DB588
  c->r[7]=0u+0x801E0000u; // 801DB58C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB590
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DB594
  c->r[31]=0u+0x00000000u; // 801DB598
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DB59C
  c->r[30]=c->r[4]|c->r[4]; // 801DB5A0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DB5A4
  c->r[29]=c->r[3]|c->r[3]; // 801DB5A8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DB5AC
  c->r[3]=c->r[7]+0xFFFFB3D4u; // 801DB5B0
  c->r[7]=0u+0x00000000u; // 801DB5B4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DB5B8
  c->r[4]=c->r[1]+0x00000008u; // 801DB5BC
  W32(c->r[1]+0x00000010u,c->r[31]); // 801DB5C0
  c->lr=0x801DB5C8u; f_801DAAD0(c); // 801DB5C4
  cmps(c,0,(int32_t)c->r[29],0); // 801DB5C8
  if (crb(c,2)) { goto L_801DB5F0; } // 801DB5CC
  cmpu(c,0,c->r[3],c->r[30]); // 801DB5D0
  if (!crb(c,0)) { goto L_801DB5E0; } // 801DB5D4
  W8(c->r[29]+c->r[3],c->r[31]); // 801DB5D8
  goto L_801DB5F0; // 801DB5DC
L_801DB5E0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DB5E0
  if (crb(c,2)) { goto L_801DB5F0; } // 801DB5E4
  c->r[4]=c->r[29]+c->r[30]; // 801DB5E8
  W8(c->r[4]+0xFFFFFFFFu,c->r[31]); // 801DB5EC
L_801DB5F0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB5F0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DB5F4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DB5F8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DB5FC
  c->lr=c->r[0]; // 801DB600
  c->r[1]=c->r[1]+0x00000030u; // 801DB604
  return; // 801DB608
}

// fn_801DB60C
void f_801DB60C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB60C
  c->r[0]=c->lr; // 801DB610
  c->r[6]=c->r[5]|c->r[5]; // 801DB614
  c->r[5]=c->r[4]|c->r[4]; // 801DB618
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB61C
  c->r[7]=0u+0x801E0000u; // 801DB620
  c->r[4]=c->r[1]+0x00000008u; // 801DB624
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DB628
  c->r[31]=0u+0x00000000u; // 801DB62C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DB630
  c->r[30]=0u+0xFFFFFFFFu; // 801DB634
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DB638
  c->r[29]=c->r[3]|c->r[3]; // 801DB63C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DB640
  c->r[3]=c->r[7]+0xFFFFB3D4u; // 801DB644
  c->r[7]=0u+0x00000000u; // 801DB648
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801DB64C
  W32(c->r[1]+0x00000010u,c->r[31]); // 801DB650
  c->lr=0x801DB658u; f_801DAAD0(c); // 801DB654
  cmps(c,0,(int32_t)c->r[29],0); // 801DB658
  if (crb(c,2)) { goto L_801DB674; } // 801DB65C
  cmpu(c,0,c->r[3],c->r[30]); // 801DB660
  if (!crb(c,0)) { goto L_801DB670; } // 801DB664
  W8(c->r[29]+c->r[3],c->r[31]); // 801DB668
  goto L_801DB674; // 801DB66C
L_801DB670:;
  W8(c->r[29]+0xFFFFFFFEu,c->r[31]); // 801DB670
L_801DB674:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB674
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DB678
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DB67C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DB680
  c->lr=c->r[0]; // 801DB684
  c->r[1]=c->r[1]+0x00000030u; // 801DB688
  return; // 801DB68C
}

// fn_801DB690
void f_801DB690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB690
  c->r[0]=c->lr; // 801DB694
  W32(c->r[1]+0x00000094u,c->r[0]); // 801DB698
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 801DB69C
  W32(c->r[1]+0x00000088u,c->r[30]); // 801DB6A0
  W32(c->r[1]+0x00000084u,c->r[29]); // 801DB6A4
  c->r[29]=c->r[4]|c->r[4]; // 801DB6A8
  W32(c->r[1]+0x00000080u,c->r[28]); // 801DB6AC
  c->r[28]=c->r[3]|c->r[3]; // 801DB6B0
  if (!crb(c,6)) { goto L_801DB6D8; } // 801DB6B4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801DB6B8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801DB6BC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801DB6C0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801DB6C4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801DB6C8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801DB6CC
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801DB6D0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801DB6D4
L_801DB6D8:;
  c->r[12]=c->r[1]+0x00000098u; // 801DB6D8
  c->r[0]=c->r[1]+0x00000008u; // 801DB6DC
  c->r[30]=0u+0x03000000u; // 801DB6E0
  W32(c->r[1]+0x00000018u,c->r[7]); // 801DB6E4
  c->r[31]=0u+0x00000000u; // 801DB6E8
  c->r[7]=c->r[1]+0x00000074u; // 801DB6EC
  W32(c->r[1]+0x00000014u,c->r[6]); // 801DB6F0
  c->r[6]=c->r[7]|c->r[7]; // 801DB6F4
  c->r[11]=0u+0x801E0000u; // 801DB6F8
  c->r[7]=0u+0x00000000u; // 801DB6FC
  W32(c->r[1]+0x00000010u,c->r[5]); // 801DB700
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DB704
  W32(c->r[1]+0x00000068u,c->r[3]); // 801DB708
  c->r[3]=c->r[11]+0xFFFFB3D4u; // 801DB70C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DB710
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 801DB714
  c->r[4]=c->r[1]+0x00000068u; // 801DB718
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801DB71C
  W32(c->r[1]+0x00000020u,c->r[9]); // 801DB720
  W32(c->r[1]+0x00000024u,c->r[10]); // 801DB724
  W32(c->r[1]+0x00000074u,c->r[30]); // 801DB728
  W32(c->r[1]+0x00000078u,c->r[12]); // 801DB72C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801DB730
  W32(c->r[1]+0x00000070u,c->r[31]); // 801DB734
  c->lr=0x801DB73Cu; f_801DAAD0(c); // 801DB738
  cmps(c,0,(int32_t)c->r[28],0); // 801DB73C
  if (crb(c,2)) { goto L_801DB764; } // 801DB740
  cmpu(c,0,c->r[3],c->r[29]); // 801DB744
  if (!crb(c,0)) { goto L_801DB754; } // 801DB748
  W8(c->r[28]+c->r[3],c->r[31]); // 801DB74C
  goto L_801DB764; // 801DB750
L_801DB754:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DB754
  if (crb(c,2)) { goto L_801DB764; } // 801DB758
  c->r[4]=c->r[28]+c->r[29]; // 801DB75C
  W8(c->r[4]+0xFFFFFFFFu,c->r[31]); // 801DB760
L_801DB764:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801DB764
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 801DB768
  c->r[30]=R32(c->r[1]+0x00000088u); // 801DB76C
  c->r[29]=R32(c->r[1]+0x00000084u); // 801DB770
  c->r[28]=R32(c->r[1]+0x00000080u); // 801DB774
  c->lr=c->r[0]; // 801DB778
  c->r[1]=c->r[1]+0x00000090u; // 801DB77C
  return; // 801DB780
}

// sprintf
void f_801DB784(Ctx* __restrict c) {
  trace_call(0x801DB784u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB784
  c->r[0]=c->lr; // 801DB788
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801DB78C
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801DB790
  c->r[27]=c->r[3]|c->r[3]; // 801DB794
  if (!crb(c,6)) { goto L_801DB7BC; } // 801DB798
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801DB79C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801DB7A0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801DB7A4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801DB7A8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801DB7AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801DB7B0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801DB7B4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801DB7B8
L_801DB7BC:;
  c->r[12]=c->r[1]+0x000000A8u; // 801DB7BC
  c->r[0]=c->r[1]+0x00000008u; // 801DB7C0
  c->r[29]=0u+0x02000000u; // 801DB7C4
  W32(c->r[1]+0x00000010u,c->r[5]); // 801DB7C8
  c->r[30]=0u+0xFFFFFFFFu; // 801DB7CC
  c->r[31]=0u+0x00000000u; // 801DB7D0
  W32(c->r[1]+0x00000018u,c->r[7]); // 801DB7D4
  c->r[28]=c->r[1]+0x00000074u; // 801DB7D8
  c->r[11]=0u+0x801E0000u; // 801DB7DC
  c->r[5]=c->r[4]|c->r[4]; // 801DB7E0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DB7E4
  c->r[4]=c->r[1]+0x00000068u; // 801DB7E8
  c->r[7]=0u+0x00000000u; // 801DB7EC
  W32(c->r[1]+0x00000014u,c->r[6]); // 801DB7F0
  c->r[6]=c->r[28]|c->r[28]; // 801DB7F4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DB7F8
  W32(c->r[1]+0x00000068u,c->r[3]); // 801DB7FC
  c->r[3]=c->r[11]+0xFFFFB3D4u; // 801DB800
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801DB804
  W32(c->r[1]+0x00000020u,c->r[9]); // 801DB808
  W32(c->r[1]+0x00000024u,c->r[10]); // 801DB80C
  W32(c->r[1]+0x00000074u,c->r[29]); // 801DB810
  W32(c->r[1]+0x00000078u,c->r[12]); // 801DB814
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 801DB818
  W32(c->r[1]+0x0000006Cu,c->r[30]); // 801DB81C
  W32(c->r[1]+0x00000070u,c->r[31]); // 801DB820
  c->lr=0x801DB828u; f_801DAAD0(c); // 801DB824
  cmps(c,0,(int32_t)c->r[27],0); // 801DB828
  if (crb(c,2)) { goto L_801DB844; } // 801DB82C
  cmpu(c,0,c->r[3],c->r[30]); // 801DB830
  if (!crb(c,0)) { goto L_801DB840; } // 801DB834
  W8(c->r[27]+c->r[3],c->r[31]); // 801DB838
  goto L_801DB844; // 801DB83C
L_801DB840:;
  W8(c->r[27]+0xFFFFFFFEu,c->r[31]); // 801DB840
L_801DB844:;
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801DB844
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801DB848
  c->lr=c->r[0]; // 801DB84C
  c->r[1]=c->r[1]+0x000000A0u; // 801DB850
  return; // 801DB854
}

// fn_801DB858
void f_801DB858(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 801DB858
  if (crb(c,2)) { goto L_801DB874; } // 801DB85C
  cmps(c,0,(int32_t)c->r[5],1); // 801DB860
  if (crb(c,2)) { goto L_801DB8A4; } // 801DB864
  cmps(c,0,(int32_t)c->r[5],2); // 801DB868
  if (crb(c,2)) { goto L_801DB8D0; } // 801DB86C
  goto L_801DB8D8; // 801DB870
L_801DB874:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801DB874
  c->r[5]=R8(c->r[4]+0x00000000u); // 801DB878
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 801DB87C
  if (!crb(c,2)) { goto L_801DB894; } // 801DB880
  c->r[0]=0u+0x00000001u; // 801DB884
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DB888
  c->r[3]=0u+0xFFFFFFFFu; // 801DB88C
  return; // 801DB890
L_801DB894:;
  c->r[0]=c->r[4]+0x00000001u; // 801DB894
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DB898
  c->r[3]=c->r[5]|c->r[5]; // 801DB89C
  return; // 801DB8A0
L_801DB8A4:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801DB8A4
  cmps(c,0,(int32_t)c->r[0],0); // 801DB8A8
  if (!crb(c,2)) { goto L_801DB8C0; } // 801DB8AC
  c->r[5]=R32(c->r[3]+0x00000000u); // 801DB8B0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801DB8B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801DB8B8
  goto L_801DB8C8; // 801DB8BC
L_801DB8C0:;
  c->r[0]=0u+0x00000000u; // 801DB8C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DB8C4
L_801DB8C8:;
  c->r[3]=c->r[4]|c->r[4]; // 801DB8C8
  return; // 801DB8CC
L_801DB8D0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801DB8D0
  return; // 801DB8D4
L_801DB8D8:;
  c->r[3]=0u+0x00000000u; // 801DB8D8
  return; // 801DB8DC
}

// fn_801DB8E0
void f_801DB8E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB8E0
  c->r[0]=c->lr; // 801DB8E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB8E8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DB8EC
  cmpu(c,0,c->r[0],0x00000006u); // 801DB8F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DB8F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DB8F8
  c->r[30]=c->r[3]|c->r[3]; // 801DB8FC
  if (!crb(c,1)) { goto L_801DB90C; } // 801DB900
  c->r[3]=0u+0xFFFFFFFFu; // 801DB904
  goto L_801DB970; // 801DB908
L_801DB90C:;
  c->r[4]=0u+0x802E0000u; // 801DB90C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DB910
  c->r[4]=c->r[4]+0xFFFFAE58u; // 801DB914
  c->r[31]=R32(c->r[4]+c->r[5]); // 801DB918
  cmpu(c,0,c->r[31],0x00000001u); // 801DB91C
  if (crb(c,2)) { goto L_801DB92C; } // 801DB920
  c->r[0]=0u+0x00000000u; // 801DB924
  W32(c->r[4]+c->r[5],c->r[0]); // 801DB928
L_801DB92C:;
  cmpu(c,0,c->r[31],0x00000001u); // 801DB92C
  if (crb(c,2)) { goto L_801DB944; } // 801DB930
  cmps(c,0,(int32_t)c->r[31],0); // 801DB934
  if (!crb(c,2)) { goto L_801DB94C; } // 801DB938
  cmps(c,0,(int32_t)c->r[3],1); // 801DB93C
  if (!crb(c,2)) { goto L_801DB94C; } // 801DB940
L_801DB944:;
  c->r[3]=0u+0x00000000u; // 801DB944
  goto L_801DB970; // 801DB948
L_801DB94C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DB94C
  if (!crb(c,2)) { goto L_801DB95C; } // 801DB950
  c->r[3]=0u+0x00000000u; // 801DB954
  c->lr=0x801DB95Cu; f_80162D40(c); // 801DB958
L_801DB95C:;
  c->r[12]=c->r[31]|c->r[31]; // 801DB95C
  c->r[3]=c->r[30]|c->r[30]; // 801DB960
  c->ctr=c->r[12]; // 801DB964
  if (true) { c->lr=0x801DB96Cu; dispatch(c,c->ctr); } // 801DB968
  c->r[3]=0u+0x00000000u; // 801DB96C
L_801DB970:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DB974
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DB978
  c->lr=c->r[0]; // 801DB97C
  c->r[1]=c->r[1]+0x00000010u; // 801DB980
  return; // 801DB984
}

// strcpy
void f_801DB988(Ctx* __restrict c) {
  trace_call(0x801DB988u);
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 801DB988
  c->r[5]=rotl(c->r[4],0)&0x00000003u; // 801DB98C
  cmpu(c,0,c->r[0],c->r[5]); // 801DB990
  c->r[7]=c->r[3]|c->r[3]; // 801DB994
  if (!crb(c,2)) { goto L_801DBA24; } // 801DB998
  cmps(c,0,(int32_t)c->r[5],0); // 801DB99C
  if (crb(c,2)) { goto L_801DB9E0; } // 801DB9A0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DB9A4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801DB9A8
  cmps(c,0,(int32_t)c->r[0],0); // 801DB9AC
  if (crb(c,2)) return; // 801DB9B0
  c->r[0]=addc(c,~c->r[5],0x00000003u,1); // 801DB9B4
  c->ctr=c->r[0]; // 801DB9B8
  cmps(c,0,(int32_t)c->r[0],0); // 801DB9BC
  if (crb(c,2)) { goto L_801DB9D8; } // 801DB9C0
L_801DB9C4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801DB9C4
  {uint32_t ea=c->r[7]+0x00000001u; W8(ea,c->r[0]); c->r[7]=ea;} // 801DB9C8
  cmps(c,0,(int32_t)c->r[0],0); // 801DB9CC
  if (crb(c,2)) return; // 801DB9D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB9C4; } // 801DB9D4
L_801DB9D8:;
  c->r[7]=c->r[7]+0x00000001u; // 801DB9D8
  c->r[4]=c->r[4]+0x00000001u; // 801DB9DC
L_801DB9E0:;
  c->r[8]=R32(c->r[4]+0x00000000u); // 801DB9E0
  c->r[5]=0u+0x80810000u; // 801DB9E4
  c->r[5]=c->r[5]+0xFFFF8080u; // 801DB9E8
  c->r[6]=c->r[8]+0xFEFF0000u; // 801DB9EC
  c->r[6]=c->r[6]+0xFFFFFEFFu; // 801DB9F0
  c->r[6]=c->r[6]&~c->r[8]; // 801DB9F4
  c->r[0]=c->r[6]&c->r[5]; cr0(c,c->r[0]); // 801DB9F8
  if (!crb(c,2)) { goto L_801DBA24; } // 801DB9FC
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 801DBA00
L_801DBA04:;
  {uint32_t ea=c->r[7]+0x00000004u; W32(ea,c->r[8]); c->r[7]=ea;} // 801DBA04
  {uint32_t ea=c->r[4]+0x00000004u; c->r[8]=R32(ea); c->r[4]=ea;} // 801DBA08
  c->r[6]=c->r[8]+0xFEFF0000u; // 801DBA0C
  c->r[6]=c->r[6]+0xFFFFFEFFu; // 801DBA10
  c->r[6]=c->r[6]&~c->r[8]; // 801DBA14
  c->r[0]=c->r[6]&c->r[5]; cr0(c,c->r[0]); // 801DBA18
  if (crb(c,2)) { IRQCHK(c); goto L_801DBA04; } // 801DBA1C
  c->r[7]=c->r[7]+0x00000004u; // 801DBA20
L_801DBA24:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DBA24
  W8(c->r[7]+0x00000000u,c->r[0]); // 801DBA28
  cmps(c,0,(int32_t)c->r[0],0); // 801DBA2C
  if (crb(c,2)) return; // 801DBA30
L_801DBA34:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801DBA34
  {uint32_t ea=c->r[7]+0x00000001u; W8(ea,c->r[0]); c->r[7]=ea;} // 801DBA38
  cmps(c,0,(int32_t)c->r[0],0); // 801DBA3C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBA34; } // 801DBA40
  return; // 801DBA44
}

// fn_801DBA48
void f_801DBA48(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DBA48
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 801DBA4C
  c->r[5]=c->r[5]+0x00000001u; // 801DBA50
  goto L_801DBA80; // 801DBA54
L_801DBA58:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801DBA58
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 801DBA5C
  cmps(c,0,(int32_t)c->r[0],0); // 801DBA60
  if (!crb(c,2)) { goto L_801DBA80; } // 801DBA64
  c->r[0]=0u+0x00000000u; // 801DBA68
  goto L_801DBA74; // 801DBA6C
L_801DBA70:;
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 801DBA70
L_801DBA74:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801DBA74
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBA70; } // 801DBA78
  return; // 801DBA7C
L_801DBA80:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801DBA80
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBA58; } // 801DBA84
  return; // 801DBA88
}

// fn_801DBA8C
void f_801DBA8C(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DBA8C
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801DBA90
L_801DBA94:;
  {uint32_t ea=c->r[5]+0x00000001u; c->r[0]=R8(ea); c->r[5]=ea;} // 801DBA94
  cmps(c,0,(int32_t)c->r[0],0); // 801DBA98
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBA94; } // 801DBA9C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801DBAA0
L_801DBAA4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801DBAA4
  {uint32_t ea=c->r[5]+0x00000001u; W8(ea,c->r[0]); c->r[5]=ea;} // 801DBAA8
  cmps(c,0,(int32_t)c->r[0],0); // 801DBAAC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBAA4; } // 801DBAB0
  return; // 801DBAB4
}

// fn_801DBAB8
void f_801DBAB8(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DBAB8
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 801DBABC
L_801DBAC0:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[0]=R8(ea); c->r[6]=ea;} // 801DBAC0
  cmps(c,0,(int32_t)c->r[0],0); // 801DBAC4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBAC0; } // 801DBAC8
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801DBACC
  c->r[5]=c->r[5]+0x00000001u; // 801DBAD0
  goto L_801DBAF0; // 801DBAD4
L_801DBAD8:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801DBAD8
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 801DBADC
  cmps(c,0,(int32_t)c->r[0],0); // 801DBAE0
  if (!crb(c,2)) { goto L_801DBAF0; } // 801DBAE4
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801DBAE8
  goto L_801DBAF8; // 801DBAEC
L_801DBAF0:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801DBAF0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBAD8; } // 801DBAF4
L_801DBAF8:;
  c->r[0]=0u+0x00000000u; // 801DBAF8
  W8(c->r[6]+0x00000001u,c->r[0]); // 801DBAFC
  return; // 801DBB00
}

// strcmp
void f_801DBB04(Ctx* __restrict c) {
  trace_call(0x801DBB04u);
  c->r[5]=R8(c->r[3]+0x00000000u); // 801DBB04
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DBB08
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 801DBB0C
  if (crb(c,2)) { goto L_801DBB1C; } // 801DBB10
  c->r[3]=c->r[0]|c->r[0]; // 801DBB14
  return; // 801DBB18
L_801DBB1C:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 801DBB1C
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 801DBB20
  cmpu(c,0,c->r[0],c->r[6]); // 801DBB24
  if (!crb(c,2)) { goto L_801DBBE8; } // 801DBB28
  cmps(c,0,(int32_t)c->r[6],0); // 801DBB2C
  if (crb(c,2)) { goto L_801DBB88; } // 801DBB30
  cmps(c,0,(int32_t)c->r[5],0); // 801DBB34
  if (!crb(c,2)) { goto L_801DBB44; } // 801DBB38
  c->r[3]=0u+0x00000000u; // 801DBB3C
  return; // 801DBB40
L_801DBB44:;
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 801DBB44
  c->ctr=c->r[0]; // 801DBB48
  cmps(c,0,(int32_t)c->r[0],0); // 801DBB4C
  if (crb(c,2)) { goto L_801DBB80; } // 801DBB50
L_801DBB54:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 801DBB54
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801DBB58
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 801DBB5C
  if (crb(c,2)) { goto L_801DBB6C; } // 801DBB60
  c->r[3]=c->r[0]|c->r[0]; // 801DBB64
  return; // 801DBB68
L_801DBB6C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DBB6C
  if (!crb(c,2)) { goto L_801DBB7C; } // 801DBB70
  c->r[3]=0u+0x00000000u; // 801DBB74
  return; // 801DBB78
L_801DBB7C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DBB54; } // 801DBB7C
L_801DBB80:;
  c->r[3]=c->r[3]+0x00000001u; // 801DBB80
  c->r[4]=c->r[4]+0x00000001u; // 801DBB84
L_801DBB88:;
  c->r[7]=R32(c->r[3]+0x00000000u); // 801DBB88
  c->r[5]=0u+0x80810000u; // 801DBB8C
  c->r[6]=c->r[5]+0xFFFF8080u; // 801DBB90
  c->r[8]=R32(c->r[4]+0x00000000u); // 801DBB94
  c->r[5]=c->r[7]+0xFEFF0000u; // 801DBB98
  c->r[5]=c->r[5]+0xFFFFFEFFu; // 801DBB9C
  c->r[5]=c->r[5]&~c->r[7]; // 801DBBA0
  c->r[0]=c->r[5]&c->r[6]; cr0(c,c->r[0]); // 801DBBA4
  if (!crb(c,2)) { goto L_801DBBD0; } // 801DBBA8
  goto L_801DBBC8; // 801DBBAC
L_801DBBB0:;
  {uint32_t ea=c->r[3]+0x00000004u; c->r[7]=R32(ea); c->r[3]=ea;} // 801DBBB0
  {uint32_t ea=c->r[4]+0x00000004u; c->r[8]=R32(ea); c->r[4]=ea;} // 801DBBB4
  c->r[5]=c->r[7]+0xFEFF0000u; // 801DBBB8
  c->r[0]=c->r[5]+0xFFFFFEFFu; // 801DBBBC
  c->r[0]=c->r[0]&c->r[6]; cr0(c,c->r[0]); // 801DBBC0
  if (!crb(c,2)) { goto L_801DBBD0; } // 801DBBC4
L_801DBBC8:;
  cmpu(c,0,c->r[7],c->r[8]); // 801DBBC8
  if (crb(c,2)) { IRQCHK(c); goto L_801DBBB0; } // 801DBBCC
L_801DBBD0:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 801DBBD0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DBBD4
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 801DBBD8
  if (crb(c,2)) { goto L_801DBBE8; } // 801DBBDC
  c->r[3]=c->r[0]|c->r[0]; // 801DBBE0
  return; // 801DBBE4
L_801DBBE8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DBBE8
  if (!crb(c,2)) { goto L_801DBBF8; } // 801DBBEC
  c->r[3]=0u+0x00000000u; // 801DBBF0
  return; // 801DBBF4
L_801DBBF8:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 801DBBF8
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801DBBFC
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 801DBC00
  if (crb(c,2)) { goto L_801DBC10; } // 801DBC04
  c->r[3]=c->r[0]|c->r[0]; // 801DBC08
  return; // 801DBC0C
L_801DBC10:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DBC10
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBBF8; } // 801DBC14
  c->r[3]=0u+0x00000000u; // 801DBC18
  return; // 801DBC1C
}

// strncmp
void f_801DBC20(Ctx* __restrict c) {
  trace_call(0x801DBC20u);
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DBC20
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DBC24
  c->r[6]=c->r[5]+0x00000001u; // 801DBC28
  goto L_801DBC50; // 801DBC2C
L_801DBC30:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[0]=R8(ea); c->r[3]=ea;} // 801DBC30
  {uint32_t ea=c->r[4]+0x00000001u; c->r[5]=R8(ea); c->r[4]=ea;} // 801DBC34
  cmpu(c,0,c->r[0],c->r[5]); // 801DBC38
  if (crb(c,2)) { goto L_801DBC48; } // 801DBC3C
  c->r[3]=c->r[0]-c->r[5]; // 801DBC40
  return; // 801DBC44
L_801DBC48:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBC48
  if (crb(c,2)) { goto L_801DBC58; } // 801DBC4C
L_801DBC50:;
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 801DBC50
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBC30; } // 801DBC54
L_801DBC58:;
  c->r[3]=0u+0x00000000u; // 801DBC58
  return; // 801DBC5C
}

// strchr
void f_801DBC60(Ctx* __restrict c) {
  trace_call(0x801DBC60u);
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DBC60
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801DBC64
  goto L_801DBC74; // 801DBC68
L_801DBC6C:;
  cmpu(c,0,c->r[4],c->r[0]); // 801DBC6C
  if (crb(c,2)) return; // 801DBC70
L_801DBC74:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[4]=R8(ea); c->r[3]=ea;} // 801DBC74
  cmps(c,0,(int32_t)c->r[4],0); // 801DBC78
  if (!crb(c,2)) { IRQCHK(c); goto L_801DBC6C; } // 801DBC7C
  cmps(c,0,(int32_t)c->r[0],0); // 801DBC80
  if (crb(c,2)) return; // 801DBC84
  c->r[3]=0u+0x00000000u; // 801DBC88
  return; // 801DBC8C
}

// fn_801DBC90
void f_801DBC90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBC90
  c->r[0]=c->lr; // 801DBC94
  cmps(c,0,(int32_t)c->r[3],0); // 801DBC98
  W32(c->r[1]+0x00000054u,c->r[0]); // 801DBC9C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=17;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801DBCA0
  c->r[27]=0u+0x00000000u; // 801DBCA4
  c->r[17]=c->r[3]|c->r[3]; // 801DBCA8
  c->r[18]=c->r[4]|c->r[4]; // 801DBCAC
  c->r[19]=c->r[5]|c->r[5]; // 801DBCB0
  c->r[20]=c->r[6]|c->r[6]; // 801DBCB4
  c->r[21]=c->r[7]|c->r[7]; // 801DBCB8
  c->r[22]=c->r[8]|c->r[8]; // 801DBCBC
  c->r[23]=c->r[9]|c->r[9]; // 801DBCC0
  c->r[28]=0u+0x00000001u; // 801DBCC4
  c->r[26]=0u+0x00000000u; // 801DBCC8
  c->r[25]=0u+0x00000000u; // 801DBCCC
  c->r[24]=0u+0x00000000u; // 801DBCD0
  W32(c->r[9]+0x00000000u,c->r[27]); // 801DBCD4
  W32(c->r[8]+0x00000000u,c->r[27]); // 801DBCD8
  if (crb(c,0)) { goto L_801DBCF8; } // 801DBCDC
  cmps(c,0,(int32_t)c->r[3],1); // 801DBCE0
  if (crb(c,2)) { goto L_801DBCF8; } // 801DBCE4
  cmps(c,0,(int32_t)c->r[3],36); // 801DBCE8
  if (crb(c,1)) { goto L_801DBCF8; } // 801DBCEC
  cmps(c,0,(int32_t)c->r[4],1); // 801DBCF0
  if (!crb(c,0)) { goto L_801DBD00; } // 801DBCF4
L_801DBCF8:;
  c->r[28]=0u+0x00000040u; // 801DBCF8
  goto L_801DBD20; // 801DBCFC
L_801DBD00:;
  c->r[12]=c->r[19]|c->r[19]; // 801DBD00
  c->r[3]=c->r[20]|c->r[20]; // 801DBD04
  c->r[4]=0u+0x00000000u; // 801DBD08
  c->r[5]=0u+0x00000000u; // 801DBD0C
  c->ctr=c->r[12]; // 801DBD10
  c->r[27]=0u+0x00000001u; // 801DBD14
  if (true) { c->lr=0x801DBD1Cu; dispatch(c,c->ctr); } // 801DBD18
  c->r[4]=c->r[3]|c->r[3]; // 801DBD1C
L_801DBD20:;
  cmps(c,0,(int32_t)c->r[17],0); // 801DBD20
  if (crb(c,2)) { goto L_801DBD30; } // 801DBD24
  c->r[0]=0u+0xFFFFFFFFu; // 801DBD28
  c->r[24]=divwu(c->r[0],c->r[17]); // 801DBD2C
L_801DBD30:;
  c->r[3]=0u+0x80250000u; // 801DBD30
  c->r[30]=0u+0x00000001u; // 801DBD34
  c->r[31]=0u+0xFFFFFFFFu; // 801DBD38
  c->r[29]=c->r[3]+0xFFFF9CF8u; // 801DBD3C
  goto L_801DC040; // 801DBD40
L_801DBD44:;
  cmps(c,0,(int32_t)c->r[28],1); // 801DBD44
  if (crb(c,2)) { goto L_801DBD70; } // 801DBD48
  cmps(c,0,(int32_t)c->r[28],2); // 801DBD4C
  if (crb(c,2)) { goto L_801DBE30; } // 801DBD50
  cmps(c,0,(int32_t)c->r[28],4); // 801DBD54
  if (crb(c,2)) { goto L_801DBE78; } // 801DBD58
  cmps(c,0,(int32_t)c->r[28],8); // 801DBD5C
  if (crb(c,2)) { goto L_801DBEC8; } // 801DBD60
  cmps(c,0,(int32_t)c->r[28],16); // 801DBD64
  if (crb(c,2)) { goto L_801DBEC8; } // 801DBD68
  goto L_801DC040; // 801DBD6C
L_801DBD70:;
  cmpu(c,0,c->r[4],0x000000FFu); // 801DBD70
  c->r[0]=0u+0x00000001u; // 801DBD74
  if (crb(c,1)) { goto L_801DBD80; } // 801DBD78
  c->r[0]=0u+0x00000000u; // 801DBD7C
L_801DBD80:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBD80
  if (crb(c,2)) { goto L_801DBD90; } // 801DBD84
  c->r[0]=0u+0x00000000u; // 801DBD88
  goto L_801DBDA4; // 801DBD8C
L_801DBD90:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 801DBD90
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801DBD94
  c->r[3]=R32(c->r[3]+0x00000008u); // 801DBD98
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBD9C
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 801DBDA0
L_801DBDA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBDA4
  if (crb(c,2)) { goto L_801DBDD0; } // 801DBDA8
  c->r[12]=c->r[19]|c->r[19]; // 801DBDAC
  c->r[3]=c->r[20]|c->r[20]; // 801DBDB0
  c->r[4]=0u+0x00000000u; // 801DBDB4
  c->r[5]=0u+0x00000000u; // 801DBDB8
  c->ctr=c->r[12]; // 801DBDBC
  if (true) { c->lr=0x801DBDC4u; dispatch(c,c->ctr); } // 801DBDC0
  c->r[4]=c->r[3]|c->r[3]; // 801DBDC4
  c->r[26]=c->r[26]+0x00000001u; // 801DBDC8
  goto L_801DC040; // 801DBDCC
L_801DBDD0:;
  cmps(c,0,(int32_t)c->r[4],43); // 801DBDD0
  if (!crb(c,2)) { goto L_801DBDFC; } // 801DBDD4
  c->r[12]=c->r[19]|c->r[19]; // 801DBDD8
  c->r[3]=c->r[20]|c->r[20]; // 801DBDDC
  c->r[4]=0u+0x00000000u; // 801DBDE0
  c->r[5]=0u+0x00000000u; // 801DBDE4
  c->ctr=c->r[12]; // 801DBDE8
  c->r[27]=c->r[27]+0x00000001u; // 801DBDEC
  if (true) { c->lr=0x801DBDF4u; dispatch(c,c->ctr); } // 801DBDF0
  c->r[4]=c->r[3]|c->r[3]; // 801DBDF4
  goto L_801DBE28; // 801DBDF8
L_801DBDFC:;
  cmps(c,0,(int32_t)c->r[4],45); // 801DBDFC
  if (!crb(c,2)) { goto L_801DBE28; } // 801DBE00
  c->r[12]=c->r[19]|c->r[19]; // 801DBE04
  c->r[3]=c->r[20]|c->r[20]; // 801DBE08
  c->r[4]=0u+0x00000000u; // 801DBE0C
  c->r[5]=0u+0x00000000u; // 801DBE10
  c->ctr=c->r[12]; // 801DBE14
  c->r[27]=c->r[27]+0x00000001u; // 801DBE18
  if (true) { c->lr=0x801DBE20u; dispatch(c,c->ctr); } // 801DBE1C
  c->r[4]=c->r[3]|c->r[3]; // 801DBE20
  W32(c->r[22]+0x00000000u,c->r[30]); // 801DBE24
L_801DBE28:;
  c->r[28]=0u+0x00000002u; // 801DBE28
  goto L_801DC040; // 801DBE2C
L_801DBE30:;
  cmps(c,0,(int32_t)c->r[17],0); // 801DBE30
  if (crb(c,2)) { goto L_801DBE40; } // 801DBE34
  cmps(c,0,(int32_t)c->r[17],16); // 801DBE38
  if (!crb(c,2)) { goto L_801DBE70; } // 801DBE3C
L_801DBE40:;
  cmps(c,0,(int32_t)c->r[4],48); // 801DBE40
  if (!crb(c,2)) { goto L_801DBE70; } // 801DBE44
  c->r[12]=c->r[19]|c->r[19]; // 801DBE48
  c->r[3]=c->r[20]|c->r[20]; // 801DBE4C
  c->r[28]=0u+0x00000004u; // 801DBE50
  c->r[4]=0u+0x00000000u; // 801DBE54
  c->r[5]=0u+0x00000000u; // 801DBE58
  c->ctr=c->r[12]; // 801DBE5C
  c->r[27]=c->r[27]+0x00000001u; // 801DBE60
  if (true) { c->lr=0x801DBE68u; dispatch(c,c->ctr); } // 801DBE64
  c->r[4]=c->r[3]|c->r[3]; // 801DBE68
  goto L_801DC040; // 801DBE6C
L_801DBE70:;
  c->r[28]=0u+0x00000008u; // 801DBE70
  goto L_801DC040; // 801DBE74
L_801DBE78:;
  cmps(c,0,(int32_t)c->r[4],88); // 801DBE78
  if (crb(c,2)) { goto L_801DBE88; } // 801DBE7C
  cmps(c,0,(int32_t)c->r[4],120); // 801DBE80
  if (!crb(c,2)) { goto L_801DBEB4; } // 801DBE84
L_801DBE88:;
  c->r[12]=c->r[19]|c->r[19]; // 801DBE88
  c->r[3]=c->r[20]|c->r[20]; // 801DBE8C
  c->r[17]=0u+0x00000010u; // 801DBE90
  c->r[28]=0u+0x00000008u; // 801DBE94
  c->r[4]=0u+0x00000000u; // 801DBE98
  c->r[5]=0u+0x00000000u; // 801DBE9C
  c->ctr=c->r[12]; // 801DBEA0
  c->r[27]=c->r[27]+0x00000001u; // 801DBEA4
  if (true) { c->lr=0x801DBEACu; dispatch(c,c->ctr); } // 801DBEA8
  c->r[4]=c->r[3]|c->r[3]; // 801DBEAC
  goto L_801DC040; // 801DBEB0
L_801DBEB4:;
  cmps(c,0,(int32_t)c->r[17],0); // 801DBEB4
  if (!crb(c,2)) { goto L_801DBEC0; } // 801DBEB8
  c->r[17]=0u+0x00000008u; // 801DBEBC
L_801DBEC0:;
  c->r[28]=0u+0x00000010u; // 801DBEC0
  goto L_801DC040; // 801DBEC4
L_801DBEC8:;
  cmps(c,0,(int32_t)c->r[17],0); // 801DBEC8
  if (!crb(c,2)) { goto L_801DBED4; } // 801DBECC
  c->r[17]=0u+0x0000000Au; // 801DBED0
L_801DBED4:;
  cmps(c,0,(int32_t)c->r[24],0); // 801DBED4
  if (!crb(c,2)) { goto L_801DBEE0; } // 801DBED8
  c->r[24]=divwu(c->r[31],c->r[17]); // 801DBEDC
L_801DBEE0:;
  cmpu(c,0,c->r[4],0x000000FFu); // 801DBEE0
  c->r[0]=0u+0x00000001u; // 801DBEE4
  if (crb(c,1)) { goto L_801DBEF0; } // 801DBEE8
  c->r[0]=0u+0x00000000u; // 801DBEEC
L_801DBEF0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBEF0
  if (crb(c,2)) { goto L_801DBF00; } // 801DBEF4
  c->r[0]=0u+0x00000000u; // 801DBEF8
  goto L_801DBF14; // 801DBEFC
L_801DBF00:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 801DBF00
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801DBF04
  c->r[3]=R32(c->r[3]+0x00000008u); // 801DBF08
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBF0C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 801DBF10
L_801DBF14:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBF14
  if (crb(c,2)) { goto L_801DBF40; } // 801DBF18
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 801DBF1C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[17]); // 801DBF20
  if (crb(c,0)) { goto L_801DBFF8; } // 801DBF24
  cmps(c,0,(int32_t)c->r[28],16); // 801DBF28
  c->r[28]=0u+0x00000040u; // 801DBF2C
  if (!crb(c,2)) { goto L_801DBF38; } // 801DBF30
  c->r[28]=0u+0x00000020u; // 801DBF34
L_801DBF38:;
  c->r[4]=c->r[4]+0x00000030u; // 801DBF38
  goto L_801DC040; // 801DBF3C
L_801DBF40:;
  cmpu(c,0,c->r[4],0x000000FFu); // 801DBF40
  c->r[0]=0u+0x00000001u; // 801DBF44
  if (crb(c,1)) { goto L_801DBF50; } // 801DBF48
  c->r[0]=0u+0x00000000u; // 801DBF4C
L_801DBF50:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBF50
  if (crb(c,2)) { goto L_801DBF60; } // 801DBF54
  c->r[0]=0u+0x00000000u; // 801DBF58
  goto L_801DBF74; // 801DBF5C
L_801DBF60:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 801DBF60
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801DBF64
  c->r[3]=R32(c->r[3]+0x00000008u); // 801DBF68
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DBF6C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801DBF70
L_801DBF74:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBF74
  if (crb(c,2)) { goto L_801DBFB4; } // 801DBF78
  cmpu(c,0,c->r[4],0x000000FFu); // 801DBF7C
  c->r[0]=0u+0x00000001u; // 801DBF80
  if (crb(c,1)) { goto L_801DBF8C; } // 801DBF84
  c->r[0]=0u+0x00000000u; // 801DBF88
L_801DBF8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBF8C
  if (crb(c,2)) { goto L_801DBF9C; } // 801DBF90
  c->r[3]=c->r[4]|c->r[4]; // 801DBF94
  goto L_801DBFA8; // 801DBF98
L_801DBF9C:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 801DBF9C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801DBFA0
  c->r[3]=R8(c->r[3]+c->r[4]); // 801DBFA4
L_801DBFA8:;
  c->r[0]=c->r[3]+0xFFFFFFC9u; // 801DBFA8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[17]); // 801DBFAC
  if (crb(c,0)) { goto L_801DBFCC; } // 801DBFB0
L_801DBFB4:;
  cmps(c,0,(int32_t)c->r[28],16); // 801DBFB4
  if (!crb(c,2)) { goto L_801DBFC4; } // 801DBFB8
  c->r[28]=0u+0x00000020u; // 801DBFBC
  goto L_801DC040; // 801DBFC0
L_801DBFC4:;
  c->r[28]=0u+0x00000040u; // 801DBFC4
  goto L_801DC040; // 801DBFC8
L_801DBFCC:;
  cmpu(c,0,c->r[4],0x000000FFu); // 801DBFCC
  c->r[0]=0u+0x00000001u; // 801DBFD0
  if (crb(c,1)) { goto L_801DBFDC; } // 801DBFD4
  c->r[0]=0u+0x00000000u; // 801DBFD8
L_801DBFDC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DBFDC
  if (crb(c,2)) { goto L_801DBFE8; } // 801DBFE0
  goto L_801DBFF4; // 801DBFE4
L_801DBFE8:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 801DBFE8
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801DBFEC
  c->r[4]=R8(c->r[3]+c->r[4]); // 801DBFF0
L_801DBFF4:;
  c->r[4]=c->r[4]+0xFFFFFFC9u; // 801DBFF4
L_801DBFF8:;
  cmpu(c,0,c->r[25],c->r[24]); // 801DBFF8
  if (!crb(c,1)) { goto L_801DC004; } // 801DBFFC
  W32(c->r[23]+0x00000000u,c->r[30]); // 801DC000
L_801DC004:;
  c->r[25]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[17]); // 801DC004
  c->r[0]=addc(c,~c->r[25],0xFFFFFFFFu,1); // 801DC008
  cmpu(c,0,c->r[4],c->r[0]); // 801DC00C
  if (!crb(c,1)) { goto L_801DC018; } // 801DC010
  W32(c->r[23]+0x00000000u,c->r[30]); // 801DC014
L_801DC018:;
  c->r[12]=c->r[19]|c->r[19]; // 801DC018
  c->r[25]=c->r[25]+c->r[4]; // 801DC01C
  c->r[3]=c->r[20]|c->r[20]; // 801DC020
  c->r[28]=0u+0x00000010u; // 801DC024
  c->r[4]=0u+0x00000000u; // 801DC028
  c->r[5]=0u+0x00000000u; // 801DC02C
  c->ctr=c->r[12]; // 801DC030
  c->r[27]=c->r[27]+0x00000001u; // 801DC034
  if (true) { c->lr=0x801DC03Cu; dispatch(c,c->ctr); } // 801DC038
  c->r[4]=c->r[3]|c->r[3]; // 801DC03C
L_801DC040:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[18]); // 801DC040
  if (crb(c,1)) { goto L_801DC058; } // 801DC044
  cmps(c,0,(int32_t)c->r[4],-1); // 801DC048
  if (crb(c,2)) { goto L_801DC058; } // 801DC04C
  c->r[0]=rotl(c->r[28],0)&0x00000060u; cr0(c,c->r[0]); // 801DC050
  if (crb(c,2)) { IRQCHK(c); goto L_801DBD44; } // 801DC054
L_801DC058:;
  c->r[0]=c->r[28]&0x00000034u; cr0(c,c->r[0]); // 801DC058
  if (!crb(c,2)) { goto L_801DC06C; } // 801DC05C
  c->r[25]=0u+0x00000000u; // 801DC060
  W32(c->r[21]+0x00000000u,c->r[25]); // 801DC064
  goto L_801DC078; // 801DC068
L_801DC06C:;
  c->r[3]=c->r[27]+c->r[26]; // 801DC06C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC070
  W32(c->r[21]+0x00000000u,c->r[0]); // 801DC074
L_801DC078:;
  c->r[12]=c->r[19]|c->r[19]; // 801DC078
  c->r[3]=c->r[20]|c->r[20]; // 801DC07C
  c->r[5]=0u+0x00000001u; // 801DC080
  c->ctr=c->r[12]; // 801DC084
  if (true) { c->lr=0x801DC08Cu; dispatch(c,c->ctr); } // 801DC088
  c->r[3]=c->r[25]|c->r[25]; // 801DC08C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=17;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801DC090
  c->r[0]=R32(c->r[1]+0x00000054u); // 801DC094
  c->lr=c->r[0]; // 801DC098
  c->r[1]=c->r[1]+0x00000050u; // 801DC09C
  return; // 801DC0A0
}

// fn_801DC0A4
void f_801DC0A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC0A4
  c->r[0]=c->lr; // 801DC0A8
  c->r[5]=0u+0x801E0000u; // 801DC0AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DC0B0
  c->r[0]=0u+0x00000000u; // 801DC0B4
  c->r[5]=c->r[5]+0xFFFFB858u; // 801DC0B8
  c->r[6]=c->r[1]+0x00000018u; // 801DC0BC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DC0C0
  c->r[31]=0u+0x80000000u; // 801DC0C4
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 801DC0C8
  c->r[7]=c->r[1]+0x00000008u; // 801DC0CC
  W32(c->r[1]+0x00000018u,c->r[3]); // 801DC0D0
  c->r[8]=c->r[1]+0x0000000Cu; // 801DC0D4
  c->r[9]=c->r[1]+0x00000010u; // 801DC0D8
  c->r[3]=0u+0x0000000Au; // 801DC0DC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DC0E0
  c->lr=0x801DC0E8u; f_801DBC90(c); // 801DC0E4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801DC0E8
  cmps(c,0,(int32_t)c->r[0],0); // 801DC0EC
  if (!crb(c,2)) { goto L_801DC120; } // 801DC0F0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801DC0F4
  cmps(c,0,(int32_t)c->r[4],0); // 801DC0F8
  if (!crb(c,2)) { goto L_801DC10C; } // 801DC0FC
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801DC100
  cmpu(c,0,c->r[3],c->r[0]); // 801DC104
  if (crb(c,1)) { goto L_801DC120; } // 801DC108
L_801DC10C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DC10C
  if (crb(c,2)) { goto L_801DC148; } // 801DC110
  c->r[0]=0u+0x80000000u; // 801DC114
  cmpu(c,0,c->r[3],c->r[0]); // 801DC118
  if (!crb(c,1)) { goto L_801DC148; } // 801DC11C
L_801DC120:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801DC120
  c->r[0]=0u+0x00000022u; // 801DC124
  c->r[3]=0u+0x80000000u; // 801DC128
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801DC12C
  c->r[4]=0u-c->r[5]; // 801DC130
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC134
  c->r[3]=c->r[4]|c->r[5]; // 801DC138
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 801DC13C
  c->r[3]=c->r[3]+c->r[0]; // 801DC140
  goto L_801DC154; // 801DC144
L_801DC148:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DC148
  if (crb(c,2)) { goto L_801DC154; } // 801DC14C
  c->r[3]=0u-c->r[3]; // 801DC150
L_801DC154:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DC154
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DC158
  c->lr=c->r[0]; // 801DC15C
  c->r[1]=c->r[1]+0x00000030u; // 801DC160
  return; // 801DC164
}

// fn_801DC168
void f_801DC168(Ctx* __restrict c) {
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801DC168
  f_80004364(c); return; // 801DC16C
}

// wmemcpy
void f_801DC170(Ctx* __restrict c) {
  trace_call(0x801DC170u);
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 801DC170
  f_801D8E54(c); return; // 801DC174
}

// wmemset
void f_801DC178(Ctx* __restrict c) {
  trace_call(0x801DC178u);
  cmps(c,0,(int32_t)c->r[5],0); // 801DC178
  c->r[6]=c->r[3]|c->r[3]; // 801DC17C
  if (crb(c,2)) { goto L_801DC1D0; } // 801DC180
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801DC184
  c->ctr=c->r[0]; // 801DC188
  if (crb(c,2)) { goto L_801DC1C0; } // 801DC18C
L_801DC190:;
  W16(c->r[3]+0x00000000u,c->r[4]); // 801DC190
  W16(c->r[3]+0x00000002u,c->r[4]); // 801DC194
  W16(c->r[3]+0x00000004u,c->r[4]); // 801DC198
  W16(c->r[3]+0x00000006u,c->r[4]); // 801DC19C
  W16(c->r[3]+0x00000008u,c->r[4]); // 801DC1A0
  W16(c->r[3]+0x0000000Au,c->r[4]); // 801DC1A4
  W16(c->r[3]+0x0000000Cu,c->r[4]); // 801DC1A8
  W16(c->r[3]+0x0000000Eu,c->r[4]); // 801DC1AC
  c->r[3]=c->r[3]+0x00000010u; // 801DC1B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC190; } // 801DC1B4
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801DC1B8
  if (crb(c,2)) { goto L_801DC1D0; } // 801DC1BC
L_801DC1C0:;
  c->ctr=c->r[5]; // 801DC1C0
L_801DC1C4:;
  W16(c->r[3]+0x00000000u,c->r[4]); // 801DC1C4
  c->r[3]=c->r[3]+0x00000002u; // 801DC1C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC1C4; } // 801DC1CC
L_801DC1D0:;
  c->r[3]=c->r[6]|c->r[6]; // 801DC1D0
  return; // 801DC1D4
}

// wmemchr
void f_801DC1D8(Ctx* __restrict c) {
  trace_call(0x801DC1D8u);
  c->ctr=c->r[5]; // 801DC1D8
  cmps(c,0,(int32_t)c->r[5],0); // 801DC1DC
  if (crb(c,2)) { goto L_801DC1F8; } // 801DC1E0
L_801DC1E4:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 801DC1E4
  cmpu(c,0,c->r[0],c->r[4]); // 801DC1E8
  if (crb(c,2)) return; // 801DC1EC
  c->r[3]=c->r[3]+0x00000002u; // 801DC1F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC1E4; } // 801DC1F4
L_801DC1F8:;
  c->r[3]=0u+0x00000000u; // 801DC1F8
  return; // 801DC1FC
}

// parse_format_801DC200
void f_801DC200(Ctx* __restrict c) {
  trace_call(0x801DC200u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC200
  c->r[0]=c->lr; // 801DC204
  c->r[6]=0u+0x00000000u; // 801DC208
  c->r[7]=0u+0x00000001u; // 801DC20C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DC210
  c->r[0]=R16(c->r[3]+0x00000002u); // 801DC214
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DC218
  c->r[31]=c->r[3]+0x00000002u; // 801DC21C
  cmpu(c,0,c->r[0],0x00000025u); // 801DC220
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DC224
  c->r[30]=c->r[5]|c->r[5]; // 801DC228
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DC22C
  c->r[29]=c->r[4]|c->r[4]; // 801DC230
  W8(c->r[1]+0x00000008u,c->r[7]); // 801DC234
  W8(c->r[1]+0x00000009u,c->r[6]); // 801DC238
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801DC23C
  W8(c->r[1]+0x0000000Bu,c->r[6]); // 801DC240
  W8(c->r[1]+0x0000000Cu,c->r[6]); // 801DC244
  W32(c->r[1]+0x00000010u,c->r[6]); // 801DC248
  W32(c->r[1]+0x00000014u,c->r[6]); // 801DC24C
  if (!crb(c,2)) { goto L_801DC278; } // 801DC250
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC254
  c->r[3]=c->r[31]+0x00000002u; // 801DC258
  c->r[4]=R32(c->r[1]+0x00000008u); // 801DC25C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801DC260
  W32(c->r[5]+0x00000000u,c->r[4]); // 801DC264
  W32(c->r[5]+0x00000004u,c->r[0]); // 801DC268
  W32(c->r[5]+0x00000008u,c->r[6]); // 801DC26C
  W32(c->r[5]+0x0000000Cu,c->r[6]); // 801DC270
  goto L_801DC774; // 801DC274
L_801DC278:;
  c->r[3]=0u+0x00000002u; // 801DC278
L_801DC27C:;
  cmps(c,0,(int32_t)c->r[0],45); // 801DC27C
  c->r[5]=0u+0x00000001u; // 801DC280
  if (crb(c,2)) { goto L_801DC2AC; } // 801DC284
  cmps(c,0,(int32_t)c->r[0],43); // 801DC288
  if (crb(c,2)) { goto L_801DC2B4; } // 801DC28C
  cmps(c,0,(int32_t)c->r[0],32); // 801DC290
  if (crb(c,2)) { goto L_801DC2BC; } // 801DC294
  cmps(c,0,(int32_t)c->r[0],35); // 801DC298
  if (crb(c,2)) { goto L_801DC2D0; } // 801DC29C
  cmps(c,0,(int32_t)c->r[0],48); // 801DC2A0
  if (crb(c,2)) { goto L_801DC2D8; } // 801DC2A4
  goto L_801DC2EC; // 801DC2A8
L_801DC2AC:;
  W8(c->r[1]+0x00000008u,c->r[6]); // 801DC2AC
  goto L_801DC2F0; // 801DC2B0
L_801DC2B4:;
  W8(c->r[1]+0x00000009u,c->r[7]); // 801DC2B4
  goto L_801DC2F0; // 801DC2B8
L_801DC2BC:;
  c->r[4]=R8(c->r[1]+0x00000009u); // 801DC2BC
  cmpu(c,0,c->r[4],0x00000001u); // 801DC2C0
  if (crb(c,2)) { goto L_801DC2F0; } // 801DC2C4
  W8(c->r[1]+0x00000009u,c->r[3]); // 801DC2C8
  goto L_801DC2F0; // 801DC2CC
L_801DC2D0:;
  W8(c->r[1]+0x0000000Bu,c->r[7]); // 801DC2D0
  goto L_801DC2F0; // 801DC2D4
L_801DC2D8:;
  c->r[4]=R8(c->r[1]+0x00000008u); // 801DC2D8
  cmps(c,0,(int32_t)c->r[4],0); // 801DC2DC
  if (crb(c,2)) { goto L_801DC2F0; } // 801DC2E0
  W8(c->r[1]+0x00000008u,c->r[3]); // 801DC2E4
  goto L_801DC2F0; // 801DC2E8
L_801DC2EC:;
  c->r[5]=0u+0x00000000u; // 801DC2EC
L_801DC2F0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DC2F0
  if (crb(c,2)) { goto L_801DC300; } // 801DC2F4
  {uint32_t ea=c->r[31]+0x00000002u; c->r[0]=R16(ea); c->r[31]=ea;} // 801DC2F8
  IRQCHK(c); goto L_801DC27C; // 801DC2FC
L_801DC300:;
  cmpu(c,0,c->r[0],0x0000002Au); // 801DC300
  if (!crb(c,2)) { goto L_801DC33C; } // 801DC304
  c->r[3]=c->r[29]|c->r[29]; // 801DC308
  c->r[4]=0u+0x00000001u; // 801DC30C
  c->lr=0x801DC314u; f_801D4D60(c); // 801DC310
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DC314
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DC318
  cmps(c,0,(int32_t)c->r[0],0); // 801DC31C
  if (!crb(c,0)) { goto L_801DC334; } // 801DC320
  c->r[0]=0u-c->r[0]; // 801DC324
  c->r[3]=0u+0x00000000u; // 801DC328
  W8(c->r[1]+0x00000008u,c->r[3]); // 801DC32C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DC330
L_801DC334:;
  {uint32_t ea=c->r[31]+0x00000002u; c->r[0]=R16(ea); c->r[31]=ea;} // 801DC334
  goto L_801DC38C; // 801DC338
L_801DC33C:;
  c->r[3]=0u+0x80250000u; // 801DC33C
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DC340
  c->r[5]=R32(c->r[3]+0x00000038u); // 801DC344
  goto L_801DC364; // 801DC348
L_801DC34C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801DC34C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 801DC350
  c->r[3]=c->r[0]+c->r[3]; // 801DC354
  {uint32_t ea=c->r[31]+0x00000002u; c->r[0]=R16(ea); c->r[31]=ea;} // 801DC358
  c->r[3]=c->r[3]+0xFFFFFFD0u; // 801DC35C
  W32(c->r[1]+0x00000010u,c->r[3]); // 801DC360
L_801DC364:;
  cmpu(c,0,c->r[0],0x00000100u); // 801DC364
  if (!crb(c,0)) { goto L_801DC380; } // 801DC368
  c->r[4]=R32(c->r[5]+0x00000014u); // 801DC36C
  c->r[3]=rotl(c->r[0],1)&0x0001FFFEu; // 801DC370
  c->r[3]=R16(c->r[4]+c->r[3]); // 801DC374
  c->r[3]=rotl(c->r[3],0)&0x00000008u; // 801DC378
  goto L_801DC384; // 801DC37C
L_801DC380:;
  c->r[3]=0u+0x00000000u; // 801DC380
L_801DC384:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DC384
  if (!crb(c,2)) { IRQCHK(c); goto L_801DC34C; } // 801DC388
L_801DC38C:;
  c->r[6]=R32(c->r[1]+0x00000010u); // 801DC38C
  cmps(c,0,(int32_t)c->r[6],509); // 801DC390
  if (!crb(c,1)) { goto L_801DC3C8; } // 801DC394
  c->r[3]=0u+0x00010000u; // 801DC398
  c->r[5]=R32(c->r[1]+0x00000008u); // 801DC39C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC3A0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC3A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC3A8
  c->r[3]=c->r[31]+0x00000002u; // 801DC3AC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801DC3B0
  W32(c->r[30]+0x00000000u,c->r[5]); // 801DC3B4
  W32(c->r[30]+0x00000004u,c->r[4]); // 801DC3B8
  W32(c->r[30]+0x00000008u,c->r[6]); // 801DC3BC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801DC3C0
  goto L_801DC774; // 801DC3C4
L_801DC3C8:;
  cmpu(c,0,c->r[0],0x0000002Eu); // 801DC3C8
  if (!crb(c,2)) { goto L_801DC460; } // 801DC3CC
  {uint32_t ea=c->r[31]+0x00000002u; c->r[0]=R16(ea); c->r[31]=ea;} // 801DC3D0
  c->r[3]=0u+0x00000001u; // 801DC3D4
  W8(c->r[1]+0x0000000Au,c->r[3]); // 801DC3D8
  cmpu(c,0,c->r[0],0x0000002Au); // 801DC3DC
  if (!crb(c,2)) { goto L_801DC410; } // 801DC3E0
  c->r[3]=c->r[29]|c->r[29]; // 801DC3E4
  c->r[4]=0u+0x00000001u; // 801DC3E8
  c->lr=0x801DC3F0u; f_801D4D60(c); // 801DC3EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DC3F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC3F4
  cmps(c,0,(int32_t)c->r[0],0); // 801DC3F8
  if (!crb(c,0)) { goto L_801DC408; } // 801DC3FC
  c->r[0]=0u+0x00000000u; // 801DC400
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801DC404
L_801DC408:;
  {uint32_t ea=c->r[31]+0x00000002u; c->r[0]=R16(ea); c->r[31]=ea;} // 801DC408
  goto L_801DC460; // 801DC40C
L_801DC410:;
  c->r[3]=0u+0x80250000u; // 801DC410
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DC414
  c->r[5]=R32(c->r[3]+0x00000038u); // 801DC418
  goto L_801DC438; // 801DC41C
L_801DC420:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 801DC420
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 801DC424
  c->r[3]=c->r[0]+c->r[3]; // 801DC428
  {uint32_t ea=c->r[31]+0x00000002u; c->r[0]=R16(ea); c->r[31]=ea;} // 801DC42C
  c->r[3]=c->r[3]+0xFFFFFFD0u; // 801DC430
  W32(c->r[1]+0x00000014u,c->r[3]); // 801DC434
L_801DC438:;
  cmpu(c,0,c->r[0],0x00000100u); // 801DC438
  if (!crb(c,0)) { goto L_801DC454; } // 801DC43C
  c->r[4]=R32(c->r[5]+0x00000014u); // 801DC440
  c->r[3]=rotl(c->r[0],1)&0x0001FFFEu; // 801DC444
  c->r[3]=R16(c->r[4]+c->r[3]); // 801DC448
  c->r[3]=rotl(c->r[3],0)&0x00000008u; // 801DC44C
  goto L_801DC458; // 801DC450
L_801DC454:;
  c->r[3]=0u+0x00000000u; // 801DC454
L_801DC458:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DC458
  if (!crb(c,2)) { IRQCHK(c); goto L_801DC420; } // 801DC45C
L_801DC460:;
  cmps(c,0,(int32_t)c->r[0],104); // 801DC460
  c->r[5]=0u+0x00000001u; // 801DC464
  if (crb(c,2)) { goto L_801DC498; } // 801DC468
  cmps(c,0,(int32_t)c->r[0],108); // 801DC46C
  if (crb(c,2)) { goto L_801DC4C0; } // 801DC470
  cmps(c,0,(int32_t)c->r[0],76); // 801DC474
  if (crb(c,2)) { goto L_801DC4E8; } // 801DC478
  cmps(c,0,(int32_t)c->r[0],106); // 801DC47C
  if (crb(c,2)) { goto L_801DC4F4; } // 801DC480
  cmps(c,0,(int32_t)c->r[0],116); // 801DC484
  if (crb(c,2)) { goto L_801DC500; } // 801DC488
  cmps(c,0,(int32_t)c->r[0],122); // 801DC48C
  if (crb(c,2)) { goto L_801DC50C; } // 801DC490
  goto L_801DC518; // 801DC494
L_801DC498:;
  c->r[3]=R16(c->r[31]+0x00000002u); // 801DC498
  c->r[4]=0u+0x00000002u; // 801DC49C
  W8(c->r[1]+0x0000000Cu,c->r[4]); // 801DC4A0
  cmpu(c,0,c->r[3],0x00000068u); // 801DC4A4
  if (!crb(c,2)) { goto L_801DC51C; } // 801DC4A8
  c->r[0]=0u+0x00000001u; // 801DC4AC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DC4B0
  c->r[0]=c->r[3]|c->r[3]; // 801DC4B4
  c->r[31]=c->r[31]+0x00000002u; // 801DC4B8
  goto L_801DC51C; // 801DC4BC
L_801DC4C0:;
  c->r[3]=R16(c->r[31]+0x00000002u); // 801DC4C0
  c->r[4]=0u+0x00000003u; // 801DC4C4
  W8(c->r[1]+0x0000000Cu,c->r[4]); // 801DC4C8
  cmpu(c,0,c->r[3],0x0000006Cu); // 801DC4CC
  if (!crb(c,2)) { goto L_801DC51C; } // 801DC4D0
  c->r[0]=0u+0x00000004u; // 801DC4D4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DC4D8
  c->r[0]=c->r[3]|c->r[3]; // 801DC4DC
  c->r[31]=c->r[31]+0x00000002u; // 801DC4E0
  goto L_801DC51C; // 801DC4E4
L_801DC4E8:;
  c->r[3]=0u+0x00000009u; // 801DC4E8
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801DC4EC
  goto L_801DC51C; // 801DC4F0
L_801DC4F4:;
  c->r[3]=0u+0x00000006u; // 801DC4F4
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801DC4F8
  goto L_801DC51C; // 801DC4FC
L_801DC500:;
  c->r[3]=0u+0x00000008u; // 801DC500
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801DC504
  goto L_801DC51C; // 801DC508
L_801DC50C:;
  c->r[3]=0u+0x00000007u; // 801DC50C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801DC510
  goto L_801DC51C; // 801DC514
L_801DC518:;
  c->r[5]=0u+0x00000000u; // 801DC518
L_801DC51C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DC51C
  if (crb(c,2)) { goto L_801DC528; } // 801DC520
  {uint32_t ea=c->r[31]+0x00000002u; c->r[0]=R16(ea); c->r[31]=ea;} // 801DC524
L_801DC528:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DC528
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC52C
  c->r[0]=c->r[3]+0xFFFFFFBFu; // 801DC530
  cmpu(c,0,c->r[0],0x00000037u); // 801DC534
  if (crb(c,1)) { goto L_801DC744; } // 801DC538
  c->r[3]=0u+0x80250000u; // 801DC53C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DC540
  c->r[3]=c->r[3]+0xFFFF9F70u; // 801DC544
  c->r[3]=R32(c->r[3]+c->r[0]); // 801DC548
  c->ctr=c->r[3]; // 801DC54C
  if (true) { switch (c->ctr) { case 0x801DC554u: goto L_801DC554; case 0x801DC598u: goto L_801DC598; case 0x801DC5E4u: goto L_801DC5E4; case 0x801DC634u: goto L_801DC634; case 0x801DC648u: goto L_801DC648; case 0x801DC69Cu: goto L_801DC69C; case 0x801DC6C0u: goto L_801DC6C0; case 0x801DC6FCu: goto L_801DC6FC; case 0x801DC72Cu: goto L_801DC72C; case 0x801DC744u: goto L_801DC744; default: break; } dispatch(c,c->ctr); return; } // 801DC550
L_801DC554:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DC554
  cmpu(c,0,c->r[0],0x00000009u); // 801DC558
  if (!crb(c,2)) { goto L_801DC568; } // 801DC55C
  c->r[0]=0u+0x00000004u; // 801DC560
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DC564
L_801DC568:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801DC568
  cmps(c,0,(int32_t)c->r[0],0); // 801DC56C
  if (!crb(c,2)) { goto L_801DC580; } // 801DC570
  c->r[0]=0u+0x00000001u; // 801DC574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC578
  goto L_801DC750; // 801DC57C
L_801DC580:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801DC580
  cmpu(c,0,c->r[0],0x00000002u); // 801DC584
  if (!crb(c,2)) { goto L_801DC750; } // 801DC588
  c->r[0]=0u+0x00000001u; // 801DC58C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DC590
  goto L_801DC750; // 801DC594
L_801DC598:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801DC598
  c->r[0]=c->r[3]+0x000000FAu; // 801DC59C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DC5A0
  cmpu(c,0,c->r[0],0x00000002u); // 801DC5A4
  if (!crb(c,1)) { goto L_801DC5BC; } // 801DC5A8
  cmpu(c,0,c->r[3],0x00000002u); // 801DC5AC
  if (crb(c,2)) { goto L_801DC5BC; } // 801DC5B0
  cmpu(c,0,c->r[3],0x00000004u); // 801DC5B4
  if (!crb(c,2)) { goto L_801DC5CC; } // 801DC5B8
L_801DC5BC:;
  c->r[3]=0u+0x00010000u; // 801DC5BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC5C0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC5C4
  goto L_801DC750; // 801DC5C8
L_801DC5CC:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801DC5CC
  cmps(c,0,(int32_t)c->r[0],0); // 801DC5D0
  if (!crb(c,2)) { goto L_801DC750; } // 801DC5D4
  c->r[0]=0u+0x00000006u; // 801DC5D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC5DC
  goto L_801DC750; // 801DC5E0
L_801DC5E4:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801DC5E4
  cmps(c,0,(int32_t)c->r[0],0); // 801DC5E8
  if (!crb(c,2)) { goto L_801DC5F8; } // 801DC5EC
  c->r[0]=0u+0x0000000Du; // 801DC5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC5F4
L_801DC5F8:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801DC5F8
  c->r[0]=c->r[3]+0x000000FAu; // 801DC5FC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DC600
  cmpu(c,0,c->r[0],0x00000002u); // 801DC604
  if (!crb(c,1)) { goto L_801DC624; } // 801DC608
  c->r[0]=c->r[3]+0x000000FFu; // 801DC60C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DC610
  cmpu(c,0,c->r[0],0x00000001u); // 801DC614
  if (!crb(c,1)) { goto L_801DC624; } // 801DC618
  cmpu(c,0,c->r[3],0x00000004u); // 801DC61C
  if (!crb(c,2)) { goto L_801DC750; } // 801DC620
L_801DC624:;
  c->r[3]=0u+0x00010000u; // 801DC624
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC628
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC62C
  goto L_801DC750; // 801DC630
L_801DC634:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC634
  cmps(c,0,(int32_t)c->r[0],0); // 801DC638
  if (!crb(c,2)) { goto L_801DC648; } // 801DC63C
  c->r[0]=0u+0x00000001u; // 801DC640
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC644
L_801DC648:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801DC648
  c->r[0]=c->r[3]+0x000000FAu; // 801DC64C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DC650
  cmpu(c,0,c->r[0],0x00000002u); // 801DC654
  if (!crb(c,1)) { goto L_801DC674; } // 801DC658
  c->r[0]=c->r[3]+0x000000FFu; // 801DC65C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DC660
  cmpu(c,0,c->r[0],0x00000001u); // 801DC664
  if (!crb(c,1)) { goto L_801DC674; } // 801DC668
  cmpu(c,0,c->r[3],0x00000004u); // 801DC66C
  if (!crb(c,2)) { goto L_801DC684; } // 801DC670
L_801DC674:;
  c->r[3]=0u+0x00010000u; // 801DC674
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC678
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC67C
  goto L_801DC750; // 801DC680
L_801DC684:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801DC684
  cmps(c,0,(int32_t)c->r[0],0); // 801DC688
  if (!crb(c,2)) { goto L_801DC750; } // 801DC68C
  c->r[0]=0u+0x00000006u; // 801DC690
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC694
  goto L_801DC750; // 801DC698
L_801DC69C:;
  c->r[5]=0u+0x00000003u; // 801DC69C
  c->r[4]=0u+0x00000001u; // 801DC6A0
  c->r[3]=0u+0x00000078u; // 801DC6A4
  c->r[0]=0u+0x00000008u; // 801DC6A8
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 801DC6AC
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 801DC6B0
  W16(c->r[1]+0x0000000Eu,c->r[3]); // 801DC6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC6B8
  goto L_801DC750; // 801DC6BC
L_801DC6C0:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 801DC6C0
  cmpu(c,0,c->r[3],0x00000003u); // 801DC6C4
  if (!crb(c,2)) { goto L_801DC6D8; } // 801DC6C8
  c->r[0]=0u+0x00000005u; // 801DC6CC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DC6D0
  goto L_801DC750; // 801DC6D4
L_801DC6D8:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801DC6D8
  cmps(c,0,(int32_t)c->r[0],0); // 801DC6DC
  if (!crb(c,2)) { goto L_801DC6EC; } // 801DC6E0
  cmps(c,0,(int32_t)c->r[3],0); // 801DC6E4
  if (crb(c,2)) { goto L_801DC750; } // 801DC6E8
L_801DC6EC:;
  c->r[3]=0u+0x00010000u; // 801DC6EC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC6F0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC6F4
  goto L_801DC750; // 801DC6F8
L_801DC6FC:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DC6FC
  cmpu(c,0,c->r[0],0x00000003u); // 801DC700
  if (!crb(c,2)) { goto L_801DC714; } // 801DC704
  c->r[0]=0u+0x00000005u; // 801DC708
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DC70C
  goto L_801DC750; // 801DC710
L_801DC714:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DC714
  if (crb(c,2)) { goto L_801DC750; } // 801DC718
  c->r[3]=0u+0x00010000u; // 801DC71C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC720
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC724
  goto L_801DC750; // 801DC728
L_801DC72C:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DC72C
  cmpu(c,0,c->r[0],0x00000009u); // 801DC730
  if (!crb(c,2)) { goto L_801DC750; } // 801DC734
  c->r[0]=0u+0x00000004u; // 801DC738
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DC73C
  goto L_801DC750; // 801DC740
L_801DC744:;
  c->r[3]=0u+0x00010000u; // 801DC744
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DC748
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DC74C
L_801DC750:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 801DC750
  c->r[3]=c->r[31]+0x00000002u; // 801DC754
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801DC758
  c->r[4]=R32(c->r[1]+0x00000010u); // 801DC75C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC760
  W32(c->r[30]+0x00000000u,c->r[6]); // 801DC764
  W32(c->r[30]+0x00000004u,c->r[5]); // 801DC768
  W32(c->r[30]+0x00000008u,c->r[4]); // 801DC76C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801DC770
L_801DC774:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DC774
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DC778
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DC77C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DC780
  c->lr=c->r[0]; // 801DC784
  c->r[1]=c->r[1]+0x00000030u; // 801DC788
  return; // 801DC78C
}

// long2str_801DC790
void f_801DC790(Ctx* __restrict c) {
  trace_call(0x801DC790u);
  cmps(c,0,(int32_t)c->r[3],0); // 801DC790
  c->r[8]=0u+0x00000000u; // 801DC794
  W16(c->r[4]+0xFFFFFFFEu,c->r[8]); // 801DC798
  c->r[6]=c->r[4]+0xFFFFFFFEu; // 801DC79C
  c->r[7]=0u+0x00000000u; // 801DC7A0
  if (!crb(c,2)) { goto L_801DC7D4; } // 801DC7A4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801DC7A8
  cmps(c,0,(int32_t)c->r[0],0); // 801DC7AC
  if (!crb(c,2)) { goto L_801DC7D4; } // 801DC7B0
  c->r[0]=R8(c->r[5]+0x00000003u); // 801DC7B4
  cmps(c,0,(int32_t)c->r[0],0); // 801DC7B8
  if (crb(c,2)) { goto L_801DC7CC; } // 801DC7BC
  c->r[0]=R16(c->r[5]+0x00000006u); // 801DC7C0
  cmpu(c,0,c->r[0],0x0000006Fu); // 801DC7C4
  if (crb(c,2)) { goto L_801DC7D4; } // 801DC7C8
L_801DC7CC:;
  c->r[3]=c->r[6]|c->r[6]; // 801DC7CC
  return; // 801DC7D0
L_801DC7D4:;
  c->r[9]=R16(c->r[5]+0x00000006u); // 801DC7D4
  cmps(c,0,(int32_t)c->r[9],100); // 801DC7D8
  if (crb(c,2)) { goto L_801DC80C; } // 801DC7DC
  cmps(c,0,(int32_t)c->r[9],105); // 801DC7E0
  if (crb(c,2)) { goto L_801DC80C; } // 801DC7E4
  cmps(c,0,(int32_t)c->r[9],111); // 801DC7E8
  if (crb(c,2)) { goto L_801DC830; } // 801DC7EC
  cmps(c,0,(int32_t)c->r[9],117); // 801DC7F0
  if (crb(c,2)) { goto L_801DC840; } // 801DC7F4
  cmps(c,0,(int32_t)c->r[9],120); // 801DC7F8
  if (crb(c,2)) { goto L_801DC850; } // 801DC7FC
  cmps(c,0,(int32_t)c->r[9],88); // 801DC800
  if (crb(c,2)) { goto L_801DC850; } // 801DC804
  goto L_801DC85C; // 801DC808
L_801DC80C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DC80C
  c->r[0]=0u+0x0000000Au; // 801DC810
  if (!crb(c,0)) { goto L_801DC85C; } // 801DC814
  c->r[8]=c->r[3]+0x80000000u; // 801DC818
  cmpu(c,0,c->r[8],0x00000000u); // 801DC81C
  if (crb(c,2)) { goto L_801DC828; } // 801DC820
  c->r[3]=0u-c->r[3]; // 801DC824
L_801DC828:;
  c->r[8]=0u+0x00000001u; // 801DC828
  goto L_801DC85C; // 801DC82C
L_801DC830:;
  c->r[0]=0u+0x00000000u; // 801DC830
  W8(c->r[5]+0x00000001u,c->r[0]); // 801DC834
  c->r[0]=0u+0x00000008u; // 801DC838
  goto L_801DC85C; // 801DC83C
L_801DC840:;
  c->r[0]=0u+0x00000000u; // 801DC840
  W8(c->r[5]+0x00000001u,c->r[0]); // 801DC844
  c->r[0]=0u+0x0000000Au; // 801DC848
  goto L_801DC85C; // 801DC84C
L_801DC850:;
  c->r[0]=0u+0x00000000u; // 801DC850
  W8(c->r[5]+0x00000001u,c->r[0]); // 801DC854
  c->r[0]=0u+0x00000010u; // 801DC858
L_801DC85C:;
  c->r[9]=divwu(c->r[3],c->r[0]); // 801DC85C
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 801DC860
  c->r[11]=c->r[3]-c->r[9]; // 801DC864
  c->r[3]=divwu(c->r[3],c->r[0]); // 801DC868
  cmps(c,0,(int32_t)c->r[11],10); // 801DC86C
  if (!crb(c,0)) { goto L_801DC87C; } // 801DC870
  c->r[11]=c->r[11]+0x00000030u; // 801DC874
  goto L_801DC894; // 801DC878
L_801DC87C:;
  c->r[9]=R16(c->r[5]+0x00000006u); // 801DC87C
  c->r[10]=c->r[11]+0x00000037u; // 801DC880
  cmpu(c,0,c->r[9],0x00000078u); // 801DC884
  if (!crb(c,2)) { goto L_801DC890; } // 801DC888
  c->r[10]=c->r[11]+0x00000057u; // 801DC88C
L_801DC890:;
  c->r[11]=c->r[10]|c->r[10]; // 801DC890
L_801DC894:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DC894
  W16(c->r[6]+0xFFFFFFFEu,c->r[11]); // 801DC898
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 801DC89C
  c->r[7]=c->r[7]+0x00000001u; // 801DC8A0
  if (!crb(c,2)) { IRQCHK(c); goto L_801DC85C; } // 801DC8A4
  cmpu(c,0,c->r[0],0x00000008u); // 801DC8A8
  if (!crb(c,2)) { goto L_801DC8D4; } // 801DC8AC
  c->r[3]=R8(c->r[5]+0x00000003u); // 801DC8B0
  cmps(c,0,(int32_t)c->r[3],0); // 801DC8B4
  if (crb(c,2)) { goto L_801DC8D4; } // 801DC8B8
  c->r[3]=R16(c->r[6]+0x00000000u); // 801DC8BC
  cmpu(c,0,c->r[3],0x00000030u); // 801DC8C0
  if (crb(c,2)) { goto L_801DC8D4; } // 801DC8C4
  c->r[3]=0u+0x00000030u; // 801DC8C8
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[3]); c->r[6]=ea;} // 801DC8CC
  c->r[7]=c->r[7]+0x00000001u; // 801DC8D0
L_801DC8D4:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 801DC8D4
  cmpu(c,0,c->r[3],0x00000002u); // 801DC8D8
  if (!crb(c,2)) { goto L_801DC928; } // 801DC8DC
  c->r[3]=R32(c->r[5]+0x00000008u); // 801DC8E0
  cmps(c,0,(int32_t)c->r[8],0); // 801DC8E4
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801DC8E8
  if (!crb(c,2)) { goto L_801DC8FC; } // 801DC8EC
  c->r[3]=R8(c->r[5]+0x00000001u); // 801DC8F0
  cmps(c,0,(int32_t)c->r[3],0); // 801DC8F4
  if (crb(c,2)) { goto L_801DC908; } // 801DC8F8
L_801DC8FC:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 801DC8FC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DC900
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801DC904
L_801DC908:;
  cmpu(c,0,c->r[0],0x00000010u); // 801DC908
  if (!crb(c,2)) { goto L_801DC928; } // 801DC90C
  c->r[3]=R8(c->r[5]+0x00000003u); // 801DC910
  cmps(c,0,(int32_t)c->r[3],0); // 801DC914
  if (crb(c,2)) { goto L_801DC928; } // 801DC918
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 801DC91C
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 801DC920
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801DC924
L_801DC928:;
  c->r[4]=c->r[4]-c->r[6]; // 801DC928
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 801DC92C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801DC930
  c->r[3]=c->r[3]+c->r[4]; // 801DC934
  c->r[3]=sraw(c,c->r[3],1); // 801DC938
  c->r[3]=c->r[9]+c->r[3]; // 801DC93C
  cmps(c,0,(int32_t)c->r[3],509); // 801DC940
  if (!crb(c,1)) { goto L_801DC950; } // 801DC944
  c->r[3]=0u+0x00000000u; // 801DC948
  return; // 801DC94C
L_801DC950:;
  c->r[4]=0u+0x00000030u; // 801DC950
  goto L_801DC960; // 801DC954
L_801DC958:;
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[4]); c->r[6]=ea;} // 801DC958
  c->r[7]=c->r[7]+0x00000001u; // 801DC95C
L_801DC960:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 801DC960
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 801DC964
  if (crb(c,0)) { IRQCHK(c); goto L_801DC958; } // 801DC968
  cmpu(c,0,c->r[0],0x00000010u); // 801DC96C
  if (!crb(c,2)) { goto L_801DC990; } // 801DC970
  c->r[0]=R8(c->r[5]+0x00000003u); // 801DC974
  cmps(c,0,(int32_t)c->r[0],0); // 801DC978
  if (crb(c,2)) { goto L_801DC990; } // 801DC97C
  c->r[3]=R16(c->r[5]+0x00000006u); // 801DC980
  c->r[0]=0u+0x00000030u; // 801DC984
  W16(c->r[6]+0xFFFFFFFEu,c->r[3]); // 801DC988
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; W16(ea,c->r[0]); c->r[6]=ea;} // 801DC98C
L_801DC990:;
  cmps(c,0,(int32_t)c->r[8],0); // 801DC990
  if (crb(c,2)) { goto L_801DC9A4; } // 801DC994
  c->r[0]=0u+0x0000002Du; // 801DC998
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[6]=ea;} // 801DC99C
  goto L_801DC9CC; // 801DC9A0
L_801DC9A4:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 801DC9A4
  cmpu(c,0,c->r[0],0x00000001u); // 801DC9A8
  if (!crb(c,2)) { goto L_801DC9BC; } // 801DC9AC
  c->r[0]=0u+0x0000002Bu; // 801DC9B0
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[6]=ea;} // 801DC9B4
  goto L_801DC9CC; // 801DC9B8
L_801DC9BC:;
  cmpu(c,0,c->r[0],0x00000002u); // 801DC9BC
  if (!crb(c,2)) { goto L_801DC9CC; } // 801DC9C0
  c->r[0]=0u+0x00000020u; // 801DC9C4
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[6]=ea;} // 801DC9C8
L_801DC9CC:;
  c->r[3]=c->r[6]|c->r[6]; // 801DC9CC
  return; // 801DC9D0
}

// longlong2str_801DC9D4
void f_801DC9D4(Ctx* __restrict c) {
  trace_call(0x801DC9D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC9D4
  c->r[0]=c->lr; // 801DC9D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DC9DC
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 801DC9E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801DC9E4
  c->r[25]=0u+0x00000000u; // 801DC9E8
  c->r[31]=c->r[3]|c->r[3]; // 801DC9EC
  c->r[30]=c->r[4]|c->r[4]; // 801DC9F0
  c->r[23]=c->r[5]|c->r[5]; // 801DC9F4
  c->r[24]=c->r[6]|c->r[6]; // 801DC9F8
  c->r[27]=c->r[5]+0xFFFFFFFEu; // 801DC9FC
  c->r[26]=0u+0x00000000u; // 801DCA00
  W16(c->r[5]+0xFFFFFFFEu,c->r[25]); // 801DCA04
  if (!crb(c,2)) { goto L_801DCA38; } // 801DCA08
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801DCA0C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCA10
  if (!crb(c,2)) { goto L_801DCA38; } // 801DCA14
  c->r[0]=R8(c->r[6]+0x00000003u); // 801DCA18
  cmps(c,0,(int32_t)c->r[0],0); // 801DCA1C
  if (crb(c,2)) { goto L_801DCA30; } // 801DCA20
  c->r[0]=R16(c->r[6]+0x00000006u); // 801DCA24
  cmpu(c,0,c->r[0],0x0000006Fu); // 801DCA28
  if (crb(c,2)) { goto L_801DCA38; } // 801DCA2C
L_801DCA30:;
  c->r[3]=c->r[27]|c->r[27]; // 801DCA30
  goto L_801DCC7C; // 801DCA34
L_801DCA38:;
  c->r[0]=R16(c->r[6]+0x00000006u); // 801DCA38
  cmps(c,0,(int32_t)c->r[0],100); // 801DCA3C
  if (crb(c,2)) { goto L_801DCA70; } // 801DCA40
  cmps(c,0,(int32_t)c->r[0],105); // 801DCA44
  if (crb(c,2)) { goto L_801DCA70; } // 801DCA48
  cmps(c,0,(int32_t)c->r[0],111); // 801DCA4C
  if (crb(c,2)) { goto L_801DCAB4; } // 801DCA50
  cmps(c,0,(int32_t)c->r[0],117); // 801DCA54
  if (crb(c,2)) { goto L_801DCAC4; } // 801DCA58
  cmps(c,0,(int32_t)c->r[0],120); // 801DCA5C
  if (crb(c,2)) { goto L_801DCAD4; } // 801DCA60
  cmps(c,0,(int32_t)c->r[0],88); // 801DCA64
  if (crb(c,2)) { goto L_801DCAD4; } // 801DCA68
  goto L_801DCAE0; // 801DCA6C
L_801DCA70:;
  c->r[29]=0u+0x00000000u; // 801DCA70
  c->r[0]=c->r[3]^0x80000000u; // 801DCA74
  c->r[6]=c->r[29]^0x80000000u; // 801DCA78
  c->r[28]=0u+0x0000000Au; // 801DCA7C
  c->r[5]=addc(c,~c->r[29],c->r[4],1); // 801DCA80
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 801DCA84
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801DCA88
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801DCA8C
  if (crb(c,2)) { goto L_801DCAE0; } // 801DCA90
  c->r[0]=0u+0x80000000u; // 801DCA94
  c->r[0]=c->r[3]^c->r[0]; // 801DCA98
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 801DCA9C
  if (crb(c,2)) { goto L_801DCAAC; } // 801DCAA0
  c->r[30]=addc(c,~c->r[4],0x00000000u,1); // 801DCAA4
  c->r[31]=addc(c,~c->r[3],0,c->xer_ca); // 801DCAA8
L_801DCAAC:;
  c->r[25]=0u+0x00000001u; // 801DCAAC
  goto L_801DCAE0; // 801DCAB0
L_801DCAB4:;
  c->r[29]=0u+0x00000000u; // 801DCAB4
  W8(c->r[6]+0x00000001u,c->r[29]); // 801DCAB8
  c->r[28]=0u+0x00000008u; // 801DCABC
  goto L_801DCAE0; // 801DCAC0
L_801DCAC4:;
  c->r[29]=0u+0x00000000u; // 801DCAC4
  W8(c->r[6]+0x00000001u,c->r[29]); // 801DCAC8
  c->r[28]=0u+0x0000000Au; // 801DCACC
  goto L_801DCAE0; // 801DCAD0
L_801DCAD4:;
  c->r[29]=0u+0x00000000u; // 801DCAD4
  W8(c->r[6]+0x00000001u,c->r[29]); // 801DCAD8
  c->r[28]=0u+0x00000010u; // 801DCADC
L_801DCAE0:;
  c->r[3]=c->r[31]|c->r[31]; // 801DCAE0
  c->r[4]=c->r[30]|c->r[30]; // 801DCAE4
  c->r[5]=c->r[29]|c->r[29]; // 801DCAE8
  c->r[6]=c->r[28]|c->r[28]; // 801DCAEC
  c->lr=0x801DCAF4u; f_801D5D08(c); // 801DCAF0
  c->r[22]=c->r[4]|c->r[4]; // 801DCAF4
  c->r[3]=c->r[31]|c->r[31]; // 801DCAF8
  c->r[4]=c->r[30]|c->r[30]; // 801DCAFC
  c->r[5]=c->r[29]|c->r[29]; // 801DCB00
  c->r[6]=c->r[28]|c->r[28]; // 801DCB04
  c->lr=0x801DCB0Cu; f_801D5AE4(c); // 801DCB08
  cmps(c,0,(int32_t)c->r[22],10); // 801DCB0C
  c->r[30]=c->r[4]|c->r[4]; // 801DCB10
  c->r[31]=c->r[3]|c->r[3]; // 801DCB14
  if (!crb(c,0)) { goto L_801DCB24; } // 801DCB18
  c->r[5]=c->r[22]+0x00000030u; // 801DCB1C
  goto L_801DCB38; // 801DCB20
L_801DCB24:;
  c->r[0]=R16(c->r[24]+0x00000006u); // 801DCB24
  c->r[5]=c->r[22]+0x00000037u; // 801DCB28
  cmpu(c,0,c->r[0],0x00000078u); // 801DCB2C
  if (!crb(c,2)) { goto L_801DCB38; } // 801DCB30
  c->r[5]=c->r[22]+0x00000057u; // 801DCB34
L_801DCB38:;
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 801DCB38
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[5]); c->r[27]=ea;} // 801DCB3C
  c->r[26]=c->r[26]+0x00000001u; // 801DCB40
  if (!crb(c,2)) { IRQCHK(c); goto L_801DCAE0; } // 801DCB44
  c->r[0]=c->r[28]^0x00000008u; // 801DCB48
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 801DCB4C
  if (!crb(c,2)) { goto L_801DCB78; } // 801DCB50
  c->r[0]=R8(c->r[24]+0x00000003u); // 801DCB54
  cmps(c,0,(int32_t)c->r[0],0); // 801DCB58
  if (crb(c,2)) { goto L_801DCB78; } // 801DCB5C
  c->r[0]=R16(c->r[27]+0x00000000u); // 801DCB60
  cmpu(c,0,c->r[0],0x00000030u); // 801DCB64
  if (crb(c,2)) { goto L_801DCB78; } // 801DCB68
  c->r[0]=0u+0x00000030u; // 801DCB6C
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[27]=ea;} // 801DCB70
  c->r[26]=c->r[26]+0x00000001u; // 801DCB74
L_801DCB78:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 801DCB78
  cmpu(c,0,c->r[0],0x00000002u); // 801DCB7C
  if (!crb(c,2)) { goto L_801DCBD0; } // 801DCB80
  c->r[0]=R32(c->r[24]+0x00000008u); // 801DCB84
  cmps(c,0,(int32_t)c->r[25],0); // 801DCB88
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 801DCB8C
  if (!crb(c,2)) { goto L_801DCBA0; } // 801DCB90
  c->r[0]=R8(c->r[24]+0x00000001u); // 801DCB94
  cmps(c,0,(int32_t)c->r[0],0); // 801DCB98
  if (crb(c,2)) { goto L_801DCBAC; } // 801DCB9C
L_801DCBA0:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 801DCBA0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DCBA4
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 801DCBA8
L_801DCBAC:;
  c->r[0]=c->r[28]^0x00000010u; // 801DCBAC
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 801DCBB0
  if (!crb(c,2)) { goto L_801DCBD0; } // 801DCBB4
  c->r[0]=R8(c->r[24]+0x00000003u); // 801DCBB8
  cmps(c,0,(int32_t)c->r[0],0); // 801DCBBC
  if (crb(c,2)) { goto L_801DCBD0; } // 801DCBC0
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 801DCBC4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DCBC8
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 801DCBCC
L_801DCBD0:;
  c->r[3]=c->r[23]-c->r[27]; // 801DCBD0
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 801DCBD4
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801DCBD8
  c->r[0]=c->r[0]+c->r[3]; // 801DCBDC
  c->r[0]=sraw(c,c->r[0],1); // 801DCBE0
  c->r[0]=c->r[4]+c->r[0]; // 801DCBE4
  cmps(c,0,(int32_t)c->r[0],509); // 801DCBE8
  if (!crb(c,1)) { goto L_801DCBF8; } // 801DCBEC
  c->r[3]=0u+0x00000000u; // 801DCBF0
  goto L_801DCC7C; // 801DCBF4
L_801DCBF8:;
  c->r[3]=0u+0x00000030u; // 801DCBF8
  goto L_801DCC08; // 801DCBFC
L_801DCC00:;
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[3]); c->r[27]=ea;} // 801DCC00
  c->r[26]=c->r[26]+0x00000001u; // 801DCC04
L_801DCC08:;
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 801DCC08
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 801DCC0C
  if (crb(c,0)) { IRQCHK(c); goto L_801DCC00; } // 801DCC10
  c->r[0]=c->r[28]^0x00000010u; // 801DCC14
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 801DCC18
  if (!crb(c,2)) { goto L_801DCC3C; } // 801DCC1C
  c->r[0]=R8(c->r[24]+0x00000003u); // 801DCC20
  cmps(c,0,(int32_t)c->r[0],0); // 801DCC24
  if (crb(c,2)) { goto L_801DCC3C; } // 801DCC28
  c->r[3]=R16(c->r[24]+0x00000006u); // 801DCC2C
  c->r[0]=0u+0x00000030u; // 801DCC30
  W16(c->r[27]+0xFFFFFFFEu,c->r[3]); // 801DCC34
  {uint32_t ea=c->r[27]+0xFFFFFFFCu; W16(ea,c->r[0]); c->r[27]=ea;} // 801DCC38
L_801DCC3C:;
  cmps(c,0,(int32_t)c->r[25],0); // 801DCC3C
  if (crb(c,2)) { goto L_801DCC50; } // 801DCC40
  c->r[0]=0u+0x0000002Du; // 801DCC44
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[27]=ea;} // 801DCC48
  goto L_801DCC78; // 801DCC4C
L_801DCC50:;
  c->r[0]=R8(c->r[24]+0x00000001u); // 801DCC50
  cmpu(c,0,c->r[0],0x00000001u); // 801DCC54
  if (!crb(c,2)) { goto L_801DCC68; } // 801DCC58
  c->r[0]=0u+0x0000002Bu; // 801DCC5C
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[27]=ea;} // 801DCC60
  goto L_801DCC78; // 801DCC64
L_801DCC68:;
  cmpu(c,0,c->r[0],0x00000002u); // 801DCC68
  if (!crb(c,2)) { goto L_801DCC78; } // 801DCC6C
  c->r[0]=0u+0x00000020u; // 801DCC70
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[27]=ea;} // 801DCC74
L_801DCC78:;
  c->r[3]=c->r[27]|c->r[27]; // 801DCC78
L_801DCC7C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801DCC7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DCC80
  c->lr=c->r[0]; // 801DCC84
  c->r[1]=c->r[1]+0x00000030u; // 801DCC88
  return; // 801DCC8C
}

// double2hex_801DCC90
void f_801DCC90(Ctx* __restrict c) {
  trace_call(0x801DCC90u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCC90
  c->r[0]=c->lr; // 801DCC94
  c->r[5]=0u+0x80250000u; // 801DCC98
  W32(c->r[1]+0x00000094u,c->r[0]); // 801DCC9C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 801DCCA0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 801DCCA4
  c->f[31]=c->f[1]; // 801DCCA8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801DCCAC
  W32(c->r[1]+0x00000078u,c->r[30]); // 801DCCB0
  c->r[30]=c->r[4]|c->r[4]; // 801DCCB4
  W32(c->r[1]+0x00000074u,c->r[29]); // 801DCCB8
  c->r[29]=c->r[3]|c->r[3]; // 801DCCBC
  W32(c->r[1]+0x00000070u,c->r[28]); // 801DCCC0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801DCCC4
  c->r[5]=R32(c->r[5]+0xFFFF9B48u); // 801DCCC8
  cmps(c,0,(int32_t)c->r[0],509); // 801DCCCC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DCCD0
  c->r[31]=R8(c->r[5]+0x00000000u); // 801DCCD4
  if (!crb(c,1)) { goto L_801DCCE4; } // 801DCCD8
  c->r[3]=0u+0x00000000u; // 801DCCDC
  goto L_801DD0BC; // 801DCCE0
L_801DCCE4:;
  c->r[28]=0u+0x00000000u; // 801DCCE4
  c->r[0]=0u+0x00000020u; // 801DCCE8
  W8(c->r[1]+0x00000010u,c->r[28]); // 801DCCEC
  c->r[3]=c->r[1]+0x00000010u; // 801DCCF0
  c->r[4]=c->r[1]+0x00000038u; // 801DCCF4
  W16(c->r[1]+0x00000012u,c->r[0]); // 801DCCF8
  c->lr=0x801DCD00u; f_801D8214(c); // 801DCCFC
  c->r[0]=R8(c->r[1]+0x0000003Du); // 801DCD00
  cmps(c,0,(int32_t)c->r[0],48); // 801DCD04
  if (crb(c,2)) { goto L_801DCD20; } // 801DCD08
  cmps(c,0,(int32_t)c->r[0],73); // 801DCD0C
  if (crb(c,2)) { goto L_801DCDB0; } // 801DCD10
  cmps(c,0,(int32_t)c->r[0],78); // 801DCD14
  if (crb(c,2)) { goto L_801DCE40; } // 801DCD18
  goto L_801DCED0; // 801DCD1C
L_801DCD20:;
  c->r[0]=R8(c->r[1]+0x00000038u); // 801DCD20
  W16(c->r[1]+0x0000003Au,c->r[28]); // 801DCD24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DCD28
  if (crb(c,2)) { goto L_801DCD6C; } // 801DCD2C
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DCD30
  c->r[28]=c->r[29]+0xFFFFFFF6u; // 801DCD34
  cmpu(c,0,c->r[0],0x00000041u); // 801DCD38
  if (!crb(c,2)) { goto L_801DCD54; } // 801DCD3C
  c->r[4]=0u+0x80250000u; // 801DCD40
  c->r[3]=c->r[28]|c->r[28]; // 801DCD44
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCD48
  c->lr=0x801DCD50u; f_801DE43C(c); // 801DCD4C
  goto L_801DCDA8; // 801DCD50
L_801DCD54:;
  c->r[4]=0u+0x80250000u; // 801DCD54
  c->r[3]=c->r[28]|c->r[28]; // 801DCD58
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCD5C
  c->r[4]=c->r[4]+0x0000000Au; // 801DCD60
  c->lr=0x801DCD68u; f_801DE43C(c); // 801DCD64
  goto L_801DCDA8; // 801DCD68
L_801DCD6C:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DCD6C
  c->r[28]=c->r[29]+0xFFFFFFF8u; // 801DCD70
  cmpu(c,0,c->r[0],0x00000041u); // 801DCD74
  if (!crb(c,2)) { goto L_801DCD94; } // 801DCD78
  c->r[4]=0u+0x80250000u; // 801DCD7C
  c->r[3]=c->r[28]|c->r[28]; // 801DCD80
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCD84
  c->r[4]=c->r[4]+0x00000014u; // 801DCD88
  c->lr=0x801DCD90u; f_801DE43C(c); // 801DCD8C
  goto L_801DCDA8; // 801DCD90
L_801DCD94:;
  c->r[4]=0u+0x80250000u; // 801DCD94
  c->r[3]=c->r[28]|c->r[28]; // 801DCD98
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCD9C
  c->r[4]=c->r[4]+0x0000001Cu; // 801DCDA0
  c->lr=0x801DCDA8u; f_801DE43C(c); // 801DCDA4
L_801DCDA8:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCDA8
  goto L_801DD0BC; // 801DCDAC
L_801DCDB0:;
  c->r[0]=R8(c->r[1]+0x00000038u); // 801DCDB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DCDB4
  if (crb(c,2)) { goto L_801DCDFC; } // 801DCDB8
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DCDBC
  c->r[28]=c->r[29]+0xFFFFFFF6u; // 801DCDC0
  cmpu(c,0,c->r[0],0x00000041u); // 801DCDC4
  if (!crb(c,2)) { goto L_801DCDE4; } // 801DCDC8
  c->r[4]=0u+0x80250000u; // 801DCDCC
  c->r[3]=c->r[28]|c->r[28]; // 801DCDD0
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCDD4
  c->r[4]=c->r[4]+0x00000024u; // 801DCDD8
  c->lr=0x801DCDE0u; f_801DE43C(c); // 801DCDDC
  goto L_801DCE38; // 801DCDE0
L_801DCDE4:;
  c->r[4]=0u+0x80250000u; // 801DCDE4
  c->r[3]=c->r[28]|c->r[28]; // 801DCDE8
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCDEC
  c->r[4]=c->r[4]+0x0000002Eu; // 801DCDF0
  c->lr=0x801DCDF8u; f_801DE43C(c); // 801DCDF4
  goto L_801DCE38; // 801DCDF8
L_801DCDFC:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DCDFC
  c->r[28]=c->r[29]+0xFFFFFFF8u; // 801DCE00
  cmpu(c,0,c->r[0],0x00000041u); // 801DCE04
  if (!crb(c,2)) { goto L_801DCE24; } // 801DCE08
  c->r[4]=0u+0x80250000u; // 801DCE0C
  c->r[3]=c->r[28]|c->r[28]; // 801DCE10
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCE14
  c->r[4]=c->r[4]+0x00000038u; // 801DCE18
  c->lr=0x801DCE20u; f_801DE43C(c); // 801DCE1C
  goto L_801DCE38; // 801DCE20
L_801DCE24:;
  c->r[4]=0u+0x80250000u; // 801DCE24
  c->r[3]=c->r[28]|c->r[28]; // 801DCE28
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCE2C
  c->r[4]=c->r[4]+0x00000040u; // 801DCE30
  c->lr=0x801DCE38u; f_801DE43C(c); // 801DCE34
L_801DCE38:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCE38
  goto L_801DD0BC; // 801DCE3C
L_801DCE40:;
  c->r[0]=R8(c->r[1]+0x00000038u); // 801DCE40
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DCE44
  if (crb(c,2)) { goto L_801DCE8C; } // 801DCE48
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DCE4C
  c->r[28]=c->r[29]+0xFFFFFFF6u; // 801DCE50
  cmpu(c,0,c->r[0],0x00000041u); // 801DCE54
  if (!crb(c,2)) { goto L_801DCE74; } // 801DCE58
  c->r[4]=0u+0x80250000u; // 801DCE5C
  c->r[3]=c->r[28]|c->r[28]; // 801DCE60
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCE64
  c->r[4]=c->r[4]+0x00000048u; // 801DCE68
  c->lr=0x801DCE70u; f_801DE43C(c); // 801DCE6C
  goto L_801DCEC8; // 801DCE70
L_801DCE74:;
  c->r[4]=0u+0x80250000u; // 801DCE74
  c->r[3]=c->r[28]|c->r[28]; // 801DCE78
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCE7C
  c->r[4]=c->r[4]+0x00000052u; // 801DCE80
  c->lr=0x801DCE88u; f_801DE43C(c); // 801DCE84
  goto L_801DCEC8; // 801DCE88
L_801DCE8C:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DCE8C
  c->r[28]=c->r[29]+0xFFFFFFF8u; // 801DCE90
  cmpu(c,0,c->r[0],0x00000041u); // 801DCE94
  if (!crb(c,2)) { goto L_801DCEB4; } // 801DCE98
  c->r[4]=0u+0x80250000u; // 801DCE9C
  c->r[3]=c->r[28]|c->r[28]; // 801DCEA0
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCEA4
  c->r[4]=c->r[4]+0x0000005Cu; // 801DCEA8
  c->lr=0x801DCEB0u; f_801DE43C(c); // 801DCEAC
  goto L_801DCEC8; // 801DCEB0
L_801DCEB4:;
  c->r[4]=0u+0x80250000u; // 801DCEB4
  c->r[3]=c->r[28]|c->r[28]; // 801DCEB8
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DCEBC
  c->r[4]=c->r[4]+0x00000064u; // 801DCEC0
  c->lr=0x801DCEC8u; f_801DE43C(c); // 801DCEC4
L_801DCEC8:;
  c->r[3]=c->r[28]|c->r[28]; // 801DCEC8
  goto L_801DD0BC; // 801DCECC
L_801DCED0:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801DCED0
  c->r[8]=0u+0x00000001u; // 801DCED4
  c->r[3]=R8(c->r[1]+0x00000008u); // 801DCED8
  c->r[7]=0u+0x00000064u; // 801DCEDC
  c->r[0]=rotl(c->r[0],17)&0xFFFE0000u; // 801DCEE0
  W8(c->r[1]+0x00000028u,c->r[8]); // 801DCEE4
  c->r[0]=(rotl(c->r[3],25)&0xFE000000u)|(c->r[0]&~0xFE000000u); // 801DCEE8
  c->r[4]=c->r[29]|c->r[29]; // 801DCEEC
  c->r[5]=rotl(c->r[0],11)&0x000007FFu; // 801DCEF0
  W8(c->r[1]+0x00000029u,c->r[8]); // 801DCEF4
  c->r[0]=0u-c->r[5]; // 801DCEF8
  c->r[0]=c->r[0]|c->r[5]; // 801DCEFC
  W8(c->r[1]+0x0000002Au,c->r[28]); // 801DCF00
  c->r[3]=sraw(c,c->r[0],31); // 801DCF04
  c->r[0]=c->r[5]+0xFFFFFC01u; // 801DCF08
  W8(c->r[1]+0x0000002Bu,c->r[28]); // 801DCF0C
  c->r[3]=c->r[0]&c->r[3]; // 801DCF10
  c->r[5]=c->r[1]+0x00000018u; // 801DCF14
  c->r[6]=R32(c->r[1]+0x00000028u); // 801DCF18
  W8(c->r[1]+0x0000002Cu,c->r[28]); // 801DCF1C
  W16(c->r[1]+0x0000002Eu,c->r[7]); // 801DCF20
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 801DCF24
  W32(c->r[1]+0x00000030u,c->r[28]); // 801DCF28
  W32(c->r[1]+0x00000034u,c->r[8]); // 801DCF2C
  W32(c->r[1]+0x00000018u,c->r[6]); // 801DCF30
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DCF34
  W32(c->r[1]+0x00000020u,c->r[28]); // 801DCF38
  W32(c->r[1]+0x00000024u,c->r[8]); // 801DCF3C
  c->lr=0x801DCF44u; f_801DC790(c); // 801DCF40
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DCF44
  cmpu(c,0,c->r[0],0x00000061u); // 801DCF48
  if (!crb(c,2)) { goto L_801DCF5C; } // 801DCF4C
  c->r[0]=0u+0x00000070u; // 801DCF50
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DCF54
  goto L_801DCF64; // 801DCF58
L_801DCF5C:;
  c->r[0]=0u+0x00000050u; // 801DCF5C
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DCF60
L_801DCF64:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DCF64
  c->r[8]=c->r[1]+0x00000008u; // 801DCF68
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DCF6C
  c->r[9]=c->r[4]+0x0000000Bu; // 801DCF70
  c->ctr=c->r[0]; // 801DCF74
  cmps(c,0,(int32_t)c->r[0],1); // 801DCF78
  if (crb(c,0)) { goto L_801DD014; } // 801DCF7C
L_801DCF80:;
  cmps(c,0,(int32_t)c->r[9],64); // 801DCF80
  if (!crb(c,0)) { goto L_801DD000; } // 801DCF84
  c->r[4]=sraw(c,c->r[9],3); // 801DCF88
  c->r[0]=c->r[9]+0xFFFFFFFCu; // 801DCF8C
  c->r[7]=c->r[8]+c->r[4]; // 801DCF90
  c->r[6]=rotl(c->r[9],0)&0x00000007u; // 801DCF94
  c->r[4]=rotl(c->r[9],0)&0xFFFFFFF8u; // 801DCF98
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801DCF9C
  c->r[5]=R8(c->r[7]+0x00000000u); // 801DCFA0
  c->r[6]=addc(c,~c->r[6],0x00000007u,1); // 801DCFA4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DCFA8
  c->r[0]=sraw(c,c->r[5],(c->r[6])&63); // 801DCFAC
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801DCFB0
  if (crb(c,2)) { goto L_801DCFD0; } // 801DCFB4
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 801DCFB8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DCFBC
  c->r[0]=sraw(c,c->r[0],(c->r[6])&63); // 801DCFC0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801DCFC4
  c->r[0]=c->r[4]|c->r[0]; // 801DCFC8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801DCFCC
L_801DCFD0:;
  c->r[4]=rotl(c->r[4],0)&0x0000000Fu; // 801DCFD0
  cmpu(c,0,c->r[4],0x0000000Au); // 801DCFD4
  if (!crb(c,0)) { goto L_801DCFE4; } // 801DCFD8
  c->r[4]=c->r[4]+0x00000030u; // 801DCFDC
  goto L_801DD004; // 801DCFE0
L_801DCFE4:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DCFE4
  cmpu(c,0,c->r[0],0x00000061u); // 801DCFE8
  if (!crb(c,2)) { goto L_801DCFF8; } // 801DCFEC
  c->r[4]=c->r[4]+0x00000057u; // 801DCFF0
  goto L_801DD004; // 801DCFF4
L_801DCFF8:;
  c->r[4]=c->r[4]+0x00000037u; // 801DCFF8
  goto L_801DD004; // 801DCFFC
L_801DD000:;
  c->r[4]=0u+0x00000030u; // 801DD000
L_801DD004:;
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801DD004
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD008
  c->r[9]=c->r[9]+0xFFFFFFFCu; // 801DD00C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DCF80; } // 801DD010
L_801DD014:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801DD014
  cmps(c,0,(int32_t)c->r[0],0); // 801DD018
  if (!crb(c,2)) { goto L_801DD02C; } // 801DD01C
  c->r[0]=R8(c->r[30]+0x00000003u); // 801DD020
  cmps(c,0,(int32_t)c->r[0],0); // 801DD024
  if (crb(c,2)) { goto L_801DD030; } // 801DD028
L_801DD02C:;
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[31]); c->r[3]=ea;} // 801DD02C
L_801DD030:;
  c->f[1]=std::fabs(c->f[31]); // 801DD030
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=RF64(ea);} // 801DD034
  fcmp(c,0,c->f[0],c->f[1]); // 801DD038
  if (crb(c,2)) { goto L_801DD04C; } // 801DD03C
  c->r[0]=0u+0x00000031u; // 801DD040
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD044
  goto L_801DD054; // 801DD048
L_801DD04C:;
  c->r[0]=0u+0x00000030u; // 801DD04C
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD050
L_801DD054:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 801DD054
  cmpu(c,0,c->r[0],0x00000061u); // 801DD058
  if (!crb(c,2)) { goto L_801DD06C; } // 801DD05C
  c->r[0]=0u+0x00000078u; // 801DD060
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD064
  goto L_801DD074; // 801DD068
L_801DD06C:;
  c->r[0]=0u+0x00000058u; // 801DD06C
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD070
L_801DD074:;
  c->r[0]=0u+0x00000030u; // 801DD074
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD078
  c->r[0]=R8(c->r[1]+0x00000038u); // 801DD07C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DD080
  if (crb(c,2)) { goto L_801DD094; } // 801DD084
  c->r[0]=0u+0x0000002Du; // 801DD088
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD08C
  goto L_801DD0BC; // 801DD090
L_801DD094:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 801DD094
  cmpu(c,0,c->r[0],0x00000001u); // 801DD098
  if (!crb(c,2)) { goto L_801DD0AC; } // 801DD09C
  c->r[0]=0u+0x0000002Bu; // 801DD0A0
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD0A4
  goto L_801DD0BC; // 801DD0A8
L_801DD0AC:;
  cmpu(c,0,c->r[0],0x00000002u); // 801DD0AC
  if (!crb(c,2)) { goto L_801DD0BC; } // 801DD0B0
  c->r[0]=0u+0x00000020u; // 801DD0B4
  {uint32_t ea=c->r[3]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[3]=ea;} // 801DD0B8
L_801DD0BC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801DD0BC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 801DD0C0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 801DD0C4
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801DD0C8
  c->r[30]=R32(c->r[1]+0x00000078u); // 801DD0CC
  c->r[29]=R32(c->r[1]+0x00000074u); // 801DD0D0
  c->r[28]=R32(c->r[1]+0x00000070u); // 801DD0D4
  c->lr=c->r[0]; // 801DD0D8
  c->r[1]=c->r[1]+0x00000090u; // 801DD0DC
  return; // 801DD0E0
}

// round_decimal_801DD0E4
void f_801DD0E4(Ctx* __restrict c) {
  trace_call(0x801DD0E4u);
  cmps(c,0,(int32_t)c->r[4],0); // 801DD0E4
  if (!crb(c,0)) { goto L_801DD108; } // 801DD0E8
L_801DD0EC:;
  c->r[5]=0u+0x00000000u; // 801DD0EC
  c->r[4]=0u+0x00000001u; // 801DD0F0
  c->r[0]=0u+0x00000030u; // 801DD0F4
  W16(c->r[3]+0x00000002u,c->r[5]); // 801DD0F8
  W8(c->r[3]+0x00000004u,c->r[4]); // 801DD0FC
  W8(c->r[3]+0x00000005u,c->r[0]); // 801DD100
  return; // 801DD104
L_801DD108:;
  c->r[7]=R8(c->r[3]+0x00000004u); // 801DD108
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 801DD10C
  if (!crb(c,0)) return; // 801DD110
  c->r[6]=c->r[3]+c->r[4]; // 801DD114
  c->r[5]=R8(c->r[6]+0x00000005u); // 801DD118
  c->r[8]=c->r[6]+0x00000005u; // 801DD11C
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 801DD120
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD124
  cmps(c,0,(int32_t)c->r[6],5); // 801DD128
  if (!crb(c,2)) { goto L_801DD16C; } // 801DD12C
  c->r[5]=c->r[3]+c->r[7]; // 801DD130
  c->r[5]=c->r[5]+0x00000005u; // 801DD134
L_801DD138:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801DD138
  cmpu(c,0,c->r[5],c->r[8]); // 801DD13C
  if (!crb(c,1)) { goto L_801DD150; } // 801DD140
  c->r[0]=R8(c->r[5]+0x00000000u); // 801DD144
  cmps(c,0,(int32_t)c->r[0],48); // 801DD148
  if (crb(c,2)) { IRQCHK(c); goto L_801DD138; } // 801DD14C
L_801DD150:;
  cmpu(c,0,c->r[5],c->r[8]); // 801DD150
  if (!crb(c,2)) { goto L_801DD164; } // 801DD154
  c->r[0]=R8(c->r[8]+0xFFFFFFFFu); // 801DD158
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 801DD15C
  goto L_801DD180; // 801DD160
L_801DD164:;
  c->r[5]=0u+0x00000001u; // 801DD164
  goto L_801DD180; // 801DD168
L_801DD16C:;
  c->r[0]=c->r[6]^0x00000005u; // 801DD16C
  c->r[5]=sraw(c,c->r[0],1); // 801DD170
  c->r[0]=c->r[0]&c->r[6]; // 801DD174
  c->r[0]=c->r[5]-c->r[0]; // 801DD178
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801DD17C
L_801DD180:;
  c->ctr=c->r[4]; // 801DD180
  cmps(c,0,(int32_t)c->r[4],0); // 801DD184
  if (crb(c,2)) { goto L_801DD1D4; } // 801DD188
L_801DD18C:;
  {uint32_t ea=c->r[8]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[8]=ea;} // 801DD18C
  c->r[5]=c->r[0]+c->r[5]; // 801DD190
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 801DD194
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801DD198
  c->r[0]=c->r[6]^0x00000009u; // 801DD19C
  c->r[5]=sraw(c,c->r[0],1); // 801DD1A0
  c->r[0]=c->r[0]&c->r[6]; // 801DD1A4
  c->r[0]=c->r[5]-c->r[0]; // 801DD1A8
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 801DD1AC
  if (!crb(c,2)) { goto L_801DD1BC; } // 801DD1B0
  cmps(c,0,(int32_t)c->r[6],0); // 801DD1B4
  if (!crb(c,2)) { goto L_801DD1C4; } // 801DD1B8
L_801DD1BC:;
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801DD1BC
  goto L_801DD1D0; // 801DD1C0
L_801DD1C4:;
  c->r[0]=c->r[6]+0x00000030u; // 801DD1C4
  W8(c->r[8]+0x00000000u,c->r[0]); // 801DD1C8
  goto L_801DD1D4; // 801DD1CC
L_801DD1D0:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DD18C; } // 801DD1D0
L_801DD1D4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DD1D4
  if (crb(c,2)) { goto L_801DD1FC; } // 801DD1D8
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 801DD1DC
  c->r[4]=0u+0x00000001u; // 801DD1E0
  c->r[0]=0u+0x00000031u; // 801DD1E4
  W8(c->r[3]+0x00000004u,c->r[4]); // 801DD1E8
  c->r[4]=c->r[5]+0x00000001u; // 801DD1EC
  W16(c->r[3]+0x00000002u,c->r[4]); // 801DD1F0
  W8(c->r[3]+0x00000005u,c->r[0]); // 801DD1F4
  return; // 801DD1F8
L_801DD1FC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DD1FC
  if (crb(c,2)) { IRQCHK(c); goto L_801DD0EC; } // 801DD200
  W8(c->r[3]+0x00000004u,c->r[4]); // 801DD204
  return; // 801DD208
}

// float2str_801DD20C
void f_801DD20C(Ctx* __restrict c) {
  trace_call(0x801DD20Cu);
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD20C
  c->r[0]=c->lr; // 801DD210
  c->r[5]=0u+0x80250000u; // 801DD214
  W32(c->r[1]+0x00000254u,c->r[0]); // 801DD218
  {uint32_t ea=c->r[1]+0x00000248u; WF64(ea,c->f[31]);} // 801DD21C
  c->f[31]=c->f[1]; // 801DD220
  W32(c->r[1]+0x00000244u,c->r[31]); // 801DD224
  W32(c->r[1]+0x00000240u,c->r[30]); // 801DD228
  W32(c->r[1]+0x0000023Cu,c->r[29]); // 801DD22C
  c->r[29]=c->r[4]|c->r[4]; // 801DD230
  W32(c->r[1]+0x00000238u,c->r[28]); // 801DD234
  c->r[28]=c->r[3]|c->r[3]; // 801DD238
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801DD23C
  c->r[5]=R32(c->r[5]+0xFFFF9B48u); // 801DD240
  cmps(c,0,(int32_t)c->r[0],509); // 801DD244
  c->r[30]=R8(c->r[5]+0x00000000u); // 801DD248
  if (!crb(c,1)) { goto L_801DD258; } // 801DD24C
  c->r[3]=0u+0x00000000u; // 801DD250
  goto L_801DD978; // 801DD254
L_801DD258:;
  c->r[3]=0u+0x00000000u; // 801DD258
  c->r[0]=0u+0x00000020u; // 801DD25C
  W8(c->r[1]+0x00000008u,c->r[3]); // 801DD260
  c->r[3]=c->r[1]+0x00000008u; // 801DD264
  c->r[4]=c->r[1]+0x0000000Cu; // 801DD268
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801DD26C
  c->lr=0x801DD274u; f_801D8214(c); // 801DD270
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DD274
  c->r[5]=c->r[1]+0x00000011u; // 801DD278
  c->r[5]=c->r[5]+c->r[0]; // 801DD27C
  goto L_801DD29C; // 801DD280
L_801DD284:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 801DD284
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DD288
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801DD28C
  W8(c->r[1]+0x00000010u,c->r[0]); // 801DD290
  c->r[0]=c->r[3]+0x00000001u; // 801DD294
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DD298
L_801DD29C:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DD29C
  cmpu(c,0,c->r[0],0x00000001u); // 801DD2A0
  if (!crb(c,1)) { goto L_801DD2B4; } // 801DD2A4
  {uint32_t ea=c->r[5]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[5]=ea;} // 801DD2A8
  cmps(c,0,(int32_t)c->r[0],48); // 801DD2AC
  if (crb(c,2)) { IRQCHK(c); goto L_801DD284; } // 801DD2B0
L_801DD2B4:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 801DD2B4
  cmps(c,0,(int32_t)c->r[0],48); // 801DD2B8
  if (crb(c,2)) { goto L_801DD2D4; } // 801DD2BC
  cmps(c,0,(int32_t)c->r[0],73); // 801DD2C0
  if (crb(c,2)) { goto L_801DD2E0; } // 801DD2C4
  cmps(c,0,(int32_t)c->r[0],78); // 801DD2C8
  if (crb(c,2)) { goto L_801DD3C8; } // 801DD2CC
  goto L_801DD4B0; // 801DD2D0
L_801DD2D4:;
  c->r[0]=0u+0x00000000u; // 801DD2D4
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DD2D8
  goto L_801DD4B0; // 801DD2DC
L_801DD2E0:;
  {uint32_t ea=c->r[2]+0xFFFFAE90u; c->f[0]=RF64(ea);} // 801DD2E0
  fcmp(c,0,c->f[31],c->f[0]); // 801DD2E4
  if (!crb(c,0)) { goto L_801DD358; } // 801DD2E8
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DD2EC
  c->r[31]=c->r[28]+0xFFFFFFF6u; // 801DD2F0
  cmpu(c,0,c->r[0],0x00000100u); // 801DD2F4
  if (crb(c,0)) { goto L_801DD304; } // 801DD2F8
  c->r[0]=0u+0x00000000u; // 801DD2FC
  goto L_801DD320; // 801DD300
L_801DD304:;
  c->r[3]=0u+0x80250000u; // 801DD304
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 801DD308
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DD30C
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DD310
  c->r[3]=R32(c->r[3]+0x00000014u); // 801DD314
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DD318
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801DD31C
L_801DD320:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DD320
  if (crb(c,2)) { goto L_801DD340; } // 801DD324
  c->r[4]=0u+0x80250000u; // 801DD328
  c->r[3]=c->r[31]|c->r[31]; // 801DD32C
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DD330
  c->r[4]=c->r[4]+0x00000024u; // 801DD334
  c->lr=0x801DD33Cu; f_801DE43C(c); // 801DD338
  goto L_801DD3C0; // 801DD33C
L_801DD340:;
  c->r[4]=0u+0x80250000u; // 801DD340
  c->r[3]=c->r[31]|c->r[31]; // 801DD344
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DD348
  c->r[4]=c->r[4]+0x0000002Eu; // 801DD34C
  c->lr=0x801DD354u; f_801DE43C(c); // 801DD350
  goto L_801DD3C0; // 801DD354
L_801DD358:;
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DD358
  c->r[31]=c->r[28]+0xFFFFFFF8u; // 801DD35C
  cmpu(c,0,c->r[0],0x00000100u); // 801DD360
  if (crb(c,0)) { goto L_801DD370; } // 801DD364
  c->r[0]=0u+0x00000000u; // 801DD368
  goto L_801DD38C; // 801DD36C
L_801DD370:;
  c->r[3]=0u+0x80250000u; // 801DD370
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 801DD374
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DD378
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DD37C
  c->r[3]=R32(c->r[3]+0x00000014u); // 801DD380
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DD384
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801DD388
L_801DD38C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DD38C
  if (crb(c,2)) { goto L_801DD3AC; } // 801DD390
  c->r[4]=0u+0x80250000u; // 801DD394
  c->r[3]=c->r[31]|c->r[31]; // 801DD398
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DD39C
  c->r[4]=c->r[4]+0x00000038u; // 801DD3A0
  c->lr=0x801DD3A8u; f_801DE43C(c); // 801DD3A4
  goto L_801DD3C0; // 801DD3A8
L_801DD3AC:;
  c->r[4]=0u+0x80250000u; // 801DD3AC
  c->r[3]=c->r[31]|c->r[31]; // 801DD3B0
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DD3B4
  c->r[4]=c->r[4]+0x00000040u; // 801DD3B8
  c->lr=0x801DD3C0u; f_801DE43C(c); // 801DD3BC
L_801DD3C0:;
  c->r[3]=c->r[31]|c->r[31]; // 801DD3C0
  goto L_801DD978; // 801DD3C4
L_801DD3C8:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DD3C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DD3CC
  if (crb(c,2)) { goto L_801DD440; } // 801DD3D0
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DD3D4
  c->r[31]=c->r[28]+0xFFFFFFF6u; // 801DD3D8
  cmpu(c,0,c->r[0],0x00000100u); // 801DD3DC
  if (crb(c,0)) { goto L_801DD3EC; } // 801DD3E0
  c->r[0]=0u+0x00000000u; // 801DD3E4
  goto L_801DD408; // 801DD3E8
L_801DD3EC:;
  c->r[3]=0u+0x80250000u; // 801DD3EC
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 801DD3F0
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DD3F4
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DD3F8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801DD3FC
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DD400
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801DD404
L_801DD408:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DD408
  if (crb(c,2)) { goto L_801DD428; } // 801DD40C
  c->r[4]=0u+0x80250000u; // 801DD410
  c->r[3]=c->r[31]|c->r[31]; // 801DD414
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DD418
  c->r[4]=c->r[4]+0x00000048u; // 801DD41C
  c->lr=0x801DD424u; f_801DE43C(c); // 801DD420
  goto L_801DD4A8; // 801DD424
L_801DD428:;
  c->r[4]=0u+0x80250000u; // 801DD428
  c->r[3]=c->r[31]|c->r[31]; // 801DD42C
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DD430
  c->r[4]=c->r[4]+0x00000052u; // 801DD434
  c->lr=0x801DD43Cu; f_801DE43C(c); // 801DD438
  goto L_801DD4A8; // 801DD43C
L_801DD440:;
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DD440
  c->r[31]=c->r[28]+0xFFFFFFF8u; // 801DD444
  cmpu(c,0,c->r[0],0x00000100u); // 801DD448
  if (crb(c,0)) { goto L_801DD458; } // 801DD44C
  c->r[0]=0u+0x00000000u; // 801DD450
  goto L_801DD474; // 801DD454
L_801DD458:;
  c->r[3]=0u+0x80250000u; // 801DD458
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 801DD45C
  c->r[3]=c->r[3]+0xFFFF9CF8u; // 801DD460
  c->r[3]=R32(c->r[3]+0x00000038u); // 801DD464
  c->r[3]=R32(c->r[3]+0x00000014u); // 801DD468
  c->r[0]=R16(c->r[3]+c->r[0]); // 801DD46C
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 801DD470
L_801DD474:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DD474
  if (crb(c,2)) { goto L_801DD494; } // 801DD478
  c->r[4]=0u+0x80250000u; // 801DD47C
  c->r[3]=c->r[31]|c->r[31]; // 801DD480
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DD484
  c->r[4]=c->r[4]+0x0000005Cu; // 801DD488
  c->lr=0x801DD490u; f_801DE43C(c); // 801DD48C
  goto L_801DD4A8; // 801DD490
L_801DD494:;
  c->r[4]=0u+0x80250000u; // 801DD494
  c->r[3]=c->r[31]|c->r[31]; // 801DD498
  c->r[4]=c->r[4]+0xFFFFA1A0u; // 801DD49C
  c->r[4]=c->r[4]+0x00000064u; // 801DD4A0
  c->lr=0x801DD4A8u; f_801DE43C(c); // 801DD4A4
L_801DD4A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801DD4A8
  goto L_801DD978; // 801DD4AC
L_801DD4B0:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 801DD4B0
  c->r[0]=0u+0x00000000u; // 801DD4B4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DD4B8
  c->r[31]=c->r[1]+0x00000237u; // 801DD4BC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DD4C0
  W8(c->r[1]+0x00000237u,c->r[0]); // 801DD4C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801DD4C8
  c->r[0]=c->r[4]+c->r[0]; // 801DD4CC
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 801DD4D0
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DD4D4
  cmps(c,0,(int32_t)c->r[0],103); // 801DD4D8
  if (crb(c,2)) { goto L_801DD50C; } // 801DD4DC
  cmps(c,0,(int32_t)c->r[0],71); // 801DD4E0
  if (crb(c,2)) { goto L_801DD50C; } // 801DD4E4
  cmps(c,0,(int32_t)c->r[0],101); // 801DD4E8
  if (crb(c,2)) { goto L_801DD5C4; } // 801DD4EC
  cmps(c,0,(int32_t)c->r[0],69); // 801DD4F0
  if (crb(c,2)) { goto L_801DD5C4; } // 801DD4F4
  cmps(c,0,(int32_t)c->r[0],102); // 801DD4F8
  if (crb(c,2)) { goto L_801DD72C; } // 801DD4FC
  cmps(c,0,(int32_t)c->r[0],70); // 801DD500
  if (crb(c,2)) { goto L_801DD72C; } // 801DD504
  goto L_801DD948; // 801DD508
L_801DD50C:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 801DD50C
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DD510
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DD514
  if (!crb(c,1)) { goto L_801DD524; } // 801DD518
  c->r[3]=c->r[1]+0x0000000Cu; // 801DD51C
  c->lr=0x801DD524u; f_801DD0E4(c); // 801DD520
L_801DD524:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DD524
  cmps(c,0,(int32_t)c->r[4],-4); // 801DD528
  if (crb(c,0)) { goto L_801DD53C; } // 801DD52C
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801DD530
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801DD534
  if (crb(c,0)) { goto L_801DD588; } // 801DD538
L_801DD53C:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 801DD53C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD540
  if (crb(c,2)) { goto L_801DD558; } // 801DD544
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801DD548
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DD54C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DD550
  goto L_801DD564; // 801DD554
L_801DD558:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 801DD558
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DD55C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DD560
L_801DD564:;
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DD564
  cmpu(c,0,c->r[0],0x00000067u); // 801DD568
  if (!crb(c,2)) { goto L_801DD57C; } // 801DD56C
  c->r[0]=0u+0x00000065u; // 801DD570
  W16(c->r[29]+0x00000006u,c->r[0]); // 801DD574
  goto L_801DD5C4; // 801DD578
L_801DD57C:;
  c->r[0]=0u+0x00000045u; // 801DD57C
  W16(c->r[29]+0x00000006u,c->r[0]); // 801DD580
  goto L_801DD5C4; // 801DD584
L_801DD588:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 801DD588
  cmps(c,0,(int32_t)c->r[0],0); // 801DD58C
  if (crb(c,2)) { goto L_801DD5A4; } // 801DD590
  c->r[0]=c->r[4]+0x00000001u; // 801DD594
  c->r[0]=c->r[3]-c->r[0]; // 801DD598
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DD59C
  goto L_801DD72C; // 801DD5A0
L_801DD5A4:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DD5A4
  c->r[3]=c->r[4]+0x00000001u; // 801DD5A8
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 801DD5AC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DD5B0
  if (!crb(c,0)) { goto L_801DD72C; } // 801DD5B4
  c->r[0]=0u+0x00000000u; // 801DD5B8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801DD5BC
  goto L_801DD72C; // 801DD5C0
L_801DD5C4:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801DD5C4
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DD5C8
  c->r[4]=c->r[3]+0x00000001u; // 801DD5CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801DD5D0
  if (!crb(c,1)) { goto L_801DD5E0; } // 801DD5D4
  c->r[3]=c->r[1]+0x0000000Cu; // 801DD5D8
  c->lr=0x801DD5E0u; f_801DD0E4(c); // 801DD5DC
L_801DD5E0:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DD5E0
  c->r[8]=0u+0x0000002Bu; // 801DD5E4
  cmps(c,0,(int32_t)c->r[6],0); // 801DD5E8
  if (!crb(c,0)) { goto L_801DD5F8; } // 801DD5EC
  c->r[6]=0u-c->r[6]; // 801DD5F0
  c->r[8]=0u+0x0000002Du; // 801DD5F4
L_801DD5F8:;
  c->r[3]=0u+0x66660000u; // 801DD5F8
  c->r[7]=0u+0x00000000u; // 801DD5FC
  c->r[5]=c->r[3]+0x00006667u; // 801DD600
  goto L_801DD63C; // 801DD604
L_801DD608:;
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 801DD608
  c->r[7]=c->r[7]+0x00000001u; // 801DD60C
  c->r[3]=sraw(c,c->r[0],2); // 801DD610
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 801DD614
  c->r[0]=sraw(c,c->r[0],2); // 801DD618
  c->r[3]=c->r[3]+c->r[4]; // 801DD61C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 801DD620
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801DD624
  c->r[4]=c->r[6]-c->r[4]; // 801DD628
  c->r[6]=c->r[0]+c->r[3]; // 801DD62C
  c->r[0]=c->r[4]+0x00000030u; // 801DD630
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 801DD634
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 801DD638
L_801DD63C:;
  cmps(c,0,(int32_t)c->r[6],0); // 801DD63C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD608; } // 801DD640
  cmps(c,0,(int32_t)c->r[7],2); // 801DD644
  if (crb(c,0)) { IRQCHK(c); goto L_801DD608; } // 801DD648
  W8(c->r[31]+0xFFFFFFFFu,c->r[8]); // 801DD64C
  c->r[0]=c->r[1]+0x00000038u; // 801DD650
  c->r[3]=R16(c->r[29]+0x00000006u); // 801DD654
  {uint32_t ea=c->r[31]+0xFFFFFFFEu; W8(ea,c->r[3]); c->r[31]=ea;} // 801DD658
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 801DD65C
  c->r[0]=c->r[0]-c->r[31]; // 801DD660
  c->r[0]=c->r[0]+c->r[3]; // 801DD664
  cmps(c,0,(int32_t)c->r[0],509); // 801DD668
  if (!crb(c,1)) { goto L_801DD678; } // 801DD66C
  c->r[3]=0u+0x00000000u; // 801DD670
  goto L_801DD978; // 801DD674
L_801DD678:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 801DD678
  c->r[0]=c->r[3]+0x00000001u; // 801DD67C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DD680
  if (!crb(c,0)) { goto L_801DD6A4; } // 801DD684
  c->r[3]=c->r[3]+0x00000002u; // 801DD688
  c->r[0]=0u+0x00000030u; // 801DD68C
  c->r[3]=c->r[3]-c->r[4]; // 801DD690
  goto L_801DD69C; // 801DD694
L_801DD698:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD698
L_801DD69C:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801DD69C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD698; } // 801DD6A0
L_801DD6A4:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 801DD6A4
  c->r[4]=c->r[1]+0x00000011u; // 801DD6A8
  c->r[4]=c->r[4]+c->r[3]; // 801DD6AC
  goto L_801DD6BC; // 801DD6B0
L_801DD6B4:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 801DD6B4
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD6B8
L_801DD6BC:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 801DD6BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD6B4; } // 801DD6C0
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DD6C4
  cmps(c,0,(int32_t)c->r[0],0); // 801DD6C8
  if (!crb(c,2)) { goto L_801DD6DC; } // 801DD6CC
  c->r[0]=R8(c->r[29]+0x00000003u); // 801DD6D0
  cmps(c,0,(int32_t)c->r[0],0); // 801DD6D4
  if (crb(c,2)) { goto L_801DD6E0; } // 801DD6D8
L_801DD6DC:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 801DD6DC
L_801DD6E0:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 801DD6E0
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD6E4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DD6E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DD6EC
  if (crb(c,2)) { goto L_801DD700; } // 801DD6F0
  c->r[0]=0u+0x0000002Du; // 801DD6F4
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD6F8
  goto L_801DD948; // 801DD6FC
L_801DD700:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801DD700
  cmpu(c,0,c->r[0],0x00000001u); // 801DD704
  if (!crb(c,2)) { goto L_801DD718; } // 801DD708
  c->r[0]=0u+0x0000002Bu; // 801DD70C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD710
  goto L_801DD948; // 801DD714
L_801DD718:;
  cmpu(c,0,c->r[0],0x00000002u); // 801DD718
  if (!crb(c,2)) { goto L_801DD948; } // 801DD71C
  c->r[0]=0u+0x00000020u; // 801DD720
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD724
  goto L_801DD948; // 801DD728
L_801DD72C:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 801DD72C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DD730
  c->r[3]=c->r[4]-c->r[5]; // 801DD734
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 801DD738
  if (!crb(c,0)) { goto L_801DD744; } // 801DD73C
  c->r[8]=0u+0x00000000u; // 801DD740
L_801DD744:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DD744
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DD748
  if (!crb(c,1)) { goto L_801DD778; } // 801DD74C
  c->r[0]=c->r[8]-c->r[0]; // 801DD750
  c->r[3]=c->r[1]+0x0000000Cu; // 801DD754
  c->r[4]=c->r[4]-c->r[0]; // 801DD758
  c->lr=0x801DD760u; f_801DD0E4(c); // 801DD75C
  c->r[4]=R8(c->r[1]+0x00000010u); // 801DD760
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 801DD764
  c->r[3]=c->r[4]-c->r[5]; // 801DD768
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 801DD76C
  if (!crb(c,0)) { goto L_801DD778; } // 801DD770
  c->r[8]=0u+0x00000000u; // 801DD774
L_801DD778:;
  c->r[7]=addc(c,c->r[5],0x00000001u,0); cr0(c,c->r[7]); // 801DD778
  if (!crb(c,0)) { goto L_801DD784; } // 801DD77C
  c->r[7]=0u+0x00000000u; // 801DD780
L_801DD784:;
  c->r[0]=c->r[7]+c->r[8]; // 801DD784
  cmps(c,0,(int32_t)c->r[0],509); // 801DD788
  if (!crb(c,1)) { goto L_801DD798; } // 801DD78C
  c->r[3]=0u+0x00000000u; // 801DD790
  goto L_801DD978; // 801DD794
L_801DD798:;
  c->r[6]=c->r[1]+0x00000011u; // 801DD798
  c->r[5]=0u+0x00000000u; // 801DD79C
  c->r[6]=c->r[6]+c->r[4]; // 801DD7A0
  c->r[3]=0u+0x00000030u; // 801DD7A4
  goto L_801DD7B4; // 801DD7A8
L_801DD7AC:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 801DD7AC
  c->r[5]=c->r[5]+0x00000001u; // 801DD7B0
L_801DD7B4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DD7B4
  c->r[0]=c->r[0]-c->r[8]; // 801DD7B8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801DD7BC
  if (crb(c,0)) { IRQCHK(c); goto L_801DD7AC; } // 801DD7C0
  c->r[3]=0u+0x00000000u; // 801DD7C4
  goto L_801DD7D8; // 801DD7C8
L_801DD7CC:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 801DD7CC
  c->r[3]=c->r[3]+0x00000001u; // 801DD7D0
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD7D4
L_801DD7D8:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 801DD7D8
  if (!crb(c,0)) { goto L_801DD7EC; } // 801DD7DC
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DD7E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DD7E4
  if (crb(c,0)) { IRQCHK(c); goto L_801DD7CC; } // 801DD7E8
L_801DD7EC:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 801DD7EC
  c->r[3]=c->r[8]-c->r[3]; // 801DD7F0
  c->r[4]=0u+0x00000030u; // 801DD7F4
  if (!crb(c,0)) { goto L_801DD840; } // 801DD7F8
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801DD7FC
  c->ctr=c->r[0]; // 801DD800
  if (crb(c,2)) { goto L_801DD834; } // 801DD804
L_801DD808:;
  W8(c->r[31]+0xFFFFFFFFu,c->r[4]); // 801DD808
  W8(c->r[31]+0xFFFFFFFEu,c->r[4]); // 801DD80C
  W8(c->r[31]+0xFFFFFFFDu,c->r[4]); // 801DD810
  W8(c->r[31]+0xFFFFFFFCu,c->r[4]); // 801DD814
  W8(c->r[31]+0xFFFFFFFBu,c->r[4]); // 801DD818
  W8(c->r[31]+0xFFFFFFFAu,c->r[4]); // 801DD81C
  W8(c->r[31]+0xFFFFFFF9u,c->r[4]); // 801DD820
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[4]); c->r[31]=ea;} // 801DD824
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DD808; } // 801DD828
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801DD82C
  if (crb(c,2)) { goto L_801DD840; } // 801DD830
L_801DD834:;
  c->ctr=c->r[3]; // 801DD834
L_801DD838:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[31]=ea;} // 801DD838
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DD838; } // 801DD83C
L_801DD840:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801DD840
  cmps(c,0,(int32_t)c->r[0],0); // 801DD844
  if (!crb(c,2)) { goto L_801DD858; } // 801DD848
  c->r[0]=R8(c->r[29]+0x00000003u); // 801DD84C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD850
  if (crb(c,2)) { goto L_801DD85C; } // 801DD854
L_801DD858:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 801DD858
L_801DD85C:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DD85C
  if (crb(c,2)) { goto L_801DD900; } // 801DD860
  c->r[4]=0u+0x00000000u; // 801DD864
  c->r[3]=0u+0x00000030u; // 801DD868
  goto L_801DD878; // 801DD86C
L_801DD870:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 801DD870
  c->r[4]=c->r[4]+0x00000001u; // 801DD874
L_801DD878:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DD878
  c->r[0]=c->r[7]-c->r[0]; // 801DD87C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DD880
  if (crb(c,0)) { IRQCHK(c); goto L_801DD870; } // 801DD884
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 801DD888
  c->r[3]=c->r[7]-c->r[4]; // 801DD88C
  if (!crb(c,0)) { goto L_801DD908; } // 801DD890
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801DD894
  c->ctr=c->r[0]; // 801DD898
  if (crb(c,2)) { goto L_801DD8EC; } // 801DD89C
L_801DD8A0:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 801DD8A0
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 801DD8A4
  c->r[0]=R8(c->r[6]+0xFFFFFFFEu); // 801DD8A8
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 801DD8AC
  c->r[0]=R8(c->r[6]+0xFFFFFFFDu); // 801DD8B0
  W8(c->r[31]+0xFFFFFFFDu,c->r[0]); // 801DD8B4
  c->r[0]=R8(c->r[6]+0xFFFFFFFCu); // 801DD8B8
  W8(c->r[31]+0xFFFFFFFCu,c->r[0]); // 801DD8BC
  c->r[0]=R8(c->r[6]+0xFFFFFFFBu); // 801DD8C0
  W8(c->r[31]+0xFFFFFFFBu,c->r[0]); // 801DD8C4
  c->r[0]=R8(c->r[6]+0xFFFFFFFAu); // 801DD8C8
  W8(c->r[31]+0xFFFFFFFAu,c->r[0]); // 801DD8CC
  c->r[0]=R8(c->r[6]+0xFFFFFFF9u); // 801DD8D0
  W8(c->r[31]+0xFFFFFFF9u,c->r[0]); // 801DD8D4
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->r[0]=R8(ea); c->r[6]=ea;} // 801DD8D8
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD8DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DD8A0; } // 801DD8E0
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801DD8E4
  if (crb(c,2)) { goto L_801DD908; } // 801DD8E8
L_801DD8EC:;
  c->ctr=c->r[3]; // 801DD8EC
L_801DD8F0:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 801DD8F0
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD8F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DD8F0; } // 801DD8F8
  goto L_801DD908; // 801DD8FC
L_801DD900:;
  c->r[0]=0u+0x00000030u; // 801DD900
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD904
L_801DD908:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801DD908
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801DD90C
  if (crb(c,2)) { goto L_801DD920; } // 801DD910
  c->r[0]=0u+0x0000002Du; // 801DD914
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD918
  goto L_801DD948; // 801DD91C
L_801DD920:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 801DD920
  cmpu(c,0,c->r[0],0x00000001u); // 801DD924
  if (!crb(c,2)) { goto L_801DD938; } // 801DD928
  c->r[0]=0u+0x0000002Bu; // 801DD92C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD930
  goto L_801DD948; // 801DD934
L_801DD938:;
  cmpu(c,0,c->r[0],0x00000002u); // 801DD938
  if (!crb(c,2)) { goto L_801DD948; } // 801DD93C
  c->r[0]=0u+0x00000020u; // 801DD940
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 801DD944
L_801DD948:;
  c->r[3]=c->r[31]|c->r[31]; // 801DD948
  c->lr=0x801DD950u; f_801D4D44(c); // 801DD94C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801DD950
  c->r[3]=c->r[31]|c->r[31]; // 801DD954
  c->r[4]=c->r[28]-c->r[0]; // 801DD958
  c->r[28]=c->r[4]+0xFFFFFFFEu; // 801DD95C
  c->lr=0x801DD964u; f_801D4D44(c); // 801DD960
  c->r[5]=c->r[3]|c->r[3]; // 801DD964
  c->r[3]=c->r[28]|c->r[28]; // 801DD968
  c->r[4]=c->r[31]|c->r[31]; // 801DD96C
  c->lr=0x801DD974u; f_801D8CDC(c); // 801DD970
  c->r[3]=c->r[28]|c->r[28]; // 801DD974
L_801DD978:;
  c->r[0]=R32(c->r[1]+0x00000254u); // 801DD978
  {uint32_t ea=c->r[1]+0x00000248u; c->f[31]=RF64(ea);} // 801DD97C
  c->r[31]=R32(c->r[1]+0x00000244u); // 801DD980
  c->r[30]=R32(c->r[1]+0x00000240u); // 801DD984
  c->r[29]=R32(c->r[1]+0x0000023Cu); // 801DD988
  c->r[28]=R32(c->r[1]+0x00000238u); // 801DD98C
  c->lr=c->r[0]; // 801DD990
  c->r[1]=c->r[1]+0x00000250u; // 801DD994
  return; // 801DD998
}

// __wpformatter
void f_801DD99C(Ctx* __restrict c) {
  trace_call(0x801DD99Cu);
  {uint32_t ea=c->r[1]+0xFFFFFB30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD99C
  c->r[0]=c->lr; // 801DD9A0
  W32(c->r[1]+0x000004D4u,c->r[0]); // 801DD9A4
  {uint32_t ea=c->r[1]+0x00000488u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801DD9A8
  c->r[19]=0u+0x00000020u; // 801DD9AC
  c->r[17]=0u+0x80250000u; // 801DD9B0
  c->r[20]=c->r[3]|c->r[3]; // 801DD9B4
  c->r[21]=c->r[4]|c->r[4]; // 801DD9B8
  c->r[30]=c->r[5]|c->r[5]; // 801DD9BC
  c->r[22]=c->r[6]|c->r[6]; // 801DD9C0
  c->r[23]=c->r[7]|c->r[7]; // 801DD9C4
  c->r[17]=c->r[17]+0xFFFFA1A0u; // 801DD9C8
  c->r[16]=c->r[1]+0x0000047Eu; // 801DD9CC
  c->r[31]=0u+0x00000000u; // 801DD9D0
  c->r[18]=0u+0x80200000u; // 801DD9D4
  c->r[15]=0u+0x80250000u; // 801DD9D8
  c->r[14]=0u+0x00000025u; // 801DD9DC
  W16(c->r[1]+0x0000000Cu,c->r[19]); // 801DD9E0
  goto L_801DE304; // 801DD9E4
L_801DD9E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801DD9E8
  c->r[4]=0u+0x00000025u; // 801DD9EC
  c->lr=0x801DD9F4u; f_801DE4D0(c); // 801DD9F0
  cmps(c,0,(int32_t)c->r[3],0); // 801DD9F4
  c->r[29]=c->r[3]|c->r[3]; // 801DD9F8
  if (!crb(c,2)) { goto L_801DDA3C; } // 801DD9FC
  c->r[3]=c->r[30]|c->r[30]; // 801DDA00
  c->lr=0x801DDA08u; f_801DE420(c); // 801DDA04
  cmps(c,0,(int32_t)c->r[3],0); // 801DDA08
  c->r[5]=c->r[3]|c->r[3]; // 801DDA0C
  c->r[31]=c->r[31]+c->r[3]; // 801DDA10
  if (crb(c,2)) { goto L_801DE310; } // 801DDA14
  c->r[12]=c->r[20]|c->r[20]; // 801DDA18
  c->r[3]=c->r[21]|c->r[21]; // 801DDA1C
  c->r[4]=c->r[30]|c->r[30]; // 801DDA20
  c->ctr=c->r[12]; // 801DDA24
  if (true) { c->lr=0x801DDA2Cu; dispatch(c,c->ctr); } // 801DDA28
  cmps(c,0,(int32_t)c->r[3],0); // 801DDA2C
  if (!crb(c,2)) { goto L_801DE310; } // 801DDA30
  c->r[3]=0u+0xFFFFFFFFu; // 801DDA34
  goto L_801DE314; // 801DDA38
L_801DDA3C:;
  c->r[3]=c->r[3]-c->r[30]; // 801DDA3C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801DDA40
  c->r[0]=c->r[0]+c->r[3]; // 801DDA44
  c->r[5]=sraw(c,c->r[0],1); cr0(c,c->r[5]); // 801DDA48
  c->r[31]=c->r[31]+c->r[5]; // 801DDA4C
  if (crb(c,2)) { goto L_801DDA78; } // 801DDA50
  c->r[12]=c->r[20]|c->r[20]; // 801DDA54
  c->r[3]=c->r[21]|c->r[21]; // 801DDA58
  c->r[4]=c->r[30]|c->r[30]; // 801DDA5C
  c->ctr=c->r[12]; // 801DDA60
  if (true) { c->lr=0x801DDA68u; dispatch(c,c->ctr); } // 801DDA64
  cmps(c,0,(int32_t)c->r[3],0); // 801DDA68
  if (!crb(c,2)) { goto L_801DDA78; } // 801DDA6C
  c->r[3]=0u+0xFFFFFFFFu; // 801DDA70
  goto L_801DE314; // 801DDA74
L_801DDA78:;
  c->r[3]=c->r[29]|c->r[29]; // 801DDA78
  c->r[4]=c->r[22]|c->r[22]; // 801DDA7C
  c->r[5]=c->r[1]+0x00000070u; // 801DDA80
  c->lr=0x801DDA88u; f_801DC200(c); // 801DDA84
  c->r[4]=R16(c->r[1]+0x00000076u); // 801DDA88
  c->r[30]=c->r[3]|c->r[3]; // 801DDA8C
  c->r[0]=c->r[4]+0xFFFFFFDBu; // 801DDA90
  cmpu(c,0,c->r[0],0x00000053u); // 801DDA94
  if (crb(c,1)) { goto L_801DE12C; } // 801DDA98
  c->r[3]=c->r[15]+0xFFFFA050u; // 801DDA9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DDAA0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801DDAA4
  c->ctr=c->r[3]; // 801DDAA8
  if (true) { switch (c->ctr) { case 0x801DDAB0u: goto L_801DDAB0; case 0x801DDC0Cu: goto L_801DDC0C; case 0x801DDD68u: goto L_801DDD68; case 0x801DDDE4u: goto L_801DDDE4; case 0x801DDE60u: goto L_801DDE60; case 0x801DE00Cu: goto L_801DE00C; case 0x801DE0C4u: goto L_801DE0C4; case 0x801DE11Cu: goto L_801DE11C; case 0x801DE12Cu: goto L_801DE12C; default: break; } dispatch(c,c->ctr); return; } // 801DDAAC
L_801DDAB0:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DDAB0
  cmpu(c,0,c->r[0],0x00000003u); // 801DDAB4
  if (!crb(c,2)) { goto L_801DDAD0; } // 801DDAB8
  c->r[3]=c->r[22]|c->r[22]; // 801DDABC
  c->r[4]=0u+0x00000001u; // 801DDAC0
  c->lr=0x801DDAC8u; f_801D4D60(c); // 801DDAC4
  c->r[28]=R32(c->r[3]+0x00000000u); // 801DDAC8
  goto L_801DDB58; // 801DDACC
L_801DDAD0:;
  cmpu(c,0,c->r[0],0x00000004u); // 801DDAD0
  if (!crb(c,2)) { goto L_801DDAF0; } // 801DDAD4
  c->r[3]=c->r[22]|c->r[22]; // 801DDAD8
  c->r[4]=0u+0x00000002u; // 801DDADC
  c->lr=0x801DDAE4u; f_801D4D60(c); // 801DDAE0
  c->r[27]=R32(c->r[3]+0x00000000u); // 801DDAE4
  c->r[26]=R32(c->r[3]+0x00000004u); // 801DDAE8
  goto L_801DDB58; // 801DDAEC
L_801DDAF0:;
  cmpu(c,0,c->r[0],0x00000006u); // 801DDAF0
  if (!crb(c,2)) { goto L_801DDB10; } // 801DDAF4
  c->r[3]=c->r[22]|c->r[22]; // 801DDAF8
  c->r[4]=0u+0x00000002u; // 801DDAFC
  c->lr=0x801DDB04u; f_801D4D60(c); // 801DDB00
  c->r[27]=R32(c->r[3]+0x00000000u); // 801DDB04
  c->r[26]=R32(c->r[3]+0x00000004u); // 801DDB08
  goto L_801DDB58; // 801DDB0C
L_801DDB10:;
  cmpu(c,0,c->r[0],0x00000007u); // 801DDB10
  if (!crb(c,2)) { goto L_801DDB2C; } // 801DDB14
  c->r[3]=c->r[22]|c->r[22]; // 801DDB18
  c->r[4]=0u+0x00000001u; // 801DDB1C
  c->lr=0x801DDB24u; f_801D4D60(c); // 801DDB20
  c->r[28]=R32(c->r[3]+0x00000000u); // 801DDB24
  goto L_801DDB58; // 801DDB28
L_801DDB2C:;
  cmpu(c,0,c->r[0],0x00000008u); // 801DDB2C
  if (!crb(c,2)) { goto L_801DDB48; } // 801DDB30
  c->r[3]=c->r[22]|c->r[22]; // 801DDB34
  c->r[4]=0u+0x00000001u; // 801DDB38
  c->lr=0x801DDB40u; f_801D4D60(c); // 801DDB3C
  c->r[28]=R32(c->r[3]+0x00000000u); // 801DDB40
  goto L_801DDB58; // 801DDB44
L_801DDB48:;
  c->r[3]=c->r[22]|c->r[22]; // 801DDB48
  c->r[4]=0u+0x00000001u; // 801DDB4C
  c->lr=0x801DDB54u; f_801D4D60(c); // 801DDB50
  c->r[28]=R32(c->r[3]+0x00000000u); // 801DDB54
L_801DDB58:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DDB58
  cmpu(c,0,c->r[0],0x00000002u); // 801DDB5C
  if (!crb(c,2)) { goto L_801DDB68; } // 801DDB60
  c->r[28]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 801DDB64
L_801DDB68:;
  cmpu(c,0,c->r[0],0x00000004u); // 801DDB68
  if (crb(c,2)) { goto L_801DDB78; } // 801DDB6C
  cmpu(c,0,c->r[0],0x00000006u); // 801DDB70
  if (!crb(c,2)) { goto L_801DDBBC; } // 801DDB74
L_801DDB78:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 801DDB78
  c->r[4]=c->r[26]|c->r[26]; // 801DDB7C
  c->r[8]=R32(c->r[1]+0x00000074u); // 801DDB80
  c->r[3]=c->r[27]|c->r[27]; // 801DDB84
  c->r[7]=R32(c->r[1]+0x00000078u); // 801DDB88
  c->r[5]=c->r[1]+0x00000480u; // 801DDB8C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DDB90
  c->r[6]=c->r[1]+0x00000060u; // 801DDB94
  W32(c->r[1]+0x00000060u,c->r[9]); // 801DDB98
  W32(c->r[1]+0x00000064u,c->r[8]); // 801DDB9C
  W32(c->r[1]+0x00000068u,c->r[7]); // 801DDBA0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801DDBA4
  c->lr=0x801DDBACu; f_801DC9D4(c); // 801DDBA8
  cmps(c,0,(int32_t)c->r[3],0); // 801DDBAC
  c->r[25]=c->r[3]|c->r[3]; // 801DDBB0
  if (crb(c,2)) { goto L_801DE12C; } // 801DDBB4
  goto L_801DDBF8; // 801DDBB8
L_801DDBBC:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 801DDBBC
  c->r[3]=c->r[28]|c->r[28]; // 801DDBC0
  c->r[7]=R32(c->r[1]+0x00000074u); // 801DDBC4
  c->r[4]=c->r[1]+0x00000480u; // 801DDBC8
  c->r[6]=R32(c->r[1]+0x00000078u); // 801DDBCC
  c->r[5]=c->r[1]+0x00000050u; // 801DDBD0
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DDBD4
  W32(c->r[1]+0x00000050u,c->r[8]); // 801DDBD8
  W32(c->r[1]+0x00000054u,c->r[7]); // 801DDBDC
  W32(c->r[1]+0x00000058u,c->r[6]); // 801DDBE0
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801DDBE4
  c->lr=0x801DDBECu; f_801DC790(c); // 801DDBE8
  cmps(c,0,(int32_t)c->r[3],0); // 801DDBEC
  c->r[25]=c->r[3]|c->r[3]; // 801DDBF0
  if (crb(c,2)) { goto L_801DE12C; } // 801DDBF4
L_801DDBF8:;
  c->r[3]=c->r[16]-c->r[25]; // 801DDBF8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801DDBFC
  c->r[0]=c->r[0]+c->r[3]; // 801DDC00
  c->r[24]=sraw(c,c->r[0],1); // 801DDC04
  goto L_801DE170; // 801DDC08
L_801DDC0C:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DDC0C
  cmpu(c,0,c->r[0],0x00000003u); // 801DDC10
  if (!crb(c,2)) { goto L_801DDC2C; } // 801DDC14
  c->r[3]=c->r[22]|c->r[22]; // 801DDC18
  c->r[4]=0u+0x00000001u; // 801DDC1C
  c->lr=0x801DDC24u; f_801D4D60(c); // 801DDC20
  c->r[28]=R32(c->r[3]+0x00000000u); // 801DDC24
  goto L_801DDCB4; // 801DDC28
L_801DDC2C:;
  cmpu(c,0,c->r[0],0x00000004u); // 801DDC2C
  if (!crb(c,2)) { goto L_801DDC4C; } // 801DDC30
  c->r[3]=c->r[22]|c->r[22]; // 801DDC34
  c->r[4]=0u+0x00000002u; // 801DDC38
  c->lr=0x801DDC40u; f_801D4D60(c); // 801DDC3C
  c->r[27]=R32(c->r[3]+0x00000000u); // 801DDC40
  c->r[26]=R32(c->r[3]+0x00000004u); // 801DDC44
  goto L_801DDCB4; // 801DDC48
L_801DDC4C:;
  cmpu(c,0,c->r[0],0x00000006u); // 801DDC4C
  if (!crb(c,2)) { goto L_801DDC6C; } // 801DDC50
  c->r[3]=c->r[22]|c->r[22]; // 801DDC54
  c->r[4]=0u+0x00000002u; // 801DDC58
  c->lr=0x801DDC60u; f_801D4D60(c); // 801DDC5C
  c->r[27]=R32(c->r[3]+0x00000000u); // 801DDC60
  c->r[26]=R32(c->r[3]+0x00000004u); // 801DDC64
  goto L_801DDCB4; // 801DDC68
L_801DDC6C:;
  cmpu(c,0,c->r[0],0x00000007u); // 801DDC6C
  if (!crb(c,2)) { goto L_801DDC88; } // 801DDC70
  c->r[3]=c->r[22]|c->r[22]; // 801DDC74
  c->r[4]=0u+0x00000001u; // 801DDC78
  c->lr=0x801DDC80u; f_801D4D60(c); // 801DDC7C
  c->r[28]=R32(c->r[3]+0x00000000u); // 801DDC80
  goto L_801DDCB4; // 801DDC84
L_801DDC88:;
  cmpu(c,0,c->r[0],0x00000008u); // 801DDC88
  if (!crb(c,2)) { goto L_801DDCA4; } // 801DDC8C
  c->r[3]=c->r[22]|c->r[22]; // 801DDC90
  c->r[4]=0u+0x00000001u; // 801DDC94
  c->lr=0x801DDC9Cu; f_801D4D60(c); // 801DDC98
  c->r[28]=R32(c->r[3]+0x00000000u); // 801DDC9C
  goto L_801DDCB4; // 801DDCA0
L_801DDCA4:;
  c->r[3]=c->r[22]|c->r[22]; // 801DDCA4
  c->r[4]=0u+0x00000001u; // 801DDCA8
  c->lr=0x801DDCB0u; f_801D4D60(c); // 801DDCAC
  c->r[28]=R32(c->r[3]+0x00000000u); // 801DDCB0
L_801DDCB4:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DDCB4
  cmpu(c,0,c->r[0],0x00000002u); // 801DDCB8
  if (!crb(c,2)) { goto L_801DDCC4; } // 801DDCBC
  c->r[28]=rotl(c->r[28],0)&0x0000FFFFu; // 801DDCC0
L_801DDCC4:;
  cmpu(c,0,c->r[0],0x00000004u); // 801DDCC4
  if (crb(c,2)) { goto L_801DDCD4; } // 801DDCC8
  cmpu(c,0,c->r[0],0x00000006u); // 801DDCCC
  if (!crb(c,2)) { goto L_801DDD18; } // 801DDCD0
L_801DDCD4:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 801DDCD4
  c->r[4]=c->r[26]|c->r[26]; // 801DDCD8
  c->r[8]=R32(c->r[1]+0x00000074u); // 801DDCDC
  c->r[3]=c->r[27]|c->r[27]; // 801DDCE0
  c->r[7]=R32(c->r[1]+0x00000078u); // 801DDCE4
  c->r[5]=c->r[1]+0x00000480u; // 801DDCE8
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DDCEC
  c->r[6]=c->r[1]+0x00000040u; // 801DDCF0
  W32(c->r[1]+0x00000040u,c->r[9]); // 801DDCF4
  W32(c->r[1]+0x00000044u,c->r[8]); // 801DDCF8
  W32(c->r[1]+0x00000048u,c->r[7]); // 801DDCFC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801DDD00
  c->lr=0x801DDD08u; f_801DC9D4(c); // 801DDD04
  cmps(c,0,(int32_t)c->r[3],0); // 801DDD08
  c->r[25]=c->r[3]|c->r[3]; // 801DDD0C
  if (crb(c,2)) { goto L_801DE12C; } // 801DDD10
  goto L_801DDD54; // 801DDD14
L_801DDD18:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 801DDD18
  c->r[3]=c->r[28]|c->r[28]; // 801DDD1C
  c->r[7]=R32(c->r[1]+0x00000074u); // 801DDD20
  c->r[4]=c->r[1]+0x00000480u; // 801DDD24
  c->r[6]=R32(c->r[1]+0x00000078u); // 801DDD28
  c->r[5]=c->r[1]+0x00000030u; // 801DDD2C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DDD30
  W32(c->r[1]+0x00000030u,c->r[8]); // 801DDD34
  W32(c->r[1]+0x00000034u,c->r[7]); // 801DDD38
  W32(c->r[1]+0x00000038u,c->r[6]); // 801DDD3C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801DDD40
  c->lr=0x801DDD48u; f_801DC790(c); // 801DDD44
  cmps(c,0,(int32_t)c->r[3],0); // 801DDD48
  c->r[25]=c->r[3]|c->r[3]; // 801DDD4C
  if (crb(c,2)) { goto L_801DE12C; } // 801DDD50
L_801DDD54:;
  c->r[3]=c->r[16]-c->r[25]; // 801DDD54
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801DDD58
  c->r[0]=c->r[0]+c->r[3]; // 801DDD5C
  c->r[24]=sraw(c,c->r[0],1); // 801DDD60
  goto L_801DE170; // 801DDD64
L_801DDD68:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DDD68
  cmpu(c,0,c->r[0],0x00000009u); // 801DDD6C
  if (!crb(c,2)) { goto L_801DDD88; } // 801DDD70
  c->r[3]=c->r[22]|c->r[22]; // 801DDD74
  c->r[4]=0u+0x00000003u; // 801DDD78
  c->lr=0x801DDD80u; f_801D4D60(c); // 801DDD7C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DDD80
  goto L_801DDD98; // 801DDD84
L_801DDD88:;
  c->r[3]=c->r[22]|c->r[22]; // 801DDD88
  c->r[4]=0u+0x00000003u; // 801DDD8C
  c->lr=0x801DDD94u; f_801D4D60(c); // 801DDD90
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DDD94
L_801DDD98:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 801DDD98
  c->r[3]=c->r[1]+0x00000480u; // 801DDD9C
  c->r[6]=R32(c->r[1]+0x00000074u); // 801DDDA0
  c->r[4]=c->r[1]+0x00000020u; // 801DDDA4
  c->r[5]=R32(c->r[1]+0x00000078u); // 801DDDA8
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DDDAC
  W32(c->r[1]+0x00000020u,c->r[7]); // 801DDDB0
  W32(c->r[1]+0x00000024u,c->r[6]); // 801DDDB4
  W32(c->r[1]+0x00000028u,c->r[5]); // 801DDDB8
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801DDDBC
  c->lr=0x801DDDC4u; f_801DD20C(c); // 801DDDC0
  cmps(c,0,(int32_t)c->r[3],0); // 801DDDC4
  c->r[25]=c->r[3]|c->r[3]; // 801DDDC8
  if (crb(c,2)) { goto L_801DE12C; } // 801DDDCC
  c->r[3]=c->r[16]-c->r[3]; // 801DDDD0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801DDDD4
  c->r[0]=c->r[0]+c->r[3]; // 801DDDD8
  c->r[24]=sraw(c,c->r[0],1); // 801DDDDC
  goto L_801DE170; // 801DDDE0
L_801DDDE4:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DDDE4
  cmpu(c,0,c->r[0],0x00000009u); // 801DDDE8
  if (!crb(c,2)) { goto L_801DDE04; } // 801DDDEC
  c->r[3]=c->r[22]|c->r[22]; // 801DDDF0
  c->r[4]=0u+0x00000003u; // 801DDDF4
  c->lr=0x801DDDFCu; f_801D4D60(c); // 801DDDF8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DDDFC
  goto L_801DDE14; // 801DDE00
L_801DDE04:;
  c->r[3]=c->r[22]|c->r[22]; // 801DDE04
  c->r[4]=0u+0x00000003u; // 801DDE08
  c->lr=0x801DDE10u; f_801D4D60(c); // 801DDE0C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DDE10
L_801DDE14:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 801DDE14
  c->r[3]=c->r[1]+0x00000480u; // 801DDE18
  c->r[6]=R32(c->r[1]+0x00000074u); // 801DDE1C
  c->r[4]=c->r[1]+0x00000010u; // 801DDE20
  c->r[5]=R32(c->r[1]+0x00000078u); // 801DDE24
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DDE28
  W32(c->r[1]+0x00000010u,c->r[7]); // 801DDE2C
  W32(c->r[1]+0x00000014u,c->r[6]); // 801DDE30
  W32(c->r[1]+0x00000018u,c->r[5]); // 801DDE34
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DDE38
  c->lr=0x801DDE40u; f_801DCC90(c); // 801DDE3C
  cmps(c,0,(int32_t)c->r[3],0); // 801DDE40
  c->r[25]=c->r[3]|c->r[3]; // 801DDE44
  if (crb(c,2)) { goto L_801DE12C; } // 801DDE48
  c->r[3]=c->r[16]-c->r[3]; // 801DDE4C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801DDE50
  c->r[0]=c->r[0]+c->r[3]; // 801DDE54
  c->r[24]=sraw(c,c->r[0],1); // 801DDE58
  goto L_801DE170; // 801DDE5C
L_801DDE60:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DDE60
  cmpu(c,0,c->r[0],0x00000005u); // 801DDE64
  if (!crb(c,2)) { goto L_801DDF34; } // 801DDE68
  c->r[3]=c->r[22]|c->r[22]; // 801DDE6C
  c->r[4]=0u+0x00000001u; // 801DDE70
  c->lr=0x801DDE78u; f_801D4D60(c); // 801DDE74
  cmps(c,0,(int32_t)c->r[23],0); // 801DDE78
  c->r[25]=R32(c->r[3]+0x00000000u); // 801DDE7C
  if (crb(c,2)) { goto L_801DDEA4; } // 801DDE80
  cmps(c,0,(int32_t)c->r[25],0); // 801DDE84
  if (!crb(c,2)) { goto L_801DDEA4; } // 801DDE88
  c->r[3]=0u+0x00000000u; // 801DDE8C
  c->r[4]=0u+0x00000000u; // 801DDE90
  c->r[5]=0u+0xFFFFFFFFu; // 801DDE94
  c->lr=0x801DDE9Cu; f_801DE684(c); // 801DDE98
  c->r[3]=0u+0xFFFFFFFFu; // 801DDE9C
  goto L_801DE314; // 801DDEA0
L_801DDEA4:;
  cmps(c,0,(int32_t)c->r[25],0); // 801DDEA4
  if (!crb(c,2)) { goto L_801DDEB0; } // 801DDEA8
  c->r[25]=c->r[17]+0x0000006Cu; // 801DDEAC
L_801DDEB0:;
  c->r[0]=R8(c->r[1]+0x00000073u); // 801DDEB0
  cmps(c,0,(int32_t)c->r[0],0); // 801DDEB4
  if (crb(c,2)) { goto L_801DDEE8; } // 801DDEB8
  c->r[0]=R8(c->r[1]+0x00000072u); // 801DDEBC
  c->r[3]=R16(c->r[25]+0x00000000u); // 801DDEC0
  c->r[25]=c->r[25]+0x00000002u; // 801DDEC4
  cmps(c,0,(int32_t)c->r[0],0); // 801DDEC8
  c->r[24]=rotl(c->r[3],0)&0x000000FFu; // 801DDECC
  if (crb(c,2)) { goto L_801DE170; } // 801DDED0
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DDED4
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 801DDED8
  if (!crb(c,1)) { goto L_801DE170; } // 801DDEDC
  c->r[24]=c->r[0]|c->r[0]; // 801DDEE0
  goto L_801DE170; // 801DDEE4
L_801DDEE8:;
  c->r[0]=R8(c->r[1]+0x00000072u); // 801DDEE8
  cmps(c,0,(int32_t)c->r[0],0); // 801DDEEC
  if (crb(c,2)) { goto L_801DDF24; } // 801DDEF0
  c->r[24]=R32(c->r[1]+0x0000007Cu); // 801DDEF4
  c->r[3]=c->r[25]|c->r[25]; // 801DDEF8
  c->r[4]=0u+0x00000000u; // 801DDEFC
  c->r[5]=c->r[24]|c->r[24]; // 801DDF00
  c->lr=0x801DDF08u; f_801DC1D8(c); // 801DDF04
  cmps(c,0,(int32_t)c->r[3],0); // 801DDF08
  if (crb(c,2)) { goto L_801DE170; } // 801DDF0C
  c->r[3]=c->r[3]-c->r[25]; // 801DDF10
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801DDF14
  c->r[0]=c->r[0]+c->r[3]; // 801DDF18
  c->r[24]=sraw(c,c->r[0],1); // 801DDF1C
  goto L_801DE170; // 801DDF20
L_801DDF24:;
  c->r[3]=c->r[25]|c->r[25]; // 801DDF24
  c->lr=0x801DDF2Cu; f_801DE420(c); // 801DDF28
  c->r[24]=c->r[3]|c->r[3]; // 801DDF2C
  goto L_801DE170; // 801DDF30
L_801DDF34:;
  c->r[3]=c->r[22]|c->r[22]; // 801DDF34
  c->r[4]=0u+0x00000001u; // 801DDF38
  c->lr=0x801DDF40u; f_801D4D60(c); // 801DDF3C
  cmps(c,0,(int32_t)c->r[23],0); // 801DDF40
  c->r[24]=R32(c->r[3]+0x00000000u); // 801DDF44
  if (crb(c,2)) { goto L_801DDF6C; } // 801DDF48
  cmps(c,0,(int32_t)c->r[24],0); // 801DDF4C
  if (!crb(c,2)) { goto L_801DDF6C; } // 801DDF50
  c->r[3]=0u+0x00000000u; // 801DDF54
  c->r[4]=0u+0x00000000u; // 801DDF58
  c->r[5]=0u+0xFFFFFFFFu; // 801DDF5C
  c->lr=0x801DDF64u; f_801DE684(c); // 801DDF60
  c->r[3]=0u+0xFFFFFFFFu; // 801DDF64
  goto L_801DE314; // 801DDF68
L_801DDF6C:;
  cmps(c,0,(int32_t)c->r[24],0); // 801DDF6C
  if (!crb(c,2)) { goto L_801DDF78; } // 801DDF70
  c->r[24]=c->r[18]+0xFFFFB5E0u; // 801DDF74
L_801DDF78:;
  c->r[0]=R8(c->r[1]+0x00000073u); // 801DDF78
  cmps(c,0,(int32_t)c->r[0],0); // 801DDF7C
  if (crb(c,2)) { goto L_801DDFAC; } // 801DDF80
  c->r[0]=R8(c->r[1]+0x00000072u); // 801DDF84
  c->r[3]=R16(c->r[25]+0x00000000u); // 801DDF88
  cmps(c,0,(int32_t)c->r[0],0); // 801DDF8C
  c->r[25]=rotl(c->r[3],0)&0x000000FFu; // 801DDF90
  if (crb(c,2)) { goto L_801DDFE8; } // 801DDF94
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 801DDF98
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801DDF9C
  if (!crb(c,1)) { goto L_801DDFE8; } // 801DDFA0
  c->r[25]=c->r[0]|c->r[0]; // 801DDFA4
  goto L_801DDFE8; // 801DDFA8
L_801DDFAC:;
  c->r[0]=R8(c->r[1]+0x00000072u); // 801DDFAC
  cmps(c,0,(int32_t)c->r[0],0); // 801DDFB0
  if (crb(c,2)) { goto L_801DDFDC; } // 801DDFB4
  c->r[25]=R32(c->r[1]+0x0000007Cu); // 801DDFB8
  c->r[3]=c->r[24]|c->r[24]; // 801DDFBC
  c->r[4]=0u+0x00000000u; // 801DDFC0
  c->r[5]=c->r[25]|c->r[25]; // 801DDFC4
  c->lr=0x801DDFCCu; f_801D8F20(c); // 801DDFC8
  cmps(c,0,(int32_t)c->r[3],0); // 801DDFCC
  if (crb(c,2)) { goto L_801DDFE8; } // 801DDFD0
  c->r[25]=c->r[3]-c->r[24]; // 801DDFD4
  goto L_801DDFE8; // 801DDFD8
L_801DDFDC:;
  c->r[3]=c->r[24]|c->r[24]; // 801DDFDC
  c->lr=0x801DDFE4u; f_801D4D44(c); // 801DDFE0
  c->r[25]=c->r[3]|c->r[3]; // 801DDFE4
L_801DDFE8:;
  c->r[4]=c->r[24]|c->r[24]; // 801DDFE8
  c->r[5]=c->r[25]|c->r[25]; // 801DDFEC
  c->r[3]=c->r[1]+0x00000080u; // 801DDFF0
  c->lr=0x801DDFF8u; f_801D8CDC(c); // 801DDFF4
  cmps(c,0,(int32_t)c->r[3],0); // 801DDFF8
  c->r[24]=c->r[3]|c->r[3]; // 801DDFFC
  if (crb(c,0)) { goto L_801DE12C; } // 801DE000
  c->r[25]=c->r[1]+0x00000080u; // 801DE004
  goto L_801DE170; // 801DE008
L_801DE00C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801DE00C
  if (crb(c,2)) { goto L_801DE02C; } // 801DE010
  c->r[3]=0u+0x00000000u; // 801DE014
  c->r[4]=0u+0x00000000u; // 801DE018
  c->r[5]=0u+0xFFFFFFFFu; // 801DE01C
  c->lr=0x801DE024u; f_801DE684(c); // 801DE020
  c->r[3]=0u+0xFFFFFFFFu; // 801DE024
  goto L_801DE314; // 801DE028
L_801DE02C:;
  c->r[3]=c->r[22]|c->r[22]; // 801DE02C
  c->r[4]=0u+0x00000001u; // 801DE030
  c->lr=0x801DE038u; f_801D4D60(c); // 801DE034
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DE038
  c->r[25]=R32(c->r[3]+0x00000000u); // 801DE03C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE040
  if (crb(c,2)) { goto L_801DE07C; } // 801DE044
  cmps(c,0,(int32_t)c->r[0],2); // 801DE048
  if (crb(c,2)) { goto L_801DE084; } // 801DE04C
  cmps(c,0,(int32_t)c->r[0],3); // 801DE050
  if (crb(c,2)) { goto L_801DE08C; } // 801DE054
  cmps(c,0,(int32_t)c->r[0],6); // 801DE058
  if (crb(c,2)) { goto L_801DE094; } // 801DE05C
  cmps(c,0,(int32_t)c->r[0],7); // 801DE060
  if (crb(c,2)) { goto L_801DE0A4; } // 801DE064
  cmps(c,0,(int32_t)c->r[0],8); // 801DE068
  if (crb(c,2)) { goto L_801DE0AC; } // 801DE06C
  cmps(c,0,(int32_t)c->r[0],4); // 801DE070
  if (crb(c,2)) { goto L_801DE0B4; } // 801DE074
  goto L_801DE304; // 801DE078
L_801DE07C:;
  W32(c->r[25]+0x00000000u,c->r[31]); // 801DE07C
  goto L_801DE304; // 801DE080
L_801DE084:;
  W16(c->r[25]+0x00000000u,c->r[31]); // 801DE084
  goto L_801DE304; // 801DE088
L_801DE08C:;
  W32(c->r[25]+0x00000000u,c->r[31]); // 801DE08C
  goto L_801DE304; // 801DE090
L_801DE094:;
  W32(c->r[25]+0x00000004u,c->r[31]); // 801DE094
  c->r[0]=sraw(c,c->r[31],31); // 801DE098
  W32(c->r[25]+0x00000000u,c->r[0]); // 801DE09C
  goto L_801DE304; // 801DE0A0
L_801DE0A4:;
  W32(c->r[25]+0x00000000u,c->r[31]); // 801DE0A4
  goto L_801DE304; // 801DE0A8
L_801DE0AC:;
  W32(c->r[25]+0x00000000u,c->r[31]); // 801DE0AC
  goto L_801DE304; // 801DE0B0
L_801DE0B4:;
  W32(c->r[25]+0x00000004u,c->r[31]); // 801DE0B4
  c->r[0]=sraw(c,c->r[31],31); // 801DE0B8
  W32(c->r[25]+0x00000000u,c->r[0]); // 801DE0BC
  goto L_801DE304; // 801DE0C0
L_801DE0C4:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 801DE0C4
  c->r[25]=c->r[1]+0x00000080u; // 801DE0C8
  cmpu(c,0,c->r[0],0x00000005u); // 801DE0CC
  if (!crb(c,2)) { goto L_801DE0F0; } // 801DE0D0
  c->r[3]=c->r[22]|c->r[22]; // 801DE0D4
  c->r[4]=0u+0x00000001u; // 801DE0D8
  c->lr=0x801DE0E0u; f_801D4D60(c); // 801DE0DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DE0E0
  c->r[24]=0u+0x00000001u; // 801DE0E4
  W16(c->r[1]+0x00000080u,c->r[0]); // 801DE0E8
  goto L_801DE170; // 801DE0EC
L_801DE0F0:;
  c->r[3]=c->r[22]|c->r[22]; // 801DE0F0
  c->r[4]=0u+0x00000001u; // 801DE0F4
  c->lr=0x801DE0FCu; f_801D4D60(c); // 801DE0F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DE0FC
  c->r[3]=c->r[25]|c->r[25]; // 801DE100
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DE104
  c->r[4]=c->r[1]+0x00000008u; // 801DE108
  c->r[5]=0u+0x00000001u; // 801DE10C
  c->lr=0x801DE114u; f_801D8C5C(c); // 801DE110
  c->r[24]=c->r[3]|c->r[3]; // 801DE114
  goto L_801DE170; // 801DE118
L_801DE11C:;
  W16(c->r[1]+0x00000080u,c->r[14]); // 801DE11C
  c->r[25]=c->r[1]+0x00000080u; // 801DE120
  c->r[24]=0u+0x00000001u; // 801DE124
  goto L_801DE170; // 801DE128
L_801DE12C:;
  c->r[3]=c->r[29]|c->r[29]; // 801DE12C
  c->lr=0x801DE134u; f_801DE420(c); // 801DE130
  cmps(c,0,(int32_t)c->r[3],0); // 801DE134
  c->r[5]=c->r[3]|c->r[3]; // 801DE138
  c->r[31]=c->r[31]+c->r[3]; // 801DE13C
  if (crb(c,2)) { goto L_801DE168; } // 801DE140
  c->r[12]=c->r[20]|c->r[20]; // 801DE144
  c->r[3]=c->r[21]|c->r[21]; // 801DE148
  c->r[4]=c->r[29]|c->r[29]; // 801DE14C
  c->ctr=c->r[12]; // 801DE150
  if (true) { c->lr=0x801DE158u; dispatch(c,c->ctr); } // 801DE154
  cmps(c,0,(int32_t)c->r[3],0); // 801DE158
  if (!crb(c,2)) { goto L_801DE168; } // 801DE15C
  c->r[3]=0u+0xFFFFFFFFu; // 801DE160
  goto L_801DE314; // 801DE164
L_801DE168:;
  c->r[3]=c->r[31]|c->r[31]; // 801DE168
  goto L_801DE314; // 801DE16C
L_801DE170:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 801DE170
  c->r[29]=c->r[24]|c->r[24]; // 801DE174
  cmps(c,0,(int32_t)c->r[0],0); // 801DE178
  if (crb(c,2)) { goto L_801DE284; } // 801DE17C
  cmpu(c,0,c->r[0],0x00000002u); // 801DE180
  c->r[0]=0u+0x00000020u; // 801DE184
  if (!crb(c,2)) { goto L_801DE190; } // 801DE188
  c->r[0]=0u+0x00000030u; // 801DE18C
L_801DE190:;
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801DE190
  c->r[3]=R16(c->r[25]+0x00000000u); // 801DE194
  cmpu(c,0,c->r[3],0x0000002Bu); // 801DE198
  if (crb(c,2)) { goto L_801DE1B0; } // 801DE19C
  cmpu(c,0,c->r[3],0x0000002Du); // 801DE1A0
  if (crb(c,2)) { goto L_801DE1B0; } // 801DE1A4
  cmpu(c,0,c->r[3],0x00000020u); // 801DE1A8
  if (!crb(c,2)) { goto L_801DE1E8; } // 801DE1AC
L_801DE1B0:;
  cmpu(c,0,c->r[0],0x00000030u); // 801DE1B0
  if (!crb(c,2)) { goto L_801DE1E8; } // 801DE1B4
  c->r[12]=c->r[20]|c->r[20]; // 801DE1B8
  c->r[3]=c->r[21]|c->r[21]; // 801DE1BC
  c->r[4]=c->r[25]|c->r[25]; // 801DE1C0
  c->r[5]=0u+0x00000001u; // 801DE1C4
  c->ctr=c->r[12]; // 801DE1C8
  if (true) { c->lr=0x801DE1D0u; dispatch(c,c->ctr); } // 801DE1CC
  cmps(c,0,(int32_t)c->r[3],0); // 801DE1D0
  if (!crb(c,2)) { goto L_801DE1E0; } // 801DE1D4
  c->r[3]=0u+0xFFFFFFFFu; // 801DE1D8
  goto L_801DE314; // 801DE1DC
L_801DE1E0:;
  c->r[25]=c->r[25]+0x00000002u; // 801DE1E0
  c->r[24]=c->r[24]+0xFFFFFFFFu; // 801DE1E4
L_801DE1E8:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 801DE1E8
  cmpu(c,0,c->r[0],0x00000002u); // 801DE1EC
  if (!crb(c,2)) { goto L_801DE278; } // 801DE1F0
  c->r[0]=R16(c->r[1]+0x00000076u); // 801DE1F4
  cmpu(c,0,c->r[0],0x00000061u); // 801DE1F8
  if (crb(c,2)) { goto L_801DE208; } // 801DE1FC
  cmpu(c,0,c->r[0],0x00000041u); // 801DE200
  if (!crb(c,2)) { goto L_801DE278; } // 801DE204
L_801DE208:;
  cmps(c,0,(int32_t)c->r[24],2); // 801DE208
  if (!crb(c,0)) { goto L_801DE218; } // 801DE20C
  c->r[3]=0u+0xFFFFFFFFu; // 801DE210
  goto L_801DE314; // 801DE214
L_801DE218:;
  c->r[12]=c->r[20]|c->r[20]; // 801DE218
  c->r[3]=c->r[21]|c->r[21]; // 801DE21C
  c->r[4]=c->r[25]|c->r[25]; // 801DE220
  c->r[5]=0u+0x00000002u; // 801DE224
  c->ctr=c->r[12]; // 801DE228
  if (true) { c->lr=0x801DE230u; dispatch(c,c->ctr); } // 801DE22C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE230
  if (!crb(c,2)) { goto L_801DE240; } // 801DE234
  c->r[3]=0u+0xFFFFFFFFu; // 801DE238
  goto L_801DE314; // 801DE23C
L_801DE240:;
  c->r[24]=c->r[24]+0xFFFFFFFEu; // 801DE240
  c->r[25]=c->r[25]+0x00000004u; // 801DE244
  goto L_801DE278; // 801DE248
L_801DE24C:;
  c->r[12]=c->r[20]|c->r[20]; // 801DE24C
  c->r[3]=c->r[21]|c->r[21]; // 801DE250
  c->r[4]=c->r[1]+0x0000000Cu; // 801DE254
  c->r[5]=0u+0x00000001u; // 801DE258
  c->ctr=c->r[12]; // 801DE25C
  if (true) { c->lr=0x801DE264u; dispatch(c,c->ctr); } // 801DE260
  cmps(c,0,(int32_t)c->r[3],0); // 801DE264
  if (!crb(c,2)) { goto L_801DE274; } // 801DE268
  c->r[3]=0u+0xFFFFFFFFu; // 801DE26C
  goto L_801DE314; // 801DE270
L_801DE274:;
  c->r[29]=c->r[29]+0x00000001u; // 801DE274
L_801DE278:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 801DE278
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801DE27C
  if (crb(c,0)) { IRQCHK(c); goto L_801DE24C; } // 801DE280
L_801DE284:;
  cmps(c,0,(int32_t)c->r[24],0); // 801DE284
  if (crb(c,2)) { goto L_801DE2B4; } // 801DE288
  c->r[12]=c->r[20]|c->r[20]; // 801DE28C
  c->r[3]=c->r[21]|c->r[21]; // 801DE290
  c->r[4]=c->r[25]|c->r[25]; // 801DE294
  c->r[5]=c->r[24]|c->r[24]; // 801DE298
  c->ctr=c->r[12]; // 801DE29C
  if (true) { c->lr=0x801DE2A4u; dispatch(c,c->ctr); } // 801DE2A0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE2A4
  if (!crb(c,2)) { goto L_801DE2B4; } // 801DE2A8
  c->r[3]=0u+0xFFFFFFFFu; // 801DE2AC
  goto L_801DE314; // 801DE2B0
L_801DE2B4:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 801DE2B4
  cmps(c,0,(int32_t)c->r[0],0); // 801DE2B8
  if (!crb(c,2)) { goto L_801DE300; } // 801DE2BC
  goto L_801DE2F4; // 801DE2C0
L_801DE2C4:;
  c->r[12]=c->r[20]|c->r[20]; // 801DE2C4
  c->r[3]=c->r[21]|c->r[21]; // 801DE2C8
  W16(c->r[1]+0x0000000Au,c->r[19]); // 801DE2CC
  c->r[4]=c->r[1]+0x0000000Au; // 801DE2D0
  c->r[5]=0u+0x00000001u; // 801DE2D4
  c->ctr=c->r[12]; // 801DE2D8
  if (true) { c->lr=0x801DE2E0u; dispatch(c,c->ctr); } // 801DE2DC
  cmps(c,0,(int32_t)c->r[3],0); // 801DE2E0
  if (!crb(c,2)) { goto L_801DE2F0; } // 801DE2E4
  c->r[3]=0u+0xFFFFFFFFu; // 801DE2E8
  goto L_801DE314; // 801DE2EC
L_801DE2F0:;
  c->r[29]=c->r[29]+0x00000001u; // 801DE2F0
L_801DE2F4:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 801DE2F4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801DE2F8
  if (crb(c,0)) { IRQCHK(c); goto L_801DE2C4; } // 801DE2FC
L_801DE300:;
  c->r[31]=c->r[31]+c->r[29]; // 801DE300
L_801DE304:;
  c->r[0]=R16(c->r[30]+0x00000000u); // 801DE304
  cmps(c,0,(int32_t)c->r[0],0); // 801DE308
  if (!crb(c,2)) { IRQCHK(c); goto L_801DD9E8; } // 801DE30C
L_801DE310:;
  c->r[3]=c->r[31]|c->r[31]; // 801DE310
L_801DE314:;
  {uint32_t ea=c->r[1]+0x00000488u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801DE314
  c->r[0]=R32(c->r[1]+0x000004D4u); // 801DE318
  c->lr=c->r[0]; // 801DE31C
  c->r[1]=c->r[1]+0x000004D0u; // 801DE320
  return; // 801DE324
}

// __wStringWrite
void f_801DE328(Ctx* __restrict c) {
  trace_call(0x801DE328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE328
  c->r[0]=c->lr; // 801DE32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE334
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE338
  c->r[30]=c->r[3]|c->r[3]; // 801DE33C
  c->r[6]=R32(c->r[3]+0x00000008u); // 801DE340
  c->r[7]=R32(c->r[3]+0x00000004u); // 801DE344
  c->r[0]=c->r[6]+c->r[5]; // 801DE348
  cmpu(c,0,c->r[0],c->r[7]); // 801DE34C
  c->r[31]=c->r[7]-c->r[6]; // 801DE350
  if (crb(c,1)) { goto L_801DE35C; } // 801DE354
  c->r[31]=c->r[5]|c->r[5]; // 801DE358
L_801DE35C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801DE35C
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801DE360
  c->r[5]=c->r[31]|c->r[31]; // 801DE364
  c->r[3]=c->r[3]+c->r[0]; // 801DE368
  c->lr=0x801DE370u; f_801DC168(c); // 801DE36C
  c->r[0]=R32(c->r[30]+0x00000008u); // 801DE370
  c->r[0]=c->r[0]+c->r[31]; // 801DE374
  W32(c->r[30]+0x00000008u,c->r[0]); // 801DE378
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE37C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE380
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE384
  c->lr=c->r[0]; // 801DE388
  c->r[1]=c->r[1]+0x00000010u; // 801DE38C
  return; // 801DE390
}

// vswprintf
void f_801DE394(Ctx* __restrict c) {
  trace_call(0x801DE394u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE394
  c->r[0]=c->lr; // 801DE398
  c->r[7]=0u+0x801E0000u; // 801DE39C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DE3A0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DE3A4
  c->r[31]=0u+0x00000000u; // 801DE3A8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DE3AC
  c->r[30]=c->r[4]|c->r[4]; // 801DE3B0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DE3B4
  c->r[29]=c->r[3]|c->r[3]; // 801DE3B8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DE3BC
  c->r[3]=c->r[7]+0xFFFFE328u; // 801DE3C0
  c->r[7]=0u+0x00000000u; // 801DE3C4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801DE3C8
  c->r[4]=c->r[1]+0x00000008u; // 801DE3CC
  W32(c->r[1]+0x00000010u,c->r[31]); // 801DE3D0
  c->lr=0x801DE3D8u; f_801DD99C(c); // 801DE3D4
  cmps(c,0,(int32_t)c->r[3],0); // 801DE3D8
  if (crb(c,0)) { goto L_801DE404; } // 801DE3DC
  cmpu(c,0,c->r[3],c->r[30]); // 801DE3E0
  if (!crb(c,0)) { goto L_801DE3F4; } // 801DE3E4
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801DE3E8
  W16(c->r[29]+c->r[0],c->r[31]); // 801DE3EC
  goto L_801DE404; // 801DE3F0
L_801DE3F4:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 801DE3F4
  c->r[3]=0u+0xFFFFFFFFu; // 801DE3F8
  c->r[4]=c->r[29]+c->r[0]; // 801DE3FC
  W16(c->r[4]+0xFFFFFFFEu,c->r[31]); // 801DE400
L_801DE404:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DE404
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DE408
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DE40C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DE410
  c->lr=c->r[0]; // 801DE414
  c->r[1]=c->r[1]+0x00000030u; // 801DE418
  return; // 801DE41C
}

// fn_801DE420
void f_801DE420(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0xFFFFFFFEu; // 801DE420
  c->r[3]=0u+0xFFFFFFFFu; // 801DE424
L_801DE428:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 801DE428
  c->r[3]=c->r[3]+0x00000001u; // 801DE42C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE430
  if (!crb(c,2)) { IRQCHK(c); goto L_801DE428; } // 801DE434
  return; // 801DE438
}

// fn_801DE43C
void f_801DE43C(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 801DE43C
  c->r[5]=c->r[3]+0xFFFFFFFEu; // 801DE440
L_801DE444:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 801DE444
  {uint32_t ea=c->r[5]+0x00000002u; W16(ea,c->r[0]); c->r[5]=ea;} // 801DE448
  cmps(c,0,(int32_t)c->r[0],0); // 801DE44C
  if (!crb(c,2)) { IRQCHK(c); goto L_801DE444; } // 801DE450
  return; // 801DE454
}

// fn_801DE458
void f_801DE458(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 801DE458
  c->r[6]=c->r[3]+0xFFFFFFFEu; // 801DE45C
  c->r[5]=c->r[5]+0x00000001u; // 801DE460
  goto L_801DE490; // 801DE464
L_801DE468:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 801DE468
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 801DE46C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE470
  if (!crb(c,2)) { goto L_801DE490; } // 801DE474
  c->r[0]=0u+0x00000000u; // 801DE478
  goto L_801DE484; // 801DE47C
L_801DE480:;
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 801DE480
L_801DE484:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801DE484
  if (!crb(c,2)) { IRQCHK(c); goto L_801DE480; } // 801DE488
  return; // 801DE48C
L_801DE490:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 801DE490
  if (!crb(c,2)) { IRQCHK(c); goto L_801DE468; } // 801DE494
  return; // 801DE498
}

// fn_801DE49C
void f_801DE49C(Ctx* __restrict c) {
  c->r[5]=c->r[3]+0xFFFFFFFEu; // 801DE49C
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 801DE4A0
  goto L_801DE4B8; // 801DE4A4
L_801DE4A8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DE4A8
  if (!crb(c,2)) { goto L_801DE4B8; } // 801DE4AC
  c->r[3]=0u+0x00000000u; // 801DE4B0
  return; // 801DE4B4
L_801DE4B8:;
  {uint32_t ea=c->r[5]+0x00000002u; c->r[3]=R16(ea); c->r[5]=ea;} // 801DE4B8
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 801DE4BC
  cmpu(c,0,c->r[3],c->r[0]); // 801DE4C0
  if (crb(c,2)) { IRQCHK(c); goto L_801DE4A8; } // 801DE4C4
  c->r[3]=c->r[3]-c->r[0]; // 801DE4C8
  return; // 801DE4CC
}

// fn_801DE4D0
void f_801DE4D0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 801DE4D0
  goto L_801DE4E0; // 801DE4D4
L_801DE4D8:;
  cmpu(c,0,c->r[0],c->r[4]); // 801DE4D8
  if (crb(c,2)) return; // 801DE4DC
L_801DE4E0:;
  {uint32_t ea=c->r[3]+0x00000002u; c->r[0]=R16(ea); c->r[3]=ea;} // 801DE4E0
  cmps(c,0,(int32_t)c->r[0],0); // 801DE4E4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DE4D8; } // 801DE4E8
  cmps(c,0,(int32_t)c->r[4],0); // 801DE4EC
  if (crb(c,2)) return; // 801DE4F0
  c->r[3]=0u+0x00000000u; // 801DE4F4
  return; // 801DE4F8
}

// fwide
void f_801DE4FC(Ctx* __restrict c) {
  trace_call(0x801DE4FCu);
  cmps(c,0,(int32_t)c->r[3],0); // 801DE4FC
  if (crb(c,2)) { goto L_801DE510; } // 801DE500
  c->r[5]=R32(c->r[3]+0x00000004u); // 801DE504
  c->r[0]=rotl(c->r[5],10)&0x00000007u; cr0(c,c->r[0]); // 801DE508
  if (!crb(c,2)) { goto L_801DE518; } // 801DE50C
L_801DE510:;
  c->r[3]=0u+0x00000000u; // 801DE510
  return; // 801DE514
L_801DE518:;
  c->r[0]=rotl(c->r[5],12)&0x00000003u; cr0(c,c->r[0]); // 801DE518
  if (crb(c,2)) { goto L_801DE534; } // 801DE51C
  cmps(c,0,(int32_t)c->r[0],2); // 801DE520
  if (crb(c,2)) { goto L_801DE560; } // 801DE524
  cmps(c,0,(int32_t)c->r[0],1); // 801DE528
  if (crb(c,2)) { goto L_801DE568; } // 801DE52C
  goto L_801DE56C; // 801DE530
L_801DE534:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DE534
  if (!crb(c,1)) { goto L_801DE54C; } // 801DE538
  c->r[0]=0u+0x00000002u; // 801DE53C
  c->r[5]=(rotl(c->r[0],20)&0x00300000u)|(c->r[5]&~0x00300000u); // 801DE540
  W32(c->r[3]+0x00000004u,c->r[5]); // 801DE544
  goto L_801DE56C; // 801DE548
L_801DE54C:;
  if (!crb(c,0)) { goto L_801DE56C; } // 801DE54C
  c->r[0]=0u+0x00000001u; // 801DE550
  c->r[5]=(rotl(c->r[0],20)&0x00300000u)|(c->r[5]&~0x00300000u); // 801DE554
  W32(c->r[3]+0x00000004u,c->r[5]); // 801DE558
  goto L_801DE56C; // 801DE55C
L_801DE560:;
  c->r[4]=0u+0x00000001u; // 801DE560
  goto L_801DE56C; // 801DE564
L_801DE568:;
  c->r[4]=0u+0xFFFFFFFFu; // 801DE568
L_801DE56C:;
  c->r[3]=c->r[4]|c->r[4]; // 801DE56C
  return; // 801DE570
}

// fn_801DE574
void f_801DE574(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE574
  c->r[0]=c->lr; // 801DE578
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DE57C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE580
  c->r[31]=c->r[6]|c->r[6]; // 801DE584
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DE588
  c->r[30]=c->r[5]|c->r[5]; // 801DE58C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DE590
  c->r[29]=c->r[4]|c->r[4]; // 801DE594
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DE598
  c->r[28]=c->r[3]|c->r[3]; // 801DE59C
  c->lr=0x801DE5A4u; f_801540D0(c); // 801DE5A0
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 801DE5A4
  if (!crb(c,2)) { goto L_801DE60C; } // 801DE5A8
  c->r[0]=R32(c->r[13]+0xFFFFB778u); // 801DE5AC
  c->r[3]=0u+0x00000000u; // 801DE5B0
  cmps(c,0,(int32_t)c->r[0],0); // 801DE5B4
  if (!crb(c,2)) { goto L_801DE5D8; } // 801DE5B8
  c->r[3]=0u+0x00010000u; // 801DE5BC
  c->r[3]=c->r[3]+0xFFFFE100u; // 801DE5C0
  c->lr=0x801DE5C8u; f_8019F370(c); // 801DE5C4
  cmps(c,0,(int32_t)c->r[3],0); // 801DE5C8
  if (!crb(c,2)) { goto L_801DE5D8; } // 801DE5CC
  c->r[0]=0u+0x00000001u; // 801DE5D0
  W32(c->r[13]+0xFFFFB778u,c->r[0]); // 801DE5D4
L_801DE5D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DE5D8
  if (crb(c,2)) { goto L_801DE5E8; } // 801DE5DC
  c->r[3]=0u+0x00000001u; // 801DE5E0
  goto L_801DE624; // 801DE5E4
L_801DE5E8:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 801DE5E8
  c->r[3]=c->r[29]|c->r[29]; // 801DE5EC
  c->lr=0x801DE5F4u; f_8019F3C0(c); // 801DE5F0
  cmps(c,0,(int32_t)c->r[3],0); // 801DE5F4
  if (crb(c,2)) { goto L_801DE60C; } // 801DE5F8
  c->r[0]=0u+0x00000000u; // 801DE5FC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801DE600
  c->r[3]=0u+0x00000001u; // 801DE604
  goto L_801DE624; // 801DE608
L_801DE60C:;
  c->r[3]=c->r[28]|c->r[28]; // 801DE60C
  c->r[4]=c->r[29]|c->r[29]; // 801DE610
  c->r[5]=c->r[30]|c->r[30]; // 801DE614
  c->r[6]=c->r[31]|c->r[31]; // 801DE618
  c->lr=0x801DE620u; f_801E7AD4(c); // 801DE61C
  c->r[3]=0u+0x00000000u; // 801DE620
L_801DE624:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE624
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DE628
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DE62C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DE630
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DE634
  c->lr=c->r[0]; // 801DE638
  c->r[1]=c->r[1]+0x00000020u; // 801DE63C
  return; // 801DE640
}

// fn_801DE644
void f_801DE644(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801DE644
  return; // 801DE648
}

// fn_801DE64C
void f_801DE64C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE64C
  c->r[0]=c->lr; // 801DE650
  c->r[3]=0u+0x00000001u; // 801DE654
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE658
  c->lr=0x801DE660u; f_801DB8E0(c); // 801DE65C
  c->r[0]=0u+0x00000001u; // 801DE660
  W32(c->r[13]+0xFFFFB780u,c->r[0]); // 801DE664
  c->r[3]=0u+0x00000001u; // 801DE668
  c->lr=0x801DE670u; f_80162D40(c); // 801DE66C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE670
  c->lr=c->r[0]; // 801DE674
  c->r[1]=c->r[1]+0x00000010u; // 801DE678
  return; // 801DE67C
}

// fn_801DE680
void f_801DE680(Ctx* __restrict c) {
  f_801D4E88(c); return; // 801DE680
}

// __msl_runtime_constraint_violation_s
void f_801DE684(Ctx* __restrict c) {
  trace_call(0x801DE684u);
  c->r[12]=R32(c->r[13]+0xFFFFB788u); // 801DE684
  cmps(c,0,(int32_t)c->r[12],0); // 801DE688
  if (crb(c,2)) return; // 801DE68C
  c->ctr=c->r[12]; // 801DE690
  if (true) { dispatch(c,c->ctr); return; } // 801DE694
  return; // 801DE698
}

// fn_801DE69C
void f_801DE69C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE69C
  c->r[0]=c->lr; // 801DE6A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DE6A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE6A8
  c->r[31]=c->r[3]|c->r[3]; // 801DE6AC
  c->r[3]=c->r[1]+0x00000008u; // 801DE6B0
  c->lr=0x801DE6B8u; f_801E1EE8(c); // 801DE6B4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801DE6B8
  c->r[3]=c->r[0]+c->r[31]; // 801DE6BC
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DE6C0
  c->lr=0x801DE6C8u; f_801E1F70(c); // 801DE6C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE6C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DE6CC
  c->lr=c->r[0]; // 801DE6D0
  c->r[1]=c->r[1]+0x00000020u; // 801DE6D4
  return; // 801DE6D8
}

// fn_801DE6DC
void f_801DE6DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE6DC
  c->r[0]=c->lr; // 801DE6E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DE6E4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801DE6E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801DE6EC
  c->f[31]=c->f[1]; // 801DE6F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE6F4
  c->r[31]=0u+0x00000000u; // 801DE6F8
  c->lr=0x801DE700u; f_801D9294(c); // 801DE6FC
  cmps(c,0,(int32_t)c->r[3],2); // 801DE700
  if (crb(c,1)) { goto L_801DE710; } // 801DE704
  c->f[1]=c->f[31]; // 801DE708
  goto L_801DE77C; // 801DE70C
L_801DE710:;
  {uint32_t ea=c->r[2]+0xFFFFAE98u; c->f[0]=RF64(ea);} // 801DE710
  fcmp(c,0,c->f[31],c->f[0]); // 801DE714
  if (!crb(c,0)) { goto L_801DE724; } // 801DE718
  c->r[31]=0u+0x00000001u; // 801DE71C
  c->f[31]=-c->f[31]; // 801DE720
L_801DE724:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[31],true)); // 801DE724
  c->r[0]=0u+0x43300000u; // 801DE728
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DE72C
  {uint32_t ea=c->r[2]+0xFFFFAEB0u; c->f[2]=RF64(ea);} // 801DE730
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801DE734
  {uint32_t ea=c->r[2]+0xFFFFAEA0u; c->f[0]=RF64(ea);} // 801DE738
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801DE73C
  c->r[0]=c->r[0]^0x80000000u; // 801DE740
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE744
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801DE748
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801DE74C
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 801DE750
  fcmp(c,0,c->f[1],c->f[0]); // 801DE754
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[1]); // 801DE758
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801DE75C
  if (!crb(c,2)) { goto L_801DE770; } // 801DE760
  {uint32_t ea=c->r[2]+0xFFFFAEA8u; c->f[0]=RF64(ea);} // 801DE764
  c->f[1]=c->f[1]+c->f[0]; // 801DE768
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801DE76C
L_801DE770:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DE770
  if (crb(c,2)) { goto L_801DE77C; } // 801DE774
  c->f[1]=-c->f[1]; // 801DE778
L_801DE77C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DE77C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801DE780
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801DE784
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DE788
  c->lr=c->r[0]; // 801DE78C
  c->r[1]=c->r[1]+0x00000030u; // 801DE790
  return; // 801DE794
}

// fn_801DE798
void f_801DE798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE798
  c->r[0]=c->lr; // 801DE79C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DE7A0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801DE7A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801DE7A8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801DE7AC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801DE7B0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DE7B4
  c->r[0]=0u+0x3FF00000u; // 801DE7B8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801DE7BC
  c->r[3]=rotl(c->r[4],0)&0x7FFFFFFFu; // 801DE7C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DE7C4
  if (crb(c,0)) { goto L_801DE808; } // 801DE7C8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801DE7CC
  c->r[3]=c->r[3]+0xC0100000u; // 801DE7D0
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 801DE7D4
  if (!crb(c,2)) { goto L_801DE7F4; } // 801DE7D8
  cmps(c,0,(int32_t)c->r[4],0); // 801DE7DC
  if (!crb(c,1)) { goto L_801DE7EC; } // 801DE7E0
  {uint32_t ea=c->r[2]+0xFFFFAEB8u; c->f[1]=RF64(ea);} // 801DE7E4
  goto L_801DEA44; // 801DE7E8
L_801DE7EC:;
  {uint32_t ea=c->r[2]+0xFFFFAEC0u; c->f[1]=RF64(ea);} // 801DE7EC
  goto L_801DEA44; // 801DE7F0
L_801DE7F4:;
  c->r[3]=0u+0x802E0000u; // 801DE7F4
  c->r[0]=0u+0x00000021u; // 801DE7F8
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801DE7FC
  {uint32_t ea=c->r[3]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DE800
  goto L_801DEA44; // 801DE804
L_801DE808:;
  c->r[0]=0u+0x3FE00000u; // 801DE808
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DE80C
  if (!crb(c,0)) { goto L_801DE8C4; } // 801DE810
  c->r[0]=0u+0x3C600000u; // 801DE814
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DE818
  if (crb(c,1)) { goto L_801DE828; } // 801DE81C
  {uint32_t ea=c->r[2]+0xFFFFAEC8u; c->f[1]=RF64(ea);} // 801DE820
  goto L_801DEA44; // 801DE824
L_801DE828:;
  c->f[12]=c->f[1]*c->f[1]; // 801DE828
  {uint32_t ea=c->r[2]+0xFFFFAEF8u; c->f[0]=RF64(ea);} // 801DE82C
  {uint32_t ea=c->r[2]+0xFFFFAF20u; c->f[2]=RF64(ea);} // 801DE830
  {uint32_t ea=c->r[2]+0xFFFFAEF0u; c->f[3]=RF64(ea);} // 801DE834
  {uint32_t ea=c->r[2]+0xFFFFAEE8u; c->f[10]=RF64(ea);} // 801DE838
  c->f[4]=c->f[0]*c->f[12]; // 801DE83C
  {uint32_t ea=c->r[2]+0xFFFFAF18u; c->f[0]=RF64(ea);} // 801DE840
  c->f[2]=c->f[2]*c->f[12]; // 801DE844
  {uint32_t ea=c->r[2]+0xFFFFAF10u; c->f[5]=RF64(ea);} // 801DE848
  {uint32_t ea=c->r[2]+0xFFFFAEE0u; c->f[9]=RF64(ea);} // 801DE84C
  c->f[3]=c->f[3]+c->f[4]; // 801DE850
  {uint32_t ea=c->r[2]+0xFFFFAF08u; c->f[4]=RF64(ea);} // 801DE854
  c->f[0]=c->f[0]+c->f[2]; // 801DE858
  c->f[11]=c->f[12]*c->f[3]; // 801DE85C
  {uint32_t ea=c->r[2]+0xFFFFAED8u; c->f[8]=RF64(ea);} // 801DE860
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[3]=RF64(ea);} // 801DE864
  c->f[6]=c->f[12]*c->f[0]; // 801DE868
  {uint32_t ea=c->r[2]+0xFFFFAED0u; c->f[7]=RF64(ea);} // 801DE86C
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[2]=RF64(ea);} // 801DE870
  c->f[10]=c->f[10]+c->f[11]; // 801DE874
  {uint32_t ea=c->r[2]+0xFFFFAEC8u; c->f[0]=RF64(ea);} // 801DE878
  c->f[5]=c->f[5]+c->f[6]; // 801DE87C
  c->f[6]=c->f[12]*c->f[10]; // 801DE880
  c->f[5]=c->f[12]*c->f[5]; // 801DE884
  c->f[6]=c->f[9]+c->f[6]; // 801DE888
  c->f[4]=c->f[4]+c->f[5]; // 801DE88C
  c->f[5]=c->f[12]*c->f[6]; // 801DE890
  c->f[4]=c->f[12]*c->f[4]; // 801DE894
  c->f[5]=c->f[8]+c->f[5]; // 801DE898
  c->f[4]=c->f[3]+c->f[4]; // 801DE89C
  c->f[3]=c->f[12]*c->f[5]; // 801DE8A0
  c->f[3]=c->f[7]+c->f[3]; // 801DE8A4
  c->f[3]=c->f[12]*c->f[3]; // 801DE8A8
  c->f[3]=c->f[3]/c->f[4]; // 801DE8AC
  c->f[3]=c->f[1]*c->f[3]; // 801DE8B0
  c->f[2]=c->f[2]-c->f[3]; // 801DE8B4
  c->f[1]=c->f[1]-c->f[2]; // 801DE8B8
  c->f[1]=c->f[0]-c->f[1]; // 801DE8BC
  goto L_801DEA44; // 801DE8C0
L_801DE8C4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DE8C4
  if (!crb(c,0)) { goto L_801DE97C; } // 801DE8C8
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[11]=RF64(ea);} // 801DE8CC
  {uint32_t ea=c->r[2]+0xFFFFAF30u; c->f[0]=RF64(ea);} // 801DE8D0
  c->f[1]=c->f[11]+c->f[1]; // 801DE8D4
  {uint32_t ea=c->r[2]+0xFFFFAEF8u; c->f[4]=RF64(ea);} // 801DE8D8
  {uint32_t ea=c->r[2]+0xFFFFAEF0u; c->f[9]=RF64(ea);} // 801DE8DC
  {uint32_t ea=c->r[2]+0xFFFFAF18u; c->f[3]=RF64(ea);} // 801DE8E0
  c->f[1]=c->f[0]*c->f[1]; // 801DE8E4
  {uint32_t ea=c->r[2]+0xFFFFAF20u; c->f[0]=RF64(ea);} // 801DE8E8
  {uint32_t ea=c->r[2]+0xFFFFAEE8u; c->f[8]=RF64(ea);} // 801DE8EC
  {uint32_t ea=c->r[2]+0xFFFFAF10u; c->f[2]=RF64(ea);} // 801DE8F0
  {uint32_t ea=c->r[2]+0xFFFFAEE0u; c->f[7]=RF64(ea);} // 801DE8F4
  c->f[10]=c->f[4]*c->f[1]; // 801DE8F8
  {uint32_t ea=c->r[2]+0xFFFFAED8u; c->f[6]=RF64(ea);} // 801DE8FC
  c->f[4]=c->f[0]*c->f[1]; // 801DE900
  {uint32_t ea=c->r[2]+0xFFFFAF08u; c->f[0]=RF64(ea);} // 801DE904
  {uint32_t ea=c->r[2]+0xFFFFAED0u; c->f[5]=RF64(ea);} // 801DE908
  c->f[9]=c->f[9]+c->f[10]; // 801DE90C
  c->f[3]=c->f[3]+c->f[4]; // 801DE910
  c->f[4]=c->f[1]*c->f[9]; // 801DE914
  c->f[3]=c->f[1]*c->f[3]; // 801DE918
  c->f[4]=c->f[8]+c->f[4]; // 801DE91C
  c->f[2]=c->f[2]+c->f[3]; // 801DE920
  c->f[3]=c->f[1]*c->f[4]; // 801DE924
  c->f[2]=c->f[1]*c->f[2]; // 801DE928
  c->f[3]=c->f[7]+c->f[3]; // 801DE92C
  c->f[0]=c->f[0]+c->f[2]; // 801DE930
  c->f[2]=c->f[1]*c->f[3]; // 801DE934
  c->f[0]=c->f[1]*c->f[0]; // 801DE938
  c->f[2]=c->f[6]+c->f[2]; // 801DE93C
  c->f[30]=c->f[11]+c->f[0]; // 801DE940
  c->f[0]=c->f[1]*c->f[2]; // 801DE944
  c->f[0]=c->f[5]+c->f[0]; // 801DE948
  c->f[31]=c->f[1]*c->f[0]; // 801DE94C
  c->lr=0x801DE954u; f_801E247C(c); // 801DE950
  c->f[4]=c->f[31]/c->f[30]; // 801DE954
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[3]=RF64(ea);} // 801DE958
  {uint32_t ea=c->r[2]+0xFFFFAF38u; c->f[2]=RF64(ea);} // 801DE95C
  {uint32_t ea=c->r[2]+0xFFFFAEC0u; c->f[0]=RF64(ea);} // 801DE960
  c->f[4]=c->f[4]*c->f[1]; // 801DE964
  c->f[3]=c->f[4]-c->f[3]; // 801DE968
  c->f[1]=c->f[1]+c->f[3]; // 801DE96C
  c->f[1]=c->f[2]*c->f[1]; // 801DE970
  c->f[1]=c->f[0]-c->f[1]; // 801DE974
  goto L_801DEA44; // 801DE978
L_801DE97C:;
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[2]=RF64(ea);} // 801DE97C
  {uint32_t ea=c->r[2]+0xFFFFAF30u; c->f[0]=RF64(ea);} // 801DE980
  c->f[1]=c->f[2]-c->f[1]; // 801DE984
  c->f[31]=c->f[0]*c->f[1]; // 801DE988
  c->f[1]=c->f[31]; // 801DE98C
  c->lr=0x801DE994u; f_801E247C(c); // 801DE990
  {uint32_t ea=c->r[2]+0xFFFFAEF8u; c->f[2]=RF64(ea);} // 801DE994
  c->r[0]=0u+0x00000000u; // 801DE998
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 801DE99C
  c->f[4]=c->f[2]*c->f[31]; // 801DE9A0
  {uint32_t ea=c->r[2]+0xFFFFAF20u; c->f[0]=RF64(ea);} // 801DE9A4
  {uint32_t ea=c->r[2]+0xFFFFAEF0u; c->f[3]=RF64(ea);} // 801DE9A8
  c->f[2]=c->f[0]*c->f[31]; // 801DE9AC
  {uint32_t ea=c->r[2]+0xFFFFAF18u; c->f[0]=RF64(ea);} // 801DE9B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE9B4
  c->f[3]=c->f[3]+c->f[4]; // 801DE9B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[11]=RF64(ea);} // 801DE9BC
  c->f[0]=c->f[0]+c->f[2]; // 801DE9C0
  c->f[10]=c->f[11]*c->f[11]; // 801DE9C4
  {uint32_t ea=c->r[2]+0xFFFFAEE8u; c->f[6]=RF64(ea);} // 801DE9C8
  {uint32_t ea=c->r[2]+0xFFFFAEE0u; c->f[8]=RF64(ea);} // 801DE9CC
  c->f[2]=c->f[31]*c->f[3]; // 801DE9D0
  {uint32_t ea=c->r[2]+0xFFFFAF10u; c->f[4]=RF64(ea);} // 801DE9D4
  {uint32_t ea=c->r[2]+0xFFFFAED8u; c->f[7]=RF64(ea);} // 801DE9D8
  c->f[5]=c->f[31]*c->f[0]; // 801DE9DC
  {uint32_t ea=c->r[2]+0xFFFFAF08u; c->f[3]=RF64(ea);} // 801DE9E0
  c->f[0]=c->f[6]+c->f[2]; // 801DE9E4
  {uint32_t ea=c->r[2]+0xFFFFAED0u; c->f[6]=RF64(ea);} // 801DE9E8
  {uint32_t ea=c->r[2]+0xFFFFAF00u; c->f[2]=RF64(ea);} // 801DE9EC
  c->f[10]=c->f[31]-c->f[10]; // 801DE9F0
  c->f[9]=c->f[31]*c->f[0]; // 801DE9F4
  {uint32_t ea=c->r[2]+0xFFFFAF38u; c->f[0]=RF64(ea);} // 801DE9F8
  c->f[4]=c->f[4]+c->f[5]; // 801DE9FC
  c->f[5]=c->f[8]+c->f[9]; // 801DEA00
  c->f[4]=c->f[31]*c->f[4]; // 801DEA04
  c->f[5]=c->f[31]*c->f[5]; // 801DEA08
  c->f[3]=c->f[3]+c->f[4]; // 801DEA0C
  c->f[8]=c->f[1]+c->f[11]; // 801DEA10
  c->f[4]=c->f[7]+c->f[5]; // 801DEA14
  c->f[3]=c->f[31]*c->f[3]; // 801DEA18
  c->f[4]=c->f[31]*c->f[4]; // 801DEA1C
  c->f[3]=c->f[2]+c->f[3]; // 801DEA20
  c->f[5]=c->f[10]/c->f[8]; // 801DEA24
  c->f[2]=c->f[6]+c->f[4]; // 801DEA28
  c->f[2]=c->f[31]*c->f[2]; // 801DEA2C
  c->f[2]=c->f[2]/c->f[3]; // 801DEA30
  c->f[1]=c->f[2]*c->f[1]; // 801DEA34
  c->f[1]=c->f[5]+c->f[1]; // 801DEA38
  c->f[1]=c->f[11]+c->f[1]; // 801DEA3C
  c->f[1]=c->f[0]*c->f[1]; // 801DEA40
L_801DEA44:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DEA44
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 801DEA48
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801DEA4C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 801DEA50
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801DEA54
  c->lr=c->r[0]; // 801DEA58
  c->r[1]=c->r[1]+0x00000040u; // 801DEA5C
  return; // 801DEA60
}

// __ieee754_atan2
void f_801DEA64(Ctx* __restrict c) {
  trace_call(0x801DEA64u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEA64
  c->r[0]=c->lr; // 801DEA68
  c->r[3]=0u+0x7FF00000u; // 801DEA6C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 801DEA70
  c->r[8]=R32(c->r[1]+0x00000014u); // 801DEA74
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DEA78
  c->r[0]=0u-c->r[8]; // 801DEA7C
  c->r[4]=R32(c->r[1]+0x00000010u); // 801DEA80
  c->r[0]=c->r[8]|c->r[0]; // 801DEA84
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DEA88
  c->r[6]=rotl(c->r[4],0)&0x7FFFFFFFu; // 801DEA8C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DEA90
  c->r[5]=R32(c->r[1]+0x00000008u); // 801DEA94
  c->r[0]=c->r[6]|c->r[0]; // 801DEA98
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DEA9C
  cmpu(c,0,c->r[0],c->r[3]); // 801DEAA0
  c->r[9]=R32(c->r[1]+0x0000000Cu); // 801DEAA4
  c->r[7]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801DEAA8
  if (crb(c,1)) { goto L_801DEAC8; } // 801DEAAC
  c->r[0]=0u-c->r[9]; // 801DEAB0
  c->r[0]=c->r[9]|c->r[0]; // 801DEAB4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801DEAB8
  c->r[0]=c->r[7]|c->r[0]; // 801DEABC
  cmpu(c,0,c->r[0],c->r[3]); // 801DEAC0
  if (!crb(c,1)) { goto L_801DEAD0; } // 801DEAC4
L_801DEAC8:;
  c->f[1]=c->f[2]+c->f[1]; // 801DEAC8
  goto L_801DECA8; // 801DEACC
L_801DEAD0:;
  c->r[0]=c->r[4]+0xC0100000u; // 801DEAD0
  c->r[0]=c->r[0]|c->r[8]; cr0(c,c->r[0]); // 801DEAD4
  if (!crb(c,2)) { goto L_801DEAE4; } // 801DEAD8
  c->lr=0x801DEAE0u; f_801E1A74(c); // 801DEADC
  goto L_801DECA8; // 801DEAE0
L_801DEAE4:;
  c->r[0]=c->r[7]|c->r[9]; cr0(c,c->r[0]); // 801DEAE4
  c->r[31]=rotl(c->r[4],2)&0x00000002u; // 801DEAE8
  c->r[31]=(rotl(c->r[5],1)&0x00000001u)|(c->r[31]&~0x00000001u); // 801DEAEC
  if (!crb(c,2)) { goto L_801DEB24; } // 801DEAF0
  cmpu(c,0,c->r[31],0x00000001u); // 801DEAF4
  if (!crb(c,1)) { goto L_801DECA8; } // 801DEAF8
  cmps(c,0,(int32_t)c->r[31],2); // 801DEAFC
  if (crb(c,2)) { goto L_801DEB14; } // 801DEB00
  cmps(c,0,(int32_t)c->r[31],3); // 801DEB04
  if (crb(c,2)) { goto L_801DEB1C; } // 801DEB08
  goto L_801DEB24; // 801DEB0C
  goto L_801DECA8; // 801DEB10
L_801DEB14:;
  {uint32_t ea=c->r[2]+0xFFFFAF40u; c->f[1]=RF64(ea);} // 801DEB14
  goto L_801DECA8; // 801DEB18
L_801DEB1C:;
  {uint32_t ea=c->r[2]+0xFFFFAF48u; c->f[1]=RF64(ea);} // 801DEB1C
  goto L_801DECA8; // 801DEB20
L_801DEB24:;
  c->r[0]=c->r[6]|c->r[8]; cr0(c,c->r[0]); // 801DEB24
  if (!crb(c,2)) { goto L_801DEB44; } // 801DEB28
  cmps(c,0,(int32_t)c->r[5],0); // 801DEB2C
  if (!crb(c,0)) { goto L_801DEB3C; } // 801DEB30
  {uint32_t ea=c->r[2]+0xFFFFAF50u; c->f[1]=RF64(ea);} // 801DEB34
  goto L_801DECA8; // 801DEB38
L_801DEB3C:;
  {uint32_t ea=c->r[2]+0xFFFFAF58u; c->f[1]=RF64(ea);} // 801DEB3C
  goto L_801DECA8; // 801DEB40
L_801DEB44:;
  c->r[0]=c->r[6]+0x80100000u; // 801DEB44
  cmpu(c,0,c->r[0],0x00000000u); // 801DEB48
  if (!crb(c,2)) { goto L_801DEBE4; } // 801DEB4C
  c->r[0]=c->r[7]+0x80100000u; // 801DEB50
  cmpu(c,0,c->r[0],0x00000000u); // 801DEB54
  if (!crb(c,2)) { goto L_801DEBA0; } // 801DEB58
  cmps(c,0,(int32_t)c->r[31],0); // 801DEB5C
  if (crb(c,2)) { goto L_801DEB80; } // 801DEB60
  cmps(c,0,(int32_t)c->r[31],1); // 801DEB64
  if (crb(c,2)) { goto L_801DEB88; } // 801DEB68
  cmps(c,0,(int32_t)c->r[31],2); // 801DEB6C
  if (crb(c,2)) { goto L_801DEB90; } // 801DEB70
  cmps(c,0,(int32_t)c->r[31],3); // 801DEB74
  if (crb(c,2)) { goto L_801DEB98; } // 801DEB78
  goto L_801DEBE4; // 801DEB7C
L_801DEB80:;
  {uint32_t ea=c->r[2]+0xFFFFAF60u; c->f[1]=RF64(ea);} // 801DEB80
  goto L_801DECA8; // 801DEB84
L_801DEB88:;
  {uint32_t ea=c->r[2]+0xFFFFAF68u; c->f[1]=RF64(ea);} // 801DEB88
  goto L_801DECA8; // 801DEB8C
L_801DEB90:;
  {uint32_t ea=c->r[2]+0xFFFFAF70u; c->f[1]=RF64(ea);} // 801DEB90
  goto L_801DECA8; // 801DEB94
L_801DEB98:;
  {uint32_t ea=c->r[2]+0xFFFFAF78u; c->f[1]=RF64(ea);} // 801DEB98
  goto L_801DECA8; // 801DEB9C
L_801DEBA0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DEBA0
  if (crb(c,2)) { goto L_801DEBC4; } // 801DEBA4
  cmps(c,0,(int32_t)c->r[31],1); // 801DEBA8
  if (crb(c,2)) { goto L_801DEBCC; } // 801DEBAC
  cmps(c,0,(int32_t)c->r[31],2); // 801DEBB0
  if (crb(c,2)) { goto L_801DEBD4; } // 801DEBB4
  cmps(c,0,(int32_t)c->r[31],3); // 801DEBB8
  if (crb(c,2)) { goto L_801DEBDC; } // 801DEBBC
  goto L_801DEBE4; // 801DEBC0
L_801DEBC4:;
  {uint32_t ea=c->r[2]+0xFFFFAF80u; c->f[1]=RF64(ea);} // 801DEBC4
  goto L_801DECA8; // 801DEBC8
L_801DEBCC:;
  {uint32_t ea=c->r[2]+0xFFFFAF88u; c->f[1]=RF64(ea);} // 801DEBCC
  goto L_801DECA8; // 801DEBD0
L_801DEBD4:;
  {uint32_t ea=c->r[2]+0xFFFFAF40u; c->f[1]=RF64(ea);} // 801DEBD4
  goto L_801DECA8; // 801DEBD8
L_801DEBDC:;
  {uint32_t ea=c->r[2]+0xFFFFAF48u; c->f[1]=RF64(ea);} // 801DEBDC
  goto L_801DECA8; // 801DEBE0
L_801DEBE4:;
  c->r[0]=c->r[7]+0x80100000u; // 801DEBE4
  cmpu(c,0,c->r[0],0x00000000u); // 801DEBE8
  if (!crb(c,2)) { goto L_801DEC08; } // 801DEBEC
  cmps(c,0,(int32_t)c->r[5],0); // 801DEBF0
  if (!crb(c,0)) { goto L_801DEC00; } // 801DEBF4
  {uint32_t ea=c->r[2]+0xFFFFAF50u; c->f[1]=RF64(ea);} // 801DEBF8
  goto L_801DECA8; // 801DEBFC
L_801DEC00:;
  {uint32_t ea=c->r[2]+0xFFFFAF58u; c->f[1]=RF64(ea);} // 801DEC00
  goto L_801DECA8; // 801DEC04
L_801DEC08:;
  c->r[0]=c->r[7]-c->r[6]; // 801DEC08
  c->r[0]=sraw(c,c->r[0],20); // 801DEC0C
  cmps(c,0,(int32_t)c->r[0],60); // 801DEC10
  if (!crb(c,1)) { goto L_801DEC24; } // 801DEC14
  {uint32_t ea=c->r[2]+0xFFFFAF58u; c->f[1]=RF64(ea);} // 801DEC18
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 801DEC1C
  goto L_801DEC50; // 801DEC20
L_801DEC24:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DEC24
  if (!crb(c,0)) { goto L_801DEC40; } // 801DEC28
  cmps(c,0,(int32_t)c->r[0],-60); // 801DEC2C
  if (!crb(c,0)) { goto L_801DEC40; } // 801DEC30
  {uint32_t ea=c->r[2]+0xFFFFAF80u; c->f[1]=RF64(ea);} // 801DEC34
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 801DEC38
  goto L_801DEC50; // 801DEC3C
L_801DEC40:;
  c->f[0]=c->f[1]/c->f[2]; // 801DEC40
  c->f[1]=std::fabs(c->f[0]); // 801DEC44
  c->lr=0x801DEC4Cu; f_801E1A74(c); // 801DEC48
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 801DEC4C
L_801DEC50:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DEC50
  if (crb(c,2)) { goto L_801DECA8; } // 801DEC54
  cmps(c,0,(int32_t)c->r[31],1); // 801DEC58
  if (crb(c,2)) { goto L_801DEC70; } // 801DEC5C
  cmps(c,0,(int32_t)c->r[31],2); // 801DEC60
  if (crb(c,2)) { goto L_801DEC84; } // 801DEC64
  goto L_801DEC98; // 801DEC68
  goto L_801DECA8; // 801DEC6C
L_801DEC70:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 801DEC70
  c->r[0]=c->r[0]^0x80000000u; // 801DEC74
  W32(c->r[1]+0x00000018u,c->r[0]); // 801DEC78
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801DEC7C
  goto L_801DECA8; // 801DEC80
L_801DEC84:;
  {uint32_t ea=c->r[2]+0xFFFFAF90u; c->f[2]=RF64(ea);} // 801DEC84
  {uint32_t ea=c->r[2]+0xFFFFAF40u; c->f[0]=RF64(ea);} // 801DEC88
  c->f[1]=c->f[1]-c->f[2]; // 801DEC8C
  c->f[1]=c->f[0]-c->f[1]; // 801DEC90
  goto L_801DECA8; // 801DEC94
L_801DEC98:;
  {uint32_t ea=c->r[2]+0xFFFFAF90u; c->f[2]=RF64(ea);} // 801DEC98
  {uint32_t ea=c->r[2]+0xFFFFAF40u; c->f[0]=RF64(ea);} // 801DEC9C
  c->f[1]=c->f[1]-c->f[2]; // 801DECA0
  c->f[1]=c->f[1]-c->f[0]; // 801DECA4
L_801DECA8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DECA8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DECAC
  c->lr=c->r[0]; // 801DECB0
  c->r[1]=c->r[1]+0x00000030u; // 801DECB4
  return; // 801DECB8
}

// __ieee754_fmod
void f_801DECBC(Ctx* __restrict c) {
  trace_call(0x801DECBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DECBC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 801DECC0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DECC4
  c->r[0]=R32(c->r[1]+0x00000010u); // 801DECC8
  c->r[7]=R32(c->r[1]+0x00000008u); // 801DECCC
  c->r[6]=R32(c->r[1]+0x00000014u); // 801DECD0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 801DECD4
  c->r[4]=rotl(c->r[7],0)&0x80000000u; // 801DECD8
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 801DECDC
  c->r[3]=c->r[0]|c->r[6]; cr0(c,c->r[3]); // 801DECE0
  c->r[8]=c->r[7]^c->r[4]; // 801DECE4
  if (crb(c,2)) { goto L_801DED10; } // 801DECE8
  c->r[7]=0u+0x7FF00000u; // 801DECEC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 801DECF0
  if (!crb(c,0)) { goto L_801DED10; } // 801DECF4
  c->r[3]=0u-c->r[6]; // 801DECF8
  c->r[3]=c->r[6]|c->r[3]; // 801DECFC
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 801DED00
  c->r[3]=c->r[0]|c->r[3]; // 801DED04
  cmpu(c,0,c->r[3],c->r[7]); // 801DED08
  if (!crb(c,1)) { goto L_801DED1C; } // 801DED0C
L_801DED10:;
  c->f[0]=c->f[1]*c->f[2]; // 801DED10
  c->f[1]=c->f[0]/c->f[0]; // 801DED14
  goto L_801DF034; // 801DED18
L_801DED1C:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DED1C
  if (crb(c,1)) { goto L_801DED4C; } // 801DED20
  if (crb(c,0)) { goto L_801DF034; } // 801DED24
  cmpu(c,0,c->r[5],c->r[6]); // 801DED28
  if (!crb(c,0)) { goto L_801DED34; } // 801DED2C
  goto L_801DF034; // 801DED30
L_801DED34:;
  if (!crb(c,2)) { goto L_801DED4C; } // 801DED34
  c->r[3]=0u+0x80200000u; // 801DED38
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 801DED3C
  c->r[3]=c->r[3]+0xFFFFB5E8u; // 801DED40
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801DED44
  goto L_801DF034; // 801DED48
L_801DED4C:;
  c->r[3]=0u+0x00100000u; // 801DED4C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 801DED50
  if (!crb(c,0)) { goto L_801DEDA0; } // 801DED54
  cmps(c,0,(int32_t)c->r[8],0); // 801DED58
  if (!crb(c,2)) { goto L_801DED80; } // 801DED5C
  c->r[3]=c->r[5]|c->r[5]; // 801DED60
  c->r[11]=0u+0xFFFFFBEDu; // 801DED64
  goto L_801DED74; // 801DED68
L_801DED6C:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801DED6C
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 801DED70
L_801DED74:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DED74
  if (crb(c,1)) { IRQCHK(c); goto L_801DED6C; } // 801DED78
  goto L_801DEDA8; // 801DED7C
L_801DED80:;
  c->r[3]=rotl(c->r[8],11)&0xFFFFF800u; // 801DED80
  c->r[11]=0u+0xFFFFFC02u; // 801DED84
  goto L_801DED94; // 801DED88
L_801DED8C:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801DED8C
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 801DED90
L_801DED94:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DED94
  if (crb(c,1)) { IRQCHK(c); goto L_801DED8C; } // 801DED98
  goto L_801DEDA8; // 801DED9C
L_801DEDA0:;
  c->r[3]=sraw(c,c->r[8],20); // 801DEDA0
  c->r[11]=c->r[3]+0xFFFFFC01u; // 801DEDA4
L_801DEDA8:;
  c->r[3]=0u+0x00100000u; // 801DEDA8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801DEDAC
  if (!crb(c,0)) { goto L_801DEDFC; } // 801DEDB0
  cmps(c,0,(int32_t)c->r[0],0); // 801DEDB4
  if (!crb(c,2)) { goto L_801DEDDC; } // 801DEDB8
  c->r[7]=c->r[6]|c->r[6]; // 801DEDBC
  c->r[3]=0u+0xFFFFFBEDu; // 801DEDC0
  goto L_801DEDD0; // 801DEDC4
L_801DEDC8:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DEDC8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DEDCC
L_801DEDD0:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DEDD0
  if (crb(c,1)) { IRQCHK(c); goto L_801DEDC8; } // 801DEDD4
  goto L_801DEE04; // 801DEDD8
L_801DEDDC:;
  c->r[7]=rotl(c->r[0],11)&0xFFFFF800u; // 801DEDDC
  c->r[3]=0u+0xFFFFFC02u; // 801DEDE0
  goto L_801DEDF0; // 801DEDE4
L_801DEDE8:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DEDE8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DEDEC
L_801DEDF0:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DEDF0
  if (crb(c,1)) { IRQCHK(c); goto L_801DEDE8; } // 801DEDF4
  goto L_801DEE04; // 801DEDF8
L_801DEDFC:;
  c->r[3]=sraw(c,c->r[0],20); // 801DEDFC
  c->r[3]=c->r[3]+0xFFFFFC01u; // 801DEE00
L_801DEE04:;
  cmps(c,0,(int32_t)c->r[11],-1022); // 801DEE04
  if (crb(c,0)) { goto L_801DEE18; } // 801DEE08
  c->r[7]=rotl(c->r[8],0)&0x000FFFFFu; // 801DEE0C
  c->r[9]=c->r[7]|0x00100000u; // 801DEE10
  goto L_801DEE48; // 801DEE14
L_801DEE18:;
  c->r[9]=addc(c,~c->r[11],0xFFFFFC02u,1); // 801DEE18
  cmps(c,0,(int32_t)c->r[9],31); // 801DEE1C
  if (crb(c,1)) { goto L_801DEE3C; } // 801DEE20
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 801DEE24
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[8]<<((c->r[9])&31)); // 801DEE28
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[5]>>((c->r[7])&31)); // 801DEE2C
  c->r[5]=((c->r[9])&0x20)?0u:(c->r[5]<<((c->r[9])&31)); // 801DEE30
  c->r[9]=c->r[8]|c->r[7]; // 801DEE34
  goto L_801DEE48; // 801DEE38
L_801DEE3C:;
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 801DEE3C
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 801DEE40
  c->r[5]=0u+0x00000000u; // 801DEE44
L_801DEE48:;
  cmps(c,0,(int32_t)c->r[3],-1022); // 801DEE48
  if (crb(c,0)) { goto L_801DEE5C; } // 801DEE4C
  c->r[0]=rotl(c->r[0],0)&0x000FFFFFu; // 801DEE50
  c->r[10]=c->r[0]|0x00100000u; // 801DEE54
  goto L_801DEE8C; // 801DEE58
L_801DEE5C:;
  c->r[10]=addc(c,~c->r[3],0xFFFFFC02u,1); // 801DEE5C
  cmps(c,0,(int32_t)c->r[10],31); // 801DEE60
  if (crb(c,1)) { goto L_801DEE80; } // 801DEE64
  c->r[7]=addc(c,~c->r[10],0x00000020u,1); // 801DEE68
  c->r[8]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 801DEE6C
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[6]>>((c->r[7])&31)); // 801DEE70
  c->r[6]=((c->r[10])&0x20)?0u:(c->r[6]<<((c->r[10])&31)); // 801DEE74
  c->r[10]=c->r[8]|c->r[0]; // 801DEE78
  goto L_801DEE8C; // 801DEE7C
L_801DEE80:;
  c->r[0]=c->r[10]+0xFFFFFFE0u; // 801DEE80
  c->r[10]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801DEE84
  c->r[6]=0u+0x00000000u; // 801DEE88
L_801DEE8C:;
  c->r[7]=c->r[11]-c->r[3]; cr0(c,c->r[7]); // 801DEE8C
  c->r[11]=c->r[7]+0x00000002u; // 801DEE90
  c->r[8]=((c->r[11])&0x20)?0u:(c->r[6]>>((c->r[11])&31)); // 801DEE94
  c->ctr=c->r[7]; // 801DEE98
  if (crb(c,2)) { goto L_801DEF24; } // 801DEE9C
L_801DEEA0:;
  c->r[7]=c->r[9]-c->r[10]; cr0(c,c->r[7]); // 801DEEA0
  c->r[12]=c->r[5]-c->r[6]; // 801DEEA4
  if (!crb(c,2)) { goto L_801DEECC; } // 801DEEA8
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 801DEEAC
  cmpu(c,0,c->r[0],c->r[8]); // 801DEEB0
  if (!crb(c,2)) { goto L_801DEECC; } // 801DEEB4
  c->r[3]=0u+0x80200000u; // 801DEEB8
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 801DEEBC
  c->r[3]=c->r[3]+0xFFFFB5E8u; // 801DEEC0
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801DEEC4
  goto L_801DF034; // 801DEEC8
L_801DEECC:;
  cmpu(c,0,c->r[5],c->r[6]); // 801DEECC
  if (!crb(c,0)) { goto L_801DEED8; } // 801DEED0
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801DEED4
L_801DEED8:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DEED8
  if (!crb(c,0)) { goto L_801DEEF4; } // 801DEEDC
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 801DEEE0
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801DEEE4
  c->r[9]=c->r[7]+c->r[0]; // 801DEEE8
  c->r[5]=c->r[5]+c->r[5]; // 801DEEEC
  goto L_801DEF20; // 801DEEF0
L_801DEEF4:;
  c->r[0]=c->r[7]|c->r[12]; cr0(c,c->r[0]); // 801DEEF4
  if (!crb(c,2)) { goto L_801DEF10; } // 801DEEF8
  c->r[3]=0u+0x80200000u; // 801DEEFC
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 801DEF00
  c->r[3]=c->r[3]+0xFFFFB5E8u; // 801DEF04
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801DEF08
  goto L_801DF034; // 801DEF0C
L_801DEF10:;
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 801DEF10
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801DEF14
  c->r[9]=c->r[5]+c->r[0]; // 801DEF18
  c->r[5]=rotl(c->r[12],1)&0xFFFFFFFEu; // 801DEF1C
L_801DEF20:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DEEA0; } // 801DEF20
L_801DEF24:;
  c->r[7]=c->r[9]-c->r[10]; cr0(c,c->r[7]); // 801DEF24
  c->r[10]=c->r[5]-c->r[6]; // 801DEF28
  if (!crb(c,2)) { goto L_801DEF50; } // 801DEF2C
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 801DEF30
  cmpu(c,0,c->r[0],c->r[8]); // 801DEF34
  if (!crb(c,2)) { goto L_801DEF50; } // 801DEF38
  c->r[3]=0u+0x80200000u; // 801DEF3C
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 801DEF40
  c->r[3]=c->r[3]+0xFFFFB5E8u; // 801DEF44
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801DEF48
  goto L_801DF034; // 801DEF4C
L_801DEF50:;
  cmpu(c,0,c->r[5],c->r[6]); // 801DEF50
  if (!crb(c,0)) { goto L_801DEF5C; } // 801DEF54
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 801DEF58
L_801DEF5C:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DEF5C
  if (crb(c,0)) { goto L_801DEF6C; } // 801DEF60
  c->r[9]=c->r[7]|c->r[7]; // 801DEF64
  c->r[5]=c->r[10]|c->r[10]; // 801DEF68
L_801DEF6C:;
  c->r[0]=c->r[9]|c->r[5]; cr0(c,c->r[0]); // 801DEF6C
  if (!crb(c,2)) { goto L_801DEF88; } // 801DEF70
  c->r[3]=0u+0x80200000u; // 801DEF74
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 801DEF78
  c->r[3]=c->r[3]+0xFFFFB5E8u; // 801DEF7C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801DEF80
  goto L_801DF034; // 801DEF84
L_801DEF88:;
  c->r[0]=0u+0x00100000u; // 801DEF88
  goto L_801DEFA4; // 801DEF8C
L_801DEF90:;
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 801DEF90
  c->r[6]=rotl(c->r[9],1)&0xFFFFFFFEu; // 801DEF94
  c->r[9]=c->r[7]+c->r[6]; // 801DEF98
  c->r[5]=c->r[5]+c->r[5]; // 801DEF9C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DEFA0
L_801DEFA4:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 801DEFA4
  if (crb(c,0)) { IRQCHK(c); goto L_801DEF90; } // 801DEFA8
  cmps(c,0,(int32_t)c->r[3],-1022); // 801DEFAC
  if (crb(c,0)) { goto L_801DEFD4; } // 801DEFB0
  c->r[0]=c->r[3]+0x000003FFu; // 801DEFB4
  c->r[3]=c->r[9]+0xFFF00000u; // 801DEFB8
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 801DEFBC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801DEFC0
  c->r[0]=c->r[3]|c->r[0]; // 801DEFC4
  c->r[0]=c->r[0]|c->r[4]; // 801DEFC8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DEFCC
  goto L_801DF030; // 801DEFD0
L_801DEFD4:;
  c->r[6]=addc(c,~c->r[3],0xFFFFFC02u,1); // 801DEFD4
  cmps(c,0,(int32_t)c->r[6],20); // 801DEFD8
  if (crb(c,1)) { goto L_801DEFF8; } // 801DEFDC
  c->r[0]=addc(c,~c->r[6],0x00000020u,1); // 801DEFE0
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 801DEFE4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[9]<<((c->r[0])&31)); // 801DEFE8
  c->r[9]=sraw(c,c->r[9],(c->r[6])&63); // 801DEFEC
  c->r[3]=c->r[3]|c->r[0]; // 801DEFF0
  goto L_801DF024; // 801DEFF4
L_801DEFF8:;
  cmps(c,0,(int32_t)c->r[6],31); // 801DEFF8
  if (crb(c,1)) { goto L_801DF018; } // 801DEFFC
  c->r[3]=addc(c,~c->r[6],0x00000020u,1); // 801DF000
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 801DF004
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[9]<<((c->r[3])&31)); // 801DF008
  c->r[9]=c->r[4]|c->r[4]; // 801DF00C
  c->r[3]=c->r[3]|c->r[0]; // 801DF010
  goto L_801DF024; // 801DF014
L_801DF018:;
  c->r[0]=c->r[6]+0xFFFFFFE0u; // 801DF018
  c->r[3]=sraw(c,c->r[9],(c->r[0])&63); // 801DF01C
  c->r[9]=c->r[4]|c->r[4]; // 801DF020
L_801DF024:;
  c->r[0]=c->r[9]|c->r[4]; // 801DF024
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DF028
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801DF02C
L_801DF030:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DF030
L_801DF034:;
  c->r[1]=c->r[1]+0x00000020u; // 801DF034
  return; // 801DF038
}

// __ieee754_log
void f_801DF03C(Ctx* __restrict c) {
  trace_call(0x801DF03Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF03C
  c->r[0]=0u+0x00100000u; // 801DF040
  c->r[7]=0u+0x00000000u; // 801DF044
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DF048
  c->r[8]=R32(c->r[1]+0x00000008u); // 801DF04C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801DF050
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DF054
  if (!crb(c,0)) { goto L_801DF0AC; } // 801DF058
  c->r[0]=rotl(c->r[8],0)&0x7FFFFFFFu; // 801DF05C
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 801DF060
  if (!crb(c,2)) { goto L_801DF078; } // 801DF064
  {uint32_t ea=c->r[2]+0xFFFFAF98u; c->f[1]=RF64(ea);} // 801DF068
  {uint32_t ea=c->r[13]+0xFFFFB790u; c->f[0]=RF64(ea);} // 801DF06C
  c->f[1]=c->f[1]/c->f[0]; // 801DF070
  goto L_801DF2E8; // 801DF074
L_801DF078:;
  cmps(c,0,(int32_t)c->r[8],0); // 801DF078
  if (!crb(c,0)) { goto L_801DF098; } // 801DF07C
  c->f[1]=c->f[1]-c->f[1]; // 801DF080
  {uint32_t ea=c->r[13]+0xFFFFB790u; c->f[0]=RF64(ea);} // 801DF084
  c->r[0]=0u+0x00000021u; // 801DF088
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801DF08C
  c->f[1]=c->f[1]/c->f[0]; // 801DF090
  goto L_801DF2E8; // 801DF094
L_801DF098:;
  {uint32_t ea=c->r[2]+0xFFFFAFA0u; c->f[0]=RF64(ea);} // 801DF098
  c->r[7]=0u+0xFFFFFFCAu; // 801DF09C
  c->f[1]=c->f[1]*c->f[0]; // 801DF0A0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DF0A4
  c->r[8]=R32(c->r[1]+0x00000008u); // 801DF0A8
L_801DF0AC:;
  c->r[0]=0u+0x7FF00000u; // 801DF0AC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 801DF0B0
  if (crb(c,0)) { goto L_801DF0C0; } // 801DF0B4
  c->f[1]=c->f[1]+c->f[1]; // 801DF0B8
  goto L_801DF2E8; // 801DF0BC
L_801DF0C0:;
  c->r[5]=sraw(c,c->r[8],20); // 801DF0C0
  c->r[8]=rotl(c->r[8],0)&0x000FFFFFu; // 801DF0C4
  c->r[3]=c->r[8]+0x00090000u; // 801DF0C8
  {uint32_t ea=c->r[2]+0xFFFFAFA8u; c->f[0]=RF64(ea);} // 801DF0CC
  c->r[4]=c->r[3]+0x00005F64u; // 801DF0D0
  c->r[0]=c->r[8]+0x00000002u; // 801DF0D4
  c->r[3]=rotl(c->r[4],0)&0x00100000u; // 801DF0D8
  c->r[5]=c->r[7]+c->r[5]; // 801DF0DC
  c->r[3]=c->r[3]^0x3FF00000u; // 801DF0E0
  c->r[0]=rotl(c->r[0],0)&0x000FFFFFu; // 801DF0E4
  c->r[3]=c->r[8]|c->r[3]; // 801DF0E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801DF0EC
  cmps(c,0,(int32_t)c->r[0],3); // 801DF0F0
  c->r[7]=c->r[5]+0xFFFFFC01u; // 801DF0F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DF0F8
  c->r[0]=rotl(c->r[4],12)&0x00000001u; // 801DF0FC
  c->r[7]=c->r[7]+c->r[0]; // 801DF100
  c->f[0]=c->f[1]-c->f[0]; // 801DF104
  if (!crb(c,0)) { goto L_801DF1BC; } // 801DF108
  {uint32_t ea=c->r[13]+0xFFFFB790u; c->f[1]=RF64(ea);} // 801DF10C
  fcmp(c,0,c->f[0],c->f[1]); // 801DF110
  if (!crb(c,2)) { goto L_801DF158; } // 801DF114
  cmps(c,0,(int32_t)c->r[7],0); // 801DF118
  if (!crb(c,2)) { goto L_801DF124; } // 801DF11C
  goto L_801DF2E8; // 801DF120
L_801DF124:;
  c->r[3]=c->r[7]^0x80000000u; // 801DF124
  c->r[0]=0u+0x43300000u; // 801DF128
  W32(c->r[1]+0x00000014u,c->r[3]); // 801DF12C
  {uint32_t ea=c->r[2]+0xFFFFB010u; c->f[3]=RF64(ea);} // 801DF130
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DF134
  {uint32_t ea=c->r[2]+0xFFFFAFB0u; c->f[1]=RF64(ea);} // 801DF138
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801DF13C
  {uint32_t ea=c->r[2]+0xFFFFAFB8u; c->f[0]=RF64(ea);} // 801DF140
  c->f[2]=c->f[2]-c->f[3]; // 801DF144
  c->f[1]=c->f[1]*c->f[2]; // 801DF148
  c->f[0]=c->f[0]*c->f[2]; // 801DF14C
  c->f[1]=c->f[1]+c->f[0]; // 801DF150
  goto L_801DF2E8; // 801DF154
L_801DF158:;
  {uint32_t ea=c->r[2]+0xFFFFAFC8u; c->f[3]=RF64(ea);} // 801DF158
  c->f[1]=c->f[0]*c->f[0]; // 801DF15C
  {uint32_t ea=c->r[2]+0xFFFFAFC0u; c->f[2]=RF64(ea);} // 801DF160
  cmps(c,0,(int32_t)c->r[7],0); // 801DF164
  c->f[3]=c->f[3]*c->f[0]; // 801DF168
  c->f[2]=c->f[2]-c->f[3]; // 801DF16C
  c->f[5]=c->f[2]*c->f[1]; // 801DF170
  if (!crb(c,2)) { goto L_801DF180; } // 801DF174
  c->f[1]=c->f[0]-c->f[5]; // 801DF178
  goto L_801DF2E8; // 801DF17C
L_801DF180:;
  c->r[3]=c->r[7]^0x80000000u; // 801DF180
  c->r[0]=0u+0x43300000u; // 801DF184
  W32(c->r[1]+0x00000014u,c->r[3]); // 801DF188
  {uint32_t ea=c->r[2]+0xFFFFB010u; c->f[4]=RF64(ea);} // 801DF18C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DF190
  {uint32_t ea=c->r[2]+0xFFFFAFB8u; c->f[1]=RF64(ea);} // 801DF194
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 801DF198
  {uint32_t ea=c->r[2]+0xFFFFAFB0u; c->f[2]=RF64(ea);} // 801DF19C
  c->f[3]=c->f[3]-c->f[4]; // 801DF1A0
  c->f[1]=c->f[1]*c->f[3]; // 801DF1A4
  c->f[2]=c->f[2]*c->f[3]; // 801DF1A8
  c->f[1]=c->f[5]-c->f[1]; // 801DF1AC
  c->f[0]=c->f[1]-c->f[0]; // 801DF1B0
  c->f[1]=c->f[2]-c->f[0]; // 801DF1B4
  goto L_801DF2E8; // 801DF1B8
L_801DF1BC:;
  {uint32_t ea=c->r[2]+0xFFFFAFD0u; c->f[1]=RF64(ea);} // 801DF1BC
  c->r[5]=c->r[7]^0x80000000u; // 801DF1C0
  c->r[4]=0u+0x43300000u; // 801DF1C4
  c->r[3]=0u+0x00070000u; // 801DF1C8
  c->f[1]=c->f[1]+c->f[0]; // 801DF1CC
  c->r[6]=c->r[8]+0xFFFA0000u; // 801DF1D0
  c->r[0]=c->r[3]+0xFFFFB851u; // 801DF1D4
  {uint32_t ea=c->r[2]+0xFFFFB008u; c->f[5]=RF64(ea);} // 801DF1D8
  {uint32_t ea=c->r[2]+0xFFFFB000u; c->f[4]=RF64(ea);} // 801DF1DC
  c->r[0]=c->r[0]-c->r[8]; // 801DF1E0
  c->f[1]=c->f[0]/c->f[1]; // 801DF1E4
  c->r[6]=c->r[6]+0xFFFFEB86u; // 801DF1E8
  {uint32_t ea=c->r[2]+0xFFFFAFE8u; c->f[8]=RF64(ea);} // 801DF1EC
  c->r[6]=c->r[6]|c->r[0]; cr0(c,c->r[6]); // 801DF1F0
  {uint32_t ea=c->r[2]+0xFFFFAFE0u; c->f[7]=RF64(ea);} // 801DF1F4
  {uint32_t ea=c->r[2]+0xFFFFAFF8u; c->f[3]=RF64(ea);} // 801DF1F8
  c->f[11]=c->f[1]*c->f[1]; // 801DF1FC
  {uint32_t ea=c->r[2]+0xFFFFAFD8u; c->f[6]=RF64(ea);} // 801DF200
  {uint32_t ea=c->r[2]+0xFFFFAFF0u; c->f[2]=RF64(ea);} // 801DF204
  W32(c->r[1]+0x00000014u,c->r[5]); // 801DF208
  {uint32_t ea=c->r[2]+0xFFFFB010u; c->f[10]=RF64(ea);} // 801DF20C
  c->f[12]=c->f[11]*c->f[11]; // 801DF210
  W32(c->r[1]+0x00000010u,c->r[4]); // 801DF214
  {uint32_t ea=c->r[1]+0x00000010u; c->f[9]=RF64(ea);} // 801DF218
  c->f[5]=c->f[5]*c->f[12]; // 801DF21C
  c->f[8]=c->f[8]*c->f[12]; // 801DF220
  c->f[4]=c->f[4]+c->f[5]; // 801DF224
  c->f[9]=c->f[9]-c->f[10]; // 801DF228
  c->f[5]=c->f[7]+c->f[8]; // 801DF22C
  c->f[4]=c->f[12]*c->f[4]; // 801DF230
  c->f[5]=c->f[12]*c->f[5]; // 801DF234
  c->f[3]=c->f[3]+c->f[4]; // 801DF238
  c->f[4]=c->f[6]+c->f[5]; // 801DF23C
  c->f[3]=c->f[12]*c->f[3]; // 801DF240
  c->f[4]=c->f[12]*c->f[4]; // 801DF244
  c->f[2]=c->f[2]+c->f[3]; // 801DF248
  c->f[2]=c->f[11]*c->f[2]; // 801DF24C
  c->f[3]=c->f[2]+c->f[4]; // 801DF250
  if (!crb(c,1)) { goto L_801DF2AC; } // 801DF254
  {uint32_t ea=c->r[2]+0xFFFFAFC0u; c->f[2]=RF64(ea);} // 801DF258
  cmps(c,0,(int32_t)c->r[7],0); // 801DF25C
  c->f[2]=c->f[2]*c->f[0]; // 801DF260
  c->f[5]=c->f[2]*c->f[0]; // 801DF264
  if (!crb(c,2)) { goto L_801DF280; } // 801DF268
  c->f[2]=c->f[5]+c->f[3]; // 801DF26C
  c->f[1]=c->f[1]*c->f[2]; // 801DF270
  c->f[1]=c->f[5]-c->f[1]; // 801DF274
  c->f[1]=c->f[0]-c->f[1]; // 801DF278
  goto L_801DF2E8; // 801DF27C
L_801DF280:;
  c->f[3]=c->f[5]+c->f[3]; // 801DF280
  {uint32_t ea=c->r[2]+0xFFFFAFB8u; c->f[2]=RF64(ea);} // 801DF284
  {uint32_t ea=c->r[2]+0xFFFFAFB0u; c->f[4]=RF64(ea);} // 801DF288
  c->f[2]=c->f[2]*c->f[9]; // 801DF28C
  c->f[1]=c->f[1]*c->f[3]; // 801DF290
  c->f[3]=c->f[4]*c->f[9]; // 801DF294
  c->f[1]=c->f[1]+c->f[2]; // 801DF298
  c->f[1]=c->f[5]-c->f[1]; // 801DF29C
  c->f[0]=c->f[1]-c->f[0]; // 801DF2A0
  c->f[1]=c->f[3]-c->f[0]; // 801DF2A4
  goto L_801DF2E8; // 801DF2A8
L_801DF2AC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DF2AC
  if (!crb(c,2)) { goto L_801DF2C4; } // 801DF2B0
  c->f[2]=c->f[0]-c->f[3]; // 801DF2B4
  c->f[1]=c->f[1]*c->f[2]; // 801DF2B8
  c->f[1]=c->f[0]-c->f[1]; // 801DF2BC
  goto L_801DF2E8; // 801DF2C0
L_801DF2C4:;
  c->f[3]=c->f[0]-c->f[3]; // 801DF2C4
  {uint32_t ea=c->r[2]+0xFFFFAFB8u; c->f[2]=RF64(ea);} // 801DF2C8
  {uint32_t ea=c->r[2]+0xFFFFAFB0u; c->f[4]=RF64(ea);} // 801DF2CC
  c->f[2]=c->f[2]*c->f[9]; // 801DF2D0
  c->f[1]=c->f[1]*c->f[3]; // 801DF2D4
  c->f[3]=c->f[4]*c->f[9]; // 801DF2D8
  c->f[1]=c->f[1]-c->f[2]; // 801DF2DC
  c->f[0]=c->f[1]-c->f[0]; // 801DF2E0
  c->f[1]=c->f[3]-c->f[0]; // 801DF2E4
L_801DF2E8:;
  c->r[1]=c->r[1]+0x00000020u; // 801DF2E8
  return; // 801DF2EC
}

// __ieee754_log10
void f_801DF2F0(Ctx* __restrict c) {
  trace_call(0x801DF2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF2F0
  c->r[0]=c->lr; // 801DF2F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF2F8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801DF2FC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DF300
  c->r[0]=0u+0x00100000u; // 801DF304
  c->r[4]=0u+0x00000000u; // 801DF308
  c->r[5]=R32(c->r[1]+0x00000008u); // 801DF30C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801DF310
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801DF314
  if (!crb(c,0)) { goto L_801DF374; } // 801DF318
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801DF31C
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 801DF320
  if (!crb(c,2)) { goto L_801DF340; } // 801DF324
  {uint32_t ea=c->r[2]+0xFFFFB018u; c->f[1]=RF64(ea);} // 801DF328
  c->r[0]=0u+0x00000021u; // 801DF32C
  {uint32_t ea=c->r[13]+0xFFFFB798u; c->f[0]=RF64(ea);} // 801DF330
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801DF334
  c->f[1]=c->f[1]/c->f[0]; // 801DF338
  goto L_801DF3F0; // 801DF33C
L_801DF340:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DF340
  if (!crb(c,0)) { goto L_801DF360; } // 801DF344
  c->f[1]=c->f[1]-c->f[1]; // 801DF348
  {uint32_t ea=c->r[13]+0xFFFFB798u; c->f[0]=RF64(ea);} // 801DF34C
  c->r[0]=0u+0x00000021u; // 801DF350
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801DF354
  c->f[1]=c->f[1]/c->f[0]; // 801DF358
  goto L_801DF3F0; // 801DF35C
L_801DF360:;
  {uint32_t ea=c->r[2]+0xFFFFB020u; c->f[0]=RF64(ea);} // 801DF360
  c->r[4]=0u+0xFFFFFFCAu; // 801DF364
  c->f[1]=c->f[1]*c->f[0]; // 801DF368
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DF36C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801DF370
L_801DF374:;
  c->r[0]=0u+0x7FF00000u; // 801DF374
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801DF378
  if (crb(c,0)) { goto L_801DF388; } // 801DF37C
  c->f[1]=c->f[1]+c->f[1]; // 801DF380
  goto L_801DF3F0; // 801DF384
L_801DF388:;
  c->r[3]=sraw(c,c->r[5],20); // 801DF388
  c->r[0]=0u+0x43300000u; // 801DF38C
  c->r[3]=c->r[4]+c->r[3]; // 801DF390
  W32(c->r[1]+0x00000010u,c->r[0]); // 801DF394
  c->r[4]=c->r[3]+0xFFFFFC01u; // 801DF398
  {uint32_t ea=c->r[2]+0xFFFFB040u; c->f[1]=RF64(ea);} // 801DF39C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801DF3A0
  c->r[0]=c->r[4]+c->r[3]; // 801DF3A4
  c->r[0]=c->r[0]^0x80000000u; // 801DF3A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF3AC
  c->r[0]=addc(c,~c->r[3],0x000003FFu,1); // 801DF3B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801DF3B4
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 801DF3B8
  c->r[0]=(rotl(c->r[5],0)&0x000FFFFFu)|(c->r[0]&~0x000FFFFFu); // 801DF3BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801DF3C0
  c->f[31]=c->f[0]-c->f[1]; // 801DF3C4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801DF3C8
  c->lr=0x801DF3D0u; f_801DF03C(c); // 801DF3CC
  {uint32_t ea=c->r[2]+0xFFFFB030u; c->f[0]=RF64(ea);} // 801DF3D0
  {uint32_t ea=c->r[2]+0xFFFFB028u; c->f[2]=RF64(ea);} // 801DF3D4
  c->f[3]=c->f[0]*c->f[1]; // 801DF3D8
  {uint32_t ea=c->r[2]+0xFFFFB038u; c->f[0]=RF64(ea);} // 801DF3DC
  c->f[1]=c->f[2]*c->f[31]; // 801DF3E0
  c->f[0]=c->f[0]*c->f[31]; // 801DF3E4
  c->f[1]=c->f[1]+c->f[3]; // 801DF3E8
  c->f[1]=c->f[1]+c->f[0]; // 801DF3EC
L_801DF3F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF3F0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801DF3F4
  c->lr=c->r[0]; // 801DF3F8
  c->r[1]=c->r[1]+0x00000020u; // 801DF3FC
  return; // 801DF400
}

// __ieee754_pow
void f_801DF404(Ctx* __restrict c) {
  trace_call(0x801DF404u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF404
  c->r[0]=c->lr; // 801DF408
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801DF40C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 801DF410
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 801DF414
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 801DF418
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 801DF41C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 801DF420
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 801DF424
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 801DF428
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 801DF42C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 801DF430
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 801DF434
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[26]);} // 801DF438
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,26,ea,0,0);} // 801DF43C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 801DF440
  c->r[3]=0u+0x80200000u; // 801DF444
  c->r[3]=c->r[3]+0xFFFFB5F8u; // 801DF448
  c->r[5]=R32(c->r[1]+0x00000010u); // 801DF44C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DF450
  c->r[11]=R32(c->r[1]+0x00000014u); // 801DF454
  c->r[7]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801DF458
  c->r[9]=R32(c->r[1]+0x00000008u); // 801DF45C
  c->r[0]=c->r[7]|c->r[11]; cr0(c,c->r[0]); // 801DF460
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 801DF464
  c->r[6]=rotl(c->r[9],0)&0x7FFFFFFFu; // 801DF468
  if (!crb(c,2)) { goto L_801DF478; } // 801DF46C
  {uint32_t ea=c->r[2]+0xFFFFB048u; c->f[1]=RF64(ea);} // 801DF470
  goto L_801DFBD8; // 801DF474
L_801DF478:;
  c->r[0]=0u+0x7FF00000u; // 801DF478
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DF47C
  if (crb(c,1)) { goto L_801DF4B8; } // 801DF480
  c->r[0]=c->r[6]+0x80100000u; // 801DF484
  cmpu(c,0,c->r[0],0x00000000u); // 801DF488
  if (!crb(c,2)) { goto L_801DF498; } // 801DF48C
  cmps(c,0,(int32_t)c->r[10],0); // 801DF490
  if (!crb(c,2)) { goto L_801DF4B8; } // 801DF494
L_801DF498:;
  c->r[0]=0u+0x7FF00000u; // 801DF498
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DF49C
  if (crb(c,1)) { goto L_801DF4B8; } // 801DF4A0
  c->r[0]=c->r[7]+0x80100000u; // 801DF4A4
  cmpu(c,0,c->r[0],0x00000000u); // 801DF4A8
  if (!crb(c,2)) { goto L_801DF4C0; } // 801DF4AC
  cmps(c,0,(int32_t)c->r[11],0); // 801DF4B0
  if (crb(c,2)) { goto L_801DF4C0; } // 801DF4B4
L_801DF4B8:;
  c->f[1]=c->f[1]+c->f[2]; // 801DF4B8
  goto L_801DFBD8; // 801DF4BC
L_801DF4C0:;
  cmps(c,0,(int32_t)c->r[9],0); // 801DF4C0
  c->r[4]=0u+0x00000000u; // 801DF4C4
  if (!crb(c,0)) { goto L_801DF540; } // 801DF4C8
  c->r[0]=0u+0x43400000u; // 801DF4CC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DF4D0
  if (crb(c,0)) { goto L_801DF4E0; } // 801DF4D4
  c->r[4]=0u+0x00000002u; // 801DF4D8
  goto L_801DF540; // 801DF4DC
L_801DF4E0:;
  c->r[0]=0u+0x3FF00000u; // 801DF4E0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DF4E4
  if (crb(c,0)) { goto L_801DF540; } // 801DF4E8
  c->r[8]=sraw(c,c->r[7],20); // 801DF4EC
  c->r[0]=c->r[8]+0xFFFFFC01u; // 801DF4F0
  cmps(c,0,(int32_t)c->r[0],20); // 801DF4F4
  if (!crb(c,1)) { goto L_801DF51C; } // 801DF4F8
  c->r[0]=addc(c,~c->r[0],0x00000034u,1); // 801DF4FC
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[11]>>((c->r[0])&31)); // 801DF500
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801DF504
  cmpu(c,0,c->r[11],c->r[0]); // 801DF508
  if (!crb(c,2)) { goto L_801DF540; } // 801DF50C
  c->r[0]=rotl(c->r[8],0)&0x00000001u; // 801DF510
  c->r[4]=addc(c,~c->r[0],0x00000002u,1); // 801DF514
  goto L_801DF540; // 801DF518
L_801DF51C:;
  cmps(c,0,(int32_t)c->r[11],0); // 801DF51C
  if (!crb(c,2)) { goto L_801DF540; } // 801DF520
  c->r[0]=addc(c,~c->r[0],0x00000014u,1); // 801DF524
  c->r[8]=sraw(c,c->r[7],(c->r[0])&63); // 801DF528
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801DF52C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801DF530
  if (!crb(c,2)) { goto L_801DF540; } // 801DF534
  c->r[0]=rotl(c->r[8],0)&0x00000001u; // 801DF538
  c->r[4]=addc(c,~c->r[0],0x00000002u,1); // 801DF53C
L_801DF540:;
  cmps(c,0,(int32_t)c->r[11],0); // 801DF540
  if (!crb(c,2)) { goto L_801DF5F4; } // 801DF544
  c->r[0]=c->r[7]+0x80100000u; // 801DF548
  cmpu(c,0,c->r[0],0x00000000u); // 801DF54C
  if (!crb(c,2)) { goto L_801DF5A4; } // 801DF550
  c->r[0]=c->r[6]+0xC0100000u; // 801DF554
  c->r[0]=c->r[0]|c->r[10]; cr0(c,c->r[0]); // 801DF558
  if (!crb(c,2)) { goto L_801DF568; } // 801DF55C
  c->f[1]=c->f[2]-c->f[2]; // 801DF560
  goto L_801DFBD8; // 801DF564
L_801DF568:;
  c->r[0]=0u+0x3FF00000u; // 801DF568
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DF56C
  if (crb(c,0)) { goto L_801DF58C; } // 801DF570
  cmps(c,0,(int32_t)c->r[5],0); // 801DF574
  if (crb(c,0)) { goto L_801DF584; } // 801DF578
  c->f[1]=c->f[2]; // 801DF57C
  goto L_801DFBD8; // 801DF580
L_801DF584:;
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[1]=RF64(ea);} // 801DF584
  goto L_801DFBD8; // 801DF588
L_801DF58C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DF58C
  if (!crb(c,0)) { goto L_801DF59C; } // 801DF590
  c->f[1]=-c->f[2]; // 801DF594
  goto L_801DFBD8; // 801DF598
L_801DF59C:;
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[1]=RF64(ea);} // 801DF59C
  goto L_801DFBD8; // 801DF5A0
L_801DF5A4:;
  c->r[0]=c->r[7]+0xC0100000u; // 801DF5A4
  cmpu(c,0,c->r[0],0x00000000u); // 801DF5A8
  if (!crb(c,2)) { goto L_801DF5C4; } // 801DF5AC
  cmps(c,0,(int32_t)c->r[5],0); // 801DF5B0
  if (!crb(c,0)) { goto L_801DFBD8; } // 801DF5B4
  {uint32_t ea=c->r[2]+0xFFFFB048u; c->f[0]=RF64(ea);} // 801DF5B8
  c->f[1]=c->f[0]/c->f[1]; // 801DF5BC
  goto L_801DFBD8; // 801DF5C0
L_801DF5C4:;
  c->r[0]=c->r[5]+0xC0000000u; // 801DF5C4
  cmpu(c,0,c->r[0],0x00000000u); // 801DF5C8
  if (!crb(c,2)) { goto L_801DF5D8; } // 801DF5CC
  c->f[1]=c->f[1]*c->f[1]; // 801DF5D0
  goto L_801DFBD8; // 801DF5D4
L_801DF5D8:;
  c->r[0]=c->r[5]+0xC0200000u; // 801DF5D8
  cmpu(c,0,c->r[0],0x00000000u); // 801DF5DC
  if (!crb(c,2)) { goto L_801DF5F4; } // 801DF5E0
  cmps(c,0,(int32_t)c->r[9],0); // 801DF5E4
  if (crb(c,0)) { goto L_801DF5F4; } // 801DF5E8
  c->lr=0x801DF5F0u; f_801E247C(c); // 801DF5EC
  goto L_801DFBD8; // 801DF5F0
L_801DF5F4:;
  c->f[0]=std::fabs(c->f[1]); // 801DF5F4
  cmps(c,0,(int32_t)c->r[10],0); // 801DF5F8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 801DF5FC
  if (!crb(c,2)) { goto L_801DF668; } // 801DF600
  c->r[0]=c->r[6]+0x80100000u; // 801DF604
  cmpu(c,0,c->r[0],0x00000000u); // 801DF608
  if (crb(c,2)) { goto L_801DF624; } // 801DF60C
  cmps(c,0,(int32_t)c->r[6],0); // 801DF610
  if (crb(c,2)) { goto L_801DF624; } // 801DF614
  c->r[0]=c->r[6]+0xC0100000u; // 801DF618
  cmpu(c,0,c->r[0],0x00000000u); // 801DF61C
  if (!crb(c,2)) { goto L_801DF668; } // 801DF620
L_801DF624:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DF624
  if (!crb(c,0)) { goto L_801DF634; } // 801DF628
  {uint32_t ea=c->r[2]+0xFFFFB048u; c->f[1]=RF64(ea);} // 801DF62C
  c->f[0]=c->f[1]/c->f[0]; // 801DF630
L_801DF634:;
  cmps(c,0,(int32_t)c->r[9],0); // 801DF634
  if (!crb(c,0)) { goto L_801DF660; } // 801DF638
  c->r[0]=c->r[6]+0xC0100000u; // 801DF63C
  c->r[0]=c->r[0]|c->r[4]; cr0(c,c->r[0]); // 801DF640
  if (!crb(c,2)) { goto L_801DF654; } // 801DF644
  c->f[0]=c->f[0]-c->f[0]; // 801DF648
  c->f[0]=c->f[0]/c->f[0]; // 801DF64C
  goto L_801DF660; // 801DF650
L_801DF654:;
  cmps(c,0,(int32_t)c->r[4],1); // 801DF654
  if (!crb(c,2)) { goto L_801DF660; } // 801DF658
  c->f[0]=-c->f[0]; // 801DF65C
L_801DF660:;
  c->f[1]=c->f[0]; // 801DF660
  goto L_801DFBD8; // 801DF664
L_801DF668:;
  c->r[8]=sraw(c,c->r[9],31); // 801DF668
  c->r[0]=c->r[8]+0x00000001u; // 801DF66C
  c->r[8]=c->r[0]|c->r[4]; cr0(c,c->r[8]); // 801DF670
  if (!crb(c,2)) { goto L_801DF68C; } // 801DF674
  c->r[3]=0u+0x802E0000u; // 801DF678
  c->r[0]=0u+0x00000021u; // 801DF67C
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801DF680
  {uint32_t ea=c->r[3]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DF684
  goto L_801DFBD8; // 801DF688
L_801DF68C:;
  c->r[8]=0u+0x41E00000u; // 801DF68C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 801DF690
  if (!crb(c,1)) { goto L_801DF790; } // 801DF694
  c->r[3]=0u+0x43F00000u; // 801DF698
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 801DF69C
  if (!crb(c,1)) { goto L_801DF6E0; } // 801DF6A0
  c->r[0]=0u+0x3FF00000u; // 801DF6A4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DF6A8
  if (!crb(c,0)) { goto L_801DF6C8; } // 801DF6AC
  cmps(c,0,(int32_t)c->r[5],0); // 801DF6B0
  if (!crb(c,0)) { goto L_801DF6C0; } // 801DF6B4
  {uint32_t ea=c->r[2]+0xFFFFB058u; c->f[1]=RF64(ea);} // 801DF6B8
  goto L_801DFBD8; // 801DF6BC
L_801DF6C0:;
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[1]=RF64(ea);} // 801DF6C0
  goto L_801DFBD8; // 801DF6C4
L_801DF6C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DF6C8
  if (!crb(c,1)) { goto L_801DF6D8; } // 801DF6CC
  {uint32_t ea=c->r[2]+0xFFFFB058u; c->f[1]=RF64(ea);} // 801DF6D0
  goto L_801DFBD8; // 801DF6D4
L_801DF6D8:;
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[1]=RF64(ea);} // 801DF6D8
  goto L_801DFBD8; // 801DF6DC
L_801DF6E0:;
  c->r[3]=0u+0x3FF00000u; // 801DF6E0
  c->r[7]=c->r[3]+0xFFFFFFFFu; // 801DF6E4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 801DF6E8
  if (!crb(c,0)) { goto L_801DF708; } // 801DF6EC
  cmps(c,0,(int32_t)c->r[5],0); // 801DF6F0
  if (!crb(c,0)) { goto L_801DF700; } // 801DF6F4
  {uint32_t ea=c->r[2]+0xFFFFB058u; c->f[1]=RF64(ea);} // 801DF6F8
  goto L_801DFBD8; // 801DF6FC
L_801DF700:;
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[1]=RF64(ea);} // 801DF700
  goto L_801DFBD8; // 801DF704
L_801DF708:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[3]); // 801DF708
  if (!crb(c,1)) { goto L_801DF728; } // 801DF70C
  cmps(c,0,(int32_t)c->r[5],0); // 801DF710
  if (!crb(c,1)) { goto L_801DF720; } // 801DF714
  {uint32_t ea=c->r[2]+0xFFFFB058u; c->f[1]=RF64(ea);} // 801DF718
  goto L_801DFBD8; // 801DF71C
L_801DF720:;
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[1]=RF64(ea);} // 801DF720
  goto L_801DFBD8; // 801DF724
L_801DF728:;
  {uint32_t ea=c->r[2]+0xFFFFB048u; c->f[3]=RF64(ea);} // 801DF728
  c->r[3]=0u+0x00000000u; // 801DF72C
  {uint32_t ea=c->r[2]+0xFFFFB070u; c->f[0]=RF64(ea);} // 801DF730
  c->f[8]=c->f[1]-c->f[3]; // 801DF734
  {uint32_t ea=c->r[2]+0xFFFFB080u; c->f[1]=RF64(ea);} // 801DF738
  {uint32_t ea=c->r[2]+0xFFFFB068u; c->f[5]=RF64(ea);} // 801DF73C
  {uint32_t ea=c->r[2]+0xFFFFB078u; c->f[3]=RF64(ea);} // 801DF740
  c->f[6]=c->f[0]*c->f[8]; // 801DF744
  {uint32_t ea=c->r[2]+0xFFFFB060u; c->f[4]=RF64(ea);} // 801DF748
  {uint32_t ea=c->r[2]+0xFFFFB088u; c->f[0]=RF64(ea);} // 801DF74C
  c->f[7]=c->f[8]*c->f[8]; // 801DF750
  c->f[5]=c->f[5]-c->f[6]; // 801DF754
  c->f[6]=c->f[3]*c->f[8]; // 801DF758
  c->f[5]=c->f[8]*c->f[5]; // 801DF75C
  c->f[1]=c->f[1]*c->f[8]; // 801DF760
  c->f[3]=c->f[4]-c->f[5]; // 801DF764
  c->f[3]=c->f[7]*c->f[3]; // 801DF768
  c->f[0]=c->f[0]*c->f[3]; // 801DF76C
  c->f[1]=c->f[1]-c->f[0]; // 801DF770
  c->f[0]=c->f[6]+c->f[1]; // 801DF774
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801DF778
  W32(c->r[1]+0x00000034u,c->r[3]); // 801DF77C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801DF780
  c->f[0]=c->f[0]-c->f[6]; // 801DF784
  c->f[0]=c->f[1]-c->f[0]; // 801DF788
  goto L_801DF998; // 801DF78C
L_801DF790:;
  c->r[5]=0u+0x00100000u; // 801DF790
  c->r[11]=0u+0x00000000u; // 801DF794
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 801DF798
  if (!crb(c,0)) { goto L_801DF7B4; } // 801DF79C
  {uint32_t ea=c->r[2]+0xFFFFB090u; c->f[1]=RF64(ea);} // 801DF7A0
  c->r[11]=0u+0xFFFFFFCBu; // 801DF7A4
  c->f[0]=c->f[0]*c->f[1]; // 801DF7A8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 801DF7AC
  c->r[6]=R32(c->r[1]+0x00000048u); // 801DF7B0
L_801DF7B4:;
  c->r[5]=0u+0x00040000u; // 801DF7B4
  c->r[8]=rotl(c->r[6],0)&0x000FFFFFu; // 801DF7B8
  c->r[5]=c->r[5]+0xFFFF988Eu; // 801DF7BC
  c->r[6]=sraw(c,c->r[6],20); // 801DF7C0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 801DF7C4
  c->r[7]=c->r[8]|0x3FF00000u; // 801DF7C8
  c->r[5]=c->r[11]+c->r[6]; // 801DF7CC
  c->r[11]=c->r[5]+0xFFFFFC01u; // 801DF7D0
  if (crb(c,1)) { goto L_801DF7E0; } // 801DF7D4
  c->r[6]=0u+0x00000000u; // 801DF7D8
  goto L_801DF804; // 801DF7DC
L_801DF7E0:;
  c->r[5]=0u+0x000C0000u; // 801DF7E0
  c->r[5]=c->r[5]+0xFFFFB67Au; // 801DF7E4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 801DF7E8
  if (!crb(c,0)) { goto L_801DF7F8; } // 801DF7EC
  c->r[6]=0u+0x00000001u; // 801DF7F0
  goto L_801DF804; // 801DF7F4
L_801DF7F8:;
  c->r[7]=c->r[7]+0xFFF00000u; // 801DF7F8
  c->r[6]=0u+0x00000000u; // 801DF7FC
  c->r[11]=c->r[11]+0x00000001u; // 801DF800
L_801DF804:;
  W32(c->r[1]+0x00000048u,c->r[7]); // 801DF804
  c->r[9]=sraw(c,c->r[7],1); // 801DF808
  c->r[10]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801DF80C
  c->r[5]=c->r[3]+0x00000000u; // 801DF810
  {uint32_t ea=c->r[5]+c->r[10]; c->f[8]=RF64(ea);} // 801DF814
  c->r[8]=rotl(c->r[6],18)&0xFFFC0000u; // 801DF818
  {uint32_t ea=c->r[1]+0x00000048u; c->f[10]=RF64(ea);} // 801DF81C
  c->r[6]=c->r[11]^0x80000000u; // 801DF820
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[0]=RF64(ea);} // 801DF824
  c->r[5]=0u+0x43300000u; // 801DF828
  c->f[3]=c->f[10]+c->f[8]; // 801DF82C
  {uint32_t ea=c->r[2]+0xFFFFB048u; c->f[1]=RF64(ea);} // 801DF830
  c->f[26]=c->f[10]-c->f[8]; // 801DF834
  {uint32_t ea=c->r[2]+0xFFFFB0C0u; c->f[7]=RF64(ea);} // 801DF838
  {uint32_t ea=c->r[2]+0xFFFFB0B0u; c->f[6]=RF64(ea);} // 801DF83C
  c->r[9]=c->r[9]|0x20000000u; // 801DF840
  c->f[1]=c->f[1]/c->f[3]; // 801DF844
  c->r[8]=c->r[8]+0x00080000u; // 801DF848
  c->r[8]=c->r[9]+c->r[8]; // 801DF84C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801DF850
  {uint32_t ea=c->r[2]+0xFFFFB0B8u; c->f[3]=RF64(ea);} // 801DF854
  c->r[9]=0u+0x00000000u; // 801DF858
  c->f[4]=c->f[26]*c->f[1]; // 801DF85C
  W32(c->r[1]+0x00000018u,c->r[8]); // 801DF860
  {uint32_t ea=c->r[2]+0xFFFFB0A8u; c->f[13]=RF64(ea);} // 801DF864
  c->r[7]=c->r[3]+0x00000020u; // 801DF868
  {uint32_t ea=c->r[1]+0x00000018u; c->f[9]=RF64(ea);} // 801DF86C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[4]);} // 801DF870
  c->f[5]=c->f[4]*c->f[4]; // 801DF874
  W32(c->r[1]+0x00000024u,c->r[9]); // 801DF878
  {uint32_t ea=c->r[2]+0xFFFFB0A0u; c->f[30]=RF64(ea);} // 801DF87C
  c->f[8]=c->f[9]-c->f[8]; // 801DF880
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801DF884
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 801DF888
  c->f[7]=c->f[7]*c->f[5]; // 801DF88C
  W32(c->r[1]+0x00000058u,c->r[5]); // 801DF890
  {uint32_t ea=c->r[2]+0xFFFFB098u; c->f[31]=RF64(ea);} // 801DF894
  c->f[8]=c->f[10]-c->f[8]; // 801DF898
  {uint32_t ea=c->r[2]+0xFFFFB0C8u; c->f[12]=RF64(ea);} // 801DF89C
  c->f[28]=c->f[0]*c->f[9]; // 801DF8A0
  c->f[7]=c->f[3]+c->f[7]; // 801DF8A4
  {uint32_t ea=c->r[2]+0xFFFFB0D8u; c->f[10]=RF64(ea);} // 801DF8A8
  c->f[27]=c->f[0]*c->f[8]; // 801DF8AC
  {uint32_t ea=c->r[2]+0xFFFFB0E0u; c->f[9]=RF64(ea);} // 801DF8B0
  {uint32_t ea=c->r[2]+0xFFFFB0D0u; c->f[11]=RF64(ea);} // 801DF8B4
  c->f[7]=c->f[5]*c->f[7]; // 801DF8B8
  {uint32_t ea=c->r[7]+c->r[10]; c->f[8]=RF64(ea);} // 801DF8BC
  c->f[28]=c->f[26]-c->f[28]; // 801DF8C0
  c->f[3]=c->f[0]*c->f[0]; // 801DF8C4
  c->f[29]=c->f[6]+c->f[7]; // 801DF8C8
  {uint32_t ea=c->r[2]+0xFFFFB150u; c->f[7]=RF64(ea);} // 801DF8CC
  c->f[27]=c->f[28]-c->f[27]; // 801DF8D0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[6]=RF64(ea);} // 801DF8D4
  c->f[28]=c->f[5]*c->f[5]; // 801DF8D8
  c->f[29]=c->f[5]*c->f[29]; // 801DF8DC
  c->f[27]=c->f[1]*c->f[27]; // 801DF8E0
  c->f[13]=c->f[13]+c->f[29]; // 801DF8E4
  c->f[1]=c->f[12]+c->f[3]; // 801DF8E8
  c->f[29]=c->f[5]*c->f[13]; // 801DF8EC
  c->f[13]=c->f[0]+c->f[4]; // 801DF8F0
  c->f[30]=c->f[30]+c->f[29]; // 801DF8F4
  c->f[13]=c->f[27]*c->f[13]; // 801DF8F8
  c->f[30]=c->f[5]*c->f[30]; // 801DF8FC
  c->f[5]=c->f[6]-c->f[7]; // 801DF900
  c->f[6]=c->f[31]+c->f[30]; // 801DF904
  c->f[26]=c->f[28]*c->f[6]; // 801DF908
  c->f[26]=c->f[26]+c->f[13]; // 801DF90C
  c->f[1]=c->f[1]+c->f[26]; // 801DF910
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 801DF914
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 801DF918
  {uint32_t ea=c->r[1]+0x00000018u; c->f[7]=RF64(ea);} // 801DF91C
  c->f[6]=c->f[7]-c->f[12]; // 801DF920
  c->f[1]=c->f[27]*c->f[7]; // 801DF924
  c->f[3]=c->f[6]-c->f[3]; // 801DF928
  c->f[6]=c->f[0]*c->f[7]; // 801DF92C
  c->f[0]=c->f[26]-c->f[3]; // 801DF930
  c->f[0]=c->f[0]*c->f[4]; // 801DF934
  c->f[4]=c->f[1]+c->f[0]; // 801DF938
  c->f[3]=c->f[6]+c->f[4]; // 801DF93C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 801DF940
  W32(c->r[1]+0x00000044u,c->r[9]); // 801DF944
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 801DF948
  c->f[0]=c->f[3]-c->f[6]; // 801DF94C
  c->f[1]=c->f[10]*c->f[3]; // 801DF950
  c->f[0]=c->f[4]-c->f[0]; // 801DF954
  c->f[3]=c->f[11]*c->f[3]; // 801DF958
  c->f[0]=c->f[9]*c->f[0]; // 801DF95C
  c->f[0]=c->f[1]+c->f[0]; // 801DF960
  c->f[4]=c->f[8]+c->f[0]; // 801DF964
  c->r[3]=c->r[3]+0x00000010u; // 801DF968
  c->f[0]=c->f[3]+c->f[4]; // 801DF96C
  {uint32_t ea=c->r[3]+c->r[10]; c->f[1]=RF64(ea);} // 801DF970
  c->f[0]=c->f[0]+c->f[1]; // 801DF974
  c->f[0]=c->f[5]+c->f[0]; // 801DF978
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 801DF97C
  W32(c->r[1]+0x00000034u,c->r[9]); // 801DF980
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801DF984
  c->f[0]=c->f[0]-c->f[5]; // 801DF988
  c->f[0]=c->f[0]-c->f[1]; // 801DF98C
  c->f[0]=c->f[0]-c->f[3]; // 801DF990
  c->f[0]=c->f[4]-c->f[0]; // 801DF994
L_801DF998:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 801DF998
  {uint32_t ea=c->r[2]+0xFFFFB048u; c->f[31]=RF64(ea);} // 801DF99C
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 801DF9A0
  if (!crb(c,2)) { goto L_801DF9AC; } // 801DF9A4
  {uint32_t ea=c->r[2]+0xFFFFB0E8u; c->f[31]=RF64(ea);} // 801DF9A8
L_801DF9AC:;
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 801DF9AC
  c->r[0]=0u+0x00000000u; // 801DF9B0
  c->f[0]=c->f[2]*c->f[0]; // 801DF9B4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 801DF9B8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801DF9BC
  c->r[0]=0u+0x40900000u; // 801DF9C0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 801DF9C4
  c->f[2]=c->f[2]-c->f[3]; // 801DF9C8
  c->f[3]=c->f[3]*c->f[1]; // 801DF9CC
  c->f[1]=c->f[1]*c->f[2]; // 801DF9D0
  c->f[10]=c->f[1]+c->f[0]; // 801DF9D4
  c->f[0]=c->f[10]+c->f[3]; // 801DF9D8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 801DF9DC
  c->r[6]=R32(c->r[1]+0x00000050u); // 801DF9E0
  c->r[5]=R32(c->r[1]+0x00000054u); // 801DF9E4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DF9E8
  if (crb(c,0)) { goto L_801DFA30; } // 801DF9EC
  c->r[0]=c->r[6]+0xBF700000u; // 801DF9F0
  c->r[0]=c->r[0]|c->r[5]; cr0(c,c->r[0]); // 801DF9F4
  if (crb(c,2)) { goto L_801DFA0C; } // 801DF9F8
  {uint32_t ea=c->r[2]+0xFFFFB0F0u; c->f[1]=RF64(ea);} // 801DF9FC
  c->f[0]=c->f[1]*c->f[31]; // 801DFA00
  c->f[1]=c->f[1]*c->f[0]; // 801DFA04
  goto L_801DFBD8; // 801DFA08
L_801DFA0C:;
  {uint32_t ea=c->r[2]+0xFFFFB0F8u; c->f[1]=RF64(ea);} // 801DFA0C
  c->f[0]=c->f[0]-c->f[3]; // 801DFA10
  c->f[1]=c->f[1]+c->f[10]; // 801DFA14
  fcmp(c,0,c->f[1],c->f[0]); // 801DFA18
  if (!crb(c,1)) { goto L_801DFA84; } // 801DFA1C
  {uint32_t ea=c->r[2]+0xFFFFB0F0u; c->f[1]=RF64(ea);} // 801DFA20
  c->f[0]=c->f[1]*c->f[31]; // 801DFA24
  c->f[1]=c->f[1]*c->f[0]; // 801DFA28
  goto L_801DFBD8; // 801DFA2C
L_801DFA30:;
  c->r[3]=0u+0x40910000u; // 801DFA30
  c->r[4]=rotl(c->r[6],0)&0x7FFFFFFFu; // 801DFA34
  c->r[0]=c->r[3]+0xFFFFCC00u; // 801DFA38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DFA3C
  if (crb(c,0)) { goto L_801DFA84; } // 801DFA40
  c->r[3]=c->r[6]+0x3F6F0000u; // 801DFA44
  c->r[0]=c->r[3]+0x00003400u; // 801DFA48
  c->r[0]=c->r[0]|c->r[5]; cr0(c,c->r[0]); // 801DFA4C
  if (crb(c,2)) { goto L_801DFA64; } // 801DFA50
  {uint32_t ea=c->r[2]+0xFFFFB100u; c->f[1]=RF64(ea);} // 801DFA54
  c->f[0]=c->f[1]*c->f[31]; // 801DFA58
  c->f[1]=c->f[1]*c->f[0]; // 801DFA5C
  goto L_801DFBD8; // 801DFA60
L_801DFA64:;
  c->f[0]=c->f[0]-c->f[3]; // 801DFA64
  fcmp(c,0,c->f[10],c->f[0]); // 801DFA68
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801DFA6C
  if (!crb(c,2)) { goto L_801DFA84; } // 801DFA70
  {uint32_t ea=c->r[2]+0xFFFFB100u; c->f[1]=RF64(ea);} // 801DFA74
  c->f[0]=c->f[1]*c->f[31]; // 801DFA78
  c->f[1]=c->f[1]*c->f[0]; // 801DFA7C
  goto L_801DFBD8; // 801DFA80
L_801DFA84:;
  c->r[3]=rotl(c->r[6],0)&0x7FFFFFFFu; // 801DFA84
  c->r[0]=0u+0x3FE00000u; // 801DFA88
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801DFA8C
  c->r[4]=rotl(c->r[6],12)&0x000007FFu; // 801DFA90
  c->r[3]=0u+0x00000000u; // 801DFA94
  if (!crb(c,1)) { goto L_801DFAF4; } // 801DFA98
  c->r[3]=0u+0x00100000u; // 801DFA9C
  c->r[0]=c->r[4]+0xFFFFFC02u; // 801DFAA0
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 801DFAA4
  {uint32_t ea=c->r[2]+0xFFFFB050u; c->f[0]=RF64(ea);} // 801DFAA8
  c->r[7]=c->r[6]+c->r[0]; // 801DFAAC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 801DFAB0
  c->r[0]=rotl(c->r[7],0)&0x7FFFFFFFu; // 801DFAB4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801DFAB8
  c->r[4]=sraw(c,c->r[0],20); // 801DFABC
  cmps(c,0,(int32_t)c->r[6],0); // 801DFAC0
  c->r[5]=c->r[4]+0xFFFFFC01u; // 801DFAC4
  c->r[0]=rotl(c->r[7],0)&0x000FFFFFu; // 801DFAC8
  c->r[4]=sraw(c,c->r[3],(c->r[5])&63); // 801DFACC
  c->r[3]=c->r[0]|0x00100000u; // 801DFAD0
  c->r[0]=addc(c,~c->r[5],0x00000014u,1); // 801DFAD4
  c->r[4]=c->r[7]&~c->r[4]; // 801DFAD8
  W32(c->r[1]+0x00000028u,c->r[4]); // 801DFADC
  c->r[3]=sraw(c,c->r[3],(c->r[0])&63); // 801DFAE0
  if (!crb(c,0)) { goto L_801DFAEC; } // 801DFAE4
  c->r[3]=0u-c->r[3]; // 801DFAE8
L_801DFAEC:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 801DFAEC
  c->f[3]=c->f[3]-c->f[0]; // 801DFAF0
L_801DFAF4:;
  c->f[0]=c->f[10]+c->f[3]; // 801DFAF4
  c->r[0]=0u+0x00000000u; // 801DFAF8
  {uint32_t ea=c->r[2]+0xFFFFB110u; c->f[2]=RF64(ea);} // 801DFAFC
  c->r[4]=rotl(c->r[3],20)&0xFFF00000u; // 801DFB00
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 801DFB04
  {uint32_t ea=c->r[2]+0xFFFFB118u; c->f[0]=RF64(ea);} // 801DFB08
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801DFB0C
  {uint32_t ea=c->r[2]+0xFFFFB108u; c->f[9]=RF64(ea);} // 801DFB10
  {uint32_t ea=c->r[1]+0x00000028u; c->f[8]=RF64(ea);} // 801DFB14
  {uint32_t ea=c->r[2]+0xFFFFB140u; c->f[6]=RF64(ea);} // 801DFB18
  c->f[3]=c->f[8]-c->f[3]; // 801DFB1C
  {uint32_t ea=c->r[2]+0xFFFFB138u; c->f[1]=RF64(ea);} // 801DFB20
  c->f[7]=c->f[0]*c->f[8]; // 801DFB24
  {uint32_t ea=c->r[2]+0xFFFFB130u; c->f[5]=RF64(ea);} // 801DFB28
  {uint32_t ea=c->r[2]+0xFFFFB128u; c->f[4]=RF64(ea);} // 801DFB2C
  c->f[0]=c->f[10]-c->f[3]; // 801DFB30
  c->f[10]=c->f[9]*c->f[8]; // 801DFB34
  {uint32_t ea=c->r[2]+0xFFFFB120u; c->f[3]=RF64(ea);} // 801DFB38
  c->f[8]=c->f[2]*c->f[0]; // 801DFB3C
  {uint32_t ea=c->r[2]+0xFFFFB148u; c->f[2]=RF64(ea);} // 801DFB40
  {uint32_t ea=c->r[2]+0xFFFFB048u; c->f[0]=RF64(ea);} // 801DFB44
  c->f[11]=c->f[8]+c->f[7]; // 801DFB48
  c->f[9]=c->f[10]+c->f[11]; // 801DFB4C
  c->f[7]=c->f[9]*c->f[9]; // 801DFB50
  c->f[8]=c->f[9]-c->f[10]; // 801DFB54
  c->f[6]=c->f[6]*c->f[7]; // 801DFB58
  c->f[8]=c->f[11]-c->f[8]; // 801DFB5C
  c->f[6]=c->f[1]+c->f[6]; // 801DFB60
  c->f[1]=c->f[9]*c->f[8]; // 801DFB64
  c->f[6]=c->f[7]*c->f[6]; // 801DFB68
  c->f[1]=c->f[8]+c->f[1]; // 801DFB6C
  c->f[5]=c->f[5]+c->f[6]; // 801DFB70
  c->f[5]=c->f[7]*c->f[5]; // 801DFB74
  c->f[4]=c->f[4]+c->f[5]; // 801DFB78
  c->f[4]=c->f[7]*c->f[4]; // 801DFB7C
  c->f[3]=c->f[3]+c->f[4]; // 801DFB80
  c->f[3]=c->f[7]*c->f[3]; // 801DFB84
  c->f[4]=c->f[9]-c->f[3]; // 801DFB88
  c->f[3]=c->f[9]*c->f[4]; // 801DFB8C
  c->f[2]=c->f[4]-c->f[2]; // 801DFB90
  c->f[2]=c->f[3]/c->f[2]; // 801DFB94
  c->f[1]=c->f[2]-c->f[1]; // 801DFB98
  c->f[1]=c->f[1]-c->f[9]; // 801DFB9C
  c->f[1]=c->f[0]-c->f[1]; // 801DFBA0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 801DFBA4
  c->r[0]=R32(c->r[1]+0x00000050u); // 801DFBA8
  c->r[0]=c->r[0]+c->r[4]; // 801DFBAC
  c->r[0]=sraw(c,c->r[0],20); cr0(c,c->r[0]); // 801DFBB0
  if (crb(c,1)) { goto L_801DFBC4; } // 801DFBB4
  c->lr=0x801DFBBCu; f_801DE69C(c); // 801DFBB8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 801DFBBC
  goto L_801DFBD0; // 801DFBC0
L_801DFBC4:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 801DFBC4
  c->r[0]=c->r[0]+c->r[4]; // 801DFBC8
  W32(c->r[1]+0x00000050u,c->r[0]); // 801DFBCC
L_801DFBD0:;
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 801DFBD0
  c->f[1]=c->f[31]*c->f[0]; // 801DFBD4
L_801DFBD8:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801DFBD8
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 801DFBDC
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 801DFBE0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 801DFBE4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 801DFBE8
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 801DFBEC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 801DFBF0
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 801DFBF4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 801DFBF8
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 801DFBFC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 801DFC00
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,26,ea,0,0);} // 801DFC04
  {uint32_t ea=c->r[1]+0x00000060u; c->f[26]=RF64(ea);} // 801DFC08
  c->lr=c->r[0]; // 801DFC0C
  c->r[1]=c->r[1]+0x000000C0u; // 801DFC10
  return; // 801DFC14
}

// __ieee754_rem_pio2
void f_801DFC18(Ctx* __restrict c) {
  trace_call(0x801DFC18u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFC18
  c->r[0]=c->lr; // 801DFC1C
  c->r[4]=0u+0x3FE90000u; // 801DFC20
  W32(c->r[1]+0x00000064u,c->r[0]); // 801DFC24
  c->r[0]=c->r[4]+0x000021FBu; // 801DFC28
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801DFC2C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DFC30
  c->r[31]=R32(c->r[1]+0x00000008u); // 801DFC34
  W32(c->r[1]+0x00000058u,c->r[30]); // 801DFC38
  c->r[30]=c->r[3]|c->r[3]; // 801DFC3C
  c->r[6]=rotl(c->r[31],0)&0x7FFFFFFFu; // 801DFC40
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DFC44
  if (crb(c,1)) { goto L_801DFC60; } // 801DFC48
  {uint32_t ea=c->r[2]+0xFFFFB158u; c->f[0]=RF64(ea);} // 801DFC4C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 801DFC50
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801DFC54
  c->r[3]=0u+0x00000000u; // 801DFC58
  goto L_801DFF84; // 801DFC5C
L_801DFC60:;
  c->r[4]=0u+0x40030000u; // 801DFC60
  c->r[0]=c->r[4]+0xFFFFD97Cu; // 801DFC64
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DFC68
  if (!crb(c,0)) { goto L_801DFD28; } // 801DFC6C
  cmps(c,0,(int32_t)c->r[31],0); // 801DFC70
  if (!crb(c,1)) { goto L_801DFCD0; } // 801DFC74
  {uint32_t ea=c->r[2]+0xFFFFB160u; c->f[0]=RF64(ea);} // 801DFC78
  c->r[0]=c->r[6]+0xC0070000u; // 801DFC7C
  cmpu(c,0,c->r[0],0x000021FBu); // 801DFC80
  c->f[2]=c->f[1]-c->f[0]; // 801DFC84
  if (crb(c,2)) { goto L_801DFCA8; } // 801DFC88
  {uint32_t ea=c->r[2]+0xFFFFB168u; c->f[1]=RF64(ea);} // 801DFC8C
  c->f[0]=c->f[2]-c->f[1]; // 801DFC90
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFC94
  c->f[0]=c->f[2]-c->f[0]; // 801DFC98
  c->f[0]=c->f[0]-c->f[1]; // 801DFC9C
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801DFCA0
  goto L_801DFCC8; // 801DFCA4
L_801DFCA8:;
  {uint32_t ea=c->r[2]+0xFFFFB170u; c->f[0]=RF64(ea);} // 801DFCA8
  {uint32_t ea=c->r[2]+0xFFFFB178u; c->f[1]=RF64(ea);} // 801DFCAC
  c->f[2]=c->f[2]-c->f[0]; // 801DFCB0
  c->f[0]=c->f[2]-c->f[1]; // 801DFCB4
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFCB8
  c->f[0]=c->f[2]-c->f[0]; // 801DFCBC
  c->f[0]=c->f[0]-c->f[1]; // 801DFCC0
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801DFCC4
L_801DFCC8:;
  c->r[3]=0u+0x00000001u; // 801DFCC8
  goto L_801DFF84; // 801DFCCC
L_801DFCD0:;
  {uint32_t ea=c->r[2]+0xFFFFB160u; c->f[0]=RF64(ea);} // 801DFCD0
  c->r[0]=c->r[6]+0xC0070000u; // 801DFCD4
  cmpu(c,0,c->r[0],0x000021FBu); // 801DFCD8
  c->f[2]=c->f[0]+c->f[1]; // 801DFCDC
  if (crb(c,2)) { goto L_801DFD00; } // 801DFCE0
  {uint32_t ea=c->r[2]+0xFFFFB168u; c->f[1]=RF64(ea);} // 801DFCE4
  c->f[0]=c->f[1]+c->f[2]; // 801DFCE8
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFCEC
  c->f[0]=c->f[2]-c->f[0]; // 801DFCF0
  c->f[0]=c->f[1]+c->f[0]; // 801DFCF4
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801DFCF8
  goto L_801DFD20; // 801DFCFC
L_801DFD00:;
  {uint32_t ea=c->r[2]+0xFFFFB170u; c->f[0]=RF64(ea);} // 801DFD00
  {uint32_t ea=c->r[2]+0xFFFFB178u; c->f[1]=RF64(ea);} // 801DFD04
  c->f[2]=c->f[2]+c->f[0]; // 801DFD08
  c->f[0]=c->f[1]+c->f[2]; // 801DFD0C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFD10
  c->f[0]=c->f[2]-c->f[0]; // 801DFD14
  c->f[0]=c->f[1]+c->f[0]; // 801DFD18
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801DFD1C
L_801DFD20:;
  c->r[3]=0u+0xFFFFFFFFu; // 801DFD20
  goto L_801DFF84; // 801DFD24
L_801DFD28:;
  c->r[4]=0u+0x41390000u; // 801DFD28
  c->r[0]=c->r[4]+0x000021FBu; // 801DFD2C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DFD30
  if (crb(c,1)) { goto L_801DFE7C; } // 801DFD34
  c->f[5]=std::fabs(c->f[1]); // 801DFD38
  {uint32_t ea=c->r[2]+0xFFFFB188u; c->f[0]=RF64(ea);} // 801DFD3C
  c->r[0]=0u+0x43300000u; // 801DFD40
  {uint32_t ea=c->r[2]+0xFFFFB180u; c->f[2]=RF64(ea);} // 801DFD44
  W32(c->r[1]+0x00000038u,c->r[0]); // 801DFD48
  c->f[4]=c->f[0]*c->f[5]; // 801DFD4C
  {uint32_t ea=c->r[2]+0xFFFFB1A8u; c->f[3]=RF64(ea);} // 801DFD50
  {uint32_t ea=c->r[2]+0xFFFFB160u; c->f[1]=RF64(ea);} // 801DFD54
  {uint32_t ea=c->r[2]+0xFFFFB168u; c->f[0]=RF64(ea);} // 801DFD58
  c->f[2]=c->f[2]+c->f[4]; // 801DFD5C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801DFD60
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801DFD64
  c->r[5]=R32(c->r[1]+0x00000034u); // 801DFD68
  c->r[0]=c->r[5]^0x80000000u; // 801DFD6C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 801DFD70
  cmps(c,0,(int32_t)c->r[5],32); // 801DFD74
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 801DFD78
  c->f[6]=c->f[2]-c->f[3]; // 801DFD7C
  c->f[1]=c->f[1]*c->f[6]; // 801DFD80
  c->f[2]=c->f[0]*c->f[6]; // 801DFD84
  c->f[4]=c->f[5]-c->f[1]; // 801DFD88
  if (!crb(c,0)) { goto L_801DFDB8; } // 801DFD8C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801DFD90
  c->r[4]=0u+0x80200000u; // 801DFD94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801DFD98
  c->r[4]=c->r[4]+0xFFFFB730u; // 801DFD9C
  c->r[0]=R32(c->r[4]+c->r[0]); // 801DFDA0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DFDA4
  if (crb(c,2)) { goto L_801DFDB8; } // 801DFDA8
  c->f[0]=c->f[4]-c->f[2]; // 801DFDAC
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFDB0
  goto L_801DFE44; // 801DFDB4
L_801DFDB8:;
  c->f[0]=c->f[4]-c->f[2]; // 801DFDB8
  c->r[4]=sraw(c,c->r[6],20); // 801DFDBC
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFDC0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DFDC4
  c->r[0]=rotl(c->r[0],12)&0x000007FFu; // 801DFDC8
  c->r[0]=c->r[4]-c->r[0]; // 801DFDCC
  cmps(c,0,(int32_t)c->r[0],16); // 801DFDD0
  if (!crb(c,1)) { goto L_801DFE44; } // 801DFDD4
  {uint32_t ea=c->r[2]+0xFFFFB170u; c->f[1]=RF64(ea);} // 801DFDD8
  c->f[2]=c->f[4]; // 801DFDDC
  {uint32_t ea=c->r[2]+0xFFFFB178u; c->f[0]=RF64(ea);} // 801DFDE0
  c->f[3]=c->f[1]*c->f[6]; // 801DFDE4
  c->f[1]=c->f[0]*c->f[6]; // 801DFDE8
  c->f[4]=c->f[4]-c->f[3]; // 801DFDEC
  c->f[0]=c->f[2]-c->f[4]; // 801DFDF0
  c->f[0]=c->f[0]-c->f[3]; // 801DFDF4
  c->f[2]=c->f[1]-c->f[0]; // 801DFDF8
  c->f[0]=c->f[4]-c->f[2]; // 801DFDFC
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFE00
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DFE04
  c->r[0]=rotl(c->r[0],12)&0x000007FFu; // 801DFE08
  c->r[0]=c->r[4]-c->r[0]; // 801DFE0C
  cmps(c,0,(int32_t)c->r[0],49); // 801DFE10
  if (!crb(c,1)) { goto L_801DFE44; } // 801DFE14
  {uint32_t ea=c->r[2]+0xFFFFB190u; c->f[1]=RF64(ea);} // 801DFE18
  c->f[2]=c->f[4]; // 801DFE1C
  {uint32_t ea=c->r[2]+0xFFFFB198u; c->f[0]=RF64(ea);} // 801DFE20
  c->f[3]=c->f[1]*c->f[6]; // 801DFE24
  c->f[1]=c->f[0]*c->f[6]; // 801DFE28
  c->f[4]=c->f[4]-c->f[3]; // 801DFE2C
  c->f[0]=c->f[2]-c->f[4]; // 801DFE30
  c->f[0]=c->f[0]-c->f[3]; // 801DFE34
  c->f[2]=c->f[1]-c->f[0]; // 801DFE38
  c->f[0]=c->f[4]-c->f[2]; // 801DFE3C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFE40
L_801DFE44:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801DFE44
  cmps(c,0,(int32_t)c->r[31],0); // 801DFE48
  c->f[0]=c->f[4]-c->f[1]; // 801DFE4C
  c->f[0]=c->f[0]-c->f[2]; // 801DFE50
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801DFE54
  if (!crb(c,0)) { goto L_801DFE74; } // 801DFE58
  c->f[1]=-c->f[1]; // 801DFE5C
  c->f[0]=-c->f[0]; // 801DFE60
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 801DFE64
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801DFE68
  c->r[3]=0u-c->r[5]; // 801DFE6C
  goto L_801DFF84; // 801DFE70
L_801DFE74:;
  c->r[3]=c->r[5]|c->r[5]; // 801DFE74
  goto L_801DFF84; // 801DFE78
L_801DFE7C:;
  c->r[0]=0u+0x7FF00000u; // 801DFE7C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801DFE80
  if (crb(c,0)) { goto L_801DFE9C; } // 801DFE84
  c->f[0]=c->f[1]-c->f[1]; // 801DFE88
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 801DFE8C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801DFE90
  c->r[3]=0u+0x00000000u; // 801DFE94
  goto L_801DFF84; // 801DFE98
L_801DFE9C:;
  c->r[3]=sraw(c,c->r[6],20); // 801DFE9C
  c->r[0]=0u+0x43300000u; // 801DFEA0
  c->r[5]=c->r[3]+0xFFFFFBEAu; // 801DFEA4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801DFEA8
  c->r[3]=rotl(c->r[5],20)&0xFFF00000u; // 801DFEAC
  W32(c->r[1]+0x00000014u,c->r[4]); // 801DFEB0
  c->r[3]=c->r[6]-c->r[3]; // 801DFEB4
  {uint32_t ea=c->r[2]+0xFFFFB1A8u; c->f[4]=RF64(ea);} // 801DFEB8
  W32(c->r[1]+0x00000010u,c->r[3]); // 801DFEBC
  c->r[3]=c->r[1]+0x00000030u; // 801DFEC0
  {uint32_t ea=c->r[2]+0xFFFFB1A0u; c->f[3]=RF64(ea);} // 801DFEC4
  c->r[6]=0u+0x00000003u; // 801DFEC8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 801DFECC
  W32(c->r[1]+0x00000030u,c->r[0]); // 801DFED0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801DFED4
  {uint32_t ea=c->r[2]+0xFFFFB158u; c->f[1]=RF64(ea);} // 801DFED8
  W32(c->r[1]+0x00000048u,c->r[0]); // 801DFEDC
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 801DFEE0
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 801DFEE4
  c->r[0]=c->r[0]^0x80000000u; // 801DFEE8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DFEEC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 801DFEF0
  c->f[0]=c->f[0]-c->f[4]; // 801DFEF4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801DFEF8
  c->f[0]=c->f[2]-c->f[0]; // 801DFEFC
  c->f[2]=c->f[3]*c->f[0]; // 801DFF00
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801DFF04
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 801DFF08
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DFF0C
  c->r[0]=c->r[0]^0x80000000u; // 801DFF10
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801DFF14
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 801DFF18
  c->f[0]=c->f[0]-c->f[4]; // 801DFF1C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801DFF20
  c->f[0]=c->f[2]-c->f[0]; // 801DFF24
  c->f[0]=c->f[3]*c->f[0]; // 801DFF28
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 801DFF2C
  goto L_801DFF3C; // 801DFF30
L_801DFF34:;
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801DFF34
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801DFF38
L_801DFF3C:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801DFF3C
  fcmp(c,0,c->f[1],c->f[0]); // 801DFF40
  if (crb(c,2)) { IRQCHK(c); goto L_801DFF34; } // 801DFF44
  c->r[8]=0u+0x80200000u; // 801DFF48
  c->r[4]=c->r[30]|c->r[30]; // 801DFF4C
  c->r[3]=c->r[1]+0x00000018u; // 801DFF50
  c->r[7]=0u+0x00000002u; // 801DFF54
  c->r[8]=c->r[8]+0xFFFFB628u; // 801DFF58
  c->lr=0x801DFF60u; f_801E00AC(c); // 801DFF5C
  cmps(c,0,(int32_t)c->r[31],0); // 801DFF60
  if (!crb(c,0)) { goto L_801DFF84; } // 801DFF64
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=RF64(ea);} // 801DFF68
  c->r[3]=0u-c->r[3]; // 801DFF6C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=RF64(ea);} // 801DFF70
  c->f[1]=-c->f[1]; // 801DFF74
  c->f[0]=-c->f[0]; // 801DFF78
  {uint32_t ea=c->r[30]+0x00000000u; WF64(ea,c->f[1]);} // 801DFF7C
  {uint32_t ea=c->r[30]+0x00000008u; WF64(ea,c->f[0]);} // 801DFF80
L_801DFF84:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 801DFF84
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801DFF88
  c->r[30]=R32(c->r[1]+0x00000058u); // 801DFF8C
  c->lr=c->r[0]; // 801DFF90
  c->r[1]=c->r[1]+0x00000060u; // 801DFF94
  return; // 801DFF98
}

// __kernel_cos
void f_801DFF9C(Ctx* __restrict c) {
  trace_call(0x801DFF9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFF9C
  c->r[0]=0u+0x3E400000u; // 801DFFA0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801DFFA4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801DFFA8
  c->r[4]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801DFFAC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DFFB0
  if (!crb(c,0)) { goto L_801DFFD4; } // 801DFFB4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801DFFB8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801DFFBC
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801DFFC0
  cmps(c,0,(int32_t)c->r[0],0); // 801DFFC4
  if (!crb(c,2)) { goto L_801DFFD4; } // 801DFFC8
  {uint32_t ea=c->r[2]+0xFFFFB1B0u; c->f[1]=RF64(ea);} // 801DFFCC
  goto L_801E00A4; // 801DFFD0
L_801DFFD4:;
  c->f[8]=c->f[1]*c->f[1]; // 801DFFD4
  {uint32_t ea=c->r[2]+0xFFFFB1E0u; c->f[0]=RF64(ea);} // 801DFFD8
  c->r[3]=0u+0x3FD30000u; // 801DFFDC
  {uint32_t ea=c->r[2]+0xFFFFB1D8u; c->f[6]=RF64(ea);} // 801DFFE0
  c->r[0]=c->r[3]+0x00003333u; // 801DFFE4
  {uint32_t ea=c->r[2]+0xFFFFB1D0u; c->f[5]=RF64(ea);} // 801DFFE8
  c->f[7]=c->f[0]*c->f[8]; // 801DFFEC
  {uint32_t ea=c->r[2]+0xFFFFB1C8u; c->f[4]=RF64(ea);} // 801DFFF0
  {uint32_t ea=c->r[2]+0xFFFFB1C0u; c->f[3]=RF64(ea);} // 801DFFF4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801DFFF8
  {uint32_t ea=c->r[2]+0xFFFFB1B8u; c->f[0]=RF64(ea);} // 801DFFFC
  c->f[6]=c->f[6]+c->f[7]; // 801E0000
  c->f[6]=c->f[8]*c->f[6]; // 801E0004
  c->f[5]=c->f[5]+c->f[6]; // 801E0008
  c->f[5]=c->f[8]*c->f[5]; // 801E000C
  c->f[4]=c->f[4]+c->f[5]; // 801E0010
  c->f[4]=c->f[8]*c->f[4]; // 801E0014
  c->f[3]=c->f[3]+c->f[4]; // 801E0018
  c->f[3]=c->f[8]*c->f[3]; // 801E001C
  c->f[0]=c->f[0]+c->f[3]; // 801E0020
  c->f[3]=c->f[8]*c->f[0]; // 801E0024
  if (!crb(c,0)) { goto L_801E0050; } // 801E0028
  c->f[3]=c->f[8]*c->f[3]; // 801E002C
  {uint32_t ea=c->r[2]+0xFFFFB1E8u; c->f[4]=RF64(ea);} // 801E0030
  {uint32_t ea=c->r[2]+0xFFFFB1B0u; c->f[0]=RF64(ea);} // 801E0034
  c->f[1]=c->f[1]*c->f[2]; // 801E0038
  c->f[2]=c->f[4]*c->f[8]; // 801E003C
  c->f[1]=c->f[3]-c->f[1]; // 801E0040
  c->f[1]=c->f[2]-c->f[1]; // 801E0044
  c->f[1]=c->f[0]-c->f[1]; // 801E0048
  goto L_801E00A4; // 801E004C
L_801E0050:;
  c->r[0]=0u+0x3FE90000u; // 801E0050
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E0054
  if (!crb(c,1)) { goto L_801E0068; } // 801E0058
  {uint32_t ea=c->r[2]+0xFFFFB1F0u; c->f[0]=RF64(ea);} // 801E005C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801E0060
  goto L_801E0078; // 801E0064
L_801E0068:;
  c->r[3]=c->r[4]+0xFFE00000u; // 801E0068
  c->r[0]=0u+0x00000000u; // 801E006C
  W32(c->r[1]+0x00000010u,c->r[3]); // 801E0070
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0074
L_801E0078:;
  {uint32_t ea=c->r[2]+0xFFFFB1E8u; c->f[0]=RF64(ea);} // 801E0078
  c->f[3]=c->f[8]*c->f[3]; // 801E007C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[5]=RF64(ea);} // 801E0080
  c->f[6]=c->f[0]*c->f[8]; // 801E0084
  {uint32_t ea=c->r[2]+0xFFFFB1B0u; c->f[4]=RF64(ea);} // 801E0088
  c->f[0]=c->f[1]*c->f[2]; // 801E008C
  c->f[2]=c->f[6]-c->f[5]; // 801E0090
  c->f[1]=c->f[4]-c->f[5]; // 801E0094
  c->f[0]=c->f[3]-c->f[0]; // 801E0098
  c->f[0]=c->f[2]-c->f[0]; // 801E009C
  c->f[1]=c->f[1]-c->f[0]; // 801E00A0
L_801E00A4:;
  c->r[1]=c->r[1]+0x00000020u; // 801E00A4
  return; // 801E00A8
}

// __kernel_rem_pio2
void f_801E00AC(Ctx* __restrict c) {
  trace_call(0x801E00ACu);
  {uint32_t ea=c->r[1]+0xFFFFFC90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E00AC
  c->r[0]=c->lr; // 801E00B0
  W32(c->r[1]+0x00000374u,c->r[0]); // 801E00B4
  c->r[11]=c->r[1]+0x00000370u; // 801E00B8
  c->lr=0x801E00C0u; { {uint32_t ea=c->r[11]+0xFFFFFFB8u; WF64(ea,c->f[23]);} {uint32_t ea=c->r[11]+0xFFFFFFC0u; WF64(ea,c->f[24]);} {uint32_t ea=c->r[11]+0xFFFFFFC8u; WF64(ea,c->f[25]);} {uint32_t ea=c->r[11]+0xFFFFFFD0u; WF64(ea,c->f[26]);} {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 801E00BC
  {uint32_t ea=c->r[1]+0x000002E0u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E00C0
  c->r[9]=0u+0x2AAB0000u; // 801E00C4
  c->r[12]=0u+0x43300000u; // 801E00C8
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801E00CC
  c->r[10]=0u+0x80200000u; // 801E00D0
  c->r[9]=c->r[9]+0xFFFFAAABu; // 801E00D4
  c->r[11]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801E00D8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[9]*(int64_t)(int32_t)c->r[0])>>32); // 801E00DC
  c->r[10]=c->r[10]+0xFFFFB7B0u; // 801E00E0
  c->r[17]=c->r[4]|c->r[4]; // 801E00E4
  c->r[21]=R32(c->r[10]+c->r[11]); // 801E00E8
  W32(c->r[1]+0x00000240u,c->r[12]); // 801E00EC
  c->r[16]=c->r[3]|c->r[3]; // 801E00F0
  c->r[0]=sraw(c,c->r[0],2); // 801E00F4
  W32(c->r[1]+0x00000248u,c->r[12]); // 801E00F8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E00FC
  c->r[22]=c->r[6]+0xFFFFFFFFu; // 801E0100
  c->r[10]=c->r[0]+c->r[4]; cr0(c,c->r[10]); // 801E0104
  W32(c->r[1]+0x00000008u,c->r[7]); // 801E0108
  if (!crb(c,0)) { goto L_801E0114; } // 801E010C
  c->r[10]=0u+0x00000000u; // 801E0110
L_801E0114:;
  c->r[0]=c->r[10]+0x00000001u; // 801E0114
  c->r[9]=c->r[22]+c->r[21]; cr0(c,c->r[9]); // 801E0118
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801E011C
  c->r[7]=c->r[10]-c->r[22]; // 801E0120
  {uint32_t ea=c->r[2]+0xFFFFB230u; c->f[1]=RF64(ea);} // 801E0124
  c->r[4]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801E0128
  c->r[19]=c->r[5]-c->r[6]; // 801E012C
  c->r[0]=c->r[9]+0x00000001u; // 801E0130
  c->r[4]=c->r[8]+c->r[4]; // 801E0134
  c->r[5]=c->r[1]+0x000001A0u; // 801E0138
  c->ctr=c->r[0]; // 801E013C
  if (crb(c,0)) { goto L_801E017C; } // 801E0140
L_801E0144:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E0144
  if (!crb(c,0)) { goto L_801E0154; } // 801E0148
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[0]=RF64(ea);} // 801E014C
  goto L_801E0168; // 801E0150
L_801E0154:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E0154
  c->r[0]=c->r[0]^0x80000000u; // 801E0158
  W32(c->r[1]+0x00000244u,c->r[0]); // 801E015C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 801E0160
  c->f[0]=c->f[0]-c->f[1]; // 801E0164
L_801E0168:;
  {uint32_t ea=c->r[5]+0x00000000u; WF64(ea,c->f[0]);} // 801E0168
  c->r[5]=c->r[5]+0x00000008u; // 801E016C
  c->r[4]=c->r[4]+0x00000004u; // 801E0170
  c->r[7]=c->r[7]+0x00000001u; // 801E0174
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0144; } // 801E0178
L_801E017C:;
  c->r[0]=c->r[22]+0x00000001u; // 801E017C
  c->r[5]=c->r[1]+0x00000060u; // 801E0180
  c->r[25]=rotl(c->r[22],0)&0x80000000u; // 801E0184
  c->r[12]=c->r[1]+0x000001A0u; // 801E0188
  c->r[24]=rotl(c->r[0],0)&0x80000000u; // 801E018C
  c->r[9]=0u+0x00000000u; // 801E0190
  c->r[4]=0u+0x80000000u; // 801E0194
  goto L_801E0360; // 801E0198
L_801E019C:;
  cmps(c,1,(int32_t)c->r[22],0); // 801E019C
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[6]=RF64(ea);} // 801E01A0
  c->r[7]=0u+0x00000000u; // 801E01A4
  if (crb(c,4)) { goto L_801E0354; } // 801E01A8
  c->r[0]=c->r[22]+0x00000001u; // 801E01AC
  c->r[14]=c->r[22]+0xFFFFFFF8u; // 801E01B0
  cmps(c,0,(int32_t)c->r[0],8); // 801E01B4
  if (!crb(c,1)) { goto L_801E0310; } // 801E01B8
  c->r[6]=0u+0x00000000u; // 801E01BC
  c->r[11]=0u+0x00000000u; // 801E01C0
  if (crb(c,4)) { goto L_801E01D8; } // 801E01C4
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801E01C8
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 801E01CC
  if (crb(c,1)) { goto L_801E01D8; } // 801E01D0
  c->r[11]=0u+0x00000001u; // 801E01D4
L_801E01D8:;
  cmps(c,0,(int32_t)c->r[11],0); // 801E01D8
  if (crb(c,2)) { goto L_801E0204; } // 801E01DC
  cmps(c,0,(int32_t)c->r[25],0); // 801E01E0
  c->r[0]=0u+0x00000001u; // 801E01E4
  if (!crb(c,2)) { goto L_801E01F8; } // 801E01E8
  cmps(c,0,(int32_t)c->r[24],0); // 801E01EC
  if (crb(c,2)) { goto L_801E01F8; } // 801E01F0
  c->r[0]=0u+0x00000000u; // 801E01F4
L_801E01F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E01F8
  if (crb(c,2)) { goto L_801E0204; } // 801E01FC
  c->r[6]=0u+0x00000001u; // 801E0200
L_801E0204:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E0204
  if (crb(c,2)) { goto L_801E0310; } // 801E0208
  c->r[11]=c->r[14]+0x00000008u; // 801E020C
  c->r[6]=c->r[16]|c->r[16]; // 801E0210
  c->r[11]=rotl(c->r[11],29)&0x1FFFFFFFu; // 801E0214
  c->r[0]=c->r[22]+c->r[9]; // 801E0218
  c->ctr=c->r[11]; // 801E021C
  cmps(c,0,(int32_t)c->r[14],0); // 801E0220
  if (crb(c,0)) { goto L_801E0310; } // 801E0224
L_801E0228:;
  c->r[11]=c->r[0]-c->r[7]; // 801E0228
  c->r[14]=c->r[7]+0x00000001u; // 801E022C
  c->r[15]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801E0230
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=RF64(ea);} // 801E0234
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 801E0238
  c->r[14]=c->r[0]-c->r[14]; // 801E023C
  c->r[15]=rotl(c->r[14],3)&0xFFFFFFF8u; // 801E0240
  c->r[11]=c->r[7]+0x00000002u; // 801E0244
  c->f[2]=c->f[1]*c->f[0]; // 801E0248
  c->r[14]=c->r[0]-c->r[11]; // 801E024C
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 801E0250
  c->r[15]=rotl(c->r[14],3)&0xFFFFFFF8u; // 801E0254
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=RF64(ea);} // 801E0258
  c->r[11]=c->r[7]+0x00000003u; // 801E025C
  c->f[3]=c->f[1]*c->f[0]; // 801E0260
  c->r[14]=c->r[0]-c->r[11]; // 801E0264
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=RF64(ea);} // 801E0268
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFF8u; // 801E026C
  c->f[6]=c->f[6]+c->f[2]; // 801E0270
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 801E0274
  c->f[2]=c->f[1]*c->f[0]; // 801E0278
  c->r[11]=c->r[7]+0x00000004u; // 801E027C
  {uint32_t ea=c->r[12]+c->r[14]; c->f[0]=RF64(ea);} // 801E0280
  c->r[11]=c->r[0]-c->r[11]; // 801E0284
  c->f[6]=c->f[6]+c->f[3]; // 801E0288
  {uint32_t ea=c->r[6]+0x00000018u; c->f[1]=RF64(ea);} // 801E028C
  c->r[18]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801E0290
  c->f[1]=c->f[1]*c->f[0]; // 801E0294
  c->r[11]=c->r[7]+0x00000005u; // 801E0298
  c->r[14]=c->r[7]+0x00000006u; // 801E029C
  c->f[6]=c->f[6]+c->f[2]; // 801E02A0
  c->r[11]=c->r[0]-c->r[11]; // 801E02A4
  c->r[15]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801E02A8
  c->r[11]=c->r[7]+0x00000007u; // 801E02AC
  c->f[6]=c->f[6]+c->f[1]; // 801E02B0
  c->r[14]=c->r[0]-c->r[14]; // 801E02B4
  {uint32_t ea=c->r[6]+0x00000020u; c->f[2]=RF64(ea);} // 801E02B8
  {uint32_t ea=c->r[12]+c->r[18]; c->f[0]=RF64(ea);} // 801E02BC
  c->r[11]=c->r[0]-c->r[11]; // 801E02C0
  {uint32_t ea=c->r[6]+0x00000028u; c->f[1]=RF64(ea);} // 801E02C4
  c->f[5]=c->f[2]*c->f[0]; // 801E02C8
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 801E02CC
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFF8u; // 801E02D0
  {uint32_t ea=c->r[6]+0x00000030u; c->f[3]=RF64(ea);} // 801E02D4
  c->f[4]=c->f[1]*c->f[0]; // 801E02D8
  {uint32_t ea=c->r[12]+c->r[14]; c->f[2]=RF64(ea);} // 801E02DC
  c->f[6]=c->f[6]+c->f[5]; // 801E02E0
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801E02E4
  {uint32_t ea=c->r[6]+0x00000038u; c->f[1]=RF64(ea);} // 801E02E8
  c->f[2]=c->f[3]*c->f[2]; // 801E02EC
  {uint32_t ea=c->r[12]+c->r[11]; c->f[0]=RF64(ea);} // 801E02F0
  c->r[7]=c->r[7]+0x00000008u; // 801E02F4
  c->f[6]=c->f[6]+c->f[4]; // 801E02F8
  c->r[6]=c->r[6]+0x00000040u; // 801E02FC
  c->f[0]=c->f[1]*c->f[0]; // 801E0300
  c->f[6]=c->f[6]+c->f[2]; // 801E0304
  c->f[6]=c->f[6]+c->f[0]; // 801E0308
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0228; } // 801E030C
L_801E0310:;
  c->r[0]=c->r[22]+0x00000001u; // 801E0310
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801E0314
  c->r[0]=c->r[0]-c->r[7]; // 801E0318
  c->r[11]=c->r[22]+c->r[9]; // 801E031C
  c->r[6]=c->r[3]+c->r[6]; // 801E0320
  c->ctr=c->r[0]; // 801E0324
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[22]); // 801E0328
  if (crb(c,1)) { goto L_801E0354; } // 801E032C
L_801E0330:;
  c->r[0]=c->r[11]-c->r[7]; // 801E0330
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=RF64(ea);} // 801E0334
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E0338
  c->r[6]=c->r[6]+0x00000008u; // 801E033C
  {uint32_t ea=c->r[12]+c->r[0]; c->f[0]=RF64(ea);} // 801E0340
  c->r[7]=c->r[7]+0x00000001u; // 801E0344
  c->f[0]=c->f[1]*c->f[0]; // 801E0348
  c->f[6]=c->f[6]+c->f[0]; // 801E034C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0330; } // 801E0350
L_801E0354:;
  {uint32_t ea=c->r[5]+0x00000000u; WF64(ea,c->f[6]);} // 801E0354
  c->r[5]=c->r[5]+0x00000008u; // 801E0358
  c->r[9]=c->r[9]+0x00000001u; // 801E035C
L_801E0360:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[21]); // 801E0360
  if (!crb(c,1)) { IRQCHK(c); goto L_801E019C; } // 801E0364
  c->r[28]=addc(c,~c->r[19],0x00000018u,1); // 801E0368
  c->r[5]=0u-c->r[21]; // 801E036C
  c->r[4]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801E0370
  c->r[0]=addc(c,~c->r[19],0x00000017u,1); // 801E0374
  c->r[3]=rotl(c->r[22],3)&0xFFFFFFF8u; // 801E0378
  c->r[26]=c->r[1]+0x000001A0u; // 801E037C
  {uint32_t ea=c->r[2]+0xFFFFB200u; c->f[24]=RF64(ea);} // 801E0380
  c->r[23]=c->r[21]|c->r[21]; // 801E0384
  {uint32_t ea=c->r[2]+0xFFFFB230u; c->f[25]=RF64(ea);} // 801E0388
  c->r[14]=rotl(c->r[5],0)&0x80000000u; // 801E038C
  {uint32_t ea=c->r[2]+0xFFFFB208u; c->f[26]=RF64(ea);} // 801E0390
  c->r[27]=c->r[8]+c->r[4]; // 801E0394
  W32(c->r[1]+0x000002D0u,c->r[0]); // 801E0398
  c->r[26]=c->r[26]+c->r[3]; // 801E039C
  {uint32_t ea=c->r[2]+0xFFFFB218u; c->f[27]=RF64(ea);} // 801E03A0
  c->r[29]=c->r[1]+0x00000010u; // 801E03A4
  {uint32_t ea=c->r[2]+0xFFFFB210u; c->f[28]=RF64(ea);} // 801E03A8
  c->r[15]=c->r[1]+0x000001A0u; // 801E03AC
  {uint32_t ea=c->r[2]+0xFFFFB220u; c->f[29]=RF64(ea);} // 801E03B0
  c->r[30]=0u+0x01000000u; // 801E03B4
  {uint32_t ea=c->r[2]+0xFFFFB228u; c->f[30]=RF64(ea);} // 801E03B8
  c->r[31]=0u+0x80000000u; // 801E03BC
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[31]=RF64(ea);} // 801E03C0
L_801E03C4:;
  c->r[0]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E03C4
  c->r[3]=c->r[1]+0x00000060u; // 801E03C8
  cmps(c,0,(int32_t)c->r[23],0); // 801E03CC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 801E03D0
  c->r[4]=c->r[23]|c->r[23]; // 801E03D4
  c->r[5]=0u+0x00000000u; // 801E03D8
  c->r[6]=0u+0x00000000u; // 801E03DC
  if (!crb(c,1)) { goto L_801E06DC; } // 801E03E0
  cmps(c,0,(int32_t)c->r[23],8); // 801E03E4
  if (!crb(c,1)) { goto L_801E066C; } // 801E03E8
  cmps(c,0,(int32_t)c->r[23],-1); // 801E03EC
  c->r[0]=0u+0x00000000u; // 801E03F0
  if (!crb(c,1)) { goto L_801E03FC; } // 801E03F4
  c->r[0]=0u+0x00000001u; // 801E03F8
L_801E03FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E03FC
  if (crb(c,2)) { goto L_801E066C; } // 801E0400
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E0404
  c->r[7]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E0408
  c->r[3]=c->r[1]+0x00000060u; // 801E040C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E0410
  c->r[3]=c->r[3]+c->r[7]; // 801E0414
  c->ctr=c->r[0]; // 801E0418
  cmps(c,0,(int32_t)c->r[23],8); // 801E041C
  if (!crb(c,1)) { goto L_801E066C; } // 801E0420
L_801E0424:;
  c->f[0]=c->f[24]*c->f[1]; // 801E0424
  c->r[0]=c->r[5]+0x00000001u; // 801E0428
  c->r[9]=c->r[5]+0x00000002u; // 801E042C
  c->r[8]=c->r[5]+0x00000003u; // 801E0430
  c->r[7]=c->r[5]+0x00000004u; // 801E0434
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[4]=RF64(ea);} // 801E0438
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E043C
  {uint32_t ea=c->r[3]+0xFFFFFFF0u; c->f[3]=RF64(ea);} // 801E0440
  {uint32_t ea=c->r[3]+0xFFFFFFE8u; c->f[2]=RF64(ea);} // 801E0444
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E0448
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[0]);} // 801E044C
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 801E0450
  c->r[10]=R32(c->r[1]+0x00000254u); // 801E0454
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801E0458
  {uint32_t ea=c->r[3]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 801E045C
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801E0460
  c->r[10]=c->r[10]^0x80000000u; // 801E0464
  W32(c->r[1]+0x0000024Cu,c->r[10]); // 801E0468
  {uint32_t ea=c->r[1]+0x00000248u; c->f[5]=RF64(ea);} // 801E046C
  c->f[5]=c->f[5]-c->f[25]; // 801E0470
  c->f[6]=c->f[5]+c->f[4]; // 801E0474
  c->f[5]=c->f[26]*c->f[5]; // 801E0478
  c->f[4]=c->f[24]*c->f[6]; // 801E047C
  c->f[5]=c->f[1]-c->f[5]; // 801E0480
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 801E0484
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 801E0488
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[1]);} // 801E048C
  c->r[10]=R32(c->r[1]+0x00000264u); // 801E0490
  {uint32_t ea=c->r[1]+0x00000258u; WF64(ea,c->f[4]);} // 801E0494
  c->r[10]=c->r[10]^0x80000000u; // 801E0498
  W32(c->r[1]+0x00000244u,c->r[10]); // 801E049C
  c->r[10]=R32(c->r[1]+0x0000025Cu); // 801E04A0
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 801E04A4
  W32(c->r[29]+c->r[6],c->r[10]); // 801E04A8
  c->f[1]=c->f[1]-c->f[25]; // 801E04AC
  c->f[4]=c->f[1]+c->f[3]; // 801E04B0
  c->f[3]=c->f[26]*c->f[1]; // 801E04B4
  c->f[1]=c->f[24]*c->f[4]; // 801E04B8
  c->f[3]=c->f[6]-c->f[3]; // 801E04BC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E04C0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801E04C4
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[1]);} // 801E04C8
  c->r[10]=R32(c->r[1]+0x00000274u); // 801E04CC
  {uint32_t ea=c->r[1]+0x00000268u; WF64(ea,c->f[3]);} // 801E04D0
  c->r[10]=c->r[10]^0x80000000u; // 801E04D4
  W32(c->r[1]+0x0000024Cu,c->r[10]); // 801E04D8
  c->r[10]=R32(c->r[1]+0x0000026Cu); // 801E04DC
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=RF64(ea);} // 801E04E0
  W32(c->r[29]+c->r[0],c->r[10]); // 801E04E4
  c->f[1]=c->f[1]-c->f[25]; // 801E04E8
  c->f[3]=c->f[1]+c->f[2]; // 801E04EC
  c->f[2]=c->f[26]*c->f[1]; // 801E04F0
  c->f[1]=c->f[24]*c->f[3]; // 801E04F4
  c->f[2]=c->f[4]-c->f[2]; // 801E04F8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E04FC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801E0500
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[1]);} // 801E0504
  c->r[0]=R32(c->r[1]+0x00000284u); // 801E0508
  {uint32_t ea=c->r[1]+0x00000278u; WF64(ea,c->f[2]);} // 801E050C
  c->r[0]=c->r[0]^0x80000000u; // 801E0510
  W32(c->r[1]+0x00000244u,c->r[0]); // 801E0514
  c->r[0]=R32(c->r[1]+0x0000027Cu); // 801E0518
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 801E051C
  W32(c->r[29]+c->r[9],c->r[0]); // 801E0520
  c->f[1]=c->f[1]-c->f[25]; // 801E0524
  c->f[2]=c->f[1]+c->f[0]; // 801E0528
  c->f[1]=c->f[26]*c->f[1]; // 801E052C
  c->f[0]=c->f[24]*c->f[2]; // 801E0530
  c->f[1]=c->f[3]-c->f[1]; // 801E0534
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E0538
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E053C
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[0]);} // 801E0540
  c->r[0]=R32(c->r[1]+0x00000294u); // 801E0544
  {uint32_t ea=c->r[1]+0x00000288u; WF64(ea,c->f[1]);} // 801E0548
  c->r[0]=c->r[0]^0x80000000u; // 801E054C
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 801E0550
  c->r[0]=R32(c->r[1]+0x0000028Cu); // 801E0554
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 801E0558
  W32(c->r[29]+c->r[8],c->r[0]); // 801E055C
  c->f[1]=c->f[0]-c->f[25]; // 801E0560
  c->f[0]=c->f[26]*c->f[1]; // 801E0564
  c->f[0]=c->f[2]-c->f[0]; // 801E0568
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E056C
  {uint32_t ea=c->r[1]+0x00000298u; WF64(ea,c->f[0]);} // 801E0570
  c->r[0]=R32(c->r[1]+0x0000029Cu); // 801E0574
  W32(c->r[29]+c->r[7],c->r[0]); // 801E0578
  {uint32_t ea=c->r[3]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 801E057C
  c->r[8]=c->r[5]+0x00000005u; // 801E0580
  c->r[0]=c->r[5]+0x00000007u; // 801E0584
  c->r[7]=c->r[5]+0x00000006u; // 801E0588
  c->f[5]=c->f[1]+c->f[0]; // 801E058C
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFFCu; // 801E0590
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801E0594
  {uint32_t ea=c->r[3]+0xFFFFFFD0u; c->f[2]=RF64(ea);} // 801E0598
  {uint32_t ea=c->r[3]+0xFFFFFFC8u; c->f[1]=RF64(ea);} // 801E059C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E05A0
  c->f[3]=c->f[24]*c->f[5]; // 801E05A4
  {uint32_t ea=c->r[3]+0xFFFFFFC0u; c->f[0]=RF64(ea); c->r[3]=ea;} // 801E05A8
  c->r[5]=c->r[5]+0x00000008u; // 801E05AC
  c->r[6]=c->r[6]+0x00000020u; // 801E05B0
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 801E05B4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801E05B8
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[3]);} // 801E05BC
  c->r[7]=R32(c->r[1]+0x000002A4u); // 801E05C0
  c->r[7]=c->r[7]^0x80000000u; // 801E05C4
  W32(c->r[1]+0x00000244u,c->r[7]); // 801E05C8
  {uint32_t ea=c->r[1]+0x00000240u; c->f[3]=RF64(ea);} // 801E05CC
  c->f[3]=c->f[3]-c->f[25]; // 801E05D0
  c->f[4]=c->f[3]+c->f[2]; // 801E05D4
  c->f[3]=c->f[26]*c->f[3]; // 801E05D8
  c->f[2]=c->f[24]*c->f[4]; // 801E05DC
  c->f[3]=c->f[5]-c->f[3]; // 801E05E0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801E05E4
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 801E05E8
  {uint32_t ea=c->r[1]+0x000002B0u; WF64(ea,c->f[2]);} // 801E05EC
  c->r[7]=R32(c->r[1]+0x000002B4u); // 801E05F0
  {uint32_t ea=c->r[1]+0x000002A8u; WF64(ea,c->f[3]);} // 801E05F4
  c->r[7]=c->r[7]^0x80000000u; // 801E05F8
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 801E05FC
  c->r[7]=R32(c->r[1]+0x000002ACu); // 801E0600
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 801E0604
  W32(c->r[29]+c->r[9],c->r[7]); // 801E0608
  c->f[2]=c->f[2]-c->f[25]; // 801E060C
  c->f[3]=c->f[2]+c->f[1]; // 801E0610
  c->f[2]=c->f[26]*c->f[2]; // 801E0614
  c->f[1]=c->f[24]*c->f[3]; // 801E0618
  c->f[2]=c->f[4]-c->f[2]; // 801E061C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E0620
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801E0624
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[1]);} // 801E0628
  c->r[7]=R32(c->r[1]+0x000002C4u); // 801E062C
  {uint32_t ea=c->r[1]+0x000002B8u; WF64(ea,c->f[2]);} // 801E0630
  c->r[7]=c->r[7]^0x80000000u; // 801E0634
  W32(c->r[1]+0x00000244u,c->r[7]); // 801E0638
  c->r[7]=R32(c->r[1]+0x000002BCu); // 801E063C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 801E0640
  W32(c->r[29]+c->r[8],c->r[7]); // 801E0644
  c->f[1]=c->f[1]-c->f[25]; // 801E0648
  c->f[2]=c->f[26]*c->f[1]; // 801E064C
  c->f[1]=c->f[1]+c->f[0]; // 801E0650
  c->f[0]=c->f[3]-c->f[2]; // 801E0654
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E0658
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 801E065C
  c->r[7]=R32(c->r[1]+0x000002CCu); // 801E0660
  W32(c->r[29]+c->r[0],c->r[7]); // 801E0664
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0424; } // 801E0668
L_801E066C:;
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E066C
  c->r[5]=c->r[1]+0x00000010u; // 801E0670
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801E0674
  c->r[6]=c->r[1]+0x00000060u; // 801E0678
  c->r[5]=c->r[5]+c->r[3]; // 801E067C
  c->r[6]=c->r[6]+c->r[0]; // 801E0680
  c->ctr=c->r[4]; // 801E0684
  cmps(c,0,(int32_t)c->r[4],0); // 801E0688
  if (!crb(c,1)) { goto L_801E06DC; } // 801E068C
L_801E0690:;
  c->f[2]=c->f[24]*c->f[1]; // 801E0690
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->f[0]=RF64(ea); c->r[6]=ea;} // 801E0694
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801E0698
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801E069C
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[2]);} // 801E06A0
  c->r[0]=R32(c->r[1]+0x000002CCu); // 801E06A4
  c->r[0]=c->r[0]^0x80000000u; // 801E06A8
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 801E06AC
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 801E06B0
  c->f[3]=c->f[2]-c->f[25]; // 801E06B4
  c->f[2]=c->f[26]*c->f[3]; // 801E06B8
  c->f[2]=c->f[1]-c->f[2]; // 801E06BC
  c->f[1]=c->f[3]+c->f[0]; // 801E06C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801E06C4
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[0]);} // 801E06C8
  c->r[0]=R32(c->r[1]+0x000002C4u); // 801E06CC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801E06D0
  c->r[5]=c->r[5]+0x00000004u; // 801E06D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0690; } // 801E06D8
L_801E06DC:;
  c->r[3]=c->r[19]|c->r[19]; // 801E06DC
  c->lr=0x801E06E4u; f_801DE69C(c); // 801E06E0
  c->f[23]=c->f[1]; // 801E06E4
  c->f[1]=c->f[27]*c->f[1]; // 801E06E8
  c->lr=0x801E06F0u; f_801E1D98(c); // 801E06EC
  c->f[0]=c->f[28]*c->f[1]; // 801E06F0
  cmps(c,0,(int32_t)c->r[19],0); // 801E06F4
  c->r[18]=0u+0x00000000u; // 801E06F8
  c->f[23]=c->f[23]-c->f[0]; // 801E06FC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[23],true)); // 801E0700
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 801E0704
  c->r[20]=R32(c->r[1]+0x000002CCu); // 801E0708
  c->r[0]=c->r[20]^0x80000000u; // 801E070C
  W32(c->r[1]+0x00000244u,c->r[0]); // 801E0710
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 801E0714
  c->f[0]=c->f[0]-c->f[25]; // 801E0718
  c->f[23]=c->f[23]-c->f[0]; // 801E071C
  if (!crb(c,1)) { goto L_801E0750; } // 801E0720
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E0724
  c->r[4]=c->r[29]+c->r[0]; // 801E0728
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 801E072C
  c->r[5]=sraw(c,c->r[3],(c->r[28])&63); // 801E0730
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[5]<<((c->r[28])&31)); // 801E0734
  c->r[3]=c->r[3]-c->r[0]; // 801E0738
  c->r[0]=R32(c->r[1]+0x000002D0u); // 801E073C
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 801E0740
  c->r[20]=c->r[20]+c->r[5]; // 801E0744
  c->r[18]=sraw(c,c->r[3],(c->r[0])&63); // 801E0748
  goto L_801E0778; // 801E074C
L_801E0750:;
  if (!crb(c,2)) { goto L_801E0768; } // 801E0750
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E0754
  c->r[3]=c->r[29]+c->r[0]; // 801E0758
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 801E075C
  c->r[18]=sraw(c,c->r[0],23); // 801E0760
  goto L_801E0778; // 801E0764
L_801E0768:;
  fcmp(c,0,c->f[23],c->f[29]); // 801E0768
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801E076C
  if (!crb(c,2)) { goto L_801E0778; } // 801E0770
  c->r[18]=0u+0x00000002u; // 801E0774
L_801E0778:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E0778
  if (!crb(c,1)) { goto L_801E0834; } // 801E077C
  c->r[5]=c->r[1]+0x00000010u; // 801E0780
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 801E0784
  c->r[0]=0u+0x00000000u; // 801E0788
  c->ctr=c->r[23]; // 801E078C
  cmps(c,0,(int32_t)c->r[23],0); // 801E0790
  c->r[20]=c->r[20]+0x00000001u; // 801E0794
  if (!crb(c,1)) { goto L_801E07D0; } // 801E0798
L_801E079C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E079C
  c->r[3]=R32(c->r[5]+0x00000000u); // 801E07A0
  if (!crb(c,2)) { goto L_801E07C0; } // 801E07A4
  cmps(c,0,(int32_t)c->r[3],0); // 801E07A8
  if (crb(c,2)) { goto L_801E07C8; } // 801E07AC
  c->r[0]=c->r[30]-c->r[3]; // 801E07B0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801E07B4
  c->r[0]=0u+0x00000001u; // 801E07B8
  goto L_801E07C8; // 801E07BC
L_801E07C0:;
  c->r[3]=c->r[4]-c->r[3]; // 801E07C0
  W32(c->r[5]+0x00000000u,c->r[3]); // 801E07C4
L_801E07C8:;
  c->r[5]=c->r[5]+0x00000004u; // 801E07C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E079C; } // 801E07CC
L_801E07D0:;
  cmps(c,0,(int32_t)c->r[19],1); // 801E07D0
  if (crb(c,2)) { goto L_801E07E4; } // 801E07D4
  cmps(c,0,(int32_t)c->r[19],2); // 801E07D8
  if (crb(c,2)) { goto L_801E07FC; } // 801E07DC
  goto L_801E0810; // 801E07E0
L_801E07E4:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E07E4
  c->r[4]=c->r[29]+c->r[3]; // 801E07E8
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 801E07EC
  c->r[3]=rotl(c->r[3],0)&0x007FFFFFu; // 801E07F0
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 801E07F4
  goto L_801E0810; // 801E07F8
L_801E07FC:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E07FC
  c->r[4]=c->r[29]+c->r[3]; // 801E0800
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 801E0804
  c->r[3]=rotl(c->r[3],0)&0x003FFFFFu; // 801E0808
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 801E080C
L_801E0810:;
  cmps(c,0,(int32_t)c->r[18],2); // 801E0810
  if (!crb(c,2)) { goto L_801E0834; } // 801E0814
  cmps(c,0,(int32_t)c->r[0],0); // 801E0818
  c->f[23]=c->f[30]-c->f[23]; // 801E081C
  if (crb(c,2)) { goto L_801E0834; } // 801E0820
  c->f[1]=c->f[30]; // 801E0824
  c->r[3]=c->r[19]|c->r[19]; // 801E0828
  c->lr=0x801E0830u; f_801DE69C(c); // 801E082C
  c->f[23]=c->f[23]-c->f[1]; // 801E0830
L_801E0834:;
  fcmp(c,0,c->f[31],c->f[23]); // 801E0834
  if (!crb(c,2)) { goto L_801E0C0C; } // 801E0838
  c->r[10]=c->r[23]+0xFFFFFFFFu; // 801E083C
  c->r[9]=0u+0x00000000u; // 801E0840
  cmps(c,1,(int32_t)c->r[10],(int32_t)c->r[21]); // 801E0844
  if (crb(c,4)) { goto L_801E09CC; } // 801E0848
  c->r[7]=c->r[10]-c->r[21]; // 801E084C
  c->r[0]=c->r[21]+0x00000008u; // 801E0850
  c->r[8]=c->r[7]+0x00000001u; // 801E0854
  cmps(c,0,(int32_t)c->r[8],8); // 801E0858
  if (!crb(c,1)) { goto L_801E0998; } // 801E085C
  c->r[3]=0u+0x00000000u; // 801E0860
  c->r[4]=0u+0x00000000u; // 801E0864
  c->r[5]=0u+0x00000000u; // 801E0868
  c->r[6]=0u+0x00000000u; // 801E086C
  c->r[12]=0u+0x00000000u; // 801E0870
  if (crb(c,4)) { goto L_801E0888; } // 801E0874
  c->r[11]=c->r[31]+0x00000001u; // 801E0878
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[11]); // 801E087C
  if (crb(c,0)) { goto L_801E0888; } // 801E0880
  c->r[12]=0u+0x00000001u; // 801E0884
L_801E0888:;
  cmps(c,0,(int32_t)c->r[12],0); // 801E0888
  if (crb(c,2)) { goto L_801E08A4; } // 801E088C
  c->r[12]=c->r[23]+0xFFFFFFFFu; // 801E0890
  c->r[11]=c->r[31]+0x00000001u; // 801E0894
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 801E0898
  if (crb(c,0)) { goto L_801E08A4; } // 801E089C
  c->r[6]=0u+0x00000001u; // 801E08A0
L_801E08A4:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E08A4
  if (crb(c,2)) { goto L_801E08BC; } // 801E08A8
  c->r[6]=c->r[21]+0x80000000u; // 801E08AC
  cmpu(c,0,c->r[6],0x00000000u); // 801E08B0
  if (crb(c,2)) { goto L_801E08BC; } // 801E08B4
  c->r[5]=0u+0x00000001u; // 801E08B8
L_801E08BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E08BC
  if (crb(c,2)) { goto L_801E08F4; } // 801E08C0
  c->r[5]=c->r[23]+0xFFFFFFFFu; // 801E08C4
  c->r[6]=0u+0x00000001u; // 801E08C8
  c->r[11]=rotl(c->r[5],0)&0x80000000u; // 801E08CC
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[14]); // 801E08D0
  if (!crb(c,2)) { goto L_801E08E8; } // 801E08D4
  c->r[5]=rotl(c->r[7],0)&0x80000000u; // 801E08D8
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[5]); // 801E08DC
  if (crb(c,2)) { goto L_801E08E8; } // 801E08E0
  c->r[6]=0u+0x00000000u; // 801E08E4
L_801E08E8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E08E8
  if (crb(c,2)) { goto L_801E08F4; } // 801E08EC
  c->r[4]=0u+0x00000001u; // 801E08F0
L_801E08F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E08F4
  if (crb(c,2)) { goto L_801E0920; } // 801E08F8
  c->r[4]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[4]); // 801E08FC
  c->r[5]=0u+0x00000001u; // 801E0900
  if (!crb(c,2)) { goto L_801E0914; } // 801E0904
  c->r[4]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[4]); // 801E0908
  if (crb(c,2)) { goto L_801E0914; } // 801E090C
  c->r[5]=0u+0x00000000u; // 801E0910
L_801E0914:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E0914
  if (crb(c,2)) { goto L_801E0920; } // 801E0918
  c->r[3]=0u+0x00000001u; // 801E091C
L_801E0920:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E0920
  if (crb(c,2)) { goto L_801E0998; } // 801E0924
  c->r[4]=c->r[10]+0x00000008u; // 801E0928
  c->r[5]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801E092C
  c->r[4]=c->r[4]-c->r[0]; // 801E0930
  c->r[3]=c->r[1]+0x00000010u; // 801E0934
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801E0938
  c->r[3]=c->r[3]+c->r[5]; // 801E093C
  c->ctr=c->r[4]; // 801E0940
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 801E0944
  if (crb(c,0)) { goto L_801E0998; } // 801E0948
L_801E094C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801E094C
  c->r[10]=c->r[10]+0xFFFFFFF8u; // 801E0950
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 801E0954
  c->r[9]=c->r[9]|c->r[4]; // 801E0958
  c->r[4]=R32(c->r[3]+0xFFFFFFF8u); // 801E095C
  c->r[9]=c->r[9]|c->r[0]; // 801E0960
  c->r[0]=R32(c->r[3]+0xFFFFFFF4u); // 801E0964
  c->r[9]=c->r[9]|c->r[4]; // 801E0968
  c->r[4]=R32(c->r[3]+0xFFFFFFF0u); // 801E096C
  c->r[9]=c->r[9]|c->r[0]; // 801E0970
  c->r[0]=R32(c->r[3]+0xFFFFFFECu); // 801E0974
  c->r[9]=c->r[9]|c->r[4]; // 801E0978
  c->r[4]=R32(c->r[3]+0xFFFFFFE8u); // 801E097C
  c->r[9]=c->r[9]|c->r[0]; // 801E0980
  c->r[0]=R32(c->r[3]+0xFFFFFFE4u); // 801E0984
  c->r[9]=c->r[9]|c->r[4]; // 801E0988
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 801E098C
  c->r[9]=c->r[9]|c->r[0]; // 801E0990
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E094C; } // 801E0994
L_801E0998:;
  c->r[0]=c->r[10]+0x00000001u; // 801E0998
  c->r[3]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801E099C
  c->r[4]=c->r[1]+0x00000010u; // 801E09A0
  c->r[0]=c->r[0]-c->r[21]; // 801E09A4
  c->r[4]=c->r[4]+c->r[3]; // 801E09A8
  c->ctr=c->r[0]; // 801E09AC
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[21]); // 801E09B0
  if (crb(c,0)) { goto L_801E09CC; } // 801E09B4
L_801E09B8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E09B8
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 801E09BC
  c->r[10]=c->r[10]+0xFFFFFFFFu; // 801E09C0
  c->r[9]=c->r[9]|c->r[0]; // 801E09C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E09B8; } // 801E09C8
L_801E09CC:;
  cmps(c,0,(int32_t)c->r[9],0); // 801E09CC
  if (!crb(c,2)) { goto L_801E0C0C; } // 801E09D0
  c->r[18]=0u+0x00000001u; // 801E09D4
  goto L_801E09E0; // 801E09D8
L_801E09DC:;
  c->r[18]=c->r[18]+0x00000001u; // 801E09DC
L_801E09E0:;
  c->r[0]=c->r[21]-c->r[18]; // 801E09E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E09E4
  c->r[0]=R32(c->r[29]+c->r[0]); // 801E09E8
  cmps(c,0,(int32_t)c->r[0],0); // 801E09EC
  if (crb(c,2)) { IRQCHK(c); goto L_801E09DC; } // 801E09F0
  c->r[12]=c->r[23]+0x00000001u; // 801E09F4
  c->r[7]=c->r[1]+0x00000060u; // 801E09F8
  c->r[3]=rotl(c->r[12],3)&0xFFFFFFF8u; // 801E09FC
  c->r[8]=c->r[23]+c->r[18]; // 801E0A00
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 801E0A04
  c->r[5]=c->r[27]+c->r[0]; // 801E0A08
  c->r[6]=c->r[26]+c->r[3]; // 801E0A0C
  c->r[7]=c->r[7]+c->r[3]; // 801E0A10
  goto L_801E0BFC; // 801E0A14
L_801E0A18:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E0A18
  cmps(c,1,(int32_t)c->r[22],0); // 801E0A1C
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[0]=RF64(ea);} // 801E0A20
  c->r[11]=0u+0x00000000u; // 801E0A24
  c->r[0]=c->r[0]^0x80000000u; // 801E0A28
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 801E0A2C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=RF64(ea);} // 801E0A30
  c->f[1]=c->f[1]-c->f[25]; // 801E0A34
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[1]);} // 801E0A38
  if (crb(c,4)) { goto L_801E0BE8; } // 801E0A3C
  c->r[0]=c->r[22]+0x00000001u; // 801E0A40
  c->r[3]=c->r[22]+0xFFFFFFF8u; // 801E0A44
  cmps(c,0,(int32_t)c->r[0],8); // 801E0A48
  if (!crb(c,1)) { goto L_801E0BA4; } // 801E0A4C
  c->r[4]=0u+0x00000000u; // 801E0A50
  c->r[9]=0u+0x00000000u; // 801E0A54
  if (crb(c,4)) { goto L_801E0A6C; } // 801E0A58
  c->r[0]=c->r[31]+0xFFFFFFFEu; // 801E0A5C
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 801E0A60
  if (crb(c,1)) { goto L_801E0A6C; } // 801E0A64
  c->r[9]=0u+0x00000001u; // 801E0A68
L_801E0A6C:;
  cmps(c,0,(int32_t)c->r[9],0); // 801E0A6C
  if (crb(c,2)) { goto L_801E0A98; } // 801E0A70
  cmps(c,0,(int32_t)c->r[25],0); // 801E0A74
  c->r[0]=0u+0x00000001u; // 801E0A78
  if (!crb(c,2)) { goto L_801E0A8C; } // 801E0A7C
  cmps(c,0,(int32_t)c->r[24],0); // 801E0A80
  if (crb(c,2)) { goto L_801E0A8C; } // 801E0A84
  c->r[0]=0u+0x00000000u; // 801E0A88
L_801E0A8C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E0A8C
  if (crb(c,2)) { goto L_801E0A98; } // 801E0A90
  c->r[4]=0u+0x00000001u; // 801E0A94
L_801E0A98:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E0A98
  if (crb(c,2)) { goto L_801E0BA4; } // 801E0A9C
  c->r[0]=c->r[3]+0x00000008u; // 801E0AA0
  c->r[9]=c->r[16]|c->r[16]; // 801E0AA4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E0AA8
  c->r[10]=c->r[22]+c->r[12]; // 801E0AAC
  c->ctr=c->r[0]; // 801E0AB0
  cmps(c,0,(int32_t)c->r[3],0); // 801E0AB4
  if (crb(c,0)) { goto L_801E0BA4; } // 801E0AB8
L_801E0ABC:;
  c->r[0]=c->r[10]-c->r[11]; // 801E0ABC
  c->r[4]=c->r[11]+0x00000001u; // 801E0AC0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E0AC4
  c->r[3]=c->r[11]+0x00000002u; // 801E0AC8
  {uint32_t ea=c->r[9]+0x00000000u; c->f[2]=RF64(ea);} // 801E0ACC
  c->r[3]=c->r[10]-c->r[3]; // 801E0AD0
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 801E0AD4
  c->r[4]=c->r[10]-c->r[4]; // 801E0AD8
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801E0ADC
  c->r[20]=c->r[11]+0x00000007u; // 801E0AE0
  c->f[3]=c->f[2]*c->f[1]; // 801E0AE4
  {uint32_t ea=c->r[9]+0x00000008u; c->f[2]=RF64(ea);} // 801E0AE8
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 801E0AEC
  c->r[4]=c->r[11]+0x00000003u; // 801E0AF0
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E0AF4
  c->r[20]=c->r[10]-c->r[20]; // 801E0AF8
  c->f[4]=c->f[2]*c->f[1]; // 801E0AFC
  c->r[0]=c->r[10]-c->r[4]; // 801E0B00
  {uint32_t ea=c->r[15]+c->r[3]; c->f[1]=RF64(ea);} // 801E0B04
  c->r[4]=c->r[11]+0x00000004u; // 801E0B08
  c->f[0]=c->f[0]+c->f[3]; // 801E0B0C
  {uint32_t ea=c->r[9]+0x00000010u; c->f[2]=RF64(ea);} // 801E0B10
  c->f[3]=c->f[2]*c->f[1]; // 801E0B14
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E0B18
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 801E0B1C
  c->r[4]=c->r[10]-c->r[4]; // 801E0B20
  c->f[0]=c->f[0]+c->f[4]; // 801E0B24
  {uint32_t ea=c->r[9]+0x00000018u; c->f[2]=RF64(ea);} // 801E0B28
  c->r[3]=c->r[11]+0x00000005u; // 801E0B2C
  c->r[0]=c->r[11]+0x00000006u; // 801E0B30
  c->f[0]=c->f[0]+c->f[3]; // 801E0B34
  c->r[3]=c->r[10]-c->r[3]; // 801E0B38
  c->f[2]=c->f[2]*c->f[1]; // 801E0B3C
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801E0B40
  c->r[0]=c->r[10]-c->r[0]; // 801E0B44
  {uint32_t ea=c->r[9]+0x00000020u; c->f[3]=RF64(ea);} // 801E0B48
  {uint32_t ea=c->r[15]+c->r[4]; c->f[1]=RF64(ea);} // 801E0B4C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E0B50
  c->f[6]=c->f[3]*c->f[1]; // 801E0B54
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E0B58
  {uint32_t ea=c->r[15]+c->r[3]; c->f[1]=RF64(ea);} // 801E0B5C
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFF8u; // 801E0B60
  c->f[0]=c->f[0]+c->f[2]; // 801E0B64
  {uint32_t ea=c->r[9]+0x00000028u; c->f[2]=RF64(ea);} // 801E0B68
  c->f[5]=c->f[2]*c->f[1]; // 801E0B6C
  {uint32_t ea=c->r[9]+0x00000030u; c->f[4]=RF64(ea);} // 801E0B70
  {uint32_t ea=c->r[15]+c->r[0]; c->f[3]=RF64(ea);} // 801E0B74
  c->r[11]=c->r[11]+0x00000008u; // 801E0B78
  c->f[0]=c->f[0]+c->f[6]; // 801E0B7C
  {uint32_t ea=c->r[9]+0x00000038u; c->f[2]=RF64(ea);} // 801E0B80
  {uint32_t ea=c->r[15]+c->r[20]; c->f[1]=RF64(ea);} // 801E0B84
  c->f[3]=c->f[4]*c->f[3]; // 801E0B88
  c->r[9]=c->r[9]+0x00000040u; // 801E0B8C
  c->f[0]=c->f[0]+c->f[5]; // 801E0B90
  c->f[1]=c->f[2]*c->f[1]; // 801E0B94
  c->f[0]=c->f[0]+c->f[3]; // 801E0B98
  c->f[0]=c->f[0]+c->f[1]; // 801E0B9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0ABC; } // 801E0BA0
L_801E0BA4:;
  c->r[4]=c->r[22]+0x00000001u; // 801E0BA4
  c->r[3]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801E0BA8
  c->r[4]=c->r[4]-c->r[11]; // 801E0BAC
  c->r[0]=c->r[22]+c->r[12]; // 801E0BB0
  c->r[3]=c->r[16]+c->r[3]; // 801E0BB4
  c->ctr=c->r[4]; // 801E0BB8
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[22]); // 801E0BBC
  if (crb(c,1)) { goto L_801E0BE8; } // 801E0BC0
L_801E0BC4:;
  c->r[4]=c->r[0]-c->r[11]; // 801E0BC4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=RF64(ea);} // 801E0BC8
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801E0BCC
  c->r[3]=c->r[3]+0x00000008u; // 801E0BD0
  {uint32_t ea=c->r[15]+c->r[4]; c->f[1]=RF64(ea);} // 801E0BD4
  c->r[11]=c->r[11]+0x00000001u; // 801E0BD8
  c->f[1]=c->f[2]*c->f[1]; // 801E0BDC
  c->f[0]=c->f[0]+c->f[1]; // 801E0BE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0BC4; } // 801E0BE4
L_801E0BE8:;
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[0]);} // 801E0BE8
  c->r[5]=c->r[5]+0x00000004u; // 801E0BEC
  c->r[6]=c->r[6]+0x00000008u; // 801E0BF0
  c->r[7]=c->r[7]+0x00000008u; // 801E0BF4
  c->r[12]=c->r[12]+0x00000001u; // 801E0BF8
L_801E0BFC:;
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[8]); // 801E0BFC
  if (!crb(c,1)) { IRQCHK(c); goto L_801E0A18; } // 801E0C00
  c->r[23]=c->r[23]+c->r[18]; // 801E0C04
  IRQCHK(c); goto L_801E03C4; // 801E0C08
L_801E0C0C:;
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[0]=RF64(ea);} // 801E0C0C
  fcmp(c,0,c->f[0],c->f[23]); // 801E0C10
  if (!crb(c,2)) { goto L_801E0C4C; } // 801E0C14
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 801E0C18
  c->r[3]=c->r[1]+0x00000010u; // 801E0C1C
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E0C20
  c->r[19]=c->r[19]+0xFFFFFFE8u; // 801E0C24
  c->r[3]=c->r[3]+c->r[0]; // 801E0C28
  goto L_801E0C3C; // 801E0C2C
L_801E0C30:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 801E0C30
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 801E0C34
  c->r[19]=c->r[19]+0xFFFFFFE8u; // 801E0C38
L_801E0C3C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E0C3C
  cmps(c,0,(int32_t)c->r[0],0); // 801E0C40
  if (crb(c,2)) { IRQCHK(c); goto L_801E0C30; } // 801E0C44
  goto L_801E0CE8; // 801E0C48
L_801E0C4C:;
  c->f[1]=c->f[23]; // 801E0C4C
  c->r[3]=0u-c->r[19]; // 801E0C50
  c->lr=0x801E0C58u; f_801DE69C(c); // 801E0C54
  {uint32_t ea=c->r[2]+0xFFFFB208u; c->f[3]=RF64(ea);} // 801E0C58
  fcmp(c,0,c->f[1],c->f[3]); // 801E0C5C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801E0C60
  if (!crb(c,2)) { goto L_801E0CD0; } // 801E0C64
  {uint32_t ea=c->r[2]+0xFFFFB200u; c->f[0]=RF64(ea);} // 801E0C68
  c->r[5]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E0C6C
  c->r[23]=c->r[23]+0x00000001u; // 801E0C70
  {uint32_t ea=c->r[2]+0xFFFFB230u; c->f[2]=RF64(ea);} // 801E0C74
  c->f[0]=c->f[0]*c->f[1]; // 801E0C78
  c->r[4]=c->r[1]+0x00000010u; // 801E0C7C
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E0C80
  c->r[19]=c->r[19]+0x00000018u; // 801E0C84
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E0C88
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 801E0C8C
  c->r[3]=R32(c->r[1]+0x000002CCu); // 801E0C90
  c->r[3]=c->r[3]^0x80000000u; // 801E0C94
  W32(c->r[1]+0x00000244u,c->r[3]); // 801E0C98
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 801E0C9C
  c->f[0]=c->f[0]-c->f[2]; // 801E0CA0
  c->f[2]=c->f[3]*c->f[0]; // 801E0CA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E0CA8
  c->f[1]=c->f[1]-c->f[2]; // 801E0CAC
  {uint32_t ea=c->r[1]+0x000002B8u; WF64(ea,c->f[0]);} // 801E0CB0
  c->r[3]=R32(c->r[1]+0x000002BCu); // 801E0CB4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E0CB8
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[0]);} // 801E0CBC
  c->r[6]=R32(c->r[1]+0x000002C4u); // 801E0CC0
  W32(c->r[4]+c->r[5],c->r[6]); // 801E0CC4
  W32(c->r[4]+c->r[0],c->r[3]); // 801E0CC8
  goto L_801E0CE8; // 801E0CCC
L_801E0CD0:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E0CD0
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E0CD4
  c->r[3]=c->r[1]+0x00000010u; // 801E0CD8
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 801E0CDC
  c->r[4]=R32(c->r[1]+0x000002CCu); // 801E0CE0
  W32(c->r[3]+c->r[0],c->r[4]); // 801E0CE4
L_801E0CE8:;
  {uint32_t ea=c->r[2]+0xFFFFB228u; c->f[1]=RF64(ea);} // 801E0CE8
  c->r[3]=c->r[19]|c->r[19]; // 801E0CEC
  c->lr=0x801E0CF4u; f_801DE69C(c); // 801E0CF0
  cmps(c,0,(int32_t)c->r[23],0); // 801E0CF4
  c->r[3]=c->r[23]|c->r[23]; // 801E0CF8
  if (crb(c,0)) { goto L_801E0EF4; } // 801E0CFC
  c->r[0]=c->r[23]+0x00000001u; // 801E0D00
  cmps(c,0,(int32_t)c->r[0],8); // 801E0D04
  if (!crb(c,1)) { goto L_801E0E98; } // 801E0D08
  cmps(c,0,(int32_t)c->r[23],-1); // 801E0D0C
  c->r[4]=0u+0x00000000u; // 801E0D10
  c->r[0]=0u+0x00000000u; // 801E0D14
  if (!crb(c,1)) { goto L_801E0D20; } // 801E0D18
  c->r[0]=0u+0x00000001u; // 801E0D1C
L_801E0D20:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E0D20
  if (crb(c,2)) { goto L_801E0D50; } // 801E0D24
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 801E0D28
  c->r[5]=0u+0x00000001u; // 801E0D2C
  if (!crb(c,2)) { goto L_801E0D44; } // 801E0D30
  c->r[0]=c->r[23]+0x00000001u; // 801E0D34
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E0D38
  if (crb(c,2)) { goto L_801E0D44; } // 801E0D3C
  c->r[5]=0u+0x00000000u; // 801E0D40
L_801E0D44:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E0D44
  if (crb(c,2)) { goto L_801E0D50; } // 801E0D48
  c->r[4]=0u+0x00000001u; // 801E0D4C
L_801E0D50:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E0D50
  if (crb(c,2)) { goto L_801E0E98; } // 801E0D54
  c->r[5]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E0D58
  c->r[6]=c->r[1]+0x00000010u; // 801E0D5C
  c->r[4]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E0D60
  c->r[7]=c->r[1]+0x00000060u; // 801E0D64
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 801E0D68
  c->r[6]=c->r[6]+c->r[5]; // 801E0D6C
  c->r[7]=c->r[7]+c->r[4]; // 801E0D70
  {uint32_t ea=c->r[2]+0xFFFFB230u; c->f[9]=RF64(ea);} // 801E0D74
  {uint32_t ea=c->r[2]+0xFFFFB200u; c->f[8]=RF64(ea);} // 801E0D78
  c->ctr=c->r[0]; // 801E0D7C
  cmps(c,0,(int32_t)c->r[23],8); // 801E0D80
  if (crb(c,0)) { goto L_801E0E98; } // 801E0D84
L_801E0D88:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 801E0D88
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801E0D8C
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 801E0D90
  c->r[4]=c->r[4]^0x80000000u; // 801E0D94
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 801E0D98
  c->r[4]=c->r[0]^0x80000000u; // 801E0D9C
  c->r[0]=R32(c->r[6]+0xFFFFFFF8u); // 801E0DA0
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 801E0DA4
  W32(c->r[1]+0x00000244u,c->r[4]); // 801E0DA8
  c->r[4]=c->r[0]^0x80000000u; // 801E0DAC
  c->f[0]=c->f[0]-c->f[9]; // 801E0DB0
  c->r[0]=R32(c->r[6]+0xFFFFFFF4u); // 801E0DB4
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 801E0DB8
  c->r[0]=c->r[0]^0x80000000u; // 801E0DBC
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 801E0DC0
  c->f[5]=c->f[1]*c->f[0]; // 801E0DC4
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 801E0DC8
  c->f[1]=c->f[1]*c->f[8]; // 801E0DCC
  W32(c->r[1]+0x00000244u,c->r[0]); // 801E0DD0
  c->r[0]=R32(c->r[6]+0xFFFFFFF0u); // 801E0DD4
  c->f[3]=c->f[2]-c->f[9]; // 801E0DD8
  c->f[4]=c->f[0]-c->f[9]; // 801E0DDC
  c->r[0]=c->r[0]^0x80000000u; // 801E0DE0
  c->f[7]=c->f[1]*c->f[3]; // 801E0DE4
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 801E0DE8
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 801E0DEC
  c->f[1]=c->f[1]*c->f[8]; // 801E0DF0
  c->r[0]=R32(c->r[6]+0xFFFFFFECu); // 801E0DF4
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[5]);} // 801E0DF8
  c->f[3]=c->f[2]-c->f[9]; // 801E0DFC
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 801E0E00
  c->f[6]=c->f[1]*c->f[4]; // 801E0E04
  c->r[0]=c->r[0]^0x80000000u; // 801E0E08
  W32(c->r[1]+0x00000244u,c->r[0]); // 801E0E0C
  c->f[1]=c->f[1]*c->f[8]; // 801E0E10
  c->r[0]=R32(c->r[6]+0xFFFFFFE8u); // 801E0E14
  c->f[4]=c->f[0]-c->f[9]; // 801E0E18
  c->r[4]=c->r[0]^0x80000000u; // 801E0E1C
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 801E0E20
  c->r[0]=R32(c->r[6]+0xFFFFFFE4u); // 801E0E24
  c->f[5]=c->f[1]*c->f[3]; // 801E0E28
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 801E0E2C
  {uint32_t ea=c->r[7]+0xFFFFFFF8u; WF64(ea,c->f[7]);} // 801E0E30
  c->r[0]=c->r[0]^0x80000000u; // 801E0E34
  c->f[1]=c->f[1]*c->f[8]; // 801E0E38
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 801E0E3C
  c->f[3]=c->f[2]-c->f[9]; // 801E0E40
  {uint32_t ea=c->r[7]+0xFFFFFFF0u; WF64(ea,c->f[6]);} // 801E0E44
  c->f[4]=c->f[1]*c->f[4]; // 801E0E48
  c->r[6]=c->r[6]+0xFFFFFFE0u; // 801E0E4C
  {uint32_t ea=c->r[7]+0xFFFFFFE8u; WF64(ea,c->f[5]);} // 801E0E50
  c->f[1]=c->f[1]*c->f[8]; // 801E0E54
  W32(c->r[1]+0x00000244u,c->r[0]); // 801E0E58
  c->f[2]=c->f[0]-c->f[9]; // 801E0E5C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 801E0E60
  c->f[3]=c->f[1]*c->f[3]; // 801E0E64
  {uint32_t ea=c->r[7]+0xFFFFFFE0u; WF64(ea,c->f[4]);} // 801E0E68
  c->f[1]=c->f[1]*c->f[8]; // 801E0E6C
  {uint32_t ea=c->r[7]+0xFFFFFFD8u; WF64(ea,c->f[3]);} // 801E0E70
  c->f[0]=c->f[0]-c->f[9]; // 801E0E74
  c->f[2]=c->f[1]*c->f[2]; // 801E0E78
  c->f[1]=c->f[1]*c->f[8]; // 801E0E7C
  {uint32_t ea=c->r[7]+0xFFFFFFD0u; WF64(ea,c->f[2]);} // 801E0E80
  c->f[0]=c->f[1]*c->f[0]; // 801E0E84
  c->f[1]=c->f[1]*c->f[8]; // 801E0E88
  {uint32_t ea=c->r[7]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 801E0E8C
  c->r[7]=c->r[7]+0xFFFFFFC0u; // 801E0E90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0D88; } // 801E0E94
L_801E0E98:;
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801E0E98
  c->r[6]=c->r[1]+0x00000010u; // 801E0E9C
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801E0EA0
  c->r[7]=c->r[1]+0x00000060u; // 801E0EA4
  c->r[0]=c->r[3]+0x00000001u; // 801E0EA8
  c->r[6]=c->r[6]+c->r[5]; // 801E0EAC
  c->r[7]=c->r[7]+c->r[4]; // 801E0EB0
  {uint32_t ea=c->r[2]+0xFFFFB230u; c->f[3]=RF64(ea);} // 801E0EB4
  {uint32_t ea=c->r[2]+0xFFFFB200u; c->f[0]=RF64(ea);} // 801E0EB8
  c->ctr=c->r[0]; // 801E0EBC
  cmps(c,0,(int32_t)c->r[3],0); // 801E0EC0
  if (crb(c,0)) { goto L_801E0EF4; } // 801E0EC4
L_801E0EC8:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801E0EC8
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 801E0ECC
  c->r[0]=c->r[0]^0x80000000u; // 801E0ED0
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 801E0ED4
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 801E0ED8
  c->f[2]=c->f[2]-c->f[3]; // 801E0EDC
  c->f[2]=c->f[1]*c->f[2]; // 801E0EE0
  c->f[1]=c->f[1]*c->f[0]; // 801E0EE4
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[2]);} // 801E0EE8
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 801E0EEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0EC8; } // 801E0EF0
L_801E0EF4:;
  c->r[0]=c->r[23]+0x00000001u; // 801E0EF4
  c->r[8]=c->r[23]|c->r[23]; // 801E0EF8
  c->r[4]=c->r[1]+0x00000100u; // 801E0EFC
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E0F00
  c->r[5]=0u+0x80200000u; // 801E0F04
  c->ctr=c->r[0]; // 801E0F08
  cmps(c,0,(int32_t)c->r[23],0); // 801E0F0C
  if (crb(c,0)) { goto L_801E0F70; } // 801E0F10
L_801E0F14:;
  c->r[6]=c->r[1]+0x00000060u; // 801E0F14
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[2]=RF64(ea);} // 801E0F18
  c->r[6]=c->r[6]+c->r[3]; // 801E0F1C
  c->r[7]=c->r[5]+0xFFFFB7C0u; // 801E0F20
  c->r[0]=c->r[23]-c->r[8]; // 801E0F24
  c->r[9]=0u+0x00000000u; // 801E0F28
  goto L_801E0F4C; // 801E0F2C
L_801E0F30:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[1]=RF64(ea);} // 801E0F30
  c->r[7]=c->r[7]+0x00000008u; // 801E0F34
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=RF64(ea);} // 801E0F38
  c->r[6]=c->r[6]+0x00000008u; // 801E0F3C
  c->r[9]=c->r[9]+0x00000001u; // 801E0F40
  c->f[0]=c->f[1]*c->f[0]; // 801E0F44
  c->f[2]=c->f[2]+c->f[0]; // 801E0F48
L_801E0F4C:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[21]); // 801E0F4C
  if (crb(c,1)) { goto L_801E0F5C; } // 801E0F50
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 801E0F54
  if (!crb(c,1)) { IRQCHK(c); goto L_801E0F30; } // 801E0F58
L_801E0F5C:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E0F5C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801E0F60
  {uint32_t ea=c->r[4]+c->r[0]; WF64(ea,c->f[2]);} // 801E0F64
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 801E0F68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0F14; } // 801E0F6C
L_801E0F70:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E0F70
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E0F74
  cmpu(c,0,c->r[0],0x00000001u); // 801E0F78
  if (!crb(c,1)) { goto L_801E10A4; } // 801E0F7C
  c->r[0]=c->r[3]|c->r[3]; cr0(c,c->r[0]); // 801E0F80
  if (crb(c,2)) { goto L_801E0F94; } // 801E0F84
  cmps(c,0,(int32_t)c->r[0],3); // 801E0F88
  if (crb(c,2)) { goto L_801E131C; } // 801E0F8C
  goto L_801E1744; // 801E0F90
L_801E0F94:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E0F94
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[6]=RF64(ea);} // 801E0F98
  if (crb(c,0)) { goto L_801E108C; } // 801E0F9C
  c->r[0]=c->r[23]+0x00000001u; // 801E0FA0
  cmps(c,0,(int32_t)c->r[0],8); // 801E0FA4
  if (!crb(c,1)) { goto L_801E1060; } // 801E0FA8
  cmps(c,0,(int32_t)c->r[23],-1); // 801E0FAC
  c->r[3]=0u+0x00000000u; // 801E0FB0
  c->r[0]=0u+0x00000000u; // 801E0FB4
  if (!crb(c,1)) { goto L_801E0FC0; } // 801E0FB8
  c->r[0]=0u+0x00000001u; // 801E0FBC
L_801E0FC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E0FC0
  if (crb(c,2)) { goto L_801E0FF0; } // 801E0FC4
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 801E0FC8
  c->r[4]=0u+0x00000001u; // 801E0FCC
  if (!crb(c,2)) { goto L_801E0FE4; } // 801E0FD0
  c->r[0]=c->r[23]+0x00000001u; // 801E0FD4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E0FD8
  if (crb(c,2)) { goto L_801E0FE4; } // 801E0FDC
  c->r[4]=0u+0x00000000u; // 801E0FE0
L_801E0FE4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E0FE4
  if (crb(c,2)) { goto L_801E0FF0; } // 801E0FE8
  c->r[3]=0u+0x00000001u; // 801E0FEC
L_801E0FF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E0FF0
  if (crb(c,2)) { goto L_801E1060; } // 801E0FF4
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E0FF8
  c->r[4]=c->r[1]+0x00000100u; // 801E0FFC
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 801E1000
  c->r[4]=c->r[4]+c->r[3]; // 801E1004
  c->ctr=c->r[0]; // 801E1008
  cmps(c,0,(int32_t)c->r[23],8); // 801E100C
  if (crb(c,0)) { goto L_801E1060; } // 801E1010
L_801E1014:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 801E1014
  c->r[23]=c->r[23]+0xFFFFFFF8u; // 801E1018
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801E101C
  c->f[6]=c->f[6]+c->f[1]; // 801E1020
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 801E1024
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 801E1028
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 801E102C
  c->f[6]=c->f[6]+c->f[0]; // 801E1030
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 801E1034
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 801E1038
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 801E103C
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 801E1040
  c->f[6]=c->f[6]+c->f[5]; // 801E1044
  c->f[6]=c->f[6]+c->f[4]; // 801E1048
  c->f[6]=c->f[6]+c->f[3]; // 801E104C
  c->f[6]=c->f[6]+c->f[2]; // 801E1050
  c->f[6]=c->f[6]+c->f[1]; // 801E1054
  c->f[6]=c->f[6]+c->f[0]; // 801E1058
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E1014; } // 801E105C
L_801E1060:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E1060
  c->r[4]=c->r[1]+0x00000100u; // 801E1064
  c->r[0]=c->r[23]+0x00000001u; // 801E1068
  c->r[4]=c->r[4]+c->r[3]; // 801E106C
  c->ctr=c->r[0]; // 801E1070
  cmps(c,0,(int32_t)c->r[23],0); // 801E1074
  if (crb(c,0)) { goto L_801E108C; } // 801E1078
L_801E107C:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801E107C
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 801E1080
  c->f[6]=c->f[6]+c->f[0]; // 801E1084
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E107C; } // 801E1088
L_801E108C:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E108C
  if (!crb(c,2)) { goto L_801E1098; } // 801E1090
  goto L_801E109C; // 801E1094
L_801E1098:;
  c->f[6]=-c->f[6]; // 801E1098
L_801E109C:;
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[6]);} // 801E109C
  goto L_801E1744; // 801E10A0
L_801E10A4:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E10A4
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[6]=RF64(ea);} // 801E10A8
  c->r[5]=c->r[23]|c->r[23]; // 801E10AC
  if (crb(c,0)) { goto L_801E11A0; } // 801E10B0
  c->r[0]=c->r[23]+0x00000001u; // 801E10B4
  cmps(c,0,(int32_t)c->r[0],8); // 801E10B8
  if (!crb(c,1)) { goto L_801E1174; } // 801E10BC
  cmps(c,0,(int32_t)c->r[23],-1); // 801E10C0
  c->r[3]=0u+0x00000000u; // 801E10C4
  c->r[0]=0u+0x00000000u; // 801E10C8
  if (!crb(c,1)) { goto L_801E10D4; } // 801E10CC
  c->r[0]=0u+0x00000001u; // 801E10D0
L_801E10D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E10D4
  if (crb(c,2)) { goto L_801E1104; } // 801E10D8
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 801E10DC
  c->r[4]=0u+0x00000001u; // 801E10E0
  if (!crb(c,2)) { goto L_801E10F8; } // 801E10E4
  c->r[0]=c->r[23]+0x00000001u; // 801E10E8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E10EC
  if (crb(c,2)) { goto L_801E10F8; } // 801E10F0
  c->r[4]=0u+0x00000000u; // 801E10F4
L_801E10F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E10F8
  if (crb(c,2)) { goto L_801E1104; } // 801E10FC
  c->r[3]=0u+0x00000001u; // 801E1100
L_801E1104:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E1104
  if (crb(c,2)) { goto L_801E1174; } // 801E1108
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E110C
  c->r[4]=c->r[1]+0x00000100u; // 801E1110
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 801E1114
  c->r[4]=c->r[4]+c->r[3]; // 801E1118
  c->ctr=c->r[0]; // 801E111C
  cmps(c,0,(int32_t)c->r[23],8); // 801E1120
  if (crb(c,0)) { goto L_801E1174; } // 801E1124
L_801E1128:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 801E1128
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801E112C
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801E1130
  c->f[6]=c->f[6]+c->f[1]; // 801E1134
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 801E1138
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 801E113C
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 801E1140
  c->f[6]=c->f[6]+c->f[0]; // 801E1144
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 801E1148
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 801E114C
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 801E1150
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 801E1154
  c->f[6]=c->f[6]+c->f[5]; // 801E1158
  c->f[6]=c->f[6]+c->f[4]; // 801E115C
  c->f[6]=c->f[6]+c->f[3]; // 801E1160
  c->f[6]=c->f[6]+c->f[2]; // 801E1164
  c->f[6]=c->f[6]+c->f[1]; // 801E1168
  c->f[6]=c->f[6]+c->f[0]; // 801E116C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E1128; } // 801E1170
L_801E1174:;
  c->r[3]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801E1174
  c->r[4]=c->r[1]+0x00000100u; // 801E1178
  c->r[0]=c->r[5]+0x00000001u; // 801E117C
  c->r[4]=c->r[4]+c->r[3]; // 801E1180
  c->ctr=c->r[0]; // 801E1184
  cmps(c,0,(int32_t)c->r[5],0); // 801E1188
  if (crb(c,0)) { goto L_801E11A0; } // 801E118C
L_801E1190:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801E1190
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 801E1194
  c->f[6]=c->f[6]+c->f[0]; // 801E1198
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E1190; } // 801E119C
L_801E11A0:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E11A0
  if (!crb(c,2)) { goto L_801E11B0; } // 801E11A4
  c->f[1]=c->f[6]; // 801E11A8
  goto L_801E11B4; // 801E11AC
L_801E11B0:;
  c->f[1]=-c->f[6]; // 801E11B0
L_801E11B4:;
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 801E11B4
  cmps(c,1,(int32_t)c->r[23],1); // 801E11B8
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[1]);} // 801E11BC
  c->r[8]=0u+0x00000001u; // 801E11C0
  c->f[6]=c->f[0]-c->f[6]; // 801E11C4
  if (crb(c,4)) { goto L_801E1304; } // 801E11C8
  cmps(c,0,(int32_t)c->r[23],8); // 801E11CC
  c->r[4]=c->r[23]+0xFFFFFFF8u; // 801E11D0
  if (!crb(c,1)) { goto L_801E12D4; } // 801E11D4
  c->r[5]=0u+0x00000000u; // 801E11D8
  c->r[6]=0u+0x00000000u; // 801E11DC
  c->r[7]=0u+0x00000000u; // 801E11E0
  if (crb(c,4)) { goto L_801E11FC; } // 801E11E4
  c->r[3]=0u+0x80000000u; // 801E11E8
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E11EC
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 801E11F0
  if (crb(c,1)) { goto L_801E11FC; } // 801E11F4
  c->r[7]=0u+0x00000001u; // 801E11F8
L_801E11FC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E11FC
  if (crb(c,2)) { goto L_801E1238; } // 801E1200
  c->r[7]=rotl(c->r[23],0)&0x80000000u; // 801E1204
  c->r[3]=0u+0x00000001u; // 801E1208
  c->r[0]=c->r[7]+0x80000000u; // 801E120C
  cmpu(c,0,c->r[0],0x00000000u); // 801E1210
  if (!crb(c,2)) { goto L_801E122C; } // 801E1214
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E1218
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801E121C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801E1220
  if (crb(c,2)) { goto L_801E122C; } // 801E1224
  c->r[3]=0u+0x00000000u; // 801E1228
L_801E122C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E122C
  if (crb(c,2)) { goto L_801E1238; } // 801E1230
  c->r[6]=0u+0x00000001u; // 801E1234
L_801E1238:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E1238
  if (crb(c,2)) { goto L_801E1268; } // 801E123C
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E1240
  c->r[3]=0u+0x00000001u; // 801E1244
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E1248
  if (!crb(c,2)) { goto L_801E125C; } // 801E124C
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 801E1250
  if (crb(c,2)) { goto L_801E125C; } // 801E1254
  c->r[3]=0u+0x00000000u; // 801E1258
L_801E125C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E125C
  if (crb(c,2)) { goto L_801E1268; } // 801E1260
  c->r[5]=0u+0x00000001u; // 801E1264
L_801E1268:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E1268
  if (crb(c,2)) { goto L_801E12D4; } // 801E126C
  c->r[0]=c->r[4]+0x00000007u; // 801E1270
  c->r[3]=c->r[1]+0x00000108u; // 801E1274
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E1278
  c->ctr=c->r[0]; // 801E127C
  cmps(c,0,(int32_t)c->r[4],1); // 801E1280
  if (crb(c,0)) { goto L_801E12D4; } // 801E1284
L_801E1288:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801E1288
  c->r[8]=c->r[8]+0x00000008u; // 801E128C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=RF64(ea);} // 801E1290
  c->f[6]=c->f[6]+c->f[1]; // 801E1294
  {uint32_t ea=c->r[3]+0x00000010u; c->f[5]=RF64(ea);} // 801E1298
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=RF64(ea);} // 801E129C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=RF64(ea);} // 801E12A0
  c->f[6]=c->f[6]+c->f[0]; // 801E12A4
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=RF64(ea);} // 801E12A8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=RF64(ea);} // 801E12AC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=RF64(ea);} // 801E12B0
  c->r[3]=c->r[3]+0x00000040u; // 801E12B4
  c->f[6]=c->f[6]+c->f[5]; // 801E12B8
  c->f[6]=c->f[6]+c->f[4]; // 801E12BC
  c->f[6]=c->f[6]+c->f[3]; // 801E12C0
  c->f[6]=c->f[6]+c->f[2]; // 801E12C4
  c->f[6]=c->f[6]+c->f[1]; // 801E12C8
  c->f[6]=c->f[6]+c->f[0]; // 801E12CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E1288; } // 801E12D0
L_801E12D4:;
  c->r[0]=c->r[23]+0x00000001u; // 801E12D4
  c->r[3]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801E12D8
  c->r[4]=c->r[1]+0x00000100u; // 801E12DC
  c->r[0]=c->r[0]-c->r[8]; // 801E12E0
  c->r[4]=c->r[4]+c->r[3]; // 801E12E4
  c->ctr=c->r[0]; // 801E12E8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[23]); // 801E12EC
  if (crb(c,1)) { goto L_801E1304; } // 801E12F0
L_801E12F4:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801E12F4
  c->r[4]=c->r[4]+0x00000008u; // 801E12F8
  c->f[6]=c->f[6]+c->f[0]; // 801E12FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E12F4; } // 801E1300
L_801E1304:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E1304
  if (!crb(c,2)) { goto L_801E1310; } // 801E1308
  goto L_801E1314; // 801E130C
L_801E1310:;
  c->f[6]=-c->f[6]; // 801E1310
L_801E1314:;
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[6]);} // 801E1314
  goto L_801E1744; // 801E1318
L_801E131C:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E131C
  c->r[5]=c->r[23]|c->r[23]; // 801E1320
  if (!crb(c,1)) { goto L_801E1450; } // 801E1324
  cmps(c,0,(int32_t)c->r[23],8); // 801E1328
  if (!crb(c,1)) { goto L_801E1418; } // 801E132C
  cmps(c,0,(int32_t)c->r[23],-1); // 801E1330
  c->r[0]=0u+0x00000000u; // 801E1334
  if (!crb(c,1)) { goto L_801E1340; } // 801E1338
  c->r[0]=0u+0x00000001u; // 801E133C
L_801E1340:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1340
  if (crb(c,2)) { goto L_801E1418; } // 801E1344
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E1348
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E134C
  c->r[4]=c->r[1]+0x00000100u; // 801E1350
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E1354
  c->r[4]=c->r[4]+c->r[3]; // 801E1358
  c->ctr=c->r[0]; // 801E135C
  cmps(c,0,(int32_t)c->r[23],8); // 801E1360
  if (!crb(c,1)) { goto L_801E1418; } // 801E1364
L_801E1368:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801E1368
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801E136C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 801E1370
  c->f[2]=c->f[0]+c->f[1]; // 801E1374
  c->f[0]=c->f[0]-c->f[2]; // 801E1378
  c->f[0]=c->f[1]+c->f[0]; // 801E137C
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 801E1380
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[0]=RF64(ea);} // 801E1384
  c->f[1]=c->f[0]+c->f[2]; // 801E1388
  c->f[0]=c->f[0]-c->f[1]; // 801E138C
  c->f[0]=c->f[2]+c->f[0]; // 801E1390
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[0]);} // 801E1394
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[0]=RF64(ea);} // 801E1398
  c->f[2]=c->f[0]+c->f[1]; // 801E139C
  c->f[0]=c->f[0]-c->f[2]; // 801E13A0
  c->f[0]=c->f[1]+c->f[0]; // 801E13A4
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; WF64(ea,c->f[0]);} // 801E13A8
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 801E13AC
  c->f[1]=c->f[0]+c->f[2]; // 801E13B0
  c->f[0]=c->f[0]-c->f[1]; // 801E13B4
  c->f[0]=c->f[2]+c->f[0]; // 801E13B8
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; WF64(ea,c->f[0]);} // 801E13BC
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 801E13C0
  c->f[2]=c->f[0]+c->f[1]; // 801E13C4
  c->f[0]=c->f[0]-c->f[2]; // 801E13C8
  c->f[0]=c->f[1]+c->f[0]; // 801E13CC
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; WF64(ea,c->f[0]);} // 801E13D0
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[0]=RF64(ea);} // 801E13D4
  c->f[1]=c->f[0]+c->f[2]; // 801E13D8
  c->f[0]=c->f[0]-c->f[1]; // 801E13DC
  c->f[0]=c->f[2]+c->f[0]; // 801E13E0
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; WF64(ea,c->f[0]);} // 801E13E4
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 801E13E8
  c->f[2]=c->f[0]+c->f[1]; // 801E13EC
  c->f[0]=c->f[0]-c->f[2]; // 801E13F0
  c->f[0]=c->f[1]+c->f[0]; // 801E13F4
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; WF64(ea,c->f[0]);} // 801E13F8
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; c->f[0]=RF64(ea);} // 801E13FC
  c->f[1]=c->f[0]+c->f[2]; // 801E1400
  c->f[0]=c->f[0]-c->f[1]; // 801E1404
  c->f[0]=c->f[2]+c->f[0]; // 801E1408
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 801E140C
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; WF64(ea,c->f[1]); c->r[4]=ea;} // 801E1410
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E1368; } // 801E1414
L_801E1418:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801E1418
  c->r[3]=c->r[1]+0x00000100u; // 801E141C
  c->r[3]=c->r[3]+c->r[0]; // 801E1420
  c->ctr=c->r[5]; // 801E1424
  cmps(c,0,(int32_t)c->r[5],0); // 801E1428
  if (!crb(c,1)) { goto L_801E1450; } // 801E142C
L_801E1430:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801E1430
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 801E1434
  c->f[2]=c->f[0]+c->f[1]; // 801E1438
  c->f[0]=c->f[0]-c->f[2]; // 801E143C
  c->f[0]=c->f[1]+c->f[0]; // 801E1440
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 801E1444
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; WF64(ea,c->f[2]); c->r[3]=ea;} // 801E1448
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E1430; } // 801E144C
L_801E1450:;
  cmps(c,1,(int32_t)c->r[23],1); // 801E1450
  c->r[6]=c->r[23]|c->r[23]; // 801E1454
  if (!crb(c,5)) { goto L_801E15C8; } // 801E1458
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E145C
  cmps(c,0,(int32_t)c->r[0],8); // 801E1460
  if (!crb(c,1)) { goto L_801E158C; } // 801E1464
  c->r[3]=0u+0x00000000u; // 801E1468
  c->r[0]=0u+0x00000000u; // 801E146C
  if (crb(c,4)) { goto L_801E1478; } // 801E1470
  c->r[0]=0u+0x00000001u; // 801E1474
L_801E1478:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E1478
  if (crb(c,2)) { goto L_801E14B4; } // 801E147C
  c->r[5]=rotl(c->r[23],0)&0x80000000u; // 801E1480
  c->r[4]=0u+0x00000001u; // 801E1484
  c->r[0]=c->r[5]+0x80000000u; // 801E1488
  cmpu(c,0,c->r[0],0x00000000u); // 801E148C
  if (!crb(c,2)) { goto L_801E14A8; } // 801E1490
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E1494
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801E1498
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E149C
  if (crb(c,2)) { goto L_801E14A8; } // 801E14A0
  c->r[4]=0u+0x00000000u; // 801E14A4
L_801E14A8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E14A8
  if (crb(c,2)) { goto L_801E14B4; } // 801E14AC
  c->r[3]=0u+0x00000001u; // 801E14B0
L_801E14B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E14B4
  if (crb(c,2)) { goto L_801E158C; } // 801E14B8
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 801E14BC
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E14C0
  c->r[4]=c->r[1]+0x00000100u; // 801E14C4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E14C8
  c->r[4]=c->r[4]+c->r[3]; // 801E14CC
  c->ctr=c->r[0]; // 801E14D0
  cmps(c,0,(int32_t)c->r[23],9); // 801E14D4
  if (!crb(c,1)) { goto L_801E158C; } // 801E14D8
L_801E14DC:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801E14DC
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 801E14E0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 801E14E4
  c->f[2]=c->f[0]+c->f[1]; // 801E14E8
  c->f[0]=c->f[0]-c->f[2]; // 801E14EC
  c->f[0]=c->f[1]+c->f[0]; // 801E14F0
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 801E14F4
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[0]=RF64(ea);} // 801E14F8
  c->f[1]=c->f[0]+c->f[2]; // 801E14FC
  c->f[0]=c->f[0]-c->f[1]; // 801E1500
  c->f[0]=c->f[2]+c->f[0]; // 801E1504
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[0]);} // 801E1508
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[0]=RF64(ea);} // 801E150C
  c->f[2]=c->f[0]+c->f[1]; // 801E1510
  c->f[0]=c->f[0]-c->f[2]; // 801E1514
  c->f[0]=c->f[1]+c->f[0]; // 801E1518
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; WF64(ea,c->f[0]);} // 801E151C
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 801E1520
  c->f[1]=c->f[0]+c->f[2]; // 801E1524
  c->f[0]=c->f[0]-c->f[1]; // 801E1528
  c->f[0]=c->f[2]+c->f[0]; // 801E152C
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; WF64(ea,c->f[0]);} // 801E1530
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 801E1534
  c->f[2]=c->f[0]+c->f[1]; // 801E1538
  c->f[0]=c->f[0]-c->f[2]; // 801E153C
  c->f[0]=c->f[1]+c->f[0]; // 801E1540
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; WF64(ea,c->f[0]);} // 801E1544
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[0]=RF64(ea);} // 801E1548
  c->f[1]=c->f[0]+c->f[2]; // 801E154C
  c->f[0]=c->f[0]-c->f[1]; // 801E1550
  c->f[0]=c->f[2]+c->f[0]; // 801E1554
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; WF64(ea,c->f[0]);} // 801E1558
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 801E155C
  c->f[2]=c->f[0]+c->f[1]; // 801E1560
  c->f[0]=c->f[0]-c->f[2]; // 801E1564
  c->f[0]=c->f[1]+c->f[0]; // 801E1568
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; WF64(ea,c->f[0]);} // 801E156C
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; c->f[0]=RF64(ea);} // 801E1570
  c->f[1]=c->f[0]+c->f[2]; // 801E1574
  c->f[0]=c->f[0]-c->f[1]; // 801E1578
  c->f[0]=c->f[2]+c->f[0]; // 801E157C
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 801E1580
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; WF64(ea,c->f[1]); c->r[4]=ea;} // 801E1584
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E14DC; } // 801E1588
L_801E158C:;
  c->r[3]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801E158C
  c->r[4]=c->r[1]+0x00000100u; // 801E1590
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 801E1594
  c->r[4]=c->r[4]+c->r[3]; // 801E1598
  c->ctr=c->r[0]; // 801E159C
  cmps(c,0,(int32_t)c->r[6],1); // 801E15A0
  if (!crb(c,1)) { goto L_801E15C8; } // 801E15A4
L_801E15A8:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801E15A8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 801E15AC
  c->f[2]=c->f[0]+c->f[1]; // 801E15B0
  c->f[0]=c->f[0]-c->f[2]; // 801E15B4
  c->f[0]=c->f[1]+c->f[0]; // 801E15B8
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 801E15BC
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[2]); c->r[4]=ea;} // 801E15C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E15A8; } // 801E15C4
L_801E15C8:;
  cmps(c,1,(int32_t)c->r[23],2); // 801E15C8
  {uint32_t ea=c->r[2]+0xFFFFB1F8u; c->f[6]=RF64(ea);} // 801E15CC
  if (crb(c,4)) { goto L_801E1704; } // 801E15D0
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E15D4
  cmps(c,0,(int32_t)c->r[0],8); // 801E15D8
  if (!crb(c,1)) { goto L_801E16D8; } // 801E15DC
  c->r[3]=0u+0x00000000u; // 801E15E0
  c->r[4]=0u+0x00000000u; // 801E15E4
  c->r[0]=0u+0x00000000u; // 801E15E8
  if (crb(c,4)) { goto L_801E15F4; } // 801E15EC
  c->r[0]=0u+0x00000001u; // 801E15F0
L_801E15F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E15F4
  if (crb(c,2)) { goto L_801E1630; } // 801E15F8
  c->r[6]=rotl(c->r[23],0)&0x80000000u; // 801E15FC
  c->r[5]=0u+0x00000001u; // 801E1600
  c->r[0]=c->r[6]+0x80000000u; // 801E1604
  cmpu(c,0,c->r[0],0x00000000u); // 801E1608
  if (!crb(c,2)) { goto L_801E1624; } // 801E160C
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 801E1610
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801E1614
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801E1618
  if (crb(c,2)) { goto L_801E1624; } // 801E161C
  c->r[5]=0u+0x00000000u; // 801E1620
L_801E1624:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E1624
  if (crb(c,2)) { goto L_801E1630; } // 801E1628
  c->r[4]=0u+0x00000001u; // 801E162C
L_801E1630:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E1630
  if (crb(c,2)) { goto L_801E1664; } // 801E1634
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 801E1638
  c->r[4]=0u+0x00000001u; // 801E163C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E1640
  if (!crb(c,2)) { goto L_801E1658; } // 801E1644
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E1648
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 801E164C
  if (crb(c,2)) { goto L_801E1658; } // 801E1650
  c->r[4]=0u+0x00000000u; // 801E1654
L_801E1658:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E1658
  if (crb(c,2)) { goto L_801E1664; } // 801E165C
  c->r[3]=0u+0x00000001u; // 801E1660
L_801E1664:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E1664
  if (crb(c,2)) { goto L_801E16D8; } // 801E1668
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 801E166C
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E1670
  c->r[4]=c->r[1]+0x00000100u; // 801E1674
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E1678
  c->r[4]=c->r[4]+c->r[3]; // 801E167C
  c->ctr=c->r[0]; // 801E1680
  cmps(c,0,(int32_t)c->r[23],10); // 801E1684
  if (crb(c,0)) { goto L_801E16D8; } // 801E1688
L_801E168C:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 801E168C
  c->r[23]=c->r[23]+0xFFFFFFF8u; // 801E1690
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 801E1694
  c->f[6]=c->f[6]+c->f[1]; // 801E1698
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 801E169C
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 801E16A0
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 801E16A4
  c->f[6]=c->f[6]+c->f[0]; // 801E16A8
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 801E16AC
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 801E16B0
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 801E16B4
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 801E16B8
  c->f[6]=c->f[6]+c->f[5]; // 801E16BC
  c->f[6]=c->f[6]+c->f[4]; // 801E16C0
  c->f[6]=c->f[6]+c->f[3]; // 801E16C4
  c->f[6]=c->f[6]+c->f[2]; // 801E16C8
  c->f[6]=c->f[6]+c->f[1]; // 801E16CC
  c->f[6]=c->f[6]+c->f[0]; // 801E16D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E168C; } // 801E16D4
L_801E16D8:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 801E16D8
  c->r[4]=c->r[1]+0x00000100u; // 801E16DC
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 801E16E0
  c->r[4]=c->r[4]+c->r[3]; // 801E16E4
  c->ctr=c->r[0]; // 801E16E8
  cmps(c,0,(int32_t)c->r[23],2); // 801E16EC
  if (crb(c,0)) { goto L_801E1704; } // 801E16F0
L_801E16F4:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 801E16F4
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 801E16F8
  c->f[6]=c->f[6]+c->f[0]; // 801E16FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E16F4; } // 801E1700
L_801E1704:;
  cmps(c,0,(int32_t)c->r[18],0); // 801E1704
  if (!crb(c,2)) { goto L_801E1724; } // 801E1708
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=RF64(ea);} // 801E170C
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=RF64(ea);} // 801E1710
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[1]);} // 801E1714
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[0]);} // 801E1718
  {uint32_t ea=c->r[17]+0x00000010u; WF64(ea,c->f[6]);} // 801E171C
  goto L_801E1744; // 801E1720
L_801E1724:;
  {uint32_t ea=c->r[1]+0x00000100u; c->f[2]=RF64(ea);} // 801E1724
  c->f[0]=-c->f[6]; // 801E1728
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=RF64(ea);} // 801E172C
  c->f[2]=-c->f[2]; // 801E1730
  {uint32_t ea=c->r[17]+0x00000010u; WF64(ea,c->f[0]);} // 801E1734
  c->f[0]=-c->f[1]; // 801E1738
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[2]);} // 801E173C
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[0]);} // 801E1740
L_801E1744:;
  c->r[11]=c->r[1]+0x00000370u; // 801E1744
  c->r[3]=rotl(c->r[20],0)&0x00000007u; // 801E1748
  c->lr=0x801E1750u; { {uint32_t ea=c->r[11]+0xFFFFFFB8u; c->f[23]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFC0u; c->f[24]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFC8u; c->f[25]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFD0u; c->f[26]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 801E174C
  {uint32_t ea=c->r[1]+0x000002E0u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E1750
  c->r[0]=R32(c->r[1]+0x00000374u); // 801E1754
  c->lr=c->r[0]; // 801E1758
  c->r[1]=c->r[1]+0x00000370u; // 801E175C
  return; // 801E1760
}

// __kernel_sin
void f_801E1764(Ctx* __restrict c) {
  trace_call(0x801E1764u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1764
  c->r[0]=0u+0x3E400000u; // 801E1768
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E176C
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E1770
  c->r[4]=rotl(c->r[4],0)&0x7FFFFFFFu; // 801E1774
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1778
  if (!crb(c,0)) { goto L_801E1798; } // 801E177C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E1780
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801E1784
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1788
  cmps(c,0,(int32_t)c->r[0],0); // 801E178C
  if (!crb(c,2)) { goto L_801E1798; } // 801E1790
  goto L_801E181C; // 801E1794
L_801E1798:;
  c->f[7]=c->f[1]*c->f[1]; // 801E1798
  {uint32_t ea=c->r[2]+0xFFFFB258u; c->f[0]=RF64(ea);} // 801E179C
  {uint32_t ea=c->r[2]+0xFFFFB250u; c->f[5]=RF64(ea);} // 801E17A0
  cmps(c,0,(int32_t)c->r[3],0); // 801E17A4
  {uint32_t ea=c->r[2]+0xFFFFB248u; c->f[4]=RF64(ea);} // 801E17A8
  {uint32_t ea=c->r[2]+0xFFFFB240u; c->f[3]=RF64(ea);} // 801E17AC
  c->f[6]=c->f[0]*c->f[7]; // 801E17B0
  {uint32_t ea=c->r[2]+0xFFFFB238u; c->f[0]=RF64(ea);} // 801E17B4
  c->f[8]=c->f[7]*c->f[1]; // 801E17B8
  c->f[5]=c->f[5]+c->f[6]; // 801E17BC
  c->f[5]=c->f[7]*c->f[5]; // 801E17C0
  c->f[4]=c->f[4]+c->f[5]; // 801E17C4
  c->f[4]=c->f[7]*c->f[4]; // 801E17C8
  c->f[3]=c->f[3]+c->f[4]; // 801E17CC
  c->f[3]=c->f[7]*c->f[3]; // 801E17D0
  c->f[0]=c->f[0]+c->f[3]; // 801E17D4
  if (!crb(c,2)) { goto L_801E17F4; } // 801E17D8
  c->f[2]=c->f[7]*c->f[0]; // 801E17DC
  {uint32_t ea=c->r[2]+0xFFFFB260u; c->f[0]=RF64(ea);} // 801E17E0
  c->f[0]=c->f[0]+c->f[2]; // 801E17E4
  c->f[0]=c->f[8]*c->f[0]; // 801E17E8
  c->f[1]=c->f[1]+c->f[0]; // 801E17EC
  goto L_801E181C; // 801E17F0
L_801E17F4:;
  {uint32_t ea=c->r[2]+0xFFFFB268u; c->f[4]=RF64(ea);} // 801E17F4
  c->f[3]=c->f[8]*c->f[0]; // 801E17F8
  {uint32_t ea=c->r[2]+0xFFFFB260u; c->f[0]=RF64(ea);} // 801E17FC
  c->f[4]=c->f[4]*c->f[2]; // 801E1800
  c->f[0]=c->f[0]*c->f[8]; // 801E1804
  c->f[3]=c->f[4]-c->f[3]; // 801E1808
  c->f[3]=c->f[7]*c->f[3]; // 801E180C
  c->f[2]=c->f[3]-c->f[2]; // 801E1810
  c->f[0]=c->f[2]-c->f[0]; // 801E1814
  c->f[1]=c->f[1]-c->f[0]; // 801E1818
L_801E181C:;
  c->r[1]=c->r[1]+0x00000020u; // 801E181C
  return; // 801E1820
}

// __kernel_tan
void f_801E1824(Ctx* __restrict c) {
  trace_call(0x801E1824u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1824
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801E1828
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801E182C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801E1830
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801E1834
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E1838
  c->r[0]=0u+0x3E300000u; // 801E183C
  c->r[8]=R32(c->r[1]+0x00000008u); // 801E1840
  c->r[7]=rotl(c->r[8],0)&0x7FFFFFFFu; // 801E1844
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801E1848
  if (!crb(c,0)) { goto L_801E18A0; } // 801E184C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E1850
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801E1854
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1858
  cmps(c,0,(int32_t)c->r[0],0); // 801E185C
  if (!crb(c,2)) { goto L_801E18A0; } // 801E1860
  c->r[4]=c->r[3]+0x00000001u; // 801E1864
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E1868
  c->r[4]=c->r[4]|c->r[7]; // 801E186C
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 801E1870
  if (!crb(c,2)) { goto L_801E1888; } // 801E1874
  c->f[1]=std::fabs(c->f[1]); // 801E1878
  {uint32_t ea=c->r[2]+0xFFFFB270u; c->f[0]=RF64(ea);} // 801E187C
  c->f[1]=c->f[0]/c->f[1]; // 801E1880
  goto L_801E1A5C; // 801E1884
L_801E1888:;
  cmps(c,0,(int32_t)c->r[3],1); // 801E1888
  if (!crb(c,2)) { goto L_801E1894; } // 801E188C
  goto L_801E1A5C; // 801E1890
L_801E1894:;
  {uint32_t ea=c->r[2]+0xFFFFB278u; c->f[0]=RF64(ea);} // 801E1894
  c->f[1]=c->f[0]/c->f[1]; // 801E1898
  goto L_801E1A5C; // 801E189C
L_801E18A0:;
  c->r[4]=0u+0x3FE60000u; // 801E18A0
  c->r[0]=c->r[4]+0xFFFF9428u; // 801E18A4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801E18A8
  if (crb(c,0)) { goto L_801E18D8; } // 801E18AC
  cmps(c,0,(int32_t)c->r[8],0); // 801E18B0
  if (!crb(c,0)) { goto L_801E18C0; } // 801E18B4
  c->f[1]=-c->f[1]; // 801E18B8
  c->f[2]=-c->f[2]; // 801E18BC
L_801E18C0:;
  {uint32_t ea=c->r[2]+0xFFFFB280u; c->f[3]=RF64(ea);} // 801E18C0
  {uint32_t ea=c->r[2]+0xFFFFB288u; c->f[0]=RF64(ea);} // 801E18C4
  c->f[1]=c->f[3]-c->f[1]; // 801E18C8
  c->f[0]=c->f[0]-c->f[2]; // 801E18CC
  {uint32_t ea=c->r[2]+0xFFFFB290u; c->f[2]=RF64(ea);} // 801E18D0
  c->f[1]=c->f[1]+c->f[0]; // 801E18D4
L_801E18D8:;
  c->f[0]=c->f[1]*c->f[1]; // 801E18D8
  c->r[6]=0u+0x80200000u; // 801E18DC
  c->r[5]=c->r[6]+0xFFFFB800u; // 801E18E0
  c->r[4]=0u+0x3FE60000u; // 801E18E4
  c->r[0]=c->r[4]+0xFFFF9428u; // 801E18E8
  {uint32_t ea=c->r[5]+0x00000060u; c->f[5]=RF64(ea);} // 801E18EC
  c->f[3]=c->f[0]*c->f[0]; // 801E18F0
  {uint32_t ea=c->r[5]+0x00000058u; c->f[8]=RF64(ea);} // 801E18F4
  {uint32_t ea=c->r[5]+0x00000050u; c->f[6]=RF64(ea);} // 801E18F8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801E18FC
  {uint32_t ea=c->r[5]+0x00000048u; c->f[10]=RF64(ea);} // 801E1900
  c->f[4]=c->f[0]*c->f[1]; // 801E1904
  c->f[7]=c->f[3]*c->f[5]; // 801E1908
  {uint32_t ea=c->r[6]+0xFFFFB800u; c->f[5]=RF64(ea);} // 801E190C
  {uint32_t ea=c->r[5]+0x00000040u; c->f[9]=RF64(ea);} // 801E1910
  c->f[11]=c->f[3]*c->f[8]; // 801E1914
  {uint32_t ea=c->r[5]+0x00000038u; c->f[31]=RF64(ea);} // 801E1918
  {uint32_t ea=c->r[5]+0x00000030u; c->f[8]=RF64(ea);} // 801E191C
  c->f[6]=c->f[6]+c->f[7]; // 801E1920
  {uint32_t ea=c->r[5]+0x00000028u; c->f[13]=RF64(ea);} // 801E1924
  c->f[30]=c->f[10]+c->f[11]; // 801E1928
  {uint32_t ea=c->r[5]+0x00000020u; c->f[7]=RF64(ea);} // 801E192C
  c->f[5]=c->f[5]*c->f[4]; // 801E1930
  {uint32_t ea=c->r[5]+0x00000018u; c->f[12]=RF64(ea);} // 801E1934
  c->f[10]=c->f[3]*c->f[6]; // 801E1938
  {uint32_t ea=c->r[5]+0x00000010u; c->f[6]=RF64(ea);} // 801E193C
  {uint32_t ea=c->r[5]+0x00000008u; c->f[11]=RF64(ea);} // 801E1940
  c->f[30]=c->f[3]*c->f[30]; // 801E1944
  c->f[9]=c->f[9]+c->f[10]; // 801E1948
  c->f[10]=c->f[31]+c->f[30]; // 801E194C
  c->f[9]=c->f[3]*c->f[9]; // 801E1950
  c->f[10]=c->f[3]*c->f[10]; // 801E1954
  c->f[8]=c->f[8]+c->f[9]; // 801E1958
  c->f[9]=c->f[13]+c->f[10]; // 801E195C
  c->f[8]=c->f[3]*c->f[8]; // 801E1960
  c->f[9]=c->f[3]*c->f[9]; // 801E1964
  c->f[7]=c->f[7]+c->f[8]; // 801E1968
  c->f[8]=c->f[12]+c->f[9]; // 801E196C
  c->f[7]=c->f[3]*c->f[7]; // 801E1970
  c->f[8]=c->f[3]*c->f[8]; // 801E1974
  c->f[3]=c->f[6]+c->f[7]; // 801E1978
  c->f[6]=c->f[11]+c->f[8]; // 801E197C
  c->f[3]=c->f[0]*c->f[3]; // 801E1980
  c->f[3]=c->f[6]+c->f[3]; // 801E1984
  c->f[3]=c->f[4]*c->f[3]; // 801E1988
  c->f[3]=c->f[2]+c->f[3]; // 801E198C
  c->f[0]=c->f[0]*c->f[3]; // 801E1990
  c->f[6]=c->f[2]+c->f[0]; // 801E1994
  c->f[6]=c->f[6]+c->f[5]; // 801E1998
  c->f[4]=c->f[1]+c->f[6]; // 801E199C
  if (crb(c,0)) { goto L_801E1A04; } // 801E19A0
  c->r[4]=0u+0x43300000u; // 801E19A4
  c->r[0]=c->r[3]^0x80000000u; // 801E19A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E19AC
  c->r[0]=rotl(c->r[8],2)&0x00000002u; // 801E19B0
  {uint32_t ea=c->r[2]+0xFFFFB2A0u; c->f[5]=RF64(ea);} // 801E19B4
  c->r[0]=addc(c,~c->r[0],0x00000001u,1); // 801E19B8
  W32(c->r[1]+0x00000020u,c->r[4]); // 801E19BC
  c->r[0]=c->r[0]^0x80000000u; // 801E19C0
  c->f[3]=c->f[4]*c->f[4]; // 801E19C4
  {uint32_t ea=c->r[2]+0xFFFFB298u; c->f[0]=RF64(ea);} // 801E19C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 801E19CC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801E19D0
  c->f[7]=c->f[2]-c->f[5]; // 801E19D4
  W32(c->r[1]+0x00000028u,c->r[4]); // 801E19D8
  c->f[2]=c->f[4]+c->f[7]; // 801E19DC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 801E19E0
  c->f[4]=c->f[4]-c->f[5]; // 801E19E4
  c->f[2]=c->f[3]/c->f[2]; // 801E19E8
  c->f[2]=c->f[2]-c->f[6]; // 801E19EC
  c->f[1]=c->f[1]-c->f[2]; // 801E19F0
  c->f[0]=c->f[0]*c->f[1]; // 801E19F4
  c->f[0]=c->f[7]-c->f[0]; // 801E19F8
  c->f[1]=c->f[4]*c->f[0]; // 801E19FC
  goto L_801E1A5C; // 801E1A00
L_801E1A04:;
  cmps(c,0,(int32_t)c->r[3],1); // 801E1A04
  if (!crb(c,2)) { goto L_801E1A14; } // 801E1A08
  c->f[1]=c->f[4]; // 801E1A0C
  goto L_801E1A5C; // 801E1A10
L_801E1A14:;
  {uint32_t ea=c->r[2]+0xFFFFB278u; c->f[0]=RF64(ea);} // 801E1A14
  c->r[0]=0u+0x00000000u; // 801E1A18
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[4]);} // 801E1A1C
  c->f[5]=c->f[0]/c->f[4]; // 801E1A20
  {uint32_t ea=c->r[2]+0xFFFFB270u; c->f[2]=RF64(ea);} // 801E1A24
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E1A28
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=RF64(ea);} // 801E1A2C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[5]);} // 801E1A30
  c->f[0]=c->f[4]-c->f[1]; // 801E1A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1A38
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 801E1A3C
  c->f[0]=c->f[6]-c->f[0]; // 801E1A40
  c->f[1]=c->f[3]*c->f[4]; // 801E1A44
  c->f[0]=c->f[3]*c->f[0]; // 801E1A48
  c->f[1]=c->f[2]+c->f[1]; // 801E1A4C
  c->f[0]=c->f[1]+c->f[0]; // 801E1A50
  c->f[0]=c->f[5]*c->f[0]; // 801E1A54
  c->f[1]=c->f[3]+c->f[0]; // 801E1A58
L_801E1A5C:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801E1A5C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801E1A60
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801E1A64
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801E1A68
  c->r[1]=c->r[1]+0x00000050u; // 801E1A6C
  return; // 801E1A70
}

// atan
void f_801E1A74(Ctx* __restrict c) {
  trace_call(0x801E1A74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1A74
  c->r[5]=0u+0x80200000u; // 801E1A78
  c->r[0]=0u+0x44100000u; // 801E1A7C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E1A80
  c->r[5]=c->r[5]+0xFFFFB868u; // 801E1A84
  c->r[6]=R32(c->r[1]+0x00000008u); // 801E1A88
  c->r[4]=rotl(c->r[6],0)&0x7FFFFFFFu; // 801E1A8C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1A90
  if (!crb(c,0)) { goto L_801E1AB4; } // 801E1A94
  c->r[0]=0u+0x3FDC0000u; // 801E1A98
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1A9C
  if (!crb(c,0)) { goto L_801E1B38; } // 801E1AA0
  c->r[0]=0u+0x3E200000u; // 801E1AA4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1AA8
  if (!crb(c,0)) { goto L_801E1B30; } // 801E1AAC
  goto L_801E1B18; // 801E1AB0
L_801E1AB4:;
  c->r[0]=0u+0x7FF00000u; // 801E1AB4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1AB8
  if (crb(c,2)) { goto L_801E1AC8; } // 801E1ABC
  if (!crb(c,0)) { goto L_801E1AD4; } // 801E1AC0
  goto L_801E1ADC; // 801E1AC4
L_801E1AC8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E1AC8
  cmps(c,0,(int32_t)c->r[0],0); // 801E1ACC
  if (crb(c,2)) { goto L_801E1ADC; } // 801E1AD0
L_801E1AD4:;
  c->f[1]=c->f[1]+c->f[1]; // 801E1AD4
  goto L_801E1C9C; // 801E1AD8
L_801E1ADC:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E1ADC
  if (!crb(c,1)) { goto L_801E1AFC; } // 801E1AE0
  c->r[4]=c->r[5]+0x00000000u; // 801E1AE4
  c->r[3]=c->r[5]+0x00000020u; // 801E1AE8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 801E1AEC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 801E1AF0
  c->f[1]=c->f[1]+c->f[0]; // 801E1AF4
  goto L_801E1C9C; // 801E1AF8
L_801E1AFC:;
  c->r[4]=c->r[5]+0x00000000u; // 801E1AFC
  c->r[3]=c->r[5]+0x00000020u; // 801E1B00
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 801E1B04
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 801E1B08
  c->f[1]=-c->f[1]; // 801E1B0C
  c->f[1]=c->f[1]-c->f[0]; // 801E1B10
  goto L_801E1C9C; // 801E1B14
L_801E1B18:;
  {uint32_t ea=c->r[2]+0xFFFFB2A8u; c->f[2]=RF64(ea);} // 801E1B18
  {uint32_t ea=c->r[2]+0xFFFFB2B0u; c->f[0]=RF64(ea);} // 801E1B1C
  c->f[2]=c->f[2]+c->f[1]; // 801E1B20
  fcmp(c,0,c->f[2],c->f[0]); // 801E1B24
  if (!crb(c,1)) { goto L_801E1B30; } // 801E1B28
  goto L_801E1C9C; // 801E1B2C
L_801E1B30:;
  c->r[0]=0u+0xFFFFFFFFu; // 801E1B30
  goto L_801E1BC8; // 801E1B34
L_801E1B38:;
  c->r[0]=0u+0x3FF30000u; // 801E1B38
  c->f[3]=std::fabs(c->f[1]); // 801E1B3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1B40
  if (!crb(c,0)) { goto L_801E1B8C; } // 801E1B44
  c->r[0]=0u+0x3FE60000u; // 801E1B48
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1B4C
  if (!crb(c,0)) { goto L_801E1B74; } // 801E1B50
  {uint32_t ea=c->r[2]+0xFFFFB2B8u; c->f[0]=RF64(ea);} // 801E1B54
  c->r[0]=0u+0x00000000u; // 801E1B58
  {uint32_t ea=c->r[2]+0xFFFFB2B0u; c->f[1]=RF64(ea);} // 801E1B5C
  c->f[2]=c->f[0]*c->f[3]; // 801E1B60
  c->f[0]=c->f[0]+c->f[3]; // 801E1B64
  c->f[1]=c->f[2]-c->f[1]; // 801E1B68
  c->f[1]=c->f[1]/c->f[0]; // 801E1B6C
  goto L_801E1BC8; // 801E1B70
L_801E1B74:;
  {uint32_t ea=c->r[2]+0xFFFFB2B0u; c->f[0]=RF64(ea);} // 801E1B74
  c->r[0]=0u+0x00000001u; // 801E1B78
  c->f[1]=c->f[3]-c->f[0]; // 801E1B7C
  c->f[0]=c->f[0]+c->f[3]; // 801E1B80
  c->f[1]=c->f[1]/c->f[0]; // 801E1B84
  goto L_801E1BC8; // 801E1B88
L_801E1B8C:;
  c->r[3]=0u+0x40040000u; // 801E1B8C
  c->r[0]=c->r[3]+0xFFFF8000u; // 801E1B90
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1B94
  if (!crb(c,0)) { goto L_801E1BBC; } // 801E1B98
  {uint32_t ea=c->r[2]+0xFFFFB2C0u; c->f[2]=RF64(ea);} // 801E1B9C
  c->r[0]=0u+0x00000002u; // 801E1BA0
  {uint32_t ea=c->r[2]+0xFFFFB2B0u; c->f[0]=RF64(ea);} // 801E1BA4
  c->f[1]=c->f[2]*c->f[3]; // 801E1BA8
  c->f[2]=c->f[3]-c->f[2]; // 801E1BAC
  c->f[0]=c->f[0]+c->f[1]; // 801E1BB0
  c->f[1]=c->f[2]/c->f[0]; // 801E1BB4
  goto L_801E1BC8; // 801E1BB8
L_801E1BBC:;
  {uint32_t ea=c->r[2]+0xFFFFB2C8u; c->f[0]=RF64(ea);} // 801E1BBC
  c->r[0]=0u+0x00000003u; // 801E1BC0
  c->f[1]=c->f[0]/c->f[3]; // 801E1BC4
L_801E1BC8:;
  c->f[0]=c->f[1]*c->f[1]; // 801E1BC8
  c->r[3]=c->r[5]+0x00000040u; // 801E1BCC
  {uint32_t ea=c->r[3]+0x00000050u; c->f[3]=RF64(ea);} // 801E1BD0
  cmps(c,0,(int32_t)c->r[0],0); // 801E1BD4
  {uint32_t ea=c->r[3]+0x00000048u; c->f[2]=RF64(ea);} // 801E1BD8
  {uint32_t ea=c->r[3]+0x00000040u; c->f[11]=RF64(ea);} // 801E1BDC
  c->f[13]=c->f[0]*c->f[0]; // 801E1BE0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[5]=RF64(ea);} // 801E1BE4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[10]=RF64(ea);} // 801E1BE8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[4]=RF64(ea);} // 801E1BEC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[9]=RF64(ea);} // 801E1BF0
  c->f[12]=c->f[13]*c->f[3]; // 801E1BF4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=RF64(ea);} // 801E1BF8
  c->f[6]=c->f[13]*c->f[2]; // 801E1BFC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[8]=RF64(ea);} // 801E1C00
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=RF64(ea);} // 801E1C04
  c->f[11]=c->f[11]+c->f[12]; // 801E1C08
  {uint32_t ea=c->r[5]+0x00000040u; c->f[7]=RF64(ea);} // 801E1C0C
  c->f[5]=c->f[5]+c->f[6]; // 801E1C10
  c->f[6]=c->f[13]*c->f[11]; // 801E1C14
  c->f[5]=c->f[13]*c->f[5]; // 801E1C18
  c->f[6]=c->f[10]+c->f[6]; // 801E1C1C
  c->f[4]=c->f[4]+c->f[5]; // 801E1C20
  c->f[5]=c->f[13]*c->f[6]; // 801E1C24
  c->f[4]=c->f[13]*c->f[4]; // 801E1C28
  c->f[5]=c->f[9]+c->f[5]; // 801E1C2C
  c->f[3]=c->f[3]+c->f[4]; // 801E1C30
  c->f[4]=c->f[13]*c->f[5]; // 801E1C34
  c->f[3]=c->f[13]*c->f[3]; // 801E1C38
  c->f[4]=c->f[8]+c->f[4]; // 801E1C3C
  c->f[2]=c->f[2]+c->f[3]; // 801E1C40
  c->f[3]=c->f[13]*c->f[4]; // 801E1C44
  c->f[4]=c->f[13]*c->f[2]; // 801E1C48
  c->f[2]=c->f[7]+c->f[3]; // 801E1C4C
  c->f[0]=c->f[0]*c->f[2]; // 801E1C50
  if (!crb(c,0)) { goto L_801E1C68; } // 801E1C54
  c->f[0]=c->f[0]+c->f[4]; // 801E1C58
  c->f[0]=c->f[1]*c->f[0]; // 801E1C5C
  c->f[1]=c->f[1]-c->f[0]; // 801E1C60
  goto L_801E1C9C; // 801E1C64
L_801E1C68:;
  c->f[0]=c->f[0]+c->f[4]; // 801E1C68
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E1C6C
  c->r[3]=c->r[5]+0x00000020u; // 801E1C70
  c->r[4]=c->r[5]+0x00000000u; // 801E1C74
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=RF64(ea);} // 801E1C78
  cmps(c,0,(int32_t)c->r[6],0); // 801E1C7C
  c->f[3]=c->f[1]*c->f[0]; // 801E1C80
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=RF64(ea);} // 801E1C84
  c->f[2]=c->f[3]-c->f[2]; // 801E1C88
  c->f[1]=c->f[2]-c->f[1]; // 801E1C8C
  c->f[1]=c->f[0]-c->f[1]; // 801E1C90
  if (!crb(c,0)) { goto L_801E1C9C; } // 801E1C94
  c->f[1]=-c->f[1]; // 801E1C98
L_801E1C9C:;
  c->r[1]=c->r[1]+0x00000010u; // 801E1C9C
  return; // 801E1CA0
}

// copysign
void f_801E1CA4(Ctx* __restrict c) {
  trace_call(0x801E1CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1CA4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E1CA8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 801E1CAC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E1CB0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801E1CB4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801E1CB8
  c->r[0]=(rotl(c->r[3],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 801E1CBC
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E1CC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E1CC4
  c->r[1]=c->r[1]+0x00000020u; // 801E1CC8
  return; // 801E1CCC
}

// fn_801E1CD0
void f_801E1CD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1CD0
  c->r[0]=c->lr; // 801E1CD4
  c->r[3]=0u+0x3FE90000u; // 801E1CD8
  {uint32_t ea=c->r[2]+0xFFFFB2D0u; c->f[2]=RF64(ea);} // 801E1CDC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E1CE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1CE4
  c->r[0]=c->r[3]+0x000021FBu; // 801E1CE8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E1CEC
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801E1CF0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E1CF4
  if (crb(c,1)) { goto L_801E1D04; } // 801E1CF8
  c->lr=0x801E1D00u; f_801DFF9C(c); // 801E1CFC
  goto L_801E1D88; // 801E1D00
L_801E1D04:;
  c->r[0]=0u+0x7FF00000u; // 801E1D04
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E1D08
  if (crb(c,0)) { goto L_801E1D18; } // 801E1D0C
  c->f[1]=c->f[1]-c->f[1]; // 801E1D10
  goto L_801E1D88; // 801E1D14
L_801E1D18:;
  c->r[3]=c->r[1]+0x00000010u; // 801E1D18
  c->lr=0x801E1D20u; f_801DFC18(c); // 801E1D1C
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 801E1D20
  if (crb(c,2)) { goto L_801E1D3C; } // 801E1D24
  cmps(c,0,(int32_t)c->r[0],1); // 801E1D28
  if (crb(c,2)) { goto L_801E1D4C; } // 801E1D2C
  cmps(c,0,(int32_t)c->r[0],2); // 801E1D30
  if (crb(c,2)) { goto L_801E1D64; } // 801E1D34
  goto L_801E1D78; // 801E1D38
L_801E1D3C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E1D3C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E1D40
  c->lr=0x801E1D48u; f_801DFF9C(c); // 801E1D44
  goto L_801E1D88; // 801E1D48
L_801E1D4C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E1D4C
  c->r[3]=0u+0x00000001u; // 801E1D50
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E1D54
  c->lr=0x801E1D5Cu; f_801E1764(c); // 801E1D58
  c->f[1]=-c->f[1]; // 801E1D5C
  goto L_801E1D88; // 801E1D60
L_801E1D64:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E1D64
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E1D68
  c->lr=0x801E1D70u; f_801DFF9C(c); // 801E1D6C
  c->f[1]=-c->f[1]; // 801E1D70
  goto L_801E1D88; // 801E1D74
L_801E1D78:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E1D78
  c->r[3]=0u+0x00000001u; // 801E1D7C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E1D80
  c->lr=0x801E1D88u; f_801E1764(c); // 801E1D84
L_801E1D88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1D88
  c->lr=c->r[0]; // 801E1D8C
  c->r[1]=c->r[1]+0x00000020u; // 801E1D90
  return; // 801E1D94
}

// fn_801E1D98
void f_801E1D98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1D98
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E1D9C
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E1DA0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801E1DA4
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 801E1DA8
  c->r[7]=c->r[3]+0xFFFFFC01u; // 801E1DAC
  cmps(c,0,(int32_t)c->r[7],52); // 801E1DB0
  if (!crb(c,0)) { goto L_801E1DCC; } // 801E1DB4
  cmps(c,1,(int32_t)c->r[7],20); // 801E1DB8
  if (!crb(c,4)) { goto L_801E1E70; } // 801E1DBC
  cmps(c,0,(int32_t)c->r[7],0); // 801E1DC0
  if (!crb(c,0)) { goto L_801E1E18; } // 801E1DC4
  goto L_801E1DD8; // 801E1DC8
L_801E1DCC:;
  cmps(c,0,(int32_t)c->r[7],1024); // 801E1DCC
  if (crb(c,2)) { goto L_801E1E64; } // 801E1DD0
  goto L_801E1EE0; // 801E1DD4
L_801E1DD8:;
  {uint32_t ea=c->r[2]+0xFFFFB2D8u; c->f[2]=RF64(ea);} // 801E1DD8
  {uint32_t ea=c->r[2]+0xFFFFB2E0u; c->f[0]=RF64(ea);} // 801E1DDC
  c->f[1]=c->f[2]+c->f[1]; // 801E1DE0
  fcmp(c,0,c->f[1],c->f[0]); // 801E1DE4
  if (!crb(c,1)) { goto L_801E1ED4; } // 801E1DE8
  cmps(c,0,(int32_t)c->r[5],0); // 801E1DEC
  if (crb(c,0)) { goto L_801E1E00; } // 801E1DF0
  c->r[6]=0u+0x00000000u; // 801E1DF4
  c->r[5]=0u+0x00000000u; // 801E1DF8
  goto L_801E1ED4; // 801E1DFC
L_801E1E00:;
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801E1E00
  c->r[0]=c->r[0]|c->r[6]; cr0(c,c->r[0]); // 801E1E04
  if (crb(c,2)) { goto L_801E1ED4; } // 801E1E08
  c->r[5]=0u+0xBFF00000u; // 801E1E0C
  c->r[6]=0u+0x00000000u; // 801E1E10
  goto L_801E1ED4; // 801E1E14
L_801E1E18:;
  c->r[3]=0u+0x00100000u; // 801E1E18
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E1E1C
  c->r[4]=sraw(c,c->r[0],(c->r[7])&63); // 801E1E20
  c->r[0]=c->r[5]&c->r[4]; // 801E1E24
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 801E1E28
  if (!crb(c,2)) { goto L_801E1E34; } // 801E1E2C
  goto L_801E1EE0; // 801E1E30
L_801E1E34:;
  {uint32_t ea=c->r[2]+0xFFFFB2D8u; c->f[2]=RF64(ea);} // 801E1E34
  {uint32_t ea=c->r[2]+0xFFFFB2E0u; c->f[0]=RF64(ea);} // 801E1E38
  c->f[1]=c->f[2]+c->f[1]; // 801E1E3C
  fcmp(c,0,c->f[1],c->f[0]); // 801E1E40
  if (!crb(c,1)) { goto L_801E1ED4; } // 801E1E44
  cmps(c,0,(int32_t)c->r[5],0); // 801E1E48
  if (!crb(c,0)) { goto L_801E1E58; } // 801E1E4C
  c->r[0]=sraw(c,c->r[3],(c->r[7])&63); // 801E1E50
  c->r[5]=c->r[5]+c->r[0]; // 801E1E54
L_801E1E58:;
  c->r[5]=c->r[5]&~c->r[4]; // 801E1E58
  c->r[6]=0u+0x00000000u; // 801E1E5C
  goto L_801E1ED4; // 801E1E60
L_801E1E64:;
  c->f[1]=c->f[1]+c->f[1]; // 801E1E64
  goto L_801E1EE0; // 801E1E68
  goto L_801E1EE0; // 801E1E6C
L_801E1E70:;
  c->r[0]=c->r[7]+0xFFFFFFECu; // 801E1E70
  c->r[3]=0u+0xFFFFFFFFu; // 801E1E74
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 801E1E78
  c->r[0]=c->r[6]&c->r[4]; cr0(c,c->r[0]); // 801E1E7C
  if (!crb(c,2)) { goto L_801E1E88; } // 801E1E80
  goto L_801E1EE0; // 801E1E84
L_801E1E88:;
  {uint32_t ea=c->r[2]+0xFFFFB2D8u; c->f[2]=RF64(ea);} // 801E1E88
  {uint32_t ea=c->r[2]+0xFFFFB2E0u; c->f[0]=RF64(ea);} // 801E1E8C
  c->f[1]=c->f[2]+c->f[1]; // 801E1E90
  fcmp(c,0,c->f[1],c->f[0]); // 801E1E94
  if (!crb(c,1)) { goto L_801E1ED4; } // 801E1E98
  cmps(c,0,(int32_t)c->r[5],0); // 801E1E9C
  if (!crb(c,0)) { goto L_801E1ED0; } // 801E1EA0
  if (!crb(c,6)) { goto L_801E1EB0; } // 801E1EA4
  c->r[5]=c->r[5]+0x00000001u; // 801E1EA8
  goto L_801E1ED0; // 801E1EAC
L_801E1EB0:;
  c->r[0]=addc(c,~c->r[7],0x00000034u,1); // 801E1EB0
  c->r[3]=0u+0x00000001u; // 801E1EB4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E1EB8
  c->r[0]=c->r[6]+c->r[0]; // 801E1EBC
  cmpu(c,0,c->r[0],c->r[6]); // 801E1EC0
  if (!crb(c,0)) { goto L_801E1ECC; } // 801E1EC4
  c->r[5]=c->r[5]+0x00000001u; // 801E1EC8
L_801E1ECC:;
  c->r[6]=c->r[0]|c->r[0]; // 801E1ECC
L_801E1ED0:;
  c->r[6]=c->r[6]&~c->r[4]; // 801E1ED0
L_801E1ED4:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 801E1ED4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801E1ED8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E1EDC
L_801E1EE0:;
  c->r[1]=c->r[1]+0x00000010u; // 801E1EE0
  return; // 801E1EE4
}

// frexp
void f_801E1EE8(Ctx* __restrict c) {
  trace_call(0x801E1EE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1EE8
  c->r[4]=0u+0x00000000u; // 801E1EEC
  c->r[0]=0u+0x7FF00000u; // 801E1EF0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E1EF4
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E1EF8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E1EFC
  c->r[4]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801E1F00
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 801E1F04
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1F08
  if (!crb(c,0)) { goto L_801E1F68; } // 801E1F0C
  c->r[0]=c->r[4]|c->r[6]; cr0(c,c->r[0]); // 801E1F10
  if (!crb(c,2)) { goto L_801E1F1C; } // 801E1F14
  goto L_801E1F68; // 801E1F18
L_801E1F1C:;
  c->r[0]=0u+0x00100000u; // 801E1F1C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E1F20
  if (!crb(c,0)) { goto L_801E1F44; } // 801E1F24
  {uint32_t ea=c->r[2]+0xFFFFB2E8u; c->f[0]=RF64(ea);} // 801E1F28
  c->r[0]=0u+0xFFFFFFCAu; // 801E1F2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E1F30
  c->f[1]=c->f[1]*c->f[0]; // 801E1F34
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E1F38
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E1F3C
  c->r[4]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801E1F40
L_801E1F44:;
  c->r[0]=rotl(c->r[5],0)&0x800FFFFFu; // 801E1F44
  c->r[5]=R32(c->r[3]+0x00000000u); // 801E1F48
  c->r[4]=sraw(c,c->r[4],20); // 801E1F4C
  c->r[0]=c->r[0]|0x3FE00000u; // 801E1F50
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E1F54
  c->r[4]=c->r[4]+c->r[5]; // 801E1F58
  c->r[0]=c->r[4]+0xFFFFFC02u; // 801E1F5C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E1F60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E1F64
L_801E1F68:;
  c->r[1]=c->r[1]+0x00000010u; // 801E1F68
  return; // 801E1F6C
}

// ldexp
void f_801E1F70(Ctx* __restrict c) {
  trace_call(0x801E1F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1F70
  c->r[0]=c->lr; // 801E1F74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1F78
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801E1F7C
  c->f[31]=c->f[1]; // 801E1F80
  W32(c->r[1]+0x00000014u,c->r[31]); // 801E1F84
  c->r[31]=c->r[3]|c->r[3]; // 801E1F88
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E1F8C
  c->lr=0x801E1F94u; f_801D930C(c); // 801E1F90
  cmps(c,0,(int32_t)c->r[3],2); // 801E1F94
  if (!crb(c,1)) { goto L_801E1FA8; } // 801E1F98
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[0]=RF64(ea);} // 801E1F9C
  fcmp(c,0,c->f[0],c->f[31]); // 801E1FA0
  if (!crb(c,2)) { goto L_801E1FB0; } // 801E1FA4
L_801E1FA8:;
  c->f[1]=c->f[31]; // 801E1FA8
  goto L_801E20C4; // 801E1FAC
L_801E1FB0:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E1FB0
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E1FB4
  c->r[4]=rotl(c->r[5],12)&0x000007FFu; cr0(c,c->r[4]); // 801E1FB8
  if (!crb(c,2)) { goto L_801E2008; } // 801E1FBC
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 801E1FC0
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 801E1FC4
  if (!crb(c,2)) { goto L_801E1FD4; } // 801E1FC8
  c->f[1]=c->f[31]; // 801E1FCC
  goto L_801E20C4; // 801E1FD0
L_801E1FD4:;
  {uint32_t ea=c->r[2]+0xFFFFB2F8u; c->f[0]=RF64(ea);} // 801E1FD4
  c->r[3]=0u+0xFFFF0000u; // 801E1FD8
  c->r[0]=c->r[3]+0x00003CB0u; // 801E1FDC
  c->f[31]=c->f[31]*c->f[0]; // 801E1FE0
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801E1FE4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801E1FE8
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E1FEC
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 801E1FF0
  c->r[4]=c->r[3]+0xFFFFFFCAu; // 801E1FF4
  if (!crb(c,0)) { goto L_801E2008; } // 801E1FF8
  {uint32_t ea=c->r[2]+0xFFFFB300u; c->f[0]=RF64(ea);} // 801E1FFC
  c->f[1]=c->f[0]*c->f[31]; // 801E2000
  goto L_801E20C4; // 801E2004
L_801E2008:;
  cmps(c,0,(int32_t)c->r[4],2047); // 801E2008
  if (!crb(c,2)) { goto L_801E2018; } // 801E200C
  c->f[1]=c->f[31]+c->f[31]; // 801E2010
  goto L_801E20C4; // 801E2014
L_801E2018:;
  c->r[4]=c->r[4]+c->r[31]; // 801E2018
  cmps(c,0,(int32_t)c->r[4],2046); // 801E201C
  if (!crb(c,1)) { goto L_801E203C; } // 801E2020
  c->f[2]=c->f[31]; // 801E2024
  {uint32_t ea=c->r[2]+0xFFFFB308u; c->f[1]=RF64(ea);} // 801E2028
  c->lr=0x801E2030u; f_801E1CA4(c); // 801E202C
  {uint32_t ea=c->r[2]+0xFFFFB308u; c->f[0]=RF64(ea);} // 801E2030
  c->f[1]=c->f[0]*c->f[1]; // 801E2034
  goto L_801E20C4; // 801E2038
L_801E203C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E203C
  if (!crb(c,1)) { goto L_801E205C; } // 801E2040
  c->r[3]=rotl(c->r[5],0)&0x800FFFFFu; // 801E2044
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 801E2048
  c->r[0]=c->r[3]|c->r[0]; // 801E204C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E2050
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 801E2054
  goto L_801E20C4; // 801E2058
L_801E205C:;
  cmps(c,0,(int32_t)c->r[4],-54); // 801E205C
  if (crb(c,1)) { goto L_801E20A4; } // 801E2060
  c->r[3]=0u+0x00010000u; // 801E2064
  c->r[0]=c->r[3]+0xFFFFC350u; // 801E2068
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801E206C
  if (!crb(c,1)) { goto L_801E208C; } // 801E2070
  c->f[2]=c->f[31]; // 801E2074
  {uint32_t ea=c->r[2]+0xFFFFB308u; c->f[1]=RF64(ea);} // 801E2078
  c->lr=0x801E2080u; f_801E1CA4(c); // 801E207C
  {uint32_t ea=c->r[2]+0xFFFFB308u; c->f[0]=RF64(ea);} // 801E2080
  c->f[1]=c->f[0]*c->f[1]; // 801E2084
  goto L_801E20C4; // 801E2088
L_801E208C:;
  c->f[2]=c->f[31]; // 801E208C
  {uint32_t ea=c->r[2]+0xFFFFB300u; c->f[1]=RF64(ea);} // 801E2090
  c->lr=0x801E2098u; f_801E1CA4(c); // 801E2094
  {uint32_t ea=c->r[2]+0xFFFFB300u; c->f[0]=RF64(ea);} // 801E2098
  c->f[1]=c->f[0]*c->f[1]; // 801E209C
  goto L_801E20C4; // 801E20A0
L_801E20A4:;
  c->r[0]=c->r[4]+0x00000036u; // 801E20A4
  c->r[3]=rotl(c->r[5],0)&0x800FFFFFu; // 801E20A8
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 801E20AC
  {uint32_t ea=c->r[2]+0xFFFFB310u; c->f[1]=RF64(ea);} // 801E20B0
  c->r[0]=c->r[3]|c->r[0]; // 801E20B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 801E20B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E20BC
  c->f[1]=c->f[1]*c->f[0]; // 801E20C0
L_801E20C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E20C4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801E20C8
  c->r[31]=R32(c->r[1]+0x00000014u); // 801E20CC
  c->lr=c->r[0]; // 801E20D0
  c->r[1]=c->r[1]+0x00000020u; // 801E20D4
  return; // 801E20D8
}

// fn_801E20DC
void f_801E20DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E20DC
  c->r[0]=c->lr; // 801E20E0
  c->r[3]=0u+0x3FE90000u; // 801E20E4
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[2]=RF64(ea);} // 801E20E8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E20EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E20F0
  c->r[0]=c->r[3]+0x000021FBu; // 801E20F4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E20F8
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801E20FC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E2100
  if (crb(c,1)) { goto L_801E2114; } // 801E2104
  c->r[3]=0u+0x00000000u; // 801E2108
  c->lr=0x801E2110u; f_801E1764(c); // 801E210C
  goto L_801E2198; // 801E2110
L_801E2114:;
  c->r[0]=0u+0x7FF00000u; // 801E2114
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E2118
  if (crb(c,0)) { goto L_801E2128; } // 801E211C
  c->f[1]=c->f[1]-c->f[1]; // 801E2120
  goto L_801E2198; // 801E2124
L_801E2128:;
  c->r[3]=c->r[1]+0x00000010u; // 801E2128
  c->lr=0x801E2130u; f_801DFC18(c); // 801E212C
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 801E2130
  if (crb(c,2)) { goto L_801E214C; } // 801E2134
  cmps(c,0,(int32_t)c->r[0],1); // 801E2138
  if (crb(c,2)) { goto L_801E2160; } // 801E213C
  cmps(c,0,(int32_t)c->r[0],2); // 801E2140
  if (crb(c,2)) { goto L_801E2170; } // 801E2144
  goto L_801E2188; // 801E2148
L_801E214C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E214C
  c->r[3]=0u+0x00000001u; // 801E2150
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E2154
  c->lr=0x801E215Cu; f_801E1764(c); // 801E2158
  goto L_801E2198; // 801E215C
L_801E2160:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E2160
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E2164
  c->lr=0x801E216Cu; f_801DFF9C(c); // 801E2168
  goto L_801E2198; // 801E216C
L_801E2170:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E2170
  c->r[3]=0u+0x00000001u; // 801E2174
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E2178
  c->lr=0x801E2180u; f_801E1764(c); // 801E217C
  c->f[1]=-c->f[1]; // 801E2180
  goto L_801E2198; // 801E2184
L_801E2188:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E2188
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E218C
  c->lr=0x801E2194u; f_801DFF9C(c); // 801E2190
  c->f[1]=-c->f[1]; // 801E2194
L_801E2198:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2198
  c->lr=c->r[0]; // 801E219C
  c->r[1]=c->r[1]+0x00000020u; // 801E21A0
  return; // 801E21A4
}

// tan
void f_801E21A8(Ctx* __restrict c) {
  trace_call(0x801E21A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E21A8
  c->r[0]=c->lr; // 801E21AC
  c->r[3]=0u+0x3FE90000u; // 801E21B0
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[2]=RF64(ea);} // 801E21B4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E21B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E21BC
  c->r[0]=c->r[3]+0x000021FBu; // 801E21C0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E21C4
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 801E21C8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E21CC
  if (crb(c,1)) { goto L_801E21E0; } // 801E21D0
  c->r[3]=0u+0x00000001u; // 801E21D4
  c->lr=0x801E21DCu; f_801E1824(c); // 801E21D8
  goto L_801E2210; // 801E21DC
L_801E21E0:;
  c->r[0]=0u+0x7FF00000u; // 801E21E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801E21E4
  if (crb(c,0)) { goto L_801E21F4; } // 801E21E8
  c->f[1]=c->f[1]-c->f[1]; // 801E21EC
  goto L_801E2210; // 801E21F0
L_801E21F4:;
  c->r[3]=c->r[1]+0x00000010u; // 801E21F4
  c->lr=0x801E21FCu; f_801DFC18(c); // 801E21F8
  c->r[0]=rotl(c->r[3],1)&0x00000002u; // 801E21FC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E2200
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 801E2204
  c->r[3]=addc(c,~c->r[0],0x00000001u,1); // 801E2208
  c->lr=0x801E2210u; f_801E1824(c); // 801E220C
L_801E2210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2210
  c->lr=c->r[0]; // 801E2214
  c->r[1]=c->r[1]+0x00000020u; // 801E2218
  return; // 801E221C
}

// fn_801E2220
void f_801E2220(Ctx* __restrict c) {
  f_801DE798(c); return; // 801E2220
}

// fn_801E2224
void f_801E2224(Ctx* __restrict c) {
  f_801DEA64(c); return; // 801E2224
}

// fn_801E2228
void f_801E2228(Ctx* __restrict c) {
  f_801DECBC(c); return; // 801E2228
}

// fn_801E222C
void f_801E222C(Ctx* __restrict c) {
  f_801DF2F0(c); return; // 801E222C
}

// fn_801E2230
void f_801E2230(Ctx* __restrict c) {
  f_801DF404(c); return; // 801E2230
}

// fn_801E2234
void f_801E2234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2234
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 801E2238
  c->r[6]=R32(c->r[1]+0x00000008u); // 801E223C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E2240
  c->r[3]=rotl(c->r[6],0)&0x7FF00000u; // 801E2244
  c->r[3]=c->r[3]+0x80100000u; // 801E2248
  cmpu(c,0,c->r[3],0x00000000u); // 801E224C
  if (!crb(c,2)) { goto L_801E2268; } // 801E2250
  c->f[0]=c->f[1]*c->f[1]; // 801E2254
  c->r[0]=0u+0x00000021u; // 801E2258
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801E225C
  c->f[1]=c->f[1]+c->f[0]; // 801E2260
  goto L_801E2474; // 801E2264
L_801E2268:;
  cmps(c,1,(int32_t)c->r[6],0); // 801E2268
  if (crb(c,5)) { goto L_801E2298; } // 801E226C
  c->r[3]=rotl(c->r[6],0)&0x7FFFFFFFu; // 801E2270
  c->r[3]=c->r[0]|c->r[3]; cr0(c,c->r[3]); // 801E2274
  if (!crb(c,2)) { goto L_801E2280; } // 801E2278
  goto L_801E2474; // 801E227C
L_801E2280:;
  if (!crb(c,4)) { goto L_801E2298; } // 801E2280
  c->r[3]=0u+0x802E0000u; // 801E2284
  c->r[0]=0u+0x00000021u; // 801E2288
  W32(c->r[13]+0xFFFFB770u,c->r[0]); // 801E228C
  {uint32_t ea=c->r[3]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E2290
  goto L_801E2474; // 801E2294
L_801E2298:;
  c->r[3]=sraw(c,c->r[6],20); cr0(c,c->r[3]); // 801E2298
  if (!crb(c,2)) { goto L_801E22EC; } // 801E229C
  goto L_801E22B4; // 801E22A0
L_801E22A4:;
  c->r[4]=rotl(c->r[0],21)&0x001FFFFFu; // 801E22A4
  c->r[0]=rotl(c->r[0],21)&0xFFE00000u; // 801E22A8
  c->r[6]=c->r[6]|c->r[4]; // 801E22AC
  c->r[3]=c->r[3]+0xFFFFFFEBu; // 801E22B0
L_801E22B4:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E22B4
  if (crb(c,2)) { IRQCHK(c); goto L_801E22A4; } // 801E22B8
  c->r[7]=0u+0x00000000u; // 801E22BC
  goto L_801E22CC; // 801E22C0
L_801E22C4:;
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801E22C4
  c->r[7]=c->r[7]+0x00000001u; // 801E22C8
L_801E22CC:;
  c->r[4]=rotl(c->r[6],0)&0x00100000u; cr0(c,c->r[4]); // 801E22CC
  if (crb(c,2)) { IRQCHK(c); goto L_801E22C4; } // 801E22D0
  c->r[4]=addc(c,~c->r[7],0x00000020u,1); // 801E22D4
  c->r[5]=c->r[7]+0xFFFFFFFFu; // 801E22D8
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 801E22DC
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 801E22E0
  c->r[3]=c->r[3]-c->r[5]; // 801E22E4
  c->r[6]=c->r[6]|c->r[4]; // 801E22E8
L_801E22EC:;
  c->r[4]=c->r[3]+0xFFFFFC01u; // 801E22EC
  c->r[5]=rotl(c->r[6],0)&0x000FFFFFu; // 801E22F0
  c->r[4]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[4]); // 801E22F4
  c->r[6]=c->r[5]|0x00100000u; // 801E22F8
  if (crb(c,2)) { goto L_801E2310; } // 801E22FC
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801E2300
  c->r[4]=c->r[6]+c->r[6]; // 801E2304
  c->r[6]=c->r[5]+c->r[4]; // 801E2308
  c->r[0]=c->r[0]+c->r[0]; // 801E230C
L_801E2310:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801E2310
  c->r[4]=c->r[6]+c->r[6]; // 801E2314
  c->r[6]=c->r[5]+c->r[4]; // 801E2318
  c->r[0]=c->r[0]+c->r[0]; // 801E231C
  c->r[9]=0u+0x00000000u; // 801E2320
  c->r[11]=0u+0x00000000u; // 801E2324
  c->r[10]=0u+0x00000000u; // 801E2328
  c->r[12]=0u+0x00000000u; // 801E232C
  c->r[7]=0u+0x00200000u; // 801E2330
  goto L_801E2364; // 801E2334
L_801E2338:;
  c->r[4]=c->r[11]+c->r[7]; // 801E2338
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801E233C
  if (crb(c,1)) { goto L_801E2350; } // 801E2340
  c->r[11]=c->r[4]+c->r[7]; // 801E2344
  c->r[6]=c->r[6]-c->r[4]; // 801E2348
  c->r[12]=c->r[12]+c->r[7]; // 801E234C
L_801E2350:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801E2350
  c->r[4]=c->r[6]+c->r[6]; // 801E2354
  c->r[6]=c->r[5]+c->r[4]; // 801E2358
  c->r[0]=c->r[0]+c->r[0]; // 801E235C
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 801E2360
L_801E2364:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E2364
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2338; } // 801E2368
  c->r[7]=0u+0x80000000u; // 801E236C
  goto L_801E23DC; // 801E2370
L_801E2374:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[6]); // 801E2374
  c->r[5]=c->r[11]|c->r[11]; // 801E2378
  c->r[8]=c->r[9]+c->r[7]; // 801E237C
  if (crb(c,0)) { goto L_801E2390; } // 801E2380
  if (!crb(c,2)) { goto L_801E23C8; } // 801E2384
  cmpu(c,0,c->r[8],c->r[0]); // 801E2388
  if (crb(c,1)) { goto L_801E23C8; } // 801E238C
L_801E2390:;
  c->r[4]=rotl(c->r[8],0)&0x80000000u; // 801E2390
  c->r[9]=c->r[8]+c->r[7]; // 801E2394
  c->r[4]=c->r[4]+0x80000000u; // 801E2398
  cmpu(c,0,c->r[4],0x00000000u); // 801E239C
  if (!crb(c,2)) { goto L_801E23B0; } // 801E23A0
  c->r[4]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[4]); // 801E23A4
  if (!crb(c,2)) { goto L_801E23B0; } // 801E23A8
  c->r[11]=c->r[11]+0x00000001u; // 801E23AC
L_801E23B0:;
  cmpu(c,0,c->r[0],c->r[8]); // 801E23B0
  c->r[6]=c->r[6]-c->r[5]; // 801E23B4
  if (!crb(c,0)) { goto L_801E23C0; } // 801E23B8
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 801E23BC
L_801E23C0:;
  c->r[0]=c->r[0]-c->r[8]; // 801E23C0
  c->r[10]=c->r[10]+c->r[7]; // 801E23C4
L_801E23C8:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801E23C8
  c->r[4]=c->r[6]+c->r[6]; // 801E23CC
  c->r[6]=c->r[5]+c->r[4]; // 801E23D0
  c->r[0]=c->r[0]+c->r[0]; // 801E23D4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 801E23D8
L_801E23DC:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E23DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2374; } // 801E23E0
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 801E23E4
  if (crb(c,2)) { goto L_801E2440; } // 801E23E8
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=RF64(ea);} // 801E23EC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801E23F0
  fcmp(c,0,c->f[0],c->f[0]); // 801E23F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801E23F8
  if (!crb(c,2)) { goto L_801E2440; } // 801E23FC
  c->r[0]=c->r[10]+0x00010000u; // 801E2400
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801E2404
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E2408
  if (!crb(c,2)) { goto L_801E241C; } // 801E240C
  c->r[10]=0u+0x00000000u; // 801E2410
  c->r[12]=c->r[12]+0x00000001u; // 801E2414
  goto L_801E2440; // 801E2418
L_801E241C:;
  fcmp(c,0,c->f[0],c->f[0]); // 801E241C
  if (!crb(c,1)) { goto L_801E2438; } // 801E2420
  cmpu(c,0,c->r[0],0x0000FFFEu); // 801E2424
  if (!crb(c,2)) { goto L_801E2430; } // 801E2428
  c->r[12]=c->r[12]+0x00000001u; // 801E242C
L_801E2430:;
  c->r[10]=c->r[10]+0x00000002u; // 801E2430
  goto L_801E2440; // 801E2434
L_801E2438:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; // 801E2438
  c->r[10]=c->r[10]+c->r[0]; // 801E243C
L_801E2440:;
  c->r[0]=rotl(c->r[12],0)&0x00000001u; // 801E2440
  c->r[4]=sraw(c,c->r[12],1); // 801E2444
  cmps(c,0,(int32_t)c->r[0],1); // 801E2448
  c->r[5]=rotl(c->r[10],31)&0x7FFFFFFFu; // 801E244C
  c->r[4]=c->r[4]+0x3FE00000u; // 801E2450
  if (!crb(c,2)) { goto L_801E245C; } // 801E2454
  c->r[5]=c->r[5]|0x80000000u; // 801E2458
L_801E245C:;
  c->r[0]=c->r[3]+0xFFFFFC01u; // 801E245C
  W32(c->r[1]+0x00000014u,c->r[5]); // 801E2460
  c->r[0]=rotl(c->r[0],19)&0xFFF00000u; // 801E2464
  c->r[4]=c->r[4]+c->r[0]; // 801E2468
  W32(c->r[1]+0x00000010u,c->r[4]); // 801E246C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801E2470
L_801E2474:;
  c->r[1]=c->r[1]+0x00000020u; // 801E2474
  return; // 801E2478
}

// fn_801E247C
void f_801E247C(Ctx* __restrict c) {
  f_801E2234(c); return; // 801E247C
}

// fn_801E2480
void f_801E2480(Ctx* __restrict c) {
  c->r[5]=0u+0x80250000u; // 801E2480
  c->r[5]=c->r[5]+0xFFFF9CF8u; // 801E2484
  c->r[6]=R32(c->r[5]+0x00000038u); // 801E2488
L_801E248C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E248C
  c->r[5]=0u+0x00000001u; // 801E2490
  c->r[3]=c->r[3]+0x00000001u; // 801E2494
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E2498
  cmpu(c,0,c->r[7],0x000000FFu); // 801E249C
  if (crb(c,1)) { goto L_801E24A8; } // 801E24A0
  c->r[5]=0u+0x00000000u; // 801E24A4
L_801E24A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E24A8
  if (crb(c,2)) { goto L_801E24B4; } // 801E24AC
  goto L_801E24BC; // 801E24B0
L_801E24B4:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 801E24B4
  c->r[7]=R8(c->r[5]+c->r[7]); // 801E24B8
L_801E24BC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E24BC
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 801E24C0
  c->r[5]=0u+0x00000001u; // 801E24C4
  c->r[4]=c->r[4]+0x00000001u; // 801E24C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E24CC
  cmpu(c,0,c->r[0],0x000000FFu); // 801E24D0
  if (crb(c,1)) { goto L_801E24DC; } // 801E24D4
  c->r[5]=0u+0x00000000u; // 801E24D8
L_801E24DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E24DC
  if (crb(c,2)) { goto L_801E24E8; } // 801E24E0
  goto L_801E24F0; // 801E24E4
L_801E24E8:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 801E24E8
  c->r[0]=R8(c->r[5]+c->r[0]); // 801E24EC
L_801E24F0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E24F0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801E24F4
  if (!crb(c,0)) { goto L_801E2504; } // 801E24F8
  c->r[3]=0u+0xFFFFFFFFu; // 801E24FC
  return; // 801E2500
L_801E2504:;
  if (!crb(c,1)) { goto L_801E2510; } // 801E2504
  c->r[3]=0u+0x00000001u; // 801E2508
  return; // 801E250C
L_801E2510:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E2510
  if (!crb(c,2)) { IRQCHK(c); goto L_801E248C; } // 801E2514
  c->r[3]=0u+0x00000000u; // 801E2518
  return; // 801E251C
}

// fn_801E2520
void f_801E2520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2520
  c->r[0]=c->lr; // 801E2524
  c->r[3]=0u+0x80250000u; // 801E2528
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E252C
  c->r[3]=c->r[3]+0xFFFFA230u; // 801E2530
  c->r[0]=0u+0x00000000u; // 801E2534
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801E2538
  W32(c->r[1]+0x00000038u,c->r[30]); // 801E253C
  c->r[30]=c->r[1]+0x00000018u; // 801E2540
  W32(c->r[1]+0x00000034u,c->r[29]); // 801E2544
  c->r[29]=c->r[4]|c->r[4]; // 801E2548
  W32(c->r[1]+0x00000018u,c->r[3]); // 801E254C
  c->r[3]=c->r[29]|c->r[29]; // 801E2550
  W8(c->r[1]+0x00000008u,c->r[0]); // 801E2554
  c->lr=0x801E255Cu; f_801D4D44(c); // 801E2558
  c->r[3]=c->r[3]+0x00000001u; // 801E255C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E2560
  c->r[3]=c->r[0]-c->r[3]; // 801E2564
  c->lr=0x801E256Cu; f_800D9140(c); // 801E2568
  c->r[0]=c->r[1]+0x00000008u; // 801E256C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801E2570
  c->r[31]=c->r[3]|c->r[3]; // 801E2574
  W32(c->r[1]+0x00000010u,c->r[3]); // 801E2578
  c->r[3]=0u+0x00000010u; // 801E257C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2580
  c->lr=0x801E2588u; f_800D8ED0(c); // 801E2584
  cmps(c,0,(int32_t)c->r[3],0); // 801E2588
  if (crb(c,2)) { goto L_801E25AC; } // 801E258C
  c->r[0]=0u+0x00000001u; // 801E2590
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E2594
  c->r[4]=0u+0x80250000u; // 801E2598
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E259C
  c->r[4]=c->r[4]+0xFFFFA210u; // 801E25A0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E25A4
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801E25A8
L_801E25AC:;
  c->r[0]=0u+0x00000000u; // 801E25AC
  W32(c->r[1]+0x00000020u,c->r[3]); // 801E25B0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E25B4
  goto L_801E25C0; // 801E25B8
  c->lr=0x801E25C0u; f_800D9450(c); // 801E25BC
L_801E25C0:;
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801E25C0
  c->r[4]=c->r[29]|c->r[29]; // 801E25C4
  c->lr=0x801E25CCu; f_801DB988(c); // 801E25C8
  c->r[3]=0u+0x80200000u; // 801E25CC
  c->r[5]=0u+0x801E0000u; // 801E25D0
  c->r[4]=c->r[30]|c->r[30]; // 801E25D4
  c->r[3]=c->r[3]+0xFFFFB9B8u; // 801E25D8
  c->r[5]=c->r[5]+0x00002600u; // 801E25DC
  c->lr=0x801E25E4u; f_801D76B8(c); // 801E25E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E25E4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801E25E8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801E25EC
  c->r[29]=R32(c->r[1]+0x00000034u); // 801E25F0
  c->lr=c->r[0]; // 801E25F4
  c->r[1]=c->r[1]+0x00000040u; // 801E25F8
  return; // 801E25FC
}

// fn_801E2600
void f_801E2600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2600
  c->r[0]=c->lr; // 801E2604
  cmps(c,0,(int32_t)c->r[3],0); // 801E2608
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E260C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E2610
  c->r[31]=c->r[1]|c->r[1]; // 801E2614
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E2618
  c->r[30]=c->r[4]|c->r[4]; // 801E261C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E2620
  c->r[29]=c->r[3]|c->r[3]; // 801E2624
  if (crb(c,2)) { goto L_801E2668; } // 801E2628
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 801E262C
  if (crb(c,2)) { goto L_801E2658; } // 801E2630
  if (crb(c,2)) { goto L_801E2658; } // 801E2634
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E2638
  cmps(c,0,(int32_t)c->r[3],0); // 801E263C
  if (crb(c,2)) { goto L_801E2658; } // 801E2640
  c->lr=0x801E2648u; f_801E42EC(c); // 801E2644
  goto L_801E2658; // 801E2648
  c->r[3]=c->r[31]+0x00000008u; // 801E264C
  c->lr=0x801E2654u; f_801D6FB4(c); // 801E2650
L_801E2654:;
  IRQCHK(c); goto L_801E2654; // 801E2654
L_801E2658:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; cr0(c,c->r[0]); // 801E2658
  if (!crb(c,1)) { goto L_801E2668; } // 801E265C
  c->r[3]=c->r[29]|c->r[29]; // 801E2660
  c->lr=0x801E2668u; f_800D93B0(c); // 801E2664
L_801E2668:;
  c->r[10]=c->r[31]|c->r[31]; // 801E2668
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 801E266C
  c->r[3]=c->r[29]|c->r[29]; // 801E2670
  c->r[30]=R32(c->r[10]+0x00000028u); // 801E2674
  c->r[29]=R32(c->r[10]+0x00000024u); // 801E2678
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E267C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E2680
  c->r[1]=c->r[10]|c->r[10]; // 801E2684
  c->lr=c->r[0]; // 801E2688
  return; // 801E268C
}

// fn_801E2690
void f_801E2690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2690
  c->r[0]=c->lr; // 801E2694
  cmps(c,0,(int32_t)c->r[3],0); // 801E2698
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E269C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E26A0
  c->r[31]=c->r[1]|c->r[1]; // 801E26A4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E26A8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E26AC
  c->r[29]=c->r[4]|c->r[4]; // 801E26B0
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E26B4
  c->r[28]=c->r[3]|c->r[3]; // 801E26B8
  if (crb(c,2)) { goto L_801E2764; } // 801E26BC
  c->r[4]=0u+0x80250000u; // 801E26C0
  c->r[30]=R32(c->r[3]+0x00000008u); // 801E26C4
  c->r[4]=c->r[4]+0xFFFFA24Cu; // 801E26C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E26CC
  goto L_801E26FC; // 801E26D0
L_801E26D4:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801E26D4
  c->r[3]=R32(c->r[28]+0x00000004u); // 801E26D8
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801E26DC
  c->r[4]=c->r[28]|c->r[28]; // 801E26E0
  c->r[5]=c->r[3]+c->r[0]; // 801E26E4
  c->r[3]=0u+0x00000000u; // 801E26E8
  c->r[12]=R32(c->r[5]+0x00000000u); // 801E26EC
  c->r[5]=R32(c->r[5]+0x00000004u); // 801E26F0
  c->ctr=c->r[12]; // 801E26F4
  if (true) { c->lr=0x801E26FCu; dispatch(c,c->ctr); } // 801E26F8
L_801E26FC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E26FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E26D4; } // 801E2700
  c->r[30]=R32(c->r[28]+0x00000020u); // 801E2704
  cmps(c,0,(int32_t)c->r[30],0); // 801E2708
  if (crb(c,2)) { goto L_801E273C; } // 801E270C
  if (crb(c,2)) { goto L_801E2734; } // 801E2710
  c->r[3]=R32(c->r[30]+0x00000004u); // 801E2714
  cmps(c,0,(int32_t)c->r[3],0); // 801E2718
  if (crb(c,2)) { goto L_801E2734; } // 801E271C
  c->lr=0x801E2724u; f_801E42EC(c); // 801E2720
  goto L_801E2734; // 801E2724
  c->r[3]=c->r[31]+0x00000008u; // 801E2728
  c->lr=0x801E2730u; f_801D6FB4(c); // 801E272C
L_801E2730:;
  IRQCHK(c); goto L_801E2730; // 801E2730
L_801E2734:;
  c->r[3]=c->r[30]|c->r[30]; // 801E2734
  c->lr=0x801E273Cu; f_800D93B0(c); // 801E2738
L_801E273C:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 801E273C
  c->lr=0x801E2744u; f_800D96F0(c); // 801E2740
  c->r[3]=R32(c->r[28]+0x00000010u); // 801E2744
  c->lr=0x801E274Cu; f_800D96F0(c); // 801E2748
  c->r[3]=R32(c->r[28]+0x00000004u); // 801E274C
  c->lr=0x801E2754u; f_800D96F0(c); // 801E2750
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[29]; cr0(c,c->r[0]); // 801E2754
  if (!crb(c,1)) { goto L_801E2764; } // 801E2758
  c->r[3]=c->r[28]|c->r[28]; // 801E275C
  c->lr=0x801E2764u; f_800D93B0(c); // 801E2760
L_801E2764:;
  c->r[10]=c->r[31]|c->r[31]; // 801E2764
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 801E2768
  c->r[30]=R32(c->r[10]+0x00000028u); // 801E276C
  c->r[3]=c->r[28]|c->r[28]; // 801E2770
  c->r[29]=R32(c->r[10]+0x00000024u); // 801E2774
  c->r[28]=R32(c->r[10]+0x00000020u); // 801E2778
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E277C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E2780
  c->r[1]=c->r[10]|c->r[10]; // 801E2784
  c->lr=c->r[0]; // 801E2788
  return; // 801E278C
}

// fn_801E2790
void f_801E2790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2790
  c->r[0]=c->lr; // 801E2794
  c->r[7]=0u+0x00000000u; // 801E2798
  c->r[5]=0u+0x00001002u; // 801E279C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E27A0
  c->r[0]=cntlz(c->r[4]); // 801E27A4
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E27A8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801E27AC
  c->r[0]=0u+0x00000006u; // 801E27B0
  c->r[31]=c->r[1]|c->r[1]; // 801E27B4
  W32(c->r[1]+0x00000048u,c->r[30]); // 801E27B8
  W32(c->r[1]+0x00000044u,c->r[29]); // 801E27BC
  c->r[29]=c->r[3]|c->r[3]; // 801E27C0
  W32(c->r[3]+0x00000024u,c->r[4]); // 801E27C4
  W8(c->r[3]+0x00000033u,c->r[7]); // 801E27C8
  W8(c->r[3]+0x00000032u,c->r[6]); // 801E27CC
  W16(c->r[3]+0x00000030u,c->r[5]); // 801E27D0
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 801E27D4
  W32(c->r[3]+0x00000028u,c->r[0]); // 801E27D8
  W32(c->r[3]+0x00000004u,c->r[7]); // 801E27DC
  W32(c->r[3]+0x00000008u,c->r[7]); // 801E27E0
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 801E27E4
  W32(c->r[3]+0x00000010u,c->r[7]); // 801E27E8
  W32(c->r[3]+0x00000014u,c->r[7]); // 801E27EC
  W32(c->r[3]+0x00000018u,c->r[7]); // 801E27F0
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 801E27F4
  W32(c->r[3]+0x00000020u,c->r[7]); // 801E27F8
  c->r[3]=0u+0x00000008u; // 801E27FC
  W32(c->r[1]+0x00000034u,c->r[1]); // 801E2800
  c->lr=0x801E2808u; f_800D8ED0(c); // 801E2804
  cmps(c,0,(int32_t)c->r[3],0); // 801E2808
  c->r[30]=c->r[3]|c->r[3]; // 801E280C
  if (crb(c,2)) { goto L_801E284C; } // 801E2810
  c->lr=0x801E2818u; f_801E3228(c); // 801E2814
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E2818
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E281C
  c->r[4]=R32(c->r[3]+0x00000004u); // 801E2820
  W32(c->r[30]+0x00000004u,c->r[4]); // 801E2824
  cmps(c,0,(int32_t)c->r[4],0); // 801E2828
  if (crb(c,2)) { goto L_801E284C; } // 801E282C
  c->r[3]=R32(c->r[4]+0x00000004u); // 801E2830
  c->r[0]=c->r[3]+0x00000001u; // 801E2834
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E2838
  goto L_801E284C; // 801E283C
  c->r[3]=c->r[31]+0x00000008u; // 801E2840
  c->lr=0x801E2848u; f_801D6FB4(c); // 801E2844
L_801E2848:;
  IRQCHK(c); goto L_801E2848; // 801E2848
L_801E284C:;
  W32(c->r[29]+0x00000020u,c->r[30]); // 801E284C
  goto L_801E2884; // 801E2850
  c->r[0]=0u+0x00000001u; // 801E2854
  W8(c->r[29]+0x00000032u,c->r[0]); // 801E2858
  c->r[3]=0u+0x00000000u; // 801E285C
  c->r[4]=0u+0x00000000u; // 801E2860
  c->r[5]=0u+0x00000000u; // 801E2864
  c->lr=0x801E286Cu; f_801D76B8(c); // 801E2868
  c->r[3]=c->r[31]+0x00000020u; // 801E286C
  c->lr=0x801E2874u; f_801D77FC(c); // 801E2870
  c->r[0]=c->r[0]|0x00000000u; // 801E2874
  c->r[0]=R32(c->r[1]+0x00000000u); // 801E2878
  c->r[1]=R32(c->r[31]+0x00000034u); // 801E287C
  W32(c->r[1]+0x00000000u,c->r[0]); // 801E2880
L_801E2884:;
  c->r[10]=c->r[31]|c->r[31]; // 801E2884
  c->r[31]=R32(c->r[31]+0x0000004Cu); // 801E2888
  c->r[30]=R32(c->r[10]+0x00000048u); // 801E288C
  c->r[29]=R32(c->r[10]+0x00000044u); // 801E2890
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E2894
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E2898
  c->r[1]=c->r[10]|c->r[10]; // 801E289C
  c->lr=c->r[0]; // 801E28A0
  return; // 801E28A4
}

// fn_801E28A8
void f_801E28A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E28A8
  return; // 801E28AC
}

// fn_801E28B0
void f_801E28B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E28B0
  c->r[0]=c->lr; // 801E28B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E28B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E28BC
  c->r[31]=c->r[3]|c->r[3]; // 801E28C0
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E28C4
  c->r[4]=R32(c->r[13]+0xFFFFAD50u); // 801E28C8
  c->lr=0x801E28D0u; f_801DBB04(c); // 801E28CC
  c->r[0]=cntlz(c->r[3]); // 801E28D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801E28D4
  if (crb(c,2)) { goto L_801E28E4; } // 801E28D8
  c->r[3]=c->r[31]+0x0000000Cu; // 801E28DC
  goto L_801E28E8; // 801E28E0
L_801E28E4:;
  c->r[3]=0u+0x00000000u; // 801E28E4
L_801E28E8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E28E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E28EC
  c->lr=c->r[0]; // 801E28F0
  c->r[1]=c->r[1]+0x00000010u; // 801E28F4
  return; // 801E28F8
}

// fn_801E28FC
void f_801E28FC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801E28FC
  f_800D9450(c); return; // 801E2900
}

// dtor_801E2904
void f_801E2904(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2904
  c->r[0]=c->lr; // 801E2908
  cmps(c,0,(int32_t)c->r[3],0); // 801E290C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2914
  c->r[31]=c->r[4]|c->r[4]; // 801E2918
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E291C
  c->r[30]=c->r[3]|c->r[3]; // 801E2920
  if (crb(c,2)) { goto L_801E2948; } // 801E2924
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E2928
  cmps(c,0,(int32_t)c->r[3],0); // 801E292C
  if (crb(c,2)) { goto L_801E2938; } // 801E2930
  c->lr=0x801E2938u; f_800D9450(c); // 801E2934
L_801E2938:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E2938
  if (!crb(c,1)) { goto L_801E2948; } // 801E293C
  c->r[3]=c->r[30]|c->r[30]; // 801E2940
  c->lr=0x801E2948u; f_800D93B0(c); // 801E2944
L_801E2948:;
  c->r[3]=c->r[30]|c->r[30]; // 801E2948
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E294C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2950
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2954
  c->lr=c->r[0]; // 801E2958
  c->r[1]=c->r[1]+0x00000010u; // 801E295C
  return; // 801E2960
}

// fn_801E2964
void f_801E2964(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2964
  c->r[0]=c->lr; // 801E2968
  cmps(c,0,(int32_t)c->r[3],0); // 801E296C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2970
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2974
  c->r[31]=c->r[3]|c->r[3]; // 801E2978
  if (crb(c,2)) { goto L_801E298C; } // 801E297C
  cmps(c,0,(int32_t)c->r[4],0); // 801E2980
  if (!crb(c,1)) { goto L_801E298C; } // 801E2984
  c->lr=0x801E298Cu; f_800D93B0(c); // 801E2988
L_801E298C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E298C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2990
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2994
  c->lr=c->r[0]; // 801E2998
  c->r[1]=c->r[1]+0x00000010u; // 801E299C
  return; // 801E29A0
}

// fn_801E29A4
void f_801E29A4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[13]+0xFFFFB7B0u); // 801E29A4
  cmps(c,0,(int32_t)c->r[0],0); // 801E29A8
  if (crb(c,2)) return; // 801E29AC
  c->r[0]=0u+0x00000000u; // 801E29B0
  W32(c->r[13]+0xFFFFB7B0u,c->r[0]); // 801E29B4
  return; // 801E29B8
}

// dtor_801E29BC
void f_801E29BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E29BC
  c->r[0]=c->lr; // 801E29C0
  cmps(c,0,(int32_t)c->r[3],0); // 801E29C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E29C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E29CC
  c->r[31]=c->r[4]|c->r[4]; // 801E29D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E29D4
  c->r[30]=c->r[3]|c->r[3]; // 801E29D8
  if (crb(c,2)) { goto L_801E2A1C; } // 801E29DC
  if (crb(c,2)) { goto L_801E2A0C; } // 801E29E0
  if (crb(c,2)) { goto L_801E2A0C; } // 801E29E4
  if (crb(c,2)) { goto L_801E2A0C; } // 801E29E8
  c->r[4]=R32(c->r[3]+0x00000000u); // 801E29EC
  cmps(c,0,(int32_t)c->r[4],0); // 801E29F0
  if (crb(c,2)) { goto L_801E2A0C; } // 801E29F4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E29F8
  c->r[0]=c->r[0]-c->r[0]; // 801E29FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E2A00
  c->r[3]=c->r[4]|c->r[4]; // 801E2A04
  c->lr=0x801E2A0Cu; f_800D93B0(c); // 801E2A08
L_801E2A0C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E2A0C
  if (!crb(c,1)) { goto L_801E2A1C; } // 801E2A10
  c->r[3]=c->r[30]|c->r[30]; // 801E2A14
  c->lr=0x801E2A1Cu; f_800D93B0(c); // 801E2A18
L_801E2A1C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E2A1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2A20
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2A24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2A28
  c->lr=c->r[0]; // 801E2A2C
  c->r[1]=c->r[1]+0x00000010u; // 801E2A30
  return; // 801E2A34
}

// dtor_801E2A38
void f_801E2A38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2A38
  c->r[0]=c->lr; // 801E2A3C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2A44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2A48
  c->r[31]=c->r[3]|c->r[3]; // 801E2A4C
  if (crb(c,2)) { goto L_801E2A60; } // 801E2A50
  cmps(c,0,(int32_t)c->r[4],0); // 801E2A54
  if (!crb(c,1)) { goto L_801E2A60; } // 801E2A58
  c->lr=0x801E2A60u; f_800D93B0(c); // 801E2A5C
L_801E2A60:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2A60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2A64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2A68
  c->lr=c->r[0]; // 801E2A6C
  c->r[1]=c->r[1]+0x00000010u; // 801E2A70
  return; // 801E2A74
}

// fn_801E2A78
void f_801E2A78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2A78
  c->r[0]=c->lr; // 801E2A7C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2A80
  W32(c->r[1]+0x00000084u,c->r[0]); // 801E2A84
  {uint32_t ea=c->r[1]+0x00000068u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E2A88
  c->r[31]=c->r[1]|c->r[1]; // 801E2A8C
  c->r[29]=c->r[3]|c->r[3]; // 801E2A90
  c->r[30]=c->r[4]|c->r[4]; // 801E2A94
  if (crb(c,2)) { goto L_801E2BE4; } // 801E2A98
  c->r[0]=R8(c->r[13]+0xFFFFB7B4u); // 801E2A9C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2AA0
  if (!crb(c,2)) { goto L_801E2AD4; } // 801E2AA4
  c->r[0]=R32(c->r[13]+0xFFFFB7B0u); // 801E2AA8
  cmps(c,0,(int32_t)c->r[0],0); // 801E2AAC
  if (!crb(c,2)) { goto L_801E2AD4; } // 801E2AB0
  c->r[0]=c->r[13]+0xFFFFB7A8u; // 801E2AB4
  cmps(c,0,(int32_t)c->r[0],0); // 801E2AB8
  if (crb(c,2)) { goto L_801E2AC4; } // 801E2ABC
  W32(c->r[31]+0x00000044u,c->r[1]); // 801E2AC0
L_801E2AC4:;
  c->r[3]=0u+0x801E0000u; // 801E2AC4
  W32(c->r[13]+0xFFFFB7B0u,c->r[0]); // 801E2AC8
  c->r[3]=c->r[3]+0x000029A4u; // 801E2ACC
  c->lr=0x801E2AD4u; f_801DE680(c); // 801E2AD0
L_801E2AD4:;
  c->r[0]=R32(c->r[13]+0xFFFFB7B0u); // 801E2AD4
  c->r[3]=0u+0x00000001u; // 801E2AD8
  W8(c->r[13]+0xFFFFB7B4u,c->r[3]); // 801E2ADC
  cmps(c,0,(int32_t)c->r[0],0); // 801E2AE0
  if (!crb(c,2)) { goto L_801E2B08; } // 801E2AE4
  c->r[0]=c->r[13]+0xFFFFB7A8u; // 801E2AE8
  cmps(c,0,(int32_t)c->r[0],0); // 801E2AEC
  if (crb(c,2)) { goto L_801E2AF8; } // 801E2AF0
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 801E2AF4
L_801E2AF8:;
  c->r[3]=0u+0x801E0000u; // 801E2AF8
  W32(c->r[13]+0xFFFFB7B0u,c->r[0]); // 801E2AFC
  c->r[3]=c->r[3]+0x000029A4u; // 801E2B00
  c->lr=0x801E2B08u; f_801DE680(c); // 801E2B04
L_801E2B08:;
  c->r[3]=R32(c->r[13]+0xFFFFB7B0u); // 801E2B08
  c->r[0]=0u+0x00000001u; // 801E2B0C
  W32(c->r[31]+0x00000010u,c->r[3]); // 801E2B10
  c->r[26]=0u+0x00000000u; // 801E2B14
  c->r[27]=R32(c->r[29]+0x00000004u); // 801E2B18
  c->r[28]=0u+0x00000000u; // 801E2B1C
  W8(c->r[31]+0x00000014u,c->r[0]); // 801E2B20
  goto L_801E2B78; // 801E2B24
L_801E2B28:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801E2B28
  c->r[3]=R32(c->r[3]+c->r[28]); // 801E2B2C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2B30
  if (crb(c,2)) { goto L_801E2B70; } // 801E2B34
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E2B38
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801E2B3C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E2B40
  if (!crb(c,2)) { goto L_801E2B4C; } // 801E2B44
  goto L_801E2B50; // 801E2B48
L_801E2B4C:;
  c->r[3]=0u+0x00000000u; // 801E2B4C
L_801E2B50:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E2B50
  if (crb(c,2)) { goto L_801E2B70; } // 801E2B54
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E2B58
  c->r[0]=0u+0x00000001u; // 801E2B5C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801E2B60
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E2B64
  c->ctr=c->r[12]; // 801E2B68
  if (true) { c->lr=0x801E2B70u; dispatch(c,c->ctr); } // 801E2B6C
L_801E2B70:;
  c->r[28]=c->r[28]+0x00000004u; // 801E2B70
  c->r[26]=c->r[26]+0x00000001u; // 801E2B74
L_801E2B78:;
  cmpu(c,0,c->r[26],c->r[27]); // 801E2B78
  if (crb(c,0)) { IRQCHK(c); goto L_801E2B28; } // 801E2B7C
  c->r[0]=addc(c,c->r[29],0x0000000Cu,0); cr0(c,c->r[0]); // 801E2B80
  if (crb(c,2)) { goto L_801E2B9C; } // 801E2B84
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801E2B88
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 801E2B8C
  if (crb(c,2)) { goto L_801E2B9C; } // 801E2B90
  c->r[3]=R32(c->r[29]+0x00000014u); // 801E2B94
  c->lr=0x801E2B9Cu; f_800D93B0(c); // 801E2B98
L_801E2B9C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E2B9C
  if (crb(c,2)) { goto L_801E2BD4; } // 801E2BA0
  if (crb(c,2)) { goto L_801E2BD4; } // 801E2BA4
  if (crb(c,2)) { goto L_801E2BD4; } // 801E2BA8
  if (crb(c,2)) { goto L_801E2BD4; } // 801E2BAC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801E2BB0
  cmps(c,0,(int32_t)c->r[3],0); // 801E2BB4
  if (crb(c,2)) { goto L_801E2BD4; } // 801E2BB8
  c->r[4]=R32(c->r[29]+0x00000004u); // 801E2BBC
  c->r[0]=0u+0x00000000u; // 801E2BC0
  W8(c->r[31]+0x00000008u,c->r[0]); // 801E2BC4
  c->r[0]=c->r[4]-c->r[4]; // 801E2BC8
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E2BCC
  c->lr=0x801E2BD4u; f_800D93B0(c); // 801E2BD0
L_801E2BD4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; cr0(c,c->r[0]); // 801E2BD4
  if (!crb(c,1)) { goto L_801E2BE4; } // 801E2BD8
  c->r[3]=c->r[29]|c->r[29]; // 801E2BDC
  c->lr=0x801E2BE4u; f_800D93B0(c); // 801E2BE0
L_801E2BE4:;
  c->r[3]=c->r[29]|c->r[29]; // 801E2BE4
  goto L_801E2BF8; // 801E2BE8
  c->r[3]=c->r[31]+0x00000048u; // 801E2BEC
  c->lr=0x801E2BF4u; f_801D6FB4(c); // 801E2BF0
L_801E2BF4:;
  IRQCHK(c); goto L_801E2BF4; // 801E2BF4
L_801E2BF8:;
  c->r[10]=c->r[31]|c->r[31]; // 801E2BF8
  {uint32_t ea=c->r[10]+0x00000068u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E2BFC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E2C00
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E2C04
  c->r[1]=c->r[10]|c->r[10]; // 801E2C08
  c->lr=c->r[0]; // 801E2C0C
  return; // 801E2C10
}

// fn_801E2C14
void f_801E2C14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2C14
  c->r[0]=c->lr; // 801E2C18
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801E2C1C
  {uint32_t ea=c->r[1]+0x000000BCu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E2C20
  c->r[31]=c->r[1]|c->r[1]; // 801E2C24
  c->r[24]=c->r[3]|c->r[3]; // 801E2C28
  c->r[25]=c->r[4]|c->r[4]; // 801E2C2C
  c->r[26]=c->r[5]|c->r[5]; // 801E2C30
  c->r[6]=R32(c->r[4]+0x00000004u); // 801E2C34
  c->r[0]=c->r[6]+0x00000001u; // 801E2C38
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E2C3C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E2C40
  cmpu(c,0,c->r[5],c->r[0]); // 801E2C44
  if (crb(c,0)) { goto L_801E31BC; } // 801E2C48
  W32(c->r[31]+0x000000B4u,c->r[1]); // 801E2C4C
  c->r[0]=c->r[5]+0x00000001u; // 801E2C50
  c->r[5]=R32(c->r[3]+0x00000004u); // 801E2C54
  cmpu(c,0,c->r[0],c->r[5]); // 801E2C58
  if (!crb(c,1)) { goto L_801E313C; } // 801E2C5C
  c->r[6]=R32(c->r[3]+0x00000008u); // 801E2C60
  c->r[27]=c->r[0]-c->r[5]; // 801E2C64
  c->r[0]=0u+0x00000000u; // 801E2C68
  W8(c->r[31]+0x00000038u,c->r[0]); // 801E2C6C
  cmpu(c,0,c->r[27],c->r[6]); // 801E2C70
  if (crb(c,1)) { goto L_801E2C84; } // 801E2C74
  c->r[0]=c->r[6]-c->r[27]; // 801E2C78
  cmpu(c,0,c->r[5],c->r[0]); // 801E2C7C
  if (!crb(c,1)) { goto L_801E2D98; } // 801E2C80
L_801E2C84:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 801E2C84
  c->r[4]=0u+0x40000000u; // 801E2C88
  c->r[28]=R32(c->r[3]+0x00000008u); // 801E2C8C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E2C90
  c->r[3]=c->r[5]+c->r[27]; // 801E2C94
  c->r[4]=0u+0x00000000u; // 801E2C98
  c->r[3]=c->r[3]-c->r[6]; // 801E2C9C
  c->r[0]=c->r[0]-c->r[28]; // 801E2CA0
  cmpu(c,0,c->r[3],c->r[0]); // 801E2CA4
  W8(c->r[31]+0x00000010u,c->r[4]); // 801E2CA8
  if (!crb(c,1)) { goto L_801E2D70; } // 801E2CAC
  c->r[29]=0u+0x80200000u; // 801E2CB0
  c->r[3]=0u+0x80250000u; // 801E2CB4
  c->r[3]=c->r[3]+0xFFFFA2E0u; // 801E2CB8
  W32(c->r[31]+0x00000068u,c->r[3]); // 801E2CBC
  c->r[29]=c->r[29]+0xFFFFBAE4u; // 801E2CC0
  c->r[30]=c->r[31]+0x00000068u; // 801E2CC4
  W8(c->r[31]+0x00000008u,c->r[4]); // 801E2CC8
  c->r[3]=c->r[29]|c->r[29]; // 801E2CCC
  W8(c->r[31]+0x0000000Cu,c->r[4]); // 801E2CD0
  c->lr=0x801E2CD8u; f_801D4D44(c); // 801E2CD4
  c->r[3]=c->r[3]+0x00000001u; // 801E2CD8
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E2CDC
  c->r[3]=c->r[0]-c->r[3]; // 801E2CE0
  c->lr=0x801E2CE8u; f_800D9140(c); // 801E2CE4
  c->r[0]=c->r[31]+0x0000000Cu; // 801E2CE8
  W32(c->r[31]+0x0000006Cu,c->r[3]); // 801E2CEC
  c->r[23]=c->r[3]|c->r[3]; // 801E2CF0
  W32(c->r[31]+0x00000050u,c->r[3]); // 801E2CF4
  c->r[3]=0u+0x00000010u; // 801E2CF8
  W32(c->r[31]+0x00000054u,c->r[0]); // 801E2CFC
  c->lr=0x801E2D04u; f_800D8ED0(c); // 801E2D00
  cmps(c,0,(int32_t)c->r[3],0); // 801E2D04
  if (crb(c,2)) { goto L_801E2D28; } // 801E2D08
  c->r[0]=0u+0x00000001u; // 801E2D0C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E2D10
  c->r[4]=0u+0x80250000u; // 801E2D14
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E2D18
  c->r[4]=c->r[4]+0xFFFFA210u; // 801E2D1C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E2D20
  W32(c->r[3]+0x0000000Cu,c->r[23]); // 801E2D24
L_801E2D28:;
  c->r[0]=0u+0x00000000u; // 801E2D28
  W32(c->r[31]+0x00000070u,c->r[3]); // 801E2D2C
  W32(c->r[31]+0x00000050u,c->r[0]); // 801E2D30
  goto L_801E2D3C; // 801E2D34
  c->lr=0x801E2D3Cu; f_800D9450(c); // 801E2D38
L_801E2D3C:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 801E2D3C
  c->r[4]=c->r[29]|c->r[29]; // 801E2D40
  c->lr=0x801E2D48u; f_801DB988(c); // 801E2D44
  c->r[4]=0u+0x80250000u; // 801E2D48
  c->r[3]=0u+0x80200000u; // 801E2D4C
  c->r[4]=c->r[4]+0xFFFFA2B8u; // 801E2D50
  c->r[5]=0u+0x801E0000u; // 801E2D54
  c->r[3]=c->r[3]+0xFFFFBAE4u; // 801E2D58
  W32(c->r[30]+0x00000000u,c->r[4]); // 801E2D5C
  c->r[4]=c->r[30]|c->r[30]; // 801E2D60
  c->r[5]=c->r[5]+0x000038E4u; // 801E2D64
  c->r[3]=c->r[3]+0x00000014u; // 801E2D68
  c->lr=0x801E2D70u; f_801D76B8(c); // 801E2D6C
L_801E2D70:;
  c->r[3]=0u+0x15550000u; // 801E2D70
  c->r[0]=c->r[3]+0x00005555u; // 801E2D74
  cmpu(c,0,c->r[28],c->r[0]); // 801E2D78
  if (!crb(c,0)) { goto L_801E2D84; } // 801E2D7C
  goto L_801E2DC0; // 801E2D80
L_801E2D84:;
  c->r[3]=0u+0x2AAB0000u; // 801E2D84
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 801E2D88
  cmpu(c,0,c->r[28],c->r[0]); // 801E2D8C
  if (!crb(c,0)) { goto L_801E2DC0; } // 801E2D90
  goto L_801E2DC0; // 801E2D94
L_801E2D98:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E2D98
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E2D9C
  c->r[5]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801E2DA0
  c->r[4]=0u+0x00000000u; // 801E2DA4
  c->r[3]=c->r[3]+c->r[0]; // 801E2DA8
  c->lr=0x801E2DB0u; f_800046B4(c); // 801E2DAC
  c->r[0]=R32(c->r[24]+0x00000004u); // 801E2DB0
  c->r[0]=c->r[0]+c->r[27]; // 801E2DB4
  W32(c->r[24]+0x00000004u,c->r[0]); // 801E2DB8
  goto L_801E31BC; // 801E2DBC
L_801E2DC0:;
  c->r[5]=0u+0x00000000u; // 801E2DC0
  c->r[4]=c->r[24]+0x00000008u; // 801E2DC4
  c->r[3]=0u+0x40000000u; // 801E2DC8
  W32(c->r[31]+0x0000008Cu,c->r[5]); // 801E2DCC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E2DD0
  W32(c->r[31]+0x00000090u,c->r[5]); // 801E2DD4
  W32(c->r[31]+0x00000094u,c->r[5]); // 801E2DD8
  W32(c->r[31]+0x00000098u,c->r[4]); // 801E2DDC
  W32(c->r[31]+0x0000009Cu,c->r[5]); // 801E2DE0
  c->r[3]=R32(c->r[24]+0x00000004u); // 801E2DE4
  c->r[30]=R32(c->r[24]+0x00000008u); // 801E2DE8
  c->r[3]=c->r[3]+c->r[27]; // 801E2DEC
  c->r[3]=c->r[3]-c->r[30]; // 801E2DF0
  c->r[0]=c->r[0]-c->r[30]; // 801E2DF4
  cmpu(c,0,c->r[3],c->r[0]); // 801E2DF8
  W32(c->r[31]+0x00000048u,c->r[3]); // 801E2DFC
  if (!crb(c,1)) { goto L_801E2EC4; } // 801E2E00
  c->r[29]=0u+0x80200000u; // 801E2E04
  c->r[3]=0u+0x80250000u; // 801E2E08
  c->r[3]=c->r[3]+0xFFFFA2E0u; // 801E2E0C
  W32(c->r[31]+0x00000080u,c->r[3]); // 801E2E10
  c->r[29]=c->r[29]+0xFFFFBAE4u; // 801E2E14
  c->r[28]=c->r[31]+0x00000080u; // 801E2E18
  W8(c->r[31]+0x00000034u,c->r[5]); // 801E2E1C
  c->r[3]=c->r[29]|c->r[29]; // 801E2E20
  W8(c->r[31]+0x00000030u,c->r[5]); // 801E2E24
  c->lr=0x801E2E2Cu; f_801D4D44(c); // 801E2E28
  c->r[3]=c->r[3]+0x00000001u; // 801E2E2C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E2E30
  c->r[3]=c->r[0]-c->r[3]; // 801E2E34
  c->lr=0x801E2E3Cu; f_800D9140(c); // 801E2E38
  c->r[0]=c->r[31]+0x00000030u; // 801E2E3C
  W32(c->r[31]+0x00000084u,c->r[3]); // 801E2E40
  c->r[23]=c->r[3]|c->r[3]; // 801E2E44
  W32(c->r[31]+0x00000060u,c->r[3]); // 801E2E48
  c->r[3]=0u+0x00000010u; // 801E2E4C
  W32(c->r[31]+0x00000064u,c->r[0]); // 801E2E50
  c->lr=0x801E2E58u; f_800D8ED0(c); // 801E2E54
  cmps(c,0,(int32_t)c->r[3],0); // 801E2E58
  if (crb(c,2)) { goto L_801E2E7C; } // 801E2E5C
  c->r[0]=0u+0x00000001u; // 801E2E60
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E2E64
  c->r[4]=0u+0x80250000u; // 801E2E68
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E2E6C
  c->r[4]=c->r[4]+0xFFFFA210u; // 801E2E70
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E2E74
  W32(c->r[3]+0x0000000Cu,c->r[23]); // 801E2E78
L_801E2E7C:;
  c->r[0]=0u+0x00000000u; // 801E2E7C
  W32(c->r[31]+0x00000088u,c->r[3]); // 801E2E80
  W32(c->r[31]+0x00000060u,c->r[0]); // 801E2E84
  goto L_801E2E90; // 801E2E88
  c->lr=0x801E2E90u; f_800D9450(c); // 801E2E8C
L_801E2E90:;
  c->r[3]=R32(c->r[31]+0x00000084u); // 801E2E90
  c->r[4]=c->r[29]|c->r[29]; // 801E2E94
  c->lr=0x801E2E9Cu; f_801DB988(c); // 801E2E98
  c->r[4]=0u+0x80250000u; // 801E2E9C
  c->r[3]=0u+0x80200000u; // 801E2EA0
  c->r[4]=c->r[4]+0xFFFFA2B8u; // 801E2EA4
  c->r[5]=0u+0x801E0000u; // 801E2EA8
  c->r[3]=c->r[3]+0xFFFFBAE4u; // 801E2EAC
  W32(c->r[28]+0x00000000u,c->r[4]); // 801E2EB0
  c->r[4]=c->r[28]|c->r[28]; // 801E2EB4
  c->r[5]=c->r[5]+0x000038E4u; // 801E2EB8
  c->r[3]=c->r[3]+0x00000014u; // 801E2EBC
  c->lr=0x801E2EC4u; f_801D76B8(c); // 801E2EC0
L_801E2EC4:;
  c->r[3]=0u+0x15550000u; // 801E2EC4
  c->r[0]=c->r[3]+0x00005555u; // 801E2EC8
  cmpu(c,0,c->r[30],c->r[0]); // 801E2ECC
  if (!crb(c,0)) { goto L_801E2F14; } // 801E2ED0
  c->r[5]=c->r[30]+0x00000001u; // 801E2ED4
  c->r[3]=0u+0xCCCD0000u; // 801E2ED8
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E2EDC
  c->r[0]=R32(c->r[31]+0x00000048u); // 801E2EE0
  c->r[4]=c->r[4]-c->r[5]; // 801E2EE4
  c->r[3]=c->r[3]+0xFFFFCCCDu; // 801E2EE8
  c->r[4]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 801E2EEC
  c->r[3]=c->r[31]+0x00000040u; // 801E2EF0
  c->r[4]=rotl(c->r[4],30)&0x3FFFFFFFu; // 801E2EF4
  W32(c->r[31]+0x00000040u,c->r[4]); // 801E2EF8
  cmpu(c,0,c->r[4],c->r[0]); // 801E2EFC
  if (!crb(c,0)) { goto L_801E2F08; } // 801E2F00
  c->r[3]=c->r[31]+0x00000048u; // 801E2F04
L_801E2F08:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E2F08
  c->r[29]=c->r[30]+c->r[0]; // 801E2F0C
  goto L_801E2F58; // 801E2F10
L_801E2F14:;
  c->r[3]=0u+0x2AAB0000u; // 801E2F14
  c->r[0]=c->r[3]+0xFFFFAAAAu; // 801E2F18
  cmpu(c,0,c->r[30],c->r[0]); // 801E2F1C
  if (!crb(c,0)) { goto L_801E2F50; } // 801E2F20
  c->r[3]=c->r[30]+0x00000001u; // 801E2F24
  c->r[0]=R32(c->r[31]+0x00000048u); // 801E2F28
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801E2F2C
  W32(c->r[31]+0x00000044u,c->r[3]); // 801E2F30
  cmpu(c,0,c->r[3],c->r[0]); // 801E2F34
  c->r[3]=c->r[31]+0x00000044u; // 801E2F38
  if (!crb(c,0)) { goto L_801E2F44; } // 801E2F3C
  c->r[3]=c->r[31]+0x00000048u; // 801E2F40
L_801E2F44:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E2F44
  c->r[29]=c->r[30]+c->r[0]; // 801E2F48
  goto L_801E2F58; // 801E2F4C
L_801E2F50:;
  c->r[3]=0u+0x40000000u; // 801E2F50
  c->r[29]=c->r[3]+0xFFFFFFFFu; // 801E2F54
L_801E2F58:;
  c->r[3]=0u+0x40000000u; // 801E2F58
  c->r[4]=0u+0x00000000u; // 801E2F5C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801E2F60
  W8(c->r[31]+0x00000024u,c->r[4]); // 801E2F64
  cmpu(c,0,c->r[29],c->r[0]); // 801E2F68
  if (!crb(c,1)) { goto L_801E3030; } // 801E2F6C
  c->r[28]=0u+0x80200000u; // 801E2F70
  c->r[3]=0u+0x80250000u; // 801E2F74
  c->r[3]=c->r[3]+0xFFFFA2E0u; // 801E2F78
  W32(c->r[31]+0x00000074u,c->r[3]); // 801E2F7C
  c->r[28]=c->r[28]+0xFFFFBAE4u; // 801E2F80
  c->r[30]=c->r[31]+0x00000074u; // 801E2F84
  W8(c->r[31]+0x0000002Cu,c->r[4]); // 801E2F88
  c->r[3]=c->r[28]|c->r[28]; // 801E2F8C
  W8(c->r[31]+0x00000028u,c->r[4]); // 801E2F90
  c->lr=0x801E2F98u; f_801D4D44(c); // 801E2F94
  c->r[3]=c->r[3]+0x00000001u; // 801E2F98
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801E2F9C
  c->r[3]=c->r[0]-c->r[3]; // 801E2FA0
  c->lr=0x801E2FA8u; f_800D9140(c); // 801E2FA4
  c->r[0]=c->r[31]+0x00000028u; // 801E2FA8
  W32(c->r[31]+0x00000078u,c->r[3]); // 801E2FAC
  c->r[23]=c->r[3]|c->r[3]; // 801E2FB0
  W32(c->r[31]+0x00000058u,c->r[3]); // 801E2FB4
  c->r[3]=0u+0x00000010u; // 801E2FB8
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 801E2FBC
  c->lr=0x801E2FC4u; f_800D8ED0(c); // 801E2FC0
  cmps(c,0,(int32_t)c->r[3],0); // 801E2FC4
  if (crb(c,2)) { goto L_801E2FE8; } // 801E2FC8
  c->r[0]=0u+0x00000001u; // 801E2FCC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E2FD0
  c->r[4]=0u+0x80250000u; // 801E2FD4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E2FD8
  c->r[4]=c->r[4]+0xFFFFA210u; // 801E2FDC
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E2FE0
  W32(c->r[3]+0x0000000Cu,c->r[23]); // 801E2FE4
L_801E2FE8:;
  c->r[0]=0u+0x00000000u; // 801E2FE8
  W32(c->r[31]+0x0000007Cu,c->r[3]); // 801E2FEC
  W32(c->r[31]+0x00000058u,c->r[0]); // 801E2FF0
  goto L_801E2FFC; // 801E2FF4
  c->lr=0x801E2FFCu; f_800D9450(c); // 801E2FF8
L_801E2FFC:;
  c->r[3]=R32(c->r[31]+0x00000078u); // 801E2FFC
  c->r[4]=c->r[28]|c->r[28]; // 801E3000
  c->lr=0x801E3008u; f_801DB988(c); // 801E3004
  c->r[4]=0u+0x80250000u; // 801E3008
  c->r[3]=0u+0x80200000u; // 801E300C
  c->r[4]=c->r[4]+0xFFFFA2B8u; // 801E3010
  c->r[5]=0u+0x801E0000u; // 801E3014
  c->r[3]=c->r[3]+0xFFFFBAE4u; // 801E3018
  W32(c->r[30]+0x00000000u,c->r[4]); // 801E301C
  c->r[4]=c->r[30]|c->r[30]; // 801E3020
  c->r[5]=c->r[5]+0x000038E4u; // 801E3024
  c->r[3]=c->r[3]+0x00000014u; // 801E3028
  c->lr=0x801E3030u; f_801D76B8(c); // 801E302C
L_801E3030:;
  c->r[3]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801E3030
  c->lr=0x801E3038u; f_800D8ED0(c); // 801E3034
  c->r[0]=R32(c->r[31]+0x00000090u); // 801E3038
  c->r[30]=0u+0x00000000u; // 801E303C
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 801E3040
  c->r[5]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801E3044
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E3048
  c->r[4]=0u+0x00000000u; // 801E304C
  W32(c->r[31]+0x00000094u,c->r[29]); // 801E3050
  c->r[0]=R32(c->r[24]+0x00000004u); // 801E3054
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 801E3058
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E305C
  c->r[0]=c->r[3]+c->r[0]; // 801E3060
  W8(c->r[31]+0x00000020u,c->r[30]); // 801E3064
  c->r[3]=c->r[6]+c->r[0]; // 801E3068
  c->lr=0x801E3070u; f_800046B4(c); // 801E306C
  c->r[3]=R32(c->r[31]+0x00000090u); // 801E3070
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 801E3074
  c->r[3]=c->r[3]+c->r[27]; // 801E3078
  W32(c->r[31]+0x00000090u,c->r[3]); // 801E307C
  c->r[3]=R32(c->r[31]+0x0000008Cu); // 801E3080
  c->r[4]=R32(c->r[24]+0x00000004u); // 801E3084
  c->r[27]=R32(c->r[24]+0x00000000u); // 801E3088
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E308C
  W8(c->r[31]+0x0000001Cu,c->r[30]); // 801E3090
  c->r[5]=c->r[27]+c->r[4]; // 801E3094
  c->r[5]=c->r[5]-c->r[27]; // 801E3098
  c->r[4]=c->r[27]|c->r[27]; // 801E309C
  c->r[5]=sraw(c,c->r[5],2); // 801E30A0
  c->r[23]=addc(c,c->r[5],0,c->xer_ca); // 801E30A4
  c->r[0]=c->r[0]-c->r[23]; // 801E30A8
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 801E30AC
  c->r[28]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801E30B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E30B4
  c->r[5]=c->r[28]|c->r[28]; // 801E30B8
  c->r[3]=c->r[3]+c->r[0]; // 801E30BC
  c->lr=0x801E30C4u; f_80004364(c); // 801E30C0
  c->r[3]=c->r[27]|c->r[27]; // 801E30C4
  c->r[5]=c->r[28]|c->r[28]; // 801E30C8
  c->r[4]=0u+0x00000000u; // 801E30CC
  c->lr=0x801E30D4u; f_800046B4(c); // 801E30D0
  c->r[0]=R32(c->r[31]+0x00000090u); // 801E30D4
  c->r[4]=addc(c,c->r[31],0x0000008Cu,0); cr0(c,c->r[4]); // 801E30D8
  W8(c->r[31]+0x00000018u,c->r[30]); // 801E30DC
  c->r[0]=c->r[0]+c->r[23]; // 801E30E0
  W32(c->r[31]+0x00000090u,c->r[0]); // 801E30E4
  W32(c->r[24]+0x00000004u,c->r[30]); // 801E30E8
  c->r[3]=R32(c->r[24]+0x00000008u); // 801E30EC
  c->r[0]=R32(c->r[31]+0x00000094u); // 801E30F0
  W32(c->r[24]+0x00000008u,c->r[0]); // 801E30F4
  W32(c->r[31]+0x00000094u,c->r[3]); // 801E30F8
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 801E30FC
  c->r[3]=R32(c->r[24]+0x00000000u); // 801E3100
  W32(c->r[24]+0x00000000u,c->r[0]); // 801E3104
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 801E3108
  c->r[0]=R32(c->r[31]+0x00000090u); // 801E310C
  W32(c->r[24]+0x00000004u,c->r[0]); // 801E3110
  W32(c->r[4]+0x00000004u,c->r[30]); // 801E3114
  if (crb(c,2)) { goto L_801E31BC; } // 801E3118
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E311C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3120
  if (crb(c,2)) { goto L_801E31BC; } // 801E3124
  c->r[0]=c->r[30]-c->r[30]; // 801E3128
  W8(c->r[31]+0x00000014u,c->r[30]); // 801E312C
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E3130
  c->lr=0x801E3138u; f_800D93B0(c); // 801E3134
  goto L_801E31BC; // 801E3138
L_801E313C:;
  if (!crb(c,0)) { goto L_801E31BC; } // 801E313C
  c->r[0]=c->r[5]-c->r[0]; // 801E3140
  c->r[4]=0u+0x00000000u; // 801E3144
  c->r[0]=c->r[5]-c->r[0]; // 801E3148
  W8(c->r[31]+0x0000003Cu,c->r[4]); // 801E314C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E3150
  goto L_801E31BC; // 801E3154
  c->r[0]=R32(c->r[25]+0x00000004u); // 801E3158
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801E315C
  W32(c->r[25]+0x00000004u,c->r[0]); // 801E3160
  if (!crb(c,2)) { goto L_801E3170; } // 801E3164
  c->r[3]=c->r[25]|c->r[25]; // 801E3168
  goto L_801E3174; // 801E316C
L_801E3170:;
  c->r[3]=0u+0x00000000u; // 801E3170
L_801E3174:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E3174
  if (crb(c,2)) { goto L_801E3194; } // 801E3178
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E317C
  c->r[0]=0u+0x00000001u; // 801E3180
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801E3184
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E3188
  c->ctr=c->r[12]; // 801E318C
  if (true) { c->lr=0x801E3194u; dispatch(c,c->ctr); } // 801E3190
L_801E3194:;
  c->r[3]=0u+0x00000000u; // 801E3194
  c->r[4]=0u+0x00000000u; // 801E3198
  c->r[5]=0u+0x00000000u; // 801E319C
  c->lr=0x801E31A4u; f_801D76B8(c); // 801E31A0
  c->r[3]=c->r[31]+0x000000A0u; // 801E31A4
  c->lr=0x801E31ACu; f_801D77FC(c); // 801E31A8
  c->r[0]=c->r[0]|0x00000000u; // 801E31AC
  c->r[0]=R32(c->r[1]+0x00000000u); // 801E31B0
  c->r[1]=R32(c->r[31]+0x000000B4u); // 801E31B4
  W32(c->r[1]+0x00000000u,c->r[0]); // 801E31B8
L_801E31BC:;
  c->r[27]=R32(c->r[24]+0x00000000u); // 801E31BC
  c->r[24]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801E31C0
  c->r[3]=R32(c->r[27]+c->r[24]); // 801E31C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E31C8
  if (crb(c,2)) { goto L_801E3208; } // 801E31CC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E31D0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801E31D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E31D8
  if (!crb(c,2)) { goto L_801E31E4; } // 801E31DC
  goto L_801E31E8; // 801E31E0
L_801E31E4:;
  c->r[3]=0u+0x00000000u; // 801E31E4
L_801E31E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E31E8
  if (crb(c,2)) { goto L_801E3208; } // 801E31EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E31F0
  c->r[0]=0u+0x00000001u; // 801E31F4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801E31F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E31FC
  c->ctr=c->r[12]; // 801E3200
  if (true) { c->lr=0x801E3208u; dispatch(c,c->ctr); } // 801E3204
L_801E3208:;
  W32(c->r[27]+c->r[24],c->r[25]); // 801E3208
  c->r[10]=c->r[31]|c->r[31]; // 801E320C
  {uint32_t ea=c->r[10]+0x000000BCu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E3210
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E3214
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E3218
  c->r[1]=c->r[10]|c->r[10]; // 801E321C
  c->lr=c->r[0]; // 801E3220
  return; // 801E3224
}

// fn_801E3228
void f_801E3228(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3228
  c->r[0]=c->lr; // 801E322C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801E3230
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801E3234
  c->r[31]=c->r[1]|c->r[1]; // 801E3238
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801E323C
  W32(c->r[1]+0x000000A4u,c->r[29]); // 801E3240
  W32(c->r[1]+0x000000A0u,c->r[28]); // 801E3244
  c->r[0]=R8(c->r[13]+0xFFFFB7B5u); // 801E3248
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E324C
  if (!crb(c,2)) { goto L_801E3454; } // 801E3250
  c->r[0]=R8(c->r[13]+0xFFFFB7B4u); // 801E3254
  cmps(c,0,(int32_t)c->r[0],0); // 801E3258
  if (!crb(c,2)) { goto L_801E328C; } // 801E325C
  c->r[0]=R32(c->r[13]+0xFFFFB7B0u); // 801E3260
  cmps(c,0,(int32_t)c->r[0],0); // 801E3264
  if (!crb(c,2)) { goto L_801E328C; } // 801E3268
  c->r[0]=c->r[13]+0xFFFFB7A8u; // 801E326C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3270
  if (crb(c,2)) { goto L_801E327C; } // 801E3274
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 801E3278
L_801E327C:;
  c->r[3]=0u+0x801E0000u; // 801E327C
  W32(c->r[13]+0xFFFFB7B0u,c->r[0]); // 801E3280
  c->r[3]=c->r[3]+0x000029A4u; // 801E3284
  c->lr=0x801E328Cu; f_801DE680(c); // 801E3288
L_801E328C:;
  c->r[0]=R32(c->r[13]+0xFFFFB7B0u); // 801E328C
  c->r[3]=0u+0x00000001u; // 801E3290
  W8(c->r[13]+0xFFFFB7B4u,c->r[3]); // 801E3294
  cmps(c,0,(int32_t)c->r[0],0); // 801E3298
  if (!crb(c,2)) { goto L_801E32C0; } // 801E329C
  c->r[0]=c->r[13]+0xFFFFB7A8u; // 801E32A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E32A4
  if (crb(c,2)) { goto L_801E32B0; } // 801E32A8
  W32(c->r[31]+0x00000064u,c->r[1]); // 801E32AC
L_801E32B0:;
  c->r[3]=0u+0x801E0000u; // 801E32B0
  W32(c->r[13]+0xFFFFB7B0u,c->r[0]); // 801E32B4
  c->r[3]=c->r[3]+0x000029A4u; // 801E32B8
  c->lr=0x801E32C0u; f_801DE680(c); // 801E32BC
L_801E32C0:;
  c->r[0]=R8(c->r[13]+0xFFFFB7C0u); // 801E32C0
  c->r[3]=0u+0x00000001u; // 801E32C4
  c->r[4]=R32(c->r[13]+0xFFFFB7B0u); // 801E32C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E32CC
  W32(c->r[31]+0x00000018u,c->r[4]); // 801E32D0
  W8(c->r[31]+0x0000001Cu,c->r[3]); // 801E32D4
  if (!crb(c,2)) { goto L_801E33F8; } // 801E32D8
  c->r[3]=0u+0x00000018u; // 801E32DC
  c->lr=0x801E32E4u; f_800D8ED0(c); // 801E32E0
  cmps(c,0,(int32_t)c->r[3],0); // 801E32E4
  c->r[29]=c->r[3]|c->r[3]; // 801E32E8
  if (crb(c,2)) { goto L_801E3354; } // 801E32EC
  c->r[0]=0u+0x00000000u; // 801E32F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E32F4
  c->r[4]=0u+0x80200000u; // 801E32F8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E32FC
  c->r[4]=c->r[4]+0xFFFFBAE4u; // 801E3300
  c->r[30]=c->r[4]+0x0000009Du; // 801E3304
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E3308
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E330C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801E3310
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E3314
  c->r[3]=c->r[30]|c->r[30]; // 801E3318
  c->lr=0x801E3320u; f_801D4D44(c); // 801E331C
  c->r[28]=c->r[3]|c->r[3]; // 801E3320
  c->r[3]=c->r[29]+0x0000000Cu; // 801E3324
  c->r[4]=c->r[28]|c->r[28]; // 801E3328
  c->lr=0x801E3330u; f_800081B0(c); // 801E332C
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 801E3330
  c->r[6]=c->r[30]|c->r[30]; // 801E3334
  W8(c->r[31]+0x00000008u,c->r[0]); // 801E3338
  c->r[3]=c->r[29]+0x0000000Cu; // 801E333C
  c->r[7]=c->r[30]+c->r[28]; // 801E3340
  c->r[8]=c->r[31]+0x00000008u; // 801E3344
  c->r[4]=0u+0x00000000u; // 801E3348
  c->r[5]=0u+0x00000000u; // 801E334C
  c->lr=0x801E3354u; f_80008370(c); // 801E3350
L_801E3354:;
  c->r[0]=0u+0x00000000u; // 801E3354
  W32(c->r[31]+0x00000010u,c->r[0]); // 801E3358
  c->r[3]=0u+0x00000010u; // 801E335C
  W32(c->r[31]+0x00000014u,c->r[29]); // 801E3360
  c->lr=0x801E3368u; f_800D8ED0(c); // 801E3364
  cmps(c,0,(int32_t)c->r[3],0); // 801E3368
  if (crb(c,2)) { goto L_801E338C; } // 801E336C
  c->r[0]=0u+0x00000001u; // 801E3370
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E3374
  c->r[4]=0u+0x80250000u; // 801E3378
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E337C
  c->r[4]=c->r[4]+0xFFFFA258u; // 801E3380
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3384
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 801E3388
L_801E338C:;
  c->r[0]=0u+0x00000000u; // 801E338C
  W32(c->r[31]+0x00000014u,c->r[0]); // 801E3390
  goto L_801E339C; // 801E3394
  c->lr=0x801E339Cu; f_801E2A78(c); // 801E3398
L_801E339C:;
  c->r[4]=c->r[13]+0xFFFFB7C8u; // 801E339C
  cmps(c,0,(int32_t)c->r[3],0); // 801E33A0
  W32(c->r[13]+0xFFFFB7C8u,c->r[29]); // 801E33A4
  W32(c->r[4]+0x00000004u,c->r[3]); // 801E33A8
  if (crb(c,2)) { goto L_801E33BC; } // 801E33AC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801E33B0
  c->r[0]=c->r[4]+0x00000001u; // 801E33B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E33B8
L_801E33BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E33BC
  if (crb(c,2)) { goto L_801E33D8; } // 801E33C0
  c->lr=0x801E33C8u; f_801E42EC(c); // 801E33C4
  goto L_801E33D8; // 801E33C8
  c->r[3]=c->r[31]+0x00000068u; // 801E33CC
  c->lr=0x801E33D4u; f_801D6FB4(c); // 801E33D0
L_801E33D4:;
  IRQCHK(c); goto L_801E33D4; // 801E33D4
L_801E33D8:;
  c->r[4]=0u+0x800F0000u; // 801E33D8
  c->r[5]=0u+0x802E0000u; // 801E33DC
  c->r[4]=c->r[4]+0x00006880u; // 801E33E0
  c->r[3]=c->r[13]+0xFFFFB7C8u; // 801E33E4
  c->r[5]=c->r[5]+0xFFFFAE84u; // 801E33E8
  c->lr=0x801E33F0u; f_801D4E28(c); // 801E33EC
  c->r[0]=0u+0x00000001u; // 801E33F0
  W8(c->r[13]+0xFFFFB7C0u,c->r[0]); // 801E33F4
L_801E33F8:;
  c->r[5]=c->r[13]+0xFFFFB7C8u; // 801E33F8
  goto L_801E340C; // 801E33FC
  c->r[3]=c->r[31]+0x00000020u; // 801E3400
  c->lr=0x801E3408u; f_801D6FB4(c); // 801E3404
L_801E3408:;
  IRQCHK(c); goto L_801E3408; // 801E3408
L_801E340C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 801E340C
  c->r[3]=c->r[13]+0xFFFFB7B8u; // 801E3410
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E3414
  cmps(c,0,(int32_t)c->r[4],0); // 801E3418
  W32(c->r[13]+0xFFFFB7B8u,c->r[0]); // 801E341C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E3420
  if (crb(c,2)) { goto L_801E3434; } // 801E3424
  c->r[3]=R32(c->r[4]+0x00000004u); // 801E3428
  c->r[0]=c->r[3]+0x00000001u; // 801E342C
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E3430
L_801E3434:;
  c->r[4]=0u+0x800F0000u; // 801E3434
  c->r[5]=0u+0x802E0000u; // 801E3438
  c->r[4]=c->r[4]+0x00006880u; // 801E343C
  c->r[3]=c->r[13]+0xFFFFB7B8u; // 801E3440
  c->r[5]=c->r[5]+0xFFFFAE78u; // 801E3444
  c->lr=0x801E344Cu; f_801D4E28(c); // 801E3448
  c->r[0]=0u+0x00000001u; // 801E344C
  W8(c->r[13]+0xFFFFB7B5u,c->r[0]); // 801E3450
L_801E3454:;
  c->r[3]=c->r[13]+0xFFFFB7B8u; // 801E3454
  goto L_801E3468; // 801E3458
  c->r[3]=c->r[31]+0x00000080u; // 801E345C
  c->lr=0x801E3464u; f_801D6FB4(c); // 801E3460
L_801E3464:;
  IRQCHK(c); goto L_801E3464; // 801E3464
L_801E3468:;
  c->r[10]=c->r[31]|c->r[31]; // 801E3468
  c->r[31]=R32(c->r[31]+0x000000ACu); // 801E346C
  c->r[30]=R32(c->r[10]+0x000000A8u); // 801E3470
  c->r[29]=R32(c->r[10]+0x000000A4u); // 801E3474
  c->r[28]=R32(c->r[10]+0x000000A0u); // 801E3478
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E347C
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E3480
  c->r[1]=c->r[10]|c->r[10]; // 801E3484
  c->lr=c->r[0]; // 801E3488
  return; // 801E348C
}

// fn_801E3490
void f_801E3490(Ctx* __restrict c) {
  c->r[9]=0u+0x80250000u; // 801E3490
  c->r[8]=0u+0x80200000u; // 801E3494
  c->r[7]=0u+0x80200000u; // 801E3498
  cmps(c,0,(int32_t)c->r[4],0); // 801E349C
  c->r[9]=c->r[9]+0xFFFFA278u; // 801E34A0
  c->r[8]=c->r[8]+0xFFFFACB0u; // 801E34A4
  c->r[7]=c->r[7]+0xFFFFADB0u; // 801E34A8
  W32(c->r[3]+0x00000004u,c->r[6]); // 801E34AC
  W32(c->r[3]+0x00000000u,c->r[9]); // 801E34B0
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E34B4
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 801E34B8
  W32(c->r[3]+0x00000010u,c->r[7]); // 801E34BC
  W8(c->r[3]+0x00000014u,c->r[5]); // 801E34C0
  if (!crb(c,2)) return; // 801E34C4
  c->r[4]=0u+0x80200000u; // 801E34C8
  c->r[0]=0u+0x00000000u; // 801E34CC
  c->r[4]=c->r[4]+0xFFFFAAB0u; // 801E34D0
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E34D4
  W8(c->r[3]+0x00000014u,c->r[0]); // 801E34D8
  return; // 801E34DC
}

// fn_801E34E0
void f_801E34E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E34E0
  c->r[0]=c->lr; // 801E34E4
  cmps(c,0,(int32_t)c->r[3],0); // 801E34E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E34EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E34F0
  c->r[31]=c->r[4]|c->r[4]; // 801E34F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E34F8
  c->r[30]=c->r[3]|c->r[3]; // 801E34FC
  if (crb(c,2)) { goto L_801E3534; } // 801E3500
  c->r[0]=R8(c->r[3]+0x00000014u); // 801E3504
  c->r[4]=0u+0x80250000u; // 801E3508
  c->r[4]=c->r[4]+0xFFFFA278u; // 801E350C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3510
  cmps(c,0,(int32_t)c->r[0],0); // 801E3514
  if (crb(c,2)) { goto L_801E3524; } // 801E3518
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E351C
  c->lr=0x801E3524u; f_800D9450(c); // 801E3520
L_801E3524:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E3524
  if (!crb(c,1)) { goto L_801E3534; } // 801E3528
  c->r[3]=c->r[30]|c->r[30]; // 801E352C
  c->lr=0x801E3534u; f_800D93B0(c); // 801E3530
L_801E3534:;
  c->r[3]=c->r[30]|c->r[30]; // 801E3534
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3538
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E353C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3540
  c->lr=c->r[0]; // 801E3544
  c->r[1]=c->r[1]+0x00000010u; // 801E3548
  return; // 801E354C
}

// fn_801E3550
void f_801E3550(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 801E3550
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801E3554
  c->r[0]=R8(c->r[3]+c->r[0]); // 801E3558
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E355C
  return; // 801E3560
}

// fn_801E3564
void f_801E3564(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],c->r[5]); // 801E3564
  c->r[6]=c->r[5]-c->r[4]; // 801E3568
  if (!crb(c,0)) { goto L_801E3628; } // 801E356C
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801E3570
  c->ctr=c->r[0]; // 801E3574
  if (crb(c,2)) { goto L_801E360C; } // 801E3578
L_801E357C:;
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E357C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E3580
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E3584
  W8(c->r[4]+0x00000000u,c->r[0]); // 801E3588
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E358C
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E3590
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E3594
  W8(c->r[4]+0x00000001u,c->r[0]); // 801E3598
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E359C
  c->r[0]=R8(c->r[4]+0x00000002u); // 801E35A0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E35A4
  W8(c->r[4]+0x00000002u,c->r[0]); // 801E35A8
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E35AC
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E35B0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E35B4
  W8(c->r[4]+0x00000003u,c->r[0]); // 801E35B8
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E35BC
  c->r[0]=R8(c->r[4]+0x00000004u); // 801E35C0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E35C4
  W8(c->r[4]+0x00000004u,c->r[0]); // 801E35C8
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E35CC
  c->r[0]=R8(c->r[4]+0x00000005u); // 801E35D0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E35D4
  W8(c->r[4]+0x00000005u,c->r[0]); // 801E35D8
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E35DC
  c->r[0]=R8(c->r[4]+0x00000006u); // 801E35E0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E35E4
  W8(c->r[4]+0x00000006u,c->r[0]); // 801E35E8
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E35EC
  c->r[0]=R8(c->r[4]+0x00000007u); // 801E35F0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E35F4
  W8(c->r[4]+0x00000007u,c->r[0]); // 801E35F8
  c->r[4]=c->r[4]+0x00000008u; // 801E35FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E357C; } // 801E3600
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 801E3604
  if (crb(c,2)) { goto L_801E3628; } // 801E3608
L_801E360C:;
  c->ctr=c->r[6]; // 801E360C
L_801E3610:;
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E3610
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E3614
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E3618
  W8(c->r[4]+0x00000000u,c->r[0]); // 801E361C
  c->r[4]=c->r[4]+0x00000001u; // 801E3620
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3610; } // 801E3624
L_801E3628:;
  c->r[3]=c->r[5]|c->r[5]; // 801E3628
  return; // 801E362C
}

// fn_801E3630
void f_801E3630(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801E3630
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801E3634
  c->r[0]=R8(c->r[3]+c->r[0]); // 801E3638
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E363C
  return; // 801E3640
}

// fn_801E3644
void f_801E3644(Ctx* __restrict c) {
  cmpu(c,0,c->r[4],c->r[5]); // 801E3644
  c->r[6]=c->r[5]-c->r[4]; // 801E3648
  if (!crb(c,0)) { goto L_801E3708; } // 801E364C
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801E3650
  c->ctr=c->r[0]; // 801E3654
  if (crb(c,2)) { goto L_801E36EC; } // 801E3658
L_801E365C:;
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E365C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E3660
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E3664
  W8(c->r[4]+0x00000000u,c->r[0]); // 801E3668
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E366C
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E3670
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E3674
  W8(c->r[4]+0x00000001u,c->r[0]); // 801E3678
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E367C
  c->r[0]=R8(c->r[4]+0x00000002u); // 801E3680
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E3684
  W8(c->r[4]+0x00000002u,c->r[0]); // 801E3688
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E368C
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E3690
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E3694
  W8(c->r[4]+0x00000003u,c->r[0]); // 801E3698
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E369C
  c->r[0]=R8(c->r[4]+0x00000004u); // 801E36A0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E36A4
  W8(c->r[4]+0x00000004u,c->r[0]); // 801E36A8
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E36AC
  c->r[0]=R8(c->r[4]+0x00000005u); // 801E36B0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E36B4
  W8(c->r[4]+0x00000005u,c->r[0]); // 801E36B8
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E36BC
  c->r[0]=R8(c->r[4]+0x00000006u); // 801E36C0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E36C4
  W8(c->r[4]+0x00000006u,c->r[0]); // 801E36C8
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E36CC
  c->r[0]=R8(c->r[4]+0x00000007u); // 801E36D0
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E36D4
  W8(c->r[4]+0x00000007u,c->r[0]); // 801E36D8
  c->r[4]=c->r[4]+0x00000008u; // 801E36DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E365C; } // 801E36E0
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 801E36E4
  if (crb(c,2)) { goto L_801E3708; } // 801E36E8
L_801E36EC:;
  c->ctr=c->r[6]; // 801E36EC
L_801E36F0:;
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 801E36F0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E36F4
  c->r[0]=R8(c->r[7]+c->r[0]); // 801E36F8
  W8(c->r[4]+0x00000000u,c->r[0]); // 801E36FC
  c->r[4]=c->r[4]+0x00000001u; // 801E3700
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E36F0; } // 801E3704
L_801E3708:;
  c->r[3]=c->r[5]|c->r[5]; // 801E3708
  return; // 801E370C
}

// fn_801E3710
void f_801E3710(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 801E3710
  return; // 801E3714
}

// fn_801E3718
void f_801E3718(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3718
  c->r[0]=c->lr; // 801E371C
  c->r[3]=c->r[6]|c->r[6]; // 801E3720
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3728
  c->r[31]=c->r[5]|c->r[5]; // 801E372C
  c->r[5]=c->r[5]-c->r[4]; // 801E3730
  c->lr=0x801E3738u; f_80004364(c); // 801E3734
  c->r[3]=c->r[31]|c->r[31]; // 801E3738
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E373C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3740
  c->lr=c->r[0]; // 801E3744
  c->r[1]=c->r[1]+0x00000010u; // 801E3748
  return; // 801E374C
}

// fn_801E3750
void f_801E3750(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 801E3750
  return; // 801E3754
}

// fn_801E3758
void f_801E3758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3758
  c->r[0]=c->lr; // 801E375C
  c->r[3]=c->r[7]|c->r[7]; // 801E3760
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3764
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3768
  c->r[31]=c->r[5]|c->r[5]; // 801E376C
  c->r[5]=c->r[5]-c->r[4]; // 801E3770
  c->lr=0x801E3778u; f_80004364(c); // 801E3774
  c->r[3]=c->r[31]|c->r[31]; // 801E3778
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E377C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3780
  c->lr=c->r[0]; // 801E3784
  c->r[1]=c->r[1]+0x00000010u; // 801E3788
  return; // 801E378C
}

// fn_801E3790
void f_801E3790(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E3790
  return; // 801E3794
}

// fn_801E3798
void f_801E3798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3798
  c->r[0]=c->lr; // 801E379C
  cmps(c,0,(int32_t)c->r[3],0); // 801E37A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E37A4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E37A8
  c->r[31]=c->r[1]|c->r[1]; // 801E37AC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E37B0
  c->r[30]=c->r[4]|c->r[4]; // 801E37B4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E37B8
  c->r[29]=c->r[3]|c->r[3]; // 801E37BC
  if (crb(c,2)) { goto L_801E3800; } // 801E37C0
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 801E37C4
  if (crb(c,2)) { goto L_801E37F0; } // 801E37C8
  if (crb(c,2)) { goto L_801E37F0; } // 801E37CC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E37D0
  cmps(c,0,(int32_t)c->r[3],0); // 801E37D4
  if (crb(c,2)) { goto L_801E37F0; } // 801E37D8
  c->lr=0x801E37E0u; f_801E42EC(c); // 801E37DC
  goto L_801E37F0; // 801E37E0
  c->r[3]=c->r[31]+0x00000008u; // 801E37E4
  c->lr=0x801E37ECu; f_801D6FB4(c); // 801E37E8
L_801E37EC:;
  IRQCHK(c); goto L_801E37EC; // 801E37EC
L_801E37F0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; cr0(c,c->r[0]); // 801E37F0
  if (!crb(c,1)) { goto L_801E3800; } // 801E37F4
  c->r[3]=c->r[29]|c->r[29]; // 801E37F8
  c->lr=0x801E3800u; f_800D93B0(c); // 801E37FC
L_801E3800:;
  c->r[10]=c->r[31]|c->r[31]; // 801E3800
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 801E3804
  c->r[3]=c->r[29]|c->r[29]; // 801E3808
  c->r[30]=R32(c->r[10]+0x00000028u); // 801E380C
  c->r[29]=R32(c->r[10]+0x00000024u); // 801E3810
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E3814
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E3818
  c->r[1]=c->r[10]|c->r[10]; // 801E381C
  c->lr=c->r[0]; // 801E3820
  return; // 801E3824
}

// fn_801E3828
void f_801E3828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3828
  c->r[0]=c->lr; // 801E382C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3834
  c->r[31]=c->r[3]|c->r[3]; // 801E3838
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E383C
  c->r[4]=R32(c->r[13]+0xFFFFAD88u); // 801E3840
  c->lr=0x801E3848u; f_801DBB04(c); // 801E3844
  c->r[0]=cntlz(c->r[3]); // 801E3848
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 801E384C
  if (crb(c,2)) { goto L_801E385C; } // 801E3850
  c->r[3]=c->r[31]+0x0000000Cu; // 801E3854
  goto L_801E3860; // 801E3858
L_801E385C:;
  c->r[3]=0u+0x00000000u; // 801E385C
L_801E3860:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3860
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3864
  c->lr=c->r[0]; // 801E3868
  c->r[1]=c->r[1]+0x00000010u; // 801E386C
  return; // 801E3870
}

// fn_801E3874
void f_801E3874(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801E3874
  c->r[4]=0u+0x00000001u; // 801E3878
  f_801E2A78(c); return; // 801E387C
}

// dtor_801E3880
void f_801E3880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3880
  c->r[0]=c->lr; // 801E3884
  cmps(c,0,(int32_t)c->r[3],0); // 801E3888
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E388C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3890
  c->r[31]=c->r[4]|c->r[4]; // 801E3894
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E3898
  c->r[30]=c->r[3]|c->r[3]; // 801E389C
  if (crb(c,2)) { goto L_801E38C8; } // 801E38A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E38A4
  cmps(c,0,(int32_t)c->r[3],0); // 801E38A8
  if (crb(c,2)) { goto L_801E38B8; } // 801E38AC
  c->r[4]=0u+0x00000001u; // 801E38B0
  c->lr=0x801E38B8u; f_801E2A78(c); // 801E38B4
L_801E38B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E38B8
  if (!crb(c,1)) { goto L_801E38C8; } // 801E38BC
  c->r[3]=c->r[30]|c->r[30]; // 801E38C0
  c->lr=0x801E38C8u; f_800D93B0(c); // 801E38C4
L_801E38C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801E38C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E38CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E38D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E38D4
  c->lr=c->r[0]; // 801E38D8
  c->r[1]=c->r[1]+0x00000010u; // 801E38DC
  return; // 801E38E0
}

// fn_801E38E4
void f_801E38E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E38E4
  c->r[0]=c->lr; // 801E38E8
  cmps(c,0,(int32_t)c->r[3],0); // 801E38EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E38F0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E38F4
  c->r[31]=c->r[1]|c->r[1]; // 801E38F8
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E38FC
  c->r[30]=c->r[4]|c->r[4]; // 801E3900
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E3904
  c->r[29]=c->r[3]|c->r[3]; // 801E3908
  if (crb(c,2)) { goto L_801E3950; } // 801E390C
  if (crb(c,2)) { goto L_801E3940; } // 801E3910
  c->r[3]=addc(c,c->r[3],0x00000004u,0); cr0(c,c->r[3]); // 801E3914
  if (crb(c,2)) { goto L_801E3940; } // 801E3918
  if (crb(c,2)) { goto L_801E3940; } // 801E391C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E3920
  cmps(c,0,(int32_t)c->r[3],0); // 801E3924
  if (crb(c,2)) { goto L_801E3940; } // 801E3928
  c->lr=0x801E3930u; f_801E42EC(c); // 801E392C
  goto L_801E3940; // 801E3930
  c->r[3]=c->r[31]+0x00000008u; // 801E3934
  c->lr=0x801E393Cu; f_801D6FB4(c); // 801E3938
L_801E393C:;
  IRQCHK(c); goto L_801E393C; // 801E393C
L_801E3940:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; cr0(c,c->r[0]); // 801E3940
  if (!crb(c,1)) { goto L_801E3950; } // 801E3944
  c->r[3]=c->r[29]|c->r[29]; // 801E3948
  c->lr=0x801E3950u; f_800D93B0(c); // 801E394C
L_801E3950:;
  c->r[10]=c->r[31]|c->r[31]; // 801E3950
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 801E3954
  c->r[3]=c->r[29]|c->r[29]; // 801E3958
  c->r[30]=R32(c->r[10]+0x00000028u); // 801E395C
  c->r[29]=R32(c->r[10]+0x00000024u); // 801E3960
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E3964
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E3968
  c->r[1]=c->r[10]|c->r[10]; // 801E396C
  c->lr=c->r[0]; // 801E3970
  return; // 801E3974
}

// fn_801E3978
void f_801E3978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3978
  c->r[0]=c->lr; // 801E397C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3980
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3988
  c->r[31]=c->r[3]|c->r[3]; // 801E398C
  if (crb(c,2)) { goto L_801E39A0; } // 801E3990
  cmps(c,0,(int32_t)c->r[4],0); // 801E3994
  if (!crb(c,1)) { goto L_801E39A0; } // 801E3998
  c->lr=0x801E39A0u; f_800D93B0(c); // 801E399C
L_801E39A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801E39A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E39A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E39A8
  c->lr=c->r[0]; // 801E39AC
  c->r[1]=c->r[1]+0x00000010u; // 801E39B0
  return; // 801E39B4
}

// fn_801E39B8
void f_801E39B8(Ctx* __restrict c) {
  c->r[0]=R8(c->r[13]+0xFFFFB7D4u); // 801E39B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E39BC
  if (!crb(c,2)) { goto L_801E39CC; } // 801E39C0
  c->r[0]=0u+0x00000001u; // 801E39C4
  W8(c->r[13]+0xFFFFB7D4u,c->r[0]); // 801E39C8
L_801E39CC:;
  c->r[0]=R8(c->r[13]+0xFFFFB7D5u); // 801E39CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E39D0
  if (!crb(c,2)) { goto L_801E39E0; } // 801E39D4
  c->r[0]=0u+0x00000001u; // 801E39D8
  W8(c->r[13]+0xFFFFB7D5u,c->r[0]); // 801E39DC
L_801E39E0:;
  c->r[0]=R8(c->r[13]+0xFFFFB7D6u); // 801E39E0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E39E4
  if (!crb(c,2)) { goto L_801E39F4; } // 801E39E8
  c->r[0]=0u+0x00000001u; // 801E39EC
  W8(c->r[13]+0xFFFFB7D6u,c->r[0]); // 801E39F0
L_801E39F4:;
  c->r[0]=R8(c->r[13]+0xFFFFB7D7u); // 801E39F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801E39F8
  if (!crb(c,2)) return; // 801E39FC
  c->r[0]=0u+0x00000001u; // 801E3A00
  W8(c->r[13]+0xFFFFB7D7u,c->r[0]); // 801E3A04
  return; // 801E3A08
}

// fn_801E3A0C
void f_801E3A0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3A0C
  c->r[0]=c->lr; // 801E3A10
  cmps(c,0,(int32_t)c->r[3],0); // 801E3A14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E3A18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E3A1C
  c->r[31]=c->r[1]|c->r[1]; // 801E3A20
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E3A24
  c->r[30]=c->r[4]|c->r[4]; // 801E3A28
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E3A2C
  c->r[29]=c->r[3]|c->r[3]; // 801E3A30
  if (crb(c,2)) { goto L_801E3AC0; } // 801E3A34
  c->r[5]=R8(c->r[3]+0x00000030u); // 801E3A38
  c->r[4]=0u+0x80250000u; // 801E3A3C
  c->r[4]=c->r[4]+0xFFFFA300u; // 801E3A40
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3A44
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 801E3A48
  if (crb(c,2)) { goto L_801E3A7C; } // 801E3A4C
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 801E3A50
  if (!crb(c,2)) { goto L_801E3A7C; } // 801E3A54
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801E3A58
  cmps(c,0,(int32_t)c->r[12],0); // 801E3A5C
  if (crb(c,2)) { goto L_801E3A74; } // 801E3A60
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E3A64
  c->ctr=c->r[12]; // 801E3A68
  if (true) { c->lr=0x801E3A70u; dispatch(c,c->ctr); } // 801E3A6C
  goto L_801E3A7C; // 801E3A70
L_801E3A74:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E3A74
  c->lr=0x801E3A7Cu; f_800D9450(c); // 801E3A78
L_801E3A7C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E3A7C
  if (crb(c,2)) { goto L_801E3AB0; } // 801E3A80
  c->r[3]=addc(c,c->r[29],0x0000001Cu,0); cr0(c,c->r[3]); // 801E3A84
  if (crb(c,2)) { goto L_801E3AB0; } // 801E3A88
  if (crb(c,2)) { goto L_801E3AB0; } // 801E3A8C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E3A90
  cmps(c,0,(int32_t)c->r[3],0); // 801E3A94
  if (crb(c,2)) { goto L_801E3AB0; } // 801E3A98
  c->lr=0x801E3AA0u; f_801E42EC(c); // 801E3A9C
  goto L_801E3AB0; // 801E3AA0
  c->r[3]=c->r[31]+0x00000008u; // 801E3AA4
  c->lr=0x801E3AACu; f_801D6FB4(c); // 801E3AA8
L_801E3AAC:;
  IRQCHK(c); goto L_801E3AAC; // 801E3AAC
L_801E3AB0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; cr0(c,c->r[0]); // 801E3AB0
  if (!crb(c,1)) { goto L_801E3AC0; } // 801E3AB4
  c->r[3]=c->r[29]|c->r[29]; // 801E3AB8
  c->lr=0x801E3AC0u; f_800D93B0(c); // 801E3ABC
L_801E3AC0:;
  c->r[10]=c->r[31]|c->r[31]; // 801E3AC0
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 801E3AC4
  c->r[3]=c->r[29]|c->r[29]; // 801E3AC8
  c->r[30]=R32(c->r[10]+0x00000028u); // 801E3ACC
  c->r[29]=R32(c->r[10]+0x00000024u); // 801E3AD0
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E3AD4
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E3AD8
  c->r[1]=c->r[10]|c->r[10]; // 801E3ADC
  c->lr=c->r[0]; // 801E3AE0
  return; // 801E3AE4
}

// fn_801E3AE8
void f_801E3AE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3AE8
  c->r[0]=c->lr; // 801E3AEC
  cmps(c,0,(int32_t)c->r[4],-1); // 801E3AF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E3AF4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E3AF8
  c->r[23]=c->r[3]|c->r[3]; // 801E3AFC
  c->r[24]=c->r[4]|c->r[4]; // 801E3B00
  if (!crb(c,2)) { goto L_801E3B10; } // 801E3B04
  c->r[3]=0u+0x00000000u; // 801E3B08
  goto L_801E3D0C; // 801E3B0C
L_801E3B10:;
  c->r[7]=R32(c->r[3]+0x00000018u); // 801E3B10
  c->r[5]=R32(c->r[3]+0x00000014u); // 801E3B14
  cmpu(c,0,c->r[5],c->r[7]); // 801E3B18
  if (!crb(c,0)) { goto L_801E3B38; } // 801E3B1C
  W8(c->r[5]+0x00000000u,c->r[4]); // 801E3B20
  c->r[4]=R32(c->r[3]+0x00000014u); // 801E3B24
  c->r[0]=c->r[4]+0x00000001u; // 801E3B28
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E3B2C
  c->r[3]=c->r[24]|c->r[24]; // 801E3B30
  goto L_801E3D0C; // 801E3B34
L_801E3B38:;
  c->r[4]=R8(c->r[3]+0x00000030u); // 801E3B38
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801E3B3C
  if (crb(c,2)) { goto L_801E3B4C; } // 801E3B40
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801E3B44
  if (crb(c,2)) { goto L_801E3B54; } // 801E3B48
L_801E3B4C:;
  c->r[3]=0u+0xFFFFFFFFu; // 801E3B4C
  goto L_801E3D0C; // 801E3B50
L_801E3B54:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 801E3B54
  c->r[8]=R32(c->r[3]+0x00000024u); // 801E3B58
  c->r[25]=c->r[7]-c->r[6]; // 801E3B5C
  c->r[7]=R32(c->r[3]+0x00000010u); // 801E3B60
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801E3B64
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[8]); // 801E3B68
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E3B6C
  c->r[27]=c->r[7]-c->r[6]; // 801E3B70
  c->r[29]=c->r[4]-c->r[6]; // 801E3B74
  c->r[26]=c->r[5]-c->r[7]; // 801E3B78
  c->r[28]=c->r[0]-c->r[6]; // 801E3B7C
  c->r[30]=rotl(c->r[25],1)&0xFFFFFFFEu; // 801E3B80
  if (!crb(c,0)) { goto L_801E3B8C; } // 801E3B84
  c->r[30]=c->r[8]|c->r[8]; // 801E3B88
L_801E3B8C:;
  c->r[12]=R32(c->r[3]+0x00000028u); // 801E3B8C
  cmps(c,0,(int32_t)c->r[12],0); // 801E3B90
  if (crb(c,2)) { goto L_801E3BAC; } // 801E3B94
  c->r[3]=c->r[30]|c->r[30]; // 801E3B98
  c->ctr=c->r[12]; // 801E3B9C
  if (true) { c->lr=0x801E3BA4u; dispatch(c,c->ctr); } // 801E3BA0
  c->r[31]=c->r[3]|c->r[3]; // 801E3BA4
  goto L_801E3BBC; // 801E3BA8
L_801E3BAC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E3BAC
  c->r[4]=c->r[13]+0xFFFFB760u; // 801E3BB0
  c->lr=0x801E3BB8u; f_801D4F54(c); // 801E3BB4
  c->r[31]=c->r[3]|c->r[3]; // 801E3BB8
L_801E3BBC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E3BBC
  if (!crb(c,2)) { goto L_801E3BCC; } // 801E3BC0
  c->r[3]=0u+0xFFFFFFFFu; // 801E3BC4
  goto L_801E3D0C; // 801E3BC8
L_801E3BCC:;
  c->r[0]=R8(c->r[23]+0x00000030u); // 801E3BCC
  cmps(c,1,(int32_t)c->r[25],0); // 801E3BD0
  c->r[0]=c->r[0]|0x00000001u; // 801E3BD4
  W8(c->r[23]+0x00000030u,c->r[0]); // 801E3BD8
  if (crb(c,6)) { goto L_801E3CCC; } // 801E3BDC
  c->r[7]=R32(c->r[23]+0x00000004u); // 801E3BE0
  c->r[6]=c->r[31]|c->r[31]; // 801E3BE4
  c->r[8]=0u+0x00000000u; // 801E3BE8
  if (!crb(c,5)) { goto L_801E3CA8; } // 801E3BEC
  cmps(c,0,(int32_t)c->r[25],8); // 801E3BF0
  c->r[4]=c->r[25]+0xFFFFFFF8u; // 801E3BF4
  if (!crb(c,1)) { goto L_801E3C84; } // 801E3BF8
  c->r[5]=0u+0x00000000u; // 801E3BFC
  if (crb(c,4)) { goto L_801E3C18; } // 801E3C00
  c->r[3]=0u+0x80000000u; // 801E3C04
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E3C08
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 801E3C0C
  if (crb(c,1)) { goto L_801E3C18; } // 801E3C10
  c->r[5]=0u+0x00000001u; // 801E3C14
L_801E3C18:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E3C18
  if (crb(c,2)) { goto L_801E3C84; } // 801E3C1C
  c->r[0]=c->r[4]+0x00000007u; // 801E3C20
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801E3C24
  c->ctr=c->r[0]; // 801E3C28
  cmps(c,0,(int32_t)c->r[4],0); // 801E3C2C
  if (!crb(c,1)) { goto L_801E3C84; } // 801E3C30
L_801E3C34:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E3C34
  c->r[8]=c->r[8]+0x00000008u; // 801E3C38
  W8(c->r[6]+0x00000000u,c->r[0]); // 801E3C3C
  c->r[0]=R8(c->r[7]+0x00000001u); // 801E3C40
  W8(c->r[6]+0x00000001u,c->r[0]); // 801E3C44
  c->r[0]=R8(c->r[7]+0x00000002u); // 801E3C48
  W8(c->r[6]+0x00000002u,c->r[0]); // 801E3C4C
  c->r[0]=R8(c->r[7]+0x00000003u); // 801E3C50
  W8(c->r[6]+0x00000003u,c->r[0]); // 801E3C54
  c->r[0]=R8(c->r[7]+0x00000004u); // 801E3C58
  W8(c->r[6]+0x00000004u,c->r[0]); // 801E3C5C
  c->r[0]=R8(c->r[7]+0x00000005u); // 801E3C60
  W8(c->r[6]+0x00000005u,c->r[0]); // 801E3C64
  c->r[0]=R8(c->r[7]+0x00000006u); // 801E3C68
  W8(c->r[6]+0x00000006u,c->r[0]); // 801E3C6C
  c->r[0]=R8(c->r[7]+0x00000007u); // 801E3C70
  c->r[7]=c->r[7]+0x00000008u; // 801E3C74
  W8(c->r[6]+0x00000007u,c->r[0]); // 801E3C78
  c->r[6]=c->r[6]+0x00000008u; // 801E3C7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3C34; } // 801E3C80
L_801E3C84:;
  c->r[0]=c->r[25]-c->r[8]; // 801E3C84
  c->ctr=c->r[0]; // 801E3C88
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[25]); // 801E3C8C
  if (!crb(c,0)) { goto L_801E3CA8; } // 801E3C90
L_801E3C94:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 801E3C94
  c->r[7]=c->r[7]+0x00000001u; // 801E3C98
  W8(c->r[6]+0x00000000u,c->r[0]); // 801E3C9C
  c->r[6]=c->r[6]+0x00000001u; // 801E3CA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E3C94; } // 801E3CA4
L_801E3CA8:;
  c->r[12]=R32(c->r[23]+0x0000002Cu); // 801E3CA8
  cmps(c,0,(int32_t)c->r[12],0); // 801E3CAC
  if (crb(c,2)) { goto L_801E3CC4; } // 801E3CB0
  c->r[3]=R32(c->r[23]+0x00000004u); // 801E3CB4
  c->ctr=c->r[12]; // 801E3CB8
  if (true) { c->lr=0x801E3CC0u; dispatch(c,c->ctr); } // 801E3CBC
  goto L_801E3CCC; // 801E3CC0
L_801E3CC4:;
  c->r[3]=R32(c->r[23]+0x00000004u); // 801E3CC4
  c->lr=0x801E3CCCu; f_800D9450(c); // 801E3CC8
L_801E3CCC:;
  c->r[5]=c->r[31]+c->r[27]; // 801E3CCC
  c->r[7]=c->r[31]+c->r[28]; // 801E3CD0
  c->r[6]=c->r[31]+c->r[29]; // 801E3CD4
  c->r[0]=c->r[31]+c->r[30]; // 801E3CD8
  c->r[4]=c->r[5]+c->r[26]; // 801E3CDC
  W32(c->r[23]+0x00000004u,c->r[31]); // 801E3CE0
  c->r[3]=c->r[24]|c->r[24]; // 801E3CE4
  W32(c->r[23]+0x00000008u,c->r[7]); // 801E3CE8
  W32(c->r[23]+0x0000000Cu,c->r[6]); // 801E3CEC
  W32(c->r[23]+0x00000010u,c->r[5]); // 801E3CF0
  W32(c->r[23]+0x00000018u,c->r[0]); // 801E3CF4
  W32(c->r[23]+0x00000014u,c->r[4]); // 801E3CF8
  W8(c->r[5]+c->r[26],c->r[24]); // 801E3CFC
  c->r[4]=R32(c->r[23]+0x00000014u); // 801E3D00
  c->r[0]=c->r[4]+0x00000001u; // 801E3D04
  W32(c->r[23]+0x00000014u,c->r[0]); // 801E3D08
L_801E3D0C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E3D0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E3D10
  c->lr=c->r[0]; // 801E3D14
  c->r[1]=c->r[1]+0x00000030u; // 801E3D18
  return; // 801E3D1C
}

// fn_801E3D20
void f_801E3D20(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000008u); // 801E3D20
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E3D24
  cmpu(c,0,c->r[5],c->r[0]); // 801E3D28
  if (crb(c,1)) { goto L_801E3D38; } // 801E3D2C
  c->r[3]=0u+0xFFFFFFFFu; // 801E3D30
  return; // 801E3D34
L_801E3D38:;
  cmps(c,0,(int32_t)c->r[4],-1); // 801E3D38
  c->r[6]=c->r[5]+0xFFFFFFFFu; // 801E3D3C
  W32(c->r[3]+0x00000008u,c->r[6]); // 801E3D40
  if (!crb(c,2)) { goto L_801E3D50; } // 801E3D44
  c->r[3]=0u+0x00000000u; // 801E3D48
  return; // 801E3D4C
L_801E3D50:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 801E3D50
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801E3D54
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3D58
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801E3D5C
  if (!crb(c,2)) { goto L_801E3D6C; } // 801E3D60
  c->r[3]=c->r[4]|c->r[4]; // 801E3D64
  return; // 801E3D68
L_801E3D6C:;
  c->r[0]=R8(c->r[3]+0x00000030u); // 801E3D6C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801E3D70
  if (!crb(c,2)) { goto L_801E3D84; } // 801E3D74
  W8(c->r[6]+0x00000000u,c->r[4]); // 801E3D78
  c->r[3]=c->r[4]|c->r[4]; // 801E3D7C
  return; // 801E3D80
L_801E3D84:;
  c->r[0]=c->r[6]+0x00000001u; // 801E3D84
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E3D88
  c->r[3]=0u+0xFFFFFFFFu; // 801E3D8C
  return; // 801E3D90
}

// fn_801E3D94
void f_801E3D94(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E3D94
  c->r[4]=R32(c->r[3]+0x00000008u); // 801E3D98
  cmpu(c,0,c->r[4],c->r[0]); // 801E3D9C
  if (!crb(c,0)) { goto L_801E3DAC; } // 801E3DA0
  c->r[3]=R8(c->r[4]+0x00000000u); // 801E3DA4
  return; // 801E3DA8
L_801E3DAC:;
  c->r[5]=R32(c->r[3]+0x00000014u); // 801E3DAC
  cmpu(c,0,c->r[0],c->r[5]); // 801E3DB0
  if (!crb(c,0)) { goto L_801E3DC8; } // 801E3DB4
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E3DB8
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801E3DBC
  c->r[3]=R8(c->r[4]+0x00000000u); // 801E3DC0
  return; // 801E3DC4
L_801E3DC8:;
  c->r[3]=0u+0xFFFFFFFFu; // 801E3DC8
  return; // 801E3DCC
}

// fn_801E3DD0
void f_801E3DD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3DD0
  c->r[0]=rotl(c->r[8],0)&0x00000018u; // 801E3DD4
  c->r[9]=0u+0x00000018u; // 801E3DD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3DDC
  cmpu(c,0,c->r[9],c->r[0]); // 801E3DE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E3DE4
  if (!crb(c,2)) { goto L_801E3DF4; } // 801E3DE8
  cmpu(c,0,c->r[7],0x00000002u); // 801E3DEC
  if (crb(c,2)) { goto L_801E3DFC; } // 801E3DF0
L_801E3DF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801E3DF4
  if (!crb(c,2)) { goto L_801E3E14; } // 801E3DF8
L_801E3DFC:;
  c->r[4]=0u+0xFFFFFFFFu; // 801E3DFC
  c->r[0]=0u+0x00000000u; // 801E3E00
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E3E04
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3E08
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E3E0C
  goto L_801E4014; // 801E3E10
L_801E3E14:;
  c->r[0]=rotl(c->r[8],0)&0x00000008u; cr0(c,c->r[0]); // 801E3E14
  c->r[9]=0u+0xFFFFFFFFu; // 801E3E18
  c->r[0]=0u+0xFFFFFFFFu; // 801E3E1C
  if (crb(c,2)) { goto L_801E3F10; } // 801E3E20
  cmps(c,0,(int32_t)c->r[7],1); // 801E3E24
  if (crb(c,2)) { goto L_801E3E40; } // 801E3E28
  cmps(c,0,(int32_t)c->r[7],2); // 801E3E2C
  if (crb(c,2)) { goto L_801E3E4C; } // 801E3E30
  cmps(c,0,(int32_t)c->r[7],4); // 801E3E34
  if (crb(c,2)) { goto L_801E3E60; } // 801E3E38
  goto L_801E3E74; // 801E3E3C
L_801E3E40:;
  c->r[9]=0u+0x00000000u; // 801E3E40
  c->r[0]=0u+0x00000000u; // 801E3E44
  goto L_801E3E8C; // 801E3E48
L_801E3E4C:;
  c->r[9]=R32(c->r[4]+0x00000004u); // 801E3E4C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E3E50
  c->r[9]=c->r[0]-c->r[9]; // 801E3E54
  c->r[0]=sraw(c,c->r[9],31); // 801E3E58
  goto L_801E3E8C; // 801E3E5C
L_801E3E60:;
  c->r[9]=R32(c->r[4]+0x00000004u); // 801E3E60
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E3E64
  c->r[9]=c->r[0]-c->r[9]; // 801E3E68
  c->r[0]=sraw(c,c->r[9],31); // 801E3E6C
  goto L_801E3E8C; // 801E3E70
L_801E3E74:;
  c->r[4]=0u+0xFFFFFFFFu; // 801E3E74
  c->r[0]=0u+0x00000000u; // 801E3E78
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E3E7C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3E80
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E3E84
  goto L_801E4014; // 801E3E88
L_801E3E8C:;
  c->r[10]=R32(c->r[4]+0x00000008u); // 801E3E8C
  c->r[9]=addc(c,c->r[9],c->r[6],0); // 801E3E90
  c->r[0]=addc(c,c->r[0],c->r[5],c->xer_ca); // 801E3E94
  cmps(c,0,(int32_t)c->r[10],0); // 801E3E98
  if (crb(c,2)) { goto L_801E3EE8; } // 801E3E9C
  c->r[10]=0u+0x00000000u; // 801E3EA0
  c->r[12]=c->r[0]^0x80000000u; // 801E3EA4
  c->r[11]=c->r[10]^0x80000000u; // 801E3EA8
  c->r[10]=addc(c,~c->r[10],c->r[9],1); // 801E3EAC
  c->r[11]=addc(c,~c->r[11],c->r[12],c->xer_ca); // 801E3EB0
  c->r[11]=addc(c,~c->r[12],c->r[12],c->xer_ca); // 801E3EB4
  c->r[11]=0u-c->r[11]; cr0(c,c->r[11]); // 801E3EB8
  if (!crb(c,2)) { goto L_801E3EE8; } // 801E3EBC
  c->r[31]=R32(c->r[4]+0x0000000Cu); // 801E3EC0
  c->r[30]=R32(c->r[4]+0x00000004u); // 801E3EC4
  c->r[11]=c->r[31]-c->r[30]; // 801E3EC8
  c->r[10]=sraw(c,c->r[11],31); // 801E3ECC
  c->r[10]=c->r[10]^0x80000000u; // 801E3ED0
  c->r[11]=addc(c,~c->r[9],c->r[11],1); // 801E3ED4
  c->r[11]=addc(c,~c->r[12],c->r[10],c->xer_ca); // 801E3ED8
  c->r[11]=addc(c,~c->r[10],c->r[10],c->xer_ca); // 801E3EDC
  c->r[11]=0u-c->r[11]; cr0(c,c->r[11]); // 801E3EE0
  if (crb(c,2)) { goto L_801E3F00; } // 801E3EE4
L_801E3EE8:;
  c->r[4]=0u+0xFFFFFFFFu; // 801E3EE8
  c->r[0]=0u+0x00000000u; // 801E3EEC
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E3EF0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3EF4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E3EF8
  goto L_801E4014; // 801E3EFC
L_801E3F00:;
  c->r[10]=c->r[30]+c->r[9]; // 801E3F00
  W32(c->r[4]+0x00000004u,c->r[30]); // 801E3F04
  W32(c->r[4]+0x00000008u,c->r[10]); // 801E3F08
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 801E3F0C
L_801E3F10:;
  c->r[8]=rotl(c->r[8],0)&0x00000010u; cr0(c,c->r[8]); // 801E3F10
  if (crb(c,2)) { goto L_801E4004; } // 801E3F14
  cmps(c,0,(int32_t)c->r[7],1); // 801E3F18
  if (crb(c,2)) { goto L_801E3F34; } // 801E3F1C
  cmps(c,0,(int32_t)c->r[7],2); // 801E3F20
  if (crb(c,2)) { goto L_801E3F40; } // 801E3F24
  cmps(c,0,(int32_t)c->r[7],4); // 801E3F28
  if (crb(c,2)) { goto L_801E3F54; } // 801E3F2C
  goto L_801E3F68; // 801E3F30
L_801E3F34:;
  c->r[9]=0u+0x00000000u; // 801E3F34
  c->r[0]=0u+0x00000000u; // 801E3F38
  goto L_801E3F80; // 801E3F3C
L_801E3F40:;
  c->r[7]=R32(c->r[4]+0x00000010u); // 801E3F40
  c->r[0]=R32(c->r[4]+0x00000014u); // 801E3F44
  c->r[9]=c->r[0]-c->r[7]; // 801E3F48
  c->r[0]=sraw(c,c->r[9],31); // 801E3F4C
  goto L_801E3F80; // 801E3F50
L_801E3F54:;
  c->r[7]=R32(c->r[4]+0x00000010u); // 801E3F54
  c->r[0]=R32(c->r[4]+0x00000018u); // 801E3F58
  c->r[9]=c->r[0]-c->r[7]; // 801E3F5C
  c->r[0]=sraw(c,c->r[9],31); // 801E3F60
  goto L_801E3F80; // 801E3F64
L_801E3F68:;
  c->r[4]=0u+0xFFFFFFFFu; // 801E3F68
  c->r[0]=0u+0x00000000u; // 801E3F6C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E3F70
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3F74
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E3F78
  goto L_801E4014; // 801E3F7C
L_801E3F80:;
  c->r[7]=R32(c->r[4]+0x00000014u); // 801E3F80
  c->r[9]=addc(c,c->r[9],c->r[6],0); // 801E3F84
  c->r[0]=addc(c,c->r[0],c->r[5],c->xer_ca); // 801E3F88
  cmps(c,0,(int32_t)c->r[7],0); // 801E3F8C
  if (crb(c,2)) { goto L_801E3FDC; } // 801E3F90
  c->r[5]=0u+0x00000000u; // 801E3F94
  c->r[7]=c->r[0]^0x80000000u; // 801E3F98
  c->r[6]=c->r[5]^0x80000000u; // 801E3F9C
  c->r[5]=addc(c,~c->r[5],c->r[9],1); // 801E3FA0
  c->r[6]=addc(c,~c->r[6],c->r[7],c->xer_ca); // 801E3FA4
  c->r[6]=addc(c,~c->r[7],c->r[7],c->xer_ca); // 801E3FA8
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801E3FAC
  if (!crb(c,2)) { goto L_801E3FDC; } // 801E3FB0
  c->r[10]=R32(c->r[4]+0x00000010u); // 801E3FB4
  c->r[8]=R32(c->r[4]+0x00000018u); // 801E3FB8
  c->r[6]=c->r[8]-c->r[10]; // 801E3FBC
  c->r[5]=sraw(c,c->r[6],31); // 801E3FC0
  c->r[5]=c->r[5]^0x80000000u; // 801E3FC4
  c->r[6]=addc(c,~c->r[9],c->r[6],1); // 801E3FC8
  c->r[6]=addc(c,~c->r[7],c->r[5],c->xer_ca); // 801E3FCC
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801E3FD0
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801E3FD4
  if (crb(c,2)) { goto L_801E3FF4; } // 801E3FD8
L_801E3FDC:;
  c->r[4]=0u+0xFFFFFFFFu; // 801E3FDC
  c->r[0]=0u+0x00000000u; // 801E3FE0
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E3FE4
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E3FE8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E3FEC
  goto L_801E4014; // 801E3FF0
L_801E3FF4:;
  c->r[5]=c->r[10]+c->r[9]; // 801E3FF4
  W32(c->r[4]+0x00000010u,c->r[10]); // 801E3FF8
  W32(c->r[4]+0x00000018u,c->r[8]); // 801E3FFC
  W32(c->r[4]+0x00000014u,c->r[5]); // 801E4000
L_801E4004:;
  c->r[4]=0u+0x00000000u; // 801E4004
  W32(c->r[3]+0x00000004u,c->r[9]); // 801E4008
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E400C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E4010
L_801E4014:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4014
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4018
  c->r[1]=c->r[1]+0x00000010u; // 801E401C
  return; // 801E4020
}

// fn_801E4024
void f_801E4024(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 801E4024
  c->r[7]=0u+0xFFFFFFFFu; // 801E4028
  c->r[0]=0u+0xFFFFFFFFu; // 801E402C
  if (crb(c,2)) { goto L_801E40B8; } // 801E4030
  c->r[8]=R32(c->r[4]+0x00000008u); // 801E4034
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E4038
  cmps(c,0,(int32_t)c->r[8],0); // 801E403C
  c->r[7]=R32(c->r[5]+0x00000004u); // 801E4040
  if (crb(c,2)) { goto L_801E4090; } // 801E4044
  c->r[8]=0u+0x00000000u; // 801E4048
  c->r[10]=c->r[0]^0x80000000u; // 801E404C
  c->r[9]=c->r[8]^0x80000000u; // 801E4050
  c->r[8]=addc(c,~c->r[8],c->r[7],1); // 801E4054
  c->r[9]=addc(c,~c->r[9],c->r[10],c->xer_ca); // 801E4058
  c->r[9]=addc(c,~c->r[10],c->r[10],c->xer_ca); // 801E405C
  c->r[9]=0u-c->r[9]; cr0(c,c->r[9]); // 801E4060
  if (!crb(c,2)) { goto L_801E4090; } // 801E4064
  c->r[11]=R32(c->r[4]+0x0000000Cu); // 801E4068
  c->r[12]=R32(c->r[4]+0x00000004u); // 801E406C
  c->r[9]=c->r[11]-c->r[12]; // 801E4070
  c->r[8]=sraw(c,c->r[9],31); // 801E4074
  c->r[8]=c->r[8]^0x80000000u; // 801E4078
  c->r[9]=addc(c,~c->r[7],c->r[9],1); // 801E407C
  c->r[9]=addc(c,~c->r[10],c->r[8],c->xer_ca); // 801E4080
  c->r[9]=addc(c,~c->r[8],c->r[8],c->xer_ca); // 801E4084
  c->r[9]=0u-c->r[9]; cr0(c,c->r[9]); // 801E4088
  if (crb(c,2)) { goto L_801E40A8; } // 801E408C
L_801E4090:;
  c->r[4]=0u+0xFFFFFFFFu; // 801E4090
  c->r[0]=0u+0x00000000u; // 801E4094
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E4098
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E409C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E40A0
  return; // 801E40A4
L_801E40A8:;
  c->r[8]=c->r[12]+c->r[7]; // 801E40A8
  W32(c->r[4]+0x00000004u,c->r[12]); // 801E40AC
  W32(c->r[4]+0x00000008u,c->r[8]); // 801E40B0
  W32(c->r[4]+0x0000000Cu,c->r[11]); // 801E40B4
L_801E40B8:;
  c->r[6]=rotl(c->r[6],0)&0x00000010u; cr0(c,c->r[6]); // 801E40B8
  if (crb(c,2)) { goto L_801E4144; } // 801E40BC
  c->r[6]=R32(c->r[4]+0x00000014u); // 801E40C0
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E40C4
  cmps(c,0,(int32_t)c->r[6],0); // 801E40C8
  c->r[7]=R32(c->r[5]+0x00000004u); // 801E40CC
  if (crb(c,2)) { goto L_801E411C; } // 801E40D0
  c->r[5]=0u+0x00000000u; // 801E40D4
  c->r[8]=c->r[0]^0x80000000u; // 801E40D8
  c->r[6]=c->r[5]^0x80000000u; // 801E40DC
  c->r[5]=addc(c,~c->r[5],c->r[7],1); // 801E40E0
  c->r[6]=addc(c,~c->r[6],c->r[8],c->xer_ca); // 801E40E4
  c->r[6]=addc(c,~c->r[8],c->r[8],c->xer_ca); // 801E40E8
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801E40EC
  if (!crb(c,2)) { goto L_801E411C; } // 801E40F0
  c->r[10]=R32(c->r[4]+0x00000010u); // 801E40F4
  c->r[9]=R32(c->r[4]+0x00000018u); // 801E40F8
  c->r[6]=c->r[9]-c->r[10]; // 801E40FC
  c->r[5]=sraw(c,c->r[6],31); // 801E4100
  c->r[5]=c->r[5]^0x80000000u; // 801E4104
  c->r[6]=addc(c,~c->r[7],c->r[6],1); // 801E4108
  c->r[6]=addc(c,~c->r[8],c->r[5],c->xer_ca); // 801E410C
  c->r[6]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 801E4110
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 801E4114
  if (crb(c,2)) { goto L_801E4134; } // 801E4118
L_801E411C:;
  c->r[4]=0u+0xFFFFFFFFu; // 801E411C
  c->r[0]=0u+0x00000000u; // 801E4120
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E4124
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E4128
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E412C
  return; // 801E4130
L_801E4134:;
  c->r[5]=c->r[10]+c->r[7]; // 801E4134
  W32(c->r[4]+0x00000010u,c->r[10]); // 801E4138
  W32(c->r[4]+0x00000018u,c->r[9]); // 801E413C
  W32(c->r[4]+0x00000014u,c->r[5]); // 801E4140
L_801E4144:;
  c->r[4]=0u+0x00000000u; // 801E4144
  W32(c->r[3]+0x00000004u,c->r[7]); // 801E4148
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E414C
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E4150
  return; // 801E4154
}

// fn_801E4158
void f_801E4158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4158
  c->r[0]=c->lr; // 801E415C
  cmps(c,0,(int32_t)c->r[4],0); // 801E4160
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4164
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4168
  c->r[31]=c->r[5]|c->r[5]; // 801E416C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4170
  c->r[30]=c->r[4]|c->r[4]; // 801E4174
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4178
  c->r[29]=c->r[3]|c->r[3]; // 801E417C
  if (crb(c,2)) { goto L_801E418C; } // 801E4180
  cmps(c,0,(int32_t)c->r[5],0); // 801E4184
  if (!crb(c,2)) { goto L_801E4194; } // 801E4188
L_801E418C:;
  c->r[3]=0u+0x00000000u; // 801E418C
  goto L_801E4234; // 801E4190
L_801E4194:;
  c->r[4]=R8(c->r[3]+0x00000030u); // 801E4194
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801E4198
  if (crb(c,2)) { goto L_801E41CC; } // 801E419C
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801E41A0
  if (!crb(c,2)) { goto L_801E41CC; } // 801E41A4
  c->r[12]=R32(c->r[3]+0x0000002Cu); // 801E41A8
  cmps(c,0,(int32_t)c->r[12],0); // 801E41AC
  if (crb(c,2)) { goto L_801E41C4; } // 801E41B0
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E41B4
  c->ctr=c->r[12]; // 801E41B8
  if (true) { c->lr=0x801E41C0u; dispatch(c,c->ctr); } // 801E41BC
  goto L_801E41CC; // 801E41C0
L_801E41C4:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801E41C4
  c->lr=0x801E41CCu; f_800D9450(c); // 801E41C8
L_801E41CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E41CC
  c->r[0]=0u+0x00000000u; // 801E41D0
  W8(c->r[29]+0x00000030u,c->r[0]); // 801E41D4
  if (!crb(c,2)) { goto L_801E41EC; } // 801E41D8
  c->r[3]=c->r[30]|c->r[30]; // 801E41DC
  c->lr=0x801E41E4u; f_801D4D44(c); // 801E41E0
  c->r[31]=c->r[3]|c->r[3]; // 801E41E4
  goto L_801E41F8; // 801E41E8
L_801E41EC:;
  if (!crb(c,0)) { goto L_801E41F8; } // 801E41EC
  c->r[3]=0u+0x80000000u; // 801E41F0
  c->r[31]=c->r[3]+0xFFFFFFFFu; // 801E41F4
L_801E41F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E41F8
  if (!crb(c,2)) { goto L_801E4214; } // 801E41FC
  c->r[0]=c->r[30]+c->r[31]; // 801E4200
  W32(c->r[29]+0x00000004u,c->r[30]); // 801E4204
  W32(c->r[29]+0x00000008u,c->r[30]); // 801E4208
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801E420C
  goto L_801E4230; // 801E4210
L_801E4214:;
  c->r[0]=c->r[30]+c->r[31]; // 801E4214
  W32(c->r[29]+0x00000004u,c->r[30]); // 801E4218
  W32(c->r[29]+0x00000008u,c->r[30]); // 801E421C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801E4220
  W32(c->r[29]+0x00000014u,c->r[30]); // 801E4224
  W32(c->r[29]+0x00000010u,c->r[30]); // 801E4228
  W32(c->r[29]+0x00000018u,c->r[0]); // 801E422C
L_801E4230:;
  c->r[3]=c->r[29]|c->r[29]; // 801E4230
L_801E4234:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4234
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E4238
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E423C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4240
  c->lr=c->r[0]; // 801E4244
  c->r[1]=c->r[1]+0x00000020u; // 801E4248
  return; // 801E424C
}

// fn_801E4250
void f_801E4250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4250
  c->r[0]=c->lr; // 801E4254
  cmps(c,0,(int32_t)c->r[5],0); // 801E4258
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E425C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4260
  c->r[31]=c->r[6]|c->r[6]; // 801E4264
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4268
  c->r[30]=c->r[4]|c->r[4]; // 801E426C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4270
  c->r[29]=c->r[3]|c->r[3]; // 801E4274
  if (!crb(c,2)) { goto L_801E428C; } // 801E4278
  c->r[3]=c->r[30]|c->r[30]; // 801E427C
  c->lr=0x801E4284u; f_801D4D44(c); // 801E4280
  c->r[5]=c->r[3]|c->r[3]; // 801E4284
  goto L_801E4298; // 801E4288
L_801E428C:;
  if (!crb(c,0)) { goto L_801E4298; } // 801E428C
  c->r[3]=0u+0x80000000u; // 801E4290
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801E4294
L_801E4298:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E4298
  if (!crb(c,2)) { goto L_801E42B4; } // 801E429C
  c->r[0]=c->r[30]+c->r[5]; // 801E42A0
  W32(c->r[29]+0x00000004u,c->r[30]); // 801E42A4
  W32(c->r[29]+0x00000008u,c->r[30]); // 801E42A8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801E42AC
  goto L_801E42D0; // 801E42B0
L_801E42B4:;
  c->r[0]=c->r[31]+c->r[5]; // 801E42B4
  W32(c->r[29]+0x00000004u,c->r[30]); // 801E42B8
  W32(c->r[29]+0x00000008u,c->r[30]); // 801E42BC
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801E42C0
  W32(c->r[29]+0x00000014u,c->r[31]); // 801E42C4
  W32(c->r[29]+0x00000010u,c->r[31]); // 801E42C8
  W32(c->r[29]+0x00000018u,c->r[0]); // 801E42CC
L_801E42D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E42D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E42D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E42D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E42DC
  c->lr=c->r[0]; // 801E42E0
  c->r[1]=c->r[1]+0x00000020u; // 801E42E4
  return; // 801E42E8
}

// fn_801E42EC
void f_801E42EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E42EC
  c->r[0]=c->lr; // 801E42F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E42F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E42F8
  c->r[31]=c->r[3]|c->r[3]; // 801E42FC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E4300
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801E4304
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E4308
  if (!crb(c,2)) { goto L_801E4350; } // 801E430C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E4310
  c->r[12]=R32(c->r[12]+0x00000010u); // 801E4314
  c->ctr=c->r[12]; // 801E4318
  if (true) { c->lr=0x801E4320u; dispatch(c,c->ctr); } // 801E431C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E4320
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 801E4324
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E4328
  if (!crb(c,2)) { goto L_801E4350; } // 801E432C
  cmps(c,0,(int32_t)c->r[31],0); // 801E4330
  if (crb(c,2)) { goto L_801E4350; } // 801E4334
  c->r[12]=R32(c->r[31]+0x00000000u); // 801E4338
  c->r[3]=c->r[31]|c->r[31]; // 801E433C
  c->r[4]=0u+0x00000001u; // 801E4340
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E4344
  c->ctr=c->r[12]; // 801E4348
  if (true) { c->lr=0x801E4350u; dispatch(c,c->ctr); } // 801E434C
L_801E4350:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4350
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4354
  c->lr=c->r[0]; // 801E4358
  c->r[1]=c->r[1]+0x00000010u; // 801E435C
  return; // 801E4360
}

// TRKAccessFile
void f_801E4364(Ctx* __restrict c) {
  trace_call(0x801E4364u);
  /* twi */ // 801E4364
  return; // 801E4368
}

// TRKOpenFile
void f_801E436C(Ctx* __restrict c) {
  trace_call(0x801E436Cu);
  /* twi */ // 801E436C
  return; // 801E4370
}

// TRKCloseFile
void f_801E4374(Ctx* __restrict c) {
  trace_call(0x801E4374u);
  /* twi */ // 801E4374
  return; // 801E4378
}

// TRKPositionFile
void f_801E437C(Ctx* __restrict c) {
  trace_call(0x801E437Cu);
  /* twi */ // 801E437C
  return; // 801E4380
}

// gdev_cc_initialize
void f_801E4384(Ctx* __restrict c) {
  trace_call(0x801E4384u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4384
  c->r[0]=c->lr; // 801E4388
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E438C
  c->lr=0x801E4394u; f_801E9474(c); // 801E4390
  c->r[3]=0u+0x802E0000u; // 801E4394
  c->r[4]=0u+0x802E0000u; // 801E4398
  c->r[3]=c->r[3]+0xFFFFB390u; // 801E439C
  c->r[5]=0u+0x00000500u; // 801E43A0
  c->r[4]=c->r[4]+0xFFFFAE90u; // 801E43A4
  c->lr=0x801E43ACu; f_801E4640(c); // 801E43A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E43AC
  c->r[3]=0u+0x00000000u; // 801E43B0
  c->lr=c->r[0]; // 801E43B4
  c->r[1]=c->r[1]+0x00000010u; // 801E43B8
  return; // 801E43BC
}

// gdev_cc_shutdown
void f_801E43C0(Ctx* __restrict c) {
  trace_call(0x801E43C0u);
  c->r[3]=0u+0x00000000u; // 801E43C0
  return; // 801E43C4
}

// gdev_cc_open
void f_801E43C8(Ctx* __restrict c) {
  trace_call(0x801E43C8u);
  c->r[0]=R32(c->r[13]+0xFFFFB7D8u); // 801E43C8
  cmps(c,0,(int32_t)c->r[0],0); // 801E43CC
  if (crb(c,2)) { goto L_801E43DC; } // 801E43D0
  c->r[3]=0u+0xFFFFD8EBu; // 801E43D4
  return; // 801E43D8
L_801E43DC:;
  c->r[0]=0u+0x00000001u; // 801E43DC
  W32(c->r[13]+0xFFFFB7D8u,c->r[0]); // 801E43E0
  c->r[3]=0u+0x00000000u; // 801E43E4
  return; // 801E43E8
}

// gdev_cc_close
void f_801E43EC(Ctx* __restrict c) {
  trace_call(0x801E43ECu);
  c->r[3]=0u+0x00000000u; // 801E43EC
  return; // 801E43F0
}

// gdev_cc_read
void f_801E43F4(Ctx* __restrict c) {
  trace_call(0x801E43F4u);
  {uint32_t ea=c->r[1]+0xFFFFFAE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E43F4
  c->r[0]=c->lr; // 801E43F8
  W32(c->r[1]+0x00000524u,c->r[0]); // 801E43FC
  {uint32_t ea=c->r[1]+0x0000050Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E4400
  c->r[27]=c->r[3]|c->r[3]; // 801E4404
  c->r[28]=c->r[4]|c->r[4]; // 801E4408
  c->r[30]=0u+0x00000000u; // 801E440C
  c->r[0]=R32(c->r[13]+0xFFFFB7D8u); // 801E4410
  cmps(c,0,(int32_t)c->r[0],0); // 801E4414
  if (!crb(c,2)) { goto L_801E4424; } // 801E4418
  c->r[3]=0u+0xFFFFD8EFu; // 801E441C
  goto L_801E4494; // 801E4420
L_801E4424:;
  c->r[31]=0u+0x802E0000u; // 801E4424
  goto L_801E4468; // 801E4428
L_801E442C:;
  c->r[30]=0u+0x00000000u; // 801E442C
  c->lr=0x801E4434u; f_801E9524(c); // 801E4430
  cmps(c,0,(int32_t)c->r[3],0); // 801E4434
  c->r[29]=c->r[3]|c->r[3]; // 801E4438
  if (crb(c,2)) { goto L_801E4468; } // 801E443C
  c->r[4]=c->r[28]|c->r[28]; // 801E4440
  c->r[3]=c->r[1]+0x00000008u; // 801E4444
  c->lr=0x801E444Cu; f_801E95C8(c); // 801E4448
  cmps(c,0,(int32_t)c->r[3],0); // 801E444C
  c->r[30]=c->r[3]|c->r[3]; // 801E4450
  if (!crb(c,2)) { goto L_801E4468; } // 801E4454
  c->r[5]=c->r[29]|c->r[29]; // 801E4458
  c->r[3]=c->r[31]+0xFFFFB390u; // 801E445C
  c->r[4]=c->r[1]+0x00000008u; // 801E4460
  c->lr=0x801E4468u; f_801E4664(c); // 801E4464
L_801E4468:;
  c->r[3]=c->r[31]+0xFFFFB390u; // 801E4468
  c->lr=0x801E4470u; f_801E4638(c); // 801E446C
  cmpu(c,0,c->r[3],c->r[28]); // 801E4470
  if (crb(c,0)) { IRQCHK(c); goto L_801E442C; } // 801E4474
  cmps(c,0,(int32_t)c->r[30],0); // 801E4478
  if (!crb(c,2)) { goto L_801E4490; } // 801E447C
  c->r[4]=c->r[27]|c->r[27]; // 801E4480
  c->r[5]=c->r[28]|c->r[28]; // 801E4484
  c->r[3]=c->r[31]+0xFFFFB390u; // 801E4488
  c->lr=0x801E4490u; f_801E476C(c); // 801E448C
L_801E4490:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4490
L_801E4494:;
  {uint32_t ea=c->r[1]+0x0000050Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E4494
  c->r[0]=R32(c->r[1]+0x00000524u); // 801E4498
  c->lr=c->r[0]; // 801E449C
  c->r[1]=c->r[1]+0x00000520u; // 801E44A0
  return; // 801E44A4
}

// gdev_cc_write
void f_801E44A8(Ctx* __restrict c) {
  trace_call(0x801E44A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E44A8
  c->r[0]=c->lr; // 801E44AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E44B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E44B4
  c->r[31]=c->r[4]|c->r[4]; // 801E44B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E44BC
  c->r[30]=c->r[3]|c->r[3]; // 801E44C0
  c->r[0]=R32(c->r[13]+0xFFFFB7D8u); // 801E44C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E44C8
  if (!crb(c,2)) { goto L_801E44F8; } // 801E44CC
  c->r[3]=0u+0xFFFFD8EFu; // 801E44D0
  goto L_801E4504; // 801E44D4
  goto L_801E44F8; // 801E44D8
L_801E44DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E44DC
  c->r[4]=c->r[31]|c->r[31]; // 801E44E0
  c->lr=0x801E44E8u; f_801E9648(c); // 801E44E4
  cmps(c,0,(int32_t)c->r[3],0); // 801E44E8
  if (crb(c,2)) { goto L_801E4500; } // 801E44EC
  c->r[30]=c->r[30]+c->r[3]; // 801E44F0
  c->r[31]=c->r[31]-c->r[3]; // 801E44F4
L_801E44F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E44F8
  if (crb(c,1)) { IRQCHK(c); goto L_801E44DC; } // 801E44FC
L_801E4500:;
  c->r[3]=0u+0x00000000u; // 801E4500
L_801E4504:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4508
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E450C
  c->lr=c->r[0]; // 801E4510
  c->r[1]=c->r[1]+0x00000010u; // 801E4514
  return; // 801E4518
}

// gdev_cc_pre_continue
void f_801E451C(Ctx* __restrict c) {
  trace_call(0x801E451Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E451C
  c->r[0]=c->lr; // 801E4520
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4524
  c->lr=0x801E452Cu; f_801E975C(c); // 801E4528
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E452C
  c->r[3]=0u+0x00000000u; // 801E4530
  c->lr=c->r[0]; // 801E4534
  c->r[1]=c->r[1]+0x00000010u; // 801E4538
  return; // 801E453C
}

// gdev_cc_post_stop
void f_801E4540(Ctx* __restrict c) {
  trace_call(0x801E4540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4540
  c->r[0]=c->lr; // 801E4544
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4548
  c->lr=0x801E4550u; f_801E9758(c); // 801E454C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4550
  c->r[3]=0u+0x00000000u; // 801E4554
  c->lr=c->r[0]; // 801E4558
  c->r[1]=c->r[1]+0x00000010u; // 801E455C
  return; // 801E4560
}

// gdev_cc_peek
void f_801E4564(Ctx* __restrict c) {
  trace_call(0x801E4564u);
  {uint32_t ea=c->r[1]+0xFFFFFAF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4564
  c->r[0]=c->lr; // 801E4568
  W32(c->r[1]+0x00000514u,c->r[0]); // 801E456C
  W32(c->r[1]+0x0000050Cu,c->r[31]); // 801E4570
  c->lr=0x801E4578u; f_801E9524(c); // 801E4574
  cmps(c,0,(int32_t)c->r[3],0); // 801E4578
  c->r[31]=c->r[3]|c->r[3]; // 801E457C
  if (crb(c,1)) { goto L_801E458C; } // 801E4580
  c->r[3]=0u+0x00000000u; // 801E4584
  goto L_801E45C4; // 801E4588
L_801E458C:;
  c->r[4]=c->r[31]|c->r[31]; // 801E458C
  c->r[3]=c->r[1]+0x00000008u; // 801E4590
  c->lr=0x801E4598u; f_801E95C8(c); // 801E4594
  cmps(c,0,(int32_t)c->r[3],0); // 801E4598
  if (!crb(c,2)) { goto L_801E45B8; } // 801E459C
  c->r[3]=0u+0x802E0000u; // 801E45A0
  c->r[5]=c->r[31]|c->r[31]; // 801E45A4
  c->r[3]=c->r[3]+0xFFFFB390u; // 801E45A8
  c->r[4]=c->r[1]+0x00000008u; // 801E45AC
  c->lr=0x801E45B4u; f_801E4664(c); // 801E45B0
  goto L_801E45C0; // 801E45B4
L_801E45B8:;
  c->r[3]=0u+0xFFFFD8E7u; // 801E45B8
  goto L_801E45C4; // 801E45BC
L_801E45C0:;
  c->r[3]=c->r[31]|c->r[31]; // 801E45C0
L_801E45C4:;
  c->r[0]=R32(c->r[1]+0x00000514u); // 801E45C4
  c->r[31]=R32(c->r[1]+0x0000050Cu); // 801E45C8
  c->lr=c->r[0]; // 801E45CC
  c->r[1]=c->r[1]+0x00000510u; // 801E45D0
  return; // 801E45D4
}

// gdev_cc_initinterrupts
void f_801E45D8(Ctx* __restrict c) {
  trace_call(0x801E45D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E45D8
  c->r[0]=c->lr; // 801E45DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E45E0
  c->lr=0x801E45E8u; f_801E94D0(c); // 801E45E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E45E8
  c->r[3]=0u+0x00000000u; // 801E45EC
  c->lr=c->r[0]; // 801E45F0
  c->r[1]=c->r[1]+0x00000010u; // 801E45F4
  return; // 801E45F8
}

// MWInitializeCriticalSection
void f_801E45FC(Ctx* __restrict c) {
  trace_call(0x801E45FCu);
  return; // 801E45FC
}

// MWEnterCriticalSection
void f_801E4600(Ctx* __restrict c) {
  trace_call(0x801E4600u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4600
  c->r[0]=c->lr; // 801E4604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E460C
  c->r[31]=c->r[3]|c->r[3]; // 801E4610
  c->lr=0x801E4618u; f_8015AF30(c); // 801E4614
  W32(c->r[31]+0x00000000u,c->r[3]); // 801E4618
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E461C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4620
  c->lr=c->r[0]; // 801E4624
  c->r[1]=c->r[1]+0x00000010u; // 801E4628
  return; // 801E462C
}

// MWExitCriticalSection
void f_801E4630(Ctx* __restrict c) {
  trace_call(0x801E4630u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E4630
  f_8015AF70(c); return; // 801E4634
}

// CBGetBytesAvailableForRead
void f_801E4638(Ctx* __restrict c) {
  trace_call(0x801E4638u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 801E4638
  return; // 801E463C
}

// CircleBufferInitialize
void f_801E4640(Ctx* __restrict c) {
  trace_call(0x801E4640u);
  c->r[0]=0u+0x00000000u; // 801E4640
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E4644
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801E4648
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E464C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E4650
  W32(c->r[3]+0x00000010u,c->r[0]); // 801E4654
  W32(c->r[3]+0x00000014u,c->r[5]); // 801E4658
  c->r[3]=c->r[3]+0x00000018u; // 801E465C
  f_801E45FC(c); return; // 801E4660
}

// CircleBufferWriteBytes
void f_801E4664(Ctx* __restrict c) {
  trace_call(0x801E4664u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4664
  c->r[0]=c->lr; // 801E4668
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E466C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4670
  c->r[31]=c->r[5]|c->r[5]; // 801E4674
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4678
  c->r[30]=c->r[3]|c->r[3]; // 801E467C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4680
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E4684
  c->r[28]=c->r[4]|c->r[4]; // 801E4688
  c->r[0]=R32(c->r[3]+0x00000014u); // 801E468C
  cmpu(c,0,c->r[5],c->r[0]); // 801E4690
  if (!crb(c,1)) { goto L_801E46A0; } // 801E4694
  c->r[3]=0u+0xFFFFFFFFu; // 801E4698
  goto L_801E474C; // 801E469C
L_801E46A0:;
  c->r[3]=c->r[3]+0x00000018u; // 801E46A0
  c->lr=0x801E46A8u; f_801E4600(c); // 801E46A4
  c->r[3]=R32(c->r[30]+0x00000004u); // 801E46A8
  c->r[4]=R32(c->r[30]+0x00000008u); // 801E46AC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801E46B0
  c->r[4]=c->r[3]-c->r[4]; // 801E46B4
  c->r[29]=c->r[0]-c->r[4]; // 801E46B8
  cmpu(c,0,c->r[29],c->r[31]); // 801E46BC
  if (crb(c,0)) { goto L_801E46E0; } // 801E46C0
  c->r[4]=c->r[28]|c->r[28]; // 801E46C4
  c->r[5]=c->r[31]|c->r[31]; // 801E46C8
  c->lr=0x801E46D0u; f_80004364(c); // 801E46CC
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E46D0
  c->r[0]=c->r[0]+c->r[31]; // 801E46D4
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E46D8
  goto L_801E470C; // 801E46DC
L_801E46E0:;
  c->r[4]=c->r[28]|c->r[28]; // 801E46E0
  c->r[5]=c->r[29]|c->r[29]; // 801E46E4
  c->lr=0x801E46ECu; f_80004364(c); // 801E46E8
  c->r[3]=R32(c->r[30]+0x00000008u); // 801E46EC
  c->r[4]=c->r[28]+c->r[29]; // 801E46F0
  c->r[5]=c->r[31]-c->r[29]; // 801E46F4
  c->lr=0x801E46FCu; f_80004364(c); // 801E46F8
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E46FC
  c->r[0]=c->r[0]+c->r[31]; // 801E4700
  c->r[0]=c->r[0]-c->r[29]; // 801E4704
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E4708
L_801E470C:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 801E470C
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E4710
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801E4714
  c->r[0]=c->r[0]-c->r[4]; // 801E4718
  cmpu(c,0,c->r[3],c->r[0]); // 801E471C
  if (!crb(c,2)) { goto L_801E4728; } // 801E4720
  W32(c->r[30]+0x00000004u,c->r[4]); // 801E4724
L_801E4728:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 801E4728
  c->r[3]=c->r[30]+0x00000018u; // 801E472C
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E4730
  c->r[4]=c->r[4]-c->r[31]; // 801E4734
  W32(c->r[30]+0x00000014u,c->r[4]); // 801E4738
  c->r[0]=c->r[0]+c->r[31]; // 801E473C
  W32(c->r[30]+0x00000010u,c->r[0]); // 801E4740
  c->lr=0x801E4748u; f_801E4630(c); // 801E4744
  c->r[3]=0u+0x00000000u; // 801E4748
L_801E474C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E474C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E4750
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E4754
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4758
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E475C
  c->lr=c->r[0]; // 801E4760
  c->r[1]=c->r[1]+0x00000020u; // 801E4764
  return; // 801E4768
}

// CircleBufferReadBytes
void f_801E476C(Ctx* __restrict c) {
  trace_call(0x801E476Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E476C
  c->r[0]=c->lr; // 801E4770
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4774
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4778
  c->r[31]=c->r[5]|c->r[5]; // 801E477C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4780
  c->r[30]=c->r[3]|c->r[3]; // 801E4784
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4788
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E478C
  c->r[28]=c->r[4]|c->r[4]; // 801E4790
  c->r[0]=R32(c->r[3]+0x00000010u); // 801E4794
  cmpu(c,0,c->r[5],c->r[0]); // 801E4798
  if (!crb(c,1)) { goto L_801E47A8; } // 801E479C
  c->r[3]=0u+0xFFFFFFFFu; // 801E47A0
  goto L_801E4854; // 801E47A4
L_801E47A8:;
  c->r[3]=c->r[3]+0x00000018u; // 801E47A8
  c->lr=0x801E47B0u; f_801E4600(c); // 801E47AC
  c->r[4]=R32(c->r[30]+0x00000000u); // 801E47B0
  c->r[3]=R32(c->r[30]+0x00000008u); // 801E47B4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801E47B8
  c->r[3]=c->r[4]-c->r[3]; // 801E47BC
  c->r[29]=c->r[0]-c->r[3]; // 801E47C0
  cmpu(c,0,c->r[31],c->r[29]); // 801E47C4
  if (!crb(c,0)) { goto L_801E47E8; } // 801E47C8
  c->r[3]=c->r[28]|c->r[28]; // 801E47CC
  c->r[5]=c->r[31]|c->r[31]; // 801E47D0
  c->lr=0x801E47D8u; f_80004364(c); // 801E47D4
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E47D8
  c->r[0]=c->r[0]+c->r[31]; // 801E47DC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E47E0
  goto L_801E4814; // 801E47E4
L_801E47E8:;
  c->r[3]=c->r[28]|c->r[28]; // 801E47E8
  c->r[5]=c->r[29]|c->r[29]; // 801E47EC
  c->lr=0x801E47F4u; f_80004364(c); // 801E47F0
  c->r[4]=R32(c->r[30]+0x00000008u); // 801E47F4
  c->r[3]=c->r[28]+c->r[29]; // 801E47F8
  c->r[5]=c->r[31]-c->r[29]; // 801E47FC
  c->lr=0x801E4804u; f_80004364(c); // 801E4800
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E4804
  c->r[0]=c->r[0]+c->r[31]; // 801E4808
  c->r[0]=c->r[0]-c->r[29]; // 801E480C
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E4810
L_801E4814:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 801E4814
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E4818
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801E481C
  c->r[0]=c->r[0]-c->r[4]; // 801E4820
  cmpu(c,0,c->r[3],c->r[0]); // 801E4824
  if (!crb(c,2)) { goto L_801E4830; } // 801E4828
  W32(c->r[30]+0x00000000u,c->r[4]); // 801E482C
L_801E4830:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 801E4830
  c->r[3]=c->r[30]+0x00000018u; // 801E4834
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E4838
  c->r[4]=c->r[4]+c->r[31]; // 801E483C
  W32(c->r[30]+0x00000014u,c->r[4]); // 801E4840
  c->r[0]=c->r[0]-c->r[31]; // 801E4844
  W32(c->r[30]+0x00000010u,c->r[0]); // 801E4848
  c->lr=0x801E4850u; f_801E4630(c); // 801E484C
  c->r[3]=0u+0x00000000u; // 801E4850
L_801E4854:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4854
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E4858
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E485C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4860
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E4864
  c->lr=c->r[0]; // 801E4868
  c->r[1]=c->r[1]+0x00000020u; // 801E486C
  return; // 801E4870
}

// TRK_flush_cache
void f_801E4874(Ctx* __restrict c) {
  trace_call(0x801E4874u);
  c->r[5]=0u+0xFFFF0000u; // 801E4874
  c->r[5]=c->r[5]|0x0000FFF1u; // 801E4878
  c->r[5]=c->r[5]&c->r[3]; // 801E487C
  c->r[3]=c->r[3]-c->r[5]; // 801E4880
  c->r[4]=c->r[4]+c->r[3]; // 801E4884
L_801E4888:;
  /* dcbst */ // 801E4888
  /* dcbf */ // 801E488C
  /* sync */ // 801E4890
  /* icbi */ // 801E4894
  c->r[5]=addc(c,c->r[5],0x00000008u,0); // 801E4898
  c->r[4]=addc(c,c->r[4],0xFFFFFFF8u,0); cr0(c,c->r[4]); // 801E489C
  if (!crb(c,0)) { IRQCHK(c); goto L_801E4888; } // 801E48A0
  /* isync */ // 801E48A4
  return; // 801E48A8
}

// TRK_main
void f_801E48AC(Ctx* __restrict c) {
  trace_call(0x801E48ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E48AC
  c->r[0]=c->lr; // 801E48B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E48B4
  c->lr=0x801E48BCu; f_801E5644(c); // 801E48B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E48BC
  W32(c->r[13]+0xFFFFB7E0u,c->r[3]); // 801E48C0
  if (!crb(c,2)) { goto L_801E48D0; } // 801E48C4
  c->lr=0x801E48CCu; f_801E5714(c); // 801E48C8
  c->lr=0x801E48D0u; f_801E48E8(c); // 801E48CC
L_801E48D0:;
  c->lr=0x801E48D4u; f_801E56F0(c); // 801E48D0
  W32(c->r[13]+0xFFFFB7E0u,c->r[3]); // 801E48D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E48D8
  c->lr=c->r[0]; // 801E48DC
  c->r[1]=c->r[1]+0x00000010u; // 801E48E0
  return; // 801E48E4
}

// TRKNubMainLoop
void f_801E48E8(Ctx* __restrict c) {
  trace_call(0x801E48E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E48E8
  c->r[0]=c->lr; // 801E48EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E48F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E48F4
  c->r[31]=0u+0x00000000u; // 801E48F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E48FC
  c->r[30]=0u+0x00000000u; // 801E4900
  goto L_801E49B4; // 801E4904
L_801E4908:;
  c->r[3]=c->r[1]+0x00000008u; // 801E4908
  c->lr=0x801E4910u; f_801E54CC(c); // 801E490C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4910
  if (crb(c,2)) { goto L_801E497C; } // 801E4914
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E4918
  c->r[30]=0u+0x00000000u; // 801E491C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801E4920
  cmpu(c,0,c->r[0],0x00000001u); // 801E4924
  if (!crb(c,1)) { goto L_801E4960; } // 801E4928
  cmps(c,0,(int32_t)c->r[3],2); // 801E492C
  if (crb(c,2)) { goto L_801E4948; } // 801E4930
  cmps(c,0,(int32_t)c->r[3],1); // 801E4934
  if (crb(c,2)) { goto L_801E4958; } // 801E4938
  cmps(c,0,(int32_t)c->r[3],5); // 801E493C
  if (crb(c,2)) { goto L_801E496C; } // 801E4940
  goto L_801E4970; // 801E4944
L_801E4948:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E4948
  c->lr=0x801E4950u; f_801E6398(c); // 801E494C
  c->lr=0x801E4954u; f_801E4C38(c); // 801E4950
  goto L_801E4970; // 801E4954
L_801E4958:;
  c->r[31]=0u+0x00000001u; // 801E4958
  goto L_801E4970; // 801E495C
L_801E4960:;
  c->r[3]=c->r[1]+0x00000008u; // 801E4960
  c->lr=0x801E4968u; f_801E8824(c); // 801E4964
  goto L_801E4970; // 801E4968
L_801E496C:;
  c->lr=0x801E4970u; f_801E8D4C(c); // 801E496C
L_801E4970:;
  c->r[3]=c->r[1]+0x00000008u; // 801E4970
  c->lr=0x801E4978u; f_801E563C(c); // 801E4974
  goto L_801E49B4; // 801E4978
L_801E497C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E497C
  if (crb(c,2)) { goto L_801E4994; } // 801E4980
  c->r[3]=R32(c->r[13]+0xFFFFB800u); // 801E4984
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E4988
  cmps(c,0,(int32_t)c->r[0],0); // 801E498C
  if (crb(c,2)) { goto L_801E49A0; } // 801E4990
L_801E4994:;
  c->r[30]=0u+0x00000001u; // 801E4994
  c->lr=0x801E499Cu; f_801E5860(c); // 801E4998
  goto L_801E49B4; // 801E499C
L_801E49A0:;
  c->lr=0x801E49A4u; f_801E8F40(c); // 801E49A0
  cmps(c,0,(int32_t)c->r[3],0); // 801E49A4
  if (!crb(c,2)) { goto L_801E49B0; } // 801E49A8
  c->lr=0x801E49B0u; f_801E5F1C(c); // 801E49AC
L_801E49B0:;
  c->r[30]=0u+0x00000000u; // 801E49B0
L_801E49B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E49B4
  if (crb(c,2)) { IRQCHK(c); goto L_801E4908; } // 801E49B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E49BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E49C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E49C4
  c->lr=c->r[0]; // 801E49C8
  c->r[1]=c->r[1]+0x00000020u; // 801E49CC
  return; // 801E49D0
}

// TRK_memcpy
void f_801E49D4(Ctx* __restrict c) {
  trace_call(0x801E49D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E49D4
  cmps(c,0,(int32_t)c->r[5],0); // 801E49D8
  c->r[9]=0u+0x000000FFu; // 801E49DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E49E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E49E4
  c->r[30]=c->r[3]|c->r[3]; // 801E49E8
  if (crb(c,2)) { goto L_801E4B00; } // 801E49EC
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 801E49F0
  c->ctr=c->r[0]; // 801E49F4
  if (crb(c,2)) { goto L_801E4AA8; } // 801E49F8
L_801E49FC:;
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 801E49FC
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801E4A00
  c->r[0]=c->r[30]-c->r[12]; // 801E4A04
  c->r[7]=R32(c->r[11]+0x00000000u); // 801E4A08
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 801E4A0C
  c->r[6]=c->r[4]-c->r[11]; // 801E4A10
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 801E4A14
  c->r[4]=c->r[4]+0x00000001u; // 801E4A18
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E4A1C
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 801E4A20
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 801E4A24
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801E4A28
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E4A2C
  c->r[8]=R32(c->r[12]+0x00000000u); // 801E4A30
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 801E4A34
  c->r[6]=c->r[4]-c->r[11]; // 801E4A38
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 801E4A3C
  c->r[30]=c->r[30]+0x00000001u; // 801E4A40
  c->r[7]=c->r[8]&~c->r[10]; // 801E4A44
  c->r[4]=c->r[4]+0x00000001u; // 801E4A48
  c->r[0]=c->r[10]&c->r[0]; // 801E4A4C
  c->r[0]=c->r[7]|c->r[0]; // 801E4A50
  W32(c->r[12]+0x00000000u,c->r[0]); // 801E4A54
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 801E4A58
  c->r[0]=c->r[30]-c->r[12]; // 801E4A5C
  c->r[7]=R32(c->r[11]+0x00000000u); // 801E4A60
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 801E4A64
  c->r[8]=R32(c->r[12]+0x00000000u); // 801E4A68
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 801E4A6C
  c->r[30]=c->r[30]+0x00000001u; // 801E4A70
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E4A74
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 801E4A78
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 801E4A7C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E4A80
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 801E4A84
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 801E4A88
  c->r[7]=c->r[8]&~c->r[10]; // 801E4A8C
  c->r[0]=c->r[10]&c->r[0]; // 801E4A90
  c->r[0]=c->r[7]|c->r[0]; // 801E4A94
  W32(c->r[12]+0x00000000u,c->r[0]); // 801E4A98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E49FC; } // 801E4A9C
  c->r[5]=c->r[5]&0x00000001u; cr0(c,c->r[5]); // 801E4AA0
  if (crb(c,2)) { goto L_801E4B00; } // 801E4AA4
L_801E4AA8:;
  c->ctr=c->r[5]; // 801E4AA8
L_801E4AAC:;
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 801E4AAC
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 801E4AB0
  c->r[0]=c->r[30]-c->r[12]; // 801E4AB4
  c->r[7]=R32(c->r[11]+0x00000000u); // 801E4AB8
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 801E4ABC
  c->r[6]=c->r[4]-c->r[11]; // 801E4AC0
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 801E4AC4
  c->r[8]=R32(c->r[12]+0x00000000u); // 801E4AC8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E4ACC
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 801E4AD0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 801E4AD4
  c->r[4]=c->r[4]+0x00000001u; // 801E4AD8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E4ADC
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 801E4AE0
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 801E4AE4
  c->r[30]=c->r[30]+0x00000001u; // 801E4AE8
  c->r[7]=c->r[8]&~c->r[10]; // 801E4AEC
  c->r[0]=c->r[10]&c->r[0]; // 801E4AF0
  c->r[0]=c->r[7]|c->r[0]; // 801E4AF4
  W32(c->r[12]+0x00000000u,c->r[0]); // 801E4AF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4AAC; } // 801E4AFC
L_801E4B00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4B00
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4B04
  c->r[1]=c->r[1]+0x00000010u; // 801E4B08
  return; // 801E4B0C
}

// TRK_memset
void f_801E4B10(Ctx* __restrict c) {
  trace_call(0x801E4B10u);
  cmps(c,0,(int32_t)c->r[5],0); // 801E4B10
  c->r[8]=rotl(c->r[4],0)&0x000000FFu; // 801E4B14
  c->r[7]=c->r[3]|c->r[3]; // 801E4B18
  c->r[6]=0u+0x000000FFu; // 801E4B1C
  if (crb(c,2)) return; // 801E4B20
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 801E4B24
  c->ctr=c->r[0]; // 801E4B28
  if (crb(c,2)) { goto L_801E4BFC; } // 801E4B2C
L_801E4B30:;
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 801E4B30
  c->r[0]=c->r[7]-c->r[10]; // 801E4B34
  c->r[4]=R32(c->r[10]+0x00000000u); // 801E4B38
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 801E4B3C
  c->r[7]=c->r[7]+0x00000001u; // 801E4B40
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E4B44
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801E4B48
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801E4B4C
  c->r[4]=c->r[4]&~c->r[9]; // 801E4B50
  c->r[0]=c->r[9]&c->r[0]; // 801E4B54
  c->r[0]=c->r[4]|c->r[0]; // 801E4B58
  W32(c->r[10]+0x00000000u,c->r[0]); // 801E4B5C
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 801E4B60
  c->r[0]=c->r[7]-c->r[10]; // 801E4B64
  c->r[4]=R32(c->r[10]+0x00000000u); // 801E4B68
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 801E4B6C
  c->r[7]=c->r[7]+0x00000001u; // 801E4B70
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E4B74
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801E4B78
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801E4B7C
  c->r[4]=c->r[4]&~c->r[9]; // 801E4B80
  c->r[0]=c->r[9]&c->r[0]; // 801E4B84
  c->r[0]=c->r[4]|c->r[0]; // 801E4B88
  W32(c->r[10]+0x00000000u,c->r[0]); // 801E4B8C
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 801E4B90
  c->r[0]=c->r[7]-c->r[10]; // 801E4B94
  c->r[4]=R32(c->r[10]+0x00000000u); // 801E4B98
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 801E4B9C
  c->r[7]=c->r[7]+0x00000001u; // 801E4BA0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E4BA4
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801E4BA8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801E4BAC
  c->r[4]=c->r[4]&~c->r[9]; // 801E4BB0
  c->r[0]=c->r[9]&c->r[0]; // 801E4BB4
  c->r[0]=c->r[4]|c->r[0]; // 801E4BB8
  W32(c->r[10]+0x00000000u,c->r[0]); // 801E4BBC
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 801E4BC0
  c->r[0]=c->r[7]-c->r[10]; // 801E4BC4
  c->r[4]=R32(c->r[10]+0x00000000u); // 801E4BC8
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 801E4BCC
  c->r[7]=c->r[7]+0x00000001u; // 801E4BD0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E4BD4
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801E4BD8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801E4BDC
  c->r[4]=c->r[4]&~c->r[9]; // 801E4BE0
  c->r[0]=c->r[9]&c->r[0]; // 801E4BE4
  c->r[0]=c->r[4]|c->r[0]; // 801E4BE8
  W32(c->r[10]+0x00000000u,c->r[0]); // 801E4BEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4B30; } // 801E4BF0
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 801E4BF4
  if (crb(c,2)) return; // 801E4BF8
L_801E4BFC:;
  c->ctr=c->r[5]; // 801E4BFC
L_801E4C00:;
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 801E4C00
  c->r[0]=c->r[7]-c->r[10]; // 801E4C04
  c->r[4]=R32(c->r[10]+0x00000000u); // 801E4C08
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 801E4C0C
  c->r[7]=c->r[7]+0x00000001u; // 801E4C10
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E4C14
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 801E4C18
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 801E4C1C
  c->r[4]=c->r[4]&~c->r[9]; // 801E4C20
  c->r[0]=c->r[9]&c->r[0]; // 801E4C24
  c->r[0]=c->r[4]|c->r[0]; // 801E4C28
  W32(c->r[10]+0x00000000u,c->r[0]); // 801E4C2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4C00; } // 801E4C30
  return; // 801E4C34
}

// TRKDispatchMessage
void f_801E4C38(Ctx* __restrict c) {
  trace_call(0x801E4C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4C38
  c->r[0]=c->lr; // 801E4C3C
  c->r[4]=0u+0x00000000u; // 801E4C40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4C44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4C48
  c->r[31]=0u+0x00000500u; // 801E4C4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E4C50
  c->r[30]=c->r[3]|c->r[3]; // 801E4C54
  c->lr=0x801E4C5Cu; f_801E640C(c); // 801E4C58
  c->r[0]=R8(c->r[30]+0x00000010u); // 801E4C5C
  cmpu(c,0,c->r[0],0x0000001Au); // 801E4C60
  if (crb(c,1)) { goto L_801E4D3C; } // 801E4C64
  c->r[3]=0u+0x80250000u; // 801E4C68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E4C6C
  c->r[3]=c->r[3]+0xFFFFA348u; // 801E4C70
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E4C74
  c->ctr=c->r[3]; // 801E4C78
  if (true) { switch (c->ctr) { case 0x801E4C80u: goto L_801E4C80; case 0x801E4C90u: goto L_801E4C90; case 0x801E4CA0u: goto L_801E4CA0; case 0x801E4CB0u: goto L_801E4CB0; case 0x801E4CC0u: goto L_801E4CC0; case 0x801E4CD0u: goto L_801E4CD0; case 0x801E4CE0u: goto L_801E4CE0; case 0x801E4CF0u: goto L_801E4CF0; case 0x801E4D00u: goto L_801E4D00; case 0x801E4D10u: goto L_801E4D10; case 0x801E4D20u: goto L_801E4D20; case 0x801E4D30u: goto L_801E4D30; case 0x801E4D3Cu: goto L_801E4D3C; default: break; } dispatch(c,c->ctr); return; } // 801E4C7C
L_801E4C80:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4C80
  c->lr=0x801E4C88u; f_801E6AF0(c); // 801E4C84
  c->r[31]=c->r[3]|c->r[3]; // 801E4C88
  goto L_801E4D3C; // 801E4C8C
L_801E4C90:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4C90
  c->lr=0x801E4C98u; f_801E6B60(c); // 801E4C94
  c->r[31]=c->r[3]|c->r[3]; // 801E4C98
  goto L_801E4D3C; // 801E4C9C
L_801E4CA0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4CA0
  c->lr=0x801E4CA8u; f_801E6BE8(c); // 801E4CA4
  c->r[31]=c->r[3]|c->r[3]; // 801E4CA8
  goto L_801E4D3C; // 801E4CAC
L_801E4CB0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4CB0
  c->lr=0x801E4CB8u; f_801E6C54(c); // 801E4CB4
  c->r[31]=c->r[3]|c->r[3]; // 801E4CB8
  goto L_801E4D3C; // 801E4CBC
L_801E4CC0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4CC0
  c->lr=0x801E4CC8u; f_801E6CC0(c); // 801E4CC4
  c->r[31]=c->r[3]|c->r[3]; // 801E4CC8
  goto L_801E4D3C; // 801E4CCC
L_801E4CD0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4CD0
  c->lr=0x801E4CD8u; f_801E6EF4(c); // 801E4CD4
  c->r[31]=c->r[3]|c->r[3]; // 801E4CD8
  goto L_801E4D3C; // 801E4CDC
L_801E4CE0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4CE0
  c->lr=0x801E4CE8u; f_801E7104(c); // 801E4CE4
  c->r[31]=c->r[3]|c->r[3]; // 801E4CE8
  goto L_801E4D3C; // 801E4CEC
L_801E4CF0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4CF0
  c->lr=0x801E4CF8u; f_801E7300(c); // 801E4CF4
  c->r[31]=c->r[3]|c->r[3]; // 801E4CF8
  goto L_801E4D3C; // 801E4CFC
L_801E4D00:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4D00
  c->lr=0x801E4D08u; f_801E75A0(c); // 801E4D04
  c->r[31]=c->r[3]|c->r[3]; // 801E4D08
  goto L_801E4D3C; // 801E4D0C
L_801E4D10:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4D10
  c->lr=0x801E4D18u; f_801E7664(c); // 801E4D14
  c->r[31]=c->r[3]|c->r[3]; // 801E4D18
  goto L_801E4D3C; // 801E4D1C
L_801E4D20:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4D20
  c->lr=0x801E4D28u; f_801E78E8(c); // 801E4D24
  c->r[31]=c->r[3]|c->r[3]; // 801E4D28
  goto L_801E4D3C; // 801E4D2C
L_801E4D30:;
  c->r[3]=c->r[30]|c->r[30]; // 801E4D30
  c->lr=0x801E4D38u; f_801E79A0(c); // 801E4D34
  c->r[31]=c->r[3]|c->r[3]; // 801E4D38
L_801E4D3C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E4D3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4D40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4D44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4D48
  c->lr=c->r[0]; // 801E4D4C
  c->r[1]=c->r[1]+0x00000010u; // 801E4D50
  return; // 801E4D54
}

// InitMetroTRK
void f_801E4D58(Ctx* __restrict c) {
  trace_call(0x801E4D58u);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 801E4D58
  W32(c->r[1]+0x00000000u,c->r[3]); // 801E4D5C
  c->r[3]=0u+0x802D0000u; // 801E4D60
  c->r[3]=c->r[3]|0x0000CF20u; // 801E4D64
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E4D68
  c->r[4]=R32(c->r[1]+0x00000000u); // 801E4D6C
  c->r[1]=c->r[1]+0x00000004u; // 801E4D70
  W32(c->r[3]+0x00000004u,c->r[1]); // 801E4D74
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801E4D78
  c->r[4]=c->lr; // 801E4D7C
  W32(c->r[3]+0x00000084u,c->r[4]); // 801E4D80
  W32(c->r[3]+0x00000080u,c->r[4]); // 801E4D84
  c->r[4]=c->cr; // 801E4D88
  W32(c->r[3]+0x00000088u,c->r[4]); // 801E4D8C
  c->r[4]=c->msr; // 801E4D90
  c->r[3]=c->r[4]|0x00008000u; // 801E4D94
  c->r[3]=c->r[3]^0x00008000u; // 801E4D98
  c->msr=c->r[3]; // 801E4D9C
  mtspr(c,27,c->r[4]); // 801E4DA0
  c->lr=0x801E4DA8u; f_801E5F50(c); // 801E4DA4
  c->r[3]=0u+0x802D0000u; // 801E4DA8
  c->r[3]=c->r[3]|0x0000CF20u; // 801E4DAC
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E4DB0
  c->r[0]=0u+0x00000000u; // 801E4DB4
  mtspr(c,1010,c->r[0]); // 801E4DB8
  mtspr(c,1013,c->r[0]); // 801E4DBC
  c->r[1]=0u+0x802F0000u; // 801E4DC0
  c->r[1]=c->r[1]|0x00005EF0u; // 801E4DC4
  c->r[3]=c->r[5]|c->r[5]; // 801E4DC8
  c->lr=0x801E4DD0u; f_801E513C(c); // 801E4DCC
  cmps(c,0,(int32_t)c->r[3],1); // 801E4DD0
  if (!crb(c,2)) { goto L_801E4DE8; } // 801E4DD4
  c->r[4]=R32(c->r[3]+0x00000084u); // 801E4DD8
  c->lr=c->r[4]; // 801E4DDC
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E4DE0
  return; // 801E4DE4
L_801E4DE8:;
  f_801E48AC(c); return; // 801E4DE8
}

// InitMetroTRK_BBA
void f_801E4DF0(Ctx* __restrict c) {
  trace_call(0x801E4DF0u);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 801E4DF0
  W32(c->r[1]+0x00000000u,c->r[3]); // 801E4DF4
  c->r[3]=0u+0x802D0000u; // 801E4DF8
  c->r[3]=c->r[3]|0x0000CF20u; // 801E4DFC
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E4E00
  c->r[4]=R32(c->r[1]+0x00000000u); // 801E4E04
  c->r[1]=c->r[1]+0x00000004u; // 801E4E08
  W32(c->r[3]+0x00000004u,c->r[1]); // 801E4E0C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801E4E10
  c->r[4]=c->lr; // 801E4E14
  W32(c->r[3]+0x00000084u,c->r[4]); // 801E4E18
  W32(c->r[3]+0x00000080u,c->r[4]); // 801E4E1C
  c->r[4]=c->cr; // 801E4E20
  W32(c->r[3]+0x00000088u,c->r[4]); // 801E4E24
  c->r[4]=c->msr; // 801E4E28
  c->r[3]=c->r[4]|0x00008000u; // 801E4E2C
  c->msr=c->r[3]; // 801E4E30
  mtspr(c,27,c->r[4]); // 801E4E34
  c->lr=0x801E4E3Cu; f_801E5F50(c); // 801E4E38
  c->r[3]=0u+0x802D0000u; // 801E4E3C
  c->r[3]=c->r[3]|0x0000CF20u; // 801E4E40
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E4E44
  c->r[0]=0u+0x00000000u; // 801E4E48
  mtspr(c,1010,c->r[0]); // 801E4E4C
  mtspr(c,1013,c->r[0]); // 801E4E50
  c->r[1]=0u+0x802F0000u; // 801E4E54
  c->r[1]=c->r[1]|0x00005EF0u; // 801E4E58
  c->r[3]=0u+0x00000002u; // 801E4E5C
  c->lr=0x801E4E64u; f_801E513C(c); // 801E4E60
  cmps(c,0,(int32_t)c->r[3],1); // 801E4E64
  if (!crb(c,2)) { goto L_801E4E7C; } // 801E4E68
  c->r[4]=R32(c->r[3]+0x00000084u); // 801E4E6C
  c->lr=c->r[4]; // 801E4E70
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E4E74
  return; // 801E4E78
L_801E4E7C:;
  f_801E48AC(c); return; // 801E4E7C
  return; // 801E4E80
}

// EnableMetroTRKInterrupts
void f_801E4E84(Ctx* __restrict c) {
  trace_call(0x801E4E84u);
  f_801E52CC(c); return; // 801E4E84
}

// TRKTargetTranslate
void f_801E4E88(Ctx* __restrict c) {
  trace_call(0x801E4E88u);
  c->r[4]=R32(c->r[13]+0xFFFFB7E8u); // 801E4E88
  cmpu(c,0,c->r[3],c->r[4]); // 801E4E8C
  if (crb(c,0)) { goto L_801E4EB4; } // 801E4E90
  c->r[0]=c->r[4]+0x00004000u; // 801E4E94
  cmpu(c,0,c->r[3],c->r[0]); // 801E4E98
  if (!crb(c,0)) { goto L_801E4EB4; } // 801E4E9C
  c->r[4]=0u+0x802E0000u; // 801E4EA0
  c->r[4]=c->r[4]+0xFFFFCF20u; // 801E4EA4
  c->r[0]=R32(c->r[4]+0x00000238u); // 801E4EA8
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 801E4EAC
  if (!crb(c,2)) return; // 801E4EB0
L_801E4EB4:;
  c->r[0]=0u+0x03000000u; // 801E4EB4
  cmpu(c,0,c->r[3],c->r[0]); // 801E4EB8
  if (!crb(c,0)) { goto L_801E4ECC; } // 801E4EBC
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 801E4EC0
  c->r[3]=c->r[0]|0x80000000u; // 801E4EC4
  return; // 801E4EC8
L_801E4ECC:;
  c->r[0]=0u+0x10000000u; // 801E4ECC
  cmpu(c,0,c->r[3],c->r[0]); // 801E4ED0
  if (crb(c,0)) return; // 801E4ED4
  c->r[0]=0u+0x1C000000u; // 801E4ED8
  cmpu(c,0,c->r[3],c->r[0]); // 801E4EDC
  if (!crb(c,0)) return; // 801E4EE0
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 801E4EE4
  c->r[3]=c->r[0]|0x90000000u; // 801E4EE8
  return; // 801E4EEC
}

// __TRK_copy_vectors
void f_801E4EF0(Ctx* __restrict c) {
  trace_call(0x801E4EF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4EF0
  c->r[0]=c->lr; // 801E4EF4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E4EF8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E4EFC
  c->r[3]=R32(c->r[13]+0xFFFFB7E8u); // 801E4F00
  cmpu(c,0,c->r[3],0x00000044u); // 801E4F04
  if (crb(c,1)) { goto L_801E4F34; } // 801E4F08
  c->r[0]=c->r[3]+0x00004000u; // 801E4F0C
  cmpu(c,0,c->r[0],0x00000044u); // 801E4F10
  if (!crb(c,1)) { goto L_801E4F34; } // 801E4F14
  c->r[3]=0u+0x802E0000u; // 801E4F18
  c->r[3]=c->r[3]+0xFFFFCF20u; // 801E4F1C
  c->r[0]=R32(c->r[3]+0x00000238u); // 801E4F20
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 801E4F24
  if (crb(c,2)) { goto L_801E4F34; } // 801E4F28
  c->r[3]=0u+0x00000044u; // 801E4F2C
  goto L_801E4F3C; // 801E4F30
L_801E4F34:;
  c->r[3]=0u+0x80000000u; // 801E4F34
  c->r[3]=c->r[3]+0x00000044u; // 801E4F38
L_801E4F3C:;
  c->r[31]=0u+0x80250000u; // 801E4F3C
  c->r[24]=0u+0x802E0000u; // 801E4F40
  c->r[28]=0u+0x80000000u; // 801E4F44
  c->r[29]=R32(c->r[3]+0x00000000u); // 801E4F48
  c->r[31]=c->r[31]+0xFFFFA3B8u; // 801E4F4C
  c->r[24]=c->r[24]+0xFFFFCF20u; // 801E4F50
  c->r[28]=c->r[28]+0x000046E4u; // 801E4F54
  c->r[30]=0u+0x00000000u; // 801E4F58
  c->r[25]=0u+0x03000000u; // 801E4F5C
  c->r[27]=0u+0x1C000000u; // 801E4F60
  c->r[26]=0u+0x10000000u; // 801E4F64
  c->r[23]=0u+0x00000001u; // 801E4F68
L_801E4F6C:;
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[23]<<((c->r[30])&31)); // 801E4F6C
  c->r[0]=c->r[29]&c->r[0]; cr0(c,c->r[0]); // 801E4F70
  if (crb(c,2)) { goto L_801E5000; } // 801E4F74
  cmps(c,0,(int32_t)c->r[30],4); // 801E4F78
  if (crb(c,2)) { goto L_801E5000; } // 801E4F7C
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E4F80
  c->r[3]=R32(c->r[13]+0xFFFFB7E8u); // 801E4F84
  cmpu(c,0,c->r[4],c->r[3]); // 801E4F88
  if (crb(c,0)) { goto L_801E4FB0; } // 801E4F8C
  c->r[0]=c->r[3]+0x00004000u; // 801E4F90
  cmpu(c,0,c->r[4],c->r[0]); // 801E4F94
  if (!crb(c,0)) { goto L_801E4FB0; } // 801E4F98
  c->r[0]=R32(c->r[24]+0x00000238u); // 801E4F9C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 801E4FA0
  if (crb(c,2)) { goto L_801E4FB0; } // 801E4FA4
  c->r[22]=c->r[4]|c->r[4]; // 801E4FA8
  goto L_801E4FE4; // 801E4FAC
L_801E4FB0:;
  cmpu(c,0,c->r[4],c->r[25]); // 801E4FB0
  if (!crb(c,0)) { goto L_801E4FC4; } // 801E4FB4
  c->r[0]=rotl(c->r[4],0)&0x3FFFFFFFu; // 801E4FB8
  c->r[22]=c->r[0]|0x80000000u; // 801E4FBC
  goto L_801E4FE4; // 801E4FC0
L_801E4FC4:;
  cmpu(c,0,c->r[4],c->r[26]); // 801E4FC4
  if (crb(c,0)) { goto L_801E4FE0; } // 801E4FC8
  cmpu(c,0,c->r[4],c->r[27]); // 801E4FCC
  if (!crb(c,0)) { goto L_801E4FE0; } // 801E4FD0
  c->r[0]=rotl(c->r[4],0)&0x3FFFFFFFu; // 801E4FD4
  c->r[22]=c->r[0]|0x90000000u; // 801E4FD8
  goto L_801E4FE4; // 801E4FDC
L_801E4FE0:;
  c->r[22]=c->r[4]|c->r[4]; // 801E4FE0
L_801E4FE4:;
  c->r[3]=c->r[22]|c->r[22]; // 801E4FE4
  c->r[4]=c->r[28]+c->r[4]; // 801E4FE8
  c->r[5]=0u+0x00000100u; // 801E4FEC
  c->lr=0x801E4FF4u; f_801E49D4(c); // 801E4FF0
  c->r[3]=c->r[22]|c->r[22]; // 801E4FF4
  c->r[4]=0u+0x00000100u; // 801E4FF8
  c->lr=0x801E5000u; f_801E4874(c); // 801E4FFC
L_801E5000:;
  c->r[30]=c->r[30]+0x00000001u; // 801E5000
  c->r[31]=c->r[31]+0x00000004u; // 801E5004
  cmps(c,0,(int32_t)c->r[30],14); // 801E5008
  if (!crb(c,1)) { IRQCHK(c); goto L_801E4F6C; } // 801E500C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E5010
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E5014
  c->lr=c->r[0]; // 801E5018
  c->r[1]=c->r[1]+0x00000030u; // 801E501C
  return; // 801E5020
}

// TRKInitializeTarget
void f_801E5024(Ctx* __restrict c) {
  trace_call(0x801E5024u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5024
  c->r[0]=c->lr; // 801E5028
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E502C
  c->r[0]=0u+0x00000001u; // 801E5030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5034
  c->r[31]=0u+0x802E0000u; // 801E5038
  c->r[31]=c->r[31]+0xFFFFCE78u; // 801E503C
  W32(c->r[31]+0x00000098u,c->r[0]); // 801E5040
  c->lr=0x801E5048u; f_801E7BF8(c); // 801E5044
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 801E5048
  c->r[0]=0u+0xE0000000u; // 801E504C
  c->r[3]=0u+0x00000000u; // 801E5050
  W32(c->r[13]+0xFFFFB7E8u,c->r[0]); // 801E5054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5058
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E505C
  c->lr=c->r[0]; // 801E5060
  c->r[1]=c->r[1]+0x00000010u; // 801E5064
  return; // 801E5068
}

// __TRKreset
void f_801E506C(Ctx* __restrict c) {
  trace_call(0x801E506Cu);
  c->r[3]=0u+0x00000000u; // 801E506C
  c->r[4]=0u+0x00000000u; // 801E5070
  c->r[5]=0u+0x00000000u; // 801E5074
  f_8015CFD0(c); return; // 801E5078
}

// TRKLoadContext
void f_801E507C(Ctx* __restrict c) {
  trace_call(0x801E507Cu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E507C
  c->r[1]=R32(c->r[3]+0x00000004u); // 801E5080
  c->r[2]=R32(c->r[3]+0x00000008u); // 801E5084
  c->r[5]=R16(c->r[3]+0x000001A2u); // 801E5088
  c->r[6]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[6]); // 801E508C
  if (crb(c,2)) { goto L_801E50A4; } // 801E5090
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 801E5094
  W16(c->r[3]+0x000001A2u,c->r[5]); // 801E5098
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=5;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E509C
  goto L_801E50A8; // 801E50A0
L_801E50A4:;
  {uint32_t ea=c->r[3]+0x00000034u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E50A4
L_801E50A8:;
  c->r[31]=c->r[3]|c->r[3]; // 801E50A8
  c->r[3]=c->r[4]|c->r[4]; // 801E50AC
  c->r[4]=R32(c->r[31]+0x00000080u); // 801E50B0
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[4]&0xFFFFFFFFu); // 801E50B4
  c->r[4]=R32(c->r[31]+0x00000084u); // 801E50B8
  c->lr=c->r[4]; // 801E50BC
  c->r[4]=R32(c->r[31]+0x00000088u); // 801E50C0
  c->ctr=c->r[4]; // 801E50C4
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 801E50C8
  mtspr(c,1,c->r[4]); // 801E50CC
  c->r[4]=c->msr; // 801E50D0
  c->r[4]=rotl(c->r[4],0)&0xFFFF7FFFu; // 801E50D4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 801E50D8
  c->msr=c->r[4]; // 801E50DC
  mtspr(c,273,c->r[2]); // 801E50E0
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801E50E4
  mtspr(c,274,c->r[4]); // 801E50E8
  c->r[4]=R32(c->r[31]+0x00000010u); // 801E50EC
  mtspr(c,275,c->r[4]); // 801E50F0
  c->r[2]=R32(c->r[31]+0x00000198u); // 801E50F4
  c->r[4]=R32(c->r[31]+0x0000019Cu); // 801E50F8
  c->r[31]=R32(c->r[31]+0x0000007Cu); // 801E50FC
  f_801E8424(c); return; // 801E5100
}

// TRKEXICallBack
void f_801E5104(Ctx* __restrict c) {
  trace_call(0x801E5104u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5104
  c->r[0]=c->lr; // 801E5108
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E510C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5110
  c->r[31]=c->r[4]|c->r[4]; // 801E5114
  c->lr=0x801E511Cu; f_8015DE20(c); // 801E5118
  c->r[3]=c->r[31]|c->r[31]; // 801E511C
  c->r[4]=0u+0x00000500u; // 801E5120
  c->lr=0x801E5128u; f_801E507C(c); // 801E5124
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5128
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E512C
  c->lr=c->r[0]; // 801E5130
  c->r[1]=c->r[1]+0x00000010u; // 801E5134
  return; // 801E5138
}

// InitMetroTRKCommTable
void f_801E513C(Ctx* __restrict c) {
  trace_call(0x801E513Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E513C
  c->r[0]=c->lr; // 801E5140
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5144
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5148
  c->r[31]=c->r[3]|c->r[3]; // 801E514C
  c->r[4]=c->r[31]|c->r[31]; // 801E5150
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E5154
  c->r[30]=0u+0x80250000u; // 801E5158
  c->r[3]=c->r[30]+0xFFFFA3F8u; // 801E515C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5160
  c->lr=0x801E5168u; f_80157240(c); // 801E5164
  c->r[30]=c->r[30]+0xFFFFA3F8u; // 801E5168
  c->r[4]=0u+0x00000040u; // 801E516C
  c->r[3]=c->r[30]+0x00000015u; // 801E5170
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5174
  c->lr=0x801E517Cu; f_80157240(c); // 801E5178
  cmps(c,0,(int32_t)c->r[31],2); // 801E517C
  c->r[0]=0u+0x00000000u; // 801E5180
  W8(c->r[13]+0xFFFFB7F0u,c->r[0]); // 801E5184
  if (!crb(c,2)) { goto L_801E5194; } // 801E5188
  c->r[3]=0u+0x00000000u; // 801E518C
  goto L_801E525C; // 801E5190
L_801E5194:;
  cmps(c,0,(int32_t)c->r[31],1); // 801E5194
  if (!crb(c,2)) { goto L_801E5230; } // 801E5198
  c->r[3]=c->r[30]+0x0000003Au; // 801E519C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E51A0
  c->lr=0x801E51A8u; f_80157240(c); // 801E51A4
  c->r[3]=0u+0x802E0000u; // 801E51A8
  c->r[30]=0u+0x801E0000u; // 801E51AC
  c->r[31]=0u+0x801E0000u; // 801E51B0
  c->r[11]=0u+0x801E0000u; // 801E51B4
  c->r[10]=0u+0x801E0000u; // 801E51B8
  c->r[9]=0u+0x801E0000u; // 801E51BC
  c->r[8]=0u+0x801E0000u; // 801E51C0
  c->r[7]=0u+0x801E0000u; // 801E51C4
  c->r[6]=0u+0x801E0000u; // 801E51C8
  c->r[5]=0u+0x801E0000u; // 801E51CC
  c->r[4]=0u+0x801E0000u; // 801E51D0
  c->r[30]=c->r[30]+0x00004384u; // 801E51D4
  c->r[12]=c->r[3]+0xFFFFB3B0u; // 801E51D8
  c->r[31]=c->r[31]+0x000043C8u; // 801E51DC
  c->r[11]=c->r[11]+0x000043ECu; // 801E51E0
  c->r[10]=c->r[10]+0x000043F4u; // 801E51E4
  c->r[9]=c->r[9]+0x000044A8u; // 801E51E8
  c->r[8]=c->r[8]+0x000043C0u; // 801E51EC
  c->r[7]=c->r[7]+0x00004564u; // 801E51F0
  c->r[6]=c->r[6]+0x0000451Cu; // 801E51F4
  c->r[5]=c->r[5]+0x00004540u; // 801E51F8
  c->r[4]=c->r[4]+0x000045D8u; // 801E51FC
  W32(c->r[3]+0xFFFFB3B0u,c->r[30]); // 801E5200
  c->r[3]=0u+0x00000000u; // 801E5204
  W32(c->r[12]+0x00000018u,c->r[31]); // 801E5208
  W32(c->r[12]+0x0000001Cu,c->r[11]); // 801E520C
  W32(c->r[12]+0x00000010u,c->r[10]); // 801E5210
  W32(c->r[12]+0x00000014u,c->r[9]); // 801E5214
  W32(c->r[12]+0x00000008u,c->r[8]); // 801E5218
  W32(c->r[12]+0x0000000Cu,c->r[7]); // 801E521C
  W32(c->r[12]+0x00000020u,c->r[6]); // 801E5220
  W32(c->r[12]+0x00000024u,c->r[5]); // 801E5224
  W32(c->r[12]+0x00000004u,c->r[4]); // 801E5228
  goto L_801E525C; // 801E522C
L_801E5230:;
  c->r[4]=c->r[31]|c->r[31]; // 801E5230
  c->r[3]=c->r[30]+0x0000005Bu; // 801E5234
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5238
  c->lr=0x801E5240u; f_80157240(c); // 801E523C
  c->r[3]=c->r[30]+0x00000086u; // 801E5240
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5244
  c->lr=0x801E524Cu; f_80157240(c); // 801E5248
  c->r[3]=c->r[30]+0x000000B5u; // 801E524C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5250
  c->lr=0x801E5258u; f_80157240(c); // 801E5254
  c->r[3]=0u+0x00000001u; // 801E5258
L_801E525C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E525C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5260
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E5264
  c->lr=c->r[0]; // 801E5268
  c->r[1]=c->r[1]+0x00000010u; // 801E526C
  return; // 801E5270
}

// TRKUARTInterruptHandler
void f_801E5274(Ctx* __restrict c) {
  trace_call(0x801E5274u);
  return; // 801E5274
}

// TRKInitializeIntDrivenUART
void f_801E5278(Ctx* __restrict c) {
  trace_call(0x801E5278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5278
  c->r[0]=c->lr; // 801E527C
  c->r[4]=0u+0x801E0000u; // 801E5280
  c->r[3]=c->r[5]|c->r[5]; // 801E5284
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5288
  c->r[4]=c->r[4]+0x00005104u; // 801E528C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5290
  c->r[31]=0u+0x802E0000u; // 801E5294
  c->r[12]=R32(c->r[31]+0xFFFFB3B0u); // 801E5298
  c->ctr=c->r[12]; // 801E529C
  if (true) { c->lr=0x801E52A4u; dispatch(c,c->ctr); } // 801E52A0
  c->r[3]=c->r[31]+0xFFFFB3B0u; // 801E52A4
  c->r[12]=R32(c->r[3]+0x00000018u); // 801E52A8
  c->ctr=c->r[12]; // 801E52AC
  if (true) { c->lr=0x801E52B4u; dispatch(c,c->ctr); } // 801E52B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E52B4
  c->r[3]=0u+0x00000000u; // 801E52B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E52BC
  c->lr=c->r[0]; // 801E52C0
  c->r[1]=c->r[1]+0x00000010u; // 801E52C4
  return; // 801E52C8
}

// EnableEXI2Interrupts
void f_801E52CC(Ctx* __restrict c) {
  trace_call(0x801E52CCu);
  c->r[0]=R8(c->r[13]+0xFFFFB7F0u); // 801E52CC
  cmps(c,0,(int32_t)c->r[0],0); // 801E52D0
  if (!crb(c,2)) return; // 801E52D4
  c->r[3]=0u+0x802E0000u; // 801E52D8
  c->r[3]=c->r[3]+0xFFFFB3B0u; // 801E52DC
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E52E0
  cmps(c,0,(int32_t)c->r[12],0); // 801E52E4
  if (crb(c,2)) return; // 801E52E8
  c->ctr=c->r[12]; // 801E52EC
  if (true) { dispatch(c,c->ctr); return; } // 801E52F0
  return; // 801E52F4
}

// TRKPollUART
void f_801E52F8(Ctx* __restrict c) {
  trace_call(0x801E52F8u);
  c->r[3]=0u+0x802E0000u; // 801E52F8
  c->r[3]=c->r[3]+0xFFFFB3B0u; // 801E52FC
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801E5300
  c->ctr=c->r[12]; // 801E5304
  if (true) { dispatch(c,c->ctr); return; } // 801E5308
}

// TRKReadUARTN
void f_801E530C(Ctx* __restrict c) {
  trace_call(0x801E530Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E530C
  c->r[0]=c->lr; // 801E5310
  c->r[5]=0u+0x802E0000u; // 801E5314
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5318
  c->r[5]=c->r[5]+0xFFFFB3B0u; // 801E531C
  c->r[12]=R32(c->r[5]+0x00000010u); // 801E5320
  c->ctr=c->r[12]; // 801E5324
  if (true) { c->lr=0x801E532Cu; dispatch(c,c->ctr); } // 801E5328
  c->r[0]=0u-c->r[3]; // 801E532C
  c->r[0]=c->r[0]|c->r[3]; // 801E5330
  c->r[3]=sraw(c,c->r[0],31); // 801E5334
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5338
  c->lr=c->r[0]; // 801E533C
  c->r[1]=c->r[1]+0x00000010u; // 801E5340
  return; // 801E5344
}

// TRK_WriteUARTN
void f_801E5348(Ctx* __restrict c) {
  trace_call(0x801E5348u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5348
  c->r[0]=c->lr; // 801E534C
  c->r[5]=0u+0x802E0000u; // 801E5350
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5354
  c->r[5]=c->r[5]+0xFFFFB3B0u; // 801E5358
  c->r[12]=R32(c->r[5]+0x00000014u); // 801E535C
  c->ctr=c->r[12]; // 801E5360
  if (true) { c->lr=0x801E5368u; dispatch(c,c->ctr); } // 801E5364
  c->r[0]=0u-c->r[3]; // 801E5368
  c->r[0]=c->r[0]|c->r[3]; // 801E536C
  c->r[3]=sraw(c,c->r[0],31); // 801E5370
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5374
  c->lr=c->r[0]; // 801E5378
  c->r[1]=c->r[1]+0x00000010u; // 801E537C
  return; // 801E5380
}

// ReserveEXI2Port
void f_801E5384(Ctx* __restrict c) {
  trace_call(0x801E5384u);
  c->r[3]=0u+0x802E0000u; // 801E5384
  c->r[3]=c->r[3]+0xFFFFB3B0u; // 801E5388
  c->r[12]=R32(c->r[3]+0x00000024u); // 801E538C
  c->ctr=c->r[12]; // 801E5390
  if (true) { dispatch(c,c->ctr); return; } // 801E5394
}

// UnreserveEXI2Port
void f_801E5398(Ctx* __restrict c) {
  trace_call(0x801E5398u);
  c->r[3]=0u+0x802E0000u; // 801E5398
  c->r[3]=c->r[3]+0xFFFFB3B0u; // 801E539C
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E53A0
  c->ctr=c->r[12]; // 801E53A4
  if (true) { dispatch(c,c->ctr); return; } // 801E53A8
}

// TRK_board_display
void f_801E53AC(Ctx* __restrict c) {
  trace_call(0x801E53ACu);
  c->r[5]=0u+0x80250000u; // 801E53AC
  c->r[4]=c->r[3]|c->r[3]; // 801E53B0
  c->r[5]=c->r[5]+0xFFFFA3F8u; // 801E53B4
  c->r[3]=c->r[5]+0x000000DDu; // 801E53B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E53BC
  f_80157240(c); return; // 801E53C0
}

// InitializeProgramEndTrap
void f_801E53C4(Ctx* __restrict c) {
  trace_call(0x801E53C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E53C4
  c->r[0]=c->lr; // 801E53C8
  c->r[4]=c->r[2]+0xFFFFB330u; // 801E53CC
  c->r[5]=0u+0x00000004u; // 801E53D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E53D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E53D8
  c->r[31]=0u+0x80150000u; // 801E53DC
  c->r[31]=c->r[31]+0x00003DA0u; // 801E53E0
  c->r[3]=c->r[31]+0x00000004u; // 801E53E4
  c->lr=0x801E53ECu; f_801E49D4(c); // 801E53E8
  c->r[3]=c->r[31]+0x00000004u; // 801E53EC
  c->r[4]=0u+0x00000004u; // 801E53F0
  c->lr=0x801E53F8u; f_80156630(c); // 801E53F4
  c->r[3]=c->r[31]+0x00000004u; // 801E53F8
  c->r[4]=0u+0x00000004u; // 801E53FC
  c->lr=0x801E5404u; f_80156570(c); // 801E5400
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5404
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5408
  c->lr=c->r[0]; // 801E540C
  c->r[1]=c->r[1]+0x00000010u; // 801E5410
  return; // 801E5414
}

// TRKDoNotifyStopped
void f_801E5418(Ctx* __restrict c) {
  trace_call(0x801E5418u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5418
  c->r[0]=c->lr; // 801E541C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5420
  c->r[4]=c->r[1]+0x00000008u; // 801E5424
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5428
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E542C
  c->r[30]=c->r[3]|c->r[3]; // 801E5430
  c->r[3]=c->r[1]+0x0000000Cu; // 801E5434
  c->lr=0x801E543Cu; f_801E62FC(c); // 801E5438
  cmps(c,0,(int32_t)c->r[3],0); // 801E543C
  c->r[31]=c->r[3]|c->r[3]; // 801E5440
  if (!crb(c,2)) { goto L_801E548C; } // 801E5444
  cmps(c,0,(int32_t)c->r[30],144); // 801E5448
  if (!crb(c,2)) { goto L_801E545C; } // 801E544C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5450
  c->lr=0x801E5458u; f_801E8880(c); // 801E5454
  goto L_801E5464; // 801E5458
L_801E545C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E545C
  c->lr=0x801E5464u; f_801E8A80(c); // 801E5460
L_801E5464:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5464
  c->r[4]=c->r[1]+0x00000010u; // 801E5468
  c->lr=0x801E5470u; f_801E5AEC(c); // 801E546C
  cmps(c,0,(int32_t)c->r[3],0); // 801E5470
  c->r[31]=c->r[3]|c->r[3]; // 801E5474
  if (!crb(c,2)) { goto L_801E5484; } // 801E5478
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E547C
  c->lr=0x801E5484u; f_801E63BC(c); // 801E5480
L_801E5484:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E5484
  c->lr=0x801E548Cu; f_801E63BC(c); // 801E5488
L_801E548C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E548C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5490
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5494
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5498
  c->lr=c->r[0]; // 801E549C
  c->r[1]=c->r[1]+0x00000020u; // 801E54A0
  return; // 801E54A4
}

// TRKInitializeEventQueue
void f_801E54A8(Ctx* __restrict c) {
  trace_call(0x801E54A8u);
  c->r[3]=0u+0x802E0000u; // 801E54A8
  c->r[5]=0u+0x00000000u; // 801E54AC
  c->r[4]=c->r[3]+0xFFFFB3D8u; // 801E54B0
  c->r[0]=0u+0x00000100u; // 801E54B4
  W32(c->r[3]+0xFFFFB3D8u,c->r[5]); // 801E54B8
  c->r[3]=0u+0x00000000u; // 801E54BC
  W32(c->r[4]+0x00000004u,c->r[5]); // 801E54C0
  W32(c->r[4]+0x00000020u,c->r[0]); // 801E54C4
  return; // 801E54C8
}

// TRKGetNextEvent
void f_801E54CC(Ctx* __restrict c) {
  trace_call(0x801E54CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E54CC
  c->r[0]=c->lr; // 801E54D0
  c->r[4]=0u+0x00000000u; // 801E54D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E54D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E54DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E54E0
  c->r[30]=0u+0x802E0000u; // 801E54E4
  c->r[0]=R32(c->r[30]+0xFFFFB3D8u); // 801E54E8
  cmps(c,0,(int32_t)c->r[0],0); // 801E54EC
  if (!crb(c,1)) { goto L_801E553C; } // 801E54F0
  c->r[31]=c->r[30]+0xFFFFB3D8u; // 801E54F4
  c->r[5]=0u+0x0000000Cu; // 801E54F8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E54FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E5500
  c->r[4]=c->r[31]+c->r[0]; // 801E5504
  c->r[4]=c->r[4]+0x00000008u; // 801E5508
  c->lr=0x801E5510u; f_801E49D4(c); // 801E550C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801E5510
  c->r[4]=R32(c->r[30]+0xFFFFB3D8u); // 801E5514
  c->r[0]=c->r[3]+0x00000001u; // 801E5518
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E551C
  cmps(c,0,(int32_t)c->r[0],2); // 801E5520
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E5524
  W32(c->r[30]+0xFFFFB3D8u,c->r[0]); // 801E5528
  if (!crb(c,2)) { goto L_801E5538; } // 801E552C
  c->r[0]=0u+0x00000000u; // 801E5530
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E5534
L_801E5538:;
  c->r[4]=0u+0x00000001u; // 801E5538
L_801E553C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E553C
  c->r[3]=c->r[4]|c->r[4]; // 801E5540
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E5544
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5548
  c->lr=c->r[0]; // 801E554C
  c->r[1]=c->r[1]+0x00000010u; // 801E5550
  return; // 801E5554
}

// TRKPostEvent
void f_801E5558(Ctx* __restrict c) {
  trace_call(0x801E5558u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5558
  c->r[0]=c->lr; // 801E555C
  c->r[4]=0u+0x802E0000u; // 801E5560
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5564
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5568
  c->r[31]=0u+0x00000000u; // 801E556C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5570
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E5574
  c->r[6]=R32(c->r[4]+0xFFFFB3D8u); // 801E5578
  cmps(c,0,(int32_t)c->r[6],2); // 801E557C
  if (!crb(c,2)) { goto L_801E5598; } // 801E5580
  c->r[3]=0u+0x80250000u; // 801E5584
  c->r[31]=0u+0x00000100u; // 801E5588
  c->r[3]=c->r[3]+0xFFFFA4E0u; // 801E558C
  c->lr=0x801E5594u; f_80157240(c); // 801E5590
  goto L_801E5604; // 801E5594
L_801E5598:;
  c->r[30]=c->r[4]+0xFFFFB3D8u; // 801E5598
  c->r[4]=c->r[3]|c->r[3]; // 801E559C
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E55A0
  c->r[5]=0u+0x0000000Cu; // 801E55A4
  c->r[0]=c->r[0]+c->r[6]; // 801E55A8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E55AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E55B0
  c->r[0]=c->r[0]^c->r[3]; // 801E55B4
  c->r[0]=c->r[0]-c->r[3]; // 801E55B8
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E55BC
  c->r[3]=c->r[30]+c->r[29]; // 801E55C0
  c->r[3]=c->r[3]+0x00000008u; // 801E55C4
  c->lr=0x801E55CCu; f_801E49D4(c); // 801E55C8
  c->r[3]=c->r[30]+c->r[29]; // 801E55CC
  c->r[0]=R32(c->r[30]+0x00000020u); // 801E55D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E55D4
  c->r[3]=R32(c->r[30]+0x00000020u); // 801E55D8
  c->r[0]=c->r[3]+0x00000001u; // 801E55DC
  W32(c->r[30]+0x00000020u,c->r[0]); // 801E55E0
  cmpu(c,0,c->r[0],0x00000100u); // 801E55E4
  if (!crb(c,0)) { goto L_801E55F4; } // 801E55E8
  c->r[0]=0u+0x00000100u; // 801E55EC
  W32(c->r[30]+0x00000020u,c->r[0]); // 801E55F0
L_801E55F4:;
  c->r[4]=0u+0x802E0000u; // 801E55F4
  c->r[3]=R32(c->r[4]+0xFFFFB3D8u); // 801E55F8
  c->r[0]=c->r[3]+0x00000001u; // 801E55FC
  W32(c->r[4]+0xFFFFB3D8u,c->r[0]); // 801E5600
L_801E5604:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5604
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5608
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E560C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5610
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5614
  c->lr=c->r[0]; // 801E5618
  c->r[1]=c->r[1]+0x00000020u; // 801E561C
  return; // 801E5620
}

// TRKConstructEvent
void f_801E5624(Ctx* __restrict c) {
  trace_call(0x801E5624u);
  c->r[5]=0u+0x00000000u; // 801E5624
  c->r[0]=0u+0xFFFFFFFFu; // 801E5628
  W32(c->r[3]+0x00000000u,c->r[4]); // 801E562C
  W32(c->r[3]+0x00000004u,c->r[5]); // 801E5630
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E5634
  return; // 801E5638
}

// TRKDestructEvent
void f_801E563C(Ctx* __restrict c) {
  trace_call(0x801E563Cu);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E563C
  f_801E63BC(c); return; // 801E5640
}

// TRKInitializeNub
void f_801E5644(Ctx* __restrict c) {
  trace_call(0x801E5644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5644
  c->r[0]=c->lr; // 801E5648
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E564C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5650
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E5654
  c->lr=0x801E565Cu; f_801E5720(c); // 801E5658
  cmps(c,0,(int32_t)c->r[3],0); // 801E565C
  c->r[31]=c->r[3]|c->r[3]; // 801E5660
  if (!crb(c,2)) { goto L_801E5670; } // 801E5664
  c->lr=0x801E566Cu; f_801E54A8(c); // 801E5668
  c->r[31]=c->r[3]|c->r[3]; // 801E566C
L_801E5670:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E5670
  if (!crb(c,2)) { goto L_801E5680; } // 801E5674
  c->lr=0x801E567Cu; f_801E62DC(c); // 801E5678
  c->r[31]=c->r[3]|c->r[3]; // 801E567C
L_801E5680:;
  c->lr=0x801E5684u; f_801E53C4(c); // 801E5680
  cmps(c,0,(int32_t)c->r[31],0); // 801E5684
  if (!crb(c,2)) { goto L_801E5694; } // 801E5688
  c->lr=0x801E5690u; f_801E58CC(c); // 801E568C
  c->r[31]=c->r[3]|c->r[3]; // 801E5690
L_801E5694:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E5694
  if (!crb(c,2)) { goto L_801E56A4; } // 801E5698
  c->lr=0x801E56A0u; f_801E5024(c); // 801E569C
  c->r[31]=c->r[3]|c->r[3]; // 801E56A0
L_801E56A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E56A4
  if (!crb(c,2)) { goto L_801E56D4; } // 801E56A8
  c->r[3]=0u+0x00000001u; // 801E56AC
  c->r[4]=0u+0x00000000u; // 801E56B0
  c->r[5]=c->r[13]+0xFFFFB800u; // 801E56B4
  c->lr=0x801E56BCu; f_801E5278(c); // 801E56B8
  c->r[30]=c->r[3]|c->r[3]; // 801E56BC
  c->r[3]=R32(c->r[13]+0xFFFFB800u); // 801E56C0
  c->lr=0x801E56C8u; f_801E9374(c); // 801E56C4
  cmps(c,0,(int32_t)c->r[30],0); // 801E56C8
  if (crb(c,2)) { goto L_801E56D4; } // 801E56CC
  c->r[31]=c->r[30]|c->r[30]; // 801E56D0
L_801E56D4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E56D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E56D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E56DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E56E0
  c->lr=c->r[0]; // 801E56E4
  c->r[1]=c->r[1]+0x00000010u; // 801E56E8
  return; // 801E56EC
}

// TRKTerminateNub
void f_801E56F0(Ctx* __restrict c) {
  trace_call(0x801E56F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E56F0
  c->r[0]=c->lr; // 801E56F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E56F8
  c->lr=0x801E5700u; f_801E58D4(c); // 801E56FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5700
  c->r[3]=0u+0x00000000u; // 801E5704
  c->lr=c->r[0]; // 801E5708
  c->r[1]=c->r[1]+0x00000010u; // 801E570C
  return; // 801E5710
}

// TRKNubWelcome
void f_801E5714(Ctx* __restrict c) {
  trace_call(0x801E5714u);
  c->r[3]=0u+0x80250000u; // 801E5714
  c->r[3]=c->r[3]+0xFFFFA500u; // 801E5718
  f_801E53AC(c); return; // 801E571C
}

// TRKInitializeEndian
void f_801E5720(Ctx* __restrict c) {
  trace_call(0x801E5720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5720
  c->r[3]=0u+0x00000012u; // 801E5724
  c->r[5]=0u+0x00000034u; // 801E5728
  c->r[4]=0u+0x00000056u; // 801E572C
  c->r[0]=0u+0x00000078u; // 801E5730
  W8(c->r[1]+0x00000008u,c->r[3]); // 801E5734
  c->r[6]=0u+0x00000001u; // 801E5738
  c->r[3]=0u+0x00000000u; // 801E573C
  W8(c->r[1]+0x00000009u,c->r[5]); // 801E5740
  W8(c->r[1]+0x0000000Au,c->r[4]); // 801E5744
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801E5748
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E574C
  W32(c->r[13]+0xFFFFB7F8u,c->r[6]); // 801E5750
  c->r[0]=c->r[4]+0xEDCC0000u; // 801E5754
  cmpu(c,0,c->r[0],0x00005678u); // 801E5758
  if (!crb(c,2)) { goto L_801E5768; } // 801E575C
  W32(c->r[13]+0xFFFFB7F8u,c->r[6]); // 801E5760
  goto L_801E578C; // 801E5764
L_801E5768:;
  c->r[0]=c->r[4]+0x87AA0000u; // 801E5768
  cmpu(c,0,c->r[0],0x00003412u); // 801E576C
  if (!crb(c,2)) { goto L_801E577C; } // 801E5770
  c->r[0]=0u+0x00000000u; // 801E5774
  W32(c->r[13]+0xFFFFB7F8u,c->r[0]); // 801E5778
L_801E577C:;
  c->r[0]=c->r[4]+0x87AA0000u; // 801E577C
  cmpu(c,0,c->r[0],0x00003412u); // 801E5780
  if (crb(c,2)) { goto L_801E578C; } // 801E5784
  c->r[3]=0u+0x00000001u; // 801E5788
L_801E578C:;
  c->r[1]=c->r[1]+0x00000010u; // 801E578C
  return; // 801E5790
}

// TRKTestForPacket
void f_801E5794(Ctx* __restrict c) {
  trace_call(0x801E5794u);
  {uint32_t ea=c->r[1]+0xFFFFF720u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5794
  c->r[0]=c->lr; // 801E5798
  W32(c->r[1]+0x000008E4u,c->r[0]); // 801E579C
  W32(c->r[1]+0x000008DCu,c->r[31]); // 801E57A0
  c->lr=0x801E57A8u; f_801E52F8(c); // 801E57A4
  cmps(c,0,(int32_t)c->r[3],0); // 801E57A8
  if (crb(c,1)) { goto L_801E57B8; } // 801E57AC
  c->r[3]=0u+0xFFFFFFFFu; // 801E57B0
  goto L_801E584C; // 801E57B4
L_801E57B8:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801E57B8
  c->r[4]=c->r[1]+0x00000008u; // 801E57BC
  c->lr=0x801E57C4u; f_801E62FC(c); // 801E57C0
  c->r[31]=c->r[3]|c->r[3]; // 801E57C4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E57C8
  c->r[4]=0u+0x00000000u; // 801E57CC
  c->lr=0x801E57D4u; f_801E640C(c); // 801E57D0
  c->r[3]=c->r[1]+0x00000010u; // 801E57D4
  c->r[4]=0u+0x00000040u; // 801E57D8
  c->lr=0x801E57E0u; f_801E530C(c); // 801E57DC
  cmps(c,0,(int32_t)c->r[3],0); // 801E57E0
  if (!crb(c,2)) { goto L_801E583C; } // 801E57E4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E57E8
  c->r[4]=c->r[1]+0x00000010u; // 801E57EC
  c->r[5]=0u+0x00000040u; // 801E57F0
  c->lr=0x801E57F8u; f_801E6734(c); // 801E57F4
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E57F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E57FC
  c->r[4]=addc(c,c->r[3],0xFFFFFFC0u,0); cr0(c,c->r[4]); // 801E5800
  if (!crb(c,1)) { goto L_801E5848; } // 801E5804
  c->r[3]=c->r[1]+0x00000050u; // 801E5808
  c->lr=0x801E5810u; f_801E530C(c); // 801E580C
  cmps(c,0,(int32_t)c->r[3],0); // 801E5810
  if (!crb(c,2)) { goto L_801E582C; } // 801E5814
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5818
  c->r[4]=c->r[1]+0x00000050u; // 801E581C
  c->r[5]=R32(c->r[1]+0x00000010u); // 801E5820
  c->lr=0x801E5828u; f_801E6734(c); // 801E5824
  goto L_801E5848; // 801E5828
L_801E582C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E582C
  c->lr=0x801E5834u; f_801E63BC(c); // 801E5830
  c->r[31]=0u+0xFFFFFFFFu; // 801E5834
  goto L_801E5848; // 801E5838
L_801E583C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E583C
  c->lr=0x801E5844u; f_801E63BC(c); // 801E5840
  c->r[31]=0u+0xFFFFFFFFu; // 801E5844
L_801E5848:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5848
L_801E584C:;
  c->r[0]=R32(c->r[1]+0x000008E4u); // 801E584C
  c->r[31]=R32(c->r[1]+0x000008DCu); // 801E5850
  c->lr=c->r[0]; // 801E5854
  c->r[1]=c->r[1]+0x000008E0u; // 801E5858
  return; // 801E585C
}

// TRKGetInput
void f_801E5860(Ctx* __restrict c) {
  trace_call(0x801E5860u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5860
  c->r[0]=c->lr; // 801E5864
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5868
  c->lr=0x801E5870u; f_801E5794(c); // 801E586C
  cmps(c,0,(int32_t)c->r[3],-1); // 801E5870
  if (crb(c,2)) { goto L_801E587C; } // 801E5874
  c->lr=0x801E587Cu; f_801E588C(c); // 801E5878
L_801E587C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E587C
  c->lr=c->r[0]; // 801E5880
  c->r[1]=c->r[1]+0x00000010u; // 801E5884
  return; // 801E5888
}

// TRKProcessInput
void f_801E588C(Ctx* __restrict c) {
  trace_call(0x801E588Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E588C
  c->r[0]=c->lr; // 801E5890
  c->r[4]=0u+0x00000002u; // 801E5894
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E589C
  c->r[31]=c->r[3]|c->r[3]; // 801E58A0
  c->r[3]=c->r[1]+0x00000008u; // 801E58A4
  c->lr=0x801E58ACu; f_801E5624(c); // 801E58A8
  W32(c->r[1]+0x00000010u,c->r[31]); // 801E58AC
  c->r[3]=c->r[1]+0x00000008u; // 801E58B0
  c->lr=0x801E58B8u; f_801E5558(c); // 801E58B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E58B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E58BC
  c->lr=c->r[0]; // 801E58C0
  c->r[1]=c->r[1]+0x00000020u; // 801E58C4
  return; // 801E58C8
}

// TRKInitializeSerialHandler
void f_801E58CC(Ctx* __restrict c) {
  trace_call(0x801E58CCu);
  c->r[3]=0u+0x00000000u; // 801E58CC
  return; // 801E58D0
}

// TRKTerminateSerialHandler
void f_801E58D4(Ctx* __restrict c) {
  trace_call(0x801E58D4u);
  c->r[3]=0u+0x00000000u; // 801E58D4
  return; // 801E58D8
}

// TRK_strlen
void f_801E58DC(Ctx* __restrict c) {
  trace_call(0x801E58DCu);
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801E58DC
  c->r[3]=0u+0xFFFFFFFFu; // 801E58E0
L_801E58E4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 801E58E4
  c->r[3]=c->r[3]+0x00000001u; // 801E58E8
  cmps(c,0,(int32_t)c->r[0],0); // 801E58EC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E58E4; } // 801E58F0
  return; // 801E58F4
}

// TRK_SuppAccessFile
void f_801E58F8(Ctx* __restrict c) {
  trace_call(0x801E58F8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E58F8
  c->r[0]=c->lr; // 801E58FC
  cmps(c,0,(int32_t)c->r[4],0); // 801E5900
  W32(c->r[1]+0x00000094u,c->r[0]); // 801E5904
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E5908
  c->r[24]=c->r[3]|c->r[3]; // 801E590C
  c->r[25]=c->r[4]|c->r[4]; // 801E5910
  c->r[26]=c->r[5]|c->r[5]; // 801E5914
  c->r[27]=c->r[6]|c->r[6]; // 801E5918
  c->r[28]=c->r[7]|c->r[7]; // 801E591C
  c->r[29]=c->r[8]|c->r[8]; // 801E5920
  if (crb(c,2)) { goto L_801E5934; } // 801E5924
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E5928
  cmps(c,0,(int32_t)c->r[0],0); // 801E592C
  if (!crb(c,2)) { goto L_801E593C; } // 801E5930
L_801E5934:;
  c->r[3]=0u+0x00000002u; // 801E5934
  goto L_801E5AD8; // 801E5938
L_801E593C:;
  c->r[30]=0u+0x00000000u; // 801E593C
  W32(c->r[6]+0x00000000u,c->r[30]); // 801E5940
  c->r[31]=0u+0x00000000u; // 801E5944
  c->r[23]=0u+0x00000000u; // 801E5948
  goto L_801E5AA8; // 801E594C
L_801E5950:;
  c->r[3]=c->r[1]+0x00000018u; // 801E5950
  c->r[4]=0u+0x00000000u; // 801E5954
  c->r[5]=0u+0x00000040u; // 801E5958
  c->lr=0x801E5960u; f_801E4B10(c); // 801E595C
  c->r[0]=R32(c->r[26]+0x00000000u); // 801E5960
  c->r[21]=0u+0x00000800u; // 801E5964
  c->r[0]=c->r[0]-c->r[31]; // 801E5968
  cmpu(c,0,c->r[0],0x00000800u); // 801E596C
  if (crb(c,1)) { goto L_801E5978; } // 801E5970
  c->r[21]=c->r[0]|c->r[0]; // 801E5974
L_801E5978:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E5978
  c->r[0]=0u+0x000000D0u; // 801E597C
  if (crb(c,2)) { goto L_801E5988; } // 801E5980
  c->r[0]=0u+0x000000D1u; // 801E5984
L_801E5988:;
  cmps(c,0,(int32_t)c->r[29],0); // 801E5988
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801E598C
  c->r[0]=0u+0x00000040u; // 801E5990
  if (!crb(c,2)) { goto L_801E599C; } // 801E5994
  c->r[0]=c->r[21]+0x00000040u; // 801E5998
L_801E599C:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E599C
  c->r[3]=c->r[1]+0x0000000Cu; // 801E59A0
  c->r[4]=c->r[1]+0x00000008u; // 801E59A4
  W32(c->r[1]+0x00000020u,c->r[24]); // 801E59A8
  W16(c->r[1]+0x00000024u,c->r[21]); // 801E59AC
  c->lr=0x801E59B4u; f_801E62FC(c); // 801E59B0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E59B4
  c->r[4]=c->r[1]+0x00000018u; // 801E59B8
  c->r[5]=0u+0x00000040u; // 801E59BC
  c->lr=0x801E59C4u; f_801E6734(c); // 801E59C0
  cmps(c,0,(int32_t)c->r[29],0); // 801E59C4
  c->r[23]=c->r[3]|c->r[3]; // 801E59C8
  if (!crb(c,2)) { goto L_801E59EC; } // 801E59CC
  cmps(c,0,(int32_t)c->r[3],0); // 801E59D0
  if (!crb(c,2)) { goto L_801E59EC; } // 801E59D4
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E59D8
  c->r[5]=c->r[21]|c->r[21]; // 801E59DC
  c->r[4]=c->r[25]+c->r[31]; // 801E59E0
  c->lr=0x801E59E8u; f_801E6734(c); // 801E59E4
  c->r[23]=c->r[3]|c->r[3]; // 801E59E8
L_801E59EC:;
  cmps(c,0,(int32_t)c->r[23],0); // 801E59EC
  if (!crb(c,2)) { goto L_801E5A9C; } // 801E59F0
  cmps(c,0,(int32_t)c->r[28],0); // 801E59F4
  if (crb(c,2)) { goto L_801E5A90; } // 801E59F8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E59FC
  c->r[4]=c->r[1]+0x00000010u; // 801E5A00
  c->lr=0x801E5A08u; f_801E5AEC(c); // 801E5A04
  cmps(c,0,(int32_t)c->r[3],0); // 801E5A08
  c->r[23]=c->r[3]|c->r[3]; // 801E5A0C
  if (!crb(c,2)) { goto L_801E5A20; } // 801E5A10
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E5A14
  c->lr=0x801E5A1Cu; f_801E6398(c); // 801E5A18
  c->r[22]=c->r[3]|c->r[3]; // 801E5A1C
L_801E5A20:;
  c->r[0]=R32(c->r[22]+0x0000001Cu); // 801E5A20
  cmps(c,0,(int32_t)c->r[29],0); // 801E5A24
  c->r[19]=R16(c->r[22]+0x00000020u); // 801E5A28
  c->r[20]=rotl(c->r[0],0)&0x000000FFu; // 801E5A2C
  if (crb(c,2)) { goto L_801E5A70; } // 801E5A30
  cmps(c,0,(int32_t)c->r[23],0); // 801E5A34
  if (!crb(c,2)) { goto L_801E5A70; } // 801E5A38
  cmpu(c,0,c->r[19],c->r[21]); // 801E5A3C
  if (crb(c,1)) { goto L_801E5A70; } // 801E5A40
  c->r[3]=c->r[22]|c->r[22]; // 801E5A44
  c->r[4]=0u+0x00000040u; // 801E5A48
  c->lr=0x801E5A50u; f_801E640C(c); // 801E5A4C
  c->r[3]=c->r[22]|c->r[22]; // 801E5A50
  c->r[5]=c->r[19]|c->r[19]; // 801E5A54
  c->r[4]=c->r[25]+c->r[31]; // 801E5A58
  c->lr=0x801E5A60u; f_801E6968(c); // 801E5A5C
  cmps(c,0,(int32_t)c->r[3],770); // 801E5A60
  c->r[23]=c->r[3]|c->r[3]; // 801E5A64
  if (!crb(c,2)) { goto L_801E5A70; } // 801E5A68
  c->r[23]=0u+0x00000000u; // 801E5A6C
L_801E5A70:;
  cmpu(c,0,c->r[19],c->r[21]); // 801E5A70
  if (crb(c,2)) { goto L_801E5A80; } // 801E5A74
  c->r[21]=c->r[19]|c->r[19]; // 801E5A78
  c->r[30]=0u+0x00000001u; // 801E5A7C
L_801E5A80:;
  W32(c->r[27]+0x00000000u,c->r[20]); // 801E5A80
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E5A84
  c->lr=0x801E5A8Cu; f_801E63BC(c); // 801E5A88
  goto L_801E5A9C; // 801E5A8C
L_801E5A90:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5A90
  c->lr=0x801E5A98u; f_801E6278(c); // 801E5A94
  c->r[23]=c->r[3]|c->r[3]; // 801E5A98
L_801E5A9C:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E5A9C
  c->lr=0x801E5AA4u; f_801E63BC(c); // 801E5AA0
  c->r[31]=c->r[31]+c->r[21]; // 801E5AA4
L_801E5AA8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E5AA8
  if (!crb(c,2)) { goto L_801E5AD0; } // 801E5AAC
  c->r[0]=R32(c->r[26]+0x00000000u); // 801E5AB0
  cmpu(c,0,c->r[31],c->r[0]); // 801E5AB4
  if (!crb(c,0)) { goto L_801E5AD0; } // 801E5AB8
  cmps(c,0,(int32_t)c->r[23],0); // 801E5ABC
  if (!crb(c,2)) { goto L_801E5AD0; } // 801E5AC0
  c->r[0]=R32(c->r[27]+0x00000000u); // 801E5AC4
  cmps(c,0,(int32_t)c->r[0],0); // 801E5AC8
  if (crb(c,2)) { IRQCHK(c); goto L_801E5950; } // 801E5ACC
L_801E5AD0:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 801E5AD0
  c->r[3]=c->r[23]|c->r[23]; // 801E5AD4
L_801E5AD8:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E5AD8
  c->r[0]=R32(c->r[1]+0x00000094u); // 801E5ADC
  c->lr=c->r[0]; // 801E5AE0
  c->r[1]=c->r[1]+0x00000090u; // 801E5AE4
  return; // 801E5AE8
}

// TRK_RequestSend
void f_801E5AEC(Ctx* __restrict c) {
  trace_call(0x801E5AECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5AEC
  c->r[0]=c->lr; // 801E5AF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5AF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E5AF8
  c->r[26]=c->r[4]|c->r[4]; // 801E5AFC
  c->lr=0x801E5B04u; f_801E6278(c); // 801E5B00
  cmps(c,0,(int32_t)c->r[3],0); // 801E5B04
  c->r[30]=c->r[3]|c->r[3]; // 801E5B08
  if (!crb(c,2)) { goto L_801E5BD8; } // 801E5B0C
  c->r[27]=0u+0x00000000u; // 801E5B10
  c->r[31]=0u+0xFFFFFFFFu; // 801E5B14
L_801E5B18:;
  c->lr=0x801E5B1Cu; f_801E5794(c); // 801E5B18
  cmps(c,0,(int32_t)c->r[3],-1); // 801E5B1C
  W32(c->r[26]+0x00000000u,c->r[3]); // 801E5B20
  if (crb(c,2)) { IRQCHK(c); goto L_801E5B18; } // 801E5B24
  c->lr=0x801E5B2Cu; f_801E6398(c); // 801E5B28
  c->r[29]=c->r[3]|c->r[3]; // 801E5B2C
  c->r[4]=0u+0x00000000u; // 801E5B30
  c->lr=0x801E5B38u; f_801E640C(c); // 801E5B34
  c->r[28]=R8(c->r[29]+0x00000010u); // 801E5B38
  cmpu(c,0,c->r[28],0x00000080u); // 801E5B3C
  if (!crb(c,0)) { goto L_801E5B54; } // 801E5B40
  c->r[3]=R32(c->r[26]+0x00000000u); // 801E5B44
  c->lr=0x801E5B4Cu; f_801E588C(c); // 801E5B48
  W32(c->r[26]+0x00000000u,c->r[31]); // 801E5B4C
  IRQCHK(c); goto L_801E5B18; // 801E5B50
L_801E5B54:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 801E5B54
  cmps(c,0,(int32_t)c->r[0],-1); // 801E5B58
  if (crb(c,2)) { goto L_801E5BD8; } // 801E5B5C
  c->r[4]=R32(c->r[29]+0x00000004u); // 801E5B60
  cmpu(c,0,c->r[4],0x00000040u); // 801E5B64
  if (!crb(c,0)) { goto L_801E5B80; } // 801E5B68
  c->r[3]=0u+0x80250000u; // 801E5B6C
  c->r[3]=c->r[3]+0xFFFFA520u; // 801E5B70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5B74
  c->lr=0x801E5B7Cu; f_80157240(c); // 801E5B78
  c->r[27]=0u+0x00000001u; // 801E5B7C
L_801E5B80:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E5B80
  if (!crb(c,2)) { goto L_801E5B94; } // 801E5B84
  cmps(c,0,(int32_t)c->r[27],0); // 801E5B88
  if (!crb(c,2)) { goto L_801E5B94; } // 801E5B8C
  c->r[31]=R8(c->r[29]+0x00000014u); // 801E5B90
L_801E5B94:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E5B94
  if (!crb(c,2)) { goto L_801E5BB8; } // 801E5B98
  cmps(c,0,(int32_t)c->r[27],0); // 801E5B9C
  if (!crb(c,2)) { goto L_801E5BB8; } // 801E5BA0
  cmps(c,0,(int32_t)c->r[28],128); // 801E5BA4
  if (!crb(c,2)) { goto L_801E5BB4; } // 801E5BA8
  cmps(c,0,(int32_t)c->r[31],0); // 801E5BAC
  if (crb(c,2)) { goto L_801E5BB8; } // 801E5BB0
L_801E5BB4:;
  c->r[27]=0u+0x00000001u; // 801E5BB4
L_801E5BB8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E5BB8
  if (!crb(c,2)) { goto L_801E5BC8; } // 801E5BBC
  cmps(c,0,(int32_t)c->r[27],0); // 801E5BC0
  if (crb(c,2)) { goto L_801E5BD8; } // 801E5BC4
L_801E5BC8:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 801E5BC8
  c->lr=0x801E5BD0u; f_801E63BC(c); // 801E5BCC
  c->r[0]=0u+0xFFFFFFFFu; // 801E5BD0
  W32(c->r[26]+0x00000000u,c->r[0]); // 801E5BD4
L_801E5BD8:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 801E5BD8
  cmps(c,0,(int32_t)c->r[0],-1); // 801E5BDC
  if (!crb(c,2)) { goto L_801E5BFC; } // 801E5BE0
  c->r[3]=0u+0x80250000u; // 801E5BE4
  c->r[3]=c->r[3]+0xFFFFA520u; // 801E5BE8
  c->r[3]=c->r[3]+0x0000001Fu; // 801E5BEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E5BF0
  c->lr=0x801E5BF8u; f_80157240(c); // 801E5BF4
  c->r[30]=0u+0x00000800u; // 801E5BF8
L_801E5BFC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E5BFC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E5C00
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5C04
  c->lr=c->r[0]; // 801E5C08
  c->r[1]=c->r[1]+0x00000020u; // 801E5C0C
  return; // 801E5C10
}

// HandleOpenFileSupportRequest
void f_801E5C14(Ctx* __restrict c) {
  trace_call(0x801E5C14u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5C14
  c->r[0]=c->lr; // 801E5C18
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E5C1C
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E5C20
  c->r[27]=c->r[3]|c->r[3]; // 801E5C24
  c->r[30]=c->r[4]|c->r[4]; // 801E5C28
  c->r[28]=c->r[5]|c->r[5]; // 801E5C2C
  c->r[29]=c->r[6]|c->r[6]; // 801E5C30
  c->r[3]=c->r[1]+0x00000018u; // 801E5C34
  c->r[4]=0u+0x00000000u; // 801E5C38
  c->r[5]=0u+0x00000040u; // 801E5C3C
  c->lr=0x801E5C44u; f_801E4B10(c); // 801E5C40
  c->r[0]=0u+0x00000000u; // 801E5C44
  W32(c->r[28]+0x00000000u,c->r[0]); // 801E5C48
  c->r[0]=0u+0x000000D2u; // 801E5C4C
  c->r[3]=c->r[27]|c->r[27]; // 801E5C50
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801E5C54
  c->lr=0x801E5C5Cu; f_801E58DC(c); // 801E5C58
  c->r[0]=c->r[3]+0x00000041u; // 801E5C5C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E5C60
  c->r[3]=c->r[27]|c->r[27]; // 801E5C64
  W8(c->r[1]+0x00000020u,c->r[30]); // 801E5C68
  c->lr=0x801E5C70u; f_801E58DC(c); // 801E5C6C
  c->r[0]=c->r[3]+0x00000001u; // 801E5C70
  W16(c->r[1]+0x00000024u,c->r[0]); // 801E5C74
  c->r[3]=c->r[1]+0x0000000Cu; // 801E5C78
  c->r[4]=c->r[1]+0x00000008u; // 801E5C7C
  c->lr=0x801E5C84u; f_801E62FC(c); // 801E5C80
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5C84
  c->r[4]=c->r[1]+0x00000018u; // 801E5C88
  c->r[5]=0u+0x00000040u; // 801E5C8C
  c->lr=0x801E5C94u; f_801E6734(c); // 801E5C90
  cmps(c,0,(int32_t)c->r[3],0); // 801E5C94
  c->r[31]=c->r[3]|c->r[3]; // 801E5C98
  if (!crb(c,2)) { goto L_801E5CC0; } // 801E5C9C
  c->r[3]=c->r[27]|c->r[27]; // 801E5CA0
  c->lr=0x801E5CA8u; f_801E58DC(c); // 801E5CA4
  c->r[5]=c->r[3]|c->r[3]; // 801E5CA8
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5CAC
  c->r[4]=c->r[27]|c->r[27]; // 801E5CB0
  c->r[5]=c->r[5]+0x00000001u; // 801E5CB4
  c->lr=0x801E5CBCu; f_801E6734(c); // 801E5CB8
  c->r[31]=c->r[3]|c->r[3]; // 801E5CBC
L_801E5CC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E5CC0
  if (!crb(c,2)) { goto L_801E5D0C; } // 801E5CC4
  c->r[0]=0u+0x00000000u; // 801E5CC8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E5CCC
  c->r[4]=c->r[1]+0x00000010u; // 801E5CD0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5CD4
  c->lr=0x801E5CDCu; f_801E5AEC(c); // 801E5CD8
  cmps(c,0,(int32_t)c->r[3],0); // 801E5CDC
  c->r[31]=c->r[3]|c->r[3]; // 801E5CE0
  if (!crb(c,2)) { goto L_801E5CF4; } // 801E5CE4
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E5CE8
  c->lr=0x801E5CF0u; f_801E6398(c); // 801E5CEC
  c->r[30]=c->r[3]|c->r[3]; // 801E5CF0
L_801E5CF4:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801E5CF4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E5CF8
  c->r[0]=R32(c->r[30]+0x00000014u); // 801E5CFC
  W32(c->r[28]+0x00000000u,c->r[0]); // 801E5D00
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E5D04
  c->lr=0x801E5D0Cu; f_801E63BC(c); // 801E5D08
L_801E5D0C:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E5D0C
  c->lr=0x801E5D14u; f_801E63BC(c); // 801E5D10
  c->r[3]=c->r[31]|c->r[31]; // 801E5D14
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E5D18
  c->r[0]=R32(c->r[1]+0x00000074u); // 801E5D1C
  c->lr=c->r[0]; // 801E5D20
  c->r[1]=c->r[1]+0x00000070u; // 801E5D24
  return; // 801E5D28
}

// HandleCloseFileSupportRequest
void f_801E5D2C(Ctx* __restrict c) {
  trace_call(0x801E5D2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5D2C
  c->r[0]=c->lr; // 801E5D30
  c->r[5]=0u+0x00000040u; // 801E5D34
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E5D38
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801E5D3C
  W32(c->r[1]+0x00000068u,c->r[30]); // 801E5D40
  c->r[30]=c->r[3]|c->r[3]; // 801E5D44
  c->r[3]=c->r[1]+0x00000018u; // 801E5D48
  W32(c->r[1]+0x00000064u,c->r[29]); // 801E5D4C
  c->r[29]=c->r[4]|c->r[4]; // 801E5D50
  c->r[4]=0u+0x00000000u; // 801E5D54
  c->lr=0x801E5D5Cu; f_801E4B10(c); // 801E5D58
  c->r[3]=0u+0x000000D3u; // 801E5D5C
  c->r[0]=0u+0x00000040u; // 801E5D60
  W8(c->r[1]+0x0000001Cu,c->r[3]); // 801E5D64
  c->r[3]=c->r[1]+0x0000000Cu; // 801E5D68
  c->r[4]=c->r[1]+0x00000008u; // 801E5D6C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E5D70
  W32(c->r[1]+0x00000020u,c->r[30]); // 801E5D74
  c->lr=0x801E5D7Cu; f_801E62FC(c); // 801E5D78
  cmps(c,0,(int32_t)c->r[3],0); // 801E5D7C
  c->r[31]=c->r[3]|c->r[3]; // 801E5D80
  if (!crb(c,2)) { goto L_801E5D9C; } // 801E5D84
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5D88
  c->r[4]=c->r[1]+0x00000018u; // 801E5D8C
  c->r[5]=0u+0x00000040u; // 801E5D90
  c->lr=0x801E5D98u; f_801E6734(c); // 801E5D94
  c->r[31]=c->r[3]|c->r[3]; // 801E5D98
L_801E5D9C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E5D9C
  if (!crb(c,2)) { goto L_801E5DE8; } // 801E5DA0
  c->r[0]=0u+0x00000000u; // 801E5DA4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E5DA8
  c->r[4]=c->r[1]+0x00000010u; // 801E5DAC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5DB0
  c->lr=0x801E5DB8u; f_801E5AEC(c); // 801E5DB4
  cmps(c,0,(int32_t)c->r[3],0); // 801E5DB8
  c->r[31]=c->r[3]|c->r[3]; // 801E5DBC
  if (!crb(c,2)) { goto L_801E5DD0; } // 801E5DC0
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E5DC4
  c->lr=0x801E5DCCu; f_801E6398(c); // 801E5DC8
  c->r[30]=c->r[3]|c->r[3]; // 801E5DCC
L_801E5DD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E5DD0
  if (!crb(c,2)) { goto L_801E5DE0; } // 801E5DD4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801E5DD8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E5DDC
L_801E5DE0:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E5DE0
  c->lr=0x801E5DE8u; f_801E63BC(c); // 801E5DE4
L_801E5DE8:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E5DE8
  c->lr=0x801E5DF0u; f_801E63BC(c); // 801E5DEC
  c->r[3]=c->r[31]|c->r[31]; // 801E5DF0
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801E5DF4
  c->r[30]=R32(c->r[1]+0x00000068u); // 801E5DF8
  c->r[29]=R32(c->r[1]+0x00000064u); // 801E5DFC
  c->r[0]=R32(c->r[1]+0x00000074u); // 801E5E00
  c->lr=c->r[0]; // 801E5E04
  c->r[1]=c->r[1]+0x00000070u; // 801E5E08
  return; // 801E5E0C
}

// HandlePositionFileSupportRequest
void f_801E5E10(Ctx* __restrict c) {
  trace_call(0x801E5E10u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5E10
  c->r[0]=c->lr; // 801E5E14
  W32(c->r[1]+0x00000074u,c->r[0]); // 801E5E18
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801E5E1C
  c->r[31]=c->r[5]|c->r[5]; // 801E5E20
  c->r[5]=0u+0x00000040u; // 801E5E24
  W32(c->r[1]+0x00000068u,c->r[30]); // 801E5E28
  c->r[30]=c->r[6]|c->r[6]; // 801E5E2C
  W32(c->r[1]+0x00000064u,c->r[29]); // 801E5E30
  c->r[29]=c->r[4]|c->r[4]; // 801E5E34
  c->r[4]=0u+0x00000000u; // 801E5E38
  W32(c->r[1]+0x00000060u,c->r[28]); // 801E5E3C
  c->r[28]=c->r[3]|c->r[3]; // 801E5E40
  c->r[3]=c->r[1]+0x00000018u; // 801E5E44
  c->lr=0x801E5E4Cu; f_801E4B10(c); // 801E5E48
  c->r[3]=0u+0x000000D4u; // 801E5E4C
  c->r[0]=0u+0x00000040u; // 801E5E50
  W8(c->r[1]+0x0000001Cu,c->r[3]); // 801E5E54
  c->r[3]=c->r[1]+0x0000000Cu; // 801E5E58
  c->r[4]=c->r[1]+0x00000008u; // 801E5E5C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E5E60
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E5E64
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E5E68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5E6C
  W8(c->r[1]+0x00000028u,c->r[31]); // 801E5E70
  c->lr=0x801E5E78u; f_801E62FC(c); // 801E5E74
  cmps(c,0,(int32_t)c->r[3],0); // 801E5E78
  c->r[31]=c->r[3]|c->r[3]; // 801E5E7C
  if (!crb(c,2)) { goto L_801E5E98; } // 801E5E80
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5E84
  c->r[4]=c->r[1]+0x00000018u; // 801E5E88
  c->r[5]=0u+0x00000040u; // 801E5E8C
  c->lr=0x801E5E94u; f_801E6734(c); // 801E5E90
  c->r[31]=c->r[3]|c->r[3]; // 801E5E94
L_801E5E98:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E5E98
  if (!crb(c,2)) { goto L_801E5EF0; } // 801E5E9C
  c->r[0]=0u+0x00000000u; // 801E5EA0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E5EA4
  c->r[0]=0u+0xFFFFFFFFu; // 801E5EA8
  c->r[4]=c->r[1]+0x00000010u; // 801E5EAC
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E5EB0
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E5EB4
  c->lr=0x801E5EBCu; f_801E5AEC(c); // 801E5EB8
  cmps(c,0,(int32_t)c->r[3],0); // 801E5EBC
  c->r[31]=c->r[3]|c->r[3]; // 801E5EC0
  if (!crb(c,2)) { goto L_801E5EE8; } // 801E5EC4
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E5EC8
  c->lr=0x801E5ED0u; f_801E6398(c); // 801E5ECC
  cmps(c,0,(int32_t)c->r[3],0); // 801E5ED0
  if (crb(c,2)) { goto L_801E5EE8; } // 801E5ED4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801E5ED8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E5EDC
  c->r[0]=R32(c->r[3]+0x00000024u); // 801E5EE0
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E5EE4
L_801E5EE8:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801E5EE8
  c->lr=0x801E5EF0u; f_801E63BC(c); // 801E5EEC
L_801E5EF0:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801E5EF0
  c->lr=0x801E5EF8u; f_801E63BC(c); // 801E5EF4
  c->r[3]=c->r[31]|c->r[31]; // 801E5EF8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801E5EFC
  c->r[30]=R32(c->r[1]+0x00000068u); // 801E5F00
  c->r[29]=R32(c->r[1]+0x00000064u); // 801E5F04
  c->r[28]=R32(c->r[1]+0x00000060u); // 801E5F08
  c->r[0]=R32(c->r[1]+0x00000074u); // 801E5F0C
  c->lr=c->r[0]; // 801E5F10
  c->r[1]=c->r[1]+0x00000070u; // 801E5F14
  return; // 801E5F18
}

// TRKTargetContinue
void f_801E5F1C(Ctx* __restrict c) {
  trace_call(0x801E5F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5F1C
  c->r[0]=c->lr; // 801E5F20
  c->r[3]=0u+0x00000000u; // 801E5F24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5F28
  c->lr=0x801E5F30u; f_801E8F50(c); // 801E5F2C
  c->lr=0x801E5F34u; f_801E5398(c); // 801E5F30
  c->lr=0x801E5F38u; f_801E870C(c); // 801E5F34
  c->lr=0x801E5F3Cu; f_801E5384(c); // 801E5F38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5F3C
  c->r[3]=0u+0x00000000u; // 801E5F40
  c->lr=c->r[0]; // 801E5F44
  c->r[1]=c->r[1]+0x00000010u; // 801E5F48
  return; // 801E5F4C
}

// TRKSaveExtended1Block
void f_801E5F50(Ctx* __restrict c) {
  trace_call(0x801E5F50u);
  c->r[2]=0u+0x802D0000u; // 801E5F50
  c->r[2]=c->r[2]|0x0000CF20u; // 801E5F54
  /* mfsr */ // 801E5F58
  /* mfsr */ // 801E5F5C
  /* mfsr */ // 801E5F60
  /* mfsr */ // 801E5F64
  /* mfsr */ // 801E5F68
  /* mfsr */ // 801E5F6C
  /* mfsr */ // 801E5F70
  /* mfsr */ // 801E5F74
  /* mfsr */ // 801E5F78
  /* mfsr */ // 801E5F7C
  /* mfsr */ // 801E5F80
  /* mfsr */ // 801E5F84
  /* mfsr */ // 801E5F88
  /* mfsr */ // 801E5F8C
  /* mfsr */ // 801E5F90
  /* mfsr */ // 801E5F94
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E5F98
  c->r[27]=mftb(c,268); // 801E5F9C
  c->r[28]=mftb(c,269); // 801E5FA0
  c->r[29]=mfspr(c,1008); // 801E5FA4
  c->r[30]=mfspr(c,1009); // 801E5FA8
  c->r[31]=mfspr(c,27); // 801E5FAC
  {uint32_t ea=c->r[2]+0x000001E8u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E5FB0
  c->r[15]=mfspr(c,287); // 801E5FB4
  c->r[16]=mfspr(c,528); // 801E5FB8
  c->r[17]=mfspr(c,529); // 801E5FBC
  c->r[18]=mfspr(c,530); // 801E5FC0
  c->r[19]=mfspr(c,531); // 801E5FC4
  c->r[20]=mfspr(c,532); // 801E5FC8
  c->r[21]=mfspr(c,533); // 801E5FCC
  c->r[22]=mfspr(c,534); // 801E5FD0
  c->r[23]=mfspr(c,535); // 801E5FD4
  c->r[24]=mfspr(c,536); // 801E5FD8
  c->r[25]=mfspr(c,537); // 801E5FDC
  c->r[26]=mfspr(c,538); // 801E5FE0
  c->r[27]=mfspr(c,539); // 801E5FE4
  c->r[28]=mfspr(c,540); // 801E5FE8
  c->r[29]=mfspr(c,541); // 801E5FEC
  c->r[30]=mfspr(c,542); // 801E5FF0
  c->r[31]=mfspr(c,543); // 801E5FF4
  {uint32_t ea=c->r[2]+0x000001FCu; for(int i=15;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E5FF8
  c->r[24]=mfspr(c,560); // 801E5FFC
  c->r[25]=mfspr(c,561); // 801E6000
  c->r[26]=mfspr(c,562); // 801E6004
  c->r[27]=mfspr(c,563); // 801E6008
  c->r[28]=mfspr(c,564); // 801E600C
  c->r[29]=mfspr(c,565); // 801E6010
  c->r[30]=mfspr(c,566); // 801E6014
  c->r[31]=mfspr(c,567); // 801E6018
  {uint32_t ea=c->r[2]+0x00000240u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E601C
  c->r[22]=mfspr(c,25); // 801E6020
  c->r[23]=mfspr(c,19); // 801E6024
  c->r[24]=mfspr(c,18); // 801E6028
  c->r[25]=mfspr(c,272); // 801E602C
  c->r[26]=mfspr(c,273); // 801E6030
  c->r[27]=mfspr(c,274); // 801E6034
  c->r[28]=mfspr(c,275); // 801E6038
  c->r[29]=mfspr(c,22); // 801E603C
  c->r[30]=mfspr(c,1010); // 801E6040
  c->r[31]=mfspr(c,282); // 801E6044
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E6048
  c->r[24]=mfspr(c,1013); // 801E604C
  c->r[25]=mfspr(c,953); // 801E6050
  c->r[26]=mfspr(c,954); // 801E6054
  c->r[27]=mfspr(c,957); // 801E6058
  c->r[28]=mfspr(c,958); // 801E605C
  c->r[29]=mfspr(c,955); // 801E6060
  c->r[30]=mfspr(c,952); // 801E6064
  c->r[31]=mfspr(c,956); // 801E6068
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E606C
  c->r[29]=mfspr(c,567); // 801E6070
  c->r[30]=mfspr(c,568); // 801E6074
  c->r[31]=mfspr(c,569); // 801E6078
  {uint32_t ea=c->r[2]+0x000002A4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E607C
  c->r[30]=mfspr(c,1019); // 801E6080
  c->r[31]=mfspr(c,1017); // 801E6084
  {uint32_t ea=c->r[2]+0x000002B0u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E6088
  c->r[16]=mfspr(c,26); // 801E608C
  W32(c->r[2]+0x000002B8u,c->r[16]); // 801E6090
  c->r[17]=mfspr(c,570); // 801E6094
  W32(c->r[2]+0x000002BCu,c->r[17]); // 801E6098
  c->r[25]=mfspr(c,936); // 801E609C
  c->r[26]=mfspr(c,937); // 801E60A0
  c->r[27]=mfspr(c,938); // 801E60A4
  c->r[28]=mfspr(c,939); // 801E60A8
  c->r[29]=mfspr(c,940); // 801E60AC
  c->r[30]=mfspr(c,941); // 801E60B0
  c->r[31]=mfspr(c,942); // 801E60B4
  {uint32_t ea=c->r[2]+0x000002C0u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E60B8
  c->r[25]=mfspr(c,571); // 801E60BC
  c->r[26]=mfspr(c,572); // 801E60C0
  c->r[27]=mfspr(c,573); // 801E60C4
  c->r[28]=mfspr(c,574); // 801E60C8
  c->r[29]=mfspr(c,575); // 801E60CC
  c->r[30]=mfspr(c,920); // 801E60D0
  c->r[31]=mfspr(c,1011); // 801E60D4
  {uint32_t ea=c->r[2]+0x000002DCu; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E60D8
  c->r[20]=mfspr(c,912); // 801E60DC
  c->r[21]=mfspr(c,913); // 801E60E0
  c->r[22]=mfspr(c,914); // 801E60E4
  c->r[23]=mfspr(c,915); // 801E60E8
  c->r[24]=mfspr(c,916); // 801E60EC
  c->r[25]=mfspr(c,917); // 801E60F0
  c->r[26]=mfspr(c,918); // 801E60F4
  c->r[27]=mfspr(c,919); // 801E60F8
  c->r[28]=mfspr(c,920); // 801E60FC
  c->r[29]=mfspr(c,921); // 801E6100
  c->r[30]=mfspr(c,922); // 801E6104
  c->r[31]=mfspr(c,923); // 801E6108
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E610C
  return; // 801E6110
}

// TRKRestoreExtended1Block
void f_801E6114(Ctx* __restrict c) {
  trace_call(0x801E6114u);
  c->r[2]=0u+0x802D0000u; // 801E6114
  c->r[2]=c->r[2]|0x0000CF20u; // 801E6118
  c->r[5]=0u+0x802D0000u; // 801E611C
  c->r[5]=c->r[5]|0x0000CDA8u; // 801E6120
  c->r[3]=R8(c->r[5]+0x00000000u); // 801E6124
  c->r[6]=R8(c->r[5]+0x00000001u); // 801E6128
  c->r[0]=0u+0x00000000u; // 801E612C
  W8(c->r[5]+0x00000000u,c->r[0]); // 801E6130
  W8(c->r[5]+0x00000001u,c->r[0]); // 801E6134
  cmps(c,0,(int32_t)c->r[3],0); // 801E6138
  if (crb(c,2)) { goto L_801E6150; } // 801E613C
  c->r[24]=R32(c->r[2]+0x000001E8u); // 801E6140
  c->r[25]=R32(c->r[2]+0x000001ECu); // 801E6144
  mtspr(c,284,c->r[24]); // 801E6148
  mtspr(c,285,c->r[25]); // 801E614C
L_801E6150:;
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E6150
  mtspr(c,912,c->r[20]); // 801E6154
  mtspr(c,913,c->r[21]); // 801E6158
  mtspr(c,914,c->r[22]); // 801E615C
  mtspr(c,915,c->r[23]); // 801E6160
  mtspr(c,916,c->r[24]); // 801E6164
  mtspr(c,917,c->r[25]); // 801E6168
  mtspr(c,918,c->r[26]); // 801E616C
  mtspr(c,919,c->r[27]); // 801E6170
  mtspr(c,920,c->r[28]); // 801E6174
  mtspr(c,922,c->r[30]); // 801E6178
  mtspr(c,923,c->r[31]); // 801E617C
  goto L_801E6184; // 801E6180
L_801E6184:;
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E6184
  mtspr(c,1013,c->r[19]); // 801E6188
  mtspr(c,953,c->r[20]); // 801E618C
  mtspr(c,954,c->r[21]); // 801E6190
  mtspr(c,957,c->r[22]); // 801E6194
  mtspr(c,958,c->r[23]); // 801E6198
  mtspr(c,955,c->r[24]); // 801E619C
  mtspr(c,952,c->r[25]); // 801E61A0
  mtspr(c,956,c->r[26]); // 801E61A4
  mtspr(c,1019,c->r[30]); // 801E61A8
  mtspr(c,1017,c->r[31]); // 801E61AC
  goto L_801E61B4; // 801E61B0
L_801E61B4:;
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E61B4
  /* mtsr */ // 801E61B8
  /* mtsr */ // 801E61BC
  /* mtsr */ // 801E61C0
  /* mtsr */ // 801E61C4
  /* mtsr */ // 801E61C8
  /* mtsr */ // 801E61CC
  /* mtsr */ // 801E61D0
  /* mtsr */ // 801E61D4
  /* mtsr */ // 801E61D8
  /* mtsr */ // 801E61DC
  /* mtsr */ // 801E61E0
  /* mtsr */ // 801E61E4
  /* mtsr */ // 801E61E8
  /* mtsr */ // 801E61EC
  /* mtsr */ // 801E61F0
  /* mtsr */ // 801E61F4
  {uint32_t ea=c->r[2]+0x000001F0u; for(int i=12;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E61F8
  mtspr(c,1008,c->r[12]); // 801E61FC
  mtspr(c,1009,c->r[13]); // 801E6200
  mtspr(c,27,c->r[14]); // 801E6204
  mtspr(c,287,c->r[15]); // 801E6208
  mtspr(c,528,c->r[16]); // 801E620C
  mtspr(c,529,c->r[17]); // 801E6210
  mtspr(c,530,c->r[18]); // 801E6214
  mtspr(c,531,c->r[19]); // 801E6218
  mtspr(c,532,c->r[20]); // 801E621C
  mtspr(c,533,c->r[21]); // 801E6220
  mtspr(c,534,c->r[22]); // 801E6224
  mtspr(c,535,c->r[23]); // 801E6228
  mtspr(c,536,c->r[24]); // 801E622C
  mtspr(c,537,c->r[25]); // 801E6230
  mtspr(c,538,c->r[26]); // 801E6234
  mtspr(c,539,c->r[27]); // 801E6238
  mtspr(c,540,c->r[28]); // 801E623C
  mtspr(c,541,c->r[29]); // 801E6240
  mtspr(c,542,c->r[30]); // 801E6244
  mtspr(c,543,c->r[31]); // 801E6248
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E624C
  mtspr(c,25,c->r[22]); // 801E6250
  mtspr(c,19,c->r[23]); // 801E6254
  mtspr(c,18,c->r[24]); // 801E6258
  mtspr(c,272,c->r[25]); // 801E625C
  mtspr(c,273,c->r[26]); // 801E6260
  mtspr(c,274,c->r[27]); // 801E6264
  mtspr(c,275,c->r[28]); // 801E6268
  mtspr(c,1010,c->r[30]); // 801E626C
  mtspr(c,282,c->r[31]); // 801E6270
  return; // 801E6274
}

// TRK_MessageSend
void f_801E6278(Ctx* __restrict c) {
  trace_call(0x801E6278u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6278
  c->r[0]=c->lr; // 801E627C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6280
  c->r[0]=R16(c->r[13]+0xFFFFB808u); // 801E6284
  cmps(c,0,(int32_t)c->r[0],0); // 801E6288
  if (!crb(c,2)) { goto L_801E6294; } // 801E628C
  c->r[0]=0u+0x00000001u; // 801E6290
L_801E6294:;
  W16(c->r[3]+0x00000012u,c->r[0]); // 801E6294
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801E6298
  c->r[0]=c->r[4]+0x00000001u; // 801E629C
  W16(c->r[13]+0xFFFFB808u,c->r[0]); // 801E62A0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801E62A4
  c->r[3]=c->r[3]+0x0000000Cu; // 801E62A8
  c->lr=0x801E62B0u; f_801E5348(c); // 801E62AC
  cmps(c,0,(int32_t)c->r[3],0); // 801E62B0
  c->r[4]=c->r[3]|c->r[3]; // 801E62B4
  if (crb(c,2)) { goto L_801E62C8; } // 801E62B8
  c->r[3]=0u+0x80250000u; // 801E62BC
  c->r[3]=c->r[3]+0xFFFFA568u; // 801E62C0
  c->lr=0x801E62C8u; f_80157240(c); // 801E62C4
L_801E62C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E62C8
  c->r[3]=0u+0x00000000u; // 801E62CC
  c->lr=c->r[0]; // 801E62D0
  c->r[1]=c->r[1]+0x00000010u; // 801E62D4
  return; // 801E62D8
}

// TRKInitializeMessageBuffers
void f_801E62DC(Ctx* __restrict c) {
  trace_call(0x801E62DCu);
  c->r[3]=0u+0x802E0000u; // 801E62DC
  c->r[0]=0u+0x00000000u; // 801E62E0
  c->r[4]=c->r[3]+0xFFFFB400u; // 801E62E4
  W32(c->r[3]+0xFFFFB400u,c->r[0]); // 801E62E8
  c->r[3]=0u+0x00000000u; // 801E62EC
  W32(c->r[4]+0x0000088Cu,c->r[0]); // 801E62F0
  W32(c->r[4]+0x00001118u,c->r[0]); // 801E62F4
  return; // 801E62F8
}

// TRK_GetFreeBuffer
void f_801E62FC(Ctx* __restrict c) {
  trace_call(0x801E62FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E62FC
  c->r[0]=c->lr; // 801E6300
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6304
  c->r[0]=0u+0x00000000u; // 801E6308
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E630C
  c->r[26]=c->r[3]|c->r[3]; // 801E6310
  c->r[27]=c->r[4]|c->r[4]; // 801E6314
  c->r[30]=0u+0x00000300u; // 801E6318
  c->r[29]=0u+0x00000000u; // 801E631C
  c->r[31]=0u+0x00000001u; // 801E6320
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E6324
  goto L_801E6364; // 801E6328
L_801E632C:;
  c->r[3]=c->r[29]|c->r[29]; // 801E632C
  c->lr=0x801E6334u; f_801E6398(c); // 801E6330
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E6334
  c->r[28]=c->r[3]|c->r[3]; // 801E6338
  cmps(c,0,(int32_t)c->r[0],0); // 801E633C
  if (!crb(c,2)) { goto L_801E6360; } // 801E6340
  c->r[4]=0u+0x00000001u; // 801E6344
  c->lr=0x801E634Cu; f_801E63E4(c); // 801E6348
  W32(c->r[28]+0x00000000u,c->r[31]); // 801E634C
  c->r[30]=0u+0x00000000u; // 801E6350
  W32(c->r[27]+0x00000000u,c->r[28]); // 801E6354
  W32(c->r[26]+0x00000000u,c->r[29]); // 801E6358
  c->r[29]=0u+0x00000003u; // 801E635C
L_801E6360:;
  c->r[29]=c->r[29]+0x00000001u; // 801E6360
L_801E6364:;
  cmps(c,0,(int32_t)c->r[29],3); // 801E6364
  if (crb(c,0)) { IRQCHK(c); goto L_801E632C; } // 801E6368
  cmps(c,0,(int32_t)c->r[30],768); // 801E636C
  if (!crb(c,2)) { goto L_801E6380; } // 801E6370
  c->r[3]=0u+0x80250000u; // 801E6374
  c->r[3]=c->r[3]+0xFFFFA590u; // 801E6378
  c->lr=0x801E6380u; f_80157240(c); // 801E637C
L_801E6380:;
  c->r[3]=c->r[30]|c->r[30]; // 801E6380
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E6384
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6388
  c->lr=c->r[0]; // 801E638C
  c->r[1]=c->r[1]+0x00000020u; // 801E6390
  return; // 801E6394
}

// TRKGetBuffer
void f_801E6398(Ctx* __restrict c) {
  trace_call(0x801E6398u);
  cmpu(c,0,c->r[3],0x00000002u); // 801E6398
  c->r[0]=0u+0x00000000u; // 801E639C
  if (crb(c,1)) { goto L_801E63B4; } // 801E63A0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2188); // 801E63A4
  c->r[3]=0u+0x802E0000u; // 801E63A8
  c->r[3]=c->r[3]+0xFFFFB400u; // 801E63AC
  c->r[0]=c->r[3]+c->r[0]; // 801E63B0
L_801E63B4:;
  c->r[3]=c->r[0]|c->r[0]; // 801E63B4
  return; // 801E63B8
}

// TRK_ReleaseBuffer
void f_801E63BC(Ctx* __restrict c) {
  trace_call(0x801E63BCu);
  cmps(c,0,(int32_t)c->r[3],-1); // 801E63BC
  if (crb(c,2)) return; // 801E63C0
  cmpu(c,0,c->r[3],0x00000002u); // 801E63C4
  if (crb(c,1)) return; // 801E63C8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2188); // 801E63CC
  c->r[3]=0u+0x802E0000u; // 801E63D0
  c->r[4]=0u+0x00000000u; // 801E63D4
  c->r[3]=c->r[3]+0xFFFFB400u; // 801E63D8
  W32(c->r[3]+c->r[0],c->r[4]); // 801E63DC
  return; // 801E63E0
}

// TRKResetBuffer
void f_801E63E4(Ctx* __restrict c) {
  trace_call(0x801E63E4u);
  cmps(c,0,(int32_t)c->r[4],0); // 801E63E4
  c->r[0]=0u+0x00000000u; // 801E63E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E63EC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E63F0
  if (!crb(c,2)) return; // 801E63F4
  c->r[4]=0u+0x00000000u; // 801E63F8
  c->r[5]=0u+0x00000880u; // 801E63FC
  c->r[3]=c->r[3]+0x0000000Cu; // 801E6400
  f_801E4B10(c); return; // 801E6404
  return; // 801E6408
}

// TRK_SetBufferPosition
void f_801E640C(Ctx* __restrict c) {
  trace_call(0x801E640Cu);
  cmpu(c,0,c->r[4],0x00000880u); // 801E640C
  c->r[5]=0u+0x00000000u; // 801E6410
  if (!crb(c,1)) { goto L_801E6420; } // 801E6414
  c->r[5]=0u+0x00000301u; // 801E6418
  goto L_801E6434; // 801E641C
L_801E6420:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6420
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E6424
  cmpu(c,0,c->r[4],c->r[0]); // 801E6428
  if (!crb(c,1)) { goto L_801E6434; } // 801E642C
  W32(c->r[3]+0x00000004u,c->r[4]); // 801E6430
L_801E6434:;
  c->r[3]=c->r[5]|c->r[5]; // 801E6434
  return; // 801E6438
}

// TRK_AppendBuffer
void f_801E643C(Ctx* __restrict c) {
  trace_call(0x801E643Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E643C
  c->r[0]=c->lr; // 801E6440
  cmps(c,0,(int32_t)c->r[5],0); // 801E6444
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6448
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E644C
  c->r[31]=0u+0x00000000u; // 801E6450
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E6454
  c->r[30]=c->r[5]|c->r[5]; // 801E6458
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E645C
  c->r[29]=c->r[3]|c->r[3]; // 801E6460
  if (!crb(c,2)) { goto L_801E6470; } // 801E6464
  c->r[3]=0u+0x00000000u; // 801E6468
  goto L_801E64C4; // 801E646C
L_801E6470:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E6470
  c->r[6]=addc(c,~c->r[0],0x00000880u,1); // 801E6474
  cmpu(c,0,c->r[6],c->r[5]); // 801E6478
  if (!crb(c,0)) { goto L_801E6488; } // 801E647C
  c->r[31]=0u+0x00000301u; // 801E6480
  c->r[30]=c->r[6]|c->r[6]; // 801E6484
L_801E6488:;
  cmpu(c,0,c->r[30],0x00000001u); // 801E6488
  if (!crb(c,2)) { goto L_801E64A0; } // 801E648C
  c->r[3]=c->r[3]+c->r[0]; // 801E6490
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E6494
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801E6498
  goto L_801E64B0; // 801E649C
L_801E64A0:;
  c->r[3]=c->r[3]+c->r[0]; // 801E64A0
  c->r[5]=c->r[30]|c->r[30]; // 801E64A4
  c->r[3]=c->r[3]+0x0000000Cu; // 801E64A8
  c->lr=0x801E64B0u; f_801E49D4(c); // 801E64AC
L_801E64B0:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E64B0
  c->r[3]=c->r[31]|c->r[31]; // 801E64B4
  c->r[0]=c->r[0]+c->r[30]; // 801E64B8
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E64BC
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E64C0
L_801E64C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E64C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E64C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E64CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E64D0
  c->lr=c->r[0]; // 801E64D4
  c->r[1]=c->r[1]+0x00000020u; // 801E64D8
  return; // 801E64DC
}

// TRK_ReadBuffer
void f_801E64E0(Ctx* __restrict c) {
  trace_call(0x801E64E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E64E0
  c->r[0]=c->lr; // 801E64E4
  cmps(c,0,(int32_t)c->r[5],0); // 801E64E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E64EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E64F0
  c->r[31]=0u+0x00000000u; // 801E64F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E64F8
  c->r[30]=c->r[5]|c->r[5]; // 801E64FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E6500
  c->r[29]=c->r[3]|c->r[3]; // 801E6504
  if (!crb(c,2)) { goto L_801E6514; } // 801E6508
  c->r[3]=0u+0x00000000u; // 801E650C
  goto L_801E6554; // 801E6510
L_801E6514:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 801E6514
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E6518
  c->r[0]=c->r[0]-c->r[6]; // 801E651C
  cmpu(c,0,c->r[5],c->r[0]); // 801E6520
  if (!crb(c,1)) { goto L_801E6530; } // 801E6524
  c->r[31]=0u+0x00000302u; // 801E6528
  c->r[30]=c->r[0]|c->r[0]; // 801E652C
L_801E6530:;
  c->r[6]=c->r[29]+c->r[6]; // 801E6530
  c->r[3]=c->r[4]|c->r[4]; // 801E6534
  c->r[5]=c->r[30]|c->r[30]; // 801E6538
  c->r[4]=c->r[6]+0x0000000Cu; // 801E653C
  c->lr=0x801E6544u; f_801E49D4(c); // 801E6540
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E6544
  c->r[3]=c->r[31]|c->r[31]; // 801E6548
  c->r[0]=c->r[0]+c->r[30]; // 801E654C
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E6550
L_801E6554:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6554
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6558
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E655C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E6560
  c->lr=c->r[0]; // 801E6564
  c->r[1]=c->r[1]+0x00000020u; // 801E6568
  return; // 801E656C
}

// TRKAppendBuffer1_ui32
void f_801E6570(Ctx* __restrict c) {
  trace_call(0x801E6570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6570
  c->r[0]=c->lr; // 801E6574
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6578
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E657C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E6580
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E6584
  c->r[29]=c->r[3]|c->r[3]; // 801E6588
  c->r[0]=R32(c->r[13]+0xFFFFB7F8u); // 801E658C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E6590
  cmps(c,0,(int32_t)c->r[0],0); // 801E6594
  if (crb(c,2)) { goto L_801E65A4; } // 801E6598
  c->r[4]=c->r[1]+0x00000008u; // 801E659C
  goto L_801E65C8; // 801E65A0
L_801E65A4:;
  c->r[7]=R8(c->r[1]+0x0000000Bu); // 801E65A4
  c->r[4]=c->r[1]+0x0000000Cu; // 801E65A8
  c->r[6]=R8(c->r[1]+0x0000000Au); // 801E65AC
  c->r[5]=R8(c->r[1]+0x00000009u); // 801E65B0
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E65B4
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 801E65B8
  W8(c->r[1]+0x0000000Du,c->r[6]); // 801E65BC
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 801E65C0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801E65C4
L_801E65C8:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 801E65C8
  c->r[31]=0u+0x00000004u; // 801E65CC
  c->r[30]=0u+0x00000000u; // 801E65D0
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 801E65D4
  cmpu(c,0,c->r[0],0x00000004u); // 801E65D8
  if (!crb(c,0)) { goto L_801E65E8; } // 801E65DC
  c->r[30]=0u+0x00000301u; // 801E65E0
  c->r[31]=c->r[0]|c->r[0]; // 801E65E4
L_801E65E8:;
  cmpu(c,0,c->r[31],0x00000001u); // 801E65E8
  if (!crb(c,2)) { goto L_801E6600; } // 801E65EC
  c->r[3]=c->r[3]+c->r[5]; // 801E65F0
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E65F4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801E65F8
  goto L_801E6610; // 801E65FC
L_801E6600:;
  c->r[3]=c->r[3]+c->r[5]; // 801E6600
  c->r[5]=c->r[31]|c->r[31]; // 801E6604
  c->r[3]=c->r[3]+0x0000000Cu; // 801E6608
  c->lr=0x801E6610u; f_801E49D4(c); // 801E660C
L_801E6610:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E6610
  c->r[3]=c->r[30]|c->r[30]; // 801E6614
  c->r[0]=c->r[0]+c->r[31]; // 801E6618
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E661C
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E6620
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6624
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6628
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E662C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6630
  c->lr=c->r[0]; // 801E6634
  c->r[1]=c->r[1]+0x00000020u; // 801E6638
  return; // 801E663C
}

// TRKAppendBuffer1_ui64
void f_801E6640(Ctx* __restrict c) {
  trace_call(0x801E6640u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6640
  c->r[0]=c->lr; // 801E6644
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E6648
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E664C
  c->r[31]=c->r[3]|c->r[3]; // 801E6650
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E6654
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E6658
  c->r[0]=R32(c->r[13]+0xFFFFB7F8u); // 801E665C
  W32(c->r[1]+0x00000008u,c->r[5]); // 801E6660
  cmps(c,0,(int32_t)c->r[0],0); // 801E6664
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801E6668
  if (crb(c,2)) { goto L_801E6678; } // 801E666C
  c->r[4]=c->r[1]+0x00000008u; // 801E6670
  goto L_801E66BC; // 801E6674
L_801E6678:;
  c->r[11]=R8(c->r[1]+0x0000000Fu); // 801E6678
  c->r[4]=c->r[1]+0x00000010u; // 801E667C
  c->r[10]=R8(c->r[1]+0x0000000Eu); // 801E6680
  c->r[9]=R8(c->r[1]+0x0000000Du); // 801E6684
  c->r[8]=R8(c->r[1]+0x0000000Cu); // 801E6688
  c->r[7]=R8(c->r[1]+0x0000000Bu); // 801E668C
  c->r[6]=R8(c->r[1]+0x0000000Au); // 801E6690
  c->r[5]=R8(c->r[1]+0x00000009u); // 801E6694
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E6698
  W8(c->r[1]+0x00000010u,c->r[11]); // 801E669C
  W8(c->r[1]+0x00000011u,c->r[10]); // 801E66A0
  W8(c->r[1]+0x00000012u,c->r[9]); // 801E66A4
  W8(c->r[1]+0x00000013u,c->r[8]); // 801E66A8
  W8(c->r[1]+0x00000014u,c->r[7]); // 801E66AC
  W8(c->r[1]+0x00000015u,c->r[6]); // 801E66B0
  W8(c->r[1]+0x00000016u,c->r[5]); // 801E66B4
  W8(c->r[1]+0x00000017u,c->r[0]); // 801E66B8
L_801E66BC:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 801E66BC
  c->r[30]=0u+0x00000008u; // 801E66C0
  c->r[29]=0u+0x00000000u; // 801E66C4
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 801E66C8
  cmpu(c,0,c->r[0],0x00000008u); // 801E66CC
  if (!crb(c,0)) { goto L_801E66DC; } // 801E66D0
  c->r[29]=0u+0x00000301u; // 801E66D4
  c->r[30]=c->r[0]|c->r[0]; // 801E66D8
L_801E66DC:;
  cmpu(c,0,c->r[30],0x00000001u); // 801E66DC
  if (!crb(c,2)) { goto L_801E66F4; } // 801E66E0
  c->r[3]=c->r[3]+c->r[5]; // 801E66E4
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E66E8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801E66EC
  goto L_801E6704; // 801E66F0
L_801E66F4:;
  c->r[3]=c->r[3]+c->r[5]; // 801E66F4
  c->r[5]=c->r[30]|c->r[30]; // 801E66F8
  c->r[3]=c->r[3]+0x0000000Cu; // 801E66FC
  c->lr=0x801E6704u; f_801E49D4(c); // 801E6700
L_801E6704:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 801E6704
  c->r[3]=c->r[29]|c->r[29]; // 801E6708
  c->r[0]=c->r[0]+c->r[30]; // 801E670C
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E6710
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E6714
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E6718
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E671C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E6720
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E6724
  c->lr=c->r[0]; // 801E6728
  c->r[1]=c->r[1]+0x00000030u; // 801E672C
  return; // 801E6730
}

// TRKAppendBuffer_ui8
void f_801E6734(Ctx* __restrict c) {
  trace_call(0x801E6734u);
  c->r[9]=0u+0x00000000u; // 801E6734
  c->r[7]=0u+0x00000000u; // 801E6738
  goto L_801E6780; // 801E673C
L_801E6740:;
  c->r[7]=R32(c->r[3]+0x00000008u); // 801E6740
  c->r[8]=R8(c->r[4]+0x00000000u); // 801E6744
  cmpu(c,0,c->r[7],0x00000880u); // 801E6748
  if (crb(c,0)) { goto L_801E6758; } // 801E674C
  c->r[7]=0u+0x00000301u; // 801E6750
  goto L_801E6778; // 801E6754
L_801E6758:;
  c->r[6]=c->r[3]+c->r[7]; // 801E6758
  c->r[0]=c->r[7]+0x00000001u; // 801E675C
  W8(c->r[6]+0x0000000Cu,c->r[8]); // 801E6760
  c->r[7]=0u+0x00000000u; // 801E6764
  c->r[6]=R32(c->r[3]+0x00000004u); // 801E6768
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E676C
  c->r[0]=c->r[6]+0x00000001u; // 801E6770
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E6774
L_801E6778:;
  c->r[9]=c->r[9]+0x00000001u; // 801E6778
  c->r[4]=c->r[4]+0x00000001u; // 801E677C
L_801E6780:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E6780
  if (!crb(c,2)) { goto L_801E6790; } // 801E6784
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[5]); // 801E6788
  if (crb(c,0)) { IRQCHK(c); goto L_801E6740; } // 801E678C
L_801E6790:;
  c->r[3]=c->r[7]|c->r[7]; // 801E6790
  return; // 801E6794
}

// TRKAppendBuffer_ui32
void f_801E6798(Ctx* __restrict c) {
  trace_call(0x801E6798u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6798
  c->r[0]=c->lr; // 801E679C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E67A0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E67A4
  c->r[29]=c->r[3]|c->r[3]; // 801E67A8
  c->r[27]=c->r[4]|c->r[4]; // 801E67AC
  c->r[30]=c->r[5]|c->r[5]; // 801E67B0
  c->r[31]=0u+0x00000000u; // 801E67B4
  c->r[26]=0u+0x00000000u; // 801E67B8
  goto L_801E6860; // 801E67BC
L_801E67C0:;
  c->r[0]=R32(c->r[13]+0xFFFFB7F8u); // 801E67C0
  c->r[3]=R32(c->r[27]+0x00000000u); // 801E67C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E67C8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801E67CC
  if (crb(c,2)) { goto L_801E67DC; } // 801E67D0
  c->r[4]=c->r[1]+0x0000000Cu; // 801E67D4
  goto L_801E6800; // 801E67D8
L_801E67DC:;
  c->r[6]=R8(c->r[1]+0x0000000Fu); // 801E67DC
  c->r[4]=c->r[1]+0x00000008u; // 801E67E0
  c->r[5]=R8(c->r[1]+0x0000000Eu); // 801E67E4
  c->r[3]=R8(c->r[1]+0x0000000Du); // 801E67E8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801E67EC
  W8(c->r[1]+0x00000008u,c->r[6]); // 801E67F0
  W8(c->r[1]+0x00000009u,c->r[5]); // 801E67F4
  W8(c->r[1]+0x0000000Au,c->r[3]); // 801E67F8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801E67FC
L_801E6800:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 801E6800
  c->r[28]=0u+0x00000004u; // 801E6804
  c->r[26]=0u+0x00000000u; // 801E6808
  c->r[0]=addc(c,~c->r[3],0x00000880u,1); // 801E680C
  cmpu(c,0,c->r[0],0x00000004u); // 801E6810
  if (!crb(c,0)) { goto L_801E6820; } // 801E6814
  c->r[26]=0u+0x00000301u; // 801E6818
  c->r[28]=c->r[0]|c->r[0]; // 801E681C
L_801E6820:;
  cmpu(c,0,c->r[28],0x00000001u); // 801E6820
  if (!crb(c,2)) { goto L_801E6838; } // 801E6824
  c->r[3]=c->r[29]+c->r[3]; // 801E6828
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E682C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801E6830
  goto L_801E6848; // 801E6834
L_801E6838:;
  c->r[3]=c->r[29]+c->r[3]; // 801E6838
  c->r[5]=c->r[28]|c->r[28]; // 801E683C
  c->r[3]=c->r[3]+0x0000000Cu; // 801E6840
  c->lr=0x801E6848u; f_801E49D4(c); // 801E6844
L_801E6848:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801E6848
  c->r[27]=c->r[27]+0x00000004u; // 801E684C
  c->r[31]=c->r[31]+0x00000001u; // 801E6850
  c->r[0]=c->r[0]+c->r[28]; // 801E6854
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E6858
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E685C
L_801E6860:;
  cmps(c,0,(int32_t)c->r[26],0); // 801E6860
  if (!crb(c,2)) { goto L_801E6870; } // 801E6864
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 801E6868
  if (crb(c,0)) { IRQCHK(c); goto L_801E67C0; } // 801E686C
L_801E6870:;
  c->r[3]=c->r[26]|c->r[26]; // 801E6870
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E6874
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E6878
  c->lr=c->r[0]; // 801E687C
  c->r[1]=c->r[1]+0x00000030u; // 801E6880
  return; // 801E6884
}

// TRKReadBuffer1_ui64
void f_801E6888(Ctx* __restrict c) {
  trace_call(0x801E6888u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6888
  c->r[0]=c->lr; // 801E688C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E6890
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E6894
  c->r[27]=c->r[3]|c->r[3]; // 801E6898
  c->r[29]=c->r[4]|c->r[4]; // 801E689C
  c->r[0]=R32(c->r[13]+0xFFFFB7F8u); // 801E68A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E68A4
  if (crb(c,2)) { goto L_801E68B4; } // 801E68A8
  c->r[30]=c->r[29]|c->r[29]; // 801E68AC
  goto L_801E68B8; // 801E68B0
L_801E68B4:;
  c->r[30]=c->r[1]+0x00000008u; // 801E68B4
L_801E68B8:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 801E68B8
  c->r[28]=0u+0x00000008u; // 801E68BC
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E68C0
  c->r[31]=0u+0x00000000u; // 801E68C4
  c->r[0]=c->r[0]-c->r[4]; // 801E68C8
  cmpu(c,0,c->r[0],0x00000008u); // 801E68CC
  if (!crb(c,0)) { goto L_801E68DC; } // 801E68D0
  c->r[31]=0u+0x00000302u; // 801E68D4
  c->r[28]=c->r[0]|c->r[0]; // 801E68D8
L_801E68DC:;
  c->r[4]=c->r[27]+c->r[4]; // 801E68DC
  c->r[3]=c->r[30]|c->r[30]; // 801E68E0
  c->r[5]=c->r[28]|c->r[28]; // 801E68E4
  c->r[4]=c->r[4]+0x0000000Cu; // 801E68E8
  c->lr=0x801E68F0u; f_801E49D4(c); // 801E68EC
  c->r[0]=R32(c->r[27]+0x00000008u); // 801E68F0
  c->r[0]=c->r[0]+c->r[28]; // 801E68F4
  W32(c->r[27]+0x00000008u,c->r[0]); // 801E68F8
  c->r[0]=R32(c->r[13]+0xFFFFB7F8u); // 801E68FC
  cmps(c,0,(int32_t)c->r[0],0); // 801E6900
  if (!crb(c,2)) { goto L_801E6950; } // 801E6904
  cmps(c,0,(int32_t)c->r[31],0); // 801E6908
  if (!crb(c,2)) { goto L_801E6950; } // 801E690C
  c->r[0]=R8(c->r[30]+0x00000007u); // 801E6910
  W8(c->r[29]+0x00000000u,c->r[0]); // 801E6914
  c->r[0]=R8(c->r[30]+0x00000006u); // 801E6918
  W8(c->r[29]+0x00000001u,c->r[0]); // 801E691C
  c->r[0]=R8(c->r[30]+0x00000005u); // 801E6920
  W8(c->r[29]+0x00000002u,c->r[0]); // 801E6924
  c->r[0]=R8(c->r[30]+0x00000004u); // 801E6928
  W8(c->r[29]+0x00000003u,c->r[0]); // 801E692C
  c->r[0]=R8(c->r[30]+0x00000003u); // 801E6930
  W8(c->r[29]+0x00000004u,c->r[0]); // 801E6934
  c->r[0]=R8(c->r[30]+0x00000002u); // 801E6938
  W8(c->r[29]+0x00000005u,c->r[0]); // 801E693C
  c->r[0]=R8(c->r[30]+0x00000001u); // 801E6940
  W8(c->r[29]+0x00000006u,c->r[0]); // 801E6944
  c->r[0]=R8(c->r[30]+0x00000000u); // 801E6948
  W8(c->r[29]+0x00000007u,c->r[0]); // 801E694C
L_801E6950:;
  c->r[3]=c->r[31]|c->r[31]; // 801E6950
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E6954
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E6958
  c->lr=c->r[0]; // 801E695C
  c->r[1]=c->r[1]+0x00000030u; // 801E6960
  return; // 801E6964
}

// TRKReadBuffer_ui8
void f_801E6968(Ctx* __restrict c) {
  trace_call(0x801E6968u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6968
  c->r[0]=c->lr; // 801E696C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6970
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E6974
  c->r[26]=c->r[3]|c->r[3]; // 801E6978
  c->r[27]=c->r[4]|c->r[4]; // 801E697C
  c->r[28]=c->r[5]|c->r[5]; // 801E6980
  c->r[29]=0u+0x00000000u; // 801E6984
  c->r[30]=0u+0x00000000u; // 801E6988
  goto L_801E69D8; // 801E698C
L_801E6990:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 801E6990
  c->r[31]=0u+0x00000001u; // 801E6994
  c->r[0]=R32(c->r[26]+0x00000004u); // 801E6998
  c->r[30]=0u+0x00000000u; // 801E699C
  c->r[0]=c->r[0]-c->r[3]; // 801E69A0
  cmpu(c,0,c->r[0],0x00000001u); // 801E69A4
  if (!crb(c,0)) { goto L_801E69B4; } // 801E69A8
  c->r[30]=0u+0x00000302u; // 801E69AC
  c->r[31]=c->r[0]|c->r[0]; // 801E69B0
L_801E69B4:;
  c->r[4]=c->r[26]+c->r[3]; // 801E69B4
  c->r[5]=c->r[31]|c->r[31]; // 801E69B8
  c->r[3]=c->r[27]+c->r[29]; // 801E69BC
  c->r[4]=c->r[4]+0x0000000Cu; // 801E69C0
  c->lr=0x801E69C8u; f_801E49D4(c); // 801E69C4
  c->r[0]=R32(c->r[26]+0x00000008u); // 801E69C8
  c->r[29]=c->r[29]+0x00000001u; // 801E69CC
  c->r[0]=c->r[0]+c->r[31]; // 801E69D0
  W32(c->r[26]+0x00000008u,c->r[0]); // 801E69D4
L_801E69D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E69D8
  if (!crb(c,2)) { goto L_801E69E8; } // 801E69DC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 801E69E0
  if (crb(c,0)) { IRQCHK(c); goto L_801E6990; } // 801E69E4
L_801E69E8:;
  c->r[3]=c->r[30]|c->r[30]; // 801E69E8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E69EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E69F0
  c->lr=c->r[0]; // 801E69F4
  c->r[1]=c->r[1]+0x00000020u; // 801E69F8
  return; // 801E69FC
}

// TRKReadBuffer_ui32
void f_801E6A00(Ctx* __restrict c) {
  trace_call(0x801E6A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6A00
  c->r[0]=c->lr; // 801E6A04
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E6A08
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801E6A0C
  c->r[27]=c->r[3]|c->r[3]; // 801E6A10
  c->r[31]=c->r[4]|c->r[4]; // 801E6A14
  c->r[28]=c->r[5]|c->r[5]; // 801E6A18
  c->r[29]=0u+0x00000000u; // 801E6A1C
  c->r[30]=0u+0x00000000u; // 801E6A20
  goto L_801E6AC0; // 801E6A24
L_801E6A28:;
  c->r[0]=R32(c->r[13]+0xFFFFB7F8u); // 801E6A28
  cmps(c,0,(int32_t)c->r[0],0); // 801E6A2C
  if (crb(c,2)) { goto L_801E6A3C; } // 801E6A30
  c->r[26]=c->r[31]|c->r[31]; // 801E6A34
  goto L_801E6A40; // 801E6A38
L_801E6A3C:;
  c->r[26]=c->r[1]+0x00000008u; // 801E6A3C
L_801E6A40:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801E6A40
  c->r[25]=0u+0x00000004u; // 801E6A44
  c->r[0]=R32(c->r[27]+0x00000004u); // 801E6A48
  c->r[30]=0u+0x00000000u; // 801E6A4C
  c->r[0]=c->r[0]-c->r[3]; // 801E6A50
  cmpu(c,0,c->r[0],0x00000004u); // 801E6A54
  if (!crb(c,0)) { goto L_801E6A64; } // 801E6A58
  c->r[30]=0u+0x00000302u; // 801E6A5C
  c->r[25]=c->r[0]|c->r[0]; // 801E6A60
L_801E6A64:;
  c->r[4]=c->r[27]+c->r[3]; // 801E6A64
  c->r[3]=c->r[26]|c->r[26]; // 801E6A68
  c->r[5]=c->r[25]|c->r[25]; // 801E6A6C
  c->r[4]=c->r[4]+0x0000000Cu; // 801E6A70
  c->lr=0x801E6A78u; f_801E49D4(c); // 801E6A74
  c->r[0]=R32(c->r[27]+0x00000008u); // 801E6A78
  c->r[0]=c->r[0]+c->r[25]; // 801E6A7C
  W32(c->r[27]+0x00000008u,c->r[0]); // 801E6A80
  c->r[0]=R32(c->r[13]+0xFFFFB7F8u); // 801E6A84
  cmps(c,0,(int32_t)c->r[0],0); // 801E6A88
  if (!crb(c,2)) { goto L_801E6AB8; } // 801E6A8C
  cmps(c,0,(int32_t)c->r[30],0); // 801E6A90
  if (!crb(c,2)) { goto L_801E6AB8; } // 801E6A94
  c->r[0]=R8(c->r[26]+0x00000003u); // 801E6A98
  W8(c->r[31]+0x00000000u,c->r[0]); // 801E6A9C
  c->r[0]=R8(c->r[26]+0x00000002u); // 801E6AA0
  W8(c->r[31]+0x00000001u,c->r[0]); // 801E6AA4
  c->r[0]=R8(c->r[26]+0x00000001u); // 801E6AA8
  W8(c->r[31]+0x00000002u,c->r[0]); // 801E6AAC
  c->r[0]=R8(c->r[26]+0x00000000u); // 801E6AB0
  W8(c->r[31]+0x00000003u,c->r[0]); // 801E6AB4
L_801E6AB8:;
  c->r[31]=c->r[31]+0x00000004u; // 801E6AB8
  c->r[29]=c->r[29]+0x00000001u; // 801E6ABC
L_801E6AC0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E6AC0
  if (!crb(c,2)) { goto L_801E6AD0; } // 801E6AC4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 801E6AC8
  if (crb(c,0)) { IRQCHK(c); goto L_801E6A28; } // 801E6ACC
L_801E6AD0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E6AD0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801E6AD4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E6AD8
  c->lr=c->r[0]; // 801E6ADC
  c->r[1]=c->r[1]+0x00000030u; // 801E6AE0
  return; // 801E6AE4
}

// GetTRKConnected
void f_801E6AE8(Ctx* __restrict c) {
  trace_call(0x801E6AE8u);
  c->r[3]=R32(c->r[13]+0xFFFFB814u); // 801E6AE8
  return; // 801E6AEC
}

// TRK_DoConnect
void f_801E6AF0(Ctx* __restrict c) {
  trace_call(0x801E6AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6AF0
  c->r[0]=c->lr; // 801E6AF4
  c->r[4]=0u+0x00000000u; // 801E6AF8
  c->r[5]=0u+0x00000040u; // 801E6AFC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E6B00
  c->r[0]=0u+0x00000001u; // 801E6B04
  c->r[3]=c->r[1]+0x00000008u; // 801E6B08
  W32(c->r[13]+0xFFFFB814u,c->r[0]); // 801E6B0C
  c->lr=0x801E6B14u; f_801E4B10(c); // 801E6B10
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E6B14
  c->r[0]=0u+0x00000080u; // 801E6B18
  c->r[4]=0u+0x00000040u; // 801E6B1C
  c->r[5]=0u+0x00000000u; // 801E6B20
  c->r[6]=c->r[3]+0x00000001u; // 801E6B24
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E6B28
  c->r[0]=c->r[6]+0x00000001u; // 801E6B2C
  c->r[3]=c->r[1]+0x00000008u; // 801E6B30
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E6B34
  c->r[4]=0u+0x00000040u; // 801E6B38
  W8(c->r[1]+0x00000010u,c->r[5]); // 801E6B3C
  W32(c->r[1]+0x00000014u,c->r[6]); // 801E6B40
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E6B44
  c->lr=0x801E6B4Cu; f_801E5348(c); // 801E6B48
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E6B4C
  c->r[3]=0u+0x00000000u; // 801E6B50
  c->lr=c->r[0]; // 801E6B54
  c->r[1]=c->r[1]+0x00000050u; // 801E6B58
  return; // 801E6B5C
}

// TRKDoDisconnect
void f_801E6B60(Ctx* __restrict c) {
  trace_call(0x801E6B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6B60
  c->r[0]=c->lr; // 801E6B64
  c->r[4]=0u+0x00000000u; // 801E6B68
  c->r[5]=0u+0x00000040u; // 801E6B6C
  W32(c->r[1]+0x00000064u,c->r[0]); // 801E6B70
  c->r[3]=c->r[1]+0x00000018u; // 801E6B74
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801E6B78
  c->r[31]=0u+0x00000000u; // 801E6B7C
  W32(c->r[13]+0xFFFFB814u,c->r[31]); // 801E6B80
  c->lr=0x801E6B88u; f_801E4B10(c); // 801E6B84
  c->r[4]=R32(c->r[13]+0xFFFFB810u); // 801E6B88
  c->r[0]=0u+0x00000080u; // 801E6B8C
  c->r[3]=0u+0x00000040u; // 801E6B90
  W32(c->r[1]+0x00000018u,c->r[3]); // 801E6B94
  c->r[5]=c->r[4]+0x00000001u; // 801E6B98
  c->r[4]=0u+0x00000040u; // 801E6B9C
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801E6BA0
  c->r[0]=c->r[5]+0x00000001u; // 801E6BA4
  c->r[3]=c->r[1]+0x00000018u; // 801E6BA8
  W8(c->r[1]+0x00000020u,c->r[31]); // 801E6BAC
  W32(c->r[1]+0x00000024u,c->r[5]); // 801E6BB0
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E6BB4
  c->lr=0x801E6BBCu; f_801E5348(c); // 801E6BB8
  c->r[3]=c->r[1]+0x00000008u; // 801E6BBC
  c->r[4]=0u+0x00000001u; // 801E6BC0
  c->lr=0x801E6BC8u; f_801E5624(c); // 801E6BC4
  c->r[3]=c->r[1]+0x00000008u; // 801E6BC8
  c->lr=0x801E6BD0u; f_801E5558(c); // 801E6BCC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801E6BD0
  c->r[3]=0u+0x00000000u; // 801E6BD4
  c->r[0]=R32(c->r[1]+0x00000064u); // 801E6BD8
  c->lr=c->r[0]; // 801E6BDC
  c->r[1]=c->r[1]+0x00000060u; // 801E6BE0
  return; // 801E6BE4
}

// TRKDoReset
void f_801E6BE8(Ctx* __restrict c) {
  trace_call(0x801E6BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6BE8
  c->r[0]=c->lr; // 801E6BEC
  c->r[4]=0u+0x00000000u; // 801E6BF0
  c->r[5]=0u+0x00000040u; // 801E6BF4
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E6BF8
  c->r[3]=c->r[1]+0x00000008u; // 801E6BFC
  c->lr=0x801E6C04u; f_801E4B10(c); // 801E6C00
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E6C04
  c->r[0]=0u+0x00000080u; // 801E6C08
  c->r[4]=0u+0x00000040u; // 801E6C0C
  c->r[5]=0u+0x00000000u; // 801E6C10
  c->r[6]=c->r[3]+0x00000001u; // 801E6C14
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E6C18
  c->r[0]=c->r[6]+0x00000001u; // 801E6C1C
  c->r[3]=c->r[1]+0x00000008u; // 801E6C20
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E6C24
  c->r[4]=0u+0x00000040u; // 801E6C28
  W8(c->r[1]+0x00000010u,c->r[5]); // 801E6C2C
  W32(c->r[1]+0x00000014u,c->r[6]); // 801E6C30
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E6C34
  c->lr=0x801E6C3Cu; f_801E5348(c); // 801E6C38
  c->lr=0x801E6C40u; f_801E506C(c); // 801E6C3C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E6C40
  c->r[3]=0u+0x00000000u; // 801E6C44
  c->lr=c->r[0]; // 801E6C48
  c->r[1]=c->r[1]+0x00000050u; // 801E6C4C
  return; // 801E6C50
}

// TRKDoOverride
void f_801E6C54(Ctx* __restrict c) {
  trace_call(0x801E6C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6C54
  c->r[0]=c->lr; // 801E6C58
  c->r[4]=0u+0x00000000u; // 801E6C5C
  c->r[5]=0u+0x00000040u; // 801E6C60
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E6C64
  c->r[3]=c->r[1]+0x00000008u; // 801E6C68
  c->lr=0x801E6C70u; f_801E4B10(c); // 801E6C6C
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E6C70
  c->r[0]=0u+0x00000080u; // 801E6C74
  c->r[4]=0u+0x00000040u; // 801E6C78
  c->r[5]=0u+0x00000000u; // 801E6C7C
  c->r[6]=c->r[3]+0x00000001u; // 801E6C80
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E6C84
  c->r[0]=c->r[6]+0x00000001u; // 801E6C88
  c->r[3]=c->r[1]+0x00000008u; // 801E6C8C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E6C90
  c->r[4]=0u+0x00000040u; // 801E6C94
  W8(c->r[1]+0x00000010u,c->r[5]); // 801E6C98
  W32(c->r[1]+0x00000014u,c->r[6]); // 801E6C9C
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E6CA0
  c->lr=0x801E6CA8u; f_801E5348(c); // 801E6CA4
  c->lr=0x801E6CACu; f_801E4EF0(c); // 801E6CA8
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E6CAC
  c->r[3]=0u+0x00000000u; // 801E6CB0
  c->lr=c->r[0]; // 801E6CB4
  c->r[1]=c->r[1]+0x00000050u; // 801E6CB8
  return; // 801E6CBC
}

// TRKDoReadMemory
void f_801E6CC0(Ctx* __restrict c) {
  trace_call(0x801E6CC0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801E6CC0
  c->r[12]=c->r[1]|c->r[1]; // 801E6CC4
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 801E6CC8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6CCC
  c->r[0]=c->lr; // 801E6CD0
  W32(c->r[12]+0x00000004u,c->r[0]); // 801E6CD4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801E6CD8
  c->r[31]=0u+0x00000000u; // 801E6CDC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801E6CE0
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 801E6CE4
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 801E6CE8
  c->r[28]=c->r[3]|c->r[3]; // 801E6CEC
  c->r[30]=R8(c->r[3]+0x00000014u); // 801E6CF0
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 801E6CF4
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 801E6CF8
  c->r[3]=R16(c->r[3]+0x00000018u); // 801E6CFC
  if (crb(c,2)) { goto L_801E6D54; } // 801E6D00
  c->r[3]=c->r[1]+0x00000068u; // 801E6D04
  c->r[4]=0u+0x00000000u; // 801E6D08
  c->r[5]=0u+0x00000040u; // 801E6D0C
  c->lr=0x801E6D14u; f_801E4B10(c); // 801E6D10
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E6D14
  c->r[0]=0u+0x00000080u; // 801E6D18
  c->r[4]=0u+0x00000040u; // 801E6D1C
  c->r[5]=0u+0x00000012u; // 801E6D20
  c->r[6]=c->r[3]+0x00000001u; // 801E6D24
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 801E6D28
  c->r[0]=c->r[6]+0x00000001u; // 801E6D2C
  c->r[3]=c->r[1]+0x00000068u; // 801E6D30
  W32(c->r[1]+0x00000068u,c->r[4]); // 801E6D34
  c->r[4]=0u+0x00000040u; // 801E6D38
  W8(c->r[1]+0x00000070u,c->r[5]); // 801E6D3C
  W32(c->r[1]+0x00000074u,c->r[6]); // 801E6D40
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E6D44
  c->lr=0x801E6D4Cu; f_801E5348(c); // 801E6D48
  c->r[3]=0u+0x00000000u; // 801E6D4C
  goto L_801E6ED0; // 801E6D50
L_801E6D54:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E6D54
  if (!crb(c,2)) { goto L_801E6E24; } // 801E6D58
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 801E6D5C
  W32(c->r[1]+0x00000020u,c->r[3]); // 801E6D60
  if (crb(c,2)) { goto L_801E6D70; } // 801E6D64
  c->r[6]=0u+0x00000000u; // 801E6D68
  goto L_801E6D74; // 801E6D6C
L_801E6D70:;
  c->r[6]=0u+0x00000001u; // 801E6D70
L_801E6D74:;
  c->r[4]=c->r[29]|c->r[29]; // 801E6D74
  c->r[3]=c->r[1]+0x00000100u; // 801E6D78
  c->r[5]=c->r[1]+0x00000020u; // 801E6D7C
  c->r[7]=0u+0x00000001u; // 801E6D80
  c->lr=0x801E6D88u; f_801E7DCC(c); // 801E6D84
  c->r[31]=c->r[3]|c->r[3]; // 801E6D88
  c->r[3]=c->r[28]|c->r[28]; // 801E6D8C
  c->r[4]=0u+0x00000000u; // 801E6D90
  c->lr=0x801E6D98u; f_801E63E4(c); // 801E6D94
  cmps(c,0,(int32_t)c->r[31],0); // 801E6D98
  if (!crb(c,2)) { goto L_801E6E24; } // 801E6D9C
  c->r[3]=c->r[1]+0x000000A8u; // 801E6DA0
  c->r[4]=0u+0x00000000u; // 801E6DA4
  c->r[5]=0u+0x00000040u; // 801E6DA8
  c->lr=0x801E6DB0u; f_801E4B10(c); // 801E6DAC
  c->r[6]=R32(c->r[13]+0xFFFFB810u); // 801E6DB0
  c->r[7]=0u+0x00000080u; // 801E6DB4
  c->r[4]=R32(c->r[1]+0x00000020u); // 801E6DB8
  c->r[3]=c->r[28]|c->r[28]; // 801E6DBC
  c->r[0]=c->r[6]+0x00000001u; // 801E6DC0
  W8(c->r[1]+0x000000B0u,c->r[31]); // 801E6DC4
  c->r[5]=c->r[4]+0x00000040u; // 801E6DC8
  c->r[4]=c->r[1]+0x000000A8u; // 801E6DCC
  W32(c->r[1]+0x000000A8u,c->r[5]); // 801E6DD0
  c->r[5]=0u+0x00000040u; // 801E6DD4
  W8(c->r[1]+0x000000ACu,c->r[7]); // 801E6DD8
  W32(c->r[1]+0x000000B4u,c->r[6]); // 801E6DDC
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E6DE0
  c->lr=0x801E6DE8u; f_801E643C(c); // 801E6DE4
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 801E6DE8
  if (crb(c,2)) { goto L_801E6E10; } // 801E6DEC
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; // 801E6DF0
  c->r[4]=c->r[1]+0x00000100u; // 801E6DF4
  c->r[5]=R32(c->r[1]+0x00000020u); // 801E6DF8
  c->r[3]=c->r[28]|c->r[28]; // 801E6DFC
  c->r[4]=c->r[4]+c->r[0]; // 801E6E00
  c->lr=0x801E6E08u; f_801E643C(c); // 801E6E04
  c->r[31]=c->r[3]|c->r[3]; // 801E6E08
  goto L_801E6E24; // 801E6E0C
L_801E6E10:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 801E6E10
  c->r[3]=c->r[28]|c->r[28]; // 801E6E14
  c->r[4]=c->r[1]+0x00000100u; // 801E6E18
  c->lr=0x801E6E20u; f_801E643C(c); // 801E6E1C
  c->r[31]=c->r[3]|c->r[3]; // 801E6E20
L_801E6E24:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E6E24
  if (crb(c,2)) { goto L_801E6EC8; } // 801E6E28
  c->r[0]=c->r[31]+0xFFFFF900u; // 801E6E2C
  cmpu(c,0,c->r[0],0x00000006u); // 801E6E30
  if (crb(c,1)) { goto L_801E6E78; } // 801E6E34
  c->r[3]=0u+0x80250000u; // 801E6E38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E6E3C
  c->r[3]=c->r[3]+0xFFFFA5B8u; // 801E6E40
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E6E44
  c->ctr=c->r[3]; // 801E6E48
  if (true) { switch (c->ctr) { case 0x801E6E50u: goto L_801E6E50; case 0x801E6E58u: goto L_801E6E58; case 0x801E6E60u: goto L_801E6E60; case 0x801E6E68u: goto L_801E6E68; case 0x801E6E70u: goto L_801E6E70; case 0x801E6E78u: goto L_801E6E78; default: break; } dispatch(c,c->ctr); return; } // 801E6E4C
L_801E6E50:;
  c->r[31]=0u+0x00000015u; // 801E6E50
  goto L_801E6E7C; // 801E6E54
L_801E6E58:;
  c->r[31]=0u+0x00000013u; // 801E6E58
  goto L_801E6E7C; // 801E6E5C
L_801E6E60:;
  c->r[31]=0u+0x00000021u; // 801E6E60
  goto L_801E6E7C; // 801E6E64
L_801E6E68:;
  c->r[31]=0u+0x00000022u; // 801E6E68
  goto L_801E6E7C; // 801E6E6C
L_801E6E70:;
  c->r[31]=0u+0x00000020u; // 801E6E70
  goto L_801E6E7C; // 801E6E74
L_801E6E78:;
  c->r[31]=0u+0x00000003u; // 801E6E78
L_801E6E7C:;
  c->r[3]=c->r[1]+0x00000028u; // 801E6E7C
  c->r[4]=0u+0x00000000u; // 801E6E80
  c->r[5]=0u+0x00000040u; // 801E6E84
  c->lr=0x801E6E8Cu; f_801E4B10(c); // 801E6E88
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E6E8C
  c->r[0]=0u+0x00000080u; // 801E6E90
  c->r[4]=0u+0x00000040u; // 801E6E94
  W32(c->r[1]+0x00000028u,c->r[4]); // 801E6E98
  c->r[5]=c->r[3]+0x00000001u; // 801E6E9C
  c->r[3]=c->r[1]+0x00000028u; // 801E6EA0
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801E6EA4
  c->r[0]=c->r[5]+0x00000001u; // 801E6EA8
  c->r[4]=0u+0x00000040u; // 801E6EAC
  W8(c->r[1]+0x00000030u,c->r[31]); // 801E6EB0
  W32(c->r[1]+0x00000034u,c->r[5]); // 801E6EB4
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E6EB8
  c->lr=0x801E6EC0u; f_801E5348(c); // 801E6EBC
  c->r[3]=0u+0x00000000u; // 801E6EC0
  goto L_801E6ED0; // 801E6EC4
L_801E6EC8:;
  c->r[3]=c->r[28]|c->r[28]; // 801E6EC8
  c->lr=0x801E6ED0u; f_801E6278(c); // 801E6ECC
L_801E6ED0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E6ED0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E6ED4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801E6ED8
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801E6EDC
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 801E6EE0
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 801E6EE4
  c->lr=c->r[0]; // 801E6EE8
  c->r[1]=c->r[10]|c->r[10]; // 801E6EEC
  return; // 801E6EF0
}

// TRKDoWriteMemory
void f_801E6EF4(Ctx* __restrict c) {
  trace_call(0x801E6EF4u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 801E6EF4
  c->r[12]=c->r[1]|c->r[1]; // 801E6EF8
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 801E6EFC
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6F00
  c->r[0]=c->lr; // 801E6F04
  W32(c->r[12]+0x00000004u,c->r[0]); // 801E6F08
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 801E6F0C
  c->r[31]=0u+0x00000000u; // 801E6F10
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 801E6F14
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 801E6F18
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 801E6F1C
  c->r[28]=c->r[3]|c->r[3]; // 801E6F20
  c->r[30]=R8(c->r[3]+0x00000014u); // 801E6F24
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 801E6F28
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 801E6F2C
  c->r[0]=R16(c->r[3]+0x00000018u); // 801E6F30
  if (crb(c,2)) { goto L_801E6F88; } // 801E6F34
  c->r[3]=c->r[1]+0x00000068u; // 801E6F38
  c->r[4]=0u+0x00000000u; // 801E6F3C
  c->r[5]=0u+0x00000040u; // 801E6F40
  c->lr=0x801E6F48u; f_801E4B10(c); // 801E6F44
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E6F48
  c->r[0]=0u+0x00000080u; // 801E6F4C
  c->r[4]=0u+0x00000040u; // 801E6F50
  c->r[5]=0u+0x00000012u; // 801E6F54
  c->r[6]=c->r[3]+0x00000001u; // 801E6F58
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 801E6F5C
  c->r[0]=c->r[6]+0x00000001u; // 801E6F60
  c->r[3]=c->r[1]+0x00000068u; // 801E6F64
  W32(c->r[1]+0x00000068u,c->r[4]); // 801E6F68
  c->r[4]=0u+0x00000040u; // 801E6F6C
  W8(c->r[1]+0x00000070u,c->r[5]); // 801E6F70
  W32(c->r[1]+0x00000074u,c->r[6]); // 801E6F74
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E6F78
  c->lr=0x801E6F80u; f_801E5348(c); // 801E6F7C
  c->r[3]=0u+0x00000000u; // 801E6F80
  goto L_801E70E0; // 801E6F84
L_801E6F88:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E6F88
  if (!crb(c,2)) { goto L_801E7034; } // 801E6F8C
  W32(c->r[1]+0x00000020u,c->r[0]); // 801E6F90
  c->r[4]=0u+0x00000040u; // 801E6F94
  c->lr=0x801E6F9Cu; f_801E640C(c); // 801E6F98
  c->r[5]=R32(c->r[1]+0x00000020u); // 801E6F9C
  c->r[3]=c->r[28]|c->r[28]; // 801E6FA0
  c->r[4]=c->r[1]+0x00000100u; // 801E6FA4
  c->lr=0x801E6FACu; f_801E64E0(c); // 801E6FA8
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 801E6FAC
  if (crb(c,2)) { goto L_801E6FBC; } // 801E6FB0
  c->r[6]=0u+0x00000000u; // 801E6FB4
  goto L_801E6FC0; // 801E6FB8
L_801E6FBC:;
  c->r[6]=0u+0x00000001u; // 801E6FBC
L_801E6FC0:;
  c->r[4]=c->r[29]|c->r[29]; // 801E6FC0
  c->r[3]=c->r[1]+0x00000100u; // 801E6FC4
  c->r[5]=c->r[1]+0x00000020u; // 801E6FC8
  c->r[7]=0u+0x00000000u; // 801E6FCC
  c->lr=0x801E6FD4u; f_801E7DCC(c); // 801E6FD0
  c->r[31]=c->r[3]|c->r[3]; // 801E6FD4
  c->r[3]=c->r[28]|c->r[28]; // 801E6FD8
  c->r[4]=0u+0x00000000u; // 801E6FDC
  c->lr=0x801E6FE4u; f_801E63E4(c); // 801E6FE0
  cmps(c,0,(int32_t)c->r[31],0); // 801E6FE4
  if (!crb(c,2)) { goto L_801E7034; } // 801E6FE8
  c->r[3]=c->r[1]+0x000000A8u; // 801E6FEC
  c->r[4]=0u+0x00000000u; // 801E6FF0
  c->r[5]=0u+0x00000040u; // 801E6FF4
  c->lr=0x801E6FFCu; f_801E4B10(c); // 801E6FF8
  c->r[6]=R32(c->r[13]+0xFFFFB810u); // 801E6FFC
  c->r[0]=0u+0x00000040u; // 801E7000
  c->r[4]=0u+0x00000080u; // 801E7004
  W32(c->r[1]+0x000000A8u,c->r[0]); // 801E7008
  c->r[0]=c->r[6]+0x00000001u; // 801E700C
  c->r[3]=c->r[28]|c->r[28]; // 801E7010
  W8(c->r[1]+0x000000ACu,c->r[4]); // 801E7014
  c->r[4]=c->r[1]+0x000000A8u; // 801E7018
  c->r[5]=0u+0x00000040u; // 801E701C
  W8(c->r[1]+0x000000B0u,c->r[31]); // 801E7020
  W32(c->r[1]+0x000000B4u,c->r[6]); // 801E7024
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7028
  c->lr=0x801E7030u; f_801E643C(c); // 801E702C
  c->r[31]=c->r[3]|c->r[3]; // 801E7030
L_801E7034:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E7034
  if (crb(c,2)) { goto L_801E70D8; } // 801E7038
  c->r[0]=c->r[31]+0xFFFFF900u; // 801E703C
  cmpu(c,0,c->r[0],0x00000006u); // 801E7040
  if (crb(c,1)) { goto L_801E7088; } // 801E7044
  c->r[3]=0u+0x80250000u; // 801E7048
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E704C
  c->r[3]=c->r[3]+0xFFFFA5D4u; // 801E7050
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E7054
  c->ctr=c->r[3]; // 801E7058
  if (true) { switch (c->ctr) { case 0x801E7060u: goto L_801E7060; case 0x801E7068u: goto L_801E7068; case 0x801E7070u: goto L_801E7070; case 0x801E7078u: goto L_801E7078; case 0x801E7080u: goto L_801E7080; case 0x801E7088u: goto L_801E7088; default: break; } dispatch(c,c->ctr); return; } // 801E705C
L_801E7060:;
  c->r[31]=0u+0x00000015u; // 801E7060
  goto L_801E708C; // 801E7064
L_801E7068:;
  c->r[31]=0u+0x00000013u; // 801E7068
  goto L_801E708C; // 801E706C
L_801E7070:;
  c->r[31]=0u+0x00000021u; // 801E7070
  goto L_801E708C; // 801E7074
L_801E7078:;
  c->r[31]=0u+0x00000022u; // 801E7078
  goto L_801E708C; // 801E707C
L_801E7080:;
  c->r[31]=0u+0x00000020u; // 801E7080
  goto L_801E708C; // 801E7084
L_801E7088:;
  c->r[31]=0u+0x00000003u; // 801E7088
L_801E708C:;
  c->r[3]=c->r[1]+0x00000028u; // 801E708C
  c->r[4]=0u+0x00000000u; // 801E7090
  c->r[5]=0u+0x00000040u; // 801E7094
  c->lr=0x801E709Cu; f_801E4B10(c); // 801E7098
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E709C
  c->r[0]=0u+0x00000080u; // 801E70A0
  c->r[4]=0u+0x00000040u; // 801E70A4
  W32(c->r[1]+0x00000028u,c->r[4]); // 801E70A8
  c->r[5]=c->r[3]+0x00000001u; // 801E70AC
  c->r[3]=c->r[1]+0x00000028u; // 801E70B0
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 801E70B4
  c->r[0]=c->r[5]+0x00000001u; // 801E70B8
  c->r[4]=0u+0x00000040u; // 801E70BC
  W8(c->r[1]+0x00000030u,c->r[31]); // 801E70C0
  W32(c->r[1]+0x00000034u,c->r[5]); // 801E70C4
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E70C8
  c->lr=0x801E70D0u; f_801E5348(c); // 801E70CC
  c->r[3]=0u+0x00000000u; // 801E70D0
  goto L_801E70E0; // 801E70D4
L_801E70D8:;
  c->r[3]=c->r[28]|c->r[28]; // 801E70D8
  c->lr=0x801E70E0u; f_801E6278(c); // 801E70DC
L_801E70E0:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 801E70E0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801E70E4
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 801E70E8
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 801E70EC
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 801E70F0
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 801E70F4
  c->lr=c->r[0]; // 801E70F8
  c->r[1]=c->r[10]|c->r[10]; // 801E70FC
  return; // 801E7100
}

// TRKDoReadRegisters
void f_801E7104(Ctx* __restrict c) {
  trace_call(0x801E7104u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7104
  c->r[0]=c->lr; // 801E7108
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801E710C
  W32(c->r[1]+0x000000DCu,c->r[31]); // 801E7110
  c->r[31]=c->r[3]|c->r[3]; // 801E7114
  c->r[4]=R16(c->r[3]+0x00000018u); // 801E7118
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 801E711C
  cmpu(c,0,c->r[4],c->r[0]); // 801E7120
  if (!crb(c,1)) { goto L_801E7178; } // 801E7124
  c->r[3]=c->r[1]+0x00000050u; // 801E7128
  c->r[4]=0u+0x00000000u; // 801E712C
  c->r[5]=0u+0x00000040u; // 801E7130
  c->lr=0x801E7138u; f_801E4B10(c); // 801E7134
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E7138
  c->r[0]=0u+0x00000080u; // 801E713C
  c->r[4]=0u+0x00000040u; // 801E7140
  c->r[5]=0u+0x00000014u; // 801E7144
  c->r[6]=c->r[3]+0x00000001u; // 801E7148
  W8(c->r[1]+0x00000054u,c->r[0]); // 801E714C
  c->r[0]=c->r[6]+0x00000001u; // 801E7150
  c->r[3]=c->r[1]+0x00000050u; // 801E7154
  W32(c->r[1]+0x00000050u,c->r[4]); // 801E7158
  c->r[4]=0u+0x00000040u; // 801E715C
  W8(c->r[1]+0x00000058u,c->r[5]); // 801E7160
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 801E7164
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7168
  c->lr=0x801E7170u; f_801E5348(c); // 801E716C
  c->r[3]=0u+0x00000000u; // 801E7170
  goto L_801E72EC; // 801E7174
L_801E7178:;
  c->r[5]=R32(c->r[13]+0xFFFFB810u); // 801E7178
  c->r[0]=0u+0x00000080u; // 801E717C
  c->r[6]=0u+0x00000468u; // 801E7180
  W8(c->r[1]+0x00000094u,c->r[0]); // 801E7184
  c->r[0]=c->r[5]+0x00000001u; // 801E7188
  c->r[4]=0u+0x00000000u; // 801E718C
  W32(c->r[1]+0x00000090u,c->r[6]); // 801E7190
  W32(c->r[1]+0x0000009Cu,c->r[5]); // 801E7194
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7198
  c->lr=0x801E71A0u; f_801E63E4(c); // 801E719C
  c->r[3]=c->r[31]|c->r[31]; // 801E71A0
  c->r[4]=c->r[1]+0x00000090u; // 801E71A4
  c->r[5]=0u+0x00000040u; // 801E71A8
  c->lr=0x801E71B0u; f_801E6734(c); // 801E71AC
  c->r[5]=c->r[31]|c->r[31]; // 801E71B0
  c->r[6]=c->r[1]+0x00000008u; // 801E71B4
  c->r[3]=0u+0x00000000u; // 801E71B8
  c->r[4]=0u+0x00000024u; // 801E71BC
  c->r[7]=0u+0x00000001u; // 801E71C0
  c->lr=0x801E71C8u; f_801E7F1C(c); // 801E71C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E71C8
  if (!crb(c,2)) { goto L_801E71E8; } // 801E71CC
  c->r[5]=c->r[31]|c->r[31]; // 801E71D0
  c->r[6]=c->r[1]+0x00000008u; // 801E71D4
  c->r[3]=0u+0x00000000u; // 801E71D8
  c->r[4]=0u+0x00000021u; // 801E71DC
  c->r[7]=0u+0x00000001u; // 801E71E0
  c->lr=0x801E71E8u; f_801E8014(c); // 801E71E4
L_801E71E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E71E8
  if (!crb(c,2)) { goto L_801E7208; } // 801E71EC
  c->r[5]=c->r[31]|c->r[31]; // 801E71F0
  c->r[6]=c->r[1]+0x00000008u; // 801E71F4
  c->r[3]=0u+0x00000000u; // 801E71F8
  c->r[4]=0u+0x00000060u; // 801E71FC
  c->r[7]=0u+0x00000001u; // 801E7200
  c->lr=0x801E7208u; f_801E8150(c); // 801E7204
L_801E7208:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E7208
  if (!crb(c,2)) { goto L_801E7228; } // 801E720C
  c->r[5]=c->r[31]|c->r[31]; // 801E7210
  c->r[6]=c->r[1]+0x00000008u; // 801E7214
  c->r[3]=0u+0x00000000u; // 801E7218
  c->r[4]=0u+0x0000001Fu; // 801E721C
  c->r[7]=0u+0x00000001u; // 801E7220
  c->lr=0x801E7228u; f_801E82B4(c); // 801E7224
L_801E7228:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E7228
  if (crb(c,2)) { goto L_801E72E4; } // 801E722C
  cmps(c,0,(int32_t)c->r[3],1795); // 801E7230
  if (crb(c,2)) { goto L_801E7264; } // 801E7234
  cmps(c,0,(int32_t)c->r[3],1793); // 801E7238
  if (crb(c,2)) { goto L_801E726C; } // 801E723C
  cmps(c,0,(int32_t)c->r[3],1794); // 801E7240
  if (crb(c,2)) { goto L_801E7274; } // 801E7244
  cmps(c,0,(int32_t)c->r[3],1796); // 801E7248
  if (crb(c,2)) { goto L_801E727C; } // 801E724C
  cmps(c,0,(int32_t)c->r[3],1797); // 801E7250
  if (crb(c,2)) { goto L_801E7284; } // 801E7254
  cmps(c,0,(int32_t)c->r[3],1798); // 801E7258
  if (crb(c,2)) { goto L_801E728C; } // 801E725C
  goto L_801E7294; // 801E7260
L_801E7264:;
  c->r[31]=0u+0x00000012u; // 801E7264
  goto L_801E7298; // 801E7268
L_801E726C:;
  c->r[31]=0u+0x00000014u; // 801E726C
  goto L_801E7298; // 801E7270
L_801E7274:;
  c->r[31]=0u+0x00000015u; // 801E7274
  goto L_801E7298; // 801E7278
L_801E727C:;
  c->r[31]=0u+0x00000021u; // 801E727C
  goto L_801E7298; // 801E7280
L_801E7284:;
  c->r[31]=0u+0x00000022u; // 801E7284
  goto L_801E7298; // 801E7288
L_801E728C:;
  c->r[31]=0u+0x00000020u; // 801E728C
  goto L_801E7298; // 801E7290
L_801E7294:;
  c->r[31]=0u+0x00000003u; // 801E7294
L_801E7298:;
  c->r[3]=c->r[1]+0x00000010u; // 801E7298
  c->r[4]=0u+0x00000000u; // 801E729C
  c->r[5]=0u+0x00000040u; // 801E72A0
  c->lr=0x801E72A8u; f_801E4B10(c); // 801E72A4
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E72A8
  c->r[0]=0u+0x00000080u; // 801E72AC
  c->r[4]=0u+0x00000040u; // 801E72B0
  W32(c->r[1]+0x00000010u,c->r[4]); // 801E72B4
  c->r[5]=c->r[3]+0x00000001u; // 801E72B8
  c->r[3]=c->r[1]+0x00000010u; // 801E72BC
  W8(c->r[1]+0x00000014u,c->r[0]); // 801E72C0
  c->r[0]=c->r[5]+0x00000001u; // 801E72C4
  c->r[4]=0u+0x00000040u; // 801E72C8
  W8(c->r[1]+0x00000018u,c->r[31]); // 801E72CC
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801E72D0
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E72D4
  c->lr=0x801E72DCu; f_801E5348(c); // 801E72D8
  c->r[3]=0u+0x00000000u; // 801E72DC
  goto L_801E72EC; // 801E72E0
L_801E72E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E72E4
  c->lr=0x801E72ECu; f_801E6278(c); // 801E72E8
L_801E72EC:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801E72EC
  c->r[31]=R32(c->r[1]+0x000000DCu); // 801E72F0
  c->lr=c->r[0]; // 801E72F4
  c->r[1]=c->r[1]+0x000000E0u; // 801E72F8
  return; // 801E72FC
}

// TRKDoWriteRegisters
void f_801E7300(Ctx* __restrict c) {
  trace_call(0x801E7300u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7300
  c->r[0]=c->lr; // 801E7304
  c->r[4]=0u+0x00000000u; // 801E7308
  W32(c->r[1]+0x000000E4u,c->r[0]); // 801E730C
  W32(c->r[1]+0x000000DCu,c->r[31]); // 801E7310
  W32(c->r[1]+0x000000D8u,c->r[30]); // 801E7314
  W32(c->r[1]+0x000000D4u,c->r[29]); // 801E7318
  W32(c->r[1]+0x000000D0u,c->r[28]); // 801E731C
  c->r[28]=c->r[3]|c->r[3]; // 801E7320
  c->r[31]=R8(c->r[3]+0x00000014u); // 801E7324
  c->r[30]=R16(c->r[3]+0x00000018u); // 801E7328
  c->r[29]=R16(c->r[3]+0x0000001Cu); // 801E732C
  c->lr=0x801E7334u; f_801E640C(c); // 801E7330
  cmpu(c,0,c->r[30],c->r[29]); // 801E7334
  if (!crb(c,1)) { goto L_801E738C; } // 801E7338
  c->r[3]=c->r[1]+0x00000050u; // 801E733C
  c->r[4]=0u+0x00000000u; // 801E7340
  c->r[5]=0u+0x00000040u; // 801E7344
  c->lr=0x801E734Cu; f_801E4B10(c); // 801E7348
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E734C
  c->r[0]=0u+0x00000080u; // 801E7350
  c->r[4]=0u+0x00000040u; // 801E7354
  c->r[5]=0u+0x00000014u; // 801E7358
  c->r[6]=c->r[3]+0x00000001u; // 801E735C
  W8(c->r[1]+0x00000054u,c->r[0]); // 801E7360
  c->r[0]=c->r[6]+0x00000001u; // 801E7364
  c->r[3]=c->r[1]+0x00000050u; // 801E7368
  W32(c->r[1]+0x00000050u,c->r[4]); // 801E736C
  c->r[4]=0u+0x00000040u; // 801E7370
  W8(c->r[1]+0x00000058u,c->r[5]); // 801E7374
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 801E7378
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E737C
  c->lr=0x801E7384u; f_801E5348(c); // 801E7380
  c->r[3]=0u+0x00000000u; // 801E7384
  goto L_801E7580; // 801E7388
L_801E738C:;
  c->r[3]=c->r[28]|c->r[28]; // 801E738C
  c->r[4]=0u+0x00000040u; // 801E7390
  c->lr=0x801E7398u; f_801E640C(c); // 801E7394
  cmps(c,0,(int32_t)c->r[31],0); // 801E7398
  if (crb(c,2)) { goto L_801E73BC; } // 801E739C
  cmps(c,0,(int32_t)c->r[31],1); // 801E73A0
  if (crb(c,2)) { goto L_801E73DC; } // 801E73A4
  cmps(c,0,(int32_t)c->r[31],2); // 801E73A8
  if (crb(c,2)) { goto L_801E73FC; } // 801E73AC
  cmps(c,0,(int32_t)c->r[31],3); // 801E73B0
  if (crb(c,2)) { goto L_801E741C; } // 801E73B4
  goto L_801E743C; // 801E73B8
L_801E73BC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E73BC
  c->r[4]=c->r[29]|c->r[29]; // 801E73C0
  c->r[5]=c->r[28]|c->r[28]; // 801E73C4
  c->r[6]=c->r[1]+0x00000008u; // 801E73C8
  c->r[7]=0u+0x00000000u; // 801E73CC
  c->lr=0x801E73D4u; f_801E7F1C(c); // 801E73D0
  c->r[31]=c->r[3]|c->r[3]; // 801E73D4
  goto L_801E7440; // 801E73D8
L_801E73DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E73DC
  c->r[4]=c->r[29]|c->r[29]; // 801E73E0
  c->r[5]=c->r[28]|c->r[28]; // 801E73E4
  c->r[6]=c->r[1]+0x00000008u; // 801E73E8
  c->r[7]=0u+0x00000000u; // 801E73EC
  c->lr=0x801E73F4u; f_801E8014(c); // 801E73F0
  c->r[31]=c->r[3]|c->r[3]; // 801E73F4
  goto L_801E7440; // 801E73F8
L_801E73FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E73FC
  c->r[4]=c->r[29]|c->r[29]; // 801E7400
  c->r[5]=c->r[28]|c->r[28]; // 801E7404
  c->r[6]=c->r[1]+0x00000008u; // 801E7408
  c->r[7]=0u+0x00000000u; // 801E740C
  c->lr=0x801E7414u; f_801E8150(c); // 801E7410
  c->r[31]=c->r[3]|c->r[3]; // 801E7414
  goto L_801E7440; // 801E7418
L_801E741C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E741C
  c->r[4]=c->r[29]|c->r[29]; // 801E7420
  c->r[5]=c->r[28]|c->r[28]; // 801E7424
  c->r[6]=c->r[1]+0x00000008u; // 801E7428
  c->r[7]=0u+0x00000000u; // 801E742C
  c->lr=0x801E7434u; f_801E82B4(c); // 801E7430
  c->r[31]=c->r[3]|c->r[3]; // 801E7434
  goto L_801E7440; // 801E7438
L_801E743C:;
  c->r[31]=0u+0x00000703u; // 801E743C
L_801E7440:;
  c->r[3]=c->r[28]|c->r[28]; // 801E7440
  c->r[4]=0u+0x00000000u; // 801E7444
  c->lr=0x801E744Cu; f_801E63E4(c); // 801E7448
  cmps(c,0,(int32_t)c->r[31],0); // 801E744C
  if (!crb(c,2)) { goto L_801E749C; } // 801E7450
  c->r[3]=c->r[1]+0x00000090u; // 801E7454
  c->r[4]=0u+0x00000000u; // 801E7458
  c->r[5]=0u+0x00000040u; // 801E745C
  c->lr=0x801E7464u; f_801E4B10(c); // 801E7460
  c->r[6]=R32(c->r[13]+0xFFFFB810u); // 801E7464
  c->r[0]=0u+0x00000040u; // 801E7468
  c->r[4]=0u+0x00000080u; // 801E746C
  W32(c->r[1]+0x00000090u,c->r[0]); // 801E7470
  c->r[0]=c->r[6]+0x00000001u; // 801E7474
  c->r[3]=c->r[28]|c->r[28]; // 801E7478
  W8(c->r[1]+0x00000094u,c->r[4]); // 801E747C
  c->r[4]=c->r[1]+0x00000090u; // 801E7480
  c->r[5]=0u+0x00000040u; // 801E7484
  W8(c->r[1]+0x00000098u,c->r[31]); // 801E7488
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 801E748C
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7490
  c->lr=0x801E7498u; f_801E643C(c); // 801E7494
  c->r[31]=c->r[3]|c->r[3]; // 801E7498
L_801E749C:;
  cmps(c,0,(int32_t)c->r[31],1794); // 801E749C
  if (crb(c,2)) { goto L_801E7508; } // 801E74A0
  if (!crb(c,0)) { goto L_801E74CC; } // 801E74A4
  cmps(c,0,(int32_t)c->r[31],770); // 801E74A8
  if (crb(c,2)) { goto L_801E7500; } // 801E74AC
  if (!crb(c,0)) { goto L_801E74C0; } // 801E74B0
  cmps(c,0,(int32_t)c->r[31],0); // 801E74B4
  if (crb(c,2)) { goto L_801E7578; } // 801E74B8
  goto L_801E7528; // 801E74BC
L_801E74C0:;
  cmps(c,0,(int32_t)c->r[31],1793); // 801E74C0
  if (!crb(c,0)) { goto L_801E74F8; } // 801E74C4
  goto L_801E7528; // 801E74C8
L_801E74CC:;
  cmps(c,0,(int32_t)c->r[31],1797); // 801E74CC
  if (crb(c,2)) { goto L_801E7518; } // 801E74D0
  if (!crb(c,0)) { goto L_801E74E4; } // 801E74D4
  cmps(c,0,(int32_t)c->r[31],1796); // 801E74D8
  if (!crb(c,0)) { goto L_801E7510; } // 801E74DC
  goto L_801E74F0; // 801E74E0
L_801E74E4:;
  cmps(c,0,(int32_t)c->r[31],1799); // 801E74E4
  if (!crb(c,0)) { goto L_801E7528; } // 801E74E8
  goto L_801E7520; // 801E74EC
L_801E74F0:;
  c->r[31]=0u+0x00000012u; // 801E74F0
  goto L_801E752C; // 801E74F4
L_801E74F8:;
  c->r[31]=0u+0x00000014u; // 801E74F8
  goto L_801E752C; // 801E74FC
L_801E7500:;
  c->r[31]=0u+0x00000002u; // 801E7500
  goto L_801E752C; // 801E7504
L_801E7508:;
  c->r[31]=0u+0x00000015u; // 801E7508
  goto L_801E752C; // 801E750C
L_801E7510:;
  c->r[31]=0u+0x00000021u; // 801E7510
  goto L_801E752C; // 801E7514
L_801E7518:;
  c->r[31]=0u+0x00000022u; // 801E7518
  goto L_801E752C; // 801E751C
L_801E7520:;
  c->r[31]=0u+0x00000020u; // 801E7520
  goto L_801E752C; // 801E7524
L_801E7528:;
  c->r[31]=0u+0x00000003u; // 801E7528
L_801E752C:;
  c->r[3]=c->r[1]+0x00000010u; // 801E752C
  c->r[4]=0u+0x00000000u; // 801E7530
  c->r[5]=0u+0x00000040u; // 801E7534
  c->lr=0x801E753Cu; f_801E4B10(c); // 801E7538
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E753C
  c->r[0]=0u+0x00000080u; // 801E7540
  c->r[4]=0u+0x00000040u; // 801E7544
  W32(c->r[1]+0x00000010u,c->r[4]); // 801E7548
  c->r[5]=c->r[3]+0x00000001u; // 801E754C
  c->r[3]=c->r[1]+0x00000010u; // 801E7550
  W8(c->r[1]+0x00000014u,c->r[0]); // 801E7554
  c->r[0]=c->r[5]+0x00000001u; // 801E7558
  c->r[4]=0u+0x00000040u; // 801E755C
  W8(c->r[1]+0x00000018u,c->r[31]); // 801E7560
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 801E7564
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7568
  c->lr=0x801E7570u; f_801E5348(c); // 801E756C
  c->r[3]=0u+0x00000000u; // 801E7570
  goto L_801E7580; // 801E7574
L_801E7578:;
  c->r[3]=c->r[28]|c->r[28]; // 801E7578
  c->lr=0x801E7580u; f_801E6278(c); // 801E757C
L_801E7580:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 801E7580
  c->r[31]=R32(c->r[1]+0x000000DCu); // 801E7584
  c->r[30]=R32(c->r[1]+0x000000D8u); // 801E7588
  c->r[29]=R32(c->r[1]+0x000000D4u); // 801E758C
  c->r[28]=R32(c->r[1]+0x000000D0u); // 801E7590
  c->lr=c->r[0]; // 801E7594
  c->r[1]=c->r[1]+0x000000E0u; // 801E7598
  return; // 801E759C
}

// TRKDoContinue
void f_801E75A0(Ctx* __restrict c) {
  trace_call(0x801E75A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E75A0
  c->r[0]=c->lr; // 801E75A4
  W32(c->r[1]+0x00000094u,c->r[0]); // 801E75A8
  c->lr=0x801E75B0u; f_801E8F40(c); // 801E75AC
  cmps(c,0,(int32_t)c->r[3],0); // 801E75B0
  if (!crb(c,2)) { goto L_801E7608; } // 801E75B4
  c->r[3]=c->r[1]+0x00000048u; // 801E75B8
  c->r[4]=0u+0x00000000u; // 801E75BC
  c->r[5]=0u+0x00000040u; // 801E75C0
  c->lr=0x801E75C8u; f_801E4B10(c); // 801E75C4
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E75C8
  c->r[0]=0u+0x00000080u; // 801E75CC
  c->r[4]=0u+0x00000040u; // 801E75D0
  c->r[5]=0u+0x00000016u; // 801E75D4
  c->r[6]=c->r[3]+0x00000001u; // 801E75D8
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 801E75DC
  c->r[0]=c->r[6]+0x00000001u; // 801E75E0
  c->r[3]=c->r[1]+0x00000048u; // 801E75E4
  W32(c->r[1]+0x00000048u,c->r[4]); // 801E75E8
  c->r[4]=0u+0x00000040u; // 801E75EC
  W8(c->r[1]+0x00000050u,c->r[5]); // 801E75F0
  W32(c->r[1]+0x00000054u,c->r[6]); // 801E75F4
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E75F8
  c->lr=0x801E7600u; f_801E5348(c); // 801E75FC
  c->r[3]=0u+0x00000000u; // 801E7600
  goto L_801E7654; // 801E7604
L_801E7608:;
  c->r[3]=c->r[1]+0x00000008u; // 801E7608
  c->r[4]=0u+0x00000000u; // 801E760C
  c->r[5]=0u+0x00000040u; // 801E7610
  c->lr=0x801E7618u; f_801E4B10(c); // 801E7614
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E7618
  c->r[0]=0u+0x00000080u; // 801E761C
  c->r[4]=0u+0x00000040u; // 801E7620
  c->r[5]=0u+0x00000000u; // 801E7624
  c->r[6]=c->r[3]+0x00000001u; // 801E7628
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E762C
  c->r[0]=c->r[6]+0x00000001u; // 801E7630
  c->r[3]=c->r[1]+0x00000008u; // 801E7634
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E7638
  c->r[4]=0u+0x00000040u; // 801E763C
  W8(c->r[1]+0x00000010u,c->r[5]); // 801E7640
  W32(c->r[1]+0x00000014u,c->r[6]); // 801E7644
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7648
  c->lr=0x801E7650u; f_801E5348(c); // 801E764C
  c->lr=0x801E7654u; f_801E5F1C(c); // 801E7650
L_801E7654:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 801E7654
  c->lr=c->r[0]; // 801E7658
  c->r[1]=c->r[1]+0x00000090u; // 801E765C
  return; // 801E7660
}

// TRKDoStep
void f_801E7664(Ctx* __restrict c) {
  trace_call(0x801E7664u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7664
  c->r[0]=c->lr; // 801E7668
  c->r[4]=0u+0x00000000u; // 801E766C
  W32(c->r[1]+0x00000164u,c->r[0]); // 801E7670
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 801E7674
  W32(c->r[1]+0x00000158u,c->r[30]); // 801E7678
  c->r[30]=c->r[3]|c->r[3]; // 801E767C
  W32(c->r[1]+0x00000154u,c->r[29]); // 801E7680
  W32(c->r[1]+0x00000150u,c->r[28]); // 801E7684
  c->lr=0x801E768Cu; f_801E640C(c); // 801E7688
  c->r[31]=R8(c->r[30]+0x00000014u); // 801E768C
  c->r[29]=R32(c->r[30]+0x0000001Cu); // 801E7690
  cmps(c,0,(int32_t)c->r[31],0); // 801E7694
  c->r[28]=R32(c->r[30]+0x00000020u); // 801E7698
  if (crb(c,2)) { goto L_801E76BC; } // 801E769C
  cmps(c,0,(int32_t)c->r[31],16); // 801E76A0
  if (crb(c,2)) { goto L_801E76BC; } // 801E76A4
  cmps(c,0,(int32_t)c->r[31],1); // 801E76A8
  if (crb(c,2)) { goto L_801E7718; } // 801E76AC
  cmps(c,0,(int32_t)c->r[31],17); // 801E76B0
  if (crb(c,2)) { goto L_801E7718; } // 801E76B4
  goto L_801E777C; // 801E76B8
L_801E76BC:;
  c->r[30]=R8(c->r[30]+0x00000018u); // 801E76BC
  cmpu(c,0,c->r[30],0x00000001u); // 801E76C0
  if (!crb(c,0)) { goto L_801E77CC; } // 801E76C4
  c->r[3]=c->r[1]+0x00000108u; // 801E76C8
  c->r[4]=0u+0x00000000u; // 801E76CC
  c->r[5]=0u+0x00000040u; // 801E76D0
  c->lr=0x801E76D8u; f_801E4B10(c); // 801E76D4
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E76D8
  c->r[0]=0u+0x00000080u; // 801E76DC
  c->r[4]=0u+0x00000040u; // 801E76E0
  c->r[5]=0u+0x00000011u; // 801E76E4
  c->r[6]=c->r[3]+0x00000001u; // 801E76E8
  W8(c->r[1]+0x0000010Cu,c->r[0]); // 801E76EC
  c->r[0]=c->r[6]+0x00000001u; // 801E76F0
  c->r[3]=c->r[1]+0x00000108u; // 801E76F4
  W32(c->r[1]+0x00000108u,c->r[4]); // 801E76F8
  c->r[4]=0u+0x00000040u; // 801E76FC
  W8(c->r[1]+0x00000110u,c->r[5]); // 801E7700
  W32(c->r[1]+0x00000114u,c->r[6]); // 801E7704
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7708
  c->lr=0x801E7710u; f_801E5348(c); // 801E770C
  c->r[3]=0u+0x00000000u; // 801E7710
  goto L_801E78C8; // 801E7714
L_801E7718:;
  c->lr=0x801E771Cu; f_801E8D3C(c); // 801E7718
  cmpu(c,0,c->r[3],c->r[29]); // 801E771C
  if (crb(c,0)) { goto L_801E772C; } // 801E7720
  cmpu(c,0,c->r[3],c->r[28]); // 801E7724
  if (!crb(c,1)) { goto L_801E77CC; } // 801E7728
L_801E772C:;
  c->r[3]=c->r[1]+0x000000C8u; // 801E772C
  c->r[4]=0u+0x00000000u; // 801E7730
  c->r[5]=0u+0x00000040u; // 801E7734
  c->lr=0x801E773Cu; f_801E4B10(c); // 801E7738
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E773C
  c->r[0]=0u+0x00000080u; // 801E7740
  c->r[4]=0u+0x00000040u; // 801E7744
  c->r[5]=0u+0x00000011u; // 801E7748
  c->r[6]=c->r[3]+0x00000001u; // 801E774C
  W8(c->r[1]+0x000000CCu,c->r[0]); // 801E7750
  c->r[0]=c->r[6]+0x00000001u; // 801E7754
  c->r[3]=c->r[1]+0x000000C8u; // 801E7758
  W32(c->r[1]+0x000000C8u,c->r[4]); // 801E775C
  c->r[4]=0u+0x00000040u; // 801E7760
  W8(c->r[1]+0x000000D0u,c->r[5]); // 801E7764
  W32(c->r[1]+0x000000D4u,c->r[6]); // 801E7768
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E776C
  c->lr=0x801E7774u; f_801E5348(c); // 801E7770
  c->r[3]=0u+0x00000000u; // 801E7774
  goto L_801E78C8; // 801E7778
L_801E777C:;
  c->r[3]=c->r[1]+0x00000088u; // 801E777C
  c->r[4]=0u+0x00000000u; // 801E7780
  c->r[5]=0u+0x00000040u; // 801E7784
  c->lr=0x801E778Cu; f_801E4B10(c); // 801E7788
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E778C
  c->r[0]=0u+0x00000080u; // 801E7790
  c->r[4]=0u+0x00000040u; // 801E7794
  c->r[5]=0u+0x00000012u; // 801E7798
  c->r[6]=c->r[3]+0x00000001u; // 801E779C
  W8(c->r[1]+0x0000008Cu,c->r[0]); // 801E77A0
  c->r[0]=c->r[6]+0x00000001u; // 801E77A4
  c->r[3]=c->r[1]+0x00000088u; // 801E77A8
  W32(c->r[1]+0x00000088u,c->r[4]); // 801E77AC
  c->r[4]=0u+0x00000040u; // 801E77B0
  W8(c->r[1]+0x00000090u,c->r[5]); // 801E77B4
  W32(c->r[1]+0x00000094u,c->r[6]); // 801E77B8
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E77BC
  c->lr=0x801E77C4u; f_801E5348(c); // 801E77C0
  c->r[3]=0u+0x00000000u; // 801E77C4
  goto L_801E78C8; // 801E77C8
L_801E77CC:;
  c->lr=0x801E77D0u; f_801E8F40(c); // 801E77CC
  cmps(c,0,(int32_t)c->r[3],0); // 801E77D0
  if (!crb(c,2)) { goto L_801E7828; } // 801E77D4
  c->r[3]=c->r[1]+0x00000048u; // 801E77D8
  c->r[4]=0u+0x00000000u; // 801E77DC
  c->r[5]=0u+0x00000040u; // 801E77E0
  c->lr=0x801E77E8u; f_801E4B10(c); // 801E77E4
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E77E8
  c->r[0]=0u+0x00000080u; // 801E77EC
  c->r[4]=0u+0x00000040u; // 801E77F0
  c->r[5]=0u+0x00000016u; // 801E77F4
  c->r[6]=c->r[3]+0x00000001u; // 801E77F8
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 801E77FC
  c->r[0]=c->r[6]+0x00000001u; // 801E7800
  c->r[3]=c->r[1]+0x00000048u; // 801E7804
  W32(c->r[1]+0x00000048u,c->r[4]); // 801E7808
  c->r[4]=0u+0x00000040u; // 801E780C
  W8(c->r[1]+0x00000050u,c->r[5]); // 801E7810
  W32(c->r[1]+0x00000054u,c->r[6]); // 801E7814
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7818
  c->lr=0x801E7820u; f_801E5348(c); // 801E781C
  c->r[3]=0u+0x00000000u; // 801E7820
  goto L_801E78C8; // 801E7824
L_801E7828:;
  c->r[3]=c->r[1]+0x00000008u; // 801E7828
  c->r[4]=0u+0x00000000u; // 801E782C
  c->r[5]=0u+0x00000040u; // 801E7830
  c->lr=0x801E7838u; f_801E4B10(c); // 801E7834
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E7838
  c->r[0]=0u+0x00000080u; // 801E783C
  c->r[4]=0u+0x00000040u; // 801E7840
  c->r[5]=0u+0x00000000u; // 801E7844
  c->r[6]=c->r[3]+0x00000001u; // 801E7848
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E784C
  c->r[0]=c->r[6]+0x00000001u; // 801E7850
  c->r[3]=c->r[1]+0x00000008u; // 801E7854
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E7858
  c->r[4]=0u+0x00000040u; // 801E785C
  W8(c->r[1]+0x00000010u,c->r[5]); // 801E7860
  W32(c->r[1]+0x00000014u,c->r[6]); // 801E7864
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7868
  c->lr=0x801E7870u; f_801E5348(c); // 801E786C
  cmps(c,0,(int32_t)c->r[31],0); // 801E7870
  c->r[3]=0u+0x00000000u; // 801E7874
  if (crb(c,2)) { goto L_801E7898; } // 801E7878
  cmps(c,0,(int32_t)c->r[31],16); // 801E787C
  if (crb(c,2)) { goto L_801E7898; } // 801E7880
  cmps(c,0,(int32_t)c->r[31],1); // 801E7884
  if (crb(c,2)) { goto L_801E78B0; } // 801E7888
  cmps(c,0,(int32_t)c->r[31],17); // 801E788C
  if (crb(c,2)) { goto L_801E78B0; } // 801E7890
  goto L_801E78C8; // 801E7894
L_801E7898:;
  c->r[0]=c->r[31]+0xFFFFFFF0u; // 801E7898
  c->r[3]=c->r[30]|c->r[30]; // 801E789C
  c->r[0]=cntlz(c->r[0]); // 801E78A0
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E78A4
  c->lr=0x801E78ACu; f_801E8C40(c); // 801E78A8
  goto L_801E78C8; // 801E78AC
L_801E78B0:;
  c->r[0]=c->r[31]+0xFFFFFFEFu; // 801E78B0
  c->r[3]=c->r[29]|c->r[29]; // 801E78B4
  c->r[0]=cntlz(c->r[0]); // 801E78B8
  c->r[4]=c->r[28]|c->r[28]; // 801E78BC
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E78C0
  c->lr=0x801E78C8u; f_801E8CC8(c); // 801E78C4
L_801E78C8:;
  c->r[0]=R32(c->r[1]+0x00000164u); // 801E78C8
  c->r[31]=R32(c->r[1]+0x0000015Cu); // 801E78CC
  c->r[30]=R32(c->r[1]+0x00000158u); // 801E78D0
  c->r[29]=R32(c->r[1]+0x00000154u); // 801E78D4
  c->r[28]=R32(c->r[1]+0x00000150u); // 801E78D8
  c->lr=c->r[0]; // 801E78DC
  c->r[1]=c->r[1]+0x00000160u; // 801E78E0
  return; // 801E78E4
}

// TRKDoStop
void f_801E78E8(Ctx* __restrict c) {
  trace_call(0x801E78E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E78E8
  c->r[0]=c->lr; // 801E78EC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E78F0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801E78F4
  c->lr=0x801E78FCu; f_801E8F60(c); // 801E78F8
  cmps(c,0,(int32_t)c->r[3],0); // 801E78FC
  if (crb(c,2)) { goto L_801E7920; } // 801E7900
  cmps(c,0,(int32_t)c->r[3],1796); // 801E7904
  if (crb(c,2)) { goto L_801E7928; } // 801E7908
  cmps(c,0,(int32_t)c->r[3],1797); // 801E790C
  if (crb(c,2)) { goto L_801E7930; } // 801E7910
  cmps(c,0,(int32_t)c->r[3],1798); // 801E7914
  if (crb(c,2)) { goto L_801E7938; } // 801E7918
  goto L_801E7940; // 801E791C
L_801E7920:;
  c->r[31]=0u+0x00000000u; // 801E7920
  goto L_801E7944; // 801E7924
L_801E7928:;
  c->r[31]=0u+0x00000021u; // 801E7928
  goto L_801E7944; // 801E792C
L_801E7930:;
  c->r[31]=0u+0x00000022u; // 801E7930
  goto L_801E7944; // 801E7934
L_801E7938:;
  c->r[31]=0u+0x00000020u; // 801E7938
  goto L_801E7944; // 801E793C
L_801E7940:;
  c->r[31]=0u+0x00000001u; // 801E7940
L_801E7944:;
  c->r[3]=c->r[1]+0x00000008u; // 801E7944
  c->r[4]=0u+0x00000000u; // 801E7948
  c->r[5]=0u+0x00000040u; // 801E794C
  c->lr=0x801E7954u; f_801E4B10(c); // 801E7950
  c->r[3]=R32(c->r[13]+0xFFFFB810u); // 801E7954
  c->r[0]=0u+0x00000080u; // 801E7958
  c->r[4]=0u+0x00000040u; // 801E795C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E7960
  c->r[5]=c->r[3]+0x00000001u; // 801E7964
  c->r[3]=c->r[1]+0x00000008u; // 801E7968
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801E796C
  c->r[0]=c->r[5]+0x00000001u; // 801E7970
  c->r[4]=0u+0x00000040u; // 801E7974
  W8(c->r[1]+0x00000010u,c->r[31]); // 801E7978
  W32(c->r[1]+0x00000014u,c->r[5]); // 801E797C
  W32(c->r[13]+0xFFFFB810u,c->r[0]); // 801E7980
  c->lr=0x801E7988u; f_801E5348(c); // 801E7984
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801E7988
  c->r[3]=0u+0x00000000u; // 801E798C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801E7990
  c->lr=c->r[0]; // 801E7994
  c->r[1]=c->r[1]+0x00000050u; // 801E7998
  return; // 801E799C
}

