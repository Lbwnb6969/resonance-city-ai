// VA 0x141b0bbd0, PDB extent 4039 bytes
// country_core::startup::load_clutter_packs::load_clutter_packs_at_startup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_clutter_packs::load_clutter_packs_at_startup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 4039 */

void pdb_141b0bbd0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  longlong *param_9,longlong *param_10,undefined8 *param_11)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte *****pppppbVar6;
  byte ****ppppbVar7;
  byte ****ppppbVar8;
  ulonglong uVar9;
  byte *****pppppbVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  byte *****pppppbVar13;
  int *piVar14;
  byte *****pppppbVar15;
  int *piVar16;
  byte *arg1;
  undefined4 uVar17;
  longlong lVar18;
  byte ****ppppbStack_458;
  byte ****ppppbStack_450;
  byte ****ppppbStack_448;
  byte ****ppppbStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined *puStack_408;
  byte ****ppppbStack_400;
  longlong lStack_3f8;
  byte ****ppppbStack_338;
  longlong *plStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  byte ****ppppbStack_318;
  undefined1 uStack_30b;
  byte ****ppppbStack_1d0;
  byte ****ppppbStack_1c8;
  byte ****ppppbStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_188;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  byte ****ppppbStack_118;
  longlong lStack_110;
  undefined8 *puStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte ****ppppbStack_e8;
  byte ****ppppbStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  byte ****ppppbStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  byte ****ppppbStack_b8;
  byte ****ppppbStack_a8;
  byte ****ppppbStack_a0;
  byte ****ppppbStack_98;
  byte ****ppppbStack_90;
  byte ****ppppbStack_88;
  longlong lStack_80;
  int *piStack_78;
  byte ****ppppbStack_70;
  longlong lStack_68;
  byte ****ppppbStack_60;
  undefined4 *puStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c == '\0') {
    lStack_80 = 0;
    piStack_78 = (int *)0x8;
    ppppbStack_70 = (byte ****)0x0;
    puStack_128 = param_3;
    puStack_120 = param_2;
    puStack_108 = param_1;
    plStack_100 = param_4;
    pdb_140d8ead0(&ppppbStack_458);
    pppppbVar13 = (byte *****)(ppppbStack_450 + (longlong)ppppbStack_448 * 0x16);
    ppppbStack_a8 = ppppbStack_450;
    ppppbStack_a0 = ppppbStack_450;
    ppppbStack_60 = ppppbStack_458;
    ppppbStack_98 = ppppbStack_458;
    lVar18 = *param_9;
    puStack_58 = (undefined4 *)param_9[2];
    lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)((longlong)param_9 + 0x1c));
    ppppbStack_88 = ppppbStack_450;
    pppppbVar10 = (byte *****)ppppbStack_450;
    lStack_110 = lVar18;
    ppppbStack_90 = (byte ****)pppppbVar13;
    while( true ) {
      ppppbStack_118 = (byte ****)pppppbVar13;
      if (pppppbVar10 == pppppbVar13) break;
      pppppbVar6 = pppppbVar10 + 0x16;
      pppppbVar15 = (byte *****)*pppppbVar10;
      ppppbStack_a0 = (byte ****)pppppbVar6;
      pub_142e32760(&ppppbStack_1d0,pppppbVar10 + 1,0xa8);
      ppppbStack_118 = (byte ****)pppppbVar6;
      if (pppppbVar15 == (byte *****)0x2) break;
      ppppbStack_458 = (byte ****)pppppbVar15;
      pub_142e32760(&ppppbStack_450,&ppppbStack_1d0,0xa8);
      pdb_141b065b0(&uStack_f8,&ppppbStack_458);
      pppppbVar10 = pppppbVar6;
      if (SBORROW8(0,(longlong)uStack_f8)) {
        if (((!SBORROW8(0,lStack_3f8)) && (lVar18 != 0)) && ((char)ppppbStack_458 != '\0')) {
          uStack_f8 = (byte *****)0x8000000000000002;
          pdb_140bd80b0(lVar18,ppppbStack_450,&uStack_f8);
        }
        pdb_1404b3c90(&ppppbStack_458);
      }
      else {
        ppppbStack_b8 = ppppbStack_e8;
        ppppbStack_c8 = (byte ****)uStack_f8;
        uStack_c0 = (undefined4)uStack_f0;
        uStack_bc = uStack_f0._4_4_;
        if ((int)ppppbStack_458 == 1) {
          uVar9 = 1;
        }
        else {
          uStack_49 = 1;
          uVar9 = pdb_140c8a840(uStack_410,puStack_408);
        }
        ppppbVar7 = ppppbStack_b8;
        pppppbVar6 = (byte *****)CONCAT44(uStack_bc,uStack_c0);
        if ((lVar18 != 0) && ((uVar9 & 1) != 0)) {
          *puStack_58 = (undefined4)lStack_68;
          uStack_49 = 1;
          pdb_141a275c0(lVar18);
        }
        ppppbStack_e0 = (byte ****)(pppppbVar6 + (longlong)ppppbVar7 * 0x12);
        ppppbStack_e8 = ppppbStack_c8;
        uStack_f8 = pppppbVar6;
        uStack_f0 = pppppbVar6;
        if ((byte *****)(lStack_80 - (longlong)ppppbStack_70) < ppppbVar7) {
          pdb_142d7f1b0(&lStack_80,ppppbStack_70,ppppbVar7,8,0x90);
LAB_141b0be56:
          pppppbVar15 = (byte *****)ppppbStack_70;
          pub_142e32760(piStack_78 + (longlong)ppppbStack_70 * 0x24,pppppbVar6,
                        (longlong)ppppbVar7 * 0x90);
        }
        else {
          pppppbVar15 = (byte *****)ppppbStack_70;
          if ((byte *****)ppppbVar7 != (byte *****)0x0) goto LAB_141b0be56;
        }
        ppppbStack_70 = (byte ****)((longlong)pppppbVar15 + (longlong)ppppbVar7);
        uStack_49 = 0;
        ppppbStack_e0 = (byte ****)pppppbVar6;
        pdb_14096ec80(&uStack_f8);
        lVar18 = lStack_110;
        pdb_1404b3c90(&ppppbStack_458);
      }
    }
    lStack_68 = ((ulonglong)((longlong)pppppbVar13 - (longlong)ppppbStack_118) >> 4) *
                0x2e8ba2e8ba2e8ba3;
    puStack_58 = (undefined4 *)0x0;
    pppppbVar10 = (byte *****)ppppbStack_118;
    while ((undefined4 *)lStack_68 != puStack_58) {
      puStack_58 = (undefined4 *)((longlong)puStack_58 + 1);
      pdb_1404b3c90(pppppbVar10);
      pppppbVar10 = pppppbVar10 + 0x16;
    }
    if ((byte *****)ppppbStack_60 != (byte *****)0x0) {
      pub_1406abac0((byte *)ppppbStack_88,(longlong)ppppbStack_60 * 0xb0,8);
    }
    if ((byte *****)ppppbStack_70 != (byte *****)0x0) {
      pdb_141c36f00(&uStack_f8);
      ppppbVar7 = ppppbStack_70;
      piVar16 = piStack_78;
      if (uStack_f8 == (byte *****)0x0) {
        ppppbStack_c8 = (byte ****)uStack_f0;
        if (*_DAT_143ca8e90 != 0) {
          ppppbStack_1d0 = (byte ****)&ppppbStack_c8;
          ppppbStack_1c8 = (byte ****)pdb_140f36c30;
          ppppbStack_458 = (byte ****)0x0;
          ppppbStack_450 = (byte ****)&UNK_14338d070;
          ppppbStack_448 = (byte ****)0x29;
          ppppbStack_440 = (byte ****)0x0;
          uStack_438 = &UNK_14338d03a;
          uStack_430 = 0x35;
          uStack_428 = 1;
          puStack_420 = &UNK_14338d070;
          uStack_418 = 0x29;
          uStack_410 = 0x8a00000001;
          puStack_408 = &UNK_14338d2f5;
          ppppbStack_400 = (byte ****)&ppppbStack_1d0;
          pdb_140f332f0(&uStack_4a,&ppppbStack_458);
        }
        if ((lVar18 != 0) && ((byte *****)ppppbStack_70 != (byte *****)0x0)) {
          piVar14 = piStack_78 + (longlong)ppppbStack_70 * 0x24;
          piVar16 = piStack_78;
          do {
            if (*piVar16 == 1) {
              ppppbStack_458 = (byte ****)0x8000000000000002;
              pdb_140bd80b0(lVar18,*(undefined8 *)(piVar16 + 2),&ppppbStack_458);
            }
            piVar16 = piVar16 + 0x24;
          } while (piVar16 != piVar14);
        }
        pdb_140f36c40(&ppppbStack_c8);
      }
      else {
        ppppbStack_a8 = (byte ****)uStack_f8;
        ppppbStack_a0 = (byte ****)uStack_f0;
        if ((byte *****)ppppbStack_70 == (byte *****)0x0) {
          pppppbVar10 = (byte *****)0x8;
        }
        else {
          uVar9 = (longlong)ppppbStack_70 * 0x38;
          pdb_14007ee60();
          pppppbVar10 = (byte *****)pub_1406abab0(uVar9,8);
          if (pppppbVar10 == (byte *****)0x0) {
            pdb_142dc7e2a(8,uVar9);
            goto LAB_141b0c783;
          }
        }
        ppppbStack_1d0 = ppppbVar7;
        ppppbStack_458 = (byte ****)&ppppbStack_1c0;
        ppppbStack_1c0 = (byte ****)0x0;
        ppppbStack_450 = (byte ****)0x0;
        ppppbStack_448 = (byte ****)pppppbVar10;
        ppppbStack_1c8 = (byte ****)pppppbVar10;
        pdb_1419b50a0(piVar16,piVar16 + (longlong)ppppbVar7 * 0x24,&ppppbStack_458);
        uStack_f8 = (byte *****)ppppbStack_1d0;
        pppppbVar10 = uStack_f8;
        uStack_f0 = (byte *****)ppppbStack_1c8;
        pppppbVar13 = uStack_f0;
        ppppbStack_e8 = ppppbStack_1c0;
        plVar2 = (longlong *)*puStack_108;
        plStack_330 = (longlong *)*plVar2;
        LOCK();
        lVar1 = *plStack_330;
        *plStack_330 = *plStack_330 + 1;
        UNLOCK();
        if (*plStack_330 == 0 || SCARRY8(lVar1,1) != *plStack_330 < 0) {
LAB_141b0c783:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        ppppbStack_318 = ppppbStack_1c0;
        uStack_f8._0_4_ = SUB84(ppppbStack_1d0,0);
        uStack_f8._4_4_ = (undefined4)((ulonglong)ppppbStack_1d0 >> 0x20);
        uStack_f0._0_4_ = SUB84(ppppbStack_1c8,0);
        uStack_f0._4_4_ = (undefined4)((ulonglong)ppppbStack_1c8 >> 0x20);
        uStack_328 = (undefined4)uStack_f8;
        uStack_324 = uStack_f8._4_4_;
        uStack_320 = (undefined4)uStack_f0;
        uStack_31c = uStack_f0._4_4_;
        uStack_30b = 0;
        ppppbStack_338 = (byte ****)&ppppbStack_a8;
        ppppbStack_1d0 = (byte ****)&ppppbStack_458;
        uStack_f8 = pppppbVar10;
        uStack_f0 = pppppbVar13;
        pdb_1416f6d50(&uStack_f8,&UNK_143386450,&ppppbStack_1d0);
        pdb_141aaf5e0(&ppppbStack_458);
        LOCK();
        *ppppbStack_a8 = (byte ***)((longlong)*ppppbStack_a8 + -1);
        UNLOCK();
        if ((byte ****)*ppppbStack_a8 == (byte ****)0x0) {
          pdb_140dd78e0(&ppppbStack_a8);
        }
        LOCK();
        *ppppbStack_a0 = (byte ***)((longlong)*ppppbStack_a0 + -1);
        UNLOCK();
        pdb_142d8feb0(ppppbStack_a0 + 1);
        if (SBORROW8(0,(longlong)ppppbStack_e8)) {
          ppppbStack_a8 = (byte ****)uStack_f8;
          if (*_DAT_143ca8e90 != 0) {
            ppppbStack_1c8 = (byte ****)pdb_140f36c30;
            ppppbStack_458 = (byte ****)0x0;
            ppppbStack_450 = (byte ****)&UNK_14338d070;
            ppppbStack_448 = (byte ****)0x29;
            ppppbStack_440 = (byte ****)0x0;
            uStack_438 = &UNK_14338d03a;
            uStack_430 = 0x35;
            uStack_428 = 1;
            puStack_420 = &UNK_14338d070;
            uStack_418 = 0x29;
            uStack_410 = 0x9b00000001;
            puStack_408 = &UNK_14338d2cf;
            ppppbStack_400 = (byte ****)&ppppbStack_1d0;
            ppppbStack_1d0 = (byte ****)&ppppbStack_a8;
            pdb_140f332f0(&uStack_4a,&ppppbStack_458);
          }
          if ((lVar18 != 0) && ((byte *****)ppppbStack_70 != (byte *****)0x0)) {
            piVar14 = piStack_78 + (longlong)ppppbStack_70 * 0x24;
            piVar16 = piStack_78;
            do {
              if (*piVar16 == 1) {
                ppppbStack_458 = (byte ****)0x8000000000000002;
                pdb_140bd80b0(lVar18,*(undefined8 *)(piVar16 + 2),&ppppbStack_458);
              }
              piVar16 = piVar16 + 0x24;
            } while (piVar16 != piVar14);
          }
          pdb_140f36c40(&ppppbStack_a8);
        }
        else {
          uStack_438 = (undefined *)CONCAT44(uStack_d4,uStack_d8);
          uStack_430 = CONCAT44(uStack_cc,uStack_d0);
          ppppbStack_448 = ppppbStack_e8;
          ppppbStack_440 = ppppbStack_e0;
          ppppbStack_458 = (byte ****)uStack_f8;
          ppppbStack_450 = (byte ****)uStack_f0;
          lVar1 = *plVar2;
          *(undefined4 *)puStack_128[2] = *(undefined4 *)((longlong)puStack_128 + 0x1c);
          uVar3 = *puStack_128;
          ppppbStack_60 = (byte ****)plStack_100[2];
          lStack_68 = CONCAT44(lStack_68._4_4_,*(undefined4 *)((longlong)plStack_100 + 0x1c));
          *(undefined4 *)ppppbStack_60 = *(undefined4 *)((longlong)plStack_100 + 0x1c);
          puStack_58 = (undefined4 *)*plStack_100;
          puStack_108 = (undefined8 *)param_5[2];
          ppppbStack_88 =
               (byte ****)CONCAT44(ppppbStack_88._4_4_,*(undefined4 *)((longlong)param_5 + 0x1c));
          *(undefined4 *)puStack_108 = *(undefined4 *)((longlong)param_5 + 0x1c);
          uVar4 = *param_5;
          *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
          plStack_100 = (longlong *)*param_6;
          *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
          pdb_141b06d80(&ppppbStack_1d0,&ppppbStack_458,piStack_78,ppppbStack_70,lVar1 + 0x10,uVar3,
                        puStack_58,uVar4,plStack_100,*param_11);
          pppppbVar10 = (byte *****)ppppbStack_60;
          ppppbVar8 = ppppbStack_1c8;
          ppppbVar7 = ppppbStack_1d0;
          if ((byte *****)ppppbStack_1d0 == (byte *****)0x0) {
            ppppbStack_c8 = ppppbStack_1c8;
            if (*_DAT_143ca8e90 != 0) {
              ppppbStack_a8 = (byte ****)&ppppbStack_c8;
              ppppbStack_a0 = (byte ****)pdb_140f36c30;
              ppppbStack_458 = (byte ****)0x0;
              ppppbStack_450 = (byte ****)&UNK_14338d070;
              ppppbStack_448 = (byte ****)0x29;
              ppppbStack_440 = (byte ****)0x0;
              uStack_438 = &UNK_14338d03a;
              uStack_430 = 0x35;
              uStack_428 = 1;
              puStack_420 = &UNK_14338d070;
              uStack_418 = 0x29;
              uStack_410 = 0xb400000001;
              puStack_408 = &UNK_14338d2aa;
              ppppbStack_400 = (byte ****)&ppppbStack_a8;
              pdb_140f332f0(&uStack_4a,&ppppbStack_458);
              lVar18 = lStack_110;
            }
            if ((lVar18 != 0) && ((byte *****)ppppbStack_70 != (byte *****)0x0)) {
              piVar14 = piStack_78 + (longlong)ppppbStack_70 * 0x24;
              piVar16 = piStack_78;
              do {
                if (*piVar16 == 1) {
                  ppppbStack_458 = (byte ****)0x8000000000000002;
                  pdb_140bd80b0(lStack_110,*(undefined8 *)(piVar16 + 2),&ppppbStack_458);
                }
                piVar16 = piVar16 + 0x24;
              } while (piVar16 != piVar14);
            }
            pdb_140f36c40(&ppppbStack_c8);
            puVar12 = puStack_58;
            pppppbVar10 = (byte *****)ppppbStack_60;
            uVar17 = (undefined4)lStack_68;
          }
          else {
            lVar18 = *param_10;
            if (lVar18 == 0) {
              if ((byte *****)ppppbStack_1c8 != (byte *****)0x0) {
                uVar9 = (longlong)ppppbStack_1c8 * 8 + 0x17U & 0xfffffffffffffff0;
                arg1 = (byte *)((longlong)ppppbStack_1c8 + uVar9 + 0x11);
                if (arg1 != (byte *)0x0) {
                  pub_1406abac0((byte *)((longlong)ppppbStack_1d0 - uVar9),(ulonglong)arg1,0x10);
                }
              }
            }
            else {
              uVar17 = *(undefined4 *)((longlong)param_10 + 0x1c);
              puVar12 = (undefined4 *)param_10[2];
              *puVar12 = uVar17;
              *(longlong *)(lVar18 + 0x80) = *(longlong *)(lVar18 + 0x80) + lStack_188;
              *puVar12 = uVar17;
              lVar1 = *(longlong *)(lVar18 + 0x20);
              if (lVar1 != 0) {
                uVar9 = lVar1 * 8 + 0x17U & 0xfffffffffffffff0;
                uVar11 = lVar1 + uVar9 + 0x11;
                if (uVar11 != 0) {
                  pub_1406abac0((byte *)(*(longlong *)(lVar18 + 0x18) - uVar9),uVar11,0x10);
                }
              }
              *(byte *****)(lVar18 + 0x18) = ppppbVar7;
              *(byte *****)(lVar18 + 0x20) = ppppbVar8;
              *(byte *****)(lVar18 + 0x28) = ppppbStack_1c0;
              *(undefined8 *)(lVar18 + 0x30) = uStack_1b8;
              *(undefined8 *)(lVar18 + 0x38) = uStack_1b0;
              *(undefined8 *)(lVar18 + 0x40) = uStack_1a8;
              pppppbVar10 = (byte *****)ppppbStack_60;
            }
            puVar12 = puStack_58;
            uVar17 = (undefined4)lStack_68;
            if (lStack_198 != 0) {
              uVar9 = lStack_198 * 8 + 0x17U & 0xfffffffffffffff0;
              uVar11 = lStack_198 + uVar9 + 0x11;
              if (uVar11 != 0) {
                pub_1406abac0((byte *)(lStack_1a0 - uVar9),uVar11,0x10);
              }
            }
          }
          *(undefined4 *)puStack_108 = ppppbStack_88._0_4_;
          *(undefined4 *)pppppbVar10 = uVar17;
          pdb_140a57030(uVar4,puVar12);
          lVar18 = *plVar2;
          *(undefined4 *)puStack_120[2] = *(undefined4 *)((longlong)puStack_120 + 0x1c);
          uVar3 = *puStack_120;
          *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
          uVar4 = *param_8;
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          pdb_141b069b0(lVar18 + 0x10,uVar3,uVar4,plStack_100,*param_7);
        }
      }
    }
    pdb_140967580(&lStack_80);
  }
  return;
}

