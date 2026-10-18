// VA 0x1419509d0, PDB extent 837 bytes
// country_core::resources::history::wall_compound_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001419510fe) overlaps instruction at (ram,0x0001419510fd)
    */
/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::_::impl$0::deserialize::impl$2::visit_enum<serde_json::value::de::EnumDeserializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/wall_compound_edit.rs
   Extent: 837 */

int * pdb_1419509d0(int *param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  char cVar10;
  ulonglong uVar12;
  int *piVar13;
  undefined7 uVar15;
  undefined8 uVar14;
  undefined2 uVar16;
  undefined1 *unaff_RBX;
  int iVar17;
  char **ppcVar18;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_90;
  char *apcStack_78 [3];
  longlong lStack_60;
  char acStack_50 [32];
  ulonglong uStack_30;
  char cStack_28;
  undefined1 auStack_27 [15];
  byte bStack_18;
  undefined1 auStack_17 [15];
  uint uVar11;
  
  ppcVar18 = apcStack_78;
  pdb_141be6370(&uStack_30);
  if (cStack_28 == '\a') {
    *(ulonglong *)(param_1 + 2) = uStack_30;
    param_1[0] = 0x14;
    param_1[1] = -0x80000000;
    return param_1;
  }
  auVar9[0xf] = bStack_18;
  auVar9._0_15_ = auStack_27;
  uVar7 = auVar9._12_4_;
  auVar24._1_15_ = auStack_17;
  auVar24[0] = bStack_18;
  uVar8 = auStack_17._11_4_;
  acStack_50[0] = cStack_28;
  uVar12 = (ulonglong)*(int *)(&UNK_14335b308 + (uStack_30 & 0xff) * 4);
  piVar13 = (int *)(&UNK_14335b308 + uVar12);
  cVar10 = (char)piVar13;
  uVar11 = (uint)piVar13;
  uVar15 = (undefined7)((ulonglong)piVar13 >> 8);
  iVar17 = (int)apcStack_78;
  uVar16 = SUB82(param_2,0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_30 & 0xff) {
  case 0:
    pdb_141bea180(param_1,acStack_50,&UNK_14335ae68,4);
    return param_1;
  case 1:
    pdb_141bea8a0(param_1,acStack_50,&UNK_14335aec0,7);
    return param_1;
  case 2:
    pdb_141be8d10(param_1,acStack_50,&UNK_14335af48,6);
    return param_1;
  case 3:
    pdb_141be9420(param_1,acStack_50,&UNK_14335afa8,4);
    return param_1;
  case 4:
    pdb_141beb2c0(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 5:
    pdb_141be89e0(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 6:
    pdb_141be8af0(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 7:
    pdb_141be9c40(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 8:
    pdb_141be9e50(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 9:
    pdb_141bec190(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 10:
    pdb_141be9710(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 0xb:
    pdb_141be88d0(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 0xc:
    pdb_141be9b30(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 0xd:
    pdb_141be9a20(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 0xe:
    pdb_141bea070(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 0xf:
    pdb_141be9f60(param_1,acStack_50,&UNK_14335b018,3);
    return param_1;
  case 0x10:
    pdb_141be87c0(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 0x11:
    pdb_141be8c00(param_1,acStack_50,&UNK_14335b048,4);
    return param_1;
  case 0x12:
    pdb_141beb5d0(param_1,acStack_50,&UNK_14335b088,3);
    return param_1;
  case 0x13:
  case 0x15:
    pdb_141beaab0(param_1,acStack_50,&UNK_14335b0b8,3);
    return param_1;
  case 0x14:
    pdb_141bea590(param_1,acStack_50,&UNK_14335afe8,3);
    return param_1;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x26:
  case 0x29:
    pbVar1 = unaff_RBX + 0xf6601a0;
    *pbVar1 = *pbVar1 & (byte)param_2;
    if (*pbVar1 != 0) {
      unaff_RBX[0xf6601a0] = unaff_RBX[0xf6601a0] - (byte)param_2;
    }
    ppcVar18 = apcStack_78;
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
                 (ushort)((byte)(uVar7 >> 7) & 1) << 0xc | (ushort)((byte)(uVar7 >> 0xf) & 1) << 0xd
                 | (ushort)((byte)(uVar7 >> 0x17) & 1) << 0xe | (ushort)(bStack_18 >> 7) << 0xf) ==
        0xffff) {
      (&UNK_14335b309)[uVar12] = 4;
      break;
    }
    goto LAB_141951100;
  case 0x1a:
    if (*(char *)((longlong)param_2 + 4) != 'h' || (int)*param_2 != 0x70726f4d) goto LAB_141951100;
    goto code_r0x000141950f17;
  case 0x1b:
    piVar13 = (int *)CONCAT71(uVar15,cVar10 + (char)*piVar13);
    *(char *)((longlong)piVar13 + -0x47) = *(char *)((longlong)piVar13 + -0x47) + '\b';
    ppcVar18 = (char **)&stack0xffffffffffffff80;
    uVar5 = in(uVar16);
    *(undefined1 *)unaff_RDI = uVar5;
    if (*(longlong *)((longlong)param_2 + 7) == 0x6e6f69746176656c &&
        (undefined *)*param_2 == &UNK_14335b308) {
      *(char *)((longlong)piVar13 + 1) = '\x06';
      break;
    }
    if (*(longlong *)((longlong)param_2 + 7) != 0x6870726f4d646574 || *param_2 != 0x7461636572706544
       ) goto LAB_141951100;
code_r0x000141950f17:
    *(char *)((longlong)piVar13 + 1) = '\x12';
    break;
  case 0x1c:
    *(char *)piVar13 = (char)*piVar13 + cVar10;
    ppcVar18 = apcStack_78;
    if (*(longlong *)((longlong)param_2 + 5) != 0x657275736f6c636e || *param_2 != 0x6c636e456b72614d
       ) goto LAB_141951100;
    (&UNK_14335b309)[uVar12] = 0x13;
  case 0x28:
    break;
  case 0x1d:
    ppcVar18 = apcStack_78;
    if (((ulonglong)*(ushort *)(param_2 + 1) ^ 0x6c6c | 0x14335b308) != 0) goto LAB_141951100;
    (&UNK_14335b309)[uVar12] = 2;
    break;
  case 0x1e:
    *piVar13 = *piVar13 + uVar11;
    pbVar1 = &UNK_14335b2c1 + uVar12;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + 8;
    if (*pbVar1 == 0) {
      uStack_90 = 0x65676e61;
      if (bVar3 < 0xf8) {
        if (*(longlong *)((longlong)param_2 + 6) == 0x6570795468637241 &&
            (int)*param_2 == 0x4335b308) {
          (&UNK_14335b309)[uVar12] = 8;
          break;
        }
        if (*(longlong *)((longlong)param_2 + 6) == 0x6c6169726574614d &&
            *param_2 == 0x614d65676e616843) {
          (&UNK_14335b309)[uVar12] = 10;
          break;
        }
      }
      ppcVar18 = (char **)&uStack_90;
      if (*(longlong *)((longlong)param_2 + 6) != 0x7374726f70707553 ||
          *param_2 != 0x755365676e616843) goto LAB_141951100;
      (&UNK_14335b309)[uVar12] = 0xf;
    }
    else if (*(longlong *)((longlong)param_2 + 3) == 0x656c79745365676e &&
             (int)*param_2 == 0x4335b308) {
      (&UNK_14335b309)[uVar12] = 9;
    }
    else {
      ppcVar18 = (char **)&stack0xffffffffffffff78;
      if (*(longlong *)((longlong)param_2 + 3) != 0x7472696b5365676e ||
          *param_2 != 0x6b5365676e616843) goto LAB_141951100;
      (&UNK_14335b309)[uVar12] = 0x14;
    }
    break;
  case 0x1f:
    UNK_14335b289 = UNK_14335b289 | 8;
    pcVar6 = (code *)swi(1);
    piVar13 = (int *)(*pcVar6)();
    return piVar13;
  case 0x20:
    piVar13 = (int *)CONCAT71(uVar15,uRama0951005740f6601);
    *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar17;
    goto code_r0x000141950e04;
  case 0x21:
    *piVar13 = *piVar13 + uVar11;
    (&UNK_14335b2c1)[uVar12] = (&UNK_14335b2c1)[uVar12] + '\b';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x25:
    piVar13 = (int *)(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uRam4f893a0d740f6601) & 0xffffffff)
    ;
    *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar17;
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB151(auStack_17 >> 7,0) & 1) << 1
                 | (ushort)(SUB151(auStack_17 >> 0xf,0) & 1) << 2 |
                 (ushort)(SUB151(auStack_17 >> 0x17,0) & 1) << 3 |
                 (ushort)(SUB151(auStack_17 >> 0x1f,0) & 1) << 4 |
                 (ushort)(SUB151(auStack_17 >> 0x27,0) & 1) << 5 |
                 (ushort)(SUB151(auStack_17 >> 0x2f,0) & 1) << 6 |
                 (ushort)(SUB151(auStack_17 >> 0x37,0) & 1) << 7 |
                 (ushort)(SUB151(auStack_17 >> 0x3f,0) & 1) << 8 |
                 (ushort)(SUB151(auStack_17 >> 0x47,0) & 1) << 9 |
                 (ushort)(SUB151(auStack_17 >> 0x4f,0) & 1) << 10 |
                 (ushort)(SUB151(auStack_17 >> 0x57,0) & 1) << 0xb |
                 (ushort)((byte)(uVar8 >> 7) & 1) << 0xc | (ushort)((byte)(uVar8 >> 0xf) & 1) << 0xd
                 | (ushort)((byte)(uVar8 >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auStack_17[0xe] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)piVar13 + 1) = '\x0e';
      break;
    }
    auVar19[0] = -((char)*param_2 == UNK_14335a3b0);
    auVar19[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a3b1);
    auVar19[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a3b2);
    auVar19[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a3b3);
    auVar19[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a3b4);
    auVar19[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a3b5);
    auVar19[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a3b6);
    auVar19[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a3b7);
    auVar19[8] = -((char)param_2[1] == UNK_14335a3b8);
    auVar19[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a3b9);
    auVar19[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a3ba);
    auVar19[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a3bb);
    auVar19[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a3bc);
    auVar19[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a3bd);
    auVar19[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a3be);
    auVar19[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a3bf);
    auVar22[0] = -((char)param_2[2] == UNK_14335a3c0);
    auVar22[1] = -(UNK_14335a3c1 == '\0');
    auVar22[2] = -(UNK_14335a3c2 == '\0');
    auVar22[3] = -(UNK_14335a3c3 == '\0');
    auVar22[4] = -(UNK_14335a3c4 == '\0');
    auVar22[5] = -(UNK_14335a3c5 == '\0');
    auVar22[6] = -(UNK_14335a3c6 == '\0');
    auVar22[7] = -(UNK_14335a3c7 == '\0');
    auVar22[8] = -(UNK_14335a3c8 == '\0');
    auVar22[9] = -(UNK_14335a3c9 == '\0');
    auVar22[10] = -(UNK_14335a3ca == '\0');
    auVar22[0xb] = -(UNK_14335a3cb == '\0');
    auVar22[0xc] = -(UNK_14335a3cc == '\0');
    auVar22[0xd] = -(UNK_14335a3cd == '\0');
    auVar22[0xe] = -(UNK_14335a3ce == '\0');
    auVar22[0xf] = -(UNK_14335a3cf == '\0');
    auVar24 = auVar22 & auVar19;
    goto code_r0x00014195108a;
  case 0x27:
    return piVar13;
  case 0x2a:
    *(int *)(&UNK_14335b308 + unaff_RBP * 8) = *(int *)(&UNK_14335b308 + unaff_RBP * 8) + 0x4335b308
    ;
    *unaff_RBX = 0;
    pbVar1 = &UNK_14335b2c1 + uVar12;
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + 8;
    if (bVar3 < 0xf8) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x000141950e04:
    ppcVar18 = apcStack_78;
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
                 (ushort)((byte)(uVar7 >> 7) & 1) << 0xc | (ushort)((byte)(uVar7 >> 0xf) & 1) << 0xd
                 | (ushort)((byte)(uVar7 >> 0x17) & 1) << 0xe | (ushort)(bStack_18 >> 7) << 0xf) !=
        0xffff) {
LAB_141951100:
      *(undefined8 *)((longlong)ppcVar18 + -8) = 0x14195111e;
      uVar14 = pdb_142d8f140(param_2,param_3,&UNK_14335abf0,0x16);
      *(undefined8 *)(piVar13 + 2) = uVar14;
      *(char *)piVar13 = '\x01';
      return piVar13;
    }
    *(char *)((longlong)piVar13 + 1) = '\x11';
    break;
  case 0x2b:
    param_1 = (int *)((longlong)param_1 + 0xf);
    *param_1 = *param_1 + iVar17;
    if (*param_1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
code_r0x00014195108a:
    ppcVar18 = apcStack_78;
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)piVar13 + 1) = '\x10';
      break;
    }
    goto LAB_141951100;
  case 0x2c:
    auVar20[0] = -(auStack_27[0] == UNK_14335a370);
    auVar20[1] = -(auStack_27[1] == UNK_14335a371);
    auVar20[2] = -(auStack_27[2] == UNK_14335a372);
    auVar20[3] = -(auStack_27[3] == UNK_14335a373);
    auVar20[4] = -(auStack_27[4] == UNK_14335a374);
    auVar20[5] = -(auStack_27[5] == UNK_14335a375);
    auVar20[6] = -(auStack_27[6] == UNK_14335a376);
    auVar20[7] = -(auStack_27[7] == UNK_14335a377);
    auVar20[8] = -(auStack_27[8] == UNK_14335a378);
    auVar20[9] = -(auStack_27[9] == UNK_14335a379);
    auVar20[10] = -(auStack_27[10] == UNK_14335a37a);
    auVar20[0xb] = -(auStack_27[0xb] == UNK_14335a37b);
    auVar20[0xc] = -(auStack_27[0xc] == UNK_14335a37c);
    auVar20[0xd] = -(auStack_27[0xd] == UNK_14335a37d);
    auVar20[0xe] = -(auStack_27[0xe] == UNK_14335a37e);
    auVar20[0xf] = -(bStack_18 == UNK_14335a37f);
    auVar20 = auVar20 & auVar24;
    ppcVar18 = apcStack_78;
    if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141951100;
    (&UNK_14335b309)[uVar12] = 0xb;
    break;
  case 0x2d:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    pcVar6 = (code *)swi(3);
    piVar13 = (int *)(*pcVar6)();
    return piVar13;
  case 0x31:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x39:
    piVar13 = (int *)CONCAT71(uVar15,(cVar10 + ':') - (0x4c < (byte)unaff_RBX));
    *piVar13 = *piVar13 + 0x4335b308;
    break;
  case 0x3a:
    pcVar6 = (code *)swi(3);
    piVar13 = (int *)(*pcVar6)();
    return piVar13;
  case 0x3b:
  case 0x3d:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
                    /* WARNING: Could not recover jumptable at 0x00014195124f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar13 = (int *)(*(code *)(&UNK_14335b308 + param_3))();
    return piVar13;
  case 0x3c:
    *(char *)piVar13 = (char)*piVar13 + cVar10;
    return piVar13;
  case 0x3e:
                    /* WARNING: Could not recover jumptable at 0x00014195118f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar13 = (int *)(*(code *)(&UNK_14335b308 + param_3))();
    return piVar13;
  case 0x3f:
    piVar13 = (int *)CONCAT71(uVar15,uRam710fa30d740f6601);
    *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + iVar17;
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB151(auStack_17 >> 7,0) & 1) << 1
                 | (ushort)(SUB151(auStack_17 >> 0xf,0) & 1) << 2 |
                 (ushort)(SUB151(auStack_17 >> 0x17,0) & 1) << 3 |
                 (ushort)(SUB151(auStack_17 >> 0x1f,0) & 1) << 4 |
                 (ushort)(SUB151(auStack_17 >> 0x27,0) & 1) << 5 |
                 (ushort)(SUB151(auStack_17 >> 0x2f,0) & 1) << 6 |
                 (ushort)(SUB151(auStack_17 >> 0x37,0) & 1) << 7 |
                 (ushort)(SUB151(auStack_17 >> 0x3f,0) & 1) << 8 |
                 (ushort)(SUB151(auStack_17 >> 0x47,0) & 1) << 9 |
                 (ushort)(SUB151(auStack_17 >> 0x4f,0) & 1) << 10 |
                 (ushort)(SUB151(auStack_17 >> 0x57,0) & 1) << 0xb |
                 (ushort)((byte)(uVar8 >> 7) & 1) << 0xc | (ushort)((byte)(uVar8 >> 0xf) & 1) << 0xd
                 | (ushort)((byte)(uVar8 >> 0x17) & 1) << 0xe |
                (ushort)(byte)(auStack_17[0xe] >> 7) << 0xf) == 0xffff) {
      *(char *)((longlong)piVar13 + 1) = '\x03';
      *(char *)piVar13 = '\0';
      return piVar13;
    }
    goto LAB_14195121d;
  case 0x41:
    *(char *)piVar13 = (char)*piVar13 + cVar10;
    return piVar13;
  case 0x46:
    if ((short)param_2[1] == 0x7865 &&
        *(undefined **)(in_FS_OFFSET + (longlong)param_2) == &UNK_14335b308) {
      (&UNK_14335b309)[uVar12] = 0;
      *(char *)piVar13 = '\0';
      return piVar13;
    }
LAB_14195121d:
    *(char *)((longlong)piVar13 + 1) = '\x04';
    *(char *)piVar13 = '\0';
    return piVar13;
  case 0x47:
    out(*param_1,uVar16);
    if (*(short *)((longlong)param_2 + 4) == 0x6572 && (int)*param_2 == 0x4335b308) {
      (&UNK_14335b309)[uVar12] = 2;
      *(char *)piVar13 = '\0';
      return piVar13;
    }
    goto LAB_141951334;
  case 0x48:
  case 0x49:
  case 0x4e:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
    LOCK();
    uVar4 = *unaff_RDI;
    *unaff_RDI = (int)param_2;
    UNLOCK();
    *piVar13 = *piVar13 + uVar11;
    (&UNK_14335b295)[uVar12] = (&UNK_14335b295)[uVar12] + '\b';
                    /* WARNING: Could not recover jumptable at 0x00014195136f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar13 = (int *)(*(code *)(&UNK_14335b308 + *(int *)(&UNK_14335b308 + param_3 * 4)))
                               (&UNK_14335b308,uVar4,
                                &UNK_14335b308 + *(int *)(&UNK_14335b308 + param_3 * 4));
    return piVar13;
  case 0x4a:
    auVar21[0] = -(auStack_27[0] == UNK_14335a410);
    auVar21[1] = -(auStack_27[1] == UNK_14335a411);
    auVar21[2] = -(auStack_27[2] == UNK_14335a412);
    auVar21[3] = -(auStack_27[3] == UNK_14335a413);
    auVar21[4] = -(auStack_27[4] == UNK_14335a414);
    auVar21[5] = -(auStack_27[5] == UNK_14335a415);
    auVar21[6] = -(auStack_27[6] == UNK_14335a416);
    auVar21[7] = -(auStack_27[7] == UNK_14335a417);
    auVar21[8] = -(auStack_27[8] == UNK_14335a418);
    auVar21[9] = -(auStack_27[9] == UNK_14335a419);
    auVar21[10] = -(auStack_27[10] == UNK_14335a41a);
    auVar21[0xb] = -(auStack_27[0xb] == UNK_14335a41b);
    auVar21[0xc] = -(auStack_27[0xc] == UNK_14335a41c);
    auVar21[0xd] = -(auStack_27[0xd] == UNK_14335a41d);
    auVar21[0xe] = -(auStack_27[0xe] == UNK_14335a41e);
    auVar21[0xf] = -(bStack_18 == UNK_14335a41f);
    auVar23[0] = -((char)(short)param_2[2] == UNK_142e50630);
    auVar23[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142e50631);
    auVar23[2] = -(UNK_142e50632 == '\0');
    auVar23[3] = -(UNK_142e50633 == '\0');
    auVar23[4] = -(UNK_142e50634 == '\0');
    auVar23[5] = -(UNK_142e50635 == '\0');
    auVar23[6] = -(UNK_142e50636 == '\0');
    auVar23[7] = -(UNK_142e50637 == '\0');
    auVar23[8] = -(UNK_142e50638 == '\0');
    auVar23[9] = -(UNK_142e50639 == '\0');
    auVar23[10] = -(UNK_142e5063a == '\0');
    auVar23[0xb] = -(UNK_142e5063b == '\0');
    auVar23[0xc] = -(UNK_142e5063c == '\0');
    auVar23[0xd] = -(UNK_142e5063d == '\0');
    auVar23[0xe] = -(UNK_142e5063e == '\0');
    auVar23[0xf] = -(UNK_142e5063f == '\0');
    auVar24 = auVar23 & auVar21;
  case 0x54:
    if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_14335b309)[uVar12] = 2;
      *(char *)piVar13 = '\0';
      return piVar13;
    }
LAB_141951334:
    *(char *)((longlong)piVar13 + 1) = '\x05';
    *(char *)piVar13 = '\0';
code_r0x00014195133c:
    return piVar13;
  case 0x4b:
    apcStack_78[0] = (char *)0x68676965;
    if (piVar13 == (int *)0x0) {
      pcVar6 = (code *)swi(3);
      piVar13 = (int *)(*pcVar6)();
      return piVar13;
    }
    piVar13 = (int *)(ulonglong)(uVar11 ^ *(uint *)((longlong)param_2 + 3));
    if (param_3 == 0 && *(int *)(&UNK_14335b33b + unaff_GS_OFFSET + uVar12) * 0x6cb8490a == 0) {
      *(char *)((longlong)piVar13 + 1) = '\x01';
      *(char *)piVar13 = '\0';
      return piVar13;
    }
    goto LAB_141951334;
  case 0x4c:
    if (uVar12 < 0xfffffffebcca4cf8 && piVar13 != (int *)0x0) {
      cRam00000001447e3b0b = cRam00000001447e3b0b + (char)((ulonglong)param_2 >> 8);
      *(char *)piVar13 = '\0';
      return piVar13;
    }
    out(*param_1,uVar16);
    if (*(longlong *)((longlong)param_2 + 5) == 0x64695f726f6c6f63 &&
        (undefined *)*param_2 == &UNK_14335b308) {
      (&UNK_14335b309)[uVar12] = 4;
      *(char *)piVar13 = '\0';
      return piVar13;
    }
    goto LAB_141951334;
  case 0x4d:
    goto code_r0x00014195133c;
  case 0x4f:
    (&UNK_14335b289)[uVar12] = (&UNK_14335b289)[uVar12] | 0x77;
    (&UNK_14335b311)[uVar12] = (&UNK_14335b311)[uVar12] + 'w';
    return piVar13;
  case 0x55:
    *(char *)(unaff_RDI + 0x8ff97d6) = *(char *)(unaff_RDI + 0x8ff97d6) + '\x01';
    UNK_14335b360 = UNK_14335b360 + '\x01';
    *(char *)((longlong)param_2 + 0x18fe5f57) = *(char *)((longlong)param_2 + 0x18fe5f57) + '\x01';
    *(char *)((longlong)param_1 + 0x59) = *(char *)((longlong)param_1 + 0x59) + '\x01';
    apcStack_78[0][(longlong)unaff_RBX * 2 + 0x59c7fe5f] =
         apcStack_78[0][(longlong)unaff_RBX * 2 + 0x59c7fe5f] + -1;
    *apcStack_78[0] = *apcStack_78[0] + '\x01';
    pcVar2 = (char *)(lStack_60 + 0x5797fe5f + (longlong)unaff_RBX * 2);
    *pcVar2 = *pcVar2 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)piVar13 = '\0';
  return piVar13;
}

