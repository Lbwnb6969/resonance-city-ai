// VA 0x141c21da0, PDB extent 1977 bytes
// zune_jpeg::headers::parse_start_of_frame<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: zune_jpeg::headers::parse_start_of_frame<ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1977 */

undefined4 * pdb_141c21da0(undefined4 *param_1,undefined1 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint3 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined1 auStack_4d0 [8];
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined1 auStack_4a8 [432];
  undefined1 auStack_2f8 [16];
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [16];
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined2 uStack_28b;
  undefined1 uStack_289;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined1 auStack_270 [432];
  longlong lStack_c0;
  uint3 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  undefined8 *puStack_60;
  ushort uStack_58;
  ushort uStack_56;
  ushort uStack_54;
  ushort uStack_52;
  uint3 uStack_50;
  char cStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(char *)((longlong)param_3 + 0x71c7) != '\0') {
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(0x1a,1);
    uVar7 = _UNK_14339dc4d;
    if (pbVar9 != (byte *)0x0) {
      *(ulonglong *)(pbVar9 + 10) = CONCAT26(_UNK_14339dc4b,_DAT_14339dc45);
      *(undefined8 *)(pbVar9 + 0x12) = uVar7;
      uVar7 = CONCAT62(_DAT_14339dc45,_UNK_14339dc43);
      *(undefined8 *)pbVar9 = _DAT_14339dc3b;
      *(undefined8 *)(pbVar9 + 8) = uVar7;
      *(undefined1 *)param_1 = 7;
      *(undefined8 *)(param_1 + 2) = 0x1a;
      *(byte **)(param_1 + 4) = pbVar9;
      *(undefined8 *)(param_1 + 6) = 0x1a;
      return param_1;
    }
    uVar15 = pdb_142dc7e2a(1,0x1a);
LAB_141c224a1:
    pdb_142dc7e2a(uVar15,CONCAT44(uStack_288._4_4_,(undefined4)uStack_288));
LAB_141c224ad:
    pdb_142dc7e2a(1,0x24);
    pcVar6 = (code *)swi(3);
    puVar11 = (undefined4 *)(*pcVar6)();
    return puVar11;
  }
  uVar13 = param_3[0xe28];
  uVar5 = param_3[0xe29];
  uVar14 = uVar5 + 2;
  if (uVar13 < uVar14 || 0xfffffffffffffffd < uVar5) {
LAB_141c21efa:
    *(undefined1 *)param_1 = 1;
    *(undefined **)(param_1 + 2) = &UNK_14339d4db;
    *(undefined8 *)(param_1 + 4) = 0xd;
    return param_1;
  }
  lVar10 = param_3[0xe27];
  uVar3 = *(ushort *)(lVar10 + uVar5);
  param_3[0xe29] = uVar14;
  uStack_52 = uVar3 << 8 | uVar3 >> 8;
  if (uVar13 <= uVar14) goto LAB_141c21efa;
  param_3[0xe29] = uVar5 + 3;
  cStack_4a = *(char *)(lVar10 + 2 + uVar5);
  if (cStack_4a == '\b') {
    *(undefined1 *)(param_3 + 0xe38) = 8;
    uVar14 = uVar5 + 5;
    if (uVar13 < uVar14 || 0xfffffffffffffffa < uVar5) goto LAB_141c21efa;
    uVar3 = *(ushort *)(lVar10 + 3 + uVar5);
    param_3[0xe29] = uVar14;
    uStack_54 = uVar3 << 8 | uVar3 >> 8;
    *(ushort *)((longlong)param_3 + 0x71ba) = uStack_54;
    uVar1 = uVar5 + 7;
    if (0xfffffffffffffffd < uVar14 || uVar13 < uVar1) goto LAB_141c21efa;
    uVar4 = *(ushort *)(lVar10 + uVar14);
    param_3[0xe29] = uVar1;
    uStack_56 = uVar4 << 8 | uVar4 >> 8;
    *(ushort *)(param_3 + 0xe37) = uStack_56;
    uStack_88 = (longlong *)param_3[0xe1f];
    if (uStack_88 < (ulonglong)uStack_56) {
      uStack_298 = &uStack_56;
      uStack_290 = 0x40f71140;
      uStack_28c = 1;
      uStack_28b = 0;
      uStack_289 = 0;
      uStack_288 = (ushort *)&uStack_88;
      uStack_280 = 0x40f72a40;
      uStack_27c = 1;
      pdb_140f60760(auStack_2c8,&UNK_14339db8a,&uStack_298);
      uStack_298._7_1_ = (undefined1)auStack_2c8._0_8_;
      uStack_290 = SUB84(auStack_2c8._0_8_,1);
      uStack_28c = SUB81(auStack_2c8._0_8_,5);
      uStack_28b = SUB82(auStack_2c8._0_8_,6);
      uStack_289 = (undefined1)auStack_2c8._8_8_;
      uStack_288._0_4_ = SUB84(auStack_2c8._8_8_,1);
      uStack_288._4_3_ = SUB83(auStack_2c8._8_8_,5);
    }
    else {
      uStack_88 = (longlong *)param_3[0xe20];
      if ((ulonglong)uStack_54 <= uStack_88) {
        if ((uVar3 == 0) || (uVar4 == 0)) {
          *(undefined1 *)param_1 = 4;
          return param_1;
        }
        if (uVar13 <= uVar1) goto LAB_141c21efa;
        param_3[0xe29] = uVar5 + 8;
        bVar2 = *(byte *)(lVar10 + 7 + uVar5);
        uVar13 = (ulonglong)bVar2;
        if (uVar13 == 0) {
          pdb_14007ee60();
          pbVar9 = pub_1406abab0(0x24,1);
          uVar7 = _UNK_14339dada;
          if (pbVar9 != (byte *)0x0) {
            *(undefined8 *)(pbVar9 + 0x10) = _DAT_14339dad2;
            *(undefined8 *)(pbVar9 + 0x18) = uVar7;
            uVar7 = _UNK_14339daca;
            *(undefined8 *)pbVar9 = _DAT_14339dac2;
            *(undefined8 *)(pbVar9 + 8) = uVar7;
            pbVar9[0x20] = 0x65;
            pbVar9[0x21] = 0x72;
            pbVar9[0x22] = 0x6f;
            pbVar9[0x23] = 0x2e;
            *(undefined1 *)param_1 = 7;
            *(undefined8 *)(param_1 + 2) = 0x24;
            *(byte **)(param_1 + 4) = pbVar9;
            *(undefined8 *)(param_1 + 6) = 0x24;
            return param_1;
          }
          goto LAB_141c224ad;
        }
        uStack_58 = (ushort)bVar2 * 3 + 8;
        if (uStack_52 == uStack_58) {
          if (bVar2 == 1) {
            *(undefined1 *)((longlong)param_3 + 0x71ca) = 3;
            *(undefined1 *)(param_3 + 0xe23) = 3;
          }
          *(byte *)((longlong)param_3 + 0x71c1) = bVar2;
          uStack_90 = uVar13;
          uStack_49 = param_2;
          uVar15 = pdb_140225b90(&uStack_298,uVar13,0,8,0x1d8);
          uStack_a8 = CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290)));
          if ((uint)uStack_298 != 1) {
            puStack_b0 = param_3 + 0xe27;
            uStack_a0 = (undefined4)uStack_288;
            uStack_9c = uStack_288._4_4_;
            uStack_98 = 0;
            uStack_50 = 0;
            uVar13 = 0;
            puStack_60 = param_3;
            while( true ) {
              uStack_68 = uVar13;
              if ((byte)uStack_90 <= (byte)uVar13) {
                *(undefined1 *)((longlong)puStack_60 + 0x71c7) = 1;
                *(undefined1 *)((longlong)puStack_60 + 0x71c2) = uStack_49;
                uStack_288._0_4_ = (undefined4)uStack_98;
                uStack_288._4_4_ = (undefined4)((ulonglong)uStack_98 >> 0x20);
                uStack_298._0_4_ = (undefined4)uStack_a8;
                uStack_298._4_4_ = uStack_a8._4_4_;
                uStack_290 = uStack_a0;
                uStack_28c = (undefined1)uStack_9c;
                uStack_28b = (undefined2)((uint)uStack_9c >> 8);
                uStack_289 = (undefined1)((uint)uStack_9c >> 0x18);
                pdb_1404d39b0();
                puStack_60[2] = CONCAT44(uStack_288._4_4_,(undefined4)uStack_288);
                *puStack_60 = CONCAT44(uStack_298._4_4_,(uint)uStack_298);
                puStack_60[1] =
                     CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290)));
                *(undefined1 *)param_1 = 0xd;
                return param_1;
              }
              puVar12 = &uStack_50;
              lVar10 = pdb_14091b8c0(puStack_b0,&uStack_50,3);
              if (lVar10 != 0) break;
              pdb_141c1f9f0(&uStack_298,(ulonglong)uStack_50,uStack_68);
              uVar15 = CONCAT13(uStack_289,CONCAT21(uStack_28b,uStack_28c));
              uStack_88 = (longlong *)CONCAT44(uVar15,uStack_290);
              uStack_80 = (undefined4)uStack_288;
              uStack_7c = uStack_288._4_4_;
              uStack_78 = uStack_280;
              uStack_74 = uStack_27c;
              uStack_70 = uStack_278;
              uStack_6c = uStack_274;
              if (SBORROW8(0,CONCAT44(uStack_298._4_4_,(uint)uStack_298))) {
                *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_27c,uStack_280);
                *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_274,uStack_278);
                *param_1 = uStack_290;
                param_1[1] = uVar15;
                param_1[2] = (undefined4)uStack_288;
                param_1[3] = uStack_288._4_4_;
                goto LAB_141c22481;
              }
              uVar13 = (ulonglong)((int)uStack_68 + 1);
              pub_142e32760(auStack_4a8,auStack_270,0x1b0);
              uStack_4b8 = uStack_78;
              uStack_4b4 = uStack_74;
              uStack_4b0 = uStack_70;
              uStack_4ac = uStack_6c;
              uStack_4c8 = (undefined4)uStack_88;
              uStack_4c4 = uStack_88._4_4_;
              uStack_4c0 = uStack_80;
              uStack_4bc = uStack_7c;
              pdb_1403ee210(&uStack_a8,auStack_4d0);
            }
            uStack_88 = &lStack_c0;
            uStack_80 = 0x402ed400;
            uStack_7c = 1;
            lStack_c0 = lVar10;
            puStack_b8 = puVar12;
            pdb_140f60760(&uStack_290,&UNK_14339dc55,&uStack_88);
            uVar8 = (uint)uStack_298 >> 8;
            uStack_298._0_4_ = (uint)uStack_298 & 0xffffff00;
            param_1[4] = (undefined4)uStack_288;
            param_1[5] = uStack_288._4_4_;
            param_1[6] = uStack_280;
            param_1[7] = uStack_27c;
            *(undefined1 *)param_1 = 0;
            *(ulonglong *)((longlong)param_1 + 1) =
                 CONCAT17((undefined1)uStack_290,CONCAT43(uStack_298._4_4_,(int3)uVar8));
            *(uint *)((longlong)param_1 + 9) = CONCAT13(uStack_28c,uStack_290._1_3_);
            *(undefined2 *)((longlong)param_1 + 0xd) = uStack_28b;
            *(undefined1 *)((longlong)param_1 + 0xf) = uStack_289;
