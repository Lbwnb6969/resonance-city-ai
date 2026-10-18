// VA 0x14091a020, PDB extent 2277 bytes
// country_core::systems::collision::visualize_colliders::visualize_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/visualize_colliders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::visualize_colliders::visualize_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/visualize_colliders.rs
   Extent: 2277 */

void pdb_14091a020(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  longlong lVar13;
  float *pfVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  longlong lVar17;
  byte *pbVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 *puStack_1a8;
  byte *pbStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  longlong lStack_168;
  longlong lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint uStack_134;
  longlong lStack_130;
  undefined4 uStack_128;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lVar13 = pdb_140cd5c50();
  if (lVar13 == 0) {
    lVar13 = pdb_140cd5c10(param_1,param_2);
    if (lVar13 == 0) {
      lVar13 = pdb_140cd5c90(param_1,param_2);
      if (lVar13 == 0) {
        pfVar14 = (float *)pdb_140cd5d10(param_1,param_2);
        if (pfVar14 == (float *)0x0) {
          puVar16 = (undefined4 *)pdb_140cd5cd0(param_1,param_2);
          if (puVar16 == (undefined4 *)0x0) {
            uVar12 = (**(code **)(param_2 + 0x128))(param_1);
            puStack_1a8 = (undefined8 *)CONCAT71(puStack_1a8._1_7_,uVar12);
            uStack_158 = &puStack_1a8;
            uStack_150 = pdb_14091b720;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14301ff5c,&uStack_158,&UNK_14301ffe8);
          }
          uStack_13c = *(undefined4 *)(param_3 + 3);
          fStack_148 = (float)*puVar16;
          uStack_158 = (undefined8 **)CONCAT44(uStack_158._4_4_,2);
          fStack_144 = (float)param_3[2];
          fStack_140 = (float)((ulonglong)param_3[2] >> 0x20);
          uStack_138 = 0x3f800000;
          uStack_134 = uStack_134 & 0xffffff00;
          pdb_140ab07b0(&uStack_158,param_4);
        }
        else {
          uStack_190 = *(undefined4 *)(param_3 + 3);
          uStack_198 = param_3[2];
          puStack_1a8 = (undefined8 *)*param_3;
          pbStack_1a0 = (byte *)param_3[1];
          uStack_18c = 0x3f800000;
          uStack_188 = 0x3f800000;
          uStack_184 = 0x3f800000;
          pdb_140b3d590(&uStack_158,*pfVar14 + *pfVar14,pfVar14[1] + pfVar14[1],
                        pfVar14[2] + pfVar14[2],&puStack_1a8);
          pbVar1 = (byte *)(uStack_150 + CONCAT44(fStack_144,fStack_148) * 0x24);
          uStack_108 = (byte *)uStack_158;
          pbStack_f8 = (byte *)uStack_150;
          for (pbVar18 = (byte *)uStack_150; pbVar18 != pbVar1; pbVar18 = pbVar18 + 0x24) {
            uVar6 = *(undefined4 *)(pbVar18 + 8);
            uVar4 = *(undefined8 *)pbVar18;
            uVar5 = *(undefined8 *)(pbVar18 + 0xc);
            uVar7 = *(undefined4 *)(pbVar18 + 0x14);
            uVar11 = *(undefined8 *)(pbVar18 + 0x18);
            uVar8 = *(undefined4 *)(pbVar18 + 0x20);
            pdb_14007ee60();
            pbVar15 = pub_1406abab0(0x24,4);
            if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(4,0x24);
            }
            *(undefined4 *)(pbVar15 + 8) = uVar6;
            *(undefined8 *)pbVar15 = uVar4;
            *(undefined4 *)(pbVar15 + 0x14) = uVar7;
            *(undefined8 *)(pbVar15 + 0xc) = uVar5;
            *(undefined8 *)(pbVar15 + 0x18) = uVar11;
            *(undefined4 *)(pbVar15 + 0x20) = uVar8;
            uStack_158 = (undefined8 **)0x3;
            fStack_148 = 4.2039e-45;
            fStack_144 = 0.0;
            fStack_140 = 0.0;
            uStack_13c = 0x80000000;
            uStack_128 = 2;
            uStack_118 = 0x3f800000;
            uStack_114 = 1;
            uStack_150 = (code *)pbVar15;
            pdb_140ab2da0(&uStack_158,param_4);
          }
          if (uStack_108 != (byte *)0x0) {
            pub_1406abac0(pbStack_f8,(longlong)uStack_108 * 0x24,4);
          }
        }
      }
      else {
        pdb_140cd6810(&uStack_158,lVar13);
        lStack_168 = (longlong)uStack_158;
        uStack_108 = (byte *)uStack_150;
        lStack_160 = CONCAT44(uStack_13c,fStack_140);
        pbStack_f8 = (byte *)CONCAT44(uStack_134,uStack_138);
        if (lStack_130 != 0) {
          lVar13 = 0;
          do {
            uStack_178 = *(undefined4 *)(pbStack_f8 + lVar13 + 8);
            pbStack_1a0 = uStack_108;
            uStack_190 = 0;
            uStack_18c = 0;
            uStack_188 = 4;
            uStack_184 = 0;
            uStack_180 = *(undefined8 *)(pbStack_f8 + lVar13);
            uStack_174 = *(undefined4 *)(pbStack_f8 + lVar13);
            puStack_1a8 = param_3;
            pdb_141605d00(&uStack_158,&puStack_1a8);
            fStack_140 = 0.0;
            uStack_13c = 0x80000000;
            uStack_128 = 3;
            uStack_118 = 0x3f800000;
            uStack_114 = 1;
            pdb_140ab2da0(&uStack_158,param_4);
            lVar13 = lVar13 + 0xc;
          } while (lStack_130 * 0xc != lVar13);
        }
        if (lStack_160 != 0) {
          pub_1406abac0(pbStack_f8,lStack_160 * 0xc,4);
        }
        if (lStack_168 != 0) {
          pub_1406abac0(uStack_108,lStack_168 * 0xc,4);
        }
      }
    }
    else {
      lVar9 = *(longlong *)(lVar13 + 0xa0);
      if (lVar9 != 0) {
        uVar4 = *(undefined8 *)(lVar13 + 0x80);
        uVar5 = *(undefined8 *)(lVar13 + 0x88);
        lVar13 = *(longlong *)(lVar13 + 0x98);
        lVar17 = 0;
        uStack_108 = (byte *)param_4;
        do {
          uStack_178 = *(undefined4 *)(lVar13 + 8 + lVar17);
          uStack_190 = 0;
          uStack_18c = 0;
          uStack_188 = 4;
          uStack_184 = 0;
          uStack_180 = *(undefined8 *)(lVar13 + lVar17);
          uStack_174 = *(undefined4 *)(lVar13 + lVar17);
          puStack_1a8 = param_3;
          pbStack_1a0 = (byte *)uVar4;
          uStack_198 = uVar5;
          pdb_141605d00(&uStack_158,&puStack_1a8);
          fStack_140 = 0.0;
          uStack_13c = 0x80000000;
          uStack_128 = 0;
          uStack_118 = 0x3f800000;
          uStack_114 = 1;
          pdb_140ab2da0(&uStack_158,uStack_108);
          lVar17 = lVar17 + 0xc;
        } while (lVar9 * 0xc != lVar17);
      }
    }
  }
  else {
    lVar9 = *(longlong *)(lVar13 + 0x10);
    if (lVar9 != 0) {
      lVar13 = *(longlong *)(lVar13 + 8);
      fVar2 = *(float *)((longlong)param_3 + 0xc);
      uVar4 = *param_3;
      fVar25 = (float)uVar4;
      fVar26 = (float)*(undefined8 *)((longlong)param_3 + 4);
      fVar27 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 4) >> 0x20);
      uStack_108 = (byte *)param_3[2];
      uStack_100 = 0;
      fVar3 = *(float *)(param_3 + 3);
      lVar17 = 0;
      do {
        lVar10 = *(longlong *)(lVar13 + 0x28 + lVar17);
        pfVar14 = (float *)(lVar13 + lVar17);
        fVar19 = *pfVar14;
        fVar20 = pfVar14[1];
        fVar21 = pfVar14[2];
        fVar22 = pfVar14[3];
        uStack_158 = (undefined8 **)
                     CONCAT44(fVar19 * fVar27 + (fVar20 * fVar2 - fVar21 * fVar25) + fVar22 * fVar26
                              ,(fVar19 * fVar2 + fVar22 * fVar25 + fVar21 * fVar26) -
                               fVar20 * fVar27);
        uStack_150 = (code *)CONCAT44(((fVar22 * fVar2 - fVar19 * fVar25) - fVar20 * fVar26) -
                                      fVar21 * fVar27,
                                      fVar22 * fVar27 +
                                      ((fVar20 * fVar25 + fVar21 * fVar2) - fVar19 * fVar26));
        uVar5 = *(undefined8 *)(lVar13 + 0x10 + lVar17);
        fVar21 = (float)uVar5;
        fVar22 = (float)((ulonglong)uVar5 >> 0x20);
        uVar5 = *(undefined8 *)(lVar13 + 0x14 + lVar17);
        fVar23 = (float)uVar5;
        fVar24 = (float)((ulonglong)uVar5 >> 0x20);
        fVar19 = fVar24 * fVar26 - fVar27 * fVar23;
        fVar20 = fVar21 * fVar27 - fVar25 * fVar24;
        fVar23 = fVar23 * fVar25 - fVar26 * fVar21;
        fVar24 = fVar24 * (float)((ulonglong)uVar4 >> 0x20) - fVar27 * fVar22;
        fVar19 = fVar19 + fVar19;
        fVar20 = fVar20 + fVar20;
        fVar23 = fVar23 + fVar23;
        fStack_148 = fVar19 * fVar2 + (fVar26 * fVar23 - fVar20 * fVar27) + fVar21 +
                     (float)uStack_108;
        fStack_144 = fVar20 * fVar2 + (fVar27 * (fVar24 + fVar24) - fVar23 * fVar25) + fVar22 +
                     uStack_108._4_4_;
        fStack_140 = (fVar20 * fVar25 - fVar26 * fVar19) + fVar2 * fVar23 +
                     *(float *)(lVar13 + 0x18 + lVar17) + fVar3;
        pdb_14091a020((*(longlong *)(lVar10 + 0x10) - 1U & 0xfffffffffffffff0) +
                      *(longlong *)(lVar13 + 0x20 + lVar17) + 0x10,lVar10,&uStack_158,param_4);
        lVar17 = lVar17 + 0x30;
      } while (lVar9 * 0x30 != lVar17);
    }
  }
  return;
}

