// VA 0x1406187e0, PDB extent 881 bytes
// tiny_glade::panic_reporter::sentry_reporter::report_event_to_sentry
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::panic_reporter::sentry_reporter::report_event_to_sentry
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/sentry_reporter.rs
   Extent: 881 */

undefined1 *
pdb_1406187e0(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 uStack_990;
  undefined4 uStack_988;
  undefined4 uStack_984;
  undefined8 uStack_980;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  byte *pbStack_570;
  byte *pbStack_568;
  undefined8 uStack_560;
  byte *pbStack_558;
  undefined8 *puStack_550;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined7 uStack_47;
  byte *pbStack_40;
  byte *pbStack_38;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_2c = param_6;
  puStack_68 = param_3;
  uStack_60 = param_2;
  if (param_4 != 0) {
    uStack_29 = 1;
    uStack_2a = 1;
    pdb_140f55d10(&pbStack_570,param_4,param_5);
    if (!SBORROW8(0,(longlong)pbStack_570)) {
      pbStack_38 = pbStack_570;
      uStack_47 = 0;
      uStack_58 = 1;
      uStack_57 = 0;
      uStack_53 = 0x80000000;
      uStack_4f = 0;
      uStack_4b = 0;
      pbStack_40 = pbStack_568;
      pdb_140391400(&pbStack_570,&uStack_58,pbStack_568,uStack_560);
      if (SBORROW8(0,(longlong)pbStack_570)) {
        pdb_1404b4a50(&pbStack_568);
        uStack_58 = 0;
      }
      else {
        pub_142e32760(&uStack_988,&pbStack_568,0x418);
        uStack_990 = pbStack_570;
        uStack_57 = uStack_5b8;
        uStack_53 = uStack_5b4;
        uStack_4f = uStack_5b0;
        uStack_4b = uStack_5ac;
        uStack_58 = 1;
        pdb_1404ca870(&uStack_990);
      }
      if (pbStack_38 != (byte *)0x0) {
        pub_1406abac0(pbStack_40,(ulonglong)pbStack_38,1);
      }
      goto LAB_140618945;
    }
    uStack_29 = 1;
    uStack_2a = 1;
    pdb_1404b38e0(&pbStack_568);
  }
  uStack_58 = 0;
LAB_140618945:
  uStack_70 = 0;
  uStack_560 = *puStack_68;
  pbStack_570 = (byte *)puStack_68[1];
  pbStack_558 = pbStack_570 + puStack_68[2] * 0x30;
  puStack_550 = &uStack_70;
  uStack_29 = 1;
  uStack_2a = 0;
  pbStack_568 = pbStack_570;
  pdb_140174180(&uStack_990,&pbStack_570);
  uStack_2b = 1;
  pdb_1401730c0(&uStack_990);
  uStack_98 = uStack_980;
  uStack_a8 = (undefined4)uStack_990;
  uStack_a4 = uStack_990._4_4_;
  uStack_a0 = uStack_988;
  uStack_9c = uStack_984;
  pub_142e32760(&pbStack_570,uStack_60,0x4c8);
  puStack_90 = &uStack_2c;
  puStack_88 = &uStack_58;
  uStack_2b = 0;
  pdb_140334280(&uStack_80,&UNK_142e38630,&pbStack_570);
  *(undefined8 *)(param_1 + 1) = uStack_80;
  *(undefined8 *)(param_1 + 9) = uStack_78;
  *param_1 = 0;
  return param_1;
}

