// VA 0x140ad8210, PDB extent 1829 bytes
// country_core::systems::audio::music::music_player::MusicPlayer::init
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::music::music_player::MusicPlayer::init
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
   Extent: 1829 */

undefined8 * pdb_140ad8210(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  undefined2 uStack_bb;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined2 uStack_23;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_2 != 0) {
    lVar7 = *param_2 + 0x10;
    pdb_140a8b180(&uStack_50,lVar7,&DAT_14304dfa0,0x19);
    if ((int)uStack_50 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14304e398,0x2b,&uStack_88,&UNK_14304e378,&UNK_14304dfc0);
    }
    uStack_98 = uStack_30;
    uStack_90 = uStack_28;
    uStack_8c = uStack_24;
    uStack_8b = uStack_23;
    uStack_89 = uStack_21;
    uStack_a8 = uStack_40;
    pbStack_a0 = pbStack_38;
    uStack_b8 = uStack_50;
    uStack_b0 = CONCAT44(uStack_44,uStack_48);
    pdb_140a8b180(&uStack_50,lVar7,&DAT_14304dfd8,0x13);
    if ((int)uStack_50 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14304e398,0x2b,&uStack_88,&UNK_14304e378,&UNK_14304dff0);
    }
    uStack_c8 = uStack_30;
    uStack_c0 = uStack_28;
    uStack_bc = uStack_24;
    uStack_bb = uStack_23;
    uStack_b9 = uStack_21;
    uStack_d8 = uStack_40;
    pbStack_d0 = pbStack_38;
    uStack_e8 = uStack_50;
    uStack_e0 = CONCAT44(uStack_44,uStack_48);
    pdb_140a8b180(&uStack_50,lVar7,&DAT_14304e008,0x15);
    if ((int)uStack_50 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14304e398,0x2b,auStack_58,&UNK_14304e378,&UNK_14304e020);
    }
    uStack_68 = uStack_30;
    uStack_60 = uStack_28;
    uStack_5c = uStack_24;
    uStack_5b = uStack_23;
    uStack_59 = uStack_21;
    uStack_78 = uStack_40;
    pbStack_70 = pbStack_38;
    uStack_88 = uStack_50;
    uStack_80 = CONCAT44(uStack_44,uStack_48);
    pdb_140a8b180(&uStack_50,lVar7,&DAT_14304e038,0x15);
    if ((int)uStack_50 == 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14304e398,0x2b,auStack_58,&UNK_14304e378,&UNK_14304e050);
    }
