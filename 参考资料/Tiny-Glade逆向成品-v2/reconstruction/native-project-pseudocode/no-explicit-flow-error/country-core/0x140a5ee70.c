// VA 0x140a5ee70, PDB extent 388 bytes
// country_core::resources::stairs::stairs_state::StairsState::make_backup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::make_backup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 388 */

void pdb_140a5ee70(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
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
  undefined8 uStack_88;
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
  longlong lStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x178) == '\0') {
    lVar1 = param_1 + 0xb8;
    pdb_1417cbce0(lVar1,param_1 + 0x28,param_1 + 0x148);
    pdb_1417c58d0(&uStack_78,param_1 + 0x28);
    uStack_40 = *(undefined4 *)(param_1 + 0x60);
    uStack_3c = *(undefined4 *)(param_1 + 100);
    uStack_38 = *(undefined4 *)(param_1 + 0x68);
    uStack_34 = *(undefined4 *)(param_1 + 0x6c);
    pdb_1417c5a90(&uStack_c0,param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    uStack_d0 = *(undefined8 *)(param_1 + 0xb0);
    uStack_158 = uStack_78;
    uStack_150 = uStack_70;
    uStack_148 = uStack_68;
    uStack_140 = uStack_60;
    uStack_138 = uStack_58;
    uStack_130 = uStack_50;
    uStack_128 = uStack_48;
    uStack_124 = uStack_44;
    uStack_120 = uStack_40;
    uStack_11c = uStack_3c;
    uStack_118 = CONCAT44(uStack_34,uStack_38);
    uStack_110 = uStack_c0;
    uStack_108 = uStack_b8;
    uStack_100 = uStack_b0;
    uStack_fc = uStack_ac;
    uStack_f8 = uStack_a8;
    uStack_f4 = uStack_a4;
    uStack_f0 = uStack_a0;
    uStack_ec = uStack_9c;
    uStack_e8 = uStack_98;
    uStack_e4 = uStack_94;
    uStack_88._0_4_ = (undefined4)uVar2;
    uStack_88._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    uStack_e0 = uStack_90;
    uStack_dc = uStack_8c;
    uStack_d8 = (undefined4)uStack_88;
    uStack_d4 = uStack_88._4_4_;
    uStack_88 = uVar2;
    uStack_80 = uStack_d0;
    lStack_30 = lVar1;
    pdb_1404a7820(lVar1);
    pub_142e32760(param_1 + 0xb8,&uStack_158,0x90);
    *(undefined1 *)(param_1 + 0x178) = 1;
  }
  return;
}

