// VA 0x140fb6c70, PDB extent 13822 bytes
// tg_integrity_report::controls::Controls::verification_status
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_integrity_report::controls::Controls::verification_status
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-integrity-report/src/controls.rs
   Extent: 13822 */

undefined8 * pdb_140fb6c70(undefined8 *param_1,code *param_2)

{
  code *pcVar1;
  code cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  longlong lVar8;
  code *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  code *pcVar13;
  longlong lVar14;
  code *pcVar15;
  longlong lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  uint uVar19;
  undefined8 uVar20;
  code *pcVar21;
  code *unaff_RBX;
  code *pcVar22;
  uint uVar23;
  code *pcVar24;
  code *pcVar25;
  bool bVar26;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  byte *pbStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined4 uStack_bc;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  code *pcStack_a8;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_78;
  undefined1 uStack_69;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)param_2 == -0x7ffffffffffffffc) {
    uVar20 = 0x22;
    uStack_98 = pdb_140dc6290(&UNK_1432687b8);
    uStack_188 = (byte *)&uStack_98;
    uStack_180 = pdb_1402ed400;
    uStack_90 = uVar20;
    pdb_140f60760(&uStack_108,&UNK_1432687da,&uStack_188);
    puVar7 = uStack_f8;
    pcVar24 = uStack_100;
    if ((longlong)uStack_f8 < 0) {
      uVar20 = 0;
    }
    else {
      if (uStack_f8 == (code *)0x0) {
        pbVar10 = (byte *)0x1;
joined_r0x000140fb70cc:
        if (uStack_108 != (code *)0x0) {
          pub_1406abac0((byte *)pcVar24,(ulonglong)uStack_108,1);
        }
        pdb_14007ee60();
        pbVar11 = pub_1406abab0(0x70,8);
        if (pbVar11 == (byte *)0x0) {
          pcStack_58 = (code *)puVar7;
          pbStack_118 = pbVar10;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x70);
        }
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        *(undefined **)(pbVar11 + 8) = &UNK_1434275c8;
        pbVar11[0x10] = 9;
        pbVar11[0x11] = 0;
        pbVar11[0x12] = 0;
        pbVar11[0x13] = 0;
        pbVar11[0x14] = 0;
        pbVar11[0x15] = 0;
        pbVar11[0x16] = 0;
        pbVar11[0x17] = 0;
        pbVar11[0x18] = 0;
        pbVar11[0x19] = 3;
        pbVar11[0x1a] = 4;
        *(undefined **)(pbVar11 + 0x20) = puVar7;
        *(byte **)(pbVar11 + 0x28) = pbVar10;
        *(undefined **)(pbVar11 + 0x30) = puVar7;
        uVar20 = _UNK_143268728;
        *(undefined8 *)(pbVar11 + 0x38) = _DAT_143268720;
        *(undefined8 *)(pbVar11 + 0x40) = uVar20;
        pbVar11[0x48] = 2;
        pbVar11[0x49] = 0;
        pbVar11[0x50] = 2;
        pbVar11[0x51] = 0;
        pbVar11[0x58] = 0;
        pbVar11[0x59] = 0;
        pbVar11[0x5a] = 0;
        pbVar11[0x5b] = 0;
        pbVar11[0x6c] = 1;
        pbVar11[0x6d] = 1;
        pbVar11[0x6e] = 0;
        pbVar11[0x6f] = 0;
        *param_1 = pbVar11;
        param_1[1] = &UNK_1434278d8;
        param_1[2] = 0;
        param_1[4] = 0;
        return param_1;
      }
      pdb_14007ee60();
      uVar20 = 1;
      pbVar10 = pub_1406abab0((ulonglong)puVar7,1);
      if (pbVar10 != (byte *)0x0) {
        pub_142e32760(pbVar10,pcVar24,puVar7);
        goto joined_r0x000140fb70cc;
      }
    }
    pcStack_58 = pcVar24;
    pdb_142dc7e2a(uVar20,puVar7);
    goto LAB_140fb904f;
  }
  lStack_110 = *(longlong *)param_2;
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x33,1);
  uVar20 = _UNK_143268809;
  if (pbVar10 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x33);
    uStack_69 = SUB81(pcStack_60,0);
    pdb_142dc7e2a(param_1,pcStack_68);
    goto LAB_140fb904f;
  }
  *(undefined8 *)(pbVar10 + 0x20) = _DAT_143268801;
  *(undefined8 *)(pbVar10 + 0x28) = uVar20;
  uVar20 = _UNK_1432687f9;
  *(undefined8 *)(pbVar10 + 0x10) = _DAT_1432687f1;
  *(undefined8 *)(pbVar10 + 0x18) = uVar20;
  uVar6 = _UNK_1432687ed;
  uVar5 = _UNK_1432687e9;
  uVar4 = _UNK_1432687e5;
  *(undefined4 *)pbVar10 = _DAT_1432687e1;
  *(undefined4 *)(pbVar10 + 4) = uVar4;
  *(undefined4 *)(pbVar10 + 8) = uVar5;
  *(undefined4 *)(pbVar10 + 0xc) = uVar6;
  pbVar10[0x2f] = 0x74;
  pbVar10[0x30] = 0x69;
  pbVar10[0x31] = 0x6f;
  pbVar10[0x32] = 0x6e;
  uStack_49 = 1;
  pcVar21 = (code *)0x27;
  pbStack_118 = pbVar10;
  lVar8 = pdb_140dc6290(&UNK_143268972);
  uStack_49 = 1;
  pdb_140f67bb0(&uStack_108,lVar8,pcVar21,&UNK_143268999,6);
  pcVar24 = pcVar21;
  pcStack_60 = param_2;
  pcStack_58 = pcVar21;
  if ((char)uStack_108 == '\0') {
    pcVar22 = unaff_RBX;
    if (uStack_f0._2_1_ != '\0') goto LAB_140fb71a9;
    lVar16 = CONCAT44(uStack_bc,CONCAT22(uStack_be,uStack_c0));
    pcVar25 = (code *)CONCAT44(uStack_b4,CONCAT22(uStack_b6,uStack_b8));
    if (uStack_100 != (code *)0x0) {
      pcVar15 = uStack_100;
      if (uStack_100 < pcVar25) {
        if (-0x41 < (char)uStack_100[lVar16]) goto LAB_140fb7196;
      }
      else if (uStack_100 == pcVar25) goto LAB_140fb7196;
      goto LAB_140fb6f66;
    }
LAB_140fb7196:
    pcVar22 = uStack_100;
    if (uStack_100 == pcVar25) {
      pcVar24 = uStack_100;
      if (((ulonglong)uStack_f0 & 1) == 0) goto LAB_140fb71a9;
    }
    else {
      cVar2 = uStack_100[lVar16];
      uVar19 = (uint)(byte)cVar2;
      if ((char)cVar2 < '\0') {
        if ((byte)cVar2 < 0xe0) {
          uVar19 = (uVar19 & 0x1f) << 6 | (byte)uStack_100[lVar16 + 1] & 0x3f;
        }
        else {
          uVar23 = (byte)uStack_100[lVar16 + 2] & 0x3f | ((byte)uStack_100[lVar16 + 1] & 0x3f) << 6;
          if ((byte)cVar2 < 0xf0) {
            uVar19 = (uVar19 & 0x1f) << 0xc | uVar23;
          }
          else {
            uVar19 = (uVar19 & 7) << 0x12 | (byte)uStack_100[lVar16 + 3] & 0x3f | uVar23 << 6;
          }
        }
      }
      pcVar24 = uStack_100;
      if (((ulonglong)uStack_f0 & 1) == 0) {
        lVar14 = 1;
        if ((0x7f < uVar19) && (lVar14 = 2, 0x7ff < uVar19)) {
          lVar14 = 4 - (ulonglong)(uVar19 < 0x10000);
        }
        pcVar15 = uStack_100 + lVar14;
        if (pcVar15 != (code *)0x0) {
          if (pcVar15 < pcVar25) {
            if ((char)pcVar15[lVar16] < -0x40) {
LAB_140fb6f66:
              uStack_49 = 1;
              pdb_142dc8070(lVar16,pcVar25,pcVar15,pcVar25,&UNK_1432687a0);
              goto LAB_140fb904f;
            }
          }
          else if (pcVar15 != pcVar25) goto LAB_140fb6f66;
        }
        pcVar22 = pcVar25;
        pcVar24 = pcVar25;
        if (pcVar15 != pcVar25) {
          pcVar22 = pcVar15;
          pcVar24 = pcVar15;
        }
      }
    }
LAB_140fb7345:
    param_2 = pcVar21 + -(longlong)pcVar22;
    pcVar22 = pcVar22 + lVar8;
    lVar16 = lVar8;
  }
  else {
    pcVar25 = (code *)CONCAT44(uStack_cc,uStack_d0);
    lVar16 = CONCAT44(uStack_bc,CONCAT22(uStack_be,uStack_c0));
    pcVar15 = (code *)CONCAT44(uStack_b4,CONCAT22(uStack_b6,uStack_b8));
    lVar14 = CONCAT44(uStack_ac,uStack_b0);
    pcVar22 = pcStack_a8;
    if (pcVar25 == (code *)0xffffffffffffffff) {
      pcVar25 = uStack_e0 + (longlong)(pcStack_a8 + -1);
      if (pcVar25 < pcVar15) {
        pcVar9 = uStack_100 + -1;
        pcVar13 = uStack_e0;
        if (pcVar9 < pcStack_a8) {
LAB_140fb70f9:
          if (((ulonglong)uStack_e8 >> ((ulonglong)(byte)pcVar25[lVar16] & 0x3f) & 1) == 0) {
            pcVar13 = pcVar13 + (longlong)pcStack_a8;
          }
          else {
            lVar12 = -(longlong)pcVar13;
            pcVar24 = uStack_100;
            do {
              if (pcStack_a8 == pcVar24) {
                pcVar24 = pcVar9 + (longlong)pcVar13;
                pcVar25 = pcVar9 + lVar14;
                pcVar18 = uStack_100;
                goto LAB_140fb7160;
              }
              if (pcVar15 <= pcVar13 + (longlong)pcVar24) goto LAB_140fb8f3f;
              pcVar25 = pcVar24 + lVar14;
              param_2 = (code *)(ulonglong)(byte)*pcVar25;
              lVar12 = lVar12 + -1;
              pcVar18 = pcVar13 + lVar16 + (longlong)pcVar24;
              pcVar24 = pcVar24 + 1;
            } while (*pcVar25 == *pcVar18);
            pcVar13 = (code *)-lVar12;
          }
          goto LAB_140fb70e5;
        }
        pcStack_68 = uStack_e8;
        do {
          pcStack_78 = pcVar9;
          if (((ulonglong)uStack_e8 >> ((ulonglong)(byte)pcVar25[lVar16] & 0x3f) & 1) != 0) {
            lVar12 = 0;
            pcVar24 = pcVar13;
LAB_140fb7200:
            if (uStack_100 + lVar12 < pcStack_a8) goto code_r0x000140fb720d;
            if (uStack_100 != (code *)0x0) {
              uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pcVar9,pcStack_a8,&UNK_143268a48);
            }
LAB_140fb72c7:
            pcVar22 = pcStack_a8 + (longlong)pcVar13;
            pcVar24 = pcVar13;
            goto LAB_140fb7345;
          }
          pcVar25 = pcVar13 + (longlong)pcStack_a8;
LAB_140fb7237:
          pcVar13 = pcVar25;
          pcVar25 = pcVar13 + (longlong)(pcStack_a8 + -1);
          pcVar24 = uStack_100;
        } while (pcVar25 < pcVar15);
      }
    }
    else {
      pcVar9 = uStack_e0 + (longlong)(pcStack_a8 + -1);
      pcVar24 = uStack_e0;
      if (pcVar9 < pcVar15) {
        pcStack_68 = uStack_f0;
        pcStack_78 = pcStack_a8 + -(longlong)uStack_f0;
LAB_140fb6e60:
        if (((ulonglong)uStack_e8 >> ((ulonglong)(byte)pcVar9[lVar16] & 0x3f) & 1) == 0) {
          pcVar24 = pcVar24 + (longlong)pcStack_a8;
        }
        else {
          pcVar9 = uStack_100;
          if (uStack_100 < pcVar25) {
            pcVar9 = pcVar25;
          }
          pcVar13 = pcVar9;
          do {
            pcVar18 = uStack_100;
            if (pcStack_a8 <= pcVar13) goto LAB_140fb6ee0;
            if (pcVar15 <= pcVar24 + (longlong)pcVar13) {
              pcVar21 = pcVar9 + (longlong)pcVar24;
              if (pcVar9 + (longlong)pcVar24 < pcVar15) {
                pcVar21 = pcVar15;
              }
              uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pcVar21,pcVar15,&UNK_143268a78);
            }
            param_2 = pcVar13 + 1;
            pcVar18 = pcVar13 + lVar14;
            pcVar1 = pcVar24 + lVar16 + (longlong)pcVar13;
            pcVar13 = param_2;
          } while (*pcVar18 == *pcVar1);
          pcVar24 = param_2 + ((longlong)pcVar24 - (longlong)uStack_100);
        }
        pcVar25 = (code *)0x0;
        goto LAB_140fb6eb8;
      }
    }
