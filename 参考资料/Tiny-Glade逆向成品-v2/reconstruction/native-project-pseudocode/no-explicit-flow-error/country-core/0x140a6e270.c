// VA 0x140a6e270, PDB extent 225 bytes
// country_core::systems::camera_rig::free::FreeCamera::get_yaw_pitch
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::camera_rig::free::FreeCamera::get_yaw_pitch
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
   Extent: 225 */

undefined4 pdb_140a6e270(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined **ppuStack_58;
  code *pcStack_50;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(longlong *)(param_1 + 0x10) << 4;
  puVar2 = *(undefined8 **)(param_1 + 8);
  do {
    if (lVar4 == 0) {
      puStack_40 = &UNK_14337fa30;
      uStack_38 = 0x23;
      ppuStack_58 = &puStack_40;
      pcStack_50 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14337f99a,&ppuStack_58,&UNK_14337fa98);
    }
    puVar1 = puVar2 + 2;
    puVar3 = (undefined4 *)(**(code **)(puVar2[1] + 0x38))(*puVar2);
    puVar2 = (undefined8 *)(param_2 + 6);
    param_2 = puVar3;
    (*(code *)*puVar2)(&ppuStack_58);
    lVar4 = lVar4 + -0x10;
    puVar2 = puVar1;
  } while ((puVar3 == (undefined4 *)0x0) ||
          (pcStack_50 != (code *)0x4530cb7d9cc0ee63 ||
           ppuStack_58 != (undefined **)0x8ed9b56aa72f687e));
  return *puVar3;
}

