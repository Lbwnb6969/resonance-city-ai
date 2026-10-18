// VA 0x1408453e0, PDB extent 4936 bytes
// system_wall_constructor::init_wall_height_and_arch_segment_height::init_wall_height_and_arch_segment_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/init_wall_height_and_arch_segment_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::init_wall_height_and_arch_segment_height::init_wall_height_and_arch_segment_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/init_wall_height_and_arch_segment_height.rs
   Extent: 4936 */

void pdb_1408453e0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint uVar18;
  undefined4 uVar19;
  ushort uVar20;
  float *pfVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong lVar28;
  ulonglong *puVar29;
  byte bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float unaff_XMM6_Da;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  int iStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  byte *pbStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  byte *pbStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  ulonglong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  byte *pbStack_188;
  ulonglong uStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  longlong *plStack_168;
  longlong lStack_160;
  longlong lStack_158;
  float fStack_150;
  float fStack_14c;
  longlong lStack_148;
  ulonglong uStack_140;
  float fStack_134;
  longlong lStack_130;
  longlong lStack_128;
  undefined4 *puStack_120;
  longlong lStack_118;
  longlong lStack_110;
  float fStack_108;
  float fStack_104;
  longlong *plStack_100;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar29 = (ulonglong *)*param_2;
  lVar12 = param_2[1];
  uVar8 = *puVar29;
  uVar23 = 0;
  uVar26 = uVar8 - *(ulonglong *)(lVar12 + 0x18);
  if (uVar8 < *(ulonglong *)(lVar12 + 0x18)) {
    uVar26 = uVar23;
  }
  uVar22 = uVar8 - *(ulonglong *)(lVar12 + 0x38);
  if (uVar8 < *(ulonglong *)(lVar12 + 0x38)) {
    uVar22 = uVar23;
  }
  lStack_128 = uVar26 * 0x10 + *(longlong *)(lVar12 + 8);
  uVar8 = *(ulonglong *)(lVar12 + 0x10) - uVar26;
  if (*(ulonglong *)(lVar12 + 0x10) < uVar26) {
    lStack_128 = 8;
    uVar8 = uVar23;
  }
  lStack_130 = uVar22 * 0x10 + *(longlong *)(lVar12 + 0x28);
  uVar26 = *(ulonglong *)(lVar12 + 0x30) - uVar22;
  if (*(ulonglong *)(lVar12 + 0x30) < uVar22) {
    lStack_130 = 8;
    uVar26 = uVar23;
  }
  *puVar29 = (*(longlong *)(lVar12 + 0x40) - uVar26) - uVar8;
  lStack_118 = uVar8 * 0x10 + lStack_128;
  lStack_1e0 = uVar26 * 0x10 + lStack_130;
  uStack_f4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  plStack_100 = (longlong *)*param_1;
  puVar16 = (undefined4 *)param_1[2];
  lStack_1d8 = *param_3;
  lStack_160 = param_3[1];
  plStack_168 = plStack_100 + 4;
  lVar12 = lStack_118;
  plVar27 = plStack_100;
  fVar43 = _DAT_142f61034;
  fVar46 = _DAT_14300b368;
  fVar31 = _DAT_14300b364;
  uVar47 = _DAT_142e36f40;
  uVar48 = _UNK_142e36f44;
  uVar49 = _UNK_142e36f48;
  uVar50 = _UNK_142e36f4c;
  uVar25 = uStack_f4;
  fVar51 = _DAT_142e36f50;
  puStack_120 = puVar16;
