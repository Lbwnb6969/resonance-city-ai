
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140164af0(longlong param_1,uint *param_2,longlong param_3)

{
  int iVar1;
  ulonglong *puVar2;
  int **ppiVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint *puVar19;
  undefined8 uVar20;
  int iVar21;
  uint *puVar22;
  longlong unaff_GS_OFFSET;
  uint auStackX_8 [2];
  uint *puStackX_10;
  undefined8 uStackX_20;
  undefined8 in_stack_fffffffffffffb08;
  int *piStack_4d8;
  int iStack_4d0;
  undefined8 uStack_4c8;
  int *piStack_4c0;
  int iStack_4b8;
  undefined8 uStack_4b0;
  uint uStack_4a8;
  longlong lStack_4a0;
  longlong alStack_498 [3];
  ulonglong uStack_480;
  int *piStack_478;
  uint uStack_470;
  undefined8 uStack_468;
  longlong *plStack_460;
  uint *puStack_458;
  uint *puStack_450;
  ulonglong uStack_448;
  undefined1 auStack_438 [1024];
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffb08 >> 0x20);
  uStack_4a8 = 0;
  puStackX_10 = param_2;
  FUN_140142530(param_1 + 8);
  FUN_140142650(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    func_0x000142a8cbe0(*(longlong *)(param_1 + 0x30),1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uStackX_20 = (uint *)((ulonglong)uStackX_20._4_4_ << 0x20);
  auStackX_8[0] = auStackX_8[0] & 0xffffff00;
  uVar9 = FUN_140167ab0(param_1,&puStackX_10,&uStackX_20,auStackX_8);
  if ((char)uVar9 == '\0') goto LAB_140164d07;
  puVar19 = puStackX_10;
  if (2 < (uint)uStackX_20) {
    puVar19 = puStackX_10 + 1;
    if (*puStackX_10 != 0) {
      if ((char)auStackX_8[0] != '\0') {
        puVar19 = puStackX_10 + 2;
      }
      puVar19 = (uint *)((longlong)puVar19 + (ulonglong)*puStackX_10);
    }
  }
  lStack_4a0 = 0;
  uStackX_20 = (uint *)0x0;
  if ((char)auStackX_8[0] == '\0') {
    puStack_450 = puVar19 + 1;
    uVar9 = (longlong)param_2 + (param_3 - (longlong)puStack_450);
    uStack_448 = (ulonglong)*puVar19;
    if (uVar9 < uStack_448) {
      FUN_140142470(auStack_438,0x400,"Remaining buffer size invalid (%d found, %d was expected)",
                    uVar9,CONCAT44(uVar8,*puVar19));
      if ((*(int *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 0x4d0) <
           _DAT_143fce0e0) && (FUN_142a8cb38(&DAT_143fce0e0), _DAT_143fce0e0 == -1)) {
        FUN_140126510(&DAT_143fce0b0,0,&UNK_142c77590,0x72,
                      "ComCBinarySerializerReader::readFromData",auStack_438);
        FUN_142a8ce10(FUN_142bdc900);
        FUN_142a8cacc(&DAT_143fce0e0);
      }
      LOCK();
      _DAT_143fce0b4 = _DAT_143fce0b4 + 1;
      UNLOCK();
      if ((_DAT_143fcd430 != 0) && (DAT_143fce0b0 != '\0')) {
        iVar21 = FUN_1401758e0(_DAT_143fce0d8,&UNK_142c77590,
                               "ComCBinarySerializerReader::readFromData",auStack_438,&DAT_143fce0b0
                              );
        if (iVar21 == 3) {
          exit(0);
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        if (iVar21 == 4) {
          DebugBreak();
        }
      }
      uVar9 = FUN_140159190(_DAT_143fce0d8,&UNK_142c77590,0x72,
                            "ComCBinarySerializerReader::readFromData",auStack_438);
      goto LAB_140164d07;
    }
LAB_140164d3e:
    lVar16 = lStack_4a0;
    puStack_458 = (uint *)((longlong)puStack_450 + uStack_448);
    uVar18 = *puStack_450;
    uVar9 = (ulonglong)uVar18;
    auStackX_8[0] = uVar18;
    if (uVar18 < 0x186a1) {
      puVar19 = puStack_450 + 1;
      if ((ulonglong)((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 8)) / 0x18) < uVar9)
      {
        lVar15 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8);
        lVar15 = lVar15 / 6 + (lVar15 >> 0x3f);
        uVar20 = FUN_140109d30(uVar9 * 0x18);
        func_0x00014011ba30(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),uVar20,
                            param_1 + 8);
        FUN_140137730(param_1 + 8,uVar20,(lVar15 >> 2) - (lVar15 >> 0x3f),uVar9);
      }
      puStackX_10 = (uint *)((ulonglong)puStackX_10 & 0xffffffff00000000);
      if (uVar18 != 0) {
        plStack_460 = (longlong *)
                      (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
        do {
          cVar6 = (char)*puVar19;
          puVar22 = puVar19;
          while (cVar6 != '\0') {
            puVar22 = (uint *)((longlong)puVar22 + 1);
            if (500 < (longlong)puVar22 - (longlong)puVar19) {
              FUN_140142470(auStack_438,0x400,"Impossible value length found");
              if ((_DAT_143fce11c <=
                   *(int *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           0x4d0)) || (FUN_142a8cb38(&DAT_143fce11c), _DAT_143fce11c != -1))
              goto LAB_1401654f9;
              piStack_4d8 = (int *)0x0;
              iStack_4d0 = 0;
              uStack_4c8 = 0;
              uVar8 = func_0x000142a93db4(auStack_438);
              piVar10 = (int *)FUN_14016ca40(auStack_438,uVar8,0);
              if (piStack_4d8 != (int *)0x0) {
                LOCK();
                iVar21 = *piStack_4d8;
                *piStack_4d8 = *piStack_4d8 + -1;
                UNLOCK();
                if (iVar21 == 1) {
                  func_0x000142a8c94a();
                }
              }
              if (piVar10 != (int *)0x0) {
                LOCK();
                *piVar10 = *piVar10 + 1;
                UNLOCK();
              }
              iStack_4d0 = piVar10[2];
              piStack_4d8 = piVar10;
              uVar20 = FUN_1401493d0(&piStack_4d8,alStack_498);
              FUN_140123a80(&piStack_4c0,uVar20);
              if (7 < uStack_480) {
                if ((0xfff < uStack_480 * 2 + 2) &&
                   (0x1f < (alStack_498[0] - *(longlong *)(alStack_498[0] + -8)) - 8U)) {
                  _invoke_watson(0,0,0,0,0);
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return uVar9;
                }
                func_0x000142a8cbe0();
              }
              if (piStack_4d8 != (int *)0x0) {
                LOCK();
                iVar21 = *piStack_4d8;
                *piStack_4d8 = *piStack_4d8 + -1;
                UNLOCK();
                if (iVar21 == 1) {
                  func_0x000142a8c94a();
                }
              }
              piStack_4d8 = (int *)0x0;
              uStack_4c8 = 0;
              uVar20 = FUN_14014ef90(&piStack_4c0);
              _DAT_143b00278 = &UNK_142c77590;
              _DAT_143b00280 = 0x85;
              _DAT_143b00288 = "ComCBinarySerializerReader::readFromData";
              _DAT_143b00298 = 0;
              if (_DAT_143fcd428 == 0) {
                if (DAT_143fcd3f6 != '\0') goto LAB_140166052;
                puStackX_10 = (uint *)func_0x000142a8c93e(0x150);
                if (puStackX_10 == (uint *)0x0) {
                  _DAT_143fcd428 = 0;
                }
                else {
                  _DAT_143fcd428 = FUN_140127e80(puStackX_10);
                }
                if (_DAT_143fcd428 == 0) goto LAB_14016604d;
              }
              lVar15 = _DAT_143fcd428;
              lVar12 = func_0x000142a93d00(&UNK_142c77590);
              if ((lVar12 == 0) ||
                 (_DAT_143b00298 = *(longlong *)(lVar15 + 0xf8), _DAT_143b00298 == 0))
              goto LAB_140166043;
              goto LAB_140165fe0;
            }
            if (puStack_458 <= puVar22) {
              FUN_140142470(auStack_438,0x400,"string key of of file bounds");
              if ((_DAT_143fce120 <=
                   *(int *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           0x4d0)) || (FUN_142a8cb38(&DAT_143fce120), _DAT_143fce120 != -1))
              goto LAB_140165320;
              piStack_4d8 = (int *)0x0;
              iStack_4d0 = 0;
              uStack_4c8 = 0;
              uVar8 = func_0x000142a93db4(auStack_438);
              piVar10 = (int *)FUN_14016ca40(auStack_438,uVar8,0);
              if (piStack_4d8 != (int *)0x0) {
                LOCK();
                iVar21 = *piStack_4d8;
                *piStack_4d8 = *piStack_4d8 + -1;
                UNLOCK();
                if (iVar21 == 1) {
                  func_0x000142a8c94a();
                }
              }
              if (piVar10 != (int *)0x0) {
                LOCK();
                *piVar10 = *piVar10 + 1;
                UNLOCK();
              }
              iStack_4d0 = piVar10[2];
              piStack_4d8 = piVar10;
              uVar20 = FUN_1401493d0(&piStack_4d8,alStack_498);
              FUN_140123a80(&piStack_4c0,uVar20);
              if (7 < uStack_480) {
                if ((0xfff < uStack_480 * 2 + 2) &&
                   (0x1f < (alStack_498[0] - *(longlong *)(alStack_498[0] + -8)) - 8U)) {
                  _invoke_watson(0,0,0,0,0);
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return uVar9;
                }
                func_0x000142a8cbe0();
              }
              if (piStack_4d8 != (int *)0x0) {
                LOCK();
                iVar21 = *piStack_4d8;
                *piStack_4d8 = *piStack_4d8 + -1;
                UNLOCK();
                if (iVar21 == 1) {
                  func_0x000142a8c94a();
                }
              }
              piStack_4d8 = (int *)0x0;
              uStack_4c8 = 0;
              uVar20 = FUN_14014ef90(&piStack_4c0);
              _DAT_143b002a8 = &UNK_142c77590;
              _DAT_143b002b0 = 0x86;
              _DAT_143b002b8 = "ComCBinarySerializerReader::readFromData";
              _DAT_143b002c8 = 0;
              if (_DAT_143fcd428 == 0) {
                if (DAT_143fcd3f6 != '\0') goto LAB_140165d76;
                puStackX_10 = (uint *)func_0x000142a8c93e(0x150);
                if (puStackX_10 == (uint *)0x0) {
                  _DAT_143fcd428 = 0;
                }
                else {
                  _DAT_143fcd428 = FUN_140127e80(puStackX_10);
                }
                if (_DAT_143fcd428 == 0) goto LAB_140165d71;
              }
              lVar15 = _DAT_143fcd428;
              lVar12 = func_0x000142a93d00(&UNK_142c77590);
              if ((lVar12 == 0) ||
                 (_DAT_143b002c8 = *(longlong *)(lVar15 + 0xf8), _DAT_143b002c8 == 0))
              goto LAB_140165d67;
              goto LAB_140165d04;
            }
            cVar6 = *(char *)puVar22;
          }
          piStack_478 = (int *)0x0;
          uStack_470 = 0;
          uStack_468 = 0;
          piVar10 = (int *)FUN_14016ca40(puVar19,(int)puVar22 - (int)puVar19,0);
          if (piVar10 != (int *)0x0) {
            LOCK();
            *piVar10 = *piVar10 + 1;
            UNLOCK();
          }
          uVar18 = piVar10[2];
          piStack_478 = piVar10;
          uStack_470 = uVar18;
          if (uVar18 == 0) {
            FUN_140142470(auStack_438,0x400,"Binary file contains empty key");
            if ((*(int *)(*plStack_460 + 0x4d0) < _DAT_143fce124) &&
               (FUN_142a8cb38(&DAT_143fce124), _DAT_143fce124 == -1)) {
              piStack_4d8 = (int *)0x0;
              iStack_4d0 = 0;
              uStack_4c8 = 0;
              uVar8 = func_0x000142a93db4(auStack_438);
              piVar11 = (int *)FUN_14016ca40(auStack_438,uVar8,0);
              if (piStack_4d8 != (int *)0x0) {
                LOCK();
                iVar21 = *piStack_4d8;
                *piStack_4d8 = *piStack_4d8 + -1;
                UNLOCK();
                if (iVar21 == 1) {
                  func_0x000142a8c94a();
                }
              }
              if (piVar11 != (int *)0x0) {
                LOCK();
                *piVar11 = *piVar11 + 1;
                UNLOCK();
              }
              iStack_4d0 = piVar11[2];
              piStack_4d8 = piVar11;
              uVar20 = FUN_1401493d0(&piStack_4d8,alStack_498);
              FUN_140123a80(&piStack_4c0,uVar20);
              uStack_4a8 = uStack_4a8 | 0x10;
              if (7 < uStack_480) {
                if ((0xfff < uStack_480 * 2 + 2) &&
                   (0x1f < (alStack_498[0] - *(longlong *)(alStack_498[0] + -8)) - 8U)) {
                  _invoke_watson(0,0,0,0,0);
                  goto LAB_1401656c4;
                }
                func_0x000142a8cbe0();
              }
              if (piStack_4d8 != (int *)0x0) {
                LOCK();
                iVar21 = *piStack_4d8;
                *piStack_4d8 = *piStack_4d8 + -1;
                UNLOCK();
                if (iVar21 == 1) {
                  func_0x000142a8c94a();
                }
              }
              iVar21 = iStack_4b8;
              piStack_4d8 = (int *)0x0;
              uStack_4c8 = 0;
              uVar20 = FUN_14014ef90(&piStack_4c0);
              FUN_140156990(&DAT_143b002d0,0,&UNK_142c77590,0x8a,
                            "ComCBinarySerializerReader::readFromData",uVar20,iVar21);
              FUN_140142800(&piStack_4c0);
              FUN_142a8ce10(FUN_142bdcf40);
              FUN_142a8cacc(&DAT_143fce124);
            }
            LOCK();
            _DAT_143b002d4 = _DAT_143b002d4 + 1;
            UNLOCK();
            if ((_DAT_143fcd430 != 0) && (DAT_143b002d0 != '\0')) {
              iVar21 = FUN_1401758e0(_DAT_143b002f8,&UNK_142c77590,
                                     "ComCBinarySerializerReader::readFromData",auStack_438,
                                     &DAT_143b002d0);
              if (iVar21 == 3) {
LAB_1401656c4:
                exit(0);
                pcVar4 = (code *)swi(3);
                uVar9 = (*pcVar4)();
                return uVar9;
              }
              if (iVar21 == 4) {
                DebugBreak();
              }
            }
            FUN_140159190(_DAT_143b002f8,&UNK_142c77590,0x8a,
                          "ComCBinarySerializerReader::readFromData",auStack_438);
          }
          if (*(uint *)(param_1 + 0x20) != 0) {
            uVar17 = 0;
            uVar9 = 0;
            if (uVar18 != 0) {
              if (uVar18 == 0) {
                cVar6 = '\0';
                goto LAB_140165108;
              }
              do {
                cVar6 = *(char *)(uVar9 + 0xc + (longlong)piVar10);
LAB_140165108:
                uVar17 = uVar17 * 0x1f + (longlong)cVar6;
                uVar14 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar14;
              } while (uVar14 < uVar18);
            }
            for (puVar2 = *(ulonglong **)
                           (*(longlong *)(param_1 + 0x28) +
                           (uVar17 % (ulonglong)*(uint *)(param_1 + 0x20)) * 8);
                puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
              if ((*puVar2 == uVar17) &&
                 (cVar6 = FUN_14012eae0(puVar2 + 3,&piStack_478), cVar6 != '\0')) {
                uVar20 = FUN_14014ee10(&piStack_478);
                FUN_140142470(auStack_438,0x400,"Duplicated key: %s",uVar20);
                if ((*(int *)(*plStack_460 + 0x4d0) < _DAT_143fce158) &&
                   (FUN_142a8cb38(&DAT_143fce158), _DAT_143fce158 == -1)) {
                  FUN_140126510(&DAT_143fce128,0,&UNK_142c77590,0x94,
                                "ComCBinarySerializerReader::readFromData",auStack_438);
                  FUN_142a8ce10(FUN_142bdcfe0);
                  FUN_142a8cacc(&DAT_143fce158);
                }
                puVar19 = (uint *)&DAT_143fce128;
                LOCK();
                _DAT_143fce12c = _DAT_143fce12c + 1;
                UNLOCK();
                if ((_DAT_143fcd430 != 0) && (DAT_143fce128 != '\0')) {
                  iVar21 = FUN_1401758e0(_DAT_143fce150,&UNK_142c77590,
                                         "ComCBinarySerializerReader::readFromData",auStack_438,
                                         &DAT_143fce128);
                  if (iVar21 == 3) {
                    exit(0);
                    goto LAB_1401656dd;
                  }
                  if (iVar21 == 4) {
                    DebugBreak();
                  }
                }
                FUN_140159190(_DAT_143fce150,&UNK_142c77590,0x94,
                              "ComCBinarySerializerReader::readFromData",auStack_438);
                uVar18 = (uint)puStackX_10;
                goto LAB_140165292;
              }
            }
          }
          ppiVar3 = *(int ***)(param_1 + 0x10);
          if (ppiVar3 == *(int ***)(param_1 + 0x18)) {
            FUN_140115d20(param_1 + 8);
            piVar10 = piStack_478;
          }
          else {
            *ppiVar3 = (int *)0x0;
            *(uint *)(ppiVar3 + 1) = uVar18;
            ppiVar3[2] = (int *)0x0;
            if ((uVar18 != 0) && (ppiVar3 != &piStack_478)) {
              *ppiVar3 = piVar10;
              LOCK();
              *piVar10 = *piVar10 + 1;
              UNLOCK();
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x18;
          }
          piVar11 = (int *)FUN_14012f720(param_1 + 0x20,*(longlong *)(param_1 + 0x10) + -0x18);
          *piVar11 = (uint)puStackX_10;
          uVar18 = (uint)puStackX_10 + 1;
          puStackX_10 = (uint *)CONCAT44(puStackX_10._4_4_,uVar18);
LAB_140165292:
          puVar19 = (uint *)((longlong)puVar22 + 1);
          if (piVar10 != (int *)0x0) {
            LOCK();
            iVar21 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar21 == 1) {
              func_0x000142a8c94a(piVar10);
            }
          }
        } while (uVar18 < auStackX_8[0]);
      }
LAB_1401656dd:
      uVar9 = uStack_448;
      uVar18 = *puVar19;
      puVar19 = puVar19 + 1;
      *(ulonglong *)(param_1 + 0x40) = (ulonglong)*puVar19;
      if ((ulonglong)uVar18 == (longlong)puStack_450 + (uStack_448 - (longlong)puVar19)) {
        uVar20 = func_0x000142a8c944();
        FUN_14016ba50(param_1 + 0x30,uVar20);
        func_0x000142a93cdc(*(undefined8 *)(param_1 + 0x30),puVar19,uVar18);
        *(int *)(param_1 + 0x38) = (int)uVar9;
        bVar7 = FUN_140180f40(param_1);
        if (lVar16 != 0) {
          func_0x000142a8c94a(lVar16);
        }
        return (ulonglong)bVar7;
      }
      FUN_140142470(auStack_438,0x400,"Wrong remaining size found");
      if ((*(int *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 0x4d0) <
           _DAT_143fce190) && (FUN_142a8cb38(&DAT_143fce190), _DAT_143fce190 == -1)) {
        FUN_140126510(&DAT_143fce160,0,&UNK_142c77590,0xa4,
                      "ComCBinarySerializerReader::readFromData",auStack_438);
        FUN_142a8ce10(FUN_142bdd080);
        FUN_142a8cacc(&DAT_143fce190);
      }
      LOCK();
      _DAT_143fce164 = _DAT_143fce164 + 1;
      UNLOCK();
      if ((_DAT_143fcd430 != 0) && (DAT_143fce160 != '\0')) {
        iVar21 = FUN_1401758e0(_DAT_143fce188,&UNK_142c77590,
                               "ComCBinarySerializerReader::readFromData",auStack_438,&DAT_143fce160
                              );
        if (iVar21 == 3) {
          exit(0);
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        if (iVar21 == 4) {
          DebugBreak();
        }
      }
      uVar20 = 0xa4;
      lVar15 = _DAT_143fce188;
    }
    else {
      FUN_140142470(auStack_438,0x400,"Impossible key count found");
      if ((*(int *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 0x4d0) <
           _DAT_143fce118) && (FUN_142a8cb38(&DAT_143fce118), _DAT_143fce118 == -1)) {
        FUN_140126510(&DAT_143fce0e8,0,&UNK_142c77590,0x7a,
                      "ComCBinarySerializerReader::readFromData",auStack_438);
        FUN_142a8ce10(FUN_142bdcb80);
        FUN_142a8cacc(&DAT_143fce118);
      }
      LOCK();
      _DAT_143fce0ec = _DAT_143fce0ec + 1;
      UNLOCK();
      if ((_DAT_143fcd430 != 0) && (DAT_143fce0e8 != '\0')) {
        iVar21 = FUN_1401758e0(_DAT_143fce110,&UNK_142c77590,
                               "ComCBinarySerializerReader::readFromData",auStack_438,&DAT_143fce0e8
                              );
        if (iVar21 == 3) {
          exit(0);
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return uVar9;
        }
        if (iVar21 == 4) {
          DebugBreak();
        }
      }
      uVar20 = 0x7a;
      lVar15 = _DAT_143fce110;
    }
    goto LAB_140165682;
  }
  puStackX_10 = (uint *)((ulonglong)puStackX_10 & 0xffffffff00000000);
  auStackX_8[0] = 0;
  uVar9 = FUN_140163e30(param_1,puVar19,&lStack_4a0,&uStackX_20,&puStackX_10,auStackX_8);
  if ((char)uVar9 != '\0') {
    iVar21 = ((int)param_2 - (int)puVar19) + (int)param_3;
    if ((uint)puStackX_10 == iVar21) {
      uStack_448 = (ulonglong)auStackX_8[0];
      puStack_450 = uStackX_20;
      goto LAB_140164d3e;
    }
    FUN_140142470(auStack_438,0x400,"Remaining buffer size invalid (%d found, %d was expected)",
                  iVar21,(ulonglong)puStackX_10 & 0xffffffff);
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 0x4d0) < _DAT_143fce0a8) && (FUN_142a8cb38(&DAT_143fce0a8), _DAT_143fce0a8 == -1)
       ) {
      FUN_140126510(&DAT_143fce078,0,&UNK_142c77590,0x67,"ComCBinarySerializerReader::readFromData",
                    auStack_438);
      FUN_142a8ce10(FUN_142bdc0e0);
      FUN_142a8cacc(&DAT_143fce0a8);
    }
    LOCK();
    _DAT_143fce07c = _DAT_143fce07c + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143fce078 != '\0')) {
      iVar21 = FUN_1401758e0(_DAT_143fce0a0,&UNK_142c77590,
                             "ComCBinarySerializerReader::readFromData",auStack_438,&DAT_143fce078);
      if (iVar21 == 3) {
        exit(0);
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
      if (iVar21 == 4) {
        DebugBreak();
      }
    }
    uVar9 = FUN_140159190(_DAT_143fce0a0,&UNK_142c77590,0x67,
                          "ComCBinarySerializerReader::readFromData",auStack_438);
  }
  lVar16 = lStack_4a0;
  if (lStack_4a0 == 0) goto LAB_140164d07;
  goto LAB_1401656a0;
