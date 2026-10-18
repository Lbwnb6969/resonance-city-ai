// VA 0x140a34710, PDB extent 535 bytes
// country_core::systems::camera_rig::MainCamera::init_walk_camera
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::MainCamera::init_walk_camera
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 535 */

void pdb_140a34710(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_98;
  float fStack_90;
  undefined8 uStack_88;
  float fStack_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_68;
  float fStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_38;
  float fStack_30;
  
  uStack_98 = 0x401b0bd8c1f18ac0;
  fStack_90 = 15.641989;
  uStack_50 = (undefined4)_DAT_14303a8d0;
  fStack_4c = (float)((ulonglong)_DAT_14303a8d0 >> 0x20);
  uVar5 = pdb_1419c1ac0(param_3,_DAT_14303a8e0,_DAT_14303a8e4);
  pdb_140df4540(&uStack_98,&uStack_50,uVar5);
  fVar6 = (float)((ulonglong)uStack_98 >> 0x20);
  uStack_88._0_4_ = (float)uStack_98 + _DAT_14303a8f0;
  uStack_88._4_4_ = fVar6 + _UNK_14303a8f4;
  fStack_80 = fStack_90 + _UNK_14303a8f8;
  fStack_7c = _DAT_142e377f0 + _UNK_14303a8fc;
  uStack_78 = _DAT_142fa5c30;
  pdb_1409f9030(&uStack_50,param_2,&uStack_88,0);
  if ((char)uStack_50 != '\x11') {
    fStack_90 = fStack_30;
    uStack_98 = uStack_38;
    uVar1 = uStack_98;
    uStack_98._4_4_ = (float)((ulonglong)uStack_38 >> 0x20);
    fVar6 = uStack_98._4_4_;
    uStack_98 = uVar1;
  }
  fVar7 = fVar6 + _DAT_142f6e3b0;
  if (fVar6 + _DAT_142f6e3b0 <= _DAT_142e3798c) {
    fVar7 = _DAT_142e3798c;
  }
  uStack_98 = CONCAT44(fVar7,(undefined4)uStack_98);
  uStack_58 = _DAT_14303a900;
  pdb_140df4520(&uStack_88,&uStack_58);
  fVar6 = _DAT_142e36f28 /
          SQRT(fStack_80 * fStack_80 +
               uStack_88._4_4_ * uStack_88._4_4_ + (float)uStack_88 * (float)uStack_88);
  bVar3 = (int)ABS(fVar6) - 0x800000U < 0x7f000000;
  bVar4 = (int)fVar6 - 1U < 0x7fffff;
  if (bVar4 || bVar3 && -1 < (int)fVar6) {
    fStack_4c = (float)uStack_88 * fVar6;
    fStack_48 = uStack_88._4_4_ * fVar6;
    fStack_44 = fStack_80 * fVar6;
  }
  uStack_88 = _DAT_142e37b50;
  fStack_80 = -1.0;
  pfVar2 = (float *)&uStack_88;
  if (bVar4 || bVar3 && -1 < (int)fVar6) {
    pfVar2 = &fStack_4c;
  }
  uStack_68 = *(undefined8 *)pfVar2;
  fStack_60 = pfVar2[2];
  pdb_140ab7ca0(param_1 + 0x2f0,&uStack_98,&uStack_68);
  return;
}

