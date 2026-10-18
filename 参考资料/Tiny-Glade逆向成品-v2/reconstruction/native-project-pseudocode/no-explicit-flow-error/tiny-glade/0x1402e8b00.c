// VA 0x1402e8b00, PDB extent 449 bytes
// tiny_glade::gui::gui_mod_editor::question
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_mod_editor::question
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_mod_editor.rs
   Extent: 449 */

undefined1
pdb_1402e8b00(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined1 auStack_128 [16];
  longlong *aplStack_118 [12];
  undefined2 uStack_b8;
  undefined1 uStack_b6;
  undefined1 uStack_b3;
  byte *pbStack_b0;
  undefined *puStack_a8;
  longlong *aplStack_a0 [10];
  undefined4 auStack_50 [2];
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_38 = param_5;
  auStack_50[0] = param_6;
  uStack_48 = param_7;
  uStack_40 = param_4;
  if (param_3 != 0) {
    pdb_140572d40(auStack_128);
    uStack_b8 = 0x200;
    uStack_b6 = 2;
    uStack_b3 = 2;
    pdb_140d7b910(&pbStack_b0,auStack_128,param_1);
    LOCK();
    *aplStack_a0[0] = *aplStack_a0[0] + -1;
    UNLOCK();
    if (*aplStack_a0[0] == 0) {
      pdb_140d71bf0(aplStack_a0);
    }
  }
  uStack_29 = 2;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(0x18,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x18);
  }
  *(undefined8 **)pbVar2 = &uStack_40;
  *(undefined1 **)(pbVar2 + 8) = &uStack_29;
  *(undefined4 **)(pbVar2 + 0x10) = auStack_50;
  puStack_a8 = &UNK_142f38418;
  uStack_2a = 1;
  pbStack_b0 = pbVar2;
  uVar3 = pdb_140d17be0(param_1);
  bVar1 = *(byte *)(param_1 + 0x10d);
  if (bVar1 - 2 < 2) {
    bVar1 = 1;
    if (*(char *)(param_1 + 0x10c) == '\x02') goto LAB_1402e8c1f;
  }
  else if (bVar1 != 0) goto LAB_1402e8c1f;
  bVar1 = 0;
LAB_1402e8c1f:
  uStack_2a = 0;
  pdb_14043abd0(auStack_128,param_1,uVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0x214),
                (ulonglong)bVar1 << 0x28 | 0x101000000,pbVar2,&UNK_142f38418);
  LOCK();
  *aplStack_118[0] = *aplStack_118[0] + -1;
  UNLOCK();
  if (*aplStack_118[0] == 0) {
    pdb_140d71bf0(aplStack_118);
  }
  return uStack_29;
}

