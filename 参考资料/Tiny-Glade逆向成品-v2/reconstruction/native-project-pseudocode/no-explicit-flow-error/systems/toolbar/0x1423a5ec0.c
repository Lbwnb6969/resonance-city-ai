// VA 0x1423a5ec0, PDB extent 540 bytes
// toolbar::menu::splash::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/splash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::splash::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/splash.rs
   Extent: 540 */

void pdb_1423a5ec0(longlong *param_1,float *param_2,longlong *param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  byte bVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 uStack_68;
  float fStack_64;
  longlong *plStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = 0x43160000;
  fVar14 = *(float *)(*param_4 + 0x20) / *(float *)(*param_4 + 0x34);
  fVar16 = 0.0;
  if (0.0 <= fVar14) {
    fVar16 = fVar14;
  }
  fStack_64 = _DAT_142e36f28;
  if (fVar16 <= _DAT_142e36f28) {
    fStack_64 = fVar16;
  }
  fStack_64 = _DAT_142e36f28 - fStack_64;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1 = (longlong *)*param_1;
  plStack_48 = (longlong *)&UNK_1434e2750;
  uStack_40 = 5;
  uVar6 = pdb_140bbbcb0(&plStack_48);
  uVar6 = uVar6 ^ 0xb1695320004fb443;
  uVar8 = uVar6;
  lVar7 = pdb_14072c2d0(param_1);
  *(undefined1 *)(lVar7 + 0x5e) = 0;
  if ((uVar8 & 1) == 0) {
    lVar7 = param_1[2];
    if (lVar7 == *param_1) {
      pdb_142d7f080(param_1);
    }
    lVar9 = param_1[1];
    *(undefined4 *)(lVar9 + lVar7 * 0x38) = 0;
    *(ulonglong *)(lVar9 + 0x30 + lVar7 * 0x38) = uVar6;
    param_1[2] = lVar7 + 1;
  }
  uStack_50 = 0;
  plStack_60 = param_1;
  uStack_58 = uVar6;
  if (param_1[0x39] != 0) {
    uVar8 = pdb_1400af0a0(param_1 + 0x3a,&uStack_58);
    uVar5 = _UNK_1434e2748;
    uVar4 = _DAT_1434e2740;
    lVar7 = param_1[0x36];
    bVar13 = (byte)(uVar8 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar13,bVar13));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & param_1[0x37];
      auVar1 = *(undefined1 (*) [16])(lVar7 + uVar8);
      auVar18[0] = -(auVar1[0] == auVar15[0]);
      auVar18[1] = -(auVar1[1] == auVar15[1]);
      auVar18[2] = -(auVar1[2] == auVar15[2]);
      auVar18[3] = -(auVar1[3] == auVar15[3]);
      auVar18[4] = -(auVar1[4] == auVar15[4]);
      auVar18[5] = -(auVar1[5] == auVar15[5]);
      auVar18[6] = -(auVar1[6] == auVar15[6]);
      auVar18[7] = -(auVar1[7] == auVar15[7]);
      auVar18[8] = -(auVar1[8] == auVar15[0]);
      auVar18[9] = -(auVar1[9] == auVar15[1]);
      auVar18[10] = -(auVar1[10] == auVar15[2]);
      auVar18[0xb] = -(auVar1[0xb] == auVar15[3]);
      auVar18[0xc] = -(auVar1[0xc] == auVar15[4]);
      auVar18[0xd] = -(auVar1[0xd] == auVar15[5]);
      auVar18[0xe] = -(auVar1[0xe] == auVar15[6]);
      auVar18[0xf] = -(auVar1[0xf] == auVar15[7]);
      uVar11 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar12 = (uVar2 + uVar8 & param_1[0x37]) * -0xd8;
        if (uVar6 == *(ulonglong *)(lVar7 + -0xd8 + lVar12)) {
          lVar7 = lVar7 + lVar12;
          *(undefined8 *)(lVar7 + -0xb8) = _DAT_1434e2740;
          *(undefined8 *)(lVar7 + -0xb0) = uVar5;
          *(undefined8 *)(lVar7 + -0xa8) = uVar4;
          *(undefined8 *)(lVar7 + -0xa0) = uVar5;
          *(undefined8 *)(lVar7 + -0x98) = 0;
          *(undefined8 *)(lVar7 + -0x90) = 0;
          *(undefined8 *)(lVar7 + -0x88) = 0;
          *(undefined8 *)(lVar7 + -0x80) = 0;
          *(undefined8 *)(lVar7 + -0x7a) = 0;
          *(undefined2 *)(lVar7 + -0x72) = 0x303;
          uStack_38 = uStack_50;
          plStack_48 = plStack_60;
          uStack_40 = uStack_58;
          pdb_141171760(&plStack_60,&plStack_48,&fStack_64,&uStack_68);
          *param_2 = *(float *)(*param_3 + 0x28) + *param_2;
          return;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar17[0] = -(auVar1[0] == -1);
      auVar17[1] = -(auVar1[1] == -1);
      auVar17[2] = -(auVar1[2] == -1);
      auVar17[3] = -(auVar1[3] == -1);
      auVar17[4] = -(auVar1[4] == -1);
      auVar17[5] = -(auVar1[5] == -1);
      auVar17[6] = -(auVar1[6] == -1);
      auVar17[7] = -(auVar1[7] == -1);
      auVar17[8] = -(auVar1[8] == -1);
      auVar17[9] = -(auVar1[9] == -1);
      auVar17[10] = -(auVar1[10] == -1);
      auVar17[0xb] = -(auVar1[0xb] == -1);
      auVar17[0xc] = -(auVar1[0xc] == -1);
      auVar17[0xd] = -(auVar1[0xd] == -1);
      auVar17[0xe] = -(auVar1[0xe] == -1);
      auVar17[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b30);
}

