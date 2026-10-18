// VA 0x1409c2560, PDB extent 1253 bytes
// country_core::systems::audio::water_audio::water_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::audio::water_audio::water_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/water_audio.rs
   Extent: 1253 */

void pdb_1409c2560(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c == '\0') {
    uVar1 = *param_1;
    uStack_48 = 3;
    uStack_40 = 0x32;
    puStack_58 = &UNK_14302bcce;
    uStack_50 = 0x1a;
    pdb_140a87c40(&uStack_138,uVar1,&puStack_58);
    if (SBORROW8(0,(longlong)uStack_138)) {
      puStack_58 = uStack_130;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14302be98,0x2b,&puStack_58,&UNK_14302bf28,&UNK_14302bce8);
    }
    uStack_48 = 3;
    uStack_40 = 0x32;
    puStack_58 = &UNK_14302bd00;
    uStack_50 = 0x1b;
    pdb_140a87c40(&uStack_138,uVar1,&puStack_58);
    uVar10 = uStack_108;
    if (SBORROW8(0,(longlong)uStack_138)) {
      puStack_58 = uStack_130;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14302be98,0x2b,&puStack_58,&UNK_14302bf28,&UNK_14302bd20);
    }
    uStack_48 = 3;
    uStack_40 = 0x32;
    puStack_58 = &UNK_14302bd38;
    uStack_50 = 0x18;
    pdb_140a87c40(&uStack_138,uVar1,&puStack_58);
    if (SBORROW8(0,(longlong)uStack_138)) {
      puStack_58 = uStack_130;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14302be98,0x2b,&puStack_58,&UNK_14302bf28,&UNK_14302bd50);
    }
    uVar2 = (undefined4)uStack_138;
    uVar3 = uStack_138._4_4_;
    uVar4 = (undefined4)uStack_130;
    uVar5 = uStack_130._4_4_;
    uVar6 = (undefined4)uStack_128;
    uVar7 = uStack_128._4_4_;
    uVar8 = uStack_120;
    uVar9 = uStack_11c;
    uStack_128 = 3;
    _uStack_120 = CONCAT44(uStack_11c,0x32);
    uStack_138 = &UNK_14302bd68;
    uStack_130 = (undefined *)0x19;
    pdb_140a87c40(&puStack_58,uVar1,&uStack_138);
    if (SBORROW8(0,(longlong)puStack_58)) {
      uStack_138 = (undefined *)uStack_50;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14302be98,0x2b,&uStack_138,&UNK_14302bf28,&UNK_14302bd88);
    }
    uStack_60 = uStack_28;
    uStack_78 = CONCAT44(uStack_3c,uStack_40);
    uStack_70 = uStack_38;
    uStack_68 = uStack_30;
    uStack_80 = uStack_48;
    puStack_90 = puStack_58;
    uStack_88 = uStack_50;
    uStack_d0 = uVar10;
    uStack_98 = uStack_108;
    uStack_a8 = uStack_118;
    uStack_a4 = uStack_114;
    uStack_a0 = uStack_110;
    uStack_9c = uStack_10c;
    uStack_b8 = uVar6;
    uStack_b4 = uVar7;
    uStack_b0 = uVar8;
    uStack_ac = uVar9;
    uStack_c8 = uVar2;
    uStack_c4 = uVar3;
    uStack_c0 = uVar4;
    uStack_bc = uVar5;
    pdb_141617bc0(param_2,&uStack_138,&UNK_14302bda0);
  }
  return;
}

