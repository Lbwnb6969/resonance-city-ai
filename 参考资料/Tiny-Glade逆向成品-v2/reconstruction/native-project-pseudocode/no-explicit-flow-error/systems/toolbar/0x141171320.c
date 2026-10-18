// VA 0x141171320, PDB extent 1078 bytes
// toolbar::mei::core::NodeContext::with<toolbar::menu::load::ui::closure$10::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::with<toolbar::menu::load::ui::closure$10::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 1078 */

undefined8 *
pdb_141171320(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,ulonglong *param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte **ppbVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong in_R11;
  ulonglong unaff_R12;
  byte *unaff_R13;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lStack_d0;
  longlong alStack_c8 [2];
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte **ppbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte **ppbStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  byte **ppbStack_68;
  code *pcStack_60;
  byte ***pppbStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar2 = *param_4;
  pdb_1407339e0(&ppbStack_68,param_2,&UNK_14329cd9f,3);
  lVar8 = pdb_14116dd60(&ppbStack_68);
  ppbVar7 = ppbStack_68;
  *(undefined4 *)(lVar8 + 600) = 0x7b5a51a0;
  ppbStack_a8 = ppbStack_68;
  pbStack_a0 = (byte *)pcStack_60;
  uStack_98 = pppbStack_58;
  if (ppbStack_68[0x39] != (byte *)0x0) {
    uVar9 = pdb_1400af0a0(ppbStack_68 + 0x3a,&pbStack_a0);
    pbVar3 = ppbVar7[0x36];
    pbVar4 = ppbVar7[0x37];
    bVar15 = (byte)(uVar9 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar8 = 0;
    while( true ) {
      uVar9 = uVar9 & (ulonglong)pbVar4;
      auVar20 = *(undefined1 (*) [16])(pbVar3 + uVar9);
      auVar19[0] = -(auVar20[0] == auVar16[0]);
      auVar19[1] = -(auVar20[1] == auVar16[1]);
      auVar19[2] = -(auVar20[2] == auVar16[2]);
      auVar19[3] = -(auVar20[3] == auVar16[3]);
      auVar19[4] = -(auVar20[4] == auVar16[4]);
      auVar19[5] = -(auVar20[5] == auVar16[5]);
      auVar19[6] = -(auVar20[6] == auVar16[6]);
      auVar19[7] = -(auVar20[7] == auVar16[7]);
      auVar19[8] = -(auVar20[8] == auVar16[0]);
      auVar19[9] = -(auVar20[9] == auVar16[1]);
      auVar19[10] = -(auVar20[10] == auVar16[2]);
      auVar19[0xb] = -(auVar20[0xb] == auVar16[3]);
      auVar19[0xc] = -(auVar20[0xc] == auVar16[4]);
      auVar19[0xd] = -(auVar20[0xd] == auVar16[5]);
      auVar19[0xe] = -(auVar20[0xe] == auVar16[6]);
      auVar19[0xf] = -(auVar20[0xf] == auVar16[7]);
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
        uVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        in_R11 = (uVar5 + uVar9 & (ulonglong)pbVar4) * -0xd8;
        if (pbStack_a0 == *(byte **)(pbVar3 + (in_R11 - 0xd8))) {
          unaff_R12 = *param_3;
          if ((pbVar3[in_R11 - 6] & 0x30) != 0) {
            if (unaff_R12 == 0) {
              unaff_R12 = 0;
            }
            else {
              unaff_R12 = unaff_R12 - 1;
              *param_3 = unaff_R12;
            }
          }
          unaff_R13 = (byte *)(unaff_R12 + 1);
          ppbStack_88 = (byte **)(uVar2 + 1);
          ppbStack_68 = &pbStack_b8;
          pcStack_60 = pdb_140f72a40;
          pppbStack_58 = &ppbStack_88;
          pcStack_50 = pdb_140f72a40;
          pbStack_b8 = unaff_R13;
          pdb_140f60760(&ppbStack_a8,&UNK_14329cda2,&ppbStack_68);
          uVar11 = uStack_98;
          pbStack_70 = pbStack_a0;
          pbStack_b8 = pbStack_a0;
          uStack_b0 = uStack_98;
          ppbStack_68 = (byte **)pdb_140bbbcb0(&pbStack_b8);
          pcStack_60 = (code *)_DAT_14329c260;
          pppbStack_58 = (byte ***)_UNK_14329c268;
          pcStack_60 = (code *)pdb_1400affa0(&ppbStack_68);
          ppbStack_68 = (byte **)param_2[1];
          uVar10 = pdb_1400b0130(&ppbStack_68);
          pdb_14072caa0(&ppbStack_68,param_2,uVar10);
          uVar10 = pdb_14116ee90(&ppbStack_68,0);
          pdb_14119b6b0(uVar10,pbStack_70,uVar11);
          uStack_78 = pppbStack_58;
          ppbStack_88 = ppbStack_68;
          pbStack_80 = (byte *)pcStack_60;
          lVar8 = pdb_14116e180(&ppbStack_88);
          *(undefined4 *)(lVar8 + 600) = 0x7b5a51a0;
          pppbStack_58 = (byte ***)uStack_78;
          ppbStack_68 = ppbStack_88;
          pcStack_60 = (code *)pbStack_80;
          uVar11 = pdb_14116e180(&ppbStack_68);
          pdb_14119b2b0(uVar11);
          uStack_78 = pppbStack_58;
          ppbStack_88 = ppbStack_68;
          pbStack_80 = (byte *)pcStack_60;
          uVar11 = pdb_14116e180(&ppbStack_88);
          pdb_140cb5c70(uVar11,700);
          if (ppbStack_a8 != (byte **)0x0) {
            pub_1406abac0(pbStack_70,(ulonglong)ppbStack_a8,1);
          }
          pdb_1407339e0(&lStack_d0,param_2,&UNK_14329cda7,3);
          lVar8 = pdb_14116dd60(&lStack_d0);
          *(undefined4 *)(lVar8 + 600) = 0x7b5a51a0;
          if (*(longlong *)(lStack_d0 + 0x1c8) == 0) goto LAB_1411716ab;
          uVar9 = pdb_1400af0a0(lStack_d0 + 0x1d0,alStack_c8);
          puVar12 = *(undefined **)(lStack_d0 + 0x1b0);
          bVar15 = (byte)(uVar9 >> 0x39);
          auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
          auVar16 = pshuflw(auVar16,auVar16,0);
          lVar8 = 0;
          goto LAB_141171640;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
        in_R11 = (ulonglong)uVar13;
      }
      auVar17[0] = -(auVar20[0] == -1);
      auVar17[1] = -(auVar20[1] == -1);
      auVar17[2] = -(auVar20[2] == -1);
      auVar17[3] = -(auVar20[3] == -1);
      auVar17[4] = -(auVar20[4] == -1);
      auVar17[5] = -(auVar20[5] == -1);
      auVar17[6] = -(auVar20[6] == -1);
      auVar17[7] = -(auVar20[7] == -1);
      auVar17[8] = -(auVar20[8] == -1);
      auVar17[9] = -(auVar20[9] == -1);
      auVar17[10] = -(auVar20[10] == -1);
      auVar17[0xb] = -(auVar20[0xb] == -1);
      auVar17[0xc] = -(auVar20[0xc] == -1);
      auVar17[0xd] = -(auVar20[0xd] == -1);
      auVar17[0xe] = -(auVar20[0xe] == -1);
      auVar17[0xf] = -(auVar20[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar9 = uVar9 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
LAB_1411716ab:
  puVar12 = &UNK_142fa60f8;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1411716c3:
  if (unaff_R12 < uVar2 && (puVar12[in_R11 - 6] & 0x30) != 0) {
    *param_3 = (ulonglong)unaff_R13;
  }
  param_1[2] = param_2[2];
  uVar11 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar11;
  return param_1;
LAB_141171640:
  uVar9 = uVar9 & *(ulonglong *)(lStack_d0 + 0x1b8);
  pcVar1 = puVar12 + uVar9;
  auVar20[0] = -(*pcVar1 == auVar16[0]);
  auVar20[1] = -(pcVar1[1] == auVar16[1]);
  auVar20[2] = -(pcVar1[2] == auVar16[2]);
  auVar20[3] = -(pcVar1[3] == auVar16[3]);
  auVar20[4] = -(pcVar1[4] == auVar16[4]);
  auVar20[5] = -(pcVar1[5] == auVar16[5]);
  auVar20[6] = -(pcVar1[6] == auVar16[6]);
  auVar20[7] = -(pcVar1[7] == auVar16[7]);
  auVar20[8] = -(pcVar1[8] == auVar16[0]);
  auVar20[9] = -(pcVar1[9] == auVar16[1]);
  auVar20[10] = -(pcVar1[10] == auVar16[2]);
  auVar20[0xb] = -(pcVar1[0xb] == auVar16[3]);
  auVar20[0xc] = -(pcVar1[0xc] == auVar16[4]);
  auVar20[0xd] = -(pcVar1[0xd] == auVar16[5]);
  auVar20[0xe] = -(pcVar1[0xe] == auVar16[6]);
  auVar20[0xf] = -(pcVar1[0xf] == auVar16[7]);
  uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    in_R11 = (uVar5 + uVar9 & *(ulonglong *)(lStack_d0 + 0x1b8)) * -0xd8;
    if (alStack_c8[0] == *(longlong *)(puVar12 + (in_R11 - 0xd8))) goto LAB_1411716c3;
    uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
    in_R11 = (ulonglong)uVar13;
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
                  (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') goto LAB_1411716ab;
  uVar9 = uVar9 + lVar8 + 0x10;
  lVar8 = lVar8 + 0x10;
  goto LAB_141171640;
}

