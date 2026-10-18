// VA 0x14047b890, PDB extent 511 bytes
// tiny_glade::driver_screen_tests::gpu_intel_weak
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/driver_screen_tests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::driver_screen_tests::gpu_intel_weak
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/driver_screen_tests.rs
   Extent: 511 */

void pdb_14047b890(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0xe,1);
  if (pbVar3 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xe);
  }
  else {
    pbVar3[6] = 0x20;
    pbVar3[7] = 0x49;
    pbVar3[8] = 0x72;
    pbVar3[9] = 0x69;
    pbVar3[10] = 0x73;
    pbVar3[0xb] = 0x20;
    pbVar3[0xc] = 0x58;
    pbVar3[0xd] = 0x65;
    pbVar3[0] = 0x49;
    pbVar3[1] = 0x6e;
    pbVar3[2] = 0x74;
    pbVar3[3] = 0x6c;
    pbVar3[4] = 0x65;
    pbVar3[5] = 0x6c;
    pbVar3[6] = 0x20;
    pbVar3[7] = 0x49;
    pbStack_30 = pbVar3;
    pdb_140eacc10(&uStack_48);
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
        param_1[2] = 0xe;
        param_1[3] = pbStack_30;
        param_1[4] = 0xe;
        *(undefined4 *)(param_1 + 0x13) = 0;
        param_1[0xf] = uStack_48;
        param_1[0x10] = uStack_40;
        *param_1 = 0;
        *(undefined2 *)((longlong)param_1 + 0x9c) = 0x102;
        param_1[8] = 0x13;
        param_1[9] = pbVar4;
        param_1[10] = 0x13;
        *(undefined4 *)(param_1 + 0xb) = 1;
        *(ulonglong *)((longlong)param_1 + 0x5c) = param_2 & 0xffffffff;
        *(undefined8 *)((longlong)param_1 + 0x6c) = 5;
        param_1[0x11] = 0x80000000;
        param_1[0x12] = 0;
        return;
      }
      pbStack_38 = pbVar3;
      pdb_142dc7e2a(1,0x13);
      goto LAB_14047ba1f;
    }
  }
  pdb_142dc7e2a(1,0xc);
LAB_14047ba1f:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

