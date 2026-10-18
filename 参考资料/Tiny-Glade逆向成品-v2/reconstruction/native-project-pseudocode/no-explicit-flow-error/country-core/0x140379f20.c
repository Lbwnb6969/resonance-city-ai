// VA 0x140379f20, PDB extent 1123 bytes
// country_core::meta_commander::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::meta_commander::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 1123 */

undefined2 * pdb_140379f20(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
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
  
  switch(param_3) {
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x657a && (int)*param_2 == 0x65657246) {
      *param_1 = 0xb32;
      return param_1;
    }
    break;
  case 8:
    if (*param_2 == 0x657a656572666e55) {
      *param_1 = 0xc32;
      return param_1;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'c' && *param_2 == 0x6e79734174696157) {
      *param_1 = 0x232;
      return param_1;
    }
    if ((char)param_2[1] == 'e' && *param_2 == 0x6d69547465736552) {
      *param_1 = 0x432;
      return param_1;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7365 && *param_2 == 0x6d61724674696157) {
      *param_1 = 0x532;
      return param_1;
    }
    if ((short)param_2[1] == 0x746f && *param_2 == 0x68736e6565726353) {
      *param_1 = 0xa32;
      return param_1;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6e6f697373655364 && *param_2 == 0x7373655364616f4c
       ) {
      *param_1 = 0x32;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x70657473656d6954 && *param_2 == 0x73656d6954786946
       ) {
      *param_1 = 0x632;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x74697551646e4165 && *param_2 == 0x51646e4165766153
       ) {
      *param_1 = 0x1232;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x737365636f725074 && *param_2 == 0x636f725074697551
       ) {
      *param_1 = 0x1432;
      return param_1;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x7475706e && *param_2 == 0x49656c6261736944) {
      *param_1 = 0x732;
      return param_1;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x676e696c69666f72 && *param_2 == 0x6f72507472617453
       ) {
      *param_1 = 0xd32;
      return param_1;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x676e696c69666f72 && *param_2 == 0x72506873696e6946
       ) {
      *param_1 = 0xe32;
      return param_1;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x65735579726f6d65 && *param_2 == 0x654d74726f706552
       ) {
      *param_1 = 0x1032;
      return param_1;
    }
    break;
  case 0x10:
    auVar5[0] = -((char)*param_2 == UNK_142f45a60);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f45a61);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f45a62);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f45a63);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f45a64);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f45a65);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f45a66);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f45a67);
    auVar5[8] = -((char)param_2[1] == UNK_142f45a68);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f45a69);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f45a6a);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f45a6b);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f45a6c);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f45a6d);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f45a6e);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f45a6f);
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
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf)
        == 0xffff) {
      *param_1 = 0x932;
      return param_1;
    }
    break;
  case 0x11:
    auVar6[0] = -((char)*param_2 == UNK_142f45a90);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f45a91);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f45a92);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f45a93);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f45a94);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f45a95);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f45a96);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f45a97);
    auVar6[8] = -((char)param_2[1] == UNK_142f45a98);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f45a99);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f45a9a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f45a9b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f45a9c);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f45a9d);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f45a9e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f45a9f);
    auVar12[0] = -((char)param_2[2] == DAT_142f45aa0);
    auVar12[1] = -(UNK_142f45aa1 == '\0');
    auVar12[2] = -(UNK_142f45aa2 == '\0');
    auVar12[3] = -(UNK_142f45aa3 == '\0');
    auVar12[4] = -(UNK_142f45aa4 == '\0');
    auVar12[5] = -(UNK_142f45aa5 == '\0');
    auVar12[6] = -(UNK_142f45aa6 == '\0');
    auVar12[7] = -(UNK_142f45aa7 == '\0');
    auVar12[8] = -(UNK_142f45aa8 == '\0');
    auVar12[9] = -(UNK_142f45aa9 == '\0');
    auVar12[10] = -(UNK_142f45aaa == '\0');
    auVar12[0xb] = -(UNK_142f45aab == '\0');
    auVar12[0xc] = -(UNK_142f45aac == '\0');
    auVar12[0xd] = -(UNK_142f45aad == '\0');
    auVar12[0xe] = -(UNK_142f45aae == '\0');
    auVar12[0xf] = -(UNK_142f45aaf == '\0');
    auVar12 = auVar12 & auVar6;
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
      *param_1 = 0x132;
      return param_1;
    }
    auVar7[0] = -((char)*param_2 == UNK_142f45ab0);
    auVar7[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f45ab1);
    auVar7[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f45ab2);
    auVar7[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f45ab3);
    auVar7[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f45ab4);
    auVar7[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f45ab5);
    auVar7[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f45ab6);
    auVar7[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f45ab7);
    auVar7[8] = -((char)param_2[1] == UNK_142f45ab8);
    auVar7[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f45ab9);
    auVar7[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f45aba);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f45abb);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f45abc);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f45abd);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f45abe);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f45abf);
    auVar13[0] = -((char)param_2[2] == UNK_142e47910);
    auVar13[1] = -(UNK_142e47911 == '\0');
    auVar13[2] = -(UNK_142e47912 == '\0');
    auVar13[3] = -(UNK_142e47913 == '\0');
    auVar13[4] = -(UNK_142e47914 == '\0');
    auVar13[5] = -(UNK_142e47915 == '\0');
    auVar13[6] = -(UNK_142e47916 == '\0');
    auVar13[7] = -(UNK_142e47917 == '\0');
    auVar13[8] = -(UNK_142e47918 == '\0');
    auVar13[9] = -(UNK_142e47919 == '\0');
    auVar13[10] = -(UNK_142e4791a == '\0');
    auVar13[0xb] = -(UNK_142e4791b == '\0');
    auVar13[0xc] = -(UNK_142e4791c == '\0');
    auVar13[0xd] = -(UNK_142e4791d == '\0');
    auVar13[0xe] = -(UNK_142e4791e == '\0');
    auVar13[0xf] = -(UNK_142e4791f == '\0');
    auVar13 = auVar13 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
      *param_1 = 0x832;
      return param_1;
    }
    auVar8[0] = -((char)*param_2 == UNK_142f45ac0);
    auVar8[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f45ac1);
    auVar8[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f45ac2);
    auVar8[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f45ac3);
    auVar8[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f45ac4);
    auVar8[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f45ac5);
    auVar8[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f45ac6);
    auVar8[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f45ac7);
    auVar8[8] = -((char)param_2[1] == UNK_142f45ac8);
    auVar8[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f45ac9);
    auVar8[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f45aca);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f45acb);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f45acc);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f45acd);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f45ace);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f45acf);
    auVar14[0] = -((char)param_2[2] == UNK_142e47910);
    auVar14[1] = -(UNK_142e47911 == '\0');
    auVar14[2] = -(UNK_142e47912 == '\0');
    auVar14[3] = -(UNK_142e47913 == '\0');
    auVar14[4] = -(UNK_142e47914 == '\0');
    auVar14[5] = -(UNK_142e47915 == '\0');
    auVar14[6] = -(UNK_142e47916 == '\0');
    auVar14[7] = -(UNK_142e47917 == '\0');
    auVar14[8] = -(UNK_142e47918 == '\0');
    auVar14[9] = -(UNK_142e47919 == '\0');
    auVar14[10] = -(UNK_142e4791a == '\0');
    auVar14[0xb] = -(UNK_142e4791b == '\0');
    auVar14[0xc] = -(UNK_142e4791c == '\0');
    auVar14[0xd] = -(UNK_142e4791d == '\0');
    auVar14[0xe] = -(UNK_142e4791e == '\0');
    auVar14[0xf] = -(UNK_142e4791f == '\0');
    auVar14 = auVar14 & auVar8;
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
      *param_1 = 0x1332;
      return param_1;
    }
    break;
  case 0x12:
    auVar2[0] = -((char)*param_2 == UNK_142f45a70);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f45a71);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f45a72);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f45a73);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f45a74);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f45a75);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f45a76);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f45a77);
    auVar2[8] = -((char)param_2[1] == UNK_142f45a78);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f45a79);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f45a7a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f45a7b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f45a7c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f45a7d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f45a7e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f45a7f);
    auVar9[0] = -((char)(short)param_2[2] == UNK_142f45a80);
    auVar9[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142f45a81);
    auVar9[2] = -(UNK_142f45a82 == '\0');
    auVar9[3] = -(UNK_142f45a83 == '\0');
    auVar9[4] = -(UNK_142f45a84 == '\0');
    auVar9[5] = -(UNK_142f45a85 == '\0');
    auVar9[6] = -(UNK_142f45a86 == '\0');
    auVar9[7] = -(UNK_142f45a87 == '\0');
    auVar9[8] = -(UNK_142f45a88 == '\0');
    auVar9[9] = -(UNK_142f45a89 == '\0');
    auVar9[10] = -(UNK_142f45a8a == '\0');
    auVar9[0xb] = -(UNK_142f45a8b == '\0');
    auVar9[0xc] = -(UNK_142f45a8c == '\0');
    auVar9[0xd] = -(UNK_142f45a8d == '\0');
    auVar9[0xe] = -(UNK_142f45a8e == '\0');
    auVar9[0xf] = -(UNK_142f45a8f == '\0');
    auVar9 = auVar9 & auVar2;
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
      *param_1 = 0x332;
      return param_1;
    }
    break;
  case 0x14:
    iVar1 = (int)param_2[2];
    auVar11[0] = -((char)iVar1 == UNK_142f45a40);
    auVar11[1] = -((char)((uint)iVar1 >> 8) == UNK_142f45a41);
    auVar11[2] = -((char)((uint)iVar1 >> 0x10) == UNK_142f45a42);
    auVar11[3] = -((char)((uint)iVar1 >> 0x18) == UNK_142f45a43);
    auVar11[4] = -(UNK_142f45a44 == '\0');
    auVar11[5] = -(UNK_142f45a45 == '\0');
    auVar11[6] = -(UNK_142f45a46 == '\0');
    auVar11[7] = -(UNK_142f45a47 == '\0');
    auVar11[8] = -(UNK_142f45a48 == '\0');
    auVar11[9] = -(UNK_142f45a49 == '\0');
    auVar11[10] = -(UNK_142f45a4a == '\0');
    auVar11[0xb] = -(UNK_142f45a4b == '\0');
    auVar11[0xc] = -(UNK_142f45a4c == '\0');
    auVar11[0xd] = -(UNK_142f45a4d == '\0');
    auVar11[0xe] = -(UNK_142f45a4e == '\0');
    auVar11[0xf] = -(UNK_142f45a4f == '\0');
    auVar4[0] = -((char)*param_2 == UNK_142f45a50);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f45a51);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f45a52);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f45a53);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f45a54);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f45a55);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f45a56);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f45a57);
    auVar4[8] = -((char)param_2[1] == UNK_142f45a58);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f45a59);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f45a5a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f45a5b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f45a5c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f45a5d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f45a5e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f45a5f);
    auVar4 = auVar4 & auVar11;
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
      *param_1 = 0xf32;
      return param_1;
    }
    break;
  case 0x19:
    auVar10[0] = -(*(char *)((longlong)param_2 + 9) == UNK_142f45a20);
    auVar10[1] = -(*(char *)((longlong)param_2 + 10) == UNK_142f45a21);
    auVar10[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f45a22);
    auVar10[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f45a23);
    auVar10[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f45a24);
    auVar10[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f45a25);
    auVar10[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f45a26);
    auVar10[7] = -((char)param_2[2] == UNK_142f45a27);
    auVar10[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f45a28);
    auVar10[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f45a29);
    auVar10[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142f45a2a);
    auVar10[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142f45a2b);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142f45a2c);
    auVar10[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142f45a2d);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142f45a2e);
    auVar10[0xf] = -((char)param_2[3] == UNK_142f45a2f);
    auVar3[0] = -((char)*param_2 == UNK_142f45a30);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f45a31);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f45a32);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f45a33);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f45a34);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f45a35);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f45a36);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f45a37);
    auVar3[8] = -((char)param_2[1] == UNK_142f45a38);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f45a39);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f45a3a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f45a3b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f45a3c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f45a3d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f45a3e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f45a3f);
    auVar3 = auVar3 & auVar10;
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
      *param_1 = 0x1132;
      return param_1;
    }
  }
  pdb_142db7e70(param_1,param_2,param_3,&UNK_142f45f38,0x15);
  return param_1;
}

