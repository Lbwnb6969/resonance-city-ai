// VA 0x1419ad7d0, PDB extent 1882 bytes
// country_core::systems::audio::wall_audio_orchestrator::wall_audio_orchestrator
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_orchestrator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::wall_audio_orchestrator::wall_audio_orchestrator
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/wall_audio_orchestrator.rs
   Extent: 1882 */

void pdb_1419ad7d0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 uVar29;
  longlong lVar30;
  char cVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  ushort uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong *puVar38;
  byte bVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
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
  float fVar43;
  undefined4 uStack_120;
  undefined2 uStack_11c;
  undefined2 uStack_11a;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined2 uStack_110;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  char cStack_e8;
  undefined7 uStack_e7;
  undefined4 uStack_e0;
  char cStack_dc;
  undefined7 uStack_db;
  undefined4 uStack_d4;
  ulonglong *puStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong *plStack_b8;
  undefined4 uStack_ac;
  float afStack_a8 [26];
  
  puStack_d0 = (ulonglong *)*param_1;
  lVar8 = param_1[1];
  uVar9 = *puStack_d0;
  uVar37 = 0;
  uVar23 = uVar9 - *(ulonglong *)(lVar8 + 0x18);
  if (uVar9 < *(ulonglong *)(lVar8 + 0x18)) {
    uVar23 = uVar37;
  }
  uVar24 = uVar9 - *(ulonglong *)(lVar8 + 0x38);
  if (uVar9 < *(ulonglong *)(lVar8 + 0x38)) {
    uVar24 = uVar37;
  }
  lVar27 = uVar23 * 0x20 + *(longlong *)(lVar8 + 8);
  uVar9 = *(ulonglong *)(lVar8 + 0x10) - uVar23;
  if (*(ulonglong *)(lVar8 + 0x10) < uVar23) {
    lVar27 = 8;
    uVar9 = uVar37;
  }
  lVar30 = uVar24 * 0x20 + *(longlong *)(lVar8 + 0x28);
  uVar23 = *(ulonglong *)(lVar8 + 0x30) - uVar24;
  if (*(ulonglong *)(lVar8 + 0x30) < uVar24) {
    lVar30 = 8;
    uVar23 = uVar37;
  }
  *puStack_d0 = (*(longlong *)(lVar8 + 0x40) - uVar23) - uVar9;
  fVar19 = _DAT_143308ed0;
  lStack_c0 = uVar23 * 0x20 + lVar30;
  param_3 = (longlong *)*param_3;
  lStack_c8 = *param_4;
  plStack_b8 = param_3 + 4;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar8 = *param_2;
  puVar10 = (undefined4 *)param_2[2];
  iVar15 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar16 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar17 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar18 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  lVar28 = lVar27;
  puVar38 = puStack_d0;
