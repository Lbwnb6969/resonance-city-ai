// VA 0x1408f8b70, PDB extent 1550 bytes
// country_core::startup::load_shaders::create_vertex_layout_via_pipeline_reflection
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_shaders::create_vertex_layout_via_pipeline_reflection
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
   Extent: 1550 */

longlong * pdb_1408f8b70(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  byte bVar16;
  byte *pbVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 (*pauStack_c8) [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  undefined1 (**ppauStack_70) [16];
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0xe0) == 0x1a) {
    pcVar4 = *(char **)(param_2 + 0xd8);
    auVar24[0] = -(pcVar4[10] == DAT_14301d470);
    auVar24[1] = -(pcVar4[0xb] == UNK_14301d471);
    auVar24[2] = -(pcVar4[0xc] == UNK_14301d472);
    auVar24[3] = -(pcVar4[0xd] == UNK_14301d473);
    auVar24[4] = -(pcVar4[0xe] == UNK_14301d474);
    auVar24[5] = -(pcVar4[0xf] == UNK_14301d475);
    auVar24[6] = -(pcVar4[0x10] == UNK_14301d476);
    auVar24[7] = -(pcVar4[0x11] == UNK_14301d477);
    auVar24[8] = -(pcVar4[0x12] == UNK_14301d478);
    auVar24[9] = -(pcVar4[0x13] == UNK_14301d479);
    auVar24[10] = -(pcVar4[0x14] == UNK_14301d47a);
    auVar24[0xb] = -(pcVar4[0x15] == UNK_14301d47b);
    auVar24[0xc] = -(pcVar4[0x16] == UNK_14301d47c);
    auVar24[0xd] = -(pcVar4[0x17] == UNK_14301d47d);
    auVar24[0xe] = -(pcVar4[0x18] == UNK_14301d47e);
    auVar24[0xf] = -(pcVar4[0x19] == UNK_14301d47f);
    auVar23[0] = -(*pcVar4 == DAT_14301d480);
    auVar23[1] = -(pcVar4[1] == UNK_14301d481);
    auVar23[2] = -(pcVar4[2] == UNK_14301d482);
    auVar23[3] = -(pcVar4[3] == UNK_14301d483);
    auVar23[4] = -(pcVar4[4] == UNK_14301d484);
    auVar23[5] = -(pcVar4[5] == UNK_14301d485);
    auVar23[6] = -(pcVar4[6] == UNK_14301d486);
    auVar23[7] = -(pcVar4[7] == UNK_14301d487);
    auVar23[8] = -(pcVar4[8] == UNK_14301d488);
    auVar23[9] = -(pcVar4[9] == UNK_14301d489);
    auVar23[10] = -(pcVar4[10] == UNK_14301d48a);
    auVar23[0xb] = -(pcVar4[0xb] == UNK_14301d48b);
    auVar23[0xc] = -(pcVar4[0xc] == UNK_14301d48c);
    auVar23[0xd] = -(pcVar4[0xd] == UNK_14301d48d);
    auVar23[0xe] = -(pcVar4[0xe] == UNK_14301d48e);
    auVar23[0xf] = -(pcVar4[0xf] == UNK_14301d48f);
    auVar23 = auVar23 & auVar24;
    uVar7 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
    uStack_50 = (uint)CONCAT11((char)(uVar7 >> 8),uVar7 == 0xffff);
  }
  else {
    uStack_50 = 0;
  }
  uStack_88 = 0;
  pbStack_80 = (byte *)0x8;
  uStack_78 = 0;
  pauVar21 = *(undefined1 (**) [16])(param_2 + 0x50);
  lVar19 = *(longlong *)(param_2 + 0x68);
  auVar23 = *pauVar21;
  pauVar20 = pauVar21 + 1;
  uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar23[0xf] >> 7) << 0xf);
  plStack_b0 = param_1;
  do {
    bVar22 = lVar19 == 0;
    lVar19 = lVar19 + -1;
    uStack_a8 = uStack_78;
    if (bVar22) {
      ppauStack_70 = (undefined1 (**) [16])&uStack_49;
      pbVar17 = pbStack_80;
      if (1 < uStack_78) {
        if (uStack_78 < 0x15) {
          pdb_14151ab80(pbStack_80,uStack_78,1,&ppauStack_70);
          pbVar17 = pbStack_80;
        }
        else {
          pdb_140a91640(pbStack_80,uStack_78,&ppauStack_70);
          pbVar17 = pbStack_80;
        }
      }
      pbStack_80 = pbVar17;
      if (uStack_78 == 0) {
        *plStack_b0 = 0;
        plStack_b0[1] = 8;
        plStack_b0[2] = 0;
      }
      else {
        lStack_a0 = 0;
        lStack_98 = 8;
        lStack_90 = 0;
        uVar11 = 7;
        if (uStack_78 < 7) {
          uVar11 = uStack_78;
        }
        pbVar1 = pbVar17 + uVar11 * 0x18;
        for (; pbVar17 != pbVar1; pbVar17 = pbVar17 + 0x18) {
          uStack_b8 = *(undefined8 *)(pbVar17 + 0x10);
          pauStack_c8 = *(undefined1 (**) [16])pbVar17;
          uStack_c0 = *(undefined8 *)(pbVar17 + 8);
          pdb_140e46860(&ppauStack_70,&pauStack_c8);
          lVar19 = lStack_90;
          if (lStack_90 == lStack_a0) {
            pdb_142d7e6e0(&lStack_a0);
          }
          lVar12 = lVar19 * 0x20;
          auVar10._8_8_ = pcStack_68;
          auVar10._0_8_ = ppauStack_70;
          puVar3 = (undefined8 *)(lStack_98 + 0x10 + lVar12);
          *puVar3 = uStack_60;
          puVar3[1] = uStack_58;
          *(undefined1 (*) [16])(lStack_98 + lVar12) = auVar10;
          lStack_90 = lVar19 + 1;
        }
        if (7 < uStack_78) {
          pdb_140e46980(&ppauStack_70,pbStack_80 + 0xa8,uStack_78 - 7);
          lVar19 = lStack_90;
          if (lStack_90 == lStack_a0) {
            pdb_142d7e6e0(&lStack_a0);
          }
          lVar12 = lVar19 * 0x20;
          puVar3 = (undefined8 *)(lStack_98 + 0x10 + lVar12);
          *puVar3 = uStack_60;
          puVar3[1] = uStack_58;
          plVar2 = (longlong *)(lStack_98 + lVar12);
          *plVar2 = (longlong)ppauStack_70;
          plVar2[1] = (longlong)pcStack_68;
          lStack_90 = lVar19 + 1;
        }
        plStack_b0[2] = lStack_90;
        *plStack_b0 = lStack_a0;
        plStack_b0[1] = lStack_98;
      }
      if (uStack_88 != 0) {
        pub_1406abac0(pbStack_80,uStack_88 * 0x18,8);
      }
      return plStack_b0;
    }
    if ((short)uVar15 == 0) {
      do {
        auVar23 = *pauVar20;
        pauVar21 = pauVar21 + -0x50;
        pauVar20 = pauVar20 + 1;
        uVar15 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar15 == 0);
    }
    uVar8 = 0;
    for (uVar9 = uVar15; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    uVar11 = (ulonglong)uVar8;
    uVar14 = *(ulonglong *)(pauVar21[uVar11 * -5 + -4] + 8) ^ 0x8000000000000000;
    if (-1 < (longlong)*(ulonglong *)(pauVar21[uVar11 * -5 + -4] + 8)) {
      uVar14 = 10;
    }
    if (uVar14 == 0) {
      pauStack_c8 = pauVar21 + uVar11 * -5 + -3;
      iVar13 = *(int *)pauVar21[uVar11 * -5 + -3];
      if (iVar13 == 2) {
        if (*(int *)(pauVar21[uVar11 * -5 + -3] + 4) != 0x20) goto LAB_1408f8fe3;
        bVar16 = 0;
      }
      else {
        if (iVar13 == 3) {
          bVar16 = 1;
        }
        else {
          if (iVar13 != 4) goto LAB_1408f8fe3;
          bVar16 = 5;
        }
        if (*(int *)(pauVar21[uVar11 * -5 + -3] + 4) != 0x20) {
LAB_1408f8fe3:
          ppauStack_70 = &pauStack_c8;
          pcStack_68 = pdb_140c891d0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14301d692,&ppauStack_70,&UNK_14301d6b0);
        }
      }
    }
    else {
      if (uVar14 != 1) {
        ppauStack_70 = (undefined1 (**) [16])(pauVar21[uVar11 * -5 + -4] + 8);
        pcStack_68 = pdb_1408fd9c0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14301d692,&ppauStack_70,&UNK_14301d6e0);
      }
      pauStack_c8 = pauVar21 + uVar11 * -5 + -3;
      if (*(int *)pauVar21[uVar11 * -5 + -3] != 4) {
LAB_1408f8fb6:
        ppauStack_70 = &pauStack_c8;
        pcStack_68 = pdb_140c89090;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14301d692,&ppauStack_70,&UNK_14301d6c8);
      }
      if (*(int *)(pauVar21[uVar11 * -5 + -3] + 8) != 2) {
        if ((1 < *(int *)(pauVar21[uVar11 * -5 + -3] + 8) - 3U) ||
           (bVar16 = 7, *(int *)(pauVar21[uVar11 * -5 + -3] + 4) != 0x20)) goto LAB_1408f8fb6;
        goto LAB_1408f8dd0;
      }
      if (*(int *)(pauVar21[uVar11 * -5 + -3] + 4) != 0x20) goto LAB_1408f8fb6;
      bVar16 = 6;
      if (((char)uStack_50 == '\0') || (*(longlong *)pauVar21[uVar11 * -5 + -4] != 0xb))
      goto LAB_1408f8dd0;
      uVar14 = **(ulonglong **)(pauVar21[uVar11 * -5 + -5] + 8);
      uVar14 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
               (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
               (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 | (uVar14 & 0xff00) << 0x28
               | uVar14 << 0x38;
      uVar18 = 0x7072696d5f63656e;
      if (uVar14 == 0x7072696d5f63656e) {
        uVar14 = *(ulonglong *)((longlong)*(ulonglong **)(pauVar21[uVar11 * -5 + -5] + 8) + 3);
        uVar14 = uVar14 >> 0x38 | (uVar14 & 0xff000000000000) >> 0x28 |
                 (uVar14 & 0xff0000000000) >> 0x18 | (uVar14 & 0xff00000000) >> 8 |
                 (uVar14 & 0xff000000) << 8 | (uVar14 & 0xff0000) << 0x18 |
                 (uVar14 & 0xff00) << 0x28 | uVar14 << 0x38;
        iVar13 = 0;
        uVar18 = 0x6d5f63656e746572;
        if (uVar14 != 0x6d5f63656e746572) goto LAB_1408f8d3e;
      }
      else {
LAB_1408f8d3e:
        iVar13 = (uint)(uVar18 <= uVar14) * 2 + -1;
      }
      bVar16 = (iVar13 == 0) * '\x03' + 6;
    }
LAB_1408f8dd0:
    pauStack_c8 = pauVar21 + uVar11 * -5 + -3;
    uVar5 = *(undefined8 *)(pauVar21[uVar11 * -5 + -5] + 8);
    uVar6 = *(undefined8 *)pauVar21[uVar11 * -5 + -4];
    if (uStack_78 == uStack_88) {
      pdb_142d7e830(&uStack_88);
    }
    uVar15 = uVar15 - 1 & uVar15;
    *(undefined8 *)(pbStack_80 + uStack_a8 * 0x18) = uVar5;
    *(undefined8 *)(pbStack_80 + uStack_a8 * 0x18 + 8) = uVar6;
    pbStack_80[uStack_a8 * 0x18 + 0x10] = bVar16;
    uStack_78 = uStack_a8 + 1;
  } while( true );
}

