// VA 0x140decda0, PDB extent 138 bytes
// utils::natural_cubic::Spline3D::tangent_at_t
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::natural_cubic::Spline3D::tangent_at_t
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 138 */

undefined8 * pdb_140decda0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float extraout_XMM0_Da;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar3 = pdb_140deced0(param_2,param_3);
  fVar4 = *(float *)(lVar3 + 0x38) * _DAT_142e3788c;
  fVar1 = *(float *)(lVar3 + 0x34);
  fVar2 = *(float *)(lVar3 + 0x30);
  fVar6 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x1c) >> 0x20);
  fVar5 = (float)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20);
  *param_1 = CONCAT44((float)*(undefined8 *)(lVar3 + 0x1c) +
                      (fVar6 + fVar6 + *(float *)(lVar3 + 0x24) * _UNK_1430067c4 * extraout_XMM0_Da)
                      * extraout_XMM0_Da,
                      (float)*(undefined8 *)(lVar3 + 8) +
                      (fVar5 + fVar5 + *(float *)(lVar3 + 0x10) * _DAT_1430067c0 * extraout_XMM0_Da)
                      * extraout_XMM0_Da);
  *(float *)(param_1 + 1) = (fVar1 + fVar1 + fVar4 * extraout_XMM0_Da) * extraout_XMM0_Da + fVar2;
  return param_1;
}

