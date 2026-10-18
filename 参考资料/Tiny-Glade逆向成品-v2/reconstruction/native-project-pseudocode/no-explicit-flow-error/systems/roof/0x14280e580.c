// VA 0x14280e580, PDB extent 1721 bytes
// system_roof::update_roof_spatial::update_roof_spatial
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/update_roof_spatial.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::update_roof_spatial::update_roof_spatial
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/update_roof_spatial.rs
   Extent: 1721 */

void pdb_14280e580(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char cVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  int *piVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  undefined8 *puVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  int iVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  longlong lStack_c8;
  code *pcStack_c0;
  longlong lStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  
  puVar6 = (ulonglong *)*param_3;
  lVar7 = param_3[1];
  uVar8 = *puVar6;
  uVar25 = 0;
  uVar34 = uVar8 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar8 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar34 = uVar25;
  }
  uVar29 = uVar8 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar8 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar29 = uVar25;
  }
  lVar38 = uVar34 * 0x10 + *(longlong *)(lVar7 + 8);
  uVar8 = *(ulonglong *)(lVar7 + 0x10) - uVar34;
  if (*(ulonglong *)(lVar7 + 0x10) < uVar34) {
    lVar38 = 8;
    uVar8 = uVar25;
  }
  lVar35 = uVar29 * 0x10 + *(longlong *)(lVar7 + 0x28);
  uVar34 = *(ulonglong *)(lVar7 + 0x30) - uVar29;
  if (*(ulonglong *)(lVar7 + 0x30) < uVar29) {
    lVar35 = 8;
    uVar34 = uVar25;
  }
  *puVar6 = (*(longlong *)(lVar7 + 0x40) - uVar34) - uVar8;
  lStack_90 = uVar8 * 0x10 + lVar38;
  lStack_98 = uVar34 * 0x10 + lVar35;
  uVar9 = *param_2;
  lVar7 = *param_1;
  lVar10 = param_1[1];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_a0 = *param_5;
  puStack_a8 = (undefined4 *)param_5[2];
  uVar3 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar11 = *param_6;
  puStack_b0 = (undefined4 *)param_6[2];
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar12 = *param_4;
  puVar13 = (undefined4 *)param_4[2];
  fVar43 = (float)_DAT_142e378e0;
  uVar8 = (ulonglong)_DAT_142e378e0 >> 0x20;
  fVar44 = (float)_DAT_14359c5c0;
  uVar34 = (ulonglong)_DAT_14359c5c0 >> 0x20;
  lStack_b8 = lVar11 + 0x20;
  do {
    while( true ) {
      do {
        if ((lVar38 == 0) || (lVar38 == lStack_90)) {
          if ((lVar35 == 0) || (lVar35 == lStack_98)) {
            return;
          }
          lVar38 = 0;
          lVar27 = lVar35 + 0x10;
          lVar37 = lVar35;
        }
        else {
          lVar27 = lVar35;
          lVar37 = lVar38;
          lVar38 = lVar38 + 0x10;
        }
        lVar35 = lVar27;
        *puVar6 = *puVar6 + 1;
        uVar14 = *(undefined8 *)(lVar37 + 8);
        uVar25 = pdb_140b54b40(uVar9,uVar14);
      } while ((((((uVar25 & 0xffffffff) == 0) ||
                 (uVar29 = uVar25 & 0xffffffff ^ 0xffffffff, *(ulonglong *)(lVar10 + 0x10) <= uVar29
                 )) || (piVar30 = (int *)(uVar29 * 0x18 + *(longlong *)(lVar10 + 8)),
                       piVar30[4] != (int)(uVar25 >> 0x20))) ||
               ((*piVar30 == 0 ||
                (uVar29 = *(ulonglong *)(piVar30 + 2),
                *(ulonglong *)(lVar7 + 0x38) <= (uVar29 & 0xffffffff))))) ||
              ((*(ulonglong *)(*(longlong *)(lVar7 + 0x28) + (uVar29 >> 6 & 0x3ffffff) * 8) >>
                (uVar29 & 0x3f) & 1) == 0));
      lVar27 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x18 + (uVar29 >> 0x20) * 0x48);
      lVar15 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x38 + (uVar29 >> 0x20) * 0x48);
      lVar31 = ~*(ulonglong *)(lVar15 + *(longlong *)(lVar7 + 0x110) * 8) * 0x30;
      lVar33 = *(longlong *)(lVar27 + 0x28 + lVar31);
      lVar26 = ~*(ulonglong *)(lVar15 + *(longlong *)(lVar7 + 0x118) * 8) * 0x30;
      lVar15 = *(longlong *)(lVar27 + 0x28 + lVar26);
      uVar29 = (ulonglong)(uint)~piVar30[1];
      puVar36 = (undefined8 *)(uVar29 * 0x58 + *(longlong *)(lVar27 + 0x10 + lVar31));
      lVar26 = uVar29 * 0x30 + *(longlong *)(lVar27 + 0x10 + lVar26);
      lVar27 = pdb_140b54f80(uVar9,uVar14,&UNK_14359c600);
      if (lVar27 == 0) {
        lStack_c8 = lVar37 + 8;
        pcStack_c0 = pdb_140c04ef0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14359c618,&lStack_c8,&UNK_14359c668);
      }
      fVar41 = (float)pdb_140930390(lVar27);
      if ((*(float *)((longlong)puVar36 + 0x4c) != fVar41) ||
         (NAN(*(float *)((longlong)puVar36 + 0x4c)) || NAN(fVar41))) {
        *puStack_a8 = uVar2;
        puVar28 = (undefined8 *)pdb_142b0f0c0(uStack_a0,1,*puVar36);
        uVar16 = _UNK_14359c688;
        *puVar28 = _DAT_14359c680;
        puVar28[1] = uVar16;
        uVar16 = _UNK_14359c698;
        puVar28[2] = _DAT_14359c690;
        puVar28[3] = uVar16;
        uVar23 = _UNK_14359c6ac;
        uVar22 = _UNK_14359c6a8;
        uVar21 = _UNK_14359c6a4;
        *(undefined4 *)(puVar28 + 4) = _DAT_14359c6a0;
        *(undefined4 *)((longlong)puVar28 + 0x24) = uVar21;
        *(undefined4 *)(puVar28 + 5) = uVar22;
        *(undefined4 *)((longlong)puVar28 + 0x2c) = uVar23;
        *(float *)(puVar28 + 6) = fVar41 * fVar43;
        *(float *)((longlong)puVar28 + 0x34) = fVar41 * (float)uVar8;
        *(float *)(puVar28 + 7) = fVar41 * 0.0;
        *(float *)((longlong)puVar28 + 0x3c) = fVar41 * 0.0;
        *puStack_b0 = uVar3;
        lVar37 = *(longlong *)(lVar11 + 0x30);
        uVar16 = *(undefined8 *)(lVar11 + 0x40);
        if (lVar37 == *(longlong *)(lVar11 + 0x20)) {
          pdb_142d7e8a0(lStack_b8);
        }
        *(undefined8 *)(*(longlong *)(lVar11 + 0x28) + lVar37 * 8) = uVar16;
        *(longlong *)(lVar11 + 0x30) = lVar37 + 1;
        *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
      }
      *(undefined4 *)(lVar33 + uVar29 * 4) = uVar1;
      *(float *)((longlong)puVar36 + 0x4c) = fVar41;
      cVar24 = pdb_140c33110(lVar27 + 0x29f,*(undefined1 *)(lVar27 + 0x2a3));
      if (*(char *)((longlong)puVar36 + 0x54) != cVar24) {
        *(undefined4 *)(lVar33 + uVar29 * 4) = uVar1;
        *(char *)((longlong)puVar36 + 0x54) = cVar24;
        *puVar13 = uVar4;
        lVar37 = *(longlong *)(lVar12 + 0x30);
        uVar16 = *(undefined8 *)(lVar12 + 0x40);
        if (lVar37 == *(longlong *)(lVar12 + 0x20)) {
          pdb_142d7e6e0(lVar12 + 0x20);
        }
        lVar31 = *(longlong *)(lVar12 + 0x28);
        lVar32 = lVar37 * 0x20;
        *(undefined8 *)(lVar31 + lVar32) = uVar16;
        *(ulonglong *)(lVar31 + 8 + lVar32) = uVar25;
        *(undefined8 *)(lVar31 + 0x10 + lVar32) = uVar14;
        *(undefined1 *)(lVar31 + 0x18 + lVar32) = 2;
        *(longlong *)(lVar12 + 0x30) = lVar37 + 1;
        *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
      }
      uVar5 = *(uint *)(lVar27 + 600);
      if (uVar5 < 2) break;
