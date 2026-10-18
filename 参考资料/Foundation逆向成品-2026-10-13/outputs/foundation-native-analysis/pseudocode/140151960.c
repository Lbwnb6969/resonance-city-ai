
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140151960(longlong *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong *plVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_438 [1024];
  
  piVar4 = (int *)0x0;
  uVar9 = 0;
  cVar2 = FUN_140133de0(6,3,0);
  if (cVar2 == '\0') {
    cVar2 = FUN_140133de0(6,2,0);
    if (cVar2 == '\0') {
      cVar2 = FUN_140133de0(6,1,1);
      if (cVar2 == '\0') {
        cVar2 = FUN_140133de0(6,1,0);
        if (cVar2 == '\0') {
          cVar2 = FUN_140133de0(6,0,2);
          if (cVar2 == '\0') {
            cVar2 = FUN_140133de0(6,0,1);
            if (cVar2 == '\0') {
              cVar2 = FUN_140133de0(6,0,0);
              if (cVar2 == '\0') {
                cVar2 = FUN_140133de0(5,1,3);
                if (cVar2 == '\0') {
                  cVar2 = FUN_140133de0(5,1,2);
                  if (cVar2 == '\0') {
                    cVar2 = FUN_140133de0(5,1,1);
                    if (cVar2 == '\0') {
                      cVar2 = FUN_140133de0(5,1,0);
                      if (cVar2 != '\0') {
                        piVar4 = (int *)FUN_14016ca40("Windows XP",10,0);
                        if (piVar4 != (int *)0x0) {
                          LOCK();
                          *piVar4 = *piVar4 + 1;
                          UNLOCK();
                        }
                        uVar9 = piVar4[2];
                      }
                    }
                    else {
                      piVar4 = (int *)FUN_14016ca40("Windows XP SP1",0xe,0);
                      if (piVar4 != (int *)0x0) {
                        LOCK();
                        *piVar4 = *piVar4 + 1;
                        UNLOCK();
                      }
                      uVar9 = piVar4[2];
                    }
                  }
                  else {
                    piVar4 = (int *)FUN_14016ca40("Windows XP SP2",0xe,0);
                    if (piVar4 != (int *)0x0) {
                      LOCK();
                      *piVar4 = *piVar4 + 1;
                      UNLOCK();
                    }
                    uVar9 = piVar4[2];
                  }
                }
                else {
                  piVar4 = (int *)FUN_14016ca40("Windows XP SP3",0xe,0);
                  if (piVar4 != (int *)0x0) {
                    LOCK();
                    *piVar4 = *piVar4 + 1;
                    UNLOCK();
                  }
                  uVar9 = piVar4[2];
                }
              }
              else {
                piVar4 = (int *)FUN_14016ca40("Windows Vista",0xd,0);
                if (piVar4 != (int *)0x0) {
                  LOCK();
                  *piVar4 = *piVar4 + 1;
                  UNLOCK();
                }
                uVar9 = piVar4[2];
              }
            }
            else {
              piVar4 = (int *)FUN_14016ca40("Windows Vista SP1",0x11,0);
              if (piVar4 != (int *)0x0) {
                LOCK();
                *piVar4 = *piVar4 + 1;
                UNLOCK();
              }
              uVar9 = piVar4[2];
            }
          }
          else {
            piVar4 = (int *)FUN_14016ca40("Windows Vista SP2",0x11,0);
            if (piVar4 != (int *)0x0) {
              LOCK();
              *piVar4 = *piVar4 + 1;
              UNLOCK();
            }
            uVar9 = piVar4[2];
          }
        }
        else {
          piVar4 = (int *)FUN_14016ca40("Windows 7",9,0);
          if (piVar4 != (int *)0x0) {
            LOCK();
            *piVar4 = *piVar4 + 1;
            UNLOCK();
          }
          uVar9 = piVar4[2];
        }
      }
      else {
        piVar4 = (int *)FUN_14016ca40("Windows 7 SP1",0xd,0);
        if (piVar4 != (int *)0x0) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        uVar9 = piVar4[2];
      }
    }
    else {
      piVar4 = (int *)FUN_14016ca40("Windows 8",9,0);
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      uVar9 = piVar4[2];
    }
  }
  else {
    piVar4 = (int *)FUN_14016ca40("Windows 8.1",0xb,0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    uVar9 = piVar4[2];
  }
  if (uVar9 == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = 0;
    piVar5 = (int *)FUN_14016ca40("Windows Unknown",0xf,0);
    piVar7 = (int *)*param_1;
    if (piVar7 != (int *)0x0) {
      LOCK();
      iVar3 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        func_0x000142a8c94a();
      }
      *param_1 = 0;
    }
    *param_1 = (longlong)piVar5;
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*param_1 + 8);
  }
  else {
    uVar10 = uVar9 + 0xb;
    *param_1 = 0;
    param_1[2] = 0;
    if (uVar10 == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    else {
      if (uVar9 < uVar10) {
        uVar10 = uVar9;
      }
      *(uint *)(param_1 + 1) = uVar10;
      if (piVar4 == (int *)0x0) {
        if (uVar9 != 0) {
          FUN_140142470(auStack_438,0x400,"Non-empty string without data");
          if ((*(int *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                       0x4d0) < _DAT_143fce7b0) &&
             (FUN_142a8cb38(&DAT_143fce7b0), _DAT_143fce7b0 == -1)) {
            FUN_140126510(&DAT_143fce780,0,&UNK_142c7b790,0x613,
                          "ComCGenericString<char>::getConstBuffer",auStack_438);
            FUN_142a8ce10(&UNK_142bdba00);
            FUN_142a8cacc(&DAT_143fce7b0);
          }
          LOCK();
          _DAT_143fce784 = _DAT_143fce784 + 1;
          UNLOCK();
          if ((_DAT_143fcd430 != 0) && (DAT_143fce780 != '\0')) {
            iVar3 = FUN_1401758e0(_DAT_143fce7a8,&UNK_142c7b790,
                                  "ComCGenericString<char>::getConstBuffer",auStack_438,
                                  &DAT_143fce780);
            if (iVar3 == 3) {
              exit(0);
              pcVar1 = (code *)swi(3);
              plVar6 = (longlong *)(*pcVar1)();
              return plVar6;
            }
            if (iVar3 == 4) {
              DebugBreak();
            }
          }
          FUN_140159190(_DAT_143fce7a8,&UNK_142c7b790,0x613,
                        "ComCGenericString<char>::getConstBuffer",auStack_438);
        }
        piVar7 = (int *)&UNK_142c76562;
      }
      else {
        piVar7 = piVar4 + 3;
      }
      piVar5 = (int *)FUN_14016ca40(piVar7,uVar10,uVar9 + 0xc);
      piVar7 = (int *)*param_1;
      if (piVar7 != (int *)0x0) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          func_0x000142a8c94a();
        }
        *param_1 = 0;
      }
      *param_1 = (longlong)piVar5;
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
    }
    if (param_1[2] != 0) {
      uVar9 = *(uint *)(param_1 + 1);
      piVar5 = (int *)FUN_14016ca40(param_1[2],uVar9,uVar9 + uVar9 / 3);
      piVar7 = (int *)*param_1;
      if (piVar7 != (int *)0x0) {
        LOCK();
        iVar3 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          func_0x000142a8c94a();
        }
        *param_1 = 0;
      }
      *param_1 = (longlong)piVar5;
      if (piVar5 != (int *)0x0) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
      }
      param_1[2] = 0;
    }
    FUN_14016ae10(param_1,0xb);
    uVar9 = *(uint *)(param_1 + 1);
    uVar8 = *param_1 + 0xc + (ulonglong)uVar9;
    if (param_1[2] != 0) {
      uVar8 = (ulonglong)uVar9;
    }
    strncpy_s(uVar8,*(int *)(*param_1 + 4) - uVar9," or greater",0xb);
    *(int *)(param_1 + 1) = (int)param_1[1] + 0xb;
    *(int *)(*param_1 + 8) = (int)param_1[1];
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      func_0x000142a8c94a(piVar4);
    }
  }
  return param_1;
}

