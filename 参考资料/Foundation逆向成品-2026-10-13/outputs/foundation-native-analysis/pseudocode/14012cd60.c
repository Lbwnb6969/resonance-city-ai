
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012cd60(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  char cVar16;
  longlong unaff_GS_OFFSET;
  int *piStack_478;
  int iStack_470;
  undefined8 uStack_468;
  int *piStack_460;
  int iStack_458;
  undefined8 uStack_450;
  longlong alStack_448 [3];
  ulonglong uStack_430;
  undefined1 auStack_428 [1024];
  ulonglong uVar15;
  
  if (*param_1 == 0) {
    return;
  }
  iVar6 = fclose();
  if (iVar6 == 0) {
    return;
  }
  FUN_140142470(auStack_428,0x400,"Failed to close package file");
  uVar13 = 0;
  if ((_DAT_143fce340 <=
       *(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               0x4d0)) || (FUN_142a8cb38(&DAT_143fce340), _DAT_143fce340 != -1)) goto LAB_14012cdfc;
  piStack_478 = (int *)0x0;
  uStack_468 = 0;
  uVar7 = func_0x000142a93db4(auStack_428);
  piVar8 = (int *)FUN_14016ca40(auStack_428,uVar7,0);
  if (piStack_478 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_478;
    *piStack_478 = *piStack_478 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  iStack_470 = piVar8[2];
  piStack_478 = piVar8;
  uVar9 = FUN_1401493d0(&piStack_478,alStack_448);
  FUN_140123a80(&piStack_460,uVar9);
  if (7 < uStack_430) {
    if ((0xfff < uStack_430 * 2 + 2) &&
       (0x1f < (alStack_448[0] - *(longlong *)(alStack_448[0] + -8)) - 8U)) {
      _invoke_watson(0,0,0,0,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    func_0x000142a8cbe0();
  }
  if (piStack_478 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_478;
    *piStack_478 = *piStack_478 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  uVar9 = FUN_14014ef90(&piStack_460);
  _DAT_143b007f8 = &UNK_142c788f0;
  _DAT_143b00800 = 0x2b;
  _DAT_143b00808 = "ComCPackageFile::~ComCPackageFile";
  _DAT_143b00818 = 0;
  if (_DAT_143fcd428 == 0) {
    if (DAT_143fcd3f6 == '\0') {
      lVar10 = func_0x000142a8c93e(0x150);
      if (lVar10 == 0) {
        _DAT_143fcd428 = 0;
      }
      else {
        _DAT_143fcd428 = FUN_140127e80(lVar10);
        if (_DAT_143fcd428 != 0) goto LAB_14012d13d;
      }
      goto LAB_14012d1d8;
    }
LAB_14012d1e1:
    _DAT_143b00818 = _DAT_143fcd540;
  }
  else {
LAB_14012d13d:
    lVar10 = _DAT_143fcd428;
    lVar11 = func_0x000142a93d00(&UNK_142c788f0,0x5c);
    _DAT_143b00818 = uVar13;
    if (lVar11 != 0) {
      for (uVar3 = *(ulonglong *)(lVar10 + 0xf8); _DAT_143b00818 = uVar13, uVar3 != 0;
          uVar3 = *(ulonglong *)(uVar3 + 8 + *(longlong *)(lVar10 + 0xe8))) {
        uVar2 = *(uint *)(uVar3 + 0x38);
        if (uVar2 != 0) {
          uVar15 = uVar13;
          while( true ) {
            if (*(longlong *)(uVar3 + 0x40) == 0) {
              if ((*(longlong *)(uVar3 + 0x30) == 0) || (uVar2 <= (uint)uVar15)) {
                cVar16 = '\0';
              }
              else {
                cVar16 = *(char *)(uVar15 + 0xc + *(longlong *)(uVar3 + 0x30));
              }
            }
            else {
              cVar16 = *(char *)(uVar15 + *(longlong *)(uVar3 + 0x40));
            }
            if ((int)cVar16 != (uint)*(ushort *)(lVar11 + 2 + uVar15 * 2)) break;
            uVar14 = (uint)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
            _DAT_143b00818 = uVar3;
            if (uVar2 <= uVar14) goto LAB_14012d1d8;
          }
        }
      }
    }
LAB_14012d1d8:
    if (_DAT_143b00818 == 0) goto LAB_14012d1e1;
  }
  auVar5 = ZEXT816(2) * ZEXT416(iStack_458 + 1);
  uVar12 = auVar5._0_8_;
  if (auVar5._8_8_ != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  _DAT_143b00810 = func_0x000142a8c944(uVar12);
  func_0x000142a93e7a(_DAT_143b00810,uVar9);
  if (DAT_143fcd3f5 == '\0') {
    uVar13 = FUN_14016cf80(1);
  }
  FUN_140168800(uVar13,&DAT_143b007f0);
  if (piStack_460 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_460;
    *piStack_460 = *piStack_460 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  FUN_142a8ce10(FUN_142bdb780);
  FUN_142a8cacc(&DAT_143fce340);
LAB_14012cdfc:
  uVar13 = _DAT_143b00818;
  LOCK();
  _DAT_143b007f4 = _DAT_143b007f4 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b007f0 != '\0')) {
    piStack_478 = (int *)0x0;
    uStack_468 = 0;
    uVar7 = func_0x000142a93db4(auStack_428);
    piVar8 = (int *)FUN_14016ca40(auStack_428,uVar7,0);
    if (piStack_478 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_478;
      *piStack_478 = *piStack_478 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
    }
    iStack_470 = piVar8[2];
    piStack_478 = piVar8;
    uVar9 = FUN_1401493d0(&piStack_478,alStack_448);
    FUN_140123a80(&piStack_460,uVar9);
    if (7 < uStack_430) {
      if ((0xfff < uStack_430 * 2 + 2) &&
         (0x1f < (alStack_448[0] - *(longlong *)(alStack_448[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      func_0x000142a8cbe0();
    }
    uVar9 = FUN_14014ef90(&piStack_460);
    iVar6 = FUN_1401757d0(uVar13,&UNK_142c788f0,"ComCPackageFile::~ComCPackageFile",uVar9,
                          &DAT_143b007f0);
    if (piStack_460 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_460;
      *piStack_460 = *piStack_460 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_460 = (int *)0x0;
    uStack_450 = 0;
    if (piStack_478 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_478;
      *piStack_478 = *piStack_478 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (iVar6 == 3) {
      exit(0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iVar6 == 4) {
      DebugBreak();
    }
  }
  FUN_140159190(_DAT_143b00818,&UNK_142c788f0,0x2b,"ComCPackageFile::~ComCPackageFile",auStack_428);
  return;
}

