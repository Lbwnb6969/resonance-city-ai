// VA 0x1419aaf90, PDB extent 1333 bytes
// utils::curve::Curve::crashy_resample_per_segment<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample_per_segment<glam::f32::vec3::Vec3,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1333 */

void pdb_1419aaf90(longlong *param_1,longlong param_2,float param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  ulonglong **arg0;
  ulonglong uVar9;
  float *pfVar10;
  undefined8 **ppuVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong *plStack_158;
  longlong lStack_150;
  undefined8 **ppuStack_148;
  code *pcStack_140;
  ulonglong *puStack_138;
  code *pcStack_130;
  float *pfStack_120;
  ulonglong *puStack_118;
  byte *pbStack_110;
  ulonglong *puStack_108;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  ppuVar4 = *(undefined8 ***)(param_2 + 0x10);
  if (ppuVar4 < (undefined8 **)0x2) {
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
  arg0 = (ulonglong **)((longlong)ppuVar4 * 0xc);
  plStack_158 = param_1;
  pdb_14007ee60();
  pbStack_110 = pub_1406abab0((ulonglong)arg0,4);
  if (pbStack_110 == (byte *)0x0) {
    pdb_142dc7e2a(4,arg0);
  }
  else {
    pfVar12 = *(float **)(param_2 + 8);
    pfVar8 = *(float **)pfVar12;
    *(float *)(pbStack_110 + 8) = pfVar12[2];
    *(float **)pbStack_110 = pfVar8;
    fVar6 = _DAT_142e36f34;
    fVar5 = _DAT_142e36f28;
    puStack_108 = (ulonglong *)0x1;
    pfStack_120 = pfVar12 + (longlong)ppuVar4 * 3;
    bVar7 = true;
    ppuVar11 = (undefined8 **)0x1;
    arg0 = &puStack_118;
    lStack_150 = param_2;
    puStack_118 = (ulonglong *)ppuVar4;
    while (pfVar12 != pfStack_120) {
      pfVar1 = pfVar12 + 3;
      pfVar10 = pfVar1;
      pfVar13 = pfVar8;
      pfVar8 = pfVar12;
      if (bVar7) {
        if (pfVar1 == pfStack_120) break;
        pfVar10 = pfVar12 + 6;
        pfVar13 = pfVar12;
        pfVar8 = pfVar1;
      }
      fVar15 = SQRT((pfVar8[2] - pfVar13[2]) * (pfVar8[2] - pfVar13[2]) +
                    (pfVar8[1] - pfVar13[1]) * (pfVar8[1] - pfVar13[1]) +
                    (*pfVar8 - *pfVar13) * (*pfVar8 - *pfVar13));
      if (fVar15 <= _DAT_142e36f24) {
        fVar15 = _DAT_142e36f24;
      }
      fVar16 = param_3 / fVar15;
      if (fVar5 <= param_3 / fVar15) {
        fVar16 = fVar5;
      }
      fVar15 = (float)pub_142e32b00(fVar5 / fVar16);
      uVar9 = (longlong)(fVar15 - _DAT_142e36f2c) & (longlong)fVar15 >> 0x3f | (longlong)fVar15;
      if (fVar15 < 0.0) {
        uVar9 = 0;
      }
      if (_DAT_142e36f30 < fVar15) {
        uVar9 = 0xffffffffffffffff;
      }
      uVar9 = uVar9 + 1;
      if (uVar9 < 3) {
        uVar9 = 2;
      }
      for (uVar14 = 1; uVar14 < uVar9; uVar14 = uVar14 + 1) {
        fVar18 = (float)uVar14 / ((float)uVar9 + fVar6);
        fVar17 = fVar5 - fVar18;
        fVar15 = pfVar13[2];
        uVar2 = *(undefined8 *)pfVar13;
        uVar3 = *(undefined8 *)pfVar8;
        fVar16 = pfVar8[2];
        if (ppuVar11 == (undefined8 **)puStack_118) {
          uStack_f1 = 1;
          pdb_142db7820(arg0);
        }
        *(ulonglong *)(pbStack_110 + (longlong)ppuVar11 * 0xc) =
             CONCAT44(fVar18 * (float)((ulonglong)uVar3 >> 0x20) +
                      fVar17 * (float)((ulonglong)uVar2 >> 0x20),
                      fVar18 * (float)uVar3 + fVar17 * (float)uVar2);
        *(float *)(pbStack_110 + (longlong)ppuVar11 * 0xc + 8) = fVar15 * fVar17 + fVar16 * fVar18;
        ppuVar11 = (undefined8 **)((longlong)ppuVar11 + 1);
        puStack_108 = (ulonglong *)ppuVar11;
      }
      bVar7 = false;
      pfVar12 = pfVar10;
    }
    puStack_138 = puStack_108;
    ppuStack_148 = (undefined8 **)puStack_118;
    pcStack_140 = (code *)pbStack_110;
    uStack_f1 = 0;
    pdb_14148c570(&lStack_190,&ppuStack_148,0);
    if (!SBORROW8(0,lStack_190)) {
      plStack_158[6] = lStack_160;
      plStack_158[4] = lStack_170;
      plStack_158[5] = lStack_168;
      plStack_158[2] = CONCAT44(uStack_17c,uStack_180);
      plStack_158[3] = lStack_178;
      *plStack_158 = lStack_190;
      plStack_158[1] = CONCAT44(uStack_184,uStack_188);
      return;
    }
  }
  pcStack_140 = pdb_1419ad1a0;
  puStack_138 = (ulonglong *)lStack_150;
  pcStack_130 = pdb_1415e5130;
  ppuStack_148 = arg0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14335e830,&ppuStack_148,&UNK_14335e870);
}

