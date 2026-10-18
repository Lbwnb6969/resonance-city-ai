// VA 0x142895fc0, PDB extent 2252 bytes
// system_onboarding::hint_disable_snapping::hint_disable_snapping
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_disable_snapping.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_disable_snapping::hint_disable_snapping
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_disable_snapping.rs
   Extent: 2252 */

void pdb_142895fc0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong param_6)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined8 *puStack_f8;
  uint uStack_ec;
  uint auStack_a0 [12];
  longlong *plStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar3 = (ulonglong *)*param_4;
  lVar16 = param_4[1];
  uVar13 = *puVar3;
  uVar17 = 0;
  uVar9 = uVar13 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar9 = uVar17;
  }
  uVar12 = uVar13 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar12 = uVar17;
  }
  lVar18 = uVar9 * 0x10 + *(longlong *)(lVar16 + 8);
  uVar13 = *(ulonglong *)(lVar16 + 0x10);
  lVar14 = uVar12 * 0x10 + *(longlong *)(lVar16 + 0x28);
  uVar6 = uVar13 - uVar9;
  if (uVar13 < uVar9) {
    lVar18 = 8;
    uVar9 = uVar13;
    uVar6 = uVar17;
  }
  uVar4 = *(ulonglong *)(lVar16 + 0x30);
  uVar8 = uVar4 - uVar12;
  if (uVar4 < uVar12) {
    lVar14 = 8;
    uVar8 = uVar17;
  }
  lVar16 = *(longlong *)(lVar16 + 0x40);
  if (uVar4 < uVar12) {
    uVar12 = uVar4;
  }
  uVar7 = (lVar16 - uVar8) - uVar6;
  *puVar3 = uVar7;
  uVar13 = ((uVar12 + lVar16 + uVar9) - uVar4) - uVar13;
  lVar16 = lVar14;
  lVar19 = lVar18;
  do {
    uVar13 = uVar13 + 1;
    if ((lVar19 == 0) || (lVar19 == uVar6 * 0x10 + lVar18)) {
      if ((lVar16 == 0) || (lVar16 == uVar8 * 0x10 + lVar14)) {
        puStack_f8 = param_3;
        plStack_70 = param_2;
        if (*(char *)*param_1 != '\x01') {
          if ((uVar17 & 1) != 0) {
            pcVar5 = (char *)*param_3;
            if (*pcVar5 == '\0') {
              *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
              lVar16 = *param_5;
              lVar18 = *(longlong *)(lVar16 + 0x30);
              uVar11 = *(undefined8 *)(lVar16 + 0x40);
              if (lVar18 == *(longlong *)(lVar16 + 0x20)) {
                pdb_142d7e980(lVar16 + 0x20,uVar7);
              }
              lVar14 = *(longlong *)(lVar16 + 0x28);
              *(undefined8 *)(lVar14 + lVar18 * 0x10) = uVar11;
              *(undefined1 *)(lVar14 + 8 + lVar18 * 0x10) = 3;
              *(longlong *)(lVar16 + 0x30) = lVar18 + 1;
              *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
            }
            *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
            *pcVar5 = '\x01';
          }
          return;
        }
        bVar1 = ((char *)*param_1)[1];
        lVar16 = *param_2;
        uStack_144 = pdb_140a44d70(0x10);
        uStack_148 = 0xca;
        uVar11 = 0;
        if (*(longlong *)(lVar16 + 0x298) != 0) {
          uVar11 = *(undefined8 *)(lVar16 + 0x290);
        }
        pdb_1420c0500(auStack_a0,&uStack_148,uVar11);
        uVar2 = *(undefined4 *)(param_6 + 0x1c);
        **(undefined4 **)(param_6 + 0x10) = uVar2;
        uVar13 = 4;
        if (0xc4 < auStack_a0[0]) {
          uVar13 = (ulonglong)(auStack_a0[0] - 0xc5);
        }
        uStack_ec = (uint)bVar1;
        plStack_70 = (longlong *)CONCAT44(plStack_70._4_4_,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000142896155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1435ac544 + *(int *)(&UNK_1435ac544 + uVar13 * 4)))
                  (&UNK_1435ac544 + *(int *)(&UNK_1435ac544 + uVar13 * 4));
        return;
      }
      lVar10 = 0;
      lVar15 = lVar16 + 0x10;
      lVar19 = lVar16;
    }
    else {
      lVar10 = lVar19 + 0x10;
      lVar15 = lVar16;
    }
    *puVar3 = uVar13;
    uVar17 = (ulonglong)(byte)((byte)uVar17 | *(byte *)(lVar19 + 8));
    uVar7 = (ulonglong)(*(byte *)(lVar19 + 8) ^ 1);
    lVar16 = lVar15;
    lVar19 = lVar10;
  } while( true );
}

