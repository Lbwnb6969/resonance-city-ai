// VA 0x14293cc50, PDB extent 381 bytes
// country_core::resources::critters::BirdSpotManager::recycle<system_critters::wren::update_roof_bird_spots::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::critters::BirdSpotManager::recycle<system_critters::wren::update_roof_bird_spots::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters.rs
   Extent: 381 */

void pdb_14293cc50(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined8 unaff_RBX;
  ulonglong uVar17;
  int *piVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  ulonglong *puVar16;
  
  lVar13 = *param_1;
  pcVar1 = (char *)(lVar13 + 0x10);
  LOCK();
  bVar26 = *(char *)(lVar13 + 0x10) == '\0';
  if (bVar26) {
    *(char *)(lVar13 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar26) {
    pdb_142dbd1a0(pcVar1,param_2,1000000000);
  }
  pdb_140e9a150(pcVar1);
  lVar6 = *(longlong *)(lVar13 + 0x20);
  lVar7 = *(longlong *)(lVar13 + 0x28);
  *(undefined8 *)(lVar13 + 0x28) = 0;
  if (lVar7 != 0) {
    lVar13 = *param_2;
    lVar8 = param_2[1];
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar22 = 0;
    do {
      uVar21 = *(ulonglong *)(lVar6 + lVar22);
      uVar17 = uVar21 & 0xffffffff;
      if ((((uVar17 != 0) && (uVar17 = uVar17 ^ 0xffffffff, uVar17 < *(ulonglong *)(lVar8 + 0x10)))
          && (piVar18 = (int *)(uVar17 * 0x18 + *(longlong *)(lVar8 + 8)),
             piVar18[4] == (int)(uVar21 >> 0x20))) &&
         (((*piVar18 != 0 &&
           (uVar21 = *(ulonglong *)(piVar18 + 2),
           (uVar21 & 0xffffffff) < *(ulonglong *)(lVar13 + 0x38))) &&
          ((*(ulonglong *)(*(longlong *)(lVar13 + 0x28) + (uVar21 >> 6 & 0x3ffffff) * 8) >>
            (uVar21 & 0x3f) & 1) != 0)))) {
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x18 + (uVar21 >> 0x20) * 0x48);
        lVar24 = ~*(ulonglong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x38 + (uVar21 >> 0x20) * 0x48) +
                   *(longlong *)(lVar13 + 0x118) * 8) * 0x30;
        lVar10 = *(longlong *)(lVar9 + 0x10 + lVar24);
        lVar23 = (ulonglong)(uint)~piVar18[1] * 0x50;
        if (*(int *)(lVar10 + 0x30 + lVar23) == 0) {
          *(undefined4 *)(*(longlong *)(lVar9 + lVar24 + 0x28) + (ulonglong)(uint)~piVar18[1] * 4) =
               uVar5;
          *(undefined4 *)(lVar10 + lVar23 + 0x30) = 1;
        }
      }
      lVar22 = lVar22 + 0x18;
    } while (lVar7 * 0x18 != lVar22);
  }
  pdb_140e9a350();
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\x01') {
    *pcVar1 = '\0';
  }
  plVar19 = plRam0000000143caeae8;
  UNLOCK();
  if (cVar4 == '\x01') {
    return;
  }
  while( true ) {
    plVar12 = (longlong *)*plVar19;
    if (plVar12 == (longlong *)0x0) {
      plVar12 = (longlong *)pdb_142e116d0();
    }
    uVar21 = (ulonglong)((longlong)pcVar1 * -0x61c8864680b583eb) >> (-(char)plVar12[3] & 0x3fU);
    if ((ulonglong)plVar12[1] <= uVar21) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar21,plVar12[1],&UNK_143220f98,uVar21,unaff_RBX);
    }
    puVar2 = (ulonglong *)(*plVar12 + uVar21 * 0x40);
    plVar3 = (longlong *)(*plVar12 + uVar21 * 0x40);
    LOCK();
    bVar26 = *plVar3 == 0;
    if (bVar26) {
      *plVar3 = 1;
    }
    UNLOCK();
    if (!bVar26) {
      pdb_142e11820(puVar2);
    }
    if ((longlong *)*plVar19 == plVar12) break;
    LOCK();
    uVar21 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (3 < uVar21 && (char)(((uint)uVar21 & 2) >> 1) == '\0') {
      pdb_142e11730();
    }
  }
  plVar19 = (longlong *)puVar2[1];
  if (plVar19 == (longlong *)0x0) {
code_r0x000142dbd008:
    *pcVar1 = '\0';
    LOCK();
    uVar21 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar21 < 4 || (char)(((uint)uVar21 & 2) >> 1) != '\0') {
      return;
    }
    uVar21 = *puVar2;
    do {
      if (uVar21 < 4) {
        return;
      }
      if ((uVar21 & 2) != 0) {
        return;
      }
      LOCK();
      uVar17 = *puVar2;
      bVar26 = uVar21 == uVar17;
      if (bVar26) {
        *puVar2 = uVar21 | 2;
        uVar17 = uVar21;
      }
      UNLOCK();
      uVar14 = uVar21;
      uVar21 = uVar17;
    } while (!bVar26);
    while( true ) {
      while( true ) {
        uVar17 = uVar14 & 0xfffffffffffffffc;
        plVar19 = *(longlong **)(uVar17 + 0x10);
        uVar21 = uVar17;
        while (plVar19 == (longlong *)0x0) {
          uVar11 = *(ulonglong *)(uVar21 + 0x20);
          *(ulonglong *)(uVar11 + 0x18) = uVar21;
          uVar21 = uVar11;
          plVar19 = *(longlong **)(uVar11 + 0x10);
        }
        *(longlong **)(uVar17 + 0x10) = plVar19;
        if ((uVar14 & 1) == 0) break;
        LOCK();
        uVar21 = *puVar2;
        bVar26 = uVar14 == uVar21;
        if (bVar26) {
          *puVar2 = uVar14 & 0xfffffffffffffffd;
          uVar21 = uVar14;
        }
        UNLOCK();
        uVar14 = uVar21;
        if (bVar26) {
          return;
        }
      }
      if (plVar19[3] != 0) break;
      do {
        LOCK();
        uVar21 = *puVar2;
        bVar26 = uVar14 == uVar21;
        if (bVar26) {
          *puVar2 = (ulonglong)((uint)uVar14 & 1);
          uVar21 = uVar14;
        }
        UNLOCK();
        if (bVar26) goto code_r0x000142e117e9;
        uVar14 = uVar21;
      } while (uVar21 < 4);
    }
    *(longlong *)(uVar17 + 0x10) = plVar19[3];
    LOCK();
    *puVar2 = *puVar2 & 0xfffffffffffffffd;
    UNLOCK();
