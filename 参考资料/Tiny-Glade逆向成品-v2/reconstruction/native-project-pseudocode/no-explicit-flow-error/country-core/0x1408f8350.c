// VA 0x1408f8350, PDB extent 2080 bytes
// country_core::startup::load_shaders::RenderPasses::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_shaders::RenderPasses::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
   Extent: 2080 */

undefined8 * pdb_1408f8350(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uStack_d0;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined8 uStack_7c;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar13 = *(longlong *)(param_2 + 0x668) + 0x10;
  pdb_140e8d5b0(&uStack_d0,lVar13,0x80);
  if ((~uStack_d0._4_4_ & 0x1200) == 0) {
    uVar14 = 0x18000000000;
  }
  else {
    pdb_140e8d5b0(&uStack_d0,lVar13,0x81);
    if ((~uStack_d0._4_4_ & 0x1200) == 0) {
      uVar14 = 0x18100000000;
    }
    else {
      pdb_140e8d5b0(&uStack_d0,lVar13,0x82);
      if ((~uStack_d0._4_4_ & 0x1200) != 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143052ddc,0xcb,&UNK_143052e48);
      }
      uVar14 = 0x18200000000;
    }
  }
  uVar12 = _DAT_142e378e0;
  uStack_c0 = 1;
  uStack_bc = 0x12b00000000;
  uStack_74 = 3;
  uStack_d0 = 0;
  uStack_70 = _DAT_142e378e0;
  uStack_68 = 0;
  uVar1 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 0;
  uStack_7c = 0x17c00000000;
  uStack_74 = 2;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar2 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 0;
  uStack_74 = 2;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uStack_7c = uVar14;
  uVar14 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 1;
  uStack_bc = 0x16500000000;
  uStack_7c = 0x18200000000;
  uStack_74 = 2;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar3 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 2;
  uStack_bc = 0x16500000000;
  uStack_b4 = 0x16100000000;
  uStack_7c = 0x18200000000;
  uStack_74 = 2;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar4 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 2;
  uStack_bc = 0x16500000000;
  uStack_b4 = 0x17a00000000;
  uStack_7c = 0x18200000000;
  uStack_74 = 2;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar5 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 1;
  uStack_bc = 0x16100000000;
  uStack_7c = 0x18200000000;
  uStack_74 = 0;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar6 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 1;
  uStack_bc = 0x17a00000000;
  uStack_7c = 0x18200000000;
  uStack_74 = 2;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar7 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 2;
  uStack_bc = 0x17a00000000;
  uStack_b4 = 0x16100000000;
  uStack_7c = 0x18200000000;
  uStack_74 = 2;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar8 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 1;
  uStack_bc = 0x17a00000000;
  uStack_7c = 0x18200000000;
  uStack_74 = 0;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar9 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 5;
  uStack_bc = 0x17a00000000;
  uStack_b4 = 0x10900000000;
  uStack_ac = 0x16200000000;
  uStack_a4 = 0x16200000000;
  uStack_9c = 0x10900000000;
  uStack_7c = 0x18200000000;
  uStack_74 = 2;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar10 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 1;
  uStack_bc = 0x17a00000000;
  uStack_74 = 3;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar11 = pdb_140e517a0(param_2,&uStack_d0);
  uStack_c0 = 1;
  uStack_bc = 0x42b00000000;
  uStack_74 = 3;
  uStack_d0 = 0;
  uStack_70 = uVar12;
  uStack_68 = 0;
  uVar12 = pdb_140e517a0(param_2,&uStack_d0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar14;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar12;
  return param_1;
}

