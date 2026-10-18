// VA 0x14281b680, PDB extent 388 bytes
// timberframe::timberframe_beam_count_change_audio::timberframe_beam_count_change_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/timberframe/src/timberframe_beam_count_change_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   timberframe::timberframe_beam_count_change_audio::timberframe_beam_count_change_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/timberframe/src/timberframe_beam_count_change_audio.rs
   Extent: 388 */

void pdb_14281b680(undefined8 *param_1,undefined4 param_2,longlong *param_3,longlong *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong *in_RDX;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar2 = param_1[1];
  uVar12 = *(ulonglong *)*param_1;
  uVar13 = 0;
  uVar14 = uVar12 - *(ulonglong *)(lVar2 + 0x18);
  if (uVar12 < *(ulonglong *)(lVar2 + 0x18)) {
    uVar14 = uVar13;
  }
  uVar15 = uVar12 - *(ulonglong *)(lVar2 + 0x38);
  if (uVar12 < *(ulonglong *)(lVar2 + 0x38)) {
    uVar15 = uVar13;
  }
  lVar11 = uVar14 * 0x28 + *(longlong *)(lVar2 + 8);
  lVar9 = uVar15 * 0x28 + *(longlong *)(lVar2 + 0x28);
  bVar16 = *(ulonglong *)(lVar2 + 0x10) < uVar14;
  uVar14 = *(ulonglong *)(lVar2 + 0x10) - uVar14;
  bVar18 = uVar14 == 0;
  if (bVar16) {
    uVar14 = uVar13;
  }
  if (bVar16) {
    lVar11 = 8;
  }
  uVar12 = lVar11 + -0x28 + uVar14 * 0x28;
  if (bVar16 || bVar18) {
    uVar12 = uVar13;
  }
  bVar17 = *(ulonglong *)(lVar2 + 0x30) < uVar15;
  uVar15 = *(ulonglong *)(lVar2 + 0x30) - uVar15;
  bVar19 = uVar15 == 0;
  if (bVar17) {
    lVar9 = 8;
    uVar15 = uVar13;
  }
  uVar10 = lVar9 + -0x28 + uVar15 * 0x28;
  if (bVar17 || bVar19) {
    uVar10 = uVar12;
  }
  uVar12 = uVar15 + uVar14;
  if (!bVar16 && !bVar18 || !bVar17 && !bVar19) {
    uVar12 = uVar13;
  }
  *(ulonglong *)*param_1 = *(longlong *)(lVar2 + 0x40) - uVar12;
  if (!bVar16 && !bVar18 || !bVar17 && !bVar19) {
    lVar2 = *param_3;
    iVar7 = *(int *)(lVar2 + 0x2c);
    plVar3 = (longlong *)*in_RDX;
    if ((iVar7 - (int)plVar3[2] == 1) && (*plVar3 != plVar3[1])) {
      uStack_58 = pdb_140a85110(uVar10);
      uStack_54 = param_2;
      pdb_140df4520(&uStack_48,&uStack_58);
      uStack_3c = pdb_140abde60(uVar10);
      uStack_50 = 6;
      *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
      lVar9 = *param_4;
      lVar11 = *(longlong *)(lVar9 + 0x30);
      uVar4 = *(undefined8 *)(lVar9 + 0x40);
      if (lVar11 == *(longlong *)(lVar9 + 0x20)) {
        pdb_142d7e6e0(lVar9 + 0x20);
      }
      lVar5 = *(longlong *)(lVar9 + 0x28);
      lVar8 = lVar11 * 0x20;
      *(ulonglong *)(lVar5 + 0x10 + lVar8) = CONCAT44(uStack_3c,uStack_40);
      *(undefined8 *)(lVar5 + lVar8) = CONCAT71(uStack_4f,uStack_50);
      ((undefined8 *)(lVar5 + lVar8))[1] = uStack_48;
      *(undefined8 *)(lVar5 + 0x18 + lVar8) = uVar4;
      *(longlong *)(lVar9 + 0x30) = lVar11 + 1;
      *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
      iVar7 = *(int *)(lVar2 + 0x2c);
    }
    uVar1 = *(undefined4 *)((longlong)in_RDX + 0x1c);
    puVar6 = (undefined4 *)in_RDX[2];
    *puVar6 = uVar1;
    *(int *)(plVar3 + 2) = iVar7;
    lVar2 = plVar3[1];
    *puVar6 = uVar1;
    *plVar3 = lVar2;
  }
  return;
}

