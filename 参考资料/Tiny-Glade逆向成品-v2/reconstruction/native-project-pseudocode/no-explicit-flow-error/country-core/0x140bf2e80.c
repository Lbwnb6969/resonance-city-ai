// VA 0x140bf2e80, PDB extent 806 bytes
// country_core::resources::mouse_terrain_raycast::mouse_terrain_raycast::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_terrain_raycast.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::mouse_terrain_raycast::mouse_terrain_raycast::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mouse_terrain_raycast.rs
   Extent: 806 */

void pdb_140bf2e80(longlong *param_1,undefined8 *param_2,char *param_3)

{
  uint *puVar1;
  float fVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong unaff_RSI;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint *puVar22;
  bool bVar23;
  longlong lVar24;
  uint uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  longlong lStack_70;
  longlong lStack_60;
  
  fVar13 = _UNK_143065ea4;
  fVar12 = _DAT_143065ea0;
  fVar11 = _DAT_142f57bc0;
  uVar10 = _DAT_142e378e0;
  lVar7 = *param_1;
  lVar8 = param_1[1];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar22 = *(uint **)(lVar7 + 0xf8);
  puVar1 = puVar22 + *(longlong *)(lVar7 + 0x100);
  cVar4 = *(char *)(lVar7 + 0x108);
  cVar5 = *param_3;
  uVar3 = *(undefined8 *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0xc);
  lStack_60 = 8;
  lVar16 = 0;
  bVar23 = false;
  lStack_70 = 0;
  lVar20 = 0;
  lVar24 = 0;
  uVar25 = 0;
LAB_140bf2f0c:
  if (cVar4 == '\0') {
    if (uVar25 == (uint)lVar24) {
      do {
        if (puVar22 == puVar1) {
          return;
        }
        uVar25 = *puVar22;
        puVar22 = puVar22 + 1;
        lVar24 = *(longlong *)(*(longlong *)(lVar8 + 0x100) + 0x58 + (ulonglong)uVar25 * 0xa0);
      } while (lVar24 == 0);
      lVar17 = *(longlong *)(lVar8 + 0x100) + (ulonglong)uVar25 * 0xa0;
      uVar21 = (ulonglong)*(uint *)(lVar17 + 0x94);
      lVar16 = *(longlong *)(lVar8 + 0x1a0);
      lVar15 = *(longlong *)(lVar16 + 0x18 + uVar21 * 0x48);
      lVar20 = *(longlong *)(lVar16 + 0x38 + uVar21 * 0x48);
      uVar14 = *(ulonglong *)(lVar7 + 0x118);
      uVar25 = 0;
      if ((uVar14 < *(ulonglong *)(lVar17 + 0x88)) &&
         (*(longlong *)(*(longlong *)(lVar17 + 0x80) + uVar14 * 8) != 0)) {
        bVar23 = true;
        if ((uVar14 < *(ulonglong *)(lVar16 + 0x40 + uVar21 * 0x48)) &&
           (uVar14 = *(ulonglong *)(lVar20 + uVar14 * 8), uVar14 != 0)) {
          lStack_70 = *(longlong *)(lVar15 + 0x10 + ~uVar14 * 0x30);
        }
        else {
          lStack_70 = 0;
        }
      }
      else {
        bVar23 = false;
      }
      lVar16 = *(longlong *)
                (lVar15 + 0x10 + ~*(ulonglong *)(lVar20 + *(longlong *)(lVar7 + 0x110) * 8) * 0x30);
      lVar18 = ~*(ulonglong *)(lVar20 + *(longlong *)(lVar7 + 0x120) * 8) * 0x30;
      lVar20 = *(longlong *)(lVar15 + 0x10 + lVar18);
      unaff_RSI = *(longlong *)(lVar15 + 0x28 + lVar18);
      lStack_60 = *(longlong *)(lVar17 + 0x50);
      uVar14 = 0;
    }
    else {
      uVar14 = (ulonglong)uVar25;
    }
    uVar9 = ~*(uint *)(lStack_60 + 8 + uVar14 * 0x10);
  }
  else {
    uVar9 = uVar25;
    if (uVar25 == (uint)lVar24) {
      do {
        if (puVar22 == puVar1) {
          return;
        }
        uVar25 = *puVar22;
        puVar22 = puVar22 + 1;
        lVar24 = *(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + (ulonglong)uVar25 * 0x48);
      } while (lVar24 == 0);
      lVar16 = *(longlong *)(lVar8 + 0x1a0) + (ulonglong)uVar25 * 0x48;
      lVar15 = *(longlong *)(lVar16 + 0x18);
      lVar20 = *(longlong *)(lVar16 + 0x38);
      uVar25 = 0;
      if ((*(ulonglong *)(lVar7 + 0x118) < *(ulonglong *)(lVar16 + 0x40)) &&
         (uVar14 = *(ulonglong *)(lVar20 + *(ulonglong *)(lVar7 + 0x118) * 8), uVar14 != 0)) {
        lStack_70 = *(longlong *)(lVar15 + 0x10 + ~uVar14 * 0x30);
        bVar23 = true;
      }
      else {
        bVar23 = false;
      }
      lVar16 = *(longlong *)
                (lVar15 + 0x10 + ~*(ulonglong *)(lVar20 + *(longlong *)(lVar7 + 0x110) * 8) * 0x30);
      lVar17 = ~*(ulonglong *)(lVar20 + *(longlong *)(lVar7 + 0x120) * 8) * 0x30;
      lVar20 = *(longlong *)(lVar15 + 0x10 + lVar17);
      unaff_RSI = *(longlong *)(lVar15 + 0x28 + lVar17);
      uVar9 = uVar25;
    }
  }
  uVar14 = (ulonglong)uVar9;
  pfVar19 = (float *)(lStack_70 + uVar14 * 4);
  if (!bVar23) {
    pfVar19 = (float *)0x0;
  }
  lVar15 = uVar14 * 0x30 + lVar20;
  uVar25 = uVar25 + 1;
  if (*(char *)(lVar16 + uVar14) == '\0') goto LAB_140bf3150;
  uVar27 = CONCAT44((float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20) * fVar13 +
                    (float)((ulonglong)*param_2 >> 0x20),
                    (float)*(undefined8 *)((longlong)param_2 + 0xc) * fVar12 + (float)*param_2);
  fVar28 = *(float *)((longlong)param_2 + 0x14) * fVar11 + *(float *)(param_2 + 1);
  goto LAB_140bf317a;
LAB_140bf3150:
  if (cVar5 != '\0') {
    if (pfVar19 == (float *)0x0) {
      fVar26 = 0.0;
    }
    else {
      fVar26 = *pfVar19;
    }
    fVar28 = fVar26 * (float)uVar10;
    uVar27 = CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                      fVar26 * (float)((ulonglong)uVar10 >> 0x20),(float)uVar3 + fVar28);
    fVar28 = fVar28 + fVar2;
LAB_140bf317a:
    *(undefined4 *)(unaff_RSI + uVar14 * 4) = uVar6;
    *(undefined8 *)(lVar15 + 0x10) = uVar27;
    *(float *)(lVar15 + 0x18) = fVar28;
  }
  goto LAB_140bf2f0c;
}

