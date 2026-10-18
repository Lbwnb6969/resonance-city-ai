// VA 0x140a44790, PDB extent 1067 bytes
// country_core::resources::steam::SteamMainActionSet::read_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::steam::SteamMainActionSet::read_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
   Extent: 1067 */

undefined4 *
pdb_140a44790(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined8 uVar35;
  undefined1 auStack_85 [4];
  undefined4 uStack_81;
  undefined4 uStack_7d;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uVar35 = pub_142e320b0();
  plStack_78 = (longlong *)*param_4;
  LOCK();
  lVar1 = *plStack_78;
  *plStack_78 = *plStack_78 + 1;
  UNLOCK();
  if (*plStack_78 != 0 && SCARRY8(lVar1,1) == *plStack_78 < 0) {
    uStack_70 = uVar35;
    pub_142e32120(auStack_85,uVar35,param_3,*(undefined8 *)(param_2 + 8));
    uVar6 = uStack_7d;
    uVar3 = uStack_81;
    pub_142e32120(auStack_85,uVar35,param_3,*(undefined8 *)(param_2 + 0x10));
    uVar7 = uStack_7d;
    uVar4 = uStack_81;
    pub_142e32120(auStack_85,uVar35,param_3,*(undefined8 *)(param_2 + 0x18));
    uVar8 = uStack_7d;
    uVar5 = uStack_81;
    pub_142e32120(auStack_85,uVar35,param_3,*(undefined8 *)(param_2 + 0x20));
    bVar9 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x28));
    bVar10 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x30));
    bVar11 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x38));
    bVar12 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x40));
    bVar13 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x48));
    bVar14 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x50));
    bVar15 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x58));
    bVar16 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x60));
    bVar17 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x68));
    bVar18 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x70));
    bVar19 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x78));
    bVar20 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x80));
    uVar35 = uStack_70;
    bVar21 = pub_142e32130(uStack_70,param_3,*(undefined8 *)(param_2 + 0x88));
    bVar22 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x90));
    bVar23 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0x98));
    bVar24 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xa0));
    bVar25 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xa8));
    bVar26 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xb0));
    bVar27 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xb8));
    bVar28 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xc0));
    bVar29 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 200));
    bVar30 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xd0));
    bVar31 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xd8));
    bVar32 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xe0));
    bVar33 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xe8));
    bVar34 = pub_142e32130(uVar35,param_3,*(undefined8 *)(param_2 + 0xf0));
    *param_1 = uVar3;
    param_1[1] = uVar6;
    param_1[2] = uVar4;
    param_1[3] = uVar7;
    param_1[4] = uVar5;
    param_1[5] = uVar8;
    param_1[6] = uStack_81;
    param_1[7] = uStack_7d;
    *(byte *)(param_1 + 8) = bVar9 & 1;
    *(byte *)((longlong)param_1 + 0x21) = bVar10 & 1;
    *(byte *)((longlong)param_1 + 0x22) = bVar11 & 1;
    *(byte *)((longlong)param_1 + 0x23) = bVar12 & 1;
    *(byte *)(param_1 + 9) = bVar13 & 1;
    *(byte *)((longlong)param_1 + 0x25) = bVar14 & 1;
    *(byte *)((longlong)param_1 + 0x26) = bVar15 & 1;
    *(byte *)((longlong)param_1 + 0x27) = bVar16 & 1;
    *(byte *)(param_1 + 10) = bVar17 & 1;
    *(byte *)((longlong)param_1 + 0x29) = bVar18 & 1;
    *(byte *)((longlong)param_1 + 0x2a) = bVar19 & 1;
    *(byte *)((longlong)param_1 + 0x2b) = bVar20 & 1;
    *(byte *)(param_1 + 0xb) = bVar21 & 1;
    *(byte *)((longlong)param_1 + 0x2d) = bVar22 & 1;
    *(byte *)((longlong)param_1 + 0x2e) = bVar23 & 1;
    *(byte *)((longlong)param_1 + 0x2f) = bVar24 & 1;
    *(byte *)(param_1 + 0xc) = bVar25 & 1;
    *(byte *)((longlong)param_1 + 0x31) = bVar26 & 1;
    *(byte *)((longlong)param_1 + 0x32) = bVar27 & 1;
    *(byte *)((longlong)param_1 + 0x33) = bVar28 & 1;
    *(byte *)(param_1 + 0xd) = bVar29 & 1;
    *(byte *)((longlong)param_1 + 0x35) = bVar30 & 1;
    *(byte *)((longlong)param_1 + 0x36) = bVar31 & 1;
    *(byte *)((longlong)param_1 + 0x37) = bVar32 & 1;
    *(byte *)(param_1 + 0xe) = bVar33 & 1;
    *(byte *)((longlong)param_1 + 0x39) = bVar34 & 1;
    LOCK();
    *plStack_78 = *plStack_78 + -1;
    UNLOCK();
    if (*plStack_78 == 0) {
      pdb_140cb1c10(&plStack_78);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

