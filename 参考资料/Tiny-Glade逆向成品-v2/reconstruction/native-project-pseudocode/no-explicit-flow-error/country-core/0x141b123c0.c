// VA 0x141b123c0, PDB extent 507 bytes
// country_core::render::ssbo::impl$7::new_storage_buffer<country_core::resources::rt::RtBvhSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$7::new_storage_buffer<country_core::resources::rt::RtBvhSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 507 */

undefined8 *
pdb_141b123c0(undefined8 *param_1,undefined8 param_2,undefined *param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ulonglong uVar3;
  undefined **ppuStack_d0;
  code *pcStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
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
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (param_3 == (undefined *)0x0) {
    uVar3 = 0;
LAB_141b1247a:
    uVar1 = pdb_140e1d1f0(0x500000,0x12,1);
    uVar1 = pdb_140e1d260(uVar1,4);
    pdb_1415d1d50(&ppuStack_d0,param_2,&UNK_14338da68,5,uVar1,param_3,uVar3 * 0x50);
    ppuVar2 = ppuStack_d0;
    if (ppuStack_d0 == (undefined **)0xb) {
      *param_1 = pcStack_c8;
      param_1[1] = uVar3;
      return param_1;
    }
  }
  else {
    uVar3 = param_4 / 0x50;
    puStack_80 = (undefined8 *)(param_4 % 0x50);
    if (puStack_80 == (undefined8 *)0x0) {
      ppuStack_d0 = (undefined **)((ulonglong)param_3 & 3);
      if (ppuStack_d0 == (undefined **)0x0) {
        puStack_80 = (undefined8 *)0x0;
        if (0x50004f < param_4) {
          puStack_80 = (undefined8 *)&UNK_14338f993;
          uStack_78 = 0x26;
          ppuStack_d0 = (undefined **)&puStack_80;
          pcStack_c8 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&ppuStack_d0,&UNK_14338d5c0);
        }
        goto LAB_141b1247a;
      }
    }
    else {
      pdb_142dc7fb4(0,&puStack_80,&UNK_143381eb8,0);
    }
    param_3 = &UNK_143381f18;
    ppuVar2 = (undefined **)0x0;
    pcStack_c8 = (code *)pdb_142dc7fb4(0,&ppuStack_d0,&UNK_143381eb8,0);
  }
  uStack_40 = uStack_90;
  uStack_3c = uStack_8c;
  uStack_38 = uStack_88;
  uStack_34 = uStack_84;
  uStack_50 = uStack_a0;
  uStack_4c = uStack_9c;
  uStack_48 = uStack_98;
  uStack_44 = uStack_94;
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  uStack_58 = uStack_a8;
  uStack_54 = uStack_a4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
  uStack_68 = uStack_b8;
  uStack_64 = uStack_b4;
  puStack_80 = ppuVar2;
  uStack_78 = pcStack_c8;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_80,&UNK_143390f58,&UNK_14338d4c8,param_3);
}

