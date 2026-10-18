// VA 0x140b56c80, PDB extent 1005 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::remove_wall_id
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::remove_wall_id
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1005 */

void pdb_140b56c80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  ulonglong unaff_R15;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 auStack_a8 [8];
  undefined1 (*pauStack_a0) [16];
  longlong lStack_98;
  longlong lStack_88;
  longlong lStack_70;
  longlong lStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_70 = param_2;
  uVar10 = pdb_1400af0a0(param_1 + 0x38,&lStack_70);
  pdb_140ca8d50(auStack_a8,param_1 + 0x18,uVar10,&lStack_70);
  if (pauStack_a0 != (undefined1 (*) [16])0x0) {
    lStack_68 = lStack_98;
    if (lStack_98 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = lStack_98 * 8 + 0x17U & 0xfffffffffffffff0;
      unaff_R15 = lStack_98 + uVar12 + 0x11;
      pbStack_60 = (byte *)((longlong)pauStack_a0 - uVar12);
      uVar12 = 0x10;
    }
    if (lStack_88 != 0) {
      auVar3 = *pauStack_a0;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      pauVar16 = pauStack_a0 + 1;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar3 = *pauVar16;
            pauStack_a0 = pauStack_a0 + -8;
            pauVar16 = pauVar16 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar11 == 0);
        }
        iVar6 = 0;
        for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          iVar6 = iVar6 + 1;
        }
        uVar4 = *(ulonglong *)((longlong)pauStack_a0 + (-8 - (ulonglong)(uint)(iVar6 << 3)));
        if (*(ulonglong *)(param_1 + 0x10) <= uVar4) {
          uStack_58 = uVar12;
          uStack_50 = unaff_R15;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar4,*(ulonglong *)(param_1 + 0x10),&UNK_14305a6d0);
        }
        lVar1 = *(longlong *)(param_1 + 8) + uVar4 * 0x30;
        uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x10 + uVar4 * 0x30);
        if (uVar4 != 0) {
          pauVar5 = *(undefined1 (**) [16])(lVar1 + 8);
          uVar14 = 0;
          pauVar17 = pauVar5;
LAB_140b56dd0:
          if (*(longlong *)(pauVar17[2] + 8) != param_2) goto code_r0x000140b56dd6;
          uVar15 = uVar14 + 1;
          uVar18 = uVar14;
          if (uVar15 < uVar4) {
            if (((int)uVar4 + (int)uVar14 & 1U) == 0) {
              if (*(longlong *)pauVar17[6] != param_2) {
                *(undefined8 *)pauVar17[3] = *(undefined8 *)(pauVar17[6] + 8);
                auVar3 = *(undefined1 (*) [16])(pauVar17[3] + 8);
                uVar10 = *(undefined8 *)(pauVar17[4] + 8);
                uVar8 = *(undefined8 *)pauVar17[5];
                *(undefined8 *)pauVar17[2] = *(undefined8 *)(pauVar17[5] + 8);
                *(undefined8 *)(pauVar17[2] + 8) = *(undefined8 *)pauVar17[6];
                *(undefined8 *)pauVar17[1] = uVar10;
                *(undefined8 *)(pauVar17[1] + 8) = uVar8;
                *pauVar17 = auVar3;
                uVar18 = uVar14 + 1;
              }
              uVar15 = uVar14 + 2;
            }
            uStack_58 = uVar12;
            if (uVar4 - 2 != uVar14) {
              pauVar17 = (undefined1 (*) [16])(uVar15 * 0x38 + (longlong)pauVar5);
              lVar13 = uVar4 - uVar15;
              do {
                if (*(longlong *)(pauVar17[2] + 8) == param_2) {
                  lVar19 = *(longlong *)pauVar17[6];
                }
                else {
                  lVar19 = uVar18 * 0x38;
                  *(undefined8 *)((longlong)pauVar5 + lVar19 + 0x30) = *(undefined8 *)pauVar17[3];
                  auVar3 = *pauVar17;
                  uVar10 = *(undefined8 *)pauVar17[1];
                  uVar8 = *(undefined8 *)(pauVar17[1] + 8);
                  uVar9 = *(undefined8 *)(pauVar17[2] + 8);
                  puVar2 = (undefined8 *)((longlong)pauVar5 + lVar19 + 0x20);
                  *puVar2 = *(undefined8 *)pauVar17[2];
                  puVar2[1] = uVar9;
                  puVar2 = (undefined8 *)((longlong)pauVar5 + lVar19 + 0x10);
                  *puVar2 = uVar10;
                  puVar2[1] = uVar8;
                  *(undefined1 (*) [16])((longlong)pauVar5 + lVar19) = auVar3;
                  uVar18 = uVar18 + 1;
                  lVar19 = *(longlong *)pauVar17[6];
                }
                if (lVar19 != param_2) {
                  lVar19 = uVar18 * 0x38;
                  *(undefined8 *)((longlong)pauVar5 + lVar19 + 0x30) =
                       *(undefined8 *)(pauVar17[6] + 8);
                  auVar3 = *(undefined1 (*) [16])(pauVar17[3] + 8);
                  uVar10 = *(undefined8 *)(pauVar17[4] + 8);
                  uVar8 = *(undefined8 *)pauVar17[5];
                  uVar9 = *(undefined8 *)pauVar17[6];
                  puVar2 = (undefined8 *)((longlong)pauVar5 + lVar19 + 0x20);
                  *puVar2 = *(undefined8 *)(pauVar17[5] + 8);
                  puVar2[1] = uVar9;
                  puVar2 = (undefined8 *)((longlong)pauVar5 + lVar19 + 0x10);
                  *puVar2 = uVar10;
                  puVar2[1] = uVar8;
                  *(undefined1 (*) [16])((longlong)pauVar5 + lVar19) = auVar3;
                  uVar18 = uVar18 + 1;
                }
                pauVar17 = pauVar17 + 7;
                lVar13 = lVar13 + -2;
              } while (lVar13 != 0);
            }
          }
          *(ulonglong *)(lVar1 + 0x10) = uVar18;
          uVar4 = *(ulonglong *)(lVar1 + 0x28);
          uStack_50 = unaff_R15;
          goto joined_r0x000140b56e93;
        }
