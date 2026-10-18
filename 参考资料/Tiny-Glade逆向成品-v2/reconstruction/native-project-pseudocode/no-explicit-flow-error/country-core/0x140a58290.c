// VA 0x140a58290, PDB extent 1412 bytes
// country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::add<asset::prefab::PrefabName>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::add<asset::prefab::PrefabName>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 1412 */

void pdb_140a58290(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
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
  undefined8 uVar24;
  char cVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong *plVar28;
  undefined1 (*pauVar29) [16];
  undefined *puVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ushort uVar35;
  longlong lVar36;
  byte bVar37;
  undefined1 (*pauVar38) [16];
  byte bVar39;
  longlong extraout_XMM0_Qa;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  longlong lVar42;
  longlong extraout_XMM0_Qb;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
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
  undefined1 auVar45 [16];
  char cStack_e9;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d4;
  longlong *plStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  cStack_e9 = param_2;
  uVar26 = pdb_140a58db0(param_3,param_4);
  uStack_e8 = CONCAT71(uStack_e8._1_7_,param_2);
  uStack_b8 = uVar26;
  uVar27 = pdb_1417c4b30(param_1 + 4,&uStack_e8);
  lVar42 = *param_1;
  bVar37 = (byte)(uVar27 >> 0x38);
  bVar39 = bVar37 >> 1;
  auVar40 = ZEXT216(CONCAT11(bVar39,bVar39));
  auVar40 = pshuflw(auVar40,auVar40,0);
  lVar33 = 0;
  uVar34 = uVar27;
  while( true ) {
    uVar34 = uVar34 & param_1[1];
    auVar41 = *(undefined1 (*) [16])(lVar42 + uVar34);
    auVar44[0] = -(auVar41[0] == auVar40[0]);
    auVar44[1] = -(auVar41[1] == auVar40[1]);
    auVar44[2] = -(auVar41[2] == auVar40[2]);
    auVar44[3] = -(auVar41[3] == auVar40[3]);
    auVar44[4] = -(auVar41[4] == auVar40[4]);
    auVar44[5] = -(auVar41[5] == auVar40[5]);
    auVar44[6] = -(auVar41[6] == auVar40[6]);
    auVar44[7] = -(auVar41[7] == auVar40[7]);
    auVar44[8] = -(auVar41[8] == auVar40[0]);
    auVar44[9] = -(auVar41[9] == auVar40[1]);
    auVar44[10] = -(auVar41[10] == auVar40[2]);
    auVar44[0xb] = -(auVar41[0xb] == auVar40[3]);
    auVar44[0xc] = -(auVar41[0xc] == auVar40[4]);
    auVar44[0xd] = -(auVar41[0xd] == auVar40[5]);
    auVar44[0xe] = -(auVar41[0xe] == auVar40[6]);
    auVar44[0xf] = -(auVar41[0xf] == auVar40[7]);
    uVar35 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
    uVar31 = (uint)uVar35;
    while (uVar35 != 0) {
      uVar32 = 0;
      for (uVar3 = uVar31; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar32 = uVar32 + 1;
      }
      lVar36 = (uVar32 + uVar34 & param_1[1]) * -0xf0;
      if (*(char *)(lVar42 + -0xf0 + lVar36) == param_2) {
        pauVar38 = (undefined1 (*) [16])(lVar42 + lVar36);
        uVar27 = uVar26;
        goto LAB_140a58536;
      }
      uVar35 = (ushort)(uVar31 - 1) & (ushort)uVar31;
      uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar35);
    }
    auVar43[0] = -(auVar41[0] == -1);
    auVar43[1] = -(auVar41[1] == -1);
    auVar43[2] = -(auVar41[2] == -1);
    auVar43[3] = -(auVar41[3] == -1);
    auVar43[4] = -(auVar41[4] == -1);
    auVar43[5] = -(auVar41[5] == -1);
    auVar43[6] = -(auVar41[6] == -1);
    auVar43[7] = -(auVar41[7] == -1);
    auVar43[8] = -(auVar41[8] == -1);
    auVar43[9] = -(auVar41[9] == -1);
    auVar43[10] = -(auVar41[10] == -1);
    auVar43[0xb] = -(auVar41[0xb] == -1);
    auVar43[0xc] = -(auVar41[0xc] == -1);
    auVar43[0xd] = -(auVar41[0xd] == -1);
    auVar43[0xe] = -(auVar41[0xe] == -1);
    auVar43[0xf] = -(auVar41[0xf] == -1);
    if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x17,0) & 1) != 0) || (SUB161(auVar43 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x27,0) & 1) != 0) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
    uVar34 = uVar34 + lVar33 + 0x10;
    lVar33 = lVar33 + 0x10;
  }
  if (param_1[2] == 0) {
    pdb_142daa990(param_1,1,param_1 + 4,CONCAT71((int7)(uVar34 >> 8),1));
    plVar28 = (longlong *)pdb_14008d710(0);
    if (plVar28 != (longlong *)0x0) goto LAB_140a583b4;
LAB_140a587ac:
    puVar30 = &UNK_143326860;
    pauVar29 = (undefined1 (*) [16])pdb_142dc7890();
    lVar42 = extraout_XMM0_Qa;
    lVar33 = extraout_XMM0_Qb;
  }
  else {
    plVar28 = (longlong *)pdb_14008d710(0);
    if (plVar28 == (longlong *)0x0) goto LAB_140a587ac;
LAB_140a583b4:
    lVar42 = *plVar28;
    lVar33 = plVar28[1];
    *plVar28 = *plVar28 + 1;
    uStack_88 = _DAT_143046120;
    uStack_80 = _UNK_143046128;
    uStack_98 = _DAT_143046110;
    uStack_90 = _UNK_143046118;
    pauVar29 = (undefined1 (*) [16])*param_1;
    puVar30 = (undefined *)param_1[1];
    uVar27 = uVar27 & (ulonglong)puVar30;
    auVar40 = *(undefined1 (*) [16])(*pauVar29 + uVar27);
    uVar35 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar40[0xf] >> 7) << 0xf;
    uVar31 = (uint)uVar35;
    if (uVar35 == 0) {
      lVar36 = 0x10;
      do {
        uVar27 = uVar27 + lVar36 & (ulonglong)puVar30;
        auVar40 = *(undefined1 (*) [16])(*pauVar29 + uVar27);
        lVar36 = lVar36 + 0x10;
        uVar31 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
      } while (uVar31 == 0);
    }
    uVar32 = 0;
    for (; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
      uVar32 = uVar32 + 1;
    }
    uVar34 = uVar32 + uVar27 & (ulonglong)puVar30;
    bVar39 = (*pauVar29)[uVar34];
    uVar27 = uVar26;
    if ((char)bVar39 < '\0') goto LAB_140a58414;
  }
  auVar40 = *pauVar29;
  uVar31 = 0;
  for (uVar32 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar40[0xf] >> 7) << 0xf); (uVar32 & 1) == 0;
      uVar32 = uVar32 >> 1 | 0x80000000) {
    uVar31 = uVar31 + 1;
  }
  uVar34 = (ulonglong)uVar31;
  bVar39 = (*pauVar29)[uVar34];
