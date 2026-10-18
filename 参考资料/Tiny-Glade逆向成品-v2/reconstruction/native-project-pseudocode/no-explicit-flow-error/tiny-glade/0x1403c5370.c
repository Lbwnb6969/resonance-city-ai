// VA 0x1403c5370, PDB extent 1068 bytes
// tiny_glade::panic_reporter::panic_dump::dump_inputs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::panic_dump::dump_inputs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
   Extent: 1068 */

ulonglong * pdb_1403c5370(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined8 **ppuStack_60;
  code *pcStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (*_DAT_143ca44b0 == 2) {
    uVar2 = pdb_142d877a0(&UNK_142f4ee60,0x18);
    param_1[1] = uVar2;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  lVar3 = *(longlong *)(_DAT_143ca44b0 + 0x10);
  pdb_140f3e9e0(&uStack_80,param_2,param_3,&UNK_142f4ee78,0xb);
  uVar2 = 1;
  if ((longlong)*(ulonglong *)(lVar3 + 0x40) < 0) {
    uVar2 = *(ulonglong *)(lVar3 + 0x40) ^ 0x8000000000000000;
  }
  if (uVar2 == 1) {
    lStack_88 = lVar3 + 0x40;
    pdb_14007ee60();
    pcStack_40 = (code *)pub_1406abab0(0x80,1);
    if (pcStack_40 == (code *)0x0) {
      pdb_142dc7e2a(1,0x80);
LAB_1403c565a:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    plStack_48 = (longlong *)0x80;
    uStack_38 = 0;
    ppuStack_60 = &plStack_48;
    pcVar1 = (code *)pdb_140485330(lVar3,&ppuStack_60);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = pcStack_40;
      if (!SBORROW8(0,(longlong)plStack_48)) {
        plStack_50 = plStack_48;
        pcStack_58 = pcStack_40;
        lVar3 = pdb_140f561c0(*(undefined8 *)(lVar3 + 0x48),*(undefined8 *)(lVar3 + 0x50),pcStack_40
                              ,uStack_38);
        if (plStack_50 != (longlong *)0x0) {
          pub_1406abac0((byte *)pcStack_58,(ulonglong)plStack_50,1);
        }
        if (lVar3 == 0) {
          plStack_48 = &lStack_88;
          pcStack_40 = pdb_140117660;
          uVar2 = pdb_142d7e3a0(&UNK_142f4eeb6,&plStack_48);
        }
        else {
          uVar2 = pdb_142d84e10(lVar3);
        }
        goto LAB_1403c551b;
      }
    }
    else if (plStack_48 != (longlong *)0x0) {
      pub_1406abac0((byte *)pcStack_40,(ulonglong)plStack_48,1);
    }
    uVar2 = pdb_142d88d30(pcVar1);
  }
  else if (uVar2 == 0) {
    pdb_14007ee60();
    pcStack_40 = (code *)pub_1406abab0(0x80,1);
    if (pcStack_40 == (code *)0x0) {
      pdb_142dc7e2a(1,0x80);
      goto LAB_1403c565a;
    }
    plStack_48 = (longlong *)0x80;
    uStack_38 = 0;
    ppuStack_60 = &plStack_48;
    pcVar1 = (code *)pdb_140485330(lVar3,&ppuStack_60);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = pcStack_40;
      if (!SBORROW8(0,(longlong)plStack_48)) {
        plStack_50 = plStack_48;
        pcStack_58 = pcStack_40;
        lVar3 = pdb_140f561c0(pbStack_78,uStack_70,pcStack_40,uStack_38);
        if (plStack_50 != (longlong *)0x0) {
          pub_1406abac0((byte *)pcStack_58,(ulonglong)plStack_50,1);
        }
        if (lVar3 == 0) {
          param_1[2] = uStack_70;
          param_1[3] = uStack_68;
          *param_1 = uStack_80;
          param_1[1] = (ulonglong)pbStack_78;
          return param_1;
        }
        uVar2 = pdb_142d84e10(lVar3);
        goto LAB_1403c551b;
      }
    }
    else if (plStack_48 != (longlong *)0x0) {
      pub_1406abac0((byte *)pcStack_40,(ulonglong)plStack_48,1);
    }
    uVar2 = pdb_142d88d30(pcVar1);
  }
  else {
    uVar2 = pdb_142d877a0(&UNK_142f4eec9,0x35);
  }
LAB_1403c551b:
  param_1[1] = uVar2;
  *param_1 = 0x8000000000000000;
  if (uStack_80 != 0) {
    pub_1406abac0(pbStack_78,uStack_80,1);
  }
  return param_1;
}

