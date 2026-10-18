// VA 0x140c11130, PDB extent 333 bytes
// country_core::systems::terrain::terrain_hover_idx::terrain_hover_idx
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/terrain_hover_idx.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::terrain::terrain_hover_idx::terrain_hover_idx
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/terrain_hover_idx.rs
   Extent: 333 */

void pdb_140c11130(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  float fVar12;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar3 = *param_2;
  lVar4 = param_2[4];
  pcVar5 = (char *)param_2[8];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puVar6 = (undefined4 *)param_3[2];
  *puVar6 = uVar2;
  param_3 = (undefined8 *)*param_3;
  *param_3 = 0;
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\0') {
    if (*(int *)((char *)*param_1 + 8) - 1U < 5) {
      return;
    }
  }
  else if (cVar1 != '\x05') {
    return;
  }
  puVar7 = (undefined8 *)pdb_140bf45b0(uVar3,&UNK_14331ca40);
  iVar11 = -1;
  if ((puVar7 != (undefined8 *)0x0) &&
     (lVar8 = (**(code **)(puVar7[1] + 0x18))(*puVar7), lVar8 != 0)) {
    if (*(longlong *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_143068640);
    }
    iVar11 = *(int *)(*(longlong *)(lVar8 + 8) + 0x10);
  }
  puVar7 = (undefined8 *)(lVar4 + 0x20);
  puVar10 = (undefined8 *)(lVar4 + 0x28);
  if (*(char *)(lVar4 + 0x298) == '\0') {
    puVar10 = (undefined8 *)(lVar4 + 0x10);
    puVar7 = (undefined8 *)(lVar4 + 8);
  }
  uStack_40 = *puVar10;
  uStack_48 = *puVar7;
  pcVar9 = "";
  if (*pcVar5 != '\0') {
    pcVar9 = pcVar5 + 4;
  }
  fVar12 = (float)pdb_140a7d8d0(&uStack_48,(undefined8 *)(lVar4 + 0x10),*(undefined4 *)(pcVar9 + 8),
                                _DAT_143006a28,0x43020000);
  if (fVar12 <= 0.0) {
    if (iVar11 == -1) {
      return;
    }
  }
  else {
    pcVar9 = "";
    if (*pcVar5 != '\0') {
      pcVar9 = pcVar5 + 4;
    }
    if (iVar11 == -1) {
      return;
    }
    if (*(float *)(pcVar9 + 4) <= _DAT_142e36f50) {
      return;
    }
  }
  *puVar6 = uVar2;
  *param_3 = 1;
  param_3[1] = (longlong)iVar11;
  return;
}

