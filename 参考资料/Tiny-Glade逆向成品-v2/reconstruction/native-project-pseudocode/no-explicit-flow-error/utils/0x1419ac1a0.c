// VA 0x1419ac1a0, PDB extent 1313 bytes
// utils::curve::Curve::crashy_resample_remap_per_segment<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D,country_core::systems::wall::shapes::rectangle::ui_create_rectangle::rectangle_signifier::closure$0::closure$0::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample_remap_per_segment<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D,country_core::systems::wall::shapes::rectangle::ui_create_rectangle::rectangle_signifier::closure$0::closure$0::closure_env$0>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1313 */

void pdb_1419ac1a0(longlong *param_1,longlong param_2,float param_3)

{
  float *pfVar1;
  ulonglong **ppuVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 **ppuVar8;
  bool bVar9;
  byte *pbVar10;
  float *pfVar11;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong unaff_R14;
  float fVar16;
  float fVar17;
  longlong lStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  longlong lStack_130;
  float *pfStack_128;
  float *pfStack_120;
  ulonglong **ppuStack_118;
  code *pcStack_110;
  undefined8 **ppuStack_108;
  code *pcStack_100;
  undefined8 **ppuStack_f8;
  byte *pbStack_f0;
  undefined8 **ppuStack_e8;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  ppuVar2 = *(ulonglong ***)(param_2 + 0x10);
  if (ppuVar2 < (ulonglong **)0x2) {
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
  if (ppuVar2 < (ulonglong **)0xaaaaaaaaaaaaaab) goto LAB_1419ac247;
  param_1 = (longlong *)0x0;
  do {
    pdb_142dc7e2a(param_1,unaff_R14);
LAB_1419ac247:
    unaff_R14 = (longlong)ppuVar2 * 0xc;
    plStack_138 = param_1;
    pdb_14007ee60();
    param_1 = (longlong *)0x4;
    pbVar10 = pub_1406abab0(unaff_R14,4);
  } while (pbVar10 == (byte *)0x0);
  ppuStack_e8 = (undefined8 **)0x0;
  pfVar13 = *(float **)(param_2 + 8);
  ppuStack_118 = *(ulonglong ***)pfVar13;
  uStack_d1 = 1;
  pfVar11 = (float *)&lStack_170;
  lStack_130 = param_2;
  ppuStack_f8 = ppuVar2;
  pbStack_f0 = pbVar10;
  pdb_140df4540(pfVar11,&ppuStack_118,0);
  *(undefined4 *)(pbVar10 + 8) = uStack_168;
  *(longlong *)pbVar10 = lStack_170;
  fVar7 = _DAT_142e36f34;
  fVar6 = _DAT_142e36f30;
  fVar5 = _DAT_142e36f2c;
  fVar4 = _DAT_142e36f28;
  fVar3 = _DAT_142e36f24;
  ppuStack_e8 = (ulonglong **)0x1;
  pfStack_120 = pfVar13 + (longlong)ppuVar2 * 2;
  bVar9 = true;
  while (pfVar13 != pfStack_120) {
    pfVar1 = pfVar13 + 2;
    if (bVar9) {
      if (pfVar1 == pfStack_120) break;
      pfStack_128 = pfVar13 + 4;
      pfVar14 = pfVar13;
      pfVar11 = pfVar1;
    }
    else {
      pfStack_128 = pfVar1;
      pfVar14 = pfVar11;
      pfVar11 = pfVar13;
    }
    fVar16 = SQRT((pfVar11[1] - pfVar14[1]) * (pfVar11[1] - pfVar14[1]) +
                  (*pfVar11 - *pfVar14) * (*pfVar11 - *pfVar14));
    if (fVar16 <= fVar3) {
      fVar16 = fVar3;
    }
    fVar17 = param_3 / fVar16;
    if (fVar4 <= param_3 / fVar16) {
      fVar17 = fVar4;
    }
    fVar16 = (float)pub_142e32b00(fVar4 / fVar17);
    uVar15 = (longlong)(fVar16 - fVar5) & (longlong)fVar16 >> 0x3f | (longlong)fVar16;
    if (fVar16 < 0.0) {
      uVar15 = 0;
    }
    if (fVar6 < fVar16) {
      uVar15 = 0xffffffffffffffff;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 < 3) {
      uVar15 = 2;
    }
    for (uVar12 = 1; uVar12 < uVar15; uVar12 = uVar12 + 1) {
      fVar16 = (float)uVar12 / ((float)uVar15 + fVar7);
      ppuStack_118 = (ulonglong **)
                     CONCAT44(fVar16 * (float)((ulonglong)*(undefined8 *)pfVar11 >> 0x20) +
                              (fVar4 - fVar16) * (float)((ulonglong)*(undefined8 *)pfVar14 >> 0x20),
                              fVar16 * (float)*(undefined8 *)pfVar11 +
                              (fVar4 - fVar16) * (float)*(undefined8 *)pfVar14);
      uStack_d1 = 1;
      pdb_140df4540(&lStack_170,&ppuStack_118,0);
      ppuVar8 = ppuStack_e8;
      if (ppuStack_e8 == ppuStack_f8) {
        uStack_d1 = 1;
        pdb_142db7820(&ppuStack_f8);
      }
      *(undefined4 *)(pbStack_f0 + (longlong)ppuVar8 * 0xc + 8) = uStack_168;
      *(longlong *)(pbStack_f0 + (longlong)ppuVar8 * 0xc) = lStack_170;
      ppuStack_e8 = (ulonglong **)((longlong)ppuVar8 + 1);
    }
    bVar9 = false;
    pfVar13 = pfStack_128;
  }
  ppuStack_108 = ppuStack_e8;
  ppuStack_118 = ppuStack_f8;
  pcStack_110 = (code *)pbStack_f0;
  uStack_d1 = 0;
  pdb_1419aa3f0(&lStack_170,&ppuStack_118);
  if (!SBORROW8(0,lStack_170)) {
    plStack_138[6] = lStack_140;
    plStack_138[4] = lStack_150;
    plStack_138[5] = lStack_148;
    plStack_138[2] = CONCAT44(uStack_15c,uStack_160);
    plStack_138[3] = lStack_158;
    *plStack_138 = lStack_170;
    plStack_138[1] = CONCAT44(uStack_164,uStack_168);
    return;
  }
  ppuStack_118 = (ulonglong **)&ppuStack_f8;
  pcStack_110 = pdb_1419ad1a0;
  ppuStack_108 = (undefined8 **)lStack_130;
  pcStack_100 = pdb_1415e4f30;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14335e830,&ppuStack_118,&UNK_14335e870);
}

