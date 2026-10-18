// VA 0x140b73750, PDB extent 930 bytes
// country_core::systems::wall::shapes::rectangle::signifier_edit_dims_line::signifier_edit_dims::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/signifier_edit_dims_line.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::signifier_edit_dims_line::signifier_edit_dims::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/signifier_edit_dims_line.rs
   Extent: 930 */

undefined8 *
pdb_140b73750(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 auStack_120 [5];
  ulonglong uStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined2 uStack_74;
  undefined1 uStack_72;
  byte *pbStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_60 = pub_1406abab0(8,8);
  if (pbStack_60 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uStack_7c = *(undefined4 *)(param_2 + 0x40);
  uStack_84 = *(undefined8 *)(param_2 + 0x38);
  uStack_f8 = 0x8000000000000001;
  uStack_c8 = _DAT_142e4e650;
  uStack_c0 = _UNK_142e4e658;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0x4040000000000000;
  uStack_98 = 1;
  uStack_90 = 0x101;
  uStack_8c = _DAT_14305b610;
  uStack_78 = 0x3f800000;
  uStack_74 = 0;
  uStack_72 = 0;
  pdb_1409bba50(auStack_120,&uStack_f8,param_3,param_4,param_5);
  uVar2 = *(ulonglong *)(param_2 + 0x10);
  uVar7 = uVar2 * 8;
  if (uVar7 < 0x7ffffffffffffffd && uVar2 >> 0x3d == 0) {
    uVar13 = *(undefined8 *)(param_2 + 8);
    if (uVar7 == 0) {
      pbStack_50 = (byte *)0x4;
      uStack_58 = 0;
      uVar3 = uStack_58;
    }
    else {
      pdb_14007ee60();
      uVar14 = 4;
      pbStack_50 = pub_1406abab0(uVar7,4);
      uVar3 = uVar2;
      if (pbStack_50 == (byte *)0x0) goto LAB_140b73866;
    }
    uStack_58 = uVar3;
    if (uVar2 != 0) {
      pub_142e32760(pbStack_50,uVar13,uVar7);
    }
    uVar3 = *(ulonglong *)(param_2 + 0x28);
    uVar7 = uVar3 * 4;
    if (uVar7 < 0x7ffffffffffffffd && uVar3 >> 0x3e == 0) {
      if (uVar7 == 0) {
        pbStack_d8 = (byte *)0x4;
LAB_140b739db:
        uStack_f8 = uStack_58;
        pbStack_f0 = pbStack_50;
        uStack_c8 = CONCAT44(uStack_c8._4_4_,*(undefined4 *)(param_2 + 0x30));
        uStack_e8 = uVar2;
        uStack_e0 = uVar3;
        uStack_d0 = uVar3;
        pdb_141617640(auStack_120,&uStack_f8,&UNK_14305b930);
        *(undefined8 *)pbStack_60 = auStack_120[0];
        *param_1 = 1;
        param_1[1] = pbStack_60;
        param_1[2] = 1;
        return param_1;
      }
      puVar4 = *(undefined4 **)(param_2 + 0x20);
      pdb_14007ee60();
      uVar13 = 4;
      pbStack_d8 = pub_1406abab0(uVar7,4);
      if (pbStack_d8 != (byte *)0x0) {
        if (uVar3 != 0) {
          uVar7 = uVar3 - 1;
          if (uVar3 < uVar3 - 1) {
            uVar7 = uVar3;
          }
          if (uVar7 < 8) {
            lVar8 = 0;
            uVar7 = uVar3;
            puVar11 = puVar4;
          }
          else {
            uVar7 = uVar7 + 1;
            uVar10 = 8;
            if ((uVar7 & 7) != 0) {
              uVar10 = (ulonglong)((uint)uVar7 & 7);
            }
            lVar8 = uVar7 - uVar10;
            uVar7 = uVar3 - lVar8;
            puVar11 = puVar4 + lVar8;
            lVar12 = 0;
            do {
              uVar13 = *(undefined8 *)((longlong)(puVar4 + lVar12) + 8);
              uVar14 = *(undefined8 *)(puVar4 + lVar12 + 4);
              uVar6 = *(undefined8 *)((longlong)(puVar4 + lVar12 + 4) + 8);
              *(undefined8 *)(pbStack_d8 + lVar12 * 4) = *(undefined8 *)(puVar4 + lVar12);
              *(undefined8 *)(pbStack_d8 + lVar12 * 4 + 8) = uVar13;
              *(undefined8 *)(pbStack_d8 + lVar12 * 4 + 0x10) = uVar14;
              *(undefined8 *)(pbStack_d8 + lVar12 * 4 + 0x10 + 8) = uVar6;
              lVar12 = lVar12 + 8;
            } while (lVar8 != lVar12);
          }
          pbVar9 = pbStack_d8 + lVar8 * 4;
          do {
            if (puVar11 == puVar4 + uVar3) break;
            uVar1 = *puVar11;
            puVar11 = puVar11 + 1;
            *(undefined4 *)pbVar9 = uVar1;
            pbVar9 = pbVar9 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        goto LAB_140b739db;
      }
    }
    else {
      uVar13 = 0;
    }
    pdb_142dc7e2a(uVar13,uVar7);
  }
  else {
    uVar14 = 0;
LAB_140b73866:
    pdb_142dc7e2a(uVar14,uVar7);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

