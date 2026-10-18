// VA 0x14083e730, PDB extent 783 bytes
// system_wall_constructor::construct_elevation_supports::detect_overhang_support_segments::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_elevation_supports::detect_overhang_support_segments::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_elevation_supports/mod.rs
   Extent: 783 */

void pdb_14083e730(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  char *pcVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined8 uStack_38;
  ulonglong *puVar14;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar7 = (undefined8 *)pdb_1413e4400(param_1,&UNK_1433056b0);
  if ((puVar7 == (undefined8 *)0x0) ||
     (lVar8 = (**(code **)(puVar7[1] + 0x18))(*puVar7), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300abe8);
  }
  lVar5 = *(longlong *)(param_2 + 0x140);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  lVar9 = lVar5 + 0x18;
  LOCK();
  bVar21 = *(char *)(lVar5 + 0x18) == '\0';
  if (bVar21) {
    *(char *)(lVar5 + 0x18) = '\x01';
  }
  UNLOCK();
  if (bVar21) {
    pdb_140e9a150(lVar9);
    lVar9 = *(longlong *)(lVar5 + 0x10);
    if (lVar9 == 0) goto LAB_14083e7ee;
LAB_14083e7aa:
    piVar10 = (int *)(*(longlong *)(lVar5 + 8) + lVar9 * 4 + -4);
    if (piVar10 == (int *)0x0) goto LAB_14083e7ee;
    iStack_40 = *piVar10;
    lStack_90 = *(longlong *)(lVar8 + 0x10);
  }
  else {
    pdb_142dbd1a0(lVar9,1,1000000000);
    pdb_140e9a150(lVar9);
    lVar9 = *(longlong *)(lVar5 + 0x10);
    if (lVar9 != 0) goto LAB_14083e7aa;
LAB_14083e7ee:
    lStack_90 = *(longlong *)(lVar8 + 0x10);
    if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_40 = (int)lStack_90 + -1;
  }
  uStack_98 = *(undefined8 *)(lVar8 + 8);
  uStack_88 = *(undefined4 *)(lVar8 + 0x18);
  uStack_84 = *(undefined4 *)(lVar8 + 0x1c);
  uStack_80 = *(undefined4 *)(lVar8 + 0x20);
  uStack_7c = *(undefined4 *)(lVar8 + 0x24);
  uStack_70 = *(undefined4 *)(lVar8 + 0x28);
  uStack_6c = *(undefined4 *)(lVar8 + 0x2c);
  uStack_68 = *(undefined4 *)(lVar8 + 0x30);
  uStack_64 = *(undefined4 *)(lVar8 + 0x34);
  puStack_60 = (undefined *)(lVar8 + 0x78);
  lStack_58 = lVar8 + 0x58;
  uStack_50 = *(undefined4 *)(lVar8 + 0x38);
  uStack_4c = *(undefined4 *)(lVar8 + 0x3c);
  uStack_48 = *(undefined4 *)(lVar8 + 0x40);
  uStack_44 = *(undefined4 *)(lVar8 + 0x44);
  lStack_78 = lVar5;
  pdb_1413f7bd0(&uStack_98);
  puVar7 = (undefined8 *)pdb_1413e4400(param_1,&UNK_1433056c0);
  if ((puVar7 == (undefined8 *)0x0) ||
     (lVar8 = (**(code **)(puVar7[1] + 0x18))(*puVar7), lVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300ac00);
  }
  lVar5 = *(longlong *)(param_2 + 0x150);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  LOCK();
  bVar21 = *(char *)(lVar5 + 0x18) == '\0';
  if (bVar21) {
    *(char *)(lVar5 + 0x18) = '\x01';
  }
  UNLOCK();
  if (!bVar21) {
    pdb_142dbd1a0(lVar5 + 0x18,1,1000000000);
  }
  pdb_140e9a150(lVar5 + 0x18);
  if ((*(longlong *)(lVar5 + 0x10) == 0) ||
     (piVar10 = (int *)(*(longlong *)(lVar5 + 8) + *(longlong *)(lVar5 + 0x10) * 4 + -4),
     piVar10 == (int *)0x0)) {
    lStack_f0 = *(longlong *)(lVar8 + 0x10);
    if (lStack_f0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_a0 = (int)lStack_f0 + -1;
  }
  else {
    iStack_a0 = *piVar10;
    lStack_f0 = *(longlong *)(lVar8 + 0x10);
  }
  uStack_f8 = *(undefined8 *)(lVar8 + 8);
  uStack_e8 = *(undefined4 *)(lVar8 + 0x18);
  uStack_e4 = *(undefined4 *)(lVar8 + 0x1c);
  uStack_e0 = *(undefined4 *)(lVar8 + 0x20);
  uStack_dc = *(undefined4 *)(lVar8 + 0x24);
  uStack_d0 = *(undefined4 *)(lVar8 + 0x28);
  uStack_cc = *(undefined4 *)(lVar8 + 0x2c);
  uStack_c8 = *(undefined4 *)(lVar8 + 0x30);
  uStack_c4 = *(undefined4 *)(lVar8 + 0x34);
  lStack_c0 = lVar8 + 0x78;
  lStack_b8 = lVar8 + 0x58;
  uStack_b0 = *(undefined4 *)(lVar8 + 0x38);
  uStack_ac = *(undefined4 *)(lVar8 + 0x3c);
  uStack_a8 = *(undefined4 *)(lVar8 + 0x40);
  uStack_a4 = *(undefined4 *)(lVar8 + 0x44);
  lStack_d8 = lVar5;
  pdb_1413f7bd0(&uStack_f8);
  pcVar15 = (char *)(lStack_d8 + 0x18);
  pdb_140e9a350();
  LOCK();
  cVar4 = *pcVar15;
  if (cVar4 == '\x01') {
    *pcVar15 = '\0';
  }
  UNLOCK();
  if (cVar4 != '\x01') {
    pdb_142dbcef0(pcVar15);
  }
  lVar8 = lStack_78;
  puVar1 = (undefined1 *)(lStack_78 + 0x18);
  pdb_140e9a350();
  LOCK();
  bVar21 = *(char *)(lVar8 + 0x18) == '\x01';
  if (bVar21) {
    *(char *)(lVar8 + 0x18) = '\0';
  }
  plVar16 = plRam0000000143caeae8;
  UNLOCK();
  if (bVar21) {
    return;
  }
  while( true ) {
    plVar11 = (longlong *)*plVar16;
    if (plVar11 == (longlong *)0x0) {
      puStack_60 = &UNK_142dbcf8a;
      plVar11 = (longlong *)pdb_142e116d0();
    }
    uVar19 = (ulonglong)((longlong)puVar1 * -0x61c8864680b583eb) >> (-(char)plVar11[3] & 0x3fU);
    if ((ulonglong)plVar11[1] <= uVar19) {
                    /* WARNING: Subroutine does not return */
      puStack_60 = &UNK_142dbd191;
      pdb_142dc81f2(uVar19,plVar11[1],&UNK_143220f98);
    }
    puVar2 = (ulonglong *)(*plVar11 + uVar19 * 0x40);
    plVar3 = (longlong *)(*plVar11 + uVar19 * 0x40);
    LOCK();
    bVar21 = *plVar3 == 0;
    if (bVar21) {
      *plVar3 = 1;
    }
    UNLOCK();
    if (!bVar21) {
      puStack_60 = &UNK_142dbcf97;
      pdb_142e11820(puVar2);
    }
    if ((longlong *)*plVar16 == plVar11) break;
    LOCK();
    uVar19 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (3 < uVar19 && (char)(((uint)uVar19 & 2) >> 1) == '\0') {
      puStack_60 = &UNK_142dbcf83;
      pdb_142e11730();
    }
  }
  plVar16 = (longlong *)puVar2[1];
  if (plVar16 == (longlong *)0x0) {
code_r0x000142dbd008:
    *puVar1 = 0;
    LOCK();
    uVar19 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar19 < 4 || (char)(((uint)uVar19 & 2) >> 1) != '\0') {
      return;
    }
    uVar19 = *puVar2;
    do {
      if (uVar19 < 4) {
        return;
      }
      if ((uVar19 & 2) != 0) {
        return;
      }
      LOCK();
      uVar18 = *puVar2;
      bVar21 = uVar19 == uVar18;
      if (bVar21) {
        *puVar2 = uVar19 | 2;
        uVar18 = uVar19;
      }
      UNLOCK();
      uVar12 = uVar19;
      uVar19 = uVar18;
    } while (!bVar21);
    while( true ) {
      while( true ) {
        uVar18 = uVar12 & 0xfffffffffffffffc;
        plVar16 = *(longlong **)(uVar18 + 0x10);
        uVar19 = uVar18;
        while (plVar16 == (longlong *)0x0) {
          uVar6 = *(ulonglong *)(uVar19 + 0x20);
          *(ulonglong *)(uVar6 + 0x18) = uVar19;
          uVar19 = uVar6;
          plVar16 = *(longlong **)(uVar6 + 0x10);
        }
        *(longlong **)(uVar18 + 0x10) = plVar16;
        if ((uVar12 & 1) == 0) break;
        LOCK();
        uVar19 = *puVar2;
        bVar21 = uVar12 == uVar19;
        if (bVar21) {
          *puVar2 = uVar12 & 0xfffffffffffffffd;
          uVar19 = uVar12;
        }
        UNLOCK();
        uVar12 = uVar19;
        if (bVar21) {
          return;
        }
      }
      if (plVar16[3] != 0) break;
      do {
        LOCK();
        uVar19 = *puVar2;
        bVar21 = uVar12 == uVar19;
        if (bVar21) {
          *puVar2 = (ulonglong)((uint)uVar12 & 1);
          uVar19 = uVar12;
        }
        UNLOCK();
        if (bVar21) goto code_r0x000142e117e9;
        uVar12 = uVar19;
      } while (uVar19 < 4);
    }
    *(longlong *)(uVar18 + 0x10) = plVar16[3];
    LOCK();
    *puVar2 = *puVar2 & 0xfffffffffffffffd;
    UNLOCK();
code_r0x000142e117e9:
    plVar11 = (longlong *)*plVar16;
    plVar16 = plVar16 + 1;
    if (*plVar11 == 0) {
      *plVar16 = 0;
                    /* WARNING: Could not recover jumptable at 0x000142e1181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar11[2])(plVar16);
      return;
    }
    LOCK();
    lVar8 = *plVar16;
    *plVar16 = 0;
    UNLOCK();
    if (lVar8 != 1) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142e1180e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar11)(plVar11[2],plVar16,0,0);
    return;
  }
  if ((undefined1 *)plVar16[9] == puVar1) {
    puVar14 = puVar2 + 1;
    plVar11 = (longlong *)0x0;
  }
  else {
    do {
      plVar11 = plVar16;
      plVar16 = (longlong *)plVar11[10];
      if (plVar16 == (longlong *)0x0) goto code_r0x000142dbd008;
    } while ((undefined1 *)plVar16[9] != puVar1);
    puVar14 = (ulonglong *)(plVar11 + 10);
  }
  uVar19 = plVar16[10];
  *puVar14 = uVar19;
  if ((longlong *)puVar2[2] == plVar16) {
    puVar2[2] = (ulonglong)plVar11;
  }
  else if (uVar19 != 0) {
    do {
      bVar21 = *(undefined1 **)(uVar19 + 0x48) == puVar1;
      if (bVar21) break;
      uVar19 = *(ulonglong *)(uVar19 + 0x50);
    } while (uVar19 != 0);
    goto code_r0x000142dbd043;
  }
  bVar21 = false;
code_r0x000142dbd043:
  puStack_60 = &UNK_142dbd048;
  uVar19 = pdb_140f3c9d0();
  uVar13 = (uint)puVar14;
  bVar20 = uVar19 < puVar2[3];
  bVar22 = false;
  if (uVar19 == puVar2[3]) {
    bVar20 = uVar13 < (uint)puVar2[4];
    bVar22 = uVar13 == (uint)puVar2[4];
  }
  if (bVar20 || bVar22) {
    if (bVar21) {
      *puVar1 = 2;
    }
    else {
      *puVar1 = 0;
    }
    lVar8 = 0;
  }
  else {
    uVar17 = (uint)puVar2[5] << 0xd ^ (uint)puVar2[5];
    uVar17 = uVar17 >> 0x11 ^ uVar17;
    *(uint *)(puVar2 + 5) = uVar17 << 5 ^ uVar17;
    puStack_60 = &UNK_142dbd096;
    uVar19 = pdb_140f5a1d0();
    puVar2[3] = uVar19;
    *(uint *)(puVar2 + 4) = uVar13;
    lVar8 = 1;
    if (!bVar21) {
      *puVar1 = 1;
    }
  }
  plVar16[0xb] = lVar8;
  plVar11 = (longlong *)*plVar16;
  lVar8 = *plVar11;
  if (lVar8 == 0) {
    plVar11 = plVar11 + 1;
    plVar16[1] = 0;
    plVar16 = plVar16 + 1;
  }
  else {
    LOCK();
    lVar5 = plVar16[1];
    plVar16[1] = 0;
    UNLOCK();
    plVar16 = plVar16 + 1;
    if (lVar5 != 1) {
      plVar16 = (longlong *)0x0;
    }
  }
  LOCK();
  uVar19 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if (3 < uVar19 && (char)(((uint)uVar19 & 2) >> 1) == '\0') {
    puStack_60 = &UNK_142dbd165;
    pdb_142e11730(puVar2);
  }
  if (lVar8 != 0) {
    if (plVar16 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142dbd141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar11)(plVar11[2],plVar16,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dbd17e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)plVar11[1])(plVar16);
  return;
}

