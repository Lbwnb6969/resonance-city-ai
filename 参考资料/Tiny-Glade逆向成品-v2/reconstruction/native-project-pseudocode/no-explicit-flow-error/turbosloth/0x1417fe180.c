// VA 0x1417fe180, PDB extent 3748 bytes
// turbosloth::store::DiskStore::store<clutter_pack_pipe::ClutterObjectList>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::store::DiskStore::store<clutter_pack_pipe::ClutterObjectList>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 3748 */

longlong pdb_1417fe180(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,byte *param_6,byte *param_7,char param_8,ulonglong *param_9
                      ,longlong *param_10,longlong *param_11)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  byte *pbStack_658;
  byte *pbStack_650;
  byte *pbStack_648;
  char cStack_3fb;
  undefined2 uStack_3fa;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  byte *pbStack_3e8;
  byte *pbStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  byte *pbStack_3a8;
  byte *pbStack_3a0;
  byte *pbStack_398;
  longlong lStack_390;
  longlong lStack_388;
  longlong lStack_380;
  longlong lStack_378;
  longlong lStack_370;
  longlong lStack_368;
  byte *pbStack_360;
  char cStack_358;
  char cStack_19b;
  undefined2 uStack_19a;
  byte *pbStack_198;
  byte *pbStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  byte *pbStack_178;
  byte *pbStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte *pbStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_80 = param_3;
  if (param_8 == '\0') {
    uStack_4a = 1;
    pbVar7 = param_6;
    uVar6 = pdb_142565cc0();
    if ((uVar6 & 1) != 0) {
      param_7 = pbVar7;
    }
    if (param_4 == 0) goto LAB_1417fe2e8;
LAB_1417fe1e8:
    uStack_4a = 1;
    pdb_1424e8440(&uStack_3f8,param_4);
    if (SBORROW8(0,(longlong)uStack_3f8)) {
      uStack_4a = 1;
      lVar2 = pdb_141235fd0(0x15,uStack_3f0,pbStack_3e8);
      if (*param_11 != 0) {
        pub_1406abac0((byte *)param_11[1],*param_11 << 4,0x10);
      }
      if (*param_10 != 0) {
        pub_1406abac0((byte *)param_10[1],*param_10 * 0x30,0x10);
      }
      pbVar7 = (byte *)param_9[1];
      uVar6 = param_9[2];
      if (uVar6 != 0) {
        pbVar4 = pbVar7 + 0x48;
        do {
          if (*(ulonglong *)(pbVar4 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
          }
          pbVar4 = pbVar4 + 0x60;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (*param_9 == 0) {
        return lVar2;
      }
      uVar6 = 0x10;
      pbVar4 = (byte *)(*param_9 * 0x60);
      goto LAB_1417fe9b1;
    }
    pbStack_58 = uStack_3f8;
    pbStack_68 = uStack_3f0;
    pbStack_a0 = pbStack_3e8;
    pbStack_70 = (byte *)pdb_141c2d770(uStack_3f0);
    pbVar7 = (byte *)0x0;
    pbStack_78 = pbStack_3e8;
  }
  else {
    if (param_4 != 0) goto LAB_1417fe1e8;
LAB_1417fe2e8:
    pbVar7 = (byte *)0x1;
    pbStack_58 = (byte *)0x8000000000000000;
  }
  if ((longlong)param_6 < 0) {
    uVar5 = 0;
LAB_1417fe306:
    uStack_4b = 1;
    pdb_142dc7e2a(uVar5,param_6);
LAB_1417feb59:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_6 == (byte *)0x0) {
    pbStack_60 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar5 = 1;
    pbVar4 = pub_1406abab0((ulonglong)param_6,1);
    if (pbVar4 == (byte *)0x0) goto LAB_1417fe306;
    pbStack_60 = pbVar4;
    pub_142e32760(pbVar4,param_5,param_6);
  }
  pdb_14007ee60();
  uStack_3b8 = pub_1406abab0(0x24,1);
  uVar5 = _UNK_14333e368;
  if (uStack_3b8 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x24);
    goto LAB_1417feb59;
  }
  *(undefined8 *)(uStack_3b8 + 0x10) = _DAT_14333e360;
  *(undefined8 *)(uStack_3b8 + 0x18) = uVar5;
  uVar5 = _UNK_14333e358;
  *(undefined8 *)uStack_3b8 = _DAT_14333e350;
  *(undefined8 *)(uStack_3b8 + 8) = uVar5;
  uStack_3b8[0x20] = 0x4c;
  uStack_3b8[0x21] = 0x69;
  uStack_3b8[0x22] = 0x73;
  uStack_3b8[0x23] = 0x74;
  pbStack_398 = (byte *)param_9[2];
  pbStack_3a8 = (byte *)*param_9;
  pbStack_3a0 = (byte *)param_9[1];
  lStack_390 = *param_10;
  lStack_388 = param_10[1];
  lStack_380 = param_10[2];
  lStack_378 = *param_11;
  lStack_370 = param_11[1];
  lStack_368 = param_11[2];
  uStack_3d8 = param_6;
  uStack_3d0 = pbStack_60;
  uStack_3c8 = param_6;
  cStack_358 = param_8;
  uStack_3c0 = (byte *)0x24;
  uStack_3b0 = (byte *)0x24;
  uStack_3f0 = (byte *)0x0;
  pbStack_3e8 = pbStack_70;
  pbStack_3e0 = pbStack_78;
  uStack_3f8 = pbVar7;
  pbStack_360 = param_7;
  pdb_140908420(&pbStack_658,&uStack_3f8);
  if (SBORROW8(0,(longlong)pbStack_658)) {
    lVar2 = pdb_14256b2d0(0x15);
    uStack_4b = 0;
    pdb_14098b650(&uStack_3f8);
  }
  else {
    pbStack_70 = pbStack_658;
    pbStack_60 = pbStack_650;
    pdb_14098b650(&uStack_3f8);
    if (SBORROW8(0,(longlong)pbStack_58)) {
LAB_1417fe556:
      pdb_14256be90(&uStack_3f8,param_1 + 0x20);
      pbVar7 = uStack_3f8;
      if (cStack_19b == '\x02') {
        pbStack_128 = pbStack_3e8;
        pbStack_138 = uStack_3f8;
        pbStack_130 = uStack_3f0;
        pdb_14007ee60();
        puVar3 = (ulonglong *)pub_1406abab0(0x18,8);
        if (puVar3 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x18);
        }
        puVar3[2] = (ulonglong)pbStack_3e8;
        *puVar3 = (ulonglong)uStack_3f8;
        puVar3[1] = (ulonglong)uStack_3f0;
        lVar2 = pdb_140f3fdf0(0x28,puVar3,&UNK_143071068);
      }
      else {
        pub_142e32760(&pbStack_650,&uStack_3f0,0x255);
        pbStack_658 = pbVar7;
        cStack_3fb = cStack_19b;
        uStack_3fa = uStack_19a;
        uStack_49 = 1;
        pdb_1416421a0(&uStack_3f8,&pbStack_658,&UNK_14333e1a0,7,&UNK_14333e1a8);
        auVar8[0] = -((char)uStack_3f8 == DAT_14300c7d0);
        auVar8[1] = -(uStack_3f8._1_1_ == UNK_14300c7d1);
        auVar8[2] = -(uStack_3f8._2_1_ == UNK_14300c7d2);
        auVar8[3] = -(uStack_3f8._3_1_ == UNK_14300c7d3);
        auVar8[4] = -(uStack_3f8._4_1_ == UNK_14300c7d4);
        auVar8[5] = -(uStack_3f8._5_1_ == UNK_14300c7d5);
        auVar8[6] = -(uStack_3f8._6_1_ == UNK_14300c7d6);
        auVar8[7] = -(uStack_3f8._7_1_ == UNK_14300c7d7);
        auVar8[8] = -((char)uStack_3f0 == UNK_14300c7d8);
        auVar8[9] = -(uStack_3f0._1_1_ == UNK_14300c7d9);
        auVar8[10] = -(uStack_3f0._2_1_ == UNK_14300c7da);
        auVar8[0xb] = -(uStack_3f0._3_1_ == UNK_14300c7db);
        auVar8[0xc] = -(uStack_3f0._4_1_ == UNK_14300c7dc);
        auVar8[0xd] = -(uStack_3f0._5_1_ == UNK_14300c7dd);
        auVar8[0xe] = -(uStack_3f0._6_1_ == UNK_14300c7de);
        auVar8[0xf] = -(uStack_3f0._7_1_ == UNK_14300c7df);
        if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar8[0xf] >> 7) << 0xf) == 0xffff) {
          pbStack_148 = pbStack_398;
          pbStack_158 = pbStack_3a8;
          pbStack_150 = pbStack_3a0;
          pbStack_168 = uStack_3b8;
          pbStack_160 = uStack_3b0;
          pbStack_178 = uStack_3c8;
          pbStack_170 = uStack_3c0;
          pbStack_188 = uStack_3d8;
          pbStack_180 = uStack_3d0;
          pbStack_198 = pbStack_3e8;
          pbStack_190 = pbStack_3e0;
          pdb_14007ee60();
          puVar3 = (ulonglong *)pub_1406abab0(0x58,8);
          if (puVar3 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x58);
          }
          puVar3[10] = (ulonglong)pbStack_398;
          puVar3[8] = (ulonglong)pbStack_3a8;
          puVar3[9] = (ulonglong)pbStack_3a0;
          *(undefined4 *)(puVar3 + 6) = (undefined4)uStack_3b8;
          *(undefined4 *)((longlong)puVar3 + 0x34) = uStack_3b8._4_4_;
          *(undefined4 *)(puVar3 + 7) = (undefined4)uStack_3b0;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = uStack_3b0._4_4_;
          *(undefined4 *)(puVar3 + 4) = (undefined4)uStack_3c8;
          *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_3c8._4_4_;
          *(undefined4 *)(puVar3 + 5) = (undefined4)uStack_3c0;
          *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_3c0._4_4_;
          *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_3d8;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_3d8._4_4_;
          *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_3d0;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_3d0._4_4_;
          *puVar3 = (ulonglong)pbStack_3e8;
          puVar3[1] = (ulonglong)pbStack_3e0;
          uStack_49 = 1;
          lVar2 = pdb_140f3fdf0(0x28,puVar3,&UNK_1430710e0);
        }
        else {
          pbStack_120 = pbStack_3e0;
          pbStack_118 = uStack_3d8;
          pbStack_110 = uStack_3d0;
          pbStack_108 = uStack_3c8;
          pbStack_100 = uStack_3c0;
          pbStack_f8 = uStack_3b8;
          pbStack_f0 = uStack_3b0;
          pbStack_e8 = pbStack_3a8;
          pbStack_e0 = pbStack_3a0;
          pbStack_d8 = pbStack_398;
          lStack_d0 = lStack_390;
          lStack_c8 = lStack_388;
          lStack_c0 = lStack_380;
          pbStack_138 = uStack_3f8;
          pbStack_130 = uStack_3f0;
          pbStack_128 = pbStack_3e8;
          uStack_b0 = uStack_80;
          pbStack_98 = pbStack_60;
          pbStack_90 = pbStack_648;
          uStack_b8 = param_2;
          if (pbStack_648 < (byte *)0xc0000001) {
            pdb_141641cb0(&uStack_3f8,&pbStack_138,&uStack_b8,&pbStack_98);
            if (uStack_3f8 != (byte *)0x4) {
              pbStack_188 = pbStack_3e8;
              pbStack_180 = pbStack_3e0;
              pbStack_178 = uStack_3d8;
              pbStack_170 = uStack_3d0;
              pbStack_168 = uStack_3c8;
              pbStack_160 = uStack_3c0;
              pbStack_158 = uStack_3b8;
              pbStack_150 = uStack_3b0;
              pbStack_148 = pbStack_3a8;
              pbStack_140 = pbStack_3a0;
              pbStack_198 = uStack_3f8;
              pbStack_190 = uStack_3f0;
              if (uStack_3f8 != (byte *)0x3) {
                pdb_140973620(&pbStack_198);
              }
              uStack_49 = 1;
              pdb_1409939e0(&pbStack_138);
              pub_142e32760(&uStack_3f8,&pbStack_658,0x260);
              uStack_49 = 0;
              pdb_141ac2fa0(&pbStack_138,&uStack_3f8);
              if (pbStack_138 == (byte *)0x8000000000000005) {
                if (pbStack_70 != (byte *)0x0) {
                  pub_1406abac0(pbStack_60,(ulonglong)pbStack_70,1);
                }
                if (((ulonglong)pbStack_58 & 0x7fffffffffffffff) != 0) {
                  pub_1406abac0(pbStack_68,(ulonglong)pbStack_58,1);
                }
                return 0;
              }
              pbStack_3e8 = pbStack_128;
              uStack_3f8 = pbStack_138;
              uStack_3f0 = pbStack_130;
              uStack_49 = 0;
              lVar2 = pdb_140bdaf20(&uStack_3f8);
              goto joined_r0x0001417fe983;
            }
          }
          else {
            uStack_3f0 = (byte *)0x8000000000000000;
            pbStack_3e8 = pbStack_648;
          }
          pbStack_88 = pbStack_3e0;
          pbStack_98 = uStack_3f0;
          pbStack_90 = pbStack_3e8;
          pdb_14007ee60();
          puVar3 = (ulonglong *)pub_1406abab0(0x18,8);
          if (puVar3 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x18);
          }
          puVar3[2] = (ulonglong)pbStack_88;
          *puVar3 = (ulonglong)pbStack_98;
          puVar3[1] = (ulonglong)pbStack_90;
          lVar2 = pdb_140f3fdf0(0x28,puVar3,&UNK_143070ff0);
          uStack_49 = 1;
          pdb_1409939e0(&pbStack_138);
        }
        pdb_14098be50(&pbStack_658);
      }
    }
    else {
      pdb_141c2e960(&uStack_3f8,param_1,param_2,uStack_80);
      pbStack_78 = uStack_3f0;
      lVar2 = pdb_142571e80(uStack_3f0,pbStack_3e8,pbStack_68,pbStack_a0);
      if (lVar2 == 0) {
        if (uStack_3f8 != (byte *)0x0) {
          pub_1406abac0(pbStack_78,(ulonglong)uStack_3f8,1);
        }
        goto LAB_1417fe556;
      }
      if (uStack_3f8 != (byte *)0x0) {
        pub_1406abac0(pbStack_78,(ulonglong)uStack_3f8,1);
      }
    }
joined_r0x0001417fe983:
    if (pbStack_70 != (byte *)0x0) {
      pub_1406abac0(pbStack_60,(ulonglong)pbStack_70,1);
    }
  }
  if (((ulonglong)pbStack_58 & 0x7fffffffffffffff) == 0) {
    return lVar2;
  }
  uVar6 = 1;
  pbVar7 = pbStack_68;
  pbVar4 = pbStack_58;
LAB_1417fe9b1:
  pub_1406abac0(pbVar7,(ulonglong)pbVar4,uVar6);
  return lVar2;
}

