// VA 0x1403c6090, PDB extent 2768 bytes
// tiny_glade::panic_reporter::panic_dump::dump_save
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::panic_dump::dump_save
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/panic_dump.rs
   Extent: 2768 */

ulonglong * pdb_1403c6090(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  longlong *plVar15;
  byte *pbVar16;
  longlong lVar17;
  ulonglong arg1;
  byte *pbVar18;
  code *pcVar19;
  undefined1 uVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 uVar24;
  byte *pbVar25;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_208 [16];
  byte *pbStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong lStack_1d8;
  code **ppcStack_1b0;
  code *pcStack_1a8;
  longlong lStack_1a0;
  byte *pbStack_198;
  undefined8 uStack_190;
  ulonglong uStack_188;
  byte *pbStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined2 uStack_14b;
  undefined1 uStack_149;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  undefined8 uStack_118;
  byte *pbStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined2 uStack_eb;
  undefined1 uStack_e9;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined4 uStack_8c;
  byte bStack_88;
  undefined4 uStack_84;
  code *pcStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  longlong *plStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar5 = *_DAT_143ca44b0;
  if (lVar5 == 2) {
    param_1[1] = 0x8000000000000000;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pdb_140f3e9e0(&uStack_188,param_2,param_3,&UNK_142f4efb2,9);
  uStack_118 = (longlong *)((ulonglong)uStack_118._4_4_ << 0x20);
  pbStack_110 = (byte *)0x0;
  uStack_108 = 7;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fe = 0;
  uStack_f8 = uStack_f8 & 0xffffff00;
  uStack_ff = 1;
  uStack_fc = 1;
  uStack_fd = 1;
  pbStack_78 = pbStack_180;
  pbVar18 = pbStack_180;
  lVar9 = pdb_140f4a2a0(&uStack_118,pbStack_180,uStack_178);
  if (lVar9 == 1) {
    uStack_b0 = SUB84(pbVar18,0);
    uStack_ac = (undefined4)((ulonglong)pbVar18 >> 0x20);
    pbStack_1f8 = (byte *)&uStack_b0;
    pcStack_1f0 = pdb_140f59780;
    pdb_140f60760(&uStack_118,&UNK_142f4eefe,&pbStack_1f8);
    pbVar18 = pbStack_110;
    plVar21 = uStack_118;
    uVar12 = CONCAT44(uStack_104,uStack_108);
    pdb_1404b38e0(&uStack_b0);
    if (plVar21 != (longlong *)0x8000000000000001) {
      param_1[1] = (ulonglong)plVar21;
      param_1[2] = (ulonglong)pbVar18;
      param_1[3] = uVar12;
      *param_1 = 0x8000000000000000;
      goto joined_r0x0001403c644d;
    }
  }
  plVar21 = _DAT_143ca44b0;
  lVar9 = _DAT_143ca44b0[3];
  pbStack_68 = pbVar18;
  if (*(longlong *)(lVar9 + 0x10) == 0) {
    pdb_14007ee60();
    pbVar18 = pub_1406abab0(0x10,1);
    uVar10 = _UNK_142f4efc3;
    if (pbVar18 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x10);
      goto LAB_1403c68b8;
    }
    *(undefined8 *)pbVar18 = _DAT_142f4efbb;
    *(undefined8 *)(pbVar18 + 8) = uVar10;
    param_1[1] = 0x10;
    param_1[2] = (ulonglong)pbVar18;
    param_1[3] = 0x10;
    *param_1 = 0x8000000000000000;
  }
  else {
    plStack_58 = (longlong *)pdb_140ae2fa0();
    lVar17 = plVar21[7];
    pdb_140b86cc0(auStack_208,lVar17);
    bStack_88 = pdb_140b86ce0(lVar17);
    bStack_88 = bStack_88 & 1;
    pbStack_60 = (byte *)CONCAT44(pbStack_60._4_4_,*(undefined4 *)(lVar9 + 0x70));
    lVar17 = plVar21[2];
    uStack_8c = extraout_XMM0_Da;
    pdb_140a34930(&uStack_b0);
    pbStack_70 = (byte *)plVar21[6];
    uStack_84 = *(undefined4 *)(lVar9 + 0x68);
    uVar4 = *(uint *)(lVar9 + 0x6c);
    pbVar25 = (byte *)(ulonglong)uVar4;
    uVar24 = (undefined1)uVar4;
    uVar10 = pdb_140bbc920(lVar9);
    lVar22 = lVar17;
    uVar11 = pdb_140ae4d70(lVar9);
    pdb_14017f1f0(&lStack_1a0,uVar11,lVar22);
    pbStack_50 = pbStack_198;
    pdb_1409ddde0(&uStack_118);
    pbVar13 = (byte *)((ulonglong)pbStack_60 & 0xffffffff);
    plVar21 = plStack_58;
    pdb_1405f1e60(&pbStack_1f8,&pbStack_68,plStack_58,pbVar13,&uStack_b0,pbStack_70,auStack_208,
                  &uStack_8c,uStack_84,uVar4,uVar10,lVar17,pbStack_50,uStack_190,0,&uStack_118,
                  _DAT_143ca44b0[5]);
    pcVar19 = pcStack_1f0;
    pbVar18 = pbStack_1f8;
    if (!SBORROW8(0,(longlong)pbStack_1f8)) {
      if (lStack_1d8 != 0) {
        uVar12 = lStack_1d8 * 0x18 + 0x27U & 0xfffffffffffffff0;
        arg1 = lStack_1d8 + uVar12 + 0x11;
        if (arg1 != 0) {
          plVar21 = (longlong *)0x10;
          pub_1406abac0((byte *)(uStack_1e0 - uVar12),arg1,0x10);
        }
      }
      uVar12 = 0;
      if (pbVar18 != (byte *)0x0) {
        uVar12 = (longlong)pbVar18 << 3;
        plVar21 = (longlong *)0x8;
        pub_1406abac0((byte *)pcVar19,uVar12,8);
      }
      uVar20 = (undefined1)uVar12;
      pbVar18 = (byte *)0x0;
      if (lStack_1a0 != 0) {
        pbVar18 = (byte *)(lStack_1a0 << 4);
        plVar21 = (longlong *)0x8;
        pub_1406abac0(pbStack_50,(ulonglong)pbVar18,8);
      }
      if ((int)lVar5 != 1) {
        pbVar25 = (byte *)0x8000000000000000;
        plVar15 = _DAT_143ca44b0;
        goto LAB_1403c67c8;
      }
      lVar5 = _DAT_143ca44b0[1];
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f4efd0);
      }
      pbVar18 = *(byte **)(lVar5 + 0x10);
      if (-1 < (longlong)pbVar18) {
        pcVar19 = (code *)(ulonglong)*(byte *)(lVar5 + 0x98);
        if (pbVar18 == (byte *)0x0) {
          pbStack_60 = (byte *)0x1;
        }
        else {
          lVar9 = *(longlong *)(lVar5 + 8);
          pdb_14007ee60();
          uVar10 = 1;
          uVar20 = 1;
          pbVar13 = pub_1406abab0((ulonglong)pbVar18,1);
          if (pbVar13 == (byte *)0x0) goto LAB_1403c6526;
          pbVar25 = pbVar18 + -1;
          if (pbVar18 < pbVar18 + -1) {
            pbVar25 = pbVar18;
          }
          if (pbVar25 < (byte *)0x20) {
            lVar23 = 0;
            pbVar16 = pbVar18;
            lVar17 = lVar9;
          }
          else {
            pbVar25 = pbVar25 + 1;
            uVar12 = 0x20;
            if (((ulonglong)pbVar25 & 0x1f) != 0) {
              uVar12 = (ulonglong)((uint)pbVar25 & 0x1f);
            }
            lVar23 = (longlong)pbVar25 - uVar12;
            pbVar16 = pbVar18 + -lVar23;
            lVar17 = lVar9 + lVar23;
            lVar22 = 0;
            do {
              puVar1 = (undefined4 *)(lVar9 + lVar22);
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar22);
              uVar10 = *puVar2;
              uVar11 = puVar2[1];
              pbVar25 = pbVar13 + lVar22;
              *(undefined4 *)pbVar25 = *puVar1;
              *(undefined4 *)(pbVar25 + 4) = uVar6;
              *(undefined4 *)(pbVar25 + 8) = uVar7;
              *(undefined4 *)(pbVar25 + 0xc) = uVar8;
              *(undefined8 *)(pbVar13 + lVar22 + 0x10) = uVar10;
              *(undefined8 *)(pbVar13 + lVar22 + 0x10 + 8) = uVar11;
              lVar22 = lVar22 + 0x20;
            } while (lVar23 != lVar22);
          }
          pbVar25 = pbVar18 + lVar9;
          pbVar14 = (byte *)0x0;
          do {
            pbStack_60 = pbVar13;
            if (pbVar14 + lVar17 == pbVar25) break;
            (pbVar13 + lVar23)[(longlong)pbVar14] = pbVar14[lVar17];
            pbVar14 = pbVar14 + 1;
          } while (pbVar16 != pbVar14);
        }
        uVar24 = SUB81(pbVar25,0);
        pbStack_50 = pbVar18;
        if (SBORROW8(0,*(longlong *)(lVar5 + 0x30))) {
          plStack_58 = (longlong *)0x8000000000000000;
        }
        else {
          uVar3 = *(undefined1 *)(lVar5 + 0x58);
          pdb_140f60be0(&uStack_118,lVar5 + 0x30);
          uStack_f0 = CONCAT31(uStack_f0._1_3_,uVar3);
          uVar10 = *(undefined8 *)(lVar5 + 0x48);
          uStack_158 = *(undefined8 *)(lVar5 + 0x50);
          uStack_100 = (undefined1)uVar10;
          uStack_ff = (undefined1)((ulonglong)uVar10 >> 8);
          uStack_fe = (undefined1)((ulonglong)uVar10 >> 0x10);
          uStack_fd = (undefined1)((ulonglong)uVar10 >> 0x18);
          uStack_fc = (undefined4)((ulonglong)uVar10 >> 0x20);
          uStack_f8 = (uint)uStack_158;
          uStack_f4 = (undefined4)((ulonglong)uStack_158 >> 0x20);
          uStack_148 = (uint)*(undefined8 *)(lVar5 + 0x60);
          uStack_144 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x60) >> 0x20);
          uStack_140 = *(undefined4 *)(lVar5 + 0x68);
          uVar20 = *(undefined1 *)(lVar5 + 0x6c);
          uVar24 = *(undefined1 *)(lVar5 + 0x6d);
          plStack_58 = uStack_118;
          pbStack_70 = pbStack_110;
          uStack_160 = (undefined4)uVar10;
          uStack_168 = uStack_108;
          uStack_164 = uStack_104;
          uStack_15c = uStack_fc;
          uStack_150 = CONCAT31(uStack_f0._1_3_,uVar3);
          uStack_14c = uStack_ec;
          uStack_14b = uStack_eb;
          uStack_149 = uStack_e9;
        }
        pdb_140174e40(&uStack_b0,lVar5 + 0x18);
        if (SBORROW8(0,*(longlong *)(lVar5 + 0x70))) {
          uStack_118 = (longlong *)0x8000000000000000;
        }
        else {
          uVar6 = *(undefined4 *)(lVar5 + 0x88);
          uStack_fc = *(undefined4 *)(lVar5 + 0x8c);
          uStack_f8 = *(undefined4 *)(lVar5 + 0x90);
          uStack_f4 = *(undefined4 *)(lVar5 + 0x94);
          uStack_100 = (undefined1)uVar6;
          uStack_ff = (undefined1)((uint)uVar6 >> 8);
          uStack_fe = (undefined1)((uint)uVar6 >> 0x10);
          uStack_fd = (undefined1)((uint)uVar6 >> 0x18);
          pdb_140f60be0(&uStack_118,lVar5 + 0x70);
          pcStack_1f0 = (code *)CONCAT44(uStack_104,uStack_108);
          pbStack_1f8 = pbStack_110;
          uStack_1e8 = CONCAT44(uStack_fc,
                                CONCAT13(uStack_fd,
                                         CONCAT12(uStack_fe,CONCAT11(uStack_ff,uStack_100))));
          uStack_1e0 = CONCAT44(uStack_f4,uStack_f8);
        }
        uStack_f8 = uStack_148;
        uStack_f4 = uStack_144;
        uStack_f0 = uStack_140;
        pbStack_110 = (byte *)CONCAT44(uStack_15c,uStack_160);
        uStack_108 = (undefined4)uStack_158;
        uStack_104 = (undefined4)((ulonglong)uStack_158 >> 0x20);
        uStack_100 = (undefined1)uStack_150;
        uStack_ff = (undefined1)((uint)uStack_150 >> 8);
        uStack_fe = (undefined1)((uint)uStack_150 >> 0x10);
        uStack_fd = (undefined1)((uint)uStack_150 >> 0x18);
        uStack_fc = (undefined4)
                    (CONCAT17(uStack_149,CONCAT25(uStack_14b,CONCAT14(uStack_14c,uStack_150))) >>
                    0x20);
        uStack_138 = CONCAT44(uStack_ac,uStack_b0);
        uStack_130 = CONCAT44(uStack_a4,uStack_a8);
        uStack_128 = CONCAT17(uStack_99,uStack_a0);
        uVar10 = *(undefined8 *)(lVar5 + 0xa0);
        uStack_ac._3_1_ = (undefined1)uVar10;
        uStack_a8 = (undefined4)((ulonglong)uVar10 >> 8);
        uStack_a4._0_3_ = (undefined3)((ulonglong)uVar10 >> 0x28);
        uStack_a4._3_1_ = (undefined1)*(undefined8 *)(lVar5 + 0xa8);
        uStack_a0 = (undefined7)((ulonglong)*(undefined8 *)(lVar5 + 0xa8) >> 8);
        plVar15 = uStack_118;
        pbVar25 = pbStack_50;
        pbVar18 = pbStack_60;
        plVar21 = plStack_58;
        pbVar13 = pbStack_70;
        uStack_118 = (longlong *)CONCAT44(uStack_164,uStack_168);
