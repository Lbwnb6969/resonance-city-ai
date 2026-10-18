// VA 0x141b6dcc0, PDB extent 299 bytes
// country_core::systems::ui_edit_focus::selection_outlines<array$<country_core::resources::walls::WallId,1> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_edit_focus::selection_outlines<array$<country_core::resources::walls::WallId,1>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_edit_focus.rs
   Extent: 299 */

undefined8 * pdb_141b6dcc0(undefined8 *param_1,longlong param_2,byte param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_40 = pub_1406abab0(0x10,8);
  if (pbStack_40 == (byte *)0x0) {
    pdb_142dc7e2a(8,0x10);
    pcVar1 = (code *)swi(3);
    puVar2 = (undefined8 *)(*pcVar1)();
    return puVar2;
  }
  uVar3 = 0;
  uVar4 = _DAT_142e36f28;
  if ((param_3 & 1) != 0) {
    uVar3 = (ulonglong)(param_4 == param_2);
    uVar4 = *(undefined4 *)(&UNK_142e39540 + uVar3 * 4);
  }
  *(longlong *)pbStack_40 = param_2;
  *(undefined4 *)(pbStack_40 + 8) = uVar4;
  uStack_48 = 1;
  uStack_38 = 1;
  if ((~param_3 & 1) == 0 && param_4 != param_2) {
    pdb_142d7e980(&uStack_48,uVar3);
    *(longlong *)(pbStack_40 + 0x10) = param_4;
    pbStack_40[0x18] = 0xcd;
    pbStack_40[0x19] = 0xcc;
    pbStack_40[0x1a] = 0xcc;
    pbStack_40[0x1b] = 0x3d;
    uStack_38 = 2;
  }
  param_1[2] = uStack_38;
  *param_1 = uStack_48;
  param_1[1] = pbStack_40;
  return param_1;
}

