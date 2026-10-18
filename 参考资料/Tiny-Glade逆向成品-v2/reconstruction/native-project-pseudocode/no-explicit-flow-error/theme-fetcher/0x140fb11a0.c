// VA 0x140fb11a0, PDB extent 5072 bytes
// theme_fetcher::checked_zip::extract_with_checksums<std::io::cursor::Cursor<ref$<bytes::bytes::Bytes> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/checked_zip.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   theme_fetcher::checked_zip::extract_with_checksums<std::io::cursor::Cursor<ref$<bytes::bytes::Bytes>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/checked_zip.rs
   Extent: 5072 */

longlong pdb_140fb11a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  byte *****arg0;
  undefined4 uVar2;
  byte ****ppppbVar3;
  int iVar4;
  byte ****ppppbVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  longlong *plVar13;
  byte *****pppppbVar14;
  byte *****pppppbVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 uStack_be8;
  undefined8 uStack_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 uStack_b90;
  undefined7 uStack_b88;
  undefined4 uStack_b81;
  undefined1 uStack_b7d;
  undefined8 uStack_b78;
  undefined8 uStack_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined4 uStack_b58;
  byte ****ppppbStack_468;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 uStack_450;
  uint uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  longlong lStack_430;
  longlong lStack_428;
  longlong alStack_420 [13];
  ulonglong auStack_3b8 [24];
  byte ****ppppbStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  int iStack_2e4;
  undefined1 uStack_2e0;
  undefined1 uStack_2df;
  undefined2 uStack_2de;
  undefined1 uStack_2dc;
  undefined1 uStack_2db;
  undefined2 uStack_2da;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  longlong lStack_188;
  byte ****ppppbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte ****ppppbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_118;
  byte ****ppppbStack_110;
  byte ****ppppbStack_108;
  byte ****ppppbStack_100;
  byte ****ppppbStack_f8;
  byte ****ppppbStack_f0;
  byte ****ppppbStack_e8;
  byte ****ppppbStack_e0;
  byte ****ppppbStack_d8;
  byte ****ppppbStack_d0;
  byte ****ppppbStack_c8;
  undefined8 uStack_b8;
  byte ****ppppbStack_b0;
  byte ****ppppbStack_a8;
  byte ****ppppbStack_98;
  byte ****ppppbStack_90;
  byte ****ppppbStack_88;
  undefined8 uStack_80;
  byte ****ppppbStack_78;
  undefined8 *puStack_70;
  byte ****ppppbStack_68;
  undefined1 uStack_59;
  byte ****ppppbStack_58;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppppbStack_f8 = (byte ****)0x0;
  ppppbStack_f0 = (byte ****)0x8;
  ppppbStack_e8 = (byte ****)0x0;
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2d8 = 0;
  uStack_2d4 = 0;
  uStack_2d0 = (byte *****)0x0;
  uStack_2e8 = 0;
  iStack_2e4 = 0;
  uStack_2e0 = 0;
  uStack_2df = 0;
  uStack_2de = 0;
  uStack_2dc = 0;
  uStack_2db = 0;
  uStack_2da = 0;
  ppppbStack_2f8 = (byte ****)0x0;
  uStack_2f0 = (byte *****)0x0;
  uStack_2b8 = _DAT_143267a08;
  uStack_2b0 = _UNK_143267a10;
  uStack_2a8 = _DAT_143267a18;
  uStack_2a0 = _UNK_143267a20;
  uStack_b78 = _DAT_143267a08;
  uStack_b70 = _UNK_143267a10;
  uStack_b68 = _DAT_143267a18;
  uStack_b60 = _UNK_143267a20;
  uStack_be8 = 0;
  uStack_be0 = 0;
  uStack_bd8 = 0;
  uStack_bd0 = 0;
  uStack_bc8 = 0;
  uStack_bc0 = 0;
  uStack_bb8 = 0;
  uStack_bb0 = 0;
  uStack_ba8 = _DAT_143267a08;
  uStack_ba0 = _UNK_143267a10;
  uStack_b98 = _DAT_143267a18;
  uStack_b90 = _UNK_143267a20;
  uStack_b88 = 0;
  uStack_b81 = 0;
  uStack_b7d = 1;
  uStack_b58 = 0;
  puStack_70 = (undefined8 *)(param_1 + 0x10);
  ppppbStack_110 = *(byte *****)(*(longlong *)(param_1 + 0x10) + 0x20);
  pppppbVar14 = (byte *****)0x0;
  lStack_188 = param_1;
  uStack_118 = param_2;
  if ((byte *****)ppppbStack_110 != (byte *****)0x0) {
    do {
      uStack_49 = 1;
      pdb_140fb0f90(&ppppbStack_2f8,param_1,pppppbVar14);
      iVar4 = iStack_2e4;
      ppppbVar3 = ppppbStack_2f8;
      uStack_178 = uStack_2f0;
      uStack_170 = (byte *****)CONCAT44(iStack_2e4,uStack_2e8);
      uVar2 = CONCAT22(uStack_2de,CONCAT11(uStack_2df,uStack_2e0));
      uStack_168 = CONCAT26(uStack_2da,CONCAT15(uStack_2db,CONCAT14(uStack_2dc,uVar2)));
      if ((byte *****)ppppbStack_2f8 == (byte *****)0x2) {
        iStack_2e4 = (int)((ulonglong)uStack_168 >> 0x20);
        ppppbStack_2f8 = (byte ****)uStack_2f0;
        uStack_2f0 = (byte *****)CONCAT44(iVar4,uStack_2e8);
        uStack_49 = 1;
        uStack_2e8 = uVar2;
        lVar7 = pdb_142dc8f00(&ppppbStack_2f8);
        goto LAB_140fb1c4a;
      }
      puVar12 = &uStack_2d8;
      pub_142e32760(&uStack_448,puVar12,0x148);
      uStack_450 = uStack_168;
      uStack_460 = (undefined4)uStack_178;
      uStack_45c = uStack_178._4_4_;
      uStack_458 = (undefined4)uStack_170;
      uStack_454 = uStack_170._4_4_;
      ppppbStack_468 = ppppbVar3;
      lVar7 = pdb_141ed7060(&ppppbStack_468);
      if (lVar7 == 0) {
        ppppbStack_2f8 = (byte ****)0x1;
        uStack_2f0 = (byte *****)&UNK_1432678ce;
        uStack_2e8 = 0x11;
        iStack_2e4 = 0;
        lVar7 = pdb_142dc8f00(&ppppbStack_2f8);
LAB_140fb1c36:
        uStack_49 = 1;
        pdb_140f74fe0(&ppppbStack_468);
        goto LAB_140fb1c4a;
      }
      pdb_140f3e9e0(&uStack_b8,param_2,param_3,lVar7,puVar12);
      ppppbVar3 = ppppbStack_a8;
      ppppbStack_78 = (byte ****)pppppbVar14;
      plVar13 = (longlong *)(lStack_428 + 0x10);
      if (!SBORROW8(0,lStack_430)) {
        plVar13 = alStack_420;
      }
      if (*plVar13 == 0) {
LAB_140fb1400:
        ppppbStack_68 = ppppbStack_b0;
        ppppbStack_58 = ppppbStack_b0;
        pppppbVar14 = (byte *****)ppppbStack_a8;
        lVar7 = pdb_140f3eaf0(ppppbStack_b0,ppppbStack_a8);
        if (lVar7 != 0) {
          ppppbStack_68 = ppppbStack_58;
          pdb_140f4f620(&ppppbStack_2f8,lVar7,pppppbVar14);
          if ((int)ppppbStack_2f8 == 2) {
            uStack_178 = (byte *****)0x2;
          }
          else {
            uStack_178 = (byte *****)ppppbStack_2f8;
            uStack_170 = uStack_2f0;
            uStack_128 = uStack_2a8;
            uStack_138 = (undefined4)uStack_2b8;
            uStack_134 = uStack_2b8._4_4_;
            uStack_130 = (undefined4)uStack_2b0;
            uStack_12c = uStack_2b0._4_4_;
            uStack_148 = uStack_2c8;
            uStack_140 = uStack_2c0;
            uStack_158 = CONCAT44(uStack_2d4,uStack_2d8);
            ppppbStack_150 = (byte ****)uStack_2d0;
            uStack_168 = CONCAT44(iStack_2e4,uStack_2e8);
            uStack_160 = CONCAT26(uStack_2da,
                                  CONCAT15(uStack_2db,
                                           CONCAT14(uStack_2dc,
                                                    CONCAT22(uStack_2de,
                                                             CONCAT11(uStack_2df,uStack_2e0)))));
            if ((byte *****)ppppbStack_2f8 != (byte *****)0x2) goto LAB_140fb1526;
          }
          uStack_170 = uStack_2f0;
          ppppbStack_68 = ppppbStack_58;
          pdb_1404b38e0(&uStack_170);
          ppppbStack_2f8 = (byte ****)CONCAT71(ppppbStack_2f8._1_7_,1);
          ppppbStack_68 = ppppbStack_58;
          lVar7 = pdb_140f46c40(&ppppbStack_2f8,lVar7,pppppbVar14);
          if (lVar7 != 0) {
            ppppbStack_68 = ppppbStack_58;
            lVar7 = pdb_142dc8e60(lVar7);
            goto LAB_140fb1c18;
          }
        }
LAB_140fb1526:
        uVar11 = 0;
        puVar9 = (ulonglong *)(lStack_428 + 0x78);
        if (!SBORROW8(0,lStack_430)) {
          puVar9 = auStack_3b8;
        }
        pppppbVar14 = (byte *****)*puVar9;
        if (-1 < (longlong)pppppbVar14) {
          if (pppppbVar14 == (byte *****)0x0) {
            ppppbStack_180 = (byte ****)0x1;
          }
          else {
            pdb_14007ee60();
            ppppbStack_180 = (byte ****)pub_1406abab0((ulonglong)pppppbVar14,1);
            if ((byte *****)ppppbStack_180 == (byte *****)0x0) {
              uVar11 = 1;
              ppppbStack_180 = (byte ****)pppppbVar14;
              goto LAB_140fb1f70;
            }
          }
          pppppbVar15 = &ppppbStack_90;
          uStack_80 = 0;
          ppppbStack_90 = (byte ****)pppppbVar14;
          ppppbStack_88 = ppppbStack_180;
          pdb_140f58d90(pppppbVar15);
          pppppbVar14 = (byte *****)ppppbStack_98;
          uVar10 = pdb_141eeaf10(&ppppbStack_468,pppppbVar15,0);
          if ((uVar10 & 1) == 0) {
            lVar7 = pdb_140f561c0(ppppbStack_58,ppppbVar3,ppppbStack_88,uStack_80);
            if (lVar7 == 0) {
              pdb_140f69110(&ppppbStack_2f8,ppppbStack_58,ppppbVar3);
              pppppbVar15 = uStack_2f0;
              if ((int)ppppbStack_2f8 == 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1432678e0);
              }
              arg0 = (byte *****)CONCAT44(iStack_2e4,uStack_2e8);
              if (-1 < iStack_2e4) {
                ppppbStack_e0 = (byte ****)arg0;
                if (arg0 == (byte *****)0x0) {
                  ppppbStack_98 = (byte ****)0x1;
                }
                else {
                  pdb_14007ee60();
                  pppppbVar14 = (byte *****)pub_1406abab0((ulonglong)arg0,1);
                  if (pppppbVar14 == (byte *****)0x0) {
                    uVar11 = 1;
                    pppppbVar14 = arg0;
                    goto LAB_140fb19b9;
                  }
                  ppppbStack_98 = (byte ****)pppppbVar14;
                  pub_142e32760(pppppbVar14,pppppbVar15,arg0);
                }
                pppppbVar15 = (byte *****)ppppbStack_110;
                param_2 = uStack_118;
                uStack_4a = 1;
                pdb_140faf160(&ppppbStack_2f8,ppppbStack_88,uStack_80);
                ppppbStack_d8 = (byte ****)0x0;
                ppppbStack_d0 = (byte ****)0x1;
                ppppbStack_c8 = (byte ****)0x0;
                uStack_168 = 0x60000020;
                uStack_178 = &ppppbStack_d8;
                uStack_170 = (byte *****)&UNK_1432678f8;
                cVar6 = pdb_140fae350(&ppppbStack_2f8,&uStack_178);
                ppppbVar3 = ppppbStack_c8;
                if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8170(&UNK_143267928,0x37,&uStack_59,&UNK_1432679e8,&UNK_1432679d0);
                }
                ppppbStack_100 = ppppbStack_d8;
                ppppbStack_108 = ppppbStack_d0;
                uStack_4b = 1;
                pdb_140fafcc0(&uStack_be8,ppppbStack_98,ppppbStack_e0);
                uStack_4b = 1;
                pdb_140fafcc0(&uStack_be8,ppppbStack_108,ppppbVar3);
                ppppbVar5 = ppppbStack_e8;
                ppppbStack_2f8 = ppppbStack_e0;
                uStack_2f0 = (byte *****)ppppbStack_98;
                uStack_2e8 = SUB84(ppppbStack_e0,0);
                iStack_2e4 = (int)((ulonglong)ppppbStack_e0 >> 0x20);
                uStack_2e0 = SUB81(ppppbStack_100,0);
                uStack_2df = (undefined1)((ulonglong)ppppbStack_100 >> 8);
                uStack_2de = (undefined2)((ulonglong)ppppbStack_100 >> 0x10);
                uStack_2dc = (undefined1)((ulonglong)ppppbStack_100 >> 0x20);
                uStack_2db = (undefined1)((ulonglong)ppppbStack_100 >> 0x28);
                uStack_2da = (undefined2)((ulonglong)ppppbStack_100 >> 0x30);
                uStack_2d8 = (uint)ppppbStack_108;
                uStack_2d4 = (undefined4)((ulonglong)ppppbStack_108 >> 0x20);
                uStack_2d0 = (byte *****)ppppbVar3;
                if (ppppbStack_e8 == ppppbStack_f8) {
                  pdb_142d7e7c0(&ppppbStack_f8);
                }
                pppppbVar14 = (byte *****)ppppbStack_78;
                ppppbStack_f0[(longlong)ppppbVar5 * 6 + 4] =
                     (byte ***)CONCAT44(uStack_2d4,uStack_2d8);
                (ppppbStack_f0 + (longlong)ppppbVar5 * 6 + 4)[1] = (byte ***)uStack_2d0;
                ppppbStack_f0[(longlong)ppppbVar5 * 6 + 2] =
                     (byte ***)CONCAT44(iStack_2e4,uStack_2e8);
                (ppppbStack_f0 + (longlong)ppppbVar5 * 6 + 2)[1] =
                     (byte ***)
                     CONCAT26(uStack_2da,
                              CONCAT15(uStack_2db,
                                       CONCAT14(uStack_2dc,
                                                CONCAT22(uStack_2de,CONCAT11(uStack_2df,uStack_2e0))
                                               )));
                ppppbStack_f0[(longlong)ppppbVar5 * 6] = (byte ***)ppppbStack_2f8;
                (ppppbStack_f0 + (longlong)ppppbVar5 * 6)[1] = (byte ***)uStack_2f0;
                ppppbStack_e8 = (byte ****)((longlong)ppppbVar5 + 1);
                if ((byte *****)ppppbStack_90 != (byte *****)0x0) {
                  pub_1406abac0((byte *)ppppbStack_88,(ulonglong)ppppbStack_90,1);
                }
                goto LAB_140fb182c;
              }
              uVar11 = 0;
LAB_140fb19b9:
              pdb_142dc7e2a(uVar11,pppppbVar14);
              goto LAB_140fb1faa;
            }
            lVar7 = pdb_142dc8e60(lVar7);
          }
          else {
            lVar7 = pdb_142dc8e60(pppppbVar15);
          }
          if ((byte *****)ppppbStack_90 != (byte *****)0x0) {
            pub_1406abac0((byte *)ppppbStack_88,(ulonglong)ppppbStack_90,1);
          }
LAB_140fb1c18:
          if (uStack_b8 != (byte ****)0x0) {
            pub_1406abac0((byte *)ppppbStack_58,(ulonglong)uStack_b8,1);
          }
          goto LAB_140fb1c36;
        }
LAB_140fb1f70:
        ppppbStack_68 = ppppbStack_58;
        pdb_142dc7e2a(uVar11,ppppbStack_180);
        goto LAB_140fb1faa;
      }
      plVar8 = (longlong *)(lStack_428 + 8);
      if (!SBORROW8(0,lStack_430)) {
        plVar8 = &lStack_428;
      }
      if (*(char *)(*plVar8 + -1 + *plVar13) != '/') goto LAB_140fb1400;
      ppppbStack_2f8 = (byte ****)CONCAT71(ppppbStack_2f8._1_7_,1);
      ppppbStack_68 = ppppbStack_b0;
      ppppbStack_58 = ppppbStack_b0;
      lVar7 = pdb_140f46c40(&ppppbStack_2f8,ppppbStack_b0,ppppbStack_a8);
      pppppbVar14 = (byte *****)ppppbStack_78;
      pppppbVar15 = (byte *****)ppppbStack_110;
      param_2 = uStack_118;
      if (lVar7 != 0) {
        ppppbStack_68 = ppppbStack_58;
        lVar7 = pdb_142dc8e60(lVar7);
        goto LAB_140fb1c18;
      }
