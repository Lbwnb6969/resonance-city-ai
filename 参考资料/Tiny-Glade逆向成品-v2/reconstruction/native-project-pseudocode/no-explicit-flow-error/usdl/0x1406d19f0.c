// VA 0x1406d19f0, PDB extent 218 bytes
// usdl::keyboard::Keycode::name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/keyboard.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::keyboard::Keycode::name
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/keyboard.rs
   Extent: 218 */

ulonglong * pdb_1406d19f0(ulonglong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  lVar1 = pdb_14100b470(param_2);
  if (lVar1 != 0) {
    lVar2 = pub_142e32b70(lVar1);
    pdb_140f601a0(&uStack_40,lVar1,lVar2 + 1);
    if (!SBORROW8(0,uStack_40)) {
      param_1[2] = uStack_30;
      *param_1 = uStack_40;
      param_1[1] = uStack_38;
      return param_1;
    }
    if ((longlong)uStack_30 < 0) {
      uVar4 = 0;
    }
    else {
      if (uStack_30 == 0) {
        pbVar3 = (byte *)0x1;
LAB_1406d1ab0:
        *param_1 = uStack_30;
        param_1[1] = (ulonglong)pbVar3;
        param_1[2] = uStack_30;
        return param_1;
      }
      pdb_14007ee60();
      uVar4 = 1;
      pbVar3 = pub_1406abab0(uStack_30,1);
      if (pbVar3 != (byte *)0x0) {
        pub_142e32760(pbVar3,uStack_38,uStack_30);
        goto LAB_1406d1ab0;
      }
    }
    pdb_142dc7e2a(uVar4,uStack_30);
  }
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  return param_1;
}