code_r0x000142e117e9:
    plVar12 = (longlong *)*plVar19;
    plVar19 = plVar19 + 1;
    if (*plVar12 == 0) {
      *plVar19 = 0;
                    /* WARNING: Could not recover jumptable at 0x000142e1181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar12[2])(plVar19);
      return;
    }
    LOCK();
    lVar13 = *plVar19;
    *plVar19 = 0;
    UNLOCK();
    if (lVar13 != 1) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142e1180e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar12)(plVar12[2],plVar19,0,0);
    return;
  }
  if ((char *)plVar19[9] == pcVar1) {
    puVar16 = puVar2 + 1;
    plVar12 = (longlong *)0x0;
  }
  else {
    do {
      plVar12 = plVar19;
      plVar19 = (longlong *)plVar12[10];
      if (plVar19 == (longlong *)0x0) goto code_r0x000142dbd008;
    } while ((char *)plVar19[9] != pcVar1);
    puVar16 = (ulonglong *)(plVar12 + 10);
  }
  uVar21 = plVar19[10];
  *puVar16 = uVar21;
  if ((longlong *)puVar2[2] == plVar19) {
    puVar2[2] = (ulonglong)plVar12;
  }
  else if (uVar21 != 0) {
    do {
      bVar26 = *(char **)(uVar21 + 0x48) == pcVar1;
      if (bVar26) break;
      uVar21 = *(ulonglong *)(uVar21 + 0x50);
    } while (uVar21 != 0);
    goto code_r0x000142dbd043;
  }
  bVar26 = false;
code_r0x000142dbd043:
  uVar21 = pdb_140f3c9d0();
  uVar15 = (uint)puVar16;
  bVar25 = uVar21 < puVar2[3];
  bVar27 = false;
  if (uVar21 == puVar2[3]) {
    bVar25 = uVar15 < (uint)puVar2[4];
    bVar27 = uVar15 == (uint)puVar2[4];
  }
  if (bVar25 || bVar27) {
    if (bVar26) {
      *pcVar1 = '\x02';
    }
    else {
      *pcVar1 = '\0';
    }
    lVar13 = 0;
  }
  else {
    uVar20 = (uint)puVar2[5] << 0xd ^ (uint)puVar2[5];
    uVar20 = uVar20 >> 0x11 ^ uVar20;
    *(uint *)(puVar2 + 5) = uVar20 << 5 ^ uVar20;
    uVar21 = pdb_140f5a1d0();
    puVar2[3] = uVar21;
    *(uint *)(puVar2 + 4) = uVar15;
    lVar13 = 1;
    if (!bVar26) {
      *pcVar1 = '\x01';
    }
  }
  plVar19[0xb] = lVar13;
  plVar12 = (longlong *)*plVar19;
  lVar13 = *plVar12;
  if (lVar13 == 0) {
    plVar12 = plVar12 + 1;
    plVar19[1] = 0;
    plVar19 = plVar19 + 1;
  }
  else {
    LOCK();
    lVar6 = plVar19[1];
    plVar19[1] = 0;
    UNLOCK();
    plVar19 = plVar19 + 1;
    if (lVar6 != 1) {
      plVar19 = (longlong *)0x0;
    }
  }
  LOCK();
  uVar21 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if (3 < uVar21 && (char)(((uint)uVar21 & 2) >> 1) == '\0') {
    pdb_142e11730(puVar2);
  }
  if (lVar13 != 0) {
    if (plVar19 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142dbd141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar12)(plVar12[2],plVar19,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dbd17e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)plVar12[1])(plVar19);
  return;
}

