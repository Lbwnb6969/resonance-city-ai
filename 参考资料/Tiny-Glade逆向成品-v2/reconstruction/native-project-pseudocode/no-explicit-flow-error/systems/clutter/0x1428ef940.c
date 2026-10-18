// VA 0x1428ef940, PDB extent 319 bytes
// system_clutter::inter_roof_merlons::inter_roof_merlons_audio::request_inter_roof_merlon_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_roof_merlons/inter_roof_merlons_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_clutter::inter_roof_merlons::inter_roof_merlons_audio::request_inter_roof_merlon_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_roof_merlons/inter_roof_merlons_audio.rs
   Extent: 319 */

void pdb_1428ef940(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (*(char *)*param_1 != '\t') {
    lVar2 = *param_3;
    if (*(ulonglong *)(param_5 + 0x10) < *(ulonglong *)(lVar2 + 0x10)) {
      pdb_140a8e090(&uStack_4c,*param_4);
      uStack_5c = CONCAT31(uStack_5c._1_3_,8);
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      lVar3 = *param_2;
      lVar4 = *(longlong *)(lVar3 + 0x30);
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
        pdb_142d7ede0(lVar3 + 0x20);
      }
      lVar6 = *(longlong *)(lVar3 + 0x28);
      *(undefined8 *)(lVar6 + lVar4 * 0x28) = uVar5;
      puVar1 = (undefined4 *)(lVar6 + 0x14 + lVar4 * 0x28);
      *puVar1 = uStack_50;
      puVar1[1] = uStack_4c;
      puVar1[2] = uStack_48;
      puVar1[3] = uStack_44;
      puVar1 = (undefined4 *)(lVar6 + 8 + lVar4 * 0x28);
      *puVar1 = uStack_5c;
      puVar1[1] = uStack_58;
      puVar1[2] = uStack_54;
      puVar1[3] = uStack_50;
      *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
    }
    plVar7 = (longlong *)*param_6;
    if (*(longlong *)(param_5 + 0x18) != *plVar7) {
      pdb_140a8e090(&uStack_4c,*param_4);
      uStack_5c = CONCAT31(uStack_5c._1_3_,9);
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      lVar3 = *param_2;
      lVar4 = *(longlong *)(lVar3 + 0x30);
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
        pdb_142d7ede0(lVar3 + 0x20);
      }
      lVar6 = *(longlong *)(lVar3 + 0x28);
      *(undefined8 *)(lVar6 + lVar4 * 0x28) = uVar5;
      puVar1 = (undefined4 *)(lVar6 + 0x14 + lVar4 * 0x28);
      *puVar1 = uStack_50;
      puVar1[1] = uStack_4c;
      puVar1[2] = uStack_48;
      puVar1[3] = uStack_44;
      puVar1 = (undefined4 *)(lVar6 + 8 + lVar4 * 0x28);
      *puVar1 = uStack_5c;
      puVar1[1] = uStack_58;
      puVar1[2] = uStack_54;
      puVar1[3] = uStack_50;
      *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
    }
    pdb_1421a87e0(param_5,lVar2);
    *(longlong *)(param_5 + 0x18) = *plVar7;
  }
  return;
}

