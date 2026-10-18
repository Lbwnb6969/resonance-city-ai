// VA 0x140a34510, PDB extent 508 bytes
// country_core::systems::camera_rig::MainCamera::load_parameters
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::camera_rig::MainCamera::load_parameters
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig.rs
   Extent: 508 */

void pdb_140a34510(longlong param_1,undefined8 *param_2,char param_3)

{
  float fVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  *(undefined1 *)(param_1 + 0x4d0) = 0;
  fVar1 = *(float *)(param_2 + 2);
  fVar10 = (float)*param_2;
  fVar11 = (float)((ulonglong)*param_2 >> 0x20);
  pdb_140f33a40(&fStack_68,2,CONCAT44(fVar11,fVar10 * _DAT_142e37aa0),
                CONCAT44(fVar11,fVar11 * _DAT_142e37aa0),0);
  fVar5 = *(float *)((longlong)param_2 + 0x14) * _DAT_142e378e0;
  fVar6 = *(float *)((longlong)param_2 + 0x14) * _UNK_142e378e4;
  fVar8 = fStack_60 * fStack_60;
  fVar9 = fStack_5c * fStack_5c;
  fVar13 = fStack_64 * fStack_64 + fStack_68 * fStack_68;
  fVar7 = fStack_60 * fVar6 + fStack_64 * fVar5 + fStack_68 * fVar5;
  fVar7 = fVar7 + fVar7;
  fStack_5c = fStack_5c + fStack_5c;
  *(ulonglong *)(param_1 + 0x144) =
       CONCAT44(((float)((ulonglong)param_2[1] >> 0x20) +
                fStack_5c * (fStack_60 * fVar5 - fVar6 * fStack_68) +
                fVar7 * fStack_64 + (fVar9 - (fVar13 + fVar8)) * fVar5) -
                (float)((ulonglong)*(undefined8 *)(param_1 + 0x138) >> 0x20),
                ((float)param_2[1] +
                fStack_5c * (fStack_64 * fVar6 - fVar5 * fStack_60) +
                fVar7 * fStack_68 + (fVar9 - (fVar13 + fVar8)) * fVar5) -
                (float)*(undefined8 *)(param_1 + 0x138));
  *(float *)(param_1 + 0x14c) =
       (fStack_5c * (fStack_68 * fVar5 - fVar5 * fStack_64) +
        fVar7 * fStack_60 + (fVar9 - (fVar13 + fVar8)) * fVar6 + fVar1) -
       *(float *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x118) = 0;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x1c,4);
  if (pbVar4 != (byte *)0x0) {
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x150);
    uVar12 = (undefined4)_DAT_142e37b50;
    uVar3 = (ulonglong)_DAT_142e37b50 >> 0x20;
    *(float *)(pbVar4 + 8) = fVar11 - (float)uVar2;
    *(float *)(pbVar4 + 0xc) = fVar10 - (float)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)(pbVar4 + 0x10) = uVar12;
    *(int *)(pbVar4 + 0x14) = (int)uVar3;
    pbVar4[0x18] = 0;
    pbVar4[0x19] = 0;
    pbVar4[0x1a] = 0x80;
    pbVar4[0x1b] = 0xbf;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      pub_1406abac0(*(byte **)(param_1 + 0x108),*(longlong *)(param_1 + 0x100) * 0x1c,4);
    }
    *(undefined8 *)(param_1 + 0x100) = 1;
    *(byte **)(param_1 + 0x108) = pbVar4;
    *(undefined8 *)(param_1 + 0x110) = 1;
    if (param_3 == '\0') {
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_2 + 3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x1c);
}

