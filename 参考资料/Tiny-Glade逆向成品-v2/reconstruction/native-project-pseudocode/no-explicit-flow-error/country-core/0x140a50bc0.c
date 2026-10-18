// VA 0x140a50bc0, PDB extent 216 bytes
// country_core::systems::wall::snapping::snapping_audio::snapping_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::snapping::snapping_audio::snapping_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_audio.rs
   Extent: 216 */

void pdb_140a50bc0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uStack_38;
  undefined1 uStack_2c;
  undefined7 uStack_2b;
  undefined8 uStack_24;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x02') {
    uStack_38 = *(undefined8 *)(pcVar2 + 8);
    if (pcVar2[0x20] == '\x02') {
      return;
    }
    pdb_140df4540(&uStack_24,&uStack_38,*(undefined4 *)(pcVar2 + 4));
    uStack_2c = 1;
  }
  else {
    if (*pcVar2 != '\x03') {
      return;
    }
    uStack_38 = *(undefined8 *)(pcVar2 + 8);
    if (1 < (byte)pcVar2[0x20]) {
      return;
    }
    pdb_140df4540(&uStack_24,&uStack_38,*(undefined4 *)(pcVar2 + 4));
    uStack_2c = 2;
  }
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = *param_2;
  lVar4 = *(longlong *)(lVar3 + 0x30);
  uVar5 = *(undefined8 *)(lVar3 + 0x40);
  if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
    pdb_142d7e6e0(lVar3 + 0x20);
  }
  lVar6 = *(longlong *)(lVar3 + 0x28);
  lVar7 = lVar4 * 0x20;
  *(undefined8 *)(lVar6 + lVar7) = uVar5;
  *(undefined4 *)(lVar6 + 0x18 + lVar7) = uStack_1c;
  puVar1 = (undefined8 *)(lVar6 + 8 + lVar7);
  *puVar1 = CONCAT71(uStack_2b,uStack_2c);
  puVar1[1] = uStack_24;
  *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
  *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
  return;
}

