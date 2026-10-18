// VA 0x1408ef8a0, PDB extent 2527 bytes
// system_decorator::audio::op_confirm_audio::op_confirm_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_confirm_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::audio::op_confirm_audio::op_confirm_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_confirm_audio.rs
   Extent: 2527 */

void pdb_1408ef8a0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong *puVar25;
  uint uVar26;
  ushort uVar27;
  ulonglong *puVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  longlong *plVar32;
  ulonglong *puVar33;
  undefined1 (*pauVar34) [16];
  ulonglong *puVar35;
  undefined1 (*pauVar36) [16];
  byte bVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  ulonglong uStack_110;
  ulonglong uStack_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  longlong lStack_f8;
  undefined1 auStack_f0 [40];
  undefined8 uStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  longlong *plStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined4 uStack_68;
  char cStack_64;
  
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1 = (longlong *)*param_1;
  lVar22 = *param_1;
  uVar21 = param_1[1];
  lVar4 = param_1[6];
  param_1[6] = lVar22;
  lVar30 = param_1[8];
  lVar29 = param_1[1];
  *param_1 = lVar4;
  param_1[1] = param_1[7];
  param_1[7] = lVar29;
  param_1[8] = param_1[2];
  lVar29 = param_1[10];
  lVar13 = param_1[0xb];
  lVar14 = param_1[3];
  lVar4 = param_1[3];
  param_1[2] = lVar30;
  param_1[3] = param_1[9];
  param_1[9] = lVar14;
  param_1[10] = param_1[4];
  param_1[0xb] = param_1[5];
  param_1[4] = lVar29;
  param_1[5] = lVar13;
  lStack_f8 = param_4;
  plStack_c0 = param_3;
  if (lVar4 != 0) {
    if (uVar21 == 0) {
      uVar20 = 0;
    }
    else {
      pub_142e32780(lVar22,CONCAT71((int7)((ulonglong)puVar3 >> 8),0xff),uVar21 + 0x11);
      uVar20 = (uVar21 + 1 & 0xfffffffffffffff8) - (uVar21 + 1 >> 3);
      if (uVar21 < 8) {
        uVar20 = uVar21;
      }
    }
    param_1[9] = 0;
    param_1[8] = uVar20;
  }
  lVar22 = param_1[0xc];
  uVar21 = param_1[0xd];
  lVar4 = param_1[0x12];
  param_1[0x12] = lVar22;
  lVar30 = param_1[0x14];
  lVar29 = param_1[0xd];
  param_1[0xc] = lVar4;
  param_1[0xd] = param_1[0x13];
  param_1[0x13] = lVar29;
  param_1[0x14] = param_1[0xe];
  lVar29 = param_1[0x16];
  lVar13 = param_1[0x17];
  lVar14 = param_1[0xf];
  lVar4 = param_1[0xf];
  param_1[0xe] = lVar30;
  param_1[0xf] = param_1[0x15];
  param_1[0x15] = lVar14;
  param_1[0x16] = param_1[0x10];
  param_1[0x17] = param_1[0x11];
  param_1[0x10] = lVar29;
  param_1[0x11] = lVar13;
  if (lVar4 != 0) {
    if (uVar21 == 0) {
      uVar20 = 0;
    }
    else {
      pub_142e32780(lVar22,0xff,uVar21 + 0x11);
      uVar20 = (uVar21 + 1 & 0xfffffffffffffff8) - (uVar21 + 1 >> 3);
      if (uVar21 < 8) {
        uVar20 = uVar21;
      }
    }
    param_1[0x15] = 0;
    param_1[0x14] = uVar20;
  }
  puVar5 = (ulonglong *)*param_2;
  lVar22 = param_2[1];
  uVar21 = *puVar5;
  uVar23 = 0;
  uVar20 = uVar21 - *(ulonglong *)(lVar22 + 0x18);
  if (uVar21 < *(ulonglong *)(lVar22 + 0x18)) {
    uVar20 = uVar23;
  }
  uVar24 = uVar21 - *(ulonglong *)(lVar22 + 0x38);
  if (uVar21 < *(ulonglong *)(lVar22 + 0x38)) {
    uVar24 = uVar23;
  }
  puVar33 = (ulonglong *)(uVar20 * 0xb0 + *(longlong *)(lVar22 + 8));
  uVar21 = *(ulonglong *)(lVar22 + 0x10) - uVar20;
  if (*(ulonglong *)(lVar22 + 0x10) < uVar20) {
    puVar33 = (ulonglong *)0x8;
    uVar21 = uVar23;
  }
  plVar32 = param_1 + 6;
  plStack_90 = param_1 + 4;
  puVar28 = (ulonglong *)(uVar24 * 0xb0 + *(longlong *)(lVar22 + 0x28));
  uVar20 = *(ulonglong *)(lVar22 + 0x30) - uVar24;
  if (*(ulonglong *)(lVar22 + 0x30) < uVar24) {
    puVar28 = (ulonglong *)0x8;
    uVar20 = uVar23;
  }
  *puVar5 = (*(longlong *)(lVar22 + 0x40) - uVar20) - uVar21;
  puVar35 = puVar33 + uVar21 * 0x16;
  puVar25 = puVar28 + uVar20 * 0x16;
  uStack_c8 = *param_5;
  plStack_b8 = plVar32;
  plStack_b0 = param_1;
  do {
    do {
      do {
        plVar16 = plStack_b0;
        if ((puVar33 == (ulonglong *)0x0) || (puVar33 == puVar35)) {
          if ((puVar28 == (ulonglong *)0x0) || (puVar28 == puVar25)) {
            lVar22 = plStack_b0[9];
            if (lVar22 == 0) {
              return;
            }
            pauVar34 = (undefined1 (*) [16])*plVar32;
            auVar38 = *pauVar34;
            uVar26 = ~(uint)(ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar38[0xf] >> 7) << 0xf);
            pauVar36 = pauVar34 + 1;
            plStack_b8 = (longlong *)
                         CONCAT44(plStack_b8._4_4_,*(undefined4 *)((longlong)plStack_c0 + 0x1c));
            lStack_f8 = *plStack_c0;
            plStack_c0 = (longlong *)plStack_c0[2];
            lStack_a8 = lStack_f8 + 0x20;
            iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                     CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)))
                           == CONCAT13(unaff_XMM6_Bd,
                                       CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))
                                      ));
            iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                      CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)))
                            == CONCAT13(unaff_XMM6_Bh,
                                        CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)
                                                )));
            iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                      CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi)))
                            == CONCAT13(unaff_XMM6_Bl,
                                        CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi)
                                                )));
            iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                      CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm)))
                            == CONCAT13(unaff_XMM6_Bp,
                                        CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm)
                                                )));
