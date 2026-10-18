
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016cfc0(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
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
  
  uVar11 = 0;
  if (_DAT_143fcd440 == 0) goto LAB_14016d1e7;
  FUN_140142470(auStack_428,0x400,"ComCPackageManager singleton already exists");
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               0x4d0) < _DAT_143fce348) && (FUN_142a8cb38(&DAT_143fce348), _DAT_143fce348 == -1)) {
    piStack_478 = (int *)0x0;
    iStack_470 = 0;
    uStack_468 = 0;
    uVar6 = func_0x000142a93db4(auStack_428);
    piVar8 = (int *)FUN_14016ca40(auStack_428,uVar6,0);
    if (piStack_478 != (int *)0x0) {
      LOCK();
      iVar7 = *piStack_478;
      *piStack_478 = *piStack_478 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        func_0x000142a8c94a(piStack_478);
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
      iVar7 = *piStack_478;
      *piStack_478 = *piStack_478 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_478 = (int *)0x0;
    uStack_468 = 0;
    uVar9 = FUN_14014ef90(&piStack_460);
    _DAT_143b00858 = &UNK_142c788f0;
    _DAT_143b00860 = 0x79;
    _DAT_143b00868 = "ComCPackageManager::s_init";
    _DAT_143b00878 = 0;
    if (_DAT_143fcd428 == 0) {
      if (DAT_143fcd3f6 == '\0') {
        lVar10 = func_0x000142a8c93e(0x150);
        uVar12 = uVar11;
        if (lVar10 != 0) {
          uVar12 = FUN_140127e80(lVar10);
        }
        _DAT_143fcd428 = uVar12;
        if (uVar12 != 0) goto LAB_14016d3f3;
        goto LAB_14016d489;
      }
LAB_14016d48e:
      _DAT_143b00878 = _DAT_143fcd540;
    }
    else {
LAB_14016d3f3:
      uVar12 = _DAT_143fcd428;
      lVar10 = func_0x000142a93d00(&UNK_142c788f0,0x5c);
      _DAT_143b00878 = uVar11;
      if (lVar10 != 0) {
        for (uVar3 = *(ulonglong *)(uVar12 + 0xf8); _DAT_143b00878 = uVar11, uVar3 != 0;
            uVar3 = *(ulonglong *)(*(longlong *)(uVar12 + 0xe8) + 8 + uVar3)) {
          uVar2 = *(uint *)(uVar3 + 0x38);
          if (uVar2 != 0) {
            uVar15 = uVar11;
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
              if ((int)cVar16 != (uint)*(ushort *)(lVar10 + 2 + uVar15 * 2)) break;
              uVar14 = (uint)uVar15 + 1;
              uVar15 = (ulonglong)uVar14;
              _DAT_143b00878 = uVar3;
              if (uVar2 <= uVar14) goto LAB_14016d489;
            }
          }
        }
      }
LAB_14016d489:
      if (_DAT_143b00878 == 0) goto LAB_14016d48e;
    }
    auVar5 = ZEXT816(2) * ZEXT416(iStack_458 + 1);
    uVar13 = auVar5._0_8_;
    if (auVar5._8_8_ != 0) {
      uVar13 = 0xffffffffffffffff;
    }
    _DAT_143b00870 = func_0x000142a8c944(uVar13);
    func_0x000142a93e7a(_DAT_143b00870,uVar9);
    uVar12 = uVar11;
    if (DAT_143fcd3f5 == '\0') {
      uVar12 = FUN_14016cf80(1);
    }
    FUN_140168800(uVar12,&DAT_143b00850);
    if (piStack_460 != (int *)0x0) {
      LOCK();
      iVar7 = *piStack_460;
      *piStack_460 = *piStack_460 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        func_0x000142a8c94a();
      }
    }
    FUN_142a8ce10(FUN_142bdae60);
    FUN_142a8cacc(&DAT_143fce348);
  }
  uVar12 = _DAT_143b00878;
  LOCK();
  _DAT_143b00854 = _DAT_143b00854 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b00850 != '\0')) {
    piStack_478 = (int *)0x0;
    iStack_470 = 0;
    uStack_468 = 0;
    uVar6 = func_0x000142a93db4(auStack_428);
    piVar8 = (int *)FUN_14016ca40(auStack_428,uVar6,0);
    if (piStack_478 != (int *)0x0) {
      LOCK();
      iVar7 = *piStack_478;
      *piStack_478 = *piStack_478 + -1;
      UNLOCK();
      if (iVar7 == 1) {
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
    iVar7 = FUN_1401757d0(uVar12,&UNK_142c788f0,"ComCPackageManager::s_init",uVar9,&DAT_143b00850);
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
  FUN_140159190(_DAT_143b00878,&UNK_142c788f0,0x79,"ComCPackageManager::s_init",auStack_428);
LAB_14016d1e7:
  lVar10 = func_0x000142a8c93e(0x28);
  if (lVar10 != 0) {
    uVar11 = FUN_140128ae0(lVar10);
  }
  _DAT_143fcd440 = uVar11;
  return;
}

