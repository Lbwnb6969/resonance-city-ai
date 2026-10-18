// VA 0x141c6f520, PDB extent 598 bytes
// country_core::resources::glade_settings::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::glade_settings::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_settings.rs
   Extent: 598 */

void pdb_141c6f520(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x6e696172) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7365 && *param_2 == 0x7661656c5f797669) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x737265776f6c665f && *param_2 == 0x776f6c665f797669
       ) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x676f665f72656874 && *param_2 == 0x5f72656874616577
       ) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x7365696c66726574 && *param_2 == 0x6c66726574747562
       ) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6874676e65727473 && *param_2 == 0x7274735f646e6977
       ) {
      param_1[1] = 7;
      *param_1 = 0;
      return;
    }
    break;
  case 0x13:
    auVar10[0] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2e90);
    auVar10[1] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2e91);
    auVar10[2] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2e92);
    auVar10[3] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2e93);
    auVar10[4] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2e94);
    auVar10[5] = -((char)param_2[1] == UNK_1433a2e95);
    auVar10[6] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2e96);
    auVar10[7] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2e97);
    auVar10[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e98);
    auVar10[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e99);
    auVar10[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e9a);
    auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e9b);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e9c);
    auVar10[0xd] = -((char)param_2[2] == UNK_1433a2e9d);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2e9e);
    auVar10[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2e9f);
    auVar4[0] = -((char)*param_2 == UNK_143321480);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143321481);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143321482);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143321483);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143321484);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143321485);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143321486);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143321487);
    auVar4[8] = -((char)param_2[1] == UNK_143321488);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143321489);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14332148a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14332148b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14332148c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14332148d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14332148e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14332148f);
    auVar4 = auVar4 & auVar10;
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
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    break;
  case 0x15:
    auVar7[0] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2df0);
    auVar7[1] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2df1);
    auVar7[2] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2df2);
    auVar7[3] = -((char)param_2[1] == UNK_1433a2df3);
    auVar7[4] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2df4);
    auVar7[5] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2df5);
    auVar7[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2df6);
    auVar7[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2df7);
    auVar7[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2df8);
    auVar7[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2df9);
    auVar7[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2dfa);
    auVar7[0xb] = -((char)param_2[2] == UNK_1433a2dfb);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2dfc);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2dfd);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2dfe);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2dff);
    auVar1[0] = -((char)*param_2 == UNK_1433a2e00);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2e01);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2e02);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2e03);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2e04);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2e05);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2e06);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2e07);
    auVar1[8] = -((char)param_2[1] == UNK_1433a2e08);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2e09);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2e0a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e0b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e0c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e0d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e0e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e0f);
    auVar1 = auVar1 & auVar7;
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
      param_1[1] = 0xb;
      *param_1 = 0;
      return;
    }
    break;
  case 0x17:
    auVar8[0] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2e70);
    auVar8[1] = -((char)param_2[1] == UNK_1433a2e71);
    auVar8[2] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2e72);
    auVar8[3] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2e73);
    auVar8[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e74);
    auVar8[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e75);
    auVar8[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e76);
    auVar8[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e77);
    auVar8[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e78);
    auVar8[9] = -((char)param_2[2] == UNK_1433a2e79);
    auVar8[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2e7a);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2e7b);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2e7c);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2e7d);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2e7e);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433a2e7f);
    auVar2[0] = -((char)*param_2 == UNK_1433a2e80);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2e81);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2e82);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2e83);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2e84);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2e85);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2e86);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2e87);
    auVar2[8] = -((char)param_2[1] == UNK_1433a2e88);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2e89);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2e8a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e8b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e8c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e8d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e8e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e8f);
    auVar2 = auVar2 & auVar8;
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
      param_1[1] = 4;
      *param_1 = 0;
      return;
    }
    break;
  case 0x19:
    auVar9[0] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2e30);
    auVar9[1] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2e31);
    auVar9[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e32);
    auVar9[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e33);
    auVar9[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e34);
    auVar9[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e35);
    auVar9[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e36);
    auVar9[7] = -((char)param_2[2] == UNK_1433a2e37);
    auVar9[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2e38);
    auVar9[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2e39);
    auVar9[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2e3a);
    auVar9[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2e3b);
    auVar9[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2e3c);
    auVar9[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433a2e3d);
    auVar9[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_1433a2e3e);
    auVar9[0xf] = -((char)param_2[3] == UNK_1433a2e3f);
    auVar3[0] = -((char)*param_2 == UNK_1433a2e40);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2e41);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2e42);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2e43);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2e44);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2e45);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2e46);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2e47);
    auVar3[8] = -((char)param_2[1] == UNK_1433a2e48);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2e49);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2e4a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e4b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e4c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e4d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e4e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e4f);
    auVar3 = auVar3 & auVar9;
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 9;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1b:
    auVar12[0] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e50);
    auVar12[1] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e51);
    auVar12[2] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e52);
    auVar12[3] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e53);
    auVar12[4] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e54);
    auVar12[5] = -((char)param_2[2] == UNK_1433a2e55);
    auVar12[6] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2e56);
    auVar12[7] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2e57);
    auVar12[8] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2e58);
    auVar12[9] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2e59);
    auVar12[10] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2e5a);
    auVar12[0xb] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433a2e5b);
    auVar12[0xc] = -(*(char *)((longlong)param_2 + 0x17) == UNK_1433a2e5c);
    auVar12[0xd] = -((char)param_2[3] == UNK_1433a2e5d);
    auVar12[0xe] = -(*(char *)((longlong)param_2 + 0x19) == UNK_1433a2e5e);
    auVar12[0xf] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_1433a2e5f);
    auVar6[0] = -((char)*param_2 == UNK_1433a2e60);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2e61);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2e62);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2e63);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2e64);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2e65);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2e66);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2e67);
    auVar6[8] = -((char)param_2[1] == UNK_1433a2e68);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2e69);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2e6a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e6b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e6c);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e6d);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e6e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e6f);
    auVar6 = auVar6 & auVar12;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 8;
      *param_1 = 0;
      return;
    }
    break;
  case 0x1e:
    auVar11[0] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e10);
    auVar11[1] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e11);
    auVar11[2] = -((char)param_2[2] == UNK_1433a2e12);
    auVar11[3] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433a2e13);
    auVar11[4] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433a2e14);
    auVar11[5] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433a2e15);
    auVar11[6] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433a2e16);
    auVar11[7] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433a2e17);
    auVar11[8] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433a2e18);
    auVar11[9] = -(*(char *)((longlong)param_2 + 0x17) == UNK_1433a2e19);
    auVar11[10] = -((char)param_2[3] == UNK_1433a2e1a);
    auVar11[0xb] = -(*(char *)((longlong)param_2 + 0x19) == UNK_1433a2e1b);
    auVar11[0xc] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_1433a2e1c);
    auVar11[0xd] = -(*(char *)((longlong)param_2 + 0x1b) == UNK_1433a2e1d);
    auVar11[0xe] = -(*(char *)((longlong)param_2 + 0x1c) == UNK_1433a2e1e);
    auVar11[0xf] = -(*(char *)((longlong)param_2 + 0x1d) == UNK_1433a2e1f);
    auVar5[0] = -((char)*param_2 == UNK_1433a2e20);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433a2e21);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433a2e22);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433a2e23);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433a2e24);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433a2e25);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433a2e26);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433a2e27);
    auVar5[8] = -((char)param_2[1] == UNK_1433a2e28);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433a2e29);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433a2e2a);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433a2e2b);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433a2e2c);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433a2e2d);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433a2e2e);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433a2e2f);
    auVar5 = auVar5 & auVar11;
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 10;
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 0xc;
  *param_1 = 0;
  return;
}

