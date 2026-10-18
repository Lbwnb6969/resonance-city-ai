
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140167ab0(longlong param_1,longlong *param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  char cVar14;
  longlong unaff_GS_OFFSET;
  undefined8 in_stack_fffffffffffffb58;
  int *piStack_478;
  int iStack_470;
  undefined8 uStack_468;
  int *piStack_460;
  int iStack_458;
  undefined8 uStack_450;
  longlong alStack_448 [3];
  ulonglong uStack_430;
  undefined1 auStack_428 [1024];
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffb58 >> 0x20);
  *param_3 = *(uint *)*param_2;
  lVar8 = *param_2;
  *param_2 = lVar8 + 4;
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 < *param_3) {
    lVar8 = _DAT_143fcd428;
    if (((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) &&
       (lVar7 = func_0x000142a8c93e(0x150), lVar8 = 0, lVar7 != 0)) {
      lVar8 = FUN_140127e80(lVar7);
    }
    _DAT_143fcd428 = lVar8;
    uVar9 = FUN_140159460(_DAT_143fcd428,0x143fcd508,2,&UNK_142c77590,CONCAT44(uVar5,0x2f1),
                          "ComCBinarySerializerReader::readVersionAndCompression",
                          "Trying to read binary file version %d, but reader is version %d",*param_3
                          ,*(undefined4 *)(param_1 + 0x50));
    return uVar9 & 0xffffffffffffff00;
  }
  uVar13 = *(uint *)(lVar8 + 4);
  if (uVar13 < 2) {
    *(bool *)param_4 = uVar13 == 1;
    *param_2 = *param_2 + 4;
    return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  FUN_140142470(auStack_428,0x400,"Wrong compression flag");
  if ((_DAT_143fce1a0 <=
       *(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               0x4d0)) || (FUN_142a8cb38(&DAT_143fce1a0), _DAT_143fce1a0 != -1)) goto LAB_140167bf0;
  piStack_478 = (int *)0x0;
  iStack_470 = 0;
  uStack_468 = 0;
  uVar5 = func_0x000142a93db4(auStack_428);
  piVar10 = (int *)FUN_14016ca40(auStack_428,uVar5,0);
  if (piStack_478 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_478;
    *piStack_478 = *piStack_478 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  if (piVar10 != (int *)0x0) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  iStack_470 = piVar10[2];
  piStack_478 = piVar10;
  uVar11 = FUN_1401493d0(&piStack_478,alStack_448);
  FUN_140123a80(&piStack_460,uVar11);
  if (7 < uStack_430) {
    if ((0xfff < uStack_430 * 2 + 2) &&
       (0x1f < (alStack_448[0] - *(longlong *)(alStack_448[0] + -8)) - 8U)) {
      _invoke_watson(0,0,0,0,0);
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return uVar9;
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
  piStack_478 = (int *)0x0;
  uStack_468 = 0;
  uVar11 = FUN_14014ef90(&piStack_460);
  _DAT_143b00398 = &UNK_142c77590;
  _DAT_143b003a0 = 0x2f6;
  _DAT_143b003a8 = "ComCBinarySerializerReader::readVersionAndCompression";
  _DAT_143b003b8 = 0;
  if (_DAT_143fcd428 == 0) {
    if (DAT_143fcd3f6 == '\0') {
      lVar8 = func_0x000142a8c93e(0x150);
      if (lVar8 == 0) {
        _DAT_143fcd428 = 0;
      }
      else {
        _DAT_143fcd428 = FUN_140127e80(lVar8);
      }
      if (_DAT_143fcd428 != 0) goto LAB_140167f64;
      goto LAB_140168000;
    }
LAB_140168005:
    _DAT_143b003b8 = _DAT_143fcd540;
  }
  else {
LAB_140167f64:
    lVar8 = _DAT_143fcd428;
    lVar7 = func_0x000142a93d00(&UNK_142c77590);
    if (lVar7 != 0) {
      for (_DAT_143b003b8 = *(longlong *)(lVar8 + 0xf8); _DAT_143b003b8 != 0;
          _DAT_143b003b8 = *(longlong *)(_DAT_143b003b8 + 8 + *(longlong *)(lVar8 + 0xe8))) {
        uVar2 = *(uint *)(_DAT_143b003b8 + 0x38);
        if (uVar2 != 0) {
          uVar9 = 0;
          if (uVar2 == 0) goto LAB_140168000;
          while( true ) {
            if (*(longlong *)(_DAT_143b003b8 + 0x40) == 0) {
              if ((*(longlong *)(_DAT_143b003b8 + 0x30) == 0) || (uVar2 <= (uint)uVar9)) {
                cVar14 = '\0';
              }
              else {
                cVar14 = *(char *)(uVar9 + 0xc + *(longlong *)(_DAT_143b003b8 + 0x30));
              }
            }
            else {
              cVar14 = *(char *)(uVar9 + *(longlong *)(_DAT_143b003b8 + 0x40));
            }
            if ((int)cVar14 != (uint)*(ushort *)(lVar7 + 2 + uVar9 * 2)) break;
            uVar13 = (uint)uVar9 + 1;
            uVar9 = (ulonglong)uVar13;
            if (uVar2 <= uVar13) goto LAB_140168000;
          }
        }
      }
    }
    _DAT_143b003b8 = 0;
LAB_140168000:
    if (_DAT_143b003b8 == 0) goto LAB_140168005;
  }
  auVar4 = ZEXT816(2) * ZEXT416(iStack_458 + 1);
  uVar12 = auVar4._0_8_;
  if (auVar4._8_8_ != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  _DAT_143b003b0 = func_0x000142a8c944(uVar12);
  func_0x000142a93e7a(_DAT_143b003b0,uVar11);
  if (DAT_143fcd3f5 == '\0') {
    uVar11 = FUN_14016cf80(1);
  }
  else {
    uVar11 = 0;
  }
  FUN_140168800(uVar11,&DAT_143b00390);
  if (piStack_460 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_460;
    *piStack_460 = *piStack_460 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  FUN_142a8ce10(FUN_142bdd6a0);
  FUN_142a8cacc(&DAT_143fce1a0);
LAB_140167bf0:
  lVar8 = _DAT_143b003b8;
  LOCK();
  _DAT_143b00394 = _DAT_143b00394 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b00390 != '\0')) {
    piStack_478 = (int *)0x0;
    iStack_470 = 0;
    uStack_468 = 0;
    uVar5 = func_0x000142a93db4(auStack_428);
    piVar10 = (int *)FUN_14016ca40(auStack_428,uVar5,0);
    if (piStack_478 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_478;
      *piStack_478 = *piStack_478 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    iStack_470 = piVar10[2];
    piStack_478 = piVar10;
    uVar11 = FUN_1401493d0(&piStack_478,alStack_448);
    FUN_140123a80(&piStack_460,uVar11);
    if (7 < uStack_430) {
      if ((0xfff < uStack_430 * 2 + 2) &&
         (0x1f < (alStack_448[0] - *(longlong *)(alStack_448[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return uVar9;
      }
      func_0x000142a8cbe0();
    }
    uVar11 = FUN_14014ef90(&piStack_460);
    iVar6 = FUN_1401757d0(lVar8,&UNK_142c77590,
                          "ComCBinarySerializerReader::readVersionAndCompression",uVar11,
                          &DAT_143b00390);
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
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return uVar9;
    }
    if (iVar6 == 4) {
      DebugBreak();
    }
  }
  uVar9 = FUN_140159190(_DAT_143b003b8,&UNK_142c77590,0x2f6,
                        "ComCBinarySerializerReader::readVersionAndCompression",auStack_428);
  return uVar9 & 0xffffffffffffff00;
}