LAB_1403c67c8:
        param_1[2] = uStack_178;
        param_1[3] = uStack_170;
        *param_1 = uStack_188;
        param_1[1] = (ulonglong)pbStack_180;
        param_1[4] = (ulonglong)pbVar25;
        param_1[5] = (ulonglong)pbVar18;
        param_1[6] = (ulonglong)pbVar25;
        param_1[7] = uStack_138;
        param_1[8] = uStack_130;
        param_1[9] = uStack_128;
        param_1[10] = (ulonglong)plVar21;
        param_1[0xb] = (ulonglong)pbVar13;
        param_1[0xc] = (ulonglong)uStack_118;
        param_1[0xd] = (ulonglong)pbStack_110;
        param_1[0xe] = CONCAT44(uStack_104,uStack_108);
        param_1[0xf] = CONCAT44(uStack_fc,
                                CONCAT13(uStack_fd,
                                         CONCAT12(uStack_fe,CONCAT11(uStack_ff,uStack_100))));
        *(ulonglong *)((longlong)param_1 + 0x7c) = CONCAT44(uStack_f8,uStack_fc);
        *(ulonglong *)((longlong)param_1 + 0x84) = CONCAT44(uStack_f0,uStack_f4);
        *(undefined1 *)((longlong)param_1 + 0x8c) = uVar20;
        *(undefined1 *)((longlong)param_1 + 0x8d) = uVar24;
        param_1[0x12] = (ulonglong)plVar15;
        param_1[0x13] = (ulonglong)pbStack_1f8;
        param_1[0x14] = (ulonglong)pcStack_1f0;
        *(undefined4 *)(param_1 + 0x15) = (undefined4)uStack_1e8;
        *(undefined4 *)((longlong)param_1 + 0xac) = uStack_1e8._4_4_;
        *(undefined4 *)(param_1 + 0x16) = (undefined4)uStack_1e0;
        *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_1e0._4_4_;
        *(char *)(param_1 + 0x17) = (char)pcVar19;
        param_1[0x19] = CONCAT71(uStack_a0,uStack_a4._3_1_);
        *(undefined4 *)((longlong)param_1 + 0xb9) = uStack_b0;
        *(undefined4 *)((longlong)param_1 + 0xbd) = uStack_ac;
        *(undefined4 *)((longlong)param_1 + 0xc1) = uStack_a8;
        *(undefined4 *)((longlong)param_1 + 0xc5) = uStack_a4;
        CloseHandle(pbStack_68);
        return param_1;
      }
      uVar10 = 0;
LAB_1403c6526:
      pdb_142dc7e2a(uVar10,pbVar18);
LAB_1403c68b8:
                    /* WARNING: Does not return */
      pcVar19 = (code *)invalidInstructionException();
      (*pcVar19)();
    }
    pcStack_80 = pcStack_1f0;
    ppcStack_1b0 = &pcStack_80;
    pcStack_1a8 = pdb_140f36c30;
    pdb_140f60760(&uStack_138,&UNK_142f4eefe,&ppcStack_1b0);
    pdb_140f36c40(&pcStack_80);
    param_1[1] = uStack_138;
    param_1[2] = uStack_130;
    param_1[3] = uStack_128;
    *param_1 = 0x8000000000000000;
    if (lStack_1a0 != 0) {
      pub_1406abac0(pbStack_50,lStack_1a0 << 4,8);
    }
  }
  CloseHandle(pbStack_68);
joined_r0x0001403c644d:
  if (uStack_188 != 0) {
    pub_1406abac0(pbStack_78,uStack_188,1);
  }
  return param_1;
}

