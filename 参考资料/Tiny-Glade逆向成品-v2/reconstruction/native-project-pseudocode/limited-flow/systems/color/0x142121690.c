// VA 0x142121690, PDB extent 1623 bytes
// system_color::style_changes::StyleScene::apply
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142123680) overlaps instruction at (ram,0x00014212367f)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::style_changes::StyleScene::apply
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
   Extent: 1623 */

void pdb_142121690(char *param_1,longlong param_2,byte param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  uint *puVar13;
  int *piVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte bVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  uint *unaff_RBP;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  uint *puVar31;
  uint *puVar32;
  int iVar33;
  uint *puVar34;
  bool bVar35;
  bool bVar36;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  float unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined8 auStack_290 [46];
  undefined8 uStack_120;
  float afStack_118 [6];
  ulonglong auStack_100 [5];
  undefined1 auStack_d8 [32];
  undefined8 auStack_b8 [4];
  uint uStack_98;
  byte bStack_91;
  ulonglong auStack_90 [2];
  uint *puStack_80;
  uint auStack_78 [4];
  undefined8 auStack_68 [5];
  
  puVar27 = auStack_d8;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    puVar31 = *(uint **)(param_2 + 8);
    uVar29 = *(longlong *)(param_2 + 0x10) << 5;
    puStack_80 = auStack_78;
    if (param_3 == 0) {
      puStack_80 = auStack_78 + 3;
    }
    bVar7 = param_3 ^ 1;
    puVar23 = (uint *)(ulonglong)bVar7;
    auStack_90[0] = (ulonglong)param_3;
    bStack_91 = param_3;
    do {
      puVar11 = (uint *)0x0;
      puVar32 = (uint *)((ulonglong)(byte)*puVar31 - 0xf);
      if ((ulonglong)(byte)*puVar31 < 0x10) {
        puVar32 = puVar11;
      }
      iVar28 = (int)puVar32;
      if (iVar28 - 2U < 2) {
        puVar34 = (uint *)0xc;
LAB_1421217f0:
        uVar16 = *(undefined8 *)(param_1 + 0xc0);
        uVar19 = (ulonglong)*(uint *)((longlong)puVar31 + (longlong)puVar34);
        *(undefined8 *)(puVar27 + -8) = 0x142121801;
        lVar12 = pdb_140c3ee20(uVar16,uVar19);
        if (lVar12 != 3) {
          **(undefined4 **)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xfc);
          uVar16 = *(undefined8 *)(param_1 + 0xc0);
          uVar2 = *(undefined8 *)(param_1 + 0xe0);
          *(undefined **)(puVar27 + 0x28) = &UNK_14345fb00;
          *(char **)(puVar27 + 0x20) = param_1 + 0x100;
          *(undefined8 *)(puVar27 + 0x30) = 0xc;
          *(undefined8 *)(puVar27 + -8) = 0x142121850;
          pdb_1428ae3f0(uVar2,lVar12,uVar19,uVar16);
        }
        **(undefined4 **)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xdc);
        uVar16 = *(undefined8 *)(param_1 + 0xc0);
        uVar30 = *(undefined4 *)((longlong)puVar31 + (longlong)puVar34);
        *(undefined8 *)(puVar27 + -8) = 0x142121870;
        puVar13 = (uint *)pdb_140c40a30(uVar16,uVar30);
        if (puVar13 == (uint *)0x0) goto LAB_142121720;
        if (iVar28 == 3) {
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 1)];
          *(undefined8 *)(puVar27 + -8) = 0x14212170d;
          puVar11 = (uint *)pdb_1409014f0(puVar13 + 0xe,&UNK_14345fb70);
          *puVar11 = uVar10;
          goto LAB_142121720;
        }
        if (iVar28 == 2) {
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 1)];
code_r0x0001421218cc:
          puVar13[0x14] = uVar10;
          goto LAB_142121720;
        }
        puVar22 = (uint *)&UNK_14345fcd0;
        uVar19 = (ulonglong)*(int *)(&UNK_14345fcd0 + (ulonglong)(byte)puVar31[1] * 4);
        bVar35 = 0xfffffffebcba032f < uVar19;
        puVar20 = (uint *)(&UNK_14345fcd0 + uVar19);
        bVar36 = puVar20 == (uint *)0x0;
        bVar17 = (byte)puVar20;
        bVar8 = (byte)puVar13;
        puVar21 = puVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((byte)puVar31[1]) {
        case 0:
          bVar8 = *(byte *)((longlong)puVar31 + (6 - *(longlong *)(puVar27 + 0x48)));
          *(undefined8 *)(puVar27 + -8) = 0x1421218bd;
          lVar12 = pdb_140901490(puVar13 + 0xe,&UNK_14345fb10);
          *(byte *)(lVar12 + 0x16) = bVar8;
          break;
        case 1:
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 2)];
          goto code_r0x0001421218cc;
        case 2:
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 2)];
          *(undefined8 *)(puVar27 + -8) = 0x14212190e;
          lVar12 = pdb_140901490(puVar13 + 0xe,&UNK_14345fb28);
          *(uint *)(lVar12 + 0xc) = uVar10;
          break;
        case 3:
          puVar11 = (uint *)(ulonglong)
                            *(byte *)((longlong)puVar31 + (6 - *(longlong *)(puVar27 + 0x48)));
          *(undefined8 *)(puVar27 + -8) = 0x142121937;
          puVar13 = (uint *)pdb_140901490(puVar13 + 0xe,&UNK_14345fb40);
          goto code_r0x000142121937;
        case 4:
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 2)];
          *(undefined8 *)(puVar27 + -8) = 0x1421218ec;
          lVar12 = pdb_140901490(puVar13 + 0xe,&UNK_14345fb58);
          *(uint *)(lVar12 + 8) = uVar10;
          break;
        case 5:
          *puVar23 = *puVar23 >> 0x16 | *puVar23 << 10;
          pbVar15 = (byte *)((longlong)puVar13 + -0x73);
          *pbVar15 = *pbVar15 >> 5 | *pbVar15 << 3;
          uVar10 = in(0x33);
          *(int *)((ulonglong)uVar10 + 99) = *(int *)((ulonglong)uVar10 + 99) + (int)puVar20;
          bVar8 = (char)uVar10 + 0x81;
          puVar20 = puVar32;
          goto code_r0x000142121798;
        case 6:
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          goto code_r0x000142121b5b;
        case 7:
          unaff_RBP = (uint *)0x4c018904;
          puVar20 = (uint *)((ulonglong)param_1 & 0xffffffff);
          goto code_r0x000142121a97;
        case 8:
          goto code_r0x000142121ad5;
        case 9:
          *(undefined1 **)(puVar27 + -8) = puVar27;
          *(byte *)puVar13 = (byte)*puVar13;
          puVar27 = puVar27 + -8;
          goto code_r0x0001421219b1;
        case 10:
          goto code_r0x000142121b9e;
        case 0xb:
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          goto code_r0x000142121bdf;
        case 0xc:
          goto code_r0x000142121b1a;
        case 0xd:
          bVar35 = bVar7 == uRam000000000000001c._4_4_;
          goto code_r0x000142121c54;
        case 0xe:
          goto code_r0x000142121a72;
        case 0xf:
          puVar20 = (uint *)0x20;
          goto code_r0x000142121c22;
        case 0x10:
          do {
          } while (-0x14345fcd1 < (longlong)uVar19);
