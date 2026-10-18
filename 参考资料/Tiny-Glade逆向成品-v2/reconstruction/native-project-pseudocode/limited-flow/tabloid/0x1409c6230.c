// VA 0x1409c6230, PDB extent 588 bytes
// tabloid::Subscriber::take<country_core::utils::dirty_tiles::DirtyTiles>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tabloid::Subscriber::take<country_core::utils::dirty_tiles::DirtyTiles>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
   Extent: 588 */

void pdb_1409c6230(ulonglong *param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  ulonglong *puVar11;
  
  pcVar1 = (char *)(param_2 + 0x10);
  LOCK();
  bVar17 = *(char *)(param_2 + 0x10) == '\0';
  if (bVar17) {
    *(char *)(param_2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar17) {
    pdb_142dbd1a0(pcVar1,param_2,1000000000);
  }
  pdb_140e9a150(pcVar1);
  lVar8 = *(longlong *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  if (lVar8 == 0) {
    *param_1 = 0;
  }
  else {
    puVar2 = (ulonglong *)(lVar8 + 0x10);
    uVar15 = *(ulonglong *)(lVar8 + 0x10);
    if (uVar15 < 0xfffffffffffffff0 && (char)(((uint)uVar15 & 8) >> 3) == '\0') {
      LOCK();
      uVar14 = *puVar2;
      if (uVar15 == uVar14) {
        *puVar2 = uVar15 + 0x10;
      }
      UNLOCK();
      if (uVar15 != uVar14) goto LAB_1409c629e;
    }
    else {
LAB_1409c629e:
      pdb_142dbb5f0(puVar2,0);
    }
    pdb_140e9a150(puVar2);
    pdb_140e9a150((ulonglong)puVar2 | 1);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar8 + 0x218);
    pdb_140e9a350(puVar2);
    pdb_140e9a350((ulonglong)puVar2 | 1);
    LOCK();
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - 0x10;
    UNLOCK();
    if ((uVar15 & 0xfffffffffffffff2) == 0x12) {
      pdb_142dbbf50(puVar2);
    }
    puVar2 = (ulonglong *)(lVar8 + 0x10);
    uVar15 = *(ulonglong *)(lVar8 + 0x10);
    if (uVar15 < 0xfffffffffffffff0 && (char)(((uint)uVar15 & 8) >> 3) == '\0') {
      LOCK();
      uVar14 = *puVar2;
      if (uVar15 == uVar14) {
        *puVar2 = uVar15 + 0x10;
      }
      UNLOCK();
      if (uVar15 != uVar14) goto LAB_1409c634b;
    }
    else {
LAB_1409c634b:
      pdb_142dbb5f0(puVar2);
    }
    pdb_140e9a150(puVar2);
    pdb_140e9a150((ulonglong)puVar2 | 1);
    *param_1 = (ulonglong)puVar2;
    param_1[1] = lVar8 + 0x18;
    param_1[2] = (ulonglong)puVar2;
  }
  pdb_140e9a350();
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\x01') {
    *pcVar1 = '\0';
  }
  plVar12 = plRam0000000143caeae8;
  UNLOCK();
  if (cVar4 == '\x01') {
    return;
  }
  while( true ) {
    plVar7 = (longlong *)*plVar12;
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)pdb_142e116d0();
    }
    uVar15 = (ulonglong)((longlong)pcVar1 * -0x61c8864680b583eb) >> (-(char)plVar7[3] & 0x3fU);
    if ((ulonglong)plVar7[1] <= uVar15) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar15,plVar7[1],&UNK_143220f98,uVar15,unaff_RBX,unaff_RBP,unaff_RDI,unaff_RSI);
    }
    puVar2 = (ulonglong *)(*plVar7 + uVar15 * 0x40);
    plVar3 = (longlong *)(*plVar7 + uVar15 * 0x40);
    LOCK();
    bVar17 = *plVar3 == 0;
    if (bVar17) {
      *plVar3 = 1;
    }
    UNLOCK();
    if (!bVar17) {
      pdb_142e11820(puVar2);
    }
    if ((longlong *)*plVar12 == plVar7) break;
    LOCK();
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (3 < uVar15 && (char)(((uint)uVar15 & 2) >> 1) == '\0') {
      pdb_142e11730();
    }
  }
  plVar12 = (longlong *)puVar2[1];
  if (plVar12 == (longlong *)0x0) {
code_r0x000142dbd008:
    *pcVar1 = '\0';
    LOCK();
    uVar15 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar15 < 4 || (char)(((uint)uVar15 & 2) >> 1) != '\0') {
      return;
    }
    uVar15 = *puVar2;
    do {
      if (uVar15 < 4) {
        return;
      }
      if ((uVar15 & 2) != 0) {
        return;
      }
      LOCK();
      uVar14 = *puVar2;
      bVar17 = uVar15 == uVar14;
      if (bVar17) {
        *puVar2 = uVar15 | 2;
        uVar14 = uVar15;
      }
      UNLOCK();
      uVar9 = uVar15;
      uVar15 = uVar14;
    } while (!bVar17);
    while( true ) {
      while( true ) {
        uVar14 = uVar9 & 0xfffffffffffffffc;
        plVar12 = *(longlong **)(uVar14 + 0x10);
        uVar15 = uVar14;
        while (plVar12 == (longlong *)0x0) {
          uVar6 = *(ulonglong *)(uVar15 + 0x20);
          *(ulonglong *)(uVar6 + 0x18) = uVar15;
          uVar15 = uVar6;
          plVar12 = *(longlong **)(uVar6 + 0x10);
        }
        *(longlong **)(uVar14 + 0x10) = plVar12;
        if ((uVar9 & 1) == 0) break;
        LOCK();
        uVar15 = *puVar2;
        bVar17 = uVar9 == uVar15;
        if (bVar17) {
          *puVar2 = uVar9 & 0xfffffffffffffffd;
          uVar15 = uVar9;
        }
        UNLOCK();
        uVar9 = uVar15;
        if (bVar17) {
          return;
        }
      }
      if (plVar12[3] != 0) break;
      do {
        LOCK();
        uVar15 = *puVar2;
        bVar17 = uVar9 == uVar15;
        if (bVar17) {
          *puVar2 = (ulonglong)((uint)uVar9 & 1);
          uVar15 = uVar9;
        }
        UNLOCK();
        if (bVar17) goto code_r0x000142e117e9;
        uVar9 = uVar15;
      } while (uVar15 < 4);
    }
    *(longlong *)(uVar14 + 0x10) = plVar12[3];
    LOCK();
    *puVar2 = *puVar2 & 0xfffffffffffffffd;
    UNLOCK();
