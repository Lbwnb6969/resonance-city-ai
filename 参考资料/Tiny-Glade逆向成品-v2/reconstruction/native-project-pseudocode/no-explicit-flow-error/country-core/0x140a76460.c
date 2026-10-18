// VA 0x140a76460, PDB extent 271 bytes
// country_core::systems::camera_rig::free::impl$1::rotate_yaw_pitch
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::free::impl$1::rotate_yaw_pitch
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/free.rs
   Extent: 271 */

void pdb_140a76460(longlong param_1,float *param_2,float param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  float in_XMM1_Da;
  float fVar7;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_40;
  
  lVar5 = *(longlong *)(param_1 + 0x10) << 4;
  puVar3 = *(undefined8 **)(param_1 + 8);
  do {
    if (lVar5 == 0) {
      puStack_68 = &UNK_14337fa30;
      uStack_60 = 0x23;
      ppuStack_78 = &puStack_68;
      pcStack_70 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14337f99a,&ppuStack_78,&UNK_14337fa18);
    }
    puVar1 = puVar3 + 2;
    pfVar4 = (float *)(**(code **)(puVar3[1] + 0x40))(*puVar3);
    pfVar2 = param_2 + 6;
    param_2 = pfVar4;
    (**(code **)pfVar2)(&ppuStack_78);
    lVar5 = lVar5 + -0x10;
    puVar3 = puVar1;
  } while ((pfVar4 == (float *)0x0) ||
          (pcStack_70 != (code *)0x4530cb7d9cc0ee63 ||
           ppuStack_78 != (undefined **)0x8ed9b56aa72f687e));
  param_3 = param_3 * _DAT_142e36f50;
  puStack_40 = &UNK_141b783b4;
  fVar6 = (float)pub_142e32a70(in_XMM1_Da * _DAT_142e36f50 + *pfVar4,_DAT_143398c44);
  *pfVar4 = fVar6;
  param_3 = param_3 + pfVar4[1];
  fVar6 = _DAT_14304ac24;
  if (_DAT_14304ac24 <= param_3) {
    fVar6 = param_3;
  }
  fVar7 = _DAT_142f95198;
  if (fVar6 <= _DAT_142f95198) {
    fVar7 = fVar6;
  }
  pfVar4[1] = fVar7;
  return;
}

