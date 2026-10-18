// VA 0x14047ba90, PDB extent 493 bytes
// tiny_glade::driver_screen_tests::igpu_amd_ryzen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/driver_screen_tests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::driver_screen_tests::igpu_amd_ryzen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/driver_screen_tests.rs
   Extent: 493 */

void pdb_14047ba90(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte *pbStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0xc,1);
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xc);
  }
  else {
    pbVar3[0] = 0x52;
    pbVar3[1] = 0x75;
    pbVar3[2] = 100;
    pbVar3[3] = 0x65;
    pbVar3[4] = 0x6f;
    pbVar3[5] = 0x6e;
    pbVar3[6] = 0x20;
    pbVar3[7] = 0x52;
    pbVar3[8] = 0x79;
    pbVar3[9] = 0x7a;
    pbVar3[10] = 0x65;
    pbVar3[0xb] = 0x6e;
    pbStack_28 = pbVar3;
    pdb_140eacc10(&uStack_40);
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(0xc,1);
    if (pbVar3 != (byte *)0x0) {
      pbVar3[0] = 0x4c;
      pbVar3[1] = 0x65;
      pbVar3[2] = 0x67;
      pbVar3[3] = 0x69;
      pbVar3[4] = 0x74;
      pbVar3[5] = 0x20;
      pbVar3[6] = 100;
      pbVar3[7] = 0x72;
      pbVar3[8] = 0x69;
      pbVar3[9] = 0x76;
      pbVar3[10] = 0x65;
      pbVar3[0xb] = 0x72;
      pdb_14007ee60();
      pbVar4 = pub_1406abab0(0x13,1);
      uVar2 = _UNK_142f5c83c;
      if (pbVar4 != (byte *)0x0) {
        *(undefined8 *)pbVar4 = _DAT_142f5c834;
        *(undefined8 *)(pbVar4 + 8) = uVar2;
        pbVar4[0xf] = 0x69;
        pbVar4[0x10] = 0x6e;
        pbVar4[0x11] = 0x66;
        pbVar4[0x12] = 0x6f;
        param_1[5] = 0xc;
        param_1[6] = pbVar3;
        param_1[7] = 0xc;
        param_1[2] = 0xc;
        param_1[3] = pbStack_28;
        param_1[4] = 0xc;
        *(undefined4 *)(param_1 + 0x13) = 0;
        param_1[0xf] = uStack_40;
        param_1[0x10] = uStack_38;
        *param_1 = 0;
        *(undefined2 *)((longlong)param_1 + 0x9c) = 0x102;
        param_1[8] = 0x13;
        param_1[9] = pbVar4;
        param_1[10] = 0x13;
        *(undefined1 (*) [16])(param_1 + 0xb) = ZEXT416(_DAT_142f5c7d0);
        *(undefined8 *)((longlong)param_1 + 0x6c) = 1;
        param_1[0x11] = 0x20000000;
        param_1[0x12] = 0x400000000;
        return;
      }
      pbStack_30 = pbVar3;
      pdb_142dc7e2a(1,0x13);
      goto LAB_14047bc18;
    }
  }
  pdb_142dc7e2a(1,0xc);
LAB_14047bc18:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

