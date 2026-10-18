// VA 0x141b16c80, PDB extent 855 bytes
// country_core::render::ssbo::impl$0::new_storage_buffer<country_core::asset_libraries::color_library::ColorLibrarySsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::ssbo::impl$0::new_storage_buffer<country_core::asset_libraries::color_library::ColorLibrarySsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 855 */

undefined8 pdb_141b16c80(undefined8 param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 unaff_R14;
  byte *pbVar6;
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined *puStack_a0;
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
  undefined8 uStack_48;
  byte *pbStack_40;
  char cStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (param_2 == (byte *)0x0) {
    cStack_31 = 0;
    pdb_1417cfd20(&uStack_2f8);
    if ((int)uStack_2f8 == 1) {
      pdb_14007ee60();
      param_2 = pub_1406abab0(0x250,4);
      if (param_2 == (byte *)0x0) {
        cStack_31 = 0;
        pdb_142dc7e2a(4,0x250);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      pub_142e32760(param_2,(longlong)&uStack_2f8 + 4,0x250);
      unaff_R14 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    }
    else {
      unaff_R14 = 0;
      param_2 = (byte *)0x0;
    }
    uVar4 = 1;
LAB_141b16d57:
    cVar5 = (char)unaff_R14;
    pbStack_40 = param_2;
    cStack_31 = cVar5;
    uVar2 = pdb_140e1d1f0(0x250,10,1);
    pbStack_40 = param_2;
    cStack_31 = cVar5;
    uVar2 = pdb_140e1d260(uVar2,4);
    pbVar6 = param_2;
    pbStack_40 = param_2;
    cStack_31 = cVar5;
    pdb_1415d1d50(&uStack_2f8,param_1,&UNK_14338df50,0xc,uVar2,param_2,uVar4 * 0x250);
    puVar3 = (undefined *)uStack_2f8;
    if (uStack_2f8 == (undefined **)0xb) {
      if (cVar5 != '\0') {
        pub_1406abac0(param_2,0x250,4);
      }
      return pcStack_2f0;
    }
  }
  else {
    uVar4 = param_3 / 0x250;
    puStack_a0 = (undefined *)(param_3 % 0x250);
    if (puStack_a0 == (undefined *)0x0) {
      uStack_2f8 = (undefined **)((ulonglong)param_2 & 3);
      if (uStack_2f8 == (undefined **)0x0) {
        if (0x49f < param_3) {
          puStack_a0 = &UNK_14338f738;
          uStack_98 = 0x3e;
          uStack_2f8 = &puStack_a0;
          pcStack_2f0 = pdb_1402ed400;
          cStack_31 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&uStack_2f8,&UNK_14338d5c0);
        }
        unaff_R14 = 0;
        puStack_a0 = (undefined *)0x0;
        goto LAB_141b16d57;
      }
    }
    else {
      pdb_142dc7fb4(0,&puStack_a0,&UNK_143381eb8,0);
    }
    pbVar6 = &UNK_143381f18;
    puVar3 = (undefined *)pdb_142dc7fb4(0,&uStack_2f8,&UNK_143381eb8,0);
    pcStack_2f0 = (code *)param_1;
  }
  uStack_60 = uStack_2b8;
  uStack_5c = uStack_2b4;
  uStack_58 = uStack_2b0;
  uStack_54 = uStack_2ac;
  uStack_70 = uStack_2c8;
  uStack_6c = uStack_2c4;
  uStack_68 = uStack_2c0;
  uStack_64 = uStack_2bc;
  uStack_80 = uStack_2d8;
  uStack_7c = uStack_2d4;
  uStack_78 = uStack_2d0;
  uStack_74 = uStack_2cc;
  uStack_90 = uStack_2e8;
  uStack_8c = uStack_2e4;
  uStack_88 = uStack_2e0;
  uStack_84 = uStack_2dc;
  puStack_a0 = puVar3;
  uStack_98 = pcStack_2f0;
  pbStack_50 = param_2;
  uStack_48 = unaff_R14;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_a0,&UNK_143390f58,&UNK_14338d4c8,pbVar6);
}