LAB_140fb182c:
      param_1 = lStack_188;
      if (uStack_b8 != (byte ****)0x0) {
        pub_1406abac0((byte *)ppppbStack_58,(ulonglong)uStack_b8,1);
      }
      uStack_49 = 1;
      pdb_140f74fe0(&ppppbStack_468);
      pppppbVar14 = (byte *****)((longlong)pppppbVar14 + 1);
    } while (pppppbVar14 < pppppbVar15);
  }
  uStack_49 = 1;
  pdb_140f3e9e0(&ppppbStack_468,param_2,param_3,&UNK_143267898,9);
  ppppbStack_2f8 = (byte ****)((ulonglong)ppppbStack_2f8 & 0xffffffff00000000);
  uStack_2f0 = (byte *****)0x0;
  uStack_2e8 = 7;
  iStack_2e4 = 0;
  uStack_2de = 0;
  uStack_2dc = 0;
  uStack_2da = 0;
  uStack_2d8 = uStack_2d8 & 0xffffff00;
  uStack_2e0 = 1;
  uStack_2df = 1;
  uStack_2db = 1;
  pppppbVar14 = (byte *****)CONCAT44(uStack_45c,uStack_460);
  ppppbStack_58 = (byte ****)pppppbVar14;
  lVar7 = pdb_140f4a2a0(&ppppbStack_2f8,pppppbVar14,CONCAT44(uStack_454,uStack_458));
  if ((byte *****)ppppbStack_468 != (byte *****)0x0) {
    pub_1406abac0((byte *)ppppbStack_58,(ulonglong)ppppbStack_468,1);
  }
  if (lVar7 == 1) {
    uStack_4c = 1;
    uStack_178 = pppppbVar14;
    pdb_140f3f5b0(&ppppbStack_2f8);
    uStack_448 = uStack_2d8;
    uStack_444 = uStack_2d4;
    uStack_440 = (undefined4)uStack_2d0;
    uStack_43c = uStack_2d0._4_4_;
    uStack_458 = uStack_2e8;
    uStack_454 = iStack_2e4;
    uStack_450 = CONCAT44(CONCAT22(uStack_2da,CONCAT11(uStack_2db,uStack_2dc)),
                          CONCAT22(uStack_2de,CONCAT11(uStack_2df,uStack_2e0)));
    ppppbStack_468 = ppppbStack_2f8;
    uStack_460 = (undefined4)uStack_2f0;
    uStack_45c = uStack_2f0._4_4_;
    ppppbStack_2f8 = (byte ****)&UNK_1432678a1;
    uStack_2f0 = (byte *****)0x17;
    uStack_2e8 = SUB84(pppppbVar14,0);
    iStack_2e4 = (int)((ulonglong)pppppbVar14 >> 0x20);
    uStack_4c = 0;
    lVar7 = pdb_142dc8d80(&ppppbStack_2f8,&ppppbStack_468);
LAB_140fb1c4a:
    puVar17 = puStack_70;
    ppppbVar3 = ppppbStack_f0;
    if ((byte *****)ppppbStack_e8 != (byte *****)0x0) {
      pppppbVar14 = (byte *****)(ppppbStack_f0 + 4);
      pppppbVar15 = (byte *****)ppppbStack_e8;
      do {
        if (pppppbVar14[-4] != (byte ****)0x0) {
          pub_1406abac0((byte *)pppppbVar14[-3],(ulonglong)pppppbVar14[-4],1);
        }
        if (pppppbVar14[-1] != (byte ****)0x0) {
          pub_1406abac0((byte *)*pppppbVar14,(ulonglong)pppppbVar14[-1],1);
        }
        pppppbVar14 = pppppbVar14 + 6;
        pppppbVar15 = (byte *****)((longlong)pppppbVar15 + -1);
      } while (pppppbVar15 != (byte *****)0x0);
    }
    if ((byte *****)ppppbStack_f8 != (byte *****)0x0) {
      pub_1406abac0((byte *)ppppbVar3,(longlong)ppppbStack_f8 * 0x30,8);
    }
    plVar13 = (longlong *)*puVar17;
    LOCK();
    *plVar13 = *plVar13 + -1;
    lVar16 = *plVar13;
    UNLOCK();
    goto joined_r0x000140fb1dfe;
  }
  ppppbStack_c8 = ppppbStack_e8;
  ppppbStack_d8 = ppppbStack_f8;
  ppppbStack_d0 = ppppbStack_f0;
  ppppbStack_90 = (byte ****)pppppbVar14;
  pdb_140fb0450(&ppppbStack_468,&uStack_be8);
  uStack_b8 = (byte ****)0x0;
  ppppbStack_b0 = (byte ****)0x1;
  ppppbStack_a8 = (byte ****)0x0;
  uStack_168 = 0x60000020;
  uStack_178 = (byte *****)&uStack_b8;
  uStack_170 = (byte *****)&UNK_1432678f8;
  cVar6 = pdb_140fae350(&ppppbStack_468,&uStack_178);
  if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143267928,0x37,&uStack_59,&UNK_1432679e8,&UNK_1432679d0);
  }
  uStack_2d0 = (byte *****)ppppbStack_a8;
  uStack_2e0 = SUB81(uStack_b8,0);
  uStack_2df = (undefined1)((ulonglong)uStack_b8 >> 8);
  uStack_2de = (undefined2)((ulonglong)uStack_b8 >> 0x10);
  uStack_2dc = (undefined1)((ulonglong)uStack_b8 >> 0x20);
  uStack_2db = (undefined1)((ulonglong)uStack_b8 >> 0x28);
  uStack_2da = (undefined2)((ulonglong)uStack_b8 >> 0x30);
  uStack_2d8 = (uint)ppppbStack_b0;
  uStack_2d4 = (undefined4)((ulonglong)ppppbStack_b0 >> 0x20);
  ppppbStack_2f8 = ppppbStack_d8;
  uStack_2f0 = (byte *****)ppppbStack_d0;
  uStack_2e8 = SUB84(ppppbStack_c8,0);
  iStack_2e4 = (int)((ulonglong)ppppbStack_c8 >> 0x20);
  pdb_14007ee60();
  pppppbVar14 = (byte *****)pub_1406abab0(0x80,1);
  if (pppppbVar14 == (byte *****)0x0) {
    pdb_142dc7e2a(1,0x80);
LAB_140fb1faa:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uStack_178 = (byte *****)0x80;
  *(byte *)pppppbVar14 = 0x7b;
  uStack_168 = 1;
  uStack_b8 = (byte ****)CONCAT62(uStack_b8._2_6_,0x100);
  ppppbStack_b0 = (byte ****)&ppppbStack_d8;
  uStack_170 = pppppbVar14;
  ppppbStack_d8 = (byte ****)&uStack_178;
  pppppbVar14 = (byte *****)pdb_141eeb7d0(&uStack_b8,&DAT_143267868,5,&ppppbStack_2f8);
  if (pppppbVar14 == (byte *****)0x0) {
    if ((char)uStack_b8 == '\x01') {
      pppppbVar14 = (byte *****)pdb_142db8610();
      goto LAB_140fb1d21;
    }
    pppppbVar14 = (byte *****)pdb_141eebbb0(&uStack_b8,&DAT_14326786d,3,&uStack_2e0);
    if (pppppbVar14 != (byte *****)0x0) goto LAB_140fb1d21;
    if ((((ulonglong)uStack_b8 & 1) == 0) && (uStack_b8._1_1_ != '\0')) {
      pdb_140172c20(*ppppbStack_b0,&UNK_143267867,1);
    }
    pppppbVar14 = uStack_170;
    if (SBORROW8(0,(longlong)uStack_178)) goto LAB_140fb1d40;
    ppppbStack_58 = (byte ****)uStack_178;
    ppppbStack_78 = (byte ****)uStack_170;
    uVar11 = pdb_141eebcc0(&ppppbStack_90,uStack_170,uStack_168);
    lVar7 = pdb_141ed7b10(uVar11,&UNK_1432678b8,0x16);
    if (lVar7 != 0) {
      if ((byte *****)ppppbStack_58 != (byte *****)0x0) {
        pub_1406abac0((byte *)ppppbStack_78,(ulonglong)ppppbStack_58,1);
      }
      goto LAB_140fb1d4c;
    }
    if ((byte *****)ppppbStack_58 != (byte *****)0x0) {
      pub_1406abac0((byte *)ppppbStack_78,(ulonglong)ppppbStack_58,1);
    }
    pdb_140f762a0(&ppppbStack_2f8);
    lVar7 = 0;
    puVar17 = puStack_70;
  }
  else {
LAB_140fb1d21:
    if (uStack_178 != (byte *****)0x0) {
      pub_1406abac0((byte *)uStack_170,(ulonglong)uStack_178,1);
    }
LAB_140fb1d40:
    lVar7 = pdb_142dc8fa0(pppppbVar14);
LAB_140fb1d4c:
    puVar17 = puStack_70;
    pppppbVar14 = uStack_2f0;
    lVar16 = CONCAT44(iStack_2e4,uStack_2e8);
    if (lVar16 != 0) {
      pppppbVar15 = uStack_2f0 + 4;
      do {
        if (pppppbVar15[-4] != (byte ****)0x0) {
          pub_1406abac0((byte *)pppppbVar15[-3],(ulonglong)pppppbVar15[-4],1);
        }
        if (pppppbVar15[-1] != (byte ****)0x0) {
          pub_1406abac0((byte *)*pppppbVar15,(ulonglong)pppppbVar15[-1],1);
        }
        pppppbVar15 = pppppbVar15 + 6;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    if ((byte *****)ppppbStack_2f8 != (byte *****)0x0) {
      pub_1406abac0((byte *)pppppbVar14,(longlong)ppppbStack_2f8 * 0x30,8);
    }
    uVar10 = CONCAT26(uStack_2da,
                      CONCAT15(uStack_2db,
                               CONCAT14(uStack_2dc,
                                        CONCAT22(uStack_2de,CONCAT11(uStack_2df,uStack_2e0)))));
    if (uVar10 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_2d4,uStack_2d8),uVar10,1);
    }
  }
  CloseHandle(ppppbStack_90);
  plVar13 = (longlong *)*puVar17;
  LOCK();
  *plVar13 = *plVar13 + -1;
  lVar16 = *plVar13;
  UNLOCK();
joined_r0x000140fb1dfe:
  if (lVar16 == 0) {
    pdb_1406b11c0(puVar17);
  }
  return lVar7;
}

