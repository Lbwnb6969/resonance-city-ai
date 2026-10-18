// VA 0x140b72080, PDB extent 2372 bytes
// country_core::systems::ui::signifiers::animation::signifier_animation_t
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::signifiers::animation::signifier_animation_t
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/animation.rs
   Extent: 2372 */

void pdb_140b72080(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  char cVar13;
  bool bVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined *puVar29;
  undefined *puVar30;
  uint *puVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_100;
  undefined4 *puStack_f0;
  undefined4 *puStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  longlong lStack_a8;
  longlong lStack_98;
  undefined4 *puStack_90;
  
  lVar28 = 0;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    bVar14 = false;
    goto LAB_140b72258;
  }
  puVar29 = &UNK_14305baa0;
  lVar24 = 0x47;
  uVar22 = 0x47;
  lVar15 = pdb_140b73fd0(&UNK_14305baa0);
  if (lVar15 != 1) {
LAB_140b7212b:
    puVar17 = &UNK_14305b840;
    puVar30 = &UNK_14305b806;
    do {
      pbVar1 = puVar17 + -1;
      uVar21 = (uint)(char)*pbVar1;
      if ((int)uVar21 < 0) {
        bVar4 = puVar17[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar17[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar17 + -4;
            puVar17 = puVar17 + -4;
            uVar21 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar17 = puVar17 + -3;
            uVar21 = bVar5 & 0xf;
          }
          uVar21 = bVar4 & 0x3f | uVar21 << 6;
        }
        else {
          puVar17 = puVar17 + -2;
          uVar21 = bVar4 & 0x1f;
        }
        uVar21 = (uint)(*pbVar1 & 0x3f) | uVar21 << 6;
        if (uVar21 != 0x5c) goto LAB_140b721b9;
LAB_140b721d6:
        if ((undefined *)0x3a < puVar17 + -0x14305b805) goto LAB_140b72825;
        lVar15 = 0x39 - (longlong)(puVar17 + -0x14305b806);
        puVar30 = puVar17 + 1;
        goto LAB_140b721fa;
      }
      puVar17 = puVar17 + -1;
      if (uVar21 == 0x5c) goto LAB_140b721d6;
LAB_140b721b9:
      if (uVar21 == 0x2f) goto LAB_140b721d6;
    } while (puVar17 != &UNK_14305b806);
    lVar15 = 0x3a;
LAB_140b721fa:
    plVar18 = (longlong *)pdb_140e97000();
    if (((char)plVar18[0xd] == '\x01') ||
       (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 != (longlong *)0x0)) {
      if (*plVar18 != 0) goto LAB_140b727e9;
      *plVar18 = -1;
      uStack_100 = pdb_140e94f10(plVar18 + 1,puVar29,lVar24,puVar30,lVar15,1,0);
      *plVar18 = *plVar18 + 1;
      bVar14 = true;
LAB_140b72258:
      uVar21 = _DAT_142e37820;
      fVar12 = _DAT_142e36f28;
      lVar15 = *param_1;
      lVar24 = param_1[1];
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
      puVar31 = *(uint **)(lVar15 + 0xf8);
      puVar3 = puVar31 + *(longlong *)(lVar15 + 0x100);
      cVar13 = *(char *)(lVar15 + 0x108);
      lVar7 = *param_2;
      lStack_e0 = 8;
      lStack_a8 = 0;
      lStack_c8 = 0;
      bVar11 = false;
      lStack_98 = 0;
      bVar10 = false;
      uVar23 = 0;
      do {
        fVar35 = fVar12;
        if (cVar13 == '\0') {
          if (uVar23 == (uint)lVar28) {
            do {
              if (puVar31 == puVar3) goto LAB_140b7278d;
              uVar23 = *puVar31;
              puVar31 = puVar31 + 1;
              lVar28 = *(longlong *)
                        (*(longlong *)(lVar24 + 0x100) + 0x58 + (ulonglong)uVar23 * 0xa0);
            } while (lVar28 == 0);
            lVar27 = *(longlong *)(lVar24 + 0x100) + (ulonglong)uVar23 * 0xa0;
            uVar16 = (ulonglong)*(uint *)(lVar27 + 0x94);
            lVar19 = *(longlong *)(lVar24 + 0x1a0);
            lVar20 = *(longlong *)(lVar19 + 0x18 + uVar16 * 0x48);
            lVar8 = *(longlong *)(lVar19 + 0x38 + uVar16 * 0x48);
            uVar22 = *(ulonglong *)(lVar15 + 0x118);
            if ((uVar22 < *(ulonglong *)(lVar27 + 0x88)) &&
               (*(longlong *)(*(longlong *)(lVar27 + 0x80) + uVar22 * 8) != 0)) {
              bVar11 = true;
              if ((uVar22 < *(ulonglong *)(lVar19 + 0x40 + uVar16 * 0x48)) &&
                 (uVar22 = *(ulonglong *)(lVar8 + uVar22 * 8), uVar22 != 0)) {
                lStack_98 = *(longlong *)(lVar20 + 0x10 + ~uVar22 * 0x30);
              }
              else {
                lStack_98 = 0;
              }
            }
            else {
              bVar11 = false;
            }
            lVar19 = ~*(ulonglong *)(lVar8 + *(longlong *)(lVar15 + 0x110) * 8) * 0x30;
            lStack_a8 = *(longlong *)(lVar20 + 0x10 + lVar19);
            puStack_b8 = *(undefined4 **)(lVar20 + 0x28 + lVar19);
            uVar22 = *(ulonglong *)(lVar15 + 0x120);
            if ((*(ulonglong *)(lVar27 + 0x88) <= uVar22) ||
               (*(longlong *)(*(longlong *)(lVar27 + 0x80) + uVar22 * 8) == 0)) {
              lStack_e0 = *(longlong *)(lVar27 + 0x50);
              lVar19 = (ulonglong)~*(uint *)(lStack_e0 + 8) * 0x1c + lStack_a8;
              lVar20 = 0;
              if (bVar11) {
                lVar20 = lStack_98;
              }
              puStack_90 = puStack_b8 + ~*(uint *)(lStack_e0 + 8);
              uVar23 = 0;
LAB_140b72717:
              bVar10 = false;
              pfVar25 = (float *)0x0;
              puStack_c0 = puStack_e8;
              goto LAB_140b7271b;
            }
            lVar19 = ~*(ulonglong *)(lVar8 + uVar22 * 8) * 0x30;
            lStack_c8 = *(longlong *)(lVar20 + 0x10 + lVar19);
            lStack_d8 = *(longlong *)(lVar20 + 0x28 + lVar19);
            lStack_e0 = *(longlong *)(lVar27 + 0x50);
            uVar22 = (ulonglong)~*(uint *)(lStack_e0 + 8);
            lVar19 = uVar22 * 0x1c + lStack_a8;
            puStack_90 = puStack_b8 + uVar22;
            uVar23 = 0;
            lVar20 = 0;
            if (bVar11) {
              lVar20 = lStack_98;
            }
          }
          else {
            uVar22 = (ulonglong)~*(uint *)(lStack_e0 + 8 + (ulonglong)uVar23 * 0x10);
            lVar19 = lStack_a8 + uVar22 * 0x1c;
            puStack_90 = puStack_b8 + uVar22;
            lVar20 = 0;
            if (bVar11) {
              lVar20 = lStack_98;
            }
            if (!bVar10) goto LAB_140b72717;
          }
          pfVar25 = (float *)(lStack_c8 + uVar22 * 8);
          puStack_c0 = (undefined4 *)(lStack_d8 + uVar22 * 4);
          bVar10 = true;
          puStack_e8 = puStack_c0;
LAB_140b7271b:
          fVar32 = *(float *)(lVar19 + 0x10);
          if ((fVar32 == 0.0) && (!NAN(fVar32))) goto LAB_140b72733;
LAB_140b725d0:
          fVar34 = *(float *)(lVar7 + 0x28);
          if (lVar20 != 0) {
            fVar34 = (float)((uint)fVar34 ^ uVar21);
          }
          *puStack_90 = uVar6;
          fVar34 = (fVar12 / fVar32) * fVar34 + *(float *)(lVar19 + 0x14);
          fVar32 = 0.0;
          if (0.0 <= fVar34) {
            fVar32 = fVar34;
          }
          if (fVar32 <= fVar12) {
            fVar35 = fVar32;
          }
        }
        else {
          if (uVar23 != (uint)lVar28) {
            uVar22 = (ulonglong)uVar23;
            lVar19 = lStack_a8 + uVar22 * 0x1c;
            puStack_90 = puStack_b8 + uVar22;
            pfVar25 = (float *)0x0;
            lVar20 = 0;
            if (bVar11) {
              lVar20 = lStack_98;
            }
            if (bVar10) goto LAB_140b72558;
            bVar10 = false;
            puStack_c0 = puStack_f0;
            goto LAB_140b7271b;
          }
          do {
            if (puVar31 == puVar3) goto LAB_140b7278d;
            uVar23 = *puVar31;
            puVar31 = puVar31 + 1;
            lVar28 = *(longlong *)(*(longlong *)(lVar24 + 0x1a0) + 0x10 + (ulonglong)uVar23 * 0x48);
          } while (lVar28 == 0);
          lVar20 = *(longlong *)(lVar24 + 0x1a0) + (ulonglong)uVar23 * 0x48;
          lVar8 = *(longlong *)(lVar20 + 0x18);
          lVar27 = *(longlong *)(lVar20 + 0x38);
          if ((*(ulonglong *)(lVar15 + 0x118) < *(ulonglong *)(lVar20 + 0x40)) &&
             (uVar22 = *(ulonglong *)(lVar27 + *(ulonglong *)(lVar15 + 0x118) * 8), uVar22 != 0)) {
            lStack_98 = *(longlong *)(lVar8 + 0x10 + ~uVar22 * 0x30);
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          lVar26 = ~*(ulonglong *)(lVar27 + *(longlong *)(lVar15 + 0x110) * 8) * 0x30;
          lVar19 = *(longlong *)(lVar8 + 0x10 + lVar26);
          puStack_b8 = *(undefined4 **)(lVar8 + 0x28 + lVar26);
          lStack_a8 = lVar19;
          puStack_90 = puStack_b8;
          if ((*(ulonglong *)(lVar15 + 0x120) < *(ulonglong *)(lVar20 + 0x40)) &&
             (uVar22 = *(ulonglong *)(lVar27 + *(ulonglong *)(lVar15 + 0x120) * 8), uVar22 != 0)) {
            lVar27 = ~uVar22 * 0x30;
            lStack_c8 = *(longlong *)(lVar8 + 0x10 + lVar27);
            uVar22 = 0;
            lVar20 = 0;
            if (bVar11) {
              lVar20 = lStack_98;
            }
            lStack_d8 = *(longlong *)(lVar8 + 0x28 + lVar27);
            uVar23 = 0;
LAB_140b72558:
            pfVar25 = (float *)(lStack_c8 + uVar22 * 8);
            puStack_f0 = (undefined4 *)(lStack_d8 + uVar22 * 4);
            bVar10 = true;
            puStack_c0 = puStack_f0;
            goto LAB_140b7271b;
          }
          bVar10 = false;
          lVar20 = 0;
          if (bVar11) {
            lVar20 = lStack_98;
          }
          uVar23 = 0;
          pfVar25 = (float *)0x0;
          puStack_c0 = puStack_f0;
          fVar32 = *(float *)(lVar19 + 0x10);
          if ((fVar32 != 0.0) || (NAN(fVar32))) goto LAB_140b725d0;
LAB_140b72733:
          if (lVar20 != 0) {
            fVar35 = 0.0;
          }
          *puStack_90 = uVar6;
        }
        *(float *)(lVar19 + 0x14) = fVar35;
        uVar33 = pdb_140dedcd0(lVar19);
        uVar23 = uVar23 + 1;
        *puStack_90 = uVar6;
        *(undefined4 *)(lVar19 + 0x18) = uVar33;
        if (pfVar25 != (float *)0x0) {
          fVar35 = *(float *)(lVar7 + 0x28);
          *puStack_c0 = uVar6;
          *pfVar25 = fVar35 + *pfVar25;
        }
      } while( true );
    }
    goto LAB_140b72819;
  }
  if (uVar22 < 0x48) {
    puVar29 = &UNK_14305baa0;
    uVar16 = pdb_140b73fd0(&UNK_14305baa0);
    if ((uVar16 & 1) != 0) {
      if (0x47 < uVar22 + 2) goto LAB_140b72868;
      lVar24 = 0x45 - uVar22;
      puVar29 = &UNK_14305baa2 + uVar22;
    }
    goto LAB_140b7212b;
  }
  goto LAB_140b72848;
LAB_140b7278d:
  if (!bVar14) {
    return;
  }
  plVar18 = (longlong *)pdb_140e97000();
  if ((char)plVar18[0xd] != '\x01') goto LAB_140b727f5;
  do {
    if (*plVar18 == 0) {
      *plVar18 = -1;
      pdb_140e95370(plVar18 + 1,uStack_100);
      *plVar18 = *plVar18 + 1;
      return;
    }
LAB_140b727e9:
    plVar18 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b727f5:
    plVar18 = (longlong *)pdb_142d8ec20(plVar18,0);
  } while (plVar18 != (longlong *)0x0);
LAB_140b72819:
  pdb_142dc7890(&UNK_143326860);
LAB_140b72825:
  pdb_142dc8070(&UNK_14305b806,0x3a);
LAB_140b72848:
  pdb_142dc8070(&UNK_14305baa0,0x47,0);
LAB_140b72868:
  pdb_142dc8070(&UNK_14305baa0,0x47);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

