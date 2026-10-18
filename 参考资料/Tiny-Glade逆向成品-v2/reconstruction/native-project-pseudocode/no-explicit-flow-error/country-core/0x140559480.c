// VA 0x140559480, PDB extent 437 bytes
// country_core::systems::steam::SteamOverlayOpenResources::open_overlay_or_browser_to_webpage<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::SteamOverlayOpenResources::open_overlay_or_browser_to_webpage<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 437 */

void pdb_140559480(longlong *param_1,longlong *param_2,undefined *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  longlong *plStack_c0;
  code *pcStack_b8;
  longlong *plStack_b0;
  undefined *puStack_a8;
  longlong *plStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 **ppuStack_58;
  longlong **pplStack_50;
  undefined8 **ppuStack_48;
  longlong *plStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  puVar5 = _DAT_143ca8e90;
  uStack_30 = 0xfffffffffffffffe;
  lVar2 = param_1[4];
  plStack_b0 = param_2;
  puStack_a8 = param_3;
  if (lVar2 == 0) {
    uStack_30 = 0xfffffffffffffffe;
    plStack_c0 = param_2;
    pcStack_b8 = (code *)param_3;
    if (2 < *_DAT_143ca8e90) {
      pplStack_50 = &plStack_c0;
      ppuStack_48 = (undefined8 **)pdb_1402ed420;
      plStack_b0 = (longlong *)0x0;
      puStack_a8 = &UNK_142f66eaa;
      plStack_a0 = (longlong *)0x1c;
      puStack_98 = (undefined *)0x0;
      puStack_90 = &UNK_142f66e7d;
      uStack_88 = 0x2c;
      puStack_80 = (undefined *)0x3;
      puStack_78 = &UNK_142f66eaa;
      uStack_70 = 0x1c;
      puStack_68 = (undefined *)0x23500000001;
      puStack_60 = &UNK_142f66e54;
      ppuStack_58 = &pplStack_50;
      pdb_140f332f0(&uStack_31,&plStack_b0);
    }
    plStack_40 = (longlong *)pdb_140cad450(param_2,param_3);
    if (plStack_40 == (longlong *)0x0) {
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      lVar2 = *param_1;
      lVar1 = *(longlong *)(lVar2 + 0x30);
      uVar8 = *(undefined8 *)(lVar2 + 0x40);
      if (lVar1 == *(longlong *)(lVar2 + 0x20)) {
        pdb_142d7e8a0(lVar2 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + lVar1 * 8) = uVar8;
      *(longlong *)(lVar2 + 0x30) = lVar1 + 1;
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
    }
    else {
      if (1 < *puVar5) {
        pplStack_50 = &plStack_40;
        ppuStack_48 = (undefined8 **)pdb_140f56800;
        plStack_b0 = (longlong *)0x0;
        puStack_a8 = &UNK_142f66eaa;
        plStack_a0 = (longlong *)0x1c;
        puStack_98 = (undefined *)0x0;
        puStack_90 = &UNK_142f66e7d;
        uStack_88 = 0x2c;
        puStack_80 = (undefined *)0x2;
        puStack_78 = &UNK_142f66eaa;
        uStack_70 = 0x1c;
        puStack_68 = (undefined *)0x23d00000001;
        puStack_60 = &UNK_142f66ec6;
        ppuStack_58 = &pplStack_50;
        pdb_140f332f0(&uStack_31,&plStack_b0);
      }
      pdb_1404b38e0(&plStack_40);
    }
    return;
  }
  puVar6 = (undefined8 *)pdb_1406d0830(lVar2);
  puVar7 = (undefined *)pub_142e31f10();
  plVar3 = (longlong *)*puVar6;
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
    plStack_a0 = plVar3;
    puStack_98 = puVar7;
    pub_142e31e90(puVar7);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      pdb_140cb1c10(&plStack_a0);
    }
    if (2 < *_DAT_143ca8e90) {
      plStack_c0 = (longlong *)&plStack_b0;
      pcStack_b8 = pdb_1402ed420;
      plStack_a0 = (longlong *)0x0;
      puStack_98 = &UNK_142f66eaa;
      puStack_90 = (undefined *)0x1c;
      uStack_88 = 0;
      puStack_80 = &UNK_142f66e7d;
      puStack_78 = (undefined *)0x2c;
      uStack_70 = 3;
      puStack_68 = &UNK_142f66eaa;
      puStack_60 = (undefined *)0x1c;
      ppuStack_58 = (longlong ***)0x22900000001;
      pplStack_50 = (longlong **)&UNK_142f66eec;
      ppuStack_48 = &plStack_c0;
      pdb_140f332f0(&uStack_31,&plStack_a0);
    }
    puVar6 = (undefined8 *)pdb_1406d0830(lVar2);
    uVar8 = pub_142e31ef0();
    plStack_40 = (longlong *)*puVar6;
    LOCK();
    lVar2 = *plStack_40;
    *plStack_40 = *plStack_40 + 1;
    UNLOCK();
    if (*plStack_40 != 0 && SCARRY8(lVar2,1) == *plStack_40 < 0) {
      plStack_a0 = plStack_40;
      puStack_98 = (undefined *)uVar8;
      pdb_140567770(&plStack_a0,param_2,param_3);
      LOCK();
      *plStack_40 = *plStack_40 + -1;
      UNLOCK();
      if (*plStack_40 == 0) {
        pdb_140cb1c10(&plStack_a0);
      }
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

