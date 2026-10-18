// VA 0x1422aca90, PDB extent 2098 bytes
// toolbar::menu::thumbnail_scroll::impl$3::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::thumbnail_scroll::impl$3::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
   Extent: 2098 */

char pdb_1422aca90(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined3 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 *puVar9;
  char cVar10;
  ulonglong uVar11;
  byte bVar12;
  int iVar13;
  float *unaff_RBX;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float in_XMM4_Db;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  
  fVar25 = *(float *)(param_2 + 0x14);
  fVar28 = *(float *)(param_1 + 10) * fVar25;
  fVar29 = *(float *)((longlong)param_1 + 0x54) * fVar25;
  if (*(char *)((longlong)param_1 + 0x76) != '\0') goto LAB_1422ace24;
  if (*(byte *)((longlong)param_1 + 0x74) != 0) {
    fVar25 = *(float *)(param_2 + 0x10);
  }
  fVar26 = *(float *)(param_2 + 0x20 + (ulonglong)(*(byte *)((longlong)param_1 + 0x74) ^ 1) * 4);
  bVar14 = *(byte *)(param_2 + 0x2c);
  unaff_RBX = (float *)(ulonglong)bVar14;
  if ((bVar14 & 2) != 0) {
    *(ulonglong *)((longlong)param_1 + 100) = (ulonglong)(uint)fVar26;
  }
  fVar19 = *(float *)(param_2 + 0x28);
  *param_1 = 0;
  param_1[2] = 0;
  if ((bVar14 & 4) == 0) {
    *(float *)((longlong)param_1 + 0x5c) =
         *(float *)(param_1 + 0xc) * fVar19 + *(float *)((longlong)param_1 + 0x5c);
    pdb_140de9710(param_1 + 0xc);
  }
  else {
    fVar21 = *(float *)((longlong)param_1 + 100) - fVar26;
    *(float *)(param_1 + 0xd) =
         (float)(_DAT_142e377e0 & (uint)fVar21) * *(float *)(param_2 + 0x1c) +
         *(float *)(param_1 + 0xd);
    fVar21 = fVar21 * *(float *)((longlong)param_1 + 0x6c);
    if (fVar19 <= _DAT_142e37934) {
      fVar19 = _DAT_142e37934;
    }
    *(float *)((longlong)param_1 + 0x5c) = *(float *)((longlong)param_1 + 0x5c) + fVar21;
    *(float *)(param_1 + 0xc) = fVar21 / fVar19;
    *(float *)((longlong)param_1 + 100) = fVar26;
  }
  uVar16 = *(uint *)(param_1 + 0xb);
  if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc84f0(&UNK_1434d1478);
  }
  uVar11 = param_1[8];
  if (*(int *)(param_1 + 6) == 1) {
    fVar25 = *(float *)((longlong)param_1 + 0x34);
    fVar26 = (*(float *)((longlong)param_1 + 0x54) / *(float *)(param_1 + 10) + _DAT_142e36f28) *
             (float)((uVar11 - 1) + (ulonglong)(uVar11 == 0));
  }
  else {
    uVar5 = (uint)((int)((uVar11 & 0xffffffff) % (ulonglong)uVar16) != 0);
    iVar13 = (int)((uVar11 & 0xffffffff) / (ulonglong)uVar16);
    fVar19 = (float)(iVar13 + uVar5 + (uint)(iVar13 + uVar5 == 0)) * (fVar28 + fVar29) - fVar29;
    fVar26 = fVar25;
    if (fVar19 <= fVar25) {
      fVar26 = fVar19;
    }
    fVar26 = (float)(-(uint)NAN(fVar19) & (uint)fVar25 | ~-(uint)NAN(fVar19) & (uint)fVar26);
    fVar21 = (fVar25 - fVar26) * _DAT_142e36f38 - fVar29;
    auVar27._0_4_ = fVar21 + fVar25 * _DAT_142e36f50;
    auVar27._4_4_ = ((fVar19 + fVar21) - fVar26) + fVar29 + fVar29 + fVar25 * _DAT_142e36f50;
    auVar27._8_8_ = 0;
    auVar24._4_4_ = fVar28;
    auVar24._0_4_ = fVar28;
    auVar24._8_8_ = 0;
    auVar24 = divps(auVar27,auVar24);
    fVar25 = auVar24._0_4_ + _DAT_142e61230;
    fVar26 = auVar24._4_4_ + _UNK_142e61234;
    if (*(char *)((longlong)param_1 + 0x75) != '\x01') {
      *(float *)((longlong)param_1 + 0x5c) = *(float *)((longlong)param_1 + 0x5c) + fVar25;
    }
  }
  if ((bVar14 & 4) == 0) {
    unaff_RBX = (float *)((longlong)param_1 + 0x5c);
    fVar19 = *(float *)((longlong)param_1 + 0x5c);
    if (fVar19 < fVar25) {
      pdb_140de9710(unaff_RBX);
      fVar19 = *unaff_RBX;
    }
    if (fVar26 < fVar19) {
      pdb_140de9710(unaff_RBX);
    }
  }
  if (*(char *)(param_1 + 4) == '\0') goto LAB_1422ace24;
  uVar11 = param_1[5];
  *param_1 = 1;
  param_1[1] = uVar11;
  uVar17 = (ulonglong)*(uint *)(param_1 + 0xb);
  if (uVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc84f0(&UNK_1434d1490);
  }
  if (uVar11 >> 0x20 == 0) {
    uVar11 = (uVar11 & 0xffffffff) / uVar17;
LAB_1422acda8:
    fVar19 = (float)(longlong)uVar11;
  }
  else {
    uVar11 = uVar11 / uVar17;
    if (-1 < (longlong)uVar11) goto LAB_1422acda8;
    fVar19 = (float)uVar11;
  }
  fVar19 = (*(float *)((longlong)param_1 + 0x54) / *(float *)(param_1 + 10) + _DAT_142e36f28) *
           fVar19;
  fVar21 = fVar25;
  if (fVar25 <= fVar19) {
    fVar21 = fVar19;
  }
  fVar19 = (float)(-(uint)NAN(fVar19) & (uint)fVar25 | ~-(uint)NAN(fVar19) & (uint)fVar21);
  fVar25 = fVar26;
  if (fVar19 <= fVar26) {
    fVar25 = fVar19;
  }
  pdb_140de9710((longlong)param_1 + 0x5c,
                CONCAT44(fVar26,-(uint)NAN(fVar19) & (uint)fVar26) |
                (ulonglong)(~-(uint)NAN(fVar19) & (uint)fVar25));
