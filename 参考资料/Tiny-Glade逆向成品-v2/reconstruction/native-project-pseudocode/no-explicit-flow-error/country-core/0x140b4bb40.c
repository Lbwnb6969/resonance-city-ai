// VA 0x140b4bb40, PDB extent 1481 bytes
// country_core::systems::ui_clutter::rmb_autoclutter::handle_rmb_autoclutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/rmb_autoclutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_clutter::rmb_autoclutter::handle_rmb_autoclutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/rmb_autoclutter.rs
   Extent: 1481 */

void pdb_140b4bb40(float *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7,longlong param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  uint uVar22;
  ushort uVar23;
  longlong lVar24;
  byte bVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 in_XMM2_Bi;
  undefined1 in_XMM2_Bj;
  undefined1 in_XMM2_Bk;
  undefined1 in_XMM2_Bl;
  undefined1 in_XMM2_Bm;
  undefined1 in_XMM2_Bn;
  undefined1 in_XMM2_Bo;
  undefined1 in_XMM2_Bp;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 *puStack_b0;
  code *pcStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  if (SBORROW8(0,*(longlong *)(param_8 + 0x30))) {
    fVar11 = *param_1;
    fVar12 = param_1[1];
    fVar13 = param_1[2];
    fVar14 = param_1[3];
    if (*(int *)(param_2 + 0x18) == 0) {
      uVar18 = *(ulonglong *)(param_2 + 0x28);
      uStack_98 = uVar18;
      if (*(longlong *)(param_3 + 0x48) != 0) {
        uVar15 = pdb_1400af0a0(param_3 + 0x50,&uStack_98);
        bVar25 = (byte)(uVar15 >> 0x39);
        auVar27 = ZEXT216(CONCAT11(bVar25,bVar25));
        auVar27 = pshuflw(auVar27,auVar27,0);
        lVar20 = 0;
        iVar8 = -(uint)(CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))) ==
                       CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))));
        iVar9 = -(uint)(CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))) ==
                       CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))));
        do {
          uVar15 = uVar15 & *(ulonglong *)(param_3 + 0x38);
          auVar2 = *(undefined1 (*) [16])(*(longlong *)(param_3 + 0x30) + uVar15);
          auVar28[0] = -(auVar2[0] == auVar27[0]);
          auVar28[1] = -(auVar2[1] == auVar27[1]);
          auVar28[2] = -(auVar2[2] == auVar27[2]);
          auVar28[3] = -(auVar2[3] == auVar27[3]);
          auVar28[4] = -(auVar2[4] == auVar27[4]);
          auVar28[5] = -(auVar2[5] == auVar27[5]);
          auVar28[6] = -(auVar2[6] == auVar27[6]);
          auVar28[7] = -(auVar2[7] == auVar27[7]);
          auVar28[8] = -(auVar2[8] == auVar27[0]);
          auVar28[9] = -(auVar2[9] == auVar27[1]);
          auVar28[10] = -(auVar2[10] == auVar27[2]);
          auVar28[0xb] = -(auVar2[0xb] == auVar27[3]);
          auVar28[0xc] = -(auVar2[0xc] == auVar27[4]);
          auVar28[0xd] = -(auVar2[0xd] == auVar27[5]);
          auVar28[0xe] = -(auVar2[0xe] == auVar27[6]);
          auVar28[0xf] = -(auVar2[0xf] == auVar27[7]);
          uVar23 = (ushort)(SUB161(auVar28 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar28[0xf] >> 7) << 0xf;
          uVar22 = (uint)uVar23;
          while (uVar23 != 0) {
            uVar6 = 0;
            for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            lVar24 = *(longlong *)(param_3 + 0x30) +
                     (uVar6 + uVar15 & *(ulonglong *)(param_3 + 0x38)) * -0x10;
            if (uVar18 == *(ulonglong *)(lVar24 + -0x10)) {
              uVar18 = *(ulonglong *)(lVar24 + -8);
              if ((uVar18 & 0xffffffff) == 0) goto LAB_140b4bdd8;
              lVar20 = param_4[1];
              uVar15 = uVar18 & 0xffffffff ^ 0xffffffff;
              uVar26 = 1;
              if (((*(ulonglong *)(lVar20 + 0x10) <= uVar15) ||
                  (piVar21 = (int *)(uVar15 * 0x18 + *(longlong *)(lVar20 + 8)),
                  piVar21[4] != (int)(uVar18 >> 0x20))) || (*piVar21 == 0)) {
LAB_140b4c07c:
                uStack_98 = CONCAT44((int)param_4,uVar26);
                uStack_90 = (byte *)uVar18;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_143059ea8,0x2b,&uStack_98,&UNK_143059e88,&UNK_143059610);
              }
              lVar24 = *param_4;
              param_4 = *(longlong **)(piVar21 + 2);
              uVar26 = 0;
              if ((*(ulonglong *)(lVar24 + 0x38) <= ((ulonglong)param_4 & 0xffffffff)) ||
                 ((*(ulonglong *)
                    (*(longlong *)(lVar24 + 0x28) + ((ulonglong)param_4 >> 6 & 0x3ffffff) * 8) >>
                   ((ulonglong)param_4 & 0x3f) & 1) == 0)) goto LAB_140b4c07c;
              uVar22 = piVar21[1];
              uVar18 = *(ulonglong *)(lVar24 + 0x110);
              if (uVar18 < *(ulonglong *)
                            (*(longlong *)(lVar20 + 0x1a0) + 0x40 +
                            ((ulonglong)param_4 >> 0x20) * 0x48)) {
                lVar20 = *(longlong *)(lVar20 + 0x1a0) + ((ulonglong)param_4 >> 0x20) * 0x48;
                uVar15 = *(ulonglong *)(*(longlong *)(lVar20 + 0x38) + uVar18 * 8);
                uVar18 = 0;
                if (uVar15 == 0) goto LAB_140b4bd10;
                uVar18 = ~uVar15 * 0x30;
                lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x18) + 0x10 + uVar18);
              }
              else {
LAB_140b4bd10:
                lVar20 = 0;
              }
              lVar24 = lVar20 + (ulonglong)~uVar22 * 0x58;
              fVar10 = fVar14 * fVar14;
              fVar30 = fVar12 * fVar12 + fVar11 * fVar11;
              fVar29 = _UNK_142e37b08 * fVar13 + _UNK_142e37b04 * fVar12 + _DAT_142e37b00 * fVar11;
              fVar29 = fVar29 + fVar29;
              pub_142e32980(uVar18,CONCAT44((uint)((fVar14 + fVar14) *
                                                   (fVar14 * _UNK_142e37b1c -
                                                   fVar14 * _UNK_142e377ac) +
                                                  fVar29 * fVar14 +
                                                  (fVar10 - (fVar30 + (float)(CONCAT17((char)((uint)
                                                  fVar10 >> 0x18),
                                                  CONCAT16((char)((uint)fVar10 >> 0x10),
                                                           CONCAT15((char)((uint)fVar10 >> 8),
                                                                    CONCAT14(SUB41(fVar10,0),
                                                                             fVar13 * fVar13)))) >>
                                                  0x20))) * _UNK_142e37afc) ^ _UNK_142e37824,
                                            (uint)((fVar14 + fVar14) *
                                                   (fVar11 * _UNK_142e37b18 -
                                                   fVar12 * _UNK_142e377a8) +
                                                  fVar29 * fVar13 +
                                                  (fVar10 - (fVar30 + fVar13 * fVar13)) *
                                                  _UNK_142e37af8) ^ _DAT_142e37820));
              if (*(int *)(lVar20 + 8 + (ulonglong)~uVar22 * 0x58) == 1) {
                pub_142e32980();
              }
              else {
                uStack_98 = *(ulonglong *)(lVar24 + 0xc);
                uStack_90 = *(byte **)(lVar24 + 0x14);
                pdb_141c40430((longlong)&uStack_90 + 4);
              }
              pub_142e32a70();
              pub_142e32b30();
              pub_142e329e0();
              goto LAB_140b4be4c;
            }
            uVar23 = (ushort)(uVar22 - 1) & (ushort)uVar22;
            uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar23);
          }
          auVar31[0] = -(auVar2[0] == -1);
          auVar31[1] = -(auVar2[1] == -1);
          auVar31[2] = -(auVar2[2] == -1);
          auVar31[3] = -(auVar2[3] == -1);
          auVar31[4] = -(auVar2[4] == -1);
          auVar31[5] = -(auVar2[5] == -1);
          auVar31[6] = -(auVar2[6] == -1);
          auVar31[7] = -(auVar2[7] == -1);
          auVar31[8] = -(auVar2[8] == (char)iVar8);
          auVar31[9] = -(auVar2[9] == (char)((uint)iVar8 >> 8));
          auVar31[10] = -(auVar2[10] == (char)((uint)iVar8 >> 0x10));
          auVar31[0xb] = -(auVar2[0xb] == (char)((uint)iVar8 >> 0x18));
          auVar31[0xc] = -(auVar2[0xc] == (char)iVar9);
          auVar31[0xd] = -(auVar2[0xd] == (char)((uint)iVar9 >> 8));
          auVar31[0xe] = -(auVar2[0xe] == (char)((uint)iVar9 >> 0x10));
          auVar31[0xf] = -(auVar2[0xf] == (char)((uint)iVar9 >> 0x18));
          if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar31 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar31 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar31 >> 0x2f,0) & 1) != 0) || (SUB161(auVar31 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') break;
          uVar15 = uVar15 + lVar20 + 0x10;
          lVar20 = lVar20 + 0x10;
        } while( true );
      }
