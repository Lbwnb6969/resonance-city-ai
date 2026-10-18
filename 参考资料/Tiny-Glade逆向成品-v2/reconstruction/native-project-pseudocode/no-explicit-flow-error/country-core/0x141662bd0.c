// VA 0x141662bd0, PDB extent 3484 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::time_of_day::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::time_of_day::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 3484 */

undefined8 * pdb_141662bd0(undefined8 *param_1,byte *****param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  byte ****ppppbVar4;
  undefined8 uVar5;
  byte *****pppppbVar6;
  byte ****ppppbVar7;
  ulonglong uVar8;
  byte *****pppppbVar9;
  byte *****pppppbVar10;
  byte *****pppppbVar11;
  undefined4 unaff_XMM6_Da;
  undefined4 uVar12;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  byte ***pppbStack_2a8;
  byte ****ppppbStack_2a0;
  byte ***pppbStack_298;
  byte ****ppppbStack_290;
  byte ***pppbStack_288;
  undefined8 uStack_280;
  uint uStack_278;
  byte ***pppbStack_268;
  byte ****ppppbStack_260;
  byte ***pppbStack_258;
  byte ****ppppbStack_250;
  byte ***pppbStack_248;
  byte ****ppppbStack_240;
  byte ***pppbStack_238;
  byte ****ppppbStack_230;
  byte ***pppbStack_228;
  byte ****ppppbStack_220;
  byte ***pppbStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  byte ***pppbStack_1c8;
  byte ****ppppbStack_1c0;
  undefined1 uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  ulonglong uStack_1a0;
  undefined4 uStack_194;
  byte ****ppppbStack_190;
  undefined1 uStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  byte ***pppbStack_128;
  byte ****ppppbStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  byte ****ppppbStack_108;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  byte ***pppbStack_98;
  byte ****ppppbStack_90;
  undefined1 uStack_81;
  byte ****ppppbStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  ppppbVar4 = param_2[5];
  if (ppppbVar4 < param_2[4]) {
    do {
      ppppbVar4 = (byte ****)((longlong)ppppbVar4 + 1);
      bVar1 = *(byte *)((longlong)param_2[3] + -1 + (longlong)ppppbVar4);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x5b) {
          pppppbVar11 = param_2 + 9;
          *(char *)pppppbVar11 = *(char *)pppppbVar11 + -1;
          if (*(char *)pppppbVar11 != '\0') {
            param_2[5] = ppppbVar4;
            uStack_188 = 1;
            pppppbVar11 = (byte *****)&uStack_f8;
            ppppbStack_190 = (byte ****)param_2;
            pdb_140407e70(pppppbVar11,&ppppbStack_190);
            if ((char)uStack_f8 == '\x01') goto LAB_141662f2c;
            if (uStack_f8._1_1_ == '\x01') {
              pppppbVar11 = (byte *****)&uStack_f8;
              pdb_1416546a0(pppppbVar11,ppppbStack_190);
              uVar12 = uStack_f8._4_4_;
              if (CONCAT22(uStack_f8._2_2_,CONCAT11(uStack_f8._1_1_,(char)uStack_f8)) == 1) {
LAB_141662f2c:
                pppppbVar9 = (byte *****)CONCAT44(uStack_ec,uStack_f0);
                uVar12 = unaff_XMM6_Da;
              }
              else {
                pppppbVar11 = (byte *****)&uStack_f8;
                pdb_140407e70(pppppbVar11,&ppppbStack_190);
                unaff_XMM6_Da = uVar12;
                if ((char)uStack_f8 == '\x01') goto LAB_141662f2c;
                if (uStack_f8._1_1_ == '\x01') {
                  pppppbVar11 = (byte *****)&uStack_f8;
                  pdb_14165ef20(pppppbVar11,ppppbStack_190);
                  if (CONCAT22(uStack_f8._2_2_,CONCAT11(uStack_f8._1_1_,(char)uStack_f8)) != 1) {
                    pppppbVar6 = (byte *****)CONCAT44(uStack_f0,uStack_f8._4_4_);
                    uStack_178 = (byte ****)CONCAT44(uStack_e8,uStack_ec);
                    uStack_170 = (byte *****)CONCAT44(uStack_e0,uStack_e4);
                    uStack_168 = (byte ****)CONCAT44(uStack_d8,uStack_dc);
                    uStack_160 = (byte *****)CONCAT44(uStack_d0,uStack_d4);
                    uStack_158 = (byte ****)CONCAT44(uStack_c8,uStack_cc);
                    uStack_150 = (byte *****)CONCAT44(uStack_c0,uStack_c4);
                    uStack_148 = (byte ****)CONCAT44((undefined4)uStack_b8,uStack_bc);
                    uStack_140 = (byte *****)CONCAT44(uStack_b0,uStack_b8._4_4_);
                    uStack_138 = (byte ****)CONCAT44(uStack_a8,uStack_ac);
                    pppppbVar11 = (byte *****)&uStack_f8;
                    pppppbVar10 = &ppppbStack_190;
                    pdb_140407e70();
                    if ((char)uStack_f8 != '\x01') {
                      if (uStack_f8._1_1_ == '\x01') {
                        pppppbVar11 = (byte *****)pdb_14165b3b0(ppppbStack_190);
                        pppppbVar9 = pppppbVar10;
                        if (((ulonglong)pppppbVar11 & 1) == 0) {
                          pppbStack_1c8 = (byte ***)uStack_138;
                          uStack_208 = uStack_178;
                          uStack_200 = uStack_170;
                          uStack_1f8 = uStack_168;
                          uStack_1f0 = uStack_160;
                          uStack_1e8 = uStack_158;
                          uStack_1e0 = uStack_150;
                          uStack_1d8 = uStack_148;
                          uStack_1d0 = uStack_140;
                          uStack_68 = CONCAT71((int7)((ulonglong)uStack_138 >> 8),1);
                          uStack_178 = (byte ****)0x0;
                          goto LAB_141662f43;
                        }
                      }
                      else {
                        pppppbVar11 = (byte *****)0x2;
                        pppppbVar9 = (byte *****)pdb_142d8f0e0(2,&UNK_143322a00,&UNK_143322608);
                      }
                      goto LAB_141662f38;
                    }
                  }
                  goto LAB_141662f2c;
                }
                pppppbVar11 = (byte *****)0x1;
                pppppbVar9 = (byte *****)pdb_142d8f0e0(1,&UNK_143322a00,&UNK_143322608);
              }
LAB_141662f38:
              pppppbVar10 = pppppbVar11;
              pppppbVar6 = pppppbVar9;
              uStack_178 = (byte ****)0x1;
              uStack_68 = 0;
              unaff_XMM6_Da = uVar12;
            }
            else {
              uStack_68 = 0;
              pppppbVar10 = (byte *****)0x0;
              pppppbVar6 = (byte *****)pdb_142d8f0e0(0,&UNK_143322a00,&UNK_143322608);
              uStack_178 = (byte ****)0x1;
            }
LAB_141662f43:
            *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
            uStack_168 = uStack_208;
            uStack_160 = uStack_200;
            uStack_158 = uStack_1f8;
            uStack_150 = uStack_1f0;
            uStack_148 = uStack_1e8;
            uStack_140 = uStack_1e0;
            uStack_138 = uStack_1d8;
            uStack_130 = (undefined4)uStack_1d0;
            uStack_12c = uStack_1d0._4_4_;
            pppbStack_128 = pppbStack_1c8;
            uStack_170 = pppppbVar6;
            ppppbStack_120 = (byte ****)pppppbVar10;
            uStack_118 = unaff_XMM6_Da;
            ppppbStack_90 = (byte ****)pdb_140404e50(param_2);
            pppppbVar11 = uStack_170;
            pppbStack_218 = (byte ***)CONCAT44(uStack_114,uStack_118);
            uStack_a8 = (uint)pppbStack_128;
            uStack_a4 = (undefined4)((ulonglong)pppbStack_128 >> 0x20);
            uStack_a0 = (byte *****)ppppbStack_120;
            uStack_b8 = uStack_138;
            uStack_b0 = uStack_130;
            uStack_ac = uStack_12c;
            uStack_c8 = (undefined4)uStack_148;
            uStack_c4 = uStack_148._4_4_;
            uStack_c0 = (undefined4)uStack_140;
            uStack_bc = uStack_140._4_4_;
            uStack_d8 = (undefined4)uStack_158;
            uStack_d4 = uStack_158._4_4_;
            uStack_d0 = (undefined4)uStack_150;
            uStack_cc = uStack_150._4_4_;
            uStack_e8 = (undefined4)uStack_168;
            uStack_e4 = uStack_168._4_4_;
            uStack_e0 = (undefined4)uStack_160;
            uStack_dc = uStack_160._4_4_;
            uStack_f8._0_1_ = (char)uStack_178;
            uStack_f8._1_1_ = (char)((ulonglong)uStack_178 >> 8);
            uStack_f8._2_2_ = (undefined2)((ulonglong)uStack_178 >> 0x10);
            uStack_f8._4_4_ = uStack_178._4_4_;
            uStack_f0 = (undefined4)uStack_170;
            uStack_ec = uStack_170._4_4_;
            pppbStack_98 = pppbStack_218;
            if (((ulonglong)uStack_178 & 1) != 0) {
              if ((byte *****)ppppbStack_90 != (byte *****)0x0) {
                pdb_1404b4b10(&ppppbStack_90);
              }
              goto LAB_1416636a4;
            }
            pppppbVar11 = (byte *****)ppppbStack_90;
            if ((byte *****)ppppbStack_90 != (byte *****)0x0) goto LAB_1416636a4;
            pppbStack_268 = (byte ***)uStack_168;
            ppppbStack_260 = (byte ****)uStack_160;
            pppbStack_258 = (byte ***)uStack_158;
            ppppbStack_250 = (byte ****)uStack_150;
            pppbStack_248 = (byte ***)uStack_148;
            ppppbStack_240 = (byte ****)uStack_140;
            ppppbStack_230 = (byte ****)CONCAT44(uStack_12c,uStack_130);
            pppbStack_238 = (byte ***)uStack_138;
            pppbStack_228 = pppbStack_128;
            ppppbStack_220 = ppppbStack_120;
            goto LAB_141663074;
          }
        }
        else {
          if (bVar1 != 0x7b) {
            pppppbVar11 = (byte *****)pdb_142de8b10(param_2,&uStack_81,&UNK_143323c40);
            goto LAB_1416636a4;
          }
          pppppbVar11 = param_2 + 9;
          *(char *)pppppbVar11 = *(char *)pppppbVar11 + -1;
          if (*(char *)pppppbVar11 != '\0') {
            param_2[5] = ppppbVar4;
            uStack_1b8 = 1;
            pppppbVar11 = (byte *****)&uStack_f8;
            ppppbStack_1c0 = (byte ****)param_2;
            pdb_140407a40(pppppbVar11,&ppppbStack_1c0);
            if ((char)uStack_f8 != '\0') goto LAB_141662cb8;
            uStack_68 = 0;
            uStack_1b0 = 0;
            uStack_1a0 = 0;
            uStack_1a8 = 0;
            ppppbStack_80 = (byte ****)((ulonglong)ppppbStack_80 & 0xffffffff00000000);
            iStack_fc = 0;
            goto LAB_141663198;
          }
        }
        uStack_f8._0_1_ = 0x18;
        goto LAB_141662c55;
      }
      param_2[5] = ppppbVar4;
    } while (ppppbVar4 != param_2[4]);
  }
  uStack_f8._0_1_ = 5;
