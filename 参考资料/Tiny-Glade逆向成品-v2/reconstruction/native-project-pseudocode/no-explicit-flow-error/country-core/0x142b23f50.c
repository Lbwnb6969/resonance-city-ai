// VA 0x142b23f50, PDB extent 562 bytes
// country_core::systems::ui::resources::ui_state::UiState::add<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiState::add<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 562 */

longlong pdb_142b23f50(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  bool bVar6;
  longlong *plStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [176];
  ulonglong uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  plStack_110 = param_2;
  uStack_108 = param_3;
  uStack_48 = param_4;
  uVar4 = pdb_140bbbcb0(&plStack_110);
  uVar1 = param_1 + 0x90;
  LOCK();
  bVar6 = *(longlong *)(param_1 + 0x90) == 0;
  if (bVar6) {
    *(longlong *)(param_1 + 0x90) = 8;
  }
  UNLOCK();
  if (!bVar6) {
    uStack_39 = 1;
    pdb_142dbc1f0(uVar1);
  }
  uStack_39 = 1;
  pdb_140e9a150(uVar1);
  uStack_39 = 1;
  pdb_140e9a150(uVar1 | 1);
  uStack_50 = uVar1;
  pub_142e32760(auStack_100,uStack_48,0xb0);
  plStack_110 = (longlong *)0x1;
  uStack_108 = 1;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0xc0,8);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xc0);
  }
  pub_142e32760(pbVar5,&plStack_110,0xc0);
  plStack_110 = (longlong *)pdb_14207bdf0(param_1 + 0x98,uVar4,pbVar5);
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *plStack_110 = *plStack_110 + -1;
    UNLOCK();
    if (*plStack_110 == 0) {
      pdb_140c7b000(&plStack_110);
    }
  }
  uStack_39 = 0;
  plVar2 = (longlong *)(param_1 + 0x90);
  pdb_140e9a350(plVar2);
  uStack_39 = 0;
  pdb_140e9a350();
  LOCK();
  lVar3 = *plVar2;
  if (lVar3 == 8) {
    *plVar2 = 0;
  }
  UNLOCK();
  if (lVar3 != 8) {
    uStack_39 = 0;
    pdb_142dbca40(plVar2,0);
  }
  return param_1;
}

