// VA 0x1403070b0, PDB extent 783 bytes
// toolbar::mei::widgets::impl$53::pill_button<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$53::pill_button<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 783 */

undefined8
pdb_1403070b0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 unaff_RBX;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  undefined8 unaff_R14;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_f8 [24];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined1 *puVar14;
  
  uStack_38 = 0xfffffffffffffffe;
  lStack_d0 = param_3;
  lStack_c8 = param_4;
  uStack_88 = pdb_14072aeb0(&lStack_d0);
  uStack_80 = _DAT_142f3b4a0;
  uStack_78 = _UNK_142f3b4a8;
  uStack_80 = pdb_1400affa0(&uStack_88);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uVar7 = pdb_1400b0130(&uStack_88);
  pdb_14072caa0(&lStack_d0,param_2,uVar7);
  lVar11 = lStack_d0;
  if (*(longlong *)(lStack_d0 + 0x1c8) != 0) {
    uVar8 = pdb_1400af0a0(lStack_d0 + 0x1d0,&lStack_c8);
    param_2 = *(longlong *)(lVar11 + 0x1b0);
    bVar18 = (byte)(uVar8 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar13 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar11 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(param_2 + uVar8);
      auVar21[0] = -(auVar1[0] == auVar19[0]);
      auVar21[1] = -(auVar1[1] == auVar19[1]);
      auVar21[2] = -(auVar1[2] == auVar19[2]);
      auVar21[3] = -(auVar1[3] == auVar19[3]);
      auVar21[4] = -(auVar1[4] == auVar19[4]);
      auVar21[5] = -(auVar1[5] == auVar19[5]);
      auVar21[6] = -(auVar1[6] == auVar19[6]);
      auVar21[7] = -(auVar1[7] == auVar19[7]);
      auVar21[8] = -(auVar1[8] == auVar19[0]);
      auVar21[9] = -(auVar1[9] == auVar19[1]);
      auVar21[10] = -(auVar1[10] == auVar19[2]);
      auVar21[0xb] = -(auVar1[0xb] == auVar19[3]);
      auVar21[0xc] = -(auVar1[0xc] == auVar19[4]);
      auVar21[0xd] = -(auVar1[0xd] == auVar19[5]);
      auVar21[0xe] = -(auVar1[0xe] == auVar19[6]);
      auVar21[0xf] = -(auVar1[0xf] == auVar19[7]);
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
      while (unaff_RBX = param_6, unaff_R14 = param_5, uVar16 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar17 = (uVar4 + uVar8 & *(ulonglong *)(lVar11 + 0x1b8)) * -0xd8;
        if (lStack_c8 == *(longlong *)(param_2 + -0xd8 + lVar17)) {
          param_2 = param_2 + lVar17;
          if (*(longlong *)(param_2 + -0x38) == 0) goto LAB_140307218;
          puVar10 = *(undefined **)(param_2 + -0x30);
          goto LAB_140307290;
        }
        uVar16 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar16);
      }
      auVar20[0] = -(auVar1[0] == -1);
      auVar20[1] = -(auVar1[1] == -1);
      auVar20[2] = -(auVar1[2] == -1);
      auVar20[3] = -(auVar1[3] == -1);
      auVar20[4] = -(auVar1[4] == -1);
      auVar20[5] = -(auVar1[5] == -1);
      auVar20[6] = -(auVar1[6] == -1);
      auVar20[7] = -(auVar1[7] == -1);
      auVar20[8] = -(auVar1[8] == -1);
      auVar20[9] = -(auVar1[9] == -1);
      auVar20[10] = -(auVar1[10] == -1);
      auVar20[0xb] = -(auVar1[0xb] == -1);
      auVar20[0xc] = -(auVar1[0xc] == -1);
      auVar20[0xd] = -(auVar1[0xd] == -1);
      auVar20[0xe] = -(auVar1[0xe] == -1);
      auVar20[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar8 = uVar8 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_142f3b590,0xb,&UNK_142f3b640);
LAB_140307218:
  plVar2 = *(longlong **)(lVar11 + 0x270);
  LOCK();
  lVar11 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar11,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pdb_14072a5e0(&uStack_88);
  pdb_14007ee60();
  lVar13 = 8;
  pbVar9 = pub_1406abab0(0x48,8);
  if (pbVar9 != (byte *)0x0) {
    *(undefined8 *)(pbVar9 + 0x40) = uStack_48;
    *(undefined8 *)(pbVar9 + 0x30) = uStack_58;
    *(undefined8 *)(pbVar9 + 0x38) = uStack_50;
    *(undefined8 *)(pbVar9 + 0x20) = uStack_68;
    *(undefined8 *)(pbVar9 + 0x28) = uStack_60;
    *(undefined8 *)(pbVar9 + 0x10) = uStack_78;
    *(undefined8 *)(pbVar9 + 0x18) = uStack_70;
    *(longlong *)pbVar9 = uStack_88;
    *(longlong *)(pbVar9 + 8) = uStack_80;
    *(byte **)(param_2 + -0x38) = pbVar9;
    puVar10 = &UNK_142f3b9d8;
    *(undefined **)(param_2 + -0x30) = &UNK_142f3b9d8;
LAB_140307290:
    lVar11 = (**(code **)(puVar10 + 0x28))();
    (**(code **)(lVar13 + 0x18))(&uStack_88,lVar11);
    auVar19[0] = -((char)uStack_88 == DAT_142f3b300);
    auVar19[1] = -(uStack_88._1_1_ == UNK_142f3b301);
    auVar19[2] = -(uStack_88._2_1_ == UNK_142f3b302);
    auVar19[3] = -(uStack_88._3_1_ == UNK_142f3b303);
    auVar19[4] = -(uStack_88._4_1_ == UNK_142f3b304);
    auVar19[5] = -(uStack_88._5_1_ == UNK_142f3b305);
    auVar19[6] = -(uStack_88._6_1_ == UNK_142f3b306);
    auVar19[7] = -(uStack_88._7_1_ == UNK_142f3b307);
    auVar19[8] = -((char)uStack_80 == UNK_142f3b308);
    auVar19[9] = -(uStack_80._1_1_ == UNK_142f3b309);
    auVar19[10] = -(uStack_80._2_1_ == UNK_142f3b30a);
    auVar19[0xb] = -(uStack_80._3_1_ == UNK_142f3b30b);
    auVar19[0xc] = -(uStack_80._4_1_ == UNK_142f3b30c);
    auVar19[0xd] = -(uStack_80._5_1_ == UNK_142f3b30d);
    auVar19[0xe] = -(uStack_80._6_1_ == UNK_142f3b30e);
    auVar19[0xf] = -(uStack_80._7_1_ == UNK_142f3b30f);
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined8 *)(lVar11 + 0x30) = unaff_R14;
      *(undefined8 *)(lVar11 + 0x38) = unaff_RBX;
      uStack_78 = uStack_c0;
      uStack_88 = lStack_d0;
      uStack_80 = lStack_c8;
      puVar14 = auStack_f8;
      pdb_14072d060(puVar14,&uStack_88,1);
      pdb_1407373e0(&uStack_88);
      pdb_140737440(&lStack_d0,&uStack_88);
      pdb_1407374e0(&uStack_88,&lStack_d0);
      uStack_e0 = _DAT_142f3b310;
      uStack_d8 = _UNK_142f3b318;
      pdb_140737550(&lStack_d0,&uStack_88,&uStack_e0);
      pdb_14072cf30(&uStack_88,puVar14,&lStack_d0);
      uVar12 = SUB84(puVar14,0);
      uVar6 = pdb_1407361e0();
      pdb_1407338e0(param_1,&uStack_88,uVar6,uVar12);
      return param_1;
    }
    pdb_142dc8110(&UNK_142f3b620,8,&UNK_142f3b658);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

