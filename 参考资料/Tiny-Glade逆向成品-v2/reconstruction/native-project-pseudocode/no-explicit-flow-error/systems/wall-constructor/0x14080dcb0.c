// VA 0x14080dcb0, PDB extent 312 bytes
// system_wall_constructor::construct_walls::construct_walls::closure$12
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_walls::construct_walls::closure$12
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_walls.rs
   Extent: 312 */

void pdb_14080dcb0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 auStack_c0 [8];
  undefined8 uStack_80;
  longlong lStack_40;
  longlong lStack_38;
  
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)puVar1[2] = *(undefined4 *)((longlong)puVar1 + 0x1c);
  puVar2 = (ulonglong *)param_1[1];
  uVar11 = *puVar2;
  lVar10 = pdb_141456830(*puVar1);
  lVar3 = param_1[2];
  cVar6 = pdb_1408ff980(lVar3 + 0x29f);
  if (cVar6 == '\0') {
    iVar8 = pdb_14094ef20(*(undefined4 *)(lVar3 + 0x274));
  }
  else {
    uVar7 = pdb_1409cf7d0(*(undefined8 *)param_1[3],*puVar2);
    uVar11 = (ulonglong)uVar7;
    pdb_1409cf8c0(auStack_c0);
    iVar8 = pdb_140947ef0(auStack_c0);
  }
  if (iVar8 != 0) {
    uVar7 = 0x1000000;
    if (iVar8 != 1) {
      uVar7 = 0x2000000;
    }
    uVar9 = pdb_1409012c0(uVar11 & 0xffffffff);
    uVar11 = (ulonglong)(uVar9 | uVar7);
  }
  *(int *)(lVar10 + 0x58) = (int)uVar11;
  *(undefined8 *)(lVar10 + 0x50) = 0;
  lStack_40 = pdb_140a0c9b0(param_2);
  lStack_38 = lStack_40 + uVar11 * 0x24;
  auStack_c0[0] = 0;
  uStack_80 = 0;
  pdb_1413e78e0(lVar10 + 0x40,auStack_c0);
  plVar4 = (longlong *)param_1[4];
  *(undefined4 *)plVar4[2] = *(undefined4 *)((longlong)plVar4 + 0x1c);
  lVar3 = *plVar4;
  lVar10 = *(longlong *)(lVar3 + 0x30);
  uVar5 = *(undefined8 *)(lVar3 + 0x40);
  if (lVar10 == *(longlong *)(lVar3 + 0x20)) {
    pdb_142d7e8a0(lVar3 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar10 * 8) = uVar5;
  *(longlong *)(lVar3 + 0x30) = lVar10 + 1;
  *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
  return;
}

