// VA 0x140a87c40, PDB extent 459 bytes
// country_core::resources::audio_resources::AudioCore::instantiate_loop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/audio_utils.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioCore::instantiate_loop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/audio_utils.rs
   Extent: 459 */

longlong * pdb_140a87c40(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int *piVar3;
  bool bVar4;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  longlong lStack_70;
  int **ppiStack_68;
  longlong lStack_58;
  int *piStack_50;
  longlong lStack_48;
  int *piStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lStack_70 = *(longlong *)(param_3 + 4) + 1;
  uStack_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  piStack_40 = (int *)0x0;
  uStack_78 = 0;
  ppiStack_68 = &piStack_40;
  uStack_31 = 1;
  lStack_90 = param_2;
  pdb_1415f8780(&lStack_58,&lStack_90);
  piVar3 = piStack_40;
  if (piStack_40 == (int *)0x0) {
    if (!SBORROW8(0,lStack_58)) {
      if (lStack_48 != 0) {
        if (*piStack_50 == 1) {
          pdb_141808720(&lStack_90,piStack_50 + 2,&UNK_143043a00,4);
          lVar2 = lStack_90;
          if (lStack_90 != -0x7ffffffffffffffc) {
            pdb_140a8f580(&lStack_90);
          }
          bVar4 = lVar2 == -0x7ffffffffffffffc;
        }
        else {
          bVar4 = false;
        }
        param_1[2] = lStack_48;
        *param_1 = lStack_58;
        param_1[1] = (longlong)piStack_50;
        uVar1 = param_3[6];
        *(undefined4 *)(param_1 + 4) = 1000000000;
        param_1[5] = 0;
        *(undefined4 *)(param_1 + 6) = uVar1;
        *(undefined1 *)((longlong)param_1 + 0x34) = 0;
        *(bool *)((longlong)param_1 + 0x35) = bVar4;
        *(undefined1 *)((longlong)param_1 + 0x36) = 0;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1430439e8);
    }
  }
  else {
    uStack_31 = 0;
    pdb_1409a4f60(&lStack_58);
    piStack_50 = piVar3;
  }
  param_1[1] = (longlong)piStack_50;
  *param_1 = -0x8000000000000000;
  return param_1;
}

