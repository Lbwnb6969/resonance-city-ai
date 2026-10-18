// VA 0x140bb4e60, PDB extent 4451 bytes
// country_core::systems::ivy::ivy_spawner::ivy_spawner
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_spawner.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::ivy_spawner::ivy_spawner
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_spawner.rs
   Extent: 4451 */

void pdb_140bb4e60(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  byte *arg0;
  ulonglong uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  undefined1 (*pauVar26) [16];
  ulonglong uVar27;
  ushort uVar28;
  longlong lVar29;
  undefined1 (*pauVar30) [16];
  int iVar31;
  longlong *plVar32;
  float fVar33;
  float extraout_XMM0_Da;
  float fVar34;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  undefined8 uStack_1d0;
  float fStack_1c8;
  undefined4 uStack_1c4;
  longlong lStack_1c0;
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 *puStack_1a8;
  ushort uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined4 uStack_174;
  int iStack_170;
  float fStack_16c;
  longlong lStack_168;
  undefined4 *puStack_160;
  undefined1 auStack_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_148 [16];
  undefined1 (*pauStack_130) [16];
  ulonglong *puStack_128;
  undefined8 uStack_120;
  float afStack_114 [3];
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float fStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  
  if (*(char *)(*param_7 + 0x20) != '\x01') {
    return;
  }
  puVar19 = (undefined8 *)*param_1;
  lVar14 = puVar19[3];
  if (lVar14 == 0) {
    uVar23 = 0;
  }
  else {
    pauVar26 = (undefined1 (*) [16])*puVar19;
    auVar35 = *pauVar26;
    uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
    pauVar30 = pauVar26 + 1;
    uVar23 = 0;
    do {
      if ((short)uVar24 == 0) {
        do {
          auVar35 = *pauVar30;
          pauVar26 = pauVar26 + -0x98;
          pauVar30 = pauVar30 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar13 = 0;
      for (uVar20 = uVar24; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
        uVar13 = uVar13 + 1;
      }
      uVar24 = uVar24 - 1 & uVar24;
      lVar22 = uVar23 + *(longlong *)((longlong)pauVar26 + (ulonglong)uVar13 * -0x98 + -0x40);
      uVar23 = lVar22 - 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if (39999 < lVar22 + 0x12U) {
      return;
    }
  }
  uVar24 = *(uint *)(*param_5 + 0x130);
  puStack_188 = param_1;
  puStack_180 = puVar19;
  if (uVar24 < 3) {
    lVar14 = *param_6;
    pfVar21 = (float *)&UNK_143044340;
    if (*(char *)*param_4 != '\0') {
      pfVar21 = (float *)((char *)*param_4 + 4);
    }
    fVar44 = *pfVar21;
    fVar45 = pfVar21[2];
    iVar5 = *(int *)(lVar14 + 0x48);
    iVar25 = *(int *)(lVar14 + 0x4c);
    fVar33 = (float)pub_142e32a40((*(float *)(lVar14 + 0x50) * _DAT_142e36f50 + fVar44) /
                                  (*(float *)(lVar14 + 0x50) / (float)iVar5));
    fVar42 = _DAT_142e382cc;
    iVar31 = (int)fVar33;
    if (_DAT_142e382cc < fVar33) {
      iVar31 = 0x7fffffff;
    }
    if (NAN(fVar33)) {
      iVar31 = 0;
    }
    fVar33 = (float)pub_142e32a40();
    iVar11 = (int)fVar33;
    if (fVar42 < fVar33) {
      iVar11 = 0x7fffffff;
    }
    if (NAN(fVar33)) {
      iVar11 = 0;
    }
    if (iVar31 < 0) {
      return;
    }
    if (iVar25 <= iVar11) {
      return;
    }
    if (iVar5 <= iVar31) {
      return;
    }
    if (iVar11 < 0) {
      return;
    }
    uVar17 = (ulonglong)(iVar11 * iVar5 + iVar31);
    if (*(ulonglong *)(lVar14 + 0x10) <= uVar17) {
      return;
    }
    lVar22 = uVar17 * 0x30;
    uVar17 = *(ulonglong *)(*(longlong *)(lVar14 + 8) + 0x10 + lVar22);
    if (uVar17 == 0) {
      return;
    }
    lVar14 = *(longlong *)(*(longlong *)(lVar14 + 8) + 8 + lVar22);
    pdb_140bb46f0(&pauStack_1b8);
    if ((char)pauStack_1b8 == '\0') {
      return;
    }
    if (uVar17 <= pauStack_1b0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pauStack_1b0,uVar17,&UNK_143061700);
    }
    lVar22 = (longlong)pauStack_1b0 * 0x38;
    uVar2 = *(undefined8 *)(lVar14 + 8 + lVar22);
    fVar34 = (float)*(undefined8 *)(lVar14 + lVar22);
    fVar37 = (float)((ulonglong)*(undefined8 *)(lVar14 + lVar22) >> 0x20);
    fVar33 = (float)uVar2;
    fVar36 = (float)((ulonglong)uVar2 >> 0x20);
    fVar38 = fVar33 - fVar34;
    fVar40 = fVar36 - fVar37;
    fVar42 = fVar40 * fVar40 + fVar38 * fVar38;
    if (fVar42 <= _DAT_143006dc0) {
      fVar42 = _DAT_143006dc0;
    }
    fVar42 = ((fVar45 - fVar37) * fVar40 + (fVar44 - fVar34) * fVar38) / fVar42;
    fVar44 = 0.0;
    if (0.0 <= fVar42) {
      fVar44 = fVar42;
    }
    fVar45 = _DAT_142e36f28;
    if (fVar44 <= _DAT_142e36f28) {
      fVar45 = fVar44;
    }
    fVar44 = fVar45 * fVar33 + (_DAT_142e36f28 - fVar45) * fVar34;
    fVar45 = fVar45 * fVar36 + (_DAT_142e36f28 - fVar45) * fVar37;
    pauVar30 = *(undefined1 (**) [16])(lVar14 + 0x28 + lVar22);
    plVar32 = (longlong *)*param_3;
    fVar42 = 0.0;
  }
  else {
    plVar32 = (longlong *)*param_3;
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar17 = plVar32[3];
    if (uVar17 == 0) {
      return;
    }
    lVar14 = *param_2;
    pauVar26 = (undefined1 (*) [16])*plVar32;
    auVar35 = *pauVar26;
    pauVar30 = pauVar26 + 1;
    uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
    puVar1 = puVar19 + 6;
    uVar15 = uVar17;
    uVar27 = pdb_141b1e510(puVar1);
    if (uVar27 != 0) {
      uVar18 = uVar27 - 1;
      if (uVar17 <= uVar18) {
LAB_140bb5f9b:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430616d0);
      }
      uVar8 = uVar27;
      uVar20 = uVar13;
      uVar12 = (uint)uVar15;
      if ((uVar27 & 1) != 0) {
        if ((short)uVar13 == 0) {
          do {
            auVar35 = *pauVar30;
            pauVar26 = pauVar26 + -0x2b0;
            pauVar30 = pauVar30 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar13 == 0);
        }
        uVar20 = uVar13 - 1 & uVar13;
        uVar8 = uVar18;
        uVar12 = uVar20;
      }
      while (uVar13 = uVar12, uVar18 != 0) {
        if ((short)uVar20 == 0) {
          do {
            auVar35 = *pauVar30;
            pauVar26 = pauVar26 + -0x2b0;
            pauVar30 = pauVar30 + 1;
            uVar20 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar20 == 0);
        }
        uVar28 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar28);
        if (uVar28 == 0) {
          do {
            auVar35 = *pauVar30;
            pauVar26 = pauVar26 + -0x2b0;
            pauVar30 = pauVar30 + 1;
            uVar20 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar20 == 0);
        }
        uVar20 = uVar20 - 1 & uVar20;
        uVar18 = uVar8 - 2;
        uVar8 = uVar18;
        uVar12 = uVar20;
      }
      if (uVar17 == uVar27) goto LAB_140bb5f9b;
    }
    if ((short)uVar13 == 0) {
      do {
        auVar35 = *pauVar30;
        pauVar26 = pauVar26 + -0x2b0;
        pauVar30 = pauVar30 + 1;
        uVar13 = (ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar13 == 0);
    }
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *puVar1;
    uVar17 = SUB168(auVar35 * ZEXT816(0x4385df649fccf645),0);
    uVar15 = puVar19[7] * 0x4385df649fccf645 +
             SUB168(auVar35 * ZEXT816(0x4385df649fccf645),8) + *puVar1 * 0x2360ed051fc65da4;
    *puVar1 = uVar17;
    puVar19[7] = uVar15;
    fVar44 = _DAT_142e36f28;
    uVar17 = uVar15 ^ uVar17;
    bVar16 = (byte)(uVar15 >> 0x3a);
    afStack_114[0] =
         (float)(((uint)(uVar17 >> bVar16) | (uint)(uVar17 << 0x40 - bVar16)) >> 9 | 0x3f800000) +
         _DAT_142e36f34;
    if ((afStack_114[0] < 0.0) || (_DAT_142e36f28 < afStack_114[0])) {
      pauStack_1b8 = (undefined1 (*) [16])afStack_114;
      pauStack_1b0 = (undefined1 (*) [16])pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14335ec38,&pauStack_1b8,&UNK_1430616e8);
    }
    uVar20 = 0;
    for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar20 = uVar20 + 1;
    }
    uVar13 = pdb_1419a9060(pauVar26[(ulonglong)uVar20 * -0x2b + -0x2b] + 8);
    uVar15 = (ulonglong)uVar13;
    uVar17 = *(ulonglong *)(pauVar26[(ulonglong)uVar20 * -0x2b + -0x2a] + 8);
    if (uVar17 <= uVar15) {
LAB_140bb5f80:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar15,uVar17,&UNK_14335e4e0);
    }
    uVar27 = uVar15 + 1;
    if (uVar17 <= uVar27) {
LAB_140bb5f8c:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar27,uVar17,&UNK_14335e4f8);
    }
    uVar2 = *(undefined8 *)(*(longlong *)pauVar26[(ulonglong)uVar20 * -0x2b + -0x2a] + uVar15 * 8);
    uVar3 = *(undefined8 *)
             (*(longlong *)pauVar26[(ulonglong)uVar20 * -0x2b + -0x2a] + 8 + uVar15 * 8);
    pauStack_1b8 = (undefined1 (*) [16])
                   CONCAT44(extraout_XMM0_Da * (float)((ulonglong)uVar3 >> 0x20) +
                            (fVar44 - extraout_XMM0_Da) * (float)((ulonglong)uVar2 >> 0x20),
                            extraout_XMM0_Da * (float)uVar3 +
                            (fVar44 - extraout_XMM0_Da) * (float)uVar2);
    pdb_140df4520(&uStack_1d0,&pauStack_1b8);
    fVar45 = fStack_1c8;
    fVar44 = (float)uStack_1d0;
    fVar42 = (float)pdb_1414a85e0(lVar14);
    pfVar21 = (float *)(lVar14 + 0x78);
    if (fVar42 < *pfVar21 || fVar42 == *pfVar21) {
      return;
    }
    pauVar30 = *(undefined1 (**) [16])pauVar26[(ulonglong)uVar20 * -0x2b + -0x2b];
    fVar42 = uStack_1d0._4_4_;
  }
  pauStack_1b8 = pauVar30;
  if (plVar32[3] == 0) {
LAB_140bb55db:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143061688);
  }
  uVar17 = pdb_1400af0a0(plVar32 + 4,&pauStack_1b8);
  lVar14 = *plVar32;
  bVar16 = (byte)(uVar17 >> 0x39);
  auVar35 = ZEXT216(CONCAT11(bVar16,bVar16));
  auVar35 = pshuflw(auVar35,auVar35,0);
  lVar22 = 0;
  do {
    uVar17 = uVar17 & plVar32[1];
    auVar4 = *(undefined1 (*) [16])(lVar14 + uVar17);
    auVar41[0] = -(auVar4[0] == auVar35[0]);
    auVar41[1] = -(auVar4[1] == auVar35[1]);
    auVar41[2] = -(auVar4[2] == auVar35[2]);
    auVar41[3] = -(auVar4[3] == auVar35[3]);
    auVar41[4] = -(auVar4[4] == auVar35[4]);
    auVar41[5] = -(auVar4[5] == auVar35[5]);
    auVar41[6] = -(auVar4[6] == auVar35[6]);
    auVar41[7] = -(auVar4[7] == auVar35[7]);
    auVar41[8] = -(auVar4[8] == auVar35[0]);
    auVar41[9] = -(auVar4[9] == auVar35[1]);
    auVar41[10] = -(auVar4[10] == auVar35[2]);
    auVar41[0xb] = -(auVar4[0xb] == auVar35[3]);
    auVar41[0xc] = -(auVar4[0xc] == auVar35[4]);
    auVar41[0xd] = -(auVar4[0xd] == auVar35[5]);
    auVar41[0xe] = -(auVar4[0xe] == auVar35[6]);
    auVar41[0xf] = -(auVar4[0xf] == auVar35[7]);
    uVar28 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
    uVar13 = (uint)uVar28;
    while (uVar28 != 0) {
      uVar20 = 0;
      for (uVar12 = uVar13; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar20 = uVar20 + 1;
      }
      lVar29 = (uVar20 + uVar17 & plVar32[1]) * -0x2b0;
      if (pauVar30 == *(undefined1 (**) [16])(lVar14 + -0x2b0 + lVar29)) {
        lVar14 = lVar14 + lVar29;
        if ((*(ulonglong *)(lVar14 + -0x298) < 2) || (*(float *)(lVar14 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143061670);
        }
        lVar29 = lVar14 + -0x2a8;
        fVar34 = (float)pdb_1419aaa60(lVar29,lVar22,uVar13,&UNK_1430616a0);
        fVar33 = _DAT_142e36f28;
        fVar36 = 0.0;
        if (0.0 <= fVar34) {
          fVar36 = fVar34;
        }
        fVar34 = _DAT_142e36f28;
        if (fVar36 <= _DAT_142e36f28) {
          fVar34 = fVar36;
        }
        fStack_16c = *(float *)(lVar14 + -0x278);
        uVar12 = pdb_1419a9060(lVar29);
        uVar9 = _UNK_142e3782c;
        uVar6 = _UNK_142e37828;
        uVar20 = _UNK_142e37824;
        uVar13 = _DAT_142e37820;
        uVar17 = (ulonglong)uVar12;
        if (*(ulonglong *)(lVar14 + -0x298) <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar17 + 1,*(ulonglong *)(lVar14 + -0x298),&UNK_14335e510);
        }
        uVar2 = *(undefined8 *)(*(longlong *)(lVar14 + -0x2a0) + uVar17 * 8);
        uVar3 = *(undefined8 *)(*(longlong *)(lVar14 + -0x2a0) + 8 + uVar17 * 8);
        fVar36 = (float)uVar3 - (float)uVar2;
        fVar37 = (float)((ulonglong)uVar3 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
        fVar38 = fVar33 / SQRT(fVar37 * fVar37 + fVar36 * fVar36);
        uStack_1d0 = CONCAT44(fVar36 * fVar38,fVar37 * (float)((uint)fVar38 ^ _DAT_142e37820));
        pdb_140df4520(&pauStack_1b8,&uStack_1d0);
        fVar36 = pauStack_1b0._0_4_;
        fVar37 = SUB84(pauStack_1b8,0);
        fVar38 = (float)((ulonglong)pauStack_1b8 >> 0x20);
        uVar46 = 0;
        uVar47 = 0;
        uVar12 = 0;
        if (uVar24 < 3) {
          cVar10 = pdb_1419aa1e0(lVar29);
          if (cVar10 == '\0') goto LAB_140bb564f;
LAB_140bb5706:
          puVar19 = puStack_180;
          uVar12 = pdb_1419a9060(lVar29);
          uVar15 = (ulonglong)uVar12;
          uVar17 = *(ulonglong *)(lVar14 + -0x298);
          if (uVar17 <= uVar15) goto LAB_140bb5f80;
          uVar27 = uVar15 + 1;
          if (uVar17 <= uVar27) goto LAB_140bb5f8c;
          uVar2 = *(undefined8 *)(*(longlong *)(lVar14 + -0x2a0) + uVar15 * 8);
          uVar3 = *(undefined8 *)(*(longlong *)(lVar14 + -0x2a0) + 8 + uVar15 * 8);
          uStack_1d0 = CONCAT44(extraout_XMM0_Da_01 * (float)((ulonglong)uVar3 >> 0x20) +
                                (fVar33 - extraout_XMM0_Da_01) * (float)((ulonglong)uVar2 >> 0x20),
                                extraout_XMM0_Da_01 * (float)uVar3 +
                                (fVar33 - extraout_XMM0_Da_01) * (float)uVar2);
          pdb_140df4520(&pauStack_1b8,&uStack_1d0);
          auStack_158._4_4_ =
               (float)((ulonglong)pauStack_1b8 >> 0x20) + fVar38 * _UNK_1430613e4 * _UNK_142e36f64;
          auStack_158._0_4_ = SUB84(pauStack_1b8,0) + fVar37 * _DAT_1430613e0 * _DAT_142e36f60;
          fStack_150 = _UNK_1430613e8 * 0.0 * _UNK_142e36f68 + 0.0;
          fStack_14c = _UNK_1430613ec * 0.0 * _UNK_142e36f6c + 0.0;
          pauStack_1b0._0_4_ = fVar36 * _DAT_1430613f0 * _DAT_142e36f50 + pauStack_1b0._0_4_;
          fVar36 = (float)(uVar13 ^ (uint)fVar36);
          uVar12 = uVar20;
          fVar37 = (float)((uint)fVar37 ^ uVar13);
          fVar38 = (float)((uint)fVar38 ^ uVar20);
          uVar46 = uVar6;
          uVar47 = uVar9;
        }
        else {
          if (1 < *(uint *)(lVar14 + -0x50)) {
            *(undefined4 *)puStack_188[2] = *(undefined4 *)((longlong)puStack_188 + 0x1c);
            auVar4._8_8_ = 0;
            auVar4._0_8_ = puStack_180[6];
            uVar17 = SUB168(auVar4 * ZEXT816(0x4385df649fccf645),0);
            uVar15 = puStack_180[7] * 0x4385df649fccf645 +
                     SUB168(auVar4 * ZEXT816(0x4385df649fccf645),8) +
                     puStack_180[6] * 0x2360ed051fc65da4;
            puStack_180[6] = uVar17;
            puStack_180[7] = uVar15;
            uVar17 = uVar15 ^ uVar17;
            bVar16 = (byte)(uVar15 >> 0x3a);
            if (((uVar17 >> bVar16 | uVar17 << 0x40 - bVar16) & 1) != 0) goto LAB_140bb5706;
          }
LAB_140bb564f:
          puVar19 = puStack_180;
          uVar13 = pdb_1419a9060(lVar29);
          uVar15 = (ulonglong)uVar13;
          uVar17 = *(ulonglong *)(lVar14 + -0x298);
          if (uVar17 <= uVar15) goto LAB_140bb5f80;
          uVar27 = uVar15 + 1;
          if (uVar17 <= uVar27) goto LAB_140bb5f8c;
          uVar2 = *(undefined8 *)(*(longlong *)(lVar14 + -0x2a0) + uVar15 * 8);
          uVar3 = *(undefined8 *)(*(longlong *)(lVar14 + -0x2a0) + 8 + uVar15 * 8);
          uStack_1d0 = CONCAT44(extraout_XMM0_Da_00 * (float)((ulonglong)uVar3 >> 0x20) +
                                (fVar33 - extraout_XMM0_Da_00) * (float)((ulonglong)uVar2 >> 0x20),
                                extraout_XMM0_Da_00 * (float)uVar3 +
                                (fVar33 - extraout_XMM0_Da_00) * (float)uVar2);
          pdb_140df4520(&pauStack_1b8,&uStack_1d0);
          auStack_158._0_4_ = SUB84(pauStack_1b8,0) + _DAT_1430613c0 * fVar37 * _DAT_142e36f60;
          auStack_158._4_4_ =
               (float)((ulonglong)pauStack_1b8 >> 0x20) + _UNK_1430613c4 * fVar38 * _UNK_142e36f64;
          fStack_150 = _UNK_1430613c8 * 0.0 * _UNK_142e36f68 + 0.0;
          fStack_14c = _UNK_1430613cc * 0.0 * _UNK_142e36f6c + 0.0;
          pauStack_1b0._0_4_ = _DAT_1430613d0 * fVar36 * _DAT_142e36f50 + pauStack_1b0._0_4_;
        }
        auStack_148 = ZEXT416((uint)pauStack_1b0._0_4_);
        pauStack_1b8 = (undefined1 (*) [16])*puVar19;
        puStack_1a8 = *pauStack_1b8 + puVar19[1] + 1;
        auVar35 = *pauStack_1b8;
        uStack_1a0 = ~((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar35[0xf] >> 7) << 0xf);
        uStack_198 = puVar19[3];
        pauStack_1b0 = pauStack_1b8 + 1;
        pdb_1415f2910(&uStack_1d0,&pauStack_1b8);
        arg0 = (byte *)CONCAT44(uStack_1c4,fStack_1c8);
        if (lStack_1c0 == 0) goto LAB_140bb596e;
        if (2 < uVar24) {
          lVar14 = 0;
          goto LAB_140bb58ed;
        }
        lVar14 = 0;
        goto LAB_140bb586d;
      }
      uVar28 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar28);
    }
    auVar39[0] = -(auVar4[0] == -1);
    auVar39[1] = -(auVar4[1] == -1);
    auVar39[2] = -(auVar4[2] == -1);
    auVar39[3] = -(auVar4[3] == -1);
    auVar39[4] = -(auVar4[4] == -1);
    auVar39[5] = -(auVar4[5] == -1);
    auVar39[6] = -(auVar4[6] == -1);
    auVar39[7] = -(auVar4[7] == -1);
    auVar39[8] = -(auVar4[8] == -1);
    auVar39[9] = -(auVar4[9] == -1);
    auVar39[10] = -(auVar4[10] == -1);
    auVar39[0xb] = -(auVar4[0xb] == -1);
    auVar39[0xc] = -(auVar4[0xc] == -1);
    auVar39[0xd] = -(auVar4[0xd] == -1);
    auVar39[0xe] = -(auVar4[0xe] == -1);
    auVar39[0xf] = -(auVar4[0xf] == -1);
    if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') goto LAB_140bb55db;
    uVar17 = uVar17 + lVar22 + 0x10;
    lVar22 = lVar22 + 0x10;
  } while( true );
  while (lVar14 = lVar14 + 8, lStack_1c0 << 3 != lVar14) {
LAB_140bb586d:
    lVar22 = *(longlong *)(arg0 + lVar14);
    if ((0.0 <= *(float *)(lVar22 + 0x1c) * fVar36 +
                (float)((ulonglong)*(undefined8 *)(lVar22 + 0x14) >> 0x20) * fVar38 +
                (float)*(undefined8 *)(lVar22 + 0x14) * fVar37) &&
       (fVar33 = *(float *)(lVar22 + 0xc) - fVar42, fVar40 = *(float *)(lVar22 + 8) - fVar44,
       fVar43 = *(float *)(lVar22 + 0x10) - fVar45,
       fVar43 * fVar43 + fVar33 * fVar33 + fVar40 * fVar40 < _DAT_142e37ae4)) goto LAB_140bb594c;
  }
  goto LAB_140bb596e;
  while (lVar14 = lVar14 + 8, lStack_1c0 << 3 != lVar14) {
LAB_140bb58ed:
    lVar22 = *(longlong *)(arg0 + lVar14);
    if ((0.0 <= *(float *)(lVar22 + 0x1c) * fVar36 +
                (float)((ulonglong)*(undefined8 *)(lVar22 + 0x14) >> 0x20) * fVar38 +
                (float)*(undefined8 *)(lVar22 + 0x14) * fVar37) &&
       (fVar33 = *(float *)(lVar22 + 0xc) - fVar42, fVar40 = *(float *)(lVar22 + 8) - fVar44,
       fVar43 = *(float *)(lVar22 + 0x10) - fVar45,
       fVar43 * fVar43 + fVar33 * fVar33 + fVar40 * fVar40 < _DAT_1430613f4)) {
LAB_140bb594c:
      if (uStack_1d0 == 0) {
        return;
      }
      pub_1406abac0(arg0,uStack_1d0 << 3,8);
      return;
    }
  }
