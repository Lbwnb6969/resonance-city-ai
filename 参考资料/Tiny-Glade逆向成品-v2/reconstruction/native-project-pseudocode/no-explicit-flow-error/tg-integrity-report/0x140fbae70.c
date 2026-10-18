// VA 0x140fbae70, PDB extent 257 bytes
// tg_integrity_report::controls::impl$3::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_integrity_report::controls::impl$3::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
   Extent: 257 */

undefined8 * pdb_140fbae70(undefined8 *param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lStack_30;
  byte *pbStack_28;
  ulonglong uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uStack_20 = *param_3;
  uVar1 = 2;
  if ((longlong)uStack_20 < 0) {
    uVar1 = uStack_20 ^ 0x8000000000000000;
  }
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      pbStack_28 = (byte *)param_3[1];
      pdb_140fba270(param_2,pbStack_28,param_3[2]);
      *param_1 = 0x800000000000001e;
      if (uStack_20 == 0) {
        return param_1;
      }
      pub_1406abac0(pbStack_28,uStack_20,1);
      return param_1;
    }
    lStack_30 = pdb_140cad450(param_3[1],param_3[2]);
    if (lStack_30 != 0) {
      pdb_1404b38e0(&lStack_30);
      *param_1 = 0x800000000000001e;
      return param_1;
    }
  }
  *param_1 = 0x8000000000000001;
  param_1[1] = 0;
  return param_1;
}

