// VA 0x140966b30, PDB extent 564 bytes
// country_core::resources::walls::window_cuts::impl$7::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::walls::window_cuts::impl$7::drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
   Extent: 564 */

void pdb_140966b30(longlong *param_1)

{
  undefined *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  char cVar6;
  bool bVar7;
  undefined *puStack_40;
  undefined4 uStack_38;
  uint uStack_30;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puVar1 = (undefined *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined *)0x0) {
    LOCK();
    bVar7 = DAT_143ca4338 == '\0';
    if (bVar7) {
      DAT_143ca4338 = '\x01';
    }
    UNLOCK();
    if (!bVar7) {
      uStack_29 = 1;
      pdb_142dc6be0(&DAT_143ca4338);
    }
    puVar5 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uStack_30 = 0;
      lVar2 = _DAT_143ca4350;
    }
    else {
      uStack_29 = 1;
      uStack_30 = pdb_142dc79e0();
      uStack_30 = uStack_30 ^ 1;
      lVar2 = _DAT_143ca4350;
    }
    _DAT_143ca4350 = lVar2;
    if (DAT_143ca4339 != '\0') {
      puStack_40 = &DAT_143ca4338;
      uVar3 = (uint)uStack_38 >> 8;
      uStack_38 = CONCAT31((int3)uVar3,(char)uStack_30);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143027c00,0x2b,&puStack_40,&UNK_143027c50,&UNK_143027a40);
    }
    uStack_38 = 3;
    puStack_40 = puVar1;
    if (lVar2 == _DAT_143ca4340) {
      pdb_142d7e980(&DAT_143ca4340);
    }
    lVar4 = _DAT_143ca4348;
    *(undefined **)(_DAT_143ca4348 + lVar2 * 0x10) = puVar1;
    *(undefined4 *)(lVar4 + 8 + lVar2 * 0x10) = 3;
    _DAT_143ca4350 = lVar2 + 1;
    if (((char)uStack_30 == '\0') && ((*puVar5 & 0x7fffffffffffffff) != 0)) {
      uStack_29 = 0;
      cVar6 = pdb_142dc79e0();
      if (cVar6 == '\0') {
        DAT_143ca4339 = '\x01';
      }
    }
    cVar6 = DAT_143ca4338;
    LOCK();
    DAT_143ca4338 = '\0';
    UNLOCK();
    if (cVar6 == '\x02') {
      uStack_29 = 0;
      pdb_142dc6ca0(&DAT_143ca4338);
    }
  }
  return;
}

