// VA 0x14086e890, PDB extent 401 bytes
// system_decorator::ui_systems::ui_place_decorator::ui_place_decorator::closure$18
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_place_decorator::ui_place_decorator::closure$18
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_place_decorator.rs
   Extent: 401 */

undefined8 pdb_14086e890(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  int iStack_68;
  
  lVar8 = pdb_140a61160(*(undefined8 *)*param_1);
  pdb_140a61500(&iStack_78);
  if (iStack_78 == 3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300dcd8);
  }
  iStack_78 = iStack_68;
  uVar1 = *(ulonglong *)(lVar8 + 0x10);
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 == 1) {
    lVar8 = *(longlong *)(lVar8 + 8);
    if (iStack_68 != *(int *)(lVar8 + 0x20)) {
      return 0;
    }
    uVar9 = 0;
  }
  else {
    uVar9 = pdb_1400aede0(lVar8 + 0x38,&iStack_78);
    uVar10 = pdb_1414af660(lVar8,uVar9,&iStack_78);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar9,uVar1,&UNK_143311df8);
    }
    lVar8 = *(longlong *)(lVar8 + 8);
    if (lVar8 == 0) {
      return 0;
    }
  }
  fVar7 = _DAT_143008210;
  fVar6 = _DAT_142e37934;
  lVar2 = *(longlong *)(lVar8 + 0x10 + uVar9 * 0x28);
  if (lVar2 != 0) {
    lVar8 = *(longlong *)(lVar8 + 8 + uVar9 * 0x28);
    puVar3 = (undefined8 *)param_1[1];
    pfVar4 = (float *)param_1[2];
    puVar5 = (undefined8 *)param_1[3];
    lVar11 = 0;
    do {
      pdb_140c45a20(&iStack_78,*puVar3,*(undefined4 *)(lVar8 + lVar11));
      if (iStack_78 == 1) {
        fVar12 = fStack_74 - (float)*puVar5;
        fVar13 = fStack_6c - (float)((ulonglong)*puVar5 >> 0x20);
        fVar12 = SQRT(fVar13 * fVar13 + fVar12 * fVar12);
        if (fVar12 <= fVar6) {
          fVar12 = fVar6;
        }
        if ((fStack_70 - *pfVar4) / fVar12 < fVar7) {
          return 1;
        }
      }
      lVar11 = lVar11 + 8;
    } while (lVar2 << 3 != lVar11);
  }
  return 0;
}

