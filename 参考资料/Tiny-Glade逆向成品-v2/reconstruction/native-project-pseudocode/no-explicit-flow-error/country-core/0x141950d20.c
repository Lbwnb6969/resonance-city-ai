// VA 0x141950d20, PDB extent 1098 bytes
// country_core::resources::history::wall_compound_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 1098 */

void pdb_141950d20(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
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
  case 5:
    if (*(char *)((longlong)param_2 + 4) != 'h' || (int)*param_2 != 0x70726f4d) goto LAB_141951100;
    goto code_r0x000141950f17;
  default:
LAB_141951100:
    uVar2 = pdb_142d8f140(param_2,param_3,&UNK_14335abf0,0x16);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *param_1 = 1;
    return;
  case 10:
    if ((short)param_2[1] == 0x6c6c && *param_2 == 0x6157657461657243) {
      param_1[1] = 1;
    }
    else {
      if ((short)param_2[1] != 0x6c6c || *param_2 != 0x61576574656c6544) goto LAB_141951100;
      param_1[1] = 2;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6465676e6168436c && *param_2 == 0x6e6168436c6c6157
       ) {
      param_1[1] = 0;
    }
    else if (*(longlong *)((longlong)param_2 + 3) == 0x656c79745365676e &&
             *param_2 == 0x745365676e616843) {
      param_1[1] = 9;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 3) != 0x7472696b5365676e ||
          *param_2 != 0x6b5365676e616843) goto LAB_141951100;
      param_1[1] = 0x14;
    }
    break;
  case 0xc:
    if ((int)param_2[1] != 0x74686769 || *param_2 != 0x65487473756a6441) goto LAB_141951100;
    param_1[1] = 3;
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) != 0x657275736f6c636e || *param_2 != 0x6c636e456b72614d
       ) goto LAB_141951100;
    param_1[1] = 0x13;
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x6570795468637241 && *param_2 == 0x724165676e616843
       ) {
      param_1[1] = 8;
    }
    else if (*(longlong *)((longlong)param_2 + 6) == 0x6c6169726574614d &&
             *param_2 == 0x614d65676e616843) {
      param_1[1] = 10;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 6) != 0x7374726f70707553 ||
          *param_2 != 0x755365676e616843) goto LAB_141951100;
      param_1[1] = 0xf;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x6e6f69746176656c && *param_2 == 0x6c4565676e616843
       ) {
      param_1[1] = 6;
      break;
    }
    if (*(longlong *)((longlong)param_2 + 7) != 0x6870726f4d646574 || *param_2 != 0x7461636572706544
       ) goto LAB_141951100;