LAB_140fb71a9:
    lVar16 = 0;
  }
  bVar26 = lVar16 == 0;
  if (bVar26) {
    pcVar24 = pcVar21;
    lVar16 = lVar8;
  }
  pbVar10 = (byte *)0x1;
  if (bVar26) {
    pcVar22 = (code *)0x1;
    param_2 = (code *)0x0;
  }
  if ((longlong)pcVar24 < 0) {
    uVar20 = 0;
LAB_140fb7379:
    uStack_49 = 1;
    pdb_142dc7e2a(uVar20,pcVar24);
    goto LAB_140fb904f;
  }
  if (pcVar24 != (code *)0x0) {
    pdb_14007ee60();
    uVar20 = 1;
    pbVar10 = pub_1406abab0((ulonglong)pcVar24,1);
    if (pbVar10 == (byte *)0x0) goto LAB_140fb7379;
    pub_142e32760(pbVar10,lVar16,pcVar24);
  }
  pdb_14007ee60();
  pbVar11 = pub_1406abab0(0x70,8);
  if (pbVar11 == (byte *)0x0) {
    pcStack_60 = (code *)pbVar10;
    pcStack_58 = pcVar24;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x70);
  }
  pbVar11[0] = 0;
  pbVar11[1] = 0;
  pbVar11[2] = 0;
  pbVar11[3] = 0;
  pbVar11[4] = 0;
  pbVar11[5] = 0;
  pbVar11[6] = 0;
  pbVar11[7] = 0;
  *(undefined **)(pbVar11 + 8) = &UNK_1434275c8;
  pbVar11[0x10] = 9;
  pbVar11[0x11] = 0;
  pbVar11[0x12] = 0;
  pbVar11[0x13] = 0;
  pbVar11[0x14] = 0;
  pbVar11[0x15] = 0;
  pbVar11[0x16] = 0;
  pbVar11[0x17] = 0;
  pbVar11[0x18] = 0;
  pbVar11[0x19] = 3;
  pbVar11[0x1a] = 4;
  *(code **)(pbVar11 + 0x20) = pcVar24;
  *(byte **)(pbVar11 + 0x28) = pbVar10;
  *(code **)(pbVar11 + 0x30) = pcVar24;
  pbVar11[0x38] = 0;
  pbVar11[0x39] = 0;
  pbVar11[0x3a] = 0;
  pbVar11[0x3b] = 0;
  pbVar11[0x40] = 0;
  pbVar11[0x41] = 0;
  pbVar11[0x42] = 0;
  pbVar11[0x43] = 0;
  pbVar11[0x44] = 0x66;
  pbVar11[0x45] = 0x66;
  pbVar11[0x46] = 0xa6;
  pbVar11[0x47] = 0x3f;
  pbVar11[0x48] = 2;
  pbVar11[0x49] = 0;
  pbVar11[0x50] = 2;
  pbVar11[0x51] = 0;
  pbVar11[0x58] = 0;
  pbVar11[0x59] = 0;
  pbVar11[0x5a] = 0;
  pbVar11[0x5b] = 0;
  pbVar11[0x6c] = 1;
  pbVar11[0x6d] = 0;
  pbVar11[0x6e] = 0;
  uVar20 = 0x24;
  pcStack_58 = param_2;
  uStack_98 = pdb_140dc6290(&UNK_14326899f);
  uStack_188 = (byte *)&uStack_98;
  uStack_180 = pdb_1402ed400;
  uStack_90 = uVar20;
  pdb_140f60760(&uStack_108,&UNK_1432689c3,&uStack_188);
  puVar7 = uStack_f8;
  pcStack_68 = uStack_100;
  if ((longlong)uStack_f8 < 0) {
    pcStack_78 = uStack_108;
    uVar20 = 0;
LAB_140fb74d7:
    pdb_142dc7e2a(uVar20,puVar7);
  }
  else {
    if (uStack_f8 == (code *)0x0) {
      pbVar10 = (byte *)0x1;
      pcVar24 = uStack_108;
    }
    else {
      pcStack_78 = uStack_108;
      pdb_14007ee60();
      uVar20 = 1;
      pbVar10 = pub_1406abab0((ulonglong)puVar7,1);
      if (pbVar10 == (byte *)0x0) goto LAB_140fb74d7;
      pub_142e32760(pbVar10,pcStack_68,puVar7);
      pcVar24 = pcStack_78;
    }
    uStack_108 = (code *)0x0;
    uStack_100 = (code *)&UNK_1434275c8;
    uStack_f8 = (code *)0x9;
    uStack_f0 = (code *)CONCAT53(uStack_f0._3_5_,0x40300);
    uStack_e8 = (code *)puVar7;
    uStack_d8 = puVar7;
    uStack_d0 = 0;
    uStack_c8 = 0x3fa6666600000000;
    uStack_c0 = 2;
    uStack_b8 = 2;
    uStack_b0 = 0;
    uStack_9c = 1;
    uStack_9a = 0;
    uStack_e0 = (code *)pbVar10;
    if (pcVar24 != (code *)0x0) {
      pub_1406abac0((byte *)pcStack_68,(ulonglong)pcVar24,1);
    }
    pdb_141ef54b0(&uStack_188,&uStack_108);
    if ((-0x7ffffffffffffffe < (longlong)uStack_170) && (uStack_170 != (code *)0x0)) {
      pub_1406abac0((byte *)uStack_168,(ulonglong)uStack_170,1);
    }
    uStack_170 = (code *)0x8000000000000001;
    uStack_168 = (code *)&UNK_1432689cb;
    uStack_160 = (code *)0x3e;
    uStack_108 = (code *)uStack_188;
    uStack_100 = uStack_180;
    uStack_d8 = (undefined *)uStack_158;
    uStack_d0 = (undefined4)uStack_150;
    uStack_cc = uStack_150._4_4_;
    uStack_c8._0_4_ = uStack_148;
    uStack_c8._4_4_ = uStack_144;
    uStack_c0 = (undefined2)uStack_140;
    uStack_be = (undefined2)((uint)uStack_140 >> 0x10);
    uStack_bc = uStack_13c;
    uStack_b8 = (undefined2)uStack_138;
    uStack_b6 = (undefined2)((ulonglong)uStack_138 >> 0x10);
    uStack_b4 = uStack_138._4_4_;
    uStack_b0 = (undefined4)uStack_130;
    uStack_ac = uStack_130._4_4_;
    pcStack_a8 = pcStack_128;
    uStack_f8 = uStack_178;
    uStack_f0 = (code *)0x8000000000000001;
    uStack_e8 = (code *)&UNK_1432689cb;
    uStack_e0 = (code *)0x3e;
    if ((undefined8 *)0x4 < uStack_188) {
      pcStack_78 = uStack_178;
      pcStack_68 = uStack_100;
      if (*(code **)uStack_178 != (code *)0x0) {
        (**(code **)uStack_178)(uStack_180);
      }
      if (*(ulonglong *)(pcStack_78 + 8) != 0) {
        pub_1406abac0((byte *)pcStack_68,*(ulonglong *)(pcStack_78 + 8),
                      *(ulonglong *)(pcStack_78 + 0x10));
      }
    }
    uStack_108 = (code *)0x5;
    uStack_100 = (code *)0x1;
    uStack_f8 = (code *)&UNK_143268a10;
    uStack_150 = CONCAT44(uStack_cc,uStack_d0);
    uStack_140 = CONCAT22(uStack_be,uStack_c0);
    uStack_168 = uStack_e8;
    uStack_160 = uStack_e0;
    uStack_158 = uStack_d8;
    uStack_148 = (undefined4)uStack_c8;
    uStack_144 = uStack_c8._4_4_;
    uStack_13c = uStack_bc;
    uStack_188 = (byte *)0x5;
    uStack_180 = (code *)0x1;
    uStack_178 = (code *)&UNK_143268a10;
    uStack_170 = uStack_f0;
    uStack_138 = 0;
    uStack_130 = 0;
    pcStack_128 = pcStack_a8;
    pdb_14007ee60();
    pcVar24 = (code *)pub_1406abab0(0x68,8);
    if (pcVar24 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x68);
    }
    *(code **)(pcVar24 + 0x60) = pcStack_128;
    *(undefined8 *)(pcVar24 + 0x50) = uStack_138;
    *(undefined8 *)(pcVar24 + 0x58) = uStack_130;
    *(ulonglong *)(pcVar24 + 0x40) = CONCAT44(uStack_144,uStack_148);
    *(ulonglong *)(pcVar24 + 0x48) = CONCAT44(uStack_13c,uStack_140);
    *(undefined4 *)(pcVar24 + 0x30) = (undefined4)uStack_158;
    *(undefined4 *)(pcVar24 + 0x34) = uStack_158._4_4_;
    *(undefined4 *)(pcVar24 + 0x38) = (undefined4)uStack_150;
    *(undefined4 *)(pcVar24 + 0x3c) = uStack_150._4_4_;
    *(undefined4 *)(pcVar24 + 0x20) = (undefined4)uStack_168;
    *(undefined4 *)(pcVar24 + 0x24) = uStack_168._4_4_;
    *(undefined4 *)(pcVar24 + 0x28) = (undefined4)uStack_160;
    *(undefined4 *)(pcVar24 + 0x2c) = uStack_160._4_4_;
    *(undefined4 *)(pcVar24 + 0x10) = (undefined4)uStack_178;
    *(undefined4 *)(pcVar24 + 0x14) = uStack_178._4_4_;
    *(undefined4 *)(pcVar24 + 0x18) = (undefined4)uStack_170;
    *(undefined4 *)(pcVar24 + 0x1c) = uStack_170._4_4_;
    *(undefined4 *)pcVar24 = (undefined4)uStack_188;
    *(undefined4 *)(pcVar24 + 4) = uStack_188._4_4_;
    *(undefined4 *)(pcVar24 + 8) = (undefined4)uStack_180;
    *(undefined4 *)(pcVar24 + 0xc) = uStack_180._4_4_;
    uStack_100 = (code *)&UNK_143427740;
    uStack_108 = pcVar24;
    if ((longlong)pcStack_58 < 0) {
      uVar20 = 0;
      pcVar21 = pcStack_58;
    }
    else {
      if (pcStack_58 == (code *)0x0) {
        pcStack_68 = (code *)0x1;
LAB_140fb7872:
        pdb_14007ee60();
        pbVar10 = pub_1406abab0(0x70,8);
        if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x70);
        }
        pbVar10[0] = 0;
        pbVar10[1] = 0;
        pbVar10[2] = 0;
        pbVar10[3] = 0;
        pbVar10[4] = 0;
        pbVar10[5] = 0;
        pbVar10[6] = 0;
        pbVar10[7] = 0;
        *(undefined **)(pbVar10 + 8) = &UNK_1434275c8;
        pbVar10[0x10] = 9;
        pbVar10[0x11] = 0;
        pbVar10[0x12] = 0;
        pbVar10[0x13] = 0;
        pbVar10[0x14] = 0;
        pbVar10[0x15] = 0;
        pbVar10[0x16] = 0;
        pbVar10[0x17] = 0;
        pbVar10[0x18] = 0;
        pbVar10[0x19] = 3;
        pbVar10[0x1a] = 4;
        *(code **)(pbVar10 + 0x20) = pcStack_58;
        *(code **)(pbVar10 + 0x28) = pcStack_68;
        *(code **)(pbVar10 + 0x30) = pcStack_58;
        pbVar10[0x38] = 0;
        pbVar10[0x39] = 0;
        pbVar10[0x3a] = 0;
        pbVar10[0x3b] = 0;
        pbVar10[0x40] = 0;
        pbVar10[0x41] = 0;
        pbVar10[0x42] = 0;
        pbVar10[0x43] = 0;
        pbVar10[0x44] = 0x66;
        pbVar10[0x45] = 0x66;
        pbVar10[0x46] = 0xa6;
        pbVar10[0x47] = 0x3f;
        pbVar10[0x48] = 2;
        pbVar10[0x49] = 0;
        pbVar10[0x50] = 2;
        pbVar10[0x51] = 0;
        pbVar10[0x58] = 0;
        pbVar10[0x59] = 0;
        pbVar10[0x5a] = 0;
        pbVar10[0x5b] = 0;
        pbVar10[0x6c] = 1;
        pbVar10[0x6d] = 0;
        pbVar10[0x6e] = 0;
        uStack_180 = (code *)&UNK_1434278d8;
        uStack_170 = (code *)&UNK_143427740;
        uStack_160 = (code *)&UNK_1434278d8;
        uStack_49 = 1;
        uStack_188 = pbVar11;
        uStack_178 = pcVar24;
        uStack_168 = (code *)pbVar10;
        pdb_140fe97d0(&uStack_108,&uStack_188);
        pdb_14007ee60();
        pbVar10 = pub_1406abab0(0x40,8);
        if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x40);
        }
        *(undefined4 *)(pbVar10 + 0x30) = (undefined4)uStack_d8;
        *(undefined4 *)(pbVar10 + 0x34) = uStack_d8._4_4_;
        *(undefined4 *)(pbVar10 + 0x38) = uStack_d0;
        *(undefined4 *)(pbVar10 + 0x3c) = uStack_cc;
        *(undefined4 *)(pbVar10 + 0x20) = (undefined4)uStack_e8;
        *(undefined4 *)(pbVar10 + 0x24) = uStack_e8._4_4_;
        *(undefined4 *)(pbVar10 + 0x28) = (undefined4)uStack_e0;
        *(undefined4 *)(pbVar10 + 0x2c) = uStack_e0._4_4_;
        *(undefined4 *)(pbVar10 + 0x10) = (undefined4)uStack_f8;
        *(undefined4 *)(pbVar10 + 0x14) = uStack_f8._4_4_;
        *(undefined4 *)(pbVar10 + 0x18) = (undefined4)uStack_f0;
        *(undefined4 *)(pbVar10 + 0x1c) = uStack_f0._4_4_;
        *(undefined4 *)pbVar10 = (undefined4)uStack_108;
        *(undefined4 *)(pbVar10 + 4) = uStack_108._4_4_;
        *(undefined4 *)(pbVar10 + 8) = (undefined4)uStack_100;
        *(undefined4 *)(pbVar10 + 0xc) = uStack_100._4_4_;
        lVar8 = 4;
        if (lStack_110 < 0) {
          lVar8 = lStack_110;
        }
                    /* WARNING: Could not recover jumptable at 0x000140fb79ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar17 = (undefined8 *)
                  (*(code *)(&UNK_143268aa4 + *(int *)(&UNK_143268aa4 + lVar8 * 4)))
                            (&UNK_143268aa4 + *(int *)(&UNK_143268aa4 + lVar8 * 4));
        return puVar17;
      }
      pdb_14007ee60();
      pcVar21 = pcStack_58;
      uVar20 = 1;
      pbVar10 = pub_1406abab0((ulonglong)pcStack_58,1);
      if (pbVar10 != (byte *)0x0) {
        pcStack_68 = (code *)pbVar10;
        pub_142e32760(pbVar10,pcVar22,pcVar21);
        goto LAB_140fb7872;
      }
    }
    pdb_142dc7e2a(uVar20,pcVar21);
  }
LAB_140fb904f:
                    /* WARNING: Does not return */
  pcVar24 = (code *)invalidInstructionException();
  (*pcVar24)();
  while( true ) {
    if (pcVar15 <= pcVar24) {
      uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pcVar24,pcVar15,&UNK_143268a60);
    }
    cVar2 = *pcVar25;
    param_2 = (code *)(ulonglong)(byte)cVar2;
    pcVar25 = pcVar25 + -1;
    pcVar1 = pcVar24 + lVar16;
    pcVar24 = pcVar24 + -1;
    if (cVar2 != *pcVar1) break;
