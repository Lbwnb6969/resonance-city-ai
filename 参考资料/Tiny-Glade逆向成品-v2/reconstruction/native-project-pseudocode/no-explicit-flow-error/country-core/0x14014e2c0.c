// VA 0x14014e2c0, PDB extent 691 bytes
// country_core::game_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 691 */

void pdb_14014e2c0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  switch(param_3) {
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x656570735f646f74) {
      param_1[1] = 9;
      *param_1 = 0x32;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x766f && *param_2 == 0x665f6172656d6163) {
      param_1[1] = 8;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x785f747265766e69 && *param_2 == 0x695f6172656d6163
       ) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x795f747265766e69 && *param_2 == 0x695f6172656d6163
       ) {
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x11:
    auVar5[0] = -((char)*param_2 == UNK_142e49980);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49981);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49982);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49983);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49984);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49985);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49986);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49987);
    auVar5[8] = -((char)param_2[1] == UNK_142e49988);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49989);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4998a);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4998b);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4998c);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4998d);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4998e);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4998f);
    auVar14[0] = -((char)param_2[2] == UNK_142e49990);
    auVar14[1] = -(UNK_142e49991 == '\0');
    auVar14[2] = -(UNK_142e49992 == '\0');
    auVar14[3] = -(UNK_142e49993 == '\0');
    auVar14[4] = -(UNK_142e49994 == '\0');
    auVar14[5] = -(UNK_142e49995 == '\0');
    auVar14[6] = -(UNK_142e49996 == '\0');
    auVar14[7] = -(UNK_142e49997 == '\0');
    auVar14[8] = -(UNK_142e49998 == '\0');
    auVar14[9] = -(UNK_142e49999 == '\0');
    auVar14[10] = -(UNK_142e4999a == '\0');
    auVar14[0xb] = -(UNK_142e4999b == '\0');
    auVar14[0xc] = -(UNK_142e4999c == '\0');
    auVar14[0xd] = -(UNK_142e4999d == '\0');
    auVar14[0xe] = -(UNK_142e4999e == '\0');
    auVar14[0xf] = -(UNK_142e4999f == '\0');
    auVar14 = auVar14 & auVar5;
    if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 6;
      *param_1 = 0x32;
      return;
    }
    auVar6[0] = -((char)*param_2 == UNK_142e499a0);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e499a1);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e499a2);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e499a3);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e499a4);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e499a5);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e499a6);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e499a7);
    auVar6[8] = -((char)param_2[1] == UNK_142e499a8);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e499a9);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e499aa);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e499ab);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e499ac);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e499ad);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e499ae);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e499af);
    auVar15[0] = -((char)param_2[2] == UNK_142e49990);
    auVar15[1] = -(UNK_142e49991 == '\0');
    auVar15[2] = -(UNK_142e49992 == '\0');
    auVar15[3] = -(UNK_142e49993 == '\0');
    auVar15[4] = -(UNK_142e49994 == '\0');
    auVar15[5] = -(UNK_142e49995 == '\0');
    auVar15[6] = -(UNK_142e49996 == '\0');
    auVar15[7] = -(UNK_142e49997 == '\0');
    auVar15[8] = -(UNK_142e49998 == '\0');
    auVar15[9] = -(UNK_142e49999 == '\0');
    auVar15[10] = -(UNK_142e4999a == '\0');
    auVar15[0xb] = -(UNK_142e4999b == '\0');
    auVar15[0xc] = -(UNK_142e4999c == '\0');
    auVar15[0xd] = -(UNK_142e4999d == '\0');
    auVar15[0xe] = -(UNK_142e4999e == '\0');
    auVar15[0xf] = -(UNK_142e4999f == '\0');
    auVar15 = auVar15 & auVar6;
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 10;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x15:
    auVar16[0] = -(*(char *)((longlong)param_2 + 5) == UNK_142e499d0);
    auVar16[1] = -(*(char *)((longlong)param_2 + 6) == UNK_142e499d1);
    auVar16[2] = -(*(char *)((longlong)param_2 + 7) == UNK_142e499d2);
    auVar16[3] = -((char)param_2[1] == UNK_142e499d3);
    auVar16[4] = -(*(char *)((longlong)param_2 + 9) == UNK_142e499d4);
    auVar16[5] = -(*(char *)((longlong)param_2 + 10) == UNK_142e499d5);
    auVar16[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e499d6);
    auVar16[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e499d7);
    auVar16[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e499d8);
    auVar16[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e499d9);
    auVar16[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e499da);
    auVar16[0xb] = -((char)param_2[2] == UNK_142e499db);
    auVar16[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e499dc);
    auVar16[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e499dd);
    auVar16[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e499de);
    auVar16[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e499df);
    auVar7[0] = -((char)*param_2 == UNK_142e499e0);
    auVar7[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e499e1);
    auVar7[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e499e2);
    auVar7[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e499e3);
    auVar7[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e499e4);
    auVar7[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e499e5);
    auVar7[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e499e6);
    auVar7[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e499e7);
    auVar7[8] = -((char)param_2[1] == UNK_142e499e8);
    auVar7[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e499e9);
    auVar7[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e499ea);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e499eb);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e499ec);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e499ed);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e499ee);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e499ef);
    auVar7 = auVar7 & auVar16;
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
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
    auVar17[0] = -(*(char *)((longlong)param_2 + 5) == UNK_142e499f0);
    auVar17[1] = -(*(char *)((longlong)param_2 + 6) == UNK_142e499f1);
    auVar17[2] = -(*(char *)((longlong)param_2 + 7) == UNK_142e499f2);
    auVar17[3] = -((char)param_2[1] == UNK_142e499f3);
    auVar17[4] = -(*(char *)((longlong)param_2 + 9) == UNK_142e499f4);
    auVar17[5] = -(*(char *)((longlong)param_2 + 10) == UNK_142e499f5);
    auVar17[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e499f6);
    auVar17[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e499f7);
    auVar17[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e499f8);
    auVar17[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e499f9);
    auVar17[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e499fa);
    auVar17[0xb] = -((char)param_2[2] == UNK_142e499fb);
    auVar17[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e499fc);
    auVar17[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e499fd);
    auVar17[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e499fe);
    auVar17[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e499ff);
    auVar8[0] = -((char)*param_2 == UNK_142e49a00);
    auVar8[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49a01);
    auVar8[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49a02);
    auVar8[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49a03);
    auVar8[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49a04);
    auVar8[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49a05);
    auVar8[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49a06);
    auVar8[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49a07);
    auVar8[8] = -((char)param_2[1] == UNK_142e49a08);
    auVar8[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49a09);
    auVar8[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49a0a);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a0b);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a0c);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a0d);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a0e);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a0f);
    auVar8 = auVar8 & auVar17;
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    auVar18[0] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49a10);
    auVar18[1] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49a11);
    auVar18[2] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49a12);
    auVar18[3] = -((char)param_2[1] == UNK_142e49a13);
    auVar18[4] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49a14);
    auVar18[5] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49a15);
    auVar18[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a16);
    auVar18[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a17);
    auVar18[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a18);
    auVar18[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a19);
    auVar18[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a1a);
    auVar18[0xb] = -((char)param_2[2] == UNK_142e49a1b);
    auVar18[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e49a1c);
    auVar18[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e49a1d);
    auVar18[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e49a1e);
    auVar18[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e49a1f);
    auVar9[0] = -((char)*param_2 == UNK_142e49a20);
    auVar9[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49a21);
    auVar9[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49a22);
    auVar9[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49a23);
    auVar9[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49a24);
    auVar9[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49a25);
    auVar9[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49a26);
    auVar9[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49a27);
    auVar9[8] = -((char)param_2[1] == UNK_142e49a28);
    auVar9[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49a29);
    auVar9[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49a2a);
    auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a2b);
    auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a2c);
    auVar9[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a2d);
    auVar9[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a2e);
    auVar9[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a2f);
    auVar9 = auVar9 & auVar18;
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0xc;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x18:
    lVar1 = param_2[2];
    auVar11[0] = -((char)lVar1 == UNK_142e49960);
    auVar11[1] = -((char)((ulonglong)lVar1 >> 8) == UNK_142e49961);
    auVar11[2] = -((char)((ulonglong)lVar1 >> 0x10) == UNK_142e49962);
    auVar11[3] = -((char)((ulonglong)lVar1 >> 0x18) == UNK_142e49963);
    auVar11[4] = -((char)((ulonglong)lVar1 >> 0x20) == UNK_142e49964);
    auVar11[5] = -((char)((ulonglong)lVar1 >> 0x28) == UNK_142e49965);
    auVar11[6] = -((char)((ulonglong)lVar1 >> 0x30) == UNK_142e49966);
    auVar11[7] = -((char)((ulonglong)lVar1 >> 0x38) == UNK_142e49967);
    auVar11[8] = -(UNK_142e49968 == '\0');
    auVar11[9] = -(UNK_142e49969 == '\0');
    auVar11[10] = -(UNK_142e4996a == '\0');
    auVar11[0xb] = -(UNK_142e4996b == '\0');
    auVar11[0xc] = -(UNK_142e4996c == '\0');
    auVar11[0xd] = -(UNK_142e4996d == '\0');
    auVar11[0xe] = -(UNK_142e4996e == '\0');
    auVar11[0xf] = -(UNK_142e4996f == '\0');
    auVar2[0] = -((char)*param_2 == UNK_142e49970);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49971);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49972);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49973);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49974);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49975);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49976);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49977);
    auVar2[8] = -((char)param_2[1] == UNK_142e49978);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49979);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4997a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4997b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4997c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4997d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4997e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4997f);
    auVar2 = auVar2 & auVar11;
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
      param_1[1] = 7;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x19:
    auVar12[0] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49940);
    auVar12[1] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49941);
    auVar12[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49942);
    auVar12[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49943);
    auVar12[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49944);
    auVar12[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49945);
    auVar12[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49946);
    auVar12[7] = -((char)param_2[2] == UNK_142e49947);
    auVar12[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e49948);
    auVar12[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e49949);
    auVar12[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e4994a);
    auVar12[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e4994b);
    auVar12[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e4994c);
    auVar12[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142e4994d);
    auVar12[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142e4994e);
    auVar12[0xf] = -((char)param_2[3] == UNK_142e4994f);
    auVar3[0] = -((char)*param_2 == UNK_142e49950);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49951);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49952);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49953);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49954);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49955);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49956);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49957);
    auVar3[8] = -((char)param_2[1] == UNK_142e49958);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49959);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4995a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4995b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4995c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4995d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4995e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4995f);
    auVar3 = auVar3 & auVar12;
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
      param_1[1] = 0xb;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x1b:
    auVar13[0] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a30);
    auVar13[1] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a31);
    auVar13[2] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a32);
    auVar13[3] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a33);
    auVar13[4] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a34);
    auVar13[5] = -((char)param_2[2] == UNK_142e49a35);
    auVar13[6] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e49a36);
    auVar13[7] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e49a37);
    auVar13[8] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e49a38);
    auVar13[9] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e49a39);
    auVar13[10] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e49a3a);
    auVar13[0xb] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142e49a3b);
    auVar13[0xc] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142e49a3c);
    auVar13[0xd] = -((char)param_2[3] == UNK_142e49a3d);
    auVar13[0xe] = -(*(char *)((longlong)param_2 + 0x19) == UNK_142e49a3e);
    auVar13[0xf] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_142e49a3f);
    auVar4[0] = -((char)*param_2 == UNK_142e49a00);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49a01);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49a02);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49a03);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49a04);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49a05);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49a06);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49a07);
    auVar4[8] = -((char)param_2[1] == UNK_142e49a08);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49a09);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49a0a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49a0b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49a0c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49a0d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49a0e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e49a0f);
    auVar4 = auVar4 & auVar13;
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
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x1e:
    auVar19[0] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e499b0);
    auVar19[1] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e499b1);
    auVar19[2] = -((char)param_2[2] == UNK_142e499b2);
    auVar19[3] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e499b3);
    auVar19[4] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e499b4);
    auVar19[5] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e499b5);
    auVar19[6] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e499b6);
    auVar19[7] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e499b7);
    auVar19[8] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142e499b8);
    auVar19[9] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142e499b9);
    auVar19[10] = -((char)param_2[3] == UNK_142e499ba);
    auVar19[0xb] = -(*(char *)((longlong)param_2 + 0x19) == UNK_142e499bb);
    auVar19[0xc] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_142e499bc);
    auVar19[0xd] = -(*(char *)((longlong)param_2 + 0x1b) == UNK_142e499bd);
    auVar19[0xe] = -(*(char *)((longlong)param_2 + 0x1c) == UNK_142e499be);
    auVar19[0xf] = -(*(char *)((longlong)param_2 + 0x1d) == UNK_142e499bf);
    auVar10[0] = -((char)*param_2 == UNK_142e499c0);
    auVar10[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e499c1);
    auVar10[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e499c2);
    auVar10[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e499c3);
    auVar10[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e499c4);
    auVar10[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e499c5);
    auVar10[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e499c6);
    auVar10[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e499c7);
    auVar10[8] = -((char)param_2[1] == UNK_142e499c8);
    auVar10[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e499c9);
    auVar10[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e499ca);
    auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e499cb);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e499cc);
    auVar10[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e499cd);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e499ce);
    auVar10[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e499cf);
    auVar10 = auVar10 & auVar19;
    if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 5;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 0xd;
  *param_1 = 0x32;
  return;
}

