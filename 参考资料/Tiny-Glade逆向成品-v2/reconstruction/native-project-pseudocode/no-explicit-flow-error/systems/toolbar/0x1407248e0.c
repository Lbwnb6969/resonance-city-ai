// VA 0x1407248e0, PDB extent 170 bytes
// toolbar::mei::widgets::tweaker::impl$6::format
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::tweaker::impl$6::format
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 170 */

ulonglong * pdb_1407248e0(ulonglong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong arg0;
  undefined8 uVar3;
  
  if (*(char *)*param_2 == '\0') {
    arg0 = 10;
    uVar1 = pdb_140dc6290(&UNK_142fa5be0);
    if ((longlong)arg0 < 0) goto LAB_14072495d;
LAB_14072490f:
    if (arg0 != 0) {
      pdb_14007ee60();
      uVar3 = 1;
      pbVar2 = pub_1406abab0(arg0,1);
      if (pbVar2 != (byte *)0x0) {
        pub_142e32760(pbVar2,uVar1,arg0);
        goto LAB_140724970;
      }
      goto LAB_140724960;
    }
  }
  else {
    arg0 = 0xb;
    uVar1 = pdb_140dc6290(&UNK_142fa5bea);
    if (-1 < (longlong)arg0) goto LAB_14072490f;
LAB_14072495d:
    uVar3 = 0;
LAB_140724960:
    pdb_142dc7e2a(uVar3,arg0);
  }
  pbVar2 = (byte *)0x1;
LAB_140724970:
  *param_1 = arg0;
  param_1[1] = (ulonglong)pbVar2;
  param_1[2] = arg0;
  return param_1;
}

