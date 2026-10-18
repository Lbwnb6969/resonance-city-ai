// VA 0x1421634e0, PDB extent 1476 bytes
// frozen::FrozenMap::insert<country_core::asset_libraries::ssbo_library::SsboId,alloc::boxed::Box<country_core::asset_libraries::ssbo_library::BufferState,alloc::alloc::Global>,core::hash::BuildHasherDefault<nohash_hasher::NoHashHasher<country_core::asset_libraries::ssbo_library::SsboId> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/frozen/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   frozen::FrozenMap::insert<country_core::asset_libraries::ssbo_library::SsboId,alloc::boxed::Box<country_core::asset_libraries::ssbo_library::BufferState,alloc::alloc::Global>,core::hash::BuildHasherDefault<nohash_hasher::NoHashHasher<country_core::asset_libraries::ssbo_library::SsboId>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/frozen/src/lib.rs
   Extent: 1476 */

undefined8 pdb_1421634e0(int *param_1,int *param_2,byte *param_3)

{
  char *pcVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  char cVar24;
  char cVar25;
  ushort uVar26;
  uint uVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong lVar34;
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
  undefined1 auVar35 [16];
  int *piStack_b8;
  undefined1 uStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  int *piStack_98;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  LOCK();
  iVar2 = *param_1;
  if (iVar2 == 0) {
    *param_1 = 0x3fffffff;
  }
  UNLOCK();
  pbStack_a0 = param_3;
  if (iVar2 != 0) {
    uStack_81 = 1;
    pdb_142dc6e70(param_1);
  }
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uVar27 = 0;
    cVar25 = (char)param_1[2];
  }
  else {
    uStack_81 = 1;
    uVar27 = pdb_142dc79e0();
    uVar27 = uVar27 ^ 1;
    cVar25 = (char)param_1[2];
  }
  if (cVar25 == '\0') {
    uStack_90 = (byte *)CONCAT44(uStack_90._4_4_,uVar27);
    uStack_a8 = (ulonglong)param_2 >> 0x39;
    lVar34 = *(longlong *)(param_1 + 4);
    uVar3 = *(ulonglong *)(param_1 + 6);
    bVar31 = (byte)((ulonglong)param_2 >> 0x39);
    auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
    auVar32 = pshuflw(auVar32,auVar32,0);
    lVar28 = 0;
    iVar2 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    piStack_b8 = param_2;
    piStack_98 = param_2;
    do {
      uVar30 = (ulonglong)param_2 & uVar3;
      pcVar1 = (char *)(lVar34 + uVar30);
      cVar25 = *pcVar1;
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
      auVar33[0] = -(cVar25 == auVar32[0]);
      auVar33[1] = -(cVar9 == auVar32[1]);
      auVar33[2] = -(cVar10 == auVar32[2]);
      auVar33[3] = -(cVar11 == auVar32[3]);
      auVar33[4] = -(cVar12 == auVar32[4]);
      auVar33[5] = -(cVar13 == auVar32[5]);
      auVar33[6] = -(cVar14 == auVar32[6]);
      auVar33[7] = -(cVar15 == auVar32[7]);
      auVar33[8] = -(cVar16 == auVar32[0]);
      auVar33[9] = -(cVar17 == auVar32[1]);
      auVar33[10] = -(cVar18 == auVar32[2]);
      auVar33[0xb] = -(cVar19 == auVar32[3]);
      auVar33[0xc] = -(cVar20 == auVar32[4]);
      auVar33[0xd] = -(cVar21 == auVar32[5]);
      auVar33[0xe] = -(cVar22 == auVar32[6]);
      auVar33[0xf] = -(cVar23 == auVar32[7]);
      uVar26 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar27 = (uint)uVar26;
      while (uVar26 != 0) {
        uVar29 = 0;
        for (uVar5 = uVar27; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar29 = uVar29 + 1;
        }
        cVar24 = pdb_140df4430(lVar34 + (uVar29 + uVar30 & uVar3) * -0x10 + -0x10,&piStack_b8);
        if (cVar24 != '\0') {
          if (((char)uStack_90 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
            uStack_81 = 1;
            cVar25 = pdb_142dc79e0();
            if (cVar25 == '\0') {
              *(undefined1 *)(param_1 + 2) = 1;
            }
          }
          LOCK();
          iVar2 = *param_1;
          *param_1 = *param_1 + -0x3fffffff;
          UNLOCK();
          if (0x3fffffff < iVar2 + 0xc0000001U) {
            uStack_81 = 1;
            pdb_142dc6fa0(param_1);
          }
          uStack_90 = *(byte **)pbStack_a0;
          piStack_98 = *(int **)(pbStack_a0 + 8);
          if (*(code **)piStack_98 != (code *)0x0) {
            (**(code **)piStack_98)(uStack_90);
          }
          if (*(ulonglong *)((longlong)piStack_98 + 8) != 0) {
            pub_1406abac0(uStack_90,*(ulonglong *)((longlong)piStack_98 + 8),
                          *(ulonglong *)((longlong)piStack_98 + 0x10));
          }
          pub_1406abac0(pbStack_a0,0x48,8);
          return 1;
        }
        uVar26 = (ushort)(uVar27 - 1) & (ushort)uVar27;
        uVar27 = CONCAT22((short)(uVar27 - 1 >> 0x10),uVar26);
      }
      auVar35[0] = -(cVar25 == (char)iVar2);
      auVar35[1] = -(cVar9 == (char)((uint)iVar2 >> 8));
      auVar35[2] = -(cVar10 == (char)((uint)iVar2 >> 0x10));
      auVar35[3] = -(cVar11 == (char)((uint)iVar2 >> 0x18));
      auVar35[4] = -(cVar12 == (char)iVar6);
      auVar35[5] = -(cVar13 == (char)((uint)iVar6 >> 8));
      auVar35[6] = -(cVar14 == (char)((uint)iVar6 >> 0x10));
      auVar35[7] = -(cVar15 == (char)((uint)iVar6 >> 0x18));
      auVar35[8] = -(cVar16 == (char)iVar7);
      auVar35[9] = -(cVar17 == (char)((uint)iVar7 >> 8));
      auVar35[10] = -(cVar18 == (char)((uint)iVar7 >> 0x10));
      auVar35[0xb] = -(cVar19 == (char)((uint)iVar7 >> 0x18));
      auVar35[0xc] = -(cVar20 == (char)iVar8);
      auVar35[0xd] = -(cVar21 == (char)((uint)iVar8 >> 8));
      auVar35[0xe] = -(cVar22 == (char)((uint)iVar8 >> 0x10));
      auVar35[0xf] = -(cVar23 == (char)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') {
        if (*(longlong *)(param_1 + 8) == 0) {
          pdb_142d9dcd0(param_1 + 4,1,param_1 + 0xc,CONCAT71((int7)(uVar3 >> 8),1));
        }
        pauVar4 = *(undefined1 (**) [16])(param_1 + 4);
        uVar3 = *(ulonglong *)(param_1 + 6);
        uVar30 = uVar3 & (ulonglong)piStack_98;
        auVar32 = *(undefined1 (*) [16])(*pauVar4 + uVar30);
        uVar26 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
        uVar27 = (uint)uVar26;
        if (uVar26 == 0) {
          lVar34 = 0x10;
          do {
            uVar30 = uVar30 + lVar34 & uVar3;
            auVar32 = *(undefined1 (*) [16])(*pauVar4 + uVar30);
            lVar34 = lVar34 + 0x10;
            uVar27 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar32[0xf] >> 7) << 0xf);
          } while (uVar27 == 0);
        }
        uVar29 = 0;
        for (; (uVar27 & 1) == 0; uVar27 = uVar27 >> 1 | 0x80000000) {
          uVar29 = uVar29 + 1;
        }
        uVar30 = uVar29 + uVar30 & uVar3;
        bVar31 = (*pauVar4)[uVar30];
        if (-1 < (char)bVar31) {
          auVar32 = *pauVar4;
          uVar27 = 0;
          for (uVar29 = (uint)(ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar32[0xf] >> 7) << 0xf); (uVar29 & 1) == 0;
              uVar29 = uVar29 >> 1 | 0x80000000) {
            uVar27 = uVar27 + 1;
          }
          uVar30 = (ulonglong)uVar27;
          bVar31 = (*pauVar4)[uVar30];
        }
        (*pauVar4)[uVar30] = (char)uStack_a8;
        pauVar4[1][uVar30 - 0x10 & uVar3] = (char)uStack_a8;
        *(int **)pauVar4[-1 - uVar30] = piStack_98;
        *(byte **)(pauVar4[-1 - uVar30] + 8) = pbStack_a0;
        lVar34 = *(longlong *)(param_1 + 10) - _UNK_142e47bf8;
        *(ulonglong *)(param_1 + 8) =
             *(longlong *)(param_1 + 8) - ((ulonglong)bVar31 & 0xffffffffffffff01);
        *(longlong *)(param_1 + 10) = lVar34;
        if (((char)uStack_90 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
          uStack_81 = 0;
          cVar25 = pdb_142dc79e0();
          if (cVar25 == '\0') {
            *(undefined1 *)(param_1 + 2) = 1;
          }
        }
        LOCK();
        iVar2 = *param_1;
        *param_1 = *param_1 + -0x3fffffff;
        UNLOCK();
        if (0x3fffffff < iVar2 + 0xc0000001U) {
          uStack_81 = 0;
          pdb_142dc6fa0(param_1);
        }
        return 0;
      }
      param_2 = (int *)(uVar30 + lVar28 + 0x10);
      lVar28 = lVar28 + 0x10;
    } while( true );
  }
  uStack_b0 = (undefined1)uVar27;
  piStack_b8 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143464b80,0x2b,&piStack_b8,&UNK_143464bb0,&UNK_143464c40);
}

