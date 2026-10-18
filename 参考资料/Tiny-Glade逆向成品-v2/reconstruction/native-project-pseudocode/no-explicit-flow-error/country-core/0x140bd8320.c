// VA 0x140bd8320, PDB extent 510 bytes
// country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
   Extent: 510 */

undefined8 *
pdb_140bd8320(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

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
  
  lVar8 = param_2;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar6 = *plVar5;
    lVar8 = plVar5[1];
  }
  else {
    lVar6 = pdb_140f4fd10();
    *plVar5 = lVar6;
    plVar5[1] = lVar8;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar6 + 1;
  uVar4 = _UNK_143064e58;
  uVar3 = _DAT_143064e50;
  uVar2 = _UNK_143064e48;
  uVar1 = _DAT_143064e40;
  lVar9 = lVar8;
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar7 = *plVar5;
    lVar9 = plVar5[1];
  }
  else {
    lVar7 = pdb_140f4fd10();
    *plVar5 = lVar7;
    plVar5[1] = lVar9;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar7 + 1;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  param_1[7] = uVar1;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = lVar6;
  param_1[0xc] = lVar8;
  *param_1 = 0x8000000000000000;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = uVar4;
  param_1[0x11] = lVar7;
  param_1[0x12] = lVar9;
  return param_1;
}