code_r0x000142121937:
          *(byte *)(puVar13 + 5) = (byte)puVar11;
          break;
        case 0x11:
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          goto code_r0x0001421219ef;
        default:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x13:
        case 0x18:
          cRam000000000000ccbd = cRam000000000000ccbd + bVar17;
        case 0x17:
          cRam000000000000d085 = cRam000000000000d085 + bVar17;
        case 0x19:
          (&UNK_143470155)[uVar19] = (&UNK_143470155)[uVar19] + bVar17;
        case 0x1a:
          cRam000000000000b8bd = cRam000000000000b8bd + bVar8;
          cVar9 = (byte)uRam0000000000000000 + bVar17;
          uRam0000000000000000 = CONCAT11(uRam0000000000000000._1_1_,cVar9);
          bVar35 = cVar9 == '\0';
          puVar20 = puVar32;
          goto code_r0x000142121f0a;
        case 0x14:
        case 0x1b:
          goto code_r0x000142121f1a;
        case 0x15:
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          puVar20 = puVar32;
          goto code_r0x000142121f09;
        case 0x1c:
          puVar26 = (undefined8 *)(puVar27 + -8);
          puVar27 = puVar27 + -8;
          *puVar26 = 0xb187d83;
          puVar20 = puVar32;
          goto code_r0x000142121f18;
        case 0x1d:
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          pbVar15 = (byte *)((longlong)puVar13 + -0x73);
          bVar35 = CARRY1(*pbVar15,bVar17);
          *pbVar15 = *pbVar15 + bVar17;
          bVar36 = *pbVar15 == 0;
          puVar25 = (undefined8 *)(puVar27 + -8);
          puVar27 = puVar27 + -8;
          *puVar25 = 0xb187d83;
          puVar20 = puVar32;
          goto code_r0x000142121f18;
        case 0x1e:
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          pbVar15 = (byte *)((longlong)unaff_RBP + (longlong)puVar20 * 4 + 0x2d);
          *pbVar15 = *pbVar15 + bVar17;
          puVar23 = puVar22;
          goto code_r0x000142123440;
        case 0x1f:
          *(undefined8 *)(puVar27 + -8) = 0x1421236ef;
          pdb_140a1aa80();
          puVar20 = puVar32;
          goto LAB_142123480;
        case 0x20:
          *(undefined8 *)(puVar27 + -8) = 0x14212361c;
          puVar13 = (uint *)pub_1406abab0(0x50,8);
          puVar20 = puVar32;
          if (puVar13 == (uint *)0x0) {
            *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x142123a70;
            pdb_142dc7e11(8,0x50);
          }
          goto code_r0x000142123625;
        case 0x21:
          goto code_r0x000142123644;
        case 0x22:
          *(byte *)puVar13 = (byte)*puVar13 ^ bVar8;
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          *(undefined8 *)(puVar27 + -8) = 0x14212351b;
          pbVar15 = pub_1406abab0((ulonglong)puVar20,8);
          if (pbVar15 == (byte *)0x0) {
            *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x142123b0c;
            pdb_142dc7e11(8,0x30);
          }
          pbVar15[0] = 1;
          pbVar15[1] = 0;
          pbVar15[2] = 0;
          pbVar15[3] = 0;
          pbVar15[4] = 0;
          pbVar15[5] = 0;
          pbVar15[6] = 0;
          pbVar15[7] = 0;
          pbVar15[8] = 1;
          pbVar15[9] = 0;
          pbVar15[10] = 0;
          pbVar15[0xb] = 0;
          pbVar15[0xc] = 0;
          pbVar15[0xd] = 0;
          pbVar15[0xe] = 0;
          pbVar15[0xf] = 0;
          *(uint **)(pbVar15 + 0x10) = puVar23;
          puVar20 = puVar32;
          goto code_r0x000142123537;
        case 0x23:
          *(byte *)((longlong)puVar13 + -0x39) = *(byte *)((longlong)puVar13 + -0x39) + bVar17;
          *(byte *)puVar20 = (byte)*puVar20 | bVar8;
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          *param_1 = (*param_1 - bVar8) - (3 < bVar8);
          puVar20 = puVar32;
          goto code_r0x00014212372e;
        case 0x24:
          *(undefined8 *)(puVar27 + -8) = 0x142123793;
          pdb_140a1aa80();
          puVar20 = puVar32;
          goto LAB_142123480;
        case 0x25:
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x26:
          goto code_r0x000142123868;
        case 0x27:
          return;
        case 0x28:
          goto code_r0x0001421237fb;
        case 0x29:
          *(byte *)puVar13 = (byte)*puVar13 + bVar8;
          *(byte *)puVar20 = (byte)*puVar20 + bVar8;
          puVar20 = puVar32;
          goto code_r0x000142123470;
        case 0x2a:
          goto code_r0x00014212357a;
        }
      }
      else {
        puVar34 = (uint *)0x10;
        if (puVar32 != (uint *)0x0) goto LAB_1421217f0;
        puVar20 = *(uint **)param_1;
        unaff_RBP = *(uint **)(puVar31 + 6);
        *(undefined8 *)(puVar27 + -8) = 0x142121781;
        puVar22 = unaff_RBP;
        lVar12 = pdb_140b0e4b0(puVar20);
        if (lVar12 == 0) goto LAB_142121720;
        bVar8 = (byte)*puVar31 - 3;
        if ((byte)*puVar31 < 3) {
          bVar8 = 0xb;
        }
code_r0x000142121798:
        uVar19 = (ulonglong)*(int *)(&UNK_14345fce4 + (ulonglong)bVar8 * 4);
        puVar13 = (uint *)(&UNK_14345fce4 + uVar19);
        bVar35 = puVar13 == (uint *)0x0;
        puVar32 = puVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar8) {
        case 0:
          bVar8 = *(byte *)((longlong)puVar31 + (2 - *(longlong *)(puVar27 + 0x48)));
          *(undefined8 *)(puVar27 + -8) = 0x1421217ca;
          lVar12 = pdb_140b0e1e0(puVar20,unaff_RBP,&UNK_14345faa0);
          if (*(byte *)(lVar12 + 0x69) != bVar8) {
            **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
            *(undefined8 *)(puVar27 + -8) = 0x1421217eb;
            pdb_140b0e2c0(puVar20,unaff_RBP,bVar8);
          }
          break;
        case 1:
          bVar8 = *(byte *)((longlong)puVar31 + (2 - *(longlong *)(puVar27 + 0x48)));
          puVar34 = (uint *)(ulonglong)bVar8;
          *(undefined8 *)(puVar27 + -8) = 0x142121b8c;
          lVar12 = pdb_140b0e1e0(puVar20,unaff_RBP,&UNK_14345fab8);
          if (*(byte *)(lVar12 + 0x6e) != bVar8) {
            **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
code_r0x000142121b9e:
            piVar14 = (int *)((longlong)puVar20 * 5 + -0xf);
            *piVar14 = *piVar14 + (int)puVar20;
            *(undefined8 *)(puVar27 + -8) = 0x142121bad;
            pdb_140b0e1c0(puVar20,unaff_RBP,puVar34);
          }
          break;
        case 2:
          bVar8 = *(byte *)((longlong)puVar31 + (2 - *(longlong *)(puVar27 + 0x48)));
          puVar34 = (uint *)(ulonglong)bVar8;
          *(undefined8 *)(puVar27 + -8) = 0x142121ac3;
          lVar12 = pdb_140b0e1e0(puVar20,unaff_RBP,&UNK_14345fad0);
          if (*(byte *)(lVar12 + 0x6c) != bVar8) {
            **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
code_r0x000142121ad5:
            piVar14 = (int *)((longlong)puVar20 * 5 + -0xf);
            *piVar14 = *piVar14 + (int)puVar20;
            *(undefined8 *)(puVar27 + -8) = 0x142121ae4;
            pdb_140b0e410(puVar20,unaff_RBP,puVar34);
          }
          break;
        case 3:
          unaff_XMM6_Da = (float)puVar31[(longlong)((longlong)puVar23 + 1)];
          unaff_XMM6_Db = 0;
          unaff_XMM6_Dc = 0;
          unaff_XMM6_Dd = 0;
          *(undefined8 *)(puVar27 + -8) = 0x142121b02;
          lVar12 = pdb_140b0e1e0(puVar20,unaff_RBP,&UNK_14345fae8);
          if ((*(float *)(lVar12 + 0x60) != unaff_XMM6_Da) ||
             (NAN(*(float *)(lVar12 + 0x60)) || NAN(unaff_XMM6_Da))) {
            **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
code_r0x000142121b1a:
            piVar14 = (int *)((longlong)puVar20 * 5 + -0xf);
            *piVar14 = *piVar14 + (int)puVar20;
            *(undefined8 *)(puVar27 + -8) = 0x142121b29;
            pdb_140b0e430(puVar20,unaff_RBP,unaff_XMM6_Da);
          }
          break;
        case 4:
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 1)];
          puVar22 = (uint *)(ulonglong)uVar10;
          **(undefined4 **)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1d4);
          puVar11 = *(uint **)(param_1 + 0x1b8);
          puVar34 = *(uint **)(puVar11 + 0xc);
          puVar32 = *(uint **)(puVar11 + 0x10);
          if (puVar34 == *(uint **)(puVar11 + 8)) {
code_r0x0001421219ef:
            *(int *)(puVar27 + 0x40) = (int)puVar22;
            *(undefined8 *)(puVar27 + -8) = 0x1421219fc;
            pdb_142d7e830(puVar11 + 8);
code_r0x000142121c9b:
            uVar10 = *(uint *)(puVar27 + 0x40);
          }
          goto code_r0x000142121c9f;
        case 5:
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 1)];
          puVar22 = (uint *)(ulonglong)uVar10;
          **(undefined4 **)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 500);
          puVar11 = *(uint **)(param_1 + 0x1d8);
          puVar34 = *(uint **)(puVar11 + 0xc);
          puVar32 = *(uint **)(puVar11 + 0x10);
          if (puVar34 == *(uint **)(puVar11 + 8)) {
code_r0x000142121bdf:
            *(int *)(puVar27 + 0x40) = (int)puVar22;
            *(undefined8 *)(puVar27 + -8) = 0x142121bec;
            pdb_142d7e830(puVar11 + 8);
            goto code_r0x000142121c9b;
          }
          goto code_r0x000142121c9f;
        case 6:
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 1)];
          puVar22 = (uint *)(ulonglong)uVar10;
          **(undefined4 **)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x214);
          puVar11 = *(uint **)(param_1 + 0x1f8);
          puVar34 = *(uint **)(puVar11 + 0xc);
          puVar32 = *(uint **)(puVar11 + 0x10);
          if (puVar34 == *(uint **)(puVar11 + 8)) {
            puVar20 = puVar11 + 8;
code_r0x000142121c22:
            *(int *)(puVar27 + 0x40) = (int)puVar22;
            *(undefined8 *)(puVar27 + -8) = 0x142121c2b;
            pdb_142d7e830(puVar20);
            goto code_r0x000142121c9b;
          }
          goto code_r0x000142121c9f;
        case 7:
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 1)];
          puVar22 = (uint *)(ulonglong)uVar10;
          **(undefined4 **)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x234);
          puVar11 = *(uint **)(param_1 + 0x218);
          puVar34 = *(uint **)(puVar11 + 0xc);
          puVar32 = *(uint **)(puVar11 + 0x10);
          if (puVar34 == *(uint **)(puVar11 + 8)) {
code_r0x000142121b5b:
            *(int *)(puVar27 + 0x40) = (int)puVar22;
            *(undefined8 *)(puVar27 + -8) = 0x142121b68;
            pdb_142d7e830(puVar11 + 8);
            goto code_r0x000142121c9b;
          }
          goto code_r0x000142121c9f;
        case 8:
          uVar10 = puVar31[(longlong)((longlong)puVar23 + 1)];
          **(undefined4 **)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x254);
          puVar11 = *(uint **)(param_1 + 0x238);
          puVar34 = *(uint **)(puVar11 + 0xc);
          puVar32 = *(uint **)(puVar11 + 0x10);
          if (puVar34 == *(uint **)(puVar11 + 8)) {
            *(uint *)(puVar27 + 0x40) = uVar10;
            *(undefined8 *)(puVar27 + -8) = 0x142121c9b;
            pdb_142d7e830(puVar11 + 8);
            goto code_r0x000142121c9b;
          }
          goto code_r0x000142121c9f;
        case 9:
          **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