code_r0x000141950f17:
    param_1[1] = 0x12;
    break;
  case 0x10:
    auVar5[0] = -((char)*param_2 == UNK_14335a380);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a381);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a382);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a383);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a384);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a385);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a386);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a387);
    auVar5[8] = -((char)param_2[1] == UNK_14335a388);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a389);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a38a);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a38b);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a38c);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a38d);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a38e);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a38f);
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
        != 0xffff) goto LAB_141951100;
    param_1[1] = 7;
    break;
  case 0x11:
    auVar7[0] = -((char)*param_2 == UNK_14335a390);
    auVar7[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a391);
    auVar7[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a392);
    auVar7[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a393);
    auVar7[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a394);
    auVar7[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a395);
    auVar7[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a396);
    auVar7[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a397);
    auVar7[8] = -((char)param_2[1] == UNK_14335a398);
    auVar7[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a399);
    auVar7[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a39a);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a39b);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a39c);
    auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a39d);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a39e);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a39f);
    auVar15[0] = -((char)param_2[2] == DAT_142e505d0);
    auVar15[1] = -(UNK_142e505d1 == '\0');
    auVar15[2] = -(UNK_142e505d2 == '\0');
    auVar15[3] = -(UNK_142e505d3 == '\0');
    auVar15[4] = -(UNK_142e505d4 == '\0');
    auVar15[5] = -(UNK_142e505d5 == '\0');
    auVar15[6] = -(UNK_142e505d6 == '\0');
    auVar15[7] = -(UNK_142e505d7 == '\0');
    auVar15[8] = -(UNK_142e505d8 == '\0');
    auVar15[9] = -(UNK_142e505d9 == '\0');
    auVar15[10] = -(UNK_142e505da == '\0');
    auVar15[0xb] = -(UNK_142e505db == '\0');
    auVar15[0xc] = -(UNK_142e505dc == '\0');
    auVar15[0xd] = -(UNK_142e505dd == '\0');
    auVar15[0xe] = -(UNK_142e505de == '\0');
    auVar15[0xf] = -(UNK_142e505df == '\0');
    auVar15 = auVar15 & auVar7;
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
      param_1[1] = 5;
    }
    else {
      auVar8[0] = -((char)*param_2 == UNK_14335a3a0);
      auVar8[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a3a1);
      auVar8[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a3a2);
      auVar8[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a3a3);
      auVar8[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a3a4);
      auVar8[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a3a5);
      auVar8[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a3a6);
      auVar8[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a3a7);
      auVar8[8] = -((char)param_2[1] == UNK_14335a3a8);
      auVar8[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a3a9);
      auVar8[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a3aa);
      auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a3ab);
      auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a3ac);
      auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a3ad);
      auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a3ae);
      auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a3af);
      auVar16[0] = -((char)param_2[2] == UNK_142e49990);
      auVar16[1] = -(UNK_142e49991 == '\0');
      auVar16[2] = -(UNK_142e49992 == '\0');
      auVar16[3] = -(UNK_142e49993 == '\0');
      auVar16[4] = -(UNK_142e49994 == '\0');
      auVar16[5] = -(UNK_142e49995 == '\0');
      auVar16[6] = -(UNK_142e49996 == '\0');
      auVar16[7] = -(UNK_142e49997 == '\0');
      auVar16[8] = -(UNK_142e49998 == '\0');
      auVar16[9] = -(UNK_142e49999 == '\0');
      auVar16[10] = -(UNK_142e4999a == '\0');
      auVar16[0xb] = -(UNK_142e4999b == '\0');
      auVar16[0xc] = -(UNK_142e4999c == '\0');
      auVar16[0xd] = -(UNK_142e4999d == '\0');
      auVar16[0xe] = -(UNK_142e4999e == '\0');
      auVar16[0xf] = -(UNK_142e4999f == '\0');
      auVar16 = auVar16 & auVar8;
      if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
        param_1[1] = 0xe;
      }
      else {
        auVar9[0] = -((char)*param_2 == UNK_14335a3b0);
        auVar9[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a3b1);
        auVar9[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a3b2);
        auVar9[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a3b3);
        auVar9[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a3b4);
        auVar9[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a3b5);
        auVar9[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a3b6);
        auVar9[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a3b7);
        auVar9[8] = -((char)param_2[1] == UNK_14335a3b8);
        auVar9[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a3b9);
        auVar9[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a3ba);
        auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a3bb);
        auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a3bc);
        auVar9[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a3bd);
        auVar9[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a3be);
        auVar9[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a3bf);
        auVar17[0] = -((char)param_2[2] == UNK_14335a3c0);
        auVar17[1] = -(UNK_14335a3c1 == '\0');
        auVar17[2] = -(UNK_14335a3c2 == '\0');
        auVar17[3] = -(UNK_14335a3c3 == '\0');
        auVar17[4] = -(UNK_14335a3c4 == '\0');
        auVar17[5] = -(UNK_14335a3c5 == '\0');
        auVar17[6] = -(UNK_14335a3c6 == '\0');
        auVar17[7] = -(UNK_14335a3c7 == '\0');
        auVar17[8] = -(UNK_14335a3c8 == '\0');
        auVar17[9] = -(UNK_14335a3c9 == '\0');
        auVar17[10] = -(UNK_14335a3ca == '\0');
        auVar17[0xb] = -(UNK_14335a3cb == '\0');
        auVar17[0xc] = -(UNK_14335a3cc == '\0');
        auVar17[0xd] = -(UNK_14335a3cd == '\0');
        auVar17[0xe] = -(UNK_14335a3ce == '\0');
        auVar17[0xf] = -(UNK_14335a3cf == '\0');
        auVar17 = auVar17 & auVar9;
        if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
        param_1[1] = 0x10;
      }
    }
    break;
  case 0x15:
    auVar18[0] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a3d0);
    auVar18[1] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a3d1);
    auVar18[2] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a3d2);
    auVar18[3] = -((char)param_2[1] == UNK_14335a3d3);
    auVar18[4] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a3d4);
    auVar18[5] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a3d5);
    auVar18[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a3d6);
    auVar18[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a3d7);
    auVar18[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a3d8);
    auVar18[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a3d9);
    auVar18[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a3da);
    auVar18[0xb] = -((char)param_2[2] == UNK_14335a3db);
    auVar18[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14335a3dc);
    auVar18[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14335a3dd);
    auVar18[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14335a3de);
    auVar18[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14335a3df);
    auVar10[0] = -((char)*param_2 == UNK_14335a3e0);
    auVar10[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a3e1);
    auVar10[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a3e2);
    auVar10[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a3e3);
    auVar10[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a3e4);
    auVar10[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a3e5);
    auVar10[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a3e6);
    auVar10[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a3e7);
    auVar10[8] = -((char)param_2[1] == UNK_14335a3e8);
    auVar10[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a3e9);
    auVar10[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a3ea);
    auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a3eb);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a3ec);
    auVar10[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a3ed);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a3ee);
    auVar10[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a3ef);
    auVar10 = auVar10 & auVar18;
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
                (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    param_1[1] = 4;
    break;
  case 0x17:
    auVar12[0] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a340);
    auVar12[1] = -((char)param_2[1] == UNK_14335a341);
    auVar12[2] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a342);
    auVar12[3] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a343);
    auVar12[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a344);
    auVar12[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a345);
    auVar12[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a346);
    auVar12[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a347);
    auVar12[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a348);
    auVar12[9] = -((char)param_2[2] == UNK_14335a349);
    auVar12[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14335a34a);
    auVar12[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14335a34b);
    auVar12[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14335a34c);
    auVar12[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14335a34d);
    auVar12[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14335a34e);
    auVar12[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_14335a34f);
    auVar3[0] = -((char)*param_2 == UNK_14335a350);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a351);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a352);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a353);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a354);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a355);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a356);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a357);
    auVar3[8] = -((char)param_2[1] == UNK_14335a358);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a359);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a35a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a35b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a35c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a35d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a35e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a35f);
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
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    param_1[1] = 0xc;
    break;
  case 0x18:
    lVar1 = param_2[2];
    auVar14[0] = -((char)lVar1 == UNK_14335a320);
    auVar14[1] = -((char)((ulonglong)lVar1 >> 8) == UNK_14335a321);
    auVar14[2] = -((char)((ulonglong)lVar1 >> 0x10) == UNK_14335a322);
    auVar14[3] = -((char)((ulonglong)lVar1 >> 0x18) == UNK_14335a323);
    auVar14[4] = -((char)((ulonglong)lVar1 >> 0x20) == UNK_14335a324);
    auVar14[5] = -((char)((ulonglong)lVar1 >> 0x28) == UNK_14335a325);
    auVar14[6] = -((char)((ulonglong)lVar1 >> 0x30) == UNK_14335a326);
    auVar14[7] = -((char)((ulonglong)lVar1 >> 0x38) == UNK_14335a327);
    auVar14[8] = -(UNK_14335a328 == '\0');
    auVar14[9] = -(UNK_14335a329 == '\0');
    auVar14[10] = -(UNK_14335a32a == '\0');
    auVar14[0xb] = -(UNK_14335a32b == '\0');
    auVar14[0xc] = -(UNK_14335a32c == '\0');
    auVar14[0xd] = -(UNK_14335a32d == '\0');
    auVar14[0xe] = -(UNK_14335a32e == '\0');
    auVar14[0xf] = -(UNK_14335a32f == '\0');
    auVar6[0] = -((char)*param_2 == UNK_14335a330);
    auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a331);
    auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a332);
    auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a333);
    auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a334);
    auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a335);
    auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a336);
    auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a337);
    auVar6[8] = -((char)param_2[1] == UNK_14335a338);
    auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a339);
    auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a33a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a33b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a33c);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a33d);
    auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a33e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a33f);
    auVar6 = auVar6 & auVar14;
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
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    param_1[1] = 0xd;
    break;
  case 0x1a:
    auVar13[0] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a300);
    auVar13[1] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a301);
    auVar13[2] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a302);
    auVar13[3] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a303);
    auVar13[4] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a304);
    auVar13[5] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a305);
    auVar13[6] = -((char)param_2[2] == UNK_14335a306);
    auVar13[7] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14335a307);
    auVar13[8] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14335a308);
    auVar13[9] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14335a309);
    auVar13[10] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14335a30a);
    auVar13[0xb] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14335a30b);
    auVar13[0xc] = -(*(char *)((longlong)param_2 + 0x16) == UNK_14335a30c);
    auVar13[0xd] = -(*(char *)((longlong)param_2 + 0x17) == UNK_14335a30d);
    auVar13[0xe] = -((char)param_2[3] == UNK_14335a30e);
    auVar13[0xf] = -(*(char *)((longlong)param_2 + 0x19) == UNK_14335a30f);
    auVar4[0] = -((char)*param_2 == UNK_14335a310);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a311);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a312);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a313);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a314);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a315);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a316);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a317);
    auVar4[8] = -((char)param_2[1] == UNK_14335a318);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a319);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a31a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a31b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a31c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a31d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a31e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a31f);
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
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    param_1[1] = 0x11;
    break;
  case 0x1b:
    auVar19[0] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a360);
    auVar19[1] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a361);
    auVar19[2] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a362);
    auVar19[3] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a363);
    auVar19[4] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a364);
    auVar19[5] = -((char)param_2[2] == UNK_14335a365);
    auVar19[6] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14335a366);
    auVar19[7] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14335a367);
    auVar19[8] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14335a368);
    auVar19[9] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14335a369);
    auVar19[10] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14335a36a);
    auVar19[0xb] = -(*(char *)((longlong)param_2 + 0x16) == UNK_14335a36b);
    auVar19[0xc] = -(*(char *)((longlong)param_2 + 0x17) == UNK_14335a36c);
    auVar19[0xd] = -((char)param_2[3] == UNK_14335a36d);
    auVar19[0xe] = -(*(char *)((longlong)param_2 + 0x19) == UNK_14335a36e);
    auVar19[0xf] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_14335a36f);
    auVar11[0] = -((char)*param_2 == UNK_14335a370);
    auVar11[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a371);
    auVar11[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a372);
    auVar11[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a373);
    auVar11[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a374);
    auVar11[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a375);
    auVar11[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a376);
    auVar11[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a377);
    auVar11[8] = -((char)param_2[1] == UNK_14335a378);
    auVar11[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a379);
    auVar11[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a37a);
    auVar11[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a37b);
    auVar11[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a37c);
    auVar11[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a37d);
    auVar11[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a37e);
    auVar11[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a37f);
    auVar11 = auVar11 & auVar19;
    if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    param_1[1] = 0xb;
  }
  *param_1 = 0;
  return;
}

