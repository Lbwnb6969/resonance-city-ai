// VA 0x140ba5600, PDB extent 1704 bytes
// country_core::systems::audio::trigger_audio::trigger_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/trigger_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::trigger_audio::trigger_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/trigger_audio.rs
   Extent: 1704 */

void pdb_140ba5600(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined4 uStack_7f;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined4 uStack_27;
  undefined2 uStack_23;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar20 = pub_1406abab0(0x1d,1);
    uVar6 = _UNK_14306021b;
    if (pbVar20 != (byte *)0x0) {
      *(ulonglong *)(pbVar20 + 0xd) = CONCAT53(_UNK_143060216,_DAT_143060213);
      *(undefined8 *)(pbVar20 + 0x15) = uVar6;
      uVar5 = _UNK_143060212;
      uVar4 = _UNK_14306020e;
      uVar3 = _UNK_14306020a;
      *(undefined4 *)pbVar20 = _DAT_143060206;
      *(undefined4 *)(pbVar20 + 4) = uVar3;
      *(undefined4 *)(pbVar20 + 8) = uVar4;
      *(undefined4 *)(pbVar20 + 0xc) = uVar5;
      uStack_138 = 0;
      uStack_128 = 0x1d;
      uStack_118 = 0x1d;
      uStack_110 = CONCAT71(uStack_110._1_7_,2);
      pbStack_120 = pbVar20;
      goto LAB_140ba56dd;
    }
    pdb_142dc7e2a(1,0x1d);
LAB_140ba5b22:
    pdb_142dc7e2a(1,0x14);
LAB_140ba5b56:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pdb_140a8b180(&uStack_138,*plVar1 + 0x10,&DAT_143060206,0x1d);
  if ((int)uStack_138 == 2) {
    uStack_50 = uStack_130;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143060400,0x2b,&uStack_50,&UNK_1430603a0,&UNK_143060228);
  }
