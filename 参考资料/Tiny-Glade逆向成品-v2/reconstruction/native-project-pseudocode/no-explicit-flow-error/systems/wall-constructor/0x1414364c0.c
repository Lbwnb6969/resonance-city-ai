// VA 0x1414364c0, PDB extent 436 bytes
// system_wall_constructor::utils::half_timber::get_window_aabb
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::half_timber::get_window_aabb
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/half_timber.rs
   Extent: 436 */

void pdb_1414364c0(float *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lStack_60;
  byte *pbStack_58;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  undefined8 uVar2;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar5 = *param_2;
  if (lVar5 == 1) {
    puVar6 = (undefined8 *)pdb_140901130(param_2,&UNK_143309be0);
    uVar1 = *puVar6;
    uVar2 = *puVar6;
    if ((char)param_3 == '\t') {
      pdb_1414dc910();
    }
    else {
      pdb_1414dca40(&lStack_60,*(undefined1 *)((longlong)param_2 + 0x59));
    }
    if ((CONCAT44(uStack_4c,fStack_50) == 0) ||
       (pbStack_58 + CONCAT44(uStack_4c,fStack_50) * 8 + -8 == (byte *)0x0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143309bf8);
    }
    uVar3 = *(undefined8 *)(pbStack_58 + CONCAT44(uStack_4c,fStack_50) * 8 + -8);
    fVar11 = (float)uVar3;
    fVar8 = (float)((ulonglong)uVar3 >> 0x20) + _UNK_1433097e4;
    fVar9 = fVar11 + _UNK_1433097e8;
    fVar10 = *(float *)(pbStack_58 + 4) + _UNK_1433097ec;
    *param_1 = (float)uVar1 - (fVar11 + _DAT_1433097e0);
    param_1[1] = fVar8 + (float)((ulonglong)uVar1 >> 0x20);
    param_1[2] = fVar9 + (float)uVar2;
    param_1[3] = fVar10 + (float)((ulonglong)uVar2 >> 0x20);
    if (lStack_60 != 0) {
      pub_1406abac0(pbStack_58,lStack_60 << 3,4);
    }
  }
  else {
    cVar4 = *(char *)((longlong)param_2 + 0x59);
    pdb_1424bceb0(&lStack_60,param_4,param_3,cVar4);
    puVar7 = (undefined4 *)pdb_140901130(param_2,&UNK_143309c10);
    fStack_44 = fStack_44 - fStack_48;
    fVar11 = fStack_50 + _DAT_142e3787c;
    if (fStack_50 + _DAT_142e3787c <= _DAT_142e3c620) {
      fVar11 = _DAT_142e3c620;
    }
    if (lVar5 == 0) {
      fStack_44 = fStack_44 + _DAT_142e3787c;
    }
    else if ((int)lVar5 == 2) {
      if (cVar4 == '\x03') {
        fVar11 = fVar11 + _DAT_142f60fec;
      }
      fStack_44 = fStack_44 + _DAT_142e3798c;
    }
    pdb_140deead0(param_1,*puVar7,puVar7[1],fVar11,fStack_44);
  }
  return;
}

