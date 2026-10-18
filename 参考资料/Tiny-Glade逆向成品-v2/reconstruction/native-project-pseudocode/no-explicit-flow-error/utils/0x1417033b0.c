// VA 0x1417033b0, PDB extent 120 bytes
// utils::timer::_::impl$0::init_access
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/timer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::timer::_::impl$0::init_access
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/timer.rs
   Extent: 120 */

void pdb_1417033b0(ulonglong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 auStack_188 [176];
  undefined1 auStack_d8 [72];
  longlong alStack_90 [2];
  ulonglong uStack_80;
  undefined8 uStack_50;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  
  if ((*(char *)(param_3 + 0x93) == '\0') &&
     ((uVar2 = *param_1, *(ulonglong *)(param_3 + 0x70) <= uVar2 ||
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) == 0
      )))) {
    puStack_20 = (undefined1 *)0xfffffffffffffffe;
    pdb_140edc2d0(auStack_d8);
    if (uStack_80 < uVar2 + 1) {
      uStack_21 = 1;
      pdb_142dc5e40(alStack_90,uVar2 + 1,&UNK_143235d70);
    }
    puVar1 = (ulonglong *)(alStack_90[0] + (uVar2 >> 6) * 8);
    *puVar1 = *puVar1 | 1L << ((byte)uVar2 & 0x3f);
    pub_142e32760(auStack_188,auStack_d8,0xb0);
    uStack_21 = 0;
    pdb_140edd5d0(param_3,auStack_188);
    return;
  }
  puStack_20 = &uStack_21;
                    /* WARNING: Subroutine does not return */
  uStack_50 = 0x141703427;
  pdb_142dc83d0(&UNK_143516220,&puStack_20,&UNK_143516330);
}

