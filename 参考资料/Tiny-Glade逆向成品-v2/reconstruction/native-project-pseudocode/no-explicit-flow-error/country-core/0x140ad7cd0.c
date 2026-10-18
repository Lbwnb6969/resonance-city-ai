// VA 0x140ad7cd0, PDB extent 518 bytes
// country_core::systems::audio::music::music_player::MusicPlayer::switch_track
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::music::music_player::MusicPlayer::switch_track
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
   Extent: 518 */

void pdb_140ad7cd0(longlong *param_1)

{
  ulonglong arg0;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  byte *pbStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar7 = param_1[0x22];
  if (uVar7 == 0) {
    uVar7 = param_1[0x1f];
    if (uVar7 == 0) {
      lVar5 = param_1[0x20];
      pbVar9 = (byte *)0x8;
    }
    else {
      pbVar9 = (byte *)*param_1;
      lVar5 = param_1[1];
      arg0 = uVar7 * 8;
      pdb_14007ee60();
      pbStack_58 = pub_1406abab0(arg0,8);
      lVar4 = _UNK_142e4ffa8;
      lVar3 = _DAT_142e4ffa0;
      lVar2 = _UNK_142e4ff98;
      lVar1 = _DAT_142e4ff90;
      if (pbStack_58 == (byte *)0x0) {
        pdb_142dc7e2a(8,arg0);
        goto LAB_140ad7dcf;
      }
      if (3 < uVar7) {
        uVar8 = uVar7 & 0x3fffffffffffffc;
        uVar6 = 0;
        lVar10 = _DAT_142e4ff80;
        lVar11 = _UNK_142e4ff88;
        do {
          *(longlong *)(pbStack_58 + uVar6) = lVar10;
          *(longlong *)(pbStack_58 + uVar6 + 8) = lVar11;
          *(longlong *)(pbStack_58 + uVar6 + 0x10) = lVar10 + lVar1;
          *(longlong *)(pbStack_58 + uVar6 + 0x10 + 8) = lVar11 + lVar2;
          lVar10 = lVar10 + lVar3;
          lVar11 = lVar11 + lVar4;
          uVar6 = uVar6 + 0x20;
          if ((arg0 & 0xffffffffffffffe0) == uVar6) goto LAB_140ad7dff;
        } while( true );
      }
      uVar8 = 0;
      do {
        *(ulonglong *)(pbStack_58 + uVar8 * 8) = uVar8;
        uVar8 = uVar8 + 1;
LAB_140ad7dff:
      } while (uVar7 != uVar8);
      uStack_50 = uVar7;
      uStack_48 = arg0;
      pbStack_40 = pbStack_58;
      in_RAX = pdb_1416f5df0(&UNK_14304e488,&pbStack_58);
      if (pbVar9 == (byte *)0x0) {
        lVar5 = param_1[0x20];
        pbVar9 = pbStack_40;
      }
      else {
        if (*(longlong *)pbStack_40 == lVar5) {
          in_RAX = uVar7 & 0xfffffffffffffffe;
          *(longlong *)pbStack_40 = *(longlong *)(pbStack_40 + in_RAX * 4);
          *(longlong *)(pbStack_40 + in_RAX * 4) = lVar5;
        }
        lVar5 = param_1[0x20];
        pbVar9 = pbStack_40;
      }
    }
    if (lVar5 != 0) {
      pub_1406abac0((byte *)param_1[0x21],lVar5 << 3,8);
      in_RAX = extraout_RAX;
    }
    param_1[0x20] = uVar7;
    param_1[0x21] = (longlong)pbVar9;
    param_1[0x22] = uVar7;
    if (uVar7 == 0) {
      lVar5 = 0;
      goto LAB_140ad7de4;
    }
  }
  else {
    pbVar9 = (byte *)param_1[0x21];
  }
LAB_140ad7dcf:
  param_1[0x22] = uVar7 - 1;
  in_RAX = *(ulonglong *)(pbVar9 + uVar7 * 8 + -8);
  lVar5 = 1;
LAB_140ad7de4:
  *param_1 = lVar5;
  param_1[1] = in_RAX;
  return;
}

