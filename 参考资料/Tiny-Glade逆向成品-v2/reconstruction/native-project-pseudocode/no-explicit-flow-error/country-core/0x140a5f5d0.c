// VA 0x140a5f5d0, PDB extent 420 bytes
// country_core::resources::stairs::stairs_state::StairsState::restore_backup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::restore_backup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 420 */

void pdb_140a5f5d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  puVar1 = param_1 + 5;
  pdb_1417cbce0(puVar1,param_1 + 0x17,param_1 + 0x29);
  pdb_1417c58d0(&uStack_78,param_1 + 0x17);
  uStack_40 = *(undefined4 *)(param_1 + 0x1e);
  uStack_3c = *(undefined4 *)((longlong)param_1 + 0xf4);
  uStack_38 = *(undefined4 *)(param_1 + 0x1f);
  uStack_34 = *(undefined4 *)((longlong)param_1 + 0xfc);
  pdb_1417c5a90(&uStack_150,param_1 + 0x20);
  uVar2 = param_1[0x27];
  uStack_110 = param_1[0x28];
  uStack_108 = uStack_78;
  uStack_100 = uStack_70;
  uStack_f8 = uStack_68;
  uStack_f0 = uStack_60;
  uStack_e8 = uStack_58;
  uStack_e0 = uStack_50;
  uStack_d8 = uStack_48;
  uStack_d4 = uStack_44;
  uStack_d0 = uStack_40;
  uStack_cc = uStack_3c;
  uStack_c8 = CONCAT44(uStack_34,uStack_38);
  uStack_c0 = uStack_150;
  uStack_b8 = uStack_148;
  uStack_b0 = uStack_140;
  uStack_ac = uStack_13c;
  uStack_a8 = uStack_138;
  uStack_a4 = uStack_134;
  uStack_a0 = uStack_130;
  uStack_9c = uStack_12c;
  uStack_98 = uStack_128;
  uStack_94 = uStack_124;
  uStack_118._0_4_ = (undefined4)uVar2;
  uStack_118._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_90 = uStack_120;
  uStack_8c = uStack_11c;
  uStack_88 = (undefined4)uStack_118;
  uStack_84 = uStack_118._4_4_;
  uStack_118 = uVar2;
  uStack_80 = uStack_110;
  puStack_30 = puVar1;
  pdb_1404a7820(puVar1);
  pub_142e32760(param_1 + 5,&uStack_108,0x90);
  if (param_1[2] != 3) {
    uStack_108 = CONCAT44(uStack_108._4_4_,*(undefined4 *)(param_1 + 4));
    lVar3 = pdb_1409369e0(param_1 + 5,&uStack_108);
    if (lVar3 != 1) {
      param_1[2] = 3;
    }
  }
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return;
}

