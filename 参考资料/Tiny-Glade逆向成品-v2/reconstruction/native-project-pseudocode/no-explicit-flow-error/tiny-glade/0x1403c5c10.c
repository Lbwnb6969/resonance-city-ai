// VA 0x1403c5c10, PDB extent 640 bytes
// tiny_glade::panic_reporter::panic_dump::dump_settings_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::panic_reporter::panic_dump::dump_settings_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
   Extent: 640 */

ulonglong * pdb_1403c5c10(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
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
  uVar4 = param_2;
  uVar1 = pdb_140dc7520();
  pdb_140f3e9e0(&uStack_c8,uVar1,uVar4,&UNK_142f3964a,0xc);
  uStack_31 = 1;
  pbStack_40 = pbStack_c0;
  uVar4 = uStack_b8;
  lVar2 = pdb_140f3ecf0();
  if (lVar2 != 0) {
    uStack_31 = 1;
    pdb_140f3e9e0(&uStack_78,param_2,param_3,lVar2,uVar4);
    uStack_48 = uStack_c8;
    pbStack_50 = pbStack_70;
    lVar2 = pdb_140f4f180(pbStack_40,uStack_b8,pbStack_70,uStack_68);
    if (uStack_48 != 0) {
      pub_1406abac0(pbStack_40,uStack_48,1);
    }
    if (lVar2 == 1) {
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
      uStack_a8 = &UNK_142f4ef68;
      uStack_a0 = 0x19;
      uStack_32 = 0;
      uVar3 = pdb_142d88850(&uStack_a8,&uStack_f8);
      param_1[1] = uVar3;
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
  pdb_142dc8150(&UNK_142f4ef50);
}

