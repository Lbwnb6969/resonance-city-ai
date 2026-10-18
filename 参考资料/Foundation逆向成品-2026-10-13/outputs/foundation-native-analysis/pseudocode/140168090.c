
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140168090(longlong param_1,undefined8 *param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  char cVar14;
  longlong unaff_GS_OFFSET;
  longlong lStackX_8;
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
  lVar7 = fread(&lStackX_8,4,1,*param_2);
  param_2[4] = param_2[4] + lVar7;
  *param_3 = (uint)lStackX_8;
  if (*(uint *)(param_1 + 0x50) < (uint)lStackX_8) {
    lVar7 = _DAT_143fcd428;
    if (((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) &&
       (lStackX_8 = func_0x000142a8c93e(0x150), lVar7 = 0, lStackX_8 != 0)) {
      lVar7 = FUN_140127e80(lStackX_8);
    }
    _DAT_143fcd428 = lVar7;
    FUN_140159460(_DAT_143fcd428,0x143fcd508,2,&UNK_142c77590,CONCAT44(uVar5,0x2dd),
                  "ComCBinarySerializerReader::readVersionAndCompression",
                  "Trying to read binary file version %d, but reader is version %d",*param_3,
                  *(undefined4 *)(param_1 + 0x50));
    return 0;
  }
  lVar7 = fread(&lStackX_8,4,1,*param_2);
  param_2[4] = param_2[4] + lVar7;
  if ((uint)lStackX_8 < 2) {
    *(bool *)param_4 = (uint)lStackX_8 == 1;
    return 1;
  }
  FUN_140142470(auStack_428,0x400,"Wrong compression flag");
  if ((_DAT_143fce19c <=
       *(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               0x4d0)) || (FUN_142a8cb38(&DAT_143fce19c), _DAT_143fce19c != -1)) goto LAB_14016820b;
  piStack_478 = (int *)0x0;
  iStack_470 = 0;
  uStack_468 = 0;
  uVar5 = func_0x000142a93db4(auStack_428);
  piVar8 = (int *)FUN_14016ca40(auStack_428,uVar5,0);
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
  uVar9 = FUN_14014ef90(&piStack_460);
  _DAT_143b00368 = &UNK_142c77590;
  _DAT_143b00370 = 0x2e2;
  _DAT_143b00378 = "ComCBinarySerializerReader::readVersionAndCompression";
  _DAT_143b00388 = 0;
  if (_DAT_143fcd428 == 0) {
    if (DAT_143fcd3f6 == '\0') {
      lStackX_8 = func_0x000142a8c93e(0x150);
      if (lStackX_8 == 0) {
        _DAT_143fcd428 = 0;
      }
      else {
        _DAT_143fcd428 = FUN_140127e80(lStackX_8);
      }
      if (_DAT_143fcd428 != 0) goto LAB_14016857a;
      goto LAB_140168614;
    }
LAB_140168619:
    _DAT_143b00388 = _DAT_143fcd540;
  }
  else {
LAB_14016857a:
    lVar7 = _DAT_143fcd428;
    lVar10 = func_0x000142a93d00(&UNK_142c77590);
    if (lVar10 != 0) {
      for (_DAT_143b00388 = *(longlong *)(lVar7 + 0xf8); _DAT_143b00388 != 0;
          _DAT_143b00388 = *(longlong *)(*(longlong *)(lVar7 + 0xe8) + 8 + _DAT_143b00388)) {
        uVar2 = *(uint *)(_DAT_143b00388 + 0x38);
        if (uVar2 != 0) {
          uVar13 = 0;
          if (uVar2 == 0) goto LAB_140168614;
          while( true ) {
            if (*(longlong *)(_DAT_143b00388 + 0x40) == 0) {
              if ((*(longlong *)(_DAT_143b00388 + 0x30) == 0) || (uVar2 <= (uint)uVar13)) {
                cVar14 = '\0';
              }
              else {
                cVar14 = *(char *)(uVar13 + 0xc + *(longlong *)(_DAT_143b00388 + 0x30));
              }
            }
            else {
              cVar14 = *(char *)(uVar13 + *(longlong *)(_DAT_143b00388 + 0x40));
            }
            if ((int)cVar14 != (uint)*(ushort *)(lVar10 + 2 + uVar13 * 2)) break;
            uVar12 = (uint)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            if (uVar2 <= uVar12) goto LAB_140168614;
          }
        }
      }
    }
    _DAT_143b00388 = 0;
LAB_140168614:
    if (_DAT_143b00388 == 0) goto LAB_140168619;
  }
  auVar4 = ZEXT816(2) * ZEXT416(iStack_458 + 1);
  uVar11 = auVar4._0_8_;
  if (auVar4._8_8_ != 0) {
    uVar11 = 0xffffffffffffffff;
  }
  _DAT_143b00380 = func_0x000142a8c944(uVar11);
  func_0x000142a93e7a(_DAT_143b00380,uVar9);
  if (DAT_143fcd3f5 == '\0') {
    uVar9 = FUN_14016cf80(1);
  }
  else {
    uVar9 = 0;
  }
  FUN_140168800(uVar9,&DAT_143b00360);
  if (piStack_460 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_460;
    *piStack_460 = *piStack_460 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  FUN_142a8ce10(FUN_142bdd740);
  FUN_142a8cacc(&DAT_143fce19c);
LAB_14016820b:
  lVar7 = _DAT_143b00388;
  LOCK();
  _DAT_143b00364 = _DAT_143b00364 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b00360 != '\0')) {
    piStack_478 = (int *)0x0;
    iStack_470 = 0;
    uStack_468 = 0;
    uVar5 = func_0x000142a93db4(auStack_428);
    piVar8 = (int *)FUN_14016ca40(auStack_428,uVar5,0);
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
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return uVar9;
      }
      func_0x000142a8cbe0();
    }
    uVar9 = FUN_14014ef90(&piStack_460);
    iVar6 = FUN_1401757d0(lVar7,&UNK_142c77590,
                          "ComCBinarySerializerReader::readVersionAndCompression",uVar9,
                          &DAT_143b00360);
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
  FUN_140159190(_DAT_143b00388,&UNK_142c77590,0x2e2,
                "ComCBinarySerializerReader::readVersionAndCompression",auStack_428);
  return 0;
}

