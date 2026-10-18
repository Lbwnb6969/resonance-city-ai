// VA 0x140a71a80, PDB extent 1412 bytes
// country_core::systems::ivy::ivy_pruner::ivy_pruner_cmd
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_pruner.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::ivy_pruner::ivy_pruner_cmd
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_pruner.rs
   Extent: 1412 */

void pdb_140a71a80(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ushort uVar26;
  undefined1 (*pauVar27) [16];
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  undefined1 (*pauVar32) [16];
  uint uVar33;
  ulonglong uVar34;
  undefined1 (*pauVar35) [16];
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  uint uVar42;
  ulonglong uVar43;
  longlong *plVar44;
  ulonglong uVar45;
  longlong lVar46;
  bool bVar47;
  int iVar48;
  int iVar49;
  byte bVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 unaff_XMM9_Ba;
  undefined1 unaff_XMM9_Bb;
  undefined1 unaff_XMM9_Bc;
  undefined1 unaff_XMM9_Bd;
  undefined1 unaff_XMM9_Be;
  undefined1 unaff_XMM9_Bf;
  undefined1 unaff_XMM9_Bg;
  undefined1 unaff_XMM9_Bh;
  undefined1 unaff_XMM9_Bi;
  undefined1 unaff_XMM9_Bj;
  undefined1 unaff_XMM9_Bk;
  undefined1 unaff_XMM9_Bl;
  undefined1 unaff_XMM9_Bm;
  undefined1 unaff_XMM9_Bn;
  undefined1 unaff_XMM9_Bo;
  undefined1 unaff_XMM9_Bp;
  longlong alStack_90 [10];
  
  puVar4 = (ulonglong *)*param_3;
  lVar31 = param_3[1];
  uVar36 = *puVar4;
  uVar37 = 0;
  uVar21 = uVar36 - *(ulonglong *)(lVar31 + 0x18);
  if (uVar36 < *(ulonglong *)(lVar31 + 0x18)) {
    uVar21 = uVar37;
  }
  uVar43 = uVar36 - *(ulonglong *)(lVar31 + 0x38);
  if (uVar36 < *(ulonglong *)(lVar31 + 0x38)) {
    uVar43 = uVar37;
  }
  uVar34 = uVar21 * 0x30 + *(longlong *)(lVar31 + 8);
  uVar36 = *(ulonglong *)(lVar31 + 0x10) - uVar21;
  if (*(ulonglong *)(lVar31 + 0x10) < uVar21) {
    uVar34 = 8;
    uVar36 = uVar37;
  }
  uVar21 = uVar43 * 0x30 + *(longlong *)(lVar31 + 0x28);
  uVar25 = *(ulonglong *)(lVar31 + 0x30) - uVar43;
  if (*(ulonglong *)(lVar31 + 0x30) < uVar43) {
    uVar21 = 8;
    uVar25 = uVar37;
  }
  *puVar4 = (*(longlong *)(lVar31 + 0x40) - uVar25) - uVar36;
  uVar20 = _UNK_142e377e4;
  uVar19 = _DAT_142e377e0;
  fVar18 = _UNK_142e36f64;
  fVar17 = _DAT_142e36f60;
  fVar16 = _DAT_142e36f50;
  uVar36 = uVar36 * 0x30 + uVar34;
  uVar37 = uVar25 * 0x30 + uVar21;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar5 = (undefined8 *)*param_1;
  puVar6 = (undefined4 *)param_1[2];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  plVar7 = (longlong *)*param_2;
  puVar8 = (undefined4 *)param_2[2];
  iVar11 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                            CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                  CONCAT13(unaff_XMM9_Bd,
                           CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                            CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                  CONCAT13(unaff_XMM9_Bh,
                           CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
  iVar13 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                            CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                  CONCAT13(unaff_XMM9_Bl,
                           CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
  iVar14 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                            CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                  CONCAT13(unaff_XMM9_Bp,
                           CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
  do {
    do {
      if ((uVar34 == 0) || (uVar34 == uVar36)) {
        if ((uVar21 == 0) || (uVar21 == uVar37)) {
          return;
        }
        uVar43 = uVar21 + 0x30;
        uVar25 = 0;
        uVar45 = uVar21;
      }
      else {
        uVar43 = uVar21;
        uVar25 = uVar34 + 0x30;
        uVar45 = uVar34;
      }
      uVar34 = uVar25;
      uVar21 = uVar43;
      *puVar4 = *puVar4 + 1;
      *puVar6 = uVar2;
      lVar31 = puVar5[3];
    } while (lVar31 == 0);
    pauVar27 = (undefined1 (*) [16])*puVar5;
    auVar51 = *pauVar27;
    uVar33 = ~(uint)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar51[0xf] >> 7) << 0xf);
    pauVar32 = pauVar27 + 1;
    uVar43 = uVar21;
    do {
      if ((short)uVar33 == 0) {
        do {
          auVar51 = *pauVar32;
          pauVar27 = pauVar27 + -0x98;
          pauVar32 = pauVar32 + 1;
          uVar33 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar33 == 0);
      }
      uVar42 = 0;
      for (uVar10 = uVar33; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar42 = uVar42 + 1;
      }
      lVar22 = (ulonglong)uVar42 * -0x98;
      uVar25 = *(ulonglong *)((longlong)pauVar27 + lVar22 + -0x78);
      if (uVar25 == 0) {
        lVar30 = 0;
        uVar41 = 0;
LAB_140a71cc4:
        lVar38 = 0;
      }
      else {
        uVar41 = *(ulonglong *)((longlong)pauVar27 + lVar22 + -0x90);
        uVar24 = *(ulonglong *)((longlong)pauVar27 + lVar22 + -0x80);
        uVar23 = 0;
        if (uVar41 <= uVar24) {
          uVar23 = uVar41;
        }
        lVar30 = uVar24 - uVar23;
        lVar38 = uVar25 - (uVar41 - lVar30);
        if (uVar25 < uVar41 - lVar30 || lVar38 == 0) {
          uVar41 = lVar30 + uVar25;
          goto LAB_140a71cc4;
        }
      }
      uVar33 = uVar33 - 1 & uVar33;
      lVar31 = lVar31 + -1;
      lVar40 = *(longlong *)((longlong)pauVar27 + lVar22 + -0x88);
      lVar30 = lVar40 + lVar30 * 0x28;
      lVar28 = lVar40 + uVar41 * 0x28;
      lVar38 = lVar40 + lVar38 * 0x28;
      lVar46 = uVar25 + 1;
      do {
        lVar29 = lVar40;
        lVar39 = lVar30;
        if ((lVar30 == lVar28) &&
           (bVar47 = lVar40 == lVar38, lVar29 = lVar30, lVar28 = lVar38, lVar38 = lVar30,
           lVar39 = lVar40, bVar47)) goto LAB_140a71c30;
        lVar30 = lVar39 + 0x28;
        iVar48 = -(uint)((float)((uint)((float)*(undefined8 *)(lVar39 + 8) -
                                       (float)*(undefined8 *)(uVar45 + 0x10)) & uVar19) <
                        (float)*(undefined8 *)(uVar45 + 0x1c) * fVar17);
        iVar49 = -(uint)((float)((uint)((float)((ulonglong)*(undefined8 *)(lVar39 + 8) >> 0x20) -
                                       (float)((ulonglong)*(undefined8 *)(uVar45 + 0x10) >> 0x20)) &
                                uVar20) <
                        (float)((ulonglong)*(undefined8 *)(uVar45 + 0x1c) >> 0x20) * fVar18);
        auVar52._4_4_ = iVar49;
        auVar52._0_4_ = iVar48;
        auVar52._8_4_ = iVar49;
        auVar52._12_4_ = iVar49;
        auVar51._8_8_ = auVar52._8_8_;
        auVar51._4_4_ = iVar48;
        auVar51._0_4_ = iVar48;
        uVar42 = movmskpd((int)uVar43,auVar51);
        uVar42 = uVar42 & 1 | (uVar42 >> 1 & 0x7f) << 8;
        uVar43 = (ulonglong)uVar42;
        lVar46 = lVar46 + -1;
        lVar40 = lVar29;
      } while ((uVar42 != 0x101) ||
              (*(float *)(uVar45 + 0x24) * fVar16 <=
               (float)((uint)(*(float *)(lVar39 + 0x10) - *(float *)(uVar45 + 0x18)) & uVar19)));
      if (lVar46 != 0) {
        lVar30 = 0;
        do {
          lVar38 = *(longlong *)((longlong)pauVar27 + lVar22 + -0x78);
          if (lVar38 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1430661b0);
          }
          lVar38 = lVar38 + -1;
          *(longlong *)((longlong)pauVar27 + lVar22 + -0x78) = lVar38;
          uVar24 = lVar38 + *(longlong *)((longlong)pauVar27 + lVar22 + -0x80);
          uVar25 = *(ulonglong *)((longlong)pauVar27 + lVar22 + -0x90);
          uVar41 = 0;
          if (uVar25 <= uVar24) {
            uVar41 = uVar25;
          }
          lVar38 = *(longlong *)
                    (*(longlong *)((longlong)pauVar27 + lVar22 + -0x88) + (uVar24 - uVar41) * 0x28);
          *(undefined4 *)((longlong)pauVar27 + lVar22 + -0xc) = 0;
          *(undefined4 *)((longlong)pauVar27 + lVar22 + -0x28) = 0;
          *puVar8 = uVar3;
          lVar28 = *(longlong *)((longlong)pauVar27 + lVar22 + -0x70);
          alStack_90[0] = lVar28;
          if (plVar7[3] != 0) {
            uVar25 = pdb_1400af0a0(plVar7 + 4,alStack_90);
            bVar50 = (byte)(uVar25 >> 0x39);
            auVar51 = ZEXT216(CONCAT11(bVar50,bVar50));
            auVar51 = pshuflw(auVar51,auVar51,0);
            lVar40 = 0;
            while( true ) {
              uVar25 = uVar25 & plVar7[1];
              auVar52 = *(undefined1 (*) [16])(*plVar7 + uVar25);
              auVar54[0] = -(auVar52[0] == auVar51[0]);
              auVar54[1] = -(auVar52[1] == auVar51[1]);
              auVar54[2] = -(auVar52[2] == auVar51[2]);
              auVar54[3] = -(auVar52[3] == auVar51[3]);
              auVar54[4] = -(auVar52[4] == auVar51[4]);
              auVar54[5] = -(auVar52[5] == auVar51[5]);
              auVar54[6] = -(auVar52[6] == auVar51[6]);
              auVar54[7] = -(auVar52[7] == auVar51[7]);
              auVar54[8] = -(auVar52[8] == auVar51[0]);
              auVar54[9] = -(auVar52[9] == auVar51[1]);
              auVar54[10] = -(auVar52[10] == auVar51[2]);
              auVar54[0xb] = -(auVar52[0xb] == auVar51[3]);
              auVar54[0xc] = -(auVar52[0xc] == auVar51[4]);
              auVar54[0xd] = -(auVar52[0xd] == auVar51[5]);
              auVar54[0xe] = -(auVar52[0xe] == auVar51[6]);
              auVar54[0xf] = -(auVar52[0xf] == auVar51[7]);
              uVar26 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar54[0xf] >> 7) << 0xf;
              uVar43 = (ulonglong)uVar26;
              while (uVar26 != 0) {
                uVar42 = 0;
                for (uVar10 = (uint)uVar43; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                  uVar42 = uVar42 + 1;
                }
                lVar29 = *plVar7 + (uVar42 + uVar25 & plVar7[1]) * -0x20;
                if (lVar28 == *(longlong *)(lVar29 + -0x20)) {
                  uVar43 = *(ulonglong *)(lVar29 + -8);
                  if (uVar43 == 0) goto LAB_140a71fb0;
                  pauVar9 = *(undefined1 (**) [16])(lVar29 + -0x10);
                  plVar44 = (longlong *)(*pauVar9 + 8);
                  uVar41 = 0;
                  uVar25 = uVar43;
                  pauVar35 = pauVar9;
                  goto LAB_140a71e40;
                }
                iVar48 = (uint)uVar43 - 1;
                uVar26 = (ushort)iVar48 & (ushort)uVar43;
                uVar43 = (ulonglong)CONCAT22((short)((uint)iVar48 >> 0x10),uVar26);
              }
              auVar53[0] = -(auVar52[0] == (char)iVar11);
              auVar53[1] = -(auVar52[1] == (char)((uint)iVar11 >> 8));
              auVar53[2] = -(auVar52[2] == (char)((uint)iVar11 >> 0x10));
              auVar53[3] = -(auVar52[3] == (char)((uint)iVar11 >> 0x18));
              auVar53[4] = -(auVar52[4] == (char)iVar12);
              auVar53[5] = -(auVar52[5] == (char)((uint)iVar12 >> 8));
              auVar53[6] = -(auVar52[6] == (char)((uint)iVar12 >> 0x10));
              auVar53[7] = -(auVar52[7] == (char)((uint)iVar12 >> 0x18));
              auVar53[8] = -(auVar52[8] == (char)iVar13);
              auVar53[9] = -(auVar52[9] == (char)((uint)iVar13 >> 8));
              auVar53[10] = -(auVar52[10] == (char)((uint)iVar13 >> 0x10));
              auVar53[0xb] = -(auVar52[0xb] == (char)((uint)iVar13 >> 0x18));
              auVar53[0xc] = -(auVar52[0xc] == (char)iVar14);
              auVar53[0xd] = -(auVar52[0xd] == (char)((uint)iVar14 >> 8));
              auVar53[0xe] = -(auVar52[0xe] == (char)((uint)iVar14 >> 0x10));
              auVar53[0xf] = -(auVar52[0xf] == (char)((uint)iVar14 >> 0x18));
              if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x4f,0) & 1) != 0) || (SUB161(auVar53 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
              uVar25 = uVar25 + lVar40 + 0x10;
              lVar40 = lVar40 + 0x10;
            }
          }
LAB_140a71fb0:
          lVar30 = lVar30 + 1;
        } while (lVar30 != lVar46);
      }
LAB_140a71c30:
    } while (lVar31 != 0);
  } while( true );
