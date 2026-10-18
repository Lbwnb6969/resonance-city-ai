// VA 0x140b9a540, PDB extent 655 bytes
// country_core::startup::startup_sky_and_sun::startup_sky_and_sun
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_sky_and_sun.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_sky_and_sun::startup_sky_and_sun
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_sky_and_sun.rs
   Extent: 655 */

void pdb_140b9a540(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_180 [40];
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_141b241d0(&uStack_d8,&UNK_14305fc60,0x1a);
  if (!SBORROW8(0,CONCAT44(uStack_d4,uStack_d8))) {
    uStack_e8 = uStack_68;
    uStack_e0 = uStack_60;
    uStack_118 = uStack_98;
    uStack_110 = uStack_90;
    uStack_128 = uStack_ac._4_4_;
    uStack_124 = uStack_a4;
    uStack_120 = uStack_a0;
    uStack_11c = uStack_9c;
    uStack_138 = (undefined4)uStack_b8;
    uStack_134 = uStack_b8._4_4_;
    uStack_130 = uStack_b0;
    uStack_12c = (undefined4)uStack_ac;
    uStack_148 = uStack_c8;
    uStack_144 = uStack_c4;
    uStack_140 = uStack_c0;
    uStack_13c = uStack_bc;
    uStack_158 = CONCAT44(uStack_d4,uStack_d8);
    uStack_150 = (undefined4)uStack_d0;
    uStack_14c = uStack_d0._4_4_;
    uVar2 = pdb_140b08d00(&uStack_158,&UNK_14305fcd0,7,*param_3,*param_2);
    pdb_140a596f0(&uStack_158,*param_4,&UNK_14305fcd7,0x14,&UNK_14305fcf0);
    lVar1 = *(longlong *)*param_1;
    uVar4 = *param_5;
    uStack_39 = 1;
    uVar3 = pdb_140df4400(&UNK_14305fd08,4);
    uStack_39 = 1;
    uVar4 = pdb_140a2e580(uVar4,uVar3);
    uStack_39 = 1;
    uStack_60 = pdb_1419909d0(&uStack_158,lVar1 + 0x10,uVar4);
    uStack_68 = CONCAT44(uStack_124,uStack_128);
    uStack_90 = CONCAT44(uStack_14c,uStack_150);
    uStack_78 = uStack_138;
    uStack_74 = uStack_134;
    uStack_70 = uStack_130;
    uStack_6c = uStack_12c;
    uStack_88 = uStack_148;
    uStack_84 = uStack_144;
    uStack_80 = uStack_140;
    uStack_7c = uStack_13c;
    uStack_98 = uStack_158;
    uStack_d8 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = _DAT_142e4e650;
    uStack_c4 = _UNK_142e4e654;
    uStack_c0 = _UNK_142e4e658;
    uStack_bc = _UNK_142e4e65c;
    uStack_ac = 0x3f8000003f800000;
    uStack_a4 = 0x3f800000;
    uStack_58 = 10;
    uStack_39 = 0;
    uStack_d0 = uVar2;
    pdb_14161ed70(auStack_180,param_6,&uStack_d8,&UNK_14305fd10);
    return;
  }
  uStack_158 = uStack_d0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143060400,0x2b,&uStack_158,&UNK_1430603a0,&UNK_14305fcb8);
}

