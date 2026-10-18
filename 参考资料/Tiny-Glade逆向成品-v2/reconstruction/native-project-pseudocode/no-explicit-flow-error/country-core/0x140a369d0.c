// VA 0x140a369d0, PDB extent 452 bytes
// country_core::systems::main_camera::reset_camera
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::main_camera::reset_camera
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
   Extent: 452 */

void pdb_140a369d0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  longlong lStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (4 < *_DAT_143ca8e90) {
    uStack_518 = 0;
    puStack_510 = &UNK_14303b06f;
    uStack_508 = 0x22;
    uStack_500 = 0;
    puStack_4f8 = &UNK_14303b040;
    uStack_4f0 = 0x2e;
    uStack_4e8 = 5;
    puStack_4e0 = &UNK_14303b06f;
    uStack_4d8 = 0x22;
    uStack_4d0 = 0x12b00000001;
    puStack_4c8 = &UNK_14303b02b;
    uStack_4c0 = 0x2b;
    pdb_140f332f0(&uStack_29,&uStack_518);
  }
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar1 = *param_1;
  pdb_140a352e0(&uStack_518,*(undefined4 *)(lVar1 + 0x4d8));
  lStack_38 = lVar1;
  pdb_1404cc260(lVar1);
  pub_142e32760(lStack_38,&uStack_518,0x4e0);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  plVar2 = (longlong *)*param_2;
  if (*plVar2 != 0) {
    pub_1406abac0((byte *)plVar2[1],*plVar2 * 0x24,4);
  }
  *plVar2 = 0;
  plVar2[1] = 4;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  plVar2[4] = 0;
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar1 = *param_3;
  lVar3 = *(longlong *)(lVar1 + 0x30);
  uVar4 = *(undefined8 *)(lVar1 + 0x40);
  if (lVar3 == *(longlong *)(lVar1 + 0x20)) {
    pdb_142d7e8a0(lVar1 + 0x20);
  }
  *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + lVar3 * 8) = uVar4;
  *(longlong *)(lVar1 + 0x30) = lVar3 + 1;
  *(longlong *)(lVar1 + 0x40) = *(longlong *)(lVar1 + 0x40) + 1;
  return;
}

