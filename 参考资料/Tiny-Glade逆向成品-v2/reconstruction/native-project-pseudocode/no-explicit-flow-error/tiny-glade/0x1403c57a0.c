// VA 0x1403c57a0, PDB extent 506 bytes
// tiny_glade::panic_reporter::panic_dump::dump_log_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::panic_reporter::panic_dump::dump_log_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
   Extent: 506 */

ulonglong * pdb_1403c57a0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *arg0;
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
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
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  byte *pbStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_90,param_2,param_3,&UNK_142f4ef04,7);
  uVar1 = pdb_140dc74c0();
  pdb_140f3e9e0(&uStack_70,uVar1,param_2,&UNK_142f4ef04,7);
  arg0 = pbStack_88;
  pbStack_40 = uStack_68;
  lVar2 = pdb_140f4f180(uStack_68,uStack_60,pbStack_88,uStack_80);
  if (uStack_70 != (undefined *)0x0) {
    pub_1406abac0(pbStack_40,(ulonglong)uStack_70,1);
  }
  if (lVar2 == 1) {
    uStack_31 = 1;
    pdb_140f3f5b0(&uStack_70);
    uStack_a8 = uStack_50;
    uStack_a4 = uStack_4c;
    uStack_a0 = uStack_48;
    uStack_9c = uStack_44;
    uStack_b8 = (undefined4)uStack_60;
    uStack_b4 = uStack_60._4_4_;
    uStack_b0 = uStack_58;
    uStack_ac = uStack_54;
    uStack_c8 = (undefined4)uStack_70;
    uStack_c4 = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_68;
    uStack_bc = uStack_68._4_4_;
    uStack_70 = &UNK_142f4ef0b;
    uStack_68 = (byte *)0x14;
    uStack_31 = 0;
    uVar3 = pdb_142d88850(&uStack_70,&uStack_c8);
    param_1[1] = uVar3;
    *param_1 = 0x8000000000000000;
    if (uStack_90 != 0) {
      pub_1406abac0(arg0,uStack_90,1);
    }
  }
  else {
    param_1[2] = uStack_80;
    param_1[3] = uStack_78;
    *param_1 = uStack_90;
    param_1[1] = (ulonglong)pbStack_88;
  }
  return param_1;
}

