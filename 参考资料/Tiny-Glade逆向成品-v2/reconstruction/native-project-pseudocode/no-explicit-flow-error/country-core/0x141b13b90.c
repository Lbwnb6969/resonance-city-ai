// VA 0x141b13b90, PDB extent 881 bytes
// country_core::render::ssbo::impl$0::new_storage_buffer<country_core::systems::render_loop::compute_passes::dof_autofocus::DofAutofocusSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::ssbo::impl$0::new_storage_buffer<country_core::systems::render_loop::compute_passes::dof_autofocus::DofAutofocusSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/ssbo.rs
   Extent: 881 */

undefined8 pdb_141b13b90(undefined8 param_1,byte *param_2,ulonglong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  byte *unaff_RBX;
  char cVar7;
  undefined4 uVar8;
  undefined8 unaff_R14;
  byte *pbVar9;
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
    param_3 = 0x200;
    param_2 = pub_1406abab0(0x200,4);
    uVar4 = _UNK_143057f6c;
    uVar3 = _UNK_143057f68;
    uVar2 = _UNK_143057f64;
    uVar8 = _DAT_143057f60;
    if (param_2 == (byte *)0x0) {
      cStack_31 = 0;
      pdb_142dc7e2a(4,0x200);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(undefined4 *)param_2 = _DAT_143057f60;
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 8) = uVar3;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 0x10) = uVar8;
    *(undefined4 *)(param_2 + 0x14) = uVar2;
    *(undefined4 *)(param_2 + 0x18) = uVar3;
    *(undefined4 *)(param_2 + 0x1c) = uVar4;
    *(undefined4 *)(param_2 + 0x20) = uVar8;
    *(undefined4 *)(param_2 + 0x24) = uVar2;
    *(undefined4 *)(param_2 + 0x28) = uVar3;
    *(undefined4 *)(param_2 + 0x2c) = uVar4;
    *(undefined4 *)(param_2 + 0x30) = uVar8;
    *(undefined4 *)(param_2 + 0x34) = uVar2;
    *(undefined4 *)(param_2 + 0x38) = uVar3;
    *(undefined4 *)(param_2 + 0x3c) = uVar4;
    *(undefined4 *)(param_2 + 0x40) = uVar8;
    *(undefined4 *)(param_2 + 0x44) = uVar2;
    *(undefined4 *)(param_2 + 0x48) = uVar3;
    *(undefined4 *)(param_2 + 0x4c) = uVar4;
    *(undefined4 *)(param_2 + 0x50) = uVar8;
    *(undefined4 *)(param_2 + 0x54) = uVar2;
    *(undefined4 *)(param_2 + 0x58) = uVar3;
    *(undefined4 *)(param_2 + 0x5c) = uVar4;
    *(undefined4 *)(param_2 + 0x60) = uVar8;
    *(undefined4 *)(param_2 + 100) = uVar2;
    *(undefined4 *)(param_2 + 0x68) = uVar3;
    *(undefined4 *)(param_2 + 0x6c) = uVar4;
    *(undefined4 *)(param_2 + 0x70) = uVar8;
    *(undefined4 *)(param_2 + 0x74) = uVar2;
    *(undefined4 *)(param_2 + 0x78) = uVar3;
    *(undefined4 *)(param_2 + 0x7c) = uVar4;
    *(undefined4 *)(param_2 + 0x80) = uVar8;
    *(undefined4 *)(param_2 + 0x84) = uVar2;
    *(undefined4 *)(param_2 + 0x88) = uVar3;
    *(undefined4 *)(param_2 + 0x8c) = uVar4;
    *(undefined4 *)(param_2 + 0x90) = uVar8;
    *(undefined4 *)(param_2 + 0x94) = uVar2;
    *(undefined4 *)(param_2 + 0x98) = uVar3;
    *(undefined4 *)(param_2 + 0x9c) = uVar4;
    *(undefined4 *)(param_2 + 0xa0) = uVar8;
    *(undefined4 *)(param_2 + 0xa4) = uVar2;
    *(undefined4 *)(param_2 + 0xa8) = uVar3;
    *(undefined4 *)(param_2 + 0xac) = uVar4;
    *(undefined4 *)(param_2 + 0xb0) = uVar8;
    *(undefined4 *)(param_2 + 0xb4) = uVar2;
    *(undefined4 *)(param_2 + 0xb8) = uVar3;
    *(undefined4 *)(param_2 + 0xbc) = uVar4;
    *(undefined4 *)(param_2 + 0xc0) = uVar8;
    *(undefined4 *)(param_2 + 0xc4) = uVar2;
    *(undefined4 *)(param_2 + 200) = uVar3;
    *(undefined4 *)(param_2 + 0xcc) = uVar4;
    *(undefined4 *)(param_2 + 0xd0) = uVar8;
    *(undefined4 *)(param_2 + 0xd4) = uVar2;
    *(undefined4 *)(param_2 + 0xd8) = uVar3;
    *(undefined4 *)(param_2 + 0xdc) = uVar4;
    *(undefined4 *)(param_2 + 0xe0) = uVar8;
    *(undefined4 *)(param_2 + 0xe4) = uVar2;
    *(undefined4 *)(param_2 + 0xe8) = uVar3;
    *(undefined4 *)(param_2 + 0xec) = uVar4;
    *(undefined4 *)(param_2 + 0xf0) = uVar8;
    *(undefined4 *)(param_2 + 0xf4) = uVar2;
    *(undefined4 *)(param_2 + 0xf8) = uVar3;
    *(undefined4 *)(param_2 + 0xfc) = uVar4;
    *(undefined4 *)(param_2 + 0x100) = uVar8;
    *(undefined4 *)(param_2 + 0x104) = uVar2;
    *(undefined4 *)(param_2 + 0x108) = uVar3;
    *(undefined4 *)(param_2 + 0x10c) = uVar4;
    *(undefined4 *)(param_2 + 0x110) = uVar8;
    *(undefined4 *)(param_2 + 0x114) = uVar2;
    *(undefined4 *)(param_2 + 0x118) = uVar3;
    *(undefined4 *)(param_2 + 0x11c) = uVar4;
    *(undefined4 *)(param_2 + 0x120) = uVar8;
    *(undefined4 *)(param_2 + 0x124) = uVar2;
    *(undefined4 *)(param_2 + 0x128) = uVar3;
    *(undefined4 *)(param_2 + 300) = uVar4;
    *(undefined4 *)(param_2 + 0x130) = uVar8;
    *(undefined4 *)(param_2 + 0x134) = uVar2;
    *(undefined4 *)(param_2 + 0x138) = uVar3;
    *(undefined4 *)(param_2 + 0x13c) = uVar4;
    *(undefined4 *)(param_2 + 0x140) = uVar8;
    *(undefined4 *)(param_2 + 0x144) = uVar2;
    *(undefined4 *)(param_2 + 0x148) = uVar3;
    *(undefined4 *)(param_2 + 0x14c) = uVar4;
    *(undefined4 *)(param_2 + 0x150) = uVar8;
    *(undefined4 *)(param_2 + 0x154) = uVar2;
    *(undefined4 *)(param_2 + 0x158) = uVar3;
    *(undefined4 *)(param_2 + 0x15c) = uVar4;
    *(undefined4 *)(param_2 + 0x160) = uVar8;
    *(undefined4 *)(param_2 + 0x164) = uVar2;
    *(undefined4 *)(param_2 + 0x168) = uVar3;
    *(undefined4 *)(param_2 + 0x16c) = uVar4;
    *(undefined4 *)(param_2 + 0x170) = uVar8;
    *(undefined4 *)(param_2 + 0x174) = uVar2;
    *(undefined4 *)(param_2 + 0x178) = uVar3;
    *(undefined4 *)(param_2 + 0x17c) = uVar4;
    *(undefined4 *)(param_2 + 0x180) = uVar8;
    *(undefined4 *)(param_2 + 0x184) = uVar2;
    *(undefined4 *)(param_2 + 0x188) = uVar3;
    *(undefined4 *)(param_2 + 0x18c) = uVar4;
    *(undefined4 *)(param_2 + 400) = uVar8;
    *(undefined4 *)(param_2 + 0x194) = uVar2;
    *(undefined4 *)(param_2 + 0x198) = uVar3;
    *(undefined4 *)(param_2 + 0x19c) = uVar4;
    *(undefined4 *)(param_2 + 0x1a0) = uVar8;
    *(undefined4 *)(param_2 + 0x1a4) = uVar2;
    *(undefined4 *)(param_2 + 0x1a8) = uVar3;
    *(undefined4 *)(param_2 + 0x1ac) = uVar4;
    *(undefined4 *)(param_2 + 0x1b0) = uVar8;
    *(undefined4 *)(param_2 + 0x1b4) = uVar2;
    *(undefined4 *)(param_2 + 0x1b8) = uVar3;
    *(undefined4 *)(param_2 + 0x1bc) = uVar4;
    *(undefined4 *)(param_2 + 0x1c0) = uVar8;
    *(undefined4 *)(param_2 + 0x1c4) = uVar2;
    *(undefined4 *)(param_2 + 0x1c8) = uVar3;
    *(undefined4 *)(param_2 + 0x1cc) = uVar4;
    *(undefined4 *)(param_2 + 0x1d0) = uVar8;
    *(undefined4 *)(param_2 + 0x1d4) = uVar2;
    *(undefined4 *)(param_2 + 0x1d8) = uVar3;
    *(undefined4 *)(param_2 + 0x1dc) = uVar4;
    *(undefined4 *)(param_2 + 0x1e0) = uVar8;
    *(undefined4 *)(param_2 + 0x1e4) = uVar2;
    *(undefined4 *)(param_2 + 0x1e8) = uVar3;
    *(undefined4 *)(param_2 + 0x1ec) = uVar4;
    *(undefined4 *)(param_2 + 0x1f0) = uVar8;
    *(undefined4 *)(param_2 + 500) = uVar2;
    *(undefined4 *)(param_2 + 0x1f8) = uVar3;
    *(undefined4 *)(param_2 + 0x1fc) = uVar4;
    uVar8 = (undefined4)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
