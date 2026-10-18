// VA 0x14036fdb0, PDB extent 595 bytes
// tiny_glade::gui::settings::text_pill_button
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::text_pill_button
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 595 */

undefined8 *
pdb_14036fdb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *arg0;
  ulonglong arg1;
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar7;
  byte *pbVar8;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong lStack_e8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong lStack_90;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puVar6;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_140306920(&uStack_f8);
  pdb_140a1aa60(&uStack_a0);
  pdb_140726e80(&uStack_58,&uStack_f8,&uStack_a0);
  pdb_1406ccf20(&uStack_a0,&uStack_58);
  pdb_14072d060(&uStack_58,&uStack_a0,1);
  pdb_140737410(&uStack_a0);
  pdb_140737440(&uStack_f8,&uStack_a0);
  pdb_140737590(&uStack_a0,&uStack_f8);
  uStack_b0 = _DAT_142f446a0;
  uStack_ac = _UNK_142f446a4;
  uStack_a8 = _UNK_142f446a8;
  uStack_a4 = _UNK_142f446ac;
  pdb_140737550(&uStack_f8,&uStack_a0,&uStack_b0);
  puVar6 = &uStack_58;
  pdb_14072cf30(&uStack_a0,&uStack_58,&uStack_f8);
  uVar5 = SUB84(puVar6,0);
  uVar2 = pdb_1407361e0();
  pdb_1407338e0(&uStack_58,&uStack_a0,uVar2,uVar5);
  uVar3 = pdb_140725a70(&uStack_58);
  pdb_140732b20(uVar3);
  bVar1 = pdb_14072ce40(&uStack_58);
  pdb_140734440(&uStack_a0,&uStack_58,param_3,param_4);
  uVar3 = pdb_140726ff0(&uStack_a0);
  pdb_14060a7e0(uVar3,_DAT_142e37994);
  lStack_e8 = lStack_90;
  uStack_f8 = uStack_a0;
  uStack_f4 = uStack_9c;
  uStack_f0 = uStack_98;
  uStack_ec = uStack_94;
  uVar3 = pdb_140725a70(&uStack_f8);
  pdb_140732b00(uVar3);
  pdb_140a1aa60(&uStack_a0);
  pdb_140cb8ed0(&uStack_f8,&uStack_a0,(uint)bVar1 * 0x20 + -0xe0);
  pdb_140cb8f80(&uStack_a0,&uStack_f8,_DAT_142e382c8);
  plVar4 = (longlong *)pdb_1403054f0(&uStack_58);
  arg0 = (byte *)plVar4[1];
  lVar7 = plVar4[2];
  if (lVar7 != 0) {
    pbVar8 = arg0 + 8;
    do {
      arg1 = *(ulonglong *)(pbVar8 + -8);
      if ((-1 < (longlong)arg1) && (arg1 != 0)) {
        pub_1406abac0(*(byte **)pbVar8,arg1,1);
      }
      pbVar8 = pbVar8 + 0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (*plVar4 != 0) {
    pub_1406abac0(arg0,*plVar4 << 5,8);
  }
  plVar4[2] = lStack_90;
  *plVar4 = CONCAT44(uStack_9c,uStack_a0);
  plVar4[1] = CONCAT44(uStack_94,uStack_98);
  param_1[2] = uStack_48;
  *param_1 = uStack_58;
  param_1[1] = uStack_50;
  return param_1;
}

