// VA 0x140737a40, PDB extent 4199 bytes
// toolbar::mei::config::instantiate_ui_template_impl
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140738462) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::config::instantiate_ui_template_impl
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 4199 */

void pdb_140737a40(undefined8 param_1,byte *param_2,byte *param_3,longlong param_4)

{
  longlong *plVar1;
  char *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  longlong *plVar15;
  ulonglong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  byte *pbVar22;
  longlong *plVar23;
  byte *pbVar24;
  uint uVar25;
  longlong lVar26;
  byte *pbVar27;
  ushort uVar28;
  longlong lVar29;
  longlong lVar30;
  byte *pbVar31;
  bool bVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  byte *pbStack_1d8;
  byte **ppbStack_1c8;
  code *pcStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte *pbStack_188;
  longlong *plStack_180;
  byte *pbStack_178;
  longlong *plStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte bStack_120;
  undefined1 uStack_11f;
  char cStack_11e;
  undefined5 uStack_11d;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_100;
  longlong lStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  byte *pbStack_d8;
  longlong *plStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  pbStack_160 = param_2;
  if (!SBORROW8(0,*(longlong *)(param_4 + 0x30))) {
    pbStack_138 = *(byte **)(param_4 + 0x38);
    pbStack_130 = *(byte **)(param_4 + 0x40);
    pbStack_138 = (byte *)pdb_140bbbcb0(&pbStack_138);
    pbStack_130 = _DAT_14329c330;
    pbStack_128 = _UNK_14329c338;
    pbStack_130 = (byte *)pdb_1400affa0(&pbStack_138);
    pbStack_138 = pbStack_160;
    param_3 = (byte *)pdb_1400b0130(&pbStack_138);
  }
  pbStack_178 = param_3;
  pdb_14072caa0(&pbStack_138,param_1);
  pdb_14116f0d0(&pbStack_138,0);
  pbStack_a8 = pbStack_128;
  pbStack_b8 = pbStack_138;
  pbStack_b0 = pbStack_130;
  pdb_1411b3490(&pbStack_138,param_4);
  plVar15 = (longlong *)pdb_14116e700(&pbStack_b8);
  pbVar27 = (byte *)plVar15[1];
  lVar30 = plVar15[2];
  if (lVar30 != 0) {
    pbVar31 = pbVar27 + 8;
    do {
      uVar7 = *(ulonglong *)(pbVar31 + -8);
      if ((-1 < (longlong)uVar7) && (uVar7 != 0)) {
        pub_1406abac0(*(byte **)pbVar31,uVar7,1);
      }
      pbVar31 = pbVar31 + 0x20;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  if (*plVar15 != 0) {
    pub_1406abac0(pbVar27,*plVar15 << 5,8);
  }
  pbVar27 = pbStack_b8;
  plVar15[2] = (longlong)pbStack_128;
  *plVar15 = (longlong)pbStack_138;
  plVar15[1] = (longlong)pbStack_130;
  pbStack_158 = pbStack_b8;
  pbStack_150 = pbStack_b0;
  pbStack_148 = pbStack_a8;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  if (*(longlong *)(param_4 + 0x28) != 0) {
    uVar20 = **(uint **)(param_4 + 0x20) - 2;
    if (**(uint **)(param_4 + 0x20) < 2) {
      uVar20 = 7;
    }
                    /* WARNING: Could not recover jumptable at 0x000140737c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_142fa7380 + *(int *)(&UNK_142fa7380 + (ulonglong)uVar20 * 4)))();
    return;
  }
  pbStack_98 = (byte *)0x0;
  pbStack_138 = pbStack_b8;
  pbStack_130 = pbStack_b0;
  pbStack_128 = pbStack_a8;
  if (*(longlong *)(pbStack_b8 + 0x1c8) != 0) {
    uVar16 = pdb_1400af0a0(pbStack_b8 + 0x1d0,&pbStack_130);
    lVar30 = *(longlong *)(pbVar27 + 0x1b0);
    uVar7 = *(ulonglong *)(pbVar27 + 0x1b8);
    bVar33 = (byte)(uVar16 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar26 = 0;
    iVar10 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                    CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar11 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                    CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar12 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                    CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar13 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                    CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar16 = uVar16 & uVar7;
      pcVar2 = (char *)(lVar30 + uVar16);
      auVar36[0] = -(*pcVar2 == auVar34[0]);
      auVar36[1] = -(pcVar2[1] == auVar34[1]);
      auVar36[2] = -(pcVar2[2] == auVar34[2]);
      auVar36[3] = -(pcVar2[3] == auVar34[3]);
      auVar36[4] = -(pcVar2[4] == auVar34[4]);
      auVar36[5] = -(pcVar2[5] == auVar34[5]);
      auVar36[6] = -(pcVar2[6] == auVar34[6]);
      auVar36[7] = -(pcVar2[7] == auVar34[7]);
      auVar36[8] = -(pcVar2[8] == auVar34[0]);
      auVar36[9] = -(pcVar2[9] == auVar34[1]);
      auVar36[10] = -(pcVar2[10] == auVar34[2]);
      auVar36[0xb] = -(pcVar2[0xb] == auVar34[3]);
      auVar36[0xc] = -(pcVar2[0xc] == auVar34[4]);
      auVar36[0xd] = -(pcVar2[0xd] == auVar34[5]);
      auVar36[0xe] = -(pcVar2[0xe] == auVar34[6]);
      auVar36[0xf] = -(pcVar2[0xf] == auVar34[7]);
      uVar28 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar25 = 0;
        for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        lVar29 = (uVar25 + uVar16 & uVar7) * -0xd8;
        if (pbStack_130 == *(byte **)(lVar30 + -0xd8 + lVar29)) {
          lVar30 = lVar30 + lVar29;
          *(undefined8 *)(lVar30 + -0xa8) = uStack_198;
          *(undefined8 *)(lVar30 + -0xa0) = uStack_190;
          *(undefined8 *)(lVar30 + -0xb8) = uStack_1a8;
          *(undefined8 *)(lVar30 + -0xb0) = uStack_1a0;
          *(int *)(lVar30 + -0x98) = (int)pbStack_98;
          *(undefined4 *)(lVar30 + -0x94) = 0;
          *(undefined4 *)(lVar30 + -0x90) = 0;
          *(undefined4 *)(lVar30 + -0x8c) = 0;
          *(undefined4 *)(lVar30 + -0x88) = 0;
          *(undefined4 *)(lVar30 + -0x84) = 0;
          *(undefined4 *)(lVar30 + -0x80) = 0;
          *(undefined8 *)(lVar30 + -0x7c) = 0;
          *(undefined1 *)(lVar30 + -0x74) = 0;
          *(undefined1 *)(lVar30 + -0x73) = 0;
          *(undefined1 *)(lVar30 + -0x72) = 0;
          *(undefined1 *)(lVar30 + -0x71) = 4;
          pbStack_148 = pbStack_128;
          pbStack_158 = pbStack_138;
          pbStack_150 = pbStack_130;
          plVar15 = *(longlong **)(param_4 + 0x50);
          plStack_170 = plVar15 + *(longlong *)(param_4 + 0x58) * 0xc;
          pbVar27 = (byte *)0x0;
          plVar23 = plStack_170;
          if (plVar15 == plStack_170) {
            return;
          }
          goto LAB_140737ec2;
        }
        uVar28 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar28);
      }
      auVar35[0] = -(*pcVar2 == (char)iVar10);
      auVar35[1] = -(pcVar2[1] == (char)((uint)iVar10 >> 8));
      auVar35[2] = -(pcVar2[2] == (char)((uint)iVar10 >> 0x10));
      auVar35[3] = -(pcVar2[3] == (char)((uint)iVar10 >> 0x18));
      auVar35[4] = -(pcVar2[4] == (char)iVar11);
      auVar35[5] = -(pcVar2[5] == (char)((uint)iVar11 >> 8));
      auVar35[6] = -(pcVar2[6] == (char)((uint)iVar11 >> 0x10));
      auVar35[7] = -(pcVar2[7] == (char)((uint)iVar11 >> 0x18));
      auVar35[8] = -(pcVar2[8] == (char)iVar12);
      auVar35[9] = -(pcVar2[9] == (char)((uint)iVar12 >> 8));
      auVar35[10] = -(pcVar2[10] == (char)((uint)iVar12 >> 0x10));
      auVar35[0xb] = -(pcVar2[0xb] == (char)((uint)iVar12 >> 0x18));
      auVar35[0xc] = -(pcVar2[0xc] == (char)iVar13);
      auVar35[0xd] = -(pcVar2[0xd] == (char)((uint)iVar13 >> 8));
      auVar35[0xe] = -(pcVar2[0xe] == (char)((uint)iVar13 >> 0x10));
      auVar35[0xf] = -(pcVar2[0xf] == (char)((uint)iVar13 >> 0x18));
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar16 = uVar16 + lVar26 + 0x10;
      lVar26 = lVar26 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
LAB_140737ec2:
  while( true ) {
    plVar1 = plVar15 + 0xc;
    if (SBORROW8(0,*plVar15)) break;
    pbStack_130 = _DAT_14329c330;
    pbStack_128 = _UNK_14329c338;
    pbStack_138 = pbVar27;
    pbStack_130 = (byte *)pdb_1400affa0(&pbStack_138);
    pbStack_138 = pbStack_178;
    uVar18 = pdb_1400b0130(&pbStack_138);
    pdb_140737a40(&pbStack_158,pbStack_160,uVar18,plVar15);
    pbVar27 = pbVar27 + 1;
    plVar15 = plVar1;
    if (plVar1 == plVar23) {
      return;
    }
  }
  pbVar31 = (byte *)plVar15[2];
  pbVar17 = (byte *)plVar15[3];
  pbStack_b8 = (byte *)0x0;
  pbStack_b0 = (byte *)0x1;
  pbStack_c0 = (byte *)0x1;
  pbStack_a8 = (byte *)0x0;
  pbStack_1b8 = pbVar31;
  pbStack_1b0 = pbVar17;
  pbStack_188 = pbVar27 + 1;
  plStack_180 = plVar1;
  plStack_d0 = plVar15;
  do {
    pbStack_98 = pbStack_a8;
    pdb_140f67bb0(&pbStack_138,pbVar31,pbVar17,&UNK_142fa7318,3);
    plVar15 = plStack_d0;
    if ((char)pbStack_138 != '\0') {
      pbVar27 = pbStack_110;
      if (pbStack_100 == (byte *)0xffffffffffffffff) {
        pbVar22 = pbStack_110 + (longlong)(pbStack_d8 + -1);
        if (pbVar22 < pbStack_e8) {
          pbStack_c8 = pbStack_130 + lStack_e0 + -1;
LAB_14073812a:
          pbVar21 = pbStack_d8;
          if (((ulonglong)pbStack_118 >> ((ulonglong)pbVar22[lStack_f0] & 0x3f) & 1) == 0)
          goto LAB_140738113;
          lVar30 = 0;
          pbVar22 = pbVar27;
          do {
            if (pbStack_d8 <= pbStack_130 + lVar30) {
              pbVar22 = pbStack_130 + -1;
              if (pbStack_d8 <= pbVar22) {
                if (pbStack_130 != (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pbVar22,pbStack_d8,&UNK_142fa7258);
                }
                goto joined_r0x000140738333;
              }
              pbVar22 = pbVar22 + (longlong)pbVar27;
              pbVar24 = pbStack_c8;
              pbVar19 = pbStack_130;
              goto LAB_1407381a0;
            }
            if (pbStack_e8 <= pbStack_130 + (longlong)pbVar22) {
              pbVar31 = pbVar27 + (longlong)pbStack_130;
              if (pbVar27 + (longlong)pbStack_130 < pbStack_e8) {
                pbVar31 = pbStack_e8;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pbVar31,pbStack_e8,&UNK_142fa7288);
            }
            lVar26 = lVar30 + lStack_e0;
            pbVar21 = pbVar22 + 1;
            lVar30 = lVar30 + 1;
            pbVar24 = pbVar22 + (longlong)(pbStack_130 + lStack_f0);
            pbVar22 = pbVar21;
          } while (pbStack_130[lVar26] == *pbVar24);
          goto LAB_140738116;
        }
      }
      else {
        pbVar22 = pbStack_110 + (longlong)(pbStack_d8 + -1);
        if (pbVar22 < pbStack_e8) {
          lVar30 = CONCAT53(uStack_11d,CONCAT12(cStack_11e,CONCAT11(uStack_11f,bStack_120)));
          pbStack_168 = pbStack_d8 + -lVar30;
          pbStack_c8 = pbStack_118;
          pbVar21 = pbStack_100;
LAB_140737fd3:
          if (((ulonglong)pbStack_118 >> ((ulonglong)pbVar22[lStack_f0] & 0x3f) & 1) == 0) {
            pbVar27 = pbVar27 + (longlong)pbStack_d8;
            pbVar21 = (byte *)0x0;
          }
          else {
            pbVar22 = pbStack_130;
            if (pbStack_130 < pbVar21) {
              pbVar22 = pbVar21;
            }
            pbVar24 = pbVar22;
            do {
              pbVar19 = pbStack_130;
              if (pbStack_d8 <= pbVar24) goto LAB_140738040;
              if (pbStack_e8 <= pbVar27 + (longlong)pbVar24) {
                pbVar31 = pbVar22 + (longlong)pbVar27;
                if (pbVar22 + (longlong)pbVar27 < pbStack_e8) {
                  pbVar31 = pbStack_e8;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(pbVar31,pbStack_e8,&UNK_142fa7288);
              }
              pbVar19 = pbVar24 + 1;
              pbVar3 = pbVar24 + lStack_e0;
              pbVar4 = pbVar24 + (longlong)(pbVar27 + lStack_f0);
              pbVar24 = pbVar19;
            } while (*pbVar3 == *pbVar4);
            pbVar27 = pbVar19 + ((longlong)pbVar27 - (longlong)pbStack_130);
            pbVar21 = (byte *)0x0;
          }
          goto LAB_140737fc6;
        }
      }
LAB_1407387b1:
      if (pbStack_b8 + -(longlong)pbStack_98 < pbVar17) {
        pdb_142d7f1b0(&pbStack_b8,pbStack_98,pbVar17,1,1);
        pbVar27 = pbStack_a8;
LAB_1407387cf:
        pbVar22 = pbStack_b0;
        pbVar21 = pbStack_b8;
        pub_142e32760(pbVar27 + (longlong)pbStack_b0,pbVar31,pbVar17);
      }
      else {
        pbVar27 = pbStack_98;
        pbVar21 = pbStack_b8;
        pbVar22 = pbStack_b0;
        if (pbVar17 != (byte *)0x0) goto LAB_1407387cf;
      }
      pbVar27 = pbVar27 + (longlong)pbVar17;
      pbStack_c0 = pbVar21;
      goto LAB_1407385fc;
    }
    if (cStack_11e != '\0') goto LAB_1407387b1;
    if (pbStack_130 != (byte *)0x0) {
      pbVar22 = pbStack_130;
      if (pbStack_130 < pbStack_e8) {
        if (-0x41 < (char)pbStack_130[lStack_f0]) goto LAB_140738218;
      }
      else if (pbStack_130 == pbStack_e8) goto LAB_140738218;
      goto LAB_1407388f3;
    }
LAB_140738218:
    pbVar27 = pbStack_130;
    if (pbStack_130 == pbStack_e8) {
      if ((bStack_120 & 1) == 0) goto LAB_1407387b1;
    }
    else {
      bVar33 = pbStack_130[lStack_f0];
      uVar20 = (uint)bVar33;
      if ((char)bVar33 < '\0') {
        if (bVar33 < 0xe0) {
          uVar20 = (uVar20 & 0x1f) << 6 | pbStack_130[lStack_f0 + 1] & 0x3f;
        }
        else {
          uVar25 = pbStack_130[lStack_f0 + 2] & 0x3f | (pbStack_130[lStack_f0 + 1] & 0x3f) << 6;
          if (bVar33 < 0xf0) {
            uVar20 = (uVar20 & 0x1f) << 0xc | uVar25;
          }
          else {
            uVar20 = (uVar20 & 7) << 0x12 | pbStack_130[lStack_f0 + 3] & 0x3f | uVar25 << 6;
          }
        }
      }
      if ((bStack_120 & 1) == 0) {
        lVar30 = 1;
        if ((0x7f < uVar20) && (lVar30 = 2, 0x7ff < uVar20)) {
          lVar30 = 4 - (ulonglong)(uVar20 < 0x10000);
        }
        pbVar22 = pbStack_130 + lVar30;
        if (pbVar22 != (byte *)0x0) {
          if (pbVar22 < pbStack_e8) {
            if ((char)pbVar22[lStack_f0] < -0x40) {
LAB_1407388f3:
              pdb_142dc8070(lStack_f0,pbStack_e8,pbVar22,pbStack_e8,&UNK_142fa7230);
              goto LAB_14073893d;
            }
          }
          else if (pbVar22 != pbStack_e8) goto LAB_1407388f3;
        }
        pbVar27 = pbStack_e8;
        if (pbVar22 != pbStack_e8) {
          pbVar27 = pbVar22;
        }
      }
    }
joined_r0x000140738333:
    if (pbVar27 != (byte *)0x0) {
      if (pbVar27 < pbVar17) {
        if (-0x41 < (char)pbVar31[(longlong)pbVar27]) {
LAB_140738356:
          pbVar22 = pbStack_98;
          if (pbStack_b8 + -(longlong)pbStack_98 < pbVar27) {
            pdb_142d7f1b0(&pbStack_b8,pbStack_98,pbVar27,1,1);
            pbStack_c0 = pbStack_b0;
            pbVar22 = pbStack_a8;
          }
          pub_142e32760(pbStack_c0 + (longlong)pbVar22,pbVar31,pbVar27);
          pbStack_a8 = pbVar22 + (longlong)pbVar27;
          pbVar27 = pbVar27 + 3;
          pbStack_98 = pbStack_a8;
          if (pbVar27 == (byte *)0x0) {
            pbVar27 = (byte *)0x0;
            goto LAB_1407383b9;
          }
          bVar32 = pbVar27 == pbVar17;
          pbVar22 = pbVar27;
          if (pbVar27 < pbVar17) goto LAB_14073839f;
          goto LAB_140738204;
        }
      }
      else if (pbVar27 == pbVar17) goto LAB_140738356;
      pdb_142dc8070(pbVar31,pbVar17,0,pbVar27,&UNK_142fa7320);
      goto LAB_14073893d;
    }
    pbVar27 = (byte *)0x3;
    bVar32 = pbVar17 == (byte *)0x3;
    pbVar22 = pbVar27;
    if (pbVar17 < (byte *)0x4) {
LAB_140738204:
      pbVar27 = pbVar17;
      if (!bVar32) {
LAB_1407388b3:
        pdb_142dc8070(pbVar31,pbVar17,pbVar22,pbVar17,&UNK_142fa7338);
        goto LAB_14073893d;
      }
    }
    else {
LAB_14073839f:
      pbVar22 = pbVar27;
      if ((char)pbVar31[(longlong)pbVar27] < -0x40) goto LAB_1407388b3;
    }
LAB_1407383b9:
    pbVar22 = pbVar17 + -(longlong)pbVar27;
    pbVar31 = pbVar31 + (longlong)pbVar27;
    pbVar27 = (byte *)0x0;
    do {
      while( true ) {
        pbVar17 = pbVar31 + (longlong)pbVar27;
        if (pbVar22 + -(longlong)pbVar27 < (byte *)0x10) {
          pbVar21 = (byte *)0x0;
          if (pbVar22 == pbVar27) goto LAB_1407385a0;
          while (pbVar17[(longlong)pbVar21] != 0x29) {
            pbVar21 = pbVar21 + 1;
            if (pbVar22 + -(longlong)pbVar27 == pbVar21) goto LAB_1407385a0;
          }
        }
        else {
          lVar30 = pdb_140f69320(0x29);
          pbVar21 = pbVar17;
          if (lVar30 != 1) goto LAB_1407385a0;
        }
        pbVar17 = pbVar21 + (longlong)pbVar27 + 1;
        pbVar21 = pbVar21 + (longlong)pbVar27;
        pbVar27 = pbVar17;
        if (pbVar21 < pbVar22) break;
        if (pbVar22 < pbVar17) goto LAB_1407385a0;
      }
    } while ((pbVar17 <= pbVar22) && (pbVar31[(longlong)pbVar21] != 0x29));
    if (pbVar31[(longlong)pbVar21] != 0x29) goto LAB_1407385a0;
    pbVar27 = pbVar21 + 1;
    pbVar17 = pbVar22 + -(longlong)pbVar27;
    if ((pbVar27 <= pbVar22 && pbVar17 != (byte *)0x0) && ((char)pbVar31[(longlong)pbVar27] < -0x40)
       ) {
      pdb_142dc8070(pbVar31,pbVar22,pbVar27,pbVar22,&UNK_142fa7350);
LAB_14073893d:
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    uVar18 = pdb_140dc6290(pbVar31);
    pbStack_c8 = pbVar27;
    if (pbStack_b8 + -(longlong)pbStack_98 < pbVar21) {
      pdb_142d7f1b0(&pbStack_b8,pbStack_98,pbVar21,1,1);
      pbVar27 = pbStack_a8;
LAB_1407384c9:
      pbStack_c0 = pbStack_b0;
      pub_142e32760(pbStack_b0 + (longlong)pbVar27,uVar18,pbVar21);
    }
    else {
      pbVar27 = pbStack_98;
      if (pbVar21 != (byte *)0x0) goto LAB_1407384c9;
    }
    pbVar31 = pbVar31 + (longlong)pbStack_c8;
    pbStack_a8 = pbVar27 + (longlong)pbVar21;
  } while( true );
  while( true ) {
    if (pbStack_e8 <= pbVar22) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pbVar22,pbStack_e8,&UNK_142fa7270);
    }
    bVar33 = *pbVar24;
    pbVar24 = pbVar24 + -1;
    pbVar3 = pbVar22 + lStack_f0;
    pbVar22 = pbVar22 + -1;
    pbVar21 = (byte *)CONCAT53(uStack_11d,CONCAT12(cStack_11e,CONCAT11(uStack_11f,bStack_120)));
    if (bVar33 != *pbVar3) break;
LAB_1407381a0:
    bVar32 = pbVar19 == (byte *)0x0;
    pbVar19 = pbVar19 + -1;
    if (bVar32) goto joined_r0x000140738333;
  }
LAB_140738113:
  pbVar21 = pbVar27 + (longlong)pbVar21;
LAB_140738116:
  pbVar27 = pbVar21;
  pbVar22 = pbStack_d8 + -1 + (longlong)pbVar27;
  if (pbStack_e8 <= pbVar22) goto LAB_1407387b1;
  goto LAB_14073812a;
  while( true ) {
    pbVar19 = pbVar19 + -1;
    if (pbStack_d8 <= pbVar19) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pbVar19,pbStack_d8,&UNK_142fa7258);
    }
    pbVar22 = pbVar19 + (longlong)pbVar27;
    if (pbStack_e8 <= pbVar22) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pbVar22,pbStack_e8,&UNK_142fa7270);
    }
    if (pbVar19[lStack_e0] != pbVar22[lStack_f0]) break;
LAB_140738040:
    if (pbVar19 <= pbVar21) goto joined_r0x000140738333;
  }
  pbVar27 = pbVar27 + lVar30;
  pbVar21 = pbStack_168;
LAB_140737fc6:
  pbVar22 = pbVar27 + (longlong)(pbStack_d8 + -1);
  if (pbStack_e8 <= pbVar22) goto LAB_1407387b1;
  goto LAB_140737fd3;
LAB_1407385a0:
  ppbStack_1c8 = &pbStack_1b8;
  pcStack_1c0 = pdb_1402ed420;
  pdb_140f60760(&pbStack_138,&UNK_142fa7368,&ppbStack_1c8);
  pbVar27 = pbStack_128;
  pbVar22 = pbStack_130;
  pbStack_c0 = pbStack_138;
  if (pbStack_b8 != (byte *)0x0) {
    pub_1406abac0(pbStack_b0,(ulonglong)pbStack_b8,1);
  }
LAB_1407385fc:
  pbStack_b8 = pbVar22;
  pbStack_b0 = pbVar27;
  pbStack_98 = pbVar22;
  pbStack_138 = (byte *)pdb_140bbbcb0(&pbStack_b8);
  pbStack_130 = _DAT_14329c260;
  pbStack_128 = _UNK_14329c268;
  pbStack_130 = (byte *)pdb_1400affa0(&pbStack_138);
  pbStack_138 = pbStack_150;
  uVar18 = pdb_1400b0130(&pbStack_138);
  pdb_14072caa0(&pbStack_138,&pbStack_158,uVar18);
  uVar18 = pdb_14116ee90(&pbStack_138,0);
  pdb_14119b6b0(uVar18,pbStack_98,pbVar27);
  pbStack_1d8 = pbStack_128;
  pbStack_1e8 = pbStack_138;
  pbStack_1e0 = pbStack_130;
  if (pbStack_c0 != (byte *)0x0) {
    pub_1406abac0(pbStack_98,(ulonglong)pbStack_c0,1);
  }
  if ((int)plVar15[4] == 1) {
    uVar6 = *(undefined4 *)((longlong)plVar15 + 0x24);
    lVar30 = pdb_14116e180(&pbStack_1e8);
    *(undefined4 *)(lVar30 + 600) = uVar6;
    iVar10 = (int)plVar15[5];
  }
  else {
    iVar10 = (int)plVar15[5];
  }
  if (iVar10 == 1) {
    uVar18 = pdb_14116e180(&pbStack_1e8);
    pdb_14119b2b0(uVar18);
    iVar10 = (int)plVar15[6];
  }
  else {
    iVar10 = (int)plVar15[6];
  }
  if (iVar10 == 1) {
    uVar18 = pdb_14116e180(&pbStack_1e8);
    pdb_140cb5df0(uVar18);
    cVar14 = (char)plVar15[7];
  }
  else {
    cVar14 = (char)plVar15[7];
  }
  if (cVar14 != '\x04') {
    uVar18 = pdb_14116e180(&pbStack_1e8);
    pdb_140cb5a70(uVar18,cVar14);
  }
  uVar5 = *(undefined1 *)((longlong)plVar15 + 0x39);
  uVar18 = pdb_14116e180(&pbStack_1e8);
  pdb_140cb68f0(uVar18,uVar5);
  iVar10 = (uint)*(byte *)((longlong)plVar15 + 0x3a) * 100 + 100;
  if (*(byte *)((longlong)plVar15 + 0x3a) == 9) {
    iVar10 = 400;
  }
  uVar18 = pdb_14116e180(&pbStack_1e8);
  pdb_140cb5c70(uVar18,iVar10);
  pbVar27 = pbStack_188;
  plVar23 = plStack_170;
  plVar15 = plStack_180;
  if (plStack_180 == plStack_170) {
    return;
  }
  goto LAB_140737ec2;
}

