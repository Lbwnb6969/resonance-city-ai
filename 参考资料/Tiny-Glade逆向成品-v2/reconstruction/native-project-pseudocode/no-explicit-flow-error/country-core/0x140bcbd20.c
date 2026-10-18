// VA 0x140bcbd20, PDB extent 2279 bytes
// country_core::systems::wall::structure_outline::structure_outline::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::structure_outline::structure_outline::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
   Extent: 2279 */

void pdb_140bcbd20(undefined8 *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_1c4;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [8];
  float fStack_1b0;
  undefined1 auStack_1a8 [8];
  float fStack_1a0;
  undefined8 *puStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  undefined8 uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_168;
  float fStack_160;
  undefined4 uStack_15c;
  ulonglong uStack_158;
  undefined8 uStack_150;
  uint uStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulonglong uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong *puStack_e8;
  ulonglong uStack_e0;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  uVar15 = *(ulonglong *)(param_2 + 0x10);
  uVar16 = uVar15 * 0x18;
  uStack_f8 = uVar15;
  if (uVar15 < 0x555555555555556) goto LAB_140bcbdb0;
  puVar6 = (undefined8 *)0x0;
  while( true ) {
    param_1 = puVar6;
    param_2 = uVar16;
    pdb_142dc7e2a();
    uStack_f8 = uVar15;
LAB_140bcbdb0:
    if (uVar16 == 0) break;
    uVar15 = uStack_f8;
    pdb_14007ee60();
    puStack_e8 = (ulonglong *)pub_1406abab0(uVar16,4);
    puVar6 = (undefined8 *)0x4;
    if (puStack_e8 != (ulonglong *)0x0) {
      uStack_f0 = uStack_f8 * 2;
LAB_140bcbdf1:
      fVar11 = _DAT_142e37988;
      uVar10 = _DAT_142e37820;
      fVar18 = _UNK_142e36f64;
      fVar23 = _DAT_142e36f60;
      fVar21 = _DAT_142e36f50;
      fVar9 = _DAT_142e36f28;
      uStack_e0 = 0;
      uStack_190 = *(ulonglong *)(param_2 + 0x48);
      uVar15 = uStack_f8;
      if (uStack_190 < uStack_f8) {
        uVar15 = uStack_190;
      }
      lVar2 = *(longlong *)(param_2 + 8);
      lVar3 = *(longlong *)(param_2 + 0x40);
      uStack_100 = CONCAT71(uStack_100._1_7_,*(char *)*param_1);
      puStack_198 = param_1;
      if (*(char *)*param_1 == '\x02') {
        if (*(ulonglong *)(param_2 + 0x60) < uVar15) {
          uVar15 = *(ulonglong *)(param_2 + 0x60);
        }
        if (*(ulonglong *)(param_2 + 0x78) < uVar15) {
          uVar15 = *(ulonglong *)(param_2 + 0x78);
        }
        for (uVar16 = 0; uVar16 < uVar15; uVar16 = uVar16 + 1) {
          uStack_d1 = 1;
          pdb_140df4540(&uStack_168,lVar2 + uVar16 * 8,*(undefined4 *)(lVar3 + uVar16 * 4));
          uVar8 = uStack_e0;
          if (uStack_e0 == uStack_f0) {
            uStack_d1 = 1;
            pdb_142db7820(&uStack_f0);
          }
          *(float *)((longlong)puStack_e8 + uVar8 * 0xc + 8) = fStack_160;
          *(ulonglong *)((longlong)puStack_e8 + uVar8 * 0xc) = uStack_168;
          uStack_e0 = uVar8 + 1;
        }
      }
      else {
        lVar4 = *(longlong *)(param_2 + 0x58);
        if (*(ulonglong *)(param_2 + 0x60) < uVar15) {
          uVar15 = *(ulonglong *)(param_2 + 0x60);
        }
        if (*(ulonglong *)(param_2 + 0x78) < uVar15) {
          uVar15 = *(ulonglong *)(param_2 + 0x78);
        }
        lVar5 = *(longlong *)(param_2 + 0x70);
        for (uVar16 = 0; fVar17 = _UNK_142e61234, fVar22 = _DAT_142e61230, fVar20 = _DAT_142e36f38,
            uVar16 < uVar15; uVar16 = uVar16 + 1) {
          fVar19 = *(float *)(lVar4 + uVar16 * 4) + fVar11;
          uStack_d1 = 1;
          pdb_140df4540(auStack_1a8,lVar2 + uVar16 * 8,*(undefined4 *)(lVar3 + uVar16 * 4));
          fVar20 = *(float *)(lVar5 + uVar16 * 8);
          fVar22 = *(float *)(lVar5 + 4 + uVar16 * 8);
          fVar17 = fVar9 / SQRT(fVar20 * fVar20 + fVar22 * fVar22);
          uVar14 = (uint)((int)fVar17 - 1U < 0x7fffff ||
                         (int)ABS(fVar17) - 0x800000U < 0x7f000000 && -1 < (int)fVar17);
          uStack_118 = CONCAT44((int)(uVar14 << 0x1f) >> 0x1f,(int)(uVar14 << 0x1f) >> 0x1f) &
                       CONCAT44(fVar20 * fVar17,(float)((uint)fVar22 ^ uVar10) * fVar17);
          uStack_d1 = 1;
          pdb_140df4520(&uStack_168);
          uVar13 = uStack_e0;
          fVar22 = (float)uStack_168;
          uVar8 = uStack_168 >> 0x20;
          fVar20 = fVar19 * fStack_160 * fVar21 + fStack_1a0;
          fVar17 = auStack_1a8._0_4_;
          fVar24 = auStack_1a8._4_4_;
          if (uStack_e0 == uStack_f0) {
            uStack_d1 = 1;
            pdb_142db7820(&uStack_f0);
          }
          *(ulonglong *)((longlong)puStack_e8 + uVar13 * 0xc) =
               CONCAT44((float)uVar8 * fVar19 * fVar18 + fVar24,fVar22 * fVar19 * fVar23 + fVar17);
          *(float *)((longlong)puStack_e8 + uVar13 * 0xc + 8) = fVar20;
          uStack_e0 = uVar13 + 1;
        }
        while (uVar16 = uStack_e0, uVar15 != 0) {
          fVar19 = *(float *)(lVar4 + -4 + uVar15 * 4) + fVar11;
          uStack_d1 = 1;
          pdb_140df4540(auStack_1b8,lVar2 + uVar15 * 8 + -8,*(undefined4 *)(lVar3 + -4 + uVar15 * 4)
                       );
          uVar15 = uVar15 - 1;
          fVar21 = *(float *)(lVar5 + uVar15 * 8);
          fVar23 = *(float *)(lVar5 + 4 + uVar15 * 8);
          fVar18 = fVar9 / SQRT(fVar21 * fVar21 + fVar23 * fVar23);
          uVar14 = (uint)((int)fVar18 - 1U < 0x7fffff ||
                         (int)ABS(fVar18) - 0x800000U < 0x7f000000 && -1 < (int)fVar18);
          uStack_118 = CONCAT44((int)(uVar14 << 0x1f) >> 0x1f,(int)(uVar14 << 0x1f) >> 0x1f) &
                       CONCAT44(fVar21 * fVar18,(float)((uint)fVar23 ^ uVar10) * fVar18);
          uStack_d1 = 1;
          pdb_140df4520(&uStack_168);
          uVar8 = uStack_e0;
          fVar23 = (float)uStack_168;
          uVar16 = uStack_168 >> 0x20;
          fVar21 = fVar19 * fStack_160 * fVar20 + fStack_1b0;
          fVar18 = auStack_1b8._0_4_;
          fVar24 = auStack_1b8._4_4_;
          if (uStack_e0 == uStack_f0) {
            uStack_d1 = 1;
            pdb_142db7820(&uStack_f0);
          }
          *(ulonglong *)((longlong)puStack_e8 + uVar8 * 0xc) =
               CONCAT44(fVar24 + (float)uVar16 * fVar19 * fVar17,fVar18 + fVar23 * fVar19 * fVar22);
          *(float *)((longlong)puStack_e8 + uVar8 * 0xc + 8) = fVar21;
          uStack_e0 = uVar8 + 1;
        }
        if (uStack_e0 == 0) {
          uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_143063cb0);
        }
        uStack_168 = *puStack_e8;
        fStack_160 = (float)puStack_e8[1];
        if (uStack_e0 == uStack_f0) {
          uStack_d1 = 1;
          pdb_142db7820(&uStack_f0);
        }
        *(float *)((longlong)puStack_e8 + uVar16 * 0xc + 8) = fStack_160;
        *(ulonglong *)((longlong)puStack_e8 + uVar16 * 0xc) = uStack_168;
        uStack_e0 = uVar16 + 1;
      }
      uVar1 = *(undefined4 *)puStack_198[1];
      uStack_178 = uStack_e0;
      uStack_180 = puStack_e8;
      puVar12 = uStack_180;
      uStack_188 = uStack_f0;
      uStack_138 = (uint)((char)uStack_100 == '\x01');
      uStack_158 = uStack_e0;
      uStack_180._0_4_ = SUB84(puStack_e8,0);
      uStack_180._4_4_ = (undefined4)((ulonglong)puStack_e8 >> 0x20);
      uStack_168 = uStack_f0;
      fStack_160 = (float)(undefined4)uStack_180;
      uStack_15c = uStack_180._4_4_;
      uStack_150 = 0x8000000000000000;
      uStack_124 = 0x101;
      puVar6 = (undefined8 *)puStack_198[2];
      uStack_d1 = 0;
      uStack_180 = puVar12;
      uStack_128 = uVar1;
      pdb_140ab2da0(&uStack_168,*puVar6);
      if ((char)uStack_100 == '\x01') {
        if (uStack_f8 == 0) {
          uStack_110 = (byte *)0x4;
        }
        else {
          uVar15 = uStack_f8 * 0xc;
          pdb_14007ee60();
          uStack_110 = pub_1406abab0(uVar15,4);
          if (uStack_110 == (byte *)0x0) {
            uStack_d1 = 0;
            pdb_142dc7e2a(4,uVar15);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
        }
        uVar15 = uStack_f8;
        if (uStack_190 < uStack_f8) {
          uVar15 = uStack_190;
        }
        uStack_108 = 0;
        uStack_100 = 0;
        uStack_118 = uStack_f8;
        uStack_f8 = uVar15;
        while (uStack_100 < uStack_f8) {
          pdb_140df4540(&uStack_1c4,lVar2 + uStack_100 * 8,*(undefined4 *)(lVar3 + uStack_100 * 4));
          uVar15 = uStack_108;
          if (uStack_108 == uStack_118) {
            pdb_142db7820(&uStack_118);
          }
          uStack_100 = uStack_100 + 1;
          *(undefined4 *)(uStack_110 + uVar15 * 0xc + 8) = uStack_1bc;
          *(undefined8 *)(uStack_110 + uVar15 * 0xc) = uStack_1c4;
          uStack_108 = uVar15 + 1;
        }
        uStack_158 = uStack_108;
        uStack_168 = uStack_118;
        fStack_160 = (float)(undefined4)uStack_110;
        uStack_15c = uStack_110._4_4_;
        uStack_150 = 0x8000000000000000;
        uStack_138 = 1;
        uStack_124 = CONCAT22(uStack_124._2_2_,0x101);
        uStack_128 = uVar1;
        pdb_140ab2da0(&uStack_168,*puVar6);
      }
      return;
    }
  }
  puStack_e8 = (ulonglong *)0x4;
  uStack_f0 = 0;
  goto LAB_140bcbdf1;
}

