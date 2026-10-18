// VA 0x1406450a0, PDB extent 441 bytes
// tiny_glade::hang_watchdog::spawn_hang_watchdog_thread
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/hang_watchdog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::hang_watchdog::spawn_hang_watchdog_thread
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/hang_watchdog.rs
   Extent: 441 */

void pdb_1406450a0(void)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined1 uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  longlong *plStack_48;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined1 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_38 = 0x8000000000000000;
  plStack_48 = (longlong *)0x0;
  uStack_20 = 0;
  pdb_14007ee60();
  pbStack_70 = pub_1406abab0(0xd,1);
  if (pbStack_70 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xd);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  pbStack_70[5] = 0x77;
  pbStack_70[6] = 0x61;
  pbStack_70[7] = 0x74;
  pbStack_70[8] = 99;
  pbStack_70[9] = 0x68;
  pbStack_70[10] = 100;
  pbStack_70[0xb] = 0x6f;
  pbStack_70[0xc] = 0x67;
  pbStack_70[0] = 0x68;
  pbStack_70[1] = 0x61;
  pbStack_70[2] = 0x6e;
  pbStack_70[3] = 0x67;
  pbStack_70[4] = 0x20;
  pbStack_70[5] = 0x77;
  pbStack_70[6] = 0x61;
  pbStack_70[7] = 0x74;
  uStack_68 = 0xd;
  uStack_58 = 0xd;
  pbStack_60 = pbStack_70;
  pdb_140f3cec0(&uStack_a0,&plStack_48,&uStack_68);
  uStack_58 = uStack_80;
  pdb_140229810(&plStack_48,&uStack_68,uStack_a0,uStack_98,uStack_78,0);
  plVar2 = plStack_48;
  if (plStack_48 != (longlong *)0x0) {
    CloseHandle();
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140f4a410(&plStack_48);
    }
    LOCK();
    *plStack_40 = *plStack_40 + -1;
    UNLOCK();
    if (*plStack_40 == 0) {
      pdb_140f4a2d0(&plStack_40);
    }
    return;
  }
  plStack_48 = (longlong *)0x0;
  pdb_1404b38e0(&plStack_40);
  return;
}

