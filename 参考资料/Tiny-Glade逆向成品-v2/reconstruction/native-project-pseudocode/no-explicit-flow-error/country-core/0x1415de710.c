// VA 0x1415de710, PDB extent 475 bytes
// country_core::systems::save::save_thread::save_thread::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::save_thread::save_thread::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 475 */

uint pdb_1415de710(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar4 = pdb_140c6fb10(param_2);
  if ((char)uVar4 == '\0') {
    if (*(longlong *)(param_2 + 0x78) != 0) {
      pdb_140f3e010(&uStack_b8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      pdb_141c5e050(&uStack_d8,param_2 + 0x78);
      uStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      uStack_98 = uStack_b8;
      puStack_90 = (undefined *)uStack_b0;
      uStack_78 = (undefined *)CONCAT44(uStack_d4,uStack_d8);
      uStack_70 = CONCAT44(uStack_cc,uStack_d0);
      uStack_68 = CONCAT44(uStack_c4,uStack_c8);
      uStack_60 = (undefined *)CONCAT44(uStack_bc,uStack_c0);
      lVar2 = param_1[2];
      if (lVar2 == *param_1) {
        pdb_142d7ee50(param_1);
      }
      lVar3 = param_1[1];
      lVar5 = lVar2 * 0x40;
      puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar5);
      *puVar1 = uStack_68;
      puVar1[1] = uStack_60;
      puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar5);
      *puVar1 = uStack_78;
      puVar1[1] = uStack_70;
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
      *puVar1 = uStack_88;
      puVar1[1] = uStack_80;
      *(undefined8 *)(lVar3 + lVar5) = uStack_98;
      ((undefined8 *)(lVar3 + lVar5))[1] = puStack_90;
      param_1[2] = lVar2 + 1;
    }
  }
  else if (*_DAT_143ca8e90 != 0) {
    uStack_98 = 0;
    puStack_90 = &UNK_14331ff47;
    uStack_88 = 0x28;
    uStack_80 = 0;
    uStack_78 = &UNK_14331fee0;
    uStack_70 = 0x33;
    uStack_68 = 1;
    uStack_60 = &UNK_14331ff47;
    uStack_58 = 0x28;
    uStack_50 = 0x17300000001;
    puStack_48 = &UNK_14331ff14;
    uStack_40 = 0x67;
    pdb_140f332f0(&uStack_31,&uStack_98);
  }
  return uVar4 ^ 1;
}

