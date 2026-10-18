// VA 0x140ac8590, PDB extent 469 bytes
// country_core::systems::egui_input::EguiInputResource::on_mouse_wheel
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::egui_input::EguiInputResource::on_mouse_wheel
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
   Extent: 469 */

void pdb_140ac8590(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  undefined1 uStack_68;
  undefined6 uStack_66;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  bVar2 = *(byte *)(param_2 + 0x10);
  fVar15 = (float)*(undefined8 *)(param_2 + 8);
  fVar16 = (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20);
  uVar3 = *(undefined1 *)(param_1 + 0xbc);
  uStack_68 = (undefined1)((uint)*(undefined4 *)(param_1 + 0xb8) >> 0x18);
  uVar8 = CONCAT31((int3)*(undefined4 *)(param_1 + 0xb8),bVar2);
  lVar4 = *(longlong *)(param_1 + 0x30);
  if (lVar4 == *(longlong *)(param_1 + 0x20)) {
    pdb_142d7ede0(param_1 + 0x20);
  }
  lVar5 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar5 + 0x20 + lVar4 * 0x28) = uStack_58;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4 * 0x28);
  *puVar1 = CONCAT62(uStack_66,CONCAT11(uVar3,uStack_68));
  puVar1[1] = uStack_60;
  puVar1 = (undefined8 *)(lVar5 + lVar4 * 0x28);
  *puVar1 = CONCAT44(fVar15,0x11);
  puVar1[1] = CONCAT44(uVar8,fVar16) ^ 0x100000000;
  lVar5 = lVar4 + 1;
  *(longlong *)(param_1 + 0x30) = lVar5;
  if ((*(char *)(param_1 + 0xb9) == '\0') && (*(char *)(param_1 + 0xbc) == '\0')) {
    uVar9 = (uint)bVar2;
    uVar12 = (int)(uVar9 << 0x1f) >> 0x1f;
    uVar14 = (int)(uVar9 << 0x1f) >> 0x1f;
    auVar13._0_4_ = ~uVar12 & (uint)(_DAT_14304c8f0 * fVar15);
    auVar13._4_4_ = ~uVar14 & (uint)(_UNK_14304c8f4 * fVar16);
    auVar13._8_4_ = ~((int)(uVar9 << 0x1f) >> 0x1f) & (uint)(_UNK_14304c8f8 * 0.0);
    auVar13._12_4_ = ~((int)(uVar9 << 0x1f) >> 0x1f) & (uint)(_UNK_14304c8fc * 0.0);
    auVar7._4_4_ = (uint)fVar16 & uVar14;
    auVar7._0_4_ = (uint)fVar15 & uVar12;
    auVar7._8_8_ = 0;
    auVar13 = auVar13 | auVar7;
    uVar9 = (uint)*(byte *)(param_1 + 0xba);
    auVar10._0_4_ = (int)(uVar9 << 0x1f) >> 0x1f;
    auVar10._4_4_ = (int)(uVar9 << 0x1f) >> 0x1f;
    auVar10._8_4_ = (int)(uVar9 << 0x1f) >> 0x1f;
    auVar10._12_4_ = (int)(uVar9 << 0x1f) >> 0x1f;
    auVar11._4_4_ = auVar13._0_4_;
    auVar11._0_4_ = auVar13._4_4_;
    auVar11._8_4_ = auVar13._8_4_;
    auVar11._12_4_ = auVar13._12_4_;
    auVar11 = ~auVar10 & auVar11 | auVar13 & auVar10;
    if (lVar5 == *(longlong *)(param_1 + 0x20)) {
      pdb_142d7ede0(param_1 + 0x20);
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar6 + 0x20 + lVar5 * 0x28) = uStack_58;
    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar5 * 0x28);
    *puVar1 = CONCAT62(uStack_66,CONCAT11(uVar3,uStack_68));
    puVar1[1] = uStack_60;
    puVar1 = (undefined8 *)(lVar6 + lVar5 * 0x28);
    *puVar1 = CONCAT44(auVar11._4_4_,0xb);
    puVar1[1] = CONCAT44(uVar8,auVar11._0_4_) ^ 0x100000000;
    *(longlong *)(param_1 + 0x30) = lVar4 + 2;
  }
  return;
}

