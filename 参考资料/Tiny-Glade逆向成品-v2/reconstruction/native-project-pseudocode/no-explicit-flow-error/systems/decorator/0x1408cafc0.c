// VA 0x1408cafc0, PDB extent 1314 bytes
// system_decorator::decorator_visual::gothic_balcony_door::check_for_door_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_balcony_door.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::gothic_balcony_door::check_for_door_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_balcony_door.rs
   Extent: 1314 */

undefined8
pdb_1408cafc0(longlong param_1,undefined8 param_2,float *param_3,longlong param_4,longlong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  
  fVar20 = param_3[4];
  fVar15 = param_3[5];
  fVar13 = param_3[6];
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 0x10) * 2;
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uStack_118 = uVar3;
  lStack_110 = lVar5;
  uStack_108 = uVar2;
  fVar10 = (float)pdb_1402202d0(&uStack_118,fVar20,fVar13);
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  lVar7 = pdb_1406d0830(param_2);
  puVar1 = (undefined8 *)(lVar7 + 0x20);
  puVar9 = (undefined8 *)(lVar7 + 0x28);
  if (*(char *)(lVar7 + 0x298) == '\0') {
    puVar9 = (undefined8 *)(lVar7 + 0x10);
    puVar1 = (undefined8 *)(lVar7 + 8);
  }
  lStack_110 = *puVar9;
  uStack_118 = *puVar1;
  fVar11 = (float)pdb_140a7d8d0(&uStack_118,fVar20,fVar13,_DAT_143006a28,0x43020000);
  fVar15 = (*(float *)(param_4 + 0x1c) - *(float *)(param_4 + 0x18)) * _DAT_142e36f38 + fVar15;
  bVar4 = fVar15 <= _DAT_142e3b1d8;
  bVar6 = bVar4 && 0.0 < fVar11;
  if ((bVar6) || (fVar15 + _DAT_142f60fec < fVar10)) {
    fVar15 = *param_3;
    fVar18 = param_3[1];
    fVar19 = param_3[2];
    fVar21 = param_3[3];
    fVar16 = fVar18 * fVar18 + fVar15 * fVar15;
    fVar24 = fVar21 * fVar21 - (fVar16 + fVar19 * fVar19);
    fVar25 = fVar21 * fVar21 - (fVar16 + fVar19 * fVar19);
    fVar16 = _UNK_143017a58 * fVar19 + _UNK_143017a54 * fVar18 + _DAT_143017a50 * fVar15;
    fVar16 = fVar16 + fVar16;
    fStack_d8 = fVar15 * 0.0;
    fStack_d4 = fVar18 * 0.0;
    fStack_d0 = fVar19 * 0.0;
    fStack_cc = fVar21 * 0.0;
    fVar21 = fVar21 + fVar21;
    fVar22 = fVar20 + (_UNK_143017a58 * fVar18 - fStack_d0) * fVar21 +
                      fVar16 * fVar15 + _DAT_143017a50 * fVar24;
    fVar16 = (_UNK_143017a54 * fVar15 - fStack_d4) * fVar21 +
             fVar16 * fVar19 + _UNK_143017a58 * fVar25 + fVar13;
    uStack_118 = uVar3;
    lStack_110 = lVar5;
    uStack_108 = uVar2;
    uStack_e8 = pdb_1402202d0(&uStack_118,fVar22,fVar16);
    if (_DAT_142e3b1d8 < fVar10 - (float)uStack_e8) {
      fVar14 = *(float *)(param_4 + 0x10);
      auStack_f8 = ZEXT416((uint)fVar14);
      fVar12 = _DAT_142e36f28 * fVar14 * _DAT_142e36f60;
      fVar14 = fVar14 * 0.0 * _UNK_142e36f64;
      fVar17 = fVar19 * fVar14 + fVar18 * fVar14 + fVar15 * fVar12;
      fVar17 = fVar17 + fVar17;
      fVar23 = (fVar14 * fVar18 - fVar14 * fVar19) * fVar21 + fVar17 * fVar15 + fVar24 * fVar12;
      fVar14 = (fVar14 * fVar15 - fVar12 * fVar18) * fVar21 + fVar17 * fVar19 + fVar25 * fVar14;
      uStack_118 = uVar3;
      lStack_110 = lVar5;
      uStack_108 = uVar2;
      fStack_100 = fVar13;
      fStack_fc = fVar20;
      fVar13 = (float)pdb_1402202d0(&uStack_118,fVar22 - fVar23,fVar16 - fVar14);
      uStack_118 = uVar3;
      lStack_110 = lVar5;
      uStack_108 = uVar2;
      fVar16 = (float)pdb_1402202d0(&uStack_118,fVar23 + fVar22,fVar14 + fVar16);
      fVar20 = fVar16;
      if (fVar13 <= fVar16) {
        fVar20 = fVar13;
      }
      fVar13 = (float)(~-(uint)NAN(fVar13) & (uint)fVar20 | -(uint)NAN(fVar13) & (uint)fVar16);
      fVar20 = (float)uStack_e8;
      if (fVar13 <= (float)uStack_e8) {
        fVar20 = fVar13;
      }
      fVar20 = (float)(-(uint)NAN(fVar13) & (uint)(float)uStack_e8 |
                      ~-(uint)NAN(fVar13) & (uint)fVar20);
      if (!(bool)(~bVar6 & _DAT_142e37838 <= fVar10 - fVar20)) {
        pdb_14007ee60();
        pfVar8 = (float *)pub_1406abab0(0x20,4);
        if (pfVar8 != (float *)0x0) {
          fVar13 = _DAT_143009bc0 - fVar20;
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
          fVar16 = _UNK_142e378f8 * fVar19 + _UNK_142e378f4 * fVar18 + _DAT_142e378f0 * fVar15;
          fVar16 = fVar16 + fVar16;
          fVar18 = fVar16 * fVar15 + fVar24 * _DAT_142e378f0 +
                   fVar21 * (fVar18 * _UNK_142e378f8 - fStack_d0);
          fVar21 = fVar16 * fVar19 + fVar25 * _UNK_142e378f8 +
                   fVar21 * (fVar15 * _UNK_142e378f4 - fStack_d4);
          fVar19 = _DAT_142e36f28 / SQRT(fVar21 * fVar21 + fVar18 * fVar18);
          fVar15 = _DAT_143009bc0;
          if (!bVar4 || 0.0 >= fVar11) {
            fVar15 = fVar20;
          }
          *pfVar8 = fStack_fc;
          pfVar8[1] = fStack_100;
          *(ulonglong *)(pfVar8 + 2) = CONCAT44(fVar21 * fVar19,fVar18 * fVar19);
          pfVar8[4] = fVar10;
          pfVar8[5] = fVar15;
          pfVar8[6] = fVar13;
          pfVar8[7] = (float)auStack_f8._0_4_;
          if (*(byte **)(param_5 + 0x150) != (byte *)0x0) {
            pub_1406abac0(*(byte **)(param_5 + 0x150),0x20,4);
          }
          *(float **)(param_5 + 0x150) = pfVar8;
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x20);
      }
    }
  }
  return 0;
}

