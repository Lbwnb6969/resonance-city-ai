// VA 0x140d99a40, PDB extent 807 bytes
// tg_mods::discovery::has_exact_entry
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::discovery::has_exact_entry
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 807 */

ulonglong pdb_140d99a40(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plStack_9d8;
  byte *pbStack_9d0;
  longlong lStack_9c8;
  ulonglong uStack_780;
  longlong *plStack_778;
  undefined1 auStack_770 [608];
  longlong *plStack_510;
  uint auStack_508 [148];
  int iStack_2b8;
  undefined4 uStack_2b4;
  longlong *plStack_2b0;
  longlong *aplStack_2a8 [76];
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f4f710(&iStack_2b8,param_1,param_2);
  if (iStack_2b8 == 2) {
    plStack_778 = plStack_2b0;
    uStack_780 = 2;
  }
  else {
    pub_142e32760(&uStack_780,&iStack_2b8,0x270);
    if (uStack_780 != 2) {
      pub_142e32760(&iStack_2b8,&uStack_780,0x270);
      do {
        while( true ) {
          while( true ) {
            pdb_140f59fa0(&uStack_780,&iStack_2b8);
            plVar1 = plStack_778;
            uVar4 = uStack_780;
            if (uStack_780 != 1) goto LAB_140d99c55;
            plStack_9d8 = plStack_778;
            pub_142e32760(&pbStack_9d0,auStack_770,0x250);
            if (plVar1 != (longlong *)0x0) break;
            pdb_1404b38e0(&pbStack_9d0);
          }
          pub_142e32760(auStack_508,auStack_770,0x250);
          plStack_510 = plVar1;
          pdb_140f46c20(&plStack_9d8,&plStack_510);
          if ((lStack_9c8 == 0xc) &&
             (*(int *)(pbStack_9d0 + 8) == 0x6e6f736a &&
              *(longlong *)pbStack_9d0 == 0x2e72657474756c63)) break;
          if (plStack_9d8 != (longlong *)0x0) {
            pub_1406abac0(pbStack_9d0,(ulonglong)plStack_9d8,1);
          }
          LOCK();
          *plStack_510 = *plStack_510 + -1;
          UNLOCK();
          if (*plStack_510 == 0) {
            pdb_140cd0de0(&plStack_510);
          }
        }
        if (plStack_9d8 != (longlong *)0x0) {
          pub_1406abac0(pbStack_9d0,(ulonglong)plStack_9d8,1);
        }
        uVar3 = auStack_508[9];
        uVar2 = auStack_508[0];
        LOCK();
        *plStack_510 = *plStack_510 + -1;
        UNLOCK();
        if (*plStack_510 == 0) {
          pdb_140cd0de0(&plStack_510);
        }
      } while (((byte)(uVar3 >> 0x1d) & (byte)(uVar2 >> 10) & 1) != 0 || ((byte)uVar2 >> 4 & 1) != 0
              );
LAB_140d99c55:
      if (CONCAT44(uStack_2b4,iStack_2b8) != 0) {
        pdb_140f590a0(&plStack_2b0);
      }
      LOCK();
      *aplStack_2a8[0] = *aplStack_2a8[0] + -1;
      UNLOCK();
      if (*aplStack_2a8[0] == 0) {
        pdb_140cd0de0(aplStack_2a8);
      }
      goto LAB_140d99ace;
    }
  }
  pdb_1404b38e0(&plStack_778);
  uVar4 = 0;
LAB_140d99ace:
  return uVar4 & 0xffffffff;
}

