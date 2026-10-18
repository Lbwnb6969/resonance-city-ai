// VA 0x1403051b0, PDB extent 642 bytes
// tiny_glade::gui::gui_tod::impl$5::tod_circle<u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod::impl$5::tod_circle<u64>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod.rs
   Extent: 642 */

undefined8 pdb_1403051b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong *plStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_68;
  undefined4 uStack_60;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  
  uStack_68 = param_3;
  plStack_b0 = (longlong *)pdb_140315970(&uStack_68);
  lStack_a8 = _DAT_142f3b460;
  uStack_a0 = _UNK_142f3b468;
  lStack_a8 = pdb_1400affa0(&plStack_b0);
  plStack_b0 = *(longlong **)(param_2 + 8);
  uVar6 = pdb_1400b0130(&plStack_b0);
  pdb_14072caa0(&plStack_b0,param_2,uVar6);
  plVar5 = plStack_b0;
  if (plStack_b0[0x39] != 0) {
    uVar7 = pdb_1400af0a0(plStack_b0 + 0x3a,&lStack_a8);
    param_2 = plVar5[0x36];
    bVar14 = (byte)(uVar7 >> 0x39);
    auVar15 = ZEXT216(CONCAT11(bVar14,bVar14));
    auVar15 = pshuflw(auVar15,auVar15,0);
    lVar10 = 0;
    while( true ) {
      uVar7 = uVar7 & plVar5[0x37];
      pcVar1 = (char *)(param_2 + uVar7);
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
        uVar3 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar13 = (uVar3 + uVar7 & plVar5[0x37]) * -0xd8;
        if (lStack_a8 == *(longlong *)(param_2 + -0xd8 + lVar13)) {
          param_2 = param_2 + lVar13;
          if (*(longlong *)(param_2 + -0x38) == 0) goto LAB_140305308;
          puVar9 = *(undefined **)(param_2 + -0x30);
          goto LAB_140305386;
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
      uVar7 = uVar7 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142f3b590,0xb,&UNK_142f3b640);
LAB_140305308:
  plStack_c8 = (longlong *)plVar5[0x4e];
  LOCK();
  lVar10 = *plStack_c8;
  *plStack_c8 = *plStack_c8 + 1;
  UNLOCK();
  if (*plStack_c8 == 0 || SCARRY8(lVar10,1) != *plStack_c8 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  uStack_68 = 0;
  uStack_60 = uStack_60 & 0xffffff00;
  LOCK();
  *plStack_c8 = *plStack_c8 + -1;
  UNLOCK();
  if (*plStack_c8 == 0) {
    pdb_140cb5640(&plStack_c8);
  }
  pdb_14007ee60();
  lVar10 = 4;
  pbVar8 = pub_1406abab0(0xc,4);
  if (pbVar8 != (byte *)0x0) {
    *(uint *)(pbVar8 + 8) = uStack_60;
    *(undefined8 *)pbVar8 = uStack_68;
    *(byte **)(param_2 + -0x38) = pbVar8;
    puVar9 = &UNK_142f3b898;
    *(undefined **)(param_2 + -0x30) = &UNK_142f3b898;
LAB_140305386:
    uVar6 = (**(code **)(puVar9 + 0x28))();
    (**(code **)(lVar10 + 0x18))(&uStack_68,uVar6);
    auVar15[0] = -((char)uStack_68 == DAT_142f3b290);
    auVar15[1] = -(uStack_68._1_1_ == UNK_142f3b291);
    auVar15[2] = -(uStack_68._2_1_ == UNK_142f3b292);
    auVar15[3] = -(uStack_68._3_1_ == UNK_142f3b293);
    auVar15[4] = -(uStack_68._4_1_ == UNK_142f3b294);
    auVar15[5] = -(uStack_68._5_1_ == UNK_142f3b295);
    auVar15[6] = -(uStack_68._6_1_ == UNK_142f3b296);
    auVar15[7] = -(uStack_68._7_1_ == UNK_142f3b297);
    auVar15[8] = -((char)uStack_60 == UNK_142f3b298);
    auVar15[9] = -(uStack_60._1_1_ == UNK_142f3b299);
    auVar15[10] = -(uStack_60._2_1_ == UNK_142f3b29a);
    auVar15[0xb] = -(uStack_60._3_1_ == UNK_142f3b29b);
    auVar15[0xc] = -(cStack_5c == UNK_142f3b29c);
    auVar15[0xd] = -(cStack_5b == UNK_142f3b29d);
    auVar15[0xe] = -(cStack_5a == UNK_142f3b29e);
    auVar15[0xf] = -(cStack_59 == UNK_142f3b29f);
    if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uStack_b8 = uStack_a0;
      plStack_c8 = plStack_b0;
      lStack_c0 = lStack_a8;
      pdb_1407373e0(&plStack_b0);
      pdb_140737590(&uStack_68,&plStack_b0);
      pdb_14072cf30(param_1,&plStack_c8,&uStack_68);
      return param_1;
    }
    pdb_142dc8110(&UNK_142f3b620,8,&UNK_142f3b658);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0xc);
}

