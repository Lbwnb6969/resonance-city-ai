// VA 0x140b93ea0, PDB extent 4091 bytes
// country_core::systems::wall::wall_state::spatial_hash_update::spatial_hash_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/spatial_hash_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::spatial_hash_update::spatial_hash_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/spatial_hash_update.rs
   Extent: 4091 */

void pdb_140b93ea0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,ulonglong *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  byte bVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined *puVar22;
  longlong *plVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong *plVar30;
  longlong lVar31;
  ulonglong uVar32;
  ushort uVar33;
  longlong lVar34;
  longlong *plVar35;
  longlong unaff_R13;
  undefined8 *puVar36;
  longlong *unaff_R15;
  byte bVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  longlong in_stack_fffffffffffffdd8;
  undefined4 uVar48;
  undefined8 in_stack_fffffffffffffde0;
  undefined4 uVar49;
  undefined8 in_stack_fffffffffffffde8;
  undefined4 uVar50;
  longlong lStack_1c0;
  undefined *puStack_1b8;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  ulonglong uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  longlong *plStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong lStack_150;
  ulonglong uStack_148;
  undefined4 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined1 uStack_105;
  undefined4 uStack_104;
  longlong *plStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') goto LAB_140b940c4;
  unaff_R15 = (longlong *)&UNK_14305ecf5;
  puVar36 = (undefined8 *)0x51;
  uVar29 = 0x51;
  lVar20 = pdb_140b95f50(&UNK_14305ecf5);
  if (lVar20 == 1) {
    if (0x51 < uVar29) {
LAB_140b94b4f:
      pdb_142dc8070(&UNK_14305ecf5,0x51,0);
LAB_140b94b6f:
      pdb_142dc8070(&UNK_14305ecf5,0x51);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    unaff_R15 = (longlong *)&UNK_14305ecf5;
    uVar21 = pdb_140b95f50(&UNK_14305ecf5);
    if ((uVar21 & 1) != 0) {
      if (0x51 < uVar29 + 2) goto LAB_140b94b6f;
      puVar36 = (undefined8 *)(0x4f - uVar29);
      unaff_R15 = (longlong *)(&UNK_14305ecf7 + uVar29);
    }
  }
  puVar22 = &UNK_14305e825;
  plVar35 = (longlong *)&UNK_14305e7df;
  do {
    pbVar1 = puVar22 + -1;
    uVar26 = (uint)(char)*pbVar1;
    if ((int)uVar26 < 0) {
      bVar37 = puVar22[-2];
      if ((char)bVar37 < -0x40) {
        bVar11 = puVar22[-3];
        if ((char)bVar11 < -0x40) {
          pbVar2 = puVar22 + -4;
          puVar22 = puVar22 + -4;
          uVar26 = bVar11 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar22 = puVar22 + -3;
          uVar26 = bVar11 & 0xf;
        }
        uVar26 = bVar37 & 0x3f | uVar26 << 6;
      }
      else {
        puVar22 = puVar22 + -2;
        uVar26 = bVar37 & 0x1f;
      }
      uVar26 = (uint)(*pbVar1 & 0x3f) | uVar26 << 6;
      if (uVar26 != 0x5c) goto LAB_140b94029;
LAB_140b9403f:
      if ((undefined *)0x46 < puVar22 + -0x14305e7de) {
        pdb_142dc8070(&UNK_14305e7df,0x46,puVar22 + -0x14305e7de,0x46,&UNK_14305ee38);
        goto LAB_140b94b4f;
      }
      unaff_R13 = 0x45 - (longlong)(puVar22 + -0x14305e7df);
      plVar35 = (longlong *)(puVar22 + 1);
      goto LAB_140b94063;
    }
    puVar22 = puVar22 + -1;
    if (uVar26 == 0x5c) goto LAB_140b9403f;
LAB_140b94029:
    if (uVar26 == 0x2f) goto LAB_140b9403f;
  } while (puVar22 != &UNK_14305e7df);
  unaff_R13 = 0x46;
LAB_140b94063:
  plVar23 = (longlong *)pdb_140e97000();
  if ((char)plVar23[0xd] != '\x01') goto LAB_140b94a11;
LAB_140b94072:
  if (*plVar23 == 0) {
    *plVar23 = -1;
    in_stack_fffffffffffffde8 = 0;
    in_stack_fffffffffffffde0 = 0;
    in_stack_fffffffffffffdd8 = unaff_R13;
    plStack_100 = plVar23;
    uStack_138 = pdb_140e94f10(plVar23 + 1,unaff_R15,puVar36,plVar35,unaff_R13,1,0);
    *plStack_100 = *plStack_100 + 1;
LAB_140b940c4:
    puVar12 = (ulonglong *)*param_1;
    lVar20 = param_1[1];
    uVar29 = *puVar12;
    uVar25 = 0;
    uVar21 = uVar29 - *(ulonglong *)(lVar20 + 0x18);
    if (uVar29 < *(ulonglong *)(lVar20 + 0x18)) {
      uVar21 = uVar25;
    }
    uVar32 = uVar29 - *(ulonglong *)(lVar20 + 0x38);
    if (uVar29 < *(ulonglong *)(lVar20 + 0x38)) {
      uVar32 = uVar25;
    }
    lVar24 = uVar21 * 0x10 + *(longlong *)(lVar20 + 8);
    uVar29 = *(ulonglong *)(lVar20 + 0x10) - uVar21;
    if (*(ulonglong *)(lVar20 + 0x10) < uVar21) {
      lVar24 = 8;
      uVar29 = uVar25;
    }
    lVar27 = uVar32 * 0x10 + *(longlong *)(lVar20 + 0x28);
    uVar21 = *(ulonglong *)(lVar20 + 0x30) - uVar32;
    if (*(ulonglong *)(lVar20 + 0x30) < uVar32) {
      lVar27 = 8;
      uVar21 = uVar25;
    }
    *puVar12 = (*(longlong *)(lVar20 + 0x40) - uVar21) - uVar29;
    fVar19 = _DAT_142e36f28;
    fVar18 = _DAT_142e36f24;
    plStack_160 = (longlong *)*param_3;
    uStack_104 = *(undefined4 *)((longlong)param_4 + 0x1c);
    uStack_148 = *param_4;
    puStack_140 = (undefined4 *)param_4[2];
    plVar23 = plStack_160 + 4;
    plVar35 = &lStack_1c0;
    lVar20 = lVar24;
    lVar34 = lVar27;
LAB_140b9423e:
    do {
      if ((lVar20 == 0) || (lVar20 == uVar29 * 0x10 + lVar24)) {
        if ((lVar34 == 0) || (lVar34 == uVar21 * 0x10 + lVar27)) goto LAB_140b94867;
        lStack_118 = lVar34 + 0x10;
        lStack_110 = 0;
        lVar31 = lVar34;
      }
      else {
        lStack_110 = lVar20 + 0x10;
        lVar31 = lVar20;
        lStack_118 = lVar34;
      }
      *puVar12 = *puVar12 + 1;
      lStack_1c0 = *(longlong *)(lVar31 + 8);
      lStack_150 = lStack_1c0;
      if (plStack_160[3] != 0) {
        uVar25 = pdb_1400af0a0(plVar23,plVar35);
        unaff_R13 = *plStack_160;
        bVar37 = (byte)(uVar25 >> 0x39);
        auVar39 = ZEXT216(CONCAT11(bVar37,bVar37));
        auVar39 = pshuflw(auVar39,auVar39,0);
        lVar20 = 0;
        while( true ) {
          uVar25 = uVar25 & plStack_160[1];
          auVar10 = *(undefined1 (*) [16])(unaff_R13 + uVar25);
          auVar41[0] = -(auVar10[0] == auVar39[0]);
          auVar41[1] = -(auVar10[1] == auVar39[1]);
          auVar41[2] = -(auVar10[2] == auVar39[2]);
          auVar41[3] = -(auVar10[3] == auVar39[3]);
          auVar41[4] = -(auVar10[4] == auVar39[4]);
          auVar41[5] = -(auVar10[5] == auVar39[5]);
          auVar41[6] = -(auVar10[6] == auVar39[6]);
          auVar41[7] = -(auVar10[7] == auVar39[7]);
          auVar41[8] = -(auVar10[8] == auVar39[0]);
          auVar41[9] = -(auVar10[9] == auVar39[1]);
          auVar41[10] = -(auVar10[10] == auVar39[2]);
          auVar41[0xb] = -(auVar10[0xb] == auVar39[3]);
          auVar41[0xc] = -(auVar10[0xc] == auVar39[4]);
          auVar41[0xd] = -(auVar10[0xd] == auVar39[5]);
          auVar41[0xe] = -(auVar10[0xe] == auVar39[6]);
          auVar41[0xf] = -(auVar10[0xf] == auVar39[7]);
          uVar33 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar41[0xf] >> 7) << 0xf;
          uVar26 = (uint)uVar33;
          while (uVar33 != 0) {
            uVar15 = 0;
            for (uVar16 = uVar26; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            lVar34 = (uVar15 + uVar25 & plStack_160[1]) * -0x2b0;
            if (lStack_150 == *(longlong *)(unaff_R13 + -0x2b0 + lVar34)) {
              unaff_R13 = unaff_R13 + lVar34;
              if ((*(ulonglong *)(unaff_R13 + -0x298) < 2) ||
                 (*(float *)(unaff_R13 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14305e828);
              }
              *puStack_140 = uStack_104;
              pdb_140b56c80();
              lVar31 = *(longlong *)(unaff_R13 + -0x298);
              lVar20 = lStack_110;
              uVar25 = 0;
              lVar34 = lStack_118;
              if (lVar31 == 1) goto LAB_140b9423e;
              goto LAB_140b943e0;
            }
            uVar33 = (ushort)(uVar26 - 1) & (ushort)uVar26;
            uVar26 = CONCAT22((short)(uVar26 - 1 >> 0x10),uVar33);
          }
          auVar40[0] = -(auVar10[0] == -1);
          auVar40[1] = -(auVar10[1] == -1);
          auVar40[2] = -(auVar10[2] == -1);
          auVar40[3] = -(auVar10[3] == -1);
          auVar40[4] = -(auVar10[4] == -1);
          auVar40[5] = -(auVar10[5] == -1);
          auVar40[6] = -(auVar10[6] == -1);
          auVar40[7] = -(auVar10[7] == -1);
          auVar40[8] = -(auVar10[8] == -1);
          auVar40[9] = -(auVar10[9] == -1);
          auVar40[10] = -(auVar10[10] == -1);
          auVar40[0xb] = -(auVar10[0xb] == -1);
          auVar40[0xc] = -(auVar10[0xc] == -1);
          auVar40[0xd] = -(auVar10[0xd] == -1);
          auVar40[0xe] = -(auVar10[0xe] == -1);
          auVar40[0xf] = -(auVar10[0xf] == -1);
          if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x2f,0) & 1) != 0) || (SUB161(auVar40 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
          uVar25 = uVar25 + lVar20 + 0x10;
          lVar20 = lVar20 + 0x10;
        }
      }
      lVar20 = lStack_110;
      lVar34 = lStack_118;
      if (1 < *_DAT_143ca8e90) {
        uStack_130 = lVar31 + 8;
        fStack_128 = 6.009636;
        fStack_124 = 1.4013e-45;
        lStack_1c0 = 0;
        puStack_1b8 = &UNK_14305e91e;
        uStack_1b0 = 0x3c;
        uStack_1a8 = 0;
        puStack_1a0 = &UNK_14305e798;
        uStack_198 = 0x46;
        uStack_190 = 2;
        puStack_188 = &UNK_14305e91e;
        uStack_180 = 0x3c;
        uStack_178 = 0x3300000001;
        puStack_170 = &UNK_14305e8d0;
        puStack_168 = &uStack_130;
        pdb_140f332f0(&uStack_105);
        lVar20 = lStack_110;
        lVar34 = lStack_118;
      }
    } while( true );
  }
  goto LAB_140b94a05;
LAB_140b94867:
  param_4 = (ulonglong *)*param_2;
  lVar20 = param_2[1];
  uVar29 = *param_4;
  uVar25 = 0;
  uVar21 = uVar29 - *(ulonglong *)(lVar20 + 0x18);
  if (uVar29 < *(ulonglong *)(lVar20 + 0x18)) {
    uVar21 = uVar25;
  }
  uVar32 = uVar29 - *(ulonglong *)(lVar20 + 0x38);
  if (uVar29 < *(ulonglong *)(lVar20 + 0x38)) {
    uVar32 = uVar25;
  }
  plVar23 = (longlong *)(uVar21 * 0x10 + *(longlong *)(lVar20 + 8));
  uVar29 = *(ulonglong *)(lVar20 + 0x10) - uVar21;
  if (*(ulonglong *)(lVar20 + 0x10) < uVar21) {
    plVar23 = (longlong *)0x8;
    uVar29 = uVar25;
  }
  puVar36 = (undefined8 *)(uVar32 * 0x10 + *(longlong *)(lVar20 + 0x28));
  uVar21 = *(ulonglong *)(lVar20 + 0x30) - uVar32;
  if (*(ulonglong *)(lVar20 + 0x30) < uVar32) {
    puVar36 = (undefined8 *)0x8;
    uVar21 = uVar25;
  }
  *param_4 = (*(longlong *)(lVar20 + 0x40) - uVar21) - uVar29;
  param_3 = plVar23 + uVar29 * 2;
  param_1 = puVar36 + uVar21 * 2;
  do {
    if ((plVar23 == (longlong *)0x0) || (plVar23 == param_3)) {
      if ((puVar36 == (undefined8 *)0x0) || (puVar36 == param_1)) goto LAB_140b9493a;
      puVar36 = puVar36 + 2;
      plVar23 = (longlong *)0x0;
    }
    else {
      plVar23 = plVar23 + 2;
    }
    *param_4 = *param_4 + 1;
    *puStack_140 = uStack_104;
    pdb_140b56c80(uStack_148);
    unaff_R15 = plVar23;
  } while( true );
  while( true ) {
    uVar3 = uVar25 + 1;
    if (uVar32 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar3,uVar32,&UNK_14305e870);
    }
    if (*(ulonglong *)(unaff_R13 + -0x280) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305e888);
    }
    pfVar6 = (float *)(*(longlong *)(unaff_R13 + -0x2a0) + uVar25 * 8);
    fVar7 = *pfVar6;
    fVar8 = pfVar6[1];
    lVar34 = *(longlong *)pfVar6;
    uStack_158 = *(undefined4 *)(*(longlong *)(unaff_R13 + -0x288) + uVar25 * 4);
    puVar22 = *(undefined **)(*(longlong *)(unaff_R13 + -0x2a0) + uVar3 * 8);
    fVar46 = (float)((ulonglong)puVar22 >> 0x20);
    uStack_154 = *(undefined4 *)(*(longlong *)(unaff_R13 + -0x288) + uVar3 * 4);
    lVar20 = *(longlong *)(unaff_R13 + -0x230);
    plStack_100 = *(longlong **)(unaff_R13 + -0x228);
    lStack_1c0 = *(longlong *)(unaff_R13 + -0x268);
    puStack_1b8 = (undefined *)(lStack_1c0 + *(longlong *)(unaff_R13 + -0x260) * 0xc);
    uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
    uStack_198 = 0;
    pdb_1419a5690(&uStack_130,plVar35);
    if ((int)uStack_130 == 1) {
      fVar47 = 0.0;
      plVar30 = (longlong *)0x0;
      fVar45 = _DAT_142e36f3c;
      lVar17 = uStack_130;
      do {
        uStack_130._4_4_ = (float)((ulonglong)lVar17 >> 0x20);
        fVar42 = fStack_124 - uStack_130._4_4_;
        fVar43 = fStack_120 - fStack_128;
        fVar38 = fVar43 * fVar43 + fVar42 * fVar42;
        if (fVar38 <= fVar18) {
          fVar38 = fVar18;
        }
        fVar38 = ((fVar8 - fStack_128) * fVar43 + (fVar7 - uStack_130._4_4_) * fVar42) / fVar38;
        fVar42 = 0.0;
        if (0.0 <= fVar38) {
          fVar42 = fVar38;
        }
        fVar38 = fVar19;
        if (fVar42 <= fVar19) {
          fVar38 = fVar42;
        }
        fVar42 = fVar7 - (fVar38 * fStack_124 + (fVar19 - fVar38) * uStack_130._4_4_);
        fVar43 = fVar8 - (fVar38 * fStack_120 + (fVar19 - fVar38) * fStack_128);
        fVar42 = SQRT(fVar43 * fVar43 + fVar42 * fVar42);
        uStack_130 = lVar17;
        if (fVar42 < fVar45) {
          if ((fVar38 < 0.0) || (fVar19 < fVar38)) {
            uStack_198 = uStack_198 + 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14335e8f8,0x2a,&UNK_14335e928);
          }
          plVar30 = (longlong *)(uStack_198 & 0xffffffff);
          fVar45 = fVar42;
          fVar47 = fVar38;
        }
        uStack_198 = uStack_198 + 1;
        pdb_1419a5690(&uStack_130,plVar35);
        lVar17 = uStack_130;
      } while ((char)uStack_130 != '\0');
    }
    else {
      fVar47 = 0.0;
      plVar30 = (longlong *)0x0;
    }
    if (plStack_100 <= plVar30) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar30,plStack_100,&UNK_14305e8a0);
    }
    plVar4 = (longlong *)((longlong)plVar30 + 1);
    if (plStack_100 <= plVar4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar4,plStack_100,&UNK_14305e8a0);
    }
    fVar7 = *(float *)(lVar20 + (longlong)plVar30 * 4);
    fVar8 = *(float *)(lVar20 + 4 + (longlong)plVar30 * 4);
    lStack_1c0 = *(longlong *)(unaff_R13 + -0x268);
    puStack_1b8 = (undefined *)(lStack_1c0 + *(longlong *)(unaff_R13 + -0x260) * 0xc);
    uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
    uStack_198 = 0;
    pdb_1419a5690(&uStack_130,plVar35);
    uVar48 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
    uVar49 = (undefined4)((ulonglong)in_stack_fffffffffffffde0 >> 0x20);
    uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
    if ((int)uStack_130 == 1) {
      fVar45 = 0.0;
      plVar28 = (longlong *)0x0;
      fVar38 = _DAT_142e36f3c;
      lVar17 = uStack_130;
      do {
        uStack_130._4_4_ = (float)((ulonglong)lVar17 >> 0x20);
        fVar43 = fStack_124 - uStack_130._4_4_;
        fVar44 = fStack_120 - fStack_128;
        fVar42 = fVar44 * fVar44 + fVar43 * fVar43;
        if (fVar42 <= fVar18) {
          fVar42 = fVar18;
        }
        fVar42 = ((fVar46 - fStack_128) * fVar44 + (SUB84(puVar22,0) - uStack_130._4_4_) * fVar43) /
                 fVar42;
        fVar43 = 0.0;
        if (0.0 <= fVar42) {
          fVar43 = fVar42;
        }
        fVar42 = fVar19;
        if (fVar43 <= fVar19) {
          fVar42 = fVar43;
        }
        fVar43 = SUB84(puVar22,0) - (fVar42 * fStack_124 + (fVar19 - fVar42) * uStack_130._4_4_);
        fVar44 = fVar46 - (fVar42 * fStack_120 + (fVar19 - fVar42) * fStack_128);
        fVar43 = SQRT(fVar44 * fVar44 + fVar43 * fVar43);
        uStack_130 = lVar17;
        if (fVar43 < fVar38) {
          if ((fVar42 < 0.0) || (fVar19 < fVar42)) {
            uStack_198 = uStack_198 + 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14335e8f8,0x2a,&UNK_14335e928);
          }
          plVar28 = (longlong *)(uStack_198 & 0xffffffff);
          fVar38 = fVar43;
          fVar45 = fVar42;
        }
        uStack_198 = uStack_198 + 1;
        pdb_1419a5690(&uStack_130,plVar35);
        uVar48 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
        uVar49 = (undefined4)((ulonglong)in_stack_fffffffffffffde0 >> 0x20);
        uVar50 = (undefined4)((ulonglong)in_stack_fffffffffffffde8 >> 0x20);
        lVar17 = uStack_130;
      } while ((char)uStack_130 != '\0');
      unaff_R15 = plVar28;
      if (plStack_100 <= plVar28) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(plVar28,plStack_100,&UNK_14305e8b8);
      }
    }
    else {
      fVar45 = 0.0;
      plVar28 = (longlong *)0x0;
    }
    plVar5 = (longlong *)((longlong)plVar28 + 1);
    if (plStack_100 <= plVar5) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar5,plStack_100,&UNK_14305e8b8);
    }
    plVar13 = *(longlong **)(unaff_R13 + -0x260);
    if (plVar13 <= plVar30) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar30,plVar13,&UNK_14335e4e0);
    }
    if (plVar13 <= plVar4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar4,plVar13,&UNK_14335e4f8);
    }
    if (plVar13 <= plVar28) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar28,plVar13,&UNK_14335e4e0);
    }
    if (plVar13 <= plVar5) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(plVar5,plVar13,&UNK_14335e4f8);
    }
    fVar46 = *(float *)(lVar20 + (longlong)plVar28 * 4);
    fVar38 = *(float *)(lVar20 + 4 + (longlong)plVar28 * 4);
    lVar20 = *(longlong *)(unaff_R13 + -0x268);
    fVar42 = *(float *)(lVar20 + 4 + (longlong)plVar30 * 0xc);
    fVar43 = *(float *)(lVar20 + 4 + (longlong)plVar4 * 0xc);
    fVar44 = *(float *)(lVar20 + 4 + (longlong)plVar28 * 0xc);
    fVar9 = *(float *)(lVar20 + 4 + (longlong)plVar5 * 0xc);
    *puStack_140 = uStack_104;
    in_stack_fffffffffffffde8 = CONCAT44(uVar50,fVar47 * fVar43 + (fVar19 - fVar47) * fVar42);
    in_stack_fffffffffffffde0 = CONCAT44(uVar49,(fVar38 - fVar46) * fVar45 + fVar46);
    in_stack_fffffffffffffdd8 = CONCAT44(uVar48,(fVar8 - fVar7) * fVar47 + fVar7);
    lStack_1c0 = lVar34;
    puStack_1b8 = puVar22;
    pdb_140b563e0(uStack_148,uStack_158,uStack_154,plVar35,in_stack_fffffffffffffdd8,
                  in_stack_fffffffffffffde0,in_stack_fffffffffffffde8,
                  fVar45 * fVar9 + (fVar19 - fVar45) * fVar44,lStack_150,0x3e8f5c29);
    lVar20 = lStack_110;
    uVar25 = uVar3;
    lVar34 = lStack_118;
    if (lVar31 - 1U <= uVar3) break;
