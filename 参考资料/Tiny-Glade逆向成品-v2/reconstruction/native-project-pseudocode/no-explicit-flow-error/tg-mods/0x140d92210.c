// VA 0x140d92210, PDB extent 483 bytes
// tg_mods::overlay::remove_workshop_mod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::remove_workshop_mod
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 483 */

longlong * pdb_140d92210(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_f8 [168];
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  LOCK();
  bVar10 = _DAT_143ca48a0 == 0;
  if (bVar10) {
    _DAT_143ca48a0 = 8;
  }
  UNLOCK();
  plStack_50 = param_1;
  if (!bVar10) {
    pdb_142dbc1f0(&DAT_143ca48a0,param_2,1000000000);
  }
  pdb_140e9a150(&DAT_143ca48a0);
  pdb_140e9a150(0x143ca48a1);
  lVar5 = _DAT_143ca48c8;
  lVar4 = _DAT_143ca48c0;
  if (_DAT_143ca48c8 != 0) {
    lVar8 = _DAT_143ca48c8 * 0xb0;
    lVar9 = 0;
    lVar6 = 0;
    do {
      lVar1 = _DAT_143ca48c0 + lVar6;
      if ((*(longlong *)(_DAT_143ca48c0 + lVar6) != 0) &&
         (*(longlong *)(_DAT_143ca48c0 + 8 + lVar6) == param_2)) {
        lVar2 = *(longlong *)(_DAT_143ca48c0 + lVar6);
        pub_142e32760(auStack_f8,_DAT_143ca48c0 + lVar6 + 8,0xa8);
        pub_142e32770(lVar1,lVar4 + lVar6 + 0xb0,(lVar8 - lVar6) + -0xb0);
        plVar7 = plStack_50;
        _DAT_143ca48c8 = lVar5 + -1;
        if (lVar2 == 2) {
          pdb_142dc7ef8(lVar9,_DAT_143ca48c8,&UNK_1431e5448);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *plStack_50 = lVar2;
        pub_142e32760(plStack_50 + 1,auStack_f8,0xa8);
        goto LAB_140d9233e;
      }
      lVar9 = lVar9 + 1;
      lVar6 = lVar6 + 0xb0;
    } while (lVar1 + 0xb0 != _DAT_143ca48c0 + lVar8);
  }
  *plStack_50 = 2;
  plVar7 = plStack_50;
LAB_140d9233e:
  pdb_140e9a350(&DAT_143ca48a0);
  pdb_140e9a350();
  LOCK();
  bVar10 = _DAT_143ca48a0 == 8;
  if (bVar10) {
    _DAT_143ca48a0 = 0;
  }
  UNLOCK();
  if (!bVar10) {
    pdb_142dbca40(&DAT_143ca48a0,0);
  }
  return plVar7;
}

