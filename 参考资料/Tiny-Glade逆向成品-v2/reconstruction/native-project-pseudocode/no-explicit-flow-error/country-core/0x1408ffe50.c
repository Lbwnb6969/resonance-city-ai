// VA 0x1408ffe50, PDB extent 924 bytes
// country_core::systems::ui::resources::ui_state::UiState::clearing_canvas_w_layer_and_sound
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::ui_state::UiState::clearing_canvas_w_layer_and_sound
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/ui_state.rs
   Extent: 924 */

longlong pdb_1408ffe50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                      undefined1 param_5,undefined8 *param_6)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  bool bVar6;
  longlong *plStack_1d0;
  byte *pbStack_1c8;
  undefined8 auStack_1c0 [22];
  byte *pbStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined8 uStack_84;
  undefined2 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pbStack_110 = (byte *)&uStack_60;
  pcStack_108 = pdb_1402ed400;
  uStack_60 = param_2;
  uStack_58 = param_3;
  pdb_140f60760(&plStack_1d0,&UNK_14301e2a9,&pbStack_110);
  pbStack_110 = pbStack_1c8;
  pcStack_108 = (code *)auStack_1c0[0];
  uVar4 = pdb_140bbbcb0(&pbStack_110);
  if (plStack_1d0 != (longlong *)0x0) {
    pub_1406abac0(pbStack_1c8,(ulonglong)plStack_1d0,1);
  }
  uStack_e0 = *(undefined4 *)(param_6 + 3);
  uStack_cc = *(undefined4 *)((longlong)param_6 + 0x2c);
  uStack_dc = *(undefined8 *)((longlong)param_6 + 0x1c);
  uStack_d4 = *(undefined8 *)((longlong)param_6 + 0x24);
  uStack_c8 = *(undefined4 *)(param_6 + 6);
  uStack_c4 = *(undefined8 *)((longlong)param_6 + 0x34);
  uStack_bc = *(undefined8 *)((longlong)param_6 + 0x3c);
  uStack_b4 = *(undefined4 *)((longlong)param_6 + 0x44);
  uStack_b0 = *(undefined4 *)(param_6 + 9);
  uStack_ac = *(undefined8 *)((longlong)param_6 + 0x4c);
  uStack_a4 = *(undefined8 *)((longlong)param_6 + 0x54);
  uStack_9c = *(undefined4 *)((longlong)param_6 + 0x5c);
  pbStack_110 = (byte *)0x0;
  pcStack_108 = (code *)0x8;
  uStack_100 = 0;
  uStack_f8 = *param_6;
  uStack_f0 = *(undefined4 *)(param_6 + 1);
  uStack_ec = *(undefined4 *)((longlong)param_6 + 0xc);
  uStack_e8 = *(undefined4 *)(param_6 + 2);
  uStack_e4 = *(undefined4 *)((longlong)param_6 + 0x14);
  uStack_98 = 1;
  uStack_88 = 4;
  uStack_87 = param_5;
  uStack_84 = 0x4302000043020000;
  uStack_68 = 0x100;
  uVar1 = param_1 + 0x90;
  LOCK();
  bVar6 = *(longlong *)(param_1 + 0x90) == 0;
  if (bVar6) {
    *(longlong *)(param_1 + 0x90) = 8;
  }
  UNLOCK();
  uStack_97 = param_4;
  if (!bVar6) {
    uStack_41 = 1;
    pdb_142dbc1f0(uVar1,uStack_b0,1000000000);
  }
  uStack_41 = 1;
  pdb_140e9a150(uVar1);
  uStack_41 = 1;
  pdb_140e9a150(uVar1 | 1);
  uStack_50 = uVar1;
  pub_142e32760(auStack_1c0,&pbStack_110,0xb0);
  plStack_1d0 = (longlong *)0x1;
  pbStack_1c8 = (byte *)0x1;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0xc0,8);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xc0);
  }
  pub_142e32760(pbVar5,&plStack_1d0,0xc0);
  plStack_1d0 = (longlong *)pdb_1411a33c0(param_1 + 0x98,uVar4,pbVar5);
  if (plStack_1d0 != (longlong *)0x0) {
    LOCK();
    *plStack_1d0 = *plStack_1d0 + -1;
    UNLOCK();
    if (*plStack_1d0 == 0) {
      pdb_140c7b000(&plStack_1d0);
    }
  }
  uStack_41 = 0;
  plVar2 = (longlong *)(param_1 + 0x90);
  pdb_140e9a350(plVar2);
  uStack_41 = 0;
  pdb_140e9a350();
  LOCK();
  lVar3 = *plVar2;
  if (lVar3 == 8) {
    *plVar2 = 0;
  }
  UNLOCK();
  if (lVar3 != 8) {
    uStack_41 = 0;
    pdb_142dbca40(plVar2,0);
  }
  return param_1;
}

