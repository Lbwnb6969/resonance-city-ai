// VA 0x1408970c0, PDB extent 2211 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_lazy_update::playermade_stairs_assembly_propagate_dirty_flags
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_lazy_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_lazy_update::playermade_stairs_assembly_propagate_dirty_flags
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_lazy_update.rs
   Extent: 2211 */

void pdb_1408970c0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulonglong *puVar10;
  float fVar11;
  ulonglong *puVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  longlong lVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 auStack_328 [64];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  longlong alStack_e8 [3];
  undefined *puStack_d0;
  longlong *plStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  ulonglong *puStack_80;
  undefined4 uStack_74;
  undefined *puStack_70;
  ulonglong *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_128 = *param_2;
  uStack_124 = param_2[1];
  uStack_120 = param_2[2];
  uStack_11c = param_2[3];
  uStack_118 = param_2[4];
  uStack_114 = param_2[5];
  uStack_110 = param_2[6];
  uStack_10c = param_2[7];
  lVar18 = *(longlong *)(param_2 + 8);
  puVar17 = *(ulonglong **)(param_2 + 0xc);
  uVar6 = param_2[0xf];
  puStack_70 = (undefined *)param_4[5];
  puStack_a8 = (undefined4 *)param_4[7];
  uStack_74 = *(undefined4 *)((longlong)param_4 + 0x44);
  uStack_b0 = param_4[9];
  plStack_c8 = param_1;
  cVar13 = pdb_140e94b40();
  if (cVar13 == '\0') {
    lStack_c0 = 0;
    goto LAB_1408972ec;
  }
  puVar29 = &UNK_143013060;
  lVar24 = 0x7b;
  uVar21 = 0x7b;
  lVar15 = pdb_140897970(&UNK_143013060);
  if (lVar15 == 1) {
    if (uVar21 < 0x7c) {
      puVar29 = &UNK_143013060;
      uVar16 = pdb_140897970(&UNK_143013060);
      if ((uVar16 & 1) != 0) {
        if (0x7b < uVar21 + 2) goto LAB_1408977ea;
        lVar24 = 0x79 - uVar21;
        puVar29 = &UNK_143013062 + uVar21;
      }
      goto LAB_1408971b2;
    }
  }
  else {
LAB_1408971b2:
    puVar25 = &UNK_143012f55;
    puVar28 = &UNK_143012f00;
    do {
      bVar3 = puVar25[-1];
      uVar14 = (uint)(char)bVar3;
      puStack_68 = puVar17;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar25[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar25[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar25 + -4;
            puVar25 = puVar25 + -4;
            uVar14 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar25 = puVar25 + -3;
            uVar14 = bVar5 & 0xf;
          }
          uVar14 = bVar4 & 0x3f | uVar14 << 6;
        }
        else {
          puVar25 = puVar25 + -2;
          uVar14 = bVar4 & 0x1f;
        }
        uVar14 = (uint)(bVar3 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_140897244;
LAB_14089725c:
        puVar26 = puVar25 + -0x143012eff;
        if ((undefined *)0x55 < puVar26) goto LAB_1408977a7;
        uVar21 = 0x55 - (longlong)puVar26;
        puVar28 = puVar25 + 1;
        goto LAB_14089727e;
      }
      puVar25 = puVar25 + -1;
      if (uVar14 == 0x5c) goto LAB_14089725c;
LAB_140897244:
      if (uVar14 == 0x2f) goto LAB_14089725c;
    } while (puVar25 != &UNK_143012f00);
    uVar21 = 0x55;
    puVar26 = &UNK_143012f00;
LAB_14089727e:
    puVar17 = (ulonglong *)pdb_140e97000();
    if (((char)puVar17[0xd] == '\x01') ||
       (puVar17 = (ulonglong *)pdb_142dde6e0(puVar17,0), puVar17 != (ulonglong *)0x0)) {
      if (*puVar17 != 0) goto LAB_140897741;
      *puVar17 = 0xffffffffffffffff;
      puStack_80 = puVar17;
      uStack_b8 = pdb_140e94f10(puVar17 + 1,puVar29,lVar24,puVar28,uVar21,1,0);
      *puStack_80 = *puStack_80 + 1;
      lStack_c0 = 1;
      puVar17 = puStack_68;
LAB_1408972ec:
      *(undefined4 *)puVar17 = uVar6;
      puVar26 = (undefined *)(lVar18 + 0x198);
      puVar29 = *(undefined **)(lVar18 + 8);
      uVar21 = *(ulonglong *)(lVar18 + 0x10);
      uVar16 = uVar21 + 1 >> 1;
      if (*(longlong *)(lVar18 + 0x1b0) == 0) {
        uVar16 = uVar21;
      }
      if (*(ulonglong *)(lVar18 + 0x1a8) < uVar16) goto LAB_14089774d;
LAB_140897325:
      pdb_1414e2400(puVar29,puVar29 + uVar21 * 0x150,puVar26);
      puVar17 = (ulonglong *)*param_4;
      lVar18 = param_4[1];
      uVar21 = *puVar17;
      puVar25 = (undefined *)0x0;
      puVar29 = (undefined *)(uVar21 - *(ulonglong *)(lVar18 + 0x18));
      if (uVar21 < *(ulonglong *)(lVar18 + 0x18)) {
        puVar29 = puVar25;
      }
      puVar28 = (undefined *)(uVar21 - *(ulonglong *)(lVar18 + 0x38));
      if (uVar21 < *(ulonglong *)(lVar18 + 0x38)) {
        puVar28 = puVar25;
      }
      puVar23 = (ulonglong *)((longlong)puVar29 * 0xb0 + *(longlong *)(lVar18 + 8));
      puVar26 = *(undefined **)(lVar18 + 0x10);
      puVar27 = puVar26 + -(longlong)puVar29;
      if (puVar26 < puVar29) {
        puVar27 = puVar25;
      }
      if (puVar26 < puVar29) {
        puVar23 = (ulonglong *)0x8;
      }
      puVar22 = (ulonglong *)((longlong)puVar28 * 0xb0 + *(longlong *)(lVar18 + 0x28));
      puVar26 = *(undefined **)(lVar18 + 0x30) + -(longlong)puVar28;
      if (*(undefined **)(lVar18 + 0x30) < puVar28) {
        puVar22 = (ulonglong *)0x8;
        puVar26 = puVar25;
      }
      *puVar17 = (*(longlong *)(lVar18 + 0x40) - (longlong)puVar26) - (longlong)puVar27;
      fVar11 = _DAT_142e3788c;
      puStack_68 = puVar23 + (longlong)puVar27 * 0x16;
      puStack_80 = puVar22 + (longlong)puVar26 * 0x16;
      puStack_a0 = puStack_70 + 0x20;
      do {
        if ((puVar23 == (ulonglong *)0x0) || (puVar23 == puStack_68)) {
          if ((puVar22 == (ulonglong *)0x0) || (puVar22 == puStack_80)) goto LAB_1408975c2;
          *puVar17 = *puVar17 + 1;
          iVar7 = (int)puVar22[0x10];
          puVar20 = (ulonglong *)0x0;
          puVar12 = puVar22 + 0x16;
          puVar10 = puVar22;
        }
        else {
          *puVar17 = *puVar17 + 1;
          iVar7 = (int)puVar23[0x10];
          puVar20 = puVar23 + 0x16;
          puVar12 = puVar22;
          puVar10 = puVar23;
        }
        puVar22 = puVar12;
        puVar23 = puVar20;
        if (iVar7 == 7) {
          uVar21 = *puVar10;
          lVar18 = 0;
          if (1 < uVar21) {
            lVar18 = uVar21 - 2;
          }
          puVar20 = puVar10;
          if (lVar18 != 0) {
            puVar20 = puVar10 + 1;
          }
          lVar18 = pdb_140c413e0(puVar20);
          puVar29 = puVar28;
          if (lVar18 == 1) {
            puVar26 = &UNK_143012fe8;
            lVar18 = pdb_140b54f80(uStack_b0);
            if ((lVar18 != 0) && (*(float *)(lVar18 + 0x288) <= fVar11)) {
              *puStack_a8 = uStack_74;
              lVar18 = *(longlong *)(puStack_70 + 0x30);
              puStack_d0 = *(undefined **)(puStack_70 + 0x40);
              if (lVar18 == *(longlong *)(puStack_70 + 0x20)) {
                pdb_142d7e980(puStack_a0);
              }
              lVar15 = *(longlong *)(puStack_70 + 0x28);
              *(undefined **)(lVar15 + lVar18 * 0x10) = puStack_d0;
              *(undefined **)(lVar15 + 8 + lVar18 * 0x10) = puVar28;
              *(longlong *)(puStack_70 + 0x30) = lVar18 + 1;
              *(longlong *)(puStack_70 + 0x40) = *(longlong *)(puStack_70 + 0x40) + 1;
              puVar29 = puStack_70;
              puVar26 = puStack_d0;
            }
          }
          puVar28 = puVar29;
          if (((uint)uVar21 < 3) && (puVar10[2] == 0)) {
            puVar29 = (undefined *)puVar10[3];
            puVar26 = &UNK_143012fe8;
            puVar28 = puVar29;
            lVar18 = pdb_140b54f80(uStack_b0);
            if ((lVar18 != 0) && (*(float *)(lVar18 + 0x288) <= fVar11)) {
              *puStack_a8 = uStack_74;
              lVar18 = *(longlong *)(puStack_70 + 0x30);
              uVar8 = *(undefined8 *)(puStack_70 + 0x40);
              if (lVar18 == *(longlong *)(puStack_70 + 0x20)) {
                pdb_142d7e980(puStack_a0);
              }
              lVar15 = *(longlong *)(puStack_70 + 0x28);
              *(undefined8 *)(lVar15 + lVar18 * 0x10) = uVar8;
              *(undefined **)(lVar15 + 8 + lVar18 * 0x10) = puVar29;
              *(longlong *)(puStack_70 + 0x30) = lVar18 + 1;
              *(longlong *)(puStack_70 + 0x40) = *(longlong *)(puStack_70 + 0x40) + 1;
              puVar28 = puStack_70;
            }
          }
        }
      } while( true );
    }
LAB_14089779b:
    pdb_142dc7890(&UNK_14330e598);
LAB_1408977a7:
    pdb_142dc8070(&UNK_143012f00,0x55);
  }
  pdb_142dc8070(&UNK_143013060,0x7b,0);
