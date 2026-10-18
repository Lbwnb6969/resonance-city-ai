// VA 0x140dece30, PDB extent 148 bytes
// utils::natural_cubic::Spline3D::position_at_t
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::natural_cubic::Spline3D::position_at_t
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 148 */

undefined8 * pdb_140dece30(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float extraout_XMM0_Da;
  
  lVar5 = pdb_140deced0(param_2,param_3);
  fVar1 = *(float *)(lVar5 + 0x38);
  fVar2 = *(float *)(lVar5 + 0x34);
  fVar3 = *(float *)(lVar5 + 0x30);
  fVar4 = *(float *)(lVar5 + 0x2c);
  *param_1 = CONCAT44((float)*(undefined8 *)(lVar5 + 0x18) +
                      ((float)((ulonglong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) +
                      ((float)*(undefined8 *)(lVar5 + 0x20) +
                      (float)((ulonglong)*(undefined8 *)(lVar5 + 0x20) >> 0x20) * extraout_XMM0_Da)
                      * extraout_XMM0_Da) * extraout_XMM0_Da,
                      (float)*(undefined8 *)(lVar5 + 4) +
                      ((float)((ulonglong)*(undefined8 *)(lVar5 + 4) >> 0x20) +
                      ((float)*(undefined8 *)(lVar5 + 0xc) +
                      (float)((ulonglong)*(undefined8 *)(lVar5 + 0xc) >> 0x20) * extraout_XMM0_Da) *
                      extraout_XMM0_Da) * extraout_XMM0_Da);
  *(float *)(param_1 + 1) =
       ((fVar1 * extraout_XMM0_Da + fVar2) * extraout_XMM0_Da + fVar3) * extraout_XMM0_Da + fVar4;
  return param_1;
}

