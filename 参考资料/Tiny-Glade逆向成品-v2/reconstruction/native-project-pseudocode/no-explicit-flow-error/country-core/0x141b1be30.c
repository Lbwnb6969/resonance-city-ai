// VA 0x141b1be30, PDB extent 731 bytes
// country_core::render::ssbo::impl$4::new_storage_buffer<country_core::render::normals_debug::NormalDebugSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$4::new_storage_buffer<country_core::render::normals_debug::NormalDebugSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 731 */

undefined8 *
pdb_141b1be30(undefined8 *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong unaff_R14;
  undefined **ppuStack_d8;
  code *pcStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
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
  undefined8 *puStack_88;
  undefined8 uStack_80;
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
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (param_3 == 0) {
LAB_141b1bec6:
    uVar4 = pdb_140e1d1f0(320000,0x12,3);
    uVar4 = pdb_140e1d260(uVar4,4);
    pdb_1415d1d50(&ppuStack_d8,param_2,&UNK_14338df5c,0xb,uVar4,param_3,unaff_R14);
    if (ppuStack_d8 != (undefined **)0xb) {
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
      uStack_78 = uStack_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      puStack_88 = ppuStack_d8;
      uStack_80 = pcStack_d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_88,&UNK_143390f58,&UNK_14338d4c8);
    }
    uStack_38 = pcStack_d0;
    lVar5 = pdb_140e17350(&uStack_38);
    if ((*(char *)(lVar5 + 0x17) != '\x01') && (uVar2 = *(ulonglong *)(lVar5 + 0x48), uVar2 != 0)) {
      uVar1 = *(uint *)(lVar5 + 0x10);
      lVar5 = pdb_140e17350(&uStack_38);
      if (uVar1 < *(uint *)(lVar5 + 0x10)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14338e120,0x42,&UNK_14338e168);
      }
      puStack_88 = (undefined8 *)((ulonglong)uVar1 & 0x1f);
      if ((uVar1 & 0x1f) == 0) {
        ppuStack_d8 = (undefined **)(uVar2 & 3);
        if (ppuStack_d8 == (undefined **)0x0) {
          *param_1 = pcStack_d0;
          param_1[1] = uVar2;
          param_1[2] = (ulonglong)(uVar1 >> 5);
          return param_1;
        }
        pdb_142dc7fb4(0,&ppuStack_d8,&UNK_14338e180,0,uVar4,&UNK_14338e188);
      }
      else {
        pdb_142dc7fb4(0,&puStack_88,&UNK_14338e180,0,uVar4,&UNK_14338e1a0);
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  else {
    puStack_88 = (undefined8 *)(param_4 & 0x1f);
    if (puStack_88 == (undefined8 *)0x0) {
      ppuStack_d8 = (undefined **)(param_3 & 3);
      if (ppuStack_d8 == (undefined **)0x0) {
        unaff_R14 = param_4;
        if (0x4e21f < param_4) {
          puStack_88 = (undefined8 *)&UNK_1433905d7;
          uStack_80 = 0x34;
          ppuStack_d8 = (undefined **)&puStack_88;
          pcStack_d0 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&ppuStack_d8,&UNK_14338d5c0);
        }
        goto LAB_141b1bec6;
      }
    }
    else {
      pdb_142dc7fb4(0,&puStack_88,&UNK_143381eb8,0);
    }
    pdb_142dc7fb4(0,&ppuStack_d8,&UNK_143381eb8,0);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14338e108);
}

