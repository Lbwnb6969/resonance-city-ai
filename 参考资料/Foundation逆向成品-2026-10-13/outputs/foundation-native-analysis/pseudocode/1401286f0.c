
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1401286f0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar13;
  undefined4 uVar14;
  char cVar15;
  longlong unaff_GS_OFFSET;
  longlong lStackX_8;
  undefined8 uStackX_18;
  undefined8 uStack_20;
  ulonglong uVar12;
  
  uStack_20 = 0x140128708;
  lVar7 = FUN_142a8d2f0();
  lVar7 = -lVar7;
  uVar13 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)(&stack0x00001238 + lVar7) = 0;
  *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x14012872b;
  uVar8 = FUN_14014ef90(param_2);
  *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128743;
  _wfopen_s(&stack0x00001238 + lVar7,uVar8,&UNK_142c78168);
  lVar10 = *(longlong *)(&stack0x00001238 + lVar7);
  *param_1 = lVar10;
  if (lVar10 != 0) goto LAB_1401288df;
  *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x14012875f;
  uVar8 = FUN_14014ef90(param_2);
  *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x14012877b;
  FUN_1401424d0(&stack0x00000218 + lVar7,0x400,&UNK_142c78888,uVar8);
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
              0x4d0) < _DAT_143fce33c) {
    *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128966;
    FUN_142a8cb38(&DAT_143fce33c);
    if (_DAT_143fce33c == -1) {
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128980;
      iVar5 = func_0x000142a93dba(&stack0x00000218 + lVar7);
      if (_DAT_143fcd428 == 0) {
        if (DAT_143fcd3f6 == '\0') {
          *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x1401289a5;
          lVar10 = func_0x000142a8c93e(0x150);
          *(longlong *)(&stack0x00001248 + lVar7) = lVar10;
          uVar11 = uVar13;
          if (lVar10 != 0) {
            *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x1401289ba;
            uVar11 = FUN_140127e80(lVar10);
          }
          _DAT_143fcd428 = uVar11;
          if (uVar11 != 0) goto LAB_1401289da;
          goto LAB_140128a6f;
        }
LAB_140128a74:
        _DAT_143b007e8 = _DAT_143fcd540;
      }
      else {
LAB_1401289da:
        uVar11 = _DAT_143fcd428;
        *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x1401289eb;
        lVar10 = func_0x000142a93d00(&UNK_142c788f0,0x5c);
        _DAT_143b007e8 = uVar13;
        if (lVar10 != 0) {
          for (uVar1 = *(ulonglong *)(uVar11 + 0xf8); _DAT_143b007e8 = uVar13, uVar1 != 0;
              uVar1 = *(ulonglong *)(*(longlong *)(uVar11 + 0xe8) + 8 + uVar1)) {
            uVar4 = *(uint *)(uVar1 + 0x38);
            if (uVar4 != 0) {
              uVar12 = uVar13;
              while( true ) {
                if (*(longlong *)(uVar1 + 0x40) == 0) {
                  if ((*(longlong *)(uVar1 + 0x30) == 0) || (uVar4 <= (uint)uVar12)) {
                    cVar15 = '\0';
                  }
                  else {
                    cVar15 = *(char *)(uVar12 + 0xc + *(longlong *)(uVar1 + 0x30));
                  }
                }
                else {
                  cVar15 = *(char *)(uVar12 + *(longlong *)(uVar1 + 0x40));
                }
                if ((int)cVar15 != (uint)*(ushort *)(lVar10 + 2 + uVar12 * 2)) break;
                uVar6 = (uint)uVar12 + 1;
                uVar12 = (ulonglong)uVar6;
                _DAT_143b007e8 = uVar1;
                if (uVar4 <= uVar6) goto LAB_140128a6f;
              }
            }
          }
        }
LAB_140128a6f:
        if (_DAT_143b007e8 == 0) goto LAB_140128a74;
      }
      auVar3 = ZEXT816(2) * ZEXT416(iVar5 + 1);
      uVar8 = auVar3._0_8_;
      if (auVar3._8_8_ != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128aa0;
      _DAT_143b007e0 = func_0x000142a8c944(uVar8);
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128ab7;
      func_0x000142a93e7a(_DAT_143b007e0,&stack0x00000218 + lVar7);
      if (DAT_143fcd3f5 == '\0') {
        *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128acf;
        uVar13 = FUN_14016cf80(1);
      }
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x14012893c;
      FUN_140168800(uVar13,&DAT_143b007c0);
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128948;
      FUN_142a8ce10(FUN_142bda510);
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128955;
      FUN_142a8cacc(&DAT_143fce33c);
    }
  }
  LOCK();
  _DAT_143b007c4 = _DAT_143b007c4 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b007c0 != '\0')) {
    uVar14 = 0x24001210;
    if (_DAT_143fcd430 == 2) {
      uVar14 = 0x24001212;
    }
    *(undefined8 *)((longlong)&uStackX_18 + lVar7) = _DAT_142c7ae90;
    *(undefined4 *)(&stack0x00000020 + lVar7) = _DAT_142c7ae98;
    *(undefined2 *)(&stack0x00000024 + lVar7) = _DAT_142c7ae9c;
    *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128811;
    func_0x000142a93ce8(&stack0x00000026 + lVar7,0,0x1f2);
    if (_DAT_143b007e8 != _DAT_143fcd540) {
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x14012882a;
      uVar8 = FUN_14014ee10(_DAT_143b007e8 + 0x18);
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128843;
      _snwprintf((longlong)&uStackX_18 + lVar7,0x100,&UNK_142c7aea0,uVar8);
    }
    *(char **)((longlong)&lStackX_8 + lVar7) = "ComCPackageFile::ComCPackageFile";
    *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128869;
    _snwprintf(&stack0x00000a18 + lVar7,0x400,&UNK_142c7aeb8,&stack0x00000218 + lVar7);
    *(undefined8 *)((longlong)&lStackX_8 + lVar7) = 0;
    *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128885;
    uVar4 = FUN_140135160(0,&stack0x00000a18 + lVar7,(longlong)&uStackX_18 + lVar7,uVar14);
    if ((uVar4 >> 0x1a & 1) != 0) {
      DAT_143b007c0 = '\0';
    }
    if ((uVar4 & 0xff) == 3) {
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x1401288a2;
      exit(0);
      pcVar2 = (code *)swi(3);
      plVar9 = (longlong *)(*pcVar2)();
      return plVar9;
    }
    if ((uVar4 & 0xff) == 4) {
      *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x1401288ae;
      DebugBreak();
    }
  }
  *(undefined1 **)((longlong)&lStackX_8 + lVar7) = &stack0x00000218 + lVar7;
  *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x1401288d7;
  FUN_140159030(_DAT_143b007e8,&UNK_142c788f0,0x14,"ComCPackageFile::ComCPackageFile");
  lVar10 = *(longlong *)(&stack0x00001238 + lVar7);
LAB_1401288df:
  *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x1401288ed;
  _fseeki64(lVar10,0,2);
  *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x1401288fb;
  lVar10 = _ftelli64(*(undefined8 *)(&stack0x00001238 + lVar7));
  param_1[1] = lVar10;
  *(undefined8 *)((longlong)&uStack_20 + lVar7) = 0x140128912;
  _fseeki64(*(undefined8 *)(&stack0x00001238 + lVar7),0,0);
  return param_1;
}

