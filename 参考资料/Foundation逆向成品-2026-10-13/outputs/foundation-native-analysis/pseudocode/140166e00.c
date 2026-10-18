
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140166e00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  char cVar17;
  longlong unaff_GS_OFFSET;
  int *piStack_4b8;
  int iStack_4b0;
  undefined8 uStack_4a8;
  int *piStack_4a0;
  int iStack_498;
  undefined8 uStack_490;
  longlong lStack_488;
  undefined4 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  char cStack_460;
  longlong lStack_458;
  longlong alStack_450 [3];
  ulonglong uStack_438;
  undefined1 auStack_428 [1024];
  ulonglong uVar16;
  
  uVar11 = 0;
  lStack_488 = 0;
  uStack_480 = 0;
  uStack_478 = 0;
  uStack_470 = 0;
  uStack_468 = 0;
  cStack_460 = '\0';
  lStack_458 = 0;
  FUN_14015ecc0(&lStack_488,param_2,2,0);
  bVar6 = (**(code **)(*param_1 + 0x30))(param_1,&lStack_488,param_3,param_4);
  if (((lStack_488 == 0) || (cStack_460 == '\0')) || (iVar7 = fclose(), iVar7 == 0))
  goto LAB_140167081;
  FUN_140142470(auStack_428,0x400,"fail to close");
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               0x4d0) < _DAT_143fce2e8) && (FUN_142a8cb38(&DAT_143fce2e8), _DAT_143fce2e8 == -1)) {
    DAT_143b00640 = '\x01';
    _DAT_143b00644 = 0;
    _DAT_143b00648 = (undefined *)0x0;
    _DAT_143b00650 = 0xffffffff;
    _DAT_143b00658 = (char *)0x0;
    _DAT_143b00660 = 0;
    _DAT_143b00668 = 0;
    piStack_4b8 = (int *)0x0;
    uStack_4a8 = 0;
    uVar8 = func_0x000142a93db4(auStack_428);
    piVar9 = (int *)FUN_14016ca40(auStack_428,uVar8,0);
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
    uVar10 = FUN_1401493d0(&piStack_4b8,alStack_450);
    FUN_140123a80(&piStack_4a0,uVar10);
    if (7 < uStack_438) {
      if ((0xfff < uStack_438 * 2 + 2) &&
         (0x1f < (alStack_450[0] - *(longlong *)(alStack_450[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return uVar11;
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
    uVar10 = FUN_14014ef90(&piStack_4a0);
    _DAT_143b00648 = &UNK_142c780d0;
    _DAT_143b00650 = 0x3d;
    _DAT_143b00658 = "ComCFileReader::~ComCFileReader";
    _DAT_143b00668 = 0;
    if (_DAT_143fcd428 == 0) {
      if (DAT_143fcd3f6 == '\0') {
        lVar12 = func_0x000142a8c93e(0x150);
        if (lVar12 == 0) {
          _DAT_143fcd428 = 0;
        }
        else {
          _DAT_143fcd428 = FUN_140127e80(lVar12);
          if (_DAT_143fcd428 != 0) goto LAB_140167290;
        }
        goto LAB_14016732d;
      }
LAB_140167337:
      _DAT_143b00668 = _DAT_143fcd540;
    }
    else {
LAB_140167290:
      lVar12 = _DAT_143fcd428;
      lVar13 = func_0x000142a93d00(&UNK_142c780d0,0x5c);
      _DAT_143b00668 = uVar11;
      if (lVar13 != 0) {
        for (uVar3 = *(ulonglong *)(lVar12 + 0xf8); _DAT_143b00668 = uVar11, uVar3 != 0;
            uVar3 = *(ulonglong *)(*(longlong *)(lVar12 + 0xe8) + 8 + uVar3)) {
          uVar2 = *(uint *)(uVar3 + 0x38);
          if (uVar2 != 0) {
            uVar16 = uVar11;
            while( true ) {
              if (*(longlong *)(uVar3 + 0x40) == 0) {
                if ((*(longlong *)(uVar3 + 0x30) == 0) || (uVar2 <= (uint)uVar16)) {
                  cVar17 = '\0';
                }
                else {
                  cVar17 = *(char *)(uVar16 + 0xc + *(longlong *)(uVar3 + 0x30));
                }
              }
              else {
                cVar17 = *(char *)(uVar16 + *(longlong *)(uVar3 + 0x40));
              }
              if ((int)cVar17 != (uint)*(ushort *)(lVar13 + 2 + uVar16 * 2)) break;
              uVar15 = (uint)uVar16 + 1;
              uVar16 = (ulonglong)uVar15;
              _DAT_143b00668 = uVar3;
              if (uVar2 <= uVar15) goto LAB_14016732d;
            }
          }
        }
      }
LAB_14016732d:
      if (_DAT_143b00668 == 0) goto LAB_140167337;
    }
    auVar5 = ZEXT816(2) * ZEXT416(iStack_498 + 1);
    uVar14 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    _DAT_143b00660 = func_0x000142a8c944(uVar14);
    func_0x000142a93e7a(_DAT_143b00660,uVar10);
    if (DAT_143fcd3f5 == '\0') {
      uVar11 = FUN_14016cf80(1);
    }
    FUN_140168800(uVar11,&DAT_143b00640);
    if (piStack_4a0 != (int *)0x0) {
      LOCK();
      iVar7 = *piStack_4a0;
      *piStack_4a0 = *piStack_4a0 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        func_0x000142a8c94a();
      }
    }
    FUN_142a8ce10(FUN_142bdb6e0);
    FUN_142a8cacc(&DAT_143fce2e8);
  }
  uVar11 = _DAT_143b00668;
  LOCK();
  _DAT_143b00644 = _DAT_143b00644 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b00640 != '\0')) {
    piStack_4b8 = (int *)0x0;
    uStack_4a8 = 0;
    uVar8 = func_0x000142a93db4(auStack_428);
    piVar9 = (int *)FUN_14016ca40(auStack_428,uVar8,0);
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
    uVar10 = FUN_1401493d0(&piStack_4b8,alStack_450);
    FUN_140123a80(&piStack_4a0,uVar10);
    if (7 < uStack_438) {
      if ((0xfff < uStack_438 * 2 + 2) &&
         (0x1f < (alStack_450[0] - *(longlong *)(alStack_450[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar4 = (code *)swi(3);
        uVar11 = (*pcVar4)();
        return uVar11;
      }
      func_0x000142a8cbe0();
    }
    uVar10 = FUN_14014ef90(&piStack_4a0);
    iVar7 = FUN_1401757d0(uVar11,&UNK_142c780d0,"ComCFileReader::~ComCFileReader",uVar10,
                          &DAT_143b00640);
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
      uVar11 = (*pcVar4)();
      return uVar11;
    }
    if (iVar7 == 4) {
      DebugBreak();
    }
  }
  FUN_140159190(_DAT_143b00668,&UNK_142c780d0,0x3d,"ComCFileReader::~ComCFileReader",auStack_428);
LAB_140167081:
  if (lStack_458 != 0) {
    func_0x000142a8c94a();
  }
  return (ulonglong)bVar6;
}

