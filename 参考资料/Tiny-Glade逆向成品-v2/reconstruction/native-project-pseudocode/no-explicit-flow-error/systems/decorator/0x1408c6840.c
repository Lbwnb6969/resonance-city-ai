// VA 0x1408c6840, PDB extent 2074 bytes
// system_decorator::decorator_visual::cottage_wall_window::add_lintels
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_wall_window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_wall_window::add_lintels
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_wall_window.rs
   Extent: 2074 */

void pdb_1408c6840(undefined4 param_1,longlong param_2,float *param_3,longlong param_4,
                  undefined1 param_5,undefined4 param_6,longlong param_7,undefined8 *param_8,
                  undefined8 param_9,float param_10,uint param_11,float param_12,int param_13,
                  float param_14,char param_15)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 uStack_128;
  undefined1 uStack_127;
  uint5 uStack_126;
  undefined1 uStack_121;
  undefined7 uStack_120;
  uint3 uStack_118;
  undefined4 uStack_115;
  undefined4 uStack_111;
  undefined4 uStack_10d;
  undefined1 uStack_109;
  uint7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  uint7 uStack_f8;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  
  if (param_15 != '\0') {
    puVar8 = (undefined4 *)pdb_140901130(param_2,&UNK_143016fd0);
    uVar18 = puVar8[1];
    uVar14 = pdb_140dea250(*puVar8,uVar18,(_DAT_143016b80 + param_10) * _DAT_142e36f50);
    uVar2 = *(undefined1 *)(param_2 + 0x59);
    uStack_127 = pdb_140901b40(param_1,*param_8);
    uVar4 = param_8[1];
    uStack_128 = pdb_140c44ba0(uVar2);
    lVar9 = pdb_141494370(uVar4,&uStack_128);
    if (lVar9 == 0) {
      uStack_118 = (uint3)&uStack_128;
      uStack_115 = (undefined4)((ulonglong)&uStack_128 >> 0x18);
      uStack_111 = CONCAT31(0x4942d0,(char)((ulonglong)&uStack_128 >> 0x38));
      uStack_10d = 0x141;
      uStack_109 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_118,&UNK_14330e2f8);
    }
    fVar27 = *(float *)(lVar9 + 0x30) + _DAT_143016b84;
    lVar9 = *(longlong *)(param_7 + 0xd8);
    if (lVar9 == *(longlong *)(param_7 + 200)) {
      pdb_142d8d5c0(param_7 + 200);
    }
    lVar5 = *(longlong *)(param_7 + 0xd0);
    *(undefined4 *)(lVar5 + lVar9 * 0x14) = uVar14;
    *(undefined4 *)(lVar5 + 4 + lVar9 * 0x14) = uVar18;
    *(float *)(lVar5 + 8 + lVar9 * 0x14) = fVar27;
    *(undefined4 *)(lVar5 + 0xc + lVar9 * 0x14) = 0x3e4ccccd;
    *(undefined1 *)(lVar5 + 0x10 + lVar9 * 0x14) = 0;
    *(longlong *)(param_7 + 0xd8) = lVar9 + 1;
  }
  if (param_4 != 0) {
    fVar26 = (param_10 + _DAT_143016b80) * _DAT_142e36f50;
    bVar3 = *(byte *)(param_2 + 0x59);
    param_12 = param_12 / _DAT_143007998;
    fVar6 = *param_3;
    fVar7 = param_3[1];
    fVar17 = param_3[2];
    fVar29 = param_3[3];
    fVar27 = param_3[6];
    fVar15 = param_3[5] + fVar26;
    if ((param_13 != 1) || (param_14 < fVar15)) {
      fVar28 = param_3[4];
      if (bVar3 < 2) {
        fVar16 = param_3[7];
      }
      else {
        fVar19 = fVar17 * fVar17;
        fVar20 = fVar29 * fVar29;
        fVar22 = fVar7 * fVar7 + fVar6 * fVar6;
        fVar16 = fVar17 * 0.0 + fVar7 * 0.0 + _DAT_143016b88 * fVar6;
        fVar16 = fVar16 + fVar16;
        fVar24 = fVar29 + fVar29;
        fVar28 = fVar28 - (fVar24 * (fVar7 * _DAT_143016b90 - fVar17 * _DAT_143016ba0) +
                          fVar16 * fVar6 + (fVar20 - (fVar22 + fVar19)) * _DAT_143016b88);
        fVar15 = fVar15 - (fVar24 * (fVar17 * _UNK_143016b94 - fVar6 * _UNK_143016ba4) +
                          fVar16 * fVar7 + (fVar20 - (fVar22 + fVar19)) * 0.0);
        fVar27 = fVar27 - (fVar24 * (fVar6 * _UNK_143016b98 - fVar7 * _UNK_143016ba8) +
                          fVar16 * fVar17 + (fVar20 - (fVar22 + fVar19)) * 0.0);
        fVar16 = _DAT_143016bb0;
      }
      if ((param_11 & 1) != 0) {
        fVar16 = fVar16 * param_12;
      }
      uStack_115 = 0;
      uStack_111 = 0;
      uStack_10d = 0;
      uStack_128 = (undefined1)uStack_118;
      uStack_127 = (undefined1)(uStack_118 >> 8);
      uStack_126 = (uint5)(byte)(uStack_118 >> 0x10);
      uStack_121 = 0;
      uStack_120 = 0;
      uStack_108 = (uint7)uStack_118;
      uStack_f1 = 0;
      uStack_f0 = 0;
      uStack_101 = 0;
      uStack_100 = 0;
      lVar9 = *(longlong *)(param_7 + 0xc0);
      if (lVar9 == *(longlong *)(param_7 + 0xb0)) {
        uStack_f8 = uStack_108;
        pdb_142d8ddd0(param_7 + 0xb0);
      }
      lVar5 = *(longlong *)(param_7 + 0xb8);
      lVar11 = lVar9 * 0x170;
      *(undefined8 *)(lVar5 + lVar11) = 0;
      *(undefined8 *)(lVar5 + 0x10 + lVar11) = 0;
      *(undefined8 *)(lVar5 + 0x20 + lVar11) = 0;
      *(undefined8 *)(lVar5 + 0x30 + lVar11) = 0;
      *(undefined4 *)(lVar5 + 0x40 + lVar11) = 0;
      *(undefined4 *)(lVar5 + 0x50 + lVar11) = 0;
      *(undefined4 *)(lVar5 + 0x60 + lVar11) = 0;
      *(undefined4 *)(lVar5 + 0x70 + lVar11) = 2;
      *(undefined **)(lVar5 + 0x90 + lVar11) = &UNK_143016fe8;
      *(undefined8 *)(lVar5 + 0x98 + lVar11) = 0x24;
      *(undefined **)(lVar5 + 0xa0 + lVar11) = &UNK_14330dc96;
      *(undefined8 *)(lVar5 + 0xa8 + lVar11) = 0x2b;
      pfVar13 = (float *)(lVar5 + 0xb0 + lVar11);
      *pfVar13 = fVar6;
      pfVar13[1] = fVar7;
      pfVar13[2] = fVar17;
      pfVar13[3] = fVar29;
      *(ulonglong *)(lVar5 + 0xc0 + lVar11) = CONCAT44(fVar15,fVar28);
      *(float *)(lVar5 + 200 + lVar11) = fVar27;
      *(float *)(lVar5 + 0xcc + lVar11) = fVar16;
      uVar4 = *(undefined8 *)(param_3 + 10);
      puVar1 = (undefined8 *)(lVar5 + 0xd0 + lVar11);
      *puVar1 = *(undefined8 *)(param_3 + 8);
      puVar1[1] = uVar4;
      *(undefined4 *)(lVar5 + 0xe0 + lVar11) = 1;
      *(undefined4 *)(lVar5 + 0xe4 + lVar11) = param_6;
      *(undefined4 *)(lVar5 + 0xe8 + lVar11) = 0;
      *(undefined1 *)(lVar5 + 0x105 + lVar11) = 2;
      *(undefined4 *)(lVar5 + 0x108 + lVar11) = 0;
      *(undefined1 *)(lVar5 + 0x15c + lVar11) = 2;
      *(ulonglong *)(lVar5 + 0x15d + lVar11) = CONCAT17(uStack_101,uStack_108);
      *(ulonglong *)(lVar5 + 0x164 + lVar11) = CONCAT71(uStack_100,uStack_101);
      *(undefined1 *)(lVar5 + 0x16c + lVar11) = 2;
      *(undefined1 *)(lVar5 + 0x16e + lVar11) = param_5;
      *(undefined1 *)(lVar5 + 0x16f + lVar11) = 0;
      *(longlong *)(param_7 + 0xc0) = lVar9 + 1;
    }
    fVar7 = _DAT_143016bb4;
    fVar6 = _DAT_143016bb0;
    fVar27 = _DAT_143016b88;
    if (param_4 != 1) {
      lVar9 = param_4 + -2;
      pfVar13 = param_3 + 0x14;
      do {
        fVar17 = pfVar13[-3] + fVar26;
        if (((byte)param_13 & fVar17 <= param_14) == 0) {
          fVar28 = pfVar13[-8];
          fVar16 = pfVar13[-7];
          fVar19 = pfVar13[-6];
          fVar20 = pfVar13[-5];
          fVar29 = pfVar13[-2];
          fVar15 = pfVar13[-4];
          if (bVar3 < 2) {
            fVar22 = pfVar13[-1];
          }
          else {
            fVar22 = fVar7;
            if (lVar9 == 0) {
              fVar24 = fVar19 * fVar19;
              fVar21 = fVar20 * fVar20;
              fVar23 = fVar16 * fVar16 + fVar28 * fVar28;
              fVar22 = fVar19 * 0.0 + fVar16 * 0.0 + fVar28 * fVar27;
              fVar22 = fVar22 + fVar22;
              fVar25 = fVar20 + fVar20;
              fVar15 = fVar15 + fVar25 * (fVar16 * _DAT_143016b90 - fVar19 * _DAT_143016ba0) +
                                fVar22 * fVar28 + (fVar21 - (fVar23 + fVar24)) * fVar27;
              fVar17 = fVar17 + fVar25 * (fVar19 * _UNK_143016b94 - fVar28 * _UNK_143016ba4) +
                                fVar22 * fVar16 + (fVar21 - (fVar23 + fVar24)) * 0.0;
              fVar29 = fVar29 + fVar25 * (fVar28 * _UNK_143016b98 - fVar16 * _UNK_143016ba8) +
                                fVar22 * fVar19 + (fVar21 - (fVar23 + fVar24)) * 0.0;
              fVar22 = fVar6;
            }
          }
          if ((param_11 & 1) != 0) {
            fVar22 = fVar22 * param_12;
          }
          uStack_10d = 0;
          uStack_115 = 0;
          uStack_111 = 0;
          uStack_120 = 0;
          uStack_128 = (undefined1)uStack_118;
          uStack_127 = (undefined1)(uStack_118 >> 8);
          uStack_126 = (uint5)(byte)(uStack_118 >> 0x10);
          uStack_121 = 0;
          uStack_108 = (uint7)uStack_118;
          uStack_f1 = 0;
          uStack_f0 = 0;
          uStack_101 = 0;
          uStack_100 = 0;
          lVar5 = *(longlong *)(param_7 + 0xc0);
          if (lVar5 == *(longlong *)(param_7 + 0xb0)) {
            uStack_f8 = uStack_108;
            pdb_142d8ddd0(param_7 + 0xb0);
          }
          lVar11 = *(longlong *)(param_7 + 0xb8);
          lVar12 = lVar5 * 0x170;
          *(undefined8 *)(lVar11 + lVar12) = 0;
          *(undefined8 *)(lVar11 + 0x10 + lVar12) = 0;
          *(undefined8 *)(lVar11 + 0x20 + lVar12) = 0;
          *(undefined8 *)(lVar11 + 0x30 + lVar12) = 0;
          *(undefined4 *)(lVar11 + 0x40 + lVar12) = 0;
          *(undefined4 *)(lVar11 + 0x50 + lVar12) = 0;
          *(undefined4 *)(lVar11 + 0x60 + lVar12) = 0;
          *(undefined4 *)(lVar11 + 0x70 + lVar12) = 2;
          *(undefined **)(lVar11 + 0x90 + lVar12) = &UNK_143016fe8;
          *(undefined8 *)(lVar11 + 0x98 + lVar12) = 0x24;
          *(undefined **)(lVar11 + 0xa0 + lVar12) = &UNK_14330dc96;
          *(undefined8 *)(lVar11 + 0xa8 + lVar12) = 0x2b;
          pfVar10 = (float *)(lVar11 + 0xb0 + lVar12);
          *pfVar10 = fVar28;
          pfVar10[1] = fVar16;
          pfVar10[2] = fVar19;
          pfVar10[3] = fVar20;
          *(ulonglong *)(lVar11 + 0xc0 + lVar12) = CONCAT44(fVar17,fVar15);
          *(float *)(lVar11 + 200 + lVar12) = fVar29;
          *(float *)(lVar11 + 0xcc + lVar12) = fVar22;
          uVar4 = *(undefined8 *)(pfVar13 + 2);
          puVar1 = (undefined8 *)(lVar11 + 0xd0 + lVar12);
          *puVar1 = *(undefined8 *)pfVar13;
          puVar1[1] = uVar4;
          *(undefined4 *)(lVar11 + 0xe0 + lVar12) = 1;
          *(undefined4 *)(lVar11 + 0xe4 + lVar12) = param_6;
          *(undefined4 *)(lVar11 + 0xe8 + lVar12) = 0;
          *(undefined1 *)(lVar11 + 0x105 + lVar12) = 2;
          *(undefined4 *)(lVar11 + 0x108 + lVar12) = 0;
          *(undefined1 *)(lVar11 + 0x15c + lVar12) = 2;
          *(ulonglong *)(lVar11 + 0x15d + lVar12) = CONCAT17(uStack_101,uStack_108);
          *(ulonglong *)(lVar11 + 0x164 + lVar12) = CONCAT71(uStack_100,uStack_101);
          *(undefined1 *)(lVar11 + 0x16c + lVar12) = 2;
          *(undefined1 *)(lVar11 + 0x16e + lVar12) = param_5;
          *(undefined1 *)(lVar11 + 0x16f + lVar12) = 0;
          *(longlong *)(param_7 + 0xc0) = lVar5 + 1;
        }
        lVar9 = lVar9 + -1;
        pfVar10 = pfVar13 + 4;
        pfVar13 = pfVar13 + 0xc;
      } while (pfVar10 != param_3 + param_4 * 0xc);
    }
  }
  return;
}

