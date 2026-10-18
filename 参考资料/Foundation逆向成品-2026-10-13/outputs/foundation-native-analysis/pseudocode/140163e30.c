
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140163e30(undefined8 param_1,int *param_2,longlong *param_3,longlong *param_4,
                       int *param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  char cVar16;
  longlong unaff_GS_OFFSET;
  undefined8 in_stack_fffffffffffffb08;
  int *piStack_4e8;
  int iStack_4e0;
  undefined8 uStack_4d8;
  int *piStack_4d0;
  int iStack_4c8;
  undefined8 uStack_4c0;
  longlong alStack_4b8 [3];
  ulonglong uStack_4a0;
  int *piStack_498;
  int iStack_490;
  longlong lStack_488;
  int iStack_480;
  int iStack_47c;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_438 [1024];
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffb08 >> 0x20);
  if (*param_3 != 0) {
    func_0x000142a8c94a();
  }
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  iVar1 = *param_2;
  iVar6 = param_2[1];
  *param_6 = iVar6;
  if (iVar1 == 0) {
LAB_140164325:
    return CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
  }
  lStack_488 = func_0x000142a8c944(iVar6);
  if (*param_3 != 0) {
    func_0x000142a8c94a();
  }
  *param_3 = lStack_488;
  iVar6 = *param_6;
  if (lStack_488 != 0) {
    uStack_468 = 0;
    uStack_460 = 0;
    uStack_458 = 0;
    piStack_498 = param_2 + 2;
    iStack_490 = iVar1;
    iStack_480 = iVar6;
    iVar7 = func_0x000141edd010(&piStack_498,"1.3.1",0x58);
    if ((-1 < iVar7) && (iVar7 = FUN_141edb460(&piStack_498,0), -1 < iVar7)) {
      FUN_141edcd00(&piStack_498);
      iVar6 = iStack_47c;
    }
    if (iVar6 == *param_6) {
      *param_4 = *param_3;
      iVar6 = iVar1 + 8;
      *param_5 = iVar6;
      goto LAB_140164325;
    }
    FUN_140142470(auStack_438,0x400,"Invalid uncompressed buffer size (%d found, %d was expected)",
                  iVar6,CONCAT44(uVar5,*param_6));
    if ((_DAT_143fce1a8 <=
         *(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 0x4d0)) || (FUN_142a8cb38(&DAT_143fce1a8), _DAT_143fce1a8 != -1))
    goto LAB_140164178;
    lVar12 = 0;
    piStack_4e8 = (int *)0x0;
    iStack_4e0 = 0;
    uStack_4d8 = 0;
    uVar5 = func_0x000142a93db4(auStack_438);
    piVar8 = (int *)FUN_14016ca40(auStack_438,uVar5,0);
    if (piStack_4e8 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_4e8;
      *piStack_4e8 = *piStack_4e8 + -1;
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
    iStack_4e0 = piVar8[2];
    piStack_4e8 = piVar8;
    uVar9 = FUN_1401493d0(&piStack_4e8,alStack_4b8);
    FUN_140123a80(&piStack_4d0,uVar9);
    if (7 < uStack_4a0) {
      if ((0xfff < uStack_4a0 * 2 + 2) &&
         (0x1f < (alStack_4b8[0] - *(longlong *)(alStack_4b8[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return uVar10;
      }
      func_0x000142a8cbe0();
    }
    if (piStack_4e8 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_4e8;
      *piStack_4e8 = *piStack_4e8 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_4e8 = (int *)0x0;
    uStack_4d8 = 0;
    uVar9 = FUN_14014ef90(&piStack_4d0);
    _DAT_143b003f8 = &UNK_142c77590;
    _DAT_143b00400 = 0x339;
    _DAT_143b00408 = "ComCBinarySerializerReader::readCompressedSerializedData";
    _DAT_143b00418 = 0;
    if (_DAT_143fcd428 == 0) {
      if (DAT_143fcd3f6 == '\0') {
        lVar11 = func_0x000142a8c93e(0x150);
        if (lVar11 != 0) {
          lVar12 = FUN_140127e80(lVar11);
        }
        _DAT_143fcd428 = lVar12;
        if (lVar12 != 0) goto LAB_1401647bf;
        goto LAB_140164851;
      }
LAB_140164856:
      _DAT_143b00418 = _DAT_143fcd540;
    }
    else {
LAB_1401647bf:
      lVar12 = _DAT_143fcd428;
      lVar11 = func_0x000142a93d00(&UNK_142c77590);
      if (lVar11 != 0) {
        for (_DAT_143b00418 = *(longlong *)(lVar12 + 0xf8); _DAT_143b00418 != 0;
            _DAT_143b00418 = *(longlong *)(_DAT_143b00418 + 8 + *(longlong *)(lVar12 + 0xe8))) {
          uVar2 = *(uint *)(_DAT_143b00418 + 0x38);
          if (uVar2 != 0) {
            uVar10 = 0;
            if (uVar2 == 0) goto LAB_140164851;
            while( true ) {
              if (*(longlong *)(_DAT_143b00418 + 0x40) == 0) {
                if ((*(longlong *)(_DAT_143b00418 + 0x30) == 0) || (uVar2 <= (uint)uVar10)) {
                  cVar16 = '\0';
                }
                else {
                  cVar16 = *(char *)(uVar10 + 0xc + *(longlong *)(_DAT_143b00418 + 0x30));
                }
              }
              else {
                cVar16 = *(char *)(uVar10 + *(longlong *)(_DAT_143b00418 + 0x40));
              }
              if ((int)cVar16 != (uint)*(ushort *)(lVar11 + 2 + uVar10 * 2)) break;
              uVar15 = (uint)uVar10 + 1;
              uVar10 = (ulonglong)uVar15;
              if (uVar2 <= uVar15) goto LAB_140164851;
            }
          }
        }
      }
      _DAT_143b00418 = 0;
LAB_140164851:
      if (_DAT_143b00418 == 0) goto LAB_140164856;
    }
    uVar14 = 0;
    auVar4 = ZEXT816(2) * ZEXT416(iStack_4c8 + 1);
    uVar13 = auVar4._0_8_;
    if (auVar4._8_8_ != 0) {
      uVar13 = 0xffffffffffffffff;
    }
    _DAT_143b00410 = func_0x000142a8c944(uVar13);
    func_0x000142a93e7a(_DAT_143b00410,uVar9);
    if (DAT_143fcd3f5 == '\0') {
      uVar14 = FUN_14016cf80(1);
    }
    FUN_140168800(uVar14,&DAT_143b003f0);
    if (piStack_4d0 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_4d0;
      *piStack_4d0 = *piStack_4d0 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        func_0x000142a8c94a();
      }
    }
    FUN_142a8ce10(FUN_142bdc400);
    FUN_142a8cacc(&DAT_143fce1a8);
LAB_140164178:
    lVar12 = _DAT_143b00418;
    LOCK();
    _DAT_143b003f4 = _DAT_143b003f4 + 1;
    UNLOCK();
    if ((_DAT_143fcd430 != 0) && (DAT_143b003f0 != '\0')) {
      piStack_4e8 = (int *)0x0;
      iStack_4e0 = 0;
      uStack_4d8 = 0;
      uVar5 = func_0x000142a93db4(auStack_438);
      piVar8 = (int *)FUN_14016ca40(auStack_438,uVar5,0);
      if (piStack_4e8 != (int *)0x0) {
        LOCK();
        iVar6 = *piStack_4e8;
        *piStack_4e8 = *piStack_4e8 + -1;
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
      iStack_4e0 = piVar8[2];
      piStack_4e8 = piVar8;
      uVar9 = FUN_1401493d0(&piStack_4e8,alStack_4b8);
      FUN_140123a80(&piStack_4d0,uVar9);
      if (7 < uStack_4a0) {
        if ((0xfff < uStack_4a0 * 2 + 2) &&
           (0x1f < (alStack_4b8[0] - *(longlong *)(alStack_4b8[0] + -8)) - 8U)) {
          _invoke_watson(0,0,0,0,0);
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return uVar10;
        }
        func_0x000142a8cbe0();
      }
      uVar9 = FUN_14014ef90(&piStack_4d0);
      iVar6 = FUN_1401757d0(lVar12,&UNK_142c77590,
                            "ComCBinarySerializerReader::readCompressedSerializedData",uVar9,
                            &DAT_143b003f0);
      if (piStack_4d0 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_4d0;
        *piStack_4d0 = *piStack_4d0 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          func_0x000142a8c94a();
        }
      }
      piStack_4d0 = (int *)0x0;
      uStack_4c0 = 0;
      if (piStack_4e8 != (int *)0x0) {
        LOCK();
        iVar1 = *piStack_4e8;
        *piStack_4e8 = *piStack_4e8 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          func_0x000142a8c94a();
        }
      }
      if (iVar6 == 3) {
        exit(0);
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return uVar10;
      }
      if (iVar6 == 4) {
        DebugBreak();
      }
    }
    uVar10 = FUN_140159190(_DAT_143b00418,&UNK_142c77590,0x339,
                           "ComCBinarySerializerReader::readCompressedSerializedData",auStack_438);
    return uVar10 & 0xffffffffffffff00;
  }
  FUN_140142470(auStack_438,0x400,"Can\'t allocate %d bytes",iVar6);
  if ((_DAT_143fce1a4 <=
       *(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               0x4d0)) || (FUN_142a8cb38(&DAT_143fce1a4), _DAT_143fce1a4 != -1)) goto LAB_140163f1d;
  lVar12 = 0;
  piStack_4e8 = (int *)0x0;
  iStack_4e0 = 0;
  uStack_4d8 = 0;
  uVar5 = func_0x000142a93db4(auStack_438);
  piVar8 = (int *)FUN_14016ca40(auStack_438,uVar5,0);
  if (piStack_4e8 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_4e8;
    *piStack_4e8 = *piStack_4e8 + -1;
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
  iStack_4e0 = piVar8[2];
  piStack_4e8 = piVar8;
  uVar9 = FUN_1401493d0(&piStack_4e8,alStack_4b8);
  FUN_140123a80(&piStack_4d0,uVar9);
  if (7 < uStack_4a0) {
    if ((0xfff < uStack_4a0 * 2 + 2) &&
       (0x1f < (alStack_4b8[0] - *(longlong *)(alStack_4b8[0] + -8)) - 8U)) {
      _invoke_watson(0,0,0,0,0);
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return uVar10;
    }
    func_0x000142a8cbe0();
  }
  if (piStack_4e8 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_4e8;
    *piStack_4e8 = *piStack_4e8 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  piStack_4e8 = (int *)0x0;
  uStack_4d8 = 0;
  uVar9 = FUN_14014ef90(&piStack_4d0);
  _DAT_143b003c8 = &UNK_142c77590;
  _DAT_143b003d0 = 0x335;
  _DAT_143b003d8 = "ComCBinarySerializerReader::readCompressedSerializedData";
  _DAT_143b003e8 = 0;
  if (_DAT_143fcd428 == 0) {
    if (DAT_143fcd3f6 == '\0') {
      lVar11 = func_0x000142a8c93e(0x150);
      if (lVar11 != 0) {
        lVar12 = FUN_140127e80(lVar11);
      }
      _DAT_143fcd428 = lVar12;
      if (lVar12 != 0) goto LAB_1401644f5;
      goto LAB_14016458d;
    }
LAB_140164592:
    _DAT_143b003e8 = _DAT_143fcd540;
  }
  else {
LAB_1401644f5:
    lVar12 = _DAT_143fcd428;
    lVar11 = func_0x000142a93d00(&UNK_142c77590);
    if (lVar11 != 0) {
      for (_DAT_143b003e8 = *(longlong *)(lVar12 + 0xf8); _DAT_143b003e8 != 0;
          _DAT_143b003e8 = *(longlong *)(_DAT_143b003e8 + 8 + *(longlong *)(lVar12 + 0xe8))) {
        uVar2 = *(uint *)(_DAT_143b003e8 + 0x38);
        if (uVar2 != 0) {
          uVar10 = 0;
          if (uVar2 == 0) goto LAB_14016458d;
          while( true ) {
            if (*(longlong *)(_DAT_143b003e8 + 0x40) == 0) {
              if ((*(longlong *)(_DAT_143b003e8 + 0x30) == 0) || (uVar2 <= (uint)uVar10)) {
                cVar16 = '\0';
              }
              else {
                cVar16 = *(char *)(uVar10 + 0xc + *(longlong *)(_DAT_143b003e8 + 0x30));
              }
            }
            else {
              cVar16 = *(char *)(uVar10 + *(longlong *)(_DAT_143b003e8 + 0x40));
            }
            if ((int)cVar16 != (uint)*(ushort *)(lVar11 + 2 + uVar10 * 2)) break;
            uVar15 = (uint)uVar10 + 1;
            uVar10 = (ulonglong)uVar15;
            if (uVar2 <= uVar15) goto LAB_14016458d;
          }
        }
      }
    }
    _DAT_143b003e8 = 0;
LAB_14016458d:
    if (_DAT_143b003e8 == 0) goto LAB_140164592;
  }
  uVar14 = 0;
  auVar4 = ZEXT816(2) * ZEXT416(iStack_4c8 + 1);
  uVar13 = auVar4._0_8_;
  if (auVar4._8_8_ != 0) {
    uVar13 = 0xffffffffffffffff;
  }
  _DAT_143b003e0 = func_0x000142a8c944(uVar13);
  func_0x000142a93e7a(_DAT_143b003e0,uVar9);
  if (DAT_143fcd3f5 == '\0') {
    uVar14 = FUN_14016cf80(1);
  }
  FUN_140168800(uVar14,&DAT_143b003c0);
  if (piStack_4d0 != (int *)0x0) {
    LOCK();
    iVar6 = *piStack_4d0;
    *piStack_4d0 = *piStack_4d0 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      func_0x000142a8c94a();
    }
  }
  FUN_142a8ce10(FUN_142bdd600);
  FUN_142a8cacc(&DAT_143fce1a4);
LAB_140163f1d:
  lVar12 = _DAT_143b003e8;
  LOCK();
  _DAT_143b003c4 = _DAT_143b003c4 + 1;
  UNLOCK();
  if ((_DAT_143fcd430 != 0) && (DAT_143b003c0 != '\0')) {
    piStack_4e8 = (int *)0x0;
    iStack_4e0 = 0;
    uStack_4d8 = 0;
    uVar5 = func_0x000142a93db4(auStack_438);
    piVar8 = (int *)FUN_14016ca40(auStack_438,uVar5,0);
    if (piStack_4e8 != (int *)0x0) {
      LOCK();
      iVar6 = *piStack_4e8;
      *piStack_4e8 = *piStack_4e8 + -1;
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
    iStack_4e0 = piVar8[2];
    piStack_4e8 = piVar8;
    uVar9 = FUN_1401493d0(&piStack_4e8,alStack_4b8);
    FUN_140123a80(&piStack_4d0,uVar9);
    if (7 < uStack_4a0) {
      if ((0xfff < uStack_4a0 * 2 + 2) &&
         (0x1f < (alStack_4b8[0] - *(longlong *)(alStack_4b8[0] + -8)) - 8U)) {
        _invoke_watson(0,0,0,0,0);
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return uVar10;
      }
      func_0x000142a8cbe0();
    }
    uVar9 = FUN_14014ef90(&piStack_4d0);
    iVar6 = FUN_1401757d0(lVar12,&UNK_142c77590,
                          "ComCBinarySerializerReader::readCompressedSerializedData",uVar9,
                          &DAT_143b003c0);
    if (piStack_4d0 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_4d0;
      *piStack_4d0 = *piStack_4d0 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    piStack_4d0 = (int *)0x0;
    uStack_4c0 = 0;
    if (piStack_4e8 != (int *)0x0) {
      LOCK();
      iVar1 = *piStack_4e8;
      *piStack_4e8 = *piStack_4e8 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        func_0x000142a8c94a();
      }
    }
    if (iVar6 == 3) {
      exit(0);
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return uVar10;
    }
    if (iVar6 == 4) {
      DebugBreak();
    }
  }
  uVar10 = FUN_140159190(_DAT_143b003e8,&UNK_142c77590,0x335,
                         "ComCBinarySerializerReader::readCompressedSerializedData",auStack_438);
  return uVar10 & 0xffffffffffffff00;
}

