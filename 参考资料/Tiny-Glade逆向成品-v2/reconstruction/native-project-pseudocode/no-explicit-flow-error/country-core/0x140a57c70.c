// VA 0x140a57c70, PDB extent 936 bytes
// country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::clear_atlas_by_name<ref$<asset::prefab::PrefabName> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::clear_atlas_by_name<ref$<asset::prefab::PrefabName>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 936 */

void pdb_140a57c70(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined1 uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [16];
  uint uVar25;
  byte bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char cVar30;
  char unaff_XMM6_Bc;
  char cVar31;
  char unaff_XMM6_Bd;
  char cVar32;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char cVar33;
  char unaff_XMM6_Bg;
  char cVar34;
  char unaff_XMM6_Bh;
  char cVar35;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char cVar36;
  char unaff_XMM6_Bk;
  char cVar37;
  char unaff_XMM6_Bl;
  char cVar38;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char cVar39;
  char unaff_XMM6_Bo;
  char cVar40;
  char unaff_XMM6_Bp;
  char cVar41;
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
  undefined1 auVar42 [16];
  undefined8 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  longlong lStack_98;
  undefined1 (*pauStack_90) [16];
  byte *pbStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_e0 = pdb_1418bded0(param_2);
  puStack_f0 = &uStack_e0;
  pcStack_e8 = pdb_1402ed400;
  uStack_d8 = param_2;
  pdb_140f60760(&uStack_c0,&UNK_14303de48,&puStack_f0);
  pbStack_88 = pbStack_b8;
  uVar16 = pdb_140df4400(pbStack_b8,uStack_b0);
  if (uStack_c0 != 0) {
    pub_1406abac0(pbStack_88,uStack_c0,1);
  }
  uStack_c0 = uVar16;
  if (param_1[9] != 0) {
    lVar22 = param_1[6];
    uVar2 = param_1[7];
    bVar26 = (byte)(uVar16 >> 0x39);
    auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
    auVar27 = pshuflw(auVar27,auVar27,0);
    unaff_XMM6_Ba = auVar27[0];
    unaff_XMM6_Bb = auVar27[1];
    unaff_XMM6_Bc = auVar27[2];
    unaff_XMM6_Bd = auVar27[3];
    unaff_XMM6_Be = auVar27[4];
    unaff_XMM6_Bf = auVar27[5];
    unaff_XMM6_Bg = auVar27[6];
    unaff_XMM6_Bh = auVar27[7];
    pbStack_88 = (byte *)0x0;
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar16 = uVar16 & uVar2;
      pcVar1 = (char *)(lVar22 + uVar16);
      cVar30 = *pcVar1;
      cVar31 = pcVar1[1];
      cVar32 = pcVar1[2];
      cVar33 = pcVar1[3];
      cVar34 = pcVar1[4];
      cVar35 = pcVar1[5];
      cVar36 = pcVar1[6];
      cVar37 = pcVar1[7];
      cVar38 = pcVar1[8];
      cVar39 = pcVar1[9];
      cVar40 = pcVar1[10];
      cVar41 = pcVar1[0xb];
      cVar14 = pcVar1[0xc];
      cVar10 = pcVar1[0xd];
      cVar11 = pcVar1[0xe];
      cVar12 = pcVar1[0xf];
      auVar27[0] = -(cVar30 == unaff_XMM6_Ba);
      auVar27[1] = -(cVar31 == unaff_XMM6_Bb);
      auVar27[2] = -(cVar32 == unaff_XMM6_Bc);
      auVar27[3] = -(cVar33 == unaff_XMM6_Bd);
      auVar27[4] = -(cVar34 == unaff_XMM6_Be);
      auVar27[5] = -(cVar35 == unaff_XMM6_Bf);
      auVar27[6] = -(cVar36 == unaff_XMM6_Bg);
      auVar27[7] = -(cVar37 == unaff_XMM6_Bh);
      auVar27[8] = -(cVar38 == unaff_XMM6_Ba);
      auVar27[9] = -(cVar39 == unaff_XMM6_Bb);
      auVar27[10] = -(cVar40 == unaff_XMM6_Bc);
      auVar27[0xb] = -(cVar41 == unaff_XMM6_Bd);
      auVar27[0xc] = -(cVar14 == unaff_XMM6_Be);
      auVar27[0xd] = -(cVar10 == unaff_XMM6_Bf);
      auVar27[0xe] = -(cVar11 == unaff_XMM6_Bg);
      auVar27[0xf] = -(cVar12 == unaff_XMM6_Bh);
      uVar15 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar25 = (uint)uVar15;
      while (unaff_XMM6_Bi = unaff_XMM6_Ba, unaff_XMM6_Bj = unaff_XMM6_Bb,
            unaff_XMM6_Bk = unaff_XMM6_Bc, unaff_XMM6_Bl = unaff_XMM6_Bd,
            unaff_XMM6_Bm = unaff_XMM6_Be, unaff_XMM6_Bn = unaff_XMM6_Bf,
            unaff_XMM6_Bo = unaff_XMM6_Bg, unaff_XMM6_Bp = unaff_XMM6_Bh, uVar15 != 0) {
        uVar18 = 0;
        for (uVar21 = uVar25; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        lVar23 = lVar22 + (uVar18 + uVar16 & uVar2) * -0x20;
        cVar13 = pdb_140df4430(&uStack_c0,lVar23 + -0x20);
        if (cVar13 != '\0') {
          *(undefined8 *)(lVar23 + -8) = 0;
          goto LAB_140a57dc3;
        }
        uVar15 = (ushort)(uVar25 - 1) & (ushort)uVar25;
        uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar15);
      }
      auVar42[0] = -(cVar30 == (char)iVar6);
      auVar42[1] = -(cVar31 == (char)((uint)iVar6 >> 8));
      auVar42[2] = -(cVar32 == (char)((uint)iVar6 >> 0x10));
      auVar42[3] = -(cVar33 == (char)((uint)iVar6 >> 0x18));
      auVar42[4] = -(cVar34 == (char)iVar7);
      auVar42[5] = -(cVar35 == (char)((uint)iVar7 >> 8));
      auVar42[6] = -(cVar36 == (char)((uint)iVar7 >> 0x10));
      auVar42[7] = -(cVar37 == (char)((uint)iVar7 >> 0x18));
      auVar42[8] = -(cVar38 == (char)iVar8);
      auVar42[9] = -(cVar39 == (char)((uint)iVar8 >> 8));
      auVar42[10] = -(cVar40 == (char)((uint)iVar8 >> 0x10));
      auVar42[0xb] = -(cVar41 == (char)((uint)iVar8 >> 0x18));
      auVar42[0xc] = -(cVar14 == (char)iVar9);
      auVar42[0xd] = -(cVar10 == (char)((uint)iVar9 >> 8));
      auVar42[0xe] = -(cVar11 == (char)((uint)iVar9 >> 0x10));
      auVar42[0xf] = -(cVar12 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar42 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar42 >> 0x3f,0) & 1) != 0) || (SUB161(auVar42 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar42 >> 0x4f,0) & 1) != 0) || (SUB161(auVar42 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar42 >> 0x5f,0) & 1) != 0) || (SUB161(auVar42 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar42 >> 0x6f,0) & 1) != 0) || (SUB161(auVar42 >> 0x77,0) & 1) != 0) ||
          auVar42[0xf] < '\0') break;
      uVar16 = uVar16 + (longlong)pbStack_88 + 0x10;
      pbStack_88 = (byte *)((longlong)pbStack_88 + 0x10);
    }
  }
