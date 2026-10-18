// VA 0x140bebeb0, PDB extent 1527 bytes
// country_core::systems::garden::draw_plant_paint::draw_plant_paint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/draw_plant_paint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::garden::draw_plant_paint::draw_plant_paint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/draw_plant_paint.rs
   Extent: 1527 */

void pdb_140bebeb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,byte *param_8,
                  longlong *param_9,undefined8 *param_10,longlong *param_11,longlong *param_12)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 auStack_148 [6];
  undefined4 uStack_130;
  undefined4 uStack_118;
  undefined4 uStack_100;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  uVar17 = *param_10;
  uStack_c8 = param_10[4];
  uStack_c0 = param_10[5];
  uStack_b8 = param_10[6];
  uStack_b0 = param_10[7];
  uStack_e8 = *(undefined4 *)(param_10 + 8);
  uStack_e4 = *(undefined4 *)((longlong)param_10 + 0x44);
  uStack_e0 = *(undefined4 *)(param_10 + 9);
  uStack_dc = *(undefined4 *)((longlong)param_10 + 0x4c);
  uStack_d8 = *(undefined4 *)(param_10 + 10);
  uStack_d4 = *(undefined4 *)((longlong)param_10 + 0x54);
  uStack_d0 = *(undefined4 *)(param_10 + 0xb);
  uStack_cc = *(undefined4 *)((longlong)param_10 + 0x5c);
  bVar3 = *(byte *)*param_1;
  if ((((0xe < bVar3) || ((0x780cU >> (bVar3 & 0x1f) & 1) == 0)) || (bVar3 != 0xe)) ||
     (*(char *)*param_2 != '\0')) goto LAB_140bec3ad;
  bVar3 = ((byte *)*param_1)[1];
  fVar20 = *(float *)(*param_5 + 8) * _DAT_142e36f50 * _DAT_142f95160;
  auStack_148[0] = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  puVar13 = &UNK_143065b8e;
  lVar8 = pdb_1408ffe50(*param_3,&UNK_143065b8e,0xb,0x7805);
  pfVar11 = (float *)&UNK_143044340;
  if (*(char *)*param_4 != '\0') {
    pfVar11 = (float *)((char *)*param_4 + 4);
  }
  fVar1 = *pfVar11;
  fVar2 = pfVar11[2];
  uVar15 = CONCAT71((int7)((ulonglong)param_4 >> 8),2);
  if ((*(char *)(lVar8 + 0x18) == '\x02') && (*(undefined **)(lVar8 + 0x38) == puVar13)) {
    uVar15 = (ulonglong)*(byte *)(lVar8 + 0x19);
  }
  uStack_98 = CONCAT44(uStack_98._4_4_,pfVar11[1]);
  pdb_140defa80(auStack_148,fVar1,fVar2,fVar20);
  cVar7 = pdb_140bfacd0(param_8,uVar15 & 0xffffffff,auStack_148,uVar17);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_8) {
  case 1:
    param_9[2] = 0;
    if (*param_9 == 0) {
      pdb_142db07d0(param_9);
    }
    pfVar11 = (float *)param_9[1];
    *pfVar11 = fVar1;
    pfVar11[1] = fVar2;
    param_9[2] = 1;
    fVar18 = _DAT_142e37870 + fVar1;
    if (*param_9 == 1) {
      pdb_142db07d0(param_9);
    }
    *(ulonglong *)(param_9[1] + 8) = CONCAT44(fVar2 + 0.0,fVar18);
    param_9[2] = 2;
    uVar14 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar16 = (undefined4 *)param_7[2];
    *puVar16 = uVar14;
    lVar8 = *param_7;
    pdb_140a85240(lVar8);
    *puVar16 = uVar14;
    goto code_r0x000140bec156;
  case 2:
    if (cVar7 == '\0') {
      return;
    }
    lVar8 = param_9[1];
    lVar10 = param_9[2];
    if (((lVar10 == 0) ||
        (puVar9 = (undefined8 *)(lVar8 + lVar10 * 8 + -8), puVar9 == (undefined8 *)0x0)) ||
       (uVar17 = *puVar9, fVar18 = (float)uVar17 - fVar1,
       fVar19 = (float)((ulonglong)uVar17 >> 0x20) - fVar2,
       _DAT_143009d64 <= fVar19 * fVar19 + fVar18 * fVar18)) {
      if (lVar10 == *param_9) {
        pdb_142db07d0(param_9);
        lVar8 = param_9[1];
      }
      *(float *)(lVar8 + lVar10 * 8) = fVar1;
      *(float *)(lVar8 + 4 + lVar10 * 8) = fVar2;
      param_9[2] = lVar10 + 1;
    }
    uVar14 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar16 = (undefined4 *)param_7[2];
    *puVar16 = uVar14;
    lVar8 = *param_7;
code_r0x000140bec156:
    pdb_140a85b60(lVar8,param_9[1],param_9[2],fVar20);
    *puVar16 = uVar14;
    puVar9 = (undefined8 *)pdb_140bf45b0(*param_6,&UNK_14331c998);
    if ((puVar9 == (undefined8 *)0x0) ||
       (lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar10 == 0)) {
code_r0x000140bec419:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143043538);
    }
    pdb_140a85430(lVar8,1,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
    *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
    lVar8 = *param_12;
    lVar10 = *(longlong *)(lVar8 + 0x30);
    uVar17 = *(undefined8 *)(lVar8 + 0x40);
    if (lVar10 == *(longlong *)(lVar8 + 0x20)) {
      pdb_142d7e6e0(lVar8 + 0x20);
    }
    lVar5 = *(longlong *)(lVar8 + 0x28);
    lVar12 = lVar10 * 0x20;
    *(undefined8 *)(lVar5 + lVar12) = uVar17;
    *(float *)(lVar5 + 8 + lVar12) = fVar1;
    *(undefined4 *)(lVar5 + 0xc + lVar12) = (undefined4)uStack_98;
    *(float *)(lVar5 + 0x10 + lVar12) = fVar2;
    *(float *)(lVar5 + 0x14 + lVar12) = fVar20;
    *(undefined1 *)(lVar5 + 0x18 + lVar12) = 0;
    *(byte *)(lVar5 + 0x1c + lVar12) = bVar3;
    *(longlong *)(lVar8 + 0x30) = lVar10 + 1;
    *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
    break;
  case 3:
    uVar14 = *(undefined4 *)((longlong)param_7 + 0x1c);
    puVar16 = (undefined4 *)param_7[2];
    *puVar16 = uVar14;
    lVar8 = *param_7;
    pdb_140a85b60(lVar8,param_9[1],param_9[2],fVar20);
    *puVar16 = uVar14;
    lVar10 = *(longlong *)(lVar8 + 0x10);
    if (lVar10 != *(longlong *)(lVar8 + 0x28)) {
      pdb_142dc85e0(lVar10,*(longlong *)(lVar8 + 0x28),&UNK_143043428);
      goto code_r0x000140bec419;
    }
    pub_142e32760(*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x20),lVar10 << 2);
    *(undefined2 *)(lVar8 + 0x280) = 0;
    *puVar16 = uVar14;
    puVar9 = (undefined8 *)pdb_140bf45b0(*param_6);
    if ((puVar9 == (undefined8 *)0x0) ||
       (lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar10 == 0)) goto code_r0x000140bec419;
    uVar17 = 0;
    pdb_140a85430(lVar8,0,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
    uVar4 = param_9[2];
    uVar15 = uVar4 * 8;
    if (uVar15 < 0x7ffffffffffffffd && uVar4 >> 0x3d == 0) goto code_r0x000140bec2fb;
    do {
      pdb_142dc7e2a(uVar17,uVar15);
code_r0x000140bec2fb:
      lVar8 = param_9[1];
      if (uVar15 == 0) {
        pbStack_a0 = (byte *)0x4;
        uStack_98 = 0;
        uVar6 = uStack_98;
        break;
      }
      pdb_14007ee60();
      uVar17 = 4;
      pbStack_a0 = pub_1406abab0(uVar15,4);
      uVar6 = uVar4;
    } while (pbStack_a0 == (byte *)0x0);
    uStack_98 = uVar6;
    if (uVar4 != 0) {
      pub_142e32760(pbStack_a0,lVar8,uVar15);
    }
    *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
    lVar8 = *param_11;
    lVar10 = *(longlong *)(lVar8 + 0x30);
    uVar17 = *(undefined8 *)(lVar8 + 0x40);
    if (lVar10 == *(longlong *)(lVar8 + 0x20)) {
      pdb_142d7ede0(lVar8 + 0x20);
    }
    lVar5 = *(longlong *)(lVar8 + 0x28);
    *(ulonglong *)(lVar5 + lVar10 * 0x28) = uStack_98;
    *(byte **)(lVar5 + 8 + lVar10 * 0x28) = pbStack_a0;
    *(ulonglong *)(lVar5 + 0x10 + lVar10 * 0x28) = uVar4;
    *(float *)(lVar5 + 0x18 + lVar10 * 0x28) = fVar20;
    *(undefined1 *)(lVar5 + 0x1c + lVar10 * 0x28) = 0;
    *(byte *)(lVar5 + 0x1d + lVar10 * 0x28) = bVar3;
    *(undefined8 *)(lVar5 + 0x20 + lVar10 * 0x28) = uVar17;
    *(longlong *)(lVar8 + 0x30) = lVar10 + 1;
    *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
  case 0:
LAB_140bec3ad:
    param_9[2] = 0;
    break;
  case 4:
    *(int *)(&UNK_143065e34 + *(int *)(&UNK_143065e7c + (ulonglong)*param_8 * 4)) =
         *(int *)(&UNK_143065e34 + *(int *)(&UNK_143065e7c + (ulonglong)*param_8 * 4)) <<
         ((char)*(int *)(&UNK_143065e7c + (ulonglong)*param_8 * 4) + 0x7cU & 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

