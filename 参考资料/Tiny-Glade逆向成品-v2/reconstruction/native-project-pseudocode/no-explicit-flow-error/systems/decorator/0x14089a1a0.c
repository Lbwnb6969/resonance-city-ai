// VA 0x14089a1a0, PDB extent 4815 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::maintain_stair_graph
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::maintain_stair_graph
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 4815 */

void pdb_14089a1a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  undefined1 auVar1 [16];
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  undefined1 uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  int *piVar27;
  undefined *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
  ushort uVar33;
  int *piVar34;
  undefined *puVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  longlong in_stack_fffffffffffffd98;
  undefined4 uVar42;
  int aiStack_240 [3];
  undefined1 uStack_234;
  undefined8 *puStack_220;
  longlong lStack_218;
  undefined4 *puStack_210;
  longlong lStack_208;
  undefined8 *puStack_200;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  longlong lStack_1c8;
  longlong *plStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_160;
  undefined8 uStack_158;
  longlong lStack_150;
  undefined8 *puStack_148;
  longlong *plStack_140;
  longlong lStack_138;
  byte *pbStack_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *puStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  undefined4 *puStack_100;
  byte *pbStack_f8;
  undefined4 *puStack_f0;
  undefined1 (*pauStack_e8) [16];
  byte *pbStack_e0;
  undefined1 (*pauStack_d8) [16];
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined1 (*pauStack_c0) [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 (*pauStack_a0) [16];
  undefined8 *puStack_98;
  byte *pbStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  if (*_DAT_143ca4500 == '\0') {
    puStack_200 = param_2;
    puStack_148 = param_3;
    cVar11 = pdb_140e94b40();
    if (cVar11 == '\0') {
      lStack_160 = 0;
    }
    else {
      pauVar24 = (undefined1 (*) [16])&UNK_143013ef1;
      lVar26 = 0x66;
      pauVar22 = (undefined1 (*) [16])0x66;
      lVar14 = pdb_1408a1670(&UNK_143013ef1);
      if (lVar14 == 1) {
        if ((undefined1 (*) [16])0x66 < pauVar22) {
LAB_14089b00d:
          pdb_142dc8070(&UNK_143013ef1,0x66,0);
LAB_14089b02d:
          pdb_142dc8070(&UNK_143013ef1,0x66);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pauVar24 = (undefined1 (*) [16])&UNK_143013ef1;
        uVar15 = pdb_1408a1670(&UNK_143013ef1);
        if ((uVar15 & 1) != 0) {
          if ((undefined *)0x66 < *pauVar22 + 2) goto LAB_14089b02d;
          lVar26 = 100 - (longlong)pauVar22;
          pauVar24 = (undefined1 (*) [16])(pauVar22[0x143013ef] + 3);
        }
      }
      puVar28 = &UNK_14301364c;
      puVar35 = &UNK_1430135f0;
      do {
        bVar36 = puVar28[-1];
        uVar13 = (uint)(char)bVar36;
        if ((char)bVar36 < '\0') {
          bVar2 = puVar28[-2];
          if ((char)bVar2 < -0x40) {
            bVar3 = puVar28[-3];
            if ((char)bVar3 < -0x40) {
              pbVar16 = puVar28 + -4;
              puVar28 = puVar28 + -4;
              uVar13 = bVar3 & 0x3f | (*pbVar16 & 7) << 6;
            }
            else {
              puVar28 = puVar28 + -3;
              uVar13 = bVar3 & 0xf;
            }
            pauVar22 = (undefined1 (*) [16])(ulonglong)(uVar13 << 6);
            uVar13 = bVar2 & 0x3f | uVar13 << 6;
          }
          else {
            puVar28 = puVar28 + -2;
            uVar13 = bVar2 & 0x1f;
          }
          uVar13 = (uint)(bVar36 & 0x3f) | uVar13 << 6;
          if (uVar13 != 0x5c) goto LAB_14089a2f4;
LAB_14089a30d:
          puVar35 = puVar28 + -0x1430135ef;
          if ((undefined *)0x5c < puVar35) {
            pdb_142dc8070(&UNK_1430135f0,0x5c,puVar35,0x5c,&UNK_143013fc0);
            goto LAB_14089b00d;
          }
          lVar14 = 0x5c - (longlong)puVar35;
          puVar35 = puVar28 + 1;
          goto LAB_14089a330;
        }
        puVar28 = puVar28 + -1;
        if (uVar13 == 0x5c) goto LAB_14089a30d;
LAB_14089a2f4:
        if (uVar13 == 0x2f) goto LAB_14089a30d;
      } while (puVar28 != &UNK_1430135f0);
      lVar14 = 0x5c;
LAB_14089a330:
      pbVar16 = (byte *)pdb_140e97000();
      if (pbVar16[0x68] != 1) {
        pauVar22 = (undefined1 (*) [16])0x0;
        pbVar16 = (byte *)pdb_142dde6e0(pbVar16);
        if (pbVar16 == (byte *)0x0) {
LAB_14089afb3:
          pdb_142dc7890(&UNK_14330e598);
LAB_14089afc0:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pauVar22,pauVar24,&UNK_143311df8);
        }
      }
      if (*(longlong *)pbVar16 != 0) goto LAB_14089af59;
      pbVar16[0] = 0xff;
      pbVar16[1] = 0xff;
      pbVar16[2] = 0xff;
      pbVar16[3] = 0xff;
      pbVar16[4] = 0xff;
      pbVar16[5] = 0xff;
      pbVar16[6] = 0xff;
      pbVar16[7] = 0xff;
      pbStack_90 = pbVar16;
      uStack_158 = pdb_140e94f10(pbVar16 + 8,pauVar24,lVar26,puVar35,lVar14,1,0);
      *(longlong *)pbStack_90 = *(longlong *)pbStack_90 + 1;
      lStack_160 = 1;
      in_stack_fffffffffffffd98 = lVar14;
    }
    plStack_140 = param_4;
    uVar12 = pdb_140ae3070(*param_1);
    puStack_118 = (undefined8 *)CONCAT71(puStack_118._1_7_,uVar12);
    puStack_100 = (undefined4 *)0x0;
    pbStack_f8 = (byte *)0x4;
    puStack_f0 = (undefined4 *)0x0;
    pauStack_e8 = (undefined1 (*) [16])0x0;
    pbStack_e0 = (byte *)0x4;
    pauStack_d8 = (undefined1 (*) [16])0x0;
    param_4 = (longlong *)*param_5;
    lVar14 = pdb_140a61160(param_4);
    lVar26 = *(longlong *)(lVar14 + 8);
    lVar14 = lVar26 + *(longlong *)(lVar14 + 0x10) * 0x28;
    uStack_a8 = *puStack_148;
LAB_14089a455:
    auVar1 = _DAT_142e378b0;
    auVar37 = _DAT_142e378a0;
    if (lVar26 != lVar14) {
      uVar13 = *(uint *)(lVar26 + 0x20);
      uVar15 = (ulonglong)uVar13;
      lVar17 = pdb_140c3ee20(uStack_a8);
      lVar26 = lVar26 + 0x28;
      if (lVar17 != 3) {
        lVar17 = pdb_140c41030(uStack_a8,lVar17,uVar15);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143013650);
        }
        auStack_1f8._0_4_ = uVar13;
        if (*(longlong *)(lVar17 + 0x48) != 0) {
          uVar15 = pdb_1400aede0(lVar17 + 0x50,auStack_1f8);
          bVar36 = (byte)(uVar15 >> 0x39);
          auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
          auVar37 = pshuflw(auVar37,auVar37,0);
          lVar29 = 0;
          while( true ) {
            uVar15 = uVar15 & *(ulonglong *)(lVar17 + 0x38);
            auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar17 + 0x30) + uVar15);
            auVar41[0] = -(auVar1[0] == auVar37[0]);
            auVar41[1] = -(auVar1[1] == auVar37[1]);
            auVar41[2] = -(auVar1[2] == auVar37[2]);
            auVar41[3] = -(auVar1[3] == auVar37[3]);
            auVar41[4] = -(auVar1[4] == auVar37[4]);
            auVar41[5] = -(auVar1[5] == auVar37[5]);
            auVar41[6] = -(auVar1[6] == auVar37[6]);
            auVar41[7] = -(auVar1[7] == auVar37[7]);
            auVar41[8] = -(auVar1[8] == auVar37[0]);
            auVar41[9] = -(auVar1[9] == auVar37[1]);
            auVar41[10] = -(auVar1[10] == auVar37[2]);
            auVar41[0xb] = -(auVar1[0xb] == auVar37[3]);
            auVar41[0xc] = -(auVar1[0xc] == auVar37[4]);
            auVar41[0xd] = -(auVar1[0xd] == auVar37[5]);
            auVar41[0xe] = -(auVar1[0xe] == auVar37[6]);
            auVar41[0xf] = -(auVar1[0xf] == auVar37[7]);
            uVar33 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar41[0xf] >> 7) << 0xf;
            uVar31 = (uint)uVar33;
            while (uVar33 != 0) {
              uVar9 = 0;
              for (uVar10 = uVar31; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              if (uVar13 == *(uint *)(*(longlong *)(lVar17 + 0x30) + -0x68 +
                                     (uVar9 + uVar15 & *(ulonglong *)(lVar17 + 0x38)) * -0x68))
              goto LAB_14089a455;
              uVar33 = (ushort)(uVar31 - 1) & (ushort)uVar31;
              uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar33);
            }
            auVar38[0] = -(auVar1[0] == -1);
            auVar38[1] = -(auVar1[1] == -1);
            auVar38[2] = -(auVar1[2] == -1);
            auVar38[3] = -(auVar1[3] == -1);
            auVar38[4] = -(auVar1[4] == -1);
            auVar38[5] = -(auVar1[5] == -1);
            auVar38[6] = -(auVar1[6] == -1);
            auVar38[7] = -(auVar1[7] == -1);
            auVar38[8] = -(auVar1[8] == -1);
            auVar38[9] = -(auVar1[9] == -1);
            auVar38[10] = -(auVar1[10] == -1);
            auVar38[0xb] = -(auVar1[0xb] == -1);
            auVar38[0xc] = -(auVar1[0xc] == -1);
            auVar38[0xd] = -(auVar1[0xd] == -1);
            auVar38[0xe] = -(auVar1[0xe] == -1);
            auVar38[0xf] = -(auVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar38 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar38 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x3f,0) & 1) != 0) || (SUB161(auVar38 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') break;
            uVar15 = uVar15 + lVar29 + 0x10;
            lVar29 = lVar29 + 0x10;
          }
        }
      }
      pauVar24 = pauStack_d8;
      if (pauStack_d8 == pauStack_e8) {
        pdb_142d8d710(&pauStack_e8);
      }
      *(uint *)(pbStack_e0 + (longlong)pauVar24 * 4) = uVar13;
      pauStack_d8 = (undefined1 (*) [16])(*pauVar24 + 1);
      goto LAB_14089a455;
    }
    lStack_150 = *plStack_140;
    pauStack_a0 = (undefined1 (*) [16])
                  CONCAT44(pauStack_a0._4_4_,*(undefined4 *)((longlong)param_5 + 0x1c));
    puStack_98 = (undefined8 *)param_5[2];
    while (pauStack_d8 != (undefined1 (*) [16])0x0) {
      pauVar24 = pauStack_d8 + -1;
      pbStack_90 = (byte *)CONCAT44(pbStack_90._4_4_,
                                    *(undefined4 *)(pbStack_e0 + (longlong)pauStack_d8 * 4 + -4));
      pauStack_d8 = (undefined1 (*) [16])(*pauVar24 + 0xf);
      if ((char)puStack_118 != '\0') {
        lVar14 = pdb_140a61160(param_4);
        auStack_1f8._0_4_ = (int)pbStack_90;
        uVar15 = *(ulonglong *)(lVar14 + 0x10);
        piVar27 = (int *)0x4;
        if (uVar15 == 0) {
          piVar34 = (int *)0x4;
          goto LAB_14089a6c0;
        }
        if (uVar15 == 1) {
          lVar14 = *(longlong *)(lVar14 + 8);
          piVar34 = (int *)0x4;
          if ((int)pbStack_90 != *(int *)(lVar14 + 0x20)) goto LAB_14089a6c0;
          uVar18 = 0;
        }
        else {
          uVar18 = pdb_1400aede0(lVar14 + 0x38,auStack_1f8);
          uVar21 = pdb_1414af660(lVar14,uVar18,auStack_1f8);
          if ((uVar21 & 1) == 0) {
            piVar34 = (int *)0x4;
            goto LAB_14089a6c0;
          }
          if (uVar15 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar18,uVar15,&UNK_143311df8);
          }
          lVar14 = *(longlong *)(lVar14 + 8);
          piVar34 = (int *)0x4;
          if (lVar14 == 0) goto LAB_14089a6c0;
        }
        piVar34 = *(int **)(lVar14 + 8 + uVar18 * 0x28);
        piVar27 = piVar34 + *(longlong *)(lVar14 + 0x10 + uVar18 * 0x28) * 2;
LAB_14089a6c0:
        do {
          if (piVar34 == piVar27) break;
          iVar4 = *piVar34;
          lVar14 = pdb_140a61160(param_4);
          piVar34 = piVar34 + 2;
          pauVar24 = *(undefined1 (**) [16])(lVar14 + 0x10);
          iStack_128 = iVar4;
          if (pauVar24 != (undefined1 (*) [16])0x0) {
            if (pauVar24 == (undefined1 (*) [16])0x1) {
              lVar14 = *(longlong *)(lVar14 + 8);
              if (iVar4 != *(int *)(lVar14 + 0x20)) goto LAB_14089a6c0;
              pauVar22 = (undefined1 (*) [16])0x0;
            }
            else {
              auStack_1d8 = *(undefined1 (*) [16])(lVar14 + 0x38);
              auVar39._0_8_ = auStack_1d8._0_8_;
              auVar39._8_4_ = auStack_1d8._0_4_;
              auVar39._12_4_ = auStack_1d8._4_4_;
              auStack_1f8 = auVar39 ^ auVar37;
              auVar40._0_8_ = auStack_1d8._8_8_;
              auVar40._8_4_ = auStack_1d8._8_4_;
              auVar40._12_4_ = auStack_1d8._12_4_;
              auStack_1e8 = auVar40 ^ auVar1;
              lStack_1c8 = 0;
              plStack_1c0 = (longlong *)0x0;
              uStack_1b8 = 0;
              aiStack_240[0] = iVar4;
              pdb_1400b0640(auStack_1f8,aiStack_240,4);
              uVar32 = lStack_1c8 << 0x38 | (ulonglong)plStack_1c0;
              uVar15 = auStack_1e8._8_8_ ^ uVar32;
              uVar23 = auStack_1f8._0_8_ + auStack_1e8._0_8_;
              uVar21 = (auStack_1e8._0_8_ << 0xd | (ulonglong)auStack_1e8._0_8_ >> 0x33) ^ uVar23;
              uVar18 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ auStack_1f8._8_8_ + uVar15;
              uVar30 = auStack_1f8._8_8_ + uVar15 + uVar21;
              uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar18;
              uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar30;
              uVar15 = (uVar18 << 0x15 | uVar18 >> 0x2b) ^ uVar23;
              uVar23 = (uVar23 ^ uVar32) + uVar21;
              uVar30 = ((uVar30 << 0x20 | uVar30 >> 0x20) ^ 0xff) + uVar15;
              uVar18 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar23;
              uVar15 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ uVar30;
              uVar30 = uVar30 + uVar18;
              uVar21 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar15;
              uVar18 = (uVar18 << 0x11 | uVar18 >> 0x2f) ^ uVar30;
              uVar15 = (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar21;
              uVar21 = uVar21 + uVar18;
              uVar23 = (uVar30 << 0x20 | uVar30 >> 0x20) + uVar15;
              uVar18 = (uVar18 << 0xd | uVar18 >> 0x33) ^ uVar21;
              uVar15 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ uVar23;
              uVar23 = uVar23 + uVar18;
              uVar21 = (uVar21 << 0x20 | uVar21 >> 0x20) + uVar15;
              uVar18 = (uVar18 << 0x11 | uVar18 >> 0x2f) ^ uVar23;
              uVar15 = (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar21;
              uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar15;
              uVar18 = (uVar18 << 0xd | uVar18 >> 0x33) ^ uVar21 + uVar18;
              uVar15 = (uVar15 << 0x10 | uVar15 >> 0x30) ^ uVar23;
              uVar23 = uVar23 + uVar18;
              pauVar22 = (undefined1 (*) [16])
                         ((uVar23 << 0x20 | uVar23 >> 0x20) ^ (uVar18 << 0x11 | uVar18 >> 0x2f) ^
                          (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar23);
              uVar15 = pdb_1414af660(lVar14,pauVar22,&iStack_128);
              if ((uVar15 & 1) == 0) goto LAB_14089a6c0;
              if (pauVar24 <= pauVar22) goto LAB_14089afc0;
              lVar14 = *(longlong *)(lVar14 + 8);
              if (lVar14 == 0) goto LAB_14089a6c0;
            }
            lVar14 = *(longlong *)(lVar14 + 0x10 + (longlong)pauVar22 * 0x28);
            if (((lVar14 != 0) && (lVar14 * 8 - 8U < 8)) &&
               (cVar11 = pdb_140c42080(lStack_150), puVar7 = puStack_f0, cVar11 != '\0')) {
              if (puStack_f0 == puStack_100) {
                pdb_142d8d710(&puStack_100);
              }
              pauVar24 = pauStack_d8;
              *(int *)(pbStack_f8 + (longlong)puVar7 * 4) = iVar4;
              puStack_f0 = (undefined4 *)((longlong)puVar7 + 1);
              if (pauStack_d8 == pauStack_e8) {
                pdb_142d8d710(&pauStack_e8);
              }
              *(int *)(pbStack_e0 + (longlong)pauVar24 * 4) = iVar4;
              pauStack_d8 = (undefined1 (*) [16])(*pauVar24 + 1);
            }
          }
        } while( true );
      }
      *(undefined4 *)puStack_98 = pauStack_a0._0_4_;
      pdb_140a5f3e0(param_4,(ulonglong)pbStack_90 & 0xffffffff);
      pdb_140a61500(auStack_1f8);
      if (auStack_1f8._0_4_ != 3) {
        if (auStack_1e8._0_4_ == (int)pbStack_90) {
          *(undefined4 *)puStack_98 = pauStack_a0._0_4_;
          pdb_140a5f780(param_4);
        }
      }
    }
    pauVar22 = (undefined1 (*) [16])0x0;
    if (pauStack_e8 != (undefined1 (*) [16])0x0) {
      pauVar22 = (undefined1 (*) [16])((longlong)pauStack_e8 << 2);
      pub_1406abac0(pbStack_e0,(ulonglong)pauVar22,4);
    }
    uStack_81 = 1;
    plVar19 = (longlong *)pdb_140f3bda0();
    if ((char)plVar19[2] != '\x01') goto LAB_14089af65;
    lStack_c8 = *plVar19;
    pauVar22 = (undefined1 (*) [16])plVar19[1];
    while( true ) {
      *plVar19 = lStack_c8 + 1;
      pauStack_d8 = (undefined1 (*) [16])_DAT_143013ae0;
      uStack_d0 = _UNK_143013ae8;
      pauStack_e8 = _DAT_143013ad0;
      pbStack_e0 = (byte *)_UNK_143013ad8;
      puStack_98 = (undefined8 *)*param_8;
      pauVar25 = (undefined1 (*) [16])*puStack_98;
      lVar14 = puStack_98[3];
      auVar37 = *pauVar25;
      pauVar24 = pauVar25 + 1;
      uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar37[0xf] >> 7) << 0xf);
      pauStack_c0 = pauVar22;
      while (lVar14 != 0) {
        if ((short)uVar13 == 0) {
          do {
            auVar37 = *pauVar24;
            pauVar25 = pauVar25 + -0x1c;
            pauVar24 = pauVar24 + 1;
            uVar13 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar13 == 0);
        }
        uVar31 = 0;
        for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar5 = *(undefined4 *)((longlong)pauVar25 + (ulonglong)uVar31 * -0x1c + -0x1c);
        uVar6 = *(undefined4 *)((longlong)pauVar25 + (ulonglong)uVar31 * -0x1c + -0x18);
        uStack_82 = 1;
        cVar11 = pdb_140a60290(param_4,uVar5,uVar6);
        uVar13 = uVar13 - 1 & uVar13;
        lVar14 = lVar14 + -1;
        if (cVar11 == '\0') {
          uStack_82 = 1;
          pdb_1403afce0(&pauStack_e8,uVar5,uVar6);
        }
      }
      *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
      pauStack_a0 = (undefined1 (*) [16])param_7[2];
      pbStack_90 = (byte *)CONCAT44(pbStack_90._4_4_,*(undefined4 *)((longlong)param_7 + 0x1c));
      *(undefined4 *)*pauStack_a0 = *(undefined4 *)((longlong)param_7 + 0x1c);
      pauVar22 = (undefined1 (*) [16])*param_7;
      auStack_1f8._0_8_ = &pauStack_e8;
      uStack_82 = 1;
      pdb_1414b6670(puStack_98 + 0x12,auStack_1f8,pauVar22);
      lStack_138 = (longlong)pbStack_e0;
      if (pbStack_e0 == (byte *)0x0) {
        uStack_108 = 0;
      }
      else {
        uVar15 = (longlong)pbStack_e0 * 8 + 0x17U & 0xfffffffffffffff0;
        uStack_110 = (longlong)pbStack_e0 + uVar15 + 0x11;
        pbStack_130 = (byte *)((longlong)pauStack_e8 - uVar15);
        uStack_108 = 0x10;
      }
      pauVar24 = pauStack_e8;
      if (uStack_d0 != 0) {
        puStack_118 = puStack_98 + 6;
        puStack_220 = puStack_98 + 0xc;
        auVar37 = *pauStack_e8;
        uStack_11c = *(undefined4 *)((longlong)param_6 + 0x1c);
        puStack_210 = (undefined4 *)param_6[2];
        lStack_208 = *param_6 + 0x180;
        uVar13 = ~(uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar37[0xf] >> 7) << 0xf);
        pauVar25 = pauStack_e8 + 1;
        lStack_218 = *param_6 + 0x1a0;
        lVar14 = uStack_d0;
        do {
          if ((short)uVar13 == 0) {
            do {
              auVar37 = *pauVar25;
              pauVar24 = pauVar24 + -8;
              pauVar25 = pauVar25 + 1;
              uVar13 = (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar13 == 0);
          }
          iVar4 = 0;
          for (uVar31 = uVar13; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
          }
          uVar5 = *(undefined4 *)((longlong)pauVar24 + (-8 - (ulonglong)(uint)(iVar4 << 3)));
          uVar6 = *(undefined4 *)((longlong)pauVar24 + (-4 - (ulonglong)(uint)(iVar4 << 3)));
          *(int *)*pauStack_a0 = (int)pbStack_90;
          uVar20 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffd98 >> 0x20),uVar6);
          uStack_124 = uVar5;
          uStack_120 = uVar6;
          pdb_1405de690(auStack_1f8,pauVar22,puStack_98,uVar5,uVar20);
          uVar42 = (undefined4)((ulonglong)uVar20 >> 0x20);
          if (auStack_1d8[0] != '\x11') {
            LOCK();
            *plStack_1c0 = *plStack_1c0 + -1;
            UNLOCK();
            if (*plStack_1c0 == 0) {
              pdb_140c7b7a0(&plStack_1c0);
            }
          }
          *(int *)*pauStack_a0 = (int)pbStack_90;
          uVar20 = CONCAT44(uVar42,uVar6);
          pdb_1405de690(auStack_1f8,pauVar22,puStack_118,uVar5,uVar20);
          uVar42 = (undefined4)((ulonglong)uVar20 >> 0x20);
          if (auStack_1d8[0] != '\x11') {
            LOCK();
            *plStack_1c0 = *plStack_1c0 + -1;
            UNLOCK();
            if (*plStack_1c0 == 0) {
              pdb_140c7b7a0(&plStack_1c0);
            }
          }
          *(int *)*pauStack_a0 = (int)pbStack_90;
          in_stack_fffffffffffffd98 = CONCAT44(uVar42,uVar6);
          pdb_1405de690(auStack_1f8,pauVar22,puStack_220,uVar5,in_stack_fffffffffffffd98);
          if (auStack_1d8[0] != '\x11') {
            LOCK();
            *plStack_1c0 = *plStack_1c0 + -1;
            UNLOCK();
            if (*plStack_1c0 == 0) {
              pdb_140c7b7a0(&plStack_1c0);
            }
          }
          *puStack_210 = uStack_11c;
          uVar20 = pdb_1400af680(lStack_218,&uStack_124);
          pdb_140caae80(auStack_1f8,lStack_208,uVar20,&uStack_124);
          uVar13 = uVar13 - 1 & uVar13;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      param_4 = (longlong *)0x0;
      if ((lStack_138 != 0) && (uStack_110 != 0)) {
        pub_1406abac0(pbStack_130,uStack_110,uStack_108);
      }
      pbStack_e0 = (byte *)param_7[1];
      pauStack_d8 = pauStack_a0;
      uStack_d0 = CONCAT44((int)pbStack_90,(int)param_7[3]);
      lStack_c8 = *puStack_200;
      pauStack_c0 = (undefined1 (*) [16])puStack_200[1];
      uStack_b8 = puStack_200[2];
      uStack_b0 = puStack_200[3];
      puStack_98 = (undefined8 *)puStack_100;
      pbStack_90 = pbStack_f8;
      pauStack_e8 = pauVar22;
      if (puStack_f0 != (undefined4 *)0x0) {
        lVar14 = (longlong)puStack_f0 << 2;
        pauStack_a0 = (undefined1 (*) [16])
                      CONCAT44(pauStack_a0._4_4_,*(undefined4 *)((longlong)puStack_148 + 0x1c));
        param_4 = (longlong *)puStack_148[2];
        uVar5 = *(undefined4 *)((longlong)plStack_140 + 0x1c);
        puVar7 = (undefined4 *)plStack_140[2];
        uVar20 = *param_9;
        lVar26 = 0;
        do {
          uVar13 = *(uint *)(pbStack_90 + lVar26);
          pauVar24 = (undefined1 (*) [16])(ulonglong)uVar13;
          pauVar22 = pauVar24;
          lVar17 = pdb_140c3ee20(uStack_a8);
          if (lVar17 != 3) {
            auStack_1e8._8_4_ = uVar13;
            auStack_1e8._0_8_ = pauVar22;
            auStack_1f8._8_8_ = lVar17;
            auStack_1f8._0_8_ = 4;
            uStack_234 = 2;
            *(undefined4 *)param_4 = pauStack_a0._0_4_;
            *puVar7 = uVar5;
            in_stack_fffffffffffffd98 = lStack_150;
            pdb_1414c40f0(auStack_1f8,0,aiStack_240,uStack_a8,lStack_150,0,&pauStack_e8,uVar20);
          }
          lVar26 = lVar26 + 4;
        } while (lVar14 != lVar26);
      }
      pauVar22 = (undefined1 (*) [16])0x0;
      if (puStack_98 != (undefined8 *)0x0) {
        pauVar22 = (undefined1 (*) [16])((longlong)puStack_98 << 2);
        pub_1406abac0(pbStack_90,(ulonglong)pauVar22,4);
      }
      if (lStack_160 == 0) {
        return;
      }
      plVar19 = (longlong *)pdb_140e97000();
      if ((char)plVar19[0xd] != '\x01') {
        pauVar22 = (undefined1 (*) [16])0x0;
        plVar19 = (longlong *)pdb_142dde6e0(plVar19);
        if (plVar19 == (longlong *)0x0) goto LAB_14089afb3;
      }
      if (*plVar19 == 0) break;
LAB_14089af59:
      plVar19 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_14089af65:
      uStack_81 = 1;
      lStack_c8 = pdb_140f4fd10();
      *plVar19 = lStack_c8;
      plVar19[1] = (longlong)pauVar22;
      *(undefined1 *)(plVar19 + 2) = 1;
    }
    *plVar19 = -1;
    pbStack_90 = (byte *)plVar19;
    pdb_140e95370(plVar19 + 1,uStack_158);
    *(longlong *)pbStack_90 = *(longlong *)pbStack_90 + 1;
  }
  return;
}

