// VA 0x1424bceb0, PDB extent 427 bytes
// country_core::resources::walls::decorator_subtype::DerivedDecoratorInfo::bbx_ls<country_core::resources::walls::decorator_subtype::DecoratorSubtype>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_subtype::DerivedDecoratorInfo::bbx_ls<country_core::resources::walls::decorator_subtype::DecoratorSubtype>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 427 */

undefined8 *
pdb_1424bceb0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  byte bVar21;
  char cVar22;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 auVar23 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  char cStack_32;
  char cStack_31;
  char *pcStack_30;
  code *pcStack_28;
  
  cStack_31 = pdb_1409012c0(param_3,*param_2);
  plVar4 = (longlong *)param_2[1];
  cStack_32 = pdb_140c44ba0(param_4);
  if (plVar4[3] != 0) {
    uVar16 = pdb_1413f0300(plVar4 + 4,&cStack_32);
    lVar5 = *plVar4;
    uVar6 = plVar4[1];
    bVar21 = (byte)(uVar16 >> 0x39);
    auVar23 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar23 = pshuflw(auVar23,auVar23,0);
    cVar22 = auVar23[0];
    cVar24 = auVar23[1];
    cVar25 = auVar23[2];
    cVar26 = auVar23[3];
    cVar27 = auVar23[4];
    cVar28 = auVar23[5];
    cVar29 = auVar23[6];
    cVar30 = auVar23[7];
    if (cStack_32 != '\x1a') {
      lVar18 = 0;
      iVar9 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                     CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
      iVar10 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                      CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
      iVar11 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                      CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
      iVar12 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                      CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
      do {
        uVar16 = uVar16 & uVar6;
        pcVar1 = (char *)(lVar5 + uVar16);
        auVar33[0] = -(*pcVar1 == cVar22);
        auVar33[1] = -(pcVar1[1] == cVar24);
        auVar33[2] = -(pcVar1[2] == cVar25);
        auVar33[3] = -(pcVar1[3] == cVar26);
        auVar33[4] = -(pcVar1[4] == cVar27);
        auVar33[5] = -(pcVar1[5] == cVar28);
        auVar33[6] = -(pcVar1[6] == cVar29);
        auVar33[7] = -(pcVar1[7] == cVar30);
        auVar33[8] = -(pcVar1[8] == cVar22);
        auVar33[9] = -(pcVar1[9] == cVar24);
        auVar33[10] = -(pcVar1[10] == cVar25);
        auVar33[0xb] = -(pcVar1[0xb] == cVar26);
        auVar33[0xc] = -(pcVar1[0xc] == cVar27);
        auVar33[0xd] = -(pcVar1[0xd] == cVar28);
        auVar33[0xe] = -(pcVar1[0xe] == cVar29);
        auVar33[0xf] = -(pcVar1[0xf] == cVar30);
        uVar19 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf
        ;
        uVar17 = (uint)uVar19;
        while (uVar19 != 0) {
          uVar7 = 0;
          for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          uVar20 = uVar7 + uVar16 & uVar6;
          cVar3 = *(char *)(lVar5 + -0x48 + uVar20 * -0x48);
          if (((cVar3 != '\x1a') && (cStack_32 == cVar3)) &&
             (cStack_31 == *(char *)(lVar5 + uVar20 * -0x48 + -0x47))) {
LAB_1424bd00b:
            puVar2 = (undefined8 *)(lVar5 + -0x20 + uVar20 * -0x48);
            uVar13 = *puVar2;
            uVar14 = puVar2[1];
            puVar2 = (undefined8 *)(lVar5 + -0x10 + uVar20 * -0x48);
            uVar15 = puVar2[1];
            param_1[2] = *puVar2;
            param_1[3] = uVar15;
            *param_1 = uVar13;
            param_1[1] = uVar14;
            return param_1;
          }
          uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
        }
        auVar32[0] = -(*pcVar1 == (char)iVar9);
        auVar32[1] = -(pcVar1[1] == (char)((uint)iVar9 >> 8));
        auVar32[2] = -(pcVar1[2] == (char)((uint)iVar9 >> 0x10));
        auVar32[3] = -(pcVar1[3] == (char)((uint)iVar9 >> 0x18));
        auVar32[4] = -(pcVar1[4] == (char)iVar10);
        auVar32[5] = -(pcVar1[5] == (char)((uint)iVar10 >> 8));
        auVar32[6] = -(pcVar1[6] == (char)((uint)iVar10 >> 0x10));
        auVar32[7] = -(pcVar1[7] == (char)((uint)iVar10 >> 0x18));
        auVar32[8] = -(pcVar1[8] == (char)iVar11);
        auVar32[9] = -(pcVar1[9] == (char)((uint)iVar11 >> 8));
        auVar32[10] = -(pcVar1[10] == (char)((uint)iVar11 >> 0x10));
        auVar32[0xb] = -(pcVar1[0xb] == (char)((uint)iVar11 >> 0x18));
        auVar32[0xc] = -(pcVar1[0xc] == (char)iVar12);
        auVar32[0xd] = -(pcVar1[0xd] == (char)((uint)iVar12 >> 8));
        auVar32[0xe] = -(pcVar1[0xe] == (char)((uint)iVar12 >> 0x10));
        auVar32[0xf] = -(pcVar1[0xf] == (char)((uint)iVar12 >> 0x18));
        if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x1f,0) & 1) != 0) || (SUB161(auVar32 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') goto LAB_1424bd02c;
        uVar16 = uVar16 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      } while( true );
    }
    lVar18 = 0;
    iVar9 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar10 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                    CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar11 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                    CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar12 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                    CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    while( true ) {
      uVar16 = uVar16 & uVar6;
      pcVar1 = (char *)(lVar5 + uVar16);
      auVar23[0] = -(*pcVar1 == cVar22);
      auVar23[1] = -(pcVar1[1] == cVar24);
      auVar23[2] = -(pcVar1[2] == cVar25);
      auVar23[3] = -(pcVar1[3] == cVar26);
      auVar23[4] = -(pcVar1[4] == cVar27);
      auVar23[5] = -(pcVar1[5] == cVar28);
      auVar23[6] = -(pcVar1[6] == cVar29);
      auVar23[7] = -(pcVar1[7] == cVar30);
      auVar23[8] = -(pcVar1[8] == cVar22);
      auVar23[9] = -(pcVar1[9] == cVar24);
      auVar23[10] = -(pcVar1[10] == cVar25);
      auVar23[0xb] = -(pcVar1[0xb] == cVar26);
      auVar23[0xc] = -(pcVar1[0xc] == cVar27);
      auVar23[0xd] = -(pcVar1[0xd] == cVar28);
      auVar23[0xe] = -(pcVar1[0xe] == cVar29);
      auVar23[0xf] = -(pcVar1[0xf] == cVar30);
      uVar19 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar20 = uVar7 + uVar16 & uVar6;
        if (*(char *)(lVar5 + -0x48 + uVar20 * -0x48) == '\x1a') goto LAB_1424bd00b;
        uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
      }
      auVar31[0] = -(*pcVar1 == (char)iVar9);
      auVar31[1] = -(pcVar1[1] == (char)((uint)iVar9 >> 8));
      auVar31[2] = -(pcVar1[2] == (char)((uint)iVar9 >> 0x10));
      auVar31[3] = -(pcVar1[3] == (char)((uint)iVar9 >> 0x18));
      auVar31[4] = -(pcVar1[4] == (char)iVar10);
      auVar31[5] = -(pcVar1[5] == (char)((uint)iVar10 >> 8));
      auVar31[6] = -(pcVar1[6] == (char)((uint)iVar10 >> 0x10));
      auVar31[7] = -(pcVar1[7] == (char)((uint)iVar10 >> 0x18));
      auVar31[8] = -(pcVar1[8] == (char)iVar11);
      auVar31[9] = -(pcVar1[9] == (char)((uint)iVar11 >> 8));
      auVar31[10] = -(pcVar1[10] == (char)((uint)iVar11 >> 0x10));
      auVar31[0xb] = -(pcVar1[0xb] == (char)((uint)iVar11 >> 0x18));
      auVar31[0xc] = -(pcVar1[0xc] == (char)iVar12);
      auVar31[0xd] = -(pcVar1[0xd] == (char)((uint)iVar12 >> 8));
      auVar31[0xe] = -(pcVar1[0xe] == (char)((uint)iVar12 >> 0x10));
      auVar31[0xf] = -(pcVar1[0xf] == (char)((uint)iVar12 >> 0x18));
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar16 = uVar16 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
LAB_1424bd02c:
  pcStack_30 = &cStack_32;
  pcStack_28 = pdb_1424bce10;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143510426,&pcStack_30,&UNK_143510458);
}

