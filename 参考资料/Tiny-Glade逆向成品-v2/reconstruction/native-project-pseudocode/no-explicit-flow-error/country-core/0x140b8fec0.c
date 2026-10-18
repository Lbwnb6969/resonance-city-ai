// VA 0x140b8fec0, PDB extent 419 bytes
// country_core::render::vao::create_vao
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::vao::create_vao
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
   Extent: 419 */

void pdb_140b8fec0(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_3 + 0x10);
  lVar1 = lVar3 * 4;
  uVar4 = pdb_140e1cff0(lVar1,0x40);
  pdb_1415d1d50(&iStack_e8,param_2,&UNK_14305e3e8,0xc,uVar4,*(undefined8 *)(param_3 + 8),lVar1);
  if (iStack_e8 == 0xb) {
    uVar4 = CONCAT44(uStack_dc,uStack_e0);
    lStack_90 = param_4 + param_5 * 0x18;
    lStack_98 = param_4;
    uStack_88 = param_2;
    lStack_80 = param_3;
    pdb_1415f3d30(&iStack_e8,&lStack_98);
    param_1[2] = CONCAT44(uStack_d4,uStack_d8);
    *param_1 = CONCAT44(uStack_e4,iStack_e8);
    param_1[1] = CONCAT44(uStack_dc,uStack_e0);
    uVar2 = *(undefined1 *)(param_3 + 0x78);
    param_1[3] = uVar4;
    *(int *)(param_1 + 4) = (int)lVar3;
    *(undefined1 *)((longlong)param_1 + 0x24) = uVar2;
    return;
  }
  uStack_58 = uStack_a8;
  uStack_50 = uStack_a0;
  uStack_68 = uStack_b8;
  uStack_64 = uStack_b4;
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  uStack_78 = uStack_c8;
  uStack_74 = uStack_c4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14305eac8,0x2b,&lStack_98,&UNK_14305ea68,&UNK_14305e420);
}