LAB_140b4bdd8:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430595f8);
    }
LAB_140b4be4c:
    uVar26 = pub_142e32980();
    uVar3 = *param_6;
    pdb_1403b05d0(param_5,uVar3);
    uStack_71 = pdb_1409d4b30(*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38));
    puStack_b0 = &uStack_71;
    pcStack_a8 = pdb_140c2a9d0;
    pdb_140f60760(&uStack_98,&UNK_14306af45,&puStack_b0);
    pbStack_a0 = uStack_90;
    uVar16 = pdb_140e940b0(uStack_90,uStack_88);
    if (uStack_98 != 0) {
      pub_1406abac0(pbStack_a0,uStack_98,1);
    }
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar20 = *param_7;
    lVar24 = *(longlong *)(lVar20 + 0x30);
    uVar4 = *(undefined8 *)(lVar20 + 0x40);
    if (lVar24 == *(longlong *)(lVar20 + 0x20)) {
      pdb_142d7ebb0(lVar20 + 0x20,param_9);
    }
    lVar5 = *(longlong *)(lVar20 + 0x28);
    lVar19 = lVar24 * 0x58;
    *(undefined8 *)(lVar5 + lVar19) = 6;
    *(undefined8 *)(lVar5 + 8 + lVar19) = uVar16;
    uVar16 = *(undefined8 *)(param_2 + 0x20);
    puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar19);
    *puVar1 = *(undefined8 *)(param_2 + 0x18);
    puVar1[1] = uVar16;
    *(undefined8 *)(lVar5 + 0x20 + lVar19) = *(undefined8 *)(param_2 + 0x28);
    *(undefined1 *)(lVar5 + 0x3f + lVar19) = 3;
    *(undefined4 *)(lVar5 + 0x40 + lVar19) = uVar26;
    *(undefined8 *)(lVar5 + 0x44 + lVar19) = *(undefined8 *)(param_1 + 4);
    *(float *)(lVar5 + 0x4c + lVar19) = param_1[6];
    *(undefined8 *)(lVar5 + 0x50 + lVar19) = uVar4;
    *(longlong *)(lVar20 + 0x30) = lVar24 + 1;
    *(longlong *)(lVar20 + 0x40) = *(longlong *)(lVar20 + 0x40) + 1;
    pdb_140ae4960(param_8,param_9);
    pdb_14007ee60();
    pbVar17 = pub_1406abab0(0x18,8);
    if (pbVar17 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x18);
    }
    pbVar17[0] = 1;
    pbVar17[1] = 0;
    pbVar17[2] = 0;
    pbVar17[3] = 0;
    pbVar17[4] = 0;
    pbVar17[5] = 0;
    pbVar17[6] = 0;
    pbVar17[7] = 0;
    pbVar17[8] = 1;
    pbVar17[9] = 0;
    pbVar17[10] = 0;
    pbVar17[0xb] = 0;
    pbVar17[0xc] = 0;
    pbVar17[0xd] = 0;
    pbVar17[0xe] = 0;
    pbVar17[0xf] = 0;
    *(undefined8 *)(pbVar17 + 0x10) = uVar3;
    uStack_98 = 0xd;
    uStack_90 = pbVar17;
    pdb_140ae5180(param_8,&uStack_98,&UNK_143059628);
  }
  return;
}