LAB_141b13ce8:
    cVar7 = (char)uVar8;
    pbStack_40 = param_2;
    cStack_31 = cVar7;
    uVar5 = pdb_140e1d1f0(0x200,0x32,1);
    pbStack_40 = param_2;
    cStack_31 = cVar7;
    uVar5 = pdb_140e1d260(uVar5,4);
    pbVar9 = param_2;
    pbStack_40 = param_2;
    cStack_31 = cVar7;
    pdb_1415d1d50(&ppuStack_f0,param_1,&UNK_14338dec5,0x10,uVar5,param_2,param_3);
    ppuVar6 = ppuStack_f0;
    unaff_RBX = param_2;
    uStack_44 = uVar8;
    if (ppuStack_f0 == (undefined **)0xb) {
      if (cVar7 != '\0') {
        pub_1406abac0(param_2,0x200,4);
      }
      return pcStack_e8;
    }
  }
  else {
    puStack_a0 = (undefined8 *)(param_3 & 0x3f);
    if (puStack_a0 == (undefined8 *)0x0) {
      ppuStack_f0 = (undefined **)((ulonglong)param_2 & 3);
      unaff_RBX = param_2;
      if (ppuStack_f0 == (undefined **)0x0) {
        if (0x23f < param_3) {
          puStack_a0 = (undefined8 *)&UNK_14339035d;
          uStack_98 = 0x53;
          ppuStack_f0 = (undefined **)&puStack_a0;
          pcStack_e8 = pdb_1402ed400;
          cStack_31 = 0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14338d590,&ppuStack_f0,&UNK_14338d5c0);
        }
        uVar8 = 0;
        puStack_a0 = (undefined8 *)0x0;
        goto LAB_141b13ce8;
      }
    }
    else {
      pdb_142dc7fb4(0,&puStack_a0,&UNK_143381eb8,0);
    }
    pbVar9 = &UNK_143381f18;
    ppuVar6 = (undefined **)pdb_142dc7fb4(0,&ppuStack_f0,&UNK_143381eb8,0);
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
  puStack_a0 = ppuVar6;
  uStack_98 = pcStack_e8;
  pbStack_50 = unaff_RBX;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143390f78,0x2b,&puStack_a0,&UNK_143390f58,&UNK_14338d4c8,pbVar9);
}

