// VA 0x140b14460, PDB extent 1134 bytes
// country_core::resources::stairs::visual::MagicSupports::clear
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/visual.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::stairs::visual::MagicSupports::clear
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/visual.rs
   Extent: 1134 */

void pdb_140b14460(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  byte bVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  byte *pbVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  byte *pbStack_d8;
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
  undefined *puStack_98;
  code *pcStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *pbStack_78;
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
  ulonglong *puVar13;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    pdb_14007ee60();
    pbVar14 = pub_1406abab0(0x20,8);
    if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    pbVar14[0] = 0;
    pbVar14[1] = 0;
    pbVar14[2] = 0;
    pbVar14[3] = 0;
    pbVar14[4] = 0;
    pbVar14[5] = 0;
    pbVar14[6] = 0;
    pbVar14[7] = 0;
    pbVar14[8] = 4;
    pbVar14[9] = 0;
    pbVar14[10] = 0;
    pbVar14[0xb] = 0;
    pbVar14[0xc] = 0;
    pbVar14[0xd] = 0;
    pbVar14[0xe] = 0;
    pbVar14[0xf] = 0;
    pbVar14[0x10] = 0;
    pbVar14[0x11] = 0;
    pbVar14[0x12] = 0;
    pbVar14[0x13] = 0;
    pbVar14[0x14] = 0;
    pbVar14[0x15] = 0;
    pbVar14[0x16] = 0;
    pbVar14[0x17] = 0;
    pbVar14[0x18] = 0;
    lVar10 = *(longlong *)(param_2 + 0x48);
    do {
      lVar7 = *(longlong *)(lVar10 + 8);
      while (lVar7 != -1) {
        if (lVar7 < 0) {
          puStack_98 = &UNK_1430739f8;
          pcStack_90 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143073a08,&puStack_98,&UNK_143073c60);
        }
        LOCK();
        lVar8 = *(longlong *)(lVar10 + 8);
        bVar20 = lVar7 == lVar8;
        if (bVar20) {
          *(longlong *)(lVar10 + 8) = lVar7 + 1;
          lVar8 = lVar7;
        }
        UNLOCK();
        lVar7 = lVar8;
        if (bVar20) {
          *(longlong *)(param_1 + 0x20) = lVar10;
          *(byte **)(param_1 + 0x28) = pbVar14;
          goto joined_r0x000140b14562;
        }
      }
    } while( true );
  }
  pbVar14 = *(byte **)(param_1 + 0x28);
