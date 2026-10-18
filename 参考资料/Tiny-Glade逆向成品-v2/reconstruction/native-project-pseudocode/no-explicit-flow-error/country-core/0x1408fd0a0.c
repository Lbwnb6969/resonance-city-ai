// VA 0x1408fd0a0, PDB extent 745 bytes
// country_core::resources::loading_screen::startup_loading_screen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/loading_screen.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::loading_screen::startup_loading_screen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/loading_screen.rs
   Extent: 745 */

void pdb_1408fd0a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
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
  undefined8 uStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  ulonglong *puStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  ulonglong uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)*param_1;
  uStack_118 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  puStack_b8 = (ulonglong *)((ulonglong)puStack_b8 & 0xffffffff00000000);
  uStack_ac = 0;
  uStack_a8 = 1;
  uStack_a4 = uStack_a4 & 0xffffff00;
  puVar4 = &uStack_118;
  pdb_1415edd10(&uStack_80);
  plVar2 = (longlong *)pdb_140f3bda0();
  if ((char)plVar2[2] == '\x01') {
    lStack_c0 = *plVar2;
    puVar4 = (ulonglong *)plVar2[1];
  }
  else {
    lStack_c0 = pdb_140f4fd10();
    *plVar2 = lStack_c0;
    plVar2[1] = (longlong)puVar4;
    *(undefined1 *)(plVar2 + 2) = 1;
  }
  *plVar2 = lStack_c0 + 1;
  uStack_108 = uStack_70;
  uStack_118 = uStack_80;
  uStack_110 = uStack_78;
  uStack_100 = 0x8000000000000000;
  uStack_e0 = _DAT_14301dee0;
  uStack_d8 = _UNK_14301dee8;
  uStack_d0 = CONCAT44(_UNK_14301def4,_DAT_14301def0);
  _uStack_c8 = CONCAT44(_UNK_14301defc,_UNK_14301def8);
  uStack_b0 = 0x4301daa8;
  uStack_ac = 1;
  uStack_a8 = 0xe;
  uStack_a4 = 0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  puStack_b8 = puVar4;
  uVar3 = pdb_140b08d00(&uStack_118,&UNK_14301dab6,0xe,*param_3,*param_2);
  pdb_140a596f0(&uStack_150,*param_4,&UNK_14301dac4,0x1b,&UNK_14301dae0);
  if (CONCAT44(uStack_124,uStack_128) != 0) {
    uStack_39 = 1;
    uStack_a0 = pdb_140e51270(lVar1 + 0x10,&uStack_128);
    uStack_78 = uStack_150;
    uStack_70 = uStack_148;
    uStack_68 = uStack_140;
    uStack_64 = uStack_13c;
    uStack_60 = uStack_138;
    uStack_5c = uStack_134;
    uStack_58 = uStack_130;
    uStack_54 = uStack_12c;
    uStack_50 = uStack_128;
    uStack_4c = uStack_124;
    uStack_48 = uStack_120;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_118 = uStack_118 & 0xffffffff00000000;
    uStack_108 = _DAT_142e4e650;
    uStack_100 = _UNK_142e4e658;
    uStack_ec = 0x3f800000;
    uStack_e8 = 0x3f800000;
    uStack_e4 = 0x3f800000;
    uStack_e0 = uStack_80;
    uStack_d8 = uStack_150;
    uStack_d0 = uStack_148;
    uStack_a8 = (undefined4)uStack_120;
    uStack_a4 = (uint)((ulonglong)uStack_120 >> 0x20);
    uStack_98 = 0x13;
    uStack_94 = 0;
    uStack_39 = 0;
    uStack_110 = uVar3;
    pdb_1416209e0(&uStack_80,param_5,&uStack_118,&UNK_14301db10);
    return;
  }
  uStack_39 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14301daf8);
}

