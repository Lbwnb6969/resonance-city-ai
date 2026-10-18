// VA 0x14094bae0, PDB extent 2120 bytes
// country_core::systems::audio::signifier_audio::signifier_audio_init_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/signifier_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::signifier_audio::signifier_audio_init_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/signifier_audio.rs
   Extent: 2120 */

void pdb_14094bae0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  byte *pbVar28;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  longlong lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
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
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  plVar1 = (longlong *)*param_1;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar25 = pub_1406abab0(0x11,1);
    uVar5 = _UNK_14302490b;
    uVar4 = _UNK_143024907;
    uVar3 = _UNK_143024903;
    if (pbVar25 != (byte *)0x0) {
      *(undefined4 *)pbVar25 = _DAT_1430248ff;
      *(undefined4 *)(pbVar25 + 4) = uVar3;
      *(undefined4 *)(pbVar25 + 8) = uVar4;
      *(undefined4 *)(pbVar25 + 0xc) = uVar5;
      pbVar25[0x10] = 0x70;
      puStack_128 = (undefined *)0x0;
      uStack_118 = 0x11;
      uStack_108 = 0x11;
      uStack_100 = CONCAT71(uStack_100._1_7_,2);
      uStack_110 = pbVar25;
      goto LAB_14094bbc8;
    }
    pdb_142dc7e2a(1,0x11);
LAB_14094c149:
    pdb_142dc7e2a(1,0x12);
LAB_14094c17d:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  pdb_140a8b180(&puStack_128,*plVar1 + 0x10,&DAT_1430248ff,0x11);
  if ((int)puStack_128 == 2) {
    lStack_160 = lStack_120;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143024e08,0x2b,&lStack_160,&UNK_143024de8,&UNK_143024910);
  }