joined_r0x000140b14562:
  if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143382200);
  }
  pbVar1 = pbVar14 + 0x18;
  LOCK();
  bVar20 = pbVar14[0x18] == 0;
  if (bVar20) {
    pbVar14[0x18] = 1;
  }
  UNLOCK();
  if (bVar20) {
    pdb_140e9a150(pbVar1);
    lVar10 = *(longlong *)(pbVar14 + 0x10);
    if (lVar10 == 0) goto LAB_140b145c3;
LAB_140b144c2:
    piVar6 = (int *)(*(longlong *)(pbVar14 + 8) + lVar10 * 4 + -4);
    if (piVar6 == (int *)0x0) goto LAB_140b145c3;
    iStack_a0 = *piVar6;
    lStack_f0 = *(longlong *)(param_2 + 0x10);
  }
  else {
    pdb_142dbd1a0(pbVar1,1,1000000000);
    pdb_140e9a150(pbVar1);
    lVar10 = *(longlong *)(pbVar14 + 0x10);
    if (lVar10 != 0) goto LAB_140b144c2;
LAB_140b145c3:
    lStack_f0 = *(longlong *)(param_2 + 0x10);
    if (lStack_f0 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143382218);
    }
    iStack_a0 = (int)lStack_f0 + -1;
  }
  lStack_f8 = *(longlong *)(param_2 + 8);
  uStack_e8 = *(undefined4 *)(param_2 + 0x18);
  uStack_e4 = *(undefined4 *)(param_2 + 0x1c);
  uStack_e0 = *(undefined4 *)(param_2 + 0x20);
  uStack_dc = *(undefined4 *)(param_2 + 0x24);
  uStack_d0 = *(undefined4 *)(param_2 + 0x28);
  uStack_cc = *(undefined4 *)(param_2 + 0x2c);
  uStack_c8 = *(undefined4 *)(param_2 + 0x30);
  uStack_c4 = *(undefined4 *)(param_2 + 0x34);
  lStack_c0 = param_2 + 0x78;
  uStack_b0 = *(undefined4 *)(param_2 + 0x38);
  uStack_ac = *(undefined4 *)(param_2 + 0x3c);
  uStack_a8 = *(undefined4 *)(param_2 + 0x40);
  uStack_a4 = *(undefined4 *)(param_2 + 0x44);
  lStack_b8 = param_2 + 0x58;
  pbStack_d8 = pbVar14;
  pdb_141a77f20(&lStack_f8);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    pdb_14007ee60();
    pbVar14 = pub_1406abab0(0x20,8);
    if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
    pbVar14[0] = 0;
    pbVar14[1] = 0;
    pbVar14[2] = 0;
    pbVar14[3] = 0;
    pbVar14[4] = 0;
    pbVar14[5] = 0;
    pbVar14[6] = 0;
    pbVar14[7] = 0;
    pbVar14[8] = 4;
    pbVar14[9] = 0;
    pbVar14[10] = 0;
    pbVar14[0xb] = 0;
    pbVar14[0xc] = 0;
    pbVar14[0xd] = 0;
    pbVar14[0xe] = 0;
    pbVar14[0xf] = 0;
    pbVar14[0x10] = 0;
    pbVar14[0x11] = 0;
    pbVar14[0x12] = 0;
    pbVar14[0x13] = 0;
    pbVar14[0x14] = 0;
    pbVar14[0x15] = 0;
    pbVar14[0x16] = 0;
    pbVar14[0x17] = 0;
    pbVar14[0x18] = 0;
    lVar10 = *(longlong *)(param_3 + 0x48);
    do {
      lVar7 = *(longlong *)(lVar10 + 8);
      while (lVar7 != -1) {
        if (lVar7 < 0) {
          puStack_98 = &UNK_1430739f8;
          pcStack_90 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143073a08,&puStack_98,&UNK_143073c60);
        }
        LOCK();
        lVar8 = *(longlong *)(lVar10 + 8);
        bVar20 = lVar7 == lVar8;
        if (bVar20) {
          *(longlong *)(lVar10 + 8) = lVar7 + 1;
          lVar8 = lVar7;
        }
        UNLOCK();
        lVar7 = lVar8;
        if (bVar20) {
          *(longlong *)(param_1 + 0x30) = lVar10;
          *(byte **)(param_1 + 0x38) = pbVar14;
          goto joined_r0x000140b147a2;
        }
      }
    } while( true );
  }
  pbVar14 = *(byte **)(param_1 + 0x38);
