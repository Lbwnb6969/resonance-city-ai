// VA 0x1408f9760, PDB extent 717 bytes
// country_core::startup::load_glade_tod_and_weather::load_snow_particles
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_tod_and_weather.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_glade_tod_and_weather::load_snow_particles
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_tod_and_weather.rs
   Extent: 717 */

void pdb_1408f9760(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  undefined1 auStack_140 [40];
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
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
  undefined8 uStack_98;
  ulonglong uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (*(char *)(*param_6 + 0x98) == '\x04') {
    uStack_118 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    puStack_b8 = (ulonglong *)((ulonglong)puStack_b8 & 0xffffffff00000000);
    uStack_ac = 0;
    uStack_a8 = 1;
    uStack_a4 = uStack_a4 & 0xffffff00;
    puVar3 = &uStack_118;
    pdb_1415edd10(&uStack_80);
    plVar1 = (longlong *)pdb_140f3bda0();
    if ((char)plVar1[2] == '\x01') {
      lStack_c0 = *plVar1;
      puVar3 = (ulonglong *)plVar1[1];
    }
    else {
      lStack_c0 = pdb_140f4fd10();
      *plVar1 = lStack_c0;
      plVar1[1] = (longlong)puVar3;
      *(undefined1 *)(plVar1 + 2) = 1;
    }
    *plVar1 = lStack_c0 + 1;
    uStack_118 = uStack_80;
    uStack_110 = uStack_78;
    uStack_100 = 0x8000000000000000;
    uStack_e0 = _DAT_14301dee0;
    uStack_d8 = _UNK_14301dee8;
    uStack_d0 = CONCAT44(_UNK_14301def4,_DAT_14301def0);
    uStack_c8 = _UNK_14301def8;
    uStack_c4 = _UNK_14301defc;
    uStack_b0 = 0x4301d751;
    uStack_ac = 1;
    uStack_a8 = 0xe;
    uStack_a4 = 0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    puStack_b8 = puVar3;
    uVar2 = pdb_140b08d00(&uStack_118,&UNK_14301d75f,5,*param_3,*param_2);
    pdb_140a596f0(&uStack_80,*param_5,&UNK_14301d764,0x1b,&UNK_14301d780);
    if (CONCAT44(uStack_54,uStack_58) == 0) {
      uStack_41 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14301d798);
    }
    uStack_41 = 1;
    uStack_a0 = pdb_140e51270(*(longlong *)*param_1 + 0x10,&uStack_58);
    uStack_a8 = (undefined4)uStack_50;
    uStack_a4 = (uint)((ulonglong)uStack_50 >> 0x20);
    uStack_b0 = uStack_58;
    uStack_ac = uStack_54;
    uStack_c8 = uStack_70;
    uStack_c4 = uStack_6c;
    uStack_d8 = uStack_80;
    uStack_d0 = uStack_78;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_118 = uStack_118 & 0xffffffff00000000;
    _uStack_108 = CONCAT44(_UNK_142e4e654,_DAT_142e4e650);
    uStack_100 = CONCAT44(_UNK_142e4e65c,_UNK_142e4e658);
    uStack_ec = 0x3f800000;
    uStack_e8 = 0x3f800000;
    uStack_e4 = 0x3f800000;
    uStack_98 = 0xd;
    uStack_41 = 0;
    uStack_110 = uVar2;
    pdb_14161c840(auStack_140,param_4,&uStack_118,&UNK_14301d7b0);
  }
  return;
}