LAB_140b56de2:
        uVar4 = *(ulonglong *)(lVar1 + 0x28);
joined_r0x000140b56e93:
        if (uVar4 != 0) {
          lVar13 = *(longlong *)(lVar1 + 0x20);
          uVar14 = 0;
LAB_140b56e00:
          if (*(longlong *)(lVar13 + uVar14 * 8) != param_2) goto code_r0x000140b56e0a;
          uVar15 = uVar14 + 1;
          uVar18 = uVar14;
          if (uVar15 < uVar4) {
            if (((int)uVar4 + (int)uVar14 & 1U) == 0) {
              lVar19 = *(longlong *)(lVar13 + 8 + uVar14 * 8);
              if (lVar19 != param_2) {
                *(longlong *)(lVar13 + uVar14 * 8) = lVar19;
                uVar18 = uVar14 + 1;
              }
              uVar15 = uVar14 + 2;
            }
            if (uVar4 - 2 != uVar14) {
              do {
                lVar19 = *(longlong *)(lVar13 + uVar15 * 8);
                if (lVar19 != param_2) {
                  *(longlong *)(lVar13 + uVar18 * 8) = lVar19;
                  uVar18 = uVar18 + 1;
                }
                lVar19 = *(longlong *)(lVar13 + 8 + uVar15 * 8);
                if (lVar19 != param_2) {
                  *(longlong *)(lVar13 + uVar18 * 8) = lVar19;
                  uVar18 = uVar18 + 1;
                }
                uVar15 = uVar15 + 2;
              } while (uVar4 != uVar15);
            }
          }
          *(ulonglong *)(lVar1 + 0x28) = uVar18;
          uStack_50 = unaff_R15;
        }
LAB_140b56d50:
        uVar11 = uVar11 - 1 & uVar11;
        lStack_88 = lStack_88 + -1;
      } while (lStack_88 != 0);
    }
    if ((lStack_98 != 0) && (unaff_R15 != 0)) {
      pub_1406abac0(pbStack_60,unaff_R15,uVar12);
    }
  }
  return;
code_r0x000140b56dd6:
  uVar14 = uVar14 + 1;
  pauVar17 = (undefined1 (*) [16])(pauVar17[3] + 8);
  if (uVar4 == uVar14) goto LAB_140b56de2;
  goto LAB_140b56dd0;
code_r0x000140b56e0a:
  uVar14 = uVar14 + 1;
  if (uVar4 == uVar14) goto LAB_140b56d50;
  goto LAB_140b56e00;
}

