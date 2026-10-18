// VA 0x142882640, PDB extent 3206 bytes
// system_tree::ui_move_tree::ui_move_tree
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_move_tree.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::ui_move_tree::ui_move_tree
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_move_tree.rs
   Extent: 3206 */

void pdb_142882640(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  longlong *plVar15;
  longlong lVar16;
  byte *pbVar17;
  longlong **pplVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uStack_438;
  longlong **pplStack_430;
  float fStack_428;
  float fStack_388;
  undefined8 uStack_384;
  undefined4 uStack_37c;
  undefined8 uStack_378;
  longlong *plStack_328;
  byte *pbStack_320;
  undefined8 uStack_318;
  undefined8 uStack_270;
  float fStack_268;
  longlong lStack_210;
  undefined1 (*pauStack_208) [16];
  ushort uStack_1f8;
  longlong lStack_1f0;
  longlong *plStack_1e8;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined8 *puStack_180;
  undefined4 *puStack_178;
  undefined4 *puStack_170;
  undefined4 *puStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  longlong lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 *puStack_130;
  longlong lStack_128;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_140 = *param_11;
  lStack_110 = param_11[4];
  puStack_178 = (undefined4 *)param_11[6];
  uStack_11c = *(undefined4 *)((longlong)param_11 + 0x3c);
  lStack_108 = param_11[8];
  puStack_170 = (undefined4 *)param_11[10];
  uStack_118 = *(undefined4 *)((longlong)param_11 + 0x5c);
  param_1 = (undefined8 *)*param_1;
  uStack_318 = param_1[2];
  plStack_328 = (longlong *)*param_1;
  pbStack_320 = (byte *)param_1[1];
  pdb_140a3b030(&uStack_438,*param_2,&plStack_328);
  if ((((char)uStack_438 == '\f') || (((char)uStack_438 == '\0' && ((int)pplStack_430 == 0)))) &&
     (*_DAT_143ca4500 == '\0')) {
    pdb_140a2fb40(&lStack_210,*param_4);
    fVar8 = _DAT_143019208;
    fVar7 = _DAT_142f61034;
    fVar6 = _DAT_142e36f28;
    lStack_190 = *param_5;
    lStack_188 = param_5[1];
    uStack_1a0 = *param_3;
    uStack_198 = *param_6;
    uStack_114 = *(undefined4 *)((longlong)param_9 + 0x1c);
    uStack_160 = *param_9;
    puStack_168 = (undefined4 *)param_9[2];
    uStack_138 = *param_7;
    uStack_f8 = *(undefined4 *)((longlong)param_8 + 0x1c);
    lStack_100 = *param_8;
    puStack_130 = (undefined4 *)param_8[2];
    fVar28 = (float)_DAT_142f89640;
    uVar5 = (ulonglong)_DAT_142f89640 >> 0x20;
    uVar12 = (uint)uStack_1f8;
    puStack_180 = (undefined8 *)((longlong)param_10 + 0xc);
    lStack_128 = lStack_100 + 0x20;
    lStack_158 = lStack_110 + 0x20;
    lStack_150 = lStack_108 + 0x20;
    lVar19 = lStack_210;
    pauVar22 = pauStack_208;
    while (lStack_1f0 != 0) {
      if ((short)uVar12 == 0) {
        do {
          auVar1 = *pauVar22;
          lVar19 = lVar19 + -0x100;
          pauVar22 = pauVar22 + 1;
          uVar12 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar12 == 0);
      }
      uVar20 = (ulonglong)uVar12;
      iVar13 = 0;
      for (; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        iVar13 = iVar13 + 1;
      }
      lVar16 = lVar19 - (ulonglong)(uint)(iVar13 << 4);
      uStack_1b8 = *(undefined8 *)(lVar16 + -0x10);
      uVar2 = *(undefined8 *)(lVar16 + -8);
      if (((*(ulonglong *)(lStack_188 + 0x10) <= (ulonglong)~(uint)uVar2) ||
          (piVar14 = (int *)((ulonglong)~(uint)uVar2 * 0x18 + *(longlong *)(lStack_188 + 8)),
          piVar14[4] != (int)((ulonglong)uVar2 >> 0x20))) || (*piVar14 == 0)) {
        plStack_328 = (longlong *)(((ulonglong)param_5 & 0xffffffff00000000) + 1);
LAB_14288305c:
        pbStack_320 = (byte *)uVar2;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1435aa550,0x2b,&plStack_328,&UNK_1435aa530,&UNK_1435aa4d8);
      }
      uVar3 = *(ulonglong *)(piVar14 + 2);
      if ((*(ulonglong *)(lStack_190 + 0x38) <= (uVar3 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lStack_190 + 0x28) + (uVar3 >> 6 & 0x3ffffff) * 8) >>
           (uVar3 & 0x3f) & 1) == 0)) {
        plStack_328 = (longlong *)(uVar3 << 0x20);
        goto LAB_14288305c;
      }
      lVar16 = *(longlong *)(lStack_188 + 0x1a0) + (uVar3 >> 0x20) * 0x48;
      uVar3 = *(ulonglong *)(*(longlong *)(lStack_188 + 0x1a0) + 0x40 + (uVar3 >> 0x20) * 0x48);
      if ((*(ulonglong *)(lStack_190 + 0x110) < uVar3) &&
         (uVar4 = *(ulonglong *)
                   (*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lStack_190 + 0x110) * 8),
         uVar4 != 0)) {
        lVar21 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar4 * 0x30);
      }
      else {
        lVar21 = 0;
      }
      if ((*(ulonglong *)(lStack_190 + 0x118) < uVar3) &&
         (uVar3 = *(ulonglong *)
                   (*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lStack_190 + 0x118) * 8),
         uVar3 != 0)) {
        lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar3 * 0x30);
      }
      else {
        lVar16 = 0;
      }
      uVar12 = piVar14[1];
      lVar23 = (ulonglong)~uVar12 * 0x58;
      pbVar17 = (byte *)0x19;
      lStack_1b0 = lStack_1f0 + -1;
      uStack_1a8 = uVar20;
      uStack_148 = uStack_1b8;
      plVar15 = (longlong *)pdb_1418bdee0(&UNK_1435aa4f0);
      fVar24 = fVar6;
      plStack_328 = plVar15;
      pbStack_320 = pbVar17;
      if (*(byte **)(lVar16 + 0x50 + lVar23) == pbVar17) {
        iVar13 = pub_142e32750(*(longlong *)(lVar16 + lVar23 + 0x48) + 0x10,plVar15 + 2,pbVar17);
        LOCK();
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          pdb_1406ed6a0(&plStack_328);
        }
        if (iVar13 == 0) {
          fVar24 = _DAT_142e37874;
        }
      }
      else {
        LOCK();
        *plVar15 = *plVar15 + -1;
        UNLOCK();
        if (*plVar15 == 0) {
          pdb_1406ed6a0(&plStack_328);
        }
      }
      param_5 = (longlong *)(lVar21 + (ulonglong)~uVar12 * 0x30);
      lVar16 = *param_5;
      fVar25 = *(float *)(param_5 + 1);
      fVar26 = (float)lVar16 + fVar28;
      fVar27 = (float)((ulonglong)lVar16 >> 0x20) + (float)uVar5;
      uStack_438 = &uStack_1b8;
      pplStack_430 = (longlong **)pdb_1428833a0;
      pdb_140f60760(&plStack_328,&UNK_1435aa509,&uStack_438);
      plStack_1e8 = plStack_328;
      pbStack_1e0 = pbStack_320;
      uStack_1d8 = uStack_318;
      uStack_438 = (undefined8 *)CONCAT44(fVar24,(undefined4)uStack_438);
      pplStack_430 = (longlong **)CONCAT44(fVar27,fVar26);
      uStack_438 = (undefined8 *)((ulonglong)uStack_438 & 0xffffffffffffff00);
      uStack_270 = uStack_270 & 0xffffffffffffff00;
      uStack_f2 = 1;
      fStack_428 = fVar25 + 0.0;
      pdb_140c9dcb0(&plStack_328,&uStack_438,&uStack_270);
      uStack_f1 = 1;
      pdb_140c9dee0(&uStack_438);
      fStack_388 = 4.06377e-44;
      uStack_f1 = 1;
      pdb_140c9de10(&uStack_270,&uStack_438,&fStack_388);
      fStack_388 = 4.2039e-44;
      uStack_f1 = 1;
      pdb_140c9ddc0(&uStack_438,&uStack_270,&fStack_388);
      uStack_1d0 = 0x1f;
      uStack_378 = uStack_1c0;
      fStack_388 = 4.34403e-44;
      uStack_384 = uStack_1cc;
      uStack_37c = uStack_1c4;
      uStack_f1 = 1;
      pdb_140c9de60(&uStack_270,&uStack_438,&fStack_388);
      uStack_f1 = 1;
      pdb_140c9df00(&fStack_388,&uStack_270,&uStack_1d0);
      uStack_f1 = 0;
      pdb_140c9dd20(&uStack_438,&plStack_328,&fStack_388);
      uStack_270 = CONCAT44(fVar27,fVar26);
      uStack_f2 = 1;
      fStack_268 = fVar25 + 0.0;
      pdb_142b24cf0(&plStack_328,&uStack_438,&uStack_270);
      uStack_f2 = 0;
      pplVar18 = &plStack_1e8;
      uStack_438 = (undefined8 *)pdb_142b23ca0(uStack_1a0,pplVar18,&plStack_328);
      pplStack_430 = pplVar18;
      pdb_140a8e090(&uStack_270,uStack_198);
      if (uStack_270._4_4_ < 0.0) {
        uStack_270 = CONCAT44((uStack_270._4_4_ / fVar7) * fVar8 +
                              (fVar6 - uStack_270._4_4_ / fVar7) * 0.0,(float)uStack_270);
      }
      bVar10 = pdb_1408ffab0(&uStack_438);
      cVar11 = bVar10 - 2;
      if (bVar10 < 2) {
        cVar11 = '\x03';
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar11) {
      case '\x01':
        *param_10 = lVar16;
        *(float *)(param_10 + 1) = fVar25;
        fStack_388 = (float)lVar16 - (float)uStack_270;
        uStack_384 = CONCAT44(uStack_384._4_4_,fVar25 - fStack_268);
        pdb_140df4520(&plStack_328,&fStack_388);
        *(undefined4 *)(puStack_180 + 1) = pbStack_320._0_4_;
        *puStack_180 = plStack_328;
        break;
      case '\x02':
        fVar26 = (float)uStack_270 + *(float *)((longlong)param_10 + 0xc);
        fVar25 = fStack_268 + *(float *)((longlong)param_10 + 0x14);
        fVar24 = (float)pdb_14140ce00(uStack_138,fVar26,fVar25);
        cVar11 = pdb_140a84de0(uStack_140,fVar26,fVar25);
        if (cVar11 == '\0') {
          *puStack_178 = uStack_11c;
          lVar16 = *(longlong *)(lStack_110 + 0x30);
          uVar2 = *(undefined8 *)(lStack_110 + 0x40);
          if (lVar16 == *(longlong *)(lStack_110 + 0x20)) {
            pdb_142d7e8a0(lStack_158);
          }
          *(undefined8 *)(*(longlong *)(lStack_110 + 0x28) + lVar16 * 8) = uVar2;
          *(longlong *)(lStack_110 + 0x30) = lVar16 + 1;
          *(longlong *)(lStack_110 + 0x40) = *(longlong *)(lStack_110 + 0x40) + 1;
          *puStack_170 = uStack_118;
          lVar16 = *(longlong *)(lStack_108 + 0x30);
          uVar2 = *(undefined8 *)(lStack_108 + 0x40);
          if (lVar16 == *(longlong *)(lStack_108 + 0x20)) {
            pdb_142d7e8a0(lStack_150);
          }
          *(undefined8 *)(*(longlong *)(lStack_108 + 0x28) + lVar16 * 8) = uVar2;
          *(longlong *)(lStack_108 + 0x30) = lVar16 + 1;
          *(longlong *)(lStack_108 + 0x40) = *(longlong *)(lStack_108 + 0x40) + 1;
        }
        else {
          *puStack_130 = uStack_f8;
          lVar16 = *(longlong *)(lStack_100 + 0x30);
          uVar2 = *(undefined8 *)(lStack_100 + 0x40);
          if (lVar16 == *(longlong *)(lStack_100 + 0x20)) {
            pdb_142d7e6e0(lStack_128);
          }
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          lVar21 = *(longlong *)(lStack_100 + 0x28);
          lVar23 = lVar16 * 0x20;
          *(undefined8 *)(lVar21 + lVar23) = uVar2;
          *(undefined8 *)(lVar21 + 8 + lVar23) = uStack_148;
          *(float *)(lVar21 + 0x10 + lVar23) = fVar26;
          *(float *)(lVar21 + 0x14 + lVar23) = fVar24;
          *(float *)(lVar21 + 0x18 + lVar23) = fVar25;
          *(longlong *)(lStack_100 + 0x30) = lVar16 + 1;
          *(longlong *)(lStack_100 + 0x40) = *(longlong *)(lStack_100 + 0x40) + 1;
        }
        break;
      case '\x03':
        fVar25 = (float)uStack_270 + *(float *)((longlong)param_10 + 0xc);
        fVar26 = fStack_268 + *(float *)((longlong)param_10 + 0x14);
        fVar24 = (float)pdb_14140ce00(uStack_138,fVar25,fVar26);
        cVar11 = pdb_140a84de0(uStack_140,fVar25,fVar26);
        if (cVar11 != '\0') {
          *puStack_130 = uStack_f8;
          lVar16 = *(longlong *)(lStack_100 + 0x30);
          uVar2 = *(undefined8 *)(lStack_100 + 0x40);
          if (lVar16 == *(longlong *)(lStack_100 + 0x20)) {
            pdb_142d7e6e0(lStack_128);
          }
          uVar9 = uStack_148;
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          lVar21 = *(longlong *)(lStack_100 + 0x28);
          lVar23 = lVar16 * 0x20;
          *(undefined8 *)(lVar21 + lVar23) = uVar2;
          *(undefined8 *)(lVar21 + 8 + lVar23) = uStack_148;
          *(float *)(lVar21 + 0x10 + lVar23) = fVar25;
          *(float *)(lVar21 + 0x14 + lVar23) = fVar24;
          *(float *)(lVar21 + 0x18 + lVar23) = fVar26;
          *(longlong *)(lStack_100 + 0x30) = lVar16 + 1;
          *(longlong *)(lStack_100 + 0x40) = *(longlong *)(lStack_100 + 0x40) + 1;
          *puStack_168 = uStack_114;
          plStack_328 = (longlong *)CONCAT44(plStack_328._4_4_,fVar26);
          pdb_14007ee60();
          pbVar17 = pub_1406abab0(0x58,8);
          if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x58);
          }
          pbVar17[0] = 1;
          pbVar17[1] = 0;
          pbVar17[2] = 0;
          pbVar17[3] = 0;
          pbVar17[4] = 0;
          pbVar17[5] = 0;
          pbVar17[6] = 0;
          pbVar17[7] = 0;
          pbVar17[8] = 1;
          pbVar17[9] = 0;
          pbVar17[10] = 0;
          pbVar17[0xb] = 0;
          pbVar17[0xc] = 0;
          pbVar17[0xd] = 0;
          pbVar17[0xe] = 0;
          pbVar17[0xf] = 0;
          pbVar17[0x10] = 1;
          pbVar17[0x11] = 0;
          pbVar17[0x12] = 0;
          pbVar17[0x13] = 0;
          *(longlong *)(pbVar17 + 0x14) = *param_10;
          *(int *)(pbVar17 + 0x1c) = (int)param_10[1];
          *(float *)(pbVar17 + 0x20) = fVar25;
          *(float *)(pbVar17 + 0x24) = fVar24;
          *(longlong **)(pbVar17 + 0x28) = plStack_328;
          *(undefined8 *)(pbVar17 + 0x30) = uVar9;
          plStack_328 = (longlong *)0xc;
          pbStack_320 = pbVar17;
          pdb_140ae5180(uStack_160,&plStack_328,&UNK_1435aa518);
        }
      }
      uVar12 = (uint)uStack_1a8 - 1 & (uint)uStack_1a8;
      lStack_1f0 = lStack_1b0;
    }
  }
  return;
}

