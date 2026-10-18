// VA 0x1423a1e30, PDB extent 2094 bytes
// toolbar::menu::welcome::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/welcome.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::welcome::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/welcome.rs
   Extent: 2094 */

void pdb_1423a1e30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined4 *puStack_f8;
  longlong *plStack_f0;
  longlong *plStack_e8;
  undefined8 *puStack_e0;
  longlong *plStack_d0;
  undefined4 *puStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  longlong *plStack_88;
  undefined4 uStack_7c;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  plVar14 = param_10;
  uStack_60 = 0xfffffffffffffffe;
  puVar15 = param_2;
  plStack_a0 = param_4;
  plStack_78 = param_1;
  cVar8 = pdb_140e94b40();
  if (cVar8 == '\0') {
    lStack_98 = 0;
  }
  else {
    lVar19 = 0x1a;
    lVar11 = pdb_1423a1a10(0x1a);
    puVar17 = &UNK_1434e1d60;
    if (lVar11 == 1) {
      if ((undefined8 *)0x1a < puVar15) {
LAB_1423a24f7:
        pdb_142dc8070(&UNK_1434e1d60,0x1a,0);
LAB_1423a2517:
        pdb_142dc8070(&UNK_1434e1d60,0x1a);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = pdb_1423a1a10(puVar15);
      if ((uVar12 & 1) != 0) {
        if (0x1a < (longlong)puVar15 + 2U) goto LAB_1423a2517;
        lVar19 = 0x18 - (longlong)puVar15;
        puVar17 = &UNK_1434e1d62 + (longlong)puVar15;
      }
    }
    puVar16 = &UNK_1434e1e85;
    puVar18 = &UNK_1434e1e5b;
    do {
      bVar9 = puVar16[-1];
      uVar10 = (uint)(char)bVar9;
      if ((char)bVar9 < '\0') {
        bVar2 = puVar16[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar16[-3];
          if ((char)bVar3 < -0x40) {
            pbVar1 = puVar16 + -4;
            puVar16 = puVar16 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar16 = puVar16 + -3;
            uVar10 = bVar3 & 0xf;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        else {
          puVar16 = puVar16 + -2;
          uVar10 = bVar2 & 0x1f;
        }
        uVar10 = (uint)(bVar9 & 0x3f) | uVar10 << 6;
        if (uVar10 != 0x5c) goto LAB_1423a1f54;
LAB_1423a1f6c:
        puVar18 = puVar16 + -0x1434e1e5a;
        if ((undefined *)0x2a < puVar18) {
          pdb_142dc8070(&UNK_1434e1e5b,0x2a,puVar18,0x2a,&UNK_1434e1de0);
          goto LAB_1423a24f7;
        }
        lVar11 = 0x2a - (longlong)puVar18;
        puVar18 = puVar16 + 1;
        goto LAB_1423a1f8e;
      }
      puVar16 = puVar16 + -1;
      if (uVar10 == 0x5c) goto LAB_1423a1f6c;
LAB_1423a1f54:
      if (uVar10 == 0x2f) goto LAB_1423a1f6c;
    } while (puVar16 != &UNK_1434e1e5b);
    lVar11 = 0x2a;
LAB_1423a1f8e:
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] != '\x01') &&
       (plVar13 = (longlong *)pdb_142dcf3a0(plVar13,0), plVar13 == (longlong *)0x0))
    goto LAB_1423a2498;
    if (*plVar13 != 0) goto LAB_1423a2464;
    *plVar13 = -1;
    plStack_70 = plVar13;
    uStack_90 = pdb_140e94f10(plVar13 + 1,puVar17,lVar19,puVar18,lVar11,1,0);
    *plStack_70 = *plStack_70 + 1;
    lStack_98 = 1;
  }
  if ((*(char *)(*param_6 + 0xe5) != '\0') || (lVar11 = *param_7, *(char *)(lVar11 + 0x419) != '\0')
     ) {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)*param_2 = 2;
    goto joined_r0x0001423a202f;
  }
  plStack_88 = plVar14;
  if (*param_9 == 0) {
    bVar9 = 1;
  }
  else {
    plVar14 = (longlong *)pdb_1406d0830();
    puStack_c8 = (undefined4 *)pub_142e31f10();
    plVar14 = (longlong *)*plVar14;
    LOCK();
    lVar19 = *plVar14;
    *plVar14 = *plVar14 + 1;
    UNLOCK();
    if (*plVar14 == 0 || SCARRY8(lVar19,1) != *plVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    plStack_d0 = plVar14;
    bVar9 = pub_142e31e90(puStack_c8);
    LOCK();
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      pdb_140cb1c10(&plStack_d0);
    }
    bVar9 = bVar9 ^ 1;
  }
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar5 = (undefined4 *)param_2[2];
  *puVar5 = uVar4;
  plStack_70 = (longlong *)*param_2;
  if ((int)*plStack_70 == 0) {
    if (*(int *)*param_5 == 2) {
      *plStack_70 = 1;
    }
  }
  else if ((int)*plStack_70 == 1) {
    cVar8 = pdb_14093a8d0(*param_3);
    if (cVar8 == '\0') {
      if (*(int *)*param_5 == 2) {
        if (bVar9 == 0) {
          *(undefined4 *)plStack_78[2] = *(undefined4 *)((longlong)plStack_78 + 0x1c);
          pdb_14116dcb0(&plStack_d0,*plStack_78,&UNK_1434e1e85,7,1);
          if (*plStack_88 == 0) {
            puVar17 = &UNK_1434e1eb0;
          }
          else {
            if (*plStack_88 != 1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_1434e1ed6,0x28,&UNK_1434e1f00);
            }
            puVar17 = &UNK_1434e1ec3;
          }
          pdb_141174160(&puStack_f8,&plStack_d0,puVar17,0x13,0);
          if (*plStack_88 == 0) {
            fVar21 = *(float *)(*plStack_a0 + 0x28) + *(float *)((longlong)plStack_70 + 4);
            *(float *)((longlong)plStack_70 + 4) = fVar21;
            lVar11 = pdb_140737690(&puStack_f8);
            fVar21 = fVar21 / _DAT_142e37988;
            fVar20 = 0.0;
            if (0.0 <= fVar21) {
              fVar20 = fVar21;
            }
            fVar21 = _DAT_142e36f28;
            if (fVar20 <= _DAT_142e36f28) {
              fVar21 = fVar20;
            }
            fVar20 = (_DAT_142e3788c - (fVar21 + fVar21)) * fVar21 * fVar21;
          }
          else {
            lVar11 = pdb_140737690(&puStack_f8);
            fVar20 = _DAT_142e36f28;
          }
          *(float *)(lVar11 + 0xc4) = fVar20;
          uStack_7c = 0x41d80000;
          uStack_61 = *plStack_88 == 1;
          plStack_d0 = (longlong *)&uStack_61;
          puStack_c8 = &uStack_7c;
          plStack_c0 = param_7;
          plStack_b8 = param_8;
          puStack_a8 = &param_10;
          puStack_b0 = param_2;
          pdb_141190c90(&puStack_f8,&UNK_1434e1ea9,7,&plStack_d0);
        }
        else {
          uStack_7c = 0x41900000;
          *(undefined4 *)plStack_78[2] = *(undefined4 *)((longlong)plStack_78 + 0x1c);
          pdb_14116dcb0(&puStack_f8,*plStack_78,&UNK_1434e1e85,7,1);
          puVar17 = &UNK_1434e1e8c;
          if ((ulonglong)*_DAT_143ca4500 != 0) {
            puVar17 = &UNK_1434e1e98;
          }
          pdb_141174160(&plStack_d0,&puStack_f8,puVar17,(ulonglong)*_DAT_143ca4500 * 5 + 0xc,0);
          fVar21 = *(float *)(*plStack_a0 + 0x28) + *(float *)((longlong)plStack_70 + 4);
          *(float *)((longlong)plStack_70 + 4) = fVar21;
          lVar11 = pdb_140737690(&plStack_d0);
          fVar21 = fVar21 / _DAT_142e37988;
          fVar20 = 0.0;
          if (0.0 <= fVar21) {
            fVar20 = fVar21;
          }
          fVar21 = _DAT_142e36f28;
          if (fVar20 <= _DAT_142e36f28) {
            fVar21 = fVar20;
          }
          *(float *)(lVar11 + 0xc4) = (_DAT_142e3788c - (fVar21 + fVar21)) * fVar21 * fVar21;
          puStack_f8 = &uStack_7c;
          plStack_f0 = param_7;
          plStack_e8 = param_8;
          puStack_e0 = param_2;
          pdb_14118faf0(&plStack_d0,&UNK_1434e1ea9,7,&puStack_f8);
        }
        goto LAB_1423a213a;
      }
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      *(undefined1 *)(lVar11 + 0x419) = 1;
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      lVar11 = *param_8;
      lVar19 = *(longlong *)(lVar11 + 0x30);
      uVar6 = *(undefined8 *)(lVar11 + 0x40);
      if (lVar19 == *(longlong *)(lVar11 + 0x20)) {
        pdb_142d7e8a0(lVar11 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar11 + 0x28) + lVar19 * 8) = uVar6;
      *(longlong *)(lVar11 + 0x30) = lVar19 + 1;
      *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 1;
      *puVar5 = uVar4;
      *(undefined4 *)plStack_70 = 2;
    }
    else {
      *(undefined4 *)((longlong)plStack_70 + 4) = 0;
    }
