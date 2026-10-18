// VA 0x140ad8ae0, PDB extent 3108 bytes
// country_core::systems::audio::music::music_player::MusicPlayer::update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::music::music_player::MusicPlayer::update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/music/music_player.rs
   Extent: 3108 */

void pdb_140ad8ae0(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_79;
  longlong lStack_78;
  char cStack_70;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  iVar3 = 0;
  if ((*param_1 == 1) && ((ulonglong)param_1[1] < (ulonglong)param_1[0x1f])) {
    lVar2 = param_1[1] * 0x30;
    if (*(int *)(param_1[0x1e] + lVar2) == 1) {
      lStack_78 = *(longlong *)(param_1[0x1e] + lVar2 + 8);
      pdb_1418089a0(&lStack_e8,&lStack_78);
      if (lStack_e8 == -0x7ffffffffffffffc) {
        iVar1 = (int)puStack_e0;
      }
      else {
        pdb_140a8f580(&lStack_e8);
        iVar1 = 0;
      }
      iVar3 = 0;
      if (0 < iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  iVar1 = (int)param_1[0x23];
  if (iVar1 != 0) {
    if (iVar3 < (int)param_1[0x25]) {
      _DAT_143cb2c50 = 0;
      *(int *)(param_1 + 0x25) = iVar3;
                    /* WARNING: Could not recover jumptable at 0x000140ad8bb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14304e4c8 + *(int *)(&UNK_14304e4c8 + (ulonglong)(iVar1 - 1) * 4)))();
      return;
    }
    *(int *)(param_1 + 0x25) = iVar3;
                    /* WARNING: Could not recover jumptable at 0x000140ad8c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14304e4c8 + *(int *)(&UNK_14304e4c8 + (ulonglong)(iVar1 - 1) * 4)))();
    return;
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  _DAT_143cb2c50 = 0;
  pdb_140ad7cd0(param_1,param_2);
  lVar2 = *param_1;
  if ((lVar2 == 1) && ((ulonglong)param_1[1] < (ulonglong)param_1[0x1f])) {
    piVar4 = (int *)(param_1[1] * 0x30 + param_1[0x1e]);
    if (((int)param_1[8] == 1) &&
       (pdb_141808ec0(&lStack_78,param_1 + 9), lStack_78 != -0x7ffffffffffffffc)) {
      uStack_b8 = uStack_48;
      lStack_e8 = lStack_78;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_e8,&UNK_143044530,&UNK_143043dc0);
    }
    if ((*piVar4 == 1) && (pdb_141808ec0(&lStack_78,piVar4 + 2), lStack_78 != -0x7ffffffffffffffc))
    {
      uStack_b8 = uStack_48;
      lStack_e8 = lStack_78;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_e8,&UNK_143044530,&UNK_143043dc0);
    }
    param_1[0x23] = 1;
  }
  else {
    if (4 < *_DAT_143ca8e90) {
      lStack_e8 = 0;
      puStack_e0 = &UNK_14304e091;
      uStack_d8 = 0x31;
      uStack_d0 = 0;
      puStack_c8 = &UNK_14304df4c;
      uStack_c0 = 0x3b;
      uStack_b8 = 5;
      puStack_b0 = &UNK_14304e091;
      uStack_a8 = 0x31;
      uStack_a0 = 0x5500000001;
      puStack_98 = &UNK_14304e068;
      uStack_90 = 0x53;
      pdb_140f332f0(&uStack_79,&lStack_e8);
    }
    if (lVar2 == 0) {
      return;
    }
  }
  if ((ulonglong)param_1[1] < (ulonglong)param_1[0x1f]) {
    piVar4 = (int *)(param_1[1] * 0x30 + param_1[0x1e]);
    if (*piVar4 == 1) {
      pdb_141807b50(&lStack_78,piVar4 + 2);
      if (lStack_78 != -0x7ffffffffffffffc) {
        uStack_b8 = uStack_48;
        lStack_e8 = lStack_78;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143044570,0x2b,&lStack_e8,&UNK_143044530,&UNK_143043df0);
      }
      if (cStack_70 != '\x01') {
        return;
      }
      if ((*piVar4 == 1) &&
         (pdb_141807e40(&lStack_78,piVar4 + 2,0), lStack_78 != -0x7ffffffffffffffc)) {
        uStack_b8 = uStack_48;
        lStack_e8 = lStack_78;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143044570,0x2b,&lStack_e8,&UNK_143044530,&UNK_143043dd8);
      }
    }
    if (((int)param_1[2] == 1) &&
       (pdb_141807e40(&lStack_78,param_1 + 3,0), lStack_78 != -0x7ffffffffffffffc)) {
      uStack_b8 = uStack_48;
      lStack_e8 = lStack_78;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_e8,&UNK_143044530,&UNK_143043dd8);
    }
  }
  return;
}

