// VA 0x142b4dbb0, PDB extent 455 bytes
// system_critters::boids::Boid::random_vel_change
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/boids.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::boids::Boid::random_vel_change
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/boids.rs
   Extent: 455 */

void pdb_142b4dbb0(longlong param_1,longlong param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  
  fVar1 = *(float *)(param_2 + 0x30) - param_3;
  *(float *)(param_2 + 0x30) = fVar1;
  if (fVar1 <= 0.0) {
    uVar2 = pdb_140e02880(param_4);
    uVar3 = pdb_140e02880(param_4);
    pdb_140de8ea0(&uStack_68,CONCAT44(uVar3,uVar2),_DAT_14367d9cc);
    *(float *)(param_2 + 0x2c) = fStack_60;
    *(undefined8 *)(param_2 + 0x24) = uStack_68;
    uVar6 = pdb_140e02880(param_4);
    uVar2 = pdb_140de9fd0(_DAT_142e3b1d8,_DAT_142e37988,uVar6);
    *(undefined4 *)(param_2 + 0x30) = uVar2;
  }
  uStack_40 = *(undefined4 *)(param_2 + 0x20);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  fStack_60 = *(float *)(param_2 + 0x2c);
  uStack_68 = *(undefined8 *)(param_2 + 0x24);
  pdb_140de9a40(&uStack_58,&uStack_48,&uStack_68,param_3,0x40800000);
  *(undefined4 *)(param_2 + 0x20) = uStack_50;
  *(undefined8 *)(param_2 + 0x18) = uStack_58;
  uStack_50 = *(undefined4 *)(param_2 + 0x20);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  uStack_40 = 0x3f800000;
  uStack_48 = 0;
  pdb_140f335d0(&uStack_68,&uStack_48,&uStack_58);
  fVar1 = *(float *)(param_1 + 0xc);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x10);
  fVar7 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fVar8 = fStack_60 * fStack_60;
  fVar9 = fStack_5c * fStack_5c;
  fVar10 = uStack_68._4_4_ * uStack_68._4_4_ + (float)uStack_68 * (float)uStack_68;
  fVar5 = fStack_60 * fVar7 + uStack_68._4_4_ * fVar4 + (float)uStack_68 * fVar1;
  fVar5 = fVar5 + fVar5;
  fStack_5c = fStack_5c + fStack_5c;
  *(ulonglong *)(param_1 + 0xc) =
       CONCAT44(fStack_5c * (fStack_60 * fVar1 - fVar7 * (float)uStack_68) +
                fVar5 * uStack_68._4_4_ + (fVar9 - (fVar10 + fVar8)) * fVar4,
                fStack_5c * (uStack_68._4_4_ * fVar7 - fVar4 * fStack_60) +
                fVar5 * (float)uStack_68 + (fVar9 - (fVar10 + fVar8)) * fVar1);
  *(float *)(param_1 + 0x14) =
       fStack_5c * ((float)uStack_68 * fVar4 - fVar1 * uStack_68._4_4_) +
       fVar5 * fStack_60 + (fVar9 - (fVar10 + fVar8)) * fVar7;
  return;
}

