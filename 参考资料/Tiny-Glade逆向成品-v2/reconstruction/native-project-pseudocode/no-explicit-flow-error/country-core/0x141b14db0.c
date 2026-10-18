// VA 0x141b14db0, PDB extent 487 bytes
// country_core::render::ssbo::impl$0::new_storage_buffer<country_core::systems::render_loop::compute_passes::path_pebbles::PebblePlacementSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$0::new_storage_buffer<country_core::systems::render_loop::compute_passes::path_pebbles::PebblePlacementSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 487 */

void pdb_141b14db0(undefined8 param_1,undefined *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ulonglong unaff_RBX;
  undefined **ppuStack_c8;
  code *pcStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (param_2 == (undefined *)0x0) {
LAB_141b14e2e:
    uVar1 = pdb_140e1d1f0(0x6c00,0x32,1);
    uVar1 = pdb_140e1d260(uVar1,4);
    pdb_1415d1d50(&ppuStack_c8,param_1,&UNK_14338dbb7,0xf,uVar1,param_2,unaff_RBX * 0x30);
    ppuVar2 = ppuStack_c8;
    if (ppuStack_c8 == (undefined **)0xb) {
      return;
    }
  }
  else {
    puStack_78 = (undefined8 *)(param_3 + (param_3 / 3 & 0xfffffffffffffff0) * -3);
    if (puStack_78 == (undefined8 *)0x0) {
      ppuStack_c8 = (undefined **)((ulonglong)param_2 & 3);
      if (ppuStack_c8 == (undefined **)0x0) {
        if (0x6c2f < param_3) {
          puStack_78 = (undefined8 *)&UNK_14339026c;
          uStack_70 = 0x55;
          ppuStack_c8 = (undefined **)&puStack_78;
          pcStack_c0 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&ppuStack_c8,&UNK_14338d5c0);
        }
        unaff_RBX = (ulonglong)(((uint)param_3 & 0xffff) / 0x30);
        puStack_78 = (undefined8 *)0x0;
        goto LAB_141b14e2e;
      }
    }
    else {
      pdb_142dc7fb4(0,&puStack_78,&UNK_143381eb8,0);
    }
    param_2 = &UNK_143381f18;
    ppuVar2 = (undefined **)0x0;
    pcStack_c0 = (code *)pdb_142dc7fb4(0,&ppuStack_c8,&UNK_143381eb8,0);
  }
  uStack_38 = uStack_88;
  uStack_34 = uStack_84;
  uStack_30 = uStack_80;
  uStack_2c = uStack_7c;
  uStack_48 = uStack_98;
  uStack_44 = uStack_94;
  uStack_40 = uStack_90;
  uStack_3c = uStack_8c;
  uStack_58 = uStack_a8;
  uStack_54 = uStack_a4;
  uStack_50 = uStack_a0;
  uStack_4c = uStack_9c;
  uStack_68 = uStack_b8;
  uStack_64 = uStack_b4;
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  puStack_78 = ppuVar2;
  uStack_70 = pcStack_c0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_78,&UNK_143390f58,&UNK_14338d4c8,param_2);
}

