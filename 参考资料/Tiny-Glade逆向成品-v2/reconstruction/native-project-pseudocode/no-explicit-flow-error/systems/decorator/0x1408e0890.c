// VA 0x1408e0890, PDB extent 548 bytes
// system_decorator::stone_foundation_cutouts::defer_dispose
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/stone_foundation_cutouts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::stone_foundation_cutouts::defer_dispose
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/stone_foundation_cutouts.rs
   Extent: 548 */

void pdb_1408e0890(undefined *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puStack_40;
  undefined4 uStack_38;
  uint uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  LOCK();
  bVar6 = DAT_143ca4220 == '\0';
  if (bVar6) {
    DAT_143ca4220 = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    uStack_29 = 1;
    pdb_142dc6be0(&DAT_143ca4220);
  }
  puVar4 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_30 = 0;
    lVar1 = _DAT_143ca4238;
  }
  else {
    uStack_29 = 1;
    uStack_30 = pdb_142dc79e0();
    uStack_30 = uStack_30 ^ 1;
    lVar1 = _DAT_143ca4238;
  }
  _DAT_143ca4238 = lVar1;
  if (DAT_143ca4221 != '\0') {
    puStack_40 = &DAT_143ca4220;
    uVar2 = (uint)uStack_38 >> 8;
    uStack_38 = CONCAT31((int3)uVar2,(char)uStack_30);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14301b2d0,0x2b,&puStack_40,&UNK_14301b2b0,&UNK_14301b180);
  }
  uStack_38 = 3;
  puStack_40 = param_1;
  if (lVar1 == _DAT_143ca4228) {
    pdb_142d7e980(&DAT_143ca4228);
  }
  lVar3 = _DAT_143ca4230;
  *(undefined **)(_DAT_143ca4230 + lVar1 * 0x10) = param_1;
  *(undefined4 *)(lVar3 + 8 + lVar1 * 0x10) = 3;
  _DAT_143ca4238 = lVar1 + 1;
  if (((char)uStack_30 == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) {
    uStack_29 = 0;
    cVar5 = pdb_142dc79e0();
    if (cVar5 == '\0') {
      DAT_143ca4221 = '\x01';
    }
  }
  cVar5 = DAT_143ca4220;
  LOCK();
  DAT_143ca4220 = 0;
  UNLOCK();
  if (cVar5 == '\x02') {
    uStack_29 = 0;
    pdb_142dc6ca0(&DAT_143ca4220);
  }
  return;
}

