// VA 0x141ad1510, PDB extent 2384 bytes
// country_core::systems::history::replay_plant_paint::replay_plant_paint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_plant_paint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::replay_plant_paint::replay_plant_paint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_plant_paint.rs
   Extent: 2384 */

void pdb_141ad1510(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7)

{
  ulonglong uVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  bool bVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  ulonglong uStack_128;
  undefined4 *puStack_118;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined4 uStack_ef;
  undefined4 uStack_eb;
  undefined4 uStack_e7;
  undefined4 uStack_e3;
  undefined3 uStack_df;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 *puStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined3 uStack_98;
  undefined4 uStack_95;
  undefined4 uStack_91;
  undefined4 uStack_8d;
  
  puVar8 = (ulonglong *)*param_4;
  fVar27 = *(float *)(puVar8 + 5);
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  if (puVar8[3] == 0) {
    return;
  }
  uVar21 = puVar8[1];
  uVar13 = *puVar8;
  if (puVar8[2] < *puVar8) {
    uVar13 = 0;
  }
  lVar25 = (puVar8[2] - uVar13) * 0x40;
  lStack_c8 = uVar21 + lVar25;
  lVar18 = *(longlong *)(uVar21 + 8 + lVar25);
  uVar13 = 0;
  uVar20 = 0;
  do {
    uStack_c0 = uVar20;
    if (*(longlong *)(uVar21 + 0x10 + lVar25) * 0x30 == uVar13) {
      return;
    }
    uVar20 = uStack_c0 + 1;
    uVar1 = uVar13 + 0x30;
    pcVar2 = (char *)(lVar18 + uVar13);
    uVar13 = uVar1;
  } while (*pcVar2 != '\v');
  puStack_d0 = param_3;
  if (*(char *)(lVar18 + -0x17 + uVar1) == '\0') {
    *(undefined1 *)(lVar18 + -0x17 + uVar1) = 1;
    if (*(char *)(lVar18 + -0x18 + uVar1) == '\0') {
      uVar30 = *(undefined4 *)((longlong)param_5 + 0x1c);
      puStack_118 = (undefined4 *)param_5[2];
      *puStack_118 = uVar30;
      lVar25 = *param_5;
      pdb_140a85240(lVar25);
      if (*(char *)(lVar18 + -0x18 + uVar1) != '\x01') goto LAB_141ad1801;
    }
    else {
      uVar30 = *(undefined4 *)((longlong)param_5 + 0x1c);
      lVar25 = *param_5;
      puStack_118 = (undefined4 *)param_5[2];
    }
    *puStack_118 = uVar30;
    lVar9 = *(longlong *)(lVar25 + 8);
    lVar26 = *(longlong *)(lVar25 + 0x10);
    lVar23 = *(longlong *)(lVar25 + 0x20);
    lVar19 = *(longlong *)(lVar25 + 0x28);
    lVar17 = lVar26 * 4;
    lVar14 = 0;
    do {
      if (lVar17 - lVar14 == 0) {
        lVar14 = 0;
        goto LAB_141ad1690;
      }
      piVar3 = (int *)(lVar9 + lVar14);
      lVar14 = lVar14 + 4;
    } while (*piVar3 == 0);
    goto LAB_141ad16a0;
  }
  goto LAB_141ad1801;
code_r0x000141ad1cf9:
  plVar12 = (longlong *)CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_a8,uStack_f0));
  LOCK();
  *plVar12 = *plVar12 + -1;
  UNLOCK();
  if (*plVar12 != 0) {
    return;
  }
  pdb_140c7b830(&uStack_f0);
  return;
  while (piVar3 = (int *)(lVar23 + lVar14), lVar14 = lVar14 + 4, *piVar3 == 0) {
LAB_141ad1690:
    if (lVar19 * 4 - lVar14 == 0) goto LAB_141ad16cb;
  }
LAB_141ad16a0:
  pub_142e32780(lVar25 + 0x80,0xff,0x200);
  *(undefined1 *)(lVar25 + 0x283) = 1;
