// VA 0x14064bec0, PDB extent 371 bytes
// tiny_glade::run_game::impl$4::fullscreen_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::run_game::impl$4::fullscreen_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 371 */

undefined1 pdb_14064bec0(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  byte *unaff_RSI;
  undefined1 uVar6;
  
  if (*param_1 == 1) {
    pcVar5 = (char *)pdb_140744c40(*(longlong *)(param_1 + 2) + 0x10);
    lVar1 = *(longlong *)(pcVar5 + 0x28);
    if (lVar1 == 1) {
      lVar2 = *(longlong *)(pcVar5 + 0x30);
      if (lVar2 == 0) {
        unaff_RSI = (byte *)0x0;
      }
      else {
        param_2 = param_2 & 0xffffffff;
        pdb_14007ee60();
        unaff_RSI = pub_1406abab0(0xdc,4);
        if (unaff_RSI == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0xdc);
        }
        pub_142e32760(unaff_RSI,lVar2,0xdc);
      }
    }
    if ((((param_2 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
       (cVar3 = pdb_142dc79e0(), cVar3 == '\0')) {
      pcVar5[1] = '\x01';
    }
    LOCK();
    cVar3 = *pcVar5;
    *pcVar5 = '\0';
    UNLOCK();
    if (cVar3 == '\x02') {
      pdb_142dc6ca0(pcVar5);
    }
    uVar6 = 2;
    if ((char)lVar1 != '\0') {
      if (unaff_RSI != (byte *)0x0) {
        pub_1406abac0(unaff_RSI,0xdc,4);
      }
      uVar6 = unaff_RSI != (byte *)0x0;
    }
  }
  else {
    iVar4 = pdb_1406d17f0();
    if (iVar4 == 0) {
      uVar6 = 2;
    }
    else if (iVar4 == 1) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