LAB_1422ace24:
  fStack_cc = _DAT_142e36f28;
  fVar25 = fVar28;
  if (fVar28 <= _DAT_142e37934) {
    fVar25 = _DAT_142e37934;
  }
  *(float *)((longlong)param_1 + 0x6c) = _DAT_142e36f28 / fVar25;
  auVar23._4_4_ = fVar29 + fVar28;
  auVar23._0_4_ = fVar28;
  auVar23._8_8_ = 0;
  auVar7._4_4_ = _UNK_14300b884;
  auVar7._0_4_ = _DAT_14300b880;
  auVar7._8_8_ = _UNK_14300b888;
  auVar24 = divps(auVar23,auVar7);
  fVar25 = auVar24._0_4_;
  uStack_d4 = auVar24._4_4_;
  fStack_cc = *(float *)((longlong)param_1 + 0x54) / *(float *)(param_1 + 10) + fStack_cc;
  if (*(char *)((longlong)param_1 + 0x74) == '\0') {
    iStack_c0 = *(int *)(param_1 + 0xb);
    fVar29 = (float)(iStack_c0 - 1) * _DAT_142e36f50;
    fVar26 = *(float *)((longlong)param_1 + 0x5c);
    fStack_c8 = fVar26 / fStack_cc;
    fStack_cc = 0.0;
  }
  else {
    iStack_c0 = *(int *)(param_1 + 0xb);
    fVar26 = (float)(iStack_c0 - 1) * _DAT_142e36f50;
    fVar29 = *(float *)((longlong)param_1 + 0x5c);
    in_XMM4_Db = 0.0;
    fStack_cc = fVar29 / fStack_cc;
    fStack_c8 = 0.0;
  }
  auVar20._0_4_ = (float)*(undefined8 *)(param_2 + 8) - fVar28 * fVar29;
  auVar20._4_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 8) >> 0x20) - fVar28 * fVar26;
  auVar20._8_4_ = 0.0 - in_XMM4_Db * 0.0;
  auVar20._12_4_ = 0;
  uStack_c4 = *(undefined4 *)(param_1 + 8);
  auVar8._4_4_ = _UNK_14300b884;
  auVar8._0_4_ = _DAT_14300b880;
  auVar8._8_8_ = _UNK_14300b888;
  auVar24 = divps(auVar20,auVar8);
  uStack_e4 = auVar24._0_8_;
  uStack_bc = CONCAT31(uStack_bc._1_3_,*(char *)((longlong)param_1 + 0x74));
  uStack_ec = 0;
  fStack_dc = fVar25;
  fStack_d8 = fVar25;
  uStack_d0 = uStack_d4;
  pdb_140a005d0(&uStack_b8,&uStack_ec);
  fVar29 = _UNK_14300b884;
  fVar28 = _DAT_14300b880;
  puVar9 = (undefined8 *)CONCAT44(uStack_9c,uStack_a0);
  if (uStack_b0 != puVar9) {
    fVar19 = fVar25 * _DAT_142e4bfe4 * _DAT_142e36f50;
    fVar25 = (float)*(undefined8 *)(param_2 + 0x20);
    fVar26 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    lVar15 = param_1[4];
    uVar11 = param_1[5];
    bVar14 = (byte)lVar15;
    if ((*(byte *)(param_2 + 0x2c) & 8) == 0) {
      uVar17 = 0;
      do {
        fVar21 = (float)*uStack_b0 * fVar28;
        fVar22 = (float)((ulonglong)*uStack_b0 >> 0x20) * fVar29;
        auVar2._4_4_ = -(uint)(fVar26 <= fVar22 + fVar19);
        auVar2._0_4_ = -(uint)(fVar25 <= fVar21 + fVar19);
        auVar2._8_4_ = -(uint)(fVar21 - fVar19 <= fVar25);
        auVar2._12_4_ = -(uint)(fVar22 - fVar19 <= fVar26);
        iVar13 = movmskps((int)unaff_RBX,auVar2);
        uVar6 = (undefined3)((uint)iVar13 >> 8);
        unaff_RBX = (float *)(ulonglong)CONCAT31(uVar6,uVar11 == uVar17);
        if ((iVar13 == 0xf && lVar15 == 0) ||
           (bVar12 = uVar11 == uVar17 & bVar14,
           unaff_RBX = (float *)(ulonglong)CONCAT31(uVar6,bVar12), bVar12 != 0)) {
          *param_1 = 1;
          param_1[1] = uVar17;
          param_1[9] = CONCAT44(fVar22,fVar21);
        }
        uStack_b0 = uStack_b0 + 1;
        uVar17 = uVar17 + 1;
      } while (uStack_b0 != puVar9);
    }
    else if (_DAT_142e37830 < *(float *)(param_1 + 0xd) ||
             _DAT_142e37830 == *(float *)(param_1 + 0xd)) {
      uVar17 = 0;
      do {
        fVar21 = (float)*uStack_b0 * fVar28;
        fVar22 = (float)((ulonglong)*uStack_b0 >> 0x20) * fVar29;
        auVar4._4_4_ = -(uint)(fVar26 <= fVar22 + fVar19);
        auVar4._0_4_ = -(uint)(fVar25 <= fVar21 + fVar19);
        auVar4._8_4_ = -(uint)(fVar21 - fVar19 <= fVar25);
        auVar4._12_4_ = -(uint)(fVar22 - fVar19 <= fVar26);
        iVar13 = movmskps((int)unaff_RBX,auVar4);
        uVar6 = (undefined3)((uint)iVar13 >> 8);
        unaff_RBX = (float *)(ulonglong)CONCAT31(uVar6,uVar11 == uVar17);
        if ((iVar13 == 0xf && lVar15 == 0) ||
           (bVar12 = uVar11 == uVar17 & bVar14,
           unaff_RBX = (float *)(ulonglong)CONCAT31(uVar6,bVar12), bVar12 != 0)) {
          *param_1 = 1;
          param_1[1] = uVar17;
          param_1[9] = CONCAT44(fVar22,fVar21);
        }
        uStack_b0 = uStack_b0 + 1;
        uVar17 = uVar17 + 1;
      } while (uStack_b0 != puVar9);
    }
    else if (lVar15 == 0) {
      lVar15 = 0;
      do {
        fVar21 = (float)*uStack_b0 * fVar28;
        fVar22 = (float)((ulonglong)*uStack_b0 >> 0x20) * fVar29;
        auVar3._4_4_ = -(uint)(fVar26 <= fVar22 + fVar19);
        auVar3._0_4_ = -(uint)(fVar25 <= fVar21 + fVar19);
        auVar3._8_4_ = -(uint)(fVar21 - fVar19 <= fVar25);
        auVar3._12_4_ = -(uint)(fVar22 - fVar19 <= fVar26);
        uVar16 = movmskps((int)uVar11,auVar3);
        uVar11 = (ulonglong)uVar16;
        if (uVar16 == 0xf) {
          *param_1 = 1;
          param_1[1] = lVar15;
          param_1[9] = CONCAT44(fVar22,fVar21);
          param_1[2] = 1;
          param_1[3] = lVar15;
        }
        uStack_b0 = uStack_b0 + 1;
        lVar15 = lVar15 + 1;
      } while (uStack_b0 != puVar9);
    }
    else {
      uVar17 = 0;
      do {
        fVar21 = (float)*uStack_b0 * fVar28;
        fVar22 = (float)((ulonglong)*uStack_b0 >> 0x20) * fVar29;
        if ((uVar11 == uVar17 & bVar14) == 1) {
          *param_1 = 1;
          param_1[1] = uVar11;
          param_1[9] = CONCAT44(fVar22,fVar21);
        }
        if ((fVar22 - fVar19 <= fVar26 && fVar26 <= fVar19 + fVar22) &&
            (fVar21 - fVar19 <= fVar25 && fVar25 <= fVar19 + fVar21)) {
          param_1[2] = 1;
          param_1[3] = uVar17;
        }
        uStack_b0 = uStack_b0 + 1;
        uVar17 = uVar17 + 1;
      } while (uStack_b0 != puVar9);
    }
  }
  if (CONCAT44(fStack_a4,fStack_a8) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_b4,uStack_b8),CONCAT44(fStack_a4,fStack_a8) << 3,4);
  }
  uStack_ec = *(undefined4 *)param_1;
  uStack_e8 = (undefined4)param_1[1];
  uStack_88 = uStack_bc;
  uStack_98 = CONCAT44(fStack_c8,fStack_cc);
  uStack_90 = CONCAT44(iStack_c0,uStack_c4);
  fStack_a8 = fStack_dc;
  fStack_a4 = fStack_d8;
  uStack_a0 = uStack_d4;
  uStack_9c = uStack_d0;
  uStack_b0 = (undefined8 *)uStack_e4;
  lVar1 = param_1[7];
  lVar15 = lVar1 + 0x10;
  LOCK();
  bVar18 = *(char *)(lVar1 + 0x10) == '\0';
  if (bVar18) {
    *(char *)(lVar1 + 0x10) = '\x01';
  }
  UNLOCK();
  uStack_b8 = uStack_ec;
  uStack_b4 = uStack_e8;
  if (!bVar18) {
    pdb_142dbd1a0(lVar15);
  }
  pdb_140e9a150(lVar15);
  *(undefined4 *)(lVar1 + 0x44) = uStack_88;
  *(undefined8 *)(lVar1 + 0x34) = uStack_98;
  *(undefined8 *)(lVar1 + 0x3c) = uStack_90;
  *(ulonglong *)(lVar1 + 0x24) = CONCAT44(fStack_a4,fStack_a8);
  *(ulonglong *)(lVar1 + 0x2c) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined4 *)(lVar1 + 0x14) = uStack_b8;
  *(undefined4 *)(lVar1 + 0x18) = uStack_b4;
  *(undefined4 *)(lVar1 + 0x1c) = (undefined4)uStack_b0;
  *(undefined4 *)(lVar1 + 0x20) = uStack_b0._4_4_;
  pdb_140e9a350();
  LOCK();
  cVar10 = *(char *)(lVar1 + 0x10);
  bVar18 = cVar10 == '\x01';
  if (bVar18) {
    *(char *)(lVar1 + 0x10) = '\0';
    cVar10 = '\x01';
  }
  UNLOCK();
  if (!bVar18) {
    cVar10 = pdb_142dbcef0(lVar15,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x75) = 1;
  return cVar10;
}

