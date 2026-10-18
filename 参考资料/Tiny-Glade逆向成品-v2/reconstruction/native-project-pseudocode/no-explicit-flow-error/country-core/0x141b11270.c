// VA 0x141b11270, PDB extent 965 bytes
// country_core::render::ssbo::impl$7::new_storage_buffer<country_core::render::nani::buffers::NaniDrawListMergeWindows>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::ssbo::impl$7::new_storage_buffer<country_core::render::nani::buffers::NaniDrawListMergeWindows>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 965 */

undefined8 * pdb_141b11270(undefined8 *param_1,undefined8 param_2,byte *param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  byte *unaff_R14;
  char cVar8;
  undefined4 uVar9;
  undefined8 unaff_R15;
  byte *pbVar10;
  undefined **ppuStack_f8;
  code *pcStack_f0;
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
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
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
    param_3 = pub_1406abab0(0x220,4);
    uVar4 = _UNK_1430241cc;
    uVar3 = _UNK_1430241c8;
    uVar2 = _UNK_1430241c4;
    uVar9 = _DAT_1430241c0;
    if (param_3 == (byte *)0x0) {
      cStack_39 = 0;
      pdb_142dc7e2a(4,0x220);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(undefined4 *)param_3 = _DAT_1430241c0;
    *(undefined4 *)(param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 8) = uVar3;
    *(undefined4 *)(param_3 + 0xc) = uVar4;
    *(undefined4 *)(param_3 + 0x10) = uVar9;
    *(undefined4 *)(param_3 + 0x14) = uVar2;
    *(undefined4 *)(param_3 + 0x18) = uVar3;
    *(undefined4 *)(param_3 + 0x1c) = uVar4;
    *(undefined4 *)(param_3 + 0x20) = uVar9;
    *(undefined4 *)(param_3 + 0x24) = uVar2;
    *(undefined4 *)(param_3 + 0x28) = uVar3;
    *(undefined4 *)(param_3 + 0x2c) = uVar4;
    *(undefined4 *)(param_3 + 0x30) = uVar9;
    *(undefined4 *)(param_3 + 0x34) = uVar2;
    *(undefined4 *)(param_3 + 0x38) = uVar3;
    *(undefined4 *)(param_3 + 0x3c) = uVar4;
    *(undefined4 *)(param_3 + 0x40) = uVar9;
    *(undefined4 *)(param_3 + 0x44) = uVar2;
    *(undefined4 *)(param_3 + 0x48) = uVar3;
    *(undefined4 *)(param_3 + 0x4c) = uVar4;
    *(undefined4 *)(param_3 + 0x50) = uVar9;
    *(undefined4 *)(param_3 + 0x54) = uVar2;
    *(undefined4 *)(param_3 + 0x58) = uVar3;
    *(undefined4 *)(param_3 + 0x5c) = uVar4;
    *(undefined4 *)(param_3 + 0x60) = uVar9;
    *(undefined4 *)(param_3 + 100) = uVar2;
    *(undefined4 *)(param_3 + 0x68) = uVar3;
    *(undefined4 *)(param_3 + 0x6c) = uVar4;
    *(undefined4 *)(param_3 + 0x70) = uVar9;
    *(undefined4 *)(param_3 + 0x74) = uVar2;
    *(undefined4 *)(param_3 + 0x78) = uVar3;
    *(undefined4 *)(param_3 + 0x7c) = uVar4;
    *(undefined4 *)(param_3 + 0x80) = uVar9;
    *(undefined4 *)(param_3 + 0x84) = uVar2;
    *(undefined4 *)(param_3 + 0x88) = uVar3;
    *(undefined4 *)(param_3 + 0x8c) = uVar4;
    *(undefined4 *)(param_3 + 0x90) = uVar9;
    *(undefined4 *)(param_3 + 0x94) = uVar2;
    *(undefined4 *)(param_3 + 0x98) = uVar3;
    *(undefined4 *)(param_3 + 0x9c) = uVar4;
    *(undefined4 *)(param_3 + 0xa0) = uVar9;
    *(undefined4 *)(param_3 + 0xa4) = uVar2;
    *(undefined4 *)(param_3 + 0xa8) = uVar3;
    *(undefined4 *)(param_3 + 0xac) = uVar4;
    *(undefined4 *)(param_3 + 0xb0) = uVar9;
    *(undefined4 *)(param_3 + 0xb4) = uVar2;
    *(undefined4 *)(param_3 + 0xb8) = uVar3;
    *(undefined4 *)(param_3 + 0xbc) = uVar4;
    *(undefined4 *)(param_3 + 0xc0) = uVar9;
    *(undefined4 *)(param_3 + 0xc4) = uVar2;
    *(undefined4 *)(param_3 + 200) = uVar3;
    *(undefined4 *)(param_3 + 0xcc) = uVar4;
    *(undefined4 *)(param_3 + 0xd0) = uVar9;
    *(undefined4 *)(param_3 + 0xd4) = uVar2;
    *(undefined4 *)(param_3 + 0xd8) = uVar3;
    *(undefined4 *)(param_3 + 0xdc) = uVar4;
    *(undefined4 *)(param_3 + 0xe0) = uVar9;
    *(undefined4 *)(param_3 + 0xe4) = uVar2;
    *(undefined4 *)(param_3 + 0xe8) = uVar3;
    *(undefined4 *)(param_3 + 0xec) = uVar4;
    *(undefined4 *)(param_3 + 0xf0) = uVar9;
    *(undefined4 *)(param_3 + 0xf4) = uVar2;
    *(undefined4 *)(param_3 + 0xf8) = uVar3;
    *(undefined4 *)(param_3 + 0xfc) = uVar4;
    *(undefined4 *)(param_3 + 0x100) = uVar9;
    *(undefined4 *)(param_3 + 0x104) = uVar2;
    *(undefined4 *)(param_3 + 0x108) = uVar3;
    *(undefined4 *)(param_3 + 0x10c) = uVar4;
    *(undefined4 *)(param_3 + 0x110) = uVar9;
    *(undefined4 *)(param_3 + 0x114) = uVar2;
    *(undefined4 *)(param_3 + 0x118) = uVar3;
    *(undefined4 *)(param_3 + 0x11c) = uVar4;
    *(undefined4 *)(param_3 + 0x120) = uVar9;
    *(undefined4 *)(param_3 + 0x124) = uVar2;
    *(undefined4 *)(param_3 + 0x128) = uVar3;
    *(undefined4 *)(param_3 + 300) = uVar4;
    *(undefined4 *)(param_3 + 0x130) = uVar9;
    *(undefined4 *)(param_3 + 0x134) = uVar2;
    *(undefined4 *)(param_3 + 0x138) = uVar3;
    *(undefined4 *)(param_3 + 0x13c) = uVar4;
    *(undefined4 *)(param_3 + 0x140) = uVar9;
    *(undefined4 *)(param_3 + 0x144) = uVar2;
    *(undefined4 *)(param_3 + 0x148) = uVar3;
    *(undefined4 *)(param_3 + 0x14c) = uVar4;
    *(undefined4 *)(param_3 + 0x150) = uVar9;
    *(undefined4 *)(param_3 + 0x154) = uVar2;
    *(undefined4 *)(param_3 + 0x158) = uVar3;
    *(undefined4 *)(param_3 + 0x15c) = uVar4;
    *(undefined4 *)(param_3 + 0x160) = uVar9;
    *(undefined4 *)(param_3 + 0x164) = uVar2;
    *(undefined4 *)(param_3 + 0x168) = uVar3;
    *(undefined4 *)(param_3 + 0x16c) = uVar4;
    *(undefined4 *)(param_3 + 0x170) = uVar9;
    *(undefined4 *)(param_3 + 0x174) = uVar2;
    *(undefined4 *)(param_3 + 0x178) = uVar3;
    *(undefined4 *)(param_3 + 0x17c) = uVar4;
    *(undefined4 *)(param_3 + 0x180) = uVar9;
    *(undefined4 *)(param_3 + 0x184) = uVar2;
    *(undefined4 *)(param_3 + 0x188) = uVar3;
    *(undefined4 *)(param_3 + 0x18c) = uVar4;
    *(undefined4 *)(param_3 + 400) = uVar9;
    *(undefined4 *)(param_3 + 0x194) = uVar2;
    *(undefined4 *)(param_3 + 0x198) = uVar3;
    *(undefined4 *)(param_3 + 0x19c) = uVar4;
    *(undefined4 *)(param_3 + 0x1a0) = uVar9;
    *(undefined4 *)(param_3 + 0x1a4) = uVar2;
    *(undefined4 *)(param_3 + 0x1a8) = uVar3;
    *(undefined4 *)(param_3 + 0x1ac) = uVar4;
    *(undefined4 *)(param_3 + 0x1b0) = uVar9;
    *(undefined4 *)(param_3 + 0x1b4) = uVar2;
    *(undefined4 *)(param_3 + 0x1b8) = uVar3;
    *(undefined4 *)(param_3 + 0x1bc) = uVar4;
    *(undefined4 *)(param_3 + 0x1c0) = uVar9;
    *(undefined4 *)(param_3 + 0x1c4) = uVar2;
    *(undefined4 *)(param_3 + 0x1c8) = uVar3;
    *(undefined4 *)(param_3 + 0x1cc) = uVar4;
    *(undefined4 *)(param_3 + 0x1d0) = uVar9;
    *(undefined4 *)(param_3 + 0x1d4) = uVar2;
    *(undefined4 *)(param_3 + 0x1d8) = uVar3;
    *(undefined4 *)(param_3 + 0x1dc) = uVar4;
    *(undefined4 *)(param_3 + 0x1e0) = uVar9;
    *(undefined4 *)(param_3 + 0x1e4) = uVar2;
    *(undefined4 *)(param_3 + 0x1e8) = uVar3;
    *(undefined4 *)(param_3 + 0x1ec) = uVar4;
    *(undefined4 *)(param_3 + 0x1f0) = uVar9;
    *(undefined4 *)(param_3 + 500) = uVar2;
    *(undefined4 *)(param_3 + 0x1f8) = uVar3;
    *(undefined4 *)(param_3 + 0x1fc) = uVar4;
    *(undefined4 *)(param_3 + 0x200) = uVar9;
    *(undefined4 *)(param_3 + 0x204) = uVar2;
    *(undefined4 *)(param_3 + 0x208) = uVar3;
    *(undefined4 *)(param_3 + 0x20c) = uVar4;
    *(undefined4 *)(param_3 + 0x210) = uVar9;
    *(undefined4 *)(param_3 + 0x214) = uVar2;
    *(undefined4 *)(param_3 + 0x218) = uVar3;
    *(undefined4 *)(param_3 + 0x21c) = uVar4;
    uVar9 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
    uVar7 = 1;
LAB_141b11403:
    cVar8 = (char)uVar9;
    pbStack_48 = param_3;
    cStack_39 = cVar8;
    uVar5 = pdb_140e1d1f0(0x220,0x1a,1);
    pbStack_48 = param_3;
    cStack_39 = cVar8;
    uVar5 = pdb_140e1d260(uVar5,4);
    pbVar10 = param_3;
    pbStack_48 = param_3;
    cStack_39 = cVar8;
    pdb_1415d1d50(&ppuStack_f8,param_2,&UNK_14338dd08,0x18,uVar5,param_3,uVar7 * 0x220);
    ppuVar6 = ppuStack_f8;
    unaff_R14 = param_3;
    uStack_4c = uVar9;
    if (ppuStack_f8 == (undefined **)0xb) {
      *param_1 = pcStack_f0;
      param_1[1] = uVar7;
      if (cVar8 != '\0') {
        pub_1406abac0(param_3,0x220,4);
      }
      return param_1;
    }
  }
  else {
    puStack_a8 = (undefined8 *)(param_4 % 0x220);
    if (puStack_a8 == (undefined8 *)0x0) {
      ppuStack_f8 = (undefined **)((ulonglong)param_3 & 3);
      unaff_R14 = param_3;
      if (ppuStack_f8 == (undefined **)0x0) {
        if (0x43f < param_4) {
          puStack_a8 = (undefined8 *)&UNK_1433904c8;
          uStack_a0 = 0x3d;
          ppuStack_f8 = (undefined **)&puStack_a8;
          pcStack_f0 = pdb_1402ed400;
          cStack_39 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&ppuStack_f8,&UNK_14338d5c0);
        }
        uVar7 = (ulonglong)(0x21f < param_4);
        uVar9 = 0;
        puStack_a8 = (undefined8 *)0x0;
        goto LAB_141b11403;
      }
    }
    else {
      pdb_142dc7fb4(0,&puStack_a8,&UNK_143381eb8,0);
    }
    pbVar10 = &UNK_143381f18;
    ppuVar6 = (undefined **)0x0;
    pcStack_f0 = (code *)pdb_142dc7fb4(0,&ppuStack_f8,&UNK_143381eb8,0);
    uStack_4c = (int)unaff_R15;
  }
  uStack_68 = uStack_b8;
  uStack_64 = uStack_b4;
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  uStack_78 = uStack_c8;
  uStack_74 = uStack_c4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
  uStack_88 = uStack_d8;
  uStack_84 = uStack_d4;
  uStack_80 = uStack_d0;
  uStack_7c = uStack_cc;
  uStack_98 = uStack_e8;
  uStack_94 = uStack_e4;
  uStack_90 = uStack_e0;
  uStack_8c = uStack_dc;
  puStack_a8 = ppuVar6;
  uStack_a0 = pcStack_f0;
  pbStack_58 = unaff_R14;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_a8,&UNK_143390f58,&UNK_14338d4c8,pbVar10);
}

