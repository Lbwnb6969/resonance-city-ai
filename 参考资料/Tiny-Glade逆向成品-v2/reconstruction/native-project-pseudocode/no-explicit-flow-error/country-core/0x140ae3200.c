// VA 0x140ae3200, PDB extent 2913 bytes
// country_core::resources::history::History::add_decorator_diff
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::history::History::add_decorator_diff
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 2913 */

void pdb_140ae3200(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  code *pcVar14;
  undefined8 uVar15;
  byte *pbVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ushort uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint *puVar24;
  bool bVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  longlong lStack_130;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined8 *puStack_118;
  byte *pbStack_110;
  longlong *plStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  longlong *plStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  longlong lStack_d0;
  undefined *puStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  longlong lStack_90;
  longlong *plStack_88;
  longlong lStack_80;
  undefined8 *puStack_78;
  byte *pbStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  bVar25 = true;
  if ((param_2[3] == 0) && (param_3[6] == 0)) {
    bVar25 = param_3[9] != 0;
  }
  puStack_118 = param_2;
  plStack_88 = param_3;
  if (!SBORROW8(0,*(longlong *)(param_1 + 0x30))) {
    plVar1 = (longlong *)(param_1 + 0x30);
    puStack_78 = (undefined8 *)param_1;
    pbStack_70 = (byte *)plVar1;
    if ((!(bool)(bVar25 ^ 1U | *(longlong *)(param_1 + 0x40) != 0)) &&
       (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x10) < -1)) {
      uStack_61 = 1;
      uStack_62 = 1;
      pdb_140ae3d70();
      plStack_e8 = (longlong *)0x0;
      pcStack_e0 = (code *)0x8;
      puStack_d8 = (undefined *)0x0;
      lStack_80 = pdb_140c7d380();
      pdb_14007ee60();
      pbStack_110 = pub_1406abab0(0x60,8);
      if (pbStack_110 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x60);
      }
      pbStack_110[0x40] = 0;
      pbStack_110[0x41] = 0;
      pbStack_110[0x42] = 0;
      pbStack_110[0x43] = 0;
      pbStack_110[0x44] = 0;
      pbStack_110[0x45] = 0;
      pbStack_110[0x46] = 0;
      pbStack_110[0x47] = 0;
      pbStack_110[0x48] = 0;
      pbStack_110[0x49] = 0;
      pbStack_110[0x4a] = 0;
      pbStack_110[0x4b] = 0;
      pbStack_110[0x4c] = 0;
      pbStack_110[0x4d] = 0;
      pbStack_110[0x4e] = 0;
      pbStack_110[0x4f] = 0;
      pbStack_110[0] = 1;
      pbStack_110[1] = 0;
      pbStack_110[2] = 0;
      pbStack_110[3] = 0;
      pbStack_110[4] = 0;
      pbStack_110[5] = 0;
      pbStack_110[6] = 0;
      pbStack_110[7] = 0;
      pbStack_110[8] = 1;
      pbStack_110[9] = 0;
      pbStack_110[10] = 0;
      pbStack_110[0xb] = 0;
      pbStack_110[0xc] = 0;
      pbStack_110[0xd] = 0;
      pbStack_110[0xe] = 0;
      pbStack_110[0xf] = 0;
      pbStack_110[0x10] = 0;
      pbStack_110[0x11] = 0;
      pbStack_110[0x12] = 0;
      pbStack_110[0x13] = 0;
      pbStack_110[0x14] = 0;
      pbStack_110[0x15] = 0;
      pbStack_110[0x16] = 0;
      pbStack_110[0x17] = 0;
      pbStack_110[0x20] = 0;
      pbStack_110[0x21] = 0;
      pbStack_110[0x22] = 0;
      pbStack_110[0x23] = 0;
      pbStack_110[0x24] = 0;
      pbStack_110[0x25] = 0;
      pbStack_110[0x26] = 0;
      pbStack_110[0x27] = 0;
      pbStack_110[0x30] = 0;
      pbStack_110[0x31] = 0;
      pbStack_110[0x32] = 0;
      pbStack_110[0x33] = 0;
      pbStack_110[0x34] = 0;
      pbStack_110[0x35] = 0;
      pbStack_110[0x36] = 0;
      pbStack_110[0x37] = 0;
      pbStack_110[0x38] = 4;
      pbStack_110[0x39] = 0;
      pbStack_110[0x3a] = 0;
      pbStack_110[0x3b] = 0;
      pbStack_110[0x3c] = 0;
      pbStack_110[0x3d] = 0;
      pbStack_110[0x3e] = 0;
      pbStack_110[0x3f] = 0;
      pbStack_110[0x50] = 4;
      pbStack_110[0x51] = 0;
      pbStack_110[0x52] = 0;
      pbStack_110[0x53] = 0;
      pbStack_110[0x54] = 0;
      pbStack_110[0x55] = 0;
      pbStack_110[0x56] = 0;
      pbStack_110[0x57] = 0;
      pbStack_110[0x58] = 0;
      pbStack_110[0x59] = 0;
      pbStack_110[0x5a] = 0;
      pbStack_110[0x5b] = 0;
      pbStack_110[0x5c] = 0;
      pbStack_110[0x5d] = 0;
      pbStack_110[0x5e] = 0;
      pbStack_110[0x5f] = 0;
      puStack_f8 = puStack_d8;
      plStack_108 = plStack_e8;
      pcStack_100 = pcStack_e0;
      if (!SBORROW8(0,*plVar1)) {
        pdb_140990a30(pbStack_70);
      }
      *(undefined **)((longlong)pbStack_70 + 0x10) = puStack_f8;
      *(longlong **)pbStack_70 = plStack_108;
      *(code **)((longlong)pbStack_70 + 8) = pcStack_100;
      *(longlong *)((longlong)puStack_78 + 0x48) = lStack_80;
      *(byte **)((longlong)puStack_78 + 0x50) = pbStack_110;
      if (SBORROW8(0,*(longlong *)((longlong)puStack_78 + 0x30))) goto LAB_140ae38e0;
    }
    if ((DAT_143ca4321 == '\x01') && ((char)*plStack_88 != '\0')) {
      if (*(int *)((longlong)puStack_78 + 0x68) < -1) {
        uStack_61 = 1;
        uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143062a69,0x1e,&UNK_143062a88);
      }
      lVar17 = *(longlong *)((longlong)puStack_78 + 8) +
               *(longlong *)((longlong)puStack_78 + 0x10) * 0x28;
      uVar18 = *(int *)((longlong)puStack_78 + 0x68) + 1;
      uVar13 = (ulonglong)uVar18;
      if ((int)uVar18 < 1) {
        uVar13 = 0;
      }
      do {
        if (uVar13 == 0) goto LAB_140ae3427;
        uVar22 = ((ulonglong)(lVar17 - *(longlong *)((longlong)puStack_78 + 8)) >> 3) *
                 -0x3333333333333333;
        uVar19 = 0;
        if (uVar13 <= uVar22) {
          uVar19 = uVar22 - uVar13;
        }
        if (uVar22 <= uVar19) goto LAB_140ae3427;
        lVar21 = *(longlong *)(lVar17 + -8 + uVar19 * -0x28);
        lVar17 = lVar17 + uVar19 * -0x28 + -0x28;
        uVar13 = uVar13 - 1;
      } while (*(int *)(lVar21 + 0x20) != 1);
      lStack_130 = *(longlong *)(lVar21 + 0x28);
      if (plStack_88[1] != lStack_130) {
        if (*_DAT_143ca8e90 != 0) {
          plStack_108 = plStack_88;
          pcStack_100 = pdb_140adeef0;
          plStack_e8 = (longlong *)&UNK_14304f300;
          pcStack_e0 = (code *)0x20;
          puStack_d8 = &UNK_14304f300;
          lStack_d0 = 0x20;
          puStack_c8 = &UNK_14304f2e8;
          uStack_61 = 1;
          uStack_62 = 1;
          pdb_1400c9be0(&UNK_14304f2d2,&plStack_108,1,&plStack_e8);
        }
        plStack_e8 = &lStack_130;
        pcStack_e0 = pdb_140f72a40;
        uStack_61 = 1;
        uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14304f320,&plStack_e8,&UNK_14304f368);
      }
    }