LAB_140bb596e:
  pauStack_130 = pauVar30;
  fStack_108 = fVar37;
  fStack_104 = fVar38;
  uStack_100 = uVar46;
  uStack_fc = uVar47;
  fStack_f8 = fVar36;
  uStack_f4 = uVar12;
  uStack_f0 = uVar46;
  uStack_ec = uVar47;
  if (uStack_1d0 != 0) {
    pub_1406abac0(arg0,uStack_1d0 << 3,8);
  }
  uVar6 = *(undefined4 *)((longlong)puStack_188 + 0x1c);
  puStack_160 = (undefined4 *)puStack_188[2];
  *puStack_160 = uVar6;
  puStack_128 = puVar19 + 6;
  lVar14 = pdb_141b1e510(puStack_128,3);
  fVar42 = _UNK_142e61234;
  fVar45 = _DAT_142e61230;
  fVar44 = _DAT_142e36f50;
  puStack_188 = (undefined8 *)(lVar14 + 2);
  if (puStack_188 != (undefined8 *)0x0) {
    lStack_168 = *param_6;
    uStack_174 = *(undefined4 *)(&UNK_1430613f8 + (ulonglong)(uVar24 < 3) * 4);
    uVar46 = auStack_148._0_4_;
    uVar9 = auStack_158._0_4_;
    lVar14 = 0;
    do {
      uVar15 = 0x9c41 - uVar23;
      uVar17 = 0x46;
      if (uVar15 < 0x46) {
        uVar17 = uVar15;
      }
      uVar23 = (uVar23 + uVar17) - 1;
      if (0x13 < uVar15 && uVar23 < 0x9c41) {
        *puStack_160 = uVar6;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *puStack_128;
        uVar17 = SUB168(auVar7 * ZEXT816(0x4385df649fccf645),0);
        uVar15 = puStack_128[1] * 0x4385df649fccf645 +
                 SUB168(auVar7 * ZEXT816(0x4385df649fccf645),8) + *puStack_128 * 0x2360ed051fc65da4;
        puStack_128[1] = uVar15;
        uVar27 = uVar15 ^ uVar17;
        bVar16 = (byte)(uVar15 >> 0x3a);
        *puStack_128 = uVar17;
        fVar33 = (((float)(((uint)(uVar27 >> bVar16) | (uint)(uVar27 << 0x40 - bVar16)) >> 9 |
                          0x3f800000) + _DAT_142e36f34) * _DAT_142e37838 + _DAT_143061400) /
                 fStack_16c + fVar34;
        if (NAN(fVar33)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14335ec63,0x1d,&UNK_1430616b8);
        }
        if (ABS(fVar33) == INFINITY) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_1430616b8);
        }
        if ((fVar33 <= _DAT_142e36f28) && (0.0 <= fVar33)) {
          iStack_170 = *(int *)(lStack_168 + 0x48);
          iVar5 = *(int *)(lStack_168 + 0x4c);
          fVar36 = (float)pub_142e32a40((*(float *)(lStack_168 + 0x50) * fVar44 +
                                        (float)auStack_158._0_4_) /
                                        (*(float *)(lStack_168 + 0x50) / (float)iStack_170));
          fVar33 = _DAT_142e382cc;
          iVar25 = (int)fVar36;
          if (_DAT_142e382cc < fVar36) {
            iVar25 = 0x7fffffff;
          }
          if (NAN(fVar36)) {
            iVar25 = 0;
          }
          fVar36 = (float)pub_142e32a40();
          iVar31 = (int)fVar36;
          if (fVar33 < fVar36) {
            iVar31 = 0x7fffffff;
          }
          if (NAN(fVar36)) {
            iVar31 = 0;
          }
          puVar19 = (undefined8 *)0x8;
          if ((((iVar25 < 0) || (iVar5 <= iVar31)) || (iStack_170 <= iVar25)) ||
             ((iVar31 < 0 ||
              (uVar17 = (ulonglong)(iVar31 * iStack_170 + iVar25),
              *(ulonglong *)(lStack_168 + 0x10) <= uVar17)))) {
            lVar22 = 0;
          }
          else {
            lVar22 = uVar17 * 0x30;
            puVar19 = *(undefined8 **)(*(longlong *)(lStack_168 + 8) + 8 + lVar22);
            lVar22 = *(longlong *)(*(longlong *)(lStack_168 + 8) + 0x10 + lVar22);
          }
          lVar22 = lVar22 * 0x38;
          do {
            if (lVar22 == 0) {
              *puStack_160 = uVar6;
              uStack_1d0 = (longlong)auStack_158;
              fStack_1c8 = (float)auStack_148._0_4_;
              pauStack_1b8 = (undefined1 (*) [16])CONCAT44(fStack_104,fStack_108);
              pauStack_1b0 = (undefined1 (*) [16])CONCAT44(pauStack_1b0._4_4_,fStack_f8);
              pdb_140bf3a80(puStack_180,&uStack_1d0,&pauStack_1b8);
              break;
            }
            fVar38 = (float)*puVar19;
            fVar40 = (float)((ulonglong)*puVar19 >> 0x20);
            fVar43 = (float)puVar19[1];
            fVar48 = (float)((ulonglong)puVar19[1] >> 0x20);
            fVar33 = fVar43 - fVar38;
            fVar36 = fVar48 - fVar40;
            fVar37 = _DAT_142e36f28 / SQRT(fVar36 * fVar36 + fVar33 * fVar33);
            uStack_120 = CONCAT44(fVar37 * fVar36,fVar37 * fVar33);
            pdb_140df4520(afStack_114,&uStack_120);
            fStack_1c8 = 1.0;
            uStack_1d0 = 0;
            pdb_140f335d0(&pauStack_1b8,afStack_114,&uStack_1d0);
            uStack_1d0 = CONCAT44((fVar48 + fVar40) * fVar42 + (float)uVar46,
                                  (fVar43 + fVar38) * fVar45 + (float)uVar9);
            pdb_140df4520(&pauStack_1b8,&uStack_1d0);
            cVar10 = pdb_140dee6f0();
            lVar22 = lVar22 + -0x38;
            puVar19 = puVar19 + 7;
          } while (cVar10 == '\0');
        }
      }
      lVar14 = lVar14 + 1;
    } while ((undefined8 *)lVar14 != puStack_188);
  }
  return;
}

