// VA 0x1406b1e20, PDB extent 2739 bytes
// crash_reporter_gui::Controls::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: crash_reporter_gui::Controls::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 2739 */

undefined8 *
pdb_1406b1e20(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  byte *pbVar18;
  char cVar19;
  byte *pbVar20;
  longlong lVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  longlong lVar24;
  byte bVar25;
  undefined8 uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
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
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 *puStack_78;
  ulonglong *puStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  char cStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  char cStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_78 = param_2;
  puStack_70 = param_3;
  if (*param_4 == -0x7ffffffffffffffc) {
    uStack_138 = 0x8000000000000005;
    pbStack_68 = (byte *)*param_3;
    if (SBORROW8(0,(longlong)pbStack_68)) goto LAB_1406b1e79;
LAB_1406b1ee5:
    pbStack_60 = (byte *)puStack_70[1];
    pdb_140f55d10(&uStack_d8,pbStack_60,puStack_70[2]);
    if (pbStack_68 != (byte *)0x0) {
      pub_1406abac0(pbStack_60,(ulonglong)pbStack_68,1);
    }
    pbVar20 = uStack_d0;
    uVar26 = uStack_c8;
    pbVar18 = (byte *)uStack_d8;
    if (SBORROW8(0,uStack_d8)) {
      uStack_4f = 1;
      uStack_50 = 1;
      pdb_1404b38e0(&uStack_d0);
      pbVar20 = (byte *)0x1;
      uVar26 = 0;
      pbVar18 = (byte *)0;
    }
  }
  else {
    uStack_4b = 1;
    uStack_4c = 0;
    uStack_4d = 1;
    pdb_140fba3c0(&uStack_d8,param_4);
    uStack_f8 = uStack_98;
    uStack_f0 = uStack_90;
    uStack_130 = (undefined4)uStack_d0;
    uStack_12c = uStack_d0._4_4_;
    uStack_128 = (undefined4)uStack_c8;
    uStack_124 = uStack_c8._4_4_;
    uStack_120 = (undefined4)uStack_c0;
    uStack_11c = uStack_c0._4_4_;
    uStack_118 = (undefined4)uStack_b8;
    uStack_114 = uStack_b8._4_4_;
    uStack_110 = (undefined4)uStack_b0;
    uStack_10c = uStack_b0._4_4_;
    uStack_108 = (undefined4)uStack_a8;
    uStack_104 = uStack_a8._4_4_;
    uStack_100 = (undefined4)uStack_a0;
    uStack_fc = uStack_a0._4_4_;
    uStack_138 = uStack_d8;
    pbStack_68 = (byte *)*puStack_70;
    if (!SBORROW8(0,(longlong)pbStack_68)) goto LAB_1406b1ee5;
LAB_1406b1e79:
    pbStack_60 = (byte *)0x0;
    pbVar20 = (byte *)0x1;
    uVar26 = 0;
    pbVar18 = pbStack_60;
  }
  pbStack_60 = pbVar18;
  bStack_49 = 1;
  uStack_4a = 1;
  pbStack_68 = pbVar20;
  cVar19 = pdb_1406be420(pbVar20,uVar26,&UNK_142f98168,0xb);
  cStack_4e = '\x01';
  if (cVar19 == '\0') {
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(pbStack_68,uVar26,&UNK_142f98173,0x1c);
    if (cVar19 == '\0') {
      bStack_49 = 1;
      uStack_4a = 1;
      cStack_4e = pdb_1406be420(pbStack_68,uVar26,&UNK_142f9818f,0x1f);
    }
  }
  cStack_51 = *(char *)((longlong)puStack_78 + 0x54);
  lVar27 = puStack_78[1];
  lStack_e0 = puStack_78[2];
  lVar1 = lVar27 + lStack_e0 * 0x18;
  lVar28 = lVar27;
  do {
    lVar21 = lVar28;
    lVar24 = lVar27;
    if (lVar21 == lVar1) break;
    uVar26 = *(undefined8 *)(lVar21 + 8);
    uVar2 = *(undefined8 *)(lVar21 + 0x10);
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f981cf,0xd);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f981dc,0xd);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f981e9,0xf);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f981f8,0xe);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f98206,0x10);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f98216,0x11);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f98227,0xb);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f98232,0xc);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f9823e,0xc);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f9824a,0xc);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f98256,0x12);
    if (cVar19 != '\0') break;
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(uVar26,uVar2,&UNK_142f98268,0x13);
    lVar28 = lVar21 + 0x18;
  } while (cVar19 == '\0');
  do {
    if (lVar24 == lVar1) {
      if ((cStack_51 == '\0') && (lVar21 != lVar1 || cStack_4e != '\0')) {
        uStack_d8 = 0x8000000000000005;
        goto LAB_1406b244e;
      }
      lVar24 = 8;
      lVar28 = lVar27;
      goto LAB_1406b22e0;
    }
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(*(undefined8 *)(lVar24 + 8),*(undefined8 *)(lVar24 + 0x10),&UNK_142f98299
                           ,0xe);
    lVar24 = lVar24 + 0x18;
  } while (cVar19 == '\0');
  uStack_d8 = 0x8000000000000008;
  goto LAB_1406b244e;
  while( true ) {
    bStack_49 = 1;
    uStack_4a = 1;
    cVar19 = pdb_1406be420(*(undefined8 *)(lVar28 + 8),*(undefined8 *)(lVar28 + 0x10),&UNK_142f981ae
                           ,0xe);
    lVar28 = lVar28 + 0x18;
    lVar24 = lVar24 + -1;
    if (lVar24 != 0) {
      cVar19 = '\x02' - cVar19;
    }
    if (cVar19 != '\x02') break;
LAB_1406b22e0:
    if (lVar28 == lVar1) goto LAB_1406b232d;
  }
  if (cVar19 == '\0') {
LAB_1406b232d:
    lVar24 = 8;
    lVar28 = lVar27;
    do {
      if (lVar28 == lVar1) goto LAB_1406b238d;
      bStack_49 = 1;
      uStack_4a = 1;
      cVar19 = pdb_1406be420(*(undefined8 *)(lVar28 + 8),*(undefined8 *)(lVar28 + 0x10),
                             &UNK_142f981bc,0x13);
      lVar28 = lVar28 + 0x18;
      lVar24 = lVar24 + -1;
      if (lVar24 != 0) {
        cVar19 = '\x02' - cVar19;
      }
    } while (cVar19 == '\x02');
    if (cVar19 == '\0') {
LAB_1406b238d:
      if (lStack_e0 != 0) {
        bStack_49 = 1;
        uStack_4a = 1;
        cVar19 = pdb_1406be420(*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar27 + 0x10),
                               &UNK_142f9828d,0xc);
        if (cVar19 != '\0') {
          uStack_d8 = 0x8000000000000006;
          goto LAB_1406b244e;
        }
      }
      if (uStack_138 != 0x8000000000000005) {
        uStack_98 = uStack_f8;
        uStack_90 = uStack_f0;
        uStack_d0 = (byte *)CONCAT44(uStack_12c,uStack_130);
        uStack_c8 = CONCAT44(uStack_124,uStack_128);
        uStack_c0 = CONCAT44(uStack_11c,uStack_120);
        uStack_b8 = CONCAT44(uStack_114,uStack_118);
        uStack_b0 = CONCAT44(uStack_10c,uStack_110);
        uStack_a8 = CONCAT44(uStack_104,uStack_108);
        uStack_a0 = CONCAT44(uStack_fc,uStack_100);
        uStack_d8 = uStack_138;
        uStack_88 = 0;
        bVar25 = 0;
        goto LAB_1406b245c;
      }
      do {
        if (lVar27 == lVar1) {
          if (lVar21 != lVar1) {
            uStack_d8 = 0x8000000000000007;
            goto LAB_1406b244e;
          }
          if (cStack_4e == '\0') {
            uStack_d8 = 0x800000000000000d;
          }
          else {
            uStack_d8 = 0x800000000000000b;
          }
          bVar25 = 1;
          goto LAB_1406b245c;
        }
        bStack_49 = 1;
        uStack_4a = 1;
        cVar19 = pdb_1406be420(*(undefined8 *)(lVar27 + 8),*(undefined8 *)(lVar27 + 0x10),
                               &UNK_142f9827b,0x12);
        lVar27 = lVar27 + 0x18;
      } while (cVar19 == '\0');
      uStack_d8 = 0x800000000000000a;
    }
    else {
      uStack_d8 = 0x8000000000000009;
    }
  }
  else {
    uStack_d8 = 0x800000000000000c;
  }
