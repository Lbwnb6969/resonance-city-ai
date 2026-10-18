// VA 0x14119af20, PDB extent 659 bytes
// toolbar::menu::welcome::ui::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/welcome.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::welcome::ui::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/welcome.rs
   Extent: 659 */

void pdb_14119af20(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong uStack_90;
  byte *pbStack_88;
  undefined8 ****ppppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 ****ppppuStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar11 = 0xe;
  ppppuStack_78 = (undefined8 ****)pdb_140dc6290(&UNK_14329f4d3);
  ppppuStack_58 = &ppppuStack_78;
  ppuStack_50 = (undefined8 **)pdb_1402ed400;
  ppuStack_70 = (undefined8 **)uVar11;
  pdb_140f60760(&uStack_90,&UNK_14329f4e1,&ppppuStack_58);
  pbStack_60 = pbStack_88;
  pdb_1407339e0(&ppppuStack_58,param_2);
  uVar11 = pdb_14116dd60(&ppppuStack_58);
  pdb_14119b2b0(uVar11);
  uStack_68 = uStack_48;
  ppppuStack_78 = ppppuStack_58;
  ppuStack_70 = ppuStack_50;
  pdb_140725f50(&ppppuStack_58,&ppppuStack_78,0x15);
  ppppuVar3 = ppppuStack_58;
  if ((undefined8 ****)ppppuStack_58[0x39] != (undefined8 ****)0x0) {
    uVar10 = pdb_1400af0a0(ppppuStack_58 + 0x3a,&ppuStack_50);
    ppppuVar2 = (undefined8 ****)ppppuVar3[0x36];
    ppppuVar3 = (undefined8 ****)ppppuVar3[0x37];
    bVar16 = (byte)(uVar10 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    while( true ) {
      uVar10 = uVar10 & (ulonglong)ppppuVar3;
      pcVar1 = (char *)((longlong)ppppuVar2 + uVar10);
      auVar19[0] = -(*pcVar1 == auVar17[0]);
      auVar19[1] = -(pcVar1[1] == auVar17[1]);
      auVar19[2] = -(pcVar1[2] == auVar17[2]);
      auVar19[3] = -(pcVar1[3] == auVar17[3]);
      auVar19[4] = -(pcVar1[4] == auVar17[4]);
      auVar19[5] = -(pcVar1[5] == auVar17[5]);
      auVar19[6] = -(pcVar1[6] == auVar17[6]);
      auVar19[7] = -(pcVar1[7] == auVar17[7]);
      auVar19[8] = -(pcVar1[8] == auVar17[0]);
      auVar19[9] = -(pcVar1[9] == auVar17[1]);
      auVar19[10] = -(pcVar1[10] == auVar17[2]);
      auVar19[0xb] = -(pcVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(pcVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(pcVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(pcVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(pcVar1[0xf] == auVar17[7]);
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
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar13; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar15 = uVar8 + uVar10 & (ulonglong)ppppuVar3;
        if ((undefined8 ***)ppuStack_50 == ppppuVar2[uVar15 * -0x1b + -0x1b]) {
          bVar16 = *(byte *)((longlong)ppppuVar2 + uVar15 * -0xd8 + -6);
          if (uStack_90 != 0) {
            pub_1406abac0(pbStack_60,uStack_90,1);
          }
          if ((bVar16 & 0x30) != 0) {
            plVar4 = *(longlong **)(param_1 + 8);
            *(undefined4 *)plVar4[2] = *(undefined4 *)((longlong)plVar4 + 0x1c);
            *(undefined1 *)(*plVar4 + 0x419) = 1;
            plVar4 = *(longlong **)(param_1 + 0x10);
            *(undefined4 *)plVar4[2] = *(undefined4 *)((longlong)plVar4 + 0x1c);
            lVar12 = *plVar4;
            lVar5 = *(longlong *)(lVar12 + 0x30);
            uVar11 = *(undefined8 *)(lVar12 + 0x40);
            if (lVar5 == *(longlong *)(lVar12 + 0x20)) {
              pdb_142d7e8a0(lVar12 + 0x20);
            }
            *(undefined8 *)(*(longlong *)(lVar12 + 0x28) + lVar5 * 8) = uVar11;
            *(longlong *)(lVar12 + 0x30) = lVar5 + 1;
            *(longlong *)(lVar12 + 0x40) = *(longlong *)(lVar12 + 0x40) + 1;
            puVar6 = *(undefined8 **)(param_1 + 0x18);
            *(undefined4 *)puVar6[2] = *(undefined4 *)((longlong)puVar6 + 0x1c);
            *(undefined4 *)*puVar6 = 2;
          }
          return;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar10 = uVar10 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}