joined_r0x0001423a202f:
    if (lStack_98 == 0) {
      return;
    }
    plVar14 = (longlong *)pdb_140e97000();
    if ((char)plVar14[0xd] != '\x01') goto LAB_1423a2470;
    goto LAB_1423a2040;
  }
LAB_1423a213a:
  if (lStack_98 != 0) {
    plVar14 = (longlong *)pdb_140e97000();
    if ((char)plVar14[0xd] != '\x01') goto LAB_1423a24a4;
    while (*plVar14 != 0) {
LAB_1423a2464:
      while( true ) {
        plVar14 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_1423a2470:
        plVar14 = (longlong *)pdb_142dcf3a0(plVar14,0);
        if (plVar14 == (longlong *)0x0) break;
LAB_1423a2040:
        if (*plVar14 == 0) {
          *plVar14 = -1;
          plStack_78 = plVar14;
          pdb_140e95370(plVar14 + 1,uStack_90);
          goto LAB_1423a2063;
        }
      }
LAB_1423a2498:
      do {
        plVar14 = (longlong *)pdb_142dc7890(&UNK_1432a7ee8);
LAB_1423a24a4:
        plVar14 = (longlong *)pdb_142dcf3a0(plVar14,0);
      } while (plVar14 == (longlong *)0x0);
    }
    *plVar14 = -1;
    plStack_78 = plVar14;
    pdb_140e95370(plVar14 + 1,uStack_90);
LAB_1423a2063:
    *plStack_78 = *plStack_78 + 1;
  }
  return;
}

