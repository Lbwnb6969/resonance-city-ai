// VA 0x140c5d220, PDB extent 688 bytes
// country_core::resources::glade_settings::GladeSettings::load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::glade_settings::GladeSettings::load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_settings.rs
   Extent: 688 */

undefined8 * pdb_140c5d220(undefined8 *param_1,ulonglong *param_2)

{
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  char cStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  byte *pbStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined5 uStack_5d;
  byte *pbStack_58;
  undefined8 uStack_50;
  ulonglong *puStack_48;
  byte *pbStack_40;
  byte *pbStack_38;
  ulonglong uStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pbStack_40 = (byte *)param_2[1];
  puStack_48 = param_2;
  pdb_140f3e9e0(&pbStack_88,pbStack_40,param_2[2],&UNK_14306f470,0xd);
  pdb_1416432f0(&uStack_60,&pbStack_88);
  uStack_30 = CONCAT53(uStack_5d,CONCAT12(uStack_5e,uStack_60));
  if (SBORROW8(0,uStack_30)) {
    pdb_140f36c40(&pbStack_58);
  }
  else {
    pbStack_38 = pbStack_58;
    pdb_141650170(&pbStack_b0,pbStack_58,uStack_50);
    if (cStack_8c != '\x03') {
      uStack_68 = uStack_90;
      uStack_78 = uStack_a0;
      uStack_70 = uStack_98;
      pbStack_88 = pbStack_b0;
      uStack_80 = uStack_a8;
      uStack_60 = uStack_8b;
      uStack_5e = uStack_89;
      if (uStack_30 != 0) {
        pub_1406abac0(pbStack_38,uStack_30,1);
      }
      if (*puStack_48 != 0) {
        pub_1406abac0(pbStack_40,*puStack_48,1);
      }
      if (cStack_8c != '\x02') {
        *(undefined4 *)(param_1 + 4) = uStack_68;
        param_1[2] = uStack_78;
        param_1[3] = uStack_70;
        *param_1 = pbStack_88;
        param_1[1] = uStack_80;
        *(char *)((longlong)param_1 + 0x24) = cStack_8c;
        *(undefined2 *)((longlong)param_1 + 0x25) = uStack_60;
        *(undefined1 *)((longlong)param_1 + 0x27) = uStack_5e;
        return param_1;
      }
      goto LAB_140c5d3d7;
    }
    pbStack_28 = pbStack_b0;
    if (*(longlong *)pbStack_b0 == 1) {
      pdb_1404b38e0(pbStack_b0 + 8);
    }
    else if ((*(longlong *)pbStack_b0 == 0) && (*(ulonglong *)(pbStack_b0 + 0x10) != 0)) {
      pub_1406abac0(*(byte **)(pbStack_b0 + 8),*(ulonglong *)(pbStack_b0 + 0x10),1);
    }
    pub_1406abac0(pbStack_28,0x28,8);
    if (uStack_30 != 0) {
      pub_1406abac0(pbStack_38,uStack_30,1);
    }
  }
  if (*puStack_48 != 0) {
    pub_1406abac0(pbStack_40,*puStack_48,1);
  }
LAB_140c5d3d7:
  *param_1 = 0;
  param_1[1] = _DAT_14306e520;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined8 *)((longlong)param_1 + 0x14) = 8;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x100000000;
  return param_1;
}

