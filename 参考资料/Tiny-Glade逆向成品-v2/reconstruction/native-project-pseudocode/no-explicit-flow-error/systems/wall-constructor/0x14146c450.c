// VA 0x14146c450, PDB extent 4273 bytes
// system_wall_constructor::utils::resolve_hole_overlap::resolve_hole_overlap
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/resolve_hole_overlap.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::utils::resolve_hole_overlap::resolve_hole_overlap
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/resolve_hole_overlap.rs
   Extent: 4273 */

void pdb_14146c450(float *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  byte bVar15;
  char cVar16;
  byte bVar17;
  byte bVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined *puVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  float fVar30;
  ulonglong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float *pfStack_198;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float fStack_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  pfStack_198 = param_1;
  fVar32 = (float)pdb_140deec10();
  if (((0.0 < fVar32) && (fVar32 = (float)pdb_140deec50(pfStack_198), 0.0 < fVar32)) &&
     (param_2[3] != 0)) {
    fStack_18c = pfStack_198[2];
    fVar32 = pfStack_198[3];
    fStack_190 = *pfStack_198;
    fVar4 = pfStack_198[1];
    fVar38 = (fVar32 - fVar4) * _DAT_142e36f50;
    fVar33 = (fStack_18c - fStack_190) * _DAT_142e36f50;
    uVar31 = 0;
    fVar40 = _DAT_142e36f50;
    do {
      uVar21 = param_2[1];
      uVar20 = 0;
      if (*param_2 <= param_2[2] + uVar31) {
        uVar20 = *param_2;
      }
      lVar19 = (param_2[2] + uVar31) - uVar20;
      puVar1 = (undefined8 *)(uVar21 + lVar19 * 0x28);
      uStack_188 = *puVar1;
      uStack_180 = puVar1[1];
      pfVar3 = (float *)(uVar21 + 0x10 + lVar19 * 0x28);
      fVar44 = *pfVar3;
      fStack_174 = pfVar3[1];
      fStack_170 = pfVar3[2];
      fStack_16c = pfVar3[3];
      uVar36 = *(undefined8 *)(uVar21 + 0x20 + lVar19 * 0x28);
      uStack_140 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      uStack_168._4_1_ = (char)((ulonglong)uVar36 >> 0x20);
      cVar13 = uStack_168._4_1_;
      uStack_168._5_1_ = (char)((ulonglong)uVar36 >> 0x28);
      cVar14 = uStack_168._5_1_;
      fStack_178 = fVar44;
      uStack_168 = uVar36;
      fStack_158 = fStack_170;
      fStack_154 = fStack_16c;
      fStack_138 = fVar44;
      fStack_134 = fStack_174;
      fStack_130 = fStack_170;
      fStack_12c = fStack_16c;
      fStack_148 = fVar44;
      fStack_144 = fStack_174;
      pdb_140deec20(&uStack_188);
      pfVar3 = pfStack_198;
      fVar39 = (float)uStack_180;
      fVar41 = uStack_180._4_4_;
      fVar30 = (float)uStack_188;
      fVar26 = uStack_188._4_4_;
      fVar42 = uStack_180._4_4_ - uStack_188._4_4_;
      fVar35 = fVar44;
      fVar34 = (float)pdb_140deec20(pfStack_198);
      fVar43 = fVar44 - fVar42 * fVar40;
      fVar47 = fVar42 * fVar40 + fVar44;
      bVar15 = pdb_140deec60(pfVar3);
      cVar16 = pdb_140deec60(pfVar3);
      uVar24 = bVar15 + 1;
      if (cVar16 == '\0') {
        uVar24 = (uint)bVar15;
      }
      bVar17 = pdb_140deec60(pfVar3);
      uVar25 = (uint)bVar17;
      bVar18 = pdb_140deec60(pfVar3);
      fVar40 = _DAT_142e36f50;
      uVar24 = uVar24 + uVar25 + (uint)bVar18;
      if (4 < uVar24) {
LAB_14146d488:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14330b218,0x28,&UNK_14330b270);
      }
      puVar23 = &UNK_14330b288 + *(int *)(&UNK_14330b288 + (ulonglong)uVar24 * 4);
      switch(uVar24) {
      case 0:
        if (cVar14 == '\0') {
          if ((fStack_18c < fVar39) && (fVar30 < fStack_190)) {
            pdb_140deec10(&uStack_188);
            pdb_140deec20(&uStack_188);
            pdb_140deec50(&uStack_188);
            pdb_140deead0(&uStack_128);
            pdb_140deec20(&uStack_188);
            pdb_140deec50(&uStack_188);
            pdb_140deead0(&uStack_118);
            if (param_2[3] <= uVar31) goto code_r0x00014146d4e8;
            iVar12 = (uint)uStack_168;
            uVar36 = CONCAT44(fStack_154 * _UNK_142e36f64,fStack_158 * _DAT_142e36f60);
            uVar21 = param_2[1];
            uVar20 = 0;
            if (*param_2 <= param_2[2] + uVar31) {
              uVar20 = *param_2;
            }
            lVar19 = (param_2[2] + uVar31) - uVar20;
            puVar1 = (undefined8 *)(uVar21 + lVar19 * 0x28);
            *puVar1 = uStack_128;
            puVar1[1] = uStack_120;
            puVar1 = (undefined8 *)(uVar21 + 0x10 + lVar19 * 0x28);
            *puVar1 = 0;
            puVar1[1] = uVar36;
            *(uint *)(uVar21 + 0x20 + lVar19 * 0x28) = (uint)uStack_168;
            *(char *)(uVar21 + 0x24 + lVar19 * 0x28) = cVar13;
            *(undefined1 *)(uVar21 + 0x25 + lVar19 * 0x28) = 1;
            uVar21 = *param_2;
            uVar20 = param_2[3];
            if (uVar20 == uVar21) {
              pdb_140848dc0(param_2);
              uVar21 = *param_2;
              uVar20 = param_2[3];
            }
            param_2[3] = uVar20 + 1;
            uVar27 = 0;
            if (uVar21 <= uVar20 + param_2[2]) {
              uVar27 = uVar21;
            }
            lVar19 = (uVar20 + param_2[2]) - uVar27;
            uVar21 = param_2[1];
            puVar1 = (undefined8 *)(uVar21 + lVar19 * 0x28);
            *puVar1 = uStack_118;
            puVar1[1] = uStack_110;
            puVar1 = (undefined8 *)(uVar21 + 0x10 + lVar19 * 0x28);
            *puVar1 = 0;
            puVar1[1] = uVar36;
            *(int *)(uVar21 + 0x20 + lVar19 * 0x28) = iVar12 + 100;
            *(char *)(uVar21 + 0x24 + lVar19 * 0x28) = cVar13;
            *(undefined1 *)(uVar21 + 0x25 + lVar19 * 0x28) = 1;
            break;
          }
          if (((fVar32 < fVar41) && (fVar26 < fVar4)) && (cVar13 == '\0'))
          goto code_r0x00014146cd22;
        }
        else if (((cVar13 == '\0') && (fVar32 < fVar41)) && (fVar26 < fVar4)) {
code_r0x00014146cd22:
          pdb_140deec50(&uStack_188);
          pdb_140deec20(&uStack_188);
          pdb_140deec10(&uStack_188);
          pdb_140deead0(&uStack_108);
          pdb_140deec20(&uStack_188);
          pdb_140deec10(&uStack_188);
          pdb_140deead0(&uStack_f8);
          if (uVar31 < param_2[3]) {
            iVar12 = (uint)uStack_168;
            uVar36 = CONCAT44(fStack_154 * _UNK_142e36f64,fStack_158 * _DAT_142e36f60);
            uVar21 = param_2[1];
            uVar20 = 0;
            if (*param_2 <= param_2[2] + uVar31) {
              uVar20 = *param_2;
            }
            lVar19 = (param_2[2] + uVar31) - uVar20;
            puVar1 = (undefined8 *)(uVar21 + lVar19 * 0x28);
            *puVar1 = uStack_108;
            puVar1[1] = uStack_100;
            puVar1 = (undefined8 *)(uVar21 + 0x10 + lVar19 * 0x28);
            *puVar1 = 0;
            puVar1[1] = uVar36;
            *(uint *)(uVar21 + 0x20 + lVar19 * 0x28) = (uint)uStack_168;
            *(undefined1 *)(uVar21 + 0x24 + lVar19 * 0x28) = 1;
            *(char *)(uVar21 + 0x25 + lVar19 * 0x28) = cVar14;
            uVar21 = *param_2;
            uVar20 = param_2[3];
            if (uVar20 == uVar21) {
              pdb_140848dc0(param_2);
              uVar21 = *param_2;
              uVar20 = param_2[3];
            }
            param_2[3] = uVar20 + 1;
            uVar27 = 0;
            if (uVar21 <= uVar20 + param_2[2]) {
              uVar27 = uVar21;
            }
            lVar19 = (uVar20 + param_2[2]) - uVar27;
            uVar21 = param_2[1];
            puVar1 = (undefined8 *)(uVar21 + lVar19 * 0x28);
            *puVar1 = uStack_f8;
            puVar1[1] = uStack_f0;
            puVar1 = (undefined8 *)(uVar21 + 0x10 + lVar19 * 0x28);
            *puVar1 = 0;
            puVar1[1] = uVar36;
            *(int *)(uVar21 + 0x20 + lVar19 * 0x28) = iVar12 + 100;
            *(undefined1 *)(uVar21 + 0x24 + lVar19 * 0x28) = 1;
            *(char *)(uVar21 + 0x25 + lVar19 * 0x28) = cVar14;
            break;
          }
code_r0x00014146d4d0:
          pdb_142dc8110(&UNK_14330b160,0x14,&UNK_14330b1b8);
code_r0x00014146d4e8:
          pdb_142dc8110(&UNK_14330b160,0x14,&UNK_14330b1d0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar31 = uVar31 + 1;
        break;
      case 1:
        if (bVar15 == 0) {
          if (cVar16 == '\0') {
            if (bVar17 == 0) {
              if (bVar18 == 0) {
code_r0x00014146d458:
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14330b218,0x28,&UNK_14330b240);
              }
              fVar44 = (float)pdb_140de8220(bVar18,puVar23,fVar34 - fVar33);
              fVar40 = 0.0;
              if (0.0 <= fVar44) {
                fVar40 = fVar44;
              }
              fVar44 = _DAT_142e36f28;
              if (fVar40 <= _DAT_142e36f28) {
                fVar44 = fVar40;
              }
              fVar40 = _DAT_14300c770 - fVar44;
              auVar46._0_4_ = fVar40 * fStack_138;
              auVar46._4_4_ = fVar40 * fStack_134;
              auVar46._8_4_ = fVar40 * fStack_130;
              auVar46._12_4_ = fVar40 * fStack_12c;
              auVar45._4_4_ = fVar44 * fStack_134;
              auVar45._0_4_ = fVar44 * fStack_138;
              auVar45._8_8_ = 0;
              bVar11 = true;
              bVar10 = false;
            }
            else {
              if (bVar18 != 0) goto code_r0x00014146d458;
              fVar44 = (float)pdb_140de8220(0,puVar23,fVar34 + fVar33);
              fVar40 = 0.0;
              if (0.0 <= fVar44) {
                fVar40 = fVar44;
              }
              fVar44 = _DAT_142e36f28;
              if (fVar40 <= _DAT_142e36f28) {
                fVar44 = fVar40;
              }
              fVar40 = _DAT_14300c770 - fVar44;
              auVar45._0_4_ = fVar40 * fStack_138;
              auVar45._4_4_ = fVar40 * fStack_134;
              auVar45._8_4_ = fVar40 * fStack_130;
              auVar45._12_4_ = fVar40 * fStack_12c;
              auVar46._4_4_ = fVar44 * fStack_144;
              auVar46._0_4_ = fVar44 * fStack_148;
              auVar46._8_8_ = 0;
              bVar10 = true;
              bVar11 = false;
            }
            fVar43 = fVar47 - (fVar35 - fVar38);
          }
          else {
            if (bVar18 != 0 || uVar25 != 0) goto code_r0x00014146d458;
            fVar44 = (float)pdb_140de8220(0,puVar23,fVar34 - fVar33);
            fVar40 = 0.0;
            if (0.0 <= fVar44) {
              fVar40 = fVar44;
            }
            fVar44 = _DAT_142e36f28;
            if (fVar40 <= _DAT_142e36f28) {
              fVar44 = fVar40;
            }
            fVar40 = _DAT_14300c770 - fVar44;
            fVar43 = (fVar35 + fVar38) - fVar43;
            auVar46._0_4_ = fVar40 * fStack_138;
            auVar46._4_4_ = fVar40 * fStack_134;
            auVar46._8_4_ = fVar40 * fStack_130;
            auVar46._12_4_ = fVar40 * fStack_12c;
            auVar6._4_4_ = fStack_154 * fVar44;
            auVar6._0_4_ = fStack_158 * fVar44;
            auVar6._8_8_ = 0;
            auVar45 = auVar6 << 0x40;
            bVar11 = true;
            bVar10 = false;
          }
        }
        else {
          if ((cVar16 != '\0' || bVar17 != 0) || bVar18 != 0) goto code_r0x00014146d458;
          fVar44 = (float)pdb_140de8220(bVar18,puVar23,fVar34 + fVar33);
          fVar40 = 0.0;
          if (0.0 <= fVar44) {
            fVar40 = fVar44;
          }
          fVar44 = _DAT_142e36f28;
          if (fVar40 <= _DAT_142e36f28) {
            fVar44 = fVar40;
          }
          fVar40 = _DAT_14300c770 - fVar44;
          fVar43 = (fVar35 + fVar38) - fVar43;
          auVar45._0_4_ = fVar40 * fStack_138;
          auVar45._4_4_ = fVar40 * fStack_134;
          auVar45._8_4_ = fVar40 * fStack_130;
          auVar45._12_4_ = fVar40 * fStack_12c;
          auVar7._4_4_ = fStack_154 * fVar44;
          auVar7._0_4_ = fStack_158 * fVar44;
          auVar7._8_8_ = 0;
          auVar46 = auVar7 << 0x40;
          bVar10 = true;
          bVar11 = false;
        }
        fVar40 = _DAT_142e36f50;
        fVar42 = fVar42 - fVar43;
        pdb_140deec10(&uStack_188);
        pdb_140deec10(&uStack_188);
        uVar24 = (uint)uStack_168;
        if (!bVar10) {
          pdb_140deec20(&uStack_188);
          fVar42 = (float)pdb_140deec50(&uStack_188);
        }
        pdb_140deead0(&uStack_1d8);
        uStack_1a8 = uStack_1d8;
        uStack_1a0 = uStack_1d0;
        uVar21 = *param_2;
        uVar20 = param_2[3];
        if (uVar20 == uVar21) {
          pdb_140848dc0(param_2);
          uVar21 = *param_2;
          uVar20 = param_2[3];
        }
        uVar25 = uVar24 % 10;
        uVar27 = param_2[1];
        uVar29 = param_2[2] - 1;
        uVar28 = uVar21 + uVar29;
        if (!CARRY8(uVar21,uVar29)) {
          uVar28 = uVar29;
        }
        param_2[2] = uVar28;
        param_2[3] = uVar20 + 1;
        puVar1 = (undefined8 *)(uVar27 + uVar28 * 0x28);
        *puVar1 = uStack_1a8;
        puVar1[1] = uStack_1a0;
        *(undefined1 (*) [16])(uVar27 + 0x10 + uVar28 * 0x28) = auVar46;
        *(uint *)(uVar27 + 0x20 + uVar28 * 0x28) = uVar25;
        *(char *)(uVar27 + 0x24 + uVar28 * 0x28) = cVar13;
        *(char *)(uVar27 + 0x25 + uVar28 * 0x28) = cVar14;
        if (!bVar11) {
          pdb_140deec20(&uStack_188,uVar27,uVar25,uVar29,fVar42);
          pdb_140deec50(&uStack_188);
        }
        pdb_140deead0(&uStack_1d8);
        uStack_1a8 = uStack_1d8;
        uStack_1a0 = uStack_1d0;
        uVar21 = *param_2;
        uVar20 = param_2[3];
        if (uVar20 == uVar21) {
          pdb_140848dc0(param_2);
          uVar21 = *param_2;
          uVar20 = param_2[3];
        }
        uVar27 = param_2[1];
        uVar29 = param_2[2] - 1;
        uVar28 = uVar21 + uVar29;
        if (!CARRY8(uVar21,uVar29)) {
          uVar28 = uVar29;
        }
        param_2[2] = uVar28;
        param_2[3] = uVar20 + 1;
        puVar1 = (undefined8 *)(uVar27 + uVar28 * 0x28);
        *puVar1 = uStack_1a8;
        puVar1[1] = uStack_1a0;
        *(undefined1 (*) [16])(uVar27 + 0x10 + uVar28 * 0x28) = auVar45;
        *(uint *)(uVar27 + 0x20 + uVar28 * 0x28) = (uVar24 + 1) % 10;
        *(char *)(uVar27 + 0x24 + uVar28 * 0x28) = cVar13;
        *(char *)(uVar27 + 0x25 + uVar28 * 0x28) = cVar14;
        uVar31 = uVar31 + 2;
        uVar21 = param_2[3];
        if ((uVar21 != 0) && (uVar20 = uVar21 - 1, uVar31 < uVar20)) {
          uVar21 = param_2[2] + uVar31;
          uVar27 = *param_2;
          uVar28 = uVar27;
          if (uVar21 < uVar27) {
            uVar28 = 0;
          }
          uVar29 = param_2[1];
          lVar19 = uVar21 - uVar28;
          uVar21 = param_2[2] + uVar20;
          if (uVar21 < uVar27) {
            uVar27 = 0;
          }
          lVar22 = uVar21 - uVar27;
          uStack_1b8 = *(undefined8 *)(uVar29 + 0x20 + lVar19 * 0x28);
          puVar1 = (undefined8 *)(uVar29 + lVar19 * 0x28);
          uStack_1d8 = *puVar1;
          uStack_1d0 = puVar1[1];
          puVar1 = (undefined8 *)(uVar29 + 0x10 + lVar19 * 0x28);
          uStack_1c8 = *puVar1;
          uStack_1c0 = puVar1[1];
          uVar36 = *(undefined8 *)(uVar29 + 0x20 + lVar22 * 0x28);
          puVar1 = (undefined8 *)(uVar29 + lVar22 * 0x28);
          uVar37 = puVar1[1];
          puVar2 = (undefined8 *)(uVar29 + 0x10 + lVar22 * 0x28);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          puVar2 = (undefined8 *)(uVar29 + lVar19 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar37;
          puVar1 = (undefined8 *)(uVar29 + 0x10 + lVar19 * 0x28);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          *(undefined8 *)(uVar29 + 0x20 + lVar19 * 0x28) = uVar36;
          *(undefined8 *)(uVar29 + 0x20 + lVar22 * 0x28) = uStack_1b8;
          puVar1 = (undefined8 *)(uVar29 + 0x10 + lVar22 * 0x28);
          *puVar1 = uStack_1c8;
          puVar1[1] = uStack_1c0;
          puVar1 = (undefined8 *)(uVar29 + lVar22 * 0x28);
          *puVar1 = uStack_1d8;
          puVar1[1] = uStack_1d0;
          goto code_r0x00014146c60b;
        }
        if (uVar31 < uVar21) {
          param_2[3] = uVar21 - 1;
        }
        break;
      case 2:
        fVar30 = fStack_144;
        fVar26 = fStack_158;
        if (bVar15 == 0) {
          if (cVar16 == '\0') {
            if ((bVar17 & bVar18) == 0) {
code_r0x00014146d470:
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_14330b218,0x28,&UNK_14330b258);
            }
            fVar47 = fVar47 - (fVar35 - fVar38);
            fVar35 = fVar47 * _DAT_142e36f38;
            fVar39 = 0.0;
            fVar26 = 0.0;
            fVar41 = fStack_148;
            goto code_r0x00014146cfad;
          }
          if ((bVar18 & (bVar17 ^ 1)) == 0) goto code_r0x00014146d470;
          fVar39 = 0.0;
          fVar44 = fStack_148;
          fVar30 = 0.0;
code_r0x00014146cc46:
          pdb_140deec20(&uStack_188);
          pdb_140deec50(&uStack_188);
          pdb_140deead0(&uStack_1d8);
          if (param_2[3] <= uVar31) {
            pdb_142dc8110(&UNK_14330b160,0x14,&UNK_14330b200);
            goto code_r0x00014146d4b8;
          }
          uVar21 = param_2[1];
          uVar20 = 0;
          if (*param_2 <= param_2[2] + uVar31) {
            uVar20 = *param_2;
          }
          lVar19 = (param_2[2] + uVar31) - uVar20;
          puVar1 = (undefined8 *)(uVar21 + lVar19 * 0x28);
          *puVar1 = uStack_1d8;
          puVar1[1] = uStack_1d0;
          *(float *)(uVar21 + 0x10 + lVar19 * 0x28) = fVar44;
        }
        else {
          fVar39 = fStack_154;
          if (cVar16 == '\0') {
            if ((bVar17 & (bVar18 ^ 1)) == 0) goto code_r0x00014146d470;
            fVar44 = 0.0;
            fVar26 = 0.0;
            goto code_r0x00014146cc46;
          }
          if (bVar18 != 0 || uVar25 != 0) goto code_r0x00014146d470;
          fVar47 = (fVar35 + fVar38) - fVar43;
          fVar35 = fVar47 * _DAT_142e36f50;
          fVar41 = 0.0;
          fVar30 = 0.0;
code_r0x00014146cfad:
          uVar36 = pdb_140deec20(&uStack_188);
          uVar37 = pdb_140deec10(&uStack_188);
          pdb_140deead0(&uStack_1d8,uVar36,fVar44 + fVar35,uVar37,fVar42 - fVar47);
          if (param_2[3] <= uVar31) {
code_r0x00014146d4b8:
            pdb_142dc8110(&UNK_14330b160,0x14,&UNK_14330b1e8);
            goto code_r0x00014146d4d0;
          }
          uVar21 = param_2[1];
          uVar20 = 0;
          if (*param_2 <= param_2[2] + uVar31) {
            uVar20 = *param_2;
          }
          lVar19 = (param_2[2] + uVar31) - uVar20;
          puVar1 = (undefined8 *)(uVar21 + lVar19 * 0x28);
          *puVar1 = uStack_1d8;
          puVar1[1] = uStack_1d0;
          *(float *)(uVar21 + 0x10 + lVar19 * 0x28) = fVar41;
        }
        *(float *)(uVar21 + 0x14 + lVar19 * 0x28) = fVar30;
        *(float *)(uVar21 + 0x18 + lVar19 * 0x28) = fVar26;
        *(float *)(uVar21 + 0x1c + lVar19 * 0x28) = fVar39;
        *(uint *)(uVar21 + 0x20 + lVar19 * 0x28) = (uint)uStack_168 % 10;
        *(char *)(uVar21 + 0x24 + lVar19 * 0x28) = cVar13;
        *(char *)(uVar21 + 0x25 + lVar19 * 0x28) = cVar14;
        uVar31 = uVar31 + 1;
        break;
      case 3:
        goto LAB_14146d488;
      case 4:
        uVar21 = param_2[3];
        if ((uVar21 == 0) || (uVar20 = uVar21 - 1, uVar20 <= uVar31)) {
          if (uVar21 <= uVar31) break;
          uVar20 = uVar21 - 1;
        }
        else {
          uVar21 = param_2[2] + uVar31;
          uVar27 = *param_2;
          uVar28 = param_2[1];
          uVar29 = uVar27;
          if (uVar21 < uVar27) {
            uVar29 = 0;
          }
          lVar19 = uVar21 - uVar29;
          uVar21 = param_2[2] + uVar20;
          if (uVar21 < uVar27) {
            uVar27 = 0;
          }
          lVar22 = uVar21 - uVar27;
          uStack_1b8 = *(undefined8 *)(uVar28 + 0x20 + lVar19 * 0x28);
          puVar1 = (undefined8 *)(uVar28 + lVar19 * 0x28);
          uStack_1d8 = *puVar1;
          uStack_1d0 = puVar1[1];
          puVar1 = (undefined8 *)(uVar28 + 0x10 + lVar19 * 0x28);
          uStack_1c8 = *puVar1;
          uStack_1c0 = puVar1[1];
          uVar36 = *(undefined8 *)(uVar28 + 0x20 + lVar22 * 0x28);
          puVar1 = (undefined8 *)(uVar28 + lVar22 * 0x28);
          uVar37 = puVar1[1];
          puVar2 = (undefined8 *)(uVar28 + 0x10 + lVar22 * 0x28);
          uVar8 = *puVar2;
          uVar9 = puVar2[1];
          puVar2 = (undefined8 *)(uVar28 + lVar19 * 0x28);
          *puVar2 = *puVar1;
          puVar2[1] = uVar37;
          puVar1 = (undefined8 *)(uVar28 + 0x10 + lVar19 * 0x28);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          *(undefined8 *)(uVar28 + 0x20 + lVar19 * 0x28) = uVar36;
          *(undefined8 *)(uVar28 + 0x20 + lVar22 * 0x28) = uStack_1b8;
          puVar1 = (undefined8 *)(uVar28 + 0x10 + lVar22 * 0x28);
          *puVar1 = uStack_1c8;
          puVar1[1] = uStack_1c0;
          puVar1 = (undefined8 *)(uVar28 + lVar22 * 0x28);
          *puVar1 = uStack_1d8;
          puVar1[1] = uStack_1d0;
          fVar40 = _DAT_142e36f50;
        }
code_r0x00014146c60b:
        param_2[3] = uVar20;
      }
    } while (uVar31 < param_2[3]);
  }
  return;
}

