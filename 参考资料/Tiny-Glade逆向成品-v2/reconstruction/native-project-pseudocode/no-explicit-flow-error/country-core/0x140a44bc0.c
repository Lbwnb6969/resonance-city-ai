// VA 0x140a44bc0, PDB extent 394 bytes
// country_core::resources::steam::SteamMenuActionSet::read_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::steam::SteamMenuActionSet::read_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
   Extent: 394 */

undefined8 *
pdb_140a44bc0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined8 uVar13;
  longlong *plStack_78;
  undefined8 uStack_70;
  undefined1 auStack_65 [4];
  undefined8 uStack_61;
  
  uVar13 = pub_142e320b0();
  plVar2 = (longlong *)*param_4;
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    plStack_78 = plVar2;
    uStack_70 = uVar13;
    pub_142e32120(auStack_65,uVar13,param_3,*(undefined8 *)(param_2 + 8));
    bVar4 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x10));
    bVar5 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x18));
    bVar6 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x20));
    bVar7 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x28));
    bVar8 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x30));
    bVar9 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x38));
    bVar10 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x40));
    bVar11 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x48));
    bVar12 = pub_142e32130(uVar13,param_3,*(undefined8 *)(param_2 + 0x50));
    *param_1 = uStack_61;
    *(byte *)(param_1 + 1) = bVar4 & 1;
    *(byte *)((longlong)param_1 + 9) = bVar5 & 1;
    *(byte *)((longlong)param_1 + 10) = bVar6 & 1;
    *(byte *)((longlong)param_1 + 0xb) = bVar7 & 1;
    *(byte *)((longlong)param_1 + 0xc) = bVar8 & 1;
    *(byte *)((longlong)param_1 + 0xd) = bVar9 & 1;
    *(byte *)((longlong)param_1 + 0xe) = bVar10 & 1;
    *(byte *)((longlong)param_1 + 0xf) = bVar11 & 1;
    *(byte *)(param_1 + 2) = bVar12 & 1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      pdb_140cb1c10(&plStack_78);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

