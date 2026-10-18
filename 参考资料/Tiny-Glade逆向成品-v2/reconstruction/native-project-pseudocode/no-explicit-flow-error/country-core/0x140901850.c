// VA 0x140901850, PDB extent 418 bytes
// country_core::resources::walls::decorator::DeferredDecoratorOpEvents::unleash
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::DeferredDecoratorOpEvents::unleash
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 418 */

void pdb_140901850(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_130 [168];
  longlong *plStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined4 *puStack_60;
  longlong *plStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar1 = *param_1;
  lStack_80 = lVar1 + 8;
  lStack_78 = *(longlong *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  plStack_88 = *(longlong **)(lVar1 + 0x10) + lStack_78 * 0x15;
  uStack_70 = 0;
  if (lStack_78 != 0) {
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar2 = *param_2;
    puStack_60 = (undefined4 *)param_2[2];
    plVar4 = *(longlong **)(lVar1 + 0x10);
    plStack_68 = plStack_88;
    do {
      plStack_58 = plVar4 + 0x15;
      lVar1 = *plVar4;
      if (lVar1 == 5) {
        return;
      }
      pub_142e32760(auStack_130,plVar4 + 1,0xa0);
      *puStack_60 = uStack_4c;
      lVar5 = *(longlong *)(lVar2 + 0x30);
      uVar6 = *(undefined8 *)(lVar2 + 0x40);
      if (lVar5 == *(longlong *)(lVar2 + 0x20)) {
        pdb_142d91cc0(lVar2 + 0x20);
      }
      lVar3 = *(longlong *)(lVar2 + 0x28);
      lVar7 = lVar5 * 0xb0;
      *(longlong *)(lVar3 + lVar7) = lVar1;
      pub_142e32760(lVar3 + lVar7 + 8,auStack_130,0xa0);
      *(undefined8 *)(lVar3 + 0xa8 + lVar7) = uVar6;
      *(longlong *)(lVar2 + 0x30) = lVar5 + 1;
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
      plVar8 = plVar4 + 0x15;
      plVar4 = plStack_58;
    } while (plVar8 != plStack_68);
  }
  return;
}