LAB_140a58414:
  bVar37 = bVar37 >> 1;
  (*pauVar29)[uVar34] = bVar37;
  pauVar29[1][uVar34 - 0x10 & (ulonglong)puVar30] = bVar37;
  param_1[2] = param_1[2] - (ulonglong)(bVar39 & 1);
  pauVar38 = pauVar29 + uVar34 * -0xf;
  pauVar29[uVar34 * -0xf + -0xf][0] = param_2;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -0xf] + 8) = 0;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -0xe] + 8) = 0;
  *(undefined8 *)pauVar29[uVar34 * -0xf + -0xd] = 4;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -0xd] + 8) = 0;
  *(undefined8 *)pauVar29[uVar34 * -0xf + -0xc] = 0x8000000000000000;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -0xc] + 8) = uStack_b0;
  *(undefined8 *)((longlong)(pauVar29[uVar34 * -0xf + -0xc] + 8) + 8) = uStack_a8;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -0xb] + 8) = uStack_a0;
  *(undefined8 *)((longlong)(pauVar29[uVar34 * -0xf + -0xb] + 8) + 8) = uStack_98;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -10] + 8) = uStack_90;
  *(undefined8 *)((longlong)(pauVar29[uVar34 * -0xf + -10] + 8) + 8) = uStack_88;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -9] + 8) = uStack_80;
  *(longlong *)pauVar29[uVar34 * -0xf + -8] = lVar42;
  *(longlong *)(pauVar29[uVar34 * -0xf + -8] + 8) = lVar33;
  *(undefined **)pauVar29[uVar34 * -0xf + -7] = &UNK_14306f69f;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -7] + 8) = 9;
  pauVar29[uVar34 * -0xf + -6][0] = 0;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -6] + 8) = 0;
  *(undefined8 *)pauVar29[uVar34 * -0xf + -5] = 4;
  *(undefined1 (*) [16])(pauVar29[uVar34 * -0xf + -5] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -4] + 8) = 4;
  *(undefined8 *)pauVar29[uVar34 * -0xf + -3] = 0;
  uVar24 = _UNK_14306f548;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -2] + 8) = _DAT_14306f540;
  *(undefined8 *)((longlong)(pauVar29[uVar34 * -0xf + -2] + 8) + 8) = uVar24;
  uVar24 = _UNK_14306f538;
  *(undefined8 *)(pauVar29[uVar34 * -0xf + -3] + 8) = _DAT_14306f530;
  *(undefined8 *)((longlong)(pauVar29[uVar34 * -0xf + -3] + 8) + 8) = uVar24;
  pauVar29[uVar34 * -0xf + -1][8] = 0;
  param_1[3] = param_1[3] + 1;