LAB_140fb7160:
    bVar26 = pcVar18 == (code *)0x0;
    pcVar18 = pcVar18 + -1;
    if (bVar26) goto LAB_140fb72c7;
  }
  pcVar13 = pcVar13 + (longlong)uStack_f0;
LAB_140fb70e5:
  pcVar25 = pcVar13 + (longlong)(pcStack_a8 + -1);
  pcVar24 = uStack_100;
  if (pcVar15 <= pcVar25) goto LAB_140fb71a9;
  goto LAB_140fb70f9;
code_r0x000140fb720d:
  if (pcVar15 <= uStack_100 + (longlong)pcVar24) {
LAB_140fb8f3f:
    pcVar24 = pcVar13 + (longlong)uStack_100;
    if (pcVar13 + (longlong)uStack_100 < pcVar15) {
      pcVar24 = pcVar15;
    }
    uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pcVar24,pcVar15,&UNK_143268a78);
  }
  lVar3 = lVar12 + lVar14;
  param_2 = (code *)(ulonglong)(byte)uStack_100[lVar3];
  pcVar25 = pcVar24 + 1;
  lVar12 = lVar12 + 1;
  pcVar18 = uStack_100 + lVar16 + (longlong)pcVar24;
  pcVar24 = pcVar25;
  if (uStack_100[lVar3] != *pcVar18) goto LAB_140fb7237;
  goto LAB_140fb7200;
  while( true ) {
    pcVar18 = pcVar18 + -1;
    if (pcStack_a8 <= pcVar18) {
      uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pcVar18,pcStack_a8,&UNK_143268a48);
    }
    pcVar9 = pcVar18 + (longlong)pcVar24;
    if (pcVar15 <= pcVar9) {
      uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pcVar9,pcVar15,&UNK_143268a60);
    }
    param_2 = (code *)(ulonglong)(byte)pcVar18[lVar14];
    if (pcVar18[lVar14] != pcVar9[lVar16]) break;
LAB_140fb6ee0:
    if (pcVar18 <= pcVar25) {
      pcVar22 = pcStack_a8 + (longlong)pcVar24;
      goto LAB_140fb7345;
    }
  }
  pcVar24 = pcVar24 + (longlong)uStack_f0;
  pcVar25 = pcStack_78;
LAB_140fb6eb8:
  pcVar9 = pcStack_a8 + -1 + (longlong)pcVar24;
  if (pcVar15 <= pcVar9) goto LAB_140fb71a9;
  goto LAB_140fb6e60;
}

