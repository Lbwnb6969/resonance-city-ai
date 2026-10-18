
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140158170(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  int **ppiVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  byte bVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  longlong *plVar20;
  longlong unaff_GS_OFFSET;
  uint auStackX_10 [2];
  uint auStackX_18 [2];
  undefined4 auStackX_20 [2];
  int *piStack_520;
  int iStack_518;
  undefined8 uStack_510;
  int *piStack_508;
  int iStack_500;
  undefined8 uStack_4f8;
  longlong alStack_4f0 [2];
  ulonglong uStack_4e0;
  longlong lStack_4d8;
  longlong lStack_4d0;
  int *piStack_4b8;
  uint uStack_4b0;
  int *piStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  int aiStack_498 [2];
  longlong *plStack_490;
  longlong alStack_488 [3];
  ulonglong uStack_470;
  undefined8 uStack_468;
  longlong lStack_460;
  longlong lStack_458;
  undefined1 auStack_450 [24];
  uint auStack_438 [256];
  
  if (*(int *)(param_2 + 8) == 0) {
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      bVar16 = *(longlong *)(param_2 + 0x18) != 0;
    }
    else {
      bVar16 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x10))();
    }
  }
  else {
    uVar5 = FUN_14014ef90(param_2);
    lVar6 = FindFirstFileW(uVar5,auStack_438);
    if (lVar6 == -1) {
      bVar16 = 0;
    }
    else {
      bVar16 = ~(byte)(auStack_438[0] >> 4) & 1;
      FindClose(lVar6);
    }
  }
  if (bVar16 != 0) {
    FUN_1401272a0(alStack_4f0,param_2,2,0);
    if ((alStack_4f0[0] != 0) && (3 < uStack_4e0)) {
      lVar6 = fread(auStackX_10,4,1);
      lStack_4d0 = lStack_4d0 + lVar6;
      if ((auStackX_10[0] == 1) &&
         (lVar6 = _ftelli64(alStack_4f0[0]), (ulonglong)(lVar6 - lStack_4d8) < uStack_4e0)) {
        plVar20 = (longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
        plStack_490 = plVar20;
        do {
          piVar11 = (int *)0x0;
          piVar7 = (int *)func_0x000142a8c93e(0x80);
          piVar19 = piVar11;
          if (piVar7 != (int *)0x0) {
            uVar5 = _time64(0);
            *(undefined8 *)piVar7 = uVar5;
            piVar7[2] = 0;
            piVar7[3] = 0;
            piVar7[4] = 0;
            piVar7[6] = 0;
            piVar7[7] = 0;
            piVar7[8] = 0;
            piVar7[10] = 0;
            piVar7[0xb] = 0;
            piVar7[0xc] = 0;
            piVar7[0xd] = 0;
            piVar7[0xe] = 0;
            piVar7[0x10] = 0;
            piVar7[0x11] = 0;
            piVar7[0x12] = 0;
            piVar7[0x13] = 0;
            piVar7[0x14] = 0;
            piVar7[0x16] = 0;
            piVar7[0x17] = 0;
            piVar7[0x18] = -1;
            piVar7[0x1a] = 0;
            piVar7[0x1b] = 0;
            piVar7[0x1c] = 0;
            piVar7[0x1d] = 0;
            *(undefined1 *)(piVar7 + 0x1e) = 0;
            piVar19 = piVar7;
          }
          lVar6 = fread(&uStack_468,8,1,alStack_4f0[0]);
          lStack_4d0 = lStack_4d0 + lVar6;
          *(undefined8 *)piVar19 = uStack_468;
          piStack_4b8 = (int *)0x0;
          uStack_4b0 = 0;
          piStack_4a8 = (int *)0x0;
          lVar6 = fread(auStackX_18,4,1,alStack_4f0[0]);
          lStack_4d0 = lStack_4d0 + lVar6;
          ppiVar8 = (int **)FUN_1401235f0(&piStack_508,0x20,auStackX_18[0]);
          uVar13 = *(uint *)(ppiVar8 + 1);
          piVar17 = (int *)(ulonglong)uVar13;
          piVar7 = piVar11;
          if (&piStack_4b8 != ppiVar8) {
            piVar7 = *ppiVar8;
            *ppiVar8 = (int *)0x0;
            piStack_4b8 = piVar7;
          }
          piVar18 = ppiVar8[2];
          *(undefined4 *)(ppiVar8 + 1) = 0;
          ppiVar8[2] = (int *)0x0;
          uStack_4b0 = uVar13;
          piStack_4a8 = piVar18;
          if (piStack_508 != (int *)0x0) {
            LOCK();
            iVar4 = *piStack_508;
            *piStack_508 = *piStack_508 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (piVar18 == (int *)0x0) {
            if (piVar7 == (int *)0x0) {
              if (uVar13 != 0) {
                FUN_140142470(auStack_438,0x400,"Non-empty string without data");
                if ((*(int *)(*plVar20 + 0x4d0) < _DAT_143fce7b0) &&
                   (FUN_142a8cb38(&DAT_143fce7b0), _DAT_143fce7b0 == -1)) {
                  DAT_143fce780 = '\x01';
                  _DAT_143fce784 = 0;
                  _DAT_143fce788 = (undefined *)0x0;
                  _DAT_143fce790 = 0xffffffff;
                  _DAT_143fce798 = (char *)0x0;
                  _DAT_143fce7a0 = 0;
                  _DAT_143fce7a8 = (int *)0x0;
                  piStack_520 = (int *)0x0;
                  iStack_518 = 0;
                  uStack_510 = 0;
                  uVar3 = func_0x000142a93db4(auStack_438);
                  piVar7 = (int *)FUN_14016ca40(auStack_438,uVar3,0);
                  if (piStack_520 != (int *)0x0) {
                    LOCK();
                    iVar4 = *piStack_520;
                    *piStack_520 = *piStack_520 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      func_0x000142a8c94a();
                    }
                  }
                  if (piVar7 != (int *)0x0) {
                    LOCK();
                    *piVar7 = *piVar7 + 1;
                    UNLOCK();
                  }
                  iStack_518 = piVar7[2];
                  piStack_520 = piVar7;
                  uVar5 = FUN_1401493d0(&piStack_520,alStack_488);
                  FUN_140123a80(&piStack_508,uVar5);
                  if (uStack_470 < 8) {
LAB_140158b6e:
                    if (piStack_520 != (int *)0x0) {
                      LOCK();
                      iVar4 = *piStack_520;
                      *piStack_520 = *piStack_520 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        func_0x000142a8c94a();
                      }
                    }
                    iVar4 = iStack_500;
                    piStack_520 = (int *)0x0;
                    uStack_510 = 0;
                    uVar5 = FUN_14014ef90(&piStack_508);
                    _DAT_143fce788 = &UNK_142c7b790;
                    _DAT_143fce790 = 0x613;
                    _DAT_143fce798 = "ComCGenericString<char>::getConstBuffer";
                    _DAT_143fce7a8 = (int *)0x0;
                    if (_DAT_143fcd428 == (int *)0x0) {
                      if (DAT_143fcd3f6 == '\0') {
                        lStack_460 = func_0x000142a8c93e(0x150);
                        piVar7 = piVar11;
                        if (lStack_460 != 0) {
                          piVar7 = (int *)FUN_140127e80(lStack_460);
                        }
                        _DAT_143fcd428 = piVar7;
                        if (piVar7 != (int *)0x0) goto LAB_140158c24;
                        goto LAB_140158cb4;
                      }
LAB_140158cb9:
                      _DAT_143fce7a8 = _DAT_143fcd540;
                    }
                    else {
LAB_140158c24:
                      piVar7 = _DAT_143fcd428;
                      lVar6 = func_0x000142a93d00(&UNK_142c7b790,0x5c);
                      _DAT_143fce7a8 = piVar11;
                      if (lVar6 != 0) {
                        for (piVar17 = *(int **)(piVar7 + 0x3e); _DAT_143fce7a8 = piVar11,
                            piVar17 != (int *)0x0;
                            piVar17 = *(int **)(*(longlong *)(piVar7 + 0x3a) + 8 + (longlong)piVar17
                                               )) {
                          uVar13 = piVar17[0xe];
                          if (uVar13 != 0) {
                            piVar18 = piVar11;
                            while( true ) {
                              if (*(longlong *)(piVar17 + 0x10) == 0) {
                                if ((*(longlong *)(piVar17 + 0xc) == 0) || (uVar13 <= (uint)piVar18)
                                   ) {
                                  cVar14 = '\0';
                                }
                                else {
                                  cVar14 = *(char *)((longlong)piVar18 +
                                                    *(longlong *)(piVar17 + 0xc) + 0xc);
                                }
                              }
                              else {
                                cVar14 = *(char *)((longlong)piVar18 + *(longlong *)(piVar17 + 0x10)
                                                  );
                              }
                              if ((int)cVar14 !=
                                  (uint)*(ushort *)(lVar6 + 2 + (longlong)piVar18 * 2)) break;
                              uVar15 = (uint)piVar18 + 1;
                              piVar18 = (int *)(ulonglong)uVar15;
                              _DAT_143fce7a8 = piVar17;
                              if (uVar13 <= uVar15) goto LAB_140158cb4;
                            }
                          }
                        }
                      }
LAB_140158cb4:
                      if (_DAT_143fce7a8 == (int *)0x0) goto LAB_140158cb9;
                    }
                    auVar2 = ZEXT816(2) * ZEXT416(iVar4 + 1);
                    uVar12 = auVar2._0_8_;
                    if (auVar2._8_8_ != 0) {
                      uVar12 = 0xffffffffffffffff;
                    }
                    _DAT_143fce7a0 = func_0x000142a8c944(uVar12);
                    func_0x000142a93e7a(_DAT_143fce7a0,uVar5);
                    piVar7 = piVar11;
                    if (DAT_143fcd3f5 == '\0') {
                      piVar7 = (int *)FUN_14016cf80(1);
                    }
                    FUN_140168800(piVar7,&DAT_143fce780);
                    if (piStack_508 != (int *)0x0) {
                      LOCK();
                      iVar4 = *piStack_508;
                      *piStack_508 = *piStack_508 + -1;
                      UNLOCK();
                      if (iVar4 == 1) {
                        func_0x000142a8c94a();
                      }
                    }
                    FUN_142a8ce10(&UNK_142bdba00);
                    FUN_142a8cacc(&DAT_143fce7b0);
                    plVar20 = plStack_490;
                    goto LAB_1401583fc;
                  }
                  if ((uStack_470 * 2 + 2 < 0x1000) ||
                     ((alStack_488[0] - *(longlong *)(alStack_488[0] + -8)) - 8U < 0x20)) {
                    func_0x000142a8cbe0();
                    goto LAB_140158b6e;
                  }
                  _invoke_watson(0,0,0,0,0);
LAB_1401589ed:
                  _invoke_watson(0,0,0,0,0);
LAB_140158a03:
                  exit(0);
                  goto LAB_140158a0c;
                }
LAB_1401583fc:
                piVar7 = _DAT_143fce7a8;
                piVar17 = (int *)0xffffffffffffffff;
                LOCK();
                _DAT_143fce784 = _DAT_143fce784 + 1;
                UNLOCK();
                if ((_DAT_143fcd430 != 0) && (DAT_143fce780 != '\0')) {
                  piStack_520 = (int *)0x0;
                  iStack_518 = 0;
                  uStack_510 = 0;
                  uVar3 = func_0x000142a93db4(auStack_438);
                  piVar18 = (int *)FUN_14016ca40(auStack_438,uVar3,0);
                  if (piStack_520 != (int *)0x0) {
                    LOCK();
                    iVar4 = *piStack_520;
                    *piStack_520 = *piStack_520 + -1;
                    UNLOCK();
                    if (iVar4 == 1) {
                      func_0x000142a8c94a();
                    }
                  }
                  if (piVar18 != (int *)0x0) {
                    LOCK();
                    *piVar18 = *piVar18 + 1;
                    UNLOCK();
                  }
                  iStack_518 = piVar18[2];
                  piStack_520 = piVar18;
                  uVar5 = FUN_1401493d0(&piStack_520,alStack_488);
                  FUN_140123a80(&piStack_508,uVar5);
                  if (7 < uStack_470) {
                    if ((0xfff < uStack_470 * 2 + 2) &&
                       (0x1f < (alStack_488[0] - *(longlong *)(alStack_488[0] + -8)) - 8U))
                    goto LAB_1401589ed;
                    func_0x000142a8cbe0();
                  }
                  uVar5 = FUN_14014ef90(&piStack_508);
                  iVar4 = FUN_1401757d0(piVar7,&UNK_142c7b790,
                                        "ComCGenericString<char>::getConstBuffer",uVar5,
                                        &DAT_143fce780);
                  if (piStack_508 != (int *)0x0) {
                    LOCK();
                    iVar1 = *piStack_508;
                    *piStack_508 = *piStack_508 + -1;
                    UNLOCK();
                    if (iVar1 == 1) {
                      func_0x000142a8c94a();
                    }
                  }
                  piStack_508 = (int *)0x0;
                  uStack_4f8 = 0;
                  if (piStack_520 != (int *)0x0) {
                    LOCK();
                    iVar1 = *piStack_520;
                    *piStack_520 = *piStack_520 + -1;
                    UNLOCK();
                    if (iVar1 == 1) {
                      func_0x000142a8c94a();
                    }
                  }
                  if (iVar4 == 3) goto LAB_140158a03;
                  if (iVar4 == 4) {
                    DebugBreak();
                  }
                }
                FUN_140159190(_DAT_143fce7a8,&UNK_142c7b790,0x613,
                              "ComCGenericString<char>::getConstBuffer",auStack_438);
              }
              piVar18 = (int *)&UNK_142c76562;
            }
            else {
              piVar18 = piVar7 + 3;
            }
          }
          uVar9 = fread(piVar18,1,auStackX_18[0],alStack_4f0[0]);
          lStack_4d0 = lStack_4d0 + uVar9;
          FUN_14016c020(&piStack_4b8,uVar9 & 0xffffffff,0x20);
          lVar6 = FUN_140110f80();
          piVar17 = piStack_4b8;
          piVar7 = piVar11;
          piVar18 = piVar11;
          if (uStack_4b0 != 0) {
            do {
              if (piStack_4a8 == (int *)0x0) {
                if ((piStack_4b8 == (int *)0x0) || (uStack_4b0 <= (uint)piVar7)) {
                  cVar14 = '\0';
                }
                else {
                  cVar14 = *(char *)((longlong)(piVar7 + 3) + (longlong)piStack_4b8);
                }
              }
              else {
                cVar14 = *(char *)((longlong)piVar7 + (longlong)piStack_4a8);
              }
              piVar18 = (int *)((longlong)piVar18 * 0x1f + (longlong)cVar14);
              uVar13 = (uint)piVar7 + 1;
              piVar7 = (int *)(ulonglong)uVar13;
            } while (uVar13 < uStack_4b0);
          }
          lVar10 = FUN_1401172b0(lVar6 + 0x108,auStack_450,&piStack_4b8,piVar18);
          lVar10 = *(longlong *)(lVar10 + 8);
          if (lVar10 == 0) {
            lVar10 = *(longlong *)(lVar6 + 0x110);
          }
          if (lVar10 != *(longlong *)(lVar6 + 0x110)) {
            piVar11 = *(int **)(lVar10 + 0x28);
          }
          *(int **)(piVar19 + 2) = piVar11;
          if (piVar11 == (int *)0x0) {
            uVar5 = FUN_14014ee10(&piStack_4b8);
            FUN_140142470(auStack_438,0x400,"Category with name \'%s\' not found",uVar5);
            if ((*(int *)(*plVar20 + 0x4d0) < _DAT_143fce338) &&
               (FUN_142a8cb38(&DAT_143fce338), _DAT_143fce338 == -1)) {
              piStack_520 = (int *)0x0;
              iStack_518 = 0;
              uStack_510 = 0;
              uVar3 = func_0x000142a93db4(auStack_438);
              piVar11 = (int *)FUN_14016ca40(auStack_438,uVar3,0);
              if (piStack_520 != (int *)0x0) {
                LOCK();
                iVar4 = *piStack_520;
                *piStack_520 = *piStack_520 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  func_0x000142a8c94a();
                }
              }
              if (piVar11 != (int *)0x0) {
                LOCK();
                *piVar11 = *piVar11 + 1;
                UNLOCK();
              }
              iStack_518 = piVar11[2];
              piStack_520 = piVar11;
              uVar5 = FUN_1401493d0(&piStack_520,alStack_488);
              FUN_140123a80(&piStack_508,uVar5);
              if (7 < uStack_470) {
                if ((0xfff < uStack_470 * 2 + 2) &&
                   (0x1f < (alStack_488[0] - *(longlong *)(alStack_488[0] + -8)) - 8U)) {
LAB_140158a0c:
                  _invoke_watson(0,0,0,0,0);
                  goto LAB_140158a22;
                }
                func_0x000142a8cbe0();
              }
              if (piStack_520 != (int *)0x0) {
                LOCK();
                iVar4 = *piStack_520;
                *piStack_520 = *piStack_520 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  func_0x000142a8c94a();
                }
              }
              iVar4 = iStack_500;
              piStack_520 = (int *)0x0;
              uStack_510 = 0;
              uVar5 = FUN_14014ef90(&piStack_508);
              _DAT_143b00798 = &UNK_142c784e0;
              _DAT_143b007a0 = 0x162;
              _DAT_143b007a8 = "ComCLogger::loadSerializedLogFile";
              _DAT_143b007b8 = (int *)0x0;
              if (_DAT_143fcd428 == (int *)0x0) {
                if (DAT_143fcd3f6 != '\0') goto LAB_140158f82;
                lStack_458 = func_0x000142a8c93e(0x150);
                if (lStack_458 == 0) {
                  _DAT_143fcd428 = (int *)0x0;
                }
                else {
                  _DAT_143fcd428 = (int *)FUN_140127e80(lStack_458);
                }
                if (_DAT_143fcd428 == (int *)0x0) goto LAB_140158f7d;
              }
              piVar11 = _DAT_143fcd428;
              lVar6 = func_0x000142a93d00(&UNK_142c784e0);
              if ((lVar6 == 0) ||
                 (_DAT_143b007b8 = *(int **)(piVar11 + 0x3e), _DAT_143b007b8 == (int *)0x0))
              goto LAB_140158f73;
              goto LAB_140158f10;
            }
LAB_140158691:
            piVar11 = _DAT_143b007b8;
            LOCK();
            _DAT_143b00794 = _DAT_143b00794 + 1;
            UNLOCK();
            if ((_DAT_143fcd430 == 0) || (DAT_143b00790 == '\0')) goto LAB_140158807;
            piStack_520 = (int *)0x0;
            iStack_518 = 0;
            uStack_510 = 0;
            uVar3 = func_0x000142a93db4(auStack_438);
            piVar7 = (int *)FUN_14016ca40(auStack_438,uVar3,0);
            if (piStack_520 != (int *)0x0) {
              LOCK();
              iVar4 = *piStack_520;
              *piStack_520 = *piStack_520 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                func_0x000142a8c94a();
              }
            }
            if (piVar7 != (int *)0x0) {
              LOCK();
              *piVar7 = *piVar7 + 1;
              UNLOCK();
            }
            iStack_518 = piVar7[2];
            piStack_520 = piVar7;
            uVar5 = FUN_1401493d0(&piStack_520,alStack_488);
            FUN_140123a80(&piStack_508,uVar5);
            if (7 < uStack_470) {
              if ((uStack_470 * 2 + 2 < 0x1000) ||
                 ((alStack_488[0] - *(longlong *)(alStack_488[0] + -8)) - 8U < 0x20)) {
                func_0x000142a8cbe0();
                goto LAB_140158778;
              }
LAB_140158a22:
              _invoke_watson(0,0,0,0,0);
LAB_140158a38:
              exit(0);
LAB_140158a41:
              FUN_142a8ce10(FUN_142bdd560);
              FUN_142a8cacc(&DAT_143fce338);
              plVar20 = plStack_490;
              goto LAB_140158691;
            }
LAB_140158778:
            uVar5 = FUN_14014ef90(&piStack_508);
            iVar4 = FUN_1401757d0(piVar11,&UNK_142c784e0,"ComCLogger::loadSerializedLogFile",uVar5,
                                  &DAT_143b00790);
            if (piStack_508 != (int *)0x0) {
              LOCK();
              iVar1 = *piStack_508;
              *piStack_508 = *piStack_508 + -1;
              UNLOCK();
              if (iVar1 == 1) {
                func_0x000142a8c94a();
              }
            }
            piStack_508 = (int *)0x0;
            uStack_4f8 = 0;
            if (piStack_520 != (int *)0x0) {
              LOCK();
              iVar1 = *piStack_520;
              *piStack_520 = *piStack_520 + -1;
              UNLOCK();
              if (iVar1 == 1) {
                func_0x000142a8c94a();
              }
            }
            if (iVar4 == 3) goto LAB_140158a38;
            if (iVar4 == 4) {
              DebugBreak();
            }
LAB_140158807:
            FUN_140159190(_DAT_143b007b8,&UNK_142c784e0,0x162,"ComCLogger::loadSerializedLogFile",
                          auStack_438);
          }
          lVar6 = fread(auStackX_10,1,1,alStack_4f0[0]);
          lStack_4d0 = lStack_4d0 + lVar6;
          piVar19[4] = auStackX_10[0] & 0xff;
          lVar6 = fread(auStackX_20,4,1,alStack_4f0[0]);
          lStack_4d0 = lStack_4d0 + lVar6;
          FUN_140167890(alStack_4f0,piVar19 + 6,auStackX_20[0]);
          lVar6 = fread(&uStack_4a0,4,1,alStack_4f0[0]);
          lStack_4d0 = lStack_4d0 + lVar6;
          FUN_140167800(alStack_4f0,piVar19 + 0xc,uStack_4a0);
          lVar6 = fread(&uStack_49c,4,1,alStack_4f0[0]);
          lStack_4d0 = lStack_4d0 + lVar6;
          FUN_140167890(alStack_4f0,piVar19 + 0x12,uStack_49c);
          lVar6 = fread(aiStack_498,4,1,alStack_4f0[0]);
          lStack_4d0 = lStack_4d0 + lVar6;
          piVar19[0x18] = aiStack_498[0];
          EnterCriticalSection(*(undefined8 *)(param_1 + 200));
          FUN_14013d840(param_1 + 0x80,piVar19);
          if ((*(uint *)(param_1 + 0xa0) < *(uint *)(param_1 + 0x88)) &&
             (lVar6 = func_0x0001401101d0(param_1 + 0x80), lVar6 != 0)) {
            FUN_140132a10(lVar6,1);
          }
          LeaveCriticalSection(*(undefined8 *)(param_1 + 200));
          if (piVar17 != (int *)0x0) {
            LOCK();
            iVar4 = *piVar17;
            *piVar17 = *piVar17 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              func_0x000142a8c94a(piVar17);
            }
          }
          lVar6 = _ftelli64(alStack_4f0[0]);
        } while ((ulonglong)(lVar6 - lStack_4d8) < uStack_4e0);
      }
    }
    FUN_1401124e0(param_1 + 0x30);
    FUN_14012c350(alStack_4f0);
  }
  return;