LAB_141ad16cb:
  if (lVar26 != 0) {
    pub_142e32780(lVar9,0,lVar17);
  }
  if (lVar19 != 0) {
    pub_142e32780(lVar23,0,lVar19 << 2);
  }
  *(undefined1 *)(lVar25 + 0x284) = 1;
  lVar14 = *(longlong *)(*param_2 + 0x10);
  if (lVar14 != 0) {
    uStack_128 = *(longlong *)(*param_2 + 8);
    lVar14 = uStack_128 + lVar14 * 0x28;
    do {
      lVar17 = *(longlong *)(uStack_128 + 0x10);
      if (lVar17 != 0) {
        lVar9 = *(longlong *)(uStack_128 + 8);
        lVar26 = 0;
        do {
          if (*(int *)(lVar9 + lVar26) == 0xf) {
            if (*(longlong *)(lVar9 + 8 + lVar26) == *(longlong *)(lVar18 + -0x28 + uVar1))
            goto LAB_141ad1801;
            *puStack_118 = uVar30;
            lVar23 = *(longlong *)(lVar9 + 8 + lVar26);
            pdb_140a85240(lVar25);
            pdb_140a85b60(lVar25,*(undefined8 *)(lVar23 + 0x18),*(undefined8 *)(lVar23 + 0x20),
                          *(undefined4 *)(lVar23 + 0x28),*(undefined1 *)(lVar23 + 0x2c),
                          *(undefined1 *)(lVar23 + 0x2d));
            lVar23 = *(longlong *)(lVar25 + 0x10);
            lVar19 = *(longlong *)(lVar25 + 0x28);
            if (lVar23 != lVar19) goto LAB_141ad1e11;
            pub_142e32760(*(undefined8 *)(lVar25 + 8),*(undefined8 *)(lVar25 + 0x20),lVar23 << 2);
            *(undefined2 *)(lVar25 + 0x280) = 0;
          }
          lVar26 = lVar26 + 0x18;
        } while (lVar17 * 0x18 != lVar26);
      }
      uStack_128 = uStack_128 + 0x28;
    } while (uStack_128 != lVar14);
  }
LAB_141ad1801:
  fVar29 = fVar27 * *(float *)(*param_1 + 0x28) + *(float *)(lVar18 + -0x20 + uVar1);
  *(float *)(lVar18 + -0x20 + uVar1) = fVar29;
  fVar27 = *(float *)(lVar18 + -0x1c + uVar1);
  fVar31 = _DAT_142e36f28;
  if (_DAT_142e37848 <= fVar27) {
    fVar29 = fVar29 / fVar27;
    fVar27 = 0.0;
    if (0.0 <= fVar29) {
      fVar27 = fVar29;
    }
    if (fVar27 <= _DAT_142e36f28) {
      fVar31 = fVar27;
    }
  }
  lVar25 = *(longlong *)(lVar18 + -0x28 + uVar1);
  fVar27 = fVar31;
  if (*(char *)(lVar18 + -0x18 + uVar1) != '\0') {
    fVar27 = _DAT_142e36f28 - fVar31;
  }
  uVar4 = *(undefined1 *)(lVar25 + 0x2c);
  uVar5 = *(undefined1 *)(lVar25 + 0x2d);
  uVar21 = *(ulonglong *)(lVar25 + 0x20);
  fVar27 = (float)pdb_140dedc70(fVar27);
  uVar13 = uStack_c0;
  uVar30 = 0;
  if (0.0 < fVar27) {
    fVar27 = (float)pub_142e329c0(fVar27 * (float)(longlong)uVar21);
    uVar15 = 0;
    if (0.0 <= fVar27) {
      uVar15 = (longlong)(fVar27 - _DAT_142e36f2c) & (longlong)fVar27 >> 0x3f | (longlong)fVar27;
    }
    uStack_128 = 0xffffffffffffffff;
    if (fVar27 <= _DAT_142e36f30) {
      uStack_128 = uVar15;
    }
    uVar15 = 2;
    if (uVar21 < 2) {
      uVar15 = uVar21;
    }
    if (uStack_128 < uVar15) {
      uStack_128 = 2;
    }
    if (uVar21 <= uStack_128) {
      uStack_128 = uVar21;
    }
    if (uStack_128 <= *(ulonglong *)(lVar25 + 0x20)) goto LAB_141ad1920;
LAB_141ad1e23:
    pdb_142dc8420(0);
LAB_141ad1e31:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143043538);
  }
  uStack_128 = 0;
