// VA 0x140dc7240, PDB extent 626 bytes
// paths::find_standard_app_root_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: paths::find_standard_app_root_path
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
   Extent: 626 */

undefined8 * pdb_140dc7240(undefined8 *param_1)

{
  ulonglong uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined *puStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined *puStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte *pbStack_30;
  byte *pbStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_141dd8d80(&uStack_d8,0x6c);
  if (SBORROW8(0,uStack_d8)) {
    pdb_140f4c440(&lStack_b8,&UNK_1431f2ab0,0xb);
    if (lStack_b8 == -0x7fffffffffffffff) {
      pbStack_30 = (byte *)CONCAT44(uStack_a4,uStack_a8);
      if (!SBORROW8(0,uStack_b0)) {
        pbStack_28 = (byte *)uStack_b0;
        pdb_140f3e9e0(&puStack_98,pbStack_30,CONCAT44(uStack_9c,uStack_a0),&UNK_1431f2ae3,0xb);
        if (pbStack_28 != (byte *)0x0) {
          pub_1406abac0(pbStack_30,(ulonglong)pbStack_28,1);
        }
        goto LAB_140dc7307;
      }
    }
    else {
      pbStack_30 = (byte *)lStack_b8;
      pbStack_28 = (byte *)uStack_b0;
      uStack_19 = 0;
      pdb_140f3f5b0(&puStack_60);
      uStack_78 = uStack_40;
      uStack_74 = uStack_3c;
      uStack_70 = uStack_38;
      uStack_6c = uStack_34;
      puStack_98 = puStack_60;
      pbStack_90 = (byte *)uStack_58;
      uStack_50 = (ulonglong)pbStack_30;
      uStack_48 = (ulonglong)pbStack_28;
      uStack_40 = uStack_a8;
      uStack_3c = uStack_a4;
      uStack_38 = uStack_a0;
      uStack_34 = uStack_9c;
      puStack_60 = &UNK_1431f2abb;
      uStack_58 = 0x28;
      uStack_19 = 1;
      pbStack_30 = (byte *)pdb_142dffd70(&puStack_60,&puStack_98);
    }
    param_1[1] = pbStack_30;
    *param_1 = 0x8000000000000000;
  }
  else {
    uStack_88 = uStack_c8;
    uStack_80 = uStack_c0;
    puStack_98 = (undefined *)uStack_d8;
    pbStack_90 = pbStack_d0;
LAB_140dc7307:
    pbStack_28 = pbStack_90;
    pdb_140f3e9e0(&puStack_60,pbStack_90,uStack_88,&UNK_1431f2a38,10);
    param_1[2] = uStack_50;
    param_1[3] = uStack_48;
    *param_1 = puStack_60;
    param_1[1] = uStack_58;
    if (puStack_98 != (undefined *)0x0) {
      pub_1406abac0(pbStack_28,(ulonglong)puStack_98,1);
    }
  }
  return param_1;
}

