// VA 0x14289a170, PDB extent 962 bytes
// system_onboarding::hint_roof_shape::hint_roof_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_roof_shape::hint_roof_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_roof_shape.rs
   Extent: 962 */

void pdb_14289a170(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int *piVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  int aiStack_d8 [2];
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [28];
  int iStack_5c;
  undefined2 uStack_48;
  
  puVar4 = (ulonglong *)*param_4;
  lVar5 = param_4[1];
  uVar13 = *puVar4;
  uVar17 = 0;
  uVar15 = uVar13 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar15 = uVar17;
  }
  uVar19 = uVar13 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar19 = uVar17;
  }
  lVar12 = uVar15 * 0x10 + *(longlong *)(lVar5 + 8);
  uVar13 = *(ulonglong *)(lVar5 + 0x10) - uVar15;
  if (*(ulonglong *)(lVar5 + 0x10) < uVar15) {
    lVar12 = 8;
    uVar13 = uVar17;
  }
  lVar14 = uVar19 * 0x10 + *(longlong *)(lVar5 + 0x28);
  uVar15 = *(ulonglong *)(lVar5 + 0x30) - uVar19;
  if (*(ulonglong *)(lVar5 + 0x30) < uVar19) {
    lVar14 = 8;
    uVar15 = uVar17;
  }
  *puVar4 = (*(longlong *)(lVar5 + 0x40) - uVar15) - uVar13;
  lVar20 = uVar13 * 0x10 + lVar12;
  lVar18 = uVar15 * 0x10 + lVar14;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
  pcVar6 = (char *)*param_3;
  puVar7 = (undefined4 *)param_3[2];
  uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar5 = *param_5;
  puVar8 = (undefined4 *)param_5[2];
  do {
    while ((lVar12 == 0 || (lVar12 == lVar20))) {
      if ((lVar14 == 0) || (lVar14 == lVar18)) {
        if ((*(char *)*param_1 == '\0') && (*(int *)((char *)*param_1 + 8) == 0)) {
          puVar7 = (undefined4 *)*param_7;
          uStack_b8 = *(undefined8 *)(puVar7 + 4);
          uStack_c8 = *puVar7;
          uStack_c4 = puVar7[1];
          uStack_c0 = puVar7[2];
          uStack_bc = puVar7[3];
          pdb_1409efbd0(&uStack_90,*param_8,&uStack_c8,_DAT_142e36f3c,0x1fb);
          if (iStack_5c != 2) {
            uStack_98 = uStack_80;
            uStack_a8 = uStack_90;
            uStack_a4 = uStack_8c;
            uStack_a0 = uStack_88;
            uStack_9c = uStack_84;
            pdb_140b4d8a0(aiStack_d8,&uStack_a8);
            if (aiStack_d8[0] == 2) {
              uVar13 = pdb_140b54b40(*param_9,uStack_d0);
              if ((uVar13 & 0xffffffff) != 0) {
                lVar5 = param_10[1];
                uVar15 = uVar13 & 0xffffffff ^ 0xffffffff;
                if (((uVar15 < *(ulonglong *)(lVar5 + 0x10)) &&
                    (piVar16 = (int *)(uVar15 * 0x18 + *(longlong *)(lVar5 + 8)),
                    piVar16[4] == (int)(uVar13 >> 0x20))) && (*piVar16 != 0)) {
                  lVar12 = *param_10;
                  uVar13 = *(ulonglong *)(piVar16 + 2);
                  if (((uVar13 & 0xffffffff) < *(ulonglong *)(lVar12 + 0x38)) &&
                     ((*(ulonglong *)(*(longlong *)(lVar12 + 0x28) + (uVar13 >> 6 & 0x3ffffff) * 8)
                       >> (uVar13 & 0x3f) & 1) != 0)) {
                    cVar11 = pdb_140b77b50((ulonglong)(uint)~piVar16[1] * 0x58 +
                                           *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(lVar5 + 0x1a0) + 0x18 +
                                              (uVar13 >> 0x20) * 0x48) + 0x10 +
                                            ~*(ulonglong *)
                                              (*(longlong *)
                                                (*(longlong *)(lVar5 + 0x1a0) + 0x38 +
                                                (uVar13 >> 0x20) * 0x48) +
                                              *(longlong *)(lVar12 + 0x110) * 8) * 0x30));
                    if (cVar11 == '\0') {
                      uVar2 = *(undefined4 *)((longlong)param_6 + 0x1c);
                      puVar7 = (undefined4 *)param_6[2];
                      *puVar7 = uVar2;
                      uVar9 = *param_6;
                      pdb_14289c380(&uStack_90);
                      pdb_1420bf220(uVar9,7,&uStack_90);
                      if (((*(char *)(*param_2 + 0x410) == '\0') && (*pcVar6 == '\x01')) &&
                         (pcVar6[1] == '\0')) {
                        *puVar7 = uVar2;
                        pdb_14289c380(auStack_78);
                        uStack_48 = 0x700;
                        uStack_90 = 7;
                        pdb_1420bf2d0(uVar9,&uStack_90);
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return;
      }
      lVar1 = lVar14 + 0x10;
      lVar12 = 0;
      *puVar4 = *puVar4 + 1;
      cVar11 = *(char *)(lVar14 + 8);
      *puVar7 = uVar2;
      lVar14 = lVar1;
      if (cVar11 != '\0') goto LAB_14289a299;
LAB_14289a240:
      *pcVar6 = '\x01';
    }
    lVar1 = lVar12 + 0x10;
    *puVar4 = *puVar4 + 1;
    cVar11 = *(char *)(lVar12 + 8);
    *puVar7 = uVar2;
    lVar12 = lVar1;
    if (cVar11 == '\0') goto LAB_14289a240;
LAB_14289a299:
    pcVar6[1] = '\x01';
    *puVar8 = uVar3;
    lVar1 = *(longlong *)(lVar5 + 0x30);
    uVar9 = *(undefined8 *)(lVar5 + 0x40);
    if (lVar1 == *(longlong *)(lVar5 + 0x20)) {
      pdb_142d7e980(lVar5 + 0x20);
    }
    lVar10 = *(longlong *)(lVar5 + 0x28);
    *(undefined8 *)(lVar10 + lVar1 * 0x10) = uVar9;
    *(undefined1 *)(lVar10 + 8 + lVar1 * 0x10) = 7;
    *(longlong *)(lVar5 + 0x30) = lVar1 + 1;
    *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
  } while( true );
}

