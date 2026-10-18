// VA 0x140a87e10, PDB extent 343 bytes
// country_core::utils::audio_utils::AudioLoop::start_if_not_playing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/audio_utils.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::audio_utils::AudioLoop::start_if_not_playing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/audio_utils.rs
   Extent: 343 */

void pdb_140a87e10(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 0x20) = 1000000000;
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x35) != '\0') {
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar2,uVar1,&UNK_143043a20);
      }
      pdb_140a8e730(uVar2 * 0x30 + *(longlong *)(param_1 + 8),&UNK_143043a00,4,_DAT_142e36f28);
    }
    if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar2,uVar1,&UNK_143043a38);
    }
    if (*(int *)(*(longlong *)(param_1 + 8) + uVar2 * 0x30) == 1) {
      pdb_141808ec0(&uStack_a0,*(longlong *)(param_1 + 8) + uVar2 * 0x30 + 8);
      if (CONCAT44(uStack_9c,uStack_a0) != -0x7ffffffffffffffc) {
        uStack_38 = uStack_70;
        uStack_48 = uStack_80;
        uStack_44 = uStack_7c;
        uStack_40 = uStack_78;
        uStack_3c = uStack_74;
        uStack_58 = uStack_90;
        uStack_54 = uStack_8c;
        uStack_50 = uStack_88;
        uStack_4c = uStack_84;
        uStack_68 = uStack_a0;
        uStack_64 = uStack_9c;
        uStack_60 = uStack_98;
        uStack_5c = uStack_94;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143044570,0x2b,&uStack_68,&UNK_143044530,&UNK_143043dc0);
      }
    }
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  return;
}

