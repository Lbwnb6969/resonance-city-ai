// VA 0x1400b3ee0, PDB extent 4390 bytes
// tiny_glade::screenshot::handle_screenshot_opportunity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::screenshot::handle_screenshot_opportunity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
   Extent: 4390 */

undefined8 pdb_1400b3ee0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char *pcVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  longlong lStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 auStack_220 [8];
  uint uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  uint uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  char cStack_1f4;
  undefined2 uStack_1f3;
  undefined1 uStack_1f1;
  undefined8 uStack_1f0;
  ushort *puStack_1e8;
  longlong lStack_1e0;
  undefined2 uStack_1d8;
  undefined2 uStack_1d6;
  ushort uStack_1d4;
  undefined2 uStack_1d2;
  uint uStack_1d0;
  undefined2 uStack_1cc;
  undefined1 uStack_1ca;
  undefined1 uStack_1c9;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_150;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined8 uStack_138;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  ushort uStack_96;
  byte bStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  bStack_93 = (byte)param_2;
  LOCK();
  bVar20 = DAT_143ca3038 == '\0';
  if (bVar20) {
    DAT_143ca3038 = '\x01';
  }
  UNLOCK();
  puStack_f8 = param_3;
  if (!bVar20) {
    pdb_142dbd1a0(&DAT_143ca3038,param_2,1000000000);
  }
  pdb_140e9a150(&DAT_143ca3038);
  fVar4 = _DAT_142e36f30;
  fVar3 = _DAT_142e36f2c;
  if (_DAT_143ca3050 == 0) {
    uVar9 = 0;
LAB_1400b4bdb:
    pdb_140e9a350();
    LOCK();
    bVar20 = DAT_143ca3038 == '\x01';
    if (bVar20) {
      DAT_143ca3038 = '\0';
    }
    UNLOCK();
  }
  else {
    lStack_1e0 = _DAT_143ca3050 * 0x78 + _DAT_143ca3048;
    uStack_13c = (uint)(byte)(bStack_93 - 2);
    if (bStack_93 < 2) {
      uStack_13c = 3;
    }
    puStack_1e8 = (ushort *)(puStack_f8 + 1);
    uStack_140 = (uint)*(ushort *)((longlong)puStack_f8 + 10);
    fVar22 = (float)uStack_140;
    uStack_144 = *(uint *)(puStack_f8 + 1);
    lVar16 = _DAT_143ca3048;
    lVar18 = lStack_1e0;
    uVar13 = uStack_13c;
    while (lVar15 = lVar16, lVar15 != lVar18) {
      bVar2 = *(byte *)(lVar15 + 0x46);
      cVar5 = bVar2 - 2;
      if (bVar2 < 2) {
        cVar5 = '\x03';
      }
      lVar16 = lVar15 + 0x78;
      if ((((char)uVar13 != '\x03' || bVar2 == bStack_93) && (cVar5 == (char)uVar13)) &&
         (*(char *)(lVar15 + 0x48) == '\0')) {
        puVar7 = puStack_1e8;
        uVar12 = uStack_140;
        if (*(short *)(lVar15 + 0x40) == 1) {
          puVar7 = (ushort *)(lVar15 + 0x42);
          uVar12 = (uint)*(ushort *)(lVar15 + 0x44);
        }
        uVar11 = *puVar7;
        uStack_98 = (undefined2)uVar12;
        lStack_150 = lVar16;
        lStack_c8 = lVar15;
        uStack_96 = uVar11;
        if (*(longlong *)(lVar15 + 0x18) == -0x7fffffffffffffff) {
          uStack_a0 = (undefined8 *)(CONCAT44(uStack_a0._4_4_,uVar12) & 0xffffffff0000ffff);
          pcStack_d0 = (char *)CONCAT44(pcStack_d0._4_4_,(uint)uVar11);
          uStack_c0 = (undefined8 *)((ulonglong)(uVar12 << 0x10 | (uint)uVar11) << 0x20);
          uStack_b8 = (undefined8 *)0x125011800010001;
          puStack_b0 = (undefined8 *)CONCAT71(puStack_b0._1_7_,2);
          uStack_1d8 = 0;
          uStack_1d6 = 0;
          uStack_1d4 = 0;
          uStack_1d2 = 0;
          pdb_1400a94a0(&lStack_2a8,*(undefined8 *)(param_1 + 0x1e8),&UNK_142e3b523,0x11,&uStack_c0,
                        1,&uStack_1d8);
          if (lStack_2a8 != 0xb) {
            uStack_198 = uStack_268;
            uStack_194 = uStack_264;
            uStack_190 = uStack_260;
            uStack_18c = uStack_25c;
            uStack_1a8 = uStack_278;
            uStack_1a4 = uStack_274;
            uStack_1a0 = uStack_270;
            uStack_19c = uStack_26c;
            uStack_1b8 = uStack_288;
            uStack_1b4 = uStack_284;
            uStack_1b0 = uStack_280;
            uStack_1ac = uStack_27c;
            uStack_1c8 = uStack_298;
            uStack_1c4 = uStack_294;
            uStack_1c0 = (undefined8 *)CONCAT44(uStack_28c,uStack_290);
            uStack_1d8 = (undefined2)lStack_2a8;
            uStack_1d6 = (undefined2)((ulonglong)lStack_2a8 >> 0x10);
            uStack_1d4 = (ushort)((ulonglong)lStack_2a8 >> 0x20);
            uStack_1d2 = (undefined2)((ulonglong)lStack_2a8 >> 0x30);
            uStack_1d0 = (uint)uStack_2a0;
            uStack_1cc = (undefined2)((ulonglong)uStack_2a0 >> 0x20);
            uStack_1ca = (undefined1)((ulonglong)uStack_2a0 >> 0x30);
            uStack_1c9 = (undefined1)((ulonglong)uStack_2a0 >> 0x38);
            uVar9 = pdb_142d88ca0(&uStack_1d8);
            goto LAB_1400b4bdb;
          }
          uStack_1f0 = uStack_2a0;
          uStack_91 = 1;
          uStack_d8 = uStack_2a0;
          pdb_140e1e6e0(auStack_220,uStack_2a0,param_1,0,&UNK_142f70d08);
          pub_142e32ab0(fVar22 / (float)(int)(uint)uStack_a0);
          fVar21 = (float)pub_142e32b00();
          uVar17 = 0;
          if (0.0 <= fVar21) {
            uVar17 = (longlong)(fVar21 - fVar3) & (longlong)fVar21 >> 0x3f | (longlong)fVar21;
          }
          if (fVar4 < fVar21) {
            uVar17 = 0xffffffffffffffff;
          }
          if (uVar17 == 0) {
            uStack_f0 = 0;
            uStack_e8 = 8;
            uStack_e0 = 0;
            uStack_91 = 1;
            uVar9 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f71690,0x3a,&uStack_f0);
            uStack_91 = 1;
            pdb_140e291c0(&uStack_1d8,&UNK_142f71690,0x3a,uVar9,param_1);
            uStack_c0 = puStack_f8;
            uStack_b8 = (undefined8 *)auStack_220;
            puStack_b0 = puStack_f8;
            uStack_a8 = (uint)pcStack_d0;
            uStack_a4 = (uint)uStack_a0;
            uStack_91 = 1;
            pdb_1400ba430(&lStack_2a8,&uStack_1d8,&uStack_c0);
            pub_142e32760(&uStack_1d8,&lStack_2a8,0x88);
            uStack_b8 = (undefined8 *)CONCAT44(1,(int)uStack_a0);
            uStack_c0 = (undefined8 *)CONCAT44((int)pcStack_d0,1);
            uStack_91 = 1;
            pdb_140e28810(&uStack_1d8,&uStack_c0);
          }
          else {
            uStack_128._0_5_ = CONCAT14(2,(undefined4)uStack_128);
            uVar19 = 0;
            do {
              cVar5 = uStack_128._4_1_;
              puVar14 = puStack_f8;
              uVar13 = uStack_144;
              if (uStack_128._4_1_ != '\x02') {
                puVar14 = &uStack_138;
                uVar13 = uStack_130;
              }
              uVar12 = (uVar13 & 0xffff) >> 1;
              uVar12 = (uVar13 & 1) + uVar12 +
                       (uint)((short)((short)uVar12 + (short)(uVar13 & 1)) == 0);
              uVar11 = (ushort)(uVar13 >> 0x11) + (ushort)((uVar13 >> 0x10 & 1) != 0);
              uStack_1d4 = 1;
              if (1 < uVar11) {
                uStack_1d4 = uVar11;
              }
              uVar13 = uVar12 & 0xffff | (uint)uStack_1d4 << 0x10;
              uStack_1d8 = 0;
              uStack_1d6 = (undefined2)uVar12;
              uStack_1d2 = 1;
              uStack_1d0 = 0x25010001;
              uStack_1cc = 0x201;
              uStack_1ca = 0;
              uStack_1c8 = 0x42e3b510;
              uStack_1c4 = 1;
              uStack_1c0 = (undefined8 *)0x13;
              uStack_91 = 1;
              uVar6 = pdb_140e2b4e0(param_1,&uStack_1d8);
              uStack_1d4 = (ushort)uVar6;
              uStack_1d2 = (undefined2)((uint)uVar6 >> 0x10);
              uStack_1cc = 1;
              uStack_1ca = 1;
              uStack_1c9 = 0;
              uStack_1c8 = 0x2012501;
              uStack_1c4 = uStack_1c4 & 0xffffff00;
              uStack_1d8 = 0;
              uStack_1d6 = 0;
              uStack_1d0 = uVar13;
              if (*(char *)(param_1 + 0x24c) == '\x01') {
                uStack_91 = 1;
                pdb_140e19620(&uStack_1d8,param_1);
              }
              uStack_108 = CONCAT44(uStack_1c4,uStack_1c8);
              uStack_118 = CONCAT22(uStack_1d6,uStack_1d8);
              uStack_114 = CONCAT22(uStack_1d2,uStack_1d4);
              uStack_110 = uStack_1d0;
              uStack_10c = CONCAT13(uStack_1c9,CONCAT12(uStack_1ca,uStack_1cc));
              puVar8 = &uStack_138;
              if (cVar5 == '\x02') {
                puVar8 = puStack_f8;
              }
              if (*(char *)((longlong)puVar8 + 0x12) == '\x01') {
                uStack_f0 = 0;
                uStack_e8 = 8;
                uStack_e0 = 0;
                uStack_91 = 1;
                uVar9 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f71763,0x21,
                                      &uStack_f0);
                uStack_91 = 1;
                pdb_140e291c0(&uStack_1d8,&UNK_142f71763,0x21,uVar9,param_1);
                uStack_b8 = (undefined8 *)&uStack_118;
                uStack_91 = 1;
                uStack_c0 = puVar14;
                puStack_b0 = puVar14;
                pdb_1400b9850(&lStack_2a8,&uStack_1d8,&uStack_c0);
              }
              else {
                uStack_f0 = 0;
                uStack_e8 = 8;
                uStack_e0 = 0;
                uStack_91 = 1;
                uVar9 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f71784,0x31,
                                      &uStack_f0);
                uStack_91 = 1;
                pdb_140e291c0(&uStack_1d8,&UNK_142f71784,0x31,uVar9,param_1);
                uStack_b8 = (undefined8 *)&uStack_118;
                uStack_91 = 1;
                uStack_c0 = puVar14;
                puStack_b0 = puVar14;
                pdb_1400b9850(&lStack_2a8,&uStack_1d8,&uStack_c0);
              }
              pub_142e32760(&uStack_1d8,&lStack_2a8,0x88);
              uStack_b8 = (undefined8 *)CONCAT44(1,uStack_110 >> 0x10);
              uStack_c0 = (undefined8 *)CONCAT44(uStack_110 & 0xffff,1);
              uStack_91 = 1;
              pdb_140e28810(&uStack_1d8,&uStack_c0);
              uVar19 = uVar19 + 1;
              uStack_130 = uStack_110;
              uStack_12c = uStack_10c;
              uStack_138 = CONCAT44(uStack_114,uStack_118);
              uStack_128 = uStack_108;
              uVar9 = uStack_128;
            } while (uVar19 != uVar17);
            uStack_128._4_1_ = (char)((ulonglong)uStack_108 >> 0x20);
            uStack_128 = uVar9;
            if (uStack_128._4_1_ == '\x02') {
              uStack_91 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_142e3b4f8);
            }
            uStack_128._0_4_ = (undefined4)uStack_108;
            uStack_1f8 = (undefined4)uStack_128;
            uStack_208 = uStack_118;
            uStack_204 = uStack_114;
            uStack_200 = uStack_110;
            uStack_1fc = uStack_10c;
            cStack_1f4 = uStack_128._4_1_;
            uStack_128._7_1_ = (undefined1)((ulonglong)uStack_108 >> 0x38);
            uStack_1f1 = uStack_128._7_1_;
            uStack_128._5_2_ = (undefined2)((ulonglong)uStack_108 >> 0x28);
            uStack_1f3 = uStack_128._5_2_;
            uStack_f0 = 0;
            uStack_e8 = 8;
            uStack_e0 = 0;
            uStack_91 = 1;
            uVar9 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f716ca,0x3a,&uStack_f0);
            uStack_91 = 1;
            pdb_140e291c0(&uStack_1d8,&UNK_142f716ca,0x3a,uVar9,param_1);
            uStack_c0 = (undefined8 *)&uStack_208;
            uStack_b8 = (undefined8 *)auStack_220;
            uStack_a8 = (uint)pcStack_d0;
            uStack_a4 = (uint)uStack_a0;
            uStack_91 = 1;
            puStack_b0 = uStack_c0;
            pdb_1400ba430(&lStack_2a8,&uStack_1d8,&uStack_c0);
            pub_142e32760(&uStack_1d8,&lStack_2a8,0x88);
            uStack_b8 = (undefined8 *)CONCAT44(1,(int)uStack_a0);
            uStack_c0 = (undefined8 *)CONCAT44((int)pcStack_d0,1);
            uStack_91 = 1;
            pdb_140e28810(&uStack_1d8,&uStack_c0);
          }
          uStack_1c8 = (undefined4)uStack_210;
          uStack_1c4 = (uint)((ulonglong)uStack_210 >> 0x20);
          uStack_1d8 = (undefined2)auStack_220._0_4_;
          uStack_1d6 = SUB42(auStack_220._0_4_,2);
          uStack_1d4 = (ushort)auStack_220._4_4_;
          uStack_1d2 = SUB42(auStack_220._4_4_,2);
          uStack_1d0 = uStack_218;
          uStack_1cc = (undefined2)uStack_214;
          uStack_1ca = (undefined1)((uint)uStack_214 >> 0x10);
          uStack_1c9 = (undefined1)((uint)uStack_214 >> 0x18);
          uStack_91 = 1;
          pdb_140e1e810(&uStack_1d8,param_1,0x23);
          uStack_1d8 = (undefined2)uStack_d8;
          uStack_1d6 = (undefined2)((ulonglong)uStack_d8 >> 0x10);
          uStack_1d4 = (ushort)((ulonglong)uStack_d8 >> 0x20);
          uStack_1d2 = (undefined2)((ulonglong)uStack_d8 >> 0x30);
          lVar16 = *(longlong *)(lStack_c8 + 0x20);
          pcVar1 = (char *)(lVar16 + 0x10);
          LOCK();
          bVar20 = *(char *)(lVar16 + 0x10) == '\0';
          if (bVar20) {
            *(char *)(lVar16 + 0x10) = '\x01';
          }
          UNLOCK();
          if (!bVar20) {
            pdb_142dbd1a0(pcVar1);
          }
          pdb_140e9a150(pcVar1);
          uStack_a0 = (undefined8 *)(lVar16 + 0x18);
          pcStack_d0 = pcVar1;
          if (*(longlong *)(lVar16 + 0x18) != 0) {
            pdb_1404bb6e0(uStack_a0);
          }
          pcVar1 = pcStack_d0;
          *uStack_a0 = uStack_d8;
          uStack_91 = 0;
          pdb_140e9a350();
          LOCK();
          cVar5 = *pcVar1;
          if (cVar5 == '\x01') {
            *pcVar1 = '\0';
          }
          UNLOCK();
          if (cVar5 != '\x01') {
            uStack_91 = 0;
            pdb_142dbcef0(pcVar1,0);
          }
          if ((*(longlong *)(lStack_c8 + 0x48) != 0) && (*(longlong *)(lStack_c8 + 0x50) != 0)) {
            pdb_1404b8e50(lStack_c8 + 0x50);
          }
          *(undefined8 *)(lStack_c8 + 0x48) = 1;
          *(undefined8 *)(lStack_c8 + 0x50) = 0;
          *(ushort *)(lStack_c8 + 0x68) = uStack_96;
          *(undefined2 *)(lStack_c8 + 0x6a) = uStack_98;
          lVar16 = lStack_150;
          lVar18 = lStack_1e0;
          uVar13 = uStack_13c;
        }
        else {
          uVar12 = uVar12 & 0xffff;
          uVar9 = *(undefined8 *)(param_1 + 0x1e8);
          uVar10 = pdb_140e1d0f0((ulonglong)(uVar11 * uVar12) << 2,0x30);
          pdb_140e55ce0(&lStack_2a8,uVar9,&UNK_142e3b523,0x11,uVar10);
          if (lStack_2a8 != 0xb) {
            uStack_198 = uStack_268;
            uStack_194 = uStack_264;
            uStack_190 = uStack_260;
            uStack_18c = uStack_25c;
            uStack_1a8 = uStack_278;
            uStack_1a4 = uStack_274;
            uStack_1a0 = uStack_270;
            uStack_19c = uStack_26c;
            uStack_1b8 = uStack_288;
            uStack_1b4 = uStack_284;
            uStack_1b0 = uStack_280;
            uStack_1ac = uStack_27c;
            uStack_1d8 = (undefined2)lStack_2a8;
            uStack_1d6 = (undefined2)((ulonglong)lStack_2a8 >> 0x10);
            uStack_1d4 = (ushort)((ulonglong)lStack_2a8 >> 0x20);
            uStack_1d2 = (undefined2)((ulonglong)lStack_2a8 >> 0x30);
            uStack_1d0 = (uint)uStack_2a0;
            uStack_1cc = (undefined2)((ulonglong)uStack_2a0 >> 0x20);
            uStack_1ca = (undefined1)((ulonglong)uStack_2a0 >> 0x30);
            uStack_1c9 = (undefined1)((ulonglong)uStack_2a0 >> 0x38);
            uStack_1c8 = uStack_298;
            uStack_1c4 = uStack_294;
            uStack_1c0 = (undefined8 *)CONCAT44(uStack_28c,uStack_290);
            uVar9 = pdb_142d88ca0(&uStack_1d8);
            goto LAB_1400b4bdb;
          }
          uStack_138 = uStack_2a0;
          uStack_92 = 1;
          uStack_d8 = uStack_2a0;
          pcStack_d0 = (char *)CONCAT44(uStack_294,uStack_298);
          uStack_a0 = (undefined8 *)CONCAT44(uStack_28c,uStack_290);
          pdb_140e1e250(&uStack_118,uStack_2a0,param_1,0,&UNK_142f70d08);
          uStack_f0 = 0;
          uStack_e8 = 8;
          uStack_e0 = 0;
          uStack_92 = 1;
          uVar9 = pdb_140220f90(*(undefined8 *)(param_1 + 0x208),&UNK_142f717df,0x39,&uStack_f0);
          uStack_92 = 1;
          pdb_140e291c0(&uStack_1d8,&UNK_142f717df,0x39,uVar9,param_1);
          uStack_c0 = (undefined8 *)&uStack_118;
          uStack_b8 = puStack_f8;
          puStack_b0 = puStack_f8;
          uStack_92 = 1;
          uStack_a8 = (uint)uVar11;
          uStack_a4 = uVar12;
          pdb_1400bb5f0(&lStack_2a8,&uStack_1d8,&uStack_c0);
          pub_142e32760(&uStack_1d8,&lStack_2a8,0x88);
          uStack_b8 = (undefined8 *)CONCAT44(1,uVar12);
          uStack_c0 = (undefined8 *)CONCAT44((uint)uVar11,1);
          uStack_92 = 1;
          pdb_140e28810(&uStack_1d8,&uStack_c0);
          uStack_1c8 = (undefined4)uStack_108;
          uStack_1d8 = (undefined2)uStack_118;
          uStack_1d6 = (undefined2)((uint)uStack_118 >> 0x10);
          uStack_1d4 = (ushort)uStack_114;
          uStack_1d2 = (undefined2)((uint)uStack_114 >> 0x10);
          uStack_1d0 = uStack_110;
          uStack_1cc = (undefined2)uStack_10c;
          uStack_1ca = (undefined1)((uint)uStack_10c >> 0x10);
          uStack_1c9 = (undefined1)((uint)uStack_10c >> 0x18);
          uStack_92 = 1;
          pdb_140e1e2e0(&uStack_1d8,param_1,0x23);
          if ((*(longlong *)(lStack_c8 + 0x48) != 0) && (*(longlong *)(lStack_c8 + 0x50) != 0)) {
            pdb_1404b8e50(lStack_c8 + 0x50);
          }
          *(undefined8 *)(lStack_c8 + 0x48) = 1;
          *(undefined8 *)(lStack_c8 + 0x50) = uStack_d8;
          *(char **)(lStack_c8 + 0x58) = pcStack_d0;
          *(undefined8 **)(lStack_c8 + 0x60) = uStack_a0;
          *(ushort *)(lStack_c8 + 0x68) = uStack_96;
          *(undefined2 *)(lStack_c8 + 0x6a) = uStack_98;
          lVar16 = lStack_150;
        }
      }
    }
    pdb_140e9a350(&DAT_143ca3038);
    uVar9 = 0;
    LOCK();
    bVar20 = DAT_143ca3038 == '\x01';
    if (bVar20) {
      DAT_143ca3038 = '\0';
    }
    UNLOCK();
  }
  if (!bVar20) {
    pdb_142dbcef0(&DAT_143ca3038,0);
  }
  return uVar9;
}