LAB_140a57dc3:
  lStack_c8 = param_1[3];
  if (lStack_c8 != 0) {
    pauStack_90 = (undefined1 (*) [16])*param_1;
    auVar27 = *pauStack_90;
    uVar25 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
    pauVar24 = pauStack_90 + 1;
    iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    cVar30 = (char)((uint)iVar6 >> 8);
    cVar31 = (char)((uint)iVar6 >> 0x10);
    cVar32 = (char)((uint)iVar6 >> 0x18);
    iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    cVar33 = (char)((uint)iVar7 >> 8);
    cVar34 = (char)((uint)iVar7 >> 0x10);
    cVar35 = (char)((uint)iVar7 >> 0x18);
    iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    cVar36 = (char)((uint)iVar8 >> 8);
    cVar37 = (char)((uint)iVar8 >> 0x10);
    cVar38 = (char)((uint)iVar8 >> 0x18);
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                   CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    cVar39 = (char)((uint)iVar9 >> 8);
    cVar40 = (char)((uint)iVar9 >> 0x10);
    cVar41 = (char)((uint)iVar9 >> 0x18);
    do {
      if ((short)uVar25 == 0) {
        do {
          auVar27 = *pauVar24;
          pauStack_90 = pauStack_90 + -0xf0;
          pauVar24 = pauVar24 + 1;
          uVar25 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar25 == 0);
      }
      uVar18 = 0;
      for (uVar21 = uVar25; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      uVar16 = (ulonglong)uVar18;
      lVar22 = *(longlong *)pauStack_90[uVar16 * -0xf + -1];
      if (lVar22 != 0) {
        pauStack_a0 = pauStack_90 + uVar16 * -0xf;
        pauVar20 = *(undefined1 (**) [16])(pauStack_90[uVar16 * -0xf + -3] + 8);
        uStack_d0 = *(ulonglong *)pauStack_90[uVar16 * -0xf + -2];
        auVar27 = *pauVar20;
        uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf);
        pauVar19 = pauVar20 + 1;
        lStack_98 = *(longlong *)(pauStack_a0[-2] + 8);
        pauStack_a8 = pauVar20;
        pbStack_88 = (byte *)lVar22;
        do {
          if ((short)uVar18 == 0) {
            do {
              auVar27 = *pauVar19;
              pauVar20 = pauVar20 + -0x10;
              pauVar19 = pauVar19 + 1;
              uVar18 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar18 == 0);
          }
          iVar5 = 0;
          for (uVar21 = uVar18; (uVar21 & 1) == 0; uVar21 = uVar21 >> 1 | 0x80000000) {
            iVar5 = iVar5 + 1;
          }
          lVar23 = (longlong)pauVar20 - (ulonglong)(uint)(iVar5 << 4);
          cVar14 = pdb_140df4430(lVar23 + -0x10,&uStack_c0);
          if (cVar14 != '\0') {
            lVar23 = (longlong)pauStack_a8 - lVar23 >> 4;
            uVar16 = lVar23 - 0x10U & uStack_d0;
            pcVar1 = *pauStack_a8 + uVar16;
            auVar28[0] = -(*pcVar1 == (char)iVar6);
            auVar28[1] = -(pcVar1[1] == cVar30);
            auVar28[2] = -(pcVar1[2] == cVar31);
            auVar28[3] = -(pcVar1[3] == cVar32);
            auVar28[4] = -(pcVar1[4] == (char)iVar7);
            auVar28[5] = -(pcVar1[5] == cVar33);
            auVar28[6] = -(pcVar1[6] == cVar34);
            auVar28[7] = -(pcVar1[7] == cVar35);
            auVar28[8] = -(pcVar1[8] == (char)iVar8);
            auVar28[9] = -(pcVar1[9] == cVar36);
            auVar28[10] = -(pcVar1[10] == cVar37);
            auVar28[0xb] = -(pcVar1[0xb] == cVar38);
            auVar28[0xc] = -(pcVar1[0xc] == (char)iVar9);
            auVar28[0xd] = -(pcVar1[0xd] == cVar39);
            auVar28[0xe] = -(pcVar1[0xe] == cVar40);
            auVar28[0xf] = -(pcVar1[0xf] == cVar41);
            uVar3 = (ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
            pcVar1 = *pauStack_a8 + lVar23;
            auVar29[0] = -(*pcVar1 == (char)iVar6);
            auVar29[1] = -(pcVar1[1] == cVar30);
            auVar29[2] = -(pcVar1[2] == cVar31);
            auVar29[3] = -(pcVar1[3] == cVar32);
            auVar29[4] = -(pcVar1[4] == (char)iVar7);
            auVar29[5] = -(pcVar1[5] == cVar33);
            auVar29[6] = -(pcVar1[6] == cVar34);
            auVar29[7] = -(pcVar1[7] == cVar35);
            auVar29[8] = -(pcVar1[8] == (char)iVar8);
            auVar29[9] = -(pcVar1[9] == cVar36);
            auVar29[10] = -(pcVar1[10] == cVar37);
            auVar29[0xb] = -(pcVar1[0xb] == cVar38);
            auVar29[0xc] = -(pcVar1[0xc] == (char)iVar9);
            auVar29[0xd] = -(pcVar1[0xd] == cVar39);
            auVar29[0xe] = -(pcVar1[0xe] == cVar40);
            auVar29[0xf] = -(pcVar1[0xf] == cVar41);
            uVar15 = 0xf;
            if (uVar3 != 0) {
              for (; uVar3 >> uVar15 == 0; uVar15 = uVar15 - 1) {
              }
            }
            sVar4 = 0;
            for (uVar21 = (ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(auVar29[0xf] >> 7) << 0xf) | 0x10000; (uVar21 & 1) == 0;
                uVar21 = uVar21 >> 1 | 0x80000000) {
              sVar4 = sVar4 + 1;
            }
            uVar17 = 0x80;
            if ((ushort)(sVar4 + (uVar15 ^ 0xf)) < 0x10) {
              lStack_98 = lStack_98 + 1;
              *(longlong *)(pauStack_a0[-2] + 8) = lStack_98;
              uVar17 = 0xff;
            }
            (*pauStack_a8)[lVar23] = uVar17;
            pauStack_a8[1][uVar16] = uVar17;
            pbStack_88 = (byte *)((longlong)pbStack_88 + -1);
            *(byte **)pauStack_a0[-1] = pbStack_88;
          }
          uVar18 = uVar18 - 1 & uVar18;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      uVar25 = uVar25 - 1 & uVar25;
      lStack_c8 = lStack_c8 + -1;
    } while (lStack_c8 != 0);
  }
  return;
}