LAB_140158f10:
  do {
    uVar13 = _DAT_143b007b8[0xe];
    if (uVar13 != 0) {
      uVar9 = 0;
      if (uVar13 == 0) goto LAB_140158f7d;
      while( true ) {
        if (*(longlong *)(_DAT_143b007b8 + 0x10) == 0) {
          if ((*(longlong *)(_DAT_143b007b8 + 0xc) == 0) || (uVar13 <= (uint)uVar9)) {
            cVar14 = '\0';
          }
          else {
            cVar14 = *(char *)(uVar9 + 0xc + *(longlong *)(_DAT_143b007b8 + 0xc));
          }
        }
        else {
          cVar14 = *(char *)(uVar9 + *(longlong *)(_DAT_143b007b8 + 0x10));
        }
        if ((int)cVar14 != (uint)*(ushort *)(lVar6 + 2 + uVar9 * 2)) break;
        uVar15 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar15;
        if (uVar13 <= uVar15) goto LAB_140158f7d;
      }
    }
    _DAT_143b007b8 = *(int **)((longlong)_DAT_143b007b8 + *(longlong *)(piVar11 + 0x3a) + 8);
  } while (_DAT_143b007b8 != (int *)0x0);
LAB_140158f73:
  _DAT_143b007b8 = (int *)0x0;
LAB_140158f7d:
  if (_DAT_143b007b8 == (int *)0x0) {
LAB_140158f82:
    _DAT_143b007b8 = _DAT_143fcd540;
  }
  auVar2 = ZEXT816(2) * ZEXT416(iVar4 + 1);
  uVar12 = auVar2._0_8_;
  if (auVar2._8_8_ != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  _DAT_143b007b0 = func_0x000142a8c944(uVar12);
  func_0x000142a93e7a(_DAT_143b007b0,uVar5);
  if (DAT_143fcd3f5 == '\0') {
    uVar5 = FUN_14016cf80(1);
  }
  else {
    uVar5 = 0;
  }
  FUN_140168800(uVar5,&DAT_143b00790);
  if (piStack_508 == (int *)0x0) goto LAB_140158a41;
  LOCK();
  iVar4 = *piStack_508;
  *piStack_508 = *piStack_508 + -1;
  UNLOCK();
  if (iVar4 != 1) goto LAB_140158a41;
  func_0x000142a8c94a();
  goto LAB_140158a41;
}

