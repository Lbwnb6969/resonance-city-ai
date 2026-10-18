// VA 0x140a87f70, PDB extent 635 bytes
// country_core::utils::audio_utils::AudioLoop::stop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/audio_utils.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::audio_utils::AudioLoop::stop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/audio_utils.rs
   Extent: 635 */

ulonglong pdb_140a87f70(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int *piVar6;
  undefined8 uStack_b0;
  int iStack_a8;
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
  undefined8 uStack_30;
  
  uVar4 = (undefined4)param_2;
  uStack_30 = 0xfffffffffffffffe;
  iStack_a8 = *(int *)(param_1 + 0x20);
  if (iStack_a8 == 1000000000) {
    uVar3 = pdb_140f3c9d0();
    *(ulonglong *)(param_1 + 0x18) = uVar3;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
  }
  else {
    uStack_b0 = *(undefined8 *)(param_1 + 0x18);
    iVar2 = pdb_140f3cb70(&uStack_b0);
    uVar3 = (ulonglong)(uint)(iVar2 * 1000);
    if (*(uint *)(param_1 + 0x30) < (uint)((int)((param_2 & 0xffffffff) / 1000000) + iVar2 * 1000))
    {
      uVar1 = *(ulonglong *)(param_1 + 0x10);
      uVar5 = *(ulonglong *)(param_1 + 0x28);
      if (*(char *)(param_1 + 0x35) == '\0') {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar5,uVar1,&UNK_143043a50);
        }
        if (*(int *)(*(longlong *)(param_1 + 8) + uVar5 * 0x30) == 1) {
          pdb_141808d70(&uStack_a0,*(longlong *)(param_1 + 8) + uVar5 * 0x30 + 8,0);
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
            pdb_142dc8170(&UNK_143044570,0x2b,&uStack_68,&UNK_143044530,&UNK_143043d90);
          }
        }
      }
      else {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar5,uVar1,&UNK_143043a68);
        }
        piVar6 = (int *)(uVar5 * 0x30 + *(longlong *)(param_1 + 8));
        pdb_140a8e730(piVar6,&UNK_143043a00,4,0);
        if ((*(char *)(param_1 + 0x36) == '\x01') && (*piVar6 == 1)) {
          pdb_141808d70(&uStack_a0,piVar6 + 2,0);
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
            pdb_142dc8170(&UNK_143044570,0x2b,&uStack_68,&UNK_143044530,&UNK_143043d90);
          }
        }
      }
      uVar5 = uVar5 + 1;
      if ((uVar5 | uVar1) >> 0x20 == 0) {
        uVar3 = (uVar5 & 0xffffffff) / (uVar1 & 0xffffffff);
        uVar5 = (uVar5 & 0xffffffff) % (uVar1 & 0xffffffff);
      }
      else {
        uVar3 = uVar5 / uVar1;
        uVar5 = uVar5 % uVar1;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar5;
      *(undefined1 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x20) = 1000000000;
    }
  }
  return uVar3;
}

