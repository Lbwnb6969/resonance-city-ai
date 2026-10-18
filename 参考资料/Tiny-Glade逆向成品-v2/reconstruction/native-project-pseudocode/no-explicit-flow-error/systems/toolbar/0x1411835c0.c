// VA 0x1411835c0, PDB extent 662 bytes
// toolbar::menu::report_bug::impl$5::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::impl$5::drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 662 */

void pdb_1411835c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char cVar5;
  bool bVar6;
  undefined1 auStack_388 [416];
  longlong *plStack_1e8;
  undefined1 uStack_1e0;
  longlong *plStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  uint uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  plVar2 = *(longlong **)(param_1 + 600);
  *(undefined8 *)(param_1 + 600) = 0;
  if (plVar2 != (longlong *)0x0) {
    plStack_38 = plVar2;
    pdb_140cb5c90(&plStack_1e8,param_1);
    pub_142e32760(auStack_388,&plStack_1e8,0x1a0);
    plVar1 = plVar2 + 2;
    LOCK();
    bVar6 = (char)plVar2[2] == '\0';
    if (bVar6) {
      *(char *)(plVar2 + 2) = '\x01';
    }
    UNLOCK();
    if (!bVar6) {
      pdb_142dc6be0(plVar1);
    }
    puVar4 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uStack_2c = 0;
      cVar5 = *(char *)((longlong)plVar2 + 0x11);
    }
    else {
      uStack_2c = pdb_142dc79e0();
      uStack_2c = uStack_2c ^ 1;
      cVar5 = *(char *)((longlong)plVar2 + 0x11);
    }
    if (cVar5 != '\0') {
      uStack_1e0 = (undefined1)uStack_2c;
      plStack_1e8 = plVar1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14329de00,0x2b,&plStack_1e8,&UNK_14329dde0,&UNK_14329df88);
    }
    plStack_40 = plVar2 + 3;
    plStack_48 = plVar1;
    if ((int)plVar2[3] != 4) {
      pdb_14117d130(plVar2 + 3);
    }
    pub_142e32760(plVar2 + 3,auStack_388,0x1a0);
    plVar1 = plVar2 + 2;
    if ((((char)uStack_2c == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
      *(undefined1 *)((longlong)plVar2 + 0x11) = 1;
    }
    LOCK();
    lVar3 = *plVar1;
    *(char *)plVar1 = '\0';
    UNLOCK();
    if ((char)lVar3 == '\x02') {
      pdb_142dc6ca0(plVar1);
    }
    LOCK();
    *plStack_38 = *plStack_38 + -1;
    UNLOCK();
    if (*plStack_38 == 0) {
      pdb_140734ba0(&plStack_38);
    }
  }
  return;
}