LAB_140ae3427:
    puVar12 = (uint *)plStack_88[8];
    puVar24 = puVar12 + plStack_88[9] * 2;
    iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                   CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
LAB_140ae3467:
    do {
      do {
        if (puVar12 == puVar24) {
          puVar24 = (uint *)plStack_88[5];
          puVar12 = puVar24 + plStack_88[6] * 2;
          while (puVar24 != puVar12) {
            uVar18 = *puVar24;
            uVar23 = puVar24[1];
            uVar10 = uVar23;
            if (uVar18 >= uVar23 && uVar18 != uVar23) {
              uVar10 = uVar18;
            }
            if (uVar18 < uVar23) {
              uVar23 = uVar18;
            }
            uStack_61 = 1;
            uStack_62 = 1;
            uStack_128 = uVar23;
            uStack_124 = uVar10;
            uVar15 = pdb_1400af680(param_4 + 4,&uStack_128);
            uStack_61 = 1;
            uStack_62 = 1;
            pdb_140cab960(&plStack_e8,param_4,uVar15,&uStack_128);
            puVar24 = puVar24 + 2;
            if ((int)plStack_e8 == 1) {
              pdb_14007ee60();
              pcVar14 = (code *)pub_1406abab0(0x20,8);
              puVar11 = puStack_78;
              if (pcVar14 == (code *)0x0) {
                uStack_61 = 1;
                uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,0x20);
              }
              *(undefined8 *)pcVar14 = 1;
              *(undefined8 *)(pcVar14 + 8) = 1;
              *(undefined4 *)(pcVar14 + 0x10) = 1;
              *(uint *)(pcVar14 + 0x14) = uVar23;
              *(uint *)(pcVar14 + 0x18) = uVar10;
              plStack_e8 = (longlong *)0xe;
              lVar17 = *(longlong *)((longlong)puStack_78 + 0x40);
              pcStack_e0 = pcVar14;
              if (lVar17 == *(longlong *)((longlong)puStack_78 + 0x30)) {
                pdb_142d7e830(pbStack_70);
              }
              lVar21 = *(longlong *)((longlong)puVar11 + 0x38);
              *(undefined **)(lVar21 + 0x10 + lVar17 * 0x18) = puStack_d8;
              puVar2 = (undefined8 *)(lVar21 + lVar17 * 0x18);
              *puVar2 = plStack_e8;
              puVar2[1] = pcStack_e0;
              *(longlong *)((longlong)puVar11 + 0x40) = lVar17 + 1;
            }
          }
          puStack_d8 = (undefined *)*puStack_118;
          lStack_d0 = puStack_118[1];
          puStack_c8 = (undefined *)puStack_118[2];
          lStack_c0 = puStack_118[3];
          uStack_b8 = puStack_118[4];
          uStack_b0 = puStack_118[5];
          plStack_e8 = (longlong *)0x1;
          pcStack_e0 = (code *)0x1;
          pdb_14007ee60();
          pbVar16 = pub_1406abab0(0x40,8);
          puVar11 = puStack_78;
          if (pbVar16 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x40);
          }
          *(undefined4 *)(pbVar16 + 0x30) = (undefined4)uStack_b8;
          *(undefined4 *)(pbVar16 + 0x34) = uStack_b8._4_4_;
          *(undefined4 *)(pbVar16 + 0x38) = (undefined4)uStack_b0;
          *(undefined4 *)(pbVar16 + 0x3c) = uStack_b0._4_4_;
          *(undefined **)(pbVar16 + 0x20) = puStack_c8;
          *(longlong *)(pbVar16 + 0x28) = lStack_c0;
          *(undefined **)(pbVar16 + 0x10) = puStack_d8;
          *(longlong *)(pbVar16 + 0x18) = lStack_d0;
          *(longlong **)pbVar16 = plStack_e8;
          *(code **)(pbVar16 + 8) = pcStack_e0;
          lStack_80 = (longlong)puStack_78 + 0x48;
          plVar1 = *(longlong **)((longlong)puStack_78 + 0x48);
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          pbStack_70 = pbVar16;
          if (*plVar1 == 0) {
            pdb_140c7bbc0((longlong)puStack_78 + 0x48);
          }
          *(byte **)((longlong)puVar11 + 0x48) = pbStack_70;
          lStack_98 = plStack_88[8];
          lStack_90 = plStack_88[9];
          puStack_d8 = (undefined *)*plStack_88;
          lStack_d0 = plStack_88[1];
          puStack_c8 = (undefined *)plStack_88[2];
          lStack_c0 = plStack_88[3];
          uStack_b8 = plStack_88[4];
          uStack_b0 = plStack_88[5];
          uStack_a8 = (undefined4)plStack_88[6];
          uStack_a4 = *(undefined4 *)((longlong)plStack_88 + 0x34);
          uStack_a0 = (undefined4)plStack_88[7];
          uStack_9c = *(undefined4 *)((longlong)plStack_88 + 0x3c);
          plStack_e8 = (longlong *)0x1;
          pcStack_e0 = (code *)0x1;
          pdb_14007ee60();
          pbVar16 = pub_1406abab0(0x60,8);
          if (pbVar16 != (byte *)0x0) {
            *(longlong *)(pbVar16 + 0x50) = lStack_98;
            *(longlong *)(pbVar16 + 0x58) = lStack_90;
            *(ulonglong *)(pbVar16 + 0x40) = CONCAT44(uStack_a4,uStack_a8);
            *(ulonglong *)(pbVar16 + 0x48) = CONCAT44(uStack_9c,uStack_a0);
            *(undefined4 *)(pbVar16 + 0x30) = (undefined4)uStack_b8;
            *(undefined4 *)(pbVar16 + 0x34) = uStack_b8._4_4_;
            *(undefined4 *)(pbVar16 + 0x38) = (undefined4)uStack_b0;
            *(undefined4 *)(pbVar16 + 0x3c) = uStack_b0._4_4_;
            *(undefined **)(pbVar16 + 0x20) = puStack_c8;
            *(longlong *)(pbVar16 + 0x28) = lStack_c0;
            *(undefined **)(pbVar16 + 0x10) = puStack_d8;
            *(longlong *)(pbVar16 + 0x18) = lStack_d0;
            *(longlong **)pbVar16 = plStack_e8;
            *(code **)(pbVar16 + 8) = pcStack_e0;
            plVar1 = *(longlong **)((longlong)puVar11 + 0x50);
            puStack_78 = (undefined8 *)((longlong)puVar11 + 0x50);
            LOCK();
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            pbStack_70 = pbVar16;
            if (*plVar1 == 0) {
              pdb_140c7a400(puStack_78);
            }
            *puStack_78 = pbStack_70;
            return;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x60);
        }
        uVar18 = *puVar12;
        uVar23 = puVar12[1];
        uVar10 = uVar23;
        if (uVar18 >= uVar23 && uVar18 != uVar23) {
          uVar10 = uVar18;
        }
        puVar12 = puVar12 + 2;
        if (uVar18 < uVar23) {
          uVar23 = uVar18;
        }
        uStack_120 = uVar23;
        uStack_11c = uVar10;
      } while (param_4[3] == 0);
      uStack_61 = 1;
      uStack_62 = 1;
      uVar13 = pdb_1400af680(param_4 + 4,&uStack_120);
      bVar26 = (byte)(uVar13 >> 0x39);
      auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
      auVar27 = pshuflw(auVar27,auVar27,0);
      lVar17 = 0;
      while( true ) {
        uVar13 = uVar13 & param_4[1];
        auVar3 = *(undefined1 (*) [16])(*param_4 + uVar13);
        auVar29[0] = -(auVar3[0] == auVar27[0]);
        auVar29[1] = -(auVar3[1] == auVar27[1]);
        auVar29[2] = -(auVar3[2] == auVar27[2]);
        auVar29[3] = -(auVar3[3] == auVar27[3]);
        auVar29[4] = -(auVar3[4] == auVar27[4]);
        auVar29[5] = -(auVar3[5] == auVar27[5]);
        auVar29[6] = -(auVar3[6] == auVar27[6]);
        auVar29[7] = -(auVar3[7] == auVar27[7]);
        auVar29[8] = -(auVar3[8] == auVar27[0]);
        auVar29[9] = -(auVar3[9] == auVar27[1]);
        auVar29[10] = -(auVar3[10] == auVar27[2]);
        auVar29[0xb] = -(auVar3[0xb] == auVar27[3]);
        auVar29[0xc] = -(auVar3[0xc] == auVar27[4]);
        auVar29[0xd] = -(auVar3[0xd] == auVar27[5]);
        auVar29[0xe] = -(auVar3[0xe] == auVar27[6]);
        auVar29[0xf] = -(auVar3[0xf] == auVar27[7]);
        uVar20 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf
        ;
        uVar18 = (uint)uVar20;
        while (uVar20 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar21 = *param_4 + (uVar4 + uVar13 & param_4[1]) * -8;
          if ((uVar23 == *(uint *)(lVar21 + -8)) && (uVar10 == *(uint *)(lVar21 + -4))) {
            pdb_14007ee60();
            pcVar14 = (code *)pub_1406abab0(0x20,8);
            puVar11 = puStack_78;
            if (pcVar14 == (code *)0x0) {
              uStack_61 = 1;
              uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x20);
            }
            *(undefined8 *)pcVar14 = 1;
            *(undefined8 *)(pcVar14 + 8) = 1;
            *(undefined4 *)(pcVar14 + 0x10) = 0;
            *(uint *)(pcVar14 + 0x14) = uVar23;
            *(uint *)(pcVar14 + 0x18) = uVar10;
            plStack_e8 = (longlong *)0xe;
            lVar17 = *(longlong *)((longlong)puStack_78 + 0x40);
            pcStack_e0 = pcVar14;
            if (lVar17 == *(longlong *)((longlong)puStack_78 + 0x30)) {
              pdb_142d7e830(pbStack_70);
            }
            lVar21 = *(longlong *)((longlong)puVar11 + 0x38);
            *(undefined **)(lVar21 + 0x10 + lVar17 * 0x18) = puStack_d8;
            puVar2 = (undefined8 *)(lVar21 + lVar17 * 0x18);
            *puVar2 = plStack_e8;
            puVar2[1] = pcStack_e0;
            *(longlong *)((longlong)puVar11 + 0x40) = lVar17 + 1;
            goto LAB_140ae3467;
          }
          uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
        }
        auVar28[0] = -(auVar3[0] == (char)iVar6);
        auVar28[1] = -(auVar3[1] == (char)((uint)iVar6 >> 8));
        auVar28[2] = -(auVar3[2] == (char)((uint)iVar6 >> 0x10));
        auVar28[3] = -(auVar3[3] == (char)((uint)iVar6 >> 0x18));
        auVar28[4] = -(auVar3[4] == (char)iVar7);
        auVar28[5] = -(auVar3[5] == (char)((uint)iVar7 >> 8));
        auVar28[6] = -(auVar3[6] == (char)((uint)iVar7 >> 0x10));
        auVar28[7] = -(auVar3[7] == (char)((uint)iVar7 >> 0x18));
        auVar28[8] = -(auVar3[8] == (char)iVar8);
        auVar28[9] = -(auVar3[9] == (char)((uint)iVar8 >> 8));
        auVar28[10] = -(auVar3[10] == (char)((uint)iVar8 >> 0x10));
        auVar28[0xb] = -(auVar3[0xb] == (char)((uint)iVar8 >> 0x18));
        auVar28[0xc] = -(auVar3[0xc] == (char)iVar9);
        auVar28[0xd] = -(auVar3[0xd] == (char)((uint)iVar9 >> 8));
        auVar28[0xe] = -(auVar3[0xe] == (char)((uint)iVar9 >> 0x10));
        auVar28[0xf] = -(auVar3[0xf] == (char)((uint)iVar9 >> 0x18));
        if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x1f,0) & 1) != 0) || (SUB161(auVar28 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
        uVar13 = uVar13 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
    } while( true );
  }
LAB_140ae38e0:
  uStack_61 = 1;
  uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14304f380,0xa9,&UNK_14304f3d8);
}

