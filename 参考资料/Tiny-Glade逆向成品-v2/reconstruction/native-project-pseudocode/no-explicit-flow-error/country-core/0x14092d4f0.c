// VA 0x14092d4f0, PDB extent 1997 bytes
// country_core::systems::history::signifier_replay_active::signifier_replay_active
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/signifier_replay_active.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::history::signifier_replay_active::signifier_replay_active
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/signifier_replay_active.rs
   Extent: 1997 */

void pdb_14092d4f0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  ulonglong *puVar7;
  char *pcVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint *puVar22;
  float *pfVar23;
  longlong lVar24;
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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uStack_160;
  float fStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  ulonglong uStack_138;
  float fStack_12c;
  char *pcStack_128;
  longlong lStack_120;
  undefined4 *puStack_118;
  longlong lStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f4 [180];
  
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  piVar6 = (int *)*param_2;
  if (*piVar6 != 1) {
    return;
  }
  fVar39 = *(float *)(*param_5 + 0x28) + (float)piVar6[1];
  piVar6[1] = (int)fVar39;
  fVar25 = _DAT_143007998 / *(float *)(*param_7 + 0x28);
  if (fVar25 <= _DAT_142e36f50) {
    fVar25 = _DAT_142e36f50;
  }
  fVar39 = fVar39 / fVar25;
  fVar26 = (float)pub_142e32bc0(fVar39);
  fVar13 = _UNK_143021a34;
  fVar12 = _DAT_143021a30;
  fVar11 = _DAT_14301920c;
  uVar10 = _DAT_142f61040;
  fVar9 = _DAT_142e36f50;
  fVar25 = _DAT_142e36f28;
  fVar39 = fVar39 - fVar26;
  lStack_150 = *param_3;
  lStack_140 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar22 = *(uint **)(lStack_150 + 0xf8);
  puVar1 = puVar22 + *(longlong *)(lStack_150 + 0x100);
  cVar3 = *(char *)(lStack_150 + 0x108);
  puVar7 = (ulonglong *)*param_1;
  uStack_100 = *param_4;
  pcVar8 = (char *)*param_6;
  pcVar19 = pcVar8 + 4;
  lVar21 = 0;
  lStack_120 = 8;
  fVar40 = (float)_DAT_142e378e0;
  fVar41 = (float)((ulonglong)_DAT_142e378e0 >> 0x20);
  lStack_148 = 0;
  uStack_138 = 0;
  lVar24 = 0;
  fVar28 = _DAT_142fa5b20;
  fVar26 = _DAT_142e378f0;
  fVar42 = _UNK_142e378f4;
  fVar43 = _UNK_142e378f8;
  pcStack_128 = pcVar19;