code_r0x000142121a97:
          *(undefined8 *)(puVar27 + -8) = 0x142121a9f;
          pdb_140b0e490(puVar20,unaff_RBP);
          break;
        case 10:
          puVar22 = (uint *)(ulonglong)puVar31[(longlong)((longlong)puVar23 + 1)];
          **(undefined4 **)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x274);
          puVar11 = *(uint **)(param_1 + 600);
          puVar34 = *(uint **)(puVar11 + 0xc);
          puVar32 = *(uint **)(puVar11 + 0x10);
          bVar35 = puVar34 == *(uint **)(puVar11 + 8);
code_r0x000142121c54:
          uVar10 = (uint)puVar22;
          if (bVar35) {
            *(uint *)(puVar27 + 0x40) = uVar10;
            *(undefined8 *)(puVar27 + -8) = 0x142121c63;
            pdb_142d7e830(puVar11 + 8);
            goto code_r0x000142121c9b;
          }
code_r0x000142121c9f:
          lVar12 = *(longlong *)(puVar11 + 10);
          *(uint **)(lVar12 + (longlong)puVar34 * 0x18) = puVar32;
          *(uint **)(lVar12 + 8 + (longlong)puVar34 * 0x18) = unaff_RBP;
          *(uint *)(lVar12 + 0x10 + (longlong)puVar34 * 0x18) = uVar10;
          *(undefined1 *)(lVar12 + 0x14 + (longlong)puVar34 * 0x18) = 0;
          *(byte **)(puVar11 + 0xc) = (byte *)((longlong)puVar34 + 1);
          *(longlong *)(puVar11 + 0x10) = *(longlong *)(puVar11 + 0x10) + 1;
          break;
        case 0xb:
          *(undefined8 *)(puVar27 + 0x70) = *(undefined8 *)(puVar31 + 4);
          uVar10 = puVar31[1];
          uVar18 = puVar31[2];
          uVar6 = puVar31[3];
          *(uint *)(puVar27 + 0x60) = *puVar31;
          *(uint *)(puVar27 + 100) = uVar10;
          *(uint *)(puVar27 + 0x68) = uVar18;
          *(uint *)(puVar27 + 0x6c) = uVar6;
          **(undefined4 **)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x294);
          puVar32 = *(uint **)(param_1 + 0x278);
          puVar34 = *(uint **)(puVar32 + 0xc);
          uVar16 = *(undefined8 *)(puVar32 + 0x10);
          if (puVar34 == *(uint **)(puVar32 + 8)) {
            *(undefined8 *)(puVar27 + -8) = 0x142121988;
            pdb_142d7e6e0(puVar32 + 8);
          }
          puVar13 = *(uint **)(puVar32 + 10);
          puVar20 = (uint *)((longlong)puVar34 * 0x20);
          *(undefined8 *)(puVar13 + (longlong)puVar34 * 8) = uVar16;
          *(uint **)(puVar13 + 2 + (longlong)puVar34 * 8) = unaff_RBP;
          puVar5 = *(undefined8 **)(puVar27 + 0x58);
          *(undefined8 *)(puVar13 + 4 + (longlong)puVar34 * 8) = *puVar5;
          (puVar13 + 6)[(longlong)puVar34 * 8] = *(uint *)(puVar5 + 1);
