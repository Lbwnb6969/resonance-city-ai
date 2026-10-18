// VA 0x1413fa460, PDB extent 1297 bytes
// utils::curve::Curve::crashy_resample_per_segment<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::Curve::crashy_resample_per_segment<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 1297 */

void pdb_1413fa460(longlong *param_1,longlong param_2,float param_3)

{
  float ***pppfVar1;
  float **ppfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float ***pppfVar7;
  bool bVar8;
  float ***pppfVar9;
  float ***arg0;
  ulonglong uVar10;
  float ***pppfVar11;
  float ***pppfVar12;
  float ***pppfVar13;
  ulonglong uVar14;
  float **ppfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  float **ppfStack_148;
  code *pcStack_140;
  float **ppfStack_138;
  code *pcStack_130;
  float **ppfStack_120;
  float **ppfStack_118;
  byte *pbStack_110;
  float **ppfStack_108;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  ppfVar2 = *(float ***)(param_2 + 0x10);
  if (ppfVar2 < (float **)0x2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306650,0x28,&UNK_143306758);
  }
  if ((param_3 == 0.0) && (!NAN(param_3))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306770,0x2b,&UNK_1433067a0);
  }
  if ((*(float *)(param_2 + 0x30) == 0.0) && (!NAN(*(float *)(param_2 + 0x30)))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433066d0,0x24,&UNK_1433067b8);
  }
  arg0 = (float ***)((longlong)ppfVar2 * 8);
  plStack_158 = param_1;
  pdb_14007ee60();
  pppfVar9 = arg0;
  pbStack_110 = pub_1406abab0((ulonglong)arg0,4);
  if (pbStack_110 == (byte *)0x0) {
    pdb_142dc7e2a(4,arg0);
  }
  else {
    pppfVar12 = *(float ****)(param_2 + 8);
    *(float ***)pbStack_110 = *pppfVar12;
    fVar6 = _DAT_142e36f34;
    fVar5 = _DAT_142e36f30;
    fVar4 = _DAT_142e36f2c;
    fVar3 = _DAT_142e36f28;
    ppfStack_108 = (float **)0x1;
    ppfStack_120 = (float **)(pppfVar12 + (longlong)ppfVar2);
    bVar8 = true;
    ppfVar15 = (float **)0x1;
    arg0 = &ppfStack_118;
    lStack_150 = param_2;
    ppfStack_118 = ppfVar2;
    while (pppfVar12 != (float ***)ppfStack_120) {
      pppfVar1 = pppfVar12 + 1;
      pppfVar11 = pppfVar1;
      pppfVar7 = pppfVar12;
      pppfVar13 = pppfVar9;
      if (bVar8) {
        if (pppfVar1 == (float ***)ppfStack_120) break;
        pppfVar11 = pppfVar12 + 2;
        pppfVar7 = pppfVar1;
        pppfVar13 = pppfVar12;
      }
      pppfVar9 = pppfVar7;
      fVar16 = *(float *)((longlong)pppfVar9 + 4) - *(float *)((longlong)pppfVar13 + 4);
      fVar16 = SQRT(fVar16 * fVar16 +
                    (*(float *)pppfVar9 - *(float *)pppfVar13) *
                    (*(float *)pppfVar9 - *(float *)pppfVar13));
      if (fVar16 <= _DAT_142e36f24) {
        fVar16 = _DAT_142e36f24;
      }
      fVar17 = param_3 / fVar16;
      if (fVar3 <= param_3 / fVar16) {
        fVar17 = fVar3;
      }
      fVar16 = (float)pub_142e32b00(fVar3 / fVar17);
      uVar10 = (longlong)(fVar16 - fVar4) & (longlong)fVar16 >> 0x3f | (longlong)fVar16;
      if (fVar16 < 0.0) {
        uVar10 = 0;
      }
      if (fVar5 < fVar16) {
        uVar10 = 0xffffffffffffffff;
      }
      uVar10 = uVar10 + 1;
      if (uVar10 < 3) {
        uVar10 = 2;
      }
      for (uVar14 = 1; uVar14 < uVar10; uVar14 = uVar14 + 1) {
        if ((longlong)uVar14 < 0) {
          fVar16 = SUB84(*pppfVar13,0);
          fVar17 = (float)((ulonglong)*pppfVar13 >> 0x20);
          fVar19 = SUB84(*pppfVar9,0);
          fVar20 = (float)((ulonglong)*pppfVar9 >> 0x20);
        }
        else {
          fVar16 = SUB84(*pppfVar13,0);
          fVar17 = (float)((ulonglong)*pppfVar13 >> 0x20);
          fVar19 = SUB84(*pppfVar9,0);
          fVar20 = (float)((ulonglong)*pppfVar9 >> 0x20);
        }
        if (ppfVar15 == ppfStack_118) {
          uStack_f1 = 1;
          pdb_142db07d0(arg0);
        }
        fVar18 = (float)uVar14 / ((float)uVar10 + fVar6);
        *(ulonglong *)(pbStack_110 + (longlong)ppfVar15 * 8) =
             CONCAT44(fVar18 * fVar20 + (fVar3 - fVar18) * fVar17,
                      fVar18 * fVar19 + (fVar3 - fVar18) * fVar16);
        ppfVar15 = (float **)((longlong)ppfVar15 + 1);
        ppfStack_108 = ppfVar15;
      }
      bVar8 = false;
      pppfVar12 = pppfVar11;
    }
    ppfStack_138 = ppfStack_108;
    ppfStack_148 = ppfStack_118;
    pcStack_140 = (code *)pbStack_110;
    uStack_f1 = 0;
    pdb_140080c90(&lStack_190,&ppfStack_148,0);
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
  pcStack_140 = pdb_1413fb6a0;
  ppfStack_138 = (float **)lStack_150;
  pcStack_130 = pdb_1413e6ae0;
  ppfStack_148 = (float **)arg0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1433068f8,&ppfStack_148,&UNK_143306938);
}

