
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140161e60(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  longlong unaff_GS_OFFSET;
  undefined8 uStack_10;
  
  uStack_10 = 0x140161e7a;
  lVar7 = FUN_142a8d2f0();
  lVar7 = -lVar7;
  *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161e88;
  FUN_140156b70();
  *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161e96;
  FUN_1401286f0(&stack0x00000028 + lVar7,param_2 + 8);
  *(undefined8 *)(&stack0x00000048 + lVar7) = 0;
  uVar8 = *param_1;
  *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161eba;
  cVar3 = FUN_140157a20(uVar8,&stack0x00001270 + lVar7,&stack0x00000028 + lVar7,
                        &stack0x00000038 + lVar7);
  if (cVar3 != '\0') goto LAB_14016204f;
  *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161ed3;
  uVar8 = FUN_14014ef90(*(longlong *)(&stack0x00001270 + lVar7) + 8);
  *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161eef;
  FUN_1401424d0(&stack0x00000258 + lVar7,0x400,&UNK_142c789e0,uVar8);
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
              0x4d0) < _DAT_143fce344) {
    *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x1401620b0;
    FUN_142a8cb38(&DAT_143fce344);
    if (_DAT_143fce344 == -1) {
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x1401620ca;
      iVar5 = func_0x000142a93dba(&stack0x00000258 + lVar7);
      if (_DAT_143fcd428 == 0) {
        if (DAT_143fcd3f6 == '\0') {
          *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x1401620ef;
          lVar9 = func_0x000142a8c93e(0x150);
          *(longlong *)(&stack0x00001270 + lVar7) = lVar9;
          if (lVar9 == 0) {
            _DAT_143fcd428 = 0;
          }
          else {
            *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140162104;
            _DAT_143fcd428 = FUN_140127e80(lVar9);
          }
          if (_DAT_143fcd428 != 0) goto LAB_140162123;
          goto LAB_1401621bd;
        }
LAB_1401621c2:
        _DAT_143b00848 = _DAT_143fcd540;
      }
      else {
LAB_140162123:
        lVar9 = _DAT_143fcd428;
        *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140162134;
        lVar10 = func_0x000142a93d00(&UNK_142c788f0,0x5c);
        if (lVar10 != 0) {
          for (_DAT_143b00848 = *(longlong *)(lVar9 + 0xf8); _DAT_143b00848 != 0;
              _DAT_143b00848 = *(longlong *)(*(longlong *)(lVar9 + 0xe8) + 8 + _DAT_143b00848)) {
            uVar4 = *(uint *)(_DAT_143b00848 + 0x38);
            if (uVar4 != 0) {
              uVar11 = 0;
              if (uVar4 == 0) goto LAB_1401621bd;
              while( true ) {
                if (*(longlong *)(_DAT_143b00848 + 0x40) == 0) {
                  if ((*(longlong *)(_DAT_143b00848 + 0x30) == 0) || (uVar4 <= (uint)uVar11)) {
                    cVar3 = '\0';
                  }
                  else {
                    cVar3 = *(char *)(uVar11 + 0xc + *(longlong *)(_DAT_143b00848 + 0x30));
                  }
                }
                else {
                  cVar3 = *(char *)(uVar11 + *(longlong *)(_DAT_143b00848 + 0x40));
                }
                if ((int)cVar3 != (uint)*(ushort *)(lVar10 + 2 + uVar11 * 2)) break;
                uVar6 = (uint)uVar11 + 1;
                uVar11 = (ulonglong)uVar6;
                if (uVar4 <= uVar6) goto LAB_1401621bd;
              }
            }
          }
        }
        _DAT_143b00848 = 0;
LAB_1401621bd:
        if (_DAT_143b00848 == 0) goto LAB_1401621c2;
      }
      auVar2 = ZEXT816(2) * ZEXT416(iVar5 + 1);
      uVar8 = auVar2._0_8_;
      if (auVar2._8_8_ != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x1401621ee;
      _DAT_143b00840 = func_0x000142a8c944(uVar8);
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140162205;
      func_0x000142a93e7a(_DAT_143b00840,&stack0x00000258 + lVar7);
      if (DAT_143fcd3f5 == '\0') {
        *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x14016221c;
        uVar8 = FUN_14016cf80(1);
      }
      else {
        uVar8 = 0;
      }
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140162086;
      FUN_140168800(uVar8,&DAT_143b00820);
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140162092;
      FUN_142a8ce10(FUN_142bdac40);
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x14016209f;
      FUN_142a8cacc(&DAT_143fce344);
    }
  }
  LOCK();
  _DAT_143b00824 = _DAT_143b00824 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b00820 != '\0')) {
    uVar12 = 0x24001210;
    if (_DAT_143fcd430 == 2) {
      uVar12 = 0x24001212;
    }
    *(undefined8 *)(&stack0x00000058 + lVar7) = _DAT_142c7ae90;
    *(undefined4 *)(&stack0x00000060 + lVar7) = _DAT_142c7ae98;
    *(undefined2 *)(&stack0x00000064 + lVar7) = _DAT_142c7ae9c;
    *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161f85;
    func_0x000142a93ce8(&stack0x00000066 + lVar7,0,0x1f2);
    if (_DAT_143b00848 != _DAT_143fcd540) {
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161f9e;
      uVar8 = FUN_14014ee10(_DAT_143b00848 + 0x18);
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161fb7;
      _snwprintf(&stack0x00000058 + lVar7,0x100,&UNK_142c7aea0,uVar8);
    }
    *(char **)(&stack0x00000018 + lVar7) = "ComCPackageThreadLocalRegistry::openPackageFile";
    *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161fdd;
    _snwprintf(&stack0x00000a58 + lVar7,0x400,&UNK_142c7aeb8,&stack0x00000258 + lVar7);
    *(undefined8 *)(&stack0x00000018 + lVar7) = 0;
    *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140161ffd;
    uVar4 = FUN_140135160(0,&stack0x00000a58 + lVar7,&stack0x00000058 + lVar7,uVar12);
    if ((uVar4 >> 0x1a & 1) != 0) {
      DAT_143b00820 = '\0';
    }
    if ((uVar4 & 0xff) == 3) {
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x14016201a;
      exit(0);
      pcVar1 = (code *)swi(3);
      lVar7 = (*pcVar1)();
      return lVar7;
    }
    if ((uVar4 & 0xff) == 4) {
      *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x140162026;
      DebugBreak();
    }
  }
  *(undefined1 **)(&stack0x00000018 + lVar7) = &stack0x00000258 + lVar7;
  *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x14016204f;
  FUN_140159030(_DAT_143b00848,&UNK_142c788f0,0x4d,"ComCPackageThreadLocalRegistry::openPackageFile"
               );
LAB_14016204f:
  lVar9 = *(longlong *)(&stack0x00000048 + lVar7);
  *(undefined8 *)((longlong)&uStack_10 + lVar7) = 0x14016205e;
  FUN_14012cd60(&stack0x00000028 + lVar7);
  return lVar9 + 0x20;
}

