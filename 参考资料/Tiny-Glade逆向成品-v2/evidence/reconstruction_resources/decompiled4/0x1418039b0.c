// Matched PDB: turbosloth::store::DiskStore::store<asset::texture::blob::TextureAssetBlob>
// VA 0x1418039b0, PDB extent 3764 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: turbosloth::store::DiskStore::store<asset::texture::blob::TextureAssetBlob>
   Extent: 3764 bytes. No whole-program auto-analysis. */

longlong pdb_1418039b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5,undefined8 *param_6,undefined8 *param_7,char param_8,
                      longlong *param_9,longlong *param_10,longlong *param_11)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 *puStack_658;
  undefined8 *puStack_650;
  undefined8 *puStack_648;
  char cStack_3fb;
  undefined2 uStack_3fa;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  longlong lStack_390;
  longlong lStack_388;
  longlong lStack_380;
  longlong lStack_378;
  longlong lStack_370;
  longlong lStack_368;
  undefined8 *puStack_360;
  char cStack_358;
  char cStack_19b;
  undefined2 uStack_19a;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_80 = param_3;
  if (param_8 == '\0') {
    uStack_4a = 1;
    puVar5 = param_6;
    uVar3 = pdb_142565cc0();
    if ((uVar3 & 1) != 0) {
      param_7 = puVar5;
    }
    if (param_4 == 0) goto LAB_141803b18;
LAB_141803a18:
    uStack_4a = 1;
    pdb_140907f60(&uStack_3f8,param_4);
    if (SBORROW8(0,(longlong)uStack_3f8)) {
      uStack_4a = 1;
      lVar2 = pdb_141235fd0(0x15,uStack_3f0,puStack_3e8);
      if (*param_11 != 0) {
        func_0x0001406abac0(param_11[1],*param_11 << 4,0x10);
      }
      if (*param_10 != 0) {
        func_0x0001406abac0(param_10[1],*param_10 * 0x30,0x10);
      }
      puVar5 = (undefined8 *)param_9[1];
      lVar7 = param_9[2];
      if (lVar7 != 0) {
        puVar4 = puVar5 + 9;
        do {
          if (puVar4[-1] != 0) {
            func_0x0001406abac0(*puVar4,puVar4[-1],1);
          }
          puVar4 = puVar4 + 0xc;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (*param_9 == 0) {
        return lVar2;
      }
      uVar8 = 0x10;
      puVar4 = (undefined8 *)(*param_9 * 0x60);
      goto LAB_1418041e8;
    }
    puStack_58 = uStack_3f8;
    puStack_68 = uStack_3f0;
    puStack_a0 = puStack_3e8;
    puVar4 = puStack_3e8;
    puStack_70 = (undefined8 *)pdb_141c2d770(uStack_3f0);
    puVar5 = (undefined8 *)0x0;
    puStack_78 = puVar4;
  }
  else {
    if (param_4 != 0) goto LAB_141803a18;
LAB_141803b18:
    puVar5 = (undefined8 *)0x1;
    puStack_58 = (undefined8 *)0x8000000000000000;
  }
  if ((longlong)param_6 < 0) {
    uVar8 = 0;
LAB_141803b36:
    uStack_4b = 1;
    pdb_142dc7e2a(uVar8,param_6);
    goto LAB_141804390;
  }
  if (param_6 == (undefined8 *)0x0) {
    puStack_60 = (undefined8 *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar8 = 1;
    puVar4 = (undefined8 *)func_0x0001406abab0(param_6,1);
    if (puVar4 == (undefined8 *)0x0) goto LAB_141803b36;
    puStack_60 = puVar4;
    func_0x000142e32760(puVar4,param_5,param_6);
  }
  pdb_14007ee60();
  puVar4 = (undefined8 *)func_0x0001406abab0(0x26,1);
  uVar8 = _UNK_14333e47e;
  if (puVar4 == (undefined8 *)0x0) {
    pdb_142dc7e2a(1,0x26);
    goto LAB_141804390;
  }
  puVar4[2] = _DAT_14333e476;
  puVar4[3] = uVar8;
  uVar8 = _UNK_14333e46e;
  *puVar4 = _DAT_14333e466;
  puVar4[1] = uVar8;
  *(undefined8 *)((longlong)puVar4 + 0x1e) = 0x626f6c4274657373;
  puStack_398 = (undefined8 *)param_9[2];
  puStack_3a8 = (undefined8 *)*param_9;
  puStack_3a0 = (undefined8 *)param_9[1];
  lStack_390 = *param_10;
  lStack_388 = param_10[1];
  lStack_380 = param_10[2];
  lStack_378 = *param_11;
  lStack_370 = param_11[1];
  lStack_368 = param_11[2];
  uStack_3d8 = param_6;
  uStack_3d0 = puStack_60;
  uStack_3c8 = param_6;
  cStack_358 = param_8;
  uStack_3c0 = (undefined8 *)0x26;
  uStack_3b0 = (undefined8 *)0x26;
  uStack_3f0 = (undefined8 *)0x0;
  puStack_3e8 = puStack_70;
  puStack_3e0 = puStack_78;
  uStack_3f8 = puVar5;
  uStack_3b8 = puVar4;
  puStack_360 = param_7;
  pdb_140908420(&puStack_658,&uStack_3f8);
  if (SBORROW8(0,(longlong)puStack_658)) {
    lVar2 = pdb_14256b2d0(0x15);
    uStack_4b = 0;
    pdb_14098b650(&uStack_3f8);
  }
  else {
    puStack_70 = puStack_658;
    puStack_60 = puStack_650;
    pdb_14098b650(&uStack_3f8);
    if (SBORROW8(0,(longlong)puStack_58)) {
LAB_141803d8d:
      pdb_14256be90(&uStack_3f8,param_1 + 0x20);
      puVar5 = uStack_3f8;
      if (cStack_19b == '\x02') {
        puStack_128 = puStack_3e8;
        puStack_138 = uStack_3f8;
        puStack_130 = uStack_3f0;
        pdb_14007ee60();
        puVar5 = (undefined8 *)func_0x0001406abab0(0x18,8);
        if (puVar5 == (undefined8 *)0x0) {
          pdb_142dc7e11(8,0x18);
          goto LAB_141804390;
        }
        puVar5[2] = puStack_3e8;
        *puVar5 = uStack_3f8;
        puVar5[1] = uStack_3f0;
        lVar2 = pdb_140f3fdf0(0x28,puVar5,&UNK_143071068);
      }
      else {
        func_0x000142e32760(&puStack_650,&uStack_3f0,0x255);
        puStack_658 = puVar5;
        cStack_3fb = cStack_19b;
        uStack_3fa = uStack_19a;
        uStack_49 = 1;
        pdb_1416421a0(&uStack_3f8,&puStack_658,&UNK_14333e1a0,7,&UNK_14333e1a8);
        auVar9[0] = -((char)uStack_3f8 == DAT_14300c7d0);
        auVar9[1] = -(uStack_3f8._1_1_ == UNK_14300c7d1);
        auVar9[2] = -(uStack_3f8._2_1_ == UNK_14300c7d2);
        auVar9[3] = -(uStack_3f8._3_1_ == UNK_14300c7d3);
        auVar9[4] = -(uStack_3f8._4_1_ == UNK_14300c7d4);
        auVar9[5] = -(uStack_3f8._5_1_ == UNK_14300c7d5);
        auVar9[6] = -(uStack_3f8._6_1_ == UNK_14300c7d6);
        auVar9[7] = -(uStack_3f8._7_1_ == UNK_14300c7d7);
        auVar9[8] = -((char)uStack_3f0 == UNK_14300c7d8);
        auVar9[9] = -(uStack_3f0._1_1_ == UNK_14300c7d9);
        auVar9[10] = -(uStack_3f0._2_1_ == UNK_14300c7da);
        auVar9[0xb] = -(uStack_3f0._3_1_ == UNK_14300c7db);
        auVar9[0xc] = -(uStack_3f0._4_1_ == UNK_14300c7dc);
        auVar9[0xd] = -(uStack_3f0._5_1_ == UNK_14300c7dd);
        auVar9[0xe] = -(uStack_3f0._6_1_ == UNK_14300c7de);
        auVar9[0xf] = -(uStack_3f0._7_1_ == UNK_14300c7df);
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
          puStack_148 = puStack_398;
          puStack_158 = puStack_3a8;
          puStack_150 = puStack_3a0;
          puStack_168 = uStack_3b8;
          puStack_160 = uStack_3b0;
          puStack_178 = uStack_3c8;
          puStack_170 = uStack_3c0;
          puStack_188 = uStack_3d8;
          puStack_180 = uStack_3d0;
          puStack_198 = puStack_3e8;
          puStack_190 = puStack_3e0;
          pdb_14007ee60();
          plVar6 = (longlong *)func_0x0001406abab0(0x58,8);
          if (plVar6 == (longlong *)0x0) {
            pdb_142dc7e11(8,0x58);
            goto LAB_141804390;
          }
          plVar6[10] = (longlong)puStack_398;
          plVar6[8] = (longlong)puStack_3a8;
          plVar6[9] = (longlong)puStack_3a0;
          *(undefined4 *)(plVar6 + 6) = (undefined4)uStack_3b8;
          *(undefined4 *)((longlong)plVar6 + 0x34) = uStack_3b8._4_4_;
          *(undefined4 *)(plVar6 + 7) = (undefined4)uStack_3b0;
          *(undefined4 *)((longlong)plVar6 + 0x3c) = uStack_3b0._4_4_;
          *(undefined4 *)(plVar6 + 4) = (undefined4)uStack_3c8;
          *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_3c8._4_4_;
          *(undefined4 *)(plVar6 + 5) = (undefined4)uStack_3c0;
          *(undefined4 *)((longlong)plVar6 + 0x2c) = uStack_3c0._4_4_;
          *(undefined4 *)(plVar6 + 2) = (undefined4)uStack_3d8;
          *(undefined4 *)((longlong)plVar6 + 0x14) = uStack_3d8._4_4_;
          *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_3d0;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_3d0._4_4_;
          *plVar6 = (longlong)puStack_3e8;
          plVar6[1] = (longlong)puStack_3e0;
          uStack_49 = 1;
          lVar2 = pdb_140f3fdf0(0x28,plVar6,&UNK_1430710e0);
        }
        else {
          puStack_120 = puStack_3e0;
          puStack_118 = uStack_3d8;
          puStack_110 = uStack_3d0;
          puStack_108 = uStack_3c8;
          puStack_100 = uStack_3c0;
          puStack_f8 = uStack_3b8;
          puStack_f0 = uStack_3b0;
          puStack_e8 = puStack_3a8;
          puStack_e0 = puStack_3a0;
          puStack_d8 = puStack_398;
          lStack_d0 = lStack_390;
          lStack_c8 = lStack_388;
          lStack_c0 = lStack_380;
          puStack_138 = uStack_3f8;
          puStack_130 = uStack_3f0;
          puStack_128 = puStack_3e8;
          uStack_b0 = uStack_80;
          puStack_98 = puStack_60;
          puStack_90 = puStack_648;
          uStack_b8 = param_2;
          if (puStack_648 < (undefined8 *)0xc0000001) {
            pdb_141641cb0(&uStack_3f8,&puStack_138,&uStack_b8,&puStack_98);
            if (uStack_3f8 != (undefined8 *)0x4) {
              puStack_188 = puStack_3e8;
              puStack_180 = puStack_3e0;
              puStack_178 = uStack_3d8;
              puStack_170 = uStack_3d0;
              puStack_168 = uStack_3c8;
              puStack_160 = uStack_3c0;
              puStack_158 = uStack_3b8;
              puStack_150 = uStack_3b0;
              puStack_148 = puStack_3a8;
              puStack_140 = puStack_3a0;
              puStack_198 = uStack_3f8;
              puStack_190 = uStack_3f0;
              if (uStack_3f8 != (undefined8 *)0x3) {
                pdb_140973620(&puStack_198);
              }
              uStack_49 = 1;
              pdb_1409939e0(&puStack_138);
              func_0x000142e32760(&uStack_3f8,&puStack_658,0x260);
              uStack_49 = 0;
              pdb_141ac2fa0(&puStack_138,&uStack_3f8);
              if (puStack_138 == (undefined8 *)0x8000000000000005) {
                if (puStack_70 != (undefined8 *)0x0) {
                  func_0x0001406abac0(puStack_60,puStack_70,1);
                }
                if (((ulonglong)puStack_58 & 0x7fffffffffffffff) != 0) {
                  func_0x0001406abac0(puStack_68,puStack_58,1);
                }
                return 0;
              }
              puStack_3e8 = puStack_128;
              uStack_3f8 = puStack_138;
              uStack_3f0 = puStack_130;
              uStack_49 = 0;
              lVar2 = pdb_140bdaf20(&uStack_3f8);
              goto joined_r0x0001418041ba;
            }
          }
          else {
            uStack_3f0 = (undefined8 *)0x8000000000000000;
            puStack_3e8 = puStack_648;
          }
          puStack_88 = puStack_3e0;
          puStack_98 = uStack_3f0;
          puStack_90 = puStack_3e8;
          pdb_14007ee60();
          plVar6 = (longlong *)func_0x0001406abab0(0x18,8);
          if (plVar6 == (longlong *)0x0) {
            pdb_142dc7e11(8,0x18);
LAB_141804390:
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          plVar6[2] = (longlong)puStack_88;
          *plVar6 = (longlong)puStack_98;
          plVar6[1] = (longlong)puStack_90;
          lVar2 = pdb_140f3fdf0(0x28,plVar6,&UNK_143070ff0);
          uStack_49 = 1;
          pdb_1409939e0(&puStack_138);
        }
        pdb_14098be50(&puStack_658);
      }
    }
    else {
      pdb_141c2e960(&uStack_3f8,param_1,param_2,uStack_80);
      puStack_78 = uStack_3f0;
      lVar2 = pdb_142571e80(uStack_3f0,puStack_3e8,puStack_68,puStack_a0);
      if (lVar2 == 0) {
        if (uStack_3f8 != (undefined8 *)0x0) {
          func_0x0001406abac0(puStack_78,uStack_3f8,1);
        }
        goto LAB_141803d8d;
      }
      if (uStack_3f8 != (undefined8 *)0x0) {
        func_0x0001406abac0(puStack_78,uStack_3f8,1);
      }
    }
joined_r0x0001418041ba:
    if (puStack_70 != (undefined8 *)0x0) {
      func_0x0001406abac0(puStack_60,puStack_70,1);
    }
  }
  if (((ulonglong)puStack_58 & 0x7fffffffffffffff) == 0) {
    return lVar2;
  }
  uVar8 = 1;
  puVar5 = puStack_68;
  puVar4 = puStack_58;
LAB_1418041e8:
  func_0x0001406abac0(puVar5,puVar4,uVar8);
  return lVar2;
}

