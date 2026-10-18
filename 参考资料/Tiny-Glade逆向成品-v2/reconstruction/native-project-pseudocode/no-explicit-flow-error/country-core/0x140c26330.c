// VA 0x140c26330, PDB extent 359 bytes
// country_core::resources::clutter_registry::ClutterRegistry::unregister_external
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::ClutterRegistry::unregister_external
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 359 */

void pdb_140c26330(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lStack_b8;
  undefined1 auStack_b0 [112];
  
  if (param_3 != 0) {
    plVar1 = param_2 + param_3;
    do {
      lVar2 = *param_2;
      lStack_b8 = lVar2;
      uVar5 = pdb_1417c5550(param_1 + 0xa0,&lStack_b8);
      pdb_140cabe00(auStack_b0,param_1 + 0x80,uVar5,&lStack_b8);
      uVar5 = pdb_1417c5550(param_1 + 0xd0,&lStack_b8);
      lVar6 = pdb_140ca9ac0(param_1 + 0xb0,uVar5);
      if ((lVar6 != 0) && (uVar3 = *(ulonglong *)(param_1 + 0x78), uVar3 != 0)) {
        lVar6 = *(longlong *)(param_1 + 0x70);
        uVar8 = 0;
LAB_140c263f0:
        if (*(longlong *)(lVar6 + uVar8 * 8) != lVar2) goto code_r0x000140c263f6;
        uVar7 = uVar8 + 1;
        uVar9 = uVar8;
        if (uVar7 < uVar3) {
          if (((int)uVar3 + (int)uVar8 & 1U) == 0) {
            lVar4 = *(longlong *)(lVar6 + 8 + uVar8 * 8);
            if (lVar4 != lVar2) {
              *(longlong *)(lVar6 + uVar8 * 8) = lVar4;
              uVar9 = uVar8 + 1;
            }
            uVar7 = uVar8 + 2;
          }
          if (uVar3 - 2 != uVar8) {
            do {
              lVar4 = *(longlong *)(lVar6 + uVar7 * 8);
              if (lVar4 != lVar2) {
                *(longlong *)(lVar6 + uVar9 * 8) = lVar4;
                uVar9 = uVar9 + 1;
              }
              lVar4 = *(longlong *)(lVar6 + 8 + uVar7 * 8);
              if (lVar4 != lVar2) {
                *(longlong *)(lVar6 + uVar9 * 8) = lVar4;
                uVar9 = uVar9 + 1;
              }
              uVar7 = uVar7 + 2;
            } while (uVar3 != uVar7);
          }
        }
        *(ulonglong *)(param_1 + 0x78) = uVar9;
      }
LAB_140c26380:
      param_2 = param_2 + 1;
    } while (param_2 != plVar1);
  }
  return;
code_r0x000140c263f6:
  uVar8 = uVar8 + 1;
  if (uVar3 == uVar8) goto LAB_140c26380;
  goto LAB_140c263f0;
}

