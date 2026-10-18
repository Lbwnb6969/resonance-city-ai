// VA 0x140b67bd0, PDB extent 2049 bytes
// country_core::systems::history::replay_terrain::replay_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::history::replay_terrain::replay_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_terrain.rs
   Extent: 2049 */

void pdb_140b67bd0(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  code *pcVar11;
  byte *pbVar12;
  float fVar13;
  float fVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  char *pcVar17;
  uint *puVar18;
  byte *pbVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong *puVar26;
  undefined1 (*pauVar27) [16];
  ulonglong *puVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  longlong lStack_178;
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined8 uStack_151;
  char cStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined4 uStack_128;
  uint uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  char *pcStack_f8;
  ulonglong uStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  undefined4 *puStack_d8;
  ulonglong *puStack_d0;
  undefined4 *puStack_c8;
  char *pcStack_c0;
  byte *pbStack_b8;
  undefined4 *puStack_b0;
  ulonglong *puStack_a8;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  puVar26 = (ulonglong *)*param_3;
  fVar5 = *(float *)(puVar26 + 5);
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  fVar14 = _DAT_142e37870;
  fVar13 = _DAT_142e36f28;
  if (puVar26[3] == 0) {
    return;
  }
  uVar24 = puVar26[1];
  uVar23 = *puVar26;
  if (puVar26[2] < *puVar26) {
    uVar23 = 0;
  }
  lVar25 = (puVar26[2] - uVar23) * 0x40;
  lVar2 = uVar24 + lVar25;
  puStack_d8 = (undefined4 *)0x0;
  puStack_d0 = (ulonglong *)0x8;
  puStack_c8 = (undefined4 *)0x0;
  pcVar9 = *(char **)(uVar24 + 8 + lVar25);
  pcStack_f8 = pcVar9 + *(longlong *)(uVar24 + 0x10 + lVar25) * 0x30;
  puStack_a8 = (ulonglong *)CONCAT44(puStack_a8._4_4_,*(undefined4 *)((longlong)param_2 + 0x1c));
  lStack_e8 = *param_2;
  puStack_b0 = (undefined4 *)param_2[2];
  lStack_110 = *param_1;
  lStack_108 = lStack_e8 + 8;
  pcVar17 = pcStack_f8;
  uVar24 = 0;
  while (pcStack_c0 = pcVar9, uVar23 = uVar24, pcStack_c0 != pcVar17) {
    pcVar9 = pcStack_c0 + 0x30;
    uVar24 = uVar23 + 1;
    if (*pcStack_c0 == '\x03') {
      lVar25 = *(longlong *)(pcStack_c0 + 8);
      puVar18 = (uint *)(lVar25 + 0x30);
      if (*(longlong *)(lVar25 + 0x10) == -0x7fffffffffffffff) {
        puVar18 = (uint *)(lVar25 + 0x18);
      }
      if ((((!SBORROW8(0,*(longlong *)(lVar25 + 0x10))) || (*(float *)(pcStack_c0 + 0x10) != 0.0))
          || (NAN(*(float *)(pcStack_c0 + 0x10)))) || (pcStack_c0[0x1c] != '\0')) {
        fVar29 = *(float *)(pcStack_c0 + 0x14);
      }
      else {
        uVar8 = *puVar18;
        *puStack_b0 = puStack_a8._0_4_;
        uVar10 = *(ulonglong *)(lVar25 + 0x28);
        uVar20 = uVar10 * 0xc;
        uStack_100 = param_4;
        if (0xaaaaaaaaaaaaaaa < uVar10) {
          uVar21 = 0;
LAB_140b67fd0:
          pdb_142dc7e2a(uVar21,uVar20);
          goto LAB_140b6820a;
        }
        uStack_f0 = (ulonglong)uVar8;
        if (uVar20 == 0) {
          uStack_e0 = 0;
          pbStack_b8 = (byte *)0x4;
          pbVar12 = *(byte **)(lVar25 + 0x20);
          uVar16 = uStack_e0;
          pbVar19 = pbStack_b8;
        }
        else {
          pbStack_b8 = *(byte **)(lVar25 + 0x20);
          pdb_14007ee60();
          pbVar19 = pub_1406abab0(uVar20,4);
          uVar21 = 4;
          pbVar12 = pbStack_b8;
          uVar16 = uVar10;
          if (pbVar19 == (byte *)0x0) goto LAB_140b67fd0;
        }
        pbStack_b8 = pbVar19;
        uStack_e0 = uVar16;
        if (uVar10 != 0) {
          pub_142e32760(pbStack_b8,pbVar12,uVar20);
        }
        if (0x3ffffe < (uint)uStack_f0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143055138,0x40,&UNK_143055178);
        }
        uVar20 = *(ulonglong *)(lStack_e8 + 0x38);
        if (*(ulonglong *)(lStack_e8 + 0x38) < uStack_f0 + 1) {
          uVar20 = uStack_f0 + 1;
        }
        uStack_120 = *(undefined4 *)(lVar25 + 0x34);
        *(ulonglong *)(lStack_e8 + 0x38) = uVar20;
        cStack_140 = (char)uStack_e0;
        uStack_13f = (undefined7)(uStack_e0 >> 8);
        uStack_138 = SUB81(pbStack_b8,0);
        uStack_137 = (undefined7)((ulonglong)pbStack_b8 >> 8);
        uStack_130 = (undefined1)uVar10;
        uStack_12f = (undefined7)(uVar10 >> 8);
        uStack_128 = 0x3ecccccd;
        uStack_124 = (uint)uStack_f0;
        pdb_1417b9100(&lStack_178,lStack_108,uStack_f0 & 0xffffffff,&cStack_140);
        param_4 = uStack_100;
        if ((!SBORROW8(0,lStack_178)) && (lStack_178 != 0)) {
          pub_1406abac0(pbStack_170,lStack_178 * 0xc,4);
        }
        fVar29 = *(float *)(pcStack_c0 + 0x14);
      }
      fVar34 = fVar13;
      if (fVar14 <= fVar29) {
        fVar34 = 0.0;
        if (0.0 <= *(float *)(pcStack_c0 + 0x10) / fVar29) {
          fVar34 = *(float *)(pcStack_c0 + 0x10) / fVar29;
        }
        fVar29 = fVar13;
        if (fVar34 <= fVar13) {
          fVar29 = fVar34;
        }
        fVar29 = fVar13 - fVar29;
        fVar34 = fVar13 - fVar29 * fVar29 * fVar29;
      }
      lVar25 = *(longlong *)(pcStack_c0 + 8);
      cVar7 = pcStack_c0[0x1c];
      *puStack_b0 = puStack_a8._0_4_;
      if (cVar7 == '\0') {
        pdb_140927440(lVar25 + 0x10,lStack_e8,param_4,param_5,param_6,fVar34);
      }
      else {
        pdb_140926dd0(lVar25 + 0x10,lStack_e8,param_4,param_5,param_6,fVar34);
      }
      puVar15 = puStack_c8;
      if (fVar13 <= fVar34) {
        piVar1 = (int *)(pcStack_c0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 < 0) {
          if (puStack_c8 == puStack_d8) {
            pdb_142d896b0(&puStack_d8);
          }
          puStack_d0[(longlong)puVar15] = uVar23;
          puStack_c8 = (undefined4 *)((longlong)puVar15 + 1);
        }
      }
      *(float *)(pcStack_c0 + 0x10) =
           *(float *)(lStack_110 + 0x28) * fVar5 + *(float *)(pcStack_c0 + 0x10);
      pcVar17 = pcStack_f8;
    }
  }
  uVar24 = (ulonglong)puStack_c8 >> 1;
  if (uVar24 != 0) {
    if (puStack_c8 < (undefined4 *)0x8) {
      uVar23 = 0;
    }
    else {
      uVar23 = uVar24 & 0xfffffffffffffffc;
      pauVar27 = (undefined1 (*) [16])(puStack_d0 + 2);
      lVar25 = 0;
      do {
        auVar31 = pauVar27[-1];
        auVar6 = *pauVar27;
        auVar30 = *(undefined1 (*) [16])(puStack_d0 + (longlong)puStack_c8 + lVar25 + -4);
        auVar32 = *(undefined1 (*) [16])(puStack_d0 + (longlong)puStack_c8 + lVar25 + -2);
        auVar33._0_8_ = auVar32._8_8_;
        auVar33._8_4_ = auVar32._0_4_;
        auVar33._12_4_ = auVar32._4_4_;
        auVar32._0_8_ = auVar30._8_8_;
        auVar32._8_4_ = auVar30._0_4_;
        auVar32._12_4_ = auVar30._4_4_;
        pauVar27[-1] = auVar33;
        *pauVar27 = auVar32;
        auVar30._0_8_ = auVar31._8_8_;
        auVar30._8_4_ = auVar31._0_4_;
        auVar30._12_4_ = auVar31._4_4_;
        auVar31._0_8_ = auVar6._8_8_;
        auVar31._8_4_ = auVar6._0_4_;
        auVar31._12_4_ = auVar6._4_4_;
        *(undefined1 (*) [16])(puStack_d0 + (longlong)puStack_c8 + lVar25 + -2) = auVar30;
        *(undefined1 (*) [16])(puStack_d0 + (longlong)puStack_c8 + lVar25 + -4) = auVar31;
        lVar25 = lVar25 + -4;
        pauVar27 = pauVar27 + 2;
      } while (-lVar25 != (uVar24 & 0xfffffffffffffffc));
      if (uVar24 == uVar23) goto joined_r0x000140b67ff0;
    }
    puVar26 = puStack_d0 + uVar23;
    lVar25 = -uVar23;
    do {
      uVar23 = *puVar26;
      *puVar26 = puStack_d0[(longlong)puStack_c8 + lVar25 + -1];
      puStack_d0[(longlong)puStack_c8 + lVar25 + -1] = uVar23;
      lVar25 = lVar25 + -1;
      puVar26 = puVar26 + 1;
    } while (-lVar25 != uVar24);
  }
