// VA 0x140a56a40, PDB extent 536 bytes
// country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::get_by_name<ref$<asset::prefab::PrefabNameRef> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::get_by_name<ref$<asset::prefab::PrefabNameRef>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 536 */

undefined8 pdb_140a56a40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
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
  char cVar24;
  char cVar25;
  byte *pbVar26;
  char cVar27;
  ushort uVar28;
  byte *pbVar29;
  byte *pbVar30;
  ulonglong uVar31;
  uint uVar32;
  longlong lVar33;
  byte bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  undefined1 auVar37 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  code *pcStack_a8;
  byte **ppbStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  byte *pbStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_c0 = pdb_1406d0830(param_2);
  pbStack_b0 = (byte *)&uStack_c0;
  pcStack_a8 = pdb_1402ed400;
  uStack_b8 = param_3;
  pdb_140f60760(&ppbStack_a0,&UNK_14303de48,&pbStack_b0);
  pbStack_88 = (byte *)pcStack_98;
  pbVar29 = (byte *)pdb_140df4400(pcStack_98,uStack_90);
  if (ppbStack_a0 != (byte **)0x0) {
    pub_1406abac0(pbStack_88,(ulonglong)ppbStack_a0,1);
  }
  pbStack_b0 = pbVar29;
  pbVar26 = pbStack_88;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    uVar3 = *(ulonglong *)(param_1 + 0x38);
    bVar34 = (byte)((ulonglong)pbVar29 >> 0x39);
    auVar35 = ZEXT216(CONCAT11(bVar34,bVar34));
    auVar35 = pshuflw(auVar35,auVar35,0);
    pbVar30 = (byte *)0x0;
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
      uVar31 = (ulonglong)pbVar29 & uVar3;
      pcVar1 = (char *)(lVar2 + uVar31);
      cVar10 = *pcVar1;
      cVar11 = pcVar1[1];
      cVar12 = pcVar1[2];
      cVar13 = pcVar1[3];
      cVar14 = pcVar1[4];
      cVar15 = pcVar1[5];
      cVar16 = pcVar1[6];
      cVar17 = pcVar1[7];
      cVar18 = pcVar1[8];
      cVar19 = pcVar1[9];
      cVar20 = pcVar1[10];
      cVar21 = pcVar1[0xb];
      cVar22 = pcVar1[0xc];
      cVar23 = pcVar1[0xd];
      cVar24 = pcVar1[0xe];
      cVar25 = pcVar1[0xf];
      auVar36[0] = -(cVar10 == auVar35[0]);
      auVar36[1] = -(cVar11 == auVar35[1]);
      auVar36[2] = -(cVar12 == auVar35[2]);
      auVar36[3] = -(cVar13 == auVar35[3]);
      auVar36[4] = -(cVar14 == auVar35[4]);
      auVar36[5] = -(cVar15 == auVar35[5]);
      auVar36[6] = -(cVar16 == auVar35[6]);
      auVar36[7] = -(cVar17 == auVar35[7]);
      auVar36[8] = -(cVar18 == auVar35[0]);
      auVar36[9] = -(cVar19 == auVar35[1]);
      auVar36[10] = -(cVar20 == auVar35[2]);
      auVar36[0xb] = -(cVar21 == auVar35[3]);
      auVar36[0xc] = -(cVar22 == auVar35[4]);
      auVar36[0xd] = -(cVar23 == auVar35[5]);
      auVar36[0xe] = -(cVar24 == auVar35[6]);
      auVar36[0xf] = -(cVar25 == auVar35[7]);
      uVar28 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar32 = (uint)uVar28;
      pbVar26 = pbStack_88;
      while (pbStack_88 = pbVar30, uVar28 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar32; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar33 = lVar2 + (uVar4 + uVar31 & uVar3) * -0x20;
        cVar27 = pdb_140df4430(&pbStack_b0,lVar33 + -0x20);
        if (cVar27 != '\0') {
          return *(undefined8 *)(lVar33 + -0x10);
        }
        uVar28 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar28);
        pbVar30 = pbStack_88;
        pbVar26 = pbStack_88;
      }
      auVar37[0] = -(cVar10 == (char)iVar6);
      auVar37[1] = -(cVar11 == (char)((uint)iVar6 >> 8));
      auVar37[2] = -(cVar12 == (char)((uint)iVar6 >> 0x10));
      auVar37[3] = -(cVar13 == (char)((uint)iVar6 >> 0x18));
      auVar37[4] = -(cVar14 == (char)iVar7);
      auVar37[5] = -(cVar15 == (char)((uint)iVar7 >> 8));
      auVar37[6] = -(cVar16 == (char)((uint)iVar7 >> 0x10));
      auVar37[7] = -(cVar17 == (char)((uint)iVar7 >> 0x18));
      auVar37[8] = -(cVar18 == (char)iVar8);
      auVar37[9] = -(cVar19 == (char)((uint)iVar8 >> 8));
      auVar37[10] = -(cVar20 == (char)((uint)iVar8 >> 0x10));
      auVar37[0xb] = -(cVar21 == (char)((uint)iVar8 >> 0x18));
      auVar37[0xc] = -(cVar22 == (char)iVar9);
      auVar37[0xd] = -(cVar23 == (char)((uint)iVar9 >> 8));
      auVar37[0xe] = -(cVar24 == (char)((uint)iVar9 >> 0x10));
      auVar37[0xf] = -(cVar25 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar37 >> 0x3f,0) & 1) != 0) || (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar37 >> 0x4f,0) & 1) != 0) || (SUB161(auVar37 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar37 >> 0x5f,0) & 1) != 0) || (SUB161(auVar37 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar37 >> 0x6f,0) & 1) != 0) || (SUB161(auVar37 >> 0x77,0) & 1) != 0) ||
          auVar37[0xf] < '\0') break;
      pbVar29 = pbStack_88 + uVar31 + 0x10;
      pbVar30 = pbStack_88 + 0x10;
      pbStack_88 = pbVar26;
    }
  }
  pbStack_88 = pbVar26;
  pcStack_98 = pdb_140a4f660;
  ppbStack_a0 = &pbStack_b0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14303dc87,&ppbStack_a0,&UNK_14303dca8);
}

