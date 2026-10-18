
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14014d680(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  char cVar17;
  uint uVar18;
  longlong unaff_GS_OFFSET;
  int *piStack_498;
  int iStack_490;
  undefined8 uStack_488;
  longlong lStack_480;
  int *piStack_478;
  int iStack_470;
  undefined8 uStack_468;
  longlong *plStack_460;
  longlong alStack_458 [3];
  ulonglong uStack_440;
  longlong lStack_438;
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [1024];
  
  (**(code **)(*param_1 + 0x90))(param_1,&lStack_480);
  if (lStack_480 != 0) {
    plVar13 = (longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    plStack_460 = plVar13;
    do {
      uVar18 = 0;
      pcVar8 = (char *)FUN_14014ee10(param_1[1] +
                                     (ulonglong)*(uint *)(param_1[6] + lStack_480) * 0x18);
      if (pcVar8 == (char *)0x0) {
        FUN_140142470(auStack_428,0x400,"Compare string to nullptr");
        if ((*(int *)(*plVar13 + 0x4d0) < _DAT_143fce778) &&
           (FUN_142a8cb38(&DAT_143fce778), _DAT_143fce778 == -1)) {
          DAT_143fce748 = '\x01';
          _DAT_143fce74c = 0;
          _DAT_143fce750 = (undefined *)0x0;
          _DAT_143fce758 = 0xffffffff;
          _DAT_143fce760 = (char *)0x0;
          _DAT_143fce768 = 0;
          _DAT_143fce770 = 0;
          piStack_498 = (int *)0x0;
          iStack_490 = 0;
          uStack_488 = 0;
          uVar5 = func_0x000142a93db4(auStack_428);
          piVar9 = (int *)FUN_14016ca40(auStack_428,uVar5,0);
          if (piStack_498 != (int *)0x0) {
            LOCK();
            iVar6 = *piStack_498;
            *piStack_498 = *piStack_498 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (piVar9 != (int *)0x0) {
            LOCK();
            *piVar9 = *piVar9 + 1;
            UNLOCK();
          }
          iStack_490 = piVar9[2];
          piStack_498 = piVar9;
          uVar10 = FUN_1401493d0(&piStack_498,alStack_458);
          FUN_140123a80(&piStack_478,uVar10);
          if (uStack_440 < 8) {
LAB_14014dad0:
            if (piStack_498 != (int *)0x0) {
              LOCK();
              iVar6 = *piStack_498;
              *piStack_498 = *piStack_498 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                func_0x000142a8c94a();
              }
            }
            iVar6 = iStack_470;
            piStack_498 = (int *)0x0;
            uStack_488 = 0;
            uVar10 = FUN_14014ef90(&piStack_478);
            _DAT_143fce750 = &UNK_142c7b790;
            _DAT_143fce758 = 0x3eb;
            _DAT_143fce760 = "ComCGenericString<char>::operator ==";
            _DAT_143fce770 = 0;
            if (_DAT_143fcd428 == 0) {
              if (DAT_143fcd3f6 == '\0') {
                lStack_438 = func_0x000142a8c93e(0x150);
                if (lStack_438 == 0) {
                  _DAT_143fcd428 = 0;
                }
                else {
                  _DAT_143fcd428 = FUN_140127e80(lStack_438);
                }
                if (_DAT_143fcd428 != 0) goto LAB_14014db8a;
                goto LAB_14014dc1d;
              }
LAB_14014dc22:
              _DAT_143fce770 = _DAT_143fcd540;
            }
            else {
LAB_14014db8a:
              lVar11 = _DAT_143fcd428;
              lVar14 = func_0x000142a93d00(&UNK_142c7b790,0x5c);
              if (lVar14 != 0) {
                for (_DAT_143fce770 = *(longlong *)(lVar11 + 0xf8); _DAT_143fce770 != 0;
                    _DAT_143fce770 =
                         *(longlong *)(*(longlong *)(lVar11 + 0xe8) + 8 + _DAT_143fce770)) {
                  uVar18 = *(uint *)(_DAT_143fce770 + 0x38);
                  if (uVar18 != 0) {
                    uVar15 = 0;
                    if (uVar18 == 0) goto LAB_14014dc1d;
                    while( true ) {
                      if (*(longlong *)(_DAT_143fce770 + 0x40) == 0) {
                        if ((*(longlong *)(_DAT_143fce770 + 0x30) == 0) || (uVar18 <= (uint)uVar15))
                        {
                          cVar17 = '\0';
                        }
                        else {
                          cVar17 = *(char *)(uVar15 + 0xc + *(longlong *)(_DAT_143fce770 + 0x30));
                        }
                      }
                      else {
                        cVar17 = *(char *)(uVar15 + *(longlong *)(_DAT_143fce770 + 0x40));
                      }
                      if ((int)cVar17 != (uint)*(ushort *)(lVar14 + 2 + uVar15 * 2)) break;
                      uVar7 = (uint)uVar15 + 1;
                      uVar15 = (ulonglong)uVar7;
                      if (uVar18 <= uVar7) goto LAB_14014dc1d;
                    }
                  }
                }
              }
              _DAT_143fce770 = 0;
LAB_14014dc1d:
              if (_DAT_143fce770 == 0) goto LAB_14014dc22;
            }
            auVar4 = ZEXT816(2) * ZEXT416(iVar6 + 1);
            uVar16 = auVar4._0_8_;
            if (auVar4._8_8_ != 0) {
              uVar16 = 0xffffffffffffffff;
            }
            _DAT_143fce768 = func_0x000142a8c944(uVar16);
            func_0x000142a93e7a(_DAT_143fce768,uVar10);
            if (DAT_143fcd3f5 == '\0') {
              uVar10 = FUN_14016cf80(1);
            }
            else {
              uVar10 = 0;
            }
            FUN_140168800(uVar10,&DAT_143fce748);
            if (piStack_478 != (int *)0x0) {
              LOCK();
              iVar6 = *piStack_478;
              *piStack_478 = *piStack_478 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                func_0x000142a8c94a();
              }
            }
            FUN_142a8ce10(&UNK_142bdd130);
            FUN_142a8cacc(&DAT_143fce778);
            goto LAB_14014d740;
          }
          if ((uStack_440 * 2 + 2 < 0x1000) ||
             ((alStack_458[0] - *(longlong *)(alStack_458[0] + -8)) - 8U < 0x20)) {
            func_0x000142a8cbe0();
            goto LAB_14014dad0;
          }
          _invoke_watson(0,0,0,0,0);
LAB_14014d983:
          _invoke_watson(0,0,0,0,0);
LAB_14014d999:
          exit(0);
          pcVar3 = (code *)swi(3);
          plVar13 = (longlong *)(*pcVar3)();
          return plVar13;
        }
LAB_14014d740:
        lVar11 = _DAT_143fce770;
        LOCK();
        _DAT_143fce74c = _DAT_143fce74c + 1;
        UNLOCK();
        if ((_DAT_143fcd430 != 0) && (DAT_143fce748 != '\0')) {
          piStack_498 = (int *)0x0;
          iStack_490 = 0;
          uStack_488 = 0;
          uVar5 = func_0x000142a93db4(auStack_428);
          piVar9 = (int *)FUN_14016ca40(auStack_428,uVar5,0);
          if (piStack_498 != (int *)0x0) {
            LOCK();
            iVar6 = *piStack_498;
            *piStack_498 = *piStack_498 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (piVar9 != (int *)0x0) {
            LOCK();
            *piVar9 = *piVar9 + 1;
            UNLOCK();
          }
          iStack_490 = piVar9[2];
          piStack_498 = piVar9;
          uVar10 = FUN_1401493d0(&piStack_498,alStack_458);
          FUN_140123a80(&piStack_478,uVar10);
          if (7 < uStack_440) {
            if ((0xfff < uStack_440 * 2 + 2) &&
               (0x1f < (alStack_458[0] - *(longlong *)(alStack_458[0] + -8)) - 8U))
            goto LAB_14014d983;
            func_0x000142a8cbe0();
          }
          uVar10 = FUN_14014ef90(&piStack_478);
          iVar6 = FUN_1401757d0(lVar11,&UNK_142c7b790,"ComCGenericString<char>::operator ==",uVar10,
                                &DAT_143fce748);
          if (piStack_478 != (int *)0x0) {
            LOCK();
            iVar2 = *piStack_478;
            *piStack_478 = *piStack_478 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              func_0x000142a8c94a();
            }
          }
          piStack_478 = (int *)0x0;
          uStack_468 = 0;
          if (piStack_498 != (int *)0x0) {
            LOCK();
            iVar2 = *piStack_498;
            *piStack_498 = *piStack_498 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (iVar6 == 3) goto LAB_14014d999;
          if (iVar6 == 4) {
            DebugBreak();
          }
        }
        FUN_140159190(_DAT_143fce770,&UNK_142c7b790,0x3eb,"ComCGenericString<char>::operator ==",
                      auStack_428);
        plVar13 = plStack_460;
      }
      else {
        if ((*(int *)(param_4 + 8) == 0) && (*pcVar8 == '\0')) {
LAB_14014d9a2:
          *param_2 = lStack_480;
          return param_2;
        }
        lVar11 = FUN_14014ee10(param_4);
        if (*(uint *)(param_4 + 8) != 0) {
          lVar11 = lVar11 - (longlong)pcVar8;
          do {
            pcVar1 = pcVar8 + lVar11;
            cVar17 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            if (*pcVar1 != cVar17) goto LAB_14014d91f;
            uVar18 = uVar18 + 1;
          } while (uVar18 < *(uint *)(param_4 + 8));
        }
        if (*pcVar8 == '\0') goto LAB_14014d9a2;
      }
LAB_14014d91f:
      plVar12 = (longlong *)(**(code **)(*param_1 + 0xa0))(param_1,auStack_430,lStack_480);
      lStack_480 = *plVar12;
    } while (lStack_480 != 0);
  }
  *param_2 = 0;
  return param_2;
}

