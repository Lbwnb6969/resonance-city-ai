// VA 0x140486210, PDB extent 738 bytes
// tiny_glade::panic_reporter::panic_screenshot::capture_image
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::panic_screenshot::capture_image
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_screenshot.rs
   Extent: 738 */

longlong * pdb_140486210(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong *puVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_1a0 [136];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  LOCK();
  bVar18 = DAT_143cb2ba8 == 0;
  if (bVar18) {
    DAT_143cb2ba8 = 1;
  }
  UNLOCK();
  if (!bVar18) {
    pdb_142dbd1a0(&DAT_143cb2ba8,param_2,1000000000);
  }
  pdb_140e9a150();
  if (_DAT_143cb2bb0 != 0) {
    fVar20 = SQRT(_DAT_142f5d860 /
                  ((float)(*(uint *)(param_2 + 8) & 0xffff) /
                  (float)(*(uint *)(param_2 + 8) >> 0x10)));
    iVar10 = 0;
    if (0.0 <= fVar20) {
      iVar10 = (int)(longlong)fVar20;
    }
    iVar15 = -1;
    if (fVar20 <= _DAT_142e46a48) {
      iVar15 = iVar10;
    }
    uVar16 = iVar15 + (uint)(iVar15 == 0);
    uVar12 = (uint)(0x38400 / (ulonglong)uVar16) & 0x3fffe;
    if ((0x38400 / (ulonglong)uVar16 & 0x3fffe) != 0) {
      if (0x38400 < (ulonglong)uVar12 * (ulonglong)uVar16) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_142f5d9f9,0x55,&UNK_142f5da50);
      }
      pdb_140e1e250(&uStack_84,_DAT_143cb2bb0,param_1,0x33,&UNK_142f70d08);
      uStack_70 = 0;
      uStack_68 = 8;
      puStack_60 = (undefined *)0x0;
      uVar5 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f717b5,0x2a,&uStack_70);
      pdb_140e291c0(&uStack_118,&UNK_142f717b5,0x2a,uVar5,param_1);
      uStack_58 = param_2;
      puStack_50 = &uStack_84;
      uStack_48 = uVar12;
      uStack_44 = uVar16;
      pdb_1400b9220(auStack_1a0,&uStack_118,&uStack_58);
      pub_142e32760(&uStack_118,auStack_1a0,0x88);
      puStack_50 = (undefined8 *)0x100000001;
      uStack_58 = CONCAT44(uVar16 * uVar12 - (uVar16 * uVar12 >> 1),1);
      pdb_140e28810(&uStack_118,&uStack_58);
      uStack_108 = uStack_74;
      uStack_118 = uStack_84;
      uStack_110 = uStack_7c;
      pdb_140e1e2e0(&uStack_118,param_1,0x23);
      pdb_140e9a350();
      plVar6 = (longlong *)0x1;
      LOCK();
      bVar18 = DAT_143cb2ba8 == 1;
      if (bVar18) {
        DAT_143cb2ba8 = 0;
      }
      else {
        plVar6 = (longlong *)(ulonglong)DAT_143cb2ba8;
      }
      UNLOCK();
      if (bVar18) {
        return plVar6;
      }
      plVar6 = (longlong *)pdb_142dbcef0(&DAT_143cb2ba8,0);
      return plVar6;
    }
  }
  pdb_140e9a350();
  plVar6 = plRam0000000143caeae8;
  plVar7 = (longlong *)0x1;
  LOCK();
  bVar18 = DAT_143cb2ba8 == 1;
  if (bVar18) {
    DAT_143cb2ba8 = 0;
  }
  else {
    plVar7 = (longlong *)(ulonglong)DAT_143cb2ba8;
  }
  UNLOCK();
  if (bVar18) {
    return plVar7;
  }
  while( true ) {
    plVar7 = (longlong *)*plVar6;
    if (plVar7 == (longlong *)0x0) {
      puStack_60 = &UNK_142dbcf8a;
      plVar7 = (longlong *)pdb_142e116d0();
    }
    uVar14 = 0xb78cf4bbef5ff4c8 >> (-(char)plVar7[3] & 0x3fU);
    if ((ulonglong)plVar7[1] <= uVar14) {
                    /* WARNING: Subroutine does not return */
      puStack_60 = &UNK_142dbd191;
      pdb_142dc81f2(uVar14,plVar7[1],&UNK_143220f98);
    }
    puVar1 = (ulonglong *)(*plVar7 + uVar14 * 0x40);
    plVar9 = (longlong *)(*plVar7 + uVar14 * 0x40);
    LOCK();
    bVar18 = *plVar9 == 0;
    if (bVar18) {
      *plVar9 = 1;
    }
    UNLOCK();
    if (!bVar18) {
      puStack_60 = &UNK_142dbcf97;
      pdb_142e11820(puVar1);
    }
    if ((longlong *)*plVar6 == plVar7) break;
    LOCK();
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (3 < uVar14 && (char)(((uint)uVar14 & 2) >> 1) == '\0') {
      puStack_60 = &UNK_142dbcf83;
      pdb_142e11730();
    }
  }
  plVar6 = (longlong *)puVar1[1];
  if (plVar6 == (longlong *)0x0) {
code_r0x000142dbd008:
    DAT_143cb2ba8 = 0;
    LOCK();
    uVar14 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    bVar4 = uVar14 < 4 | (byte)(((uint)uVar14 & 2) >> 1);
    if (bVar4 != 0) {
      return (longlong *)(ulonglong)bVar4;
    }
    plVar6 = (longlong *)*puVar1;
    do {
      if (plVar6 < (longlong *)0x4) {
        return plVar6;
      }
      if (((ulonglong)plVar6 & 2) != 0) {
        return plVar6;
      }
      LOCK();
      plVar7 = (longlong *)*puVar1;
      bVar18 = plVar6 == plVar7;
      if (bVar18) {
        *puVar1 = (ulonglong)plVar6 | 2;
        plVar7 = plVar6;
      }
      UNLOCK();
      plVar9 = plVar6;
      plVar6 = plVar7;
    } while (!bVar18);
    while( true ) {
      while( true ) {
        uVar13 = (ulonglong)plVar9 & 0xfffffffffffffffc;
        plVar6 = *(longlong **)(uVar13 + 0x10);
        uVar14 = uVar13;
        while (plVar6 == (longlong *)0x0) {
          uVar3 = *(ulonglong *)(uVar14 + 0x20);
          *(ulonglong *)(uVar3 + 0x18) = uVar14;
          uVar14 = uVar3;
          plVar6 = *(longlong **)(uVar3 + 0x10);
        }
        *(longlong **)(uVar13 + 0x10) = plVar6;
        if (((ulonglong)plVar9 & 1) == 0) break;
        LOCK();
        plVar6 = (longlong *)*puVar1;
        bVar18 = plVar9 == plVar6;
        if (bVar18) {
          *puVar1 = (ulonglong)plVar9 & 0xfffffffffffffffd;
          plVar6 = plVar9;
        }
        UNLOCK();
        plVar9 = plVar6;
        if (bVar18) {
          return plVar6;
        }
      }
      if (plVar6[3] != 0) break;
      do {
        LOCK();
        plVar7 = (longlong *)*puVar1;
        bVar18 = plVar9 == plVar7;
        if (bVar18) {
          *puVar1 = (ulonglong)((uint)plVar9 & 1);
          plVar7 = plVar9;
        }
        UNLOCK();
        if (bVar18) goto code_r0x000142e117e9;
        plVar9 = plVar7;
      } while (plVar7 < (longlong *)0x4);
    }
    *(longlong *)(uVar13 + 0x10) = plVar6[3];
    LOCK();
    *puVar1 = *puVar1 & 0xfffffffffffffffd;
    UNLOCK();
code_r0x000142e117e9:
    plVar7 = (longlong *)*plVar6;
    plVar6 = plVar6 + 1;
    if (*plVar7 == 0) {
      *plVar6 = 0;
                    /* WARNING: Could not recover jumptable at 0x000142e1181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar6 = (longlong *)(*(code *)plVar7[2])(plVar6);
      return plVar6;
    }
    LOCK();
    lVar8 = *plVar6;
    *plVar6 = 0;
    UNLOCK();
    if (lVar8 != 1) {
      return plVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x000142e1180e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (longlong *)(*(code *)*plVar7)(plVar7[2],plVar6,0,0);
    return plVar6;
  }
  if ((undefined *)plVar6[9] == &DAT_143cb2ba8) {
    puVar11 = puVar1 + 1;
    plVar7 = (longlong *)0x0;
  }
  else {
    do {
      plVar7 = plVar6;
      plVar6 = (longlong *)plVar7[10];
      if (plVar6 == (longlong *)0x0) goto code_r0x000142dbd008;
    } while ((undefined *)plVar6[9] != &DAT_143cb2ba8);
    puVar11 = (ulonglong *)(plVar7 + 10);
  }
  uVar14 = plVar6[10];
  *puVar11 = uVar14;
  if ((longlong *)puVar1[2] == plVar6) {
    puVar1[2] = (ulonglong)plVar7;
  }
  else if (uVar14 != 0) {
    do {
      bVar18 = *(undefined **)(uVar14 + 0x48) == &DAT_143cb2ba8;
      if (bVar18) break;
      uVar14 = *(ulonglong *)(uVar14 + 0x50);
    } while (uVar14 != 0);
    goto code_r0x000142dbd043;
  }
  bVar18 = false;
code_r0x000142dbd043:
  puStack_60 = &UNK_142dbd048;
  uVar14 = pdb_140f3c9d0();
  uVar12 = (uint)puVar11;
  bVar17 = uVar14 < puVar1[3];
  bVar19 = false;
  if (uVar14 == puVar1[3]) {
    bVar17 = uVar12 < (uint)puVar1[4];
    bVar19 = uVar12 == (uint)puVar1[4];
  }
  if (bVar17 || bVar19) {
    if (bVar18) {
      DAT_143cb2ba8 = 2;
    }
    else {
      DAT_143cb2ba8 = 0;
    }
    lVar8 = 0;
  }
  else {
    uVar16 = (uint)puVar1[5] << 0xd ^ (uint)puVar1[5];
    uVar16 = uVar16 >> 0x11 ^ uVar16;
    *(uint *)(puVar1 + 5) = uVar16 << 5 ^ uVar16;
    puStack_60 = &UNK_142dbd096;
    uVar14 = pdb_140f5a1d0();
    puVar1[3] = uVar14;
    *(uint *)(puVar1 + 4) = uVar12;
    lVar8 = 1;
    if (!bVar18) {
      DAT_143cb2ba8 = 1;
    }
  }
  plVar6[0xb] = lVar8;
  plVar7 = (longlong *)*plVar6;
  lVar8 = *plVar7;
  if (lVar8 == 0) {
    plVar7 = plVar7 + 1;
    plVar6[1] = 0;
    plVar6 = plVar6 + 1;
  }
  else {
    LOCK();
    lVar2 = plVar6[1];
    plVar6[1] = 0;
    UNLOCK();
    plVar6 = plVar6 + 1;
    if (lVar2 != 1) {
      plVar6 = (longlong *)0x0;
    }
  }
  LOCK();
  uVar14 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  bVar4 = uVar14 < 4 | (byte)(((uint)uVar14 & 2) >> 1);
  plVar9 = (longlong *)(ulonglong)bVar4;
  if (bVar4 == 0) {
    puStack_60 = &UNK_142dbd165;
    plVar9 = (longlong *)pdb_142e11730(puVar1);
  }
  if (lVar8 != 0) {
    if (plVar6 == (longlong *)0x0) {
      return plVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x000142dbd141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (longlong *)(*(code *)*plVar7)(plVar7[2],plVar6,0,0);
    return plVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dbd17e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar6 = (longlong *)(*(code *)plVar7[1])(plVar6);
  return plVar6;
}

