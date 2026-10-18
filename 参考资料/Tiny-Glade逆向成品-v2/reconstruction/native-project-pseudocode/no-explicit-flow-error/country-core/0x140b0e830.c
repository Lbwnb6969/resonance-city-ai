// VA 0x140b0e830, PDB extent 595 bytes
// country_core::resources::walls::inner_walls::InnerWalls::remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::walls::inner_walls::InnerWalls::remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 595 */

undefined8 * pdb_140b0e830(undefined8 *param_1,longlong *param_2,undefined8 **param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 uStack_b9;
  longlong *plStack_b8;
  undefined8 **ppuStack_b0;
  code *pcStack_a8;
  undefined8 **ppuStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  longlong **pplStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  plStack_b8 = (longlong *)param_3;
  if (4 < *_DAT_143ca8e90) {
    pcStack_a8 = pdb_140b0f370;
    ppuStack_a0 = (undefined8 **)0x0;
    pcStack_98 = (code *)&UNK_143054511;
    uStack_90 = 0x2b;
    uStack_88 = 0;
    puStack_80 = &UNK_1430543fd;
    uStack_78 = 0x36;
    uStack_70 = 5;
    puStack_68 = &UNK_143054511;
    uStack_60 = 0x2b;
    uStack_58 = 0x9400000001;
    puStack_50 = &UNK_143054500;
    pplStack_48 = (longlong **)&ppuStack_b0;
    ppuStack_b0 = &plStack_b8;
    pdb_140f332f0(&uStack_b9,&ppuStack_a0);
  }
  if (param_2[3] != 0) {
    ppuStack_a0 = param_3;
    uVar4 = pdb_1400af0a0(param_2 + 4,&ppuStack_a0);
    bVar9 = (byte)(uVar4 >> 0x39);
    auVar10 = ZEXT216(CONCAT11(bVar9,bVar9));
    auVar10 = pshuflw(auVar10,auVar10,0);
    lVar6 = 0;
    while( true ) {
      uVar4 = uVar4 & param_2[1];
      auVar1 = *(undefined1 (*) [16])(*param_2 + uVar4);
      auVar12[0] = -(auVar1[0] == auVar10[0]);
      auVar12[1] = -(auVar1[1] == auVar10[1]);
      auVar12[2] = -(auVar1[2] == auVar10[2]);
      auVar12[3] = -(auVar1[3] == auVar10[3]);
      auVar12[4] = -(auVar1[4] == auVar10[4]);
      auVar12[5] = -(auVar1[5] == auVar10[5]);
      auVar12[6] = -(auVar1[6] == auVar10[6]);
      auVar12[7] = -(auVar1[7] == auVar10[7]);
      auVar12[8] = -(auVar1[8] == auVar10[0]);
      auVar12[9] = -(auVar1[9] == auVar10[1]);
      auVar12[10] = -(auVar1[10] == auVar10[2]);
      auVar12[0xb] = -(auVar1[0xb] == auVar10[3]);
      auVar12[0xc] = -(auVar1[0xc] == auVar10[4]);
      auVar12[0xd] = -(auVar1[0xd] == auVar10[5]);
      auVar12[0xe] = -(auVar1[0xe] == auVar10[6]);
      auVar12[0xf] = -(auVar1[0xf] == auVar10[7]);
      uVar8 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        if (param_3 == *(undefined8 ***)(*param_2 + -0x78 + (uVar2 + uVar4 & param_2[1]) * -0x78)) {
          pdb_1403b05d0(param_2 + 0x12,param_3);
          uVar5 = pdb_1400af0a0(param_2 + 4,&plStack_b8);
          pdb_140ca9270(&ppuStack_a0,param_2,uVar5,&plStack_b8);
          if (SBORROW8(0,(longlong)pcStack_98)) {
            *param_1 = 0x8000000000000000;
          }
          else {
            param_1[0xc] = uStack_38;
            param_1[0xd] = uStack_30;
            param_1[10] = pplStack_48;
            param_1[0xb] = uStack_40;
            param_1[8] = uStack_58;
            param_1[9] = puStack_50;
            param_1[6] = puStack_68;
            param_1[7] = uStack_60;
            param_1[4] = uStack_78;
            param_1[5] = uStack_70;
            param_1[2] = uStack_88;
            param_1[3] = puStack_80;
            *param_1 = pcStack_98;
            param_1[1] = uStack_90;
          }
          return param_1;
        }
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
      }
      auVar11[0] = -(auVar1[0] == -1);
      auVar11[1] = -(auVar1[1] == -1);
      auVar11[2] = -(auVar1[2] == -1);
      auVar11[3] = -(auVar1[3] == -1);
      auVar11[4] = -(auVar1[4] == -1);
      auVar11[5] = -(auVar1[5] == -1);
      auVar11[6] = -(auVar1[6] == -1);
      auVar11[7] = -(auVar1[7] == -1);
      auVar11[8] = -(auVar1[8] == -1);
      auVar11[9] = -(auVar1[9] == -1);
      auVar11[10] = -(auVar1[10] == -1);
      auVar11[0xb] = -(auVar1[0xb] == -1);
      auVar11[0xc] = -(auVar1[0xc] == -1);
      auVar11[0xd] = -(auVar1[0xd] == -1);
      auVar11[0xe] = -(auVar1[0xe] == -1);
      auVar11[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar11 >> 7,0) & 1) != 0 || (SUB161(auVar11 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar11 >> 0x17,0) & 1) != 0) || (SUB161(auVar11 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar11 >> 0x27,0) & 1) != 0) || (SUB161(auVar11 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar11 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar11 >> 0x3f,0) & 1) != 0) || (SUB161(auVar11 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar11 >> 0x4f,0) & 1) != 0) || (SUB161(auVar11 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar11 >> 0x5f,0) & 1) != 0) || (SUB161(auVar11 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar11 >> 0x6f,0) & 1) != 0) || (SUB161(auVar11 >> 0x77,0) & 1) != 0) ||
          auVar11[0xf] < '\0') break;
      uVar4 = uVar4 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
  pcStack_98 = pdb_140c04ef0;
  ppuStack_a0 = &plStack_b8;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14305453c,&ppuStack_a0,&UNK_143054560);
}