joined_r0x000140b147a2:
  if (pbVar14 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143382200);
  }
  LOCK();
  bVar20 = pbVar14[0x18] == 0;
  if (bVar20) {
    pbVar14[0x18] = 1;
  }
  UNLOCK();
  if (!bVar20) {
    pdb_142dbd1a0(pbVar14 + 0x18,1,1000000000);
  }
  pdb_140e9a150(pbVar14 + 0x18);
  if ((*(longlong *)(pbVar14 + 0x10) == 0) ||
     (piVar6 = (int *)(*(longlong *)(pbVar14 + 8) + *(longlong *)(pbVar14 + 0x10) * 4 + -4),
     piVar6 == (int *)0x0)) {
    pcStack_90 = *(code **)(param_3 + 0x10);
    if (pcStack_90 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143382218);
    }
    iStack_40 = (int)pcStack_90 + -1;
  }
  else {
    iStack_40 = *piVar6;
    pcStack_90 = *(code **)(param_3 + 0x10);
  }
  puStack_98 = *(undefined **)(param_3 + 8);
  uStack_88 = *(undefined4 *)(param_3 + 0x18);
  uStack_84 = *(undefined4 *)(param_3 + 0x1c);
  uStack_80 = *(undefined4 *)(param_3 + 0x20);
  uStack_7c = *(undefined4 *)(param_3 + 0x24);
  uStack_70 = *(undefined4 *)(param_3 + 0x28);
  uStack_6c = *(undefined4 *)(param_3 + 0x2c);
  uStack_68 = *(undefined4 *)(param_3 + 0x30);
  uStack_64 = *(undefined4 *)(param_3 + 0x34);
  puStack_60 = (undefined *)(param_3 + 0x78);
  uStack_50 = *(undefined4 *)(param_3 + 0x38);
  uStack_4c = *(undefined4 *)(param_3 + 0x3c);
  uStack_48 = *(undefined4 *)(param_3 + 0x40);
  uStack_44 = *(undefined4 *)(param_3 + 0x44);
  lStack_58 = param_3 + 0x58;
  pbStack_78 = pbVar14;
  pdb_141a77f20(&puStack_98);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  pbVar14 = pbStack_78 + 0x18;
  pdb_140e9a350();
  LOCK();
  bVar4 = *pbVar14;
  if (bVar4 == 1) {
    *pbVar14 = 0;
  }
  UNLOCK();
  if (bVar4 != 1) {
    pdb_142dbcef0(pbVar14);
  }
  pbVar1 = pbStack_d8;
  pbVar14 = pbStack_d8 + 0x18;
  pdb_140e9a350();
  LOCK();
  bVar20 = pbVar1[0x18] == 1;
  if (bVar20) {
    pbVar1[0x18] = 0;
  }
  plVar15 = plRam0000000143caeae8;
  UNLOCK();
  if (bVar20) {
    return;
  }
  while( true ) {
    plVar9 = (longlong *)*plVar15;
    if (plVar9 == (longlong *)0x0) {
      puStack_60 = &UNK_142dbcf8a;
      plVar9 = (longlong *)pdb_142e116d0();
    }
    uVar18 = (ulonglong)((longlong)pbVar14 * -0x61c8864680b583eb) >> (-(char)plVar9[3] & 0x3fU);
    if ((ulonglong)plVar9[1] <= uVar18) {
                    /* WARNING: Subroutine does not return */
      puStack_60 = &UNK_142dbd191;
      pdb_142dc81f2(uVar18,plVar9[1],&UNK_143220f98);
    }
    puVar2 = (ulonglong *)(*plVar9 + uVar18 * 0x40);
    plVar3 = (longlong *)(*plVar9 + uVar18 * 0x40);
    LOCK();
    bVar20 = *plVar3 == 0;
    if (bVar20) {
      *plVar3 = 1;
    }
    UNLOCK();
    if (!bVar20) {
      puStack_60 = &UNK_142dbcf97;
      pdb_142e11820(puVar2);
    }
    if ((longlong *)*plVar15 == plVar9) break;
    LOCK();
    uVar18 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (3 < uVar18 && (char)(((uint)uVar18 & 2) >> 1) == '\0') {
      puStack_60 = &UNK_142dbcf83;
      pdb_142e11730();
    }
  }
  plVar15 = (longlong *)puVar2[1];
  if (plVar15 == (longlong *)0x0) {
code_r0x000142dbd008:
    *pbVar14 = 0;
    LOCK();
    uVar18 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar18 < 4 || (char)(((uint)uVar18 & 2) >> 1) != '\0') {
      return;
    }
    uVar18 = *puVar2;
    do {
      if (uVar18 < 4) {
        return;
      }
      if ((uVar18 & 2) != 0) {
        return;
      }
      LOCK();
      uVar17 = *puVar2;
      bVar20 = uVar18 == uVar17;
      if (bVar20) {
        *puVar2 = uVar18 | 2;
        uVar17 = uVar18;
      }
      UNLOCK();
      uVar11 = uVar18;
      uVar18 = uVar17;
    } while (!bVar20);
    while( true ) {
      while( true ) {
        uVar17 = uVar11 & 0xfffffffffffffffc;
        plVar15 = *(longlong **)(uVar17 + 0x10);
        uVar18 = uVar17;
        while (plVar15 == (longlong *)0x0) {
          uVar5 = *(ulonglong *)(uVar18 + 0x20);
          *(ulonglong *)(uVar5 + 0x18) = uVar18;
          uVar18 = uVar5;
          plVar15 = *(longlong **)(uVar5 + 0x10);
        }
        *(longlong **)(uVar17 + 0x10) = plVar15;
        if ((uVar11 & 1) == 0) break;
        LOCK();
        uVar18 = *puVar2;
        bVar20 = uVar11 == uVar18;
        if (bVar20) {
          *puVar2 = uVar11 & 0xfffffffffffffffd;
          uVar18 = uVar11;
        }
        UNLOCK();
        uVar11 = uVar18;
        if (bVar20) {
          return;
        }
      }
      if (plVar15[3] != 0) break;
      do {
        LOCK();
        uVar18 = *puVar2;
        bVar20 = uVar11 == uVar18;
        if (bVar20) {
          *puVar2 = (ulonglong)((uint)uVar11 & 1);
          uVar18 = uVar11;
        }
        UNLOCK();
        if (bVar20) goto code_r0x000142e117e9;
        uVar11 = uVar18;
      } while (uVar18 < 4);
    }
    *(longlong *)(uVar17 + 0x10) = plVar15[3];
    LOCK();
    *puVar2 = *puVar2 & 0xfffffffffffffffd;
    UNLOCK();
