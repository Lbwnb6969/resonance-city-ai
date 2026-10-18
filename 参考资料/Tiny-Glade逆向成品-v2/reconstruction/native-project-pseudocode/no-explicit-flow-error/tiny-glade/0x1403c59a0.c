// VA 0x1403c59a0, PDB extent 624 bytes
// tiny_glade::panic_reporter::panic_dump::dump_profile_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::panic_reporter::panic_dump::dump_profile_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
   Extent: 624 */

ulonglong * pdb_1403c59a0(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  byte *pbStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140a3aac0(&uStack_c8);
  uStack_31 = 1;
  pbStack_40 = pbStack_c0;
  uVar3 = uStack_b8;
  lVar1 = pdb_140f3ecf0();
  if (lVar1 != 0) {
    uStack_31 = 1;
    pdb_140f3e9e0(&uStack_78,param_2,param_3,lVar1,uVar3);
    uStack_48 = uStack_c8;
    pbStack_50 = pbStack_70;
    lVar1 = pdb_140f4f180(pbStack_40,uStack_b8,pbStack_70,uStack_68);
    if (uStack_48 != 0) {
      pub_1406abac0(pbStack_40,uStack_48,1);
    }
    if (lVar1 == 1) {
      uStack_32 = 1;
      pdb_140f3f5b0(&uStack_a8);
      uStack_d8 = uStack_88;
      uStack_d4 = uStack_84;
      uStack_d0 = uStack_80;
      uStack_cc = uStack_7c;
      uStack_e8 = uStack_98;
      uStack_e4 = uStack_94;
      uStack_e0 = uStack_90;
      uStack_dc = uStack_8c;
      uStack_f8 = (undefined4)uStack_a8;
      uStack_f4 = uStack_a8._4_4_;
      uStack_f0 = (undefined4)uStack_a0;
      uStack_ec = uStack_a0._4_4_;
      uStack_a8 = &UNK_142f4ef38;
      uStack_a0 = 0x18;
      uStack_32 = 0;
      uVar2 = pdb_142d88850(&uStack_a8,&uStack_f8);
      param_1[1] = uVar2;
      *param_1 = 0x8000000000000000;
      if (uStack_78 != 0) {
        pub_1406abac0(pbStack_50,uStack_78,1);
      }
    }
    else {
      param_1[2] = uStack_68;
      param_1[3] = uStack_60;
      *param_1 = uStack_78;
      param_1[1] = (ulonglong)pbStack_70;
    }
    return param_1;
  }
  uStack_31 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f4ef20);
}

