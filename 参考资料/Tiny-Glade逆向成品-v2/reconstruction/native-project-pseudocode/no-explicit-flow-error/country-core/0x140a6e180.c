// VA 0x140a6e180, PDB extent 239 bytes
// country_core::systems::camera_rig::free::FreeCamera::get_position
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::camera_rig::free::FreeCamera::get_position
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
   Extent: 239 */

undefined8 * pdb_140a6e180(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  lVar5 = param_2[2] << 4;
  puVar3 = (undefined8 *)param_2[1];
  do {
    if (lVar5 == 0) {
      puStack_48 = &UNK_14337fa53;
      uStack_40 = 0x22;
      ppuStack_58 = &puStack_48;
      pcStack_50 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14337f99a,&ppuStack_58,&UNK_14337fa98);
    }
    puVar1 = puVar3 + 2;
    puVar4 = (undefined8 *)(**(code **)(puVar3[1] + 0x38))(*puVar3);
    puVar3 = param_2 + 3;
    param_2 = puVar4;
    (*(code *)*puVar3)(&ppuStack_58);
    lVar5 = lVar5 + -0x10;
    puVar3 = puVar1;
  } while ((puVar4 == (undefined8 *)0x0) ||
          (pcStack_50 != (code *)0x2e441b8be050d85b ||
           ppuStack_58 != (undefined **)0x1d5a207d10288a54));
  uVar2 = *(undefined4 *)(puVar4 + 1);
  *param_1 = *puVar4;
  *(undefined4 *)(param_1 + 1) = uVar2;
  return param_1;
}

