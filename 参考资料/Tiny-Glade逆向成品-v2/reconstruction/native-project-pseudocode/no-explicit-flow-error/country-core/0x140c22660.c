// VA 0x140c22660, PDB extent 257 bytes
// country_core::systems::audio::path_audio::update_draw_audio<country_core::systems::audio::path_audio::path_audio_system::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/path_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::path_audio::update_draw_audio<country_core::systems::audio::path_audio::path_audio_system::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/path_audio.rs
   Extent: 257 */

ulonglong pdb_140c22660(longlong param_1,undefined8 *param_2,float param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  float fVar7;
  undefined8 uStack_b0;
  int iStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  undefined8 uStack_60;
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
  
  if (param_2 == (undefined8 *)0x0) {
    uStack_30 = 0xfffffffffffffffe;
    iStack_a8 = *(int *)(param_1 + 0x20);
    if (iStack_a8 == 1000000000) {
      uVar2 = pdb_140f3c9d0();
      *(ulonglong *)(param_1 + 0x18) = uVar2;
      *(int *)(param_1 + 0x20) = (int)param_2;
    }
    else {
      uStack_b0 = *(undefined8 *)(param_1 + 0x18);
      iVar1 = pdb_140f3cb70(&uStack_b0);
      uVar2 = (ulonglong)(uint)(iVar1 * 1000);
      if (*(uint *)(param_1 + 0x30) <
          (uint)((int)(((ulonglong)param_2 & 0xffffffff) / 1000000) + iVar1 * 1000)) {
        uVar3 = *(ulonglong *)(param_1 + 0x10);
        uVar4 = *(ulonglong *)(param_1 + 0x28);
        if (*(char *)(param_1 + 0x35) == '\0') {
          if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar4,uVar3,&UNK_143043a50);
          }
          if (*(int *)(*(longlong *)(param_1 + 8) + uVar4 * 0x30) == 1) {
            pdb_141808d70(&uStack_a0,*(longlong *)(param_1 + 8) + uVar4 * 0x30 + 8,0);
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
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143044570,0x2b,&uStack_68,&UNK_143044530,&UNK_143043d90);
            }
          }
        }
        else {
          if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar4,uVar3,&UNK_143043a68);
          }
          piVar6 = (int *)(uVar4 * 0x30 + *(longlong *)(param_1 + 8));
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
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143044570,0x2b,&uStack_68,&UNK_143044530,&UNK_143043d90);
            }
          }
        }
        uVar4 = uVar4 + 1;
        if ((uVar4 | uVar3) >> 0x20 == 0) {
          uVar2 = (uVar4 & 0xffffffff) / (uVar3 & 0xffffffff);
          uVar4 = (uVar4 & 0xffffffff) % (uVar3 & 0xffffffff);
        }
        else {
          uVar2 = uVar4 / uVar3;
          uVar4 = uVar4 % uVar3;
        }
        *(ulonglong *)(param_1 + 0x28) = uVar4;
        *(undefined1 *)(param_1 + 0x34) = 0;
        *(undefined4 *)(param_1 + 0x20) = 1000000000;
      }
    }
    return uVar2;
  }
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  if (uVar3 < uVar2) {
    lVar5 = uVar3 * 0x30 + *(longlong *)(param_1 + 8);
    uStack_30 = CONCAT44(uStack_30._4_4_,*(undefined4 *)(param_2 + 1));
    uStack_38 = *param_2;
    uStack_60 = 0x140c226b7;
    pdb_140a8e190(lVar5,&uStack_38);
    uStack_60 = 0x140c226cf;
    pdb_140a8e730(lVar5,&UNK_14306a383,0xd,param_3);
    if (0.0 < param_3) {
      uStack_60 = 0x140c226df;
      pdb_140a87e10(param_1);
    }
    uStack_60 = 0x140c226e7;
    pdb_140a87e10(param_1);
    uStack_60 = 0x140c22701;
    fVar7 = (float)pdb_140de8220(_DAT_14305a490,_DAT_142e37990,
                                 *(undefined4 *)((longlong)param_2 + 0xc));
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    uVar3 = *(ulonglong *)(param_1 + 0x28);
    if (uVar3 < uVar2) {
      uStack_60 = 0x140c22733;
      uVar2 = pdb_140a8e730(uVar3 * 0x30 + *(longlong *)(param_1 + 8),&UNK_14306a390,8,fVar7 + fVar7
                           );
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  uStack_60 = 0x140c22760;
  pdb_142dc81f2(uVar3,uVar2,&UNK_143043a80);
}

