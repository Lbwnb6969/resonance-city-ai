// VA 0x140a92500, PDB extent 359 bytes
// country_core::resources::session::SessionMeta::load_or_default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::SessionMeta::load_or_default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 359 */

undefined8 * pdb_140a92500(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_48,param_2,param_3,&UNK_1430450d2,9);
  pbStack_28 = pbStack_40;
  pdb_140f4f620(&iStack_100,pbStack_40,uStack_38);
  if (iStack_100 == 2) {
    lStack_a8 = 2;
  }
  else {
    lStack_a8 = CONCAT44(uStack_fc,iStack_100);
    uStack_a0 = uStack_f8;
    uStack_58 = uStack_b0;
    uStack_68 = uStack_c0;
    uStack_64 = uStack_bc;
    uStack_60 = uStack_b8;
    uStack_5c = uStack_b4;
    uStack_78 = uStack_d0;
    uStack_74 = uStack_cc;
    uStack_70 = uStack_c8;
    uStack_6c = uStack_c4;
    uStack_88 = uStack_e0;
    uStack_84 = uStack_dc;
    uStack_80 = uStack_d8;
    uStack_7c = uStack_d4;
    uStack_98 = uStack_f0;
    uStack_94 = uStack_ec;
    uStack_90 = uStack_e8;
    uStack_8c = uStack_e4;
    if (lStack_a8 != 2) {
      pdb_140a926d0(param_1,pbStack_28,uStack_38);
      goto LAB_140a92602;
    }
  }
  uStack_a0 = uStack_f8;
  pdb_1404b38e0(&uStack_a0);
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[0xe] = 0x8000000000000000;
  *(undefined1 *)(param_1 + 0x13) = 0;
LAB_140a92602:
  if (uStack_48 != 0) {
    pub_1406abac0(pbStack_28,uStack_48,1);
  }
  return param_1;
}