LAB_140a58536:
  pauVar38[-1][8] = 0;
  pdb_140c51d90(&uStack_e8,pauVar38[-0xe] + 8,uVar27,param_5);
  if ((int)uStack_e8 == 1) {
    pdb_142d8edf0(&uStack_b8,&cStack_e9,uStack_e0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_d4 = uStack_e8._4_4_;
  lVar42 = param_1[6];
  uVar34 = param_1[7];
  bVar37 = (byte)(uVar26 >> 0x38);
  bVar39 = bVar37 >> 1;
  auVar40 = ZEXT216(CONCAT11(bVar39,bVar39));
  auVar40 = pshuflw(auVar40,auVar40,0);
  lVar33 = 0;
  iVar4 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  uStack_e8 = uVar27;
  plStack_d0 = param_1;
  uStack_c8 = uVar26;
  uStack_c0 = uVar27;
  do {
    uVar27 = uVar27 & uVar34;
    pcVar1 = (char *)(lVar42 + uVar27);
    cVar8 = *pcVar1;
    cVar9 = pcVar1[1];
    cVar10 = pcVar1[2];
    cVar11 = pcVar1[3];
    cVar12 = pcVar1[4];
    cVar13 = pcVar1[5];
    cVar14 = pcVar1[6];
    cVar15 = pcVar1[7];
    cVar16 = pcVar1[8];
    cVar17 = pcVar1[9];
    cVar18 = pcVar1[10];
    cVar19 = pcVar1[0xb];
    cVar20 = pcVar1[0xc];
    cVar21 = pcVar1[0xd];
    cVar22 = pcVar1[0xe];
    cVar23 = pcVar1[0xf];
    auVar41[0] = -(cVar8 == auVar40[0]);
    auVar41[1] = -(cVar9 == auVar40[1]);
    auVar41[2] = -(cVar10 == auVar40[2]);
    auVar41[3] = -(cVar11 == auVar40[3]);
    auVar41[4] = -(cVar12 == auVar40[4]);
    auVar41[5] = -(cVar13 == auVar40[5]);
    auVar41[6] = -(cVar14 == auVar40[6]);
    auVar41[7] = -(cVar15 == auVar40[7]);
    auVar41[8] = -(cVar16 == auVar40[0]);
    auVar41[9] = -(cVar17 == auVar40[1]);
    auVar41[10] = -(cVar18 == auVar40[2]);
    auVar41[0xb] = -(cVar19 == auVar40[3]);
    auVar41[0xc] = -(cVar20 == auVar40[4]);
    auVar41[0xd] = -(cVar21 == auVar40[5]);
    auVar41[0xe] = -(cVar22 == auVar40[6]);
    auVar41[0xf] = -(cVar23 == auVar40[7]);
    uVar35 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
    uVar31 = (uint)uVar35;
    plVar28 = plStack_d0;
    while (plStack_d0 = plVar28, uVar35 != 0) {
      uVar32 = 0;
      for (uVar3 = uVar31; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        uVar32 = uVar32 + 1;
      }
      pauVar38 = (undefined1 (*) [16])(lVar42 + (uVar32 + uVar27 & uVar34) * -0x20);
      cVar25 = pdb_140df4430(pauVar38 + -2,&uStack_e8);
      if (cVar25 != '\0') {
        lVar42 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar42 != *(longlong *)(pauVar38[-2] + 8)) goto LAB_140a58634;
        goto LAB_140a5862b;
      }
      uVar35 = (ushort)(uVar31 - 1) & (ushort)uVar31;
      uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar35);
      plVar28 = plStack_d0;
    }
    auVar45[0] = -(cVar8 == (char)iVar4);
    auVar45[1] = -(cVar9 == (char)((uint)iVar4 >> 8));
    auVar45[2] = -(cVar10 == (char)((uint)iVar4 >> 0x10));
    auVar45[3] = -(cVar11 == (char)((uint)iVar4 >> 0x18));
    auVar45[4] = -(cVar12 == (char)iVar5);
    auVar45[5] = -(cVar13 == (char)((uint)iVar5 >> 8));
    auVar45[6] = -(cVar14 == (char)((uint)iVar5 >> 0x10));
    auVar45[7] = -(cVar15 == (char)((uint)iVar5 >> 0x18));
    auVar45[8] = -(cVar16 == (char)iVar6);
    auVar45[9] = -(cVar17 == (char)((uint)iVar6 >> 8));
    auVar45[10] = -(cVar18 == (char)((uint)iVar6 >> 0x10));
    auVar45[0xb] = -(cVar19 == (char)((uint)iVar6 >> 0x18));
    auVar45[0xc] = -(cVar20 == (char)iVar7);
    auVar45[0xd] = -(cVar21 == (char)((uint)iVar7 >> 8));
    auVar45[0xe] = -(cVar22 == (char)((uint)iVar7 >> 0x10));
    auVar45[0xf] = -(cVar23 == (char)((uint)iVar7 >> 0x18));
    if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') {
      if (plVar28[8] == 0) {
        pdb_142da0fb0(plVar28 + 6,1,plVar28 + 10,1);
      }
      pauVar29 = (undefined1 (*) [16])plVar28[6];
      uVar27 = plVar28[7];
      uVar34 = uStack_c8 & uVar27;
      auVar40 = *(undefined1 (*) [16])(*pauVar29 + uVar34);
      uVar35 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar40[0xf] >> 7) << 0xf;
      uVar31 = (uint)uVar35;
      if (uVar35 == 0) {
        lVar42 = 0x10;
        do {
          uVar34 = uVar34 + lVar42 & uVar27;
          auVar40 = *(undefined1 (*) [16])(*pauVar29 + uVar34);
          lVar42 = lVar42 + 0x10;
          uVar31 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
        } while (uVar31 == 0);
      }
      uVar32 = 0;
      for (; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
        uVar32 = uVar32 + 1;
      }
      uVar34 = uVar32 + uVar34 & uVar27;
      bVar39 = (*pauVar29)[uVar34];
      if (-1 < (char)bVar39) {
        auVar40 = *pauVar29;
        uVar31 = 0;
        for (uVar32 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar40[0xf] >> 7) << 0xf); (uVar32 & 1) == 0;
            uVar32 = uVar32 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar34 = (ulonglong)uVar31;
        bVar39 = (*pauVar29)[uVar34];
      }
      bVar37 = bVar37 >> 1;
      (*pauVar29)[uVar34] = bVar37;
      pauVar29[1][uVar34 - 0x10 & uVar27] = bVar37;
      pauVar38 = pauVar29 + uVar34 * -2;
      *(ulonglong *)pauVar29[uVar34 * -2 + -2] = uStack_c0;
      *(undefined8 *)(pauVar38[-2] + 8) = 0;
      *(undefined8 *)pauVar38[-1] = 4;
      *(undefined8 *)(pauVar38[-1] + 8) = 0;
      lVar42 = plVar28[9] - _UNK_142e47bf8;
      plVar28[8] = plVar28[8] - (ulonglong)(bVar39 & 1);
      plVar28[9] = lVar42;
      lVar42 = *(longlong *)(pauVar38[-1] + 8);
      if (lVar42 == *(longlong *)(pauVar38[-2] + 8)) {
LAB_140a5862b:
        pdb_142d8d7f0(pauVar38[-2] + 8);
      }
LAB_140a58634:
      lVar33 = *(longlong *)pauVar38[-1];
      *(undefined4 *)(lVar33 + lVar42 * 8) = uStack_d4;
      *(char *)(lVar33 + 4 + lVar42 * 8) = param_2;
      *(longlong *)(pauVar38[-1] + 8) = lVar42 + 1;
      return;
    }
    uVar27 = uVar27 + lVar33 + 0x10;
    lVar33 = lVar33 + 0x10;
  } while( true );
}