code_r0x0001421219b1:
          *(byte *)((longlong)(puVar13 + 7) + (longlong)puVar20) = 0;
          *(byte **)(puVar32 + 0xc) = (byte *)((longlong)puVar34 + 1);
          goto code_r0x000142121a79;
        case 0xc:
          bVar8 = *(byte *)((longlong)puVar31 + 1);
          bVar17 = *(byte *)((longlong)puVar31 + 2);
          if (puVar27[0x47] != '\0') {
            bVar17 = bVar8;
          }
          **(undefined4 **)(param_1 + 0x2a8) = *(undefined4 *)(param_1 + 0x2b4);
          puVar32 = *(uint **)(param_1 + 0x298);
          puVar11 = *(uint **)(puVar32 + 0xc);
          uVar16 = *(undefined8 *)(puVar32 + 0x10);
          if (puVar11 == *(uint **)(puVar32 + 8)) {
            *(uint *)(puVar27 + 0x40) = (uint)bVar8;
            *(undefined8 *)(puVar27 + 0x50) = uVar16;
            *(undefined8 *)(puVar27 + -8) = 0x142121a4a;
            pdb_142d7e830(puVar32 + 8);
            uVar16 = *(undefined8 *)(puVar27 + 0x50);
            bVar8 = (byte)*(undefined4 *)(puVar27 + 0x40);
          }
          lVar12 = *(longlong *)(puVar32 + 10);
          *(undefined8 *)(lVar12 + (longlong)puVar11 * 0x18) = uVar16;
          *(uint **)(lVar12 + 8 + (longlong)puVar11 * 0x18) = unaff_RBP;
          *(byte *)(lVar12 + 0x10 + (longlong)puVar11 * 0x18) = bVar8;
          *(byte *)(lVar12 + 0x11 + (longlong)puVar11 * 0x18) = bVar17;
          *(undefined1 *)(lVar12 + 0x12 + (longlong)puVar11 * 0x18) = 0;
code_r0x000142121a72:
          *(byte **)(puVar32 + 0xc) = (byte *)((longlong)puVar11 + 1);
code_r0x000142121a79:
          *(longlong *)(puVar32 + 0x10) = *(longlong *)(puVar32 + 0x10) + 1;
          break;
        default:
          *(byte *)puVar13 = (byte)*puVar13 + (char)puVar13;
          goto code_r0x000142121f03;
        case 0xe:
        case 0x13:
          unaff_RBP = (uint *)0xb8;
code_r0x000142121f09:
          puVar13 = (uint *)(ulonglong)((int)unaff_RBP + 0x68);
          goto code_r0x000142121f14;
        case 0xf:
        case 0x16:
          puVar31 = (uint *)(&UNK_14345fc71 + uVar19);
          *puVar31 = *puVar31 >> 1 | (uint)((*puVar31 & 1) != 0) << 0x1f;
          *(undefined8 *)(puVar27 + -8) = 0xffffffff8d48e1ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x10:
          goto code_r0x000142121f1a;
        case 0x12:
          goto code_r0x000142121f0a;
        case 0x14:
          goto code_r0x000142121f10;
        case 0x15:
          bVar35 = (byte)uRam0000000000000000 < 0xe4 ||
                   (byte)((byte)uRam0000000000000000 + 0x1c) < (0xfffffffebcba031b < uVar19);
          cVar9 = ((byte)uRam0000000000000000 + 0x1c) - (0xfffffffebcba031b < uVar19);
          uRam0000000000000000 = CONCAT11(uRam0000000000000000._1_1_,cVar9);
          bVar36 = cVar9 == '\0';
          goto code_r0x000142121f18;
        case 0x17:
          goto code_r0x000142121f27;
        case 0x18:
          uRam000000000000000c =
               CONCAT26(in_FPULastInstructionOpcode,(int6)in_FPUInstructionPointer);
          uRam0000000000000000 = in_FPUControlWord;
          uRam0000000000000004 = in_FPUStatusWord;
          uRam0000000000000008 = in_FPUTagWord;
          uRam0000000000000014 = in_FPUDataPointer;
          _uRam000000000000001c = in_ST0;
          Ram0000000000000026 = in_ST1;
          Ram0000000000000030 = in_ST2;
          Ram000000000000003a = in_ST3;
          Ram0000000000000044 = in_ST4;
          Ram000000000000004e = in_ST5;
          Ram0000000000000058 = in_ST6;
          Ram0000000000000062 = in_ST7;
          *(int *)(&UNK_14345fd47 + uVar19) = *(int *)(&UNK_14345fd47 + uVar19) + 0x4345fce4;
          goto code_r0x000142121f27;
        case 0x19:
          *(ulonglong *)(unaff_RBP + -0x16) = (ulonglong)*(uint *)(&UNK_14345fcfc + uVar19);
          *(undefined8 *)(unaff_RBP + -0x14) = *(undefined8 *)(&UNK_14345fce8 + uVar19);
          unaff_RBP[-0x18] = 10;
          unaff_RBP[-0x17] = 0x80000000;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
