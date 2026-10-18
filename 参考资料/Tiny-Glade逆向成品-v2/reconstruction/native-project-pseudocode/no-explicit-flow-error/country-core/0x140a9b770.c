// VA 0x140a9b770, PDB extent 2391 bytes
// country_core::geometry::sphere::impl$2::try_from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/sphere.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::geometry::sphere::impl$2::try_from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/geometry/sphere.rs
   Extent: 2391 */

undefined8 * pdb_140a9b770(undefined8 *param_1,byte *param_2,float param_3)

{
  code *pcVar1;
  float fVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  ulonglong uVar7;
  float *pfVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  longlong lStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  byte *pbStack_1a0;
  ulonglong uStack_198;
  longlong lStack_190;
  ulonglong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  longlong lStack_110;
  byte *pbStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  float fStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_d8 = param_2;
  fStack_d0 = param_3;
  if ((byte *)0x4f < param_2) {
    lStack_1c0 = (longlong)(param_2 + 1) * (longlong)(param_2 + 1) * 10 + 2;
    uStack_168 = &pbStack_d8;
    uStack_160 = pdb_140f72a40;
    uStack_158 = &lStack_1c0;
    uStack_150 = pdb_140f72a40;
    pdb_140f60760(param_1 + 1,&UNK_14304605e,&uStack_168);
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pdb_142d908b0(&lStack_1c0);
  uVar7 = uStack_1b0 * 0xc;
  pbVar13 = (byte *)0x4;
  pbVar12 = (byte *)0x4;
  pbVar14 = (byte *)0x4;
  uStack_60 = uStack_1b0;
  uStack_90 = uVar7;
  if (uStack_1b0 != 0) {
    pdb_14007ee60();
    pbVar12 = pub_1406abab0(uVar7,4);
    if (pbVar12 == (byte *)0x0) {
      pdb_142dc7e2a(4,uVar7);
      goto LAB_140a9bdc0;
    }
    if (uStack_1b0 == 1) {
      uVar3 = 0;
LAB_140a9b8de:
      pfVar8 = (float *)(lStack_1b8 + uVar3 * 0x10);
      fVar2 = pfVar8[2];
      *(ulonglong *)(pbVar12 + uVar3 * 0xc) = CONCAT44(fStack_d0 * pfVar8[1],fStack_d0 * *pfVar8);
      *(float *)(pbVar12 + uVar3 * 0xc + 8) = fStack_d0 * fVar2;
    }
    else {
      pfVar8 = (float *)(lStack_1b8 + 0x10);
      uVar3 = 0;
      pbVar14 = pbVar12;
      do {
        fVar2 = pfVar8[-2];
        *(ulonglong *)pbVar14 = CONCAT44(pfVar8[-3] * fStack_d0,pfVar8[-4] * fStack_d0);
        *(float *)(pbVar14 + 8) = fVar2 * fStack_d0;
        fVar2 = pfVar8[2];
        *(ulonglong *)(pbVar14 + 0xc) = CONCAT44(pfVar8[1] * fStack_d0,*pfVar8 * fStack_d0);
        *(float *)(pbVar14 + 0x14) = fVar2 * fStack_d0;
        uVar3 = uVar3 + 2;
        pfVar8 = pfVar8 + 8;
        pbVar14 = pbVar14 + 0x18;
      } while ((uStack_1b0 & 0xfffffffffffffffe) != uVar3);
      if ((uStack_1b0 & 1) != 0) goto LAB_140a9b8de;
    }
    pdb_14007ee60();
    pbVar14 = pub_1406abab0(uVar7,4);
    if (pbVar14 == (byte *)0x0) {
      uStack_4c = 1;
      pbStack_88 = pbVar12;
      pdb_142dc7e2a(4,uVar7);
      goto LAB_140a9bdc0;
    }
    if (uStack_1b0 < 4) {
      pbVar6 = (byte *)0x0;
    }
    else {
      param_2 = (byte *)(uStack_1b0 & 0xfffffffffffffffc);
      puVar10 = (undefined8 *)(lStack_1b8 + 0x30);
      pbVar6 = (byte *)0x0;
      pbVar11 = pbVar14;
      do {
        uVar9 = puVar10[-6];
        *(undefined4 *)(pbVar11 + 8) = *(undefined4 *)(puVar10 + -5);
        *(undefined8 *)pbVar11 = uVar9;
        uVar9 = puVar10[-4];
        *(undefined4 *)(pbVar11 + 0x14) = *(undefined4 *)(puVar10 + -3);
        *(undefined8 *)(pbVar11 + 0xc) = uVar9;
        uVar9 = puVar10[-2];
        *(undefined4 *)(pbVar11 + 0x20) = *(undefined4 *)(puVar10 + -1);
        *(undefined8 *)(pbVar11 + 0x18) = uVar9;
        uVar9 = *puVar10;
        *(undefined4 *)(pbVar11 + 0x2c) = *(undefined4 *)(puVar10 + 1);
        *(undefined8 *)(pbVar11 + 0x24) = uVar9;
        pbVar6 = pbVar6 + 4;
        puVar10 = puVar10 + 8;
        pbVar11 = pbVar11 + 0x30;
      } while (param_2 != pbVar6);
      if ((uStack_1b0 & 3) == 0) goto LAB_140a9b9df;
    }
    param_2 = pbVar14 + (longlong)pbVar6 * 0xc;
    lStack_1b8 = lStack_1b8 + (longlong)pbVar6 * 0x10;
    uVar7 = 0;
    do {
      uVar9 = *(undefined8 *)(lStack_1b8 + uVar7);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lStack_1b8 + 8 + uVar7);
      *(undefined8 *)param_2 = uVar9;
      param_2 = param_2 + 0xc;
      uVar7 = uVar7 + 0x10;
    } while (((uint)uStack_1b0 & 3) << 4 != uVar7);
  }
LAB_140a9b9df:
  uVar7 = uStack_198 * 8;
  uStack_a8 = uStack_198;
  pbStack_a0 = pbVar14;
  pbStack_68 = pbVar12;
  if (uStack_198 != 0) {
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(uVar7,4);
    if (pbVar13 == (byte *)0x0) {
      uStack_4d = 1;
      uStack_4e = 1;
      pdb_142dc7e2a(4,uVar7);
      goto LAB_140a9bdc0;
    }
    pub_142e32760(pbVar13,pbStack_1a0,uVar7);
    param_2 = pbStack_1a0;
  }
  lVar4 = (lStack_170 + 1) * (lStack_170 + 1);
  uVar15 = lVar4 * 0x14;
  uVar3 = lVar4 * 0x50;
  uStack_e0 = uVar7;
  pbStack_98 = pbVar13;
  if (uVar3 < 0x7ffffffffffffffd && uVar15 >> 0x3e == 0) {
    if (uVar3 == 0) {
      uStack_b8 = (byte *)0x4;
      uVar15 = 0;
LAB_140a9bacf:
      uStack_b0 = 0;
      uVar7 = 0;
      uStack_c0 = uVar15;
      while( true ) {
        if (0x13 < uVar7) {
          uStack_49 = 1;
          uStack_4a = 1;
          uStack_4b = 1;
          plVar5 = (longlong *)pdb_140f3bda0();
          if ((char)plVar5[2] == '\x01') {
            lStack_110 = *plVar5;
            param_2 = (byte *)plVar5[1];
          }
          else {
            uStack_49 = 1;
            uStack_4a = 1;
            uStack_4b = 1;
            lStack_110 = pdb_140f4fd10();
            *plVar5 = lStack_110;
            plVar5[1] = (longlong)param_2;
            *(undefined1 *)(plVar5 + 2) = 1;
          }
          *plVar5 = lStack_110 + 1;
          uStack_120 = _DAT_143046120;
          uStack_118 = _UNK_143046128;
          uStack_130 = _DAT_143046110;
          uStack_128 = _UNK_143046118;
          uStack_150 = (code *)0x8000000000000000;
          puStack_100 = &UNK_143046058;
          uStack_f8 = 6;
          uStack_f0 = 0;
          uStack_168._0_4_ = (undefined4)uStack_c0;
          uStack_168._4_4_ = uStack_c0._4_4_;
          uStack_160._0_4_ = SUB84(uStack_b8,0);
          uStack_160._4_4_ = uStack_b8._4_4_;
          uStack_158 = (longlong *)uStack_b0;
          uStack_80 = uStack_60;
          pbStack_78 = pbStack_68;
          uStack_70 = uStack_60;
          uStack_52 = 1;
          uStack_53 = 1;
          pbStack_108 = param_2;
          pdb_140c93200(&uStack_168,&UNK_143045ae8,0xf,&uStack_80);
          uStack_80 = uStack_60;
          pbStack_78 = pbStack_a0;
          uStack_70 = uStack_60;
          uStack_52 = 1;
          uStack_53 = 0;
          pdb_140c93200(&uStack_168,&UNK_143045bc9,0xd,&uStack_80);
          uStack_80 = uStack_a8;
          pbStack_78 = pbStack_98;
          uStack_70 = uStack_a8;
          uStack_52 = 0;
          uStack_53 = 0;
          pdb_140c92a00(&uStack_168,&UNK_143045bc0,9,&uStack_80);
          param_1[0xe] = uStack_f8;
          param_1[0xf] = CONCAT71(uStack_ef,uStack_f0);
          param_1[0xc] = pbStack_108;
          param_1[0xd] = puStack_100;
          param_1[10] = uStack_118;
          param_1[0xb] = lStack_110;
          param_1[8] = uStack_128;
          param_1[9] = uStack_120;
          *(undefined4 *)(param_1 + 6) = uStack_138;
          *(undefined4 *)((longlong)param_1 + 0x34) = uStack_134;
          *(undefined4 *)(param_1 + 7) = (undefined4)uStack_130;
          *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_130._4_4_;
          *(undefined4 *)(param_1 + 4) = uStack_148;
          *(undefined4 *)((longlong)param_1 + 0x24) = uStack_144;
          *(undefined4 *)(param_1 + 5) = uStack_140;
          *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_13c;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_158;
          *(undefined4 *)((longlong)param_1 + 0x14) = uStack_158._4_4_;
          *(undefined4 *)(param_1 + 3) = (undefined4)uStack_150;
          *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_150._4_4_;
          *(undefined4 *)param_1 = (undefined4)uStack_168;
          *(undefined4 *)((longlong)param_1 + 4) = uStack_168._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_160;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_160._4_4_;
          pdb_14096c270(&lStack_1c0);
          return param_1;
        }
        if (uStack_188 <= uVar7) break;
        lVar4 = uVar7 * 0x58;
        uVar7 = uVar7 + 1;
        uStack_49 = 1;
        uStack_4a = 1;
        uStack_4b = 1;
        param_2 = (byte *)&uStack_c0;
        pdb_141c29cf0(lVar4 + lStack_190,&uStack_c0,uStack_180,uStack_178);
      }
      uStack_49 = 1;
      uStack_4a = 1;
      uStack_4b = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar7,uStack_188,&UNK_143070868);
    }
    pdb_14007ee60();
    uVar9 = 4;
    param_2 = (byte *)0x4;
    uStack_b8 = pub_1406abab0(uVar3,4);
    if (uStack_b8 != (byte *)0x0) goto LAB_140a9bacf;
  }
  else {
    uVar9 = 0;
  }
  uStack_4f = 1;
  uStack_50 = 1;
  uStack_51 = 1;
  pdb_142dc7e2a(uVar9,uVar3);
LAB_140a9bdc0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