code_r0x000142e117e9:
    plVar7 = (longlong *)*plVar12;
    plVar12 = plVar12 + 1;
    if (*plVar7 == 0) {
      *plVar12 = 0;
                    /* WARNING: Could not recover jumptable at 0x000142e1181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar7[2])(plVar12);
      return;
    }
    LOCK();
    lVar8 = *plVar12;
    *plVar12 = 0;
    UNLOCK();
    if (lVar8 != 1) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142e1180e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar7)(plVar7[2],plVar12,0,0);
    return;
  }
  if ((char *)plVar12[9] == pcVar1) {
    puVar11 = puVar2 + 1;
    plVar7 = (longlong *)0x0;
  }
  else {
    do {
      plVar7 = plVar12;
      plVar12 = (longlong *)plVar7[10];
      if (plVar12 == (longlong *)0x0) goto code_r0x000142dbd008;
    } while ((char *)plVar12[9] != pcVar1);
    puVar11 = (ulonglong *)(plVar7 + 10);
  }
  uVar15 = plVar12[10];
  *puVar11 = uVar15;
  if ((longlong *)puVar2[2] == plVar12) {
    puVar2[2] = (ulonglong)plVar7;
  }
  else if (uVar15 != 0) {
    do {
      bVar17 = *(char **)(uVar15 + 0x48) == pcVar1;
      if (bVar17) break;
      uVar15 = *(ulonglong *)(uVar15 + 0x50);
    } while (uVar15 != 0);
    goto code_r0x000142dbd043;
  }
  bVar17 = false;
code_r0x000142dbd043:
  uVar15 = pdb_140f3c9d0();
  uVar10 = (uint)puVar11;
  bVar16 = uVar15 < puVar2[3];
  bVar18 = false;
  if (uVar15 == puVar2[3]) {
    bVar16 = uVar10 < (uint)puVar2[4];
    bVar18 = uVar10 == (uint)puVar2[4];
  }
  if (bVar16 || bVar18) {
    if (bVar17) {
      *pcVar1 = '\x02';
    }
    else {
      *pcVar1 = '\0';
    }
    lVar8 = 0;
  }
  else {
    uVar13 = (uint)puVar2[5] << 0xd ^ (uint)puVar2[5];
    uVar13 = uVar13 >> 0x11 ^ uVar13;
    *(uint *)(puVar2 + 5) = uVar13 << 5 ^ uVar13;
    uVar15 = pdb_140f5a1d0();
    puVar2[3] = uVar15;
    *(uint *)(puVar2 + 4) = uVar10;
    lVar8 = 1;
    if (!bVar17) {
      *pcVar1 = '\x01';
    }
  }
  plVar12[0xb] = lVar8;
  plVar7 = (longlong *)*plVar12;
  lVar8 = *plVar7;
  if (lVar8 == 0) {
    plVar7 = plVar7 + 1;
    plVar12[1] = 0;
    plVar12 = plVar12 + 1;
  }
  else {
    LOCK();
    lVar5 = plVar12[1];
    plVar12[1] = 0;
    UNLOCK();
    plVar12 = plVar12 + 1;
    if (lVar5 != 1) {
      plVar12 = (longlong *)0x0;
    }
  }
  LOCK();
  uVar15 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if (3 < uVar15 && (char)(((uint)uVar15 & 2) >> 1) == '\0') {
    pdb_142e11730(puVar2);
  }
  if (lVar8 != 0) {
    if (plVar12 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142dbd141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar7)(plVar7[2],plVar12,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dbd17e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)plVar7[1])(plVar12);
  return;
}

