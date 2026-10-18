// VA 0x1410ad170, PDB extent 2873 bytes
// system_color::style_changes::_::impl$0::validate_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_changes::_::impl$0::validate_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
   Extent: 2873 */

void pdb_1410ad170(longlong *param_1,ulonglong *param_2,longlong param_3)

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
  if (param_2[0x28] < uVar1) {
    lVar2 = *(longlong *)(param_3 + 0x208);
    uVar3 = *(ulonglong *)(lVar2 + param_2[0x28] * 8);
    if ((uVar3 == 0) ||
       (lVar4 = *(longlong *)(param_3 + 0x1d8), *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) == 0))
    goto LAB_1410ad400;
    if (((param_2[0x29] < uVar1) && (uVar3 = *(ulonglong *)(lVar2 + param_2[0x29] * 8), uVar3 != 0))
       && (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
      if (((uVar1 <= param_2[0x2a]) ||
          (uVar3 = *(ulonglong *)(lVar2 + param_2[0x2a] * 8), uVar3 == 0)) ||
         (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) == 0)) {
        param_1[1] = (longlong)&UNK_1432833d4;
        param_1[2] = 0x17;
        param_1[3] = -0x8000000000000000;
        param_1[4] = (longlong)&UNK_14328374d;
        param_1[5] = 8;
        goto LAB_1410ad434;
      }
      if (((param_2[0x2b] < uVar1) &&
          (uVar3 = *(ulonglong *)(lVar2 + param_2[0x2b] * 8), uVar3 != 0)) &&
         (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)) {
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
                   ((param_2[0x31] < uVar1 && *(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0 &&
                    ((uVar3 = *(ulonglong *)(lVar2 + param_2[0x31] * 8), uVar3 != 0 &&
                     (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))))) {
                  if ((param_2[0x32] < uVar1) &&
                     ((uVar3 = *(ulonglong *)(lVar2 + param_2[0x32] * 8), uVar3 != 0 &&
                      (*(longlong *)(lVar4 + 0x20 + ~uVar3 * 0x40) != 0)))) {
                    lVar6 = -0x7fffffffffffffff;
                    if (((param_2[0x33] < uVar1) &&
                        (uVar1 = *(ulonglong *)(lVar2 + param_2[0x33] * 8), uVar1 != 0)) &&
                       (*(longlong *)(lVar4 + 0x20 + ~uVar1 * 0x40) != 0)) {
                      uStack_90 = 0x8000000000000001;
                    }
                    else {
                      uStack_78 = 0x8000000000000000;
                      puStack_70 = (undefined *)0x1;
                      uStack_68 = 0;
                      uStack_60 = 0;
                      uStack_90 = 0x8000000000000000;
                      puStack_88 = &UNK_1432833d4;
                      uStack_80 = 0x17;
                    }
                    pdb_1410aea50(&lStack_58,&uStack_90);
                    if (lStack_58 == -0x7fffffffffffffff) {
                      if (((param_2[0x34] < *(ulonglong *)(param_3 + 0x210)) &&
                          (uVar1 = *(ulonglong *)
                                    (*(longlong *)(param_3 + 0x208) + param_2[0x34] * 8), uVar1 != 0
                          )) && (*(longlong *)
                                  (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0)) {
                        uStack_90 = 0x8000000000000001;
                      }
                      else {
                        uStack_78 = 0x8000000000000000;
                        puStack_70 = (undefined *)0x1;
                        uStack_68 = 0;
                        uStack_60 = 0;
                        uStack_90 = 0x8000000000000000;
                        puStack_88 = &UNK_1432833d4;
                        uStack_80 = 0x17;
                      }
                      pdb_1410aed20(&lStack_58,&uStack_90);
                      if (lStack_58 == -0x7fffffffffffffff) {
                        if (((param_2[0x35] < *(ulonglong *)(param_3 + 0x210)) &&
                            (uVar1 = *(ulonglong *)
                                      (*(longlong *)(param_3 + 0x208) + param_2[0x35] * 8),
                            uVar1 != 0)) &&
                           (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) !=
                            0)) {
                          uStack_90 = 0x8000000000000001;
                        }
                        else {
                          uStack_90 = 0x8000000000000000;
                          puStack_88 = &UNK_1432839e8;
                          uStack_80 = 0x17;
                          uStack_78 = 0x8000000000000000;
                          puStack_70 = &UNK_1432839ff;
                          uStack_68 = 10;
                          uStack_60 = 0;
                        }
                        pdb_1410ae8a0(&lStack_58,&uStack_90);
                        if (lStack_58 == -0x7fffffffffffffff) {
                          if (((param_2[0x36] < *(ulonglong *)(param_3 + 0x210)) &&
                              (uVar1 = *(ulonglong *)
                                        (*(longlong *)(param_3 + 0x208) + param_2[0x36] * 8),
                              uVar1 != 0)) &&
                             (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40)
                              != 0)) {
                            uStack_90 = 0x8000000000000001;
                          }
                          else {
                            uStack_90 = 0x8000000000000000;
                            puStack_88 = &UNK_1432839e8;
                            uStack_80 = 0x17;
                            uStack_78 = 0x8000000000000000;
                            puStack_70 = &UNK_1432839ff;
                            uStack_68 = 10;
                            uStack_60 = 0;
                          }
                          pdb_1410aedb0(&lStack_58,&uStack_90);
                          if (lStack_58 == -0x7fffffffffffffff) {
                            if (((param_2[0x37] < *(ulonglong *)(param_3 + 0x210)) &&
                                (uVar1 = *(ulonglong *)
                                          (*(longlong *)(param_3 + 0x208) + param_2[0x37] * 8),
                                uVar1 != 0)) &&
                               (*(longlong *)(*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40)
                                != 0)) {
                              uStack_90 = 0x8000000000000001;
                            }
                            else {
                              uStack_90 = 0x8000000000000000;
                              puStack_88 = &UNK_1432839e8;
                              uStack_80 = 0x17;
                              uStack_78 = 0x8000000000000000;
                              puStack_70 = &UNK_1432839ff;
                              uStack_68 = 10;
                              uStack_60 = 0;
                            }
                            pdb_1410ae9c0(&lStack_58,&uStack_90);
                            if (lStack_58 == -0x7fffffffffffffff) {
                              if (((*param_2 < *(ulonglong *)(param_3 + 0x210)) &&
                                  (uVar1 = *(ulonglong *)
                                            (*(longlong *)(param_3 + 0x208) + *param_2 * 8),
                                  uVar1 != 0)) &&
                                 (*(longlong *)
                                   (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0)) {
                                uStack_90 = 0x8000000000000001;
                              }
                              else {
                                uStack_90 = 0x8000000000000000;
                                puStack_88 = &UNK_1432839e8;
                                uStack_80 = 0x17;
                                uStack_78 = 0x8000000000000000;
                                puStack_70 = &UNK_1432839ff;
                                uStack_68 = 10;
                                uStack_60 = 0;
                              }
                              pdb_1410aec90(&lStack_58,&uStack_90);
                              if (lStack_58 == -0x7fffffffffffffff) {
                                if (((param_2[1] < *(ulonglong *)(param_3 + 0x210)) &&
                                    (uVar1 = *(ulonglong *)
                                              (*(longlong *)(param_3 + 0x208) + param_2[1] * 8),
                                    uVar1 != 0)) &&
                                   (*(longlong *)
                                     (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0))
                                {
                                  uStack_90 = 0x8000000000000001;
                                }
                                else {
                                  uStack_90 = 0x8000000000000000;
                                  puStack_88 = &UNK_1432839e8;
                                  uStack_80 = 0x17;
                                  uStack_78 = 0x8000000000000000;
                                  puStack_70 = &UNK_1432839ff;
                                  uStack_68 = 10;
                                  uStack_60 = 0;
                                }
                                pdb_1410aeb70(&lStack_58,&uStack_90);
                                if (lStack_58 == -0x7fffffffffffffff) {
                                  if (((param_2[2] < *(ulonglong *)(param_3 + 0x210)) &&
                                      (uVar1 = *(ulonglong *)
                                                (*(longlong *)(param_3 + 0x208) + param_2[2] * 8),
                                      uVar1 != 0)) &&
                                     (*(longlong *)
                                       (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0)
                                     ) {
                                    uStack_90 = 0x8000000000000001;
                                  }
                                  else {
                                    uStack_90 = 0x8000000000000000;
                                    puStack_88 = &UNK_1432839e8;
                                    uStack_80 = 0x17;
                                    uStack_78 = 0x8000000000000000;
                                    puStack_70 = &UNK_1432839ff;
                                    uStack_68 = 10;
                                    uStack_60 = 0;
                                  }
                                  pdb_1410aec00(&lStack_58,&uStack_90);
                                  if (lStack_58 == -0x7fffffffffffffff) {
                                    if (((param_2[3] < *(ulonglong *)(param_3 + 0x210)) &&
                                        (uVar1 = *(ulonglong *)
                                                  (*(longlong *)(param_3 + 0x208) + param_2[3] * 8),
                                        uVar1 != 0)) &&
                                       (*(longlong *)
                                         (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40) !=
                                        0)) {
                                      uStack_90 = 0x8000000000000001;
                                    }
                                    else {
                                      uStack_90 = 0x8000000000000000;
                                      puStack_88 = &UNK_1432839e8;
                                      uStack_80 = 0x17;
                                      uStack_78 = 0x8000000000000000;
                                      puStack_70 = &UNK_1432839ff;
                                      uStack_68 = 10;
                                      uStack_60 = 0;
                                    }
                                    pdb_1410ae930(&lStack_58,&uStack_90);
                                    if (lStack_58 == -0x7fffffffffffffff) {
                                      if (((param_2[4] < *(ulonglong *)(param_3 + 0x210)) &&
                                          (uVar1 = *(ulonglong *)
                                                    (*(longlong *)(param_3 + 0x208) + param_2[4] * 8
                                                    ), uVar1 != 0)) &&
                                         (*(longlong *)
                                           (*(longlong *)(param_3 + 0x1d8) + 0x20 + ~uVar1 * 0x40)
                                          != 0)) {
                                        uStack_90 = 0x8000000000000001;
                                      }
                                      else {
                                        uStack_90 = 0x8000000000000000;
                                        puStack_88 = &UNK_1432839e8;
                                        uStack_80 = 0x17;
                                        uStack_78 = 0x8000000000000000;
                                        puStack_70 = &UNK_1432839ff;
                                        uStack_68 = 10;
                                        uStack_60 = 0;
                                      }
                                      pdb_1410aeae0(&lStack_58,&uStack_90);
                                      if (lStack_58 == -0x7fffffffffffffff) goto LAB_1410ad438;
                                    }
                                  }
                                }
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
                    param_1[1] = (longlong)&UNK_1432833d4;
                    param_1[2] = 0x17;
                    lVar6 = -0x8000000000000000;
                    param_1[3] = -0x8000000000000000;
                    param_1[4] = (longlong)&UNK_143283786;
                    param_1[5] = 7;
                    *(undefined1 *)(param_1 + 6) = 0;
                  }
                }
                else {
                  param_1[1] = (longlong)&UNK_1432833d4;
                  param_1[2] = 0x17;
                  lVar6 = -0x8000000000000000;
                  param_1[3] = -0x8000000000000000;
                  param_1[4] = (longlong)&UNK_143283733;
                  param_1[5] = 10;
                  *(undefined1 *)(param_1 + 6) = 0;
                }
              }
              else {
                param_1[1] = (longlong)&UNK_1432833d4;
                param_1[2] = 0x17;
                lVar6 = -0x8000000000000000;
                param_1[3] = -0x8000000000000000;
                param_1[4] = (longlong)&UNK_143283761;
                param_1[5] = 0xb;
                *(undefined1 *)(param_1 + 6) = 0;
              }
            }
            else {
              param_1[1] = (longlong)&UNK_1432833d4;
              param_1[2] = 0x17;
              lVar6 = -0x8000000000000000;
              param_1[3] = -0x8000000000000000;
              param_1[4] = (longlong)&UNK_14328378d;
              param_1[5] = 0xc;
              *(undefined1 *)(param_1 + 6) = 0;
            }
            goto LAB_1410ad438;
          }
          param_1[1] = (longlong)&UNK_1432833d4;
          param_1[2] = 0x17;
          param_1[3] = -0x8000000000000000;
          param_1[4] = (longlong)&UNK_1432836ec;
          param_1[5] = 0x13;
        }
        else {
          param_1[1] = (longlong)&UNK_1432833d4;
          param_1[2] = 0x17;
          param_1[3] = -0x8000000000000000;
          param_1[4] = (longlong)&UNK_143283715;
          param_1[5] = 0xd;
        }
        goto LAB_1410ad434;
      }
      param_1[1] = (longlong)&UNK_1432833d4;
      param_1[2] = 0x17;
      param_1[3] = -0x8000000000000000;
      puVar5 = &UNK_143283799;
      goto LAB_1410ad428;
    }
    param_1[1] = (longlong)&UNK_1432833d4;
    param_1[2] = 0x17;
    param_1[3] = -0x8000000000000000;
    param_1[4] = (longlong)&UNK_1432837a0;
    param_1[5] = 0xe;
  }
  else {
LAB_1410ad400:
    param_1[1] = (longlong)&UNK_1432833d4;
    param_1[2] = 0x17;
    param_1[3] = -0x8000000000000000;
    puVar5 = &UNK_143283722;
LAB_1410ad428:
    param_1[4] = (longlong)puVar5;
    param_1[5] = 7;
  }
LAB_1410ad434:
  lVar6 = -0x8000000000000000;
  *(undefined1 *)(param_1 + 6) = 0;
LAB_1410ad438:
  *param_1 = lVar6;
  return;
}

