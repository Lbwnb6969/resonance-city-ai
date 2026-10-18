// VA 0x140b44190, PDB extent 1088 bytes
// country_core::systems::ui_move_wall_group::WallGroupMember::target_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_move_wall_group::WallGroupMember::target_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_move_wall_group.rs
   Extent: 1088 */

ulonglong * pdb_140b44190(ulonglong *param_1,ulonglong param_2,float *param_3)

{
  ulonglong arg0;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  code *pcVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float *pfVar15;
  byte *pbVar16;
  byte *pbVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte *pbVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_b4;
  float afStack_ac [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  float *pfStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uVar6 = *(ulonglong *)(param_2 + 0x10);
  arg0 = uVar6 * 8;
  if (arg0 < 0x7ffffffffffffffd && uVar6 >> 0x3d == 0) goto LAB_140b441f2;
  uVar24 = 0;
  do {
    param_2 = arg0;
    pdb_142dc7e2a(uVar24);
LAB_140b441f2:
    pfStack_78 = param_3;
    uVar7 = *(undefined8 *)(param_2 + 8);
    if (arg0 == 0) {
      pbVar16 = (byte *)0x4;
      uStack_70 = 0;
      if (uVar6 == 0) goto LAB_140b44241;
      goto LAB_140b44233;
    }
    pdb_14007ee60();
    uVar24 = 4;
    pbVar16 = pub_1406abab0(arg0,4);
  } while (pbVar16 == (byte *)0x0);
  uStack_70 = uVar6;
  if (uVar6 != 0) {
LAB_140b44233:
    pub_142e32760(pbVar16,uVar7,arg0);
  }
LAB_140b44241:
  uVar8 = *(ulonglong *)(param_2 + 0x28);
  uVar19 = uVar8 * 4;
  if (uVar19 < 0x7ffffffffffffffd && uVar8 >> 0x3e == 0) {
    if (uVar19 == 0) {
      pbVar17 = (byte *)0x4;
    }
    else {
      puVar9 = *(undefined4 **)(param_2 + 0x20);
      pbStack_68 = pbVar16;
      pdb_14007ee60();
      uVar24 = 4;
      pbVar17 = pub_1406abab0(uVar19,4);
      if (pbVar17 == (byte *)0x0) goto LAB_140b44268;
      pbVar16 = pbStack_68;
      if (uVar8 != 0) {
        uVar19 = uVar8 - 1;
        if (uVar8 < uVar8 - 1) {
          uVar19 = uVar8;
        }
        if (uVar19 < 8) {
          lVar18 = 0;
          uVar19 = uVar8;
          puVar22 = puVar9;
        }
        else {
          uVar19 = uVar19 + 1;
          uVar20 = 8;
          if ((uVar19 & 7) != 0) {
            uVar20 = (ulonglong)((uint)uVar19 & 7);
          }
          lVar18 = uVar19 - uVar20;
          uVar19 = uVar8 - lVar18;
          puVar22 = puVar9 + lVar18;
          lVar23 = 0;
          do {
            uVar24 = *(undefined8 *)((longlong)(puVar9 + lVar23) + 8);
            uVar7 = *(undefined8 *)(puVar9 + lVar23 + 4);
            uVar14 = *(undefined8 *)((longlong)(puVar9 + lVar23 + 4) + 8);
            *(undefined8 *)(pbVar17 + lVar23 * 4) = *(undefined8 *)(puVar9 + lVar23);
            *(undefined8 *)(pbVar17 + lVar23 * 4 + 8) = uVar24;
            *(undefined8 *)(pbVar17 + lVar23 * 4 + 0x10) = uVar7;
            *(undefined8 *)(pbVar17 + lVar23 * 4 + 0x10 + 8) = uVar14;
            lVar23 = lVar23 + 8;
          } while (lVar18 != lVar23);
        }
        pbVar21 = pbVar17 + lVar18 * 4;
        do {
          if (puVar22 == puVar9 + uVar8) break;
          uVar1 = *puVar22;
          puVar22 = puVar22 + 1;
          *(undefined4 *)pbVar21 = uVar1;
          pbVar21 = pbVar21 + 4;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
    }
    uVar19 = uStack_70;
    pfVar15 = pfStack_78;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    uVar5 = *(uint *)(param_2 + 0x38);
    uVar20 = 2;
    iVar11 = uVar5 - 2;
    if (uVar5 < 2) {
      iVar11 = 2;
    }
    if (iVar11 != 0) {
      if (iVar11 == 1) {
        uVar20 = 3;
      }
      else {
        uStack_f8 = *(undefined8 *)(param_2 + 0x4c);
        uStack_108 = *(undefined8 *)(param_2 + 0x3c);
        uStack_100 = *(undefined8 *)(param_2 + 0x44);
        uVar20 = (ulonglong)uVar5;
      }
    }
    uStack_94 = *(undefined4 *)(param_2 + 0x54);
    afStack_ac[0] = (float)uStack_108;
    afStack_ac[1] = (float)((ulonglong)uStack_108 >> 0x20);
    afStack_ac[2] = (float)uStack_100;
    afStack_ac[3] = (float)((ulonglong)uStack_100 >> 0x20);
    uStack_9c = (undefined4)uStack_f8;
    uStack_98 = (undefined4)((ulonglong)uStack_f8 >> 0x20);
    uStack_80 = *(ulonglong *)(param_2 + 0x68);
    uStack_90 = *(ulonglong *)(param_2 + 0x58);
    uStack_88 = *(ulonglong *)(param_2 + 0x60);
    if ((uint)uVar20 < 2) {
      fVar12 = *pfStack_78;
      fVar26 = pfStack_78[1];
      fVar27 = pfStack_78[2];
      fVar13 = pfStack_78[3];
      fVar2 = afStack_ac[uVar20 * 2];
      fVar3 = afStack_ac[uVar20 * 2 + 1];
      fVar4 = pfStack_78[5];
      afStack_ac[uVar20 * 2] = pfStack_78[4] + fVar3 * fVar27 + fVar2 * fVar12;
      afStack_ac[uVar20 * 2 + 1] = fVar3 * fVar13 + fVar2 * fVar26 + fVar4;
      fVar2 = afStack_ac[3];
      if ((uVar20 & 1) == 0) {
        uVar25 = pub_142e32980(fVar26);
        afStack_ac[3] = (float)pdb_141c40270(fVar2,uVar25);
      }
      else {
        fVar26 = fVar26 * afStack_ac[0];
        afStack_ac[0] = fVar27 * afStack_ac[1] + fVar12 * afStack_ac[0];
        afStack_ac[1] = fVar13 * afStack_ac[1] + fVar26;
      }
      uStack_80 = CONCAT17((DAT_143cb2d0c == '\0') * '\x05',(undefined7)uStack_80);
    }
    if (uVar6 != 0) {
      fVar2 = *pfVar15;
      fVar3 = pfVar15[1];
      fVar4 = pfVar15[2];
      fVar12 = pfVar15[3];
      uVar24 = *(undefined8 *)(pfVar15 + 4);
      lVar18 = 0;
      do {
        fVar26 = (float)*(undefined8 *)(pbVar16 + lVar18);
        fVar27 = (float)((ulonglong)*(undefined8 *)(pbVar16 + lVar18) >> 0x20);
        *(ulonglong *)(pbVar16 + lVar18) =
             CONCAT44(fVar27 * fVar12 + fVar26 * fVar3 + (float)((ulonglong)uVar24 >> 0x20),
                      fVar27 * fVar4 + fVar26 * fVar2 + (float)uVar24);
        lVar18 = lVar18 + 8;
      } while (arg0 - lVar18 != 0);
    }
    param_1[0xc] = uStack_88;
    param_1[0xd] = uStack_80;
    param_1[10] = CONCAT44(uStack_94,uStack_98);
    param_1[0xb] = uStack_90;
    param_1[8] = CONCAT44(afStack_ac[2],afStack_ac[1]);
    param_1[9] = CONCAT44(uStack_9c,afStack_ac[3]);
    param_1[6] = CONCAT44(uStack_b4,uVar1);
    param_1[7] = CONCAT44(afStack_ac[0],(uint)uVar20);
    param_1[4] = (ulonglong)pbVar17;
    param_1[5] = uVar8;
    param_1[2] = uVar6;
    param_1[3] = uVar8;
    *param_1 = uVar19;
    param_1[1] = (ulonglong)pbVar16;
    return param_1;
  }
  uVar24 = 0;
  pbStack_68 = pbVar16;
LAB_140b44268:
  pdb_142dc7e2a(uVar24,uVar19);
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}

