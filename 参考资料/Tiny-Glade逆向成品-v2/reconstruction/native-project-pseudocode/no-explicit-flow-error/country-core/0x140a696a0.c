// VA 0x140a696a0, PDB extent 577 bytes
// country_core::systems::steam::workshop_subscriptions::unsubscribe_from_workshop_items
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_subscriptions::unsubscribe_from_workshop_items
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
   Extent: 577 */

void pdb_140a696a0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar1 = (ulonglong *)*param_2;
  lVar13 = param_2[1];
  uVar2 = *puVar1;
  uVar11 = 0;
  uVar9 = uVar2 - *(ulonglong *)(lVar13 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar13 + 0x18)) {
    uVar9 = uVar11;
  }
  uVar12 = uVar2 - *(ulonglong *)(lVar13 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar13 + 0x38)) {
    uVar12 = uVar11;
  }
  lVar5 = uVar9 * 0x10 + *(longlong *)(lVar13 + 8);
  uVar2 = *(ulonglong *)(lVar13 + 0x10) - uVar9;
  if (*(ulonglong *)(lVar13 + 0x10) < uVar9) {
    lVar5 = 8;
    uVar2 = uVar11;
  }
  lVar10 = uVar12 * 0x10 + *(longlong *)(lVar13 + 0x28);
  uVar9 = *(ulonglong *)(lVar13 + 0x30) - uVar12;
  if (*(ulonglong *)(lVar13 + 0x30) < uVar12) {
    lVar10 = 8;
    uVar9 = uVar11;
  }
  *puVar1 = (*(longlong *)(lVar13 + 0x40) - uVar9) - uVar2;
  lVar13 = uVar2 * 0x10 + lVar5;
  lStack_58 = uVar9 * 0x10 + lVar10;
  param_1 = (undefined8 *)*param_1;
  while( true ) {
    if ((lVar5 == 0) || (lVar5 == lVar13)) {
      if ((lVar10 == 0) || (lVar10 == lStack_58)) {
        return;
      }
      lVar5 = 0;
      lVar6 = lVar10;
      lVar10 = lVar10 + 0x10;
    }
    else {
      lVar6 = lVar5;
      lVar5 = lVar5 + 0x10;
    }
    *puVar1 = *puVar1 + 1;
    uVar8 = *(undefined8 *)(lVar6 + 8);
    uStack_60 = uVar8;
    if (2 < *_DAT_143ca8e90) {
      puStack_70 = &uStack_60;
      pcStack_68 = pdb_140c91ab0;
      plStack_d0 = (longlong *)0x0;
      puStack_c8 = &UNK_1430407ce;
      uStack_c0 = 0x34;
      uStack_b8 = 0;
      puStack_b0 = &UNK_14304078e;
      uStack_a8 = 0x3f;
      uStack_a0 = 3;
      puStack_98 = &UNK_1430407ce;
      uStack_90 = 0x34;
      uStack_88 = 0x11400000001;
      puStack_80 = &UNK_14304093b;
      ppuStack_78 = &puStack_70;
      pdb_140f332f0(&uStack_49,&plStack_d0);
    }
    puVar7 = (undefined *)pub_142e32030();
    plVar3 = (longlong *)*param_1;
    LOCK();
    lVar6 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar6,1) != *plVar3 < 0) break;
    plStack_d0 = plVar3;
    puStack_c8 = puVar7;
    uVar8 = pub_142e32180(puVar7,uVar8);
    pdb_140a649b0(&plStack_d0,uVar8);
    LOCK();
    *plStack_d0 = *plStack_d0 + -1;
    UNLOCK();
    if (*plStack_d0 == 0) {
      pdb_140cb1c10(&plStack_d0);
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