code_r0x000142123470:
          puVar22 = unaff_RBP + -0x18;
          *(undefined8 *)(puVar27 + -8) = 0x14212347c;
          pdb_140a1aa80(uVar29);
          goto LAB_142123480;
        case 0x1a:
          *(undefined8 *)(puVar27 + -8) = 0x142123703;
          pdb_14007ee60();
          *(undefined8 *)(puVar27 + -8) = 0x142123712;
          puVar13 = (uint *)pub_1406abab0(0x30,8);
          if (puVar13 == (uint *)0x0) {
            *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x142123a8c;
            pdb_142dc7e11(8,0x30);
          }
          puVar13[0] = 1;
          puVar13[1] = 0;
          puVar13[2] = 1;
          puVar13[3] = 0;
          *(undefined1 *)(puVar13 + 6) = 6;
          goto code_r0x00014212372e;
        case 0x1b:
          puVar13 = (uint *)(ulonglong)((uint)puVar13 ^ 0x48000004);
          *puVar13 = 1;
code_r0x000142123625:
          puVar13[0] = 1;
          puVar13[1] = 0;
          puVar13[2] = 1;
          puVar13[3] = 0;
          *(byte *)(puVar13 + 4) = 4;
          *(byte *)((longlong)puVar13 + 0x11) = bVar7;
          *(byte *)((longlong)puVar13 + 0x12) = (byte)uVar29;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar32 = puVar20;
          goto code_r0x000142123644;
        case 0x1c:
code_r0x000142123644:
          *(uint **)(unaff_RBP + -0x16) = puVar13;
          unaff_RBP[-0x18] = 8;
          unaff_RBP[-0x17] = 0;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
          puVar22 = unaff_RBP + -0x18;
          *(undefined8 *)(puVar27 + -8) = 0x14212366d;
          pdb_140ae5180(puVar31,puVar22,&UNK_14345fc78);
          param_1 = (char *)0xb;
          puVar11 = puVar31;
          puVar31 = puVar32;
          puVar20 = *(uint **)(unaff_RBP + 0x36);
          goto LAB_142123480;
        case 0x1d:
          uVar10 = (uint)puVar13 + 0xc7480000;
          pbVar15 = (byte *)(ulonglong)uVar10;
          bVar7 = (byte)uVar10;
          UNK_14345fce4 = UNK_14345fce4 + bVar7;
          *pbVar15 = *pbVar15 + bVar7;
          pbVar15[-0x39] = pbVar15[-0x39] - 0x1c;
          UNK_14345fce4 = UNK_14345fce4 | bVar7;
          *pbVar15 = *pbVar15 + bVar7;
          pbVar1 = pbVar15 + -0x77;
          *pbVar1 = *pbVar1 - 0x1c;
          if ((char)*pbVar1 < '\0') {
            *pbVar15 = *pbVar15 + bVar7;
          }
code_r0x000142123537:
          *(uint *)(pbVar15 + 0x20) = unaff_RBP[-0x16];
          *(undefined8 *)(pbVar15 + 0x18) = *(undefined8 *)(unaff_RBP + -0x18);
          *(uint *)(pbVar15 + 0x2c) = unaff_RBP[0x2a];
          *(undefined8 *)(pbVar15 + 0x24) = *(undefined8 *)(unaff_RBP + 0x28);
          *(byte **)(unaff_RBP + -0x16) = pbVar15;
          unaff_RBP[-0x18] = 9;
          unaff_RBP[-0x17] = 0;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
          puVar22 = unaff_RBP + -0x18;
          puVar21 = puVar11;
          puVar32 = puVar20;
code_r0x00014212357a:
          *(undefined8 *)(puVar27 + -8) = 0x14212357f;
          pdb_140ae5180(puVar21);
          puVar20 = puVar32;
