// VA 0x140c99db0, PDB extent 3331 bytes
// country_core::systems::wooden_stair_support::plan_braces_between_posts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wooden_stair_support.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wooden_stair_support::plan_braces_between_posts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wooden_stair_support.rs
   Extent: 3331 */

undefined8 *
pdb_140c99db0(undefined8 *param_1,float *param_2,float *param_3,undefined8 *param_4,uint param_5,
             float param_6)

{
  float fVar1;
  bool bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_170;
  float fStack_168;
  float fStack_160;
  float fStack_15c;
  uint *puStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined8 uStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  fVar6 = _DAT_143009d64;
  uStack_f0 = 0xfffffffffffffffe;
  fVar5 = *param_2;
  fVar8 = param_2[1];
  fVar20 = param_2[2];
  auVar14 = ZEXT416((uint)fVar20);
  fVar1 = *param_3;
  fVar21 = param_3[1];
  fVar9 = param_3[2];
  fVar7 = fVar8 - fVar21;
  fVar13 = (fVar20 - fVar9) * (fVar20 - fVar9);
  fVar7 = fVar13 + fVar7 * fVar7 + (fVar5 - fVar1) * (fVar5 - fVar1);
  fVar19 = SQRT(fVar7);
  if (fVar19 < _DAT_143009d64) {
LAB_140c99e8d:
    *param_1 = 0;
    param_1[1] = 8;
    param_1[2] = 0;
    return param_1;
  }
  if ((param_5 & 1) != 0) {
    fVar6 = *(float *)(param_4 + 1);
    fVar13 = param_2[3] + _DAT_143077144;
    fVar11 = (float)((ulonglong)*param_4 >> 0x20);
    fVar18 = (float)*param_4;
    fVar12 = SQRT((fVar18 - fVar5) * (fVar18 - fVar5) + (fVar6 - fVar20) * (fVar6 - fVar20)) *
             _DAT_142e3783c;
    fVar15 = fVar8 - fVar12;
    puStack_158 = (uint *)CONCAT44(fVar11,fVar11);
    uStack_150 = 0;
    fVar12 = fVar11 - fVar12;
    fVar7 = fVar12;
    if (fVar15 <= fVar12) {
      fVar7 = fVar15;
    }
    fVar12 = (float)(~-(uint)NAN(fVar15) & (uint)fVar7 | -(uint)NAN(fVar15) & (uint)fVar12);
    fVar7 = fVar13;
    if (fVar13 <= fVar12) {
      fVar7 = fVar12;
    }
    uStack_110._0_4_ = fVar5;
    uStack_110._4_4_ = fVar20;
    pdb_140df4540(&uStack_170,&uStack_110,
                  -(uint)NAN(fVar12) & (uint)fVar13 | ~-(uint)NAN(fVar12) & (uint)fVar7,param_4,
                  auVar14);
    fVar7 = _DAT_142e36f28;
    fVar15 = (float)uStack_170;
    fVar17 = (float)((ulonglong)uStack_170 >> 0x20);
    fVar13 = fVar18 - fVar15;
    fVar12 = fVar11 - fVar17;
    if (_DAT_142e36f24 <=
        (fVar6 - fStack_168) * (fVar6 - fStack_168) + fVar12 * fVar12 + fVar13 * fVar13) {
      fStack_160 = fStack_168;
      auVar22._0_4_ = fVar1 - fVar5;
      auVar22._4_4_ = fVar9 - fVar20;
      auVar22._8_8_ = 0;
      auVar16._4_4_ = fVar19;
      auVar16._0_4_ = fVar19;
      auVar16._8_8_ = 0;
      divps(auVar22,auVar16);
      fStack_15c = fVar8;
      fVar8 = (float)pub_142e32940();
      if (_DAT_143077148 < fVar8) {
        pdb_14007ee60();
        pbStack_130 = pub_1406abab0(0x20,8);
        if (pbStack_130 != (byte *)0x0) {
          *(float *)(pbStack_130 + 0xc) = fStack_168;
          *(undefined8 *)(pbStack_130 + 4) = uStack_170;
          *(undefined8 *)(pbStack_130 + 0x10) = *param_4;
          *(undefined4 *)(pbStack_130 + 0x18) = *(undefined4 *)(param_4 + 1);
          pbStack_130[0] = 1;
          pbStack_130[1] = 0;
          pbStack_130[2] = 0;
          pbStack_130[3] = 0;
          pbStack_130[0x1c] = 0x7b;
          pbStack_130[0x1d] = 0x14;
          pbStack_130[0x1e] = 0x2e;
          pbStack_130[0x1f] = 0x3e;
          uStack_138 = 1;
          uStack_128 = 1;
          uStack_110._4_4_ = auVar14._0_4_;
          if (((_DAT_143009d64 < fVar12) && (_DAT_14307714c <= fVar8)) &&
             (puStack_158._0_4_ <= fStack_15c + param_6)) {
            fVar20 = puStack_158._0_4_ + _DAT_142f60fec;
            fVar8 = fVar17;
            if (fVar17 <= fVar20) {
              fVar8 = fVar20;
            }
            uStack_110._0_4_ = fVar5;
            pdb_140df4540(&fStack_120,&uStack_110);
            fVar12 = ((float)(~-(uint)NAN(fVar20) & (uint)fVar8 | -(uint)NAN(fVar20) & (uint)fVar17)
                     - fVar17) / fVar12;
            fVar7 = fVar7 - fVar12;
            fStack_104 = fVar6 * fVar12 + fStack_160 * fVar7;
            uStack_110._4_4_ = fVar18 * fVar12 + fVar15 * fVar7;
            fStack_108 = fVar11 * fVar12 + fVar17 * fVar7;
            if (_DAT_142e36f24 <
                (fStack_104 - fStack_118) * (fStack_104 - fStack_118) +
                (fStack_108 - fStack_11c) * (fStack_108 - fStack_11c) +
                (uStack_110._4_4_ - fStack_120) * (uStack_110._4_4_ - fStack_120)) {
              uStack_f8 = (code *)CONCAT44(0x3df5c28f,fStack_118);
              uStack_110._0_4_ = 1.4013e-45;
              pdb_140c9ce60(&uStack_138,&uStack_110);
            }
          }
          param_1[2] = uStack_128;
          *param_1 = uStack_138;
          param_1[1] = pbStack_130;
          return param_1;
        }
LAB_140c9a7d0:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      fVar19 = SQRT((fVar6 - fVar9) * (fVar6 - fVar9) + (fVar18 - fVar1) * (fVar18 - fVar1)) *
               _DAT_142e3783c;
      fVar21 = fVar21 - fVar19;
      fVar19 = puStack_158._0_4_ - fVar19;
      fVar13 = param_3[3] + _DAT_143077144;
      fVar8 = fVar19;
      if (fVar21 <= fVar19) {
        fVar8 = fVar21;
      }
      fVar21 = (float)(~-(uint)NAN(fVar21) & (uint)fVar8 | -(uint)NAN(fVar21) & (uint)fVar19);
      fVar8 = fVar13;
      if (fVar13 <= fVar21) {
        fVar8 = fVar21;
      }
      uStack_110._0_4_ = fVar1;
      uStack_110._4_4_ = fVar9;
      pdb_140df4540(&fStack_148,&uStack_110,
                    -(uint)NAN(fVar21) & (uint)fVar13 | ~-(uint)NAN(fVar21) & (uint)fVar8);
      fVar21 = fStack_140;
      fVar1 = fStack_144;
      fVar8 = fStack_148;
      fVar19 = fVar6 - fStack_140;
      fVar9 = fVar18 - fStack_148;
      fVar11 = fVar11 - fStack_144;
      fVar13 = (float)pub_142e32940();
      if ((_DAT_143077148 < fVar13) &&
         (_DAT_142e36f24 <= fVar19 * fVar19 + fVar11 * fVar11 + fVar9 * fVar9)) {
        if ((_DAT_143009d64 <= (float)(_DAT_142e377e0 & (uint)(puStack_158._0_4_ - fStack_15c))) &&
           ((fVar9 = (fVar1 - fStack_15c) / (puStack_158._0_4_ - fStack_15c), 0.0 <= fVar9 &&
            (fVar9 <= fVar7)))) {
          uStack_138 = CONCAT44(fVar9 * fVar6 + fVar20 * (fVar7 - fVar9),
                                fVar9 * fVar18 + fVar5 * (fVar7 - fVar9));
          pdb_140df4540((longlong)&uStack_110 + 4,&uStack_138);
          uVar4 = CONCAT44(fStack_108,uStack_110._4_4_);
          fStack_108 = fStack_108 - fVar1;
          if (_DAT_142e36f24 <=
              (fStack_104 - fVar21) * (fStack_104 - fVar21) +
              fStack_108 * fStack_108 + (uStack_110._4_4_ - fVar8) * (uStack_110._4_4_ - fVar8)) {
            pdb_14007ee60();
            pbVar3 = pub_1406abab0(0x20,8);
            if (pbVar3 != (byte *)0x0) {
              *(float *)(pbVar3 + 0xc) = fStack_140;
              *(ulonglong *)(pbVar3 + 4) = CONCAT44(fStack_144,fStack_148);
              pbVar3[0] = 1;
              pbVar3[1] = 0;
              pbVar3[2] = 0;
              pbVar3[3] = 0;
              *(undefined8 *)(pbVar3 + 0x10) = uVar4;
              *(float *)(pbVar3 + 0x18) = fStack_104;
              pbVar3[0x1c] = 0x8f;
              pbVar3[0x1d] = 0xc2;
              pbVar3[0x1e] = 0xf5;
              pbVar3[0x1f] = 0x3d;
              *param_1 = 1;
              param_1[1] = pbVar3;
              param_1[2] = 1;
              return param_1;
            }
            goto LAB_140c9a7d0;
          }
        }
      }
    }
    goto LAB_140c99e8d;
  }
  pdb_140c997b0(&uStack_110,CONCAT44(fVar13,fVar7),param_4);
  fVar9 = fStack_104;
  fVar21 = fStack_108;
  fVar1 = uStack_110._4_4_;
  if ((float)uStack_110 != 2.8026e-45) {
    if (((uint)(float)uStack_110 & 1) == 0) {
      if (param_2[3] <= _DAT_143009d10 + fStack_108) {
        pdb_14007ee60();
        puStack_158 = (uint *)pub_1406abab0(0x20,8);
        if (puStack_158 == (uint *)0x0) goto LAB_140c9a7d0;
        fStack_120 = fVar1;
        fStack_11c = fVar21;
        fStack_118 = fVar9;
        pbStack_130 = (byte *)CONCAT44(pbStack_130._4_4_,*(undefined4 *)(param_4 + 1));
        uStack_138 = *param_4;
        pdb_141473cd0(&uStack_110,&fStack_120,&uStack_138);
        bVar2 = !SBORROW8(0,CONCAT44(uStack_110._4_4_,(float)uStack_110));
        if (bVar2) {
          uStack_138 = CONCAT44(fStack_104,fStack_108);
          uVar10 = uStack_100._4_4_;
        }
        else {
          uStack_100._0_4_ = *(float *)(param_4 + 1);
          uStack_138 = *param_4;
          uStack_110._0_4_ = fVar21;
          uStack_110._4_4_ = fVar9;
          uVar10 = _DAT_143077140;
        }
        *puStack_158 = (uint)!bVar2;
        puStack_158[1] = (uint)fVar1;
        puStack_158[2] = (uint)(float)uStack_110;
        puStack_158[3] = (uint)uStack_110._4_4_;
        *(undefined8 *)(puStack_158 + 4) = uStack_138;
        puStack_158[6] = (uint)(float)uStack_100;
        goto LAB_140c9a7c1;
      }
    }
    else {
      pdb_140c997b0(&uStack_110,param_3,param_4);
      fVar9 = fStack_104;
      fVar21 = fStack_108;
      fVar1 = uStack_110._4_4_;
      if (((uint)(float)uStack_110 & 1) == 0 && (float)uStack_110 != 2.8026e-45) {
        fVar7 = param_2[3] + _DAT_143077144;
        uVar4 = 0;
        puStack_158 = (uint *)0x8;
        if ((fVar8 < fVar7) ||
           (SQRT((fStack_104 - fVar20) * (fStack_104 - fVar20) +
                 (uStack_110._4_4_ - fVar5) * (uStack_110._4_4_ - fVar5)) < fVar6))
        goto LAB_140c9a203;
        uStack_138 = CONCAT44(fVar20,fVar5);
        if (fVar8 < fVar7) {
          uStack_110 = &fStack_148;
          fStack_108 = 7.7194595;
          fStack_104 = 1.4013e-45;
          uStack_100 = &fStack_120;
          uStack_f8 = pdb_140f705d0;
          fStack_148 = fVar7;
          fStack_120 = fVar8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143077160,&uStack_110,&UNK_143077200);
        }
        pdb_140df4540(&fStack_148,&uStack_138);
        fVar5 = fVar9;
        fVar8 = fVar21;
        fVar20 = fVar1;
        fVar6 = fStack_148;
        fVar7 = fStack_140;
        if (fStack_144 <= fVar21) {
          fVar5 = fStack_140;
          fVar8 = fStack_144;
          fVar20 = fStack_148;
          fVar6 = fVar1;
          fVar7 = fVar9;
        }
        pdb_14007ee60();
        puStack_158 = (uint *)pub_1406abab0(0x20,8);
        if (puStack_158 == (uint *)0x0) goto LAB_140c9a7d0;
        fVar1 = (float)(~-(uint)(fVar21 < fStack_144) & (uint)fVar21 |
                       (uint)fStack_144 & -(uint)(fVar21 < fStack_144));
        uStack_138 = CONCAT44(fVar1,fVar6);
        pbStack_130 = (byte *)CONCAT44(pbStack_130._4_4_,fVar7);
        pdb_141473cd0(&uStack_110,&fStack_120,&uStack_138);
        bVar2 = !SBORROW8(0,CONCAT44(uStack_110._4_4_,(float)uStack_110));
        uVar10 = _DAT_143077140;
        if (bVar2) {
          fVar8 = (float)uStack_110;
          fVar5 = uStack_110._4_4_;
          fVar6 = fStack_108;
          fVar7 = (float)uStack_100;
          uVar10 = uStack_100._4_4_;
          fVar1 = fStack_104;
        }
        *puStack_158 = (uint)!bVar2;
        puStack_158[1] = (uint)fVar20;
        puStack_158[2] = (uint)fVar8;
        puStack_158[3] = (uint)fVar5;
        puStack_158[4] = (uint)fVar6;
        puStack_158[5] = (uint)fVar1;
        puStack_158[6] = (uint)fVar7;
LAB_140c9a7c1:
        puStack_158[7] = uVar10;
        uVar4 = 1;
        goto LAB_140c9a203;
      }
    }
  }
  puStack_158 = (uint *)0x8;
  uVar4 = 0;
LAB_140c9a203:
  *param_1 = uVar4;
  param_1[1] = puStack_158;
  param_1[2] = uVar4;
  return param_1;
}

