// VA 0x140c22770, PDB extent 341 bytes
// country_core::systems::audio::path_audio::update_draw_audio<country_core::systems::audio::path_audio::path_audio_system::closure_env$5>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/path_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::path_audio::update_draw_audio<country_core::systems::audio::path_audio::path_audio_system::closure_env$5>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/path_audio.rs
   Extent: 341 */

ulonglong pdb_140c22770(longlong param_1,undefined8 *param_2,float param_3,longlong *param_4)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  float fVar10;
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
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar5 = *(ulonglong *)(param_1 + 0x10);
    uVar6 = *(ulonglong *)(param_1 + 0x28);
    if (uVar6 < uVar5) {
      lVar8 = uVar6 * 0x30 + *(longlong *)(param_1 + 8);
      uStack_40 = *(undefined4 *)(param_2 + 1);
      uStack_48 = *param_2;
      uStack_70 = 0x140c227cc;
      pdb_140a8e190(lVar8,&uStack_48);
      uStack_70 = 0x140c227e4;
      pdb_140a8e730(lVar8,&UNK_14306a383,0xd,param_3);
      lVar2 = *param_4;
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x14) == '\x01')) {
        bVar1 = *(byte *)(lVar2 + 0x15);
        bVar3 = 1;
        if (bVar1 != 2) {
          bVar3 = bVar1;
        }
        fVar10 = _DAT_142e37830;
        if (bVar1 != 1) {
          fVar10 = (float)bVar3;
        }
        uStack_70 = 0x140c22845;
        pdb_140a8e730(lVar8,&UNK_14306a370,0x13,fVar10);
      }
      if (0.0 < param_3) {
        uStack_70 = 0x140c22855;
        pdb_140a87e10(param_1);
      }
      uStack_70 = 0x140c2285d;
      pdb_140a87e10(param_1);
      uStack_70 = 0x140c22877;
      fVar10 = (float)pdb_140de8220(_DAT_14305a490,_DAT_142e37990,
                                    *(undefined4 *)((longlong)param_2 + 0xc));
      uVar5 = *(ulonglong *)(param_1 + 0x10);
      uVar6 = *(ulonglong *)(param_1 + 0x28);
      if (uVar6 < uVar5) {
        uStack_70 = 0x140c228a9;
        uVar5 = pdb_140a8e730(uVar6 * 0x30 + *(longlong *)(param_1 + 8),&UNK_14306a390,8,
                              fVar10 + fVar10);
        return uVar5;
      }
    }
                    /* WARNING: Subroutine does not return */
    uStack_70 = 0x140c228c4;
    pdb_142dc81f2(uVar6,uVar5,&UNK_143043a80);
  }
  uStack_30 = 0xfffffffffffffffe;
  iStack_a8 = *(int *)(param_1 + 0x20);
  if (iStack_a8 == 1000000000) {
    uVar5 = pdb_140f3c9d0();
    *(ulonglong *)(param_1 + 0x18) = uVar5;
    *(int *)(param_1 + 0x20) = (int)param_2;
  }
  else {
    uStack_b0 = *(undefined8 *)(param_1 + 0x18);
    iVar4 = pdb_140f3cb70(&uStack_b0);
    uVar5 = (ulonglong)(uint)(iVar4 * 1000);
    if (*(uint *)(param_1 + 0x30) <
        (uint)((int)(((ulonglong)param_2 & 0xffffffff) / 1000000) + iVar4 * 1000)) {
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      uVar7 = *(ulonglong *)(param_1 + 0x28);
      if (*(char *)(param_1 + 0x35) == '\0') {
        if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar7,uVar6,&UNK_143043a50);
        }
        if ((*(int *)(*(longlong *)(param_1 + 8) + uVar7 * 0x30) == 1) &&
           (pdb_141808d70(&uStack_a0,*(longlong *)(param_1 + 8) + uVar7 * 0x30 + 8,0),
           CONCAT44(uStack_9c,uStack_a0) != -0x7ffffffffffffffc)) {
          uStack_38 = uStack_70;
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
      else {
        if (uVar6 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar7,uVar6,&UNK_143043a68);
        }
        piVar9 = (int *)(uVar7 * 0x30 + *(longlong *)(param_1 + 8));
        pdb_140a8e730(piVar9,&UNK_143043a00,4,0);
        if (((*(char *)(param_1 + 0x36) == '\x01') && (*piVar9 == 1)) &&
           (pdb_141808d70(&uStack_a0,piVar9 + 2,0),
           CONCAT44(uStack_9c,uStack_a0) != -0x7ffffffffffffffc)) {
          uStack_38 = uStack_70;
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
      uVar7 = uVar7 + 1;
      if ((uVar7 | uVar6) >> 0x20 == 0) {
        uVar5 = (uVar7 & 0xffffffff) / (uVar6 & 0xffffffff);
        uVar7 = (uVar7 & 0xffffffff) % (uVar6 & 0xffffffff);
      }
      else {
        uVar5 = uVar7 / uVar6;
        uVar7 = uVar7 % uVar6;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar7;
      *(undefined1 *)(param_1 + 0x34) = 0;
      *(undefined4 *)(param_1 + 0x20) = 1000000000;
    }
  }
  return uVar5;
}

