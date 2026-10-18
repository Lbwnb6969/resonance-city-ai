// VA 0x14116ec20, PDB extent 620 bytes
// toolbar::mei::core::NodeContext::child_with_content<toolbar::menu::report_bug::ToggleIconContent,ref$<str$>,toolbar::menu::report_bug::impl$15::toggle_icon::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::core::NodeContext::child_with_content<toolbar::menu::report_bug::ToggleIconContent,ref$<str$>,toolbar::menu::report_bug::impl$15::toggle_icon::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/core.rs
   Extent: 620 */

longlong *
pdb_14116ec20(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
             undefined8 *param_5,undefined1 *param_6)

{
  char *pcVar1;
  undefined1 uVar2;
  longlong *plVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *unaff_RBX;
  uint uVar13;
  ushort uVar14;
  longlong lVar15;
  undefined8 *unaff_R14;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3;
  uStack_30 = param_4;
  lStack_50 = pdb_140bbbcb0(&uStack_38);
  lStack_48 = _DAT_14329c2f0;
  lStack_40 = _UNK_14329c2f8;
  lStack_48 = pdb_1400affa0(&lStack_50);
  lStack_50 = *(longlong *)(param_2 + 8);
  uVar7 = pdb_1400b0130(&lStack_50);
  pdb_14072caa0(&lStack_50,param_2,uVar7);
  lVar11 = lStack_50;
  if (*(longlong *)(lStack_50 + 0x1c8) != 0) {
    uVar8 = pdb_1400af0a0(lStack_50 + 0x1d0,&lStack_48);
    param_2 = *(longlong *)(lVar11 + 0x1b0);
    bVar16 = (byte)(uVar8 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar12 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(lVar11 + 0x1b8);
      pcVar1 = (char *)(param_2 + uVar8);
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
      while (unaff_RBX = param_6, unaff_R14 = param_5, uVar14 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar15 = (uVar5 + uVar8 & *(ulonglong *)(lVar11 + 0x1b8)) * -0xd8;
        if (lStack_48 == *(longlong *)(param_2 + -0xd8 + lVar15)) {
          param_2 = param_2 + lVar15;
          pbVar9 = *(byte **)(param_2 + -0x38);
          if (pbVar9 == (byte *)0x0) goto LAB_14116ed88;
          puVar10 = *(undefined **)(param_2 + -0x30);
          goto LAB_14116ee08;
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
      uVar8 = uVar8 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_14116ed88:
  plVar3 = *(longlong **)(lVar11 + 0x270);
  LOCK();
  lVar11 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 == 0 || SCARRY8(lVar11,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  uStack_38 = plVar3;
  if (*plVar3 == 0) {
    pdb_140cb5640(&uStack_38);
  }
  pdb_14007ee60();
  lVar12 = 8;
  pbVar9 = pub_1406abab0(0x30,8);
  if (pbVar9 != (byte *)0x0) {
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar9[8] = 4;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    pbVar9[0x10] = 0;
    pbVar9[0x11] = 0;
    pbVar9[0x12] = 0;
    pbVar9[0x13] = 0;
    pbVar9[0x14] = 0;
    pbVar9[0x15] = 0;
    pbVar9[0x16] = 0;
    pbVar9[0x17] = 0;
    pbVar9[0x18] = 1;
    pbVar9[0x19] = 0;
    pbVar9[0x1a] = 0;
    pbVar9[0x1b] = 0;
    pbVar9[0x1c] = 0;
    pbVar9[0x1d] = 0;
    pbVar9[0x1e] = 0;
    pbVar9[0x1f] = 0;
    pbVar9[0x20] = 0;
    pbVar9[0x21] = 0;
    pbVar9[0x22] = 0;
    pbVar9[0x23] = 0;
    pbVar9[0x24] = 0;
    pbVar9[0x25] = 0;
    pbVar9[0x26] = 0;
    pbVar9[0x27] = 0;
    pbVar9[0x28] = 0;
    *(byte **)(param_2 + -0x38) = pbVar9;
    puVar10 = &UNK_14329c808;
    *(undefined **)(param_2 + -0x30) = &UNK_14329c808;
LAB_14116ee08:
    lVar11 = (**(code **)(puVar10 + 0x28))(pbVar9);
    (**(code **)(lVar12 + 0x18))(&uStack_38,lVar11);
    auVar17[0] = -((char)uStack_38 == DAT_14329bc40);
    auVar17[1] = -(uStack_38._1_1_ == UNK_14329bc41);
    auVar17[2] = -(uStack_38._2_1_ == UNK_14329bc42);
    auVar17[3] = -(uStack_38._3_1_ == UNK_14329bc43);
    auVar17[4] = -(uStack_38._4_1_ == UNK_14329bc44);
    auVar17[5] = -(uStack_38._5_1_ == UNK_14329bc45);
    auVar17[6] = -(uStack_38._6_1_ == UNK_14329bc46);
    auVar17[7] = -(uStack_38._7_1_ == UNK_14329bc47);
    auVar17[8] = -((char)uStack_30 == UNK_14329bc48);
    auVar17[9] = -(uStack_30._1_1_ == UNK_14329bc49);
    auVar17[10] = -(uStack_30._2_1_ == UNK_14329bc4a);
    auVar17[0xb] = -(uStack_30._3_1_ == UNK_14329bc4b);
    auVar17[0xc] = -(uStack_30._4_1_ == UNK_14329bc4c);
    auVar17[0xd] = -(uStack_30._5_1_ == UNK_14329bc4d);
    auVar17[0xe] = -(uStack_30._6_1_ == UNK_14329bc4e);
    auVar17[0xf] = -(uStack_30._7_1_ == UNK_14329bc4f);
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar7 = unaff_R14[1];
      uVar2 = *unaff_RBX;
      *(undefined8 *)(lVar11 + 0x18) = *unaff_R14;
      *(undefined8 *)(lVar11 + 0x20) = uVar7;
      *(undefined1 *)(lVar11 + 0x28) = uVar2;
      param_1[2] = lStack_40;
      *param_1 = lStack_50;
      param_1[1] = lStack_48;
      return param_1;
    }
    pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x30);
}

