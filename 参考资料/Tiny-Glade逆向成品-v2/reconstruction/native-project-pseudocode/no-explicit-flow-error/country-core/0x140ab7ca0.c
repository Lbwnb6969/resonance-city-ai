// VA 0x140ab7ca0, PDB extent 449 bytes
// country_core::systems::camera_rig::walk::WalkCamera::teleport
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::walk::WalkCamera::teleport
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
   Extent: 449 */

void pdb_140ab7ca0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined **ppuStack_98;
  code *pcStack_90;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  puVar8 = *(undefined8 **)(param_1 + 8);
  lVar7 = *(longlong *)(param_1 + 0x10);
  lVar6 = lVar7 << 4;
  puVar3 = puVar8;
  uStack_70 = param_3;
  do {
    if (lVar6 == 0) {
      puStack_80 = &UNK_14337fa53;
      uStack_78 = 0x22;
      goto LAB_140ab7e32;
    }
    puVar5 = puVar3 + 2;
    puVar4 = (undefined8 *)(**(code **)(puVar3[1] + 0x40))(*puVar3);
    puVar3 = param_2 + 3;
    param_2 = puVar4;
    (*(code *)*puVar3)(&ppuStack_98);
    lVar6 = lVar6 + -0x10;
    puVar3 = puVar5;
  } while ((puVar4 == (undefined8 *)0x0) ||
          (pcStack_90 != (code *)0x2e441b8be050d85b ||
           ppuStack_98 != (undefined **)0x1d5a207d10288a54));
  *puVar4 = uVar2;
  *(undefined4 *)(puVar4 + 1) = uVar1;
  lVar7 = lVar7 << 4;
  while (lVar7 != 0) {
    puVar3 = puVar8 + 2;
    puVar5 = (undefined8 *)(**(code **)(puVar8[1] + 0x40))(*puVar8);
    puVar8 = param_2 + 3;
    param_2 = puVar5;
    (*(code *)*puVar8)(&ppuStack_98);
    lVar7 = lVar7 + -0x10;
    puVar8 = puVar3;
    if ((puVar5 != (undefined8 *)0x0) &&
       (pcStack_90 == (code *)0x4530cb7d9cc0ee63 && ppuStack_98 == (undefined **)0x8ed9b56aa72f687e)
       ) {
      pdb_14052dc80(&ppuStack_98,uStack_70);
      pdb_141b6f7f0(&puStack_80,2,&ppuStack_98);
      *puVar5 = CONCAT44((float)((ulonglong)puStack_80 >> 0x20) * _UNK_14303aa84,
                         SUB84(puStack_80,0) * _DAT_14303aa80);
      return;
    }
  }
  puStack_80 = &UNK_14337fa30;
  uStack_78 = 0x23;
LAB_140ab7e32:
  ppuStack_98 = &puStack_80;
  pcStack_90 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14337f99a,&ppuStack_98,&UNK_14337fa18);
}

