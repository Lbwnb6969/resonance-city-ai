// VA 0x1414f7a10, PDB extent 1873 bytes
// system_decorator::merge_proposal_wall_decorators::propose_wall_decorator_merge_position_inner
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/merge_proposal_wall_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::merge_proposal_wall_decorators::propose_wall_decorator_merge_position_inner
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/merge_proposal_wall_decorators.rs
   Extent: 1873 */

longlong *
pdb_1414f7a10(longlong *param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,float param_8,float param_9,
             uint param_10,ulonglong param_11,undefined8 *param_12)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  longlong *unaff_RBX;
  longlong *plVar20;
  ushort uVar21;
  int iVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong unaff_R12;
  undefined8 *unaff_R13;
  longlong *unaff_R14;
  byte bVar25;
  float extraout_XMM0_Da;
  undefined1 auVar26 [16];
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float unaff_XMM6_Da;
  float unaff_XMM8_Da;
  float fVar29;
  float fVar30;
  float fVar31;
  float unaff_XMM14_Da;
  float fVar32;
  longlong *plStack_178;
  float fStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  ulonglong uStack_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 uStack_138;
  code *pcStack_130;
  longlong *plStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  byte *pbStack_108;
  longlong lStack_100;
  undefined1 uStack_f5;
  byte bStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  
  puVar8 = param_12;
  uVar15 = param_11;
  uVar7 = param_10;
  uStack_f0 = 0xfffffffffffffffe;
  uVar17 = (ulonglong)param_10;
  uStack_150 = param_6;
  uStack_14c = param_7;
  plVar23 = param_4;
  uStack_140 = param_2;
  if (*(longlong *)(param_11 + 0x48) != 0) {
    lStack_118 = *param_3;
    uVar14 = pdb_1400aede0(param_11 + 0x50,&param_10);
    unaff_R12 = *(longlong *)(uVar15 + 0x30);
    bVar25 = (byte)(uVar14 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar26 = pshuflw(auVar26,auVar26,0);
    lVar19 = 0;
    iVar18 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                    CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar13 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                    CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar4 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar14 = uVar14 & *(ulonglong *)(uVar15 + 0x38);
      auVar1 = *(undefined1 (*) [16])(unaff_R12 + uVar14);
      auVar28[0] = -(auVar1[0] == auVar26[0]);
      auVar28[1] = -(auVar1[1] == auVar26[1]);
      auVar28[2] = -(auVar1[2] == auVar26[2]);
      auVar28[3] = -(auVar1[3] == auVar26[3]);
      auVar28[4] = -(auVar1[4] == auVar26[4]);
      auVar28[5] = -(auVar1[5] == auVar26[5]);
      auVar28[6] = -(auVar1[6] == auVar26[6]);
      auVar28[7] = -(auVar1[7] == auVar26[7]);
      auVar28[8] = -(auVar1[8] == auVar26[0]);
      auVar28[9] = -(auVar1[9] == auVar26[1]);
      auVar28[10] = -(auVar1[10] == auVar26[2]);
      auVar28[0xb] = -(auVar1[0xb] == auVar26[3]);
      auVar28[0xc] = -(auVar1[0xc] == auVar26[4]);
      auVar28[0xd] = -(auVar1[0xd] == auVar26[5]);
      auVar28[0xe] = -(auVar1[0xe] == auVar26[6]);
      auVar28[0xf] = -(auVar1[0xf] == auVar26[7]);
      uVar21 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      plVar20 = (longlong *)(ulonglong)uVar21;
      while (uVar21 != 0) {
        uVar2 = 0;
        for (uVar3 = (uint)plVar20; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar24 = (uVar2 + uVar14 & *(ulonglong *)(uVar15 + 0x38)) * -0x68;
        if (uVar7 == *(uint *)(unaff_R12 + -0x68 + lVar24)) {
          unaff_R12 = unaff_R12 + lVar24;
          uStack_13c = uVar7;
          uVar12 = pdb_140c45920(puVar8,uVar17);
          uVar9 = *(undefined1 *)(unaff_R12 + -7);
          unaff_R13 = (undefined8 *)*puVar8;
          cStack_f1 = (char)uVar12;
          uVar10 = pdb_1409012c0(uVar12,unaff_R13);
          uVar17 = puVar8[1];
          uVar9 = pdb_140c44ba0(uVar9);
          uStack_110._0_2_ = CONCAT11(uVar10,uVar9);
          lVar19 = pdb_141494370(uVar17,&uStack_110);
          if (lVar19 == 0) goto LAB_1414f804a;
          bVar25 = *(byte *)(unaff_R12 + -0x2e);
          uVar15 = (ulonglong)bVar25;
          iVar18 = (int)lStack_118;
          if (1 < bVar25) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143317ca8,0x28,&UNK_143317cd0);
          }
          unaff_XMM14_Da = *(float *)(lVar19 + 0x3c) - *(float *)(lVar19 + 0x38);
          unaff_XMM8_Da = *(float *)(unaff_R12 + -0x50);
          unaff_XMM6_Da = *(float *)(unaff_R12 + -0x4c);
          plVar23 = *(longlong **)(unaff_R12 + -0x48);
          uStack_f5 = *(undefined1 *)(unaff_R12 + -0x30);
          bStack_f4 = *(byte *)(unaff_R12 + -0x2f);
          lVar19 = param_3[1];
          iVar13 = (int)*(undefined8 *)(unaff_R12 + -0x60);
          plStack_178 = param_4;
          if (iVar18 != 6) goto LAB_1414f7c37;
          if ((iVar13 != 6) || (*(longlong *)(unaff_R12 + -0x58) != lVar19)) goto LAB_1414f7c74;
          goto LAB_1414f7c3b;
        }
        iVar22 = (uint)plVar20 - 1;
        uVar21 = (ushort)iVar22 & (ushort)plVar20;
        plVar20 = (longlong *)(ulonglong)CONCAT22((short)((uint)iVar22 >> 0x10),uVar21);
        plVar23 = plVar20;
      }
      auVar27[0] = -(auVar1[0] == (char)iVar18);
      auVar27[1] = -(auVar1[1] == (char)((uint)iVar18 >> 8));
      auVar27[2] = -(auVar1[2] == (char)((uint)iVar18 >> 0x10));
      auVar27[3] = -(auVar1[3] == (char)((uint)iVar18 >> 0x18));
      auVar27[4] = -(auVar1[4] == (char)iVar13);
      auVar27[5] = -(auVar1[5] == (char)((uint)iVar13 >> 8));
      auVar27[6] = -(auVar1[6] == (char)((uint)iVar13 >> 0x10));
      auVar27[7] = -(auVar1[7] == (char)((uint)iVar13 >> 0x18));
      auVar27[8] = -(auVar1[8] == (char)iVar4);
      auVar27[9] = -(auVar1[9] == (char)((uint)iVar4 >> 8));
      auVar27[10] = -(auVar1[10] == (char)((uint)iVar4 >> 0x10));
      auVar27[0xb] = -(auVar1[0xb] == (char)((uint)iVar4 >> 0x18));
      auVar27[0xc] = -(auVar1[0xc] == (char)iVar5);
      auVar27[0xd] = -(auVar1[0xd] == (char)((uint)iVar5 >> 8));
      auVar27[0xe] = -(auVar1[0xe] == (char)((uint)iVar5 >> 0x10));
      auVar27[0xf] = -(auVar1[0xf] == (char)((uint)iVar5 >> 0x18));
      unaff_RBX = param_3;
      unaff_R13 = puVar8;
      unaff_R14 = param_4;
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar14 = uVar14 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
  param_1 = unaff_R14;
  param_3 = unaff_RBX;
  iVar18 = 0x43317c34;
  bStack_f4 = 0x90;
  lVar19 = 0x16;
  iVar13 = pdb_142dc8110();
LAB_1414f7c37:
  bVar25 = (byte)uVar15;
  if (iVar13 == iVar18) {
LAB_1414f7c3b:
    uVar14 = (ulonglong)*(byte *)(unaff_R12 + -7) + (ulonglong)*(byte *)((longlong)param_3 + 0x59);
    uVar15 = pdb_140901330(lStack_118);
    if (uVar14 <= uVar15) {
      fVar29 = _DAT_142e36f28;
      if (lStack_118 != 2) {
        fVar29 = 0.0;
      }
      fVar32 = 0.0;
      if ((int)lStack_118 != 2) {
        fVar32 = _DAT_142e36f28;
      }
      uStack_f2 = (undefined1)param_3[0xb];
      uStack_f3 = *(undefined1 *)((longlong)param_3 + 0x5a);
      lVar24 = param_3[10];
      uStack_148 = uVar14;
      uVar9 = pdb_1409012c0(cStack_f1,unaff_R13);
      uVar10 = pdb_140c44ba0(uStack_148);
      uStack_110._0_2_ = CONCAT11(uVar9,uVar10);
      lVar16 = pdb_141494370(uVar17,&uStack_110);
      if (lVar16 != 0) {
        uVar12 = *(undefined4 *)(lVar16 + 0x30);
        fVar31 = *(float *)(lVar16 + 0x3c) - *(float *)(lVar16 + 0x38);
        uStack_138 = (undefined8 *)CONCAT44(param_7,param_6);
        fVar30 = unaff_XMM6_Da - param_9;
        if ((float)(_DAT_142e377e0 & (uint)fVar30) < _DAT_142e36f50 * unaff_XMM14_Da) {
          pdb_140dea770(&uStack_138);
        }
        lVar16 = pdb_1409012b0(unaff_R12 + -0x60);
        if ((lVar16 == 0) ||
           (cVar11 = pdb_140b86c70(*(undefined1 *)(lVar16 + 0x20)), uVar9 = uStack_f5,
           cVar11 == '\0')) {
          if (fVar29 < fVar32) {
            pdb_140dea7c0(&uStack_150);
            fVar29 = 0.0;
            uStack_138 = (undefined8 *)CONCAT44(param_7,param_6);
            uVar17 = pdb_140dea700(&uStack_138);
            if ((uVar17 & 1) == 0) {
              *param_1 = 8;
              return param_1;
            }
            if (cStack_f1 == '\t') {
              fVar29 = (fVar31 - unaff_XMM14_Da) * _DAT_142e36f50;
            }
            unaff_XMM6_Da = unaff_XMM6_Da + fVar29;
            fVar30 = unaff_XMM6_Da - param_9;
            unaff_XMM8_Da = extraout_XMM0_Da;
          }
          uVar9 = pdb_14007fac0();
        }
        uStack_110 = 0;
        pbStack_108 = (byte *)0x4;
        lStack_100 = 0;
        uStack_138 = (undefined8 *)&uStack_140;
        pcStack_130 = (code *)&param_10;
        plStack_128 = plStack_178;
        uStack_120 = param_5;
        fStack_160 = unaff_XMM8_Da;
        fStack_15c = unaff_XMM6_Da;
        uStack_158 = uVar12;
        fStack_154 = fVar31;
        pdb_1424cc760(&fStack_160,param_6);
        if (lStack_100 == 0) {
          *param_1 = lStack_118;
          param_1[1] = lVar19;
          lVar19 = param_3[3];
          lVar16 = param_3[4];
          lVar6 = param_3[5];
          param_1[2] = param_3[2];
          param_1[3] = lVar19;
          param_1[4] = lVar16;
          param_1[5] = lVar6;
          param_1[6] = param_3[6];
          lVar19 = param_3[8];
          param_1[7] = param_3[7];
          param_1[8] = lVar19;
          param_1[9] = param_3[9];
          param_1[10] = lVar24;
          *(undefined1 *)(param_1 + 0xb) = uStack_f2;
          *(char *)((longlong)param_1 + 0x59) = (char)uStack_148;
          *(undefined1 *)((longlong)param_1 + 0x5a) = uStack_f3;
          *(float *)(param_1 + 0xc) = unaff_XMM8_Da;
          *(float *)((longlong)param_1 + 100) = unaff_XMM6_Da;
          param_1[0xd] = (longlong)plVar23;
          *(undefined1 *)(param_1 + 0xe) = uVar9;
          *(byte *)((longlong)param_1 + 0x71) = bStack_f4 & 1;
          *(byte *)((longlong)param_1 + 0x72) = bVar25;
          *(uint *)(param_1 + 0xf) = uStack_13c;
          *(float *)((longlong)param_1 + 0x7c) =
               SQRT(fVar30 * fVar30 + (unaff_XMM8_Da - param_8) * (unaff_XMM8_Da - param_8));
        }
        else {
          *param_1 = 8;
        }
        if (uStack_110 == 0) {
          return param_1;
        }
        pub_1406abac0(pbStack_108,uStack_110 << 2,4);
        return param_1;
      }
LAB_1414f804a:
      uStack_138 = &uStack_110;
      pcStack_130 = pdb_1414942d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_138,&UNK_14330e2f8);
    }
  }
LAB_1414f7c74:
  *param_1 = 8;
  return param_1;
}

