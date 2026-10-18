// VA 0x141173360, PDB extent 763 bytes
// toolbar::mei::widgets::impl$27::action_hint<u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$27::action_hint<u64>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 763 */

longlong * pdb_141173360(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  longlong *plStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_d0 = _DAT_14329c2a0;
  uStack_c8 = _UNK_14329c2a8;
  uStack_d8 = param_3;
  uStack_d0 = pdb_1400affa0(&uStack_d8);
  uStack_d8 = *(undefined8 *)(param_2 + 8);
  uVar5 = pdb_1400b0130(&uStack_d8);
  pdb_14072caa0(&lStack_58,param_2,uVar5);
  lVar9 = lStack_58;
  if (*(longlong *)(lStack_58 + 0x1c8) != 0) {
    uVar6 = pdb_1400af0a0(lStack_58 + 0x1d0,&lStack_50);
    param_2 = *(longlong *)(lVar9 + 0x1b0);
    bVar15 = (byte)(uVar6 >> 0x39);
    auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
    auVar16 = pshuflw(auVar16,auVar16,0);
    lVar11 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(lVar9 + 0x1b8);
      auVar1 = *(undefined1 (*) [16])(param_2 + uVar6);
      auVar18[0] = -(auVar1[0] == auVar16[0]);
      auVar18[1] = -(auVar1[1] == auVar16[1]);
      auVar18[2] = -(auVar1[2] == auVar16[2]);
      auVar18[3] = -(auVar1[3] == auVar16[3]);
      auVar18[4] = -(auVar1[4] == auVar16[4]);
      auVar18[5] = -(auVar1[5] == auVar16[5]);
      auVar18[6] = -(auVar1[6] == auVar16[6]);
      auVar18[7] = -(auVar1[7] == auVar16[7]);
      auVar18[8] = -(auVar1[8] == auVar16[0]);
      auVar18[9] = -(auVar1[9] == auVar16[1]);
      auVar18[10] = -(auVar1[10] == auVar16[2]);
      auVar18[0xb] = -(auVar1[0xb] == auVar16[3]);
      auVar18[0xc] = -(auVar1[0xc] == auVar16[4]);
      auVar18[0xd] = -(auVar1[0xd] == auVar16[5]);
      auVar18[0xe] = -(auVar1[0xe] == auVar16[6]);
      auVar18[0xf] = -(auVar1[0xf] == auVar16[7]);
      uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar12 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar14 = (uVar3 + uVar6 & *(ulonglong *)(lVar9 + 0x1b8)) * -0xd8;
        if (lStack_50 == *(longlong *)(param_2 + -0xd8 + lVar14)) {
          param_2 = param_2 + lVar14;
          pbVar7 = *(byte **)(param_2 + -0x38);
          if (pbVar7 == (byte *)0x0) goto LAB_1411734a8;
          puVar8 = *(undefined **)(param_2 + -0x30);
          goto LAB_14117356d;
        }
        uVar13 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar13);
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
      uVar6 = uVar6 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  lVar11 = 0xb;
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_1411734a8:
  uVar10 = (undefined4)lVar11;
  plStack_40 = *(longlong **)(lVar9 + 0x270);
  LOCK();
  lVar9 = *plStack_40;
  *plStack_40 = *plStack_40 + 1;
  UNLOCK();
  if (*plStack_40 == 0 || SCARRY8(lVar9,1) != *plStack_40 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  plStack_38 = plStack_40;
  uStack_70 = pdb_140f3c9d0();
  uStack_60 = 0;
  uStack_d8 = 0x8000000000000000;
  uStack_b8 = 0x8000000000000000;
  LOCK();
  *plStack_38 = *plStack_38 + -1;
  UNLOCK();
  uStack_68 = uVar10;
  if (*plStack_38 == 0) {
    pdb_140cb5640(&plStack_40);
  }
  pdb_14007ee60();
  lVar11 = 8;
  pbVar7 = pub_1406abab0(0x80,8);
  if (pbVar7 != (byte *)0x0) {
    *(ulonglong *)(pbVar7 + 0x70) = CONCAT44(uStack_64,uStack_68);
    *(ulonglong *)(pbVar7 + 0x78) = CONCAT71(uStack_5f,uStack_60);
    *(undefined8 *)(pbVar7 + 0x60) = uStack_78;
    *(undefined8 *)(pbVar7 + 0x68) = uStack_70;
    *(undefined8 *)(pbVar7 + 0x50) = uStack_88;
    *(undefined8 *)(pbVar7 + 0x58) = uStack_80;
    *(undefined8 *)(pbVar7 + 0x40) = uStack_98;
    *(undefined8 *)(pbVar7 + 0x48) = uStack_90;
    *(undefined8 *)(pbVar7 + 0x30) = uStack_a8;
    *(undefined8 *)(pbVar7 + 0x38) = uStack_a0;
    *(undefined8 *)(pbVar7 + 0x20) = uStack_b8;
    *(undefined8 *)(pbVar7 + 0x28) = uStack_b0;
    *(undefined8 *)(pbVar7 + 0x10) = uStack_c8;
    *(undefined8 *)(pbVar7 + 0x18) = uStack_c0;
    *(undefined8 *)pbVar7 = uStack_d8;
    *(undefined8 *)(pbVar7 + 8) = uStack_d0;
    *(byte **)(param_2 + -0x38) = pbVar7;
    puVar8 = &UNK_14329cb28;
    *(undefined **)(param_2 + -0x30) = &UNK_14329cb28;
LAB_14117356d:
    lVar9 = (**(code **)(puVar8 + 0x28))(pbVar7);
    (**(code **)(lVar11 + 0x18))(&uStack_d8,lVar9);
    auVar16[0] = -((char)uStack_d8 == DAT_14329bc80);
    auVar16[1] = -(uStack_d8._1_1_ == UNK_14329bc81);
    auVar16[2] = -(uStack_d8._2_1_ == UNK_14329bc82);
    auVar16[3] = -(uStack_d8._3_1_ == UNK_14329bc83);
    auVar16[4] = -(uStack_d8._4_1_ == UNK_14329bc84);
    auVar16[5] = -(uStack_d8._5_1_ == UNK_14329bc85);
    auVar16[6] = -(uStack_d8._6_1_ == UNK_14329bc86);
    auVar16[7] = -(uStack_d8._7_1_ == UNK_14329bc87);
    auVar16[8] = -((char)uStack_d0 == UNK_14329bc88);
    auVar16[9] = -(uStack_d0._1_1_ == UNK_14329bc89);
    auVar16[10] = -(uStack_d0._2_1_ == UNK_14329bc8a);
    auVar16[0xb] = -(uStack_d0._3_1_ == UNK_14329bc8b);
    auVar16[0xc] = -(uStack_d0._4_1_ == UNK_14329bc8c);
    auVar16[0xd] = -(uStack_d0._5_1_ == UNK_14329bc8d);
    auVar16[0xe] = -(uStack_d0._6_1_ == UNK_14329bc8e);
    auVar16[0xf] = -(uStack_d0._7_1_ == UNK_14329bc8f);
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf
                ) == 0xffff) {
      *(undefined1 *)(lVar9 + 0x78) = param_4;
      param_1[2] = lStack_48;
      *param_1 = lStack_58;
      param_1[1] = lStack_50;
      return param_1;
    }
    pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x80);
}

