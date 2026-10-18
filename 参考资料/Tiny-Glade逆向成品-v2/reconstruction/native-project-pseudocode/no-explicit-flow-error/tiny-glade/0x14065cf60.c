// VA 0x14065cf60, PDB extent 538 bytes
// tiny_glade::run_game::WindowBackendWindow::cancel_fullscreen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::run_game::WindowBackendWindow::cancel_fullscreen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 538 */

void pdb_14065cf60(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  byte *unaff_RDI;
  longlong alStack_98 [2];
  undefined1 auStack_88 [16];
  longlong *plStack_78;
  byte *pbStack_70;
  undefined1 uStack_68;
  char *pcStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  plVar3 = (longlong *)(param_1 + 2);
  if (*param_1 == 1) {
    pcVar7 = (char *)pdb_140744c40(*plVar3 + 0x10);
    lVar1 = *(longlong *)(pcVar7 + 0x28);
    if (lVar1 == 1) {
      lVar2 = *(longlong *)(pcVar7 + 0x30);
      if (lVar2 == 0) {
        unaff_RDI = (byte *)0x0;
      }
      else {
        param_2 = param_2 & 0xffffffff;
        pdb_14007ee60();
        unaff_RDI = pub_1406abab0(0xdc,4);
        if (unaff_RDI == (byte *)0x0) {
          uStack_41 = (undefined1)param_2;
          pcStack_50 = pcVar7;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0xdc);
        }
        pub_142e32760(unaff_RDI,lVar2,0xdc);
      }
    }
    if ((((param_2 & 1) == 0) && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
      pcVar7[1] = '\x01';
    }
    LOCK();
    cVar5 = *pcVar7;
    *pcVar7 = '\0';
    UNLOCK();
    if (cVar5 == '\x02') {
      pdb_142dc6ca0(pcVar7);
    }
    if ((char)lVar1 != '\0') {
      if (unaff_RDI != (byte *)0x0) {
        pub_1406abac0(unaff_RDI,0xdc,4);
      }
      lVar1 = *plVar3;
      plStack_78 = (longlong *)0x0;
      pdb_14073ecf0(alStack_98,lVar1 + 0x10,&plStack_78);
      if (alStack_98[0] != 0) {
        pdb_1404b38e0(auStack_88);
      }
      plVar3 = *(longlong **)(lVar1 + 0x10);
      pbStack_70 = *(byte **)(lVar1 + 0x18);
      LOCK();
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + 1;
      UNLOCK();
      if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uStack_68 = 1;
      plStack_78 = plVar3;
      pdb_14010ce10(lVar1 + 0x20,&plStack_78);
    }
  }
  else {
    iVar6 = pdb_1406d17f0(plVar3);
    if (iVar6 != 0) {
      pdb_1406d17b0(&plStack_78,plVar3,0);
      if ((!SBORROW8(0,(longlong)plStack_78)) && (plStack_78 != (longlong *)0x0)) {
        pub_1406abac0(pbStack_70,(ulonglong)plStack_78,1);
      }
      pdb_1406d1940(plVar3);
    }
  }
  return;
}

