// VA 0x1408ce300, PDB extent 774 bytes
// system_decorator::decorator_visual::cottage_balcony_door::add_door_autoclutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_balcony_door.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_balcony_door::add_door_autoclutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_balcony_door.rs
   Extent: 774 */

void pdb_1408ce300(longlong param_1,float *param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 auStack_80 [2];
  undefined *puStack_78;
  undefined8 uStack_70;
  
  if (3 < *(byte *)(param_1 + 0x5a)) {
    lVar12 = pdb_140dedfe0(*(undefined4 *)(param_1 + 0x54));
    auVar5._8_8_ = 0;
    auVar5._0_8_ = lVar12 + 0xa0761d6478bd642fU ^ 0xe7037ed1a0b428db;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = lVar12 + 0xa0761d6478bd642fU;
    auVar5 = auVar5 * auVar6 >> 0x1e;
    uVar13 = auVar5._0_8_ ^ auVar5._8_8_;
    auStack_80[0] = param_4;
    if ((uVar13 & 3) == 0) {
      fVar7 = *param_2;
      fVar8 = param_2[1];
      fVar9 = param_2[2];
      fVar10 = param_2[3];
      uVar3 = *(undefined8 *)(param_2 + 4);
      fVar19 = fVar9 * fVar9;
      fVar22 = fVar10 * fVar10;
      fVar23 = fVar8 * fVar8 + fVar7 * fVar7;
      fVar16 = (fVar22 - (fVar23 + fVar19)) * _DAT_1430181d0;
      fVar17 = (fVar22 - (fVar23 + fVar19)) * _UNK_1430181d4;
      fVar20 = (fVar22 - (fVar23 + fVar19)) * _UNK_1430181d8;
      fVar22 = _UNK_1430181d8 * fVar9 + _UNK_1430181d4 * fVar8 + _DAT_1430181d0 * fVar7;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar8 * _DAT_1430181e0;
      fVar18 = fVar9 * _UNK_1430181e4;
      fVar21 = fVar7 * _UNK_1430181e8;
      fVar24 = fVar9 * _DAT_1430181f0;
      fVar25 = fVar7 * _UNK_1430181f4;
      fVar26 = fVar8 * _UNK_1430181f8;
      fVar27 = fVar10 + fVar10;
      fVar19 = param_2[6];
      puStack_78 = &UNK_143018420;
      uStack_70 = 8;
      uVar14 = pdb_1414af4c0(auStack_80);
      lVar12 = *(longlong *)(param_3 + 0x138);
      if (lVar12 == *(longlong *)(param_3 + 0x128)) {
        pdb_142d7eb40(param_3 + 0x128);
      }
      lVar4 = *(longlong *)(param_3 + 0x130);
      lVar15 = lVar12 * 0x50;
      *(undefined1 *)(lVar4 + lVar15) = 3;
      pfVar1 = (float *)(lVar4 + 0x10 + lVar15);
      *pfVar1 = fVar7;
      pfVar1[1] = fVar8;
      pfVar1[2] = fVar9;
      pfVar1[3] = fVar10;
      *(ulonglong *)(lVar4 + 0x20 + lVar15) =
           CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                    fVar27 * (fVar18 - fVar25) + fVar22 * fVar8 + fVar17,
                    (float)uVar3 + fVar27 * (fVar23 - fVar24) + fVar22 * fVar7 + fVar16);
      *(float *)(lVar4 + 0x28 + lVar15) =
           fVar27 * (fVar21 - fVar26) + fVar22 * fVar9 + fVar20 + fVar19;
      uVar3 = *(undefined8 *)(param_2 + 9);
      puVar2 = (undefined8 *)(lVar4 + 0x2c + lVar15);
      *puVar2 = *(undefined8 *)(param_2 + 7);
      puVar2[1] = uVar3;
      *(float *)(lVar4 + 0x3c + lVar15) = param_2[0xb];
      *(undefined8 *)(lVar4 + 0x40 + lVar15) = uVar14;
      *(undefined8 *)(lVar4 + 0x48 + lVar15) = param_5;
      *(longlong *)(param_3 + 0x138) = lVar12 + 1;
    }
    else if (((uint)uVar13 & 3) == 1) {
      fVar7 = *param_2;
      fVar8 = param_2[1];
      fVar9 = param_2[2];
      fVar10 = param_2[3];
      uVar3 = *(undefined8 *)(param_2 + 4);
      fVar19 = fVar9 * fVar9;
      fVar22 = fVar10 * fVar10;
      fVar23 = fVar8 * fVar8 + fVar7 * fVar7;
      fVar16 = (fVar22 - (fVar23 + fVar19)) * _DAT_1430181b0;
      fVar17 = (fVar22 - (fVar23 + fVar19)) * _UNK_1430181b4;
      fVar20 = (fVar22 - (fVar23 + fVar19)) * _UNK_1430181b8;
      fVar22 = _UNK_1430181b8 * fVar9 + _UNK_1430181b4 * fVar8 + _DAT_1430181b0 * fVar7;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar8 * _DAT_1430181c0;
      fVar18 = fVar9 * _UNK_1430181c4;
      fVar21 = fVar7 * _UNK_1430181c8;
      fVar24 = fVar9 * _DAT_143011f60;
      fVar25 = fVar7 * _UNK_143011f64;
      fVar26 = fVar8 * _UNK_143011f68;
      fVar27 = fVar10 + fVar10;
      fVar19 = param_2[6];
      puStack_78 = &UNK_143018428;
      uStack_70 = 5;
      uVar14 = pdb_1414af4c0(auStack_80);
      bVar11 = pdb_140901020(*param_6 + 0x98);
      lVar12 = *(longlong *)(param_3 + 0x138);
      if (lVar12 == *(longlong *)(param_3 + 0x128)) {
        pdb_142d7eb40(param_3 + 0x128);
      }
      lVar4 = *(longlong *)(param_3 + 0x130);
      lVar15 = lVar12 * 0x50;
      *(byte *)(lVar4 + lVar15) = bVar11 | 4;
      pfVar1 = (float *)(lVar4 + 0x10 + lVar15);
      *pfVar1 = fVar7;
      pfVar1[1] = fVar8;
      pfVar1[2] = fVar9;
      pfVar1[3] = fVar10;
      *(ulonglong *)(lVar4 + 0x20 + lVar15) =
           CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                    fVar27 * (fVar18 - fVar25) + fVar22 * fVar8 + fVar17,
                    (float)uVar3 + fVar27 * (fVar23 - fVar24) + fVar22 * fVar7 + fVar16);
      *(float *)(lVar4 + 0x28 + lVar15) =
           fVar27 * (fVar21 - fVar26) + fVar22 * fVar9 + fVar20 + fVar19;
      uVar3 = *(undefined8 *)(param_2 + 9);
      puVar2 = (undefined8 *)(lVar4 + 0x2c + lVar15);
      *puVar2 = *(undefined8 *)(param_2 + 7);
      puVar2[1] = uVar3;
      *(float *)(lVar4 + 0x3c + lVar15) = param_2[0xb];
      *(undefined8 *)(lVar4 + 0x40 + lVar15) = uVar14;
      *(undefined8 *)(lVar4 + 0x48 + lVar15) = param_5;
      *(longlong *)(param_3 + 0x138) = lVar12 + 1;
    }
  }
  return;
}

