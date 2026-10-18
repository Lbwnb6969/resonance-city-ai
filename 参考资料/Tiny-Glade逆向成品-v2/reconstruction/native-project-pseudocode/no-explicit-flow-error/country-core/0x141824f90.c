// VA 0x141824f90, PDB extent 1584 bytes
// country_core::startup::load_prefabs::filter_mesh_by_vertex_color<country_core::startup::load_prefabs::load_prefab_mesh::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_prefabs::filter_mesh_by_vertex_color<country_core::startup::load_prefabs::load_prefab_mesh::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 1584 */

ulonglong * pdb_141824f90(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  longlong *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  byte *pbVar24;
  byte *pbVar25;
  ulonglong uVar26;
  ushort uVar27;
  longlong lVar28;
  float *pfVar29;
  char cVar30;
  byte *pbVar31;
  longlong lVar32;
  uint uVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined8 *puStack_f0;
  code *pcStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  char cStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 uStack_c0;
  undefined1 uStack_bf;
  undefined1 uStack_be;
  undefined1 uStack_bd;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  ulonglong uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_110 = param_3;
  uStack_108 = param_4;
  if (*(longlong *)(param_2 + 0x50) != 0) {
    cVar30 = (char)param_2 + '8';
    uVar23 = pdb_1400af950(param_2 + 0x58,&UNK_143340aa8,0xc);
    uVar35 = *(ulonglong *)(param_2 + 0x38);
    bVar36 = (byte)(uVar23 >> 0x39);
    auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
    auVar37 = pshuflw(auVar37,auVar37,0);
    lVar32 = 0;
    iVar17 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                    CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar18 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                    CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar19 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                    CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar20 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                    CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    do {
      uVar23 = uVar23 & *(ulonglong *)(param_2 + 0x40);
      auVar10 = *(undefined1 (*) [16])(uVar35 + uVar23);
      auVar39[0] = -(auVar10[0] == auVar37[0]);
      auVar39[1] = -(auVar10[1] == auVar37[1]);
      auVar39[2] = -(auVar10[2] == auVar37[2]);
      auVar39[3] = -(auVar10[3] == auVar37[3]);
      auVar39[4] = -(auVar10[4] == auVar37[4]);
      auVar39[5] = -(auVar10[5] == auVar37[5]);
      auVar39[6] = -(auVar10[6] == auVar37[6]);
      auVar39[7] = -(auVar10[7] == auVar37[7]);
      auVar39[8] = -(auVar10[8] == auVar37[0]);
      auVar39[9] = -(auVar10[9] == auVar37[1]);
      auVar39[10] = -(auVar10[10] == auVar37[2]);
      auVar39[0xb] = -(auVar10[0xb] == auVar37[3]);
      auVar39[0xc] = -(auVar10[0xc] == auVar37[4]);
      auVar39[0xd] = -(auVar10[0xd] == auVar37[5]);
      auVar39[0xe] = -(auVar10[0xe] == auVar37[6]);
      auVar39[0xf] = -(auVar10[0xf] == auVar37[7]);
      uVar27 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
      uVar33 = (uint)uVar27;
      while (uVar27 != 0) {
        uVar15 = 0;
        for (uVar16 = uVar33; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        lVar28 = (uVar15 + uVar23 & *(ulonglong *)(param_2 + 0x40)) * -0x38;
        if ((*(longlong *)((uVar35 - 0x28) + lVar28) == 0xc) &&
           (plVar11 = *(longlong **)(lVar28 + uVar35 + -0x30),
           (int)plVar11[1] == 0x726f6c6f && *plVar11 == 0x435f786574726556)) {
          lVar32 = pdb_140e4d980();
          uVar26 = *(ulonglong *)(param_2 + 0x58);
          uVar21 = *(ulonglong *)(param_2 + 0x60);
          pdb_140ca3e60(&uStack_140);
          puVar12 = *(undefined **)(param_2 + 0x10);
          uVar23 = (longlong)puVar12 * 4;
          uStack_120 = uVar26;
          uStack_118 = uVar21;
          if (0x7ffffffffffffffc < uVar23 || (ulonglong)puVar12 >> 0x3e != 0) {
            uVar34 = 0;
LAB_1418250e9:
            pdb_142dc7e2a(uVar34,uVar23);
            goto LAB_141825474;
          }
          pbVar25 = *(byte **)(param_2 + 8);
          pbStack_70 = (byte *)lVar32;
          if (uVar23 == 0) {
            pbVar24 = (byte *)0x4;
            puStack_68 = (undefined *)0x0;
            puVar2 = puStack_68;
          }
          else {
            pdb_14007ee60();
            uVar34 = 4;
            cVar30 = '\x04';
            pbVar24 = pub_1406abab0(uVar23,4);
            puVar2 = puVar12;
            if (pbVar24 == (byte *)0x0) goto LAB_1418250e9;
          }
          puStack_68 = puVar2;
          if (puVar12 != (undefined *)0x0) {
            pbVar31 = pbVar25;
            pub_142e32760(pbVar24,pbVar25,uVar23);
            cVar30 = (char)pbVar31;
          }
          uStack_80 = uVar35;
          if (SBORROW8(0,*(longlong *)(param_2 + 0x18))) {
            uVar35 = 0x8000000000000000;
          }
          else {
            uVar35 = *(ulonglong *)(param_2 + 0x28);
            if ((longlong)uVar35 < 0) {
              uVar34 = 0;
              pbStack_78 = pbVar24;
LAB_1418251a8:
              pdb_142dc7e2a(uVar34,uVar35);
              goto LAB_141825474;
            }
            if (uVar35 == 0) {
              pbVar25 = (byte *)0x1;
            }
            else {
              uVar13 = *(undefined8 *)(param_2 + 0x20);
              pbStack_78 = pbVar24;
              pdb_14007ee60();
              uVar34 = 1;
              pbVar25 = pub_1406abab0(uVar35,1);
              if (pbVar25 == (byte *)0x0) goto LAB_1418251a8;
              pub_142e32760(pbVar25,uVar13,uVar35);
              pbVar24 = pbStack_78;
            }
            cVar30 = *(char *)(param_2 + 0x30);
          }
          uVar23 = uStack_80;
          uStack_98 = *(ulonglong *)(param_2 + 0x68);
          uStack_90 = *(ulonglong *)(param_2 + 0x70);
          uStack_88 = *(undefined1 *)(param_2 + 0x78);
          uStack_c8 = uStack_140;
          uStack_c7 = uStack_13f;
          uStack_c6 = uStack_13e;
          uStack_c5 = uStack_13d;
          uStack_c4 = uStack_13c;
          uStack_c3 = uStack_13b;
          uStack_c2 = uStack_13a;
          uStack_c1 = uStack_139;
          uStack_c0 = uStack_138;
          uStack_bf = uStack_137;
          uStack_be = uStack_136;
          uStack_bd = uStack_135;
          uStack_bc = uStack_134;
          uStack_bb = uStack_133;
          uStack_ba = uStack_132;
          uStack_b9 = uStack_131;
          uStack_b8 = uStack_130;
          uStack_b0 = uStack_128;
          uStack_a8 = uStack_120;
          uStack_a0 = uStack_118;
          puStack_100 = puStack_68;
          puVar2 = (undefined *)(uStack_80 * 4);
          pcStack_f8 = (code *)pbVar24;
          puStack_f0 = (undefined8 *)puVar12;
          pcStack_e8 = (code *)uVar35;
          pbStack_e0 = pbVar25;
          uStack_d8 = uVar35;
          cStack_d0 = cVar30;
          puStack_68 = puVar2;
          if (uStack_80 == 0) {
            pbVar25 = (byte *)0x4;
          }
          else {
            pdb_14007ee60();
            pbVar25 = pub_1406abab0((ulonglong)puVar2,4);
            uVar22 = _UNK_142f5c81c;
            uVar16 = _UNK_142f5c818;
            uVar15 = _UNK_142f5c814;
            uVar33 = _DAT_142f5c810;
            if (pbVar25 == (byte *)0x0) {
              pdb_142dc7e2a(4,puVar2);
LAB_141825474:
                    /* WARNING: Does not return */
              pcVar14 = (code *)invalidInstructionException();
              (*pcVar14)();
            }
            if ((uVar23 < 0xd) ||
               (pbVar25 < (byte *)((longlong)pbStack_70 + uVar23 * 0xc) &&
                (byte *)((longlong)pbStack_70 + 8U) < pbVar25 + uVar23 * 4)) {
              uVar35 = 0;
            }
            else {
              uVar35 = 8;
              if ((uVar23 & 7) != 0) {
                uVar35 = (ulonglong)((uint)uVar23 & 7);
              }
              uVar35 = uVar23 - uVar35;
              pfVar29 = (float *)((longlong)pbStack_70 + 0x5c);
              uVar26 = 0;
              do {
                fVar3 = pfVar29[-0x12];
                fVar4 = pfVar29[-0xf];
                fVar5 = pfVar29[-0xc];
                fVar6 = *pfVar29;
                fVar7 = pfVar29[-3];
                fVar8 = pfVar29[-6];
                fVar9 = pfVar29[-9];
                puVar1 = (uint *)(pbVar25 + uVar26 * 4);
                *puVar1 = -(uint)(pfVar29[-0x15] <= 0.0) & uVar33;
                puVar1[1] = -(uint)(fVar3 <= 0.0) & uVar15;
                puVar1[2] = -(uint)(fVar4 <= 0.0) & uVar16;
                puVar1[3] = -(uint)(fVar5 <= 0.0) & uVar22;
                puVar1 = (uint *)(pbVar25 + uVar26 * 4 + 0x10);
                *puVar1 = -(uint)(fVar9 <= 0.0) & uVar33;
                puVar1[1] = -(uint)(fVar8 <= 0.0) & uVar15;
                puVar1[2] = -(uint)(fVar7 <= 0.0) & uVar16;
                puVar1[3] = -(uint)(fVar6 <= 0.0) & uVar22;
                uVar26 = uVar26 + 8;
                pfVar29 = pfVar29 + 0x18;
              } while (uVar35 != uVar26);
            }
            uVar26 = uVar35;
            if (((uint)uVar23 - (int)uVar35 & 1) != 0) {
              *(uint *)(pbVar25 + uVar35 * 4) =
                   (uint)(*(float *)((longlong)pbStack_70 + 8 + uVar35 * 0xc) <= 0.0);
              uVar26 = uVar35 + 1;
            }
            if (uVar23 != uVar35 + 1) {
              pfVar29 = (float *)((longlong)pbStack_70 + uVar26 * 0xc + 0x14);
              do {
                *(uint *)(pbVar25 + uVar26 * 4) = (uint)(pfVar29[-3] <= 0.0);
                *(uint *)(pbVar25 + uVar26 * 4 + 4) = (uint)(*pfVar29 <= 0.0);
                uVar26 = uVar26 + 2;
                pfVar29 = pfVar29 + 6;
              } while (uVar23 != uVar26);
            }
          }
          pbStack_70 = pbVar25;
          pdb_140a97000(&puStack_100,pbVar25,uVar23);
          param_1[0xe] = uStack_90;
          param_1[0xf] = CONCAT71(uStack_87,uStack_88);
          param_1[0xc] = uStack_a0;
          param_1[0xd] = uStack_98;
          param_1[10] = uStack_b0;
          param_1[0xb] = uStack_a8;
          param_1[8] = CONCAT17(uStack_b9,
                                CONCAT16(uStack_ba,
                                         CONCAT15(uStack_bb,
                                                  CONCAT14(uStack_bc,
                                                           CONCAT13(uStack_bd,
                                                                    CONCAT12(uStack_be,
                                                                             CONCAT11(uStack_bf,
                                                                                      uStack_c0)))))
                                        ));
          param_1[9] = uStack_b8;
          param_1[6] = CONCAT71(uStack_cf,cStack_d0);
          param_1[7] = CONCAT17(uStack_c1,
                                CONCAT16(uStack_c2,
                                         CONCAT15(uStack_c3,
                                                  CONCAT14(uStack_c4,
                                                           CONCAT13(uStack_c5,
                                                                    CONCAT12(uStack_c6,
                                                                             CONCAT11(uStack_c7,
                                                                                      uStack_c8)))))
                                        ));
          param_1[4] = (ulonglong)pbStack_e0;
          param_1[5] = uStack_d8;
          param_1[2] = (ulonglong)puStack_f0;
          param_1[3] = (ulonglong)pcStack_e8;
          *param_1 = (ulonglong)puStack_100;
          param_1[1] = (ulonglong)pcStack_f8;
          if (uStack_80 != 0) {
            pub_1406abac0(pbStack_70,(ulonglong)puStack_68,4);
          }
          return param_1;
        }
        uVar27 = (ushort)(uVar33 - 1) & (ushort)uVar33;
        uVar33 = CONCAT22((short)(uVar33 - 1 >> 0x10),uVar27);
      }
      auVar38[0] = -(auVar10[0] == (char)iVar17);
      auVar38[1] = -(auVar10[1] == (char)((uint)iVar17 >> 8));
      auVar38[2] = -(auVar10[2] == (char)((uint)iVar17 >> 0x10));
      auVar38[3] = -(auVar10[3] == (char)((uint)iVar17 >> 0x18));
      auVar38[4] = -(auVar10[4] == (char)iVar18);
      auVar38[5] = -(auVar10[5] == (char)((uint)iVar18 >> 8));
      auVar38[6] = -(auVar10[6] == (char)((uint)iVar18 >> 0x10));
      auVar38[7] = -(auVar10[7] == (char)((uint)iVar18 >> 0x18));
      auVar38[8] = -(auVar10[8] == (char)iVar19);
      auVar38[9] = -(auVar10[9] == (char)((uint)iVar19 >> 8));
      auVar38[10] = -(auVar10[10] == (char)((uint)iVar19 >> 0x10));
      auVar38[0xb] = -(auVar10[0xb] == (char)((uint)iVar19 >> 0x18));
      auVar38[0xc] = -(auVar10[0xc] == (char)iVar20);
      auVar38[0xd] = -(auVar10[0xd] == (char)((uint)iVar20 >> 8));
      auVar38[0xe] = -(auVar10[0xe] == (char)((uint)iVar20 >> 0x10));
      auVar38[0xf] = -(auVar10[0xf] == (char)((uint)iVar20 >> 0x18));
      if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar38 >> 0x3f,0) & 1) != 0) || (SUB161(auVar38 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar38 >> 0x4f,0) & 1) != 0) || (SUB161(auVar38 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || (SUB161(auVar38 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar38 >> 0x6f,0) & 1) != 0) || (SUB161(auVar38 >> 0x77,0) & 1) != 0) ||
          auVar38[0xf] < '\0') break;
      uVar23 = uVar23 + lVar32 + 0x10;
      lVar32 = lVar32 + 0x10;
    } while( true );
  }
  puStack_100 = &UNK_143340ae8;
  pcStack_f8 = pdb_1402ed420;
  puStack_f0 = &uStack_110;
  pcStack_e8 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143340af8,&puStack_100,&UNK_143340b10);
}

