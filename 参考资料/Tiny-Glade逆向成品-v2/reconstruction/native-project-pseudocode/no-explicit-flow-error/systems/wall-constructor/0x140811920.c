// VA 0x140811920, PDB extent 999 bytes
// system_wall_constructor::construct_arches::profile::create_wood_arch_profile
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::profile::create_wood_arch_profile
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/profile.rs
   Extent: 999 */

undefined8
pdb_140811920(ulonglong *param_1,int *param_2,char param_3,longlong param_4,ulonglong param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  char acStack_c4 [4];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float *pfStack_b8;
  float *pfStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if (*param_2 == 1) {
    fVar20 = (float)param_2[1];
    uVar16 = param_1[4];
    uVar12 = param_1[5];
  }
  else {
    uVar16 = param_1[4];
    uVar12 = param_1[5];
    uVar10 = param_1[2];
    if (uVar12 < param_1[2]) {
      uVar10 = uVar12;
    }
    if (uVar10 == 0) {
      fVar20 = 0.0;
    }
    else {
      fVar20 = *(float *)param_1[1] + *(float *)(uVar16 + 4);
      if (uVar10 != 1) {
        pfVar9 = (float *)(uVar16 + 0x10);
        uVar13 = 1;
        do {
          fVar17 = ((float *)param_1[1])[uVar13] + *pfVar9;
          uVar8 = CONCAT44((uint)((int)fVar17 >> 0x1f) >> 1,(uint)((int)fVar20 >> 0x1f) >> 1) ^
                  CONCAT44(fVar17,fVar20);
          if ((int)uVar8 <= (int)(uVar8 >> 0x20)) {
            fVar20 = fVar17;
          }
          uVar13 = uVar13 + 1;
          pfVar9 = pfVar9 + 3;
        } while (uVar10 != uVar13);
      }
    }
  }
  if (uVar12 == 0) {
    pfVar9 = (float *)0x4;
  }
  else {
    pdb_14007ee60();
    pfVar9 = (float *)pub_1406abab0(uVar12 * 4,4);
    if (pfVar9 == (float *)0x0) {
      pdb_142dc7e2a(4,uVar12 * 4);
      pcVar7 = (code *)swi(3);
      uVar18 = (*pcVar7)();
      return uVar18;
    }
    if ((uVar12 < 0xd) ||
       (pfVar9 < (float *)(uVar12 * 0xc + -4 + uVar16) && (float *)(uVar16 + 4) < pfVar9 + uVar12))
    {
      uVar10 = 0;
    }
    else {
      uVar10 = 8;
      if ((uVar12 & 7) != 0) {
        uVar10 = (ulonglong)((uint)uVar12 & 7);
      }
      uVar10 = uVar12 - uVar10;
      pfVar11 = (float *)(uVar16 + 0x58);
      uVar13 = 0;
      do {
        fVar17 = pfVar11[-0x12];
        fVar19 = pfVar11[-0xf];
        fVar2 = pfVar11[-0xc];
        fVar3 = *pfVar11;
        fVar4 = pfVar11[-3];
        fVar5 = pfVar11[-6];
        fVar6 = pfVar11[-9];
        pfVar1 = pfVar9 + uVar13;
        *pfVar1 = fVar20 - pfVar11[-0x15];
        pfVar1[1] = fVar20 - fVar17;
        pfVar1[2] = fVar20 - fVar19;
        pfVar1[3] = fVar20 - fVar2;
        pfVar1 = pfVar9 + uVar13 + 4;
        *pfVar1 = fVar20 - fVar6;
        pfVar1[1] = fVar20 - fVar5;
        pfVar1[2] = fVar20 - fVar4;
        pfVar1[3] = fVar20 - fVar3;
        uVar13 = uVar13 + 8;
        pfVar11 = pfVar11 + 0x18;
      } while (uVar10 != uVar13);
    }
    uVar14 = (uint)uVar12 - (int)uVar10 & 3;
    uVar13 = uVar10;
    if (uVar14 != 0) {
      lVar15 = 0;
      do {
        pfVar9[uVar13] = fVar20 - *(float *)(uVar10 * 0xc + 4 + uVar16 + lVar15 * 4);
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 3;
      } while ((ulonglong)uVar14 * 3 != lVar15);
    }
    if (uVar10 - uVar12 < 0xfffffffffffffffd) {
      pfVar11 = (float *)(uVar13 * 0xc + 0x28 + uVar16);
      do {
        pfVar9[uVar13] = fVar20 - pfVar11[-9];
        pfVar9[uVar13 + 1] = fVar20 - pfVar11[-6];
        pfVar9[uVar13 + 2] = fVar20 - pfVar11[-3];
        pfVar9[uVar13 + 3] = fVar20 - *pfVar11;
        uVar13 = uVar13 + 4;
        pfVar11 = pfVar11 + 0xc;
      } while (uVar12 != uVar13);
    }
  }
  if (*param_1 != 0) {
    pub_1406abac0((byte *)param_1[1],*param_1 << 2,4);
  }
  *param_1 = uVar12;
  param_1[1] = (ulonglong)pfVar9;
  param_1[2] = uVar12;
  fVar20 = _DAT_143008210;
  if (param_3 != '\0') {
    uStack_90 = (undefined4)param_1[0xc];
    uStack_98 = param_1[0xb];
    pfStack_b0 = pfVar9 + uVar12;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_70 = uVar16 + uVar12 * 0xc;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_a0 = param_5;
    if (uVar12 != 0) {
      lStack_a8 = param_4;
      uStack_78 = uVar16;
      do {
        pfStack_b8 = pfVar9 + 1;
        pdb_1413f86f0(acStack_c4,&uStack_98);
        uVar16 = uStack_a0;
        lVar15 = lStack_a8;
        if (acStack_c4[0] == '\0') {
          return 0;
        }
        uVar12 = pdb_1413f8440(uStack_c0,uStack_bc);
        if (uVar16 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar12,uVar16,&UNK_143008258);
        }
        if (uStack_78 == uStack_70) {
          return 0;
        }
        fVar17 = (*(float *)(lVar15 + uVar12 * 4) - *(float *)(uStack_78 + 4)) + fVar20;
        if (fVar17 <= 0.0) {
          fVar17 = 0.0;
        }
        fVar19 = *pfVar9;
        if (fVar17 <= *pfVar9) {
          fVar19 = fVar17;
        }
        *pfVar9 = fVar19;
        pfVar9 = pfStack_b8;
        uStack_78 = uStack_78 + 0xc;
      } while (pfStack_b8 != pfStack_b0);
    }
  }
  return 0;
}

