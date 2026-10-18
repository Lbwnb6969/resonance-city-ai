// VA 0x142388030, PDB extent 1084 bytes
// toolbar::ui_interaction::iter_subtree<tuple$<>,toolbar::ui_interaction::ui_nav_update::closure$0::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::ui_interaction::iter_subtree<tuple$<>,toolbar::ui_interaction::ui_nav_update::closure$0::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 1084 */

undefined8 pdb_142388030(undefined8 param_1,int param_2,int param_3,longlong *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  longlong lVar19;
  ushort uVar20;
  longlong lVar21;
  longlong lVar22;
  byte bVar23;
  float fVar24;
  undefined1 auVar25 [16];
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
  float fVar26;
  float fVar28;
  undefined1 auVar27 [16];
  float fVar29;
  float fVar30;
  float fVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  int iStack_98;
  int iStack_94;
  longlong lStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  int aiStack_78 [2];
  longlong lStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  byte *pbStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  _iStack_98 = CONCAT44(param_3,param_2);
  plVar3 = (longlong *)*param_4;
  if (plVar3[3] != 0) {
    uVar14 = pdb_141176ad0(plVar3 + 4,&iStack_98);
    bVar23 = (byte)(uVar14 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar23,bVar23));
    auVar25 = pshuflw(auVar25,auVar25,0);
    lVar19 = 0;
    iVar8 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar10 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                    CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar11 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                    CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar12 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                    CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    do {
      uVar14 = uVar14 & plVar3[1];
      pcVar1 = (char *)(*plVar3 + uVar14);
      auVar31[0] = -(*pcVar1 == auVar25[0]);
      auVar31[1] = -(pcVar1[1] == auVar25[1]);
      auVar31[2] = -(pcVar1[2] == auVar25[2]);
      auVar31[3] = -(pcVar1[3] == auVar25[3]);
      auVar31[4] = -(pcVar1[4] == auVar25[4]);
      auVar31[5] = -(pcVar1[5] == auVar25[5]);
      auVar31[6] = -(pcVar1[6] == auVar25[6]);
      auVar31[7] = -(pcVar1[7] == auVar25[7]);
      auVar31[8] = -(pcVar1[8] == auVar25[0]);
      auVar31[9] = -(pcVar1[9] == auVar25[1]);
      auVar31[10] = -(pcVar1[10] == auVar25[2]);
      auVar31[0xb] = -(pcVar1[0xb] == auVar25[3]);
      auVar31[0xc] = -(pcVar1[0xc] == auVar25[4]);
      auVar31[0xd] = -(pcVar1[0xd] == auVar25[5]);
      auVar31[0xe] = -(pcVar1[0xe] == auVar25[6]);
      auVar31[0xf] = -(pcVar1[0xf] == auVar25[7]);
      uVar20 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar20;
      while (uVar20 != 0) {
        uVar18 = 0;
        for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        lVar21 = *plVar3 + (uVar18 + uVar14 & plVar3[1]) * -0x10;
        if ((param_3 == *(int *)(lVar21 + -0xc)) && (param_2 == *(int *)(lVar21 + -0x10))) {
          lVar19 = ((longlong *)param_4[1])[1];
          uVar4 = *(undefined8 *)(lVar21 + -8);
          if (((ulonglong)~(uint)uVar4 < *(ulonglong *)(lVar19 + 0x10)) &&
             ((piVar17 = (int *)((ulonglong)~(uint)uVar4 * 0x18 + *(longlong *)(lVar19 + 8)),
              piVar17[4] == (int)((ulonglong)uVar4 >> 0x20) && (*piVar17 != 0)))) {
            lVar21 = *(longlong *)param_4[1];
            uVar14 = *(ulonglong *)(piVar17 + 2);
            if (((uVar14 & 0xffffffff) < *(ulonglong *)(lVar21 + 0x38)) &&
               ((*(ulonglong *)(*(longlong *)(lVar21 + 0x28) + (uVar14 >> 6 & 0x3ffffff) * 8) >>
                 (uVar14 & 0x3f) & 1) != 0)) {
              lVar22 = (uVar14 & 0xffffffff) * 0xa0;
              uVar5 = *(ulonglong *)(lVar21 + 0x110);
              bVar13 = true;
              if ((uVar5 < *(ulonglong *)(*(longlong *)(lVar19 + 0x100) + 0x88 + lVar22)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar19 + 0x100) + lVar22 + 0x80) + uVar5 * 8) != 0))
              {
                lVar19 = (uVar14 >> 0x20) * 0x48 + *(longlong *)(lVar19 + 0x1a0);
                if ((*(ulonglong *)(lVar19 + 0x40) <= uVar5) ||
                   (uVar14 = *(ulonglong *)(*(longlong *)(lVar19 + 0x38) + uVar5 * 8), uVar14 == 0))
                {
                  bVar13 = false;
                  goto LAB_142388206;
                }
                lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar14 * 0x30);
                bVar13 = false;
              }
              else {
LAB_142388206:
                lVar19 = 0;
              }
              if (!bVar13 && lVar19 != 0) {
                uVar2 = *(undefined8 *)(lVar19 + (ulonglong)(uint)~piVar17[1] * 0x10);
                fVar26 = (float)uVar2 - (float)*(undefined8 *)param_4[2];
                fVar28 = (float)((ulonglong)uVar2 >> 0x20) -
                         (float)((ulonglong)*(undefined8 *)param_4[2] >> 0x20);
                fVar24 = SQRT(fVar28 * fVar28 + fVar26 * fVar26);
                fVar29 = _DAT_142e36f28 / fVar24;
                uVar18 = (uint)((int)fVar29 - 1U < 0x7fffff ||
                               (int)ABS(fVar29) - 0x800000U < 0x7f000000 && -1 < (int)fVar29);
                fVar30 = (float)*(undefined8 *)param_4[3];
                fVar33 = (float)((ulonglong)*(undefined8 *)param_4[3] >> 0x20);
                fVar9 = _DAT_142e36f28 / SQRT(fVar33 * fVar33 + fVar30 * fVar30);
                fVar33 = fVar9 * fVar33;
                uVar16 = (uint)((int)fVar9 - 1U < 0x7fffff ||
                               (int)ABS(fVar9) - 0x800000U < 0x7f000000 && -1 < (int)fVar9);
                auVar32._0_4_ = (int)(uVar16 << 0x1f) >> 0x1f;
                auVar32._4_4_ = (int)(uVar16 << 0x1f) >> 0x1f;
                auVar32._8_4_ = (int)(uVar16 << 0x1f) >> 0x1f;
                auVar32._12_4_ = (int)(uVar16 << 0x1f) >> 0x1f;
                auVar25[4] = SUB41(fVar33,0);
                auVar25._0_4_ = fVar9 * fVar30;
                auVar25[5] = (char)((uint)fVar33 >> 8);
                auVar25[6] = (char)((uint)fVar33 >> 0x10);
                auVar25[7] = (char)((uint)fVar33 >> 0x18);
                auVar25._8_8_ = 0;
                if ((0.0 < SUB164(auVar32 & auVar25,4) *
                           (float)((int)(uVar18 << 0x1f) >> 0x1f & (uint)(fVar29 * fVar28)) +
                           SUB164(auVar32 & auVar25,0) *
                           (float)((int)(uVar18 << 0x1f) >> 0x1f & (uint)(fVar29 * fVar26))) &&
                   (pfVar6 = (float *)param_4[4], fVar24 < *pfVar6)) {
                  *(undefined8 *)param_4[5] = uVar4;
                  *pfVar6 = fVar24;
                }
              }
            }
          }
          goto LAB_142388359;
        }
        uVar20 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar20);
      }
      auVar27[0] = -(*pcVar1 == (char)iVar8);
      auVar27[1] = -(pcVar1[1] == (char)((uint)iVar8 >> 8));
      auVar27[2] = -(pcVar1[2] == (char)((uint)iVar8 >> 0x10));
      auVar27[3] = -(pcVar1[3] == (char)((uint)iVar8 >> 0x18));
      auVar27[4] = -(pcVar1[4] == (char)iVar10);
      auVar27[5] = -(pcVar1[5] == (char)((uint)iVar10 >> 8));
      auVar27[6] = -(pcVar1[6] == (char)((uint)iVar10 >> 0x10));
      auVar27[7] = -(pcVar1[7] == (char)((uint)iVar10 >> 0x18));
      auVar27[8] = -(pcVar1[8] == (char)iVar11);
      auVar27[9] = -(pcVar1[9] == (char)((uint)iVar11 >> 8));
      auVar27[10] = -(pcVar1[10] == (char)((uint)iVar11 >> 0x10));
      auVar27[0xb] = -(pcVar1[0xb] == (char)((uint)iVar11 >> 0x18));
      auVar27[0xc] = -(pcVar1[0xc] == (char)iVar12);
      auVar27[0xd] = -(pcVar1[0xd] == (char)((uint)iVar12 >> 8));
      auVar27[0xe] = -(pcVar1[0xe] == (char)((uint)iVar12 >> 0x10));
      auVar27[0xf] = -(pcVar1[0xf] == (char)((uint)iVar12 >> 0x18));
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
    } while( true );
  }