LAB_14084559a:
  do {
    if ((lStack_128 == 0) || (lStack_128 == lVar12)) {
      if ((lStack_130 == 0) || (lStack_130 == lStack_1e0)) {
        return;
      }
      lStack_128 = 0;
      lVar10 = lStack_130;
      lStack_130 = lStack_130 + 0x10;
    }
    else {
      lVar10 = lStack_128;
      lStack_128 = lStack_128 + 0x10;
    }
    *puVar29 = *puVar29 + 1;
    lVar10 = *(longlong *)(lVar10 + 8);
    *puVar16 = uVar25;
    lStack_170 = lVar10;
    if (plVar27[3] == 0) {
LAB_14084655f:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300b3c0);
    }
    uVar8 = pdb_1400af0a0(plStack_168,&lStack_170);
    lVar14 = *plVar27;
    bVar30 = (byte)(uVar8 >> 0x39);
    auVar35 = ZEXT216(CONCAT11(bVar30,bVar30));
    auVar35 = pshuflw(auVar35,auVar35,0);
    lVar13 = 0;
    while( true ) {
      uVar8 = uVar8 & plVar27[1];
      auVar42 = *(undefined1 (*) [16])(lVar14 + uVar8);
      auVar39[0] = -(auVar42[0] == auVar35[0]);
      auVar39[1] = -(auVar42[1] == auVar35[1]);
      auVar39[2] = -(auVar42[2] == auVar35[2]);
      auVar39[3] = -(auVar42[3] == auVar35[3]);
      auVar39[4] = -(auVar42[4] == auVar35[4]);
      auVar39[5] = -(auVar42[5] == auVar35[5]);
      auVar39[6] = -(auVar42[6] == auVar35[6]);
      auVar39[7] = -(auVar42[7] == auVar35[7]);
      auVar39[8] = -(auVar42[8] == auVar35[0]);
      auVar39[9] = -(auVar42[9] == auVar35[1]);
      auVar39[10] = -(auVar42[10] == auVar35[2]);
      auVar39[0xb] = -(auVar42[0xb] == auVar35[3]);
      auVar39[0xc] = -(auVar42[0xc] == auVar35[4]);
      auVar39[0xd] = -(auVar42[0xd] == auVar35[5]);
      auVar39[0xe] = -(auVar42[0xe] == auVar35[6]);
      auVar39[0xf] = -(auVar42[0xf] == auVar35[7]);
      uVar20 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar20;
      if (uVar20 != 0) break;
LAB_1408456a0:
      auVar36[0] = -(auVar42[0] == -1);
      auVar36[1] = -(auVar42[1] == -1);
      auVar36[2] = -(auVar42[2] == -1);
      auVar36[3] = -(auVar42[3] == -1);
      auVar36[4] = -(auVar42[4] == -1);
      auVar36[5] = -(auVar42[5] == -1);
      auVar36[6] = -(auVar42[6] == -1);
      auVar36[7] = -(auVar42[7] == -1);
      auVar36[8] = -(auVar42[8] == -1);
      auVar36[9] = -(auVar42[9] == -1);
      auVar36[10] = -(auVar42[10] == -1);
      auVar36[0xb] = -(auVar42[0xb] == -1);
      auVar36[0xc] = -(auVar42[0xc] == -1);
      auVar36[0xd] = -(auVar42[0xd] == -1);
      auVar36[0xe] = -(auVar42[0xe] == -1);
      auVar36[0xf] = -(auVar42[0xf] == -1);
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') goto LAB_14084655f;
      uVar8 = uVar8 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
    while( true ) {
      uVar4 = 0;
      for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar26 = uVar4 + uVar8 & plVar27[1];
      lVar17 = uVar26 * -0x2b0;
      lStack_110 = lVar10;
      if (lVar10 == *(longlong *)(lVar14 + -0x2b0 + lVar17)) break;
      uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
      uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
      if (uVar20 == 0) goto LAB_1408456a0;
    }
    lVar17 = lVar17 + lVar14;
    lVar10 = *(longlong *)(lVar17 + -0x1d8);
    if (lVar10 == 0) {
      pbVar9 = (byte *)0x4;
      lVar13 = *(longlong *)(lVar17 + -0x1b8);
    }
    else {
      pdb_14007ee60();
      pbVar9 = pub_1406abae0(lVar10 * 4,4);
      if (pbVar9 == (byte *)0x0) {
        uVar8 = 4;
        uVar26 = pdb_142dc7e2a(4,lVar10 * 4);
        goto LAB_140846616;
      }
      lVar13 = *(longlong *)(lVar17 + -0x1b8);
      lVar12 = lStack_118;
    }
    if (lVar13 != 0) {
      pub_1406abac0(*(byte **)(lVar17 + -0x1b0),lVar13 << 2,4);
    }
    uVar25 = uStack_f4;
    puVar16 = puStack_120;
    lVar13 = lStack_1d8;
    *(longlong *)(lVar17 + -0x1b8) = lVar10;
    *(byte **)(lVar17 + -0x1b0) = pbVar9;
    *(longlong *)(lVar17 + -0x1a8) = lVar10;
    if (*(uint *)(lVar17 + -0x50) < 2) break;
    if (*(char *)(lVar17 + -0xb) == '\0') {
      *(undefined8 *)(lVar17 + -0x1c0) = 0;
      lVar12 = *(longlong *)(lVar17 + -0x218);
      uVar8 = *(ulonglong *)(lVar17 + -0x210);
      if (*(ulonglong *)(lVar17 + -0x1d0) < uVar8) {
        pdb_142d7f1b0(lVar17 + -0x1d0,0,uVar8,4,4);
        lVar13 = *(longlong *)(lVar17 + -0x1c0);
        lVar10 = *(longlong *)(lVar17 + -0x1c8);
      }
      else {
        if (uVar8 == 0) goto LAB_140845561;
        lVar13 = 0;
        lVar10 = *(longlong *)(lVar17 + -0x1c8);
      }
      if (uVar8 < 9) {
        lVar14 = 0;
      }
      else {
        uVar23 = lVar10 + lVar13 * 4;
        pfVar21 = (float *)(lVar10 + (lVar13 + uVar8) * 4);
        puVar16 = puStack_120;
        if (uVar23 < (lVar12 + uVar8 * 0xc) - 4 && (float *)(lVar12 + 4U) < pfVar21) {
          lVar14 = 0;
        }
        else if (uVar23 < (lVar14 + uVar26 * -0x2b0) - 0x1c && (float *)(lVar17 + -0x20) < pfVar21)
        {
          lVar14 = 0;
        }
        else {
          uVar26 = (ulonglong)((uint)uVar8 & 7);
          if ((uVar8 & 7) == 0) {
            uVar26 = 8;
          }
          lVar14 = uVar8 - uVar26;
          fVar45 = *(float *)(lVar17 + -0x20);
          lVar28 = lVar10 + lVar13 * 4;
          lVar13 = lVar13 + lVar14;
          pfVar21 = (float *)(lVar12 + 0x58);
          lVar24 = 0;
          do {
            auVar38._0_4_ = pfVar21[-0x15] + fVar45;
            auVar38._4_4_ = pfVar21[-0x12] + fVar45;
            auVar38._8_4_ = pfVar21[-0xf] + fVar45;
            auVar38._12_4_ = pfVar21[-0xc] + fVar45;
            auVar41._0_4_ = pfVar21[-9] + fVar45;
            auVar41._4_4_ = pfVar21[-6] + fVar45;
            auVar41._8_4_ = pfVar21[-3] + fVar45;
            auVar41._12_4_ = *pfVar21 + fVar45;
            auVar42._4_4_ = uVar48;
            auVar42._0_4_ = uVar47;
            auVar42._8_4_ = uVar49;
            auVar42._12_4_ = uVar50;
            auVar35 = maxps(auVar38,auVar42);
            auVar6._4_4_ = uVar48;
            auVar6._0_4_ = uVar47;
            auVar6._8_4_ = uVar49;
            auVar6._12_4_ = uVar50;
            auVar42 = maxps(auVar41,auVar6);
            *(undefined1 (*) [16])(lVar28 + lVar24 * 4) = auVar35;
            *(undefined1 (*) [16])(lVar28 + 0x10 + lVar24 * 4) = auVar42;
            lVar24 = lVar24 + 8;
            pfVar21 = pfVar21 + 0x18;
          } while (lVar14 != lVar24);
        }
      }
      lVar28 = uVar8 - lVar14;
      pfVar21 = (float *)(lVar12 + lVar14 * 0xc + 4);
      lVar12 = lVar13 * -4;
      do {
        lVar14 = lVar12;
        fVar45 = *pfVar21 + *(float *)(lVar17 + -0x20);
        if (fVar45 <= fVar51) {
          fVar45 = fVar51;
        }
        *(float *)(lVar10 + lVar13 * 4) = fVar45;
        lVar13 = lVar13 + 1;
        pfVar21 = pfVar21 + 3;
        lVar28 = lVar28 + -1;
        lVar12 = lVar14 + -4;
      } while (lVar28 != 0);
      *(longlong *)(lVar17 + -0x1c0) = lVar13;
      if (lVar13 == 0) {
LAB_140845561:
        fVar45 = 0.0;
      }
      else {
        fVar45 = 0.0;
        lVar12 = -4;
        do {
          fVar32 = *(float *)(*(longlong *)(lVar17 + -0x1c8) + 4 + lVar12);
          fVar33 = fVar32;
          if (fVar32 <= fVar45) {
            fVar33 = fVar45;
          }
          fVar45 = (float)(~-(uint)NAN(fVar45) & (uint)fVar33 | -(uint)NAN(fVar45) & (uint)fVar32);
          lVar12 = lVar12 + 4;
        } while (lVar14 + lVar12 != 0);
      }
      *(undefined4 *)(lVar17 + -0x1a0) = 1;
      *(float *)(lVar17 + -0x19c) = fVar45;
      *(undefined4 *)(lVar17 + -0x198) = 1;
      *(float *)(lVar17 + -0x194) = fVar45;
      lVar12 = lStack_118;
      plVar27 = plStack_100;
      uVar25 = uStack_f4;
    }
    else {
      uVar8 = *(ulonglong *)(lVar17 + -0x210);
      if (uVar8 == 0) {
        unaff_XMM6_Da = *(float *)(lVar17 + -0x20) + fVar43;
        if (unaff_XMM6_Da <= fVar31) {
          unaff_XMM6_Da = fVar31;
        }
        *(undefined8 *)(lVar17 + -0x1c0) = 0;
        lVar10 = 0;
      }
      else {
        lVar14 = *(longlong *)(lVar17 + -0x218);
        uVar26 = uVar8 * 0xc - 0xc;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar26;
        lVar10 = lVar14;
        fVar45 = fVar43;
        if ((SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
          lVar10 = lVar14 + 0xc;
          unaff_XMM6_Da = *(float *)(lVar14 + 4);
          fVar45 = unaff_XMM6_Da;
          if (unaff_XMM6_Da <= fVar43) {
            unaff_XMM6_Da = fVar43;
            fVar45 = fVar43;
          }
        }
        if (0xb < uVar26) {
          unaff_XMM6_Da = fVar45;
          do {
            fVar45 = *(float *)(lVar10 + 4);
            fVar32 = *(float *)(lVar10 + 0x10);
            fVar33 = fVar45;
            if (fVar45 <= unaff_XMM6_Da) {
              fVar33 = unaff_XMM6_Da;
            }
            fVar33 = (float)(~-(uint)NAN(unaff_XMM6_Da) & (uint)fVar33 |
                            -(uint)NAN(unaff_XMM6_Da) & (uint)fVar45);
            lVar10 = lVar10 + 0x18;
            fVar45 = fVar32;
            if (fVar32 <= fVar33) {
              fVar45 = fVar33;
            }
            unaff_XMM6_Da =
                 (float)(-(uint)NAN(fVar33) & (uint)fVar32 | ~-(uint)NAN(fVar33) & (uint)fVar45);
          } while (lVar10 != lVar14 + uVar8 * 0xc);
        }
        unaff_XMM6_Da = unaff_XMM6_Da + *(float *)(lVar17 + -0x20);
        if (unaff_XMM6_Da <= fVar31) {
          unaff_XMM6_Da = fVar31;
        }
        *(undefined8 *)(lVar17 + -0x1c0) = 0;
        if (*(ulonglong *)(lVar17 + -0x1d0) < uVar8) {
          pdb_142d7f1b0(lVar17 + -0x1d0,0,uVar8,4,4);
          lVar10 = *(longlong *)(lVar17 + -0x1c0);
          pfVar2 = *(float **)(lVar17 + -0x1c8);
          pfVar21 = pfVar2 + lVar10;
        }
        else {
          lVar10 = 0;
          pfVar2 = *(float **)(lVar17 + -0x1c8);
          pfVar21 = pfVar2;
        }
        if (uVar8 != 1) {
          lVar14 = 1;
          if (uVar8 < 9) {
LAB_140845a49:
            lVar14 = uVar8 - lVar14;
            do {
              *pfVar21 = unaff_XMM6_Da;
              pfVar21 = pfVar21 + 1;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          else {
            uVar26 = uVar8 - 1 & 0xfffffffffffffff8;
            pfVar21 = pfVar21 + uVar26;
            lVar14 = uVar26 + 1;
            uVar23 = 0;
            do {
              pfVar1 = pfVar2 + lVar10 + uVar23;
              *pfVar1 = unaff_XMM6_Da;
              pfVar1[1] = unaff_XMM6_Da;
              pfVar1[2] = unaff_XMM6_Da;
              pfVar1[3] = unaff_XMM6_Da;
              pfVar1 = pfVar2 + lVar10 + uVar23 + 4;
              *pfVar1 = unaff_XMM6_Da;
              pfVar1[1] = unaff_XMM6_Da;
              pfVar1[2] = unaff_XMM6_Da;
              pfVar1[3] = unaff_XMM6_Da;
              uVar23 = uVar23 + 8;
            } while (uVar26 != uVar23);
            if (uVar8 - 1 != uVar26) goto LAB_140845a49;
          }
          lVar10 = lVar10 + uVar8 + -1;
        }
        *pfVar21 = unaff_XMM6_Da;
        lVar10 = lVar10 + 1;
      }
      *(longlong *)(lVar17 + -0x1c0) = lVar10;
      *(undefined4 *)(lVar17 + -0x1a0) = 1;
      *(float *)(lVar17 + -0x19c) = unaff_XMM6_Da;
      *(undefined4 *)(lVar17 + -0x198) = 1;
      *(float *)(lVar17 + -0x194) = unaff_XMM6_Da;
      plVar27 = plStack_100;
    }
  } while( true );
  uVar8 = *(ulonglong *)(lVar17 + -0x210);
  fVar45 = fVar43;
  if (uVar8 != 0) {
    lVar14 = *(longlong *)(lVar17 + -0x218);
    uVar26 = uVar8 * 0xc - 0xc;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar26;
    lVar10 = lVar14;
    if ((SUB164(auVar35 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
      lVar10 = lVar14 + 0xc;
      fVar45 = *(float *)(lVar14 + 4);
      if (*(float *)(lVar14 + 4) <= fVar43) {
        fVar45 = fVar43;
      }
    }
    if (0xb < uVar26) {
      do {
        fVar32 = *(float *)(lVar10 + 4);
        fVar33 = *(float *)(lVar10 + 0x10);
        fVar34 = fVar32;
        if (fVar32 <= fVar45) {
          fVar34 = fVar45;
        }
        fVar32 = (float)(~-(uint)NAN(fVar45) & (uint)fVar34 | -(uint)NAN(fVar45) & (uint)fVar32);
        lVar10 = lVar10 + 0x18;
        fVar45 = fVar33;
        if (fVar33 <= fVar32) {
          fVar45 = fVar32;
        }
        fVar45 = (float)(-(uint)NAN(fVar32) & (uint)fVar33 | ~-(uint)NAN(fVar32) & (uint)fVar45);
      } while (lVar10 != lVar14 + uVar8 * 0xc);
    }
  }
  fVar45 = fVar45 + *(float *)(lVar17 + -0x20) + fVar46;
  if (fVar45 <= fVar31) {
    fVar45 = fVar31;
  }
  *(undefined8 *)(lVar17 + -0x1c0) = 0;
  if (uVar8 == 0) {
    lVar10 = 0;
  }
  else {
    if (*(ulonglong *)(lVar17 + -0x1d0) < uVar8) {
      pdb_142d7f1b0(lVar17 + -0x1d0,0,uVar8,4,4);
      lVar10 = *(longlong *)(lVar17 + -0x1c0);
      pfVar2 = *(float **)(lVar17 + -0x1c8);
      pfVar21 = pfVar2 + lVar10;
    }
    else {
      lVar10 = 0;
      pfVar2 = *(float **)(lVar17 + -0x1c8);
      pfVar21 = pfVar2;
    }
    if (uVar8 != 1) {
      lVar14 = 1;
      if (uVar8 < 9) {
LAB_1408458c9:
        lVar14 = uVar8 - lVar14;
        do {
          *pfVar21 = fVar45;
          pfVar21 = pfVar21 + 1;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      else {
        uVar26 = uVar8 - 1 & 0xfffffffffffffff8;
        pfVar21 = pfVar21 + uVar26;
        lVar14 = uVar26 + 1;
        uVar23 = 0;
        do {
          pfVar1 = pfVar2 + lVar10 + uVar23;
          *pfVar1 = fVar45;
          pfVar1[1] = fVar45;
          pfVar1[2] = fVar45;
          pfVar1[3] = fVar45;
          pfVar1 = pfVar2 + lVar10 + uVar23 + 4;
          *pfVar1 = fVar45;
          pfVar1[1] = fVar45;
          pfVar1[2] = fVar45;
          pfVar1[3] = fVar45;
          uVar23 = uVar23 + 8;
        } while (uVar26 != uVar23);
        if (uVar8 - 1 != uVar26) goto LAB_1408458c9;
      }
      lVar10 = lVar10 + uVar8 + -1;
    }
    *pfVar21 = fVar45;
    lVar10 = lVar10 + 1;
  }
  plVar27 = plStack_100;
  *(longlong *)(lVar17 + -0x1c0) = lVar10;
  *(undefined4 *)(lVar17 + -0x1a0) = 1;
  *(float *)(lVar17 + -0x19c) = fVar45;
  *(undefined4 *)(lVar17 + -0x198) = 1;
  *(float *)(lVar17 + -0x194) = fVar45;
  pdb_14092f8d0(&iStack_24c,lVar17 + -0x2a8);
  if (iStack_24c == 1) {
    uStack_1b8 = uStack_238;
    uStack_1c8 = uStack_248;
    uStack_1c0 = uStack_240;
    uVar26 = pdb_140b54b40(plVar27,lStack_110);
    if ((uVar26 & 0xffffffff) != 0) {
      uVar8 = uVar26 & 0xffffffff ^ 0xffffffff;
      uVar19 = 1;
      if (*(ulonglong *)(lStack_160 + 0x10) <= uVar8) {
LAB_14084661b:
        uStack_214 = (undefined4)uVar8;
        uStack_218 = uVar19;
        pbStack_210 = (byte *)uVar26;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14300b440,0x2b,&uStack_218,&UNK_14300b420,&UNK_14300b3d8);
      }
      piVar15 = (int *)(uVar8 * 0x18 + *(longlong *)(lStack_160 + 8));
      uVar8 = uVar26 >> 0x20;
      if ((piVar15[4] != (int)(uVar26 >> 0x20)) || (*piVar15 == 0)) goto LAB_14084661b;
      uVar8 = *(ulonglong *)(piVar15 + 2);
      if ((*(ulonglong *)(lVar13 + 0x38) <= (uVar8 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lVar13 + 0x28) + (uVar8 >> 6 & 0x3ffffff) * 8) >>
           (uVar8 & 0x3f) & 1) == 0)) {
LAB_140846616:
        uVar19 = 0;
        goto LAB_14084661b;
      }
      lVar10 = (ulonglong)(uint)~piVar15[1] * 0x58 +
               *(longlong *)
                (*(longlong *)(*(longlong *)(lStack_160 + 0x1a0) + 0x18 + (uVar8 >> 0x20) * 0x48) +
                 0x10 + ~*(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(lStack_160 + 0x1a0) + 0x38 + (uVar8 >> 0x20) * 0x48) +
                          *(longlong *)(lVar13 + 0x110) * 8) * 0x30);
      cVar7 = pdb_140b77b60(lVar10);
      if (cVar7 != '\0') {
        lStack_148 = lVar10;
        if (*(char *)(lVar10 + 0x3c) == '\0') {
          fStack_108 = (float)pdb_140df0700(&uStack_1c8,0);
          fVar31 = (float)pdb_140df0700(&uStack_1c8,1);
          fStack_104 = (float)pdb_140df0700(&uStack_1c8,2);
          fStack_f8 = (float)pdb_140df0700(&uStack_1c8,3);
          fVar43 = uStack_1b8._4_4_;
        }
        else {
          fStack_108 = (float)pdb_140df0700(&uStack_1c8,1);
          fVar31 = (float)pdb_140df0700(&uStack_1c8,2);
          fStack_104 = (float)pdb_140df0700(&uStack_1c8,3);
          fStack_f8 = (float)pdb_140df0700(&uStack_1c8,4);
          fVar43 = (float)uStack_1b8;
        }
        *puVar16 = uVar25;
        if (plVar27[3] == 0) goto LAB_14084656b;
        lVar12 = lStack_148 + 0x24;
        uVar8 = pdb_1400af0a0(plStack_168,&lStack_170);
        lVar10 = *plVar27;
        bVar30 = (byte)(uVar8 >> 0x39);
        auVar35 = ZEXT216(CONCAT11(bVar30,bVar30));
        auVar35 = pshuflw(auVar35,auVar35,0);
        lVar14 = 0;
LAB_140845d8d:
        uVar8 = uVar8 & plVar27[1];
        auVar42 = *(undefined1 (*) [16])(lVar10 + uVar8);
        auVar40[0] = -(auVar42[0] == auVar35[0]);
        auVar40[1] = -(auVar42[1] == auVar35[1]);
        auVar40[2] = -(auVar42[2] == auVar35[2]);
        auVar40[3] = -(auVar42[3] == auVar35[3]);
        auVar40[4] = -(auVar42[4] == auVar35[4]);
        auVar40[5] = -(auVar42[5] == auVar35[5]);
        auVar40[6] = -(auVar42[6] == auVar35[6]);
        auVar40[7] = -(auVar42[7] == auVar35[7]);
        auVar40[8] = -(auVar42[8] == auVar35[0]);
        auVar40[9] = -(auVar42[9] == auVar35[1]);
        auVar40[10] = -(auVar42[10] == auVar35[2]);
        auVar40[0xb] = -(auVar42[0xb] == auVar35[3]);
        auVar40[0xc] = -(auVar42[0xc] == auVar35[4]);
        auVar40[0xd] = -(auVar42[0xd] == auVar35[5]);
        auVar40[0xe] = -(auVar42[0xe] == auVar35[6]);
        auVar40[0xf] = -(auVar42[0xf] == auVar35[7]);
        uVar20 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf
        ;
        uVar18 = (uint)uVar20;
        while( true ) {
          if (uVar20 == 0) goto LAB_140845ddc;
          uVar4 = 0;
          for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar13 = (uVar4 + uVar8 & plVar27[1]) * -0x2b0;
          if (lStack_110 == *(longlong *)(lVar10 + -0x2b0 + lVar13)) break;
          uVar20 = (ushort)(uVar18 - 1) & (ushort)uVar18;
          uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar20);
        }
        lVar10 = lVar10 + lVar13;
        fVar43 = fVar43 * fVar51;
        cVar7 = pdb_1408ff990();
        fVar46 = _DAT_142e36f28;
        fVar32 = fVar43;
        if (cVar7 == '\0') {
          fVar32 = (float)pdb_140b76870(lVar12);
          fVar33 = (float)pdb_140de8220();
          fVar32 = fVar33 * fVar32 + fVar43;
        }
        fVar32 = fVar32 + _DAT_14300b140;
        fVar51 = (fVar51 / *(float *)(lVar10 + -0x18)) * _DAT_142e3c678;
        puStack_1d0 = puVar29;
        pdb_14017ede0(&pbStack_230,*(longlong *)(lVar10 + -0x218),
                      *(longlong *)(lVar10 + -0x218) + *(longlong *)(lVar10 + -0x210) * 0xc);
        uStack_198 = uStack_220;
        pbStack_1a8 = pbStack_230;
        pbStack_1a0 = (byte *)uStack_228;
        pdb_140080c90(&uStack_218,&pbStack_1a8,0);
        pbVar9 = pbStack_1f8;
        if (SBORROW8(0,CONCAT44(uStack_214,uStack_218))) {
          pbStack_1a8 = pbStack_210;
          pbStack_1a0 = (byte *)uStack_208;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143306430,0x2b,&pbStack_1a8,&UNK_143306410,&UNK_143306a30);
        }
        uStack_178 = uStack_1e8;
        pbStack_1a8 = (byte *)CONCAT44(uStack_214,uStack_218);
        pbStack_188 = pbStack_1f8;
        uStack_180 = uStack_1f0;
        uStack_198 = uStack_208;
        lStack_190 = lStack_200;
        pbStack_1a0 = pbStack_210;
        uVar8 = uStack_1f0;
        if (*(ulonglong *)(lVar10 + -0x1c0) < uStack_1f0) {
          uVar8 = *(ulonglong *)(lVar10 + -0x1c0);
        }
        lStack_158 = lVar10;
        if (uVar8 == 0) {
          uStack_140 = 0;
        }
        else {
          fVar32 = fVar32 / fVar43;
          lVar12 = *(longlong *)(lVar10 + -0x1c8);
          lStack_110 = lVar10 + -9;
          fStack_150 = fVar51 + fVar31;
          fVar33 = fStack_108 - fVar51;
          fStack_14c = fVar31 - fStack_108;
          fVar43 = fStack_104 - fVar51;
          fVar51 = fVar51 + fStack_f8;
          fStack_f8 = fStack_f8 - fStack_104;
          uStack_140 = 0;
          uVar26 = 0;
          do {
            fVar31 = *(float *)(pbVar9 + uVar26 * 4);
            if ((fVar33 <= fVar31) && (fVar31 < fStack_150)) {
              fVar34 = (fVar31 - fStack_108) / fStack_14c;
              fVar31 = 0.0;
              if (0.0 <= fVar34) {
                fVar31 = fVar34;
              }
              if (fVar31 <= fVar46) {
                fVar46 = fVar31;
              }
              fVar44 = fVar46 + _DAT_142e36f38;
              cVar7 = pdb_140c33110(lStack_110,*(undefined1 *)(lVar10 + -5));
              fVar31 = (float)pdb_140b77a00(lStack_148);
              fVar46 = _DAT_142e36f28;
              fVar34 = 0.0;
              if (cVar7 == '\0') {
                fVar34 = _DAT_142e3c620;
              }
              fVar44 = (float)((uint)fVar44 & _DAT_142e377e0);
              uVar11 = pub_142e32ad0(_DAT_142e36f28 - (fVar44 + fVar44) / fVar32);
              fVar44 = (fVar31 + fVar34) * extraout_XMM0_Da + (fVar46 - extraout_XMM0_Da) * fVar34;
              *(float *)(lVar12 + uVar26 * 4) = *(float *)(lVar12 + uVar26 * 4) + fVar44;
              fVar31 = *(float *)(pbVar9 + uVar26 * 4);
              if (0.0 < fVar34) {
                if ((fVar31 == fVar46) && (!NAN(fVar31) && !NAN(fVar46))) {
                  uStack_140 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
                  fStack_134 = fVar44;
                  fVar31 = fVar46;
                }
              }
            }
            if ((fVar43 <= fVar31) && (fVar31 < fVar51)) {
              fVar34 = (fVar31 - fStack_104) / fStack_f8;
              fVar31 = 0.0;
              if (0.0 <= fVar34) {
                fVar31 = fVar34;
              }
              if (fVar31 <= fVar46) {
                fVar46 = fVar31;
              }
              fVar44 = fVar46 + _DAT_142e36f38;
              cVar7 = pdb_140c33110(lStack_110,*(undefined1 *)(lVar10 + -5));
              fVar34 = (float)pdb_140b77a00(lStack_148);
              fVar46 = _DAT_142e36f28;
              fVar31 = 0.0;
              if (cVar7 == '\0') {
                fVar31 = _DAT_142e3c620;
              }
              fVar44 = (float)((uint)fVar44 & _DAT_142e377e0);
              uVar11 = pub_142e32ad0(_DAT_142e36f28 - (fVar44 + fVar44) / fVar32);
              fVar34 = (fVar34 + fVar31) * extraout_XMM0_Da_00 +
                       (fVar46 - extraout_XMM0_Da_00) * fVar31;
              *(float *)(lVar12 + uVar26 * 4) = *(float *)(lVar12 + uVar26 * 4) + fVar34;
              if (0.0 < fVar31) {
                if ((*(float *)(pbVar9 + uVar26 * 4) == fVar46) &&
                   (!NAN(*(float *)(pbVar9 + uVar26 * 4)) && !NAN(fVar46))) {
                  uStack_140 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
                  fStack_134 = fVar34;
                }
              }
            }
            uVar26 = uVar26 + 1;
          } while (uVar8 != uVar26);
        }
        lVar10 = lStack_148;
        if (pbStack_1a8 != (byte *)0x0) {
          pub_1406abac0(pbStack_1a0,(longlong)pbStack_1a8 << 3,4);
        }
        plVar27 = plStack_100;
        lVar12 = lStack_118;
        fVar46 = _DAT_14300b368;
        fVar31 = _DAT_14300b364;
        fVar43 = _DAT_142f61034;
        unaff_XMM6_Da = _DAT_142e3c620;
        fVar51 = _DAT_142e36f50;
        uVar50 = _UNK_142e36f4c;
        uVar49 = _UNK_142e36f48;
        uVar48 = _UNK_142e36f44;
        uVar47 = _DAT_142e36f40;
        if (lStack_190 != 0) {
          pub_1406abac0(pbVar9,lStack_190 << 2,4);
        }
        puVar16 = puStack_120;
        puVar29 = puStack_1d0;
        if ((uStack_140 & 1) != 0) {
          if (*(longlong *)(lStack_158 + -0x1c0) == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_14300b408);
          }
          **(float **)(lStack_158 + -0x1c8) = fStack_134 + **(float **)(lStack_158 + -0x1c8);
        }
        fVar32 = (float)pdb_140b77a00(lVar10);
        *(undefined4 *)(lStack_158 + -0x198) = 1;
        *(float *)(lStack_158 + -0x194) = fVar45 + fVar32 + unaff_XMM6_Da;
      }
    }
  }
  goto LAB_14084559a;
LAB_140845ddc:
  auVar37[0] = -(auVar42[0] == -1);
  auVar37[1] = -(auVar42[1] == -1);
  auVar37[2] = -(auVar42[2] == -1);
  auVar37[3] = -(auVar42[3] == -1);
  auVar37[4] = -(auVar42[4] == -1);
  auVar37[5] = -(auVar42[5] == -1);
  auVar37[6] = -(auVar42[6] == -1);
  auVar37[7] = -(auVar42[7] == -1);
  auVar37[8] = -(auVar42[8] == -1);
  auVar37[9] = -(auVar42[9] == -1);
  auVar37[10] = -(auVar42[10] == -1);
  auVar37[0xb] = -(auVar42[0xb] == -1);
  auVar37[0xc] = -(auVar42[0xc] == -1);
  auVar37[0xd] = -(auVar42[0xd] == -1);
  auVar37[0xe] = -(auVar42[0xe] == -1);
  auVar37[0xf] = -(auVar42[0xf] == -1);
  if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') {
LAB_14084656b:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300b3f0);
  }
  uVar8 = uVar8 + lVar14 + 0x10;
  lVar14 = lVar14 + 0x10;
  goto LAB_140845d8d;
}