LAB_1408efe77:
            if ((short)uVar26 == 0) {
              do {
                auVar38 = *pauVar36;
                pauVar34 = pauVar34 + -0x38;
                pauVar36 = pauVar36 + 1;
                uVar26 = (ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar26 == 0);
            }
            uVar6 = 0;
            for (uVar31 = uVar26; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            if (plVar16[3] != 0) {
              uVar21 = pdb_14148b4d0(plStack_90,
                                     (longlong)pauVar34 + (ulonglong)uVar6 * -0x38 + -0x38);
              lVar4 = *plVar16;
              bVar37 = (byte)(uVar21 >> 0x39);
              auVar38 = ZEXT216(CONCAT11(bVar37,bVar37));
              auVar38 = pshuflw(auVar38,auVar38,0);
              lVar30 = 0;
              while( true ) {
                uVar21 = uVar21 & plVar16[1];
                pcVar1 = (char *)(lVar4 + uVar21);
                auVar40[0] = -(*pcVar1 == auVar38[0]);
                auVar40[1] = -(pcVar1[1] == auVar38[1]);
                auVar40[2] = -(pcVar1[2] == auVar38[2]);
                auVar40[3] = -(pcVar1[3] == auVar38[3]);
                auVar40[4] = -(pcVar1[4] == auVar38[4]);
                auVar40[5] = -(pcVar1[5] == auVar38[5]);
                auVar40[6] = -(pcVar1[6] == auVar38[6]);
                auVar40[7] = -(pcVar1[7] == auVar38[7]);
                auVar40[8] = -(pcVar1[8] == auVar38[0]);
                auVar40[9] = -(pcVar1[9] == auVar38[1]);
                auVar40[10] = -(pcVar1[10] == auVar38[2]);
                auVar40[0xb] = -(pcVar1[0xb] == auVar38[3]);
                auVar40[0xc] = -(pcVar1[0xc] == auVar38[4]);
                auVar40[0xd] = -(pcVar1[0xd] == auVar38[5]);
                auVar40[0xe] = -(pcVar1[0xe] == auVar38[6]);
                auVar40[0xf] = -(pcVar1[0xf] == auVar38[7]);
                uVar27 = (ushort)(SUB161(auVar40 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar40[0xf] >> 7) << 0xf;
                uVar31 = (uint)uVar27;
                while (uVar27 != 0) {
                  uVar7 = 0;
                  for (uVar8 = uVar31; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                    uVar7 = uVar7 + 1;
                  }
                  lVar29 = (uVar7 + uVar21 & plVar16[1]) * -0x38;
                  if ((*(int *)((longlong)pauVar34 + (ulonglong)uVar6 * -0x38 + -0x30) ==
                       *(int *)(lVar4 + -0x30 + lVar29)) &&
                     (*(longlong *)((longlong)pauVar34 + (ulonglong)uVar6 * -0x38 + -0x38) ==
                      *(longlong *)(lVar29 + lVar4 + -0x38))) {
                    uVar26 = uVar26 - 1 & uVar26;
                    lVar22 = lVar22 + -1;
                    if (lVar22 == 0) {
                      return;
                    }
                    goto LAB_1408efe77;
                  }
                  uVar27 = (ushort)(uVar31 - 1) & (ushort)uVar31;
                  uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar27);
                }
                auVar39[0] = -(*pcVar1 == (char)iVar9);
                auVar39[1] = -(pcVar1[1] == (char)((uint)iVar9 >> 8));
                auVar39[2] = -(pcVar1[2] == (char)((uint)iVar9 >> 0x10));
                auVar39[3] = -(pcVar1[3] == (char)((uint)iVar9 >> 0x18));
                auVar39[4] = -(pcVar1[4] == (char)iVar10);
                auVar39[5] = -(pcVar1[5] == (char)((uint)iVar10 >> 8));
                auVar39[6] = -(pcVar1[6] == (char)((uint)iVar10 >> 0x10));
                auVar39[7] = -(pcVar1[7] == (char)((uint)iVar10 >> 0x18));
                auVar39[8] = -(pcVar1[8] == (char)iVar11);
                auVar39[9] = -(pcVar1[9] == (char)((uint)iVar11 >> 8));
                auVar39[10] = -(pcVar1[10] == (char)((uint)iVar11 >> 0x10));
                auVar39[0xb] = -(pcVar1[0xb] == (char)((uint)iVar11 >> 0x18));
                auVar39[0xc] = -(pcVar1[0xc] == (char)iVar12);
                auVar39[0xd] = -(pcVar1[0xd] == (char)((uint)iVar12 >> 8));
                auVar39[0xe] = -(pcVar1[0xe] == (char)((uint)iVar12 >> 0x10));
                auVar39[0xf] = -(pcVar1[0xf] == (char)((uint)iVar12 >> 0x18));
                if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') break;
                uVar21 = uVar21 + lVar30 + 0x10;
                lVar30 = lVar30 + 0x10;
              }
            }
            uVar21 = *(ulonglong *)((longlong)pauVar34 + (ulonglong)uVar6 * -0x38 + -0x28);
            lVar22 = uVar21 - 8;
            if (uVar21 < 8) {
              lVar22 = 3;
            }
                    /* WARNING: Could not recover jumptable at 0x0001408eff95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_14301caf8 + *(int *)(&UNK_14301caf8 + lVar22 * 4)))(&UNK_14301caf8,0);
            return;
          }
          *puVar5 = *puVar5 + 1;
          cVar2 = (char)puVar28[0x14];
          puVar17 = puVar28 + 0x16;
          puVar18 = (ulonglong *)0x0;
          puVar15 = puVar28;
        }
        else {
          *puVar5 = *puVar5 + 1;
          cVar2 = (char)puVar33[0x14];
          puVar17 = puVar28;
          puVar18 = puVar33 + 0x16;
          puVar15 = puVar33;
        }
        puVar33 = puVar18;
        puVar28 = puVar17;
      } while (cVar2 != '\0');
      uVar21 = puVar15[0x10];
      lVar22 = 0;
      if (1 < *puVar15) {
        lVar22 = *puVar15 - 2;
      }
    } while (uVar21 == 7);
    if (lVar22 != 0) {
      if (lVar22 != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001408efbe5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_14301cadc + *(int *)(&UNK_14301cadc + uVar21 * 4)))();
        return;
      }
      if (*(char *)((longlong)puVar15 + 0x44) == '\0') {
        uVar19 = pdb_1406d0830(0);
        uStack_110 = 8;
      }
      else {
        uVar19 = (undefined4)puVar15[8];
        pdb_1408ef660(&uStack_110,uVar21,puVar15[0x11],*(undefined1 *)((longlong)puVar15 + 0x45),
                      puVar15 + 3,puVar15[1],puVar15[2],lStack_f8,uStack_c8,param_6,uVar19);
        plVar32 = plStack_b8;
      }
      goto LAB_1408efd03;
    }
    if ((char)puVar15[0xe] != '\0') {
      uStack_100 = *(undefined1 *)((longlong)puVar15 + 0x71);
      uStack_108 = puVar15[0x11];
      uStack_110 = uVar21;
      goto LAB_1408efcff;
    }
    if (puVar15[2] != 3) {
      pdb_1408ef660(&uStack_110,uVar21,puVar15[0x11],(char)puVar15[9],puVar15 + 4,puVar15[2],
                    puVar15[3],lStack_f8,uStack_c8,param_6,(int)puVar15[0xf]);
      goto LAB_1408efcff;
    }
    if (*(char *)((longlong)puVar15 + 0x72) != '\0') {
      if ((int)uVar21 == 5) {
        uStack_110 = 0x22;
        goto LAB_1408efcff;
      }
      goto LAB_1408efce2;
    }
    if (puVar15[10] == 6) {
      uStack_108 = puVar15[0xb];
      uStack_110 = 0x2d;
      goto LAB_1408efcff;
    }
    if ((int)puVar15[10] != 8) {
LAB_1408efce2:
      uStack_110 = 0x11;
LAB_1408efcff:
      uVar19 = (undefined4)puVar15[0xf];
LAB_1408efd03:
      if (*(char *)((longlong)puVar15 + 0x9c) != '\x02') {
        uStack_68 = (undefined4)puVar15[0x13];
        uStack_70 = puVar15[0x12];
        uStack_78 = CONCAT71(uStack_ff,uStack_100);
        uStack_88 = uStack_110;
        uStack_80 = uStack_108;
        cStack_64 = *(char *)((longlong)puVar15 + 0x9c);
        pdb_1414b59b0(auStack_f0,plVar32,lVar22,uVar19,&uStack_88);
      }
    }
  } while( true );
}