LAB_141c22481:
            pdb_1404d39b0(&uStack_a8);
            return param_1;
          }
          goto LAB_141c224a1;
        }
        uStack_298 = &uStack_58;
        uStack_290 = 0x40f71140;
        uStack_28c = 1;
        uStack_28b = 0;
        uStack_289 = 0;
        uStack_288 = &uStack_52;
        uStack_280 = 0x40f71140;
        uStack_27c = 1;
        pdb_140f60760(auStack_2f8,&UNK_14339dae6,&uStack_298);
        uStack_298._7_1_ = (undefined1)auStack_2f8._0_8_;
        uStack_290 = SUB84(auStack_2f8._0_8_,1);
        uStack_28c = SUB81(auStack_2f8._0_8_,5);
        uStack_28b = SUB82(auStack_2f8._0_8_,6);
        uStack_289 = (undefined1)auStack_2f8._8_8_;
        uStack_288._0_4_ = SUB84(auStack_2f8._8_8_,1);
        uStack_288._4_3_ = SUB83(auStack_2f8._8_8_,5);
        goto LAB_141c21f72;
      }
      uStack_298 = &uStack_54;
      uStack_290 = 0x40f71140;
      uStack_28c = 1;
      uStack_28b = 0;
      uStack_289 = 0;
      uStack_288 = (ushort *)&uStack_88;
      uStack_280 = 0x40f72a40;
      uStack_27c = 1;
      pdb_140f60760(auStack_2e0,&UNK_14339db24,&uStack_298);
      uStack_298._7_1_ = (undefined1)auStack_2e0._0_8_;
      uStack_290 = SUB84(auStack_2e0._0_8_,1);
      uStack_28c = SUB81(auStack_2e0._0_8_,5);
      uStack_28b = SUB82(auStack_2e0._0_8_,6);
      uStack_289 = (undefined1)auStack_2e0._8_8_;
      uStack_288._0_4_ = SUB84(auStack_2e0._8_8_,1);
      uStack_288._4_3_ = SUB83(auStack_2e0._8_8_,5);
      uStack_2b8 = uStack_2d0;
    }
    uStack_288._7_1_ = (undefined1)uStack_2b8;
    uStack_280 = (undefined4)((ulonglong)uStack_2b8 >> 8);
    uStack_27c._0_3_ = (undefined3)((ulonglong)uStack_2b8 >> 0x28);
    *(undefined1 *)param_1 = 0;
  }
  else {
    uStack_298 = (ushort *)&cStack_4a;
    uStack_290 = 0x40f6e8f0;
    uStack_28c = 1;
    uStack_28b = 0;
    uStack_289 = 0;
    pdb_140f60760(auStack_2b0,&UNK_14339dbee,&uStack_298);
    uStack_298._7_1_ = (undefined1)auStack_2b0._0_8_;
    uStack_290 = SUB84(auStack_2b0._0_8_,1);
    uStack_28c = SUB81(auStack_2b0._0_8_,5);
    uStack_28b = SUB82(auStack_2b0._0_8_,6);
    uStack_289 = (undefined1)auStack_2b0._8_8_;
    uStack_288._0_4_ = SUB84(auStack_2b0._8_8_,1);
    uStack_288._4_3_ = SUB83(auStack_2b0._8_8_,5);
    uStack_2e8 = uStack_2a0;
LAB_141c21f72:
    uStack_288._7_1_ = (undefined1)uStack_2e8;
    uStack_280 = (undefined4)((ulonglong)uStack_2e8 >> 8);
    uStack_27c._0_3_ = (undefined3)((ulonglong)uStack_2e8 >> 0x28);
    *(undefined1 *)param_1 = 7;
  }
  *(ulonglong *)((longlong)param_1 + 1) = CONCAT44(uStack_298._4_4_,(uint)uStack_298);
  *(ulonglong *)((longlong)param_1 + 9) =
       CONCAT17(uStack_289,CONCAT25(uStack_28b,CONCAT14(uStack_28c,uStack_290)));
  *(ulonglong *)(param_1 + 4) =
       CONCAT35(uStack_288._4_3_,CONCAT41((undefined4)uStack_288,uStack_289));
  *(ulonglong *)(param_1 + 6) =
       CONCAT35((undefined3)uStack_27c,CONCAT41(uStack_280,uStack_288._7_1_));
  return param_1;
}

