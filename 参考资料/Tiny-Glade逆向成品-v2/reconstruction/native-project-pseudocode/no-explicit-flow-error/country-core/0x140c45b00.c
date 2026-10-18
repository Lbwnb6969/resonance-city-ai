// VA 0x140c45b00, PDB extent 245 bytes
// country_core::resources::walls::cached_decorator_transforms::CachedDecoratorTransforms::try_transform
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/cached_decorator_transforms.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::cached_decorator_transforms::CachedDecoratorTransforms::try_transform
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/cached_decorator_transforms.rs
   Extent: 245 */

undefined8 * pdb_140c45b00(undefined8 *param_1,longlong *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  byte bVar18;
  undefined1 auVar19 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iStack_1c;
  
  if (param_2[3] == 0) {
    uVar13 = 0;
  }
  else {
    iStack_1c = param_3;
    uVar12 = pdb_1400aede0(param_2 + 4,&iStack_1c);
    bVar18 = (byte)(uVar12 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar19 = pshuflw(auVar19,auVar19,0);
    uVar13 = 0;
    iVar4 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                   CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
    iVar5 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                   CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
    iVar6 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                   CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
    iVar7 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                   CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
    lVar14 = 0;
    while( true ) {
      uVar12 = uVar12 & param_2[1];
      pcVar1 = (char *)(*param_2 + uVar12);
      auVar21[0] = -(*pcVar1 == auVar19[0]);
      auVar21[1] = -(pcVar1[1] == auVar19[1]);
      auVar21[2] = -(pcVar1[2] == auVar19[2]);
      auVar21[3] = -(pcVar1[3] == auVar19[3]);
      auVar21[4] = -(pcVar1[4] == auVar19[4]);
      auVar21[5] = -(pcVar1[5] == auVar19[5]);
      auVar21[6] = -(pcVar1[6] == auVar19[6]);
      auVar21[7] = -(pcVar1[7] == auVar19[7]);
      auVar21[8] = -(pcVar1[8] == auVar19[0]);
      auVar21[9] = -(pcVar1[9] == auVar19[1]);
      auVar21[10] = -(pcVar1[10] == auVar19[2]);
      auVar21[0xb] = -(pcVar1[0xb] == auVar19[3]);
      auVar21[0xc] = -(pcVar1[0xc] == auVar19[4]);
      auVar21[0xd] = -(pcVar1[0xd] == auVar19[5]);
      auVar21[0xe] = -(pcVar1[0xe] == auVar19[6]);
      auVar21[0xf] = -(pcVar1[0xf] == auVar19[7]);
      uVar16 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar15; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar17 = *param_2 + (uVar2 + uVar12 & param_2[1]) * -0x40;
        if (param_3 == *(int *)(lVar17 + -0x40)) {
          uVar13 = *(undefined8 *)(lVar17 + -0x30);
          uVar8 = *(undefined8 *)(lVar17 + -0x28);
          uVar9 = *(undefined8 *)(lVar17 + -0x20);
          uVar10 = *(undefined8 *)(lVar17 + -0x18);
          uVar11 = *(undefined8 *)(lVar17 + -8);
          param_1[6] = *(undefined8 *)(lVar17 + -0x10);
          param_1[7] = uVar11;
          param_1[4] = uVar9;
          param_1[5] = uVar10;
          param_1[2] = uVar13;
          param_1[3] = uVar8;
          uVar13 = 1;
          goto LAB_140c45bdf;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar20[0] = -(*pcVar1 == (char)iVar4);
      auVar20[1] = -(pcVar1[1] == (char)((uint)iVar4 >> 8));
      auVar20[2] = -(pcVar1[2] == (char)((uint)iVar4 >> 0x10));
      auVar20[3] = -(pcVar1[3] == (char)((uint)iVar4 >> 0x18));
      auVar20[4] = -(pcVar1[4] == (char)iVar5);
      auVar20[5] = -(pcVar1[5] == (char)((uint)iVar5 >> 8));
      auVar20[6] = -(pcVar1[6] == (char)((uint)iVar5 >> 0x10));
      auVar20[7] = -(pcVar1[7] == (char)((uint)iVar5 >> 0x18));
      auVar20[8] = -(pcVar1[8] == (char)iVar6);
      auVar20[9] = -(pcVar1[9] == (char)((uint)iVar6 >> 8));
      auVar20[10] = -(pcVar1[10] == (char)((uint)iVar6 >> 0x10));
      auVar20[0xb] = -(pcVar1[0xb] == (char)((uint)iVar6 >> 0x18));
      auVar20[0xc] = -(pcVar1[0xc] == (char)iVar7);
      auVar20[0xd] = -(pcVar1[0xd] == (char)((uint)iVar7 >> 8));
      auVar20[0xe] = -(pcVar1[0xe] == (char)((uint)iVar7 >> 0x10));
      auVar20[0xf] = -(pcVar1[0xf] == (char)((uint)iVar7 >> 0x18));
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar12 = uVar12 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
LAB_140c45bdf:
  *param_1 = uVar13;
  param_1[1] = 0;
  return param_1;
}

