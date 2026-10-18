// VA 0x141b1d5d0, PDB extent 741 bytes
// country_core::render::ssbo::impl$4::new_storage_buffer<country_core::resources::world_raster_defs::Cobblestone2RasterStagingSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$4::new_storage_buffer<country_core::resources::world_raster_defs::Cobblestone2RasterStagingSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 741 */

undefined8 * pdb_141b1d5d0(undefined8 *param_1,undefined8 param_2,byte *param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 unaff_R15;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **ppuStack_a8;
  code *pcStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
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
  byte *pbStack_58;
  undefined4 uStack_4c;
  byte *pbStack_48;
  char cStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (param_3 == (byte *)0x0) {
    pdb_14007ee60();
    param_4 = 0x40000;
    param_3 = pub_1406abae0(0x40000,1);
    if (param_3 == (byte *)0x0) {
      cStack_39 = 0;
      pdb_142dc7e2a(1,0x40000);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
  }
  else {
    if (0x40000 < param_4) {
      puStack_f8 = (undefined8 *)&UNK_143390978;
      puStack_f0 = (undefined8 *)0x49;
      ppuStack_a8 = (undefined **)&puStack_f8;
      pcStack_a0 = pdb_1402ed400;
      cStack_39 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14338d590,&ppuStack_a8,&UNK_14338d5c0);
    }
    uVar7 = 0;
  }
  cVar6 = (char)uVar7;
  pbStack_48 = param_3;
  cStack_39 = cVar6;
  uVar4 = pdb_140e1d1f0(0x40000,0x12,3);
  pbStack_48 = param_3;
  cStack_39 = cVar6;
  uVar4 = pdb_140e1d260(uVar4,1);
  pbStack_48 = param_3;
  cStack_39 = cVar6;
  pdb_1415d1d50(&ppuStack_a8,param_2,&UNK_14338d79f,0x1d,uVar4,param_3,param_4);
  if (ppuStack_a8 == (undefined **)0xb) {
    if (cVar6 != '\0') {
      pub_1406abac0(param_3,0x40000,1);
    }
    ppuStack_a8 = (undefined **)pcStack_a0;
    lVar5 = pdb_140e17350(&ppuStack_a8);
    if ((*(char *)(lVar5 + 0x17) != '\x01') && (lVar2 = *(longlong *)(lVar5 + 0x48), lVar2 != 0)) {
      uVar1 = *(uint *)(lVar5 + 0x10);
      lVar5 = pdb_140e17350(&ppuStack_a8);
      if (*(uint *)(lVar5 + 0x10) <= uVar1) {
        *param_1 = pcStack_a0;
        param_1[1] = lVar2;
        param_1[2] = (ulonglong)uVar1;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14338e120,0x42,&UNK_14338e168);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14338e108);
  }
  uStack_b8 = uStack_68;
  uStack_b4 = uStack_64;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  uStack_c8 = uStack_78;
  uStack_c4 = uStack_74;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  uStack_d8 = uStack_88;
  uStack_d4 = uStack_84;
  uStack_d0 = uStack_80;
  uStack_cc = uStack_7c;
  uStack_e8 = uStack_98;
  uStack_e4 = uStack_94;
  uStack_e0 = uStack_90;
  uStack_dc = uStack_8c;
  puStack_f8 = ppuStack_a8;
  puStack_f0 = (undefined8 *)pcStack_a0;
  pbStack_58 = param_3;
  uStack_4c = uVar7;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_f8,&UNK_143390f58,&UNK_14338d4c8);
}

