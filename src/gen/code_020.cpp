#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// bta_dm_cancel_rmt_name
void f_801ACAE8(Ctx* __restrict c) {
  trace_call(0x801ACAE8u);
  f_801B55A4(c); return; // 801ACAE8
}

// bta_dm_authorize_cback
void f_801ACAEC(Ctx* __restrict c) {
  trace_call(0x801ACAECu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACAEC
  c->r[0]=c->lr; // 801ACAF0
  c->r[4]=c->r[3]|c->r[3]; // 801ACAF4
  W32(c->r[1]+0x00000134u,c->r[0]); // 801ACAF8
  c->r[3]=c->r[1]+0x00000008u; // 801ACAFC
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801ACB00
  c->r[31]=0u+0x00000001u; // 801ACB04
  W32(c->r[1]+0x00000128u,c->r[30]); // 801ACB08
  c->r[30]=c->r[7]|c->r[7]; // 801ACB0C
  W32(c->r[1]+0x00000124u,c->r[29]); // 801ACB10
  c->r[29]=c->r[5]|c->r[5]; // 801ACB14
  c->lr=0x801ACB1Cu; f_801AAE54(c); // 801ACB18
  c->r[4]=c->r[29]|c->r[29]; // 801ACB1C
  c->r[3]=c->r[1]+0x0000000Eu; // 801ACB20
  c->r[5]=0u+0x00000020u; // 801ACB24
  c->lr=0x801ACB2Cu; f_801DBA48(c); // 801ACB28
  c->r[3]=0u+0x80200000u; // 801ACB2C
  c->r[0]=0u+0x00000017u; // 801ACB30
  c->r[3]=c->r[3]+0xFFFFA500u; // 801ACB34
  c->ctr=c->r[0]; // 801ACB38
L_801ACB3C:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801ACB3C
  c->r[0]=R32(c->r[3]+c->r[0]); // 801ACB40
  cmpu(c,0,c->r[30],c->r[0]); // 801ACB44
  if (!crb(c,2)) { goto L_801ACB54; } // 801ACB48
  W8(c->r[1]+0x00000106u,c->r[31]); // 801ACB4C
  goto L_801ACB5C; // 801ACB50
L_801ACB54:;
  c->r[31]=c->r[31]+0x00000001u; // 801ACB54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801ACB3C; } // 801ACB58
L_801ACB5C:;
  c->r[3]=0u+0x802D0000u; // 801ACB5C
  c->r[3]=c->r[3]+0x00002074u; // 801ACB60
  c->r[12]=R32(c->r[3]+0x00000050u); // 801ACB64
  cmps(c,0,(int32_t)c->r[12],0); // 801ACB68
  if (crb(c,2)) { goto L_801ACB94; } // 801ACB6C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801ACB70
  cmpu(c,0,c->r[0],0x00000017u); // 801ACB74
  if (crb(c,1)) { goto L_801ACB94; } // 801ACB78
  c->r[4]=c->r[1]+0x00000008u; // 801ACB7C
  c->r[3]=0u+0x00000004u; // 801ACB80
  c->ctr=c->r[12]; // 801ACB84
  if (true) { c->lr=0x801ACB8Cu; dispatch(c,c->ctr); } // 801ACB88
  c->r[3]=0u+0x00000001u; // 801ACB8C
  goto L_801ACB98; // 801ACB90
L_801ACB94:;
  c->r[3]=0u+0x0000000Bu; // 801ACB94
L_801ACB98:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801ACB98
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801ACB9C
  c->r[30]=R32(c->r[1]+0x00000128u); // 801ACBA0
  c->r[29]=R32(c->r[1]+0x00000124u); // 801ACBA4
  c->lr=c->r[0]; // 801ACBA8
  c->r[1]=c->r[1]+0x00000130u; // 801ACBAC
  return; // 801ACBB0
}

// bta_dm_pinname_cback
void f_801ACBB4(Ctx* __restrict c) {
  trace_call(0x801ACBB4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACBB4
  c->r[0]=c->lr; // 801ACBB8
  W32(c->r[1]+0x00000124u,c->r[0]); // 801ACBBC
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801ACBC0
  c->r[31]=0u+0x802D0000u; // 801ACBC4
  c->r[31]=c->r[31]+0x00002074u; // 801ACBC8
  W32(c->r[1]+0x00000118u,c->r[30]); // 801ACBCC
  c->r[30]=c->r[3]|c->r[3]; // 801ACBD0
  c->r[3]=c->r[1]+0x00000008u; // 801ACBD4
  c->r[4]=c->r[31]+0x000000F8u; // 801ACBD8
  c->lr=0x801ACBE0u; f_801AAE54(c); // 801ACBDC
  c->r[4]=R8(c->r[31]+0x000000FEu); // 801ACBE0
  cmps(c,0,(int32_t)c->r[30],0); // 801ACBE4
  c->r[3]=R8(c->r[31]+0x000000FFu); // 801ACBE8
  c->r[0]=R8(c->r[31]+0x00000100u); // 801ACBEC
  W8(c->r[1]+0x00000106u,c->r[4]); // 801ACBF0
  W8(c->r[1]+0x00000107u,c->r[3]); // 801ACBF4
  W8(c->r[1]+0x00000108u,c->r[0]); // 801ACBF8
  if (crb(c,2)) { goto L_801ACC38; } // 801ACBFC
  c->r[0]=R16(c->r[30]+0x00000000u); // 801ACC00
  cmps(c,0,(int32_t)c->r[0],0); // 801ACC04
  if (!crb(c,2)) { goto L_801ACC38; } // 801ACC08
  c->r[0]=R16(c->r[30]+0x00000002u); // 801ACC0C
  c->r[3]=c->r[1]+0x0000000Eu; // 801ACC10
  c->r[4]=c->r[30]+0x00000004u; // 801ACC14
  c->r[5]=0u+0x00000020u; // 801ACC18
  cmpu(c,0,c->r[0],0x00000020u); // 801ACC1C
  if (!crb(c,0)) { goto L_801ACC28; } // 801ACC20
  c->r[5]=c->r[0]|c->r[0]; // 801ACC24
L_801ACC28:;
  c->lr=0x801ACC2Cu; f_80004364(c); // 801ACC28
  c->r[0]=0u+0x00000000u; // 801ACC2C
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801ACC30
  goto L_801ACC40; // 801ACC34
L_801ACC38:;
  c->r[0]=0u+0x00000000u; // 801ACC38
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801ACC3C
L_801ACC40:;
  c->r[5]=0u+0x802D0000u; // 801ACC40
  c->r[4]=c->r[1]+0x00000008u; // 801ACC44
  c->r[5]=c->r[5]+0x00002074u; // 801ACC48
  c->r[3]=0u+0x00000002u; // 801ACC4C
  c->r[12]=R32(c->r[5]+0x00000050u); // 801ACC50
  c->ctr=c->r[12]; // 801ACC54
  if (true) { c->lr=0x801ACC5Cu; dispatch(c,c->ctr); } // 801ACC58
  c->r[0]=R32(c->r[1]+0x00000124u); // 801ACC5C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801ACC60
  c->r[30]=R32(c->r[1]+0x00000118u); // 801ACC64
  c->lr=c->r[0]; // 801ACC68
  c->r[1]=c->r[1]+0x00000120u; // 801ACC6C
  return; // 801ACC70
}

// bta_dm_pin_cback
void f_801ACC74(Ctx* __restrict c) {
  trace_call(0x801ACC74u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACC74
  c->r[0]=c->lr; // 801ACC78
  W32(c->r[1]+0x00000134u,c->r[0]); // 801ACC7C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801ACC80
  c->r[31]=0u+0x802D0000u; // 801ACC84
  c->r[31]=c->r[31]+0x00002074u; // 801ACC88
  W32(c->r[1]+0x00000128u,c->r[30]); // 801ACC8C
  c->r[30]=c->r[5]|c->r[5]; // 801ACC90
  W32(c->r[1]+0x00000124u,c->r[29]); // 801ACC94
  c->r[29]=c->r[4]|c->r[4]; // 801ACC98
  W32(c->r[1]+0x00000120u,c->r[28]); // 801ACC9C
  c->r[28]=c->r[3]|c->r[3]; // 801ACCA0
  c->r[0]=R32(c->r[31]+0x00000050u); // 801ACCA4
  cmps(c,0,(int32_t)c->r[0],0); // 801ACCA8
  if (!crb(c,2)) { goto L_801ACCB8; } // 801ACCAC
  c->r[3]=0u+0x0000000Bu; // 801ACCB0
  goto L_801ACD84; // 801ACCB4
L_801ACCB8:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801ACCB8
  cmps(c,0,(int32_t)c->r[0],0); // 801ACCBC
  if (!crb(c,2)) { goto L_801ACD28; } // 801ACCC0
  c->r[4]=c->r[28]|c->r[28]; // 801ACCC4
  c->r[3]=c->r[31]+0x000000F8u; // 801ACCC8
  c->lr=0x801ACCD0u; f_801AAE54(c); // 801ACCCC
  c->r[0]=R8(c->r[29]+0x00000000u); // 801ACCD0
  c->r[4]=0u+0x801B0000u; // 801ACCD4
  c->r[3]=c->r[28]|c->r[28]; // 801ACCD8
  W8(c->r[31]+0x000000FEu,c->r[0]); // 801ACCDC
  c->r[4]=c->r[4]+0xFFFFCBB4u; // 801ACCE0
  c->r[0]=R8(c->r[29]+0x00000001u); // 801ACCE4
  W8(c->r[31]+0x000000FFu,c->r[0]); // 801ACCE8
  c->r[0]=R8(c->r[29]+0x00000002u); // 801ACCEC
  W8(c->r[31]+0x00000100u,c->r[0]); // 801ACCF0
  c->lr=0x801ACCF8u; f_801B54BC(c); // 801ACCF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801ACCF8
  cmpu(c,0,c->r[0],0x00000001u); // 801ACCFC
  if (!crb(c,2)) { goto L_801ACD0C; } // 801ACD00
  c->r[3]=0u+0x00000001u; // 801ACD04
  goto L_801ACD84; // 801ACD08
L_801ACD0C:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801ACD0C
  cmpu(c,0,c->r[0],0x00000002u); // 801ACD10
  if (crb(c,0)) { goto L_801ACD28; } // 801ACD14
  c->r[4]=0u+0x80240000u; // 801ACD18
  c->r[3]=0u+0x00000501u; // 801ACD1C
  c->r[4]=c->r[4]+0x00004240u; // 801ACD20
  c->lr=0x801ACD28u; f_801AA7C0(c); // 801ACD24
L_801ACD28:;
  c->r[4]=c->r[28]|c->r[28]; // 801ACD28
  c->r[3]=c->r[1]+0x00000008u; // 801ACD2C
  c->lr=0x801ACD34u; f_801AAE54(c); // 801ACD30
  c->r[0]=R8(c->r[29]+0x00000000u); // 801ACD34
  c->r[4]=c->r[30]|c->r[30]; // 801ACD38
  c->r[3]=c->r[1]+0x0000000Eu; // 801ACD3C
  c->r[5]=0u+0x00000020u; // 801ACD40
  W8(c->r[1]+0x00000106u,c->r[0]); // 801ACD44
  c->r[0]=R8(c->r[29]+0x00000001u); // 801ACD48
  W8(c->r[1]+0x00000107u,c->r[0]); // 801ACD4C
  c->r[0]=R8(c->r[29]+0x00000002u); // 801ACD50
  W8(c->r[1]+0x00000108u,c->r[0]); // 801ACD54
  c->lr=0x801ACD5Cu; f_801DBA48(c); // 801ACD58
  c->r[3]=0u+0x802D0000u; // 801ACD5C
  c->r[0]=0u+0x00000000u; // 801ACD60
  c->r[3]=c->r[3]+0x00002074u; // 801ACD64
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801ACD68
  c->r[12]=R32(c->r[3]+0x00000050u); // 801ACD6C
  c->r[4]=c->r[1]+0x00000008u; // 801ACD70
  c->r[3]=0u+0x00000002u; // 801ACD74
  c->ctr=c->r[12]; // 801ACD78
  if (true) { c->lr=0x801ACD80u; dispatch(c,c->ctr); } // 801ACD7C
  c->r[3]=0u+0x00000001u; // 801ACD80
L_801ACD84:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801ACD84
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801ACD88
  c->r[30]=R32(c->r[1]+0x00000128u); // 801ACD8C
  c->r[29]=R32(c->r[1]+0x00000124u); // 801ACD90
  c->r[28]=R32(c->r[1]+0x00000120u); // 801ACD94
  c->lr=c->r[0]; // 801ACD98
  c->r[1]=c->r[1]+0x00000130u; // 801ACD9C
  return; // 801ACDA0
}

// bta_dm_link_key_request_cback
void f_801ACDA4(Ctx* __restrict c) {
  trace_call(0x801ACDA4u);
  c->r[3]=0u+0x0000000Bu; // 801ACDA4
  return; // 801ACDA8
}

// bta_dm_new_link_key_cback
void f_801ACDAC(Ctx* __restrict c) {
  trace_call(0x801ACDACu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACDAC
  c->r[0]=c->lr; // 801ACDB0
  c->r[4]=c->r[3]|c->r[3]; // 801ACDB4
  W32(c->r[1]+0x00000124u,c->r[0]); // 801ACDB8
  c->r[3]=c->r[1]+0x00000008u; // 801ACDBC
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801ACDC0
  c->r[31]=c->r[6]|c->r[6]; // 801ACDC4
  W32(c->r[1]+0x00000118u,c->r[30]); // 801ACDC8
  c->r[30]=c->r[5]|c->r[5]; // 801ACDCC
  c->lr=0x801ACDD4u; f_801AAE54(c); // 801ACDD0
  c->r[4]=c->r[30]|c->r[30]; // 801ACDD4
  c->r[3]=c->r[1]+0x0000000Eu; // 801ACDD8
  c->r[5]=0u+0x0000001Fu; // 801ACDDC
  c->lr=0x801ACDE4u; f_80004364(c); // 801ACDE0
  c->r[0]=0u+0x00000000u; // 801ACDE4
  c->r[4]=c->r[31]|c->r[31]; // 801ACDE8
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801ACDEC
  c->r[3]=c->r[1]+0x00000107u; // 801ACDF0
  c->r[5]=0u+0x00000010u; // 801ACDF4
  c->lr=0x801ACDFCu; f_80004364(c); // 801ACDF8
  c->r[3]=0u+0x802D0000u; // 801ACDFC
  c->r[0]=0u+0x00000001u; // 801ACE00
  c->r[3]=c->r[3]+0x00002074u; // 801ACE04
  W8(c->r[1]+0x00000106u,c->r[0]); // 801ACE08
  c->r[12]=R32(c->r[3]+0x00000050u); // 801ACE0C
  W8(c->r[1]+0x00000117u,c->r[0]); // 801ACE10
  cmps(c,0,(int32_t)c->r[12],0); // 801ACE14
  if (crb(c,2)) { goto L_801ACE2C; } // 801ACE18
  c->r[4]=c->r[1]+0x00000008u; // 801ACE1C
  c->r[3]=0u+0x00000003u; // 801ACE20
  c->ctr=c->r[12]; // 801ACE24
  if (true) { c->lr=0x801ACE2Cu; dispatch(c,c->ctr); } // 801ACE28
L_801ACE2C:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801ACE2C
  c->r[3]=0u+0x00000001u; // 801ACE30
  c->r[30]=R32(c->r[1]+0x00000118u); // 801ACE34
  c->r[0]=R32(c->r[1]+0x00000124u); // 801ACE38
  c->lr=c->r[0]; // 801ACE3C
  c->r[1]=c->r[1]+0x00000120u; // 801ACE40
  return; // 801ACE44
}

// bta_dm_authentication_complete_cback
void f_801ACE48(Ctx* __restrict c) {
  trace_call(0x801ACE48u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACE48
  c->r[0]=c->lr; // 801ACE4C
  cmps(c,0,(int32_t)c->r[6],0); // 801ACE50
  W32(c->r[1]+0x00000124u,c->r[0]); // 801ACE54
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801ACE58
  c->r[31]=c->r[5]|c->r[5]; // 801ACE5C
  if (crb(c,2)) { goto L_801ACEB4; } // 801ACE60
  c->r[4]=c->r[3]|c->r[3]; // 801ACE64
  c->r[3]=c->r[1]+0x00000008u; // 801ACE68
  c->lr=0x801ACE70u; f_801AAE54(c); // 801ACE6C
  c->r[4]=c->r[31]|c->r[31]; // 801ACE70
  c->r[3]=c->r[1]+0x0000000Eu; // 801ACE74
  c->r[5]=0u+0x0000001Fu; // 801ACE78
  c->lr=0x801ACE80u; f_80004364(c); // 801ACE7C
  c->r[3]=0u+0x802D0000u; // 801ACE80
  c->r[0]=0u+0x00000000u; // 801ACE84
  c->r[3]=c->r[3]+0x00002074u; // 801ACE88
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801ACE8C
  c->r[12]=R32(c->r[3]+0x00000050u); // 801ACE90
  W8(c->r[1]+0x00000117u,c->r[0]); // 801ACE94
  cmps(c,0,(int32_t)c->r[12],0); // 801ACE98
  W8(c->r[1]+0x00000106u,c->r[0]); // 801ACE9C
  if (crb(c,2)) { goto L_801ACEB4; } // 801ACEA0
  c->r[4]=c->r[1]+0x00000008u; // 801ACEA4
  c->r[3]=0u+0x00000003u; // 801ACEA8
  c->ctr=c->r[12]; // 801ACEAC
  if (true) { c->lr=0x801ACEB4u; dispatch(c,c->ctr); } // 801ACEB0
L_801ACEB4:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801ACEB4
  c->r[3]=0u+0x00000000u; // 801ACEB8
  c->r[0]=R32(c->r[1]+0x00000124u); // 801ACEBC
  c->lr=c->r[0]; // 801ACEC0
  c->r[1]=c->r[1]+0x00000120u; // 801ACEC4
  return; // 801ACEC8
}

// bta_dm_local_addr_cback
void f_801ACECC(Ctx* __restrict c) {
  trace_call(0x801ACECCu);
  c->r[4]=0u+0x802D0000u; // 801ACECC
  c->r[4]=c->r[4]+0x00002074u; // 801ACED0
  c->r[12]=R32(c->r[4]+0x00000050u); // 801ACED4
  cmps(c,0,(int32_t)c->r[12],0); // 801ACED8
  if (crb(c,2)) return; // 801ACEDC
  c->r[4]=c->r[3]|c->r[3]; // 801ACEE0
  c->r[3]=0u+0x00000000u; // 801ACEE4
  c->ctr=c->r[12]; // 801ACEE8
  if (true) { dispatch(c,c->ctr); return; } // 801ACEEC
  return; // 801ACEF0
}

// bta_dm_signal_strength
void f_801ACEF4(Ctx* __restrict c) {
  trace_call(0x801ACEF4u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801ACEF4
  cmps(c,0,(int32_t)c->r[0],0); // 801ACEF8
  if (crb(c,2)) { goto L_801ACF20; } // 801ACEFC
  c->r[4]=0u+0x802D0000u; // 801ACF00
  c->r[0]=R8(c->r[3]+0x00000008u); // 801ACF04
  c->r[4]=c->r[4]+0x00002074u; // 801ACF08
  W8(c->r[4]+0x0000006Cu,c->r[0]); // 801ACF0C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801ACF10
  c->r[3]=0u+0x00000000u; // 801ACF14
  W16(c->r[4]+0x00000070u,c->r[0]); // 801ACF18
  f_801ACF30(c); return; // 801ACF1C
L_801ACF20:;
  c->r[3]=0u+0x802D0000u; // 801ACF20
  c->r[3]=c->r[3]+0x00002074u; // 801ACF24
  c->r[3]=c->r[3]+0x00000054u; // 801ACF28
  f_801AB33C(c); return; // 801ACF2C
}

// bta_dm_signal_strength_timer_cback
void f_801ACF30(Ctx* __restrict c) {
  trace_call(0x801ACF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ACF30
  c->r[0]=c->lr; // 801ACF34
  c->r[3]=0u+0x802D0000u; // 801ACF38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ACF3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ACF40
  c->r[31]=c->r[3]+0x00002074u; // 801ACF44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ACF48
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ACF4C
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 801ACF50
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801ACF54
  if (crb(c,2)) { goto L_801ACF90; } // 801ACF58
  c->r[29]=0u+0x00000000u; // 801ACF5C
  c->r[30]=0u+0x801B0000u; // 801ACF60
  goto L_801ACF80; // 801ACF64
L_801ACF68:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801ACF68
  c->r[4]=c->r[30]+0xFFFFD330u; // 801ACF6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801ACF70
  c->r[3]=c->r[31]+c->r[0]; // 801ACF74
  c->lr=0x801ACF7Cu; f_801B22DC(c); // 801ACF78
  c->r[29]=c->r[29]+0x00000001u; // 801ACF7C
L_801ACF80:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 801ACF80
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801ACF84
  cmpu(c,0,c->r[3],c->r[0]); // 801ACF88
  if (crb(c,0)) { IRQCHK(c); goto L_801ACF68; } // 801ACF8C
L_801ACF90:;
  c->r[3]=0u+0x802D0000u; // 801ACF90
  c->r[30]=c->r[3]+0x00002074u; // 801ACF94
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801ACF98
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801ACF9C
  if (crb(c,2)) { goto L_801ACFD8; } // 801ACFA0
  c->r[29]=0u+0x00000000u; // 801ACFA4
  c->r[31]=0u+0x801B0000u; // 801ACFA8
  goto L_801ACFC8; // 801ACFAC
L_801ACFB0:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801ACFB0
  c->r[4]=c->r[31]+0xFFFFD39Cu; // 801ACFB4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801ACFB8
  c->r[3]=c->r[30]+c->r[0]; // 801ACFBC
  c->lr=0x801ACFC4u; f_801B2418(c); // 801ACFC0
  c->r[29]=c->r[29]+0x00000001u; // 801ACFC4
L_801ACFC8:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801ACFC8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801ACFCC
  cmpu(c,0,c->r[3],c->r[0]); // 801ACFD0
  if (crb(c,0)) { IRQCHK(c); goto L_801ACFB0; } // 801ACFD4
L_801ACFD8:;
  c->r[7]=0u+0x802D0000u; // 801ACFD8
  c->r[7]=c->r[7]+0x00002074u; // 801ACFDC
  c->r[0]=R16(c->r[7]+0x00000070u); // 801ACFE0
  cmps(c,0,(int32_t)c->r[0],0); // 801ACFE4
  if (crb(c,2)) { goto L_801AD008; } // 801ACFE8
  c->r[6]=0u+0x801B0000u; // 801ACFEC
  c->r[3]=c->r[7]+0x00000054u; // 801ACFF0
  c->r[6]=c->r[6]+0xFFFFCF30u; // 801ACFF4
  c->r[4]=0u+0x00000000u; // 801ACFF8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 801ACFFC
  W32(c->r[7]+0x0000005Cu,c->r[6]); // 801AD000
  c->lr=0x801AD008u; f_801AB31C(c); // 801AD004
L_801AD008:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD008
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD00C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD010
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD014
  c->lr=c->r[0]; // 801AD018
  c->r[1]=c->r[1]+0x00000020u; // 801AD01C
  return; // 801AD020
}

// bta_dm_acl_change_cback
void f_801AD024(Ctx* __restrict c) {
  trace_call(0x801AD024u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD024
  c->r[0]=c->lr; // 801AD028
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD02C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD030
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD034
  c->r[30]=c->r[7]|c->r[7]; // 801AD038
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD03C
  c->r[29]=c->r[3]|c->r[3]; // 801AD040
  c->r[3]=0u+0x00000012u; // 801AD044
  c->lr=0x801AD04Cu; f_801A7A70(c); // 801AD048
  cmps(c,0,(int32_t)c->r[3],0); // 801AD04C
  c->r[31]=c->r[3]|c->r[3]; // 801AD050
  if (crb(c,2)) { goto L_801AD078; } // 801AD054
  c->r[4]=c->r[29]|c->r[29]; // 801AD058
  c->r[3]=c->r[3]+0x0000000Bu; // 801AD05C
  c->lr=0x801AD064u; f_801AAE54(c); // 801AD060
  W8(c->r[31]+0x0000000Au,c->r[30]); // 801AD064
  c->r[0]=0u+0x00000105u; // 801AD068
  c->r[3]=c->r[31]|c->r[31]; // 801AD06C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801AD070
  c->lr=0x801AD078u; f_801AB300(c); // 801AD074
L_801AD078:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD078
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD07C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD080
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD084
  c->lr=c->r[0]; // 801AD088
  c->r[1]=c->r[1]+0x00000020u; // 801AD08C
  return; // 801AD090
}

// bta_dm_acl_change
void f_801AD094(Ctx* __restrict c) {
  trace_call(0x801AD094u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD094
  c->r[0]=c->lr; // 801AD098
  W32(c->r[1]+0x00000134u,c->r[0]); // 801AD09C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801AD0A0
  c->r[31]=c->r[3]+0x0000000Bu; // 801AD0A4
  W32(c->r[1]+0x00000128u,c->r[30]); // 801AD0A8
  W32(c->r[1]+0x00000124u,c->r[29]); // 801AD0AC
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801AD0B0
  cmps(c,0,(int32_t)c->r[0],0); // 801AD0B4
  if (crb(c,2)) { goto L_801AD178; } // 801AD0B8
  c->r[3]=0u+0x802D0000u; // 801AD0BC
  c->r[29]=0u+0x00000000u; // 801AD0C0
  c->r[30]=c->r[3]+0x00002074u; // 801AD0C4
  goto L_801AD0EC; // 801AD0C8
L_801AD0CC:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AD0CC
  c->r[4]=c->r[31]|c->r[31]; // 801AD0D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AD0D4
  c->r[3]=c->r[30]+c->r[0]; // 801AD0D8
  c->lr=0x801AD0E0u; f_801AAE88(c); // 801AD0DC
  cmps(c,0,(int32_t)c->r[3],0); // 801AD0E0
  if (crb(c,2)) { goto L_801AD0FC; } // 801AD0E4
  c->r[29]=c->r[29]+0x00000001u; // 801AD0E8
L_801AD0EC:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801AD0EC
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AD0F0
  cmpu(c,0,c->r[3],c->r[0]); // 801AD0F4
  if (crb(c,0)) { IRQCHK(c); goto L_801AD0CC; } // 801AD0F8
L_801AD0FC:;
  c->r[30]=0u+0x802D0000u; // 801AD0FC
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AD100
  c->r[30]=c->r[30]+0x00002074u; // 801AD104
  c->r[3]=R8(c->r[30]+0x0000004Du); // 801AD108
  cmpu(c,0,c->r[0],c->r[3]); // 801AD10C
  if (!crb(c,2)) { goto L_801AD130; } // 801AD110
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 801AD114
  c->r[4]=c->r[31]|c->r[31]; // 801AD118
  c->r[3]=c->r[30]+c->r[0]; // 801AD11C
  c->lr=0x801AD124u; f_801AAE54(c); // 801AD120
  c->r[3]=R8(c->r[30]+0x0000004Du); // 801AD124
  c->r[0]=c->r[3]+0x00000001u; // 801AD128
  W8(c->r[30]+0x0000004Du,c->r[0]); // 801AD12C
L_801AD130:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AD130
  c->r[30]=0u+0x802D0000u; // 801AD134
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AD138
  c->r[3]=0u+0x00000001u; // 801AD13C
  c->r[30]=c->r[30]+0x00002074u; // 801AD140
  c->r[0]=0u+0x00000000u; // 801AD144
  c->r[5]=c->r[30]+c->r[4]; // 801AD148
  W8(c->r[5]+0x00000006u,c->r[3]); // 801AD14C
  c->r[4]=c->r[31]|c->r[31]; // 801AD150
  c->r[3]=c->r[1]+0x00000008u; // 801AD154
  W8(c->r[5]+0x00000007u,c->r[0]); // 801AD158
  c->lr=0x801AD160u; f_801AAE54(c); // 801AD15C
  c->r[12]=R32(c->r[30]+0x00000050u); // 801AD160
  c->r[4]=c->r[1]+0x00000008u; // 801AD164
  c->r[3]=0u+0x00000005u; // 801AD168
  c->ctr=c->r[12]; // 801AD16C
  if (true) { c->lr=0x801AD174u; dispatch(c,c->ctr); } // 801AD170
  goto L_801AD2F8; // 801AD174
L_801AD178:;
  c->r[3]=0u+0x802D0000u; // 801AD178
  c->r[29]=0u+0x00000000u; // 801AD17C
  c->r[30]=c->r[3]+0x00002074u; // 801AD180
  goto L_801AD1EC; // 801AD184
L_801AD188:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AD188
  c->r[4]=c->r[31]|c->r[31]; // 801AD18C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AD190
  c->r[3]=c->r[30]+c->r[0]; // 801AD194
  c->lr=0x801AD19Cu; f_801AAE88(c); // 801AD198
  cmps(c,0,(int32_t)c->r[3],0); // 801AD19C
  if (!crb(c,2)) { goto L_801AD1E8; } // 801AD1A0
  c->r[3]=0u+0x802D0000u; // 801AD1A4
  c->r[30]=c->r[3]+0x00002074u; // 801AD1A8
  goto L_801AD1D4; // 801AD1AC
L_801AD1B0:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AD1B0
  c->r[5]=0u+0x0000000Bu; // 801AD1B4
  c->r[0]=c->r[3]+0x00000001u; // 801AD1B8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 801AD1BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AD1C0
  c->r[3]=c->r[30]+c->r[3]; // 801AD1C4
  c->r[4]=c->r[30]+c->r[0]; // 801AD1C8
  c->lr=0x801AD1D0u; f_80004364(c); // 801AD1CC
  c->r[29]=c->r[29]+0x00000001u; // 801AD1D0
L_801AD1D4:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801AD1D4
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AD1D8
  cmpu(c,0,c->r[3],c->r[0]); // 801AD1DC
  if (crb(c,0)) { IRQCHK(c); goto L_801AD1B0; } // 801AD1E0
  goto L_801AD1FC; // 801AD1E4
L_801AD1E8:;
  c->r[29]=c->r[29]+0x00000001u; // 801AD1E8
L_801AD1EC:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801AD1EC
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AD1F0
  cmpu(c,0,c->r[3],c->r[0]); // 801AD1F4
  if (crb(c,0)) { IRQCHK(c); goto L_801AD188; } // 801AD1F8
L_801AD1FC:;
  c->r[4]=0u+0x802D0000u; // 801AD1FC
  c->r[30]=0u+0x802D0000u; // 801AD200
  c->r[4]=c->r[4]+0x00002074u; // 801AD204
  c->r[30]=c->r[30]+0x00001FF8u; // 801AD208
  c->r[3]=R8(c->r[4]+0x0000004Du); // 801AD20C
  c->r[0]=R8(c->r[30]+0x00000078u); // 801AD210
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801AD214
  cmps(c,0,(int32_t)c->r[0],0); // 801AD218
  W8(c->r[4]+0x0000004Du,c->r[3]); // 801AD21C
  if (crb(c,2)) { goto L_801AD27C; } // 801AD220
  c->r[4]=c->r[31]|c->r[31]; // 801AD224
  c->r[3]=c->r[30]+0x0000001Au; // 801AD228
  c->lr=0x801AD230u; f_801AAE88(c); // 801AD22C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD230
  if (!crb(c,2)) { goto L_801AD27C; } // 801AD234
  c->r[0]=R8(c->r[30]+0x00000079u); // 801AD238
  c->r[3]=0u+0x00000000u; // 801AD23C
  W8(c->r[30]+0x00000078u,c->r[3]); // 801AD240
  cmps(c,0,(int32_t)c->r[0],0); // 801AD244
  if (crb(c,2)) { goto L_801AD27C; } // 801AD248
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AD24C
  cmpu(c,0,c->r[0],0x00000004u); // 801AD250
  if (crb(c,0)) { goto L_801AD268; } // 801AD254
  c->r[4]=0u+0x80240000u; // 801AD258
  c->r[3]=0u+0x00000503u; // 801AD25C
  c->r[4]=c->r[4]+0x00004280u; // 801AD260
  c->lr=0x801AD268u; f_801AA7C0(c); // 801AD264
L_801AD268:;
  c->r[3]=0u+0x802D0000u; // 801AD268
  c->r[3]=c->r[3]+0x00001FF8u; // 801AD26C
  c->r[3]=c->r[3]+0x00000040u; // 801AD270
  c->lr=0x801AD278u; f_801AB33C(c); // 801AD274
  c->lr=0x801AD27Cu; f_801AC790(c); // 801AD278
L_801AD27C:;
  c->r[30]=0u+0x802D0000u; // 801AD27C
  c->r[30]=c->r[30]+0x00002074u; // 801AD280
  c->r[0]=R8(c->r[30]+0x00000072u); // 801AD284
  cmps(c,0,(int32_t)c->r[0],0); // 801AD288
  if (crb(c,2)) { goto L_801AD2C8; } // 801AD28C
  c->lr=0x801AD294u; f_801B1C2C(c); // 801AD290
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801AD294
  if (!crb(c,2)) { goto L_801AD2C8; } // 801AD298
  c->r[0]=0u+0x00000000u; // 801AD29C
  c->r[3]=c->r[30]+0x00000074u; // 801AD2A0
  W8(c->r[30]+0x00000072u,c->r[0]); // 801AD2A4
  c->lr=0x801AD2ACu; f_801AB33C(c); // 801AD2A8
  c->r[5]=0u+0x801B0000u; // 801AD2AC
  c->r[3]=c->r[30]+0x00000074u; // 801AD2B0
  c->r[5]=c->r[5]+0xFFFFD314u; // 801AD2B4
  c->r[4]=0u+0x00000000u; // 801AD2B8
  W32(c->r[30]+0x0000007Cu,c->r[5]); // 801AD2BC
  c->r[5]=0u+0x000003E8u; // 801AD2C0
  c->lr=0x801AD2C8u; f_801AB31C(c); // 801AD2C4
L_801AD2C8:;
  c->r[4]=c->r[31]|c->r[31]; // 801AD2C8
  c->r[3]=c->r[1]+0x00000008u; // 801AD2CC
  c->lr=0x801AD2D4u; f_801AAE54(c); // 801AD2D0
  c->lr=0x801AD2D8u; f_801B1C88(c); // 801AD2D4
  c->r[5]=0u+0x802D0000u; // 801AD2D8
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801AD2DC
  c->r[5]=c->r[5]+0x00002074u; // 801AD2E0
  c->r[4]=c->r[1]+0x00000008u; // 801AD2E4
  c->r[12]=R32(c->r[5]+0x00000050u); // 801AD2E8
  c->r[3]=0u+0x00000006u; // 801AD2EC
  c->ctr=c->r[12]; // 801AD2F0
  if (true) { c->lr=0x801AD2F8u; dispatch(c,c->ctr); } // 801AD2F4
L_801AD2F8:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801AD2F8
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801AD2FC
  c->r[30]=R32(c->r[1]+0x00000128u); // 801AD300
  c->r[29]=R32(c->r[1]+0x00000124u); // 801AD304
  c->lr=c->r[0]; // 801AD308
  c->r[1]=c->r[1]+0x00000130u; // 801AD30C
  return; // 801AD310
}

// bta_dm_disable_conn_down_timer_cback
void f_801AD314(Ctx* __restrict c) {
  trace_call(0x801AD314u);
  c->r[5]=0u+0x802D0000u; // 801AD314
  c->r[3]=0u+0x00000001u; // 801AD318
  c->r[5]=c->r[5]+0x00002074u; // 801AD31C
  c->r[4]=0u+0x00000000u; // 801AD320
  c->r[12]=R32(c->r[5]+0x00000050u); // 801AD324
  c->ctr=c->r[12]; // 801AD328
  if (true) { dispatch(c,c->ctr); return; } // 801AD32C
}

// bta_dm_rssi_cback
void f_801AD330(Ctx* __restrict c) {
  trace_call(0x801AD330u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD330
  c->r[0]=c->lr; // 801AD334
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD338
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD33C
  c->r[31]=c->r[3]|c->r[3]; // 801AD340
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AD344
  cmps(c,0,(int32_t)c->r[0],0); // 801AD348
  if (!crb(c,2)) { goto L_801AD388; } // 801AD34C
  c->r[3]=c->r[1]+0x00000008u; // 801AD350
  c->r[4]=c->r[31]+0x00000003u; // 801AD354
  c->lr=0x801AD35Cu; f_801AAE54(c); // 801AD358
  c->r[0]=0u+0x00000001u; // 801AD35C
  c->r[3]=0u+0x802D0000u; // 801AD360
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AD364
  c->r[3]=c->r[3]+0x00002074u; // 801AD368
  c->r[12]=R32(c->r[3]+0x00000050u); // 801AD36C
  c->r[4]=c->r[1]+0x00000008u; // 801AD370
  c->r[0]=R8(c->r[31]+0x00000002u); // 801AD374
  c->r[3]=0u+0x00000007u; // 801AD378
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801AD37C
  c->ctr=c->r[12]; // 801AD380
  if (true) { c->lr=0x801AD388u; dispatch(c,c->ctr); } // 801AD384
L_801AD388:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD388
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD38C
  c->lr=c->r[0]; // 801AD390
  c->r[1]=c->r[1]+0x00000020u; // 801AD394
  return; // 801AD398
}

// bta_dm_link_quality_cback
void f_801AD39C(Ctx* __restrict c) {
  trace_call(0x801AD39Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD39C
  c->r[0]=c->lr; // 801AD3A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD3A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD3A8
  c->r[31]=c->r[3]|c->r[3]; // 801AD3AC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AD3B0
  cmps(c,0,(int32_t)c->r[0],0); // 801AD3B4
  if (!crb(c,2)) { goto L_801AD3F4; } // 801AD3B8
  c->r[3]=c->r[1]+0x00000008u; // 801AD3BC
  c->r[4]=c->r[31]+0x00000003u; // 801AD3C0
  c->lr=0x801AD3C8u; f_801AAE54(c); // 801AD3C4
  c->r[0]=0u+0x00000002u; // 801AD3C8
  c->r[3]=0u+0x802D0000u; // 801AD3CC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AD3D0
  c->r[3]=c->r[3]+0x00002074u; // 801AD3D4
  c->r[12]=R32(c->r[3]+0x00000050u); // 801AD3D8
  c->r[4]=c->r[1]+0x00000008u; // 801AD3DC
  c->r[0]=R8(c->r[31]+0x00000002u); // 801AD3E0
  c->r[3]=0u+0x00000007u; // 801AD3E4
  W8(c->r[1]+0x00000010u,c->r[0]); // 801AD3E8
  c->ctr=c->r[12]; // 801AD3EC
  if (true) { c->lr=0x801AD3F4u; dispatch(c,c->ctr); } // 801AD3F0
L_801AD3F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD3F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD3F8
  c->lr=c->r[0]; // 801AD3FC
  c->r[1]=c->r[1]+0x00000020u; // 801AD400
  return; // 801AD404
}

// bta_dm_l2cap_server_compress_cback
void f_801AD408(Ctx* __restrict c) {
  trace_call(0x801AD408u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD408
  c->r[0]=c->lr; // 801AD40C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AD410
  c->r[11]=c->r[1]+0x00000030u; // 801AD414
  c->lr=0x801AD41Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD418
  c->r[31]=0u+0x802D0000u; // 801AD41C
  c->r[27]=R32(c->r[1]+0x00000038u); // 801AD420
  c->r[31]=c->r[31]+0x00001FC8u; // 801AD424
  c->r[25]=c->r[3]|c->r[3]; // 801AD428
  c->r[26]=c->r[10]|c->r[10]; // 801AD42C
  c->r[29]=0u+0x00000000u; // 801AD430
  c->r[30]=c->r[31]|c->r[31]; // 801AD434
  c->r[28]=0u+0x00000000u; // 801AD438
L_801AD43C:;
  c->r[0]=R8(c->r[31]+0x00000008u); // 801AD43C
  cmpu(c,0,c->r[0],0x00000001u); // 801AD440
  if (!crb(c,2)) { goto L_801AD4BC; } // 801AD444
  c->r[3]=c->r[30]|c->r[30]; // 801AD448
  c->r[4]=c->r[25]|c->r[25]; // 801AD44C
  c->lr=0x801AD454u; f_801AAE88(c); // 801AD450
  cmps(c,0,(int32_t)c->r[3],0); // 801AD454
  if (!crb(c,2)) { goto L_801AD4BC; } // 801AD458
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AD45C
  cmpu(c,0,c->r[0],0x00000004u); // 801AD460
  if (crb(c,0)) { goto L_801AD490; } // 801AD464
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801AD468
  c->r[5]=0u+0x802D0000u; // 801AD46C
  c->r[5]=c->r[5]+0x00001FC8u; // 801AD470
  c->r[4]=0u+0x80240000u; // 801AD474
  c->r[0]=c->r[0]+c->r[28]; // 801AD478
  c->r[3]=0u+0x00000503u; // 801AD47C
  c->r[5]=c->r[5]+c->r[0]; // 801AD480
  c->r[4]=c->r[4]+0x00004294u; // 801AD484
  c->r[5]=R8(c->r[5]+0x00000006u); // 801AD488
  c->lr=0x801AD490u; f_801AA7E0(c); // 801AD48C
L_801AD490:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801AD490
  c->r[3]=0u+0x802D0000u; // 801AD494
  c->r[3]=c->r[3]+0x00001FC8u; // 801AD498
  c->r[4]=c->r[26]|c->r[26]; // 801AD49C
  c->r[0]=c->r[0]+c->r[28]; // 801AD4A0
  c->r[5]=c->r[27]|c->r[27]; // 801AD4A4
  c->r[3]=c->r[3]+c->r[0]; // 801AD4A8
  c->r[3]=R8(c->r[3]+0x00000006u); // 801AD4AC
  c->lr=0x801AD4B4u; f_801A7520(c); // 801AD4B0
  c->r[29]=c->r[3]|c->r[3]; // 801AD4B4
  goto L_801AD4D0; // 801AD4B8
L_801AD4BC:;
  c->r[28]=c->r[28]+0x00000001u; // 801AD4BC
  c->r[30]=c->r[30]+0x00000009u; // 801AD4C0
  cmps(c,0,(int32_t)c->r[28],5); // 801AD4C4
  c->r[31]=c->r[31]+0x00000009u; // 801AD4C8
  if (crb(c,0)) { IRQCHK(c); goto L_801AD43C; } // 801AD4CC
L_801AD4D0:;
  c->r[11]=c->r[1]+0x00000030u; // 801AD4D0
  c->r[3]=c->r[29]|c->r[29]; // 801AD4D4
  c->lr=0x801AD4DCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AD4D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AD4DC
  c->lr=c->r[0]; // 801AD4E0
  c->r[1]=c->r[1]+0x00000030u; // 801AD4E4
  return; // 801AD4E8
}

// bta_dm_compress_cback
void f_801AD4EC(Ctx* __restrict c) {
  trace_call(0x801AD4ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD4EC
  c->r[0]=c->lr; // 801AD4F0
  cmps(c,0,(int32_t)c->r[3],0); // 801AD4F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD4F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AD4FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AD500
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AD504
  if (!crb(c,2)) { goto L_801AD660; } // 801AD508
  c->r[3]=R32(c->r[13]+0xFFFFAC6Cu); // 801AD50C
  c->r[7]=0u+0x00000001u; // 801AD510
  c->r[9]=R8(c->r[3]+0x00000001u); // 801AD514
  goto L_801AD650; // 801AD518
L_801AD51C:;
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 801AD51C
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 801AD520
  c->r[0]=c->r[0]-c->r[8]; // 801AD524
  c->r[8]=c->r[3]+c->r[0]; // 801AD528
  c->r[0]=R8(c->r[8]+0x00000001u); // 801AD52C
  cmpu(c,0,c->r[5],c->r[0]); // 801AD530
  if (crb(c,2)) { goto L_801AD540; } // 801AD534
  cmpu(c,0,c->r[0],0x000000FFu); // 801AD538
  if (!crb(c,2)) { goto L_801AD64C; } // 801AD53C
L_801AD540:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801AD540
  cmpu(c,0,c->r[4],c->r[0]); // 801AD544
  if (!crb(c,2)) { goto L_801AD64C; } // 801AD548
  c->r[0]=R8(c->r[8]+0x00000002u); // 801AD54C
  cmpu(c,0,c->r[0],0x00000001u); // 801AD550
  if (!crb(c,2)) { goto L_801AD64C; } // 801AD554
  c->r[8]=0u+0x802D0000u; // 801AD558
  c->r[11]=R8(c->r[3]+0x00000001u); // 801AD55C
  c->r[10]=R8(c->r[8]+0x00002178u); // 801AD560
  c->r[9]=c->r[8]+0x00002178u; // 801AD564
  c->r[31]=0u+0x00000000u; // 801AD568
  c->r[29]=0u+0x00000001u; // 801AD56C
  goto L_801AD5D0; // 801AD570
L_801AD574:;
  c->r[8]=rotl(c->r[29],0)&0x000000FFu; // 801AD574
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 801AD578
  c->r[0]=c->r[0]-c->r[8]; // 801AD57C
  c->r[12]=c->r[3]+c->r[0]; // 801AD580
  c->r[0]=R8(c->r[12]+0x00000002u); // 801AD584
  cmpu(c,0,c->r[0],0x00000002u); // 801AD588
  if (!crb(c,2)) { goto L_801AD5CC; } // 801AD58C
  c->r[30]=0u+0x00000000u; // 801AD590
  goto L_801AD5C0; // 801AD594
L_801AD598:;
  c->r[8]=rotl(c->r[30],0)&0x000000FFu; // 801AD598
  c->r[0]=rotl(c->r[30],3)&0x000007F8u; // 801AD59C
  c->r[8]=c->r[0]+c->r[8]; // 801AD5A0
  c->r[0]=R8(c->r[12]+0x00000000u); // 801AD5A4
  c->r[8]=c->r[9]+c->r[8]; // 801AD5A8
  c->r[8]=R8(c->r[8]+0x00000007u); // 801AD5AC
  cmpu(c,0,c->r[8],c->r[0]); // 801AD5B0
  if (!crb(c,2)) { goto L_801AD5BC; } // 801AD5B4
  c->r[31]=0u+0x00000001u; // 801AD5B8
L_801AD5BC:;
  c->r[30]=c->r[30]+0x00000001u; // 801AD5BC
L_801AD5C0:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801AD5C0
  cmpu(c,0,c->r[0],c->r[10]); // 801AD5C4
  if (crb(c,0)) { IRQCHK(c); goto L_801AD598; } // 801AD5C8
L_801AD5CC:;
  c->r[29]=c->r[29]+0x00000001u; // 801AD5CC
L_801AD5D0:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AD5D0
  cmpu(c,0,c->r[0],c->r[11]); // 801AD5D4
  if (!crb(c,1)) { IRQCHK(c); goto L_801AD574; } // 801AD5D8
  cmps(c,0,(int32_t)c->r[31],0); // 801AD5DC
  if (!crb(c,2)) { goto L_801AD708; } // 801AD5E0
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 801AD5E4
  c->r[30]=0u+0x802D0000u; // 801AD5E8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801AD5EC
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801AD5F0
  c->r[30]=c->r[30]+0x00001FC8u; // 801AD5F4
  c->r[29]=c->r[0]+c->r[3]; // 801AD5F8
  c->r[31]=c->r[30]+c->r[29]; // 801AD5FC
  W8(c->r[31]+0x00000007u,c->r[5]); // 801AD600
  c->r[3]=c->r[31]|c->r[31]; // 801AD604
  W8(c->r[31]+0x00000006u,c->r[4]); // 801AD608
  c->r[4]=c->r[6]|c->r[6]; // 801AD60C
  c->lr=0x801AD614u; f_801AAE54(c); // 801AD610
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AD614
  c->r[3]=0u+0x00000001u; // 801AD618
  W8(c->r[31]+0x00000008u,c->r[3]); // 801AD61C
  c->r[7]=c->r[31]|c->r[31]; // 801AD620
  cmpu(c,0,c->r[0],0x00000004u); // 801AD624
  if (crb(c,0)) { goto L_801AD708; } // 801AD628
  c->r[4]=0u+0x80240000u; // 801AD62C
  c->r[5]=R8(c->r[31]+0x00000007u); // 801AD630
  c->r[6]=R8(c->r[31]+0x00000006u); // 801AD634
  c->r[4]=c->r[4]+0x000042C4u; // 801AD638
  c->r[7]=R8(c->r[7]+0x00000008u); // 801AD63C
  c->r[3]=0u+0x00000503u; // 801AD640
  c->lr=0x801AD648u; f_801AA820(c); // 801AD644
  goto L_801AD708; // 801AD648
L_801AD64C:;
  c->r[7]=c->r[7]+0x00000001u; // 801AD64C
L_801AD650:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 801AD650
  cmpu(c,0,c->r[0],c->r[9]); // 801AD654
  if (!crb(c,1)) { IRQCHK(c); goto L_801AD51C; } // 801AD658
  goto L_801AD708; // 801AD65C
L_801AD660:;
  cmpu(c,0,c->r[3],0x00000001u); // 801AD660
  if (!crb(c,2)) { goto L_801AD708; } // 801AD664
  c->r[7]=R32(c->r[13]+0xFFFFAC6Cu); // 801AD668
  c->r[8]=0u+0x00000001u; // 801AD66C
  c->r[6]=R8(c->r[7]+0x00000001u); // 801AD670
  goto L_801AD6FC; // 801AD674
L_801AD678:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 801AD678
  c->r[0]=rotl(c->r[8],2)&0x000003FCu; // 801AD67C
  c->r[0]=c->r[0]-c->r[3]; // 801AD680
  c->r[3]=c->r[7]+c->r[0]; // 801AD684
  c->r[0]=R8(c->r[3]+0x00000001u); // 801AD688
  cmpu(c,0,c->r[5],c->r[0]); // 801AD68C
  if (crb(c,2)) { goto L_801AD69C; } // 801AD690
  cmpu(c,0,c->r[0],0x000000FFu); // 801AD694
  if (!crb(c,2)) { goto L_801AD6F8; } // 801AD698
L_801AD69C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AD69C
  cmpu(c,0,c->r[4],c->r[0]); // 801AD6A0
  if (!crb(c,2)) { goto L_801AD6F8; } // 801AD6A4
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 801AD6A8
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AD6AC
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801AD6B0
  c->r[3]=0u+0x802D0000u; // 801AD6B4
  cmpu(c,0,c->r[0],0x00000004u); // 801AD6B8
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801AD6BC
  c->r[0]=c->r[4]+c->r[5]; // 801AD6C0
  c->r[3]=c->r[3]+0x00001FC8u; // 801AD6C4
  c->r[3]=c->r[3]+c->r[0]; // 801AD6C8
  c->r[0]=0u+0x00000000u; // 801AD6CC
  W8(c->r[3]+0x00000008u,c->r[0]); // 801AD6D0
  if (crb(c,0)) { goto L_801AD708; } // 801AD6D4
  c->r[4]=0u+0x80240000u; // 801AD6D8
  c->r[5]=R8(c->r[3]+0x00000007u); // 801AD6DC
  c->r[6]=R8(c->r[3]+0x00000006u); // 801AD6E0
  c->r[4]=c->r[4]+0x00004300u; // 801AD6E4
  c->r[7]=R8(c->r[3]+0x00000008u); // 801AD6E8
  c->r[3]=0u+0x00000503u; // 801AD6EC
  c->lr=0x801AD6F4u; f_801AA820(c); // 801AD6F0
  goto L_801AD708; // 801AD6F4
L_801AD6F8:;
  c->r[8]=c->r[8]+0x00000001u; // 801AD6F8
L_801AD6FC:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801AD6FC
  cmpu(c,0,c->r[0],c->r[6]); // 801AD700
  if (!crb(c,1)) { IRQCHK(c); goto L_801AD678; } // 801AD704
L_801AD708:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD708
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AD70C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AD710
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AD714
  c->lr=c->r[0]; // 801AD718
  c->r[1]=c->r[1]+0x00000020u; // 801AD71C
  return; // 801AD720
}

// bta_dm_rm_cback
void f_801AD724(Ctx* __restrict c) {
  trace_call(0x801AD724u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD724
  c->r[0]=c->lr; // 801AD728
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AD72C
  c->r[11]=c->r[1]+0x00000020u; // 801AD730
  c->lr=0x801AD738u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AD734
  cmps(c,0,(int32_t)c->r[3],0); // 801AD738
  c->r[30]=c->r[4]|c->r[4]; // 801AD73C
  c->r[31]=c->r[5]|c->r[5]; // 801AD740
  c->r[26]=c->r[6]|c->r[6]; // 801AD744
  if (!crb(c,2)) { goto L_801AD814; } // 801AD748
  c->r[3]=0u+0x802D0000u; // 801AD74C
  c->r[27]=0u+0x00000000u; // 801AD750
  c->r[29]=c->r[3]+0x00002074u; // 801AD754
  goto L_801AD804; // 801AD758
L_801AD75C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801AD75C
  c->r[4]=c->r[26]|c->r[26]; // 801AD760
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AD764
  c->r[3]=c->r[29]+c->r[28]; // 801AD768
  c->lr=0x801AD770u; f_801AAE88(c); // 801AD76C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD770
  if (!crb(c,2)) { goto L_801AD800; } // 801AD774
  c->r[3]=c->r[29]+c->r[28]; // 801AD778
  c->r[0]=0u+0x00000001u; // 801AD77C
  W8(c->r[3]+0x00000006u,c->r[0]); // 801AD780
  c->r[7]=0u+0x00000001u; // 801AD784
  c->r[6]=R32(c->r[13]+0xFFFFAC68u); // 801AD788
  c->r[4]=R8(c->r[6]+0x00000001u); // 801AD78C
  goto L_801AD7F0; // 801AD790
L_801AD794:;
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 801AD794
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 801AD798
  c->r[5]=c->r[0]-c->r[3]; // 801AD79C
  c->r[3]=c->r[6]+c->r[5]; // 801AD7A0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801AD7A4
  cmpu(c,0,c->r[31],c->r[0]); // 801AD7A8
  if (crb(c,2)) { goto L_801AD7B8; } // 801AD7AC
  cmpu(c,0,c->r[0],0x000000FFu); // 801AD7B0
  if (!crb(c,2)) { goto L_801AD7EC; } // 801AD7B4
L_801AD7B8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AD7B8
  cmpu(c,0,c->r[30],c->r[0]); // 801AD7BC
  if (!crb(c,2)) { goto L_801AD7EC; } // 801AD7C0
  c->r[3]=0u+0x802D0000u; // 801AD7C4
  c->r[4]=c->r[6]+c->r[5]; // 801AD7C8
  c->r[3]=c->r[3]+0x00002074u; // 801AD7CC
  c->r[4]=R8(c->r[4]+0x00000002u); // 801AD7D0
  c->r[3]=c->r[3]+c->r[28]; // 801AD7D4
  c->r[0]=R8(c->r[3]+0x00000007u); // 801AD7D8
  cmpu(c,0,c->r[4],c->r[0]); // 801AD7DC
  if (!crb(c,1)) { goto L_801AD814; } // 801AD7E0
  W8(c->r[3]+0x00000007u,c->r[4]); // 801AD7E4
  goto L_801AD814; // 801AD7E8
L_801AD7EC:;
  c->r[7]=c->r[7]+0x00000001u; // 801AD7EC
L_801AD7F0:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 801AD7F0
  cmpu(c,0,c->r[0],c->r[4]); // 801AD7F4
  if (!crb(c,1)) { IRQCHK(c); goto L_801AD794; } // 801AD7F8
  goto L_801AD814; // 801AD7FC
L_801AD800:;
  c->r[27]=c->r[27]+0x00000001u; // 801AD800
L_801AD804:;
  c->r[0]=R8(c->r[29]+0x0000004Du); // 801AD804
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 801AD808
  cmpu(c,0,c->r[3],c->r[0]); // 801AD80C
  if (crb(c,0)) { IRQCHK(c); goto L_801AD75C; } // 801AD810
L_801AD814:;
  c->r[11]=c->r[1]+0x00000020u; // 801AD814
  c->lr=0x801AD81Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AD818
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AD81C
  c->lr=c->r[0]; // 801AD820
  c->r[1]=c->r[1]+0x00000020u; // 801AD824
  return; // 801AD828
}

// bta_dm_keep_acl
void f_801AD82C(Ctx* __restrict c) {
  trace_call(0x801AD82Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD82C
  c->r[0]=c->lr; // 801AD830
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD834
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD838
  c->r[4]=R16(c->r[3]+0x00000006u); // 801AD83C
  c->r[3]=0u+0x802D0000u; // 801AD840
  c->r[3]=c->r[3]+0x00002074u; // 801AD844
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 801AD848
  W8(c->r[3]+0x00000101u,c->r[4]); // 801AD84C
  if (crb(c,2)) { goto L_801AD880; } // 801AD850
  c->r[31]=0u+0x00010000u; // 801AD854
  c->r[3]=c->r[2]+0xFFFFAE60u; // 801AD858
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801AD85C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801AD860
  c->lr=0x801AD868u; f_801C3BD0(c); // 801AD864
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801AD868
  c->r[3]=0u+0x00000000u; // 801AD86C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801AD870
  c->r[5]=0u+0x00000001u; // 801AD874
  c->lr=0x801AD87Cu; f_801C3B08(c); // 801AD878
  goto L_801AD89C; // 801AD87C
L_801AD880:;
  c->r[3]=c->r[2]+0xFFFFAE60u; // 801AD880
  c->r[4]=0u+0x00000002u; // 801AD884
  c->lr=0x801AD88Cu; f_801C3BD0(c); // 801AD888
  c->r[3]=0u+0x00000000u; // 801AD88C
  c->r[4]=0u+0x00000002u; // 801AD890
  c->r[5]=0u+0x00000001u; // 801AD894
  c->lr=0x801AD89Cu; f_801C3B08(c); // 801AD898
L_801AD89C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD89C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD8A0
  c->lr=c->r[0]; // 801AD8A4
  c->r[1]=c->r[1]+0x00000010u; // 801AD8A8
  return; // 801AD8AC
}

// bta_dm_immediate_disable
void f_801AD8B0(Ctx* __restrict c) {
  trace_call(0x801AD8B0u);
  c->r[5]=0u+0x802D0000u; // 801AD8B0
  c->r[3]=0u+0x00000001u; // 801AD8B4
  c->r[5]=c->r[5]+0x00002074u; // 801AD8B8
  c->r[4]=0u+0x00000000u; // 801AD8BC
  c->r[12]=R32(c->r[5]+0x00000050u); // 801AD8C0
  c->ctr=c->r[12]; // 801AD8C4
  if (true) { dispatch(c,c->ctr); return; } // 801AD8C8
}

// bta_dm_reset_complete
void f_801AD8CC(Ctx* __restrict c) {
  trace_call(0x801AD8CCu);
  return; // 801AD8CC
}

// bta_dm_send_hci_reset
void f_801AD8D0(Ctx* __restrict c) {
  trace_call(0x801AD8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD8D0
  c->r[0]=c->lr; // 801AD8D4
  c->r[4]=0u+0x802D0000u; // 801AD8D8
  c->r[3]=0u+0x00000002u; // 801AD8DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD8E0
  c->r[0]=0u+0x00000001u; // 801AD8E4
  c->r[4]=c->r[4]+0x00001F38u; // 801AD8E8
  W8(c->r[4]+0x0000007Eu,c->r[0]); // 801AD8EC
  c->lr=0x801AD8F4u; f_801A7C10(c); // 801AD8F0
  cmps(c,0,(int32_t)c->r[3],0); // 801AD8F4
  if (crb(c,2)) { goto L_801AD904; } // 801AD8F8
  c->r[4]=0u+0x00000000u; // 801AD8FC
  c->lr=0x801AD904u; f_801BF234(c); // 801AD900
L_801AD904:;
  c->r[3]=0u+0x801B0000u; // 801AD904
  c->r[3]=c->r[3]+0xFFFFD8CCu; // 801AD908
  c->lr=0x801AD910u; f_801B331C(c); // 801AD90C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD910
  c->lr=c->r[0]; // 801AD914
  c->r[1]=c->r[1]+0x00000010u; // 801AD918
  return; // 801AD91C
}

// BTA_EnableBluetooth
void f_801AD920(Ctx* __restrict c) {
  trace_call(0x801AD920u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD920
  c->r[0]=c->lr; // 801AD924
  c->r[4]=0u+0x802D0000u; // 801AD928
  c->r[5]=0u+0x00000104u; // 801AD92C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD934
  c->r[31]=c->r[3]|c->r[3]; // 801AD938
  c->r[3]=c->r[4]+0x00002074u; // 801AD93C
  c->r[4]=0u+0x00000000u; // 801AD940
  c->lr=0x801AD948u; f_800046B4(c); // 801AD944
  c->lr=0x801AD94Cu; f_801A9100(c); // 801AD948
  c->r[3]=0u+0x00000001u; // 801AD94C
  c->r[4]=c->r[2]+0xFFFFAE30u; // 801AD950
  c->lr=0x801AD958u; f_801AB2EC(c); // 801AD954
  c->r[3]=0u+0x00000002u; // 801AD958
  c->r[4]=c->r[2]+0xFFFFAE38u; // 801AD95C
  c->lr=0x801AD964u; f_801AB2EC(c); // 801AD960
  c->lr=0x801AD968u; f_801A9110(c); // 801AD964
  c->r[3]=0u+0x0000000Cu; // 801AD968
  c->lr=0x801AD970u; f_801A7A70(c); // 801AD96C
  cmps(c,0,(int32_t)c->r[3],0); // 801AD970
  if (crb(c,2)) { goto L_801AD990; } // 801AD974
  c->r[0]=0u+0x00000100u; // 801AD978
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AD97C
  W32(c->r[3]+0x00000008u,c->r[31]); // 801AD980
  c->lr=0x801AD988u; f_801AB300(c); // 801AD984
  c->r[3]=0u+0x00000000u; // 801AD988
  goto L_801AD994; // 801AD98C
L_801AD990:;
  c->r[3]=0u+0x00000001u; // 801AD990
L_801AD994:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD994
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD998
  c->lr=c->r[0]; // 801AD99C
  c->r[1]=c->r[1]+0x00000010u; // 801AD9A0
  return; // 801AD9A4
}

// BTA_DisableBluetooth
void f_801AD9A8(Ctx* __restrict c) {
  trace_call(0x801AD9A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD9A8
  c->r[0]=c->lr; // 801AD9AC
  c->r[3]=0u+0x00000008u; // 801AD9B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD9B4
  c->lr=0x801AD9BCu; f_801A7A70(c); // 801AD9B8
  cmps(c,0,(int32_t)c->r[3],0); // 801AD9BC
  if (crb(c,2)) { goto L_801AD9D0; } // 801AD9C0
  c->r[0]=0u+0x00000101u; // 801AD9C4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AD9C8
  c->lr=0x801AD9D0u; f_801AB300(c); // 801AD9CC
L_801AD9D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD9D0
  c->lr=c->r[0]; // 801AD9D4
  c->r[1]=c->r[1]+0x00000010u; // 801AD9D8
  return; // 801AD9DC
}

// BTA_DmIsDeviceUp
void f_801AD9E0(Ctx* __restrict c) {
  trace_call(0x801AD9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD9E0
  c->r[0]=c->lr; // 801AD9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD9EC
  c->lr=0x801AD9F4u; f_801A9100(c); // 801AD9F0
  c->lr=0x801AD9F8u; f_801B33C4(c); // 801AD9F4
  c->r[31]=c->r[3]|c->r[3]; // 801AD9F8
  c->lr=0x801ADA00u; f_801A9110(c); // 801AD9FC
  c->r[3]=c->r[31]|c->r[31]; // 801ADA00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADA04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADA08
  c->lr=c->r[0]; // 801ADA0C
  c->r[1]=c->r[1]+0x00000010u; // 801ADA10
  return; // 801ADA14
}

// BTA_DmSetDeviceName
void f_801ADA18(Ctx* __restrict c) {
  trace_call(0x801ADA18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADA18
  c->r[0]=c->lr; // 801ADA1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADA20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADA24
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADA28
  c->r[30]=c->r[3]|c->r[3]; // 801ADA2C
  c->r[3]=0u+0x00000028u; // 801ADA30
  c->lr=0x801ADA38u; f_801A7A70(c); // 801ADA34
  cmps(c,0,(int32_t)c->r[3],0); // 801ADA38
  c->r[31]=c->r[3]|c->r[3]; // 801ADA3C
  if (crb(c,2)) { goto L_801ADA64; } // 801ADA40
  c->r[0]=0u+0x00000102u; // 801ADA44
  c->r[4]=c->r[30]|c->r[30]; // 801ADA48
  W16(c->r[3]+0x00000000u,c->r[0]); // 801ADA4C
  c->r[5]=0u+0x00000020u; // 801ADA50
  c->r[3]=c->r[3]+0x00000008u; // 801ADA54
  c->lr=0x801ADA5Cu; f_801DBA48(c); // 801ADA58
  c->r[3]=c->r[31]|c->r[31]; // 801ADA5C
  c->lr=0x801ADA64u; f_801AB300(c); // 801ADA60
L_801ADA64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADA64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADA68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADA6C
  c->lr=c->r[0]; // 801ADA70
  c->r[1]=c->r[1]+0x00000010u; // 801ADA74
  return; // 801ADA78
}

// BTA_DmSetVisibility
void f_801ADA7C(Ctx* __restrict c) {
  trace_call(0x801ADA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADA7C
  c->r[0]=c->lr; // 801ADA80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADA84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADA88
  c->r[31]=c->r[4]|c->r[4]; // 801ADA8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADA90
  c->r[30]=c->r[3]|c->r[3]; // 801ADA94
  c->r[3]=0u+0x00000110u; // 801ADA98
  c->lr=0x801ADAA0u; f_801A7A70(c); // 801ADA9C
  cmps(c,0,(int32_t)c->r[3],0); // 801ADAA0
  if (crb(c,2)) { goto L_801ADABC; } // 801ADAA4
  c->r[0]=0u+0x00000103u; // 801ADAA8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801ADAAC
  W8(c->r[3]+0x00000008u,c->r[30]); // 801ADAB0
  W8(c->r[3]+0x00000009u,c->r[31]); // 801ADAB4
  c->lr=0x801ADABCu; f_801AB300(c); // 801ADAB8
L_801ADABC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADAC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADAC4
  c->lr=c->r[0]; // 801ADAC8
  c->r[1]=c->r[1]+0x00000010u; // 801ADACC
  return; // 801ADAD0
}

// BTA_DmSearch
void f_801ADAD4(Ctx* __restrict c) {
  trace_call(0x801ADAD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADAD4
  c->r[0]=c->lr; // 801ADAD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADADC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADAE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ADAE4
  c->r[30]=c->r[5]|c->r[5]; // 801ADAE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ADAEC
  c->r[29]=c->r[4]|c->r[4]; // 801ADAF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801ADAF4
  c->r[28]=c->r[3]|c->r[3]; // 801ADAF8
  c->r[3]=0u+0x0000001Cu; // 801ADAFC
  c->lr=0x801ADB04u; f_801A7A70(c); // 801ADB00
  cmps(c,0,(int32_t)c->r[3],0); // 801ADB04
  c->r[31]=c->r[3]|c->r[3]; // 801ADB08
  if (crb(c,2)) { goto L_801ADB38; } // 801ADB0C
  c->r[0]=0u+0x00000200u; // 801ADB10
  c->r[4]=c->r[28]|c->r[28]; // 801ADB14
  W16(c->r[3]+0x00000000u,c->r[0]); // 801ADB18
  c->r[5]=0u+0x0000000Au; // 801ADB1C
  c->r[3]=c->r[3]+0x00000008u; // 801ADB20
  c->lr=0x801ADB28u; f_80004364(c); // 801ADB24
  W32(c->r[31]+0x00000014u,c->r[29]); // 801ADB28
  c->r[3]=c->r[31]|c->r[31]; // 801ADB2C
  W32(c->r[31]+0x00000018u,c->r[30]); // 801ADB30
  c->lr=0x801ADB38u; f_801AB300(c); // 801ADB34
L_801ADB38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADB38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ADB3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ADB40
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ADB44
  c->r[28]=R32(c->r[1]+0x00000010u); // 801ADB48
  c->lr=c->r[0]; // 801ADB4C
  c->r[1]=c->r[1]+0x00000020u; // 801ADB50
  return; // 801ADB54
}

// BTA_DmSearchCancel
void f_801ADB58(Ctx* __restrict c) {
  trace_call(0x801ADB58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADB58
  c->r[0]=c->lr; // 801ADB5C
  c->r[3]=0u+0x00000008u; // 801ADB60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADB64
  c->lr=0x801ADB6Cu; f_801A7A70(c); // 801ADB68
  cmps(c,0,(int32_t)c->r[3],0); // 801ADB6C
  if (crb(c,2)) { goto L_801ADB80; } // 801ADB70
  c->r[0]=0u+0x00000201u; // 801ADB74
  W16(c->r[3]+0x00000000u,c->r[0]); // 801ADB78
  c->lr=0x801ADB80u; f_801AB300(c); // 801ADB7C
L_801ADB80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADB80
  c->lr=c->r[0]; // 801ADB84
  c->r[1]=c->r[1]+0x00000010u; // 801ADB88
  return; // 801ADB8C
}

// BTA_DmPinReply
void f_801ADB90(Ctx* __restrict c) {
  trace_call(0x801ADB90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADB90
  c->r[0]=c->lr; // 801ADB94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADB98
  c->r[11]=c->r[1]+0x00000020u; // 801ADB9C
  c->lr=0x801ADBA4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ADBA0
  c->r[27]=c->r[3]|c->r[3]; // 801ADBA4
  c->r[28]=c->r[4]|c->r[4]; // 801ADBA8
  c->r[29]=c->r[5]|c->r[5]; // 801ADBAC
  c->r[30]=c->r[6]|c->r[6]; // 801ADBB0
  c->r[3]=0u+0x00000020u; // 801ADBB4
  c->lr=0x801ADBBCu; f_801A7A70(c); // 801ADBB8
  cmps(c,0,(int32_t)c->r[3],0); // 801ADBBC
  c->r[31]=c->r[3]|c->r[3]; // 801ADBC0
  if (crb(c,2)) { goto L_801ADC04; } // 801ADBC4
  c->r[0]=0u+0x00000107u; // 801ADBC8
  c->r[4]=c->r[27]|c->r[27]; // 801ADBCC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801ADBD0
  c->r[3]=c->r[3]+0x00000008u; // 801ADBD4
  c->lr=0x801ADBDCu; f_801AAE54(c); // 801ADBD8
  cmps(c,0,(int32_t)c->r[28],0); // 801ADBDC
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 801ADBE0
  if (crb(c,2)) { goto L_801ADBFC; } // 801ADBE4
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 801ADBE8
  c->r[4]=c->r[30]|c->r[30]; // 801ADBEC
  c->r[5]=c->r[29]|c->r[29]; // 801ADBF0
  c->r[3]=c->r[31]+0x00000010u; // 801ADBF4
  c->lr=0x801ADBFCu; f_80004364(c); // 801ADBF8
L_801ADBFC:;
  c->r[3]=c->r[31]|c->r[31]; // 801ADBFC
  c->lr=0x801ADC04u; f_801AB300(c); // 801ADC00
L_801ADC04:;
  c->r[11]=c->r[1]+0x00000020u; // 801ADC04
  c->lr=0x801ADC0Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ADC08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADC0C
  c->lr=c->r[0]; // 801ADC10
  c->r[1]=c->r[1]+0x00000020u; // 801ADC14
  return; // 801ADC18
}

// BTA_DmAddDevice
void f_801ADC1C(Ctx* __restrict c) {
  trace_call(0x801ADC1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADC1C
  c->r[0]=c->lr; // 801ADC20
  W32(c->r[1]+0x00000034u,c->r[0]); // 801ADC24
  c->r[11]=c->r[1]+0x00000030u; // 801ADC28
  c->lr=0x801ADC30u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ADC2C
  c->r[28]=c->r[3]|c->r[3]; // 801ADC30
  c->r[29]=c->r[4]|c->r[4]; // 801ADC34
  c->r[30]=c->r[5]|c->r[5]; // 801ADC38
  c->r[27]=c->r[6]|c->r[6]; // 801ADC3C
  c->r[3]=c->r[1]+0x00000008u; // 801ADC40
  c->r[31]=0u+0x00000000u; // 801ADC44
  c->r[4]=0u+0x00000000u; // 801ADC48
  c->r[5]=0u+0x00000008u; // 801ADC4C
  c->lr=0x801ADC54u; f_800046B4(c); // 801ADC50
  cmps(c,0,(int32_t)c->r[27],0); // 801ADC54
  if (crb(c,2)) { goto L_801ADCC0; } // 801ADC58
  c->r[7]=0u+0x80200000u; // 801ADC5C
  c->r[5]=c->r[1]+0x00000008u; // 801ADC60
  c->r[7]=c->r[7]+0xFFFFA500u; // 801ADC64
  c->r[3]=0u+0x00000001u; // 801ADC68
  goto L_801ADCAC; // 801ADC6C
L_801ADC70:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801ADC70
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801ADC74
  c->r[0]=c->r[30]&c->r[4]; cr0(c,c->r[0]); // 801ADC78
  if (crb(c,2)) { goto L_801ADCA8; } // 801ADC7C
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801ADC80
  c->r[30]=c->r[30]&~c->r[4]; // 801ADC84
  c->r[4]=R32(c->r[7]+c->r[0]); // 801ADC88
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 801ADC8C
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 801ADC90
  c->r[0]=c->r[4]-c->r[0]; // 801ADC94
  c->r[4]=R32(c->r[5]+c->r[6]); // 801ADC98
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801ADC9C
  c->r[0]=c->r[4]|c->r[0]; // 801ADCA0
  W32(c->r[5]+c->r[6],c->r[0]); // 801ADCA4
L_801ADCA8:;
  c->r[31]=c->r[31]+0x00000001u; // 801ADCA8
L_801ADCAC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ADCAC
  if (crb(c,2)) { goto L_801ADCC0; } // 801ADCB0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801ADCB4
  cmpu(c,0,c->r[0],0x00000017u); // 801ADCB8
  if (crb(c,0)) { IRQCHK(c); goto L_801ADC70; } // 801ADCBC
L_801ADCC0:;
  c->lr=0x801ADCC4u; f_801A9100(c); // 801ADCC0
  c->r[3]=c->r[28]|c->r[28]; // 801ADCC4
  c->r[8]=c->r[29]|c->r[29]; // 801ADCC8
  c->r[7]=c->r[1]+0x00000008u; // 801ADCCC
  c->r[4]=0u+0x00000000u; // 801ADCD0
  c->r[5]=0u+0x00000000u; // 801ADCD4
  c->r[6]=0u+0x00000000u; // 801ADCD8
  c->lr=0x801ADCE0u; f_801B2A64(c); // 801ADCDC
  c->r[28]=c->r[3]|c->r[3]; // 801ADCE0
  c->lr=0x801ADCE8u; f_801A9110(c); // 801ADCE4
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 801ADCE8
  c->r[11]=c->r[1]+0x00000030u; // 801ADCEC
  c->r[0]=cntlz(c->r[0]); // 801ADCF0
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801ADCF4
  c->lr=0x801ADCFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ADCF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801ADCFC
  c->lr=c->r[0]; // 801ADD00
  c->r[1]=c->r[1]+0x00000030u; // 801ADD04
  return; // 801ADD08
}

// BTA_DmRemoveDevice
void f_801ADD0C(Ctx* __restrict c) {
  trace_call(0x801ADD0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADD0C
  c->r[0]=c->lr; // 801ADD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADD14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADD18
  c->r[31]=c->r[3]|c->r[3]; // 801ADD1C
  c->lr=0x801ADD24u; f_801A9100(c); // 801ADD20
  c->r[3]=c->r[31]|c->r[31]; // 801ADD24
  c->lr=0x801ADD2Cu; f_801B2BEC(c); // 801ADD28
  c->r[31]=c->r[3]|c->r[3]; // 801ADD2C
  c->lr=0x801ADD34u; f_801A9110(c); // 801ADD30
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801ADD34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADD38
  c->r[0]=cntlz(c->r[0]); // 801ADD3C
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801ADD40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADD44
  c->lr=c->r[0]; // 801ADD48
  c->r[1]=c->r[1]+0x00000010u; // 801ADD4C
  return; // 801ADD50
}

// BTA_DmSendHciReset
void f_801ADD54(Ctx* __restrict c) {
  trace_call(0x801ADD54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADD54
  c->r[0]=c->lr; // 801ADD58
  c->r[3]=0u+0x00000008u; // 801ADD5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADD60
  c->lr=0x801ADD68u; f_801A7A70(c); // 801ADD64
  cmps(c,0,(int32_t)c->r[3],0); // 801ADD68
  if (crb(c,2)) { goto L_801ADD7C; } // 801ADD6C
  c->r[0]=0u+0x0000010Cu; // 801ADD70
  W16(c->r[3]+0x00000000u,c->r[0]); // 801ADD74
  c->lr=0x801ADD7Cu; f_801AB300(c); // 801ADD78
L_801ADD7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADD7C
  c->lr=c->r[0]; // 801ADD80
  c->r[1]=c->r[1]+0x00000010u; // 801ADD84
  return; // 801ADD88
}

// bta_dm_sm_execute
void f_801ADD8C(Ctx* __restrict c) {
  trace_call(0x801ADD8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADD8C
  c->r[0]=c->lr; // 801ADD90
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADD94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADD98
  c->r[31]=0u+0x80200000u; // 801ADD9C
  c->r[31]=c->r[31]+0xFFFFA578u; // 801ADDA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ADDA4
  c->r[30]=0u+0x80200000u; // 801ADDA8
  c->r[30]=c->r[30]+0xFFFFA5ACu; // 801ADDAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ADDB0
  c->r[29]=0u+0x00000000u; // 801ADDB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801ADDB8
  c->r[28]=c->r[3]|c->r[3]; // 801ADDBC
L_801ADDC0:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801ADDC0
  c->r[0]=c->r[29]+c->r[30]; // 801ADDC4
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801ADDC8
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801ADDCC
  c->r[3]=c->r[3]-c->r[4]; // 801ADDD0
  c->r[0]=R8(c->r[3]+c->r[0]); // 801ADDD4
  cmpu(c,0,c->r[0],0x0000000Du); // 801ADDD8
  if (crb(c,2)) { goto L_801ADE00; } // 801ADDDC
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801ADDE0
  c->r[3]=c->r[28]|c->r[28]; // 801ADDE4
  c->r[12]=R32(c->r[31]+c->r[0]); // 801ADDE8
  c->ctr=c->r[12]; // 801ADDEC
  if (true) { c->lr=0x801ADDF4u; dispatch(c,c->ctr); } // 801ADDF0
  c->r[29]=c->r[29]+0x00000001u; // 801ADDF4
  cmps(c,0,(int32_t)c->r[29],2); // 801ADDF8
  if (crb(c,0)) { IRQCHK(c); goto L_801ADDC0; } // 801ADDFC
L_801ADE00:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ADE00
  c->r[3]=0u+0x00000001u; // 801ADE04
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ADE08
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ADE0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801ADE10
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADE14
  c->lr=c->r[0]; // 801ADE18
  c->r[1]=c->r[1]+0x00000020u; // 801ADE1C
  return; // 801ADE20
}

// bta_dm_search_sm_execute
void f_801ADE24(Ctx* __restrict c) {
  trace_call(0x801ADE24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE24
  c->r[0]=c->lr; // 801ADE28
  c->r[7]=0u+0x802D0000u; // 801ADE2C
  c->r[5]=0u+0x80200000u; // 801ADE30
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ADE34
  c->r[7]=c->r[7]+0x00001FF8u; // 801ADE38
  c->r[5]=c->r[5]+0xFFFFA690u; // 801ADE3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ADE40
  c->r[31]=0u+0x80200000u; // 801ADE44
  c->r[31]=c->r[31]+0xFFFFA5D8u; // 801ADE48
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ADE4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ADE50
  c->r[29]=0u+0x00000000u; // 801ADE54
  W32(c->r[1]+0x00000010u,c->r[28]); // 801ADE58
  c->r[28]=c->r[3]|c->r[3]; // 801ADE5C
  c->r[6]=R16(c->r[7]+0x00000018u); // 801ADE60
  c->r[0]=R16(c->r[3]+0x00000000u); // 801ADE64
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801ADE68
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801ADE6C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801ADE70
  c->r[30]=R32(c->r[5]+c->r[6]); // 801ADE74
  c->r[0]=c->r[0]-c->r[4]; // 801ADE78
  c->r[3]=c->r[30]+c->r[0]; // 801ADE7C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801ADE80
  W16(c->r[7]+0x00000018u,c->r[0]); // 801ADE84
L_801ADE88:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801ADE88
  c->r[0]=c->r[29]+c->r[30]; // 801ADE8C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801ADE90
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801ADE94
  c->r[3]=c->r[3]-c->r[4]; // 801ADE98
  c->r[0]=R8(c->r[3]+c->r[0]); // 801ADE9C
  cmpu(c,0,c->r[0],0x00000012u); // 801ADEA0
  if (crb(c,2)) { goto L_801ADEC8; } // 801ADEA4
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801ADEA8
  c->r[3]=c->r[28]|c->r[28]; // 801ADEAC
  c->r[12]=R32(c->r[31]+c->r[0]); // 801ADEB0
  c->ctr=c->r[12]; // 801ADEB4
  if (true) { c->lr=0x801ADEBCu; dispatch(c,c->ctr); } // 801ADEB8
  c->r[29]=c->r[29]+0x00000001u; // 801ADEBC
  cmps(c,0,(int32_t)c->r[29],2); // 801ADEC0
  if (crb(c,0)) { IRQCHK(c); goto L_801ADE88; } // 801ADEC4
L_801ADEC8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ADEC8
  c->r[3]=0u+0x00000001u; // 801ADECC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ADED0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ADED4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801ADED8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ADEDC
  c->lr=c->r[0]; // 801ADEE0
  c->r[1]=c->r[1]+0x00000020u; // 801ADEE4
  return; // 801ADEE8
}

// bta_dm_init_pm
void f_801ADEEC(Ctx* __restrict c) {
  trace_call(0x801ADEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADEEC
  c->r[0]=c->lr; // 801ADEF0
  c->r[3]=0u+0x802D0000u; // 801ADEF4
  c->r[4]=0u+0x00000000u; // 801ADEF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADEFC
  c->r[3]=c->r[3]+0x00002178u; // 801ADF00
  c->r[5]=0u+0x0000002Eu; // 801ADF04
  c->lr=0x801ADF0Cu; f_800046B4(c); // 801ADF08
  c->r[3]=R32(c->r[13]+0xFFFFAC70u); // 801ADF0C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801ADF10
  cmps(c,0,(int32_t)c->r[0],0); // 801ADF14
  if (crb(c,2)) { goto L_801ADF44; } // 801ADF18
  c->r[3]=0u+0x801B0000u; // 801ADF1C
  c->r[3]=c->r[3]+0xFFFFDF6Cu; // 801ADF20
  c->lr=0x801ADF28u; f_801AAF48(c); // 801ADF24
  c->r[4]=0u+0x802D0000u; // 801ADF28
  c->r[5]=0u+0x801B0000u; // 801ADF2C
  c->r[4]=c->r[4]+0x00002074u; // 801ADF30
  c->r[3]=0u+0x00000003u; // 801ADF34
  c->r[4]=c->r[4]+0x00000095u; // 801ADF38
  c->r[5]=c->r[5]+0xFFFFE66Cu; // 801ADF3C
  c->lr=0x801ADF44u; f_801B66E0(c); // 801ADF40
L_801ADF44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADF44
  c->lr=c->r[0]; // 801ADF48
  c->r[1]=c->r[1]+0x00000010u; // 801ADF4C
  return; // 801ADF50
}

// bta_dm_disable_pm
void f_801ADF54(Ctx* __restrict c) {
  trace_call(0x801ADF54u);
  c->r[4]=0u+0x802D0000u; // 801ADF54
  c->r[3]=0u+0x00000004u; // 801ADF58
  c->r[4]=c->r[4]+0x00002074u; // 801ADF5C
  c->r[5]=0u+0x00000000u; // 801ADF60
  c->r[4]=c->r[4]+0x00000095u; // 801ADF64
  f_801B66E0(c); return; // 801ADF68
}

// bta_dm_pm_cback
void f_801ADF6C(Ctx* __restrict c) {
  trace_call(0x801ADF6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADF6C
  c->r[0]=c->lr; // 801ADF70
  W32(c->r[1]+0x00000044u,c->r[0]); // 801ADF74
  c->r[11]=c->r[1]+0x00000040u; // 801ADF78
  c->lr=0x801ADF80u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ADF7C
  c->r[25]=c->r[3]|c->r[3]; // 801ADF80
  c->r[26]=c->r[4]|c->r[4]; // 801ADF84
  c->r[27]=c->r[5]|c->r[5]; // 801ADF88
  c->r[28]=c->r[6]|c->r[6]; // 801ADF8C
  c->r[3]=c->r[1]+0x0000000Cu; // 801ADF90
  c->lr=0x801ADF98u; f_801B4178(c); // 801ADF94
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801ADF98
  if (!crb(c,2)) { goto L_801AE008; } // 801ADF9C
  c->r[0]=R16(c->r[1]+0x00000012u); // 801ADFA0
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ADFA4
  if (!crb(c,2)) { goto L_801AE008; } // 801ADFA8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801ADFAC
  cmpu(c,0,c->r[0],0x00000003u); // 801ADFB0
  if (!crb(c,0)) { goto L_801AE008; } // 801ADFB4
  cmpu(c,0,c->r[25],0x00000004u); // 801ADFB8
  if (!crb(c,2)) { goto L_801ADFE4; } // 801ADFBC
  c->r[5]=0u+0x80200000u; // 801ADFC0
  c->r[3]=c->r[28]|c->r[28]; // 801ADFC4
  c->r[5]=c->r[5]+0xFFFFA430u; // 801ADFC8
  c->r[4]=c->r[1]+0x00000008u; // 801ADFCC
  c->r[0]=R16(c->r[5]+0x00000004u); // 801ADFD0
  c->r[0]=c->r[0]&0x0000000Bu; cr0(c,c->r[0]); // 801ADFD4
  W16(c->r[1]+0x00000008u,c->r[0]); // 801ADFD8
  c->lr=0x801ADFE0u; f_801B1588(c); // 801ADFDC
  goto L_801AE008; // 801ADFE0
L_801ADFE4:;
  cmpu(c,0,c->r[25],0x00000005u); // 801ADFE4
  if (!crb(c,2)) { goto L_801AE008; } // 801ADFE8
  c->r[5]=0u+0x80200000u; // 801ADFEC
  c->r[3]=c->r[28]|c->r[28]; // 801ADFF0
  c->r[5]=c->r[5]+0xFFFFA430u; // 801ADFF4
  c->r[4]=c->r[1]+0x00000008u; // 801ADFF8
  c->r[0]=R16(c->r[5]+0x00000004u); // 801ADFFC
  W16(c->r[1]+0x00000008u,c->r[0]); // 801AE000
  c->lr=0x801AE008u; f_801B1588(c); // 801AE004
L_801AE008:;
  c->r[5]=R32(c->r[13]+0xFFFFAC70u); // 801AE008
  c->r[30]=0u+0x00000001u; // 801AE00C
  c->r[4]=R8(c->r[5]+0x00000001u); // 801AE010
  goto L_801AE04C; // 801AE014
L_801AE018:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801AE018
  c->r[0]=rotl(c->r[30],2)&0x000003FCu; // 801AE01C
  c->r[0]=c->r[0]-c->r[3]; // 801AE020
  c->r[3]=c->r[5]+c->r[0]; // 801AE024
  c->r[0]=R8(c->r[5]+c->r[0]); // 801AE028
  cmpu(c,0,c->r[26],c->r[0]); // 801AE02C
  if (!crb(c,2)) { goto L_801AE048; } // 801AE030
  c->r[0]=R8(c->r[3]+0x00000001u); // 801AE034
  cmpu(c,0,c->r[0],0x000000FFu); // 801AE038
  if (crb(c,2)) { goto L_801AE058; } // 801AE03C
  cmpu(c,0,c->r[27],c->r[0]); // 801AE040
  if (crb(c,2)) { goto L_801AE058; } // 801AE044
L_801AE048:;
  c->r[30]=c->r[30]+0x00000001u; // 801AE048
L_801AE04C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801AE04C
  cmpu(c,0,c->r[0],c->r[4]); // 801AE050
  if (!crb(c,1)) { IRQCHK(c); goto L_801AE018; } // 801AE054
L_801AE058:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 801AE058
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801AE05C
  cmpu(c,0,c->r[3],c->r[0]); // 801AE060
  if (crb(c,1)) { goto L_801AE2D4; } // 801AE064
  c->r[23]=0u+0x802D0000u; // 801AE068
  c->r[31]=0u+0x00000000u; // 801AE06C
  c->r[23]=c->r[23]+0x00002074u; // 801AE070
L_801AE074:;
  c->r[29]=rotl(c->r[31],5)&0x00001FE0u; // 801AE074
  c->r[24]=c->r[23]+c->r[29]; // 801AE078
  c->r[0]=R8(c->r[24]+0x000000B6u); // 801AE07C
  cmps(c,0,(int32_t)c->r[0],0); // 801AE080
  if (crb(c,2)) { goto L_801AE0B4; } // 801AE084
  c->r[4]=c->r[28]|c->r[28]; // 801AE088
  c->r[3]=c->r[24]+0x000000B0u; // 801AE08C
  c->lr=0x801AE094u; f_801AAE88(c); // 801AE090
  cmps(c,0,(int32_t)c->r[3],0); // 801AE094
  if (!crb(c,2)) { goto L_801AE0B4; } // 801AE098
  c->r[3]=c->r[24]|c->r[24]; // 801AE09C
  c->r[3]=c->r[3]+0x00000098u; // 801AE0A0
  c->lr=0x801AE0A8u; f_801AB33C(c); // 801AE0A4
  c->r[0]=0u+0x00000000u; // 801AE0A8
  W8(c->r[24]+0x000000B6u,c->r[0]); // 801AE0AC
  goto L_801AE0C0; // 801AE0B0
L_801AE0B4:;
  c->r[31]=c->r[31]+0x00000001u; // 801AE0B4
  cmpu(c,0,c->r[31],0x00000003u); // 801AE0B8
  if (crb(c,0)) { IRQCHK(c); goto L_801AE074; } // 801AE0BC
L_801AE0C0:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801AE0C0
  c->r[3]=rotl(c->r[30],2)&0x000003FCu; // 801AE0C4
  c->r[30]=c->r[3]-c->r[4]; // 801AE0C8
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 801AE0CC
  c->r[4]=R32(c->r[13]+0xFFFFAC74u); // 801AE0D0
  c->r[31]=rotl(c->r[25],3)&0x000007F8u; // 801AE0D4
  c->r[3]=c->r[0]+c->r[30]; // 801AE0D8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801AE0DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 801AE0E0
  c->r[0]=c->r[4]+c->r[0]; // 801AE0E4
  c->r[3]=c->r[0]+c->r[31]; // 801AE0E8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801AE0EC
  cmps(c,0,(int32_t)c->r[0],0); // 801AE0F0
  if (crb(c,2)) { goto L_801AE2D4; } // 801AE0F4
  c->r[23]=0u+0x802D0000u; // 801AE0F8
  c->r[29]=0u+0x00000000u; // 801AE0FC
  c->r[24]=c->r[23]+0x00002178u; // 801AE100
  goto L_801AE148; // 801AE104
L_801AE108:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AE108
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 801AE10C
  c->r[0]=c->r[0]+c->r[3]; // 801AE110
  c->r[3]=c->r[24]+c->r[0]; // 801AE114
  c->r[0]=R8(c->r[3]+0x00000007u); // 801AE118
  cmpu(c,0,c->r[26],c->r[0]); // 801AE11C
  if (!crb(c,2)) { goto L_801AE144; } // 801AE120
  c->r[0]=R8(c->r[3]+0x00000008u); // 801AE124
  cmpu(c,0,c->r[27],c->r[0]); // 801AE128
  if (!crb(c,2)) { goto L_801AE144; } // 801AE12C
  c->r[4]=c->r[28]|c->r[28]; // 801AE130
  c->r[3]=c->r[3]+0x00000001u; // 801AE134
  c->lr=0x801AE13Cu; f_801AAE88(c); // 801AE138
  cmps(c,0,(int32_t)c->r[3],0); // 801AE13C
  if (crb(c,2)) { goto L_801AE158; } // 801AE140
L_801AE144:;
  c->r[29]=c->r[29]+0x00000001u; // 801AE144
L_801AE148:;
  c->r[0]=R8(c->r[23]+0x00002178u); // 801AE148
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AE14C
  cmpu(c,0,c->r[3],c->r[0]); // 801AE150
  if (crb(c,0)) { IRQCHK(c); goto L_801AE108; } // 801AE154
L_801AE158:;
  c->r[0]=R32(c->r[13]+0xFFFFAC70u); // 801AE158
  c->r[4]=R32(c->r[13]+0xFFFFAC74u); // 801AE15C
  c->r[3]=c->r[0]+c->r[30]; // 801AE160
  c->r[0]=R8(c->r[3]+0x00000002u); // 801AE164
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 801AE168
  c->r[0]=c->r[4]+c->r[0]; // 801AE16C
  c->r[3]=c->r[0]+c->r[31]; // 801AE170
  c->r[0]=R8(c->r[3]+0x00000002u); // 801AE174
  cmpu(c,0,c->r[0],0x00000010u); // 801AE178
  if (!crb(c,2)) { goto L_801AE1EC; } // 801AE17C
  c->r[27]=0u+0x802D0000u; // 801AE180
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AE184
  c->r[0]=R8(c->r[27]+0x00002178u); // 801AE188
  cmpu(c,0,c->r[3],c->r[0]); // 801AE18C
  if (crb(c,2)) { goto L_801AE258; } // 801AE190
  c->r[26]=c->r[27]+0x00002178u; // 801AE194
  goto L_801AE1D0; // 801AE198
L_801AE19C:;
  c->r[6]=rotl(c->r[29],0)&0x000000FFu; // 801AE19C
  c->r[4]=rotl(c->r[29],3)&0x000007F8u; // 801AE1A0
  c->r[3]=c->r[6]+0x00000001u; // 801AE1A4
  c->r[5]=0u+0x00000009u; // 801AE1A8
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801AE1AC
  c->r[4]=c->r[4]+c->r[6]; // 801AE1B0
  c->r[0]=c->r[0]+c->r[3]; // 801AE1B4
  c->r[3]=c->r[26]+c->r[4]; // 801AE1B8
  c->r[4]=c->r[26]+c->r[0]; // 801AE1BC
  c->r[3]=c->r[3]+0x00000001u; // 801AE1C0
  c->r[4]=c->r[4]+0x00000001u; // 801AE1C4
  c->lr=0x801AE1CCu; f_80004364(c); // 801AE1C8
  c->r[29]=c->r[29]+0x00000001u; // 801AE1CC
L_801AE1D0:;
  c->r[3]=R8(c->r[27]+0x00002178u); // 801AE1D0
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AE1D4
  cmpu(c,0,c->r[0],c->r[3]); // 801AE1D8
  if (crb(c,0)) { IRQCHK(c); goto L_801AE19C; } // 801AE1DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801AE1E0
  W8(c->r[27]+0x00002178u,c->r[0]); // 801AE1E4
  goto L_801AE258; // 801AE1E8
L_801AE1EC:;
  c->r[30]=0u+0x802D0000u; // 801AE1EC
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801AE1F0
  c->r[0]=R8(c->r[30]+0x00002178u); // 801AE1F4
  cmpu(c,0,c->r[4],c->r[0]); // 801AE1F8
  if (!crb(c,2)) { goto L_801AE258; } // 801AE1FC
  cmpu(c,0,c->r[0],0x00000005u); // 801AE200
  if (!crb(c,2)) { goto L_801AE228; } // 801AE204
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AE208
  cmpu(c,0,c->r[0],0x00000002u); // 801AE20C
  if (crb(c,0)) { goto L_801AE2D4; } // 801AE210
  c->r[4]=0u+0x80240000u; // 801AE214
  c->r[3]=0u+0x00000501u; // 801AE218
  c->r[4]=c->r[4]+0x00004340u; // 801AE21C
  c->lr=0x801AE224u; f_801AA7C0(c); // 801AE220
  goto L_801AE2D4; // 801AE224
L_801AE228:;
  c->r[3]=rotl(c->r[29],3)&0x000007F8u; // 801AE228
  c->r[0]=c->r[30]+0x00002178u; // 801AE22C
  c->r[3]=c->r[3]+c->r[4]; // 801AE230
  c->r[4]=c->r[28]|c->r[28]; // 801AE234
  c->r[5]=c->r[0]+c->r[3]; // 801AE238
  W8(c->r[5]+0x00000007u,c->r[26]); // 801AE23C
  c->r[3]=c->r[5]+0x00000001u; // 801AE240
  W8(c->r[5]+0x00000008u,c->r[27]); // 801AE244
  c->lr=0x801AE24Cu; f_801AAE54(c); // 801AE248
  c->r[3]=R8(c->r[30]+0x00002178u); // 801AE24C
  c->r[0]=c->r[3]+0x00000001u; // 801AE250
  W8(c->r[30]+0x00002178u,c->r[0]); // 801AE254
L_801AE258:;
  c->r[3]=0u+0x802D0000u; // 801AE258
  c->r[24]=0u+0x00000000u; // 801AE25C
  c->r[26]=c->r[3]+0x00002074u; // 801AE260
  goto L_801AE29C; // 801AE264
L_801AE268:;
  c->r[0]=rotl(c->r[24],0)&0x000000FFu; // 801AE268
  c->r[4]=c->r[28]|c->r[28]; // 801AE26C
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AE270
  c->r[3]=c->r[26]+c->r[23]; // 801AE274
  c->lr=0x801AE27Cu; f_801AAE88(c); // 801AE278
  cmps(c,0,(int32_t)c->r[3],0); // 801AE27C
  if (!crb(c,2)) { goto L_801AE298; } // 801AE280
  c->r[3]=c->r[26]+c->r[23]; // 801AE284
  c->r[0]=0u+0x00000000u; // 801AE288
  W8(c->r[3]+0x00000009u,c->r[0]); // 801AE28C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801AE290
  goto L_801AE2AC; // 801AE294
L_801AE298:;
  c->r[24]=c->r[24]+0x00000001u; // 801AE298
L_801AE29C:;
  c->r[0]=R8(c->r[26]+0x0000004Du); // 801AE29C
  c->r[3]=rotl(c->r[24],0)&0x000000FFu; // 801AE2A0
  cmpu(c,0,c->r[3],c->r[0]); // 801AE2A4
  if (crb(c,0)) { IRQCHK(c); goto L_801AE268; } // 801AE2A8
L_801AE2AC:;
  c->r[6]=0u+0x802D0000u; // 801AE2AC
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801AE2B0
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 801AE2B4
  c->r[3]=c->r[28]|c->r[28]; // 801AE2B8
  c->r[6]=c->r[6]+0x00002178u; // 801AE2BC
  c->r[4]=0u+0x00000000u; // 801AE2C0
  c->r[0]=c->r[0]+c->r[5]; // 801AE2C4
  c->r[5]=c->r[6]+c->r[0]; // 801AE2C8
  W8(c->r[5]+0x00000009u,c->r[25]); // 801AE2CC
  c->lr=0x801AE2D4u; f_801AE2EC(c); // 801AE2D0
L_801AE2D4:;
  c->r[11]=c->r[1]+0x00000040u; // 801AE2D4
  c->lr=0x801AE2DCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE2D8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AE2DC
  c->lr=c->r[0]; // 801AE2E0
  c->r[1]=c->r[1]+0x00000040u; // 801AE2E4
  return; // 801AE2E8
}

// bta_dm_pm_set_mode
void f_801AE2EC(Ctx* __restrict c) {
  trace_call(0x801AE2ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE2EC
  c->r[0]=c->lr; // 801AE2F0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801AE2F4
  c->r[11]=c->r[1]+0x00000050u; // 801AE2F8
  c->lr=0x801AE300u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AE2FC
  c->r[5]=0u+0x802D0000u; // 801AE300
  c->r[20]=c->r[3]|c->r[3]; // 801AE304
  c->r[28]=c->r[5]+0x00002074u; // 801AE308
  c->r[21]=c->r[4]|c->r[4]; // 801AE30C
  c->r[0]=R8(c->r[28]+0x0000004Du); // 801AE310
  c->r[27]=0u+0x00000000u; // 801AE314
  c->r[26]=0u+0x00000000u; // 801AE318
  c->r[25]=0u+0x00000000u; // 801AE31C
  cmps(c,0,(int32_t)c->r[0],0); // 801AE320
  c->r[24]=0u+0x00000000u; // 801AE324
  c->r[23]=0u+0x00000000u; // 801AE328
  c->r[22]=0u+0x00000000u; // 801AE32C
  if (crb(c,2)) { goto L_801AE654; } // 801AE330
  c->r[30]=0u+0x00000000u; // 801AE334
  goto L_801AE368; // 801AE338
L_801AE33C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801AE33C
  c->r[4]=c->r[20]|c->r[20]; // 801AE340
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AE344
  c->r[3]=c->r[28]+c->r[29]; // 801AE348
  c->lr=0x801AE350u; f_801AAE88(c); // 801AE34C
  cmps(c,0,(int32_t)c->r[3],0); // 801AE350
  if (!crb(c,2)) { goto L_801AE364; } // 801AE354
  c->r[24]=c->r[28]+c->r[29]; // 801AE358
  c->r[25]=R8(c->r[24]+0x0000000Au); // 801AE35C
  goto L_801AE378; // 801AE360
L_801AE364:;
  c->r[30]=c->r[30]+0x00000001u; // 801AE364
L_801AE368:;
  c->r[0]=R8(c->r[28]+0x0000004Du); // 801AE368
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801AE36C
  cmpu(c,0,c->r[3],c->r[0]); // 801AE370
  if (crb(c,0)) { IRQCHK(c); goto L_801AE33C; } // 801AE374
L_801AE378:;
  cmps(c,0,(int32_t)c->r[24],0); // 801AE378
  if (crb(c,2)) { goto L_801AE654; } // 801AE37C
  c->r[30]=0u+0x802D0000u; // 801AE380
  c->r[28]=0u+0x00000000u; // 801AE384
  c->r[31]=c->r[30]+0x00002178u; // 801AE388
  goto L_801AE4BC; // 801AE38C
L_801AE390:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801AE390
  c->r[0]=rotl(c->r[28],3)&0x000007F8u; // 801AE394
  c->r[29]=c->r[0]+c->r[3]; // 801AE398
  c->r[4]=c->r[20]|c->r[20]; // 801AE39C
  c->r[3]=c->r[31]+c->r[29]; // 801AE3A0
  c->r[3]=c->r[3]+0x00000001u; // 801AE3A4
  c->lr=0x801AE3ACu; f_801AAE88(c); // 801AE3A8
  cmps(c,0,(int32_t)c->r[3],0); // 801AE3AC
  if (!crb(c,2)) { goto L_801AE4B8; } // 801AE3B0
  c->r[7]=R32(c->r[13]+0xFFFFAC70u); // 801AE3B4
  c->r[8]=c->r[31]+c->r[29]; // 801AE3B8
  c->r[3]=R8(c->r[8]+0x00000008u); // 801AE3BC
  c->r[9]=0u+0x00000001u; // 801AE3C0
  c->r[6]=R8(c->r[7]+0x00000001u); // 801AE3C4
  c->r[4]=R8(c->r[8]+0x00000007u); // 801AE3C8
  goto L_801AE404; // 801AE3CC
L_801AE3D0:;
  c->r[5]=rotl(c->r[9],0)&0x000000FFu; // 801AE3D0
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 801AE3D4
  c->r[0]=c->r[0]-c->r[5]; // 801AE3D8
  c->r[5]=c->r[7]+c->r[0]; // 801AE3DC
  c->r[0]=R8(c->r[7]+c->r[0]); // 801AE3E0
  cmpu(c,0,c->r[0],c->r[4]); // 801AE3E4
  if (!crb(c,2)) { goto L_801AE400; } // 801AE3E8
  c->r[0]=R8(c->r[5]+0x00000001u); // 801AE3EC
  cmpu(c,0,c->r[0],0x000000FFu); // 801AE3F0
  if (crb(c,2)) { goto L_801AE410; } // 801AE3F4
  cmpu(c,0,c->r[0],c->r[3]); // 801AE3F8
  if (crb(c,2)) { goto L_801AE410; } // 801AE3FC
L_801AE400:;
  c->r[9]=c->r[9]+0x00000001u; // 801AE400
L_801AE404:;
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 801AE404
  cmpu(c,0,c->r[0],c->r[6]); // 801AE408
  if (!crb(c,1)) { IRQCHK(c); goto L_801AE3D0; } // 801AE40C
L_801AE410:;
  c->r[3]=rotl(c->r[9],0)&0x000000FFu; // 801AE410
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 801AE414
  c->r[3]=c->r[0]-c->r[3]; // 801AE418
  c->r[0]=R8(c->r[8]+0x00000009u); // 801AE41C
  c->r[4]=c->r[7]+c->r[3]; // 801AE420
  c->r[3]=R32(c->r[13]+0xFFFFAC74u); // 801AE424
  c->r[4]=R8(c->r[4]+0x00000002u); // 801AE428
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801AE42C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)74); // 801AE430
  c->r[5]=c->r[3]+c->r[4]; // 801AE434
  c->r[3]=c->r[5]+c->r[0]; // 801AE438
  c->r[0]=R8(c->r[5]+0x00000000u); // 801AE43C
  c->r[4]=R8(c->r[3]+0x00000002u); // 801AE440
  c->r[23]=c->r[23]|c->r[0]; // 801AE444
  c->r[0]=c->r[25]&c->r[4]; cr0(c,c->r[0]); // 801AE448
  if (!crb(c,2)) { goto L_801AE480; } // 801AE44C
  c->r[3]=c->r[31]+c->r[29]; // 801AE450
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801AE454
  c->r[3]=R8(c->r[3]+0x00000009u); // 801AE458
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801AE45C
  c->r[5]=c->r[5]+c->r[3]; // 801AE460
  c->r[3]=R8(c->r[5]+0x00000002u); // 801AE464
  cmpu(c,0,c->r[3],c->r[0]); // 801AE468
  c->r[22]=c->r[22]|c->r[3]; // 801AE46C
  if (!crb(c,1)) { goto L_801AE4B8; } // 801AE470
  c->r[26]=R16(c->r[5]+0x00000004u); // 801AE474
  c->r[27]=c->r[4]|c->r[4]; // 801AE478
  goto L_801AE4B8; // 801AE47C
L_801AE480:;
  c->r[3]=R8(c->r[3]+0x00000006u); // 801AE480
  c->r[0]=c->r[25]&c->r[3]; cr0(c,c->r[0]); // 801AE484
  if (!crb(c,2)) { goto L_801AE4B8; } // 801AE488
  c->r[4]=c->r[31]+c->r[29]; // 801AE48C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801AE490
  c->r[4]=R8(c->r[4]+0x00000009u); // 801AE494
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801AE498
  c->r[5]=c->r[5]+c->r[4]; // 801AE49C
  c->r[4]=R8(c->r[5]+0x00000006u); // 801AE4A0
  cmpu(c,0,c->r[4],c->r[0]); // 801AE4A4
  c->r[22]=c->r[22]|c->r[4]; // 801AE4A8
  if (!crb(c,1)) { goto L_801AE4B8; } // 801AE4AC
  c->r[27]=c->r[3]|c->r[3]; // 801AE4B0
  c->r[26]=R16(c->r[5]+0x00000008u); // 801AE4B4
L_801AE4B8:;
  c->r[28]=c->r[28]+0x00000001u; // 801AE4B8
L_801AE4BC:;
  c->r[0]=R8(c->r[30]+0x00002178u); // 801AE4BC
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801AE4C0
  cmpu(c,0,c->r[3],c->r[0]); // 801AE4C4
  if (crb(c,0)) { IRQCHK(c); goto L_801AE390; } // 801AE4C8
  c->r[0]=rotl(c->r[27],0)&0x00000003u; cr0(c,c->r[0]); // 801AE4CC
  if (crb(c,2)) { goto L_801AE4F4; } // 801AE4D0
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 801AE4D4
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801AE4D8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801AE4DC
  if (!crb(c,2)) { goto L_801AE4F4; } // 801AE4E0
  c->r[0]=c->r[23]&c->r[22]; // 801AE4E4
  c->r[27]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[27]); // 801AE4E8
  if (!crb(c,2)) { goto L_801AE4F4; } // 801AE4EC
  c->r[26]=0u+0x00000000u; // 801AE4F0
L_801AE4F4:;
  cmps(c,0,(int32_t)c->r[21],0); // 801AE4F4
  if (!crb(c,2)) { goto L_801AE598; } // 801AE4F8
  cmps(c,0,(int32_t)c->r[26],0); // 801AE4FC
  if (crb(c,2)) { goto L_801AE598; } // 801AE500
  c->r[21]=0u+0x802D0000u; // 801AE504
  c->r[0]=0u+0x00000003u; // 801AE508
  c->r[21]=c->r[21]+0x00002074u; // 801AE50C
  c->r[4]=0u+0x00000000u; // 801AE510
  c->ctr=c->r[0]; // 801AE514
L_801AE518:;
  c->r[22]=rotl(c->r[4],5)&0x00001FE0u; // 801AE518
  c->r[3]=c->r[21]+c->r[22]; // 801AE51C
  c->r[0]=R8(c->r[3]+0x000000B6u); // 801AE520
  cmps(c,0,(int32_t)c->r[0],0); // 801AE524
  if (!crb(c,2)) { goto L_801AE564; } // 801AE528
  c->r[0]=0u+0x00000001u; // 801AE52C
  c->r[4]=c->r[20]|c->r[20]; // 801AE530
  W8(c->r[3]+0x000000B6u,c->r[0]); // 801AE534
  c->r[3]=c->r[3]+0x000000B0u; // 801AE538
  c->lr=0x801AE540u; f_801AAE54(c); // 801AE53C
  c->r[4]=0u+0x801B0000u; // 801AE540
  c->r[3]=c->r[21]+c->r[22]; // 801AE544
  c->r[4]=c->r[4]+0xFFFFE6E4u; // 801AE548
  c->r[5]=c->r[26]|c->r[26]; // 801AE54C
  W32(c->r[3]+0x000000A0u,c->r[4]); // 801AE550
  c->r[3]=c->r[3]+0x00000098u; // 801AE554
  c->r[4]=0u+0x00000000u; // 801AE558
  c->lr=0x801AE560u; f_801AB31C(c); // 801AE55C
  goto L_801AE654; // 801AE560
L_801AE564:;
  c->r[4]=c->r[4]+0x00000001u; // 801AE564
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801AE568
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AE518; } // 801AE56C
  cmpu(c,0,c->r[0],0x00000003u); // 801AE570
  if (!crb(c,2)) { goto L_801AE598; } // 801AE574
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AE578
  cmpu(c,0,c->r[0],0x00000002u); // 801AE57C
  if (crb(c,0)) { goto L_801AE654; } // 801AE580
  c->r[4]=0u+0x80240000u; // 801AE584
  c->r[3]=0u+0x00000501u; // 801AE588
  c->r[4]=c->r[4]+0x0000436Cu; // 801AE58C
  c->lr=0x801AE594u; f_801AA7C0(c); // 801AE590
  goto L_801AE654; // 801AE594
L_801AE598:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 801AE598
  if (crb(c,2)) { goto L_801AE654; } // 801AE59C
  cmpu(c,0,c->r[0],0x00000001u); // 801AE5A0
  if (!crb(c,2)) { goto L_801AE5E8; } // 801AE5A4
  c->r[0]=0u+0x00000001u; // 801AE5A8
  c->r[3]=c->r[20]|c->r[20]; // 801AE5AC
  W8(c->r[24]+0x00000009u,c->r[0]); // 801AE5B0
  c->r[4]=c->r[1]+0x00000009u; // 801AE5B4
  c->lr=0x801AE5BCu; f_801B696C(c); // 801AE5B8
  c->r[0]=R8(c->r[1]+0x00000009u); // 801AE5BC
  cmpu(c,0,c->r[0],0x00000003u); // 801AE5C0
  if (crb(c,2)) { goto L_801AE654; } // 801AE5C4
  c->r[3]=0u+0x802D0000u; // 801AE5C8
  c->r[5]=R32(c->r[13]+0xFFFFAC78u); // 801AE5CC
  c->r[3]=c->r[3]+0x00002074u; // 801AE5D0
  c->r[4]=c->r[20]|c->r[20]; // 801AE5D4
  c->r[3]=R8(c->r[3]+0x00000095u); // 801AE5D8
  c->r[5]=c->r[5]+0x0000000Au; // 801AE5DC
  c->lr=0x801AE5E4u; f_801B679C(c); // 801AE5E0
  goto L_801AE654; // 801AE5E4
L_801AE5E8:;
  cmpu(c,0,c->r[0],0x00000002u); // 801AE5E8
  if (!crb(c,2)) { goto L_801AE62C; } // 801AE5EC
  c->r[0]=0u+0x00000002u; // 801AE5F0
  c->r[3]=c->r[20]|c->r[20]; // 801AE5F4
  W8(c->r[24]+0x00000009u,c->r[0]); // 801AE5F8
  c->r[4]=c->r[1]+0x00000008u; // 801AE5FC
  c->lr=0x801AE604u; f_801B696C(c); // 801AE600
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AE604
  cmpu(c,0,c->r[0],0x00000002u); // 801AE608
  if (crb(c,2)) { goto L_801AE654; } // 801AE60C
  c->r[3]=0u+0x802D0000u; // 801AE610
  c->r[5]=R32(c->r[13]+0xFFFFAC78u); // 801AE614
  c->r[3]=c->r[3]+0x00002074u; // 801AE618
  c->r[4]=c->r[20]|c->r[20]; // 801AE61C
  c->r[3]=R8(c->r[3]+0x00000095u); // 801AE620
  c->lr=0x801AE628u; f_801B679C(c); // 801AE624
  goto L_801AE654; // 801AE628
L_801AE62C:;
  cmpu(c,0,c->r[0],0x00000004u); // 801AE62C
  if (!crb(c,2)) { goto L_801AE654; } // 801AE630
  c->r[3]=0u+0x802D0000u; // 801AE634
  c->r[0]=0u+0x00000000u; // 801AE638
  c->r[3]=c->r[3]+0x00002074u; // 801AE63C
  W8(c->r[1]+0x00000014u,c->r[0]); // 801AE640
  c->r[3]=R8(c->r[3]+0x00000095u); // 801AE644
  c->r[4]=c->r[20]|c->r[20]; // 801AE648
  c->r[5]=c->r[1]+0x0000000Cu; // 801AE64C
  c->lr=0x801AE654u; f_801B679C(c); // 801AE650
L_801AE654:;
  c->r[11]=c->r[1]+0x00000050u; // 801AE654
  c->lr=0x801AE65Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE658
  c->r[0]=R32(c->r[1]+0x00000054u); // 801AE65C
  c->lr=c->r[0]; // 801AE660
  c->r[1]=c->r[1]+0x00000050u; // 801AE664
  return; // 801AE668
}

// bta_dm_pm_btm_cback
void f_801AE66C(Ctx* __restrict c) {
  trace_call(0x801AE66Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE66C
  c->r[0]=c->lr; // 801AE670
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE674
  c->r[11]=c->r[1]+0x00000020u; // 801AE678
  c->lr=0x801AE680u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AE67C
  c->r[27]=c->r[3]|c->r[3]; // 801AE680
  c->r[28]=c->r[4]|c->r[4]; // 801AE684
  c->r[29]=c->r[5]|c->r[5]; // 801AE688
  c->r[30]=c->r[6]|c->r[6]; // 801AE68C
  c->r[3]=0u+0x00000014u; // 801AE690
  c->lr=0x801AE698u; f_801A7A70(c); // 801AE694
  cmps(c,0,(int32_t)c->r[3],0); // 801AE698
  c->r[31]=c->r[3]|c->r[3]; // 801AE69C
  if (crb(c,2)) { goto L_801AE6CC; } // 801AE6A0
  c->r[0]=0u+0x00000109u; // 801AE6A4
  c->r[4]=c->r[27]|c->r[27]; // 801AE6A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801AE6AC
  W8(c->r[3]+0x0000000Eu,c->r[28]); // 801AE6B0
  W16(c->r[3]+0x00000010u,c->r[29]); // 801AE6B4
  W8(c->r[3]+0x00000012u,c->r[30]); // 801AE6B8
  c->r[3]=c->r[3]+0x00000008u; // 801AE6BC
  c->lr=0x801AE6C4u; f_801AAE54(c); // 801AE6C0
  c->r[3]=c->r[31]|c->r[31]; // 801AE6C4
  c->lr=0x801AE6CCu; f_801AB300(c); // 801AE6C8
L_801AE6CC:;
  c->r[11]=c->r[1]+0x00000020u; // 801AE6CC
  c->lr=0x801AE6D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE6D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE6D4
  c->lr=c->r[0]; // 801AE6D8
  c->r[1]=c->r[1]+0x00000020u; // 801AE6DC
  return; // 801AE6E0
}

// bta_dm_pm_timer_cback
void f_801AE6E4(Ctx* __restrict c) {
  trace_call(0x801AE6E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE6E4
  c->r[0]=c->lr; // 801AE6E8
  c->r[4]=0u+0x802D0000u; // 801AE6EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE6F0
  c->r[4]=c->r[4]+0x00002074u; // 801AE6F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE6F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AE6FC
  c->r[30]=0u+0x00000000u; // 801AE700
  c->r[0]=R8(c->r[4]+0x000000B6u); // 801AE704
  cmps(c,0,(int32_t)c->r[0],0); // 801AE708
  if (crb(c,2)) { goto L_801AE728; } // 801AE70C
  c->r[0]=c->r[4]+0x00000098u; // 801AE710
  cmpu(c,0,c->r[0],c->r[3]); // 801AE714
  if (!crb(c,2)) { goto L_801AE728; } // 801AE718
  c->r[0]=0u+0x00000000u; // 801AE71C
  W8(c->r[4]+0x000000B6u,c->r[0]); // 801AE720
  goto L_801AE77C; // 801AE724
L_801AE728:;
  c->r[0]=R8(c->r[4]+0x000000D6u); // 801AE728
  c->r[30]=0u+0x00000001u; // 801AE72C
  cmps(c,0,(int32_t)c->r[0],0); // 801AE730
  if (crb(c,2)) { goto L_801AE750; } // 801AE734
  c->r[0]=c->r[4]+0x000000B8u; // 801AE738
  cmpu(c,0,c->r[0],c->r[3]); // 801AE73C
  if (!crb(c,2)) { goto L_801AE750; } // 801AE740
  c->r[0]=0u+0x00000000u; // 801AE744
  W8(c->r[4]+0x000000D6u,c->r[0]); // 801AE748
  goto L_801AE77C; // 801AE74C
L_801AE750:;
  c->r[0]=R8(c->r[4]+0x000000F6u); // 801AE750
  c->r[30]=0u+0x00000002u; // 801AE754
  cmps(c,0,(int32_t)c->r[0],0); // 801AE758
  if (crb(c,2)) { goto L_801AE778; } // 801AE75C
  c->r[0]=c->r[4]+0x000000D8u; // 801AE760
  cmpu(c,0,c->r[0],c->r[3]); // 801AE764
  if (!crb(c,2)) { goto L_801AE778; } // 801AE768
  c->r[0]=0u+0x00000000u; // 801AE76C
  W8(c->r[4]+0x000000F6u,c->r[0]); // 801AE770
  goto L_801AE77C; // 801AE774
L_801AE778:;
  c->r[30]=0u+0x00000003u; // 801AE778
L_801AE77C:;
  cmpu(c,0,c->r[30],0x00000003u); // 801AE77C
  if (crb(c,2)) { goto L_801AE7C4; } // 801AE780
  c->r[3]=0u+0x0000000Eu; // 801AE784
  c->lr=0x801AE78Cu; f_801A7A70(c); // 801AE788
  cmps(c,0,(int32_t)c->r[3],0); // 801AE78C
  c->r[31]=c->r[3]|c->r[3]; // 801AE790
  if (crb(c,2)) { goto L_801AE7C4; } // 801AE794
  c->r[4]=0u+0x802D0000u; // 801AE798
  c->r[5]=0u+0x0000010Au; // 801AE79C
  c->r[4]=c->r[4]+0x00002074u; // 801AE7A0
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801AE7A4
  W16(c->r[3]+0x00000000u,c->r[5]); // 801AE7A8
  c->r[4]=c->r[4]+c->r[0]; // 801AE7AC
  c->r[4]=c->r[4]+0x000000B0u; // 801AE7B0
  c->r[3]=c->r[3]+0x00000008u; // 801AE7B4
  c->lr=0x801AE7BCu; f_801AAE54(c); // 801AE7B8
  c->r[3]=c->r[31]|c->r[31]; // 801AE7BC
  c->lr=0x801AE7C4u; f_801AB300(c); // 801AE7C0
L_801AE7C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE7C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE7C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AE7CC
  c->lr=c->r[0]; // 801AE7D0
  c->r[1]=c->r[1]+0x00000010u; // 801AE7D4
  return; // 801AE7D8
}

// bta_dm_pm_btm_status
void f_801AE7DC(Ctx* __restrict c) {
  trace_call(0x801AE7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE7DC
  c->r[0]=c->lr; // 801AE7E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE7E4
  c->r[11]=c->r[1]+0x00000020u; // 801AE7E8
  c->lr=0x801AE7F0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AE7EC
  c->r[30]=0u+0x802D0000u; // 801AE7F0
  c->r[31]=c->r[3]|c->r[3]; // 801AE7F4
  c->r[30]=c->r[30]+0x00002074u; // 801AE7F8
  c->r[27]=0u+0x00000000u; // 801AE7FC
L_801AE800:;
  c->r[28]=rotl(c->r[27],5)&0x00001FE0u; // 801AE800
  c->r[29]=c->r[30]+c->r[28]; // 801AE804
  c->r[0]=R8(c->r[29]+0x000000B6u); // 801AE808
  cmps(c,0,(int32_t)c->r[0],0); // 801AE80C
  if (crb(c,2)) { goto L_801AE840; } // 801AE810
  c->r[3]=c->r[29]+0x000000B0u; // 801AE814
  c->r[4]=c->r[31]+0x00000008u; // 801AE818
  c->lr=0x801AE820u; f_801AAE88(c); // 801AE81C
  cmps(c,0,(int32_t)c->r[3],0); // 801AE820
  if (!crb(c,2)) { goto L_801AE840; } // 801AE824
  c->r[3]=c->r[29]|c->r[29]; // 801AE828
  c->r[3]=c->r[3]+0x00000098u; // 801AE82C
  c->lr=0x801AE834u; f_801AB33C(c); // 801AE830
  c->r[0]=0u+0x00000000u; // 801AE834
  W8(c->r[29]+0x000000B6u,c->r[0]); // 801AE838
  goto L_801AE84C; // 801AE83C
L_801AE840:;
  c->r[27]=c->r[27]+0x00000001u; // 801AE840
  cmpu(c,0,c->r[27],0x00000003u); // 801AE844
  if (crb(c,0)) { IRQCHK(c); goto L_801AE800; } // 801AE848
L_801AE84C:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801AE84C
  cmps(c,0,(int32_t)c->r[0],0); // 801AE850
  if (crb(c,2)) { goto L_801AE85C; } // 801AE854
  goto L_801AE8E4; // 801AE858
L_801AE85C:;
  c->r[0]=R8(c->r[31]+0x00000012u); // 801AE85C
  cmps(c,0,(int32_t)c->r[0],0); // 801AE860
  if (crb(c,2)) { goto L_801AE8D8; } // 801AE864
  c->r[3]=0u+0x802D0000u; // 801AE868
  c->r[29]=0u+0x00000000u; // 801AE86C
  c->r[30]=c->r[3]+0x00002074u; // 801AE870
  goto L_801AE8C4; // 801AE874
L_801AE878:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AE878
  c->r[4]=c->r[31]+0x00000008u; // 801AE87C
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801AE880
  c->r[3]=c->r[30]+c->r[28]; // 801AE884
  c->lr=0x801AE88Cu; f_801AAE88(c); // 801AE888
  cmps(c,0,(int32_t)c->r[3],0); // 801AE88C
  if (!crb(c,2)) { goto L_801AE8C0; } // 801AE890
  c->r[5]=c->r[30]+c->r[28]; // 801AE894
  c->r[0]=R8(c->r[5]+0x00000009u); // 801AE898
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 801AE89C
  if (crb(c,2)) { goto L_801AE8E4; } // 801AE8A0
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801AE8A4
  c->r[3]=c->r[31]+0x00000008u; // 801AE8A8
  c->r[4]=0u+0x00000000u; // 801AE8AC
  c->r[0]=c->r[0]|c->r[6]; // 801AE8B0
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801AE8B4
  c->lr=0x801AE8BCu; f_801AE2EC(c); // 801AE8B8
  goto L_801AE8E4; // 801AE8BC
L_801AE8C0:;
  c->r[29]=c->r[29]+0x00000001u; // 801AE8C0
L_801AE8C4:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801AE8C4
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801AE8C8
  cmpu(c,0,c->r[3],c->r[0]); // 801AE8CC
  if (crb(c,0)) { IRQCHK(c); goto L_801AE878; } // 801AE8D0
  goto L_801AE8E4; // 801AE8D4
L_801AE8D8:;
  c->r[3]=c->r[31]+0x00000008u; // 801AE8D8
  c->r[4]=0u+0x00000000u; // 801AE8DC
  c->lr=0x801AE8E4u; f_801AE2EC(c); // 801AE8E0
L_801AE8E4:;
  c->r[11]=c->r[1]+0x00000020u; // 801AE8E4
  c->lr=0x801AE8ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AE8E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE8EC
  c->lr=c->r[0]; // 801AE8F0
  c->r[1]=c->r[1]+0x00000020u; // 801AE8F4
  return; // 801AE8F8
}

// bta_dm_pm_timer
void f_801AE8FC(Ctx* __restrict c) {
  trace_call(0x801AE8FCu);
  c->r[4]=0u+0x00000001u; // 801AE8FC
  c->r[3]=c->r[3]+0x00000008u; // 801AE900
  f_801AE2EC(c); return; // 801AE904
}

// bta_hh_api_enable
void f_801AE908(Ctx* __restrict c) {
  trace_call(0x801AE908u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE908
  c->r[0]=c->lr; // 801AE90C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE910
  c->r[0]=0u+0x00000006u; // 801AE914
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AE918
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AE91C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AE920
  c->r[29]=c->r[3]|c->r[3]; // 801AE924
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AE928
  c->lr=0x801AE930u; f_801C087C(c); // 801AE92C
  c->r[31]=0u+0x802D0000u; // 801AE930
  c->r[4]=0u+0x00000000u; // 801AE934
  c->r[3]=c->r[31]+0x000021A8u; // 801AE938
  c->r[5]=0u+0x00000230u; // 801AE93C
  c->lr=0x801AE944u; f_800046B4(c); // 801AE940
  c->r[4]=R8(c->r[29]+0x00000008u); // 801AE944
  c->r[3]=c->r[13]+0xFFFFACB0u; // 801AE948
  c->lr=0x801AE950u; f_801C0EBC(c); // 801AE94C
  c->r[3]=0u+0x801B0000u; // 801AE950
  c->r[3]=c->r[3]+0xFFFFFDB8u; // 801AE954
  c->lr=0x801AE95Cu; f_801C08C0(c); // 801AE958
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AE95C
  if (!crb(c,2)) { goto L_801AEA44; } // 801AE960
  c->r[4]=R32(c->r[29]+0x00000030u); // 801AE964
  c->r[12]=c->r[31]+0x000021A8u; // 801AE968
  c->r[3]=0u+0x00000000u; // 801AE96C
  c->r[0]=0u+0x00000002u; // 801AE970
  W32(c->r[12]+0x00000224u,c->r[4]); // 801AE974
  c->r[29]=0u+0x00000000u; // 801AE978
  c->r[11]=0u+0x00000001u; // 801AE97C
  c->r[10]=0u+0x000000FFu; // 801AE980
  W8(c->r[1]+0x00000008u,c->r[3]); // 801AE984
  c->r[9]=0u+0x00000010u; // 801AE988
  c->ctr=c->r[0]; // 801AE98C
L_801AE990:;
  c->r[3]=rotl(c->r[29],5)&0x00001FE0u; // 801AE990
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801AE994
  c->r[31]=c->r[12]+c->r[3]; // 801AE998
  c->r[8]=c->r[29]+0x00000001u; // 801AE99C
  W8(c->r[31]+0x0000002Cu,c->r[11]); // 801AE9A0
  c->r[30]=c->r[12]+c->r[0]; // 801AE9A4
  c->r[7]=c->r[29]+0x00000002u; // 801AE9A8
  c->r[6]=c->r[29]+0x00000003u; // 801AE9AC
  W8(c->r[31]+0x00000026u,c->r[10]); // 801AE9B0
  c->r[5]=c->r[29]+0x00000004u; // 801AE9B4
  c->r[4]=c->r[29]+0x00000005u; // 801AE9B8
  c->r[3]=c->r[29]+0x00000006u; // 801AE9BC
  W8(c->r[31]+0x00000022u,c->r[29]); // 801AE9C0
  c->r[0]=c->r[29]+0x00000007u; // 801AE9C4
  c->r[29]=c->r[29]+0x00000008u; // 801AE9C8
  W8(c->r[30]+0x00000214u,c->r[9]); // 801AE9CC
  W8(c->r[31]+0x0000004Cu,c->r[11]); // 801AE9D0
  W8(c->r[31]+0x00000046u,c->r[10]); // 801AE9D4
  W8(c->r[31]+0x00000042u,c->r[8]); // 801AE9D8
  W8(c->r[30]+0x00000215u,c->r[9]); // 801AE9DC
  W8(c->r[31]+0x0000006Cu,c->r[11]); // 801AE9E0
  W8(c->r[31]+0x00000066u,c->r[10]); // 801AE9E4
  W8(c->r[31]+0x00000062u,c->r[7]); // 801AE9E8
  W8(c->r[30]+0x00000216u,c->r[9]); // 801AE9EC
  W8(c->r[31]+0x0000008Cu,c->r[11]); // 801AE9F0
  W8(c->r[31]+0x00000086u,c->r[10]); // 801AE9F4
  W8(c->r[31]+0x00000082u,c->r[6]); // 801AE9F8
  W8(c->r[30]+0x00000217u,c->r[9]); // 801AE9FC
  W8(c->r[31]+0x000000ACu,c->r[11]); // 801AEA00
  W8(c->r[31]+0x000000A6u,c->r[10]); // 801AEA04
  W8(c->r[31]+0x000000A2u,c->r[5]); // 801AEA08
  W8(c->r[30]+0x00000218u,c->r[9]); // 801AEA0C
  W8(c->r[31]+0x000000CCu,c->r[11]); // 801AEA10
  W8(c->r[31]+0x000000C6u,c->r[10]); // 801AEA14
  W8(c->r[31]+0x000000C2u,c->r[4]); // 801AEA18
  W8(c->r[30]+0x00000219u,c->r[9]); // 801AEA1C
  W8(c->r[31]+0x000000ECu,c->r[11]); // 801AEA20
  W8(c->r[31]+0x000000E6u,c->r[10]); // 801AEA24
  W8(c->r[31]+0x000000E2u,c->r[3]); // 801AEA28
  W8(c->r[30]+0x0000021Au,c->r[9]); // 801AEA2C
  W8(c->r[31]+0x0000010Cu,c->r[11]); // 801AEA30
  W8(c->r[31]+0x00000106u,c->r[10]); // 801AEA34
  W8(c->r[31]+0x00000102u,c->r[0]); // 801AEA38
  W8(c->r[30]+0x0000021Bu,c->r[9]); // 801AEA3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AE990; } // 801AEA40
L_801AEA44:;
  c->r[5]=0u+0x802D0000u; // 801AEA44
  c->r[4]=c->r[1]+0x00000008u; // 801AEA48
  c->r[5]=c->r[5]+0x000021A8u; // 801AEA4C
  c->r[3]=0u+0x00000000u; // 801AEA50
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AEA54
  c->ctr=c->r[12]; // 801AEA58
  if (true) { c->lr=0x801AEA60u; dispatch(c,c->ctr); } // 801AEA5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AEA60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AEA64
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AEA68
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AEA6C
  c->lr=c->r[0]; // 801AEA70
  c->r[1]=c->r[1]+0x00000020u; // 801AEA74
  return; // 801AEA78
}

// bta_hh_api_disable
void f_801AEA7C(Ctx* __restrict c) {
  trace_call(0x801AEA7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEA7C
  c->r[0]=c->lr; // 801AEA80
  c->r[3]=0u+0x802D0000u; // 801AEA84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEA88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AEA8C
  c->r[31]=c->r[3]+0x000021A8u; // 801AEA90
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AEA94
  c->r[0]=R32(c->r[31]+0x00000224u); // 801AEA98
  cmps(c,0,(int32_t)c->r[0],0); // 801AEA9C
  if (crb(c,2)) { goto L_801AEB68; } // 801AEAA0
  c->r[0]=R8(c->r[31]+0x0000022Du); // 801AEAA4
  cmps(c,0,(int32_t)c->r[0],0); // 801AEAA8
  if (!crb(c,2)) { goto L_801AEB2C; } // 801AEAAC
  c->r[0]=0u+0x00000000u; // 801AEAB0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AEAB4
  c->lr=0x801AEABCu; f_801C093C(c); // 801AEAB8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AEABC
  if (crb(c,2)) { goto L_801AEACC; } // 801AEAC0
  c->r[0]=0u+0x00000006u; // 801AEAC4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AEAC8
L_801AEACC:;
  c->r[31]=0u+0x802D0000u; // 801AEACC
  c->r[30]=0u+0x00000000u; // 801AEAD0
  c->r[31]=c->r[31]+0x000021A8u; // 801AEAD4
L_801AEAD8:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801AEAD8
  c->r[3]=c->r[31]+c->r[0]; // 801AEADC
  c->r[3]=c->r[3]+0x00000014u; // 801AEAE0
  c->lr=0x801AEAE8u; f_801AB5A0(c); // 801AEAE4
  c->r[30]=c->r[30]+0x00000001u; // 801AEAE8
  cmpu(c,0,c->r[30],0x00000010u); // 801AEAEC
  if (crb(c,0)) { IRQCHK(c); goto L_801AEAD8; } // 801AEAF0
  c->r[31]=0u+0x802D0000u; // 801AEAF4
  c->r[31]=c->r[31]+0x000021A8u; // 801AEAF8
  c->r[3]=c->r[31]+0x00000228u; // 801AEAFC
  c->lr=0x801AEB04u; f_801AB5A0(c); // 801AEB00
  c->r[12]=R32(c->r[31]+0x00000224u); // 801AEB04
  c->r[4]=c->r[1]+0x00000008u; // 801AEB08
  c->r[3]=0u+0x00000001u; // 801AEB0C
  c->ctr=c->r[12]; // 801AEB10
  if (true) { c->lr=0x801AEB18u; dispatch(c,c->ctr); } // 801AEB14
  c->r[3]=c->r[31]|c->r[31]; // 801AEB18
  c->r[4]=0u+0x00000000u; // 801AEB1C
  c->r[5]=0u+0x00000230u; // 801AEB20
  c->lr=0x801AEB28u; f_800046B4(c); // 801AEB24
  goto L_801AEB68; // 801AEB28
L_801AEB2C:;
  c->r[0]=0u+0x00000001u; // 801AEB2C
  c->r[30]=0u+0x00000000u; // 801AEB30
  W8(c->r[31]+0x0000022Eu,c->r[0]); // 801AEB34
L_801AEB38:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801AEB38
  c->r[3]=c->r[31]+c->r[0]; // 801AEB3C
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 801AEB40
  cmpu(c,0,c->r[0],0x00000003u); // 801AEB44
  if (!crb(c,2)) { goto L_801AEB5C; } // 801AEB48
  c->r[3]=c->r[3]+0x00000010u; // 801AEB4C
  c->r[4]=0u+0x00001701u; // 801AEB50
  c->r[5]=0u+0x00000000u; // 801AEB54
  c->lr=0x801AEB5Cu; f_801B0420(c); // 801AEB58
L_801AEB5C:;
  c->r[30]=c->r[30]+0x00000001u; // 801AEB5C
  cmpu(c,0,c->r[30],0x00000010u); // 801AEB60
  if (crb(c,0)) { IRQCHK(c); goto L_801AEB38; } // 801AEB64
L_801AEB68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AEB68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AEB6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AEB70
  c->lr=c->r[0]; // 801AEB74
  c->r[1]=c->r[1]+0x00000020u; // 801AEB78
  return; // 801AEB7C
}

// bta_hh_disc_cmpl
void f_801AEB80(Ctx* __restrict c) {
  trace_call(0x801AEB80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEB80
  c->r[0]=c->lr; // 801AEB84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEB88
  c->r[0]=0u+0x00000000u; // 801AEB8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AEB90
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AEB94
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AEB98
  c->lr=0x801AEBA0u; f_801C093C(c); // 801AEB9C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AEBA0
  if (crb(c,2)) { goto L_801AEBB0; } // 801AEBA4
  c->r[0]=0u+0x00000006u; // 801AEBA8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AEBAC
L_801AEBB0:;
  c->r[31]=0u+0x802D0000u; // 801AEBB0
  c->r[30]=0u+0x00000000u; // 801AEBB4
  c->r[31]=c->r[31]+0x000021A8u; // 801AEBB8
L_801AEBBC:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801AEBBC
  c->r[3]=c->r[31]+c->r[0]; // 801AEBC0
  c->r[3]=c->r[3]+0x00000014u; // 801AEBC4
  c->lr=0x801AEBCCu; f_801AB5A0(c); // 801AEBC8
  c->r[30]=c->r[30]+0x00000001u; // 801AEBCC
  cmpu(c,0,c->r[30],0x00000010u); // 801AEBD0
  if (crb(c,0)) { IRQCHK(c); goto L_801AEBBC; } // 801AEBD4
  c->r[31]=0u+0x802D0000u; // 801AEBD8
  c->r[31]=c->r[31]+0x000021A8u; // 801AEBDC
  c->r[3]=c->r[31]+0x00000228u; // 801AEBE0
  c->lr=0x801AEBE8u; f_801AB5A0(c); // 801AEBE4
  c->r[12]=R32(c->r[31]+0x00000224u); // 801AEBE8
  c->r[4]=c->r[1]+0x00000008u; // 801AEBEC
  c->r[3]=0u+0x00000001u; // 801AEBF0
  c->ctr=c->r[12]; // 801AEBF4
  if (true) { c->lr=0x801AEBFCu; dispatch(c,c->ctr); } // 801AEBF8
  c->r[3]=c->r[31]|c->r[31]; // 801AEBFC
  c->r[4]=0u+0x00000000u; // 801AEC00
  c->r[5]=0u+0x00000230u; // 801AEC04
  c->lr=0x801AEC0Cu; f_800046B4(c); // 801AEC08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AEC0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AEC10
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AEC14
  c->lr=c->r[0]; // 801AEC18
  c->r[1]=c->r[1]+0x00000020u; // 801AEC1C
  return; // 801AEC20
}

// bta_hh_sdp_cback
void f_801AEC24(Ctx* __restrict c) {
  trace_call(0x801AEC24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEC24
  c->r[0]=c->lr; // 801AEC28
  c->r[6]=0u+0x802D0000u; // 801AEC2C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEC30
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEC34
  c->r[0]=0u+0x00000010u; // 801AEC38
  c->r[6]=c->r[6]+0x000021A8u; // 801AEC3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AEC40
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AEC44
  c->r[30]=c->r[5]|c->r[5]; // 801AEC48
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AEC4C
  c->r[29]=c->r[4]|c->r[4]; // 801AEC50
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AEC54
  c->r[31]=R32(c->r[6]+0x00000210u); // 801AEC58
  if (!crb(c,2)) { goto L_801AED1C; } // 801AEC5C
  c->r[0]=R8(c->r[31]+0x00000014u); // 801AEC60
  cmps(c,0,(int32_t)c->r[0],0); // 801AEC64
  if (crb(c,2)) { goto L_801AEC70; } // 801AEC68
  c->r[29]=c->r[4]|0x00008000u; // 801AEC6C
L_801AEC70:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AEC70
  cmpu(c,0,c->r[0],0x00000004u); // 801AEC74
  if (crb(c,0)) { goto L_801AEC98; } // 801AEC78
  c->r[4]=0u+0x80240000u; // 801AEC7C
  c->r[6]=c->r[3]|c->r[3]; // 801AEC80
  c->r[5]=c->r[31]|c->r[31]; // 801AEC84
  c->r[7]=rotl(c->r[29],0)&0x0000FFFFu; // 801AEC88
  c->r[4]=c->r[4]+0x00004390u; // 801AEC8C
  c->r[3]=0u+0x00000503u; // 801AEC90
  c->lr=0x801AEC98u; f_801AA820(c); // 801AEC94
L_801AEC98:;
  c->r[4]=R8(c->r[30]+0x00000064u); // 801AEC98
  c->r[3]=c->r[31]|c->r[31]; // 801AEC9C
  c->lr=0x801AECA4u; f_801B0BEC(c); // 801AECA0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AECA4
  if (crb(c,2)) { goto L_801AED14; } // 801AECA8
  c->r[0]=R8(c->r[31]+0x00000016u); // 801AECAC
  cmpu(c,0,c->r[0],0x000000FFu); // 801AECB0
  if (!crb(c,2)) { goto L_801AED1C; } // 801AECB4
  c->r[3]=c->r[31]+0x00000008u; // 801AECB8
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 801AECBC
  c->r[5]=c->r[1]+0x00000009u; // 801AECC0
  c->lr=0x801AECC8u; f_801C0A20(c); // 801AECC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AECC8
  W8(c->r[1]+0x00000008u,c->r[3]); // 801AECCC
  if (!crb(c,2)) { goto L_801AED08; } // 801AECD0
  c->r[3]=0u+0x802D0000u; // 801AECD4
  c->r[4]=R8(c->r[1]+0x00000009u); // 801AECD8
  c->r[3]=c->r[3]+0x000021A8u; // 801AECDC
  c->r[0]=R8(c->r[31]+0x00000012u); // 801AECE0
  c->r[5]=c->r[3]+c->r[4]; // 801AECE4
  c->r[6]=c->r[30]+0x00000068u; // 801AECE8
  W8(c->r[5]+0x00000214u,c->r[0]); // 801AECEC
  c->r[3]=c->r[31]|c->r[31]; // 801AECF0
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801AECF4
  c->r[7]=R8(c->r[30]+0x00000064u); // 801AECF8
  c->r[8]=R8(c->r[31]+0x00000015u); // 801AECFC
  c->lr=0x801AED04u; f_801B0B30(c); // 801AED00
  goto L_801AED1C; // 801AED04
L_801AED08:;
  c->r[0]=0u+0x00000000u; // 801AED08
  W8(c->r[31]+0x00000015u,c->r[0]); // 801AED0C
  goto L_801AED1C; // 801AED10
L_801AED14:;
  c->r[0]=0u+0x000000FFu; // 801AED14
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AED18
L_801AED1C:;
  c->r[3]=0u+0x802D0000u; // 801AED1C
  c->r[3]=c->r[3]+0x000021A8u; // 801AED20
  c->r[3]=c->r[3]+0x00000228u; // 801AED24
  c->lr=0x801AED2Cu; f_801AB5A0(c); // 801AED28
  c->r[3]=c->r[31]|c->r[31]; // 801AED2C
  c->r[5]=c->r[1]+0x00000008u; // 801AED30
  c->r[4]=0u+0x00001707u; // 801AED34
  c->lr=0x801AED3Cu; f_801B0420(c); // 801AED38
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AED3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AED40
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AED44
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AED48
  c->lr=c->r[0]; // 801AED4C
  c->r[1]=c->r[1]+0x00000020u; // 801AED50
  return; // 801AED54
}

// bta_hh_start_sdp
void f_801AED58(Ctx* __restrict c) {
  trace_call(0x801AED58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AED58
  c->r[0]=c->lr; // 801AED5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AED60
  c->r[0]=0u+0x00000010u; // 801AED64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AED68
  c->r[31]=c->r[3]|c->r[3]; // 801AED6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AED70
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AED74
  c->r[29]=c->r[4]|c->r[4]; // 801AED78
  W8(c->r[1]+0x00000009u,c->r[0]); // 801AED7C
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 801AED80
  c->r[0]=R8(c->r[3]+0x00000015u); // 801AED84
  W8(c->r[3]+0x00000014u,c->r[5]); // 801AED88
  cmps(c,0,(int32_t)c->r[0],0); // 801AED8C
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801AED90
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801AED94
  if (crb(c,2)) { goto L_801AEE30; } // 801AED98
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AED9C
  c->r[3]=0u+0x00000000u; // 801AEDA0
  W8(c->r[1]+0x00000009u,c->r[3]); // 801AEDA4
  cmpu(c,0,c->r[0],0x00000005u); // 801AEDA8
  if (crb(c,0)) { goto L_801AEDC0; } // 801AEDAC
  c->r[4]=0u+0x80240000u; // 801AEDB0
  c->r[3]=0u+0x00000504u; // 801AEDB4
  c->r[4]=c->r[4]+0x000043E8u; // 801AEDB8
  c->lr=0x801AEDC0u; f_801AA7C0(c); // 801AEDBC
L_801AEDC0:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 801AEDC0
  cmpu(c,0,c->r[0],0x000000FFu); // 801AEDC4
  if (!crb(c,2)) { goto L_801AEE1C; } // 801AEDC8
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801AEDCC
  c->r[3]=c->r[31]+0x00000008u; // 801AEDD0
  c->r[5]=c->r[1]+0x00000008u; // 801AEDD4
  c->lr=0x801AEDDCu; f_801C0A20(c); // 801AEDD8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AEDDC
  W8(c->r[1]+0x00000009u,c->r[3]); // 801AEDE0
  if (!crb(c,2)) { goto L_801AEE1C; } // 801AEDE4
  c->r[4]=R8(c->r[1]+0x00000008u); // 801AEDE8
  c->r[3]=c->r[31]|c->r[31]; // 801AEDEC
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 801AEDF0
  c->r[6]=0u+0x00000000u; // 801AEDF4
  c->r[7]=R8(c->r[31]+0x00000013u); // 801AEDF8
  c->r[8]=R8(c->r[31]+0x00000015u); // 801AEDFC
  c->lr=0x801AEE04u; f_801B0B30(c); // 801AEE00
  c->r[3]=0u+0x802D0000u; // 801AEE04
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AEE08
  c->r[3]=c->r[3]+0x000021A8u; // 801AEE0C
  c->r[4]=R8(c->r[31]+0x00000012u); // 801AEE10
  c->r[3]=c->r[3]+c->r[0]; // 801AEE14
  W8(c->r[3]+0x00000214u,c->r[4]); // 801AEE18
L_801AEE1C:;
  c->r[3]=c->r[31]|c->r[31]; // 801AEE1C
  c->r[5]=c->r[1]+0x00000009u; // 801AEE20
  c->r[4]=0u+0x00001707u; // 801AEE24
  c->lr=0x801AEE2Cu; f_801B0420(c); // 801AEE28
  goto L_801AEED0; // 801AEE2C
L_801AEE30:;
  c->r[30]=0u+0x802D0000u; // 801AEE30
  c->r[30]=c->r[30]+0x000021A8u; // 801AEE34
  c->r[0]=R32(c->r[30]+0x00000228u); // 801AEE38
  cmps(c,0,(int32_t)c->r[0],0); // 801AEE3C
  if (!crb(c,2)) { goto L_801AEEB4; } // 801AEE40
  c->r[3]=R32(c->r[13]+0xFFFFAC88u); // 801AEE44
  c->r[3]=R16(c->r[3]+0x00000008u); // 801AEE48
  c->lr=0x801AEE50u; f_801A7A70(c); // 801AEE4C
  W32(c->r[30]+0x00000228u,c->r[3]); // 801AEE50
  c->r[6]=0u+0x801B0000u; // 801AEE54
  c->r[5]=R32(c->r[13]+0xFFFFAC88u); // 801AEE58
  c->r[4]=c->r[3]|c->r[3]; // 801AEE5C
  W32(c->r[30]+0x00000210u,c->r[31]); // 801AEE60
  c->r[3]=c->r[29]+0x00000008u; // 801AEE64
  c->r[6]=c->r[6]+0xFFFFEC24u; // 801AEE68
  c->r[5]=R16(c->r[5]+0x00000008u); // 801AEE6C
  c->lr=0x801AEE74u; f_801C0364(c); // 801AEE70
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801AEE74
  W8(c->r[1]+0x00000009u,c->r[3]); // 801AEE78
  if (crb(c,2)) { goto L_801AEEB4; } // 801AEE7C
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AEE80
  cmpu(c,0,c->r[0],0x00000005u); // 801AEE84
  if (crb(c,0)) { goto L_801AEE9C; } // 801AEE88
  c->r[4]=0u+0x80240000u; // 801AEE8C
  c->r[3]=0u+0x00000504u; // 801AEE90
  c->r[4]=c->r[4]+0x00004418u; // 801AEE94
  c->lr=0x801AEE9Cu; f_801AA7E0(c); // 801AEE98
L_801AEE9C:;
  c->r[0]=0u+0x00000007u; // 801AEE9C
  c->r[3]=0u+0x802D0000u; // 801AEEA0
  c->r[3]=c->r[3]+0x000021A8u; // 801AEEA4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801AEEA8
  c->r[3]=c->r[3]+0x00000228u; // 801AEEAC
  c->lr=0x801AEEB4u; f_801AB5A0(c); // 801AEEB0
L_801AEEB4:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801AEEB4
  cmps(c,0,(int32_t)c->r[0],0); // 801AEEB8
  if (crb(c,2)) { goto L_801AEED0; } // 801AEEBC
  c->r[3]=c->r[31]|c->r[31]; // 801AEEC0
  c->r[5]=c->r[1]+0x00000009u; // 801AEEC4
  c->r[4]=0u+0x00001707u; // 801AEEC8
  c->lr=0x801AEED0u; f_801B0420(c); // 801AEECC
L_801AEED0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AEED0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AEED4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AEED8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AEEDC
  c->lr=c->r[0]; // 801AEEE0
  c->r[1]=c->r[1]+0x00000020u; // 801AEEE4
  return; // 801AEEE8
}

// bta_hh_sdp_cmpl
void f_801AEEEC(Ctx* __restrict c) {
  trace_call(0x801AEEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEEEC
  c->r[0]=c->lr; // 801AEEF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEEF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AEEF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AEEFC
  c->r[30]=c->r[4]|c->r[4]; // 801AEF00
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AEF04
  c->r[29]=c->r[3]|c->r[3]; // 801AEF08
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AEF0C
  cmpu(c,0,c->r[0],0x00000005u); // 801AEF10
  if (crb(c,0)) { goto L_801AEF2C; } // 801AEF14
  c->r[4]=0u+0x80240000u; // 801AEF18
  c->r[5]=R8(c->r[30]+0x00000000u); // 801AEF1C
  c->r[4]=c->r[4]+0x00004468u; // 801AEF20
  c->r[3]=0u+0x00000504u; // 801AEF24
  c->lr=0x801AEF2Cu; f_801AA7E0(c); // 801AEF28
L_801AEF2C:;
  c->r[3]=c->r[1]+0x00000008u; // 801AEF2C
  c->r[4]=0u+0x00000000u; // 801AEF30
  c->r[5]=0u+0x00000008u; // 801AEF34
  c->lr=0x801AEF3Cu; f_800046B4(c); // 801AEF38
  c->r[0]=R8(c->r[29]+0x00000016u); // 801AEF3C
  c->r[3]=c->r[1]+0x00000008u; // 801AEF40
  c->r[4]=c->r[29]+0x00000008u; // 801AEF44
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801AEF48
  c->lr=0x801AEF50u; f_801AAE54(c); // 801AEF4C
  c->r[31]=R8(c->r[30]+0x00000000u); // 801AEF50
  cmps(c,0,(int32_t)c->r[31],0); // 801AEF54
  if (!crb(c,2)) { goto L_801AEFC0; } // 801AEF58
  c->r[0]=R8(c->r[29]+0x00000019u); // 801AEF5C
  cmps(c,0,(int32_t)c->r[0],0); // 801AEF60
  if (!crb(c,2)) { goto L_801AEFB0; } // 801AEF64
  c->r[4]=R8(c->r[29]+0x00000014u); // 801AEF68
  c->r[3]=c->r[13]+0xFFFFACB0u; // 801AEF6C
  c->lr=0x801AEF74u; f_801C0EBC(c); // 801AEF70
  c->r[3]=R8(c->r[29]+0x00000016u); // 801AEF74
  c->lr=0x801AEF7Cu; f_801C0C78(c); // 801AEF78
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801AEF7C
  c->r[31]=c->r[3]|c->r[3]; // 801AEF80
  if (crb(c,2)) { goto L_801AEFC0; } // 801AEF84
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AEF88
  cmpu(c,0,c->r[0],0x00000005u); // 801AEF8C
  if (crb(c,0)) { goto L_801AEFA4; } // 801AEF90
  c->r[4]=0u+0x80240000u; // 801AEF94
  c->r[3]=0u+0x00000504u; // 801AEF98
  c->r[4]=c->r[4]+0x00004488u; // 801AEF9C
  c->lr=0x801AEFA4u; f_801AA7E0(c); // 801AEFA0
L_801AEFA4:;
  c->r[3]=R8(c->r[29]+0x00000016u); // 801AEFA4
  c->lr=0x801AEFACu; f_801C0BB0(c); // 801AEFA8
  goto L_801AEFC0; // 801AEFAC
L_801AEFB0:;
  c->r[3]=c->r[29]|c->r[29]; // 801AEFB0
  c->r[4]=0u+0x0000170Bu; // 801AEFB4
  c->r[5]=0u+0x00000000u; // 801AEFB8
  c->lr=0x801AEFC0u; f_801B0420(c); // 801AEFBC
L_801AEFC0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 801AEFC0
  if (crb(c,2)) { goto L_801AF038; } // 801AEFC4
  c->r[0]=R8(c->r[30]+0x00000000u); // 801AEFC8
  cmpu(c,0,c->r[0],0x000000FFu); // 801AEFCC
  if (!crb(c,2)) { goto L_801AEFE0; } // 801AEFD0
  c->r[0]=0u+0x0000000Au; // 801AEFD4
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AEFD8
  goto L_801AEFE8; // 801AEFDC
L_801AEFE0:;
  c->r[0]=0u+0x00000007u; // 801AEFE0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AEFE4
L_801AEFE8:;
  c->r[5]=0u+0x802D0000u; // 801AEFE8
  c->r[4]=c->r[1]+0x00000008u; // 801AEFEC
  c->r[5]=c->r[5]+0x000021A8u; // 801AEFF0
  c->r[3]=0u+0x00000002u; // 801AEFF4
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AEFF8
  c->ctr=c->r[12]; // 801AEFFC
  if (true) { c->lr=0x801AF004u; dispatch(c,c->ctr); } // 801AF000
  c->r[3]=c->r[29]|c->r[29]; // 801AF004
  c->r[4]=0u+0x00001701u; // 801AF008
  c->r[5]=0u+0x00000000u; // 801AF00C
  c->lr=0x801AF014u; f_801B0420(c); // 801AF010
  c->r[0]=R8(c->r[29]+0x00000015u); // 801AF014
  cmps(c,0,(int32_t)c->r[0],0); // 801AF018
  if (!crb(c,2)) { goto L_801AF034; } // 801AF01C
  c->r[0]=R8(c->r[29]+0x00000019u); // 801AF020
  cmps(c,0,(int32_t)c->r[0],0); // 801AF024
  if (!crb(c,2)) { goto L_801AF034; } // 801AF028
  c->r[3]=c->r[29]|c->r[29]; // 801AF02C
  c->lr=0x801AF034u; f_801B0AB0(c); // 801AF030
L_801AF034:;
  c->lr=0x801AF038u; f_801B0C40(c); // 801AF034
L_801AF038:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF038
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF03C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AF040
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AF044
  c->lr=c->r[0]; // 801AF048
  c->r[1]=c->r[1]+0x00000020u; // 801AF04C
  return; // 801AF050
}

// bta_hh_api_disc_act
void f_801AF054(Ctx* __restrict c) {
  trace_call(0x801AF054u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF054
  c->r[0]=c->lr; // 801AF058
  cmps(c,0,(int32_t)c->r[4],0); // 801AF05C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF060
  if (crb(c,2)) { goto L_801AF074; } // 801AF064
  c->r[0]=R16(c->r[4]+0x00000006u); // 801AF068
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801AF06C
  goto L_801AF078; // 801AF070
L_801AF074:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801AF074
L_801AF078:;
  c->r[0]=0u+0x00000006u; // 801AF078
  W8(c->r[1]+0x00000009u,c->r[3]); // 801AF07C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AF080
  c->lr=0x801AF088u; f_801C0E1C(c); // 801AF084
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AF088
  if (crb(c,2)) { goto L_801AF0AC; } // 801AF08C
  c->r[5]=0u+0x802D0000u; // 801AF090
  c->r[4]=c->r[1]+0x00000008u; // 801AF094
  c->r[5]=c->r[5]+0x000021A8u; // 801AF098
  c->r[3]=0u+0x00000003u; // 801AF09C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AF0A0
  c->ctr=c->r[12]; // 801AF0A4
  if (true) { c->lr=0x801AF0ACu; dispatch(c,c->ctr); } // 801AF0A8
L_801AF0AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF0AC
  c->lr=c->r[0]; // 801AF0B0
  c->r[1]=c->r[1]+0x00000010u; // 801AF0B4
  return; // 801AF0B8
}

// bta_hh_open_cmpl_act
void f_801AF0BC(Ctx* __restrict c) {
  trace_call(0x801AF0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF0BC
  c->r[0]=c->lr; // 801AF0C0
  cmps(c,0,(int32_t)c->r[4],0); // 801AF0C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF0C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF0CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF0D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AF0D4
  c->r[29]=c->r[3]|c->r[3]; // 801AF0D8
  if (crb(c,2)) { goto L_801AF0EC; } // 801AF0DC
  c->r[0]=R16(c->r[4]+0x00000006u); // 801AF0E0
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801AF0E4
  goto L_801AF0F0; // 801AF0E8
L_801AF0EC:;
  c->r[30]=R8(c->r[3]+0x00000016u); // 801AF0EC
L_801AF0F0:;
  c->r[3]=c->r[1]+0x00000008u; // 801AF0F0
  c->r[4]=0u+0x00000000u; // 801AF0F4
  c->r[5]=0u+0x00000008u; // 801AF0F8
  c->lr=0x801AF100u; f_800046B4(c); // 801AF0FC
  W8(c->r[1]+0x0000000Fu,c->r[30]); // 801AF100
  c->r[3]=c->r[1]+0x00000008u; // 801AF104
  c->r[4]=c->r[29]+0x00000008u; // 801AF108
  c->lr=0x801AF110u; f_801AAE54(c); // 801AF10C
  c->r[31]=0u+0x802D0000u; // 801AF110
  c->r[31]=c->r[31]+0x000021A8u; // 801AF114
  c->r[3]=R8(c->r[31]+0x0000022Du); // 801AF118
  c->r[0]=c->r[3]+0x00000001u; // 801AF11C
  W8(c->r[31]+0x0000022Du,c->r[0]); // 801AF120
  c->r[3]=R8(c->r[29]+0x00000016u); // 801AF124
  c->r[4]=R8(c->r[29]+0x00000013u); // 801AF128
  c->r[5]=R16(c->r[29]+0x0000000Eu); // 801AF12C
  c->r[6]=R8(c->r[29]+0x00000015u); // 801AF130
  c->lr=0x801AF138u; f_801A7500(c); // 801AF134
  c->r[4]=R8(c->r[29]+0x00000015u); // 801AF138
  c->r[5]=c->r[29]+0x00000008u; // 801AF13C
  c->r[3]=0u+0x00000017u; // 801AF140
  c->lr=0x801AF148u; f_801AAF58(c); // 801AF144
  c->r[5]=R8(c->r[29]+0x0000001Bu); // 801AF148
  cmps(c,0,(int32_t)c->r[5],0); // 801AF14C
  if (crb(c,2)) { goto L_801AF1A4; } // 801AF150
  c->r[3]=c->r[30]|c->r[30]; // 801AF154
  c->r[4]=0u+0x00000007u; // 801AF158
  c->r[6]=0u+0x00000000u; // 801AF15C
  c->r[7]=0u+0x00000000u; // 801AF160
  c->r[8]=0u+0x00000000u; // 801AF164
  c->lr=0x801AF16Cu; f_801C0CDC(c); // 801AF168
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AF16C
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801AF170
  if (crb(c,2)) { goto L_801AF198; } // 801AF174
  c->r[12]=R32(c->r[31]+0x00000224u); // 801AF178
  c->r[0]=0u+0x00000008u; // 801AF17C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AF180
  c->r[4]=c->r[1]+0x00000008u; // 801AF184
  c->r[3]=0u+0x00000002u; // 801AF188
  c->ctr=c->r[12]; // 801AF18C
  if (true) { c->lr=0x801AF194u; dispatch(c,c->ctr); } // 801AF190
  goto L_801AF1C0; // 801AF194
L_801AF198:;
  c->r[0]=0u+0x00000002u; // 801AF198
  W16(c->r[29]+0x00000010u,c->r[0]); // 801AF19C
  goto L_801AF1C0; // 801AF1A0
L_801AF1A4:;
  c->r[0]=0u+0x00000001u; // 801AF1A4
  c->r[4]=c->r[1]+0x00000008u; // 801AF1A8
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801AF1AC
  c->r[3]=0u+0x00000002u; // 801AF1B0
  c->r[12]=R32(c->r[31]+0x00000224u); // 801AF1B4
  c->ctr=c->r[12]; // 801AF1B8
  if (true) { c->lr=0x801AF1C0u; dispatch(c,c->ctr); } // 801AF1BC
L_801AF1C0:;
  c->r[0]=0u+0x00000000u; // 801AF1C0
  W8(c->r[29]+0x00000019u,c->r[0]); // 801AF1C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF1C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AF1CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AF1D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF1D4
  c->lr=c->r[0]; // 801AF1D8
  c->r[1]=c->r[1]+0x00000020u; // 801AF1DC
  return; // 801AF1E0
}

// bta_hh_open_act
void f_801AF1E4(Ctx* __restrict c) {
  trace_call(0x801AF1E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF1E4
  c->r[0]=c->lr; // 801AF1E8
  cmps(c,0,(int32_t)c->r[4],0); // 801AF1EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF1F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF1F4
  c->r[31]=c->r[4]|c->r[4]; // 801AF1F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF1FC
  c->r[30]=c->r[3]|c->r[3]; // 801AF200
  if (crb(c,2)) { goto L_801AF214; } // 801AF204
  c->r[0]=R16(c->r[4]+0x00000006u); // 801AF208
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801AF20C
  goto L_801AF218; // 801AF210
L_801AF214:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 801AF214
L_801AF218:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AF218
  cmpu(c,0,c->r[0],0x00000004u); // 801AF21C
  if (crb(c,0)) { goto L_801AF234; } // 801AF220
  c->r[4]=0u+0x80240000u; // 801AF224
  c->r[3]=0u+0x00000503u; // 801AF228
  c->r[4]=c->r[4]+0x000044D4u; // 801AF22C
  c->lr=0x801AF234u; f_801AA7E0(c); // 801AF230
L_801AF234:;
  c->r[0]=R8(c->r[30]+0x00000015u); // 801AF234
  cmps(c,0,(int32_t)c->r[0],0); // 801AF238
  if (crb(c,2)) { goto L_801AF254; } // 801AF23C
  c->r[3]=c->r[30]|c->r[30]; // 801AF240
  c->r[5]=c->r[31]|c->r[31]; // 801AF244
  c->r[4]=0u+0x0000170Bu; // 801AF248
  c->lr=0x801AF250u; f_801B0420(c); // 801AF24C
  goto L_801AF284; // 801AF250
L_801AF254:;
  c->r[0]=0u+0x00000001u; // 801AF254
  c->r[3]=c->r[1]+0x00000008u; // 801AF258
  W8(c->r[30]+0x00000019u,c->r[0]); // 801AF25C
  c->r[4]=0u+0x00000000u; // 801AF260
  c->r[5]=0u+0x00000010u; // 801AF264
  c->lr=0x801AF26Cu; f_800046B4(c); // 801AF268
  c->r[3]=c->r[1]+0x00000010u; // 801AF26C
  c->r[4]=c->r[30]+0x00000008u; // 801AF270
  c->lr=0x801AF278u; f_801AAE54(c); // 801AF274
  c->r[3]=c->r[30]|c->r[30]; // 801AF278
  c->r[4]=c->r[1]+0x00000008u; // 801AF27C
  c->lr=0x801AF284u; f_801AED58(c); // 801AF280
L_801AF284:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF284
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF288
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AF28C
  c->lr=c->r[0]; // 801AF290
  c->r[1]=c->r[1]+0x00000020u; // 801AF294
  return; // 801AF298
}

// bta_hh_data_act
void f_801AF29C(Ctx* __restrict c) {
  trace_call(0x801AF29Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF29C
  c->r[0]=c->lr; // 801AF2A0
  c->r[8]=c->r[3]|c->r[3]; // 801AF2A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF2A8
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801AF2AC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801AF2B0
  c->r[0]=R16(c->r[5]+0x00000004u); // 801AF2B4
  c->r[3]=R16(c->r[4]+0x00000006u); // 801AF2B8
  c->r[4]=c->r[5]+c->r[0]; // 801AF2BC
  c->r[5]=R16(c->r[5]+0x00000002u); // 801AF2C0
  c->r[6]=R8(c->r[8]+0x0000001Bu); // 801AF2C4
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801AF2C8
  c->r[7]=R8(c->r[8]+0x00000013u); // 801AF2CC
  c->r[4]=c->r[4]+0x00000008u; // 801AF2D0
  c->r[8]=R8(c->r[8]+0x00000015u); // 801AF2D4
  c->lr=0x801AF2DCu; f_801A74C0(c); // 801AF2D8
  c->r[3]=c->r[1]+0x00000008u; // 801AF2DC
  c->lr=0x801AF2E4u; f_801AB5A0(c); // 801AF2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF2E4
  c->lr=c->r[0]; // 801AF2E8
  c->r[1]=c->r[1]+0x00000010u; // 801AF2EC
  return; // 801AF2F0
}

// bta_hh_handsk_act
void f_801AF2F4(Ctx* __restrict c) {
  trace_call(0x801AF2F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF2F4
  c->r[0]=c->lr; // 801AF2F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AF2FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801AF300
  c->r[31]=c->r[3]|c->r[3]; // 801AF304
  W32(c->r[1]+0x00000038u,c->r[30]); // 801AF308
  c->r[30]=0u+0x80240000u; // 801AF30C
  c->r[30]=c->r[30]+0x00004390u; // 801AF310
  W32(c->r[1]+0x00000034u,c->r[29]); // 801AF314
  c->r[29]=c->r[4]|c->r[4]; // 801AF318
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AF31C
  cmpu(c,0,c->r[0],0x00000005u); // 801AF320
  if (crb(c,0)) { goto L_801AF398; } // 801AF324
  c->r[0]=R16(c->r[3]+0x00000010u); // 801AF328
  cmpu(c,0,c->r[0],0x00000009u); // 801AF32C
  if (crb(c,1)) { goto L_801AF384; } // 801AF330
  c->r[3]=0u+0x80240000u; // 801AF334
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AF338
  c->r[3]=c->r[3]+0x00004610u; // 801AF33C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801AF340
  c->ctr=c->r[3]; // 801AF344
  if (true) { switch (c->ctr) { case 0x801AF34Cu: goto L_801AF34C; case 0x801AF354u: goto L_801AF354; case 0x801AF35Cu: goto L_801AF35C; case 0x801AF364u: goto L_801AF364; case 0x801AF36Cu: goto L_801AF36C; case 0x801AF374u: goto L_801AF374; case 0x801AF37Cu: goto L_801AF37C; case 0x801AF384u: goto L_801AF384; case 0x801AF3BCu: goto L_801AF3BC; case 0x801AF43Cu: goto L_801AF43C; case 0x801AF4ACu: goto L_801AF4AC; case 0x801AF518u: goto L_801AF518; default: break; } dispatch(c,c->ctr); return; } // 801AF348
L_801AF34C:;
  c->r[5]=c->r[30]+0x0000016Cu; // 801AF34C
  goto L_801AF388; // 801AF350
L_801AF354:;
  c->r[5]=c->r[30]+0x00000180u; // 801AF354
  goto L_801AF388; // 801AF358
L_801AF35C:;
  c->r[5]=c->r[30]+0x00000194u; // 801AF35C
  goto L_801AF388; // 801AF360
L_801AF364:;
  c->r[5]=c->r[30]+0x000001ACu; // 801AF364
  goto L_801AF388; // 801AF368
L_801AF36C:;
  c->r[5]=c->r[30]+0x000001C4u; // 801AF36C
  goto L_801AF388; // 801AF370
L_801AF374:;
  c->r[5]=c->r[30]+0x000001D8u; // 801AF374
  goto L_801AF388; // 801AF378
L_801AF37C:;
  c->r[5]=c->r[30]+0x000001F0u; // 801AF37C
  goto L_801AF388; // 801AF380
L_801AF384:;
  c->r[5]=c->r[30]+0x00000200u; // 801AF384
L_801AF388:;
  c->r[6]=R32(c->r[29]+0x00000008u); // 801AF388
  c->r[4]=c->r[30]+0x00000210u; // 801AF38C
  c->r[3]=0u+0x00000504u; // 801AF390
  c->lr=0x801AF398u; f_801AA800(c); // 801AF394
L_801AF398:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 801AF398
  cmpu(c,0,c->r[0],0x00000009u); // 801AF39C
  if (crb(c,1)) { goto L_801AF518; } // 801AF3A0
  c->r[3]=0u+0x80240000u; // 801AF3A4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AF3A8
  c->r[3]=c->r[3]+0x000045E8u; // 801AF3AC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801AF3B0
  c->ctr=c->r[3]; // 801AF3B4
  if (true) { switch (c->ctr) { case 0x801AF34Cu: goto L_801AF34C; case 0x801AF354u: goto L_801AF354; case 0x801AF35Cu: goto L_801AF35C; case 0x801AF364u: goto L_801AF364; case 0x801AF36Cu: goto L_801AF36C; case 0x801AF374u: goto L_801AF374; case 0x801AF37Cu: goto L_801AF37C; case 0x801AF384u: goto L_801AF384; case 0x801AF3BCu: goto L_801AF3BC; case 0x801AF43Cu: goto L_801AF43C; case 0x801AF4ACu: goto L_801AF4AC; case 0x801AF518u: goto L_801AF518; default: break; } dispatch(c,c->ctr); return; } // 801AF3B8
L_801AF3BC:;
  c->r[3]=c->r[1]+0x00000018u; // 801AF3BC
  c->r[4]=0u+0x00000000u; // 801AF3C0
  c->r[5]=0u+0x0000000Au; // 801AF3C4
  c->lr=0x801AF3CCu; f_800046B4(c); // 801AF3C8
  c->r[0]=R8(c->r[31]+0x00000016u); // 801AF3CC
  W8(c->r[1]+0x00000019u,c->r[0]); // 801AF3D0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801AF3D4
  cmps(c,0,(int32_t)c->r[0],5); // 801AF3D8
  if (!crb(c,0)) { goto L_801AF3F0; } // 801AF3DC
  cmps(c,0,(int32_t)c->r[0],0); // 801AF3E0
  if (crb(c,2)) { goto L_801AF3FC; } // 801AF3E4
  if (!crb(c,0)) { goto L_801AF404; } // 801AF3E8
  goto L_801AF40C; // 801AF3EC
L_801AF3F0:;
  cmps(c,0,(int32_t)c->r[0],16); // 801AF3F0
  if (!crb(c,0)) { goto L_801AF40C; } // 801AF3F4
  goto L_801AF40C; // 801AF3F8
L_801AF3FC:;
  c->r[0]=0u+0x00000000u; // 801AF3FC
  goto L_801AF410; // 801AF400
L_801AF404:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801AF404
  goto L_801AF410; // 801AF408
L_801AF40C:;
  c->r[0]=0u+0x00000005u; // 801AF40C
L_801AF410:;
  c->r[3]=0u+0x802D0000u; // 801AF410
  W8(c->r[1]+0x00000018u,c->r[0]); // 801AF414
  c->r[3]=c->r[3]+0x000021A8u; // 801AF418
  c->r[4]=c->r[1]+0x00000018u; // 801AF41C
  c->r[12]=R32(c->r[3]+0x00000224u); // 801AF420
  c->r[3]=R16(c->r[31]+0x00000010u); // 801AF424
  c->ctr=c->r[12]; // 801AF428
  if (true) { c->lr=0x801AF430u; dispatch(c,c->ctr); } // 801AF42C
  c->r[0]=0u+0x00000000u; // 801AF430
  W16(c->r[31]+0x00000010u,c->r[0]); // 801AF434
  goto L_801AF530; // 801AF438
L_801AF43C:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 801AF43C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801AF440
  c->r[0]=R32(c->r[29]+0x00000008u); // 801AF444
  cmps(c,0,(int32_t)c->r[0],5); // 801AF448
  if (!crb(c,0)) { goto L_801AF460; } // 801AF44C
  cmps(c,0,(int32_t)c->r[0],0); // 801AF450
  if (crb(c,2)) { goto L_801AF46C; } // 801AF454
  if (!crb(c,0)) { goto L_801AF474; } // 801AF458
  goto L_801AF47C; // 801AF45C
L_801AF460:;
  cmps(c,0,(int32_t)c->r[0],16); // 801AF460
  if (!crb(c,0)) { goto L_801AF47C; } // 801AF464
  goto L_801AF47C; // 801AF468
L_801AF46C:;
  c->r[0]=0u+0x00000000u; // 801AF46C
  goto L_801AF480; // 801AF470
L_801AF474:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801AF474
  goto L_801AF480; // 801AF478
L_801AF47C:;
  c->r[0]=0u+0x00000005u; // 801AF47C
L_801AF480:;
  c->r[3]=0u+0x802D0000u; // 801AF480
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AF484
  c->r[3]=c->r[3]+0x000021A8u; // 801AF488
  c->r[4]=c->r[1]+0x00000008u; // 801AF48C
  c->r[12]=R32(c->r[3]+0x00000224u); // 801AF490
  c->r[3]=R16(c->r[31]+0x00000010u); // 801AF494
  c->ctr=c->r[12]; // 801AF498
  if (true) { c->lr=0x801AF4A0u; dispatch(c,c->ctr); } // 801AF49C
  c->r[0]=0u+0x00000000u; // 801AF4A0
  W16(c->r[31]+0x00000010u,c->r[0]); // 801AF4A4
  goto L_801AF530; // 801AF4A8
L_801AF4AC:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801AF4AC
  c->r[3]=0u+0x00000000u; // 801AF4B0
  cmps(c,0,(int32_t)c->r[0],0); // 801AF4B4
  if (crb(c,2)) { goto L_801AF4C0; } // 801AF4B8
  c->r[3]=0u+0x00000008u; // 801AF4BC
L_801AF4C0:;
  W8(c->r[1]+0x00000016u,c->r[3]); // 801AF4C0
  c->r[3]=c->r[1]+0x00000010u; // 801AF4C4
  c->r[4]=c->r[31]+0x00000008u; // 801AF4C8
  c->r[0]=R8(c->r[31]+0x00000016u); // 801AF4CC
  W8(c->r[1]+0x00000017u,c->r[0]); // 801AF4D0
  c->lr=0x801AF4D8u; f_801AAE54(c); // 801AF4D4
  c->r[5]=0u+0x802D0000u; // 801AF4D8
  c->r[4]=c->r[1]+0x00000010u; // 801AF4DC
  c->r[5]=c->r[5]+0x000021A8u; // 801AF4E0
  c->r[3]=R16(c->r[31]+0x00000010u); // 801AF4E4
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AF4E8
  c->ctr=c->r[12]; // 801AF4EC
  if (true) { c->lr=0x801AF4F4u; dispatch(c,c->ctr); } // 801AF4F0
  c->lr=0x801AF4F8u; f_801B0C40(c); // 801AF4F4
  c->r[0]=0u+0x00000000u; // 801AF4F8
  W16(c->r[31]+0x00000010u,c->r[0]); // 801AF4FC
  c->r[0]=R8(c->r[1]+0x00000016u); // 801AF500
  cmps(c,0,(int32_t)c->r[0],0); // 801AF504
  if (!crb(c,2)) { goto L_801AF530; } // 801AF508
  c->r[0]=0u+0x00000001u; // 801AF50C
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801AF510
  goto L_801AF530; // 801AF514
L_801AF518:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AF518
  cmpu(c,0,c->r[0],0x00000005u); // 801AF51C
  if (crb(c,0)) { goto L_801AF530; } // 801AF520
  c->r[4]=c->r[30]+0x0000023Cu; // 801AF524
  c->r[3]=0u+0x00000504u; // 801AF528
  c->lr=0x801AF530u; f_801AA7C0(c); // 801AF52C
L_801AF530:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 801AF530
  c->r[5]=c->r[31]+0x00000008u; // 801AF534
  c->r[3]=0u+0x00000017u; // 801AF538
  c->lr=0x801AF540u; f_801AB114(c); // 801AF53C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AF540
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801AF544
  c->r[30]=R32(c->r[1]+0x00000038u); // 801AF548
  c->r[29]=R32(c->r[1]+0x00000034u); // 801AF54C
  c->lr=c->r[0]; // 801AF550
  c->r[1]=c->r[1]+0x00000040u; // 801AF554
  return; // 801AF558
}

// bta_hh_ctrl_dat_act
void f_801AF55C(Ctx* __restrict c) {
  trace_call(0x801AF55Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF55C
  c->r[0]=c->lr; // 801AF560
  W32(c->r[1]+0x00000034u,c->r[0]); // 801AF564
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801AF568
  c->r[31]=c->r[3]|c->r[3]; // 801AF56C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801AF570
  W32(c->r[1]+0x00000024u,c->r[29]); // 801AF574
  c->r[29]=0u+0x80240000u; // 801AF578
  c->r[29]=c->r[29]+0x00004390u; // 801AF57C
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801AF580
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AF584
  W32(c->r[1]+0x00000008u,c->r[4]); // 801AF588
  cmpu(c,0,c->r[0],0x00000005u); // 801AF58C
  c->r[0]=R16(c->r[4]+0x00000004u); // 801AF590
  c->r[30]=c->r[4]+c->r[0]; // 801AF594
  if (crb(c,0)) { goto L_801AF608; } // 801AF598
  c->r[0]=R16(c->r[3]+0x00000010u); // 801AF59C
  cmpu(c,0,c->r[0],0x00000009u); // 801AF5A0
  if (crb(c,1)) { goto L_801AF5F8; } // 801AF5A4
  c->r[3]=0u+0x80240000u; // 801AF5A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801AF5AC
  c->r[3]=c->r[3]+0x000046BCu; // 801AF5B0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801AF5B4
  c->ctr=c->r[3]; // 801AF5B8
  if (true) { switch (c->ctr) { case 0x801AF5C0u: goto L_801AF5C0; case 0x801AF5C8u: goto L_801AF5C8; case 0x801AF5D0u: goto L_801AF5D0; case 0x801AF5D8u: goto L_801AF5D8; case 0x801AF5E0u: goto L_801AF5E0; case 0x801AF5E8u: goto L_801AF5E8; case 0x801AF5F0u: goto L_801AF5F0; case 0x801AF5F8u: goto L_801AF5F8; case 0x801AF6A4u: goto L_801AF6A4; case 0x801AF6ACu: goto L_801AF6AC; case 0x801AF6B4u: goto L_801AF6B4; case 0x801AF6BCu: goto L_801AF6BC; case 0x801AF6C4u: goto L_801AF6C4; case 0x801AF6CCu: goto L_801AF6CC; case 0x801AF6D4u: goto L_801AF6D4; case 0x801AF6DCu: goto L_801AF6DC; default: break; } dispatch(c,c->ctr); return; } // 801AF5BC
L_801AF5C0:;
  c->r[5]=c->r[29]+0x0000016Cu; // 801AF5C0
  goto L_801AF5FC; // 801AF5C4
L_801AF5C8:;
  c->r[5]=c->r[29]+0x00000180u; // 801AF5C8
  goto L_801AF5FC; // 801AF5CC
L_801AF5D0:;
  c->r[5]=c->r[29]+0x00000194u; // 801AF5D0
  goto L_801AF5FC; // 801AF5D4
L_801AF5D8:;
  c->r[5]=c->r[29]+0x000001ACu; // 801AF5D8
  goto L_801AF5FC; // 801AF5DC
L_801AF5E0:;
  c->r[5]=c->r[29]+0x000001C4u; // 801AF5E0
  goto L_801AF5FC; // 801AF5E4
L_801AF5E8:;
  c->r[5]=c->r[29]+0x000001D8u; // 801AF5E8
  goto L_801AF5FC; // 801AF5EC
L_801AF5F0:;
  c->r[5]=c->r[29]+0x000001F0u; // 801AF5F0
  goto L_801AF5FC; // 801AF5F4
L_801AF5F8:;
  c->r[5]=c->r[29]+0x00000200u; // 801AF5F8
L_801AF5FC:;
  c->r[4]=c->r[29]+0x000002A8u; // 801AF5FC
  c->r[3]=0u+0x00000504u; // 801AF600
  c->lr=0x801AF608u; f_801AA7E0(c); // 801AF604
L_801AF608:;
  c->r[0]=0u+0x00000000u; // 801AF608
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801AF60C
  c->r[0]=R8(c->r[31]+0x00000016u); // 801AF610
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801AF614
  c->r[4]=R16(c->r[31]+0x00000010u); // 801AF618
  cmps(c,0,(int32_t)c->r[4],7); // 801AF61C
  if (crb(c,2)) { goto L_801AF678; } // 801AF620
  if (!crb(c,0)) { goto L_801AF640; } // 801AF624
  cmps(c,0,(int32_t)c->r[4],5); // 801AF628
  if (crb(c,2)) { goto L_801AF678; } // 801AF62C
  if (!crb(c,0)) { goto L_801AF66C; } // 801AF630
  cmps(c,0,(int32_t)c->r[4],4); // 801AF634
  if (!crb(c,0)) { goto L_801AF658; } // 801AF638
  goto L_801AF678; // 801AF63C
L_801AF640:;
  cmps(c,0,(int32_t)c->r[4],9); // 801AF640
  if (crb(c,2)) { goto L_801AF678; } // 801AF644
  if (!crb(c,0)) { goto L_801AF678; } // 801AF648
  c->r[0]=R8(c->r[30]+0x00000008u); // 801AF64C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AF650
  goto L_801AF6EC; // 801AF654
L_801AF658:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801AF658
  c->r[3]=c->r[1]+0x0000000Eu; // 801AF65C
  c->r[5]=0u+0x00000008u; // 801AF660
  c->lr=0x801AF668u; f_80004364(c); // 801AF664
  goto L_801AF6EC; // 801AF668
L_801AF66C:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 801AF66C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801AF670
  goto L_801AF6EC; // 801AF674
L_801AF678:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AF678
  cmpu(c,0,c->r[0],0x00000005u); // 801AF67C
  if (crb(c,0)) { goto L_801AF6EC; } // 801AF680
  cmpu(c,0,c->r[4],0x00000009u); // 801AF684
  if (crb(c,1)) { goto L_801AF6DC; } // 801AF688
  c->r[3]=0u+0x80240000u; // 801AF68C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801AF690
  c->r[3]=c->r[3]+0x00004694u; // 801AF694
  c->r[3]=R32(c->r[3]+c->r[0]); // 801AF698
  c->ctr=c->r[3]; // 801AF69C
  if (true) { switch (c->ctr) { case 0x801AF5C0u: goto L_801AF5C0; case 0x801AF5C8u: goto L_801AF5C8; case 0x801AF5D0u: goto L_801AF5D0; case 0x801AF5D8u: goto L_801AF5D8; case 0x801AF5E0u: goto L_801AF5E0; case 0x801AF5E8u: goto L_801AF5E8; case 0x801AF5F0u: goto L_801AF5F0; case 0x801AF5F8u: goto L_801AF5F8; case 0x801AF6A4u: goto L_801AF6A4; case 0x801AF6ACu: goto L_801AF6AC; case 0x801AF6B4u: goto L_801AF6B4; case 0x801AF6BCu: goto L_801AF6BC; case 0x801AF6C4u: goto L_801AF6C4; case 0x801AF6CCu: goto L_801AF6CC; case 0x801AF6D4u: goto L_801AF6D4; case 0x801AF6DCu: goto L_801AF6DC; default: break; } dispatch(c,c->ctr); return; } // 801AF6A0
L_801AF6A4:;
  c->r[5]=c->r[29]+0x0000016Cu; // 801AF6A4
  goto L_801AF6E0; // 801AF6A8
L_801AF6AC:;
  c->r[5]=c->r[29]+0x00000180u; // 801AF6AC
  goto L_801AF6E0; // 801AF6B0
L_801AF6B4:;
  c->r[5]=c->r[29]+0x00000194u; // 801AF6B4
  goto L_801AF6E0; // 801AF6B8
L_801AF6BC:;
  c->r[5]=c->r[29]+0x000001ACu; // 801AF6BC
  goto L_801AF6E0; // 801AF6C0
L_801AF6C4:;
  c->r[5]=c->r[29]+0x000001C4u; // 801AF6C4
  goto L_801AF6E0; // 801AF6C8
L_801AF6CC:;
  c->r[5]=c->r[29]+0x000001D8u; // 801AF6CC
  goto L_801AF6E0; // 801AF6D0
L_801AF6D4:;
  c->r[5]=c->r[29]+0x000001F0u; // 801AF6D4
  goto L_801AF6E0; // 801AF6D8
L_801AF6DC:;
  c->r[5]=c->r[29]+0x00000200u; // 801AF6DC
L_801AF6E0:;
  c->r[4]=c->r[29]+0x000002CCu; // 801AF6E0
  c->r[3]=0u+0x00000504u; // 801AF6E4
  c->lr=0x801AF6ECu; f_801AA7E0(c); // 801AF6E8
L_801AF6EC:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 801AF6EC
  c->r[5]=c->r[31]+0x00000008u; // 801AF6F0
  c->r[3]=0u+0x00000017u; // 801AF6F4
  c->lr=0x801AF6FCu; f_801AB148(c); // 801AF6F8
  c->r[4]=R8(c->r[31]+0x00000015u); // 801AF6FC
  c->r[5]=c->r[31]+0x00000008u; // 801AF700
  c->r[3]=0u+0x00000017u; // 801AF704
  c->lr=0x801AF70Cu; f_801AB114(c); // 801AF708
  c->r[5]=0u+0x802D0000u; // 801AF70C
  c->r[4]=c->r[1]+0x0000000Cu; // 801AF710
  c->r[5]=c->r[5]+0x000021A8u; // 801AF714
  c->r[3]=R16(c->r[31]+0x00000010u); // 801AF718
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AF71C
  c->ctr=c->r[12]; // 801AF720
  if (true) { c->lr=0x801AF728u; dispatch(c,c->ctr); } // 801AF724
  c->r[0]=0u+0x00000000u; // 801AF728
  c->r[3]=c->r[1]+0x00000008u; // 801AF72C
  W16(c->r[31]+0x00000010u,c->r[0]); // 801AF730
  c->lr=0x801AF738u; f_801AB5A0(c); // 801AF734
  c->r[0]=R32(c->r[1]+0x00000034u); // 801AF738
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801AF73C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801AF740
  c->r[29]=R32(c->r[1]+0x00000024u); // 801AF744
  c->lr=c->r[0]; // 801AF748
  c->r[1]=c->r[1]+0x00000030u; // 801AF74C
  return; // 801AF750
}

// bta_hh_close_act
void f_801AF754(Ctx* __restrict c) {
  trace_call(0x801AF754u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF754
  c->r[0]=c->lr; // 801AF758
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF75C
  c->r[0]=0u+0x00000000u; // 801AF760
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF764
  c->r[31]=c->r[3]|c->r[3]; // 801AF768
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF76C
  c->r[30]=0u+0x00000003u; // 801AF770
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801AF774
  c->r[0]=R8(c->r[3]+0x00000017u); // 801AF778
  c->r[6]=R32(c->r[4]+0x00000008u); // 801AF77C
  cmps(c,0,(int32_t)c->r[0],0); // 801AF780
  if (crb(c,2)) { goto L_801AF78C; } // 801AF784
  c->r[30]=0u+0x0000000Du; // 801AF788
L_801AF78C:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 801AF78C
  c->r[0]=rotl(c->r[6],0)&0x00000700u; cr0(c,c->r[0]); // 801AF790
  W8(c->r[1]+0x0000000Du,c->r[5]); // 801AF794
  c->r[0]=R32(c->r[4]+0x00000008u); // 801AF798
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801AF79C
  if (!crb(c,2)) { goto L_801AF7C0; } // 801AF7A0
  cmpu(c,0,c->r[6],0x0000000Fu); // 801AF7A4
  if (crb(c,2)) { goto L_801AF7C0; } // 801AF7A8
  cmpu(c,0,c->r[6],0x0000000Eu); // 801AF7AC
  if (crb(c,2)) { goto L_801AF7C0; } // 801AF7B0
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801AF7B4
  cmps(c,0,(int32_t)c->r[0],0); // 801AF7B8
  if (!crb(c,2)) { goto L_801AF814; } // 801AF7BC
L_801AF7C0:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801AF7C0
  cmpu(c,0,c->r[6],0x0000000Fu); // 801AF7C4
  c->r[0]=0u+0x00000006u; // 801AF7C8
  W8(c->r[1]+0x00000017u,c->r[3]); // 801AF7CC
  if (!crb(c,2)) { goto L_801AF7D8; } // 801AF7D0
  c->r[0]=0u+0x0000000Cu; // 801AF7D4
L_801AF7D8:;
  W8(c->r[1]+0x00000016u,c->r[0]); // 801AF7D8
  c->r[3]=c->r[1]+0x00000010u; // 801AF7DC
  c->r[4]=c->r[31]+0x00000008u; // 801AF7E0
  c->lr=0x801AF7E8u; f_801AAE54(c); // 801AF7E4
  c->r[3]=R8(c->r[31]+0x00000016u); // 801AF7E8
  c->lr=0x801AF7F0u; f_801C0E1C(c); // 801AF7EC
  c->r[5]=0u+0x802D0000u; // 801AF7F0
  c->r[4]=c->r[1]+0x00000010u; // 801AF7F4
  c->r[5]=c->r[5]+0x000021A8u; // 801AF7F8
  c->r[3]=0u+0x00000002u; // 801AF7FC
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AF800
  c->ctr=c->r[12]; // 801AF804
  if (true) { c->lr=0x801AF80Cu; dispatch(c,c->ctr); } // 801AF808
  c->lr=0x801AF810u; f_801B0C40(c); // 801AF80C
  goto L_801AF93C; // 801AF810
L_801AF814:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801AF814
  c->r[4]=R8(c->r[31]+0x00000015u); // 801AF818
  c->lr=0x801AF820u; f_801A7510(c); // 801AF81C
  c->r[4]=R8(c->r[31]+0x00000015u); // 801AF820
  c->r[5]=c->r[31]+0x00000008u; // 801AF824
  c->r[3]=0u+0x00000017u; // 801AF828
  c->lr=0x801AF830u; f_801AB01C(c); // 801AF82C
  c->r[4]=0u+0x802D0000u; // 801AF830
  c->r[0]=0u+0x00000000u; // 801AF834
  c->r[4]=c->r[4]+0x000021A8u; // 801AF838
  c->r[3]=R8(c->r[4]+0x0000022Du); // 801AF83C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801AF840
  W8(c->r[4]+0x0000022Du,c->r[3]); // 801AF844
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801AF848
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801AF84C
  cmps(c,0,(int32_t)c->r[0],0); // 801AF850
  if (crb(c,2)) { goto L_801AF860; } // 801AF854
  c->r[0]=0u+0x00000006u; // 801AF858
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801AF85C
L_801AF860:;
  c->r[5]=0u+0x802D0000u; // 801AF860
  c->r[3]=c->r[30]|c->r[30]; // 801AF864
  c->r[5]=c->r[5]+0x000021A8u; // 801AF868
  c->r[4]=c->r[1]+0x0000000Cu; // 801AF86C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AF870
  c->ctr=c->r[12]; // 801AF874
  if (true) { c->lr=0x801AF87Cu; dispatch(c,c->ctr); } // 801AF878
  c->r[0]=R8(c->r[31]+0x00000017u); // 801AF87C
  cmps(c,0,(int32_t)c->r[0],0); // 801AF880
  if (crb(c,2)) { goto L_801AF898; } // 801AF884
  c->r[3]=R8(c->r[31]+0x00000016u); // 801AF888
  c->lr=0x801AF890u; f_801C0BB0(c); // 801AF88C
  c->r[3]=c->r[31]|c->r[31]; // 801AF890
  c->lr=0x801AF898u; f_801B0AB0(c); // 801AF894
L_801AF898:;
  c->lr=0x801AF89Cu; f_801B0C40(c); // 801AF898
  c->r[4]=0u+0x00000000u; // 801AF89C
  c->r[3]=0u+0x802D0000u; // 801AF8A0
  W8(c->r[31]+0x00000017u,c->r[4]); // 801AF8A4
  c->r[3]=c->r[3]+0x000021A8u; // 801AF8A8
  W16(c->r[31]+0x00000010u,c->r[4]); // 801AF8AC
  c->r[0]=R8(c->r[3]+0x0000022Du); // 801AF8B0
  cmps(c,0,(int32_t)c->r[0],0); // 801AF8B4
  if (!crb(c,2)) { goto L_801AF93C; } // 801AF8B8
  c->r[0]=R8(c->r[3]+0x0000022Eu); // 801AF8BC
  cmps(c,0,(int32_t)c->r[0],0); // 801AF8C0
  if (crb(c,2)) { goto L_801AF93C; } // 801AF8C4
  W8(c->r[1]+0x00000008u,c->r[4]); // 801AF8C8
  c->lr=0x801AF8D0u; f_801C093C(c); // 801AF8CC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AF8D0
  if (crb(c,2)) { goto L_801AF8E0; } // 801AF8D4
  c->r[0]=0u+0x00000006u; // 801AF8D8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AF8DC
L_801AF8E0:;
  c->r[31]=0u+0x802D0000u; // 801AF8E0
  c->r[30]=0u+0x00000000u; // 801AF8E4
  c->r[31]=c->r[31]+0x000021A8u; // 801AF8E8
L_801AF8EC:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801AF8EC
  c->r[3]=c->r[31]+c->r[0]; // 801AF8F0
  c->r[3]=c->r[3]+0x00000014u; // 801AF8F4
  c->lr=0x801AF8FCu; f_801AB5A0(c); // 801AF8F8
  c->r[30]=c->r[30]+0x00000001u; // 801AF8FC
  cmpu(c,0,c->r[30],0x00000010u); // 801AF900
  if (crb(c,0)) { IRQCHK(c); goto L_801AF8EC; } // 801AF904
  c->r[31]=0u+0x802D0000u; // 801AF908
  c->r[31]=c->r[31]+0x000021A8u; // 801AF90C
  c->r[3]=c->r[31]+0x00000228u; // 801AF910
  c->lr=0x801AF918u; f_801AB5A0(c); // 801AF914
  c->r[12]=R32(c->r[31]+0x00000224u); // 801AF918
  c->r[4]=c->r[1]+0x00000008u; // 801AF91C
  c->r[3]=0u+0x00000001u; // 801AF920
  c->ctr=c->r[12]; // 801AF924
  if (true) { c->lr=0x801AF92Cu; dispatch(c,c->ctr); } // 801AF928
  c->r[3]=c->r[31]|c->r[31]; // 801AF92C
  c->r[4]=0u+0x00000000u; // 801AF930
  c->r[5]=0u+0x00000230u; // 801AF934
  c->lr=0x801AF93Cu; f_800046B4(c); // 801AF938
L_801AF93C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AF93C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AF940
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AF944
  c->lr=c->r[0]; // 801AF948
  c->r[1]=c->r[1]+0x00000020u; // 801AF94C
  return; // 801AF950
}

// bta_hh_get_dscp_act
void f_801AF954(Ctx* __restrict c) {
  trace_call(0x801AF954u);
  c->r[5]=0u+0x802D0000u; // 801AF954
  c->r[4]=c->r[3]|c->r[3]; // 801AF958
  c->r[5]=c->r[5]+0x000021A8u; // 801AF95C
  c->r[3]=0u+0x0000000Au; // 801AF960
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AF964
  c->ctr=c->r[12]; // 801AF968
  if (true) { dispatch(c,c->ctr); return; } // 801AF96C
}

// bta_hh_maint_dev_act
void f_801AF970(Ctx* __restrict c) {
  trace_call(0x801AF970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF970
  c->r[0]=c->lr; // 801AF974
  c->r[5]=0u+0x00000006u; // 801AF978
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AF97C
  c->r[0]=0u+0x000000FFu; // 801AF980
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AF984
  c->r[31]=c->r[4]|c->r[4]; // 801AF988
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AF98C
  c->r[30]=c->r[3]|c->r[3]; // 801AF990
  W8(c->r[1]+0x00000016u,c->r[5]); // 801AF994
  W8(c->r[1]+0x00000017u,c->r[0]); // 801AF998
  c->r[0]=R16(c->r[4]+0x00000010u); // 801AF99C
  cmps(c,0,(int32_t)c->r[0],12); // 801AF9A0
  if (crb(c,2)) { goto L_801AFA40; } // 801AF9A4
  if (!crb(c,0)) { goto L_801AFA84; } // 801AF9A8
  cmps(c,0,(int32_t)c->r[0],11); // 801AF9AC
  if (!crb(c,0)) { goto L_801AF9B8; } // 801AF9B0
  goto L_801AFA84; // 801AF9B4
L_801AF9B8:;
  c->r[3]=c->r[1]+0x00000010u; // 801AF9B8
  c->r[4]=c->r[4]+0x00000008u; // 801AF9BC
  c->lr=0x801AF9C4u; f_801AAE54(c); // 801AF9C0
  c->r[3]=R8(c->r[30]+0x00000016u); // 801AF9C4
  cmpu(c,0,c->r[3],0x000000FFu); // 801AF9C8
  if (!crb(c,2)) { goto L_801AFA2C; } // 801AF9CC
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801AF9D0
  c->r[3]=c->r[31]+0x00000008u; // 801AF9D4
  c->r[5]=c->r[1]+0x00000008u; // 801AF9D8
  c->lr=0x801AF9E0u; f_801C0A20(c); // 801AF9DC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AF9E0
  if (!crb(c,2)) { goto L_801AFA38; } // 801AF9E4
  c->r[4]=R8(c->r[1]+0x00000008u); // 801AF9E8
  c->r[0]=0u+0x00000000u; // 801AF9EC
  W8(c->r[1]+0x00000016u,c->r[0]); // 801AF9F0
  c->r[3]=c->r[30]|c->r[30]; // 801AF9F4
  c->r[6]=0u+0x00000000u; // 801AF9F8
  W8(c->r[1]+0x00000017u,c->r[4]); // 801AF9FC
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 801AFA00
  c->r[7]=R8(c->r[31]+0x00000012u); // 801AFA04
  c->r[8]=R8(c->r[31]+0x00000013u); // 801AFA08
  c->lr=0x801AFA10u; f_801B0B30(c); // 801AFA0C
  c->r[3]=0u+0x802D0000u; // 801AFA10
  c->r[0]=R8(c->r[1]+0x00000008u); // 801AFA14
  c->r[3]=c->r[3]+0x000021A8u; // 801AFA18
  c->r[4]=R8(c->r[30]+0x00000012u); // 801AFA1C
  c->r[3]=c->r[3]+c->r[0]; // 801AFA20
  W8(c->r[3]+0x00000214u,c->r[4]); // 801AFA24
  goto L_801AFA38; // 801AFA28
L_801AFA2C:;
  c->r[0]=0u+0x00000000u; // 801AFA2C
  W8(c->r[1]+0x00000017u,c->r[3]); // 801AFA30
  W8(c->r[1]+0x00000016u,c->r[0]); // 801AFA34
L_801AFA38:;
  c->lr=0x801AFA3Cu; f_801B0C40(c); // 801AFA38
  goto L_801AFAA0; // 801AFA3C
L_801AFA40:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 801AFA40
  c->r[3]=c->r[1]+0x00000010u; // 801AFA44
  c->r[4]=c->r[30]+0x00000008u; // 801AFA48
  W8(c->r[1]+0x00000017u,c->r[0]); // 801AFA4C
  c->lr=0x801AFA54u; f_801AAE54(c); // 801AFA50
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 801AFA54
  cmpu(c,0,c->r[0],0x00000003u); // 801AFA58
  if (crb(c,2)) { goto L_801AFAA0; } // 801AFA5C
  c->r[3]=R8(c->r[1]+0x00000017u); // 801AFA60
  c->lr=0x801AFA68u; f_801C0BB0(c); // 801AFA64
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801AFA68
  if (!crb(c,2)) { goto L_801AFAA0; } // 801AFA6C
  c->r[0]=0u+0x00000000u; // 801AFA70
  c->r[3]=c->r[30]|c->r[30]; // 801AFA74
  W8(c->r[1]+0x00000016u,c->r[0]); // 801AFA78
  c->lr=0x801AFA80u; f_801B0AB0(c); // 801AFA7C
  goto L_801AFAA0; // 801AFA80
L_801AFA84:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AFA84
  cmpu(c,0,c->r[0],0x00000005u); // 801AFA88
  if (crb(c,0)) { goto L_801AFAA0; } // 801AFA8C
  c->r[4]=0u+0x80240000u; // 801AFA90
  c->r[3]=0u+0x00000504u; // 801AFA94
  c->r[4]=c->r[4]+0x000046E8u; // 801AFA98
  c->lr=0x801AFAA0u; f_801AA7C0(c); // 801AFA9C
L_801AFAA0:;
  c->r[5]=0u+0x802D0000u; // 801AFAA0
  c->r[4]=c->r[1]+0x00000010u; // 801AFAA4
  c->r[5]=c->r[5]+0x000021A8u; // 801AFAA8
  c->r[3]=R16(c->r[31]+0x00000010u); // 801AFAAC
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AFAB0
  c->ctr=c->r[12]; // 801AFAB4
  if (true) { c->lr=0x801AFABCu; dispatch(c,c->ctr); } // 801AFAB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFABC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AFAC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AFAC4
  c->lr=c->r[0]; // 801AFAC8
  c->r[1]=c->r[1]+0x00000020u; // 801AFACC
  return; // 801AFAD0
}

// bta_hh_get_acl_q_info
void f_801AFAD4(Ctx* __restrict c) {
  trace_call(0x801AFAD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFAD4
  c->r[0]=c->lr; // 801AFAD8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801AFADC
  c->r[11]=c->r[1]+0x00000040u; // 801AFAE0
  c->lr=0x801AFAE8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801AFAE4
  c->r[3]=c->r[1]+0x00000008u; // 801AFAE8
  c->r[31]=0u+0x00000000u; // 801AFAEC
  c->r[4]=0u+0x00000000u; // 801AFAF0
  c->r[5]=0u+0x0000001Eu; // 801AFAF4
  c->lr=0x801AFAFCu; f_800046B4(c); // 801AFAF8
  c->r[30]=0u+0x802D0000u; // 801AFAFC
  c->r[29]=0u+0x802D0000u; // 801AFB00
  c->r[30]=c->r[30]+0x00005098u; // 801AFB04
  c->r[27]=0u+0x00000000u; // 801AFB08
  c->r[29]=c->r[29]+0x000021A8u; // 801AFB0C
L_801AFB10:;
  c->r[0]=rotl(c->r[27],5)&0x00001FE0u; // 801AFB10
  c->r[3]=c->r[29]+c->r[0]; // 801AFB14
  c->r[0]=R8(c->r[3]+0x00000028u); // 801AFB18
  cmps(c,0,(int32_t)c->r[0],0); // 801AFB1C
  if (crb(c,2)) { goto L_801AFB90; } // 801AFB20
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 801AFB24
  cmpu(c,0,c->r[0],0x00000003u); // 801AFB28
  if (!crb(c,2)) { goto L_801AFB90; } // 801AFB2C
  c->r[4]=R8(c->r[3]+0x00000026u); // 801AFB30
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801AFB34
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 801AFB38
  c->r[28]=c->r[1]+0x00000008u; // 801AFB3C
  c->r[3]=0u+0x00000000u; // 801AFB40
  c->r[28]=c->r[28]+c->r[5]; // 801AFB44
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 801AFB48
  W8(c->r[28]+0x00000006u,c->r[4]); // 801AFB4C
  c->r[4]=c->r[30]+c->r[0]; // 801AFB50
  c->r[4]=R16(c->r[4]+0x00000016u); // 801AFB54
  c->lr=0x801AFB5Cu; f_801C8A38(c); // 801AFB58
  cmps(c,0,(int32_t)c->r[3],0); // 801AFB5C
  if (crb(c,2)) { goto L_801AFB8C; } // 801AFB60
  c->r[3]=R32(c->r[3]+0x00000010u); // 801AFB64
  cmps(c,0,(int32_t)c->r[3],0); // 801AFB68
  if (crb(c,2)) { goto L_801AFB8C; } // 801AFB6C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801AFB70
  cmps(c,0,(int32_t)c->r[0],0); // 801AFB74
  if (crb(c,2)) { goto L_801AFB8C; } // 801AFB78
  c->r[0]=R16(c->r[3]+0x0000004Cu); // 801AFB7C
  W16(c->r[28]+0x00000008u,c->r[0]); // 801AFB80
  c->r[0]=R16(c->r[3]+0x00000038u); // 801AFB84
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801AFB88
L_801AFB8C:;
  c->r[31]=c->r[31]+0x00000001u; // 801AFB8C
L_801AFB90:;
  c->r[27]=c->r[27]+0x00000001u; // 801AFB90
  cmpu(c,0,c->r[27],0x00000010u); // 801AFB94
  if (crb(c,0)) { IRQCHK(c); goto L_801AFB10; } // 801AFB98
  c->r[4]=0u+0x802D0000u; // 801AFB9C
  c->r[3]=0u+0x802D0000u; // 801AFBA0
  c->r[4]=c->r[4]+0x000054A0u; // 801AFBA4
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801AFBA8
  c->r[3]=c->r[3]+0x000021A8u; // 801AFBAC
  c->r[6]=R16(c->r[4]+0x00000004u); // 801AFBB0
  c->r[5]=R16(c->r[4]+0x00000002u); // 801AFBB4
  c->r[4]=c->r[1]+0x00000008u; // 801AFBB8
  c->r[12]=R32(c->r[3]+0x00000224u); // 801AFBBC
  c->r[3]=0u+0x0000000Fu; // 801AFBC0
  W16(c->r[1]+0x00000008u,c->r[6]); // 801AFBC4
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801AFBC8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801AFBCC
  c->ctr=c->r[12]; // 801AFBD0
  if (true) { c->lr=0x801AFBD8u; dispatch(c,c->ctr); } // 801AFBD4
  c->r[11]=c->r[1]+0x00000040u; // 801AFBD8
  c->lr=0x801AFBE0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801AFBDC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801AFBE0
  c->lr=c->r[0]; // 801AFBE4
  c->r[1]=c->r[1]+0x00000040u; // 801AFBE8
  return; // 801AFBEC
}

// bta_hh_write_dev_act
void f_801AFBF0(Ctx* __restrict c) {
  trace_call(0x801AFBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFBF0
  c->r[0]=c->lr; // 801AFBF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AFBF8
  c->r[0]=0u+0x00000000u; // 801AFBFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AFC00
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AFC04
  c->r[30]=c->r[4]|c->r[4]; // 801AFC08
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AFC0C
  c->r[29]=c->r[3]|c->r[3]; // 801AFC10
  W16(c->r[1]+0x00000008u,c->r[0]); // 801AFC14
  c->r[31]=R8(c->r[4]+0x00000008u); // 801AFC18
  c->r[0]=R8(c->r[3]+0x00000016u); // 801AFC1C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801AFC20
  c->r[3]=R8(c->r[3]+0x00000016u); // 801AFC24
  c->r[4]=R8(c->r[4]+0x00000008u); // 801AFC28
  c->r[5]=R8(c->r[30]+0x00000009u); // 801AFC2C
  c->r[6]=R16(c->r[30]+0x0000000Cu); // 801AFC30
  c->r[7]=R8(c->r[30]+0x0000000Au); // 801AFC34
  c->r[8]=R32(c->r[30]+0x00000010u); // 801AFC38
  c->lr=0x801AFC40u; f_801C0CDC(c); // 801AFC3C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801AFC40
  if (crb(c,2)) { goto L_801AFCCC; } // 801AFC44
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AFC48
  cmpu(c,0,c->r[0],0x00000001u); // 801AFC4C
  if (crb(c,0)) { goto L_801AFC64; } // 801AFC50
  c->r[4]=0u+0x80240000u; // 801AFC54
  c->r[3]=0u+0x00000500u; // 801AFC58
  c->r[4]=c->r[4]+0x000046F8u; // 801AFC5C
  c->lr=0x801AFC64u; f_801AA7E0(c); // 801AFC60
L_801AFC64:;
  c->r[0]=0u+0x00000006u; // 801AFC64
  W8(c->r[1]+0x00000008u,c->r[0]); // 801AFC68
  c->r[0]=R8(c->r[30]+0x00000008u); // 801AFC6C
  cmpu(c,0,c->r[0],0x00000001u); // 801AFC70
  if (crb(c,2)) { goto L_801AFCA0; } // 801AFC74
  cmpu(c,0,c->r[0],0x0000000Au); // 801AFC78
  if (crb(c,2)) { goto L_801AFCA0; } // 801AFC7C
  c->r[5]=0u+0x802D0000u; // 801AFC80
  c->r[3]=c->r[31]|c->r[31]; // 801AFC84
  c->r[5]=c->r[5]+0x000021A8u; // 801AFC88
  c->r[4]=c->r[1]+0x00000008u; // 801AFC8C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AFC90
  c->ctr=c->r[12]; // 801AFC94
  if (true) { c->lr=0x801AFC9Cu; dispatch(c,c->ctr); } // 801AFC98
  goto L_801AFD9C; // 801AFC9C
L_801AFCA0:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801AFCA0
  cmpu(c,0,c->r[0],0x00000005u); // 801AFCA4
  if (!crb(c,2)) { goto L_801AFD9C; } // 801AFCA8
  c->r[5]=0u+0x802D0000u; // 801AFCAC
  c->r[4]=c->r[1]+0x00000008u; // 801AFCB0
  c->r[5]=c->r[5]+0x000021A8u; // 801AFCB4
  c->r[3]=0u+0x0000000Du; // 801AFCB8
  c->r[12]=R32(c->r[5]+0x00000224u); // 801AFCBC
  c->ctr=c->r[12]; // 801AFCC0
  if (true) { c->lr=0x801AFCC8u; dispatch(c,c->ctr); } // 801AFCC4
  goto L_801AFD9C; // 801AFCC8
L_801AFCCC:;
  c->r[5]=R8(c->r[30]+0x00000008u); // 801AFCCC
  cmps(c,0,(int32_t)c->r[5],10); // 801AFCD0
  if (crb(c,2)) { goto L_801AFD00; } // 801AFCD4
  if (!crb(c,0)) { goto L_801AFD18; } // 801AFCD8
  cmps(c,0,(int32_t)c->r[5],1); // 801AFCDC
  if (crb(c,2)) { goto L_801AFD00; } // 801AFCE0
  if (crb(c,0)) { goto L_801AFD18; } // 801AFCE4
  cmps(c,0,(int32_t)c->r[5],4); // 801AFCE8
  if (!crb(c,0)) { goto L_801AFCF8; } // 801AFCEC
  goto L_801AFD18; // 801AFCF0
  goto L_801AFD18; // 801AFCF4
L_801AFCF8:;
  W16(c->r[29]+0x00000010u,c->r[31]); // 801AFCF8
  goto L_801AFD34; // 801AFCFC
L_801AFD00:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801AFD00
  cmpu(c,0,c->r[0],0x00000005u); // 801AFD04
  if (!crb(c,2)) { goto L_801AFD34; } // 801AFD08
  c->r[0]=0u+0x00000001u; // 801AFD0C
  W8(c->r[29]+0x00000017u,c->r[0]); // 801AFD10
  goto L_801AFD34; // 801AFD14
L_801AFD18:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AFD18
  cmpu(c,0,c->r[0],0x00000005u); // 801AFD1C
  if (crb(c,0)) { goto L_801AFD34; } // 801AFD20
  c->r[4]=0u+0x80240000u; // 801AFD24
  c->r[3]=0u+0x00000504u; // 801AFD28
  c->r[4]=c->r[4]+0x00004714u; // 801AFD2C
  c->lr=0x801AFD34u; f_801AA7E0(c); // 801AFD30
L_801AFD34:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 801AFD34
  cmpu(c,0,c->r[0],0x00000001u); // 801AFD38
  if (crb(c,2)) { goto L_801AFD64; } // 801AFD3C
  c->r[4]=R8(c->r[29]+0x00000015u); // 801AFD40
  c->r[5]=c->r[29]+0x00000008u; // 801AFD44
  c->r[3]=0u+0x00000017u; // 801AFD48
  c->lr=0x801AFD50u; f_801AB148(c); // 801AFD4C
  c->r[4]=R8(c->r[29]+0x00000015u); // 801AFD50
  c->r[5]=c->r[29]+0x00000008u; // 801AFD54
  c->r[3]=0u+0x00000017u; // 801AFD58
  c->lr=0x801AFD60u; f_801AB114(c); // 801AFD5C
  goto L_801AFD9C; // 801AFD60
L_801AFD64:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801AFD64
  cmpu(c,0,c->r[0],0x00000003u); // 801AFD68
  if (!crb(c,2)) { goto L_801AFD84; } // 801AFD6C
  c->r[4]=R8(c->r[29]+0x00000015u); // 801AFD70
  c->r[5]=c->r[29]+0x00000008u; // 801AFD74
  c->r[3]=0u+0x00000017u; // 801AFD78
  c->lr=0x801AFD80u; f_801AB0E0(c); // 801AFD7C
  goto L_801AFD9C; // 801AFD80
L_801AFD84:;
  cmpu(c,0,c->r[0],0x00000004u); // 801AFD84
  if (!crb(c,2)) { goto L_801AFD9C; } // 801AFD88
  c->r[4]=R8(c->r[29]+0x00000015u); // 801AFD8C
  c->r[5]=c->r[29]+0x00000008u; // 801AFD90
  c->r[3]=0u+0x00000017u; // 801AFD94
  c->lr=0x801AFD9Cu; f_801AB148(c); // 801AFD98
L_801AFD9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AFD9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AFDA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AFDA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AFDA8
  c->lr=c->r[0]; // 801AFDAC
  c->r[1]=c->r[1]+0x00000020u; // 801AFDB0
  return; // 801AFDB4
}

// bta_hh_cback
void f_801AFDB8(Ctx* __restrict c) {
  trace_call(0x801AFDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFDB8
  c->r[0]=c->lr; // 801AFDBC
  c->r[7]=0u+0x80240000u; // 801AFDC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AFDC4
  c->r[7]=c->r[7]+0x00004390u; // 801AFDC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AFDCC
  c->r[31]=0u+0x00001710u; // 801AFDD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AFDD4
  c->r[30]=c->r[5]|c->r[5]; // 801AFDD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AFDDC
  c->r[29]=c->r[4]|c->r[4]; // 801AFDE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801AFDE4
  c->r[28]=c->r[3]|c->r[3]; // 801AFDE8
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801AFDEC
  W32(c->r[1]+0x00000008u,c->r[6]); // 801AFDF0
  cmpu(c,0,c->r[0],0x00000005u); // 801AFDF4
  if (crb(c,0)) { goto L_801AFE74; } // 801AFDF8
  cmpu(c,0,c->r[4],0x00000008u); // 801AFDFC
  if (crb(c,1)) { goto L_801AFE64; } // 801AFE00
  c->r[3]=0u+0x80240000u; // 801AFE04
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801AFE08
  c->r[3]=c->r[3]+0x00004864u; // 801AFE0C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801AFE10
  c->ctr=c->r[3]; // 801AFE14
  if (true) { switch (c->ctr) { case 0x801AFE1Cu: goto L_801AFE1C; case 0x801AFE24u: goto L_801AFE24; case 0x801AFE2Cu: goto L_801AFE2C; case 0x801AFE34u: goto L_801AFE34; case 0x801AFE3Cu: goto L_801AFE3C; case 0x801AFE44u: goto L_801AFE44; case 0x801AFE4Cu: goto L_801AFE4C; case 0x801AFE54u: goto L_801AFE54; case 0x801AFE5Cu: goto L_801AFE5C; case 0x801AFE94u: goto L_801AFE94; case 0x801AFE9Cu: goto L_801AFE9C; case 0x801AFEA4u: goto L_801AFEA4; case 0x801AFEACu: goto L_801AFEAC; case 0x801AFEB4u: goto L_801AFEB4; case 0x801AFEBCu: goto L_801AFEBC; case 0x801AFEC8u: goto L_801AFEC8; case 0x801B0000u: goto L_801B0000; default: break; } dispatch(c,c->ctr); return; } // 801AFE18
L_801AFE1C:;
  c->r[5]=c->r[7]+0x000003ACu; // 801AFE1C
  goto L_801AFE68; // 801AFE20
L_801AFE24:;
  c->r[5]=c->r[7]+0x000003C0u; // 801AFE24
  goto L_801AFE68; // 801AFE28
L_801AFE2C:;
  c->r[5]=c->r[7]+0x000003D4u; // 801AFE2C
  goto L_801AFE68; // 801AFE30
L_801AFE34:;
  c->r[5]=c->r[7]+0x000003ECu; // 801AFE34
  goto L_801AFE68; // 801AFE38
L_801AFE3C:;
  c->r[5]=c->r[7]+0x00000404u; // 801AFE3C
  goto L_801AFE68; // 801AFE40
L_801AFE44:;
  c->r[5]=c->r[7]+0x0000041Cu; // 801AFE44
  goto L_801AFE68; // 801AFE48
L_801AFE4C:;
  c->r[5]=c->r[7]+0x00000434u; // 801AFE4C
  goto L_801AFE68; // 801AFE50
L_801AFE54:;
  c->r[5]=c->r[7]+0x0000044Cu; // 801AFE54
  goto L_801AFE68; // 801AFE58
L_801AFE5C:;
  c->r[5]=c->r[7]+0x00000464u; // 801AFE5C
  goto L_801AFE68; // 801AFE60
L_801AFE64:;
  c->r[5]=c->r[7]+0x0000047Cu; // 801AFE64
L_801AFE68:;
  c->r[4]=c->r[7]+0x00000490u; // 801AFE68
  c->r[3]=0u+0x00000504u; // 801AFE6C
  c->lr=0x801AFE74u; f_801AA7E0(c); // 801AFE70
L_801AFE74:;
  cmpu(c,0,c->r[29],0x00000008u); // 801AFE74
  if (crb(c,1)) { goto L_801B0000; } // 801AFE78
  c->r[3]=0u+0x80240000u; // 801AFE7C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801AFE80
  c->r[3]=c->r[3]+0x00004840u; // 801AFE84
  c->r[3]=R32(c->r[3]+c->r[0]); // 801AFE88
  c->ctr=c->r[3]; // 801AFE8C
  if (true) { switch (c->ctr) { case 0x801AFE1Cu: goto L_801AFE1C; case 0x801AFE24u: goto L_801AFE24; case 0x801AFE2Cu: goto L_801AFE2C; case 0x801AFE34u: goto L_801AFE34; case 0x801AFE3Cu: goto L_801AFE3C; case 0x801AFE44u: goto L_801AFE44; case 0x801AFE4Cu: goto L_801AFE4C; case 0x801AFE54u: goto L_801AFE54; case 0x801AFE5Cu: goto L_801AFE5C; case 0x801AFE94u: goto L_801AFE94; case 0x801AFE9Cu: goto L_801AFE9C; case 0x801AFEA4u: goto L_801AFEA4; case 0x801AFEACu: goto L_801AFEAC; case 0x801AFEB4u: goto L_801AFEB4; case 0x801AFEBCu: goto L_801AFEBC; case 0x801AFEC8u: goto L_801AFEC8; case 0x801B0000u: goto L_801B0000; default: break; } dispatch(c,c->ctr); return; } // 801AFE90
L_801AFE94:;
  c->r[31]=0u+0x00001702u; // 801AFE94
  goto L_801B0000; // 801AFE98
L_801AFE9C:;
  c->r[31]=0u+0x00001703u; // 801AFE9C
  goto L_801B0000; // 801AFEA0
L_801AFEA4:;
  c->r[31]=0u+0x00001704u; // 801AFEA4
  goto L_801B0000; // 801AFEA8
L_801AFEAC:;
  c->r[31]=0u+0x00001706u; // 801AFEAC
  goto L_801B0000; // 801AFEB0
L_801AFEB4:;
  c->r[31]=0u+0x00001705u; // 801AFEB4
  goto L_801B0000; // 801AFEB8
L_801AFEBC:;
  c->r[3]=c->r[1]+0x00000008u; // 801AFEBC
  c->lr=0x801AFEC4u; f_801AB5A0(c); // 801AFEC0
  goto L_801B0000; // 801AFEC4
L_801AFEC8:;
  c->r[4]=0u+0x802D0000u; // 801AFEC8
  c->r[0]=0u+0x00000002u; // 801AFECC
  c->r[4]=c->r[4]+0x000021A8u; // 801AFED0
  c->r[5]=0u+0x00000000u; // 801AFED4
  c->ctr=c->r[0]; // 801AFED8
L_801AFEDC:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801AFEDC
  c->r[3]=c->r[4]+c->r[0]; // 801AFEE0
  c->r[0]=R8(c->r[3]+0x00000026u); // 801AFEE4
  cmpu(c,0,c->r[28],c->r[0]); // 801AFEE8
  if (!crb(c,2)) { goto L_801AFEFC; } // 801AFEEC
  c->r[0]=0u+0x00000001u; // 801AFEF0
  W8(c->r[3]+0x00000027u,c->r[0]); // 801AFEF4
  goto L_801B0000; // 801AFEF8
L_801AFEFC:;
  c->r[5]=c->r[5]+0x00000001u; // 801AFEFC
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801AFF00
  c->r[3]=c->r[4]+c->r[0]; // 801AFF04
  c->r[0]=R8(c->r[3]+0x00000026u); // 801AFF08
  cmpu(c,0,c->r[28],c->r[0]); // 801AFF0C
  if (!crb(c,2)) { goto L_801AFF20; } // 801AFF10
  c->r[0]=0u+0x00000001u; // 801AFF14
  W8(c->r[3]+0x00000027u,c->r[0]); // 801AFF18
  goto L_801B0000; // 801AFF1C
L_801AFF20:;
  c->r[5]=c->r[5]+0x00000001u; // 801AFF20
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801AFF24
  c->r[3]=c->r[4]+c->r[0]; // 801AFF28
  c->r[0]=R8(c->r[3]+0x00000026u); // 801AFF2C
  cmpu(c,0,c->r[28],c->r[0]); // 801AFF30
  if (!crb(c,2)) { goto L_801AFF44; } // 801AFF34
  c->r[0]=0u+0x00000001u; // 801AFF38
  W8(c->r[3]+0x00000027u,c->r[0]); // 801AFF3C
  goto L_801B0000; // 801AFF40
L_801AFF44:;
  c->r[5]=c->r[5]+0x00000001u; // 801AFF44
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801AFF48
  c->r[3]=c->r[4]+c->r[0]; // 801AFF4C
  c->r[0]=R8(c->r[3]+0x00000026u); // 801AFF50
  cmpu(c,0,c->r[28],c->r[0]); // 801AFF54
  if (!crb(c,2)) { goto L_801AFF68; } // 801AFF58
  c->r[0]=0u+0x00000001u; // 801AFF5C
  W8(c->r[3]+0x00000027u,c->r[0]); // 801AFF60
  goto L_801B0000; // 801AFF64
L_801AFF68:;
  c->r[5]=c->r[5]+0x00000001u; // 801AFF68
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801AFF6C
  c->r[3]=c->r[4]+c->r[0]; // 801AFF70
  c->r[0]=R8(c->r[3]+0x00000026u); // 801AFF74
  cmpu(c,0,c->r[28],c->r[0]); // 801AFF78
  if (!crb(c,2)) { goto L_801AFF8C; } // 801AFF7C
  c->r[0]=0u+0x00000001u; // 801AFF80
  W8(c->r[3]+0x00000027u,c->r[0]); // 801AFF84
  goto L_801B0000; // 801AFF88
L_801AFF8C:;
  c->r[5]=c->r[5]+0x00000001u; // 801AFF8C
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801AFF90
  c->r[3]=c->r[4]+c->r[0]; // 801AFF94
  c->r[0]=R8(c->r[3]+0x00000026u); // 801AFF98
  cmpu(c,0,c->r[28],c->r[0]); // 801AFF9C
  if (!crb(c,2)) { goto L_801AFFB0; } // 801AFFA0
  c->r[0]=0u+0x00000001u; // 801AFFA4
  W8(c->r[3]+0x00000027u,c->r[0]); // 801AFFA8
  goto L_801B0000; // 801AFFAC
L_801AFFB0:;
  c->r[5]=c->r[5]+0x00000001u; // 801AFFB0
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801AFFB4
  c->r[3]=c->r[4]+c->r[0]; // 801AFFB8
  c->r[0]=R8(c->r[3]+0x00000026u); // 801AFFBC
  cmpu(c,0,c->r[28],c->r[0]); // 801AFFC0
  if (!crb(c,2)) { goto L_801AFFD4; } // 801AFFC4
  c->r[0]=0u+0x00000001u; // 801AFFC8
  W8(c->r[3]+0x00000027u,c->r[0]); // 801AFFCC
  goto L_801B0000; // 801AFFD0
L_801AFFD4:;
  c->r[5]=c->r[5]+0x00000001u; // 801AFFD4
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801AFFD8
  c->r[3]=c->r[4]+c->r[0]; // 801AFFDC
  c->r[0]=R8(c->r[3]+0x00000026u); // 801AFFE0
  cmpu(c,0,c->r[28],c->r[0]); // 801AFFE4
  if (!crb(c,2)) { goto L_801AFFF8; } // 801AFFE8
  c->r[0]=0u+0x00000001u; // 801AFFEC
  W8(c->r[3]+0x00000027u,c->r[0]); // 801AFFF0
  goto L_801B0000; // 801AFFF4
L_801AFFF8:;
  c->r[5]=c->r[5]+0x00000001u; // 801AFFF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801AFEDC; } // 801AFFFC
L_801B0000:;
  cmpu(c,0,c->r[31],0x00001710u); // 801B0000
  if (crb(c,2)) { goto L_801B0030; } // 801B0004
  c->r[3]=0u+0x00000018u; // 801B0008
  c->lr=0x801B0010u; f_801A7A70(c); // 801B000C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0010
  if (crb(c,2)) { goto L_801B0030; } // 801B0014
  W16(c->r[3]+0x00000000u,c->r[31]); // 801B0018
  W16(c->r[3]+0x00000006u,c->r[28]); // 801B001C
  W32(c->r[3]+0x00000008u,c->r[30]); // 801B0020
  c->r[0]=R32(c->r[1]+0x00000008u); // 801B0024
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801B0028
  c->lr=0x801B0030u; f_801AB300(c); // 801B002C
L_801B0030:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0030
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0034
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0038
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B003C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B0040
  c->lr=c->r[0]; // 801B0044
  c->r[1]=c->r[1]+0x00000020u; // 801B0048
  return; // 801B004C
}

// BTA_HhEnable
void f_801B0050(Ctx* __restrict c) {
  trace_call(0x801B0050u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0050
  c->r[0]=c->lr; // 801B0054
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B005C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0060
  c->r[30]=c->r[4]|c->r[4]; // 801B0064
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0068
  c->r[29]=c->r[3]|c->r[3]; // 801B006C
  c->lr=0x801B0074u; f_801A9100(c); // 801B0070
  c->r[3]=0u+0x00000017u; // 801B0074
  c->r[4]=c->r[2]+0xFFFFAE40u; // 801B0078
  c->lr=0x801B0080u; f_801AB2EC(c); // 801B007C
  c->lr=0x801B0084u; f_801A9110(c); // 801B0080
  c->r[3]=0u+0x00000034u; // 801B0084
  c->lr=0x801B008Cu; f_801A7A70(c); // 801B0088
  cmps(c,0,(int32_t)c->r[3],0); // 801B008C
  c->r[31]=c->r[3]|c->r[3]; // 801B0090
  if (crb(c,2)) { goto L_801B00BC; } // 801B0094
  c->r[4]=0u+0x00000000u; // 801B0098
  c->r[5]=0u+0x00000034u; // 801B009C
  c->lr=0x801B00A4u; f_800046B4(c); // 801B00A0
  c->r[0]=0u+0x0000170Cu; // 801B00A4
  c->r[3]=c->r[31]|c->r[31]; // 801B00A8
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B00AC
  W32(c->r[31]+0x00000030u,c->r[30]); // 801B00B0
  W8(c->r[31]+0x00000008u,c->r[29]); // 801B00B4
  c->lr=0x801B00BCu; f_801AB300(c); // 801B00B8
L_801B00BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B00BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B00C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B00C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B00C8
  c->lr=c->r[0]; // 801B00CC
  c->r[1]=c->r[1]+0x00000020u; // 801B00D0
  return; // 801B00D4
}

// BTA_HhDisable
void f_801B00D8(Ctx* __restrict c) {
  trace_call(0x801B00D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B00D8
  c->r[0]=c->lr; // 801B00DC
  c->r[3]=0u+0x00000008u; // 801B00E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B00E4
  c->lr=0x801B00ECu; f_801A7A70(c); // 801B00E8
  cmps(c,0,(int32_t)c->r[3],0); // 801B00EC
  if (crb(c,2)) { goto L_801B0100; } // 801B00F0
  c->r[0]=0u+0x0000170Du; // 801B00F4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801B00F8
  c->lr=0x801B0100u; f_801AB300(c); // 801B00FC
L_801B0100:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0100
  c->lr=c->r[0]; // 801B0104
  c->r[1]=c->r[1]+0x00000010u; // 801B0108
  return; // 801B010C
}

// BTA_HhClose
void f_801B0110(Ctx* __restrict c) {
  trace_call(0x801B0110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0110
  c->r[0]=c->lr; // 801B0114
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B011C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0120
  c->r[30]=c->r[3]|c->r[3]; // 801B0124
  c->r[3]=0u+0x00000008u; // 801B0128
  c->lr=0x801B0130u; f_801A7A70(c); // 801B012C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0130
  c->r[31]=c->r[3]|c->r[3]; // 801B0134
  if (crb(c,2)) { goto L_801B015C; } // 801B0138
  c->r[4]=0u+0x00000000u; // 801B013C
  c->r[5]=0u+0x00000008u; // 801B0140
  c->lr=0x801B0148u; f_800046B4(c); // 801B0144
  c->r[0]=0u+0x00001701u; // 801B0148
  c->r[3]=c->r[31]|c->r[31]; // 801B014C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B0150
  W16(c->r[31]+0x00000006u,c->r[30]); // 801B0154
  c->lr=0x801B015Cu; f_801AB300(c); // 801B0158
L_801B015C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B015C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0160
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0164
  c->lr=c->r[0]; // 801B0168
  c->r[1]=c->r[1]+0x00000010u; // 801B016C
  return; // 801B0170
}

// BTA_HhOpen
void f_801B0174(Ctx* __restrict c) {
  trace_call(0x801B0174u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0174
  c->r[0]=c->lr; // 801B0178
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B017C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0180
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0184
  c->r[30]=c->r[5]|c->r[5]; // 801B0188
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B018C
  c->r[29]=c->r[4]|c->r[4]; // 801B0190
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B0194
  c->r[28]=c->r[3]|c->r[3]; // 801B0198
  c->r[3]=0u+0x00000010u; // 801B019C
  c->lr=0x801B01A4u; f_801A7A70(c); // 801B01A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B01A4
  c->r[31]=c->r[3]|c->r[3]; // 801B01A8
  if (crb(c,2)) { goto L_801B01EC; } // 801B01AC
  c->r[4]=0u+0x00000000u; // 801B01B0
  c->r[5]=0u+0x00000010u; // 801B01B4
  c->lr=0x801B01BCu; f_800046B4(c); // 801B01B8
  c->r[3]=0u+0x00001700u; // 801B01BC
  c->r[0]=0u+0x000000FFu; // 801B01C0
  W16(c->r[31]+0x00000000u,c->r[3]); // 801B01C4
  c->r[4]=c->r[28]|c->r[28]; // 801B01C8
  c->r[3]=c->r[31]+0x00000008u; // 801B01CC
  W16(c->r[31]+0x00000006u,c->r[0]); // 801B01D0
  W8(c->r[31]+0x0000000Eu,c->r[30]); // 801B01D4
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 801B01D8
  c->lr=0x801B01E0u; f_801AAE54(c); // 801B01DC
  c->r[3]=c->r[31]|c->r[31]; // 801B01E0
  c->lr=0x801B01E8u; f_801AB300(c); // 801B01E4
  goto L_801B0208; // 801B01E8
L_801B01EC:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B01EC
  cmpu(c,0,c->r[0],0x00000001u); // 801B01F0
  if (crb(c,0)) { goto L_801B0208; } // 801B01F4
  c->r[4]=0u+0x80240000u; // 801B01F8
  c->r[3]=0u+0x00000500u; // 801B01FC
  c->r[4]=c->r[4]+0x00004888u; // 801B0200
  c->lr=0x801B0208u; f_801AA7C0(c); // 801B0204
L_801B0208:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0208
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B020C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0210
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B0214
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B0218
  c->lr=c->r[0]; // 801B021C
  c->r[1]=c->r[1]+0x00000020u; // 801B0220
  return; // 801B0224
}

// BTA_HhSendData
void f_801B0228(Ctx* __restrict c) {
  trace_call(0x801B0228u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0228
  c->r[0]=c->lr; // 801B022C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0230
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0234
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0238
  c->r[30]=c->r[4]|c->r[4]; // 801B023C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0240
  c->r[29]=c->r[3]|c->r[3]; // 801B0244
  c->r[3]=0u+0x00000014u; // 801B0248
  c->lr=0x801B0250u; f_801A7A70(c); // 801B024C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0250
  c->r[31]=c->r[3]|c->r[3]; // 801B0254
  if (crb(c,2)) { goto L_801B029C; } // 801B0258
  c->r[4]=0u+0x00000000u; // 801B025C
  c->r[5]=0u+0x00000014u; // 801B0260
  c->lr=0x801B0268u; f_800046B4(c); // 801B0264
  c->r[0]=0u+0x00001708u; // 801B0268
  c->r[5]=0u+0x0000000Au; // 801B026C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B0270
  c->r[4]=0u+0x00000000u; // 801B0274
  c->r[0]=0u+0x00000002u; // 801B0278
  c->r[3]=c->r[31]|c->r[31]; // 801B027C
  W16(c->r[31]+0x00000006u,c->r[29]); // 801B0280
  W8(c->r[31]+0x00000008u,c->r[5]); // 801B0284
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 801B0288
  W8(c->r[31]+0x00000009u,c->r[0]); // 801B028C
  W32(c->r[31]+0x00000010u,c->r[30]); // 801B0290
  W8(c->r[31]+0x0000000Au,c->r[4]); // 801B0294
  c->lr=0x801B029Cu; f_801AB300(c); // 801B0298
L_801B029C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B029C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B02A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B02A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B02A8
  c->lr=c->r[0]; // 801B02AC
  c->r[1]=c->r[1]+0x00000020u; // 801B02B0
  return; // 801B02B4
}

// BTA_HhAddDev
void f_801B02B8(Ctx* __restrict c) {
  trace_call(0x801B02B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B02B8
  c->r[0]=c->lr; // 801B02BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B02C0
  c->r[11]=c->r[1]+0x00000020u; // 801B02C4
  c->lr=0x801B02CCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B02C8
  c->r[26]=c->r[3]|c->r[3]; // 801B02CC
  c->r[27]=c->r[4]|c->r[4]; // 801B02D0
  c->r[28]=c->r[5]|c->r[5]; // 801B02D4
  c->r[29]=c->r[6]|c->r[6]; // 801B02D8
  c->r[30]=c->r[7]|c->r[7]; // 801B02DC
  c->r[3]=0u+0x0000001Cu; // 801B02E0
  c->lr=0x801B02E8u; f_801A7A70(c); // 801B02E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B02E8
  c->r[31]=c->r[3]|c->r[3]; // 801B02EC
  if (crb(c,2)) { goto L_801B0348; } // 801B02F0
  c->r[4]=0u+0x00000000u; // 801B02F4
  c->r[5]=0u+0x0000001Cu; // 801B02F8
  c->lr=0x801B0300u; f_800046B4(c); // 801B02FC
  c->r[0]=0u+0x0000170Au; // 801B0300
  c->r[5]=0u+0x0000000Bu; // 801B0304
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B0308
  c->r[0]=0u+0x000000FFu; // 801B030C
  c->r[4]=c->r[30]|c->r[30]; // 801B0310
  c->r[3]=c->r[31]+0x00000014u; // 801B0314
  W16(c->r[31]+0x00000010u,c->r[5]); // 801B0318
  c->r[5]=0u+0x00000008u; // 801B031C
  W16(c->r[31]+0x00000006u,c->r[0]); // 801B0320
  W16(c->r[31]+0x0000000Eu,c->r[27]); // 801B0324
  W8(c->r[31]+0x00000012u,c->r[28]); // 801B0328
  W8(c->r[31]+0x00000013u,c->r[29]); // 801B032C
  c->lr=0x801B0334u; f_80004364(c); // 801B0330
  c->r[4]=c->r[26]|c->r[26]; // 801B0334
  c->r[3]=c->r[31]+0x00000008u; // 801B0338
  c->lr=0x801B0340u; f_801AAE54(c); // 801B033C
  c->r[3]=c->r[31]|c->r[31]; // 801B0340
  c->lr=0x801B0348u; f_801AB300(c); // 801B0344
L_801B0348:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0348
  c->lr=0x801B0350u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B034C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0350
  c->lr=c->r[0]; // 801B0354
  c->r[1]=c->r[1]+0x00000020u; // 801B0358
  return; // 801B035C
}

// BTA_HhRemoveDev
void f_801B0360(Ctx* __restrict c) {
  trace_call(0x801B0360u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0360
  c->r[0]=c->lr; // 801B0364
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B036C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0370
  c->r[30]=c->r[3]|c->r[3]; // 801B0374
  c->r[3]=0u+0x0000001Cu; // 801B0378
  c->lr=0x801B0380u; f_801A7A70(c); // 801B037C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0380
  c->r[31]=c->r[3]|c->r[3]; // 801B0384
  if (crb(c,2)) { goto L_801B03B4; } // 801B0388
  c->r[4]=0u+0x00000000u; // 801B038C
  c->r[5]=0u+0x0000001Cu; // 801B0390
  c->lr=0x801B0398u; f_800046B4(c); // 801B0394
  c->r[3]=0u+0x0000170Au; // 801B0398
  c->r[0]=0u+0x0000000Cu; // 801B039C
  W16(c->r[31]+0x00000000u,c->r[3]); // 801B03A0
  c->r[3]=c->r[31]|c->r[31]; // 801B03A4
  W16(c->r[31]+0x00000010u,c->r[0]); // 801B03A8
  W16(c->r[31]+0x00000006u,c->r[30]); // 801B03AC
  c->lr=0x801B03B4u; f_801AB300(c); // 801B03B0
L_801B03B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B03B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B03B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B03BC
  c->lr=c->r[0]; // 801B03C0
  c->r[1]=c->r[1]+0x00000010u; // 801B03C4
  return; // 801B03C8
}

// BTA_HhGetAclQueueInfo
void f_801B03CC(Ctx* __restrict c) {
  trace_call(0x801B03CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B03CC
  c->r[0]=c->lr; // 801B03D0
  c->r[3]=0u+0x00000008u; // 801B03D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B03D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B03DC
  c->lr=0x801B03E4u; f_801A7A70(c); // 801B03E0
  cmps(c,0,(int32_t)c->r[3],0); // 801B03E4
  c->r[31]=c->r[3]|c->r[3]; // 801B03E8
  if (crb(c,2)) { goto L_801B040C; } // 801B03EC
  c->r[4]=0u+0x00000000u; // 801B03F0
  c->r[5]=0u+0x00000008u; // 801B03F4
  c->lr=0x801B03FCu; f_800046B4(c); // 801B03F8
  c->r[0]=0u+0x0000170Eu; // 801B03FC
  c->r[3]=c->r[31]|c->r[31]; // 801B0400
  W16(c->r[31]+0x00000000u,c->r[0]); // 801B0404
  c->lr=0x801B040Cu; f_801AB300(c); // 801B0408
L_801B040C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B040C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0410
  c->lr=c->r[0]; // 801B0414
  c->r[1]=c->r[1]+0x00000010u; // 801B0418
  return; // 801B041C
}

// bta_hh_sm_execute
void f_801B0420(Ctx* __restrict c) {
  trace_call(0x801B0420u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0420
  c->r[0]=c->lr; // 801B0424
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B0428
  c->r[11]=c->r[1]+0x00000040u; // 801B042C
  c->lr=0x801B0434u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0430
  c->r[31]=0u+0x80240000u; // 801B0434
  c->r[27]=c->r[3]|c->r[3]; // 801B0438
  c->r[28]=c->r[4]|c->r[4]; // 801B043C
  c->r[29]=c->r[5]|c->r[5]; // 801B0440
  c->r[31]=c->r[31]+0x000048B8u; // 801B0444
  c->r[3]=c->r[1]+0x00000008u; // 801B0448
  c->r[30]=0u+0x00000000u; // 801B044C
  c->r[4]=0u+0x00000000u; // 801B0450
  c->r[5]=0u+0x00000020u; // 801B0454
  c->lr=0x801B045Cu; f_800046B4(c); // 801B0458
  cmps(c,0,(int32_t)c->r[27],0); // 801B045C
  if (!crb(c,2)) { goto L_801B05B8; } // 801B0460
  c->r[3]=0u+0x802D0000u; // 801B0464
  c->r[3]=c->r[3]+0x000021A8u; // 801B0468
  c->r[0]=R32(c->r[3]+0x00000224u); // 801B046C
  cmps(c,0,(int32_t)c->r[0],0); // 801B0470
  if (crb(c,2)) { goto L_801B075C; } // 801B0474
  cmps(c,0,(int32_t)c->r[28],5896); // 801B0478
  if (crb(c,2)) { goto L_801B050C; } // 801B047C
  if (!crb(c,0)) { goto L_801B049C; } // 801B0480
  cmps(c,0,(int32_t)c->r[28],5889); // 801B0484
  if (crb(c,2)) { goto L_801B0560; } // 801B0488
  if (!crb(c,0)) { goto L_801B0578; } // 801B048C
  cmps(c,0,(int32_t)c->r[28],5888); // 801B0490
  if (!crb(c,0)) { goto L_801B04A8; } // 801B0494
  goto L_801B0578; // 801B0498
L_801B049C:;
  cmps(c,0,(int32_t)c->r[28],5898); // 801B049C
  if (crb(c,2)) { goto L_801B04CC; } // 801B04A0
  goto L_801B0578; // 801B04A4
L_801B04A8:;
  c->r[3]=c->r[1]+0x00000008u; // 801B04A8
  c->r[4]=c->r[29]+0x00000008u; // 801B04AC
  c->r[30]=0u+0x00000002u; // 801B04B0
  c->lr=0x801B04B8u; f_801AAE54(c); // 801B04B4
  c->r[3]=0u+0x00000009u; // 801B04B8
  c->r[0]=0u+0x000000FFu; // 801B04BC
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801B04C0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B04C4
  goto L_801B0594; // 801B04C8
L_801B04CC:;
  c->r[30]=R16(c->r[29]+0x00000010u); // 801B04CC
  cmpu(c,0,c->r[30],0x0000000Bu); // 801B04D0
  if (!crb(c,2)) { goto L_801B04F8; } // 801B04D4
  c->r[3]=c->r[1]+0x00000008u; // 801B04D8
  c->r[4]=c->r[29]+0x00000008u; // 801B04DC
  c->lr=0x801B04E4u; f_801AAE54(c); // 801B04E0
  c->r[3]=0u+0x00000009u; // 801B04E4
  c->r[0]=0u+0x000000FFu; // 801B04E8
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801B04EC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B04F0
  goto L_801B0594; // 801B04F4
L_801B04F8:;
  c->r[0]=0u+0x0000000Du; // 801B04F8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B04FC
  c->r[0]=R16(c->r[29]+0x00000006u); // 801B0500
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B0504
  goto L_801B0594; // 801B0508
L_801B050C:;
  c->r[30]=R8(c->r[29]+0x00000008u); // 801B050C
  cmpu(c,0,c->r[30],0x00000007u); // 801B0510
  if (crb(c,2)) { goto L_801B0528; } // 801B0514
  cmpu(c,0,c->r[30],0x00000005u); // 801B0518
  if (crb(c,2)) { goto L_801B0528; } // 801B051C
  cmpu(c,0,c->r[30],0x00000009u); // 801B0520
  if (!crb(c,2)) { goto L_801B053C; } // 801B0524
L_801B0528:;
  c->r[0]=0u+0x0000000Du; // 801B0528
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B052C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801B0530
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B0534
  goto L_801B0594; // 801B0538
L_801B053C:;
  cmpu(c,0,c->r[30],0x0000000Au); // 801B053C
  if (crb(c,2)) { goto L_801B0594; } // 801B0540
  cmpu(c,0,c->r[30],0x00000001u); // 801B0544
  if (crb(c,2)) { goto L_801B0594; } // 801B0548
  c->r[3]=R16(c->r[29]+0x00000006u); // 801B054C
  c->r[0]=0u+0x0000000Du; // 801B0550
  W8(c->r[1]+0x00000009u,c->r[3]); // 801B0554
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B0558
  goto L_801B0594; // 801B055C
L_801B0560:;
  c->r[0]=0u+0x0000000Du; // 801B0560
  c->r[30]=0u+0x00000003u; // 801B0564
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B0568
  c->r[0]=R16(c->r[29]+0x00000006u); // 801B056C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B0570
  goto L_801B0594; // 801B0574
L_801B0578:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0578
  cmpu(c,0,c->r[0],0x00000001u); // 801B057C
  if (crb(c,0)) { goto L_801B0594; } // 801B0580
  c->r[5]=R16(c->r[29]+0x00000006u); // 801B0584
  c->r[4]=c->r[31]+0x00000000u; // 801B0588
  c->r[3]=0u+0x00000500u; // 801B058C
  c->lr=0x801B0594u; f_801AA7E0(c); // 801B0590
L_801B0594:;
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[3]); // 801B0594
  if (crb(c,2)) { goto L_801B075C; } // 801B0598
  c->r[5]=0u+0x802D0000u; // 801B059C
  c->r[4]=c->r[1]+0x00000008u; // 801B05A0
  c->r[5]=c->r[5]+0x000021A8u; // 801B05A4
  c->r[12]=R32(c->r[5]+0x00000224u); // 801B05A8
  c->ctr=c->r[12]; // 801B05AC
  if (true) { c->lr=0x801B05B4u; dispatch(c,c->ctr); } // 801B05B0
  goto L_801B075C; // 801B05B4
L_801B05B8:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B05B8
  c->r[30]=R8(c->r[27]+0x0000001Cu); // 801B05BC
  cmpu(c,0,c->r[0],0x00000004u); // 801B05C0
  if (crb(c,0)) { goto L_801B0634; } // 801B05C4
  cmps(c,0,(int32_t)c->r[30],2); // 801B05C8
  if (crb(c,2)) { goto L_801B0600; } // 801B05CC
  if (!crb(c,0)) { goto L_801B05E4; } // 801B05D0
  cmps(c,0,(int32_t)c->r[30],0); // 801B05D4
  if (crb(c,2)) { goto L_801B05F0; } // 801B05D8
  if (!crb(c,0)) { goto L_801B05F8; } // 801B05DC
  goto L_801B0610; // 801B05E0
L_801B05E4:;
  cmps(c,0,(int32_t)c->r[30],4); // 801B05E4
  if (!crb(c,0)) { goto L_801B0610; } // 801B05E8
  goto L_801B0608; // 801B05EC
L_801B05F0:;
  c->r[26]=c->r[31]+0x0000001Cu; // 801B05F0
  goto L_801B0614; // 801B05F4
L_801B05F8:;
  c->r[26]=c->r[31]+0x0000002Cu; // 801B05F8
  goto L_801B0614; // 801B05FC
L_801B0600:;
  c->r[26]=c->r[31]+0x0000003Cu; // 801B0600
  goto L_801B0614; // 801B0604
L_801B0608:;
  c->r[26]=c->r[31]+0x00000050u; // 801B0608
  goto L_801B0614; // 801B060C
L_801B0610:;
  c->r[26]=c->r[31]+0x00000060u; // 801B0610
L_801B0614:;
  c->r[3]=c->r[28]|c->r[28]; // 801B0614
  c->lr=0x801B061Cu; f_801B08C0(c); // 801B0618
  c->r[7]=c->r[3]|c->r[3]; // 801B061C
  c->r[5]=c->r[30]|c->r[30]; // 801B0620
  c->r[6]=c->r[26]|c->r[26]; // 801B0624
  c->r[4]=c->r[31]+0x00000078u; // 801B0628
  c->r[3]=0u+0x00000503u; // 801B062C
  c->lr=0x801B0634u; f_801AA820(c); // 801B0630
L_801B0634:;
  c->r[4]=R8(c->r[27]+0x0000001Cu); // 801B0634
  c->r[3]=0u+0x80200000u; // 801B0638
  c->r[3]=c->r[3]+0xFFFFA718u; // 801B063C
  c->r[28]=rotl(c->r[28],0)&0x000000FFu; // 801B0640
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B0644
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0648
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801B064C
  c->r[5]=R32(c->r[3]+c->r[0]); // 801B0650
  c->r[3]=c->r[5]+c->r[4]; // 801B0654
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B0658
  W8(c->r[27]+0x0000001Cu,c->r[0]); // 801B065C
  c->r[0]=R8(c->r[5]+c->r[4]); // 801B0660
  cmpu(c,0,c->r[0],0x0000000Cu); // 801B0664
  if (crb(c,2)) { goto L_801B068C; } // 801B0668
  c->r[4]=0u+0x80200000u; // 801B066C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801B0670
  c->r[4]=c->r[4]+0xFFFFA6A0u; // 801B0674
  c->r[3]=c->r[27]|c->r[27]; // 801B0678
  c->r[12]=R32(c->r[4]+c->r[0]); // 801B067C
  c->r[4]=c->r[29]|c->r[29]; // 801B0680
  c->ctr=c->r[12]; // 801B0684
  if (true) { c->lr=0x801B068Cu; dispatch(c,c->ctr); } // 801B0688
L_801B068C:;
  c->r[3]=R8(c->r[27]+0x0000001Cu); // 801B068C
  cmpu(c,0,c->r[30],c->r[3]); // 801B0690
  if (crb(c,2)) { goto L_801B075C; } // 801B0694
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0698
  cmpu(c,0,c->r[0],0x00000005u); // 801B069C
  if (crb(c,0)) { goto L_801B075C; } // 801B06A0
  cmps(c,0,(int32_t)c->r[30],2); // 801B06A4
  if (crb(c,2)) { goto L_801B06DC; } // 801B06A8
  if (!crb(c,0)) { goto L_801B06C0; } // 801B06AC
  cmps(c,0,(int32_t)c->r[30],0); // 801B06B0
  if (crb(c,2)) { goto L_801B06CC; } // 801B06B4
  if (!crb(c,0)) { goto L_801B06D4; } // 801B06B8
  goto L_801B06EC; // 801B06BC
L_801B06C0:;
  cmps(c,0,(int32_t)c->r[30],4); // 801B06C0
  if (!crb(c,0)) { goto L_801B06EC; } // 801B06C4
  goto L_801B06E4; // 801B06C8
L_801B06CC:;
  c->r[26]=c->r[31]+0x0000001Cu; // 801B06CC
  goto L_801B06F0; // 801B06D0
L_801B06D4:;
  c->r[26]=c->r[31]+0x0000002Cu; // 801B06D4
  goto L_801B06F0; // 801B06D8
L_801B06DC:;
  c->r[26]=c->r[31]+0x0000003Cu; // 801B06DC
  goto L_801B06F0; // 801B06E0
L_801B06E4:;
  c->r[26]=c->r[31]+0x00000050u; // 801B06E4
  goto L_801B06F0; // 801B06E8
L_801B06EC:;
  c->r[26]=c->r[31]+0x00000060u; // 801B06EC
L_801B06F0:;
  cmps(c,0,(int32_t)c->r[3],2); // 801B06F0
  if (crb(c,2)) { goto L_801B0728; } // 801B06F4
  if (!crb(c,0)) { goto L_801B070C; } // 801B06F8
  cmps(c,0,(int32_t)c->r[3],0); // 801B06FC
  if (crb(c,2)) { goto L_801B0718; } // 801B0700
  if (!crb(c,0)) { goto L_801B0720; } // 801B0704
  goto L_801B0738; // 801B0708
L_801B070C:;
  cmps(c,0,(int32_t)c->r[3],4); // 801B070C
  if (!crb(c,0)) { goto L_801B0738; } // 801B0710
  goto L_801B0730; // 801B0714
L_801B0718:;
  c->r[27]=c->r[31]+0x0000001Cu; // 801B0718
  goto L_801B073C; // 801B071C
L_801B0720:;
  c->r[27]=c->r[31]+0x0000002Cu; // 801B0720
  goto L_801B073C; // 801B0724
L_801B0728:;
  c->r[27]=c->r[31]+0x0000003Cu; // 801B0728
  goto L_801B073C; // 801B072C
L_801B0730:;
  c->r[27]=c->r[31]+0x00000050u; // 801B0730
  goto L_801B073C; // 801B0734
L_801B0738:;
  c->r[27]=c->r[31]+0x00000060u; // 801B0738
L_801B073C:;
  c->r[3]=c->r[28]|c->r[28]; // 801B073C
  c->lr=0x801B0744u; f_801B08C0(c); // 801B0740
  c->r[7]=c->r[3]|c->r[3]; // 801B0744
  c->r[5]=c->r[26]|c->r[26]; // 801B0748
  c->r[6]=c->r[27]|c->r[27]; // 801B074C
  c->r[4]=c->r[31]+0x000000ACu; // 801B0750
  c->r[3]=0u+0x00000504u; // 801B0754
  c->lr=0x801B075Cu; f_801AA820(c); // 801B0758
L_801B075C:;
  c->r[11]=c->r[1]+0x00000040u; // 801B075C
  c->lr=0x801B0764u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0760
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B0764
  c->lr=c->r[0]; // 801B0768
  c->r[1]=c->r[1]+0x00000040u; // 801B076C
  return; // 801B0770
}

// bta_hh_hdl_event
void f_801B0774(Ctx* __restrict c) {
  trace_call(0x801B0774u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0774
  c->r[0]=c->lr; // 801B0778
  c->r[6]=0u+0x00000010u; // 801B077C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0780
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0784
  c->r[31]=0u+0x00000000u; // 801B0788
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B078C
  c->r[30]=c->r[3]|c->r[3]; // 801B0790
  c->r[0]=R16(c->r[3]+0x00000000u); // 801B0794
  cmps(c,0,(int32_t)c->r[0],5902); // 801B0798
  if (crb(c,2)) { goto L_801B07D8; } // 801B079C
  if (!crb(c,0)) { goto L_801B07B4; } // 801B07A0
  cmps(c,0,(int32_t)c->r[0],5900); // 801B07A4
  if (crb(c,2)) { goto L_801B07C0; } // 801B07A8
  if (!crb(c,0)) { goto L_801B07C8; } // 801B07AC
  goto L_801B07E0; // 801B07B0
L_801B07B4:;
  cmps(c,0,(int32_t)c->r[0],5904); // 801B07B4
  if (!crb(c,0)) { goto L_801B07E0; } // 801B07B8
  goto L_801B07D0; // 801B07BC
L_801B07C0:;
  c->lr=0x801B07C4u; f_801AE908(c); // 801B07C0
  goto L_801B08A4; // 801B07C4
L_801B07C8:;
  c->lr=0x801B07CCu; f_801AEA7C(c); // 801B07C8
  goto L_801B08A4; // 801B07CC
L_801B07D0:;
  c->lr=0x801B07D4u; f_801AEB80(c); // 801B07D0
  goto L_801B08A4; // 801B07D4
L_801B07D8:;
  c->lr=0x801B07DCu; f_801AFAD4(c); // 801B07D8
  goto L_801B08A4; // 801B07DC
L_801B07E0:;
  cmpu(c,0,c->r[0],0x00001700u); // 801B07E0
  if (!crb(c,2)) { goto L_801B07F8; } // 801B07E4
  c->r[3]=c->r[3]+0x00000008u; // 801B07E8
  c->lr=0x801B07F0u; f_801B0974(c); // 801B07EC
  c->r[6]=c->r[3]|c->r[3]; // 801B07F0
  goto L_801B0850; // 801B07F4
L_801B07F8:;
  cmpu(c,0,c->r[0],0x0000170Au); // 801B07F8
  if (!crb(c,2)) { goto L_801B0834; } // 801B07FC
  c->r[0]=R16(c->r[3]+0x00000010u); // 801B0800
  cmpu(c,0,c->r[0],0x0000000Bu); // 801B0804
  if (!crb(c,2)) { goto L_801B081C; } // 801B0808
  c->r[3]=c->r[3]+0x00000008u; // 801B080C
  c->lr=0x801B0814u; f_801B0974(c); // 801B0810
  c->r[6]=c->r[3]|c->r[3]; // 801B0814
  goto L_801B0850; // 801B0818
L_801B081C:;
  c->r[4]=0u+0x802D0000u; // 801B081C
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B0820
  c->r[4]=c->r[4]+0x000021A8u; // 801B0824
  c->r[3]=c->r[4]+c->r[0]; // 801B0828
  c->r[6]=R8(c->r[3]+0x00000214u); // 801B082C
  goto L_801B0850; // 801B0830
L_801B0834:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B0834
  cmpu(c,0,c->r[0],0x00000010u); // 801B0838
  if (!crb(c,0)) { goto L_801B0850; } // 801B083C
  c->r[3]=0u+0x802D0000u; // 801B0840
  c->r[3]=c->r[3]+0x000021A8u; // 801B0844
  c->r[3]=c->r[3]+c->r[0]; // 801B0848
  c->r[6]=R8(c->r[3]+0x00000214u); // 801B084C
L_801B0850:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801B0850
  cmpu(c,0,c->r[0],0x00000010u); // 801B0854
  if (crb(c,2)) { goto L_801B0870; } // 801B0858
  c->r[3]=0u+0x802D0000u; // 801B085C
  c->r[0]=rotl(c->r[6],5)&0x00001FE0u; // 801B0860
  c->r[3]=c->r[3]+0x000021A8u; // 801B0864
  c->r[3]=c->r[3]+c->r[0]; // 801B0868
  c->r[31]=c->r[3]+0x00000010u; // 801B086C
L_801B0870:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0870
  cmpu(c,0,c->r[0],0x00000005u); // 801B0874
  if (crb(c,0)) { goto L_801B0894; } // 801B0878
  c->r[4]=0u+0x80240000u; // 801B087C
  c->r[5]=R16(c->r[30]+0x00000006u); // 801B0880
  c->r[4]=c->r[4]+0x00004994u; // 801B0884
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801B0888
  c->r[3]=0u+0x00000504u; // 801B088C
  c->lr=0x801B0894u; f_801AA800(c); // 801B0890
L_801B0894:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 801B0894
  c->r[3]=c->r[31]|c->r[31]; // 801B0898
  c->r[5]=c->r[30]|c->r[30]; // 801B089C
  c->lr=0x801B08A4u; f_801B0420(c); // 801B08A0
L_801B08A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B08A4
  c->r[3]=0u+0x00000001u; // 801B08A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B08AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B08B0
  c->lr=c->r[0]; // 801B08B4
  c->r[1]=c->r[1]+0x00000010u; // 801B08B8
  return; // 801B08BC
}

// bta_hh_evt_code
void f_801B08C0(Ctx* __restrict c) {
  trace_call(0x801B08C0u);
  c->r[0]=c->r[3]+0xFFFFE900u; // 801B08C0
  c->r[4]=0u+0x80240000u; // 801B08C4
  cmpu(c,0,c->r[0],0x0000000Fu); // 801B08C8
  c->r[4]=c->r[4]+0x000048B8u; // 801B08CC
  if (crb(c,1)) { goto L_801B096C; } // 801B08D0
  c->r[3]=0u+0x80240000u; // 801B08D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B08D8
  c->r[3]=c->r[3]+0x00004B58u; // 801B08DC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B08E0
  c->ctr=c->r[3]; // 801B08E4
  if (true) { switch (c->ctr) { case 0x801B08ECu: goto L_801B08EC; case 0x801B08F4u: goto L_801B08F4; case 0x801B08FCu: goto L_801B08FC; case 0x801B0904u: goto L_801B0904; case 0x801B090Cu: goto L_801B090C; case 0x801B0914u: goto L_801B0914; case 0x801B091Cu: goto L_801B091C; case 0x801B0924u: goto L_801B0924; case 0x801B092Cu: goto L_801B092C; case 0x801B0934u: goto L_801B0934; case 0x801B093Cu: goto L_801B093C; case 0x801B0944u: goto L_801B0944; case 0x801B094Cu: goto L_801B094C; case 0x801B0954u: goto L_801B0954; case 0x801B095Cu: goto L_801B095C; case 0x801B0964u: goto L_801B0964; default: break; } dispatch(c,c->ctr); return; } // 801B08E8
L_801B08EC:;
  c->r[3]=c->r[4]+0x00000108u; // 801B08EC
  return; // 801B08F0
L_801B08F4:;
  c->r[3]=c->r[4]+0x00000120u; // 801B08F4
  return; // 801B08F8
L_801B08FC:;
  c->r[3]=c->r[4]+0x00000138u; // 801B08FC
  return; // 801B0900
L_801B0904:;
  c->r[3]=c->r[4]+0x0000014Cu; // 801B0904
  return; // 801B0908
L_801B090C:;
  c->r[3]=c->r[4]+0x00000164u; // 801B090C
  return; // 801B0910
L_801B0914:;
  c->r[3]=c->r[4]+0x00000178u; // 801B0914
  return; // 801B0918
L_801B091C:;
  c->r[3]=c->r[4]+0x00000190u; // 801B091C
  return; // 801B0920
L_801B0924:;
  c->r[3]=c->r[4]+0x000001A8u; // 801B0924
  return; // 801B0928
L_801B092C:;
  c->r[3]=c->r[4]+0x000001BCu; // 801B092C
  return; // 801B0930
L_801B0934:;
  c->r[3]=c->r[4]+0x000001D4u; // 801B0934
  return; // 801B0938
L_801B093C:;
  c->r[3]=c->r[4]+0x000001F0u; // 801B093C
  return; // 801B0940
L_801B0944:;
  c->r[3]=c->r[4]+0x00000204u; // 801B0944
  return; // 801B0948
L_801B094C:;
  c->r[3]=c->r[4]+0x0000021Cu; // 801B094C
  return; // 801B0950
L_801B0954:;
  c->r[3]=c->r[4]+0x00000238u; // 801B0954
  return; // 801B0958
L_801B095C:;
  c->r[3]=c->r[4]+0x00000250u; // 801B095C
  return; // 801B0960
L_801B0964:;
  c->r[3]=c->r[4]+0x00000268u; // 801B0964
  return; // 801B0968
L_801B096C:;
  c->r[3]=c->r[4]+0x00000284u; // 801B096C
  return; // 801B0970
}

// bta_hh_find_cb
void f_801B0974(Ctx* __restrict c) {
  trace_call(0x801B0974u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0974
  c->r[0]=c->lr; // 801B0978
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B097C
  c->r[11]=c->r[1]+0x00000020u; // 801B0980
  c->lr=0x801B0988u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0984
  c->r[31]=0u+0x802D0000u; // 801B0988
  c->r[30]=0u+0x80240000u; // 801B098C
  c->r[27]=c->r[3]|c->r[3]; // 801B0990
  c->r[28]=0u+0x00000000u; // 801B0994
  c->r[30]=c->r[30]+0x00004B98u; // 801B0998
  c->r[31]=c->r[31]+0x000021A8u; // 801B099C
L_801B09A0:;
  c->r[29]=rotl(c->r[28],5)&0x00001FE0u; // 801B09A0
  c->r[3]=c->r[27]|c->r[27]; // 801B09A4
  c->r[4]=c->r[31]+c->r[29]; // 801B09A8
  c->r[4]=c->r[4]+0x00000018u; // 801B09AC
  c->lr=0x801B09B4u; f_801AAE88(c); // 801B09B0
  cmps(c,0,(int32_t)c->r[3],0); // 801B09B4
  if (!crb(c,2)) { goto L_801B09FC; } // 801B09B8
  c->r[3]=c->r[27]|c->r[27]; // 801B09BC
  c->r[4]=c->r[2]+0xFFFFB348u; // 801B09C0
  c->lr=0x801B09C8u; f_801AAE88(c); // 801B09C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B09C8
  if (crb(c,2)) { goto L_801B09FC; } // 801B09CC
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B09D0
  cmpu(c,0,c->r[0],0x00000005u); // 801B09D4
  if (crb(c,0)) { goto L_801B09F4; } // 801B09D8
  c->r[3]=c->r[31]+c->r[29]; // 801B09DC
  c->r[4]=c->r[30]+0x00000000u; // 801B09E0
  c->r[6]=R8(c->r[3]+0x00000026u); // 801B09E4
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 801B09E8
  c->r[3]=0u+0x00000504u; // 801B09EC
  c->lr=0x801B09F4u; f_801AA800(c); // 801B09F0
L_801B09F4:;
  c->r[3]=c->r[28]|c->r[28]; // 801B09F4
  goto L_801B0A98; // 801B09F8
L_801B09FC:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B09FC
  cmpu(c,0,c->r[0],0x00000005u); // 801B0A00
  if (crb(c,0)) { goto L_801B0A28; } // 801B0A04
  c->r[8]=c->r[31]+c->r[29]; // 801B0A08
  c->r[4]=c->r[30]+0x00000024u; // 801B0A0C
  c->r[5]=R8(c->r[8]+0x00000028u); // 801B0A10
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 801B0A14
  c->r[7]=R8(c->r[8]+0x00000026u); // 801B0A18
  c->r[3]=0u+0x00000504u; // 801B0A1C
  c->r[8]=R8(c->r[8]+0x0000002Cu); // 801B0A20
  c->lr=0x801B0A28u; f_801AA840(c); // 801B0A24
L_801B0A28:;
  c->r[28]=c->r[28]+0x00000001u; // 801B0A28
  cmpu(c,0,c->r[28],0x00000010u); // 801B0A2C
  if (crb(c,0)) { IRQCHK(c); goto L_801B09A0; } // 801B0A30
  c->r[4]=0u+0x802D0000u; // 801B0A34
  c->r[0]=0u+0x00000010u; // 801B0A38
  c->r[4]=c->r[4]+0x000021A8u; // 801B0A3C
  c->r[29]=0u+0x00000000u; // 801B0A40
  c->ctr=c->r[0]; // 801B0A44
L_801B0A48:;
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801B0A48
  c->r[3]=c->r[4]+c->r[0]; // 801B0A4C
  c->r[0]=R8(c->r[3]+0x00000028u); // 801B0A50
  cmps(c,0,(int32_t)c->r[0],0); // 801B0A54
  if (!crb(c,2)) { goto L_801B0A6C; } // 801B0A58
  c->r[4]=c->r[27]|c->r[27]; // 801B0A5C
  c->r[3]=c->r[3]+0x00000018u; // 801B0A60
  c->lr=0x801B0A68u; f_801AAE54(c); // 801B0A64
  goto L_801B0A74; // 801B0A68
L_801B0A6C:;
  c->r[29]=c->r[29]+0x00000001u; // 801B0A6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0A48; } // 801B0A70
L_801B0A74:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0A74
  cmpu(c,0,c->r[0],0x00000005u); // 801B0A78
  if (crb(c,0)) { goto L_801B0A94; } // 801B0A7C
  c->r[4]=c->r[30]+0x00000058u; // 801B0A80
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801B0A84
  c->r[3]=0u+0x00000504u; // 801B0A88
  c->r[6]=0u+0x00000010u; // 801B0A8C
  c->lr=0x801B0A94u; f_801AA800(c); // 801B0A90
L_801B0A94:;
  c->r[3]=c->r[29]|c->r[29]; // 801B0A94
L_801B0A98:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0A98
  c->lr=0x801B0AA0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0A9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0AA0
  c->lr=c->r[0]; // 801B0AA4
  c->r[1]=c->r[1]+0x00000020u; // 801B0AA8
  return; // 801B0AAC
}

// bta_hh_clean_up_kdev
void f_801B0AB0(Ctx* __restrict c) {
  trace_call(0x801B0AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0AB0
  c->r[0]=c->lr; // 801B0AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0AB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0ABC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0AC0
  c->r[30]=c->r[3]|c->r[3]; // 801B0AC4
  c->r[5]=R8(c->r[3]+0x00000016u); // 801B0AC8
  cmpu(c,0,c->r[5],0x000000FFu); // 801B0ACC
  if (crb(c,2)) { goto L_801B0AE8; } // 801B0AD0
  c->r[4]=0u+0x802D0000u; // 801B0AD4
  c->r[0]=0u+0x00000010u; // 801B0AD8
  c->r[4]=c->r[4]+0x000021A8u; // 801B0ADC
  c->r[4]=c->r[4]+c->r[5]; // 801B0AE0
  W8(c->r[4]+0x00000214u,c->r[0]); // 801B0AE4
L_801B0AE8:;
  c->r[31]=R8(c->r[3]+0x00000012u); // 801B0AE8
  c->r[3]=c->r[3]+0x00000004u; // 801B0AEC
  c->lr=0x801B0AF4u; f_801AB5A0(c); // 801B0AF0
  c->r[3]=c->r[30]|c->r[30]; // 801B0AF4
  c->r[4]=0u+0x00000000u; // 801B0AF8
  c->r[5]=0u+0x00000020u; // 801B0AFC
  c->lr=0x801B0B04u; f_800046B4(c); // 801B0B00
  c->r[3]=0u+0x00000001u; // 801B0B04
  c->r[0]=0u+0x000000FFu; // 801B0B08
  W8(c->r[30]+0x00000012u,c->r[31]); // 801B0B0C
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 801B0B10
  W8(c->r[30]+0x00000016u,c->r[0]); // 801B0B14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0B18
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0B20
  c->lr=c->r[0]; // 801B0B24
  c->r[1]=c->r[1]+0x00000010u; // 801B0B28
  return; // 801B0B2C
}

// bta_hh_add_device_to_list
void f_801B0B30(Ctx* __restrict c) {
  trace_call(0x801B0B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0B30
  c->r[0]=c->lr; // 801B0B34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0B38
  c->r[11]=c->r[1]+0x00000020u; // 801B0B3C
  c->lr=0x801B0B44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0B40
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0B44
  c->r[26]=c->r[3]|c->r[3]; // 801B0B48
  c->r[27]=c->r[4]|c->r[4]; // 801B0B4C
  c->r[28]=c->r[5]|c->r[5]; // 801B0B50
  cmpu(c,0,c->r[0],0x00000005u); // 801B0B54
  c->r[29]=c->r[6]|c->r[6]; // 801B0B58
  c->r[30]=c->r[7]|c->r[7]; // 801B0B5C
  c->r[31]=c->r[8]|c->r[8]; // 801B0B60
  if (crb(c,0)) { goto L_801B0B7C; } // 801B0B64
  c->r[4]=0u+0x80240000u; // 801B0B68
  c->r[5]=c->r[30]|c->r[30]; // 801B0B6C
  c->r[4]=c->r[4]+0x00004C1Cu; // 801B0B70
  c->r[3]=0u+0x00000504u; // 801B0B74
  c->lr=0x801B0B7Cu; f_801AA7E0(c); // 801B0B78
L_801B0B7C:;
  c->r[0]=0u+0x00000001u; // 801B0B7C
  cmps(c,0,(int32_t)c->r[29],0); // 801B0B80
  W8(c->r[26]+0x00000016u,c->r[27]); // 801B0B84
  W8(c->r[26]+0x00000018u,c->r[0]); // 801B0B88
  W16(c->r[26]+0x0000000Eu,c->r[28]); // 801B0B8C
  W8(c->r[26]+0x00000013u,c->r[30]); // 801B0B90
  W8(c->r[26]+0x00000015u,c->r[31]); // 801B0B94
  if (crb(c,2)) { goto L_801B0BD4; } // 801B0B98
  c->r[3]=c->r[26]+0x00000004u; // 801B0B9C
  c->lr=0x801B0BA4u; f_801AB5A0(c); // 801B0BA0
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B0BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801B0BA8
  if (crb(c,2)) { goto L_801B0BD4; } // 801B0BAC
  c->lr=0x801B0BB4u; f_801A7A70(c); // 801B0BB0
  cmps(c,0,(int32_t)c->r[3],0); // 801B0BB4
  W32(c->r[26]+0x00000004u,c->r[3]); // 801B0BB8
  if (crb(c,2)) { goto L_801B0BD4; } // 801B0BBC
  c->r[0]=R16(c->r[29]+0x00000000u); // 801B0BC0
  W16(c->r[26]+0x00000000u,c->r[0]); // 801B0BC4
  c->r[4]=R32(c->r[29]+0x00000004u); // 801B0BC8
  c->r[5]=R16(c->r[29]+0x00000000u); // 801B0BCC
  c->lr=0x801B0BD4u; f_80004364(c); // 801B0BD0
L_801B0BD4:;
  c->r[11]=c->r[1]+0x00000020u; // 801B0BD4
  c->lr=0x801B0BDCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0BD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0BDC
  c->lr=c->r[0]; // 801B0BE0
  c->r[1]=c->r[1]+0x00000020u; // 801B0BE4
  return; // 801B0BE8
}

// bta_hh_tod_spt
void f_801B0BEC(Ctx* __restrict c) {
  trace_call(0x801B0BECu);
  c->r[7]=R32(c->r[13]+0xFFFFAC88u); // 801B0BEC
  c->r[9]=rotl(c->r[4],30)&0x0000003Fu; // 801B0BF0
  c->r[8]=0u+0x00000000u; // 801B0BF4
  c->r[5]=R8(c->r[7]+0x00000000u); // 801B0BF8
  goto L_801B0C2C; // 801B0BFC
L_801B0C00:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 801B0C00
  c->r[6]=rotl(c->r[8],1)&0x000001FEu; // 801B0C04
  c->r[0]=R8(c->r[4]+c->r[6]); // 801B0C08
  cmpu(c,0,c->r[9],c->r[0]); // 801B0C0C
  if (!crb(c,2)) { goto L_801B0C28; } // 801B0C10
  c->r[4]=c->r[4]+c->r[6]; // 801B0C14
  c->r[0]=R8(c->r[4]+0x00000001u); // 801B0C18
  W8(c->r[3]+0x00000015u,c->r[0]); // 801B0C1C
  c->r[3]=0u+0x00000001u; // 801B0C20
  return; // 801B0C24
L_801B0C28:;
  c->r[8]=c->r[8]+0x00000001u; // 801B0C28
L_801B0C2C:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801B0C2C
  cmpu(c,0,c->r[0],c->r[5]); // 801B0C30
  if (crb(c,0)) { IRQCHK(c); goto L_801B0C00; } // 801B0C34
  c->r[3]=0u+0x00000000u; // 801B0C38
  return; // 801B0C3C
}

// bta_hh_trace_dev_db
void f_801B0C40(Ctx* __restrict c) {
  trace_call(0x801B0C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0C40
  c->r[0]=c->lr; // 801B0C44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0C48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0C4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0C50
  c->r[30]=0u+0x80240000u; // 801B0C54
  c->r[30]=c->r[30]+0x00004B98u; // 801B0C58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0C5C
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0C60
  cmpu(c,0,c->r[0],0x00000005u); // 801B0C64
  if (crb(c,0)) { goto L_801B0C78; } // 801B0C68
  c->r[4]=c->r[30]+0x000001E4u; // 801B0C6C
  c->r[3]=0u+0x00000504u; // 801B0C70
  c->lr=0x801B0C78u; f_801AA7C0(c); // 801B0C74
L_801B0C78:;
  c->r[3]=0u+0x802D0000u; // 801B0C78
  c->r[29]=0u+0x00000000u; // 801B0C7C
  c->r[31]=c->r[3]+0x000021A8u; // 801B0C80
L_801B0C84:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0C84
  cmpu(c,0,c->r[0],0x00000005u); // 801B0C88
  if (crb(c,0)) { goto L_801B0CB0; } // 801B0C8C
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801B0C90
  c->r[4]=c->r[30]+0x00000220u; // 801B0C94
  c->r[7]=c->r[31]+c->r[0]; // 801B0C98
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801B0C9C
  c->r[6]=R8(c->r[7]+0x00000028u); // 801B0CA0
  c->r[3]=0u+0x00000504u; // 801B0CA4
  c->r[7]=R8(c->r[7]+0x00000026u); // 801B0CA8
  c->lr=0x801B0CB0u; f_801AA820(c); // 801B0CAC
L_801B0CB0:;
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0CB0
  cmpu(c,0,c->r[0],0x00000005u); // 801B0CB4
  if (crb(c,0)) { goto L_801B0CE0; } // 801B0CB8
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801B0CBC
  c->r[4]=c->r[30]+0x00000244u; // 801B0CC0
  c->r[8]=c->r[31]+c->r[0]; // 801B0CC4
  c->r[3]=0u+0x00000504u; // 801B0CC8
  c->r[5]=R16(c->r[8]+0x0000001Eu); // 801B0CCC
  c->r[6]=R8(c->r[8]+0x0000002Cu); // 801B0CD0
  c->r[7]=R8(c->r[8]+0x00000023u); // 801B0CD4
  c->r[8]=R8(c->r[8]+0x00000022u); // 801B0CD8
  c->lr=0x801B0CE0u; f_801AA840(c); // 801B0CDC
L_801B0CE0:;
  c->r[29]=c->r[29]+0x00000001u; // 801B0CE0
  cmpu(c,0,c->r[29],0x00000010u); // 801B0CE4
  if (crb(c,0)) { IRQCHK(c); goto L_801B0C84; } // 801B0CE8
  c->r[0]=R8(c->r[13]+0xFFFFB750u); // 801B0CEC
  cmpu(c,0,c->r[0],0x00000005u); // 801B0CF0
  if (crb(c,0)) { goto L_801B0D04; } // 801B0CF4
  c->r[4]=c->r[30]+0x00000280u; // 801B0CF8
  c->r[3]=0u+0x00000504u; // 801B0CFC
  c->lr=0x801B0D04u; f_801AA7C0(c); // 801B0D00
L_801B0D04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0D04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0D08
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0D0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B0D10
  c->lr=c->r[0]; // 801B0D14
  c->r[1]=c->r[1]+0x00000020u; // 801B0D18
  return; // 801B0D1C
}

// btm_acl_init
void f_801B0D20(Ctx* __restrict c) {
  trace_call(0x801B0D20u);
  c->r[3]=0u+0x802D0000u; // 801B0D20
  c->r[4]=0u+0x00007D00u; // 801B0D24
  c->r[3]=c->r[3]+0x000023D8u; // 801B0D28
  c->r[0]=0u+0x000000FFu; // 801B0D2C
  W16(c->r[3]+0x000004C6u,c->r[4]); // 801B0D30
  W8(c->r[3]+0x000027BFu,c->r[0]); // 801B0D34
  return; // 801B0D38
}

// btm_handle_to_acl_index
void f_801B0D3C(Ctx* __restrict c) {
  trace_call(0x801B0D3Cu);
  c->r[4]=0u+0x802D0000u; // 801B0D3C
  c->r[5]=0u+0x00000000u; // 801B0D40
  c->r[4]=c->r[4]+0x000023D8u; // 801B0D44
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801B0D48
  cmps(c,0,(int32_t)c->r[0],0); // 801B0D4C
  if (crb(c,2)) { goto L_801B0D60; } // 801B0D50
  c->r[0]=R16(c->r[4]+0x00000034u); // 801B0D54
  cmpu(c,0,c->r[0],c->r[3]); // 801B0D58
  if (crb(c,2)) { goto L_801B0DB8; } // 801B0D5C
L_801B0D60:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801B0D60
  c->r[5]=0u+0x00000001u; // 801B0D64
  cmps(c,0,(int32_t)c->r[0],0); // 801B0D68
  if (crb(c,2)) { goto L_801B0D7C; } // 801B0D6C
  c->r[0]=R16(c->r[4]+0x00000150u); // 801B0D70
  cmpu(c,0,c->r[0],c->r[3]); // 801B0D74
  if (crb(c,2)) { goto L_801B0DB8; } // 801B0D78
L_801B0D7C:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801B0D7C
  c->r[5]=0u+0x00000002u; // 801B0D80
  cmps(c,0,(int32_t)c->r[0],0); // 801B0D84
  if (crb(c,2)) { goto L_801B0D98; } // 801B0D88
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 801B0D8C
  cmpu(c,0,c->r[0],c->r[3]); // 801B0D90
  if (crb(c,2)) { goto L_801B0DB8; } // 801B0D94
L_801B0D98:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801B0D98
  c->r[5]=0u+0x00000003u; // 801B0D9C
  cmps(c,0,(int32_t)c->r[0],0); // 801B0DA0
  if (crb(c,2)) { goto L_801B0DB4; } // 801B0DA4
  c->r[0]=R16(c->r[4]+0x00000388u); // 801B0DA8
  cmpu(c,0,c->r[0],c->r[3]); // 801B0DAC
  if (crb(c,2)) { goto L_801B0DB8; } // 801B0DB0
L_801B0DB4:;
  c->r[5]=0u+0x00000004u; // 801B0DB4
L_801B0DB8:;
  c->r[3]=c->r[5]|c->r[5]; // 801B0DB8
  return; // 801B0DBC
}

// btm_acl_created
void f_801B0DC0(Ctx* __restrict c) {
  trace_call(0x801B0DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0DC0
  c->r[0]=c->lr; // 801B0DC4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0DC8
  c->r[11]=c->r[1]+0x00000030u; // 801B0DCC
  c->lr=0x801B0DD4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0DD0
  c->r[8]=0u+0x802D0000u; // 801B0DD4
  c->r[30]=c->r[3]|c->r[3]; // 801B0DD8
  c->r[8]=c->r[8]+0x000023D8u; // 801B0DDC
  c->r[25]=c->r[4]|c->r[4]; // 801B0DE0
  c->r[26]=c->r[5]|c->r[5]; // 801B0DE4
  c->r[27]=c->r[6]|c->r[6]; // 801B0DE8
  c->r[28]=c->r[7]|c->r[7]; // 801B0DEC
  c->r[29]=c->r[8]+0x00000034u; // 801B0DF0
  c->r[31]=0u+0x00000000u; // 801B0DF4
L_801B0DF8:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B0DF8
  cmps(c,0,(int32_t)c->r[0],0); // 801B0DFC
  if (crb(c,2)) { goto L_801B0E20; } // 801B0E00
  c->r[4]=c->r[30]|c->r[30]; // 801B0E04
  c->r[3]=c->r[29]+0x00000008u; // 801B0E08
  c->r[5]=0u+0x00000006u; // 801B0E0C
  c->lr=0x801B0E14u; f_801D8F78(c); // 801B0E10
  cmps(c,0,(int32_t)c->r[3],0); // 801B0E14
  if (!crb(c,2)) { goto L_801B0E20; } // 801B0E18
  goto L_801B0E34; // 801B0E1C
L_801B0E20:;
  c->r[31]=c->r[31]+0x00000001u; // 801B0E20
  c->r[29]=c->r[29]+0x0000011Cu; // 801B0E24
  cmpu(c,0,c->r[31],0x00000004u); // 801B0E28
  if (crb(c,0)) { IRQCHK(c); goto L_801B0DF8; } // 801B0E2C
  c->r[29]=0u+0x00000000u; // 801B0E30
L_801B0E34:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B0E34
  if (crb(c,2)) { goto L_801B0E88; } // 801B0E38
  W16(c->r[29]+0x00000000u,c->r[27]); // 801B0E3C
  c->r[3]=0u+0x802D0000u; // 801B0E40
  c->r[3]=c->r[3]+0x000023D8u; // 801B0E44
  W8(c->r[29]+0x0000011Au,c->r[28]); // 801B0E48
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B0E4C
  cmpu(c,0,c->r[0],0x00000004u); // 801B0E50
  if (crb(c,0)) { goto L_801B10BC; } // 801B0E54
  c->r[3]=0u+0x000D0000u; // 801B0E58
  c->r[4]=0u+0x80240000u; // 801B0E5C
  c->r[5]=R8(c->r[30]+0x00000000u); // 801B0E60
  c->r[3]=c->r[3]+0x00000003u; // 801B0E64
  c->r[6]=R8(c->r[30]+0x00000001u); // 801B0E68
  c->r[4]=c->r[4]+0x00004E58u; // 801B0E6C
  c->r[7]=R8(c->r[30]+0x00000002u); // 801B0E70
  c->r[8]=R8(c->r[30]+0x00000003u); // 801B0E74
  c->r[9]=R8(c->r[30]+0x00000004u); // 801B0E78
  c->r[10]=R8(c->r[30]+0x00000005u); // 801B0E7C
  c->lr=0x801B0E84u; f_801AA880(c); // 801B0E80
  goto L_801B10BC; // 801B0E84
L_801B0E88:;
  c->r[3]=0u+0x802D0000u; // 801B0E88
  c->r[0]=0u+0x00000004u; // 801B0E8C
  c->r[3]=c->r[3]+0x000023D8u; // 801B0E90
  c->r[4]=0u+0x00000000u; // 801B0E94
  c->r[31]=c->r[3]+0x00000034u; // 801B0E98
  c->ctr=c->r[0]; // 801B0E9C
L_801B0EA0:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B0EA0
  cmps(c,0,(int32_t)c->r[0],0); // 801B0EA4
  if (!crb(c,2)) { goto L_801B10B0; } // 801B0EA8
  c->r[3]=0u+0x00000001u; // 801B0EAC
  c->r[0]=0u+0x00000000u; // 801B0EB0
  W8(c->r[31]+0x00000119u,c->r[3]); // 801B0EB4
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 801B0EB8
  W16(c->r[31]+0x00000000u,c->r[27]); // 801B0EBC
  W8(c->r[31]+0x0000011Au,c->r[28]); // 801B0EC0
  W16(c->r[31]+0x00000004u,c->r[0]); // 801B0EC4
  c->lr=0x801B0ECCu; f_801B6A9C(c); // 801B0EC8
  c->r[4]=c->r[30]|c->r[30]; // 801B0ECC
  c->r[3]=c->r[31]+0x00000008u; // 801B0ED0
  c->r[5]=0u+0x00000006u; // 801B0ED4
  c->lr=0x801B0EDCu; f_80004364(c); // 801B0ED8
  cmps(c,0,(int32_t)c->r[25],0); // 801B0EDC
  if (crb(c,2)) { goto L_801B0EF4; } // 801B0EE0
  c->r[4]=c->r[25]|c->r[25]; // 801B0EE4
  c->r[3]=c->r[31]+0x0000000Eu; // 801B0EE8
  c->r[5]=0u+0x00000003u; // 801B0EEC
  c->lr=0x801B0EF4u; f_80004364(c); // 801B0EF0
L_801B0EF4:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B0EF4
  if (crb(c,2)) { goto L_801B0F0C; } // 801B0EF8
  c->r[4]=c->r[26]|c->r[26]; // 801B0EFC
  c->r[3]=c->r[31]+0x00000011u; // 801B0F00
  c->r[5]=0u+0x000000F8u; // 801B0F04
  c->lr=0x801B0F0Cu; f_80004364(c); // 801B0F08
L_801B0F0C:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B0F0C
  c->lr=0x801B0F14u; f_801BE420(c); // 801B0F10
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B0F14
  c->lr=0x801B0F1Cu; f_801BE3A4(c); // 801B0F18
  c->r[3]=c->r[27]|c->r[27]; // 801B0F1C
  c->lr=0x801B0F24u; f_801B2E58(c); // 801B0F20
  cmps(c,0,(int32_t)c->r[3],0); // 801B0F24
  c->r[5]=c->r[3]|c->r[3]; // 801B0F28
  if (crb(c,2)) { goto L_801B10A4; } // 801B0F2C
  c->r[0]=0u+0x00000008u; // 801B0F30
  c->r[6]=0u+0x00000000u; // 801B0F34
  c->ctr=c->r[0]; // 801B0F38
L_801B0F3C:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801B0F3C
  c->r[4]=c->r[3]+c->r[0]; // 801B0F40
  c->r[0]=R8(c->r[4]+0x00000077u); // 801B0F44
  cmps(c,0,(int32_t)c->r[0],0); // 801B0F48
  if (crb(c,2)) { goto L_801B109C; } // 801B0F4C
  c->r[4]=c->r[5]+0x00000077u; // 801B0F50
  c->r[3]=c->r[31]+0x00000110u; // 801B0F54
  c->r[5]=0u+0x00000008u; // 801B0F58
  c->lr=0x801B0F60u; f_80004364(c); // 801B0F5C
  c->r[3]=0u+0x802D0000u; // 801B0F60
  c->r[0]=0u+0xFFFFCCF9u; // 801B0F64
  c->r[3]=c->r[3]+0x000023D8u; // 801B0F68
  c->r[5]=R16(c->r[3]+0x00000654u); // 801B0F6C
  c->r[3]=R8(c->r[3]+0x00000636u); // 801B0F70
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 801B0F74
  cmpu(c,0,c->r[3],0x00000003u); // 801B0F78
  c->r[30]=c->r[4]&c->r[0]; // 801B0F7C
  if (crb(c,0)) { goto L_801B0F90; } // 801B0F80
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 801B0F84
  c->r[0]=c->r[4]|c->r[0]; // 801B0F88
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801B0F8C
L_801B0F90:;
  c->r[3]=0u+0x802D0000u; // 801B0F90
  c->r[3]=c->r[3]+0x000023D8u; // 801B0F94
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B0F98
  cmpu(c,0,c->r[0],0x00000004u); // 801B0F9C
  if (crb(c,0)) { goto L_801B0FBC; } // 801B0FA0
  c->r[3]=0u+0x000D0000u; // 801B0FA4
  c->r[4]=0u+0x80240000u; // 801B0FA8
  c->r[3]=c->r[3]+0x00000003u; // 801B0FAC
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 801B0FB0
  c->r[4]=c->r[4]+0x00004E98u; // 801B0FB4
  c->lr=0x801B0FBCu; f_801AA7E0(c); // 801B0FB8
L_801B0FBC:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B0FBC
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801B0FC0
  c->lr=0x801B0FC8u; f_801BE018(c); // 801B0FC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B0FC8
  if (crb(c,2)) { goto L_801B0FD4; } // 801B0FCC
  W16(c->r[31]+0x00000002u,c->r[30]); // 801B0FD0
L_801B0FD4:;
  c->r[4]=0u+0x802D0000u; // 801B0FD4
  c->r[4]=c->r[4]+0x000023D8u; // 801B0FD8
  c->r[0]=R16(c->r[4]+0x000004C4u); // 801B0FDC
  cmps(c,0,(int32_t)c->r[0],0); // 801B0FE0
  if (crb(c,2)) { goto L_801B0FF4; } // 801B0FE4
  c->r[3]=c->r[31]+0x00000008u; // 801B0FE8
  c->r[4]=c->r[4]+0x000004C4u; // 801B0FEC
  c->lr=0x801B0FF4u; f_801B1588(c); // 801B0FF0
L_801B0FF4:;
  c->r[3]=0u+0x802D0000u; // 801B0FF4
  c->r[29]=0u+0x00000000u; // 801B0FF8
  c->r[3]=c->r[3]+0x000023D8u; // 801B0FFC
  c->r[28]=R16(c->r[3]+0x000004C6u); // 801B1000
  c->r[30]=c->r[3]+0x00000034u; // 801B1004
L_801B1008:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B1008
  cmps(c,0,(int32_t)c->r[0],0); // 801B100C
  if (crb(c,2)) { goto L_801B1030; } // 801B1010
  c->r[3]=c->r[30]+0x00000008u; // 801B1014
  c->r[4]=c->r[31]+0x00000008u; // 801B1018
  c->r[5]=0u+0x00000006u; // 801B101C
  c->lr=0x801B1024u; f_801D8F78(c); // 801B1020
  cmps(c,0,(int32_t)c->r[3],0); // 801B1024
  if (!crb(c,2)) { goto L_801B1030; } // 801B1028
  goto L_801B1044; // 801B102C
L_801B1030:;
  c->r[29]=c->r[29]+0x00000001u; // 801B1030
  c->r[30]=c->r[30]+0x0000011Cu; // 801B1034
  cmpu(c,0,c->r[29],0x00000004u); // 801B1038
  if (crb(c,0)) { IRQCHK(c); goto L_801B1008; } // 801B103C
  c->r[30]=0u+0x00000000u; // 801B1040
L_801B1044:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B1044
  if (crb(c,2)) { goto L_801B1068; } // 801B1048
  W16(c->r[30]+0x0000010Eu,c->r[28]); // 801B104C
  c->r[0]=R8(c->r[30]+0x0000011Au); // 801B1050
  cmps(c,0,(int32_t)c->r[0],0); // 801B1054
  if (!crb(c,2)) { goto L_801B1068; } // 801B1058
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B105C
  c->r[4]=c->r[28]|c->r[28]; // 801B1060
  c->lr=0x801B1068u; f_801BF518(c); // 801B1064
L_801B1068:;
  c->r[3]=0u+0x802D0000u; // 801B1068
  c->r[3]=c->r[3]+0x000023D8u; // 801B106C
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801B1070
  cmps(c,0,(int32_t)c->r[12],0); // 801B1074
  if (crb(c,2)) { goto L_801B10BC; } // 801B1078
  c->r[3]=c->r[31]+0x00000008u; // 801B107C
  c->r[4]=c->r[31]+0x0000000Eu; // 801B1080
  c->r[5]=c->r[31]+0x00000011u; // 801B1084
  c->r[6]=c->r[31]+0x00000110u; // 801B1088
  c->r[7]=0u+0x00000001u; // 801B108C
  c->ctr=c->r[12]; // 801B1090
  if (true) { c->lr=0x801B1098u; dispatch(c,c->ctr); } // 801B1094
  goto L_801B10BC; // 801B1098
L_801B109C:;
  c->r[6]=c->r[6]+0x00000001u; // 801B109C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0F3C; } // 801B10A0
L_801B10A4:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B10A4
  c->lr=0x801B10ACu; f_801BE328(c); // 801B10A8
  goto L_801B10BC; // 801B10AC
L_801B10B0:;
  c->r[4]=c->r[4]+0x00000001u; // 801B10B0
  c->r[31]=c->r[31]+0x0000011Cu; // 801B10B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B0EA0; } // 801B10B8
L_801B10BC:;
  c->r[11]=c->r[1]+0x00000030u; // 801B10BC
  c->lr=0x801B10C4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B10C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B10C4
  c->lr=c->r[0]; // 801B10C8
  c->r[1]=c->r[1]+0x00000030u; // 801B10CC
  return; // 801B10D0
}

// btm_acl_removed
void f_801B10D4(Ctx* __restrict c) {
  trace_call(0x801B10D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B10D4
  c->r[0]=c->lr; // 801B10D8
  c->r[4]=0u+0x802D0000u; // 801B10DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B10E0
  c->r[4]=c->r[4]+0x000023D8u; // 801B10E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B10E8
  c->r[31]=0u+0x00000000u; // 801B10EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B10F0
  c->r[30]=c->r[4]+0x00000034u; // 801B10F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B10F8
  c->r[29]=c->r[3]|c->r[3]; // 801B10FC
L_801B1100:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B1100
  cmps(c,0,(int32_t)c->r[0],0); // 801B1104
  if (crb(c,2)) { goto L_801B1128; } // 801B1108
  c->r[4]=c->r[29]|c->r[29]; // 801B110C
  c->r[3]=c->r[30]+0x00000008u; // 801B1110
  c->r[5]=0u+0x00000006u; // 801B1114
  c->lr=0x801B111Cu; f_801D8F78(c); // 801B1118
  cmps(c,0,(int32_t)c->r[3],0); // 801B111C
  if (!crb(c,2)) { goto L_801B1128; } // 801B1120
  goto L_801B113C; // 801B1124
L_801B1128:;
  c->r[31]=c->r[31]+0x00000001u; // 801B1128
  c->r[30]=c->r[30]+0x0000011Cu; // 801B112C
  cmpu(c,0,c->r[31],0x00000004u); // 801B1130
  if (crb(c,0)) { IRQCHK(c); goto L_801B1100; } // 801B1134
  c->r[30]=0u+0x00000000u; // 801B1138
L_801B113C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B113C
  if (crb(c,2)) { goto L_801B117C; } // 801B1140
  c->r[0]=0u+0x00000000u; // 801B1144
  c->r[3]=0u+0x802D0000u; // 801B1148
  W8(c->r[30]+0x00000119u,c->r[0]); // 801B114C
  c->r[3]=c->r[3]+0x000023D8u; // 801B1150
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801B1154
  cmps(c,0,(int32_t)c->r[12],0); // 801B1158
  if (crb(c,2)) { goto L_801B117C; } // 801B115C
  c->r[3]=c->r[29]|c->r[29]; // 801B1160
  c->r[4]=0u+0x00000000u; // 801B1164
  c->r[5]=0u+0x00000000u; // 801B1168
  c->r[6]=0u+0x00000000u; // 801B116C
  c->r[7]=0u+0x00000000u; // 801B1170
  c->ctr=c->r[12]; // 801B1174
  if (true) { c->lr=0x801B117Cu; dispatch(c,c->ctr); } // 801B1178
L_801B117C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B117C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1180
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1184
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1188
  c->lr=c->r[0]; // 801B118C
  c->r[1]=c->r[1]+0x00000020u; // 801B1190
  return; // 801B1194
}

// btm_acl_device_down
void f_801B1198(Ctx* __restrict c) {
  trace_call(0x801B1198u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1198
  c->r[0]=c->lr; // 801B119C
  c->r[3]=0u+0x802D0000u; // 801B11A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B11A4
  c->r[3]=c->r[3]+0x000023D8u; // 801B11A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B11AC
  c->r[31]=c->r[3]+0x00000034u; // 801B11B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B11B4
  c->r[30]=0u+0x00000000u; // 801B11B8
L_801B11BC:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B11BC
  cmps(c,0,(int32_t)c->r[0],0); // 801B11C0
  if (crb(c,2)) { goto L_801B11D4; } // 801B11C4
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B11C8
  c->r[4]=0u+0x00000003u; // 801B11CC
  c->lr=0x801B11D4u; f_801C560C(c); // 801B11D0
L_801B11D4:;
  c->r[30]=c->r[30]+0x00000001u; // 801B11D4
  c->r[31]=c->r[31]+0x0000011Cu; // 801B11D8
  cmpu(c,0,c->r[30],0x00000004u); // 801B11DC
  if (crb(c,0)) { IRQCHK(c); goto L_801B11BC; } // 801B11E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B11E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B11E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B11EC
  c->lr=c->r[0]; // 801B11F0
  c->r[1]=c->r[1]+0x00000010u; // 801B11F4
  return; // 801B11F8
}

// BTM_SwitchRole
void f_801B11FC(Ctx* __restrict c) {
  trace_call(0x801B11FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B11FC
  c->r[0]=c->lr; // 801B1200
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B1204
  c->r[11]=c->r[1]+0x00000030u; // 801B1208
  c->lr=0x801B1210u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B120C
  c->r[6]=0u+0x802D0000u; // 801B1210
  c->r[28]=c->r[3]|c->r[3]; // 801B1214
  c->r[6]=c->r[6]+0x000023D8u; // 801B1218
  c->r[29]=c->r[4]|c->r[4]; // 801B121C
  c->r[0]=R8(c->r[6]+0x00000640u); // 801B1220
  c->r[30]=c->r[5]|c->r[5]; // 801B1224
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B1228
  if (!crb(c,2)) { goto L_801B1238; } // 801B122C
  c->r[3]=0u+0x00000004u; // 801B1230
  goto L_801B1400; // 801B1234
L_801B1238:;
  c->r[31]=c->r[6]+0x00000034u; // 801B1238
  c->r[27]=0u+0x00000000u; // 801B123C
L_801B1240:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B1240
  cmps(c,0,(int32_t)c->r[0],0); // 801B1244
  if (crb(c,2)) { goto L_801B1268; } // 801B1248
  c->r[4]=c->r[28]|c->r[28]; // 801B124C
  c->r[3]=c->r[31]+0x00000008u; // 801B1250
  c->r[5]=0u+0x00000006u; // 801B1254
  c->lr=0x801B125Cu; f_801D8F78(c); // 801B1258
  cmps(c,0,(int32_t)c->r[3],0); // 801B125C
  if (!crb(c,2)) { goto L_801B1268; } // 801B1260
  goto L_801B127C; // 801B1264
L_801B1268:;
  c->r[27]=c->r[27]+0x00000001u; // 801B1268
  c->r[31]=c->r[31]+0x0000011Cu; // 801B126C
  cmpu(c,0,c->r[27],0x00000004u); // 801B1270
  if (crb(c,0)) { IRQCHK(c); goto L_801B1240; } // 801B1274
  c->r[31]=0u+0x00000000u; // 801B1278
L_801B127C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B127C
  if (!crb(c,2)) { goto L_801B128C; } // 801B1280
  c->r[3]=0u+0x00000007u; // 801B1284
  goto L_801B1400; // 801B1288
L_801B128C:;
  c->r[0]=R8(c->r[31]+0x0000011Au); // 801B128C
  cmpu(c,0,c->r[0],c->r[29]); // 801B1290
  if (!crb(c,2)) { goto L_801B12A0; } // 801B1294
  c->r[3]=0u+0x00000000u; // 801B1298
  goto L_801B1400; // 801B129C
L_801B12A0:;
  c->r[3]=c->r[28]|c->r[28]; // 801B12A0
  c->lr=0x801B12A8u; f_801B8124(c); // 801B12A4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B12A8
  cmpu(c,0,c->r[0],0x00000001u); // 801B12AC
  if (!crb(c,2)) { goto L_801B12BC; } // 801B12B0
  c->r[3]=0u+0x00000003u; // 801B12B4
  goto L_801B1400; // 801B12B8
L_801B12BC:;
  c->r[0]=R8(c->r[31]+0x0000011Bu); // 801B12BC
  cmps(c,0,(int32_t)c->r[0],0); // 801B12C0
  if (crb(c,2)) { goto L_801B12F8; } // 801B12C4
  c->r[3]=0u+0x802D0000u; // 801B12C8
  c->r[3]=c->r[3]+0x000023D8u; // 801B12CC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B12D0
  cmpu(c,0,c->r[0],0x00000005u); // 801B12D4
  if (crb(c,0)) { goto L_801B12F0; } // 801B12D8
  c->r[3]=0u+0x000D0000u; // 801B12DC
  c->r[4]=0u+0x80240000u; // 801B12E0
  c->r[3]=c->r[3]+0x00000004u; // 801B12E4
  c->r[4]=c->r[4]+0x00004EB8u; // 801B12E8
  c->lr=0x801B12F0u; f_801AA7C0(c); // 801B12EC
L_801B12F0:;
  c->r[3]=0u+0x00000002u; // 801B12F0
  goto L_801B1400; // 801B12F4
L_801B12F8:;
  c->r[3]=0u+0x802D0000u; // 801B12F8
  c->r[4]=0u+0x00000000u; // 801B12FC
  c->r[3]=c->r[3]+0x000023D8u; // 801B1300
  c->r[5]=0u+0x00000008u; // 801B1304
  c->r[3]=c->r[3]+0x00000624u; // 801B1308
  c->lr=0x801B1310u; f_800046B4(c); // 801B130C
  c->r[3]=c->r[31]+0x00000008u; // 801B1310
  c->r[4]=c->r[1]+0x00000008u; // 801B1314
  c->lr=0x801B131Cu; f_801B696C(c); // 801B1318
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B131C
  if (crb(c,2)) { goto L_801B1328; } // 801B1320
  goto L_801B1400; // 801B1324
L_801B1328:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801B1328
  c->r[0]=c->r[3]+0x000000FEu; // 801B132C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B1330
  cmpu(c,0,c->r[0],0x00000001u); // 801B1334
  if (crb(c,1)) { goto L_801B1374; } // 801B1338
  c->r[0]=0u+0x00000000u; // 801B133C
  c->r[4]=c->r[31]+0x00000008u; // 801B1340
  W8(c->r[1]+0x00000014u,c->r[0]); // 801B1344
  c->r[5]=c->r[1]+0x0000000Cu; // 801B1348
  c->r[3]=0u+0x00000080u; // 801B134C
  c->lr=0x801B1354u; f_801B679C(c); // 801B1350
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B1354
  cmpu(c,0,c->r[0],0x00000001u); // 801B1358
  if (crb(c,2)) { goto L_801B1368; } // 801B135C
  c->r[3]=0u+0x00000006u; // 801B1360
  goto L_801B1400; // 801B1364
L_801B1368:;
  c->r[0]=0u+0x00000001u; // 801B1368
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801B136C
  goto L_801B13DC; // 801B1370
L_801B1374:;
  c->r[3]=c->r[28]|c->r[28]; // 801B1374
  c->lr=0x801B137Cu; f_801B2F10(c); // 801B1378
  cmps(c,0,(int32_t)c->r[3],0); // 801B137C
  if (crb(c,2)) { goto L_801B13B8; } // 801B1380
  c->r[0]=R8(c->r[3]+0x00000076u); // 801B1384
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B1388
  if (crb(c,2)) { goto L_801B13B8; } // 801B138C
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B1390
  c->r[4]=0u+0x00000000u; // 801B1394
  c->lr=0x801B139Cu; f_801BE124(c); // 801B1398
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B139C
  if (!crb(c,2)) { goto L_801B13AC; } // 801B13A0
  c->r[3]=0u+0x00000003u; // 801B13A4
  goto L_801B1400; // 801B13A8
L_801B13AC:;
  c->r[0]=0u+0x00000002u; // 801B13AC
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801B13B0
  goto L_801B13DC; // 801B13B4
L_801B13B8:;
  c->r[3]=c->r[28]|c->r[28]; // 801B13B8
  c->r[4]=c->r[29]|c->r[29]; // 801B13BC
  c->lr=0x801B13C4u; f_801BEA1C(c); // 801B13C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B13C4
  if (!crb(c,2)) { goto L_801B13D4; } // 801B13C8
  c->r[3]=0u+0x00000003u; // 801B13CC
  goto L_801B1400; // 801B13D0
L_801B13D4:;
  c->r[0]=0u+0x00000005u; // 801B13D4
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801B13D8
L_801B13DC:;
  c->r[31]=0u+0x802D0000u; // 801B13DC
  c->r[4]=c->r[28]|c->r[28]; // 801B13E0
  c->r[31]=c->r[31]+0x000023D8u; // 801B13E4
  c->r[5]=0u+0x00000006u; // 801B13E8
  c->r[3]=c->r[31]+0x00000626u; // 801B13EC
  c->lr=0x801B13F4u; f_80004364(c); // 801B13F0
  W8(c->r[31]+0x00000625u,c->r[29]); // 801B13F4
  c->r[3]=0u+0x00000001u; // 801B13F8
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 801B13FC
L_801B1400:;
  c->r[11]=c->r[1]+0x00000030u; // 801B1400
  c->lr=0x801B1408u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1404
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B1408
  c->lr=c->r[0]; // 801B140C
  c->r[1]=c->r[1]+0x00000030u; // 801B1410
  return; // 801B1414
}

// btm_acl_encrypt_change
void f_801B1418(Ctx* __restrict c) {
  trace_call(0x801B1418u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1418
  c->r[0]=c->lr; // 801B141C
  c->r[4]=0u+0x802D0000u; // 801B1420
  c->r[6]=0u+0x00000000u; // 801B1424
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1428
  c->r[4]=c->r[4]+0x000023D8u; // 801B142C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1430
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1434
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1438
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801B143C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1440
  if (crb(c,2)) { goto L_801B1454; } // 801B1444
  c->r[0]=R16(c->r[4]+0x00000034u); // 801B1448
  cmpu(c,0,c->r[0],c->r[3]); // 801B144C
  if (crb(c,2)) { goto L_801B14AC; } // 801B1450
L_801B1454:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801B1454
  c->r[6]=0u+0x00000001u; // 801B1458
  cmps(c,0,(int32_t)c->r[0],0); // 801B145C
  if (crb(c,2)) { goto L_801B1470; } // 801B1460
  c->r[0]=R16(c->r[4]+0x00000150u); // 801B1464
  cmpu(c,0,c->r[0],c->r[3]); // 801B1468
  if (crb(c,2)) { goto L_801B14AC; } // 801B146C
L_801B1470:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801B1470
  c->r[6]=0u+0x00000002u; // 801B1474
  cmps(c,0,(int32_t)c->r[0],0); // 801B1478
  if (crb(c,2)) { goto L_801B148C; } // 801B147C
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 801B1480
  cmpu(c,0,c->r[0],c->r[3]); // 801B1484
  if (crb(c,2)) { goto L_801B14AC; } // 801B1488
L_801B148C:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801B148C
  c->r[6]=0u+0x00000003u; // 801B1490
  cmps(c,0,(int32_t)c->r[0],0); // 801B1494
  if (crb(c,2)) { goto L_801B14A8; } // 801B1498
  c->r[0]=R16(c->r[4]+0x00000388u); // 801B149C
  cmpu(c,0,c->r[0],c->r[3]); // 801B14A0
  if (crb(c,2)) { goto L_801B14AC; } // 801B14A4
L_801B14A8:;
  c->r[6]=0u+0x00000004u; // 801B14A8
L_801B14AC:;
  cmpu(c,0,c->r[6],0x00000004u); // 801B14AC
  if (!crb(c,0)) { goto L_801B156C; } // 801B14B0
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 801B14B4
  c->r[30]=0u+0x802D0000u; // 801B14B8
  c->r[30]=c->r[30]+0x000023D8u; // 801B14BC
  c->r[29]=c->r[30]+c->r[0]; // 801B14C0
  goto L_801B14CC; // 801B14C4
  goto L_801B156C; // 801B14C8
L_801B14CC:;
  c->r[0]=R8(c->r[29]+0x0000014Fu); // 801B14CC
  cmpu(c,0,c->r[0],0x00000002u); // 801B14D0
  if (!crb(c,2)) { goto L_801B1540; } // 801B14D4
  cmps(c,0,(int32_t)c->r[5],0); // 801B14D8
  if (crb(c,2)) { goto L_801B14EC; } // 801B14DC
  c->r[0]=0u+0x00000000u; // 801B14E0
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 801B14E4
  goto L_801B14F4; // 801B14E8
L_801B14EC:;
  c->r[0]=0u+0x00000003u; // 801B14EC
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 801B14F0
L_801B14F4:;
  c->r[0]=R8(c->r[29]+0x0000014Eu); // 801B14F4
  c->r[3]=c->r[29]+0x0000003Cu; // 801B14F8
  c->r[0]=cntlz(c->r[0]); // 801B14FC
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 801B1500
  c->lr=0x801B1508u; f_801BEA1C(c); // 801B1504
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B1508
  if (!crb(c,2)) { goto L_801B156C; } // 801B150C
  c->r[30]=0u+0x00000000u; // 801B1510
  c->r[31]=0u+0x802D0000u; // 801B1514
  W8(c->r[29]+0x0000014Fu,c->r[30]); // 801B1518
  c->r[31]=c->r[31]+0x000023D8u; // 801B151C
  c->r[12]=R32(c->r[31]+0x0000062Cu); // 801B1520
  cmps(c,0,(int32_t)c->r[12],0); // 801B1524
  if (crb(c,2)) { goto L_801B156C; } // 801B1528
  c->r[3]=c->r[31]+0x00000624u; // 801B152C
  c->ctr=c->r[12]; // 801B1530
  if (true) { c->lr=0x801B1538u; dispatch(c,c->ctr); } // 801B1534
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 801B1538
  goto L_801B156C; // 801B153C
L_801B1540:;
  cmpu(c,0,c->r[0],0x00000004u); // 801B1540
  if (!crb(c,2)) { goto L_801B156C; } // 801B1544
  c->r[31]=0u+0x00000000u; // 801B1548
  W8(c->r[29]+0x0000014Fu,c->r[31]); // 801B154C
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 801B1550
  cmps(c,0,(int32_t)c->r[12],0); // 801B1554
  if (crb(c,2)) { goto L_801B156C; } // 801B1558
  c->r[3]=c->r[30]+0x00000624u; // 801B155C
  c->ctr=c->r[12]; // 801B1560
  if (true) { c->lr=0x801B1568u; dispatch(c,c->ctr); } // 801B1564
  W32(c->r[30]+0x0000062Cu,c->r[31]); // 801B1568
L_801B156C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B156C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1570
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1574
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1578
  c->lr=c->r[0]; // 801B157C
  c->r[1]=c->r[1]+0x00000020u; // 801B1580
  return; // 801B1584
}

// BTM_SetLinkPolicy
void f_801B1588(Ctx* __restrict c) {
  trace_call(0x801B1588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1588
  c->r[0]=c->lr; // 801B158C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1590
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1594
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1598
  c->r[30]=0u+0x80240000u; // 801B159C
  c->r[30]=c->r[30]+0x00004E58u; // 801B15A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B15A4
  c->r[29]=c->r[4]|c->r[4]; // 801B15A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B15AC
  c->r[28]=c->r[3]|c->r[3]; // 801B15B0
  c->lr=0x801B15B8u; f_801B4254(c); // 801B15B4
  c->r[4]=R16(c->r[29]+0x00000000u); // 801B15B8
  c->r[31]=c->r[3]|c->r[3]; // 801B15BC
  cmps(c,0,(int32_t)c->r[4],0); // 801B15C0
  if (crb(c,2)) { goto L_801B16E0; } // 801B15C4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801B15C8
  if (crb(c,2)) { goto L_801B1608; } // 801B15CC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B15D0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B15D4
  if (!crb(c,2)) { goto L_801B1608; } // 801B15D8
  c->r[5]=rotl(c->r[4],0)&0x0000FFFEu; // 801B15DC
  c->r[3]=0u+0x802D0000u; // 801B15E0
  W16(c->r[29]+0x00000000u,c->r[5]); // 801B15E4
  c->r[3]=c->r[3]+0x000023D8u; // 801B15E8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B15EC
  cmpu(c,0,c->r[0],0x00000003u); // 801B15F0
  if (crb(c,0)) { goto L_801B1608; } // 801B15F4
  c->r[3]=0u+0x000D0000u; // 801B15F8
  c->r[4]=c->r[30]+0x000000BCu; // 801B15FC
  c->r[3]=c->r[3]+0x00000002u; // 801B1600
  c->lr=0x801B1608u; f_801AA7E0(c); // 801B1604
L_801B1608:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B1608
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801B160C
  if (crb(c,2)) { goto L_801B1650; } // 801B1610
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B1614
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B1618
  if (!crb(c,2)) { goto L_801B1650; } // 801B161C
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFDu; // 801B1620
  c->r[3]=0u+0x802D0000u; // 801B1624
  W16(c->r[29]+0x00000000u,c->r[5]); // 801B1628
  c->r[3]=c->r[3]+0x000023D8u; // 801B162C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B1630
  cmpu(c,0,c->r[0],0x00000003u); // 801B1634
  if (crb(c,0)) { goto L_801B1650; } // 801B1638
  c->r[3]=0u+0x000D0000u; // 801B163C
  c->r[4]=c->r[30]+0x000000F8u; // 801B1640
  c->r[3]=c->r[3]+0x00000002u; // 801B1644
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801B1648
  c->lr=0x801B1650u; f_801AA7E0(c); // 801B164C
L_801B1650:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B1650
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B1654
  if (crb(c,2)) { goto L_801B1698; } // 801B1658
  c->r[0]=R8(c->r[31]+0x00000000u); // 801B165C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B1660
  if (!crb(c,2)) { goto L_801B1698; } // 801B1664
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFBu; // 801B1668
  c->r[3]=0u+0x802D0000u; // 801B166C
  W16(c->r[29]+0x00000000u,c->r[5]); // 801B1670
  c->r[3]=c->r[3]+0x000023D8u; // 801B1674
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B1678
  cmpu(c,0,c->r[0],0x00000003u); // 801B167C
  if (crb(c,0)) { goto L_801B1698; } // 801B1680
  c->r[3]=0u+0x000D0000u; // 801B1684
  c->r[4]=c->r[30]+0x00000130u; // 801B1688
  c->r[3]=c->r[3]+0x00000002u; // 801B168C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801B1690
  c->lr=0x801B1698u; f_801AA7E0(c); // 801B1694
L_801B1698:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B1698
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801B169C
  if (crb(c,2)) { goto L_801B16E0; } // 801B16A0
  c->r[0]=R8(c->r[31]+0x00000001u); // 801B16A4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B16A8
  if (!crb(c,2)) { goto L_801B16E0; } // 801B16AC
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFF7u; // 801B16B0
  c->r[3]=0u+0x802D0000u; // 801B16B4
  W16(c->r[29]+0x00000000u,c->r[5]); // 801B16B8
  c->r[3]=c->r[3]+0x000023D8u; // 801B16BC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B16C0
  cmpu(c,0,c->r[0],0x00000003u); // 801B16C4
  if (crb(c,0)) { goto L_801B16E0; } // 801B16C8
  c->r[3]=0u+0x000D0000u; // 801B16CC
  c->r[4]=c->r[30]+0x00000170u; // 801B16D0
  c->r[3]=c->r[3]+0x00000002u; // 801B16D4
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801B16D8
  c->lr=0x801B16E0u; f_801AA7E0(c); // 801B16DC
L_801B16E0:;
  c->r[3]=0u+0x802D0000u; // 801B16E0
  c->r[30]=0u+0x00000000u; // 801B16E4
  c->r[3]=c->r[3]+0x000023D8u; // 801B16E8
  c->r[31]=c->r[3]+0x00000034u; // 801B16EC
L_801B16F0:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B16F0
  cmps(c,0,(int32_t)c->r[0],0); // 801B16F4
  if (crb(c,2)) { goto L_801B1718; } // 801B16F8
  c->r[4]=c->r[28]|c->r[28]; // 801B16FC
  c->r[3]=c->r[31]+0x00000008u; // 801B1700
  c->r[5]=0u+0x00000006u; // 801B1704
  c->lr=0x801B170Cu; f_801D8F78(c); // 801B1708
  cmps(c,0,(int32_t)c->r[3],0); // 801B170C
  if (!crb(c,2)) { goto L_801B1718; } // 801B1710
  goto L_801B172C; // 801B1714
L_801B1718:;
  c->r[30]=c->r[30]+0x00000001u; // 801B1718
  c->r[31]=c->r[31]+0x0000011Cu; // 801B171C
  cmpu(c,0,c->r[30],0x00000004u); // 801B1720
  if (crb(c,0)) { IRQCHK(c); goto L_801B16F0; } // 801B1724
  c->r[31]=0u+0x00000000u; // 801B1728
L_801B172C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B172C
  if (crb(c,2)) { goto L_801B1754; } // 801B1730
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B1734
  c->r[4]=R16(c->r[29]+0x00000000u); // 801B1738
  c->lr=0x801B1740u; f_801BEACC(c); // 801B173C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B1740
  c->r[3]=0u+0x00000003u; // 801B1744
  if (crb(c,2)) { goto L_801B1758; } // 801B1748
  c->r[3]=0u+0x00000001u; // 801B174C
  goto L_801B1758; // 801B1750
L_801B1754:;
  c->r[3]=0u+0x00000007u; // 801B1754
L_801B1758:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1758
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B175C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1760
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1764
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B1768
  c->lr=c->r[0]; // 801B176C
  c->r[1]=c->r[1]+0x00000020u; // 801B1770
  return; // 801B1774
}

// BTM_SetDefaultLinkPolicy
void f_801B1778(Ctx* __restrict c) {
  trace_call(0x801B1778u);
  c->r[4]=0u+0x802D0000u; // 801B1778
  c->r[4]=c->r[4]+0x000023D8u; // 801B177C
  W16(c->r[4]+0x000004C4u,c->r[3]); // 801B1780
  return; // 801B1784
}

// btm_read_link_policy_complete
void f_801B1788(Ctx* __restrict c) {
  trace_call(0x801B1788u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1788
  c->r[0]=c->lr; // 801B178C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B1790
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B1794
  c->r[31]=0u+0x802D0000u; // 801B1798
  c->r[31]=c->r[31]+0x000023D8u; // 801B179C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B17A0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B17A4
  c->r[29]=c->r[31]+0x00000034u; // 801B17A8
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B17AC
  c->r[28]=c->r[3]|c->r[3]; // 801B17B0
  c->r[3]=c->r[31]+0x000005ACu; // 801B17B4
  c->r[30]=R32(c->r[31]+0x000005C4u); // 801B17B8
  c->lr=0x801B17C0u; f_801AAE40(c); // 801B17BC
  c->r[3]=0u+0x00000000u; // 801B17C0
  cmps(c,0,(int32_t)c->r[30],0); // 801B17C4
  W32(c->r[31]+0x000005C4u,c->r[3]); // 801B17C8
  if (crb(c,2)) { goto L_801B186C; } // 801B17CC
  c->r[0]=R8(c->r[28]+0x00000000u); // 801B17D0
  cmps(c,0,(int32_t)c->r[0],0); // 801B17D4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B17D8
  if (!crb(c,2)) { goto L_801B1854; } // 801B17DC
  W8(c->r[1]+0x00000008u,c->r[3]); // 801B17E0
  c->r[0]=0u+0x00000004u; // 801B17E4
  c->r[7]=0u+0x00000000u; // 801B17E8
  c->r[4]=R8(c->r[28]+0x00000002u); // 801B17EC
  c->r[3]=R8(c->r[28]+0x00000004u); // 801B17F0
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 801B17F4
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B17F8
  c->r[4]=R8(c->r[28]+0x00000003u); // 801B17FC
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801B1800
  c->r[5]=c->r[6]+c->r[5]; // 801B1804
  c->r[3]=c->r[4]+c->r[3]; // 801B1808
  W16(c->r[1]+0x00000010u,c->r[3]); // 801B180C
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801B1810
  c->ctr=c->r[0]; // 801B1814
L_801B1818:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B1818
  cmps(c,0,(int32_t)c->r[0],0); // 801B181C
  if (crb(c,2)) { goto L_801B1844; } // 801B1820
  c->r[0]=R16(c->r[29]+0x00000000u); // 801B1824
  cmpu(c,0,c->r[3],c->r[0]); // 801B1828
  if (!crb(c,2)) { goto L_801B1844; } // 801B182C
  c->r[3]=c->r[1]+0x0000000Au; // 801B1830
  c->r[4]=c->r[29]+0x00000008u; // 801B1834
  c->r[5]=0u+0x00000006u; // 801B1838
  c->lr=0x801B1840u; f_80004364(c); // 801B183C
  goto L_801B185C; // 801B1840
L_801B1844:;
  c->r[7]=c->r[7]+0x00000001u; // 801B1844
  c->r[29]=c->r[29]+0x0000011Cu; // 801B1848
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B1818; } // 801B184C
  goto L_801B185C; // 801B1850
L_801B1854:;
  c->r[0]=0u+0x0000000Au; // 801B1854
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B1858
L_801B185C:;
  c->r[12]=c->r[30]|c->r[30]; // 801B185C
  c->r[3]=c->r[1]+0x00000008u; // 801B1860
  c->ctr=c->r[12]; // 801B1864
  if (true) { c->lr=0x801B186Cu; dispatch(c,c->ctr); } // 801B1868
L_801B186C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B186C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B1870
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B1874
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B1878
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B187C
  c->lr=c->r[0]; // 801B1880
  c->r[1]=c->r[1]+0x00000030u; // 801B1884
  return; // 801B1888
}

// btm_read_remote_version_complete
void f_801B188C(Ctx* __restrict c) {
  trace_call(0x801B188Cu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B188C
  c->r[4]=0u+0x802D0000u; // 801B1890
  c->r[4]=c->r[4]+0x000023D8u; // 801B1894
  cmps(c,0,(int32_t)c->r[0],0); // 801B1898
  c->r[6]=c->r[4]+0x00000034u; // 801B189C
  if (!crb(c,2)) return; // 801B18A0
  c->r[4]=R8(c->r[3]+0x00000002u); // 801B18A4
  c->r[0]=0u+0x00000004u; // 801B18A8
  c->r[5]=R8(c->r[3]+0x00000001u); // 801B18AC
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801B18B0
  c->r[4]=c->r[5]+c->r[4]; // 801B18B4
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801B18B8
  c->ctr=c->r[0]; // 801B18BC
L_801B18C0:;
  c->r[0]=R8(c->r[6]+0x00000119u); // 801B18C0
  cmps(c,0,(int32_t)c->r[0],0); // 801B18C4
  if (crb(c,2)) { goto L_801B190C; } // 801B18C8
  c->r[0]=R16(c->r[6]+0x00000000u); // 801B18CC
  cmpu(c,0,c->r[0],c->r[4]); // 801B18D0
  if (!crb(c,2)) { goto L_801B190C; } // 801B18D4
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B18D8
  W8(c->r[6]+0x00000118u,c->r[0]); // 801B18DC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801B18E0
  c->r[4]=R8(c->r[3]+0x00000004u); // 801B18E4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B18E8
  c->r[0]=c->r[4]+c->r[0]; // 801B18EC
  W16(c->r[6]+0x0000010Au,c->r[0]); // 801B18F0
  c->r[0]=R8(c->r[3]+0x00000007u); // 801B18F4
  c->r[3]=R8(c->r[3]+0x00000006u); // 801B18F8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B18FC
  c->r[0]=c->r[3]+c->r[0]; // 801B1900
  W16(c->r[6]+0x0000010Cu,c->r[0]); // 801B1904
  return; // 801B1908
L_801B190C:;
  c->r[6]=c->r[6]+0x0000011Cu; // 801B190C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B18C0; } // 801B1910
  return; // 801B1914
}

// btm_read_remote_features_complete
void f_801B1918(Ctx* __restrict c) {
  trace_call(0x801B1918u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1918
  c->r[0]=c->lr; // 801B191C
  c->r[4]=0u+0x802D0000u; // 801B1920
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1924
  c->r[4]=c->r[4]+0x000023D8u; // 801B1928
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B192C
  c->r[31]=c->r[4]+0x00000034u; // 801B1930
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1934
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1938
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B193C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B1940
  cmps(c,0,(int32_t)c->r[0],0); // 801B1944
  if (!crb(c,2)) { goto L_801B1B24; } // 801B1948
  c->r[4]=R8(c->r[3]+0x00000002u); // 801B194C
  c->r[0]=0u+0x00000004u; // 801B1950
  c->r[5]=R8(c->r[3]+0x00000001u); // 801B1954
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801B1958
  c->r[4]=c->r[5]+c->r[4]; // 801B195C
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801B1960
  c->ctr=c->r[0]; // 801B1964
L_801B1968:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801B1968
  cmps(c,0,(int32_t)c->r[0],0); // 801B196C
  if (crb(c,2)) { goto L_801B1B1C; } // 801B1970
  c->r[0]=R16(c->r[31]+0x00000000u); // 801B1974
  cmpu(c,0,c->r[0],c->r[4]); // 801B1978
  if (!crb(c,2)) { goto L_801B1B1C; } // 801B197C
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B1980
  W8(c->r[31]+0x00000110u,c->r[0]); // 801B1984
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B1988
  W8(c->r[31]+0x00000111u,c->r[0]); // 801B198C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801B1990
  W8(c->r[31]+0x00000112u,c->r[0]); // 801B1994
  c->r[0]=R8(c->r[3]+0x00000006u); // 801B1998
  W8(c->r[31]+0x00000113u,c->r[0]); // 801B199C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801B19A0
  W8(c->r[31]+0x00000114u,c->r[0]); // 801B19A4
  c->r[0]=R8(c->r[3]+0x00000008u); // 801B19A8
  W8(c->r[31]+0x00000115u,c->r[0]); // 801B19AC
  c->r[0]=R8(c->r[3]+0x00000009u); // 801B19B0
  W8(c->r[31]+0x00000116u,c->r[0]); // 801B19B4
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801B19B8
  c->r[3]=c->r[4]|c->r[4]; // 801B19BC
  W8(c->r[31]+0x00000117u,c->r[0]); // 801B19C0
  c->lr=0x801B19C8u; f_801B2E58(c); // 801B19C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B19C8
  if (crb(c,2)) { goto L_801B19E0; } // 801B19CC
  c->r[4]=c->r[31]+0x00000110u; // 801B19D0
  c->r[5]=0u+0x00000008u; // 801B19D4
  c->r[3]=c->r[3]+0x00000077u; // 801B19D8
  c->lr=0x801B19E0u; f_80004364(c); // 801B19DC
L_801B19E0:;
  c->r[3]=0u+0x802D0000u; // 801B19E0
  c->r[0]=0u+0xFFFFCCF9u; // 801B19E4
  c->r[3]=c->r[3]+0x000023D8u; // 801B19E8
  c->r[5]=R16(c->r[3]+0x00000654u); // 801B19EC
  c->r[3]=R8(c->r[3]+0x00000636u); // 801B19F0
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 801B19F4
  cmpu(c,0,c->r[3],0x00000003u); // 801B19F8
  c->r[30]=c->r[4]&c->r[0]; // 801B19FC
  if (crb(c,0)) { goto L_801B1A10; } // 801B1A00
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 801B1A04
  c->r[0]=c->r[4]|c->r[0]; // 801B1A08
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801B1A0C
L_801B1A10:;
  c->r[3]=0u+0x802D0000u; // 801B1A10
  c->r[3]=c->r[3]+0x000023D8u; // 801B1A14
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B1A18
  cmpu(c,0,c->r[0],0x00000004u); // 801B1A1C
  if (crb(c,0)) { goto L_801B1A3C; } // 801B1A20
  c->r[3]=0u+0x000D0000u; // 801B1A24
  c->r[4]=0u+0x80240000u; // 801B1A28
  c->r[3]=c->r[3]+0x00000003u; // 801B1A2C
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 801B1A30
  c->r[4]=c->r[4]+0x00004E98u; // 801B1A34
  c->lr=0x801B1A3Cu; f_801AA7E0(c); // 801B1A38
L_801B1A3C:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801B1A3C
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801B1A40
  c->lr=0x801B1A48u; f_801BE018(c); // 801B1A44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B1A48
  if (crb(c,2)) { goto L_801B1A54; } // 801B1A4C
  W16(c->r[31]+0x00000002u,c->r[30]); // 801B1A50
L_801B1A54:;
  c->r[4]=0u+0x802D0000u; // 801B1A54
  c->r[4]=c->r[4]+0x000023D8u; // 801B1A58
  c->r[0]=R16(c->r[4]+0x000004C4u); // 801B1A5C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1A60
  if (crb(c,2)) { goto L_801B1A74; } // 801B1A64
  c->r[3]=c->r[31]+0x00000008u; // 801B1A68
  c->r[4]=c->r[4]+0x000004C4u; // 801B1A6C
  c->lr=0x801B1A74u; f_801B1588(c); // 801B1A70
L_801B1A74:;
  c->r[3]=0u+0x802D0000u; // 801B1A74
  c->r[30]=0u+0x00000000u; // 801B1A78
  c->r[3]=c->r[3]+0x000023D8u; // 801B1A7C
  c->r[28]=R16(c->r[3]+0x000004C6u); // 801B1A80
  c->r[29]=c->r[3]+0x00000034u; // 801B1A84
L_801B1A88:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B1A88
  cmps(c,0,(int32_t)c->r[0],0); // 801B1A8C
  if (crb(c,2)) { goto L_801B1AB0; } // 801B1A90
  c->r[3]=c->r[29]+0x00000008u; // 801B1A94
  c->r[4]=c->r[31]+0x00000008u; // 801B1A98
  c->r[5]=0u+0x00000006u; // 801B1A9C
  c->lr=0x801B1AA4u; f_801D8F78(c); // 801B1AA0
  cmps(c,0,(int32_t)c->r[3],0); // 801B1AA4
  if (!crb(c,2)) { goto L_801B1AB0; } // 801B1AA8
  goto L_801B1AC4; // 801B1AAC
L_801B1AB0:;
  c->r[30]=c->r[30]+0x00000001u; // 801B1AB0
  c->r[29]=c->r[29]+0x0000011Cu; // 801B1AB4
  cmpu(c,0,c->r[30],0x00000004u); // 801B1AB8
  if (crb(c,0)) { IRQCHK(c); goto L_801B1A88; } // 801B1ABC
  c->r[29]=0u+0x00000000u; // 801B1AC0
L_801B1AC4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B1AC4
  if (crb(c,2)) { goto L_801B1AE8; } // 801B1AC8
  W16(c->r[29]+0x0000010Eu,c->r[28]); // 801B1ACC
  c->r[0]=R8(c->r[29]+0x0000011Au); // 801B1AD0
  cmps(c,0,(int32_t)c->r[0],0); // 801B1AD4
  if (!crb(c,2)) { goto L_801B1AE8; } // 801B1AD8
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B1ADC
  c->r[4]=c->r[28]|c->r[28]; // 801B1AE0
  c->lr=0x801B1AE8u; f_801BF518(c); // 801B1AE4
L_801B1AE8:;
  c->r[3]=0u+0x802D0000u; // 801B1AE8
  c->r[3]=c->r[3]+0x000023D8u; // 801B1AEC
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801B1AF0
  cmps(c,0,(int32_t)c->r[12],0); // 801B1AF4
  if (crb(c,2)) { goto L_801B1B24; } // 801B1AF8
  c->r[3]=c->r[31]+0x00000008u; // 801B1AFC
  c->r[4]=c->r[31]+0x0000000Eu; // 801B1B00
  c->r[5]=c->r[31]+0x00000011u; // 801B1B04
  c->r[6]=c->r[31]+0x00000110u; // 801B1B08
  c->r[7]=0u+0x00000001u; // 801B1B0C
  c->ctr=c->r[12]; // 801B1B10
  if (true) { c->lr=0x801B1B18u; dispatch(c,c->ctr); } // 801B1B14
  goto L_801B1B24; // 801B1B18
L_801B1B1C:;
  c->r[31]=c->r[31]+0x0000011Cu; // 801B1B1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B1968; } // 801B1B20
L_801B1B24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1B24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1B28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1B2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1B30
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B1B34
  c->lr=c->r[0]; // 801B1B38
  c->r[1]=c->r[1]+0x00000020u; // 801B1B3C
  return; // 801B1B40
}

// BTM_SetDefaultLinkSuperTout
void f_801B1B44(Ctx* __restrict c) {
  trace_call(0x801B1B44u);
  c->r[4]=0u+0x802D0000u; // 801B1B44
  c->r[4]=c->r[4]+0x000023D8u; // 801B1B48
  W16(c->r[4]+0x000004C6u,c->r[3]); // 801B1B4C
  return; // 801B1B50
}

// BTM_IsAclConnectionUp
void f_801B1B54(Ctx* __restrict c) {
  trace_call(0x801B1B54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1B54
  c->r[0]=c->lr; // 801B1B58
  c->r[4]=0u+0x802D0000u; // 801B1B5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1B60
  c->r[4]=c->r[4]+0x000023D8u; // 801B1B64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1B68
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1B6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1B70
  c->r[29]=c->r[3]|c->r[3]; // 801B1B74
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B1B78
  cmpu(c,0,c->r[0],0x00000003u); // 801B1B7C
  if (crb(c,0)) { goto L_801B1BB0; } // 801B1B80
  c->r[3]=0u+0x000D0000u; // 801B1B84
  c->r[4]=0u+0x80240000u; // 801B1B88
  c->r[5]=R8(c->r[29]+0x00000000u); // 801B1B8C
  c->r[3]=c->r[3]+0x00000002u; // 801B1B90
  c->r[6]=R8(c->r[29]+0x00000001u); // 801B1B94
  c->r[4]=c->r[4]+0x00005038u; // 801B1B98
  c->r[7]=R8(c->r[29]+0x00000002u); // 801B1B9C
  c->r[8]=R8(c->r[29]+0x00000003u); // 801B1BA0
  c->r[9]=R8(c->r[29]+0x00000004u); // 801B1BA4
  c->r[10]=R8(c->r[29]+0x00000005u); // 801B1BA8
  c->lr=0x801B1BB0u; f_801AA880(c); // 801B1BAC
L_801B1BB0:;
  c->r[3]=0u+0x802D0000u; // 801B1BB0
  c->r[31]=0u+0x00000000u; // 801B1BB4
  c->r[3]=c->r[3]+0x000023D8u; // 801B1BB8
  c->r[30]=c->r[3]+0x00000034u; // 801B1BBC
L_801B1BC0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B1BC0
  cmps(c,0,(int32_t)c->r[0],0); // 801B1BC4
  if (crb(c,2)) { goto L_801B1BE8; } // 801B1BC8
  c->r[4]=c->r[29]|c->r[29]; // 801B1BCC
  c->r[3]=c->r[30]+0x00000008u; // 801B1BD0
  c->r[5]=0u+0x00000006u; // 801B1BD4
  c->lr=0x801B1BDCu; f_801D8F78(c); // 801B1BD8
  cmps(c,0,(int32_t)c->r[3],0); // 801B1BDC
  if (!crb(c,2)) { goto L_801B1BE8; } // 801B1BE0
  goto L_801B1BFC; // 801B1BE4
L_801B1BE8:;
  c->r[31]=c->r[31]+0x00000001u; // 801B1BE8
  c->r[30]=c->r[30]+0x0000011Cu; // 801B1BEC
  cmpu(c,0,c->r[31],0x00000004u); // 801B1BF0
  if (crb(c,0)) { IRQCHK(c); goto L_801B1BC0; } // 801B1BF4
  c->r[30]=0u+0x00000000u; // 801B1BF8
L_801B1BFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B1BFC
  if (crb(c,2)) { goto L_801B1C0C; } // 801B1C00
  c->r[3]=0u+0x00000001u; // 801B1C04
  goto L_801B1C10; // 801B1C08
L_801B1C0C:;
  c->r[3]=0u+0x00000000u; // 801B1C0C
L_801B1C10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1C10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1C14
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1C18
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1C1C
  c->lr=c->r[0]; // 801B1C20
  c->r[1]=c->r[1]+0x00000020u; // 801B1C24
  return; // 801B1C28
}

// BTM_GetNumAclLinks
void f_801B1C2C(Ctx* __restrict c) {
  trace_call(0x801B1C2Cu);
  c->r[4]=0u+0x802D0000u; // 801B1C2C
  c->r[3]=0u+0x00000000u; // 801B1C30
  c->r[4]=c->r[4]+0x000023D8u; // 801B1C34
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801B1C38
  cmps(c,0,(int32_t)c->r[0],0); // 801B1C3C
  if (crb(c,2)) { goto L_801B1C48; } // 801B1C40
  c->r[3]=0u+0x00000001u; // 801B1C44
L_801B1C48:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801B1C48
  cmps(c,0,(int32_t)c->r[0],0); // 801B1C4C
  if (crb(c,2)) { goto L_801B1C5C; } // 801B1C50
  c->r[0]=c->r[3]+0x00000001u; // 801B1C54
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B1C58
L_801B1C5C:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801B1C5C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1C60
  if (crb(c,2)) { goto L_801B1C70; } // 801B1C64
  c->r[0]=c->r[3]+0x00000001u; // 801B1C68
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B1C6C
L_801B1C70:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801B1C70
  cmps(c,0,(int32_t)c->r[0],0); // 801B1C74
  if (crb(c,2)) return; // 801B1C78
  c->r[0]=c->r[3]+0x00000001u; // 801B1C7C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B1C80
  return; // 801B1C84
}

// btm_get_acl_disc_reason_code
void f_801B1C88(Ctx* __restrict c) {
  trace_call(0x801B1C88u);
  c->r[3]=0u+0x802D0000u; // 801B1C88
  c->r[3]=c->r[3]+0x000023D8u; // 801B1C8C
  c->r[3]=R8(c->r[3]+0x000027BFu); // 801B1C90
  return; // 801B1C94
}

// BTM_GetHCIConnHandle
void f_801B1C98(Ctx* __restrict c) {
  trace_call(0x801B1C98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1C98
  c->r[0]=c->lr; // 801B1C9C
  c->r[4]=0u+0x802D0000u; // 801B1CA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1CA4
  c->r[4]=c->r[4]+0x000023D8u; // 801B1CA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1CAC
  c->r[31]=0u+0x00000000u; // 801B1CB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B1CB4
  c->r[30]=c->r[4]+0x00000034u; // 801B1CB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1CBC
  c->r[29]=c->r[3]|c->r[3]; // 801B1CC0
L_801B1CC4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B1CC4
  cmps(c,0,(int32_t)c->r[0],0); // 801B1CC8
  if (crb(c,2)) { goto L_801B1CEC; } // 801B1CCC
  c->r[4]=c->r[29]|c->r[29]; // 801B1CD0
  c->r[3]=c->r[30]+0x00000008u; // 801B1CD4
  c->r[5]=0u+0x00000006u; // 801B1CD8
  c->lr=0x801B1CE0u; f_801D8F78(c); // 801B1CDC
  cmps(c,0,(int32_t)c->r[3],0); // 801B1CE0
  if (!crb(c,2)) { goto L_801B1CEC; } // 801B1CE4
  goto L_801B1D00; // 801B1CE8
L_801B1CEC:;
  c->r[31]=c->r[31]+0x00000001u; // 801B1CEC
  c->r[30]=c->r[30]+0x0000011Cu; // 801B1CF0
  cmpu(c,0,c->r[31],0x00000004u); // 801B1CF4
  if (crb(c,0)) { IRQCHK(c); goto L_801B1CC4; } // 801B1CF8
  c->r[30]=0u+0x00000000u; // 801B1CFC
L_801B1D00:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B1D00
  if (crb(c,2)) { goto L_801B1D10; } // 801B1D04
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B1D08
  goto L_801B1D18; // 801B1D0C
L_801B1D10:;
  c->r[3]=0u+0x00010000u; // 801B1D10
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B1D14
L_801B1D18:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1D18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1D1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1D20
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1D24
  c->lr=c->r[0]; // 801B1D28
  c->r[1]=c->r[1]+0x00000020u; // 801B1D2C
  return; // 801B1D30
}

// btm_process_clk_off_comp_evt
void f_801B1D34(Ctx* __restrict c) {
  trace_call(0x801B1D34u);
  c->r[5]=0u+0x802D0000u; // 801B1D34
  c->r[6]=0u+0x00000000u; // 801B1D38
  c->r[5]=c->r[5]+0x000023D8u; // 801B1D3C
  c->r[0]=R8(c->r[5]+0x0000014Du); // 801B1D40
  cmps(c,0,(int32_t)c->r[0],0); // 801B1D44
  if (crb(c,2)) { goto L_801B1D58; } // 801B1D48
  c->r[0]=R16(c->r[5]+0x00000034u); // 801B1D4C
  cmpu(c,0,c->r[0],c->r[3]); // 801B1D50
  if (crb(c,2)) { goto L_801B1DB0; } // 801B1D54
L_801B1D58:;
  c->r[0]=R8(c->r[5]+0x00000269u); // 801B1D58
  c->r[6]=0u+0x00000001u; // 801B1D5C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1D60
  if (crb(c,2)) { goto L_801B1D74; } // 801B1D64
  c->r[0]=R16(c->r[5]+0x00000150u); // 801B1D68
  cmpu(c,0,c->r[0],c->r[3]); // 801B1D6C
  if (crb(c,2)) { goto L_801B1DB0; } // 801B1D70
L_801B1D74:;
  c->r[0]=R8(c->r[5]+0x00000385u); // 801B1D74
  c->r[6]=0u+0x00000002u; // 801B1D78
  cmps(c,0,(int32_t)c->r[0],0); // 801B1D7C
  if (crb(c,2)) { goto L_801B1D90; } // 801B1D80
  c->r[0]=R16(c->r[5]+0x0000026Cu); // 801B1D84
  cmpu(c,0,c->r[0],c->r[3]); // 801B1D88
  if (crb(c,2)) { goto L_801B1DB0; } // 801B1D8C
L_801B1D90:;
  c->r[0]=R8(c->r[5]+0x000004A1u); // 801B1D90
  c->r[6]=0u+0x00000003u; // 801B1D94
  cmps(c,0,(int32_t)c->r[0],0); // 801B1D98
  if (crb(c,2)) { goto L_801B1DAC; } // 801B1D9C
  c->r[0]=R16(c->r[5]+0x00000388u); // 801B1DA0
  cmpu(c,0,c->r[0],c->r[3]); // 801B1DA4
  if (crb(c,2)) { goto L_801B1DB0; } // 801B1DA8
L_801B1DAC:;
  c->r[6]=0u+0x00000004u; // 801B1DAC
L_801B1DB0:;
  cmpu(c,0,c->r[6],0x00000004u); // 801B1DB0
  if (!crb(c,0)) return; // 801B1DB4
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 801B1DB8
  c->r[3]=0u+0x802D0000u; // 801B1DBC
  c->r[3]=c->r[3]+0x000023D8u; // 801B1DC0
  c->r[3]=c->r[3]+c->r[0]; // 801B1DC4
  W16(c->r[3]+0x0000003Au,c->r[4]); // 801B1DC8
  return; // 801B1DCC
}

// btm_acl_role_changed
void f_801B1DD0(Ctx* __restrict c) {
  trace_call(0x801B1DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1DD0
  c->r[0]=c->lr; // 801B1DD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B1DD8
  c->r[11]=c->r[1]+0x00000030u; // 801B1DDC
  c->lr=0x801B1DE4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B1DE0
  cmps(c,0,(int32_t)c->r[4],0); // 801B1DE4
  c->r[25]=c->r[3]|c->r[3]; // 801B1DE8
  c->r[26]=c->r[4]|c->r[4]; // 801B1DEC
  c->r[28]=c->r[5]|c->r[5]; // 801B1DF0
  if (crb(c,2)) { goto L_801B1E00; } // 801B1DF4
  c->r[27]=c->r[26]|c->r[26]; // 801B1DF8
  goto L_801B1E0C; // 801B1DFC
L_801B1E00:;
  c->r[3]=0u+0x802D0000u; // 801B1E00
  c->r[3]=c->r[3]+0x000023D8u; // 801B1E04
  c->r[27]=c->r[3]+0x000027B4u; // 801B1E08
L_801B1E0C:;
  c->r[3]=0u+0x802D0000u; // 801B1E0C
  c->r[30]=0u+0x00000000u; // 801B1E10
  c->r[3]=c->r[3]+0x000023D8u; // 801B1E14
  c->r[29]=c->r[3]+0x00000034u; // 801B1E18
L_801B1E1C:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B1E1C
  cmps(c,0,(int32_t)c->r[0],0); // 801B1E20
  if (crb(c,2)) { goto L_801B1E44; } // 801B1E24
  c->r[4]=c->r[27]|c->r[27]; // 801B1E28
  c->r[3]=c->r[29]+0x00000008u; // 801B1E2C
  c->r[5]=0u+0x00000006u; // 801B1E30
  c->lr=0x801B1E38u; f_801D8F78(c); // 801B1E34
  cmps(c,0,(int32_t)c->r[3],0); // 801B1E38
  if (!crb(c,2)) { goto L_801B1E44; } // 801B1E3C
  goto L_801B1E58; // 801B1E40
L_801B1E44:;
  c->r[30]=c->r[30]+0x00000001u; // 801B1E44
  c->r[29]=c->r[29]+0x0000011Cu; // 801B1E48
  cmpu(c,0,c->r[30],0x00000004u); // 801B1E4C
  if (crb(c,0)) { IRQCHK(c); goto L_801B1E1C; } // 801B1E50
  c->r[29]=0u+0x00000000u; // 801B1E54
L_801B1E58:;
  c->r[3]=0u+0x802D0000u; // 801B1E58
  cmps(c,0,(int32_t)c->r[29],0); // 801B1E5C
  c->r[3]=c->r[3]+0x000023D8u; // 801B1E60
  c->r[31]=c->r[3]+0x00000624u; // 801B1E64
  if (crb(c,2)) { goto L_801B1FAC; } // 801B1E68
  cmps(c,0,(int32_t)c->r[25],0); // 801B1E6C
  W8(c->r[31]+0x00000000u,c->r[25]); // 801B1E70
  if (!crb(c,2)) { goto L_801B1E90; } // 801B1E74
  W8(c->r[31]+0x00000001u,c->r[28]); // 801B1E78
  c->r[4]=c->r[27]|c->r[27]; // 801B1E7C
  c->r[3]=c->r[31]+0x00000002u; // 801B1E80
  c->r[5]=0u+0x00000006u; // 801B1E84
  c->lr=0x801B1E8Cu; f_80004364(c); // 801B1E88
  W8(c->r[29]+0x0000011Au,c->r[28]); // 801B1E8C
L_801B1E90:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B1E90
  if (crb(c,2)) { goto L_801B1F0C; } // 801B1E94
  c->r[3]=0u+0x802D0000u; // 801B1E98
  c->r[30]=R16(c->r[29]+0x0000010Eu); // 801B1E9C
  c->r[3]=c->r[3]+0x000023D8u; // 801B1EA0
  c->r[28]=0u+0x00000000u; // 801B1EA4
  c->r[27]=c->r[3]+0x00000034u; // 801B1EA8
L_801B1EAC:;
  c->r[0]=R8(c->r[27]+0x00000119u); // 801B1EAC
  cmps(c,0,(int32_t)c->r[0],0); // 801B1EB0
  if (crb(c,2)) { goto L_801B1ED4; } // 801B1EB4
  c->r[3]=c->r[27]+0x00000008u; // 801B1EB8
  c->r[4]=c->r[29]+0x00000008u; // 801B1EBC
  c->r[5]=0u+0x00000006u; // 801B1EC0
  c->lr=0x801B1EC8u; f_801D8F78(c); // 801B1EC4
  cmps(c,0,(int32_t)c->r[3],0); // 801B1EC8
  if (!crb(c,2)) { goto L_801B1ED4; } // 801B1ECC
  goto L_801B1EE8; // 801B1ED0
L_801B1ED4:;
  c->r[28]=c->r[28]+0x00000001u; // 801B1ED4
  c->r[27]=c->r[27]+0x0000011Cu; // 801B1ED8
  cmpu(c,0,c->r[28],0x00000004u); // 801B1EDC
  if (crb(c,0)) { IRQCHK(c); goto L_801B1EAC; } // 801B1EE0
  c->r[27]=0u+0x00000000u; // 801B1EE4
L_801B1EE8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B1EE8
  if (crb(c,2)) { goto L_801B1F0C; } // 801B1EEC
  W16(c->r[27]+0x0000010Eu,c->r[30]); // 801B1EF0
  c->r[0]=R8(c->r[27]+0x0000011Au); // 801B1EF4
  cmps(c,0,(int32_t)c->r[0],0); // 801B1EF8
  if (!crb(c,2)) { goto L_801B1F0C; } // 801B1EFC
  c->r[3]=R16(c->r[27]+0x00000000u); // 801B1F00
  c->r[4]=c->r[30]|c->r[30]; // 801B1F04
  c->lr=0x801B1F0Cu; f_801BF518(c); // 801B1F08
L_801B1F0C:;
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 801B1F0C
  cmpu(c,0,c->r[0],0x00000003u); // 801B1F10
  if (!crb(c,2)) { goto L_801B1F38; } // 801B1F14
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B1F18
  c->r[4]=0u+0x00000001u; // 801B1F1C
  c->lr=0x801B1F24u; f_801BE124(c); // 801B1F20
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B1F24
  if (crb(c,2)) { goto L_801B1F38; } // 801B1F28
  c->r[0]=0u+0x00000004u; // 801B1F2C
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 801B1F30
  goto L_801B1FAC; // 801B1F34
L_801B1F38:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B1F38
  if (crb(c,2)) { goto L_801B1F54; } // 801B1F3C
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 801B1F40
  cmpu(c,0,c->r[0],0x00000005u); // 801B1F44
  if (!crb(c,2)) { goto L_801B1F54; } // 801B1F48
  c->r[0]=0u+0x00000000u; // 801B1F4C
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 801B1F50
L_801B1F54:;
  c->r[30]=0u+0x802D0000u; // 801B1F54
  c->r[30]=c->r[30]+0x000023D8u; // 801B1F58
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 801B1F5C
  cmps(c,0,(int32_t)c->r[12],0); // 801B1F60
  if (crb(c,2)) { goto L_801B1F7C; } // 801B1F64
  c->r[3]=c->r[31]|c->r[31]; // 801B1F68
  c->ctr=c->r[12]; // 801B1F6C
  if (true) { c->lr=0x801B1F74u; dispatch(c,c->ctr); } // 801B1F70
  c->r[0]=0u+0x00000000u; // 801B1F74
  W32(c->r[30]+0x0000062Cu,c->r[0]); // 801B1F78
L_801B1F7C:;
  c->r[3]=0u+0x802D0000u; // 801B1F7C
  c->r[3]=c->r[3]+0x000023D8u; // 801B1F80
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B1F84
  cmpu(c,0,c->r[0],0x00000004u); // 801B1F88
  if (crb(c,0)) { goto L_801B1FAC; } // 801B1F8C
  c->r[3]=0u+0x000D0000u; // 801B1F90
  c->r[4]=0u+0x80240000u; // 801B1F94
  c->r[5]=R8(c->r[31]+0x00000001u); // 801B1F98
  c->r[3]=c->r[3]+0x00000003u; // 801B1F9C
  c->r[6]=R8(c->r[31]+0x00000000u); // 801B1FA0
  c->r[4]=c->r[4]+0x00005074u; // 801B1FA4
  c->lr=0x801B1FACu; f_801AA800(c); // 801B1FA8
L_801B1FAC:;
  c->r[11]=c->r[1]+0x00000030u; // 801B1FAC
  c->lr=0x801B1FB4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1FB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B1FB4
  c->lr=c->r[0]; // 801B1FB8
  c->r[1]=c->r[1]+0x00000030u; // 801B1FBC
  return; // 801B1FC0
}

// btm_acl_timeout
void f_801B1FC4(Ctx* __restrict c) {
  trace_call(0x801B1FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1FC4
  c->r[0]=c->lr; // 801B1FC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1FCC
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B1FD0
  cmpu(c,0,c->r[0],0x00000004u); // 801B1FD4
  if (!crb(c,2)) { goto L_801B2010; } // 801B1FD8
  c->r[4]=0u+0x802D0000u; // 801B1FDC
  c->r[3]=0u+0x0000000Au; // 801B1FE0
  c->r[4]=c->r[4]+0x000023D8u; // 801B1FE4
  c->r[0]=0u+0x00000000u; // 801B1FE8
  c->r[12]=R32(c->r[4]+0x000005C4u); // 801B1FEC
  W8(c->r[1]+0x00000008u,c->r[3]); // 801B1FF0
  cmps(c,0,(int32_t)c->r[12],0); // 801B1FF4
  W16(c->r[1]+0x00000010u,c->r[0]); // 801B1FF8
  W32(c->r[4]+0x000005C4u,c->r[0]); // 801B1FFC
  if (crb(c,2)) { goto L_801B2010; } // 801B2000
  c->r[3]=c->r[1]+0x00000008u; // 801B2004
  c->ctr=c->r[12]; // 801B2008
  if (true) { c->lr=0x801B2010u; dispatch(c,c->ctr); } // 801B200C
L_801B2010:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2010
  c->lr=c->r[0]; // 801B2014
  c->r[1]=c->r[1]+0x00000020u; // 801B2018
  return; // 801B201C
}

// btm_get_max_packet_size
void f_801B2020(Ctx* __restrict c) {
  trace_call(0x801B2020u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2020
  c->r[0]=c->lr; // 801B2024
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2028
  c->r[11]=c->r[1]+0x00000020u; // 801B202C
  c->lr=0x801B2034u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2030
  c->r[4]=0u+0x802D0000u; // 801B2034
  c->r[27]=c->r[3]|c->r[3]; // 801B2038
  c->r[4]=c->r[4]+0x000023D8u; // 801B203C
  c->r[30]=0u+0x00000000u; // 801B2040
  c->r[29]=c->r[4]+0x00000034u; // 801B2044
L_801B2048:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B2048
  cmps(c,0,(int32_t)c->r[0],0); // 801B204C
  if (crb(c,2)) { goto L_801B2070; } // 801B2050
  c->r[4]=c->r[27]|c->r[27]; // 801B2054
  c->r[3]=c->r[29]+0x00000008u; // 801B2058
  c->r[5]=0u+0x00000006u; // 801B205C
  c->lr=0x801B2064u; f_801D8F78(c); // 801B2060
  cmps(c,0,(int32_t)c->r[3],0); // 801B2064
  if (!crb(c,2)) { goto L_801B2070; } // 801B2068
  goto L_801B2084; // 801B206C
L_801B2070:;
  c->r[30]=c->r[30]+0x00000001u; // 801B2070
  c->r[29]=c->r[29]+0x0000011Cu; // 801B2074
  cmpu(c,0,c->r[30],0x00000004u); // 801B2078
  if (crb(c,0)) { IRQCHK(c); goto L_801B2048; } // 801B207C
  c->r[29]=0u+0x00000000u; // 801B2080
L_801B2084:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B2084
  c->r[28]=0u+0x00000000u; // 801B2088
  c->r[31]=0u+0x00000000u; // 801B208C
  if (crb(c,2)) { goto L_801B209C; } // 801B2090
  c->r[28]=R16(c->r[29]+0x00000002u); // 801B2094
  goto L_801B20C0; // 801B2098
L_801B209C:;
  c->r[30]=0u+0x802D0000u; // 801B209C
  c->r[4]=c->r[27]|c->r[27]; // 801B20A0
  c->r[30]=c->r[30]+0x000023D8u; // 801B20A4
  c->r[5]=0u+0x00000006u; // 801B20A8
  c->r[3]=c->r[30]+0x00000630u; // 801B20AC
  c->lr=0x801B20B4u; f_801D8F78(c); // 801B20B0
  cmps(c,0,(int32_t)c->r[3],0); // 801B20B4
  if (!crb(c,2)) { goto L_801B20C0; } // 801B20B8
  c->r[28]=R16(c->r[30]+0x00000654u); // 801B20BC
L_801B20C0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B20C0
  if (crb(c,2)) { goto L_801B2184; } // 801B20C4
  c->r[0]=rotl(c->r[28],0)&0x00002000u; cr0(c,c->r[0]); // 801B20C8
  if (!crb(c,2)) { goto L_801B20D8; } // 801B20CC
  c->r[31]=0u+0x000003FDu; // 801B20D0
  goto L_801B2184; // 801B20D4
L_801B20D8:;
  c->r[0]=rotl(c->r[28],0)&0x00001000u; cr0(c,c->r[0]); // 801B20D8
  if (!crb(c,2)) { goto L_801B20E8; } // 801B20DC
  c->r[31]=0u+0x000002A7u; // 801B20E0
  goto L_801B2184; // 801B20E4
L_801B20E8:;
  c->r[0]=rotl(c->r[28],0)&0x00000200u; cr0(c,c->r[0]); // 801B20E8
  if (!crb(c,2)) { goto L_801B20F8; } // 801B20EC
  c->r[31]=0u+0x00000228u; // 801B20F0
  goto L_801B2184; // 801B20F4
L_801B20F8:;
  c->r[0]=rotl(c->r[28],0)&0x00008000u; cr0(c,c->r[0]); // 801B20F8
  if (crb(c,2)) { goto L_801B2108; } // 801B20FC
  c->r[31]=0u+0x00000153u; // 801B2100
  goto L_801B2184; // 801B2104
L_801B2108:;
  c->r[0]=rotl(c->r[28],0)&0x00000100u; cr0(c,c->r[0]); // 801B2108
  if (!crb(c,2)) { goto L_801B2118; } // 801B210C
  c->r[31]=0u+0x0000016Fu; // 801B2110
  goto L_801B2184; // 801B2114
L_801B2118:;
  c->r[0]=rotl(c->r[28],0)&0x00004000u; cr0(c,c->r[0]); // 801B2118
  if (crb(c,2)) { goto L_801B2128; } // 801B211C
  c->r[31]=0u+0x000000E0u; // 801B2120
  goto L_801B2184; // 801B2124
L_801B2128:;
  c->r[0]=rotl(c->r[28],0)&0x00000800u; cr0(c,c->r[0]); // 801B2128
  if (crb(c,2)) { goto L_801B2138; } // 801B212C
  c->r[31]=0u+0x000000B7u; // 801B2130
  goto L_801B2184; // 801B2134
L_801B2138:;
  c->r[0]=rotl(c->r[28],0)&0x00000400u; cr0(c,c->r[0]); // 801B2138
  if (crb(c,2)) { goto L_801B2148; } // 801B213C
  c->r[31]=0u+0x00000079u; // 801B2140
  goto L_801B2184; // 801B2144
L_801B2148:;
  c->r[0]=rotl(c->r[28],0)&0x00000004u; cr0(c,c->r[0]); // 801B2148
  if (!crb(c,2)) { goto L_801B2158; } // 801B214C
  c->r[31]=0u+0x00000053u; // 801B2150
  goto L_801B2184; // 801B2154
L_801B2158:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 801B2158
  if (!crb(c,2)) { goto L_801B2168; } // 801B215C
  c->r[31]=0u+0x00000036u; // 801B2160
  goto L_801B2184; // 801B2164
L_801B2168:;
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 801B2168
  if (crb(c,2)) { goto L_801B2178; } // 801B216C
  c->r[31]=0u+0x0000001Bu; // 801B2170
  goto L_801B2184; // 801B2174
L_801B2178:;
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 801B2178
  if (crb(c,2)) { goto L_801B2184; } // 801B217C
  c->r[31]=0u+0x00000011u; // 801B2180
L_801B2184:;
  cmpu(c,0,c->r[31],0x000003FDu); // 801B2184
  if (!crb(c,2)) { goto L_801B21A4; } // 801B2188
  c->r[3]=0u+0x802D0000u; // 801B218C
  c->r[3]=c->r[3]+0x00001EB0u; // 801B2190
  c->r[0]=R16(c->r[3]+0x0000007Cu); // 801B2194
  cmpu(c,0,c->r[0],0x000003F9u); // 801B2198
  if (!crb(c,2)) { goto L_801B21A4; } // 801B219C
  c->r[31]=0u+0x000003F9u; // 801B21A0
L_801B21A4:;
  c->r[11]=c->r[1]+0x00000020u; // 801B21A4
  c->r[3]=c->r[31]|c->r[31]; // 801B21A8
  c->lr=0x801B21B0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B21AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B21B0
  c->lr=c->r[0]; // 801B21B4
  c->r[1]=c->r[1]+0x00000020u; // 801B21B8
  return; // 801B21BC
}

// BTM_AclRegisterForChanges
void f_801B21C0(Ctx* __restrict c) {
  trace_call(0x801B21C0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801B21C0
  if (!crb(c,2)) { goto L_801B21DC; } // 801B21C4
  c->r[3]=0u+0x802D0000u; // 801B21C8
  c->r[0]=0u+0x00000000u; // 801B21CC
  c->r[3]=c->r[3]+0x000023D8u; // 801B21D0
  W32(c->r[3]+0x000004C8u,c->r[0]); // 801B21D4
  goto L_801B21FC; // 801B21D8
L_801B21DC:;
  c->r[4]=0u+0x802D0000u; // 801B21DC
  c->r[4]=c->r[4]+0x000023D8u; // 801B21E0
  c->r[0]=R32(c->r[4]+0x000004C8u); // 801B21E4
  cmps(c,0,(int32_t)c->r[0],0); // 801B21E8
  if (crb(c,2)) { goto L_801B21F8; } // 801B21EC
  c->r[3]=0u+0x00000002u; // 801B21F0
  return; // 801B21F4
L_801B21F8:;
  W32(c->r[4]+0x000004C8u,c->r[3]); // 801B21F8
L_801B21FC:;
  c->r[3]=0u+0x00000000u; // 801B21FC
  return; // 801B2200
}

// btm_qos_setup_complete
void f_801B2204(Ctx* __restrict c) {
  trace_call(0x801B2204u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2204
  c->r[0]=c->lr; // 801B2208
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B220C
  c->r[11]=c->r[1]+0x00000040u; // 801B2210
  c->lr=0x801B2218u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2214
  c->r[31]=0u+0x802D0000u; // 801B2218
  c->r[27]=c->r[3]|c->r[3]; // 801B221C
  c->r[31]=c->r[31]+0x000023D8u; // 801B2220
  c->r[28]=c->r[4]|c->r[4]; // 801B2224
  c->r[30]=R32(c->r[31]+0x00000618u); // 801B2228
  c->r[29]=c->r[5]|c->r[5]; // 801B222C
  c->r[3]=c->r[31]+0x00000600u; // 801B2230
  c->lr=0x801B2238u; f_801AAE40(c); // 801B2234
  c->r[0]=0u+0x00000000u; // 801B2238
  cmps(c,0,(int32_t)c->r[30],0); // 801B223C
  W32(c->r[31]+0x00000618u,c->r[0]); // 801B2240
  if (crb(c,2)) { goto L_801B22C4; } // 801B2244
  cmps(c,0,(int32_t)c->r[29],0); // 801B2248
  W8(c->r[1]+0x00000022u,c->r[27]); // 801B224C
  W16(c->r[1]+0x00000020u,c->r[28]); // 801B2250
  if (crb(c,2)) { goto L_801B2288; } // 801B2254
  c->r[0]=R8(c->r[29]+0x00000000u); // 801B2258
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B225C
  c->r[0]=R8(c->r[29]+0x00000001u); // 801B2260
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B2264
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B2268
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B226C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801B2270
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2274
  c->r[0]=R32(c->r[29]+0x00000010u); // 801B2278
  W32(c->r[1]+0x00000018u,c->r[0]); // 801B227C
  c->r[0]=R32(c->r[29]+0x00000014u); // 801B2280
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801B2284
L_801B2288:;
  c->r[3]=0u+0x802D0000u; // 801B2288
  c->r[3]=c->r[3]+0x000023D8u; // 801B228C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B2290
  cmpu(c,0,c->r[0],0x00000005u); // 801B2294
  if (crb(c,0)) { goto L_801B22B4; } // 801B2298
  c->r[3]=0u+0x000D0000u; // 801B229C
  c->r[4]=0u+0x80240000u; // 801B22A0
  c->r[5]=R32(c->r[29]+0x00000014u); // 801B22A4
  c->r[3]=c->r[3]+0x00000004u; // 801B22A8
  c->r[4]=c->r[4]+0x000050DCu; // 801B22AC
  c->lr=0x801B22B4u; f_801AA7E0(c); // 801B22B0
L_801B22B4:;
  c->r[12]=c->r[30]|c->r[30]; // 801B22B4
  c->r[3]=c->r[1]+0x00000008u; // 801B22B8
  c->ctr=c->r[12]; // 801B22BC
  if (true) { c->lr=0x801B22C4u; dispatch(c,c->ctr); } // 801B22C0
L_801B22C4:;
  c->r[11]=c->r[1]+0x00000040u; // 801B22C4
  c->lr=0x801B22CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B22C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B22CC
  c->lr=c->r[0]; // 801B22D0
  c->r[1]=c->r[1]+0x00000040u; // 801B22D4
  return; // 801B22D8
}

// BTM_ReadRSSI
void f_801B22DC(Ctx* __restrict c) {
  trace_call(0x801B22DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B22DC
  c->r[0]=c->lr; // 801B22E0
  c->r[5]=0u+0x802D0000u; // 801B22E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B22E8
  c->r[5]=c->r[5]+0x000023D8u; // 801B22EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B22F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B22F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B22F8
  c->r[29]=c->r[4]|c->r[4]; // 801B22FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B2300
  c->r[28]=c->r[3]|c->r[3]; // 801B2304
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801B2308
  cmpu(c,0,c->r[0],0x00000003u); // 801B230C
  if (crb(c,0)) { goto L_801B2340; } // 801B2310
  c->r[3]=0u+0x000D0000u; // 801B2314
  c->r[4]=0u+0x80240000u; // 801B2318
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B231C
  c->r[3]=c->r[3]+0x00000002u; // 801B2320
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B2324
  c->r[4]=c->r[4]+0x00005104u; // 801B2328
  c->r[7]=R8(c->r[28]+0x00000002u); // 801B232C
  c->r[8]=R8(c->r[28]+0x00000003u); // 801B2330
  c->r[9]=R8(c->r[28]+0x00000004u); // 801B2334
  c->r[10]=R8(c->r[28]+0x00000005u); // 801B2338
  c->lr=0x801B2340u; f_801AA880(c); // 801B233C
L_801B2340:;
  c->r[3]=0u+0x802D0000u; // 801B2340
  c->r[3]=c->r[3]+0x000023D8u; // 801B2344
  c->r[0]=R32(c->r[3]+0x000005E0u); // 801B2348
  cmps(c,0,(int32_t)c->r[0],0); // 801B234C
  if (crb(c,2)) { goto L_801B235C; } // 801B2350
  c->r[3]=0u+0x00000002u; // 801B2354
  goto L_801B23F8; // 801B2358
L_801B235C:;
  c->r[30]=c->r[3]+0x00000034u; // 801B235C
  c->r[31]=0u+0x00000000u; // 801B2360
L_801B2364:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B2364
  cmps(c,0,(int32_t)c->r[0],0); // 801B2368
  if (crb(c,2)) { goto L_801B238C; } // 801B236C
  c->r[4]=c->r[28]|c->r[28]; // 801B2370
  c->r[3]=c->r[30]+0x00000008u; // 801B2374
  c->r[5]=0u+0x00000006u; // 801B2378
  c->lr=0x801B2380u; f_801D8F78(c); // 801B237C
  cmps(c,0,(int32_t)c->r[3],0); // 801B2380
  if (!crb(c,2)) { goto L_801B238C; } // 801B2384
  goto L_801B23A0; // 801B2388
L_801B238C:;
  c->r[31]=c->r[31]+0x00000001u; // 801B238C
  c->r[30]=c->r[30]+0x0000011Cu; // 801B2390
  cmpu(c,0,c->r[31],0x00000004u); // 801B2394
  if (crb(c,0)) { IRQCHK(c); goto L_801B2364; } // 801B2398
  c->r[30]=0u+0x00000000u; // 801B239C
L_801B23A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B23A0
  if (crb(c,2)) { goto L_801B23F4; } // 801B23A4
  c->r[31]=0u+0x802D0000u; // 801B23A8
  c->r[4]=0u+0x00000009u; // 801B23AC
  c->r[31]=c->r[31]+0x000023D8u; // 801B23B0
  c->r[5]=0u+0x00000003u; // 801B23B4
  c->r[3]=c->r[31]+0x000005C8u; // 801B23B8
  c->lr=0x801B23C0u; f_801AADD0(c); // 801B23BC
  W32(c->r[31]+0x000005E0u,c->r[29]); // 801B23C0
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B23C4
  c->lr=0x801B23CCu; f_801BF7DC(c); // 801B23C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B23CC
  if (!crb(c,2)) { goto L_801B23EC; } // 801B23D0
  c->r[0]=0u+0x00000000u; // 801B23D4
  c->r[3]=c->r[31]+0x000005C8u; // 801B23D8
  W32(c->r[31]+0x000005E0u,c->r[0]); // 801B23DC
  c->lr=0x801B23E4u; f_801AAE40(c); // 801B23E0
  c->r[3]=0u+0x00000003u; // 801B23E4
  goto L_801B23F8; // 801B23E8
L_801B23EC:;
  c->r[3]=0u+0x00000001u; // 801B23EC
  goto L_801B23F8; // 801B23F0
L_801B23F4:;
  c->r[3]=0u+0x00000007u; // 801B23F4
L_801B23F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B23F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B23FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2400
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2404
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B2408
  c->lr=c->r[0]; // 801B240C
  c->r[1]=c->r[1]+0x00000020u; // 801B2410
  return; // 801B2414
}

// BTM_ReadLinkQuality
void f_801B2418(Ctx* __restrict c) {
  trace_call(0x801B2418u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2418
  c->r[0]=c->lr; // 801B241C
  c->r[5]=0u+0x802D0000u; // 801B2420
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2424
  c->r[5]=c->r[5]+0x000023D8u; // 801B2428
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B242C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2430
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2434
  c->r[29]=c->r[4]|c->r[4]; // 801B2438
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B243C
  c->r[28]=c->r[3]|c->r[3]; // 801B2440
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801B2444
  cmpu(c,0,c->r[0],0x00000003u); // 801B2448
  if (crb(c,0)) { goto L_801B247C; } // 801B244C
  c->r[3]=0u+0x000D0000u; // 801B2450
  c->r[4]=0u+0x80240000u; // 801B2454
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B2458
  c->r[3]=c->r[3]+0x00000002u; // 801B245C
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B2460
  c->r[4]=c->r[4]+0x00005138u; // 801B2464
  c->r[7]=R8(c->r[28]+0x00000002u); // 801B2468
  c->r[8]=R8(c->r[28]+0x00000003u); // 801B246C
  c->r[9]=R8(c->r[28]+0x00000004u); // 801B2470
  c->r[10]=R8(c->r[28]+0x00000005u); // 801B2474
  c->lr=0x801B247Cu; f_801AA880(c); // 801B2478
L_801B247C:;
  c->r[3]=0u+0x802D0000u; // 801B247C
  c->r[3]=c->r[3]+0x000023D8u; // 801B2480
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801B2484
  cmps(c,0,(int32_t)c->r[0],0); // 801B2488
  if (crb(c,2)) { goto L_801B2498; } // 801B248C
  c->r[3]=0u+0x00000002u; // 801B2490
  goto L_801B2534; // 801B2494
L_801B2498:;
  c->r[30]=c->r[3]+0x00000034u; // 801B2498
  c->r[31]=0u+0x00000000u; // 801B249C
L_801B24A0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B24A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B24A4
  if (crb(c,2)) { goto L_801B24C8; } // 801B24A8
  c->r[4]=c->r[28]|c->r[28]; // 801B24AC
  c->r[3]=c->r[30]+0x00000008u; // 801B24B0
  c->r[5]=0u+0x00000006u; // 801B24B4
  c->lr=0x801B24BCu; f_801D8F78(c); // 801B24B8
  cmps(c,0,(int32_t)c->r[3],0); // 801B24BC
  if (!crb(c,2)) { goto L_801B24C8; } // 801B24C0
  goto L_801B24DC; // 801B24C4
L_801B24C8:;
  c->r[31]=c->r[31]+0x00000001u; // 801B24C8
  c->r[30]=c->r[30]+0x0000011Cu; // 801B24CC
  cmpu(c,0,c->r[31],0x00000004u); // 801B24D0
  if (crb(c,0)) { IRQCHK(c); goto L_801B24A0; } // 801B24D4
  c->r[30]=0u+0x00000000u; // 801B24D8
L_801B24DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B24DC
  if (crb(c,2)) { goto L_801B2530; } // 801B24E0
  c->r[31]=0u+0x802D0000u; // 801B24E4
  c->r[4]=0u+0x00000009u; // 801B24E8
  c->r[31]=c->r[31]+0x000023D8u; // 801B24EC
  c->r[5]=0u+0x00000003u; // 801B24F0
  c->r[3]=c->r[31]+0x000005E4u; // 801B24F4
  c->lr=0x801B24FCu; f_801AADD0(c); // 801B24F8
  W32(c->r[31]+0x000005FCu,c->r[29]); // 801B24FC
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B2500
  c->lr=0x801B2508u; f_801BF760(c); // 801B2504
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B2508
  if (!crb(c,2)) { goto L_801B2528; } // 801B250C
  c->r[3]=c->r[31]+0x000005E4u; // 801B2510
  c->lr=0x801B2518u; f_801AAE40(c); // 801B2514
  c->r[0]=0u+0x00000000u; // 801B2518
  c->r[3]=0u+0x00000003u; // 801B251C
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801B2520
  goto L_801B2534; // 801B2524
L_801B2528:;
  c->r[3]=0u+0x00000001u; // 801B2528
  goto L_801B2534; // 801B252C
L_801B2530:;
  c->r[3]=0u+0x00000007u; // 801B2530
L_801B2534:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2534
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2538
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B253C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2540
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B2544
  c->lr=c->r[0]; // 801B2548
  c->r[1]=c->r[1]+0x00000020u; // 801B254C
  return; // 801B2550
}

// btm_read_rssi_complete
void f_801B2554(Ctx* __restrict c) {
  trace_call(0x801B2554u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2554
  c->r[0]=c->lr; // 801B2558
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B255C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B2560
  c->r[31]=0u+0x802D0000u; // 801B2564
  c->r[31]=c->r[31]+0x000023D8u; // 801B2568
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B256C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B2570
  c->r[29]=c->r[31]+0x00000034u; // 801B2574
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B2578
  c->r[28]=c->r[3]|c->r[3]; // 801B257C
  c->r[3]=c->r[31]+0x000005C8u; // 801B2580
  c->r[30]=R32(c->r[31]+0x000005E0u); // 801B2584
  c->lr=0x801B258Cu; f_801AAE40(c); // 801B2588
  c->r[0]=0u+0x00000000u; // 801B258C
  cmps(c,0,(int32_t)c->r[30],0); // 801B2590
  W32(c->r[31]+0x000005E0u,c->r[0]); // 801B2594
  if (crb(c,2)) { goto L_801B2650; } // 801B2598
  c->r[6]=R8(c->r[28]+0x00000000u); // 801B259C
  cmps(c,0,(int32_t)c->r[6],0); // 801B25A0
  W8(c->r[1]+0x00000009u,c->r[6]); // 801B25A4
  if (!crb(c,2)) { goto L_801B2638; } // 801B25A8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B25AC
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B25B0
  c->r[3]=R8(c->r[28]+0x00000002u); // 801B25B4
  c->r[4]=R8(c->r[28]+0x00000001u); // 801B25B8
  cmpu(c,0,c->r[0],0x00000004u); // 801B25BC
  c->r[5]=R8(c->r[28]+0x00000003u); // 801B25C0
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801B25C4
  c->r[0]=c->r[4]+c->r[0]; // 801B25C8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801B25CC
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801B25D0
  if (crb(c,0)) { goto L_801B25F0; } // 801B25D4
  c->r[3]=0u+0x000D0000u; // 801B25D8
  c->r[4]=0u+0x80240000u; // 801B25DC
  c->r[3]=c->r[3]+0x00000003u; // 801B25E0
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801B25E4
  c->r[4]=c->r[4]+0x00005174u; // 801B25E8
  c->lr=0x801B25F0u; f_801AA800(c); // 801B25EC
L_801B25F0:;
  c->r[0]=0u+0x00000004u; // 801B25F0
  c->r[3]=0u+0x00000000u; // 801B25F4
  c->ctr=c->r[0]; // 801B25F8
L_801B25FC:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B25FC
  cmps(c,0,(int32_t)c->r[0],0); // 801B2600
  if (crb(c,2)) { goto L_801B2628; } // 801B2604
  c->r[0]=R16(c->r[29]+0x00000000u); // 801B2608
  cmpu(c,0,c->r[31],c->r[0]); // 801B260C
  if (!crb(c,2)) { goto L_801B2628; } // 801B2610
  c->r[3]=c->r[1]+0x0000000Bu; // 801B2614
  c->r[4]=c->r[29]+0x00000008u; // 801B2618
  c->r[5]=0u+0x00000006u; // 801B261C
  c->lr=0x801B2624u; f_80004364(c); // 801B2620
  goto L_801B2640; // 801B2624
L_801B2628:;
  c->r[3]=c->r[3]+0x00000001u; // 801B2628
  c->r[29]=c->r[29]+0x0000011Cu; // 801B262C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B25FC; } // 801B2630
  goto L_801B2640; // 801B2634
L_801B2638:;
  c->r[0]=0u+0x0000000Au; // 801B2638
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B263C
L_801B2640:;
  c->r[12]=c->r[30]|c->r[30]; // 801B2640
  c->r[3]=c->r[1]+0x00000008u; // 801B2644
  c->ctr=c->r[12]; // 801B2648
  if (true) { c->lr=0x801B2650u; dispatch(c,c->ctr); } // 801B264C
L_801B2650:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B2650
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B2654
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B2658
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B265C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B2660
  c->lr=c->r[0]; // 801B2664
  c->r[1]=c->r[1]+0x00000030u; // 801B2668
  return; // 801B266C
}

// btm_read_link_quality_complete
void f_801B2670(Ctx* __restrict c) {
  trace_call(0x801B2670u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2670
  c->r[0]=c->lr; // 801B2674
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B2678
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B267C
  c->r[31]=0u+0x802D0000u; // 801B2680
  c->r[31]=c->r[31]+0x000023D8u; // 801B2684
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B2688
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B268C
  c->r[29]=c->r[31]+0x00000034u; // 801B2690
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B2694
  c->r[28]=c->r[3]|c->r[3]; // 801B2698
  c->r[3]=c->r[31]+0x000005C8u; // 801B269C
  c->r[30]=R32(c->r[31]+0x000005FCu); // 801B26A0
  c->lr=0x801B26A8u; f_801AAE40(c); // 801B26A4
  c->r[0]=0u+0x00000000u; // 801B26A8
  cmps(c,0,(int32_t)c->r[30],0); // 801B26AC
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801B26B0
  if (crb(c,2)) { goto L_801B2768; } // 801B26B4
  c->r[6]=R8(c->r[28]+0x00000000u); // 801B26B8
  cmps(c,0,(int32_t)c->r[6],0); // 801B26BC
  W8(c->r[1]+0x00000009u,c->r[6]); // 801B26C0
  if (!crb(c,2)) { goto L_801B2750; } // 801B26C4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B26C8
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B26CC
  c->r[3]=R8(c->r[28]+0x00000002u); // 801B26D0
  c->r[4]=R8(c->r[28]+0x00000001u); // 801B26D4
  cmpu(c,0,c->r[0],0x00000004u); // 801B26D8
  c->r[5]=R8(c->r[28]+0x00000003u); // 801B26DC
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801B26E0
  c->r[0]=c->r[4]+c->r[0]; // 801B26E4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801B26E8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801B26EC
  if (crb(c,0)) { goto L_801B2708; } // 801B26F0
  c->r[3]=0u+0x000D0000u; // 801B26F4
  c->r[4]=0u+0x80240000u; // 801B26F8
  c->r[3]=c->r[3]+0x00000003u; // 801B26FC
  c->r[4]=c->r[4]+0x000051A4u; // 801B2700
  c->lr=0x801B2708u; f_801AA800(c); // 801B2704
L_801B2708:;
  c->r[0]=0u+0x00000004u; // 801B2708
  c->r[3]=0u+0x00000000u; // 801B270C
  c->ctr=c->r[0]; // 801B2710
L_801B2714:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801B2714
  cmps(c,0,(int32_t)c->r[0],0); // 801B2718
  if (crb(c,2)) { goto L_801B2740; } // 801B271C
  c->r[0]=R16(c->r[29]+0x00000000u); // 801B2720
  cmpu(c,0,c->r[31],c->r[0]); // 801B2724
  if (!crb(c,2)) { goto L_801B2740; } // 801B2728
  c->r[3]=c->r[1]+0x0000000Bu; // 801B272C
  c->r[4]=c->r[29]+0x00000008u; // 801B2730
  c->r[5]=0u+0x00000006u; // 801B2734
  c->lr=0x801B273Cu; f_80004364(c); // 801B2738
  goto L_801B2758; // 801B273C
L_801B2740:;
  c->r[3]=c->r[3]+0x00000001u; // 801B2740
  c->r[29]=c->r[29]+0x0000011Cu; // 801B2744
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2714; } // 801B2748
  goto L_801B2758; // 801B274C
L_801B2750:;
  c->r[0]=0u+0x0000000Au; // 801B2750
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B2754
L_801B2758:;
  c->r[12]=c->r[30]|c->r[30]; // 801B2758
  c->r[3]=c->r[1]+0x00000008u; // 801B275C
  c->ctr=c->r[12]; // 801B2760
  if (true) { c->lr=0x801B2768u; dispatch(c,c->ctr); } // 801B2764
L_801B2768:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B2768
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B276C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B2770
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B2774
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B2778
  c->lr=c->r[0]; // 801B277C
  c->r[1]=c->r[1]+0x00000030u; // 801B2780
  return; // 801B2784
}

// btm_remove_acl
void f_801B2788(Ctx* __restrict c) {
  trace_call(0x801B2788u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2788
  c->r[0]=c->lr; // 801B278C
  c->r[4]=0u+0x802D0000u; // 801B2790
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2794
  c->r[4]=c->r[4]+0x000023D8u; // 801B2798
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B279C
  c->r[31]=0u+0x00000000u; // 801B27A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B27A4
  c->r[30]=c->r[4]+0x00000034u; // 801B27A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B27AC
  c->r[29]=c->r[3]|c->r[3]; // 801B27B0
L_801B27B4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B27B4
  cmps(c,0,(int32_t)c->r[0],0); // 801B27B8
  if (crb(c,2)) { goto L_801B27DC; } // 801B27BC
  c->r[4]=c->r[29]|c->r[29]; // 801B27C0
  c->r[3]=c->r[30]+0x00000008u; // 801B27C4
  c->r[5]=0u+0x00000006u; // 801B27C8
  c->lr=0x801B27D0u; f_801D8F78(c); // 801B27CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B27D0
  if (!crb(c,2)) { goto L_801B27DC; } // 801B27D4
  goto L_801B27F0; // 801B27D8
L_801B27DC:;
  c->r[31]=c->r[31]+0x00000001u; // 801B27DC
  c->r[30]=c->r[30]+0x0000011Cu; // 801B27E0
  cmpu(c,0,c->r[31],0x00000004u); // 801B27E4
  if (crb(c,0)) { IRQCHK(c); goto L_801B27B4; } // 801B27E8
  c->r[30]=0u+0x00000000u; // 801B27EC
L_801B27F0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B27F0
  if (crb(c,2)) { goto L_801B2800; } // 801B27F4
  c->r[3]=R16(c->r[30]+0x00000000u); // 801B27F8
  goto L_801B2808; // 801B27FC
L_801B2800:;
  c->r[3]=0u+0x00010000u; // 801B2800
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2804
L_801B2808:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801B2808
  c->r[4]=0u+0x00000013u; // 801B280C
  c->lr=0x801B2814u; f_801BD984(c); // 801B2810
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B2814
  if (!crb(c,2)) { goto L_801B2824; } // 801B2818
  c->r[3]=0u+0x00000003u; // 801B281C
  goto L_801B2828; // 801B2820
L_801B2824:;
  c->r[3]=0u+0x00000000u; // 801B2824
L_801B2828:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2828
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B282C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2830
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2834
  c->lr=c->r[0]; // 801B2838
  c->r[1]=c->r[1]+0x00000020u; // 801B283C
  return; // 801B2840
}

// btm_chg_all_acl_pkt_types
void f_801B2844(Ctx* __restrict c) {
  trace_call(0x801B2844u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2844
  c->r[0]=c->lr; // 801B2848
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B284C
  c->r[11]=c->r[1]+0x00000040u; // 801B2850
  c->lr=0x801B2858u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2854
  c->r[4]=0u+0x802D0000u; // 801B2858
  cmps(c,0,(int32_t)c->r[3],0); // 801B285C
  c->r[31]=c->r[4]+0x000023D8u; // 801B2860
  c->r[30]=0u+0x80240000u; // 801B2864
  c->r[30]=c->r[30]+0x00004E58u; // 801B2868
  c->r[28]=c->r[31]+0x00000034u; // 801B286C
  if (crb(c,2)) { goto L_801B2938; } // 801B2870
  c->r[29]=0u+0x00000000u; // 801B2874
  c->r[26]=0u+0x000D0000u; // 801B2878
  c->r[24]=0u+0xFFFFCCF9u; // 801B287C
L_801B2880:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 801B2880
  cmps(c,0,(int32_t)c->r[0],0); // 801B2884
  if (crb(c,2)) { goto L_801B2924; } // 801B2888
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B288C
  cmpu(c,0,c->r[0],0x00000005u); // 801B2890
  if (crb(c,0)) { goto L_801B28A8; } // 801B2894
  c->r[5]=R16(c->r[28]+0x00000000u); // 801B2898
  c->r[3]=c->r[26]+0x00000004u; // 801B289C
  c->r[4]=c->r[30]+0x0000038Cu; // 801B28A0
  c->lr=0x801B28A8u; f_801AA7E0(c); // 801B28A4
L_801B28A8:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 801B28A8
  c->r[5]=0u+0x00000018u; // 801B28AC
  W16(c->r[28]+0x00000004u,c->r[0]); // 801B28B0
  c->r[3]=R8(c->r[31]+0x00000636u); // 801B28B4
  cmpu(c,0,c->r[3],0x00000003u); // 801B28B8
  if (crb(c,0)) { goto L_801B28C8; } // 801B28BC
  c->r[0]=c->r[5]|0x00003300u; // 801B28C0
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801B28C4
L_801B28C8:;
  c->r[4]=R16(c->r[31]+0x00000654u); // 801B28C8
  cmpu(c,1,c->r[3],0x00000003u); // 801B28CC
  c->r[0]=c->r[5]&c->r[4]; // 801B28D0
  c->r[3]=c->r[0]&0x0000CC18u; cr0(c,c->r[3]); // 801B28D4
  c->r[25]=c->r[3]&c->r[24]; // 801B28D8
  if (crb(c,4)) { goto L_801B28F0; } // 801B28DC
  c->r[0]=c->r[5]|c->r[4]; // 801B28E0
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 801B28E4
  c->r[0]=c->r[3]|c->r[0]; // 801B28E8
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 801B28EC
L_801B28F0:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B28F0
  cmpu(c,0,c->r[0],0x00000004u); // 801B28F4
  if (crb(c,0)) { goto L_801B290C; } // 801B28F8
  c->r[3]=c->r[26]+0x00000003u; // 801B28FC
  c->r[4]=c->r[30]+0x00000040u; // 801B2900
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 801B2904
  c->lr=0x801B290Cu; f_801AA7E0(c); // 801B2908
L_801B290C:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801B290C
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 801B2910
  c->lr=0x801B2918u; f_801BE018(c); // 801B2914
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B2918
  if (crb(c,2)) { goto L_801B2924; } // 801B291C
  W16(c->r[28]+0x00000002u,c->r[25]); // 801B2920
L_801B2924:;
  c->r[29]=c->r[29]+0x00000001u; // 801B2924
  c->r[28]=c->r[28]+0x0000011Cu; // 801B2928
  cmpu(c,0,c->r[29],0x00000004u); // 801B292C
  if (crb(c,0)) { IRQCHK(c); goto L_801B2880; } // 801B2930
  goto L_801B2A4C; // 801B2934
L_801B2938:;
  c->r[29]=0u+0x00000000u; // 801B2938
  c->r[24]=0u+0x000D0000u; // 801B293C
  c->r[25]=0u+0x00000000u; // 801B2940
  c->r[27]=0u+0xFFFFCCF9u; // 801B2944
L_801B2948:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 801B2948
  cmps(c,0,(int32_t)c->r[0],0); // 801B294C
  if (crb(c,2)) { goto L_801B2A3C; } // 801B2950
  c->r[0]=R16(c->r[28]+0x00000004u); // 801B2954
  cmps(c,0,(int32_t)c->r[0],0); // 801B2958
  if (crb(c,2)) { goto L_801B2A3C; } // 801B295C
  c->r[3]=c->r[28]+0x00000008u; // 801B2960
  c->r[4]=c->r[1]+0x00000008u; // 801B2964
  c->lr=0x801B296Cu; f_801B696C(c); // 801B2968
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B296C
  if (!crb(c,2)) { goto L_801B2A3C; } // 801B2970
  c->r[0]=R8(c->r[1]+0x00000008u); // 801B2974
  cmpu(c,0,c->r[0],0x00000002u); // 801B2978
  if (!crb(c,2)) { goto L_801B29B4; } // 801B297C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B2980
  cmpu(c,0,c->r[0],0x00000005u); // 801B2984
  if (crb(c,0)) { goto L_801B299C; } // 801B2988
  c->r[5]=R16(c->r[28]+0x00000000u); // 801B298C
  c->r[3]=c->r[24]+0x00000004u; // 801B2990
  c->r[4]=c->r[30]+0x000003BCu; // 801B2994
  c->lr=0x801B299Cu; f_801AA7E0(c); // 801B2998
L_801B299C:;
  W8(c->r[1]+0x00000014u,c->r[25]); // 801B299C
  c->r[4]=c->r[28]+0x00000008u; // 801B29A0
  c->r[5]=c->r[1]+0x0000000Cu; // 801B29A4
  c->r[3]=0u+0x00000080u; // 801B29A8
  c->lr=0x801B29B0u; f_801B679C(c); // 801B29AC
  goto L_801B2A3C; // 801B29B0
L_801B29B4:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B29B4
  cmpu(c,0,c->r[0],0x00000005u); // 801B29B8
  if (crb(c,0)) { goto L_801B29D4; } // 801B29BC
  c->r[5]=R16(c->r[28]+0x00000000u); // 801B29C0
  c->r[3]=c->r[24]+0x00000004u; // 801B29C4
  c->r[6]=R16(c->r[28]+0x00000002u); // 801B29C8
  c->r[4]=c->r[30]+0x000003ECu; // 801B29CC
  c->lr=0x801B29D4u; f_801AA800(c); // 801B29D0
L_801B29D4:;
  c->r[4]=R16(c->r[28]+0x00000004u); // 801B29D4
  c->r[5]=R16(c->r[31]+0x00000654u); // 801B29D8
  c->r[0]=R8(c->r[31]+0x00000636u); // 801B29DC
  c->r[3]=c->r[4]&c->r[5]; // 801B29E0
  c->r[3]=c->r[3]&0x0000CC18u; cr0(c,c->r[3]); // 801B29E4
  cmpu(c,0,c->r[0],0x00000003u); // 801B29E8
  c->r[26]=c->r[3]&c->r[27]; // 801B29EC
  if (crb(c,0)) { goto L_801B2A04; } // 801B29F0
  c->r[0]=c->r[4]|c->r[5]; // 801B29F4
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 801B29F8
  c->r[0]=c->r[3]|c->r[0]; // 801B29FC
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801B2A00
L_801B2A04:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B2A04
  cmpu(c,0,c->r[0],0x00000004u); // 801B2A08
  if (crb(c,0)) { goto L_801B2A20; } // 801B2A0C
  c->r[3]=c->r[24]+0x00000003u; // 801B2A10
  c->r[4]=c->r[30]+0x00000040u; // 801B2A14
  c->r[5]=rotl(c->r[26],0)&0x0000FFFFu; // 801B2A18
  c->lr=0x801B2A20u; f_801AA7E0(c); // 801B2A1C
L_801B2A20:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801B2A20
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 801B2A24
  c->lr=0x801B2A2Cu; f_801BE018(c); // 801B2A28
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B2A2C
  if (crb(c,2)) { goto L_801B2A38; } // 801B2A30
  W16(c->r[28]+0x00000002u,c->r[26]); // 801B2A34
L_801B2A38:;
  W16(c->r[28]+0x00000004u,c->r[25]); // 801B2A38
L_801B2A3C:;
  c->r[29]=c->r[29]+0x00000001u; // 801B2A3C
  c->r[28]=c->r[28]+0x0000011Cu; // 801B2A40
  cmpu(c,0,c->r[29],0x00000004u); // 801B2A44
  if (crb(c,0)) { IRQCHK(c); goto L_801B2948; } // 801B2A48
L_801B2A4C:;
  c->r[11]=c->r[1]+0x00000040u; // 801B2A4C
  c->lr=0x801B2A54u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2A50
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B2A54
  c->lr=c->r[0]; // 801B2A58
  c->r[1]=c->r[1]+0x00000040u; // 801B2A5C
  return; // 801B2A60
}

// BTM_SecAddDevice
void f_801B2A64(Ctx* __restrict c) {
  trace_call(0x801B2A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2A64
  c->r[0]=c->lr; // 801B2A68
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B2A6C
  c->r[11]=c->r[1]+0x00000030u; // 801B2A70
  c->lr=0x801B2A78u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B2A74
  c->r[9]=0u+0x802D0000u; // 801B2A78
  c->r[24]=c->r[3]|c->r[3]; // 801B2A7C
  c->r[9]=c->r[9]+0x000023D8u; // 801B2A80
  c->r[25]=c->r[4]|c->r[4]; // 801B2A84
  c->r[26]=c->r[5]|c->r[5]; // 801B2A88
  c->r[27]=c->r[6]|c->r[6]; // 801B2A8C
  c->r[28]=c->r[7]|c->r[7]; // 801B2A90
  c->r[29]=c->r[8]|c->r[8]; // 801B2A94
  c->r[30]=c->r[9]+0x00001F30u; // 801B2A98
  c->r[31]=0u+0x00000000u; // 801B2A9C
L_801B2AA0:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B2AA0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2AA4
  if (crb(c,2)) { goto L_801B2AC8; } // 801B2AA8
  c->r[4]=c->r[24]|c->r[24]; // 801B2AAC
  c->r[3]=c->r[30]+0x0000001Cu; // 801B2AB0
  c->r[5]=0u+0x00000006u; // 801B2AB4
  c->lr=0x801B2ABCu; f_801D8F78(c); // 801B2AB8
  cmps(c,0,(int32_t)c->r[3],0); // 801B2ABC
  if (!crb(c,2)) { goto L_801B2AC8; } // 801B2AC0
  goto L_801B2ADC; // 801B2AC4
L_801B2AC8:;
  c->r[31]=c->r[31]+0x00000001u; // 801B2AC8
  c->r[30]=c->r[30]+0x00000088u; // 801B2ACC
  cmps(c,0,(int32_t)c->r[31],16); // 801B2AD0
  if (crb(c,0)) { IRQCHK(c); goto L_801B2AA0; } // 801B2AD4
  c->r[30]=0u+0x00000000u; // 801B2AD8
L_801B2ADC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2ADC
  if (!crb(c,2)) { goto L_801B2B00; } // 801B2AE0
  c->r[3]=c->r[24]|c->r[24]; // 801B2AE4
  c->lr=0x801B2AECu; f_801B2D38(c); // 801B2AE8
  cmps(c,0,(int32_t)c->r[3],0); // 801B2AEC
  c->r[30]=c->r[3]|c->r[3]; // 801B2AF0
  if (!crb(c,2)) { goto L_801B2B18; } // 801B2AF4
  c->r[3]=0u+0x00000000u; // 801B2AF8
  goto L_801B2BD4; // 801B2AFC
L_801B2B00:;
  c->r[4]=0u+0x802D0000u; // 801B2B00
  c->r[4]=c->r[4]+0x000023D8u; // 801B2B04
  c->r[3]=R32(c->r[4]+0x00001974u); // 801B2B08
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 801B2B0C
  c->r[0]=c->r[3]+0x00000001u; // 801B2B10
  W32(c->r[4]+0x00001974u,c->r[0]); // 801B2B14
L_801B2B18:;
  cmps(c,0,(int32_t)c->r[25],0); // 801B2B18
  if (crb(c,2)) { goto L_801B2B30; } // 801B2B1C
  c->r[4]=c->r[25]|c->r[25]; // 801B2B20
  c->r[3]=c->r[30]+0x00000022u; // 801B2B24
  c->r[5]=0u+0x00000003u; // 801B2B28
  c->lr=0x801B2B30u; f_80004364(c); // 801B2B2C
L_801B2B30:;
  c->r[3]=c->r[30]+0x00000035u; // 801B2B30
  c->r[4]=0u+0x00000000u; // 801B2B34
  c->r[5]=0u+0x00000041u; // 801B2B38
  c->lr=0x801B2B40u; f_800046B4(c); // 801B2B3C
  cmps(c,0,(int32_t)c->r[26],0); // 801B2B40
  if (crb(c,2)) { goto L_801B2B70; } // 801B2B44
  c->r[0]=R8(c->r[26]+0x00000000u); // 801B2B48
  cmps(c,0,(int32_t)c->r[0],0); // 801B2B4C
  if (crb(c,2)) { goto L_801B2B70; } // 801B2B50
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B2B54
  c->r[4]=c->r[26]|c->r[26]; // 801B2B58
  c->r[3]=c->r[30]+0x00000035u; // 801B2B5C
  c->r[5]=0u+0x00000040u; // 801B2B60
  c->r[0]=c->r[0]|0x00000008u; // 801B2B64
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B2B68
  c->lr=0x801B2B70u; f_801DBA48(c); // 801B2B6C
L_801B2B70:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B2B70
  if (crb(c,2)) { goto L_801B2B8C; } // 801B2B74
  c->r[4]=c->r[27]|c->r[27]; // 801B2B78
  c->r[3]=c->r[30]+0x00000077u; // 801B2B7C
  c->r[5]=0u+0x00000008u; // 801B2B80
  c->lr=0x801B2B88u; f_80004364(c); // 801B2B84
  goto L_801B2B9C; // 801B2B88
L_801B2B8C:;
  c->r[3]=c->r[30]+0x00000077u; // 801B2B8C
  c->r[4]=0u+0x00000000u; // 801B2B90
  c->r[5]=0u+0x00000008u; // 801B2B94
  c->lr=0x801B2B9Cu; f_800046B4(c); // 801B2B98
L_801B2B9C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801B2B9C
  cmps(c,0,(int32_t)c->r[29],0); // 801B2BA0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801B2BA4
  c->r[0]=R32(c->r[28]+0x00000004u); // 801B2BA8
  W32(c->r[30]+0x00000014u,c->r[0]); // 801B2BAC
  if (crb(c,2)) { goto L_801B2BD0; } // 801B2BB0
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B2BB4
  c->r[4]=c->r[29]|c->r[29]; // 801B2BB8
  c->r[3]=c->r[30]+0x00000025u; // 801B2BBC
  c->r[5]=0u+0x00000010u; // 801B2BC0
  c->r[0]=c->r[0]|0x00000010u; // 801B2BC4
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B2BC8
  c->lr=0x801B2BD0u; f_80004364(c); // 801B2BCC
L_801B2BD0:;
  c->r[3]=0u+0x00000001u; // 801B2BD0
L_801B2BD4:;
  c->r[11]=c->r[1]+0x00000030u; // 801B2BD4
  c->lr=0x801B2BDCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B2BD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B2BDC
  c->lr=c->r[0]; // 801B2BE0
  c->r[1]=c->r[1]+0x00000030u; // 801B2BE4
  return; // 801B2BE8
}

// BTM_SecDeleteDevice
void f_801B2BEC(Ctx* __restrict c) {
  trace_call(0x801B2BECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2BEC
  c->r[0]=c->lr; // 801B2BF0
  c->r[4]=0u+0x802D0000u; // 801B2BF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2BF8
  c->r[4]=c->r[4]+0x000023D8u; // 801B2BFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2C00
  c->r[31]=0u+0x00000000u; // 801B2C04
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2C08
  c->r[30]=c->r[4]+0x00001F30u; // 801B2C0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2C10
  c->r[29]=c->r[3]|c->r[3]; // 801B2C14
L_801B2C18:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B2C18
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2C1C
  if (crb(c,2)) { goto L_801B2C40; } // 801B2C20
  c->r[4]=c->r[29]|c->r[29]; // 801B2C24
  c->r[3]=c->r[30]+0x0000001Cu; // 801B2C28
  c->r[5]=0u+0x00000006u; // 801B2C2C
  c->lr=0x801B2C34u; f_801D8F78(c); // 801B2C30
  cmps(c,0,(int32_t)c->r[3],0); // 801B2C34
  if (!crb(c,2)) { goto L_801B2C40; } // 801B2C38
  goto L_801B2C54; // 801B2C3C
L_801B2C40:;
  c->r[31]=c->r[31]+0x00000001u; // 801B2C40
  c->r[30]=c->r[30]+0x00000088u; // 801B2C44
  cmps(c,0,(int32_t)c->r[31],16); // 801B2C48
  if (crb(c,0)) { IRQCHK(c); goto L_801B2C18; } // 801B2C4C
  c->r[30]=0u+0x00000000u; // 801B2C50
L_801B2C54:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2C54
  if (!crb(c,2)) { goto L_801B2C64; } // 801B2C58
  c->r[3]=0u+0x00000000u; // 801B2C5C
  goto L_801B2C7C; // 801B2C60
L_801B2C64:;
  c->r[0]=0u+0x00000000u; // 801B2C64
  c->r[3]=c->r[29]|c->r[29]; // 801B2C68
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B2C6C
  c->r[4]=0u+0x00000000u; // 801B2C70
  c->lr=0x801B2C78u; f_801B46FC(c); // 801B2C74
  c->r[3]=0u+0x00000001u; // 801B2C78
L_801B2C7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2C7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2C80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2C84
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2C88
  c->lr=c->r[0]; // 801B2C8C
  c->r[1]=c->r[1]+0x00000020u; // 801B2C90
  return; // 801B2C94
}

// BTM_SecReadDevName
void f_801B2C98(Ctx* __restrict c) {
  trace_call(0x801B2C98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2C98
  c->r[0]=c->lr; // 801B2C9C
  c->r[4]=0u+0x802D0000u; // 801B2CA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2CA4
  c->r[4]=c->r[4]+0x000023D8u; // 801B2CA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2CAC
  c->r[31]=0u+0x00000000u; // 801B2CB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2CB4
  c->r[30]=c->r[4]+0x00001F30u; // 801B2CB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2CBC
  c->r[29]=0u+0x00000000u; // 801B2CC0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B2CC4
  c->r[28]=c->r[3]|c->r[3]; // 801B2CC8
L_801B2CCC:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B2CCC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2CD0
  if (crb(c,2)) { goto L_801B2CF4; } // 801B2CD4
  c->r[4]=c->r[28]|c->r[28]; // 801B2CD8
  c->r[3]=c->r[30]+0x0000001Cu; // 801B2CDC
  c->r[5]=0u+0x00000006u; // 801B2CE0
  c->lr=0x801B2CE8u; f_801D8F78(c); // 801B2CE4
  cmps(c,0,(int32_t)c->r[3],0); // 801B2CE8
  if (!crb(c,2)) { goto L_801B2CF4; } // 801B2CEC
  goto L_801B2D08; // 801B2CF0
L_801B2CF4:;
  c->r[31]=c->r[31]+0x00000001u; // 801B2CF4
  c->r[30]=c->r[30]+0x00000088u; // 801B2CF8
  cmps(c,0,(int32_t)c->r[31],16); // 801B2CFC
  if (crb(c,0)) { IRQCHK(c); goto L_801B2CCC; } // 801B2D00
  c->r[30]=0u+0x00000000u; // 801B2D04
L_801B2D08:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B2D08
  if (crb(c,2)) { goto L_801B2D14; } // 801B2D0C
  c->r[29]=c->r[30]+0x00000035u; // 801B2D10
L_801B2D14:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2D14
  c->r[3]=c->r[29]|c->r[29]; // 801B2D18
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2D1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2D20
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B2D24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2D28
  c->lr=c->r[0]; // 801B2D2C
  c->r[1]=c->r[1]+0x00000020u; // 801B2D30
  return; // 801B2D34
}

// btm_sec_alloc_dev
void f_801B2D38(Ctx* __restrict c) {
  trace_call(0x801B2D38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2D38
  c->r[0]=c->lr; // 801B2D3C
  c->r[4]=0u+0x802D0000u; // 801B2D40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2D44
  c->r[0]=0u+0x00000010u; // 801B2D48
  c->r[4]=c->r[4]+0x000023D8u; // 801B2D4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2D50
  c->r[31]=0u+0x00000000u; // 801B2D54
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2D58
  c->r[30]=c->r[3]|c->r[3]; // 801B2D5C
  c->r[3]=0u+0x00000000u; // 801B2D60
  c->ctr=c->r[0]; // 801B2D64
L_801B2D68:;
  c->r[0]=R8(c->r[4]+0x00001FA6u); // 801B2D68
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2D6C
  if (!crb(c,2)) { goto L_801B2D8C; } // 801B2D70
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 801B2D74
  c->r[3]=0u+0x802D0000u; // 801B2D78
  c->r[3]=c->r[3]+0x000023D8u; // 801B2D7C
  c->r[3]=c->r[3]+c->r[0]; // 801B2D80
  c->r[31]=c->r[3]+0x00001F30u; // 801B2D84
  goto L_801B2D98; // 801B2D88
L_801B2D8C:;
  c->r[4]=c->r[4]+0x00000088u; // 801B2D8C
  c->r[3]=c->r[3]+0x00000001u; // 801B2D90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2D68; } // 801B2D94
L_801B2D98:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B2D98
  if (!crb(c,2)) { goto L_801B2DA8; } // 801B2D9C
  c->lr=0x801B2DA4u; f_801B2F98(c); // 801B2DA0
  c->r[31]=c->r[3]|c->r[3]; // 801B2DA4
L_801B2DA8:;
  c->r[3]=c->r[31]|c->r[31]; // 801B2DA8
  c->r[4]=0u+0x00000000u; // 801B2DAC
  c->r[5]=0u+0x00000088u; // 801B2DB0
  c->lr=0x801B2DB8u; f_800046B4(c); // 801B2DB4
  c->r[3]=0u+0x00000080u; // 801B2DB8
  c->r[0]=0u+0x00000000u; // 801B2DBC
  W8(c->r[31]+0x00000076u,c->r[3]); // 801B2DC0
  c->r[3]=c->r[30]|c->r[30]; // 801B2DC4
  W8(c->r[31]+0x00000085u,c->r[0]); // 801B2DC8
  c->lr=0x801B2DD0u; f_801B561C(c); // 801B2DCC
  cmps(c,0,(int32_t)c->r[3],0); // 801B2DD0
  c->r[4]=c->r[3]|c->r[3]; // 801B2DD4
  if (crb(c,2)) { goto L_801B2DF0; } // 801B2DD8
  c->r[3]=c->r[31]+0x00000022u; // 801B2DDC
  c->r[4]=c->r[4]+0x00000008u; // 801B2DE0
  c->r[5]=0u+0x00000003u; // 801B2DE4
  c->lr=0x801B2DECu; f_80004364(c); // 801B2DE8
  goto L_801B2E08; // 801B2DEC
L_801B2DF0:;
  c->r[4]=0u+0x802D0000u; // 801B2DF0
  c->r[3]=c->r[31]+0x00000022u; // 801B2DF4
  c->r[4]=c->r[4]+0x000023D8u; // 801B2DF8
  c->r[5]=0u+0x00000003u; // 801B2DFC
  c->r[4]=c->r[4]+0x000027BAu; // 801B2E00
  c->lr=0x801B2E08u; f_80004364(c); // 801B2E04
L_801B2E08:;
  c->r[4]=c->r[30]|c->r[30]; // 801B2E08
  c->r[3]=c->r[31]+0x0000001Cu; // 801B2E0C
  c->r[5]=0u+0x00000006u; // 801B2E10
  c->lr=0x801B2E18u; f_80004364(c); // 801B2E14
  c->r[3]=c->r[30]|c->r[30]; // 801B2E18
  c->lr=0x801B2E20u; f_801B1C98(c); // 801B2E1C
  W16(c->r[31]+0x00000018u,c->r[3]); // 801B2E20
  c->r[5]=0u+0x802D0000u; // 801B2E24
  c->r[5]=c->r[5]+0x000023D8u; // 801B2E28
  c->r[3]=c->r[31]|c->r[31]; // 801B2E2C
  c->r[4]=R32(c->r[5]+0x00001974u); // 801B2E30
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801B2E34
  c->r[0]=c->r[4]+0x00000001u; // 801B2E38
  W32(c->r[5]+0x00001974u,c->r[0]); // 801B2E3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2E40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2E44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2E48
  c->lr=c->r[0]; // 801B2E4C
  c->r[1]=c->r[1]+0x00000010u; // 801B2E50
  return; // 801B2E54
}

// btm_find_dev_by_handle
void f_801B2E58(Ctx* __restrict c) {
  trace_call(0x801B2E58u);
  c->r[4]=0u+0x802D0000u; // 801B2E58
  c->r[0]=0u+0x00000004u; // 801B2E5C
  c->r[4]=c->r[4]+0x000023D8u; // 801B2E60
  c->r[5]=0u+0x00000000u; // 801B2E64
  c->r[4]=c->r[4]+0x00001F30u; // 801B2E68
  c->ctr=c->r[0]; // 801B2E6C
L_801B2E70:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 801B2E70
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2E74
  if (crb(c,2)) { goto L_801B2E90; } // 801B2E78
  c->r[0]=R16(c->r[4]+0x00000018u); // 801B2E7C
  cmpu(c,0,c->r[0],c->r[3]); // 801B2E80
  if (!crb(c,2)) { goto L_801B2E90; } // 801B2E84
  c->r[3]=c->r[4]|c->r[4]; // 801B2E88
  return; // 801B2E8C
L_801B2E90:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B2E90
  c->r[4]=c->r[4]+0x00000088u; // 801B2E94
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2E98
  if (crb(c,2)) { goto L_801B2EB4; } // 801B2E9C
  c->r[0]=R16(c->r[4]+0x00000018u); // 801B2EA0
  cmpu(c,0,c->r[0],c->r[3]); // 801B2EA4
  if (!crb(c,2)) { goto L_801B2EB4; } // 801B2EA8
  c->r[3]=c->r[4]|c->r[4]; // 801B2EAC
  return; // 801B2EB0
L_801B2EB4:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B2EB4
  c->r[4]=c->r[4]+0x00000088u; // 801B2EB8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2EBC
  if (crb(c,2)) { goto L_801B2ED8; } // 801B2EC0
  c->r[0]=R16(c->r[4]+0x00000018u); // 801B2EC4
  cmpu(c,0,c->r[0],c->r[3]); // 801B2EC8
  if (!crb(c,2)) { goto L_801B2ED8; } // 801B2ECC
  c->r[3]=c->r[4]|c->r[4]; // 801B2ED0
  return; // 801B2ED4
L_801B2ED8:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B2ED8
  c->r[4]=c->r[4]+0x00000088u; // 801B2EDC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2EE0
  if (crb(c,2)) { goto L_801B2EFC; } // 801B2EE4
  c->r[0]=R16(c->r[4]+0x00000018u); // 801B2EE8
  cmpu(c,0,c->r[0],c->r[3]); // 801B2EEC
  if (!crb(c,2)) { goto L_801B2EFC; } // 801B2EF0
  c->r[3]=c->r[4]|c->r[4]; // 801B2EF4
  return; // 801B2EF8
L_801B2EFC:;
  c->r[5]=c->r[5]+0x00000003u; // 801B2EFC
  c->r[4]=c->r[4]+0x00000088u; // 801B2F00
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2E70; } // 801B2F04
  c->r[3]=0u+0x00000000u; // 801B2F08
  return; // 801B2F0C
}

// btm_find_dev
void f_801B2F10(Ctx* __restrict c) {
  trace_call(0x801B2F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2F10
  c->r[0]=c->lr; // 801B2F14
  c->r[4]=0u+0x802D0000u; // 801B2F18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B2F1C
  c->r[4]=c->r[4]+0x000023D8u; // 801B2F20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B2F24
  c->r[31]=c->r[4]+0x00001F30u; // 801B2F28
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B2F2C
  c->r[30]=0u+0x00000000u; // 801B2F30
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B2F34
  c->r[29]=c->r[3]|c->r[3]; // 801B2F38
L_801B2F3C:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B2F3C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B2F40
  if (crb(c,2)) { goto L_801B2F68; } // 801B2F44
  c->r[4]=c->r[29]|c->r[29]; // 801B2F48
  c->r[3]=c->r[31]+0x0000001Cu; // 801B2F4C
  c->r[5]=0u+0x00000006u; // 801B2F50
  c->lr=0x801B2F58u; f_801D8F78(c); // 801B2F54
  cmps(c,0,(int32_t)c->r[3],0); // 801B2F58
  if (!crb(c,2)) { goto L_801B2F68; } // 801B2F5C
  c->r[3]=c->r[31]|c->r[31]; // 801B2F60
  goto L_801B2F7C; // 801B2F64
L_801B2F68:;
  c->r[30]=c->r[30]+0x00000001u; // 801B2F68
  c->r[31]=c->r[31]+0x00000088u; // 801B2F6C
  cmps(c,0,(int32_t)c->r[30],16); // 801B2F70
  if (crb(c,0)) { IRQCHK(c); goto L_801B2F3C; } // 801B2F74
  c->r[3]=0u+0x00000000u; // 801B2F78
L_801B2F7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B2F7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B2F80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B2F84
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B2F88
  c->lr=c->r[0]; // 801B2F8C
  c->r[1]=c->r[1]+0x00000020u; // 801B2F90
  return; // 801B2F94
}

// btm_find_oldest_dev
void f_801B2F98(Ctx* __restrict c) {
  trace_call(0x801B2F98u);
  c->r[3]=0u+0x802D0000u; // 801B2F98
  c->r[0]=0u+0x00000004u; // 801B2F9C
  c->r[3]=c->r[3]+0x000023D8u; // 801B2FA0
  c->r[6]=0u+0xFFFFFFFFu; // 801B2FA4
  c->r[5]=c->r[3]+0x00001F30u; // 801B2FA8
  c->r[7]=0u+0x00000000u; // 801B2FAC
  c->r[3]=c->r[5]|c->r[5]; // 801B2FB0
  c->ctr=c->r[0]; // 801B2FB4
L_801B2FB8:;
  c->r[4]=R8(c->r[5]+0x00000076u); // 801B2FB8
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801B2FBC
  if (crb(c,2)) { goto L_801B2FE0; } // 801B2FC0
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B2FC4
  if (!crb(c,2)) { goto L_801B2FE0; } // 801B2FC8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B2FCC
  cmpu(c,0,c->r[0],c->r[6]); // 801B2FD0
  if (!crb(c,0)) { goto L_801B2FE0; } // 801B2FD4
  c->r[3]=c->r[5]|c->r[5]; // 801B2FD8
  c->r[6]=c->r[0]|c->r[0]; // 801B2FDC
L_801B2FE0:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801B2FE0
  c->r[5]=c->r[5]+0x00000088u; // 801B2FE4
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801B2FE8
  if (crb(c,2)) { goto L_801B300C; } // 801B2FEC
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B2FF0
  if (!crb(c,2)) { goto L_801B300C; } // 801B2FF4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B2FF8
  cmpu(c,0,c->r[0],c->r[6]); // 801B2FFC
  if (!crb(c,0)) { goto L_801B300C; } // 801B3000
  c->r[3]=c->r[5]|c->r[5]; // 801B3004
  c->r[6]=c->r[0]|c->r[0]; // 801B3008
L_801B300C:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801B300C
  c->r[5]=c->r[5]+0x00000088u; // 801B3010
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801B3014
  if (crb(c,2)) { goto L_801B3038; } // 801B3018
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B301C
  if (!crb(c,2)) { goto L_801B3038; } // 801B3020
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B3024
  cmpu(c,0,c->r[0],c->r[6]); // 801B3028
  if (!crb(c,0)) { goto L_801B3038; } // 801B302C
  c->r[3]=c->r[5]|c->r[5]; // 801B3030
  c->r[6]=c->r[0]|c->r[0]; // 801B3034
L_801B3038:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801B3038
  c->r[5]=c->r[5]+0x00000088u; // 801B303C
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801B3040
  if (crb(c,2)) { goto L_801B3064; } // 801B3044
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B3048
  if (!crb(c,2)) { goto L_801B3064; } // 801B304C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801B3050
  cmpu(c,0,c->r[0],c->r[6]); // 801B3054
  if (!crb(c,0)) { goto L_801B3064; } // 801B3058
  c->r[3]=c->r[5]|c->r[5]; // 801B305C
  c->r[6]=c->r[0]|c->r[0]; // 801B3060
L_801B3064:;
  c->r[7]=c->r[7]+0x00000003u; // 801B3064
  c->r[5]=c->r[5]+0x00000088u; // 801B3068
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B2FB8; } // 801B306C
  c->r[0]=c->r[6]+0x00010000u; // 801B3070
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B3074
  if (!crb(c,2)) return; // 801B3078
  c->r[4]=0u+0x802D0000u; // 801B307C
  c->r[0]=0u+0x00000004u; // 801B3080
  c->r[4]=c->r[4]+0x000023D8u; // 801B3084
  c->r[5]=0u+0x00000000u; // 801B3088
  c->r[4]=c->r[4]+0x00001F30u; // 801B308C
  c->ctr=c->r[0]; // 801B3090
L_801B3094:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 801B3094
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B3098
  if (crb(c,2)) { goto L_801B30B4; } // 801B309C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B30A0
  cmpu(c,0,c->r[0],c->r[6]); // 801B30A4
  if (!crb(c,0)) { goto L_801B30B4; } // 801B30A8
  c->r[3]=c->r[4]|c->r[4]; // 801B30AC
  c->r[6]=c->r[0]|c->r[0]; // 801B30B0
L_801B30B4:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B30B4
  c->r[4]=c->r[4]+0x00000088u; // 801B30B8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B30BC
  if (crb(c,2)) { goto L_801B30D8; } // 801B30C0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B30C4
  cmpu(c,0,c->r[0],c->r[6]); // 801B30C8
  if (!crb(c,0)) { goto L_801B30D8; } // 801B30CC
  c->r[3]=c->r[4]|c->r[4]; // 801B30D0
  c->r[6]=c->r[0]|c->r[0]; // 801B30D4
L_801B30D8:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B30D8
  c->r[4]=c->r[4]+0x00000088u; // 801B30DC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B30E0
  if (crb(c,2)) { goto L_801B30FC; } // 801B30E4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B30E8
  cmpu(c,0,c->r[0],c->r[6]); // 801B30EC
  if (!crb(c,0)) { goto L_801B30FC; } // 801B30F0
  c->r[3]=c->r[4]|c->r[4]; // 801B30F4
  c->r[6]=c->r[0]|c->r[0]; // 801B30F8
L_801B30FC:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801B30FC
  c->r[4]=c->r[4]+0x00000088u; // 801B3100
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B3104
  if (crb(c,2)) { goto L_801B3120; } // 801B3108
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801B310C
  cmpu(c,0,c->r[0],c->r[6]); // 801B3110
  if (!crb(c,0)) { goto L_801B3120; } // 801B3114
  c->r[3]=c->r[4]|c->r[4]; // 801B3118
  c->r[6]=c->r[0]|c->r[0]; // 801B311C
L_801B3120:;
  c->r[5]=c->r[5]+0x00000003u; // 801B3120
  c->r[4]=c->r[4]+0x00000088u; // 801B3124
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B3094; } // 801B3128
  return; // 801B312C
}

// btm_dev_init
void f_801B3130(Ctx* __restrict c) {
  trace_call(0x801B3130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3130
  c->r[0]=c->lr; // 801B3134
  c->r[4]=c->r[13]+0xFFFFACB8u; // 801B3138
  c->r[5]=0u+0x00000003u; // 801B313C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3140
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3144
  c->r[31]=0u+0x802D0000u; // 801B3148
  c->r[31]=c->r[31]+0x000023D8u; // 801B314C
  c->r[3]=c->r[31]+0x00000648u; // 801B3150
  c->lr=0x801B3158u; f_80004364(c); // 801B3154
  c->r[3]=0u+0x00010000u; // 801B3158
  c->r[7]=0u+0x000000FFu; // 801B315C
  c->r[9]=c->r[3]+0xFFFFCC18u; // 801B3160
  c->r[12]=0u+0x00000001u; // 801B3164
  c->r[3]=0u+0x00001400u; // 801B3168
  c->r[11]=0u+0x00000002u; // 801B316C
  c->r[10]=0u+0x00000004u; // 801B3170
  c->r[8]=0u+0x0000003Fu; // 801B3174
  c->r[6]=0u+0x00000000u; // 801B3178
  c->r[0]=0u+0x00000005u; // 801B317C
  W16(c->r[31]+0x0000064Cu,c->r[3]); // 801B3180
  c->r[3]=c->r[31]+0x00000574u; // 801B3184
  c->r[4]=0u+0x00000001u; // 801B3188
  c->r[5]=0u+0x00000004u; // 801B318C
  W32(c->r[31]+0x00000584u,c->r[12]); // 801B3190
  W32(c->r[31]+0x000005A0u,c->r[11]); // 801B3194
  W32(c->r[31]+0x000005BCu,c->r[10]); // 801B3198
  W16(c->r[31]+0x00000654u,c->r[9]); // 801B319C
  W16(c->r[31]+0x00000656u,c->r[8]); // 801B31A0
  W8(c->r[31]+0x000027BDu,c->r[7]); // 801B31A4
  W8(c->r[31]+0x000027BEu,c->r[7]); // 801B31A8
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801B31AC
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B31B0
  c->lr=0x801B31B8u; f_801AADD0(c); // 801B31B4
  c->lr=0x801B31BCu; f_801BEB60(c); // 801B31B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B31BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B31C0
  c->lr=c->r[0]; // 801B31C4
  c->r[1]=c->r[1]+0x00000010u; // 801B31C8
  return; // 801B31CC
}

// btm_db_reset
void f_801B31D0(Ctx* __restrict c) {
  trace_call(0x801B31D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B31D0
  c->r[0]=c->lr; // 801B31D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B31D8
  c->r[0]=0u+0x0000000Cu; // 801B31DC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B31E0
  c->lr=0x801B31E8u; f_801B59A0(c); // 801B31E4
  c->lr=0x801B31ECu; f_801B4B30(c); // 801B31E8
  c->r[3]=0u+0x802D0000u; // 801B31EC
  c->r[3]=c->r[3]+0x000023D8u; // 801B31F0
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801B31F4
  cmps(c,0,(int32_t)c->r[12],0); // 801B31F8
  if (crb(c,2)) { goto L_801B3218; } // 801B31FC
  c->r[0]=0u+0x00000000u; // 801B3200
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801B3204
  if (crb(c,2)) { goto L_801B3218; } // 801B3208
  c->r[3]=0u+0x00000000u; // 801B320C
  c->ctr=c->r[12]; // 801B3210
  if (true) { c->lr=0x801B3218u; dispatch(c,c->ctr); } // 801B3214
L_801B3218:;
  c->r[3]=0u+0x802D0000u; // 801B3218
  c->r[3]=c->r[3]+0x000023D8u; // 801B321C
  c->r[12]=R32(c->r[3]+0x000005C4u); // 801B3220
  cmps(c,0,(int32_t)c->r[12],0); // 801B3224
  if (crb(c,2)) { goto L_801B3244; } // 801B3228
  c->r[0]=0u+0x00000000u; // 801B322C
  W32(c->r[3]+0x000005C4u,c->r[0]); // 801B3230
  if (crb(c,2)) { goto L_801B3244; } // 801B3234
  c->r[3]=c->r[1]+0x00000008u; // 801B3238
  c->ctr=c->r[12]; // 801B323C
  if (true) { c->lr=0x801B3244u; dispatch(c,c->ctr); } // 801B3240
L_801B3244:;
  c->r[3]=0u+0x802D0000u; // 801B3244
  c->r[3]=c->r[3]+0x000023D8u; // 801B3248
  c->r[12]=R32(c->r[3]+0x000005E0u); // 801B324C
  cmps(c,0,(int32_t)c->r[12],0); // 801B3250
  if (crb(c,2)) { goto L_801B3270; } // 801B3254
  c->r[0]=0u+0x00000000u; // 801B3258
  W32(c->r[3]+0x000005E0u,c->r[0]); // 801B325C
  if (crb(c,2)) { goto L_801B3270; } // 801B3260
  c->r[3]=c->r[1]+0x00000008u; // 801B3264
  c->ctr=c->r[12]; // 801B3268
  if (true) { c->lr=0x801B3270u; dispatch(c,c->ctr); } // 801B326C
L_801B3270:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3270
  c->lr=c->r[0]; // 801B3274
  c->r[1]=c->r[1]+0x00000010u; // 801B3278
  return; // 801B327C
}

// BTM_DeviceReset
void f_801B3280(Ctx* __restrict c) {
  trace_call(0x801B3280u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3280
  c->r[0]=c->lr; // 801B3284
  c->r[4]=0u+0x802D0000u; // 801B3288
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B328C
  c->r[4]=c->r[4]+0x000023D8u; // 801B3290
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3294
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B3298
  c->r[30]=c->r[3]|c->r[3]; // 801B329C
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 801B32A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B32A4
  if (crb(c,2)) { goto L_801B32B4; } // 801B32A8
  cmpu(c,0,c->r[0],c->r[3]); // 801B32AC
  if (!crb(c,2)) { goto L_801B3304; } // 801B32B0
L_801B32B4:;
  c->lr=0x801B32B8u; f_801B1198(c); // 801B32B4
  c->lr=0x801B32BCu; f_801B31D0(c); // 801B32B8
  c->r[31]=0u+0x802D0000u; // 801B32BC
  c->r[6]=0u+0x00000000u; // 801B32C0
  c->r[31]=c->r[31]+0x000023D8u; // 801B32C4
  c->r[0]=0u+0x00000005u; // 801B32C8
  W32(c->r[31]+0x0000058Cu,c->r[30]); // 801B32CC
  c->r[3]=c->r[31]+0x00000574u; // 801B32D0
  c->r[4]=0u+0x00000001u; // 801B32D4
  c->r[5]=0u+0x00000004u; // 801B32D8
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801B32DC
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B32E0
  c->lr=0x801B32E8u; f_801AADD0(c); // 801B32E4
  c->lr=0x801B32ECu; f_801BEB60(c); // 801B32E8
  c->r[12]=R32(c->r[31]+0x00000568u); // 801B32EC
  cmps(c,0,(int32_t)c->r[12],0); // 801B32F0
  if (crb(c,2)) { goto L_801B3304; } // 801B32F4
  c->r[3]=0u+0x00000001u; // 801B32F8
  c->ctr=c->r[12]; // 801B32FC
  if (true) { c->lr=0x801B3304u; dispatch(c,c->ctr); } // 801B3300
L_801B3304:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3308
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B330C
  c->lr=c->r[0]; // 801B3310
  c->r[1]=c->r[1]+0x00000010u; // 801B3314
  return; // 801B3318
}

// BTM_SendHciReset
void f_801B331C(Ctx* __restrict c) {
  trace_call(0x801B331Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B331C
  c->r[0]=c->lr; // 801B3320
  c->r[4]=0u+0x802D0000u; // 801B3324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3328
  c->r[4]=c->r[4]+0x000023D8u; // 801B332C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B3330
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B3334
  c->r[30]=c->r[3]|c->r[3]; // 801B3338
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 801B333C
  cmps(c,0,(int32_t)c->r[0],0); // 801B3340
  if (crb(c,2)) { goto L_801B335C; } // 801B3344
  cmpu(c,0,c->r[0],c->r[3]); // 801B3348
  if (crb(c,2)) { goto L_801B335C; } // 801B334C
  c->r[0]=R32(c->r[4]+0x00000620u); // 801B3350
  cmpu(c,0,c->r[0],c->r[3]); // 801B3354
  if (!crb(c,2)) { goto L_801B33AC; } // 801B3358
L_801B335C:;
  c->lr=0x801B3360u; f_801B1198(c); // 801B335C
  c->lr=0x801B3364u; f_801B31D0(c); // 801B3360
  c->r[31]=0u+0x802D0000u; // 801B3364
  c->r[6]=0u+0x00000000u; // 801B3368
  c->r[31]=c->r[31]+0x000023D8u; // 801B336C
  c->r[0]=0u+0x00000005u; // 801B3370
  W32(c->r[31]+0x00000620u,c->r[30]); // 801B3374
  c->r[3]=c->r[31]+0x00000574u; // 801B3378
  c->r[4]=0u+0x00000001u; // 801B337C
  c->r[5]=0u+0x00000004u; // 801B3380
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801B3384
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B3388
  c->lr=0x801B3390u; f_801AADD0(c); // 801B338C
  c->lr=0x801B3394u; f_801BEB60(c); // 801B3390
  c->r[12]=R32(c->r[31]+0x00000568u); // 801B3394
  cmps(c,0,(int32_t)c->r[12],0); // 801B3398
  if (crb(c,2)) { goto L_801B33AC; } // 801B339C
  c->r[3]=0u+0x00000001u; // 801B33A0
  c->ctr=c->r[12]; // 801B33A4
  if (true) { c->lr=0x801B33ACu; dispatch(c,c->ctr); } // 801B33A8
L_801B33AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B33AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B33B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B33B4
  c->lr=c->r[0]; // 801B33B8
  c->r[1]=c->r[1]+0x00000010u; // 801B33BC
  return; // 801B33C0
}

// BTM_IsDeviceUp
void f_801B33C4(Ctx* __restrict c) {
  trace_call(0x801B33C4u);
  c->r[3]=0u+0x802D0000u; // 801B33C4
  c->r[3]=c->r[3]+0x000023D8u; // 801B33C8
  c->r[3]=R8(c->r[3]+0x0000064Eu); // 801B33CC
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 801B33D0
  c->r[0]=cntlz(c->r[0]); // 801B33D4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801B33D8
  return; // 801B33DC
}

// BTM_SetAfhChannels
void f_801B33E0(Ctx* __restrict c) {
  trace_call(0x801B33E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B33E0
  c->r[0]=c->lr; // 801B33E4
  c->r[7]=0u+0x802D0000u; // 801B33E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B33EC
  c->r[7]=c->r[7]+0x000023D8u; // 801B33F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B33F4
  c->r[31]=c->r[4]|c->r[4]; // 801B33F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B33FC
  c->r[30]=c->r[3]|c->r[3]; // 801B3400
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801B3404
  cmpu(c,0,c->r[0],0x00000003u); // 801B3408
  if (crb(c,0)) { goto L_801B3434; } // 801B340C
  c->r[3]=0u+0x000D0000u; // 801B3410
  c->r[4]=0u+0x80240000u; // 801B3414
  c->r[6]=R8(c->r[7]+0x000027BDu); // 801B3418
  c->r[5]=c->r[30]|c->r[30]; // 801B341C
  c->r[8]=R8(c->r[7]+0x000027BEu); // 801B3420
  c->r[7]=c->r[31]|c->r[31]; // 801B3424
  c->r[3]=c->r[3]+0x00000002u; // 801B3428
  c->r[4]=c->r[4]+0x00005278u; // 801B342C
  c->lr=0x801B3434u; f_801AA840(c); // 801B3430
L_801B3434:;
  c->r[3]=0u+0x802D0000u; // 801B3434
  c->r[3]=c->r[3]+0x000023D8u; // 801B3438
  c->r[4]=R8(c->r[3]+0x00000645u); // 801B343C
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801B3440
  if (!crb(c,2)) { goto L_801B3464; } // 801B3444
  c->r[0]=R8(c->r[3]+0x00000644u); // 801B3448
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B344C
  if (!crb(c,2)) { goto L_801B3464; } // 801B3450
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B3454
  if (!crb(c,2)) { goto L_801B3464; } // 801B3458
  c->r[3]=0u+0x00000004u; // 801B345C
  goto L_801B34B8; // 801B3460
L_801B3464:;
  c->r[3]=0u+0x802D0000u; // 801B3464
  c->r[3]=c->r[3]+0x000023D8u; // 801B3468
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801B346C
  cmpu(c,0,c->r[0],c->r[30]); // 801B3470
  if (!crb(c,2)) { goto L_801B3484; } // 801B3474
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801B3478
  cmpu(c,0,c->r[0],c->r[31]); // 801B347C
  if (crb(c,2)) { goto L_801B34B4; } // 801B3480
L_801B3484:;
  c->r[3]=c->r[30]|c->r[30]; // 801B3484
  c->r[4]=c->r[31]|c->r[31]; // 801B3488
  c->lr=0x801B3490u; f_801BF854(c); // 801B348C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B3490
  if (crb(c,2)) { goto L_801B34AC; } // 801B3494
  c->r[3]=0u+0x802D0000u; // 801B3498
  c->r[3]=c->r[3]+0x000023D8u; // 801B349C
  W8(c->r[3]+0x000027BDu,c->r[30]); // 801B34A0
  W8(c->r[3]+0x000027BEu,c->r[31]); // 801B34A4
  goto L_801B34B4; // 801B34A8
L_801B34AC:;
  c->r[3]=0u+0x00000003u; // 801B34AC
  goto L_801B34B8; // 801B34B0
L_801B34B4:;
  c->r[3]=0u+0x00000000u; // 801B34B4
L_801B34B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B34B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B34BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B34C0
  c->lr=c->r[0]; // 801B34C4
  c->r[1]=c->r[1]+0x00000010u; // 801B34C8
  return; // 801B34CC
}

// btm_dev_timeout
void f_801B34D0(Ctx* __restrict c) {
  trace_call(0x801B34D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B34D0
  c->r[0]=c->lr; // 801B34D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B34D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B34DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B34E0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801B34E4
  cmpu(c,0,c->r[0],0x00000001u); // 801B34E8
  if (!crb(c,2)) { goto L_801B3720; } // 801B34EC
  c->r[6]=0u+0x802D0000u; // 801B34F0
  c->r[6]=c->r[6]+0x000023D8u; // 801B34F4
  c->r[0]=R8(c->r[6]+0x0000064Eu); // 801B34F8
  cmps(c,0,(int32_t)c->r[0],2); // 801B34FC
  if (crb(c,2)) { goto L_801B3660; } // 801B3500
  if (!crb(c,0)) { goto L_801B3518; } // 801B3504
  cmps(c,0,(int32_t)c->r[0],0); // 801B3508
  if (crb(c,2)) { goto L_801B3524; } // 801B350C
  if (!crb(c,0)) { goto L_801B354C; } // 801B3510
  goto L_801B3750; // 801B3514
L_801B3518:;
  cmps(c,0,(int32_t)c->r[0],4); // 801B3518
  if (!crb(c,0)) { goto L_801B3750; } // 801B351C
  goto L_801B36C4; // 801B3520
L_801B3524:;
  c->r[3]=0u+0x00000000u; // 801B3524
  c->r[0]=0u+0x00000005u; // 801B3528
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801B352C
  c->r[3]=c->r[6]+0x00000574u; // 801B3530
  c->r[4]=0u+0x00000001u; // 801B3534
  c->r[5]=0u+0x00000004u; // 801B3538
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B353C
  c->lr=0x801B3544u; f_801AADD0(c); // 801B3540
  c->lr=0x801B3548u; f_801BEB60(c); // 801B3544
  goto L_801B3750; // 801B3548
L_801B354C:;
  c->r[0]=0u+0x00000004u; // 801B354C
  c->r[3]=0u+0x00000002u; // 801B3550
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801B3554
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B3558
  goto L_801B3574; // 801B355C
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B3560
  W8(c->r[6]+0x0000064Eu,c->r[0]); // 801B3564
  c->lr=0x801B356Cu; f_801AADD0(c); // 801B3568
  c->lr=0x801B3570u; f_801BEB60(c); // 801B356C
  goto L_801B3598; // 801B3570
L_801B3574:;
  c->r[3]=c->r[6]+0x00000574u; // 801B3574
  c->r[4]=0u+0x00000001u; // 801B3578
  c->r[5]=0u+0x00000001u; // 801B357C
  c->lr=0x801B3584u; f_801AADD0(c); // 801B3580
  c->r[3]=0u+0x00000002u; // 801B3584
  c->lr=0x801B358Cu; f_801A7C10(c); // 801B3588
  cmps(c,0,(int32_t)c->r[3],0); // 801B358C
  if (crb(c,2)) { goto L_801B3598; } // 801B3590
  c->lr=0x801B3598u; f_801BF6D8(c); // 801B3594
L_801B3598:;
  c->r[31]=0u+0x802D0000u; // 801B3598
  c->r[5]=0u+0x00000003u; // 801B359C
  c->r[31]=c->r[31]+0x000023D8u; // 801B35A0
  c->r[3]=c->r[31]+0x00000648u; // 801B35A4
  c->r[4]=c->r[3]|c->r[3]; // 801B35A8
  c->lr=0x801B35B0u; f_80004364(c); // 801B35AC
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B35B0
  cmps(c,0,(int32_t)c->r[0],0); // 801B35B4
  if (crb(c,2)) { goto L_801B35DC; } // 801B35B8
  cmpu(c,0,c->r[0],0x00000001u); // 801B35BC
  if (crb(c,2)) { goto L_801B35DC; } // 801B35C0
  c->r[3]=0u+0x00000002u; // 801B35C4
  c->lr=0x801B35CCu; f_801A7C10(c); // 801B35C8
  cmps(c,0,(int32_t)c->r[3],0); // 801B35CC
  if (crb(c,2)) { goto L_801B35DC; } // 801B35D0
  c->r[4]=c->r[31]+0x00000648u; // 801B35D4
  c->lr=0x801B35DCu; f_801BF3D4(c); // 801B35D8
L_801B35DC:;
  c->r[0]=0u+0x802D0000u; // 801B35DC
  c->r[31]=addc(c,c->r[0],0x000023D8u,0); cr0(c,c->r[31]); // 801B35E0
  if (crb(c,2)) { goto L_801B3644; } // 801B35E4
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B35E8
  cmps(c,0,(int32_t)c->r[0],0); // 801B35EC
  if (crb(c,2)) { goto L_801B3644; } // 801B35F0
  cmpu(c,0,c->r[0],0x00000001u); // 801B35F4
  if (crb(c,2)) { goto L_801B3644; } // 801B35F8
  c->r[3]=0u+0x00000002u; // 801B35FC
  c->lr=0x801B3604u; f_801A7C10(c); // 801B3600
  cmps(c,0,(int32_t)c->r[3],0); // 801B3604
  c->r[30]=c->r[3]|c->r[3]; // 801B3608
  if (crb(c,2)) { goto L_801B3644; } // 801B360C
  cmpu(c,0,c->r[31],c->r[31]); // 801B3610
  if (crb(c,2)) { goto L_801B3638; } // 801B3614
  c->r[3]=c->r[31]|c->r[31]; // 801B3618
  c->r[4]=0u+0x00000000u; // 801B361C
  c->r[5]=0u+0x00000020u; // 801B3620
  c->lr=0x801B3628u; f_800046B4(c); // 801B3624
  c->r[3]=c->r[31]|c->r[31]; // 801B3628
  c->r[4]=c->r[31]|c->r[31]; // 801B362C
  c->r[5]=0u+0x0000001Fu; // 801B3630
  c->lr=0x801B3638u; f_801DBA48(c); // 801B3634
L_801B3638:;
  c->r[3]=c->r[30]|c->r[30]; // 801B3638
  c->r[4]=c->r[31]|c->r[31]; // 801B363C
  c->lr=0x801B3644u; f_801BF0BC(c); // 801B3640
L_801B3644:;
  c->r[5]=0u+0x802D0000u; // 801B3644
  c->r[5]=c->r[5]+0x000023D8u; // 801B3648
  c->r[3]=R8(c->r[5]+0x00000020u); // 801B364C
  c->r[4]=c->r[5]+0x00000022u; // 801B3650
  c->r[5]=R8(c->r[5]+0x00000021u); // 801B3654
  c->lr=0x801B365Cu; f_801B82C8(c); // 801B3658
  goto L_801B3750; // 801B365C
L_801B3660:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 801B3660
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B3664
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B3668
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 801B366C
  if (!crb(c,2)) { goto L_801B369C; } // 801B3670
  c->r[3]=0u+0x00000000u; // 801B3674
  c->r[0]=0u+0x00000005u; // 801B3678
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801B367C
  c->r[3]=c->r[6]+0x00000574u; // 801B3680
  c->r[4]=0u+0x00000001u; // 801B3684
  c->r[5]=0u+0x00000004u; // 801B3688
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B368C
  c->lr=0x801B3694u; f_801AADD0(c); // 801B3690
  c->lr=0x801B3698u; f_801BEB60(c); // 801B3694
  goto L_801B3750; // 801B3698
L_801B369C:;
  c->r[3]=c->r[6]+0x00000574u; // 801B369C
  c->r[4]=0u+0x00000001u; // 801B36A0
  c->r[5]=0u+0x00000001u; // 801B36A4
  c->lr=0x801B36ACu; f_801AADD0(c); // 801B36A8
  c->r[3]=0u+0x00000002u; // 801B36AC
  c->lr=0x801B36B4u; f_801A7C10(c); // 801B36B0
  cmps(c,0,(int32_t)c->r[3],0); // 801B36B4
  if (crb(c,2)) { goto L_801B3750; } // 801B36B8
  c->lr=0x801B36C0u; f_801BF6D8(c); // 801B36BC
  goto L_801B3750; // 801B36C0
L_801B36C4:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 801B36C4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B36C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B36CC
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 801B36D0
  if (!crb(c,2)) { goto L_801B3700; } // 801B36D4
  c->r[3]=0u+0x00000000u; // 801B36D8
  c->r[0]=0u+0x00000005u; // 801B36DC
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801B36E0
  c->r[3]=c->r[6]+0x00000574u; // 801B36E4
  c->r[4]=0u+0x00000001u; // 801B36E8
  c->r[5]=0u+0x00000004u; // 801B36EC
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801B36F0
  c->lr=0x801B36F8u; f_801AADD0(c); // 801B36F4
  c->lr=0x801B36FCu; f_801BEB60(c); // 801B36F8
  goto L_801B3750; // 801B36FC
L_801B3700:;
  c->r[3]=c->r[6]+0x00000574u; // 801B3700
  c->r[4]=0u+0x00000001u; // 801B3704
  c->r[5]=0u+0x00000001u; // 801B3708
  c->lr=0x801B3710u; f_801AADD0(c); // 801B370C
  c->lr=0x801B3714u; f_801BF61C(c); // 801B3710
  c->lr=0x801B3718u; f_801BF700(c); // 801B3714
  c->lr=0x801B371Cu; f_801B6A24(c); // 801B3718
  goto L_801B3750; // 801B371C
L_801B3720:;
  cmpu(c,0,c->r[0],0x00000002u); // 801B3720
  if (!crb(c,2)) { goto L_801B3750; } // 801B3724
  c->r[3]=0u+0x802D0000u; // 801B3728
  c->r[0]=0u+0x00000000u; // 801B372C
  c->r[3]=c->r[3]+0x000023D8u; // 801B3730
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801B3734
  cmps(c,0,(int32_t)c->r[12],0); // 801B3738
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801B373C
  if (crb(c,2)) { goto L_801B3750; } // 801B3740
  c->r[3]=0u+0x00000000u; // 801B3744
  c->ctr=c->r[12]; // 801B3748
  if (true) { c->lr=0x801B3750u; dispatch(c,c->ctr); } // 801B374C
L_801B3750:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3754
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B3758
  c->lr=c->r[0]; // 801B375C
  c->r[1]=c->r[1]+0x00000010u; // 801B3760
  return; // 801B3764
}

// btm_reset_complete
void f_801B3768(Ctx* __restrict c) {
  trace_call(0x801B3768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3768
  c->r[0]=c->lr; // 801B376C
  c->r[3]=0u+0x802D0000u; // 801B3770
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3774
  c->r[3]=c->r[3]+0x000023D8u; // 801B3778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B377C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B3780
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B3784
  cmpu(c,0,c->r[0],0x00000004u); // 801B3788
  if (crb(c,0)) { goto L_801B37A4; } // 801B378C
  c->r[3]=0u+0x000D0000u; // 801B3790
  c->r[4]=0u+0x80240000u; // 801B3794
  c->r[3]=c->r[3]+0x00000003u; // 801B3798
  c->r[4]=c->r[4]+0x000052A8u; // 801B379C
  c->lr=0x801B37A4u; f_801AA7C0(c); // 801B37A0
L_801B37A4:;
  c->r[31]=0u+0x802D0000u; // 801B37A4
  c->r[31]=c->r[31]+0x000023D8u; // 801B37A8
  c->r[12]=R32(c->r[31]+0x00000620u); // 801B37AC
  cmps(c,0,(int32_t)c->r[12],0); // 801B37B0
  if (crb(c,2)) { goto L_801B37D0; } // 801B37B4
  c->r[0]=0u+0x00000000u; // 801B37B8
  c->r[3]=0u+0x00000000u; // 801B37BC
  W32(c->r[31]+0x00000620u,c->r[0]); // 801B37C0
  c->ctr=c->r[12]; // 801B37C4
  if (true) { c->lr=0x801B37CCu; dispatch(c,c->ctr); } // 801B37C8
  goto L_801B3914; // 801B37CC
L_801B37D0:;
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B37D0
  cmps(c,0,(int32_t)c->r[0],0); // 801B37D4
  if (!crb(c,2)) { goto L_801B3914; } // 801B37D8
  c->lr=0x801B37E0u; f_801C8E80(c); // 801B37DC
  c->r[6]=0u+0x00000012u; // 801B37E0
  c->r[5]=0u+0x00000800u; // 801B37E4
  c->r[4]=0u+0x00000000u; // 801B37E8
  c->r[0]=0u+0x00000004u; // 801B37EC
  c->r[3]=0u+0x00000002u; // 801B37F0
  W16(c->r[31]+0x000016A0u,c->r[6]); // 801B37F4
  W16(c->r[31]+0x000016A2u,c->r[5]); // 801B37F8
  W16(c->r[31]+0x000016A4u,c->r[4]); // 801B37FC
  W16(c->r[31]+0x0000169Cu,c->r[6]); // 801B3800
  W16(c->r[31]+0x0000169Eu,c->r[5]); // 801B3804
  W16(c->r[31]+0x000016A6u,c->r[4]); // 801B3808
  W8(c->r[31]+0x0000064Eu,c->r[3]); // 801B380C
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B3810
  goto L_801B382C; // 801B3814
  W8(c->r[31]+0x0000064Eu,c->r[4]); // 801B3818
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801B381C
  c->lr=0x801B3824u; f_801AADD0(c); // 801B3820
  c->lr=0x801B3828u; f_801BEB60(c); // 801B3824
  goto L_801B3850; // 801B3828
L_801B382C:;
  c->r[3]=c->r[31]+0x00000574u; // 801B382C
  c->r[4]=0u+0x00000001u; // 801B3830
  c->r[5]=0u+0x00000001u; // 801B3834
  c->lr=0x801B383Cu; f_801AADD0(c); // 801B3838
  c->r[3]=0u+0x00000002u; // 801B383C
  c->lr=0x801B3844u; f_801A7C10(c); // 801B3840
  cmps(c,0,(int32_t)c->r[3],0); // 801B3844
  if (crb(c,2)) { goto L_801B3850; } // 801B3848
  c->lr=0x801B3850u; f_801BF6D8(c); // 801B384C
L_801B3850:;
  c->r[31]=0u+0x802D0000u; // 801B3850
  c->r[5]=0u+0x00000003u; // 801B3854
  c->r[31]=c->r[31]+0x000023D8u; // 801B3858
  c->r[3]=c->r[31]+0x00000648u; // 801B385C
  c->r[4]=c->r[3]|c->r[3]; // 801B3860
  c->lr=0x801B3868u; f_80004364(c); // 801B3864
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B3868
  cmps(c,0,(int32_t)c->r[0],0); // 801B386C
  if (crb(c,2)) { goto L_801B3894; } // 801B3870
  cmpu(c,0,c->r[0],0x00000001u); // 801B3874
  if (crb(c,2)) { goto L_801B3894; } // 801B3878
  c->r[3]=0u+0x00000002u; // 801B387C
  c->lr=0x801B3884u; f_801A7C10(c); // 801B3880
  cmps(c,0,(int32_t)c->r[3],0); // 801B3884
  if (crb(c,2)) { goto L_801B3894; } // 801B3888
  c->r[4]=c->r[31]+0x00000648u; // 801B388C
  c->lr=0x801B3894u; f_801BF3D4(c); // 801B3890
L_801B3894:;
  c->r[0]=0u+0x802D0000u; // 801B3894
  c->r[31]=addc(c,c->r[0],0x000023D8u,0); cr0(c,c->r[31]); // 801B3898
  if (crb(c,2)) { goto L_801B38FC; } // 801B389C
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B38A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B38A4
  if (crb(c,2)) { goto L_801B38FC; } // 801B38A8
  cmpu(c,0,c->r[0],0x00000001u); // 801B38AC
  if (crb(c,2)) { goto L_801B38FC; } // 801B38B0
  c->r[3]=0u+0x00000002u; // 801B38B4
  c->lr=0x801B38BCu; f_801A7C10(c); // 801B38B8
  cmps(c,0,(int32_t)c->r[3],0); // 801B38BC
  c->r[30]=c->r[3]|c->r[3]; // 801B38C0
  if (crb(c,2)) { goto L_801B38FC; } // 801B38C4
  cmpu(c,0,c->r[31],c->r[31]); // 801B38C8
  if (crb(c,2)) { goto L_801B38F0; } // 801B38CC
  c->r[3]=c->r[31]|c->r[31]; // 801B38D0
  c->r[4]=0u+0x00000000u; // 801B38D4
  c->r[5]=0u+0x00000020u; // 801B38D8
  c->lr=0x801B38E0u; f_800046B4(c); // 801B38DC
  c->r[3]=c->r[31]|c->r[31]; // 801B38E0
  c->r[4]=c->r[31]|c->r[31]; // 801B38E4
  c->r[5]=0u+0x0000001Fu; // 801B38E8
  c->lr=0x801B38F0u; f_801DBA48(c); // 801B38EC
L_801B38F0:;
  c->r[3]=c->r[30]|c->r[30]; // 801B38F0
  c->r[4]=c->r[31]|c->r[31]; // 801B38F4
  c->lr=0x801B38FCu; f_801BF0BC(c); // 801B38F8
L_801B38FC:;
  c->r[5]=0u+0x802D0000u; // 801B38FC
  c->r[5]=c->r[5]+0x000023D8u; // 801B3900
  c->r[3]=R8(c->r[5]+0x00000020u); // 801B3904
  c->r[4]=c->r[5]+0x00000022u; // 801B3908
  c->r[5]=R8(c->r[5]+0x00000021u); // 801B390C
  c->lr=0x801B3914u; f_801B82C8(c); // 801B3910
L_801B3914:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B3918
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B391C
  c->lr=c->r[0]; // 801B3920
  c->r[1]=c->r[1]+0x00000010u; // 801B3924
  return; // 801B3928
}

// btm_read_hci_buf_size_complete
void f_801B392C(Ctx* __restrict c) {
  trace_call(0x801B392Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B392C
  c->r[0]=c->lr; // 801B3930
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3934
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B3938
  cmps(c,0,(int32_t)c->r[0],0); // 801B393C
  if (!crb(c,2)) { goto L_801B3998; } // 801B3940
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B3944
  c->r[6]=0u+0x802D0000u; // 801B3948
  c->r[4]=R8(c->r[3]+0x00000001u); // 801B394C
  c->r[6]=c->r[6]+0x00001EB0u; // 801B3950
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B3954
  c->r[0]=c->r[4]+c->r[0]; // 801B3958
  W16(c->r[6]+0x0000007Cu,c->r[0]); // 801B395C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801B3960
  c->r[0]=c->r[4]+0x00000004u; // 801B3964
  c->r[4]=R8(c->r[3]+0x00000005u); // 801B3968
  c->r[5]=R8(c->r[3]+0x00000004u); // 801B396C
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 801B3970
  c->r[3]=c->r[5]+c->r[3]; // 801B3974
  W16(c->r[6]+0x0000007Eu,c->r[0]); // 801B3978
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801B397C
  c->lr=0x801B3984u; f_801C5EFC(c); // 801B3980
  c->r[3]=0u+0x0000069Bu; // 801B3984
  c->r[4]=0u+0x0000001Eu; // 801B3988
  c->r[5]=0u+0x00000014u; // 801B398C
  c->r[6]=0u+0x0000000Au; // 801B3990
  c->lr=0x801B3998u; f_801BF45C(c); // 801B3994
L_801B3998:;
  c->r[3]=0u+0x802D0000u; // 801B3998
  c->r[0]=0u+0x00000004u; // 801B399C
  c->r[3]=c->r[3]+0x000023D8u; // 801B39A0
  c->r[4]=0u+0x00000003u; // 801B39A4
  W8(c->r[3]+0x0000064Eu,c->r[4]); // 801B39A8
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801B39AC
  goto L_801B39C8; // 801B39B0
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801B39B4
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801B39B8
  c->lr=0x801B39C0u; f_801AADD0(c); // 801B39BC
  c->lr=0x801B39C4u; f_801BEB60(c); // 801B39C0
  goto L_801B39E4; // 801B39C4
L_801B39C8:;
  c->r[3]=c->r[3]+0x00000574u; // 801B39C8
  c->r[4]=0u+0x00000001u; // 801B39CC
  c->r[5]=0u+0x00000001u; // 801B39D0
  c->lr=0x801B39D8u; f_801AADD0(c); // 801B39D4
  c->lr=0x801B39DCu; f_801BF61C(c); // 801B39D8
  c->lr=0x801B39E0u; f_801BF700(c); // 801B39DC
  c->lr=0x801B39E4u; f_801B6A24(c); // 801B39E0
L_801B39E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B39E4
  c->lr=c->r[0]; // 801B39E8
  c->r[1]=c->r[1]+0x00000010u; // 801B39EC
  return; // 801B39F0
}

// btm_read_local_version_complete
void f_801B39F4(Ctx* __restrict c) {
  trace_call(0x801B39F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B39F4
  c->r[0]=c->lr; // 801B39F8
  c->r[5]=0u+0x802D0000u; // 801B39FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B3A00
  c->r[5]=c->r[5]+0x000023D8u; // 801B3A04
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B3A08
  cmps(c,0,(int32_t)c->r[0],0); // 801B3A0C
  if (!crb(c,2)) { goto L_801B3A60; } // 801B3A10
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B3A14
  W8(c->r[5]+0x00000636u,c->r[0]); // 801B3A18
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B3A1C
  c->r[4]=R8(c->r[3]+0x00000002u); // 801B3A20
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B3A24
  c->r[0]=c->r[4]+c->r[0]; // 801B3A28
  W16(c->r[5]+0x00000638u,c->r[0]); // 801B3A2C
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B3A30
  W8(c->r[5]+0x0000063Au,c->r[0]); // 801B3A34
  c->r[0]=R8(c->r[3]+0x00000006u); // 801B3A38
  c->r[4]=R8(c->r[3]+0x00000005u); // 801B3A3C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B3A40
  c->r[0]=c->r[4]+c->r[0]; // 801B3A44
  W16(c->r[5]+0x0000063Cu,c->r[0]); // 801B3A48
  c->r[0]=R8(c->r[3]+0x00000008u); // 801B3A4C
  c->r[3]=R8(c->r[3]+0x00000007u); // 801B3A50
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B3A54
  c->r[0]=c->r[3]+c->r[0]; // 801B3A58
  W16(c->r[5]+0x0000063Eu,c->r[0]); // 801B3A5C
L_801B3A60:;
  c->r[3]=0u+0x802D0000u; // 801B3A60
  c->r[0]=0u+0x00000004u; // 801B3A64
  c->r[3]=c->r[3]+0x000023D8u; // 801B3A68
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801B3A6C
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801B3A70
  goto L_801B3A8C; // 801B3A74
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801B3A78
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801B3A7C
  c->lr=0x801B3A84u; f_801AADD0(c); // 801B3A80
  c->lr=0x801B3A88u; f_801BEB60(c); // 801B3A84
  goto L_801B3AA0; // 801B3A88
L_801B3A8C:;
  c->r[3]=c->r[3]+0x00000574u; // 801B3A8C
  c->r[4]=0u+0x00000001u; // 801B3A90
  c->r[5]=0u+0x00000001u; // 801B3A94
  c->lr=0x801B3A9Cu; f_801AADD0(c); // 801B3A98
  c->lr=0x801B3AA0u; f_801BF67C(c); // 801B3A9C
L_801B3AA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B3AA0
  c->lr=c->r[0]; // 801B3AA4
  c->r[1]=c->r[1]+0x00000010u; // 801B3AA8
  return; // 801B3AAC
}

// btm_read_local_features_complete
void f_801B3AB0(Ctx* __restrict c) {
  trace_call(0x801B3AB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3AB0
  c->r[0]=c->lr; // 801B3AB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3AB8
  c->r[11]=c->r[1]+0x00000020u; // 801B3ABC
  c->lr=0x801B3AC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B3AC0
  c->r[31]=0u+0x802D0000u; // 801B3AC4
  c->r[30]=0u+0x80240000u; // 801B3AC8
  c->r[31]=c->r[31]+0x000023D8u; // 801B3ACC
  c->r[0]=0u+0x00000000u; // 801B3AD0
  c->r[28]=R32(c->r[31]+0x0000058Cu); // 801B3AD4
  c->r[30]=c->r[30]+0x00005278u; // 801B3AD8
  W32(c->r[31]+0x0000058Cu,c->r[0]); // 801B3ADC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B3AE0
  cmps(c,0,(int32_t)c->r[0],0); // 801B3AE4
  if (!crb(c,2)) { goto L_801B3F94; } // 801B3AE8
  c->r[0]=0u+0x00000005u; // 801B3AEC
  c->r[4]=0u+0x00000018u; // 801B3AF0
  W8(c->r[31]+0x0000064Eu,c->r[0]); // 801B3AF4
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B3AF8
  W8(c->r[31]+0x00000640u,c->r[0]); // 801B3AFC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B3B00
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B3B04
  W8(c->r[31]+0x00000641u,c->r[0]); // 801B3B08
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B3B0C
  W8(c->r[31]+0x00000642u,c->r[0]); // 801B3B10
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B3B14
  W8(c->r[31]+0x00000643u,c->r[0]); // 801B3B18
  c->r[0]=R8(c->r[3]+0x00000005u); // 801B3B1C
  W8(c->r[31]+0x00000644u,c->r[0]); // 801B3B20
  c->r[0]=R8(c->r[3]+0x00000006u); // 801B3B24
  W8(c->r[31]+0x00000645u,c->r[0]); // 801B3B28
  c->r[0]=R8(c->r[3]+0x00000007u); // 801B3B2C
  W8(c->r[31]+0x00000646u,c->r[0]); // 801B3B30
  c->r[0]=R8(c->r[3]+0x00000008u); // 801B3B34
  W8(c->r[31]+0x00000647u,c->r[0]); // 801B3B38
  W16(c->r[31]+0x00000654u,c->r[4]); // 801B3B3C
  if (crb(c,2)) { goto L_801B3B4C; } // 801B3B40
  c->r[0]=c->r[4]|0x00000C00u; // 801B3B44
  W16(c->r[31]+0x00000654u,c->r[0]); // 801B3B48
L_801B3B4C:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801B3B4C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B3B50
  if (crb(c,2)) { goto L_801B3B6C; } // 801B3B54
  c->r[3]=0u+0x802D0000u; // 801B3B58
  c->r[3]=c->r[3]+0x000023D8u; // 801B3B5C
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B3B60
  c->r[0]=c->r[0]|0x0000C000u; // 801B3B64
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B3B68
L_801B3B6C:;
  c->r[3]=0u+0x802D0000u; // 801B3B6C
  c->r[3]=c->r[3]+0x000023D8u; // 801B3B70
  c->r[0]=R8(c->r[3]+0x00000636u); // 801B3B74
  cmpu(c,0,c->r[0],0x00000003u); // 801B3B78
  if (crb(c,0)) { goto L_801B3C0C; } // 801B3B7C
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B3B80
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B3B84
  if (!crb(c,2)) { goto L_801B3B98; } // 801B3B88
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B3B8C
  c->r[0]=c->r[0]|0x00001102u; // 801B3B90
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B3B94
L_801B3B98:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B3B98
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B3B9C
  if (!crb(c,2)) { goto L_801B3BB8; } // 801B3BA0
  c->r[3]=0u+0x802D0000u; // 801B3BA4
  c->r[3]=c->r[3]+0x000023D8u; // 801B3BA8
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B3BAC
  c->r[0]=c->r[0]|0x00002204u; // 801B3BB0
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B3BB4
L_801B3BB8:;
  c->r[3]=R8(c->r[31]+0x00000643u); // 801B3BB8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801B3BBC
  if (!crb(c,2)) { goto L_801B3BCC; } // 801B3BC0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B3BC4
  if (crb(c,2)) { goto L_801B3C0C; } // 801B3BC8
L_801B3BCC:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801B3BCC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B3BD0
  if (!crb(c,2)) { goto L_801B3BEC; } // 801B3BD4
  c->r[3]=0u+0x802D0000u; // 801B3BD8
  c->r[3]=c->r[3]+0x000023D8u; // 801B3BDC
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B3BE0
  c->r[0]=c->r[0]|0x00000300u; // 801B3BE4
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B3BE8
L_801B3BEC:;
  c->r[0]=R8(c->r[31]+0x00000645u); // 801B3BEC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B3BF0
  if (!crb(c,2)) { goto L_801B3C0C; } // 801B3BF4
  c->r[3]=0u+0x802D0000u; // 801B3BF8
  c->r[3]=c->r[3]+0x000023D8u; // 801B3BFC
  c->r[0]=R16(c->r[3]+0x00000654u); // 801B3C00
  c->r[0]=c->r[0]|0x00003000u; // 801B3C04
  W16(c->r[3]+0x00000654u,c->r[0]); // 801B3C08
L_801B3C0C:;
  c->r[4]=0u+0x802D0000u; // 801B3C0C
  c->r[4]=c->r[4]+0x000023D8u; // 801B3C10
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B3C14
  cmpu(c,0,c->r[0],0x00000005u); // 801B3C18
  if (crb(c,0)) { goto L_801B3C34; } // 801B3C1C
  c->r[3]=0u+0x000D0000u; // 801B3C20
  c->r[5]=R16(c->r[4]+0x00000654u); // 801B3C24
  c->r[3]=c->r[3]+0x00000004u; // 801B3C28
  c->r[4]=c->r[30]+0x00000044u; // 801B3C2C
  c->lr=0x801B3C34u; f_801AA7E0(c); // 801B3C30
L_801B3C34:;
  c->r[3]=R8(c->r[31]+0x00000641u); // 801B3C34
  c->r[4]=0u+0x802D0000u; // 801B3C38
  c->r[4]=c->r[4]+0x000023D8u; // 801B3C3C
  c->r[5]=0u+0x00000000u; // 801B3C40
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801B3C44
  W16(c->r[4]+0x00000656u,c->r[5]); // 801B3C48
  W8(c->r[4]+0x00001908u,c->r[5]); // 801B3C4C
  if (crb(c,2)) { goto L_801B3C8C; } // 801B3C50
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801B3C54
  c->r[0]=0u+0x00000001u; // 801B3C58
  W16(c->r[4]+0x00000656u,c->r[0]); // 801B3C5C
  if (crb(c,2)) { goto L_801B3C6C; } // 801B3C60
  c->r[0]=c->r[0]|0x00000002u; // 801B3C64
  W16(c->r[4]+0x00000656u,c->r[0]); // 801B3C68
L_801B3C6C:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 801B3C6C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B3C70
  if (crb(c,2)) { goto L_801B3C8C; } // 801B3C74
  c->r[3]=0u+0x802D0000u; // 801B3C78
  c->r[3]=c->r[3]+0x000023D8u; // 801B3C7C
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B3C80
  c->r[0]=c->r[0]|0x00000004u; // 801B3C84
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B3C88
L_801B3C8C:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B3C8C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B3C90
  if (crb(c,2)) { goto L_801B3CAC; } // 801B3C94
  c->r[3]=0u+0x802D0000u; // 801B3C98
  c->r[3]=c->r[3]+0x000023D8u; // 801B3C9C
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B3CA0
  c->r[0]=c->r[0]|0x00000008u; // 801B3CA4
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B3CA8
L_801B3CAC:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801B3CAC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B3CB0
  if (crb(c,2)) { goto L_801B3CCC; } // 801B3CB4
  c->r[3]=0u+0x802D0000u; // 801B3CB8
  c->r[3]=c->r[3]+0x000023D8u; // 801B3CBC
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B3CC0
  c->r[0]=c->r[0]|0x00000010u; // 801B3CC4
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B3CC8
L_801B3CCC:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801B3CCC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B3CD0
  if (crb(c,2)) { goto L_801B3CEC; } // 801B3CD4
  c->r[3]=0u+0x802D0000u; // 801B3CD8
  c->r[3]=c->r[3]+0x000023D8u; // 801B3CDC
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B3CE0
  c->r[0]=c->r[0]|0x00000020u; // 801B3CE4
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B3CE8
L_801B3CEC:;
  c->r[4]=0u+0x802D0000u; // 801B3CEC
  c->r[4]=c->r[4]+0x000023D8u; // 801B3CF0
  c->r[3]=R16(c->r[4]+0x00000656u); // 801B3CF4
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801B3CF8
  if (crb(c,2)) { goto L_801B3D70; } // 801B3CFC
  c->r[5]=R8(c->r[31]+0x00000645u); // 801B3D00
  c->r[0]=0u+0x00000001u; // 801B3D04
  W8(c->r[4]+0x00001908u,c->r[0]); // 801B3D08
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 801B3D0C
  if (crb(c,2)) { goto L_801B3D28; } // 801B3D10
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801B3D14
  if (!crb(c,2)) { goto L_801B3D30; } // 801B3D18
  c->r[0]=c->r[3]|0x00000100u; // 801B3D1C
  W16(c->r[4]+0x00000656u,c->r[0]); // 801B3D20
  goto L_801B3D30; // 801B3D24
L_801B3D28:;
  c->r[0]=c->r[3]|0x00000140u; // 801B3D28
  W16(c->r[4]+0x00000656u,c->r[0]); // 801B3D2C
L_801B3D30:;
  c->r[3]=R8(c->r[31]+0x00000645u); // 801B3D30
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801B3D34
  if (crb(c,2)) { goto L_801B3D5C; } // 801B3D38
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801B3D3C
  if (!crb(c,2)) { goto L_801B3D70; } // 801B3D40
  c->r[3]=0u+0x802D0000u; // 801B3D44
  c->r[3]=c->r[3]+0x000023D8u; // 801B3D48
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B3D4C
  c->r[0]=c->r[0]|0x00000200u; // 801B3D50
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B3D54
  goto L_801B3D70; // 801B3D58
L_801B3D5C:;
  c->r[3]=0u+0x802D0000u; // 801B3D5C
  c->r[3]=c->r[3]+0x000023D8u; // 801B3D60
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B3D64
  c->r[0]=c->r[0]|0x00000280u; // 801B3D68
  W16(c->r[3]+0x00000656u,c->r[0]); // 801B3D6C
L_801B3D70:;
  c->r[4]=0u+0x802D0000u; // 801B3D70
  c->r[4]=c->r[4]+0x000023D8u; // 801B3D74
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B3D78
  cmpu(c,0,c->r[0],0x00000005u); // 801B3D7C
  if (crb(c,0)) { goto L_801B3D98; } // 801B3D80
  c->r[3]=0u+0x000D0000u; // 801B3D84
  c->r[5]=R16(c->r[4]+0x00000656u); // 801B3D88
  c->r[3]=c->r[3]+0x00000004u; // 801B3D8C
  c->r[4]=c->r[30]+0x00000070u; // 801B3D90
  c->lr=0x801B3D98u; f_801AA7E0(c); // 801B3D94
L_801B3D98:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801B3D98
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B3D9C
  if (crb(c,2)) { goto L_801B3DBC; } // 801B3DA0
  c->r[3]=0u+0x802D0000u; // 801B3DA4
  c->r[3]=c->r[3]+0x000023D8u; // 801B3DA8
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B3DAC
  c->r[0]=c->r[0]|0x00000001u; // 801B3DB0
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B3DB4
  goto L_801B3DD0; // 801B3DB8
L_801B3DBC:;
  c->r[3]=0u+0x802D0000u; // 801B3DBC
  c->r[3]=c->r[3]+0x000023D8u; // 801B3DC0
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B3DC4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 801B3DC8
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B3DCC
L_801B3DD0:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801B3DD0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B3DD4
  if (crb(c,2)) { goto L_801B3DF4; } // 801B3DD8
  c->r[3]=0u+0x802D0000u; // 801B3DDC
  c->r[3]=c->r[3]+0x000023D8u; // 801B3DE0
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B3DE4
  c->r[0]=c->r[0]|0x00000002u; // 801B3DE8
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B3DEC
  goto L_801B3E08; // 801B3DF0
L_801B3DF4:;
  c->r[3]=0u+0x802D0000u; // 801B3DF4
  c->r[3]=c->r[3]+0x000023D8u; // 801B3DF8
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B3DFC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801B3E00
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B3E04
L_801B3E08:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801B3E08
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B3E0C
  if (crb(c,2)) { goto L_801B3E2C; } // 801B3E10
  c->r[3]=0u+0x802D0000u; // 801B3E14
  c->r[3]=c->r[3]+0x000023D8u; // 801B3E18
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B3E1C
  c->r[0]=c->r[0]|0x00000004u; // 801B3E20
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B3E24
  goto L_801B3E40; // 801B3E28
L_801B3E2C:;
  c->r[3]=0u+0x802D0000u; // 801B3E2C
  c->r[3]=c->r[3]+0x000023D8u; // 801B3E30
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B3E34
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801B3E38
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B3E3C
L_801B3E40:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 801B3E40
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B3E44
  if (crb(c,2)) { goto L_801B3E64; } // 801B3E48
  c->r[3]=0u+0x802D0000u; // 801B3E4C
  c->r[3]=c->r[3]+0x000023D8u; // 801B3E50
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B3E54
  c->r[0]=c->r[0]|0x00000008u; // 801B3E58
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B3E5C
  goto L_801B3E78; // 801B3E60
L_801B3E64:;
  c->r[3]=0u+0x802D0000u; // 801B3E64
  c->r[3]=c->r[3]+0x000023D8u; // 801B3E68
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801B3E6C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801B3E70
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801B3E74
L_801B3E78:;
  c->lr=0x801B3E7Cu; f_801B9454(c); // 801B3E78
  c->r[4]=0u+0x802D0000u; // 801B3E7C
  c->r[4]=c->r[4]+0x000023D8u; // 801B3E80
  c->r[29]=R8(c->r[4]+0x000027BEu); // 801B3E84
  cmpu(c,0,c->r[29],0x000000FFu); // 801B3E88
  if (crb(c,2)) { goto L_801B3F38; } // 801B3E8C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B3E90
  c->r[3]=0u+0x000000FFu; // 801B3E94
  c->r[27]=R8(c->r[4]+0x000027BDu); // 801B3E98
  cmpu(c,0,c->r[0],0x00000003u); // 801B3E9C
  W8(c->r[4]+0x000027BEu,c->r[3]); // 801B3EA0
  W8(c->r[4]+0x000027BDu,c->r[3]); // 801B3EA4
  if (crb(c,0)) { goto L_801B3ECC; } // 801B3EA8
  c->r[3]=0u+0x000D0000u; // 801B3EAC
  c->r[5]=c->r[27]|c->r[27]; // 801B3EB0
  c->r[7]=c->r[29]|c->r[29]; // 801B3EB4
  c->r[4]=c->r[30]+0x00000000u; // 801B3EB8
  c->r[3]=c->r[3]+0x00000002u; // 801B3EBC
  c->r[6]=0u+0x000000FFu; // 801B3EC0
  c->r[8]=0u+0x000000FFu; // 801B3EC4
  c->lr=0x801B3ECCu; f_801AA840(c); // 801B3EC8
L_801B3ECC:;
  c->r[3]=0u+0x802D0000u; // 801B3ECC
  c->r[3]=c->r[3]+0x000023D8u; // 801B3ED0
  c->r[4]=R8(c->r[3]+0x00000645u); // 801B3ED4
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801B3ED8
  if (!crb(c,2)) { goto L_801B3EF4; } // 801B3EDC
  c->r[0]=R8(c->r[3]+0x00000644u); // 801B3EE0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B3EE4
  if (!crb(c,2)) { goto L_801B3EF4; } // 801B3EE8
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801B3EEC
  if (crb(c,2)) { goto L_801B3F38; } // 801B3EF0
L_801B3EF4:;
  c->r[3]=0u+0x802D0000u; // 801B3EF4
  c->r[3]=c->r[3]+0x000023D8u; // 801B3EF8
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801B3EFC
  cmpu(c,0,c->r[0],c->r[27]); // 801B3F00
  if (!crb(c,2)) { goto L_801B3F14; } // 801B3F04
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801B3F08
  cmpu(c,0,c->r[0],c->r[29]); // 801B3F0C
  if (crb(c,2)) { goto L_801B3F38; } // 801B3F10
L_801B3F14:;
  c->r[3]=c->r[27]|c->r[27]; // 801B3F14
  c->r[4]=c->r[29]|c->r[29]; // 801B3F18
  c->lr=0x801B3F20u; f_801BF854(c); // 801B3F1C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B3F20
  if (crb(c,2)) { goto L_801B3F38; } // 801B3F24
  c->r[3]=0u+0x802D0000u; // 801B3F28
  c->r[3]=c->r[3]+0x000023D8u; // 801B3F2C
  W8(c->r[3]+0x000027BDu,c->r[27]); // 801B3F30
  W8(c->r[3]+0x000027BEu,c->r[29]); // 801B3F34
L_801B3F38:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B3F38
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B3F3C
  if (crb(c,2)) { goto L_801B3F4C; } // 801B3F40
  c->r[3]=0u+0x00000001u; // 801B3F44
  c->lr=0x801B3F4Cu; f_801B4FD0(c); // 801B3F48
L_801B3F4C:;
  c->r[3]=0u+0x00000001u; // 801B3F4C
  c->lr=0x801B3F54u; f_801B4F20(c); // 801B3F50
  c->r[3]=0u+0x00000001u; // 801B3F54
  c->lr=0x801B3F5Cu; f_801B4E70(c); // 801B3F58
  c->r[3]=0u+0x802D0000u; // 801B3F5C
  c->r[3]=c->r[3]+0x000023D8u; // 801B3F60
  c->r[12]=R32(c->r[3]+0x00000568u); // 801B3F64
  cmps(c,0,(int32_t)c->r[12],0); // 801B3F68
  if (crb(c,2)) { goto L_801B3F7C; } // 801B3F6C
  c->r[3]=0u+0x00000000u; // 801B3F70
  c->ctr=c->r[12]; // 801B3F74
  if (true) { c->lr=0x801B3F7Cu; dispatch(c,c->ctr); } // 801B3F78
L_801B3F7C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B3F7C
  if (crb(c,2)) { goto L_801B3F94; } // 801B3F80
  c->r[12]=c->r[28]|c->r[28]; // 801B3F84
  c->r[3]=0u+0x00000000u; // 801B3F88
  c->ctr=c->r[12]; // 801B3F8C
  if (true) { c->lr=0x801B3F94u; dispatch(c,c->ctr); } // 801B3F90
L_801B3F94:;
  c->r[11]=c->r[1]+0x00000020u; // 801B3F94
  c->lr=0x801B3F9Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B3F98
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B3F9C
  c->lr=c->r[0]; // 801B3FA0
  c->r[1]=c->r[1]+0x00000020u; // 801B3FA4
  return; // 801B3FA8
}

// BTM_SetLocalDeviceName
void f_801B3FAC(Ctx* __restrict c) {
  trace_call(0x801B3FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B3FAC
  c->r[0]=c->lr; // 801B3FB0
  cmps(c,0,(int32_t)c->r[3],0); // 801B3FB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B3FB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B3FBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B3FC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B3FC4
  c->r[29]=c->r[3]|c->r[3]; // 801B3FC8
  if (!crb(c,2)) { goto L_801B3FD8; } // 801B3FCC
  c->r[3]=0u+0x00000005u; // 801B3FD0
  goto L_801B4048; // 801B3FD4
L_801B3FD8:;
  c->r[30]=0u+0x802D0000u; // 801B3FD8
  c->r[30]=c->r[30]+0x000023D8u; // 801B3FDC
  c->r[0]=R8(c->r[30]+0x0000064Eu); // 801B3FE0
  cmpu(c,0,c->r[0],0x00000001u); // 801B3FE4
  if (crb(c,1)) { goto L_801B3FF4; } // 801B3FE8
  c->r[3]=0u+0x0000000Cu; // 801B3FEC
  goto L_801B4048; // 801B3FF0
L_801B3FF4:;
  c->r[3]=0u+0x00000002u; // 801B3FF4
  c->lr=0x801B3FFCu; f_801A7C10(c); // 801B3FF8
  cmps(c,0,(int32_t)c->r[3],0); // 801B3FFC
  c->r[31]=c->r[3]|c->r[3]; // 801B4000
  if (crb(c,2)) { goto L_801B4044; } // 801B4004
  cmpu(c,0,c->r[30],c->r[29]); // 801B4008
  if (crb(c,2)) { goto L_801B4030; } // 801B400C
  c->r[3]=c->r[30]|c->r[30]; // 801B4010
  c->r[4]=0u+0x00000000u; // 801B4014
  c->r[5]=0u+0x00000020u; // 801B4018
  c->lr=0x801B4020u; f_800046B4(c); // 801B401C
  c->r[3]=c->r[30]|c->r[30]; // 801B4020
  c->r[4]=c->r[29]|c->r[29]; // 801B4024
  c->r[5]=0u+0x0000001Fu; // 801B4028
  c->lr=0x801B4030u; f_801DBA48(c); // 801B402C
L_801B4030:;
  c->r[3]=c->r[31]|c->r[31]; // 801B4030
  c->r[4]=c->r[30]|c->r[30]; // 801B4034
  c->lr=0x801B403Cu; f_801BF0BC(c); // 801B4038
  c->r[3]=0u+0x00000001u; // 801B403C
  goto L_801B4048; // 801B4040
L_801B4044:;
  c->r[3]=0u+0x00000003u; // 801B4044
L_801B4048:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4048
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B404C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4050
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B4054
  c->lr=c->r[0]; // 801B4058
  c->r[1]=c->r[1]+0x00000020u; // 801B405C
  return; // 801B4060
}

// btm_read_local_name_complete
void f_801B4064(Ctx* __restrict c) {
  trace_call(0x801B4064u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4064
  c->r[0]=c->lr; // 801B4068
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B406C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4070
  c->r[31]=0u+0x802D0000u; // 801B4074
  c->r[31]=c->r[31]+0x000023D8u; // 801B4078
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B407C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4080
  c->r[29]=c->r[3]|c->r[3]; // 801B4084
  c->r[3]=c->r[31]+0x00000590u; // 801B4088
  c->r[30]=R32(c->r[31]+0x000005A8u); // 801B408C
  c->lr=0x801B4094u; f_801AAE40(c); // 801B4090
  c->r[0]=0u+0x00000000u; // 801B4094
  cmps(c,0,(int32_t)c->r[30],0); // 801B4098
  W32(c->r[31]+0x000005A8u,c->r[0]); // 801B409C
  if (crb(c,2)) { goto L_801B40D4; } // 801B40A0
  c->r[0]=R8(c->r[29]+0x00000000u); // 801B40A4
  cmps(c,0,(int32_t)c->r[0],0); // 801B40A8
  if (!crb(c,2)) { goto L_801B40C4; } // 801B40AC
  c->r[12]=c->r[30]|c->r[30]; // 801B40B0
  c->r[3]=c->r[29]+0x00000001u; // 801B40B4
  c->ctr=c->r[12]; // 801B40B8
  if (true) { c->lr=0x801B40C0u; dispatch(c,c->ctr); } // 801B40BC
  goto L_801B40D4; // 801B40C0
L_801B40C4:;
  c->r[12]=c->r[30]|c->r[30]; // 801B40C4
  c->r[3]=0u+0x00000000u; // 801B40C8
  c->ctr=c->r[12]; // 801B40CC
  if (true) { c->lr=0x801B40D4u; dispatch(c,c->ctr); } // 801B40D0
L_801B40D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B40D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B40D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B40DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B40E0
  c->lr=c->r[0]; // 801B40E4
  c->r[1]=c->r[1]+0x00000020u; // 801B40E8
  return; // 801B40EC
}

// BTM_ReadLocalDeviceAddr
void f_801B40F0(Ctx* __restrict c) {
  trace_call(0x801B40F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B40F0
  c->r[0]=c->lr; // 801B40F4
  cmps(c,0,(int32_t)c->r[3],0); // 801B40F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B40FC
  if (crb(c,2)) { goto L_801B411C; } // 801B4100
  c->r[4]=0u+0x802D0000u; // 801B4104
  c->r[12]=c->r[3]|c->r[3]; // 801B4108
  c->r[4]=c->r[4]+0x000023D8u; // 801B410C
  c->r[3]=c->r[4]+0x00000630u; // 801B4110
  c->ctr=c->r[12]; // 801B4114
  if (true) { c->lr=0x801B411Cu; dispatch(c,c->ctr); } // 801B4118
L_801B411C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B411C
  c->r[3]=0u+0x00000000u; // 801B4120
  c->lr=c->r[0]; // 801B4124
  c->r[1]=c->r[1]+0x00000010u; // 801B4128
  return; // 801B412C
}

// btm_read_local_addr_complete
void f_801B4130(Ctx* __restrict c) {
  trace_call(0x801B4130u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B4130
  cmps(c,0,(int32_t)c->r[0],0); // 801B4134
  if (!crb(c,2)) return; // 801B4138
  c->r[4]=0u+0x802D0000u; // 801B413C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B4140
  c->r[4]=c->r[4]+0x000023D8u; // 801B4144
  W8(c->r[4]+0x00000635u,c->r[0]); // 801B4148
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B414C
  W8(c->r[4]+0x00000634u,c->r[0]); // 801B4150
  c->r[0]=R8(c->r[3]+0x00000003u); // 801B4154
  W8(c->r[4]+0x00000633u,c->r[0]); // 801B4158
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B415C
  W8(c->r[4]+0x00000632u,c->r[0]); // 801B4160
  c->r[0]=R8(c->r[3]+0x00000005u); // 801B4164
  W8(c->r[4]+0x00000631u,c->r[0]); // 801B4168
  c->r[0]=R8(c->r[3]+0x00000006u); // 801B416C
  W8(c->r[4]+0x00000630u,c->r[0]); // 801B4170
  return; // 801B4174
}

// BTM_ReadLocalVersion
void f_801B4178(Ctx* __restrict c) {
  trace_call(0x801B4178u);
  c->r[5]=0u+0x802D0000u; // 801B4178
  c->r[5]=c->r[5]+0x000023D8u; // 801B417C
  c->r[0]=R8(c->r[5]+0x0000064Eu); // 801B4180
  cmpu(c,0,c->r[0],0x00000004u); // 801B4184
  if (!crb(c,0)) { goto L_801B4194; } // 801B4188
  c->r[3]=0u+0x0000000Cu; // 801B418C
  return; // 801B4190
L_801B4194:;
  c->r[4]=R16(c->r[5]+0x00000636u); // 801B4194
  c->r[0]=R16(c->r[5]+0x00000638u); // 801B4198
  W16(c->r[3]+0x00000000u,c->r[4]); // 801B419C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801B41A0
  c->r[4]=R16(c->r[5]+0x0000063Au); // 801B41A4
  c->r[0]=R16(c->r[5]+0x0000063Cu); // 801B41A8
  W16(c->r[3]+0x00000004u,c->r[4]); // 801B41AC
  W16(c->r[3]+0x00000006u,c->r[0]); // 801B41B0
  c->r[0]=R16(c->r[5]+0x0000063Eu); // 801B41B4
  W16(c->r[3]+0x00000008u,c->r[0]); // 801B41B8
  c->r[3]=0u+0x00000000u; // 801B41BC
  return; // 801B41C0
}

// BTM_SetDeviceClass
void f_801B41C4(Ctx* __restrict c) {
  trace_call(0x801B41C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B41C4
  c->r[0]=c->lr; // 801B41C8
  c->r[5]=0u+0x00000003u; // 801B41CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B41D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B41D4
  c->r[31]=0u+0x802D0000u; // 801B41D8
  c->r[31]=c->r[31]+0x000023D8u; // 801B41DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B41E0
  c->r[30]=c->r[3]|c->r[3]; // 801B41E4
  c->r[4]=c->r[30]|c->r[30]; // 801B41E8
  c->r[3]=c->r[31]+0x00000648u; // 801B41EC
  c->lr=0x801B41F4u; f_80004364(c); // 801B41F0
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801B41F4
  cmpu(c,0,c->r[0],0x00000001u); // 801B41F8
  if (crb(c,1)) { goto L_801B4208; } // 801B41FC
  c->r[3]=0u+0x0000000Cu; // 801B4200
  goto L_801B422C; // 801B4204
L_801B4208:;
  c->r[3]=0u+0x00000002u; // 801B4208
  c->lr=0x801B4210u; f_801A7C10(c); // 801B420C
  cmps(c,0,(int32_t)c->r[3],0); // 801B4210
  if (crb(c,2)) { goto L_801B4228; } // 801B4214
  c->r[4]=c->r[30]|c->r[30]; // 801B4218
  c->lr=0x801B4220u; f_801BF3D4(c); // 801B421C
  c->r[3]=0u+0x00000000u; // 801B4220
  goto L_801B422C; // 801B4224
L_801B4228:;
  c->r[3]=0u+0x00000003u; // 801B4228
L_801B422C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B422C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4230
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4234
  c->lr=c->r[0]; // 801B4238
  c->r[1]=c->r[1]+0x00000010u; // 801B423C
  return; // 801B4240
}

// BTM_ReadDeviceClass
void f_801B4244(Ctx* __restrict c) {
  trace_call(0x801B4244u);
  c->r[3]=0u+0x802D0000u; // 801B4244
  c->r[3]=c->r[3]+0x000023D8u; // 801B4248
  c->r[3]=c->r[3]+0x00000648u; // 801B424C
  return; // 801B4250
}

// BTM_ReadLocalFeatures
void f_801B4254(Ctx* __restrict c) {
  trace_call(0x801B4254u);
  c->r[3]=0u+0x802D0000u; // 801B4254
  c->r[3]=c->r[3]+0x000023D8u; // 801B4258
  c->r[3]=c->r[3]+0x00000640u; // 801B425C
  return; // 801B4260
}

// BTM_RegisterForDeviceStatusNotif
void f_801B4264(Ctx* __restrict c) {
  trace_call(0x801B4264u);
  c->r[4]=0u+0x802D0000u; // 801B4264
  c->r[0]=c->r[3]|c->r[3]; // 801B4268
  c->r[4]=c->r[4]+0x000023D8u; // 801B426C
  c->r[3]=R32(c->r[4]+0x00000568u); // 801B4270
  W32(c->r[4]+0x00000568u,c->r[0]); // 801B4274
  return; // 801B4278
}

// BTM_VendorSpecificCommand
void f_801B427C(Ctx* __restrict c) {
  trace_call(0x801B427Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B427C
  c->r[0]=c->lr; // 801B4280
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4284
  c->r[11]=c->r[1]+0x00000020u; // 801B4288
  c->lr=0x801B4290u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B428C
  c->r[7]=0u+0x802D0000u; // 801B4290
  c->r[27]=c->r[3]|c->r[3]; // 801B4294
  c->r[7]=c->r[7]+0x000023D8u; // 801B4298
  c->r[28]=c->r[4]|c->r[4]; // 801B429C
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801B42A0
  c->r[29]=c->r[5]|c->r[5]; // 801B42A4
  c->r[30]=c->r[6]|c->r[6]; // 801B42A8
  cmpu(c,0,c->r[0],0x00000004u); // 801B42AC
  if (crb(c,0)) { goto L_801B42D0; } // 801B42B0
  c->r[3]=0u+0x000D0000u; // 801B42B4
  c->r[4]=0u+0x80240000u; // 801B42B8
  c->r[5]=c->r[27]|c->r[27]; // 801B42BC
  c->r[6]=c->r[28]|c->r[28]; // 801B42C0
  c->r[3]=c->r[3]+0x00000003u; // 801B42C4
  c->r[4]=c->r[4]+0x00005314u; // 801B42C8
  c->lr=0x801B42D0u; f_801AA800(c); // 801B42CC
L_801B42D0:;
  c->r[31]=0u+0x802D0000u; // 801B42D0
  c->r[31]=c->r[31]+0x000023D8u; // 801B42D4
  c->r[0]=R8(c->r[31]+0x00000650u); // 801B42D8
  cmps(c,0,(int32_t)c->r[0],0); // 801B42DC
  if (crb(c,2)) { goto L_801B430C; } // 801B42E0
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B42E4
  cmpu(c,0,c->r[0],0x00000004u); // 801B42E8
  if (crb(c,0)) { goto L_801B4304; } // 801B42EC
  c->r[3]=0u+0x000D0000u; // 801B42F0
  c->r[4]=0u+0x80240000u; // 801B42F4
  c->r[3]=c->r[3]+0x00000003u; // 801B42F8
  c->r[4]=c->r[4]+0x00005354u; // 801B42FC
  c->lr=0x801B4304u; f_801AA7C0(c); // 801B4300
L_801B4304:;
  c->r[3]=0u+0x00000002u; // 801B4304
  goto L_801B4360; // 801B4308
L_801B430C:;
  c->r[0]=c->r[28]+0x0000000Bu; // 801B430C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801B4310
  c->lr=0x801B4318u; f_801A7A70(c); // 801B4314
  cmps(c,0,(int32_t)c->r[3],0); // 801B4318
  if (crb(c,2)) { goto L_801B435C; } // 801B431C
  cmps(c,0,(int32_t)c->r[30],0); // 801B4320
  W32(c->r[31]+0x0000061Cu,c->r[30]); // 801B4324
  if (crb(c,2)) { goto L_801B4334; } // 801B4328
  c->r[0]=0u+0x00000001u; // 801B432C
  W8(c->r[31]+0x00000650u,c->r[0]); // 801B4330
L_801B4334:;
  c->r[4]=c->r[27]|c->r[27]; // 801B4334
  c->r[5]=c->r[28]|c->r[28]; // 801B4338
  c->r[6]=c->r[29]|c->r[29]; // 801B433C
  c->lr=0x801B4344u; f_801BFD04(c); // 801B4340
  cmps(c,0,(int32_t)c->r[30],0); // 801B4344
  if (crb(c,2)) { goto L_801B4354; } // 801B4348
  c->r[3]=0u+0x00000001u; // 801B434C
  goto L_801B4360; // 801B4350
L_801B4354:;
  c->r[3]=0u+0x00000000u; // 801B4354
  goto L_801B4360; // 801B4358
L_801B435C:;
  c->r[3]=0u+0x00000003u; // 801B435C
L_801B4360:;
  c->r[11]=c->r[1]+0x00000020u; // 801B4360
  c->lr=0x801B4368u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4364
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4368
  c->lr=c->r[0]; // 801B436C
  c->r[1]=c->r[1]+0x00000020u; // 801B4370
  return; // 801B4374
}

// btm_vsc_complete
void f_801B4378(Ctx* __restrict c) {
  trace_call(0x801B4378u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4378
  c->r[0]=c->lr; // 801B437C
  c->r[6]=0u+0x802D0000u; // 801B4380
  c->r[7]=c->r[3]|c->r[3]; // 801B4384
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B4388
  c->r[6]=c->r[6]+0x000023D8u; // 801B438C
  c->r[0]=0u+0x00000000u; // 801B4390
  c->r[3]=c->r[1]+0x0000000Cu; // 801B4394
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801B4398
  c->r[31]=R32(c->r[6]+0x0000061Cu); // 801B439C
  W8(c->r[6]+0x00000650u,c->r[0]); // 801B43A0
  cmps(c,0,(int32_t)c->r[31],0); // 801B43A4
  W32(c->r[6]+0x0000061Cu,c->r[0]); // 801B43A8
  if (crb(c,2)) { goto L_801B43D0; } // 801B43AC
  W16(c->r[1]+0x00000008u,c->r[4]); // 801B43B0
  c->r[4]=c->r[7]|c->r[7]; // 801B43B4
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801B43B8
  c->lr=0x801B43C0u; f_80004364(c); // 801B43BC
  c->r[12]=c->r[31]|c->r[31]; // 801B43C0
  c->r[3]=c->r[1]+0x00000008u; // 801B43C4
  c->ctr=c->r[12]; // 801B43C8
  if (true) { c->lr=0x801B43D0u; dispatch(c,c->ctr); } // 801B43CC
L_801B43D0:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B43D0
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801B43D4
  c->lr=c->r[0]; // 801B43D8
  c->r[1]=c->r[1]+0x00000120u; // 801B43DC
  return; // 801B43E0
}

// BTM_RegisterForVSEvents
void f_801B43E4(Ctx* __restrict c) {
  trace_call(0x801B43E4u);
  c->r[4]=0u+0x802D0000u; // 801B43E4
  c->r[4]=c->r[4]+0x000023D8u; // 801B43E8
  c->r[0]=R32(c->r[4]+0x0000056Cu); // 801B43EC
  cmps(c,0,(int32_t)c->r[0],0); // 801B43F0
  if (crb(c,2)) { goto L_801B4408; } // 801B43F4
  cmps(c,0,(int32_t)c->r[3],0); // 801B43F8
  if (crb(c,2)) { goto L_801B4408; } // 801B43FC
  c->r[3]=0u+0x00000002u; // 801B4400
  return; // 801B4404
L_801B4408:;
  c->r[4]=0u+0x802D0000u; // 801B4408
  c->r[4]=c->r[4]+0x000023D8u; // 801B440C
  W32(c->r[4]+0x0000056Cu,c->r[3]); // 801B4410
  c->r[3]=0u+0x00000000u; // 801B4414
  return; // 801B4418
}

// btm_vendor_specific_evt
void f_801B441C(Ctx* __restrict c) {
  trace_call(0x801B441Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B441C
  c->r[0]=c->lr; // 801B4420
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4424
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4428
  c->r[31]=0u+0x802D0000u; // 801B442C
  c->r[31]=c->r[31]+0x000023D8u; // 801B4430
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4434
  c->r[30]=c->r[4]|c->r[4]; // 801B4438
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B443C
  c->r[29]=c->r[3]|c->r[3]; // 801B4440
  c->r[0]=R16(c->r[31]+0x0000063Cu); // 801B4444
  cmpu(c,0,c->r[0],0x00000012u); // 801B4448
  if (crb(c,2)) { goto L_801B4470; } // 801B444C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B4450
  cmpu(c,0,c->r[0],0x00000004u); // 801B4454
  if (crb(c,0)) { goto L_801B4470; } // 801B4458
  c->r[3]=0u+0x000D0000u; // 801B445C
  c->r[4]=0u+0x80240000u; // 801B4460
  c->r[3]=c->r[3]+0x00000003u; // 801B4464
  c->r[4]=c->r[4]+0x00005398u; // 801B4468
  c->lr=0x801B4470u; f_801AA7C0(c); // 801B446C
L_801B4470:;
  c->r[12]=R32(c->r[31]+0x0000056Cu); // 801B4470
  c->r[0]=0u+0x00000000u; // 801B4474
  W32(c->r[31]+0x0000061Cu,c->r[0]); // 801B4478
  cmps(c,0,(int32_t)c->r[12],0); // 801B447C
  W8(c->r[31]+0x00000650u,c->r[0]); // 801B4480
  if (crb(c,2)) { goto L_801B4498; } // 801B4484
  c->r[3]=c->r[30]|c->r[30]; // 801B4488
  c->r[4]=c->r[29]|c->r[29]; // 801B448C
  c->ctr=c->r[12]; // 801B4490
  if (true) { c->lr=0x801B4498u; dispatch(c,c->ctr); } // 801B4494
L_801B4498:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4498
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B449C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B44A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B44A4
  c->lr=c->r[0]; // 801B44A8
  c->r[1]=c->r[1]+0x00000020u; // 801B44AC
  return; // 801B44B0
}

// BTM_WritePageTimeout
void f_801B44B4(Ctx* __restrict c) {
  trace_call(0x801B44B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B44B4
  c->r[0]=c->lr; // 801B44B8
  c->r[4]=0u+0x802D0000u; // 801B44BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B44C0
  c->r[4]=c->r[4]+0x000023D8u; // 801B44C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B44C8
  c->r[31]=c->r[3]|c->r[3]; // 801B44CC
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B44D0
  cmpu(c,0,c->r[0],0x00000004u); // 801B44D4
  if (crb(c,0)) { goto L_801B44F4; } // 801B44D8
  c->r[3]=0u+0x000D0000u; // 801B44DC
  c->r[4]=0u+0x80240000u; // 801B44E0
  c->r[5]=c->r[31]|c->r[31]; // 801B44E4
  c->r[3]=c->r[3]+0x00000003u; // 801B44E8
  c->r[4]=c->r[4]+0x000053D8u; // 801B44EC
  c->lr=0x801B44F4u; f_801AA7E0(c); // 801B44F0
L_801B44F4:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)625); // 801B44F4
  c->r[3]=0u+0x10620000u; // 801B44F8
  c->r[4]=0u+0x802D0000u; // 801B44FC
  c->r[3]=c->r[3]+0x00004DD3u; // 801B4500
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801B4504
  c->r[4]=c->r[4]+0x000023D8u; // 801B4508
  c->r[3]=0u+0x00000002u; // 801B450C
  c->r[0]=sraw(c,c->r[0],6); // 801B4510
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801B4514
  c->r[0]=c->r[0]+c->r[5]; // 801B4518
  W16(c->r[4]+0x0000064Cu,c->r[0]); // 801B451C
  c->lr=0x801B4524u; f_801A7C10(c); // 801B4520
  cmps(c,0,(int32_t)c->r[3],0); // 801B4524
  if (crb(c,2)) { goto L_801B453C; } // 801B4528
  c->r[4]=c->r[31]|c->r[31]; // 801B452C
  c->lr=0x801B4534u; f_801BF1FC(c); // 801B4530
  c->r[3]=0u+0x00000000u; // 801B4534
  goto L_801B4540; // 801B4538
L_801B453C:;
  c->r[3]=0u+0x00000003u; // 801B453C
L_801B4540:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4544
  c->lr=c->r[0]; // 801B4548
  c->r[1]=c->r[1]+0x00000010u; // 801B454C
  return; // 801B4550
}

// BTM_ReadStoredLinkKey
void f_801B4554(Ctx* __restrict c) {
  trace_call(0x801B4554u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4554
  c->r[0]=c->lr; // 801B4558
  c->r[5]=0u+0x802D0000u; // 801B455C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4560
  c->r[5]=c->r[5]+0x000023D8u; // 801B4564
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4568
  c->r[31]=0u+0x00000000u; // 801B456C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4570
  c->r[30]=c->r[4]|c->r[4]; // 801B4574
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4578
  c->r[29]=c->r[3]|c->r[3]; // 801B457C
  c->r[0]=R32(c->r[5]+0x00000570u); // 801B4580
  cmps(c,0,(int32_t)c->r[0],0); // 801B4584
  if (crb(c,2)) { goto L_801B4594; } // 801B4588
  c->r[3]=0u+0x00000002u; // 801B458C
  goto L_801B4610; // 801B4590
L_801B4594:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B4594
  if (!crb(c,2)) { goto L_801B45A4; } // 801B4598
  c->r[31]=0u+0x00000001u; // 801B459C
  c->r[29]=c->r[1]+0x00000008u; // 801B45A0
L_801B45A4:;
  c->r[3]=0u+0x802D0000u; // 801B45A4
  c->r[3]=c->r[3]+0x000023D8u; // 801B45A8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B45AC
  cmpu(c,0,c->r[0],0x00000004u); // 801B45B0
  if (crb(c,0)) { goto L_801B45DC; } // 801B45B4
  cmps(c,0,(int32_t)c->r[31],0); // 801B45B8
  c->r[3]=0u+0x000D0000u; // 801B45BC
  c->r[4]=0u+0x80240000u; // 801B45C0
  c->r[5]=c->r[13]+0xFFFFACC4u; // 801B45C4
  c->r[3]=c->r[3]+0x00000003u; // 801B45C8
  c->r[4]=c->r[4]+0x00005448u; // 801B45CC
  if (crb(c,2)) { goto L_801B45D8; } // 801B45D0
  c->r[5]=c->r[13]+0xFFFFACBCu; // 801B45D4
L_801B45D8:;
  c->lr=0x801B45DCu; f_801AA7E0(c); // 801B45D8
L_801B45DC:;
  c->r[3]=0u+0x00000002u; // 801B45DC
  c->lr=0x801B45E4u; f_801A7C10(c); // 801B45E0
  cmps(c,0,(int32_t)c->r[3],0); // 801B45E4
  if (crb(c,2)) { goto L_801B460C; } // 801B45E8
  c->r[6]=0u+0x802D0000u; // 801B45EC
  c->r[4]=c->r[29]|c->r[29]; // 801B45F0
  c->r[6]=c->r[6]+0x000023D8u; // 801B45F4
  c->r[5]=c->r[31]|c->r[31]; // 801B45F8
  W32(c->r[6]+0x00000570u,c->r[30]); // 801B45FC
  c->lr=0x801B4604u; f_801BEDEC(c); // 801B4600
  c->r[3]=0u+0x00000000u; // 801B4604
  goto L_801B4610; // 801B4608
L_801B460C:;
  c->r[3]=0u+0x00000003u; // 801B460C
L_801B4610:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4610
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B4614
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B4618
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B461C
  c->lr=c->r[0]; // 801B4620
  c->r[1]=c->r[1]+0x00000020u; // 801B4624
  return; // 801B4628
}

// BTM_WriteStoredLinkKey
void f_801B462C(Ctx* __restrict c) {
  trace_call(0x801B462Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B462C
  c->r[0]=c->lr; // 801B4630
  c->r[7]=0u+0x802D0000u; // 801B4634
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4638
  c->r[7]=c->r[7]+0x000023D8u; // 801B463C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4640
  c->r[31]=c->r[6]|c->r[6]; // 801B4644
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4648
  c->r[30]=c->r[5]|c->r[5]; // 801B464C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4650
  c->r[29]=c->r[4]|c->r[4]; // 801B4654
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B4658
  c->r[28]=c->r[3]|c->r[3]; // 801B465C
  c->r[0]=R32(c->r[7]+0x00000570u); // 801B4660
  cmps(c,0,(int32_t)c->r[0],0); // 801B4664
  if (crb(c,2)) { goto L_801B4674; } // 801B4668
  c->r[3]=0u+0x00000002u; // 801B466C
  goto L_801B46DC; // 801B4670
L_801B4674:;
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801B4674
  cmpu(c,0,c->r[0],0x00000004u); // 801B4678
  if (crb(c,0)) { goto L_801B4698; } // 801B467C
  c->r[3]=0u+0x000D0000u; // 801B4680
  c->r[4]=0u+0x80240000u; // 801B4684
  c->r[5]=c->r[28]|c->r[28]; // 801B4688
  c->r[3]=c->r[3]+0x00000003u; // 801B468C
  c->r[4]=c->r[4]+0x00005474u; // 801B4690
  c->lr=0x801B4698u; f_801AA7E0(c); // 801B4694
L_801B4698:;
  cmpu(c,0,c->r[28],0x0000000Bu); // 801B4698
  if (!crb(c,1)) { goto L_801B46A4; } // 801B469C
  c->r[28]=0u+0x0000000Bu; // 801B46A0
L_801B46A4:;
  c->r[3]=0u+0x00000002u; // 801B46A4
  c->lr=0x801B46ACu; f_801A7C10(c); // 801B46A8
  cmps(c,0,(int32_t)c->r[3],0); // 801B46AC
  if (crb(c,2)) { goto L_801B46D8; } // 801B46B0
  c->r[6]=0u+0x802D0000u; // 801B46B4
  c->r[4]=c->r[28]|c->r[28]; // 801B46B8
  c->r[6]=c->r[6]+0x000023D8u; // 801B46BC
  c->r[5]=c->r[29]|c->r[29]; // 801B46C0
  W32(c->r[6]+0x00000570u,c->r[31]); // 801B46C4
  c->r[6]=c->r[30]|c->r[30]; // 801B46C8
  c->lr=0x801B46D0u; f_801BEE4C(c); // 801B46CC
  c->r[3]=0u+0x00000000u; // 801B46D0
  goto L_801B46DC; // 801B46D4
L_801B46D8:;
  c->r[3]=0u+0x00000003u; // 801B46D8
L_801B46DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B46DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B46E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B46E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B46E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B46EC
  c->lr=c->r[0]; // 801B46F0
  c->r[1]=c->r[1]+0x00000020u; // 801B46F4
  return; // 801B46F8
}

// BTM_DeleteStoredLinkKey
void f_801B46FC(Ctx* __restrict c) {
  trace_call(0x801B46FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B46FC
  c->r[0]=c->lr; // 801B4700
  c->r[5]=0u+0x802D0000u; // 801B4704
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4708
  c->r[5]=c->r[5]+0x000023D8u; // 801B470C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B4710
  c->r[31]=0u+0x00000000u; // 801B4714
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B4718
  c->r[30]=c->r[4]|c->r[4]; // 801B471C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B4720
  c->r[29]=c->r[3]|c->r[3]; // 801B4724
  c->r[0]=R32(c->r[5]+0x00000570u); // 801B4728
  cmps(c,0,(int32_t)c->r[0],0); // 801B472C
  if (crb(c,2)) { goto L_801B473C; } // 801B4730
  c->r[3]=0u+0x00000002u; // 801B4734
  goto L_801B47B0; // 801B4738
L_801B473C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B473C
  if (!crb(c,2)) { goto L_801B474C; } // 801B4740
  c->r[31]=0u+0x00000001u; // 801B4744
  c->r[29]=c->r[1]+0x00000008u; // 801B4748
L_801B474C:;
  c->r[3]=0u+0x802D0000u; // 801B474C
  c->r[3]=c->r[3]+0x000023D8u; // 801B4750
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B4754
  cmpu(c,0,c->r[0],0x00000004u); // 801B4758
  if (crb(c,0)) { goto L_801B4784; } // 801B475C
  cmps(c,0,(int32_t)c->r[31],0); // 801B4760
  c->r[3]=0u+0x000D0000u; // 801B4764
  c->r[4]=0u+0x80240000u; // 801B4768
  c->r[5]=c->r[13]+0xFFFFACC4u; // 801B476C
  c->r[3]=c->r[3]+0x00000003u; // 801B4770
  c->r[4]=c->r[4]+0x000054A0u; // 801B4774
  if (crb(c,2)) { goto L_801B4780; } // 801B4778
  c->r[5]=c->r[13]+0xFFFFACBCu; // 801B477C
L_801B4780:;
  c->lr=0x801B4784u; f_801AA7E0(c); // 801B4780
L_801B4784:;
  c->r[5]=0u+0x802D0000u; // 801B4784
  c->r[3]=c->r[29]|c->r[29]; // 801B4788
  c->r[5]=c->r[5]+0x000023D8u; // 801B478C
  c->r[4]=c->r[31]|c->r[31]; // 801B4790
  W32(c->r[5]+0x00000570u,c->r[30]); // 801B4794
  c->lr=0x801B479Cu; f_801BF00C(c); // 801B4798
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B479C
  if (!crb(c,2)) { goto L_801B47AC; } // 801B47A0
  c->r[3]=0u+0x00000003u; // 801B47A4
  goto L_801B47B0; // 801B47A8
L_801B47AC:;
  c->r[3]=0u+0x00000000u; // 801B47AC
L_801B47B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B47B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B47B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B47B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B47BC
  c->lr=c->r[0]; // 801B47C0
  c->r[1]=c->r[1]+0x00000020u; // 801B47C4
  return; // 801B47C8
}

// btm_read_stored_link_key_complete
void f_801B47CC(Ctx* __restrict c) {
  trace_call(0x801B47CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B47CC
  c->r[0]=c->lr; // 801B47D0
  c->r[4]=0u+0x802D0000u; // 801B47D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B47D8
  c->r[4]=c->r[4]+0x000023D8u; // 801B47DC
  c->r[0]=0u+0x00000000u; // 801B47E0
  c->r[12]=R32(c->r[4]+0x00000570u); // 801B47E4
  cmps(c,0,(int32_t)c->r[12],0); // 801B47E8
  W32(c->r[4]+0x00000570u,c->r[0]); // 801B47EC
  if (crb(c,2)) { goto L_801B4838; } // 801B47F0
  c->r[0]=0u+0x00000002u; // 801B47F4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B47F8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B47FC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B4800
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B4804
  c->r[4]=R8(c->r[3]+0x00000001u); // 801B4808
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B480C
  c->r[0]=c->r[4]+c->r[0]; // 801B4810
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801B4814
  c->r[0]=R8(c->r[3]+0x00000004u); // 801B4818
  c->r[4]=R8(c->r[3]+0x00000003u); // 801B481C
  c->r[3]=c->r[1]+0x00000008u; // 801B4820
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B4824
  c->r[0]=c->r[4]+c->r[0]; // 801B4828
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B482C
  c->ctr=c->r[12]; // 801B4830
  if (true) { c->lr=0x801B4838u; dispatch(c,c->ctr); } // 801B4834
L_801B4838:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4838
  c->lr=c->r[0]; // 801B483C
  c->r[1]=c->r[1]+0x00000010u; // 801B4840
  return; // 801B4844
}

// btm_write_stored_link_key_complete
void f_801B4848(Ctx* __restrict c) {
  trace_call(0x801B4848u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4848
  c->r[0]=c->lr; // 801B484C
  c->r[4]=0u+0x802D0000u; // 801B4850
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4854
  c->r[4]=c->r[4]+0x000023D8u; // 801B4858
  c->r[0]=0u+0x00000000u; // 801B485C
  c->r[12]=R32(c->r[4]+0x00000570u); // 801B4860
  cmps(c,0,(int32_t)c->r[12],0); // 801B4864
  W32(c->r[4]+0x00000570u,c->r[0]); // 801B4868
  if (crb(c,2)) { goto L_801B4894; } // 801B486C
  c->r[0]=0u+0x00000003u; // 801B4870
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B4874
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B4878
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B487C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B4880
  c->r[3]=c->r[1]+0x00000008u; // 801B4884
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801B4888
  c->ctr=c->r[12]; // 801B488C
  if (true) { c->lr=0x801B4894u; dispatch(c,c->ctr); } // 801B4890
L_801B4894:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4894
  c->lr=c->r[0]; // 801B4898
  c->r[1]=c->r[1]+0x00000010u; // 801B489C
  return; // 801B48A0
}

// btm_delete_stored_link_key_complete
void f_801B48A4(Ctx* __restrict c) {
  trace_call(0x801B48A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B48A4
  c->r[0]=c->lr; // 801B48A8
  c->r[4]=0u+0x802D0000u; // 801B48AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B48B0
  c->r[4]=c->r[4]+0x000023D8u; // 801B48B4
  c->r[0]=0u+0x00000000u; // 801B48B8
  c->r[12]=R32(c->r[4]+0x00000570u); // 801B48BC
  cmps(c,0,(int32_t)c->r[12],0); // 801B48C0
  W32(c->r[4]+0x00000570u,c->r[0]); // 801B48C4
  if (crb(c,2)) { goto L_801B48FC; } // 801B48C8
  c->r[0]=0u+0x00000004u; // 801B48CC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B48D0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801B48D4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B48D8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801B48DC
  c->r[4]=R8(c->r[3]+0x00000001u); // 801B48E0
  c->r[3]=c->r[1]+0x00000008u; // 801B48E4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B48E8
  c->r[0]=c->r[4]+c->r[0]; // 801B48EC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801B48F0
  c->ctr=c->r[12]; // 801B48F4
  if (true) { c->lr=0x801B48FCu; dispatch(c,c->ctr); } // 801B48F8
L_801B48FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B48FC
  c->lr=c->r[0]; // 801B4900
  c->r[1]=c->r[1]+0x00000010u; // 801B4904
  return; // 801B4908
}

// btm_return_link_keys_evt
void f_801B490C(Ctx* __restrict c) {
  trace_call(0x801B490Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B490C
  c->r[0]=c->lr; // 801B4910
  c->r[4]=0u+0x802D0000u; // 801B4914
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B4918
  c->r[4]=c->r[4]+0x000023D8u; // 801B491C
  c->r[12]=R32(c->r[4]+0x00000570u); // 801B4920
  cmps(c,0,(int32_t)c->r[12],0); // 801B4924
  if (crb(c,2)) { goto L_801B4A88; } // 801B4928
  c->r[5]=c->r[3]+0x00000002u; // 801B492C
  c->r[4]=0u+0x00000000u; // 801B4930
  goto L_801B4A70; // 801B4934
L_801B4938:;
  c->r[11]=R8(c->r[5]+0x00000000u); // 801B4938
  c->r[4]=c->r[4]+0x00000001u; // 801B493C
  c->r[10]=R8(c->r[5]+0x00000001u); // 801B4940
  c->r[9]=R8(c->r[5]+0x00000002u); // 801B4944
  c->r[8]=R8(c->r[5]+0x00000003u); // 801B4948
  c->r[7]=R8(c->r[5]+0x00000004u); // 801B494C
  c->r[6]=R8(c->r[5]+0x00000005u); // 801B4950
  c->r[0]=R8(c->r[5]+0x00000006u); // 801B4954
  W8(c->r[1]+0x00000017u,c->r[0]); // 801B4958
  c->r[0]=R8(c->r[5]+0x00000007u); // 801B495C
  W8(c->r[1]+0x00000016u,c->r[0]); // 801B4960
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B4964
  W8(c->r[1]+0x00000015u,c->r[0]); // 801B4968
  c->r[0]=R8(c->r[5]+0x00000009u); // 801B496C
  W8(c->r[1]+0x00000014u,c->r[0]); // 801B4970
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801B4974
  W8(c->r[1]+0x00000013u,c->r[0]); // 801B4978
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 801B497C
  W8(c->r[1]+0x00000012u,c->r[0]); // 801B4980
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 801B4984
  W8(c->r[1]+0x00000011u,c->r[0]); // 801B4988
  c->r[0]=R8(c->r[5]+0x0000000Du); // 801B498C
  W8(c->r[1]+0x00000010u,c->r[0]); // 801B4990
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801B4994
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B4998
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 801B499C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B49A0
  c->r[0]=R8(c->r[5]+0x00000010u); // 801B49A4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801B49A8
  c->r[0]=R8(c->r[5]+0x00000011u); // 801B49AC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B49B0
  c->r[0]=R8(c->r[5]+0x00000012u); // 801B49B4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801B49B8
  c->r[0]=R8(c->r[5]+0x00000013u); // 801B49BC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801B49C0
  c->r[0]=R8(c->r[5]+0x00000014u); // 801B49C4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B49C8
  c->r[0]=R8(c->r[5]+0x00000015u); // 801B49CC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B49D0
  W8(c->r[5]+0x00000000u,c->r[6]); // 801B49D4
  W8(c->r[5]+0x00000001u,c->r[7]); // 801B49D8
  W8(c->r[5]+0x00000002u,c->r[8]); // 801B49DC
  W8(c->r[5]+0x00000003u,c->r[9]); // 801B49E0
  W8(c->r[5]+0x00000004u,c->r[10]); // 801B49E4
  W8(c->r[5]+0x00000005u,c->r[11]); // 801B49E8
  c->r[0]=R8(c->r[1]+0x00000008u); // 801B49EC
  W8(c->r[5]+0x00000006u,c->r[0]); // 801B49F0
  c->r[0]=R8(c->r[1]+0x00000009u); // 801B49F4
  W8(c->r[5]+0x00000007u,c->r[0]); // 801B49F8
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801B49FC
  W8(c->r[5]+0x00000008u,c->r[0]); // 801B4A00
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801B4A04
  W8(c->r[5]+0x00000009u,c->r[0]); // 801B4A08
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801B4A0C
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801B4A10
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801B4A14
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 801B4A18
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801B4A1C
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801B4A20
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801B4A24
  W8(c->r[5]+0x0000000Du,c->r[0]); // 801B4A28
  c->r[0]=R8(c->r[1]+0x00000010u); // 801B4A2C
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 801B4A30
  c->r[0]=R8(c->r[1]+0x00000011u); // 801B4A34
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 801B4A38
  c->r[0]=R8(c->r[1]+0x00000012u); // 801B4A3C
  W8(c->r[5]+0x00000010u,c->r[0]); // 801B4A40
  c->r[0]=R8(c->r[1]+0x00000013u); // 801B4A44
  W8(c->r[5]+0x00000011u,c->r[0]); // 801B4A48
  c->r[0]=R8(c->r[1]+0x00000014u); // 801B4A4C
  W8(c->r[5]+0x00000012u,c->r[0]); // 801B4A50
  c->r[0]=R8(c->r[1]+0x00000015u); // 801B4A54
  W8(c->r[5]+0x00000013u,c->r[0]); // 801B4A58
  c->r[0]=R8(c->r[1]+0x00000016u); // 801B4A5C
  W8(c->r[5]+0x00000014u,c->r[0]); // 801B4A60
  c->r[0]=R8(c->r[1]+0x00000017u); // 801B4A64
  W8(c->r[5]+0x00000015u,c->r[0]); // 801B4A68
  c->r[5]=c->r[5]+0x00000016u; // 801B4A6C
L_801B4A70:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 801B4A70
  c->r[6]=rotl(c->r[4],0)&0x000000FFu; // 801B4A74
  cmpu(c,0,c->r[6],c->r[0]); // 801B4A78
  if (crb(c,0)) { IRQCHK(c); goto L_801B4938; } // 801B4A7C
  c->ctr=c->r[12]; // 801B4A80
  if (true) { c->lr=0x801B4A88u; dispatch(c,c->ctr); } // 801B4A84
L_801B4A88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B4A88
  c->lr=c->r[0]; // 801B4A8C
  c->r[1]=c->r[1]+0x00000020u; // 801B4A90
  return; // 801B4A94
}

// btm_report_device_status
void f_801B4A98(Ctx* __restrict c) {
  trace_call(0x801B4A98u);
  c->r[4]=0u+0x802D0000u; // 801B4A98
  c->r[4]=c->r[4]+0x000023D8u; // 801B4A9C
  c->r[12]=R32(c->r[4]+0x00000568u); // 801B4AA0
  cmps(c,0,(int32_t)c->r[12],0); // 801B4AA4
  if (crb(c,2)) return; // 801B4AA8
  c->ctr=c->r[12]; // 801B4AAC
  if (true) { dispatch(c,c->ctr); return; } // 801B4AB0
  return; // 801B4AB4
}

// btm_discovery_db_init
void f_801B4AB8(Ctx* __restrict c) {
  trace_call(0x801B4AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4AB8
  c->r[0]=c->lr; // 801B4ABC
  c->r[4]=0u+0x00000000u; // 801B4AC0
  c->r[5]=0u+0x00001020u; // 801B4AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4ACC
  c->r[31]=0u+0x802D0000u; // 801B4AD0
  c->r[31]=c->r[31]+0x000023D8u; // 801B4AD4
  c->r[0]=c->r[31]+0x000006D4u; // 801B4AD8
  W32(c->r[31]+0x00001678u,c->r[0]); // 801B4ADC
  c->r[3]=c->r[31]+0x00000658u; // 801B4AE0
  c->lr=0x801B4AE8u; f_800046B4(c); // 801B4AE4
  c->r[3]=0u+0x00000001u; // 801B4AE8
  c->r[4]=0u+0x00000002u; // 801B4AEC
  c->r[0]=0u+0x00001002u; // 801B4AF0
  W16(c->r[31]+0x00000670u,c->r[3]); // 801B4AF4
  c->r[3]=R32(c->r[31]+0x00001678u); // 801B4AF8
  c->r[6]=c->r[31]+0x00000674u; // 801B4AFC
  W16(c->r[31]+0x00000674u,c->r[4]); // 801B4B00
  c->r[4]=0u+0x00000FA0u; // 801B4B04
  c->r[5]=0u+0x00000001u; // 801B4B08
  c->r[7]=0u+0x00000000u; // 801B4B0C
  W16(c->r[31]+0x00000678u,c->r[0]); // 801B4B10
  c->r[8]=0u+0x00000000u; // 801B4B14
  c->lr=0x801B4B1Cu; f_801CF6DC(c); // 801B4B18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4B1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4B20
  c->lr=c->r[0]; // 801B4B24
  c->r[1]=c->r[1]+0x00000010u; // 801B4B28
  return; // 801B4B2C
}

// btm_discovery_db_reset
void f_801B4B30(Ctx* __restrict c) {
  trace_call(0x801B4B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4B30
  c->r[0]=c->lr; // 801B4B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4B3C
  c->r[31]=0u+0x802D0000u; // 801B4B40
  c->r[31]=c->r[31]+0x000023D8u; // 801B4B44
  c->r[3]=c->r[31]+0x00000658u; // 801B4B48
  c->lr=0x801B4B50u; f_801AAE40(c); // 801B4B4C
  c->r[0]=R8(c->r[31]+0x00001674u); // 801B4B50
  cmps(c,0,(int32_t)c->r[0],0); // 801B4B54
  if (crb(c,2)) { goto L_801B4B80; } // 801B4B58
  c->r[12]=R32(c->r[31]+0x000006D0u); // 801B4B5C
  c->r[0]=0u+0x00000000u; // 801B4B60
  W8(c->r[31]+0x00001674u,c->r[0]); // 801B4B64
  cmps(c,0,(int32_t)c->r[12],0); // 801B4B68
  W32(c->r[31]+0x000006D0u,c->r[0]); // 801B4B6C
  if (crb(c,2)) { goto L_801B4B80; } // 801B4B70
  c->r[3]=0u+0x00000000u; // 801B4B74
  c->ctr=c->r[12]; // 801B4B78
  if (true) { c->lr=0x801B4B80u; dispatch(c,c->ctr); } // 801B4B7C
L_801B4B80:;
  c->r[31]=0u+0x802D0000u; // 801B4B80
  c->r[4]=0u+0x00000000u; // 801B4B84
  c->r[31]=c->r[31]+0x000023D8u; // 801B4B88
  c->r[5]=0u+0x00001020u; // 801B4B8C
  c->r[0]=c->r[31]+0x000006D4u; // 801B4B90
  W32(c->r[31]+0x00001678u,c->r[0]); // 801B4B94
  c->r[3]=c->r[31]+0x00000658u; // 801B4B98
  c->lr=0x801B4BA0u; f_800046B4(c); // 801B4B9C
  c->r[3]=0u+0x00000001u; // 801B4BA0
  c->r[4]=0u+0x00000002u; // 801B4BA4
  c->r[0]=0u+0x00001002u; // 801B4BA8
  W16(c->r[31]+0x00000670u,c->r[3]); // 801B4BAC
  c->r[3]=R32(c->r[31]+0x00001678u); // 801B4BB0
  c->r[6]=c->r[31]+0x00000674u; // 801B4BB4
  W16(c->r[31]+0x00000674u,c->r[4]); // 801B4BB8
  c->r[4]=0u+0x00000FA0u; // 801B4BBC
  c->r[5]=0u+0x00000001u; // 801B4BC0
  c->r[7]=0u+0x00000000u; // 801B4BC4
  W16(c->r[31]+0x00000678u,c->r[0]); // 801B4BC8
  c->r[8]=0u+0x00000000u; // 801B4BCC
  c->lr=0x801B4BD4u; f_801CF6DC(c); // 801B4BD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4BD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4BD8
  c->lr=c->r[0]; // 801B4BDC
  c->r[1]=c->r[1]+0x00000010u; // 801B4BE0
  return; // 801B4BE4
}

// btm_discovery_timeout
void f_801B4BE8(Ctx* __restrict c) {
  trace_call(0x801B4BE8u);
  return; // 801B4BE8
}

// BTM_SetDiscoverability
void f_801B4BEC(Ctx* __restrict c) {
  trace_call(0x801B4BECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4BEC
  c->r[0]=c->lr; // 801B4BF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B4BF4
  c->r[11]=c->r[1]+0x00000030u; // 801B4BF8
  c->lr=0x801B4C00u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B4BFC
  cmps(c,0,(int32_t)c->r[3],0); // 801B4C00
  c->r[31]=c->r[3]|c->r[3]; // 801B4C04
  c->r[27]=c->r[4]|c->r[4]; // 801B4C08
  c->r[28]=c->r[5]|c->r[5]; // 801B4C0C
  c->r[30]=0u+0x00000000u; // 801B4C10
  if (crb(c,2)) { goto L_801B4C30; } // 801B4C14
  cmpu(c,0,c->r[3],0x00000001u); // 801B4C18
  if (crb(c,2)) { goto L_801B4C30; } // 801B4C1C
  cmpu(c,0,c->r[3],0x00000002u); // 801B4C20
  if (crb(c,2)) { goto L_801B4C30; } // 801B4C24
  c->r[3]=0u+0x00000005u; // 801B4C28
  goto L_801B4E58; // 801B4C2C
L_801B4C30:;
  c->r[3]=0u+0x802D0000u; // 801B4C30
  c->r[3]=c->r[3]+0x000023D8u; // 801B4C34
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801B4C38
  cmpu(c,0,c->r[0],0x00000003u); // 801B4C3C
  if (!crb(c,0)) { goto L_801B4C4C; } // 801B4C40
  c->r[3]=0u+0x0000000Cu; // 801B4C44
  goto L_801B4E58; // 801B4C48
L_801B4C4C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B4C4C
  if (!crb(c,2)) { goto L_801B4C58; } // 801B4C50
  c->r[27]=0u+0x00000012u; // 801B4C54
L_801B4C58:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B4C58
  if (!crb(c,2)) { goto L_801B4C64; } // 801B4C5C
  c->r[28]=0u+0x00000800u; // 801B4C60
L_801B4C64:;
  c->r[3]=0u+0x802D0000u; // 801B4C64
  c->r[3]=c->r[3]+0x000023D8u; // 801B4C68
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B4C6C
  cmpu(c,0,c->r[0],0x00000003u); // 801B4C70
  if (crb(c,0)) { goto L_801B4C98; } // 801B4C74
  c->r[3]=0u+0x000D0000u; // 801B4C78
  c->r[4]=0u+0x80240000u; // 801B4C7C
  c->r[5]=c->r[31]|c->r[31]; // 801B4C80
  c->r[6]=c->r[27]|c->r[27]; // 801B4C84
  c->r[7]=c->r[28]|c->r[28]; // 801B4C88
  c->r[3]=c->r[3]+0x00000002u; // 801B4C8C
  c->r[4]=c->r[4]+0x000054D8u; // 801B4C90
  c->lr=0x801B4C98u; f_801AA820(c); // 801B4C94
L_801B4C98:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B4C98
  if (crb(c,2)) { goto L_801B4CD0; } // 801B4C9C
  cmpu(c,0,c->r[27],0x00000012u); // 801B4CA0
  if (crb(c,0)) { goto L_801B4CC8; } // 801B4CA4
  cmpu(c,0,c->r[27],0x00001000u); // 801B4CA8
  if (crb(c,1)) { goto L_801B4CC8; } // 801B4CAC
  cmpu(c,0,c->r[28],0x00000012u); // 801B4CB0
  if (crb(c,0)) { goto L_801B4CC8; } // 801B4CB4
  cmpu(c,0,c->r[28],0x00001000u); // 801B4CB8
  if (crb(c,1)) { goto L_801B4CC8; } // 801B4CBC
  cmpu(c,0,c->r[27],c->r[28]); // 801B4CC0
  if (!crb(c,1)) { goto L_801B4CD0; } // 801B4CC4
L_801B4CC8:;
  c->r[3]=0u+0x00000005u; // 801B4CC8
  goto L_801B4E58; // 801B4CCC
L_801B4CD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B4CD0
  if (crb(c,2)) { goto L_801B4D44; } // 801B4CD4
  c->r[3]=0u+0x00000002u; // 801B4CD8
  c->lr=0x801B4CE0u; f_801A7C10(c); // 801B4CDC
  cmps(c,0,(int32_t)c->r[3],0); // 801B4CE0
  c->r[29]=c->r[3]|c->r[3]; // 801B4CE4
  if (crb(c,2)) { goto L_801B4D3C; } // 801B4CE8
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801B4CEC
  if (crb(c,2)) { goto L_801B4D28; } // 801B4CF0
  c->r[3]=c->r[1]+0x0000000Cu; // 801B4CF4
  c->r[4]=c->r[2]+0xFFFFAE4Cu; // 801B4CF8
  c->r[5]=0u+0x00000003u; // 801B4CFC
  c->lr=0x801B4D04u; f_80004364(c); // 801B4D00
  c->r[3]=c->r[1]+0x0000000Fu; // 801B4D04
  c->r[4]=c->r[2]+0xFFFFAE48u; // 801B4D08
  c->r[5]=0u+0x00000003u; // 801B4D0C
  c->lr=0x801B4D14u; f_80004364(c); // 801B4D10
  c->r[3]=c->r[29]|c->r[29]; // 801B4D14
  c->r[5]=c->r[1]+0x0000000Cu; // 801B4D18
  c->r[4]=0u+0x00000002u; // 801B4D1C
  c->lr=0x801B4D24u; f_801BF5AC(c); // 801B4D20
  goto L_801B4D34; // 801B4D24
L_801B4D28:;
  c->r[4]=0u+0x00000001u; // 801B4D28
  c->r[5]=c->r[2]+0xFFFFAE48u; // 801B4D2C
  c->lr=0x801B4D34u; f_801BF5AC(c); // 801B4D30
L_801B4D34:;
  c->r[30]=c->r[30]|0x00000001u; // 801B4D34
  goto L_801B4D44; // 801B4D38
L_801B4D3C:;
  c->r[3]=0u+0x00000003u; // 801B4D3C
  goto L_801B4E58; // 801B4D40
L_801B4D44:;
  c->r[3]=0u+0x802D0000u; // 801B4D44
  c->r[3]=c->r[3]+0x000023D8u; // 801B4D48
  c->r[0]=R16(c->r[3]+0x000016A0u); // 801B4D4C
  cmpu(c,0,c->r[27],c->r[0]); // 801B4D50
  if (!crb(c,2)) { goto L_801B4D64; } // 801B4D54
  c->r[0]=R16(c->r[3]+0x000016A2u); // 801B4D58
  cmpu(c,0,c->r[28],c->r[0]); // 801B4D5C
  if (crb(c,2)) { goto L_801B4D9C; } // 801B4D60
L_801B4D64:;
  c->r[3]=0u+0x00000002u; // 801B4D64
  c->lr=0x801B4D6Cu; f_801A7C10(c); // 801B4D68
  cmps(c,0,(int32_t)c->r[3],0); // 801B4D6C
  if (crb(c,2)) { goto L_801B4D94; } // 801B4D70
  c->r[6]=0u+0x802D0000u; // 801B4D74
  c->r[4]=c->r[28]|c->r[28]; // 801B4D78
  c->r[6]=c->r[6]+0x000023D8u; // 801B4D7C
  c->r[5]=c->r[27]|c->r[27]; // 801B4D80
  W16(c->r[6]+0x000016A0u,c->r[27]); // 801B4D84
  W16(c->r[6]+0x000016A2u,c->r[28]); // 801B4D88
  c->lr=0x801B4D90u; f_801BF2A8(c); // 801B4D8C
  goto L_801B4D9C; // 801B4D90
L_801B4D94:;
  c->r[3]=0u+0x00000003u; // 801B4D94
  goto L_801B4E58; // 801B4D98
L_801B4D9C:;
  c->r[3]=0u+0x00000002u; // 801B4D9C
  c->lr=0x801B4DA4u; f_801A7C10(c); // 801B4DA0
  cmps(c,0,(int32_t)c->r[3],0); // 801B4DA4
  if (crb(c,2)) { goto L_801B4DE0; } // 801B4DA8
  c->r[4]=0u+0x802D0000u; // 801B4DAC
  c->r[4]=c->r[4]+0x000023D8u; // 801B4DB0
  c->r[0]=R16(c->r[4]+0x0000169Au); // 801B4DB4
  cmps(c,0,(int32_t)c->r[0],0); // 801B4DB8
  if (crb(c,2)) { goto L_801B4DC8; } // 801B4DBC
  c->r[0]=c->r[30]|0x00000002u; // 801B4DC0
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801B4DC4
L_801B4DC8:;
  c->r[5]=0u+0x802D0000u; // 801B4DC8
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B4DCC
  c->r[5]=c->r[5]+0x000023D8u; // 801B4DD0
  W16(c->r[5]+0x00001698u,c->r[31]); // 801B4DD4
  c->lr=0x801B4DDCu; f_801BF234(c); // 801B4DD8
  goto L_801B4DE8; // 801B4DDC
L_801B4DE0:;
  c->r[3]=0u+0x00000003u; // 801B4DE0
  goto L_801B4E58; // 801B4DE4
L_801B4DE8:;
  c->lr=0x801B4DECu; f_801B4244(c); // 801B4DE8
  c->r[4]=R8(c->r[3]+0x00000000u); // 801B4DEC
  c->r[6]=rotl(c->r[31],0)&0x00000001u; // 801B4DF0
  c->r[5]=R8(c->r[3]+0x00000001u); // 801B4DF4
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 801B4DF8
  c->r[0]=rotl(c->r[5],0)&0x000000E0u; // 801B4DFC
  c->r[4]=c->r[4]+c->r[0]; // 801B4E00
  c->r[0]=rotl(c->r[4],27)&0x00000001u; // 801B4E04
  c->r[0]=c->r[6]^c->r[0]; cr0(c,c->r[0]); // 801B4E08
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801B4E0C
  if (crb(c,2)) { goto L_801B4E54; } // 801B4E10
  c->r[3]=R8(c->r[3]+0x00000002u); // 801B4E14
  cmps(c,0,(int32_t)c->r[6],0); // 801B4E18
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 801B4E1C
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 801B4E20
  c->r[6]=rotl(c->r[3],0)&0x000000FCu; // 801B4E24
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801B4E28
  if (crb(c,2)) { goto L_801B4E34; } // 801B4E2C
  c->r[0]=c->r[4]|0x00000020u; // 801B4E30
L_801B4E34:;
  c->r[3]=rotl(c->r[0],0)&0x000000E0u; // 801B4E34
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801B4E38
  c->r[4]=c->r[5]+c->r[3]; // 801B4E3C
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801B4E40
  c->r[3]=c->r[1]+0x00000008u; // 801B4E44
  W8(c->r[1]+0x00000009u,c->r[4]); // 801B4E48
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B4E4C
  c->lr=0x801B4E54u; f_801B41C4(c); // 801B4E50
L_801B4E54:;
  c->r[3]=0u+0x00000000u; // 801B4E54
L_801B4E58:;
  c->r[11]=c->r[1]+0x00000030u; // 801B4E58
  c->lr=0x801B4E60u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B4E5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B4E60
  c->lr=c->r[0]; // 801B4E64
  c->r[1]=c->r[1]+0x00000030u; // 801B4E68
  return; // 801B4E6C
}

// BTM_SetInquiryScanType
void f_801B4E70(Ctx* __restrict c) {
  trace_call(0x801B4E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4E70
  c->r[0]=c->lr; // 801B4E74
  cmps(c,0,(int32_t)c->r[3],0); // 801B4E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4E7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4E80
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4E84
  c->r[30]=c->r[3]|c->r[3]; // 801B4E88
  if (crb(c,2)) { goto L_801B4EA0; } // 801B4E8C
  cmpu(c,0,c->r[3],0x00000001u); // 801B4E90
  if (crb(c,2)) { goto L_801B4EA0; } // 801B4E94
  c->r[3]=0u+0x00000005u; // 801B4E98
  goto L_801B4F08; // 801B4E9C
L_801B4EA0:;
  c->r[31]=0u+0x802D0000u; // 801B4EA0
  c->r[31]=c->r[31]+0x000023D8u; // 801B4EA4
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B4EA8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B4EAC
  if (!crb(c,2)) { goto L_801B4EBC; } // 801B4EB0
  c->r[3]=0u+0x00000004u; // 801B4EB4
  goto L_801B4F08; // 801B4EB8
L_801B4EBC:;
  c->r[0]=R16(c->r[31]+0x000016A4u); // 801B4EBC
  cmpu(c,0,c->r[3],c->r[0]); // 801B4EC0
  if (crb(c,2)) { goto L_801B4F04; } // 801B4EC4
  c->lr=0x801B4ECCu; f_801B33C4(c); // 801B4EC8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B4ECC
  if (crb(c,2)) { goto L_801B4EFC; } // 801B4ED0
  c->r[3]=0u+0x00000002u; // 801B4ED4
  c->lr=0x801B4EDCu; f_801A7C10(c); // 801B4ED8
  cmps(c,0,(int32_t)c->r[3],0); // 801B4EDC
  if (crb(c,2)) { goto L_801B4EF4; } // 801B4EE0
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B4EE4
  c->lr=0x801B4EECu; f_801BFC74(c); // 801B4EE8
  W16(c->r[31]+0x000016A4u,c->r[30]); // 801B4EEC
  goto L_801B4F04; // 801B4EF0
L_801B4EF4:;
  c->r[3]=0u+0x00000003u; // 801B4EF4
  goto L_801B4F08; // 801B4EF8
L_801B4EFC:;
  c->r[3]=0u+0x00000006u; // 801B4EFC
  goto L_801B4F08; // 801B4F00
L_801B4F04:;
  c->r[3]=0u+0x00000000u; // 801B4F04
L_801B4F08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4F08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4F0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4F10
  c->lr=c->r[0]; // 801B4F14
  c->r[1]=c->r[1]+0x00000010u; // 801B4F18
  return; // 801B4F1C
}

// BTM_SetPageScanType
void f_801B4F20(Ctx* __restrict c) {
  trace_call(0x801B4F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4F20
  c->r[0]=c->lr; // 801B4F24
  cmps(c,0,(int32_t)c->r[3],0); // 801B4F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4F30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B4F34
  c->r[30]=c->r[3]|c->r[3]; // 801B4F38
  if (crb(c,2)) { goto L_801B4F50; } // 801B4F3C
  cmpu(c,0,c->r[3],0x00000001u); // 801B4F40
  if (crb(c,2)) { goto L_801B4F50; } // 801B4F44
  c->r[3]=0u+0x00000005u; // 801B4F48
  goto L_801B4FB8; // 801B4F4C
L_801B4F50:;
  c->r[31]=0u+0x802D0000u; // 801B4F50
  c->r[31]=c->r[31]+0x000023D8u; // 801B4F54
  c->r[0]=R8(c->r[31]+0x00000643u); // 801B4F58
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801B4F5C
  if (!crb(c,2)) { goto L_801B4F6C; } // 801B4F60
  c->r[3]=0u+0x00000004u; // 801B4F64
  goto L_801B4FB8; // 801B4F68
L_801B4F6C:;
  c->r[0]=R16(c->r[31]+0x000016A6u); // 801B4F6C
  cmpu(c,0,c->r[3],c->r[0]); // 801B4F70
  if (crb(c,2)) { goto L_801B4FB4; } // 801B4F74
  c->lr=0x801B4F7Cu; f_801B33C4(c); // 801B4F78
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B4F7C
  if (crb(c,2)) { goto L_801B4FAC; } // 801B4F80
  c->r[3]=0u+0x00000002u; // 801B4F84
  c->lr=0x801B4F8Cu; f_801A7C10(c); // 801B4F88
  cmps(c,0,(int32_t)c->r[3],0); // 801B4F8C
  if (crb(c,2)) { goto L_801B4FA4; } // 801B4F90
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B4F94
  c->lr=0x801B4F9Cu; f_801BFCD4(c); // 801B4F98
  W16(c->r[31]+0x000016A6u,c->r[30]); // 801B4F9C
  goto L_801B4FB4; // 801B4FA0
L_801B4FA4:;
  c->r[3]=0u+0x00000003u; // 801B4FA4
  goto L_801B4FB8; // 801B4FA8
L_801B4FAC:;
  c->r[3]=0u+0x00000006u; // 801B4FAC
  goto L_801B4FB8; // 801B4FB0
L_801B4FB4:;
  c->r[3]=0u+0x00000000u; // 801B4FB4
L_801B4FB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B4FB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B4FBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B4FC0
  c->lr=c->r[0]; // 801B4FC4
  c->r[1]=c->r[1]+0x00000010u; // 801B4FC8
  return; // 801B4FCC
}

// BTM_SetInquiryMode
void f_801B4FD0(Ctx* __restrict c) {
  trace_call(0x801B4FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B4FD0
  c->r[0]=c->lr; // 801B4FD4
  cmps(c,0,(int32_t)c->r[3],0); // 801B4FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B4FDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B4FE0
  c->r[31]=c->r[3]|c->r[3]; // 801B4FE4
  if (crb(c,2)) { goto L_801B4FFC; } // 801B4FE8
  cmpu(c,0,c->r[3],0x00000001u); // 801B4FEC
  if (crb(c,2)) { goto L_801B4FFC; } // 801B4FF0
  c->r[3]=0u+0x00000005u; // 801B4FF4
  goto L_801B5054; // 801B4FF8
L_801B4FFC:;
  c->r[3]=0u+0x802D0000u; // 801B4FFC
  c->r[3]=c->r[3]+0x000023D8u; // 801B5000
  c->r[0]=R8(c->r[3]+0x00000643u); // 801B5004
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B5008
  if (!crb(c,2)) { goto L_801B5018; } // 801B500C
  c->r[3]=0u+0x00000004u; // 801B5010
  goto L_801B5054; // 801B5014
L_801B5018:;
  c->lr=0x801B501Cu; f_801B33C4(c); // 801B5018
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B501C
  if (!crb(c,2)) { goto L_801B502C; } // 801B5020
  c->r[3]=0u+0x00000006u; // 801B5024
  goto L_801B5054; // 801B5028
L_801B502C:;
  c->r[3]=0u+0x00000002u; // 801B502C
  c->lr=0x801B5034u; f_801A7C10(c); // 801B5030
  cmps(c,0,(int32_t)c->r[3],0); // 801B5034
  if (crb(c,2)) { goto L_801B5048; } // 801B5038
  c->r[4]=c->r[31]|c->r[31]; // 801B503C
  c->lr=0x801B5044u; f_801BFCA4(c); // 801B5040
  goto L_801B5050; // 801B5044
L_801B5048:;
  c->r[3]=0u+0x00000003u; // 801B5048
  goto L_801B5054; // 801B504C
L_801B5050:;
  c->r[3]=0u+0x00000000u; // 801B5050
L_801B5054:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B5058
  c->lr=c->r[0]; // 801B505C
  c->r[1]=c->r[1]+0x00000010u; // 801B5060
  return; // 801B5064
}

// BTM_SetConnectability
void f_801B5068(Ctx* __restrict c) {
  trace_call(0x801B5068u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5068
  c->r[0]=c->lr; // 801B506C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5070
  c->r[11]=c->r[1]+0x00000020u; // 801B5074
  c->lr=0x801B507Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5078
  cmps(c,0,(int32_t)c->r[3],0); // 801B507C
  c->r[31]=0u+0x802D0000u; // 801B5080
  c->r[27]=c->r[3]|c->r[3]; // 801B5084
  c->r[28]=c->r[4]|c->r[4]; // 801B5088
  c->r[29]=c->r[5]|c->r[5]; // 801B508C
  c->r[31]=c->r[31]+0x000023D8u; // 801B5090
  c->r[30]=0u+0x00000000u; // 801B5094
  if (crb(c,2)) { goto L_801B50AC; } // 801B5098
  cmpu(c,0,c->r[3],0x00000001u); // 801B509C
  if (crb(c,2)) { goto L_801B50AC; } // 801B50A0
  c->r[3]=0u+0x00000005u; // 801B50A4
  goto L_801B51D8; // 801B50A8
L_801B50AC:;
  c->r[3]=0u+0x802D0000u; // 801B50AC
  c->r[3]=c->r[3]+0x000023D8u; // 801B50B0
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801B50B4
  cmpu(c,0,c->r[0],0x00000003u); // 801B50B8
  if (!crb(c,0)) { goto L_801B50C8; } // 801B50BC
  c->r[3]=0u+0x0000000Cu; // 801B50C0
  goto L_801B51D8; // 801B50C4
L_801B50C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B50C8
  if (!crb(c,2)) { goto L_801B50D4; } // 801B50CC
  c->r[28]=0u+0x00000012u; // 801B50D0
L_801B50D4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B50D4
  if (!crb(c,2)) { goto L_801B50E0; } // 801B50D8
  c->r[29]=0u+0x00000800u; // 801B50DC
L_801B50E0:;
  c->r[3]=0u+0x802D0000u; // 801B50E0
  c->r[3]=c->r[3]+0x000023D8u; // 801B50E4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B50E8
  cmpu(c,0,c->r[0],0x00000003u); // 801B50EC
  if (crb(c,0)) { goto L_801B5114; } // 801B50F0
  c->r[3]=0u+0x000D0000u; // 801B50F4
  c->r[4]=0u+0x80240000u; // 801B50F8
  c->r[5]=c->r[27]|c->r[27]; // 801B50FC
  c->r[6]=c->r[28]|c->r[28]; // 801B5100
  c->r[7]=c->r[29]|c->r[29]; // 801B5104
  c->r[3]=c->r[3]+0x00000002u; // 801B5108
  c->r[4]=c->r[4]+0x00005534u; // 801B510C
  c->lr=0x801B5114u; f_801AA820(c); // 801B5110
L_801B5114:;
  cmpu(c,0,c->r[27],0x00000001u); // 801B5114
  if (!crb(c,2)) { goto L_801B5150; } // 801B5118
  cmpu(c,0,c->r[28],0x00000012u); // 801B511C
  if (crb(c,0)) { goto L_801B5144; } // 801B5120
  cmpu(c,0,c->r[28],0x00001000u); // 801B5124
  if (crb(c,1)) { goto L_801B5144; } // 801B5128
  cmpu(c,0,c->r[29],0x00000012u); // 801B512C
  if (crb(c,0)) { goto L_801B5144; } // 801B5130
  cmpu(c,0,c->r[29],0x00001000u); // 801B5134
  if (crb(c,1)) { goto L_801B5144; } // 801B5138
  cmpu(c,0,c->r[28],c->r[29]); // 801B513C
  if (!crb(c,1)) { goto L_801B514C; } // 801B5140
L_801B5144:;
  c->r[3]=0u+0x00000005u; // 801B5144
  goto L_801B51D8; // 801B5148
L_801B514C:;
  c->r[30]=c->r[30]|0x00000002u; // 801B514C
L_801B5150:;
  c->r[0]=R16(c->r[31]+0x0000169Cu); // 801B5150
  cmpu(c,0,c->r[28],c->r[0]); // 801B5154
  if (!crb(c,2)) { goto L_801B5168; } // 801B5158
  c->r[0]=R16(c->r[31]+0x0000169Eu); // 801B515C
  cmpu(c,0,c->r[29],c->r[0]); // 801B5160
  if (crb(c,2)) { goto L_801B5198; } // 801B5164
L_801B5168:;
  c->r[3]=0u+0x00000002u; // 801B5168
  c->lr=0x801B5170u; f_801A7C10(c); // 801B516C
  cmps(c,0,(int32_t)c->r[3],0); // 801B5170
  if (crb(c,2)) { goto L_801B5190; } // 801B5174
  W16(c->r[31]+0x0000169Cu,c->r[28]); // 801B5178
  c->r[4]=c->r[29]|c->r[29]; // 801B517C
  c->r[5]=c->r[28]|c->r[28]; // 801B5180
  W16(c->r[31]+0x0000169Eu,c->r[29]); // 801B5184
  c->lr=0x801B518Cu; f_801BF264(c); // 801B5188
  goto L_801B5198; // 801B518C
L_801B5190:;
  c->r[3]=0u+0x00000003u; // 801B5190
  goto L_801B51D8; // 801B5194
L_801B5198:;
  c->r[3]=0u+0x00000002u; // 801B5198
  c->lr=0x801B51A0u; f_801A7C10(c); // 801B519C
  cmps(c,0,(int32_t)c->r[3],0); // 801B51A0
  if (crb(c,2)) { goto L_801B51CC; } // 801B51A4
  c->r[0]=R16(c->r[31]+0x00001698u); // 801B51A8
  cmps(c,0,(int32_t)c->r[0],0); // 801B51AC
  if (crb(c,2)) { goto L_801B51BC; } // 801B51B0
  c->r[0]=c->r[30]|0x00000001u; // 801B51B4
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801B51B8
L_801B51BC:;
  W16(c->r[31]+0x0000169Au,c->r[27]); // 801B51BC
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801B51C0
  c->lr=0x801B51C8u; f_801BF234(c); // 801B51C4
  goto L_801B51D4; // 801B51C8
L_801B51CC:;
  c->r[3]=0u+0x00000003u; // 801B51CC
  goto L_801B51D8; // 801B51D0
L_801B51D4:;
  c->r[3]=0u+0x00000000u; // 801B51D4
L_801B51D8:;
  c->r[11]=c->r[1]+0x00000020u; // 801B51D8
  c->lr=0x801B51E0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B51DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B51E0
  c->lr=c->r[0]; // 801B51E4
  c->r[1]=c->r[1]+0x00000020u; // 801B51E8
  return; // 801B51EC
}

// BTM_IsInquiryActive
void f_801B51F0(Ctx* __restrict c) {
  trace_call(0x801B51F0u);
  c->r[3]=0u+0x802D0000u; // 801B51F0
  c->r[3]=c->r[3]+0x000023D8u; // 801B51F4
  c->r[3]=R8(c->r[3]+0x00001848u); // 801B51F8
  return; // 801B51FC
}

// BTM_CancelInquiry
void f_801B5200(Ctx* __restrict c) {
  trace_call(0x801B5200u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5200
  c->r[0]=c->lr; // 801B5204
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5208
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B520C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5210
  c->r[30]=0u+0x802D0000u; // 801B5214
  c->r[30]=c->r[30]+0x000023D8u; // 801B5218
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B521C
  c->r[29]=0u+0x00000000u; // 801B5220
  c->r[0]=R8(c->r[30]+0x000027C0u); // 801B5224
  cmpu(c,0,c->r[0],0x00000003u); // 801B5228
  if (crb(c,0)) { goto L_801B5244; } // 801B522C
  c->r[3]=0u+0x000D0000u; // 801B5230
  c->r[4]=0u+0x80240000u; // 801B5234
  c->r[3]=c->r[3]+0x00000002u; // 801B5238
  c->r[4]=c->r[4]+0x00005588u; // 801B523C
  c->lr=0x801B5244u; f_801AA7C0(c); // 801B5240
L_801B5244:;
  c->lr=0x801B5248u; f_801B33C4(c); // 801B5244
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B5248
  if (!crb(c,2)) { goto L_801B5258; } // 801B524C
  c->r[3]=0u+0x00000006u; // 801B5250
  goto L_801B52EC; // 801B5254
L_801B5258:;
  c->r[0]=R8(c->r[30]+0x00001848u); // 801B5258
  cmps(c,0,(int32_t)c->r[0],0); // 801B525C
  if (crb(c,2)) { goto L_801B52E8; } // 801B5260
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B5264
  if (!crb(c,2)) { goto L_801B52E8; } // 801B5268
  c->r[0]=R8(c->r[30]+0x00001844u); // 801B526C
  c->r[4]=0u+0x00000000u; // 801B5270
  W8(c->r[30]+0x00001848u,c->r[4]); // 801B5274
  cmps(c,0,(int32_t)c->r[0],0); // 801B5278
  W8(c->r[30]+0x00001847u,c->r[4]); // 801B527C
  W32(c->r[30]+0x000016B4u,c->r[4]); // 801B5280
  W32(c->r[30]+0x000016B0u,c->r[4]); // 801B5284
  if (crb(c,2)) { goto L_801B52A0; } // 801B5288
  c->r[3]=R8(c->r[30]+0x00001845u); // 801B528C
  W8(c->r[30]+0x00001844u,c->r[4]); // 801B5290
  c->r[0]=c->r[3]+0x00000001u; // 801B5294
  W8(c->r[30]+0x00001845u,c->r[0]); // 801B5298
  goto L_801B52B0; // 801B529C
L_801B52A0:;
  c->lr=0x801B52A4u; f_801BD784(c); // 801B52A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B52A4
  if (!crb(c,2)) { goto L_801B52B0; } // 801B52A8
  c->r[29]=0u+0x00000003u; // 801B52AC
L_801B52B0:;
  c->r[31]=0u+0x802D0000u; // 801B52B0
  c->r[4]=R32(c->r[30]+0x000016C0u); // 801B52B4
  c->r[31]=c->r[31]+0x000023D8u; // 801B52B8
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801B52BC
  c->r[0]=c->r[4]+0x00000001u; // 801B52C0
  W32(c->r[30]+0x000016C0u,c->r[0]); // 801B52C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B52C8
  if (crb(c,2)) { goto L_801B52DC; } // 801B52CC
  c->lr=0x801B52D4u; f_801A7D00(c); // 801B52D0
  c->r[0]=0u+0x00000000u; // 801B52D4
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801B52D8
L_801B52DC:;
  c->r[0]=0u+0x00000000u; // 801B52DC
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801B52E0
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801B52E4
L_801B52E8:;
  c->r[3]=c->r[29]|c->r[29]; // 801B52E8
L_801B52EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B52EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B52F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B52F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B52F8
  c->lr=c->r[0]; // 801B52FC
  c->r[1]=c->r[1]+0x00000020u; // 801B5300
  return; // 801B5304
}

// BTM_StartInquiry
void f_801B5308(Ctx* __restrict c) {
  trace_call(0x801B5308u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5308
  c->r[0]=c->lr; // 801B530C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5310
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5314
  c->r[31]=0u+0x802D0000u; // 801B5318
  c->r[31]=c->r[31]+0x000023D8u; // 801B531C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5320
  c->r[30]=c->r[5]|c->r[5]; // 801B5324
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5328
  c->r[29]=c->r[4]|c->r[4]; // 801B532C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B5330
  c->r[28]=c->r[3]|c->r[3]; // 801B5334
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B5338
  cmpu(c,0,c->r[0],0x00000003u); // 801B533C
  if (crb(c,0)) { goto L_801B5368; } // 801B5340
  c->r[3]=0u+0x000D0000u; // 801B5344
  c->r[4]=0u+0x80240000u; // 801B5348
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B534C
  c->r[3]=c->r[3]+0x00000002u; // 801B5350
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B5354
  c->r[4]=c->r[4]+0x000055A4u; // 801B5358
  c->r[7]=R8(c->r[28]+0x00000002u); // 801B535C
  c->r[8]=R8(c->r[28]+0x00000003u); // 801B5360
  c->lr=0x801B5368u; f_801AA840(c); // 801B5364
L_801B5368:;
  c->r[0]=R8(c->r[31]+0x00001848u); // 801B5368
  cmps(c,0,(int32_t)c->r[0],0); // 801B536C
  if (!crb(c,2)) { goto L_801B5380; } // 801B5370
  c->r[0]=R8(c->r[31]+0x00001844u); // 801B5374
  cmps(c,0,(int32_t)c->r[0],0); // 801B5378
  if (crb(c,2)) { goto L_801B5388; } // 801B537C
L_801B5380:;
  c->r[3]=0u+0x00000002u; // 801B5380
  goto L_801B549C; // 801B5384
L_801B5388:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801B5388
  cmps(c,0,(int32_t)c->r[0],0); // 801B538C
  if (crb(c,2)) { goto L_801B53A4; } // 801B5390
  cmpu(c,0,c->r[0],0x00000001u); // 801B5394
  if (crb(c,2)) { goto L_801B53A4; } // 801B5398
  c->r[3]=0u+0x00000005u; // 801B539C
  goto L_801B549C; // 801B53A0
L_801B53A4:;
  c->lr=0x801B53A8u; f_801B33C4(c); // 801B53A4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B53A8
  if (!crb(c,2)) { goto L_801B53B8; } // 801B53AC
  c->r[3]=0u+0x00000006u; // 801B53B0
  goto L_801B549C; // 801B53B4
L_801B53B8:;
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B53B8
  c->r[0]=0u+0x00000003u; // 801B53BC
  c->r[3]=R8(c->r[28]+0x00000001u); // 801B53C0
  c->r[6]=0u+0x00000000u; // 801B53C4
  c->r[4]=0u+0x00000001u; // 801B53C8
  W8(c->r[31]+0x00001834u,c->r[5]); // 801B53CC
  W8(c->r[31]+0x00001835u,c->r[3]); // 801B53D0
  c->r[5]=R8(c->r[28]+0x00000002u); // 801B53D4
  c->r[3]=R8(c->r[28]+0x00000003u); // 801B53D8
  W8(c->r[31]+0x00001836u,c->r[5]); // 801B53DC
  W8(c->r[31]+0x00001837u,c->r[3]); // 801B53E0
  c->r[5]=R8(c->r[28]+0x00000004u); // 801B53E4
  c->r[3]=R8(c->r[28]+0x00000005u); // 801B53E8
  W8(c->r[31]+0x00001838u,c->r[5]); // 801B53EC
  W8(c->r[31]+0x00001839u,c->r[3]); // 801B53F0
  c->r[5]=R8(c->r[28]+0x00000006u); // 801B53F4
  c->r[3]=R8(c->r[28]+0x00000007u); // 801B53F8
  W8(c->r[31]+0x0000183Au,c->r[5]); // 801B53FC
  W8(c->r[31]+0x0000183Bu,c->r[3]); // 801B5400
  c->r[3]=R8(c->r[28]+0x00000008u); // 801B5404
  W8(c->r[31]+0x0000183Cu,c->r[3]); // 801B5408
  c->r[3]=R8(c->r[28]+0x00000009u); // 801B540C
  W8(c->r[31]+0x0000183Du,c->r[3]); // 801B5410
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B5414
  W32(c->r[31]+0x000016B0u,c->r[30]); // 801B5418
  W32(c->r[31]+0x000016B4u,c->r[29]); // 801B541C
  W8(c->r[31]+0x0000183Fu,c->r[6]); // 801B5420
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B5424
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 801B5428
  c->r[0]=addc(c,~c->r[5],0x00000001u,1); // 801B542C
  c->r[0]=~(c->r[3]|c->r[0]); // 801B5430
  c->r[3]=sraw(c,c->r[0],31); // 801B5434
  c->r[0]=c->r[3]+0x00000002u; // 801B5438
  W8(c->r[31]+0x00001848u,c->r[0]); // 801B543C
  c->r[0]=R8(c->r[28]+0x00000003u); // 801B5440
  cmps(c,0,(int32_t)c->r[0],0); // 801B5444
  if (crb(c,2)) { goto L_801B545C; } // 801B5448
  if (crb(c,0)) { goto L_801B5474; } // 801B544C
  cmps(c,0,(int32_t)c->r[0],3); // 801B5450
  if (!crb(c,0)) { goto L_801B5474; } // 801B5454
  goto L_801B5468; // 801B5458
L_801B545C:;
  c->r[0]=0u+0x00000002u; // 801B545C
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B5460
  goto L_801B547C; // 801B5464
L_801B5468:;
  W8(c->r[31]+0x00001847u,c->r[4]); // 801B5468
  W8(c->r[28]+0x00000003u,c->r[6]); // 801B546C
  goto L_801B547C; // 801B5470
L_801B5474:;
  c->r[3]=0u+0x00000005u; // 801B5474
  goto L_801B549C; // 801B5478
L_801B547C:;
  c->r[3]=R8(c->r[28]+0x00000003u); // 801B547C
  c->r[4]=c->r[28]+0x00000004u; // 801B5480
  c->lr=0x801B5488u; f_801B5D1C(c); // 801B5484
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B5488
  cmpu(c,0,c->r[0],0x00000001u); // 801B548C
  if (crb(c,2)) { goto L_801B549C; } // 801B5490
  c->r[0]=0u+0x00000000u; // 801B5494
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B5498
L_801B549C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B549C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B54A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B54A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B54A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B54AC
  c->lr=c->r[0]; // 801B54B0
  c->r[1]=c->r[1]+0x00000020u; // 801B54B4
  return; // 801B54B8
}

// BTM_ReadRemoteDeviceName
void f_801B54BC(Ctx* __restrict c) {
  trace_call(0x801B54BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B54BC
  c->r[0]=c->lr; // 801B54C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B54C4
  c->r[11]=c->r[1]+0x00000020u; // 801B54C8
  c->lr=0x801B54D0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B54CC
  c->r[5]=0u+0x802D0000u; // 801B54D0
  c->r[27]=c->r[3]|c->r[3]; // 801B54D4
  c->r[5]=c->r[5]+0x000023D8u; // 801B54D8
  c->r[28]=c->r[4]|c->r[4]; // 801B54DC
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801B54E0
  c->r[29]=0u+0x00000000u; // 801B54E4
  cmpu(c,0,c->r[0],0x00000003u); // 801B54E8
  if (crb(c,0)) { goto L_801B551C; } // 801B54EC
  c->r[3]=0u+0x000D0000u; // 801B54F0
  c->r[4]=0u+0x80240000u; // 801B54F4
  c->r[5]=R8(c->r[27]+0x00000000u); // 801B54F8
  c->r[3]=c->r[3]+0x00000002u; // 801B54FC
  c->r[6]=R8(c->r[27]+0x00000001u); // 801B5500
  c->r[4]=c->r[4]+0x000055DCu; // 801B5504
  c->r[7]=R8(c->r[27]+0x00000002u); // 801B5508
  c->r[8]=R8(c->r[27]+0x00000003u); // 801B550C
  c->r[9]=R8(c->r[27]+0x00000004u); // 801B5510
  c->r[10]=R8(c->r[27]+0x00000005u); // 801B5514
  c->lr=0x801B551Cu; f_801AA880(c); // 801B5518
L_801B551C:;
  c->r[3]=0u+0x802D0000u; // 801B551C
  c->r[30]=0u+0x00000000u; // 801B5520
  c->r[3]=c->r[3]+0x000023D8u; // 801B5524
  c->r[31]=c->r[3]+0x000016E4u; // 801B5528
L_801B552C:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801B552C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5530
  if (crb(c,2)) { goto L_801B5554; } // 801B5534
  c->r[4]=c->r[27]|c->r[27]; // 801B5538
  c->r[3]=c->r[31]+0x0000000Au; // 801B553C
  c->r[5]=0u+0x00000006u; // 801B5540
  c->lr=0x801B5548u; f_801D8F78(c); // 801B5544
  cmps(c,0,(int32_t)c->r[3],0); // 801B5548
  if (!crb(c,2)) { goto L_801B5554; } // 801B554C
  goto L_801B5568; // 801B5550
L_801B5554:;
  c->r[30]=c->r[30]+0x00000001u; // 801B5554
  c->r[31]=c->r[31]+0x0000001Cu; // 801B5558
  cmpu(c,0,c->r[30],0x0000000Cu); // 801B555C
  if (crb(c,0)) { IRQCHK(c); goto L_801B552C; } // 801B5560
  c->r[31]=0u+0x00000000u; // 801B5564
L_801B5568:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B5568
  if (crb(c,2)) { goto L_801B5574; } // 801B556C
  c->r[29]=c->r[31]+0x00000008u; // 801B5570
L_801B5574:;
  c->r[3]=c->r[27]|c->r[27]; // 801B5574
  c->r[4]=c->r[29]|c->r[29]; // 801B5578
  c->r[7]=c->r[28]|c->r[28]; // 801B557C
  c->r[5]=0u+0x00000001u; // 801B5580
  c->r[6]=0u+0x00000028u; // 801B5584
  c->lr=0x801B558Cu; f_801B639C(c); // 801B5588
  c->r[11]=c->r[1]+0x00000020u; // 801B558C
  c->lr=0x801B5594u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5590
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5594
  c->lr=c->r[0]; // 801B5598
  c->r[1]=c->r[1]+0x00000020u; // 801B559C
  return; // 801B55A0
}

// BTM_CancelRemoteDeviceName
void f_801B55A4(Ctx* __restrict c) {
  trace_call(0x801B55A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B55A4
  c->r[0]=c->lr; // 801B55A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B55AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B55B0
  c->r[31]=0u+0x802D0000u; // 801B55B4
  c->r[31]=c->r[31]+0x000023D8u; // 801B55B8
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B55BC
  cmpu(c,0,c->r[0],0x00000003u); // 801B55C0
  if (crb(c,0)) { goto L_801B55DC; } // 801B55C4
  c->r[3]=0u+0x000D0000u; // 801B55C8
  c->r[4]=0u+0x80240000u; // 801B55CC
  c->r[3]=c->r[3]+0x00000002u; // 801B55D0
  c->r[4]=c->r[4]+0x0000561Cu; // 801B55D4
  c->lr=0x801B55DCu; f_801AA7C0(c); // 801B55D8
L_801B55DC:;
  c->r[0]=R8(c->r[31]+0x000016AEu); // 801B55DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B55E0
  if (crb(c,2)) { goto L_801B5604; } // 801B55E4
  c->r[3]=c->r[31]+0x000016A8u; // 801B55E8
  c->lr=0x801B55F0u; f_801BE288(c); // 801B55EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B55F0
  c->r[3]=0u+0x00000003u; // 801B55F4
  if (crb(c,2)) { goto L_801B5608; } // 801B55F8
  c->r[3]=0u+0x00000001u; // 801B55FC
  goto L_801B5608; // 801B5600
L_801B5604:;
  c->r[3]=0u+0x00000006u; // 801B5604
L_801B5608:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B5608
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B560C
  c->lr=c->r[0]; // 801B5610
  c->r[1]=c->r[1]+0x00000010u; // 801B5614
  return; // 801B5618
}

// BTM_InqDbRead
void f_801B561C(Ctx* __restrict c) {
  trace_call(0x801B561Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B561C
  c->r[0]=c->lr; // 801B5620
  c->r[4]=0u+0x802D0000u; // 801B5624
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5628
  c->r[4]=c->r[4]+0x000023D8u; // 801B562C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5630
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5634
  c->r[30]=c->r[4]+0x000016E4u; // 801B5638
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B563C
  c->r[29]=c->r[3]|c->r[3]; // 801B5640
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B5644
  cmpu(c,0,c->r[0],0x00000003u); // 801B5648
  if (crb(c,0)) { goto L_801B567C; } // 801B564C
  c->r[3]=0u+0x000D0000u; // 801B5650
  c->r[4]=0u+0x80240000u; // 801B5654
  c->r[5]=R8(c->r[29]+0x00000000u); // 801B5658
  c->r[3]=c->r[3]+0x00000002u; // 801B565C
  c->r[6]=R8(c->r[29]+0x00000001u); // 801B5660
  c->r[4]=c->r[4]+0x0000563Cu; // 801B5664
  c->r[7]=R8(c->r[29]+0x00000002u); // 801B5668
  c->r[8]=R8(c->r[29]+0x00000003u); // 801B566C
  c->r[9]=R8(c->r[29]+0x00000004u); // 801B5670
  c->r[10]=R8(c->r[29]+0x00000005u); // 801B5674
  c->lr=0x801B567Cu; f_801AA880(c); // 801B5678
L_801B567C:;
  c->r[31]=0u+0x00000000u; // 801B567C
L_801B5680:;
  c->r[0]=R8(c->r[30]+0x0000001Au); // 801B5680
  cmps(c,0,(int32_t)c->r[0],0); // 801B5684
  if (crb(c,2)) { goto L_801B56AC; } // 801B5688
  c->r[4]=c->r[29]|c->r[29]; // 801B568C
  c->r[3]=c->r[30]+0x0000000Au; // 801B5690
  c->r[5]=0u+0x00000006u; // 801B5694
  c->lr=0x801B569Cu; f_801D8F78(c); // 801B5698
  cmps(c,0,(int32_t)c->r[3],0); // 801B569C
  if (!crb(c,2)) { goto L_801B56AC; } // 801B56A0
  c->r[3]=c->r[30]+0x00000008u; // 801B56A4
  goto L_801B56C0; // 801B56A8
L_801B56AC:;
  c->r[31]=c->r[31]+0x00000001u; // 801B56AC
  c->r[30]=c->r[30]+0x0000001Cu; // 801B56B0
  cmpu(c,0,c->r[31],0x0000000Cu); // 801B56B4
  if (crb(c,0)) { IRQCHK(c); goto L_801B5680; } // 801B56B8
  c->r[3]=0u+0x00000000u; // 801B56BC
L_801B56C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B56C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B56C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B56C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B56CC
  c->lr=c->r[0]; // 801B56D0
  c->r[1]=c->r[1]+0x00000020u; // 801B56D4
  return; // 801B56D8
}

// BTM_InqDbFirst
void f_801B56DC(Ctx* __restrict c) {
  trace_call(0x801B56DCu);
  c->r[3]=0u+0x802D0000u; // 801B56DC
  c->r[0]=0u+0x00000002u; // 801B56E0
  c->r[3]=c->r[3]+0x000023D8u; // 801B56E4
  c->r[4]=0u+0x00000000u; // 801B56E8
  c->r[3]=c->r[3]+0x000016E4u; // 801B56EC
  c->ctr=c->r[0]; // 801B56F0
L_801B56F4:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801B56F4
  cmps(c,0,(int32_t)c->r[0],0); // 801B56F8
  if (crb(c,2)) { goto L_801B5708; } // 801B56FC
  c->r[3]=c->r[3]+0x00000008u; // 801B5700
  return; // 801B5704
L_801B5708:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801B5708
  c->r[4]=c->r[4]+0x00000001u; // 801B570C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5710
  if (crb(c,2)) { goto L_801B5720; } // 801B5714
  c->r[3]=c->r[3]+0x00000024u; // 801B5718
  return; // 801B571C
L_801B5720:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801B5720
  c->r[4]=c->r[4]+0x00000001u; // 801B5724
  cmps(c,0,(int32_t)c->r[0],0); // 801B5728
  if (crb(c,2)) { goto L_801B5738; } // 801B572C
  c->r[3]=c->r[3]+0x00000040u; // 801B5730
  return; // 801B5734
L_801B5738:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801B5738
  c->r[4]=c->r[4]+0x00000001u; // 801B573C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5740
  if (crb(c,2)) { goto L_801B5750; } // 801B5744
  c->r[3]=c->r[3]+0x0000005Cu; // 801B5748
  return; // 801B574C
L_801B5750:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 801B5750
  c->r[4]=c->r[4]+0x00000001u; // 801B5754
  cmps(c,0,(int32_t)c->r[0],0); // 801B5758
  if (crb(c,2)) { goto L_801B5768; } // 801B575C
  c->r[3]=c->r[3]+0x00000078u; // 801B5760
  return; // 801B5764
L_801B5768:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 801B5768
  c->r[4]=c->r[4]+0x00000001u; // 801B576C
  cmps(c,0,(int32_t)c->r[0],0); // 801B5770
  if (crb(c,2)) { goto L_801B5780; } // 801B5774
  c->r[3]=c->r[3]+0x00000094u; // 801B5778
  return; // 801B577C
L_801B5780:;
  c->r[4]=c->r[4]+0x00000001u; // 801B5780
  c->r[3]=c->r[3]+0x000000A8u; // 801B5784
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B56F4; } // 801B5788
  c->r[3]=0u+0x00000000u; // 801B578C
  return; // 801B5790
}

// BTM_InqDbNext
void f_801B5794(Ctx* __restrict c) {
  trace_call(0x801B5794u);
  cmps(c,0,(int32_t)c->r[3],0); // 801B5794
  if (crb(c,2)) { goto L_801B5818; } // 801B5798
  c->r[5]=0u+0x802D0000u; // 801B579C
  c->r[4]=0u+0x92490000u; // 801B57A0
  c->r[5]=c->r[5]+0x000023D8u; // 801B57A4
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801B57A8
  c->r[3]=c->r[5]+0x000016E4u; // 801B57AC
  c->r[4]=c->r[4]+0x00002493u; // 801B57B0
  c->r[0]=c->r[0]-c->r[3]; // 801B57B4
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801B57B8
  c->r[0]=c->r[3]+c->r[0]; // 801B57BC
  c->r[0]=sraw(c,c->r[0],4); // 801B57C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B57C4
  c->r[3]=c->r[0]+c->r[3]; // 801B57C8
  c->r[0]=c->r[3]+0x00000001u; // 801B57CC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801B57D0
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801B57D4
  c->r[0]=addc(c,~c->r[4],0x0000000Cu,1); // 801B57D8
  c->r[3]=c->r[5]+c->r[3]; // 801B57DC
  c->r[3]=c->r[3]+0x000016E4u; // 801B57E0
  c->ctr=c->r[0]; // 801B57E4
  cmpu(c,0,c->r[4],0x0000000Cu); // 801B57E8
  if (!crb(c,0)) { goto L_801B5810; } // 801B57EC
L_801B57F0:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801B57F0
  cmps(c,0,(int32_t)c->r[0],0); // 801B57F4
  if (crb(c,2)) { goto L_801B5804; } // 801B57F8
  c->r[3]=c->r[3]+0x00000008u; // 801B57FC
  return; // 801B5800
L_801B5804:;
  c->r[4]=c->r[4]+0x00000001u; // 801B5804
  c->r[3]=c->r[3]+0x0000001Cu; // 801B5808
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B57F0; } // 801B580C
L_801B5810:;
  c->r[3]=0u+0x00000000u; // 801B5810
  return; // 801B5814
L_801B5818:;
  c->r[3]=0u+0x802D0000u; // 801B5818
  c->r[0]=0u+0x00000002u; // 801B581C
  c->r[3]=c->r[3]+0x000023D8u; // 801B5820
  c->r[4]=0u+0x00000000u; // 801B5824
  c->r[3]=c->r[3]+0x000016E4u; // 801B5828
  c->ctr=c->r[0]; // 801B582C
L_801B5830:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801B5830
  cmps(c,0,(int32_t)c->r[0],0); // 801B5834
  if (crb(c,2)) { goto L_801B5844; } // 801B5838
  c->r[3]=c->r[3]+0x00000008u; // 801B583C
  return; // 801B5840
L_801B5844:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801B5844
  c->r[4]=c->r[4]+0x00000001u; // 801B5848
  cmps(c,0,(int32_t)c->r[0],0); // 801B584C
  if (crb(c,2)) { goto L_801B585C; } // 801B5850
  c->r[3]=c->r[3]+0x00000024u; // 801B5854
  return; // 801B5858
L_801B585C:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801B585C
  c->r[4]=c->r[4]+0x00000001u; // 801B5860
  cmps(c,0,(int32_t)c->r[0],0); // 801B5864
  if (crb(c,2)) { goto L_801B5874; } // 801B5868
  c->r[3]=c->r[3]+0x00000040u; // 801B586C
  return; // 801B5870
L_801B5874:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801B5874
  c->r[4]=c->r[4]+0x00000001u; // 801B5878
  cmps(c,0,(int32_t)c->r[0],0); // 801B587C
  if (crb(c,2)) { goto L_801B588C; } // 801B5880
  c->r[3]=c->r[3]+0x0000005Cu; // 801B5884
  return; // 801B5888
L_801B588C:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 801B588C
  c->r[4]=c->r[4]+0x00000001u; // 801B5890
  cmps(c,0,(int32_t)c->r[0],0); // 801B5894
  if (crb(c,2)) { goto L_801B58A4; } // 801B5898
  c->r[3]=c->r[3]+0x00000078u; // 801B589C
  return; // 801B58A0
L_801B58A4:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 801B58A4
  c->r[4]=c->r[4]+0x00000001u; // 801B58A8
  cmps(c,0,(int32_t)c->r[0],0); // 801B58AC
  if (crb(c,2)) { goto L_801B58BC; } // 801B58B0
  c->r[3]=c->r[3]+0x00000094u; // 801B58B4
  return; // 801B58B8
L_801B58BC:;
  c->r[4]=c->r[4]+0x00000001u; // 801B58BC
  c->r[3]=c->r[3]+0x000000A8u; // 801B58C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B5830; } // 801B58C4
  c->r[3]=0u+0x00000000u; // 801B58C8
  return; // 801B58CC
}

// BTM_ClearInqDb
void f_801B58D0(Ctx* __restrict c) {
  trace_call(0x801B58D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B58D0
  c->r[0]=c->lr; // 801B58D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B58D8
  c->r[11]=c->r[1]+0x00000020u; // 801B58DC
  c->lr=0x801B58E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B58E0
  c->r[4]=0u+0x802D0000u; // 801B58E4
  c->r[27]=c->r[3]|c->r[3]; // 801B58E8
  c->r[30]=c->r[4]+0x000023D8u; // 801B58EC
  c->r[0]=R8(c->r[30]+0x00001848u); // 801B58F0
  cmps(c,0,(int32_t)c->r[0],0); // 801B58F4
  if (!crb(c,2)) { goto L_801B5914; } // 801B58F8
  c->r[0]=R8(c->r[30]+0x000016AEu); // 801B58FC
  cmps(c,0,(int32_t)c->r[0],0); // 801B5900
  if (!crb(c,2)) { goto L_801B5914; } // 801B5904
  c->r[0]=R8(c->r[30]+0x00001844u); // 801B5908
  cmps(c,0,(int32_t)c->r[0],0); // 801B590C
  if (crb(c,2)) { goto L_801B591C; } // 801B5910
L_801B5914:;
  c->r[3]=0u+0x00000002u; // 801B5914
  goto L_801B5988; // 801B5918
L_801B591C:;
  c->r[28]=c->r[30]+0x000016E4u; // 801B591C
  c->r[29]=0u+0x00000000u; // 801B5920
  c->r[31]=0u+0x00000000u; // 801B5924
L_801B5928:;
  c->r[0]=R8(c->r[28]+0x0000001Au); // 801B5928
  cmps(c,0,(int32_t)c->r[0],0); // 801B592C
  if (crb(c,2)) { goto L_801B5974; } // 801B5930
  cmps(c,0,(int32_t)c->r[27],0); // 801B5934
  if (crb(c,2)) { goto L_801B5954; } // 801B5938
  c->r[4]=c->r[27]|c->r[27]; // 801B593C
  c->r[3]=c->r[28]+0x0000000Au; // 801B5940
  c->r[5]=0u+0x00000006u; // 801B5944
  c->lr=0x801B594Cu; f_801D8F78(c); // 801B5948
  cmps(c,0,(int32_t)c->r[3],0); // 801B594C
  if (!crb(c,2)) { goto L_801B5974; } // 801B5950
L_801B5954:;
  W8(c->r[28]+0x0000001Au,c->r[31]); // 801B5954
  c->r[12]=R32(c->r[30]+0x000016BCu); // 801B5958
  cmps(c,0,(int32_t)c->r[12],0); // 801B595C
  if (crb(c,2)) { goto L_801B5974; } // 801B5960
  c->r[3]=c->r[28]+0x00000008u; // 801B5964
  c->r[4]=0u+0x00000000u; // 801B5968
  c->ctr=c->r[12]; // 801B596C
  if (true) { c->lr=0x801B5974u; dispatch(c,c->ctr); } // 801B5970
L_801B5974:;
  c->r[29]=c->r[29]+0x00000001u; // 801B5974
  c->r[28]=c->r[28]+0x0000001Cu; // 801B5978
  cmpu(c,0,c->r[29],0x0000000Cu); // 801B597C
  if (crb(c,0)) { IRQCHK(c); goto L_801B5928; } // 801B5980
  c->r[3]=0u+0x00000000u; // 801B5984
L_801B5988:;
  c->r[11]=c->r[1]+0x00000020u; // 801B5988
  c->lr=0x801B5990u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B598C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5990
  c->lr=c->r[0]; // 801B5994
  c->r[1]=c->r[1]+0x00000020u; // 801B5998
  return; // 801B599C
}

// btm_inq_db_reset
void f_801B59A0(Ctx* __restrict c) {
  trace_call(0x801B59A0u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B59A0
  c->r[0]=c->lr; // 801B59A4
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B59A8
  c->r[11]=c->r[1]+0x00000120u; // 801B59AC
  c->lr=0x801B59B4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B59B0
  c->r[29]=0u+0x802D0000u; // 801B59B4
  c->r[29]=c->r[29]+0x000023D8u; // 801B59B8
  c->r[3]=c->r[29]+0x000016C4u; // 801B59BC
  c->lr=0x801B59C4u; f_801AAE40(c); // 801B59C0
  c->r[3]=R8(c->r[29]+0x00001848u); // 801B59C4
  cmps(c,0,(int32_t)c->r[3],0); // 801B59C8
  if (crb(c,2)) { goto L_801B5A04; } // 801B59CC
  c->r[0]=c->r[3]+0x000000FFu; // 801B59D0
  c->r[3]=0u+0x00000000u; // 801B59D4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B59D8
  W8(c->r[29]+0x00001848u,c->r[3]); // 801B59DC
  cmpu(c,0,c->r[0],0x00000001u); // 801B59E0
  if (crb(c,1)) { goto L_801B5A04; } // 801B59E4
  c->r[12]=R32(c->r[29]+0x000016B0u); // 801B59E8
  cmps(c,0,(int32_t)c->r[12],0); // 801B59EC
  if (crb(c,2)) { goto L_801B5A04; } // 801B59F0
  W8(c->r[1]+0x00000009u,c->r[3]); // 801B59F4
  c->r[3]=c->r[1]+0x00000009u; // 801B59F8
  c->ctr=c->r[12]; // 801B59FC
  if (true) { c->lr=0x801B5A04u; dispatch(c,c->ctr); } // 801B5A00
L_801B5A04:;
  c->r[0]=R8(c->r[29]+0x000016AEu); // 801B5A04
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B5A08
  if (crb(c,2)) { goto L_801B5A54; } // 801B5A0C
  c->r[3]=c->r[29]+0x00001680u; // 801B5A10
  c->lr=0x801B5A18u; f_801AAE40(c); // 801B5A14
  c->r[30]=0u+0x00000000u; // 801B5A18
  c->r[3]=c->r[29]+0x000016A8u; // 801B5A1C
  W8(c->r[29]+0x000016AEu,c->r[30]); // 801B5A20
  c->r[4]=0u+0x00000000u; // 801B5A24
  c->r[5]=0u+0x00000006u; // 801B5A28
  c->lr=0x801B5A30u; f_800046B4(c); // 801B5A2C
  c->r[12]=R32(c->r[29]+0x0000167Cu); // 801B5A30
  cmps(c,0,(int32_t)c->r[12],0); // 801B5A34
  if (crb(c,2)) { goto L_801B5A54; } // 801B5A38
  c->r[0]=0u+0x0000000Cu; // 801B5A3C
  c->r[3]=c->r[1]+0x0000000Cu; // 801B5A40
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801B5A44
  c->ctr=c->r[12]; // 801B5A48
  if (true) { c->lr=0x801B5A50u; dispatch(c,c->ctr); } // 801B5A4C
  W32(c->r[29]+0x0000167Cu,c->r[30]); // 801B5A50
L_801B5A54:;
  c->r[0]=R8(c->r[29]+0x00001844u); // 801B5A54
  cmps(c,0,(int32_t)c->r[0],0); // 801B5A58
  if (crb(c,2)) { goto L_801B5A88; } // 801B5A5C
  c->r[12]=R32(c->r[29]+0x000016B8u); // 801B5A60
  c->r[0]=0u+0x00000000u; // 801B5A64
  W8(c->r[29]+0x00001844u,c->r[0]); // 801B5A68
  cmps(c,0,(int32_t)c->r[12],0); // 801B5A6C
  if (crb(c,2)) { goto L_801B5A88; } // 801B5A70
  c->r[0]=0u+0x0000000Cu; // 801B5A74
  c->r[3]=c->r[1]+0x00000008u; // 801B5A78
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B5A7C
  c->ctr=c->r[12]; // 801B5A80
  if (true) { c->lr=0x801B5A88u; dispatch(c,c->ctr); } // 801B5A84
L_801B5A88:;
  c->r[30]=0u+0x00000000u; // 801B5A88
  c->r[31]=0u+0x802D0000u; // 801B5A8C
  c->r[31]=c->r[31]+0x000023D8u; // 801B5A90
  W8(c->r[29]+0x00001847u,c->r[30]); // 801B5A94
  c->r[28]=0u+0x00000000u; // 801B5A98
  W8(c->r[29]+0x00001845u,c->r[30]); // 801B5A9C
  c->r[27]=c->r[31]+0x000016E4u; // 801B5AA0
  W32(c->r[29]+0x000016B4u,c->r[30]); // 801B5AA4
L_801B5AA8:;
  c->r[0]=R8(c->r[27]+0x0000001Au); // 801B5AA8
  cmps(c,0,(int32_t)c->r[0],0); // 801B5AAC
  if (crb(c,2)) { goto L_801B5AD4; } // 801B5AB0
  W8(c->r[27]+0x0000001Au,c->r[30]); // 801B5AB4
  c->r[12]=R32(c->r[31]+0x000016BCu); // 801B5AB8
  cmps(c,0,(int32_t)c->r[12],0); // 801B5ABC
  if (crb(c,2)) { goto L_801B5AD4; } // 801B5AC0
  c->r[3]=c->r[27]+0x00000008u; // 801B5AC4
  c->r[4]=0u+0x00000000u; // 801B5AC8
  c->ctr=c->r[12]; // 801B5ACC
  if (true) { c->lr=0x801B5AD4u; dispatch(c,c->ctr); } // 801B5AD0
L_801B5AD4:;
  c->r[28]=c->r[28]+0x00000001u; // 801B5AD4
  c->r[27]=c->r[27]+0x0000001Cu; // 801B5AD8
  cmpu(c,0,c->r[28],0x0000000Cu); // 801B5ADC
  if (crb(c,0)) { IRQCHK(c); goto L_801B5AA8; } // 801B5AE0
  c->r[31]=0u+0x802D0000u; // 801B5AE4
  c->r[31]=c->r[31]+0x000023D8u; // 801B5AE8
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801B5AEC
  cmps(c,0,(int32_t)c->r[3],0); // 801B5AF0
  if (crb(c,2)) { goto L_801B5B04; } // 801B5AF4
  c->lr=0x801B5AFCu; f_801A7D00(c); // 801B5AF8
  c->r[0]=0u+0x00000000u; // 801B5AFC
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801B5B00
L_801B5B04:;
  c->r[0]=0u+0x00000000u; // 801B5B04
  c->r[11]=c->r[1]+0x00000120u; // 801B5B08
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801B5B0C
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801B5B10
  W16(c->r[29]+0x00001698u,c->r[0]); // 801B5B14
  W16(c->r[29]+0x0000169Au,c->r[0]); // 801B5B18
  W16(c->r[29]+0x000016A6u,c->r[0]); // 801B5B1C
  W16(c->r[29]+0x000016A4u,c->r[0]); // 801B5B20
  c->lr=0x801B5B28u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5B24
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B5B28
  c->lr=c->r[0]; // 801B5B2C
  c->r[1]=c->r[1]+0x00000120u; // 801B5B30
  return; // 801B5B34
}

// btm_inq_db_init
void f_801B5B38(Ctx* __restrict c) {
  trace_call(0x801B5B38u);
  return; // 801B5B38
}

// btm_inq_find_bdaddr
void f_801B5B3C(Ctx* __restrict c) {
  trace_call(0x801B5B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5B3C
  c->r[0]=c->lr; // 801B5B40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5B44
  c->r[11]=c->r[1]+0x00000020u; // 801B5B48
  c->lr=0x801B5B50u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5B4C
  c->r[31]=0u+0x802D0000u; // 801B5B50
  c->r[27]=c->r[3]|c->r[3]; // 801B5B54
  c->r[31]=c->r[31]+0x000023D8u; // 801B5B58
  c->r[0]=R8(c->r[31]+0x00001848u); // 801B5B5C
  c->r[29]=R32(c->r[31]+0x000016DCu); // 801B5B60
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B5B64
  if (!crb(c,2)) { goto L_801B5B74; } // 801B5B68
  cmps(c,0,(int32_t)c->r[29],0); // 801B5B6C
  if (!crb(c,2)) { goto L_801B5B7C; } // 801B5B70
L_801B5B74:;
  c->r[3]=0u+0x00000000u; // 801B5B74
  goto L_801B5C00; // 801B5B78
L_801B5B7C:;
  c->r[30]=R16(c->r[31]+0x000016E0u); // 801B5B7C
  c->r[28]=0u+0x00000000u; // 801B5B80
  goto L_801B5BC0; // 801B5B84
L_801B5B88:;
  c->r[4]=c->r[27]|c->r[27]; // 801B5B88
  c->r[3]=c->r[29]+0x00000004u; // 801B5B8C
  c->r[5]=0u+0x00000006u; // 801B5B90
  c->lr=0x801B5B98u; f_801D8F78(c); // 801B5B94
  cmps(c,0,(int32_t)c->r[3],0); // 801B5B98
  if (!crb(c,2)) { goto L_801B5BB8; } // 801B5B9C
  c->r[3]=R32(c->r[29]+0x00000000u); // 801B5BA0
  c->r[0]=R32(c->r[31]+0x000016C0u); // 801B5BA4
  cmpu(c,0,c->r[3],c->r[0]); // 801B5BA8
  if (!crb(c,2)) { goto L_801B5BB8; } // 801B5BAC
  c->r[3]=0u+0x00000001u; // 801B5BB0
  goto L_801B5C00; // 801B5BB4
L_801B5BB8:;
  c->r[28]=c->r[28]+0x00000001u; // 801B5BB8
  c->r[29]=c->r[29]+0x0000000Cu; // 801B5BBC
L_801B5BC0:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801B5BC0
  cmpu(c,0,c->r[3],c->r[30]); // 801B5BC4
  if (crb(c,0)) { IRQCHK(c); goto L_801B5B88; } // 801B5BC8
  c->r[0]=R16(c->r[31]+0x000016E2u); // 801B5BCC
  cmpu(c,0,c->r[3],c->r[0]); // 801B5BD0
  if (!crb(c,0)) { goto L_801B5BFC; } // 801B5BD4
  c->r[0]=R32(c->r[31]+0x000016C0u); // 801B5BD8
  c->r[4]=c->r[27]|c->r[27]; // 801B5BDC
  c->r[3]=c->r[29]+0x00000004u; // 801B5BE0
  c->r[5]=0u+0x00000006u; // 801B5BE4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801B5BE8
  c->lr=0x801B5BF0u; f_80004364(c); // 801B5BEC
  c->r[3]=R16(c->r[31]+0x000016E0u); // 801B5BF0
  c->r[0]=c->r[3]+0x00000001u; // 801B5BF4
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801B5BF8
L_801B5BFC:;
  c->r[3]=0u+0x00000000u; // 801B5BFC
L_801B5C00:;
  c->r[11]=c->r[1]+0x00000020u; // 801B5C00
  c->lr=0x801B5C08u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5C04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5C08
  c->lr=c->r[0]; // 801B5C0C
  c->r[1]=c->r[1]+0x00000020u; // 801B5C10
  return; // 801B5C14
}

// btm_inq_db_new
void f_801B5C18(Ctx* __restrict c) {
  trace_call(0x801B5C18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5C18
  c->r[0]=c->lr; // 801B5C1C
  c->r[4]=0u+0x802D0000u; // 801B5C20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5C24
  c->r[4]=c->r[4]+0x000023D8u; // 801B5C28
  c->r[0]=0u+0x0000000Cu; // 801B5C2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5C30
  c->r[31]=c->r[4]+0x000016E4u; // 801B5C34
  c->r[4]=0u+0xFFFFFFFFu; // 801B5C38
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5C3C
  c->r[30]=c->r[31]|c->r[31]; // 801B5C40
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5C44
  c->r[29]=c->r[3]|c->r[3]; // 801B5C48
  c->r[3]=0u+0x00000000u; // 801B5C4C
  c->ctr=c->r[0]; // 801B5C50
L_801B5C54:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801B5C54
  cmps(c,0,(int32_t)c->r[0],0); // 801B5C58
  if (!crb(c,2)) { goto L_801B5C90; } // 801B5C5C
  c->r[3]=c->r[31]|c->r[31]; // 801B5C60
  c->r[4]=0u+0x00000000u; // 801B5C64
  c->r[5]=0u+0x0000001Cu; // 801B5C68
  c->lr=0x801B5C70u; f_800046B4(c); // 801B5C6C
  c->r[4]=c->r[29]|c->r[29]; // 801B5C70
  c->r[3]=c->r[31]+0x0000000Au; // 801B5C74
  c->r[5]=0u+0x00000006u; // 801B5C78
  c->lr=0x801B5C80u; f_80004364(c); // 801B5C7C
  c->r[0]=0u+0x00000001u; // 801B5C80
  c->r[3]=c->r[31]|c->r[31]; // 801B5C84
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801B5C88
  goto L_801B5D00; // 801B5C8C
L_801B5C90:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801B5C90
  cmpu(c,0,c->r[0],c->r[4]); // 801B5C94
  if (!crb(c,0)) { goto L_801B5CA4; } // 801B5C98
  c->r[30]=c->r[31]|c->r[31]; // 801B5C9C
  c->r[4]=c->r[0]|c->r[0]; // 801B5CA0
L_801B5CA4:;
  c->r[3]=c->r[3]+0x00000001u; // 801B5CA4
  c->r[31]=c->r[31]+0x0000001Cu; // 801B5CA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B5C54; } // 801B5CAC
  c->r[3]=0u+0x802D0000u; // 801B5CB0
  c->r[3]=c->r[3]+0x000023D8u; // 801B5CB4
  c->r[12]=R32(c->r[3]+0x000016BCu); // 801B5CB8
  cmps(c,0,(int32_t)c->r[12],0); // 801B5CBC
  if (crb(c,2)) { goto L_801B5CD4; } // 801B5CC0
  c->r[3]=c->r[30]+0x00000008u; // 801B5CC4
  c->r[4]=0u+0x00000000u; // 801B5CC8
  c->ctr=c->r[12]; // 801B5CCC
  if (true) { c->lr=0x801B5CD4u; dispatch(c,c->ctr); } // 801B5CD0
L_801B5CD4:;
  c->r[3]=c->r[30]|c->r[30]; // 801B5CD4
  c->r[4]=0u+0x00000000u; // 801B5CD8
  c->r[5]=0u+0x0000001Cu; // 801B5CDC
  c->lr=0x801B5CE4u; f_800046B4(c); // 801B5CE0
  c->r[4]=c->r[29]|c->r[29]; // 801B5CE4
  c->r[3]=c->r[30]+0x0000000Au; // 801B5CE8
  c->r[5]=0u+0x00000006u; // 801B5CEC
  c->lr=0x801B5CF4u; f_80004364(c); // 801B5CF0
  c->r[0]=0u+0x00000001u; // 801B5CF4
  c->r[3]=c->r[30]|c->r[30]; // 801B5CF8
  W8(c->r[30]+0x0000001Au,c->r[0]); // 801B5CFC
L_801B5D00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B5D00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B5D04
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B5D08
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B5D0C
  c->lr=c->r[0]; // 801B5D10
  c->r[1]=c->r[1]+0x00000020u; // 801B5D14
  return; // 801B5D18
}

// btm_set_inq_event_filter
void f_801B5D1C(Ctx* __restrict c) {
  trace_call(0x801B5D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5D1C
  c->r[0]=c->lr; // 801B5D20
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B5D24
  c->r[11]=c->r[1]+0x00000030u; // 801B5D28
  c->lr=0x801B5D30u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B5D2C
  c->r[27]=c->r[3]|c->r[3]; // 801B5D30
  c->r[28]=c->r[4]|c->r[4]; // 801B5D34
  c->r[29]=c->r[1]+0x00000008u; // 801B5D38
  c->r[30]=0u+0x00000006u; // 801B5D3C
  c->r[3]=0u+0x00000002u; // 801B5D40
  c->lr=0x801B5D48u; f_801A7C10(c); // 801B5D44
  cmps(c,0,(int32_t)c->r[3],0); // 801B5D48
  c->r[31]=c->r[3]|c->r[3]; // 801B5D4C
  if (crb(c,2)) { goto L_801B5DE4; } // 801B5D50
  cmps(c,0,(int32_t)c->r[27],1); // 801B5D54
  if (crb(c,2)) { goto L_801B5D78; } // 801B5D58
  if (!crb(c,0)) { goto L_801B5D6C; } // 801B5D5C
  cmps(c,0,(int32_t)c->r[27],0); // 801B5D60
  if (!crb(c,0)) { goto L_801B5DA4; } // 801B5D64
  goto L_801B5DAC; // 801B5D68
L_801B5D6C:;
  cmps(c,0,(int32_t)c->r[27],3); // 801B5D6C
  if (!crb(c,0)) { goto L_801B5DAC; } // 801B5D70
  goto L_801B5D9C; // 801B5D74
L_801B5D78:;
  c->r[3]=c->r[29]|c->r[29]; // 801B5D78
  c->r[4]=c->r[28]|c->r[28]; // 801B5D7C
  c->r[5]=0u+0x00000003u; // 801B5D80
  c->lr=0x801B5D88u; f_80004364(c); // 801B5D84
  c->r[3]=c->r[1]+0x0000000Bu; // 801B5D88
  c->r[4]=c->r[28]+0x00000003u; // 801B5D8C
  c->r[5]=0u+0x00000003u; // 801B5D90
  c->lr=0x801B5D98u; f_80004364(c); // 801B5D94
  goto L_801B5DB4; // 801B5D98
L_801B5D9C:;
  c->r[29]=c->r[28]|c->r[28]; // 801B5D9C
  goto L_801B5DB4; // 801B5DA0
L_801B5DA4:;
  c->r[30]=0u+0x00000000u; // 801B5DA4
  goto L_801B5DB4; // 801B5DA8
L_801B5DAC:;
  c->r[3]=0u+0x00000005u; // 801B5DAC
  goto L_801B5DE8; // 801B5DB0
L_801B5DB4:;
  c->r[4]=0u+0x802D0000u; // 801B5DB4
  c->r[0]=0u+0x00000001u; // 801B5DB8
  c->r[4]=c->r[4]+0x000023D8u; // 801B5DBC
  c->r[3]=c->r[31]|c->r[31]; // 801B5DC0
  W8(c->r[4]+0x00001844u,c->r[0]); // 801B5DC4
  c->r[5]=c->r[27]|c->r[27]; // 801B5DC8
  c->r[6]=c->r[29]|c->r[29]; // 801B5DCC
  c->r[7]=c->r[30]|c->r[30]; // 801B5DD0
  c->r[4]=0u+0x00000001u; // 801B5DD4
  c->lr=0x801B5DDCu; f_801BEBBC(c); // 801B5DD8
  c->r[3]=0u+0x00000001u; // 801B5DDC
  goto L_801B5DE8; // 801B5DE0
L_801B5DE4:;
  c->r[3]=0u+0x00000003u; // 801B5DE4
L_801B5DE8:;
  c->r[11]=c->r[1]+0x00000030u; // 801B5DE8
  c->lr=0x801B5DF0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B5DEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B5DF0
  c->lr=c->r[0]; // 801B5DF4
  c->r[1]=c->r[1]+0x00000030u; // 801B5DF8
  return; // 801B5DFC
}

// btm_event_filter_complete
void f_801B5E00(Ctx* __restrict c) {
  trace_call(0x801B5E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B5E00
  c->r[0]=c->lr; // 801B5E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B5E08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B5E0C
  c->r[31]=0u+0x802D0000u; // 801B5E10
  c->r[31]=c->r[31]+0x000023D8u; // 801B5E14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B5E18
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B5E1C
  c->r[4]=R8(c->r[31]+0x00001845u); // 801B5E20
  c->r[29]=R32(c->r[31]+0x000016B8u); // 801B5E24
  cmps(c,0,(int32_t)c->r[4],0); // 801B5E28
  if (crb(c,2)) { goto L_801B5E3C; } // 801B5E2C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B5E30
  W8(c->r[31]+0x00001845u,c->r[0]); // 801B5E34
  goto L_801B6004; // 801B5E38
L_801B5E3C:;
  c->r[0]=R8(c->r[31]+0x00001844u); // 801B5E3C
  cmpu(c,0,c->r[0],0x00000001u); // 801B5E40
  if (!crb(c,2)) { goto L_801B6004; } // 801B5E44
  c->r[5]=R8(c->r[3]+0x00000000u); // 801B5E48
  cmps(c,0,(int32_t)c->r[5],0); // 801B5E4C
  if (crb(c,2)) { goto L_801B5E80; } // 801B5E50
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801B5E54
  cmpu(c,0,c->r[0],0x00000002u); // 801B5E58
  if (crb(c,0)) { goto L_801B5E74; } // 801B5E5C
  c->r[3]=0u+0x000D0000u; // 801B5E60
  c->r[4]=0u+0x80240000u; // 801B5E64
  c->r[3]=c->r[3]+0x00000001u; // 801B5E68
  c->r[4]=c->r[4]+0x00005670u; // 801B5E6C
  c->lr=0x801B5E74u; f_801AA7E0(c); // 801B5E70
L_801B5E74:;
  c->r[0]=0u+0x0000000Au; // 801B5E74
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B5E78
  goto L_801B5E88; // 801B5E7C
L_801B5E80:;
  c->r[0]=0u+0x00000000u; // 801B5E80
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B5E84
L_801B5E88:;
  c->r[3]=R8(c->r[31]+0x00001847u); // 801B5E88
  cmps(c,0,(int32_t)c->r[3],0); // 801B5E8C
  if (!crb(c,2)) { goto L_801B5EB8; } // 801B5E90
  c->r[0]=0u+0x00000000u; // 801B5E94
  cmps(c,0,(int32_t)c->r[29],0); // 801B5E98
  W8(c->r[31]+0x00001844u,c->r[0]); // 801B5E9C
  if (crb(c,2)) { goto L_801B6004; } // 801B5EA0
  c->r[12]=c->r[29]|c->r[29]; // 801B5EA4
  c->r[3]=c->r[1]+0x00000008u; // 801B5EA8
  c->ctr=c->r[12]; // 801B5EAC
  if (true) { c->lr=0x801B5EB4u; dispatch(c,c->ctr); } // 801B5EB0
  goto L_801B6004; // 801B5EB4
L_801B5EB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801B5EB8
  if (crb(c,2)) { goto L_801B5EDC; } // 801B5EBC
  c->r[3]=0u+0x0000000Au; // 801B5EC0
  c->lr=0x801B5EC8u; f_801B6298(c); // 801B5EC4
  c->r[0]=0u+0x00000000u; // 801B5EC8
  W8(c->r[31]+0x00001844u,c->r[0]); // 801B5ECC
  W8(c->r[31]+0x00001848u,c->r[0]); // 801B5ED0
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B5ED4
  goto L_801B6004; // 801B5ED8
L_801B5EDC:;
  cmpu(c,0,c->r[3],0x00000001u); // 801B5EDC
  if (!crb(c,2)) { goto L_801B5F20; } // 801B5EE0
  c->r[3]=R8(c->r[31]+0x00001837u); // 801B5EE4
  c->r[4]=c->r[31]+0x00001838u; // 801B5EE8
  c->lr=0x801B5EF0u; f_801B5D1C(c); // 801B5EEC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B5EF0
  W8(c->r[1]+0x00000008u,c->r[3]); // 801B5EF4
  cmpu(c,0,c->r[0],0x00000001u); // 801B5EF8
  if (!crb(c,2)) { goto L_801B5F0C; } // 801B5EFC
  c->r[0]=0u+0x00000002u; // 801B5F00
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B5F04
  goto L_801B6004; // 801B5F08
L_801B5F0C:;
  c->r[0]=0u+0x00000000u; // 801B5F0C
  c->r[3]=0u+0x0000000Au; // 801B5F10
  W8(c->r[31]+0x00001844u,c->r[0]); // 801B5F14
  c->lr=0x801B5F1Cu; f_801B6298(c); // 801B5F18
  goto L_801B6004; // 801B5F1C
L_801B5F20:;
  c->r[4]=R8(c->r[31]+0x00001836u); // 801B5F20
  c->r[0]=0u+0x00000003u; // 801B5F24
  c->r[3]=0u+0x00000000u; // 801B5F28
  W8(c->r[31]+0x00001847u,c->r[0]); // 801B5F2C
  cmpu(c,0,c->r[4],0x0000000Cu); // 801B5F30
  c->r[0]=0u+0x0000000Cu; // 801B5F34
  W8(c->r[31]+0x00001844u,c->r[3]); // 801B5F38
  if (crb(c,1)) { goto L_801B5F44; } // 801B5F3C
  c->r[0]=c->r[4]|c->r[4]; // 801B5F40
L_801B5F44:;
  c->r[3]=R8(c->r[31]+0x00001848u); // 801B5F44
  c->r[29]=c->r[2]+0xFFFFAE48u; // 801B5F48
  W8(c->r[31]+0x00001836u,c->r[0]); // 801B5F4C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801B5F50
  if (crb(c,2)) { goto L_801B5F5C; } // 801B5F54
  c->r[29]=c->r[2]+0xFFFFAE4Cu; // 801B5F58
L_801B5F5C:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B5F5C
  if (crb(c,2)) { goto L_801B5F90; } // 801B5F60
  c->r[3]=R16(c->r[31]+0x00001842u); // 801B5F64
  c->r[5]=c->r[29]|c->r[29]; // 801B5F68
  c->r[4]=R16(c->r[31]+0x00001840u); // 801B5F6C
  c->r[6]=R8(c->r[31]+0x00001835u); // 801B5F70
  c->r[7]=R8(c->r[31]+0x00001836u); // 801B5F74
  c->lr=0x801B5F7Cu; f_801BD7E4(c); // 801B5F78
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B5F7C
  if (!crb(c,2)) { goto L_801B6004; } // 801B5F80
  c->r[3]=0u+0x00000003u; // 801B5F84
  c->lr=0x801B5F8Cu; f_801B6298(c); // 801B5F88
  goto L_801B6004; // 801B5F8C
L_801B5F90:;
  c->r[30]=0u+0x802D0000u; // 801B5F90
  c->r[30]=c->r[30]+0x000023D8u; // 801B5F94
  c->r[3]=R32(c->r[30]+0x000016DCu); // 801B5F98
  cmps(c,0,(int32_t)c->r[3],0); // 801B5F9C
  if (crb(c,2)) { goto L_801B5FB0; } // 801B5FA0
  c->lr=0x801B5FA8u; f_801A7D00(c); // 801B5FA4
  c->r[0]=0u+0x00000000u; // 801B5FA8
  W32(c->r[30]+0x000016DCu,c->r[0]); // 801B5FAC
L_801B5FB0:;
  c->r[0]=0u+0x00000000u; // 801B5FB0
  c->r[3]=0u+0x00000708u; // 801B5FB4
  W16(c->r[30]+0x000016E0u,c->r[0]); // 801B5FB8
  W16(c->r[30]+0x000016E2u,c->r[0]); // 801B5FBC
  c->lr=0x801B5FC4u; f_801A7A70(c); // 801B5FC0
  cmps(c,0,(int32_t)c->r[3],0); // 801B5FC4
  W32(c->r[31]+0x000016DCu,c->r[3]); // 801B5FC8
  if (crb(c,2)) { goto L_801B5FE4; } // 801B5FCC
  c->r[0]=0u+0x00000096u; // 801B5FD0
  c->r[4]=0u+0x00000000u; // 801B5FD4
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801B5FD8
  c->r[5]=0u+0x00000708u; // 801B5FDC
  c->lr=0x801B5FE4u; f_800046B4(c); // 801B5FE0
L_801B5FE4:;
  c->r[4]=R8(c->r[31]+0x00001835u); // 801B5FE4
  c->r[3]=c->r[29]|c->r[29]; // 801B5FE8
  c->r[5]=0u+0x00000000u; // 801B5FEC
  c->lr=0x801B5FF4u; f_801BD6DC(c); // 801B5FF0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B5FF4
  if (!crb(c,2)) { goto L_801B6004; } // 801B5FF8
  c->r[3]=0u+0x00000003u; // 801B5FFC
  c->lr=0x801B6004u; f_801B6298(c); // 801B6000
L_801B6004:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6004
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6008
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B600C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6010
  c->lr=c->r[0]; // 801B6014
  c->r[1]=c->r[1]+0x00000020u; // 801B6018
  return; // 801B601C
}

// btm_process_inq_results
void f_801B6020(Ctx* __restrict c) {
  trace_call(0x801B6020u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6020
  c->r[0]=c->lr; // 801B6024
  W32(c->r[1]+0x00000064u,c->r[0]); // 801B6028
  c->r[11]=c->r[1]+0x00000060u; // 801B602C
  c->lr=0x801B6034u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6030
  c->r[5]=0u+0x802D0000u; // 801B6034
  c->r[18]=c->r[4]|c->r[4]; // 801B6038
  c->r[27]=c->r[5]+0x000023D8u; // 801B603C
  c->r[23]=0u+0x00000001u; // 801B6040
  c->r[0]=R8(c->r[27]+0x00001848u); // 801B6044
  c->r[21]=0u+0x00000000u; // 801B6048
  c->r[22]=R32(c->r[27]+0x000016B4u); // 801B604C
  c->r[20]=0u+0x00000000u; // 801B6050
  cmps(c,0,(int32_t)c->r[0],0); // 801B6054
  if (crb(c,2)) { goto L_801B6280; } // 801B6058
  c->r[28]=R8(c->r[3]+0x00000000u); // 801B605C
  c->r[17]=c->r[3]+0x00000001u; // 801B6060
  c->r[26]=0u+0x00000000u; // 801B6064
  c->r[31]=0u+0x0000007Fu; // 801B6068
  c->r[16]=0u+0x00000000u; // 801B606C
  goto L_801B6274; // 801B6070
L_801B6074:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 801B6074
  cmps(c,0,(int32_t)c->r[18],0); // 801B6078
  W8(c->r[1]+0x00000011u,c->r[0]); // 801B607C
  c->r[0]=R8(c->r[17]+0x00000001u); // 801B6080
  W8(c->r[1]+0x00000010u,c->r[0]); // 801B6084
  c->r[0]=R8(c->r[17]+0x00000002u); // 801B6088
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801B608C
  c->r[0]=R8(c->r[17]+0x00000003u); // 801B6090
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801B6094
  c->r[0]=R8(c->r[17]+0x00000004u); // 801B6098
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801B609C
  c->r[0]=R8(c->r[17]+0x00000005u); // 801B60A0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B60A4
  c->r[29]=R8(c->r[17]+0x00000006u); // 801B60A8
  c->r[30]=R8(c->r[17]+0x00000007u); // 801B60AC
  c->r[17]=c->r[17]+0x00000008u; // 801B60B0
  if (!crb(c,2)) { goto L_801B60C0; } // 801B60B4
  c->r[21]=R8(c->r[17]+0x00000000u); // 801B60B8
  c->r[17]=c->r[17]+0x00000001u; // 801B60BC
L_801B60C0:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 801B60C0
  cmps(c,0,(int32_t)c->r[18],0); // 801B60C4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801B60C8
  c->r[0]=R8(c->r[17]+0x00000001u); // 801B60CC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801B60D0
  c->r[0]=R8(c->r[17]+0x00000002u); // 801B60D4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801B60D8
  c->r[0]=R8(c->r[17]+0x00000004u); // 801B60DC
  c->r[3]=R8(c->r[17]+0x00000003u); // 801B60E0
  c->r[17]=c->r[17]+0x00000005u; // 801B60E4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801B60E8
  c->r[0]=c->r[3]+c->r[0]; // 801B60EC
  c->r[19]=rotl(c->r[0],0)&0x0000FFFFu; // 801B60F0
  if (crb(c,2)) { goto L_801B6100; } // 801B60F4
  c->r[20]=R8(c->r[17]+0x00000000u); // 801B60F8
  c->r[17]=c->r[17]+0x00000001u; // 801B60FC
L_801B6100:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801B6100
  c->lr=0x801B6108u; f_801B5B3C(c); // 801B6104
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B6108
  if (!crb(c,2)) { goto L_801B6270; } // 801B610C
  c->r[12]=R32(c->r[27]+0x0000184Cu); // 801B6110
  cmps(c,0,(int32_t)c->r[12],0); // 801B6114
  if (crb(c,2)) { goto L_801B6134; } // 801B6118
  c->r[3]=c->r[1]+0x0000000Cu; // 801B611C
  c->r[4]=c->r[1]+0x00000008u; // 801B6120
  c->ctr=c->r[12]; // 801B6124
  if (true) { c->lr=0x801B612Cu; dispatch(c,c->ctr); } // 801B6128
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B612C
  if (crb(c,2)) { goto L_801B6270; } // 801B6130
L_801B6134:;
  c->r[25]=c->r[27]+0x000016E4u; // 801B6134
  c->r[24]=0u+0x00000000u; // 801B6138
L_801B613C:;
  c->r[0]=R8(c->r[25]+0x0000001Au); // 801B613C
  cmps(c,0,(int32_t)c->r[0],0); // 801B6140
  if (crb(c,2)) { goto L_801B6164; } // 801B6144
  c->r[3]=c->r[25]+0x0000000Au; // 801B6148
  c->r[4]=c->r[1]+0x0000000Cu; // 801B614C
  c->r[5]=0u+0x00000006u; // 801B6150
  c->lr=0x801B6158u; f_801D8F78(c); // 801B6154
  cmps(c,0,(int32_t)c->r[3],0); // 801B6158
  if (!crb(c,2)) { goto L_801B6164; } // 801B615C
  goto L_801B6178; // 801B6160
L_801B6164:;
  c->r[24]=c->r[24]+0x00000001u; // 801B6164
  c->r[25]=c->r[25]+0x0000001Cu; // 801B6168
  cmpu(c,0,c->r[24],0x0000000Cu); // 801B616C
  if (crb(c,0)) { IRQCHK(c); goto L_801B613C; } // 801B6170
  c->r[25]=0u+0x00000000u; // 801B6174
L_801B6178:;
  cmps(c,0,(int32_t)c->r[25],0); // 801B6178
  if (!crb(c,2)) { goto L_801B6194; } // 801B617C
  c->r[3]=c->r[1]+0x0000000Cu; // 801B6180
  c->lr=0x801B6188u; f_801B5C18(c); // 801B6184
  c->r[25]=c->r[3]|c->r[3]; // 801B6188
  c->r[23]=0u+0x00000001u; // 801B618C
  goto L_801B61A8; // 801B6190
L_801B6194:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 801B6194
  c->r[0]=R32(c->r[27]+0x000016C0u); // 801B6198
  cmpu(c,0,c->r[3],c->r[0]); // 801B619C
  if (!crb(c,2)) { goto L_801B61A8; } // 801B61A0
  c->r[23]=0u+0x00000000u; // 801B61A4
L_801B61A8:;
  cmpu(c,0,c->r[23],0x00000001u); // 801B61A8
  if (!crb(c,2)) { goto L_801B6270; } // 801B61AC
  W8(c->r[25]+0x00000013u,c->r[29]); // 801B61B0
  cmps(c,0,(int32_t)c->r[18],0); // 801B61B4
  c->r[5]=R8(c->r[1]+0x00000008u); // 801B61B8
  c->r[0]=c->r[19]|0x00008000u; // 801B61BC
  W8(c->r[25]+0x00000014u,c->r[30]); // 801B61C0
  c->r[24]=c->r[25]+0x00000008u; // 801B61C4
  c->r[4]=R8(c->r[1]+0x00000009u); // 801B61C8
  W8(c->r[25]+0x00000015u,c->r[21]); // 801B61CC
  c->r[3]=R8(c->r[1]+0x0000000Au); // 801B61D0
  W8(c->r[25]+0x00000010u,c->r[5]); // 801B61D4
  W8(c->r[25]+0x00000011u,c->r[4]); // 801B61D8
  W8(c->r[25]+0x00000012u,c->r[3]); // 801B61DC
  W16(c->r[25]+0x00000008u,c->r[0]); // 801B61E0
  if (crb(c,2)) { goto L_801B61F0; } // 801B61E4
  W8(c->r[24]+0x0000000Eu,c->r[20]); // 801B61E8
  goto L_801B61F4; // 801B61EC
L_801B61F0:;
  W8(c->r[24]+0x0000000Eu,c->r[31]); // 801B61F0
L_801B61F4:;
  c->lr=0x801B61F8u; f_801A8AE0(c); // 801B61F4
  W32(c->r[25]+0x00000000u,c->r[3]); // 801B61F8
  c->r[0]=R32(c->r[27]+0x000016C0u); // 801B61FC
  W32(c->r[25]+0x00000004u,c->r[0]); // 801B6200
  c->r[0]=R8(c->r[27]+0x00001848u); // 801B6204
  c->r[3]=R8(c->r[27]+0x0000183Fu); // 801B6208
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B620C
  c->r[0]=c->r[3]+0x00000001u; // 801B6210
  W8(c->r[27]+0x0000183Fu,c->r[0]); // 801B6214
  if (!crb(c,2)) { goto L_801B6238; } // 801B6218
  c->r[3]=R8(c->r[27]+0x00001836u); // 801B621C
  cmps(c,0,(int32_t)c->r[3],0); // 801B6220
  if (crb(c,2)) { goto L_801B6238; } // 801B6224
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B6228
  cmpu(c,0,c->r[0],c->r[3]); // 801B622C
  if (!crb(c,2)) { goto L_801B6238; } // 801B6230
  c->lr=0x801B6238u; f_801BD784(c); // 801B6234
L_801B6238:;
  cmps(c,0,(int32_t)c->r[22],0); // 801B6238
  W8(c->r[25]+0x00000018u,c->r[16]); // 801B623C
  if (crb(c,2)) { goto L_801B6254; } // 801B6240
  c->r[12]=c->r[22]|c->r[22]; // 801B6244
  c->r[3]=c->r[24]|c->r[24]; // 801B6248
  c->ctr=c->r[12]; // 801B624C
  if (true) { c->lr=0x801B6254u; dispatch(c,c->ctr); } // 801B6250
L_801B6254:;
  c->r[12]=R32(c->r[27]+0x000016BCu); // 801B6254
  cmps(c,0,(int32_t)c->r[12],0); // 801B6258
  if (crb(c,2)) { goto L_801B6270; } // 801B625C
  c->r[3]=c->r[25]+0x00000008u; // 801B6260
  c->r[4]=0u+0x00000001u; // 801B6264
  c->ctr=c->r[12]; // 801B6268
  if (true) { c->lr=0x801B6270u; dispatch(c,c->ctr); } // 801B626C
L_801B6270:;
  c->r[26]=c->r[26]+0x00000001u; // 801B6270
L_801B6274:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 801B6274
  cmpu(c,0,c->r[0],c->r[28]); // 801B6278
  if (crb(c,0)) { IRQCHK(c); goto L_801B6074; } // 801B627C
L_801B6280:;
  c->r[11]=c->r[1]+0x00000060u; // 801B6280
  c->lr=0x801B6288u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6284
  c->r[0]=R32(c->r[1]+0x00000064u); // 801B6288
  c->lr=c->r[0]; // 801B628C
  c->r[1]=c->r[1]+0x00000060u; // 801B6290
  return; // 801B6294
}

// btm_process_inq_complete
void f_801B6298(Ctx* __restrict c) {
  trace_call(0x801B6298u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6298
  c->r[0]=c->lr; // 801B629C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B62A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B62A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B62A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B62AC
  c->r[29]=0u+0x802D0000u; // 801B62B0
  c->r[29]=c->r[29]+0x000023D8u; // 801B62B4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B62B8
  c->r[0]=R8(c->r[29]+0x00001848u); // 801B62BC
  c->r[28]=R32(c->r[29]+0x000016B0u); // 801B62C0
  cmps(c,0,(int32_t)c->r[0],0); // 801B62C4
  if (crb(c,2)) { goto L_801B637C; } // 801B62C8
  c->r[4]=R32(c->r[29]+0x000016C0u); // 801B62CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B62D0
  c->r[3]=0u+0x0000000Au; // 801B62D4
  c->r[0]=c->r[4]+0x00000001u; // 801B62D8
  W32(c->r[29]+0x000016C0u,c->r[0]); // 801B62DC
  if (!crb(c,2)) { goto L_801B62E8; } // 801B62E0
  c->r[3]=0u+0x00000000u; // 801B62E4
L_801B62E8:;
  c->r[0]=R8(c->r[29]+0x00001848u); // 801B62E8
  W8(c->r[29]+0x0000183Eu,c->r[3]); // 801B62EC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B62F0
  if (!crb(c,2)) { goto L_801B637C; } // 801B62F4
  c->r[31]=0u+0x802D0000u; // 801B62F8
  c->r[30]=0u+0x00000000u; // 801B62FC
  c->r[31]=c->r[31]+0x000023D8u; // 801B6300
  W32(c->r[29]+0x000016B4u,c->r[30]); // 801B6304
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801B6308
  W8(c->r[29]+0x00001848u,c->r[30]); // 801B630C
  cmps(c,0,(int32_t)c->r[3],0); // 801B6310
  W8(c->r[29]+0x00001847u,c->r[30]); // 801B6314
  W32(c->r[29]+0x000016B0u,c->r[30]); // 801B6318
  if (crb(c,2)) { goto L_801B6328; } // 801B631C
  c->lr=0x801B6324u; f_801A7D00(c); // 801B6320
  W32(c->r[31]+0x000016DCu,c->r[30]); // 801B6324
L_801B6328:;
  c->r[3]=0u+0x802D0000u; // 801B6328
  c->r[4]=0u+0x00000000u; // 801B632C
  c->r[3]=c->r[3]+0x000023D8u; // 801B6330
  W16(c->r[31]+0x000016E0u,c->r[4]); // 801B6334
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B6338
  W16(c->r[31]+0x000016E2u,c->r[4]); // 801B633C
  cmpu(c,0,c->r[0],0x00000005u); // 801B6340
  if (crb(c,0)) { goto L_801B6364; } // 801B6344
  c->r[3]=0u+0x000D0000u; // 801B6348
  c->r[4]=0u+0x80240000u; // 801B634C
  c->r[5]=R8(c->r[29]+0x0000183Eu); // 801B6350
  c->r[3]=c->r[3]+0x00000004u; // 801B6354
  c->r[6]=R8(c->r[29]+0x0000183Fu); // 801B6358
  c->r[4]=c->r[4]+0x000056ACu; // 801B635C
  c->lr=0x801B6364u; f_801AA800(c); // 801B6360
L_801B6364:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B6364
  if (crb(c,2)) { goto L_801B637C; } // 801B6368
  c->r[12]=c->r[28]|c->r[28]; // 801B636C
  c->r[3]=c->r[29]+0x0000183Eu; // 801B6370
  c->ctr=c->r[12]; // 801B6374
  if (true) { c->lr=0x801B637Cu; dispatch(c,c->ctr); } // 801B6378
L_801B637C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B637C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6380
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B6384
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6388
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B638C
  c->lr=c->r[0]; // 801B6390
  c->r[1]=c->r[1]+0x00000020u; // 801B6394
  return; // 801B6398
}

// btm_initiate_rem_name
void f_801B639C(Ctx* __restrict c) {
  trace_call(0x801B639Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B639C
  c->r[0]=c->lr; // 801B63A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B63A4
  c->r[11]=c->r[1]+0x00000030u; // 801B63A8
  c->lr=0x801B63B0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B63AC
  c->r[31]=0u+0x802D0000u; // 801B63B0
  c->r[23]=c->r[3]|c->r[3]; // 801B63B4
  c->r[24]=c->r[4]|c->r[4]; // 801B63B8
  c->r[25]=c->r[5]|c->r[5]; // 801B63BC
  c->r[26]=c->r[6]|c->r[6]; // 801B63C0
  c->r[27]=c->r[7]|c->r[7]; // 801B63C4
  c->r[31]=c->r[31]+0x000023D8u; // 801B63C8
  c->r[30]=0u+0x00000001u; // 801B63CC
  c->r[29]=0u+0x00000001u; // 801B63D0
  c->r[28]=0u+0x00000001u; // 801B63D4
  c->lr=0x801B63DCu; f_801B33C4(c); // 801B63D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B63DC
  if (!crb(c,2)) { goto L_801B63EC; } // 801B63E0
  c->r[3]=0u+0x00000006u; // 801B63E4
  goto L_801B64D4; // 801B63E8
L_801B63EC:;
  c->r[3]=R8(c->r[31]+0x000016AEu); // 801B63EC
  c->r[0]=c->r[3]&c->r[25]; cr0(c,c->r[0]); // 801B63F0
  if (!crb(c,2)) { goto L_801B64CC; } // 801B63F4
  cmpu(c,0,c->r[25],0x00000001u); // 801B63F8
  if (!crb(c,2)) { goto L_801B6438; } // 801B63FC
  cmps(c,0,(int32_t)c->r[3],0); // 801B6400
  if (crb(c,2)) { goto L_801B6430; } // 801B6404
  c->r[3]=c->r[23]|c->r[23]; // 801B6408
  c->r[4]=c->r[31]+0x000016A8u; // 801B640C
  c->r[5]=0u+0x00000006u; // 801B6410
  c->lr=0x801B6418u; f_801D8F78(c); // 801B6414
  cmps(c,0,(int32_t)c->r[3],0); // 801B6418
  if (!crb(c,2)) { goto L_801B6428; } // 801B641C
  c->r[30]=0u+0x00000000u; // 801B6420
  goto L_801B6430; // 801B6424
L_801B6428:;
  c->r[3]=0u+0x00000002u; // 801B6428
  goto L_801B64D4; // 801B642C
L_801B6430:;
  W32(c->r[31]+0x0000167Cu,c->r[27]); // 801B6430
  goto L_801B6448; // 801B6434
L_801B6438:;
  cmps(c,0,(int32_t)c->r[3],0); // 801B6438
  if (crb(c,2)) { goto L_801B6448; } // 801B643C
  c->r[3]=0u+0x00000002u; // 801B6440
  goto L_801B64D4; // 801B6444
L_801B6448:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B6448
  if (crb(c,2)) { goto L_801B64AC; } // 801B644C
  c->r[4]=c->r[23]|c->r[23]; // 801B6450
  c->r[3]=c->r[31]+0x000016A8u; // 801B6454
  c->r[5]=0u+0x00000006u; // 801B6458
  c->lr=0x801B6460u; f_80004364(c); // 801B645C
  c->r[5]=c->r[26]|c->r[26]; // 801B6460
  c->r[3]=c->r[31]+0x00001680u; // 801B6464
  c->r[4]=0u+0x0000000Au; // 801B6468
  c->lr=0x801B6470u; f_801AADD0(c); // 801B646C
  cmps(c,0,(int32_t)c->r[24],0); // 801B6470
  if (crb(c,2)) { goto L_801B6494; } // 801B6474
  c->r[0]=R16(c->r[24]+0x00000000u); // 801B6478
  c->r[3]=c->r[23]|c->r[23]; // 801B647C
  c->r[4]=R8(c->r[24]+0x0000000Bu); // 801B6480
  c->r[5]=R8(c->r[24]+0x0000000Du); // 801B6484
  c->r[6]=c->r[0]|0x00008000u; // 801B6488
  c->lr=0x801B6490u; f_801BE1B0(c); // 801B648C
  goto L_801B64A8; // 801B6490
L_801B6494:;
  c->r[3]=c->r[23]|c->r[23]; // 801B6494
  c->r[4]=0u+0x00000001u; // 801B6498
  c->r[5]=0u+0x00000000u; // 801B649C
  c->r[6]=0u+0x00000000u; // 801B64A0
  c->lr=0x801B64A8u; f_801BE1B0(c); // 801B64A4
L_801B64A8:;
  c->r[29]=c->r[3]|c->r[3]; // 801B64A8
L_801B64AC:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 801B64AC
  if (crb(c,2)) { goto L_801B64C4; } // 801B64B0
  c->r[0]=R8(c->r[31]+0x000016AEu); // 801B64B4
  c->r[0]=c->r[0]|c->r[25]; // 801B64B8
  W8(c->r[31]+0x000016AEu,c->r[0]); // 801B64BC
  goto L_801B64D0; // 801B64C0
L_801B64C4:;
  c->r[28]=0u+0x00000003u; // 801B64C4
  goto L_801B64D0; // 801B64C8
L_801B64CC:;
  c->r[28]=0u+0x00000002u; // 801B64CC
L_801B64D0:;
  c->r[3]=c->r[28]|c->r[28]; // 801B64D0
L_801B64D4:;
  c->r[11]=c->r[1]+0x00000030u; // 801B64D4
  c->lr=0x801B64DCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B64D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B64DC
  c->lr=c->r[0]; // 801B64E0
  c->r[1]=c->r[1]+0x00000030u; // 801B64E4
  return; // 801B64E8
}

// btm_process_remote_name
void f_801B64EC(Ctx* __restrict c) {
  trace_call(0x801B64ECu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B64EC
  c->r[0]=c->lr; // 801B64F0
  W32(c->r[1]+0x00000124u,c->r[0]); // 801B64F4
  c->r[11]=c->r[1]+0x00000120u; // 801B64F8
  c->lr=0x801B6500u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B64FC
  c->r[31]=0u+0x802D0000u; // 801B6500
  c->r[26]=c->r[4]|c->r[4]; // 801B6504
  c->r[31]=c->r[31]+0x000023D8u; // 801B6508
  c->r[27]=c->r[5]|c->r[5]; // 801B650C
  c->r[30]=R32(c->r[31]+0x0000167Cu); // 801B6510
  c->r[28]=c->r[6]|c->r[6]; // 801B6514
  c->r[29]=R8(c->r[31]+0x000016AEu); // 801B6518
  c->r[3]=c->r[31]+0x00001680u; // 801B651C
  c->lr=0x801B6524u; f_801AAE40(c); // 801B6520
  c->r[3]=0u+0x00000000u; // 801B6524
  cmps(c,0,(int32_t)c->r[28],0); // 801B6528
  W8(c->r[31]+0x000016AEu,c->r[3]); // 801B652C
  if (!crb(c,2)) { goto L_801B65E4; } // 801B6530
  cmpu(c,0,c->r[27],0x000000F8u); // 801B6534
  c->r[4]=c->r[1]+0x0000000Cu; // 801B6538
  c->r[3]=0u+0x000000F8u; // 801B653C
  if (!crb(c,0)) { goto L_801B6548; } // 801B6540
  c->r[3]=c->r[27]|c->r[27]; // 801B6544
L_801B6548:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[5]); // 801B6548
  c->r[0]=0u+0x00000000u; // 801B654C
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801B6550
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B6554
  c->r[3]=c->r[5]|c->r[5]; // 801B6558
  if (crb(c,2)) { goto L_801B65F4; } // 801B655C
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801B6560
  c->ctr=c->r[0]; // 801B6564
  if (crb(c,2)) { goto L_801B65C4; } // 801B6568
L_801B656C:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801B656C
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801B6570
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B6574
  c->r[0]=R8(c->r[26]+0x00000001u); // 801B6578
  W8(c->r[4]+0x00000001u,c->r[0]); // 801B657C
  c->r[0]=R8(c->r[26]+0x00000002u); // 801B6580
  W8(c->r[4]+0x00000002u,c->r[0]); // 801B6584
  c->r[0]=R8(c->r[26]+0x00000003u); // 801B6588
  W8(c->r[4]+0x00000003u,c->r[0]); // 801B658C
  c->r[0]=R8(c->r[26]+0x00000004u); // 801B6590
  W8(c->r[4]+0x00000004u,c->r[0]); // 801B6594
  c->r[0]=R8(c->r[26]+0x00000005u); // 801B6598
  W8(c->r[4]+0x00000005u,c->r[0]); // 801B659C
  c->r[0]=R8(c->r[26]+0x00000006u); // 801B65A0
  W8(c->r[4]+0x00000006u,c->r[0]); // 801B65A4
  c->r[0]=R8(c->r[26]+0x00000007u); // 801B65A8
  c->r[26]=c->r[26]+0x00000008u; // 801B65AC
  W8(c->r[4]+0x00000007u,c->r[0]); // 801B65B0
  c->r[4]=c->r[4]+0x00000008u; // 801B65B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B656C; } // 801B65B8
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801B65BC
  if (crb(c,2)) { goto L_801B65F4; } // 801B65C0
L_801B65C4:;
  c->ctr=c->r[3]; // 801B65C4
L_801B65C8:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801B65C8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B65CC
  c->r[26]=c->r[26]+0x00000001u; // 801B65D0
  W8(c->r[4]+0x00000000u,c->r[0]); // 801B65D4
  c->r[4]=c->r[4]+0x00000001u; // 801B65D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B65C8; } // 801B65DC
  goto L_801B65F4; // 801B65E0
L_801B65E4:;
  c->r[0]=0u+0x00000009u; // 801B65E4
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801B65E8
  W16(c->r[1]+0x00000008u,c->r[0]); // 801B65EC
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801B65F0
L_801B65F4:;
  c->r[3]=c->r[31]+0x000016A8u; // 801B65F4
  c->r[4]=0u+0x00000000u; // 801B65F8
  c->r[5]=0u+0x00000006u; // 801B65FC
  c->lr=0x801B6604u; f_800046B4(c); // 801B6600
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801B6604
  if (crb(c,2)) { goto L_801B662C; } // 801B6608
  c->r[0]=0u+0x00000000u; // 801B660C
  cmps(c,0,(int32_t)c->r[30],0); // 801B6610
  W32(c->r[31]+0x0000167Cu,c->r[0]); // 801B6614
  if (crb(c,2)) { goto L_801B662C; } // 801B6618
  c->r[12]=c->r[30]|c->r[30]; // 801B661C
  c->r[3]=c->r[1]+0x00000008u; // 801B6620
  c->ctr=c->r[12]; // 801B6624
  if (true) { c->lr=0x801B662Cu; dispatch(c,c->ctr); } // 801B6628
L_801B662C:;
  c->r[11]=c->r[1]+0x00000120u; // 801B662C
  c->lr=0x801B6634u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6630
  c->r[0]=R32(c->r[1]+0x00000124u); // 801B6634
  c->lr=c->r[0]; // 801B6638
  c->r[1]=c->r[1]+0x00000120u; // 801B663C
  return; // 801B6640
}

// btm_inq_rmt_name_failed
void f_801B6644(Ctx* __restrict c) {
  trace_call(0x801B6644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6644
  c->r[0]=c->lr; // 801B6648
  c->r[3]=0u+0x00000000u; // 801B664C
  c->r[4]=0u+0x00000000u; // 801B6650
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6654
  c->r[5]=0u+0x00000000u; // 801B6658
  c->r[6]=0u+0x0000001Fu; // 801B665C
  c->lr=0x801B6664u; f_801B64EC(c); // 801B6660
  c->r[3]=0u+0x00000000u; // 801B6664
  c->r[4]=0u+0x00000000u; // 801B6668
  c->r[5]=0u+0x0000001Fu; // 801B666C
  c->lr=0x801B6674u; f_801B9548(c); // 801B6670
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6674
  c->lr=c->r[0]; // 801B6678
  c->r[1]=c->r[1]+0x00000010u; // 801B667C
  return; // 801B6680
}

// btm_init
void f_801B6684(Ctx* __restrict c) {
  trace_call(0x801B6684u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6684
  c->r[0]=c->lr; // 801B6688
  c->r[4]=0u+0x00000000u; // 801B668C
  c->r[5]=0u+0x000027C4u; // 801B6690
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6694
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6698
  c->r[31]=0u+0x802D0000u; // 801B669C
  c->r[3]=c->r[31]+0x000023D8u; // 801B66A0
  c->lr=0x801B66A8u; f_800046B4(c); // 801B66A4
  c->r[3]=c->r[31]+0x000023D8u; // 801B66A8
  c->r[0]=0u+0x00000000u; // 801B66AC
  W8(c->r[3]+0x000027C0u,c->r[0]); // 801B66B0
  c->lr=0x801B66B8u; f_801B5B38(c); // 801B66B4
  c->lr=0x801B66BCu; f_801B0D20(c); // 801B66B8
  c->r[3]=0u+0x00000002u; // 801B66BC
  c->lr=0x801B66C4u; f_801B9438(c); // 801B66C0
  c->lr=0x801B66C8u; f_801B7374(c); // 801B66C4
  c->lr=0x801B66CCu; f_801B3130(c); // 801B66C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B66CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B66D0
  c->lr=c->r[0]; // 801B66D4
  c->r[1]=c->r[1]+0x00000010u; // 801B66D8
  return; // 801B66DC
}

// BTM_PmRegister
void f_801B66E0(Ctx* __restrict c) {
  trace_call(0x801B66E0u);
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801B66E0
  if (crb(c,2)) { goto L_801B671C; } // 801B66E4
  c->r[0]=R8(c->r[4]+0x00000000u); // 801B66E8
  cmpu(c,0,c->r[0],0x00000002u); // 801B66EC
  if (crb(c,0)) { goto L_801B66FC; } // 801B66F0
  c->r[3]=0u+0x00000005u; // 801B66F4
  return; // 801B66F8
L_801B66FC:;
  c->r[3]=0u+0x802D0000u; // 801B66FC
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801B6700
  c->r[3]=c->r[3]+0x000023D8u; // 801B6704
  c->r[5]=0u+0x00000000u; // 801B6708
  c->r[4]=c->r[3]+c->r[0]; // 801B670C
  W8(c->r[4]+0x00000558u,c->r[5]); // 801B6710
  c->r[3]=0u+0x00000000u; // 801B6714
  return; // 801B6718
L_801B671C:;
  c->r[6]=0u+0x802D0000u; // 801B671C
  c->r[0]=0u+0x00000002u; // 801B6720
  c->r[6]=c->r[6]+0x000023D8u; // 801B6724
  c->r[7]=0u+0x00000000u; // 801B6728
  c->ctr=c->r[0]; // 801B672C
L_801B6730:;
  c->r[0]=R8(c->r[6]+0x00000558u); // 801B6730
  cmps(c,0,(int32_t)c->r[0],0); // 801B6734
  if (!crb(c,2)) { goto L_801B6788; } // 801B6738
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801B673C
  if (crb(c,2)) { goto L_801B6768; } // 801B6740
  cmps(c,0,(int32_t)c->r[5],0); // 801B6744
  if (!crb(c,2)) { goto L_801B6754; } // 801B6748
  c->r[3]=0u+0x00000005u; // 801B674C
  return; // 801B6750
L_801B6754:;
  c->r[6]=0u+0x802D0000u; // 801B6754
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801B6758
  c->r[6]=c->r[6]+0x000023D8u; // 801B675C
  c->r[6]=c->r[6]+c->r[0]; // 801B6760
  W32(c->r[6]+0x00000554u,c->r[5]); // 801B6764
L_801B6768:;
  c->r[5]=0u+0x802D0000u; // 801B6768
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801B676C
  c->r[5]=c->r[5]+0x000023D8u; // 801B6770
  c->r[5]=c->r[5]+c->r[0]; // 801B6774
  W8(c->r[5]+0x00000558u,c->r[3]); // 801B6778
  c->r[3]=0u+0x00000000u; // 801B677C
  W8(c->r[4]+0x00000000u,c->r[7]); // 801B6780
  return; // 801B6784
L_801B6788:;
  c->r[6]=c->r[6]+0x00000008u; // 801B6788
  c->r[7]=c->r[7]+0x00000001u; // 801B678C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B6730; } // 801B6790
  c->r[3]=0u+0x00000003u; // 801B6794
  return; // 801B6798
}

// BTM_SetPowerMode
void f_801B679C(Ctx* __restrict c) {
  trace_call(0x801B679Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B679C
  c->r[0]=c->lr; // 801B67A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B67A4
  c->r[11]=c->r[1]+0x00000020u; // 801B67A8
  c->lr=0x801B67B0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B67AC
  cmpu(c,0,c->r[3],0x00000002u); // 801B67B0
  c->r[27]=c->r[3]|c->r[3]; // 801B67B4
  c->r[26]=c->r[4]|c->r[4]; // 801B67B8
  c->r[28]=c->r[5]|c->r[5]; // 801B67BC
  if (crb(c,0)) { goto L_801B67C8; } // 801B67C0
  c->r[27]=0u+0x00000080u; // 801B67C4
L_801B67C8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B67C8
  if (!crb(c,2)) { goto L_801B67D8; } // 801B67CC
  c->r[3]=0u+0x00000005u; // 801B67D0
  goto L_801B6954; // 801B67D4
L_801B67D8:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B67D8
  c->r[3]=0u+0x802D0000u; // 801B67DC
  c->r[3]=c->r[3]+0x000023D8u; // 801B67E0
  c->r[29]=0u+0x00000000u; // 801B67E4
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B67E8
  c->r[30]=c->r[3]+0x00000034u; // 801B67EC
L_801B67F0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B67F0
  cmps(c,0,(int32_t)c->r[0],0); // 801B67F4
  if (crb(c,2)) { goto L_801B6814; } // 801B67F8
  c->r[4]=c->r[26]|c->r[26]; // 801B67FC
  c->r[3]=c->r[30]+0x00000008u; // 801B6800
  c->r[5]=0u+0x00000006u; // 801B6804
  c->lr=0x801B680Cu; f_801D8F78(c); // 801B6808
  cmps(c,0,(int32_t)c->r[3],0); // 801B680C
  if (crb(c,2)) { goto L_801B6824; } // 801B6810
L_801B6814:;
  c->r[29]=c->r[29]+0x00000001u; // 801B6814
  c->r[30]=c->r[30]+0x0000011Cu; // 801B6818
  cmpu(c,0,c->r[29],0x00000004u); // 801B681C
  if (crb(c,0)) { IRQCHK(c); goto L_801B67F0; } // 801B6820
L_801B6824:;
  c->r[30]=rotl(c->r[29],0)&0x000000FFu; // 801B6824
  cmps(c,0,(int32_t)c->r[30],4); // 801B6828
  if (!crb(c,2)) { goto L_801B6838; } // 801B682C
  c->r[3]=0u+0x00000007u; // 801B6830
  goto L_801B6954; // 801B6834
L_801B6838:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 801B6838
  c->r[4]=0u+0x802D0000u; // 801B683C
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[3]); // 801B6840
  c->r[4]=c->r[4]+0x000023D8u; // 801B6844
  c->r[4]=c->r[4]+c->r[0]; // 801B6848
  c->r[29]=c->r[4]+0x000004CCu; // 801B684C
  if (crb(c,2)) { goto L_801B6880; } // 801B6850
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 801B6854
  c->lr=0x801B685Cu; f_801B4254(c); // 801B6858
  c->r[4]=c->r[2]+0xFFFFAE50u; // 801B685C
  c->r[5]=c->r[2]+0xFFFFAE54u; // 801B6860
  c->r[0]=R8(c->r[4]+c->r[26]); // 801B6864
  c->r[4]=R8(c->r[5]+c->r[26]); // 801B6868
  c->r[0]=R8(c->r[3]+c->r[0]); // 801B686C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801B6870
  if (!crb(c,2)) { goto L_801B6880; } // 801B6874
  c->r[3]=0u+0x00000004u; // 801B6878
  goto L_801B6954; // 801B687C
L_801B6880:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801B6880
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801B6884
  cmpu(c,0,c->r[3],c->r[0]); // 801B6888
  if (!crb(c,2)) { goto L_801B68BC; } // 801B688C
  cmps(c,0,(int32_t)c->r[3],0); // 801B6890
  if (crb(c,2)) { goto L_801B68B4; } // 801B6894
  c->r[3]=R16(c->r[29]+0x0000001Eu); // 801B6898
  c->r[0]=R16(c->r[28]+0x00000000u); // 801B689C
  cmpu(c,0,c->r[0],c->r[3]); // 801B68A0
  if (crb(c,0)) { goto L_801B68BC; } // 801B68A4
  c->r[0]=R16(c->r[28]+0x00000002u); // 801B68A8
  cmpu(c,0,c->r[0],c->r[3]); // 801B68AC
  if (crb(c,1)) { goto L_801B68BC; } // 801B68B0
L_801B68B4:;
  c->r[3]=0u+0x00000000u; // 801B68B4
  goto L_801B6954; // 801B68B8
L_801B68BC:;
  cmpu(c,0,c->r[27],0x00000080u); // 801B68BC
  if (crb(c,2)) { goto L_801B6914; } // 801B68C0
  c->r[3]=0u+0x802D0000u; // 801B68C4
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 801B68C8
  c->r[3]=c->r[3]+0x000023D8u; // 801B68CC
  c->r[3]=c->r[3]+c->r[0]; // 801B68D0
  c->r[0]=R8(c->r[3]+0x00000558u); // 801B68D4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B68D8
  if (crb(c,2)) { goto L_801B6914; } // 801B68DC
  c->r[4]=R16(c->r[28]+0x00000000u); // 801B68E0
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)10); // 801B68E4
  c->r[3]=R16(c->r[28]+0x00000002u); // 801B68E8
  c->r[0]=0u+0x00000001u; // 801B68EC
  {uint32_t ea=c->r[5]+c->r[29]; W16(ea,c->r[4]); c->r[5]=ea;} // 801B68F0
  W16(c->r[5]+0x00000002u,c->r[3]); // 801B68F4
  c->r[4]=R16(c->r[28]+0x00000004u); // 801B68F8
  c->r[3]=R16(c->r[28]+0x00000006u); // 801B68FC
  W16(c->r[5]+0x00000004u,c->r[4]); // 801B6900
  W16(c->r[5]+0x00000006u,c->r[3]); // 801B6904
  c->r[3]=R16(c->r[28]+0x00000008u); // 801B6908
  W16(c->r[5]+0x00000008u,c->r[3]); // 801B690C
  W8(c->r[29]+0x00000021u,c->r[0]); // 801B6910
L_801B6914:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801B6914
  cmpu(c,0,c->r[0],0x00000001u); // 801B6918
  if (crb(c,2)) { goto L_801B693C; } // 801B691C
  cmpu(c,0,c->r[0],0x00000004u); // 801B6920
  if (crb(c,2)) { goto L_801B693C; } // 801B6924
  c->r[3]=0u+0x802D0000u; // 801B6928
  c->r[3]=c->r[3]+0x000023D8u; // 801B692C
  c->r[0]=R8(c->r[3]+0x00000564u); // 801B6930
  cmpu(c,0,c->r[0],0x00000004u); // 801B6934
  if (crb(c,2)) { goto L_801B6944; } // 801B6938
L_801B693C:;
  c->r[3]=0u+0x0000000Du; // 801B693C
  goto L_801B6954; // 801B6940
L_801B6944:;
  c->r[3]=c->r[27]|c->r[27]; // 801B6944
  c->r[4]=c->r[30]|c->r[30]; // 801B6948
  c->r[5]=c->r[28]|c->r[28]; // 801B694C
  c->lr=0x801B6954u; f_801B6E68(c); // 801B6950
L_801B6954:;
  c->r[11]=c->r[1]+0x00000020u; // 801B6954
  c->lr=0x801B695Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6958
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B695C
  c->lr=c->r[0]; // 801B6960
  c->r[1]=c->r[1]+0x00000020u; // 801B6964
  return; // 801B6968
}

// BTM_ReadPowerMode
void f_801B696C(Ctx* __restrict c) {
  trace_call(0x801B696Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B696C
  c->r[0]=c->lr; // 801B6970
  c->r[5]=0u+0x802D0000u; // 801B6974
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6978
  c->r[5]=c->r[5]+0x000023D8u; // 801B697C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B6980
  c->r[31]=0u+0x00000000u; // 801B6984
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B6988
  c->r[30]=c->r[5]+0x00000034u; // 801B698C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B6990
  c->r[29]=c->r[4]|c->r[4]; // 801B6994
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B6998
  c->r[28]=c->r[3]|c->r[3]; // 801B699C
L_801B69A0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801B69A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B69A4
  if (crb(c,2)) { goto L_801B69C4; } // 801B69A8
  c->r[4]=c->r[28]|c->r[28]; // 801B69AC
  c->r[3]=c->r[30]+0x00000008u; // 801B69B0
  c->r[5]=0u+0x00000006u; // 801B69B4
  c->lr=0x801B69BCu; f_801D8F78(c); // 801B69B8
  cmps(c,0,(int32_t)c->r[3],0); // 801B69BC
  if (crb(c,2)) { goto L_801B69D4; } // 801B69C0
L_801B69C4:;
  c->r[31]=c->r[31]+0x00000001u; // 801B69C4
  c->r[30]=c->r[30]+0x0000011Cu; // 801B69C8
  cmpu(c,0,c->r[31],0x00000004u); // 801B69CC
  if (crb(c,0)) { IRQCHK(c); goto L_801B69A0; } // 801B69D0
L_801B69D4:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801B69D4
  cmps(c,0,(int32_t)c->r[0],4); // 801B69D8
  if (!crb(c,2)) { goto L_801B69E8; } // 801B69DC
  c->r[3]=0u+0x00000007u; // 801B69E0
  goto L_801B6A04; // 801B69E4
L_801B69E8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801B69E8
  c->r[4]=0u+0x802D0000u; // 801B69EC
  c->r[3]=0u+0x00000000u; // 801B69F0
  c->r[4]=c->r[4]+0x000023D8u; // 801B69F4
  c->r[4]=c->r[4]+c->r[0]; // 801B69F8
  c->r[0]=R8(c->r[4]+0x000004ECu); // 801B69FC
  W8(c->r[29]+0x00000000u,c->r[0]); // 801B6A00
L_801B6A04:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6A04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B6A08
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B6A0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B6A10
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B6A14
  c->lr=c->r[0]; // 801B6A18
  c->r[1]=c->r[1]+0x00000020u; // 801B6A1C
  return; // 801B6A20
}

// btm_pm_reset
void f_801B6A24(Ctx* __restrict c) {
  trace_call(0x801B6A24u);
  c->r[3]=0u+0x802D0000u; // 801B6A24
  c->r[12]=0u+0x00000000u; // 801B6A28
  c->r[3]=c->r[3]+0x000023D8u; // 801B6A2C
  c->r[0]=R8(c->r[3]+0x00000565u); // 801B6A30
  cmpu(c,0,c->r[0],0x00000080u); // 801B6A34
  if (crb(c,2)) { goto L_801B6A54; } // 801B6A38
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801B6A3C
  c->r[3]=c->r[3]+c->r[0]; // 801B6A40
  c->r[0]=R8(c->r[3]+0x00000558u); // 801B6A44
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B6A48
  if (crb(c,2)) { goto L_801B6A54; } // 801B6A4C
  c->r[12]=R32(c->r[3]+0x00000554u); // 801B6A50
L_801B6A54:;
  c->r[3]=0u+0x802D0000u; // 801B6A54
  cmps(c,0,(int32_t)c->r[12],0); // 801B6A58
  c->r[3]=c->r[3]+0x000023D8u; // 801B6A5C
  c->r[0]=0u+0x00000000u; // 801B6A60
  c->r[4]=0u+0x00000004u; // 801B6A64
  W8(c->r[3]+0x00000558u,c->r[0]); // 801B6A68
  W8(c->r[3]+0x00000564u,c->r[4]); // 801B6A6C
  W8(c->r[3]+0x00000560u,c->r[0]); // 801B6A70
  if (crb(c,2)) return; // 801B6A74
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)284); // 801B6A78
  c->r[4]=0u+0x00000005u; // 801B6A7C
  c->r[5]=0u+0x0000000Cu; // 801B6A80
  c->r[6]=0u+0x00000000u; // 801B6A84
  c->r[3]=c->r[3]+c->r[0]; // 801B6A88
  c->r[3]=c->r[3]+0x0000003Cu; // 801B6A8C
  c->ctr=c->r[12]; // 801B6A90
  if (true) { dispatch(c,c->ctr); return; } // 801B6A94
  return; // 801B6A98
}

// btm_pm_sm_alloc
void f_801B6A9C(Ctx* __restrict c) {
  trace_call(0x801B6A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6A9C
  c->r[0]=c->lr; // 801B6AA0
  c->r[4]=0u+0x00000000u; // 801B6AA4
  c->r[5]=0u+0x00000022u; // 801B6AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B6AAC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)34); // 801B6AB0
  c->r[3]=0u+0x802D0000u; // 801B6AB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B6AB8
  c->r[3]=c->r[3]+0x000023D8u; // 801B6ABC
  c->r[3]=c->r[3]+c->r[0]; // 801B6AC0
  c->r[31]=c->r[3]+0x000004CCu; // 801B6AC4
  c->r[3]=c->r[31]|c->r[31]; // 801B6AC8
  c->lr=0x801B6AD0u; f_800046B4(c); // 801B6ACC
  c->r[0]=0u+0x00000000u; // 801B6AD0
  W8(c->r[31]+0x00000020u,c->r[0]); // 801B6AD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B6AD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B6ADC
  c->lr=c->r[0]; // 801B6AE0
  c->r[1]=c->r[1]+0x00000010u; // 801B6AE4
  return; // 801B6AE8
}

// btm_pm_compare_modes
void f_801B6AEC(Ctx* __restrict c) {
  trace_call(0x801B6AECu);
  cmps(c,0,(int32_t)c->r[3],0); // 801B6AEC
  if (!crb(c,2)) { goto L_801B6B24; } // 801B6AF0
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B6AF4
  c->r[3]=c->r[4]|c->r[4]; // 801B6AF8
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B6AFC
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B6B00
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B6B04
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B6B08
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B6B0C
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B6B10
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B6B14
  c->r[0]=R16(c->r[4]+0x00000008u); // 801B6B18
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B6B1C
  return; // 801B6B20
L_801B6B24:;
  c->r[9]=R8(c->r[4]+0x00000008u); // 801B6B24
  cmps(c,0,(int32_t)c->r[9],0); // 801B6B28
  if (crb(c,2)) { goto L_801B6B3C; } // 801B6B2C
  c->r[8]=R8(c->r[3]+0x00000008u); // 801B6B30
  cmps(c,0,(int32_t)c->r[8],0); // 801B6B34
  if (!crb(c,2)) { goto L_801B6B44; } // 801B6B38
L_801B6B3C:;
  c->r[3]=0u+0x00000000u; // 801B6B3C
  return; // 801B6B40
L_801B6B44:;
  c->r[0]=rotl(c->r[8],0)&0x00000010u; cr0(c,c->r[0]); // 801B6B44
  if (crb(c,2)) { goto L_801B6B88; } // 801B6B48
  c->r[4]=R16(c->r[3]+0x00000000u); // 801B6B4C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B6B50
  W16(c->r[5]+0x00000000u,c->r[4]); // 801B6B54
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B6B58
  c->r[4]=R16(c->r[3]+0x00000004u); // 801B6B5C
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B6B60
  W16(c->r[5]+0x00000004u,c->r[4]); // 801B6B64
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B6B68
  c->r[0]=R16(c->r[3]+0x00000008u); // 801B6B6C
  c->r[3]=c->r[5]|c->r[5]; // 801B6B70
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B6B74
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B6B78
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B6B7C
  W8(c->r[5]+0x00000008u,c->r[0]); // 801B6B80
  return; // 801B6B84
L_801B6B88:;
  c->r[0]=rotl(c->r[9],0)&0x00000010u; cr0(c,c->r[0]); // 801B6B88
  if (crb(c,2)) { goto L_801B6BCC; } // 801B6B8C
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B6B90
  c->r[3]=c->r[5]|c->r[5]; // 801B6B94
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B6B98
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B6B9C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B6BA0
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B6BA4
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B6BA8
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B6BAC
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B6BB0
  c->r[0]=R16(c->r[4]+0x00000008u); // 801B6BB4
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B6BB8
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B6BBC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B6BC0
  W8(c->r[5]+0x00000008u,c->r[0]); // 801B6BC4
  return; // 801B6BC8
L_801B6BCC:;
  c->r[7]=c->r[8]+0xFFFFFFFFu; // 801B6BCC
  c->r[6]=0u+0x80200000u; // 801B6BD0
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801B6BD4
  c->r[0]=c->r[0]-c->r[7]; // 801B6BD8
  c->r[6]=c->r[6]+0xFFFFA728u; // 801B6BDC
  c->r[7]=c->r[9]+c->r[0]; // 801B6BE0
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801B6BE4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801B6BE8
  c->r[0]=R8(c->r[6]+c->r[0]); // 801B6BEC
  cmps(c,0,(int32_t)c->r[0],2); // 801B6BF0
  if (crb(c,2)) { goto L_801B6C40; } // 801B6BF4
  if (!crb(c,0)) { goto L_801B6C08; } // 801B6BF8
  cmps(c,0,(int32_t)c->r[0],1); // 801B6BFC
  if (!crb(c,0)) { goto L_801B6C14; } // 801B6C00
  goto L_801B6D00; // 801B6C04
L_801B6C08:;
  cmps(c,0,(int32_t)c->r[0],4); // 801B6C08
  if (!crb(c,0)) { goto L_801B6D00; } // 801B6C0C
  goto L_801B6C70; // 801B6C10
L_801B6C14:;
  c->r[4]=R16(c->r[3]+0x00000000u); // 801B6C14
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B6C18
  W16(c->r[5]+0x00000000u,c->r[4]); // 801B6C1C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B6C20
  c->r[4]=R16(c->r[3]+0x00000004u); // 801B6C24
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B6C28
  W16(c->r[5]+0x00000004u,c->r[4]); // 801B6C2C
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B6C30
  c->r[0]=R16(c->r[3]+0x00000008u); // 801B6C34
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B6C38
  return; // 801B6C3C
L_801B6C40:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B6C40
  c->r[3]=c->r[4]|c->r[4]; // 801B6C44
  c->r[0]=R16(c->r[4]+0x00000002u); // 801B6C48
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B6C4C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801B6C50
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B6C54
  c->r[0]=R16(c->r[4]+0x00000006u); // 801B6C58
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B6C5C
  W16(c->r[5]+0x00000006u,c->r[0]); // 801B6C60
  c->r[0]=R16(c->r[4]+0x00000008u); // 801B6C64
  W16(c->r[5]+0x00000008u,c->r[0]); // 801B6C68
  return; // 801B6C6C
L_801B6C70:;
  W8(c->r[5]+0x00000008u,c->r[8]); // 801B6C70
  c->r[6]=R16(c->r[4]+0x00000000u); // 801B6C74
  c->r[0]=R16(c->r[3]+0x00000000u); // 801B6C78
  cmpu(c,0,c->r[0],c->r[6]); // 801B6C7C
  if (!crb(c,0)) { goto L_801B6C88; } // 801B6C80
  c->r[6]=c->r[0]|c->r[0]; // 801B6C84
L_801B6C88:;
  W16(c->r[5]+0x00000000u,c->r[6]); // 801B6C88
  c->r[7]=R16(c->r[4]+0x00000002u); // 801B6C8C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801B6C90
  cmpu(c,0,c->r[0],c->r[7]); // 801B6C94
  if (!crb(c,1)) { goto L_801B6CA0; } // 801B6C98
  c->r[7]=c->r[0]|c->r[0]; // 801B6C9C
L_801B6CA0:;
  c->r[6]=R16(c->r[5]+0x00000000u); // 801B6CA0
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; // 801B6CA4
  W16(c->r[5]+0x00000002u,c->r[7]); // 801B6CA8
  cmpu(c,0,c->r[6],c->r[0]); // 801B6CAC
  if (!crb(c,0)) { goto L_801B6CBC; } // 801B6CB0
  c->r[3]=0u+0x00000000u; // 801B6CB4
  return; // 801B6CB8
L_801B6CBC:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B6CBC
  cmpu(c,0,c->r[0],0x00000002u); // 801B6CC0
  if (!crb(c,2)) { goto L_801B6CF8; } // 801B6CC4
  c->r[6]=R16(c->r[4]+0x00000004u); // 801B6CC8
  c->r[0]=R16(c->r[3]+0x00000004u); // 801B6CCC
  cmpu(c,0,c->r[0],c->r[6]); // 801B6CD0
  if (!crb(c,1)) { goto L_801B6CDC; } // 801B6CD4
  c->r[6]=c->r[0]|c->r[0]; // 801B6CD8
L_801B6CDC:;
  W16(c->r[5]+0x00000004u,c->r[6]); // 801B6CDC
  c->r[4]=R16(c->r[4]+0x00000006u); // 801B6CE0
  c->r[0]=R16(c->r[3]+0x00000006u); // 801B6CE4
  cmpu(c,0,c->r[0],c->r[4]); // 801B6CE8
  if (!crb(c,1)) { goto L_801B6CF4; } // 801B6CEC
  c->r[4]=c->r[0]|c->r[0]; // 801B6CF0
L_801B6CF4:;
  W16(c->r[5]+0x00000006u,c->r[4]); // 801B6CF4
L_801B6CF8:;
  c->r[3]=c->r[5]|c->r[5]; // 801B6CF8
  return; // 801B6CFC
L_801B6D00:;
  c->r[3]=0u+0x00000000u; // 801B6D00
  return; // 801B6D04
}

// btm_pm_get_set_mode
void f_801B6D08(Ctx* __restrict c) {
  trace_call(0x801B6D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6D08
  c->r[0]=c->lr; // 801B6D0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B6D10
  c->r[11]=c->r[1]+0x00000020u; // 801B6D14
  c->lr=0x801B6D1Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B6D18
  cmps(c,0,(int32_t)c->r[5],0); // 801B6D1C
  c->r[26]=c->r[3]|c->r[3]; // 801B6D20
  c->r[27]=c->r[5]|c->r[5]; // 801B6D24
  c->r[28]=c->r[6]|c->r[6]; // 801B6D28
  c->r[7]=0u+0x00000000u; // 801B6D2C
  if (crb(c,2)) { goto L_801B6D78; } // 801B6D30
  c->r[0]=R8(c->r[5]+0x00000008u); // 801B6D34
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B6D38
  if (crb(c,2)) { goto L_801B6D78; } // 801B6D3C
  c->r[3]=R16(c->r[5]+0x00000000u); // 801B6D40
  c->r[0]=R16(c->r[5]+0x00000002u); // 801B6D44
  W16(c->r[6]+0x00000000u,c->r[3]); // 801B6D48
  W16(c->r[6]+0x00000002u,c->r[0]); // 801B6D4C
  c->r[3]=R16(c->r[5]+0x00000004u); // 801B6D50
  c->r[0]=R16(c->r[5]+0x00000006u); // 801B6D54
  W16(c->r[6]+0x00000004u,c->r[3]); // 801B6D58
  W16(c->r[6]+0x00000006u,c->r[0]); // 801B6D5C
  c->r[0]=R16(c->r[5]+0x00000008u); // 801B6D60
  W16(c->r[6]+0x00000008u,c->r[0]); // 801B6D64
  c->r[0]=R8(c->r[6]+0x00000008u); // 801B6D68
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B6D6C
  W8(c->r[6]+0x00000008u,c->r[3]); // 801B6D70
  goto L_801B6E50; // 801B6D74
L_801B6D78:;
  c->r[31]=0u+0x802D0000u; // 801B6D78
  c->r[30]=c->r[4]|c->r[4]; // 801B6D7C
  c->r[31]=c->r[31]+0x000023D8u; // 801B6D80
  c->r[29]=0u+0x00000000u; // 801B6D84
L_801B6D88:;
  c->r[0]=R8(c->r[31]+0x00000558u); // 801B6D88
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801B6D8C
  if (crb(c,2)) { goto L_801B6DCC; } // 801B6D90
  c->r[0]=R8(c->r[30]+0x00000008u); // 801B6D94
  cmps(c,0,(int32_t)c->r[0],0); // 801B6D98
  if (!crb(c,2)) { goto L_801B6DA8; } // 801B6D9C
  c->r[3]=0u+0x00000000u; // 801B6DA0
  goto L_801B6E50; // 801B6DA4
L_801B6DA8:;
  c->r[3]=c->r[7]|c->r[7]; // 801B6DA8
  c->r[4]=c->r[30]|c->r[30]; // 801B6DAC
  c->r[5]=c->r[28]|c->r[28]; // 801B6DB0
  c->lr=0x801B6DB8u; f_801B6AEC(c); // 801B6DB4
  cmps(c,0,(int32_t)c->r[3],0); // 801B6DB8
  if (!crb(c,2)) { goto L_801B6DC8; } // 801B6DBC
  c->r[3]=0u+0x00000000u; // 801B6DC0
  goto L_801B6E50; // 801B6DC4
L_801B6DC8:;
  c->r[7]=c->r[28]|c->r[28]; // 801B6DC8
L_801B6DCC:;
  c->r[29]=c->r[29]+0x00000001u; // 801B6DCC
  c->r[30]=c->r[30]+0x0000000Au; // 801B6DD0
  cmps(c,0,(int32_t)c->r[29],2); // 801B6DD4
  c->r[31]=c->r[31]+0x00000008u; // 801B6DD8
  if (crb(c,0)) { IRQCHK(c); goto L_801B6D88; } // 801B6DDC
  cmps(c,0,(int32_t)c->r[7],0); // 801B6DE0
  if (!crb(c,2)) { goto L_801B6E24; } // 801B6DE4
  cmps(c,0,(int32_t)c->r[27],0); // 801B6DE8
  if (crb(c,2)) { goto L_801B6E1C; } // 801B6DEC
  c->r[3]=R16(c->r[27]+0x00000000u); // 801B6DF0
  c->r[0]=R16(c->r[27]+0x00000002u); // 801B6DF4
  W16(c->r[28]+0x00000000u,c->r[3]); // 801B6DF8
  W16(c->r[28]+0x00000002u,c->r[0]); // 801B6DFC
  c->r[3]=R16(c->r[27]+0x00000004u); // 801B6E00
  c->r[0]=R16(c->r[27]+0x00000006u); // 801B6E04
  W16(c->r[28]+0x00000004u,c->r[3]); // 801B6E08
  W16(c->r[28]+0x00000006u,c->r[0]); // 801B6E0C
  c->r[0]=R16(c->r[27]+0x00000008u); // 801B6E10
  W16(c->r[28]+0x00000008u,c->r[0]); // 801B6E14
  goto L_801B6E4C; // 801B6E18
L_801B6E1C:;
  c->r[3]=0u+0x00000000u; // 801B6E1C
  goto L_801B6E50; // 801B6E20
L_801B6E24:;
  cmpu(c,0,c->r[26],0x00000080u); // 801B6E24
  if (!crb(c,2)) { goto L_801B6E4C; } // 801B6E28
  c->r[3]=c->r[27]|c->r[27]; // 801B6E2C
  c->r[4]=c->r[7]|c->r[7]; // 801B6E30
  c->r[5]=c->r[28]|c->r[28]; // 801B6E34
  c->lr=0x801B6E3Cu; f_801B6AEC(c); // 801B6E38
  cmps(c,0,(int32_t)c->r[3],0); // 801B6E3C
  if (!crb(c,2)) { goto L_801B6E4C; } // 801B6E40
  c->r[3]=0u+0x00000000u; // 801B6E44
  goto L_801B6E50; // 801B6E48
L_801B6E4C:;
  c->r[3]=R8(c->r[28]+0x00000008u); // 801B6E4C
L_801B6E50:;
  c->r[11]=c->r[1]+0x00000020u; // 801B6E50
  c->lr=0x801B6E58u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B6E54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B6E58
  c->lr=c->r[0]; // 801B6E5C
  c->r[1]=c->r[1]+0x00000020u; // 801B6E60
  return; // 801B6E64
}

// btm_pm_snd_md_req
void f_801B6E68(Ctx* __restrict c) {
  trace_call(0x801B6E68u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B6E68
  c->r[0]=c->lr; // 801B6E6C
  c->r[6]=0u+0x802D0000u; // 801B6E70
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B6E74
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)34); // 801B6E78
  c->r[6]=c->r[6]+0x000023D8u; // 801B6E7C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B6E80
  c->r[31]=0u+0x00000000u; // 801B6E84
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B6E88
  c->r[30]=c->r[4]|c->r[4]; // 801B6E8C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B6E90
  c->r[29]=c->r[3]|c->r[3]; // 801B6E94
  c->r[3]=c->r[6]+c->r[0]; // 801B6E98
  c->r[6]=c->r[1]+0x00000008u; // 801B6E9C
  W32(c->r[1]+0x00000020u,c->r[28]); // 801B6EA0
  c->r[28]=c->r[3]+0x000004CCu; // 801B6EA4
  c->r[3]=c->r[29]|c->r[29]; // 801B6EA8
  c->r[4]=c->r[28]|c->r[28]; // 801B6EAC
  c->lr=0x801B6EB4u; f_801B6D08(c); // 801B6EB0
  c->r[4]=R8(c->r[28]+0x00000020u); // 801B6EB4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B6EB8
  W8(c->r[1]+0x00000010u,c->r[3]); // 801B6EBC
  cmpu(c,0,c->r[4],c->r[0]); // 801B6EC0
  if (!crb(c,2)) { goto L_801B6EF8; } // 801B6EC4
  cmps(c,0,(int32_t)c->r[0],0); // 801B6EC8
  if (crb(c,2)) { goto L_801B6EEC; } // 801B6ECC
  c->r[4]=R16(c->r[28]+0x0000001Eu); // 801B6ED0
  c->r[0]=R16(c->r[1]+0x00000008u); // 801B6ED4
  cmpu(c,0,c->r[0],c->r[4]); // 801B6ED8
  if (crb(c,0)) { goto L_801B6EF4; } // 801B6EDC
  c->r[0]=R16(c->r[1]+0x0000000Au); // 801B6EE0
  cmpu(c,0,c->r[0],c->r[4]); // 801B6EE4
  if (crb(c,1)) { goto L_801B6EF4; } // 801B6EE8
L_801B6EEC:;
  c->r[3]=0u+0x0000000Du; // 801B6EEC
  goto L_801B707C; // 801B6EF0
L_801B6EF4:;
  c->r[31]=0u+0x00000001u; // 801B6EF4
L_801B6EF8:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B6EF8
  W8(c->r[28]+0x00000021u,c->r[31]); // 801B6EFC
  if (crb(c,2)) { goto L_801B6F18; } // 801B6F00
  c->r[0]=R8(c->r[28]+0x00000020u); // 801B6F04
  cmps(c,0,(int32_t)c->r[0],0); // 801B6F08
  if (crb(c,2)) { goto L_801B6F18; } // 801B6F0C
  c->r[0]=0u+0x00000001u; // 801B6F10
  W8(c->r[28]+0x00000021u,c->r[0]); // 801B6F14
L_801B6F18:;
  c->r[3]=0u+0x00000002u; // 801B6F18
  c->lr=0x801B6F20u; f_801A7C10(c); // 801B6F1C
  cmps(c,0,(int32_t)c->r[3],0); // 801B6F20
  c->r[31]=c->r[3]|c->r[3]; // 801B6F24
  if (!crb(c,2)) { goto L_801B6F34; } // 801B6F28
  c->r[3]=0u+0x00000003u; // 801B6F2C
  goto L_801B707C; // 801B6F30
L_801B6F34:;
  c->r[0]=R8(c->r[28]+0x00000021u); // 801B6F34
  cmpu(c,0,c->r[0],0x00000001u); // 801B6F38
  if (!crb(c,2)) { goto L_801B6F48; } // 801B6F3C
  c->r[0]=0u+0x00000000u; // 801B6F40
  W8(c->r[1]+0x00000010u,c->r[0]); // 801B6F44
L_801B6F48:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801B6F48
  c->r[4]=0u+0x802D0000u; // 801B6F4C
  c->r[4]=c->r[4]+0x000023D8u; // 801B6F50
  cmps(c,0,(int32_t)c->r[0],2); // 801B6F54
  W8(c->r[4]+0x00000564u,c->r[30]); // 801B6F58
  W8(c->r[4]+0x00000565u,c->r[29]); // 801B6F5C
  if (crb(c,2)) { goto L_801B7004; } // 801B6F60
  if (!crb(c,0)) { goto L_801B6F78; } // 801B6F64
  cmps(c,0,(int32_t)c->r[0],0); // 801B6F68
  if (crb(c,2)) { goto L_801B6F84; } // 801B6F6C
  if (!crb(c,0)) { goto L_801B6FE4; } // 801B6F70
  goto L_801B704C; // 801B6F74
L_801B6F78:;
  cmps(c,0,(int32_t)c->r[0],4); // 801B6F78
  if (!crb(c,0)) { goto L_801B704C; } // 801B6F7C
  goto L_801B702C; // 801B6F80
L_801B6F84:;
  c->r[0]=R8(c->r[28]+0x00000020u); // 801B6F84
  cmps(c,0,(int32_t)c->r[0],3); // 801B6F88
  if (crb(c,2)) { goto L_801B6FB8; } // 801B6F8C
  if (!crb(c,0)) { goto L_801B6FD0; } // 801B6F90
  cmps(c,0,(int32_t)c->r[0],2); // 801B6F94
  if (!crb(c,0)) { goto L_801B6FA0; } // 801B6F98
  goto L_801B6FD0; // 801B6F9C
L_801B6FA0:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B6FA0
  c->r[3]=c->r[31]|c->r[31]; // 801B6FA4
  c->r[4]=c->r[4]+c->r[0]; // 801B6FA8
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B6FAC
  c->lr=0x801B6FB4u; f_801BE860(c); // 801B6FB0
  goto L_801B705C; // 801B6FB4
L_801B6FB8:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B6FB8
  c->r[3]=c->r[31]|c->r[31]; // 801B6FBC
  c->r[4]=c->r[4]+c->r[0]; // 801B6FC0
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B6FC4
  c->lr=0x801B6FCCu; f_801BE998(c); // 801B6FC8
  goto L_801B705C; // 801B6FCC
L_801B6FD0:;
  c->r[3]=0u+0x802D0000u; // 801B6FD0
  c->r[0]=0u+0x00000004u; // 801B6FD4
  c->r[3]=c->r[3]+0x000023D8u; // 801B6FD8
  W8(c->r[3]+0x00000564u,c->r[0]); // 801B6FDC
  goto L_801B705C; // 801B6FE0
L_801B6FE4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B6FE4
  c->r[5]=R16(c->r[1]+0x00000008u); // 801B6FE8
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801B6FEC
  c->r[3]=c->r[31]|c->r[31]; // 801B6FF0
  c->r[4]=c->r[4]+c->r[0]; // 801B6FF4
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B6FF8
  c->lr=0x801B7000u; f_801BE6E0(c); // 801B6FFC
  goto L_801B705C; // 801B7000
L_801B7004:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B7004
  c->r[5]=R16(c->r[1]+0x00000008u); // 801B7008
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801B700C
  c->r[3]=c->r[31]|c->r[31]; // 801B7010
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 801B7014
  c->r[4]=c->r[4]+c->r[0]; // 801B7018
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B701C
  c->r[8]=R16(c->r[1]+0x0000000Eu); // 801B7020
  c->lr=0x801B7028u; f_801BE794(c); // 801B7024
  goto L_801B705C; // 801B7028
L_801B702C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801B702C
  c->r[5]=R16(c->r[1]+0x00000008u); // 801B7030
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801B7034
  c->r[3]=c->r[31]|c->r[31]; // 801B7038
  c->r[4]=c->r[4]+c->r[0]; // 801B703C
  c->r[4]=R16(c->r[4]+0x00000034u); // 801B7040
  c->lr=0x801B7048u; f_801BE8E4(c); // 801B7044
  goto L_801B705C; // 801B7048
L_801B704C:;
  c->r[3]=0u+0x802D0000u; // 801B704C
  c->r[0]=0u+0x00000004u; // 801B7050
  c->r[3]=c->r[3]+0x000023D8u; // 801B7054
  W8(c->r[3]+0x00000564u,c->r[0]); // 801B7058
L_801B705C:;
  c->r[3]=0u+0x802D0000u; // 801B705C
  c->r[3]=c->r[3]+0x000023D8u; // 801B7060
  c->r[0]=R8(c->r[3]+0x00000564u); // 801B7064
  cmpu(c,0,c->r[0],0x00000004u); // 801B7068
  if (!crb(c,2)) { goto L_801B7078; } // 801B706C
  c->r[3]=c->r[31]|c->r[31]; // 801B7070
  c->lr=0x801B7078u; f_801A7D00(c); // 801B7074
L_801B7078:;
  c->r[3]=0u+0x00000001u; // 801B7078
L_801B707C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B707C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B7080
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B7084
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B7088
  c->r[28]=R32(c->r[1]+0x00000020u); // 801B708C
  c->lr=c->r[0]; // 801B7090
  c->r[1]=c->r[1]+0x00000030u; // 801B7094
  return; // 801B7098
}

// btm_pm_proc_cmd_status
void f_801B709C(Ctx* __restrict c) {
  trace_call(0x801B709Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B709C
  c->r[0]=c->lr; // 801B70A0
  c->r[4]=0u+0x802D0000u; // 801B70A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B70A8
  c->r[4]=c->r[4]+0x000023D8u; // 801B70AC
  c->r[0]=R8(c->r[4]+0x00000564u); // 801B70B0
  cmpu(c,0,c->r[0],0x00000004u); // 801B70B4
  if (!crb(c,0)) { goto L_801B713C; } // 801B70B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801B70BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B70C0
  c->r[5]=c->r[4]+c->r[0]; // 801B70C4
  if (!crb(c,2)) { goto L_801B70DC; } // 801B70C8
  c->r[0]=0u+0x00000004u; // 801B70CC
  c->r[4]=0u+0x00000004u; // 801B70D0
  W8(c->r[5]+0x000004ECu,c->r[0]); // 801B70D4
  goto L_801B70E0; // 801B70D8
L_801B70DC:;
  c->r[4]=0u+0x00000005u; // 801B70DC
L_801B70E0:;
  c->r[7]=0u+0x802D0000u; // 801B70E0
  c->r[7]=c->r[7]+0x000023D8u; // 801B70E4
  c->r[0]=R8(c->r[7]+0x00000565u); // 801B70E8
  cmpu(c,0,c->r[0],0x00000080u); // 801B70EC
  if (crb(c,2)) { goto L_801B712C; } // 801B70F0
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801B70F4
  c->r[5]=c->r[7]+c->r[0]; // 801B70F8
  c->r[0]=R8(c->r[5]+0x00000558u); // 801B70FC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B7100
  if (crb(c,2)) { goto L_801B712C; } // 801B7104
  c->r[0]=R8(c->r[7]+0x00000564u); // 801B7108
  c->r[6]=c->r[3]|c->r[3]; // 801B710C
  c->r[12]=R32(c->r[5]+0x00000554u); // 801B7110
  c->r[5]=0u+0x00000000u; // 801B7114
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)284); // 801B7118
  c->r[3]=c->r[7]+c->r[0]; // 801B711C
  c->r[3]=c->r[3]+0x0000003Cu; // 801B7120
  c->ctr=c->r[12]; // 801B7124
  if (true) { c->lr=0x801B712Cu; dispatch(c,c->ctr); } // 801B7128
L_801B712C:;
  c->r[3]=0u+0x802D0000u; // 801B712C
  c->r[0]=0u+0x00000004u; // 801B7130
  c->r[3]=c->r[3]+0x000023D8u; // 801B7134
  W8(c->r[3]+0x00000564u,c->r[0]); // 801B7138
L_801B713C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B713C
  c->lr=c->r[0]; // 801B7140
  c->r[1]=c->r[1]+0x00000010u; // 801B7144
  return; // 801B7148
}

// btm_pm_proc_mode_change
void f_801B714C(Ctx* __restrict c) {
  trace_call(0x801B714Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B714C
  c->r[0]=c->lr; // 801B7150
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B7154
  c->r[11]=c->r[1]+0x00000030u; // 801B7158
  c->lr=0x801B7160u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B715C
  c->r[26]=c->r[4]|c->r[4]; // 801B7160
  c->r[25]=c->r[3]|c->r[3]; // 801B7164
  c->r[27]=c->r[5]|c->r[5]; // 801B7168
  c->r[28]=c->r[6]|c->r[6]; // 801B716C
  c->r[3]=c->r[26]|c->r[26]; // 801B7170
  c->lr=0x801B7178u; f_801B0D3C(c); // 801B7174
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 801B7178
  cmps(c,0,(int32_t)c->r[29],4); // 801B717C
  if (!crb(c,0)) { goto L_801B735C; } // 801B7180
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)284); // 801B7184
  c->r[24]=0u+0x802D0000u; // 801B7188
  cmps(c,0,(int32_t)c->r[27],0); // 801B718C
  c->r[24]=c->r[24]+0x000023D8u; // 801B7190
  c->r[31]=c->r[24]+c->r[30]; // 801B7194
  if (!crb(c,2)) { goto L_801B71F0; } // 801B7198
  c->r[0]=R16(c->r[31]+0x00000038u); // 801B719C
  cmps(c,0,(int32_t)c->r[0],0); // 801B71A0
  if (crb(c,2)) { goto L_801B71F0; } // 801B71A4
  c->lr=0x801B71ACu; f_801B80C4(c); // 801B71A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B71AC
  if (!crb(c,2)) { goto L_801B71F0; } // 801B71B0
  c->r[0]=0u+0x00000000u; // 801B71B4
  W16(c->r[31]+0x00000038u,c->r[0]); // 801B71B8
  c->r[0]=R8(c->r[24]+0x000027C0u); // 801B71BC
  cmpu(c,0,c->r[0],0x00000005u); // 801B71C0
  if (crb(c,0)) { goto L_801B71E4; } // 801B71C4
  c->r[3]=0u+0x000D0000u; // 801B71C8
  c->r[4]=0u+0x80240000u; // 801B71CC
  c->r[6]=R16(c->r[31]+0x00000036u); // 801B71D0
  c->r[5]=c->r[26]|c->r[26]; // 801B71D4
  c->r[3]=c->r[3]+0x00000004u; // 801B71D8
  c->r[4]=c->r[4]+0x000056E8u; // 801B71DC
  c->lr=0x801B71E4u; f_801AA800(c); // 801B71E0
L_801B71E4:;
  c->r[3]=R16(c->r[31]+0x00000034u); // 801B71E4
  c->r[4]=R16(c->r[31]+0x00000036u); // 801B71E8
  c->lr=0x801B71F0u; f_801BE018(c); // 801B71EC
L_801B71F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)34); // 801B71F0
  c->r[3]=0u+0x802D0000u; // 801B71F4
  cmps(c,0,(int32_t)c->r[27],0); // 801B71F8
  c->r[3]=c->r[3]+0x000023D8u; // 801B71FC
  c->r[4]=c->r[3]+c->r[0]; // 801B7200
  W8(c->r[4]+0x000004ECu,c->r[27]); // 801B7204
  c->r[0]=0u+0x00000000u; // 801B7208
  W16(c->r[4]+0x000004EAu,c->r[28]); // 801B720C
  if (!crb(c,2)) { goto L_801B7224; } // 801B7210
  c->r[3]=R8(c->r[4]+0x000004D4u); // 801B7214
  cmpu(c,0,c->r[3],0x00000001u); // 801B7218
  if (!crb(c,2)) { goto L_801B7224; } // 801B721C
  W8(c->r[4]+0x000004D4u,c->r[0]); // 801B7220
L_801B7224:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B7224
  c->r[5]=c->r[4]+0x000004D6u; // 801B7228
  if (!crb(c,2)) { goto L_801B7240; } // 801B722C
  c->r[3]=R8(c->r[5]+0x00000008u); // 801B7230
  cmpu(c,0,c->r[3],0x00000001u); // 801B7234
  if (!crb(c,2)) { goto L_801B7240; } // 801B7238
  W8(c->r[5]+0x00000008u,c->r[0]); // 801B723C
L_801B7240:;
  c->r[0]=R8(c->r[4]+0x000004EDu); // 801B7240
  cmpu(c,0,c->r[0],0x00000001u); // 801B7244
  if (!crb(c,2)) { goto L_801B725C; } // 801B7248
  c->r[4]=c->r[29]|c->r[29]; // 801B724C
  c->r[3]=0u+0x00000080u; // 801B7250
  c->r[5]=0u+0x00000000u; // 801B7254
  c->lr=0x801B725Cu; f_801B6E68(c); // 801B7258
L_801B725C:;
  c->r[24]=0u+0x802D0000u; // 801B725C
  c->r[29]=0u+0x00000000u; // 801B7260
  c->r[24]=c->r[24]+0x000023D8u; // 801B7264
L_801B7268:;
  c->r[0]=R8(c->r[24]+0x00000558u); // 801B7268
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B726C
  if (crb(c,2)) { goto L_801B7290; } // 801B7270
  c->r[12]=R32(c->r[24]+0x00000554u); // 801B7274
  c->r[4]=c->r[27]|c->r[27]; // 801B7278
  c->r[5]=c->r[28]|c->r[28]; // 801B727C
  c->r[6]=c->r[25]|c->r[25]; // 801B7280
  c->r[3]=c->r[31]+0x0000003Cu; // 801B7284
  c->ctr=c->r[12]; // 801B7288
  if (true) { c->lr=0x801B7290u; dispatch(c,c->ctr); } // 801B728C
L_801B7290:;
  c->r[29]=c->r[29]+0x00000001u; // 801B7290
  c->r[24]=c->r[24]+0x00000008u; // 801B7294
  cmps(c,0,(int32_t)c->r[29],2); // 801B7298
  if (crb(c,0)) { IRQCHK(c); goto L_801B7268; } // 801B729C
  c->r[3]=0u+0x802D0000u; // 801B72A0
  c->r[3]=c->r[3]+0x000023D8u; // 801B72A4
  c->r[28]=c->r[3]+c->r[30]; // 801B72A8
  c->r[0]=R8(c->r[28]+0x0000014Fu); // 801B72AC
  cmpu(c,0,c->r[0],0x00000001u); // 801B72B0
  if (!crb(c,2)) { goto L_801B735C; } // 801B72B4
  c->r[24]=c->r[28]+0x0000003Cu; // 801B72B8
  c->r[3]=c->r[24]|c->r[24]; // 801B72BC
  c->lr=0x801B72C4u; f_801B2F10(c); // 801B72C0
  cmps(c,0,(int32_t)c->r[3],0); // 801B72C4
  if (crb(c,2)) { goto L_801B72F8; } // 801B72C8
  c->r[0]=R8(c->r[3]+0x00000076u); // 801B72CC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801B72D0
  if (crb(c,2)) { goto L_801B72F8; } // 801B72D4
  c->r[3]=c->r[26]|c->r[26]; // 801B72D8
  c->r[4]=0u+0x00000000u; // 801B72DC
  c->lr=0x801B72E4u; f_801BE124(c); // 801B72E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B72E4
  if (crb(c,2)) { goto L_801B732C; } // 801B72E8
  c->r[0]=0u+0x00000002u; // 801B72EC
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 801B72F0
  goto L_801B735C; // 801B72F4
L_801B72F8:;
  c->r[4]=0u+0x802D0000u; // 801B72F8
  c->r[3]=c->r[24]|c->r[24]; // 801B72FC
  c->r[4]=c->r[4]+0x000023D8u; // 801B7300
  c->r[4]=c->r[4]+c->r[30]; // 801B7304
  c->r[0]=R8(c->r[4]+0x0000014Eu); // 801B7308
  c->r[0]=cntlz(c->r[0]); // 801B730C
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 801B7310
  c->lr=0x801B7318u; f_801BEA1C(c); // 801B7314
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B7318
  if (crb(c,2)) { goto L_801B732C; } // 801B731C
  c->r[0]=0u+0x00000000u; // 801B7320
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 801B7324
  goto L_801B735C; // 801B7328
L_801B732C:;
  c->r[27]=0u+0x00000000u; // 801B732C
  c->r[26]=0u+0x802D0000u; // 801B7330
  W8(c->r[28]+0x0000014Fu,c->r[27]); // 801B7334
  c->r[26]=c->r[26]+0x000023D8u; // 801B7338
  c->r[12]=R32(c->r[26]+0x0000062Cu); // 801B733C
  cmps(c,0,(int32_t)c->r[12],0); // 801B7340
  if (crb(c,2)) { goto L_801B735C; } // 801B7344
  W8(c->r[26]+0x00000624u,c->r[25]); // 801B7348
  c->r[3]=c->r[26]+0x00000624u; // 801B734C
  c->ctr=c->r[12]; // 801B7350
  if (true) { c->lr=0x801B7358u; dispatch(c,c->ctr); } // 801B7354
  W32(c->r[26]+0x0000062Cu,c->r[27]); // 801B7358
L_801B735C:;
  c->r[11]=c->r[1]+0x00000030u; // 801B735C
  c->lr=0x801B7364u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7360
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B7364
  c->lr=c->r[0]; // 801B7368
  c->r[1]=c->r[1]+0x00000030u; // 801B736C
  return; // 801B7370
}

// btm_sco_init
void f_801B7374(Ctx* __restrict c) {
  trace_call(0x801B7374u);
  c->r[3]=0u+0x80200000u; // 801B7374
  {uint32_t ea=c->r[3]+0xFFFFA738u; c->r[6]=R32(ea); c->r[3]=ea;} // 801B7378
  c->r[4]=0u+0x00010000u; // 801B737C
  c->r[7]=0u+0x802D0000u; // 801B7380
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 801B7384
  c->r[5]=R32(c->r[3]+0x00000004u); // 801B7388
  c->r[7]=c->r[7]+0x000023D8u; // 801B738C
  c->r[4]=R32(c->r[3]+0x00000008u); // 801B7390
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801B7394
  c->r[0]=0u+0x00000002u; // 801B7398
  W16(c->r[7]+0x000018F6u,c->r[8]); // 801B739C
  W32(c->r[7]+0x000018F8u,c->r[6]); // 801B73A0
  W32(c->r[7]+0x000018FCu,c->r[5]); // 801B73A4
  W32(c->r[7]+0x00001900u,c->r[4]); // 801B73A8
  W32(c->r[7]+0x00001904u,c->r[3]); // 801B73AC
  W8(c->r[7]+0x00001909u,c->r[0]); // 801B73B0
  return; // 801B73B4
}

// btm_esco_conn_rsp
void f_801B73B8(Ctx* __restrict c) {
  trace_call(0x801B73B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B73B8
  c->r[0]=c->lr; // 801B73BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B73C0
  c->r[11]=c->r[1]+0x00000020u; // 801B73C4
  c->lr=0x801B73CCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B73C8
  c->r[26]=c->r[3]|c->r[3]; // 801B73CC
  c->r[27]=c->r[4]|c->r[4]; // 801B73D0
  c->r[29]=c->r[5]|c->r[5]; // 801B73D4
  c->r[28]=c->r[6]|c->r[6]; // 801B73D8
  c->r[31]=0u+0x00000000u; // 801B73DC
  c->r[3]=0u+0x00000002u; // 801B73E0
  c->lr=0x801B73E8u; f_801A7C10(c); // 801B73E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B73E8
  c->r[30]=c->r[3]|c->r[3]; // 801B73EC
  if (!crb(c,2)) { goto L_801B741C; } // 801B73F0
  c->r[3]=0u+0x802D0000u; // 801B73F4
  c->r[3]=c->r[3]+0x000023D8u; // 801B73F8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B73FC
  cmpu(c,0,c->r[0],0x00000001u); // 801B7400
  if (crb(c,0)) { goto L_801B757C; } // 801B7404
  c->r[4]=0u+0x80240000u; // 801B7408
  c->r[3]=0u+0x000D0000u; // 801B740C
  c->r[4]=c->r[4]+0x00005728u; // 801B7410
  c->lr=0x801B7418u; f_801AA7C0(c); // 801B7414
  goto L_801B757C; // 801B7418
L_801B741C:;
  cmpu(c,0,c->r[26],0x00000003u); // 801B741C
  if (!crb(c,0)) { goto L_801B7438; } // 801B7420
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)52); // 801B7424
  c->r[3]=0u+0x802D0000u; // 801B7428
  c->r[3]=c->r[3]+0x000023D8u; // 801B742C
  c->r[3]=c->r[3]+c->r[0]; // 801B7430
  c->r[31]=c->r[3]+0x00001854u; // 801B7434
L_801B7438:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B7438
  if (crb(c,2)) { goto L_801B7498; } // 801B743C
  cmps(c,0,(int32_t)c->r[31],0); // 801B7440
  if (crb(c,2)) { goto L_801B745C; } // 801B7444
  c->r[3]=R16(c->r[31]+0x00000008u); // 801B7448
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801B744C
  c->r[0]=cntlz(c->r[0]); // 801B7450
  c->r[0]=rotl(c->r[0],27)&0x0000FFFFu; // 801B7454
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B7458
L_801B745C:;
  c->r[3]=0u+0x802D0000u; // 801B745C
  c->r[3]=c->r[3]+0x000023D8u; // 801B7460
  c->r[0]=R8(c->r[3]+0x00001908u); // 801B7464
  cmps(c,0,(int32_t)c->r[0],0); // 801B7468
  if (!crb(c,2)) { goto L_801B7484; } // 801B746C
  c->r[3]=c->r[30]|c->r[30]; // 801B7470
  c->r[4]=c->r[29]|c->r[29]; // 801B7474
  c->r[5]=c->r[27]|c->r[27]; // 801B7478
  c->lr=0x801B7480u; f_801BDAF8(c); // 801B747C
  goto L_801B757C; // 801B7480
L_801B7484:;
  c->r[3]=c->r[30]|c->r[30]; // 801B7484
  c->r[4]=c->r[29]|c->r[29]; // 801B7488
  c->r[5]=c->r[27]|c->r[27]; // 801B748C
  c->lr=0x801B7494u; f_801BE680(c); // 801B7490
  goto L_801B757C; // 801B7494
L_801B7498:;
  c->r[3]=0u+0x00000001u; // 801B7498
  c->lr=0x801B74A0u; f_801B2844(c); // 801B749C
  c->r[0]=0u+0x00000003u; // 801B74A0
  c->r[3]=0u+0x802D0000u; // 801B74A4
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B74A8
  c->r[3]=c->r[3]+0x000023D8u; // 801B74AC
  c->r[0]=R8(c->r[3]+0x00001908u); // 801B74B0
  cmps(c,0,(int32_t)c->r[0],0); // 801B74B4
  if (crb(c,2)) { goto L_801B756C; } // 801B74B8
  c->r[0]=R8(c->r[31]+0x0000002Eu); // 801B74BC
  cmpu(c,0,c->r[0],0x00000002u); // 801B74C0
  if (!crb(c,2)) { goto L_801B756C; } // 801B74C4
  cmps(c,0,(int32_t)c->r[28],0); // 801B74C8
  if (crb(c,2)) { goto L_801B74F0; } // 801B74CC
  c->r[3]=R32(c->r[28]+0x00000000u); // 801B74D0
  c->r[0]=R32(c->r[28]+0x00000004u); // 801B74D4
  W32(c->r[31]+0x00000014u,c->r[3]); // 801B74D8
  W32(c->r[31]+0x00000018u,c->r[0]); // 801B74DC
  c->r[3]=R32(c->r[28]+0x00000008u); // 801B74E0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801B74E4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801B74E8
  W32(c->r[31]+0x00000020u,c->r[0]); // 801B74EC
L_801B74F0:;
  c->r[3]=0u+0x802D0000u; // 801B74F0
  c->r[3]=c->r[3]+0x000023D8u; // 801B74F4
  c->r[4]=R16(c->r[3]+0x00001904u); // 801B74F8
  W16(c->r[31]+0x00000020u,c->r[4]); // 801B74FC
  c->r[5]=R16(c->r[3]+0x00000656u); // 801B7500
  c->r[3]=c->r[4]&c->r[5]; // 801B7504
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801B7508
  c->r[28]=rotl(c->r[3],0)&0x0000003Fu; // 801B750C
  if (!crb(c,2)) { goto L_801B751C; } // 801B7510
  c->r[0]=c->r[28]|0x00000008u; // 801B7514
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801B7518
L_801B751C:;
  c->r[3]=0u+0x802D0000u; // 801B751C
  c->r[3]=c->r[3]+0x000023D8u; // 801B7520
  c->r[0]=R8(c->r[3]+0x00000636u); // 801B7524
  cmpu(c,0,c->r[0],0x00000003u); // 801B7528
  if (crb(c,0)) { goto L_801B7540; } // 801B752C
  c->r[0]=c->r[4]|c->r[5]; // 801B7530
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801B7534
  c->r[0]=c->r[28]|c->r[0]; // 801B7538
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801B753C
L_801B7540:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 801B7540
  c->r[3]=c->r[30]|c->r[30]; // 801B7544
  c->r[6]=R32(c->r[31]+0x00000018u); // 801B7548
  c->r[4]=c->r[29]|c->r[29]; // 801B754C
  c->r[7]=R16(c->r[31]+0x0000001Cu); // 801B7550
  c->r[10]=rotl(c->r[28],0)&0x0000FFFFu; // 801B7554
  c->r[8]=R16(c->r[31]+0x0000001Eu); // 801B7558
  c->r[9]=R8(c->r[31]+0x00000022u); // 801B755C
  c->lr=0x801B7564u; f_801BE598(c); // 801B7560
  W16(c->r[31]+0x00000020u,c->r[28]); // 801B7564
  goto L_801B757C; // 801B7568
L_801B756C:;
  c->r[3]=c->r[30]|c->r[30]; // 801B756C
  c->r[4]=c->r[29]|c->r[29]; // 801B7570
  c->r[5]=0u+0x00000000u; // 801B7574
  c->lr=0x801B757Cu; f_801BDA98(c); // 801B7578
L_801B757C:;
  c->r[11]=c->r[1]+0x00000020u; // 801B757C
  c->lr=0x801B7584u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7580
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7584
  c->lr=c->r[0]; // 801B7588
  c->r[1]=c->r[1]+0x00000020u; // 801B758C
  return; // 801B7590
}

// btm_sco_chk_pend_unpark
void f_801B7594(Ctx* __restrict c) {
  trace_call(0x801B7594u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7594
  c->r[0]=c->lr; // 801B7598
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B759C
  c->r[11]=c->r[1]+0x00000040u; // 801B75A0
  c->lr=0x801B75A8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B75A4
  c->r[28]=0u+0x802D0000u; // 801B75A8
  c->r[23]=c->r[3]|c->r[3]; // 801B75AC
  c->r[28]=c->r[28]+0x000023D8u; // 801B75B0
  c->r[24]=c->r[4]|c->r[4]; // 801B75B4
  c->r[25]=c->r[5]|c->r[5]; // 801B75B8
  c->r[27]=0u+0x00000000u; // 801B75BC
  c->r[26]=c->r[28]+0x00001854u; // 801B75C0
  c->r[30]=0u+0x000D0000u; // 801B75C4
  c->r[31]=0u+0x80240000u; // 801B75C8
  c->r[21]=0u+0x80240000u; // 801B75CC
  c->r[22]=0u+0x00000003u; // 801B75D0
L_801B75D4:;
  c->r[0]=R16(c->r[26]+0x00000008u); // 801B75D4
  cmpu(c,0,c->r[0],0x00000006u); // 801B75D8
  if (!crb(c,2)) { goto L_801B76F8; } // 801B75DC
  cmps(c,0,(int32_t)c->r[25],0); // 801B75E0
  if (!crb(c,2)) { goto L_801B76F8; } // 801B75E4
  cmps(c,0,(int32_t)c->r[23],0); // 801B75E8
  if (!crb(c,2)) { goto L_801B76F8; } // 801B75EC
  c->r[3]=c->r[26]+0x00000028u; // 801B75F0
  c->lr=0x801B75F8u; f_801B1C98(c); // 801B75F4
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801B75F8
  c->r[29]=c->r[3]|c->r[3]; // 801B75FC
  cmpu(c,0,c->r[24],c->r[5]); // 801B7600
  if (!crb(c,2)) { goto L_801B76F8; } // 801B7604
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801B7608
  cmpu(c,0,c->r[0],0x00000003u); // 801B760C
  if (crb(c,0)) { goto L_801B7624; } // 801B7610
  c->r[6]=R8(c->r[28]+0x00001909u); // 801B7614
  c->r[3]=c->r[30]+0x00000002u; // 801B7618
  c->r[4]=c->r[31]+0x00005804u; // 801B761C
  c->lr=0x801B7624u; f_801AA800(c); // 801B7620
L_801B7624:;
  c->r[3]=0u+0x00000001u; // 801B7624
  c->lr=0x801B762Cu; f_801B2844(c); // 801B7628
  c->r[0]=R8(c->r[28]+0x00001908u); // 801B762C
  cmps(c,0,(int32_t)c->r[0],0); // 801B7630
  if (!crb(c,2)) { goto L_801B7658; } // 801B7634
  c->r[0]=R16(c->r[26]+0x00000020u); // 801B7638
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801B763C
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 801B7640
  c->lr=0x801B7648u; f_801BDA0C(c); // 801B7644
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B7648
  if (!crb(c,2)) { goto L_801B76E8; } // 801B764C
  c->r[0]=0u+0x00000003u; // 801B7650
  goto L_801B76EC; // 801B7654
L_801B7658:;
  c->r[0]=R8(c->r[28]+0x00000636u); // 801B7658
  c->r[3]=R16(c->r[28]+0x00000656u); // 801B765C
  c->r[4]=R16(c->r[26]+0x00000020u); // 801B7660
  cmpu(c,0,c->r[0],0x00000003u); // 801B7664
  c->r[0]=c->r[4]&c->r[3]; // 801B7668
  c->r[20]=rotl(c->r[0],0)&0x0000003Fu; // 801B766C
  if (crb(c,0)) { goto L_801B7684; } // 801B7670
  c->r[0]=c->r[4]|c->r[3]; // 801B7674
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801B7678
  c->r[0]=c->r[20]|c->r[0]; // 801B767C
  c->r[20]=rotl(c->r[0],0)&0x0000FFFFu; // 801B7680
L_801B7684:;
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801B7684
  cmpu(c,0,c->r[0],0x00000003u); // 801B7688
  if (crb(c,0)) { goto L_801B76B4; } // 801B768C
  c->r[5]=R32(c->r[26]+0x00000014u); // 801B7690
  c->r[3]=c->r[30]+0x00000002u; // 801B7694
  c->r[6]=R32(c->r[26]+0x00000018u); // 801B7698
  c->r[4]=c->r[21]+0x000057B4u; // 801B769C
  c->r[7]=R16(c->r[26]+0x0000001Cu); // 801B76A0
  c->r[10]=rotl(c->r[20],0)&0x0000FFFFu; // 801B76A4
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 801B76A8
  c->r[9]=R8(c->r[26]+0x00000022u); // 801B76AC
  c->lr=0x801B76B4u; f_801AA880(c); // 801B76B0
L_801B76B4:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 801B76B4
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801B76B8
  c->r[5]=R32(c->r[26]+0x00000018u); // 801B76BC
  c->r[9]=rotl(c->r[20],0)&0x0000FFFFu; // 801B76C0
  c->r[6]=R16(c->r[26]+0x0000001Cu); // 801B76C4
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 801B76C8
  c->r[8]=R8(c->r[26]+0x00000022u); // 801B76CC
  c->lr=0x801B76D4u; f_801BE49C(c); // 801B76D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B76D4
  if (!crb(c,2)) { goto L_801B76E4; } // 801B76D8
  c->r[0]=0u+0x00000003u; // 801B76DC
  goto L_801B76EC; // 801B76E0
L_801B76E4:;
  W16(c->r[26]+0x00000020u,c->r[20]); // 801B76E4
L_801B76E8:;
  c->r[0]=0u+0x00000001u; // 801B76E8
L_801B76EC:;
  cmpu(c,0,c->r[0],0x00000001u); // 801B76EC
  if (!crb(c,2)) { goto L_801B76F8; } // 801B76F0
  W16(c->r[26]+0x00000008u,c->r[22]); // 801B76F4
L_801B76F8:;
  c->r[27]=c->r[27]+0x00000001u; // 801B76F8
  c->r[26]=c->r[26]+0x00000034u; // 801B76FC
  cmpu(c,0,c->r[27],0x00000003u); // 801B7700
  if (crb(c,0)) { IRQCHK(c); goto L_801B75D4; } // 801B7704
  c->r[11]=c->r[1]+0x00000040u; // 801B7708
  c->lr=0x801B7710u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B770C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B7710
  c->lr=c->r[0]; // 801B7714
  c->r[1]=c->r[1]+0x00000040u; // 801B7718
  return; // 801B771C
}

// btm_sco_conn_req
void f_801B7720(Ctx* __restrict c) {
  trace_call(0x801B7720u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7720
  c->r[0]=c->lr; // 801B7724
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B7728
  c->r[11]=c->r[1]+0x00000030u; // 801B772C
  c->lr=0x801B7734u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7730
  c->r[6]=0u+0x802D0000u; // 801B7734
  c->r[30]=c->r[3]|c->r[3]; // 801B7738
  c->r[6]=c->r[6]+0x000023D8u; // 801B773C
  c->r[29]=c->r[4]|c->r[4]; // 801B7740
  c->r[31]=c->r[5]|c->r[5]; // 801B7744
  c->r[28]=0u+0x00000000u; // 801B7748
  c->r[27]=c->r[6]+0x00001854u; // 801B774C
L_801B7750:;
  c->r[3]=R16(c->r[27]+0x00000008u); // 801B7750
  cmpu(c,0,c->r[3],0x00000001u); // 801B7754
  if (!crb(c,2)) { goto L_801B7768; } // 801B7758
  c->r[0]=R8(c->r[27]+0x0000000Du); // 801B775C
  cmps(c,0,(int32_t)c->r[0],0); // 801B7760
  if (!crb(c,2)) { goto L_801B7770; } // 801B7764
L_801B7768:;
  cmpu(c,0,c->r[3],0x00000003u); // 801B7768
  if (!crb(c,2)) { goto L_801B7810; } // 801B776C
L_801B7770:;
  c->r[4]=c->r[30]|c->r[30]; // 801B7770
  c->r[3]=c->r[27]+0x00000028u; // 801B7774
  c->r[5]=0u+0x00000006u; // 801B7778
  c->lr=0x801B7780u; f_801D8F78(c); // 801B777C
  cmps(c,0,(int32_t)c->r[3],0); // 801B7780
  if (!crb(c,2)) { goto L_801B7810; } // 801B7784
  c->r[0]=0u+0x00000001u; // 801B7788
  c->r[4]=c->r[30]|c->r[30]; // 801B778C
  W8(c->r[27]+0x0000000Du,c->r[0]); // 801B7790
  c->r[3]=c->r[27]+0x00000028u; // 801B7794
  c->r[5]=0u+0x00000006u; // 801B7798
  W8(c->r[27]+0x0000002Eu,c->r[31]); // 801B779C
  c->lr=0x801B77A4u; f_80004364(c); // 801B77A0
  c->r[0]=R32(c->r[27]+0x00000010u); // 801B77A4
  cmps(c,0,(int32_t)c->r[0],0); // 801B77A8
  if (!crb(c,2)) { goto L_801B77C8; } // 801B77AC
  c->r[5]=c->r[30]|c->r[30]; // 801B77B0
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801B77B4
  c->r[4]=0u+0x00000000u; // 801B77B8
  c->r[6]=0u+0x00000000u; // 801B77BC
  c->lr=0x801B77C4u; f_801B73B8(c); // 801B77C0
  goto L_801B78E8; // 801B77C4
L_801B77C8:;
  c->r[4]=c->r[30]|c->r[30]; // 801B77C8
  c->r[3]=c->r[1]+0x0000000Au; // 801B77CC
  c->r[5]=0u+0x00000006u; // 801B77D0
  c->lr=0x801B77D8u; f_80004364(c); // 801B77D4
  c->r[4]=c->r[29]|c->r[29]; // 801B77D8
  c->r[3]=c->r[1]+0x00000010u; // 801B77DC
  c->r[5]=0u+0x00000003u; // 801B77E0
  c->lr=0x801B77E8u; f_80004364(c); // 801B77E4
  c->r[0]=0u+0x00000002u; // 801B77E8
  W8(c->r[1]+0x00000013u,c->r[31]); // 801B77EC
  c->r[4]=c->r[1]+0x00000008u; // 801B77F0
  c->r[3]=0u+0x00000002u; // 801B77F4
  W16(c->r[27]+0x00000008u,c->r[0]); // 801B77F8
  c->r[12]=R32(c->r[27]+0x00000010u); // 801B77FC
  W16(c->r[1]+0x00000008u,c->r[28]); // 801B7800
  c->ctr=c->r[12]; // 801B7804
  if (true) { c->lr=0x801B780Cu; dispatch(c,c->ctr); } // 801B7808
  goto L_801B78E8; // 801B780C
L_801B7810:;
  c->r[28]=c->r[28]+0x00000001u; // 801B7810
  c->r[27]=c->r[27]+0x00000034u; // 801B7814
  cmpu(c,0,c->r[28],0x00000003u); // 801B7818
  if (crb(c,0)) { IRQCHK(c); goto L_801B7750; } // 801B781C
  c->r[3]=0u+0x802D0000u; // 801B7820
  c->r[3]=c->r[3]+0x000023D8u; // 801B7824
  c->r[0]=R32(c->r[3]+0x00001850u); // 801B7828
  cmps(c,0,(int32_t)c->r[0],0); // 801B782C
  if (crb(c,2)) { goto L_801B78AC; } // 801B7830
  c->r[0]=0u+0x00000003u; // 801B7834
  c->r[28]=c->r[3]+0x00001854u; // 801B7838
  c->r[27]=0u+0x00000000u; // 801B783C
  c->ctr=c->r[0]; // 801B7840
L_801B7844:;
  c->r[0]=R16(c->r[28]+0x00000008u); // 801B7844
  cmps(c,0,(int32_t)c->r[0],0); // 801B7848
  if (!crb(c,2)) { goto L_801B787C; } // 801B784C
  c->r[0]=0u+0x00000000u; // 801B7850
  c->r[29]=0u+0x00000001u; // 801B7854
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801B7858
  c->r[4]=c->r[30]|c->r[30]; // 801B785C
  c->r[3]=c->r[28]+0x00000028u; // 801B7860
  c->r[5]=0u+0x00000006u; // 801B7864
  W16(c->r[28]+0x00000008u,c->r[29]); // 801B7868
  W8(c->r[28]+0x0000002Eu,c->r[31]); // 801B786C
  c->lr=0x801B7874u; f_80004364(c); // 801B7870
  W8(c->r[28]+0x0000000Du,c->r[29]); // 801B7874
  goto L_801B7888; // 801B7878
L_801B787C:;
  c->r[27]=c->r[27]+0x00000001u; // 801B787C
  c->r[28]=c->r[28]+0x00000034u; // 801B7880
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7844; } // 801B7884
L_801B7888:;
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 801B7888
  cmpu(c,0,c->r[3],0x00000003u); // 801B788C
  if (!crb(c,0)) { goto L_801B78AC; } // 801B7890
  c->r[4]=0u+0x802D0000u; // 801B7894
  c->r[4]=c->r[4]+0x000023D8u; // 801B7898
  c->r[12]=R32(c->r[4]+0x00001850u); // 801B789C
  c->ctr=c->r[12]; // 801B78A0
  if (true) { c->lr=0x801B78A8u; dispatch(c,c->ctr); } // 801B78A4
  goto L_801B78E8; // 801B78A8
L_801B78AC:;
  c->r[3]=0u+0x802D0000u; // 801B78AC
  c->r[3]=c->r[3]+0x000023D8u; // 801B78B0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B78B4
  cmpu(c,0,c->r[0],0x00000002u); // 801B78B8
  if (crb(c,0)) { goto L_801B78D4; } // 801B78BC
  c->r[3]=0u+0x000D0000u; // 801B78C0
  c->r[4]=0u+0x80240000u; // 801B78C4
  c->r[3]=c->r[3]+0x00000001u; // 801B78C8
  c->r[4]=c->r[4]+0x00005854u; // 801B78CC
  c->lr=0x801B78D4u; f_801AA7C0(c); // 801B78D0
L_801B78D4:;
  c->r[5]=c->r[30]|c->r[30]; // 801B78D4
  c->r[3]=0u+0x00000003u; // 801B78D8
  c->r[4]=0u+0x0000000Du; // 801B78DC
  c->r[6]=0u+0x00000000u; // 801B78E0
  c->lr=0x801B78E8u; f_801B73B8(c); // 801B78E4
L_801B78E8:;
  c->r[11]=c->r[1]+0x00000030u; // 801B78E8
  c->lr=0x801B78F0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B78EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B78F0
  c->lr=c->r[0]; // 801B78F4
  c->r[1]=c->r[1]+0x00000030u; // 801B78F8
  return; // 801B78FC
}

// btm_sco_connected
void f_801B7900(Ctx* __restrict c) {
  trace_call(0x801B7900u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7900
  c->r[0]=c->lr; // 801B7904
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B7908
  c->r[11]=c->r[1]+0x00000030u; // 801B790C
  c->lr=0x801B7914u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7910
  c->r[7]=0u+0x802D0000u; // 801B7914
  c->r[24]=c->r[3]|c->r[3]; // 801B7918
  c->r[7]=c->r[7]+0x000023D8u; // 801B791C
  c->r[25]=c->r[4]|c->r[4]; // 801B7920
  W16(c->r[7]+0x000018F6u,c->r[3]); // 801B7924
  c->r[26]=c->r[5]|c->r[5]; // 801B7928
  c->r[29]=c->r[6]|c->r[6]; // 801B792C
  c->r[31]=c->r[7]+0x00001854u; // 801B7930
  c->r[27]=0u+0x00000000u; // 801B7934
  c->r[30]=0u+0x00000000u; // 801B7938
L_801B793C:;
  c->r[28]=R16(c->r[31]+0x00000008u); // 801B793C
  c->r[3]=c->r[28]+0x00010000u; // 801B7940
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B7944
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801B7948
  cmpu(c,0,c->r[0],0x00000002u); // 801B794C
  if (crb(c,1)) { goto L_801B7A78; } // 801B7950
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801B7954
  cmps(c,0,(int32_t)c->r[0],0); // 801B7958
  if (crb(c,2)) { goto L_801B7A78; } // 801B795C
  cmps(c,0,(int32_t)c->r[25],0); // 801B7960
  if (crb(c,2)) { goto L_801B7980; } // 801B7964
  c->r[4]=c->r[25]|c->r[25]; // 801B7968
  c->r[3]=c->r[31]+0x00000028u; // 801B796C
  c->r[5]=0u+0x00000006u; // 801B7970
  c->lr=0x801B7978u; f_801D8F78(c); // 801B7974
  cmps(c,0,(int32_t)c->r[3],0); // 801B7978
  if (!crb(c,2)) { goto L_801B7A78; } // 801B797C
L_801B7980:;
  cmps(c,0,(int32_t)c->r[24],0); // 801B7980
  if (crb(c,2)) { goto L_801B79C0; } // 801B7984
  cmpu(c,0,c->r[28],0x00000003u); // 801B7988
  if (!crb(c,2)) { goto L_801B79B4; } // 801B798C
  cmpu(c,0,c->r[24],0x00000023u); // 801B7990
  if (crb(c,2)) { goto L_801B7A88; } // 801B7994
  c->r[0]=0u+0x00000000u; // 801B7998
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801B799C
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B79A0
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B79A4
  c->ctr=c->r[12]; // 801B79A8
  if (true) { c->lr=0x801B79B0u; dispatch(c,c->ctr); } // 801B79AC
  goto L_801B7A88; // 801B79B0
L_801B79B4:;
  c->r[0]=0u+0x00000001u; // 801B79B4
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B79B8
  goto L_801B7A88; // 801B79BC
L_801B79C0:;
  cmpu(c,0,c->r[28],0x00000001u); // 801B79C0
  if (!crb(c,2)) { goto L_801B79CC; } // 801B79C4
  c->r[27]=0u+0x00000001u; // 801B79C8
L_801B79CC:;
  c->r[0]=0u+0x00000004u; // 801B79CC
  c->r[3]=0u+0x802D0000u; // 801B79D0
  W16(c->r[31]+0x00000008u,c->r[0]); // 801B79D4
  c->r[3]=c->r[3]+0x000023D8u; // 801B79D8
  W16(c->r[31]+0x0000000Au,c->r[26]); // 801B79DC
  c->r[0]=R8(c->r[3]+0x00001908u); // 801B79E0
  cmps(c,0,(int32_t)c->r[0],0); // 801B79E4
  if (!crb(c,2)) { goto L_801B7A24; } // 801B79E8
  c->r[0]=0u+0x00000000u; // 801B79EC
  cmps(c,0,(int32_t)c->r[27],0); // 801B79F0
  W8(c->r[31]+0x0000002Eu,c->r[0]); // 801B79F4
  if (crb(c,2)) { goto L_801B7A64; } // 801B79F8
  c->r[6]=R16(c->r[31]+0x00000020u); // 801B79FC
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801B7A00
  c->r[5]=R16(c->r[31]+0x0000001Cu); // 801B7A04
  c->r[4]=c->r[1]+0x00000008u; // 801B7A08
  c->r[0]=R8(c->r[31]+0x00000022u); // 801B7A0C
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801B7A10
  W16(c->r[1]+0x00000008u,c->r[5]); // 801B7A14
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801B7A18
  c->lr=0x801B7A20u; f_801B7DA8(c); // 801B7A1C
  goto L_801B7A64; // 801B7A20
L_801B7A24:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B7A24
  if (crb(c,2)) { goto L_801B7A64; } // 801B7A28
  c->r[3]=R16(c->r[29]+0x00000000u); // 801B7A2C
  c->r[0]=R16(c->r[29]+0x00000002u); // 801B7A30
  W16(c->r[31]+0x00000024u,c->r[3]); // 801B7A34
  W16(c->r[31]+0x00000026u,c->r[0]); // 801B7A38
  c->r[3]=R16(c->r[29]+0x00000004u); // 801B7A3C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801B7A40
  W16(c->r[31]+0x00000028u,c->r[3]); // 801B7A44
  W16(c->r[31]+0x0000002Au,c->r[0]); // 801B7A48
  c->r[0]=R16(c->r[29]+0x00000008u); // 801B7A4C
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 801B7A50
  c->r[0]=R16(c->r[29]+0x0000000Au); // 801B7A54
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 801B7A58
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801B7A5C
  W16(c->r[31]+0x00000030u,c->r[0]); // 801B7A60
L_801B7A64:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801B7A64
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801B7A68
  c->ctr=c->r[12]; // 801B7A6C
  if (true) { c->lr=0x801B7A74u; dispatch(c,c->ctr); } // 801B7A70
  goto L_801B7A88; // 801B7A74
L_801B7A78:;
  c->r[30]=c->r[30]+0x00000001u; // 801B7A78
  c->r[31]=c->r[31]+0x00000034u; // 801B7A7C
  cmpu(c,0,c->r[30],0x00000003u); // 801B7A80
  if (crb(c,0)) { IRQCHK(c); goto L_801B793C; } // 801B7A84
L_801B7A88:;
  c->r[11]=c->r[1]+0x00000030u; // 801B7A88
  c->lr=0x801B7A90u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7A8C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B7A90
  c->lr=c->r[0]; // 801B7A94
  c->r[1]=c->r[1]+0x00000030u; // 801B7A98
  return; // 801B7A9C
}

// BTM_RemoveSco
void f_801B7AA0(Ctx* __restrict c) {
  trace_call(0x801B7AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7AA0
  c->r[0]=c->lr; // 801B7AA4
  c->r[4]=0u+0x802D0000u; // 801B7AA8
  cmpu(c,0,c->r[3],0x00000003u); // 801B7AAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7AB0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801B7AB4
  c->r[4]=c->r[4]+0x000023D8u; // 801B7AB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B7ABC
  c->r[31]=c->r[4]+c->r[0]; // 801B7AC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B7AC4
  if (!crb(c,0)) { goto L_801B7AD8; } // 801B7AC8
  c->r[30]=R16(c->r[31]+0x0000185Cu); // 801B7ACC
  cmps(c,0,(int32_t)c->r[30],0); // 801B7AD0
  if (!crb(c,2)) { goto L_801B7AE0; } // 801B7AD4
L_801B7AD8:;
  c->r[3]=0u+0x00000007u; // 801B7AD8
  goto L_801B7B40; // 801B7ADC
L_801B7AE0:;
  c->r[0]=R16(c->r[31]+0x0000185Eu); // 801B7AE0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B7AE4
  if (crb(c,2)) { goto L_801B7AF4; } // 801B7AE8
  cmpu(c,0,c->r[30],0x00000006u); // 801B7AEC
  if (!crb(c,2)) { goto L_801B7B14; } // 801B7AF0
L_801B7AF4:;
  c->r[3]=0u+0x00010000u; // 801B7AF4
  c->r[0]=0u+0x00000000u; // 801B7AF8
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801B7AFC
  W16(c->r[31]+0x0000185Eu,c->r[4]); // 801B7B00
  c->r[3]=0u+0x00000000u; // 801B7B04
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801B7B08
  W32(c->r[31]+0x00001864u,c->r[0]); // 801B7B0C
  goto L_801B7B40; // 801B7B10
L_801B7B14:;
  c->r[0]=0u+0x00000005u; // 801B7B14
  c->r[4]=0u+0x00000013u; // 801B7B18
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801B7B1C
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801B7B20
  c->lr=0x801B7B28u; f_801BD984(c); // 801B7B24
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B7B28
  if (!crb(c,2)) { goto L_801B7B3C; } // 801B7B2C
  W16(c->r[31]+0x0000185Cu,c->r[30]); // 801B7B30
  c->r[3]=0u+0x00000003u; // 801B7B34
  goto L_801B7B40; // 801B7B38
L_801B7B3C:;
  c->r[3]=0u+0x00000001u; // 801B7B3C
L_801B7B40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7B40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7B44
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B7B48
  c->lr=c->r[0]; // 801B7B4C
  c->r[1]=c->r[1]+0x00000010u; // 801B7B50
  return; // 801B7B54
}

// btm_remove_sco_links
void f_801B7B58(Ctx* __restrict c) {
  trace_call(0x801B7B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7B58
  c->r[0]=c->lr; // 801B7B5C
  c->r[4]=0u+0x802D0000u; // 801B7B60
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7B64
  c->r[4]=c->r[4]+0x000023D8u; // 801B7B68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7B6C
  c->r[31]=c->r[4]+0x00001854u; // 801B7B70
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B7B74
  c->r[30]=0u+0x00000000u; // 801B7B78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B7B7C
  c->r[29]=c->r[3]|c->r[3]; // 801B7B80
L_801B7B84:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801B7B84
  cmps(c,0,(int32_t)c->r[0],0); // 801B7B88
  if (crb(c,2)) { goto L_801B7BB0; } // 801B7B8C
  c->r[4]=c->r[29]|c->r[29]; // 801B7B90
  c->r[3]=c->r[31]+0x00000028u; // 801B7B94
  c->r[5]=0u+0x00000006u; // 801B7B98
  c->lr=0x801B7BA0u; f_801D8F78(c); // 801B7B9C
  cmps(c,0,(int32_t)c->r[3],0); // 801B7BA0
  if (!crb(c,2)) { goto L_801B7BB0; } // 801B7BA4
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801B7BA8
  c->lr=0x801B7BB0u; f_801B7AA0(c); // 801B7BAC
L_801B7BB0:;
  c->r[30]=c->r[30]+0x00000001u; // 801B7BB0
  c->r[31]=c->r[31]+0x00000034u; // 801B7BB4
  cmpu(c,0,c->r[30],0x00000003u); // 801B7BB8
  if (crb(c,0)) { IRQCHK(c); goto L_801B7B84; } // 801B7BBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7BC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B7BC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B7BC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B7BCC
  c->lr=c->r[0]; // 801B7BD0
  c->r[1]=c->r[1]+0x00000020u; // 801B7BD4
  return; // 801B7BD8
}

// btm_sco_removed
void f_801B7BDC(Ctx* __restrict c) {
  trace_call(0x801B7BDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7BDC
  c->r[0]=c->lr; // 801B7BE0
  c->r[5]=0u+0x802D0000u; // 801B7BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B7BE8
  c->r[5]=c->r[5]+0x000023D8u; // 801B7BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B7BF0
  c->r[31]=c->r[3]|c->r[3]; // 801B7BF4
  c->r[3]=0u+0x00000000u; // 801B7BF8
  W16(c->r[5]+0x000018F6u,c->r[4]); // 801B7BFC
  c->r[0]=R16(c->r[5]+0x0000185Cu); // 801B7C00
  cmps(c,0,(int32_t)c->r[0],7); // 801B7C04
  if (!crb(c,0)) { goto L_801B7C1C; } // 801B7C08
  cmps(c,0,(int32_t)c->r[0],2); // 801B7C0C
  if (!crb(c,0)) { goto L_801B7C18; } // 801B7C10
  goto L_801B7C1C; // 801B7C14
L_801B7C18:;
  c->r[3]=0u+0x00000001u; // 801B7C18
L_801B7C1C:;
  c->r[0]=R16(c->r[5]+0x00001890u); // 801B7C1C
  cmps(c,0,(int32_t)c->r[0],7); // 801B7C20
  if (!crb(c,0)) { goto L_801B7C38; } // 801B7C24
  cmps(c,0,(int32_t)c->r[0],2); // 801B7C28
  if (!crb(c,0)) { goto L_801B7C34; } // 801B7C2C
  goto L_801B7C38; // 801B7C30
L_801B7C34:;
  c->r[3]=c->r[3]+0x00000001u; // 801B7C34
L_801B7C38:;
  c->r[0]=R16(c->r[5]+0x000018C4u); // 801B7C38
  cmps(c,0,(int32_t)c->r[0],7); // 801B7C3C
  if (!crb(c,0)) { goto L_801B7C54; } // 801B7C40
  cmps(c,0,(int32_t)c->r[0],2); // 801B7C44
  if (!crb(c,0)) { goto L_801B7C50; } // 801B7C48
  goto L_801B7C54; // 801B7C4C
L_801B7C50:;
  c->r[3]=c->r[3]+0x00000001u; // 801B7C50
L_801B7C54:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B7C54
  cmpu(c,0,c->r[0],0x00000001u); // 801B7C58
  if (crb(c,1)) { goto L_801B7C68; } // 801B7C5C
  c->r[3]=0u+0x00000000u; // 801B7C60
  c->lr=0x801B7C68u; f_801B2844(c); // 801B7C64
L_801B7C68:;
  c->r[3]=0u+0x802D0000u; // 801B7C68
  c->r[0]=0u+0x00000003u; // 801B7C6C
  c->r[3]=c->r[3]+0x000023D8u; // 801B7C70
  c->r[6]=0u+0x00000000u; // 801B7C74
  c->r[5]=c->r[3]+0x00001854u; // 801B7C78
  c->ctr=c->r[0]; // 801B7C7C
L_801B7C80:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801B7C80
  cmps(c,0,(int32_t)c->r[0],0); // 801B7C84
  if (crb(c,2)) { goto L_801B7CD0; } // 801B7C88
  cmpu(c,0,c->r[0],0x00000001u); // 801B7C8C
  if (crb(c,2)) { goto L_801B7CD0; } // 801B7C90
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801B7C94
  cmpu(c,0,c->r[0],c->r[31]); // 801B7C98
  if (!crb(c,2)) { goto L_801B7CD0; } // 801B7C9C
  c->r[4]=0u+0x00000000u; // 801B7CA0
  c->r[3]=0u+0x00010000u; // 801B7CA4
  W16(c->r[5]+0x00000008u,c->r[4]); // 801B7CA8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B7CAC
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 801B7CB0
  W16(c->r[5]+0x0000000Au,c->r[0]); // 801B7CB4
  W8(c->r[5]+0x0000000Du,c->r[4]); // 801B7CB8
  W32(c->r[5]+0x00000010u,c->r[4]); // 801B7CBC
  c->r[12]=R32(c->r[5]+0x00000004u); // 801B7CC0
  c->ctr=c->r[12]; // 801B7CC4
  if (true) { c->lr=0x801B7CCCu; dispatch(c,c->ctr); } // 801B7CC8
  goto L_801B7CDC; // 801B7CCC
L_801B7CD0:;
  c->r[6]=c->r[6]+0x00000001u; // 801B7CD0
  c->r[5]=c->r[5]+0x00000034u; // 801B7CD4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7C80; } // 801B7CD8
L_801B7CDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B7CDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B7CE0
  c->lr=c->r[0]; // 801B7CE4
  c->r[1]=c->r[1]+0x00000010u; // 801B7CE8
  return; // 801B7CEC
}

// btm_sco_acl_removed
void f_801B7CF0(Ctx* __restrict c) {
  trace_call(0x801B7CF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7CF0
  c->r[0]=c->lr; // 801B7CF4
  c->r[4]=0u+0x802D0000u; // 801B7CF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7CFC
  c->r[4]=c->r[4]+0x000023D8u; // 801B7D00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B7D04
  c->r[31]=0u+0x00000000u; // 801B7D08
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B7D0C
  c->r[30]=c->r[4]+0x00001854u; // 801B7D10
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B7D14
  c->r[29]=0u+0x00000000u; // 801B7D18
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B7D1C
  c->r[28]=c->r[3]|c->r[3]; // 801B7D20
L_801B7D24:;
  c->r[0]=R16(c->r[30]+0x00000008u); // 801B7D24
  cmps(c,0,(int32_t)c->r[0],0); // 801B7D28
  if (crb(c,2)) { goto L_801B7D74; } // 801B7D2C
  cmps(c,0,(int32_t)c->r[28],0); // 801B7D30
  if (crb(c,2)) { goto L_801B7D5C; } // 801B7D34
  c->r[4]=c->r[28]|c->r[28]; // 801B7D38
  c->r[3]=c->r[30]+0x00000028u; // 801B7D3C
  c->r[5]=0u+0x00000006u; // 801B7D40
  c->lr=0x801B7D48u; f_801D8F78(c); // 801B7D44
  cmps(c,0,(int32_t)c->r[3],0); // 801B7D48
  if (!crb(c,2)) { goto L_801B7D74; } // 801B7D4C
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801B7D50
  cmps(c,0,(int32_t)c->r[0],0); // 801B7D54
  if (crb(c,2)) { goto L_801B7D74; } // 801B7D58
L_801B7D5C:;
  W16(c->r[30]+0x00000008u,c->r[31]); // 801B7D5C
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801B7D60
  W32(c->r[30]+0x00000010u,c->r[31]); // 801B7D64
  c->r[12]=R32(c->r[30]+0x00000004u); // 801B7D68
  c->ctr=c->r[12]; // 801B7D6C
  if (true) { c->lr=0x801B7D74u; dispatch(c,c->ctr); } // 801B7D70
L_801B7D74:;
  c->r[29]=c->r[29]+0x00000001u; // 801B7D74
  c->r[30]=c->r[30]+0x00000034u; // 801B7D78
  cmpu(c,0,c->r[29],0x00000003u); // 801B7D7C
  if (crb(c,0)) { IRQCHK(c); goto L_801B7D24; } // 801B7D80
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7D84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B7D88
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B7D8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B7D90
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B7D94
  c->lr=c->r[0]; // 801B7D98
  c->r[1]=c->r[1]+0x00000020u; // 801B7D9C
  return; // 801B7DA0
}

// btm_route_sco_data
void f_801B7DA4(Ctx* __restrict c) {
  trace_call(0x801B7DA4u);
  f_801A7D00(c); return; // 801B7DA4
}

// BTM_ChangeEScoLinkParms
void f_801B7DA8(Ctx* __restrict c) {
  trace_call(0x801B7DA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7DA8
  c->r[0]=c->lr; // 801B7DAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B7DB0
  c->r[11]=c->r[1]+0x00000020u; // 801B7DB4
  c->lr=0x801B7DBCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7DB8
  cmpu(c,0,c->r[3],0x00000003u); // 801B7DBC
  c->r[30]=0u+0x80240000u; // 801B7DC0
  c->r[28]=c->r[4]|c->r[4]; // 801B7DC4
  c->r[30]=c->r[30]+0x00005728u; // 801B7DC8
  if (!crb(c,0)) { goto L_801B7DEC; } // 801B7DCC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801B7DD0
  c->r[3]=0u+0x802D0000u; // 801B7DD4
  c->r[3]=c->r[3]+0x000023D8u; // 801B7DD8
  c->r[31]=c->r[3]+c->r[0]; // 801B7DDC
  c->r[0]=R16(c->r[31]+0x0000185Cu); // 801B7DE0
  cmpu(c,0,c->r[0],0x00000004u); // 801B7DE4
  if (crb(c,2)) { goto L_801B7DF4; } // 801B7DE8
L_801B7DEC:;
  c->r[3]=0u+0x00000006u; // 801B7DEC
  goto L_801B7F38; // 801B7DF0
L_801B7DF4:;
  c->r[0]=R8(c->r[31]+0x00001882u); // 801B7DF4
  c->r[29]=c->r[31]+0x00001868u; // 801B7DF8
  cmps(c,0,(int32_t)c->r[0],0); // 801B7DFC
  if (crb(c,2)) { goto L_801B7E10; } // 801B7E00
  c->r[0]=R8(c->r[3]+0x00001908u); // 801B7E04
  cmps(c,0,(int32_t)c->r[0],0); // 801B7E08
  if (!crb(c,2)) { goto L_801B7E70; } // 801B7E0C
L_801B7E10:;
  c->r[3]=0u+0x802D0000u; // 801B7E10
  c->r[4]=R16(c->r[4]+0x00000002u); // 801B7E14
  c->r[3]=c->r[3]+0x000023D8u; // 801B7E18
  c->r[0]=R16(c->r[3]+0x00000656u); // 801B7E1C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801B7E20
  c->r[0]=c->r[4]&c->r[0]; // 801B7E24
  W16(c->r[29]+0x0000000Cu,c->r[0]); // 801B7E28
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B7E2C
  cmpu(c,0,c->r[0],0x00000003u); // 801B7E30
  if (crb(c,0)) { goto L_801B7E50; } // 801B7E34
  c->r[3]=0u+0x000D0000u; // 801B7E38
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801B7E3C
  c->r[6]=R16(c->r[29]+0x0000000Cu); // 801B7E40
  c->r[3]=c->r[3]+0x00000002u; // 801B7E44
  c->r[4]=c->r[30]+0x00000248u; // 801B7E48
  c->lr=0x801B7E50u; f_801AA800(c); // 801B7E4C
L_801B7E50:;
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801B7E50
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801B7E54
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 801B7E58
  c->lr=0x801B7E60u; f_801BE018(c); // 801B7E5C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B7E60
  if (!crb(c,2)) { goto L_801B7F34; } // 801B7E64
  c->r[3]=0u+0x00000003u; // 801B7E68
  goto L_801B7F38; // 801B7E6C
L_801B7E70:;
  c->r[0]=R8(c->r[3]+0x00000636u); // 801B7E70
  c->r[3]=R16(c->r[3]+0x00000656u); // 801B7E74
  c->r[4]=R16(c->r[4]+0x00000002u); // 801B7E78
  cmpu(c,0,c->r[0],0x00000003u); // 801B7E7C
  c->r[0]=c->r[4]&c->r[3]; // 801B7E80
  c->r[27]=rotl(c->r[0],0)&0x0000003Fu; // 801B7E84
  if (crb(c,0)) { goto L_801B7E9C; } // 801B7E88
  c->r[0]=c->r[4]|c->r[3]; // 801B7E8C
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801B7E90
  c->r[0]=c->r[27]|c->r[0]; // 801B7E94
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801B7E98
L_801B7E9C:;
  c->r[3]=0u+0x802D0000u; // 801B7E9C
  c->r[3]=c->r[3]+0x000023D8u; // 801B7EA0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B7EA4
  cmpu(c,0,c->r[0],0x00000003u); // 801B7EA8
  if (crb(c,0)) { goto L_801B7EC4; } // 801B7EAC
  c->r[3]=0u+0x000D0000u; // 801B7EB0
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801B7EB4
  c->r[3]=c->r[3]+0x00000002u; // 801B7EB8
  c->r[4]=c->r[30]+0x0000028Cu; // 801B7EBC
  c->lr=0x801B7EC4u; f_801AA7E0(c); // 801B7EC0
L_801B7EC4:;
  c->r[3]=0u+0x802D0000u; // 801B7EC4
  c->r[3]=c->r[3]+0x000023D8u; // 801B7EC8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B7ECC
  cmpu(c,0,c->r[0],0x00000003u); // 801B7ED0
  if (crb(c,0)) { goto L_801B7F00; } // 801B7ED4
  c->r[3]=0u+0x000D0000u; // 801B7ED8
  c->r[5]=R32(c->r[29]+0x00000000u); // 801B7EDC
  c->r[6]=R32(c->r[29]+0x00000004u); // 801B7EE0
  c->r[3]=c->r[3]+0x00000002u; // 801B7EE4
  c->r[7]=R16(c->r[28]+0x00000000u); // 801B7EE8
  c->r[4]=c->r[30]+0x0000008Cu; // 801B7EEC
  c->r[8]=R16(c->r[29]+0x0000000Au); // 801B7EF0
  c->r[10]=rotl(c->r[27],0)&0x0000FFFFu; // 801B7EF4
  c->r[9]=R8(c->r[28]+0x00000004u); // 801B7EF8
  c->lr=0x801B7F00u; f_801AA880(c); // 801B7EFC
L_801B7F00:;
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801B7F00
  c->r[9]=rotl(c->r[27],0)&0x0000FFFFu; // 801B7F04
  c->r[4]=R32(c->r[29]+0x00000000u); // 801B7F08
  c->r[5]=R32(c->r[29]+0x00000004u); // 801B7F0C
  c->r[6]=R16(c->r[28]+0x00000000u); // 801B7F10
  c->r[7]=R16(c->r[29]+0x0000000Au); // 801B7F14
  c->r[8]=R8(c->r[28]+0x00000004u); // 801B7F18
  c->lr=0x801B7F20u; f_801BE49C(c); // 801B7F1C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B7F20
  if (!crb(c,2)) { goto L_801B7F30; } // 801B7F24
  c->r[3]=0u+0x00000003u; // 801B7F28
  goto L_801B7F38; // 801B7F2C
L_801B7F30:;
  W16(c->r[28]+0x00000002u,c->r[27]); // 801B7F30
L_801B7F34:;
  c->r[3]=0u+0x00000001u; // 801B7F34
L_801B7F38:;
  c->r[11]=c->r[1]+0x00000020u; // 801B7F38
  c->lr=0x801B7F40u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B7F3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B7F40
  c->lr=c->r[0]; // 801B7F44
  c->r[1]=c->r[1]+0x00000020u; // 801B7F48
  return; // 801B7F4C
}

// btm_esco_proc_conn_chg
void f_801B7F50(Ctx* __restrict c) {
  trace_call(0x801B7F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B7F50
  c->r[0]=c->lr; // 801B7F54
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B7F58
  c->r[11]=c->r[1]+0x00000040u; // 801B7F5C
  c->lr=0x801B7F64u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B7F60
  c->r[9]=0u+0x802D0000u; // 801B7F64
  c->r[24]=c->r[3]|c->r[3]; // 801B7F68
  c->r[9]=c->r[9]+0x000023D8u; // 801B7F6C
  c->r[25]=c->r[4]|c->r[4]; // 801B7F70
  c->r[0]=R8(c->r[9]+0x000027C0u); // 801B7F74
  c->r[26]=c->r[5]|c->r[5]; // 801B7F78
  c->r[27]=c->r[6]|c->r[6]; // 801B7F7C
  c->r[28]=c->r[7]|c->r[7]; // 801B7F80
  cmpu(c,0,c->r[0],0x00000004u); // 801B7F84
  c->r[29]=c->r[8]|c->r[8]; // 801B7F88
  c->r[31]=c->r[9]+0x00001854u; // 801B7F8C
  if (crb(c,0)) { goto L_801B7FB0; } // 801B7F90
  c->r[3]=0u+0x000D0000u; // 801B7F94
  c->r[4]=0u+0x80240000u; // 801B7F98
  c->r[5]=c->r[25]|c->r[25]; // 801B7F9C
  c->r[6]=c->r[24]|c->r[24]; // 801B7FA0
  c->r[3]=c->r[3]+0x00000003u; // 801B7FA4
  c->r[4]=c->r[4]+0x000059ECu; // 801B7FA8
  c->lr=0x801B7FB0u; f_801AA800(c); // 801B7FAC
L_801B7FB0:;
  c->r[0]=0u+0x00000003u; // 801B7FB0
  c->r[30]=0u+0x00000000u; // 801B7FB4
  c->ctr=c->r[0]; // 801B7FB8
L_801B7FBC:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801B7FBC
  cmpu(c,0,c->r[0],0x00000004u); // 801B7FC0
  if (!crb(c,2)) { goto L_801B8030; } // 801B7FC4
  c->r[0]=R16(c->r[31]+0x0000000Au); // 801B7FC8
  cmpu(c,0,c->r[25],c->r[0]); // 801B7FCC
  if (!crb(c,2)) { goto L_801B8030; } // 801B7FD0
  c->r[0]=R32(c->r[31]+0x00000010u); // 801B7FD4
  cmps(c,0,(int32_t)c->r[0],0); // 801B7FD8
  if (crb(c,2)) { goto L_801B803C; } // 801B7FDC
  c->r[3]=c->r[1]+0x0000000Eu; // 801B7FE0
  c->r[4]=c->r[31]+0x00000028u; // 801B7FE4
  c->r[5]=0u+0x00000006u; // 801B7FE8
  c->lr=0x801B7FF0u; f_80004364(c); // 801B7FEC
  W16(c->r[31]+0x00000024u,c->r[28]); // 801B7FF0
  c->r[4]=c->r[1]+0x00000008u; // 801B7FF4
  c->r[3]=0u+0x00000001u; // 801B7FF8
  W16(c->r[31]+0x00000026u,c->r[29]); // 801B7FFC
  W8(c->r[31]+0x0000002Fu,c->r[26]); // 801B8000
  W8(c->r[31]+0x00000030u,c->r[27]); // 801B8004
  c->r[12]=R32(c->r[31]+0x00000010u); // 801B8008
  W8(c->r[1]+0x00000014u,c->r[24]); // 801B800C
  W16(c->r[1]+0x00000008u,c->r[30]); // 801B8010
  W16(c->r[1]+0x0000000Au,c->r[28]); // 801B8014
  W16(c->r[1]+0x0000000Cu,c->r[29]); // 801B8018
  W8(c->r[1]+0x00000015u,c->r[26]); // 801B801C
  W8(c->r[1]+0x00000016u,c->r[27]); // 801B8020
  c->ctr=c->r[12]; // 801B8024
  if (true) { c->lr=0x801B802Cu; dispatch(c,c->ctr); } // 801B8028
  goto L_801B803C; // 801B802C
L_801B8030:;
  c->r[30]=c->r[30]+0x00000001u; // 801B8030
  c->r[31]=c->r[31]+0x00000034u; // 801B8034
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B7FBC; } // 801B8038
L_801B803C:;
  c->r[11]=c->r[1]+0x00000040u; // 801B803C
  c->lr=0x801B8044u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8040
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B8044
  c->lr=c->r[0]; // 801B8048
  c->r[1]=c->r[1]+0x00000040u; // 801B804C
  return; // 801B8050
}

// btm_is_sco_active
void f_801B8054(Ctx* __restrict c) {
  trace_call(0x801B8054u);
  c->r[4]=0u+0x802D0000u; // 801B8054
  c->r[4]=c->r[4]+0x000023D8u; // 801B8058
  c->r[0]=R16(c->r[4]+0x0000185Eu); // 801B805C
  cmpu(c,0,c->r[3],c->r[0]); // 801B8060
  if (!crb(c,2)) { goto L_801B807C; } // 801B8064
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 801B8068
  cmpu(c,0,c->r[0],0x00000004u); // 801B806C
  if (!crb(c,2)) { goto L_801B807C; } // 801B8070
  c->r[3]=0u+0x00000001u; // 801B8074
  return; // 801B8078
L_801B807C:;
  c->r[0]=R16(c->r[4]+0x00001892u); // 801B807C
  cmpu(c,0,c->r[3],c->r[0]); // 801B8080
  if (!crb(c,2)) { goto L_801B809C; } // 801B8084
  c->r[0]=R16(c->r[4]+0x00001890u); // 801B8088
  cmpu(c,0,c->r[0],0x00000004u); // 801B808C
  if (!crb(c,2)) { goto L_801B809C; } // 801B8090
  c->r[3]=0u+0x00000001u; // 801B8094
  return; // 801B8098
L_801B809C:;
  c->r[0]=R16(c->r[4]+0x000018C6u); // 801B809C
  cmpu(c,0,c->r[3],c->r[0]); // 801B80A0
  if (!crb(c,2)) { goto L_801B80BC; } // 801B80A4
  c->r[0]=R16(c->r[4]+0x000018C4u); // 801B80A8
  cmpu(c,0,c->r[0],0x00000004u); // 801B80AC
  if (!crb(c,2)) { goto L_801B80BC; } // 801B80B0
  c->r[3]=0u+0x00000001u; // 801B80B4
  return; // 801B80B8
L_801B80BC:;
  c->r[3]=0u+0x00000000u; // 801B80BC
  return; // 801B80C0
}

// btm_num_sco_links_active
void f_801B80C4(Ctx* __restrict c) {
  trace_call(0x801B80C4u);
  c->r[4]=0u+0x802D0000u; // 801B80C4
  c->r[3]=0u+0x00000000u; // 801B80C8
  c->r[4]=c->r[4]+0x000023D8u; // 801B80CC
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 801B80D0
  cmps(c,0,(int32_t)c->r[0],7); // 801B80D4
  if (!crb(c,0)) { goto L_801B80EC; } // 801B80D8
  cmps(c,0,(int32_t)c->r[0],2); // 801B80DC
  if (!crb(c,0)) { goto L_801B80E8; } // 801B80E0
  goto L_801B80EC; // 801B80E4
L_801B80E8:;
  c->r[3]=0u+0x00000001u; // 801B80E8
L_801B80EC:;
  c->r[0]=R16(c->r[4]+0x00001890u); // 801B80EC
  cmps(c,0,(int32_t)c->r[0],7); // 801B80F0
  if (!crb(c,0)) { goto L_801B8108; } // 801B80F4
  cmps(c,0,(int32_t)c->r[0],2); // 801B80F8
  if (!crb(c,0)) { goto L_801B8104; } // 801B80FC
  goto L_801B8108; // 801B8100
L_801B8104:;
  c->r[3]=c->r[3]+0x00000001u; // 801B8104
L_801B8108:;
  c->r[0]=R16(c->r[4]+0x000018C4u); // 801B8108
  cmps(c,0,(int32_t)c->r[0],7); // 801B810C
  if (!crb(c,0)) return; // 801B8110
  cmps(c,0,(int32_t)c->r[0],2); // 801B8114
  if (crb(c,0)) return; // 801B8118
  c->r[3]=c->r[3]+0x00000001u; // 801B811C
  return; // 801B8120
}

// btm_is_sco_active_by_bdaddr
void f_801B8124(Ctx* __restrict c) {
  trace_call(0x801B8124u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8124
  c->r[0]=c->lr; // 801B8128
  c->r[4]=0u+0x802D0000u; // 801B812C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B8130
  c->r[4]=c->r[4]+0x000023D8u; // 801B8134
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B8138
  c->r[31]=0u+0x00000000u; // 801B813C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B8140
  c->r[30]=c->r[4]+0x00001854u; // 801B8144
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B8148
  c->r[29]=c->r[3]|c->r[3]; // 801B814C
L_801B8150:;
  c->r[4]=c->r[29]|c->r[29]; // 801B8150
  c->r[3]=c->r[30]+0x00000028u; // 801B8154
  c->r[5]=0u+0x00000006u; // 801B8158
  c->lr=0x801B8160u; f_801D8F78(c); // 801B815C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8160
  if (!crb(c,2)) { goto L_801B817C; } // 801B8164
  c->r[0]=R16(c->r[30]+0x00000008u); // 801B8168
  cmpu(c,0,c->r[0],0x00000004u); // 801B816C
  if (!crb(c,2)) { goto L_801B817C; } // 801B8170
  c->r[3]=0u+0x00000001u; // 801B8174
  goto L_801B8190; // 801B8178
L_801B817C:;
  c->r[31]=c->r[31]+0x00000001u; // 801B817C
  c->r[30]=c->r[30]+0x00000034u; // 801B8180
  cmpu(c,0,c->r[31],0x00000003u); // 801B8184
  if (crb(c,0)) { IRQCHK(c); goto L_801B8150; } // 801B8188
  c->r[3]=0u+0x00000000u; // 801B818C
L_801B8190:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B8190
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B8194
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B8198
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B819C
  c->lr=c->r[0]; // 801B81A0
  c->r[1]=c->r[1]+0x00000020u; // 801B81A4
  return; // 801B81A8
}

// BTM_SecRegister
void f_801B81AC(Ctx* __restrict c) {
  trace_call(0x801B81ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B81AC
  c->r[0]=c->lr; // 801B81B0
  c->r[6]=0u+0x802D0000u; // 801B81B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B81B8
  c->r[6]=c->r[6]+0x000023D8u; // 801B81BC
  c->r[5]=R32(c->r[3]+0x00000000u); // 801B81C0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801B81C4
  c->r[0]=R8(c->r[6]+0x000027C0u); // 801B81C8
  W32(c->r[6]+0x0000190Cu,c->r[5]); // 801B81CC
  cmpu(c,0,c->r[0],0x00000004u); // 801B81D0
  W32(c->r[6]+0x00001910u,c->r[4]); // 801B81D4
  c->r[4]=R32(c->r[3]+0x00000008u); // 801B81D8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801B81DC
  W32(c->r[6]+0x00001914u,c->r[4]); // 801B81E0
  W32(c->r[6]+0x00001918u,c->r[0]); // 801B81E4
  c->r[4]=R32(c->r[3]+0x00000010u); // 801B81E8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801B81EC
  W32(c->r[6]+0x0000191Cu,c->r[4]); // 801B81F0
  W32(c->r[6]+0x00001920u,c->r[0]); // 801B81F4
  if (crb(c,0)) { goto L_801B8210; } // 801B81F8
  c->r[3]=0u+0x000D0000u; // 801B81FC
  c->r[4]=0u+0x80240000u; // 801B8200
  c->r[3]=c->r[3]+0x00000003u; // 801B8204
  c->r[4]=c->r[4]+0x00005A28u; // 801B8208
  c->lr=0x801B8210u; f_801AA7C0(c); // 801B820C
L_801B8210:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B8210
  c->r[3]=0u+0x00000001u; // 801B8214
  c->lr=c->r[0]; // 801B8218
  c->r[1]=c->r[1]+0x00000010u; // 801B821C
  return; // 801B8220
}

// BTM_SecAddRmtNameNotifyCallback
void f_801B8224(Ctx* __restrict c) {
  trace_call(0x801B8224u);
  c->r[4]=0u+0x802D0000u; // 801B8224
  c->r[0]=0u+0x00000002u; // 801B8228
  c->r[4]=c->r[4]+0x000023D8u; // 801B822C
  c->r[5]=0u+0x00000000u; // 801B8230
  c->ctr=c->r[0]; // 801B8234
L_801B8238:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 801B8238
  cmps(c,0,(int32_t)c->r[0],0); // 801B823C
  if (!crb(c,2)) { goto L_801B8260; } // 801B8240
  c->r[4]=0u+0x802D0000u; // 801B8244
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801B8248
  c->r[4]=c->r[4]+0x000023D8u; // 801B824C
  c->r[4]=c->r[4]+c->r[0]; // 801B8250
  W32(c->r[4]+0x0000192Cu,c->r[3]); // 801B8254
  c->r[3]=0u+0x00000001u; // 801B8258
  return; // 801B825C
L_801B8260:;
  c->r[4]=c->r[4]+0x00000004u; // 801B8260
  c->r[5]=c->r[5]+0x00000001u; // 801B8264
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B8238; } // 801B8268
  c->r[3]=0u+0x00000000u; // 801B826C
  return; // 801B8270
}

// BTM_SecDeleteRmtNameNotifyCallback
void f_801B8274(Ctx* __restrict c) {
  trace_call(0x801B8274u);
  c->r[4]=0u+0x802D0000u; // 801B8274
  c->r[0]=0u+0x00000002u; // 801B8278
  c->r[4]=c->r[4]+0x000023D8u; // 801B827C
  c->r[5]=0u+0x00000000u; // 801B8280
  c->ctr=c->r[0]; // 801B8284
L_801B8288:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 801B8288
  cmpu(c,0,c->r[0],c->r[3]); // 801B828C
  if (!crb(c,2)) { goto L_801B82B4; } // 801B8290
  c->r[3]=0u+0x802D0000u; // 801B8294
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801B8298
  c->r[3]=c->r[3]+0x000023D8u; // 801B829C
  c->r[5]=0u+0x00000000u; // 801B82A0
  c->r[4]=c->r[3]+c->r[0]; // 801B82A4
  W32(c->r[4]+0x0000192Cu,c->r[5]); // 801B82A8
  c->r[3]=0u+0x00000001u; // 801B82AC
  return; // 801B82B0
L_801B82B4:;
  c->r[4]=c->r[4]+0x00000004u; // 801B82B4
  c->r[5]=c->r[5]+0x00000001u; // 801B82B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B8288; } // 801B82BC
  c->r[3]=0u+0x00000000u; // 801B82C0
  return; // 801B82C4
}

// BTM_SetPinType
void f_801B82C8(Ctx* __restrict c) {
  trace_call(0x801B82C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B82C8
  c->r[0]=c->lr; // 801B82CC
  c->r[6]=0u+0x802D0000u; // 801B82D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B82D4
  c->r[6]=c->r[6]+0x000023D8u; // 801B82D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B82DC
  c->r[31]=c->r[5]|c->r[5]; // 801B82E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B82E4
  c->r[30]=c->r[4]|c->r[4]; // 801B82E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B82EC
  c->r[29]=c->r[3]|c->r[3]; // 801B82F0
  c->r[0]=R8(c->r[6]+0x000027C0u); // 801B82F4
  cmpu(c,0,c->r[0],0x00000003u); // 801B82F8
  if (crb(c,0)) { goto L_801B8320; } // 801B82FC
  c->r[3]=0u+0x000D0000u; // 801B8300
  c->r[4]=0u+0x80240000u; // 801B8304
  c->r[5]=c->r[29]|c->r[29]; // 801B8308
  c->r[6]=c->r[30]|c->r[30]; // 801B830C
  c->r[7]=c->r[31]|c->r[31]; // 801B8310
  c->r[3]=c->r[3]+0x00000002u; // 801B8314
  c->r[4]=c->r[4]+0x00005AC0u; // 801B8318
  c->lr=0x801B8320u; f_801AA820(c); // 801B831C
L_801B8320:;
  c->r[3]=0u+0x802D0000u; // 801B8320
  c->r[3]=c->r[3]+0x000023D8u; // 801B8324
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801B8328
  cmpu(c,0,c->r[0],0x00000001u); // 801B832C
  if (!crb(c,1)) { goto L_801B833C; } // 801B8330
  c->r[3]=c->r[29]|c->r[29]; // 801B8334
  c->lr=0x801B833Cu; f_801BED78(c); // 801B8338
L_801B833C:;
  c->r[6]=0u+0x802D0000u; // 801B833C
  c->r[4]=c->r[30]|c->r[30]; // 801B8340
  c->r[6]=c->r[6]+0x000023D8u; // 801B8344
  c->r[5]=c->r[31]|c->r[31]; // 801B8348
  W8(c->r[6]+0x00000020u,c->r[29]); // 801B834C
  c->r[3]=c->r[6]+0x00000022u; // 801B8350
  W8(c->r[6]+0x00000021u,c->r[31]); // 801B8354
  c->lr=0x801B835Cu; f_80004364(c); // 801B8358
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B835C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B8360
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B8364
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B8368
  c->lr=c->r[0]; // 801B836C
  c->r[1]=c->r[1]+0x00000020u; // 801B8370
  return; // 801B8374
}

// BTM_SetSecurityLevel
void f_801B8378(Ctx* __restrict c) {
  trace_call(0x801B8378u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8378
  c->r[0]=c->lr; // 801B837C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801B8380
  c->r[11]=c->r[1]+0x00000040u; // 801B8384
  c->lr=0x801B838Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8388
  c->r[10]=0u+0x802D0000u; // 801B838C
  c->r[31]=0u+0x80240000u; // 801B8390
  c->r[10]=c->r[10]+0x000023D8u; // 801B8394
  c->r[11]=0u+0x00010000u; // 801B8398
  c->r[20]=c->r[3]|c->r[3]; // 801B839C
  c->r[21]=c->r[4]|c->r[4]; // 801B83A0
  c->r[22]=c->r[5]|c->r[5]; // 801B83A4
  c->r[23]=c->r[6]|c->r[6]; // 801B83A8
  c->r[24]=c->r[7]|c->r[7]; // 801B83AC
  c->r[25]=c->r[8]|c->r[8]; // 801B83B0
  c->r[26]=c->r[9]|c->r[9]; // 801B83B4
  c->r[31]=c->r[31]+0x00005A28u; // 801B83B8
  c->r[28]=c->r[11]+0xFFFFFFFFu; // 801B83BC
  c->r[30]=c->r[10]+0x00001990u; // 801B83C0
  c->r[27]=0u+0x00000000u; // 801B83C4
  c->r[29]=0u+0x00000000u; // 801B83C8
L_801B83CC:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801B83CC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B83D0
  if (crb(c,2)) { goto L_801B8434; } // 801B83D4
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 801B83D8
  cmpu(c,0,c->r[0],c->r[24]); // 801B83DC
  if (!crb(c,2)) { goto L_801B8444; } // 801B83E0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B83E4
  cmpu(c,0,c->r[0],c->r[25]); // 801B83E8
  if (!crb(c,2)) { goto L_801B8444; } // 801B83EC
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 801B83F0
  cmpu(c,0,c->r[22],c->r[0]); // 801B83F4
  if (!crb(c,2)) { goto L_801B8444; } // 801B83F8
  c->r[3]=c->r[21]|c->r[21]; // 801B83FC
  c->r[4]=c->r[30]+0x00000010u; // 801B8400
  c->r[5]=0u+0x00000015u; // 801B8404
  c->lr=0x801B840Cu; f_801DBC20(c); // 801B8408
  cmps(c,0,(int32_t)c->r[3],0); // 801B840C
  if (crb(c,2)) { goto L_801B842C; } // 801B8410
  c->r[3]=c->r[21]|c->r[21]; // 801B8414
  c->r[4]=c->r[30]+0x00000026u; // 801B8418
  c->r[5]=0u+0x00000015u; // 801B841C
  c->lr=0x801B8424u; f_801DBC20(c); // 801B8420
  cmps(c,0,(int32_t)c->r[3],0); // 801B8424
  if (!crb(c,2)) { goto L_801B8444; } // 801B8428
L_801B842C:;
  c->r[27]=0u+0x00000001u; // 801B842C
  goto L_801B8454; // 801B8430
L_801B8434:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B8434
  if (!crb(c,2)) { goto L_801B8444; } // 801B8438
  c->r[27]=0u+0x00000001u; // 801B843C
  c->r[28]=c->r[29]|c->r[29]; // 801B8440
L_801B8444:;
  c->r[29]=c->r[29]+0x00000001u; // 801B8444
  c->r[30]=c->r[30]+0x0000003Cu; // 801B8448
  cmpu(c,0,c->r[29],0x00000018u); // 801B844C
  if (crb(c,0)) { IRQCHK(c); goto L_801B83CC; } // 801B8450
L_801B8454:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B8454
  if (crb(c,2)) { goto L_801B855C; } // 801B8458
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 801B845C
  cmpu(c,0,c->r[0],0x00000018u); // 801B8460
  if (crb(c,0)) { goto L_801B8484; } // 801B8464
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 801B8468
  c->r[3]=0u+0x802D0000u; // 801B846C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801B8470
  c->r[29]=c->r[28]|c->r[28]; // 801B8474
  c->r[3]=c->r[3]+0x000023D8u; // 801B8478
  c->r[3]=c->r[3]+c->r[0]; // 801B847C
  c->r[30]=c->r[3]+0x00001990u; // 801B8480
L_801B8484:;
  W16(c->r[30]+0x0000000Cu,c->r[24]); // 801B8484
  cmps(c,0,(int32_t)c->r[20],0); // 801B8488
  W8(c->r[30]+0x0000000Fu,c->r[22]); // 801B848C
  W32(c->r[30]+0x00000000u,c->r[25]); // 801B8490
  if (crb(c,2)) { goto L_801B84BC; } // 801B8494
  W32(c->r[30]+0x00000004u,c->r[26]); // 801B8498
  c->r[4]=c->r[21]|c->r[21]; // 801B849C
  c->r[3]=c->r[30]+0x00000010u; // 801B84A0
  c->r[5]=0u+0x00000015u; // 801B84A4
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801B84A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC7u; // 801B84AC
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801B84B0
  c->lr=0x801B84B8u; f_801DBA48(c); // 801B84B4
  goto L_801B84DC; // 801B84B8
L_801B84BC:;
  W32(c->r[30]+0x00000008u,c->r[26]); // 801B84BC
  c->r[4]=c->r[21]|c->r[21]; // 801B84C0
  c->r[3]=c->r[30]+0x00000026u; // 801B84C4
  c->r[5]=0u+0x00000015u; // 801B84C8
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801B84CC
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801B84D0
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801B84D4
  c->lr=0x801B84DCu; f_801DBA48(c); // 801B84D8
L_801B84DC:;
  c->r[4]=R8(c->r[30]+0x0000000Eu); // 801B84DC
  c->r[0]=c->r[23]|0x00000080u; // 801B84E0
  c->r[3]=0u+0x802D0000u; // 801B84E4
  c->r[0]=c->r[4]|c->r[0]; // 801B84E8
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801B84EC
  c->r[3]=c->r[3]+0x000023D8u; // 801B84F0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B84F4
  cmpu(c,0,c->r[0],0x00000003u); // 801B84F8
  if (crb(c,0)) { goto L_801B8528; } // 801B84FC
  c->r[3]=0u+0x000D0000u; // 801B8500
  c->r[6]=c->r[22]|c->r[22]; // 801B8504
  c->r[7]=c->r[20]|c->r[20]; // 801B8508
  c->r[8]=c->r[24]|c->r[24]; // 801B850C
  c->r[9]=c->r[25]|c->r[25]; // 801B8510
  c->r[10]=c->r[26]|c->r[26]; // 801B8514
  c->r[3]=c->r[3]+0x00000002u; // 801B8518
  c->r[4]=c->r[31]+0x000000E0u; // 801B851C
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801B8520
  c->lr=0x801B8528u; f_801AA880(c); // 801B8524
L_801B8528:;
  c->r[3]=0u+0x802D0000u; // 801B8528
  c->r[3]=c->r[3]+0x000023D8u; // 801B852C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8530
  cmpu(c,0,c->r[0],0x00000003u); // 801B8534
  if (crb(c,0)) { goto L_801B8584; } // 801B8538
  c->r[3]=0u+0x000D0000u; // 801B853C
  c->r[5]=R8(c->r[30]+0x0000000Eu); // 801B8540
  c->r[6]=c->r[21]|c->r[21]; // 801B8544
  c->r[4]=c->r[31]+0x00000128u; // 801B8548
  c->r[3]=c->r[3]+0x00000002u; // 801B854C
  c->r[7]=0u+0x00000015u; // 801B8550
  c->lr=0x801B8558u; f_801AA820(c); // 801B8554
  goto L_801B8584; // 801B8558
L_801B855C:;
  c->r[3]=0u+0x802D0000u; // 801B855C
  c->r[3]=c->r[3]+0x000023D8u; // 801B8560
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8564
  cmpu(c,0,c->r[0],0x00000002u); // 801B8568
  if (crb(c,0)) { goto L_801B8584; } // 801B856C
  c->r[3]=0u+0x000D0000u; // 801B8570
  c->r[4]=c->r[31]+0x00000170u; // 801B8574
  c->r[3]=c->r[3]+0x00000001u; // 801B8578
  c->r[5]=0u+0x00000018u; // 801B857C
  c->lr=0x801B8584u; f_801AA7E0(c); // 801B8580
L_801B8584:;
  c->r[11]=c->r[1]+0x00000040u; // 801B8584
  c->r[3]=c->r[27]|c->r[27]; // 801B8588
  c->lr=0x801B8590u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B858C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801B8590
  c->lr=c->r[0]; // 801B8594
  c->r[1]=c->r[1]+0x00000040u; // 801B8598
  return; // 801B859C
}

// BTM_PINCodeReply
void f_801B85A0(Ctx* __restrict c) {
  trace_call(0x801B85A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B85A0
  c->r[0]=c->lr; // 801B85A4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B85A8
  c->r[11]=c->r[1]+0x00000030u; // 801B85AC
  c->lr=0x801B85B4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B85B0
  c->r[30]=0u+0x802D0000u; // 801B85B4
  c->r[25]=c->r[3]|c->r[3]; // 801B85B8
  c->r[30]=c->r[30]+0x000023D8u; // 801B85BC
  c->r[26]=c->r[4]|c->r[4]; // 801B85C0
  c->r[0]=R32(c->r[30]+0x0000194Cu); // 801B85C4
  c->r[27]=c->r[5]|c->r[5]; // 801B85C8
  c->r[28]=c->r[6]|c->r[6]; // 801B85CC
  c->r[29]=c->r[7]|c->r[7]; // 801B85D0
  cmps(c,0,(int32_t)c->r[0],0); // 801B85D4
  if (crb(c,2)) { goto L_801B864C; } // 801B85D8
  c->r[3]=c->r[30]+0x0000193Cu; // 801B85DC
  c->lr=0x801B85E4u; f_801AAE40(c); // 801B85E0
  c->r[31]=0u+0x00000000u; // 801B85E4
  c->r[3]=c->r[30]+0x00001954u; // 801B85E8
  W32(c->r[30]+0x0000194Cu,c->r[31]); // 801B85EC
  c->r[4]=0u+0x000000FFu; // 801B85F0
  c->r[5]=0u+0x00000006u; // 801B85F4
  c->lr=0x801B85FCu; f_800046B4(c); // 801B85F8
  cmps(c,0,(int32_t)c->r[26],0); // 801B85FC
  if (crb(c,2)) { goto L_801B8618; } // 801B8600
  c->r[0]=0u+0x0000000Eu; // 801B8604
  c->r[3]=c->r[25]|c->r[25]; // 801B8608
  W8(c->r[30]+0x000027BFu,c->r[0]); // 801B860C
  c->lr=0x801B8614u; f_801BDF78(c); // 801B8610
  goto L_801B864C; // 801B8614
L_801B8618:;
  W8(c->r[30]+0x000027BFu,c->r[31]); // 801B8618
  c->r[3]=c->r[25]|c->r[25]; // 801B861C
  c->r[4]=c->r[27]|c->r[27]; // 801B8620
  c->r[5]=c->r[28]|c->r[28]; // 801B8624
  c->lr=0x801B862Cu; f_801BDD94(c); // 801B8628
  c->r[3]=c->r[25]|c->r[25]; // 801B862C
  c->lr=0x801B8634u; f_801B2F10(c); // 801B8630
  cmps(c,0,(int32_t)c->r[3],0); // 801B8634
  if (crb(c,2)) { goto L_801B864C; } // 801B8638
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B863C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801B8640
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B8644
  W32(c->r[3]+0x00000014u,c->r[0]); // 801B8648
L_801B864C:;
  c->r[11]=c->r[1]+0x00000030u; // 801B864C
  c->lr=0x801B8654u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8650
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B8654
  c->lr=c->r[0]; // 801B8658
  c->r[1]=c->r[1]+0x00000030u; // 801B865C
  return; // 801B8660
}

// BTM_DeviceAuthorized
void f_801B8664(Ctx* __restrict c) {
  trace_call(0x801B8664u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8664
  c->r[0]=c->lr; // 801B8668
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B866C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B8670
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B8674
  c->r[30]=c->r[3]|c->r[3]; // 801B8678
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B867C
  c->r[29]=c->r[5]|c->r[5]; // 801B8680
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B8684
  c->r[28]=c->r[4]|c->r[4]; // 801B8688
  c->lr=0x801B8690u; f_801B2F10(c); // 801B868C
  cmps(c,1,(int32_t)c->r[3],0); // 801B8690
  c->r[31]=c->r[3]|c->r[3]; // 801B8694
  if (!crb(c,6)) { goto L_801B86E0; } // 801B8698
  c->r[3]=0u+0x802D0000u; // 801B869C
  c->r[3]=c->r[3]+0x000023D8u; // 801B86A0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B86A4
  cmpu(c,0,c->r[0],0x00000002u); // 801B86A8
  if (crb(c,0)) { goto L_801B8820; } // 801B86AC
  c->r[3]=0u+0x000D0000u; // 801B86B0
  c->r[4]=0u+0x80240000u; // 801B86B4
  c->r[5]=R8(c->r[30]+0x00000000u); // 801B86B8
  c->r[3]=c->r[3]+0x00000001u; // 801B86BC
  c->r[6]=R8(c->r[30]+0x00000001u); // 801B86C0
  c->r[4]=c->r[4]+0x00005BC8u; // 801B86C4
  c->r[7]=R8(c->r[30]+0x00000002u); // 801B86C8
  c->r[8]=R8(c->r[30]+0x00000003u); // 801B86CC
  c->r[9]=R8(c->r[30]+0x00000004u); // 801B86D0
  c->r[10]=R8(c->r[30]+0x00000005u); // 801B86D4
  c->lr=0x801B86DCu; f_801AA880(c); // 801B86D8
  goto L_801B8820; // 801B86DC
L_801B86E0:;
  c->r[3]=0u+0x802D0000u; // 801B86E0
  c->r[3]=c->r[3]+0x000023D8u; // 801B86E4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B86E8
  cmpu(c,0,c->r[0],0x00000004u); // 801B86EC
  if (crb(c,0)) { goto L_801B871C; } // 801B86F0
  c->r[3]=0u+0x000D0000u; // 801B86F4
  c->r[4]=0u+0x80240000u; // 801B86F8
  c->r[5]=c->r[28]|c->r[28]; // 801B86FC
  c->r[3]=c->r[3]+0x00000003u; // 801B8700
  c->r[4]=c->r[4]+0x00005C28u; // 801B8704
  if (crb(c,6)) { goto L_801B8714; } // 801B8708
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801B870C
  goto L_801B8718; // 801B8710
L_801B8714:;
  c->r[6]=0u+0x00000000u; // 801B8714
L_801B8718:;
  c->lr=0x801B871Cu; f_801AA800(c); // 801B8718
L_801B871C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B871C
  if (!crb(c,2)) { goto L_801B8740; } // 801B8720
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B8724
  c->r[0]=c->r[0]|0x00000001u; // 801B8728
  W8(c->r[31]+0x00000076u,c->r[0]); // 801B872C
  c->r[0]=R32(c->r[29]+0x00000000u); // 801B8730
  W32(c->r[31]+0x00000010u,c->r[0]); // 801B8734
  c->r[0]=R32(c->r[29]+0x00000004u); // 801B8738
  W32(c->r[31]+0x00000014u,c->r[0]); // 801B873C
L_801B8740:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801B8740
  cmpu(c,0,c->r[0],0x00000004u); // 801B8744
  if (!crb(c,2)) { goto L_801B8820; } // 801B8748
  c->r[29]=0u+0x00000000u; // 801B874C
  cmps(c,0,(int32_t)c->r[28],0); // 801B8750
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801B8754
  if (crb(c,2)) { goto L_801B87B4; } // 801B8758
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B875C
  cmps(c,0,(int32_t)c->r[0],0); // 801B8760
  if (crb(c,2)) { goto L_801B8820; } // 801B8764
  c->r[0]=R8(c->r[31]+0x00000080u); // 801B8768
  cmps(c,0,(int32_t)c->r[0],0); // 801B876C
  if (crb(c,2)) { goto L_801B8790; } // 801B8770
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B8774
  cmps(c,0,(int32_t)c->r[3],0); // 801B8778
  if (crb(c,2)) { goto L_801B8790; } // 801B877C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B8780
  cmpu(c,0,c->r[0],0x00000003u); // 801B8784
  if (!crb(c,2)) { goto L_801B8790; } // 801B8788
  W32(c->r[3]+0x00000004u,c->r[29]); // 801B878C
L_801B8790:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B8790
  c->r[3]=c->r[30]|c->r[30]; // 801B8794
  c->r[5]=c->r[28]|c->r[28]; // 801B8798
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B879C
  c->ctr=c->r[12]; // 801B87A0
  if (true) { c->lr=0x801B87A8u; dispatch(c,c->ctr); } // 801B87A4
  c->r[0]=0u+0x00000000u; // 801B87A8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B87AC
  goto L_801B8820; // 801B87B0
L_801B87B4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B87B4
  c->lr=0x801B87BCu; f_801BAB60(c); // 801B87B8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B87BC
  c->r[4]=c->r[3]|c->r[3]; // 801B87C0
  cmpu(c,0,c->r[0],0x00000001u); // 801B87C4
  if (crb(c,2)) { goto L_801B8820; } // 801B87C8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B87CC
  cmps(c,0,(int32_t)c->r[0],0); // 801B87D0
  if (crb(c,2)) { goto L_801B8820; } // 801B87D4
  c->r[0]=R8(c->r[31]+0x00000080u); // 801B87D8
  cmps(c,0,(int32_t)c->r[0],0); // 801B87DC
  if (crb(c,2)) { goto L_801B8800; } // 801B87E0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B87E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B87E8
  if (crb(c,2)) { goto L_801B8800; } // 801B87EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B87F0
  cmpu(c,0,c->r[0],0x00000003u); // 801B87F4
  if (!crb(c,2)) { goto L_801B8800; } // 801B87F8
  W32(c->r[3]+0x00000004u,c->r[29]); // 801B87FC
L_801B8800:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B8800
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801B8804
  c->r[3]=c->r[30]|c->r[30]; // 801B8808
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B880C
  c->ctr=c->r[12]; // 801B8810
  if (true) { c->lr=0x801B8818u; dispatch(c,c->ctr); } // 801B8814
  c->r[0]=0u+0x00000000u; // 801B8818
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B881C
L_801B8820:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B8820
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B8824
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B8828
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B882C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B8830
  c->lr=c->r[0]; // 801B8834
  c->r[1]=c->r[1]+0x00000020u; // 801B8838
  return; // 801B883C
}

// BTM_SecBond
void f_801B8840(Ctx* __restrict c) {
  trace_call(0x801B8840u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8840
  c->r[0]=c->lr; // 801B8844
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B8848
  c->r[11]=c->r[1]+0x00000020u; // 801B884C
  c->lr=0x801B8854u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8850
  c->r[7]=0u+0x802D0000u; // 801B8854
  c->r[31]=0u+0x80240000u; // 801B8858
  c->r[7]=c->r[7]+0x000023D8u; // 801B885C
  c->r[28]=c->r[3]|c->r[3]; // 801B8860
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801B8864
  c->r[29]=c->r[4]|c->r[4]; // 801B8868
  c->r[26]=c->r[5]|c->r[5]; // 801B886C
  c->r[27]=c->r[6]|c->r[6]; // 801B8870
  cmpu(c,0,c->r[0],0x00000003u); // 801B8874
  c->r[31]=c->r[31]+0x00005A28u; // 801B8878
  if (crb(c,0)) { goto L_801B88A8; } // 801B887C
  c->r[3]=0u+0x000D0000u; // 801B8880
  c->r[5]=R8(c->r[28]+0x00000000u); // 801B8884
  c->r[6]=R8(c->r[28]+0x00000001u); // 801B8888
  c->r[3]=c->r[3]+0x00000002u; // 801B888C
  c->r[7]=R8(c->r[28]+0x00000002u); // 801B8890
  c->r[4]=c->r[31]+0x00000230u; // 801B8894
  c->r[8]=R8(c->r[28]+0x00000003u); // 801B8898
  c->r[9]=R8(c->r[28]+0x00000004u); // 801B889C
  c->r[10]=R8(c->r[28]+0x00000005u); // 801B88A0
  c->lr=0x801B88A8u; f_801AA880(c); // 801B88A4
L_801B88A8:;
  cmpu(c,0,c->r[29],0x00000010u); // 801B88A8
  if (!crb(c,1)) { goto L_801B88DC; } // 801B88AC
  c->r[3]=0u+0x802D0000u; // 801B88B0
  c->r[3]=c->r[3]+0x000023D8u; // 801B88B4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B88B8
  cmpu(c,0,c->r[0],0x00000001u); // 801B88BC
  if (crb(c,0)) { goto L_801B88D4; } // 801B88C0
  c->r[5]=c->r[29]|c->r[29]; // 801B88C4
  c->r[4]=c->r[31]+0x00000260u; // 801B88C8
  c->r[3]=0u+0x000D0000u; // 801B88CC
  c->lr=0x801B88D4u; f_801AA7E0(c); // 801B88D0
L_801B88D4:;
  c->r[3]=0u+0x00000005u; // 801B88D4
  goto L_801B8BF4; // 801B88D8
L_801B88DC:;
  c->r[3]=c->r[28]|c->r[28]; // 801B88DC
  c->lr=0x801B88E4u; f_801B2F10(c); // 801B88E0
  cmps(c,0,(int32_t)c->r[3],0); // 801B88E4
  c->r[30]=c->r[3]|c->r[3]; // 801B88E8
  if (!crb(c,2)) { goto L_801B892C; } // 801B88EC
  c->r[3]=c->r[28]|c->r[28]; // 801B88F0
  c->lr=0x801B88F8u; f_801B2D38(c); // 801B88F4
  cmps(c,0,(int32_t)c->r[3],0); // 801B88F8
  c->r[30]=c->r[3]|c->r[3]; // 801B88FC
  if (!crb(c,2)) { goto L_801B892C; } // 801B8900
  c->r[3]=0u+0x802D0000u; // 801B8904
  c->r[3]=c->r[3]+0x000023D8u; // 801B8908
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B890C
  cmpu(c,0,c->r[0],0x00000001u); // 801B8910
  if (crb(c,0)) { goto L_801B8924; } // 801B8914
  c->r[4]=c->r[31]+0x00000280u; // 801B8918
  c->r[3]=0u+0x000D0000u; // 801B891C
  c->lr=0x801B8924u; f_801AA7C0(c); // 801B8920
L_801B8924:;
  c->r[3]=0u+0x00000003u; // 801B8924
  goto L_801B8BF4; // 801B8928
L_801B892C:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801B892C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B8930
  if (crb(c,2)) { goto L_801B8970; } // 801B8934
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B8938
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B893C
  if (crb(c,2)) { goto L_801B8970; } // 801B8940
  c->r[3]=0u+0x802D0000u; // 801B8944
  c->r[3]=c->r[3]+0x000023D8u; // 801B8948
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B894C
  cmpu(c,0,c->r[0],0x00000002u); // 801B8950
  if (crb(c,0)) { goto L_801B8968; } // 801B8954
  c->r[3]=0u+0x000D0000u; // 801B8958
  c->r[4]=c->r[31]+0x000002A0u; // 801B895C
  c->r[3]=c->r[3]+0x00000001u; // 801B8960
  c->lr=0x801B8968u; f_801AA7C0(c); // 801B8964
L_801B8968:;
  c->r[3]=0u+0x00000000u; // 801B8968
  goto L_801B8BF4; // 801B896C
L_801B8970:;
  c->r[3]=c->r[28]|c->r[28]; // 801B8970
  c->r[4]=0u+0x00000000u; // 801B8974
  c->lr=0x801B897Cu; f_801B46FC(c); // 801B8978
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B897C
  if (crb(c,2)) { goto L_801B898C; } // 801B8980
  c->r[3]=0u+0x00000003u; // 801B8984
  goto L_801B8BF4; // 801B8988
L_801B898C:;
  c->r[0]=0u+0x00000050u; // 801B898C
  c->r[3]=0u+0x802D0000u; // 801B8990
  W8(c->r[30]+0x00000081u,c->r[0]); // 801B8994
  c->r[0]=0u+0x00000001u; // 801B8998
  cmps(c,0,(int32_t)c->r[29],0); // 801B899C
  c->r[3]=c->r[3]+0x000023D8u; // 801B89A0
  W8(c->r[30]+0x00000080u,c->r[0]); // 801B89A4
  c->r[0]=R32(c->r[27]+0x00000000u); // 801B89A8
  W32(c->r[30]+0x00000010u,c->r[0]); // 801B89AC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801B89B0
  W32(c->r[30]+0x00000014u,c->r[0]); // 801B89B4
  W8(c->r[3]+0x0000197Fu,c->r[29]); // 801B89B8
  if (crb(c,2)) { goto L_801B89D0; } // 801B89BC
  c->r[4]=c->r[26]|c->r[26]; // 801B89C0
  c->r[5]=c->r[29]|c->r[29]; // 801B89C4
  c->r[3]=c->r[3]+0x00001980u; // 801B89C8
  c->lr=0x801B89D0u; f_80004364(c); // 801B89CC
L_801B89D0:;
  c->r[3]=R8(c->r[30]+0x00000076u); // 801B89D0
  c->r[0]=0u+0xFFFFFFE9u; // 801B89D4
  c->r[0]=c->r[3]&c->r[0]; // 801B89D8
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B89DC
  c->r[0]=R8(c->r[30]+0x00000023u); // 801B89E0
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801B89E4
  cmps(c,0,(int32_t)c->r[0],5); // 801B89E8
  if (!crb(c,2)) { goto L_801B8A20; } // 801B89EC
  c->r[0]=R8(c->r[30]+0x00000024u); // 801B89F0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B89F4
  if (crb(c,2)) { goto L_801B8A20; } // 801B89F8
  c->r[4]=0u+0x802D0000u; // 801B89FC
  c->r[4]=c->r[4]+0x000023D8u; // 801B8A00
  c->r[0]=R8(c->r[4]+0x00000020u); // 801B8A04
  cmpu(c,0,c->r[0],0x00000001u); // 801B8A08
  if (crb(c,2)) { goto L_801B8A20; } // 801B8A0C
  c->r[0]=0u+0x00000001u; // 801B8A10
  c->r[3]=0u+0x00000001u; // 801B8A14
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801B8A18
  c->lr=0x801B8A20u; f_801BED78(c); // 801B8A1C
L_801B8A20:;
  c->r[29]=0u+0x802D0000u; // 801B8A20
  c->r[27]=0u+0x00000000u; // 801B8A24
  c->r[29]=c->r[29]+0x000023D8u; // 801B8A28
  W8(c->r[29]+0x0000197Eu,c->r[27]); // 801B8A2C
  c->r[0]=R16(c->r[30]+0x00000018u); // 801B8A30
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B8A34
  if (crb(c,2)) { goto L_801B8A74; } // 801B8A38
  c->r[3]=R8(c->r[30]+0x00000076u); // 801B8A3C
  c->r[0]=0u+0x00000001u; // 801B8A40
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFEFu; // 801B8A44
  W8(c->r[30]+0x00000076u,c->r[3]); // 801B8A48
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801B8A4C
  c->r[3]=R16(c->r[30]+0x00000018u); // 801B8A50
  c->lr=0x801B8A58u; f_801BE0A8(c); // 801B8A54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B8A58
  if (!crb(c,2)) { goto L_801B8A68; } // 801B8A5C
  c->r[3]=0u+0x00000003u; // 801B8A60
  goto L_801B8BF4; // 801B8A64
L_801B8A68:;
  W8(c->r[29]+0x0000197Du,c->r[27]); // 801B8A68
  c->r[3]=0u+0x00000001u; // 801B8A6C
  goto L_801B8BF4; // 801B8A70
L_801B8A74:;
  c->r[0]=R8(c->r[29]+0x00001978u); // 801B8A74
  cmpu(c,0,c->r[0],0x00000003u); // 801B8A78
  if (crb(c,2)) { goto L_801B8AE4; } // 801B8A7C
  c->r[0]=R8(c->r[29]+0x000027C0u); // 801B8A80
  cmpu(c,0,c->r[0],0x00000005u); // 801B8A84
  if (crb(c,0)) { goto L_801B8A9C; } // 801B8A88
  c->r[3]=0u+0x000D0000u; // 801B8A8C
  c->r[4]=c->r[31]+0x000002C0u; // 801B8A90
  c->r[3]=c->r[3]+0x00000004u; // 801B8A94
  c->lr=0x801B8A9Cu; f_801AA7C0(c); // 801B8A98
L_801B8A9C:;
  c->r[3]=0u+0x00000001u; // 801B8A9C
  c->lr=0x801B8AA4u; f_801BF2EC(c); // 801B8AA0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B8AA4
  if (!crb(c,2)) { goto L_801B8AD4; } // 801B8AA8
  c->r[3]=0u+0x802D0000u; // 801B8AAC
  c->r[3]=c->r[3]+0x000023D8u; // 801B8AB0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8AB4
  cmpu(c,0,c->r[0],0x00000001u); // 801B8AB8
  if (crb(c,0)) { goto L_801B8ACC; } // 801B8ABC
  c->r[4]=c->r[31]+0x000002E4u; // 801B8AC0
  c->r[3]=0u+0x000D0000u; // 801B8AC4
  c->lr=0x801B8ACCu; f_801AA7C0(c); // 801B8AC8
L_801B8ACC:;
  c->r[3]=0u+0x00000003u; // 801B8ACC
  goto L_801B8BF4; // 801B8AD0
L_801B8AD4:;
  c->r[3]=0u+0x802D0000u; // 801B8AD4
  c->r[0]=0u+0x00000001u; // 801B8AD8
  c->r[3]=c->r[3]+0x000023D8u; // 801B8ADC
  W8(c->r[3]+0x0000197Bu,c->r[0]); // 801B8AE0
L_801B8AE4:;
  c->r[3]=0u+0x802D0000u; // 801B8AE4
  c->r[0]=0u+0x00000001u; // 801B8AE8
  c->r[3]=c->r[3]+0x000023D8u; // 801B8AEC
  W8(c->r[3]+0x0000197Du,c->r[0]); // 801B8AF0
  c->lr=0x801B8AF8u; f_801B4254(c); // 801B8AF4
  c->r[4]=R8(c->r[3]+0x00000000u); // 801B8AF8
  c->r[0]=0u+0x00000000u; // 801B8AFC
  c->r[3]=c->r[28]|c->r[28]; // 801B8B00
  W8(c->r[30]+0x00000085u,c->r[0]); // 801B8B04
  c->r[27]=rotl(c->r[4],27)&0x00000001u; // 801B8B08
  c->lr=0x801B8B10u; f_801B561C(c); // 801B8B0C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8B10
  c->r[4]=c->r[3]|c->r[3]; // 801B8B14
  if (crb(c,2)) { goto L_801B8B40; } // 801B8B18
  c->r[0]=R16(c->r[4]+0x00000000u); // 801B8B1C
  c->r[3]=c->r[28]|c->r[28]; // 801B8B20
  c->r[5]=R8(c->r[4]+0x0000000Bu); // 801B8B24
  c->r[8]=c->r[27]|c->r[27]; // 801B8B28
  c->r[6]=R8(c->r[4]+0x0000000Du); // 801B8B2C
  c->r[7]=c->r[0]|0x00008000u; // 801B8B30
  c->r[4]=0u+0x00000018u; // 801B8B34
  c->lr=0x801B8B3Cu; f_801BD8A4(c); // 801B8B38
  goto L_801B8B5C; // 801B8B3C
L_801B8B40:;
  c->r[7]=R16(c->r[30]+0x0000001Au); // 801B8B40
  c->r[3]=c->r[28]|c->r[28]; // 801B8B44
  c->r[8]=c->r[27]|c->r[27]; // 801B8B48
  c->r[4]=0u+0x00000018u; // 801B8B4C
  c->r[5]=0u+0x00000001u; // 801B8B50
  c->r[6]=0u+0x00000000u; // 801B8B54
  c->lr=0x801B8B5Cu; f_801BD8A4(c); // 801B8B58
L_801B8B5C:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B8B5C
  if (crb(c,2)) { goto L_801B8B6C; } // 801B8B60
  c->r[3]=0u+0x00000001u; // 801B8B64
  goto L_801B8BF4; // 801B8B68
L_801B8B6C:;
  c->r[3]=0u+0x802D0000u; // 801B8B6C
  c->r[3]=c->r[3]+0x000023D8u; // 801B8B70
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8B74
  cmpu(c,0,c->r[0],0x00000001u); // 801B8B78
  if (crb(c,0)) { goto L_801B8B8C; } // 801B8B7C
  c->r[4]=c->r[31]+0x000002E4u; // 801B8B80
  c->r[3]=0u+0x000D0000u; // 801B8B84
  c->lr=0x801B8B8Cu; f_801AA7C0(c); // 801B8B88
L_801B8B8C:;
  c->r[4]=0u+0x802D0000u; // 801B8B8C
  c->r[4]=c->r[4]+0x000023D8u; // 801B8B90
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801B8B94
  cmps(c,0,(int32_t)c->r[0],0); // 801B8B98
  if (crb(c,2)) { goto L_801B8BF0; } // 801B8B9C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B8BA0
  c->r[3]=0u+0x00000000u; // 801B8BA4
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801B8BA8
  cmpu(c,0,c->r[0],0x00000005u); // 801B8BAC
  if (crb(c,0)) { goto L_801B8BD4; } // 801B8BB0
  c->r[5]=R8(c->r[4]+0x00001978u); // 801B8BB4
  c->r[3]=0u+0x000D0000u; // 801B8BB8
  c->r[3]=c->r[3]+0x00000004u; // 801B8BBC
  c->r[4]=c->r[31]+0x000002FCu; // 801B8BC0
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801B8BC4
  c->r[0]=cntlz(c->r[0]); // 801B8BC8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B8BCC
  c->lr=0x801B8BD4u; f_801AA7E0(c); // 801B8BD0
L_801B8BD4:;
  c->r[3]=0u+0x802D0000u; // 801B8BD4
  c->r[3]=c->r[3]+0x000023D8u; // 801B8BD8
  c->r[3]=R8(c->r[3]+0x00001978u); // 801B8BDC
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801B8BE0
  c->r[0]=cntlz(c->r[0]); // 801B8BE4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801B8BE8
  c->lr=0x801B8BF0u; f_801BF2EC(c); // 801B8BEC
L_801B8BF0:;
  c->r[3]=0u+0x00000003u; // 801B8BF0
L_801B8BF4:;
  c->r[11]=c->r[1]+0x00000020u; // 801B8BF4
  c->lr=0x801B8BFCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B8BF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B8BFC
  c->lr=c->r[0]; // 801B8C00
  c->r[1]=c->r[1]+0x00000020u; // 801B8C04
  return; // 801B8C08
}

// btm_sec_l2cap_access_req
void f_801B8C0C(Ctx* __restrict c) {
  trace_call(0x801B8C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B8C0C
  c->r[0]=c->lr; // 801B8C10
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B8C14
  c->r[11]=c->r[1]+0x00000030u; // 801B8C18
  c->lr=0x801B8C20u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B8C1C
  c->r[31]=0u+0x80240000u; // 801B8C20
  c->r[24]=c->r[3]|c->r[3]; // 801B8C24
  c->r[25]=c->r[4]|c->r[4]; // 801B8C28
  c->r[26]=c->r[5]|c->r[5]; // 801B8C2C
  c->r[27]=c->r[6]|c->r[6]; // 801B8C30
  c->r[28]=c->r[7]|c->r[7]; // 801B8C34
  c->r[31]=c->r[31]+0x00005A28u; // 801B8C38
  c->lr=0x801B8C40u; f_801B2F10(c); // 801B8C3C
  cmps(c,0,(int32_t)c->r[3],0); // 801B8C40
  c->r[30]=c->r[3]|c->r[3]; // 801B8C44
  if (!crb(c,2)) { goto L_801B8CB0; } // 801B8C48
  c->r[3]=c->r[24]|c->r[24]; // 801B8C4C
  c->lr=0x801B8C54u; f_801B2D38(c); // 801B8C50
  cmps(c,0,(int32_t)c->r[3],0); // 801B8C54
  c->r[30]=c->r[3]|c->r[3]; // 801B8C58
  if (!crb(c,2)) { goto L_801B8CB0; } // 801B8C5C
  c->r[3]=0u+0x802D0000u; // 801B8C60
  c->r[3]=c->r[3]+0x000023D8u; // 801B8C64
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8C68
  cmpu(c,0,c->r[0],0x00000002u); // 801B8C6C
  if (crb(c,0)) { goto L_801B8C88; } // 801B8C70
  c->r[3]=0u+0x000D0000u; // 801B8C74
  c->r[5]=c->r[25]|c->r[25]; // 801B8C78
  c->r[3]=c->r[3]+0x00000001u; // 801B8C7C
  c->r[4]=c->r[31]+0x00000410u; // 801B8C80
  c->lr=0x801B8C88u; f_801AA7E0(c); // 801B8C84
L_801B8C88:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B8C88
  if (crb(c,2)) { goto L_801B8CA8; } // 801B8C8C
  c->r[12]=c->r[28]|c->r[28]; // 801B8C90
  c->r[3]=c->r[24]|c->r[24]; // 801B8C94
  c->r[4]=0u+0x00000000u; // 801B8C98
  c->r[5]=0u+0x00000003u; // 801B8C9C
  c->ctr=c->r[12]; // 801B8CA0
  if (true) { c->lr=0x801B8CA8u; dispatch(c,c->ctr); } // 801B8CA4
L_801B8CA8:;
  c->r[3]=0u+0x00000003u; // 801B8CA8
  goto L_801B9058; // 801B8CAC
L_801B8CB0:;
  c->r[3]=0u+0x802D0000u; // 801B8CB0
  c->r[0]=0u+0x00000004u; // 801B8CB4
  c->r[3]=c->r[3]+0x000023D8u; // 801B8CB8
  W16(c->r[30]+0x00000018u,c->r[26]); // 801B8CBC
  c->r[4]=c->r[3]+0x00001990u; // 801B8CC0
  c->r[3]=0u+0x00000000u; // 801B8CC4
  c->ctr=c->r[0]; // 801B8CC8
L_801B8CCC:;
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 801B8CCC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8CD0
  if (crb(c,2)) { goto L_801B8CE8; } // 801B8CD4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8CD8
  cmpu(c,0,c->r[0],c->r[25]); // 801B8CDC
  if (!crb(c,2)) { goto L_801B8CE8; } // 801B8CE0
  goto L_801B8D98; // 801B8CE4
L_801B8CE8:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801B8CE8
  c->r[4]=c->r[4]+0x0000003Cu; // 801B8CEC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8CF0
  if (crb(c,2)) { goto L_801B8D08; } // 801B8CF4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8CF8
  cmpu(c,0,c->r[0],c->r[25]); // 801B8CFC
  if (!crb(c,2)) { goto L_801B8D08; } // 801B8D00
  goto L_801B8D98; // 801B8D04
L_801B8D08:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801B8D08
  c->r[4]=c->r[4]+0x0000003Cu; // 801B8D0C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8D10
  if (crb(c,2)) { goto L_801B8D28; } // 801B8D14
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8D18
  cmpu(c,0,c->r[0],c->r[25]); // 801B8D1C
  if (!crb(c,2)) { goto L_801B8D28; } // 801B8D20
  goto L_801B8D98; // 801B8D24
L_801B8D28:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801B8D28
  c->r[4]=c->r[4]+0x0000003Cu; // 801B8D2C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8D30
  if (crb(c,2)) { goto L_801B8D48; } // 801B8D34
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8D38
  cmpu(c,0,c->r[0],c->r[25]); // 801B8D3C
  if (!crb(c,2)) { goto L_801B8D48; } // 801B8D40
  goto L_801B8D98; // 801B8D44
L_801B8D48:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801B8D48
  c->r[4]=c->r[4]+0x0000003Cu; // 801B8D4C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8D50
  if (crb(c,2)) { goto L_801B8D68; } // 801B8D54
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8D58
  cmpu(c,0,c->r[0],c->r[25]); // 801B8D5C
  if (!crb(c,2)) { goto L_801B8D68; } // 801B8D60
  goto L_801B8D98; // 801B8D64
L_801B8D68:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801B8D68
  c->r[4]=c->r[4]+0x0000003Cu; // 801B8D6C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8D70
  if (crb(c,2)) { goto L_801B8D88; } // 801B8D74
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8D78
  cmpu(c,0,c->r[0],c->r[25]); // 801B8D7C
  if (!crb(c,2)) { goto L_801B8D88; } // 801B8D80
  goto L_801B8D98; // 801B8D84
L_801B8D88:;
  c->r[3]=c->r[3]+0x00000005u; // 801B8D88
  c->r[4]=c->r[4]+0x0000003Cu; // 801B8D8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B8CCC; } // 801B8D90
  c->r[4]=0u+0x00000000u; // 801B8D94
L_801B8D98:;
  cmps(c,0,(int32_t)c->r[4],0); // 801B8D98
  if (!crb(c,2)) { goto L_801B8DF0; } // 801B8D9C
  c->r[3]=0u+0x802D0000u; // 801B8DA0
  c->r[3]=c->r[3]+0x000023D8u; // 801B8DA4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8DA8
  cmpu(c,0,c->r[0],0x00000002u); // 801B8DAC
  if (crb(c,0)) { goto L_801B8DC8; } // 801B8DB0
  c->r[3]=0u+0x000D0000u; // 801B8DB4
  c->r[5]=c->r[25]|c->r[25]; // 801B8DB8
  c->r[3]=c->r[3]+0x00000001u; // 801B8DBC
  c->r[4]=c->r[31]+0x00000448u; // 801B8DC0
  c->lr=0x801B8DC8u; f_801AA7E0(c); // 801B8DC4
L_801B8DC8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B8DC8
  if (crb(c,2)) { goto L_801B8DE8; } // 801B8DCC
  c->r[12]=c->r[28]|c->r[28]; // 801B8DD0
  c->r[3]=c->r[24]|c->r[24]; // 801B8DD4
  c->r[4]=0u+0x00000000u; // 801B8DD8
  c->r[5]=0u+0x00000004u; // 801B8DDC
  c->ctr=c->r[12]; // 801B8DE0
  if (true) { c->lr=0x801B8DE8u; dispatch(c,c->ctr); } // 801B8DE4
L_801B8DE8:;
  c->r[3]=0u+0x00000004u; // 801B8DE8
  goto L_801B9058; // 801B8DEC
L_801B8DF0:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B8DF0
  if (crb(c,2)) { goto L_801B8E08; } // 801B8DF4
  if (crb(c,2)) { goto L_801B8E0C; } // 801B8DF8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801B8DFC
  cmps(c,0,(int32_t)c->r[0],0); // 801B8E00
  if (!crb(c,2)) { goto L_801B8E0C; } // 801B8E04
L_801B8E08:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 801B8E08
L_801B8E0C:;
  c->r[3]=0u+0x802D0000u; // 801B8E0C
  c->r[0]=0u+0x00000006u; // 801B8E10
  c->r[3]=c->r[3]+0x000023D8u; // 801B8E14
  c->r[29]=R8(c->r[4]+0x0000000Eu); // 801B8E18
  c->r[7]=c->r[3]+0x00001990u; // 801B8E1C
  c->r[6]=0u+0x00000000u; // 801B8E20
  c->r[5]=0u+0x00000000u; // 801B8E24
  c->ctr=c->r[0]; // 801B8E28
L_801B8E2C:;
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801B8E2C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8E30
  if (crb(c,2)) { goto L_801B8E64; } // 801B8E34
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801B8E38
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8E3C
  cmpu(c,0,c->r[3],c->r[0]); // 801B8E40
  if (!crb(c,2)) { goto L_801B8E64; } // 801B8E44
  cmps(c,0,(int32_t)c->r[6],0); // 801B8E48
  if (!crb(c,2)) { goto L_801B8F28; } // 801B8E4C
  cmpu(c,0,c->r[4],c->r[7]); // 801B8E50
  if (!crb(c,2)) { goto L_801B8E64; } // 801B8E54
  c->r[6]=0u+0x00000001u; // 801B8E58
  goto L_801B8E64; // 801B8E5C
  goto L_801B8F28; // 801B8E60
L_801B8E64:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801B8E64
  c->r[7]=c->r[7]+0x0000003Cu; // 801B8E68
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8E6C
  if (crb(c,2)) { goto L_801B8EA0; } // 801B8E70
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801B8E74
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8E78
  cmpu(c,0,c->r[3],c->r[0]); // 801B8E7C
  if (!crb(c,2)) { goto L_801B8EA0; } // 801B8E80
  cmps(c,0,(int32_t)c->r[6],0); // 801B8E84
  if (!crb(c,2)) { goto L_801B8F28; } // 801B8E88
  cmpu(c,0,c->r[4],c->r[7]); // 801B8E8C
  if (!crb(c,2)) { goto L_801B8EA0; } // 801B8E90
  c->r[6]=0u+0x00000001u; // 801B8E94
  goto L_801B8EA0; // 801B8E98
  goto L_801B8F28; // 801B8E9C
L_801B8EA0:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801B8EA0
  c->r[7]=c->r[7]+0x0000003Cu; // 801B8EA4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8EA8
  if (crb(c,2)) { goto L_801B8EDC; } // 801B8EAC
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801B8EB0
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8EB4
  cmpu(c,0,c->r[3],c->r[0]); // 801B8EB8
  if (!crb(c,2)) { goto L_801B8EDC; } // 801B8EBC
  cmps(c,0,(int32_t)c->r[6],0); // 801B8EC0
  if (!crb(c,2)) { goto L_801B8F28; } // 801B8EC4
  cmpu(c,0,c->r[4],c->r[7]); // 801B8EC8
  if (!crb(c,2)) { goto L_801B8EDC; } // 801B8ECC
  c->r[6]=0u+0x00000001u; // 801B8ED0
  goto L_801B8EDC; // 801B8ED4
  goto L_801B8F28; // 801B8ED8
L_801B8EDC:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801B8EDC
  c->r[7]=c->r[7]+0x0000003Cu; // 801B8EE0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B8EE4
  if (crb(c,2)) { goto L_801B8F18; } // 801B8EE8
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801B8EEC
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801B8EF0
  cmpu(c,0,c->r[3],c->r[0]); // 801B8EF4
  if (!crb(c,2)) { goto L_801B8F18; } // 801B8EF8
  cmps(c,0,(int32_t)c->r[6],0); // 801B8EFC
  if (!crb(c,2)) { goto L_801B8F28; } // 801B8F00
  cmpu(c,0,c->r[4],c->r[7]); // 801B8F04
  if (!crb(c,2)) { goto L_801B8F18; } // 801B8F08
  c->r[6]=0u+0x00000001u; // 801B8F0C
  goto L_801B8F18; // 801B8F10
  goto L_801B8F28; // 801B8F14
L_801B8F18:;
  c->r[5]=c->r[5]+0x00000003u; // 801B8F18
  c->r[7]=c->r[7]+0x0000003Cu; // 801B8F1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B8E2C; } // 801B8F20
  c->r[7]=0u+0x00000000u; // 801B8F24
L_801B8F28:;
  cmps(c,0,(int32_t)c->r[7],0); // 801B8F28
  if (crb(c,2)) { goto L_801B8F80; } // 801B8F2C
  c->r[3]=0u+0x802D0000u; // 801B8F30
  c->r[3]=c->r[3]+0x000023D8u; // 801B8F34
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8F38
  cmpu(c,0,c->r[0],0x00000004u); // 801B8F3C
  if (crb(c,0)) { goto L_801B8F58; } // 801B8F40
  c->r[3]=0u+0x000D0000u; // 801B8F44
  c->r[5]=c->r[25]|c->r[25]; // 801B8F48
  c->r[3]=c->r[3]+0x00000003u; // 801B8F4C
  c->r[4]=c->r[31]+0x0000048Cu; // 801B8F50
  c->lr=0x801B8F58u; f_801AA7E0(c); // 801B8F54
L_801B8F58:;
  cmps(c,0,(int32_t)c->r[28],0); // 801B8F58
  if (crb(c,2)) { goto L_801B8F78; } // 801B8F5C
  c->r[12]=c->r[28]|c->r[28]; // 801B8F60
  c->r[3]=c->r[24]|c->r[24]; // 801B8F64
  c->r[4]=0u+0x00000000u; // 801B8F68
  c->r[5]=0u+0x00000000u; // 801B8F6C
  c->ctr=c->r[12]; // 801B8F70
  if (true) { c->lr=0x801B8F78u; dispatch(c,c->ctr); } // 801B8F74
L_801B8F78:;
  c->r[3]=0u+0x00000000u; // 801B8F78
  goto L_801B9058; // 801B8F7C
L_801B8F80:;
  W32(c->r[30]+0x00000004u,c->r[28]); // 801B8F80
  c->r[0]=0u+0x00000000u; // 801B8F84
  c->r[3]=0u+0x802D0000u; // 801B8F88
  W32(c->r[30]+0x00000008u,c->r[0]); // 801B8F8C
  c->r[3]=c->r[3]+0x000023D8u; // 801B8F90
  W8(c->r[30]+0x00000081u,c->r[29]); // 801B8F94
  W8(c->r[30]+0x00000080u,c->r[27]); // 801B8F98
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8F9C
  cmpu(c,0,c->r[0],0x00000004u); // 801B8FA0
  if (crb(c,0)) { goto L_801B8FCC; } // 801B8FA4
  c->r[3]=0u+0x000D0000u; // 801B8FA8
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 801B8FAC
  c->r[8]=R8(c->r[30]+0x00000076u); // 801B8FB0
  c->r[5]=c->r[25]|c->r[25]; // 801B8FB4
  c->r[6]=c->r[26]|c->r[26]; // 801B8FB8
  c->r[9]=c->r[29]|c->r[29]; // 801B8FBC
  c->r[3]=c->r[3]+0x00000003u; // 801B8FC0
  c->r[4]=c->r[31]+0x000004D0u; // 801B8FC4
  c->lr=0x801B8FCCu; f_801AA860(c); // 801B8FC8
L_801B8FCC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801B8FCC
  if (!crb(c,2)) { goto L_801B9018; } // 801B8FD0
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801B8FD4
  if (crb(c,2)) { goto L_801B9018; } // 801B8FD8
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B8FDC
  c->r[3]=0u+0x802D0000u; // 801B8FE0
  c->r[3]=c->r[3]+0x000023D8u; // 801B8FE4
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801B8FE8
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B8FEC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B8FF0
  cmpu(c,0,c->r[0],0x00000004u); // 801B8FF4
  if (crb(c,0)) { goto L_801B9018; } // 801B8FF8
  c->r[3]=0u+0x000D0000u; // 801B8FFC
  c->r[5]=R32(c->r[30]+0x00000014u); // 801B9000
  c->r[6]=R32(c->r[30]+0x00000010u); // 801B9004
  c->r[3]=c->r[3]+0x00000003u; // 801B9008
  c->r[7]=R8(c->r[30]+0x00000076u); // 801B900C
  c->r[4]=c->r[31]+0x00000528u; // 801B9010
  c->lr=0x801B9018u; f_801AA820(c); // 801B9014
L_801B9018:;
  c->r[3]=c->r[30]|c->r[30]; // 801B9018
  c->lr=0x801B9020u; f_801BAB60(c); // 801B901C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801B9020
  c->r[25]=c->r[3]|c->r[3]; // 801B9024
  cmpu(c,0,c->r[5],0x00000001u); // 801B9028
  if (crb(c,2)) { goto L_801B9054; } // 801B902C
  cmps(c,0,(int32_t)c->r[28],0); // 801B9030
  if (crb(c,2)) { goto L_801B9054; } // 801B9034
  c->r[12]=c->r[28]|c->r[28]; // 801B9038
  c->r[3]=c->r[24]|c->r[24]; // 801B903C
  c->r[4]=R32(c->r[30]+0x00000008u); // 801B9040
  c->ctr=c->r[12]; // 801B9044
  if (true) { c->lr=0x801B904Cu; dispatch(c,c->ctr); } // 801B9048
  c->r[0]=0u+0x00000000u; // 801B904C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801B9050
L_801B9054:;
  c->r[3]=c->r[25]|c->r[25]; // 801B9054
L_801B9058:;
  c->r[11]=c->r[1]+0x00000030u; // 801B9058
  c->lr=0x801B9060u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B905C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B9060
  c->lr=c->r[0]; // 801B9064
  c->r[1]=c->r[1]+0x00000030u; // 801B9068
  return; // 801B906C
}

// btm_sec_mx_access_request
void f_801B9070(Ctx* __restrict c) {
  trace_call(0x801B9070u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9070
  c->r[0]=c->lr; // 801B9074
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B9078
  c->r[11]=c->r[1]+0x00000030u; // 801B907C
  c->lr=0x801B9084u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9080
  c->r[24]=c->r[3]|c->r[3]; // 801B9084
  c->r[25]=c->r[4]|c->r[4]; // 801B9088
  c->r[26]=c->r[5]|c->r[5]; // 801B908C
  c->r[27]=c->r[6]|c->r[6]; // 801B9090
  c->r[28]=c->r[7]|c->r[7]; // 801B9094
  c->r[29]=c->r[8]|c->r[8]; // 801B9098
  c->r[30]=c->r[9]|c->r[9]; // 801B909C
  c->lr=0x801B90A4u; f_801B2F10(c); // 801B90A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B90A4
  c->r[31]=c->r[3]|c->r[3]; // 801B90A8
  if (!crb(c,2)) { goto L_801B90E8; } // 801B90AC
  c->r[3]=c->r[24]|c->r[24]; // 801B90B0
  c->lr=0x801B90B8u; f_801B2D38(c); // 801B90B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B90B8
  c->r[31]=c->r[3]|c->r[3]; // 801B90BC
  if (!crb(c,2)) { goto L_801B90E8; } // 801B90C0
  cmps(c,0,(int32_t)c->r[29],0); // 801B90C4
  if (crb(c,2)) { goto L_801B92F4; } // 801B90C8
  c->r[12]=c->r[29]|c->r[29]; // 801B90CC
  c->r[3]=c->r[24]|c->r[24]; // 801B90D0
  c->r[4]=c->r[30]|c->r[30]; // 801B90D4
  c->r[5]=0u+0x00000003u; // 801B90D8
  c->ctr=c->r[12]; // 801B90DC
  if (true) { c->lr=0x801B90E4u; dispatch(c,c->ctr); } // 801B90E0
  goto L_801B92F4; // 801B90E4
L_801B90E8:;
  c->r[3]=0u+0x802D0000u; // 801B90E8
  c->r[0]=0u+0x00000008u; // 801B90EC
  c->r[3]=c->r[3]+0x000023D8u; // 801B90F0
  c->r[4]=0u+0x00000000u; // 801B90F4
  c->r[5]=c->r[3]+0x00001990u; // 801B90F8
  c->ctr=c->r[0]; // 801B90FC
L_801B9100:;
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801B9100
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B9104
  if (crb(c,2)) { goto L_801B9150; } // 801B9108
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801B910C
  cmpu(c,0,c->r[0],c->r[25]); // 801B9110
  if (!crb(c,2)) { goto L_801B9150; } // 801B9114
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B9118
  cmpu(c,0,c->r[0],c->r[27]); // 801B911C
  if (!crb(c,2)) { goto L_801B9150; } // 801B9120
  cmps(c,0,(int32_t)c->r[26],0); // 801B9124
  if (crb(c,2)) { goto L_801B9138; } // 801B9128
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B912C
  cmpu(c,0,c->r[0],c->r[28]); // 801B9130
  if (crb(c,2)) { goto L_801B9208; } // 801B9134
L_801B9138:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B9138
  if (!crb(c,2)) { goto L_801B9150; } // 801B913C
  c->r[0]=R32(c->r[5]+0x00000008u); // 801B9140
  cmpu(c,0,c->r[0],c->r[28]); // 801B9144
  if (!crb(c,2)) { goto L_801B9150; } // 801B9148
  goto L_801B9208; // 801B914C
L_801B9150:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 801B9150
  c->r[5]=c->r[5]+0x0000003Cu; // 801B9154
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B9158
  if (crb(c,2)) { goto L_801B91A4; } // 801B915C
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801B9160
  cmpu(c,0,c->r[0],c->r[25]); // 801B9164
  if (!crb(c,2)) { goto L_801B91A4; } // 801B9168
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B916C
  cmpu(c,0,c->r[0],c->r[27]); // 801B9170
  if (!crb(c,2)) { goto L_801B91A4; } // 801B9174
  cmps(c,0,(int32_t)c->r[26],0); // 801B9178
  if (crb(c,2)) { goto L_801B918C; } // 801B917C
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B9180
  cmpu(c,0,c->r[0],c->r[28]); // 801B9184
  if (crb(c,2)) { goto L_801B9208; } // 801B9188
L_801B918C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B918C
  if (!crb(c,2)) { goto L_801B91A4; } // 801B9190
  c->r[0]=R32(c->r[5]+0x00000008u); // 801B9194
  cmpu(c,0,c->r[0],c->r[28]); // 801B9198
  if (!crb(c,2)) { goto L_801B91A4; } // 801B919C
  goto L_801B9208; // 801B91A0
L_801B91A4:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 801B91A4
  c->r[5]=c->r[5]+0x0000003Cu; // 801B91A8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B91AC
  if (crb(c,2)) { goto L_801B91F8; } // 801B91B0
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801B91B4
  cmpu(c,0,c->r[0],c->r[25]); // 801B91B8
  if (!crb(c,2)) { goto L_801B91F8; } // 801B91BC
  c->r[0]=R32(c->r[5]+0x00000000u); // 801B91C0
  cmpu(c,0,c->r[0],c->r[27]); // 801B91C4
  if (!crb(c,2)) { goto L_801B91F8; } // 801B91C8
  cmps(c,0,(int32_t)c->r[26],0); // 801B91CC
  if (crb(c,2)) { goto L_801B91E0; } // 801B91D0
  c->r[0]=R32(c->r[5]+0x00000004u); // 801B91D4
  cmpu(c,0,c->r[0],c->r[28]); // 801B91D8
  if (crb(c,2)) { goto L_801B9208; } // 801B91DC
L_801B91E0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801B91E0
  if (!crb(c,2)) { goto L_801B91F8; } // 801B91E4
  c->r[0]=R32(c->r[5]+0x00000008u); // 801B91E8
  cmpu(c,0,c->r[0],c->r[28]); // 801B91EC
  if (!crb(c,2)) { goto L_801B91F8; } // 801B91F0
  goto L_801B9208; // 801B91F4
L_801B91F8:;
  c->r[4]=c->r[4]+0x00000002u; // 801B91F8
  c->r[5]=c->r[5]+0x0000003Cu; // 801B91FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B9100; } // 801B9200
  c->r[5]=0u+0x00000000u; // 801B9204
L_801B9208:;
  cmps(c,0,(int32_t)c->r[5],0); // 801B9208
  if (!crb(c,2)) { goto L_801B9264; } // 801B920C
  cmps(c,0,(int32_t)c->r[29],0); // 801B9210
  if (crb(c,2)) { goto L_801B9230; } // 801B9214
  c->r[12]=c->r[29]|c->r[29]; // 801B9218
  c->r[3]=c->r[24]|c->r[24]; // 801B921C
  c->r[4]=c->r[30]|c->r[30]; // 801B9220
  c->r[5]=0u+0x00000004u; // 801B9224
  c->ctr=c->r[12]; // 801B9228
  if (true) { c->lr=0x801B9230u; dispatch(c,c->ctr); } // 801B922C
L_801B9230:;
  c->r[3]=0u+0x802D0000u; // 801B9230
  c->r[3]=c->r[3]+0x000023D8u; // 801B9234
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B9238
  cmpu(c,0,c->r[0],0x00000001u); // 801B923C
  if (crb(c,0)) { goto L_801B92F4; } // 801B9240
  c->r[4]=0u+0x80240000u; // 801B9244
  c->r[5]=c->r[25]|c->r[25]; // 801B9248
  c->r[6]=c->r[27]|c->r[27]; // 801B924C
  c->r[7]=c->r[28]|c->r[28]; // 801B9250
  c->r[4]=c->r[4]+0x00005F80u; // 801B9254
  c->r[3]=0u+0x000D0000u; // 801B9258
  c->lr=0x801B9260u; f_801AA820(c); // 801B925C
  goto L_801B92F4; // 801B9260
L_801B9264:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 801B9264
  c->r[3]=c->r[31]|c->r[31]; // 801B9268
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801B926C
  W8(c->r[31]+0x00000081u,c->r[0]); // 801B9270
  W8(c->r[31]+0x00000080u,c->r[26]); // 801B9274
  W32(c->r[31]+0x00000004u,c->r[29]); // 801B9278
  W32(c->r[31]+0x00000008u,c->r[30]); // 801B927C
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B9280
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801B9284
  W8(c->r[31]+0x00000076u,c->r[0]); // 801B9288
  c->lr=0x801B9290u; f_801BAB60(c); // 801B928C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B9290
  c->r[5]=c->r[3]|c->r[3]; // 801B9294
  cmpu(c,0,c->r[0],0x00000001u); // 801B9298
  if (crb(c,2)) { goto L_801B92F4; } // 801B929C
  cmps(c,0,(int32_t)c->r[29],0); // 801B92A0
  if (crb(c,2)) { goto L_801B92F4; } // 801B92A4
  c->r[0]=R8(c->r[31]+0x00000080u); // 801B92A8
  cmps(c,0,(int32_t)c->r[0],0); // 801B92AC
  if (crb(c,2)) { goto L_801B92D4; } // 801B92B0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B92B4
  cmps(c,0,(int32_t)c->r[3],0); // 801B92B8
  if (crb(c,2)) { goto L_801B92D4; } // 801B92BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B92C0
  cmpu(c,0,c->r[0],0x00000003u); // 801B92C4
  if (!crb(c,2)) { goto L_801B92D4; } // 801B92C8
  c->r[0]=0u+0x00000000u; // 801B92CC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801B92D0
L_801B92D4:;
  c->r[12]=c->r[29]|c->r[29]; // 801B92D4
  c->r[3]=c->r[24]|c->r[24]; // 801B92D8
  c->r[4]=c->r[30]|c->r[30]; // 801B92DC
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 801B92E0
  c->ctr=c->r[12]; // 801B92E4
  if (true) { c->lr=0x801B92ECu; dispatch(c,c->ctr); } // 801B92E8
  c->r[0]=0u+0x00000000u; // 801B92EC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B92F0
L_801B92F4:;
  c->r[11]=c->r[1]+0x00000030u; // 801B92F4
  c->lr=0x801B92FCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B92F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B92FC
  c->lr=c->r[0]; // 801B9300
  c->r[1]=c->r[1]+0x00000030u; // 801B9304
  return; // 801B9308
}

// btm_sec_conn_req
void f_801B930C(Ctx* __restrict c) {
  trace_call(0x801B930Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B930C
  c->r[0]=c->lr; // 801B9310
  c->r[5]=0u+0x802D0000u; // 801B9314
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9318
  c->r[5]=c->r[5]+0x000023D8u; // 801B931C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B9320
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B9324
  c->r[30]=c->r[4]|c->r[4]; // 801B9328
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B932C
  c->r[29]=c->r[3]|c->r[3]; // 801B9330
  c->r[0]=R8(c->r[5]+0x0000197Au); // 801B9334
  cmps(c,0,(int32_t)c->r[0],0); // 801B9338
  if (crb(c,2)) { goto L_801B93A0; } // 801B933C
  c->lr=0x801B9344u; f_801B2F10(c); // 801B9340
  cmps(c,0,(int32_t)c->r[3],0); // 801B9344
  if (crb(c,2)) { goto L_801B9358; } // 801B9348
  c->r[0]=R8(c->r[3]+0x00000076u); // 801B934C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801B9350
  if (!crb(c,2)) { goto L_801B93A0; } // 801B9354
L_801B9358:;
  c->r[3]=0u+0x802D0000u; // 801B9358
  c->r[3]=c->r[3]+0x000023D8u; // 801B935C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B9360
  cmpu(c,0,c->r[0],0x00000004u); // 801B9364
  if (crb(c,0)) { goto L_801B9380; } // 801B9368
  c->r[3]=0u+0x000D0000u; // 801B936C
  c->r[4]=0u+0x80240000u; // 801B9370
  c->r[3]=c->r[3]+0x00000003u; // 801B9374
  c->r[4]=c->r[4]+0x00005FC0u; // 801B9378
  c->lr=0x801B9380u; f_801AA7C0(c); // 801B937C
L_801B9380:;
  c->r[3]=0u+0x00000002u; // 801B9380
  c->lr=0x801B9388u; f_801A7C10(c); // 801B9384
  cmps(c,0,(int32_t)c->r[3],0); // 801B9388
  if (crb(c,2)) { goto L_801B941C; } // 801B938C
  c->r[4]=c->r[29]|c->r[29]; // 801B9390
  c->r[5]=0u+0x0000000Fu; // 801B9394
  c->lr=0x801B939Cu; f_801BDAF8(c); // 801B9398
  goto L_801B941C; // 801B939C
L_801B93A0:;
  c->r[3]=0u+0x802D0000u; // 801B93A0
  c->r[3]=c->r[3]+0x000023D8u; // 801B93A4
  c->r[12]=R32(c->r[3]+0x00001934u); // 801B93A8
  cmps(c,0,(int32_t)c->r[12],0); // 801B93AC
  if (crb(c,2)) { goto L_801B93EC; } // 801B93B0
  c->r[3]=c->r[29]|c->r[29]; // 801B93B4
  c->r[4]=c->r[30]|c->r[30]; // 801B93B8
  c->ctr=c->r[12]; // 801B93BC
  if (true) { c->lr=0x801B93C4u; dispatch(c,c->ctr); } // 801B93C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B93C4
  if (!crb(c,2)) { goto L_801B93EC; } // 801B93C8
  c->r[3]=0u+0x00000002u; // 801B93CC
  c->lr=0x801B93D4u; f_801A7C10(c); // 801B93D0
  cmps(c,0,(int32_t)c->r[3],0); // 801B93D4
  if (crb(c,2)) { goto L_801B941C; } // 801B93D8
  c->r[4]=c->r[29]|c->r[29]; // 801B93DC
  c->r[5]=0u+0x0000000Fu; // 801B93E0
  c->lr=0x801B93E8u; f_801BDAF8(c); // 801B93E4
  goto L_801B941C; // 801B93E8
L_801B93EC:;
  c->r[31]=0u+0x802D0000u; // 801B93EC
  c->r[4]=c->r[29]|c->r[29]; // 801B93F0
  c->r[31]=c->r[31]+0x000023D8u; // 801B93F4
  c->r[5]=0u+0x00000006u; // 801B93F8
  c->r[3]=c->r[31]+0x000027B4u; // 801B93FC
  c->lr=0x801B9404u; f_80004364(c); // 801B9400
  c->r[4]=c->r[30]|c->r[30]; // 801B9404
  c->r[3]=c->r[31]+0x000027BAu; // 801B9408
  c->r[5]=0u+0x00000003u; // 801B940C
  c->lr=0x801B9414u; f_80004364(c); // 801B9410
  c->r[3]=c->r[29]|c->r[29]; // 801B9414
  c->lr=0x801B941Cu; f_801C51CC(c); // 801B9418
L_801B941C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B941C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B9420
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B9424
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B9428
  c->lr=c->r[0]; // 801B942C
  c->r[1]=c->r[1]+0x00000020u; // 801B9430
  return; // 801B9434
}

// btm_sec_init
void f_801B9438(Ctx* __restrict c) {
  trace_call(0x801B9438u);
  c->r[6]=0u+0x802D0000u; // 801B9438
  c->r[4]=0u+0x000000FFu; // 801B943C
  c->r[6]=c->r[6]+0x000023D8u; // 801B9440
  c->r[5]=0u+0x00000006u; // 801B9444
  W8(c->r[6]+0x00001978u,c->r[3]); // 801B9448
  c->r[3]=c->r[6]+0x00001954u; // 801B944C
  f_800046B4(c); return; // 801B9450
}

// btm_sec_dev_reset
void f_801B9454(Ctx* __restrict c) {
  trace_call(0x801B9454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9454
  c->r[0]=c->lr; // 801B9458
  c->r[3]=0u+0x802D0000u; // 801B945C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9460
  c->r[3]=c->r[3]+0x000023D8u; // 801B9464
  c->r[0]=R8(c->r[3]+0x00001978u); // 801B9468
  cmpu(c,0,c->r[0],0x00000003u); // 801B946C
  if (!crb(c,2)) { goto L_801B9484; } // 801B9470
  c->r[3]=0u+0x00000001u; // 801B9474
  c->lr=0x801B947Cu; f_801BF2EC(c); // 801B9478
  c->r[3]=0u+0x00000001u; // 801B947C
  c->lr=0x801B9484u; f_801BF360(c); // 801B9480
L_801B9484:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9484
  c->lr=c->r[0]; // 801B9488
  c->r[1]=c->r[1]+0x00000010u; // 801B948C
  return; // 801B9490
}

// btm_sec_abort_access_req
void f_801B9494(Ctx* __restrict c) {
  trace_call(0x801B9494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9494
  c->r[0]=c->lr; // 801B9498
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B949C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B94A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B94A4
  c->r[30]=c->r[3]|c->r[3]; // 801B94A8
  c->lr=0x801B94B0u; f_801B2F10(c); // 801B94AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B94B0
  c->r[31]=c->r[3]|c->r[3]; // 801B94B4
  if (crb(c,2)) { goto L_801B9530; } // 801B94B8
  c->r[3]=0u+0x802D0000u; // 801B94BC
  c->r[3]=c->r[3]+0x000023D8u; // 801B94C0
  c->r[12]=R32(c->r[3]+0x00001920u); // 801B94C4
  cmps(c,0,(int32_t)c->r[12],0); // 801B94C8
  if (crb(c,2)) { goto L_801B94E4; } // 801B94CC
  c->r[3]=c->r[30]|c->r[30]; // 801B94D0
  c->r[4]=c->r[31]+0x00000022u; // 801B94D4
  c->r[5]=c->r[31]+0x00000035u; // 801B94D8
  c->ctr=c->r[12]; // 801B94DC
  if (true) { c->lr=0x801B94E4u; dispatch(c,c->ctr); } // 801B94E0
L_801B94E4:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801B94E4
  cmpu(c,0,c->r[0],0x00000004u); // 801B94E8
  if (crb(c,2)) { goto L_801B94F8; } // 801B94EC
  cmpu(c,0,c->r[0],0x00000001u); // 801B94F0
  if (!crb(c,2)) { goto L_801B9530; } // 801B94F4
L_801B94F8:;
  c->r[3]=0u+0x00000000u; // 801B94F8
  W8(c->r[31]+0x0000007Fu,c->r[3]); // 801B94FC
  c->r[0]=R8(c->r[31]+0x00000080u); // 801B9500
  cmps(c,0,(int32_t)c->r[0],0); // 801B9504
  if (crb(c,2)) { goto L_801B9528; } // 801B9508
  c->r[4]=R32(c->r[31]+0x00000000u); // 801B950C
  cmps(c,0,(int32_t)c->r[4],0); // 801B9510
  if (crb(c,2)) { goto L_801B9528; } // 801B9514
  c->r[0]=R32(c->r[4]+0x00000000u); // 801B9518
  cmpu(c,0,c->r[0],0x00000003u); // 801B951C
  if (!crb(c,2)) { goto L_801B9528; } // 801B9520
  W32(c->r[4]+0x00000004u,c->r[3]); // 801B9524
L_801B9528:;
  c->r[0]=0u+0x00000000u; // 801B9528
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B952C
L_801B9530:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9530
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9534
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B9538
  c->lr=c->r[0]; // 801B953C
  c->r[1]=c->r[1]+0x00000010u; // 801B9540
  return; // 801B9544
}

// btm_sec_rmt_name_request_complete
void f_801B9548(Ctx* __restrict c) {
  trace_call(0x801B9548u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9548
  c->r[0]=c->lr; // 801B954C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9550
  c->r[11]=c->r[1]+0x00000020u; // 801B9554
  c->lr=0x801B955Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9558
  cmps(c,0,(int32_t)c->r[3],0); // 801B955C
  c->r[27]=c->r[3]|c->r[3]; // 801B9560
  c->r[28]=c->r[4]|c->r[4]; // 801B9564
  c->r[30]=c->r[5]|c->r[5]; // 801B9568
  if (crb(c,2)) { goto L_801B957C; } // 801B956C
  c->lr=0x801B9574u; f_801B2F10(c); // 801B9570
  c->r[31]=c->r[3]|c->r[3]; // 801B9574
  goto L_801B9624; // 801B9578
L_801B957C:;
  c->r[3]=0u+0x802D0000u; // 801B957C
  c->r[0]=0u+0x00000004u; // 801B9580
  c->r[3]=c->r[3]+0x000023D8u; // 801B9584
  c->r[4]=0u+0x00000000u; // 801B9588
  c->r[31]=c->r[3]+0x00001F30u; // 801B958C
  c->ctr=c->r[0]; // 801B9590
L_801B9594:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B9594
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B9598
  if (crb(c,2)) { goto L_801B95AC; } // 801B959C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801B95A0
  cmpu(c,0,c->r[0],0x00000003u); // 801B95A4
  if (crb(c,2)) { goto L_801B9618; } // 801B95A8
L_801B95AC:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801B95AC
  c->r[4]=c->r[4]+0x00000001u; // 801B95B0
  c->r[31]=c->r[31]+0x00000088u; // 801B95B4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B95B8
  if (crb(c,2)) { goto L_801B95CC; } // 801B95BC
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801B95C0
  cmpu(c,0,c->r[0],0x00000003u); // 801B95C4
  if (crb(c,2)) { goto L_801B9618; } // 801B95C8
L_801B95CC:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801B95CC
  c->r[4]=c->r[4]+0x00000001u; // 801B95D0
  c->r[31]=c->r[31]+0x00000088u; // 801B95D4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B95D8
  if (crb(c,2)) { goto L_801B95EC; } // 801B95DC
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801B95E0
  cmpu(c,0,c->r[0],0x00000003u); // 801B95E4
  if (crb(c,2)) { goto L_801B9618; } // 801B95E8
L_801B95EC:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801B95EC
  c->r[4]=c->r[4]+0x00000001u; // 801B95F0
  c->r[31]=c->r[31]+0x00000088u; // 801B95F4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801B95F8
  if (crb(c,2)) { goto L_801B960C; } // 801B95FC
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801B9600
  cmpu(c,0,c->r[0],0x00000003u); // 801B9604
  if (crb(c,2)) { goto L_801B9618; } // 801B9608
L_801B960C:;
  c->r[4]=c->r[4]+0x00000001u; // 801B960C
  c->r[31]=c->r[31]+0x00000088u; // 801B9610
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B9594; } // 801B9614
L_801B9618:;
  cmps(c,0,(int32_t)c->r[4],16); // 801B9618
  if (!crb(c,2)) { goto L_801B9624; } // 801B961C
  c->r[31]=0u+0x00000000u; // 801B9620
L_801B9624:;
  c->r[3]=0u+0x802D0000u; // 801B9624
  c->r[3]=c->r[3]+0x000023D8u; // 801B9628
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801B962C
  cmpu(c,0,c->r[0],0x00000004u); // 801B9630
  if (crb(c,0)) { goto L_801B9664; } // 801B9634
  cmps(c,0,(int32_t)c->r[31],0); // 801B9638
  c->r[3]=0u+0x000D0000u; // 801B963C
  c->r[4]=0u+0x80240000u; // 801B9640
  c->r[5]=c->r[30]|c->r[30]; // 801B9644
  c->r[3]=c->r[3]+0x00000003u; // 801B9648
  c->r[4]=c->r[4]+0x00005FFCu; // 801B964C
  if (crb(c,2)) { goto L_801B965C; } // 801B9650
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801B9654
  goto L_801B9660; // 801B9658
L_801B965C:;
  c->r[6]=0u+0x00000000u; // 801B965C
L_801B9660:;
  c->lr=0x801B9664u; f_801AA800(c); // 801B9660
L_801B9664:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B9664
  if (crb(c,2)) { goto L_801B9818; } // 801B9668
  cmps(c,0,(int32_t)c->r[30],0); // 801B966C
  if (!crb(c,2)) { goto L_801B96CC; } // 801B9670
  c->r[4]=c->r[28]|c->r[28]; // 801B9674
  c->r[3]=c->r[31]+0x00000035u; // 801B9678
  c->r[5]=0u+0x00000040u; // 801B967C
  c->lr=0x801B9684u; f_80004364(c); // 801B9680
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B9684
  c->r[29]=0u+0x802D0000u; // 801B9688
  c->r[29]=c->r[29]+0x000023D8u; // 801B968C
  c->r[28]=0u+0x00000000u; // 801B9690
  c->r[0]=c->r[0]|0x00000008u; // 801B9694
  W8(c->r[31]+0x00000076u,c->r[0]); // 801B9698
L_801B969C:;
  c->r[12]=R32(c->r[29]+0x0000192Cu); // 801B969C
  cmps(c,0,(int32_t)c->r[12],0); // 801B96A0
  if (crb(c,2)) { goto L_801B96BC; } // 801B96A4
  c->r[3]=c->r[27]|c->r[27]; // 801B96A8
  c->r[4]=c->r[31]+0x00000022u; // 801B96AC
  c->r[5]=c->r[31]+0x00000035u; // 801B96B0
  c->ctr=c->r[12]; // 801B96B4
  if (true) { c->lr=0x801B96BCu; dispatch(c,c->ctr); } // 801B96B8
L_801B96BC:;
  c->r[28]=c->r[28]+0x00000001u; // 801B96BC
  c->r[29]=c->r[29]+0x00000004u; // 801B96C0
  cmps(c,0,(int32_t)c->r[28],2); // 801B96C4
  if (crb(c,0)) { IRQCHK(c); goto L_801B969C; } // 801B96C8
L_801B96CC:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 801B96CC
  cmps(c,0,(int32_t)c->r[0],0); // 801B96D0
  if (crb(c,2)) { goto L_801B976C; } // 801B96D4
  c->r[0]=R8(c->r[31]+0x00000081u); // 801B96D8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B96DC
  if (crb(c,2)) { goto L_801B96F0; } // 801B96E0
  c->r[0]=R8(c->r[31]+0x00000085u); // 801B96E4
  cmps(c,0,(int32_t)c->r[0],0); // 801B96E8
  if (crb(c,2)) { goto L_801B9818; } // 801B96EC
L_801B96F0:;
  c->r[0]=0u+0x00000000u; // 801B96F0
  c->r[3]=0u+0x802D0000u; // 801B96F4
  W8(c->r[31]+0x00000082u,c->r[0]); // 801B96F8
  c->r[3]=c->r[3]+0x000023D8u; // 801B96FC
  c->r[12]=R32(c->r[3]+0x00001914u); // 801B9700
  cmps(c,0,(int32_t)c->r[12],0); // 801B9704
  if (crb(c,2)) { goto L_801B9728; } // 801B9708
  c->r[3]=c->r[31]+0x0000001Cu; // 801B970C
  c->r[4]=c->r[31]+0x00000022u; // 801B9710
  c->r[5]=c->r[31]+0x00000035u; // 801B9714
  c->r[6]=c->r[31]+0x00000025u; // 801B9718
  c->r[7]=R8(c->r[31]+0x00000083u); // 801B971C
  c->ctr=c->r[12]; // 801B9720
  if (true) { c->lr=0x801B9728u; dispatch(c,c->ctr); } // 801B9724
L_801B9728:;
  c->r[29]=0u+0x802D0000u; // 801B9728
  c->r[28]=0u+0x00000000u; // 801B972C
  c->r[29]=c->r[29]+0x000023D8u; // 801B9730
L_801B9734:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801B9734
  cmps(c,0,(int32_t)c->r[12],0); // 801B9738
  if (crb(c,2)) { goto L_801B975C; } // 801B973C
  c->r[3]=c->r[31]+0x0000001Cu; // 801B9740
  c->r[4]=c->r[31]+0x00000022u; // 801B9744
  c->r[5]=c->r[31]+0x00000035u; // 801B9748
  c->r[6]=c->r[31]+0x00000025u; // 801B974C
  c->r[7]=R8(c->r[31]+0x00000083u); // 801B9750
  c->ctr=c->r[12]; // 801B9754
  if (true) { c->lr=0x801B975Cu; dispatch(c,c->ctr); } // 801B9758
L_801B975C:;
  c->r[28]=c->r[28]+0x00000001u; // 801B975C
  c->r[29]=c->r[29]+0x00000004u; // 801B9760
  cmps(c,0,(int32_t)c->r[28],2); // 801B9764
  if (crb(c,0)) { IRQCHK(c); goto L_801B9734; } // 801B9768
L_801B976C:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 801B976C
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801B9770
  if (crb(c,2)) { goto L_801B97A0; } // 801B9774
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B9778
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801B977C
  if (crb(c,2)) { goto L_801B97A0; } // 801B9780
  c->r[0]=0u+0xFFFFFFAFu; // 801B9784
  c->r[4]=0u+0x00000013u; // 801B9788
  c->r[0]=c->r[3]&c->r[0]; // 801B978C
  W8(c->r[31]+0x00000081u,c->r[0]); // 801B9790
  c->r[3]=R16(c->r[31]+0x00000018u); // 801B9794
  c->lr=0x801B979Cu; f_801BD984(c); // 801B9798
  goto L_801B9818; // 801B979C
L_801B97A0:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801B97A0
  cmpu(c,0,c->r[0],0x00000003u); // 801B97A4
  if (!crb(c,2)) { goto L_801B9818; } // 801B97A8
  c->r[29]=0u+0x00000000u; // 801B97AC
  cmps(c,0,(int32_t)c->r[30],0); // 801B97B0
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801B97B4
  if (crb(c,2)) { goto L_801B97E4; } // 801B97B8
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B97BC
  cmps(c,0,(int32_t)c->r[12],0); // 801B97C0
  if (crb(c,2)) { goto L_801B9818; } // 801B97C4
  c->r[3]=c->r[31]+0x0000001Cu; // 801B97C8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B97CC
  c->r[5]=0u+0x0000000Au; // 801B97D0
  c->ctr=c->r[12]; // 801B97D4
  if (true) { c->lr=0x801B97DCu; dispatch(c,c->ctr); } // 801B97D8
  W32(c->r[31]+0x00000004u,c->r[29]); // 801B97DC
  goto L_801B9818; // 801B97E0
L_801B97E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B97E4
  c->lr=0x801B97ECu; f_801BAB60(c); // 801B97E8
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801B97EC
  cmpu(c,0,c->r[5],0x00000001u); // 801B97F0
  if (crb(c,2)) { goto L_801B9818; } // 801B97F4
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B97F8
  cmps(c,0,(int32_t)c->r[12],0); // 801B97FC
  if (crb(c,2)) { goto L_801B9818; } // 801B9800
  c->r[3]=c->r[31]+0x0000001Cu; // 801B9804
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B9808
  c->ctr=c->r[12]; // 801B980C
  if (true) { c->lr=0x801B9814u; dispatch(c,c->ctr); } // 801B9810
  W32(c->r[31]+0x00000004u,c->r[29]); // 801B9814
L_801B9818:;
  c->r[11]=c->r[1]+0x00000020u; // 801B9818
  c->lr=0x801B9820u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B981C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9820
  c->lr=c->r[0]; // 801B9824
  c->r[1]=c->r[1]+0x00000020u; // 801B9828
  return; // 801B982C
}

// btm_sec_auth_complete
void f_801B9830(Ctx* __restrict c) {
  trace_call(0x801B9830u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9830
  c->r[0]=c->lr; // 801B9834
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9838
  c->r[11]=c->r[1]+0x00000020u; // 801B983C
  c->lr=0x801B9844u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9840
  c->r[29]=c->r[3]|c->r[3]; // 801B9844
  c->r[30]=c->r[4]|c->r[4]; // 801B9848
  c->lr=0x801B9850u; f_801B2E58(c); // 801B984C
  c->r[4]=0u+0x802D0000u; // 801B9850
  c->r[31]=c->r[3]|c->r[3]; // 801B9854
  c->r[4]=c->r[4]+0x000023D8u; // 801B9858
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B985C
  cmpu(c,0,c->r[0],0x00000004u); // 801B9860
  if (crb(c,0)) { goto L_801B9894; } // 801B9864
  cmps(c,0,(int32_t)c->r[31],0); // 801B9868
  c->r[3]=0u+0x000D0000u; // 801B986C
  c->r[4]=0u+0x80240000u; // 801B9870
  c->r[5]=c->r[30]|c->r[30]; // 801B9874
  c->r[3]=c->r[3]+0x00000003u; // 801B9878
  c->r[4]=c->r[4]+0x00006034u; // 801B987C
  if (crb(c,2)) { goto L_801B988C; } // 801B9880
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801B9884
  goto L_801B9890; // 801B9888
L_801B988C:;
  c->r[6]=0u+0x00000000u; // 801B988C
L_801B9890:;
  c->lr=0x801B9894u; f_801AA800(c); // 801B9890
L_801B9894:;
  c->r[4]=0u+0x802D0000u; // 801B9894
  c->r[4]=c->r[4]+0x000023D8u; // 801B9898
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801B989C
  cmps(c,0,(int32_t)c->r[0],0); // 801B98A0
  if (crb(c,2)) { goto L_801B98FC; } // 801B98A4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B98A8
  c->r[3]=0u+0x00000000u; // 801B98AC
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801B98B0
  cmpu(c,0,c->r[0],0x00000005u); // 801B98B4
  if (crb(c,0)) { goto L_801B98E0; } // 801B98B8
  c->r[3]=R8(c->r[4]+0x00001978u); // 801B98BC
  c->r[4]=0u+0x80240000u; // 801B98C0
  c->r[5]=0u+0x000D0000u; // 801B98C4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801B98C8
  c->r[4]=c->r[4]+0x00005D24u; // 801B98CC
  c->r[0]=cntlz(c->r[0]); // 801B98D0
  c->r[3]=c->r[5]+0x00000004u; // 801B98D4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B98D8
  c->lr=0x801B98E0u; f_801AA7E0(c); // 801B98DC
L_801B98E0:;
  c->r[3]=0u+0x802D0000u; // 801B98E0
  c->r[3]=c->r[3]+0x000023D8u; // 801B98E4
  c->r[3]=R8(c->r[3]+0x00001978u); // 801B98E8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801B98EC
  c->r[0]=cntlz(c->r[0]); // 801B98F0
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801B98F4
  c->lr=0x801B98FCu; f_801BF2EC(c); // 801B98F8
L_801B98FC:;
  c->r[4]=0u+0x802D0000u; // 801B98FC
  c->r[4]=c->r[4]+0x000023D8u; // 801B9900
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801B9904
  cmps(c,0,(int32_t)c->r[0],0); // 801B9908
  if (crb(c,2)) { goto L_801B9920; } // 801B990C
  c->r[0]=0u+0x00000000u; // 801B9910
  c->r[3]=R8(c->r[4]+0x00000020u); // 801B9914
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801B9918
  c->lr=0x801B9920u; f_801BED78(c); // 801B991C
L_801B9920:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B9920
  if (crb(c,2)) { goto L_801B99B4; } // 801B9924
  c->r[3]=R8(c->r[31]+0x00000081u); // 801B9928
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801B992C
  if (crb(c,2)) { goto L_801B99B4; } // 801B9930
  c->r[27]=0u+0x802D0000u; // 801B9934
  c->r[27]=c->r[27]+0x000023D8u; // 801B9938
  c->r[0]=R8(c->r[27]+0x0000197Du); // 801B993C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9940
  if (!crb(c,2)) { goto L_801B99B4; } // 801B9944
  c->r[0]=0u+0xFFFFFFAFu; // 801B9948
  c->r[0]=c->r[3]&c->r[0]; // 801B994C
  W8(c->r[31]+0x00000081u,c->r[0]); // 801B9950
  c->r[26]=R8(c->r[27]+0x0000197Eu); // 801B9954
  cmps(c,0,(int32_t)c->r[26],0); // 801B9958
  if (crb(c,2)) { goto L_801B99B4; } // 801B995C
  c->r[3]=c->r[29]|c->r[29]; // 801B9960
  c->lr=0x801B9968u; f_801B2E58(c); // 801B9964
  cmps(c,0,(int32_t)c->r[3],0); // 801B9968
  c->r[28]=c->r[3]|c->r[3]; // 801B996C
  if (crb(c,2)) { goto L_801B99B4; } // 801B9970
  c->r[0]=R8(c->r[3]+0x00000081u); // 801B9974
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B9978
  if (crb(c,2)) { goto L_801B9988; } // 801B997C
  W8(c->r[27]+0x0000197Eu,c->r[26]); // 801B9980
  goto L_801B99B4; // 801B9984
L_801B9988:;
  c->r[27]=R8(c->r[3]+0x0000007Fu); // 801B9988
  cmpu(c,0,c->r[27],0x00000005u); // 801B998C
  if (crb(c,2)) { goto L_801B99B4; } // 801B9990
  c->r[0]=0u+0x00000005u; // 801B9994
  c->r[4]=c->r[26]|c->r[26]; // 801B9998
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801B999C
  c->r[3]=c->r[29]|c->r[29]; // 801B99A0
  c->lr=0x801B99A8u; f_801BD984(c); // 801B99A4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801B99A8
  if (!crb(c,2)) { goto L_801B99B4; } // 801B99AC
  W8(c->r[28]+0x0000007Fu,c->r[27]); // 801B99B0
L_801B99B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B99B4
  if (crb(c,2)) { goto L_801B9B5C; } // 801B99B8
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801B99BC
  cmpu(c,0,c->r[0],0x00000001u); // 801B99C0
  if (crb(c,2)) { goto L_801B9A00; } // 801B99C4
  c->r[3]=0u+0x802D0000u; // 801B99C8
  c->r[3]=c->r[3]+0x000023D8u; // 801B99CC
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801B99D0
  cmps(c,0,(int32_t)c->r[12],0); // 801B99D4
  if (crb(c,2)) { goto L_801B9B5C; } // 801B99D8
  cmps(c,0,(int32_t)c->r[30],0); // 801B99DC
  if (crb(c,2)) { goto L_801B9B5C; } // 801B99E0
  c->r[6]=c->r[30]|c->r[30]; // 801B99E4
  c->r[3]=c->r[31]+0x0000001Cu; // 801B99E8
  c->r[4]=c->r[31]+0x00000022u; // 801B99EC
  c->r[5]=c->r[31]+0x00000035u; // 801B99F0
  c->ctr=c->r[12]; // 801B99F4
  if (true) { c->lr=0x801B99FCu; dispatch(c,c->ctr); } // 801B99F8
  goto L_801B9B5C; // 801B99FC
L_801B9A00:;
  cmpu(c,0,c->r[30],0x0000000Cu); // 801B9A00
  if (!crb(c,2)) { goto L_801B9A1C; } // 801B9A04
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B9A08
  c->r[0]=rotl(c->r[0],0)&0x00000006u; // 801B9A0C
  cmps(c,0,(int32_t)c->r[0],6); // 801B9A10
  if (!crb(c,2)) { goto L_801B9A1C; } // 801B9A14
  c->r[30]=0u+0x00000000u; // 801B9A18
L_801B9A1C:;
  c->r[3]=0u+0x802D0000u; // 801B9A1C
  c->r[3]=c->r[3]+0x000023D8u; // 801B9A20
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801B9A24
  cmps(c,0,(int32_t)c->r[12],0); // 801B9A28
  if (crb(c,2)) { goto L_801B9A48; } // 801B9A2C
  c->r[6]=c->r[30]|c->r[30]; // 801B9A30
  c->r[3]=c->r[31]+0x0000001Cu; // 801B9A34
  c->r[4]=c->r[31]+0x00000022u; // 801B9A38
  c->r[5]=c->r[31]+0x00000035u; // 801B9A3C
  c->ctr=c->r[12]; // 801B9A40
  if (true) { c->lr=0x801B9A48u; dispatch(c,c->ctr); } // 801B9A44
L_801B9A48:;
  c->r[29]=0u+0x00000000u; // 801B9A48
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801B9A4C
  c->r[3]=R8(c->r[31]+0x00000081u); // 801B9A50
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801B9A54
  if (crb(c,2)) { goto L_801B9A78; } // 801B9A58
  c->r[0]=0u+0xFFFFFFAFu; // 801B9A5C
  c->r[4]=0u+0x00000013u; // 801B9A60
  c->r[0]=c->r[3]&c->r[0]; // 801B9A64
  W8(c->r[31]+0x00000081u,c->r[0]); // 801B9A68
  c->r[3]=R16(c->r[31]+0x00000018u); // 801B9A6C
  c->lr=0x801B9A74u; f_801BD984(c); // 801B9A70
  goto L_801B9B5C; // 801B9A74
L_801B9A78:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B9A78
  if (crb(c,2)) { goto L_801B9AE4; } // 801B9A7C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B9A80
  cmps(c,0,(int32_t)c->r[0],0); // 801B9A84
  if (crb(c,2)) { goto L_801B9AD4; } // 801B9A88
  c->r[0]=R8(c->r[31]+0x00000080u); // 801B9A8C
  cmps(c,0,(int32_t)c->r[0],0); // 801B9A90
  if (crb(c,2)) { goto L_801B9AB4; } // 801B9A94
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B9A98
  cmps(c,0,(int32_t)c->r[3],0); // 801B9A9C
  if (crb(c,2)) { goto L_801B9AB4; } // 801B9AA0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B9AA4
  cmpu(c,0,c->r[0],0x00000003u); // 801B9AA8
  if (!crb(c,2)) { goto L_801B9AB4; } // 801B9AAC
  W32(c->r[3]+0x00000004u,c->r[29]); // 801B9AB0
L_801B9AB4:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B9AB4
  c->r[3]=c->r[31]+0x0000001Cu; // 801B9AB8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B9ABC
  c->r[5]=0u+0x0000000Au; // 801B9AC0
  c->ctr=c->r[12]; // 801B9AC4
  if (true) { c->lr=0x801B9ACCu; dispatch(c,c->ctr); } // 801B9AC8
  c->r[0]=0u+0x00000000u; // 801B9ACC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B9AD0
L_801B9AD4:;
  c->r[3]=R16(c->r[31]+0x00000018u); // 801B9AD4
  c->r[4]=0u+0x00000005u; // 801B9AD8
  c->lr=0x801B9AE0u; f_801BD984(c); // 801B9ADC
  goto L_801B9B5C; // 801B9AE0
L_801B9AE4:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B9AE4
  c->r[3]=c->r[31]|c->r[31]; // 801B9AE8
  c->r[0]=c->r[0]|0x00000002u; // 801B9AEC
  W8(c->r[31]+0x00000076u,c->r[0]); // 801B9AF0
  c->lr=0x801B9AF8u; f_801BAB60(c); // 801B9AF4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801B9AF8
  c->r[4]=c->r[3]|c->r[3]; // 801B9AFC
  cmpu(c,0,c->r[0],0x00000001u); // 801B9B00
  if (crb(c,2)) { goto L_801B9B5C; } // 801B9B04
  c->r[0]=R32(c->r[31]+0x00000004u); // 801B9B08
  cmps(c,0,(int32_t)c->r[0],0); // 801B9B0C
  if (crb(c,2)) { goto L_801B9B5C; } // 801B9B10
  c->r[0]=R8(c->r[31]+0x00000080u); // 801B9B14
  cmps(c,0,(int32_t)c->r[0],0); // 801B9B18
  if (crb(c,2)) { goto L_801B9B3C; } // 801B9B1C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B9B20
  cmps(c,0,(int32_t)c->r[3],0); // 801B9B24
  if (crb(c,2)) { goto L_801B9B3C; } // 801B9B28
  c->r[0]=R32(c->r[3]+0x00000000u); // 801B9B2C
  cmpu(c,0,c->r[0],0x00000003u); // 801B9B30
  if (!crb(c,2)) { goto L_801B9B3C; } // 801B9B34
  W32(c->r[3]+0x00000004u,c->r[29]); // 801B9B38
L_801B9B3C:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801B9B3C
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801B9B40
  c->r[3]=c->r[31]+0x0000001Cu; // 801B9B44
  c->r[4]=R32(c->r[31]+0x00000008u); // 801B9B48
  c->ctr=c->r[12]; // 801B9B4C
  if (true) { c->lr=0x801B9B54u; dispatch(c,c->ctr); } // 801B9B50
  c->r[0]=0u+0x00000000u; // 801B9B54
  W32(c->r[31]+0x00000004u,c->r[0]); // 801B9B58
L_801B9B5C:;
  c->r[11]=c->r[1]+0x00000020u; // 801B9B5C
  c->lr=0x801B9B64u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B9B60
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9B64
  c->lr=c->r[0]; // 801B9B68
  c->r[1]=c->r[1]+0x00000020u; // 801B9B6C
  return; // 801B9B70
}

// btm_sec_mkey_comp_event
void f_801B9B74(Ctx* __restrict c) {
  trace_call(0x801B9B74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9B74
  c->r[0]=c->lr; // 801B9B78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9B7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B9B80
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B9B84
  c->r[30]=c->r[5]|c->r[5]; // 801B9B88
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B9B8C
  c->r[29]=c->r[4]|c->r[4]; // 801B9B90
  c->lr=0x801B9B98u; f_801B2E58(c); // 801B9B94
  c->r[4]=0u+0x802D0000u; // 801B9B98
  c->r[7]=R8(c->r[2]+0xFFFFAE58u); // 801B9B9C
  c->r[4]=c->r[4]+0x000023D8u; // 801B9BA0
  c->r[6]=R8(c->r[2]+0xFFFFAE59u); // 801B9BA4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B9BA8
  c->r[31]=c->r[3]|c->r[3]; // 801B9BAC
  c->r[5]=R8(c->r[2]+0xFFFFAE5Au); // 801B9BB0
  c->r[4]=R8(c->r[2]+0xFFFFAE5Bu); // 801B9BB4
  cmpu(c,0,c->r[0],0x00000004u); // 801B9BB8
  c->r[3]=R8(c->r[2]+0xFFFFAE5Cu); // 801B9BBC
  c->r[0]=R8(c->r[2]+0xFFFFAE5Du); // 801B9BC0
  W8(c->r[1]+0x00000008u,c->r[7]); // 801B9BC4
  W8(c->r[1]+0x00000009u,c->r[6]); // 801B9BC8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801B9BCC
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 801B9BD0
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801B9BD4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801B9BD8
  if (crb(c,0)) { goto L_801B9C0C; } // 801B9BDC
  cmps(c,0,(int32_t)c->r[31],0); // 801B9BE0
  c->r[3]=0u+0x000D0000u; // 801B9BE4
  c->r[4]=0u+0x80240000u; // 801B9BE8
  c->r[5]=c->r[29]|c->r[29]; // 801B9BEC
  c->r[3]=c->r[3]+0x00000003u; // 801B9BF0
  c->r[4]=c->r[4]+0x00006068u; // 801B9BF4
  if (crb(c,2)) { goto L_801B9C04; } // 801B9BF8
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801B9BFC
  goto L_801B9C08; // 801B9C00
L_801B9C04:;
  c->r[6]=0u+0x00000000u; // 801B9C04
L_801B9C08:;
  c->lr=0x801B9C0Cu; f_801AA800(c); // 801B9C08
L_801B9C0C:;
  c->r[3]=0u+0x802D0000u; // 801B9C0C
  c->r[3]=c->r[3]+0x000023D8u; // 801B9C10
  c->r[12]=R32(c->r[3]+0x000027B0u); // 801B9C14
  cmps(c,0,(int32_t)c->r[12],0); // 801B9C18
  if (crb(c,2)) { goto L_801B9C54; } // 801B9C1C
  cmps(c,0,(int32_t)c->r[31],0); // 801B9C20
  if (!crb(c,2)) { goto L_801B9C40; } // 801B9C24
  c->r[4]=c->r[29]|c->r[29]; // 801B9C28
  c->r[5]=c->r[30]|c->r[30]; // 801B9C2C
  c->r[3]=c->r[1]+0x00000008u; // 801B9C30
  c->ctr=c->r[12]; // 801B9C34
  if (true) { c->lr=0x801B9C3Cu; dispatch(c,c->ctr); } // 801B9C38
  goto L_801B9C54; // 801B9C3C
L_801B9C40:;
  c->r[4]=c->r[29]|c->r[29]; // 801B9C40
  c->r[5]=c->r[30]|c->r[30]; // 801B9C44
  c->r[3]=c->r[31]+0x0000001Cu; // 801B9C48
  c->ctr=c->r[12]; // 801B9C4C
  if (true) { c->lr=0x801B9C54u; dispatch(c,c->ctr); } // 801B9C50
L_801B9C54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B9C54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B9C58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B9C5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B9C60
  c->lr=c->r[0]; // 801B9C64
  c->r[1]=c->r[1]+0x00000020u; // 801B9C68
  return; // 801B9C6C
}

// btm_sec_encrypt_change
void f_801B9C70(Ctx* __restrict c) {
  trace_call(0x801B9C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9C70
  c->r[0]=c->lr; // 801B9C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9C78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B9C7C
  c->r[31]=c->r[4]|c->r[4]; // 801B9C80
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B9C84
  c->lr=0x801B9C8Cu; f_801B2E58(c); // 801B9C88
  c->r[4]=0u+0x802D0000u; // 801B9C8C
  c->r[30]=c->r[3]|c->r[3]; // 801B9C90
  c->r[4]=c->r[4]+0x000023D8u; // 801B9C94
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B9C98
  cmpu(c,0,c->r[0],0x00000004u); // 801B9C9C
  if (crb(c,0)) { goto L_801B9CD0; } // 801B9CA0
  cmps(c,0,(int32_t)c->r[30],0); // 801B9CA4
  c->r[3]=0u+0x000D0000u; // 801B9CA8
  c->r[4]=0u+0x80240000u; // 801B9CAC
  c->r[5]=c->r[31]|c->r[31]; // 801B9CB0
  c->r[3]=c->r[3]+0x00000003u; // 801B9CB4
  c->r[4]=c->r[4]+0x00006098u; // 801B9CB8
  if (crb(c,2)) { goto L_801B9CC8; } // 801B9CBC
  c->r[6]=R8(c->r[30]+0x0000007Fu); // 801B9CC0
  goto L_801B9CCC; // 801B9CC4
L_801B9CC8:;
  c->r[6]=0u+0x00000000u; // 801B9CC8
L_801B9CCC:;
  c->lr=0x801B9CD0u; f_801AA800(c); // 801B9CCC
L_801B9CD0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801B9CD0
  if (crb(c,2)) { goto L_801B9D94; } // 801B9CD4
  cmpu(c,0,c->r[31],0x00000023u); // 801B9CD8
  if (!crb(c,2)) { goto L_801B9D0C; } // 801B9CDC
  c->r[7]=0u+0x802D0000u; // 801B9CE0
  c->r[6]=0u+0x801C0000u; // 801B9CE4
  c->r[7]=c->r[7]+0x000023D8u; // 801B9CE8
  c->r[4]=0u+0x00000016u; // 801B9CEC
  c->r[6]=c->r[6]+0xFFFFB05Cu; // 801B9CF0
  W32(c->r[7]+0x00001938u,c->r[30]); // 801B9CF4
  c->r[3]=c->r[7]+0x0000195Cu; // 801B9CF8
  c->r[5]=0u+0x00000001u; // 801B9CFC
  W32(c->r[7]+0x0000196Cu,c->r[6]); // 801B9D00
  c->lr=0x801B9D08u; f_801AADD0(c); // 801B9D04
  goto L_801B9D94; // 801B9D08
L_801B9D0C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B9D0C
  if (crb(c,2)) { goto L_801B9D40; } // 801B9D10
  c->r[12]=R32(c->r[30]+0x00000004u); // 801B9D14
  cmps(c,0,(int32_t)c->r[12],0); // 801B9D18
  if (crb(c,2)) { goto L_801B9D94; } // 801B9D1C
  c->r[3]=c->r[30]+0x0000001Cu; // 801B9D20
  c->r[4]=R32(c->r[30]+0x00000008u); // 801B9D24
  c->r[5]=0u+0x0000000Au; // 801B9D28
  c->ctr=c->r[12]; // 801B9D2C
  if (true) { c->lr=0x801B9D34u; dispatch(c,c->ctr); } // 801B9D30
  c->r[0]=0u+0x00000000u; // 801B9D34
  W32(c->r[30]+0x00000004u,c->r[0]); // 801B9D38
  goto L_801B9D94; // 801B9D3C
L_801B9D40:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801B9D40
  c->r[0]=c->r[0]|0x00000006u; // 801B9D44
  W8(c->r[30]+0x00000076u,c->r[0]); // 801B9D48
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 801B9D4C
  cmpu(c,0,c->r[0],0x00000002u); // 801B9D50
  if (!crb(c,2)) { goto L_801B9D94; } // 801B9D54
  c->r[31]=0u+0x00000000u; // 801B9D58
  c->r[3]=c->r[30]|c->r[30]; // 801B9D5C
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 801B9D60
  c->lr=0x801B9D68u; f_801BAB60(c); // 801B9D64
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801B9D68
  cmpu(c,0,c->r[5],0x00000001u); // 801B9D6C
  if (crb(c,2)) { goto L_801B9D94; } // 801B9D70
  c->r[12]=R32(c->r[30]+0x00000004u); // 801B9D74
  cmps(c,0,(int32_t)c->r[12],0); // 801B9D78
  if (crb(c,2)) { goto L_801B9D94; } // 801B9D7C
  c->r[3]=c->r[30]+0x0000001Cu; // 801B9D80
  c->r[4]=R32(c->r[30]+0x00000008u); // 801B9D84
  c->ctr=c->r[12]; // 801B9D88
  if (true) { c->lr=0x801B9D90u; dispatch(c,c->ctr); } // 801B9D8C
  W32(c->r[30]+0x00000004u,c->r[31]); // 801B9D90
L_801B9D94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B9D98
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B9D9C
  c->lr=c->r[0]; // 801B9DA0
  c->r[1]=c->r[1]+0x00000010u; // 801B9DA4
  return; // 801B9DA8
}

// btm_sec_is_bonding
void f_801B9DAC(Ctx* __restrict c) {
  trace_call(0x801B9DACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9DAC
  c->r[0]=c->lr; // 801B9DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B9DB4
  c->lr=0x801B9DBCu; f_801B2E58(c); // 801B9DB8
  cmps(c,0,(int32_t)c->r[3],0); // 801B9DBC
  if (crb(c,2)) { goto L_801B9DD8; } // 801B9DC0
  c->r[0]=R8(c->r[3]+0x00000081u); // 801B9DC4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B9DC8
  if (crb(c,2)) { goto L_801B9DD8; } // 801B9DCC
  c->r[3]=0u+0x00000001u; // 801B9DD0
  goto L_801B9DDC; // 801B9DD4
L_801B9DD8:;
  c->r[3]=0u+0x00000000u; // 801B9DD8
L_801B9DDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B9DDC
  c->lr=c->r[0]; // 801B9DE0
  c->r[1]=c->r[1]+0x00000010u; // 801B9DE4
  return; // 801B9DE8
}

// btm_sec_connected
void f_801B9DEC(Ctx* __restrict c) {
  trace_call(0x801B9DECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B9DEC
  c->r[0]=c->lr; // 801B9DF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B9DF4
  c->r[11]=c->r[1]+0x00000020u; // 801B9DF8
  c->lr=0x801B9E00u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B9DFC
  c->r[27]=c->r[3]|c->r[3]; // 801B9E00
  c->r[28]=c->r[4]|c->r[4]; // 801B9E04
  c->r[29]=c->r[5]|c->r[5]; // 801B9E08
  c->r[30]=c->r[6]|c->r[6]; // 801B9E0C
  c->lr=0x801B9E14u; f_801B2F10(c); // 801B9E10
  c->r[4]=0u+0x802D0000u; // 801B9E14
  c->r[31]=c->r[3]|c->r[3]; // 801B9E18
  c->r[4]=c->r[4]+0x000023D8u; // 801B9E1C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B9E20
  cmpu(c,0,c->r[0],0x00000004u); // 801B9E24
  if (crb(c,0)) { goto L_801B9E4C; } // 801B9E28
  c->r[3]=0u+0x000D0000u; // 801B9E2C
  c->r[4]=0u+0x80240000u; // 801B9E30
  c->r[5]=c->r[28]|c->r[28]; // 801B9E34
  c->r[6]=c->r[29]|c->r[29]; // 801B9E38
  c->r[7]=c->r[30]|c->r[30]; // 801B9E3C
  c->r[3]=c->r[3]+0x00000003u; // 801B9E40
  c->r[4]=c->r[4]+0x000060CCu; // 801B9E44
  c->lr=0x801B9E4Cu; f_801AA820(c); // 801B9E48
L_801B9E4C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B9E4C
  if (!crb(c,2)) { goto L_801B9E78; } // 801B9E50
  cmps(c,0,(int32_t)c->r[29],0); // 801B9E54
  if (!crb(c,2)) { goto L_801BA254; } // 801B9E58
  c->r[3]=c->r[27]|c->r[27]; // 801B9E5C
  c->lr=0x801B9E64u; f_801B2D38(c); // 801B9E60
  cmps(c,0,(int32_t)c->r[3],0); // 801B9E64
  c->r[31]=c->r[3]|c->r[3]; // 801B9E68
  if (!crb(c,2)) { goto L_801B9E98; } // 801B9E6C
  goto L_801BA254; // 801B9E70
  goto L_801BA254; // 801B9E74
L_801B9E78:;
  c->r[4]=0u+0x802D0000u; // 801B9E78
  c->r[0]=0u+0x00000001u; // 801B9E7C
  c->r[4]=c->r[4]+0x000023D8u; // 801B9E80
  c->r[3]=R32(c->r[4]+0x00001974u); // 801B9E84
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801B9E88
  c->r[3]=c->r[3]+0x00000001u; // 801B9E8C
  W32(c->r[4]+0x00001974u,c->r[3]); // 801B9E90
  W8(c->r[31]+0x00000085u,c->r[0]); // 801B9E94
L_801B9E98:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801B9E98
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B9E9C
  if (crb(c,2)) { goto L_801B9F30; } // 801B9EA0
  c->r[4]=0u+0x802D0000u; // 801B9EA4
  c->r[4]=c->r[4]+0x000023D8u; // 801B9EA8
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801B9EAC
  cmps(c,0,(int32_t)c->r[0],0); // 801B9EB0
  if (crb(c,2)) { goto L_801B9F0C; } // 801B9EB4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801B9EB8
  c->r[3]=0u+0x00000000u; // 801B9EBC
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801B9EC0
  cmpu(c,0,c->r[0],0x00000005u); // 801B9EC4
  if (crb(c,0)) { goto L_801B9EF0; } // 801B9EC8
  c->r[3]=R8(c->r[4]+0x00001978u); // 801B9ECC
  c->r[4]=0u+0x80240000u; // 801B9ED0
  c->r[5]=0u+0x000D0000u; // 801B9ED4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801B9ED8
  c->r[4]=c->r[4]+0x00005D24u; // 801B9EDC
  c->r[0]=cntlz(c->r[0]); // 801B9EE0
  c->r[3]=c->r[5]+0x00000004u; // 801B9EE4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B9EE8
  c->lr=0x801B9EF0u; f_801AA7E0(c); // 801B9EEC
L_801B9EF0:;
  c->r[3]=0u+0x802D0000u; // 801B9EF0
  c->r[3]=c->r[3]+0x000023D8u; // 801B9EF4
  c->r[3]=R8(c->r[3]+0x00001978u); // 801B9EF8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801B9EFC
  c->r[0]=cntlz(c->r[0]); // 801B9F00
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801B9F04
  c->lr=0x801B9F0Cu; f_801BF2EC(c); // 801B9F08
L_801B9F0C:;
  c->r[4]=0u+0x802D0000u; // 801B9F0C
  c->r[4]=c->r[4]+0x000023D8u; // 801B9F10
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801B9F14
  cmps(c,0,(int32_t)c->r[0],0); // 801B9F18
  if (crb(c,2)) { goto L_801B9F30; } // 801B9F1C
  c->r[0]=0u+0x00000000u; // 801B9F20
  c->r[3]=R8(c->r[4]+0x00000020u); // 801B9F24
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801B9F28
  c->lr=0x801B9F30u; f_801BED78(c); // 801B9F2C
L_801B9F30:;
  cmps(c,0,(int32_t)c->r[29],0); // 801B9F30
  if (crb(c,2)) { goto L_801BA0A0; } // 801B9F34
  cmpu(c,0,c->r[29],0x00000005u); // 801B9F38
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F3C
  cmpu(c,0,c->r[29],0x00000006u); // 801B9F40
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F44
  cmpu(c,0,c->r[29],0x0000000Eu); // 801B9F48
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F4C
  cmpu(c,0,c->r[29],0x00000018u); // 801B9F50
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F54
  cmpu(c,0,c->r[29],0x00000026u); // 801B9F58
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F5C
  cmpu(c,0,c->r[29],0x00000029u); // 801B9F60
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F64
  cmpu(c,0,c->r[29],0x00000025u); // 801B9F68
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F6C
  cmpu(c,0,c->r[29],0x00000017u); // 801B9F70
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F74
  cmpu(c,0,c->r[29],0x00000022u); // 801B9F78
  if (crb(c,2)) { goto L_801B9F8C; } // 801B9F7C
  c->r[0]=R8(c->r[31]+0x00000081u); // 801B9F80
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801B9F84
  if (crb(c,2)) { goto L_801BA018; } // 801B9F88
L_801B9F8C:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 801B9F8C
  c->r[0]=0u+0xFFFFFFAFu; // 801B9F90
  c->r[28]=0u+0x802D0000u; // 801B9F94
  c->r[0]=c->r[3]&c->r[0]; // 801B9F98
  W8(c->r[31]+0x00000081u,c->r[0]); // 801B9F9C
  c->r[28]=c->r[28]+0x000023D8u; // 801B9FA0
  c->r[0]=R8(c->r[31]+0x00000076u); // 801B9FA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801B9FA8
  W8(c->r[31]+0x00000076u,c->r[0]); // 801B9FAC
  c->r[0]=R32(c->r[28]+0x0000194Cu); // 801B9FB0
  cmps(c,0,(int32_t)c->r[0],0); // 801B9FB4
  if (crb(c,2)) { goto L_801B9FD0; } // 801B9FB8
  c->r[3]=c->r[28]+0x0000193Cu; // 801B9FBC
  c->lr=0x801B9FC4u; f_801AAE40(c); // 801B9FC0
  c->r[0]=0u+0x00000000u; // 801B9FC4
  c->r[29]=0u+0x0000000Eu; // 801B9FC8
  W32(c->r[28]+0x0000194Cu,c->r[0]); // 801B9FCC
L_801B9FD0:;
  c->r[3]=0u+0x802D0000u; // 801B9FD0
  c->r[3]=c->r[3]+0x000023D8u; // 801B9FD4
  c->r[0]=R8(c->r[3]+0x000027BFu); // 801B9FD8
  cmpu(c,0,c->r[0],0x0000000Eu); // 801B9FDC
  if (!crb(c,2)) { goto L_801B9FE8; } // 801B9FE0
  c->r[29]=0u+0x0000000Eu; // 801B9FE4
L_801B9FE8:;
  c->r[3]=0u+0x802D0000u; // 801B9FE8
  c->r[3]=c->r[3]+0x000023D8u; // 801B9FEC
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801B9FF0
  cmps(c,0,(int32_t)c->r[12],0); // 801B9FF4
  if (crb(c,2)) { goto L_801BA254; } // 801B9FF8
  c->r[6]=c->r[29]|c->r[29]; // 801B9FFC
  c->r[3]=c->r[31]+0x0000001Cu; // 801BA000
  c->r[4]=c->r[31]+0x00000022u; // 801BA004
  c->r[5]=c->r[31]+0x00000035u; // 801BA008
  c->ctr=c->r[12]; // 801BA00C
  if (true) { c->lr=0x801BA014u; dispatch(c,c->ctr); } // 801BA010
  goto L_801BA254; // 801BA014
L_801BA018:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BA018
  cmps(c,0,(int32_t)c->r[0],0); // 801BA01C
  if (crb(c,2)) { goto L_801BA254; } // 801BA020
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BA024
  cmps(c,0,(int32_t)c->r[0],0); // 801BA028
  if (crb(c,2)) { goto L_801BA050; } // 801BA02C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BA030
  cmps(c,0,(int32_t)c->r[3],0); // 801BA034
  if (crb(c,2)) { goto L_801BA050; } // 801BA038
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BA03C
  cmpu(c,0,c->r[0],0x00000003u); // 801BA040
  if (!crb(c,2)) { goto L_801BA050; } // 801BA044
  c->r[0]=0u+0x00000000u; // 801BA048
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BA04C
L_801BA050:;
  cmpu(c,0,c->r[29],0x00000008u); // 801BA050
  if (crb(c,2)) { goto L_801BA068; } // 801BA054
  cmpu(c,0,c->r[29],0x0000001Fu); // 801BA058
  if (crb(c,2)) { goto L_801BA068; } // 801BA05C
  cmpu(c,0,c->r[29],0x00000004u); // 801BA060
  if (!crb(c,2)) { goto L_801BA084; } // 801BA064
L_801BA068:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BA068
  c->r[3]=c->r[31]+0x0000001Cu; // 801BA06C
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BA070
  c->r[5]=0u+0x00000008u; // 801BA074
  c->ctr=c->r[12]; // 801BA078
  if (true) { c->lr=0x801BA080u; dispatch(c,c->ctr); } // 801BA07C
  goto L_801BA254; // 801BA080
L_801BA084:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BA084
  c->r[3]=c->r[31]+0x0000001Cu; // 801BA088
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BA08C
  c->r[5]=0u+0x0000000Au; // 801BA090
  c->ctr=c->r[12]; // 801BA094
  if (true) { c->lr=0x801BA09Cu; dispatch(c,c->ctr); } // 801BA098
  goto L_801BA254; // 801BA09C
L_801BA0A0:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BA0A0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BA0A4
  if (crb(c,2)) { goto L_801BA180; } // 801BA0A8
  c->r[0]=R8(c->r[31]+0x00000082u); // 801BA0AC
  cmps(c,0,(int32_t)c->r[0],0); // 801BA0B0
  if (crb(c,2)) { goto L_801BA180; } // 801BA0B4
  c->r[0]=0u+0x00000000u; // 801BA0B8
  c->r[3]=0u+0x802D0000u; // 801BA0BC
  W8(c->r[31]+0x00000082u,c->r[0]); // 801BA0C0
  c->r[3]=c->r[3]+0x000023D8u; // 801BA0C4
  c->r[12]=R32(c->r[3]+0x00001914u); // 801BA0C8
  cmps(c,0,(int32_t)c->r[12],0); // 801BA0CC
  if (crb(c,2)) { goto L_801BA0F0; } // 801BA0D0
  c->r[3]=c->r[31]+0x0000001Cu; // 801BA0D4
  c->r[4]=c->r[31]+0x00000022u; // 801BA0D8
  c->r[5]=c->r[31]+0x00000035u; // 801BA0DC
  c->r[6]=c->r[31]+0x00000025u; // 801BA0E0
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BA0E4
  c->ctr=c->r[12]; // 801BA0E8
  if (true) { c->lr=0x801BA0F0u; dispatch(c,c->ctr); } // 801BA0EC
L_801BA0F0:;
  c->r[29]=0u+0x802D0000u; // 801BA0F0
  c->r[30]=0u+0x00000000u; // 801BA0F4
  c->r[29]=c->r[29]+0x000023D8u; // 801BA0F8
L_801BA0FC:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801BA0FC
  cmps(c,0,(int32_t)c->r[12],0); // 801BA100
  if (crb(c,2)) { goto L_801BA124; } // 801BA104
  c->r[3]=c->r[31]+0x0000001Cu; // 801BA108
  c->r[4]=c->r[31]+0x00000022u; // 801BA10C
  c->r[5]=c->r[31]+0x00000035u; // 801BA110
  c->r[6]=c->r[31]+0x00000025u; // 801BA114
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BA118
  c->ctr=c->r[12]; // 801BA11C
  if (true) { c->lr=0x801BA124u; dispatch(c,c->ctr); } // 801BA120
L_801BA124:;
  c->r[30]=c->r[30]+0x00000001u; // 801BA124
  c->r[29]=c->r[29]+0x00000004u; // 801BA128
  cmps(c,0,(int32_t)c->r[30],2); // 801BA12C
  if (crb(c,0)) { IRQCHK(c); goto L_801BA0FC; } // 801BA130
  c->r[3]=0u+0x802D0000u; // 801BA134
  c->r[3]=c->r[3]+0x000023D8u; // 801BA138
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801BA13C
  cmps(c,0,(int32_t)c->r[12],0); // 801BA140
  if (crb(c,2)) { goto L_801BA160; } // 801BA144
  c->r[3]=c->r[31]+0x0000001Cu; // 801BA148
  c->r[4]=c->r[31]+0x00000022u; // 801BA14C
  c->r[5]=c->r[31]+0x00000035u; // 801BA150
  c->r[6]=0u+0x00000000u; // 801BA154
  c->ctr=c->r[12]; // 801BA158
  if (true) { c->lr=0x801BA160u; dispatch(c,c->ctr); } // 801BA15C
L_801BA160:;
  c->r[5]=R8(c->r[31]+0x00000081u); // 801BA160
  c->r[0]=0u+0xFFFFFFAFu; // 801BA164
  c->r[3]=c->r[28]|c->r[28]; // 801BA168
  c->r[4]=0u+0x00000013u; // 801BA16C
  c->r[0]=c->r[5]&c->r[0]; // 801BA170
  W8(c->r[31]+0x00000081u,c->r[0]); // 801BA174
  c->lr=0x801BA17Cu; f_801BD984(c); // 801BA178
  goto L_801BA254; // 801BA17C
L_801BA180:;
  W16(c->r[31]+0x00000018u,c->r[28]); // 801BA180
  cmps(c,0,(int32_t)c->r[30],0); // 801BA184
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BA188
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801BA18C
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BA190
  if (crb(c,2)) { goto L_801BA1A4; } // 801BA194
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BA198
  c->r[0]=c->r[0]|0x00000006u; // 801BA19C
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BA1A0
L_801BA1A4:;
  c->r[3]=0u+0x802D0000u; // 801BA1A4
  c->r[3]=c->r[3]+0x000023D8u; // 801BA1A8
  c->r[0]=R8(c->r[3]+0x00001978u); // 801BA1AC
  cmpu(c,0,c->r[0],0x00000003u); // 801BA1B0
  if (!crb(c,2)) { goto L_801BA1C4; } // 801BA1B4
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BA1B8
  c->r[0]=c->r[0]|0x00000002u; // 801BA1BC
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BA1C0
L_801BA1C4:;
  c->r[0]=0u+0x00000000u; // 801BA1C4
  W8(c->r[31]+0x00000084u,c->r[0]); // 801BA1C8
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BA1CC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BA1D0
  if (crb(c,2)) { goto L_801BA1E4; } // 801BA1D4
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BA1D8
  cmps(c,0,(int32_t)c->r[0],0); // 801BA1DC
  if (crb(c,2)) { goto L_801BA254; } // 801BA1E0
L_801BA1E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801BA1E4
  c->lr=0x801BA1ECu; f_801BAB60(c); // 801BA1E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BA1EC
  c->r[4]=c->r[3]|c->r[3]; // 801BA1F0
  cmpu(c,0,c->r[0],0x00000001u); // 801BA1F4
  if (crb(c,2)) { goto L_801BA254; } // 801BA1F8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801BA1FC
  cmps(c,0,(int32_t)c->r[0],0); // 801BA200
  if (crb(c,2)) { goto L_801BA254; } // 801BA204
  c->r[0]=R8(c->r[31]+0x00000080u); // 801BA208
  cmps(c,0,(int32_t)c->r[0],0); // 801BA20C
  if (crb(c,2)) { goto L_801BA234; } // 801BA210
  c->r[3]=R32(c->r[31]+0x00000000u); // 801BA214
  cmps(c,0,(int32_t)c->r[3],0); // 801BA218
  if (crb(c,2)) { goto L_801BA234; } // 801BA21C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801BA220
  cmpu(c,0,c->r[0],0x00000003u); // 801BA224
  if (!crb(c,2)) { goto L_801BA234; } // 801BA228
  c->r[0]=0u+0x00000000u; // 801BA22C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BA230
L_801BA234:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BA234
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801BA238
  c->r[3]=c->r[31]+0x0000001Cu; // 801BA23C
  c->r[4]=R32(c->r[31]+0x00000008u); // 801BA240
  c->ctr=c->r[12]; // 801BA244
  if (true) { c->lr=0x801BA24Cu; dispatch(c,c->ctr); } // 801BA248
  c->r[0]=0u+0x00000000u; // 801BA24C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BA250
L_801BA254:;
  c->r[11]=c->r[1]+0x00000020u; // 801BA254
  c->lr=0x801BA25Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA258
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA25C
  c->lr=c->r[0]; // 801BA260
  c->r[1]=c->r[1]+0x00000020u; // 801BA264
  return; // 801BA268
}

// btm_sec_disconnect
void f_801BA26C(Ctx* __restrict c) {
  trace_call(0x801BA26Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA26C
  c->r[0]=c->lr; // 801BA270
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA274
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA278
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA27C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BA280
  c->r[29]=c->r[4]|c->r[4]; // 801BA284
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BA288
  c->r[28]=c->r[3]|c->r[3]; // 801BA28C
  c->lr=0x801BA294u; f_801B2E58(c); // 801BA290
  cmps(c,0,(int32_t)c->r[3],0); // 801BA294
  c->r[31]=c->r[3]|c->r[3]; // 801BA298
  if (!crb(c,2)) { goto L_801BA2A8; } // 801BA29C
  c->r[3]=0u+0x00000005u; // 801BA2A0
  goto L_801BA308; // 801BA2A4
L_801BA2A8:;
  c->r[0]=R8(c->r[3]+0x00000081u); // 801BA2A8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BA2AC
  if (crb(c,2)) { goto L_801BA2C8; } // 801BA2B0
  c->r[4]=0u+0x802D0000u; // 801BA2B4
  c->r[3]=0u+0x00000000u; // 801BA2B8
  c->r[4]=c->r[4]+0x000023D8u; // 801BA2BC
  W8(c->r[4]+0x0000197Eu,c->r[29]); // 801BA2C0
  goto L_801BA308; // 801BA2C4
L_801BA2C8:;
  c->r[30]=R8(c->r[3]+0x0000007Fu); // 801BA2C8
  cmpu(c,0,c->r[30],0x00000005u); // 801BA2CC
  if (!crb(c,2)) { goto L_801BA2DC; } // 801BA2D0
  c->r[3]=0u+0x00000001u; // 801BA2D4
  goto L_801BA308; // 801BA2D8
L_801BA2DC:;
  c->r[0]=0u+0x00000005u; // 801BA2DC
  c->r[4]=c->r[29]|c->r[29]; // 801BA2E0
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801BA2E4
  c->r[3]=c->r[28]|c->r[28]; // 801BA2E8
  c->lr=0x801BA2F0u; f_801BD984(c); // 801BA2EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BA2F0
  if (crb(c,2)) { goto L_801BA300; } // 801BA2F4
  c->r[3]=0u+0x00000001u; // 801BA2F8
  goto L_801BA308; // 801BA2FC
L_801BA300:;
  W8(c->r[31]+0x0000007Fu,c->r[30]); // 801BA300
  c->r[3]=0u+0x00000003u; // 801BA304
L_801BA308:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA308
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA30C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA310
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BA314
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BA318
  c->lr=c->r[0]; // 801BA31C
  c->r[1]=c->r[1]+0x00000020u; // 801BA320
  return; // 801BA324
}

// btm_sec_disconnected
void f_801BA328(Ctx* __restrict c) {
  trace_call(0x801BA328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA328
  c->r[0]=c->lr; // 801BA32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA334
  c->r[31]=c->r[4]|c->r[4]; // 801BA338
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BA33C
  c->lr=0x801BA344u; f_801B2E58(c); // 801BA340
  cmps(c,0,(int32_t)c->r[3],0); // 801BA344
  c->r[30]=c->r[3]|c->r[3]; // 801BA348
  if (crb(c,2)) { goto L_801BA44C; } // 801BA34C
  c->r[0]=R8(c->r[3]+0x00000081u); // 801BA350
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BA354
  if (crb(c,2)) { goto L_801BA3AC; } // 801BA358
  c->r[4]=0u+0x802D0000u; // 801BA35C
  c->r[4]=c->r[4]+0x000023D8u; // 801BA360
  c->r[12]=R32(c->r[4]+0x0000191Cu); // 801BA364
  cmps(c,0,(int32_t)c->r[12],0); // 801BA368
  if (crb(c,2)) { goto L_801BA3AC; } // 801BA36C
  cmpu(c,0,c->r[31],0x00000017u); // 801BA370
  if (!crb(c,2)) { goto L_801BA394; } // 801BA374
  c->r[4]=c->r[3]+0x00000022u; // 801BA378
  c->r[5]=c->r[3]+0x00000035u; // 801BA37C
  c->r[6]=0u+0x00000017u; // 801BA380
  c->ctr=c->r[12]; // 801BA384
  c->r[3]=c->r[3]+0x0000001Cu; // 801BA388
  if (true) { c->lr=0x801BA390u; dispatch(c,c->ctr); } // 801BA38C
  goto L_801BA3AC; // 801BA390
L_801BA394:;
  c->r[4]=c->r[3]+0x00000022u; // 801BA394
  c->r[5]=c->r[3]+0x00000035u; // 801BA398
  c->r[6]=0u+0x00000005u; // 801BA39C
  c->ctr=c->r[12]; // 801BA3A0
  c->r[3]=c->r[3]+0x0000001Cu; // 801BA3A4
  if (true) { c->lr=0x801BA3ACu; dispatch(c,c->ctr); } // 801BA3A8
L_801BA3AC:;
  c->r[31]=0u+0x802D0000u; // 801BA3AC
  c->r[31]=c->r[31]+0x000023D8u; // 801BA3B0
  c->r[0]=R32(c->r[31]+0x0000194Cu); // 801BA3B4
  cmps(c,0,(int32_t)c->r[0],0); // 801BA3B8
  if (crb(c,2)) { goto L_801BA41C; } // 801BA3BC
  c->r[3]=c->r[31]+0x00001954u; // 801BA3C0
  c->r[4]=c->r[30]+0x0000001Cu; // 801BA3C4
  c->r[5]=0u+0x00000006u; // 801BA3C8
  c->lr=0x801BA3D0u; f_801D8F78(c); // 801BA3CC
  cmps(c,0,(int32_t)c->r[3],0); // 801BA3D0
  if (!crb(c,2)) { goto L_801BA41C; } // 801BA3D4
  c->r[3]=c->r[31]+0x0000193Cu; // 801BA3D8
  c->lr=0x801BA3E0u; f_801AAE40(c); // 801BA3DC
  c->r[0]=0u+0x00000000u; // 801BA3E0
  c->r[3]=c->r[31]+0x00001954u; // 801BA3E4
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 801BA3E8
  c->r[4]=0u+0x000000FFu; // 801BA3EC
  c->r[5]=0u+0x00000006u; // 801BA3F0
  c->lr=0x801BA3F8u; f_800046B4(c); // 801BA3F4
  c->r[12]=R32(c->r[31]+0x0000191Cu); // 801BA3F8
  cmps(c,0,(int32_t)c->r[12],0); // 801BA3FC
  if (crb(c,2)) { goto L_801BA41C; } // 801BA400
  c->r[3]=c->r[30]+0x0000001Cu; // 801BA404
  c->r[4]=c->r[30]+0x00000022u; // 801BA408
  c->r[5]=c->r[30]+0x00000035u; // 801BA40C
  c->r[6]=0u+0x0000000Eu; // 801BA410
  c->ctr=c->r[12]; // 801BA414
  if (true) { c->lr=0x801BA41Cu; dispatch(c,c->ctr); } // 801BA418
L_801BA41C:;
  c->r[4]=0u+0x00010000u; // 801BA41C
  c->r[3]=0u+0x00000000u; // 801BA420
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801BA424
  W16(c->r[30]+0x00000018u,c->r[0]); // 801BA428
  W8(c->r[30]+0x0000007Fu,c->r[3]); // 801BA42C
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BA430
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801BA434
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BA438
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BA43C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 801BA440
  W8(c->r[30]+0x00000081u,c->r[0]); // 801BA444
  W32(c->r[30]+0x00000004u,c->r[3]); // 801BA448
L_801BA44C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA44C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA450
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BA454
  c->lr=c->r[0]; // 801BA458
  c->r[1]=c->r[1]+0x00000010u; // 801BA45C
  return; // 801BA460
}

// btm_sec_link_key_notification
void f_801BA464(Ctx* __restrict c) {
  trace_call(0x801BA464u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA464
  c->r[0]=c->lr; // 801BA468
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA46C
  c->r[11]=c->r[1]+0x00000020u; // 801BA470
  c->lr=0x801BA478u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA474
  c->r[29]=c->r[3]|c->r[3]; // 801BA478
  c->r[30]=c->r[4]|c->r[4]; // 801BA47C
  c->r[27]=c->r[5]|c->r[5]; // 801BA480
  c->lr=0x801BA488u; f_801B2F10(c); // 801BA484
  cmps(c,0,(int32_t)c->r[3],0); // 801BA488
  c->r[31]=c->r[3]|c->r[3]; // 801BA48C
  if (!crb(c,2)) { goto L_801BA4A8; } // 801BA490
  c->r[3]=c->r[29]|c->r[29]; // 801BA494
  c->lr=0x801BA49Cu; f_801B2D38(c); // 801BA498
  cmps(c,0,(int32_t)c->r[3],0); // 801BA49C
  c->r[31]=c->r[3]|c->r[3]; // 801BA4A0
  if (crb(c,2)) { goto L_801BA5F8; } // 801BA4A4
L_801BA4A8:;
  c->r[3]=0u+0x802D0000u; // 801BA4A8
  c->r[3]=c->r[3]+0x000023D8u; // 801BA4AC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA4B0
  cmpu(c,0,c->r[0],0x00000004u); // 801BA4B4
  if (crb(c,0)) { goto L_801BA4E8; } // 801BA4B8
  c->r[3]=0u+0x000D0000u; // 801BA4BC
  c->r[4]=0u+0x80240000u; // 801BA4C0
  c->r[5]=R8(c->r[29]+0x00000000u); // 801BA4C4
  c->r[3]=c->r[3]+0x00000003u; // 801BA4C8
  c->r[6]=R8(c->r[29]+0x00000001u); // 801BA4CC
  c->r[4]=c->r[4]+0x00006110u; // 801BA4D0
  c->r[7]=R8(c->r[29]+0x00000002u); // 801BA4D4
  c->r[8]=R8(c->r[29]+0x00000003u); // 801BA4D8
  c->r[9]=R8(c->r[29]+0x00000004u); // 801BA4DC
  c->r[10]=R8(c->r[29]+0x00000005u); // 801BA4E0
  c->lr=0x801BA4E8u; f_801AA880(c); // 801BA4E4
L_801BA4E8:;
  c->r[3]=0u+0x802D0000u; // 801BA4E8
  c->r[3]=c->r[3]+0x000023D8u; // 801BA4EC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA4F0
  cmpu(c,0,c->r[0],0x00000004u); // 801BA4F4
  if (crb(c,0)) { goto L_801BA514; } // 801BA4F8
  c->r[3]=0u+0x000D0000u; // 801BA4FC
  c->r[4]=0u+0x80240000u; // 801BA500
  c->r[5]=c->r[27]|c->r[27]; // 801BA504
  c->r[3]=c->r[3]+0x00000003u; // 801BA508
  c->r[4]=c->r[4]+0x00006154u; // 801BA50C
  c->lr=0x801BA514u; f_801AA7E0(c); // 801BA510
L_801BA514:;
  c->r[3]=0u+0x802D0000u; // 801BA514
  c->r[3]=c->r[3]+0x000023D8u; // 801BA518
  c->r[0]=R8(c->r[3]+0x00000636u); // 801BA51C
  cmpu(c,0,c->r[0],0x00000001u); // 801BA520
  if (!crb(c,0)) { goto L_801BA534; } // 801BA524
  c->r[0]=0u+0x000000FFu; // 801BA528
  W8(c->r[31]+0x00000083u,c->r[0]); // 801BA52C
  goto L_801BA538; // 801BA530
L_801BA534:;
  W8(c->r[31]+0x00000083u,c->r[27]); // 801BA534
L_801BA538:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BA538
  c->r[4]=c->r[30]|c->r[30]; // 801BA53C
  c->r[3]=c->r[31]+0x00000025u; // 801BA540
  c->r[5]=0u+0x00000010u; // 801BA544
  c->r[0]=c->r[0]|0x00000010u; // 801BA548
  W8(c->r[31]+0x00000076u,c->r[0]); // 801BA54C
  c->lr=0x801BA554u; f_80004364(c); // 801BA550
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BA554
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BA558
  if (crb(c,2)) { goto L_801BA578; } // 801BA55C
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BA560
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BA564
  if (crb(c,2)) { goto L_801BA584; } // 801BA568
  c->r[0]=R8(c->r[31]+0x00000085u); // 801BA56C
  cmps(c,0,(int32_t)c->r[0],0); // 801BA570
  if (!crb(c,2)) { goto L_801BA584; } // 801BA574
L_801BA578:;
  c->r[0]=0u+0x00000001u; // 801BA578
  W8(c->r[31]+0x00000082u,c->r[0]); // 801BA57C
  goto L_801BA5F8; // 801BA580
L_801BA584:;
  c->r[3]=0u+0x802D0000u; // 801BA584
  c->r[3]=c->r[3]+0x000023D8u; // 801BA588
  c->r[12]=R32(c->r[3]+0x00001914u); // 801BA58C
  cmps(c,0,(int32_t)c->r[12],0); // 801BA590
  if (crb(c,2)) { goto L_801BA5B4; } // 801BA594
  c->r[3]=c->r[29]|c->r[29]; // 801BA598
  c->r[6]=c->r[30]|c->r[30]; // 801BA59C
  c->r[4]=c->r[31]+0x00000022u; // 801BA5A0
  c->r[5]=c->r[31]+0x00000035u; // 801BA5A4
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BA5A8
  c->ctr=c->r[12]; // 801BA5AC
  if (true) { c->lr=0x801BA5B4u; dispatch(c,c->ctr); } // 801BA5B0
L_801BA5B4:;
  c->r[28]=0u+0x802D0000u; // 801BA5B4
  c->r[27]=0u+0x00000000u; // 801BA5B8
  c->r[28]=c->r[28]+0x000023D8u; // 801BA5BC
L_801BA5C0:;
  c->r[12]=R32(c->r[28]+0x00001924u); // 801BA5C0
  cmps(c,0,(int32_t)c->r[12],0); // 801BA5C4
  if (crb(c,2)) { goto L_801BA5E8; } // 801BA5C8
  c->r[3]=c->r[29]|c->r[29]; // 801BA5CC
  c->r[6]=c->r[30]|c->r[30]; // 801BA5D0
  c->r[4]=c->r[31]+0x00000022u; // 801BA5D4
  c->r[5]=c->r[31]+0x00000035u; // 801BA5D8
  c->r[7]=R8(c->r[31]+0x00000083u); // 801BA5DC
  c->ctr=c->r[12]; // 801BA5E0
  if (true) { c->lr=0x801BA5E8u; dispatch(c,c->ctr); } // 801BA5E4
L_801BA5E8:;
  c->r[27]=c->r[27]+0x00000001u; // 801BA5E8
  c->r[28]=c->r[28]+0x00000004u; // 801BA5EC
  cmps(c,0,(int32_t)c->r[27],2); // 801BA5F0
  if (crb(c,0)) { IRQCHK(c); goto L_801BA5C0; } // 801BA5F4
L_801BA5F8:;
  c->r[11]=c->r[1]+0x00000020u; // 801BA5F8
  c->lr=0x801BA600u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BA5FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA600
  c->lr=c->r[0]; // 801BA604
  c->r[1]=c->r[1]+0x00000020u; // 801BA608
  return; // 801BA60C
}

// btm_sec_link_key_request
void f_801BA610(Ctx* __restrict c) {
  trace_call(0x801BA610u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA610
  c->r[0]=c->lr; // 801BA614
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BA61C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BA620
  c->r[30]=c->r[3]|c->r[3]; // 801BA624
  c->lr=0x801BA62Cu; f_801B2F10(c); // 801BA628
  c->r[4]=0u+0x802D0000u; // 801BA62C
  c->r[31]=c->r[3]|c->r[3]; // 801BA630
  c->r[4]=c->r[4]+0x000023D8u; // 801BA634
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BA638
  cmpu(c,0,c->r[0],0x00000004u); // 801BA63C
  if (crb(c,0)) { goto L_801BA670; } // 801BA640
  c->r[3]=0u+0x000D0000u; // 801BA644
  c->r[4]=0u+0x80240000u; // 801BA648
  c->r[5]=R8(c->r[30]+0x00000000u); // 801BA64C
  c->r[3]=c->r[3]+0x00000003u; // 801BA650
  c->r[6]=R8(c->r[30]+0x00000001u); // 801BA654
  c->r[4]=c->r[4]+0x00006180u; // 801BA658
  c->r[7]=R8(c->r[30]+0x00000002u); // 801BA65C
  c->r[8]=R8(c->r[30]+0x00000003u); // 801BA660
  c->r[9]=R8(c->r[30]+0x00000004u); // 801BA664
  c->r[10]=R8(c->r[30]+0x00000005u); // 801BA668
  c->lr=0x801BA670u; f_801AA880(c); // 801BA66C
L_801BA670:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BA670
  if (crb(c,2)) { goto L_801BA694; } // 801BA674
  c->r[0]=R8(c->r[31]+0x00000076u); // 801BA678
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BA67C
  if (crb(c,2)) { goto L_801BA694; } // 801BA680
  c->r[3]=c->r[30]|c->r[30]; // 801BA684
  c->r[4]=c->r[31]+0x00000025u; // 801BA688
  c->lr=0x801BA690u; f_801BDB54(c); // 801BA68C
  goto L_801BA728; // 801BA690
L_801BA694:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BA694
  if (!crb(c,2)) { goto L_801BA6A8; } // 801BA698
  c->r[3]=c->r[30]|c->r[30]; // 801BA69C
  c->lr=0x801BA6A4u; f_801B2D38(c); // 801BA6A0
  c->r[31]=c->r[3]|c->r[3]; // 801BA6A4
L_801BA6A8:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801BA6A8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BA6AC
  if (!crb(c,2)) { goto L_801BA720; } // 801BA6B0
  c->r[3]=0u+0x802D0000u; // 801BA6B4
  c->r[3]=c->r[3]+0x000023D8u; // 801BA6B8
  c->r[12]=R32(c->r[3]+0x00001918u); // 801BA6BC
  cmps(c,0,(int32_t)c->r[12],0); // 801BA6C0
  if (crb(c,2)) { goto L_801BA720; } // 801BA6C4
  cmps(c,0,(int32_t)c->r[31],0); // 801BA6C8
  if (crb(c,2)) { goto L_801BA6F8; } // 801BA6CC
  c->r[3]=c->r[30]|c->r[30]; // 801BA6D0
  c->r[4]=c->r[31]+0x00000025u; // 801BA6D4
  c->ctr=c->r[12]; // 801BA6D8
  if (true) { c->lr=0x801BA6E0u; dispatch(c,c->ctr); } // 801BA6DC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BA6E0
  if (!crb(c,2)) { goto L_801BA720; } // 801BA6E4
  c->r[3]=c->r[30]|c->r[30]; // 801BA6E8
  c->r[4]=c->r[31]+0x00000025u; // 801BA6EC
  c->lr=0x801BA6F4u; f_801BDB54(c); // 801BA6F0
  goto L_801BA728; // 801BA6F4
L_801BA6F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801BA6F8
  c->r[4]=c->r[1]+0x00000008u; // 801BA6FC
  c->ctr=c->r[12]; // 801BA700
  if (true) { c->lr=0x801BA708u; dispatch(c,c->ctr); } // 801BA704
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BA708
  if (!crb(c,2)) { goto L_801BA720; } // 801BA70C
  c->r[3]=c->r[30]|c->r[30]; // 801BA710
  c->r[4]=c->r[1]+0x00000008u; // 801BA714
  c->lr=0x801BA71Cu; f_801BDB54(c); // 801BA718
  goto L_801BA728; // 801BA71C
L_801BA720:;
  c->r[3]=c->r[30]|c->r[30]; // 801BA720
  c->lr=0x801BA728u; f_801BDCF4(c); // 801BA724
L_801BA728:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BA728
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BA72C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BA730
  c->lr=c->r[0]; // 801BA734
  c->r[1]=c->r[1]+0x00000020u; // 801BA738
  return; // 801BA73C
}

// btm_sec_pin_code_request_timeout
void f_801BA740(Ctx* __restrict c) {
  trace_call(0x801BA740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA740
  c->r[0]=c->lr; // 801BA744
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BA748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BA74C
  c->r[31]=0u+0x802D0000u; // 801BA750
  c->r[31]=c->r[31]+0x000023D8u; // 801BA754
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801BA758
  cmpu(c,0,c->r[0],0x00000004u); // 801BA75C
  if (crb(c,0)) { goto L_801BA778; } // 801BA760
  c->r[3]=0u+0x000D0000u; // 801BA764
  c->r[4]=0u+0x80240000u; // 801BA768
  c->r[3]=c->r[3]+0x00000003u; // 801BA76C
  c->r[4]=c->r[4]+0x000061C0u; // 801BA770
  c->lr=0x801BA778u; f_801AA7C0(c); // 801BA774
L_801BA778:;
  c->r[0]=0u+0x00000000u; // 801BA778
  c->r[3]=0u+0x802D0000u; // 801BA77C
  c->r[3]=c->r[3]+0x000023D8u; // 801BA780
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 801BA784
  c->r[3]=c->r[3]+0x00001954u; // 801BA788
  c->r[4]=0u+0x000000FFu; // 801BA78C
  c->r[5]=0u+0x00000006u; // 801BA790
  c->lr=0x801BA798u; f_800046B4(c); // 801BA794
  c->r[3]=c->r[31]+0x000027B4u; // 801BA798
  c->lr=0x801BA7A0u; f_801BDF78(c); // 801BA79C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BA7A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BA7A4
  c->lr=c->r[0]; // 801BA7A8
  c->r[1]=c->r[1]+0x00000010u; // 801BA7AC
  return; // 801BA7B0
}

// btm_sec_pin_code_request
void f_801BA7B4(Ctx* __restrict c) {
  trace_call(0x801BA7B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BA7B4
  c->r[0]=c->lr; // 801BA7B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BA7BC
  c->r[11]=c->r[1]+0x00000020u; // 801BA7C0
  c->lr=0x801BA7C8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BA7C4
  c->r[29]=0u+0x802D0000u; // 801BA7C8
  c->r[31]=0u+0x80240000u; // 801BA7CC
  c->r[29]=c->r[29]+0x000023D8u; // 801BA7D0
  c->r[27]=c->r[3]|c->r[3]; // 801BA7D4
  c->r[0]=R8(c->r[29]+0x000027C0u); // 801BA7D8
  c->r[31]=c->r[31]+0x00005A28u; // 801BA7DC
  c->r[28]=0u+0x00000000u; // 801BA7E0
  c->r[30]=0u+0x00000000u; // 801BA7E4
  cmpu(c,0,c->r[0],0x00000004u); // 801BA7E8
  if (crb(c,0)) { goto L_801BA818; } // 801BA7EC
  c->r[3]=0u+0x000D0000u; // 801BA7F0
  c->r[5]=R8(c->r[27]+0x00000000u); // 801BA7F4
  c->r[6]=R8(c->r[27]+0x00000001u); // 801BA7F8
  c->r[3]=c->r[3]+0x00000003u; // 801BA7FC
  c->r[7]=R8(c->r[27]+0x00000002u); // 801BA800
  c->r[4]=c->r[31]+0x000007BCu; // 801BA804
  c->r[8]=R8(c->r[27]+0x00000003u); // 801BA808
  c->r[9]=R8(c->r[27]+0x00000004u); // 801BA80C
  c->r[10]=R8(c->r[27]+0x00000005u); // 801BA810
  c->lr=0x801BA818u; f_801AA880(c); // 801BA814
L_801BA818:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801BA818
  cmps(c,0,(int32_t)c->r[0],0); // 801BA81C
  if (!crb(c,2)) { goto L_801BA904; } // 801BA820
  c->r[0]=R8(c->r[29]+0x00000020u); // 801BA824
  cmpu(c,0,c->r[0],0x00000001u); // 801BA828
  if (!crb(c,2)) { goto L_801BA904; } // 801BA82C
  c->r[3]=c->r[27]|c->r[27]; // 801BA830
  c->lr=0x801BA838u; f_801B2F10(c); // 801BA834
  cmps(c,0,(int32_t)c->r[3],0); // 801BA838
  if (!crb(c,2)) { goto L_801BA8DC; } // 801BA83C
  c->r[3]=0u+0x802D0000u; // 801BA840
  c->r[0]=0u+0x00000002u; // 801BA844
  c->r[3]=c->r[3]+0x000023D8u; // 801BA848
  c->r[3]=c->r[3]+0x00001F30u; // 801BA84C
  c->ctr=c->r[0]; // 801BA850
L_801BA854:;
  c->r[0]=R8(c->r[3]+0x00000076u); // 801BA854
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA858
  if (crb(c,2)) { goto L_801BA8DC; } // 801BA85C
  c->r[0]=R8(c->r[3]+0x000000FEu); // 801BA860
  c->r[30]=c->r[30]+0x00000001u; // 801BA864
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA868
  if (crb(c,2)) { goto L_801BA8DC; } // 801BA86C
  c->r[0]=R8(c->r[3]+0x00000186u); // 801BA870
  c->r[30]=c->r[30]+0x00000001u; // 801BA874
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA878
  if (crb(c,2)) { goto L_801BA8DC; } // 801BA87C
  c->r[0]=R8(c->r[3]+0x0000020Eu); // 801BA880
  c->r[30]=c->r[30]+0x00000001u; // 801BA884
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA888
  if (crb(c,2)) { goto L_801BA8DC; } // 801BA88C
  c->r[0]=R8(c->r[3]+0x00000296u); // 801BA890
  c->r[30]=c->r[30]+0x00000001u; // 801BA894
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA898
  if (crb(c,2)) { goto L_801BA8DC; } // 801BA89C
  c->r[0]=R8(c->r[3]+0x0000031Eu); // 801BA8A0
  c->r[30]=c->r[30]+0x00000001u; // 801BA8A4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA8A8
  if (crb(c,2)) { goto L_801BA8DC; } // 801BA8AC
  c->r[0]=R8(c->r[3]+0x000003A6u); // 801BA8B0
  c->r[30]=c->r[30]+0x00000001u; // 801BA8B4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA8B8
  if (crb(c,2)) { goto L_801BA8DC; } // 801BA8BC
  c->r[0]=R8(c->r[3]+0x0000042Eu); // 801BA8C0
  c->r[30]=c->r[30]+0x00000001u; // 801BA8C4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801BA8C8
  if (crb(c,2)) { goto L_801BA8DC; } // 801BA8CC
  c->r[30]=c->r[30]+0x00000001u; // 801BA8D0
  c->r[3]=c->r[3]+0x00000440u; // 801BA8D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BA854; } // 801BA8D8
L_801BA8DC:;
  cmps(c,0,(int32_t)c->r[30],16); // 801BA8DC
  if (crb(c,0)) { goto L_801BA8F0; } // 801BA8E0
  c->r[3]=c->r[27]|c->r[27]; // 801BA8E4
  c->lr=0x801BA8ECu; f_801BDF78(c); // 801BA8E8
  goto L_801BAAF8; // 801BA8EC
L_801BA8F0:;
  c->r[4]=R8(c->r[29]+0x00000021u); // 801BA8F0
  c->r[3]=c->r[27]|c->r[27]; // 801BA8F4
  c->r[5]=c->r[29]+0x00000022u; // 801BA8F8
  c->lr=0x801BA900u; f_801BDD94(c); // 801BA8FC
  goto L_801BAAF8; // 801BA900
L_801BA904:;
  c->r[3]=c->r[27]|c->r[27]; // 801BA904
  c->lr=0x801BA90Cu; f_801B2F10(c); // 801BA908
  cmps(c,0,(int32_t)c->r[3],0); // 801BA90C
  c->r[30]=c->r[3]|c->r[3]; // 801BA910
  if (!crb(c,2)) { goto L_801BA924; } // 801BA914
  c->r[3]=c->r[27]|c->r[27]; // 801BA918
  c->lr=0x801BA920u; f_801B2D38(c); // 801BA91C
  c->r[30]=c->r[3]|c->r[3]; // 801BA920
L_801BA924:;
  c->r[3]=0u+0x802D0000u; // 801BA924
  c->r[4]=c->r[27]|c->r[27]; // 801BA928
  c->r[3]=c->r[3]+0x000023D8u; // 801BA92C
  c->r[5]=0u+0x00000006u; // 801BA930
  c->r[3]=c->r[3]+0x00001954u; // 801BA934
  c->lr=0x801BA93Cu; f_80004364(c); // 801BA938
  cmps(c,0,(int32_t)c->r[30],0); // 801BA93C
  if (crb(c,2)) { goto L_801BAAB4; } // 801BA940
  c->r[3]=c->r[27]|c->r[27]; // 801BA944
  c->r[4]=c->r[29]+0x000027B4u; // 801BA948
  c->r[5]=0u+0x00000006u; // 801BA94C
  c->lr=0x801BA954u; f_801D8F78(c); // 801BA950
  cmps(c,0,(int32_t)c->r[3],0); // 801BA954
  if (!crb(c,2)) { goto L_801BA96C; } // 801BA958
  c->r[3]=c->r[30]+0x00000022u; // 801BA95C
  c->r[4]=c->r[29]+0x000027BAu; // 801BA960
  c->r[5]=0u+0x00000003u; // 801BA964
  c->lr=0x801BA96Cu; f_80004364(c); // 801BA968
L_801BA96C:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BA96C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BA970
  if (crb(c,2)) { goto L_801BAA14; } // 801BA974
  c->r[3]=0u+0x802D0000u; // 801BA978
  c->r[3]=c->r[3]+0x000023D8u; // 801BA97C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BA980
  cmpu(c,0,c->r[0],0x00000004u); // 801BA984
  if (crb(c,0)) { goto L_801BA99C; } // 801BA988
  c->r[3]=0u+0x000D0000u; // 801BA98C
  c->r[4]=c->r[31]+0x000007FCu; // 801BA990
  c->r[3]=c->r[3]+0x00000003u; // 801BA994
  c->lr=0x801BA99Cu; f_801AA7C0(c); // 801BA998
L_801BA99C:;
  c->r[4]=R8(c->r[29]+0x0000197Fu); // 801BA99C
  c->r[3]=c->r[27]|c->r[27]; // 801BA9A0
  c->r[5]=c->r[29]+0x00001980u; // 801BA9A4
  c->lr=0x801BA9ACu; f_801BDD94(c); // 801BA9A8
  c->r[4]=0u+0x802D0000u; // 801BA9AC
  c->r[4]=c->r[4]+0x000023D8u; // 801BA9B0
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801BA9B4
  cmps(c,0,(int32_t)c->r[0],0); // 801BA9B8
  if (crb(c,2)) { goto L_801BAAB8; } // 801BA9BC
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BA9C0
  c->r[3]=0u+0x00000000u; // 801BA9C4
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801BA9C8
  cmpu(c,0,c->r[0],0x00000005u); // 801BA9CC
  if (crb(c,0)) { goto L_801BA9F4; } // 801BA9D0
  c->r[5]=R8(c->r[4]+0x00001978u); // 801BA9D4
  c->r[3]=0u+0x000D0000u; // 801BA9D8
  c->r[3]=c->r[3]+0x00000004u; // 801BA9DC
  c->r[4]=c->r[31]+0x0000082Cu; // 801BA9E0
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801BA9E4
  c->r[0]=cntlz(c->r[0]); // 801BA9E8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801BA9EC
  c->lr=0x801BA9F4u; f_801AA7E0(c); // 801BA9F0
L_801BA9F4:;
  c->r[3]=0u+0x802D0000u; // 801BA9F4
  c->r[3]=c->r[3]+0x000023D8u; // 801BA9F8
  c->r[3]=R8(c->r[3]+0x00001978u); // 801BA9FC
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801BAA00
  c->r[0]=cntlz(c->r[0]); // 801BAA04
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801BAA08
  c->lr=0x801BAA10u; f_801BF2EC(c); // 801BAA0C
  goto L_801BAAB8; // 801BAA10
L_801BAA14:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801BAA14
  cmps(c,0,(int32_t)c->r[0],0); // 801BAA18
  if (!crb(c,2)) { goto L_801BAA54; } // 801BAA1C
  c->r[0]=R32(c->r[29]+0x00001910u); // 801BAA20
  cmps(c,0,(int32_t)c->r[0],0); // 801BAA24
  if (crb(c,2)) { goto L_801BAA54; } // 801BAA28
  c->r[0]=R8(c->r[30]+0x00000080u); // 801BAA2C
  cmps(c,0,(int32_t)c->r[0],0); // 801BAA30
  if (!crb(c,2)) { goto L_801BAA5C; } // 801BAA34
  c->r[0]=R8(c->r[30]+0x00000023u); // 801BAA38
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801BAA3C
  cmps(c,0,(int32_t)c->r[0],5); // 801BAA40
  if (!crb(c,2)) { goto L_801BAA5C; } // 801BAA44
  c->r[0]=R8(c->r[30]+0x00000024u); // 801BAA48
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801BAA4C
  if (crb(c,2)) { goto L_801BAA5C; } // 801BAA50
L_801BAA54:;
  c->r[28]=0u+0x00000001u; // 801BAA54
  goto L_801BAAB8; // 801BAA58
L_801BAA5C:;
  c->r[4]=c->r[27]|c->r[27]; // 801BAA5C
  c->r[3]=c->r[29]+0x000027B4u; // 801BAA60
  c->r[5]=0u+0x00000006u; // 801BAA64
  c->lr=0x801BAA6Cu; f_80004364(c); // 801BAA68
  c->r[3]=c->r[29]+0x000027BAu; // 801BAA6C
  c->r[4]=c->r[30]+0x00000022u; // 801BAA70
  c->r[5]=0u+0x00000003u; // 801BAA74
  c->lr=0x801BAA7Cu; f_80004364(c); // 801BAA78
  c->r[5]=0u+0x801C0000u; // 801BAA7C
  c->r[3]=c->r[29]+0x0000193Cu; // 801BAA80
  c->r[5]=c->r[5]+0xFFFFA740u; // 801BAA84
  c->r[4]=0u+0x00000016u; // 801BAA88
  W32(c->r[29]+0x0000194Cu,c->r[5]); // 801BAA8C
  c->r[5]=0u+0x0000003Cu; // 801BAA90
  c->lr=0x801BAA98u; f_801AADD0(c); // 801BAA94
  c->r[12]=R32(c->r[29]+0x00001910u); // 801BAA98
  c->r[3]=c->r[27]|c->r[27]; // 801BAA9C
  c->r[4]=c->r[30]+0x00000022u; // 801BAAA0
  c->r[5]=c->r[30]+0x00000035u; // 801BAAA4
  c->ctr=c->r[12]; // 801BAAA8
  if (true) { c->lr=0x801BAAB0u; dispatch(c,c->ctr); } // 801BAAAC
  goto L_801BAAB8; // 801BAAB0
L_801BAAB4:;
  c->r[28]=0u+0x00000001u; // 801BAAB4
L_801BAAB8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801BAAB8
  if (crb(c,2)) { goto L_801BAAF8; } // 801BAABC
  c->r[3]=0u+0x802D0000u; // 801BAAC0
  c->r[3]=c->r[3]+0x000023D8u; // 801BAAC4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAAC8
  cmpu(c,0,c->r[0],0x00000002u); // 801BAACC
  if (crb(c,0)) { goto L_801BAAF0; } // 801BAAD0
  c->r[3]=0u+0x000D0000u; // 801BAAD4
  c->r[5]=R8(c->r[29]+0x00001979u); // 801BAAD8
  c->r[6]=R32(c->r[29]+0x00001910u); // 801BAADC
  c->r[7]=c->r[30]|c->r[30]; // 801BAAE0
  c->r[3]=c->r[3]+0x00000001u; // 801BAAE4
  c->r[4]=c->r[31]+0x0000085Cu; // 801BAAE8
  c->lr=0x801BAAF0u; f_801AA820(c); // 801BAAEC
L_801BAAF0:;
  c->r[3]=c->r[27]|c->r[27]; // 801BAAF0
  c->lr=0x801BAAF8u; f_801BDF78(c); // 801BAAF4
L_801BAAF8:;
  c->r[11]=c->r[1]+0x00000020u; // 801BAAF8
  c->lr=0x801BAB00u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BAAFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAB00
  c->lr=c->r[0]; // 801BAB04
  c->r[1]=c->r[1]+0x00000020u; // 801BAB08
  return; // 801BAB0C
}

// btm_sec_update_clock_offset
void f_801BAB10(Ctx* __restrict c) {
  trace_call(0x801BAB10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAB10
  c->r[0]=c->lr; // 801BAB14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BAB18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BAB1C
  c->r[31]=c->r[4]|c->r[4]; // 801BAB20
  c->lr=0x801BAB28u; f_801B2E58(c); // 801BAB24
  cmps(c,0,(int32_t)c->r[3],0); // 801BAB28
  if (crb(c,2)) { goto L_801BAB4C; } // 801BAB2C
  c->r[31]=c->r[31]|0x00008000u; // 801BAB30
  W16(c->r[3]+0x0000001Au,c->r[31]); // 801BAB34
  c->r[3]=c->r[3]+0x0000001Cu; // 801BAB38
  c->lr=0x801BAB40u; f_801B561C(c); // 801BAB3C
  cmps(c,0,(int32_t)c->r[3],0); // 801BAB40
  if (crb(c,2)) { goto L_801BAB4C; } // 801BAB44
  W16(c->r[3]+0x00000000u,c->r[31]); // 801BAB48
L_801BAB4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BAB4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BAB50
  c->lr=c->r[0]; // 801BAB54
  c->r[1]=c->r[1]+0x00000010u; // 801BAB58
  return; // 801BAB5C
}

// btm_sec_execute_procedure
void f_801BAB60(Ctx* __restrict c) {
  trace_call(0x801BAB60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAB60
  c->r[0]=c->lr; // 801BAB64
  c->r[4]=0u+0x802D0000u; // 801BAB68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BAB6C
  c->r[4]=c->r[4]+0x000023D8u; // 801BAB70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BAB74
  c->r[31]=0u+0x80240000u; // 801BAB78
  c->r[31]=c->r[31]+0x00005A28u; // 801BAB7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BAB80
  c->r[30]=c->r[3]|c->r[3]; // 801BAB84
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BAB88
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801BAB8C
  cmpu(c,0,c->r[0],0x00000004u); // 801BAB90
  if (crb(c,0)) { goto L_801BABB4; } // 801BAB94
  c->r[3]=0u+0x000D0000u; // 801BAB98
  c->r[5]=R8(c->r[30]+0x00000081u); // 801BAB9C
  c->r[6]=R8(c->r[30]+0x00000076u); // 801BABA0
  c->r[3]=c->r[3]+0x00000003u; // 801BABA4
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 801BABA8
  c->r[4]=c->r[31]+0x000008ACu; // 801BABAC
  c->lr=0x801BABB4u; f_801AA820(c); // 801BABB0
L_801BABB4:;
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 801BABB4
  cmps(c,0,(int32_t)c->r[0],0); // 801BABB8
  if (crb(c,2)) { goto L_801BABC8; } // 801BABBC
  c->r[3]=0u+0x00000001u; // 801BABC0
  goto L_801BAF24; // 801BABC4
L_801BABC8:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801BABC8
  cmpu(c,1,c->r[0],0x0000FFFFu); // 801BABCC
  if (!crb(c,6)) { goto L_801BAC30; } // 801BABD0
  c->r[3]=c->r[30]+0x0000001Cu; // 801BABD4
  c->lr=0x801BABDCu; f_801C7388(c); // 801BABD8
  cmps(c,0,(int32_t)c->r[3],0); // 801BABDC
  if (!crb(c,2)) { goto L_801BAC0C; } // 801BABE0
  c->r[3]=0u+0x802D0000u; // 801BABE4
  c->r[0]=R8(c->r[3]+0x000054A0u); // 801BABE8
  cmpu(c,0,c->r[0],0x00000002u); // 801BABEC
  if (crb(c,0)) { goto L_801BAC04; } // 801BABF0
  c->r[3]=0u+0x00080000u; // 801BABF4
  c->r[4]=c->r[31]+0x000008ECu; // 801BABF8
  c->r[3]=c->r[3]+0x00000001u; // 801BABFC
  c->lr=0x801BAC04u; f_801AA7C0(c); // 801BAC00
L_801BAC04:;
  c->r[3]=0u+0x00000003u; // 801BAC04
  goto L_801BAF24; // 801BAC08
L_801BAC0C:;
  c->lr=0x801BAC10u; f_801C8EEC(c); // 801BAC0C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BAC10
  if (!crb(c,2)) { goto L_801BAC20; } // 801BAC14
  c->r[3]=0u+0x00000003u; // 801BAC18
  goto L_801BAF24; // 801BAC1C
L_801BAC20:;
  c->r[0]=0u+0x00000001u; // 801BAC20
  c->r[3]=0u+0x00000001u; // 801BAC24
  W8(c->r[30]+0x00000080u,c->r[0]); // 801BAC28
  goto L_801BAF24; // 801BAC2C
L_801BAC30:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BAC30
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BAC34
  if (!crb(c,2)) { goto L_801BACC0; } // 801BAC38
  if (crb(c,6)) { goto L_801BACC0; } // 801BAC3C
  c->r[3]=0u+0x802D0000u; // 801BAC40
  c->r[3]=c->r[3]+0x000023D8u; // 801BAC44
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAC48
  cmpu(c,0,c->r[0],0x00000004u); // 801BAC4C
  if (crb(c,0)) { goto L_801BAC64; } // 801BAC50
  c->r[3]=0u+0x000D0000u; // 801BAC54
  c->r[4]=c->r[31]+0x00000910u; // 801BAC58
  c->r[3]=c->r[3]+0x00000003u; // 801BAC5C
  c->lr=0x801BAC64u; f_801AA7C0(c); // 801BAC60
L_801BAC64:;
  c->r[29]=R8(c->r[30]+0x0000007Fu); // 801BAC64
  c->r[0]=0u+0x00000003u; // 801BAC68
  c->r[3]=c->r[30]+0x0000001Cu; // 801BAC6C
  c->r[4]=0u+0x00000000u; // 801BAC70
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BAC74
  c->r[5]=0u+0x00000002u; // 801BAC78
  c->r[6]=0u+0x0000001Eu; // 801BAC7C
  c->r[7]=0u+0x00000000u; // 801BAC80
  c->lr=0x801BAC88u; f_801B639C(c); // 801BAC84
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BAC88
  cmpu(c,0,c->r[0],0x00000001u); // 801BAC8C
  if (crb(c,2)) { goto L_801BACA0; } // 801BAC90
  W8(c->r[30]+0x0000007Fu,c->r[29]); // 801BAC94
  c->r[0]=0u+0x00000000u; // 801BAC98
  goto L_801BACA4; // 801BAC9C
L_801BACA0:;
  c->r[0]=0u+0x00000001u; // 801BACA0
L_801BACA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BACA4
  if (crb(c,2)) { goto L_801BACB4; } // 801BACA8
  c->r[3]=0u+0x00000001u; // 801BACAC
  goto L_801BAF24; // 801BACB0
L_801BACB4:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801BACB4
  c->r[0]=c->r[0]|0x00000008u; // 801BACB8
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BACBC
L_801BACC0:;
  c->r[4]=R8(c->r[30]+0x00000076u); // 801BACC0
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801BACC4
  if (!crb(c,2)) { goto L_801BAD50; } // 801BACC8
  c->r[3]=R8(c->r[30]+0x00000080u); // 801BACCC
  cmps(c,0,(int32_t)c->r[3],0); // 801BACD0
  if (crb(c,2)) { goto L_801BACE4; } // 801BACD4
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BACD8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801BACDC
  if (!crb(c,2)) { goto L_801BACF8; } // 801BACE0
L_801BACE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BACE4
  if (!crb(c,2)) { goto L_801BAD50; } // 801BACE8
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BACEC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801BACF0
  if (crb(c,2)) { goto L_801BAD50; } // 801BACF4
L_801BACF8:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801BACF8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BACFC
  if (crb(c,2)) { goto L_801BAD50; } // 801BAD00
  c->r[3]=0u+0x802D0000u; // 801BAD04
  c->r[3]=c->r[3]+0x000023D8u; // 801BAD08
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAD0C
  cmpu(c,0,c->r[0],0x00000004u); // 801BAD10
  if (crb(c,0)) { goto L_801BAD28; } // 801BAD14
  c->r[3]=0u+0x000D0000u; // 801BAD18
  c->r[4]=c->r[31]+0x00000934u; // 801BAD1C
  c->r[3]=c->r[3]+0x00000003u; // 801BAD20
  c->lr=0x801BAD28u; f_801AA7C0(c); // 801BAD24
L_801BAD28:;
  c->r[0]=0u+0x00000001u; // 801BAD28
  c->r[3]=R16(c->r[30]+0x00000018u); // 801BAD2C
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BAD30
  c->lr=0x801BAD38u; f_801BE0A8(c); // 801BAD34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BAD38
  if (!crb(c,2)) { goto L_801BAD48; } // 801BAD3C
  c->r[3]=0u+0x00000003u; // 801BAD40
  goto L_801BAF24; // 801BAD44
L_801BAD48:;
  c->r[3]=0u+0x00000001u; // 801BAD48
  goto L_801BAF24; // 801BAD4C
L_801BAD50:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801BAD50
  if (!crb(c,2)) { goto L_801BADF4; } // 801BAD54
  c->r[3]=R8(c->r[30]+0x00000080u); // 801BAD58
  cmps(c,0,(int32_t)c->r[3],0); // 801BAD5C
  if (crb(c,2)) { goto L_801BAD70; } // 801BAD60
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BAD64
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801BAD68
  if (!crb(c,2)) { goto L_801BAD84; } // 801BAD6C
L_801BAD70:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BAD70
  if (!crb(c,2)) { goto L_801BADF4; } // 801BAD74
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BAD78
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801BAD7C
  if (crb(c,2)) { goto L_801BADF4; } // 801BAD80
L_801BAD84:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801BAD84
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BAD88
  if (crb(c,2)) { goto L_801BADF4; } // 801BAD8C
  c->r[3]=0u+0x802D0000u; // 801BAD90
  c->r[3]=c->r[3]+0x000023D8u; // 801BAD94
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAD98
  cmpu(c,0,c->r[0],0x00000004u); // 801BAD9C
  if (crb(c,0)) { goto L_801BADB4; } // 801BADA0
  c->r[3]=0u+0x000D0000u; // 801BADA4
  c->r[4]=c->r[31]+0x0000095Cu; // 801BADA8
  c->r[3]=c->r[3]+0x00000003u; // 801BADAC
  c->lr=0x801BADB4u; f_801AA7C0(c); // 801BADB0
L_801BADB4:;
  c->r[3]=R16(c->r[30]+0x00000018u); // 801BADB4
  c->r[4]=0u+0x00000001u; // 801BADB8
  c->lr=0x801BADC0u; f_801BE124(c); // 801BADBC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BADC0
  if (!crb(c,2)) { goto L_801BADD0; } // 801BADC4
  c->r[3]=0u+0x00000000u; // 801BADC8
  goto L_801BADDC; // 801BADCC
L_801BADD0:;
  c->r[0]=0u+0x00000002u; // 801BADD0
  c->r[3]=0u+0x00000001u; // 801BADD4
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BADD8
L_801BADDC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BADDC
  if (!crb(c,2)) { goto L_801BADEC; } // 801BADE0
  c->r[3]=0u+0x00000003u; // 801BADE4
  goto L_801BAF24; // 801BADE8
L_801BADEC:;
  c->r[3]=0u+0x00000001u; // 801BADEC
  goto L_801BAF24; // 801BADF0
L_801BADF4:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801BADF4
  if (!crb(c,2)) { goto L_801BAEC4; } // 801BADF8
  c->r[3]=R8(c->r[30]+0x00000080u); // 801BADFC
  cmps(c,0,(int32_t)c->r[3],0); // 801BAE00
  if (crb(c,2)) { goto L_801BAE14; } // 801BAE04
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BAE08
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BAE0C
  if (!crb(c,2)) { goto L_801BAE28; } // 801BAE10
L_801BAE14:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BAE14
  if (!crb(c,2)) { goto L_801BAEC4; } // 801BAE18
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BAE1C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801BAE20
  if (crb(c,2)) { goto L_801BAEC4; } // 801BAE24
L_801BAE28:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801BAE28
  c->r[0]=c->r[3]+0x00010000u; // 801BAE2C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BAE30
  if (crb(c,2)) { goto L_801BAE40; } // 801BAE34
  c->r[0]=0u+0x00000000u; // 801BAE38
  goto L_801BAE5C; // 801BAE3C
L_801BAE40:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801BAE40
  c->r[0]=c->r[3]+0x00010000u; // 801BAE44
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BAE48
  if (crb(c,2)) { goto L_801BAE58; } // 801BAE4C
  c->r[0]=0u+0x00000000u; // 801BAE50
  goto L_801BAE5C; // 801BAE54
L_801BAE58:;
  c->r[0]=0u+0x00000001u; // 801BAE58
L_801BAE5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801BAE5C
  if (!crb(c,2)) { goto L_801BAEC4; } // 801BAE60
  c->r[3]=R32(c->r[30]+0x00000000u); // 801BAE64
  c->r[3]=R8(c->r[3]+0x0000000Fu); // 801BAE68
  cmpu(c,0,c->r[3],0x0000002Eu); // 801BAE6C
  if (!crb(c,0)) { goto L_801BAEC4; } // 801BAE70
  c->r[0]=rotl(c->r[3],29)&0x0000001Cu; // 801BAE74
  c->r[4]=rotl(c->r[3],0)&0x0000001Fu; // 801BAE78
  c->r[3]=c->r[30]+c->r[0]; // 801BAE7C
  c->r[5]=0u+0x00000001u; // 801BAE80
  c->r[0]=R32(c->r[3]+0x00000010u); // 801BAE84
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801BAE88
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801BAE8C
  if (!crb(c,2)) { goto L_801BAEC4; } // 801BAE90
  c->r[3]=0u+0x802D0000u; // 801BAE94
  c->r[3]=c->r[3]+0x000023D8u; // 801BAE98
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAE9C
  cmpu(c,0,c->r[0],0x00000004u); // 801BAEA0
  if (crb(c,0)) { goto L_801BAEB8; } // 801BAEA4
  c->r[3]=0u+0x000D0000u; // 801BAEA8
  c->r[4]=c->r[31]+0x00000980u; // 801BAEAC
  c->r[3]=c->r[3]+0x00000003u; // 801BAEB0
  c->lr=0x801BAEB8u; f_801AA7C0(c); // 801BAEB4
L_801BAEB8:;
  c->r[3]=c->r[30]|c->r[30]; // 801BAEB8
  c->lr=0x801BAEC0u; f_801BAF40(c); // 801BAEBC
  goto L_801BAF24; // 801BAEC0
L_801BAEC4:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 801BAEC4
  c->r[3]=0u+0x802D0000u; // 801BAEC8
  c->r[3]=c->r[3]+0x000023D8u; // 801BAECC
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801BAED0
  W8(c->r[30]+0x00000081u,c->r[0]); // 801BAED4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAED8
  cmpu(c,0,c->r[0],0x00000004u); // 801BAEDC
  if (crb(c,0)) { goto L_801BAEFC; } // 801BAEE0
  c->r[3]=0u+0x000D0000u; // 801BAEE4
  c->r[5]=R32(c->r[30]+0x00000014u); // 801BAEE8
  c->r[6]=R32(c->r[30]+0x00000010u); // 801BAEEC
  c->r[3]=c->r[3]+0x00000003u; // 801BAEF0
  c->r[4]=c->r[31]+0x000009A8u; // 801BAEF4
  c->lr=0x801BAEFCu; f_801AA800(c); // 801BAEF8
L_801BAEFC:;
  c->r[3]=0u+0x802D0000u; // 801BAEFC
  c->r[3]=c->r[3]+0x000023D8u; // 801BAF00
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BAF04
  cmpu(c,0,c->r[0],0x00000004u); // 801BAF08
  if (crb(c,0)) { goto L_801BAF20; } // 801BAF0C
  c->r[3]=0u+0x000D0000u; // 801BAF10
  c->r[4]=c->r[31]+0x000009D0u; // 801BAF14
  c->r[3]=c->r[3]+0x00000003u; // 801BAF18
  c->lr=0x801BAF20u; f_801AA7C0(c); // 801BAF1C
L_801BAF20:;
  c->r[3]=0u+0x00000000u; // 801BAF20
L_801BAF24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BAF24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BAF28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BAF2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BAF30
  c->lr=c->r[0]; // 801BAF34
  c->r[1]=c->r[1]+0x00000020u; // 801BAF38
  return; // 801BAF3C
}

// btm_sec_start_authorization
void f_801BAF40(Ctx* __restrict c) {
  trace_call(0x801BAF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BAF40
  c->r[0]=c->lr; // 801BAF44
  c->r[6]=0u+0x00000000u; // 801BAF48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BAF4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BAF50
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BAF54
  c->r[30]=c->r[3]|c->r[3]; // 801BAF58
  c->r[0]=R8(c->r[3]+0x00000076u); // 801BAF5C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801BAF60
  if (!crb(c,2)) { goto L_801BAF74; } // 801BAF64
  c->r[0]=R16(c->r[3]+0x00000018u); // 801BAF68
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801BAF6C
  if (!crb(c,2)) { goto L_801BB00C; } // 801BAF70
L_801BAF74:;
  c->r[4]=0u+0x802D0000u; // 801BAF74
  c->r[4]=c->r[4]+0x000023D8u; // 801BAF78
  c->r[0]=R32(c->r[4]+0x0000190Cu); // 801BAF7C
  cmps(c,0,(int32_t)c->r[0],0); // 801BAF80
  if (!crb(c,2)) { goto L_801BAF90; } // 801BAF84
  c->r[3]=0u+0x00000004u; // 801BAF88
  goto L_801BB044; // 801BAF8C
L_801BAF90:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801BAF90
  cmps(c,0,(int32_t)c->r[4],0); // 801BAF94
  if (crb(c,2)) { goto L_801BAFBC; } // 801BAF98
  c->r[0]=R8(c->r[3]+0x00000080u); // 801BAF9C
  cmps(c,0,(int32_t)c->r[0],0); // 801BAFA0
  if (crb(c,2)) { goto L_801BAFB0; } // 801BAFA4
  c->r[6]=c->r[4]+0x00000010u; // 801BAFA8
  goto L_801BAFB4; // 801BAFAC
L_801BAFB0:;
  c->r[6]=c->r[4]+0x00000026u; // 801BAFB0
L_801BAFB4:;
  c->r[7]=R8(c->r[4]+0x0000000Fu); // 801BAFB4
  goto L_801BAFC0; // 801BAFB8
L_801BAFBC:;
  c->r[7]=0u+0x00000000u; // 801BAFBC
L_801BAFC0:;
  c->r[0]=0u+0x00000004u; // 801BAFC0
  c->r[4]=0u+0x802D0000u; // 801BAFC4
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801BAFC8
  c->r[4]=c->r[4]+0x000023D8u; // 801BAFCC
  c->r[5]=c->r[3]+0x00000035u; // 801BAFD0
  c->r[8]=R8(c->r[3]+0x00000080u); // 801BAFD4
  c->r[12]=R32(c->r[4]+0x0000190Cu); // 801BAFD8
  c->r[4]=c->r[3]+0x00000022u; // 801BAFDC
  c->ctr=c->r[12]; // 801BAFE0
  c->r[3]=c->r[3]+0x0000001Cu; // 801BAFE4
  if (true) { c->lr=0x801BAFECu; dispatch(c,c->ctr); } // 801BAFE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BAFEC
  if (!crb(c,2)) { goto L_801BB044; } // 801BAFF0
  c->r[4]=R8(c->r[30]+0x00000076u); // 801BAFF4
  c->r[0]=0u+0x00000000u; // 801BAFF8
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801BAFFC
  c->r[0]=c->r[4]|0x00000001u; // 801BB000
  W8(c->r[30]+0x00000076u,c->r[0]); // 801BB004
  goto L_801BB044; // 801BB008
L_801BB00C:;
  c->r[31]=R8(c->r[3]+0x0000007Fu); // 801BB00C
  c->r[0]=0u+0x00000003u; // 801BB010
  c->r[4]=0u+0x00000000u; // 801BB014
  c->r[5]=0u+0x00000002u; // 801BB018
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801BB01C
  c->r[6]=0u+0x0000001Eu; // 801BB020
  c->r[7]=0u+0x00000000u; // 801BB024
  c->r[3]=c->r[3]+0x0000001Cu; // 801BB028
  c->lr=0x801BB030u; f_801B639C(c); // 801BB02C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BB030
  cmpu(c,0,c->r[0],0x00000001u); // 801BB034
  if (crb(c,2)) { goto L_801BB040; } // 801BB038
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 801BB03C
L_801BB040:;
  c->r[3]=0u+0x00000001u; // 801BB040
L_801BB044:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB044
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB048
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BB04C
  c->lr=c->r[0]; // 801BB050
  c->r[1]=c->r[1]+0x00000010u; // 801BB054
  return; // 801BB058
}

// btm_sec_collision_timeout
void f_801BB05C(Ctx* __restrict c) {
  trace_call(0x801BB05Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB05C
  c->r[0]=c->lr; // 801BB060
  c->r[3]=0u+0x802D0000u; // 801BB064
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB068
  c->r[3]=c->r[3]+0x000023D8u; // 801BB06C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BB070
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BB074
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801BB078
  cmpu(c,0,c->r[0],0x00000004u); // 801BB07C
  if (crb(c,0)) { goto L_801BB098; } // 801BB080
  c->r[3]=0u+0x000D0000u; // 801BB084
  c->r[4]=0u+0x80240000u; // 801BB088
  c->r[3]=c->r[3]+0x00000003u; // 801BB08C
  c->r[4]=c->r[4]+0x0000641Cu; // 801BB090
  c->lr=0x801BB098u; f_801AA7C0(c); // 801BB094
L_801BB098:;
  c->r[31]=0u+0x802D0000u; // 801BB098
  c->r[30]=0u+0x00000000u; // 801BB09C
  c->r[31]=c->r[31]+0x000023D8u; // 801BB0A0
  W32(c->r[31]+0x0000196Cu,c->r[30]); // 801BB0A4
  c->r[3]=R32(c->r[31]+0x00001938u); // 801BB0A8
  c->lr=0x801BB0B0u; f_801BAB60(c); // 801BB0AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BB0B0
  cmpu(c,0,c->r[0],0x00000001u); // 801BB0B4
  if (crb(c,2)) { goto L_801BB124; } // 801BB0B8
  c->r[4]=R32(c->r[31]+0x00001938u); // 801BB0BC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801BB0C0
  cmps(c,0,(int32_t)c->r[0],0); // 801BB0C4
  if (crb(c,2)) { goto L_801BB124; } // 801BB0C8
  c->r[0]=R8(c->r[4]+0x00000080u); // 801BB0CC
  cmps(c,0,(int32_t)c->r[0],0); // 801BB0D0
  if (crb(c,2)) { goto L_801BB0F4; } // 801BB0D4
  c->r[4]=R32(c->r[4]+0x00000000u); // 801BB0D8
  cmps(c,0,(int32_t)c->r[4],0); // 801BB0DC
  if (crb(c,2)) { goto L_801BB0F4; } // 801BB0E0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801BB0E4
  cmpu(c,0,c->r[0],0x00000003u); // 801BB0E8
  if (!crb(c,2)) { goto L_801BB0F4; } // 801BB0EC
  W32(c->r[4]+0x00000004u,c->r[30]); // 801BB0F0
L_801BB0F4:;
  c->r[31]=0u+0x802D0000u; // 801BB0F4
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801BB0F8
  c->r[31]=c->r[31]+0x000023D8u; // 801BB0FC
  c->r[4]=R32(c->r[31]+0x00001938u); // 801BB100
  c->r[12]=R32(c->r[4]+0x00000004u); // 801BB104
  c->r[3]=c->r[4]+0x0000001Cu; // 801BB108
  c->r[4]=R32(c->r[4]+0x00000008u); // 801BB10C
  c->ctr=c->r[12]; // 801BB110
  if (true) { c->lr=0x801BB118u; dispatch(c,c->ctr); } // 801BB114
  c->r[3]=R32(c->r[31]+0x00001938u); // 801BB118
  c->r[0]=0u+0x00000000u; // 801BB11C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801BB120
L_801BB124:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB124
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BB128
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BB12C
  c->lr=c->r[0]; // 801BB130
  c->r[1]=c->r[1]+0x00000010u; // 801BB134
  return; // 801BB138
}

// btm_read_trusted_mask
void f_801BB13C(Ctx* __restrict c) {
  trace_call(0x801BB13Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB13C
  c->r[0]=c->lr; // 801BB140
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BB144
  c->lr=0x801BB14Cu; f_801B2F10(c); // 801BB148
  cmps(c,0,(int32_t)c->r[3],0); // 801BB14C
  if (crb(c,2)) { goto L_801BB15C; } // 801BB150
  c->r[3]=c->r[3]+0x00000010u; // 801BB154
  goto L_801BB160; // 801BB158
L_801BB15C:;
  c->r[3]=0u+0x00000000u; // 801BB15C
L_801BB160:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BB160
  c->lr=c->r[0]; // 801BB164
  c->r[1]=c->r[1]+0x00000010u; // 801BB168
  return; // 801BB16C
}

// btu_hcif_process_event
void f_801BB170(Ctx* __restrict c) {
  trace_call(0x801BB170u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB170
  c->r[0]=c->lr; // 801BB174
  c->r[4]=0u+0x802D0000u; // 801BB178
  W32(c->r[1]+0x00000044u,c->r[0]); // 801BB17C
  c->r[4]=c->r[4]+0x000023D8u; // 801BB180
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801BB184
  W32(c->r[1]+0x00000038u,c->r[30]); // 801BB188
  W32(c->r[1]+0x00000034u,c->r[29]); // 801BB18C
  W32(c->r[1]+0x00000030u,c->r[28]); // 801BB190
  c->r[5]=R16(c->r[3]+0x00000004u); // 801BB194
  c->r[0]=R8(c->r[4]+0x0000064Eu); // 801BB198
  c->r[7]=c->r[3]+c->r[5]; // 801BB19C
  cmps(c,0,(int32_t)c->r[0],0); // 801BB1A0
  c->r[3]=R8(c->r[7]+0x00000008u); // 801BB1A4
  c->r[4]=R8(c->r[7]+0x00000009u); // 801BB1A8
  if (!crb(c,2)) { goto L_801BB1C0; } // 801BB1AC
  cmpu(c,0,c->r[3],0x0000000Eu); // 801BB1B0
  if (crb(c,2)) { goto L_801BB1C0; } // 801BB1B4
  cmpu(c,0,c->r[3],0x0000000Fu); // 801BB1B8
  if (!crb(c,2)) { goto L_801BB708; } // 801BB1BC
L_801BB1C0:;
  cmps(c,0,(int32_t)c->r[3],20); // 801BB1C0
  if (crb(c,2)) { goto L_801BB524; } // 801BB1C4
  if (!crb(c,0)) { goto L_801BB25C; } // 801BB1C8
  cmps(c,0,(int32_t)c->r[3],10); // 801BB1CC
  if (crb(c,2)) { goto L_801BB430; } // 801BB1D0
  if (!crb(c,0)) { goto L_801BB220; } // 801BB1D4
  cmps(c,0,(int32_t)c->r[3],5); // 801BB1D8
  if (crb(c,2)) { goto L_801BB324; } // 801BB1DC
  if (!crb(c,0)) { goto L_801BB208; } // 801BB1E0
  cmps(c,0,(int32_t)c->r[3],2); // 801BB1E4
  if (crb(c,2)) { goto L_801BB2EC; } // 801BB1E8
  if (!crb(c,0)) { goto L_801BB1FC; } // 801BB1EC
  cmps(c,0,(int32_t)c->r[3],1); // 801BB1F0
  if (!crb(c,0)) { goto L_801BB2E0; } // 801BB1F4
  goto L_801BB708; // 801BB1F8
L_801BB1FC:;
  cmps(c,0,(int32_t)c->r[3],4); // 801BB1FC
  if (!crb(c,0)) { goto L_801BB318; } // 801BB200
  goto L_801BB30C; // 801BB204
L_801BB208:;
  cmps(c,0,(int32_t)c->r[3],8); // 801BB208
  if (crb(c,2)) { goto L_801BB3F0; } // 801BB20C
  if (!crb(c,0)) { goto L_801BB708; } // 801BB210
  cmps(c,0,(int32_t)c->r[3],7); // 801BB214
  if (!crb(c,0)) { goto L_801BB38C; } // 801BB218
  goto L_801BB36C; // 801BB21C
L_801BB220:;
  cmps(c,0,(int32_t)c->r[3],15); // 801BB220
  if (crb(c,2)) { goto L_801BB484; } // 801BB224
  if (!crb(c,0)) { goto L_801BB244; } // 801BB228
  cmps(c,0,(int32_t)c->r[3],13); // 801BB22C
  if (crb(c,2)) { goto L_801BB46C; } // 801BB230
  if (!crb(c,0)) { goto L_801BB478; } // 801BB234
  cmps(c,0,(int32_t)c->r[3],12); // 801BB238
  if (!crb(c,0)) { goto L_801BB460; } // 801BB23C
  goto L_801BB454; // 801BB240
L_801BB244:;
  cmps(c,0,(int32_t)c->r[3],18); // 801BB244
  if (crb(c,2)) { goto L_801BB4B8; } // 801BB248
  if (!crb(c,0)) { goto L_801BB518; } // 801BB24C
  cmps(c,0,(int32_t)c->r[3],17); // 801BB250
  if (!crb(c,0)) { goto L_801BB708; } // 801BB254
  goto L_801BB490; // 801BB258
L_801BB25C:;
  cmps(c,0,(int32_t)c->r[3],33); // 801BB25C
  if (crb(c,2)) { goto L_801BB708; } // 801BB260
  if (!crb(c,0)) { goto L_801BB2A4; } // 801BB264
  cmps(c,0,(int32_t)c->r[3],28); // 801BB268
  if (crb(c,2)) { goto L_801BB638; } // 801BB26C
  if (!crb(c,0)) { goto L_801BB298; } // 801BB270
  cmps(c,0,(int32_t)c->r[3],23); // 801BB274
  if (crb(c,2)) { goto L_801BB5F0; } // 801BB278
  if (!crb(c,0)) { goto L_801BB28C; } // 801BB27C
  cmps(c,0,(int32_t)c->r[3],22); // 801BB280
  if (!crb(c,0)) { goto L_801BB5AC; } // 801BB284
  goto L_801BB58C; // 801BB288
L_801BB28C:;
  cmps(c,0,(int32_t)c->r[3],25); // 801BB28C
  if (!crb(c,0)) { goto L_801BB708; } // 801BB290
  goto L_801BB62C; // 801BB294
L_801BB298:;
  cmps(c,0,(int32_t)c->r[3],30); // 801BB298
  if (crb(c,2)) { goto L_801BB688; } // 801BB29C
  goto L_801BB708; // 801BB2A0
L_801BB2A4:;
  cmps(c,0,(int32_t)c->r[3],239); // 801BB2A4
  if (crb(c,2)) { goto L_801BB700; } // 801BB2A8
  if (!crb(c,0)) { goto L_801BB2D4; } // 801BB2AC
  cmps(c,0,(int32_t)c->r[3],44); // 801BB2B0
  if (crb(c,2)) { goto L_801BB6A4; } // 801BB2B4
  if (!crb(c,0)) { goto L_801BB2C8; } // 801BB2B8
  cmps(c,0,(int32_t)c->r[3],35); // 801BB2BC
  if (!crb(c,0)) { goto L_801BB708; } // 801BB2C0
  goto L_801BB2FC; // 801BB2C4
L_801BB2C8:;
  cmps(c,0,(int32_t)c->r[3],46); // 801BB2C8
  if (!crb(c,0)) { goto L_801BB708; } // 801BB2CC
  goto L_801BB6B0; // 801BB2D0
L_801BB2D4:;
  cmps(c,0,(int32_t)c->r[3],255); // 801BB2D4
  if (crb(c,2)) { goto L_801BB700; } // 801BB2D8
  goto L_801BB708; // 801BB2DC
L_801BB2E0:;
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801BB2E0
  c->lr=0x801BB2E8u; f_801B6298(c); // 801BB2E4
  goto L_801BB708; // 801BB2E8
L_801BB2EC:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB2EC
  c->r[4]=0u+0x00000000u; // 801BB2F0
  c->lr=0x801BB2F8u; f_801B6020(c); // 801BB2F4
  goto L_801BB708; // 801BB2F8
L_801BB2FC:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB2FC
  c->r[4]=0u+0x00000001u; // 801BB300
  c->lr=0x801BB308u; f_801B6020(c); // 801BB304
  goto L_801BB708; // 801BB308
L_801BB30C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB30C
  c->lr=0x801BB314u; f_801BB8B4(c); // 801BB310
  goto L_801BB708; // 801BB314
L_801BB318:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB318
  c->lr=0x801BB320u; f_801BB990(c); // 801BB31C
  goto L_801BB708; // 801BB320
L_801BB324:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BB324
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BB328
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB32C
  c->r[31]=R8(c->r[7]+0x0000000Du); // 801BB330
  c->r[0]=c->r[3]+c->r[0]; // 801BB334
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 801BB338
  c->r[4]=c->r[31]|c->r[31]; // 801BB33C
  c->r[3]=c->r[28]|c->r[28]; // 801BB340
  c->lr=0x801BB348u; f_801C560C(c); // 801BB344
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BB348
  if (!crb(c,2)) { goto L_801BB35C; } // 801BB34C
  c->r[3]=c->r[28]|c->r[28]; // 801BB350
  c->r[4]=c->r[31]|c->r[31]; // 801BB354
  c->lr=0x801BB35Cu; f_801B7BDC(c); // 801BB358
L_801BB35C:;
  c->r[3]=c->r[28]|c->r[28]; // 801BB35C
  c->r[4]=c->r[31]|c->r[31]; // 801BB360
  c->lr=0x801BB368u; f_801BA328(c); // 801BB364
  goto L_801BB708; // 801BB368
L_801BB36C:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BB36C
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BB370
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB374
  c->r[4]=R8(c->r[7]+0x0000000Au); // 801BB378
  c->r[0]=c->r[3]+c->r[0]; // 801BB37C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801BB380
  c->lr=0x801BB388u; f_801B9830(c); // 801BB384
  goto L_801BB708; // 801BB388
L_801BB38C:;
  c->r[30]=R8(c->r[7]+0x0000000Au); // 801BB38C
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 801BB390
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BB394
  c->r[31]=c->r[7]+0x00000011u; // 801BB398
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801BB39C
  c->r[6]=c->r[30]|c->r[30]; // 801BB3A0
  W8(c->r[1]+0x00000025u,c->r[3]); // 801BB3A4
  c->r[4]=c->r[31]|c->r[31]; // 801BB3A8
  c->r[3]=c->r[1]+0x00000020u; // 801BB3AC
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BB3B0
  W8(c->r[1]+0x00000024u,c->r[0]); // 801BB3B4
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801BB3B8
  W8(c->r[1]+0x00000023u,c->r[0]); // 801BB3BC
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BB3C0
  W8(c->r[1]+0x00000022u,c->r[0]); // 801BB3C4
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BB3C8
  W8(c->r[1]+0x00000021u,c->r[0]); // 801BB3CC
  c->r[0]=R8(c->r[7]+0x00000010u); // 801BB3D0
  W8(c->r[1]+0x00000020u,c->r[0]); // 801BB3D4
  c->lr=0x801BB3DCu; f_801B64EC(c); // 801BB3D8
  c->r[4]=c->r[31]|c->r[31]; // 801BB3DC
  c->r[5]=c->r[30]|c->r[30]; // 801BB3E0
  c->r[3]=c->r[1]+0x00000020u; // 801BB3E4
  c->lr=0x801BB3ECu; f_801B9548(c); // 801BB3E8
  goto L_801BB708; // 801BB3EC
L_801BB3F0:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BB3F0
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BB3F4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB3F8
  c->r[29]=R8(c->r[7]+0x0000000Au); // 801BB3FC
  c->r[0]=c->r[3]+c->r[0]; // 801BB400
  c->r[30]=R8(c->r[7]+0x0000000Du); // 801BB404
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801BB408
  c->r[4]=c->r[29]|c->r[29]; // 801BB40C
  c->r[3]=c->r[31]|c->r[31]; // 801BB410
  c->r[5]=c->r[30]|c->r[30]; // 801BB414
  c->lr=0x801BB41Cu; f_801B1418(c); // 801BB418
  c->r[3]=c->r[31]|c->r[31]; // 801BB41C
  c->r[4]=c->r[29]|c->r[29]; // 801BB420
  c->r[5]=c->r[30]|c->r[30]; // 801BB424
  c->lr=0x801BB42Cu; f_801B9C70(c); // 801BB428
  goto L_801BB708; // 801BB42C
L_801BB430:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BB430
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801BB434
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB438
  c->r[4]=R8(c->r[7]+0x0000000Au); // 801BB43C
  c->r[0]=c->r[3]+c->r[0]; // 801BB440
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801BB444
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801BB448
  c->lr=0x801BB450u; f_801B9B74(c); // 801BB44C
  goto L_801BB708; // 801BB450
L_801BB454:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB454
  c->lr=0x801BB45Cu; f_801B1918(c); // 801BB458
  goto L_801BB708; // 801BB45C
L_801BB460:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB460
  c->lr=0x801BB468u; f_801B188C(c); // 801BB464
  goto L_801BB708; // 801BB468
L_801BB46C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB46C
  c->lr=0x801BB474u; f_801BBA1C(c); // 801BB470
  goto L_801BB708; // 801BB474
L_801BB478:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB478
  c->lr=0x801BB480u; f_801BBD54(c); // 801BB47C
  goto L_801BB708; // 801BB480
L_801BB484:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB484
  c->lr=0x801BB48Cu; f_801BC06C(c); // 801BB488
  goto L_801BB708; // 801BB48C
L_801BB490:;
  c->r[4]=0u+0x80240000u; // 801BB490
  c->r[3]=0u+0x00070000u; // 801BB494
  c->r[4]=c->r[4]+0x00006438u; // 801BB498
  c->lr=0x801BB4A0u; f_801AA7C0(c); // 801BB49C
  c->lr=0x801BB4A4u; f_801B33C4(c); // 801BB4A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BB4A4
  if (crb(c,2)) { goto L_801BB708; } // 801BB4A8
  c->r[3]=0u+0x00000000u; // 801BB4AC
  c->lr=0x801BB4B4u; f_801B3280(c); // 801BB4B0
  goto L_801BB708; // 801BB4B4
L_801BB4B8:;
  c->r[29]=R8(c->r[7]+0x0000000Au); // 801BB4B8
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801BB4BC
  cmps(c,0,(int32_t)c->r[29],0); // 801BB4C0
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801BB4C4
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BB4C8
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801BB4CC
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801BB4D0
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801BB4D4
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BB4D8
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801BB4DC
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BB4E0
  W8(c->r[1]+0x00000019u,c->r[0]); // 801BB4E4
  c->r[0]=R8(c->r[7]+0x00000010u); // 801BB4E8
  W8(c->r[1]+0x00000018u,c->r[0]); // 801BB4EC
  c->r[31]=R8(c->r[7]+0x00000011u); // 801BB4F0
  if (!crb(c,2)) { goto L_801BB504; } // 801BB4F4
  c->r[4]=c->r[31]|c->r[31]; // 801BB4F8
  c->r[3]=c->r[1]+0x00000018u; // 801BB4FC
  c->lr=0x801BB504u; f_801C614C(c); // 801BB500
L_801BB504:;
  c->r[3]=c->r[29]|c->r[29]; // 801BB504
  c->r[5]=c->r[31]|c->r[31]; // 801BB508
  c->r[4]=c->r[1]+0x00000018u; // 801BB50C
  c->lr=0x801BB514u; f_801B1DD0(c); // 801BB510
  goto L_801BB708; // 801BB514
L_801BB518:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB518
  c->lr=0x801BB520u; f_801C5E18(c); // 801BB51C
  goto L_801BB708; // 801BB520
L_801BB524:;
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 801BB524
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BB528
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BB52C
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 801BB530
  c->r[3]=R8(c->r[7]+0x0000000Eu); // 801BB534
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB538
  c->r[4]=c->r[5]+c->r[4]; // 801BB53C
  c->r[30]=R8(c->r[7]+0x0000000Du); // 801BB540
  c->r[31]=rotl(c->r[4],0)&0x0000FFFFu; // 801BB544
  c->r[0]=c->r[3]+c->r[0]; // 801BB548
  c->r[28]=R8(c->r[7]+0x0000000Au); // 801BB54C
  c->r[4]=c->r[31]|c->r[31]; // 801BB550
  c->r[5]=c->r[30]|c->r[30]; // 801BB554
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801BB558
  c->r[3]=c->r[28]|c->r[28]; // 801BB55C
  c->lr=0x801BB564u; f_801B7594(c); // 801BB560
  c->r[3]=c->r[28]|c->r[28]; // 801BB564
  c->r[4]=c->r[31]|c->r[31]; // 801BB568
  c->r[5]=c->r[30]|c->r[30]; // 801BB56C
  c->r[6]=c->r[29]|c->r[29]; // 801BB570
  c->lr=0x801BB578u; f_801B714C(c); // 801BB574
  c->r[3]=c->r[28]|c->r[28]; // 801BB578
  c->r[4]=c->r[30]|c->r[30]; // 801BB57C
  c->r[5]=c->r[29]|c->r[29]; // 801BB580
  c->lr=0x801BB588u; f_801C01C0(c); // 801BB584
  goto L_801BB708; // 801BB588
L_801BB58C:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801BB58C
  cmps(c,0,(int32_t)c->r[0],0); // 801BB590
  if (crb(c,2)) { goto L_801BB708; } // 801BB594
  c->r[0]=0u+0x00000001u; // 801BB598
  c->r[3]=c->r[7]+0x00000009u; // 801BB59C
  W8(c->r[7]+0x00000009u,c->r[0]); // 801BB5A0
  c->lr=0x801BB5A8u; f_801B490C(c); // 801BB5A4
  goto L_801BB708; // 801BB5A8
L_801BB5AC:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801BB5AC
  c->r[3]=c->r[1]+0x00000010u; // 801BB5B0
  W8(c->r[1]+0x00000015u,c->r[0]); // 801BB5B4
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801BB5B8
  W8(c->r[1]+0x00000014u,c->r[0]); // 801BB5BC
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BB5C0
  W8(c->r[1]+0x00000013u,c->r[0]); // 801BB5C4
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801BB5C8
  W8(c->r[1]+0x00000012u,c->r[0]); // 801BB5CC
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BB5D0
  W8(c->r[1]+0x00000011u,c->r[0]); // 801BB5D4
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BB5D8
  W8(c->r[1]+0x00000010u,c->r[0]); // 801BB5DC
  c->lr=0x801BB5E4u; f_801C6314(c); // 801BB5E0
  c->r[3]=c->r[1]+0x00000010u; // 801BB5E4
  c->lr=0x801BB5ECu; f_801BA7B4(c); // 801BB5E8
  goto L_801BB708; // 801BB5EC
L_801BB5F0:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801BB5F0
  c->r[3]=c->r[1]+0x00000008u; // 801BB5F4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BB5F8
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801BB5FC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BB600
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801BB604
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BB608
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801BB60C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BB610
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BB614
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BB618
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801BB61C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BB620
  c->lr=0x801BB628u; f_801BA610(c); // 801BB624
  goto L_801BB708; // 801BB628
L_801BB62C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB62C
  c->lr=0x801BB634u; f_801BC2EC(c); // 801BB630
  goto L_801BB708; // 801BB634
L_801BB638:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801BB638
  cmps(c,0,(int32_t)c->r[0],0); // 801BB63C
  if (!crb(c,2)) { goto L_801BB708; } // 801BB640
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 801BB644
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801BB648
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BB64C
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 801BB650
  c->r[3]=R8(c->r[7]+0x0000000Du); // 801BB654
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB658
  c->r[4]=c->r[5]+c->r[4]; // 801BB65C
  c->r[0]=c->r[3]+c->r[0]; // 801BB660
  c->r[29]=rotl(c->r[4],0)&0x00000FFFu; // 801BB664
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801BB668
  c->r[3]=c->r[29]|c->r[29]; // 801BB66C
  c->r[4]=c->r[28]|c->r[28]; // 801BB670
  c->lr=0x801BB678u; f_801B1D34(c); // 801BB674
  c->r[3]=c->r[29]|c->r[29]; // 801BB678
  c->r[4]=c->r[28]|c->r[28]; // 801BB67C
  c->lr=0x801BB684u; f_801BAB10(c); // 801BB680
  goto L_801BB708; // 801BB684
L_801BB688:;
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801BB688
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801BB68C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB690
  c->r[0]=c->r[3]+c->r[0]; // 801BB694
  c->r[3]=rotl(c->r[0],0)&0x00000FFFu; // 801BB698
  c->lr=0x801BB6A0u; f_801C56C8(c); // 801BB69C
  goto L_801BB708; // 801BB6A0
L_801BB6A4:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB6A4
  c->lr=0x801BB6ACu; f_801BBB1C(c); // 801BB6A8
  goto L_801BB708; // 801BB6AC
L_801BB6B0:;
  c->r[4]=R8(c->r[7]+0x0000000Cu); // 801BB6B0
  c->r[3]=R8(c->r[7]+0x00000010u); // 801BB6B4
  c->r[0]=R8(c->r[7]+0x00000012u); // 801BB6B8
  c->r[6]=rotl(c->r[4],8)&0xFFFFFF00u; // 801BB6BC
  c->r[8]=R8(c->r[7]+0x0000000Bu); // 801BB6C0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801BB6C4
  c->r[5]=R8(c->r[7]+0x0000000Fu); // 801BB6C8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB6CC
  c->r[9]=c->r[8]+c->r[6]; // 801BB6D0
  c->r[4]=R8(c->r[7]+0x00000011u); // 801BB6D4
  c->r[8]=c->r[5]+c->r[3]; // 801BB6D8
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801BB6DC
  c->r[0]=c->r[4]+c->r[0]; // 801BB6E0
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801BB6E4
  c->r[6]=R8(c->r[7]+0x0000000Eu); // 801BB6E8
  c->r[7]=rotl(c->r[8],0)&0x0000FFFFu; // 801BB6EC
  c->r[4]=rotl(c->r[9],0)&0x0000FFFFu; // 801BB6F0
  c->r[8]=rotl(c->r[0],0)&0x0000FFFFu; // 801BB6F4
  c->lr=0x801BB6FCu; f_801B7F50(c); // 801BB6F8
  goto L_801BB708; // 801BB6FC
L_801BB700:;
  c->r[3]=c->r[7]+0x0000000Au; // 801BB700
  c->lr=0x801BB708u; f_801B441C(c); // 801BB704
L_801BB708:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801BB708
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801BB70C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801BB710
  c->r[29]=R32(c->r[1]+0x00000034u); // 801BB714
  c->r[28]=R32(c->r[1]+0x00000030u); // 801BB718
  c->lr=c->r[0]; // 801BB71C
  c->r[1]=c->r[1]+0x00000040u; // 801BB720
  return; // 801BB724
}

// btu_hcif_send_cmd
void f_801BB728(Ctx* __restrict c) {
  trace_call(0x801BB728u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB728
  c->r[0]=c->lr; // 801BB72C
  cmps(c,0,(int32_t)c->r[3],0); // 801BB730
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB734
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BB738
  c->r[31]=c->r[3]|c->r[3]; // 801BB73C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BB740
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BB744
  if (crb(c,2)) { goto L_801BB770; } // 801BB748
  c->r[3]=0u+0x802D0000u; // 801BB74C
  c->r[3]=c->r[3]+0x00001EB0u; // 801BB750
  c->r[0]=R16(c->r[3]+0x0000006Cu); // 801BB754
  cmps(c,0,(int32_t)c->r[0],0); // 801BB758
  if (crb(c,2)) { goto L_801BB770; } // 801BB75C
  c->r[4]=c->r[31]|c->r[31]; // 801BB760
  c->r[3]=c->r[3]+0x00000064u; // 801BB764
  c->lr=0x801BB76Cu; f_801A8130(c); // 801BB768
  c->r[31]=0u+0x00000000u; // 801BB76C
L_801BB770:;
  c->r[4]=0u+0x802D0000u; // 801BB770
  c->r[4]=c->r[4]+0x00001EB0u; // 801BB774
  c->r[0]=R16(c->r[4]+0x00000080u); // 801BB778
  cmps(c,0,(int32_t)c->r[0],0); // 801BB77C
  if (!crb(c,2)) { goto L_801BB7A4; } // 801BB780
  c->r[3]=0u+0x802D0000u; // 801BB784
  c->r[3]=c->r[3]+0x000023D8u; // 801BB788
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801BB78C
  cmps(c,0,(int32_t)c->r[0],0); // 801BB790
  if (!crb(c,2)) { goto L_801BB7A4; } // 801BB794
  c->r[3]=R16(c->r[4]+0x0000006Cu); // 801BB798
  c->r[0]=c->r[3]+0x00000001u; // 801BB79C
  W16(c->r[4]+0x00000080u,c->r[0]); // 801BB7A0
L_801BB7A4:;
  c->r[3]=0u+0x802D0000u; // 801BB7A4
  c->r[30]=c->r[3]+0x00001EB0u; // 801BB7A8
  goto L_801BB870; // 801BB7AC
L_801BB7B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BB7B0
  if (!crb(c,2)) { goto L_801BB7C4; } // 801BB7B4
  c->r[3]=c->r[30]+0x00000064u; // 801BB7B8
  c->lr=0x801BB7C0u; f_801A83B0(c); // 801BB7BC
  c->r[31]=c->r[3]|c->r[3]; // 801BB7C0
L_801BB7C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BB7C4
  if (crb(c,2)) { goto L_801BB87C; } // 801BB7C8
  c->r[0]=R16(c->r[31]+0x00000004u); // 801BB7CC
  c->r[3]=c->r[31]+c->r[0]; // 801BB7D0
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BB7D4
  c->r[3]=R8(c->r[3]+0x00000008u); // 801BB7D8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB7DC
  c->r[0]=c->r[3]+c->r[0]; // 801BB7E0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801BB7E4
  cmpu(c,0,c->r[0],0x00000C03u); // 801BB7E8
  if (crb(c,2)) { goto L_801BB854; } // 801BB7EC
  cmpu(c,0,c->r[0],0x00000C35u); // 801BB7F0
  if (crb(c,2)) { goto L_801BB854; } // 801BB7F4
  c->r[3]=0u+0x00000002u; // 801BB7F8
  c->lr=0x801BB800u; f_801A7C10(c); // 801BB7FC
  cmps(c,0,(int32_t)c->r[3],0); // 801BB800
  c->r[29]=c->r[3]|c->r[3]; // 801BB804
  if (crb(c,2)) { goto L_801BB854; } // 801BB808
  c->r[4]=c->r[31]|c->r[31]; // 801BB80C
  c->r[5]=0u+0x00000008u; // 801BB810
  c->lr=0x801BB818u; f_80004364(c); // 801BB814
  c->r[3]=R16(c->r[29]+0x00000004u); // 801BB818
  c->r[0]=R16(c->r[31]+0x00000004u); // 801BB81C
  c->r[3]=c->r[29]+c->r[3]; // 801BB820
  c->r[5]=R16(c->r[31]+0x00000002u); // 801BB824
  c->r[4]=c->r[31]+c->r[0]; // 801BB828
  c->r[3]=c->r[3]+0x00000008u; // 801BB82C
  c->r[4]=c->r[4]+0x00000008u; // 801BB830
  c->lr=0x801BB838u; f_80004364(c); // 801BB834
  c->r[4]=c->r[29]|c->r[29]; // 801BB838
  c->r[3]=c->r[30]+0x00000070u; // 801BB83C
  c->lr=0x801BB844u; f_801A8130(c); // 801BB840
  c->r[3]=c->r[30]+0x0000004Cu; // 801BB844
  c->r[4]=0u+0x0000003Cu; // 801BB848
  c->r[5]=0u+0x00000008u; // 801BB84C
  c->lr=0x801BB854u; f_801AADD0(c); // 801BB850
L_801BB854:;
  c->r[5]=R16(c->r[30]+0x00000080u); // 801BB854
  c->r[3]=c->r[31]|c->r[31]; // 801BB858
  c->r[4]=0u+0x00002000u; // 801BB85C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801BB860
  W16(c->r[30]+0x00000080u,c->r[0]); // 801BB864
  c->lr=0x801BB86Cu; f_801AA600(c); // 801BB868
  c->r[31]=0u+0x00000000u; // 801BB86C
L_801BB870:;
  c->r[0]=R16(c->r[30]+0x00000080u); // 801BB870
  cmps(c,0,(int32_t)c->r[0],0); // 801BB874
  if (!crb(c,2)) { IRQCHK(c); goto L_801BB7B0; } // 801BB878
L_801BB87C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BB87C
  if (crb(c,2)) { goto L_801BB898; } // 801BB880
  c->r[3]=0u+0x802D0000u; // 801BB884
  c->r[4]=c->r[31]|c->r[31]; // 801BB888
  c->r[3]=c->r[3]+0x00001EB0u; // 801BB88C
  c->r[3]=c->r[3]+0x00000064u; // 801BB890
  c->lr=0x801BB898u; f_801A8130(c); // 801BB894
L_801BB898:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BB898
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BB89C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BB8A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BB8A4
  c->lr=c->r[0]; // 801BB8A8
  c->r[1]=c->r[1]+0x00000020u; // 801BB8AC
  return; // 801BB8B0
}

// btu_hcif_connection_comp_evt
void f_801BB8B4(Ctx* __restrict c) {
  trace_call(0x801BB8B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB8B4
  c->r[0]=c->lr; // 801BB8B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BB8BC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BB8C0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BB8C4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BB8C8
  c->r[31]=R8(c->r[3]+0x00000000u); // 801BB8CC
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BB8D0
  c->r[5]=R8(c->r[3]+0x00000001u); // 801BB8D4
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BB8D8
  c->r[4]=c->r[5]+c->r[4]; // 801BB8DC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BB8E0
  c->r[30]=rotl(c->r[4],0)&0x00000FFFu; // 801BB8E4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BB8E8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BB8EC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BB8F0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BB8F4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BB8F8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BB8FC
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BB900
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BB904
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BB908
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BB90C
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BB910
  c->r[6]=R8(c->r[3]+0x0000000Au); // 801BB914
  cmpu(c,0,c->r[0],0x00000001u); // 801BB918
  if (!crb(c,2)) { goto L_801BB944; } // 801BB91C
  c->r[4]=c->r[30]|c->r[30]; // 801BB920
  c->r[5]=c->r[31]|c->r[31]; // 801BB924
  c->r[3]=c->r[1]+0x00000008u; // 801BB928
  c->lr=0x801BB930u; f_801B9DEC(c); // 801BB92C
  c->r[3]=c->r[31]|c->r[31]; // 801BB930
  c->r[4]=c->r[30]|c->r[30]; // 801BB934
  c->r[5]=c->r[1]+0x00000008u; // 801BB938
  c->lr=0x801BB940u; f_801C5320(c); // 801BB93C
  goto L_801BB978; // 801BB940
L_801BB944:;
  c->r[3]=c->r[1]+0x00000010u; // 801BB944
  c->r[4]=0u+0x00000000u; // 801BB948
  c->r[5]=0u+0x0000000Eu; // 801BB94C
  c->lr=0x801BB954u; f_800046B4(c); // 801BB950
  c->r[3]=c->r[1]+0x00000014u; // 801BB954
  c->r[4]=c->r[1]+0x00000008u; // 801BB958
  c->r[5]=0u+0x00000006u; // 801BB95C
  c->lr=0x801BB964u; f_80004364(c); // 801BB960
  c->r[3]=c->r[31]|c->r[31]; // 801BB964
  c->r[5]=c->r[30]|c->r[30]; // 801BB968
  c->r[4]=c->r[1]+0x00000008u; // 801BB96C
  c->r[6]=c->r[1]+0x00000010u; // 801BB970
  c->lr=0x801BB978u; f_801B7900(c); // 801BB974
L_801BB978:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BB978
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BB97C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BB980
  c->lr=c->r[0]; // 801BB984
  c->r[1]=c->r[1]+0x00000030u; // 801BB988
  return; // 801BB98C
}

// btu_hcif_connection_request_evt
void f_801BB990(Ctx* __restrict c) {
  trace_call(0x801BB990u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BB990
  c->r[0]=c->lr; // 801BB994
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BB998
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BB99C
  W8(c->r[1]+0x00000011u,c->r[0]); // 801BB9A0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801BB9A4
  W8(c->r[1]+0x00000010u,c->r[0]); // 801BB9A8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BB9AC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801BB9B0
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BB9B4
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801BB9B8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BB9BC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BB9C0
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BB9C4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BB9C8
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BB9CC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BB9D0
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BB9D4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BB9D8
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BB9DC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BB9E0
  c->r[5]=R8(c->r[3]+0x00000009u); // 801BB9E4
  cmpu(c,0,c->r[5],0x00000001u); // 801BB9E8
  if (!crb(c,2)) { goto L_801BBA00; } // 801BB9EC
  c->r[3]=c->r[1]+0x0000000Cu; // 801BB9F0
  c->r[4]=c->r[1]+0x00000008u; // 801BB9F4
  c->lr=0x801BB9FCu; f_801B930C(c); // 801BB9F8
  goto L_801BBA0C; // 801BB9FC
L_801BBA00:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801BBA00
  c->r[4]=c->r[1]+0x00000008u; // 801BBA04
  c->lr=0x801BBA0Cu; f_801B7720(c); // 801BBA08
L_801BBA0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBA0C
  c->lr=c->r[0]; // 801BBA10
  c->r[1]=c->r[1]+0x00000020u; // 801BBA14
  return; // 801BBA18
}

// btu_hcif_qos_setup_comp_evt
void f_801BBA1C(Ctx* __restrict c) {
  trace_call(0x801BBA1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBA1C
  c->r[0]=c->lr; // 801BBA20
  c->r[6]=c->r[3]|c->r[3]; // 801BBA24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BBA28
  c->r[5]=c->r[1]+0x00000008u; // 801BBA2C
  c->r[4]=R8(c->r[6]+0x00000002u); // 801BBA30
  c->r[3]=R8(c->r[3]+0x00000000u); // 801BBA34
  c->r[7]=R8(c->r[6]+0x00000001u); // 801BBA38
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801BBA3C
  c->r[0]=R8(c->r[6]+0x00000003u); // 801BBA40
  c->r[4]=c->r[7]+c->r[4]; // 801BBA44
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BBA48
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801BBA4C
  c->r[0]=R8(c->r[6]+0x00000004u); // 801BBA50
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BBA54
  c->r[7]=R8(c->r[6]+0x00000008u); // 801BBA58
  c->r[8]=R8(c->r[6]+0x00000007u); // 801BBA5C
  c->r[0]=R8(c->r[6]+0x00000006u); // 801BBA60
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801BBA64
  c->r[7]=R8(c->r[6]+0x00000005u); // 801BBA68
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801BBA6C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBA70
  c->r[7]=c->r[8]+c->r[7]; // 801BBA74
  c->r[0]=c->r[9]+c->r[0]; // 801BBA78
  c->r[0]=c->r[7]+c->r[0]; // 801BBA7C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801BBA80
  c->r[7]=R8(c->r[6]+0x0000000Cu); // 801BBA84
  c->r[8]=R8(c->r[6]+0x0000000Bu); // 801BBA88
  c->r[0]=R8(c->r[6]+0x0000000Au); // 801BBA8C
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801BBA90
  c->r[7]=R8(c->r[6]+0x00000009u); // 801BBA94
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801BBA98
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBA9C
  c->r[7]=c->r[8]+c->r[7]; // 801BBAA0
  c->r[0]=c->r[9]+c->r[0]; // 801BBAA4
  c->r[0]=c->r[7]+c->r[0]; // 801BBAA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BBAAC
  c->r[7]=R8(c->r[6]+0x00000010u); // 801BBAB0
  c->r[8]=R8(c->r[6]+0x0000000Fu); // 801BBAB4
  c->r[0]=R8(c->r[6]+0x0000000Eu); // 801BBAB8
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801BBABC
  c->r[7]=R8(c->r[6]+0x0000000Du); // 801BBAC0
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801BBAC4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBAC8
  c->r[7]=c->r[8]+c->r[7]; // 801BBACC
  c->r[0]=c->r[9]+c->r[0]; // 801BBAD0
  c->r[0]=c->r[7]+c->r[0]; // 801BBAD4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801BBAD8
  c->r[8]=R8(c->r[6]+0x00000014u); // 801BBADC
  c->r[7]=R8(c->r[6]+0x00000013u); // 801BBAE0
  c->r[0]=R8(c->r[6]+0x00000012u); // 801BBAE4
  c->r[8]=rotl(c->r[8],24)&0xFF000000u; // 801BBAE8
  c->r[6]=R8(c->r[6]+0x00000011u); // 801BBAEC
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 801BBAF0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBAF4
  c->r[6]=c->r[7]+c->r[6]; // 801BBAF8
  c->r[0]=c->r[8]+c->r[0]; // 801BBAFC
  c->r[0]=c->r[6]+c->r[0]; // 801BBB00
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801BBB04
  c->lr=0x801BBB0Cu; f_801B2204(c); // 801BBB08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBB0C
  c->lr=c->r[0]; // 801BBB10
  c->r[1]=c->r[1]+0x00000020u; // 801BBB14
  return; // 801BBB18
}

// btu_hcif_esco_connection_comp_evt
void f_801BBB1C(Ctx* __restrict c) {
  trace_call(0x801BBB1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBB1C
  c->r[0]=c->lr; // 801BBB20
  c->r[5]=0u+0x00000006u; // 801BBB24
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BBB28
  c->r[4]=c->r[1]+0x00000008u; // 801BBB2C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BBB30
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BBB34
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BBB38
  c->r[31]=R8(c->r[3]+0x00000000u); // 801BBB3C
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBB40
  c->r[7]=R8(c->r[3]+0x00000001u); // 801BBB44
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BBB48
  c->r[6]=c->r[7]+c->r[6]; // 801BBB4C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BBB50
  c->r[30]=rotl(c->r[6],0)&0x0000FFFFu; // 801BBB54
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BBB58
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BBB5C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BBB60
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BBB64
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BBB68
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BBB6C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BBB70
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BBB74
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BBB78
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BBB7C
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BBB80
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801BBB84
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801BBB88
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801BBB8C
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801BBB90
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801BBB94
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801BBB98
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 801BBB9C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBBA0
  c->r[0]=c->r[6]+c->r[0]; // 801BBBA4
  W16(c->r[1]+0x00000010u,c->r[0]); // 801BBBA8
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801BBBAC
  c->r[6]=R8(c->r[3]+0x0000000Eu); // 801BBBB0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBBB4
  c->r[0]=c->r[6]+c->r[0]; // 801BBBB8
  W16(c->r[1]+0x00000012u,c->r[0]); // 801BBBBC
  c->r[0]=R8(c->r[3]+0x00000010u); // 801BBBC0
  c->r[3]=c->r[1]+0x00000014u; // 801BBBC4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801BBBC8
  c->lr=0x801BBBD0u; f_80004364(c); // 801BBBCC
  c->r[3]=c->r[31]|c->r[31]; // 801BBBD0
  c->r[5]=c->r[30]|c->r[30]; // 801BBBD4
  c->r[4]=c->r[1]+0x00000008u; // 801BBBD8
  c->r[6]=c->r[1]+0x00000010u; // 801BBBDC
  c->lr=0x801BBBE4u; f_801B7900(c); // 801BBBE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BBBE4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BBBE8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BBBEC
  c->lr=c->r[0]; // 801BBBF0
  c->r[1]=c->r[1]+0x00000030u; // 801BBBF4
  return; // 801BBBF8
}

// btu_hcif_hdl_command_complete
void f_801BBBFC(Ctx* __restrict c) {
  trace_call(0x801BBBFCu);
  cmps(c,0,(int32_t)c->r[3],3092); // 801BBBFC
  c->r[6]=c->r[3]|c->r[3]; // 801BBC00
  if (crb(c,2)) { goto L_801BBD0C; } // 801BBC04
  if (!crb(c,0)) { goto L_801BBC60; } // 801BBC08
  cmps(c,0,(int32_t)c->r[3],3077); // 801BBC0C
  if (crb(c,2)) { goto L_801BBCC0; } // 801BBC10
  if (!crb(c,0)) { goto L_801BBC3C; } // 801BBC14
  cmps(c,0,(int32_t)c->r[3],2060); // 801BBC18
  if (crb(c,2)) { goto L_801BBCEC; } // 801BBC1C
  if (!crb(c,0)) { goto L_801BBC30; } // 801BBC20
  cmps(c,0,(int32_t)c->r[3],1026); // 801BBC24
  if (crb(c,2)) { goto L_801BBCB8; } // 801BBC28
  goto L_801BBD34; // 801BBC2C
L_801BBC30:;
  cmps(c,0,(int32_t)c->r[3],3075); // 801BBC30
  if (crb(c,2)) { goto L_801BBCB4; } // 801BBC34
  goto L_801BBD34; // 801BBC38
L_801BBC3C:;
  cmps(c,0,(int32_t)c->r[3],3089); // 801BBC3C
  if (crb(c,2)) { goto L_801BBCD0; } // 801BBC40
  if (!crb(c,0)) { goto L_801BBC54; } // 801BBC44
  cmps(c,0,(int32_t)c->r[3],3085); // 801BBC48
  if (crb(c,2)) { goto L_801BBCC8; } // 801BBC4C
  goto L_801BBD34; // 801BBC50
L_801BBC54:;
  cmps(c,0,(int32_t)c->r[3],3091); // 801BBC54
  if (!crb(c,0)) { goto L_801BBD34; } // 801BBC58
  goto L_801BBCD8; // 801BBC5C
L_801BBC60:;
  cmps(c,0,(int32_t)c->r[3],4105); // 801BBC60
  if (crb(c,2)) { goto L_801BBD18; } // 801BBC64
  if (!crb(c,0)) { goto L_801BBC90; } // 801BBC68
  cmps(c,0,(int32_t)c->r[3],4099); // 801BBC6C
  if (crb(c,2)) { goto L_801BBD00; } // 801BBC70
  if (!crb(c,0)) { goto L_801BBC84; } // 801BBC74
  cmps(c,0,(int32_t)c->r[3],4097); // 801BBC78
  if (crb(c,2)) { goto L_801BBCE0; } // 801BBC7C
  goto L_801BBD34; // 801BBC80
L_801BBC84:;
  cmps(c,0,(int32_t)c->r[3],4101); // 801BBC84
  if (crb(c,2)) { goto L_801BBCF4; } // 801BBC88
  goto L_801BBD34; // 801BBC8C
L_801BBC90:;
  cmps(c,0,(int32_t)c->r[3],5124); // 801BBC90
  if (crb(c,2)) { goto L_801BBD34; } // 801BBC94
  if (!crb(c,0)) { goto L_801BBCA8; } // 801BBC98
  cmps(c,0,(int32_t)c->r[3],5123); // 801BBC9C
  if (!crb(c,0)) { goto L_801BBD24; } // 801BBCA0
  goto L_801BBD34; // 801BBCA4
L_801BBCA8:;
  cmps(c,0,(int32_t)c->r[3],5126); // 801BBCA8
  if (!crb(c,0)) { goto L_801BBD34; } // 801BBCAC
  goto L_801BBD2C; // 801BBCB0
L_801BBCB4:;
  f_801B3768(c); return; // 801BBCB4
L_801BBCB8:;
  c->r[3]=0u+0x00000000u; // 801BBCB8
  f_801B6298(c); return; // 801BBCBC
L_801BBCC0:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBCC0
  f_801B5E00(c); return; // 801BBCC4
L_801BBCC8:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBCC8
  f_801B47CC(c); return; // 801BBCCC
L_801BBCD0:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBCD0
  f_801B4848(c); return; // 801BBCD4
L_801BBCD8:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBCD8
  f_801B48A4(c); return; // 801BBCDC
L_801BBCE0:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBCE0
  c->r[4]=c->r[5]|c->r[5]; // 801BBCE4
  f_801B39F4(c); return; // 801BBCE8
L_801BBCEC:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBCEC
  f_801B1788(c); return; // 801BBCF0
L_801BBCF4:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBCF4
  c->r[4]=c->r[5]|c->r[5]; // 801BBCF8
  f_801B392C(c); return; // 801BBCFC
L_801BBD00:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBD00
  c->r[4]=c->r[5]|c->r[5]; // 801BBD04
  f_801B3AB0(c); return; // 801BBD08
L_801BBD0C:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBD0C
  c->r[4]=c->r[5]|c->r[5]; // 801BBD10
  f_801B4064(c); return; // 801BBD14
L_801BBD18:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBD18
  c->r[4]=c->r[5]|c->r[5]; // 801BBD1C
  f_801B4130(c); return; // 801BBD20
L_801BBD24:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBD24
  f_801B2670(c); return; // 801BBD28
L_801BBD2C:;
  c->r[3]=c->r[4]|c->r[4]; // 801BBD2C
  f_801B2554(c); return; // 801BBD30
L_801BBD34:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801BBD34
  c->r[0]=c->r[3]+0x00000000u; // 801BBD38
  cmpu(c,0,c->r[0],0x0000FC00u); // 801BBD3C
  if (!crb(c,2)) return; // 801BBD40
  c->r[3]=c->r[4]|c->r[4]; // 801BBD44
  c->r[4]=c->r[6]|c->r[6]; // 801BBD48
  f_801B4378(c); return; // 801BBD4C
  return; // 801BBD50
}

// btu_hcif_command_complete_evt
void f_801BBD54(Ctx* __restrict c) {
  trace_call(0x801BBD54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBD54
  c->r[0]=c->lr; // 801BBD58
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BBD5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BBD60
  c->r[31]=0u+0x802D0000u; // 801BBD64
  c->r[31]=c->r[31]+0x00001EB0u; // 801BBD68
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BBD6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BBD70
  c->r[29]=c->r[4]|c->r[4]; // 801BBD74
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BBD78
  c->r[28]=c->r[3]|c->r[3]; // 801BBD7C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BBD80
  W16(c->r[31]+0x00000080u,c->r[0]); // 801BBD84
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BBD88
  c->r[3]=R8(c->r[3]+0x00000001u); // 801BBD8C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBD90
  c->r[0]=c->r[3]+c->r[0]; // 801BBD94
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801BBD98
  cmpu(c,0,c->r[30],0x00000C03u); // 801BBD9C
  if (crb(c,2)) { goto L_801BBE30; } // 801BBDA0
  cmpu(c,0,c->r[30],0x00000C35u); // 801BBDA4
  if (crb(c,2)) { goto L_801BBE30; } // 801BBDA8
  cmps(c,0,(int32_t)c->r[30],0); // 801BBDAC
  if (crb(c,2)) { goto L_801BBE30; } // 801BBDB0
  c->r[3]=c->r[31]+0x00000070u; // 801BBDB4
  c->lr=0x801BBDBCu; f_801A83B0(c); // 801BBDB8
  cmps(c,0,(int32_t)c->r[3],0); // 801BBDBC
  if (crb(c,2)) { goto L_801BBDFC; } // 801BBDC0
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BBDC4
  cmpu(c,0,c->r[30],0x0000FC4Cu); // 801BBDC8
  c->r[4]=R8(c->r[3]+0x00000008u); // 801BBDCC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBDD0
  c->r[0]=c->r[4]+c->r[0]; // 801BBDD4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801BBDD8
  if (!crb(c,2)) { goto L_801BBDF8; } // 801BBDDC
  cmpu(c,0,c->r[0],c->r[30]); // 801BBDE0
  if (crb(c,2)) { goto L_801BBDF8; } // 801BBDE4
  c->r[4]=c->r[3]|c->r[3]; // 801BBDE8
  c->r[3]=c->r[31]+0x00000070u; // 801BBDEC
  c->lr=0x801BBDF4u; f_801A8270(c); // 801BBDF0
  goto L_801BBE4C; // 801BBDF4
L_801BBDF8:;
  c->lr=0x801BBDFCu; f_801A7D00(c); // 801BBDF8
L_801BBDFC:;
  c->r[31]=0u+0x802D0000u; // 801BBDFC
  c->r[31]=c->r[31]+0x00001EB0u; // 801BBE00
  c->r[3]=c->r[31]+0x00000070u; // 801BBE04
  c->lr=0x801BBE0Cu; f_801A8550(c); // 801BBE08
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BBE0C
  if (!crb(c,2)) { goto L_801BBE28; } // 801BBE10
  c->r[3]=c->r[31]+0x0000004Cu; // 801BBE14
  c->r[4]=0u+0x0000003Cu; // 801BBE18
  c->r[5]=0u+0x00000008u; // 801BBE1C
  c->lr=0x801BBE24u; f_801AADD0(c); // 801BBE20
  goto L_801BBE30; // 801BBE24
L_801BBE28:;
  c->r[3]=c->r[31]+0x0000004Cu; // 801BBE28
  c->lr=0x801BBE30u; f_801AAE40(c); // 801BBE2C
L_801BBE30:;
  c->r[0]=c->r[29]+0xFFFFFFFDu; // 801BBE30
  c->r[3]=c->r[30]|c->r[30]; // 801BBE34
  c->r[4]=c->r[28]+0x00000003u; // 801BBE38
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801BBE3C
  c->lr=0x801BBE44u; f_801BBBFC(c); // 801BBE40
  c->r[3]=0u+0x00000000u; // 801BBE44
  c->lr=0x801BBE4Cu; f_801BB728(c); // 801BBE48
L_801BBE4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BBE4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BBE50
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BBE54
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BBE58
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BBE5C
  c->lr=c->r[0]; // 801BBE60
  c->r[1]=c->r[1]+0x00000020u; // 801BBE64
  return; // 801BBE68
}

// btu_hcif_hdl_command_status
void f_801BBE6C(Ctx* __restrict c) {
  trace_call(0x801BBE6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BBE6C
  c->r[0]=c->lr; // 801BBE70
  cmps(c,0,(int32_t)c->r[3],2050); // 801BBE74
  c->r[6]=c->r[3]|c->r[3]; // 801BBE78
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BBE7C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801BBE80
  W32(c->r[1]+0x00000028u,c->r[30]); // 801BBE84
  c->r[30]=c->r[4]|c->r[4]; // 801BBE88
  if (crb(c,2)) { goto L_801BBEB4; } // 801BBE8C
  if (!crb(c,0)) { goto L_801BBEA0; } // 801BBE90
  cmps(c,0,(int32_t)c->r[3],2049); // 801BBE94
  if (!crb(c,0)) { goto L_801BBEA8; } // 801BBE98
  goto L_801BBEB4; // 801BBE9C
L_801BBEA0:;
  cmps(c,0,(int32_t)c->r[3],2055); // 801BBEA0
  if (!crb(c,0)) { goto L_801BBEB4; } // 801BBEA4
L_801BBEA8:;
  c->r[3]=c->r[30]|c->r[30]; // 801BBEA8
  c->lr=0x801BBEB0u; f_801B709C(c); // 801BBEAC
  goto L_801BC054; // 801BBEB0
L_801BBEB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801BBEB4
  if (crb(c,2)) { goto L_801BC054; } // 801BBEB8
  cmps(c,0,(int32_t)c->r[3],1049); // 801BBEBC
  if (crb(c,2)) { goto L_801BBF10; } // 801BBEC0
  if (!crb(c,0)) { goto L_801BBEEC; } // 801BBEC4
  cmps(c,0,(int32_t)c->r[3],1025); // 801BBEC8
  if (crb(c,2)) { goto L_801BBF04; } // 801BBECC
  if (!crb(c,0)) { goto L_801BBEE0; } // 801BBED0
  cmps(c,0,(int32_t)c->r[3],13); // 801BBED4
  if (crb(c,2)) { goto L_801BBF38; } // 801BBED8
  goto L_801BC034; // 801BBEDC
L_801BBEE0:;
  cmps(c,0,(int32_t)c->r[3],1029); // 801BBEE0
  if (crb(c,2)) { goto L_801BBF64; } // 801BBEE4
  goto L_801BC034; // 801BBEE8
L_801BBEEC:;
  cmps(c,0,(int32_t)c->r[3],2059); // 801BBEEC
  if (crb(c,2)) { goto L_801BBF4C; } // 801BBEF0
  if (!crb(c,0)) { goto L_801BC034; } // 801BBEF4
  cmps(c,0,(int32_t)c->r[3],1064); // 801BBEF8
  if (crb(c,2)) { goto L_801BBFD0; } // 801BBEFC
  goto L_801BC034; // 801BBF00
L_801BBF04:;
  c->r[3]=c->r[30]|c->r[30]; // 801BBF04
  c->lr=0x801BBF0Cu; f_801B6298(c); // 801BBF08
  goto L_801BC054; // 801BBF0C
L_801BBF10:;
  c->r[6]=c->r[30]|c->r[30]; // 801BBF10
  c->r[3]=0u+0x00000000u; // 801BBF14
  c->r[4]=0u+0x00000000u; // 801BBF18
  c->r[5]=0u+0x00000000u; // 801BBF1C
  c->lr=0x801BBF24u; f_801B64EC(c); // 801BBF20
  c->r[5]=c->r[30]|c->r[30]; // 801BBF24
  c->r[3]=0u+0x00000000u; // 801BBF28
  c->r[4]=0u+0x00000000u; // 801BBF2C
  c->lr=0x801BBF34u; f_801B9548(c); // 801BBF30
  goto L_801BC054; // 801BBF34
L_801BBF38:;
  c->r[3]=c->r[30]|c->r[30]; // 801BBF38
  c->r[4]=0u+0x00000000u; // 801BBF3C
  c->r[5]=0u+0x00000000u; // 801BBF40
  c->lr=0x801BBF48u; f_801B2204(c); // 801BBF44
  goto L_801BC054; // 801BBF48
L_801BBF4C:;
  c->r[3]=c->r[30]|c->r[30]; // 801BBF4C
  c->r[4]=0u+0x00000000u; // 801BBF50
  c->r[5]=0u+0x000000FFu; // 801BBF54
  c->lr=0x801BBF5Cu; f_801B1DD0(c); // 801BBF58
  c->lr=0x801BBF60u; f_801C61CC(c); // 801BBF5C
  goto L_801BC054; // 801BBF60
L_801BBF64:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BBF64
  if (crb(c,2)) { goto L_801BC054; } // 801BBF68
  c->r[4]=R8(c->r[5]+0x00000001u); // 801BBF6C
  c->r[31]=0u+0x00010000u; // 801BBF70
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801BBF74
  c->r[3]=c->r[1]+0x00000008u; // 801BBF78
  W8(c->r[1]+0x0000000Du,c->r[4]); // 801BBF7C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801BBF80
  c->r[6]=0u+0x00000000u; // 801BBF84
  c->r[0]=R8(c->r[5]+0x00000002u); // 801BBF88
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BBF8C
  c->r[0]=R8(c->r[5]+0x00000003u); // 801BBF90
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BBF94
  c->r[0]=R8(c->r[5]+0x00000004u); // 801BBF98
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BBF9C
  c->r[0]=R8(c->r[5]+0x00000005u); // 801BBFA0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BBFA4
  c->r[0]=R8(c->r[5]+0x00000006u); // 801BBFA8
  c->r[5]=c->r[30]|c->r[30]; // 801BBFAC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BBFB0
  c->lr=0x801BBFB8u; f_801B9DEC(c); // 801BBFB4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801BBFB8
  c->r[3]=c->r[30]|c->r[30]; // 801BBFBC
  c->r[5]=c->r[1]+0x00000008u; // 801BBFC0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801BBFC4
  c->lr=0x801BBFCCu; f_801C5320(c); // 801BBFC8
  goto L_801BC054; // 801BBFCC
L_801BBFD0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BBFD0
  if (crb(c,2)) { goto L_801BC054; } // 801BBFD4
  c->r[0]=R8(c->r[5]+0x00000002u); // 801BBFD8
  c->r[3]=R8(c->r[5]+0x00000001u); // 801BBFDC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BBFE0
  c->r[0]=c->r[3]+c->r[0]; // 801BBFE4
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801BBFE8
  c->r[3]=c->r[31]|c->r[31]; // 801BBFEC
  c->lr=0x801BBFF4u; f_801B8054(c); // 801BBFF0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BBFF4
  if (crb(c,2)) { goto L_801BC01C; } // 801BBFF8
  c->r[3]=c->r[30]|c->r[30]; // 801BBFFC
  c->r[4]=c->r[31]|c->r[31]; // 801BC000
  c->r[5]=0u+0x00000000u; // 801BC004
  c->r[6]=0u+0x00000000u; // 801BC008
  c->r[7]=0u+0x00000000u; // 801BC00C
  c->r[8]=0u+0x00000000u; // 801BC010
  c->lr=0x801BC018u; f_801B7F50(c); // 801BC014
  goto L_801BC054; // 801BC018
L_801BC01C:;
  c->r[3]=c->r[30]|c->r[30]; // 801BC01C
  c->r[5]=c->r[31]|c->r[31]; // 801BC020
  c->r[6]=c->r[1]+0x00000010u; // 801BC024
  c->r[4]=0u+0x00000000u; // 801BC028
  c->lr=0x801BC030u; f_801B7900(c); // 801BC02C
  goto L_801BC054; // 801BC030
L_801BC034:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801BC034
  c->r[0]=c->r[3]+0x00000000u; // 801BC038
  cmpu(c,0,c->r[0],0x0000FC00u); // 801BC03C
  if (!crb(c,2)) { goto L_801BC054; } // 801BC040
  c->r[3]=c->r[5]|c->r[5]; // 801BC044
  c->r[4]=c->r[6]|c->r[6]; // 801BC048
  c->r[5]=0u+0x00000001u; // 801BC04C
  c->lr=0x801BC054u; f_801B4378(c); // 801BC050
L_801BC054:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BC054
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801BC058
  c->r[30]=R32(c->r[1]+0x00000028u); // 801BC05C
  c->lr=c->r[0]; // 801BC060
  c->r[1]=c->r[1]+0x00000030u; // 801BC064
  return; // 801BC068
}

// btu_hcif_command_status_evt
void f_801BC06C(Ctx* __restrict c) {
  trace_call(0x801BC06Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC06C
  c->r[0]=c->lr; // 801BC070
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC074
  c->r[11]=c->r[1]+0x00000020u; // 801BC078
  c->lr=0x801BC080u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC07C
  c->r[4]=0u+0x802D0000u; // 801BC080
  c->r[29]=R8(c->r[3]+0x00000000u); // 801BC084
  c->r[0]=R8(c->r[3]+0x00000001u); // 801BC088
  c->r[4]=c->r[4]+0x00001EB0u; // 801BC08C
  c->r[31]=0u+0x00000000u; // 801BC090
  c->r[27]=0u+0x00000000u; // 801BC094
  W16(c->r[4]+0x00000080u,c->r[0]); // 801BC098
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BC09C
  c->r[3]=R8(c->r[3]+0x00000002u); // 801BC0A0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BC0A4
  c->r[0]=c->r[3]+c->r[0]; // 801BC0A8
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801BC0AC
  cmpu(c,0,c->r[28],0x00000C03u); // 801BC0B0
  if (crb(c,2)) { goto L_801BC154; } // 801BC0B4
  cmpu(c,0,c->r[28],0x00000C35u); // 801BC0B8
  if (crb(c,2)) { goto L_801BC154; } // 801BC0BC
  cmps(c,0,(int32_t)c->r[28],0); // 801BC0C0
  if (crb(c,2)) { goto L_801BC154; } // 801BC0C4
  c->r[3]=c->r[4]+0x00000070u; // 801BC0C8
  c->lr=0x801BC0D0u; f_801A83B0(c); // 801BC0CC
  cmps(c,0,(int32_t)c->r[3],0); // 801BC0D0
  c->r[31]=c->r[3]|c->r[3]; // 801BC0D4
  if (crb(c,2)) { goto L_801BC120; } // 801BC0D8
  c->r[0]=R16(c->r[3]+0x00000004u); // 801BC0DC
  c->r[3]=c->r[3]+c->r[0]; // 801BC0E0
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BC0E4
  c->r[27]=c->r[3]+0x0000000Au; // 801BC0E8
  c->r[3]=R8(c->r[3]+0x00000008u); // 801BC0EC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BC0F0
  c->r[0]=c->r[3]+c->r[0]; // 801BC0F4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801BC0F8
  cmpu(c,0,c->r[6],c->r[28]); // 801BC0FC
  if (crb(c,2)) { goto L_801BC120; } // 801BC100
  c->r[3]=0u+0x00070000u; // 801BC104
  c->r[4]=0u+0x80240000u; // 801BC108
  c->r[5]=c->r[28]|c->r[28]; // 801BC10C
  c->r[27]=0u+0x00000000u; // 801BC110
  c->r[3]=c->r[3]+0x00000001u; // 801BC114
  c->r[4]=c->r[4]+0x00006450u; // 801BC118
  c->lr=0x801BC120u; f_801AA800(c); // 801BC11C
L_801BC120:;
  c->r[30]=0u+0x802D0000u; // 801BC120
  c->r[30]=c->r[30]+0x00001EB0u; // 801BC124
  c->r[3]=c->r[30]+0x00000070u; // 801BC128
  c->lr=0x801BC130u; f_801A8550(c); // 801BC12C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BC130
  if (!crb(c,2)) { goto L_801BC14C; } // 801BC134
  c->r[3]=c->r[30]+0x0000004Cu; // 801BC138
  c->r[4]=0u+0x0000003Cu; // 801BC13C
  c->r[5]=0u+0x00000008u; // 801BC140
  c->lr=0x801BC148u; f_801AADD0(c); // 801BC144
  goto L_801BC154; // 801BC148
L_801BC14C:;
  c->r[3]=c->r[30]+0x0000004Cu; // 801BC14C
  c->lr=0x801BC154u; f_801AAE40(c); // 801BC150
L_801BC154:;
  c->r[3]=c->r[28]|c->r[28]; // 801BC154
  c->r[4]=c->r[29]|c->r[29]; // 801BC158
  c->r[5]=c->r[27]|c->r[27]; // 801BC15C
  c->lr=0x801BC164u; f_801BBE6C(c); // 801BC160
  cmps(c,0,(int32_t)c->r[31],0); // 801BC164
  if (crb(c,2)) { goto L_801BC174; } // 801BC168
  c->r[3]=c->r[31]|c->r[31]; // 801BC16C
  c->lr=0x801BC174u; f_801A7D00(c); // 801BC170
L_801BC174:;
  c->r[3]=0u+0x00000000u; // 801BC174
  c->lr=0x801BC17Cu; f_801BB728(c); // 801BC178
  c->r[11]=c->r[1]+0x00000020u; // 801BC17C
  c->lr=0x801BC184u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BC180
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC184
  c->lr=c->r[0]; // 801BC188
  c->r[1]=c->r[1]+0x00000020u; // 801BC18C
  return; // 801BC190
}

// btu_hcif_cmd_timeout
void f_801BC194(Ctx* __restrict c) {
  trace_call(0x801BC194u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC194
  c->r[0]=c->lr; // 801BC198
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC19C
  c->r[0]=0u+0x00000001u; // 801BC1A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BC1A4
  c->r[31]=0u+0x802D0000u; // 801BC1A8
  c->r[31]=c->r[31]+0x00001EB0u; // 801BC1AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BC1B0
  c->r[3]=c->r[31]+0x00000070u; // 801BC1B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BC1B8
  W16(c->r[31]+0x00000080u,c->r[0]); // 801BC1BC
  c->lr=0x801BC1C4u; f_801A83B0(c); // 801BC1C0
  cmps(c,0,(int32_t)c->r[3],0); // 801BC1C4
  c->r[30]=c->r[3]|c->r[3]; // 801BC1C8
  if (!crb(c,2)) { goto L_801BC1E8; } // 801BC1CC
  c->r[3]=0u+0x00070000u; // 801BC1D0
  c->r[4]=0u+0x80240000u; // 801BC1D4
  c->r[3]=c->r[3]+0x00000001u; // 801BC1D8
  c->r[4]=c->r[4]+0x00006478u; // 801BC1DC
  c->lr=0x801BC1E4u; f_801AA7C0(c); // 801BC1E0
  goto L_801BC2D0; // 801BC1E4
L_801BC1E8:;
  c->r[3]=c->r[31]+0x00000070u; // 801BC1E8
  c->lr=0x801BC1F0u; f_801A8550(c); // 801BC1EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801BC1F0
  if (!crb(c,2)) { goto L_801BC208; } // 801BC1F4
  c->r[3]=c->r[31]+0x0000004Cu; // 801BC1F8
  c->r[4]=0u+0x0000003Cu; // 801BC1FC
  c->r[5]=0u+0x00000008u; // 801BC200
  c->lr=0x801BC208u; f_801AADD0(c); // 801BC204
L_801BC208:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 801BC208
  c->r[3]=0u+0x00070000u; // 801BC20C
  c->r[4]=0u+0x80240000u; // 801BC210
  c->r[31]=c->r[30]+c->r[0]; // 801BC214
  c->r[3]=c->r[3]+0x00000001u; // 801BC218
  c->r[0]=R8(c->r[31]+0x00000009u); // 801BC21C
  c->r[4]=c->r[4]+0x00006498u; // 801BC220
  c->r[5]=R8(c->r[31]+0x00000008u); // 801BC224
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801BC228
  c->r[0]=c->r[5]+c->r[0]; // 801BC22C
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801BC230
  c->r[5]=c->r[29]|c->r[29]; // 801BC234
  c->lr=0x801BC23Cu; f_801AA7E0(c); // 801BC238
  cmps(c,0,(int32_t)c->r[29],1049); // 801BC23C
  if (crb(c,2)) { goto L_801BC28C; } // 801BC240
  if (!crb(c,0)) { goto L_801BC26C; } // 801BC244
  cmps(c,0,(int32_t)c->r[29],1025); // 801BC248
  if (crb(c,2)) { goto L_801BC28C; } // 801BC24C
  if (!crb(c,0)) { goto L_801BC260; } // 801BC250
  cmps(c,0,(int32_t)c->r[29],13); // 801BC254
  if (crb(c,2)) { goto L_801BC28C; } // 801BC258
  goto L_801BC2A0; // 801BC25C
L_801BC260:;
  cmps(c,0,(int32_t)c->r[29],1029); // 801BC260
  if (crb(c,2)) { goto L_801BC28C; } // 801BC264
  goto L_801BC2A0; // 801BC268
L_801BC26C:;
  cmps(c,0,(int32_t)c->r[29],2050); // 801BC26C
  if (crb(c,2)) { goto L_801BC2A0; } // 801BC270
  if (!crb(c,0)) { goto L_801BC284; } // 801BC274
  cmps(c,0,(int32_t)c->r[29],2049); // 801BC278
  if (!crb(c,0)) { goto L_801BC28C; } // 801BC27C
  goto L_801BC2A0; // 801BC280
L_801BC284:;
  cmps(c,0,(int32_t)c->r[29],2055); // 801BC284
  if (!crb(c,0)) { goto L_801BC2A0; } // 801BC288
L_801BC28C:;
  c->r[3]=c->r[29]|c->r[29]; // 801BC28C
  c->r[5]=c->r[31]+0x0000000Au; // 801BC290
  c->r[4]=0u+0x0000001Fu; // 801BC294
  c->lr=0x801BC29Cu; f_801BBE6C(c); // 801BC298
  goto L_801BC2B8; // 801BC29C
L_801BC2A0:;
  c->r[0]=0u+0x0000001Fu; // 801BC2A0
  c->r[3]=c->r[29]|c->r[29]; // 801BC2A4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BC2A8
  c->r[4]=c->r[1]+0x00000008u; // 801BC2AC
  c->r[5]=0u+0x00000001u; // 801BC2B0
  c->lr=0x801BC2B8u; f_801BBBFC(c); // 801BC2B4
L_801BC2B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801BC2B8
  c->lr=0x801BC2C0u; f_801A7D00(c); // 801BC2BC
  c->r[3]=0u+0x00000002u; // 801BC2C0
  c->lr=0x801BC2C8u; f_801B4A98(c); // 801BC2C4
  c->r[3]=0u+0x00000000u; // 801BC2C8
  c->lr=0x801BC2D0u; f_801BB728(c); // 801BC2CC
L_801BC2D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC2D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BC2D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BC2D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BC2DC
  c->lr=c->r[0]; // 801BC2E0
  c->r[1]=c->r[1]+0x00000020u; // 801BC2E4
  return; // 801BC2E8
}

// btu_hcif_link_key_notification_evt
void f_801BC2EC(Ctx* __restrict c) {
  trace_call(0x801BC2ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC2EC
  c->r[0]=c->lr; // 801BC2F0
  c->r[5]=c->r[3]+0x00000016u; // 801BC2F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC2F8
  c->r[4]=c->r[1]+0x00000010u; // 801BC2FC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BC300
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801BC304
  c->r[0]=R8(c->r[3]+0x00000001u); // 801BC308
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BC30C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BC310
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801BC314
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BC318
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801BC31C
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BC320
  W8(c->r[1]+0x00000009u,c->r[0]); // 801BC324
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BC328
  W8(c->r[1]+0x00000008u,c->r[0]); // 801BC32C
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BC330
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 801BC334
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BC338
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801BC33C
  c->r[0]=R8(c->r[3]+0x00000008u); // 801BC340
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801BC344
  c->r[0]=R8(c->r[3]+0x00000009u); // 801BC348
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801BC34C
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801BC350
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801BC354
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801BC358
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801BC35C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801BC360
  W8(c->r[1]+0x00000019u,c->r[0]); // 801BC364
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801BC368
  W8(c->r[1]+0x00000018u,c->r[0]); // 801BC36C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801BC370
  W8(c->r[1]+0x00000017u,c->r[0]); // 801BC374
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801BC378
  W8(c->r[1]+0x00000016u,c->r[0]); // 801BC37C
  c->r[0]=R8(c->r[3]+0x00000010u); // 801BC380
  W8(c->r[1]+0x00000015u,c->r[0]); // 801BC384
  c->r[0]=R8(c->r[3]+0x00000011u); // 801BC388
  W8(c->r[1]+0x00000014u,c->r[0]); // 801BC38C
  c->r[0]=R8(c->r[3]+0x00000012u); // 801BC390
  W8(c->r[1]+0x00000013u,c->r[0]); // 801BC394
  c->r[0]=R8(c->r[3]+0x00000013u); // 801BC398
  W8(c->r[1]+0x00000012u,c->r[0]); // 801BC39C
  c->r[0]=R8(c->r[3]+0x00000014u); // 801BC3A0
  W8(c->r[1]+0x00000011u,c->r[0]); // 801BC3A4
  c->r[0]=R8(c->r[3]+0x00000015u); // 801BC3A8
  c->r[3]=c->r[1]+0x00000008u; // 801BC3AC
  W8(c->r[1]+0x00000010u,c->r[0]); // 801BC3B0
  c->r[5]=R8(c->r[5]+0x00000000u); // 801BC3B4
  c->lr=0x801BC3BCu; f_801BA464(c); // 801BC3B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC3BC
  c->lr=c->r[0]; // 801BC3C0
  c->r[1]=c->r[1]+0x00000020u; // 801BC3C4
  return; // 801BC3C8
}

// btu_init_core
void f_801BC3CC(Ctx* __restrict c) {
  trace_call(0x801BC3CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC3CC
  c->r[0]=c->lr; // 801BC3D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC3D4
  c->lr=0x801BC3DCu; f_801B6684(c); // 801BC3D8
  c->lr=0x801BC3E0u; f_801C6358(c); // 801BC3DC
  c->lr=0x801BC3E4u; f_801D2488(c); // 801BC3E0
  c->lr=0x801BC3E8u; f_801B4AB8(c); // 801BC3E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC3E8
  c->lr=c->r[0]; // 801BC3EC
  c->r[1]=c->r[1]+0x00000010u; // 801BC3F0
  return; // 801BC3F4
}

// BTE_Init
void f_801BC3F8(Ctx* __restrict c) {
  trace_call(0x801BC3F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC3F8
  c->r[0]=c->lr; // 801BC3FC
  c->r[4]=0u+0x00000000u; // 801BC400
  c->r[5]=0u+0x00000084u; // 801BC404
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BC40C
  c->r[31]=0u+0x802D0000u; // 801BC410
  c->r[3]=c->r[31]+0x00001EB0u; // 801BC414
  c->lr=0x801BC41Cu; f_800046B4(c); // 801BC418
  c->r[3]=c->r[31]+0x00001EB0u; // 801BC41C
  c->r[4]=0u+0x000002A4u; // 801BC420
  c->r[0]=0u+0x00000001u; // 801BC424
  W16(c->r[3]+0x0000007Eu,c->r[4]); // 801BC428
  W16(c->r[3]+0x00000080u,c->r[0]); // 801BC42C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BC430
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC434
  c->lr=c->r[0]; // 801BC438
  c->r[1]=c->r[1]+0x00000010u; // 801BC43C
  return; // 801BC440
}

// WBT_ExtCreateRecord
void f_801BC444(Ctx* __restrict c) {
  trace_call(0x801BC444u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC444
  c->r[0]=c->lr; // 801BC448
  W32(c->r[1]+0x00000124u,c->r[0]); // 801BC44C
  c->r[0]=0u+0x00001002u; // 801BC450
  c->r[3]=c->r[1]+0x00000014u; // 801BC454
  c->r[4]=c->r[1]+0x00000010u; // 801BC458
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801BC45C
  c->r[31]=0u+0x00000000u; // 801BC460
  W32(c->r[1]+0x00000118u,c->r[30]); // 801BC464
  W32(c->r[1]+0x00000010u,c->r[31]); // 801BC468
  W16(c->r[1]+0x00000008u,c->r[0]); // 801BC46C
  c->lr=0x801BC474u; f_801D0070(c); // 801BC470
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801BC474
  if (crb(c,2)) { goto L_801BC4C4; } // 801BC478
  c->r[30]=c->r[1]+0x00000016u; // 801BC47C
  c->r[4]=0u+0x00000000u; // 801BC480
  c->r[3]=c->r[30]|c->r[30]; // 801BC484
  c->r[5]=0u+0x000000FAu; // 801BC488
  c->lr=0x801BC490u; f_800046B4(c); // 801BC48C
  c->r[0]=0u+0x00000001u; // 801BC490
  c->r[3]=0u+0x0000000Fu; // 801BC494
  W16(c->r[1]+0x00000016u,c->r[3]); // 801BC498
  c->r[3]=c->r[30]|c->r[30]; // 801BC49C
  c->r[4]=c->r[1]+0x00000010u; // 801BC4A0
  W16(c->r[1]+0x00000018u,c->r[0]); // 801BC4A4
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801BC4A8
  c->lr=0x801BC4B0u; f_801CFD10(c); // 801BC4AC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801BC4B0
  if (crb(c,2)) { goto L_801BC4C4; } // 801BC4B4
  W32(c->r[1]+0x00000010u,c->r[31]); // 801BC4B8
  c->r[3]=0u+0x00000000u; // 801BC4BC
  goto L_801BC50C; // 801BC4C0
L_801BC4C4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801BC4C4
  c->r[6]=c->r[1]+0x00000008u; // 801BC4C8
  c->r[4]=0u+0x00000005u; // 801BC4CC
  c->r[5]=0u+0x00000001u; // 801BC4D0
  c->lr=0x801BC4D8u; f_801D0D80(c); // 801BC4D4
  c->r[0]=0u+0x00000000u; // 801BC4D8
  c->r[4]=0u+0x00000001u; // 801BC4DC
  c->r[3]=0u+0x00010000u; // 801BC4E0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801BC4E4
  c->r[0]=c->r[3]+0xFFFF8001u; // 801BC4E8
  c->r[3]=R32(c->r[1]+0x00000010u); // 801BC4EC
  W8(c->r[1]+0x0000000Du,c->r[4]); // 801BC4F0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801BC4F4
  c->r[7]=c->r[1]+0x0000000Cu; // 801BC4F8
  c->r[5]=0u+0x00000001u; // 801BC4FC
  c->r[6]=0u+0x00000002u; // 801BC500
  c->lr=0x801BC508u; f_801D09E8(c); // 801BC504
  c->r[3]=0u+0x00000001u; // 801BC508
L_801BC50C:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801BC50C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801BC510
  c->r[30]=R32(c->r[1]+0x00000118u); // 801BC514
  c->lr=c->r[0]; // 801BC518
  c->r[1]=c->r[1]+0x00000120u; // 801BC51C
  return; // 801BC520
}

// GAP_Init
void f_801BC524(Ctx* __restrict c) {
  trace_call(0x801BC524u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC524
  c->r[0]=c->lr; // 801BC528
  c->r[4]=0u+0x00000000u; // 801BC52C
  c->r[5]=0u+0x000003ACu; // 801BC530
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BC538
  c->r[31]=0u+0x802D0000u; // 801BC53C
  c->r[3]=c->r[31]+0x00004BA0u; // 801BC540
  c->lr=0x801BC548u; f_800046B4(c); // 801BC544
  c->r[5]=0u+0x801C0000u; // 801BC548
  c->r[3]=0u+0x801C0000u; // 801BC54C
  c->r[5]=c->r[5]+0xFFFFD298u; // 801BC550
  c->r[4]=c->r[31]+0x00004BA0u; // 801BC554
  c->r[3]=c->r[3]+0xFFFFD2A4u; // 801BC558
  c->r[0]=0u+0x00000005u; // 801BC55C
  W32(c->r[4]+0x00000020u,c->r[5]); // 801BC560
  W32(c->r[4]+0x00000024u,c->r[3]); // 801BC564
  W8(c->r[4]+0x00000028u,c->r[0]); // 801BC568
  c->lr=0x801BC570u; f_801BC584(c); // 801BC56C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC570
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BC574
  c->lr=c->r[0]; // 801BC578
  c->r[1]=c->r[1]+0x00000010u; // 801BC57C
  return; // 801BC580
}

// gap_conn_init
void f_801BC584(Ctx* __restrict c) {
  trace_call(0x801BC584u);
  c->r[10]=0u+0x801C0000u; // 801BC584
  c->r[9]=0u+0x802D0000u; // 801BC588
  c->r[8]=0u+0x801C0000u; // 801BC58C
  c->r[7]=0u+0x801C0000u; // 801BC590
  c->r[6]=0u+0x801C0000u; // 801BC594
  c->r[5]=0u+0x801C0000u; // 801BC598
  c->r[4]=0u+0x801C0000u; // 801BC59C
  c->r[3]=0u+0x801C0000u; // 801BC5A0
  c->r[10]=c->r[10]+0xFFFFC5F4u; // 801BC5A4
  c->r[9]=c->r[9]+0x00004BA0u; // 801BC5A8
  c->r[0]=0u+0x00000000u; // 801BC5AC
  c->r[8]=c->r[8]+0xFFFFC780u; // 801BC5B0
  c->r[7]=c->r[7]+0xFFFFC95Cu; // 801BC5B4
  c->r[6]=c->r[6]+0xFFFFCA98u; // 801BC5B8
  c->r[5]=c->r[5]+0xFFFFCC84u; // 801BC5BC
  c->r[4]=c->r[4]+0xFFFFCE7Cu; // 801BC5C0
  c->r[3]=c->r[3]+0xFFFFCF8Cu; // 801BC5C4
  W32(c->r[9]+0x00000084u,c->r[10]); // 801BC5C8
  W32(c->r[9]+0x00000088u,c->r[8]); // 801BC5CC
  W32(c->r[9]+0x0000008Cu,c->r[0]); // 801BC5D0
  W32(c->r[9]+0x00000090u,c->r[7]); // 801BC5D4
  W32(c->r[9]+0x00000094u,c->r[6]); // 801BC5D8
  W32(c->r[9]+0x00000098u,c->r[5]); // 801BC5DC
  W32(c->r[9]+0x0000009Cu,c->r[0]); // 801BC5E0
  W32(c->r[9]+0x000000A0u,c->r[0]); // 801BC5E4
  W32(c->r[9]+0x000000A4u,c->r[4]); // 801BC5E8
  W32(c->r[9]+0x000000A8u,c->r[3]); // 801BC5EC
  return; // 801BC5F0
}

// gap_connect_ind
void f_801BC5F4(Ctx* __restrict c) {
  trace_call(0x801BC5F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC5F4
  c->r[0]=c->lr; // 801BC5F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BC5FC
  c->r[11]=c->r[1]+0x00000020u; // 801BC600
  c->lr=0x801BC608u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BC604
  c->r[7]=0u+0x802D0000u; // 801BC608
  c->r[26]=c->r[3]|c->r[3]; // 801BC60C
  c->r[7]=c->r[7]+0x00004BA0u; // 801BC610
  c->r[31]=c->r[4]|c->r[4]; // 801BC614
  c->r[27]=c->r[5]|c->r[5]; // 801BC618
  c->r[28]=c->r[6]|c->r[6]; // 801BC61C
  c->r[29]=c->r[7]+0x000000ACu; // 801BC620
  c->r[30]=0u+0x00000000u; // 801BC624
L_801BC628:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BC628
  cmpu(c,0,c->r[0],0x00000001u); // 801BC62C
  if (!crb(c,2)) { goto L_801BC664; } // 801BC630
  c->r[0]=R16(c->r[29]+0x00000010u); // 801BC634
  cmpu(c,0,c->r[0],c->r[27]); // 801BC638
  if (!crb(c,2)) { goto L_801BC664; } // 801BC63C
  c->r[0]=R8(c->r[29]+0x00000008u); // 801BC640
  cmps(c,0,(int32_t)c->r[0],0); // 801BC644
  if (crb(c,2)) { goto L_801BC674; } // 801BC648
  c->r[3]=c->r[26]|c->r[26]; // 801BC64C
  c->r[4]=c->r[29]+0x00000009u; // 801BC650
  c->r[5]=0u+0x00000006u; // 801BC654
  c->lr=0x801BC65Cu; f_801D8F78(c); // 801BC658
  cmps(c,0,(int32_t)c->r[3],0); // 801BC65C
  if (crb(c,2)) { goto L_801BC674; } // 801BC660
L_801BC664:;
  c->r[30]=c->r[30]+0x00000001u; // 801BC664
  c->r[29]=c->r[29]+0x00000060u; // 801BC668
  cmpu(c,0,c->r[30],0x00000008u); // 801BC66C
  if (crb(c,0)) { IRQCHK(c); goto L_801BC628; } // 801BC670
L_801BC674:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 801BC674
  cmpu(c,0,c->r[0],0x00000008u); // 801BC678
  if (!crb(c,2)) { goto L_801BC6FC; } // 801BC67C
  c->r[3]=0u+0x802D0000u; // 801BC680
  c->r[3]=c->r[3]+0x00004BA0u; // 801BC684
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BC688
  cmpu(c,0,c->r[0],0x00000002u); // 801BC68C
  if (crb(c,0)) { goto L_801BC6A4; } // 801BC690
  c->r[3]=0u+0x000E0000u; // 801BC694
  c->r[4]=c->r[13]+0xFFFFACD0u; // 801BC698
  c->r[3]=c->r[3]+0x00000001u; // 801BC69C
  c->lr=0x801BC6A4u; f_801AA7C0(c); // 801BC6A0
L_801BC6A4:;
  c->r[3]=0u+0x802D0000u; // 801BC6A4
  c->r[3]=c->r[3]+0x00004BA0u; // 801BC6A8
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BC6AC
  cmpu(c,0,c->r[0],0x00000002u); // 801BC6B0
  if (crb(c,0)) { goto L_801BC6CC; } // 801BC6B4
  c->r[3]=0u+0x000E0000u; // 801BC6B8
  c->r[4]=0u+0x80240000u; // 801BC6BC
  c->r[3]=c->r[3]+0x00000001u; // 801BC6C0
  c->r[4]=c->r[4]+0x000064C8u; // 801BC6C4
  c->lr=0x801BC6CCu; f_801AA7C0(c); // 801BC6C8
L_801BC6CC:;
  c->r[3]=0u+0x802D0000u; // 801BC6CC
  c->r[3]=c->r[3]+0x00004BA0u; // 801BC6D0
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BC6D4
  cmpu(c,0,c->r[0],0x00000002u); // 801BC6D8
  if (crb(c,0)) { goto L_801BC6F0; } // 801BC6DC
  c->r[3]=0u+0x000E0000u; // 801BC6E0
  c->r[4]=c->r[13]+0xFFFFACD0u; // 801BC6E4
  c->r[3]=c->r[3]+0x00000001u; // 801BC6E8
  c->lr=0x801BC6F0u; f_801AA7C0(c); // 801BC6EC
L_801BC6F0:;
  c->r[3]=c->r[31]|c->r[31]; // 801BC6F0
  c->lr=0x801BC6F8u; f_801C389C(c); // 801BC6F4
  goto L_801BC768; // 801BC6F8
L_801BC6FC:;
  c->r[0]=0u+0x00000003u; // 801BC6FC
  c->r[4]=c->r[26]|c->r[26]; // 801BC700
  W8(c->r[29]+0x00000000u,c->r[0]); // 801BC704
  c->r[3]=c->r[29]+0x00000009u; // 801BC708
  c->r[5]=0u+0x00000006u; // 801BC70C
  c->lr=0x801BC714u; f_80004364(c); // 801BC710
  W16(c->r[29]+0x00000006u,c->r[31]); // 801BC714
  c->r[3]=c->r[26]|c->r[26]; // 801BC718
  c->r[4]=c->r[28]|c->r[28]; // 801BC71C
  c->r[5]=c->r[31]|c->r[31]; // 801BC720
  c->r[6]=0u+0x00000000u; // 801BC724
  c->r[7]=0u+0x00000000u; // 801BC728
  c->lr=0x801BC730u; f_801C3584(c); // 801BC72C
  c->r[3]=0u+0x802D0000u; // 801BC730
  c->r[3]=c->r[3]+0x00004BA0u; // 801BC734
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BC738
  cmpu(c,0,c->r[0],0x00000004u); // 801BC73C
  if (crb(c,0)) { goto L_801BC75C; } // 801BC740
  c->r[3]=0u+0x000E0000u; // 801BC744
  c->r[4]=0u+0x80240000u; // 801BC748
  c->r[5]=R16(c->r[29]+0x00000006u); // 801BC74C
  c->r[3]=c->r[3]+0x00000003u; // 801BC750
  c->r[4]=c->r[4]+0x0000650Cu; // 801BC754
  c->lr=0x801BC75Cu; f_801AA7E0(c); // 801BC758
L_801BC75C:;
  c->r[3]=c->r[31]|c->r[31]; // 801BC75C
  c->r[4]=c->r[29]+0x00000024u; // 801BC760
  c->lr=0x801BC768u; f_801C3714(c); // 801BC764
L_801BC768:;
  c->r[11]=c->r[1]+0x00000020u; // 801BC768
  c->lr=0x801BC770u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BC76C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BC770
  c->lr=c->r[0]; // 801BC774
  c->r[1]=c->r[1]+0x00000020u; // 801BC778
  return; // 801BC77C
}

// gap_connect_cfm
void f_801BC780(Ctx* __restrict c) {
  trace_call(0x801BC780u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC780
  c->r[0]=c->lr; // 801BC784
  c->r[5]=0u+0x802D0000u; // 801BC788
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC78C
  c->r[0]=0u+0x00000002u; // 801BC790
  c->r[5]=c->r[5]+0x00004BA0u; // 801BC794
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BC798
  c->r[31]=c->r[5]+0x000000ACu; // 801BC79C
  c->r[5]=0u+0x00000000u; // 801BC7A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BC7A4
  c->ctr=c->r[0]; // 801BC7A8
L_801BC7AC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BC7AC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC7B0
  if (crb(c,2)) { goto L_801BC7C8; } // 801BC7B4
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BC7B8
  cmpu(c,0,c->r[0],c->r[3]); // 801BC7BC
  if (!crb(c,2)) { goto L_801BC7C8; } // 801BC7C0
  goto L_801BC838; // 801BC7C4
L_801BC7C8:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BC7C8
  c->r[5]=c->r[5]+0x00000001u; // 801BC7CC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC7D0
  if (crb(c,2)) { goto L_801BC7E8; } // 801BC7D4
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BC7D8
  cmpu(c,0,c->r[0],c->r[3]); // 801BC7DC
  if (!crb(c,2)) { goto L_801BC7E8; } // 801BC7E0
  goto L_801BC838; // 801BC7E4
L_801BC7E8:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BC7E8
  c->r[5]=c->r[5]+0x00000001u; // 801BC7EC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC7F0
  if (crb(c,2)) { goto L_801BC808; } // 801BC7F4
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BC7F8
  cmpu(c,0,c->r[0],c->r[3]); // 801BC7FC
  if (!crb(c,2)) { goto L_801BC808; } // 801BC800
  goto L_801BC838; // 801BC804
L_801BC808:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BC808
  c->r[5]=c->r[5]+0x00000001u; // 801BC80C
  cmps(c,0,(int32_t)c->r[0],0); // 801BC810
  if (crb(c,2)) { goto L_801BC828; } // 801BC814
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BC818
  cmpu(c,0,c->r[0],c->r[3]); // 801BC81C
  if (!crb(c,2)) { goto L_801BC828; } // 801BC820
  goto L_801BC838; // 801BC824
L_801BC828:;
  c->r[5]=c->r[5]+0x00000001u; // 801BC828
  c->r[31]=c->r[31]+0x00000060u; // 801BC82C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC7AC; } // 801BC830
  c->r[31]=0u+0x00000000u; // 801BC834
L_801BC838:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BC838
  if (crb(c,2)) { goto L_801BC944; } // 801BC83C
  cmps(c,0,(int32_t)c->r[4],0); // 801BC840
  if (!crb(c,2)) { goto L_801BC868; } // 801BC844
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BC848
  cmpu(c,0,c->r[0],0x00000002u); // 801BC84C
  if (!crb(c,2)) { goto L_801BC868; } // 801BC850
  c->r[0]=0u+0x00000003u; // 801BC854
  c->r[4]=c->r[31]+0x00000024u; // 801BC858
  W8(c->r[31]+0x00000000u,c->r[0]); // 801BC85C
  c->lr=0x801BC864u; f_801C3714(c); // 801BC860
  goto L_801BC944; // 801BC864
L_801BC868:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BC868
  cmps(c,0,(int32_t)c->r[12],0); // 801BC86C
  if (crb(c,2)) { goto L_801BC884; } // 801BC870
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BC874
  c->r[4]=0u+0x00000101u; // 801BC878
  c->ctr=c->r[12]; // 801BC87C
  if (true) { c->lr=0x801BC884u; dispatch(c,c->ctr); } // 801BC880
L_801BC884:;
  c->r[30]=R16(c->r[31]+0x00000010u); // 801BC884
  goto L_801BC898; // 801BC888
L_801BC88C:;
  c->r[3]=c->r[31]+0x00000014u; // 801BC88C
  c->lr=0x801BC894u; f_801A83B0(c); // 801BC890
  c->lr=0x801BC898u; f_801A7D00(c); // 801BC894
L_801BC898:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801BC898
  cmps(c,0,(int32_t)c->r[0],0); // 801BC89C
  if (!crb(c,2)) { IRQCHK(c); goto L_801BC88C; } // 801BC8A0
  c->r[3]=0u+0x802D0000u; // 801BC8A4
  c->r[4]=0u+0x00000000u; // 801BC8A8
  c->r[3]=c->r[3]+0x00004BA0u; // 801BC8AC
  c->r[0]=0u+0x00000002u; // 801BC8B0
  W8(c->r[31]+0x00000000u,c->r[4]); // 801BC8B4
  c->r[4]=c->r[3]+0x000000ACu; // 801BC8B8
  c->r[3]=0u+0x00000000u; // 801BC8BC
  c->ctr=c->r[0]; // 801BC8C0
L_801BC8C4:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BC8C4
  cmps(c,0,(int32_t)c->r[0],0); // 801BC8C8
  if (crb(c,2)) { goto L_801BC8DC; } // 801BC8CC
  c->r[0]=R16(c->r[4]+0x00000010u); // 801BC8D0
  cmpu(c,0,c->r[0],c->r[30]); // 801BC8D4
  if (crb(c,2)) { goto L_801BC944; } // 801BC8D8
L_801BC8DC:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801BC8DC
  c->r[3]=c->r[3]+0x00000001u; // 801BC8E0
  cmps(c,0,(int32_t)c->r[0],0); // 801BC8E4
  if (crb(c,2)) { goto L_801BC8F8; } // 801BC8E8
  c->r[0]=R16(c->r[4]+0x00000070u); // 801BC8EC
  cmpu(c,0,c->r[0],c->r[30]); // 801BC8F0
  if (crb(c,2)) { goto L_801BC944; } // 801BC8F4
L_801BC8F8:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801BC8F8
  c->r[3]=c->r[3]+0x00000001u; // 801BC8FC
  cmps(c,0,(int32_t)c->r[0],0); // 801BC900
  if (crb(c,2)) { goto L_801BC914; } // 801BC904
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801BC908
  cmpu(c,0,c->r[0],c->r[30]); // 801BC90C
  if (crb(c,2)) { goto L_801BC944; } // 801BC910
L_801BC914:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801BC914
  c->r[3]=c->r[3]+0x00000001u; // 801BC918
  cmps(c,0,(int32_t)c->r[0],0); // 801BC91C
  if (crb(c,2)) { goto L_801BC930; } // 801BC920
  c->r[0]=R16(c->r[4]+0x00000130u); // 801BC924
  cmpu(c,0,c->r[0],c->r[30]); // 801BC928
  if (crb(c,2)) { goto L_801BC944; } // 801BC92C
L_801BC930:;
  c->r[3]=c->r[3]+0x00000001u; // 801BC930
  c->r[4]=c->r[4]+0x00000180u; // 801BC934
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC8C4; } // 801BC938
  c->r[3]=c->r[30]|c->r[30]; // 801BC93C
  c->lr=0x801BC944u; f_801C32C0(c); // 801BC940
L_801BC944:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BC944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BC948
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BC94C
  c->lr=c->r[0]; // 801BC950
  c->r[1]=c->r[1]+0x00000010u; // 801BC954
  return; // 801BC958
}

// gap_config_ind
void f_801BC95C(Ctx* __restrict c) {
  trace_call(0x801BC95Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BC95C
  c->r[0]=c->lr; // 801BC960
  c->r[5]=0u+0x802D0000u; // 801BC964
  c->r[6]=0u+0x00000000u; // 801BC968
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BC96C
  c->r[0]=0u+0x00000002u; // 801BC970
  c->r[5]=c->r[5]+0x00004BA0u; // 801BC974
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BC978
  c->r[31]=c->r[5]+0x000000ACu; // 801BC97C
  c->ctr=c->r[0]; // 801BC980
L_801BC984:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BC984
  cmps(c,0,(int32_t)c->r[0],0); // 801BC988
  if (crb(c,2)) { goto L_801BC9A0; } // 801BC98C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BC990
  cmpu(c,0,c->r[0],c->r[3]); // 801BC994
  if (!crb(c,2)) { goto L_801BC9A0; } // 801BC998
  goto L_801BCA10; // 801BC99C
L_801BC9A0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BC9A0
  c->r[6]=c->r[6]+0x00000001u; // 801BC9A4
  cmps(c,0,(int32_t)c->r[0],0); // 801BC9A8
  if (crb(c,2)) { goto L_801BC9C0; } // 801BC9AC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BC9B0
  cmpu(c,0,c->r[0],c->r[3]); // 801BC9B4
  if (!crb(c,2)) { goto L_801BC9C0; } // 801BC9B8
  goto L_801BCA10; // 801BC9BC
L_801BC9C0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BC9C0
  c->r[6]=c->r[6]+0x00000001u; // 801BC9C4
  cmps(c,0,(int32_t)c->r[0],0); // 801BC9C8
  if (crb(c,2)) { goto L_801BC9E0; } // 801BC9CC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BC9D0
  cmpu(c,0,c->r[0],c->r[3]); // 801BC9D4
  if (!crb(c,2)) { goto L_801BC9E0; } // 801BC9D8
  goto L_801BCA10; // 801BC9DC
L_801BC9E0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BC9E0
  c->r[6]=c->r[6]+0x00000001u; // 801BC9E4
  cmps(c,0,(int32_t)c->r[0],0); // 801BC9E8
  if (crb(c,2)) { goto L_801BCA00; } // 801BC9EC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BC9F0
  cmpu(c,0,c->r[0],c->r[3]); // 801BC9F4
  if (!crb(c,2)) { goto L_801BCA00; } // 801BC9F8
  goto L_801BCA10; // 801BC9FC
L_801BCA00:;
  c->r[6]=c->r[6]+0x00000001u; // 801BCA00
  c->r[31]=c->r[31]+0x00000060u; // 801BCA04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BC984; } // 801BCA08
  c->r[31]=0u+0x00000000u; // 801BCA0C
L_801BCA10:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BCA10
  if (crb(c,2)) { goto L_801BCA84; } // 801BCA14
  c->r[0]=R8(c->r[4]+0x00000002u); // 801BCA18
  cmps(c,0,(int32_t)c->r[0],0); // 801BCA1C
  if (crb(c,2)) { goto L_801BCA30; } // 801BCA20
  c->r[0]=R16(c->r[4]+0x00000004u); // 801BCA24
  cmpu(c,0,c->r[0],0x0000069Bu); // 801BCA28
  if (!crb(c,1)) { goto L_801BCA3C; } // 801BCA2C
L_801BCA30:;
  c->r[0]=0u+0x0000069Bu; // 801BCA30
  W16(c->r[31]+0x00000012u,c->r[0]); // 801BCA34
  goto L_801BCA40; // 801BCA38
L_801BCA3C:;
  W16(c->r[31]+0x00000012u,c->r[0]); // 801BCA3C
L_801BCA40:;
  c->r[0]=0u+0x00000000u; // 801BCA40
  W8(c->r[4]+0x00000020u,c->r[0]); // 801BCA44
  W8(c->r[4]+0x00000002u,c->r[0]); // 801BCA48
  W16(c->r[4]+0x00000000u,c->r[0]); // 801BCA4C
  c->lr=0x801BCA54u; f_801C37CC(c); // 801BCA50
  c->r[0]=R8(c->r[31]+0x00000001u); // 801BCA54
  c->r[3]=c->r[0]|0x00000002u; // 801BCA58
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801BCA5C
  W8(c->r[31]+0x00000001u,c->r[3]); // 801BCA60
  if (crb(c,2)) { goto L_801BCA84; } // 801BCA64
  c->r[0]=0u+0x00000004u; // 801BCA68
  c->r[4]=0u+0x00000100u; // 801BCA6C
  W8(c->r[31]+0x00000000u,c->r[0]); // 801BCA70
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BCA74
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BCA78
  c->ctr=c->r[12]; // 801BCA7C
  if (true) { c->lr=0x801BCA84u; dispatch(c,c->ctr); } // 801BCA80
L_801BCA84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BCA84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BCA88
  c->lr=c->r[0]; // 801BCA8C
  c->r[1]=c->r[1]+0x00000010u; // 801BCA90
  return; // 801BCA94
}

// gap_config_cfm
void f_801BCA98(Ctx* __restrict c) {
  trace_call(0x801BCA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCA98
  c->r[0]=c->lr; // 801BCA9C
  c->r[5]=0u+0x802D0000u; // 801BCAA0
  c->r[6]=0u+0x00000000u; // 801BCAA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BCAA8
  c->r[0]=0u+0x00000002u; // 801BCAAC
  c->r[5]=c->r[5]+0x00004BA0u; // 801BCAB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BCAB4
  c->r[31]=c->r[5]+0x000000ACu; // 801BCAB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BCABC
  c->ctr=c->r[0]; // 801BCAC0
L_801BCAC4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BCAC4
  cmps(c,0,(int32_t)c->r[0],0); // 801BCAC8
  if (crb(c,2)) { goto L_801BCAE0; } // 801BCACC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCAD0
  cmpu(c,0,c->r[0],c->r[3]); // 801BCAD4
  if (!crb(c,2)) { goto L_801BCAE0; } // 801BCAD8
  goto L_801BCB50; // 801BCADC
L_801BCAE0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCAE0
  c->r[6]=c->r[6]+0x00000001u; // 801BCAE4
  cmps(c,0,(int32_t)c->r[0],0); // 801BCAE8
  if (crb(c,2)) { goto L_801BCB00; } // 801BCAEC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCAF0
  cmpu(c,0,c->r[0],c->r[3]); // 801BCAF4
  if (!crb(c,2)) { goto L_801BCB00; } // 801BCAF8
  goto L_801BCB50; // 801BCAFC
L_801BCB00:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCB00
  c->r[6]=c->r[6]+0x00000001u; // 801BCB04
  cmps(c,0,(int32_t)c->r[0],0); // 801BCB08
  if (crb(c,2)) { goto L_801BCB20; } // 801BCB0C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCB10
  cmpu(c,0,c->r[0],c->r[3]); // 801BCB14
  if (!crb(c,2)) { goto L_801BCB20; } // 801BCB18
  goto L_801BCB50; // 801BCB1C
L_801BCB20:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCB20
  c->r[6]=c->r[6]+0x00000001u; // 801BCB24
  cmps(c,0,(int32_t)c->r[0],0); // 801BCB28
  if (crb(c,2)) { goto L_801BCB40; } // 801BCB2C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCB30
  cmpu(c,0,c->r[0],c->r[3]); // 801BCB34
  if (!crb(c,2)) { goto L_801BCB40; } // 801BCB38
  goto L_801BCB50; // 801BCB3C
L_801BCB40:;
  c->r[6]=c->r[6]+0x00000001u; // 801BCB40
  c->r[31]=c->r[31]+0x00000060u; // 801BCB44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCAC4; } // 801BCB48
  c->r[31]=0u+0x00000000u; // 801BCB4C
L_801BCB50:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BCB50
  if (crb(c,2)) { goto L_801BCC6C; } // 801BCB54
  c->r[0]=R16(c->r[4]+0x00000000u); // 801BCB58
  cmps(c,0,(int32_t)c->r[0],0); // 801BCB5C
  if (!crb(c,2)) { goto L_801BCB98; } // 801BCB60
  c->r[0]=R8(c->r[31]+0x00000001u); // 801BCB64
  c->r[3]=c->r[0]|0x00000004u; // 801BCB68
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801BCB6C
  W8(c->r[31]+0x00000001u,c->r[3]); // 801BCB70
  if (crb(c,2)) { goto L_801BCC6C; } // 801BCB74
  c->r[0]=0u+0x00000004u; // 801BCB78
  c->r[4]=0u+0x00000100u; // 801BCB7C
  W8(c->r[31]+0x00000000u,c->r[0]); // 801BCB80
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BCB84
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BCB88
  c->ctr=c->r[12]; // 801BCB8C
  if (true) { c->lr=0x801BCB94u; dispatch(c,c->ctr); } // 801BCB90
  goto L_801BCC6C; // 801BCB94
L_801BCB98:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BCB98
  c->r[4]=0u+0x00000101u; // 801BCB9C
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BCBA0
  c->ctr=c->r[12]; // 801BCBA4
  if (true) { c->lr=0x801BCBACu; dispatch(c,c->ctr); } // 801BCBA8
  c->r[30]=R16(c->r[31]+0x00000010u); // 801BCBAC
  goto L_801BCBC0; // 801BCBB0
L_801BCBB4:;
  c->r[3]=c->r[31]+0x00000014u; // 801BCBB4
  c->lr=0x801BCBBCu; f_801A83B0(c); // 801BCBB8
  c->lr=0x801BCBC0u; f_801A7D00(c); // 801BCBBC
L_801BCBC0:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801BCBC0
  cmps(c,0,(int32_t)c->r[0],0); // 801BCBC4
  if (!crb(c,2)) { IRQCHK(c); goto L_801BCBB4; } // 801BCBC8
  c->r[3]=0u+0x802D0000u; // 801BCBCC
  c->r[4]=0u+0x00000000u; // 801BCBD0
  c->r[3]=c->r[3]+0x00004BA0u; // 801BCBD4
  c->r[0]=0u+0x00000002u; // 801BCBD8
  W8(c->r[31]+0x00000000u,c->r[4]); // 801BCBDC
  c->r[4]=c->r[3]+0x000000ACu; // 801BCBE0
  c->r[3]=0u+0x00000000u; // 801BCBE4
  c->ctr=c->r[0]; // 801BCBE8
L_801BCBEC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BCBEC
  cmps(c,0,(int32_t)c->r[0],0); // 801BCBF0
  if (crb(c,2)) { goto L_801BCC04; } // 801BCBF4
  c->r[0]=R16(c->r[4]+0x00000010u); // 801BCBF8
  cmpu(c,0,c->r[0],c->r[30]); // 801BCBFC
  if (crb(c,2)) { goto L_801BCC6C; } // 801BCC00
L_801BCC04:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801BCC04
  c->r[3]=c->r[3]+0x00000001u; // 801BCC08
  cmps(c,0,(int32_t)c->r[0],0); // 801BCC0C
  if (crb(c,2)) { goto L_801BCC20; } // 801BCC10
  c->r[0]=R16(c->r[4]+0x00000070u); // 801BCC14
  cmpu(c,0,c->r[0],c->r[30]); // 801BCC18
  if (crb(c,2)) { goto L_801BCC6C; } // 801BCC1C
L_801BCC20:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801BCC20
  c->r[3]=c->r[3]+0x00000001u; // 801BCC24
  cmps(c,0,(int32_t)c->r[0],0); // 801BCC28
  if (crb(c,2)) { goto L_801BCC3C; } // 801BCC2C
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801BCC30
  cmpu(c,0,c->r[0],c->r[30]); // 801BCC34
  if (crb(c,2)) { goto L_801BCC6C; } // 801BCC38
L_801BCC3C:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801BCC3C
  c->r[3]=c->r[3]+0x00000001u; // 801BCC40
  cmps(c,0,(int32_t)c->r[0],0); // 801BCC44
  if (crb(c,2)) { goto L_801BCC58; } // 801BCC48
  c->r[0]=R16(c->r[4]+0x00000130u); // 801BCC4C
  cmpu(c,0,c->r[0],c->r[30]); // 801BCC50
  if (crb(c,2)) { goto L_801BCC6C; } // 801BCC54
L_801BCC58:;
  c->r[3]=c->r[3]+0x00000001u; // 801BCC58
  c->r[4]=c->r[4]+0x00000180u; // 801BCC5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCBEC; } // 801BCC60
  c->r[3]=c->r[30]|c->r[30]; // 801BCC64
  c->lr=0x801BCC6Cu; f_801C32C0(c); // 801BCC68
L_801BCC6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BCC6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BCC70
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BCC74
  c->lr=c->r[0]; // 801BCC78
  c->r[1]=c->r[1]+0x00000010u; // 801BCC7C
  return; // 801BCC80
}

// gap_disconnect_ind
void f_801BCC84(Ctx* __restrict c) {
  trace_call(0x801BCC84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCC84
  c->r[0]=c->lr; // 801BCC88
  c->r[5]=0u+0x802D0000u; // 801BCC8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BCC90
  c->r[5]=c->r[5]+0x00004BA0u; // 801BCC94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BCC98
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BCC9C
  c->r[30]=c->r[4]|c->r[4]; // 801BCCA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BCCA4
  c->r[29]=c->r[3]|c->r[3]; // 801BCCA8
  c->r[0]=R8(c->r[5]+0x00000028u); // 801BCCAC
  cmpu(c,0,c->r[0],0x00000004u); // 801BCCB0
  if (crb(c,0)) { goto L_801BCCD0; } // 801BCCB4
  c->r[3]=0u+0x000E0000u; // 801BCCB8
  c->r[4]=0u+0x80240000u; // 801BCCBC
  c->r[5]=c->r[29]|c->r[29]; // 801BCCC0
  c->r[3]=c->r[3]+0x00000003u; // 801BCCC4
  c->r[4]=c->r[4]+0x00006538u; // 801BCCC8
  c->lr=0x801BCCD0u; f_801AA7E0(c); // 801BCCCC
L_801BCCD0:;
  c->r[3]=0u+0x802D0000u; // 801BCCD0
  c->r[0]=0u+0x00000002u; // 801BCCD4
  c->r[3]=c->r[3]+0x00004BA0u; // 801BCCD8
  c->r[4]=0u+0x00000000u; // 801BCCDC
  c->r[31]=c->r[3]+0x000000ACu; // 801BCCE0
  c->ctr=c->r[0]; // 801BCCE4
L_801BCCE8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BCCE8
  cmps(c,0,(int32_t)c->r[0],0); // 801BCCEC
  if (crb(c,2)) { goto L_801BCD04; } // 801BCCF0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCCF4
  cmpu(c,0,c->r[0],c->r[29]); // 801BCCF8
  if (!crb(c,2)) { goto L_801BCD04; } // 801BCCFC
  goto L_801BCD74; // 801BCD00
L_801BCD04:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCD04
  c->r[4]=c->r[4]+0x00000001u; // 801BCD08
  cmps(c,0,(int32_t)c->r[0],0); // 801BCD0C
  if (crb(c,2)) { goto L_801BCD24; } // 801BCD10
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCD14
  cmpu(c,0,c->r[0],c->r[29]); // 801BCD18
  if (!crb(c,2)) { goto L_801BCD24; } // 801BCD1C
  goto L_801BCD74; // 801BCD20
L_801BCD24:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCD24
  c->r[4]=c->r[4]+0x00000001u; // 801BCD28
  cmps(c,0,(int32_t)c->r[0],0); // 801BCD2C
  if (crb(c,2)) { goto L_801BCD44; } // 801BCD30
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCD34
  cmpu(c,0,c->r[0],c->r[29]); // 801BCD38
  if (!crb(c,2)) { goto L_801BCD44; } // 801BCD3C
  goto L_801BCD74; // 801BCD40
L_801BCD44:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCD44
  c->r[4]=c->r[4]+0x00000001u; // 801BCD48
  cmps(c,0,(int32_t)c->r[0],0); // 801BCD4C
  if (crb(c,2)) { goto L_801BCD64; } // 801BCD50
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCD54
  cmpu(c,0,c->r[0],c->r[29]); // 801BCD58
  if (!crb(c,2)) { goto L_801BCD64; } // 801BCD5C
  goto L_801BCD74; // 801BCD60
L_801BCD64:;
  c->r[4]=c->r[4]+0x00000001u; // 801BCD64
  c->r[31]=c->r[31]+0x00000060u; // 801BCD68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCCE8; } // 801BCD6C
  c->r[31]=0u+0x00000000u; // 801BCD70
L_801BCD74:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BCD74
  if (crb(c,2)) { goto L_801BCE60; } // 801BCD78
  cmps(c,0,(int32_t)c->r[30],0); // 801BCD7C
  if (crb(c,2)) { goto L_801BCD8C; } // 801BCD80
  c->r[3]=c->r[29]|c->r[29]; // 801BCD84
  c->lr=0x801BCD8Cu; f_801C3940(c); // 801BCD88
L_801BCD8C:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BCD8C
  c->r[4]=0u+0x00000101u; // 801BCD90
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BCD94
  c->ctr=c->r[12]; // 801BCD98
  if (true) { c->lr=0x801BCDA0u; dispatch(c,c->ctr); } // 801BCD9C
  c->r[30]=R16(c->r[31]+0x00000010u); // 801BCDA0
  goto L_801BCDB4; // 801BCDA4
L_801BCDA8:;
  c->r[3]=c->r[31]+0x00000014u; // 801BCDA8
  c->lr=0x801BCDB0u; f_801A83B0(c); // 801BCDAC
  c->lr=0x801BCDB4u; f_801A7D00(c); // 801BCDB0
L_801BCDB4:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801BCDB4
  cmps(c,0,(int32_t)c->r[0],0); // 801BCDB8
  if (!crb(c,2)) { IRQCHK(c); goto L_801BCDA8; } // 801BCDBC
  c->r[3]=0u+0x802D0000u; // 801BCDC0
  c->r[4]=0u+0x00000000u; // 801BCDC4
  c->r[3]=c->r[3]+0x00004BA0u; // 801BCDC8
  c->r[0]=0u+0x00000002u; // 801BCDCC
  W8(c->r[31]+0x00000000u,c->r[4]); // 801BCDD0
  c->r[4]=c->r[3]+0x000000ACu; // 801BCDD4
  c->r[3]=0u+0x00000000u; // 801BCDD8
  c->ctr=c->r[0]; // 801BCDDC
L_801BCDE0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BCDE0
  cmps(c,0,(int32_t)c->r[0],0); // 801BCDE4
  if (crb(c,2)) { goto L_801BCDF8; } // 801BCDE8
  c->r[0]=R16(c->r[4]+0x00000010u); // 801BCDEC
  cmpu(c,0,c->r[0],c->r[30]); // 801BCDF0
  if (crb(c,2)) { goto L_801BCE60; } // 801BCDF4
L_801BCDF8:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801BCDF8
  c->r[3]=c->r[3]+0x00000001u; // 801BCDFC
  cmps(c,0,(int32_t)c->r[0],0); // 801BCE00
  if (crb(c,2)) { goto L_801BCE14; } // 801BCE04
  c->r[0]=R16(c->r[4]+0x00000070u); // 801BCE08
  cmpu(c,0,c->r[0],c->r[30]); // 801BCE0C
  if (crb(c,2)) { goto L_801BCE60; } // 801BCE10
L_801BCE14:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801BCE14
  c->r[3]=c->r[3]+0x00000001u; // 801BCE18
  cmps(c,0,(int32_t)c->r[0],0); // 801BCE1C
  if (crb(c,2)) { goto L_801BCE30; } // 801BCE20
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801BCE24
  cmpu(c,0,c->r[0],c->r[30]); // 801BCE28
  if (crb(c,2)) { goto L_801BCE60; } // 801BCE2C
L_801BCE30:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801BCE30
  c->r[3]=c->r[3]+0x00000001u; // 801BCE34
  cmps(c,0,(int32_t)c->r[0],0); // 801BCE38
  if (crb(c,2)) { goto L_801BCE4C; } // 801BCE3C
  c->r[0]=R16(c->r[4]+0x00000130u); // 801BCE40
  cmpu(c,0,c->r[0],c->r[30]); // 801BCE44
  if (crb(c,2)) { goto L_801BCE60; } // 801BCE48
L_801BCE4C:;
  c->r[3]=c->r[3]+0x00000001u; // 801BCE4C
  c->r[4]=c->r[4]+0x00000180u; // 801BCE50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCDE0; } // 801BCE54
  c->r[3]=c->r[30]|c->r[30]; // 801BCE58
  c->lr=0x801BCE60u; f_801C32C0(c); // 801BCE5C
L_801BCE60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BCE60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BCE64
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BCE68
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BCE6C
  c->lr=c->r[0]; // 801BCE70
  c->r[1]=c->r[1]+0x00000020u; // 801BCE74
  return; // 801BCE78
}

// gap_data_ind
void f_801BCE7C(Ctx* __restrict c) {
  trace_call(0x801BCE7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCE7C
  c->r[0]=c->lr; // 801BCE80
  c->r[5]=0u+0x802D0000u; // 801BCE84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BCE88
  c->r[0]=0u+0x00000002u; // 801BCE8C
  c->r[5]=c->r[5]+0x00004BA0u; // 801BCE90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BCE94
  c->r[31]=c->r[5]+0x000000ACu; // 801BCE98
  c->r[5]=0u+0x00000000u; // 801BCE9C
  c->ctr=c->r[0]; // 801BCEA0
L_801BCEA4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BCEA4
  cmps(c,0,(int32_t)c->r[0],0); // 801BCEA8
  if (crb(c,2)) { goto L_801BCEC0; } // 801BCEAC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCEB0
  cmpu(c,0,c->r[0],c->r[3]); // 801BCEB4
  if (!crb(c,2)) { goto L_801BCEC0; } // 801BCEB8
  goto L_801BCF30; // 801BCEBC
L_801BCEC0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCEC0
  c->r[5]=c->r[5]+0x00000001u; // 801BCEC4
  cmps(c,0,(int32_t)c->r[0],0); // 801BCEC8
  if (crb(c,2)) { goto L_801BCEE0; } // 801BCECC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCED0
  cmpu(c,0,c->r[0],c->r[3]); // 801BCED4
  if (!crb(c,2)) { goto L_801BCEE0; } // 801BCED8
  goto L_801BCF30; // 801BCEDC
L_801BCEE0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCEE0
  c->r[5]=c->r[5]+0x00000001u; // 801BCEE4
  cmps(c,0,(int32_t)c->r[0],0); // 801BCEE8
  if (crb(c,2)) { goto L_801BCF00; } // 801BCEEC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCEF0
  cmpu(c,0,c->r[0],c->r[3]); // 801BCEF4
  if (!crb(c,2)) { goto L_801BCF00; } // 801BCEF8
  goto L_801BCF30; // 801BCEFC
L_801BCF00:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801BCF00
  c->r[5]=c->r[5]+0x00000001u; // 801BCF04
  cmps(c,0,(int32_t)c->r[0],0); // 801BCF08
  if (crb(c,2)) { goto L_801BCF20; } // 801BCF0C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801BCF10
  cmpu(c,0,c->r[0],c->r[3]); // 801BCF14
  if (!crb(c,2)) { goto L_801BCF20; } // 801BCF18
  goto L_801BCF30; // 801BCF1C
L_801BCF20:;
  c->r[5]=c->r[5]+0x00000001u; // 801BCF20
  c->r[31]=c->r[31]+0x00000060u; // 801BCF24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCEA4; } // 801BCF28
  c->r[31]=0u+0x00000000u; // 801BCF2C
L_801BCF30:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BCF30
  if (!crb(c,2)) { goto L_801BCF44; } // 801BCF34
  c->r[3]=c->r[4]|c->r[4]; // 801BCF38
  c->lr=0x801BCF40u; f_801A7D00(c); // 801BCF3C
  goto L_801BCF78; // 801BCF40
L_801BCF44:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BCF44
  cmpu(c,0,c->r[0],0x00000004u); // 801BCF48
  if (!crb(c,2)) { goto L_801BCF70; } // 801BCF4C
  c->r[3]=c->r[31]+0x00000014u; // 801BCF50
  c->lr=0x801BCF58u; f_801A8130(c); // 801BCF54
  c->r[12]=R32(c->r[31]+0x00000020u); // 801BCF58
  c->r[4]=0u+0x00000102u; // 801BCF5C
  c->r[3]=R16(c->r[31]+0x00000004u); // 801BCF60
  c->ctr=c->r[12]; // 801BCF64
  if (true) { c->lr=0x801BCF6Cu; dispatch(c,c->ctr); } // 801BCF68
  goto L_801BCF78; // 801BCF6C
L_801BCF70:;
  c->r[3]=c->r[4]|c->r[4]; // 801BCF70
  c->lr=0x801BCF78u; f_801A7D00(c); // 801BCF74
L_801BCF78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BCF78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BCF7C
  c->lr=c->r[0]; // 801BCF80
  c->r[1]=c->r[1]+0x00000010u; // 801BCF84
  return; // 801BCF88
}

// gap_congestion_ind
void f_801BCF8C(Ctx* __restrict c) {
  trace_call(0x801BCF8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BCF8C
  c->r[0]=c->lr; // 801BCF90
  c->r[5]=0u+0x802D0000u; // 801BCF94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BCF98
  c->r[5]=c->r[5]+0x00004BA0u; // 801BCF9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BCFA0
  c->r[31]=c->r[4]|c->r[4]; // 801BCFA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BCFA8
  c->r[30]=c->r[3]|c->r[3]; // 801BCFAC
  c->r[0]=R8(c->r[5]+0x00000028u); // 801BCFB0
  cmpu(c,0,c->r[0],0x00000004u); // 801BCFB4
  if (crb(c,0)) { goto L_801BCFD8; } // 801BCFB8
  c->r[3]=0u+0x000E0000u; // 801BCFBC
  c->r[4]=0u+0x80240000u; // 801BCFC0
  c->r[5]=c->r[31]|c->r[31]; // 801BCFC4
  c->r[6]=c->r[30]|c->r[30]; // 801BCFC8
  c->r[3]=c->r[3]+0x00000003u; // 801BCFCC
  c->r[4]=c->r[4]+0x00006560u; // 801BCFD0
  c->lr=0x801BCFD8u; f_801AA800(c); // 801BCFD4
L_801BCFD8:;
  c->r[3]=0u+0x802D0000u; // 801BCFD8
  c->r[0]=0u+0x00000002u; // 801BCFDC
  c->r[3]=c->r[3]+0x00004BA0u; // 801BCFE0
  c->r[4]=0u+0x00000000u; // 801BCFE4
  c->r[3]=c->r[3]+0x000000ACu; // 801BCFE8
  c->ctr=c->r[0]; // 801BCFEC
L_801BCFF0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BCFF0
  cmps(c,0,(int32_t)c->r[0],0); // 801BCFF4
  if (crb(c,2)) { goto L_801BD00C; } // 801BCFF8
  c->r[0]=R16(c->r[3]+0x00000006u); // 801BCFFC
  cmpu(c,0,c->r[0],c->r[30]); // 801BD000
  if (!crb(c,2)) { goto L_801BD00C; } // 801BD004
  goto L_801BD07C; // 801BD008
L_801BD00C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801BD00C
  c->r[4]=c->r[4]+0x00000001u; // 801BD010
  cmps(c,0,(int32_t)c->r[0],0); // 801BD014
  if (crb(c,2)) { goto L_801BD02C; } // 801BD018
  c->r[0]=R16(c->r[3]+0x00000006u); // 801BD01C
  cmpu(c,0,c->r[0],c->r[30]); // 801BD020
  if (!crb(c,2)) { goto L_801BD02C; } // 801BD024
  goto L_801BD07C; // 801BD028
L_801BD02C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801BD02C
  c->r[4]=c->r[4]+0x00000001u; // 801BD030
  cmps(c,0,(int32_t)c->r[0],0); // 801BD034
  if (crb(c,2)) { goto L_801BD04C; } // 801BD038
  c->r[0]=R16(c->r[3]+0x00000006u); // 801BD03C
  cmpu(c,0,c->r[0],c->r[30]); // 801BD040
  if (!crb(c,2)) { goto L_801BD04C; } // 801BD044
  goto L_801BD07C; // 801BD048
L_801BD04C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801BD04C
  c->r[4]=c->r[4]+0x00000001u; // 801BD050
  cmps(c,0,(int32_t)c->r[0],0); // 801BD054
  if (crb(c,2)) { goto L_801BD06C; } // 801BD058
  c->r[0]=R16(c->r[3]+0x00000006u); // 801BD05C
  cmpu(c,0,c->r[0],c->r[30]); // 801BD060
  if (!crb(c,2)) { goto L_801BD06C; } // 801BD064
  goto L_801BD07C; // 801BD068
L_801BD06C:;
  c->r[4]=c->r[4]+0x00000001u; // 801BD06C
  c->r[3]=c->r[3]+0x00000060u; // 801BD070
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BCFF0; } // 801BD074
  c->r[3]=0u+0x00000000u; // 801BD078
L_801BD07C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801BD07C
  if (crb(c,2)) { goto L_801BD0A8; } // 801BD080
  c->r[0]=0u-c->r[31]; // 801BD084
  c->r[12]=R32(c->r[3]+0x00000020u); // 801BD088
  c->r[0]=c->r[0]|c->r[31]; // 801BD08C
  c->r[3]=R16(c->r[3]+0x00000004u); // 801BD090
  c->r[4]=sraw(c,c->r[0],31); // 801BD094
  c->r[0]=c->r[4]+0x00000104u; // 801BD098
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801BD09C
  c->ctr=c->r[12]; // 801BD0A0
  if (true) { c->lr=0x801BD0A8u; dispatch(c,c->ctr); } // 801BD0A4
L_801BD0A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD0A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD0AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BD0B0
  c->lr=c->r[0]; // 801BD0B4
  c->r[1]=c->r[1]+0x00000010u; // 801BD0B8
  return; // 801BD0BC
}

// btm_cback
void f_801BD0C0(Ctx* __restrict c) {
  trace_call(0x801BD0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD0C0
  c->r[0]=c->lr; // 801BD0C4
  c->r[7]=0u+0x80240000u; // 801BD0C8
  cmpu(c,0,c->r[3],0x00000002u); // 801BD0CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD0D0
  c->r[7]=c->r[7]+0x00006598u; // 801BD0D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD0D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD0DC
  c->r[30]=c->r[4]|c->r[4]; // 801BD0E0
  if (!crb(c,0)) { goto L_801BD280; } // 801BD0E4
  c->r[8]=0u+0x802D0000u; // 801BD0E8
  c->r[0]=rotl(c->r[3],4)&0x000FFFF0u; // 801BD0EC
  c->r[8]=c->r[8]+0x00004BA0u; // 801BD0F0
  c->r[31]=c->r[8]+c->r[0]; // 801BD0F4
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801BD0F8
  cmps(c,0,(int32_t)c->r[0],0); // 801BD0FC
  if (crb(c,2)) { goto L_801BD280; } // 801BD100
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 801BD104
  cmps(c,0,(int32_t)c->r[0],3); // 801BD108
  if (crb(c,2)) { goto L_801BD178; } // 801BD10C
  if (!crb(c,0)) { goto L_801BD120; } // 801BD110
  cmps(c,0,(int32_t)c->r[0],2); // 801BD114
  if (!crb(c,0)) { goto L_801BD12C; } // 801BD118
  goto L_801BD250; // 801BD11C
L_801BD120:;
  cmps(c,0,(int32_t)c->r[0],5); // 801BD120
  if (!crb(c,0)) { goto L_801BD250; } // 801BD124
  goto L_801BD1C4; // 801BD128
L_801BD12C:;
  c->r[6]=R8(c->r[4]+0x00000001u); // 801BD12C
  c->r[3]=0u+0x00000114u; // 801BD130
  c->r[0]=R8(c->r[8]+0x00000028u); // 801BD134
  c->r[30]=c->r[1]+0x00000008u; // 801BD138
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801BD13C
  cmpu(c,0,c->r[0],0x00000004u); // 801BD140
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BD144
  c->r[0]=cntlz(c->r[0]); // 801BD148
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801BD14C
  c->r[0]=0u-c->r[0]; // 801BD150
  c->r[0]=c->r[3]&~c->r[0]; // 801BD154
  W16(c->r[1]+0x00000008u,c->r[0]); // 801BD158
  if (crb(c,0)) { goto L_801BD250; } // 801BD15C
  c->r[3]=0u+0x000E0000u; // 801BD160
  c->r[4]=c->r[7]+0x00000000u; // 801BD164
  c->r[3]=c->r[3]+0x00000003u; // 801BD168
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801BD16C
  c->lr=0x801BD174u; f_801AA800(c); // 801BD170
  goto L_801BD250; // 801BD174
L_801BD178:;
  c->r[5]=R16(c->r[4]+0x00000000u); // 801BD178
  cmps(c,0,(int32_t)c->r[5],0); // 801BD17C
  if (crb(c,2)) { goto L_801BD1A4; } // 801BD180
  c->r[0]=R8(c->r[8]+0x00000028u); // 801BD184
  cmpu(c,0,c->r[0],0x00000004u); // 801BD188
  if (crb(c,0)) { goto L_801BD250; } // 801BD18C
  c->r[3]=0u+0x000E0000u; // 801BD190
  c->r[4]=c->r[7]+0x0000003Cu; // 801BD194
  c->r[3]=c->r[3]+0x00000003u; // 801BD198
  c->lr=0x801BD1A0u; f_801AA7E0(c); // 801BD19C
  goto L_801BD250; // 801BD1A0
L_801BD1A4:;
  c->r[0]=R8(c->r[8]+0x00000028u); // 801BD1A4
  cmpu(c,0,c->r[0],0x00000004u); // 801BD1A8
  if (crb(c,0)) { goto L_801BD250; } // 801BD1AC
  c->r[3]=0u+0x000E0000u; // 801BD1B0
  c->r[4]=c->r[7]+0x00000070u; // 801BD1B4
  c->r[3]=c->r[3]+0x00000003u; // 801BD1B8
  c->lr=0x801BD1C0u; f_801AA7C0(c); // 801BD1BC
  goto L_801BD250; // 801BD1C0
L_801BD1C4:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 801BD1C4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801BD1C8
  cmpu(c,0,c->r[0],0x00000008u); // 801BD1CC
  if (crb(c,1)) { goto L_801BD224; } // 801BD1D0
  c->r[3]=0u+0x80240000u; // 801BD1D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD1D8
  c->r[3]=c->r[3]+0x00006664u; // 801BD1DC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BD1E0
  c->ctr=c->r[3]; // 801BD1E4
  if (true) { switch (c->ctr) { case 0x801BD1ECu: goto L_801BD1EC; case 0x801BD1F4u: goto L_801BD1F4; case 0x801BD1FCu: goto L_801BD1FC; case 0x801BD204u: goto L_801BD204; case 0x801BD20Cu: goto L_801BD20C; case 0x801BD214u: goto L_801BD214; case 0x801BD21Cu: goto L_801BD21C; case 0x801BD224u: goto L_801BD224; default: break; } dispatch(c,c->ctr); return; } // 801BD1E8
L_801BD1EC:;
  c->r[5]=0u+0x00000000u; // 801BD1EC
  goto L_801BD228; // 801BD1F0
L_801BD1F4:;
  c->r[5]=0u+0x0000010Bu; // 801BD1F4
  goto L_801BD228; // 801BD1F8
L_801BD1FC:;
  c->r[5]=0u+0x00000103u; // 801BD1FC
  goto L_801BD228; // 801BD200
L_801BD204:;
  c->r[5]=0u+0x00000109u; // 801BD204
  goto L_801BD228; // 801BD208
L_801BD20C:;
  c->r[5]=0u+0x0000010Cu; // 801BD20C
  goto L_801BD228; // 801BD210
L_801BD214:;
  c->r[5]=0u+0x0000010Du; // 801BD214
  goto L_801BD228; // 801BD218
L_801BD21C:;
  c->r[5]=0u+0x00000115u; // 801BD21C
  goto L_801BD228; // 801BD220
L_801BD224:;
  c->r[5]=0u+0x00000114u; // 801BD224
L_801BD228:;
  c->r[3]=0u+0x802D0000u; // 801BD228
  W16(c->r[4]+0x00000000u,c->r[5]); // 801BD22C
  c->r[3]=c->r[3]+0x00004BA0u; // 801BD230
  c->r[0]=R8(c->r[3]+0x00000028u); // 801BD234
  cmpu(c,0,c->r[0],0x00000004u); // 801BD238
  if (crb(c,0)) { goto L_801BD250; } // 801BD23C
  c->r[3]=0u+0x000E0000u; // 801BD240
  c->r[4]=c->r[7]+0x00000098u; // 801BD244
  c->r[3]=c->r[3]+0x00000003u; // 801BD248
  c->lr=0x801BD250u; f_801AA7E0(c); // 801BD24C
L_801BD250:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801BD250
  cmps(c,0,(int32_t)c->r[12],0); // 801BD254
  if (crb(c,2)) { goto L_801BD26C; } // 801BD258
  c->r[4]=c->r[30]|c->r[30]; // 801BD25C
  c->r[3]=R16(c->r[31]+0x0000000Cu); // 801BD260
  c->ctr=c->r[12]; // 801BD264
  if (true) { c->lr=0x801BD26Cu; dispatch(c,c->ctr); } // 801BD268
L_801BD26C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801BD26C
  if (crb(c,2)) { goto L_801BD280; } // 801BD270
  c->r[0]=0u+0x00000000u; // 801BD274
  W32(c->r[31]+0x00000004u,c->r[0]); // 801BD278
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 801BD27C
L_801BD280:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD280
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD284
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD288
  c->lr=c->r[0]; // 801BD28C
  c->r[1]=c->r[1]+0x00000020u; // 801BD290
  return; // 801BD294
}

// gap_btm_cback0
void f_801BD298(Ctx* __restrict c) {
  trace_call(0x801BD298u);
  c->r[4]=c->r[3]|c->r[3]; // 801BD298
  c->r[3]=0u+0x00000000u; // 801BD29C
  f_801BD0C0(c); return; // 801BD2A0
}

// gap_btm_cback1
void f_801BD2A4(Ctx* __restrict c) {
  trace_call(0x801BD2A4u);
  c->r[4]=c->r[3]|c->r[3]; // 801BD2A4
  c->r[3]=0u+0x00000001u; // 801BD2A8
  f_801BD0C0(c); return; // 801BD2AC
}

// gap_find_addr_name_cb
void f_801BD2B0(Ctx* __restrict c) {
  trace_call(0x801BD2B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD2B0
  c->r[0]=c->lr; // 801BD2B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD2B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD2BC
  c->r[31]=0u+0x802D0000u; // 801BD2C0
  c->r[31]=c->r[31]+0x00004BA0u; // 801BD2C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD2C8
  c->r[30]=c->r[31]+0x00000034u; // 801BD2CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BD2D0
  c->r[29]=c->r[3]|c->r[3]; // 801BD2D4
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 801BD2D8
  cmps(c,0,(int32_t)c->r[0],0); // 801BD2DC
  if (crb(c,2)) { goto L_801BD4AC; } // 801BD2E0
  c->r[5]=R16(c->r[3]+0x00000000u); // 801BD2E4
  cmps(c,0,(int32_t)c->r[5],0); // 801BD2E8
  if (!crb(c,2)) { goto L_801BD3FC; } // 801BD2EC
  c->r[0]=R8(c->r[31]+0x00000028u); // 801BD2F0
  cmpu(c,0,c->r[0],0x00000004u); // 801BD2F4
  if (crb(c,0)) { goto L_801BD314; } // 801BD2F8
  c->r[3]=0u+0x000E0000u; // 801BD2FC
  c->r[4]=0u+0x80240000u; // 801BD300
  c->r[6]=c->r[29]+0x00000004u; // 801BD304
  c->r[3]=c->r[3]+0x00000003u; // 801BD308
  c->r[4]=c->r[4]+0x00006710u; // 801BD30C
  c->lr=0x801BD314u; f_801AA800(c); // 801BD310
L_801BD314:;
  c->r[3]=c->r[30]+0x00000008u; // 801BD314
  c->lr=0x801BD31Cu; f_801D4D44(c); // 801BD318
  c->r[5]=c->r[3]|c->r[3]; // 801BD31C
  c->r[3]=c->r[30]+0x00000008u; // 801BD320
  c->r[4]=c->r[29]+0x00000004u; // 801BD324
  c->lr=0x801BD32Cu; f_801DBC20(c); // 801BD328
  cmps(c,0,(int32_t)c->r[3],0); // 801BD32C
  if (!crb(c,2)) { goto L_801BD354; } // 801BD330
  c->r[4]=R32(c->r[31]+0x00000030u); // 801BD334
  c->r[3]=c->r[30]+0x00000002u; // 801BD338
  c->r[5]=0u+0x00000006u; // 801BD33C
  c->r[4]=c->r[4]+0x00000002u; // 801BD340
  c->lr=0x801BD348u; f_80004364(c); // 801BD344
  c->r[0]=0u+0x00000000u; // 801BD348
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BD34C
  goto L_801BD484; // 801BD350
L_801BD354:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 801BD354
  c->lr=0x801BD35Cu; f_801B5794(c); // 801BD358
  cmps(c,0,(int32_t)c->r[3],0); // 801BD35C
  W32(c->r[31]+0x00000030u,c->r[3]); // 801BD360
  if (crb(c,2)) { goto L_801BD3F0; } // 801BD364
  c->r[4]=0u+0x801C0000u; // 801BD368
  c->r[3]=c->r[3]+0x00000002u; // 801BD36C
  c->r[4]=c->r[4]+0xFFFFD2B0u; // 801BD370
  c->lr=0x801BD378u; f_801B54BC(c); // 801BD374
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BD378
  cmpu(c,0,c->r[0],0x00000001u); // 801BD37C
  if (crb(c,2)) { goto L_801BD4AC; } // 801BD380
  c->r[0]=R16(c->r[29]+0x00000000u); // 801BD384
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801BD388
  cmpu(c,0,c->r[0],0x00000008u); // 801BD38C
  if (crb(c,1)) { goto L_801BD3E4; } // 801BD390
  c->r[3]=0u+0x80240000u; // 801BD394
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD398
  c->r[3]=c->r[3]+0x000067B4u; // 801BD39C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BD3A0
  c->ctr=c->r[3]; // 801BD3A4
  if (true) { switch (c->ctr) { case 0x801BD3ACu: goto L_801BD3AC; case 0x801BD3B4u: goto L_801BD3B4; case 0x801BD3BCu: goto L_801BD3BC; case 0x801BD3C4u: goto L_801BD3C4; case 0x801BD3CCu: goto L_801BD3CC; case 0x801BD3D4u: goto L_801BD3D4; case 0x801BD3DCu: goto L_801BD3DC; case 0x801BD3E4u: goto L_801BD3E4; case 0x801BD444u: goto L_801BD444; case 0x801BD44Cu: goto L_801BD44C; case 0x801BD454u: goto L_801BD454; case 0x801BD45Cu: goto L_801BD45C; case 0x801BD464u: goto L_801BD464; case 0x801BD46Cu: goto L_801BD46C; case 0x801BD474u: goto L_801BD474; case 0x801BD47Cu: goto L_801BD47C; default: break; } dispatch(c,c->ctr); return; } // 801BD3A8
L_801BD3AC:;
  c->r[0]=0u+0x00000000u; // 801BD3AC
  goto L_801BD3E8; // 801BD3B0
L_801BD3B4:;
  c->r[0]=0u+0x0000010Bu; // 801BD3B4
  goto L_801BD3E8; // 801BD3B8
L_801BD3BC:;
  c->r[0]=0u+0x00000103u; // 801BD3BC
  goto L_801BD3E8; // 801BD3C0
L_801BD3C4:;
  c->r[0]=0u+0x00000109u; // 801BD3C4
  goto L_801BD3E8; // 801BD3C8
L_801BD3CC:;
  c->r[0]=0u+0x0000010Cu; // 801BD3CC
  goto L_801BD3E8; // 801BD3D0
L_801BD3D4:;
  c->r[0]=0u+0x0000010Du; // 801BD3D4
  goto L_801BD3E8; // 801BD3D8
L_801BD3DC:;
  c->r[0]=0u+0x00000115u; // 801BD3DC
  goto L_801BD3E8; // 801BD3E0
L_801BD3E4:;
  c->r[0]=0u+0x00000114u; // 801BD3E4
L_801BD3E8:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BD3E8
  goto L_801BD484; // 801BD3EC
L_801BD3F0:;
  c->r[0]=0u+0x00000102u; // 801BD3F0
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BD3F4
  goto L_801BD484; // 801BD3F8
L_801BD3FC:;
  c->r[0]=R8(c->r[31]+0x00000028u); // 801BD3FC
  cmpu(c,0,c->r[0],0x00000004u); // 801BD400
  if (crb(c,0)) { goto L_801BD41C; } // 801BD404
  c->r[3]=0u+0x000E0000u; // 801BD408
  c->r[4]=0u+0x80240000u; // 801BD40C
  c->r[3]=c->r[3]+0x00000003u; // 801BD410
  c->r[4]=c->r[4]+0x00006754u; // 801BD414
  c->lr=0x801BD41Cu; f_801AA7E0(c); // 801BD418
L_801BD41C:;
  c->r[0]=R16(c->r[29]+0x00000000u); // 801BD41C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801BD420
  cmpu(c,0,c->r[0],0x00000008u); // 801BD424
  if (crb(c,1)) { goto L_801BD47C; } // 801BD428
  c->r[3]=0u+0x80240000u; // 801BD42C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD430
  c->r[3]=c->r[3]+0x00006790u; // 801BD434
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BD438
  c->ctr=c->r[3]; // 801BD43C
  if (true) { switch (c->ctr) { case 0x801BD3ACu: goto L_801BD3AC; case 0x801BD3B4u: goto L_801BD3B4; case 0x801BD3BCu: goto L_801BD3BC; case 0x801BD3C4u: goto L_801BD3C4; case 0x801BD3CCu: goto L_801BD3CC; case 0x801BD3D4u: goto L_801BD3D4; case 0x801BD3DCu: goto L_801BD3DC; case 0x801BD3E4u: goto L_801BD3E4; case 0x801BD444u: goto L_801BD444; case 0x801BD44Cu: goto L_801BD44C; case 0x801BD454u: goto L_801BD454; case 0x801BD45Cu: goto L_801BD45C; case 0x801BD464u: goto L_801BD464; case 0x801BD46Cu: goto L_801BD46C; case 0x801BD474u: goto L_801BD474; case 0x801BD47Cu: goto L_801BD47C; default: break; } dispatch(c,c->ctr); return; } // 801BD440
L_801BD444:;
  c->r[0]=0u+0x00000000u; // 801BD444
  goto L_801BD480; // 801BD448
L_801BD44C:;
  c->r[0]=0u+0x0000010Bu; // 801BD44C
  goto L_801BD480; // 801BD450
L_801BD454:;
  c->r[0]=0u+0x00000103u; // 801BD454
  goto L_801BD480; // 801BD458
L_801BD45C:;
  c->r[0]=0u+0x00000109u; // 801BD45C
  goto L_801BD480; // 801BD460
L_801BD464:;
  c->r[0]=0u+0x0000010Cu; // 801BD464
  goto L_801BD480; // 801BD468
L_801BD46C:;
  c->r[0]=0u+0x0000010Du; // 801BD46C
  goto L_801BD480; // 801BD470
L_801BD474:;
  c->r[0]=0u+0x00000115u; // 801BD474
  goto L_801BD480; // 801BD478
L_801BD47C:;
  c->r[0]=0u+0x00000114u; // 801BD47C
L_801BD480:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BD480
L_801BD484:;
  c->r[12]=R32(c->r[31]+0x0000002Cu); // 801BD484
  cmps(c,0,(int32_t)c->r[12],0); // 801BD488
  if (crb(c,2)) { goto L_801BD4A0; } // 801BD48C
  c->r[4]=c->r[30]|c->r[30]; // 801BD490
  c->r[3]=0u+0x00000005u; // 801BD494
  c->ctr=c->r[12]; // 801BD498
  if (true) { c->lr=0x801BD4A0u; dispatch(c,c->ctr); } // 801BD49C
L_801BD4A0:;
  c->r[0]=0u+0x00000000u; // 801BD4A0
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 801BD4A4
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801BD4A8
L_801BD4AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD4AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD4B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD4B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BD4B8
  c->lr=c->r[0]; // 801BD4BC
  c->r[1]=c->r[1]+0x00000020u; // 801BD4C0
  return; // 801BD4C4
}

// gap_find_addr_inq_cb
void f_801BD4C8(Ctx* __restrict c) {
  trace_call(0x801BD4C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD4C8
  c->r[0]=c->lr; // 801BD4CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD4D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD4D4
  c->r[31]=0u+0x802D0000u; // 801BD4D8
  c->r[31]=c->r[31]+0x00004BA0u; // 801BD4DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD4E0
  c->r[30]=c->r[31]+0x00000034u; // 801BD4E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BD4E8
  c->r[29]=c->r[3]|c->r[3]; // 801BD4EC
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 801BD4F0
  cmps(c,0,(int32_t)c->r[0],0); // 801BD4F4
  if (crb(c,2)) { goto L_801BD660; } // 801BD4F8
  c->r[0]=R8(c->r[31]+0x00000028u); // 801BD4FC
  cmpu(c,0,c->r[0],0x00000004u); // 801BD500
  if (crb(c,0)) { goto L_801BD524; } // 801BD504
  c->r[3]=0u+0x000E0000u; // 801BD508
  c->r[4]=0u+0x80240000u; // 801BD50C
  c->r[5]=R8(c->r[29]+0x00000000u); // 801BD510
  c->r[3]=c->r[3]+0x00000003u; // 801BD514
  c->r[6]=R8(c->r[29]+0x00000001u); // 801BD518
  c->r[4]=c->r[4]+0x000067D8u; // 801BD51C
  c->lr=0x801BD524u; f_801AA800(c); // 801BD520
L_801BD524:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BD524
  cmps(c,0,(int32_t)c->r[0],0); // 801BD528
  if (!crb(c,2)) { goto L_801BD5D8; } // 801BD52C
  c->r[0]=0u+0x00000111u; // 801BD530
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BD534
  c->lr=0x801BD53Cu; f_801B56DC(c); // 801BD538
  cmps(c,0,(int32_t)c->r[3],0); // 801BD53C
  W32(c->r[31]+0x00000030u,c->r[3]); // 801BD540
  if (crb(c,2)) { goto L_801BD5CC; } // 801BD544
  c->r[4]=0u+0x801C0000u; // 801BD548
  c->r[3]=c->r[3]+0x00000002u; // 801BD54C
  c->r[4]=c->r[4]+0xFFFFD2B0u; // 801BD550
  c->lr=0x801BD558u; f_801B54BC(c); // 801BD554
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801BD558
  cmpu(c,0,c->r[0],0x00000001u); // 801BD55C
  if (crb(c,2)) { goto L_801BD660; } // 801BD560
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BD564
  cmpu(c,0,c->r[0],0x00000008u); // 801BD568
  if (crb(c,1)) { goto L_801BD5C0; } // 801BD56C
  c->r[3]=0u+0x80240000u; // 801BD570
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD574
  c->r[3]=c->r[3]+0x00006840u; // 801BD578
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BD57C
  c->ctr=c->r[3]; // 801BD580
  if (true) { switch (c->ctr) { case 0x801BD588u: goto L_801BD588; case 0x801BD590u: goto L_801BD590; case 0x801BD598u: goto L_801BD598; case 0x801BD5A0u: goto L_801BD5A0; case 0x801BD5A8u: goto L_801BD5A8; case 0x801BD5B0u: goto L_801BD5B0; case 0x801BD5B8u: goto L_801BD5B8; case 0x801BD5C0u: goto L_801BD5C0; case 0x801BD5F8u: goto L_801BD5F8; case 0x801BD600u: goto L_801BD600; case 0x801BD608u: goto L_801BD608; case 0x801BD610u: goto L_801BD610; case 0x801BD618u: goto L_801BD618; case 0x801BD620u: goto L_801BD620; case 0x801BD628u: goto L_801BD628; case 0x801BD630u: goto L_801BD630; default: break; } dispatch(c,c->ctr); return; } // 801BD584
L_801BD588:;
  c->r[0]=0u+0x00000000u; // 801BD588
  goto L_801BD5C4; // 801BD58C
L_801BD590:;
  c->r[0]=0u+0x0000010Bu; // 801BD590
  goto L_801BD5C4; // 801BD594
L_801BD598:;
  c->r[0]=0u+0x00000103u; // 801BD598
  goto L_801BD5C4; // 801BD59C
L_801BD5A0:;
  c->r[0]=0u+0x00000109u; // 801BD5A0
  goto L_801BD5C4; // 801BD5A4
L_801BD5A8:;
  c->r[0]=0u+0x0000010Cu; // 801BD5A8
  goto L_801BD5C4; // 801BD5AC
L_801BD5B0:;
  c->r[0]=0u+0x0000010Du; // 801BD5B0
  goto L_801BD5C4; // 801BD5B4
L_801BD5B8:;
  c->r[0]=0u+0x00000115u; // 801BD5B8
  goto L_801BD5C4; // 801BD5BC
L_801BD5C0:;
  c->r[0]=0u+0x00000114u; // 801BD5C0
L_801BD5C4:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BD5C4
  goto L_801BD638; // 801BD5C8
L_801BD5CC:;
  c->r[0]=0u+0x00000102u; // 801BD5CC
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BD5D0
  goto L_801BD638; // 801BD5D4
L_801BD5D8:;
  cmpu(c,0,c->r[0],0x00000008u); // 801BD5D8
  if (crb(c,1)) { goto L_801BD630; } // 801BD5DC
  c->r[3]=0u+0x80240000u; // 801BD5E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801BD5E4
  c->r[3]=c->r[3]+0x0000681Cu; // 801BD5E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 801BD5EC
  c->ctr=c->r[3]; // 801BD5F0
  if (true) { switch (c->ctr) { case 0x801BD588u: goto L_801BD588; case 0x801BD590u: goto L_801BD590; case 0x801BD598u: goto L_801BD598; case 0x801BD5A0u: goto L_801BD5A0; case 0x801BD5A8u: goto L_801BD5A8; case 0x801BD5B0u: goto L_801BD5B0; case 0x801BD5B8u: goto L_801BD5B8; case 0x801BD5C0u: goto L_801BD5C0; case 0x801BD5F8u: goto L_801BD5F8; case 0x801BD600u: goto L_801BD600; case 0x801BD608u: goto L_801BD608; case 0x801BD610u: goto L_801BD610; case 0x801BD618u: goto L_801BD618; case 0x801BD620u: goto L_801BD620; case 0x801BD628u: goto L_801BD628; case 0x801BD630u: goto L_801BD630; default: break; } dispatch(c,c->ctr); return; } // 801BD5F4
L_801BD5F8:;
  c->r[0]=0u+0x00000000u; // 801BD5F8
  goto L_801BD634; // 801BD5FC
L_801BD600:;
  c->r[0]=0u+0x0000010Bu; // 801BD600
  goto L_801BD634; // 801BD604
L_801BD608:;
  c->r[0]=0u+0x00000103u; // 801BD608
  goto L_801BD634; // 801BD60C
L_801BD610:;
  c->r[0]=0u+0x00000109u; // 801BD610
  goto L_801BD634; // 801BD614
L_801BD618:;
  c->r[0]=0u+0x0000010Cu; // 801BD618
  goto L_801BD634; // 801BD61C
L_801BD620:;
  c->r[0]=0u+0x0000010Du; // 801BD620
  goto L_801BD634; // 801BD624
L_801BD628:;
  c->r[0]=0u+0x00000115u; // 801BD628
  goto L_801BD634; // 801BD62C
L_801BD630:;
  c->r[0]=0u+0x00000114u; // 801BD630
L_801BD634:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 801BD634
L_801BD638:;
  c->r[12]=R32(c->r[31]+0x0000002Cu); // 801BD638
  cmps(c,0,(int32_t)c->r[12],0); // 801BD63C
  if (crb(c,2)) { goto L_801BD654; } // 801BD640
  c->r[4]=c->r[30]|c->r[30]; // 801BD644
  c->r[3]=0u+0x00000005u; // 801BD648
  c->ctr=c->r[12]; // 801BD64C
  if (true) { c->lr=0x801BD654u; dispatch(c,c->ctr); } // 801BD650
L_801BD654:;
  c->r[0]=0u+0x00000000u; // 801BD654
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 801BD658
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801BD65C
L_801BD660:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD660
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD664
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD668
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BD66C
  c->lr=c->r[0]; // 801BD670
  c->r[1]=c->r[1]+0x00000020u; // 801BD674
  return; // 801BD678
}

// gap_convert_btm_status
void f_801BD67C(Ctx* __restrict c) {
  trace_call(0x801BD67Cu);
  cmpu(c,0,c->r[3],0x00000008u); // 801BD67C
  if (crb(c,1)) { goto L_801BD6D4; } // 801BD680
  c->r[4]=0u+0x80240000u; // 801BD684
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801BD688
  c->r[4]=c->r[4]+0x00006864u; // 801BD68C
  c->r[4]=R32(c->r[4]+c->r[0]); // 801BD690
  c->ctr=c->r[4]; // 801BD694
  if (true) { switch (c->ctr) { case 0x801BD69Cu: goto L_801BD69C; case 0x801BD6A4u: goto L_801BD6A4; case 0x801BD6ACu: goto L_801BD6AC; case 0x801BD6B4u: goto L_801BD6B4; case 0x801BD6BCu: goto L_801BD6BC; case 0x801BD6C4u: goto L_801BD6C4; case 0x801BD6CCu: goto L_801BD6CC; case 0x801BD6D4u: goto L_801BD6D4; default: break; } dispatch(c,c->ctr); return; } // 801BD698
L_801BD69C:;
  c->r[3]=0u+0x00000000u; // 801BD69C
  return; // 801BD6A0
L_801BD6A4:;
  c->r[3]=0u+0x0000010Bu; // 801BD6A4
  return; // 801BD6A8
L_801BD6AC:;
  c->r[3]=0u+0x00000103u; // 801BD6AC
  return; // 801BD6B0
L_801BD6B4:;
  c->r[3]=0u+0x00000109u; // 801BD6B4
  return; // 801BD6B8
L_801BD6BC:;
  c->r[3]=0u+0x0000010Cu; // 801BD6BC
  return; // 801BD6C0
L_801BD6C4:;
  c->r[3]=0u+0x0000010Du; // 801BD6C4
  return; // 801BD6C8
L_801BD6CC:;
  c->r[3]=0u+0x00000115u; // 801BD6CC
  return; // 801BD6D0
L_801BD6D4:;
  c->r[3]=0u+0x00000114u; // 801BD6D4
  return; // 801BD6D8
}

// btsnd_hcic_inquiry
void f_801BD6DC(Ctx* __restrict c) {
  trace_call(0x801BD6DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD6DC
  c->r[0]=c->lr; // 801BD6E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD6E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BD6E8
  c->r[31]=c->r[5]|c->r[5]; // 801BD6EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BD6F0
  c->r[30]=c->r[4]|c->r[4]; // 801BD6F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BD6F8
  c->r[29]=c->r[3]|c->r[3]; // 801BD6FC
  c->r[3]=0u+0x00000002u; // 801BD700
  c->lr=0x801BD708u; f_801A7C10(c); // 801BD704
  cmps(c,0,(int32_t)c->r[3],0); // 801BD708
  if (!crb(c,2)) { goto L_801BD718; } // 801BD70C
  c->r[3]=0u+0x00000000u; // 801BD710
  goto L_801BD768; // 801BD714
L_801BD718:;
  c->r[0]=0u+0x00000008u; // 801BD718
  c->r[5]=0u+0x00000000u; // 801BD71C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BD720
  c->r[4]=0u+0x00000001u; // 801BD724
  c->r[0]=0u+0x00000004u; // 801BD728
  c->r[6]=0u+0x00000005u; // 801BD72C
  W16(c->r[3]+0x00000004u,c->r[5]); // 801BD730
  c->r[5]=R8(c->r[29]+0x00000002u); // 801BD734
  W8(c->r[3]+0x00000008u,c->r[4]); // 801BD738
  c->r[4]=R8(c->r[29]+0x00000001u); // 801BD73C
  W8(c->r[3]+0x00000009u,c->r[0]); // 801BD740
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BD744
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801BD748
  W8(c->r[3]+0x0000000Bu,c->r[5]); // 801BD74C
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801BD750
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BD754
  W8(c->r[3]+0x0000000Eu,c->r[30]); // 801BD758
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801BD75C
  c->lr=0x801BD764u; f_801BB728(c); // 801BD760
  c->r[3]=0u+0x00000001u; // 801BD764
L_801BD768:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD768
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BD76C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BD770
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BD774
  c->lr=c->r[0]; // 801BD778
  c->r[1]=c->r[1]+0x00000020u; // 801BD77C
  return; // 801BD780
}

// btsnd_hcic_inq_cancel
void f_801BD784(Ctx* __restrict c) {
  trace_call(0x801BD784u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD784
  c->r[0]=c->lr; // 801BD788
  c->r[3]=0u+0x00000002u; // 801BD78C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD790
  c->lr=0x801BD798u; f_801A7C10(c); // 801BD794
  cmps(c,0,(int32_t)c->r[3],0); // 801BD798
  if (!crb(c,2)) { goto L_801BD7A8; } // 801BD79C
  c->r[3]=0u+0x00000000u; // 801BD7A0
  goto L_801BD7D4; // 801BD7A4
L_801BD7A8:;
  c->r[0]=0u+0x00000003u; // 801BD7A8
  c->r[5]=0u+0x00000000u; // 801BD7AC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BD7B0
  c->r[4]=0u+0x00000002u; // 801BD7B4
  c->r[0]=0u+0x00000004u; // 801BD7B8
  W16(c->r[3]+0x00000004u,c->r[5]); // 801BD7BC
  W8(c->r[3]+0x00000008u,c->r[4]); // 801BD7C0
  W8(c->r[3]+0x00000009u,c->r[0]); // 801BD7C4
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BD7C8
  c->lr=0x801BD7D0u; f_801BB728(c); // 801BD7CC
  c->r[3]=0u+0x00000001u; // 801BD7D0
L_801BD7D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD7D4
  c->lr=c->r[0]; // 801BD7D8
  c->r[1]=c->r[1]+0x00000010u; // 801BD7DC
  return; // 801BD7E0
}

// btsnd_hcic_per_inq_mode
void f_801BD7E4(Ctx* __restrict c) {
  trace_call(0x801BD7E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD7E4
  c->r[0]=c->lr; // 801BD7E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD7EC
  c->r[11]=c->r[1]+0x00000020u; // 801BD7F0
  c->lr=0x801BD7F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BD7F4
  c->r[27]=c->r[3]|c->r[3]; // 801BD7F8
  c->r[28]=c->r[4]|c->r[4]; // 801BD7FC
  c->r[29]=c->r[5]|c->r[5]; // 801BD800
  c->r[30]=c->r[6]|c->r[6]; // 801BD804
  c->r[31]=c->r[7]|c->r[7]; // 801BD808
  c->r[3]=0u+0x00000002u; // 801BD80C
  c->lr=0x801BD814u; f_801A7C10(c); // 801BD810
  cmps(c,0,(int32_t)c->r[3],0); // 801BD814
  if (!crb(c,2)) { goto L_801BD824; } // 801BD818
  c->r[3]=0u+0x00000000u; // 801BD81C
  goto L_801BD88C; // 801BD820
L_801BD824:;
  c->r[0]=0u+0x0000000Cu; // 801BD824
  c->r[5]=0u+0x00000000u; // 801BD828
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BD82C
  c->r[4]=0u+0x00000003u; // 801BD830
  c->r[0]=0u+0x00000004u; // 801BD834
  c->r[8]=0u+0x00000009u; // 801BD838
  W16(c->r[3]+0x00000004u,c->r[5]); // 801BD83C
  c->r[7]=sraw(c,c->r[27],8); // 801BD840
  c->r[6]=rotl(c->r[28],24)&0x000000FFu; // 801BD844
  c->r[5]=R8(c->r[29]+0x00000002u); // 801BD848
  W8(c->r[3]+0x00000008u,c->r[4]); // 801BD84C
  c->r[4]=R8(c->r[29]+0x00000001u); // 801BD850
  W8(c->r[3]+0x00000009u,c->r[0]); // 801BD854
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BD858
  W8(c->r[3]+0x0000000Au,c->r[8]); // 801BD85C
  W8(c->r[3]+0x0000000Bu,c->r[27]); // 801BD860
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 801BD864
  W8(c->r[3]+0x0000000Du,c->r[28]); // 801BD868
  W8(c->r[3]+0x0000000Eu,c->r[6]); // 801BD86C
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 801BD870
  W8(c->r[3]+0x00000010u,c->r[4]); // 801BD874
  W8(c->r[3]+0x00000011u,c->r[0]); // 801BD878
  W8(c->r[3]+0x00000012u,c->r[30]); // 801BD87C
  W8(c->r[3]+0x00000013u,c->r[31]); // 801BD880
  c->lr=0x801BD888u; f_801BB728(c); // 801BD884
  c->r[3]=0u+0x00000001u; // 801BD888
L_801BD88C:;
  c->r[11]=c->r[1]+0x00000020u; // 801BD88C
  c->lr=0x801BD894u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BD890
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD894
  c->lr=c->r[0]; // 801BD898
  c->r[1]=c->r[1]+0x00000020u; // 801BD89C
  return; // 801BD8A0
}

// btsnd_hcic_create_conn
void f_801BD8A4(Ctx* __restrict c) {
  trace_call(0x801BD8A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD8A4
  c->r[0]=c->lr; // 801BD8A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BD8AC
  c->r[11]=c->r[1]+0x00000020u; // 801BD8B0
  c->lr=0x801BD8B8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BD8B4
  c->r[26]=c->r[3]|c->r[3]; // 801BD8B8
  c->r[27]=c->r[4]|c->r[4]; // 801BD8BC
  c->r[28]=c->r[5]|c->r[5]; // 801BD8C0
  c->r[29]=c->r[6]|c->r[6]; // 801BD8C4
  c->r[30]=c->r[7]|c->r[7]; // 801BD8C8
  c->r[31]=c->r[8]|c->r[8]; // 801BD8CC
  c->r[3]=0u+0x00000002u; // 801BD8D0
  c->lr=0x801BD8D8u; f_801A7C10(c); // 801BD8D4
  cmps(c,0,(int32_t)c->r[3],0); // 801BD8D8
  if (!crb(c,2)) { goto L_801BD8E8; } // 801BD8DC
  c->r[3]=0u+0x00000000u; // 801BD8E0
  goto L_801BD96C; // 801BD8E4
L_801BD8E8:;
  c->r[4]=0u+0x00000010u; // 801BD8E8
  c->r[0]=0u+0x00000000u; // 801BD8EC
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BD8F0
  c->r[7]=0u+0x00000005u; // 801BD8F4
  c->r[6]=0u+0x00000004u; // 801BD8F8
  c->r[5]=0u+0x0000000Du; // 801BD8FC
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BD900
  c->r[4]=sraw(c,c->r[27],8); // 801BD904
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801BD908
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BD90C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BD910
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BD914
  c->r[5]=R8(c->r[26]+0x00000005u); // 801BD918
  W8(c->r[3]+0x0000000Bu,c->r[5]); // 801BD91C
  c->r[5]=R8(c->r[26]+0x00000004u); // 801BD920
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801BD924
  c->r[5]=R8(c->r[26]+0x00000003u); // 801BD928
  W8(c->r[3]+0x0000000Du,c->r[5]); // 801BD92C
  c->r[5]=R8(c->r[26]+0x00000002u); // 801BD930
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 801BD934
  c->r[5]=R8(c->r[26]+0x00000001u); // 801BD938
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 801BD93C
  c->r[5]=R8(c->r[26]+0x00000000u); // 801BD940
  W8(c->r[3]+0x00000010u,c->r[5]); // 801BD944
  W8(c->r[3]+0x00000011u,c->r[27]); // 801BD948
  W8(c->r[3]+0x00000012u,c->r[4]); // 801BD94C
  W8(c->r[3]+0x00000013u,c->r[28]); // 801BD950
  W8(c->r[3]+0x00000014u,c->r[29]); // 801BD954
  W8(c->r[3]+0x00000015u,c->r[30]); // 801BD958
  W8(c->r[3]+0x00000016u,c->r[0]); // 801BD95C
  W8(c->r[3]+0x00000017u,c->r[31]); // 801BD960
  c->lr=0x801BD968u; f_801BB728(c); // 801BD964
  c->r[3]=0u+0x00000001u; // 801BD968
L_801BD96C:;
  c->r[11]=c->r[1]+0x00000020u; // 801BD96C
  c->lr=0x801BD974u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BD970
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BD974
  c->lr=c->r[0]; // 801BD978
  c->r[1]=c->r[1]+0x00000020u; // 801BD97C
  return; // 801BD980
}

// btsnd_hcic_disconnect
void f_801BD984(Ctx* __restrict c) {
  trace_call(0x801BD984u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BD984
  c->r[0]=c->lr; // 801BD988
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BD98C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BD990
  c->r[31]=c->r[4]|c->r[4]; // 801BD994
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BD998
  c->r[30]=c->r[3]|c->r[3]; // 801BD99C
  c->r[3]=0u+0x00000002u; // 801BD9A0
  c->lr=0x801BD9A8u; f_801A7C10(c); // 801BD9A4
  cmps(c,0,(int32_t)c->r[3],0); // 801BD9A8
  if (!crb(c,2)) { goto L_801BD9B8; } // 801BD9AC
  c->r[3]=0u+0x00000000u; // 801BD9B0
  goto L_801BD9F4; // 801BD9B4
L_801BD9B8:;
  c->r[7]=0u+0x00000006u; // 801BD9B8
  c->r[6]=0u+0x00000000u; // 801BD9BC
  W16(c->r[3]+0x00000002u,c->r[7]); // 801BD9C0
  c->r[5]=0u+0x00000004u; // 801BD9C4
  c->r[4]=0u+0x00000003u; // 801BD9C8
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801BD9CC
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BD9D0
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BD9D4
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BD9D8
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BD9DC
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801BD9E0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BD9E4
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801BD9E8
  c->lr=0x801BD9F0u; f_801BB728(c); // 801BD9EC
  c->r[3]=0u+0x00000001u; // 801BD9F0
L_801BD9F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BD9F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BD9F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BD9FC
  c->lr=c->r[0]; // 801BDA00
  c->r[1]=c->r[1]+0x00000010u; // 801BDA04
  return; // 801BDA08
}

// btsnd_hcic_add_SCO_conn
void f_801BDA0C(Ctx* __restrict c) {
  trace_call(0x801BDA0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDA0C
  c->r[0]=c->lr; // 801BDA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDA14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDA18
  c->r[31]=c->r[4]|c->r[4]; // 801BDA1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BDA20
  c->r[30]=c->r[3]|c->r[3]; // 801BDA24
  c->r[3]=0u+0x00000002u; // 801BDA28
  c->lr=0x801BDA30u; f_801A7C10(c); // 801BDA2C
  cmps(c,0,(int32_t)c->r[3],0); // 801BDA30
  if (!crb(c,2)) { goto L_801BDA40; } // 801BDA34
  c->r[3]=0u+0x00000000u; // 801BDA38
  goto L_801BDA80; // 801BDA3C
L_801BDA40:;
  c->r[7]=0u+0x00000007u; // 801BDA40
  c->r[6]=0u+0x00000000u; // 801BDA44
  W16(c->r[3]+0x00000002u,c->r[7]); // 801BDA48
  c->r[5]=0u+0x00000004u; // 801BDA4C
  c->r[4]=sraw(c,c->r[30],8); // 801BDA50
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BDA54
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BDA58
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BDA5C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BDA60
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BDA64
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801BDA68
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801BDA6C
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801BDA70
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BDA74
  c->lr=0x801BDA7Cu; f_801BB728(c); // 801BDA78
  c->r[3]=0u+0x00000001u; // 801BDA7C
L_801BDA80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDA80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDA84
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BDA88
  c->lr=c->r[0]; // 801BDA8C
  c->r[1]=c->r[1]+0x00000010u; // 801BDA90
  return; // 801BDA94
}

// btsnd_hcic_accept_conn
void f_801BDA98(Ctx* __restrict c) {
  trace_call(0x801BDA98u);
  c->r[9]=0u+0x0000000Au; // 801BDA98
  c->r[8]=0u+0x00000000u; // 801BDA9C
  c->r[7]=0u+0x00000009u; // 801BDAA0
  c->r[6]=0u+0x00000004u; // 801BDAA4
  c->r[0]=0u+0x00000007u; // 801BDAA8
  W16(c->r[3]+0x00000002u,c->r[9]); // 801BDAAC
  W16(c->r[3]+0x00000004u,c->r[8]); // 801BDAB0
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BDAB4
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BDAB8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BDABC
  c->r[0]=R8(c->r[4]+0x00000005u); // 801BDAC0
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BDAC4
  c->r[0]=R8(c->r[4]+0x00000004u); // 801BDAC8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BDACC
  c->r[0]=R8(c->r[4]+0x00000003u); // 801BDAD0
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BDAD4
  c->r[0]=R8(c->r[4]+0x00000002u); // 801BDAD8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BDADC
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BDAE0
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BDAE4
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BDAE8
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BDAEC
  W8(c->r[3]+0x00000011u,c->r[5]); // 801BDAF0
  f_801BB728(c); return; // 801BDAF4
}

// btsnd_hcic_reject_conn
void f_801BDAF8(Ctx* __restrict c) {
  trace_call(0x801BDAF8u);
  c->r[8]=0u+0x0000000Au; // 801BDAF8
  c->r[7]=0u+0x00000000u; // 801BDAFC
  c->r[6]=0u+0x00000004u; // 801BDB00
  c->r[0]=0u+0x00000007u; // 801BDB04
  W16(c->r[3]+0x00000002u,c->r[8]); // 801BDB08
  W16(c->r[3]+0x00000004u,c->r[7]); // 801BDB0C
  W8(c->r[3]+0x00000008u,c->r[8]); // 801BDB10
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BDB14
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BDB18
  c->r[0]=R8(c->r[4]+0x00000005u); // 801BDB1C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BDB20
  c->r[0]=R8(c->r[4]+0x00000004u); // 801BDB24
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BDB28
  c->r[0]=R8(c->r[4]+0x00000003u); // 801BDB2C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BDB30
  c->r[0]=R8(c->r[4]+0x00000002u); // 801BDB34
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BDB38
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BDB3C
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BDB40
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BDB44
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BDB48
  W8(c->r[3]+0x00000011u,c->r[5]); // 801BDB4C
  f_801BB728(c); return; // 801BDB50
}

// btsnd_hcic_link_key_req_reply
void f_801BDB54(Ctx* __restrict c) {
  trace_call(0x801BDB54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDB54
  c->r[0]=c->lr; // 801BDB58
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BDB5C
  c->r[11]=c->r[1]+0x00000030u; // 801BDB60
  c->lr=0x801BDB68u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BDB64
  c->r[30]=c->r[3]|c->r[3]; // 801BDB68
  c->r[31]=c->r[4]|c->r[4]; // 801BDB6C
  c->r[3]=0u+0x00000002u; // 801BDB70
  c->lr=0x801BDB78u; f_801A7C10(c); // 801BDB74
  cmps(c,0,(int32_t)c->r[3],0); // 801BDB78
  if (!crb(c,2)) { goto L_801BDB88; } // 801BDB7C
  c->r[3]=0u+0x00000000u; // 801BDB80
  goto L_801BDCDC; // 801BDB84
L_801BDB88:;
  c->r[0]=0u+0x00000019u; // 801BDB88
  c->r[4]=0u+0x00000000u; // 801BDB8C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BDB90
  c->r[0]=0u+0x0000000Bu; // 801BDB94
  c->r[6]=0u+0x00000004u; // 801BDB98
  c->r[5]=0u+0x00000016u; // 801BDB9C
  W16(c->r[3]+0x00000004u,c->r[4]); // 801BDBA0
  c->r[24]=addc(c,~c->r[4],0x0000000Fu,1); // 801BDBA4
  c->r[25]=0u+0x00000001u; // 801BDBA8
  c->r[27]=0u+0x00000002u; // 801BDBAC
  W8(c->r[3]+0x00000008u,c->r[0]); // 801BDBB0
  c->r[26]=addc(c,~c->r[25],0x0000000Fu,1); // 801BDBB4
  c->r[28]=addc(c,~c->r[27],0x0000000Fu,1); // 801BDBB8
  c->r[4]=0u+0x00000003u; // 801BDBBC
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BDBC0
  c->r[29]=addc(c,~c->r[4],0x0000000Fu,1); // 801BDBC4
  c->r[9]=0u+0x00000005u; // 801BDBC8
  c->r[10]=addc(c,~c->r[6],0x0000000Fu,1); // 801BDBCC
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BDBD0
  c->r[8]=addc(c,~c->r[9],0x0000000Fu,1); // 801BDBD4
  c->r[7]=0u+0x00000006u; // 801BDBD8
  c->r[5]=0u+0x00000007u; // 801BDBDC
  c->r[4]=R8(c->r[30]+0x00000005u); // 801BDBE0
  c->r[6]=addc(c,~c->r[7],0x0000000Fu,1); // 801BDBE4
  c->r[23]=0u+0x00000008u; // 801BDBE8
  c->r[25]=0u+0x00000009u; // 801BDBEC
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801BDBF0
  c->r[4]=addc(c,~c->r[5],0x0000000Fu,1); // 801BDBF4
  c->r[27]=0u+0x0000000Au; // 801BDBF8
  c->r[11]=0u+0x0000000Cu; // 801BDBFC
  c->r[5]=R8(c->r[30]+0x00000004u); // 801BDC00
  c->r[9]=0u+0x0000000Du; // 801BDC04
  c->r[7]=0u+0x0000000Eu; // 801BDC08
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801BDC0C
  c->r[5]=0u+0x0000000Fu; // 801BDC10
  c->r[12]=R8(c->r[30]+0x00000003u); // 801BDC14
  W8(c->r[3]+0x0000000Du,c->r[12]); // 801BDC18
  c->r[12]=R8(c->r[30]+0x00000002u); // 801BDC1C
  W8(c->r[3]+0x0000000Eu,c->r[12]); // 801BDC20
  c->r[12]=R8(c->r[30]+0x00000001u); // 801BDC24
  W8(c->r[3]+0x0000000Fu,c->r[12]); // 801BDC28
  c->r[12]=R8(c->r[30]+0x00000000u); // 801BDC2C
  W8(c->r[3]+0x00000010u,c->r[12]); // 801BDC30
  c->r[12]=R8(c->r[31]+c->r[24]); // 801BDC34
  c->r[24]=addc(c,~c->r[23],0x0000000Fu,1); // 801BDC38
  W8(c->r[3]+0x00000011u,c->r[12]); // 801BDC3C
  c->r[12]=R8(c->r[31]+c->r[26]); // 801BDC40
  c->r[26]=addc(c,~c->r[25],0x0000000Fu,1); // 801BDC44
  W8(c->r[3]+0x00000012u,c->r[12]); // 801BDC48
  c->r[12]=R8(c->r[31]+c->r[28]); // 801BDC4C
  c->r[28]=addc(c,~c->r[27],0x0000000Fu,1); // 801BDC50
  W8(c->r[3]+0x00000013u,c->r[12]); // 801BDC54
  c->r[12]=R8(c->r[31]+c->r[29]); // 801BDC58
  c->r[29]=addc(c,~c->r[0],0x0000000Fu,1); // 801BDC5C
  W8(c->r[3]+0x00000014u,c->r[12]); // 801BDC60
  c->r[0]=R8(c->r[31]+c->r[10]); // 801BDC64
  c->r[10]=addc(c,~c->r[11],0x0000000Fu,1); // 801BDC68
  W8(c->r[3]+0x00000015u,c->r[0]); // 801BDC6C
  c->r[0]=R8(c->r[31]+c->r[8]); // 801BDC70
  c->r[8]=addc(c,~c->r[9],0x0000000Fu,1); // 801BDC74
  W8(c->r[3]+0x00000016u,c->r[0]); // 801BDC78
  c->r[0]=R8(c->r[31]+c->r[6]); // 801BDC7C
  c->r[6]=addc(c,~c->r[7],0x0000000Fu,1); // 801BDC80
  W8(c->r[3]+0x00000017u,c->r[0]); // 801BDC84
  c->r[0]=R8(c->r[31]+c->r[4]); // 801BDC88
  c->r[4]=addc(c,~c->r[5],0x0000000Fu,1); // 801BDC8C
  W8(c->r[3]+0x00000018u,c->r[0]); // 801BDC90
  c->r[12]=R8(c->r[31]+c->r[24]); // 801BDC94
  W8(c->r[3]+0x00000019u,c->r[12]); // 801BDC98
  c->r[12]=R8(c->r[31]+c->r[26]); // 801BDC9C
  W8(c->r[3]+0x0000001Au,c->r[12]); // 801BDCA0
  c->r[12]=R8(c->r[31]+c->r[28]); // 801BDCA4
  W8(c->r[3]+0x0000001Bu,c->r[12]); // 801BDCA8
  c->r[12]=R8(c->r[31]+c->r[29]); // 801BDCAC
  W8(c->r[3]+0x0000001Cu,c->r[12]); // 801BDCB0
  c->r[0]=R8(c->r[31]+c->r[10]); // 801BDCB4
  W8(c->r[3]+0x0000001Du,c->r[0]); // 801BDCB8
  c->r[0]=R8(c->r[31]+c->r[8]); // 801BDCBC
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 801BDCC0
  c->r[0]=R8(c->r[31]+c->r[6]); // 801BDCC4
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801BDCC8
  c->r[0]=R8(c->r[31]+c->r[4]); // 801BDCCC
  W8(c->r[3]+0x00000020u,c->r[0]); // 801BDCD0
  c->lr=0x801BDCD8u; f_801BB728(c); // 801BDCD4
  c->r[3]=0u+0x00000001u; // 801BDCD8
L_801BDCDC:;
  c->r[11]=c->r[1]+0x00000030u; // 801BDCDC
  c->lr=0x801BDCE4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BDCE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BDCE4
  c->lr=c->r[0]; // 801BDCE8
  c->r[1]=c->r[1]+0x00000030u; // 801BDCEC
  return; // 801BDCF0
}

// btsnd_hcic_link_key_neg_reply
void f_801BDCF4(Ctx* __restrict c) {
  trace_call(0x801BDCF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDCF4
  c->r[0]=c->lr; // 801BDCF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDCFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDD00
  c->r[31]=c->r[3]|c->r[3]; // 801BDD04
  c->r[3]=0u+0x00000002u; // 801BDD08
  c->lr=0x801BDD10u; f_801A7C10(c); // 801BDD0C
  cmps(c,0,(int32_t)c->r[3],0); // 801BDD10
  if (!crb(c,2)) { goto L_801BDD20; } // 801BDD14
  c->r[3]=0u+0x00000000u; // 801BDD18
  goto L_801BDD80; // 801BDD1C
L_801BDD20:;
  c->r[0]=0u+0x00000009u; // 801BDD20
  c->r[6]=0u+0x00000000u; // 801BDD24
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BDD28
  c->r[5]=0u+0x0000000Cu; // 801BDD2C
  c->r[4]=0u+0x00000004u; // 801BDD30
  c->r[0]=0u+0x00000006u; // 801BDD34
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BDD38
  W8(c->r[3]+0x00000008u,c->r[5]); // 801BDD3C
  W8(c->r[3]+0x00000009u,c->r[4]); // 801BDD40
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BDD44
  c->r[0]=R8(c->r[31]+0x00000005u); // 801BDD48
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BDD4C
  c->r[0]=R8(c->r[31]+0x00000004u); // 801BDD50
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BDD54
  c->r[0]=R8(c->r[31]+0x00000003u); // 801BDD58
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BDD5C
  c->r[0]=R8(c->r[31]+0x00000002u); // 801BDD60
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BDD64
  c->r[0]=R8(c->r[31]+0x00000001u); // 801BDD68
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BDD6C
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BDD70
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BDD74
  c->lr=0x801BDD7Cu; f_801BB728(c); // 801BDD78
  c->r[3]=0u+0x00000001u; // 801BDD7C
L_801BDD80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BDD80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BDD84
  c->lr=c->r[0]; // 801BDD88
  c->r[1]=c->r[1]+0x00000010u; // 801BDD8C
  return; // 801BDD90
}

// btsnd_hcic_pin_code_req_reply
void f_801BDD94(Ctx* __restrict c) {
  trace_call(0x801BDD94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDD94
  c->r[0]=c->lr; // 801BDD98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BDD9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BDDA0
  c->r[31]=c->r[5]|c->r[5]; // 801BDDA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BDDA8
  c->r[30]=c->r[4]|c->r[4]; // 801BDDAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BDDB0
  c->r[29]=c->r[3]|c->r[3]; // 801BDDB4
  c->r[3]=0u+0x00000002u; // 801BDDB8
  c->lr=0x801BDDC0u; f_801A7C10(c); // 801BDDBC
  cmps(c,0,(int32_t)c->r[3],0); // 801BDDC0
  if (!crb(c,2)) { goto L_801BDDD0; } // 801BDDC4
  c->r[3]=0u+0x00000000u; // 801BDDC8
  goto L_801BDF5C; // 801BDDCC
L_801BDDD0:;
  c->r[0]=0u+0x0000001Au; // 801BDDD0
  c->r[4]=0u+0x00000000u; // 801BDDD4
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BDDD8
  c->r[7]=0u+0x0000000Du; // 801BDDDC
  c->r[6]=0u+0x00000004u; // 801BDDE0
  c->r[0]=0u+0x00000017u; // 801BDDE4
  W16(c->r[3]+0x00000004u,c->r[4]); // 801BDDE8
  cmps(c,1,(int32_t)c->r[30],0); // 801BDDEC
  c->r[4]=c->r[3]+0x00000012u; // 801BDDF0
  c->r[5]=0u+0x00000000u; // 801BDDF4
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BDDF8
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BDDFC
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BDE00
  c->r[0]=R8(c->r[29]+0x00000005u); // 801BDE04
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BDE08
  c->r[0]=R8(c->r[29]+0x00000004u); // 801BDE0C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BDE10
  c->r[0]=R8(c->r[29]+0x00000003u); // 801BDE14
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BDE18
  c->r[0]=R8(c->r[29]+0x00000002u); // 801BDE1C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BDE20
  c->r[0]=R8(c->r[29]+0x00000001u); // 801BDE24
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BDE28
  c->r[0]=R8(c->r[29]+0x00000000u); // 801BDE2C
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BDE30
  W8(c->r[3]+0x00000011u,c->r[30]); // 801BDE34
  if (!crb(c,5)) { goto L_801BDEF8; } // 801BDE38
  cmps(c,0,(int32_t)c->r[30],8); // 801BDE3C
  c->r[7]=c->r[30]+0xFFFFFFF8u; // 801BDE40
  if (!crb(c,1)) { goto L_801BDED0; } // 801BDE44
  c->r[8]=0u+0x00000000u; // 801BDE48
  if (crb(c,4)) { goto L_801BDE64; } // 801BDE4C
  c->r[6]=0u+0x80000000u; // 801BDE50
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 801BDE54
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 801BDE58
  if (crb(c,1)) { goto L_801BDE64; } // 801BDE5C
  c->r[8]=0u+0x00000001u; // 801BDE60
L_801BDE64:;
  cmps(c,0,(int32_t)c->r[8],0); // 801BDE64
  if (crb(c,2)) { goto L_801BDED0; } // 801BDE68
  c->r[0]=c->r[7]+0x00000007u; // 801BDE6C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801BDE70
  c->ctr=c->r[0]; // 801BDE74
  cmps(c,0,(int32_t)c->r[7],0); // 801BDE78
  if (!crb(c,1)) { goto L_801BDED0; } // 801BDE7C
L_801BDE80:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BDE80
  c->r[5]=c->r[5]+0x00000008u; // 801BDE84
  W8(c->r[4]+0x00000000u,c->r[0]); // 801BDE88
  c->r[0]=R8(c->r[31]+0x00000001u); // 801BDE8C
  W8(c->r[4]+0x00000001u,c->r[0]); // 801BDE90
  c->r[0]=R8(c->r[31]+0x00000002u); // 801BDE94
  W8(c->r[4]+0x00000002u,c->r[0]); // 801BDE98
  c->r[0]=R8(c->r[31]+0x00000003u); // 801BDE9C
  W8(c->r[4]+0x00000003u,c->r[0]); // 801BDEA0
  c->r[0]=R8(c->r[31]+0x00000004u); // 801BDEA4
  W8(c->r[4]+0x00000004u,c->r[0]); // 801BDEA8
  c->r[0]=R8(c->r[31]+0x00000005u); // 801BDEAC
  W8(c->r[4]+0x00000005u,c->r[0]); // 801BDEB0
  c->r[0]=R8(c->r[31]+0x00000006u); // 801BDEB4
  W8(c->r[4]+0x00000006u,c->r[0]); // 801BDEB8
  c->r[0]=R8(c->r[31]+0x00000007u); // 801BDEBC
  c->r[31]=c->r[31]+0x00000008u; // 801BDEC0
  W8(c->r[4]+0x00000007u,c->r[0]); // 801BDEC4
  c->r[4]=c->r[4]+0x00000008u; // 801BDEC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BDE80; } // 801BDECC
L_801BDED0:;
  c->r[0]=c->r[30]-c->r[5]; // 801BDED0
  c->ctr=c->r[0]; // 801BDED4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 801BDED8
  if (!crb(c,0)) { goto L_801BDEF8; } // 801BDEDC
L_801BDEE0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BDEE0
  c->r[5]=c->r[5]+0x00000001u; // 801BDEE4
  c->r[31]=c->r[31]+0x00000001u; // 801BDEE8
  W8(c->r[4]+0x00000000u,c->r[0]); // 801BDEEC
  c->r[4]=c->r[4]+0x00000001u; // 801BDEF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BDEE0; } // 801BDEF4
L_801BDEF8:;
  cmps(c,0,(int32_t)c->r[5],16); // 801BDEF8
  c->r[5]=addc(c,~c->r[5],0x00000010u,1); // 801BDEFC
  c->r[6]=0u+0x00000000u; // 801BDF00
  if (!crb(c,0)) { goto L_801BDF54; } // 801BDF04
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801BDF08
  c->ctr=c->r[0]; // 801BDF0C
  if (crb(c,2)) { goto L_801BDF44; } // 801BDF10
L_801BDF14:;
  W8(c->r[4]+0x00000000u,c->r[6]); // 801BDF14
  W8(c->r[4]+0x00000001u,c->r[6]); // 801BDF18
  W8(c->r[4]+0x00000002u,c->r[6]); // 801BDF1C
  W8(c->r[4]+0x00000003u,c->r[6]); // 801BDF20
  W8(c->r[4]+0x00000004u,c->r[6]); // 801BDF24
  W8(c->r[4]+0x00000005u,c->r[6]); // 801BDF28
  W8(c->r[4]+0x00000006u,c->r[6]); // 801BDF2C
  W8(c->r[4]+0x00000007u,c->r[6]); // 801BDF30
  c->r[4]=c->r[4]+0x00000008u; // 801BDF34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BDF14; } // 801BDF38
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801BDF3C
  if (crb(c,2)) { goto L_801BDF54; } // 801BDF40
L_801BDF44:;
  c->ctr=c->r[5]; // 801BDF44
L_801BDF48:;
  W8(c->r[4]+0x00000000u,c->r[6]); // 801BDF48
  c->r[4]=c->r[4]+0x00000001u; // 801BDF4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BDF48; } // 801BDF50
L_801BDF54:;
  c->lr=0x801BDF58u; f_801BB728(c); // 801BDF54
  c->r[3]=0u+0x00000001u; // 801BDF58
L_801BDF5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BDF5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BDF60
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BDF64
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BDF68
  c->lr=c->r[0]; // 801BDF6C
  c->r[1]=c->r[1]+0x00000020u; // 801BDF70
  return; // 801BDF74
}

// btsnd_hcic_pin_code_neg_reply
void f_801BDF78(Ctx* __restrict c) {
  trace_call(0x801BDF78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BDF78
  c->r[0]=c->lr; // 801BDF7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BDF80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BDF84
  c->r[31]=c->r[3]|c->r[3]; // 801BDF88
  c->r[3]=0u+0x00000002u; // 801BDF8C
  c->lr=0x801BDF94u; f_801A7C10(c); // 801BDF90
  cmps(c,0,(int32_t)c->r[3],0); // 801BDF94
  if (!crb(c,2)) { goto L_801BDFA4; } // 801BDF98
  c->r[3]=0u+0x00000000u; // 801BDF9C
  goto L_801BE004; // 801BDFA0
L_801BDFA4:;
  c->r[0]=0u+0x00000009u; // 801BDFA4
  c->r[6]=0u+0x00000000u; // 801BDFA8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BDFAC
  c->r[5]=0u+0x0000000Eu; // 801BDFB0
  c->r[4]=0u+0x00000004u; // 801BDFB4
  c->r[0]=0u+0x00000006u; // 801BDFB8
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BDFBC
  W8(c->r[3]+0x00000008u,c->r[5]); // 801BDFC0
  W8(c->r[3]+0x00000009u,c->r[4]); // 801BDFC4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BDFC8
  c->r[0]=R8(c->r[31]+0x00000005u); // 801BDFCC
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BDFD0
  c->r[0]=R8(c->r[31]+0x00000004u); // 801BDFD4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BDFD8
  c->r[0]=R8(c->r[31]+0x00000003u); // 801BDFDC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BDFE0
  c->r[0]=R8(c->r[31]+0x00000002u); // 801BDFE4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BDFE8
  c->r[0]=R8(c->r[31]+0x00000001u); // 801BDFEC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BDFF0
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BDFF4
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BDFF8
  c->lr=0x801BE000u; f_801BB728(c); // 801BDFFC
  c->r[3]=0u+0x00000001u; // 801BE000
L_801BE004:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE008
  c->lr=c->r[0]; // 801BE00C
  c->r[1]=c->r[1]+0x00000010u; // 801BE010
  return; // 801BE014
}

// btsnd_hcic_change_conn_type
void f_801BE018(Ctx* __restrict c) {
  trace_call(0x801BE018u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE018
  c->r[0]=c->lr; // 801BE01C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE020
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE024
  c->r[31]=c->r[4]|c->r[4]; // 801BE028
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BE02C
  c->r[30]=c->r[3]|c->r[3]; // 801BE030
  c->r[3]=0u+0x00000002u; // 801BE034
  c->lr=0x801BE03Cu; f_801A7C10(c); // 801BE038
  cmps(c,0,(int32_t)c->r[3],0); // 801BE03C
  if (!crb(c,2)) { goto L_801BE04C; } // 801BE040
  c->r[3]=0u+0x00000000u; // 801BE044
  goto L_801BE090; // 801BE048
L_801BE04C:;
  c->r[4]=0u+0x00000007u; // 801BE04C
  c->r[0]=0u+0x00000000u; // 801BE050
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE054
  c->r[6]=0u+0x0000000Fu; // 801BE058
  c->r[5]=0u+0x00000004u; // 801BE05C
  c->r[4]=sraw(c,c->r[30],8); // 801BE060
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE064
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE068
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE06C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE070
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BE074
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801BE078
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801BE07C
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801BE080
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BE084
  c->lr=0x801BE08Cu; f_801BB728(c); // 801BE088
  c->r[3]=0u+0x00000001u; // 801BE08C
L_801BE090:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE094
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BE098
  c->lr=c->r[0]; // 801BE09C
  c->r[1]=c->r[1]+0x00000010u; // 801BE0A0
  return; // 801BE0A4
}

// btsnd_hcic_auth_request
void f_801BE0A8(Ctx* __restrict c) {
  trace_call(0x801BE0A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE0A8
  c->r[0]=c->lr; // 801BE0AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE0B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE0B4
  c->r[31]=c->r[3]|c->r[3]; // 801BE0B8
  c->r[3]=0u+0x00000002u; // 801BE0BC
  c->lr=0x801BE0C4u; f_801A7C10(c); // 801BE0C0
  cmps(c,0,(int32_t)c->r[3],0); // 801BE0C4
  if (!crb(c,2)) { goto L_801BE0D4; } // 801BE0C8
  c->r[3]=0u+0x00000000u; // 801BE0CC
  goto L_801BE110; // 801BE0D0
L_801BE0D4:;
  c->r[4]=0u+0x00000005u; // 801BE0D4
  c->r[0]=0u+0x00000000u; // 801BE0D8
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE0DC
  c->r[6]=0u+0x00000011u; // 801BE0E0
  c->r[5]=0u+0x00000004u; // 801BE0E4
  c->r[4]=0u+0x00000002u; // 801BE0E8
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE0EC
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE0F0
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE0F4
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE0F8
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BE0FC
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801BE100
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE104
  c->lr=0x801BE10Cu; f_801BB728(c); // 801BE108
  c->r[3]=0u+0x00000001u; // 801BE10C
L_801BE110:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE110
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE114
  c->lr=c->r[0]; // 801BE118
  c->r[1]=c->r[1]+0x00000010u; // 801BE11C
  return; // 801BE120
}

// btsnd_hcic_set_conn_encrypt
void f_801BE124(Ctx* __restrict c) {
  trace_call(0x801BE124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE124
  c->r[0]=c->lr; // 801BE128
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE12C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE130
  c->r[31]=c->r[4]|c->r[4]; // 801BE134
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BE138
  c->r[30]=c->r[3]|c->r[3]; // 801BE13C
  c->r[3]=0u+0x00000002u; // 801BE140
  c->lr=0x801BE148u; f_801A7C10(c); // 801BE144
  cmps(c,0,(int32_t)c->r[3],0); // 801BE148
  if (!crb(c,2)) { goto L_801BE158; } // 801BE14C
  c->r[3]=0u+0x00000000u; // 801BE150
  goto L_801BE198; // 801BE154
L_801BE158:;
  c->r[4]=0u+0x00000006u; // 801BE158
  c->r[0]=0u+0x00000000u; // 801BE15C
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE160
  c->r[6]=0u+0x00000013u; // 801BE164
  c->r[5]=0u+0x00000004u; // 801BE168
  c->r[4]=0u+0x00000003u; // 801BE16C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE170
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 801BE174
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE178
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE17C
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BE180
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801BE184
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE188
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801BE18C
  c->lr=0x801BE194u; f_801BB728(c); // 801BE190
  c->r[3]=0u+0x00000001u; // 801BE194
L_801BE198:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE198
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE19C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BE1A0
  c->lr=c->r[0]; // 801BE1A4
  c->r[1]=c->r[1]+0x00000010u; // 801BE1A8
  return; // 801BE1AC
}

// btsnd_hcic_rmt_name_req
void f_801BE1B0(Ctx* __restrict c) {
  trace_call(0x801BE1B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE1B0
  c->r[0]=c->lr; // 801BE1B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE1B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BE1BC
  c->r[31]=c->r[6]|c->r[6]; // 801BE1C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BE1C4
  c->r[30]=c->r[5]|c->r[5]; // 801BE1C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BE1CC
  c->r[29]=c->r[4]|c->r[4]; // 801BE1D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801BE1D4
  c->r[28]=c->r[3]|c->r[3]; // 801BE1D8
  c->r[3]=0u+0x00000002u; // 801BE1DC
  c->lr=0x801BE1E4u; f_801A7C10(c); // 801BE1E0
  cmps(c,0,(int32_t)c->r[3],0); // 801BE1E4
  if (!crb(c,2)) { goto L_801BE1F4; } // 801BE1E8
  c->r[3]=0u+0x00000000u; // 801BE1EC
  goto L_801BE268; // 801BE1F0
L_801BE1F4:;
  c->r[4]=0u+0x0000000Du; // 801BE1F4
  c->r[0]=0u+0x00000000u; // 801BE1F8
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE1FC
  c->r[6]=0u+0x00000019u; // 801BE200
  c->r[5]=0u+0x00000004u; // 801BE204
  c->r[4]=0u+0x0000000Au; // 801BE208
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE20C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE210
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE214
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE218
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BE21C
  c->r[4]=R8(c->r[28]+0x00000005u); // 801BE220
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801BE224
  c->r[4]=R8(c->r[28]+0x00000004u); // 801BE228
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801BE22C
  c->r[4]=R8(c->r[28]+0x00000003u); // 801BE230
  W8(c->r[3]+0x0000000Du,c->r[4]); // 801BE234
  c->r[4]=R8(c->r[28]+0x00000002u); // 801BE238
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801BE23C
  c->r[4]=R8(c->r[28]+0x00000001u); // 801BE240
  W8(c->r[3]+0x0000000Fu,c->r[4]); // 801BE244
  c->r[4]=R8(c->r[28]+0x00000000u); // 801BE248
  W8(c->r[3]+0x00000010u,c->r[4]); // 801BE24C
  W8(c->r[3]+0x00000011u,c->r[29]); // 801BE250
  W8(c->r[3]+0x00000012u,c->r[30]); // 801BE254
  W8(c->r[3]+0x00000013u,c->r[31]); // 801BE258
  W8(c->r[3]+0x00000014u,c->r[0]); // 801BE25C
  c->lr=0x801BE264u; f_801BB728(c); // 801BE260
  c->r[3]=0u+0x00000001u; // 801BE264
L_801BE268:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE268
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BE26C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BE270
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BE274
  c->r[28]=R32(c->r[1]+0x00000010u); // 801BE278
  c->lr=c->r[0]; // 801BE27C
  c->r[1]=c->r[1]+0x00000020u; // 801BE280
  return; // 801BE284
}

// btsnd_hcic_rmt_name_req_cancel
void f_801BE288(Ctx* __restrict c) {
  trace_call(0x801BE288u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE288
  c->r[0]=c->lr; // 801BE28C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE290
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE294
  c->r[31]=c->r[3]|c->r[3]; // 801BE298
  c->r[3]=0u+0x00000002u; // 801BE29C
  c->lr=0x801BE2A4u; f_801A7C10(c); // 801BE2A0
  cmps(c,0,(int32_t)c->r[3],0); // 801BE2A4
  if (!crb(c,2)) { goto L_801BE2B4; } // 801BE2A8
  c->r[3]=0u+0x00000000u; // 801BE2AC
  goto L_801BE314; // 801BE2B0
L_801BE2B4:;
  c->r[0]=0u+0x00000009u; // 801BE2B4
  c->r[6]=0u+0x00000000u; // 801BE2B8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BE2BC
  c->r[5]=0u+0x0000001Au; // 801BE2C0
  c->r[4]=0u+0x00000004u; // 801BE2C4
  c->r[0]=0u+0x00000006u; // 801BE2C8
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BE2CC
  W8(c->r[3]+0x00000008u,c->r[5]); // 801BE2D0
  W8(c->r[3]+0x00000009u,c->r[4]); // 801BE2D4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BE2D8
  c->r[0]=R8(c->r[31]+0x00000005u); // 801BE2DC
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BE2E0
  c->r[0]=R8(c->r[31]+0x00000004u); // 801BE2E4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE2E8
  c->r[0]=R8(c->r[31]+0x00000003u); // 801BE2EC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BE2F0
  c->r[0]=R8(c->r[31]+0x00000002u); // 801BE2F4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BE2F8
  c->r[0]=R8(c->r[31]+0x00000001u); // 801BE2FC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BE300
  c->r[0]=R8(c->r[31]+0x00000000u); // 801BE304
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BE308
  c->lr=0x801BE310u; f_801BB728(c); // 801BE30C
  c->r[3]=0u+0x00000001u; // 801BE310
L_801BE314:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE318
  c->lr=c->r[0]; // 801BE31C
  c->r[1]=c->r[1]+0x00000010u; // 801BE320
  return; // 801BE324
}

// btsnd_hcic_rmt_features_req
void f_801BE328(Ctx* __restrict c) {
  trace_call(0x801BE328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE328
  c->r[0]=c->lr; // 801BE32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE334
  c->r[31]=c->r[3]|c->r[3]; // 801BE338
  c->r[3]=0u+0x00000002u; // 801BE33C
  c->lr=0x801BE344u; f_801A7C10(c); // 801BE340
  cmps(c,0,(int32_t)c->r[3],0); // 801BE344
  if (!crb(c,2)) { goto L_801BE354; } // 801BE348
  c->r[3]=0u+0x00000000u; // 801BE34C
  goto L_801BE390; // 801BE350
L_801BE354:;
  c->r[4]=0u+0x00000005u; // 801BE354
  c->r[0]=0u+0x00000000u; // 801BE358
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE35C
  c->r[6]=0u+0x0000001Bu; // 801BE360
  c->r[5]=0u+0x00000004u; // 801BE364
  c->r[4]=0u+0x00000002u; // 801BE368
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE36C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE370
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE374
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE378
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BE37C
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801BE380
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE384
  c->lr=0x801BE38Cu; f_801BB728(c); // 801BE388
  c->r[3]=0u+0x00000001u; // 801BE38C
L_801BE390:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE390
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE394
  c->lr=c->r[0]; // 801BE398
  c->r[1]=c->r[1]+0x00000010u; // 801BE39C
  return; // 801BE3A0
}

// btsnd_hcic_rmt_ver_req
void f_801BE3A4(Ctx* __restrict c) {
  trace_call(0x801BE3A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE3A4
  c->r[0]=c->lr; // 801BE3A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE3AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE3B0
  c->r[31]=c->r[3]|c->r[3]; // 801BE3B4
  c->r[3]=0u+0x00000002u; // 801BE3B8
  c->lr=0x801BE3C0u; f_801A7C10(c); // 801BE3BC
  cmps(c,0,(int32_t)c->r[3],0); // 801BE3C0
  if (!crb(c,2)) { goto L_801BE3D0; } // 801BE3C4
  c->r[3]=0u+0x00000000u; // 801BE3C8
  goto L_801BE40C; // 801BE3CC
L_801BE3D0:;
  c->r[4]=0u+0x00000005u; // 801BE3D0
  c->r[0]=0u+0x00000000u; // 801BE3D4
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE3D8
  c->r[6]=0u+0x0000001Du; // 801BE3DC
  c->r[5]=0u+0x00000004u; // 801BE3E0
  c->r[4]=0u+0x00000002u; // 801BE3E4
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE3E8
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE3EC
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE3F0
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE3F4
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BE3F8
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801BE3FC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE400
  c->lr=0x801BE408u; f_801BB728(c); // 801BE404
  c->r[3]=0u+0x00000001u; // 801BE408
L_801BE40C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE40C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE410
  c->lr=c->r[0]; // 801BE414
  c->r[1]=c->r[1]+0x00000010u; // 801BE418
  return; // 801BE41C
}

// btsnd_hcic_read_rmt_clk_offset
void f_801BE420(Ctx* __restrict c) {
  trace_call(0x801BE420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE420
  c->r[0]=c->lr; // 801BE424
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE428
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE42C
  c->r[31]=c->r[3]|c->r[3]; // 801BE430
  c->r[3]=0u+0x00000002u; // 801BE434
  c->lr=0x801BE43Cu; f_801A7C10(c); // 801BE438
  cmps(c,0,(int32_t)c->r[3],0); // 801BE43C
  if (!crb(c,2)) { goto L_801BE44C; } // 801BE440
  c->r[3]=0u+0x00000000u; // 801BE444
  goto L_801BE488; // 801BE448
L_801BE44C:;
  c->r[4]=0u+0x00000005u; // 801BE44C
  c->r[0]=0u+0x00000000u; // 801BE450
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE454
  c->r[6]=0u+0x0000001Fu; // 801BE458
  c->r[5]=0u+0x00000004u; // 801BE45C
  c->r[4]=0u+0x00000002u; // 801BE460
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE464
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE468
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE46C
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE470
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BE474
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801BE478
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE47C
  c->lr=0x801BE484u; f_801BB728(c); // 801BE480
  c->r[3]=0u+0x00000001u; // 801BE484
L_801BE488:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE488
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE48C
  c->lr=c->r[0]; // 801BE490
  c->r[1]=c->r[1]+0x00000010u; // 801BE494
  return; // 801BE498
}

// btsnd_hcic_setup_esco_conn
void f_801BE49C(Ctx* __restrict c) {
  trace_call(0x801BE49Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE49C
  c->r[0]=c->lr; // 801BE4A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BE4A4
  c->r[11]=c->r[1]+0x00000030u; // 801BE4A8
  c->lr=0x801BE4B0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BE4AC
  c->r[25]=c->r[3]|c->r[3]; // 801BE4B0
  c->r[26]=c->r[4]|c->r[4]; // 801BE4B4
  c->r[27]=c->r[5]|c->r[5]; // 801BE4B8
  c->r[28]=c->r[6]|c->r[6]; // 801BE4BC
  c->r[29]=c->r[7]|c->r[7]; // 801BE4C0
  c->r[30]=c->r[8]|c->r[8]; // 801BE4C4
  c->r[31]=c->r[9]|c->r[9]; // 801BE4C8
  c->r[3]=0u+0x00000002u; // 801BE4CC
  c->lr=0x801BE4D4u; f_801A7C10(c); // 801BE4D0
  cmps(c,0,(int32_t)c->r[3],0); // 801BE4D4
  if (!crb(c,2)) { goto L_801BE4E4; } // 801BE4D8
  c->r[3]=0u+0x00000000u; // 801BE4DC
  goto L_801BE580; // 801BE4E0
L_801BE4E4:;
  c->r[0]=0u+0x00000014u; // 801BE4E4
  c->r[12]=sraw(c,c->r[25],8); // 801BE4E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BE4EC
  c->r[0]=0u+0x00000000u; // 801BE4F0
  c->r[6]=0u+0x00000028u; // 801BE4F4
  c->r[4]=0u+0x00000004u; // 801BE4F8
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE4FC
  c->r[0]=0u+0x00000011u; // 801BE500
  c->r[11]=rotl(c->r[26],24)&0x000000FFu; // 801BE504
  c->r[10]=rotl(c->r[26],16)&0x000000FFu; // 801BE508
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE50C
  c->r[9]=rotl(c->r[26],8)&0x000000FFu; // 801BE510
  c->r[8]=rotl(c->r[27],24)&0x000000FFu; // 801BE514
  c->r[7]=rotl(c->r[27],16)&0x000000FFu; // 801BE518
  W8(c->r[3]+0x00000009u,c->r[4]); // 801BE51C
  c->r[5]=sraw(c,c->r[28],8); // 801BE520
  c->r[6]=rotl(c->r[27],8)&0x000000FFu; // 801BE524
  c->r[4]=sraw(c,c->r[29],8); // 801BE528
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BE52C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE530
  W8(c->r[3]+0x0000000Bu,c->r[25]); // 801BE534
  W8(c->r[3]+0x0000000Cu,c->r[12]); // 801BE538
  W8(c->r[3]+0x0000000Du,c->r[26]); // 801BE53C
  W8(c->r[3]+0x0000000Eu,c->r[11]); // 801BE540
  W8(c->r[3]+0x0000000Fu,c->r[10]); // 801BE544
  W8(c->r[3]+0x00000010u,c->r[9]); // 801BE548
  W8(c->r[3]+0x00000011u,c->r[27]); // 801BE54C
  W8(c->r[3]+0x00000012u,c->r[8]); // 801BE550
  W8(c->r[3]+0x00000013u,c->r[7]); // 801BE554
  W8(c->r[3]+0x00000014u,c->r[6]); // 801BE558
  W8(c->r[3]+0x00000015u,c->r[28]); // 801BE55C
  W8(c->r[3]+0x00000016u,c->r[5]); // 801BE560
  W8(c->r[3]+0x00000017u,c->r[29]); // 801BE564
  W8(c->r[3]+0x00000018u,c->r[4]); // 801BE568
  W8(c->r[3]+0x00000019u,c->r[30]); // 801BE56C
  W8(c->r[3]+0x0000001Au,c->r[31]); // 801BE570
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801BE574
  c->lr=0x801BE57Cu; f_801BB728(c); // 801BE578
  c->r[3]=0u+0x00000001u; // 801BE57C
L_801BE580:;
  c->r[11]=c->r[1]+0x00000030u; // 801BE580
  c->lr=0x801BE588u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BE584
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BE588
  c->lr=c->r[0]; // 801BE58C
  c->r[1]=c->r[1]+0x00000030u; // 801BE590
  return; // 801BE594
}

// btsnd_hcic_accept_esco_conn
void f_801BE598(Ctx* __restrict c) {
  trace_call(0x801BE598u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE598
  c->r[0]=c->lr; // 801BE59C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BE5A0
  c->r[11]=c->r[1]+0x00000030u; // 801BE5A4
  c->lr=0x801BE5ACu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BE5A8
  c->r[26]=0u+0x00000018u; // 801BE5AC
  c->r[12]=0u+0x00000000u; // 801BE5B0
  c->r[11]=0u+0x00000029u; // 801BE5B4
  c->r[0]=0u+0x00000004u; // 801BE5B8
  c->r[25]=0u+0x00000015u; // 801BE5BC
  W16(c->r[3]+0x00000002u,c->r[26]); // 801BE5C0
  c->r[26]=rotl(c->r[5],24)&0x000000FFu; // 801BE5C4
  c->r[27]=rotl(c->r[5],16)&0x000000FFu; // 801BE5C8
  W16(c->r[3]+0x00000004u,c->r[12]); // 801BE5CC
  c->r[28]=rotl(c->r[5],8)&0x000000FFu; // 801BE5D0
  c->r[29]=rotl(c->r[6],24)&0x000000FFu; // 801BE5D4
  c->r[30]=rotl(c->r[6],16)&0x000000FFu; // 801BE5D8
  W8(c->r[3]+0x00000008u,c->r[11]); // 801BE5DC
  c->r[31]=rotl(c->r[6],8)&0x000000FFu; // 801BE5E0
  c->r[12]=sraw(c,c->r[7],8); // 801BE5E4
  c->r[11]=rotl(c->r[8],24)&0x000000FFu; // 801BE5E8
  W8(c->r[3]+0x00000009u,c->r[0]); // 801BE5EC
  c->r[0]=rotl(c->r[10],24)&0x000000FFu; // 801BE5F0
  W8(c->r[3]+0x0000000Au,c->r[25]); // 801BE5F4
  c->r[25]=R8(c->r[4]+0x00000005u); // 801BE5F8
  W8(c->r[3]+0x0000000Bu,c->r[25]); // 801BE5FC
  c->r[25]=R8(c->r[4]+0x00000004u); // 801BE600
  W8(c->r[3]+0x0000000Cu,c->r[25]); // 801BE604
  c->r[25]=R8(c->r[4]+0x00000003u); // 801BE608
  W8(c->r[3]+0x0000000Du,c->r[25]); // 801BE60C
  c->r[25]=R8(c->r[4]+0x00000002u); // 801BE610
  W8(c->r[3]+0x0000000Eu,c->r[25]); // 801BE614
  c->r[25]=R8(c->r[4]+0x00000001u); // 801BE618
  W8(c->r[3]+0x0000000Fu,c->r[25]); // 801BE61C
  c->r[4]=R8(c->r[4]+0x00000000u); // 801BE620
  W8(c->r[3]+0x00000010u,c->r[4]); // 801BE624
  W8(c->r[3]+0x00000011u,c->r[5]); // 801BE628
  W8(c->r[3]+0x00000012u,c->r[26]); // 801BE62C
  W8(c->r[3]+0x00000013u,c->r[27]); // 801BE630
  W8(c->r[3]+0x00000014u,c->r[28]); // 801BE634
  W8(c->r[3]+0x00000015u,c->r[6]); // 801BE638
  W8(c->r[3]+0x00000016u,c->r[29]); // 801BE63C
  W8(c->r[3]+0x00000017u,c->r[30]); // 801BE640
  W8(c->r[3]+0x00000018u,c->r[31]); // 801BE644
  W8(c->r[3]+0x00000019u,c->r[7]); // 801BE648
  W8(c->r[3]+0x0000001Au,c->r[12]); // 801BE64C
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 801BE650
  W8(c->r[3]+0x0000001Cu,c->r[11]); // 801BE654
  W8(c->r[3]+0x0000001Du,c->r[9]); // 801BE658
  W8(c->r[3]+0x0000001Eu,c->r[10]); // 801BE65C
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 801BE660
  c->lr=0x801BE668u; f_801BB728(c); // 801BE664
  c->r[11]=c->r[1]+0x00000030u; // 801BE668
  c->lr=0x801BE670u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BE66C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BE670
  c->lr=c->r[0]; // 801BE674
  c->r[1]=c->r[1]+0x00000030u; // 801BE678
  return; // 801BE67C
}

// btsnd_hcic_reject_esco_conn
void f_801BE680(Ctx* __restrict c) {
  trace_call(0x801BE680u);
  c->r[9]=0u+0x0000000Au; // 801BE680
  c->r[8]=0u+0x00000000u; // 801BE684
  c->r[7]=0u+0x0000002Au; // 801BE688
  c->r[6]=0u+0x00000004u; // 801BE68C
  c->r[0]=0u+0x00000007u; // 801BE690
  W16(c->r[3]+0x00000002u,c->r[9]); // 801BE694
  W16(c->r[3]+0x00000004u,c->r[8]); // 801BE698
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BE69C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BE6A0
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BE6A4
  c->r[0]=R8(c->r[4]+0x00000005u); // 801BE6A8
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BE6AC
  c->r[0]=R8(c->r[4]+0x00000004u); // 801BE6B0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE6B4
  c->r[0]=R8(c->r[4]+0x00000003u); // 801BE6B8
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BE6BC
  c->r[0]=R8(c->r[4]+0x00000002u); // 801BE6C0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BE6C4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BE6C8
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BE6CC
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BE6D0
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BE6D4
  W8(c->r[3]+0x00000011u,c->r[5]); // 801BE6D8
  f_801BB728(c); return; // 801BE6DC
}

// btsnd_hcic_hold_mode
void f_801BE6E0(Ctx* __restrict c) {
  trace_call(0x801BE6E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE6E0
  c->r[0]=c->lr; // 801BE6E4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE6E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE6EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BE6F0
  c->r[31]=c->r[6]|c->r[6]; // 801BE6F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BE6F8
  c->r[30]=c->r[5]|c->r[5]; // 801BE6FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BE700
  c->r[29]=c->r[4]|c->r[4]; // 801BE704
  if (!crb(c,2)) { goto L_801BE724; } // 801BE708
  c->r[3]=0u+0x00000002u; // 801BE70C
  c->lr=0x801BE714u; f_801A7C10(c); // 801BE710
  cmps(c,0,(int32_t)c->r[3],0); // 801BE714
  if (!crb(c,2)) { goto L_801BE724; } // 801BE718
  c->r[3]=0u+0x00000000u; // 801BE71C
  goto L_801BE778; // 801BE720
L_801BE724:;
  c->r[0]=0u+0x00000009u; // 801BE724
  c->r[5]=sraw(c,c->r[29],8); // 801BE728
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BE72C
  c->r[0]=0u+0x00000000u; // 801BE730
  c->r[8]=0u+0x00000001u; // 801BE734
  c->r[7]=0u+0x00000008u; // 801BE738
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE73C
  c->r[6]=0u+0x00000006u; // 801BE740
  c->r[4]=sraw(c,c->r[30],8); // 801BE744
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE748
  W8(c->r[3]+0x00000008u,c->r[8]); // 801BE74C
  W8(c->r[3]+0x00000009u,c->r[7]); // 801BE750
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801BE754
  W8(c->r[3]+0x0000000Bu,c->r[29]); // 801BE758
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801BE75C
  W8(c->r[3]+0x0000000Du,c->r[30]); // 801BE760
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801BE764
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801BE768
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BE76C
  c->lr=0x801BE774u; f_801BB728(c); // 801BE770
  c->r[3]=0u+0x00000001u; // 801BE774
L_801BE778:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE778
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BE77C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BE780
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BE784
  c->lr=c->r[0]; // 801BE788
  c->r[1]=c->r[1]+0x00000020u; // 801BE78C
  return; // 801BE790
}

// btsnd_hcic_sniff_mode
void f_801BE794(Ctx* __restrict c) {
  trace_call(0x801BE794u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE794
  c->r[0]=c->lr; // 801BE798
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE79C
  c->r[11]=c->r[1]+0x00000020u; // 801BE7A0
  c->lr=0x801BE7A8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BE7A4
  cmps(c,0,(int32_t)c->r[3],0); // 801BE7A8
  c->r[27]=c->r[4]|c->r[4]; // 801BE7AC
  c->r[28]=c->r[5]|c->r[5]; // 801BE7B0
  c->r[29]=c->r[6]|c->r[6]; // 801BE7B4
  c->r[30]=c->r[7]|c->r[7]; // 801BE7B8
  c->r[31]=c->r[8]|c->r[8]; // 801BE7BC
  if (!crb(c,2)) { goto L_801BE7DC; } // 801BE7C0
  c->r[3]=0u+0x00000002u; // 801BE7C4
  c->lr=0x801BE7CCu; f_801A7C10(c); // 801BE7C8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE7CC
  if (!crb(c,2)) { goto L_801BE7DC; } // 801BE7D0
  c->r[3]=0u+0x00000000u; // 801BE7D4
  goto L_801BE848; // 801BE7D8
L_801BE7DC:;
  c->r[0]=0u+0x0000000Du; // 801BE7DC
  c->r[7]=sraw(c,c->r[27],8); // 801BE7E0
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BE7E4
  c->r[4]=0u+0x00000000u; // 801BE7E8
  c->r[6]=sraw(c,c->r[28],8); // 801BE7EC
  c->r[0]=0u+0x00000003u; // 801BE7F0
  W16(c->r[3]+0x00000004u,c->r[4]); // 801BE7F4
  c->r[5]=sraw(c,c->r[29],8); // 801BE7F8
  c->r[9]=0u+0x00000008u; // 801BE7FC
  c->r[8]=0u+0x0000000Au; // 801BE800
  W8(c->r[3]+0x00000008u,c->r[0]); // 801BE804
  c->r[4]=sraw(c,c->r[30],8); // 801BE808
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE80C
  W8(c->r[3]+0x00000009u,c->r[9]); // 801BE810
  W8(c->r[3]+0x0000000Au,c->r[8]); // 801BE814
  W8(c->r[3]+0x0000000Bu,c->r[27]); // 801BE818
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 801BE81C
  W8(c->r[3]+0x0000000Du,c->r[28]); // 801BE820
  W8(c->r[3]+0x0000000Eu,c->r[6]); // 801BE824
  W8(c->r[3]+0x0000000Fu,c->r[29]); // 801BE828
  W8(c->r[3]+0x00000010u,c->r[5]); // 801BE82C
  W8(c->r[3]+0x00000011u,c->r[30]); // 801BE830
  W8(c->r[3]+0x00000012u,c->r[4]); // 801BE834
  W8(c->r[3]+0x00000013u,c->r[31]); // 801BE838
  W8(c->r[3]+0x00000014u,c->r[0]); // 801BE83C
  c->lr=0x801BE844u; f_801BB728(c); // 801BE840
  c->r[3]=0u+0x00000001u; // 801BE844
L_801BE848:;
  c->r[11]=c->r[1]+0x00000020u; // 801BE848
  c->lr=0x801BE850u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BE84C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE850
  c->lr=c->r[0]; // 801BE854
  c->r[1]=c->r[1]+0x00000020u; // 801BE858
  return; // 801BE85C
}

// btsnd_hcic_exit_sniff_mode
void f_801BE860(Ctx* __restrict c) {
  trace_call(0x801BE860u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE860
  c->r[0]=c->lr; // 801BE864
  cmps(c,0,(int32_t)c->r[3],0); // 801BE868
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE86C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE870
  c->r[31]=c->r[4]|c->r[4]; // 801BE874
  if (!crb(c,2)) { goto L_801BE894; } // 801BE878
  c->r[3]=0u+0x00000002u; // 801BE87C
  c->lr=0x801BE884u; f_801A7C10(c); // 801BE880
  cmps(c,0,(int32_t)c->r[3],0); // 801BE884
  if (!crb(c,2)) { goto L_801BE894; } // 801BE888
  c->r[3]=0u+0x00000000u; // 801BE88C
  goto L_801BE8D0; // 801BE890
L_801BE894:;
  c->r[4]=0u+0x00000005u; // 801BE894
  c->r[0]=0u+0x00000000u; // 801BE898
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE89C
  c->r[6]=0u+0x00000004u; // 801BE8A0
  c->r[5]=0u+0x00000008u; // 801BE8A4
  c->r[4]=0u+0x00000002u; // 801BE8A8
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE8AC
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE8B0
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE8B4
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE8B8
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BE8BC
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801BE8C0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE8C4
  c->lr=0x801BE8CCu; f_801BB728(c); // 801BE8C8
  c->r[3]=0u+0x00000001u; // 801BE8CC
L_801BE8D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BE8D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BE8D4
  c->lr=c->r[0]; // 801BE8D8
  c->r[1]=c->r[1]+0x00000010u; // 801BE8DC
  return; // 801BE8E0
}

// btsnd_hcic_park_mode
void f_801BE8E4(Ctx* __restrict c) {
  trace_call(0x801BE8E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE8E4
  c->r[0]=c->lr; // 801BE8E8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE8EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801BE8F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801BE8F4
  c->r[31]=c->r[6]|c->r[6]; // 801BE8F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801BE8FC
  c->r[30]=c->r[5]|c->r[5]; // 801BE900
  W32(c->r[1]+0x00000014u,c->r[29]); // 801BE904
  c->r[29]=c->r[4]|c->r[4]; // 801BE908
  if (!crb(c,2)) { goto L_801BE928; } // 801BE90C
  c->r[3]=0u+0x00000002u; // 801BE910
  c->lr=0x801BE918u; f_801A7C10(c); // 801BE914
  cmps(c,0,(int32_t)c->r[3],0); // 801BE918
  if (!crb(c,2)) { goto L_801BE928; } // 801BE91C
  c->r[3]=0u+0x00000000u; // 801BE920
  goto L_801BE97C; // 801BE924
L_801BE928:;
  c->r[0]=0u+0x00000009u; // 801BE928
  c->r[5]=sraw(c,c->r[29],8); // 801BE92C
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BE930
  c->r[0]=0u+0x00000000u; // 801BE934
  c->r[8]=0u+0x00000005u; // 801BE938
  c->r[7]=0u+0x00000008u; // 801BE93C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE940
  c->r[6]=0u+0x00000006u; // 801BE944
  c->r[4]=sraw(c,c->r[30],8); // 801BE948
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE94C
  W8(c->r[3]+0x00000008u,c->r[8]); // 801BE950
  W8(c->r[3]+0x00000009u,c->r[7]); // 801BE954
  W8(c->r[3]+0x0000000Au,c->r[6]); // 801BE958
  W8(c->r[3]+0x0000000Bu,c->r[29]); // 801BE95C
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801BE960
  W8(c->r[3]+0x0000000Du,c->r[30]); // 801BE964
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 801BE968
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 801BE96C
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BE970
  c->lr=0x801BE978u; f_801BB728(c); // 801BE974
  c->r[3]=0u+0x00000001u; // 801BE978
L_801BE97C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801BE97C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801BE980
  c->r[30]=R32(c->r[1]+0x00000018u); // 801BE984
  c->r[29]=R32(c->r[1]+0x00000014u); // 801BE988
  c->lr=c->r[0]; // 801BE98C
  c->r[1]=c->r[1]+0x00000020u; // 801BE990
  return; // 801BE994
}

// btsnd_hcic_exit_park_mode
void f_801BE998(Ctx* __restrict c) {
  trace_call(0x801BE998u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BE998
  c->r[0]=c->lr; // 801BE99C
  cmps(c,0,(int32_t)c->r[3],0); // 801BE9A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BE9A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BE9A8
  c->r[31]=c->r[4]|c->r[4]; // 801BE9AC
  if (!crb(c,2)) { goto L_801BE9CC; } // 801BE9B0
  c->r[3]=0u+0x00000002u; // 801BE9B4
  c->lr=0x801BE9BCu; f_801A7C10(c); // 801BE9B8
  cmps(c,0,(int32_t)c->r[3],0); // 801BE9BC
  if (!crb(c,2)) { goto L_801BE9CC; } // 801BE9C0
  c->r[3]=0u+0x00000000u; // 801BE9C4
  goto L_801BEA08; // 801BE9C8
L_801BE9CC:;
  c->r[4]=0u+0x00000005u; // 801BE9CC
  c->r[0]=0u+0x00000000u; // 801BE9D0
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BE9D4
  c->r[6]=0u+0x00000006u; // 801BE9D8
  c->r[5]=0u+0x00000008u; // 801BE9DC
  c->r[4]=0u+0x00000002u; // 801BE9E0
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BE9E4
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BE9E8
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BE9EC
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BE9F0
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BE9F4
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801BE9F8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BE9FC
  c->lr=0x801BEA04u; f_801BB728(c); // 801BEA00
  c->r[3]=0u+0x00000001u; // 801BEA04
L_801BEA08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEA0C
  c->lr=c->r[0]; // 801BEA10
  c->r[1]=c->r[1]+0x00000010u; // 801BEA14
  return; // 801BEA18
}

// btsnd_hcic_switch_role
void f_801BEA1C(Ctx* __restrict c) {
  trace_call(0x801BEA1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEA1C
  c->r[0]=c->lr; // 801BEA20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEA24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEA28
  c->r[31]=c->r[4]|c->r[4]; // 801BEA2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BEA30
  c->r[30]=c->r[3]|c->r[3]; // 801BEA34
  c->r[3]=0u+0x00000002u; // 801BEA38
  c->lr=0x801BEA40u; f_801A7C10(c); // 801BEA3C
  cmps(c,0,(int32_t)c->r[3],0); // 801BEA40
  if (!crb(c,2)) { goto L_801BEA50; } // 801BEA44
  c->r[3]=0u+0x00000000u; // 801BEA48
  goto L_801BEAB4; // 801BEA4C
L_801BEA50:;
  c->r[0]=0u+0x0000000Au; // 801BEA50
  c->r[6]=0u+0x00000000u; // 801BEA54
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BEA58
  c->r[5]=0u+0x0000000Bu; // 801BEA5C
  c->r[4]=0u+0x00000008u; // 801BEA60
  c->r[0]=0u+0x00000007u; // 801BEA64
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BEA68
  W8(c->r[3]+0x00000008u,c->r[5]); // 801BEA6C
  W8(c->r[3]+0x00000009u,c->r[4]); // 801BEA70
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BEA74
  c->r[0]=R8(c->r[30]+0x00000005u); // 801BEA78
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BEA7C
  c->r[0]=R8(c->r[30]+0x00000004u); // 801BEA80
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BEA84
  c->r[0]=R8(c->r[30]+0x00000003u); // 801BEA88
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BEA8C
  c->r[0]=R8(c->r[30]+0x00000002u); // 801BEA90
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BEA94
  c->r[0]=R8(c->r[30]+0x00000001u); // 801BEA98
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BEA9C
  c->r[0]=R8(c->r[30]+0x00000000u); // 801BEAA0
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BEAA4
  W8(c->r[3]+0x00000011u,c->r[31]); // 801BEAA8
  c->lr=0x801BEAB0u; f_801BB728(c); // 801BEAAC
  c->r[3]=0u+0x00000001u; // 801BEAB0
L_801BEAB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEAB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEAB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEABC
  c->lr=c->r[0]; // 801BEAC0
  c->r[1]=c->r[1]+0x00000010u; // 801BEAC4
  return; // 801BEAC8
}

// btsnd_hcic_write_policy_set
void f_801BEACC(Ctx* __restrict c) {
  trace_call(0x801BEACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEACC
  c->r[0]=c->lr; // 801BEAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEAD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BEAD8
  c->r[31]=c->r[4]|c->r[4]; // 801BEADC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BEAE0
  c->r[30]=c->r[3]|c->r[3]; // 801BEAE4
  c->r[3]=0u+0x00000002u; // 801BEAE8
  c->lr=0x801BEAF0u; f_801A7C10(c); // 801BEAEC
  cmps(c,0,(int32_t)c->r[3],0); // 801BEAF0
  if (!crb(c,2)) { goto L_801BEB00; } // 801BEAF4
  c->r[3]=0u+0x00000000u; // 801BEAF8
  goto L_801BEB48; // 801BEAFC
L_801BEB00:;
  c->r[4]=0u+0x00000007u; // 801BEB00
  c->r[0]=0u+0x00000000u; // 801BEB04
  W16(c->r[3]+0x00000002u,c->r[4]); // 801BEB08
  c->r[7]=0u+0x0000000Du; // 801BEB0C
  c->r[6]=0u+0x00000008u; // 801BEB10
  c->r[5]=0u+0x00000004u; // 801BEB14
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BEB18
  c->r[4]=sraw(c,c->r[30],8); // 801BEB1C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 801BEB20
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BEB24
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BEB28
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BEB2C
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 801BEB30
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 801BEB34
  W8(c->r[3]+0x0000000Du,c->r[31]); // 801BEB38
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BEB3C
  c->lr=0x801BEB44u; f_801BB728(c); // 801BEB40
  c->r[3]=0u+0x00000001u; // 801BEB44
L_801BEB48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEB48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEB4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BEB50
  c->lr=c->r[0]; // 801BEB54
  c->r[1]=c->r[1]+0x00000010u; // 801BEB58
  return; // 801BEB5C
}

// btsnd_hcic_reset
void f_801BEB60(Ctx* __restrict c) {
  trace_call(0x801BEB60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEB60
  c->r[0]=c->lr; // 801BEB64
  c->r[3]=0u+0x00000002u; // 801BEB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BEB6C
  c->lr=0x801BEB74u; f_801A7C10(c); // 801BEB70
  cmps(c,0,(int32_t)c->r[3],0); // 801BEB74
  if (!crb(c,2)) { goto L_801BEB84; } // 801BEB78
  c->r[3]=0u+0x00000000u; // 801BEB7C
  goto L_801BEBAC; // 801BEB80
L_801BEB84:;
  c->r[5]=0u+0x00000003u; // 801BEB84
  c->r[4]=0u+0x00000000u; // 801BEB88
  W16(c->r[3]+0x00000002u,c->r[5]); // 801BEB8C
  c->r[0]=0u+0x0000000Cu; // 801BEB90
  W16(c->r[3]+0x00000004u,c->r[4]); // 801BEB94
  W8(c->r[3]+0x00000008u,c->r[5]); // 801BEB98
  W8(c->r[3]+0x00000009u,c->r[0]); // 801BEB9C
  W8(c->r[3]+0x0000000Au,c->r[4]); // 801BEBA0
  c->lr=0x801BEBA8u; f_801BB728(c); // 801BEBA4
  c->r[3]=0u+0x00000001u; // 801BEBA8
L_801BEBAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEBAC
  c->lr=c->r[0]; // 801BEBB0
  c->r[1]=c->r[1]+0x00000010u; // 801BEBB4
  return; // 801BEBB8
}

// btsnd_hcic_set_event_filter
void f_801BEBBC(Ctx* __restrict c) {
  trace_call(0x801BEBBCu);
  c->r[0]=0u+0x00000000u; // 801BEBBC
  c->r[9]=0u+0x00000005u; // 801BEBC0
  c->r[8]=0u+0x0000000Cu; // 801BEBC4
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BEBC8
  cmps(c,0,(int32_t)c->r[4],0); // 801BEBCC
  c->r[0]=c->r[6]|c->r[6]; // 801BEBD0
  W8(c->r[3]+0x00000008u,c->r[9]); // 801BEBD4
  W8(c->r[3]+0x00000009u,c->r[8]); // 801BEBD8
  if (crb(c,2)) { goto L_801BED60; } // 801BEBDC
  c->r[8]=c->r[7]+0x00000005u; // 801BEBE0
  c->r[9]=c->r[7]+0x00000002u; // 801BEBE4
  W16(c->r[3]+0x00000002u,c->r[8]); // 801BEBE8
  cmpu(c,0,c->r[5],0x00000001u); // 801BEBEC
  c->r[8]=c->r[3]+0x0000000Du; // 801BEBF0
  W8(c->r[3]+0x0000000Au,c->r[9]); // 801BEBF4
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801BEBF8
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 801BEBFC
  if (!crb(c,2)) { goto L_801BEC48; } // 801BEC00
  c->r[4]=R8(c->r[6]+0x00000002u); // 801BEC04
  c->r[0]=c->r[7]+0xFFFFFFFAu; // 801BEC08
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801BEC0C
  W8(c->r[8]+0x00000000u,c->r[4]); // 801BEC10
  c->r[0]=c->r[6]+0x00000006u; // 801BEC14
  c->r[4]=R8(c->r[6]+0x00000001u); // 801BEC18
  W8(c->r[8]+0x00000001u,c->r[4]); // 801BEC1C
  c->r[4]=R8(c->r[6]+0x00000000u); // 801BEC20
  W8(c->r[8]+0x00000002u,c->r[4]); // 801BEC24
  c->r[4]=R8(c->r[6]+0x00000005u); // 801BEC28
  W8(c->r[8]+0x00000003u,c->r[4]); // 801BEC2C
  c->r[4]=R8(c->r[6]+0x00000004u); // 801BEC30
  W8(c->r[8]+0x00000004u,c->r[4]); // 801BEC34
  c->r[4]=R8(c->r[6]+0x00000003u); // 801BEC38
  W8(c->r[8]+0x00000005u,c->r[4]); // 801BEC3C
  c->r[8]=c->r[8]+0x00000006u; // 801BEC40
  goto L_801BEC90; // 801BEC44
L_801BEC48:;
  cmpu(c,0,c->r[5],0x00000002u); // 801BEC48
  if (!crb(c,2)) { goto L_801BEC90; } // 801BEC4C
  c->r[4]=R8(c->r[6]+0x00000005u); // 801BEC50
  c->r[0]=c->r[7]+0xFFFFFFFAu; // 801BEC54
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 801BEC58
  W8(c->r[8]+0x00000000u,c->r[4]); // 801BEC5C
  c->r[0]=c->r[6]+0x00000006u; // 801BEC60
  c->r[4]=R8(c->r[6]+0x00000004u); // 801BEC64
  W8(c->r[8]+0x00000001u,c->r[4]); // 801BEC68
  c->r[4]=R8(c->r[6]+0x00000003u); // 801BEC6C
  W8(c->r[8]+0x00000002u,c->r[4]); // 801BEC70
  c->r[4]=R8(c->r[6]+0x00000002u); // 801BEC74
  W8(c->r[8]+0x00000003u,c->r[4]); // 801BEC78
  c->r[4]=R8(c->r[6]+0x00000001u); // 801BEC7C
  W8(c->r[8]+0x00000004u,c->r[4]); // 801BEC80
  c->r[4]=R8(c->r[6]+0x00000000u); // 801BEC84
  W8(c->r[8]+0x00000005u,c->r[4]); // 801BEC88
  c->r[8]=c->r[8]+0x00000006u; // 801BEC8C
L_801BEC90:;
  cmps(c,1,(int32_t)c->r[7],0); // 801BEC90
  if (crb(c,6)) { goto L_801BED74; } // 801BEC94
  c->r[9]=0u+0x00000000u; // 801BEC98
  if (!crb(c,5)) { goto L_801BED74; } // 801BEC9C
  cmps(c,0,(int32_t)c->r[7],8); // 801BECA0
  c->r[5]=c->r[7]+0xFFFFFFF8u; // 801BECA4
  if (!crb(c,1)) { goto L_801BED34; } // 801BECA8
  c->r[6]=0u+0x00000000u; // 801BECAC
  if (crb(c,4)) { goto L_801BECC8; } // 801BECB0
  c->r[4]=0u+0x80000000u; // 801BECB4
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 801BECB8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801BECBC
  if (crb(c,1)) { goto L_801BECC8; } // 801BECC0
  c->r[6]=0u+0x00000001u; // 801BECC4
L_801BECC8:;
  cmps(c,0,(int32_t)c->r[6],0); // 801BECC8
  if (crb(c,2)) { goto L_801BED34; } // 801BECCC
  c->r[4]=c->r[5]+0x00000007u; // 801BECD0
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 801BECD4
  c->ctr=c->r[4]; // 801BECD8
  cmps(c,0,(int32_t)c->r[5],0); // 801BECDC
  if (!crb(c,1)) { goto L_801BED34; } // 801BECE0
L_801BECE4:;
  c->r[4]=R8(c->r[9]+c->r[0]); // 801BECE4
  c->r[5]=c->r[0]+c->r[9]; // 801BECE8
  c->r[9]=c->r[9]+0x00000008u; // 801BECEC
  W8(c->r[8]+0x00000000u,c->r[4]); // 801BECF0
  c->r[4]=R8(c->r[5]+0x00000001u); // 801BECF4
  W8(c->r[8]+0x00000001u,c->r[4]); // 801BECF8
  c->r[4]=R8(c->r[5]+0x00000002u); // 801BECFC
  W8(c->r[8]+0x00000002u,c->r[4]); // 801BED00
  c->r[4]=R8(c->r[5]+0x00000003u); // 801BED04
  W8(c->r[8]+0x00000003u,c->r[4]); // 801BED08
  c->r[4]=R8(c->r[5]+0x00000004u); // 801BED0C
  W8(c->r[8]+0x00000004u,c->r[4]); // 801BED10
  c->r[4]=R8(c->r[5]+0x00000005u); // 801BED14
  W8(c->r[8]+0x00000005u,c->r[4]); // 801BED18
  c->r[4]=R8(c->r[5]+0x00000006u); // 801BED1C
  W8(c->r[8]+0x00000006u,c->r[4]); // 801BED20
  c->r[4]=R8(c->r[5]+0x00000007u); // 801BED24
  W8(c->r[8]+0x00000007u,c->r[4]); // 801BED28
  c->r[8]=c->r[8]+0x00000008u; // 801BED2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BECE4; } // 801BED30
L_801BED34:;
  c->r[4]=c->r[7]-c->r[9]; // 801BED34
  c->r[5]=c->r[0]+c->r[9]; // 801BED38
  c->ctr=c->r[4]; // 801BED3C
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 801BED40
  if (!crb(c,0)) { goto L_801BED74; } // 801BED44
L_801BED48:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801BED48
  c->r[5]=c->r[5]+0x00000001u; // 801BED4C
  W8(c->r[8]+0x00000000u,c->r[0]); // 801BED50
  c->r[8]=c->r[8]+0x00000001u; // 801BED54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BED48; } // 801BED58
  goto L_801BED74; // 801BED5C
L_801BED60:;
  c->r[5]=0u+0x00000004u; // 801BED60
  c->r[0]=0u+0x00000001u; // 801BED64
  W16(c->r[3]+0x00000002u,c->r[5]); // 801BED68
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BED6C
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801BED70
L_801BED74:;
  f_801BB728(c); return; // 801BED74
}

// btsnd_hcic_write_pin_type
void f_801BED78(Ctx* __restrict c) {
  trace_call(0x801BED78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BED78
  c->r[0]=c->lr; // 801BED7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BED80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BED84
  c->r[31]=c->r[3]|c->r[3]; // 801BED88
  c->r[3]=0u+0x00000002u; // 801BED8C
  c->lr=0x801BED94u; f_801A7C10(c); // 801BED90
  cmps(c,0,(int32_t)c->r[3],0); // 801BED94
  if (!crb(c,2)) { goto L_801BEDA4; } // 801BED98
  c->r[3]=0u+0x00000000u; // 801BED9C
  goto L_801BEDD8; // 801BEDA0
L_801BEDA4:;
  c->r[0]=0u+0x00000004u; // 801BEDA4
  c->r[6]=0u+0x00000000u; // 801BEDA8
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BEDAC
  c->r[5]=0u+0x0000000Au; // 801BEDB0
  c->r[4]=0u+0x0000000Cu; // 801BEDB4
  c->r[0]=0u+0x00000001u; // 801BEDB8
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BEDBC
  W8(c->r[3]+0x00000008u,c->r[5]); // 801BEDC0
  W8(c->r[3]+0x00000009u,c->r[4]); // 801BEDC4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BEDC8
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 801BEDCC
  c->lr=0x801BEDD4u; f_801BB728(c); // 801BEDD0
  c->r[3]=0u+0x00000001u; // 801BEDD4
L_801BEDD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BEDD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BEDDC
  c->lr=c->r[0]; // 801BEDE0
  c->r[1]=c->r[1]+0x00000010u; // 801BEDE4
  return; // 801BEDE8
}

// btsnd_hcic_read_stored_key
void f_801BEDEC(Ctx* __restrict c) {
  trace_call(0x801BEDECu);
  c->r[9]=0u+0x0000000Au; // 801BEDEC
  c->r[8]=0u+0x00000000u; // 801BEDF0
  c->r[7]=0u+0x0000000Du; // 801BEDF4
  c->r[6]=0u+0x0000000Cu; // 801BEDF8
  c->r[0]=0u+0x00000007u; // 801BEDFC
  W16(c->r[3]+0x00000002u,c->r[9]); // 801BEE00
  W16(c->r[3]+0x00000004u,c->r[8]); // 801BEE04
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BEE08
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BEE0C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BEE10
  c->r[0]=R8(c->r[4]+0x00000005u); // 801BEE14
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BEE18
  c->r[0]=R8(c->r[4]+0x00000004u); // 801BEE1C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BEE20
  c->r[0]=R8(c->r[4]+0x00000003u); // 801BEE24
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BEE28
  c->r[0]=R8(c->r[4]+0x00000002u); // 801BEE2C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BEE30
  c->r[0]=R8(c->r[4]+0x00000001u); // 801BEE34
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BEE38
  c->r[0]=R8(c->r[4]+0x00000000u); // 801BEE3C
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BEE40
  W8(c->r[3]+0x00000011u,c->r[5]); // 801BEE44
  f_801BB728(c); return; // 801BEE48
}

// btsnd_hcic_write_stored_key
void f_801BEE4C(Ctx* __restrict c) {
  trace_call(0x801BEE4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BEE4C
  c->r[0]=c->lr; // 801BEE50
  W32(c->r[1]+0x00000034u,c->r[0]); // 801BEE54
  c->r[11]=c->r[1]+0x00000030u; // 801BEE58
  c->lr=0x801BEE60u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801BEE5C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)22); // 801BEE60
  c->r[0]=0u+0x00000000u; // 801BEE64
  c->r[9]=0u+0x00000011u; // 801BEE68
  W16(c->r[3]+0x00000004u,c->r[0]); // 801BEE6C
  c->r[8]=0u+0x0000000Cu; // 801BEE70
  c->r[10]=c->r[7]+0x00000004u; // 801BEE74
  c->r[7]=rotl(c->r[10],0)&0x0000FFFFu; // 801BEE78
  cmpu(c,0,c->r[4],0x0000000Bu); // 801BEE7C
  c->r[0]=c->r[7]+0xFFFFFFFDu; // 801BEE80
  W16(c->r[3]+0x00000002u,c->r[10]); // 801BEE84
  W8(c->r[3]+0x00000008u,c->r[9]); // 801BEE88
  W8(c->r[3]+0x00000009u,c->r[8]); // 801BEE8C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BEE90
  if (!crb(c,1)) { goto L_801BEE9C; } // 801BEE94
  c->r[4]=0u+0x0000000Bu; // 801BEE98
L_801BEE9C:;
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801BEE9C
  c->r[7]=c->r[3]+0x0000000Cu; // 801BEEA0
  c->ctr=c->r[4]; // 801BEEA4
  cmps(c,0,(int32_t)c->r[4],0); // 801BEEA8
  if (!crb(c,1)) { goto L_801BEFF0; } // 801BEEAC
L_801BEEB0:;
  c->r[0]=R8(c->r[5]+0x00000005u); // 801BEEB0
  c->r[22]=0u+0x00000000u; // 801BEEB4
  c->r[23]=addc(c,~c->r[22],0x0000000Fu,1); // 801BEEB8
  c->r[24]=0u+0x00000001u; // 801BEEBC
  W8(c->r[7]+0x00000000u,c->r[0]); // 801BEEC0
  c->r[25]=addc(c,~c->r[24],0x0000000Fu,1); // 801BEEC4
  c->r[26]=0u+0x00000002u; // 801BEEC8
  c->r[28]=0u+0x00000003u; // 801BEECC
  c->r[0]=R8(c->r[5]+0x00000004u); // 801BEED0
  c->r[27]=addc(c,~c->r[26],0x0000000Fu,1); // 801BEED4
  c->r[29]=addc(c,~c->r[28],0x0000000Fu,1); // 801BEED8
  c->r[30]=0u+0x00000004u; // 801BEEDC
  W8(c->r[7]+0x00000001u,c->r[0]); // 801BEEE0
  c->r[31]=addc(c,~c->r[30],0x0000000Fu,1); // 801BEEE4
  c->r[12]=0u+0x00000005u; // 801BEEE8
  c->r[10]=0u+0x00000006u; // 801BEEEC
  c->r[0]=R8(c->r[5]+0x00000003u); // 801BEEF0
  c->r[11]=addc(c,~c->r[12],0x0000000Fu,1); // 801BEEF4
  c->r[9]=addc(c,~c->r[10],0x0000000Fu,1); // 801BEEF8
  c->r[8]=0u+0x00000007u; // 801BEEFC
  W8(c->r[7]+0x00000002u,c->r[0]); // 801BEF00
  c->r[4]=addc(c,~c->r[8],0x0000000Fu,1); // 801BEF04
  c->r[22]=0u+0x00000008u; // 801BEF08
  c->r[24]=0u+0x00000009u; // 801BEF0C
  c->r[0]=R8(c->r[5]+0x00000002u); // 801BEF10
  c->r[26]=0u+0x0000000Au; // 801BEF14
  c->r[28]=0u+0x0000000Bu; // 801BEF18
  c->r[30]=0u+0x0000000Cu; // 801BEF1C
  W8(c->r[7]+0x00000003u,c->r[0]); // 801BEF20
  c->r[12]=0u+0x0000000Du; // 801BEF24
  c->r[10]=0u+0x0000000Eu; // 801BEF28
  c->r[8]=0u+0x0000000Fu; // 801BEF2C
  c->r[0]=R8(c->r[5]+0x00000001u); // 801BEF30
  W8(c->r[7]+0x00000004u,c->r[0]); // 801BEF34
  c->r[0]=R8(c->r[5]+0x00000000u); // 801BEF38
  c->r[5]=c->r[5]+0x00000006u; // 801BEF3C
  W8(c->r[7]+0x00000005u,c->r[0]); // 801BEF40
  c->r[0]=R8(c->r[6]+c->r[23]); // 801BEF44
  c->r[23]=addc(c,~c->r[22],0x0000000Fu,1); // 801BEF48
  W8(c->r[7]+0x00000006u,c->r[0]); // 801BEF4C
  c->r[0]=R8(c->r[6]+c->r[25]); // 801BEF50
  c->r[25]=addc(c,~c->r[24],0x0000000Fu,1); // 801BEF54
  W8(c->r[7]+0x00000007u,c->r[0]); // 801BEF58
  c->r[0]=R8(c->r[6]+c->r[27]); // 801BEF5C
  c->r[27]=addc(c,~c->r[26],0x0000000Fu,1); // 801BEF60
  W8(c->r[7]+0x00000008u,c->r[0]); // 801BEF64
  c->r[0]=R8(c->r[6]+c->r[29]); // 801BEF68
  c->r[29]=addc(c,~c->r[28],0x0000000Fu,1); // 801BEF6C
  W8(c->r[7]+0x00000009u,c->r[0]); // 801BEF70
  c->r[0]=R8(c->r[6]+c->r[31]); // 801BEF74
  c->r[31]=addc(c,~c->r[30],0x0000000Fu,1); // 801BEF78
  W8(c->r[7]+0x0000000Au,c->r[0]); // 801BEF7C
  c->r[0]=R8(c->r[6]+c->r[11]); // 801BEF80
  c->r[11]=addc(c,~c->r[12],0x0000000Fu,1); // 801BEF84
  W8(c->r[7]+0x0000000Bu,c->r[0]); // 801BEF88
  c->r[0]=R8(c->r[6]+c->r[9]); // 801BEF8C
  c->r[9]=addc(c,~c->r[10],0x0000000Fu,1); // 801BEF90
  W8(c->r[7]+0x0000000Cu,c->r[0]); // 801BEF94
  c->r[0]=R8(c->r[6]+c->r[4]); // 801BEF98
  c->r[4]=addc(c,~c->r[8],0x0000000Fu,1); // 801BEF9C
  W8(c->r[7]+0x0000000Du,c->r[0]); // 801BEFA0
  c->r[0]=R8(c->r[6]+c->r[23]); // 801BEFA4
  W8(c->r[7]+0x0000000Eu,c->r[0]); // 801BEFA8
  c->r[0]=R8(c->r[6]+c->r[25]); // 801BEFAC
  W8(c->r[7]+0x0000000Fu,c->r[0]); // 801BEFB0
  c->r[0]=R8(c->r[6]+c->r[27]); // 801BEFB4
  W8(c->r[7]+0x00000010u,c->r[0]); // 801BEFB8
  c->r[0]=R8(c->r[6]+c->r[29]); // 801BEFBC
  W8(c->r[7]+0x00000011u,c->r[0]); // 801BEFC0
  c->r[0]=R8(c->r[6]+c->r[31]); // 801BEFC4
  W8(c->r[7]+0x00000012u,c->r[0]); // 801BEFC8
  c->r[0]=R8(c->r[6]+c->r[11]); // 801BEFCC
  W8(c->r[7]+0x00000013u,c->r[0]); // 801BEFD0
  c->r[0]=R8(c->r[6]+c->r[9]); // 801BEFD4
  W8(c->r[7]+0x00000014u,c->r[0]); // 801BEFD8
  c->r[0]=R8(c->r[6]+c->r[4]); // 801BEFDC
  c->r[6]=c->r[6]+0x00000010u; // 801BEFE0
  W8(c->r[7]+0x00000015u,c->r[0]); // 801BEFE4
  c->r[7]=c->r[7]+0x00000016u; // 801BEFE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BEEB0; } // 801BEFEC
L_801BEFF0:;
  c->lr=0x801BEFF4u; f_801BB728(c); // 801BEFF0
  c->r[11]=c->r[1]+0x00000030u; // 801BEFF4
  c->lr=0x801BEFFCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801BEFF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801BEFFC
  c->lr=c->r[0]; // 801BF000
  c->r[1]=c->r[1]+0x00000030u; // 801BF004
  return; // 801BF008
}

// btsnd_hcic_delete_stored_key
void f_801BF00C(Ctx* __restrict c) {
  trace_call(0x801BF00Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF00C
  c->r[0]=c->lr; // 801BF010
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF014
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF018
  c->r[31]=c->r[4]|c->r[4]; // 801BF01C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BF020
  c->r[30]=c->r[3]|c->r[3]; // 801BF024
  c->r[3]=0u+0x00000002u; // 801BF028
  c->lr=0x801BF030u; f_801A7C10(c); // 801BF02C
  cmps(c,0,(int32_t)c->r[3],0); // 801BF030
  if (!crb(c,2)) { goto L_801BF040; } // 801BF034
  c->r[3]=0u+0x00000000u; // 801BF038
  goto L_801BF0A4; // 801BF03C
L_801BF040:;
  c->r[0]=0u+0x0000000Au; // 801BF040
  c->r[6]=0u+0x00000000u; // 801BF044
  W16(c->r[3]+0x00000002u,c->r[0]); // 801BF048
  c->r[5]=0u+0x00000012u; // 801BF04C
  c->r[4]=0u+0x0000000Cu; // 801BF050
  c->r[0]=0u+0x00000007u; // 801BF054
  W16(c->r[3]+0x00000004u,c->r[6]); // 801BF058
  W8(c->r[3]+0x00000008u,c->r[5]); // 801BF05C
  W8(c->r[3]+0x00000009u,c->r[4]); // 801BF060
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BF064
  c->r[0]=R8(c->r[30]+0x00000005u); // 801BF068
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 801BF06C
  c->r[0]=R8(c->r[30]+0x00000004u); // 801BF070
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BF074
  c->r[0]=R8(c->r[30]+0x00000003u); // 801BF078
  W8(c->r[3]+0x0000000Du,c->r[0]); // 801BF07C
  c->r[0]=R8(c->r[30]+0x00000002u); // 801BF080
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 801BF084
  c->r[0]=R8(c->r[30]+0x00000001u); // 801BF088
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801BF08C
  c->r[0]=R8(c->r[30]+0x00000000u); // 801BF090
  W8(c->r[3]+0x00000010u,c->r[0]); // 801BF094
  W8(c->r[3]+0x00000011u,c->r[31]); // 801BF098
  c->lr=0x801BF0A0u; f_801BB728(c); // 801BF09C
  c->r[3]=0u+0x00000001u; // 801BF0A0
L_801BF0A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF0A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF0A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BF0AC
  c->lr=c->r[0]; // 801BF0B0
  c->r[1]=c->r[1]+0x00000010u; // 801BF0B4
  return; // 801BF0B8
}

// btsnd_hcic_change_name
void f_801BF0BC(Ctx* __restrict c) {
  trace_call(0x801BF0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801BF0BC
  c->r[0]=c->lr; // 801BF0C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801BF0C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801BF0C8
  c->r[31]=c->r[3]|c->r[3]; // 801BF0CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801BF0D0
  c->r[30]=c->r[4]|c->r[4]; // 801BF0D4
  c->r[3]=c->r[30]|c->r[30]; // 801BF0D8
  c->lr=0x801BF0E0u; f_801D4D44(c); // 801BF0DC
  c->r[0]=c->r[3]+0x00000001u; // 801BF0E0
  c->r[6]=0u+0x000000FBu; // 801BF0E4
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 801BF0E8
  c->r[5]=0u+0x00000000u; // 801BF0EC
  c->r[4]=0u+0x00000013u; // 801BF0F0
  c->r[3]=0u+0x0000000Cu; // 801BF0F4
  c->r[0]=0u+0x000000F8u; // 801BF0F8
  W16(c->r[31]+0x00000002u,c->r[6]); // 801BF0FC
  cmps(c,1,(int32_t)c->r[7],0); // 801BF100
  c->r[6]=c->r[31]+0x0000000Bu; // 801BF104
  W16(c->r[31]+0x00000004u,c->r[5]); // 801BF108
  c->r[8]=0u+0x00000000u; // 801BF10C
  W8(c->r[31]+0x00000008u,c->r[4]); // 801BF110
  W8(c->r[31]+0x00000009u,c->r[3]); // 801BF114
  W8(c->r[31]+0x0000000Au,c->r[0]); // 801BF118
  if (!crb(c,5)) { goto L_801BF1DC; } // 801BF11C
  cmps(c,0,(int32_t)c->r[7],8); // 801BF120
  c->r[4]=c->r[7]+0xFFFFFFF8u; // 801BF124
  if (!crb(c,1)) { goto L_801BF1B4; } // 801BF128
  c->r[5]=0u+0x00000000u; // 801BF12C
  if (crb(c,4)) { goto L_801BF148; } // 801BF130
  c->r[3]=0u+0x80000000u; // 801BF134
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801BF138
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801BF13C
  if (crb(c,1)) { goto L_801BF148; } // 801BF140
  c->r[5]=0u+0x00000001u; // 801BF144
L_801BF148:;
  cmps(c,0,(int32_t)c->r[5],0); // 801BF148
  if (crb(c,2)) { goto L_801BF1B4; } // 801BF14C
  c->r[0]=c->r[4]+0x00000007u; // 801BF150
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801BF154
  c->ctr=c->r[0]; // 801BF158
  cmps(c,0,(int32_t)c->r[4],0); // 801BF15C
  if (!crb(c,1)) { goto L_801BF1B4; } // 801BF160
L_801BF164:;
  c->r[0]=R8(c->r[30]+c->r[8]); // 801BF164
  c->r[3]=c->r[30]+c->r[8]; // 801BF168
  c->r[8]=c->r[8]+0x00000008u; // 801BF16C
  W8(c->r[6]+0x00000000u,c->r[0]); // 801BF170
  c->r[0]=R8(c->r[3]+0x00000001u); // 801BF174
  W8(c->r[6]+0x00000001u,c->r[0]); // 801BF178
  c->r[0]=R8(c->r[3]+0x00000002u); // 801BF17C
  W8(c->r[6]+0x00000002u,c->r[0]); // 801BF180
  c->r[0]=R8(c->r[3]+0x00000003u); // 801BF184
  W8(c->r[6]+0x00000003u,c->r[0]); // 801BF188
  c->r[0]=R8(c->r[3]+0x00000004u); // 801BF18C
  W8(c->r[6]+0x00000004u,c->r[0]); // 801BF190
  c->r[0]=R8(c->r[3]+0x00000005u); // 801BF194
  W8(c->r[6]+0x00000005u,c->r[0]); // 801BF198
  c->r[0]=R8(c->r[3]+0x00000006u); // 801BF19C
  W8(c->r[6]+0x00000006u,c->r[0]); // 801BF1A0
  c->r[0]=R8(c->r[3]+0x00000007u); // 801BF1A4
  W8(c->r[6]+0x00000007u,c->r[0]); // 801BF1A8
  c->r[6]=c->r[6]+0x00000008u; // 801BF1AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF164; } // 801BF1B0
L_801BF1B4:;
  c->r[0]=c->r[7]-c->r[8]; // 801BF1B4
  c->r[3]=c->r[30]+c->r[8]; // 801BF1B8
  c->ctr=c->r[0]; // 801BF1BC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 801BF1C0
  if (!crb(c,0)) { goto L_801BF1DC; } // 801BF1C4
L_801BF1C8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801BF1C8
  c->r[3]=c->r[3]+0x00000001u; // 801BF1CC
  W8(c->r[6]+0x00000000u,c->r[0]); // 801BF1D0
  c->r[6]=c->r[6]+0x00000001u; // 801BF1D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801BF1C8; } // 801BF1D8
L_801BF1DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801BF1DC
  c->lr=0x801BF1E4u; f_801BB728(c); // 801BF1E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801BF1E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801BF1E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801BF1EC
  c->lr=c->r[0]; // 801BF1F0
  c->r[1]=c->r[1]+0x00000010u; // 801BF1F4
  return; // 801BF1F8
}

// btsnd_hcic_write_page_tout
void f_801BF1FC(Ctx* __restrict c) {
  trace_call(0x801BF1FCu);
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 801BF1FC
  c->r[9]=0u+0x00000005u; // 801BF200
  c->r[8]=0u+0x00000000u; // 801BF204
  c->r[7]=0u+0x00000018u; // 801BF208
  c->r[6]=0u+0x0000000Cu; // 801BF20C
  c->r[5]=0u+0x00000002u; // 801BF210
  W16(c->r[3]+0x00000002u,c->r[9]); // 801BF214
  W16(c->r[3]+0x00000004u,c->r[8]); // 801BF218
  W8(c->r[3]+0x00000008u,c->r[7]); // 801BF21C
  W8(c->r[3]+0x00000009u,c->r[6]); // 801BF220
  W8(c->r[3]+0x0000000Au,c->r[5]); // 801BF224
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801BF228
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 801BF22C
  f_801BB728(c); return; // 801BF230
}

// btsnd_hcic_write_scan_enable
void f_801BF234(Ctx* __restrict c) {
  trace_call(0x801BF234u);
  c->r[8]=0u+0x00000004u; // 801BF234
  c->r[7]=0u+0x00000000u; // 801BF238
  c->r[6]=0u+0x0000001Au; // 801BF23C
  c->r[5]=0u+0x0000000Cu; // 801BF240
  c->r[0]=0u+0x00000001u; // 801BF244
  W16(c->r[3]+0x00000002u,c->r[8]); // 801BF248
  W16(c->r[3]+0x00000004u,c->r[7]); // 801BF24C
  W8(c->r[3]+0x00000008u,c->r[6]); // 801BF250
  W8(c->r[3]+0x00000009u,c->r[5]); // 801BF254
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801BF258
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 801BF25C
  f_801BB728(c); return; // 801BF260
}

