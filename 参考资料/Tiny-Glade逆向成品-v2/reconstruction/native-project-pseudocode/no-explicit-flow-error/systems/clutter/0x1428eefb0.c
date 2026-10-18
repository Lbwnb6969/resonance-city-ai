// VA 0x1428eefb0, PDB extent 2446 bytes
// system_clutter::autoclutter::add_tree_vegetation_setdressing::add_tree_setdressing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_tree_vegetation_setdressing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::add_tree_vegetation_setdressing::add_tree_setdressing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_tree_vegetation_setdressing.rs
   Extent: 2446 */

void pdb_1428eefb0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  char cVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar26 [16];
  float fVar27;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined4 uStack_1d4;
  float fStack_1d0;
  undefined4 uStack_1cc;
  longlong lStack_1c8;
  undefined8 *puStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  uint uStack_180;
  undefined4 uStack_17c;
  longlong lStack_178;
  longlong lStack_170;
  undefined8 *puStack_168;
  longlong lStack_160;
  undefined8 *puStack_158;
  uint *puStack_150;
  longlong lStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  longlong lStack_130;
  undefined4 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_114;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [184];
  
  lVar13 = pdb_1406d0830(*param_4);
  fVar10 = _DAT_142e3c670;
  fVar9 = _DAT_142e3b1d8;
  fVar8 = _DAT_142e37ad8;
  fVar7 = _DAT_142e36f28;
  puVar19 = (undefined8 *)(lVar13 + 0x20);
  puVar14 = (undefined8 *)(lVar13 + 0x28);
  if (*(char *)(lVar13 + 0x298) == '\0') {
    puVar14 = (undefined8 *)(lVar13 + 0x10);
    puVar19 = (undefined8 *)(lVar13 + 8);
  }
  uStack_100 = *puVar14;
  uStack_108 = *puVar19;
  lStack_1c8 = *param_5;
  lStack_148 = param_5[1];
  puVar21 = *(uint **)(lStack_1c8 + 0xf8);
  puStack_150 = puVar21 + *(longlong *)(lStack_1c8 + 0x100);
  cVar1 = *(char *)(lStack_1c8 + 0x108);
  lVar15 = *param_6 + 0x98;
  lVar13 = *param_3;
  puStack_138 = (undefined8 *)(lVar13 + 0x100);
  puStack_158 = (undefined8 *)(lVar13 + 0x108);
  puStack_140 = (undefined8 *)(lVar13 + 0x118);
  puStack_168 = (undefined8 *)(lVar13 + 0x110);
  uStack_17c = *(undefined4 *)((longlong)param_1 + 0x1c);
  lStack_160 = *param_1;
  puStack_128 = (undefined4 *)param_1[2];
  lStack_130 = lStack_160 + 0x48;
  lStack_170 = 0;
  lStack_178 = 8;
  lStack_1e0 = 0;
  lStack_1e8 = 0;
  uVar22 = 0;
  do {
    if (cVar1 == '\0') {
      if (uVar22 == (uint)lStack_170) {
        do {
          if (puVar21 == puStack_150) {
            return;
          }
          uVar22 = *puVar21;
          puVar21 = puVar21 + 1;
          lStack_170 = *(longlong *)
                        (*(longlong *)(lStack_148 + 0x100) + 0x58 + (ulonglong)uVar22 * 0xa0);
        } while (lStack_170 == 0);
        lVar16 = *(longlong *)(lStack_148 + 0x100) + (ulonglong)uVar22 * 0xa0;
        uVar17 = (ulonglong)*(uint *)(lVar16 + 0x94);
        lVar13 = *(longlong *)(lStack_148 + 0x1a0) + uVar17 * 0x48;
        uVar17 = *(ulonglong *)(*(longlong *)(lStack_148 + 0x1a0) + 0x40 + uVar17 * 0x48);
        if ((*(ulonglong *)(lStack_1c8 + 0x110) < uVar17) &&
           (uVar20 = *(ulonglong *)
                      (*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lStack_1c8 + 0x110) * 8),
           uVar20 != 0)) {
          lStack_1e0 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar20 * 0x30);
          uVar20 = *(ulonglong *)(lStack_1c8 + 0x118);
          if (uVar17 <= uVar20) goto LAB_1428ef3a0;
LAB_1428ef35f:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uVar20 * 8);
          if (uVar17 == 0) goto LAB_1428ef3a0;
          lStack_1e8 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar17 * 0x30);
        }
        else {
          lStack_1e0 = 0;
          uVar20 = *(ulonglong *)(lStack_1c8 + 0x118);
          if (uVar20 < uVar17) goto LAB_1428ef35f;
LAB_1428ef3a0:
          lStack_1e8 = 0;
        }
        lStack_178 = *(longlong *)(lVar16 + 0x50);
        uVar22 = 0;
      }
      uVar5 = ~*(uint *)(lStack_178 + 8 + (ulonglong)uVar22 * 0x10);
    }
    else {
      uVar5 = uVar22;
      if (uVar22 == (uint)lStack_170) {
        do {
          if (puVar21 == puStack_150) {
            return;
          }
          uVar22 = *puVar21;
          puVar21 = puVar21 + 1;
          lStack_170 = *(longlong *)
                        (*(longlong *)(lStack_148 + 0x1a0) + 0x10 + (ulonglong)uVar22 * 0x48);
        } while (lStack_170 == 0);
        lVar13 = *(longlong *)(lStack_148 + 0x1a0) + (ulonglong)uVar22 * 0x48;
        uVar17 = *(ulonglong *)(lVar13 + 0x40);
        if ((*(ulonglong *)(lStack_1c8 + 0x110) < uVar17) &&
           (uVar20 = *(ulonglong *)
                      (*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lStack_1c8 + 0x110) * 8),
           uVar20 != 0)) {
          lStack_1e0 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar20 * 0x30);
          uVar20 = *(ulonglong *)(lStack_1c8 + 0x118);
          if (uVar17 <= uVar20) goto LAB_1428ef387;
LAB_1428ef31d:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uVar20 * 8);
          if (uVar17 == 0) goto LAB_1428ef387;
          lStack_1e8 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar17 * 0x30);
        }
        else {
          lStack_1e0 = 0;
          uVar20 = *(ulonglong *)(lStack_1c8 + 0x118);
          if (uVar20 < uVar17) goto LAB_1428ef31d;
LAB_1428ef387:
          lStack_1e8 = 0;
        }
        uVar22 = 0;
        uVar5 = uVar22;
      }
    }
    puStack_1a0 = (undefined8 *)((ulonglong)uVar5 * 0x10 + lStack_1e0);
    lVar13 = (ulonglong)uVar5 * 0x30 + lStack_1e8;
    cVar12 = pdb_1408ff990(lVar15);
    if (cVar12 == '\0') {
      pdb_140b40d00(&puStack_1c0,lVar13);
      cVar12 = pdb_140901020(lVar15);
      if (cVar12 != '\0') goto LAB_1428ef43e;
LAB_1428ef486:
      cVar12 = pdb_140a3d910(lVar15);
      bVar6 = false;
      bVar11 = false;
      if (cVar12 != '\0') goto LAB_1428ef495;
    }
    else {
      iVar2 = *(int *)(lVar13 + 0x2c);
      pdb_140b40d00(&puStack_1c0,lVar13);
      bVar11 = true;
      if (iVar2 != 2) {
        cVar12 = pdb_140901020(lVar15);
        if (cVar12 == '\0') goto LAB_1428ef486;
LAB_1428ef43e:
        bVar11 = false;
      }
LAB_1428ef495:
      bVar6 = bVar11;
    }
    uStack_180 = uVar22 + 1;
    pdb_140defa80(auStack_f8);
    uStack_120 = pdb_140dedfe0(*(undefined4 *)puStack_1a0);
    lVar13 = 0;
    do {
      fVar27 = (float)lVar13 / fVar8;
      fVar23 = (float)pdb_140e02880(&uStack_120);
      if (NAN(fVar23 * fVar9 + fVar27)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14366db40,0x1d,&UNK_14366db88);
      }
      fVar23 = (float)pub_142e32a70();
      auVar26._4_4_ = 0;
      auVar26._0_4_ = (uint)(fVar23 + fVar7) & -(uint)(fVar23 < 0.0);
      auVar26._8_4_ = extraout_XMM0_Dc;
      auVar26._12_4_ = extraout_XMM0_Dd;
      auVar26 = ZEXT416(~-(uint)(fVar23 < 0.0) & (uint)fVar23) | auVar26;
      fVar23 = auVar26._0_4_;
      uStack_190 = CONCAT44(uStack_190._4_4_,fVar23);
      if ((fVar23 < 0.0) || (fVar7 < fVar23)) {
        puStack_1c0 = &uStack_190;
        pcStack_1b8 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1435b38c0,&puStack_1c0,&UNK_1435b38a8);
      }
      fVar23 = (float)pdb_140def2c0(auStack_f8);
      uStack_198 = CONCAT44(auVar26._0_4_,fVar23);
      fVar24 = (float)pdb_140e02880(&uStack_120);
      fVar25 = (float)pdb_140e02880(&uStack_120);
      if (((!bVar6) && (cVar12 = pdb_140901020(lVar15), cVar12 == '\0')) &&
         (cVar12 = pdb_140a3d910(lVar15), cVar12 == '\0')) {
        fVar24 = fVar24 * _DAT_142e36f60;
        fVar25 = fVar25 * _UNK_142e36f64;
      }
      uStack_198 = CONCAT44(auVar26._0_4_ + fVar25,fVar23 + fVar24);
      fVar23 = (float)pdb_140a7d8d0(&uStack_108);
      if (0.0 < fVar23) {
        fVar23 = (float)pdb_140e02880(&uStack_120);
        fVar24 = (float)pdb_140e02880(&uStack_120);
        fVar25 = fVar7 / SQRT(fVar24 * fVar24 + fVar23 * fVar23);
        puStack_1c0 = (undefined8 *)CONCAT44(fVar25 * fVar24,fVar25 * fVar23);
        pdb_140df4520(&uStack_114,&puStack_1c0);
        pdb_140df4520(&uStack_1d4,&uStack_198);
        puStack_1c0 = (undefined8 *)*puStack_1a0;
        puStack_1b0 = &UNK_1435b2e98;
        uStack_1a8 = 4;
        pcStack_1b8 = (code *)lVar13;
        uVar17 = pdb_1428f9090(&puStack_1c0);
        cVar12 = pdb_140901020(lVar15);
        fVar23 = fVar10;
        if ((cVar12 == '\0') && (cVar12 = pdb_140a3d910(lVar15), cVar12 == '\0')) {
          if (bVar6) {
            puVar19 = puStack_140;
            fVar24 = fVar27 * _DAT_142f684a8 + fStack_1d0;
          }
          else {
            puVar19 = puStack_138;
            fVar24 = _DAT_143009bc0;
            if ((uVar17 & 1) == 0) {
              puVar19 = puStack_158;
              fVar23 = _DAT_142f6e3f0;
              fVar24 = fVar27 * _DAT_142f684a8 + fStack_1d0;
            }
          }
        }
        else {
          fVar27 = fVar27 * _DAT_142f684a8 + fStack_1d0;
          fStack_1d0 = fVar27;
          cVar12 = pdb_140a3d910(lVar15);
          puVar19 = puStack_168;
          fVar24 = fStack_1d0;
          if (cVar12 != '\0') {
            fVar24 = fVar27 + _DAT_142e42360;
          }
        }
        fStack_1d0 = fVar24;
        uVar4 = *puVar19;
        *puStack_128 = uStack_17c;
        fVar27 = (float)pdb_140e02880(&uStack_120);
        fVar24 = fVar27 * _DAT_142e37990;
        puStack_1c0 = (undefined8 *)CONCAT44(fStack_1d0,uStack_1d4);
        pcStack_1b8 = (code *)CONCAT44(pcStack_1b8._4_4_,uStack_1cc);
        uStack_188 = uStack_10c;
        uStack_190 = uStack_114;
        lVar16 = *(longlong *)(lStack_160 + 0x58);
        if (lVar16 == *(longlong *)(lStack_160 + 0x48)) {
          pdb_142d8d8d0(lStack_130);
        }
        lVar3 = *(longlong *)(lStack_160 + 0x50);
        lVar18 = lVar16 * 0x68;
        *(undefined8 *)(lVar3 + lVar18) = 5;
        *(undefined4 *)(lVar3 + 0x18 + lVar18) = 2;
        *(undefined1 *)(lVar3 + 0x30 + lVar18) = 5;
        *(undefined4 *)(lVar3 + 0x34 + lVar18) = 0;
        *(undefined8 *)(lVar3 + 0x38 + lVar18) = uVar4;
        *(ulonglong *)(lVar3 + 0x40 + lVar18) = uVar17;
        *(undefined8 **)(lVar3 + 0x48 + lVar18) = puStack_1c0;
        *(undefined4 *)(lVar3 + 0x50 + lVar18) = pcStack_1b8._0_4_;
        *(undefined8 *)(lVar3 + 0x54 + lVar18) = uStack_190;
        *(undefined4 *)(lVar3 + 0x5c + lVar18) = uStack_188;
        *(float *)(lVar3 + 0x60 + lVar18) = fVar23 * (fVar24 + (fVar7 - fVar27) * fVar10);
        *(longlong *)(lStack_160 + 0x58) = lVar16 + 1;
      }
      lVar13 = lVar13 + 1;
      uVar22 = uStack_180;
    } while (lVar13 != 0xc);
  } while( true );
}