LAB_140ad85ac:
    param_1[0xc] = uStack_30;
    *(undefined1 *)(param_1 + 0xd) = (undefined1)uStack_28;
    *(uint *)((longlong)param_1 + 0x69) = CONCAT13(uStack_24,uStack_28._1_3_);
    *(undefined2 *)((longlong)param_1 + 0x6d) = uStack_23;
    *(undefined1 *)((longlong)param_1 + 0x6f) = uStack_21;
    param_1[10] = uStack_40;
    param_1[0xb] = pbStack_38;
    param_1[8] = uStack_50;
    param_1[9] = CONCAT44(uStack_44,uStack_48);
    param_1[0x1a] = 0;
    param_1[0x1b] = 8;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 8;
    param_1[0x1f] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0x23) = 0;
    param_1[2] = uStack_b8;
    param_1[3] = uStack_b0;
    param_1[4] = uStack_a8;
    param_1[5] = pbStack_a0;
    param_1[6] = uStack_98;
    param_1[7] = CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT14(uStack_8c,uStack_90)));
    param_1[0x20] = 0;
    param_1[0x21] = 8;
    param_1[0x22] = 0;
    param_1[0xe] = uStack_e8;
    param_1[0xf] = uStack_e0;
    param_1[0x10] = uStack_d8;
    param_1[0x11] = pbStack_d0;
    param_1[0x12] = uStack_c8;
    param_1[0x13] = CONCAT17(uStack_b9,CONCAT25(uStack_bb,CONCAT14(uStack_bc,uStack_c0)));
    param_1[0x14] = uStack_88;
    param_1[0x15] = uStack_80;
    param_1[0x16] = uStack_78;
    param_1[0x17] = pbStack_70;
    param_1[0x18] = uStack_68;
    param_1[0x19] = CONCAT17(uStack_59,CONCAT25(uStack_5b,CONCAT14(uStack_5c,uStack_60)));
    *(undefined4 *)(param_1 + 0x25) = 0;
    return param_1;
  }
  pdb_14007ee60();
  pbStack_a0 = pub_1406abab0(0x19,1);
  uVar5 = _UNK_14304dfb1;
  if (pbStack_a0 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x19);
  }
  else {
    *(ulonglong *)(pbStack_a0 + 9) = CONCAT17(UNK_14304dfb0,CONCAT43(_UNK_14304dfac,_DAT_14304dfa9))
    ;
    *(undefined8 *)(pbStack_a0 + 0x11) = uVar5;
    uVar4 = _UNK_14304dfac;
    uVar3 = _UNK_14304dfa8;
    uVar2 = _UNK_14304dfa4;
    *(undefined4 *)pbStack_a0 = _DAT_14304dfa0;
    *(undefined4 *)(pbStack_a0 + 4) = uVar2;
    *(undefined4 *)(pbStack_a0 + 8) = uVar3;
    *(undefined4 *)(pbStack_a0 + 0xc) = uVar4;
    uStack_50 = 0;
    uStack_40 = 0x19;
    uStack_30 = 0x19;
    uStack_28 = CONCAT31(uStack_28._1_3_,2);
    uStack_b8 = 0;
    uStack_b0 = CONCAT44(uStack_44,uStack_48);
    uStack_a8 = 0x19;
    uStack_98 = 0x19;
    uStack_90 = CONCAT31(uStack_28._1_3_,2);
    uStack_8c = uStack_24;
    uStack_8b = uStack_23;
    uStack_89 = uStack_21;
    pbStack_38 = pbStack_a0;
    pdb_14007ee60();
    pbStack_d0 = pub_1406abab0(0x13,1);
    uVar4 = _UNK_14304dfe4;
    uVar3 = _UNK_14304dfe0;
    uVar2 = _UNK_14304dfdc;
    if (pbStack_d0 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x13);
    }
    else {
      *(undefined4 *)pbStack_d0 = _DAT_14304dfd8;
      *(undefined4 *)(pbStack_d0 + 4) = uVar2;
      *(undefined4 *)(pbStack_d0 + 8) = uVar3;
      *(undefined4 *)(pbStack_d0 + 0xc) = uVar4;
      pbStack_d0[0xf] = 0x4d;
      pbStack_d0[0x10] = 0x6f;
      pbStack_d0[0x11] = 100;
      pbStack_d0[0x12] = 0x65;
      uStack_50 = 0;
      uStack_40 = 0x13;
      uStack_30 = 0x13;
      uStack_28 = CONCAT31(uStack_28._1_3_,2);
      uStack_e8 = 0;
      uStack_e0 = CONCAT44(uStack_44,uStack_48);
      uStack_d8 = 0x13;
      uStack_c8 = 0x13;
      uStack_c0 = CONCAT31(uStack_28._1_3_,2);
      uStack_bc = uStack_24;
      uStack_bb = uStack_23;
      uStack_b9 = uStack_21;
      pbStack_38 = pbStack_d0;
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(0x15,1);
      uVar4 = _UNK_14304e014;
      uVar3 = _UNK_14304e010;
      uVar2 = _UNK_14304e00c;
      if (pbVar6 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x15);
      }
      else {
        *(undefined4 *)pbVar6 = _DAT_14304e008;
        *(undefined4 *)(pbVar6 + 4) = uVar2;
        *(undefined4 *)(pbVar6 + 8) = uVar3;
        *(undefined4 *)(pbVar6 + 0xc) = uVar4;
        pbVar6[0xd] = 0x73;
        pbVar6[0xe] = 0x74;
        pbVar6[0xf] = 0x50;
        pbVar6[0x10] = 0x65;
        pbVar6[0x11] = 0x72;
        pbVar6[0x12] = 0x73;
        pbVar6[0x13] = 0x6f;
        pbVar6[0x14] = 0x6e;
        uStack_50 = 0;
        uStack_40 = 0x15;
        uStack_30 = 0x15;
        uStack_28 = CONCAT31(uStack_28._1_3_,2);
        uStack_88 = 0;
        uStack_80 = CONCAT44(uStack_44,uStack_48);
        uStack_78 = 0x15;
        uStack_68 = 0x15;
        uStack_60 = CONCAT31(uStack_28._1_3_,2);
        uStack_5c = uStack_24;
        uStack_5b = uStack_23;
        uStack_59 = uStack_21;
        pbStack_70 = pbVar6;
        pbStack_38 = pbVar6;
        pdb_14007ee60();
        pbVar6 = pub_1406abab0(0x15,1);
        uVar5 = _UNK_14304e040;
        if (pbVar6 != (byte *)0x0) {
          *(undefined8 *)pbVar6 = _DAT_14304e038;
          *(undefined8 *)(pbVar6 + 8) = uVar5;
          pbVar6[0xd] = 0x69;
          pbVar6[0xe] = 99;
          pbVar6[0xf] = 0x46;
          pbVar6[0x10] = 0x61;
          pbVar6[0x11] = 100;
          pbVar6[0x12] = 0x65;
          pbVar6[0x13] = 0x49;
          pbVar6[0x14] = 0x6e;
          uStack_50 = 0;
          uStack_40 = 0x15;
          uStack_30 = 0x15;
          uStack_28 = CONCAT31(uStack_28._1_3_,2);
          pbStack_38 = pbVar6;
          goto LAB_140ad85ac;
        }
        pdb_142dc7e2a(1,0x15);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

