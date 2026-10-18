
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401708d0(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  uint **ppuVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  int *piVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong unaff_GS_OFFSET;
  char acStackX_10 [8];
  undefined8 uStackX_18;
  char acStackX_20 [8];
  char acStack_534 [4];
  undefined4 uStack_530;
  int *piStack_528;
  uint uStack_520;
  longlong lStack_518;
  undefined4 uStack_510;
  undefined8 uStack_50c;
  ulonglong uStack_500;
  uint *puStack_4f8;
  uint uStack_4f0;
  uint *puStack_4e8;
  uint uStack_4e0;
  int iStack_4dc;
  int iStack_4d8;
  uint uStack_4d4;
  uint uStack_4d0;
  int iStack_4cc;
  undefined8 uStack_4c8;
  int *piStack_4c0;
  undefined4 uStack_4b8;
  undefined8 uStack_4b0;
  longlong *plStack_4a8;
  undefined8 uStack_4a0;
  longlong lStack_498;
  undefined8 *puStack_490;
  longlong *plStack_488;
  longlong lStack_480;
  undefined8 uStack_478;
  int *apiStack_470 [3];
  undefined1 auStack_458 [16];
  undefined1 auStack_448 [1032];
  
  uStack_530 = 0;
  uVar16 = *param_2;
  if ((int)uVar16 != 0) {
    plStack_488 = (longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
    uStackX_18 = param_3;
    do {
      puVar10 = (uint *)0x0;
      plVar13 = *(longlong **)(param_1 + 0x18);
      puVar1 = (undefined8 *)*plVar13;
      uStack_500 = uVar16 & 0xffffffff;
      puVar1[4] = uStack_500;
      uStack_4c8 = uVar16;
      _fseeki64(*puVar1,uStack_500 + puVar1[3],0);
      puStack_4f8 = (uint *)0x0;
      uStack_4f0 = 0;
      puStack_4e8 = (uint *)0x0;
      uStack_530 = 1;
      puVar1 = (undefined8 *)*plVar13;
      lVar6 = fread(&uStack_510,4,1,*puVar1);
      puVar1[4] = puVar1[4] + lVar6;
      ppuVar7 = (uint **)FUN_1401235f0(&piStack_528,0x20,uStack_510);
      uVar19 = *(uint *)(ppuVar7 + 1);
      if (&puStack_4f8 != ppuVar7) {
        puVar10 = *ppuVar7;
        *ppuVar7 = (uint *)0x0;
        puStack_4f8 = puVar10;
      }
      puVar2 = ppuVar7[2];
      *(undefined4 *)(ppuVar7 + 1) = 0;
      ppuVar7[2] = (uint *)0x0;
      uStack_4f0 = uVar19;
      puStack_4e8 = puVar2;
      if (piStack_528 != (int *)0x0) {
        LOCK();
        iVar14 = *piStack_528;
        *piStack_528 = *piStack_528 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          func_0x000142a8c94a();
        }
      }
      puVar9 = puVar2;
      if (puVar2 == (uint *)0x0) {
        if (puVar10 == (uint *)0x0) {
          if (uVar19 != 0) {
            FUN_140142470(auStack_448,0x400,"Non-empty string without data");
            if ((*(int *)(*plStack_488 + 0x4d0) < _DAT_143fce7b0) &&
               (FUN_142a8cb38(&DAT_143fce7b0), _DAT_143fce7b0 == -1)) {
              FUN_140126510(&DAT_143fce780,0,&UNK_142c7b790,0x613,
                            "ComCGenericString<char>::getConstBuffer",auStack_448);
              FUN_142a8ce10(&UNK_142bdba00);
              FUN_142a8cacc(&DAT_143fce7b0);
            }
            LOCK();
            _DAT_143fce784 = _DAT_143fce784 + 1;
            UNLOCK();
            if ((_DAT_143fcd430 != 0) && (DAT_143fce780 != '\0')) {
              iVar14 = FUN_1401758e0(_DAT_143fce7a8,&UNK_142c7b790,
                                     "ComCGenericString<char>::getConstBuffer",auStack_448,
                                     &DAT_143fce780);
              if (iVar14 == 3) {
                exit(0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (iVar14 == 4) {
                DebugBreak();
              }
            }
            FUN_140159190(_DAT_143fce7a8,&UNK_142c7b790,0x613,
                          "ComCGenericString<char>::getConstBuffer",auStack_448);
          }
          puVar9 = (uint *)&UNK_142c76562;
        }
        else {
          puVar9 = puVar10 + 3;
        }
      }
      uVar8 = fread(puVar9,1,uStack_510,*puVar1);
      puVar1[4] = puVar1[4] + uVar8;
      uVar5 = (uint)uVar8;
      uVar17 = uStack_4f0;
      if (uVar5 != uVar19) {
        puVar9 = puVar10;
        if (puVar2 != (uint *)0x0) {
          puVar9 = (uint *)FUN_14016ca40(puVar2,uVar19,uVar19 + uVar19 / 3);
          if (puVar10 != (uint *)0x0) {
            LOCK();
            uVar17 = *puVar10;
            *puVar10 = *puVar10 - 1;
            UNLOCK();
            if (uVar17 == 1) {
              func_0x000142a8c94a(puVar10);
            }
          }
          if (puVar9 != (uint *)0x0) {
            LOCK();
            *puVar9 = *puVar9 + 1;
            UNLOCK();
          }
          puStack_4e8 = (uint *)0x0;
          puStack_4f8 = puVar9;
        }
        if ((puVar9 == (uint *)0x0) || (*puVar9 < 2)) {
          puVar10 = puVar9;
          if (uVar19 < uVar5) {
            FUN_14016ae10(&puStack_4f8,uVar5 - uVar19);
            puVar10 = puStack_4f8;
            uVar19 = uStack_4f0;
          }
        }
        else {
          uVar15 = uVar8 & 0xffffffff;
          if (uVar19 < uVar5) {
            uVar15 = (ulonglong)uVar19;
          }
          puVar10 = (uint *)FUN_14016ca40(puVar9 + 3,uVar15,uVar5 + 1);
          LOCK();
          uVar17 = *puVar9;
          *puVar9 = *puVar9 - 1;
          UNLOCK();
          if (uVar17 == 1) {
            func_0x000142a8c94a(puVar9);
          }
          puStack_4f8 = puVar10;
          if (puVar10 != (uint *)0x0) {
            LOCK();
            *puVar10 = *puVar10 + 1;
            UNLOCK();
          }
        }
        puVar10[2] = uVar5;
        *(undefined1 *)((uVar8 & 0xffffffff) + 0xc + (longlong)puVar10) = 0;
        uVar17 = uVar5;
        if (uVar19 < uVar5) {
          func_0x000142a93ce8((ulonglong)uVar19 + 0xc + (longlong)puVar10,0x20,uVar5 - uVar19);
        }
      }
      uStack_4f0 = uVar17;
      FUN_14012fa30(uStackX_18,apiStack_470,&puStack_4f8);
      uStack_530 = 0;
      if (puVar10 != (uint *)0x0) {
        LOCK();
        uVar19 = *puVar10;
        *puVar10 = *puVar10 - 1;
        UNLOCK();
        if (uVar19 == 1) {
          func_0x000142a8c94a(puVar10);
        }
      }
      plVar3 = *(longlong **)(param_1 + 0x18);
      puVar1 = (undefined8 *)*plVar3;
      uVar8 = uVar16 & 0xffffffff;
      puVar1[4] = uVar8;
      _fseeki64(*puVar1,puVar1[3] + uVar8,0);
      puVar1 = (undefined8 *)*plVar3;
      lVar6 = fread(&uStack_4e0,4,1,*puVar1);
      plVar13 = puVar1 + 4;
      *plVar13 = *plVar13 + lVar6;
      puVar1 = (undefined8 *)*plVar3;
      plVar13 = puVar1 + 4;
      *plVar13 = *plVar13 + (ulonglong)uStack_4e0;
      _fseeki64(*puVar1,(ulonglong)uStack_4e0,1);
      puVar1 = (undefined8 *)*plVar3;
      lVar6 = fread(acStackX_10,1,1,*puVar1);
      plVar13 = puVar1 + 4;
      *plVar13 = *plVar13 + lVar6;
      if (acStackX_10[0] == '\0') {
        plVar3 = *(longlong **)(param_1 + 0x18);
        puVar1 = (undefined8 *)*plVar3;
        puVar1[4] = uVar8;
        _fseeki64(*puVar1,puVar1[3] + uVar8,0);
        puVar1 = (undefined8 *)*plVar3;
        lVar6 = fread(&uStack_4d4,4,1,*puVar1);
        plVar13 = puVar1 + 4;
        *plVar13 = *plVar13 + lVar6;
        puVar1 = (undefined8 *)*plVar3;
        plVar13 = puVar1 + 4;
        *plVar13 = *plVar13 + (ulonglong)uStack_4d4;
        _fseeki64(*puVar1,(ulonglong)uStack_4d4,1);
        puVar1 = (undefined8 *)*plVar3;
        lVar6 = fread(acStackX_20,1,1,*puVar1);
        plVar13 = puVar1 + 4;
        *plVar13 = *plVar13 + lVar6;
        if (acStackX_20[0] == '\0') {
          puVar1 = (undefined8 *)*plVar3;
          lVar6 = fread(&lStack_480,8,1,*puVar1);
          plVar13 = puVar1 + 4;
          *plVar13 = *plVar13 + lVar6;
          lVar18 = (ulonglong)*(uint *)((longlong)plVar3 + 0x24) + lStack_480;
          puVar1 = (undefined8 *)*plVar3;
          lVar6 = fread(&uStack_478,8,1,*puVar1);
          plVar13 = puVar1 + 4;
          *plVar13 = *plVar13 + lVar6;
          uStack_4a0 = uStack_478;
          plStack_4a8 = plVar3;
          lStack_498 = lVar18;
        }
        else {
          plStack_4a8 = (longlong *)0x0;
          uStack_4a0 = 0;
          lStack_498 = 0;
        }
        puStack_490 = (undefined8 *)0x0;
        uStack_4b0 = 0;
        uStack_4b8 = 0;
        piStack_4c0 = (int *)0x0;
        plVar13 = (longlong *)FUN_14011b600(param_1 + 0x20,auStack_458);
        FUN_14012e9d0(*plVar13 + 0x28,&piStack_4c0);
        if (puStack_490 != (undefined8 *)0x0) {
          (**(code **)*puStack_490)(puStack_490,1);
        }
        uVar8 = uStack_500;
        if (piStack_4c0 != (int *)0x0) {
          LOCK();
          iVar14 = *piStack_4c0;
          *piStack_4c0 = *piStack_4c0 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            func_0x000142a8c94a();
            uVar8 = uStack_500;
          }
        }
      }
      else {
        uVar19 = (uint)apiStack_470[1];
        uVar17 = uVar19 + 1;
        piStack_528 = (int *)0x0;
        lStack_518 = 0;
        if (uVar17 == 0) {
          uStack_520 = 0;
        }
        else {
          if (uVar19 < uVar17) {
            uVar17 = uVar19;
          }
          uStack_520 = uVar17;
          uVar11 = FUN_14014ee10(apiStack_470);
          piVar12 = (int *)FUN_14016ca40(uVar11,uVar17,uVar19 + 2);
          if (piStack_528 != (int *)0x0) {
            LOCK();
            iVar14 = *piStack_528;
            *piStack_528 = *piStack_528 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              func_0x000142a8c94a();
            }
          }
          piStack_528 = piVar12;
          if (piVar12 != (int *)0x0) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
          }
        }
        uStack_530 = 2;
        if (lStack_518 != 0) {
          piVar12 = (int *)FUN_14016ca40(lStack_518,uStack_520,
                                         (ulonglong)uStack_520 * 0x2aaaaaaab >> 0x21);
          if (piStack_528 != (int *)0x0) {
            LOCK();
            iVar14 = *piStack_528;
            *piStack_528 = *piStack_528 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              func_0x000142a8c94a();
            }
          }
          if (piVar12 != (int *)0x0) {
            LOCK();
            *piVar12 = *piVar12 + 1;
            UNLOCK();
          }
          lStack_518 = 0;
          piStack_528 = piVar12;
        }
        FUN_14016ae10(&piStack_528,1);
        piVar12 = piStack_528 + 3;
        if (lStack_518 != 0) {
          piVar12 = (int *)0x0;
        }
        strncpy_s((longlong)piVar12 + (ulonglong)uStack_520,piStack_528[1] - uStack_520,
                  &UNK_142c7722c,1);
        uVar8 = uStack_500;
        uStack_520 = uStack_520 + 1;
        piStack_528[2] = uStack_520;
        plVar3 = *(longlong **)(param_1 + 0x18);
        uStack_50c = 0;
        puVar1 = (undefined8 *)*plVar3;
        puVar1[4] = uStack_500;
        _fseeki64(*puVar1,puVar1[3] + uStack_500,0);
        puVar1 = (undefined8 *)*plVar3;
        lVar6 = fread(&iStack_4dc,4,1,*puVar1);
        iVar14 = iStack_4dc;
        plVar13 = puVar1 + 4;
        *plVar13 = *plVar13 + lVar6;
        puVar1 = (undefined8 *)*plVar3;
        plVar13 = puVar1 + 4;
        *plVar13 = *plVar13 + (ulonglong)(iStack_4dc + 1);
        _fseeki64(*puVar1,(ulonglong)(iStack_4dc + 1),1);
        puVar1 = (undefined8 *)*plVar3;
        lVar6 = fread(&iStack_4d8,4,1,*puVar1);
        plVar13 = puVar1 + 4;
        *plVar13 = *plVar13 + lVar6;
        if (iStack_4d8 != 0) {
          uStack_50c = CONCAT44(iStack_4d8 + -1,iVar14 + 0xd + (int)uVar16);
        }
        FUN_1401708d0(param_1,&uStack_50c);
        if (piStack_528 != (int *)0x0) {
          LOCK();
          iVar14 = *piStack_528;
          *piStack_528 = *piStack_528 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            func_0x000142a8c94a();
          }
        }
      }
      if (apiStack_470[0] != (int *)0x0) {
        LOCK();
        iVar14 = *apiStack_470[0];
        *apiStack_470[0] = *apiStack_470[0] + -1;
        UNLOCK();
        if (iVar14 == 1) {
          func_0x000142a8c94a();
        }
      }
      plVar13 = *(longlong **)(param_1 + 0x18);
      if ((int)(uVar16 >> 0x20) == 0) {
        uVar16 = 0;
      }
      else {
        puVar1 = (undefined8 *)*plVar13;
        puVar1[4] = uVar8;
        _fseeki64(*puVar1,puVar1[3] + uVar8,0);
        puVar1 = (undefined8 *)*plVar13;
        lVar6 = fread(&uStack_4d0,4,1,*puVar1);
        uVar19 = uStack_4d0;
        plVar3 = puVar1 + 4;
        *plVar3 = *plVar3 + lVar6;
        puVar1 = (undefined8 *)*plVar13;
        plVar3 = puVar1 + 4;
        *plVar3 = *plVar3 + (ulonglong)uStack_4d0;
        _fseeki64(*puVar1,(ulonglong)uStack_4d0,1);
        puVar1 = (undefined8 *)*plVar13;
        lVar6 = fread(acStack_534,1,1,*puVar1);
        plVar3 = puVar1 + 4;
        *plVar3 = *plVar3 + lVar6;
        if (acStack_534[0] == '\0') {
          iVar14 = uVar19 + 0x15 + (int)uVar16;
        }
        else {
          puVar1 = (undefined8 *)*plVar13;
          plVar3 = puVar1 + 4;
          *plVar3 = *plVar3 + 4;
          _fseeki64(*puVar1,4,1);
          puVar1 = (undefined8 *)*plVar13;
          lVar6 = fread(&iStack_4cc,4,1,*puVar1);
          plVar13 = puVar1 + 4;
          *plVar13 = *plVar13 + lVar6;
          iVar14 = iStack_4cc;
        }
        uVar16 = CONCAT44(uStack_4c8._4_4_ + -1,iVar14);
      }
    } while ((int)uVar16 != 0);
  }
  return;
}

