// VA 0x1419abbe0, PDB extent 1461 bytes
// utils::curve::Curve::crashy_resample_remap_per_segment<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D,country_core::systems::wall::shapes::calc_shape_height::calc_shape_height_and_stone_foundation::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample_remap_per_segment<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D,country_core::systems::wall::shapes::calc_shape_height::calc_shape_height_and_stone_foundation::closure_env$0>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1461 */

void pdb_1419abbe0(longlong *param_1,longlong param_2,float param_3,undefined8 *param_4,
                  longlong *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong **ppuVar5;
  float *pfVar6;
  longlong lVar7;
  undefined8 **ppuVar8;
  bool bVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong unaff_R15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong lStack_190;
  ulonglong *puStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong *plStack_158;
  longlong lStack_150;
  ulonglong **ppuStack_148;
  float *pfStack_140;
  undefined8 **ppuStack_138;
  code *pcStack_130;
  float *pfStack_128;
  float *pfStack_120;
  undefined8 **ppuStack_118;
  float *pfStack_110;
  undefined8 **ppuStack_108;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  ppuVar5 = *(ulonglong ***)(param_2 + 0x10);
  if (ppuVar5 < (ulonglong **)0x2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e588,0x28,&UNK_14335e690);
  }
  if ((param_3 == 0.0) && (!NAN(param_3))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e6a8,0x2b,&UNK_14335e6d8);
  }
  if ((*(float *)(param_2 + 0x30) == 0.0) && (!NAN(*(float *)(param_2 + 0x30)))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e608,0x24,&UNK_14335e6f0);
  }
  if (ppuVar5 < (ulonglong **)0xaaaaaaaaaaaaaab) goto LAB_1419abc97;
  param_1 = (longlong *)0x0;
  do {
    pdb_142dc7e2a(param_1,unaff_R15);
LAB_1419abc97:
    pfVar6 = (float *)*param_4;
    lVar7 = *param_5;
    unaff_R15 = (longlong)ppuVar5 * 0xc;
    plStack_158 = param_1;
    pdb_14007ee60();
    param_1 = (longlong *)0x4;
    pfVar10 = (float *)pub_1406abab0(unaff_R15,4);
  } while (pfVar10 == (float *)0x0);
  ppuStack_108 = (undefined8 **)0x0;
  pfVar13 = *(float **)(param_2 + 8);
  fVar1 = *pfVar13;
  fVar2 = pfVar13[1];
  uStack_f1 = 1;
  pfVar11 = pfVar6;
  lStack_150 = param_2;
  ppuStack_118 = ppuVar5;
  pfStack_110 = pfVar10;
  fVar16 = (float)pdb_1419c1ac0(pfVar6,fVar1);
  fVar3 = *(float *)(lVar7 + 0x44);
  fVar17 = fVar3;
  if (fVar3 <= fVar16) {
    fVar17 = fVar16;
  }
  *pfVar10 = fVar1;
  pfVar10[1] = (float)(~-(uint)NAN(fVar16) & (uint)fVar17 | -(uint)NAN(fVar16) & (uint)fVar3);
  pfVar10[2] = fVar2;
  fVar3 = _DAT_142e36f34;
  fVar2 = _DAT_142e36f30;
  fVar1 = _DAT_142e36f28;
  ppuStack_108 = (ulonglong **)0x1;
  pfStack_120 = pfVar13 + (longlong)ppuVar5 * 2;
  bVar9 = true;
  while (pfVar13 != pfStack_120) {
    pfVar10 = pfVar13 + 2;
    pfVar14 = pfVar11;
    pfVar11 = pfVar13;
    if (bVar9) {
      if (pfVar10 == pfStack_120) break;
      pfVar14 = pfVar13;
      pfVar11 = pfVar10;
      pfVar10 = pfVar13 + 4;
    }
    pfStack_128 = pfVar10;
    fVar17 = SQRT((pfVar11[1] - pfVar14[1]) * (pfVar11[1] - pfVar14[1]) +
                  (*pfVar11 - *pfVar14) * (*pfVar11 - *pfVar14));
    if (fVar17 <= _DAT_142e36f24) {
      fVar17 = _DAT_142e36f24;
    }
    fVar16 = param_3 / fVar17;
    if (fVar1 <= param_3 / fVar17) {
      fVar16 = fVar1;
    }
    fVar17 = (float)pub_142e32b00(fVar1 / fVar16);
    uVar15 = (longlong)(fVar17 - _DAT_142e36f2c) & (longlong)fVar17 >> 0x3f | (longlong)fVar17;
    if (fVar17 < 0.0) {
      uVar15 = 0;
    }
    if (fVar2 < fVar17) {
      uVar15 = 0xffffffffffffffff;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 < 3) {
      uVar15 = 2;
    }
    uVar12 = 1;
    while (uVar12 < uVar15) {
      fVar19 = (float)uVar12 / ((float)uVar15 + fVar3);
      fVar17 = pfVar14[1];
      fVar20 = *pfVar11 * fVar19 + *pfVar14 * (fVar1 - fVar19);
      fVar16 = pfVar11[1];
      uStack_f1 = 1;
      fVar18 = (float)pdb_1419c1ac0(pfVar6,fVar20);
      ppuVar8 = ppuStack_108;
      fVar4 = *(float *)(lVar7 + 0x44);
      if (ppuStack_108 == ppuStack_118) {
        uStack_f1 = 1;
        pdb_142db7820(&ppuStack_118);
      }
      uVar12 = uVar12 + 1;
      fVar21 = fVar4;
      if (fVar4 <= fVar18) {
        fVar21 = fVar18;
      }
      pfStack_110[(longlong)ppuVar8 * 3] = fVar20;
      pfStack_110[(longlong)ppuVar8 * 3 + 1] =
           (float)(~-(uint)NAN(fVar18) & (uint)fVar21 | -(uint)NAN(fVar18) & (uint)fVar4);
      pfStack_110[(longlong)ppuVar8 * 3 + 2] = fVar19 * fVar16 + (fVar1 - fVar19) * fVar17;
      ppuStack_108 = (undefined8 **)((longlong)ppuVar8 + 1);
    }
    bVar9 = false;
    pfVar13 = pfStack_128;
  }
  ppuStack_138 = ppuStack_108;
  ppuStack_148 = ppuStack_118;
  pfStack_140 = pfStack_110;
  uStack_f1 = 0;
  pdb_1419aa3f0(&lStack_190,&ppuStack_148);
  if (!SBORROW8(0,lStack_190)) {
    plStack_158[6] = lStack_160;
    plStack_158[4] = lStack_170;
    plStack_158[5] = lStack_168;
    plStack_158[2] = lStack_180;
    plStack_158[3] = lStack_178;
    *plStack_158 = lStack_190;
    plStack_158[1] = (longlong)puStack_188;
    return;
  }
  ppuStack_118 = (undefined8 **)puStack_188;
  pfStack_110 = (float *)lStack_180;
  ppuStack_148 = (ulonglong **)&ppuStack_118;
  pfStack_140 = (float *)pdb_1419ad1a0;
  ppuStack_138 = (undefined8 **)lStack_150;
  pcStack_130 = pdb_1415e4f30;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14335e830,&ppuStack_148,&UNK_14335e870);
}