LAB_1406b244e:
  bVar25 = 1;
LAB_1406b245c:
  param_1[10] = puStack_78[10];
  uVar26 = puStack_78[9];
  param_1[8] = puStack_78[8];
  param_1[9] = uVar26;
  uVar26 = *puStack_78;
  uVar2 = puStack_78[1];
  uVar11 = puStack_78[2];
  uVar12 = puStack_78[3];
  uVar13 = puStack_78[4];
  uVar14 = puStack_78[5];
  uVar15 = puStack_78[7];
  param_1[6] = puStack_78[6];
  param_1[7] = uVar15;
  param_1[4] = uVar13;
  param_1[5] = uVar14;
  param_1[2] = uVar11;
  param_1[3] = uVar12;
  *param_1 = uVar26;
  param_1[1] = uVar2;
  if (*param_7 == -0x7ffffffffffffff3) {
    param_1[0x15] = CONCAT71(uStack_87,uStack_88);
    param_1[0x13] = uStack_98;
    param_1[0x14] = uStack_90;
    param_1[0x11] = uStack_a8;
    param_1[0x12] = uStack_a0;
    param_1[0xf] = uStack_b8;
    param_1[0x10] = uStack_b0;
    param_1[0xd] = uStack_c8;
    param_1[0xe] = uStack_c0;
    param_1[0xb] = uStack_d8;
    param_1[0xc] = uStack_d0;
    param_1[0x16] = param_5;
    param_1[0x17] = param_6;
    *(undefined1 *)(param_1 + 0x1a) = 2;
    *(undefined4 *)(param_1 + 0x19) = 0x3b9aca01;
    uVar23 = 1;
    uVar22 = 1;
  }
  else {
    param_1[0x15] = param_7[10];
    lVar1 = param_7[9];
    param_1[0x13] = param_7[8];
    param_1[0x14] = lVar1;
    lVar1 = *param_7;
    uVar3 = *(undefined4 *)((longlong)param_7 + 4);
    lVar27 = param_7[1];
    uVar4 = *(undefined4 *)((longlong)param_7 + 0xc);
    lVar28 = param_7[2];
    uVar5 = *(undefined4 *)((longlong)param_7 + 0x14);
    lVar24 = param_7[3];
    uVar6 = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar21 = param_7[4];
    uVar7 = *(undefined4 *)((longlong)param_7 + 0x24);
    lVar16 = param_7[5];
    uVar8 = *(undefined4 *)((longlong)param_7 + 0x2c);
    uVar9 = *(undefined4 *)((longlong)param_7 + 0x34);
    lVar17 = param_7[7];
    uVar10 = *(undefined4 *)((longlong)param_7 + 0x3c);
    *(int *)(param_1 + 0x11) = (int)param_7[6];
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar9;
    *(int *)(param_1 + 0x12) = (int)lVar17;
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar10;
    *(int *)(param_1 + 0xf) = (int)lVar21;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar7;
    *(int *)(param_1 + 0x10) = (int)lVar16;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar8;
    *(int *)(param_1 + 0xd) = (int)lVar28;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
    *(int *)(param_1 + 0xe) = (int)lVar24;
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar6;
    *(int *)(param_1 + 0xb) = (int)lVar1;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar3;
    *(int *)(param_1 + 0xc) = (int)lVar27;
    *(undefined4 *)((longlong)param_1 + 100) = uVar4;
    param_1[0x16] = param_5;
    param_1[0x17] = param_6;
    *(undefined1 *)(param_1 + 0x1a) = 2;
    *(undefined4 *)(param_1 + 0x19) = 0x3b9aca01;
    if (uStack_d8 < 0x8000000000000005) {
      uStack_4a = 0;
      bStack_49 = bVar25;
      pdb_140fb6210(&uStack_d8);
    }
    uVar23 = 0;
    uVar22 = 0;
  }
  if (pbStack_60 != (byte *)0x0) {
    pub_1406abac0(pbStack_68,(ulonglong)pbStack_60,1);
    uVar22 = uVar23;
  }
  if ((uStack_138 != 0x8000000000000005 & bVar25) != 0) {
    uStack_4c = 1;
    uStack_4d = 0;
    uStack_4b = uVar22;
    pdb_140fb6210(&uStack_138);
  }
  return param_1;
}

