// VA 0x140c49bc0, PDB extent 663 bytes
// country_core::systems::ui_wall_transform_gizmos::RigidXZTransform::transform_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::RigidXZTransform::transform_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 663 */

ulonglong * pdb_140c49bc0(ulonglong *param_1,float *param_2,longlong param_3)

{
  float *arg0;
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  ulonglong uStack_58;
  
  uVar2 = *(ulonglong *)(param_3 + 0x10);
  arg0 = (float *)(uVar2 * 8);
  lVar15 = param_3;
  if (arg0 < (float *)0x7ffffffffffffffd && uVar2 >> 0x3d == 0) goto LAB_140c49c18;
  uVar21 = 0;
  do {
    param_2 = arg0;
    pdb_142dc7e2a(uVar21);
    lVar15 = param_3;
LAB_140c49c18:
    uVar3 = *(undefined8 *)(lVar15 + 8);
    if (arg0 == (float *)0x0) {
      pbVar12 = (byte *)0x4;
      uStack_58 = 0;
      if (uVar2 == 0) goto LAB_140c49c67;
      goto LAB_140c49c59;
    }
    param_3 = lVar15;
    pdb_14007ee60();
    uVar21 = 4;
    pbVar12 = pub_1406abab0((ulonglong)arg0,4);
  } while (pbVar12 == (byte *)0x0);
  uStack_58 = uVar2;
  if (uVar2 != 0) {
LAB_140c49c59:
    pub_142e32760(pbVar12,uVar3,arg0);
  }
LAB_140c49c67:
  uVar4 = *(ulonglong *)(lVar15 + 0x28);
  uVar14 = uVar4 * 4;
  if (uVar14 < 0x7ffffffffffffffd && uVar4 >> 0x3e == 0) {
    if (uVar14 == 0) {
      pbVar13 = (byte *)0x4;
    }
    else {
      puVar5 = *(undefined4 **)(lVar15 + 0x20);
      pdb_14007ee60();
      uVar21 = 4;
      pbVar13 = pub_1406abab0(uVar14,4);
      if (pbVar13 == (byte *)0x0) goto LAB_140c49c8e;
      if (uVar4 != 0) {
        uVar14 = uVar4 - 1;
        if (uVar4 < uVar4 - 1) {
          uVar14 = uVar4;
        }
        if (uVar14 < 8) {
          lVar16 = 0;
          uVar14 = uVar4;
          puVar19 = puVar5;
        }
        else {
          uVar14 = uVar14 + 1;
          uVar18 = 8;
          if ((uVar14 & 7) != 0) {
            uVar18 = (ulonglong)((uint)uVar14 & 7);
          }
          lVar16 = uVar14 - uVar18;
          uVar14 = uVar4 - lVar16;
          puVar19 = puVar5 + lVar16;
          lVar20 = 0;
          do {
            uVar21 = *(undefined8 *)((longlong)(puVar5 + lVar20) + 8);
            uVar3 = *(undefined8 *)(puVar5 + lVar20 + 4);
            uVar11 = *(undefined8 *)((longlong)(puVar5 + lVar20 + 4) + 8);
            *(undefined8 *)(pbVar13 + lVar20 * 4) = *(undefined8 *)(puVar5 + lVar20);
            *(undefined8 *)(pbVar13 + lVar20 * 4 + 8) = uVar21;
            *(undefined8 *)(pbVar13 + lVar20 * 4 + 0x10) = uVar3;
            *(undefined8 *)(pbVar13 + lVar20 * 4 + 0x10 + 8) = uVar11;
            lVar20 = lVar20 + 8;
          } while (lVar16 != lVar20);
        }
        pbVar17 = pbVar13 + lVar16 * 4;
        do {
          if (puVar19 == puVar5 + uVar4) break;
          uVar1 = *puVar19;
          puVar19 = puVar19 + 1;
          *(undefined4 *)pbVar17 = uVar1;
          pbVar17 = pbVar17 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    uVar1 = *(undefined4 *)(lVar15 + 0x30);
    if (uVar2 != 0) {
      fVar7 = *param_2;
      fVar8 = param_2[1];
      fVar9 = param_2[2];
      fVar10 = param_2[3];
      uVar21 = *(undefined8 *)(param_2 + 4);
      lVar15 = 0;
      do {
        fVar23 = (float)((ulonglong)*(undefined8 *)(pbVar12 + lVar15) >> 0x20);
        fVar22 = (float)*(undefined8 *)(pbVar12 + lVar15);
        *(ulonglong *)(pbVar12 + lVar15) =
             CONCAT44(fVar23 * fVar10 + fVar22 * fVar8 + (float)((ulonglong)uVar21 >> 0x20),
                      fVar23 * fVar9 + fVar22 * fVar7 + (float)uVar21);
        lVar15 = lVar15 + 8;
      } while ((longlong)arg0 - lVar15 != 0);
    }
    *param_1 = uStack_58;
    param_1[1] = (ulonglong)pbVar12;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    param_1[4] = (ulonglong)pbVar13;
    param_1[5] = uVar4;
    *(undefined4 *)(param_1 + 6) = uVar1;
    return param_1;
  }
  uVar21 = 0;
LAB_140c49c8e:
  pdb_142dc7e2a(uVar21,uVar14);
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

