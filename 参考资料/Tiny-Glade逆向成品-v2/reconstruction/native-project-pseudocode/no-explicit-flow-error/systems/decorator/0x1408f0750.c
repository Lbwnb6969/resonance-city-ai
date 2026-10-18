// VA 0x1408f0750, PDB extent 2192 bytes
// system_decorator::audio::op_preview_audio::op_preview_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_preview_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::audio::op_preview_audio::op_preview_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/audio/op_preview_audio.rs
   Extent: 2192 */

void pdb_1408f0750(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 *param_9,undefined8 *param_10)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 uVar17;
  ulonglong *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong *puVar23;
  char cVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined8 uVar27;
  ulonglong *puVar28;
  longlong lVar29;
  undefined8 uVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  ulonglong *puVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong *puVar41;
  ulonglong *puVar42;
  bool bVar43;
  undefined4 uVar44;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  
  puVar6 = (ulonglong *)*param_2;
  lVar7 = param_2[1];
  uVar39 = *puVar6;
  uVar35 = 0;
  uVar36 = uVar39 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar39 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar36 = uVar35;
  }
  uVar32 = uVar39 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar39 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar32 = uVar35;
  }
  bVar43 = *(ulonglong *)(lVar7 + 0x30) < uVar32;
  uVar38 = *(ulonglong *)(lVar7 + 0x30) - uVar32;
  uVar39 = uVar38;
  if (bVar43) {
    uVar39 = uVar35;
  }
  uVar33 = CONCAT71((int7)(uVar32 >> 8),bVar43 || uVar38 == 0);
  uVar32 = *(ulonglong *)(lVar7 + 0x10);
  uVar40 = uVar32 - uVar36;
  if (uVar36 > uVar32) {
    uVar40 = uVar35;
  }
  uVar35 = *(ulonglong *)(lVar7 + 0x40);
  *puVar6 = uVar35 - (uVar40 + uVar39);
  if (uVar36 <= uVar32 && uVar32 - uVar36 != 0 || !bVar43 && uVar38 != 0) {
    *puVar6 = uVar35;
    return;
  }
  uVar27 = pdb_140c47770(param_6);
  puVar6 = (ulonglong *)*param_1;
  lVar7 = param_1[1];
  uVar39 = *puVar6;
  uVar35 = 0;
  uVar36 = uVar39 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar39 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar36 = uVar35;
  }
  uVar32 = uVar39 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar39 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar32 = uVar35;
  }
  puVar42 = (ulonglong *)(uVar36 * 0xb0 + *(longlong *)(lVar7 + 8));
  uVar39 = *(ulonglong *)(lVar7 + 0x10) - uVar36;
  if (*(ulonglong *)(lVar7 + 0x10) < uVar36) {
    puVar42 = (ulonglong *)0x8;
    uVar39 = uVar35;
  }
  puVar28 = (ulonglong *)(uVar32 * 0xb0 + *(longlong *)(lVar7 + 0x28));
  uVar36 = *(ulonglong *)(lVar7 + 0x30) - uVar32;
  if (*(ulonglong *)(lVar7 + 0x30) < uVar32) {
    puVar28 = (ulonglong *)0x8;
    uVar36 = uVar35;
  }
  *puVar6 = (*(longlong *)(lVar7 + 0x40) - uVar36) - uVar39;
  puVar41 = puVar42 + uVar39 * 0x16;
  puVar34 = puVar28 + uVar36 * 0x16;
  puVar8 = (ulonglong *)*param_3;
  puVar9 = (undefined4 *)param_3[2];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar7 = *param_5;
  uVar10 = *param_7;
  uVar11 = *param_9;
  uVar12 = *param_10;
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar13 = *param_4;
  puVar14 = (undefined4 *)param_4[2];
  lVar37 = lVar13 + 0x20;
  do {
    do {
      while( true ) {
        while( true ) {
          do {
            if ((puVar42 == (ulonglong *)0x0) || (puVar42 == puVar41)) {
              if (puVar28 == (ulonglong *)0x0) {
                return;
              }
              if (puVar28 == puVar34) {
                return;
              }
              *puVar6 = *puVar6 + 1;
              cVar24 = *(char *)((longlong)puVar28 + 0x9c);
              puVar1 = (ulonglong *)0x0;
              puVar23 = puVar28 + 0x16;
              puVar18 = puVar28;
            }
            else {
              *puVar6 = *puVar6 + 1;
              cVar24 = *(char *)((longlong)puVar42 + 0x9c);
              puVar1 = puVar42 + 0x16;
              puVar23 = puVar28;
              puVar18 = puVar42;
            }
            puVar28 = puVar23;
            puVar42 = puVar1;
          } while ((cVar24 == '\x02') || ((int)puVar18[0x10] == 7));
          puVar1 = puVar18 + 0x12;
          lVar29 = 0;
          if (1 < *puVar18) {
            lVar29 = *puVar18 - 2;
          }
          if (lVar29 == 0) break;
          if (lVar29 == 1) {
            if (*(char *)(lVar7 + 0x10) == '\0') {
              uVar44 = 0;
            }
            else {
              uVar44 = *(undefined4 *)(lVar7 + 0x14);
            }
            uStack_68 = puVar18[7];
            uStack_88 = (undefined4)puVar18[3];
            uStack_84 = *(undefined4 *)((longlong)puVar18 + 0x1c);
            uStack_80 = (undefined4)puVar18[4];
            uStack_7c = *(undefined4 *)((longlong)puVar18 + 0x24);
            uStack_78 = (undefined4)puVar18[5];
            uStack_74 = *(undefined4 *)((longlong)puVar18 + 0x2c);
            uStack_70 = (undefined4)puVar18[6];
            uStack_6c = *(undefined4 *)((longlong)puVar18 + 0x34);
            uVar25 = 2;
            if ((((puVar18[1] == 0) && (*(char *)((longlong)puVar18 + 0x3a) == '\x02')) &&
                (lVar29 = pdb_140b54cf0(uVar10,puVar18[2],param_8), lVar29 != 0)) &&
               (cVar24 = pdb_140b77b50(lVar29), cVar24 != '\0')) {
              uVar25 = pdb_140b76850(lVar29 + 0x40,lVar29 + 0x54);
            }
            uVar26 = *(undefined1 *)((longlong)puVar18 + 0x45);
            lVar29 = pdb_140c413e0(puVar18 + 1);
            if (lVar29 == 1) {
              uVar30 = pdb_140b54f80(uVar10);
            }
            else {
              uVar30 = 0;
            }
            pdb_1408f0280(&iStack_d8,puVar18[0x10],puVar18[0x11],uVar44,uVar25,&uStack_88,uVar26,
                          uVar30,uVar27,uVar33,uVar11,uVar12);
            uVar30 = uStack_c8;
            iVar22 = iStack_cc;
            iVar21 = iStack_d0;
            iVar20 = iStack_d4;
            iVar19 = iStack_d8;
            if (iStack_d8 != 0x30) {
              iStack_128 = iStack_d8;
              iStack_124 = iStack_d4;
              iStack_120 = iStack_d0;
              iStack_11c = iStack_cc;
              uVar36 = puVar18[0x13];
              uVar39 = *puVar1;
              *puVar14 = uVar5;
              lVar29 = *(longlong *)(lVar13 + 0x30);
              uVar15 = *(undefined8 *)(lVar13 + 0x40);
              if (lVar29 == *(longlong *)(lVar13 + 0x20)) {
                pdb_142d7e7c0(lVar37);
              }
              lVar16 = *(longlong *)(lVar13 + 0x28);
              lVar31 = lVar29 * 0x30;
              *(int *)(lVar16 + 0x20 + lVar31) = (int)uVar36;
              puVar3 = (undefined8 *)(lVar16 + 0x10 + lVar31);
              *puVar3 = uVar30;
              puVar3[1] = uVar39;
              piVar2 = (int *)(lVar16 + lVar31);
              *piVar2 = iVar19;
              piVar2[1] = iVar20;
              piVar2[2] = iVar21;
              piVar2[3] = iVar22;
              *(undefined1 *)(lVar16 + 0x24 + lVar31) = 0;
              *(undefined8 *)(lVar16 + 0x28 + lVar31) = uVar15;
              *(longlong *)(lVar13 + 0x30) = lVar29 + 1;
              *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
              *puVar9 = uVar4;
              *puVar8 = 5;
            }
          }
          else {
            if ((int)*puVar8 != 7) {
              uVar39 = puVar18[0x13];
              uStack_118 = (undefined4)*puVar1;
              uStack_114 = (undefined4)(*puVar1 >> 0x20);
              *puVar14 = uVar5;
              lVar29 = *(longlong *)(lVar13 + 0x30);
              uVar30 = *(undefined8 *)(lVar13 + 0x40);
              if (lVar29 == *(longlong *)(lVar13 + 0x20)) {
                pdb_142d7e7c0(lVar37);
              }
              lVar16 = *(longlong *)(lVar13 + 0x28);
              lVar31 = lVar29 * 0x30;
              *(undefined8 *)(lVar16 + lVar31) = 0xe;
              piVar2 = (int *)(lVar16 + 8 + lVar31);
              *piVar2 = iStack_128;
              piVar2[1] = iStack_124;
              piVar2[2] = iStack_120;
              piVar2[3] = iStack_11c;
              puVar3 = (undefined8 *)(lVar16 + 0x14 + lVar31);
              *puVar3 = CONCAT44(uStack_118,iStack_11c);
              puVar3[1] = CONCAT44((int)uVar39,uStack_114);
              *(undefined1 *)(lVar16 + 0x24 + lVar31) = 0;
              *(undefined8 *)(lVar16 + 0x28 + lVar31) = uVar30;
              *(longlong *)(lVar13 + 0x30) = lVar29 + 1;
              *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
            }
            *puVar9 = uVar4;
            *puVar8 = 7;
          }
        }
        if ((char)puVar18[0xe] == '\0') break;
        if ((int)*puVar8 != 6) {
          uVar39 = puVar18[0x13];
          uStack_118 = (undefined4)*puVar1;
          uStack_114 = (undefined4)(*puVar1 >> 0x20);
          *puVar14 = uVar5;
          lVar29 = *(longlong *)(lVar13 + 0x30);
          uVar30 = *(undefined8 *)(lVar13 + 0x40);
          if (lVar29 == *(longlong *)(lVar13 + 0x20)) {
            pdb_142d7e7c0(lVar37);
          }
          lVar16 = *(longlong *)(lVar13 + 0x28);
          lVar31 = lVar29 * 0x30;
          *(undefined8 *)(lVar16 + lVar31) = 0xc;
          piVar2 = (int *)(lVar16 + 8 + lVar31);
          *piVar2 = iStack_128;
          piVar2[1] = iStack_124;
          piVar2[2] = iStack_120;
          piVar2[3] = iStack_11c;
          puVar3 = (undefined8 *)(lVar16 + 0x14 + lVar31);
          *puVar3 = CONCAT44(uStack_118,iStack_11c);
          puVar3[1] = CONCAT44((int)uVar39,uStack_114);
          *(undefined1 *)(lVar16 + 0x24 + lVar31) = 0;
          *(undefined8 *)(lVar16 + 0x28 + lVar31) = uVar30;
          *(longlong *)(lVar13 + 0x30) = lVar29 + 1;
          *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
        }
        *puVar9 = uVar4;
        *puVar8 = 6;
      }
      uVar39 = puVar18[2];
    } while (uVar39 == 3);
    if (*(char *)(lVar7 + 0x10) == '\0') {
      uVar44 = 0;
    }
    else {
      uVar44 = *(undefined4 *)(lVar7 + 0x14);
    }
    uStack_98 = puVar18[8];
    uStack_b8 = (undefined4)puVar18[4];
    uStack_b4 = *(undefined4 *)((longlong)puVar18 + 0x24);
    uStack_b0 = (undefined4)puVar18[5];
    uStack_ac = *(undefined4 *)((longlong)puVar18 + 0x2c);
    uStack_a8 = (undefined4)puVar18[6];
    uStack_a4 = *(undefined4 *)((longlong)puVar18 + 0x34);
    uStack_a0 = (undefined4)puVar18[7];
    uStack_9c = *(undefined4 *)((longlong)puVar18 + 0x3c);
    uStack_c0 = puVar18[3];
    uVar26 = 2;
    uVar25 = 2;
    if ((uVar39 == 0) && (*(char *)((longlong)puVar18 + 0x42) == '\x02')) {
      lVar29 = pdb_140b54cf0(uVar10,uStack_c0,param_8);
      if (lVar29 != 0) {
        cVar24 = pdb_140b77b50(lVar29);
        if (cVar24 != '\0') {
          uVar26 = pdb_140b76850(lVar29 + 0x40,lVar29 + 0x54);
        }
        goto LAB_1408f0e32;
      }
      uVar17 = (undefined1)puVar18[9];
      lVar29 = pdb_140c413e0(puVar18 + 2);
    }
    else {
LAB_1408f0e32:
      uVar17 = (undefined1)puVar18[9];
      lVar29 = pdb_140c413e0(puVar18 + 2);
      uVar25 = uVar26;
    }
    if (lVar29 == 1) {
      uVar30 = pdb_140b54f80(uVar10);
    }
    else {
      uVar30 = 0;
    }
    pdb_1408f0280(&iStack_d8,puVar18[0x10],puVar18[0x11],uVar44,uVar25,&uStack_b8,uVar17,uVar30,
                  uVar27,uVar33,uVar11,uVar12);
    uVar30 = uStack_c8;
    iVar22 = iStack_cc;
    iVar21 = iStack_d0;
    iVar20 = iStack_d4;
    iVar19 = iStack_d8;
    if (iStack_d8 != 0x30) {
      iStack_128 = iStack_d8;
      iStack_124 = iStack_d4;
      iStack_120 = iStack_d0;
      iStack_11c = iStack_cc;
      uVar35 = puVar18[0x13];
      uVar36 = *puVar1;
      *puVar14 = uVar5;
      lVar29 = *(longlong *)(lVar13 + 0x30);
      uVar15 = *(undefined8 *)(lVar13 + 0x40);
      if (lVar29 == *(longlong *)(lVar13 + 0x20)) {
        pdb_142d7e7c0(lVar37);
      }
      lVar16 = *(longlong *)(lVar13 + 0x28);
      lVar31 = lVar29 * 0x30;
      *(int *)(lVar16 + 0x20 + lVar31) = (int)uVar35;
      puVar3 = (undefined8 *)(lVar16 + 0x10 + lVar31);
      *puVar3 = uVar30;
      puVar3[1] = uVar36;
      piVar2 = (int *)(lVar16 + lVar31);
      *piVar2 = iVar19;
      piVar2[1] = iVar20;
      piVar2[2] = iVar21;
      piVar2[3] = iVar22;
      *(undefined1 *)(lVar16 + 0x24 + lVar31) = 0;
      *(undefined8 *)(lVar16 + 0x28 + lVar31) = uVar15;
      *(longlong *)(lVar13 + 0x30) = lVar29 + 1;
      *(longlong *)(lVar13 + 0x40) = *(longlong *)(lVar13 + 0x40) + 1;
      *puVar9 = uVar4;
      *puVar8 = uVar39;
      puVar8[1] = uStack_c0;
    }
  } while( true );
}

