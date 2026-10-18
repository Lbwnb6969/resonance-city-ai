// VA 0x140c4b3e0, PDB extent 1312 bytes
// country_core::systems::ui_wall_transform_gizmos::moving_circle_polygon_interval
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_wall_transform_gizmos::moving_circle_polygon_interval
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_wall_transform_gizmos.rs
   Extent: 1312 */

undefined4 *
pdb_140c4b3e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7,longlong param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong lStack_140;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined4 *puStack_d0;
  undefined4 *puStack_c8;
  undefined1 *puStack_c0;
  
  uStack_124 = param_5;
  puStack_118 = param_7 + param_8;
  uStack_e8 = 0;
  uStack_e0 = 0;
  puStack_120 = param_7;
  puStack_110 = param_7;
  puStack_100 = param_7;
  lStack_f0 = 1;
  lStack_d8 = param_8;
  puStack_d0 = &uStack_130;
  puStack_c8 = &uStack_128;
  puStack_c0 = (undefined1 *)&param_6;
  uVar3 = 0;
  if (param_8 != 0) {
    uStack_130 = param_2;
    uStack_12c = param_3;
    uStack_128 = param_4;
    puStack_108 = puStack_118;
    puStack_f8 = puStack_118;
    do {
      if (puStack_120 == puStack_118) goto LAB_140c4b89e;
      puStack_120 = puStack_120 + 1;
      if (lStack_f0 == 0) {
        if (puStack_100 == puStack_f8) {
          puStack_f8 = puStack_108;
          if (puStack_110 == puStack_108) goto LAB_140c4b89e;
          uVar2 = *puStack_110;
          puStack_100 = puStack_110;
        }
        else {
          uVar2 = *puStack_100;
          uStack_188._0_4_ = 1;
        }
        puStack_100 = puStack_100 + 1;
        uStack_188._4_4_ = (float)uVar2;
        fStack_180 = (float)((ulonglong)uVar2 >> 0x20);
      }
      else {
        lStack_f0 = 0;
        pdb_140c51880(&uStack_188,&puStack_110);
        if ((char)uStack_188 == '\0') goto LAB_140c4b89e;
      }
      lStack_d8 = lStack_d8 + -1;
      bVar5 = lStack_d8 == 0;
      uVar1 = *puStack_d0;
      pdb_140c4b900(&uStack_188,uVar1);
      fVar7 = fStack_180;
      if (bVar5) {
        if ((char)uStack_188 == '\0') goto LAB_140c4b89e;
        break;
      }
    } while ((char)uStack_188 == '\0');
    uStack_148 = uStack_e0;
    lStack_140 = lStack_d8;
    lStack_158 = lStack_f0;
    uStack_150 = uStack_e8;
    puStack_168 = puStack_100;
    puStack_160 = puStack_f8;
    puStack_178 = puStack_110;
    puStack_170 = puStack_108;
    fStack_180 = SUB84(puStack_118,0);
    uStack_17c = (undefined4)((ulonglong)puStack_118 >> 0x20);
    fVar8 = uStack_188._4_4_;
    if (lStack_d8 != 0) {
      uStack_188 = puStack_120;
      do {
        if (uStack_188 == (undefined8 *)CONCAT44(uStack_17c,fStack_180)) break;
        uStack_188 = uStack_188 + 1;
        if (lStack_158 == 0) {
          if (puStack_168 == puStack_160) {
            puStack_160 = puStack_170;
            if (puStack_178 == puStack_170) break;
            uStack_190 = *puStack_178;
            puStack_168 = puStack_178;
          }
          else {
            uStack_190 = *puStack_168;
            iStack_194 = 1;
          }
          puStack_168 = puStack_168 + 1;
        }
        else {
          lStack_158 = 0;
          pdb_140c51880(&iStack_194,&puStack_178);
          if ((char)iStack_194 == '\0') break;
        }
        lVar4 = lStack_140 + -1;
        lStack_140 = lVar4;
        pdb_140c4b900(&iStack_194,uVar1);
        if (iStack_194 == 1) {
          fVar6 = (float)uStack_190;
          if (fVar8 <= (float)uStack_190) {
            fVar6 = fVar8;
          }
          fVar8 = (float)(~-(uint)NAN(fVar8) & (uint)fVar6 |
                         -(uint)NAN(fVar8) & (uint)(float)uStack_190);
          fVar6 = uStack_190._4_4_;
          if (uStack_190._4_4_ <= fVar7) {
            fVar6 = fVar7;
          }
          fVar7 = (float)(~-(uint)NAN(fVar7) & (uint)fVar6 |
                         -(uint)NAN(fVar7) & (uint)uStack_190._4_4_);
        }
      } while (lVar4 != 0);
    }
    param_1[1] = fVar8;
    param_1[2] = fVar7;
    uVar3 = 1;
  }
LAB_140c4b89e:
  *param_1 = uVar3;
  return param_1;
}