LAB_141ad1920:
  lVar14 = *(longlong *)(lVar25 + 0x18);
  if (*(char *)(lVar18 + -0x18 + uVar1) == '\x01') {
    uVar7 = *(undefined4 *)((longlong)param_5 + 0x1c);
    puVar10 = (undefined4 *)param_5[2];
    *puVar10 = uVar7;
    lVar18 = *param_5;
    pdb_140a85240(lVar18);
    *puVar10 = uVar7;
    pdb_140a85b60(lVar18,lVar14,uStack_128,*(undefined4 *)(lVar25 + 0x28),uVar4,uVar5);
    *puVar10 = uVar7;
    puVar16 = (undefined8 *)pdb_140bf45b0(*puStack_d0,&UNK_14331c998);
    if (_DAT_142e36f28 <= fVar31) {
      if ((puVar16 == (undefined8 *)0x0) ||
         (lVar17 = (**(code **)(puVar16[1] + 0x18))(*puVar16), lVar17 == 0)) goto LAB_141ad1e31;
      pdb_140a85430(lVar18,0,*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
      bVar11 = true;
      cVar6 = *(char *)(lVar25 + 0x2c);
    }
    else {
      if ((puVar16 == (undefined8 *)0x0) ||
         (lVar17 = (**(code **)(puVar16[1] + 0x18))(*puVar16), lVar17 == 0)) goto LAB_141ad1e31;
      uVar22 = *(undefined8 *)(lVar17 + 8);
      uVar24 = *(undefined8 *)(lVar17 + 0x10);
LAB_141ad1a63:
      pdb_140a85430(lVar18,1,uVar22,uVar24);
      bVar11 = false;
      cVar6 = *(char *)(lVar25 + 0x2c);
    }
  }
  else {
    uVar7 = *(undefined4 *)((longlong)param_5 + 0x1c);
    puVar10 = (undefined4 *)param_5[2];
    *puVar10 = uVar7;
    lVar18 = *param_5;
    pdb_140a85b60(lVar18,lVar14,uStack_128,*(undefined4 *)(lVar25 + 0x28),uVar4,uVar5);
    bVar11 = fVar31 < _DAT_142e36f28;
    *puVar10 = uVar7;
    if (bVar11) {
      puVar16 = (undefined8 *)pdb_140bf45b0(*puStack_d0,&UNK_14331c998);
      if ((puVar16 == (undefined8 *)0x0) ||
         (lVar17 = (**(code **)(puVar16[1] + 0x18))(*puVar16), lVar17 == 0)) goto LAB_141ad1e31;
      uVar22 = *(undefined8 *)(lVar17 + 8);
      uVar24 = *(undefined8 *)(lVar17 + 0x10);
      goto LAB_141ad1a63;
    }
    lVar23 = *(longlong *)(lVar18 + 0x10);
    lVar19 = *(longlong *)(lVar18 + 0x28);
    if (lVar23 != lVar19) {
LAB_141ad1e11:
      pdb_142dc85e0(lVar23,lVar19,&UNK_143043428);
      goto LAB_141ad1e23;
    }
    pub_142e32760(*(undefined8 *)(lVar18 + 8),*(undefined8 *)(lVar18 + 0x20),lVar23 << 2);
    *(undefined2 *)(lVar18 + 0x280) = 0;
    *puVar10 = uVar7;
    puVar16 = (undefined8 *)pdb_140bf45b0(*puStack_d0,&UNK_14331c998);
    if ((puVar16 == (undefined8 *)0x0) ||
       (lVar17 = (**(code **)(puVar16[1] + 0x18))(*puVar16), lVar17 == 0)) goto LAB_141ad1e31;
    pdb_140a85430(lVar18,0,*(undefined8 *)(lVar17 + 8),*(undefined8 *)(lVar17 + 0x10));
    bVar11 = true;
    cVar6 = *(char *)(lVar25 + 0x2c);
  }
  lVar18 = lStack_c8;
  if (cVar6 == '\0') {
    lVar14 = lVar14 + uStack_128 * 8;
    if (lVar14 != 8 && uStack_128 != 0) {
      uVar30 = *(undefined4 *)(lVar14 + -8);
      fVar31 = *(float *)(lVar14 + -4);
    }
    if (*(longlong *)(lVar25 + 0x20) == 0) goto LAB_141ad1e4f;
    if (lVar14 == 8 || uStack_128 == 0) {
      uVar30 = **(undefined4 **)(lVar25 + 0x18);
      fVar31 = (float)(*(undefined4 **)(lVar25 + 0x18))[1];
    }
    uVar28 = pdb_1419c1ac0(*param_6,uVar30,fVar31);
    uVar7 = *(undefined4 *)(lVar25 + 0x28);
    uVar4 = *(undefined1 *)(lVar25 + 0x2d);
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar18 = *param_7;
    lVar25 = *(longlong *)(lVar18 + 0x30);
    uVar22 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar25 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7e6e0(lVar18 + 0x20);
    }
    lVar14 = *(longlong *)(lVar18 + 0x28);
    lVar17 = lVar25 * 0x20;
    *(undefined8 *)(lVar14 + lVar17) = uVar22;
    *(undefined4 *)(lVar14 + 8 + lVar17) = uVar30;
    *(undefined4 *)(lVar14 + 0xc + lVar17) = uVar28;
    *(float *)(lVar14 + 0x10 + lVar17) = fVar31;
    *(undefined4 *)(lVar14 + 0x14 + lVar17) = uVar7;
    *(undefined1 *)(lVar14 + 0x18 + lVar17) = 1;
    *(undefined1 *)(lVar14 + 0x1c + lVar17) = uVar4;
    *(longlong *)(lVar18 + 0x30) = lVar25 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    lVar18 = lStack_c8;
  }
  if (!bVar11) {
    return;
  }
  uVar21 = *(ulonglong *)(lVar18 + 0x10);
  lStack_c8 = lVar18;
  if (uVar13 < uVar21) {
    lVar25 = *(longlong *)(lVar18 + 8);
    cVar6 = *(char *)(lVar25 + -0x30 + uVar1);
    puVar10 = (undefined4 *)(lVar25 + -0x2f + uVar1);
    uStack_b8 = *puVar10;
    uStack_b4 = puVar10[1];
    uStack_b0 = puVar10[2];
    uStack_ac = puVar10[3];
    puVar10 = (undefined4 *)(lVar25 + -0x1f + uVar1);
    uStack_a8 = *puVar10;
    uStack_a4 = puVar10[1];
    uStack_a0 = puVar10[2];
    uStack_9c = puVar10[3];
    puVar10 = (undefined4 *)(lVar25 + -0x10 + uVar1);
    uStack_95 = puVar10[1];
    uStack_91 = puVar10[2];
    uStack_8d = puVar10[3];
    uStack_98 = (undefined3)((uint)*puVar10 >> 8);
    pub_142e32770(lVar25 + uVar1 + -0x30,lVar25 + uVar1,(uVar21 - uVar20) * 0x30);
    uVar21 = uVar21 - 1;
    *(ulonglong *)(lVar18 + 0x10) = uVar21;
    if (cVar6 != '\f') {
      uStack_f8 = (undefined1)((uint)uStack_b4 >> 0x18);
      uStack_f7 = (undefined7)CONCAT44(uStack_ac,uStack_b0);
      uStack_f0 = (undefined1)((uint)uStack_ac >> 0x18);
      uStack_ef = uStack_a8;
      uStack_eb = uStack_a4;
      uVar30 = uStack_eb;
      uStack_e7 = uStack_a0;
      uStack_e3 = uStack_9c;
      uStack_df = uStack_98;
      uStack_dc = uStack_95;
      uStack_d8 = uStack_91;
      uStack_d4 = uStack_8d;
      uStack_eb._0_3_ = (undefined3)uStack_a4;
      uStack_eb = uVar30;
      switch(cVar6) {
      case '\0':
      case '\x01':
      case '\x02':
        goto code_r0x000141ad1cf9;
      case '\x03':
        plVar12 = (longlong *)CONCAT71(uStack_f7,uStack_f8);
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 != 0) {
          return;
        }
        pdb_140c7a720();
        return;
      case '\x04':
        pdb_14099a2e0();
        return;
      case '\x05':
        plVar12 = (longlong *)CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_a8,uStack_f0));
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 != 0) {
          return;
        }
        pdb_140c7a0f0(&uStack_f0);
        return;
      case '\x06':
        plVar12 = (longlong *)CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_a8,uStack_f0));
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 != 0) {
          return;
        }
        pdb_140c7a030(&uStack_f0);
        return;
      case '\a':
        plVar12 = (longlong *)CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_a8,uStack_f0));
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 != 0) {
          return;
        }
        pdb_140c7a030(&uStack_f0);
        return;
      case '\b':
        plVar12 = (longlong *)CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_a8,uStack_f0));
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 != 0) {
          return;
        }
        pdb_140c7b150(&uStack_f0);
        return;
      case '\t':
        plVar12 = (longlong *)CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_a8,uStack_f0));
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 != 0) {
          return;
        }
        pdb_140315620(&uStack_f0);
        return;
      case '\n':
        plVar12 = (longlong *)CONCAT35((undefined3)uStack_eb,CONCAT41(uStack_a8,uStack_f0));
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 != 0) {
          return;
        }
        pdb_140740180(&uStack_f0);
        return;
      default:
        plVar12 = (longlong *)CONCAT71(uStack_f7,uStack_f8);
        LOCK();
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 != 0) {
          return;
        }
        pdb_140c7bc60(&uStack_f8);
        return;
      }
    }
  }
  pdb_142dc7ef8(uVar13,uVar21,&UNK_1433880a8);
LAB_141ad1e4f:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_143388090);
}

