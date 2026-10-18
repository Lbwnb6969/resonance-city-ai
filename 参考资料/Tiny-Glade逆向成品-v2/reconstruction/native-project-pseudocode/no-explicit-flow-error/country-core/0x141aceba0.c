// VA 0x141aceba0, PDB extent 1659 bytes
// country_core::systems::audio::game_loading_audio::loading_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/game_loading_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::game_loading_audio::loading_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/game_loading_audio.rs
   Extent: 1659 */

void pdb_141aceba0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  float fVar16;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined8 uStack_78;
  longlong lStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puVar1 = (ulonglong *)*param_3;
  lVar2 = param_3[1];
  uVar3 = *puVar1;
  uVar12 = 0;
  uVar13 = uVar3 - *(ulonglong *)(lVar2 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x18)) {
    uVar13 = uVar12;
  }
  uVar8 = uVar3 - *(ulonglong *)(lVar2 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x38)) {
    uVar8 = uVar12;
  }
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  uVar14 = uVar3 - uVar8;
  if (uVar3 < uVar8) {
    uVar14 = uVar12;
  }
  uVar4 = *(ulonglong *)(lVar2 + 0x10);
  uVar9 = uVar4 - uVar13;
  if (uVar4 < uVar13) {
    uVar9 = uVar12;
  }
  uVar12 = *(ulonglong *)(lVar2 + 0x40);
  *puVar1 = uVar12 - (uVar9 + uVar14);
  if (uVar4 >= uVar13 && uVar4 - uVar13 != 0 || uVar3 >= uVar8 && uVar3 - uVar8 != 0) {
    *puVar1 = uVar12;
    if (*(longlong *)*param_1 == 0) {
      pdb_14007ee60();
      pbStack_90 = pub_1406abab0(0x11,1);
      uVar7 = _UNK_143387944;
      uVar6 = _UNK_143387940;
      uVar11 = _UNK_14338793c;
      if (pbStack_90 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x11);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)pbStack_90 = _DAT_143387938;
      *(undefined4 *)(pbStack_90 + 4) = uVar11;
      *(undefined4 *)(pbStack_90 + 8) = uVar6;
      *(undefined4 *)(pbStack_90 + 0xc) = uVar7;
      pbStack_90[0x10] = 0x67;
      lStack_a8 = 0;
      uStack_98 = 0x11;
      uStack_88 = 0x11;
      uStack_80 = CONCAT31(uStack_80._1_3_,2);
    }
    else {
      pdb_140a8b180(&lStack_a8,*(longlong *)*param_1 + 0x10,&DAT_143387938,0x11);
      if ((int)lStack_a8 == 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143388100,0x2b,&lStack_e0,&UNK_1433880e0,&UNK_143387988);
      }
    }
    lStack_48 = uStack_88;
    uStack_40 = CONCAT17(uStack_79,
                         CONCAT25(uStack_7b,
                                  CONCAT41(CONCAT13(uStack_7c,uStack_80._1_3_),(undefined1)uStack_80
                                          )));
    uStack_58 = uStack_98;
    pbStack_50 = pbStack_90;
    lStack_68 = lStack_a8;
    if (lStack_a8 == 1) {
      pdb_141808ec0(&lStack_e0,&lStack_60);
      if (lStack_e0 != -0x7ffffffffffffffc) {
        uStack_78 = uStack_b0;
        uStack_80 = uStack_b8;
        uStack_7c = (undefined1)uStack_b4;
        uStack_7b = (undefined2)((uint)uStack_b4 >> 8);
        uStack_79 = (undefined1)((uint)uStack_b4 >> 0x18);
        uStack_a0 = uStack_d8;
        uStack_9c = uStack_d4;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143044570,0x2b,&lStack_a8,&UNK_143044530,&UNK_143043dc0);
      }
    }
    pdb_1409a5ed0(&lStack_68);
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_50,uStack_58,1);
    }
  }
  puVar1 = (ulonglong *)*param_4;
  lVar2 = param_4[1];
  uVar3 = *puVar1;
  uVar12 = 0;
  uVar13 = uVar3 - *(ulonglong *)(lVar2 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x18)) {
    uVar13 = uVar12;
  }
  uVar8 = uVar3 - *(ulonglong *)(lVar2 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar2 + 0x38)) {
    uVar8 = uVar12;
  }
  uVar3 = *(ulonglong *)(lVar2 + 0x30);
  uVar14 = uVar3 - uVar8;
  if (uVar8 > uVar3) {
    uVar14 = uVar12;
  }
  uVar4 = *(ulonglong *)(lVar2 + 0x10);
  uVar9 = uVar4 - uVar13;
  if (uVar13 > uVar4) {
    uVar9 = uVar12;
  }
  uVar12 = *(ulonglong *)(lVar2 + 0x40);
  *puVar1 = uVar12 - (uVar9 + uVar14);
  if (uVar13 <= uVar4 && uVar4 - uVar13 != 0 || uVar8 <= uVar3 && uVar3 - uVar8 != 0) {
    *puVar1 = uVar12;
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar15 = (undefined4 *)param_2[2];
    *puVar15 = uVar11;
    plVar10 = (longlong *)*param_2;
    lStack_68 = *plVar10;
    *plVar10 = 2;
    if (lStack_68 != 2) {
      lStack_60 = plVar10[1];
      uStack_58 = plVar10[2];
      pbStack_50 = (byte *)plVar10[3];
      lStack_48 = plVar10[4];
      uStack_40 = plVar10[5];
      if (lStack_68 == 1) {
        pdb_141808d70(&lStack_e0,&lStack_60,0);
        if (lStack_e0 != -0x7ffffffffffffffc) {
          uStack_78 = uStack_b0;
          uStack_80 = uStack_b8;
          uStack_7c = (undefined1)uStack_b4;
          uStack_7b = (undefined2)((uint)uStack_b4 >> 8);
          uStack_79 = (undefined1)((uint)uStack_b4 >> 0x18);
          uStack_a0 = uStack_d8;
          uStack_9c = uStack_d4;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143044570,0x2b,&lStack_a8,&UNK_143044530,&UNK_143043d90);
        }
      }
      pdb_1409a5ed0(&lStack_68);
      if (uStack_58 != 0) {
        pub_1406abac0(pbStack_50,uStack_58,1);
      }
    }
  }
  else {
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
    plVar10 = (longlong *)*param_2;
    puVar15 = (undefined4 *)param_2[2];
  }
  *puVar15 = uVar11;
  if ((char)plVar10[6] != '\0') {
    fVar16 = *(float *)(*param_5 + 0x28) + *(float *)((longlong)plVar10 + 0x34);
    *(float *)((longlong)plVar10 + 0x34) = fVar16;
    if (_DAT_142e36f28 < fVar16) {
      *puVar15 = uVar11;
      lStack_68 = *plVar10;
      *plVar10 = 2;
      if (lStack_68 != 2) {
        lStack_60 = plVar10[1];
        uStack_58 = plVar10[2];
        pbStack_50 = (byte *)plVar10[3];
        lStack_48 = plVar10[4];
        uStack_40 = plVar10[5];
        if (lStack_68 == 1) {
          pdb_141808d70(&lStack_e0,&lStack_60,0);
          if (lStack_e0 != -0x7ffffffffffffffc) {
            uStack_78 = uStack_b0;
            uStack_80 = uStack_b8;
            uStack_7c = (undefined1)uStack_b4;
            uStack_7b = (undefined2)((uint)uStack_b4 >> 8);
            uStack_79 = (undefined1)((uint)uStack_b4 >> 0x18);
            uStack_a0 = uStack_d8;
            uStack_9c = uStack_d4;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143044570,0x2b,&lStack_a8,&UNK_143044530,&UNK_143043d90);
          }
        }
        pdb_1409a5ed0(&lStack_68);
        if (uStack_58 != 0) {
          pub_1406abac0(pbStack_50,uStack_58,1);
        }
      }
      *puVar15 = uVar11;
      *(undefined4 *)(plVar10 + 6) = 0;
    }
  }
  return;
}

