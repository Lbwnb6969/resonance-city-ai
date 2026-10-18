// VA 0x14081df30, PDB extent 930 bytes
// system_wall_constructor::gpu_flush_plank_buffers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001413f3226) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::gpu_flush_plank_buffers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/lib.rs
   Extent: 930 */

void pdb_14081df30(undefined8 *param_1,longlong *param_2)

{
  ulonglong ******ppppppuVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  byte bVar6;
  code *pcVar7;
  uint uVar8;
  ulonglong *****pppppuVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  ushort uVar54;
  uint uVar55;
  longlong lVar56;
  undefined8 uVar57;
  ulonglong *******pppppppuVar58;
  ulonglong *******pppppppuVar59;
  undefined8 uVar60;
  ulonglong *******pppppppuVar61;
  ulonglong *******pppppppuVar62;
  longlong *plVar63;
  ulonglong ******ppppppuVar64;
  ulonglong *******pppppppuVar65;
  ulonglong ******ppppppuVar66;
  ulonglong uVar67;
  undefined4 *puVar68;
  ulonglong *****pppppuVar69;
  uint uVar70;
  ulonglong uVar71;
  undefined8 *puVar72;
  byte *pbVar73;
  longlong lVar74;
  longlong lVar75;
  byte *pbVar76;
  ulonglong uVar77;
  undefined *puVar78;
  undefined *puVar79;
  ulonglong ******ppppppuVar80;
  bool bVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  ulonglong *******unaff_XMM6_Qa;
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  ulonglong *******unaff_XMM8_Qa;
  ulonglong unaff_XMM8_Qb;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  ulonglong ******ppppppuStack_1b8;
  ulonglong *******pppppppuStack_1b0;
  ulonglong *******pppppppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulonglong *******pppppppuStack_188;
  ulonglong *******pppppppuStack_180;
  ulonglong *******pppppppuStack_178;
  ulonglong *******pppppppuStack_170;
  ulonglong *******pppppppuStack_168;
  ulonglong *******pppppppuStack_160;
  ulonglong ******ppppppuStack_158;
  ulonglong *******pppppppuStack_150;
  ulonglong *******pppppppuStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulonglong *******pppppppuStack_120;
  ulonglong *******pppppppuStack_118;
  ulonglong *******pppppppuStack_110;
  ulonglong *******pppppppuStack_108;
  ulonglong ******ppppppuStack_100;
  longlong lStack_f8;
  ulonglong *******pppppppuStack_e8;
  ulonglong *******pppppppuStack_e0;
  ulonglong *******pppppppuStack_d8;
  ulonglong ******ppppppuStack_d0;
  ulonglong *******pppppppuStack_c8;
  ulonglong *******pppppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  ulonglong *******pppppppuStack_90;
  longlong lStack_88;
  ulonglong *******pppppppuStack_80;
  ulonglong *******pppppppuStack_78;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  ulonglong *******pppppppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = (ulonglong *******)
              CONCAT17(unaff_XMM7_Bh,
                       CONCAT16(unaff_XMM7_Bg,
                                CONCAT15(unaff_XMM7_Bf,
                                         CONCAT14(unaff_XMM7_Be,
                                                  CONCAT13(unaff_XMM7_Bd,
                                                           CONCAT12(unaff_XMM7_Bc,
                                                                    CONCAT11(unaff_XMM7_Bb,
                                                                             unaff_XMM7_Ba)))))));
  pppppppuVar58 = (ulonglong *******)param_2[2];
  uStack_a0 = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x1c),(undefined4)uStack_a0);
  *(undefined4 *)pppppppuVar58 = *(undefined4 *)((longlong)param_2 + 0x1c);
  cVar51 = UNK_142e33c7f;
  cVar50 = UNK_142e33c7e;
  cVar49 = UNK_142e33c7d;
  cVar48 = UNK_142e33c7c;
  cVar47 = UNK_142e33c7b;
  cVar46 = UNK_142e33c7a;
  cVar45 = UNK_142e33c79;
  cVar44 = UNK_142e33c78;
  cVar43 = UNK_142e33c77;
  cVar42 = UNK_142e33c76;
  cVar41 = UNK_142e33c75;
  cVar40 = UNK_142e33c74;
  cVar39 = UNK_142e33c73;
  cVar38 = UNK_142e33c72;
  cVar37 = UNK_142e33c71;
  cVar53 = DAT_142e33c70;
  lVar75 = *param_2;
  lVar56 = lVar75 + 0x10;
  if (*(char *)(lVar75 + 8) == '\0') {
    lStack_88 = lVar56;
    pppppppuVar61 = pppppppuStack_80;
    if (*(longlong *)(lVar75 + 0x28) != 0) {
      lVar56 = *(longlong *)(lVar75 + 0x10);
      uVar67 = *(ulonglong *)(lVar75 + 0x18);
      pbVar76 = (byte *)0x153e2eb3e8651534;
      pppppppuVar59 = (ulonglong *******)0x0;
      iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                      CONCAT13(unaff_XMM7_Bd,
                               CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
      iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                      CONCAT13(unaff_XMM7_Bh,
                               CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
      iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                      CONCAT13(unaff_XMM7_Bl,
                               CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
      iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                      CONCAT13(unaff_XMM7_Bp,
                               CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
      pppppppuStack_78 = unaff_XMM6_Qa;
      uStack_5a = unaff_XMM7_Bo;
      uStack_59 = unaff_XMM7_Bp;
      pppppppuStack_58 = unaff_XMM8_Qa;
      uStack_50 = unaff_XMM8_Qb;
      while( true ) {
        uVar77 = (ulonglong)pbVar76 & uVar67;
        pcVar2 = (char *)(lVar56 + uVar77);
        cVar14 = *pcVar2;
        cVar15 = pcVar2[1];
        cVar16 = pcVar2[2];
        cVar17 = pcVar2[3];
        cVar18 = pcVar2[4];
        cVar19 = pcVar2[5];
        cVar20 = pcVar2[6];
        cVar21 = pcVar2[7];
        cVar22 = pcVar2[8];
        cVar23 = pcVar2[9];
        cVar24 = pcVar2[10];
        cVar25 = pcVar2[0xb];
        cVar26 = pcVar2[0xc];
        cVar27 = pcVar2[0xd];
        cVar28 = pcVar2[0xe];
        cVar29 = pcVar2[0xf];
        auVar82[0] = -(cVar14 == cVar53);
        auVar82[1] = -(cVar15 == cVar37);
        auVar82[2] = -(cVar16 == cVar38);
        auVar82[3] = -(cVar17 == cVar39);
        auVar82[4] = -(cVar18 == cVar40);
        auVar82[5] = -(cVar19 == cVar41);
        auVar82[6] = -(cVar20 == cVar42);
        auVar82[7] = -(cVar21 == cVar43);
        auVar82[8] = -(cVar22 == cVar44);
        auVar82[9] = -(cVar23 == cVar45);
        auVar82[10] = -(cVar24 == cVar46);
        auVar82[0xb] = -(cVar25 == cVar47);
        auVar82[0xc] = -(cVar26 == cVar48);
        auVar82[0xd] = -(cVar27 == cVar49);
        auVar82[0xe] = -(cVar28 == cVar50);
        auVar82[0xf] = -(cVar29 == cVar51);
        uVar54 = (ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe | (ushort)(auVar82[0xf] >> 7) << 0xf
        ;
        uVar55 = (uint)uVar54;
        pppppppuVar61 = pppppppuStack_80;
        while (pppppppuStack_80 = pppppppuVar59, uVar54 != 0) {
          uVar70 = 0;
          for (uVar8 = uVar55; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar70 = uVar70 + 1;
          }
          lVar74 = lVar56 + (uVar70 + uVar77 & uVar67) * -0x10;
          pppppppuStack_e0 = (ulonglong *******)0x14081dff8;
          puStack_98 = param_1;
          cVar52 = pdb_140df4430(&UNK_1433056b0,lVar74 + -0x10);
          if (cVar52 != '\0') {
            puVar5 = *(undefined8 **)(lVar74 + -8);
            pppppppuStack_e0 = (ulonglong *******)0x14081e041;
            lVar56 = (**(code **)(puVar5[1] + 0x20))(*puVar5);
            pppppppuVar61 = pppppppuStack_80;
            if (lVar56 == 0) goto LAB_14081e224;
            uVar60 = *puStack_98;
            pppppppuStack_e0 = (ulonglong *******)0x14081e05e;
            uVar57 = pdb_140a92040(uVar60);
            pppppppuStack_e0 = (ulonglong *******)0x14081e069;
            pdb_1413f07a0(lVar56,uVar57);
            *(undefined4 *)pppppppuVar58 = uStack_a0._4_4_;
            cVar51 = UNK_142e33d7f;
            cVar50 = UNK_142e33d7e;
            cVar49 = UNK_142e33d7d;
            cVar48 = UNK_142e33d7c;
            cVar47 = UNK_142e33d7b;
            cVar46 = UNK_142e33d7a;
            cVar45 = UNK_142e33d79;
            cVar44 = UNK_142e33d78;
            cVar43 = UNK_142e33d77;
            cVar42 = UNK_142e33d76;
            cVar41 = UNK_142e33d75;
            cVar40 = UNK_142e33d74;
            cVar39 = UNK_142e33d73;
            cVar38 = UNK_142e33d72;
            cVar37 = UNK_142e33d71;
            cVar53 = DAT_142e33d70;
            if (*(char *)(lVar75 + 8) != '\0') goto LAB_14081e297;
            puVar5 = puStack_98;
            if (*(longlong *)(lVar75 + 0x28) == 0) goto LAB_14081e27f;
            lVar56 = *(longlong *)(lVar75 + 0x10);
            uVar67 = *(ulonglong *)(lVar75 + 0x18);
            puVar78 = (undefined *)0x28b1fb389ec7fd3e;
            puVar72 = (undefined8 *)0x0;
            goto LAB_14081e0af;
          }
          uVar54 = (ushort)(uVar55 - 1) & (ushort)uVar55;
          uVar55 = CONCAT22((short)(uVar55 - 1 >> 0x10),uVar54);
          param_1 = puStack_98;
          pppppppuVar59 = pppppppuStack_80;
          pppppppuVar61 = pppppppuStack_80;
        }
        auVar85[0] = -(cVar14 == (char)iVar10);
        auVar85[1] = -(cVar15 == (char)((uint)iVar10 >> 8));
        auVar85[2] = -(cVar16 == (char)((uint)iVar10 >> 0x10));
        auVar85[3] = -(cVar17 == (char)((uint)iVar10 >> 0x18));
        auVar85[4] = -(cVar18 == (char)iVar11);
        auVar85[5] = -(cVar19 == (char)((uint)iVar11 >> 8));
        auVar85[6] = -(cVar20 == (char)((uint)iVar11 >> 0x10));
        auVar85[7] = -(cVar21 == (char)((uint)iVar11 >> 0x18));
        auVar85[8] = -(cVar22 == (char)iVar12);
        auVar85[9] = -(cVar23 == (char)((uint)iVar12 >> 8));
        auVar85[10] = -(cVar24 == (char)((uint)iVar12 >> 0x10));
        auVar85[0xb] = -(cVar25 == (char)((uint)iVar12 >> 0x18));
        auVar85[0xc] = -(cVar26 == (char)iVar13);
        auVar85[0xd] = -(cVar27 == (char)((uint)iVar13 >> 8));
        auVar85[0xe] = -(cVar28 == (char)((uint)iVar13 >> 0x10));
        auVar85[0xf] = -(cVar29 == (char)((uint)iVar13 >> 0x18));
        if ((((((((((((((((SUB161(auVar85 >> 7,0) & 1) != 0 || (SUB161(auVar85 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar85 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar85 >> 0x1f,0) & 1) != 0) || (SUB161(auVar85 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar85 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar85 >> 0x37,0) & 1) != 0) || (SUB161(auVar85 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar85 >> 0x47,0) & 1) != 0) || (SUB161(auVar85 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar85 >> 0x57,0) & 1) != 0) || (SUB161(auVar85 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar85 >> 0x67,0) & 1) != 0) || (SUB161(auVar85 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar85 >> 0x77,0) & 1) != 0) || auVar85[0xf] < '\0') break;
        pbVar76 = (byte *)((longlong)pppppppuStack_80 + uVar77 + 0x10);
        pppppppuVar59 = pppppppuStack_80 + 2;
        pppppppuStack_80 = pppppppuVar61;
      }
    }
LAB_14081e224:
    pppppppuStack_80 = pppppppuVar61;
                    /* WARNING: Subroutine does not return */
    pppppppuStack_e0 = (ulonglong *******)0x14081e230;
    pdb_142dc8150(&UNK_1430096e8);
  }
LAB_14081e2a8:
  uStack_a8 = lVar56;
  uStack_b8 = &UNK_143305770;
                    /* WARNING: Subroutine does not return */
  pppppppuStack_e0 = (ulonglong *******)0x14081e2d1;
  pdb_142dc8170(&UNK_1433056e8,0x2b,&uStack_a8,&UNK_1433056c8);
LAB_14081e0af:
  uVar77 = (ulonglong)puVar78 & uVar67;
  pcVar2 = (char *)(lVar56 + uVar77);
  cVar14 = *pcVar2;
  cVar15 = pcVar2[1];
  cVar16 = pcVar2[2];
  cVar17 = pcVar2[3];
  cVar18 = pcVar2[4];
  cVar19 = pcVar2[5];
  cVar20 = pcVar2[6];
  cVar21 = pcVar2[7];
  cVar22 = pcVar2[8];
  cVar23 = pcVar2[9];
  cVar24 = pcVar2[10];
  cVar25 = pcVar2[0xb];
  cVar26 = pcVar2[0xc];
  cVar27 = pcVar2[0xd];
  cVar28 = pcVar2[0xe];
  cVar29 = pcVar2[0xf];
  auVar83[0] = -(cVar14 == cVar53);
  auVar83[1] = -(cVar15 == cVar37);
  auVar83[2] = -(cVar16 == cVar38);
  auVar83[3] = -(cVar17 == cVar39);
  auVar83[4] = -(cVar18 == cVar40);
  auVar83[5] = -(cVar19 == cVar41);
  auVar83[6] = -(cVar20 == cVar42);
  auVar83[7] = -(cVar21 == cVar43);
  auVar83[8] = -(cVar22 == cVar44);
  auVar83[9] = -(cVar23 == cVar45);
  auVar83[10] = -(cVar24 == cVar46);
  auVar83[0xb] = -(cVar25 == cVar47);
  auVar83[0xc] = -(cVar26 == cVar48);
  auVar83[0xd] = -(cVar27 == cVar49);
  auVar83[0xe] = -(cVar28 == cVar50);
  auVar83[0xf] = -(cVar29 == cVar51);
  uVar54 = (ushort)(SUB161(auVar83 >> 7,0) & 1) | (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe | (ushort)(auVar83[0xf] >> 7) << 0xf;
  uVar55 = (uint)uVar54;
  puVar5 = puStack_98;
  while (puStack_98 = puVar72, uVar54 != 0) {
    uVar70 = 0;
    for (uVar8 = uVar55; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar70 = uVar70 + 1;
    }
    lVar74 = lVar56 + (uVar70 + uVar77 & uVar67) * -0x10;
    pppppppuStack_e0 = (ulonglong *******)0x14081e0fa;
    pppppppuStack_90 = pppppppuVar58;
    cVar52 = pdb_140df4430(&UNK_1433056a0,lVar74 + -0x10);
    if (cVar52 != '\0') {
      puVar5 = *(undefined8 **)(lVar74 + -8);
      pppppppuStack_e0 = (ulonglong *******)0x14081e150;
      lVar56 = (**(code **)(puVar5[1] + 0x20))(*puVar5);
      pppppppuVar58 = pppppppuStack_90;
      puVar5 = puStack_98;
      if (lVar56 == 0) goto LAB_14081e27f;
      pppppppuStack_e0 = (ulonglong *******)0x14081e169;
      uVar57 = pdb_140a92040(uVar60);
      pppppppuStack_e0 = (ulonglong *******)0x14081e174;
      pdb_1413f41c0(lVar56,uVar57);
      *(undefined4 *)pppppppuVar58 = uStack_a0._4_4_;
      cVar51 = UNK_142e3438f;
      cVar50 = UNK_142e3438e;
      cVar49 = UNK_142e3438d;
      cVar48 = UNK_142e3438c;
      cVar47 = UNK_142e3438b;
      cVar46 = UNK_142e3438a;
      cVar45 = UNK_142e34389;
      cVar44 = UNK_142e34388;
      cVar43 = UNK_142e34387;
      cVar42 = UNK_142e34386;
      cVar41 = UNK_142e34385;
      cVar40 = UNK_142e34384;
      cVar39 = UNK_142e34383;
      cVar38 = UNK_142e34382;
      cVar37 = UNK_142e34381;
      cVar53 = DAT_142e34380;
      if (*(char *)(lVar75 + 8) != '\0') goto LAB_14081e297;
      if (*(longlong *)(lVar75 + 0x28) == 0) goto LAB_14081e28b;
      lVar56 = *(longlong *)(lVar75 + 0x10);
      uVar67 = *(ulonglong *)(lVar75 + 0x18);
      uVar77 = 0x2bf3b1a4ac675864;
      lVar75 = 0;
      goto LAB_14081e1bb;
    }
    uVar54 = (ushort)(uVar55 - 1) & (ushort)uVar55;
    uVar55 = CONCAT22((short)(uVar55 - 1 >> 0x10),uVar54);
    puVar72 = puStack_98;
    pppppppuVar58 = pppppppuStack_90;
    puVar5 = puStack_98;
  }
  goto LAB_14081e120;
LAB_14081e297:
  uStack_a8 = lStack_88;
  lVar56 = uStack_a8;
  goto LAB_14081e2a8;
LAB_14081e1bb:
  uVar77 = uVar77 & uVar67;
  pcVar2 = (char *)(lVar56 + uVar77);
  cVar14 = *pcVar2;
  cVar15 = pcVar2[1];
  cVar16 = pcVar2[2];
  cVar17 = pcVar2[3];
  cVar18 = pcVar2[4];
  cVar19 = pcVar2[5];
  cVar20 = pcVar2[6];
  cVar21 = pcVar2[7];
  cVar22 = pcVar2[8];
  cVar23 = pcVar2[9];
  cVar24 = pcVar2[10];
  cVar25 = pcVar2[0xb];
  cVar26 = pcVar2[0xc];
  cVar27 = pcVar2[0xd];
  cVar28 = pcVar2[0xe];
  cVar29 = pcVar2[0xf];
  auVar84[0] = -(cVar14 == cVar53);
  auVar84[1] = -(cVar15 == cVar37);
  auVar84[2] = -(cVar16 == cVar38);
  auVar84[3] = -(cVar17 == cVar39);
  auVar84[4] = -(cVar18 == cVar40);
  auVar84[5] = -(cVar19 == cVar41);
  auVar84[6] = -(cVar20 == cVar42);
  auVar84[7] = -(cVar21 == cVar43);
  auVar84[8] = -(cVar22 == cVar44);
  auVar84[9] = -(cVar23 == cVar45);
  auVar84[10] = -(cVar24 == cVar46);
  auVar84[0xb] = -(cVar25 == cVar47);
  auVar84[0xc] = -(cVar26 == cVar48);
  auVar84[0xd] = -(cVar27 == cVar49);
  auVar84[0xe] = -(cVar28 == cVar50);
  auVar84[0xf] = -(cVar29 == cVar51);
  uVar54 = (ushort)(SUB161(auVar84 >> 7,0) & 1) | (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe | (ushort)(auVar84[0xf] >> 7) << 0xf;
  uVar55 = (uint)uVar54;
  while (uVar54 != 0) {
    uVar70 = 0;
    for (uVar8 = uVar55; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar70 = uVar70 + 1;
    }
    lVar74 = lVar56 + (uVar70 + uVar77 & uVar67) * -0x10;
    pppppppuStack_e0 = (ulonglong *******)0x14081e1f8;
    cVar52 = pdb_140df4430(&UNK_1433056a8,lVar74 + -0x10);
    if (cVar52 != '\0') {
      puVar5 = *(undefined8 **)(lVar74 + -8);
      pppppppuStack_e0 = (ulonglong *******)0x14081e23e;
      pppppppuVar58 = (ulonglong *******)(**(code **)(puVar5[1] + 0x20))(*puVar5);
      if (pppppppuVar58 == (ulonglong *******)0x0) goto LAB_14081e28b;
      pppppppuStack_e0 = (ulonglong *******)0x14081e24e;
      uStack_190 = pdb_140a92040(uVar60);
      uStack_48 = 0xfffffffffffffffe;
      pppppppuVar61 = (ulonglong *******)pppppppuVar58[9];
      LOCK();
      ppppppuVar66 = *pppppppuVar61;
      *pppppppuVar61 = (ulonglong ******)((longlong)*pppppppuVar61 + 1);
      UNLOCK();
      if (*pppppppuVar61 == (ulonglong ******)0x0 ||
          SCARRY8((longlong)ppppppuVar66,1) != (longlong)*pppppppuVar61 < 0) goto LAB_1413f3a3f;
      pppppppuVar59 = pppppppuVar61 + 2;
      LOCK();
      bVar81 = *(byte *)(pppppppuVar61 + 2) == 0;
      if (bVar81) {
        *(byte *)(pppppppuVar61 + 2) = 1;
      }
      UNLOCK();
      pppppppuStack_188 = pppppppuVar61;
      if (!bVar81) {
        pdb_142dbd1a0(pppppppuVar59,uStack_190,1000000000);
      }
      pdb_140e9a150(pppppppuVar59);
      pppppppuStack_108 = pppppppuVar61 + 3;
      ppppppuStack_100 = pppppppuVar61[5];
      pppppppuVar61[5] = (ulonglong ******)0x0;
      pppppppuStack_110 = (ulonglong *******)(pppppppuVar61[4] + (longlong)ppppppuStack_100);
      lStack_f8 = 0;
      pppppppuVar62 = pppppppuVar58 + 0xb;
      pbVar76 = (byte *)((longlong)pppppppuVar58 + 0x59);
      pppppppuVar65 = pppppppuVar58 + 0xc;
      pppppppuVar61 = (ulonglong *******)pppppppuVar61[4];
      pppppppuStack_120 = pppppppuVar59;
      pppppppuStack_80 = pppppppuVar65;
      pppppppuStack_78 = pppppppuVar58;
      uStack_68 = pppppppuVar62;
      goto LAB_1413f259b;
    }
    uVar54 = (ushort)(uVar55 - 1) & (ushort)uVar55;
    uVar55 = CONCAT22((short)(uVar55 - 1 >> 0x10),uVar54);
  }
  goto LAB_14081e209;
LAB_1413f259b:
  lVar56 = lStack_f8;
  pppppppuVar59 = pppppppuStack_108;
  if (pppppppuVar61 == pppppppuStack_110) goto LAB_1413f286c;
  pppppppuStack_118 = pppppppuVar61 + 1;
  pppppppuVar61 = (ulonglong *******)*pppppppuVar61;
  if (pppppppuVar61 == (ulonglong *******)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305ca0);
  }
  ppppppuVar66 = pppppppuVar61[2];
  pppppppuStack_58 = pppppppuVar61;
  if (ppppppuVar66 != (ulonglong ******)0x0) {
    ppppppuVar80 = pppppppuVar61[1];
    lVar56 = 0;
    do {
      uVar55 = *(uint *)((longlong)ppppppuVar80 + lVar56);
      ppppppuVar64 = (ulonglong ******)(ulonglong)uVar55;
      if (pppppppuVar58[2] <= ppppppuVar64) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(ppppppuVar64,pppppppuVar58[2],&UNK_143305cb8);
      }
      *(undefined1 *)((longlong)pppppppuVar58[1] + (longlong)ppppppuVar64) = 0;
      ppppppuVar64 = (ulonglong ******)(ulonglong)(uVar55 >> 6);
      if (pppppppuVar58[4] <= ppppppuVar64) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(ppppppuVar64,pppppppuVar58[4],&UNK_143305b10);
      }
      bVar6 = (byte)uVar55 & 0x3f;
      LOCK();
      pppppppuVar58[3][(longlong)ppppppuVar64] =
           (ulonglong *****)
           ((ulonglong)pppppppuVar58[3][(longlong)ppppppuVar64] &
           (-2L << bVar6 | 0xfffffffffffffffeU >> 0x40 - bVar6));
      UNLOCK();
      lVar56 = lVar56 + 4;
    } while ((longlong)ppppppuVar66 << 2 != lVar56);
  }
  LOCK();
  ppppppuVar66 = *pppppppuVar62;
  if (ppppppuVar66 == (ulonglong ******)0x0) {
    *pppppppuVar62 = (ulonglong ******)0x8;
  }
  UNLOCK();
  if (ppppppuVar66 != (ulonglong ******)0x0) {
    pdb_142dbc1f0(pppppppuVar62);
  }
  pdb_140e9a150(pppppppuVar62);
  pdb_140e9a150(pbVar76);
  pppppppuStack_170 = (ulonglong *******)pppppppuStack_58[1];
  ppppppuStack_158 = pppppppuStack_58[2];
  pppppppuStack_58[2] = (ulonglong ******)0x0;
  pppppppuStack_168 =
       (ulonglong *******)((longlong)pppppppuStack_170 + (longlong)ppppppuStack_158 * 4);
  pppppppuStack_160 = pppppppuStack_58;
  pppppppuStack_150 = (ulonglong *******)0x0;
  ppppppuVar66 = pppppppuVar58[0xe];
  if ((ulonglong ******)((longlong)pppppppuVar58[0xc] - (longlong)ppppppuVar66) < ppppppuStack_158)
  {
    uStack_59 = 1;
    pdb_142d7f1b0(pppppppuStack_80,ppppppuVar66,ppppppuStack_158,4,4);
    ppppppuVar66 = pppppppuVar58[0xe];
  }
  ppppppuVar80 = pppppppuVar58[0xd];
  pppppppuStack_e8 = pppppppuStack_170;
  pppppppuStack_e0 = pppppppuStack_168;
  pppppppuStack_c8 = pppppppuStack_150;
  pppppppuStack_d8 = pppppppuStack_160;
  ppppppuStack_d0 = ppppppuStack_158;
  if (pppppppuStack_170 != pppppppuStack_168) {
    pbVar73 = (byte *)((longlong)pppppppuStack_168 + (-4 - (longlong)pppppppuStack_170));
    pppppppuVar61 = pppppppuStack_168;
    if (((byte *)0x3b < pbVar73) &&
       ((pppppppuVar59 = (ulonglong *******)((longlong)ppppppuVar80 + (longlong)ppppppuVar66 * 4),
        pppppppuStack_168 <= pppppppuVar59 ||
        (uVar67 = (ulonglong)((longlong)pppppppuStack_168 + (-4 - (longlong)pppppppuStack_170)) &
                  0xfffffffffffffffc,
        (byte *)((longlong)pppppppuVar59 + uVar67 + 4) <=
        (byte *)((longlong)pppppppuStack_168 + (-4 - uVar67)))))) {
      uVar67 = ((ulonglong)pbVar73 >> 2) + 1;
      uVar77 = uVar67 & 0xfffffffffffffff8;
      pppppppuStack_e0 = (ulonglong *******)((longlong)pppppppuStack_168 + uVar77 * -4);
      puVar68 = (undefined4 *)((longlong)ppppppuVar80 + (longlong)ppppppuVar66 * 4 + 0x10);
      ppppppuVar66 = (ulonglong ******)((longlong)ppppppuVar66 + uVar77);
      lVar56 = 0;
      do {
        pbVar73 = (byte *)((longlong)pppppppuStack_168 + lVar56 * 4 + -0x20);
        uVar30 = *(undefined4 *)pbVar73;
        uVar31 = *(undefined4 *)(pbVar73 + 4);
        uVar32 = *(undefined4 *)(pbVar73 + 8);
        uVar33 = *(undefined4 *)(pbVar73 + 0xc);
        pbVar73 = (byte *)((longlong)pppppppuStack_168 + lVar56 * 4 + -0x10);
        uVar34 = *(undefined4 *)pbVar73;
        uVar35 = *(undefined4 *)(pbVar73 + 4);
        uVar36 = *(undefined4 *)(pbVar73 + 8);
        puVar68[-4] = *(undefined4 *)(pbVar73 + 0xc);
        puVar68[-3] = uVar36;
        puVar68[-2] = uVar35;
        puVar68[-1] = uVar34;
        *puVar68 = uVar33;
        puVar68[1] = uVar32;
        puVar68[2] = uVar31;
        puVar68[3] = uVar30;
        puVar68 = puVar68 + 8;
        lVar56 = lVar56 + -8;
      } while (-lVar56 != uVar77);
      pppppppuVar61 = pppppppuStack_e0;
      pppppppuVar58 = pppppppuStack_78;
      if (uVar67 == uVar77) goto LAB_1413f27bb;
    }
    do {
      pppppppuStack_e0 = (ulonglong *******)((longlong)pppppppuVar61 + -4);
      *(undefined4 *)((longlong)ppppppuVar80 + (longlong)ppppppuVar66 * 4) =
           *(undefined4 *)((longlong)pppppppuVar61 + -4);
      ppppppuVar66 = (ulonglong ******)((longlong)ppppppuVar66 + 1);
      pppppppuVar61 = pppppppuStack_e0;
    } while (pppppppuStack_e0 != pppppppuStack_170);
  }
LAB_1413f27bb:
  pppppppuVar58[0xe] = ppppppuVar66;
  uStack_59 = 0;
  pdb_1409693f0(&pppppppuStack_e8);
  pppppppuVar62 = uStack_68;
  pdb_140e9a350(uStack_68);
  pdb_140e9a350(pbVar76);
  LOCK();
  ppppppuVar66 = *pppppppuVar62;
  if (ppppppuVar66 == (ulonglong ******)0x8) {
    *pppppppuVar62 = (ulonglong ******)0x0;
  }
  UNLOCK();
  if (ppppppuVar66 != (ulonglong ******)0x8) {
    pdb_142dbca40(pppppppuVar62,0);
  }
  pppppppuVar61 = pppppppuStack_58;
  if (*pppppppuStack_58 != (ulonglong ******)0x0) {
    pub_1406abac0((byte *)pppppppuStack_58[1],(longlong)*pppppppuStack_58 << 2,4);
  }
  pppppppuVar65 = (ulonglong *******)0x20;
  pub_1406abac0((byte *)pppppppuVar61,0x20,8);
  pppppppuVar61 = pppppppuStack_118;
  goto LAB_1413f259b;
LAB_14081e209:
  auVar87[0] = -(cVar14 == -1);
  auVar87[1] = -(cVar15 == -1);
  auVar87[2] = -(cVar16 == -1);
  auVar87[3] = -(cVar17 == -1);
  auVar87[4] = -(cVar18 == -1);
  auVar87[5] = -(cVar19 == -1);
  auVar87[6] = -(cVar20 == -1);
  auVar87[7] = -(cVar21 == -1);
  auVar87[8] = -(cVar22 == -1);
  auVar87[9] = -(cVar23 == -1);
  auVar87[10] = -(cVar24 == -1);
  auVar87[0xb] = -(cVar25 == -1);
  auVar87[0xc] = -(cVar26 == -1);
  auVar87[0xd] = -(cVar27 == -1);
  auVar87[0xe] = -(cVar28 == -1);
  auVar87[0xf] = -(cVar29 == -1);
  if ((((((((((((((((SUB161(auVar87 >> 7,0) & 1) != 0 || (SUB161(auVar87 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar87 >> 0x17,0) & 1) != 0) || (SUB161(auVar87 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar87 >> 0x27,0) & 1) != 0) || (SUB161(auVar87 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar87 >> 0x37,0) & 1) != 0) || (SUB161(auVar87 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar87 >> 0x47,0) & 1) != 0) || (SUB161(auVar87 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar87 >> 0x57,0) & 1) != 0) || (SUB161(auVar87 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar87 >> 0x67,0) & 1) != 0) || (SUB161(auVar87 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar87 >> 0x77,0) & 1) != 0) || auVar87[0xf] < '\0') {
LAB_14081e28b:
                    /* WARNING: Subroutine does not return */
    pppppppuStack_e0 = (ulonglong *******)0x14081e297;
    pdb_142dc8150(&UNK_143009718);
  }
  uVar77 = uVar77 + lVar75 + 0x10;
  lVar75 = lVar75 + 0x10;
  goto LAB_14081e1bb;
LAB_14081e120:
  auVar86[0] = -(cVar14 == -1);
  auVar86[1] = -(cVar15 == -1);
  auVar86[2] = -(cVar16 == -1);
  auVar86[3] = -(cVar17 == -1);
  auVar86[4] = -(cVar18 == -1);
  auVar86[5] = -(cVar19 == -1);
  auVar86[6] = -(cVar20 == -1);
  auVar86[7] = -(cVar21 == -1);
  auVar86[8] = -(cVar22 == -1);
  auVar86[9] = -(cVar23 == -1);
  auVar86[10] = -(cVar24 == -1);
  auVar86[0xb] = -(cVar25 == -1);
  auVar86[0xc] = -(cVar26 == -1);
  auVar86[0xd] = -(cVar27 == -1);
  auVar86[0xe] = -(cVar28 == -1);
  auVar86[0xf] = -(cVar29 == -1);
  if ((((((((((((((((SUB161(auVar86 >> 7,0) & 1) != 0 || (SUB161(auVar86 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar86 >> 0x17,0) & 1) != 0) || (SUB161(auVar86 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar86 >> 0x27,0) & 1) != 0) || (SUB161(auVar86 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar86 >> 0x37,0) & 1) != 0) || (SUB161(auVar86 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar86 >> 0x47,0) & 1) != 0) || (SUB161(auVar86 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar86 >> 0x57,0) & 1) != 0) || (SUB161(auVar86 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar86 >> 0x67,0) & 1) != 0) || (SUB161(auVar86 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar86 >> 0x77,0) & 1) != 0) || auVar86[0xf] < '\0') {
LAB_14081e27f:
    puStack_98 = puVar5;
                    /* WARNING: Subroutine does not return */
    pppppppuStack_e0 = (ulonglong *******)0x14081e28b;
    pdb_142dc8150(&UNK_143009700);
  }
  puVar78 = (undefined *)((longlong)puStack_98 + uVar77 + 0x10);
  puVar72 = puStack_98 + 2;
  puStack_98 = puVar5;
  goto LAB_14081e0af;
LAB_1413f286c:
  if (lStack_f8 != 0) {
    ppppppuVar66 = pppppppuStack_108[2];
    if (ppppppuStack_100 != ppppppuVar66) {
      pppppppuVar65 = (ulonglong *******)(pppppppuStack_108[1] + (longlong)ppppppuStack_100);
      pub_142e32770(pppppppuStack_108[1] + (longlong)ppppppuVar66);
    }
    pppppppuVar59[2] = (ulonglong ******)((longlong)ppppppuVar66 + lVar56);
  }
  pppppppuVar61 = pppppppuStack_120;
  pdb_140e9a350();
  LOCK();
  bVar6 = *(byte *)pppppppuVar61;
  if (bVar6 == 1) {
    *(byte *)pppppppuVar61 = 0;
  }
  UNLOCK();
  if (bVar6 != 1) {
    pppppppuVar65 = (ulonglong *******)0x0;
    pdb_142dbcef0(pppppppuVar61);
  }
  LOCK();
  *pppppppuStack_188 = (ulonglong ******)((longlong)*pppppppuStack_188 + -1);
  UNLOCK();
  if (*pppppppuStack_188 == (ulonglong ******)0x0) {
    pdb_140c7ace0(&pppppppuStack_188);
  }
  cVar53 = pdb_140e94b40();
  pppppppuStack_120 = (ulonglong *******)CONCAT71(pppppppuStack_120._1_7_,cVar53);
  if (cVar53 == '\0') {
LAB_1413f2ad4:
    ppppppuVar66 = (ulonglong ******)((longlong)pppppppuVar58[0xf] << 0xd);
    ppppppuStack_1b8 = ppppppuVar66;
    if (pppppppuVar58[10] < ppppppuVar66) {
      uVar60 = pdb_140e1d1f0((longlong)pppppppuVar58[0xf] << 0x12,0x12,1);
      uVar60 = pdb_140e1d260(uVar60,4);
      pdb_141472d90(&pppppppuStack_e8,uStack_190,&UNK_143305c64,0xb,uVar60,0);
      pppppppuVar61 = pppppppuStack_e0;
      if (pppppppuStack_e8 != (ulonglong *******)0xb) {
        uStack_130 = (undefined4)uStack_a8;
        uStack_12c = uStack_a8._4_4_;
        uStack_128 = (undefined4)uStack_a0;
        uStack_124 = uStack_a0._4_4_;
        uStack_140 = (undefined4)uStack_b8;
        uStack_13c = uStack_b8._4_4_;
        uStack_138 = (undefined4)uStack_b0;
        uStack_134 = uStack_b0._4_4_;
        pppppppuStack_150 = pppppppuStack_c8;
        pppppppuStack_148 = pppppppuStack_c0;
        pppppppuStack_160 = pppppppuStack_d8;
        ppppppuStack_158 = ppppppuStack_d0;
        pppppppuStack_170 = pppppppuStack_e8;
        pppppppuStack_168 = pppppppuStack_e0;
        pppppppuStack_e8 = (ulonglong *******)&UNK_143305c70;
        pppppppuStack_e0 = (ulonglong *******)pdb_1402ed400;
        pppppppuStack_d8 = (ulonglong *******)&pppppppuStack_170;
        ppppppuStack_d0 = (ulonglong ******)pdb_140e18fa0;
        pppppppuVar61 = (ulonglong *******)&pppppppuStack_118;
        pdb_140f60760(pppppppuVar61,&UNK_143305c09,&pppppppuStack_e8);
        pppppppuStack_188 = pppppppuStack_118;
        pppppppuStack_180 = pppppppuStack_110;
        pppppppuStack_178 = pppppppuStack_108;
        if (*_DAT_143ca4298 != 0) goto LAB_1413f38a8;
        goto LAB_1413f2d50;
      }
      pppppppuStack_118 = pppppppuStack_e0;
      if (2 < *_DAT_143ca8e90) {
        pppppppuStack_160 = pppppppuVar58 + 10;
        pppppppuStack_170 = (ulonglong *******)&UNK_143305c70;
        pppppppuStack_168 = (ulonglong *******)pdb_1402ed400;
        ppppppuStack_158 = (ulonglong ******)pdb_140f72a40;
        pppppppuStack_150 = &ppppppuStack_1b8;
        pppppppuStack_148 = (ulonglong *******)pdb_140f72a40;
        pppppppuStack_e8 = (ulonglong *******)0x0;
        pppppppuStack_e0 = (ulonglong *******)&UNK_143305bdd;
        pppppppuStack_d8 = (ulonglong *******)0x2c;
        ppppppuStack_d0 = (ulonglong ******)0x0;
        pppppppuStack_c8 = (ulonglong *******)&UNK_143305ab8;
        pppppppuStack_c0 = (ulonglong *******)0x38;
        uStack_b8 = (undefined *)0x3;
        uStack_b0 = &UNK_143305bdd;
        uStack_a8 = 0x2c;
        uStack_a0 = 0x16200000001;
        puStack_98 = (undefined8 *)&UNK_143305bc0;
        pppppppuStack_90 = (ulonglong *******)&pppppppuStack_170;
        uStack_5a = 1;
        pdb_140f332f0(&uStack_69,&pppppppuStack_e8);
      }
      pppppppuStack_58 = pppppppuVar61;
      pdb_1413fffc0(pppppppuVar58);
      *pppppppuStack_78 = (ulonglong ******)pppppppuStack_58;
      pppppppuStack_78[10] = ppppppuVar66;
      ppppppuVar66 = pppppppuStack_78[8];
      if (pppppppuStack_78[4] < pppppppuStack_78[8]) {
        ppppppuVar66 = pppppppuStack_78[4];
      }
      pppppppuVar58 = pppppppuStack_78;
      if (ppppppuVar66 != (ulonglong ******)0x0) {
        ppppppuVar80 = pppppppuStack_78[7];
        ppppppuVar64 = pppppppuStack_78[3];
        uVar67 = (ulonglong)((uint)ppppppuVar66 & 7);
        if (ppppppuVar66 < (ulonglong ******)0x8) {
          uVar77 = 0;
        }
        else {
          uVar77 = 0;
          do {
            LOCK();
            ppppppuVar80[uVar77] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar80[uVar77] | (ulonglong)ppppppuVar64[uVar77]);
            UNLOCK();
            LOCK();
            ppppppuVar80[uVar77 + 1] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar80[uVar77 + 1] | (ulonglong)ppppppuVar64[uVar77 + 1]);
            UNLOCK();
            LOCK();
            ppppppuVar80[uVar77 + 2] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar80[uVar77 + 2] | (ulonglong)ppppppuVar64[uVar77 + 2]);
            UNLOCK();
            LOCK();
            ppppppuVar80[uVar77 + 3] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar80[uVar77 + 3] | (ulonglong)ppppppuVar64[uVar77 + 3]);
            UNLOCK();
            LOCK();
            ppppppuVar80[uVar77 + 4] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar80[uVar77 + 4] | (ulonglong)ppppppuVar64[uVar77 + 4]);
            UNLOCK();
            LOCK();
            ppppppuVar80[uVar77 + 5] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar80[uVar77 + 5] | (ulonglong)ppppppuVar64[uVar77 + 5]);
            UNLOCK();
            LOCK();
            ppppppuVar80[uVar77 + 6] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar80[uVar77 + 6] | (ulonglong)ppppppuVar64[uVar77 + 6]);
            UNLOCK();
            LOCK();
            ppppppuVar80[uVar77 + 7] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar80[uVar77 + 7] | (ulonglong)ppppppuVar64[uVar77 + 7]);
            UNLOCK();
            uVar77 = uVar77 + 8;
          } while (((ulonglong)ppppppuVar66 & 0xfffffffffffffff8) != uVar77);
          if (uVar67 == 0) goto LAB_1413f30e1;
        }
        uVar71 = 0;
        do {
          LOCK();
          ppppppuVar80[uVar77 + uVar71] =
               (ulonglong *****)
               ((ulonglong)ppppppuVar80[uVar77 + uVar71] | (ulonglong)ppppppuVar64[uVar77 + uVar71])
          ;
          UNLOCK();
          uVar71 = uVar71 + 1;
        } while (uVar67 != uVar71);
      }
    }
LAB_1413f30e1:
    ppppppuVar80 = pppppppuVar58[10];
    pppppppuStack_170 = (ulonglong *******)0x0;
    pppppppuStack_168 = (ulonglong *******)0x8;
    pppppppuStack_160 = (ulonglong *******)0x0;
    ppppppuVar64 = pppppppuVar58[7];
    ppppppuVar66 = ppppppuVar64 + (longlong)pppppppuVar58[8];
    lVar56 = 0;
    uVar77 = 0;
    uVar67 = 0;
    while (pppppppuVar61 = pppppppuStack_160, ppppppuVar64 != ppppppuVar66) {
      pppppppuVar58 = (ulonglong *******)(lVar56 << 6);
      while( true ) {
        lVar56 = lVar56 + 1;
        pppppuVar69 = *ppppppuVar64;
        *ppppppuVar64 = (ulonglong *****)0x0;
        ppppppuVar64 = ppppppuVar64 + 1;
        if (pppppuVar69 != (ulonglong *****)0x0) break;
        pppppppuVar58 = pppppppuVar58 + 8;
        if (ppppppuVar64 == ppppppuVar66) goto LAB_1413f322b;
      }
      do {
        iVar10 = 0;
        for (pppppuVar9 = pppppuVar69; ((ulonglong)pppppuVar9 & 1) == 0;
            pppppuVar9 = (ulonglong *****)((ulonglong)pppppuVar9 >> 1 | 0x8000000000000000)) {
          iVar10 = iVar10 + 1;
        }
        pppppuVar69 = (ulonglong *****)((longlong)pppppuVar69 - 1U & (ulonglong)pppppuVar69);
        uVar55 = iVar10 + (int)pppppppuVar58;
        if (uVar55 < (uint)((ulonglong)ppppppuVar80 >> 5)) {
          uVar70 = (uint)uVar77;
          uVar71 = uVar67;
          if ((uVar70 != uVar55) && (uVar71 = (ulonglong)uVar55, (uint)uVar67 < uVar70)) {
            if (pppppppuStack_160 == pppppppuStack_170) {
              uStack_50 = CONCAT17(1,(undefined7)uStack_50);
              pppppppuStack_58 = (ulonglong *******)CONCAT44(pppppppuStack_58._4_4_,uVar70);
              uStack_68 = (ulonglong *******)CONCAT44(uStack_68._4_4_,(uint)uVar67);
              pppppppuStack_80 = pppppppuStack_160;
              pdb_142d8afd0(&pppppppuStack_170);
              uVar67 = (ulonglong)uStack_68 & 0xffffffff;
              uVar77 = (ulonglong)pppppppuStack_58 & 0xffffffff;
              pppppppuStack_160 = pppppppuStack_80;
            }
            pppppppuStack_168[(longlong)pppppppuStack_160 * 2] = (ulonglong ******)(uVar67 << 5);
            pppppppuStack_168[(longlong)pppppppuStack_160 * 2 + 1] = (ulonglong ******)(uVar77 << 5)
            ;
            pppppppuStack_160 = (ulonglong *******)((longlong)pppppppuStack_160 + 1);
            uVar71 = (ulonglong)uVar55;
          }
          uVar77 = (ulonglong)(uVar55 + 1);
          uVar67 = uVar71;
        }
      } while (pppppuVar69 != (ulonglong *****)0x0);
    }
LAB_1413f322b:
    if ((uint)uVar67 < (uint)uVar77) {
      if (pppppppuStack_160 == pppppppuStack_170) {
        uStack_50 = CONCAT17(1,(undefined7)uStack_50);
        pdb_142d8afd0(&pppppppuStack_170);
      }
      pppppppuStack_168[(longlong)pppppppuVar61 * 2] = (ulonglong ******)(uVar67 << 5);
      pppppppuStack_168[(longlong)pppppppuVar61 * 2 + 1] = (ulonglong ******)(uVar77 << 5);
      pppppppuStack_160 = (ulonglong *******)((longlong)pppppppuVar61 + 1);
    }
    uStack_50 = CONCAT17(1,(undefined7)uStack_50);
    cVar53 = pdb_140e94b40();
    pppppppuVar59 = pppppppuStack_78;
    if (cVar53 != '\0') {
      puVar79 = &UNK_143305d08;
      puVar78 = &UNK_143305cd0;
      do {
        bVar6 = puVar79[-1];
        uVar55 = (uint)(char)bVar6;
        if ((char)bVar6 < '\0') {
          bVar3 = puVar79[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar79[-3];
            if ((char)bVar4 < -0x40) {
              pbVar76 = puVar79 + -4;
              puVar79 = puVar79 + -4;
              uVar55 = bVar4 & 0x3f | (*pbVar76 & 7) << 6;
            }
            else {
              puVar79 = puVar79 + -3;
              uVar55 = bVar4 & 0xf;
            }
            uVar55 = bVar3 & 0x3f | uVar55 << 6;
          }
          else {
            puVar79 = puVar79 + -2;
            uVar55 = bVar3 & 0x1f;
          }
          uVar55 = (uint)(bVar6 & 0x3f) | uVar55 << 6;
          if (uVar55 != 0x5c) goto LAB_1413f3324;
LAB_1413f3336:
          if ((undefined *)0x38 < puVar79 + -0x143305ccf) goto LAB_1413f39e1;
          lVar56 = 0x38 - (longlong)(puVar79 + -0x143305ccf);
          puVar78 = puVar79 + 1;
          goto LAB_1413f3359;
        }
        puVar79 = puVar79 + -1;
        if (uVar55 == 0x5c) goto LAB_1413f3336;
LAB_1413f3324:
        if (uVar55 == 0x2f) goto LAB_1413f3336;
      } while (puVar79 != &UNK_143305cd0);
      lVar56 = 0x38;
LAB_1413f3359:
      uStack_50 = CONCAT17(1,(undefined7)uStack_50);
      pppppppuVar61 = (ulonglong *******)&pppppppuStack_e8;
      uVar60 = pdb_140f67ab0(pppppppuStack_160,pppppppuVar61,0x14);
      if ((longlong)pppppppuVar61 < 0) {
        uVar57 = 0;
LAB_1413f3382:
        uStack_50 = CONCAT17(1,(undefined7)uStack_50);
        pdb_142dc7e2a(uVar57,pppppppuVar61);
        goto LAB_1413f3a3f;
      }
      uStack_68 = pppppppuVar61;
      if (pppppppuVar61 == (ulonglong *******)0x0) {
        pppppppuStack_58 = (ulonglong *******)0x1;
      }
      else {
        pdb_14007ee60();
        uVar57 = 1;
        pppppppuVar59 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar61,1);
        if (pppppppuVar59 == (ulonglong *******)0x0) goto LAB_1413f3382;
        pppppppuStack_58 = pppppppuVar59;
        pub_142e32760(pppppppuVar59,uVar60,pppppppuVar61);
      }
      pppppppuVar59 = pppppppuStack_78;
      pppppppuVar61 = (ulonglong *******)pdb_140e97000();
      if ((*(byte *)(pppppppuVar61 + 0xd) != 1) &&
         (pppppppuVar61 = (ulonglong *******)pdb_142dd9610(pppppppuVar61,0),
         pppppppuVar61 == (ulonglong *******)0x0)) {
        pdb_142dc7890(&UNK_143307940);
        goto LAB_1413f3a3f;
      }
      pppppppuVar62 = uStack_68;
      if (*pppppppuVar61 != (ulonglong ******)0x0) {
        pdb_142dc8090(&UNK_1433079b0);
        goto LAB_1413f3a3f;
      }
      *pppppppuVar61 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_80 = pppppppuVar61;
      uStack_198 = pdb_140e94f10(pppppppuVar61 + 1,&UNK_143305d08,0x17,puVar78,lVar56,
                                 pppppppuStack_58,uStack_68);
      *pppppppuStack_80 = (ulonglong ******)((longlong)*pppppppuStack_80 + 1);
      if (pppppppuVar62 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_58,(ulonglong)pppppppuVar62,1);
      }
    }
    pppppppuStack_80 = (ulonglong *******)CONCAT71(pppppppuStack_80._1_7_,cVar53);
    pppppppuStack_e8 = (ulonglong *******)0x0;
    pppppppuStack_e0 = (ulonglong *******)0x8;
    pppppppuStack_d8 = (ulonglong *******)0x0;
    pppppppuStack_1b0 = pppppppuStack_170;
    uStack_68 = pppppppuStack_168 + (longlong)pppppppuStack_160 * 2;
    pppppppuVar61 = (ulonglong *******)0xffffffffffffffff;
    pppppppuVar65 = (ulonglong *******)0x0;
    pppppppuStack_1a8 = pppppppuStack_168;
    pppppppuVar62 = pppppppuStack_168;
    while (pppppppuVar62 != uStack_68) {
      pppppppuStack_58 = pppppppuVar62 + 2;
      ppppppuVar66 = pppppppuVar62[1];
      ppppppuVar80 = *pppppppuVar62;
      while (pppppppuVar62 = pppppppuStack_58, ppppppuVar80 < ppppppuVar66) {
        pppppppuVar58 = (ulonglong *******)((ulonglong)ppppppuVar80 >> 0xd);
        ppppppuVar64 = (ulonglong ******)(((ulonglong)ppppppuVar80 & 0xffffffffffffe000) + 0x2000);
        if (ppppppuVar66 <= ppppppuVar64) {
          ppppppuVar64 = ppppppuVar66;
        }
        if (pppppppuVar58 != pppppppuVar61) {
          if (pppppppuVar65 != (ulonglong *******)0x0) {
            if (pppppppuStack_78[6] <= pppppppuVar61) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppppppuVar61,pppppppuStack_78[6],&UNK_143305b28);
            }
            if (*(int *)(pppppppuStack_78[5] + (longlong)pppppppuVar61 * 3 + 2) != 0) {
              pdb_142dc8110(&UNK_143305b40,0x11,&UNK_143305b58);
              goto LAB_1413f3a3f;
            }
            ppppppuVar1 = pppppppuStack_78[5] + (longlong)pppppppuVar61 * 3;
            pdb_1424adef0(pppppppuStack_78,uStack_190,*ppppppuVar1,ppppppuVar1[1],pppppppuStack_e0,
                          pppppppuStack_d8,(longlong)pppppppuVar61 << 0x12);
            pppppppuStack_d8 = (ulonglong *******)0x0;
          }
          pppppppuVar65 = (ulonglong *******)0x0;
          pppppppuVar61 = pppppppuVar58;
        }
        if (pppppppuVar65 == pppppppuStack_e8) {
          pdb_142d8afd0(&pppppppuStack_e8);
        }
        pppppppuStack_e0[(longlong)pppppppuVar65 * 2] =
             (ulonglong ******)(ulonglong)((uint)ppppppuVar80 & 0x1fff);
        pppppppuStack_e0[(longlong)pppppppuVar65 * 2 + 1] =
             (ulonglong ******)
             ((longlong)ppppppuVar64 - ((ulonglong)ppppppuVar80 & 0xffffffffffffe000));
        pppppppuVar65 = (ulonglong *******)((longlong)pppppppuVar65 + 1);
        pppppppuVar59 = pppppppuStack_78;
        ppppppuVar80 = ppppppuVar64;
        pppppppuStack_d8 = pppppppuVar65;
      }
    }
    if (pppppppuStack_1b0 != (ulonglong *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_1a8,(longlong)pppppppuStack_1b0 << 4,8);
      pppppppuVar65 = pppppppuStack_d8;
    }
    if (pppppppuVar65 != (ulonglong *******)0x0) {
      if (pppppppuVar59[6] <= pppppppuVar61) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppuVar61,pppppppuVar59[6],&UNK_143305b28);
      }
      if (*(int *)(pppppppuVar59[5] + (longlong)pppppppuVar61 * 3 + 2) != 0) {
        pdb_142dc8110(&UNK_143305b40,0x11,&UNK_143305b58);
        goto LAB_1413f3a3f;
      }
      ppppppuVar66 = pppppppuVar59[5] + (longlong)pppppppuVar61 * 3;
      pppppppuVar61 = (ulonglong *******)((longlong)pppppppuVar61 << 0x12);
      pdb_1424adef0(pppppppuVar59,uStack_190,*ppppppuVar66,ppppppuVar66[1],pppppppuStack_e0,
                    pppppppuStack_d8,pppppppuVar61);
      pppppppuStack_d8 = (ulonglong *******)0x0;
    }
    cVar53 = (char)pppppppuStack_80;
    if (pppppppuStack_e8 != (ulonglong *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_e0,(longlong)pppppppuStack_e8 << 4,8);
    }
    if (cVar53 != '\0') {
      uStack_50 = uStack_50 & 0xffffffffffffff;
      pppppppuVar59 = (ulonglong *******)pdb_140e97000();
      if (*(byte *)(pppppppuVar59 + 0xd) != 1) {
        uStack_50 = uStack_50 & 0xffffffffffffff;
        pppppppuVar59 = (ulonglong *******)pdb_142dd9610(pppppppuVar59,0);
        if (pppppppuVar59 == (ulonglong *******)0x0) {
          uStack_50 = uStack_50 & 0xffffffffffffff;
          pdb_142dc7890(&UNK_143307940);
          goto LAB_1413f3a3f;
        }
      }
      if (*pppppppuVar59 != (ulonglong ******)0x0) {
        uStack_50 = uStack_50 & 0xffffffffffffff;
        pdb_142dc8090(&UNK_1433079b0);
        goto LAB_1413f3a3f;
      }
      *pppppppuVar59 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_78 = pppppppuVar59;
      pdb_140e95370(pppppppuVar59 + 1,uStack_198);
      *pppppppuStack_78 = (ulonglong ******)((longlong)*pppppppuStack_78 + 1);
    }
    if ((char)pppppppuStack_120 == '\0') {
      return;
    }
    plVar63 = (longlong *)pdb_140e97000();
    if (((char)plVar63[0xd] == '\x01') ||
       (plVar63 = (longlong *)pdb_142dd9610(plVar63,0), plVar63 != (longlong *)0x0)) {
      if (*plVar63 == 0) {
        *plVar63 = -1;
        pppppppuStack_78 = (ulonglong *******)plVar63;
        pdb_140e95370(plVar63 + 1,uStack_1a0);
        *pppppppuStack_78 = (ulonglong ******)((longlong)*pppppppuStack_78 + 1);
        return;
      }
    }
    else {
      pdb_142dc7890(&UNK_143307940);
    }
    pdb_142dc8090(&UNK_1433079b0);
LAB_1413f38a8:
    pppppppuStack_118 = (ulonglong *******)CONCAT71(pppppppuStack_118._1_7_,1);
    pppppppuStack_e8 = pppppppuVar61;
    pdb_142dc7060(_DAT_143ca4298,0,&pppppppuStack_e8,&UNK_143305e18,&UNK_143305c20);
LAB_1413f2d50:
    pdb_1400f0d40(&pppppppuStack_e8,*_DAT_143ca4290);
    if ((int)pppppppuStack_e8 == 1) {
      pppppppuStack_118 = pppppppuStack_e0;
      pppppppuStack_110 =
           (ulonglong *******)CONCAT71(pppppppuStack_110._1_7_,pppppppuStack_d8._0_1_);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143305c38,0x13,&pppppppuStack_118,&UNK_143306000,&UNK_143305c20);
    }
    pppppppuStack_58 = pppppppuStack_e0;
    uStack_68 = (ulonglong *******)CONCAT71(uStack_68._1_7_,pppppppuStack_d8._0_1_);
    pdb_14007ee60();
    pppppppuVar59 = (ulonglong *******)pub_1406abab0(0xf,1);
    if (pppppppuVar59 != (ulonglong *******)0x0) {
      pbVar76 = (byte *)((longlong)pppppppuVar59 + 7);
      pbVar76[0] = 0x70;
      pbVar76[1] = 0x61;
      pbVar76[2] = 0x74;
      pbVar76[3] = 0x68;
      pbVar76[4] = 0x21;
      pbVar76[5] = 0x20;
      pbVar76[6] = 0x28;
      pbVar76[7] = 0x29;
      *pppppppuVar59 = (ulonglong ******)0x705f656c75646f6d;
      pppppppuStack_e8 = (ulonglong *******)0xf;
      pppppppuStack_d8 = (ulonglong *******)0xf;
      pppppppuStack_e0 = pppppppuVar59;
      pdb_142d7f1b0(&pppppppuStack_e8,0xf,0x17,1,1);
      pppppppuVar62 = pppppppuStack_178;
      pppppppuVar59 = pppppppuStack_180;
      uVar60 = _UNK_143305c53;
      *(undefined8 *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8) = _DAT_143305c4b;
      *(undefined8 *)((byte *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8) + 8) =
           uVar60;
      pbVar76 = (byte *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8 + 0xf);
      pbVar76[0] = 0x20;
      pbVar76[1] = 0x3a;
      pbVar76[2] = 0x3a;
      pbVar76[3] = 0x20;
      pbVar76[4] = 0x57;
      pbVar76[5] = 0x61;
      pbVar76[6] = 0x72;
      pbVar76[7] = 0x6e;
      pppppppuVar65 = (ulonglong *******)((longlong)pppppppuStack_d8 + 0x17);
      pppppppuStack_118 = pppppppuStack_e8;
      pppppppuStack_110 = pppppppuStack_e0;
      pppppppuStack_108 = pppppppuVar65;
      if ((ulonglong *******)((longlong)pppppppuStack_e8 - (longlong)pppppppuVar65) <
          pppppppuStack_178) {
        pdb_142d7f1b0(&pppppppuStack_118,pppppppuVar65,pppppppuStack_178,1,1);
LAB_1413f2e65:
        pppppppuVar65 = pppppppuStack_108;
        pub_142e32760((byte *)((longlong)pppppppuStack_110 + (longlong)pppppppuStack_108),
                      pppppppuVar59);
      }
      else if (pppppppuStack_178 != (ulonglong *******)0x0) goto LAB_1413f2e65;
      pppppppuStack_108 = (ulonglong *******)((longlong)pppppppuVar65 + (longlong)pppppppuVar62);
      pppppppuStack_e8 = pppppppuStack_118;
      pppppppuStack_e0 = pppppppuStack_110;
      pppppppuStack_d8 = pppppppuStack_108;
      cVar53 = pdb_1424ad780(pppppppuStack_58 + 1,&pppppppuStack_e8);
      if ((cVar53 == '\0') && (1 < *_DAT_143ca8e90)) {
        pppppppuStack_118 = (ulonglong *******)&pppppppuStack_188;
        pppppppuStack_110 = (ulonglong *******)pdb_140001020;
        pppppppuStack_e8 = (ulonglong *******)0x0;
        pppppppuStack_e0 = (ulonglong *******)&UNK_143305bdd;
        pppppppuStack_d8 = (ulonglong *******)0x2c;
        ppppppuStack_d0 = (ulonglong ******)0x0;
        pppppppuStack_c8 = (ulonglong *******)&UNK_143305ab8;
        pppppppuStack_c0 = (ulonglong *******)0x38;
        uStack_b8 = (undefined *)0x2;
        uStack_b0 = &UNK_143305bdd;
        uStack_a8 = 0x2c;
        uStack_a0 = 0x16f00000001;
        puStack_98 = (undefined8 *)&UNK_143305c62;
        pppppppuStack_90 = pppppppuVar61;
        pdb_140f332f0(&uStack_69,&pppppppuStack_e8);
      }
      pppppppuVar61 = pppppppuStack_58;
      if ((((char)uStack_68 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
         (cVar53 = pdb_142dc79e0(), cVar53 == '\0')) {
        *(byte *)((longlong)pppppppuVar61 + 1) = 1;
      }
      LOCK();
      bVar6 = *(byte *)pppppppuVar61;
      *(byte *)pppppppuVar61 = 0;
      UNLOCK();
      if (bVar6 == 2) {
        pdb_142dc6ca0();
      }
      if (pppppppuStack_188 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_180,(ulonglong)pppppppuStack_188,1);
      }
      pppppppuVar61 = (ulonglong *******)0x0;
      if ((ulonglong *******)0x7 < pppppppuStack_170) {
        pppppppuVar61 = pppppppuStack_170 + -1;
      }
      if (pppppppuVar61 == (ulonglong *******)0x0) {
        pppppppuVar59 = pppppppuStack_150;
        pppppppuVar62 = pppppppuStack_148;
        if (((pppppppuStack_170 < (ulonglong *******)0x6) &&
            ((0x32UL >> ((ulonglong)pppppppuStack_170 & 0x3f) & 1) != 0)) &&
           (pppppppuStack_168 != (ulonglong *******)0x0)) {
          pub_1406abac0((byte *)pppppppuStack_160,(ulonglong)pppppppuStack_168,1);
          pppppppuVar59 = pppppppuStack_150;
          pppppppuVar62 = pppppppuStack_148;
        }
      }
      else {
        pppppppuVar59 = pppppppuStack_168;
        pppppppuVar62 = pppppppuStack_160;
        if (pppppppuVar61 == (ulonglong *******)0x1) {
          pdb_1404b83f0(&pppppppuStack_168);
          goto LAB_1413f30e1;
        }
      }
      if (pppppppuVar59 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuVar62,(ulonglong)pppppppuVar59,1);
      }
      goto LAB_1413f30e1;
    }
  }
  else {
    lVar75 = 0x50;
    lVar56 = pdb_1413f7ff0(0x50);
    pbVar76 = &UNK_143306020;
    if (lVar56 != 1) {
LAB_1413f293c:
      puVar78 = &UNK_143305d08;
      puVar79 = &UNK_143305cd0;
      do {
        bVar6 = puVar78[-1];
        uVar55 = (uint)(char)bVar6;
        if ((char)bVar6 < '\0') {
          bVar3 = puVar78[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar78[-3];
            if ((char)bVar4 < -0x40) {
              pbVar73 = puVar78 + -4;
              puVar78 = puVar78 + -4;
              uVar55 = bVar4 & 0x3f | (*pbVar73 & 7) << 6;
            }
            else {
              puVar78 = puVar78 + -3;
              uVar55 = bVar4 & 0xf;
            }
            uVar55 = bVar3 & 0x3f | uVar55 << 6;
          }
          else {
            puVar78 = puVar78 + -2;
            uVar55 = bVar3 & 0x1f;
          }
          uVar55 = (uint)(bVar6 & 0x3f) | uVar55 << 6;
          if (uVar55 != 0x5c) goto LAB_1413f29c4;
LAB_1413f29d5:
          puVar79 = puVar78 + -0x143305ccf;
          if ((undefined *)0x38 < puVar79) {
            pdb_142dc8070(&UNK_143305cd0,0x38,puVar79,0x38,&UNK_1433060d0);
LAB_1413f39e1:
            uStack_50 = CONCAT17(1,(undefined7)uStack_50);
            pdb_142dc8070(&UNK_143305cd0,0x38);
            goto LAB_1413f3a3f;
          }
          lVar56 = 0x38 - (longlong)puVar79;
          puVar79 = puVar78 + 1;
          goto LAB_1413f29f7;
        }
        puVar78 = puVar78 + -1;
        if (uVar55 == 0x5c) goto LAB_1413f29d5;
LAB_1413f29c4:
        if (uVar55 == 0x2f) goto LAB_1413f29d5;
      } while (puVar78 != &UNK_143305cd0);
      lVar56 = 0x38;
LAB_1413f29f7:
      pppppppuStack_118 = (ulonglong *******)&UNK_143305f6f;
      pppppppuStack_110 = (ulonglong *******)0x2d;
      pppppppuStack_170 = (ulonglong *******)&pppppppuStack_118;
      pppppppuStack_168 = (ulonglong *******)pdb_1402ed400;
      pdb_140f60760(&pppppppuStack_e8,&UNK_143305c62,&pppppppuStack_170);
      pppppppuVar61 = pppppppuStack_d8;
      uStack_68 = pppppppuStack_e8;
      pppppppuStack_58 = pppppppuStack_e0;
      pppppppuVar59 = (ulonglong *******)pdb_140e97000();
      if ((*(byte *)(pppppppuVar59 + 0xd) != 1) &&
         (pppppppuVar59 = (ulonglong *******)pdb_142dd9610(pppppppuVar59,0),
         pppppppuVar59 == (ulonglong *******)0x0)) {
        pdb_142dc7890(&UNK_143307940);
        goto LAB_1413f3a3f;
      }
      if (*pppppppuVar59 != (ulonglong ******)0x0) {
        pdb_142dc8090(&UNK_1433079b0);
        goto LAB_1413f3a3f;
      }
      *pppppppuVar59 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_80 = pppppppuVar59;
      uStack_1a0 = pdb_140e94f10(pppppppuVar59 + 1,pbVar76,lVar75,puVar79,lVar56,pppppppuStack_58,
                                 pppppppuVar61);
      *pppppppuStack_80 = (ulonglong ******)((longlong)*pppppppuStack_80 + 1);
      if (uStack_68 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_58,(ulonglong)uStack_68,1);
      }
      goto LAB_1413f2ad4;
    }
    if (pppppppuVar65 < (ulonglong *******)0x51) {
      uVar67 = pdb_1413f7ff0(pppppppuVar65);
      if ((uVar67 & 1) != 0) {
        if ((byte *)0x50 < (byte *)((longlong)pppppppuVar65 + 2)) {
          pdb_142dc8070(&UNK_143306020,0x50,(byte *)((longlong)pppppppuVar65 + 2),0x50,
                        &UNK_143306108);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar75 = 0x4e - (longlong)pppppppuVar65;
        pbVar76 = (byte *)((longlong)pppppppuVar65 + 0x143306022);
      }
      goto LAB_1413f293c;
    }
    pdb_142dc8070(&UNK_143306020,0x50,0,pppppppuVar65,&UNK_1433060f0);
  }
  pdb_142dc7e2a(1,0xf);
LAB_1413f3a3f:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}

