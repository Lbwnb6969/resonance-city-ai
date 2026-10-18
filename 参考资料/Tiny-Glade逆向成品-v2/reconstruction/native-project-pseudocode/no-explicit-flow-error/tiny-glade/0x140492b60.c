// VA 0x140492b60, PDB extent 564 bytes
// tiny_glade::crash_pickup::ClientHandle::send_message
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::crash_pickup::ClientHandle::send_message
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/mod.rs
   Extent: 564 */

int * pdb_140492b60(int *param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  uStack_50 = pub_1406abab0(0x80,1);
  uStack_68 = param_3;
  if (uStack_50 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uStack_58 = (byte *)0x80;
  uStack_48 = 0;
  puStack_70 = &uStack_58;
  pbVar2 = (byte *)pdb_1406410c0(param_3,&puStack_70);
  if (pbVar2 == (byte *)0x0) {
    uStack_30 = (ulonglong)uStack_58;
    pbVar2 = uStack_50;
    if (!SBORROW8(0,(longlong)uStack_58)) {
      pbStack_60 = uStack_50;
      pdb_1407eb700(&uStack_58,*param_2 + 0x10,4,uStack_50,uStack_48);
      if (uStack_30 != 0) {
        pub_1406abac0(pbStack_60,uStack_30,1);
      }
      if ((int)uStack_58 == 6) {
        param_1[0] = 10;
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(param_1 + 8) = uStack_38;
        *(undefined8 *)(param_1 + 4) = uStack_48;
        *(undefined8 *)(param_1 + 6) = uStack_40;
        *param_1 = (int)uStack_58;
        param_1[1] = uStack_58._4_4_;
        param_1[2] = (int)uStack_50;
        param_1[3] = uStack_50._4_4_;
      }
      pdb_1404941f0(uStack_68);
      return param_1;
    }
  }
  else if (uStack_58 != (byte *)0x0) {
    pub_1406abac0(uStack_50,(ulonglong)uStack_58,1);
  }
  uStack_58 = pbVar2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142f5fb40,0x2b,&uStack_58,&UNK_142f5fb20,&UNK_142f5f8b0);
}

