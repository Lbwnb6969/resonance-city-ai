// VA 0x14287b500, PDB extent 2378 bytes
// zeno::segment::Segments::split_curve<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<enum2$<zeno::command::Command> > >,zeno::path_data::apply::closure_env$0<ref$<ref$<slice2$<enum2$<zeno::command::Command> > > >,enum2$<zeno::style::Style>,zeno::geometry::BoundsBuilder> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   zeno::segment::Segments::split_curve<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<enum2$<zeno::command::Command>
   > >,zeno::path_data::apply::closure_env$0<ref$<ref$<slice2$<enum2$<zeno::command::Command> > >
   >,enum2$<zeno::style::Style>,zeno::geometry::BoundsBuilder> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/water/src/lib.rs
   Extent: 2378 */

void pdb_14287b500(undefined1 *param_1,longlong param_2,undefined1 param_3,float *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  byte bVar23;
  longlong lVar24;
  undefined8 *puVar25;
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
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 auStack_128 [29];
  
  fVar6 = _DAT_142e37848;
  fVar4 = *param_4;
  if (_DAT_142e37848 <= (float)((uint)(fVar4 - param_4[2]) & _DAT_142e377e0)) {
    bVar18 = false;
  }
  else {
    bVar18 = (float)((uint)(param_4[1] - param_4[3]) & _DAT_142e377e0) < _DAT_142e37848;
  }
  bVar22 = (float)((uint)(param_4[2] - param_4[4]) & _DAT_142e377e0) < _DAT_142e37848 &&
           (float)((uint)(param_4[3] - param_4[5]) & _DAT_142e377e0) < _DAT_142e37848;
  fVar5 = param_4[6];
  if (_DAT_142e37848 <= (float)((uint)(param_4[4] - fVar5) & _DAT_142e377e0)) {
    bVar23 = bVar22 + bVar18;
  }
  else {
    bVar23 = bVar22 + bVar18 +
             ((float)((uint)(param_4[5] - param_4[7]) & _DAT_142e377e0) < _DAT_142e37848);
  }
  if (bVar23 < 2) {
    auStack_128[0xc] = 0;
    auStack_128[0xd] = 0;
    auStack_128[10] = 0;
    auStack_128[0xb] = 0;
    auStack_128[8] = 0;
    auStack_128[9] = 0;
    auStack_128[6] = 0;
    auStack_128[7] = 0;
    auStack_128[4] = 0;
    auStack_128[5] = 0;
    auStack_128[2] = 0;
    auStack_128[3] = 0;
    auStack_128[0] = 0;
    auStack_128[1] = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puVar25 = &uStack_138;
    puStack_220 = param_1;
    lVar19 = pdb_141c706e0(param_4,puVar25);
    fVar5 = _DAT_143068380;
    uVar14 = _DAT_142e37820;
    uVar13 = _DAT_142e377e0;
    uVar12 = _DAT_142e36f50;
    fVar4 = _DAT_142e36f28;
    if (lVar19 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0;
      lVar24 = 0;
      do {
        while( true ) {
          if (lVar24 == 4) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(4,4,&UNK_1435a9798);
          }
          uStack_218 = *puVar25;
          uStack_210 = puVar25[1];
          uStack_208 = puVar25[2];
          uStack_200 = puVar25[3];
          fVar28 = (float)uStack_208;
          fVar29 = (float)((ulonglong)uStack_208 >> 0x20);
          fVar32 = (float)uStack_210;
          fVar34 = (float)((ulonglong)uStack_210 >> 0x20);
          if ((fVar6 <= (float)((uint)(fVar32 - fVar28) & uVar13)) ||
             (fVar6 <= (float)((uint)(fVar34 - fVar29) & uVar13))) break;
LAB_14287b8a0:
          pdb_141c710d0(&uStack_178,&uStack_218,uVar12);
          uStack_258 = uStack_168;
          uStack_250 = uStack_160;
          uStack_268 = uStack_178;
          uStack_260 = uStack_170;
          fStack_248 = fStack_158;
          fStack_244 = fStack_154;
          fStack_240 = fStack_150;
          fStack_23c = fStack_14c;
          uStack_238 = CONCAT44(uStack_144,uStack_148);
          uStack_230 = CONCAT44(uStack_13c,uStack_140);
          fVar28 = (float)uStack_168;
          fVar29 = (float)((ulonglong)uStack_168 >> 0x20);
          fVar32 = (float)uStack_170;
          fVar34 = (float)((ulonglong)uStack_170 >> 0x20);
          if ((fVar6 <= (float)((uint)(fVar32 - fVar28) & uVar13)) ||
             (fVar6 <= (float)((uint)(fVar34 - fVar29) & uVar13))) {
            fVar31 = fVar32 - (float)uStack_178;
            fVar33 = fVar34 - (float)((ulonglong)uStack_178 >> 0x20);
            fVar35 = fVar33 * fVar33 + fVar31 * fVar31;
            fVar26 = 0.0;
            fVar30 = 0.0;
            fVar27 = 0.0;
            if ((fVar35 != 0.0) || (NAN(fVar35))) {
              fVar27 = fVar33 * (fVar4 / SQRT(fVar35));
              fVar30 = (float)((uint)fVar31 ^ uVar14) * (fVar4 / SQRT(fVar35));
            }
            fVar32 = fVar28 - fVar32;
            fVar34 = fVar29 - fVar34;
            fVar33 = fVar34 * fVar34 + fVar32 * fVar32;
            fVar31 = 0.0;
            if ((fVar33 != 0.0) || (NAN(fVar33))) {
              fVar31 = fVar34 * (fVar4 / SQRT(fVar33));
              fVar26 = (float)((uint)fVar32 ^ uVar14) * (fVar4 / SQRT(fVar33));
            }
            if (fVar30 * fVar26 + fVar27 * fVar31 <= fVar5) goto LAB_14287ba50;
            fVar28 = (float)uStack_160 - fVar28;
            fVar29 = (float)((ulonglong)uStack_160 >> 0x20) - fVar29;
            fVar27 = fVar29 * fVar29 + fVar28 * fVar28;
            fVar34 = 0.0;
            fVar32 = 0.0;
            if ((fVar27 != 0.0) || (NAN(fVar27))) {
              fVar32 = fVar29 * (fVar4 / SQRT(fVar27));
              fVar34 = (float)((uint)fVar28 ^ uVar14) * (fVar4 / SQRT(fVar27));
            }
            if (fVar26 * fVar34 + fVar31 * fVar32 <= fVar5) goto LAB_14287ba50;
            if (0xf < uVar20) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar20,0x10,&UNK_1435a97c8);
            }
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar20 * 0x20);
            *puVar3 = uStack_168;
            puVar3[1] = uStack_160;
            puVar3 = (undefined8 *)(param_2 + uVar20 * 0x20);
            *puVar3 = uStack_178;
            puVar3[1] = uStack_170;
            lVar21 = 1;
          }
          else {
LAB_14287ba50:
            pdb_141c710d0(&uStack_178,&uStack_268,uVar12);
            uStack_1e8 = uStack_168;
            uVar16 = uStack_1e8;
            uStack_1e0 = uStack_160;
            uVar17 = uStack_1e0;
            uStack_1f8 = uStack_178;
            uVar11 = uStack_1f8;
            uStack_1f0 = uStack_170;
            uVar15 = uStack_1f0;
            fStack_1d8 = fStack_158;
            fStack_1d4 = fStack_154;
            fStack_1d0 = fStack_150;
            fStack_1cc = fStack_14c;
            uStack_1c8 = uStack_148;
            uStack_1c4 = uStack_144;
            uStack_1c0 = uStack_140;
            uStack_1bc = uStack_13c;
            if (0xf < uVar20) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar20,0x10,&UNK_1435a97e0);
            }
            lVar21 = uVar20 * 0x20;
            uStack_1f8._0_4_ = (undefined4)uStack_178;
            uStack_1f8._4_4_ = (undefined4)((ulonglong)uStack_178 >> 0x20);
            uStack_1f0._0_4_ = (undefined4)uStack_170;
            uStack_1f0._4_4_ = (undefined4)((ulonglong)uStack_170 >> 0x20);
            uStack_1e8._0_4_ = (undefined4)uStack_168;
            uStack_1e8._4_4_ = (undefined4)((ulonglong)uStack_168 >> 0x20);
            uStack_1e0._0_4_ = (undefined4)uStack_160;
            uStack_1e0._4_4_ = (undefined4)((ulonglong)uStack_160 >> 0x20);
            puVar2 = (undefined4 *)(param_2 + 0x10 + lVar21);
            *puVar2 = (undefined4)uStack_1e8;
            puVar2[1] = uStack_1e8._4_4_;
            puVar2[2] = (undefined4)uStack_1e0;
            puVar2[3] = uStack_1e0._4_4_;
            puVar2 = (undefined4 *)(param_2 + lVar21);
            *puVar2 = (undefined4)uStack_1f8;
            puVar2[1] = uStack_1f8._4_4_;
            puVar2[2] = (undefined4)uStack_1f0;
            puVar2[3] = uStack_1f0._4_4_;
            uStack_1f8 = uVar11;
            uStack_1f0 = uVar15;
            uStack_1e8 = uVar16;
            uStack_1e0 = uVar17;
            if (uVar20 == 0xf) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(0x10,0x10,&UNK_1435a97f8);
            }
            lVar21 = lVar21 + param_2;
            *(ulonglong *)(lVar21 + 0x30) = CONCAT44(uStack_144,uStack_148);
            *(ulonglong *)(lVar21 + 0x38) = CONCAT44(uStack_13c,uStack_140);
            *(ulonglong *)(lVar21 + 0x20) = CONCAT44(fStack_154,fStack_158);
            *(ulonglong *)(lVar21 + 0x28) = CONCAT44(fStack_14c,fStack_150);
            lVar21 = 2;
          }
          uVar20 = lVar21 + uVar20;
          fVar28 = (float)uStack_238;
          fVar29 = (float)((ulonglong)uStack_238 >> 0x20);
          if ((fVar6 <= (float)((uint)(fStack_240 - fVar28) & uVar13)) ||
             (fVar6 <= (float)((uint)(fStack_23c - fVar29) & uVar13))) {
            fVar27 = fStack_240 - fStack_248;
            fVar30 = fStack_23c - fStack_244;
            fVar31 = fVar30 * fVar30 + fVar27 * fVar27;
            fVar32 = 0.0;
            fVar26 = 0.0;
            fVar34 = 0.0;
            if ((fVar31 != 0.0) || (NAN(fVar31))) {
              fVar34 = fVar30 * (fVar4 / SQRT(fVar31));
              fVar26 = (float)((uint)fVar27 ^ uVar14) * (fVar4 / SQRT(fVar31));
            }
            fVar30 = fVar28 - fStack_240;
            fVar31 = fVar29 - fStack_23c;
            fVar33 = fVar31 * fVar31 + fVar30 * fVar30;
            fVar27 = 0.0;
            if ((fVar33 != 0.0) || (NAN(fVar33))) {
              fVar27 = fVar31 * (fVar4 / SQRT(fVar33));
              fVar32 = (float)((uint)fVar30 ^ uVar14) * (fVar4 / SQRT(fVar33));
            }
            if (fVar26 * fVar32 + fVar34 * fVar27 <= fVar5) goto LAB_14287bc26;
            fVar28 = (float)uStack_230 - fVar28;
            fVar29 = (float)((ulonglong)uStack_230 >> 0x20) - fVar29;
            fVar30 = fVar29 * fVar29 + fVar28 * fVar28;
            fVar26 = 0.0;
            fVar34 = 0.0;
            if ((fVar30 != 0.0) || (NAN(fVar30))) {
              fVar34 = fVar29 * (fVar4 / SQRT(fVar30));
              fVar26 = (float)((uint)fVar28 ^ uVar14) * (fVar4 / SQRT(fVar30));
            }
            if (fVar32 * fVar26 + fVar27 * fVar34 <= fVar5) goto LAB_14287bc26;
            if (0xf < uVar20) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar20,0x10,&UNK_1435a9810);
            }
            puVar3 = (undefined8 *)(param_2 + 0x10 + uVar20 * 0x20);
            *puVar3 = uStack_238;
            puVar3[1] = uStack_230;
            pfVar1 = (float *)(param_2 + uVar20 * 0x20);
            *pfVar1 = fStack_248;
            pfVar1[1] = fStack_244;
            pfVar1[2] = fStack_240;
            pfVar1[3] = fStack_23c;
            uVar20 = uVar20 + 1;
          }
          else {
LAB_14287bc26:
            pdb_141c710d0(&uStack_178,&fStack_248,uVar12);
            uStack_1a8 = uStack_168;
            uVar16 = uStack_1a8;
            uStack_1a0 = uStack_160;
            uVar17 = uStack_1a0;
            uStack_1b8 = uStack_178;
            uVar11 = uStack_1b8;
            uStack_1b0 = uStack_170;
            uVar15 = uStack_1b0;
            fStack_198 = fStack_158;
            fStack_194 = fStack_154;
            fStack_190 = fStack_150;
            fStack_18c = fStack_14c;
            uStack_188 = uStack_148;
            uStack_184 = uStack_144;
            uStack_180 = uStack_140;
            uStack_17c = uStack_13c;
            if (0xf < uVar20) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar20,0x10,&UNK_1435a9828);
            }
            lVar21 = uVar20 * 0x20;
            uStack_1b8._0_4_ = (undefined4)uStack_178;
            uStack_1b8._4_4_ = (undefined4)((ulonglong)uStack_178 >> 0x20);
            uStack_1b0._0_4_ = (undefined4)uStack_170;
            uStack_1b0._4_4_ = (undefined4)((ulonglong)uStack_170 >> 0x20);
            uStack_1a8._0_4_ = (undefined4)uStack_168;
            uStack_1a8._4_4_ = (undefined4)((ulonglong)uStack_168 >> 0x20);
            uStack_1a0._0_4_ = (undefined4)uStack_160;
            uStack_1a0._4_4_ = (undefined4)((ulonglong)uStack_160 >> 0x20);
            puVar2 = (undefined4 *)(param_2 + 0x10 + lVar21);
            *puVar2 = (undefined4)uStack_1a8;
            puVar2[1] = uStack_1a8._4_4_;
            puVar2[2] = (undefined4)uStack_1a0;
            puVar2[3] = uStack_1a0._4_4_;
            puVar2 = (undefined4 *)(param_2 + lVar21);
            *puVar2 = (undefined4)uStack_1b8;
            puVar2[1] = uStack_1b8._4_4_;
            puVar2[2] = (undefined4)uStack_1b0;
            puVar2[3] = uStack_1b0._4_4_;
            if (uVar20 == 0xf) {
              uStack_1b8 = uVar11;
              uStack_1b0 = uVar15;
              uStack_1a8 = uVar16;
              uStack_1a0 = uVar17;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(0x10,0x10,&UNK_1435a9840);
            }
            lVar21 = lVar21 + param_2;
            *(ulonglong *)(lVar21 + 0x30) = CONCAT44(uStack_144,uStack_148);
            *(ulonglong *)(lVar21 + 0x38) = CONCAT44(uStack_13c,uStack_140);
            *(float *)(lVar21 + 0x20) = fStack_158;
            *(float *)(lVar21 + 0x24) = fStack_154;
            *(float *)(lVar21 + 0x28) = fStack_150;
            *(float *)(lVar21 + 0x2c) = fStack_14c;
            uVar20 = uVar20 + 2;
          }
          lVar24 = lVar24 + 1;
          puVar25 = puVar25 + 4;
          if (lVar19 == lVar24) goto LAB_14287bd2d;
        }
        fVar31 = fVar32 - (float)uStack_218;
        fVar33 = fVar34 - (float)((ulonglong)uStack_218 >> 0x20);
        fVar35 = fVar33 * fVar33 + fVar31 * fVar31;
        fVar26 = 0.0;
        fVar30 = 0.0;
        fVar27 = 0.0;
        if ((fVar35 != 0.0) || (NAN(fVar35))) {
          fVar27 = fVar33 * (fVar4 / SQRT(fVar35));
          fVar30 = (float)((uint)fVar31 ^ uVar14) * (fVar4 / SQRT(fVar35));
        }
        fVar32 = fVar28 - fVar32;
        fVar34 = fVar29 - fVar34;
        fVar33 = fVar34 * fVar34 + fVar32 * fVar32;
        fVar31 = 0.0;
        if ((fVar33 != 0.0) || (NAN(fVar33))) {
          fVar31 = fVar34 * (fVar4 / SQRT(fVar33));
          fVar26 = (float)((uint)fVar32 ^ uVar14) * (fVar4 / SQRT(fVar33));
        }
        if (fVar30 * fVar26 + fVar27 * fVar31 <= fVar5) goto LAB_14287b8a0;
        fVar28 = (float)uStack_200 - fVar28;
        fVar29 = (float)((ulonglong)uStack_200 >> 0x20) - fVar29;
        fVar27 = fVar29 * fVar29 + fVar28 * fVar28;
        fVar34 = 0.0;
        fVar32 = 0.0;
        if ((fVar27 != 0.0) || (NAN(fVar27))) {
          fVar32 = fVar29 * (fVar4 / SQRT(fVar27));
          fVar34 = (float)((uint)fVar28 ^ uVar14) * (fVar4 / SQRT(fVar27));
        }
        if (fVar26 * fVar34 + fVar31 * fVar32 <= fVar5) goto LAB_14287b8a0;
        if (0xf < uVar20) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar20,0x10,&UNK_1435a97b0);
        }
        uVar7 = *(undefined4 *)puVar25;
        uVar8 = *(undefined4 *)((longlong)puVar25 + 4);
        uVar9 = *(undefined4 *)(puVar25 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar25 + 0xc);
        uVar11 = puVar25[3];
        puVar3 = (undefined8 *)(param_2 + 0x10 + uVar20 * 0x20);
        *puVar3 = puVar25[2];
        puVar3[1] = uVar11;
        puVar2 = (undefined4 *)(param_2 + uVar20 * 0x20);
        *puVar2 = uVar7;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        uVar20 = uVar20 + 1;
        lVar24 = lVar24 + 1;
        puVar25 = puVar25 + 4;
      } while (lVar19 != lVar24);
    }
LAB_14287bd2d:
    *(ulonglong *)(param_2 + 0x210) = uVar20;
    *(undefined8 *)(param_2 + 0x218) = 1;
    pdb_141c70590(puStack_220,param_2,param_3);
  }
  else {
    fVar6 = param_4[1];
    fVar28 = param_4[7];
    if ((_DAT_142e37848 <= (float)((uint)(fVar4 - fVar5) & _DAT_142e377e0)) ||
       (_DAT_142e37848 <= (float)((uint)(fVar6 - fVar28) & _DAT_142e377e0))) {
      *param_1 = 0;
      param_1[1] = param_3;
      *(float *)(param_1 + 4) = fVar4;
      *(float *)(param_1 + 8) = fVar6;
      *(float *)(param_1 + 0xc) = fVar5;
      *(float *)(param_1 + 0x10) = fVar28;
    }
    else {
      *param_1 = 3;
    }
  }
  return;
}

