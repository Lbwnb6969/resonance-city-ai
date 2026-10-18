// VA 0x142b4df50, PDB extent 410 bytes
// system_critters::wren_boids::sim_wren_boids::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren_boids.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::wren_boids::sim_wren_boids::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/wren_boids.rs
   Extent: 410 */

bool pdb_142b4df50(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [52];
  int iStack_7c;
  
  uVar2 = *param_2;
  fVar4 = param_3 * (float)*(undefined8 *)((longlong)param_2 + 0xc) + (float)uVar2;
  fVar5 = param_3 * (float)((ulonglong)*(undefined8 *)((longlong)param_2 + 0xc) >> 0x20) +
          (float)((ulonglong)uVar2 >> 0x20);
  bVar3 = true;
  if ((fVar5 <= _DAT_142e37844) && (0.0 <= fVar5)) {
    fVar1 = *(float *)(param_2 + 1);
    fVar6 = *(float *)((longlong)param_2 + 0x14) * param_3 + fVar1;
    if ((*(char *)*param_1 != '\0') && (_DAT_143601050 < SQRT(fVar6 * fVar6 + fVar4 * fVar4))) {
      return true;
    }
    if (DAT_143cb2bf8 != '\0') {
      pdb_14007ee60();
      pbStack_c0 = pub_1406abab0(0x18,4);
      if (pbStack_c0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x18);
      }
      *(undefined8 *)pbStack_c0 = uVar2;
      *(float *)(pbStack_c0 + 8) = fVar1;
      *(ulonglong *)(pbStack_c0 + 0xc) = CONCAT44(fVar5,fVar4);
      *(float *)(pbStack_c0 + 0x14) = fVar6;
      uStack_c8 = 2;
      uStack_b8 = 2;
      pdb_140a89130(auStack_b0,&uStack_c8);
      pdb_140a89170(auStack_b0,*(undefined8 *)param_1[1]);
    }
    pdb_1409ed340(auStack_b0,param_1[2],param_2,param_3,0x30ff);
    bVar3 = iStack_7c != 2;
  }
  return bVar3;
}

