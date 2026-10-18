// VA 0x140b11910, PDB extent 2040 bytes
// country_core::systems::arrow_gizmo_animation::arrow_gizmo_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/arrow_gizmo_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::arrow_gizmo_animation::arrow_gizmo_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/arrow_gizmo_animation.rs
   Extent: 2040 */

void pdb_140b11910(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint *puVar3;
  float *pfVar4;
  uint *puVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong lVar11;
  ulonglong *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  code *pcVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  char cVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined *puVar27;
  longlong *plVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong *plVar32;
  uint uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  longlong lVar36;
  longlong lVar37;
  uint *puVar38;
  int iVar39;
  undefined *unaff_R12;
  undefined *unaff_R13;
  bool bVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  longlong lStack_c0;
  longlong lStack_b0;
  longlong lStack_98;
  
  cVar24 = pdb_140e94b40();
  if (cVar24 == '\0') goto LAB_140b11ad9;
  unaff_R12 = &UNK_1430553a8;
  lVar36 = 0x43;
  uVar35 = 0x43;
  lVar25 = pdb_140b15a20(&UNK_1430553a8);
  if (lVar25 != 1) goto LAB_140b119b6;
  if (uVar35 < 0x44) {
    unaff_R12 = &UNK_1430553a8;
    uVar26 = pdb_140b15a20(&UNK_1430553a8);
    if ((uVar26 & 1) == 0) {
LAB_140b119b6:
      puVar27 = &UNK_143054fb2;
      unaff_R13 = &UNK_143054f7a;
      do {
        pbVar1 = puVar27 + -1;
        uVar33 = (uint)(char)*pbVar1;
        if ((int)uVar33 < 0) {
          bVar6 = puVar27[-2];
          if ((char)bVar6 < -0x40) {
            bVar7 = puVar27[-3];
            if ((char)bVar7 < -0x40) {
              pbVar2 = puVar27 + -4;
              puVar27 = puVar27 + -4;
              uVar33 = bVar7 & 0x3f | (*pbVar2 & 7) << 6;
            }
            else {
              puVar27 = puVar27 + -3;
              uVar33 = bVar7 & 0xf;
            }
            uVar33 = bVar6 & 0x3f | uVar33 << 6;
          }
          else {
            puVar27 = puVar27 + -2;
            uVar33 = bVar6 & 0x1f;
          }
          uVar33 = (uint)(*pbVar1 & 0x3f) | uVar33 << 6;
          if (uVar33 != 0x5c) goto LAB_140b11a49;
LAB_140b11a5e:
          if ((undefined *)0x38 < puVar27 + -0x143054f79) goto LAB_140b11ffb;
          unaff_RBX = 0x37 - (longlong)(puVar27 + -0x143054f7a);
          unaff_R13 = puVar27 + 1;
          goto LAB_140b11a81;
        }
        puVar27 = puVar27 + -1;
        if (uVar33 == 0x5c) goto LAB_140b11a5e;
LAB_140b11a49:
        if (uVar33 == 0x2f) goto LAB_140b11a5e;
      } while (puVar27 != &UNK_143054f7a);
      unaff_RBX = 0x38;
LAB_140b11a81:
      plVar28 = (longlong *)pdb_140e97000();
      if ((char)plVar28[0xd] != '\x01') goto LAB_140b11fcb;
LAB_140b11a90:
      if (*plVar28 == 0) {
        *plVar28 = -1;
        pdb_140e94f10(plVar28 + 1,unaff_R12,lVar36,unaff_R13,unaff_RBX,1,0);
        *plVar28 = *plVar28 + 1;
LAB_140b11ad9:
        fVar23 = _DAT_142e42360;
        fVar22 = _DAT_142e37ad0;
        uVar21 = _UNK_142e377e4;
        uVar20 = _DAT_142e377e0;
        fVar19 = _DAT_142e36f28;
        lVar25 = *param_1;
        lVar9 = param_1[1];
        uVar33 = *(uint *)((longlong)param_1 + 0x14);
        param_1 = (longlong *)(ulonglong)uVar33;
        puVar38 = *(uint **)(lVar25 + 0xf8);
        puVar3 = puVar38 + *(longlong *)(lVar25 + 0x100);
        cVar8 = *(char *)(lVar25 + 0x108);
        puVar10 = (ulonglong *)*param_2;
        lVar11 = param_2[1];
        puVar12 = (ulonglong *)*param_3;
        lVar13 = param_3[1];
        lStack_98 = 0;
        lStack_c0 = 8;
        lVar36 = 0;
        uVar35 = 0;
        bVar18 = false;
        bVar17 = false;
LAB_140b11b85:
        iVar39 = (int)uVar35;
        if (cVar8 == '\0') {
          if (iVar39 == (int)lVar36) {
            if (puVar38 == puVar3) goto LAB_140b11f6c;
            while( true ) {
              lVar36 = *(longlong *)
                        (*(longlong *)(lVar9 + 0x100) + 0x58 + (ulonglong)*puVar38 * 0xa0);
              if (lVar36 != 0) break;
              puVar38 = puVar38 + 1;
              if (puVar38 == puVar3) goto LAB_140b11f6c;
            }
            lVar37 = *(longlong *)(lVar9 + 0x100) + (ulonglong)*puVar38 * 0xa0;
            uVar35 = (ulonglong)*(uint *)(lVar37 + 0x94);
            lVar29 = *(longlong *)(*(longlong *)(lVar9 + 0x1a0) + 0x18 + uVar35 * 0x48);
            lVar31 = ~*(ulonglong *)
                       (*(longlong *)(*(longlong *)(lVar9 + 0x1a0) + 0x38 + uVar35 * 0x48) +
                       *(longlong *)(lVar25 + 0x118) * 8) * 0x30;
            lStack_98 = *(longlong *)(lVar29 + 0x10 + lVar31);
            lStack_b0 = *(longlong *)(lVar29 + 0x28 + lVar31);
            lStack_c0 = *(longlong *)(lVar37 + 0x50);
            puVar38 = puVar38 + 1;
            iVar39 = 0;
            uVar35 = 0;
          }
          uVar35 = (ulonglong)~*(uint *)(lStack_c0 + 8 + uVar35 * 0x10);
        }
        else {
          if (iVar39 == (int)lVar36) {
            if (puVar38 == puVar3) goto LAB_140b11f6c;
            while( true ) {
              lVar36 = *(longlong *)
                        (*(longlong *)(lVar9 + 0x1a0) + 0x10 + (ulonglong)*puVar38 * 0x48);
              if (lVar36 != 0) break;
              puVar38 = puVar38 + 1;
              if (puVar38 == puVar3) goto LAB_140b11f6c;
            }
            lVar29 = *(longlong *)(lVar9 + 0x1a0) + (ulonglong)*puVar38 * 0x48;
            lVar37 = *(longlong *)(lVar29 + 0x18);
            lVar29 = ~*(ulonglong *)
                       (*(longlong *)(lVar29 + 0x38) + *(longlong *)(lVar25 + 0x118) * 8) * 0x30;
            lStack_98 = *(longlong *)(lVar37 + 0x10 + lVar29);
            lStack_b0 = *(longlong *)(lVar37 + 0x28 + lVar29);
            puVar38 = puVar38 + 1;
            uVar35 = 0;
          }
          iVar39 = (int)uVar35;
        }
        pfVar4 = (float *)(lStack_98 + uVar35 * 8);
        puVar5 = (uint *)(lStack_b0 + uVar35 * 4);
        uVar35 = (ulonglong)(iVar39 + 1);
        uVar26 = *puVar10;
        uVar34 = uVar26 - *(ulonglong *)(lVar11 + 0x18);
        param_2 = (undefined8 *)0x0;
        if (uVar26 < *(ulonglong *)(lVar11 + 0x18)) {
          uVar34 = 0;
        }
        uVar30 = uVar26 - *(ulonglong *)(lVar11 + 0x38);
        if (uVar26 < *(ulonglong *)(lVar11 + 0x38)) {
          uVar30 = 0;
        }
        uVar26 = *(ulonglong *)(lVar11 + 0x30);
        lVar29 = uVar26 - uVar30;
        bVar40 = lVar29 == 0;
        if (uVar26 < uVar30) {
          lVar29 = 0;
        }
        uVar14 = *(ulonglong *)(lVar11 + 0x10);
        lVar37 = uVar14 - uVar34;
        bVar41 = lVar37 == 0;
        if (uVar14 < uVar34) {
          lVar37 = 0;
        }
        uVar15 = *(ulonglong *)(lVar11 + 0x40);
        *puVar10 = uVar15 - (lVar37 + lVar29);
        unaff_RBX = lVar11;
        param_3 = (longlong *)(lVar37 + lVar29);
        if ((uVar14 < uVar34 || bVar41) && (uVar26 < uVar30 || bVar40)) {
LAB_140b11ec0:
          if (bVar18) {
            bVar18 = true;
          }
          else {
            *puVar5 = uVar33;
            fVar42 = pfVar4[1] + fVar23;
            if (fVar42 <= 0.0) {
              fVar42 = 0.0;
            }
            pfVar4[1] = fVar42;
            bVar18 = false;
          }
        }
        else {
          *puVar10 = uVar15;
          uVar26 = *puVar12;
          unaff_R13 = (undefined *)(uVar26 - *(ulonglong *)(lVar13 + 0x18));
          if (uVar26 < *(ulonglong *)(lVar13 + 0x18)) {
            unaff_R13 = (undefined *)0x0;
          }
          uVar34 = uVar26 - *(ulonglong *)(lVar13 + 0x38);
          if (uVar26 < *(ulonglong *)(lVar13 + 0x38)) {
            uVar34 = 0;
          }
          lVar29 = *(longlong *)(lVar13 + 8);
          uVar26 = *(ulonglong *)(lVar13 + 0x30);
          lVar37 = uVar26 - uVar34;
          bVar40 = lVar37 == 0;
          if (uVar26 < uVar34) {
            lVar37 = 0;
          }
          puVar27 = *(undefined **)(lVar13 + 0x10);
          lVar31 = (longlong)puVar27 - (longlong)unaff_R13;
          bVar41 = lVar31 == 0;
          if (puVar27 < unaff_R13) {
            lVar31 = 0;
          }
          uVar30 = *(ulonglong *)(lVar13 + 0x40);
          unaff_R12 = (undefined *)((uVar30 - lVar37) - lVar31);
          param_2 = *(undefined8 **)(lVar13 + 0x28);
          *puVar12 = (ulonglong)unaff_R12;
          unaff_RBX = lVar13;
          param_3 = param_1;
          if ((puVar27 < unaff_R13 || bVar41) && (uVar26 < uVar34 || bVar40)) goto LAB_140b11ec0;
          param_2 = param_2 + uVar34 * 2;
          param_3 = (longlong *)(lVar29 + (longlong)unaff_R13 * 0x10);
          unaff_RBX = 8;
          if (puVar27 < unaff_R13) {
            param_3 = (longlong *)0x8;
          }
          plVar28 = (longlong *)0x0;
          if (unaff_R13 < puVar27) {
            plVar28 = param_3 + lVar31 * 2 + -2;
          }
          if (uVar26 < uVar34) {
            param_2 = (undefined8 *)0x8;
          }
          plVar32 = param_2 + lVar37 * 2 + -2;
          if (uVar26 <= uVar34) {
            plVar32 = plVar28;
          }
          *puVar12 = uVar30;
          fVar42 = (float)plVar32[1];
          fVar43 = (float)((ulonglong)plVar32[1] >> 0x20);
          if (fVar43 * fVar43 + fVar42 * fVar42 <= 0.0) goto LAB_140b11ec0;
          *puVar5 = uVar33;
          if ((float)((uint)fVar43 & uVar21) <= (float)((uint)fVar42 & uVar20)) {
            fVar42 = (float)((uint)(fVar42 * fVar22) & uVar20) + *pfVar4;
            if (fVar19 <= fVar42) {
              fVar42 = fVar19;
            }
            *pfVar4 = fVar42;
            bVar17 = true;
            bVar40 = !bVar18;
            bVar18 = true;
            if (bVar40) {
              *puVar5 = uVar33;
              fVar42 = pfVar4[1] + fVar23;
              if (fVar42 <= 0.0) {
                fVar42 = 0.0;
              }
              pfVar4[1] = fVar42;
              bVar18 = false;
            }
            goto LAB_140b11b85;
          }
          fVar42 = (float)((uint)(fVar43 * fVar22) & uVar20) + pfVar4[1];
          if (fVar19 <= fVar42) {
            fVar42 = fVar19;
          }
          pfVar4[1] = fVar42;
          bVar18 = true;
        }
        bVar40 = !bVar17;
        bVar17 = true;
        if (bVar40) {
          *puVar5 = uVar33;
          fVar42 = *pfVar4 + fVar23;
          if (fVar42 <= 0.0) {
            fVar42 = 0.0;
          }
          *pfVar4 = fVar42;
          bVar17 = false;
        }
        goto LAB_140b11b85;
      }
      goto LAB_140b11fbf;
    }
    if (uVar35 + 2 < 0x44) {
      lVar36 = 0x41 - uVar35;
      unaff_R12 = &UNK_1430553aa + uVar35;
      goto LAB_140b119b6;
    }
    goto LAB_140b1203e;
  }
  goto LAB_140b1201e;
LAB_140b11f6c:
  if (cVar24 != '\0') {
    plVar28 = (longlong *)pdb_140e97000();
    if (((char)plVar28[0xd] != '\x01') &&
       (plVar28 = (longlong *)pdb_142d8ec20(plVar28,0), plVar28 == (longlong *)0x0))
    goto LAB_140b11fef;
    if (*plVar28 != 0) {
LAB_140b11fbf:
      plVar28 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b11fcb:
      plVar28 = (longlong *)pdb_142d8ec20(plVar28,0);
      if (plVar28 == (longlong *)0x0) goto LAB_140b11fef;
      goto LAB_140b11a90;
    }
    *plVar28 = -1;
    pdb_140e95370(plVar28 + 1);
    *plVar28 = *plVar28 + 1;
  }
  return;
LAB_140b11fef:
  pdb_142dc7890(&UNK_143326860);
LAB_140b11ffb:
  pdb_142dc8070(&UNK_143054f7a,0x38);
LAB_140b1201e:
  pdb_142dc8070(&UNK_1430553a8,0x43,0);
LAB_140b1203e:
  pdb_142dc8070(&UNK_1430553a8,0x43);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

