// VA 0x1408f1060, PDB extent 357 bytes
// system_decorator::backup::DecoratorBackup::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/backup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::backup::DecoratorBackup::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/backup.rs
   Extent: 357 */

void pdb_1408f1060(longlong param_1)

{
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [440];
  undefined1 auStack_f8 [32];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [32];
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_1408f1e20(auStack_2c8);
  pdb_140c33fb0(param_1 + 0x18,auStack_2b0);
  pdb_1414ac8a0(param_1 + 0x1d0,auStack_f8);
  *(undefined4 *)(param_1 + 0x1f0) = uStack_d8;
  *(undefined4 *)(param_1 + 500) = uStack_d4;
  *(undefined4 *)(param_1 + 0x1f8) = uStack_d0;
  *(undefined4 *)(param_1 + 0x1fc) = uStack_cc;
  pdb_1414acf00(param_1 + 0x200,auStack_c8);
  *(undefined4 *)(param_1 + 0x220) = uStack_a8;
  *(undefined4 *)(param_1 + 0x224) = uStack_a4;
  *(undefined4 *)(param_1 + 0x228) = uStack_a0;
  *(undefined4 *)(param_1 + 0x22c) = uStack_9c;
  pdb_1414acca0(param_1 + 0x230,auStack_98);
  *(undefined4 *)(param_1 + 0x250) = uStack_78;
  *(undefined4 *)(param_1 + 0x254) = uStack_74;
  *(undefined4 *)(param_1 + 600) = uStack_70;
  *(undefined4 *)(param_1 + 0x25c) = uStack_6c;
  pdb_1408fdc40(&uStack_40,auStack_68);
  if (*(longlong *)(param_1 + 0x268) != 0) {
    pub_1406abac0(*(byte **)(param_1 + 0x270),*(longlong *)(param_1 + 0x268) * 0xa8,8);
  }
  *(undefined4 *)(param_1 + 0x270) = uStack_30;
  *(undefined4 *)(param_1 + 0x274) = uStack_2c;
  *(undefined4 *)(param_1 + 0x278) = uStack_28;
  *(undefined4 *)(param_1 + 0x27c) = uStack_24;
  *(undefined4 *)(param_1 + 0x260) = uStack_40;
  *(undefined4 *)(param_1 + 0x264) = uStack_3c;
  *(undefined4 *)(param_1 + 0x268) = uStack_38;
  *(undefined4 *)(param_1 + 0x26c) = uStack_34;
  pdb_1414fa970(uStack_2c0,uStack_2b8,param_1);
  *(undefined1 *)(param_1 + 0x282) = uStack_46;
  *(undefined1 *)(param_1 + 0x280) = uStack_48;
  *(undefined1 *)(param_1 + 0x281) = uStack_47;
  pdb_1404c78b0(auStack_2c8);
  return;
}