LAB_140165fe0:
  do {
    uVar18 = *(uint *)(_DAT_143b00298 + 0x38);
    if (uVar18 != 0) {
      uVar9 = 0;
      if (uVar18 == 0) goto LAB_14016604d;
      while( true ) {
        if (*(longlong *)(_DAT_143b00298 + 0x40) == 0) {
          if ((*(longlong *)(_DAT_143b00298 + 0x30) == 0) || (uVar18 <= (uint)uVar9)) {
            cVar6 = '\0';
          }
          else {
            cVar6 = *(char *)(uVar9 + 0xc + *(longlong *)(_DAT_143b00298 + 0x30));
          }
        }
        else {
          cVar6 = *(char *)(uVar9 + *(longlong *)(_DAT_143b00298 + 0x40));
        }
        if ((int)cVar6 != (uint)*(ushort *)(lVar12 + 2 + uVar9 * 2)) break;
        uVar14 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar14;
        if (uVar18 <= uVar14) goto LAB_14016604d;
      }
    }
    _DAT_143b00298 = *(longlong *)(_DAT_143b00298 + 8 + *(longlong *)(lVar15 + 0xe8));
  } while (_DAT_143b00298 != 0);
LAB_140166043:
  _DAT_143b00298 = 0;
LAB_14016604d:
  if (_DAT_143b00298 == 0) {
LAB_140166052:
    _DAT_143b00298 = _DAT_143fcd540;
  }
  auVar5 = ZEXT816(2) * ZEXT416(iStack_4b8 + 1);
  uVar13 = auVar5._0_8_;
  if (auVar5._8_8_ != 0) {
    uVar13 = 0xffffffffffffffff;
  }
  _DAT_143b00290 = func_0x000142a8c944(uVar13);
  func_0x000142a93e7a(_DAT_143b00290,uVar20);
  if (DAT_143fcd3f5 == '\0') {
    uVar20 = FUN_14016cf80(1);
  }
  else {
    uVar20 = 0;
  }
  FUN_140168800(uVar20,&DAT_143b00270);
  if (piStack_4c0 != (int *)0x0) {
    LOCK();
    iVar21 = *piStack_4c0;
    *piStack_4c0 = *piStack_4c0 + -1;
    UNLOCK();
    if (iVar21 == 1) {
      func_0x000142a8c94a();
    }
  }
  FUN_142a8ce10(FUN_142bdce00);
  FUN_142a8cacc(&DAT_143fce11c);
