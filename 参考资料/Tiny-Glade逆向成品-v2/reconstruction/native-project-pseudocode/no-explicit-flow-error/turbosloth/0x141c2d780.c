// VA 0x141c2d780, PDB extent 1111 bytes
// turbosloth::store::SourceFileSlot::read
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::SourceFileSlot::read
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1111 */

void pdb_141c2d780(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong in_R10;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  ulonglong uStack_f0;
  longlong *plStack_e8;
  ulonglong uStack_e0;
  longlong *plStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  ulonglong uStack_80;
  longlong *plStack_78;
  ulonglong uStack_70;
  ulonglong uStack_60;
  ulonglong *puStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  if (uVar3 < (uVar2 < 3)) {
    plVar9 = (longlong *)param_2[0xc];
    if (plVar9 != (longlong *)0x0) {
      param_4 = param_2[0xd];
      LOCK();
      lVar1 = *plVar9;
      *plVar9 = *plVar9 + 1;
      UNLOCK();
      if (*plVar9 == 0 || SCARRY8(lVar1,1) != *plVar9 < 0) goto LAB_141c2d895;
    }
    uVar8 = param_2[10];
    plStack_50 = plVar9;
    uStack_148 = plVar9;
    uStack_140 = param_4;
    if ((longlong)uVar8 < 0) {
      uVar10 = 0;
    }
    else {
      if (uVar8 == 0) {
        pbVar6 = (byte *)0x1;
        puStack_58 = param_2;
LAB_141c2d9bd:
        uVar5 = param_2[0xb];
        if (uVar2 == 2 && uVar3 == 0) {
          uVar7 = 0;
        }
        else {
          puStack_58 = (ulonglong *)param_2[7];
          uVar7 = param_2[6];
          uStack_168 = param_2[2];
          uStack_160 = param_2[3];
          uStack_158 = param_2[4];
          uStack_150 = param_2[5];
        }
        param_1[8] = uVar8;
        param_1[9] = (ulonglong)pbVar6;
        param_1[10] = uVar8;
        *(char *)(param_1 + 0xb) = (char)uVar5;
        param_1[1] = uVar3;
        *param_1 = uVar2;
        param_1[2] = uStack_168;
        param_1[3] = uStack_160;
        param_1[4] = uStack_158;
        param_1[5] = uStack_150;
        param_1[7] = (ulonglong)puStack_58;
        param_1[6] = uVar7;
        param_1[0xc] = (ulonglong)plVar9;
        param_1[0xd] = param_4;
        return;
      }
      puStack_58 = (ulonglong *)param_2[9];
      uStack_60 = param_4;
      pdb_14007ee60();
      uVar10 = 1;
      pbVar6 = pub_1406abab0(uVar8,1);
      if (pbVar6 != (byte *)0x0) {
        pub_142e32760(pbVar6,puStack_58,uVar8);
        plVar9 = plStack_50;
        param_4 = uStack_60;
        goto LAB_141c2d9bd;
      }
    }
    pdb_142dc7e2a(uVar10,uVar8);
  }
  else {
    pdb_142571fc0(&uStack_148,param_3,param_4);
    uVar2 = uStack_140;
    plVar9 = uStack_148;
    auVar11[0] = -((char)uStack_148 == DAT_142f5c7c0);
    auVar11[1] = -(uStack_148._1_1_ == UNK_142f5c7c1);
    auVar11[2] = -(uStack_148._2_1_ == UNK_142f5c7c2);
    auVar11[3] = -(uStack_148._3_1_ == UNK_142f5c7c3);
    auVar11[4] = -(uStack_148._4_1_ == UNK_142f5c7c4);
    auVar11[5] = -(uStack_148._5_1_ == UNK_142f5c7c5);
    auVar11[6] = -(uStack_148._6_1_ == UNK_142f5c7c6);
    auVar11[7] = -(uStack_148._7_1_ == UNK_142f5c7c7);
    auVar11[8] = -((char)uStack_140 == UNK_142f5c7c8);
    auVar11[9] = -(uStack_140._1_1_ == UNK_142f5c7c9);
    auVar11[10] = -(uStack_140._2_1_ == UNK_142f5c7ca);
    auVar11[0xb] = -(uStack_140._3_1_ == UNK_142f5c7cb);
    auVar11[0xc] = -(uStack_140._4_1_ == UNK_142f5c7cc);
    auVar11[0xd] = -(uStack_140._5_1_ == UNK_142f5c7cd);
    auVar11[0xe] = -(uStack_140._6_1_ == UNK_142f5c7ce);
    auVar11[0xf] = -(uStack_140._7_1_ == UNK_142f5c7cf);
    if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf
                ) == 0xffff) {
      param_1[2] = uStack_138;
      param_1[1] = 0;
      *param_1 = 3;
      return;
    }
    uStack_70 = uStack_e0;
    uStack_80 = uStack_f0;
    plStack_78 = plStack_e8;
    uStack_90 = uStack_100;
    uStack_8c = uStack_fc;
    uStack_88 = uStack_f8;
    iStack_84 = iStack_f4;
    uStack_a0 = uStack_110;
    uStack_9c = uStack_10c;
    uStack_98 = uStack_108;
    uStack_94 = uStack_104;
    uStack_b0 = uStack_120;
    uStack_ac = uStack_11c;
    uStack_a8 = uStack_118;
    uStack_a4 = uStack_114;
    uStack_c0 = uStack_130;
    uStack_b8 = uStack_128;
    plStack_d8 = uStack_148;
    uStack_d0 = uStack_140;
    uStack_c8 = uStack_138;
    if (plStack_e8 != (longlong *)0x0) {
      LOCK();
      lVar1 = *plStack_e8;
      *plStack_e8 = *plStack_e8 + 1;
      UNLOCK();
      in_R10 = uStack_e0;
      if (*plStack_e8 == 0 || SCARRY8(lVar1,1) != *plStack_e8 < 0) goto LAB_141c2d895;
    }
    uStack_148 = plStack_e8;
    uVar3 = CONCAT44(iStack_f4,uStack_f8);
    uStack_140 = in_R10;
    if (iStack_f4 < 0) {
      plStack_50 = plStack_e8;
      uVar10 = 0;
    }
    else {
      if (uVar3 == 0) {
        pbVar6 = (byte *)0x1;
        puStack_58 = param_3;
        plStack_50 = plStack_e8;
LAB_141c2da2a:
        if (plVar9 == (longlong *)0x2 && uVar2 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = CONCAT44(uStack_a4,uStack_a8);
          puStack_58 = (ulonglong *)CONCAT44(uStack_9c,uStack_a0);
          uStack_170 = CONCAT44(uStack_ac,uStack_b0);
          uStack_188 = uStack_c8;
          uStack_180 = uStack_c0;
          uStack_178 = uStack_b8;
        }
        *param_2 = (ulonglong)plVar9;
        param_2[1] = uVar2;
        param_2[2] = uStack_188;
        param_2[3] = uStack_180;
        param_2[4] = uStack_178;
        param_2[5] = uStack_170;
        param_2[7] = (ulonglong)puStack_58;
        param_2[6] = uVar8;
        param_2[8] = uVar3;
        param_2[9] = (ulonglong)pbVar6;
        param_2[10] = uVar3;
        *(undefined1 *)(param_2 + 0xb) = (undefined1)uStack_80;
        param_2[0xc] = (ulonglong)plStack_50;
        param_2[0xd] = in_R10;
        param_1[0xc] = (ulonglong)plStack_78;
        param_1[0xd] = uStack_70;
        param_1[10] = CONCAT44(iStack_84,uStack_88);
        param_1[0xb] = uStack_80;
        param_1[8] = CONCAT44(uStack_94,uStack_98);
        param_1[9] = CONCAT44(uStack_8c,uStack_90);
        param_1[6] = CONCAT44(uStack_a4,uStack_a8);
        param_1[7] = CONCAT44(uStack_9c,uStack_a0);
        param_1[4] = uStack_b8;
        param_1[5] = CONCAT44(uStack_ac,uStack_b0);
        param_1[2] = uStack_c8;
        param_1[3] = uStack_c0;
        *param_1 = (ulonglong)plStack_d8;
        param_1[1] = uStack_d0;
        return;
      }
      plStack_50 = plStack_e8;
      puStack_58 = (ulonglong *)CONCAT44(uStack_fc,uStack_100);
      uStack_60 = in_R10;
      pdb_14007ee60();
      uVar10 = 1;
      pbVar6 = pub_1406abab0(uVar3,1);
      if (pbVar6 != (byte *)0x0) {
        pub_142e32760(pbVar6,puStack_58,uVar3);
        in_R10 = uStack_60;
        goto LAB_141c2da2a;
      }
    }
    pdb_142dc7e2a(uVar10,uVar3);
  }
LAB_141c2d895:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

