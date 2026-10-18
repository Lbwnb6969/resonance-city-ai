// VA 0x142896a50, PDB extent 2348 bytes
// system_onboarding::hint_terrain::hint_terrain_layering
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_terrain::hint_terrain_layering
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_terrain.rs
   Extent: 2348 */

void pdb_142896a50(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong param_6,undefined8 *param_7)

{
  longlong lVar1;
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined4 uStack_dc;
  uint auStack_a0 [12];
  undefined4 uStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar3 = (ulonglong *)*param_4;
  lVar4 = param_4[1];
  uVar11 = *puVar3;
  uVar16 = 0;
  uVar13 = uVar11 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar11 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar13 = uVar16;
  }
  uVar17 = uVar11 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar11 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar17 = uVar16;
  }
  lVar9 = uVar13 * 0x10 + *(longlong *)(lVar4 + 8);
  uVar11 = *(ulonglong *)(lVar4 + 0x10) - uVar13;
  if (*(ulonglong *)(lVar4 + 0x10) < uVar13) {
    lVar9 = 8;
    uVar11 = uVar16;
  }
  lVar10 = uVar17 * 0x10 + *(longlong *)(lVar4 + 0x28);
  uVar13 = *(ulonglong *)(lVar4 + 0x30) - uVar17;
  if (*(ulonglong *)(lVar4 + 0x30) < uVar17) {
    lVar10 = 8;
    uVar13 = uVar16;
  }
  *puVar3 = (*(longlong *)(lVar4 + 0x40) - uVar13) - uVar11;
  lVar18 = uVar11 * 0x10 + lVar9;
  lVar14 = uVar13 * 0x10 + lVar10;
  plVar5 = (longlong *)*param_3;
  puVar6 = (undefined4 *)param_3[2];
  uVar12 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_dc = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar4 = *param_5;
  puVar7 = (undefined4 *)param_5[2];
  uStack_70 = uVar12;
  do {
    while ((lVar9 != 0 && (lVar9 != lVar18))) {
      lVar1 = lVar9 + 0x10;
      *puVar3 = *puVar3 + 1;
      cVar2 = *(char *)(lVar9 + 8);
      lVar9 = lVar1;
      if (cVar2 != '\0') goto LAB_142896b8b;
LAB_142896bff:
      *puVar6 = uVar12;
      *plVar5 = *plVar5 + 1;
    }
    if ((lVar10 == 0) || (lVar10 == lVar14)) {
      if ((*(longlong *)*param_7 != 0) && (*(char *)*param_1 == '\x05')) {
        lVar4 = *param_2;
        uStack_134 = pdb_140a44d70(CONCAT71((int7)((ulonglong)lVar10 >> 8),0x10));
        uStack_138 = 0xca;
        uVar15 = 0;
        if (*(longlong *)(lVar4 + 0x298) != 0) {
          uVar15 = *(undefined8 *)(lVar4 + 0x290);
        }
        pdb_1420c0500(auStack_a0,&uStack_138,uVar15);
        **(undefined4 **)(param_6 + 0x10) = *(undefined4 *)(param_6 + 0x1c);
        uVar11 = 4;
        if (0xc4 < auStack_a0[0]) {
          uVar11 = (ulonglong)(auStack_a0[0] - 0xc5);
        }
                    /* WARNING: Could not recover jumptable at 0x000142896c9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1435ac5a8 + *(int *)(&UNK_1435ac5a8 + uVar11 * 4)))
                  (&UNK_1435ac5a8 + *(int *)(&UNK_1435ac5a8 + uVar11 * 4));
        return;
      }
      return;
    }
    lVar1 = lVar10 + 0x10;
    lVar9 = 0;
    *puVar3 = *puVar3 + 1;
    cVar2 = *(char *)(lVar10 + 8);
    lVar10 = lVar1;
    if (cVar2 == '\0') goto LAB_142896bff;
LAB_142896b8b:
    if (cVar2 == '\x01') {
      if ((char)plVar5[1] == '\0') {
        *puVar7 = uStack_dc;
        lVar1 = *(longlong *)(lVar4 + 0x30);
        uVar15 = *(undefined8 *)(lVar4 + 0x40);
        if (lVar1 == *(longlong *)(lVar4 + 0x20)) {
          pdb_142d7e980(lVar4 + 0x20);
        }
        lVar8 = *(longlong *)(lVar4 + 0x28);
        *(undefined8 *)(lVar8 + lVar1 * 0x10) = uVar15;
        *(undefined1 *)(lVar8 + 8 + lVar1 * 0x10) = 6;
        *(longlong *)(lVar4 + 0x30) = lVar1 + 1;
        *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
        uVar12 = uStack_70;
      }
      *puVar6 = uVar12;
      *(undefined1 *)(plVar5 + 1) = 1;
    }
  } while( true );
}