LAB_140b943e0:
    uVar32 = *(ulonglong *)(unaff_R13 + -0x298);
    if (uVar32 <= uVar25) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar25,uVar32,&UNK_14305e840);
    }
    if (*(ulonglong *)(unaff_R13 + -0x280) <= uVar25) goto LAB_140b94a31;
  }
  goto LAB_140b9423e;
LAB_140b9493a:
  if (cStack_f1 != '\0') {
    plVar23 = (longlong *)pdb_140e97000();
    if ((char)plVar23[0xd] != '\x01') {
      plVar23 = (longlong *)pdb_142d8ec20(plVar23,0);
      if (plVar23 == (longlong *)0x0) goto LAB_140b94a24;
    }
    if (*plVar23 != 0) {
LAB_140b94a05:
      plVar23 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b94a11:
      plVar23 = (longlong *)pdb_142d8ec20(plVar23,0);
      if (plVar23 == (longlong *)0x0) {
LAB_140b94a24:
        pdb_142dc7890(&UNK_143326860);
LAB_140b94a31:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14305e858);
      }
      goto LAB_140b94072;
    }
    *plVar23 = -1;
    plStack_100 = plVar23;
    pdb_140e95370(plVar23 + 1);
    *plStack_100 = *plStack_100 + 1;
  }
  return;
}