LAB_14092d68a:
  fVar27 = (float)pub_142e32b30(fVar39 * _DAT_143021a20);
  fVar28 = (float)pub_142e32a10(fVar39 * fVar28);
  fVar28 = fVar28 * fVar27 * fVar9;
  if (cVar3 != '\0') goto LAB_14092d820;
  do {
    if ((int)uStack_138 == (int)lVar21) {
      if (puVar22 == puVar1) {
        return;
      }
      while( true ) {
        lVar21 = *(longlong *)
                  (*(longlong *)(lStack_140 + 0x100) + 0x58 + (ulonglong)*puVar22 * 0xa0);
        if (lVar21 != 0) break;
        puVar22 = puVar22 + 1;
        if (puVar22 == puVar1) {
          return;
        }
      }
      lVar15 = *(longlong *)(lStack_140 + 0x100) + (ulonglong)*puVar22 * 0xa0;
      uVar14 = (ulonglong)*(uint *)(lVar15 + 0x94);
      lVar24 = *(longlong *)(lStack_140 + 0x1a0);
      lVar17 = *(longlong *)(lVar24 + 0x18 + uVar14 * 0x48);
      lVar18 = *(longlong *)(lVar24 + 0x38 + uVar14 * 0x48);
      if ((*(ulonglong *)(lStack_150 + 0x118) < *(ulonglong *)(lVar24 + 0x40 + uVar14 * 0x48)) &&
         (uVar14 = *(ulonglong *)(lVar18 + *(ulonglong *)(lStack_150 + 0x118) * 8), uVar14 != 0)) {
        lVar24 = *(longlong *)(lVar17 + 0x10 + ~uVar14 * 0x30);
      }
      else {
        lVar24 = 0;
      }
      lVar18 = ~*(ulonglong *)(lVar18 + *(longlong *)(lStack_150 + 0x110) * 8) * 0x30;
      lStack_148 = *(longlong *)(lVar17 + 0x10 + lVar18);
      lStack_108 = *(longlong *)(lVar17 + 0x28 + lVar18);
      puVar22 = puVar22 + 1;
      lStack_120 = *(longlong *)(lVar15 + 0x50);
      uStack_138 = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = uStack_138 & 0xffffffff;
    }
    uVar14 = (ulonglong)~*(uint *)(lStack_120 + 8 + uVar14 * 0x10);
    while( true ) {
      pfVar23 = (float *)(uVar14 * 0x30 + lStack_148);
      puStack_118 = (undefined4 *)(lStack_108 + uVar14 * 4);
      uStack_138 = (ulonglong)((int)uStack_138 + 1);
      if (puVar7[3] == 0) {
        pcVar16 = "";
        if (*pcVar8 != '\0') {
          pcVar16 = pcVar19;
        }
        fStack_158 = *(float *)(pcVar16 + 8);
        uStack_160 = *(undefined8 *)pcVar16;
        *puStack_118 = uVar5;
        pfVar23[6] = fStack_158;
        *(undefined8 *)(pfVar23 + 4) = uStack_160;
      }
      else {
        uVar20 = 0;
        if (*puVar7 <= puVar7[2]) {
          uVar20 = *puVar7;
        }
        cVar4 = *(char *)(puVar7[1] + 0x38 + (puVar7[2] - uVar20) * 0x40);
        *puStack_118 = uVar5;
        lStack_110 = lVar24;
        pdb_140e08f50(auStack_f4,uStack_100);
        if (cVar4 == '\0') {
          uStack_160 = 0x3f80000000000000;
          fStack_158 = 0.0;
        }
        else {
          uStack_160 = uVar10;
          fStack_158 = -0.0;
        }
        pdb_140df46b0(pfVar23,auStack_f4,&uStack_160);
        pcVar19 = pcStack_128;
        if (*(longlong *)(lVar24 + uVar14 * 8) != 1) {
          fVar28 = 0.0;
          if (0.0 <= fVar39 + _DAT_142f684a8) {
            fVar28 = fVar39 + _DAT_142f684a8;
          }
          fVar39 = _DAT_142e36f28;
          if (fVar28 <= _DAT_142e36f28) {
            fVar39 = fVar28;
          }
          pcVar16 = "";
          if (*pcVar8 != '\0') {
            pcVar16 = pcStack_128;
          }
          fStack_12c = *(float *)(pcVar16 + 8);
          fVar28 = *pfVar23;
          fVar27 = pfVar23[1];
          fVar30 = pfVar23[2];
          fVar32 = pfVar23[3];
          fVar34 = fVar30 * fVar30;
          fVar29 = fVar32 * fVar32;
          fVar31 = fVar27 * fVar27 + fVar28 * fVar28;
          fVar33 = fVar30 * 0.0 + fVar27 * 0.0 + fVar28 * fVar25;
          fVar33 = fVar33 + fVar33;
          fVar32 = fVar32 + fVar32;
          fVar35 = fVar32 * (fVar27 * fVar40 - fVar30 * fVar26) +
                   fVar33 * fVar28 + (fVar29 - (fVar31 + fVar34)) * fVar25;
          fVar36 = fVar32 * (fVar30 * fVar41 - fVar28 * fVar42) +
                   fVar33 * fVar27 + (fVar29 - (fVar31 + fVar34)) * 0.0;
          fVar34 = fVar32 * (fVar28 * 0.0 - fVar27 * fVar43) +
                   fVar33 * fVar30 + (fVar29 - (fVar31 + fVar34)) * 0.0;
          fVar27 = (float)pub_142e32b30(fVar39 * _DAT_143021a20);
          fVar28 = _DAT_142fa5b20;
          fVar30 = (float)pub_142e32a10(fVar39 * _DAT_142fa5b20);
          fVar43 = _UNK_142e378f8;
          fVar42 = _UNK_142e378f4;
          fVar26 = _DAT_142e378f0;
          fVar27 = fVar30 * fVar27 * fVar9;
          fVar30 = fVar34 * _DAT_142e3c608;
          uVar2 = *(undefined8 *)pcVar16;
          fVar32 = fVar35 * _DAT_143021a40;
          fVar33 = fVar36 * _UNK_143021a44;
          *puStack_118 = uVar5;
          *(ulonglong *)(pfVar23 + 4) =
               CONCAT44(fVar33 * fVar13 +
                        ((float)((ulonglong)uVar2 >> 0x20) - fVar27 * fVar36 * fVar13),
                        fVar32 * fVar12 + ((float)uVar2 - fVar27 * fVar35 * fVar12));
          pfVar23[6] = fVar30 * fVar11 + (fStack_12c - fVar34 * fVar27 * fVar11);
          lVar24 = lStack_110;
          goto LAB_14092d68a;
        }
        pcVar16 = "";
        if (*pcVar8 != '\0') {
          pcVar16 = pcStack_128;
        }
        fVar27 = *(float *)(pcVar16 + 8);
        fVar30 = *pfVar23;
        fVar32 = pfVar23[1];
        fVar33 = pfVar23[2];
        fVar34 = pfVar23[3];
        fVar36 = fVar33 * fVar33;
        fVar37 = fVar34 * fVar34;
        fVar38 = fVar32 * fVar32 + fVar30 * fVar30;
        fVar35 = fVar33 * 0.0 + fVar32 * 0.0 + fVar30 * fVar25;
        fVar35 = fVar35 + fVar35;
        fVar34 = fVar34 + fVar34;
        fVar29 = fVar34 * (fVar32 * fVar40 - fVar33 * fVar26) +
                 fVar35 * fVar30 + (fVar37 - (fVar38 + fVar36)) * fVar25;
        fVar31 = fVar34 * (fVar33 * fVar41 - fVar30 * fVar42) +
                 fVar35 * fVar32 + (fVar37 - (fVar38 + fVar36)) * 0.0;
        fVar33 = fVar34 * (fVar30 * 0.0 - fVar32 * fVar43) +
                 fVar35 * fVar33 + (fVar37 - (fVar38 + fVar36)) * 0.0;
        fVar34 = fVar33 * _DAT_142f95158;
        uVar2 = *(undefined8 *)pcVar16;
        fVar30 = fVar29 * _DAT_143021a50;
        fVar32 = fVar31 * _UNK_143021a54;
        *puStack_118 = uVar5;
        *(ulonglong *)(pfVar23 + 4) =
             CONCAT44(fVar32 * fVar13 +
                      ((float)((ulonglong)uVar2 >> 0x20) - fVar28 * fVar31 * fVar13),
                      fVar30 * fVar12 + ((float)uVar2 - fVar28 * fVar29 * fVar12));
        pfVar23[6] = fVar34 * fVar11 + (fVar27 - fVar33 * fVar28 * fVar11);
        lVar24 = lStack_110;
      }
      if (cVar3 == '\0') break;
LAB_14092d820:
      if ((int)uStack_138 == (int)lVar21) {
        if (puVar22 == puVar1) {
          return;
        }
        while( true ) {
          lVar21 = *(longlong *)
                    (*(longlong *)(lStack_140 + 0x1a0) + 0x10 + (ulonglong)*puVar22 * 0x48);
          if (lVar21 != 0) break;
          puVar22 = puVar22 + 1;
          if (puVar22 == puVar1) {
            return;
          }
        }
        lVar17 = *(longlong *)(lStack_140 + 0x1a0) + (ulonglong)*puVar22 * 0x48;
        lVar18 = *(longlong *)(lVar17 + 0x18);
        if ((*(ulonglong *)(lStack_150 + 0x118) < *(ulonglong *)(lVar17 + 0x40)) &&
           (uVar14 = *(ulonglong *)
                      (*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lStack_150 + 0x118) * 8),
           uVar14 != 0)) {
          lVar24 = *(longlong *)(lVar18 + 0x10 + ~uVar14 * 0x30);
        }
        else {
          lVar24 = 0;
        }
        lVar17 = ~*(ulonglong *)
                   (*(longlong *)(lVar17 + 0x38) + *(longlong *)(lStack_150 + 0x110) * 8) * 0x30;
        lStack_148 = *(longlong *)(lVar18 + 0x10 + lVar17);
        lStack_108 = *(longlong *)(lVar18 + 0x28 + lVar17);
        puVar22 = puVar22 + 1;
        uStack_138 = 0;
      }
      uVar14 = uStack_138 & 0xffffffff;
    }
  } while( true );
}