LAB_14094bbc8:
  uVar21 = uStack_100;
  uVar17 = uStack_108;
  pbVar25 = uStack_110;
  uVar14 = uStack_118;
  puVar7 = puStack_128;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar26 = pub_1406abab0(0x12,1);
    uVar5 = _UNK_143024438;
    uVar4 = _UNK_143024434;
    uVar3 = _UNK_143024430;
    if (pbVar26 == (byte *)0x0) goto LAB_14094c149;
    *(undefined4 *)pbVar26 = _DAT_14302442c;
    *(undefined4 *)(pbVar26 + 4) = uVar3;
    *(undefined4 *)(pbVar26 + 8) = uVar4;
    *(undefined4 *)(pbVar26 + 0xc) = uVar5;
    pbVar26[0x10] = 0x61;
    pbVar26[0x11] = 0x62;
    puStack_128 = (undefined *)0x0;
    uStack_118 = 0x12;
    uStack_108 = 0x12;
    uStack_100 = CONCAT71(uStack_100._1_7_,2);
    uStack_110 = pbVar26;
  }
  else {
    pdb_140a8b180(&puStack_128,*plVar1 + 0x10,&DAT_14302442c,0x12);
    if ((int)puStack_128 == 2) {
      lStack_160 = lStack_120;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143024e08,0x2b,&lStack_160,&UNK_143024de8,&UNK_143024928);
    }
  }
  uVar22 = uStack_100;
  uVar18 = uStack_108;
  pbVar26 = uStack_110;
  uVar15 = uStack_118;
  lVar11 = lStack_120;
  puVar8 = puStack_128;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar27 = pub_1406abab0(0x15,1);
    uVar5 = _UNK_14302444a;
    uVar4 = _UNK_143024446;
    uVar3 = _UNK_143024442;
    if (pbVar27 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x15);
      goto LAB_14094c17d;
    }
    *(undefined4 *)pbVar27 = _DAT_14302443e;
    *(undefined4 *)(pbVar27 + 4) = uVar3;
    *(undefined4 *)(pbVar27 + 8) = uVar4;
    *(undefined4 *)(pbVar27 + 0xc) = uVar5;
    pbVar27[0xd] = 0x2f;
    pbVar27[0xe] = 0x52;
    pbVar27[0xf] = 0x65;
    pbVar27[0x10] = 0x6c;
    pbVar27[0x11] = 0x65;
    pbVar27[0x12] = 0x61;
    pbVar27[0x13] = 0x73;
    pbVar27[0x14] = 0x65;
    puStack_128 = (undefined *)0x0;
    uStack_118 = 0x15;
    uStack_108 = 0x15;
    uStack_100 = CONCAT71(uStack_100._1_7_,2);
    uStack_110 = pbVar27;
  }
  else {
    pdb_140a8b180(&puStack_128,*plVar1 + 0x10,&DAT_14302443e,0x15);
    if ((int)puStack_128 == 2) {
      lStack_160 = lStack_120;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143024e08,0x2b,&lStack_160,&UNK_143024de8,&UNK_143024940);
    }
  }
  uVar23 = uStack_100;
  uVar19 = uStack_108;
  pbVar27 = uStack_110;
  uVar16 = uStack_118;
  lVar12 = lStack_120;
  puVar9 = puStack_128;
  if (*plVar1 == 0) {
    pdb_14007ee60();
    pbVar28 = pub_1406abab0(0x1b,1);
    uVar6 = _UNK_14302496b;
    if (pbVar28 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x1b);
      goto LAB_14094c17d;
    }
    *(ulonglong *)(pbVar28 + 0xb) = CONCAT35(_UNK_143024968,CONCAT41(_UNK_143024964,DAT_143024963));
    *(undefined8 *)(pbVar28 + 0x13) = uVar6;
    uVar5 = _UNK_143024964;
    uVar4 = _UNK_143024960;
    uVar3 = _UNK_14302495c;
    *(undefined4 *)pbVar28 = _DAT_143024958;
    *(undefined4 *)(pbVar28 + 4) = uVar3;
    *(undefined4 *)(pbVar28 + 8) = uVar4;
    *(undefined4 *)(pbVar28 + 0xc) = uVar5;
    puStack_128 = (undefined *)0x0;
    uStack_118 = 0x1b;
    uStack_108 = 0x1b;
    uStack_100 = CONCAT71(uStack_100._1_7_,2);
    uStack_110 = pbVar28;
  }
  else {
    pdb_140a8b180(&puStack_128,*plVar1 + 0x10,&DAT_143024958,0x1b);
    if ((int)puStack_128 == 2) {
      lStack_160 = lStack_120;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143024e08,0x2b,&lStack_160,&UNK_143024de8,&UNK_143024978);
    }
  }
  uVar24 = uStack_100;
  uVar20 = uStack_108;
  pbVar28 = uStack_110;
  uVar6 = uStack_118;
  lVar13 = lStack_120;
  puVar10 = puStack_128;
  uStack_200 = (undefined4)uStack_100;
  uStack_118 = 3;
  uVar3 = uStack_110._4_4_;
  uStack_110 = (byte *)CONCAT44(uStack_110._4_4_,0x32);
  puStack_128 = &UNK_143024990;
  lStack_120 = 0x21;
  pdb_140a87c40(&lStack_160,plVar1,&puStack_128);
  if (!SBORROW8(0,lStack_160)) {
    uStack_28 = uStack_130;
    uStack_38 = uStack_140;
    uStack_30 = uStack_138;
    uStack_48 = uStack_150;
    uStack_40 = uStack_148;
    lStack_58 = lStack_160;
    puStack_50 = puStack_158;
    uStack_f8 = 0;
    uStack_c0 = uVar22;
    puStack_e8 = puVar8;
    lStack_e0 = lVar11;
    uStack_d8 = uVar15;
    pbStack_d0 = pbVar26;
    uStack_c8 = uVar18;
    uStack_90 = uVar23;
    uStack_98 = uVar19;
    uStack_a8 = uVar16;
    pbStack_a0 = pbVar27;
    puStack_b8 = puVar9;
    lStack_b0 = lVar12;
    uStack_228 = SUB84(puVar10,0);
    uStack_224 = (undefined4)((ulonglong)puVar10 >> 0x20);
    uStack_220 = (undefined4)lVar13;
    uStack_21c = (undefined4)((ulonglong)lVar13 >> 0x20);
    uStack_218 = (undefined4)uVar6;
    uStack_214 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_210 = SUB84(pbVar28,0);
    uStack_208 = (undefined4)uVar20;
    uStack_204 = (undefined4)((ulonglong)uVar20 >> 0x20);
    uStack_5c = (undefined4)((ulonglong)uVar24 >> 0x20);
    uStack_68 = uStack_208;
    uStack_64 = uStack_204;
    uStack_60 = uStack_200;
    uStack_78 = uStack_218;
    uStack_74 = uStack_214;
    uStack_70 = uStack_210;
    uStack_6c = uVar3;
    uStack_88 = uStack_228;
    uStack_84 = uStack_224;
    uStack_80 = uStack_220;
    uStack_7c = uStack_21c;
    puStack_128 = puVar7;
    uStack_118 = uVar14;
    uStack_110 = pbVar25;
    uStack_108 = uVar17;
    uStack_100 = uVar21;
    pdb_14161a650(param_2,&puStack_128,&UNK_1430249d0);
    return;
  }
  puStack_128 = puStack_158;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143024e08,0x2b,&puStack_128,&UNK_143024de8,&UNK_1430249b8);
}

