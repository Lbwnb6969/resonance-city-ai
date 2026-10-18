
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140162a50(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  char cVar17;
  longlong unaff_GS_OFFSET;
  ulonglong uStackX_20;
  int *piStack_4b8;
  int iStack_4b0;
  undefined8 uStack_4a8;
  int *piStack_4a0;
  int iStack_498;
  undefined8 uStack_490;
  ulonglong uStack_488;
  longlong alStack_480 [3];
  ulonglong uStack_468;
  longlong alStack_460 [2];
  undefined8 uStack_450;
  longlong lStack_440;
  undefined1 auStack_428 [1024];
  
  FUN_1401272a0(alStack_460,param_3,2,0);
  if (alStack_460[0] != 0) goto LAB_140162d5c;
  if (*(int *)(param_3 + 8) == 0) {
    plVar3 = *(longlong **)(param_3 + 0x30);
    if (plVar3 == (longlong *)0x0) {
      FUN_14014e0f0(&piStack_4b8,"package {offset: %llu, size: %llu}",
                    *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
    }
    else {
      (**(code **)(*plVar3 + 0x18))(plVar3,&piStack_4b8);
    }
  }
  else {
    uVar8 = FUN_140149230(param_3,&piStack_4a0);
    FUN_140123330(&piStack_4b8,uVar8);
    if (0xf < uStack_488) {
      if ((0xfff < uStack_488 + 1) &&
         (0x1f < (ulonglong)((longlong)piStack_4a0 + (-8 - *(longlong *)(piStack_4a0 + -2))))) {
        _invoke_watson(0,0,0,0,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      func_0x000142a8cbe0();
    }
  }
  uVar8 = FUN_14014ee10(&piStack_4b8);
  FUN_140142470(auStack_428,0x400,"fail to open file %s for packaging",uVar8);
  if (piStack_4b8 != (int *)0x0) {
    LOCK();
    iVar7 = *piStack_4b8;
    *piStack_4b8 = *piStack_4b8 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      func_0x000142a8c94a();
    }
  }
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               0x4d0) < _DAT_143fce350) && (FUN_142a8cb38(&DAT_143fce350), _DAT_143fce350 == -1)) {
    piStack_4b8 = (int *)0x0;
    iStack_4b0 = 0;
    uStack_4a8 = 0;
    uVar6 = func_0x000142a93db4(auStack_428);
    piVar9 = (int *)FUN_14016ca40(auStack_428,uVar6,0);
    if (piStack_4b8 != (int *)0x0) {
      LOCK();
      iVar7 = *piStack_4b8;
      *piStack_4b8 = *piStack_4b8 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    iStack_4b0 = piVar9[2];
    piStack_4b8 = piVar9;
    uVar8 = FUN_1401493d0(&piStack_4b8,alStack_480);
    FUN_140123a80(&piStack_4a0,uVar8);
    if (7 < uStack_468) {
      if ((0xfff < uStack_468 * 2 + 2) &&
         (0x1f < (alStack_480[0] - *(longlong *)(alStack_480[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      func_0x000142a8cbe0();
    }
    if (piStack_4b8 != (int *)0x0) {
      LOCK();
      iVar7 = *piStack_4b8;
      *piStack_4b8 = *piStack_4b8 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_4b8 = (int *)0x0;
    uStack_4a8 = 0;
    uVar8 = FUN_14014ef90(&piStack_4a0);
    _DAT_143b008b8 = &UNK_142c78ba0;
    _DAT_143b008c0 = 0x4c;
    _DAT_143b008c8 = "ComCPackager::pushFile";
    _DAT_143b008d8 = 0;
    if (_DAT_143fcd428 == 0) {
      if (DAT_143fcd3f6 == '\0') {
        uStackX_20 = func_0x000142a8c93e(0x150);
        if (uStackX_20 == 0) {
          _DAT_143fcd428 = 0;
        }
        else {
          _DAT_143fcd428 = FUN_140127e80(uStackX_20);
        }
        if (_DAT_143fcd428 != 0) goto LAB_1401630aa;
        goto LAB_14016313d;
      }
LAB_140163142:
      _DAT_143b008d8 = _DAT_143fcd540;
    }
    else {
LAB_1401630aa:
      lVar12 = _DAT_143fcd428;
      lVar14 = func_0x000142a93d00(&UNK_142c78ba0);
      if (lVar14 != 0) {
        for (_DAT_143b008d8 = *(longlong *)(lVar12 + 0xf8); _DAT_143b008d8 != 0;
            _DAT_143b008d8 = *(longlong *)(*(longlong *)(lVar12 + 0xe8) + 8 + _DAT_143b008d8)) {
          uVar2 = *(uint *)(_DAT_143b008d8 + 0x38);
          if (uVar2 != 0) {
            uVar10 = 0;
            if (uVar2 == 0) goto LAB_14016313d;
            while( true ) {
              if (*(longlong *)(_DAT_143b008d8 + 0x40) == 0) {
                if ((*(longlong *)(_DAT_143b008d8 + 0x30) == 0) || (uVar2 <= (uint)uVar10)) {
                  cVar17 = '\0';
                }
                else {
                  cVar17 = *(char *)(uVar10 + 0xc + *(longlong *)(_DAT_143b008d8 + 0x30));
                }
              }
              else {
                cVar17 = *(char *)(uVar10 + *(longlong *)(_DAT_143b008d8 + 0x40));
              }
              if ((int)cVar17 != (uint)*(ushort *)(lVar14 + 2 + uVar10 * 2)) break;
              uVar16 = (uint)uVar10 + 1;
              uVar10 = (ulonglong)uVar16;
              if (uVar2 <= uVar16) goto LAB_14016313d;
            }
          }
        }
      }
      _DAT_143b008d8 = 0;
LAB_14016313d:
      if (_DAT_143b008d8 == 0) goto LAB_140163142;
    }
    auVar5 = ZEXT816(2) * ZEXT416(iStack_498 + 1);
    uVar15 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      uVar15 = 0xffffffffffffffff;
    }
    _DAT_143b008d0 = func_0x000142a8c944(uVar15);
    func_0x000142a93e7a(_DAT_143b008d0,uVar8);
    if (DAT_143fcd3f5 == '\0') {
      uVar8 = FUN_14016cf80(1);
    }
    else {
      uVar8 = 0;
    }
    FUN_140168800(uVar8,&DAT_143b008b0);
    if (piStack_4a0 != (int *)0x0) {
      LOCK();
      iVar7 = *piStack_4a0;
      *piStack_4a0 = *piStack_4a0 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        func_0x000142a8c94a();
      }
    }
    FUN_142a8ce10(FUN_142bdace0);
    FUN_142a8cacc(&DAT_143fce350);
  }
  lVar12 = _DAT_143b008d8;
  LOCK();
  _DAT_143b008b4 = _DAT_143b008b4 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b008b0 != '\0')) {
    piStack_4b8 = (int *)0x0;
    iStack_4b0 = 0;
    uStack_4a8 = 0;
    uVar6 = func_0x000142a93db4(auStack_428);
    piVar9 = (int *)FUN_14016ca40(auStack_428,uVar6,0);
    if (piStack_4b8 != (int *)0x0) {
      LOCK();
      iVar7 = *piStack_4b8;
      *piStack_4b8 = *piStack_4b8 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + 1;
      UNLOCK();
    }
    iStack_4b0 = piVar9[2];
    piStack_4b8 = piVar9;
    uVar8 = FUN_1401493d0(&piStack_4b8,alStack_480);
    FUN_140123a80(&piStack_4a0,uVar8);
    if (7 < uStack_468) {
      if ((0xfff < uStack_468 * 2 + 2) &&
         (0x1f < (alStack_480[0] - *(longlong *)(alStack_480[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      func_0x000142a8cbe0();
    }
    uVar8 = FUN_14014ef90(&piStack_4a0);
    iVar7 = FUN_1401757d0(lVar12,&UNK_142c78ba0,"ComCPackager::pushFile",uVar8,&DAT_143b008b0);
    if (piStack_4a0 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_4a0;
      *piStack_4a0 = *piStack_4a0 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_4a0 = (int *)0x0;
    uStack_490 = 0;
    if (piStack_4b8 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_4b8;
      *piStack_4b8 = *piStack_4b8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (iVar7 == 3) {
      exit(0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iVar7 == 4) {
      DebugBreak();
    }
  }
  FUN_140159190(_DAT_143b008d8,&UNK_142c78ba0,0x4c,"ComCPackager::pushFile",auStack_428);
LAB_140162d5c:
  uVar10 = func_0x000142a8c944(uStack_450);
  uStackX_20 = uVar10;
  uVar11 = fread(uVar10,1,uStack_450,alStack_460[0]);
  lStack_440 = lStack_440 + uVar11;
  FUN_140122240(param_1,param_2);
  uStackX_20 = uStackX_20 & 0xffffffffffffff00;
  if (*(int *)(param_1 + 1) == 0) {
    _set_errno(0);
    lVar12 = fwrite(&uStackX_20,1,1,*param_1);
    if (lVar12 != 1) {
      puVar13 = (undefined4 *)_errno();
      *(undefined4 *)(param_1 + 1) = *puVar13;
    }
  }
  uStackX_20 = _ftelli64(param_1[2]);
  if (*(int *)(param_1 + 1) == 0) {
    _set_errno(0);
    lVar12 = fwrite(&uStackX_20,8,1,*param_1);
    if (lVar12 != 8) {
      puVar13 = (undefined4 *)_errno();
      *(undefined4 *)(param_1 + 1) = *puVar13;
    }
  }
  uStackX_20 = uVar11;
  if (*(int *)(param_1 + 1) == 0) {
    _set_errno(0);
    lVar12 = fwrite(&uStackX_20,8,1,*param_1);
    if (lVar12 != 8) {
      piVar9 = (int *)_errno();
      *(int *)(param_1 + 1) = *piVar9;
    }
  }
  if (*(int *)(param_1 + 3) == 0) {
    _set_errno(0);
    lVar12 = fwrite(uVar10,1,uVar11,param_1[2]);
    if (lVar12 != 1) {
      puVar13 = (undefined4 *)_errno();
      *(undefined4 *)(param_1 + 3) = *puVar13;
    }
  }
  *(int *)(param_1[8] + -4) = *(int *)(param_1[8] + -4) + 1;
  *(int *)((longlong)param_1 + 0x54) = *(int *)((longlong)param_1 + 0x54) + 1;
  if (uVar10 != 0) {
    func_0x000142a8c94a(uVar10);
  }
  FUN_14012c350(alStack_460);
  return;
}

