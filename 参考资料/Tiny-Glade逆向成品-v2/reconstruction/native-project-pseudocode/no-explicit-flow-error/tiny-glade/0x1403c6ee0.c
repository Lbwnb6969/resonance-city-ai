// VA 0x1403c6ee0, PDB extent 523 bytes
// tiny_glade::aftermath::impl$1::shader_debug_info
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/aftermath.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::aftermath::impl$1::shader_debug_info
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/aftermath.rs
   Extent: 523 */

ulonglong pdb_1403c6ee0(byte *param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte *pbVar4;
  char acStack_e0 [8];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  char **ppcStack_60;
  char *pcStack_58;
  code *pcStack_50;
  byte *pbStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140e97500(acStack_e0);
  uVar3 = *_DAT_143ca8e90;
  if (4 < uVar3) {
    pcStack_50 = pdb_1403c6b60;
    uStack_b8 = 0;
    pbStack_b0 = &UNK_142f4f168;
    uStack_a8 = 0x15;
    uStack_a0 = 0;
    puStack_98 = &UNK_142f4efe8;
    uStack_90 = 0x22;
    uStack_88 = 5;
    puStack_80 = &UNK_142f4f168;
    uStack_78 = 0x15;
    uStack_70 = 0x3300000001;
    puStack_68 = &UNK_142f4f17d;
    ppcStack_60 = &pcStack_58;
    pcStack_58 = acStack_e0;
    uVar3 = pdb_140f332f0(&uStack_31,&uStack_b8);
  }
  if (acStack_e0[0] != '\0') {
    uStack_c8 = uStack_d8;
    uStack_c4 = uStack_d4;
    uStack_c0 = uStack_d0;
    uStack_bc = uStack_cc;
    LOCK();
    bVar1 = *param_1;
    if (bVar1 == 0) {
      *param_1 = 1;
    }
    UNLOCK();
    if (bVar1 != 0) {
      pdb_142dbd1a0(param_1);
    }
    pdb_140e9a150(param_1);
    pbStack_40 = param_1;
    if (param_3 == 0) {
      uStack_b8 = 0;
      pbStack_b0 = (byte *)0x1;
      uStack_a8 = 0;
    }
    else {
      pdb_14007ee60();
      pbVar4 = pub_1406abab0(param_3,1);
      if (pbVar4 == (byte *)0x0) {
        pdb_142dc7e2a(1,param_3);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uStack_b8 = param_3;
      pbStack_b0 = pbVar4;
      pub_142e32760(pbVar4,param_2,param_3);
      uStack_a8 = param_3;
    }
    pdb_1403b27c0(&pcStack_58,param_1 + 8,&uStack_c8,&uStack_b8);
    if ((!SBORROW8(0,(longlong)pcStack_58)) && (pcStack_58 != (char *)0x0)) {
      pub_1406abac0((byte *)pcStack_50,(ulonglong)pcStack_58,1);
    }
    pbVar4 = pbStack_40;
    pdb_140e9a350();
    uVar3 = 1;
    LOCK();
    bVar1 = *pbVar4;
    if (bVar1 == 1) {
      *pbVar4 = 0;
    }
    else {
      uVar3 = (ulonglong)bVar1;
    }
    UNLOCK();
    if (bVar1 != 1) {
      uVar3 = pdb_142dbcef0(pbVar4,0);
    }
  }
  return uVar3;
}