LAB_14280ea87:
      cVar24 = pdb_140b77990();
      if (cVar24 != '\0') goto LAB_14280ea97;
LAB_14280eb7e:
      pdb_140b77b90(&lStack_c8,puVar36);
      *(undefined4 *)(lVar15 + uVar29 * 4) = uVar1;
      *(ulonglong *)(lVar26 + 0x10) =
           CONCAT44((float)((ulonglong)lStack_c8 >> 0x20) + (float)uVar34,(float)lStack_c8 + fVar44)
      ;
      *(undefined4 *)(lVar26 + 0x18) = pcStack_c0._0_4_;
    }
    fVar41 = *(float *)(lVar27 + 0x25c);
    fVar18 = *(float *)(lVar27 + 0x260);
    fVar19 = *(float *)(lVar27 + 0x264);
    fVar20 = *(float *)(lVar27 + 0x268);
    uVar16 = *(undefined8 *)(lVar27 + 0x26c);
    if (uVar5 == *(uint *)(puVar36 + 1)) {
      if (uVar5 == 1) {
        if (((float)uVar16 == *(float *)((longlong)puVar36 + 0x1c)) &&
           (!NAN((float)uVar16) && !NAN(*(float *)((longlong)puVar36 + 0x1c)))) {
          fVar42 = (float)((ulonglong)uVar16 >> 0x20);
          if ((fVar42 == *(float *)(puVar36 + 4)) && (!NAN(fVar42) && !NAN(*(float *)(puVar36 + 4)))
             ) {
            if ((fVar41 == *(float *)((longlong)puVar36 + 0xc)) &&
               (!NAN(fVar41) && !NAN(*(float *)((longlong)puVar36 + 0xc)))) {
              if ((fVar18 == *(float *)(puVar36 + 2)) &&
                 ((!NAN(fVar18) && !NAN(*(float *)(puVar36 + 2)) &&
                  (iVar39 = -(uint)(fVar19 == (float)*(undefined8 *)((longlong)puVar36 + 0x14)),
                  iVar40 = -(uint)(fVar20 ==
                                  (float)((ulonglong)*(undefined8 *)((longlong)puVar36 + 0x14) >>
                                         0x20)), auVar17._4_4_ = iVar39, auVar17._0_4_ = iVar39,
                  auVar17._8_4_ = iVar40, auVar17._12_4_ = iVar40,
                  iVar39 = movmskpd((int)lVar27,auVar17), iVar39 == 3)))) goto LAB_14280ea87;
            }
          }
        }
      }
      else if ((fVar19 == *(float *)((longlong)puVar36 + 0x14)) &&
              (!NAN(fVar19) && !NAN(*(float *)((longlong)puVar36 + 0x14)))) {
        if ((fVar41 == *(float *)((longlong)puVar36 + 0xc)) &&
           (!NAN(fVar41) && !NAN(*(float *)((longlong)puVar36 + 0xc)))) {
          if ((fVar18 == *(float *)(puVar36 + 2)) && (!NAN(fVar18) && !NAN(*(float *)(puVar36 + 2)))
             ) {
            if ((fVar20 == *(float *)(puVar36 + 3)) &&
               (!NAN(fVar20) && !NAN(*(float *)(puVar36 + 3)))) goto LAB_14280ea87;
          }
        }
      }
    }
    *(undefined4 *)(lVar33 + uVar29 * 4) = uVar1;
    *(uint *)(puVar36 + 1) = uVar5;
    *(float *)((longlong)puVar36 + 0xc) = fVar41;
    *(float *)(puVar36 + 2) = fVar18;
    *(float *)((longlong)puVar36 + 0x14) = fVar19;
    *(float *)(puVar36 + 3) = fVar20;
    *(undefined8 *)((longlong)puVar36 + 0x1c) = uVar16;
    *puVar13 = uVar4;
    lVar27 = *(longlong *)(lVar12 + 0x30);
    uVar16 = *(undefined8 *)(lVar12 + 0x40);
    if (lVar27 == *(longlong *)(lVar12 + 0x20)) {
      pdb_142d7e6e0(lVar12 + 0x20);
    }
    lVar37 = *(longlong *)(lVar12 + 0x28);
    lVar33 = lVar27 * 0x20;
    *(undefined8 *)(lVar37 + lVar33) = uVar16;
    *(ulonglong *)(lVar37 + 8 + lVar33) = uVar25;
    *(undefined8 *)(lVar37 + 0x10 + lVar33) = uVar14;
    *(undefined1 *)(lVar37 + 0x18 + lVar33) = 2;
    *(longlong *)(lVar12 + 0x30) = lVar27 + 1;
    *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
    cVar24 = pdb_140b77990();
    if (cVar24 == '\0') goto LAB_14280eb7e;
LAB_14280ea97:
    *(undefined4 *)(lVar15 + uVar29 * 4) = uVar1;
    *(undefined4 *)(lVar26 + 0x18) = 0;
    *(undefined8 *)(lVar26 + 0x10) = 0;
  } while( true );
}