LAB_140a71e40:
  pauVar35 = (undefined1 (*) [16])(pauVar35[6] + 8);
  uVar25 = uVar25 - 1;
  if ((*(longlong *)*(undefined1 (*) [16])(plVar44 + -1) != lVar38) && (*plVar44 != lVar38))
  goto code_r0x000140a71e4b;
  if (uVar41 + 1 < uVar43) {
    do {
      if ((*(longlong *)*pauVar35 != lVar38) && (*(longlong *)(*pauVar35 + 8) != lVar38)) {
        uVar43 = uVar41 * 0x68;
        *(undefined8 *)((longlong)pauVar9 + uVar43 + 0x60) = *(undefined8 *)pauVar35[6];
        uVar15 = *(undefined8 *)(pauVar35[5] + 8);
        puVar1 = (undefined8 *)((longlong)pauVar9 + uVar43 + 0x50);
        *puVar1 = *(undefined8 *)pauVar35[5];
        puVar1[1] = uVar15;
        uVar15 = *(undefined8 *)(pauVar35[4] + 8);
        puVar1 = (undefined8 *)((longlong)pauVar9 + uVar43 + 0x40);
        *puVar1 = *(undefined8 *)pauVar35[4];
        puVar1[1] = uVar15;
        auVar51 = *pauVar35;
        auVar52 = pauVar35[1];
        auVar54 = pauVar35[2];
        uVar15 = *(undefined8 *)(pauVar35[3] + 8);
        puVar1 = (undefined8 *)((longlong)pauVar9 + uVar43 + 0x30);
        *puVar1 = *(undefined8 *)pauVar35[3];
        puVar1[1] = uVar15;
        *(undefined1 (*) [16])((longlong)pauVar9 + uVar43 + 0x20) = auVar54;
        *(undefined1 (*) [16])((longlong)pauVar9 + uVar43 + 0x10) = auVar52;
        *(undefined1 (*) [16])((longlong)pauVar9 + uVar43) = auVar51;
        uVar41 = uVar41 + 1;
      }
      pauVar35 = (undefined1 (*) [16])(pauVar35[6] + 8);
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  *(ulonglong *)(lVar29 + -8) = uVar41;
  goto LAB_140a71fb0;
code_r0x000140a71e4b:
  uVar41 = uVar41 + 1;
  plVar44 = plVar44 + 0xd;
  if (uVar43 == uVar41) goto LAB_140a71fb0;
  goto LAB_140a71e40;
}

