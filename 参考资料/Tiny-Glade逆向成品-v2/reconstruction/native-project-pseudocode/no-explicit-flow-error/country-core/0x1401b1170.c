// VA 0x1401b1170, PDB extent 2378 bytes
// country_core::systems::wall::eraser::bulldoze_params::_::impl$0::validate_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::bulldoze_params::_::impl$0::validate_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
   Extent: 2378 */

void pdb_1401b1170(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  
  uVar1 = *(ulonglong *)(param_3 + 0x210);
  if (param_2[0x26] < uVar1) {
    lVar2 = *(longlong *)(param_3 + 0x208);
    uVar3 = *(ulonglong *)(lVar2 + param_2[0x26] * 8);
    if ((uVar3 == 0) ||
       (lVar4 = *(longlong *)(param_3 + 0x1d8), *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) == 0))
    goto LAB_1401b1400;
    if (((param_2[0x27] < uVar1) && (uVar3 = *(ulonglong *)(lVar2 + param_2[0x27] * 8), uVar3 != 0))
       && (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
      if (((param_2[0x28] < uVar1) &&
          (uVar3 = *(ulonglong *)(lVar2 + param_2[0x28] * 8), uVar3 != 0)) &&
         (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
        if (((param_2[0x29] < uVar1) &&
            (uVar3 = *(ulonglong *)(lVar2 + param_2[0x29] * 8), uVar3 != 0)) &&
           (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
          if ((((param_2[0x2a] < uVar1) &&
               (uVar3 = *(ulonglong *)(lVar2 + param_2[0x2a] * 8), uVar3 != 0)) &&
              (param_2[0x2b] < uVar1 && *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) &&
             ((uVar3 = *(ulonglong *)(lVar2 + param_2[0x2b] * 8), uVar3 != 0 &&
              (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
            if (((param_2[0x2c] < uVar1) &&
                (uVar3 = *(ulonglong *)(lVar2 + param_2[0x2c] * 8), uVar3 != 0)) &&
               (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
              if (((param_2[0x2d] < uVar1) &&
                  (uVar3 = *(ulonglong *)(lVar2 + param_2[0x2d] * 8), uVar3 != 0)) &&
                 (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
                if (((param_2[0x2e] < uVar1) &&
                    (uVar3 = *(ulonglong *)(lVar2 + param_2[0x2e] * 8), uVar3 != 0)) &&
                   (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
                  if (((param_2[0x2f] < uVar1) &&
                      (uVar3 = *(ulonglong *)(lVar2 + param_2[0x2f] * 8), uVar3 != 0)) &&
                     (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
                    if (((param_2[0x30] < uVar1) &&
                        (uVar3 = *(ulonglong *)(lVar2 + param_2[0x30] * 8), uVar3 != 0)) &&
                       (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
                      lVar6 = -0x7fffffffffffffff;
                      if (((param_2[0x31] < uVar1) &&
                          (uVar1 = *(ulonglong *)(lVar2 + param_2[0x31] * 8), uVar1 != 0)) &&
                         (*(longlong *)(lVar4 + 0x20 + ~uVar1 * 0x40) != 0)) {
                        uStack_90 = 0x8000000000000001;
                      }
                      else {
                        uStack_78 = 0x8000000000000000;
                        puStack_70 = (undefined *)0x1;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        uStack_90 = 0x8000000000000000;
                        puStack_88 = &UNK_142e521b0;
                        uStack_80 = 0x17;
                      }
                      pdb_1401b4580(&lStack_58,&uStack_90);
                      if (lStack_58 == -0x7fffffffffffffff) {
                        if (((param_2[0x32] < *(ulonglong *)(param_3 + 0x210)) &&
                            (uVar1 = *(ulonglong *)
                                      (*(longlong *)(param_3 + 0x208) + param_2[0x32] * 8),
                            uVar1 != 0)) &&
                           (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) !=
                            0)) {
                          uStack_90 = 0x8000000000000001;
                        }
                        else {
                          uStack_78 = 0x8000000000000000;
                          puStack_70 = (undefined *)0x1;
                          uStack_68 = 0;
                          uStack_60 = 0;
                          uStack_90 = 0x8000000000000000;
                          puStack_88 = &UNK_142e521b0;
                          uStack_80 = 0x17;
                        }
                        pdb_1401b47c0(&lStack_58,&uStack_90);
                        if (lStack_58 == -0x7fffffffffffffff) {
                          if (((param_2[0x33] < *(ulonglong *)(param_3 + 0x210)) &&
                              (uVar1 = *(ulonglong *)
                                        (*(longlong *)(param_3 + 0x208) + param_2[0x33] * 8),
                              uVar1 != 0)) &&
                             (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40)
                              != 0)) {
                            uStack_90 = 0x8000000000000001;
                          }
                          else {
                            uStack_90 = 0x8000000000000000;
                            puStack_88 = &UNK_142e60a68;
                            uStack_80 = 0x17;
                            uStack_78 = 0x8000000000000000;
                            puStack_70 = &UNK_142e60a7f;
                            uStack_68 = 10;
                            uStack_60 = 0;
                          }
                          pdb_1401b4610(&lStack_58,&uStack_90);
                          if (lStack_58 == -0x7fffffffffffffff) {
                            if (((param_2[0x34] < *(ulonglong *)(param_3 + 0x210)) &&
                                (uVar1 = *(ulonglong *)
                                          (*(longlong *)(param_3 + 0x208) + param_2[0x34] * 8),
                                uVar1 != 0)) &&
                               (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40)
                                != 0)) {
                              uStack_90 = 0x8000000000000001;
                            }
                            else {
                              uStack_90 = 0x8000000000000000;
                              puStack_88 = &UNK_142e60a68;
                              uStack_80 = 0x17;
                              uStack_78 = 0x8000000000000000;
                              puStack_70 = &UNK_142e60a7f;
                              uStack_68 = 10;
                              uStack_60 = 0;
                            }
                            pdb_1401b4730(&lStack_58,&uStack_90);
                            if (lStack_58 == -0x7fffffffffffffff) {
                              if (((param_2[0x35] < *(ulonglong *)(param_3 + 0x210)) &&
                                  (uVar1 = *(ulonglong *)
                                            (*(longlong *)(param_3 + 0x208) + param_2[0x35] * 8),
                                  uVar1 != 0)) &&
                                 (*(longlong *)
                                   (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0)) {
                                uStack_90 = 0x8000000000000001;
                              }
                              else {
                                uStack_90 = 0x8000000000000000;
                                puStack_88 = &UNK_142e60a68;
                                uStack_80 = 0x17;
                                uStack_78 = 0x8000000000000000;
                                puStack_70 = &UNK_142e60a7f;
                                uStack_68 = 10;
                                uStack_60 = 0;
                              }
                              pdb_1401b44f0(&lStack_58,&uStack_90);
                              if (lStack_58 == -0x7fffffffffffffff) {
                                if (((*param_2 < *(ulonglong *)(param_3 + 0x210)) &&
                                    (uVar1 = *(ulonglong *)
                                              (*(longlong *)(param_3 + 0x208) + *param_2 * 8),
                                    uVar1 != 0)) &&
                                   (*(longlong *)
                                     (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0))
                                {
                                  uStack_90 = 0x8000000000000001;
                                }
                                else {
                                  uStack_90 = 0x8000000000000000;
                                  puStack_88 = &UNK_142e60a68;
                                  uStack_80 = 0x17;
                                  uStack_78 = 0x8000000000000000;
                                  puStack_70 = &UNK_142e60a7f;
                                  uStack_68 = 10;
                                  uStack_60 = 0;
                                }
                                pdb_1401b4460(&lStack_58,&uStack_90);
                                if (lStack_58 == -0x7fffffffffffffff) {
                                  if (((param_2[1] < *(ulonglong *)(param_3 + 0x210)) &&
                                      (uVar1 = *(ulonglong *)
                                                (*(longlong *)(param_3 + 0x208) + param_2[1] * 8),
                                      uVar1 != 0)) &&
                                     (*(longlong *)
                                       (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0)
                                     ) {
                                    uStack_90 = 0x8000000000000001;
                                  }
                                  else {
                                    uStack_90 = 0x8000000000000000;
                                    puStack_88 = &UNK_142e60a68;
                                    uStack_80 = 0x17;
                                    uStack_78 = 0x8000000000000000;
                                    puStack_70 = &UNK_142e60a7f;
                                    uStack_68 = 10;
                                    uStack_60 = 0;
                                  }
                                  pdb_1401b46a0(&lStack_58,&uStack_90);
                                  if (lStack_58 == -0x7fffffffffffffff) goto LAB_1401b1438;
                                }
                              }
                            }
                          }
                        }
                      }
                      lVar6 = lStack_58;
                      param_1[5] = lStack_30;
                      param_1[6] = lStack_28;
                      param_1[3] = lStack_40;
                      param_1[4] = lStack_38;
                      param_1[1] = lStack_50;
                      param_1[2] = lStack_48;
                    }
                    else {
                      param_1[1] = (longlong)&UNK_142e521b0;
                      param_1[2] = 0x17;
                      lVar6 = -0x8000000000000000;
                      param_1[3] = -0x8000000000000000;
                      param_1[4] = (longlong)&UNK_142e5f9a2;
                      param_1[5] = 0x16;
                      *(undefined1 *)(param_1 + 6) = 0;
                    }
                  }
                  else {
                    param_1[1] = (longlong)&UNK_142e521b0;
                    param_1[2] = 0x17;
                    lVar6 = -0x8000000000000000;
                    param_1[3] = -0x8000000000000000;
                    param_1[4] = (longlong)&UNK_142e5f97e;
                    param_1[5] = 0x17;
                    *(undefined1 *)(param_1 + 6) = 0;
                  }
                }
                else {
                  param_1[1] = (longlong)&UNK_142e521b0;
                  param_1[2] = 0x17;
                  lVar6 = -0x8000000000000000;
                  param_1[3] = -0x8000000000000000;
                  param_1[4] = (longlong)&UNK_142e5f9dd;
                  param_1[5] = 0x10;
                  *(undefined1 *)(param_1 + 6) = 0;
                }
              }
              else {
                param_1[1] = (longlong)&UNK_142e521b0;
                param_1[2] = 0x17;
                lVar6 = -0x8000000000000000;
                param_1[3] = -0x8000000000000000;
                param_1[4] = (longlong)&UNK_142e5f969;
                param_1[5] = 0x15;
                *(undefined1 *)(param_1 + 6) = 0;
              }
              goto LAB_1401b1438;
            }
            param_1[1] = (longlong)&UNK_142e521b0;
            param_1[2] = 0x17;
            param_1[3] = -0x8000000000000000;
            puVar5 = &UNK_142e5f9ed;
          }
          else {
            param_1[1] = (longlong)&UNK_142e521b0;
            param_1[2] = 0x17;
            param_1[3] = -0x8000000000000000;
            puVar5 = &UNK_142e5f936;
          }
          param_1[4] = (longlong)puVar5;
          param_1[5] = 0x13;
        }
        else {
          param_1[1] = (longlong)&UNK_142e521b0;
          param_1[2] = 0x17;
          param_1[3] = -0x8000000000000000;
          param_1[4] = (longlong)&UNK_142e5f960;
          param_1[5] = 9;
        }
      }
      else {
        param_1[1] = (longlong)&UNK_142e521b0;
        param_1[2] = 0x17;
        param_1[3] = -0x8000000000000000;
        param_1[4] = (longlong)&UNK_142e5f9b8;
        param_1[5] = 8;
      }
    }
    else {
      param_1[1] = (longlong)&UNK_142e521b0;
      param_1[2] = 0x17;
      param_1[3] = -0x8000000000000000;
      param_1[4] = (longlong)&UNK_142e5f91a;
      param_1[5] = 0xe;
    }
  }
  else {
LAB_1401b1400:
    param_1[1] = (longlong)&UNK_142e521b0;
    param_1[2] = 0x17;
    param_1[3] = -0x8000000000000000;
    param_1[4] = (longlong)&UNK_142e5f995;
    param_1[5] = 0xd;
  }
  lVar6 = -0x8000000000000000;
  *(undefined1 *)(param_1 + 6) = 0;
LAB_1401b1438:
  *param_1 = lVar6;
  return;
}

