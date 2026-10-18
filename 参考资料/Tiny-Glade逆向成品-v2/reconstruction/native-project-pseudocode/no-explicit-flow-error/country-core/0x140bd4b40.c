// VA 0x140bd4b40, PDB extent 3634 bytes
// country_core::resources::logo_animation::animate_logo
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::logo_animation::animate_logo
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/logo_animation.rs
   Extent: 3634 */

void pdb_140bd4b40(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  int *piVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  longlong lStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined4 uStack_df;
  undefined2 uStack_db;
  undefined1 uStack_d9;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong *plStack_a0;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  fVar25 = _DAT_142e36f28;
  uStack_90 = 0xfffffffffffffffe;
  fVar24 = *(float *)(*param_4 + 0x58);
  piVar5 = (int *)*param_1;
  if (_DAT_142e36f28 < (float)piVar5[4] || _DAT_142e36f28 == (float)piVar5[4]) {
    if (_DAT_142e36f28 < (float)piVar5[5] || _DAT_142e36f28 == (float)piVar5[5]) {
      if (_DAT_142e36f28 < (float)piVar5[6] || _DAT_142e36f28 == (float)piVar5[6]) {
        if (_DAT_142e36f28 < (float)piVar5[7] || _DAT_142e36f28 == (float)piVar5[7]) {
          if ((float)piVar5[8] <= _DAT_142e36f28 && _DAT_142e36f28 != (float)piVar5[8]) {
            fVar26 = (float)piVar5[0xd];
            *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
            fVar26 = fVar24 / fVar26 + (float)piVar5[8];
            fVar24 = _DAT_143063f18;
            if (_DAT_143063f18 <= fVar26) {
              fVar24 = fVar26;
            }
            if (fVar24 <= fVar25) {
              fVar25 = fVar24;
            }
            piVar5[8] = (int)fVar25;
          }
        }
        else {
          fVar26 = (float)piVar5[0xc];
          *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
          fVar26 = fVar24 / fVar26 + (float)piVar5[7];
          fVar24 = _DAT_143063f18;
          if (_DAT_143063f18 <= fVar26) {
            fVar24 = fVar26;
          }
          if (fVar24 <= fVar25) {
            fVar25 = fVar24;
          }
          piVar5[7] = (int)fVar25;
        }
      }
      else {
        fVar26 = (float)piVar5[0xb];
        *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
        fVar27 = (float)piVar5[6];
        if ((fVar27 == 0.0) && (!NAN(fVar27))) {
          if (*(longlong *)*param_6 == 0) {
            pdb_14007ee60();
            pbStack_b8 = pub_1406abab0(0x17,1);
            uVar12 = _UNK_143064660;
            uVar11 = _UNK_14306465c;
            uVar3 = _UNK_143064658;
            if (pbStack_b8 == (byte *)0x0) goto LAB_140bd54ed;
            *(undefined4 *)pbStack_b8 = _DAT_143064654;
            *(undefined4 *)(pbStack_b8 + 4) = uVar3;
            *(undefined4 *)(pbStack_b8 + 8) = uVar11;
            *(undefined4 *)(pbStack_b8 + 0xc) = uVar12;
            pbStack_b8[0xf] = 0x42;
            pbStack_b8[0x10] = 0x72;
            pbStack_b8[0x11] = 0x61;
            pbStack_b8[0x12] = 0x6e;
            pbStack_b8[0x13] = 99;
            pbStack_b8[0x14] = 0x68;
            pbStack_b8[0x15] = 0x65;
            pbStack_b8[0x16] = 0x73;
            uStack_d0 = 0;
            puStack_c0 = (undefined *)0x17;
            uStack_b0 = 0x17;
            uStack_a8 = CONCAT71(uStack_a8._1_7_,2);
          }
          else {
            pdb_140a8b180(&uStack_d0,*(longlong *)*param_6 + 0x10,&DAT_143064654,0x17);
            if ((int)uStack_d0 == 2) {
              uStack_108 = uStack_c8;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143064a60,0x2b,&uStack_108,&UNK_143064a40,&UNK_143064798);
            }
          }
          uStack_e8 = uStack_b0;
          uStack_e0 = (undefined1)uStack_a8;
          uStack_df = uStack_a8._1_4_;
          uStack_db = uStack_a8._5_2_;
          uStack_d9 = uStack_a8._7_1_;
          puStack_f8 = puStack_c0;
          pbStack_f0 = pbStack_b8;
          uStack_108 = uStack_d0;
          uStack_100 = uStack_c8;
          pdb_140a8a6f0(&uStack_108);
          pdb_1409a5ed0(&uStack_108);
          if (puStack_f8 != (undefined *)0x0) {
            pub_1406abac0(pbStack_f0,(ulonglong)puStack_f8,1);
          }
        }
        fVar27 = fVar24 / fVar26 + fVar27;
        fVar24 = _DAT_143063f18;
        if (_DAT_143063f18 <= fVar27) {
          fVar24 = fVar27;
        }
        if (fVar24 <= fVar25) {
          fVar25 = fVar24;
        }
        piVar5[6] = (int)fVar25;
      }
    }
    else {
      fVar26 = (float)piVar5[10];
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      fVar26 = fVar24 / fVar26 + (float)piVar5[5];
      fVar24 = _DAT_143063f18;
      if (_DAT_143063f18 <= fVar26) {
        fVar24 = fVar26;
      }
      if (fVar24 <= fVar25) {
        fVar25 = fVar24;
      }
      piVar5[5] = (int)fVar25;
    }
  }
  else {
    fVar26 = (float)piVar5[9];
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    fVar27 = (float)piVar5[4];
    if ((fVar27 == 0.0) && (!NAN(fVar27))) {
      if (*(longlong *)*param_6 == 0) {
        pdb_14007ee60();
        pbStack_b8 = pub_1406abab0(0x17,1);
        uVar12 = _UNK_143064677;
        uVar11 = _UNK_143064673;
        uVar3 = _UNK_14306466f;
        if (pbStack_b8 == (byte *)0x0) {
LAB_140bd54ed:
          pdb_142dc7e2a(1,0x17);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(undefined4 *)pbStack_b8 = _DAT_14306466b;
        *(undefined4 *)(pbStack_b8 + 4) = uVar3;
        *(undefined4 *)(pbStack_b8 + 8) = uVar11;
        *(undefined4 *)(pbStack_b8 + 0xc) = uVar12;
        pbStack_b8[0xf] = 0x53;
        pbStack_b8[0x10] = 99;
        pbStack_b8[0x11] = 0x72;
        pbStack_b8[0x12] = 0x69;
        pbStack_b8[0x13] = 0x62;
        pbStack_b8[0x14] = 0x62;
        pbStack_b8[0x15] = 0x6c;
        pbStack_b8[0x16] = 0x65;
        uStack_d0 = 0;
        puStack_c0 = (undefined *)0x17;
        uStack_b0 = 0x17;
        uStack_a8 = CONCAT71(uStack_a8._1_7_,2);
      }
      else {
        pdb_140a8b180(&uStack_d0,*(longlong *)*param_6 + 0x10,&DAT_14306466b,0x17);
        if ((int)uStack_d0 == 2) {
          uStack_108 = uStack_c8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143064a60,0x2b,&uStack_108,&UNK_143064a40,&UNK_143064798);
        }
      }
      uStack_e8 = uStack_b0;
      uStack_e0 = (undefined1)uStack_a8;
      uStack_df = uStack_a8._1_4_;
      uStack_db = uStack_a8._5_2_;
      uStack_d9 = uStack_a8._7_1_;
      puStack_f8 = puStack_c0;
      pbStack_f0 = pbStack_b8;
      uStack_108 = uStack_d0;
      uStack_100 = uStack_c8;
      pdb_140a8a6f0(&uStack_108);
      pdb_1409a5ed0(&uStack_108);
      if (puStack_f8 != (undefined *)0x0) {
        pub_1406abac0(pbStack_f0,(ulonglong)puStack_f8,1);
      }
    }
    fVar27 = fVar24 / fVar26 + fVar27;
    fVar24 = _DAT_143063f18;
    if (_DAT_143063f18 <= fVar27) {
      fVar24 = fVar27;
    }
    if (fVar24 <= fVar25) {
      fVar25 = fVar24;
    }
    piVar5[4] = (int)fVar25;
  }
  if (*piVar5 == 0) {
LAB_140bd509b:
    if (piVar5[2] == 0) {
      return;
    }
    uVar9 = *(undefined8 *)(piVar5 + 2);
    lVar21 = param_2[1];
    lVar19 = 1;
    if ((((ulonglong)~(uint)uVar9 < *(ulonglong *)(lVar21 + 0x10)) &&
        (piVar22 = (int *)((ulonglong)~(uint)uVar9 * 0x18 + *(longlong *)(lVar21 + 8)),
        piVar22[4] == (int)((ulonglong)uVar9 >> 0x20))) && (*piVar22 != 0)) {
      lVar19 = *param_2;
      uVar20 = *(ulonglong *)(piVar22 + 2);
      if (((uVar20 & 0xffffffff) < *(ulonglong *)(lVar19 + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(lVar19 + 0x28) + (uVar20 >> 6 & 0x3ffffff) * 8) >>
           (uVar20 & 0x3f) & 1) != 0)) {
        uVar20 = uVar20 >> 0x20;
        lVar21 = *(longlong *)(lVar21 + 0x1a0);
        lVar6 = *(longlong *)(lVar21 + 0x18 + uVar20 * 0x48);
        lVar13 = *(longlong *)(lVar21 + 0x38 + uVar20 * 0x48);
        if ((*(ulonglong *)(lVar19 + 0x118) < *(ulonglong *)(lVar21 + 0x40 + uVar20 * 0x48)) &&
           (uVar20 = *(ulonglong *)(lVar13 + *(ulonglong *)(lVar19 + 0x118) * 8), uVar20 != 0)) {
          lVar21 = *(longlong *)(lVar6 + 0x10 + ~uVar20 * 0x30);
          uVar20 = (ulonglong)(uint)~piVar22[1];
          lVar23 = uVar20 * 0x38;
          lVar7 = *(longlong *)(lVar21 + 0x28 + lVar23);
        }
        else {
          lVar21 = 0;
          uVar20 = (ulonglong)(uint)~piVar22[1];
          lVar23 = uVar20 * 0x38;
          lVar7 = *(longlong *)(lVar23 + 0x28);
        }
        if (lVar7 != 0) {
          lVar13 = ~*(ulonglong *)(lVar13 + *(longlong *)(lVar19 + 0x110) * 8) * 0x30;
          lVar19 = *(longlong *)(lVar6 + 0x10 + lVar13);
          uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar6 = *(longlong *)(lVar6 + 0x28 + lVar13);
          plVar8 = (longlong *)*param_5;
          lStack_118 = pdb_140e51270(*plVar8 + 0x10,lVar21 + lVar23 + 0x28);
          lVar21 = *plVar8;
          iVar1 = piVar5[6];
          iVar2 = piVar5[8];
          uVar4 = *(uint *)*param_7;
          plStack_a0 = (longlong *)(ulonglong)((uint *)*param_7)[1];
          uVar9 = *param_3;
          uStack_91 = 1;
          lStack_110 = lStack_118;
          uVar14 = pdb_140df4400(&UNK_143064730,0xd);
          uStack_91 = 1;
          uVar14 = pdb_140a2e580(uVar9,uVar14);
          uStack_91 = 1;
          uVar16 = pdb_140df4400(&UNK_14306473d,0xd);
          uStack_91 = 1;
          uVar16 = pdb_140a2e580(uVar9,uVar16);
          uStack_91 = 1;
          uVar17 = pdb_140df4400(&UNK_14306474a,0xd);
          uStack_91 = 1;
          uVar17 = pdb_140a2e580(uVar9,uVar17);
          uStack_91 = 1;
          uVar18 = pdb_140df4400(&UNK_143064757,0xd);
          uStack_91 = 1;
          uStack_a8 = pdb_140a2e580(uVar9,uVar18);
          uStack_d0 = CONCAT44(iVar2,iVar1);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,(float)uVar4 / (float)(longlong)plStack_a0);
          uStack_100 = 0x8000000000000000;
          puStack_f8 = &UNK_143064764;
          pbStack_f0 = (byte *)0x32;
          uStack_108 = 0;
          uStack_91 = 1;
          puStack_c0 = (undefined *)uVar14;
          pbStack_b8 = (byte *)uVar16;
          uStack_b0 = uVar17;
          pdb_141582df0(lVar21 + 0x10,&lStack_118,1,&uStack_108,&uStack_d0);
          plStack_a0 = (longlong *)(lVar19 + uVar20 * 8);
          *(undefined4 *)(lVar6 + uVar20 * 4) = uVar3;
          if (*plStack_a0 != 0) {
            pdb_14098d520(plStack_a0);
          }
          *plStack_a0 = lStack_110;
          return;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143064718);
      }
      lVar19 = uVar20 << 0x20;
    }
    puVar15 = &UNK_143064700;
    uStack_d0 = lVar19;
    uStack_c8 = uVar9;
  }
  else {
    uStack_c8 = *(undefined8 *)piVar5;
    lVar21 = param_2[1];
    lVar19 = 1;
    if ((((ulonglong)~(uint)uStack_c8 < *(ulonglong *)(lVar21 + 0x10)) &&
        (piVar22 = (int *)((ulonglong)~(uint)uStack_c8 * 0x18 + *(longlong *)(lVar21 + 8)),
        piVar22[4] == (int)((ulonglong)uStack_c8 >> 0x20))) && (*piVar22 != 0)) {
      lVar19 = *param_2;
      uVar20 = *(ulonglong *)(piVar22 + 2);
      if (((uVar20 & 0xffffffff) < *(ulonglong *)(lVar19 + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(lVar19 + 0x28) + (uVar20 >> 6 & 0x3ffffff) * 8) >>
           (uVar20 & 0x3f) & 1) != 0)) {
        uVar20 = uVar20 >> 0x20;
        lVar21 = *(longlong *)(lVar21 + 0x1a0);
        lVar6 = *(longlong *)(lVar21 + 0x18 + uVar20 * 0x48);
        lVar13 = *(longlong *)(lVar21 + 0x38 + uVar20 * 0x48);
        if ((*(ulonglong *)(lVar19 + 0x118) < *(ulonglong *)(lVar21 + 0x40 + uVar20 * 0x48)) &&
           (uVar20 = *(ulonglong *)(lVar13 + *(ulonglong *)(lVar19 + 0x118) * 8), uVar20 != 0)) {
          lVar21 = *(longlong *)(lVar6 + 0x10 + ~uVar20 * 0x30);
          uVar20 = (ulonglong)(uint)~piVar22[1];
          lVar23 = uVar20 * 0x38;
          lVar7 = *(longlong *)(lVar21 + 0x28 + lVar23);
        }
        else {
          lVar21 = 0;
          uVar20 = (ulonglong)(uint)~piVar22[1];
          lVar23 = uVar20 * 0x38;
          lVar7 = *(longlong *)(lVar23 + 0x28);
        }
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430646a0);
        }
        lVar13 = ~*(ulonglong *)(lVar13 + *(longlong *)(lVar19 + 0x110) * 8) * 0x30;
        lVar19 = *(longlong *)(lVar6 + 0x10 + lVar13);
        plStack_a0 = (longlong *)
                     CONCAT44(plStack_a0._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
        lVar6 = *(longlong *)(lVar6 + 0x28 + lVar13);
        plVar8 = (longlong *)*param_5;
        lStack_118 = pdb_140e51270(*plVar8 + 0x10,lVar21 + lVar23 + 0x28);
        lVar21 = *plVar8;
        iVar1 = piVar5[4];
        iVar2 = piVar5[8];
        uVar9 = *param_3;
        uStack_92 = 1;
        lStack_110 = lStack_118;
        uVar14 = pdb_140df4400(&UNK_1430646b8,0xf);
        uStack_92 = 1;
        puVar15 = (undefined *)pdb_140a2e580(uVar9,uVar14);
        uStack_92 = 1;
        uVar14 = pdb_140df4400(&UNK_1430646c7,0xe);
        uStack_92 = 1;
        pbStack_f0 = (byte *)pdb_140a2e580(uVar9,uVar14);
        uStack_108 = CONCAT44(iVar2,iVar1);
        uStack_100 = CONCAT44(uStack_100._4_4_,
                              (float)*(uint *)*param_7 / (float)((uint *)*param_7)[1]);
        uStack_c8 = 0x8000000000000000;
        puStack_c0 = &UNK_1430646d5;
        pbStack_b8 = (byte *)0x29;
        uStack_d0 = 0;
        uStack_92 = 1;
        puStack_f8 = puVar15;
        pdb_14158a000(lVar21 + 0x10,&lStack_118,1,&uStack_d0,&uStack_108);
        plVar8 = (longlong *)(lVar19 + uVar20 * 8);
        *(undefined4 *)(lVar6 + uVar20 * 4) = plStack_a0._0_4_;
        plStack_a0 = plVar8;
        if (*plVar8 != 0) {
          pdb_14098d520(plVar8);
        }
        *plStack_a0 = lStack_110;
        goto LAB_140bd509b;
      }
      lVar19 = uVar20 << 0x20;
    }
    puVar15 = &UNK_143064688;
    uStack_d0 = lVar19;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143064a60,0x2b,&uStack_d0,&UNK_143064a90,puVar15);
}

