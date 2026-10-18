// VA 0x140a6df40, PDB extent 571 bytes
// country_core::input::input_stream::InputRecordReplayState::try_load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::input::input_stream::InputRecordReplayState::try_load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 571 */

longlong * pdb_140a6df40(longlong *param_1)

{
  longlong lVar1;
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
  undefined *puStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140f55d10(&uStack_e8);
  uStack_30 = CONCAT44(uStack_e4,uStack_e8);
  pbStack_38 = (byte *)CONCAT44(uStack_dc,uStack_e0);
  if (SBORROW8(0,uStack_30)) {
    uStack_21 = 1;
    pdb_140f3f5b0(&puStack_b8);
    uStack_58 = uStack_98;
    uStack_54 = uStack_94;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    puStack_b8 = &UNK_1430411b0;
    lStack_b0 = 0x17;
    uStack_21 = 0;
    lVar1 = pdb_142dea990(&puStack_b8,&uStack_78);
    param_1[1] = lVar1;
    *param_1 = -0x8000000000000000;
  }
  else {
    pdb_141650440(&puStack_b8,pbStack_38,CONCAT44(uStack_d4,uStack_d8));
    if (SBORROW8(0,(longlong)puStack_b8)) {
      lStack_40 = lStack_b0;
      uStack_22 = 1;
      pdb_140f3f5b0(&uStack_78);
      uStack_c8 = uStack_58;
      uStack_c4 = uStack_54;
      uStack_c0 = uStack_50;
      uStack_bc = uStack_4c;
      uStack_d8 = (undefined4)uStack_68;
      uStack_d4 = uStack_68._4_4_;
      uStack_d0 = uStack_60;
      uStack_cc = uStack_5c;
      uStack_e8 = (undefined4)uStack_78;
      uStack_e4 = uStack_78._4_4_;
      uStack_e0 = (undefined4)uStack_70;
      uStack_dc = uStack_70._4_4_;
      uStack_78 = &UNK_1430411c7;
      uStack_70 = 0x15;
      uStack_68 = lStack_b0;
      uStack_22 = 0;
      lVar1 = pdb_142de9590(&uStack_78,&uStack_e8);
      param_1[1] = lVar1;
      *param_1 = -0x8000000000000000;
    }
    else {
      param_1[6] = lStack_88;
      param_1[7] = lStack_80;
      param_1[4] = CONCAT44(uStack_94,uStack_98);
      param_1[5] = CONCAT44(uStack_8c,uStack_90);
      param_1[2] = lStack_a8;
      param_1[3] = CONCAT44(uStack_9c,uStack_a0);
      *param_1 = (longlong)puStack_b8;
      param_1[1] = lStack_b0;
      param_1[8] = -0x7ffffffffffffffe;
      param_1[9] = -1;
    }
    if (uStack_30 != 0) {
      pub_1406abac0(pbStack_38,uStack_30,1);
    }
  }
  return param_1;
}

