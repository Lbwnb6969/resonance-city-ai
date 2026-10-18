// VA 0x1414748a0, PDB extent 857 bytes
// system_wall_constructor::construct_elevation_supports::circle_categorize::circle_categorize
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_categorize.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::circle_categorize::circle_categorize
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/circle_categorize.rs
   Extent: 857 */

bool pdb_1414748a0(float *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar4 = _DAT_142e36f28;
  fVar1 = param_1[2];
  if (_DAT_14330bd68 <= fVar1) {
    fVar16 = (_DAT_14330bd6c + fVar1) / _DAT_14300c294;
    fVar20 = 0.0;
    fVar17 = 0.0;
    if (0.0 <= fVar16) {
      fVar17 = fVar16;
    }
    fVar16 = _DAT_142e36f28;
    if (fVar17 <= _DAT_142e36f28) {
      fVar16 = fVar17;
    }
    fVar21 = (_DAT_142e3788c - (fVar16 + fVar16)) * fVar16 * fVar16;
    fVar16 = (_DAT_142e36f28 - fVar21) * _DAT_142e37988;
    fVar21 = fVar21 * _DAT_142e382c0;
    fVar17 = (float)pub_142e329c0(fVar1 + fVar1);
    uVar9 = (longlong)(fVar17 - _DAT_142e36f2c) & (longlong)fVar17 >> 0x3f | (longlong)fVar17;
    if (fVar17 < 0.0) {
      uVar9 = 0;
    }
    uVar12 = 0xffffffffffffffff;
    if (fVar17 <= _DAT_142e36f30) {
      uVar12 = uVar9;
    }
    fVar17 = (fVar1 + fVar1) / (float)uVar12;
    lVar2 = *(longlong *)(param_3 + 8);
    lVar3 = *(longlong *)(param_3 + 0x10);
    fVar22 = 0.0;
    uVar9 = 0;
    do {
      uVar6 = uVar9 + (uVar9 < uVar12);
      uVar13 = 0;
      do {
        uVar14 = uVar13 + (uVar13 < uVar12);
        fVar19 = (*param_1 - fVar1) + (float)uVar9 * fVar17;
        fVar18 = (float)uVar13 * fVar17 + (param_1[1] - fVar1);
        cVar5 = pdb_140def670(param_1,fVar19,fVar18);
        if (cVar5 != '\0') {
          fVar22 = fVar22 + fVar4;
          lVar10 = lVar2;
          lVar11 = lVar3 * 0x50;
          do {
            if (lVar11 == 0) goto LAB_141474bb2;
            lVar7 = pdb_140b54f80(param_4,*(undefined8 *)(lVar10 + 0x38),&UNK_14330bdc8);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14330bde0);
            }
            lVar10 = lVar10 + 0x50;
            uVar8 = pdb_14092f900(lVar7);
            cVar5 = pdb_140a84de0(uVar8,fVar19,fVar18);
            lVar11 = lVar11 + -0x50;
          } while (cVar5 == '\0');
          fVar20 = fVar20 + fVar4;
        }
LAB_141474bb2:
      } while ((uVar13 < uVar12) && (uVar13 = uVar14, uVar14 <= uVar12));
    } while ((uVar9 < uVar12) && (uVar9 = uVar6, uVar6 <= uVar12));
    bVar15 = fVar20 / fVar22 < fVar21 + fVar16;
  }
  else {
    bVar15 = *(longlong *)(param_3 + 0x10) == 0;
  }
  return bVar15;
}