LAB_1419ade40:
  do {
    if ((lVar28 == 0) || (lVar28 == uVar9 * 0x20 + lVar27)) {
      if ((lVar30 == 0) || (lVar30 == lStack_c0)) {
        return;
      }
      lVar32 = 0;
      lVar25 = lVar30 + 0x20;
      lVar34 = lVar30;
    }
    else {
      lVar32 = lVar28 + 0x20;
      lVar25 = lVar30;
      lVar34 = lVar28;
    }
    lVar30 = lVar25;
    *puVar38 = *puVar38 + 1;
    lVar25 = *(longlong *)(lVar34 + 8);
    uStack_120 = (undefined4)lVar25;
    uStack_11c = (undefined2)((ulonglong)lVar25 >> 0x20);
    uStack_11a = (undefined2)((ulonglong)lVar25 >> 0x30);
    lVar28 = lVar32;
  } while (param_3[3] == 0);
  uVar23 = pdb_1400af0a0(plStack_b8,&uStack_120);
  lVar32 = *param_3;
  bVar39 = (byte)(uVar23 >> 0x39);
  auVar40 = ZEXT216(CONCAT11(bVar39,bVar39));
  auVar40 = pshuflw(auVar40,auVar40,0);
  lVar26 = 0;
  do {
    uVar23 = uVar23 & param_3[1];
    auVar4 = *(undefined1 (*) [16])(lVar32 + uVar23);
    auVar42[0] = -(auVar4[0] == auVar40[0]);
    auVar42[1] = -(auVar4[1] == auVar40[1]);
    auVar42[2] = -(auVar4[2] == auVar40[2]);
    auVar42[3] = -(auVar4[3] == auVar40[3]);
    auVar42[4] = -(auVar4[4] == auVar40[4]);
    auVar42[5] = -(auVar4[5] == auVar40[5]);
    auVar42[6] = -(auVar4[6] == auVar40[6]);
    auVar42[7] = -(auVar4[7] == auVar40[7]);
    auVar42[8] = -(auVar4[8] == auVar40[0]);
    auVar42[9] = -(auVar4[9] == auVar40[1]);
    auVar42[10] = -(auVar4[10] == auVar40[2]);
    auVar42[0xb] = -(auVar4[0xb] == auVar40[3]);
    auVar42[0xc] = -(auVar4[0xc] == auVar40[4]);
    auVar42[0xd] = -(auVar4[0xd] == auVar40[5]);
    auVar42[0xe] = -(auVar4[0xe] == auVar40[6]);
    auVar42[0xf] = -(auVar4[0xf] == auVar40[7]);
    uVar35 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
    uVar33 = (uint)uVar35;
    while (uVar35 != 0) {
      uVar13 = 0;
      for (uVar14 = uVar33; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
        uVar13 = uVar13 + 1;
      }
      lVar36 = (uVar13 + uVar23 & param_3[1]) * -0x2b0;
      if (lVar25 == *(longlong *)(lVar32 + -0x2b0 + lVar36)) {
        lVar32 = lVar32 + lVar36;
        if ((*(ulonglong *)(lVar32 + -0x298) < 2) || (*(float *)(lVar32 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14335ebd8);
        }
        bVar39 = *(byte *)(lVar34 + 0x1c);
        pdb_1419ad350(&cStack_e8,lVar32 + -0x2a8,bVar39,*(undefined4 *)(lStack_c8 + 0x58));
        uVar21 = uStack_d4;
        uVar20 = uStack_e0;
        if (cStack_e8 != '\x1f') {
          uVar12 = CONCAT71(uStack_e7,cStack_e8);
          uStack_118 = *(undefined4 *)(lVar34 + 0x18);
          uVar11 = *(undefined8 *)(lVar34 + 0x10);
          uStack_120 = (undefined4)uVar11;
          uStack_11c = (undefined2)((ulonglong)uVar11 >> 0x20);
          uStack_11a = (undefined2)((ulonglong)uVar11 >> 0x30);
          uVar29 = *(undefined1 *)(lVar34 + 0x1d);
          *puVar10 = uVar5;
          lVar32 = *(longlong *)(lVar8 + 0x30);
          uVar11 = *(undefined8 *)(lVar8 + 0x40);
          if (lVar32 == *(longlong *)(lVar8 + 0x20)) {
            pdb_142d7ede0(lVar8 + 0x20);
          }
          lVar25 = *(longlong *)(lVar8 + 0x28);
          *(undefined8 *)(lVar25 + lVar32 * 0x28) = uVar11;
          *(undefined8 *)(lVar25 + 8 + lVar32 * 0x28) = uVar12;
          *(ulonglong *)(lVar25 + 0x10 + lVar32 * 0x28) =
               CONCAT26(uStack_11a,CONCAT24(uStack_11c,uStack_120));
          *(undefined4 *)(lVar25 + 0x18 + lVar32 * 0x28) = uStack_118;
          *(undefined4 *)(lVar25 + 0x1c + lVar32 * 0x28) = uVar20;
          *(undefined1 *)(lVar25 + 0x20 + lVar32 * 0x28) = uVar29;
          *(longlong *)(lVar8 + 0x30) = lVar32 + 1;
          *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
          goto LAB_1419ade40;
        }
        if (cStack_dc != '\x1f') {
          uVar12 = CONCAT71(uStack_db,cStack_dc);
          uStack_118 = *(undefined4 *)(lVar34 + 0x18);
          uVar11 = *(undefined8 *)(lVar34 + 0x10);
          uStack_120 = (undefined4)uVar11;
          uStack_11c = (undefined2)((ulonglong)uVar11 >> 0x20);
          uStack_11a = (undefined2)((ulonglong)uVar11 >> 0x30);
          uVar29 = *(undefined1 *)(lVar34 + 0x1d);
          *puVar10 = uVar5;
          lVar25 = *(longlong *)(lVar8 + 0x30);
          uVar11 = *(undefined8 *)(lVar8 + 0x40);
          if (lVar25 == *(longlong *)(lVar8 + 0x20)) {
            pdb_142d7ede0(lVar8 + 0x20);
          }
          lVar26 = *(longlong *)(lVar8 + 0x28);
          *(undefined8 *)(lVar26 + lVar25 * 0x28) = uVar11;
          *(undefined8 *)(lVar26 + 8 + lVar25 * 0x28) = uVar12;
          *(ulonglong *)(lVar26 + 0x10 + lVar25 * 0x28) =
               CONCAT26(uStack_11a,CONCAT24(uStack_11c,uStack_120));
          *(undefined4 *)(lVar26 + 0x18 + lVar25 * 0x28) = uStack_118;
          *(undefined4 *)(lVar26 + 0x1c + lVar25 * 0x28) = uVar21;
          *(undefined1 *)(lVar26 + 0x20 + lVar25 * 0x28) = uVar29;
          *(longlong *)(lVar8 + 0x30) = lVar25 + 1;
          *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
        }
        lVar25 = (ulonglong)bVar39 - 1;
        if (bVar39 < 2) {
          lVar25 = 0;
        }
        if ((int)lVar25 - 1U < 2) {
          uVar29 = fVar19 < *(float *)(lVar32 + -0x20);
          uVar22 = pdb_140b2e940(lVar32 + -0x120);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(uVar22) {
          case 0:
            uVar29 = *(undefined1 *)(lVar32 + -9);
            cVar31 = '\0';
            break;
          case 1:
            cVar31 = '\n';
            break;
          case 2:
            cVar31 = (*(char *)(lVar32 + -9) == '\0') * '\x03' + '\n';
            break;
          case 3:
            cVar31 = (*(longlong *)(lVar32 + -0x98) == *(longlong *)(lVar32 + -0x100)) + '\x05';
            break;
          case 4:
            cVar31 = '\x17';
            break;
          case 5:
            cVar31 = '\x1d';
            break;
          case 6:
            uVar29 = *(undefined1 *)(lVar32 + -9);
            cVar31 = '\x19';
            break;
          case 7:
            goto LAB_1419ade40;
          }
          uStack_112 = (undefined2)*(undefined4 *)(lVar34 + 0x18);
          uStack_110 = (undefined2)((uint)*(undefined4 *)(lVar34 + 0x18) >> 0x10);
          uVar11 = *(undefined8 *)(lVar34 + 0x10);
          uStack_11a = (undefined2)uVar11;
          uStack_118 = (undefined4)((ulonglong)uVar11 >> 0x10);
          uStack_114 = (undefined2)((ulonglong)uVar11 >> 0x30);
          uVar22 = *(undefined1 *)(lVar34 + 0x1d);
          *puVar10 = uVar5;
          lVar32 = *(longlong *)(lVar8 + 0x30);
          uVar11 = *(undefined8 *)(lVar8 + 0x40);
          if (lVar32 == *(longlong *)(lVar8 + 0x20)) {
            pdb_142d7ede0(lVar8 + 0x20);
          }
          lVar25 = *(longlong *)(lVar8 + 0x28);
          *(undefined8 *)(lVar25 + lVar32 * 0x28) = uVar11;
          *(char *)(lVar25 + 8 + lVar32 * 0x28) = cVar31;
          *(undefined1 *)(lVar25 + 9 + lVar32 * 0x28) = uVar29;
          puVar1 = (undefined8 *)(lVar25 + 10 + lVar32 * 0x28);
          *puVar1 = CONCAT26(uStack_11a,CONCAT24(uStack_11c,uStack_120));
          puVar1[1] = CONCAT26(uStack_112,CONCAT24(uStack_114,uStack_118));
          *(undefined2 *)(lVar25 + 0x1a + lVar32 * 0x28) = uStack_110;
          *(undefined4 *)(lVar25 + 0x1c + lVar32 * 0x28) = 0x3f800000;
          *(undefined1 *)(lVar25 + 0x20 + lVar32 * 0x28) = uVar22;
          *(longlong *)(lVar8 + 0x30) = lVar32 + 1;
          *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
        }
        else {
          if (lVar25 != 0) goto LAB_1419ade40;
          uStack_120 = 0;
          uStack_ac = 0;
          fVar43 = *(float *)(lVar32 + -0x90);
          fVar6 = *(float *)(lVar32 + -0x84);
          fVar7 = *(float *)(lVar32 + -0x8c);
          fVar2 = *(float *)(lVar32 + -0x88);
          if ((0.0 < fVar43) || (0.0 < fVar2)) {
            fVar3 = fVar2;
            if (fVar2 <= fVar43) {
              fVar3 = fVar43;
            }
            afStack_a8[0] =
                 (float)(~-(uint)NAN(fVar43) & (uint)fVar3 | -(uint)NAN(fVar43) & (uint)fVar2);
            fVar43 = afStack_a8[0];
            if (afStack_a8[0] <= 0.0) {
              fVar43 = 0.0;
            }
            lVar32 = (ulonglong)*(byte *)(lVar32 + -9) * 0x100 +
                     ((ulonglong)*(uint *)(lVar32 + -0x20) << 0x20) + 1;
            uStack_11c = (undefined2)lVar32;
            uStack_11a = (undefined2)((ulonglong)lVar32 >> 0x10);
            uStack_11a = 0;
            uStack_118 = (undefined4)((ulonglong)lVar32 >> 0x20);
            lVar32 = 1;
            if ((0.0 < fVar6) || (uVar23 = 1, 0.0 < fVar7)) goto LAB_1419adc56;
          }
          else {
            lVar32 = 0;
            fVar43 = 0.0;
            if ((fVar6 <= 0.0) && (puVar38 = puStack_d0, fVar7 <= 0.0)) goto LAB_1419ade40;
LAB_1419adc56:
            fVar2 = fVar7;
            if (fVar7 <= fVar6) {
              fVar2 = fVar6;
            }
            fVar2 = (float)(~-(uint)NAN(fVar6) & (uint)fVar2 | -(uint)NAN(fVar6) & (uint)fVar7);
            fVar7 = fVar2;
            if (fVar2 <= fVar43) {
              fVar7 = fVar43;
            }
            fVar43 = (float)(~-(uint)NAN(fVar43) & (uint)fVar7 | -(uint)NAN(fVar43) & (uint)fVar2);
            afStack_a8[lVar32] = fVar2;
            uVar23 = (ulonglong)((int)lVar32 + 1);
            *(ulonglong *)(&uStack_11c + lVar32 * 4) =
                 (ulonglong)bVar39 * 5 + ((ulonglong)(uint)fVar6 << 0x20) + 2;
          }
          uVar37 = 0;
          do {
            fVar2 = afStack_a8[uVar37];
            uVar11 = *(undefined8 *)(&uStack_11c + uVar37 * 4);
            uStack_f0 = *(undefined4 *)(lVar34 + 0x18);
            uStack_f8 = *(undefined8 *)(lVar34 + 0x10);
            uVar29 = *(undefined1 *)(lVar34 + 0x1d);
            *puVar10 = uVar5;
            lVar32 = *(longlong *)(lVar8 + 0x30);
            uVar12 = *(undefined8 *)(lVar8 + 0x40);
            if (lVar32 == *(longlong *)(lVar8 + 0x20)) {
              pdb_142d7ede0(lVar8 + 0x20);
            }
            lVar25 = *(longlong *)(lVar8 + 0x28);
            *(undefined8 *)(lVar25 + lVar32 * 0x28) = uVar12;
            *(undefined8 *)(lVar25 + 8 + lVar32 * 0x28) = uVar11;
            *(undefined8 *)(lVar25 + 0x10 + lVar32 * 0x28) = uStack_f8;
            *(undefined4 *)(lVar25 + 0x18 + lVar32 * 0x28) = uStack_f0;
            *(float *)(lVar25 + 0x1c + lVar32 * 0x28) = fVar2 / fVar43;
            *(undefined1 *)(lVar25 + 0x20 + lVar32 * 0x28) = uVar29;
            *(longlong *)(lVar8 + 0x30) = lVar32 + 1;
            *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
            uVar37 = uVar37 + 1;
            puVar38 = puStack_d0;
          } while (uVar37 < uVar23);
        }
        goto LAB_1419ade40;
      }
      uVar35 = (ushort)(uVar33 - 1) & (ushort)uVar33;
      uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar35);
    }
    auVar41[0] = -(auVar4[0] == (char)iVar15);
    auVar41[1] = -(auVar4[1] == (char)((uint)iVar15 >> 8));
    auVar41[2] = -(auVar4[2] == (char)((uint)iVar15 >> 0x10));
    auVar41[3] = -(auVar4[3] == (char)((uint)iVar15 >> 0x18));
    auVar41[4] = -(auVar4[4] == (char)iVar16);
    auVar41[5] = -(auVar4[5] == (char)((uint)iVar16 >> 8));
    auVar41[6] = -(auVar4[6] == (char)((uint)iVar16 >> 0x10));
    auVar41[7] = -(auVar4[7] == (char)((uint)iVar16 >> 0x18));
    auVar41[8] = -(auVar4[8] == (char)iVar17);
    auVar41[9] = -(auVar4[9] == (char)((uint)iVar17 >> 8));
    auVar41[10] = -(auVar4[10] == (char)((uint)iVar17 >> 0x10));
    auVar41[0xb] = -(auVar4[0xb] == (char)((uint)iVar17 >> 0x18));
    auVar41[0xc] = -(auVar4[0xc] == (char)iVar18);
    auVar41[0xd] = -(auVar4[0xd] == (char)((uint)iVar18 >> 8));
    auVar41[0xe] = -(auVar4[0xe] == (char)((uint)iVar18 >> 0x10));
    auVar41[0xf] = -(auVar4[0xf] == (char)((uint)iVar18 >> 0x18));
    if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x37,0) & 1) != 0) || (SUB161(auVar41 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar41 >> 0x47,0) & 1) != 0) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') goto LAB_1419ade40;
    uVar23 = uVar23 + lVar26 + 0x10;
    lVar26 = lVar26 + 0x10;
  } while( true );
}