LAB_1408977ea:
  pdb_142dc8070(&UNK_143013060,0x7b);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
LAB_1408975c2:
  pdb_140a84d70(auStack_328);
  *(undefined4 *)plStack_c8[2] = *(undefined4 *)((longlong)plStack_c8 + 0x1c);
  uVar21 = *(ulonglong *)(*plStack_c8 + 8);
  uVar16 = uVar21 + *(longlong *)(*plStack_c8 + 0x10) * 8;
  param_4 = auStack_328;
  for (; uVar21 != uVar16; uVar21 = uVar21 + 8) {
    pdb_14147fe80(&uStack_100,uVar21);
    if (CONCAT44(uStack_fc,uStack_100) != 0) {
      uStack_98 = (ulonglong *)CONCAT44(uStack_fc,uStack_100);
      uStack_90 = uStack_f8;
      uStack_8c = uStack_f4;
      lStack_88 = lStack_f0;
      pdb_140a83f50(param_4,CONCAT44(uStack_f4,uStack_f8));
      puVar17 = uStack_98;
      pdb_140e9a350(uStack_98);
      pdb_140e9a350((ulonglong)puVar17 | 1);
      LOCK();
      uVar2 = *puVar17;
      *puVar17 = *puVar17 - 0x10;
      UNLOCK();
      if ((uVar2 & 0xfffffffffffffff2) == 0x12) {
        pdb_142dbbf50(puVar17);
      }
      lVar18 = lStack_88;
      lStack_88 = 0;
      alStack_e8[0] = lVar18 + -0x10;
      LOCK();
      plVar19 = (longlong *)(lVar18 + -0x10);
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (*plVar19 == 0) {
        pdb_140c7ba10(alStack_e8);
      }
    }
  }
  uStack_98 = (ulonglong *)&uStack_128;
  pdb_1414e3af0(auStack_328,&uStack_98);
  if (lStack_c0 == 0) {
    return;
  }
  plVar19 = (longlong *)pdb_140e97000();
  if (((char)plVar19[0xd] != '\x01') &&
     (plVar19 = (longlong *)pdb_142dde6e0(plVar19,0), plVar19 == (longlong *)0x0))
  goto LAB_14089779b;
  if (*plVar19 == 0) {
    *plVar19 = -1;
    puStack_68 = (ulonglong *)plVar19;
    pdb_140e95370(plVar19 + 1,uStack_b8);
    *puStack_68 = *puStack_68 + 1;
    return;
  }
LAB_140897741:
  puVar29 = &UNK_14330e608;
  pdb_142dc8090();
LAB_14089774d:
  pdb_142dda2e0(puVar26);
  goto LAB_140897325;
}

