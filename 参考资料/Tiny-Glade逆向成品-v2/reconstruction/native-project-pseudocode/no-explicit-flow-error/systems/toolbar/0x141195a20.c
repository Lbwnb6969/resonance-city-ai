// VA 0x141195a20, PDB extent 543 bytes
// toolbar::menu::daily_welcome::ui::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/daily_welcome.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::daily_welcome::ui::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/daily_welcome.rs
   Extent: 543 */

void pdb_141195a20(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong **pplVar2;
  longlong **pplVar3;
  uint uVar4;
  uint uVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  code *pcVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulonglong uStack_90;
  byte *pbStack_88;
  undefined8 ***pppuStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  longlong ***ppplStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pcVar9 = (code *)0xe;
  pppuStack_78 = (undefined8 ***)pdb_140dc6290(&UNK_14329f4d3);
  ppplStack_58 = (longlong ***)&pppuStack_78;
  pcStack_50 = pdb_1402ed400;
  pcStack_70 = pcVar9;
  pdb_140f60760(&uStack_90,&UNK_14329f4e1,&ppplStack_58);
  pbStack_60 = pbStack_88;
  pdb_1407339e0(&ppplStack_58,param_3);
  pdb_140725f50(&pppuStack_78,&ppplStack_58,0x15);
  uVar7 = pdb_14116dd60(&pppuStack_78);
  pdb_14119b2b0(uVar7);
  pppuVar6 = pppuStack_78;
  ppplStack_58 = pppuStack_78;
  pcStack_50 = pcStack_70;
  uStack_48 = uStack_68;
  if (pppuStack_78[0x39] != (longlong **)0x0) {
    uVar8 = pdb_1400af0a0(pppuStack_78 + 0x3a,&pcStack_50);
    pplVar2 = pppuVar6[0x36];
    pplVar3 = pppuVar6[0x37];
    bVar14 = (byte)(uVar8 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & (ulonglong)pplVar3;
      pcVar1 = (char *)((longlong)pplVar2 + uVar8);
      auVar17[0] = -(*pcVar1 == auVar15[0]);
      auVar17[1] = -(pcVar1[1] == auVar15[1]);
      auVar17[2] = -(pcVar1[2] == auVar15[2]);
      auVar17[3] = -(pcVar1[3] == auVar15[3]);
      auVar17[4] = -(pcVar1[4] == auVar15[4]);
      auVar17[5] = -(pcVar1[5] == auVar15[5]);
      auVar17[6] = -(pcVar1[6] == auVar15[6]);
      auVar17[7] = -(pcVar1[7] == auVar15[7]);
      auVar17[8] = -(pcVar1[8] == auVar15[0]);
      auVar17[9] = -(pcVar1[9] == auVar15[1]);
      auVar17[10] = -(pcVar1[10] == auVar15[2]);
      auVar17[0xb] = -(pcVar1[0xb] == auVar15[3]);
      auVar17[0xc] = -(pcVar1[0xc] == auVar15[4]);
      auVar17[0xd] = -(pcVar1[0xd] == auVar15[5]);
      auVar17[0xe] = -(pcVar1[0xe] == auVar15[6]);
      auVar17[0xf] = -(pcVar1[0xf] == auVar15[7]);
      uVar12 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar13 = uVar4 + uVar8 & (ulonglong)pplVar3;
        if (pcStack_50 == (code *)pplVar2[uVar13 * -0x1b + -0x1b]) {
          bVar14 = *(byte *)((longlong)pplVar2 + uVar13 * -0xd8 + -6);
          if (uStack_90 != 0) {
            pub_1406abac0(pbStack_60,uStack_90,1);
          }
          if ((bVar14 & 0x30) != 0) {
            *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
            *(undefined4 *)*param_2 = 1;
          }
          return;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar16[0] = -(*pcVar1 == -1);
      auVar16[1] = -(pcVar1[1] == -1);
      auVar16[2] = -(pcVar1[2] == -1);
      auVar16[3] = -(pcVar1[3] == -1);
      auVar16[4] = -(pcVar1[4] == -1);
      auVar16[5] = -(pcVar1[5] == -1);
      auVar16[6] = -(pcVar1[6] == -1);
      auVar16[7] = -(pcVar1[7] == -1);
      auVar16[8] = -(pcVar1[8] == -1);
      auVar16[9] = -(pcVar1[9] == -1);
      auVar16[10] = -(pcVar1[10] == -1);
      auVar16[0xb] = -(pcVar1[0xb] == -1);
      auVar16[0xc] = -(pcVar1[0xc] == -1);
      auVar16[0xd] = -(pcVar1[0xd] == -1);
      auVar16[0xe] = -(pcVar1[0xe] == -1);
      auVar16[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar8 = uVar8 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

