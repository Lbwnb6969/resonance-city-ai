// VA 0x140bbf520, PDB extent 887 bytes
// country_core::resources::glade_color_customization::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::glade_color_customization::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
   Extent: 887 */

void pdb_140bbf520(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x666f6f72) {
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    if ((int)*param_2 == 0x67616c66) {
      param_1[1] = 0xe;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 's' && (int)*param_2 == 0x65746167) {
      param_1[1] = 0x10;
      *param_1 = 0;
      return;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7365 && (int)*param_2 == 0x636e6566) {
      param_1[1] = 0xc;
      *param_1 = 0;
      return;
    }
    if (*(short *)((longlong)param_2 + 4) == 0x7372 && (int)*param_2 == 0x69617473) {
      param_1[1] = 0x14;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x73776f64 && (int)*param_2 == 0x646e6977) {
      param_1[1] = 0xf;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x676e69646c697562) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7265 && *param_2 == 0x626d6974666c6168) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6c6c61775f6e6564 && *param_2 == 0x775f6e65646f6f77
       ) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x79745f646e616865 && *param_2 == 0x646e616865657266
       ) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x6c656570 && *param_2 == 0x5f72657473616c70) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    if ((int)param_2[1] == 0x74756f79 && *param_2 == 0x616c5f6472616f62) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    if ((int)param_2[1] == 0x74686769 && *param_2 == 0x6c5f776f646e6977) {
      param_1[1] = 0xd;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6c6c61775f6d726f && *param_2 == 0x6d726f6665657266
       ) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 5) == 0x746867696c5f6e72 && *param_2 == 0x5f6e7265746e616c
       ) {
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x656c7974735f6d69 && *param_2 == 0x6d69725f74616c66
       ) {
      param_1[1] = 0x11;
      *param_1 = 0;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x656c7974735f666f && *param_2 == 0x6f6f725f74616c66
       ) {
      param_1[1] = 0x12;
      *param_1 = 0;
      return;
    }
    break;
  case 0x10:
    auVar4[0] = -((char)*param_2 == UNK_143062230);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143062231);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143062232);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143062233);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143062234);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143062235);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143062236);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143062237);
    auVar4[8] = -((char)param_2[1] == UNK_143062238);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143062239);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14306223a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14306223b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14306223c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14306223d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14306223e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14306223f);
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar3[0] = -((char)*param_2 == UNK_1430621c0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1430621c1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1430621c2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1430621c3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1430621c4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1430621c5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1430621c6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1430621c7);
    auVar3[8] = -((char)param_2[1] == UNK_1430621c8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1430621c9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1430621ca);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1430621cb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1430621cc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1430621cd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1430621ce);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1430621cf);
    auVar7[0] = -((char)(short)param_2[2] == UNK_14304c950);
    auVar7[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_14304c951);
    auVar7[2] = -(UNK_14304c952 == '\0');
    auVar7[3] = -(UNK_14304c953 == '\0');
    auVar7[4] = -(UNK_14304c954 == '\0');
    auVar7[5] = -(UNK_14304c955 == '\0');
    auVar7[6] = -(UNK_14304c956 == '\0');
    auVar7[7] = -(UNK_14304c957 == '\0');
    auVar7[8] = -(UNK_14304c958 == '\0');
    auVar7[9] = -(UNK_14304c959 == '\0');
    auVar7[10] = -(UNK_14304c95a == '\0');
    auVar7[0xb] = -(UNK_14304c95b == '\0');
    auVar7[0xc] = -(UNK_14304c95c == '\0');
    auVar7[0xd] = -(UNK_14304c95d == '\0');
    auVar7[0xe] = -(UNK_14304c95e == '\0');
    auVar7[0xf] = -(UNK_14304c95f == '\0');
    auVar7 = auVar7 & auVar3;
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x13;
      *param_1 = 0;
      return;
    }
    break;
  case 0x13:
    auVar5[0] = -(*(char *)((longlong)param_2 + 3) == UNK_1430621f0);
    auVar5[1] = -(*(char *)((longlong)param_2 + 4) == UNK_1430621f1);
    auVar5[2] = -(*(char *)((longlong)param_2 + 5) == UNK_1430621f2);
    auVar5[3] = -(*(char *)((longlong)param_2 + 6) == UNK_1430621f3);
    auVar5[4] = -(*(char *)((longlong)param_2 + 7) == UNK_1430621f4);
    auVar5[5] = -((char)param_2[1] == UNK_1430621f5);
    auVar5[6] = -(*(char *)((longlong)param_2 + 9) == UNK_1430621f6);
    auVar5[7] = -(*(char *)((longlong)param_2 + 10) == UNK_1430621f7);
    auVar5[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1430621f8);
    auVar5[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1430621f9);
    auVar5[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1430621fa);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1430621fb);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1430621fc);
    auVar5[0xd] = -((char)param_2[2] == UNK_1430621fd);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1430621fe);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1430621ff);
    auVar1[0] = -((char)*param_2 == UNK_143062200);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143062201);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143062202);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143062203);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143062204);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143062205);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143062206);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143062207);
    auVar1[8] = -((char)param_2[1] == UNK_143062208);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143062209);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14306220a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14306220b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14306220c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14306220d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14306220e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14306220f);
    auVar1 = auVar1 & auVar5;
    if ((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    auVar6[0] = -(*(char *)((longlong)param_2 + 3) == UNK_143062210);
    auVar6[1] = -(*(char *)((longlong)param_2 + 4) == UNK_143062211);
    auVar6[2] = -(*(char *)((longlong)param_2 + 5) == UNK_143062212);
    auVar6[3] = -(*(char *)((longlong)param_2 + 6) == UNK_143062213);
    auVar6[4] = -(*(char *)((longlong)param_2 + 7) == UNK_143062214);
    auVar6[5] = -((char)param_2[1] == UNK_143062215);
    auVar6[6] = -(*(char *)((longlong)param_2 + 9) == UNK_143062216);
    auVar6[7] = -(*(char *)((longlong)param_2 + 10) == UNK_143062217);
    auVar6[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143062218);
    auVar6[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143062219);
    auVar6[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14306221a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14306221b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14306221c);
    auVar6[0xd] = -((char)param_2[2] == UNK_14306221d);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14306221e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14306221f);
    auVar2[0] = -((char)*param_2 == UNK_143062220);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143062221);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143062222);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143062223);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143062224);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143062225);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143062226);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143062227);
    auVar2[8] = -((char)param_2[1] == UNK_143062228);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143062229);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14306222a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14306222b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14306222c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14306222d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14306222e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14306222f);
    auVar2 = auVar2 & auVar6;
    if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0x15;
  *param_1 = 0;
  return;
}

