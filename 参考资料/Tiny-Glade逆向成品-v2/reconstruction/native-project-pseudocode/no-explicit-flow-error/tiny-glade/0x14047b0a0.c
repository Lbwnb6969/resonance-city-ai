// VA 0x14047b0a0, PDB extent 525 bytes
// tiny_glade::driver_screen_tests::gpu_ms_dozen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/driver_screen_tests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::driver_screen_tests::gpu_ms_dozen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/driver_screen_tests.rs
   Extent: 525 */

void pdb_14047b0a0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte *pbStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x39,1);
  uVar2 = _UNK_142f5c88d;
  if (pbVar6 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x39);
  }
  else {
    *(ulonglong *)(pbVar6 + 0x29) = CONCAT17(UNK_142f5c88c,_DAT_142f5c885);
    *(undefined8 *)(pbVar6 + 0x31) = uVar2;
    uVar2 = CONCAT71(_DAT_142f5c885,UNK_142f5c884);
    *(undefined8 *)(pbVar6 + 0x20) = _DAT_142f5c87c;
    *(undefined8 *)(pbVar6 + 0x28) = uVar2;
    uVar2 = _UNK_142f5c874;
    *(undefined8 *)(pbVar6 + 0x10) = _DAT_142f5c86c;
    *(undefined8 *)(pbVar6 + 0x18) = uVar2;
    uVar5 = _UNK_142f5c868;
    uVar4 = _UNK_142f5c864;
    uVar3 = _UNK_142f5c860;
    *(undefined4 *)pbVar6 = _DAT_142f5c85c;
    *(undefined4 *)(pbVar6 + 4) = uVar3;
    *(undefined4 *)(pbVar6 + 8) = uVar4;
    *(undefined4 *)(pbVar6 + 0xc) = uVar5;
    pbStack_28 = pbVar6;
    pdb_140eacc10(&uStack_40);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xc,1);
    if (pbVar6 != (byte *)0x0) {
      pbVar6[0] = 0x4c;
      pbVar6[1] = 0x65;
      pbVar6[2] = 0x67;
      pbVar6[3] = 0x69;
      pbVar6[4] = 0x74;
      pbVar6[5] = 0x20;
      pbVar6[6] = 100;
      pbVar6[7] = 0x72;
      pbVar6[8] = 0x69;
      pbVar6[9] = 0x76;
      pbVar6[10] = 0x65;
      pbVar6[0xb] = 0x72;
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(0x13,1);
      uVar2 = _UNK_142f5c83c;
      if (pbVar7 != (byte *)0x0) {
        *(undefined8 *)pbVar7 = _DAT_142f5c834;
        *(undefined8 *)(pbVar7 + 8) = uVar2;
        pbVar7[0xf] = 0x69;
        pbVar7[0x10] = 0x6e;
        pbVar7[0x11] = 0x66;
        pbVar7[0x12] = 0x6f;
        param_1[5] = 0xc;
        param_1[6] = pbVar6;
        param_1[7] = 0xc;
        param_1[2] = 0x39;
        param_1[3] = pbStack_28;
        param_1[4] = 0x39;
        *(undefined4 *)(param_1 + 0x13) = 0;
        param_1[0xf] = uStack_40;
        param_1[0x10] = uStack_38;
        *param_1 = 0;
        *(undefined2 *)((longlong)param_1 + 0x9c) = 2;
        param_1[8] = 0x13;
        param_1[9] = pbVar7;
        param_1[10] = 0x13;
        param_1[0xb] = _DAT_142f5c7b0;
        param_1[0xc] = 0;
        param_1[0xd] = 0x400000000;
        *(undefined4 *)(param_1 + 0xe) = 0;
        param_1[0x11] = 0x200000000;
        param_1[0x12] = 0;
        return;
      }
      pbStack_30 = pbVar6;
      pdb_142dc7e2a(1,0x13);
      goto LAB_14047b24c;
    }
  }
  pdb_142dc7e2a(1,0xc);
LAB_14047b24c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

