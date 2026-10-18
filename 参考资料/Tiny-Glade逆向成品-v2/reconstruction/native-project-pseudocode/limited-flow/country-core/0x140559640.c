// VA 0x140559640, PDB extent 577 bytes
// country_core::systems::steam::SteamOverlayOpenResources::open_overlay_or_browser_to_webpage<alloc::string::String>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::SteamOverlayOpenResources::open_overlay_or_browser_to_webpage<alloc::string::String>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 577 */

void pdb_140559640(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  byte **ppbStack_c8;
  code *pcStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  longlong *plStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  byte ***pppbStack_50;
  longlong *plStack_48;
  ulonglong *puStack_40;
  byte *pbStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pbStack_b8 = (byte *)param_2[1];
  uVar2 = param_2[2];
  lVar3 = *(longlong *)(param_1 + 0x20);
  uStack_b0 = uVar2;
  puStack_40 = param_2;
  pbStack_38 = pbStack_b8;
  if (lVar3 == 0) {
    pdb_140559280(param_1,pbStack_b8,uVar2);
    pbVar6 = pbStack_38;
    if (*puStack_40 == 0) {
      return;
    }
    puStack_40 = (ulonglong *)&UNK_140f3c37e;
    uVar9 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar9,0,pbVar6);
    return;
  }
  puVar7 = (undefined8 *)pdb_1406d0830(lVar3);
  puVar8 = (undefined *)pub_142e31f10();
  plVar4 = (longlong *)*puVar7;
  LOCK();
  lVar1 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  if (*plVar4 != 0 && SCARRY8(lVar1,1) == *plVar4 < 0) {
    plStack_a8 = plVar4;
    puStack_a0 = puVar8;
    pub_142e31e90(puVar8);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      pdb_140cb1c10(&plStack_a8);
    }
    if (2 < *_DAT_143ca8e90) {
      ppbStack_c8 = &pbStack_b8;
      pcStack_c0 = pdb_1402ed420;
      plStack_a8 = (longlong *)0x0;
      puStack_a0 = &UNK_142f66eaa;
      uStack_98 = 0x1c;
      uStack_90 = 0;
      puStack_88 = &UNK_142f66e7d;
      uStack_80 = 0x2c;
      uStack_78 = 3;
      puStack_70 = &UNK_142f66eaa;
      uStack_68 = 0x1c;
      uStack_60 = 0x22900000001;
      puStack_58 = &UNK_142f66eec;
      pppbStack_50 = &ppbStack_c8;
      pdb_140f332f0(&uStack_29,&plStack_a8);
    }
    puVar7 = (undefined8 *)pdb_1406d0830(lVar3);
    uVar9 = pub_142e31ef0();
    plStack_48 = (longlong *)*puVar7;
    LOCK();
    lVar3 = *plStack_48;
    *plStack_48 = *plStack_48 + 1;
    UNLOCK();
    if (*plStack_48 != 0 && SCARRY8(lVar3,1) == *plStack_48 < 0) {
      plStack_a8 = plStack_48;
      puStack_a0 = (undefined *)uVar9;
      pdb_140567770(&plStack_a8,pbStack_38,uVar2);
      LOCK();
      *plStack_48 = *plStack_48 + -1;
      UNLOCK();
      if (*plStack_48 == 0) {
        pdb_140cb1c10(&plStack_a8);
      }
      if (*puStack_40 == 0) {
        return;
      }
      pub_1406abac0(pbStack_38,*puStack_40,1);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

