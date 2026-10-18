// VA 0x1403054f0, PDB extent 347 bytes
// toolbar::mei::core::NodeContext::content_mut<toolbar::mei::widgets::FrameContent>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::content_mut<toolbar::mei::widgets::FrameContent>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 347 */

undefined8 pdb_1403054f0(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ushort uVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cStack_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x1c8) != 0) {
    uVar5 = pdb_1400af0a0(lVar2 + 0x1d0,param_1 + 1);
    lVar7 = *(longlong *)(lVar2 + 0x1b0);
    bVar12 = (byte)(uVar5 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar8 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(lVar7 + uVar5);
      auVar15[0] = -(auVar1[0] == auVar13[0]);
      auVar15[1] = -(auVar1[1] == auVar13[1]);
      auVar15[2] = -(auVar1[2] == auVar13[2]);
      auVar15[3] = -(auVar1[3] == auVar13[3]);
      auVar15[4] = -(auVar1[4] == auVar13[4]);
      auVar15[5] = -(auVar1[5] == auVar13[5]);
      auVar15[6] = -(auVar1[6] == auVar13[6]);
      auVar15[7] = -(auVar1[7] == auVar13[7]);
      auVar15[8] = -(auVar1[8] == auVar13[0]);
      auVar15[9] = -(auVar1[9] == auVar13[1]);
      auVar15[10] = -(auVar1[10] == auVar13[2]);
      auVar15[0xb] = -(auVar1[0xb] == auVar13[3]);
      auVar15[0xc] = -(auVar1[0xc] == auVar13[4]);
      auVar15[0xd] = -(auVar1[0xd] == auVar13[5]);
      auVar15[0xe] = -(auVar1[0xe] == auVar13[6]);
      auVar15[0xf] = -(auVar1[0xf] == auVar13[7]);
      uVar10 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar10;
      while (uVar10 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar11 = (uVar3 + uVar5 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar7 + -0xd8 + lVar11)) {
          lVar7 = lVar7 + lVar11;
          if (*(longlong *)(lVar7 + -0x38) == 0) goto LAB_140305632;
          uVar6 = (**(code **)(*(longlong *)(lVar7 + -0x30) + 0x28))();
          (**(code **)(lVar7 + 0x18))(&cStack_28,uVar6);
          auVar13[0] = -(cStack_28 == DAT_142f3b2a0);
          auVar13[1] = -(cStack_27 == UNK_142f3b2a1);
          auVar13[2] = -(cStack_26 == UNK_142f3b2a2);
          auVar13[3] = -(cStack_25 == UNK_142f3b2a3);
          auVar13[4] = -(cStack_24 == UNK_142f3b2a4);
          auVar13[5] = -(cStack_23 == UNK_142f3b2a5);
          auVar13[6] = -(cStack_22 == UNK_142f3b2a6);
          auVar13[7] = -(cStack_21 == UNK_142f3b2a7);
          auVar13[8] = -(cStack_20 == UNK_142f3b2a8);
          auVar13[9] = -(cStack_1f == UNK_142f3b2a9);
          auVar13[10] = -(cStack_1e == UNK_142f3b2aa);
          auVar13[0xb] = -(cStack_1d == UNK_142f3b2ab);
          auVar13[0xc] = -(cStack_1c == UNK_142f3b2ac);
          auVar13[0xd] = -(cStack_1b == UNK_142f3b2ad);
          auVar13[0xe] = -(cStack_1a == UNK_142f3b2ae);
          auVar13[0xf] = -(cStack_19 == UNK_142f3b2af);
          if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
            return uVar6;
          }
          goto LAB_14030561a;
        }
        uVar10 = (ushort)(uVar9 - 1) & (ushort)uVar9;
        uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar10);
      }
      auVar14[0] = -(auVar1[0] == -1);
      auVar14[1] = -(auVar1[1] == -1);
      auVar14[2] = -(auVar1[2] == -1);
      auVar14[3] = -(auVar1[3] == -1);
      auVar14[4] = -(auVar1[4] == -1);
      auVar14[5] = -(auVar1[5] == -1);
      auVar14[6] = -(auVar1[6] == -1);
      auVar14[7] = -(auVar1[7] == -1);
      auVar14[8] = -(auVar1[8] == -1);
      auVar14[9] = -(auVar1[9] == -1);
      auVar14[10] = -(auVar1[10] == -1);
      auVar14[0xb] = -(auVar1[0xb] == -1);
      auVar14[0xc] = -(auVar1[0xc] == -1);
      auVar14[0xd] = -(auVar1[0xd] == -1);
      auVar14[0xe] = -(auVar1[0xe] == -1);
      auVar14[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar5 = uVar5 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142f3b590,0xb,&UNK_142f3b640);
LAB_14030561a:
  pdb_142dc8110(&UNK_142f3b620,8,&UNK_142f3b658);
LAB_140305632:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f3b5b8,0x97,&UNK_142f3b710);
}

