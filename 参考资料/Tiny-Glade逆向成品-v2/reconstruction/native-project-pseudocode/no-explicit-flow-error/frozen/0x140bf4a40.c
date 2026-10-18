// VA 0x140bf4a40, PDB extent 1103 bytes
// frozen::FrozenMap::insert<country_core::asset_libraries::Handle<country_core::render::mesh::Mesh>,alloc::boxed::Box<country_core::render::mesh::Mesh,alloc::alloc::Global>,std::hash::random::RandomState>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/frozen/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   frozen::FrozenMap::insert<country_core::asset_libraries::Handle<country_core::render::mesh::Mesh>,alloc::boxed::Box<country_core::render::mesh::Mesh,alloc::alloc::Global>,std::hash::random::RandomState>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/frozen/src/lib.rs
   Extent: 1103 */

undefined8 pdb_140bf4a40(int *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ushort uVar14;
  byte bVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int *piStack_68;
  byte bStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 0x3fffffff;
  }
  UNLOCK();
  pbStack_58 = param_3;
  if (iVar1 != 0) {
    uStack_49 = 1;
    pdb_142dc6e70(param_1);
  }
  puVar4 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar6 = (char)param_1[2];
  }
  else {
    uStack_49 = 1;
    bVar5 = pdb_142dc79e0();
    bVar5 = bVar5 ^ 1;
    cVar6 = (char)param_1[2];
  }
  if (cVar6 == '\0') {
    piStack_68 = param_2;
    uVar7 = pdb_1400af0a0(param_1 + 0xc);
    pauVar8 = *(undefined1 (**) [16])(param_1 + 4);
    uVar9 = *(ulonglong *)(param_1 + 6);
    bVar15 = (byte)(uVar7 >> 0x38);
    bVar16 = bVar15 >> 1;
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    uVar13 = uVar7;
    do {
      uVar13 = uVar13 & uVar9;
      auVar2 = *(undefined1 (*) [16])(*pauVar8 + uVar13);
      auVar19[0] = -(auVar2[0] == auVar17[0]);
      auVar19[1] = -(auVar2[1] == auVar17[1]);
      auVar19[2] = -(auVar2[2] == auVar17[2]);
      auVar19[3] = -(auVar2[3] == auVar17[3]);
      auVar19[4] = -(auVar2[4] == auVar17[4]);
      auVar19[5] = -(auVar2[5] == auVar17[5]);
      auVar19[6] = -(auVar2[6] == auVar17[6]);
      auVar19[7] = -(auVar2[7] == auVar17[7]);
      auVar19[8] = -(auVar2[8] == auVar17[0]);
      auVar19[9] = -(auVar2[9] == auVar17[1]);
      auVar19[10] = -(auVar2[10] == auVar17[2]);
      auVar19[0xb] = -(auVar2[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar2[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar2[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar2[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar2[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar11 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        if (*(int **)pauVar8[-1 - (uVar11 + uVar13 & uVar9)] == param_2) {
          if ((bVar5 == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) {
            uStack_49 = 1;
            cVar6 = pdb_142dc79e0();
            if (cVar6 == '\0') {
              *(undefined1 *)(param_1 + 2) = 1;
            }
          }
          LOCK();
          iVar1 = *param_1;
          *param_1 = *param_1 + -0x3fffffff;
          UNLOCK();
          if (0x3fffffff < iVar1 + 0xc0000001U) {
            uStack_49 = 1;
            pdb_142dc6fa0(param_1);
          }
          pdb_14098a960(pbStack_58);
          pub_1406abac0(pbStack_58,0x80,8);
          return 1;
        }
        uVar14 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(auVar2[0] == -1);
      auVar18[1] = -(auVar2[1] == -1);
      auVar18[2] = -(auVar2[2] == -1);
      auVar18[3] = -(auVar2[3] == -1);
      auVar18[4] = -(auVar2[4] == -1);
      auVar18[5] = -(auVar2[5] == -1);
      auVar18[6] = -(auVar2[6] == -1);
      auVar18[7] = -(auVar2[7] == -1);
      auVar18[8] = -(auVar2[8] == -1);
      auVar18[9] = -(auVar2[9] == -1);
      auVar18[10] = -(auVar2[10] == -1);
      auVar18[0xb] = -(auVar2[0xb] == -1);
      auVar18[0xc] = -(auVar2[0xc] == -1);
      auVar18[0xd] = -(auVar2[0xd] == -1);
      auVar18[0xe] = -(auVar2[0xe] == -1);
      auVar18[0xf] = -(auVar2[0xf] == -1);
      uVar14 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      if (uVar14 != 0) {
        if (*(longlong *)(param_1 + 8) == 0) {
          pdb_142d97920(param_1 + 4,1,param_1 + 0xc,CONCAT71((uint7)(byte)(uVar14 >> 8),1));
          pauVar8 = *(undefined1 (**) [16])(param_1 + 4);
          uVar9 = *(ulonglong *)(param_1 + 6);
        }
        uVar7 = uVar7 & uVar9;
        auVar17 = *(undefined1 (*) [16])(*pauVar8 + uVar7);
        uVar14 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar17[0xf] >> 7) << 0xf;
        uVar10 = (uint)uVar14;
        if (uVar14 == 0) {
          lVar12 = 0x10;
          do {
            uVar7 = uVar7 + lVar12 & uVar9;
            auVar17 = *(undefined1 (*) [16])(*pauVar8 + uVar7);
            lVar12 = lVar12 + 0x10;
            uVar10 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar17[0xf] >> 7) << 0xf);
          } while (uVar10 == 0);
        }
        uVar11 = 0;
        for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        uVar13 = uVar11 + uVar7 & uVar9;
        bVar16 = (*pauVar8)[uVar13];
        if (-1 < (char)bVar16) {
          auVar17 = *pauVar8;
          uVar10 = 0;
          for (uVar11 = (uint)(ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar17[0xf] >> 7) << 0xf); (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          uVar13 = (ulonglong)uVar10;
          bVar16 = (*pauVar8)[uVar13];
        }
        bVar15 = bVar15 >> 1;
        (*pauVar8)[uVar13] = bVar15;
        pauVar8[1][uVar13 - 0x10 & uVar9] = bVar15;
        *(int **)pauVar8[-1 - uVar13] = param_2;
        *(byte **)(pauVar8[-1 - uVar13] + 8) = pbStack_58;
        lVar12 = *(longlong *)(param_1 + 10) - _UNK_142e47bf8;
        *(ulonglong *)(param_1 + 8) =
             *(longlong *)(param_1 + 8) - ((ulonglong)bVar16 & 0xffffffffffffff01);
        *(longlong *)(param_1 + 10) = lVar12;
        if ((bVar5 == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) {
          uStack_49 = 0;
          cVar6 = pdb_142dc79e0();
          if (cVar6 == '\0') {
            *(undefined1 *)(param_1 + 2) = 1;
          }
        }
        LOCK();
        iVar1 = *param_1;
        *param_1 = *param_1 + -0x3fffffff;
        UNLOCK();
        if (0x3fffffff < iVar1 + 0xc0000001U) {
          uStack_49 = 0;
          pdb_142dc6fa0(param_1);
        }
        return 0;
      }
      uVar13 = uVar13 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    } while( true );
  }
  piStack_68 = param_1;
  bStack_60 = bVar5;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143066330,0x2b,&piStack_68,&UNK_143066360,&UNK_143066470);
}

