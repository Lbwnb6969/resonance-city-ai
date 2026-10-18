
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140166160(undefined8 param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong unaff_GS_OFFSET;
  ulonglong uStackX_10;
  undefined8 uStackX_18;
  uint *puStackX_20;
  undefined8 in_stack_fffffffffffffb68;
  int *piStack_488;
  int iStack_480;
  undefined8 uStack_478;
  int *piStack_470;
  int iStack_468;
  undefined8 uStack_460;
  longlong alStack_458 [3];
  ulonglong uStack_440;
  undefined1 auStack_438 [1024];
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffb68 >> 0x20);
  piVar12 = (int *)*param_3;
  puStackX_20 = param_4;
  if (piVar12 != (int *)0x0) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      func_0x000142a8cbe0(*param_3,8);
    }
    *param_3 = 0;
  }
  *param_4 = 0;
  if (*param_2 == 0) {
    return false;
  }
  uStackX_18 = (ulonglong)uStackX_18._4_4_ << 0x20;
  uStackX_10 = uStackX_10 & 0xffffffffffffff00;
  cVar4 = FUN_140168090(param_1,param_2,&uStackX_18,&uStackX_10);
  if (cVar4 == '\0') {
    return false;
  }
  if ((uint)uStackX_18 < 3) goto LAB_1401666ec;
  lVar9 = fread(&uStackX_18,4,1,*param_2);
  uVar14 = uStackX_18;
  param_2[4] = param_2[4] + lVar9;
  if ((uint)uStackX_18 == 0) goto LAB_1401666ec;
  if ((char)uStackX_10 == '\0') {
    *param_4 = (uint)uStackX_18;
    FUN_14016ba90(param_3,uStackX_18 & 0xffffffff);
    uVar14 = fread(*param_3 + 4,1,*param_4,*param_2);
    param_2[4] = param_2[4] + uVar14;
    if ((uVar14 != *param_4) && (piVar12 = (int *)*param_3, piVar12 != (int *)0x0)) {
      LOCK();
      iVar8 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        func_0x000142a8cbe0(*param_3,8);
      }
      *param_3 = 0;
    }
    return uVar14 == *param_4;
  }
  uVar6 = FUN_14011feb0(param_2);
  *param_4 = uVar6;
  uVar10 = func_0x000142a8c944(uVar14 & 0xffffffff);
  uStackX_18 = uVar10;
  uVar11 = fread(uVar10,1,uVar14 & 0xffffffff,*param_2);
  param_2[4] = param_2[4] + uVar11;
  if (uVar11 != (uVar14 & 0xffffffff)) {
    piVar12 = (int *)*param_3;
    if (piVar12 != (int *)0x0) {
      LOCK();
      iVar8 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        func_0x000142a8cbe0(*param_3,8);
      }
      *param_3 = 0;
    }
    if (uVar10 == 0) {
      return false;
    }
    func_0x000142a8c94a(uVar10);
    return false;
  }
  FUN_14016ba90(param_3,*param_4);
  if (*param_3 == 0) {
    FUN_140142470(auStack_438,0x400,"Can\'t allocate %d bytes");
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 0x4d0) < _DAT_143fce198) && (FUN_142a8cb38(&DAT_143fce198), _DAT_143fce198 == -1)
       ) {
      piStack_488 = (int *)0x0;
      iStack_480 = 0;
      uStack_478 = 0;
      uVar7 = func_0x000142a93db4(auStack_438);
      piVar12 = (int *)FUN_14016ca40(auStack_438,uVar7,0);
      if (piStack_488 != (int *)0x0) {
        LOCK();
        iVar8 = *piStack_488;
        *piStack_488 = *piStack_488 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          func_0x000142a8c94a();
        }
      }
      if (piVar12 != (int *)0x0) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        UNLOCK();
      }
      iStack_480 = piVar12[2];
      piStack_488 = piVar12;
      uVar13 = FUN_1401493d0(&piStack_488,alStack_458);
      FUN_140123a80(&piStack_470,uVar13);
      if (7 < uStack_440) {
        if ((0xfff < uStack_440 * 2 + 2) &&
           (0x1f < (alStack_458[0] - *(longlong *)(alStack_458[0] + -8)) - 8U)) {
          _invoke_watson(0,0,0,0,0);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        func_0x000142a8cbe0();
      }
      if (piStack_488 != (int *)0x0) {
        LOCK();
        iVar8 = *piStack_488;
        *piStack_488 = *piStack_488 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          func_0x000142a8c94a();
        }
      }
      piStack_488 = (int *)0x0;
      uStack_478 = 0;
      uVar13 = FUN_14014ef90(&piStack_470);
      _DAT_143b00338 = &UNK_142c77590;
      _DAT_143b00340 = 0xee;
      _DAT_143b00348 = "ComCBinarySerializerReader::readHeader";
      _DAT_143b00358 = 0;
      if (_DAT_143fcd428 == 0) {
        if (DAT_143fcd3f6 == '\0') {
          uStackX_10 = func_0x000142a8c93e(0x150);
          if (uStackX_10 == 0) {
            _DAT_143fcd428 = 0;
          }
          else {
            _DAT_143fcd428 = FUN_140127e80(uStackX_10);
          }
          if (_DAT_143fcd428 != 0) goto LAB_140166c78;
          goto LAB_140166d0d;
        }
LAB_140166d12:
        _DAT_143b00358 = _DAT_143fcd540;
      }
      else {
LAB_140166c78:
        lVar9 = _DAT_143fcd428;
        lVar15 = func_0x000142a93d00(&UNK_142c77590);
        if (lVar15 != 0) {
          for (_DAT_143b00358 = *(longlong *)(lVar9 + 0xf8); _DAT_143b00358 != 0;
              _DAT_143b00358 = *(longlong *)(*(longlong *)(lVar9 + 0xe8) + 8 + _DAT_143b00358)) {
            uVar6 = *(uint *)(_DAT_143b00358 + 0x38);
            if (uVar6 != 0) {
              uVar14 = 0;
              if (uVar6 == 0) goto LAB_140166d0d;
              while( true ) {
                if (*(longlong *)(_DAT_143b00358 + 0x40) == 0) {
                  if ((*(longlong *)(_DAT_143b00358 + 0x30) == 0) || (uVar6 <= (uint)uVar14)) {
                    cVar4 = '\0';
                  }
                  else {
                    cVar4 = *(char *)(uVar14 + 0xc + *(longlong *)(_DAT_143b00358 + 0x30));
                  }
                }
                else {
                  cVar4 = *(char *)(uVar14 + *(longlong *)(_DAT_143b00358 + 0x40));
                }
                if ((int)cVar4 != (uint)*(ushort *)(lVar15 + 2 + uVar14 * 2)) break;
                uVar17 = (uint)uVar14 + 1;
                uVar14 = (ulonglong)uVar17;
                if (uVar6 <= uVar17) goto LAB_140166d0d;
              }
            }
          }
        }
        _DAT_143b00358 = 0;
LAB_140166d0d:
        if (_DAT_143b00358 == 0) goto LAB_140166d12;
      }
      auVar3 = ZEXT816(2) * ZEXT416(iStack_468 + 1);
      uVar16 = auVar3._0_8_;
      if (auVar3._8_8_ != 0) {
        uVar16 = 0xffffffffffffffff;
      }
      _DAT_143b00350 = func_0x000142a8c944(uVar16);
      func_0x000142a93e7a(_DAT_143b00350,uVar13);
      if (DAT_143fcd3f5 == '\0') {
        uVar13 = FUN_14016cf80(1);
      }
      else {
        uVar13 = 0;
      }
      FUN_140168800(uVar13,&DAT_143b00330);
      if (piStack_470 != (int *)0x0) {
        LOCK();
        iVar8 = *piStack_470;
        *piStack_470 = *piStack_470 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          func_0x000142a8c94a();
        }
      }
      FUN_142a8ce10(FUN_142bdc7c0);
      FUN_142a8cacc(&DAT_143fce198);
      param_4 = puStackX_20;
    }
    lVar9 = _DAT_143b00358;
    LOCK();
    _DAT_143b00334 = _DAT_143b00334 + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143b00330 != '\0')) {
      piStack_488 = (int *)0x0;
      iStack_480 = 0;
      uStack_478 = 0;
      uVar7 = func_0x000142a93db4(auStack_438);
      piVar12 = (int *)FUN_14016ca40(auStack_438,uVar7,0);
      if (piStack_488 != (int *)0x0) {
        LOCK();
        iVar8 = *piStack_488;
        *piStack_488 = *piStack_488 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          func_0x000142a8c94a();
        }
      }
      if (piVar12 != (int *)0x0) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        UNLOCK();
      }
      iStack_480 = piVar12[2];
      piStack_488 = piVar12;
      uVar13 = FUN_1401493d0(&piStack_488,alStack_458);
      FUN_140123a80(&piStack_470,uVar13);
      if (7 < uStack_440) {
        if ((0xfff < uStack_440 * 2 + 2) &&
           (0x1f < (alStack_458[0] - *(longlong *)(alStack_458[0] + -8)) - 8U)) {
          _invoke_watson(0,0,0,0,0);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        func_0x000142a8cbe0();
      }
      uVar13 = FUN_14014ef90(&piStack_470);
      iVar8 = FUN_1401757d0(lVar9,&UNK_142c77590,"ComCBinarySerializerReader::readHeader",uVar13,
                            &DAT_143b00330);
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
      if (iVar8 == 3) {
        exit(0);
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (iVar8 == 4) {
        DebugBreak();
      }
    }
    uVar13 = 0xee;
    lVar9 = _DAT_143b00358;
  }
  else {
    uStackX_10 = (ulonglong)*param_4;
    FUN_1401805c0(uVar10,uVar14 & 0xffffffff,*param_3 + 4,&uStackX_10);
    if (uStackX_10 == *param_4) {
      if (uVar10 != 0) {
        func_0x000142a8c94a(uVar10);
      }
      return true;
    }
    FUN_140142470(auStack_438,0x400,"Invalid uncompressed buffer size (%d found, %d was expected)",
                  uStackX_10,CONCAT44(uVar7,*param_4));
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 0x4d0) < _DAT_143fce194) && (FUN_142a8cb38(&DAT_143fce194), _DAT_143fce194 == -1)
       ) {
      piStack_488 = (int *)0x0;
      iStack_480 = 0;
      uStack_478 = 0;
      uVar7 = func_0x000142a93db4(auStack_438);
      piVar12 = (int *)FUN_14016ca40(auStack_438,uVar7,0);
      if (piStack_488 != (int *)0x0) {
        LOCK();
        iVar8 = *piStack_488;
        *piStack_488 = *piStack_488 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          func_0x000142a8c94a();
        }
      }
      if (piVar12 != (int *)0x0) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        UNLOCK();
      }
      iStack_480 = piVar12[2];
      piStack_488 = piVar12;
      uVar13 = FUN_1401493d0(&piStack_488,alStack_458);
      FUN_140123a80(&piStack_470,uVar13);
      if (7 < uStack_440) {
        if ((0xfff < uStack_440 * 2 + 2) &&
           (0x1f < (alStack_458[0] - *(longlong *)(alStack_458[0] + -8)) - 8U)) {
          _invoke_watson(0,0,0,0,0);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        func_0x000142a8cbe0();
      }
      if (piStack_488 != (int *)0x0) {
        LOCK();
        iVar8 = *piStack_488;
        *piStack_488 = *piStack_488 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          func_0x000142a8c94a();
        }
      }
      piStack_488 = (int *)0x0;
      uStack_478 = 0;
      uVar13 = FUN_14014ef90(&piStack_470);
      _DAT_143b00308 = &UNK_142c77590;
      _DAT_143b00310 = 0xe9;
      _DAT_143b00318 = "ComCBinarySerializerReader::readHeader";
      _DAT_143b00328 = 0;
      if (_DAT_143fcd428 == 0) {
        if (DAT_143fcd3f6 == '\0') {
          uStackX_10 = func_0x000142a8c93e(0x150);
          if (uStackX_10 == 0) {
            _DAT_143fcd428 = 0;
          }
          else {
            _DAT_143fcd428 = FUN_140127e80(uStackX_10);
          }
          if (_DAT_143fcd428 != 0) goto LAB_14016699f;
          goto LAB_140166a2d;
        }
LAB_140166a32:
        _DAT_143b00328 = _DAT_143fcd540;
      }
      else {
LAB_14016699f:
        lVar9 = _DAT_143fcd428;
        lVar15 = func_0x000142a93d00(&UNK_142c77590);
        if (lVar15 != 0) {
          for (_DAT_143b00328 = *(longlong *)(lVar9 + 0xf8); _DAT_143b00328 != 0;
              _DAT_143b00328 = *(longlong *)(*(longlong *)(lVar9 + 0xe8) + 8 + _DAT_143b00328)) {
            uVar6 = *(uint *)(_DAT_143b00328 + 0x38);
            if (uVar6 != 0) {
              uVar14 = 0;
              if (uVar6 == 0) goto LAB_140166a2d;
              while( true ) {
                if (*(longlong *)(_DAT_143b00328 + 0x40) == 0) {
                  if ((*(longlong *)(_DAT_143b00328 + 0x30) == 0) || (uVar6 <= (uint)uVar14)) {
                    cVar4 = '\0';
                  }
                  else {
                    cVar4 = *(char *)(uVar14 + 0xc + *(longlong *)(_DAT_143b00328 + 0x30));
                  }
                }
                else {
                  cVar4 = *(char *)(uVar14 + *(longlong *)(_DAT_143b00328 + 0x40));
                }
                if ((int)cVar4 != (uint)*(ushort *)(lVar15 + 2 + uVar14 * 2)) break;
                uVar17 = (uint)uVar14 + 1;
                uVar14 = (ulonglong)uVar17;
                if (uVar6 <= uVar17) goto LAB_140166a2d;
              }
            }
          }
        }
        _DAT_143b00328 = 0;
LAB_140166a2d:
        if (_DAT_143b00328 == 0) goto LAB_140166a32;
      }
      auVar3 = ZEXT816(2) * ZEXT416(iStack_468 + 1);
      uVar16 = auVar3._0_8_;
      if (auVar3._8_8_ != 0) {
        uVar16 = 0xffffffffffffffff;
      }
      _DAT_143b00320 = func_0x000142a8c944(uVar16);
      func_0x000142a93e7a(_DAT_143b00320,uVar13);
      if (DAT_143fcd3f5 == '\0') {
        uVar13 = FUN_14016cf80(1);
      }
      else {
        uVar13 = 0;
      }
      FUN_140168800(uVar13,&DAT_143b00300);
      if (piStack_470 != (int *)0x0) {
        LOCK();
        iVar8 = *piStack_470;
        *piStack_470 = *piStack_470 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          func_0x000142a8c94a();
        }
      }
      FUN_142a8ce10(FUN_142bdc220);
      FUN_142a8cacc(&DAT_143fce194);
      param_4 = puStackX_20;
    }
    lVar9 = _DAT_143b00328;
    LOCK();
    _DAT_143b00304 = _DAT_143b00304 + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143b00300 != '\0')) {
      piStack_488 = (int *)0x0;
      iStack_480 = 0;
      uStack_478 = 0;
      uVar7 = func_0x000142a93db4(auStack_438);
      piVar12 = (int *)FUN_14016ca40(auStack_438,uVar7,0);
      if (piStack_488 != (int *)0x0) {
        LOCK();
        iVar8 = *piStack_488;
        *piStack_488 = *piStack_488 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          func_0x000142a8c94a();
        }
      }
      if (piVar12 != (int *)0x0) {
        LOCK();
        *piVar12 = *piVar12 + 1;
        UNLOCK();
      }
      iStack_480 = piVar12[2];
      piStack_488 = piVar12;
      uVar13 = FUN_1401493d0(&piStack_488,alStack_458);
      FUN_140123a80(&piStack_470,uVar13);
      if (7 < uStack_440) {
        if ((0xfff < uStack_440 * 2 + 2) &&
           (0x1f < (alStack_458[0] - *(longlong *)(alStack_458[0] + -8)) - 8U)) {
          _invoke_watson(0,0,0,0,0);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        func_0x000142a8cbe0();
      }
      uVar13 = FUN_14014ef90(&piStack_470);
      iVar8 = FUN_1401757d0(lVar9,&UNK_142c77590,"ComCBinarySerializerReader::readHeader",uVar13,
                            &DAT_143b00300);
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
      if (iVar8 == 3) {
        exit(0);
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (iVar8 == 4) {
        DebugBreak();
        uVar13 = 0xe9;
        lVar9 = _DAT_143b00328;
        goto LAB_1401666c3;
      }
    }
    uVar13 = 0xe9;
    lVar9 = _DAT_143b00328;
  }
LAB_1401666c3:
  FUN_140159190(lVar9,&UNK_142c77590,uVar13,"ComCBinarySerializerReader::readHeader",auStack_438);
  if (uVar10 != 0) {
    func_0x000142a8c94a(uVar10);
  }
LAB_1401666ec:
  piVar12 = (int *)*param_3;
  if (piVar12 != (int *)0x0) {
    LOCK();
    iVar8 = *piVar12;
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      func_0x000142a8cbe0(*param_3,8);
    }
    *param_3 = 0;
  }
  *param_4 = 0;
  return false;
}

