// VA 0x141172910, PDB extent 347 bytes
// toolbar::mei::core::NodeContext::content<toolbar::mei::widgets::tweaker::TweakerContent>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::content<toolbar::mei::widgets::tweaker::TweakerContent>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 347 */

undefined8 pdb_141172910(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
    uVar6 = pdb_1400af0a0(lVar2 + 0x1d0,param_1 + 1);
    lVar8 = *(longlong *)(lVar2 + 0x1b0);
    bVar13 = (byte)(uVar6 >> 0x39);
    auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar14 = pshuflw(auVar14,auVar14,0);
    lVar9 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar2 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(lVar8 + uVar6);
      auVar16[0] = -(auVar1[0] == auVar14[0]);
      auVar16[1] = -(auVar1[1] == auVar14[1]);
      auVar16[2] = -(auVar1[2] == auVar14[2]);
      auVar16[3] = -(auVar1[3] == auVar14[3]);
      auVar16[4] = -(auVar1[4] == auVar14[4]);
      auVar16[5] = -(auVar1[5] == auVar14[5]);
      auVar16[6] = -(auVar1[6] == auVar14[6]);
      auVar16[7] = -(auVar1[7] == auVar14[7]);
      auVar16[8] = -(auVar1[8] == auVar14[0]);
      auVar16[9] = -(auVar1[9] == auVar14[1]);
      auVar16[10] = -(auVar1[10] == auVar14[2]);
      auVar16[0xb] = -(auVar1[0xb] == auVar14[3]);
      auVar16[0xc] = -(auVar1[0xc] == auVar14[4]);
      auVar16[0xd] = -(auVar1[0xd] == auVar14[5]);
      auVar16[0xe] = -(auVar1[0xe] == auVar14[6]);
      auVar16[0xf] = -(auVar1[0xf] == auVar14[7]);
      uVar11 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar12 = (uVar4 + uVar6 & *(ulonglong *)(lVar2 + 0x1b8)) * -0xd8;
        if (param_1[1] == *(longlong *)(lVar8 + -0xd8 + lVar12)) {
          lVar8 = lVar8 + lVar12;
          if (*(longlong *)(lVar8 + -0x38) == 0) goto LAB_141172a3a;
          uVar7 = (**(code **)(*(longlong *)(lVar8 + -0x30) + 0x20))();
          (**(code **)(lVar8 + 0x18))(&cStack_28,uVar7);
          auVar14[0] = -(cStack_28 == DAT_142f3b320);
          auVar14[1] = -(cStack_27 == UNK_142f3b321);
          auVar14[2] = -(cStack_26 == UNK_142f3b322);
          auVar14[3] = -(cStack_25 == UNK_142f3b323);
          auVar14[4] = -(cStack_24 == UNK_142f3b324);
          auVar14[5] = -(cStack_23 == UNK_142f3b325);
          auVar14[6] = -(cStack_22 == UNK_142f3b326);
          auVar14[7] = -(cStack_21 == UNK_142f3b327);
          auVar14[8] = -(cStack_20 == UNK_142f3b328);
          auVar14[9] = -(cStack_1f == UNK_142f3b329);
          auVar14[10] = -(cStack_1e == UNK_142f3b32a);
          auVar14[0xb] = -(cStack_1d == UNK_142f3b32b);
          auVar14[0xc] = -(cStack_1c == UNK_142f3b32c);
          auVar14[0xd] = -(cStack_1b == UNK_142f3b32d);
          auVar14[0xe] = -(cStack_1a == UNK_142f3b32e);
          auVar14[0xf] = -(cStack_19 == UNK_142f3b32f);
          if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
            return uVar7;
          }
          goto LAB_141172a52;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar15[0] = -(auVar1[0] == -1);
      auVar15[1] = -(auVar1[1] == -1);
      auVar15[2] = -(auVar1[2] == -1);
      auVar15[3] = -(auVar1[3] == -1);
      auVar15[4] = -(auVar1[4] == -1);
      auVar15[5] = -(auVar1[5] == -1);
      auVar15[6] = -(auVar1[6] == -1);
      auVar15[7] = -(auVar1[7] == -1);
      auVar15[8] = -(auVar1[8] == -1);
      auVar15[9] = -(auVar1[9] == -1);
      auVar15[10] = -(auVar1[10] == -1);
      auVar15[0xb] = -(auVar1[0xb] == -1);
      auVar15[0xc] = -(auVar1[0xc] == -1);
      auVar15[0xd] = -(auVar1[0xd] == -1);
      auVar15[0xe] = -(auVar1[0xe] == -1);
      auVar15[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar6 = uVar6 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c458);
LAB_141172a3a:
  pdb_142dc8110(&UNK_14329c470,0x4b,&UNK_14329c4c0);
LAB_141172a52:
  pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c4e0);
  pcVar3 = (code *)swi(3);
  uVar7 = (*pcVar3)();
  return uVar7;
}

