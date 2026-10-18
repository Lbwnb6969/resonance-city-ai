// VA 0x141b138c0, PDB extent 705 bytes
// country_core::render::ssbo::impl$0::new_storage_buffer<country_core::systems::render_loop::indirect_params::DrawIndexedIndirectBuffer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$0::new_storage_buffer<country_core::systems::render_loop::indirect_params::DrawIndexedIndirectBuffer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 705 */

undefined8 pdb_141b138c0(undefined8 param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 unaff_R14;
  byte *pbVar7;
  undefined **ppuStack_f0;
  code *pcStack_e8;
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
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
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
  byte *pbStack_50;
  undefined4 uStack_44;
  byte *pbStack_40;
  char cStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (param_2 == (byte *)0x0) {
    pdb_14007ee60();
    param_2 = pub_1406abae0(0x1cc,4);
    if (param_2 == (byte *)0x0) {
      cStack_31 = 0;
      pdb_142dc7e2a(4,0x1cc);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar6 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    uVar4 = 0x17;
LAB_141b13966:
    cVar5 = (char)uVar6;
    pbStack_40 = param_2;
    cStack_31 = cVar5;
    uVar2 = pdb_140e1d1f0(0x1cc,0x136,1);
    pbStack_40 = param_2;
    cStack_31 = cVar5;
    uVar2 = pdb_140e1d260(uVar2,4);
    pbVar7 = param_2;
    pbStack_40 = param_2;
    cStack_31 = cVar5;
    pdb_1415d1d50(&ppuStack_f0,param_1,&UNK_14338d4f8,0x19,uVar2,param_2,uVar4 * 0x14);
    ppuVar3 = ppuStack_f0;
    uStack_44 = uVar6;
    if (ppuStack_f0 == (undefined **)0xb) {
      if (cVar5 != '\0') {
        pub_1406abac0(param_2,0x1cc,4);
      }
      return pcStack_e8;
    }
  }
  else {
    uVar4 = param_3 / 0x14;
    puStack_a0 = (undefined8 *)(param_3 % 0x14);
    if (puStack_a0 == (undefined8 *)0x0) {
      ppuStack_f0 = (undefined **)((ulonglong)param_2 & 3);
      if (ppuStack_f0 == (undefined **)0x0) {
        if (0x1df < param_3) {
          puStack_a0 = (undefined8 *)&UNK_14338f38c;
          uStack_98 = 0x4e;
          ppuStack_f0 = (undefined **)&puStack_a0;
          pcStack_e8 = pdb_1402ed400;
          cStack_31 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&ppuStack_f0,&UNK_14338d5c0);
        }
        uVar6 = 0;
        puStack_a0 = (undefined8 *)0x0;
        goto LAB_141b13966;
      }
    }
    else {
      pdb_142dc7fb4(0,&puStack_a0,&UNK_143381eb8,0);
    }
    pbVar7 = &UNK_143381f18;
    ppuVar3 = (undefined **)pdb_142dc7fb4(0,&ppuStack_f0,&UNK_143381eb8,0);
    pcStack_e8 = (code *)param_1;
    uStack_44 = (int)unaff_R14;
  }
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  uStack_58 = uStack_a8;
  uStack_54 = uStack_a4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
  uStack_68 = uStack_b8;
  uStack_64 = uStack_b4;
  uStack_80 = uStack_d0;
  uStack_7c = uStack_cc;
  uStack_78 = uStack_c8;
  uStack_74 = uStack_c4;
  uStack_90 = uStack_e0;
  uStack_8c = uStack_dc;
  uStack_88 = uStack_d8;
  uStack_84 = uStack_d4;
  puStack_a0 = ppuVar3;
  uStack_98 = pcStack_e8;
  pbStack_50 = param_2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_a0,&UNK_143390f58,&UNK_14338d4c8,pbVar7);
}