LAB_141662c55:
  uStack_f8._4_4_ = 0;
  uStack_f8._2_2_ = 0;
  uStack_f8._1_1_ = 0;
  uVar5 = pdb_142d84ef0(param_2,&uStack_f8);
  goto LAB_1416636af;
LAB_141663198:
  do {
    pppppbVar10 = (byte *****)ppppbStack_1c0;
    if (uStack_f8._1_1_ == '\0') {
      if ((uStack_1b0 & 1) == 0) {
        uStack_178 = (byte ****)&UNK_1433229b8;
        uStack_170 = (byte *****)0xb;
      }
      else if ((uStack_1a8 & 1) == 0) {
        uStack_178 = (byte ****)&UNK_1433229c3;
        uStack_170 = (byte *****)0x8;
      }
      else {
        if ((uStack_1a0 & 1) != 0) {
          pppbStack_1c8 = (byte ***)(ulonglong)uStack_278;
          uStack_208 = (byte ****)CONCAT44(uStack_2b4,uStack_2b8);
          uStack_200 = (byte *****)CONCAT44(uStack_2ac,uStack_2b0);
          uStack_1f8 = (byte ****)pppbStack_2a8;
          uStack_1f0 = (byte *****)ppppbStack_2a0;
          uStack_1e8 = (byte ****)pppbStack_298;
          uStack_1e0 = (byte *****)ppppbStack_290;
          uStack_1d8 = (byte ****)pppbStack_288;
          uStack_1d0 = uStack_280;
          uStack_78 = uStack_194;
          uStack_74 = (undefined4)uStack_210;
          uStack_70 = (undefined4)((ulonglong)uStack_210 >> 0x20);
          uStack_68 = CONCAT44(uStack_68._4_4_,(int)CONCAT71((int7)((ulonglong)uStack_210 >> 8),1));
          bVar3 = false;
          uStack_a0 = (byte *****)ppppbStack_108;
          goto LAB_141662cd5;
        }
        uStack_178 = (byte ****)&UNK_1433229cb;
        uStack_170 = (byte *****)0xa;
      }
      uStack_f8._0_1_ = (char)&uStack_178;
      uStack_f8._1_1_ = (char)((ulonglong)&uStack_178 >> 8);
      uStack_f8._2_2_ = (undefined2)((ulonglong)&uStack_178 >> 0x10);
      uStack_f8._4_4_ = (undefined4)((ulonglong)&uStack_178 >> 0x20);
      pppppbVar11 = (byte *****)&UNK_143044fe5;
LAB_141663769:
      uStack_ec = 1;
      uStack_f0 = 0x402ed400;
      pppppbVar9 = (byte *****)pdb_142d872f0(pppppbVar11,&uStack_f8);
      goto LAB_141662cbf;
    }
    pppppbVar6 = (byte *****)(ppppbStack_1c0 + 3);
    ppppbStack_1c0[5] = (byte ***)((longlong)ppppbStack_1c0[5] + 1);
    ppppbStack_1c0[2] = (byte ***)0x0;
    pppppbVar11 = (byte *****)&uStack_f8;
    pdb_140de3310(&uStack_f8,pppppbVar6,ppppbStack_1c0);
    pppppbVar9 = (byte *****)CONCAT44(uStack_ec,uStack_f0);
    if (CONCAT22(uStack_f8._2_2_,CONCAT11(uStack_f8._1_1_,(char)uStack_f8)) == 2)
    goto LAB_141662cbf;
    lVar2 = CONCAT44(uStack_e4,uStack_e8);
    if (lVar2 == 8) {
      if (*pppppbVar9 != _DAT_14304ca0f) goto LAB_14166332c;
      if (iStack_fc != 0) {
        uStack_178 = (byte ****)&UNK_1433229c3;
        uStack_170 = (byte *****)0x8;
        goto LAB_141663840;
      }
      ppppbVar4 = pppppbVar10[5];
      if (ppppbVar4 < pppppbVar10[4]) {
        ppppbVar7 = *pppppbVar6;
        while( true ) {
          ppppbVar4 = (byte ****)((longlong)ppppbVar4 + 1);
          uVar8 = (ulonglong)*(byte *)((longlong)ppppbVar7 + -1 + (longlong)ppppbVar4);
          if (0x3a < uVar8) goto LAB_141663868;
          if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
          pppppbVar10[5] = ppppbVar4;
          if (ppppbVar4 == pppppbVar10[4]) goto LAB_14166377a;
        }
        if (uVar8 == 0x3a) {
          pppppbVar10[5] = ppppbVar4;
          pppppbVar11 = (byte *****)&uStack_f8;
          pdb_14165ef20(&uStack_f8,pppppbVar10);
          if ((char)uStack_f8 == '\0') {
            uStack_194 = uStack_f8._4_4_;
            uStack_210 = CONCAT44(uStack_ec,uStack_f0);
            pppbStack_2a8 = (byte ***)CONCAT44(uStack_d4,uStack_d8);
            ppppbStack_2a0 = (byte ****)CONCAT44(uStack_cc,uStack_d0);
            pppbStack_298 = (byte ***)CONCAT44(uStack_c4,uStack_c8);
            ppppbStack_290 = (byte ****)CONCAT44(uStack_bc,uStack_c0);
            uStack_280 = CONCAT44(uStack_ac,uStack_b0);
            uStack_278 = uStack_a8;
            pppbStack_288 = (byte ***)uStack_b8;
            uStack_2b8 = uStack_e8;
            uStack_2b4 = uStack_e4;
            uStack_2b0 = uStack_e0;
            uStack_2ac = uStack_dc;
            uStack_1a8 = CONCAT71((uint7)(uint3)(uStack_a8 >> 8),1);
            iStack_fc = 1;
            goto LAB_141663180;
          }
          break;
        }
LAB_141663868:
        ppppbStack_190 = (byte ****)0x6;
        pppppbVar11 = &ppppbStack_190;
      }
      else {
LAB_14166377a:
        ppppbStack_190 = (byte ****)0x3;
        pppppbVar11 = &ppppbStack_190;
      }
LAB_1416635c8:
      pppppbVar9 = (byte *****)pdb_142d84ef0(pppppbVar10,pppppbVar11);
      pppppbVar11 = pppppbVar10;
      goto LAB_141662cbf;
    }
    if (lVar2 != 10) {
      if ((lVar2 != 0xb) ||
         (*(longlong *)((longlong)pppppbVar9 + 3) != CONCAT35(_UNK_14304c9a0,_DAT_14304c99b) ||
          *pppppbVar9 != (byte ****)CONCAT53(_DAT_14304c99b,_DAT_14304c998))) goto LAB_14166332c;
      if ((int)ppppbStack_80 != 0) {
        uStack_178 = (byte ****)&UNK_1433229b8;
        uStack_170 = (byte *****)0xb;
        goto LAB_141663840;
      }
      ppppbVar4 = pppppbVar10[5];
      if (pppppbVar10[4] <= ppppbVar4) {
LAB_1416635b6:
        uStack_f8._0_1_ = '\x03';
LAB_1416635c1:
        uStack_f8._4_4_ = 0;
        uStack_f8._2_2_ = 0;
        uStack_f8._1_1_ = '\0';
        pppppbVar11 = (byte *****)&uStack_f8;
        goto LAB_1416635c8;
      }
      ppppbVar7 = *pppppbVar6;
      while( true ) {
        ppppbVar4 = (byte ****)((longlong)ppppbVar4 + 1);
        uVar8 = (ulonglong)*(byte *)((longlong)ppppbVar7 + -1 + (longlong)ppppbVar4);
        if (0x3a < uVar8) goto LAB_1416637ae;
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
        pppppbVar10[5] = ppppbVar4;
        if (ppppbVar4 == pppppbVar10[4]) goto LAB_1416635b6;
      }
      if (uVar8 != 0x3a) goto LAB_1416637ae;
      pppppbVar10[5] = ppppbVar4;
      pppppbVar11 = (byte *****)&uStack_178;
      uVar5 = pdb_1416546a0(pppppbVar11,pppppbVar10);
      pppppbVar9 = uStack_170;
      if ((char)uStack_178 == '\0') {
        uStack_1b0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        ppppbStack_80 = (byte ****)CONCAT44(ppppbStack_80._4_4_,1);
        unaff_XMM6_Da = uStack_178._4_4_;
        goto LAB_141663180;
      }
      goto LAB_141662cbf;
    }
    if (*(short *)(pppppbVar9 + 1) != _DAT_14304ca1f || *pppppbVar9 != _DAT_14304ca17) {
LAB_14166332c:
      ppppbVar4 = pppppbVar10[5];
      if (pppppbVar10[4] <= ppppbVar4) goto LAB_1416635b6;
      ppppbVar7 = *pppppbVar6;
      while( true ) {
        ppppbVar4 = (byte ****)((longlong)ppppbVar4 + 1);
        uVar8 = (ulonglong)*(byte *)((longlong)ppppbVar7 + -1 + (longlong)ppppbVar4);
        if (0x3a < uVar8) goto LAB_1416637ae;
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
        pppppbVar10[5] = ppppbVar4;
        if (ppppbVar4 == pppppbVar10[4]) goto LAB_1416635b6;
      }
      if (uVar8 != 0x3a) {
LAB_1416637ae:
        uStack_f8._0_1_ = '\x06';
        goto LAB_1416635c1;
      }
      pppppbVar10[5] = ppppbVar4;
      pppppbVar9 = (byte *****)pdb_14164c7b0();
      pppppbVar11 = pppppbVar10;
      if (pppppbVar9 == (byte *****)0x0) goto LAB_141663180;
      goto LAB_141662cbf;
    }
    if (uStack_68 != 0) {
      uStack_178 = (byte ****)&UNK_1433229cb;
      uStack_170 = (byte *****)0xa;
LAB_141663840:
      uStack_f8._0_1_ = (char)&uStack_178;
      uStack_f8._1_1_ = (char)((ulonglong)&uStack_178 >> 8);
      uStack_f8._2_2_ = (undefined2)((ulonglong)&uStack_178 >> 0x10);
      uStack_f8._4_4_ = (undefined4)((ulonglong)&uStack_178 >> 0x20);
      pppppbVar11 = (byte *****)&UNK_143045061;
      goto LAB_141663769;
    }
    if (pppppbVar10[5] < pppppbVar10[4]) {
      pppppbVar6 = (byte *****)*pppppbVar6;
      ppppbVar4 = pppppbVar10[5];
      do {
        ppppbVar7 = (byte ****)((longlong)ppppbVar4 + 1);
        uVar8 = (ulonglong)*(byte *)((longlong)pppppbVar6 + (longlong)ppppbVar4);
        if (0x3a < uVar8) {
LAB_1416634aa:
          uStack_f8._0_1_ = '\x06';
          goto LAB_1416632fe;
        }
        if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) {
          if (uVar8 != 0x3a) goto LAB_1416634aa;
          pppppbVar10[5] = ppppbVar7;
          uVar8 = pdb_14165b3b0();
          pppppbVar11 = pppppbVar10;
          ppppbStack_108 = (byte ****)pppppbVar6;
          goto LAB_141663488;
        }
        pppppbVar10[5] = ppppbVar7;
        ppppbVar4 = ppppbVar7;
      } while (ppppbVar7 != pppppbVar10[4]);
    }
    uStack_f8._0_1_ = '\x03';
