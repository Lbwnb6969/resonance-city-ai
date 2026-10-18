// VA 0x140dc52d0, PDB extent 368 bytes
// lang_lib::game_locale
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140dc5377) */
/* WARNING: Removing unreachable block (ram,0x000140dc537d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: lang_lib::game_locale
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
   Extent: 368 */

undefined * pdb_140dc52d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined *puVar3;
  undefined1 uStack_79;
  undefined *puStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_78 = &DAT_143cb2d10;
  plVar2 = (longlong *)pdb_141dd6e20(&puStack_78);
  if (param_2 == (longlong *)0x0) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      if (*plVar2 == 0) {
        *plVar2 = 3;
      }
      UNLOCK();
    }
    puVar3 = &UNK_1431f2842;
    if (*_DAT_143ca8e90 != 0) {
      uStack_70 = 0;
      plStack_68 = (longlong *)&UNK_1431f283a;
      uStack_60 = 8;
      uStack_58 = 0;
      puStack_50 = &UNK_1431f281f;
      uStack_48 = 0x1a;
      uStack_40 = 1;
      puStack_38 = &UNK_1431f283a;
      uStack_30 = 8;
      uStack_28 = 0x6900000001;
      puStack_20 = &UNK_1431f27e0;
      uStack_18 = 0x7f;
      pdb_140f332f0(&uStack_79,&uStack_70);
    }
  }
  else {
    puVar3 = (undefined *)param_2[2];
    uStack_70 = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = (longlong *)*plVar2;
      if (param_2 + 2 == plVar1) {
        *plVar2 = 3;
      }
      UNLOCK();
      if (param_2 + 2 == plVar1) {
        return puVar3;
      }
      if (param_2 == (longlong *)0x0) {
        return puVar3;
      }
    }
    LOCK();
    *param_2 = *param_2 + -1;
    UNLOCK();
    if (*param_2 == 0) {
      plStack_68 = param_2;
      pdb_141dd6ef0(&plStack_68);
    }
  }
  return puVar3;
}

