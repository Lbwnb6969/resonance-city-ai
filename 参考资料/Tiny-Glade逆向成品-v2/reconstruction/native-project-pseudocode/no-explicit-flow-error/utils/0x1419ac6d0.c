// VA 0x1419ac6d0, PDB extent 1507 bytes
// utils::curve::Curve::crashy_resample_remap_per_segment_2<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D,country_core::systems::wall::wall_state::publish_public_wall_state::process::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample_remap_per_segment_2<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic3D,country_core::systems::wall::wall_state::publish_public_wall_state::process::closure_env$0>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1507 */

void pdb_1419ac6d0(longlong *param_1,longlong param_2,ulonglong param_3,float param_4,
                  undefined8 param_5,longlong param_6)

{
  float *pfVar1;
  ulonglong **ppuVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 **ppuVar7;
  bool bVar8;
  byte *pbVar9;
  ulonglong uVar10;
  float *pfVar11;
  ulonglong unaff_RBX;
  ulonglong uVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  longlong lStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  longlong *plStack_148;
  longlong lStack_140;
  float *pfStack_138;
  float *pfStack_130;
  ulonglong **ppuStack_128;
  code *pcStack_120;
  undefined8 **ppuStack_118;
  code *pcStack_110;
  undefined8 **ppuStack_108;
  byte *pbStack_100;
  undefined8 **ppuStack_f8;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  ppuVar2 = *(ulonglong ***)(param_2 + 0x10);
  if (ppuVar2 < (ulonglong **)0x2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e588,0x28,&UNK_14335e690);
  }
  if ((param_4 == 0.0) && (!NAN(param_4))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e6a8,0x2b,&UNK_14335e6d8);
  }
  if ((*(float *)(param_2 + 0x30) == 0.0) && (!NAN(*(float *)(param_2 + 0x30)))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14335e608,0x24,&UNK_14335e6f0);
  }
  uVar10 = param_3;
  if (ppuVar2 < (ulonglong **)0xaaaaaaaaaaaaaab) goto LAB_1419ac77f;
  param_1 = (longlong *)0x0;
  do {
    pdb_142dc7e2a(param_1,unaff_RBX);
    uVar10 = param_3;
LAB_1419ac77f:
    unaff_RBX = (longlong)ppuVar2 * 0xc;
    param_3 = uVar10;
    plStack_148 = param_1;
    pdb_14007ee60();
    param_1 = (longlong *)0x4;
    pbVar9 = pub_1406abab0(unaff_RBX,4);
  } while (pbVar9 == (byte *)0x0);
  ppuStack_f8 = (undefined8 **)0x0;
  pfVar13 = *(float **)(param_2 + 8);
  ppuStack_128 = *(ulonglong ***)pfVar13;
  uStack_e1 = 1;
  lStack_140 = param_2;
  ppuStack_108 = ppuVar2;
  pbStack_100 = pbVar9;
  fVar16 = (float)pdb_1419c1ac0(param_5,(int)ppuStack_128,(int)((ulonglong)ppuStack_128 >> 0x20));
  uVar15 = -(uint)(0.0 < *(float *)(param_6 + 0x58));
  fVar3 = (float)(~uVar15 & _DAT_143021a10 | (uint)*(float *)(param_6 + 0x58) & uVar15);
  fVar19 = fVar3;
  if (fVar3 <= fVar16) {
    fVar19 = fVar16;
  }
  uStack_e1 = 1;
  pfVar11 = (float *)&lStack_188;
  pdb_140df4540(pfVar11,&ppuStack_128,
                ~-(uint)NAN(fVar16) & (uint)fVar19 | -(uint)NAN(fVar16) & (uint)fVar3);
  *(undefined4 *)(pbVar9 + 8) = uStack_180;
  *(longlong *)pbVar9 = lStack_188;
  fVar6 = _DAT_142e36f34;
  fVar5 = _DAT_142e36f30;
  fVar4 = _DAT_142e36f2c;
  fVar16 = _DAT_142e36f28;
  fVar19 = _DAT_142e36f24;
  ppuStack_f8 = (ulonglong **)0x1;
  pfStack_130 = pfVar13 + (longlong)ppuVar2 * 2;
  uStack_150 = uVar10 & 0xff;
  bVar8 = true;
  while (pfVar13 != pfStack_130) {
    pfVar1 = pfVar13 + 2;
    if (bVar8) {
      if (pfVar1 == pfStack_130) break;
      pfStack_138 = pfVar13 + 4;
      pfVar14 = pfVar13;
      pfVar11 = pfVar1;
    }
    else {
      pfStack_138 = pfVar1;
      pfVar14 = pfVar11;
      pfVar11 = pfVar13;
    }
    fVar17 = SQRT((pfVar11[1] - pfVar14[1]) * (pfVar11[1] - pfVar14[1]) +
                  (*pfVar11 - *pfVar14) * (*pfVar11 - *pfVar14));
    if (fVar17 <= fVar19) {
      fVar17 = fVar19;
    }
    fVar18 = param_4 / fVar17;
    if (fVar16 <= param_4 / fVar17) {
      fVar18 = fVar16;
    }
    fVar17 = (float)pub_142e32b00(fVar16 / fVar18);
    uVar10 = (longlong)(fVar17 - fVar4) & (longlong)fVar17 >> 0x3f | (longlong)fVar17;
    if (fVar17 < 0.0) {
      uVar10 = 0;
    }
    if (fVar5 < fVar17) {
      uVar10 = 0xffffffffffffffff;
    }
    uVar10 = uVar10 + 1;
    if (uVar10 < 3) {
      uVar10 = 2;
    }
    uVar12 = uVar10 | uStack_150;
    if ((longlong)uVar12 < 0) {
      fVar17 = (float)((ulonglong)((uint)uVar12 & 1) | uVar10 >> 1);
      fVar17 = fVar17 + fVar17;
    }
    else {
      fVar17 = (float)(longlong)uVar12;
    }
    for (uVar10 = 1; uVar10 < uVar12; uVar10 = uVar10 + 1) {
      fVar18 = (float)uVar10 / (fVar17 + fVar6);
      fVar20 = fVar18 * (float)*(undefined8 *)pfVar11 +
               (fVar16 - fVar18) * (float)*(undefined8 *)pfVar14;
      fVar18 = fVar18 * (float)((ulonglong)*(undefined8 *)pfVar11 >> 0x20) +
               (fVar16 - fVar18) * (float)((ulonglong)*(undefined8 *)pfVar14 >> 0x20);
      ppuStack_128 = (ulonglong **)CONCAT44(fVar18,fVar20);
      uStack_e1 = 1;
      fVar20 = (float)pdb_1419c1ac0(param_5,fVar20,fVar18);
      fVar18 = fVar3;
      if (fVar3 <= fVar20) {
        fVar18 = fVar20;
      }
      uStack_e1 = 1;
      pdb_140df4540(&lStack_188,&ppuStack_128,
                    ~-(uint)NAN(fVar20) & (uint)fVar18 | -(uint)NAN(fVar20) & (uint)fVar3);
      ppuVar7 = ppuStack_f8;
      if (ppuStack_f8 == ppuStack_108) {
        uStack_e1 = 1;
        pdb_142db7820(&ppuStack_108);
      }
      *(undefined4 *)(pbStack_100 + (longlong)ppuVar7 * 0xc + 8) = uStack_180;
      *(longlong *)(pbStack_100 + (longlong)ppuVar7 * 0xc) = lStack_188;
      ppuStack_f8 = (ulonglong **)((longlong)ppuVar7 + 1);
    }
    bVar8 = false;
    pfVar13 = pfStack_138;
  }
  ppuStack_118 = ppuStack_f8;
  ppuStack_128 = ppuStack_108;
  pcStack_120 = (code *)pbStack_100;
  uStack_e1 = 0;
  pdb_1419aa3f0(&lStack_188,&ppuStack_128);
  if (!SBORROW8(0,lStack_188)) {
    plStack_148[6] = lStack_158;
    plStack_148[4] = lStack_168;
    plStack_148[5] = lStack_160;
    plStack_148[2] = lStack_178;
    plStack_148[3] = lStack_170;
    *plStack_148 = lStack_188;
    plStack_148[1] = CONCAT44(uStack_17c,uStack_180);
    return;
  }
  pbStack_100 = (byte *)lStack_178;
  ppuStack_128 = (ulonglong **)&ppuStack_108;
  pcStack_120 = pdb_1419ad1a0;
  ppuStack_118 = (undefined8 **)lStack_140;
  pcStack_110 = pdb_1415e4f30;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14335e830,&ppuStack_128,&UNK_14335e870);
}