LAB_1416632fe:
    uStack_f8._4_4_ = 0;
    uStack_f8._2_2_ = 0;
    uStack_f8._1_1_ = '\0';
    ppppbStack_108 = (byte ****)pdb_142d84ef0(pppppbVar10,&uStack_f8);
    uVar8 = 1;
    pppppbVar11 = pppppbVar10;
LAB_141663488:
    pppppbVar9 = (byte *****)ppppbStack_108;
    if ((uVar8 & 1) != 0) goto LAB_141662cbf;
    uStack_1a0 = CONCAT71((int7)(uVar8 >> 8),1);
    uStack_68 = 1;
LAB_141663180:
    pppppbVar11 = (byte *****)&uStack_f8;
    pdb_140407a40(&uStack_f8,&ppppbStack_1c0);
  } while ((char)uStack_f8 == '\0');
LAB_141662cb8:
  pppppbVar9 = (byte *****)CONCAT44(uStack_ec,uStack_f0);
LAB_141662cbf:
  uStack_78 = SUB84(pppppbVar9,0);
  uStack_74 = (undefined4)((ulonglong)pppppbVar9 >> 0x20);
  bVar3 = true;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  uStack_a0 = pppppbVar11;
LAB_141662cd5:
  *(char *)(param_2 + 9) = *(char *)(param_2 + 9) + '\x01';
  uStack_f8._1_1_ = '\0';
  uStack_f8._2_2_ = 0;
  uStack_f8._4_4_ = 0;
  uStack_f0 = uStack_78;
  uStack_ec = uStack_74;
  uStack_e8 = uStack_70;
  uStack_e4 = (undefined4)uStack_208;
  uStack_e0 = uStack_208._4_4_;
  uStack_dc = (undefined4)uStack_200;
  uStack_d8 = uStack_200._4_4_;
  uStack_d4 = (undefined4)uStack_1f8;
  uStack_d0 = uStack_1f8._4_4_;
  uStack_cc = (undefined4)uStack_1f0;
  uStack_c8 = uStack_1f0._4_4_;
  uStack_c4 = (undefined4)uStack_1e8;
  uStack_c0 = uStack_1e8._4_4_;
  uStack_bc = (undefined4)uStack_1e0;
  uStack_b8 = (byte ****)CONCAT44((undefined4)uStack_1d8,uStack_1e0._4_4_);
  uStack_b0 = uStack_1d8._4_4_;
  uStack_ac = (undefined4)uStack_1d0;
  uStack_a8 = uStack_1d0._4_4_;
  uStack_a4 = pppbStack_1c8._0_4_;
  pppbStack_98 = (byte ***)CONCAT44(pppbStack_98._4_4_,unaff_XMM6_Da);
  uStack_f8._0_1_ = bVar3;
  pppppbVar6 = (byte *****)pdb_140404da0(param_2);
  pppppbVar10 = (byte *****)CONCAT44(uStack_ec,uStack_f0);
  pppbStack_268 = (byte ***)CONCAT44(uStack_e4,uStack_e8);
  ppppbStack_260 = (byte ****)CONCAT44(uStack_dc,uStack_e0);
  pppbStack_258 = (byte ***)CONCAT44(uStack_d4,uStack_d8);
  ppppbStack_250 = (byte ****)CONCAT44(uStack_cc,uStack_d0);
  pppbStack_248 = (byte ***)CONCAT44(uStack_c4,uStack_c8);
  ppppbStack_240 = (byte ****)CONCAT44(uStack_bc,uStack_c0);
  ppppbStack_230 = (byte ****)CONCAT44(uStack_ac,uStack_b0);
  uStack_148 = uStack_b8;
  uStack_138 = (byte ****)CONCAT44(uStack_a4,uStack_a8);
  uStack_130 = (undefined4)uStack_a0;
  uStack_12c = uStack_a0._4_4_;
  pppbStack_128 = pppbStack_98;
  uStack_170 = (byte *****)ppppbStack_260;
  uStack_178 = (byte ****)pppbStack_268;
  uStack_168 = (byte ****)pppbStack_258;
  uStack_160 = (byte *****)ppppbStack_250;
  uStack_158 = (byte ****)pppbStack_248;
  uStack_150 = (byte *****)ppppbStack_240;
  uStack_140 = (byte *****)ppppbStack_230;
  if (bVar3) {
    pppppbVar11 = pppppbVar10;
    if (pppppbVar6 != (byte *****)0x0) {
      ppppbStack_80 = (byte ****)pppppbVar6;
      if (*pppppbVar6 == (byte ****)0x1) {
        pdb_1404b38e0(pppppbVar6 + 1);
      }
      else if ((*pppppbVar6 == (byte ****)0x0) && (pppppbVar6[2] != (byte ****)0x0)) {
        pub_1406abac0((byte *)pppppbVar6[1],(ulonglong)pppppbVar6[2],1);
      }
      pub_1406abac0((byte *)ppppbStack_80,0x28,8);
    }
  }
  else {
    pppppbVar11 = pppppbVar6;
    if (pppppbVar6 == (byte *****)0x0) {
      pppbStack_218 = pppbStack_98;
      ppppbStack_220 = (byte ****)uStack_a0;
      pppbStack_228 = (byte ***)uStack_138;
      pppbStack_238 = (byte ***)uStack_b8;
      uStack_170 = pppppbVar10;
LAB_141663074:
      param_1[1] = uStack_170;
      param_1[2] = pppbStack_268;
      param_1[3] = ppppbStack_260;
      param_1[4] = pppbStack_258;
      param_1[5] = ppppbStack_250;
      param_1[6] = pppbStack_248;
      param_1[7] = ppppbStack_240;
      param_1[8] = pppbStack_238;
      param_1[9] = ppppbStack_230;
      param_1[10] = pppbStack_228;
      param_1[0xb] = ppppbStack_220;
      param_1[0xc] = pppbStack_218;
      uVar5 = 0;
      goto LAB_1416630aa;
    }
  }
LAB_1416636a4:
  uVar5 = pdb_142d86ed0(pppppbVar11,param_2);
LAB_1416636af:
  param_1[1] = uVar5;
  uVar5 = 1;
LAB_1416630aa:
  *param_1 = uVar5;
  return param_1;
}