LAB_140ba56dd:
  uVar17 = uStack_110;
  uVar14 = uStack_118;
  pbVar20 = pbStack_120;
  uVar11 = uStack_128;
  uVar6 = uStack_138;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar21 = pub_1406abab0(0x14,1);
    uVar5 = _UNK_14306024c;
    uVar4 = _UNK_143060248;
    uVar3 = _UNK_143060244;
    if (pbVar21 == (byte *)0x0) goto LAB_140ba5b22;
    *(undefined4 *)pbVar21 = _DAT_143060240;
    *(undefined4 *)(pbVar21 + 4) = uVar3;
    *(undefined4 *)(pbVar21 + 8) = uVar4;
    *(undefined4 *)(pbVar21 + 0xc) = uVar5;
    pbVar21[0x10] = 0x57;
    pbVar21[0x11] = 0x69;
    pbVar21[0x12] = 0x6e;
    pbVar21[0x13] = 100;
    uStack_138 = 0;
    uStack_128 = 0x14;
    uStack_118 = 0x14;
    uStack_110 = CONCAT71(uStack_110._1_7_,2);
    pbStack_120 = pbVar21;
  }
  else {
    pdb_140a8b180(&uStack_138,*plVar1 + 0x10,&DAT_143060240,0x14);
    if ((int)uStack_138 == 2) {
      uStack_50 = uStack_130;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&uStack_50,&UNK_1430603a0,&UNK_143060258);
    }
  }
  uVar18 = uStack_110;
  uVar15 = uStack_118;
  pbVar21 = pbStack_120;
  uVar12 = uStack_128;
  uVar10 = uStack_130;
  uVar8 = uStack_138;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar22 = pub_1406abab0(0x18,1);
    uVar5 = _UNK_14306027c;
    uVar4 = _UNK_143060278;
    uVar3 = _UNK_143060274;
    if (pbVar22 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x18);
      goto LAB_140ba5b56;
    }
    *(undefined4 *)pbVar22 = _DAT_143060270;
    *(undefined4 *)(pbVar22 + 4) = uVar3;
    *(undefined4 *)(pbVar22 + 8) = uVar4;
    *(undefined4 *)(pbVar22 + 0xc) = uVar5;
    pbVar22[0x10] = 0x61;
    pbVar22[0x11] = 0x20;
    pbVar22[0x12] = 0x57;
    pbVar22[0x13] = 0x68;
    pbVar22[0x14] = 0x6f;
    pbVar22[0x15] = 0x6f;
    pbVar22[0x16] = 0x73;
    pbVar22[0x17] = 0x68;
    uStack_138 = 0;
    uStack_128 = 0x18;
    uStack_118 = 0x18;
    uStack_110 = CONCAT71(uStack_110._1_7_,2);
    pbStack_120 = pbVar22;
  }
  else {
    pdb_140a8b180(&uStack_138,*plVar1 + 0x10,&DAT_143060270,0x18);
    if ((int)uStack_138 == 2) {
      uStack_50 = uStack_130;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&uStack_50,&UNK_1430603a0,&UNK_143060288);
    }
  }
  uVar19 = uStack_110;
  uVar16 = uStack_118;
  pbVar22 = pbStack_120;
  uVar13 = uStack_128;
  uVar9 = uStack_138;
  uStack_1a0 = (undefined4)uStack_110;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbStack_38 = pub_1406abab0(0x12,1);
    uVar7 = _UNK_1430602a8;
    if (pbStack_38 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x12);
      goto LAB_140ba5b56;
    }
    *(undefined8 *)pbStack_38 = _DAT_1430602a0;
    *(undefined8 *)(pbStack_38 + 8) = uVar7;
    pbStack_38[0x10] = 0x73;
    pbStack_38[0x11] = 0x74;
    uStack_50 = 0;
    uStack_40 = 0x12;
    uStack_30 = 0x12;
    uStack_28 = 2;
  }
  else {
    pdb_140a8b180(&uStack_50,*plVar1 + 0x10,&DAT_1430602a0,0x12);
    if ((int)uStack_50 == 2) {
      uStack_138 = uStack_48;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143060400,0x2b,&uStack_138,&UNK_1430603a0,&UNK_1430602b8);
    }
  }
  uStack_88 = uStack_30;
  uStack_80 = uStack_28;
  uStack_7f = uStack_27;
  uStack_7b = uStack_23;
  uStack_79 = uStack_21;
  uStack_98 = uStack_40;
  pbStack_90 = pbStack_38;
  uStack_a8 = uStack_50;
  uStack_a0 = uStack_48;
  uStack_78 = 0;
  uStack_e0 = uVar18;
  uStack_108 = uVar8;
  uStack_100 = uVar10;
  uStack_f8 = uVar12;
  pbStack_f0 = pbVar21;
  uStack_e8 = uVar15;
  uStack_1c8 = (undefined4)uVar9;
  uStack_1c4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  uStack_1c0 = (undefined4)uStack_130;
  uStack_1bc = (undefined4)((ulonglong)uStack_130 >> 0x20);
  uStack_1b8 = (undefined4)uVar13;
  uStack_1b4 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_1b0 = SUB84(pbVar22,0);
  uStack_1ac = (undefined4)((ulonglong)pbVar22 >> 0x20);
  uStack_1a8 = (undefined4)uVar16;
  uStack_1a4 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uStack_ac = (undefined4)((ulonglong)uVar19 >> 0x20);
  uStack_b8 = uStack_1a8;
  uStack_b4 = uStack_1a4;
  uStack_b0 = uStack_1a0;
  uStack_c8 = uStack_1b8;
  uStack_c4 = uStack_1b4;
  uStack_c0 = uStack_1b0;
  uStack_bc = uStack_1ac;
  uStack_d8 = uStack_1c8;
  uStack_d4 = uStack_1c4;
  uStack_d0 = uStack_1c0;
  uStack_cc = uStack_1bc;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_138 = uVar6;
  uStack_128 = uVar11;
  pbStack_120 = pbVar20;
  uStack_118 = uVar14;
  uStack_110 = uVar17;
  pdb_1416190d0(param_2,&uStack_138,&UNK_1430602d0);
  return;
}

