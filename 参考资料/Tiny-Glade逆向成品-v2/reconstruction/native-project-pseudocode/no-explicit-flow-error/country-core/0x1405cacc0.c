// VA 0x1405cacc0, PDB extent 664 bytes
// country_core::resources::walls::decorator_archivist::impl$1::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::impl$1::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 664 */

void pdb_1405cacc0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar6 = *plVar5;
    param_2 = plVar5[1];
  }
  else {
    lVar6 = pdb_140f4fd10();
    *plVar5 = lVar6;
    plVar5[1] = param_2;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar6 + 1;
  uVar4 = _UNK_142f70768;
  uVar3 = _DAT_142f70760;
  uVar2 = _UNK_142f70758;
  uVar1 = _DAT_142f70750;
  lVar10 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar7 = *plVar5;
    lVar10 = plVar5[1];
  }
  else {
    lVar7 = pdb_140f4fd10();
    *plVar5 = lVar7;
    plVar5[1] = lVar10;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar7 + 1;
  lVar11 = lVar10;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar8 = *plVar5;
    lVar11 = plVar5[1];
  }
  else {
    lVar8 = pdb_140f4fd10();
    *plVar5 = lVar8;
    plVar5[1] = lVar11;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar8 + 1;
  lVar12 = lVar11;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar9 = *plVar5;
    lVar12 = plVar5[1];
  }
  else {
    lVar9 = pdb_140f4fd10();
    *plVar5 = lVar9;
    plVar5[1] = lVar12;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar9 + 1;
  param_1[4] = lVar6;
  param_1[5] = param_2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[0x18] = 0;
  param_1[0x2a] = 0;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = uVar4;
  param_1[10] = lVar7;
  param_1[0xb] = lVar10;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  param_1[0x10] = lVar8;
  param_1[0x11] = lVar11;
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar2;
  param_1[0x14] = uVar3;
  param_1[0x15] = uVar4;
  param_1[0x16] = lVar9;
  param_1[0x17] = lVar12;
  return;
}