code_r0x000142e117e9:
    plVar9 = (longlong *)*plVar15;
    plVar15 = plVar15 + 1;
    if (*plVar9 == 0) {
      *plVar15 = 0;
                    /* WARNING: Could not recover jumptable at 0x000142e1181c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar9[2])(plVar15);
      return;
    }
    LOCK();
    lVar10 = *plVar15;
    *plVar15 = 0;
    UNLOCK();
    if (lVar10 != 1) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142e1180e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar9)(plVar9[2],plVar15,0,0);
    return;
  }
  if ((byte *)plVar15[9] == pbVar14) {
    puVar13 = puVar2 + 1;
    plVar9 = (longlong *)0x0;
  }
  else {
    do {
      plVar9 = plVar15;
      plVar15 = (longlong *)plVar9[10];
      if (plVar15 == (longlong *)0x0) goto code_r0x000142dbd008;
    } while ((byte *)plVar15[9] != pbVar14);
    puVar13 = (ulonglong *)(plVar9 + 10);
  }
  uVar18 = plVar15[10];
  *puVar13 = uVar18;
  if ((longlong *)puVar2[2] == plVar15) {
    puVar2[2] = (ulonglong)plVar9;
  }
  else if (uVar18 != 0) {
    do {
      bVar20 = *(byte **)(uVar18 + 0x48) == pbVar14;
      if (bVar20) break;
      uVar18 = *(ulonglong *)(uVar18 + 0x50);
    } while (uVar18 != 0);
    goto code_r0x000142dbd043;
  }
  bVar20 = false;
code_r0x000142dbd043:
  puStack_60 = &UNK_142dbd048;
  uVar18 = pdb_140f3c9d0();
  uVar12 = (uint)puVar13;
  bVar19 = uVar18 < puVar2[3];
  bVar21 = false;
  if (uVar18 == puVar2[3]) {
    bVar19 = uVar12 < (uint)puVar2[4];
    bVar21 = uVar12 == (uint)puVar2[4];
  }
  if (bVar19 || bVar21) {
    if (bVar20) {
      *pbVar14 = 2;
    }
    else {
      *pbVar14 = 0;
    }
    lVar10 = 0;
  }
  else {
    uVar16 = (uint)puVar2[5] << 0xd ^ (uint)puVar2[5];
    uVar16 = uVar16 >> 0x11 ^ uVar16;
    *(uint *)(puVar2 + 5) = uVar16 << 5 ^ uVar16;
    puStack_60 = &UNK_142dbd096;
    uVar18 = pdb_140f5a1d0();
    puVar2[3] = uVar18;
    *(uint *)(puVar2 + 4) = uVar12;
    lVar10 = 1;
    if (!bVar20) {
      *pbVar14 = 1;
    }
  }
  plVar15[0xb] = lVar10;
  plVar9 = (longlong *)*plVar15;
  lVar10 = *plVar9;
  if (lVar10 == 0) {
    plVar9 = plVar9 + 1;
    plVar15[1] = 0;
    plVar15 = plVar15 + 1;
  }
  else {
    LOCK();
    lVar7 = plVar15[1];
    plVar15[1] = 0;
    UNLOCK();
    plVar15 = plVar15 + 1;
    if (lVar7 != 1) {
      plVar15 = (longlong *)0x0;
    }
  }
  LOCK();
  uVar18 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if (3 < uVar18 && (char)(((uint)uVar18 & 2) >> 1) == '\0') {
    puStack_60 = &UNK_142dbd165;
    pdb_142e11730(puVar2);
  }
  if (lVar10 != 0) {
    if (plVar15 == (longlong *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000142dbd141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*plVar9)(plVar9[2],plVar15,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dbd17e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)plVar9[1])(plVar15);
  return;
}

