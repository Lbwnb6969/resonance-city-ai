
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140128c90(undefined8 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  char cVar17;
  longlong unaff_GS_OFFSET;
  uint auStackX_10 [2];
  longlong lStackX_18;
  ulonglong in_stack_fffffffffffffb68;
  int *piStack_488;
  int iStack_480;
  undefined8 uStack_478;
  int *piStack_470;
  int iStack_468;
  undefined8 uStack_460;
  longlong alStack_458 [3];
  ulonglong uStack_440;
  undefined1 auStack_438 [1024];
  
  piStack_488 = (int *)0x0;
  iStack_480 = 0;
  uStack_478 = 0;
  piVar7 = (int *)FUN_14016ca40("header.tmp",10,0);
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  iStack_480 = piVar7[2];
  in_stack_fffffffffffffb68 = in_stack_fffffffffffffb68 & 0xffffffffffffff00;
  piStack_488 = piVar7;
  FUN_1401275b0(param_1,&piStack_488,2,0,in_stack_fffffffffffffb68);
  LOCK();
  iVar6 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    func_0x000142a8c94a(piVar7);
  }
  piStack_488 = (int *)0x0;
  iStack_480 = 0;
  uStack_478 = 0;
  piVar7 = (int *)FUN_14016ca40("content.tmp",0xb,0);
  if (piVar7 != (int *)0x0) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  iStack_480 = piVar7[2];
  piStack_488 = piVar7;
  FUN_1401275b0(param_1 + 2,&piStack_488,2,0,in_stack_fffffffffffffb68 & 0xffffffffffffff00);
  LOCK();
  iVar6 = *piVar7;
  *piVar7 = *piVar7 + -1;
  UNLOCK();
  if (iVar6 == 1) {
    func_0x000142a8c94a(piVar7);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  if ((param_2 != 0) && (param_2 < 3)) goto LAB_140128fb8;
  FUN_140142470(auStack_438,0x400,"Unsupported package version");
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               0x4d0) < _DAT_143fce34c) && (FUN_142a8cb38(&DAT_143fce34c), _DAT_143fce34c == -1)) {
    piStack_488 = (int *)0x0;
    iStack_480 = 0;
    uStack_478 = 0;
    uVar5 = func_0x000142a93db4(auStack_438);
    piVar7 = (int *)FUN_14016ca40(auStack_438,uVar5,0);
    if (piStack_488 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_488;
      *piStack_488 = *piStack_488 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    iStack_480 = piVar7[2];
    piStack_488 = piVar7;
    uVar8 = FUN_1401493d0(&piStack_488,alStack_458);
    FUN_140123a80(&piStack_470,uVar8);
    if (7 < uStack_440) {
      if ((0xfff < uStack_440 * 2 + 2) &&
         (0x1f < (alStack_458[0] - *(longlong *)(alStack_458[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar3 = (code *)swi(3);
        puVar9 = (undefined8 *)(*pcVar3)();
        return puVar9;
      }
      func_0x000142a8cbe0();
    }
    if (piStack_488 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_488;
      *piStack_488 = *piStack_488 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_488 = (int *)0x0;
    uStack_478 = 0;
    uVar8 = FUN_14014ef90(&piStack_470);
    _DAT_143b00888 = &UNK_142c78ba0;
    _DAT_143b00890 = 0xf;
    _DAT_143b00898 = "ComCPackager::ComCPackager";
    _DAT_143b008a8 = 0;
    if (_DAT_143fcd428 == 0) {
      if (DAT_143fcd3f6 == '\0') {
        lStackX_18 = func_0x000142a8c93e(0x150);
        if (lStackX_18 == 0) {
          _DAT_143fcd428 = 0;
        }
        else {
          _DAT_143fcd428 = FUN_140127e80(lStackX_18);
        }
        if (_DAT_143fcd428 != 0) goto LAB_1401292c8;
        goto LAB_14012935d;
      }
LAB_140129362:
      _DAT_143b008a8 = _DAT_143fcd540;
    }
    else {
LAB_1401292c8:
      lVar10 = _DAT_143fcd428;
      lVar12 = func_0x000142a93d00(&UNK_142c78ba0);
      if (lVar12 != 0) {
        for (_DAT_143b008a8 = *(longlong *)(lVar10 + 0xf8); _DAT_143b008a8 != 0;
            _DAT_143b008a8 = *(longlong *)(*(longlong *)(lVar10 + 0xe8) + 8 + _DAT_143b008a8)) {
          uVar2 = *(uint *)(_DAT_143b008a8 + 0x38);
          if (uVar2 != 0) {
            uVar16 = 0;
            if (uVar2 == 0) goto LAB_14012935d;
            while( true ) {
              if (*(longlong *)(_DAT_143b008a8 + 0x40) == 0) {
                if ((*(longlong *)(_DAT_143b008a8 + 0x30) == 0) || (uVar2 <= (uint)uVar16)) {
                  cVar17 = '\0';
                }
                else {
                  cVar17 = *(char *)(uVar16 + 0xc + *(longlong *)(_DAT_143b008a8 + 0x30));
                }
              }
              else {
                cVar17 = *(char *)(uVar16 + *(longlong *)(_DAT_143b008a8 + 0x40));
              }
              if ((int)cVar17 != (uint)*(ushort *)(lVar12 + 2 + uVar16 * 2)) break;
              uVar15 = (uint)uVar16 + 1;
              uVar16 = (ulonglong)uVar15;
              if (uVar2 <= uVar15) goto LAB_14012935d;
            }
          }
        }
      }
      _DAT_143b008a8 = 0;
LAB_14012935d:
      if (_DAT_143b008a8 == 0) goto LAB_140129362;
    }
    auVar4 = ZEXT816(2) * ZEXT416(iStack_468 + 1);
    uVar14 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar14 = 0xffffffffffffffff;
    }
    _DAT_143b008a0 = func_0x000142a8c944(uVar14);
    func_0x000142a93e7a(_DAT_143b008a0,uVar8);
    if (DAT_143fcd3f5 == '\0') {
      uVar8 = FUN_14016cf80(1);
    }
    else {
      uVar8 = 0;
    }
    FUN_140168800(uVar8,&DAT_143b00880);
    if (piStack_470 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_470;
      *piStack_470 = *piStack_470 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    FUN_142a8ce10(FUN_142bda5b0);
    FUN_142a8cacc(&DAT_143fce34c);
  }
  lVar10 = _DAT_143b008a8;
  LOCK();
  _DAT_143b00884 = _DAT_143b00884 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b00880 != '\0')) {
    piStack_488 = (int *)0x0;
    iStack_480 = 0;
    uStack_478 = 0;
    uVar5 = func_0x000142a93db4(auStack_438);
    piVar7 = (int *)FUN_14016ca40(auStack_438,uVar5,0);
    if (piStack_488 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_488;
      *piStack_488 = *piStack_488 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    iStack_480 = piVar7[2];
    piStack_488 = piVar7;
    uVar8 = FUN_1401493d0(&piStack_488,alStack_458);
    FUN_140123a80(&piStack_470,uVar8);
    if (7 < uStack_440) {
      if ((0xfff < uStack_440 * 2 + 2) &&
         (0x1f < (alStack_458[0] - *(longlong *)(alStack_458[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar3 = (code *)swi(3);
        puVar9 = (undefined8 *)(*pcVar3)();
        return puVar9;
      }
      func_0x000142a8cbe0();
    }
    uVar8 = FUN_14014ef90(&piStack_470);
    iVar6 = FUN_1401757d0(lVar10,&UNK_142c78ba0,"ComCPackager::ComCPackager",uVar8,&DAT_143b00880);
    if (piStack_470 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_470;
      *piStack_470 = *piStack_470 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_470 = (int *)0x0;
    uStack_460 = 0;
    if (piStack_488 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_488;
      *piStack_488 = *piStack_488 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (iVar6 == 3) {
      exit(0);
      pcVar3 = (code *)swi(3);
      puVar9 = (undefined8 *)(*pcVar3)();
      return puVar9;
    }
    if (iVar6 == 4) {
      DebugBreak();
    }
  }
  FUN_140159190(_DAT_143b008a8,&UNK_142c78ba0,0xf,"ComCPackager::ComCPackager",auStack_438);
LAB_140128fb8:
  *(uint *)(param_1 + 10) = param_2;
  auStackX_10[0] = param_2;
  if (*(int *)(param_1 + 1) == 0) {
    _set_errno(0);
    lVar10 = fwrite(auStackX_10,4,1,*param_1);
    if (lVar10 != 4) {
      puVar11 = (undefined4 *)_errno();
      *(undefined4 *)(param_1 + 1) = *puVar11;
    }
  }
  if (1 < *(uint *)(param_1 + 10)) {
    lVar10 = 0x20;
    do {
      auStackX_10[0] = auStackX_10[0] & 0xffffff00;
      if (*(int *)(param_1 + 1) == 0) {
        _set_errno(0);
        lVar12 = fwrite(auStackX_10,1,1,*param_1);
        if (lVar12 != 1) {
          puVar11 = (undefined4 *)_errno();
          *(undefined4 *)(param_1 + 1) = *puVar11;
        }
      }
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  piVar7 = (int *)(param_1 + 1);
  auStackX_10[0] = 0;
  if (*piVar7 == 0) {
    _set_errno(0);
    lVar10 = fwrite(auStackX_10,4,1,*param_1);
    if (lVar10 != 4) {
      piVar13 = (int *)_errno();
      *piVar7 = *piVar13;
    }
  }
  auStackX_10[0] = 0;
  if (*piVar7 == 0) {
    _set_errno(0);
    lVar10 = fwrite(auStackX_10,4,1,*param_1);
    if (lVar10 != 4) {
      piVar13 = (int *)_errno();
      *piVar7 = *piVar13;
    }
  }
  return param_1;
}

