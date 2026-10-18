// VA 0x140576fb0, PDB extent 538 bytes
// tiny_glade::panic_reporter::setup_panic_hook::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::setup_panic_hook::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/mod.rs
   Extent: 538 */

void pdb_140576fb0(undefined8 *param_1,undefined8 ***param_2)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 **ppuStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  cVar3 = DAT_143cb2bc8;
  uStack_28 = 0xfffffffffffffffe;
  ppuStack_a0 = param_2;
  if (DAT_143cb2b0c == '\0') {
    LOCK();
    DAT_143cb2bc8 = '\x01';
    UNLOCK();
    if (cVar3 == '\0') {
      DAT_143cb2b09 = 1;
      pppuVar6 = param_2;
      pdb_140e9b4d0(&uStack_b8);
      plVar2 = _DAT_143ca8e90;
      if (*_DAT_143ca8e90 != 0) {
        ppuStack_48 = (undefined8 **)&uStack_98;
        pcStack_40 = pdb_140470cf0;
        puStack_78 = (undefined8 *)&UNK_142f6c000;
        uStack_70 = 0x1a;
        puStack_68 = &UNK_142f6c000;
        ppuStack_60 = (undefined8 **)0x1a;
        pcStack_58 = (code *)&UNK_142f6bfe8;
        uStack_29 = 1;
        pppuVar6 = &ppuStack_48;
        uStack_98 = (undefined8 **)&uStack_b8;
        pdb_1400c9be0(&UNK_142f6bfa2,pppuVar6,1,&puStack_78);
      }
      if (*plVar2 != 0) {
        ppuStack_48 = &ppuStack_a0;
        pcStack_40 = pdb_140314940;
        puStack_78 = (undefined8 *)&UNK_142f6c000;
        uStack_70 = 0x1a;
        puStack_68 = &UNK_142f6c000;
        ppuStack_60 = (undefined8 **)0x1a;
        pcStack_58 = (code *)&UNK_142f6c028;
        uStack_29 = 1;
        pppuVar6 = &ppuStack_48;
        pdb_1400c9be0(&UNK_142f6c01a,pppuVar6,1,&puStack_78);
      }
      uStack_88 = uStack_a8;
      uStack_98 = (undefined8 **)CONCAT44(uStack_b4,uStack_b8);
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      uVar5 = pdb_140618750(param_2);
      pdb_140576e90(&ppuStack_48,uVar5,pppuVar6);
      puStack_68 = (undefined *)uStack_88;
      uStack_70 = CONCAT44(uStack_8c,uStack_90);
      puStack_78 = uStack_98;
      ppuStack_60 = ppuStack_48;
      pcStack_58 = pcStack_40;
      uStack_50 = uStack_38;
      uStack_29 = 0;
      pdb_1400ec6b0(&puStack_78);
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  pcVar4 = (char *)pdb_1400f0e70(0);
  if (*pcVar4 == '\0') {
    pdb_140f502d0(0x78,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00014057701d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))(*param_1,param_2);
  return;
}

