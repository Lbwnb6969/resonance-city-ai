// VA 0x141b0fbf0, PDB extent 359 bytes
// country_core::render::ssbo::TypedStorageBuffer::new<country_core::shader::inc::stone_foundation_surface::StoneFoundationSurfaceInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::TypedStorageBuffer::new<country_core::shader::inc::stone_foundation_surface::StoneFoundationSurfaceInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 359 */

void pdb_141b0fbf0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
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
  undefined *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
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
  if (param_2 == 0) {
    puStack_c8 = &UNK_14338f84c;
    uStack_c0 = 0x57;
    puStack_78 = &UNK_14338df40;
    pcStack_70 = pdb_1402ed420;
    uStack_68 = &puStack_c8;
    uStack_60 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14338d511,&puStack_78,&UNK_14338d578);
  }
  uVar1 = pdb_140e1d1f0(param_3 << 6,0x12,1);
  uVar1 = pdb_140e1d260(uVar1,0x10);
  pdb_1415d1d50(&puStack_78,param_1,&UNK_14338df1a,0x22,uVar1,param_2,param_3 << 6);
  if (puStack_78 == (undefined *)0xb) {
    return;
  }
  uStack_88 = uStack_38;
  uStack_84 = uStack_34;
  uStack_80 = uStack_30;
  uStack_7c = uStack_2c;
  uStack_98 = uStack_48;
  uStack_94 = uStack_44;
  uStack_90 = uStack_40;
  uStack_8c = uStack_3c;
  uStack_a8 = uStack_58;
  uStack_a4 = uStack_54;
  uStack_a0 = uStack_50;
  uStack_9c = uStack_4c;
  uStack_b8 = (undefined4)uStack_68;
  uStack_b4 = uStack_68._4_4_;
  uStack_b0 = (undefined4)uStack_60;
  uStack_ac = uStack_60._4_4_;
  puStack_c8 = puStack_78;
  uStack_c0 = pcStack_70;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_c8,&UNK_143390f58,&UNK_14338d4c8);
}

