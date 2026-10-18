// VA 0x1428b3ad0, PDB extent 677 bytes
// country_core::systems::ui::resources::ui_state::UiState::add<alloc::string::String>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiState::add<alloc::string::String>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 677 */

longlong pdb_1428b3ad0(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  bool bVar6;
  byte *pbStack_120;
  ulonglong uStack_118;
  undefined1 auStack_110 [176];
  ulonglong uStack_60;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  byte *pbStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pbStack_120 = (byte *)param_2[1];
  uStack_118 = param_2[2];
  uStack_58 = param_3;
  puStack_50 = param_2;
  pbStack_48 = pbStack_120;
  uVar4 = pdb_140bbbcb0(&pbStack_120);
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
  uStack_60 = uVar1;
  pub_142e32760(auStack_110,uStack_58,0xb0);
  pbStack_120 = (byte *)0x1;
  uStack_118 = 1;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0xc0,8);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xc0);
  }
  pub_142e32760(pbVar5,&pbStack_120,0xc0);
  pbStack_120 = (byte *)pdb_141f129e0(param_1 + 0x98,uVar4,pbVar5);
  if (pbStack_120 != (byte *)0x0) {
    LOCK();
    *(longlong *)pbStack_120 = *(longlong *)pbStack_120 + -1;
    UNLOCK();
    if (*(longlong *)pbStack_120 == 0) {
      pdb_140c7b000(&pbStack_120);
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
  if (*puStack_50 != 0) {
    pub_1406abac0(pbStack_48,*puStack_50,1);
  }
  return param_1;
}

