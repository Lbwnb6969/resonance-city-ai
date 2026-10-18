// VA 0x142962b70, PDB extent 2120 bytes
// system_critters::sheep::sheep_unstuck::sheep_unstuck
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_unstuck.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::sheep_unstuck::sheep_unstuck
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_unstuck.rs
   Extent: 2120 */

void pdb_142962b70(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,char *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 param_10,longlong *param_11)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  undefined4 uVar22;
  char cVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  uint *puVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  ulonglong *puVar37;
  longlong lVar38;
  ulonglong uVar39;
  char *pcVar40;
  ulonglong uVar41;
  longlong lVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  longlong lStack_1d0;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_180;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [28];
  uint uStack_10c;
  int iStack_f8;
  
  puVar37 = (ulonglong *)*param_8;
  lVar25 = param_8[1];
  uVar9 = *puVar37;
  uVar35 = 0;
  uVar26 = uVar9 - *(ulonglong *)(lVar25 + 0x18);
  if (uVar9 < *(ulonglong *)(lVar25 + 0x18)) {
    uVar26 = uVar35;
  }
  uVar33 = uVar9 - *(ulonglong *)(lVar25 + 0x38);
  if (uVar9 < *(ulonglong *)(lVar25 + 0x38)) {
    uVar33 = uVar35;
  }
  uVar9 = *(ulonglong *)(lVar25 + 0x30);
  uVar39 = uVar9 - uVar33;
  if (uVar9 < uVar33) {
    uVar39 = uVar35;
  }
  uVar10 = *(ulonglong *)(lVar25 + 0x10);
  uVar41 = uVar10 - uVar26;
  if (uVar10 < uVar26) {
    uVar41 = uVar35;
  }
  uVar35 = *(ulonglong *)(lVar25 + 0x40);
  *puVar37 = uVar35 - (uVar41 + uVar39);
  if ((uVar10 < uVar26 || uVar10 - uVar26 == 0) && (uVar9 < uVar33 || uVar9 - uVar33 == 0)) {
    puVar37 = (ulonglong *)*param_9;
    lVar25 = param_9[1];
    uVar9 = *puVar37;
    uVar35 = 0;
    uVar26 = uVar9 - *(ulonglong *)(lVar25 + 0x18);
    if (uVar9 < *(ulonglong *)(lVar25 + 0x18)) {
      uVar26 = uVar35;
    }
    uVar33 = uVar9 - *(ulonglong *)(lVar25 + 0x38);
    if (uVar9 < *(ulonglong *)(lVar25 + 0x38)) {
      uVar33 = uVar35;
    }
    uVar9 = *(ulonglong *)(lVar25 + 0x30);
    uVar39 = uVar9 - uVar33;
    if (uVar9 < uVar33) {
      uVar39 = uVar35;
    }
    uVar10 = *(ulonglong *)(lVar25 + 0x10);
    uVar41 = uVar10 - uVar26;
    if (uVar10 < uVar26) {
      uVar41 = uVar35;
    }
    uVar35 = *(ulonglong *)(lVar25 + 0x40);
    *puVar37 = uVar35 - (uVar41 + uVar39);
    if ((uVar10 < uVar26 || uVar10 - uVar26 == 0) && (uVar9 < uVar33 || uVar9 - uVar33 == 0)) {
      if (*param_7 == '\0') {
        *param_7 = '\x01';
        return;
      }
      puVar24 = (undefined8 *)pdb_1429472f0(*param_2,&UNK_143600380);
      if ((puVar24 == (undefined8 *)0x0) ||
         (lVar25 = (**(code **)(puVar24[1] + 0x18))(*puVar24), lVar25 == 0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143605330);
      }
      uVar11 = *(undefined8 *)(lVar25 + 8);
      uVar12 = *(undefined8 *)(lVar25 + 0x10);
      lVar25 = pdb_1406d0830(*param_3);
      uVar22 = _DAT_143006a28;
      uVar21 = _DAT_142f61040;
      fVar20 = _DAT_142e37878;
      fVar19 = _DAT_142e36f50;
      uVar18 = _DAT_142e36f28;
      puVar24 = (undefined8 *)(lVar25 + 0x20);
      puVar36 = (undefined8 *)(lVar25 + 0x28);
      if (*(char *)(lVar25 + 0x298) == '\0') {
        puVar36 = (undefined8 *)(lVar25 + 0x10);
        puVar24 = (undefined8 *)(lVar25 + 8);
      }
      uStack_130 = *puVar36;
      uStack_138 = *puVar24;
      lVar25 = *param_1;
      lVar13 = param_1[1];
      uVar8 = *(undefined4 *)((longlong)param_1 + 0x14);
      puVar34 = *(uint **)(lVar25 + 0xf8);
      puVar1 = puVar34 + *(longlong *)(lVar25 + 0x100);
      cVar7 = *(char *)(lVar25 + 0x108);
      uVar14 = *param_4;
      lVar15 = *param_11;
      lVar16 = *param_5;
      uVar17 = *param_6;
      lStack_1d0 = 0;
      lStack_180 = 8;
      fVar45 = (float)_DAT_14304ab70;
      uVar9 = (ulonglong)_DAT_14304ab70 >> 0x20;
      lStack_1a8 = 0;
      lStack_1b0 = 0;
      lVar42 = 0;
      uVar31 = 0;
      do {
        if (cVar7 == '\0') {
          if (uVar31 == (uint)lVar42) {
            if (puVar34 == puVar1) {
              return;
            }
            while( true ) {
              lVar42 = *(longlong *)
                        (*(longlong *)(lVar13 + 0x100) + 0x58 + (ulonglong)*puVar34 * 0xa0);
              if (lVar42 != 0) break;
              puVar34 = puVar34 + 1;
              if (puVar34 == puVar1) {
                return;
              }
            }
            lVar27 = *(longlong *)(lVar13 + 0x100) + (ulonglong)*puVar34 * 0xa0;
            uVar26 = (ulonglong)*(uint *)(lVar27 + 0x94);
            lVar28 = *(longlong *)(lVar13 + 0x1a0);
            lVar38 = lVar28 + uVar26 * 0x48;
            lVar30 = *(longlong *)(lVar28 + 0x38 + uVar26 * 0x48);
            if (*(ulonglong *)(lVar25 + 0x110) < *(ulonglong *)(lVar28 + 0x40 + uVar26 * 0x48)) {
              uVar26 = *(ulonglong *)(lVar30 + *(ulonglong *)(lVar25 + 0x110) * 8);
              lVar38 = *(longlong *)(lVar38 + 0x18);
              if (uVar26 == 0) goto LAB_142962fb8;
              lStack_1d0 = *(longlong *)(lVar38 + 0x10 + ~uVar26 * 0x30);
            }
            else {
              lVar38 = *(longlong *)(lVar38 + 0x18);
LAB_142962fb8:
              lStack_1d0 = 0;
            }
            puVar34 = puVar34 + 1;
            lVar28 = ~*(ulonglong *)(lVar30 + *(longlong *)(lVar25 + 0x118) * 8) * 0x30;
            lStack_1a8 = *(longlong *)(lVar38 + 0x10 + lVar28);
            lStack_198 = *(longlong *)(lVar38 + 0x28 + lVar28);
            lVar28 = ~*(ulonglong *)(lVar30 + *(longlong *)(lVar25 + 0x120) * 8) * 0x30;
            lStack_1b0 = *(longlong *)(lVar38 + 0x10 + lVar28);
            lStack_1a0 = *(longlong *)(lVar38 + 0x28 + lVar28);
            lStack_180 = *(longlong *)(lVar27 + 0x50);
            uVar31 = 0;
            uVar26 = 0;
          }
          else {
            uVar26 = (ulonglong)uVar31;
          }
          uVar32 = uVar31;
          uVar31 = ~*(uint *)(lStack_180 + 8 + uVar26 * 0x10);
        }
        else {
          uVar32 = uVar31;
          if (uVar31 == (uint)lVar42) {
            do {
              if (puVar34 == puVar1) {
                return;
              }
              uVar31 = *puVar34;
              puVar34 = puVar34 + 1;
              lVar42 = *(longlong *)
                        (*(longlong *)(lVar13 + 0x1a0) + 0x10 + (ulonglong)uVar31 * 0x48);
            } while (lVar42 == 0);
            lVar38 = *(longlong *)(lVar13 + 0x1a0) + (ulonglong)uVar31 * 0x48;
            lVar28 = *(longlong *)(lVar38 + 0x38);
            if (*(ulonglong *)(lVar25 + 0x110) < *(ulonglong *)(lVar38 + 0x40)) {
              uVar26 = *(ulonglong *)(lVar28 + *(ulonglong *)(lVar25 + 0x110) * 8);
              lVar38 = *(longlong *)(lVar38 + 0x18);
              if (uVar26 == 0) goto LAB_142962f49;
              lStack_1d0 = *(longlong *)(lVar38 + 0x10 + ~uVar26 * 0x30);
            }
            else {
              lVar38 = *(longlong *)(lVar38 + 0x18);
LAB_142962f49:
              lStack_1d0 = 0;
            }
            lVar30 = ~*(ulonglong *)(lVar28 + *(longlong *)(lVar25 + 0x118) * 8) * 0x30;
            lStack_1a8 = *(longlong *)(lVar38 + 0x10 + lVar30);
            lStack_198 = *(longlong *)(lVar38 + 0x28 + lVar30);
            lVar28 = ~*(ulonglong *)(lVar28 + *(longlong *)(lVar25 + 0x120) * 8) * 0x30;
            lStack_1b0 = *(longlong *)(lVar38 + 0x10 + lVar28);
            lStack_1a0 = *(longlong *)(lVar38 + 0x28 + lVar28);
            uVar32 = 0;
            uVar31 = uVar32;
          }
        }
        uVar26 = (ulonglong)uVar31;
        lVar38 = uVar26 * 0x30 + lStack_1d0;
        puVar2 = (uint *)(lStack_1a8 + uVar26 * 8);
        puVar3 = (undefined4 *)(lStack_198 + uVar26 * 4);
        pcVar40 = (char *)(uVar26 * 0x68 + lStack_1b0);
        puVar4 = (undefined4 *)(lStack_1a0 + uVar26 * 4);
        uStack_148 = *(undefined4 *)(lVar38 + 0x18);
        uStack_150 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar38 + 0x10) >> 0x20) +
                              (float)uVar9,(float)*(undefined8 *)(lVar38 + 0x10) + fVar45);
        uStack_144 = uVar21;
        uStack_13c = 0x80000000;
        pdb_1409ef140(auStack_128,uVar17,&uStack_150,uVar18);
        if (iStack_f8 == 2) {
          uVar5 = *(undefined4 *)(lVar38 + 0x10);
          fVar44 = *(float *)(lVar38 + 0x14);
          uVar6 = *(undefined4 *)(lVar38 + 0x18);
          cVar23 = pdb_1419c1e90(uVar11,uVar12,uVar5,uVar6);
          fVar43 = (float)pdb_140a7d8d0(&uStack_138,uVar5,uVar6,uVar22,0x43020000);
          uVar31 = *puVar2;
          uVar29 = uVar31 - 2;
          if (uVar31 < 2) {
            uVar29 = 3;
          }
          if (cVar23 == '\0') {
            if (uVar29 == 0) {
              if (0.0 < fVar43) {
LAB_14296324e:
                cVar23 = pdb_140a3d910(lVar15 + 0x98);
                *puVar3 = uVar8;
                if (cVar23 == '\0') {
                  *puVar2 = 4;
                }
                else {
                  *puVar2 = 0;
                }
                goto LAB_1429631a2;
              }
            }
            else if ((uVar29 == 3) && (fVar43 <= 0.0)) {
              fVar43 = (float)pdb_14140ce00(uVar14,uVar5,uVar6);
              if (fVar43 < fVar44) {
                *puVar3 = uVar8;
                *puVar2 = 6;
                goto LAB_1429631a2;
              }
              uVar31 = *puVar2;
            }
          }
          else {
            if ((uVar29 < 5) && ((0x15U >> (uVar29 & 0x1f) & 1) != 0)) {
              *puVar3 = uVar8;
              *puVar2 = 0;
              goto LAB_1429631a2;
            }
            if ((0.0 < fVar43) && (uVar29 == 0)) goto LAB_14296324e;
          }
          if (uVar31 != 2) goto LAB_1429631a2;
          fVar44 = *(float *)(pcVar40 + 4);
          cVar23 = *pcVar40;
          fVar43 = (float)pdb_14140ce00(uVar14,*(undefined4 *)(lVar38 + 0x10),
                                        *(undefined4 *)(lVar38 + 0x18));
          if (fVar43 <= fVar19) {
            fVar43 = fVar19;
          }
          if (((cVar23 != '\0') &&
              (fVar44 = (fVar43 - fVar44) / *(float *)(lVar16 + 0x28),
              (uint)ABS(fVar44) < 0x7f800000)) && (fVar20 < (float)((uint)fVar44 & _DAT_142e377e0)))
          {
            *puVar3 = uVar8;
            *puVar2 = 0;
          }
          *puVar4 = uVar8;
          pcVar40[0] = '\x01';
          pcVar40[1] = '\0';
          pcVar40[2] = '\0';
          pcVar40[3] = '\0';
          *(float *)(pcVar40 + 4) = fVar43;
          uVar29 = *puVar2;
        }
        else {
          *puVar3 = uVar8;
          *puVar2 = 1;
          puVar2[1] = uStack_10c;
LAB_1429631a2:
          *puVar4 = uVar8;
          pcVar40[0] = '\0';
          pcVar40[1] = '\0';
          pcVar40[2] = '\0';
          pcVar40[3] = '\0';
          uVar29 = *puVar2;
        }
        uVar31 = uVar32 + 1;
        if (uVar29 != 2) {
          uVar31 = uVar32 + 1;
          *puVar4 = uVar8;
          if (pcVar40[0x30] == '\0') {
            pcVar40[0x34] = '\0';
            pcVar40[0x35] = '\0';
            pcVar40[0x36] = '\0';
            pcVar40[0x37] = '\0';
          }
        }
      } while( true );
    }
  }
  *puVar37 = uVar35;
  *param_7 = '\0';
  return;
}

