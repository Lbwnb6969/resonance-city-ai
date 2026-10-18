// VA 0x140ad7740, PDB extent 1415 bytes
// country_core::systems::audio::music::music_player::MusicPlayer::load_tracks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::music::music_player::MusicPlayer::load_tracks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
   Extent: 1415 */

void pdb_140ad7740(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined2 uStack_9b;
  undefined1 uStack_99;
  ulonglong uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  longlong lStack_60;
  longlong lStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar11 = *(longlong *)(param_1 + 0xf0);
  lVar8 = *(longlong *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (lVar8 != 0) {
    lVar8 = 1 - lVar8;
    do {
      lStack_60 = lVar11 + 0x30;
      lStack_58 = lVar8;
      pdb_1409a5ed0(lVar11);
      lVar11 = lStack_60;
      if (*(ulonglong *)(lStack_60 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(lStack_60 + -0x18),*(ulonglong *)(lStack_60 + -0x20),1);
      }
      lVar8 = lStack_58 + 1;
    } while (lVar8 != 1);
  }
  lVar8 = *(longlong *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (lVar8 != 0) {
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0xd8) + 8);
    do {
      if (puVar10[-1] != 0) {
        pub_1406abac0((byte *)*puVar10,puVar10[-1],1);
      }
      puVar10 = puVar10 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  lVar8 = param_3 + param_4 * 0x18;
  lVar11 = *param_2;
  lStack_58 = lVar11 + 0x10;
joined_r0x000140ad784f:
  do {
    if (param_3 == lVar8) {
      *(undefined4 *)(param_1 + 0x118) = 0;
      return;
    }
    uVar3 = *(undefined8 *)(param_3 + 8);
    uVar4 = *(ulonglong *)(param_3 + 0x10);
    if (lVar11 == 0) {
      if ((longlong)uVar4 < 0) {
        uVar12 = 0;
LAB_140ad7abe:
        pdb_142dc7e2a(uVar12,uVar4);
LAB_140ad7ac9:
        uStack_d0 = CONCAT44(uStack_8c,uStack_90);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14304e398,0x2b,&uStack_d0,&UNK_14304e378,&UNK_14304df88);
      }
      lStack_60 = lVar11;
      if (uVar4 == 0) {
        pbVar7 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar12 = 1;
        pbVar7 = pub_1406abab0(uVar4,1);
        if (pbVar7 == (byte *)0x0) goto LAB_140ad7abe;
        pub_142e32760(pbVar7,uVar3,uVar4);
      }
      uStack_98 = 0;
      uStack_70 = CONCAT31(uStack_70._1_3_,2);
      lVar11 = lStack_60;
      uStack_88 = uVar4;
      pbStack_80 = pbVar7;
      uStack_78 = uVar4;
    }
    else {
      pdb_140a8b180(&uStack_98,lStack_58,uVar3,uVar4);
      if ((int)uStack_98 == 2) goto LAB_140ad7ac9;
    }
    uStack_c0 = CONCAT44(uStack_8c,uStack_90);
    uStack_a8 = uStack_78;
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    uStack_9b = uStack_6b;
    uStack_99 = uStack_69;
    uStack_b8 = uStack_88;
    uStack_b0 = pbStack_80;
    uStack_c8 = uStack_98;
    if ((uStack_98 & 1) != 0) {
      uStack_49 = 1;
      pdb_141a16b90(&uStack_98,&uStack_c0,pdb_140ad9710,0x1000);
      uVar4 = uStack_98;
      pdb_140ad9810(&uStack_98);
      if (uVar4 == 0x8000000000000004) {
        uStack_78 = uStack_a8;
        uStack_70 = uStack_a0;
        uStack_6c = uStack_9c;
        uStack_6b = uStack_9b;
        uStack_69 = uStack_99;
        uStack_88 = uStack_b8;
        pbStack_80 = uStack_b0;
        uStack_98 = uStack_c8;
        uStack_90 = (undefined4)uStack_c0;
        uStack_8c = uStack_c0._4_4_;
        lVar5 = *(longlong *)(param_1 + 0xf8);
        if (lVar5 == *(longlong *)(param_1 + 0xe8)) {
          pdb_142d7e7c0(param_1 + 0xe8);
        }
        lVar6 = *(longlong *)(param_1 + 0xf0);
        lVar9 = lVar5 * 0x30;
        puVar2 = (undefined4 *)(lVar6 + 0x20 + lVar9);
        *puVar2 = (undefined4)uStack_a8;
        puVar2[1] = uStack_a8._4_4_;
        puVar2[2] = uStack_a0;
        puVar2[3] = CONCAT13(uStack_99,CONCAT21(uStack_9b,uStack_9c));
        puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar9);
        *puVar2 = (undefined4)uStack_b8;
        puVar2[1] = uStack_b8._4_4_;
        puVar2[2] = (undefined4)uStack_b0;
        puVar2[3] = uStack_b0._4_4_;
        puVar2 = (undefined4 *)(lVar6 + lVar9);
        *puVar2 = (undefined4)uStack_c8;
        puVar2[1] = uStack_c8._4_4_;
        puVar2[2] = (undefined4)uStack_c0;
        puVar2[3] = uStack_c0._4_4_;
        *(longlong *)(param_1 + 0xf8) = lVar5 + 1;
        uStack_49 = 0;
        pdb_140f60be0(&uStack_98,param_3);
        lVar5 = *(longlong *)(param_1 + 0xe0);
        if (lVar5 == *(longlong *)(param_1 + 0xd0)) {
          pdb_142d895b0(param_1 + 0xd0);
        }
        lVar6 = *(longlong *)(param_1 + 0xd8);
        *(ulonglong *)(lVar6 + 0x10 + lVar5 * 0x18) = uStack_88;
        puVar1 = (ulonglong *)(lVar6 + lVar5 * 0x18);
        *puVar1 = uStack_98;
        puVar1[1] = CONCAT44(uStack_8c,uStack_90);
        *(longlong *)(param_1 + 0xe0) = lVar5 + 1;
        param_3 = param_3 + 0x18;
        goto joined_r0x000140ad784f;
      }
    }
    pdb_1409a5ed0(&uStack_c8);
    if (uStack_b8 != 0) {
      pub_1406abac0(uStack_b0,uStack_b8,1);
    }
    param_3 = param_3 + 0x18;
  } while( true );
}

