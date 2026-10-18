
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140171730(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong unaff_GS_OFFSET;
  ulonglong in_stack_fffffffffffffb18;
  longlong lStack_4c8;
  longlong lStack_4c0;
  longlong lStack_4b8;
  int *piStack_4b0;
  int iStack_4a8;
  undefined8 uStack_4a0;
  int *piStack_498;
  int iStack_490;
  undefined8 uStack_488;
  longlong alStack_480 [3];
  ulonglong uStack_468;
  longlong *plStack_460;
  longlong lStack_458;
  undefined1 auStack_448 [1032];
  
  lVar11 = *(longlong *)(param_1 + 0x48);
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  FUN_14016ad90(param_2,*(undefined4 *)(param_1 + 0x44));
  uVar6 = (int)param_2[1] - (int)*param_2;
  FUN_14016c200(param_2,uVar6 + 4);
  *(uint *)((ulonglong)uVar6 + *param_2) = (lVar11 != 0) + 2;
  uVar6 = (int)param_2[1] - (int)*param_2;
  FUN_14016c200(param_2,uVar6 + 4);
  *(uint *)((ulonglong)uVar6 + *param_2) = (uint)(*(char *)(param_1 + 8) != '\0');
  if ((lVar11 == 0) ||
     (in_stack_fffffffffffffb18 = param_3,
     cVar5 = FUN_140141e50(param_1,*(longlong *)(param_1 + 0x48) + 4,*(undefined4 *)(param_1 + 0x50)
                           ,param_2,param_3), cVar5 != '\0')) {
    uVar6 = *(uint *)(param_1 + 0x44);
    lStack_4c8 = 0;
    lStack_4c0 = 0;
    lStack_4b8 = 0;
    iVar8 = 0;
    if (uVar6 != 0) {
      lVar11 = FUN_140109d30(uVar6);
      func_0x000142a93ce2(lVar11,lStack_4c8,lStack_4c0 - lStack_4c8);
      if (lStack_4c8 != 0) {
        if ((0xfff < (ulonglong)(lStack_4b8 - lStack_4c8)) &&
           (0x1f < (lStack_4c8 - *(longlong *)(lStack_4c8 + -8)) - 8U)) {
          _invoke_watson(0,0,0,0,0);
          pcVar3 = (code *)swi(3);
          uVar12 = (*pcVar3)();
          return uVar12;
        }
        func_0x000142a8cbe0();
      }
      lStack_4b8 = (ulonglong)uVar6 + lVar11;
      iVar8 = (int)lVar11;
      lStack_4c0 = lVar11;
    }
    uVar6 = (int)lStack_4c0 - iVar8;
    lStack_4c8 = lStack_4c0;
    FUN_14016c200(&lStack_4c8,uVar6 + 4);
    *(int *)((ulonglong)uVar6 + lStack_4c8) =
         (int)((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) / 0x18);
    uVar18 = *(ulonglong *)(param_1 + 0x10);
    uVar20 = *(ulonglong *)(param_1 + 0x18);
    if (uVar18 != uVar20) {
      plVar19 = (longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
      plStack_460 = plVar19;
      do {
        uVar16 = 0;
        uVar21 = 0xffffffffffffffff;
        uVar6 = (int)lStack_4c0 - (int)lStack_4c8;
        FUN_14016c200(&lStack_4c8,*(int *)(uVar18 + 8) + ((int)lStack_4c0 - (int)lStack_4c8) + 1);
        uVar12 = FUN_14014ee10(uVar18);
        uVar13 = func_0x000142a93db4(uVar12);
        uVar7 = (undefined4)(in_stack_fffffffffffffb18 >> 0x20);
        if (uVar13 != *(uint *)(uVar18 + 8)) {
          uVar12 = FUN_14014ee10(uVar18);
          FUN_140142470(auStack_448,0x400,
                        "wrong string internal length - does not match with \\0 position: %s",uVar12
                       );
          if ((*(int *)(*plVar19 + 0x4d0) < _DAT_143fce1ac) &&
             (FUN_142a8cb38(&DAT_143fce1ac), _DAT_143fce1ac == -1)) {
            piStack_4b0 = (int *)0x0;
            iStack_4a8 = 0;
            uStack_4a0 = 0;
            uVar9 = func_0x000142a93db4(auStack_448);
            piVar14 = (int *)FUN_14016ca40(auStack_448,uVar9,0);
            if (piStack_4b0 != (int *)0x0) {
              LOCK();
              iVar8 = *piStack_4b0;
              *piStack_4b0 = *piStack_4b0 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                func_0x000142a8c94a();
              }
            }
            if (piVar14 != (int *)0x0) {
              LOCK();
              *piVar14 = *piVar14 + 1;
              UNLOCK();
            }
            iStack_4a8 = piVar14[2];
            piStack_4b0 = piVar14;
            uVar12 = FUN_1401493d0(&piStack_4b0,alStack_480);
            FUN_140123a80(&piStack_498,uVar12);
            if (uStack_468 < 8) {
LAB_140171f6e:
              if (piStack_4b0 != (int *)0x0) {
                LOCK();
                iVar8 = *piStack_4b0;
                *piStack_4b0 = *piStack_4b0 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  func_0x000142a8c94a();
                }
              }
              iVar8 = iStack_490;
              piStack_4b0 = (int *)0x0;
              uStack_4a0 = 0;
              uVar12 = FUN_14014ef90(&piStack_498);
              _DAT_143b00428 = &UNK_142c77d30;
              _DAT_143b00430 = 0x77;
              _DAT_143b00438 = "ComCBinarySerializerWriter::serializeToArrayList";
              _DAT_143b00448 = 0;
              if (_DAT_143fcd428 == 0) {
                if (DAT_143fcd3f6 == '\0') {
                  lStack_458 = func_0x000142a8c93e(0x150);
                  lVar11 = 0;
                  if (lStack_458 != 0) {
                    lVar11 = FUN_140127e80(lStack_458);
                  }
                  _DAT_143fcd428 = lVar11;
                  if (lVar11 != 0) goto LAB_140172021;
                  goto LAB_1401720b7;
                }
LAB_1401720bc:
                _DAT_143b00448 = _DAT_143fcd540;
              }
              else {
LAB_140172021:
                lVar11 = _DAT_143fcd428;
                lVar15 = func_0x000142a93d00(&UNK_142c77d30,0x5c);
                if (lVar15 != 0) {
                  for (_DAT_143b00448 = *(ulonglong *)(lVar11 + 0xf8); _DAT_143b00448 != 0;
                      _DAT_143b00448 =
                           *(ulonglong *)(*(longlong *)(lVar11 + 0xe8) + 8 + _DAT_143b00448)) {
                    uVar2 = *(uint *)(_DAT_143b00448 + 0x38);
                    if (uVar2 != 0) {
                      uVar16 = 0;
                      if (uVar2 == 0) goto LAB_1401720b7;
                      while( true ) {
                        if (*(longlong *)(_DAT_143b00448 + 0x40) == 0) {
                          if ((*(longlong *)(_DAT_143b00448 + 0x30) == 0) || (uVar2 <= (uint)uVar16)
                             ) {
                            cVar5 = '\0';
                          }
                          else {
                            cVar5 = *(char *)(uVar16 + 0xc + *(longlong *)(_DAT_143b00448 + 0x30));
                          }
                        }
                        else {
                          cVar5 = *(char *)(uVar16 + *(longlong *)(_DAT_143b00448 + 0x40));
                        }
                        if ((int)cVar5 != (uint)*(ushort *)(lVar15 + 2 + uVar16 * 2)) break;
                        uVar10 = (uint)uVar16 + 1;
                        uVar16 = (ulonglong)uVar10;
                        if (uVar2 <= uVar10) goto LAB_1401720b7;
                      }
                    }
                  }
                }
                _DAT_143b00448 = 0;
LAB_1401720b7:
                if (_DAT_143b00448 == 0) goto LAB_1401720bc;
              }
              auVar4 = ZEXT816(2) * ZEXT416(iVar8 + 1);
              uVar17 = auVar4._0_8_;
              if (auVar4._8_8_ != 0) {
                uVar17 = 0xffffffffffffffff;
              }
              _DAT_143b00440 = func_0x000142a8c944(uVar17);
              func_0x000142a93e7a(_DAT_143b00440,uVar12);
              if (DAT_143fcd3f5 == '\0') {
                uVar12 = FUN_14016cf80(1);
              }
              else {
                uVar12 = 0;
              }
              FUN_140168800(uVar12,&DAT_143b00420);
              if (piStack_498 != (int *)0x0) {
                LOCK();
                iVar8 = *piStack_498;
                *piStack_498 = *piStack_498 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  func_0x000142a8c94a();
                }
              }
              FUN_142a8ce10(FUN_142bdbd80);
              FUN_142a8cacc(&DAT_143fce1ac);
              goto LAB_14017197b;
            }
            if ((uStack_468 * 2 + 2 < 0x1000) ||
               ((alStack_480[0] - *(longlong *)(alStack_480[0] + -8)) - 8U < 0x20)) {
              func_0x000142a8cbe0();
              goto LAB_140171f6e;
            }
            _invoke_watson(0,0,0,0,0);
LAB_140171d08:
            _invoke_watson(0,0,0,0,uVar21);
LAB_140171d1e:
            exit();
LAB_140171d27:
            param_2 = (longlong *)(ulonglong)uVar6;
            lVar11 = 0;
            _invoke_watson(0,0,0,0,uVar21);
            goto LAB_140171d3d;
          }
LAB_14017197b:
          uVar16 = _DAT_143b00448;
          LOCK();
          _DAT_143b00424 = _DAT_143b00424 + 1;
          UNLOCK();
          uVar21 = 0;
          if ((_DAT_143fcd430 != 0) && (DAT_143b00420 != '\0')) {
            piStack_4b0 = (int *)0x0;
            iStack_4a8 = 0;
            uStack_4a0 = 0;
            uVar7 = func_0x000142a93db4(auStack_448);
            piVar14 = (int *)FUN_14016ca40(auStack_448,uVar7,0);
            if (piStack_4b0 != (int *)0x0) {
              LOCK();
              iVar8 = *piStack_4b0;
              *piStack_4b0 = *piStack_4b0 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                func_0x000142a8c94a();
              }
            }
            if (piVar14 != (int *)0x0) {
              LOCK();
              *piVar14 = *piVar14 + 1;
              UNLOCK();
            }
            iStack_4a8 = piVar14[2];
            piStack_4b0 = piVar14;
            uVar12 = FUN_1401493d0(&piStack_4b0,alStack_480);
            FUN_140123a80(&piStack_498,uVar12);
            if (7 < uStack_468) {
              if ((0xfff < uStack_468 * 2 + 2) &&
                 (0x1f < (alStack_480[0] - *(longlong *)(alStack_480[0] + -8)) - 8U))
              goto LAB_140171d08;
              func_0x000142a8cbe0();
            }
            uVar12 = FUN_14014ef90(&piStack_498);
            uVar7 = 1;
            iVar8 = FUN_1401757d0(uVar16,&UNK_142c77d30,
                                  "ComCBinarySerializerWriter::serializeToArrayList",uVar12,
                                  &DAT_143b00420);
            if (piStack_498 != (int *)0x0) {
              LOCK();
              iVar1 = *piStack_498;
              *piStack_498 = *piStack_498 + -1;
              UNLOCK();
              if (iVar1 == 1) {
                func_0x000142a8c94a();
              }
            }
            piStack_498 = (int *)0x0;
            uStack_488 = 0;
            if (piStack_4b0 != (int *)0x0) {
              LOCK();
              iVar1 = *piStack_4b0;
              *piStack_4b0 = *piStack_4b0 + -1;
              UNLOCK();
              if (iVar1 == 1) {
                func_0x000142a8c94a();
              }
            }
            if (iVar8 == 3) goto LAB_140171d1e;
            if (iVar8 == 4) {
              DebugBreak();
            }
          }
          uVar16 = _DAT_143b00448;
          piStack_4b0 = (int *)0x0;
          iStack_4a8 = 0;
          uStack_4a0 = 0;
          uVar9 = func_0x000142a93db4(auStack_448);
          piVar14 = (int *)FUN_14016ca40(auStack_448,uVar9,0);
          if (piStack_4b0 != (int *)0x0) {
            LOCK();
            iVar8 = *piStack_4b0;
            *piStack_4b0 = *piStack_4b0 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (piVar14 != (int *)0x0) {
            LOCK();
            *piVar14 = *piVar14 + 1;
            UNLOCK();
          }
          iStack_4a8 = piVar14[2];
          piStack_4b0 = piVar14;
          uVar12 = FUN_1401493d0(&piStack_4b0,alStack_480);
          FUN_140123a80(&piStack_498,uVar12);
          if (7 < uStack_468) {
            if ((0xfff < uStack_468 * 2 + 2) &&
               (0x1f < (alStack_480[0] - *(longlong *)(alStack_480[0] + -8)) - 8U))
            goto LAB_140171d27;
            func_0x000142a8cbe0();
          }
          if (piStack_4b0 != (int *)0x0) {
            LOCK();
            iVar8 = *piStack_4b0;
            *piStack_4b0 = *piStack_4b0 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              func_0x000142a8c94a();
            }
          }
          piStack_4b0 = (int *)0x0;
          uStack_4a0 = 0;
          uVar12 = FUN_140110f80();
          FUN_140159690(uVar12,uVar16,2,&UNK_142c77d30,CONCAT44(uVar7,0x77),
                        "ComCBinarySerializerWriter::serializeToArrayList",&piStack_498);
          FUN_14017d4c0(0x143b00180,&UNK_142c77d30,0x77,
                        "ComCBinarySerializerWriter::serializeToArrayList",uVar16,&piStack_498);
          if (piStack_498 != (int *)0x0) {
            LOCK();
            iVar8 = *piStack_498;
            *piStack_498 = *piStack_498 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              func_0x000142a8c94a();
            }
          }
          uRam0000000000000000 = 0x2a;
          plVar19 = plStack_460;
          in_stack_fffffffffffffb18 = uVar16;
        }
        uVar12 = FUN_14014ee10(uVar18);
        func_0x000142a93cdc((ulonglong)uVar6 + lStack_4c8,uVar12,*(int *)(uVar18 + 8) + 1);
        uVar18 = uVar18 + 0x18;
      } while (uVar18 != uVar20);
    }
    uVar16 = (ulonglong)(uint)((int)lStack_4c0 - (int)lStack_4c8);
    FUN_14016c200(&lStack_4c8,((int)lStack_4c0 - (int)lStack_4c8) + 4);
    uVar20 = (ulonglong)(uint)((int)lStack_4c0 - (int)lStack_4c8);
    FUN_14016c200(&lStack_4c8,((int)lStack_4c0 - (int)lStack_4c8) + 4);
    lVar11 = lStack_4c8;
    uVar21 = param_3;
    if (*(longlong *)(param_1 + 0x58) == 0) {
      iVar8 = 0;
    }
    else {
LAB_140171d3d:
      iVar8 = ((int)lStack_4c0 - (int)lVar11) - (int)uVar20;
    }
    *(int *)(uVar20 + lVar11) = iVar8;
    for (uVar18 = *(ulonglong *)(param_1 + 0x58); uVar18 != 0;
        uVar18 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 4 + uVar18)) {
      uVar6 = FUN_140181710(param_1,uVar18,&lStack_4c8,uVar20 & 0xffffffff);
      if (*(int *)(*(longlong *)(param_1 + 0x38) + 4 + uVar18) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = ((int)lStack_4c0 - (int)lStack_4c8) - (int)uVar20;
      }
      *(int *)((ulonglong)uVar6 + (uVar20 & 0xffffffff) + 4 + lStack_4c8) = iVar8;
    }
    *(int *)(uVar16 + lStack_4c8) = ((int)lStack_4c0 - (int)lStack_4c8) - (int)uVar20;
    cVar5 = FUN_140141e50(param_1,lStack_4c8,(int)lStack_4c0 - (int)lStack_4c8,param_2,uVar21);
    if (cVar5 != '\0') {
      if (lStack_4c8 != 0) {
        if ((0xfff < (ulonglong)(lStack_4b8 - lStack_4c8)) &&
           (0x1f < (lStack_4c8 - *(longlong *)(lStack_4c8 + -8)) - 8U)) goto LAB_140171e42;
        func_0x000142a8cbe0();
      }
      return 1;
    }
    if (lStack_4c8 != 0) {
      if ((0xfff < (ulonglong)(lStack_4b8 - lStack_4c8)) &&
         (0x1f < (lStack_4c8 - *(longlong *)(lStack_4c8 + -8)) - 8U)) {
LAB_140171e42:
        _invoke_watson(0,0,0,0,0);
        pcVar3 = (code *)swi(3);
        uVar12 = (*pcVar3)();
        return uVar12;
      }
      func_0x000142a8cbe0();
    }
  }
  return 0;
}