LAB_1401654f9:
  lVar15 = _DAT_143b00298;
  LOCK();
  _DAT_143b00274 = _DAT_143b00274 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b00270 != '\0')) {
    piStack_4d8 = (int *)0x0;
    iStack_4d0 = 0;
    uStack_4c8 = 0;
    uVar8 = func_0x000142a93db4(auStack_438);
    piVar10 = (int *)FUN_14016ca40(auStack_438,uVar8,0);
    if (piStack_4d8 != (int *)0x0) {
      LOCK();
      iVar21 = *piStack_4d8;
      *piStack_4d8 = *piStack_4d8 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    iStack_4d0 = piVar10[2];
    piStack_4d8 = piVar10;
    uVar20 = FUN_1401493d0(&piStack_4d8,alStack_498);
    FUN_140123a80(&piStack_4c0,uVar20);
    if (7 < uStack_480) {
      if ((0xfff < uStack_480 * 2 + 2) &&
         (0x1f < (alStack_498[0] - *(longlong *)(alStack_498[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
      func_0x000142a8cbe0();
    }
    uVar20 = FUN_14014ef90(&piStack_4c0);
    iVar21 = FUN_1401757d0(lVar15,&UNK_142c77590,"ComCBinarySerializerReader::readFromData",uVar20,
                           &DAT_143b00270);
    if (piStack_4c0 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_4c0;
      *piStack_4c0 = *piStack_4c0 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_4c0 = (int *)0x0;
    uStack_4b0 = 0;
    if (piStack_4d8 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_4d8;
      *piStack_4d8 = *piStack_4d8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (iVar21 == 3) {
      exit(0);
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
    if (iVar21 == 4) {
      DebugBreak();
    }
  }
  uVar20 = 0x85;
  lVar15 = _DAT_143b00298;
  goto LAB_140165682;
LAB_140165d04:
  do {
    uVar18 = *(uint *)(_DAT_143b002c8 + 0x38);
    if (uVar18 != 0) {
      uVar9 = 0;
      if (uVar18 == 0) goto LAB_140165d71;
      while( true ) {
        if (*(longlong *)(_DAT_143b002c8 + 0x40) == 0) {
          if ((*(longlong *)(_DAT_143b002c8 + 0x30) == 0) || (uVar18 <= (uint)uVar9)) {
            cVar6 = '\0';
          }
          else {
            cVar6 = *(char *)(uVar9 + 0xc + *(longlong *)(_DAT_143b002c8 + 0x30));
          }
        }
        else {
          cVar6 = *(char *)(uVar9 + *(longlong *)(_DAT_143b002c8 + 0x40));
        }
        if ((int)cVar6 != (uint)*(ushort *)(lVar12 + 2 + uVar9 * 2)) break;
        uVar14 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar14;
        if (uVar18 <= uVar14) goto LAB_140165d71;
      }
    }
    _DAT_143b002c8 = *(longlong *)(*(longlong *)(lVar15 + 0xe8) + 8 + _DAT_143b002c8);
  } while (_DAT_143b002c8 != 0);
LAB_140165d67:
  _DAT_143b002c8 = 0;
LAB_140165d71:
  if (_DAT_143b002c8 == 0) {
LAB_140165d76:
    _DAT_143b002c8 = _DAT_143fcd540;
  }
  auVar5 = ZEXT816(2) * ZEXT416(iStack_4b8 + 1);
  uVar13 = auVar5._0_8_;
  if (auVar5._8_8_ != 0) {
    uVar13 = 0xffffffffffffffff;
  }
  _DAT_143b002c0 = func_0x000142a8c944(uVar13);
  func_0x000142a93e7a(_DAT_143b002c0,uVar20);
  if (DAT_143fcd3f5 == '\0') {
    uVar20 = FUN_14016cf80(1);
  }
  else {
    uVar20 = 0;
  }
  FUN_140168800(uVar20,&DAT_143b002a0);
  if (piStack_4c0 != (int *)0x0) {
    LOCK();
    iVar21 = *piStack_4c0;
    *piStack_4c0 = *piStack_4c0 + -1;
    UNLOCK();
    if (iVar21 == 1) {
      func_0x000142a8c94a();
    }
  }
  FUN_142a8ce10(FUN_142bdcea0);
  FUN_142a8cacc(&DAT_143fce120);
LAB_140165320:
  lVar15 = _DAT_143b002c8;
  LOCK();
  _DAT_143b002a4 = _DAT_143b002a4 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b002a0 != '\0')) {
    piStack_4d8 = (int *)0x0;
    iStack_4d0 = 0;
    uStack_4c8 = 0;
    uVar8 = func_0x000142a93db4(auStack_438);
    piVar10 = (int *)FUN_14016ca40(auStack_438,uVar8,0);
    if (piStack_4d8 != (int *)0x0) {
      LOCK();
      iVar21 = *piStack_4d8;
      *piStack_4d8 = *piStack_4d8 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    iStack_4d0 = piVar10[2];
    piStack_4d8 = piVar10;
    uVar20 = FUN_1401493d0(&piStack_4d8,alStack_498);
    FUN_140123a80(&piStack_4c0,uVar20);
    if (7 < uStack_480) {
      if ((0xfff < uStack_480 * 2 + 2) &&
         (0x1f < (alStack_498[0] - *(longlong *)(alStack_498[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return uVar9;
      }
      func_0x000142a8cbe0();
    }
    uVar20 = FUN_14014ef90(&piStack_4c0);
    iVar21 = FUN_1401757d0(lVar15,&UNK_142c77590,"ComCBinarySerializerReader::readFromData",uVar20,
                           &DAT_143b002a0);
    if (piStack_4c0 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_4c0;
      *piStack_4c0 = *piStack_4c0 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_4c0 = (int *)0x0;
    uStack_4b0 = 0;
    if (piStack_4d8 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_4d8;
      *piStack_4d8 = *piStack_4d8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (iVar21 == 3) {
      exit(0);
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return uVar9;
    }
    if (iVar21 == 4) {
      DebugBreak();
    }
  }
  uVar20 = 0x86;
  lVar15 = _DAT_143b002c8;
LAB_140165682:
  uVar9 = FUN_140159190(lVar15,&UNK_142c77590,uVar20,"ComCBinarySerializerReader::readFromData",
                        auStack_438);
  if (lVar16 != 0) {
LAB_1401656a0:
    uVar9 = func_0x000142a8c94a(lVar16);
  }
LAB_140164d07:
  return uVar9 & 0xffffffffffffff00;
}