joined_r0x000140b67ff0:
  puStack_b0 = puStack_d8;
  puStack_a8 = puStack_d0;
  if (puStack_c8 != (undefined4 *)0x0) {
    puVar26 = puStack_d0 + (longlong)puStack_c8;
    puVar28 = puStack_d0;
    do {
      uVar24 = *puVar28;
      uVar23 = *(ulonglong *)(lVar2 + 0x10);
      if (uVar23 <= uVar24) {
LAB_140b681f7:
        pdb_142dc7ef8(uVar24,uVar23,&UNK_14305aaf0);
LAB_140b6820a:
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      lVar25 = *(longlong *)(lVar2 + 8);
      lVar22 = uVar24 * 0x30;
      cVar7 = *(char *)(lVar25 + lVar22);
      puVar3 = (undefined8 *)(lVar25 + 0x20 + lVar22);
      uStack_151 = puVar3[1];
      uStack_158 = (undefined7)((ulonglong)*puVar3 >> 8);
      puVar3 = (undefined8 *)(lVar25 + 0x11 + lVar22);
      uStack_168 = *puVar3;
      uVar21 = puVar3[1];
      uStack_160 = (undefined7)uVar21;
      uStack_159 = (undefined1)((ulonglong)uVar21 >> 0x38);
      plVar4 = (longlong *)(lVar25 + 1 + lVar22);
      lStack_178 = *plVar4;
      pbStack_170 = (byte *)plVar4[1];
      pub_142e32770(lVar25 + lVar22,lVar22 + lVar25 + 0x30,(~uVar24 + uVar23) * 0x30);
      uVar23 = uVar23 - 1;
      *(ulonglong *)(lVar2 + 0x10) = uVar23;
      if (cVar7 == '\f') goto LAB_140b681f7;
      uStack_11c = (undefined4)((uint7)uStack_158 >> 0x18);
      uStack_118 = uStack_151;
      uStack_12f = (undefined7)uStack_168;
      uStack_128._0_1_ = (undefined1)((ulonglong)uStack_168 >> 0x38);
      uStack_128._1_3_ = (undefined3)uStack_160;
      uStack_124 = (uint)((uint7)uStack_160 >> 0x18);
      uStack_120 = CONCAT31((int3)uStack_158,uStack_159);
      uStack_13f = (undefined7)lStack_178;
      uStack_138 = (undefined1)((ulonglong)lStack_178 >> 0x38);
      uStack_137 = SUB87(pbStack_170,0);
      uStack_130 = (undefined1)((ulonglong)pbStack_170 >> 0x38);
      cStack_140 = cVar7;
      pdb_140b6b0e0(&cStack_140);
      puVar28 = puVar28 + 1;
    } while (puVar28 != puVar26);
  }
  if (puStack_b0 != (undefined4 *)0x0) {
    pub_1406abac0((byte *)puStack_a8,(longlong)puStack_b0 << 3,8);
  }
  return;
}

