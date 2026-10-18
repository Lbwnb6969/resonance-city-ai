// VA 0x140a69900, PDB extent 663 bytes
// country_core::systems::terrain::delayed_terrain_changed_msg::delayed_terrain_changed_msg
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/delayed_terrain_changed_msg.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::terrain::delayed_terrain_changed_msg::delayed_terrain_changed_msg
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/delayed_terrain_changed_msg.rs
   Extent: 663 */

void pdb_140a69900(undefined8 *param_1,longlong *param_2,ulonglong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  byte bVar16;
  undefined8 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  
  uVar23 = param_3[1];
  uVar22 = param_3[2];
  if (uVar22 != 0) {
    uVar7 = *param_1;
    uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
    uVar8 = *param_5;
    puVar9 = (undefined4 *)param_5[2];
    uVar4 = *(undefined4 *)((longlong)param_6 + 0x1c);
    uVar10 = *param_6;
    puVar11 = (undefined4 *)param_6[2];
    uVar5 = *(undefined4 *)((longlong)param_4 + 0x1c);
    lVar12 = *param_4;
    puVar13 = (undefined4 *)param_4[2];
    lVar24 = 0;
    bVar16 = 0;
    do {
      piVar1 = (int *)(uVar23 + lVar24);
      *piVar1 = *piVar1 + -1;
      if (!(bool)(*piVar1 != 0 | bVar16)) {
        puVar17 = (undefined8 *)pdb_140bf45b0(uVar7,&UNK_14331c8d8);
        if ((puVar17 == (undefined8 *)0x0) ||
           (lVar18 = (**(code **)(puVar17[1] + 0x18))(*puVar17), lVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143040a10);
        }
        uVar14 = *(undefined8 *)(lVar18 + 8);
        uVar15 = *(undefined8 *)(lVar18 + 0x10);
        *puVar9 = uVar3;
        pdb_1419c0d50(uVar8,uVar14,uVar15);
        *puVar13 = uVar5;
        lVar18 = *(longlong *)(lVar12 + 0x30);
        uVar14 = *(undefined8 *)(lVar12 + 0x40);
        if (lVar18 == *(longlong *)(lVar12 + 0x20)) {
          pdb_142d7e8a0(lVar12 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar12 + 0x28) + lVar18 * 8) = uVar14;
        *(longlong *)(lVar12 + 0x30) = lVar18 + 1;
        *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
        puVar17 = (undefined8 *)pdb_140bf45b0(uVar7,&UNK_14331c9e0);
        if ((puVar17 == (undefined8 *)0x0) ||
           (lVar18 = (**(code **)(puVar17[1] + 0x18))(*puVar17), lVar18 == 0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143040a28);
        }
        uVar14 = *(undefined8 *)(lVar18 + 8);
        uVar15 = *(undefined8 *)(lVar18 + 0x10);
        *puVar11 = uVar4;
        pdb_1419c0d50(uVar10,uVar14,uVar15);
        bVar16 = 1;
      }
      lVar24 = lVar24 + 4;
    } while (uVar22 * 4 - lVar24 != 0);
  }
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  cVar2 = *(char *)(*param_2 + 8);
  *(undefined1 *)(*param_2 + 8) = 0;
  if (cVar2 == '\x01') {
    if (uVar22 == *param_3) {
      pdb_142d8d710(param_3);
      uVar23 = param_3[1];
    }
    *(undefined4 *)(uVar23 + uVar22 * 4) = 2;
    uVar22 = uVar22 + 1;
    param_3[2] = uVar22;
  }
  if (uVar22 != 0) {
    uVar23 = param_3[1];
    uVar19 = 0;
    do {
      if (*(int *)(uVar23 + uVar19 * 4) == 0) {
        uVar21 = uVar19 + 1;
        uVar20 = uVar19;
        if (uVar21 < uVar22) {
          if (((int)uVar22 + (int)uVar19 & 1U) == 0) {
            iVar6 = *(int *)(uVar23 + 4 + uVar19 * 4);
            if (iVar6 != 0) {
              *(int *)(uVar23 + uVar19 * 4) = iVar6;
              uVar20 = uVar19 + 1;
            }
            uVar21 = uVar19 + 2;
          }
          if (uVar22 - 2 != uVar19) {
            do {
              iVar6 = *(int *)(uVar23 + uVar21 * 4);
              if (iVar6 != 0) {
                *(int *)(uVar23 + uVar20 * 4) = iVar6;
                uVar20 = uVar20 + 1;
              }
              iVar6 = *(int *)(uVar23 + 4 + uVar21 * 4);
              if (iVar6 != 0) {
                *(int *)(uVar23 + uVar20 * 4) = iVar6;
                uVar20 = uVar20 + 1;
              }
              uVar21 = uVar21 + 2;
            } while (uVar22 != uVar21);
          }
        }
        param_3[2] = uVar20;
        return;
      }
      uVar19 = uVar19 + 1;
    } while (uVar22 != uVar19);
  }
  return;
}

