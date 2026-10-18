// VA 0x140a1a490, PDB extent 857 bytes
// country_core::resources::history::wall_compound_edit::CompoundEditBuilder::wall_deleted
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/deferred_wall_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::wall_compound_edit::CompoundEditBuilder::wall_deleted
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/deferred_wall_history.rs
   Extent: 857 */

void pdb_140a1a490(undefined8 param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  byte *pbVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uStack_198;
  ulonglong uStack_190;
  byte *pbStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  byte *pbStack_170;
  ulonglong uStack_168;
  undefined4 uStack_160;
  uint uStack_158;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  ulonglong uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined4 uStack_64;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar4 = *(ulonglong *)(param_3 + 0x10);
  uVar16 = uVar4 * 8;
  if (uVar16 < 0x7ffffffffffffffd && uVar4 >> 0x3d == 0) goto LAB_140a1a4fa;
  uVar17 = 0;
  do {
    param_1 = uVar17;
    param_2 = uVar16;
    pdb_142dc7e2a(param_1);
LAB_140a1a4fa:
    uStack_64 = (undefined4)param_4;
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    uVar5 = *(undefined8 *)(param_3 + 8);
    uStack_78 = param_2;
    if (uVar16 == 0) {
      pbStack_70 = (byte *)0x4;
      uStack_80 = 0;
      if (uVar4 == 0) goto LAB_140a1a55f;
      goto LAB_140a1a54d;
    }
    pdb_14007ee60();
    pbStack_70 = pub_1406abab0(uVar16,4);
    uVar17 = 4;
  } while (pbStack_70 == (byte *)0x0);
  uStack_80 = uVar4;
  if (uVar4 != 0) {
LAB_140a1a54d:
    pub_142e32760(pbStack_70,uVar5,uVar16);
  }
LAB_140a1a55f:
  uVar6 = *(ulonglong *)(param_3 + 0x28);
  uVar16 = uVar6 * 4;
  if (uVar16 < 0x7ffffffffffffffd && uVar6 >> 0x3e == 0) {
    if (uVar16 == 0) {
      pbStack_170 = (byte *)0x4;
    }
    else {
      puVar7 = *(undefined4 **)(param_3 + 0x20);
      pdb_14007ee60();
      uVar17 = 4;
      pbStack_170 = pub_1406abab0(uVar16,4);
      if (pbStack_170 == (byte *)0x0) goto LAB_140a1a582;
      if (uVar6 != 0) {
        uVar16 = uVar6 - 1;
        if (uVar6 < uVar6 - 1) {
          uVar16 = uVar6;
        }
        if (uVar16 < 8) {
          lVar11 = 0;
          puVar14 = puVar7;
          uVar16 = uVar6;
        }
        else {
          uVar16 = uVar16 + 1;
          uVar13 = 8;
          if ((uVar16 & 7) != 0) {
            uVar13 = (ulonglong)((uint)uVar16 & 7);
          }
          lVar11 = uVar16 - uVar13;
          uVar16 = uVar6 - lVar11;
          puVar14 = puVar7 + lVar11;
          lVar15 = 0;
          do {
            uVar17 = *(undefined8 *)((longlong)(puVar7 + lVar15) + 8);
            uVar5 = *(undefined8 *)(puVar7 + lVar15 + 4);
            uVar10 = *(undefined8 *)((longlong)(puVar7 + lVar15 + 4) + 8);
            *(undefined8 *)(pbStack_170 + lVar15 * 4) = *(undefined8 *)(puVar7 + lVar15);
            *(undefined8 *)(pbStack_170 + lVar15 * 4 + 8) = uVar17;
            *(undefined8 *)(pbStack_170 + lVar15 * 4 + 0x10) = uVar5;
            *(undefined8 *)(pbStack_170 + lVar15 * 4 + 0x10 + 8) = uVar10;
            lVar15 = lVar15 + 8;
          } while (lVar11 != lVar15);
        }
        pbVar12 = pbStack_170 + lVar11 * 4;
        do {
          if (puVar14 == puVar7 + uVar6) break;
          uVar2 = *puVar14;
          puVar14 = puVar14 + 1;
          *(undefined4 *)pbVar12 = uVar2;
          pbVar12 = pbVar12 + 4;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    uStack_160 = *(undefined4 *)(param_3 + 0x30);
    uVar3 = *(uint *)(param_3 + 0x38);
    iVar9 = uVar3 - 2;
    if (uVar3 < 2) {
      iVar9 = 2;
    }
    uStack_158 = 2;
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        uStack_158 = 3;
      }
      else {
        uStack_88 = *(undefined8 *)(param_3 + 0x4c);
        uStack_98 = *(undefined8 *)(param_3 + 0x3c);
        uStack_90 = *(undefined8 *)(param_3 + 0x44);
        uStack_158 = uVar3;
      }
    }
    uStack_190 = uStack_80;
    pbStack_188 = pbStack_70;
    uStack_154 = uStack_98;
    uStack_14c = uStack_90;
    uStack_144 = uStack_88;
    uStack_138 = *(undefined4 *)(param_3 + 0x58);
    uStack_134 = *(undefined4 *)(param_3 + 0x5c);
    uStack_130 = *(undefined4 *)(param_3 + 0x60);
    uStack_12c = *(undefined4 *)(param_3 + 100);
    uStack_128 = *(undefined8 *)(param_3 + 0x68);
    uStack_110 = param_5;
    uStack_198 = 0x8000000000000001;
    uStack_180 = uVar4;
    uStack_178 = uVar6;
    uStack_168 = uVar6;
    uStack_13c = uVar1;
    uStack_120 = uStack_78;
    uStack_118 = uVar1;
    uStack_114 = uStack_64;
    pdb_140a1aa80(param_1,&uStack_198);
    return;
  }
  uVar17 = 0;
LAB_140a1a582:
  pdb_142dc7e2a(uVar17,uVar16);
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}

