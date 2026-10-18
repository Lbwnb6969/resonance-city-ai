// VA 0x140a28760, PDB extent 641 bytes
// country_core::systems::steam::missing_mods::subscribe_to_workshop_items
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::missing_mods::subscribe_to_workshop_items
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 641 */

void pdb_140a28760(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  code *pcVar8;
  char cVar9;
  undefined *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  longlong *plStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  ulonglong *puStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_70 = (ulonglong *)*param_3;
  lVar3 = param_3[1];
  uVar4 = *puStack_70;
  uVar15 = 0;
  uVar17 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar17 = uVar15;
  }
  uVar16 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar16 = uVar15;
  }
  lVar13 = uVar17 * 0x10 + *(longlong *)(lVar3 + 8);
  uVar4 = *(ulonglong *)(lVar3 + 0x10) - uVar17;
  if (*(ulonglong *)(lVar3 + 0x10) < uVar17) {
    lVar13 = 8;
    uVar4 = uVar15;
  }
  lVar12 = uVar16 * 0x10 + *(longlong *)(lVar3 + 0x28);
  uVar17 = *(ulonglong *)(lVar3 + 0x30) - uVar16;
  if (*(ulonglong *)(lVar3 + 0x30) < uVar16) {
    lVar12 = 8;
    uVar17 = uVar15;
  }
  *puStack_70 = (*(longlong *)(lVar3 + 0x40) - uVar17) - uVar4;
  lStack_68 = uVar4 * 0x10 + lVar13;
  lStack_60 = uVar17 * 0x10 + lVar12;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar3 = *param_2;
  puVar5 = (undefined4 *)param_2[2];
  puStack_58 = (undefined8 *)*param_1;
  while( true ) {
    do {
      if ((lVar13 == 0) || (lVar13 == lStack_68)) {
        if ((lVar12 == 0) || (lVar12 == lStack_60)) {
          return;
        }
        lVar13 = 0;
        lVar1 = lVar12 + 0x10;
        lVar14 = lVar12;
      }
      else {
        lVar1 = lVar12;
        lVar14 = lVar13;
        lVar13 = lVar13 + 0x10;
      }
      lVar12 = lVar1;
      *puStack_70 = *puStack_70 + 1;
      uVar6 = *(undefined8 *)(lVar14 + 8);
      *puVar5 = uVar2;
      uStack_78 = uVar6;
      cVar9 = pdb_1403b05d0(lVar3 + 0x48,uVar6);
    } while (cVar9 != '\0');
    if (2 < *_DAT_143ca8e90) {
      puStack_e8 = &uStack_78;
      pcStack_e0 = pdb_140c91ab0;
      plStack_d8 = (longlong *)0x0;
      puStack_d0 = &UNK_1430392eb;
      uStack_c8 = 0x2a;
      uStack_c0 = 0;
      puStack_b8 = &UNK_143039278;
      uStack_b0 = 0x35;
      uStack_a8 = 3;
      puStack_a0 = &UNK_1430392eb;
      uStack_98 = 0x2a;
      uStack_90 = 0x11d00000001;
      puStack_88 = &UNK_1430392ae;
      ppuStack_80 = &puStack_e8;
      pdb_140f332f0(&uStack_49,&plStack_d8);
    }
    puVar10 = (undefined *)pub_142e32030();
    plVar7 = (longlong *)*puStack_58;
    LOCK();
    lVar1 = *plVar7;
    *plVar7 = *plVar7 + 1;
    UNLOCK();
    if (*plVar7 == 0 || SCARRY8(lVar1,1) != *plVar7 < 0) break;
    plStack_d8 = plVar7;
    puStack_d0 = puVar10;
    uVar11 = pub_142e32080(puVar10,uVar6);
    pdb_140a64100(&plStack_d8,uVar11,0x521,uVar6);
    LOCK();
    *plStack_d8 = *plStack_d8 + -1;
    UNLOCK();
    if (*plStack_d8 == 0) {
      pdb_140cb1c10(&plStack_d8);
    }
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}

