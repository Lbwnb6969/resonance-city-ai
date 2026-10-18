// VA 0x141c25860, PDB extent 682 bytes
// country_core::systems::history::replay_wall::_deprecated_morph_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::history::replay_wall::_deprecated_morph_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
   Extent: 682 */

void pdb_141c25860(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  float param_5)

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
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar14 = param_1;
  if ((param_5 == 0.0) && (!NAN(param_5))) {
    uVar2 = *(ulonglong *)(param_3 + 0x10);
    uVar7 = uVar2 * 8;
    if (uVar7 < 0x7ffffffffffffffd && uVar2 >> 0x3d == 0) {
      uVar14 = *(undefined8 *)(param_3 + 8);
      uStack_60 = param_1;
      if (uVar7 == 0) {
        pbStack_58 = (byte *)0x4;
        uStack_50 = 0;
        uVar3 = uStack_50;
      }
      else {
        pdb_14007ee60();
        uVar13 = 4;
        pbStack_58 = pub_1406abab0(uVar7,4);
        uVar3 = uVar2;
        if (pbStack_58 == (byte *)0x0) goto LAB_141c258c8;
      }
      uStack_50 = uVar3;
      if (uVar2 != 0) {
        pub_142e32760(pbStack_58,uVar14,uVar7);
      }
      uVar3 = *(ulonglong *)(param_3 + 0x28);
      uVar7 = uVar3 * 4;
      if (0x7ffffffffffffffc < uVar7 || uVar3 >> 0x3e != 0) {
        uVar14 = 0;
LAB_141c2596c:
        pdb_142dc7e2a(uVar14,uVar7);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar7 == 0) {
        pbStack_78 = (byte *)0x4;
      }
      else {
        puVar4 = *(undefined4 **)(param_3 + 0x20);
        pdb_14007ee60();
        uVar14 = 4;
        pbStack_78 = pub_1406abab0(uVar7,4);
        if (pbStack_78 == (byte *)0x0) goto LAB_141c2596c;
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
              uVar14 = *(undefined8 *)((longlong)(puVar4 + lVar12) + 8);
              uVar13 = *(undefined8 *)(puVar4 + lVar12 + 4);
              uVar6 = *(undefined8 *)((longlong)(puVar4 + lVar12 + 4) + 8);
              *(undefined8 *)(pbStack_78 + lVar12 * 4) = *(undefined8 *)(puVar4 + lVar12);
              *(undefined8 *)(pbStack_78 + lVar12 * 4 + 8) = uVar14;
              *(undefined8 *)(pbStack_78 + lVar12 * 4 + 0x10) = uVar13;
              *(undefined8 *)(pbStack_78 + lVar12 * 4 + 0x10 + 8) = uVar6;
              lVar12 = lVar12 + 8;
            } while (lVar8 != lVar12);
          }
          pbVar9 = pbStack_78 + lVar8 * 4;
          do {
            if (puVar11 == puVar4 + uVar3) break;
            uVar1 = *puVar11;
            puVar11 = puVar11 + 1;
            *(undefined4 *)pbVar9 = uVar1;
            pbVar9 = pbVar9 + 4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      uStack_68 = *(undefined4 *)(param_3 + 0x30);
      pbStack_90 = pbStack_58;
      uVar14 = uStack_60;
      uStack_98 = uStack_50;
      uStack_88 = uVar2;
      uStack_80 = uVar3;
      uStack_70 = uVar3;
      goto LAB_141c25a9b;
    }
    uVar13 = 0;
LAB_141c258c8:
    pdb_142dc7e2a(uVar13,uVar7);
  }
  pdb_1419a76a0(&uStack_98,param_3,param_4);
LAB_141c25a9b:
  pdb_14092e8e0(param_2,uVar14,&uStack_98);
  return;
}