LAB_142123480:
          do {
            if (puVar34 == puVar20) {
              *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
              *(undefined8 *)(puVar27 + -8) = 0x142123960;
              lVar12 = pdb_140a1a890(unaff_RBP + 0x2c);
              if (lVar12 == 0) {
                *(undefined8 *)(unaff_RBP + 0x32) = *(undefined8 *)(unaff_RBP + 0x30);
                unaff_RBP[0x36] = 0;
                unaff_RBP[0x37] = 0;
                *(longlong *)(unaff_RBP + 0x34) = *(longlong *)(unaff_RBP + 0x2e);
                lVar12 = *(longlong *)(unaff_RBP + 0x2e);
                while (*(longlong *)(unaff_RBP + 0x32) != *(longlong *)(unaff_RBP + 0x36)) {
                  *(longlong *)(unaff_RBP + 0x36) = *(longlong *)(unaff_RBP + 0x36) + 1;
                  *(undefined8 *)(puVar27 + -8) = 0x142123a13;
                  pdb_140975710(lVar12);
                  lVar12 = lVar12 + 0x18;
                }
                lVar12 = *(longlong *)(unaff_RBP + 0x2c);
                if (lVar12 != 0) {
                  pbVar15 = *(byte **)(unaff_RBP + 0x34);
                  *(undefined8 *)(puVar27 + -8) = 0x142123a3f;
                  pub_1406abac0(pbVar15,lVar12 * 0x18,8);
                }
              }
              else {
                *(undefined8 *)(unaff_RBP + -0x14) = *(undefined8 *)(unaff_RBP + 0x30);
                unaff_RBP[-0x18] = unaff_RBP[0x2c];
                unaff_RBP[-0x17] = unaff_RBP[0x2d];
                unaff_RBP[-0x16] = unaff_RBP[0x2e];
                unaff_RBP[-0x15] = unaff_RBP[0x2f];
                *(byte *)((longlong)unaff_RBP + 0xe7) = 0;
                *(undefined8 *)(puVar27 + -8) = 0x14212398c;
                uVar16 = pdb_140a1ac80(unaff_RBP + -0x18);
                *(undefined8 *)(unaff_RBP + -0x16) = uVar16;
                *(uint **)(unaff_RBP + -0x14) = puVar22;
                unaff_RBP[-0x18] = 7;
                unaff_RBP[-0x17] = 0;
                *(byte *)((longlong)unaff_RBP + 0xe7) = 0;
                *(undefined8 *)(puVar27 + -8) = 0x1421239b7;
                pdb_140ae5180(puVar11,unaff_RBP + -0x18,&UNK_14345fbb8);
              }
              return;
            }
            bVar7 = (byte)*puVar34;
            puVar34 = puVar34 + 8;
          } while (0xf < bVar7);
          bVar8 = bVar7 - 3;
          if (bVar7 < 3) {
            bVar8 = (byte)param_1;
          }
                    /* WARNING: Could not recover jumptable at 0x0001421234ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((longlong)(int)puVar31[bVar8] + (longlong)puVar31))
                    ((code *)((longlong)(int)puVar31[bVar8] + (longlong)puVar31));
          return;
        case 0x1e:
          (&UNK_14345fc6d)[uVar19] = (&UNK_14345fc6d)[uVar19] + '\x1c';
          unaff_RBP[-0x18] = 9;
code_r0x00014212372e:
          *(uint **)(puVar13 + 8) = puVar23;
          *(ulonglong *)(puVar13 + 10) = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
          *(uint **)(unaff_RBP + -0x16) = puVar13;
          unaff_RBP[-0x18] = 9;
          unaff_RBP[-0x17] = 0;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
          puVar22 = unaff_RBP + -0x18;
          *(undefined8 *)(puVar27 + -8) = 0x14212375c;
          pdb_140ae5180(0,puVar22,&UNK_14345fc18);
          goto LAB_142123480;
        case 0x1f:
          *(undefined8 *)(puVar27 + -8) = 0x1421237a7;
          pdb_14007ee60();
          *(undefined8 *)(puVar27 + -8) = 0x1421237b6;
          pbVar15 = pub_1406abab0(0x30,8);
          if (pbVar15 == (byte *)0x0) {
            *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x142123ada;
            pdb_142dc7e11(8,0x30);
          }
          pbVar15[0] = 1;
          pbVar15[1] = 0;
          pbVar15[2] = 0;
          pbVar15[3] = 0;
          pbVar15[4] = 0;
          pbVar15[5] = 0;
          pbVar15[6] = 0;
          pbVar15[7] = 0;
          pbVar15[8] = 1;
          pbVar15[9] = 0;
          pbVar15[10] = 0;
          pbVar15[0xb] = 0;
          pbVar15[0xc] = 0;
          pbVar15[0xd] = 0;
          pbVar15[0xe] = 0;
          pbVar15[0xf] = 0;
          pbVar15[0x18] = 4;
          *(uint **)(pbVar15 + 0x20) = puVar23;
          *(ulonglong *)(pbVar15 + 0x28) = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
          *(byte **)(unaff_RBP + -0x16) = pbVar15;
          unaff_RBP[-0x18] = 9;
          unaff_RBP[-0x17] = 0;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
          puVar22 = unaff_RBP + -0x18;
          puVar20 = puVar11;
code_r0x0001421237fb:
          *(undefined8 *)(puVar27 + -8) = 0x142123800;
          pdb_140ae5180(puVar20);
          puVar20 = puVar32;
          goto LAB_142123480;
        case 0x20:
          *(undefined2 *)(unaff_RBP + -0x14) = 0xfce4;
          unaff_RBP[-0x18] = 0xd;
          unaff_RBP[-0x17] = 0x80000000;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
          puVar22 = unaff_RBP + -0x18;
          *(undefined8 *)(puVar27 + -8) = 0x1421236b6;
          pdb_140a1aa80(uVar29);
          goto LAB_142123480;
        case 0x21:
          *(undefined8 *)(puVar27 + -8) = 0x142123881;
          pdb_14007ee60();
          *(undefined8 *)(puVar27 + -8) = 0x142123890;
          pbVar15 = pub_1406abab0(0x30,8);
          if (pbVar15 == (byte *)0x0) {
            *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x142123aa8;
            pdb_142dc7e11(8,0x30);
          }
          pbVar15[0] = 1;
          pbVar15[1] = 0;
          pbVar15[2] = 0;
          pbVar15[3] = 0;
          pbVar15[4] = 0;
          pbVar15[5] = 0;
          pbVar15[6] = 0;
          pbVar15[7] = 0;
          pbVar15[8] = 1;
          pbVar15[9] = 0;
          pbVar15[10] = 0;
          pbVar15[0xb] = 0;
          pbVar15[0xc] = 0;
          pbVar15[0xd] = 0;
          pbVar15[0xe] = 0;
          pbVar15[0xf] = 0;
          pbVar15[0x18] = 7;
          *(uint **)(pbVar15 + 0x20) = puVar23;
          *(ulonglong *)(pbVar15 + 0x28) = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
          *(byte **)(unaff_RBP + -0x16) = pbVar15;
          unaff_RBP[-0x18] = 9;
          unaff_RBP[-0x17] = 0;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
          puVar22 = unaff_RBP + -0x18;
          *(undefined8 *)(puVar27 + -8) = 0x1421238da;
          pdb_140ae5180(0,puVar22,&UNK_14345fc48);
          goto LAB_142123480;
        case 0x22:
          *(uint **)(puVar27 + -8) = puVar31;
          *(ulonglong *)(puVar27 + -0x10) = uVar29;
          *(char **)(puVar27 + -0x18) = param_1;
          *(uint **)(puVar27 + -0x20) = puVar23;
          *(undefined8 *)(puVar27 + -0x28) = 0;
          unaff_RBP = (uint *)(puVar27 + -0x130);
          *(float *)(puVar27 + -0x40) = unaff_XMM6_Da;
          *(undefined4 *)(puVar27 + -0x3c) = unaff_XMM6_Db;
          *(undefined4 *)(puVar27 + -0x38) = unaff_XMM6_Dc;
          *(undefined4 *)(puVar27 + -0x34) = unaff_XMM6_Dd;
          *(undefined8 *)(puVar27 + -0x48) = 0xfffffffffffffffe;
          *(undefined8 *)(puVar27 + -0x1b8) = 0x142123422;
          puVar23 = puVar22;
          pdb_140a1aa60(puVar27 + -0x80);
          puVar32 = _UNK_14345fcec + _UNK_14345fcf4 * 8;
          param_1 = (char *)0xb;
          puVar31 = (uint *)&UNK_14345fd48;
          puVar11 = puVar22;
          puVar27 = puVar27 + -0x1b0;
          puVar34 = _UNK_14345fcec;
code_r0x000142123440:
          puVar22 = puVar23;
          *(uint **)(unaff_RBP + 0x36) = puVar32;
          puVar20 = puVar32;
          goto LAB_142123480;
        case 0x23:
          *(undefined8 *)(puVar27 + -8) = 0x142123814;
          pdb_14007ee60();
          *(undefined8 *)(puVar27 + -8) = 0x142123823;
          pbVar15 = pub_1406abab0(0x30,8);
          if (pbVar15 == (byte *)0x0) {
            *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x142123ac1;
            pdb_142dc7e11(8,0x30);
          }
          pbVar15[0] = 1;
          pbVar15[1] = 0;
          pbVar15[2] = 0;
          pbVar15[3] = 0;
          pbVar15[4] = 0;
          pbVar15[5] = 0;
          pbVar15[6] = 0;
          pbVar15[7] = 0;
          pbVar15[8] = 1;
          pbVar15[9] = 0;
          pbVar15[10] = 0;
          pbVar15[0xb] = 0;
          pbVar15[0xc] = 0;
          pbVar15[0xd] = 0;
          pbVar15[0xe] = 0;
          pbVar15[0xf] = 0;
          pbVar15[0x18] = 0xb;
          *(uint **)(pbVar15 + 0x20) = puVar23;
          *(ulonglong *)(pbVar15 + 0x28) = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
          *(byte **)(unaff_RBP + -0x16) = pbVar15;
          unaff_RBP[-0x18] = 9;
          unaff_RBP[-0x17] = 0;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
          puVar22 = unaff_RBP + -0x18;
          puVar20 = puVar11;
code_r0x000142123868:
          *(undefined8 *)(puVar27 + -8) = 0x14212386d;
          pdb_140ae5180(puVar20);
          puVar20 = puVar32;
          goto LAB_142123480;
        case 0x24:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x25:
          *(undefined8 *)(puVar27 + -8) = 0x142123593;
          pdb_14007ee60();
          *(undefined8 *)(puVar27 + -8) = 0x1421235a2;
          pbVar15 = pub_1406abab0(0x30,8);
          if (pbVar15 == (byte *)0x0) {
            *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar27 + -8) = 0x142123af3;
            pdb_142dc7e11(8,0x30);
          }
          pbVar15[0] = 1;
          pbVar15[1] = 0;
          pbVar15[2] = 0;
          pbVar15[3] = 0;
          pbVar15[4] = 0;
          pbVar15[5] = 0;
          pbVar15[6] = 0;
          pbVar15[7] = 0;
          pbVar15[8] = 1;
          pbVar15[9] = 0;
          pbVar15[10] = 0;
          pbVar15[0xb] = 0;
          pbVar15[0xc] = 0;
          pbVar15[0xd] = 0;
          pbVar15[0xe] = 0;
          pbVar15[0xf] = 0;
          pbVar15[0x18] = 3;
          *(uint **)(pbVar15 + 0x20) = puVar23;
          *(ulonglong *)(pbVar15 + 0x28) = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
          *(byte **)(unaff_RBP + -0x16) = pbVar15;
          unaff_RBP[-0x18] = 9;
          unaff_RBP[-0x17] = 0;
          *(byte *)((longlong)unaff_RBP + 0xe7) = 1;
          puVar22 = unaff_RBP + -0x18;
          *(undefined8 *)(puVar27 + -8) = 0x1421235ec;
          pdb_140ae5180(0,puVar22,&UNK_14345fbd0);
          goto LAB_142123480;
        }
      }
LAB_142121720:
      puVar31 = puVar31 + 8;
      uVar29 = uVar29 - 0x20;
    } while (uVar29 != 0);
  }
  return;
code_r0x000142121f27:
  goto code_r0x000142121f1a;
code_r0x000142121f03:
  bVar35 = unaff_RBP[0x2e] == 0xb;
code_r0x000142121f0a:
  if (!bVar35) {
code_r0x000142121f10:
    puVar13 = unaff_RBP + 0x1a;
code_r0x000142121f14:
    bVar35 = unaff_RBP[6] < 0xb;
    bVar36 = unaff_RBP[6] == 0xb;
code_r0x000142121f18:
    if (bVar35 || bVar36) {
code_r0x000142121f1a:
                    /* WARNING: Could not recover jumptable at 0x000142121f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14345fd18 + *(int *)(&UNK_14345fd18 + *(longlong *)(unaff_RBP + 6) * 4)))
                (&UNK_14345fd18 + *(int *)(&UNK_14345fd18 + *(longlong *)(unaff_RBP + 6) * 4));
      return;
    }
    unaff_RBP[0x1a] = 3;
    unaff_RBP[0xc] = 0xb;
    unaff_RBP[-3] = 3;
    unaff_RBP[-2] = 0;
    unaff_RBP[-1] = 3;
    *unaff_RBP = 3;
    unaff_RBP[1] = 2;
    unaff_RBP[2] = 0;
    unaff_RBP[3] = 1;
    uVar10 = *puVar13;
    unaff_RBP[0x41] = unaff_RBP[0x34];
    puVar23 = (uint *)(ulonglong)(uVar10 + 100000);
  }
  do {
    do {
      uVar10 = (uint)(byte)unaff_RBP[0x38];
      if ((char)unaff_RBP[0x32] != '\x04') {
        uVar10 = unaff_RBP[0x32];
      }
      *(undefined8 *)(puVar27 + -8) = 0x142121fdc;
      cVar9 = pdb_140901360(uVar29 & 0xffffffff,uVar10);
      uVar18 = unaff_RBP[0x45];
      if (unaff_RBP[0x16] == 0) {
        uVar18 = unaff_RBP[0x42];
      }
      unaff_RBP[0x37] = uVar18;
      if (cVar9 == '\0') {
        unaff_RBP[0x37] = unaff_RBP[0x42];
      }
      unaff_RBP[0x1a] = 0;
      unaff_RBP[0x1b] = 0;
      unaff_RBP[0x1c] = 8;
      unaff_RBP[0x1d] = 0;
      unaff_RBP[0x1e] = 0;
      unaff_RBP[0x1f] = 0;
      uVar30 = SUB84(puVar31,0);
      iVar28 = (int)puVar23;
      iVar33 = (int)puVar34;
      bVar7 = (byte)uVar10;
      if ((char)uVar29 == (char)param_1) {
        uVar29 = 0;
        if (iVar33 == iVar28) goto LAB_142122055;
LAB_14212208e:
        if (uVar29 == *(ulonglong *)(unaff_RBP + 0x1a)) {
          *(undefined8 *)(puVar27 + -8) = 0x14212209d;
          pdb_142d7e6e0(unaff_RBP + 0x1a);
        }
        lVar12 = *(longlong *)(unaff_RBP + 0x1c);
        uVar19 = (ulonglong)(uint)((int)uVar29 << 5);
        *(undefined1 *)(lVar12 + uVar19) = 0x10;
        *(undefined1 *)(lVar12 + 4 + uVar19) = 1;
        *(int *)(lVar12 + 8 + uVar19) = iVar33;
        *(int *)(lVar12 + 0xc + uVar19) = iVar28;
        *(undefined4 *)(lVar12 + 0x10 + uVar19) = uVar30;
        uVar29 = uVar29 + 1;
        *(ulonglong *)(unaff_RBP + 0x1e) = uVar29;
        if (unaff_RBP[0x34] == unaff_RBP[0x41]) goto LAB_142122063;
LAB_1421220d4:
        if (uVar29 == *(ulonglong *)(unaff_RBP + 0x1a)) {
          *(undefined8 *)(puVar27 + -8) = 0x1421220e3;
          pdb_142d7e6e0(unaff_RBP + 0x1a);
        }
        lVar12 = *(longlong *)(unaff_RBP + 0x1c);
        uVar19 = (ulonglong)(uint)((int)uVar29 << 5);
        *(undefined1 *)(lVar12 + uVar19) = 0x10;
        *(undefined1 *)(lVar12 + 4 + uVar19) = 2;
        *(uint *)(lVar12 + 8 + uVar19) = unaff_RBP[0x34];
        *(uint *)(lVar12 + 0xc + uVar19) = unaff_RBP[0x41];
        *(undefined4 *)(lVar12 + 0x10 + uVar19) = uVar30;
        uVar29 = uVar29 + 1;
        *(ulonglong *)(unaff_RBP + 0x1e) = uVar29;
        if ((byte)unaff_RBP[0x38] == bVar7) goto LAB_14212206f;
LAB_142122123:
        if (uVar29 == *(ulonglong *)(unaff_RBP + 0x1a)) {
          *(undefined8 *)(puVar27 + -8) = 0x142122132;
          pdb_142d7e6e0(unaff_RBP + 0x1a);
        }
        lVar12 = *(longlong *)(unaff_RBP + 0x1c);
        uVar19 = (ulonglong)(uint)((int)uVar29 << 5);
        *(undefined1 *)(lVar12 + uVar19) = 0x10;
        *(undefined1 *)(lVar12 + 4 + uVar19) = 3;
        *(byte *)(lVar12 + 5 + uVar19) = (byte)unaff_RBP[0x38];
        *(byte *)(lVar12 + 6 + uVar19) = bVar7;
        *(undefined4 *)(lVar12 + 0x10 + uVar19) = uVar30;
        uVar29 = uVar29 + 1;
        *(ulonglong *)(unaff_RBP + 0x1e) = uVar29;
        if (unaff_RBP[0x42] != unaff_RBP[0x37]) {
LAB_14212216f:
          if (uVar29 == *(ulonglong *)(unaff_RBP + 0x1a)) {
            *(undefined8 *)(puVar27 + -8) = 0x14212217e;
            pdb_142d7e6e0(unaff_RBP + 0x1a);
          }
          lVar12 = *(longlong *)(unaff_RBP + 0x1c);
          uVar19 = (ulonglong)(uint)((int)uVar29 << 5);
          *(undefined1 *)(lVar12 + uVar19) = 0x10;
          *(undefined1 *)(lVar12 + 4 + uVar19) = 4;
          *(uint *)(lVar12 + 8 + uVar19) = unaff_RBP[0x42];
          *(uint *)(lVar12 + 0xc + uVar19) = unaff_RBP[0x37];
          *(undefined4 *)(lVar12 + 0x10 + uVar19) = uVar30;
          uVar29 = uVar29 + 1;
        }
      }
      else {
        *(undefined8 *)(puVar27 + -8) = 0x14212202a;
        pdb_142d7e6e0(unaff_RBP + 0x1a);
        puVar3 = *(undefined1 **)(unaff_RBP + 0x1c);
        *puVar3 = 0x10;
        puVar3[4] = 0;
        puVar3[5] = (char)param_1;
        puVar3[6] = (char)uVar29;
        *(undefined4 *)(puVar3 + 0x10) = uVar30;
        unaff_RBP[0x1e] = 1;
        unaff_RBP[0x1f] = 0;
        uVar29 = 1;
        if (iVar33 != iVar28) goto LAB_14212208e;
LAB_142122055:
        if (unaff_RBP[0x34] != unaff_RBP[0x41]) goto LAB_1421220d4;
LAB_142122063:
        if ((byte)unaff_RBP[0x38] != bVar7) goto LAB_142122123;
LAB_14212206f:
        if (unaff_RBP[0x42] != unaff_RBP[0x37]) goto LAB_14212216f;
      }
      lVar12 = *(longlong *)(unaff_RBP + 0x1a);
      pbVar15 = *(byte **)(unaff_RBP + 0x1c);
      lVar24 = *(longlong *)(unaff_RBP + 0x14);
      if ((ulonglong)(*(longlong *)(unaff_RBP + 0x10) - lVar24) < uVar29) {
        *(byte **)(unaff_RBP + 0x38) = pbVar15;
        *(longlong *)(unaff_RBP + 0x42) = lVar12;
        *(undefined8 *)(puVar27 + 0x20) = 0x20;
        *(undefined8 *)(puVar27 + -8) = 0x14212223b;
        pdb_142d7f1b0(unaff_RBP + 0x10,lVar24,uVar29,8);
        lVar24 = *(longlong *)(unaff_RBP + 0x14);
        lVar12 = *(longlong *)(unaff_RBP + 0x42);
        pbVar15 = *(byte **)(unaff_RBP + 0x38);
LAB_1421221cb:
        lVar4 = *(longlong *)(unaff_RBP + 0x12);
        *(undefined8 *)(puVar27 + -8) = 0x1421221e5;
        pub_142e32760(lVar24 * 0x20 + lVar4,pbVar15,(int)uVar29 << 5);
      }
      else if (uVar29 != 0) goto LAB_1421221cb;
      *(ulonglong *)(unaff_RBP + 0x14) = lVar24 + uVar29;
      if (lVar12 != 0) {
        *(undefined8 *)(puVar27 + -8) = 0x14212220a;
        pub_1406abac0(pbVar15,lVar12 << 5,8);
      }
      do {
        if (puVar20 == *(uint **)(unaff_RBP + 0x30)) {
          lVar12 = *(longlong *)(unaff_RBP + 0x18);
          if (lVar12 != 0) {
            pbVar15 = *(byte **)(unaff_RBP + 8);
            *(undefined8 *)(puVar27 + -8) = 0x142122edb;
            pub_1406abac0(pbVar15,lVar12 << 2,4);
          }
          puVar5 = *(undefined8 **)(unaff_RBP + -0x16);
          puVar5[2] = *(undefined8 *)(unaff_RBP + 0x14);
          uVar16 = *(undefined8 *)(unaff_RBP + 0x12);
          *puVar5 = *(undefined8 *)(unaff_RBP + 0x10);
          puVar5[1] = uVar16;
          return;
        }
        puVar31 = (uint *)(ulonglong)*puVar20;
        uVar16 = *(undefined8 *)(unaff_RBP + 0x2c);
        *(undefined8 *)(puVar27 + -8) = 0x142121e5f;
        piVar14 = (int *)pdb_140c40010(uVar16,puVar31);
        puVar20 = puVar20 + 1;
      } while ((piVar14 == (int *)0x0) || (*piVar14 != 7));
      *(undefined8 *)(puVar27 + -8) = 0x142121e84;
      lVar12 = pdb_140901490(piVar14 + 0xe,&UNK_14345fa40);
      param_1 = (char *)(ulonglong)*(byte *)(lVar12 + 0x16);
      puVar34 = (uint *)(ulonglong)(uint)piVar14[0x14];
      unaff_RBP[0x42] = *(uint *)(lVar12 + 8);
      unaff_RBP[0x34] = *(uint *)(lVar12 + 0xc);
      *(byte *)(unaff_RBP + 0x38) = *(byte *)(lVar12 + 0x14);
      uVar16 = *(undefined8 *)(unaff_RBP + 0xe);
      *(undefined8 *)(puVar27 + -8) = 0x142121eb5;
      uVar10 = pdb_1408ff980(uVar16);
      uVar29 = (ulonglong)uVar10;
      unaff_RBP[0x41] = (uint)*(undefined8 *)(unaff_RBP + 0x2e);
      puVar23 = puVar34;
    } while ((char)uVar10 != '\0');
    puVar23 = (uint *)(ulonglong)unaff_RBP[0x33];
    unaff_RBP[0x41] = unaff_RBP[0x34];
  } while (unaff_RBP[0x2e] < 4);
  puVar23 = (uint *)(ulonglong)unaff_RBP[0x33];
  unaff_RBP[0x41] = unaff_RBP[0x34];
  goto code_r0x000142121f03;
}

