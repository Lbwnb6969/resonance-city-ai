// VA 0x141c33d30, PDB extent 2348 bytes
// turbosloth::store::DiskStore::rewrite_record_file_dependencies
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::DiskStore::rewrite_record_file_dependencies
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 2348 */

undefined8 pdb_141c33d30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uStack_6d8;
  undefined1 auStack_6d0 [597];
  char cStack_47b;
  undefined2 uStack_47a;
  undefined1 auStack_478 [80];
  longlong lStack_428;
  byte *pbStack_420;
  longlong lStack_418;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  ulonglong uStack_3b8;
  ulonglong uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  ulonglong uStack_378;
  ulonglong uStack_370;
  ulonglong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  char cStack_16b;
  undefined2 uStack_16a;
  ulonglong uStack_168;
  byte *pbStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  byte *pbStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  longlong *plStack_58;
  byte *pbStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_42 = 1;
  plStack_58 = param_4;
  pdb_141c2f990(&uStack_3c8,param_1,param_2,param_3);
  auVar8[0] = -((char)uStack_3c8 == DAT_14300c7d0);
  auVar8[1] = -(uStack_3c8._1_1_ == UNK_14300c7d1);
  auVar8[2] = -(uStack_3c8._2_1_ == UNK_14300c7d2);
  auVar8[3] = -(uStack_3c8._3_1_ == UNK_14300c7d3);
  auVar8[4] = -(uStack_3c8._4_1_ == UNK_14300c7d4);
  auVar8[5] = -(uStack_3c8._5_1_ == UNK_14300c7d5);
  auVar8[6] = -(uStack_3c8._6_1_ == UNK_14300c7d6);
  auVar8[7] = -(uStack_3c8._7_1_ == UNK_14300c7d7);
  auVar8[8] = -((char)uStack_3c0 == UNK_14300c7d8);
  auVar8[9] = -(uStack_3c0._1_1_ == UNK_14300c7d9);
  auVar8[10] = -(uStack_3c0._2_1_ == UNK_14300c7da);
  auVar8[0xb] = -(uStack_3c0._3_1_ == UNK_14300c7db);
  auVar8[0xc] = -(uStack_3c0._4_1_ == UNK_14300c7dc);
  auVar8[0xd] = -(uStack_3c0._5_1_ == UNK_14300c7dd);
  auVar8[0xe] = -(uStack_3c0._6_1_ == UNK_14300c7de);
  auVar8[0xf] = -(uStack_3c0._7_1_ == UNK_14300c7df);
  if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf) ==
      0xffff) {
    uStack_42 = 1;
    uVar3 = pdb_140f370c0(0,&UNK_14339fab0,0x1d);
    pbVar6 = (byte *)plStack_58[1];
    lVar5 = plStack_58[2];
    if (lVar5 != 0) {
      pbVar7 = pbVar6 + 0x48;
      do {
        if (*(ulonglong *)(pbVar7 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar7,*(ulonglong *)(pbVar7 + -8),1);
        }
        pbVar7 = pbVar7 + 0x60;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*plStack_58 != 0) {
      pub_1406abac0(pbVar6,*plStack_58 * 0x60,0x10);
    }
  }
  else {
    pub_142e32760(auStack_478,&uStack_3c8,0xb0);
    if (lStack_418 != 0) {
      pbVar6 = pbStack_420 + 0x48;
      lVar5 = lStack_418;
      do {
        if (*(ulonglong *)(pbVar6 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar6,*(ulonglong *)(pbVar6 + -8),1);
        }
        pbVar6 = pbVar6 + 0x60;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (lStack_428 != 0) {
      pub_1406abac0(pbStack_420,lStack_428 * 0x60,0x10);
    }
    lStack_418 = plStack_58[2];
    lStack_428 = *plStack_58;
    pbStack_420 = (byte *)plStack_58[1];
    pdb_142624250(&uStack_3c8,auStack_478);
    uVar2 = uStack_3b8;
    if (SBORROW8(0,uStack_3c8)) {
      uVar3 = pdb_14256b2d0(0x15);
    }
    else {
      uStack_60 = uStack_3c8;
      pbStack_50 = uStack_3c0;
      pdb_14256be90(&uStack_3c8,param_1 + 0x20);
      uVar1 = uStack_3c8;
      if (cStack_16b == '\x02') {
        uStack_f8 = uStack_3b8;
        uStack_108 = uStack_3c8;
        pbStack_100 = uStack_3c0;
        pdb_14007ee60();
        puVar4 = (ulonglong *)pub_1406abab0(0x18,8);
        if (puVar4 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x18);
        }
        puVar4[2] = uStack_3b8;
        *puVar4 = uStack_3c8;
        puVar4[1] = (ulonglong)uStack_3c0;
        uVar3 = pdb_140f3fdf0(0x28,puVar4,&UNK_143557910);
      }
      else {
        pub_142e32760(auStack_6d0,&uStack_3c0,0x255);
        uStack_6d8 = uVar1;
        cStack_47b = cStack_16b;
        uStack_47a = uStack_16a;
        uStack_41 = 1;
        pdb_1425e71d0(&uStack_3c8,&uStack_6d8,&UNK_14339ee97,7,&UNK_14339fad0);
        auVar9[0] = -((char)uStack_3c8 == DAT_14300c7d0);
        auVar9[1] = -(uStack_3c8._1_1_ == UNK_14300c7d1);
        auVar9[2] = -(uStack_3c8._2_1_ == UNK_14300c7d2);
        auVar9[3] = -(uStack_3c8._3_1_ == UNK_14300c7d3);
        auVar9[4] = -(uStack_3c8._4_1_ == UNK_14300c7d4);
        auVar9[5] = -(uStack_3c8._5_1_ == UNK_14300c7d5);
        auVar9[6] = -(uStack_3c8._6_1_ == UNK_14300c7d6);
        auVar9[7] = -(uStack_3c8._7_1_ == UNK_14300c7d7);
        auVar9[8] = -((char)uStack_3c0 == UNK_14300c7d8);
        auVar9[9] = -(uStack_3c0._1_1_ == UNK_14300c7d9);
        auVar9[10] = -(uStack_3c0._2_1_ == UNK_14300c7da);
        auVar9[0xb] = -(uStack_3c0._3_1_ == UNK_14300c7db);
        auVar9[0xc] = -(uStack_3c0._4_1_ == UNK_14300c7dc);
        auVar9[0xd] = -(uStack_3c0._5_1_ == UNK_14300c7dd);
        auVar9[0xe] = -(uStack_3c0._6_1_ == UNK_14300c7de);
        auVar9[0xf] = -(uStack_3c0._7_1_ == UNK_14300c7df);
        if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
          uStack_118 = uStack_368;
          uStack_128 = uStack_378;
          uStack_120 = uStack_370;
          uStack_168 = uStack_3b8;
          pbStack_160 = (byte *)uStack_3b0;
          pdb_14007ee60();
          puVar4 = (ulonglong *)pub_1406abab0(0x58,8);
          if (puVar4 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x58);
          }
          puVar4[10] = uStack_368;
          puVar4[8] = uStack_378;
          puVar4[9] = uStack_370;
          *(undefined4 *)(puVar4 + 6) = uStack_388;
          *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_384;
          *(undefined4 *)(puVar4 + 7) = uStack_380;
          *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_37c;
          *(undefined4 *)(puVar4 + 4) = uStack_398;
          *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_394;
          *(undefined4 *)(puVar4 + 5) = uStack_390;
          *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_38c;
          *(undefined4 *)(puVar4 + 2) = uStack_3a8;
          *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_3a4;
          *(undefined4 *)(puVar4 + 3) = uStack_3a0;
          *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_39c;
          *puVar4 = uStack_3b8;
          puVar4[1] = uStack_3b0;
          uStack_41 = 1;
          uVar3 = pdb_140f3fdf0(0x28,puVar4,&UNK_143557988);
        }
        else {
          uStack_f0 = uStack_3b0;
          uStack_b8 = uStack_378;
          uStack_b0 = uStack_370;
          uStack_a8 = uStack_368;
          uStack_a0 = uStack_360;
          uStack_98 = uStack_358;
          uStack_90 = uStack_350;
          uStack_108 = uStack_3c8;
          pbStack_100 = uStack_3c0;
          uStack_f8 = uStack_3b8;
          pbStack_78 = pbStack_50;
          uStack_70 = uVar2;
          uStack_88 = param_2;
          uStack_80 = param_3;
          if (uVar2 < 0xc0000001) {
            pdb_142623390(&uStack_3c8,&uStack_108,&uStack_88,&pbStack_78);
            if (uStack_3c8 != 4) {
              uStack_158 = uStack_3b8;
              uStack_150 = uStack_3b0;
              uStack_118 = uStack_378;
              uStack_110 = uStack_370;
              uStack_168 = uStack_3c8;
              pbStack_160 = uStack_3c0;
              if (uStack_3c8 != 3) {
                pdb_141ac36e0(&uStack_168);
              }
              uStack_41 = 1;
              pdb_141ac4ad0(&uStack_108);
              pub_142e32760(&uStack_3c8,&uStack_6d8,0x260);
              uStack_41 = 0;
              pdb_141ac2fa0(&uStack_108,&uStack_3c8);
              if (uStack_108 == 0x8000000000000005) {
                uVar3 = 0;
              }
              else {
                uStack_3b8 = uStack_f8;
                uStack_3c8 = uStack_108;
                uStack_3c0 = pbStack_100;
                uStack_41 = 0;
                uVar3 = pdb_142620210(&uStack_3c8);
              }
              if (uStack_60 != 0) {
                pub_1406abac0(pbStack_50,uStack_60,1);
              }
              uStack_42 = 0;
              pdb_14098b650(auStack_478);
              return uVar3;
            }
          }
          else {
            uStack_3c0 = (byte *)0x8000000000000000;
            uStack_3b8 = uVar2;
          }
          uStack_68 = uStack_3b0;
          pbStack_78 = uStack_3c0;
          uStack_70 = uStack_3b8;
          pdb_14007ee60();
          puVar4 = (ulonglong *)pub_1406abab0(0x18,8);
          if (puVar4 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x18);
          }
          puVar4[2] = uStack_68;
          *puVar4 = (ulonglong)pbStack_78;
          puVar4[1] = uStack_70;
          uVar3 = pdb_140f3fdf0(0x28,puVar4,&UNK_143557a00);
          uStack_41 = 1;
          pdb_141ac4ad0(&uStack_108);
        }
        pdb_141ac4830(&uStack_6d8);
      }
      if (uStack_60 != 0) {
        pub_1406abac0(pbStack_50,uStack_60,1);
      }
    }
    uStack_42 = 0;
    pdb_14098b650(auStack_478);
  }
  return uVar3;
}

