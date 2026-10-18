// VA 0x1428e9370, PDB extent 2249 bytes
// system_clutter::autoclutter::autoclutter_animation::autoclutter_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/autoclutter_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::autoclutter_animation::autoclutter_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/autoclutter_animation.rs
   Extent: 2249 */

void pdb_1428e9370(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  longlong lVar40;
  bool bVar41;
  float *pfVar42;
  uint *puVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  float *pfVar48;
  bool bVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  longlong lStack_1b0;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_160;
  longlong lStack_158;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  fVar37 = _UNK_142e377dc;
  fVar36 = _UNK_142e377d8;
  fVar35 = _UNK_142e377d4;
  fVar34 = _DAT_142e377d0;
  fVar33 = _UNK_142e377cc;
  fVar32 = _UNK_142e377c8;
  fVar31 = _UNK_142e377c4;
  fVar30 = _DAT_142e377c0;
  fVar29 = _UNK_142e377bc;
  fVar28 = _UNK_142e377b8;
  fVar27 = _UNK_142e377b4;
  fVar26 = _DAT_142e377b0;
  fVar25 = _DAT_142e36f34;
  fVar24 = _DAT_142e36f28;
  lVar9 = *param_1;
  lVar10 = param_1[1];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar43 = *(uint **)(lVar9 + 0xf8);
  puVar1 = puVar43 + *(longlong *)(lVar9 + 0x100);
  cVar4 = *(char *)(lVar9 + 0x108);
  lVar11 = *param_3;
  uVar12 = param_2[3];
  uVar13 = param_2[2];
  uVar21 = *param_2;
  uVar22 = param_2[1];
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar14 = *param_4;
  puVar15 = (undefined4 *)param_4[2];
  lStack_158 = 8;
  fVar56 = (float)_DAT_142e378e0;
  uVar23 = (ulonglong)_DAT_142e378e0 >> 0x20;
  lStack_1a0 = 0;
  lStack_198 = 0;
  bVar41 = false;
  lStack_1b0 = 0;
  lStack_160 = 8;
  bVar49 = false;
  lVar44 = 0;
  uVar47 = 0;
  fVar52 = _DAT_142e37ae0;
LAB_1428e94ee:
  while( true ) {
    if (cVar4 == '\0') {
      if ((int)uVar47 == (int)lVar44) {
        do {
          if (puVar43 == puVar1) {
            return;
          }
          uVar8 = *puVar43;
          puVar43 = puVar43 + 1;
          lVar44 = *(longlong *)(*(longlong *)(lVar10 + 0x100) + 0x58 + (ulonglong)uVar8 * 0xa0);
        } while (lVar44 == 0);
        lVar45 = *(longlong *)(lVar10 + 0x100) + (ulonglong)uVar8 * 0xa0;
        uVar39 = (ulonglong)*(uint *)(lVar45 + 0x94);
        lVar46 = *(longlong *)(lVar10 + 0x1a0);
        lVar16 = *(longlong *)(lVar46 + 0x18 + uVar39 * 0x48);
        lVar40 = *(longlong *)(lVar46 + 0x38 + uVar39 * 0x48);
        uVar47 = *(ulonglong *)(lVar9 + 0x120);
        if ((uVar47 < *(ulonglong *)(lVar45 + 0x88)) &&
           (*(longlong *)(*(longlong *)(lVar45 + 0x80) + uVar47 * 8) != 0)) {
          bVar41 = true;
          if (uVar47 < *(ulonglong *)(lVar46 + 0x40 + uVar39 * 0x48)) {
            uVar47 = *(ulonglong *)(lVar40 + uVar47 * 8);
            if (uVar47 == 0) {
              lStack_1b0 = 0;
            }
            else {
              lStack_1b0 = *(longlong *)(lVar16 + 0x10 + ~uVar47 * 0x30);
            }
          }
          else {
            lStack_1b0 = 0;
          }
        }
        else {
          bVar41 = false;
        }
        bVar49 = false;
        if (*(ulonglong *)(lVar9 + 0x128) < *(ulonglong *)(lVar45 + 0x88)) {
          bVar49 = *(longlong *)(*(longlong *)(lVar45 + 0x80) + *(ulonglong *)(lVar9 + 0x128) * 8)
                   != 0;
        }
        lVar46 = ~*(ulonglong *)(lVar40 + *(longlong *)(lVar9 + 0x110) * 8) * 0x30;
        lStack_198 = *(longlong *)(lVar16 + 0x10 + lVar46);
        lStack_188 = *(longlong *)(lVar16 + 0x28 + lVar46);
        lVar46 = ~*(ulonglong *)(lVar40 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30;
        lStack_1a0 = *(longlong *)(lVar16 + 0x10 + lVar46);
        lStack_190 = *(longlong *)(lVar16 + 0x28 + lVar46);
        lStack_158 = *(longlong *)(lVar45 + 0x50);
        uVar47 = 0;
      }
      puVar38 = (undefined8 *)(lStack_158 + uVar47 * 0x10);
      uVar39 = (ulonglong)~*(uint *)(lStack_158 + 8 + uVar47 * 0x10);
    }
    else {
      if ((int)uVar47 == (int)lVar44) {
        do {
          if (puVar43 == puVar1) {
            return;
          }
          uVar8 = *puVar43;
          puVar43 = puVar43 + 1;
          lVar44 = *(longlong *)(*(longlong *)(lVar10 + 0x1a0) + 0x10 + (ulonglong)uVar8 * 0x48);
        } while (lVar44 == 0);
        lVar46 = *(longlong *)(lVar10 + 0x1a0) + (ulonglong)uVar8 * 0x48;
        lVar16 = *(longlong *)(lVar46 + 0x18);
        lVar40 = *(longlong *)(lVar46 + 0x38);
        if ((*(ulonglong *)(lVar9 + 0x120) < *(ulonglong *)(lVar46 + 0x40)) &&
           (uVar47 = *(ulonglong *)(lVar40 + *(ulonglong *)(lVar9 + 0x120) * 8), uVar47 != 0)) {
          lStack_1b0 = *(longlong *)(lVar16 + 0x10 + ~uVar47 * 0x30);
          bVar41 = true;
        }
        else {
          bVar41 = false;
        }
        bVar49 = false;
        if (*(ulonglong *)(lVar9 + 0x128) < *(ulonglong *)(lVar46 + 0x40)) {
          bVar49 = *(longlong *)(lVar40 + *(ulonglong *)(lVar9 + 0x128) * 8) != 0;
        }
        lVar45 = ~*(ulonglong *)(lVar40 + *(longlong *)(lVar9 + 0x110) * 8) * 0x30;
        lStack_198 = *(longlong *)(lVar16 + 0x10 + lVar45);
        lStack_188 = *(longlong *)(lVar16 + 0x28 + lVar45);
        lVar40 = ~*(ulonglong *)(lVar40 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30;
        lStack_1a0 = *(longlong *)(lVar16 + 0x10 + lVar40);
        lStack_190 = *(longlong *)(lVar16 + 0x28 + lVar40);
        lStack_160 = *(longlong *)(lVar46 + 8);
        uVar47 = 0;
      }
      puVar38 = (undefined8 *)(lStack_160 + uVar47 * 8);
      uVar39 = uVar47;
    }
    lVar46 = lStack_198 + uVar39 * 0x18;
    puVar2 = (undefined4 *)(lStack_188 + uVar39 * 4);
    pfVar42 = (float *)(uVar39 * 0x30 + lStack_1a0);
    puVar3 = (undefined4 *)(lStack_190 + uVar39 * 4);
    pfVar48 = (float *)(uVar39 * 0x20 + lStack_1b0);
    if (!bVar41) {
      pfVar48 = (float *)0x0;
    }
    uVar17 = *puVar38;
    if ((int)uVar17 == 0) {
      return;
    }
    if (bVar49) {
      fVar55 = *(float *)(lVar11 + 0x28) / fVar52;
    }
    else {
      fVar50 = *(float *)(lVar11 + 0x28);
      if (*(float *)(lVar46 + 8) <= 0.0) {
        fVar55 = fVar50 / *(float *)(&UNK_1435b2448 + (ulonglong)(pfVar48 == (float *)0x0) * 4);
      }
      else {
        *puVar2 = uVar6;
        fVar50 = *(float *)(lVar46 + 8) - fVar50;
        *(float *)(lVar46 + 8) = fVar50;
        fVar55 = 0.0;
        if (fVar50 < 0.0) {
          uVar5 = *(undefined1 *)(lVar46 + 0x14);
          uStack_108 = CONCAT44(uStack_108._4_4_,pfVar42[6]);
          uStack_110 = *(undefined8 *)(pfVar42 + 4);
          *puVar15 = uVar7;
          lVar16 = *(longlong *)(lVar14 + 0x30);
          uVar18 = *(undefined8 *)(lVar14 + 0x40);
          if (lVar16 == *(longlong *)(lVar14 + 0x20)) {
            pdb_142d7e830(lVar14 + 0x20);
          }
          lVar40 = *(longlong *)(lVar14 + 0x28);
          *(undefined8 *)(lVar40 + lVar16 * 0x18) = uVar18;
          *(undefined8 *)(lVar40 + 8 + lVar16 * 0x18) = uStack_110;
          *(undefined4 *)(lVar40 + 0x10 + lVar16 * 0x18) = (undefined4)uStack_108;
          *(undefined1 *)(lVar40 + 0x14 + lVar16 * 0x18) = uVar5;
          *(undefined1 *)(lVar40 + 0x15 + lVar16 * 0x18) = 0;
          *(longlong *)(lVar14 + 0x30) = lVar16 + 1;
          *(longlong *)(lVar14 + 0x40) = *(longlong *)(lVar14 + 0x40) + 1;
        }
      }
    }
    uVar47 = (ulonglong)((int)uVar47 + 1);
    *puVar2 = uVar6;
    fVar55 = fVar55 + *(float *)(lVar46 + 0xc);
    fVar50 = 0.0;
    if (0.0 <= fVar55) {
      fVar50 = fVar55;
    }
    fVar55 = fVar24;
    if (fVar50 <= fVar24) {
      fVar55 = fVar50;
    }
    *(float *)(lVar46 + 0xc) = fVar55;
    if (pfVar48 == (float *)0x0) goto LAB_1428e99c0;
    if (bVar49) break;
    fVar52 = fVar25;
    if (*(char *)(pfVar48 + 4) != '\0') {
      fVar52 = fVar24;
    }
    fVar51 = (float)pdb_140dedcd0(&UNK_1435b24a0);
    fVar50 = *pfVar48;
    fVar55 = pfVar48[1];
    fVar19 = pfVar48[2];
    fVar20 = pfVar48[3];
    fVar51 = (fVar51 * fVar52 * _DAT_1435b2450 - (fVar24 - fVar51) * fVar52 * _UNK_1435b2454) *
             _DAT_142e37aa0 * _DAT_142e36f50;
    fVar52 = (float)pub_142e329e0(fVar51);
    fVar51 = (float)pub_142e32b30(fVar51);
    fVar53 = fVar51 * fVar56;
    fVar54 = fVar51 * (float)uVar23;
    fVar51 = fVar51 * 0.0;
    *pfVar42 = fVar54 * fVar19 * fVar34 + fVar51 * fVar55 * fVar30 +
               fVar52 * fVar50 * fVar26 + fVar20 * fVar53;
    pfVar42[1] = fVar53 * fVar19 * fVar35 + fVar52 * fVar55 * fVar31 +
                 fVar51 * fVar50 * fVar27 + fVar20 * fVar54;
    pfVar42[2] = fVar52 * fVar19 * fVar36 + fVar53 * fVar55 * fVar32 +
                 fVar54 * fVar50 * fVar28 + fVar20 * fVar51;
    pfVar42[3] = fVar51 * fVar19 * fVar37 + fVar54 * fVar55 * fVar33 +
                 fVar53 * fVar50 * fVar29 + fVar20 * fVar52;
    *puVar3 = uVar6;
    pfVar42[7] = 1.0;
    pfVar42[8] = 1.0;
    pfVar42[9] = 1.0;
    fVar52 = _DAT_142e37ae0;
  }
  fVar50 = (float)pdb_140dedcd0(&UNK_1435b24a8);
  *puVar3 = uVar6;
  pfVar42[7] = fVar50;
  pfVar42[8] = fVar50;
  pfVar42[9] = fVar50;
  goto LAB_1428e9a01;
LAB_1428e99c0:
  fVar50 = (float)pdb_140dedcd0(&UNK_1435b24a0);
  fVar50 = fVar50 * *(float *)(lVar46 + 0x10);
  *puVar3 = uVar6;
  pfVar42[7] = fVar50;
  pfVar42[8] = fVar50;
  pfVar42[9] = fVar50;
  if (bVar49) {
LAB_1428e9a01:
    if ((*(float *)(lVar46 + 0xc) == 0.0) && (!NAN(*(float *)(lVar46 + 0xc)))) {
      uStack_110 = uVar17;
      uStack_108 = uVar21;
      uStack_100 = uVar22;
      uStack_f8 = uVar13;
      uStack_f0 = uVar12;
      pdb_140f04aa0(&uStack_110,&UNK_1435b24b0);
    }
  }
  goto LAB_1428e94ee;
}