LAB_142388359:
  pdb_1411bdd60(aiStack_78,param_1,param_2,param_3);
  if (aiStack_78[0] == 4) {
    lStack_50 = lStack_70;
    pbStack_58 = (byte *)CONCAT17(uStack_61,
                                  CONCAT16(uStack_62,
                                           CONCAT15(uStack_63,
                                                    CONCAT14(uStack_64,
                                                             CONCAT13(uStack_65,
                                                                      CONCAT12(uStack_66,
                                                                               CONCAT11(uStack_67,
                                                                                        uStack_68)))
                                                            ))));
    pbVar15 = pbStack_58;
    for (lVar19 = CONCAT17(uStack_59,
                           CONCAT16(uStack_5a,
                                    CONCAT15(uStack_5b,
                                             CONCAT14(uStack_5c,
                                                      CONCAT13(uStack_5d,
                                                               CONCAT12(uStack_5e,
                                                                        CONCAT11(uStack_5f,uStack_60
                                                                                ))))))) << 3;
        lVar19 != 0; lVar19 = lVar19 + -8) {
      pdb_142388030(param_1,*(undefined4 *)pbVar15,*(undefined4 *)(pbVar15 + 4),param_4);
      pbVar15 = pbVar15 + 8;
    }
    if (lStack_50 != 0) {
      pub_1406abac0(pbStack_58,lStack_50 << 3,4);
    }
    return 0;
  }
  uStack_88 = uStack_68;
  uStack_87 = uStack_67;
  uStack_86 = uStack_66;
  uStack_85 = uStack_65;
  uStack_84 = uStack_64;
  uStack_83 = uStack_63;
  uStack_82 = uStack_62;
  uStack_81 = uStack_61;
  uStack_80 = uStack_60;
  uStack_7f = uStack_5f;
  uStack_7e = uStack_5e;
  uStack_7d = uStack_5d;
  uStack_7c = uStack_5c;
  uStack_7b = uStack_5b;
  uStack_7a = uStack_5a;
  uStack_79 = uStack_59;
  lStack_90 = lStack_70;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1434de7c8,0x2b,&iStack_98,&UNK_1434de7a8,&UNK_1434de940);
}

