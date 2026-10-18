// VA 0x1409d3790, PDB extent 455 bytes
// country_core::render::nani::gpu_world::GpuWorld::update_mesh_atlas_slices
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::GpuWorld::update_mesh_atlas_slices
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 455 */

void pdb_1409d3790(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (param_5 != 0) {
    uVar2 = (ulonglong)((param_3 & 0xff) << 0xe);
    lVar3 = param_5 * 0x10;
    lVar1 = pdb_140e17350(param_1 + 0x18);
    if ((ulonglong)*(uint *)(lVar1 + 0x10) < lVar3 + uVar2) {
      lStack_98 = 0xb;
    }
    else {
      uStack_a8 = 0;
      lStack_a0 = lVar3;
      pdb_140e55470(&lStack_98,param_2,param_1 + 0x18,param_4,lVar3,&uStack_a8,1,uVar2);
      if (lStack_98 == 0xb) goto LAB_1409d383c;
      uStack_b8 = uStack_50;
      uStack_f8 = CONCAT44(uStack_8c,uStack_90);
      uStack_f0 = CONCAT44(uStack_84,uStack_88);
      uStack_e8 = CONCAT44(uStack_7c,uStack_80);
      uStack_e0 = CONCAT44(uStack_74,uStack_78);
      uStack_d8 = CONCAT44(uStack_6c,uStack_70);
      uStack_d0 = CONCAT44(uStack_64,uStack_68);
      uStack_c8 = CONCAT44(uStack_5c,uStack_60);
      uStack_c0 = CONCAT44(uStack_54,uStack_58);
    }
    uStack_90 = (undefined4)uStack_f8;
    uStack_8c = uStack_f8._4_4_;
    uStack_88 = (undefined4)uStack_f0;
    uStack_84 = uStack_f0._4_4_;
    uStack_80 = (undefined4)uStack_e8;
    uStack_7c = uStack_e8._4_4_;
    uStack_78 = (undefined4)uStack_e0;
    uStack_74 = uStack_e0._4_4_;
    uStack_70 = (undefined4)uStack_d8;
    uStack_6c = uStack_d8._4_4_;
    uStack_68 = (undefined4)uStack_d0;
    uStack_64 = uStack_d0._4_4_;
    uStack_60 = (undefined4)uStack_c8;
    uStack_5c = uStack_c8._4_4_;
    uStack_58 = (undefined4)uStack_c0;
    uStack_54 = uStack_c0._4_4_;
    uStack_50 = uStack_b8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14302d918,0x2b,&lStack_98,&UNK_14302d8f8,&UNK_14302d750);
  }
LAB_1409d383c:
  uVar2 = (ulonglong)((param_3 & 0xff) * 0xa0);
  lVar1 = *(longlong *)(param_1 + 0x40 + uVar2);
  lVar3 = 0x50;
  if (!SBORROW8(0,lVar1)) {
    if (lVar1 == -0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14302d768,0x8000000000000001,0x7fffffffffffffff);
    }
    lVar3 = 200;
  }
  *(longlong *)(param_1 + uVar2 + lVar3) = param_5;
  return;
}

