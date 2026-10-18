// VA 0x141b0ef20, PDB extent 343 bytes
// country_core::render::ssbo::TypedStorageBuffer::new<country_core::resources::sparkle::SparkleSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::TypedStorageBuffer::new<country_core::resources::sparkle::SparkleSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 343 */

void pdb_141b0ef20(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
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
  if ((param_2 != 0) && (unaff_RBX = param_3, 0x6000 < param_3)) {
    puStack_78 = (undefined8 *)&UNK_14338fb9e;
    uStack_70 = 0x2d;
    ppuStack_c8 = (undefined **)&puStack_78;
    pcStack_c0 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14338d590,&ppuStack_c8,&UNK_14338d5c0);
  }
  uVar1 = pdb_140e1d1f0(0xc0000,0x12,1);
  uVar1 = pdb_140e1d260(uVar1,4);
  pdb_1415d1d50(&ppuStack_c8,param_1,&UNK_14338dc0c,0xb,uVar1,param_2,unaff_RBX << 5);
  if (ppuStack_c8 == (undefined **)0xb) {
    return;
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
  puStack_78 = ppuStack_c8;
  uStack_70 = pcStack_c0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_78,&UNK_143390f58,&UNK_14338d4c8);
}

