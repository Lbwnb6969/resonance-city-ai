// VA 0x14119ac50, PDB extent 707 bytes
// toolbar::menu::welcome::ui::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/welcome.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::welcome::ui::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/welcome.rs
   Extent: 707 */

void pdb_14119ac50(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulonglong uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  cVar2 = *(char *)*param_1;
  if (cVar2 == '\0') {
    pdb_1407339e0(auStack_98,param_2,&UNK_14329f924,6);
  }
  else {
    uVar9 = 0xe;
    uStack_70 = pdb_140dc6290(&UNK_14329f4d3);
    puStack_80 = &uStack_70;
    pcStack_78 = pdb_1402ed400;
    uStack_68 = uVar9;
    pdb_140f60760(&uStack_58,&UNK_14329f4e1,&puStack_80);
    pbStack_60 = pbStack_50;
    pdb_1407339e0(auStack_98,param_2,pbStack_50,uStack_48);
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_60,uStack_58,1);
    }
  }
  pdb_140725f50(&uStack_b0,auStack_98,0x15);
  uVar9 = pdb_14116dd60(&uStack_b0);
  pdb_14119b2b0(uVar9);
  uStack_58 = uStack_b0;
  pbStack_50 = pbStack_a8;
  uStack_48 = uStack_a0;
  if (*(longlong *)(uStack_b0 + 0x1c8) != 0) {
    uVar8 = pdb_1400af0a0(uStack_b0 + 0x1d0,&pbStack_50);
    lVar3 = *(longlong *)(uStack_b0 + 0x1b0);
    bVar14 = (byte)(uVar8 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar10 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(uStack_b0 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(lVar3 + uVar8);
      auVar17[0] = -(auVar1[0] == auVar15[0]);
      auVar17[1] = -(auVar1[1] == auVar15[1]);
      auVar17[2] = -(auVar1[2] == auVar15[2]);
      auVar17[3] = -(auVar1[3] == auVar15[3]);
      auVar17[4] = -(auVar1[4] == auVar15[4]);
      auVar17[5] = -(auVar1[5] == auVar15[5]);
      auVar17[6] = -(auVar1[6] == auVar15[6]);
      auVar17[7] = -(auVar1[7] == auVar15[7]);
      auVar17[8] = -(auVar1[8] == auVar15[0]);
      auVar17[9] = -(auVar1[9] == auVar15[1]);
      auVar17[10] = -(auVar1[10] == auVar15[2]);
      auVar17[0xb] = -(auVar1[0xb] == auVar15[3]);
      auVar17[0xc] = -(auVar1[0xc] == auVar15[4]);
      auVar17[0xd] = -(auVar1[0xd] == auVar15[5]);
      auVar17[0xe] = -(auVar1[0xe] == auVar15[6]);
      auVar17[0xf] = -(auVar1[0xf] == auVar15[7]);
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
        uVar6 = 0;
        for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar13 = (uVar6 + uVar8 & *(ulonglong *)(uStack_b0 + 0x1b8)) * -0xd8;
        if (pbStack_50 == *(byte **)(lVar3 + -0xd8 + lVar13)) {
          if ((*(byte *)(lVar3 + lVar13 + -6) & 0x30) == 0) {
            return;
          }
          if (cVar2 != '\0') {
            plVar4 = (longlong *)param_1[2];
            *(undefined4 *)plVar4[2] = *(undefined4 *)((longlong)plVar4 + 0x1c);
            *(undefined1 *)(*plVar4 + 0x419) = 1;
            plVar4 = (longlong *)param_1[3];
            *(undefined4 *)plVar4[2] = *(undefined4 *)((longlong)plVar4 + 0x1c);
            lVar3 = *plVar4;
            lVar10 = *(longlong *)(lVar3 + 0x30);
            uVar9 = *(undefined8 *)(lVar3 + 0x40);
            if (lVar10 == *(longlong *)(lVar3 + 0x20)) {
              pdb_142d7e8a0(lVar3 + 0x20);
            }
            *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar10 * 8) = uVar9;
            *(longlong *)(lVar3 + 0x30) = lVar10 + 1;
            *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
            puVar5 = (undefined8 *)param_1[4];
            *(undefined4 *)puVar5[2] = *(undefined4 *)((longlong)puVar5 + 0x1c);
            *(undefined4 *)*puVar5 = 2;
            return;
          }
          goto LAB_14119aea5;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
      }
      auVar16[0] = -(auVar1[0] == -1);
      auVar16[1] = -(auVar1[1] == -1);
      auVar16[2] = -(auVar1[2] == -1);
      auVar16[3] = -(auVar1[3] == -1);
      auVar16[4] = -(auVar1[4] == -1);
      auVar16[5] = -(auVar1[5] == -1);
      auVar16[6] = -(auVar1[6] == -1);
      auVar16[7] = -(auVar1[7] == -1);
      auVar16[8] = -(auVar1[8] == -1);
      auVar16[9] = -(auVar1[9] == -1);
      auVar16[10] = -(auVar1[10] == -1);
      auVar16[0xb] = -(auVar1[0xb] == -1);
      auVar16[0xc] = -(auVar1[0xc] == -1);
      auVar16[0xd] = -(auVar1[0xd] == -1);
      auVar16[0xe] = -(auVar1[0xe] == -1);
      auVar16[0xf] = -(auVar1[0xf] == -1);
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
LAB_14119aea5:
  **(longlong **)param_1[5] = **(longlong **)param_1[5] + 1;
  return;
}

