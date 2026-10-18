// VA 0x141f41e40, PDB extent 3892 bytes
// system_roof::ui_edit_roof_ridge_dir::do_ui_edit_roof_ridge_dir
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::ui_edit_roof_ridge_dir::do_ui_edit_roof_ridge_dir
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_dir.rs
   Extent: 3892 */

void pdb_141f41e40(uint *param_1,byte *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9,longlong *param_10,undefined8 *param_11)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong *puVar6;
  uint **ppuVar7;
  uint **ppuVar8;
  undefined8 uVar9;
  code *pcVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint **ppuVar15;
  char *pcVar16;
  uint **ppuVar17;
  longlong *plVar18;
  undefined8 uVar19;
  byte *pbVar20;
  undefined4 uVar21;
  uint **ppuVar22;
  ulonglong uVar23;
  uint **ppuVar24;
  uint **ppuVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined *puVar28;
  int *piVar29;
  undefined *puVar30;
  undefined *puVar31;
  uint **ppuVar32;
  uint *puVar33;
  longlong lVar34;
  uint **ppuVar35;
  bool bVar36;
  bool bVar37;
  uint unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  uint unaff_XMM10_Da;
  uint *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  float fStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  longlong lStack_1e8;
  code *pcStack_1e0;
  uint auStack_160 [8];
  char acStack_140 [4];
  float fStack_13c;
  undefined8 uStack_138;
  float fStack_130;
  undefined8 uStack_12c;
  uint uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  uint uStack_108;
  uint uStack_104;
  undefined8 *puStack_100;
  uint *puStack_f8;
  uint **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  longlong *plStack_c8;
  byte *pbStack_c0;
  uint **ppuStack_b8;
  uint *puStack_b0;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  puStack_100 = param_4;
  plStack_c8 = param_3;
  pbStack_c0 = param_2;
  cVar11 = pdb_140e94b40();
  puStack_b0 = param_1;
  if (cVar11 == '\0') {
    lStack_d8 = 0;
LAB_141f42045:
    puVar6 = (ulonglong *)*param_11;
    lVar13 = param_11[1];
    uVar23 = *puVar6;
    ppuVar25 = (uint **)0x0;
    ppuVar15 = (uint **)(uVar23 - *(ulonglong *)(lVar13 + 0x18));
    if (uVar23 < *(ulonglong *)(lVar13 + 0x18)) {
      ppuVar15 = ppuVar25;
    }
    ppuVar22 = (uint **)(uVar23 - *(ulonglong *)(lVar13 + 0x38));
    if (uVar23 < *(ulonglong *)(lVar13 + 0x38)) {
      ppuVar22 = ppuVar25;
    }
    lVar34 = *(longlong *)(lVar13 + 8);
    ppuVar7 = *(uint ***)(lVar13 + 0x10);
    ppuVar8 = *(uint ***)(lVar13 + 0x30);
    bVar36 = ppuVar8 < ppuVar22;
    ppuVar32 = (uint **)((longlong)ppuVar8 - (longlong)ppuVar22);
    ppuVar24 = ppuVar32;
    if (bVar36) {
      ppuVar24 = ppuVar25;
    }
    bVar37 = ppuVar7 < ppuVar15;
    ppuVar35 = (uint **)((longlong)ppuVar7 - (longlong)ppuVar15);
    ppuVar17 = ppuVar35;
    if (bVar37) {
      ppuVar17 = ppuVar25;
    }
    lVar26 = *(longlong *)(lVar13 + 0x28);
    uVar23 = *(ulonglong *)(lVar13 + 0x40);
    *puVar6 = (uVar23 - (longlong)ppuVar24) - (longlong)ppuVar17;
    if ((bVar37 || ppuVar35 == (uint **)0x0) && (bVar36 || ppuVar32 == (uint **)0x0)) {
      pcVar16 = *(char **)puStack_b0;
      if (*pcVar16 == '\0') goto LAB_141f42151;
LAB_141f424a6:
      if (!bVar37 && ppuVar35 != (uint **)0x0 || !bVar36 && ppuVar32 != (uint **)0x0) {
        puVar33 = *(uint **)pbStack_c0;
LAB_141f424c4:
        uStack_e0 = CONCAT44(uStack_e0._4_4_,unaff_XMM7_Dd);
        uStack_120 = unaff_XMM6_Da;
        uStack_11c = unaff_XMM10_Da;
        uVar23 = pdb_140b54b40(puVar33,ppuVar24);
        if ((uVar23 & 0xffffffff) != 0) {
          lVar13 = plStack_c8[1];
          uVar14 = uVar23 & 0xffffffff ^ 0xffffffff;
          if (((uVar14 < *(ulonglong *)(lVar13 + 0x10)) &&
              (piVar29 = (int *)(uVar14 * 0x18 + *(longlong *)(lVar13 + 8)),
              piVar29[4] == (int)(uVar23 >> 0x20))) && (*piVar29 != 0)) {
            lVar34 = *plStack_c8;
            uVar23 = *(ulonglong *)(piVar29 + 2);
            if (((uVar23 & 0xffffffff) < *(ulonglong *)(lVar34 + 0x38)) &&
               ((*(ulonglong *)(*(longlong *)(lVar34 + 0x28) + (uVar23 >> 6 & 0x3ffffff) * 8) >>
                 (uVar23 & 0x3f) & 1) != 0)) {
              if (*(ulonglong *)(lVar34 + 0x110) <
                  *(ulonglong *)(*(longlong *)(lVar13 + 0x1a0) + 0x40 + (uVar23 >> 0x20) * 0x48)) {
                lVar13 = *(longlong *)(lVar13 + 0x1a0) + (uVar23 >> 0x20) * 0x48;
                uVar23 = *(ulonglong *)
                          (*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lVar34 + 0x110) * 8);
                if (uVar23 == 0) goto LAB_141f4262d;
                lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar23 * 0x30);
              }
              else {
LAB_141f4262d:
                lVar13 = 0;
              }
              uVar12 = piVar29[1];
              puStack_f8 = (uint *)pdb_1406d0830(*puStack_100);
              uVar9 = *param_5;
              ppuStack_f0 = ppuVar17;
              uVar19 = pdb_14072cd40(&puStack_f8);
              pdb_140b133e0(acStack_140,uVar9,uVar19);
              puVar27 = (undefined8 *)(lVar13 + (ulonglong)~uVar12 * 0x58);
              auStack_160[0] = pdb_140b77a00(puVar27);
              lStack_1e8 = *param_10 + 0x2c;
              uStack_218 = (uint **)auStack_160;
              uStack_210 = pdb_140f705d0;
              uStack_208 = &uStack_120;
              fStack_200 = 12.818985;
              uStack_1fc = 1;
              uStack_1f8 = &uStack_e0;
              pcStack_1f0 = pdb_140f70fc0;
              pcStack_1e0 = pdb_140f71a50;
              pdb_140f60760(&puStack_2c8,&UNK_14342ee51,&uStack_218);
              pbVar1 = (byte *)uStack_2c0;
              puStack_b0 = puStack_2c8;
              uVar9 = CONCAT44(uStack_2b8._4_4_,(undefined4)uStack_2b8);
              pdb_14007ee60();
              pbVar20 = pub_1406abab0(0x28,8);
              pbStack_c0 = (byte *)uStack_2c0;
              if (pbVar20 != (byte *)0x0) {
                pbVar20[0] = 1;
                pbVar20[1] = 0;
                pbVar20[2] = 0;
                pbVar20[3] = 0;
                pbVar20[4] = 0;
                pbVar20[5] = 0;
                pbVar20[6] = 0;
                pbVar20[7] = 0;
                pbVar20[8] = 1;
                pbVar20[9] = 0;
                pbVar20[10] = 0;
                pbVar20[0xb] = 0;
                pbVar20[0xc] = 0;
                pbVar20[0xd] = 0;
                pbVar20[0xe] = 0;
                pbVar20[0xf] = 0;
                *(uint *)(pbVar20 + 0x10) = unaff_XMM6_Da;
                *(uint *)(pbVar20 + 0x14) = unaff_XMM10_Da;
                *(undefined4 *)(pbVar20 + 0x18) = unaff_XMM7_Dd;
                *(float *)(pbVar20 + 0x1c) = unaff_XMM7_Da;
                *(float *)(pbVar20 + 0x20) = unaff_XMM7_Db;
                *(float *)(pbVar20 + 0x24) = unaff_XMM7_Dc;
                pdb_1409baea0(&uStack_218,uStack_2c0,uVar9,pbVar20,&UNK_14342ee68);
                puStack_2a8 = uStack_1f8;
                uStack_2b0 = CONCAT44(uStack_1fc,fStack_200);
                puStack_2c8 = (uint *)uStack_218;
                uStack_2c0 = uStack_210;
                uStack_2b8 = uStack_208;
                pdb_140b133f0(acStack_140,&puStack_2c8);
                if (puStack_b0 != (uint *)0x0) {
                  pub_1406abac0(pbStack_c0,(ulonglong)puStack_b0,1);
                }
                cVar11 = pdb_1408ffab0(&puStack_f8);
                if (cVar11 == '\x03') {
                  *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
                  pdb_140c419b0(*param_7,*puVar27,*param_8);
                }
                cVar11 = pdb_1408ffa90(&puStack_f8);
                if (cVar11 != '\0') {
                  uVar23 = CONCAT71((int7)((ulonglong)pbVar1 >> 8),
                                    *(undefined1 *)((longlong)puVar27 + 0x3c)) ^ 1;
                  uVar9 = *puVar27;
                  pdb_141b74e20(param_6,uVar9,uVar23 & 0xffffffff,&UNK_14342ee98);
                  uStack_210._0_2_ =
                       CONCAT11((char)uVar23,*(undefined1 *)((longlong)puVar27 + 0x3c));
                  uStack_218 = (uint **)uVar9;
                  pdb_141b74d00(param_9,&uStack_218,&UNK_14342eeb0);
                }
                if (lStack_d8 == 0) {
                  return;
                }
                puStack_2c8 = (uint *)&uStack_d0;
                uStack_218 = &puStack_2c8;
                pdb_142807ee0(&UNK_14342f060,&uStack_218);
                return;
              }
              goto LAB_141f428ec;
            }
          }
        }
      }
    }
    else {
      lVar26 = lVar26 + (longlong)ppuVar22 * 0x30;
      lVar34 = lVar34 + (longlong)ppuVar15 * 0x30;
      if (ppuVar7 < ppuVar15) {
        lVar34 = 8;
      }
      lVar13 = 0;
      if (ppuVar15 < ppuVar7) {
        lVar13 = lVar34 + -0x30 + (longlong)ppuVar17 * 0x30;
      }
      if (ppuVar8 < ppuVar22) {
        lVar26 = 8;
      }
      lVar34 = lVar26 + -0x30 + (longlong)ppuVar24 * 0x30;
      if (ppuVar8 <= ppuVar22) {
        lVar34 = lVar13;
      }
      *puVar6 = uVar23;
      ppuVar17 = *(uint ***)(lVar34 + 8);
      unaff_XMM7_Da = *(float *)(lVar34 + 0x20);
      unaff_XMM7_Db = *(float *)(lVar34 + 0x24);
      unaff_XMM7_Dc = *(float *)(lVar34 + 0x28);
      unaff_XMM7_Dd = *(undefined4 *)(lVar34 + 0x2c);
      unaff_XMM6_Da = *(uint *)(lVar34 + 0x10);
      unaff_XMM10_Da = *(uint *)(lVar34 + 0x14);
      ppuVar24 = *(uint ***)(lVar34 + 0x18);
      pcVar16 = *(char **)puStack_b0;
      if (*pcVar16 != '\0') goto LAB_141f424a6;
LAB_141f42151:
      if (1 < *(int *)(pcVar16 + 8) - 1U) goto LAB_141f424a6;
      ppuStack_b8 = *(uint ***)(pcVar16 + 0x10);
      puStack_b0 = *(uint **)pbStack_c0;
      uVar23 = pdb_140b54b40();
      if ((uVar23 & 0xffffffff) != 0) {
        lVar13 = plStack_c8[1];
        uVar14 = uVar23 & 0xffffffff ^ 0xffffffff;
        uVar21 = 1;
        if (*(ulonglong *)(lVar13 + 0x10) <= uVar14) {
LAB_141f428fe:
          uStack_218 = (uint **)CONCAT44((int)uVar14,uVar21);
          uStack_210 = (code *)uVar23;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14342efb0,0x2b,&uStack_218,&UNK_14342ef90,&UNK_14342ee20);
        }
        piVar29 = (int *)(uVar14 * 0x18 + *(longlong *)(lVar13 + 8));
        uVar14 = uVar23 >> 0x20;
        if ((piVar29[4] != (int)(uVar23 >> 0x20)) || (*piVar29 == 0)) goto LAB_141f428fe;
        lVar34 = *plStack_c8;
        uVar14 = *(ulonglong *)(piVar29 + 2);
        uVar21 = 0;
        if ((*(ulonglong *)(lVar34 + 0x38) <= (uVar14 & 0xffffffff)) ||
           ((*(ulonglong *)(*(longlong *)(lVar34 + 0x28) + (uVar14 >> 6 & 0x3ffffff) * 8) >>
             (uVar14 & 0x3f) & 1) == 0)) goto LAB_141f428fe;
        if (*(ulonglong *)(lVar34 + 0x110) <
            *(ulonglong *)(*(longlong *)(lVar13 + 0x1a0) + 0x40 + (uVar14 >> 0x20) * 0x48)) {
          lVar13 = *(longlong *)(lVar13 + 0x1a0) + (uVar14 >> 0x20) * 0x48;
          uVar23 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lVar34 + 0x110) * 8)
          ;
          if (uVar23 == 0) goto LAB_141f42251;
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar23 * 0x30);
        }
        else {
LAB_141f42251:
          lVar13 = 0;
        }
        puVar33 = (uint *)((ulonglong)(uint)~piVar29[1] * 0x58 + lVar13);
        cVar11 = pdb_140b77990(puVar33);
        if ((cVar11 == '\0') || (puVar33[2] != 1)) goto LAB_141f424a6;
        uVar12 = puVar33[3];
        uVar2 = puVar33[4];
        uStack_e0 = pdb_140ac6110(puVar33);
        pdb_140ac5730(acStack_140,&uStack_e0,puVar33);
        if (acStack_140[0] == '\0') goto LAB_141f424a6;
        unaff_XMM10_Da = uVar2;
        unaff_XMM6_Da = uVar12;
        if ((char)puVar33[0xf] != '\0') {
          unaff_XMM6_Da = uVar2 ^ _DAT_142e37820;
          unaff_XMM10_Da = uVar12;
        }
        uStack_108 = unaff_XMM6_Da;
        uStack_104 = unaff_XMM10_Da;
        pdb_140df4520(&puStack_2c8,&uStack_108);
        pdb_140de9ab0(&uStack_218,&puStack_2c8);
        unaff_XMM7_Dd = _DAT_142e36f28;
        unaff_XMM7_Db = ((float)uStack_138 + (float)uStack_12c) * _DAT_142e36f60;
        unaff_XMM7_Dc =
             ((float)((ulonglong)uStack_138 >> 0x20) + (float)((ulonglong)uStack_12c >> 0x20)) *
             _UNK_142e36f64;
        unaff_XMM7_Da = (fStack_13c + fStack_130) * _DAT_142e36f50;
        uStack_1fc = 0x3f800000;
        uStack_1f8._0_4_ = 0x3f800000;
        uStack_1f8._4_4_ = 0x3f800000;
        uStack_208._0_4_ = unaff_XMM7_Da;
        uStack_208._4_4_ = unaff_XMM7_Db;
        fStack_200 = unaff_XMM7_Dc;
        pdb_140b3d590(&uStack_120,_DAT_142e36f28,_DAT_142e36f28,_DAT_142e37830,&uStack_218);
        uVar9 = *puStack_100;
        uStack_2c0 = pdb_141f43a10;
        uStack_a1 = 1;
        puStack_2c8 = puVar33;
        pdb_141f40f40(&uStack_218,&puStack_2c8);
        puStack_f8 = (uint *)uStack_218;
        ppuStack_f0 = (uint **)uStack_210;
        uStack_e8 = CONCAT44(uStack_208._4_4_,(float)uStack_208);
        uStack_2b0 = uStack_110;
        uStack_2c0 = (code *)CONCAT44(uStack_11c,uStack_120);
        uStack_2b8._0_4_ = uStack_118;
        uStack_2b8._4_4_ = uStack_114;
        puStack_2c8 = (uint *)CONCAT71(puStack_2c8._1_7_,2);
        auStack_160[0] = auStack_160[0] & 0xffffff00;
        uStack_a2 = 1;
        pdb_140c9dcb0(&uStack_218,&puStack_2c8,auStack_160);
        uStack_a2 = 1;
        pdb_140c9dbe0(&puStack_2c8,&uStack_218,0);
        uStack_a2 = 0;
        ppuVar15 = &puStack_f8;
        uStack_218 = (uint **)pdb_142807c30(uVar9,ppuVar15,&puStack_2c8);
        uStack_a1 = 0;
        uStack_210 = (code *)ppuVar15;
        cVar11 = pdb_1408ffaf0(&uStack_218);
        uStack_a1 = 0;
        ppuVar17 = (uint **)pdb_14072cd40(&uStack_218);
        puVar33 = puStack_b0;
        ppuVar24 = ppuStack_b8;
        if (cVar11 != '\0') {
          unaff_XMM7_Dd = _DAT_142e37990;
        }
        goto LAB_141f424c4;
      }
    }
    if (lStack_d8 == 0) {
      return;
    }
    plVar18 = (longlong *)pdb_140e97000();
    if ((char)plVar18[0xd] != '\x01') goto LAB_141f428b7;
    do {
      if (*plVar18 == 0) {
        *plVar18 = -1;
        puStack_b0 = (uint *)plVar18;
        pdb_140e95370(plVar18 + 1,uStack_d0);
        *(longlong *)puStack_b0 = *(longlong *)puStack_b0 + 1;
        return;
      }
LAB_141f428ab:
      plVar18 = (longlong *)pdb_142dc8090(&UNK_14359bf70);
LAB_141f428b7:
      plVar18 = (longlong *)pdb_142e293d0(plVar18,0);
    } while (plVar18 != (longlong *)0x0);
  }
  else {
    puVar30 = &UNK_14342f019;
    lVar34 = 0x3e;
    uVar23 = 0x3e;
    lVar13 = pdb_141f435f0(&UNK_14342f019);
    if (lVar13 == 1) {
      if (0x3e < uVar23) {
LAB_141f42957:
        pdb_142dc8070(&UNK_14342f019,0x3e,0);
LAB_141f42977:
        pdb_142dc8070(&UNK_14342f019,0x3e);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      puVar30 = &UNK_14342f019;
      uVar14 = pdb_141f435f0(&UNK_14342f019);
      if ((uVar14 & 1) != 0) {
        if (0x3e < uVar23 + 2) goto LAB_141f42977;
        lVar34 = 0x3c - uVar23;
        puVar30 = &UNK_14342f01b + uVar23;
      }
    }
    puVar28 = &UNK_14342edbb;
    puVar31 = &UNK_14342ed8a;
    do {
      bVar3 = puVar28[-1];
      uVar12 = (uint)(char)bVar3;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar28[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar28[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar12 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar12 = bVar5 & 0xf;
          }
          uVar12 = bVar4 & 0x3f | uVar12 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar12 = bVar4 & 0x1f;
        }
        uVar12 = (uint)(bVar3 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_141f41fa4;
LAB_141f41fbc:
        puVar31 = puVar28 + -0x14342ed89;
        if (puVar31 < (undefined *)0x32) {
          lVar13 = 0x31 - (longlong)puVar31;
          puVar31 = puVar28 + 1;
          goto LAB_141f41fde;
        }
        pdb_142dc8070(&UNK_14342ed8a,0x31,puVar31,0x31,&UNK_14342f0c0);
        goto LAB_141f42957;
      }
      puVar28 = puVar28 + -1;
      if (uVar12 == 0x5c) goto LAB_141f41fbc;
LAB_141f41fa4:
      if (uVar12 == 0x2f) goto LAB_141f41fbc;
    } while (puVar28 != &UNK_14342ed8a);
    lVar13 = 0x31;
LAB_141f41fde:
    ppuVar15 = (uint **)pdb_140e97000();
    if ((*(char *)(ppuVar15 + 0xd) == '\x01') ||
       (ppuVar15 = (uint **)pdb_142e293d0(ppuVar15,0), ppuVar15 != (uint **)0x0)) {
      if (*ppuVar15 != (uint *)0x0) goto LAB_141f428ab;
      *ppuVar15 = (uint *)0xffffffffffffffff;
      ppuStack_b8 = ppuVar15;
      uStack_d0 = pdb_140e94f10(ppuVar15 + 1,puVar30,lVar34,puVar31,lVar13,1,0);
      *ppuStack_b8 = (uint *)((longlong)*ppuStack_b8 + 1);
      lStack_d8 = 1;
      goto LAB_141f42045;
    }
  }
  pdb_142dc7890(&UNK_14359bf00);
LAB_141f428ec:
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x28);
}

