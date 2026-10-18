
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_14014c710(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  char cVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong unaff_GS_OFFSET;
  int *piStack_498;
  int iStack_490;
  undefined8 uStack_488;
  int *piStack_480;
  int iStack_478;
  undefined8 uStack_470;
  longlong alStack_468 [3];
  ulonglong uStack_450;
  longlong lStack_448;
  undefined1 auStack_438 [1024];
  
  lVar12 = *(longlong *)(param_1 + 0x30);
  uVar17 = (ulonglong)*(uint *)(lVar12 + 0xc + param_3);
  if (uVar17 != 0) {
    uVar20 = (ulonglong)__tls_index;
    lVar3 = *(longlong *)(unaff_GS_OFFSET + 0x58);
    do {
      uVar19 = 0;
      pcVar9 = (char *)FUN_14014ee10(*(longlong *)(param_1 + 8) +
                                     (ulonglong)*(uint *)(lVar12 + uVar17) * 0x18);
      if (pcVar9 == (char *)0x0) {
        FUN_140142470(auStack_438,0x400,"Compare string to nullptr");
        if ((*(int *)(*(longlong *)(lVar3 + uVar20 * 8) + 0x4d0) < _DAT_143fce778) &&
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
          uVar6 = func_0x000142a93db4(auStack_438);
          piVar10 = (int *)FUN_14016ca40(auStack_438,uVar6,0);
          if (piStack_498 != (int *)0x0) {
            LOCK();
            iVar7 = *piStack_498;
            *piStack_498 = *piStack_498 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (piVar10 != (int *)0x0) {
            LOCK();
            *piVar10 = *piVar10 + 1;
            UNLOCK();
          }
          iStack_490 = piVar10[2];
          piStack_498 = piVar10;
          uVar11 = FUN_1401493d0(&piStack_498,alStack_468);
          FUN_140123a80(&piStack_480,uVar11);
          if (uStack_450 < 8) {
LAB_14014cb4f:
            if (piStack_498 != (int *)0x0) {
              LOCK();
              iVar7 = *piStack_498;
              *piStack_498 = *piStack_498 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                func_0x000142a8c94a();
              }
            }
            iVar7 = iStack_478;
            piStack_498 = (int *)0x0;
            uStack_488 = 0;
            uVar11 = FUN_14014ef90(&piStack_480);
            _DAT_143fce750 = &UNK_142c7b790;
            _DAT_143fce758 = 0x3eb;
            _DAT_143fce760 = "ComCGenericString<char>::operator ==";
            _DAT_143fce770 = 0;
            if (_DAT_143fcd428 == 0) {
              if (DAT_143fcd3f6 == '\0') {
                lStack_448 = func_0x000142a8c93e(0x150);
                if (lStack_448 == 0) {
                  _DAT_143fcd428 = 0;
                }
                else {
                  _DAT_143fcd428 = FUN_140127e80(lStack_448);
                }
                if (_DAT_143fcd428 != 0) goto LAB_14014cc0a;
                goto LAB_14014cc9d;
              }
LAB_14014cca2:
              _DAT_143fce770 = _DAT_143fcd540;
            }
            else {
LAB_14014cc0a:
              lVar12 = _DAT_143fcd428;
              lVar14 = func_0x000142a93d00(&UNK_142c7b790,0x5c);
              if (lVar14 != 0) {
                for (_DAT_143fce770 = *(longlong *)(lVar12 + 0xf8); _DAT_143fce770 != 0;
                    _DAT_143fce770 =
                         *(longlong *)(*(longlong *)(lVar12 + 0xe8) + 8 + _DAT_143fce770)) {
                  uVar19 = *(uint *)(_DAT_143fce770 + 0x38);
                  if (uVar19 != 0) {
                    uVar15 = 0;
                    if (uVar19 == 0) goto LAB_14014cc9d;
                    while( true ) {
                      if (*(longlong *)(_DAT_143fce770 + 0x40) == 0) {
                        if ((*(longlong *)(_DAT_143fce770 + 0x30) == 0) || (uVar19 <= (uint)uVar15))
                        {
                          cVar18 = '\0';
                        }
                        else {
                          cVar18 = *(char *)(uVar15 + 0xc + *(longlong *)(_DAT_143fce770 + 0x30));
                        }
                      }
                      else {
                        cVar18 = *(char *)(uVar15 + *(longlong *)(_DAT_143fce770 + 0x40));
                      }
                      if ((int)cVar18 != (uint)*(ushort *)(lVar14 + 2 + uVar15 * 2)) break;
                      uVar8 = (uint)uVar15 + 1;
                      uVar15 = (ulonglong)uVar8;
                      if (uVar19 <= uVar8) goto LAB_14014cc9d;
                    }
                  }
                }
              }
              _DAT_143fce770 = 0;
LAB_14014cc9d:
              if (_DAT_143fce770 == 0) goto LAB_14014cca2;
            }
            auVar5 = ZEXT816(2) * ZEXT416(iVar7 + 1);
            uVar16 = auVar5._0_8_;
            if (auVar5._8_8_ != 0) {
              uVar16 = 0xffffffffffffffff;
            }
            _DAT_143fce768 = func_0x000142a8c944(uVar16);
            func_0x000142a93e7a(_DAT_143fce768,uVar11);
            if (DAT_143fcd3f5 == '\0') {
              uVar11 = FUN_14016cf80(1);
            }
            else {
              uVar11 = 0;
            }
            FUN_140168800(uVar11,&DAT_143fce748);
            if (piStack_480 != (int *)0x0) {
              LOCK();
              iVar7 = *piStack_480;
              *piStack_480 = *piStack_480 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                func_0x000142a8c94a();
              }
            }
            FUN_142a8ce10(&UNK_142bdd130);
            FUN_142a8cacc(&DAT_143fce778);
            goto LAB_14014c7ce;
          }
          if ((uStack_450 * 2 + 2 < 0x1000) ||
             ((alStack_468[0] - *(longlong *)(alStack_468[0] + -8)) - 8U < 0x20)) {
            func_0x000142a8cbe0();
            goto LAB_14014cb4f;
          }
          _invoke_watson(0,0,0,0,0);
LAB_14014c9fe:
          _invoke_watson(0,0,0,0,0);
LAB_14014ca14:
          exit(0);
          pcVar4 = (code *)swi(3);
          puVar13 = (ulonglong *)(*pcVar4)();
          return puVar13;
        }
LAB_14014c7ce:
        lVar12 = _DAT_143fce770;
        LOCK();
        _DAT_143fce74c = _DAT_143fce74c + 1;
        UNLOCK();
        if ((_DAT_143fcd430 != 0) && (DAT_143fce748 != '\0')) {
          piStack_498 = (int *)0x0;
          iStack_490 = 0;
          uStack_488 = 0;
          uVar6 = func_0x000142a93db4(auStack_438);
          piVar10 = (int *)FUN_14016ca40(auStack_438,uVar6,0);
          if (piStack_498 != (int *)0x0) {
            LOCK();
            iVar7 = *piStack_498;
            *piStack_498 = *piStack_498 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (piVar10 != (int *)0x0) {
            LOCK();
            *piVar10 = *piVar10 + 1;
            UNLOCK();
          }
          iStack_490 = piVar10[2];
          piStack_498 = piVar10;
          uVar11 = FUN_1401493d0(&piStack_498,alStack_468);
          FUN_140123a80(&piStack_480,uVar11);
          if (7 < uStack_450) {
            if ((0xfff < uStack_450 * 2 + 2) &&
               (0x1f < (alStack_468[0] - *(longlong *)(alStack_468[0] + -8)) - 8U))
            goto LAB_14014c9fe;
            func_0x000142a8cbe0();
          }
          uVar11 = FUN_14014ef90(&piStack_480);
          iVar7 = FUN_1401757d0(lVar12,&UNK_142c7b790,"ComCGenericString<char>::operator ==",uVar11,
                                &DAT_143fce748);
          if (piStack_480 != (int *)0x0) {
            LOCK();
            iVar2 = *piStack_480;
            *piStack_480 = *piStack_480 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              func_0x000142a8c94a();
            }
          }
          piStack_480 = (int *)0x0;
          uStack_470 = 0;
          if (piStack_498 != (int *)0x0) {
            LOCK();
            iVar2 = *piStack_498;
            *piStack_498 = *piStack_498 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (iVar7 == 3) goto LAB_14014ca14;
          if (iVar7 == 4) {
            DebugBreak();
          }
        }
        FUN_140159190(_DAT_143fce770,&UNK_142c7b790,0x3eb,"ComCGenericString<char>::operator ==",
                      auStack_438);
      }
      else {
        if ((*(int *)(param_4 + 8) == 0) && (*pcVar9 == '\0')) {
LAB_14014ca1d:
          *param_2 = uVar17;
          return param_2;
        }
        lVar12 = FUN_14014ee10(param_4);
        if (*(uint *)(param_4 + 8) != 0) {
          lVar12 = lVar12 - (longlong)pcVar9;
          do {
            pcVar1 = pcVar9 + lVar12;
            cVar18 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            if (*pcVar1 != cVar18) goto LAB_14014c9ad;
            uVar19 = uVar19 + 1;
          } while (uVar19 < *(uint *)(param_4 + 8));
        }
        if (*pcVar9 == '\0') goto LAB_14014ca1d;
      }
LAB_14014c9ad:
      lVar12 = *(longlong *)(param_1 + 0x30);
      uVar17 = (ulonglong)*(uint *)(lVar12 + 4 + uVar17);
    } while (uVar17 != 0);
  }
  *param_2 = 0;
  return param_2;
}

