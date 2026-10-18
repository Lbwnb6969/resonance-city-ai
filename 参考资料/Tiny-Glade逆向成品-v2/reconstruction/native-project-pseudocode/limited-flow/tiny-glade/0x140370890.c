// VA 0x140370890, PDB extent 12121 bytes
// tiny_glade::gui::settings::ui_settings_video
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::ui_settings_video
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 12121 */

void pdb_140370890(longlong *param_1,char *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 param_11)

{
  byte *pbVar1;
  undefined8 *puVar2;
  code *pcVar3;
  code cVar4;
  code cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  code *pcVar17;
  longlong lVar18;
  code *pcVar19;
  code *pcVar20;
  code cVar21;
  int iVar22;
  undefined8 *******pppppppuVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 *puVar28;
  longlong *plVar29;
  undefined8 ****ppppuVar30;
  uint *puVar31;
  undefined8 *******pppppppuVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined8 ******ppppppuVar35;
  ulonglong uVar36;
  uint uVar37;
  undefined8 *******pppppppuVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  undefined8 *****pppppuStack_228;
  ulonglong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  int iStack_200;
  undefined4 uStack_1fc;
  longlong *plStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *****pppppuStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *******pppppppuStack_1c0;
  code *pcStack_1b8;
  float fStack_1ac;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *******pppppppuStack_198;
  code *pcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined8 *******pppppppuStack_108;
  code *pcStack_100;
  undefined8 *******pppppppuStack_f8;
  undefined4 uStack_ec;
  undefined4 *puStack_e8;
  code *pcStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  code *pcStack_c0;
  undefined8 *******pppppppuStack_b8;
  undefined1 uStack_a9;
  code *pcStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *******apppppppuStack_88 [2];
  code *pcStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  pbStack_a0 = (byte *)param_4;
  if (*param_2 == '\0') {
    uVar15 = 0x19;
    pppppppuStack_c8 = (undefined8 *******)pdb_140dc6290(&UNK_142f44c8e);
    uStack_90 = pdb_1402ed400;
    pcStack_c0 = (code *)uVar15;
    uStack_98 = &pppppppuStack_c8;
    pdb_140f60760(&uStack_1a8,&UNK_142f44ca7,&uStack_98);
    pcStack_78 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
    pdb_140733c60(&uStack_98,pbStack_a0,pcStack_78,pppppppuStack_198);
    uVar15 = pdb_140725900(&uStack_98);
    cVar9 = pdb_140732b50(uVar15);
    if (CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8) != 0) {
      pub_1406abac0((byte *)pcStack_78,CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8),1);
    }
    if (cVar9 != '\0') {
      uStack_1a0._0_4_ = (float)CONCAT31(uStack_1a0._1_3_,1);
      uStack_1a8._0_4_ = 7;
      uStack_1a8._4_4_ = 0;
      pdb_140a003a0(param_11,&uStack_1a8);
    }
    uVar15 = 0x1b;
    pppppppuStack_c8 = (undefined8 *******)pdb_140dc6290(&UNK_142f44cac);
    uStack_90 = pdb_1402ed400;
    pcStack_c0 = (code *)uVar15;
    uStack_98 = &pppppppuStack_c8;
    pdb_140f60760(&uStack_1a8,&UNK_142f44ca7,&uStack_98);
    pbVar1 = pbStack_a0;
    pbStack_a0 = (byte *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
    pdb_140733c60(&uStack_98,pbVar1,pbStack_a0,pppppppuStack_198);
    uVar15 = pdb_140725900(&uStack_98);
    cVar9 = pdb_140732b50(uVar15);
    if (CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8) != 0) {
      pub_1406abac0(pbStack_a0,CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8),1);
    }
    if (cVar9 == '\0') {
      return;
    }
    uStack_1a0._0_4_ = (float)CONCAT31(uStack_1a0._1_3_,2);
    uStack_1a8._0_4_ = 7;
    uStack_1a8._4_4_ = 0;
    pdb_140a003a0(param_11,&uStack_1a8);
    return;
  }
  if (*param_2 != '\x01') {
    param_3 = (longlong *)*param_3;
    pppppppuStack_d8 = (undefined8 *******)*param_7;
    pcStack_a8 = (code *)*param_8;
    uVar15 = pdb_140dc6290(&UNK_142f44cac);
    pdb_140734440(&uStack_1a8,pbStack_a0,uVar15);
    uVar15 = pdb_140726ff0(&uStack_1a8);
    pdb_14060a7e0(uVar15);
    apppppppuStack_88[0] = pppppppuStack_198;
    uStack_98 = (undefined8 *******)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
    uStack_90 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
    pdb_1407270c0(&uStack_1a8,&uStack_98);
    puVar7 = (undefined4 *)param_1[2];
    pcStack_e0 = (code *)CONCAT44(pcStack_e0._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
    *puVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar6 = *param_1;
    if ((*(char *)(lVar6 + 0xae) == '\x01') &&
       (pppppppuVar32 = (undefined8 *******)param_3[1], pppppppuVar32 != (undefined8 *******)0x0)) {
      lVar18 = *param_3;
      lVar33 = 0;
      ppppppuVar35 = (undefined8 ******)0x0;
LAB_140370b90:
      if (*(longlong *)(lVar18 + 0x80 + lVar33) != *(longlong *)(lVar6 + 0xb7) ||
          *(longlong *)(lVar18 + 0x78 + lVar33) != *(longlong *)(lVar6 + 0xaf))
      goto code_r0x000140370bac;
      pppppppuStack_108 = (undefined8 *******)ppppppuVar35;
      pdb_14007ee60();
      pcVar16 = (code *)pub_1406abab0((longlong)pppppppuVar32 * 0x18,8);
      if (pcVar16 == (code *)0x0) {
        pdb_142dc7e2a(8,(longlong)pppppppuVar32 * 0x18);
LAB_140372eae:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2();
      }
      uStack_1a8 = apppppppuStack_88;
      apppppppuStack_88[0] = (undefined8 *******)0x0;
      uStack_1a0._0_4_ = 0.0;
      uStack_1a0._4_4_ = 0.0;
      pppppppuStack_198 = (undefined8 *******)pcVar16;
      uStack_98 = pppppppuVar32;
      uStack_90 = pcVar16;
      pdb_140565bd0(lVar18,lVar18 + (longlong)pppppppuVar32 * 0xa0,&uStack_1a8);
      pppppppuStack_c8 = uStack_98;
      pcStack_c0 = uStack_90;
      pppppppuStack_b8 = apppppppuStack_88[0];
      uVar26 = 0x1a;
      uVar15 = pdb_140dc6290(&UNK_142f45038,0x1a);
      uVar27 = 0x1e;
      uVar14 = pdb_140dc6290(&UNK_142f45052,0x1e);
      pdb_140724ba0(&uStack_98,param_5,uVar14,uVar27);
      uVar41 = pdb_140724c30();
      pppppppuVar32 = pppppppuStack_b8;
      pcStack_78 = pcStack_c0;
      uStack_1a8._0_4_ = (int)pcStack_c0;
      uStack_1a8._4_4_ = (undefined4)((ulonglong)pcStack_c0 >> 0x20);
      uStack_1a0._0_4_ = SUB84(pppppppuStack_b8,0);
      uStack_1a0._4_4_ = (float)((ulonglong)pppppppuStack_b8 >> 0x20);
      pppppppuStack_198 = &pppppppuStack_108;
      cVar9 = pdb_140307d10(pbStack_a0,uVar15,uVar26,&uStack_98,uVar41,&uStack_1a8);
      if (cVar9 != '\0') {
        *param_6 = 1;
        if ((undefined8 ******)param_3[1] <= pppppppuStack_108) goto LAB_140372eae;
        puVar2 = (undefined8 *)(*param_3 + 0x78 + (longlong)pppppppuStack_108 * 0xa0);
        uVar15 = *puVar2;
        uVar14 = puVar2[1];
        uStack_1a8._0_4_ = (int)uVar15;
        uStack_1a8._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
        uStack_1a0._0_4_ = (float)uVar14;
        uStack_1a0._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
        *puVar7 = pcStack_e0._0_4_;
        *(undefined1 *)(lVar6 + 0xae) = 1;
        *(int *)(lVar6 + 0xaf) = (int)uStack_1a8;
        *(undefined4 *)(lVar6 + 0xb3) = uStack_1a8._4_4_;
        *(float *)(lVar6 + 0xb7) = (float)uStack_1a0;
        *(float *)(lVar6 + 0xbb) = uStack_1a0._4_4_;
      }
      lVar18 = pdb_140a92040(pppppppuStack_d8);
      if ((*(char *)(lVar6 + 0xae) != '\x01') ||
         (*(longlong *)(*(longlong *)(lVar18 + 0x668) + 0x698) != *(longlong *)(lVar6 + 0xb7) ||
          *(longlong *)(*(longlong *)(lVar18 + 0x668) + 0x690) != *(longlong *)(lVar6 + 0xaf))) {
        if ((undefined8 ******)param_3[1] <= pppppppuStack_108) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pppppppuStack_108,(undefined8 ******)param_3[1],&UNK_142f45530);
        }
        if (*(char *)(*param_3 + 0x9c + (longlong)pppppppuStack_108 * 0xa0) == '\x01') {
          uVar14 = 0x1f;
          uVar15 = pdb_140dc6290(&UNK_142f45099,0x1f);
          pdb_140734440(&uStack_1a8,pbStack_a0,uVar15,uVar14);
          uVar15 = pdb_140726ff0(&uStack_1a8);
          pdb_14060a7e0(uVar15);
          apppppppuStack_88[0] = pppppppuStack_198;
          uStack_98 = (undefined8 *******)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
          uStack_90 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
          pdb_140727040(&uStack_1a8,&uStack_98,0xffa080ff);
          pdb_1406ccf20(&uStack_98,&uStack_1a8);
        }
        else {
          uVar14 = 0x29;
          uVar15 = pdb_140dc6290(&UNK_142f45070,0x29);
          pdb_140734440(&uStack_1a8,pbStack_a0,uVar15,uVar14);
          uVar15 = pdb_140726ff0(&uStack_1a8);
          pdb_14060a7e0(uVar15);
          apppppppuStack_88[0] = pppppppuStack_198;
          uStack_98 = (undefined8 *******)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
          uStack_90 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
          pdb_140727040(&uStack_1a8,&uStack_98,0xffa080ff);
          pdb_1406ccf20(&uStack_98,&uStack_1a8);
        }
      }
      pcVar16 = pcStack_78;
      if (pppppppuVar32 != (undefined8 *******)0x0) {
        pcVar17 = pcStack_78 + 8;
        do {
          if (*(ulonglong *)(pcVar17 + -8) != 0) {
            pub_1406abac0(*(byte **)pcVar17,*(ulonglong *)(pcVar17 + -8),1);
          }
          pcVar17 = pcVar17 + 0x18;
          pppppppuVar32 = (undefined8 *******)((longlong)pppppppuVar32 + -1);
        } while (pppppppuVar32 != (undefined8 *******)0x0);
      }
      if (pppppppuStack_c8 != (undefined8 *******)0x0) {
        pub_1406abac0((byte *)pcVar16,(longlong)pppppppuStack_c8 * 0x18,8);
      }
    }
LAB_140371eb4:
    *puVar7 = pcStack_e0._0_4_;
    pppppuStack_1d0 =
         (undefined8 *****)CONCAT71(pppppuStack_1d0._1_7_,*(undefined1 *)(lVar6 + 0x7c));
    uVar26 = 0x1f;
    uVar15 = pdb_140dc6290(&UNK_142f450b8,0x1f);
    uVar27 = 0x23;
    uVar14 = pdb_140dc6290(&UNK_142f450d7,0x23);
    pdb_140724ba0(&uStack_1a8,param_5,uVar14,uVar27);
    uVar41 = pdb_140724c30();
    cVar9 = pdb_14030c690(pbStack_a0,uVar15,uVar26,&uStack_1a8,uVar41,&pppppuStack_1d0);
    pcVar16 = pcStack_a8;
    if (cVar9 != '\0') {
      *param_6 = 1;
      *(char *)(lVar6 + 0x7c) = (char)pppppuStack_1d0;
    }
    if ((char)pppppuStack_1d0 != '\0') {
      pdb_14017f530(&uStack_1a8,*(longlong *)(pcStack_a8 + 8),
                    *(longlong *)(pcStack_a8 + 0x10) * 0x58 + *(longlong *)(pcStack_a8 + 8));
      pppppppuVar32 = pppppppuStack_198;
      pcStack_78 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
      if (pppppppuStack_198 < (undefined8 *******)0x2) {
        puVar28 = (undefined4 *)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
        if (pppppppuStack_198 == (undefined8 *******)0x0) goto LAB_140372197;
        lVar18 = *(longlong *)(lVar6 + 0x38);
      }
      else {
        if (pppppppuStack_198 < (undefined8 *******)0x15) {
          pdb_1400e1b80(pcStack_78,pppppppuStack_198,1,&uStack_a9);
        }
        else {
          pdb_140c75ce0(pcStack_78,pppppppuStack_198,&uStack_a9);
        }
        puVar28 = (undefined4 *)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
        lVar18 = *(longlong *)(lVar6 + 0x38);
        pcVar16 = pcStack_a8;
      }
      if (-0x7fffffffffffffff < lVar18) {
        lVar18 = (longlong)pppppppuVar32 * 8;
        uVar15 = *(undefined8 *)(lVar6 + 0x40);
        lVar33 = *(longlong *)(lVar6 + 0x48);
        pppppppuVar38 = (undefined8 *******)0x0;
        puStack_e8 = puVar28;
        do {
          if ((*(longlong *)(*(longlong *)(pcStack_78 + (longlong)pppppppuVar38 * 8) + 0x10) ==
               lVar33) &&
             (iVar13 = pub_142e32750(*(undefined8 *)
                                      (*(longlong *)(pcStack_78 + (longlong)pppppppuVar38 * 8) + 8),
                                     uVar15,lVar33), iVar13 == 0)) {
            uVar14 = 0x1b;
            pppppppuStack_c8 = pppppppuVar38;
            uVar15 = pdb_140dc6290(&UNK_142f450fa);
            pcVar16 = pcStack_a8;
            pdb_140724ba0(&uStack_98,param_5,1,0);
            uVar41 = pdb_140724c30();
            uStack_1a8._0_4_ = (int)pcStack_78;
            uStack_1a8._4_4_ = (undefined4)((ulonglong)pcStack_78 >> 0x20);
            uStack_1a0._0_4_ = SUB84(pppppppuVar32,0);
            uStack_1a0._4_4_ = (float)((ulonglong)pppppppuVar32 >> 0x20);
            pppppppuStack_198 = &pppppppuStack_c8;
            cVar9 = pdb_140308370(pbStack_a0,uVar15,uVar14,&uStack_98,uVar41,&uStack_1a8);
            puVar28 = puStack_e8;
            if (cVar9 != '\0') {
              *param_6 = 1;
              if (*(longlong *)(pcVar16 + 0x10) != 0) {
                if (pppppppuVar32 <= pppppppuStack_c8) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc81f2(pppppppuStack_c8,pppppppuVar32,&UNK_142f45350);
                }
                lVar33 = *(longlong *)(pcVar16 + 0x10) * 0x58;
                lVar18 = *(longlong *)(pcStack_78 + (longlong)pppppppuStack_c8 * 8);
                plVar29 = (longlong *)(*(longlong *)(pcVar16 + 8) + 0x18);
                goto LAB_1403720f6;
              }
            }
            break;
          }
          pppppppuVar38 = (undefined8 *******)((longlong)pppppppuVar38 + 1);
          lVar18 = lVar18 + -8;
          puVar28 = puStack_e8;
          pcVar16 = pcStack_a8;
        } while (lVar18 != 0);
      }
      goto LAB_140372197;
    }
    goto LAB_1403721b2;
  }
  uVar15 = *param_7;
  pppppppuStack_d8 = (undefined8 *******)*param_9;
  uVar41 = *(undefined4 *)pppppppuStack_d8;
  uVar14 = pdb_140a92040(uVar15);
  lVar6 = *param_1;
  fVar39 = _DAT_142e36f28;
  if (*(char *)(lVar6 + 0x88) != '\0') {
    fVar39 = *(float *)(lVar6 + 0x8c);
  }
  pdb_140340a90(&uStack_208,uVar14,uVar41,fVar39);
  plStack_1f0 = (longlong *)*param_10;
  fVar39 = _DAT_142f446f0;
  fVar42 = _DAT_142f446f0;
  if ((char)plStack_1f0[5] != '\0') {
    uVar15 = pdb_140a92040(uVar15);
    fVar39 = (float)pdb_140340770(uVar15,uVar41);
    fVar42 = fVar39;
    if (_DAT_142e37838 <= fVar39) {
      fVar42 = _DAT_142e37838;
    }
  }
  uVar14 = 0x21;
  uVar15 = pdb_140dc6290(&UNK_142f44d7e,0x21);
  pdb_140734440(&uStack_1a8,pbStack_a0,uVar15,uVar14);
  uVar15 = pdb_140726ff0(&uStack_1a8);
  pdb_14060a7e0(uVar15);
  apppppppuStack_88[0] = pppppppuStack_198;
  uStack_98 = (undefined8 *******)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
  uStack_90 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
  pdb_1407270c0(&uStack_1a8,&uStack_98);
  pdb_14007ee60();
  pcVar16 = (code *)pub_1406abab0(0x30,4);
  if (pcVar16 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x30);
  }
  *pcVar16 = (code)0x0;
  *(undefined4 *)(pcVar16 + 4) = 0x3f800000;
  *(undefined2 *)(pcVar16 + 8) = 0x201;
  pcVar16[10] = (code)0x0;
  pcVar16[0xc] = (code)0x1;
  *(undefined4 *)(pcVar16 + 0x10) = 0x3f800000;
  *(undefined2 *)(pcVar16 + 0x14) = 0x203;
  pcVar16[0x16] = (code)0x1;
  pcVar16[0x18] = (code)0x2;
  *(undefined4 *)(pcVar16 + 0x1c) = 0x3f800000;
  *(undefined2 *)(pcVar16 + 0x20) = 3;
  pcVar16[0x22] = (code)0x1;
  pcVar16[0x24] = (code)0x3;
  *(undefined4 *)(pcVar16 + 0x28) = 0x3fc00000;
  *(undefined2 *)(pcVar16 + 0x2c) = 0x204;
  pcVar16[0x2e] = (code)0x1;
  pdb_14007ee60();
  pcVar17 = (code *)pub_1406abab0(4,1);
  pcStack_e0 = pcVar16;
  if (pcVar17 == (code *)0x0) {
    pdb_142dc7e2a(1,4);
    goto LAB_140372f01;
  }
  *pcVar17 = *pcVar16;
  pcVar17[1] = pcVar16[0xc];
  pcVar17[2] = pcVar16[0x18];
  pcVar17[3] = pcVar16[0x24];
  cVar21 = *(code *)(lVar6 + 0xac);
  fVar40 = _DAT_142e36f28;
  if (*(char *)(lVar6 + 0x88) != '\0') {
    fVar40 = *(float *)(lVar6 + 0x8c);
  }
  cVar4 = *(code *)(lVar6 + 0xc5);
  cVar5 = *(code *)(lVar6 + 0xc6);
  pcStack_78 = pcVar17;
  if ((((cVar21 != pcVar16[10]) || (fVar40 != *(float *)(pcVar16 + 4))) ||
      (NAN(fVar40) || NAN(*(float *)(pcVar16 + 4)))) ||
     ((cVar4 != pcVar16[9] || (cVar5 != pcVar16[8])))) {
    if (cVar21 == pcVar16[0x16]) {
      if (((fVar40 == *(float *)(pcVar16 + 0x10)) &&
          (!NAN(fVar40) && !NAN(*(float *)(pcVar16 + 0x10)))) &&
         ((cVar4 == pcVar16[0x15] &&
          (pppppppuStack_c8 = (undefined8 *******)0x1, cVar5 == pcVar16[0x14]))))
      goto LAB_140370e02;
    }
    if (cVar21 == pcVar16[0x22]) {
      if ((((fVar40 == *(float *)(pcVar16 + 0x1c)) &&
           (!NAN(fVar40) && !NAN(*(float *)(pcVar16 + 0x1c)))) && (cVar4 == pcVar16[0x21])) &&
         (pppppppuStack_c8 = (undefined8 *******)0x2, cVar5 == pcVar16[0x20])) goto LAB_140370e02;
    }
    if (cVar21 == pcVar16[0x2e]) {
      if (((fVar40 == *(float *)(pcVar16 + 0x28)) &&
          (!NAN(fVar40) && !NAN(*(float *)(pcVar16 + 0x28)))) &&
         ((cVar4 == pcVar16[0x2d] &&
          (pppppppuStack_c8 = (undefined8 *******)0x3, cVar5 == pcVar16[0x2c]))))
      goto LAB_140370e02;
    }
    pppppppuStack_c8 = (undefined8 *******)0x1;
    uVar14 = 0x21;
    uVar15 = pdb_140dc6290(&UNK_142f44d9f,0x21);
    pdb_140724ba0(&uStack_98,param_5,1,0);
    uVar41 = pdb_140724c30();
    uStack_1a8._0_4_ = 0x42f44dd8;
    uStack_1a8._4_4_ = 1;
    uStack_1a0._0_4_ = 4.2039e-45;
    uStack_1a0._4_4_ = 0.0;
    pppppppuStack_198 = &pppppppuStack_c8;
    cVar9 = pdb_140309f30(pbStack_a0,uVar15,uVar14,&uStack_98,uVar41,&uStack_1a8);
    cVar21 = (code)0x2;
    if (cVar9 == '\x01' && pppppppuStack_c8 != (undefined8 *******)0x1) goto LAB_140370f5b;
  }
  else {
    pppppppuStack_c8 = (undefined8 *******)0x0;
LAB_140370e02:
    uVar14 = 0x21;
    uVar15 = pdb_140dc6290(&UNK_142f44d9f,0x21);
    pdb_140724ba0(&uStack_98,param_5,1,0);
    uVar41 = pdb_140724c30();
    uStack_1a8._0_4_ = (int)pcStack_78;
    uStack_1a8._4_4_ = (undefined4)((ulonglong)pcStack_78 >> 0x20);
    uStack_1a0._0_4_ = 5.60519e-45;
    uStack_1a0._4_4_ = 0.0;
    pppppppuStack_198 = &pppppppuStack_c8;
    cVar9 = pdb_140309f30(pbStack_a0,uVar15,uVar14,&uStack_98,uVar41,&uStack_1a8);
    if ((undefined8 ******)0x3 < pppppppuStack_c8) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pppppppuStack_c8,4,&UNK_142f44dc0);
    }
    if (cVar9 != '\0') {
      cVar21 = pcStack_e0[(longlong)pppppppuStack_c8 * 0xc];
LAB_140370f5b:
      pcVar16 = pcStack_e0;
      if (((*pcStack_e0 != cVar21) && (pcVar16 = pcStack_e0 + 0xc, *pcVar16 != cVar21)) &&
         ((pcVar16 = pcStack_e0 + 0x18, *pcVar16 != cVar21 &&
          (pcVar16 = pcStack_e0 + 0x24, *pcVar16 != cVar21)))) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f44de0);
      }
      fVar40 = *(float *)(pcVar16 + 4);
      if (fVar40 <= fVar39) {
        *param_6 = 1;
        uVar41 = *(undefined4 *)((longlong)param_1 + 0x1c);
        puVar7 = (undefined4 *)param_1[2];
        *(code *)(lVar6 + 0xc5) = pcVar16[9];
        *(code *)(lVar6 + 0xc6) = pcVar16[8];
        cVar21 = pcVar16[10];
        *puVar7 = uVar41;
        *(code *)(lVar6 + 0xac) = cVar21;
        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
        *(float *)((longlong)pppppppuStack_d8 + 0xc) = fVar40;
        if ((fVar40 != _DAT_142e36f28) || (NAN(fVar40) || NAN(_DAT_142e36f28))) {
          uVar24 = 1;
          if (*(int *)(lVar6 + 0x88) == 1) {
            if ((fVar40 == *(float *)(lVar6 + 0x8c)) &&
               (!NAN(fVar40) && !NAN(*(float *)(lVar6 + 0x8c)))) goto LAB_1403712c4;
          }
        }
        else {
          uVar24 = 0;
          if (*(int *)(lVar6 + 0x88) != 1) goto LAB_1403712c4;
        }
        *puVar7 = uVar41;
        *(undefined4 *)(lVar6 + 0x88) = uVar24;
        *(float *)(lVar6 + 0x8c) = fVar40;
        *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
        *plStack_1f0 = 0;
      }
    }
  }
LAB_1403712c4:
  pcVar16 = pcStack_e0;
  ppppuVar30 = (undefined8 ****)0x1;
  pub_1406abac0((byte *)pcStack_78,4,1);
  pub_1406abac0((byte *)pcVar16,0x30,4);
  uVar15 = 0x21;
  uStack_218 = pdb_140dc6290(&UNK_142f44df8);
  pbVar1 = (byte *)(lVar6 + 0xc5);
  bVar10 = *pbVar1;
  uStack_220 = (ulonglong)bVar10;
  if (bVar10 != 0) {
    if (bVar10 == 2) {
      uStack_220 = 0x1f;
      ppppuVar30 = (undefined8 ****)&UNK_142f44e36;
    }
    else {
      uStack_220 = 0x1d;
      ppppuVar30 = (undefined8 ****)&UNK_142f44e19;
    }
  }
  uStack_1a8 = (undefined8 *******)&pppppuStack_228;
  uStack_1a0._0_4_ = 2.7316895;
  uStack_1a0._4_4_ = 1.4013e-45;
  pppppppuStack_198 = (undefined8 *******)&uStack_218;
  pcStack_190 = pdb_1402ed400;
  pppppuStack_228 = (undefined8 *****)ppppuVar30;
  uStack_210 = uVar15;
  pdb_140f60760(&uStack_98,&UNK_142f44e55,&uStack_1a8);
  pppppppuVar32 = apppppppuStack_88[0];
  pppppppuStack_1e8 = uStack_98;
  pcStack_e0 = uStack_90;
  pppppuStack_1d0 = (undefined8 *****)&UNK_142f44e58;
  uStack_1c8 = 4;
  uVar15 = 0x1d;
  pppppppuStack_c8 = (undefined8 *******)pdb_140dc6290(&UNK_142f44e5c);
  uStack_1a8 = (undefined8 *******)&pppppuStack_1d0;
  uStack_1a0._0_4_ = 2.7316895;
  uStack_1a0._4_4_ = 1.4013e-45;
  pppppppuStack_198 = &pppppppuStack_c8;
  pcStack_190 = pdb_1402ed400;
  pcStack_c0 = (code *)uVar15;
  pdb_140f60760(&uStack_98,&UNK_142f44e55,&uStack_1a8);
  pppppppuVar38 = apppppppuStack_88[0];
  pppppppuStack_d0 = uStack_98;
  pcStack_a8 = uStack_90;
  pdb_140724ba0(&uStack_1a8,param_5,pcStack_e0,pppppppuVar32);
  uVar41 = pdb_140724c30();
  puVar7 = (undefined4 *)param_1[2];
  pcStack_78 = (code *)CONCAT44(pcStack_78._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
  *puVar7 = *(undefined4 *)((longlong)param_1 + 0x1c);
  bVar10 = pdb_140308960(pbStack_a0,pcStack_a8,pppppppuVar38,&uStack_1a8,uVar41,pbVar1);
  bVar10 = bVar10 | *param_6;
  *param_6 = bVar10;
  if (pppppppuStack_d0 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pcStack_a8,(ulonglong)pppppppuStack_d0,1);
  }
  if (*pbVar1 != 0) {
    uVar15 = 0x23;
    pppppppuStack_c8 = (undefined8 *******)pdb_140dc6290(&UNK_142f44e79);
    uStack_1a8 = (undefined8 *******)&pppppuStack_1d0;
    uStack_1a0._0_4_ = 2.7316895;
    uStack_1a0._4_4_ = 1.4013e-45;
    pcStack_190 = pdb_1402ed400;
    pppppppuStack_198 = &pppppppuStack_c8;
    pcStack_c0 = (code *)uVar15;
    pdb_140f60760(&uStack_98,&UNK_142f44e55,&uStack_1a8);
    pppppppuVar32 = apppppppuStack_88[0];
    pppppppuStack_d0 = uStack_98;
    pcStack_a8 = uStack_90;
    pdb_140724ba0(&uStack_1a8,param_5,1,0);
    uVar41 = pdb_140724c30();
    *puVar7 = pcStack_78._0_4_;
    bVar11 = pdb_14030c100(pbStack_a0,pcStack_a8,pppppppuVar32,&uStack_1a8,uVar41,lVar6 + 0xc6);
    bVar10 = bVar10 | bVar11;
    *param_6 = bVar10;
    if (pppppppuStack_d0 != (undefined8 *******)0x0) {
      pub_1406abac0((byte *)pcStack_a8,(ulonglong)pppppppuStack_d0,1);
    }
  }
  uVar15 = 0x17;
  pppppppuStack_c8 = (undefined8 *******)pdb_140dc6290(&UNK_142f44e9c);
  uStack_1a8 = (undefined8 *******)&pppppuStack_1d0;
  uStack_1a0._0_4_ = 2.7316895;
  uStack_1a0._4_4_ = 1.4013e-45;
  pcStack_190 = pdb_1402ed400;
  pppppppuStack_198 = &pppppppuStack_c8;
  pcStack_c0 = (code *)uVar15;
  pdb_140f60760(&uStack_98,&UNK_142f44e55,&uStack_1a8);
  pppppppuVar32 = apppppppuStack_88[0];
  pppppppuStack_d0 = uStack_98;
  pcStack_a8 = uStack_90;
  pdb_140724ba0(&uStack_1a8,param_5,1,0);
  uVar41 = pdb_140724c30();
  *puVar7 = pcStack_78._0_4_;
  bVar11 = pdb_14030bc20(pbStack_a0,pcStack_a8,pppppppuVar32,&uStack_1a8,uVar41,lVar6 + 0xac);
  bVar10 = bVar10 | bVar11;
  *param_6 = bVar10;
  if (pppppppuStack_d0 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pcStack_a8,(ulonglong)pppppppuStack_d0,1);
  }
  fStack_1ac = _DAT_142e36f28;
  if (*(char *)(lVar6 + 0x88) != '\0') {
    fStack_1ac = *(float *)(lVar6 + 0x8c);
  }
  uVar15 = 0x23;
  pppppppuStack_c8 = (undefined8 *******)pdb_140dc6290(&UNK_142f44eb3);
  uStack_1a0._0_4_ = 2.7316895;
  uStack_1a0._4_4_ = 1.4013e-45;
  pppppppuStack_198 = (undefined8 *******)&uStack_208;
  pcStack_190 = pdb_140001020;
  pcStack_c0 = (code *)uVar15;
  uStack_1a8 = &pppppppuStack_c8;
  pdb_140f60760(&uStack_98,&UNK_142f44ed6,&uStack_1a8);
  pppppppuStack_108 = uStack_98;
  pcStack_100 = uStack_90;
  pppppppuStack_f8 = apppppppuStack_88[0];
  puStack_e8 = puVar7;
  if (*(char *)(lVar6 + 0x88) == '\0') {
    if (*(float *)((longlong)pppppppuStack_d8 + 0xc) <= _DAT_142e36f28 &&
        _DAT_142e36f28 != *(float *)((longlong)pppppppuStack_d8 + 0xc)) {
LAB_14037176a:
                    /* WARNING: Could not recover jumptable at 0x00014037177f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_142f455fc + *(int *)(&UNK_142f455fc + *plStack_1f0 * 4)))();
      return;
    }
  }
  else if (*(float *)((longlong)pppppppuStack_d8 + 0xc) <= *(float *)(lVar6 + 0x8c) &&
           *(float *)(lVar6 + 0x8c) != *(float *)((longlong)pppppppuStack_d8 + 0xc))
  goto LAB_14037176a;
  puVar31 = (uint *)((longlong)pppppppuStack_d8 + 0xc);
  pppppppuStack_b8 = apppppppuStack_88[0];
  pppppppuStack_c8 = uStack_98;
  pcStack_c0 = uStack_90;
  uStack_ec = 0;
  uStack_90 = pdb_140001020;
  uStack_98 = &pppppppuStack_c8;
  pdb_140f60760(&uStack_1a8,&UNK_142f44f2a,&uStack_98);
  pppppppuVar32 = pppppppuStack_198;
  pppppppuStack_d0 = uStack_1a8;
  pcStack_a8 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
  uVar15 = 0x1f;
  pppppppuStack_1e0 = (undefined8 *******)pdb_140dc6290(&UNK_142f44f79);
  uStack_1a8 = (undefined8 *******)&pppppuStack_1d0;
  uStack_1a0._0_4_ = 2.7316895;
  uStack_1a0._4_4_ = 1.4013e-45;
  pppppppuStack_198 = &pppppppuStack_1e0;
  pcStack_190 = pdb_1402ed400;
  uStack_1d8 = uVar15;
  pdb_140f60760(&uStack_98,&UNK_142f44e55,&uStack_1a8);
  pppppppuVar38 = apppppppuStack_88[0];
  pppppppuStack_1c0 = uStack_98;
  pppppppuStack_d8 = (undefined8 *******)uStack_90;
  pdb_140724ba0(&uStack_98,param_5,pcStack_a8,pppppppuVar32);
  uVar41 = pdb_140724c30();
  uStack_1a0._4_4_ = fVar39;
  if (_DAT_142e3b1d8 <= fVar39) {
    uStack_1a0._4_4_ = _DAT_142e3b1d8;
  }
  uStack_1a8 = (undefined8 *******)&fStack_1ac;
  pppppppuStack_198._0_5_ = (uint5)(uint)fVar42;
  uStack_1a0._0_4_ = 0.1;
  cVar9 = pdb_140308ef0(pbStack_a0,pppppppuStack_d8,pppppppuVar38,&uStack_98,uVar41,&uStack_1a8);
  uVar41 = uStack_ec;
  if (cVar9 == '\0') {
    if (pppppppuStack_1c0 != (undefined8 *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_d8,(ulonglong)pppppppuStack_1c0,1);
    }
  }
  else {
    if (pppppppuStack_1c0 != (undefined8 *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_d8,(ulonglong)pppppppuStack_1c0,1);
    }
    *puStack_e8 = pcStack_78._0_4_;
    *(undefined4 *)(lVar6 + 0x88) = 1;
    *(float *)(lVar6 + 0x8c) = fStack_1ac;
    fVar42 = fVar39;
    if (fStack_1ac <= fVar39) {
      fVar42 = fStack_1ac;
    }
    *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
    *puVar31 = ~-(uint)NAN(fStack_1ac) & (uint)fVar42 | -(uint)NAN(fStack_1ac) & (uint)fVar39;
    *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
    *plStack_1f0 = 0;
    *param_6 = 1;
    bVar10 = 1;
  }
  if (pppppppuStack_d0 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pcStack_a8,(ulonglong)pppppppuStack_d0,1);
  }
  puVar7 = puStack_e8;
  if (pppppppuStack_c8 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pcStack_c0,(ulonglong)pppppppuStack_c8,1);
  }
  if (((char)uVar41 != '\0') && (pppppppuStack_108 != (undefined8 *******)0x0)) {
    pub_1406abac0((byte *)pcStack_100,(ulonglong)pppppppuStack_108,1);
  }
  pdb_1407344f0(pbStack_a0);
  pcVar16 = (code *)0x17;
  pppppppuStack_108 = (undefined8 *******)pdb_140dc6290(&UNK_142f44e9c);
  pcVar17 = (code *)0x9;
  pcStack_100 = pcVar16;
  pppppppuStack_c8 = (undefined8 *******)pdb_140dc6290(&UNK_142f44f98);
  uStack_1a8 = &pppppppuStack_108;
  uStack_1a0._0_4_ = 2.7316895;
  uStack_1a0._4_4_ = 1.4013e-45;
  pcStack_190 = pdb_1402ed400;
  pppppppuStack_198 = &pppppppuStack_c8;
  pcStack_c0 = pcVar17;
  pdb_140f60760(&uStack_98,&UNK_142f44fa1,&uStack_1a8);
  pppppppuVar32 = apppppppuStack_88[0];
  pppppppuStack_d8 = uStack_98;
  pcStack_a8 = uStack_90;
  pdb_140724ba0(&uStack_1a8,param_5,1,0);
  uVar41 = pdb_140724c30();
  *puVar7 = pcStack_78._0_4_;
  bVar11 = pdb_14030bc20(pbStack_a0,pcStack_a8,pppppppuVar32,&uStack_1a8,uVar41,lVar6 + 0xad);
  *param_6 = bVar10 | bVar11;
  if (pppppppuStack_d8 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pcStack_a8,(ulonglong)pppppppuStack_d8,1);
  }
  uVar14 = 0x1e;
  uVar15 = pdb_140dc6290(&UNK_142f44fa9,0x1e);
  pdb_140724ba0(&uStack_98,param_5,1,0);
  uVar41 = pdb_140724c30();
  *puVar7 = pcStack_78._0_4_;
  uStack_1a8 = (undefined8 *******)(lVar6 + 0x9c);
  pppppppuStack_198._0_5_ = 0x40000000;
  uStack_1a0._0_4_ = (float)_DAT_142f44700;
  uStack_1a0._4_4_ = (float)((ulonglong)_DAT_142f44700 >> 0x20);
  bVar12 = pdb_140308ef0(pbStack_a0,uVar15,uVar14,&uStack_98,uVar41,&uStack_1a8);
  bVar12 = bVar10 | bVar11 | bVar12;
  *param_6 = bVar12;
  uVar14 = 0x19;
  uVar15 = pdb_140dc6290(&UNK_142f44fc7,0x19);
  pdb_140724ba0(&uStack_98,param_5,1,0);
  uVar41 = pdb_140724c30();
  *puVar7 = pcStack_78._0_4_;
  uStack_1a8 = (undefined8 *******)(lVar6 + 0xa0);
  pppppppuStack_198._0_5_ = 0x3f000000;
  uStack_1a0._0_4_ = (float)_DAT_142f44710;
  uStack_1a0._4_4_ = (float)((ulonglong)_DAT_142f44710 >> 0x20);
  bVar10 = pdb_140308ef0(pbStack_a0,uVar15,uVar14,&uStack_98,uVar41,&uStack_1a8);
  bVar12 = bVar12 | bVar10;
  *param_6 = bVar12;
  uVar26 = 0x1b;
  uVar15 = pdb_140dc6290(&UNK_142f44fe0,0x1b);
  uVar27 = 0x1f;
  uVar14 = pdb_140dc6290(&UNK_142f44ffb,0x1f);
  pdb_140724ba0(&uStack_98,param_5,uVar14,uVar27);
  uVar41 = pdb_140724c30();
  *puVar7 = pcStack_78._0_4_;
  uStack_1a8 = (undefined8 *******)(lVar6 + 0x98);
  pppppppuStack_198 = (undefined8 *******)CONCAT35(pppppppuStack_198._5_3_,0x3f800000);
  uStack_1a0._0_4_ = _DAT_142e3b1d8;
  uStack_1a0._4_4_ = 0.0;
  bVar10 = pdb_140308ef0(pbStack_a0,uVar15,uVar26,&uStack_98,uVar41,&uStack_1a8);
  *param_6 = bVar12 | bVar10;
  if (pppppppuStack_1e8 != (undefined8 *******)0x0) {
    pub_1406abac0((byte *)pcStack_e0,(ulonglong)pppppppuStack_1e8,1);
  }
  uVar36 = CONCAT44(uStack_208._4_4_,(undefined4)uStack_208);
  if (uVar36 == 0) {
    return;
  }
  uVar34 = 1;
  pcVar16 = (code *)CONCAT44(uStack_1fc,iStack_200);
  goto LAB_140372d4b;
code_r0x000140370bac:
  ppppppuVar35 = (undefined8 ******)((longlong)ppppppuVar35 + 1);
  lVar33 = lVar33 + 0xa0;
  if ((longlong)pppppppuVar32 * 0xa0 == lVar33) goto LAB_140371eb4;
  goto LAB_140370b90;
  while( true ) {
    plVar29 = plVar29 + 0xb;
    lVar33 = lVar33 + -0x58;
    puVar28 = puStack_e8;
    if (lVar33 == 0) break;
LAB_1403720f6:
    if (((!SBORROW8(0,*plVar29)) && (plVar29[2] == *(longlong *)(lVar18 + 0x10))) &&
       (iVar13 = pub_142e32750(plVar29[1],*(undefined8 *)(lVar18 + 8)), iVar13 == 0)) {
      pdb_140f60be0(&uStack_1a8,plVar29);
      lVar18 = plVar29[3];
      lVar33 = plVar29[4];
      apppppppuStack_88[0] = pppppppuStack_198;
      uStack_98 = (undefined8 *******)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
      uStack_90 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
      uVar36 = *(ulonglong *)(lVar6 + 0x38);
      if (((uVar36 != 0x8000000000000001) && (!SBORROW8(0,uVar36))) && (uVar36 != 0)) {
        pub_1406abac0(*(byte **)(lVar6 + 0x40),uVar36,1);
      }
      *(undefined8 ********)(lVar6 + 0x48) = apppppppuStack_88[0];
      *(ulonglong *)(lVar6 + 0x38) = (ulonglong)uStack_98;
      *(code **)(lVar6 + 0x40) = uStack_90;
      *(longlong *)(lVar6 + 0x50) = lVar18;
      *(longlong *)(lVar6 + 0x58) = lVar33;
      puVar28 = puStack_e8;
      break;
    }
  }
LAB_140372197:
  if (puVar28 != (undefined4 *)0x0) {
    pub_1406abac0((byte *)pcStack_78,(longlong)puVar28 << 3,8);
  }
LAB_1403721b2:
  if ((*(char *)(lVar6 + 0x7c) != '\0') &&
     (lVar18 = pdb_140a92040(pppppppuStack_d8), *(char *)(lVar18 + 99) == '\x01')) {
    pcVar17 = (code *)0x2b;
    pppppppuStack_c8 = (undefined8 *******)pdb_140dc6290(&UNK_142f45115);
    uStack_98 = &pppppppuStack_c8;
    uStack_90 = pdb_1402ed400;
    pcStack_c0 = pcVar17;
    pdb_140f60760(&uStack_1a8,&UNK_142f45140,&uStack_98);
    pppppppuVar32 = pppppppuStack_198;
    puStack_e8 = (undefined4 *)CONCAT44(uStack_1a8._4_4_,(int)uStack_1a8);
    pcStack_78 = (code *)CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
    uVar14 = 0x27;
    uVar15 = pdb_140dc6290(&UNK_142f45161,0x27);
    pdb_140724ba0(&uStack_1a8,param_5,pcStack_78,pppppppuVar32);
    uVar41 = pdb_140724c30();
    bVar10 = pdb_14030bc20(pbStack_a0,uVar15,uVar14,&uStack_1a8,uVar41,lVar6 + 0x7d);
    *param_6 = *param_6 | bVar10;
    if (puStack_e8 != (undefined4 *)0x0) {
      pub_1406abac0((byte *)pcStack_78,(ulonglong)puStack_e8,1);
    }
  }
  uVar26 = 0x19;
  uVar15 = pdb_140dc6290(&UNK_142f45188,0x19);
  uVar27 = 0x1d;
  uVar14 = pdb_140dc6290(&UNK_142f451a1,0x1d);
  pdb_140724ba0(&uStack_1a8,param_5,uVar14,uVar27);
  uVar41 = pdb_140724c30();
  *puVar7 = pcStack_e0._0_4_;
  bVar11 = pdb_14030bc20(pbStack_a0,uVar15,uVar26,&uStack_1a8,uVar41,lVar6 + 0xaa);
  bVar10 = *param_6;
  *param_6 = bVar11 | bVar10;
  if (((*(char *)(lVar6 + 0xaa) != '\0') && (*(char *)(lVar6 + 0x7c) != '\0')) &&
     (lVar18 = pdb_140a92040(pppppppuStack_d8), *(int *)(*(longlong *)(lVar18 + 0x668) + 0x78) == 5)
     ) {
    pdb_140724ba0(&uStack_1a8,param_5,&UNK_142f451be,0x58);
    uVar41 = pdb_140724c30();
    *puVar7 = pcStack_e0._0_4_;
    bVar12 = pdb_14030bc20(pbStack_a0,&UNK_142f45216,0x10,&uStack_1a8,uVar41,lVar6 + 0xab);
    *param_6 = bVar11 | bVar10 | bVar12;
    pcVar16 = pcStack_a8;
  }
  uStack_1a8._0_4_ = (int)_DAT_142f446b0;
  uStack_1a8._4_4_ = (undefined4)((ulonglong)_DAT_142f446b0 >> 0x20);
  uStack_1a0._0_4_ = (float)_UNK_142f446b8;
  uStack_1a0._4_4_ = (float)((ulonglong)_UNK_142f446b8 >> 0x20);
  pppppppuStack_198 = (undefined8 *******)_DAT_142f446c0;
  pcStack_190 = _UNK_142f446c8;
  uStack_188 = _DAT_142f446d0;
  uStack_180 = _UNK_142f446d8;
  uStack_178 = _DAT_142f446e0;
  uStack_170 = _UNK_142f446e8;
  uStack_168 = 1;
  fVar39 = *(float *)(lVar6 + 0x94);
  pppppppuStack_108 = (undefined8 *******)0x0;
  iVar13 = (int)(longlong)fVar39;
  if (fVar39 < 0.0) {
    iVar13 = 0;
  }
  iVar22 = -1;
  if (fVar39 <= _DAT_142e46a48) {
    iVar22 = iVar13;
  }
  if (iVar22 < 0x3c) {
    if (iVar22 != 0xf) {
      if (iVar22 == 0x14) {
        pppppppuStack_108 = (undefined8 *******)0x1;
      }
      else {
        if (iVar22 != 0x1e) goto LAB_14037248d;
        pppppppuStack_108 = (undefined8 *******)0x2;
      }
    }
  }
  else {
    switch(iVar22) {
    case 0x3c:
      pppppppuStack_108 = (undefined8 *******)0x3;
      break;
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
LAB_14037248d:
      pppppppuStack_108 = (undefined8 *******)0x8;
      break;
    case 0x48:
      pppppppuStack_108 = (undefined8 *******)0x4;
      break;
    case 0x50:
      pppppppuStack_108 = (undefined8 *******)0x5;
      break;
    case 0x5a:
      pppppppuStack_108 = (undefined8 *******)0x6;
      break;
    default:
      if (iVar22 != 0x78) goto LAB_14037248d;
      pppppppuStack_108 = (undefined8 *******)0x7;
    }
  }
  uVar26 = 0x22;
  uVar15 = pdb_140dc6290(&UNK_142f45226);
  uVar27 = 0x26;
  uVar14 = pdb_140dc6290(&UNK_142f45248,0x26);
  pdb_140724ba0(&pppppppuStack_c8,param_5,uVar14,uVar27);
  uVar41 = pdb_140724c30();
  uStack_90 = (code *)0x9;
  apppppppuStack_88[0] = &pppppppuStack_108;
  uStack_98 = (undefined8 *******)&uStack_1a8;
  cVar9 = pdb_14030a520(pbStack_a0,uVar15,uVar26,&pppppppuStack_c8,uVar41,&uStack_98);
  if (cVar9 != '\0') {
    *param_6 = 1;
    if ((undefined8 ******)0x8 < pppppppuStack_108) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pppppppuStack_108,9,&UNK_142f45270);
    }
    fVar39 = 0.0;
    if (*(char *)(&uStack_1a8 + (longlong)pppppppuStack_108) == '\0') {
      fVar39 = (float)*(uint *)((longlong)&uStack_1a8 + (longlong)pppppppuStack_108 * 8 + 4);
    }
    *puVar7 = pcStack_e0._0_4_;
    *(float *)(lVar6 + 0x94) = fVar39;
  }
  if (*(char *)(lVar6 + 0x7c) == '\0') {
    return;
  }
  *puVar7 = pcStack_e0._0_4_;
  if (*(longlong *)(pcVar16 + 0x10) != 0) {
    lVar18 = *(longlong *)(pcVar16 + 8);
    lVar33 = *(longlong *)(pcVar16 + 0x10) * 0x58;
    if (*(longlong *)(lVar6 + 0x38) == -0x7fffffffffffffff) {
      do {
        if (SBORROW8(0,*(longlong *)(lVar18 + 0x18))) goto LAB_140372602;
        lVar18 = lVar18 + 0x58;
        lVar33 = lVar33 + -0x58;
      } while (lVar33 != 0);
    }
    else if (SBORROW8(0,*(longlong *)(lVar6 + 0x38))) {
      do {
        if (SBORROW8(0,*(longlong *)(lVar18 + 0x18))) goto LAB_140372602;
        lVar18 = lVar18 + 0x58;
        lVar33 = lVar33 + -0x58;
      } while (lVar33 != 0);
    }
    else {
      lVar8 = *(longlong *)(lVar6 + 0x48);
      uVar15 = *(undefined8 *)(lVar6 + 0x40);
      do {
        if (((!SBORROW8(0,*(longlong *)(lVar18 + 0x18))) && (*(longlong *)(lVar18 + 0x28) == lVar8))
           && (iVar13 = pub_142e32750(*(undefined8 *)(lVar18 + 0x20),uVar15,lVar8), iVar13 == 0))
        goto LAB_140372602;
        lVar18 = lVar18 + 0x58;
        lVar33 = lVar33 + -0x58;
      } while (lVar33 != 0);
    }
  }
  lVar18 = 0;
LAB_140372602:
  uStack_1a8._0_4_ = 1;
  uStack_1a8._4_4_ = 0;
  uStack_1a0._0_4_ = (float)lVar18;
  uStack_1a0._4_4_ = (float)((ulonglong)lVar18 >> 0x20);
  pppppppuStack_198 = (undefined8 *******)0x0;
  uStack_188 = 0;
  pdb_14017bd90(&pppppppuStack_108,&uStack_1a8);
  pppppppuVar32 = pppppppuStack_f8;
  if (pppppppuStack_f8 != (undefined8 *******)0x0) {
    uVar26 = 0x29;
    uVar15 = pdb_140dc6290(&UNK_142f45288);
    uVar27 = 0x2d;
    uVar14 = pdb_140dc6290(&UNK_142f452b1,0x2d);
    pdb_140724ba0(&uStack_1a8,param_5,uVar14,uVar27);
    uVar41 = pdb_140724c30();
    cVar9 = pdb_14030bc20(pbStack_a0,uVar15,uVar26,&uStack_1a8,uVar41,(byte *)(lVar6 + 0x7e));
    pcVar16 = pcStack_100;
    bVar10 = *(byte *)(lVar6 + 0x7e);
    if ((cVar9 == '\0') || (*param_6 = 1, (lVar18 != 0 & bVar10) == 0)) {
      if (bVar10 == 0) goto LAB_140372d2e;
    }
    else if (*(int *)(lVar18 + 0x40) == 1) {
      uStack_1a8._0_4_ = (int)*(undefined8 *)(lVar18 + 0x44);
      uStack_1a8._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x44) >> 0x20);
      uStack_1a0._0_4_ = (float)*(undefined8 *)(lVar18 + 0x4c);
      uStack_1a0._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar18 + 0x4c) >> 0x20);
      *(undefined4 *)(lVar6 + 0x68) = 1;
      *(int *)(lVar6 + 0x6c) = (int)uStack_1a8;
      *(undefined4 *)(lVar6 + 0x70) = uStack_1a8._4_4_;
      *(float *)(lVar6 + 0x74) = (float)uStack_1a0;
      *(float *)(lVar6 + 0x78) = uStack_1a0._4_4_;
    }
    pcVar17 = (code *)((longlong)pppppppuVar32 * 8);
    pdb_14007ee60();
    pcVar19 = (code *)pub_1406abab0((ulonglong)pcVar17,4);
    if (pcVar19 == (code *)0x0) {
      pdb_142dc7e2a(4,pcVar17);
LAB_140372f01:
                    /* WARNING: Does not return */
      pcVar16 = (code *)invalidInstructionException();
      (*pcVar16)();
    }
    uVar37 = (uint)pppppppuVar32;
    if ((pppppppuVar32 < (undefined8 *******)0xf) ||
       (pcVar19 < pcVar16 + ((longlong)pppppppuVar32 * 4 + -2) * 4 &&
        pcVar16 < pcVar19 + (longlong)pppppppuVar32 * 8)) {
      pppppppuVar38 = (undefined8 *******)0x0;
    }
    else {
      uVar36 = 4;
      if (((ulonglong)pppppppuVar32 & 3) != 0) {
        uVar36 = (ulonglong)(uVar37 & 3);
      }
      pppppppuVar38 = (undefined8 *******)((longlong)pppppppuVar32 - uVar36);
      pcVar20 = pcVar16 + 0x20;
      pppppppuVar23 = (undefined8 *******)0x0;
      do {
        uVar15 = *(undefined8 *)(pcVar20 + -0x10);
        uVar41 = *(undefined4 *)pcVar20;
        uVar24 = *(undefined4 *)(pcVar20 + 4);
        uVar14 = *(undefined8 *)(pcVar20 + 0x10);
        *(undefined8 *)(pcVar19 + (longlong)pppppppuVar23 * 8) = *(undefined8 *)(pcVar20 + -0x20);
        *(undefined8 *)(pcVar19 + (longlong)pppppppuVar23 * 8 + 8) = uVar15;
        pcVar3 = pcVar19 + ((longlong)pppppppuVar23 * 2 + 4) * 4;
        *(undefined4 *)pcVar3 = uVar41;
        *(undefined4 *)(pcVar3 + 4) = uVar24;
        *(int *)(pcVar3 + 8) = (int)uVar14;
        *(int *)(pcVar3 + 0xc) = (int)((ulonglong)uVar14 >> 0x20);
        pppppppuVar23 = (undefined8 *******)((longlong)pppppppuVar23 + 4);
        pcVar20 = pcVar20 + 0x40;
      } while (pppppppuVar38 != pppppppuVar23);
    }
    uVar25 = uVar37 - (int)pppppppuVar38 & 3;
    pppppppuVar23 = pppppppuVar38;
    if (uVar25 != 0) {
      uVar36 = 0;
      do {
        *(undefined8 *)(pcVar19 + (longlong)pppppppuVar23 * 8) =
             *(undefined8 *)(pcVar16 + uVar36 * 2 + (longlong)pppppppuVar38 * 0x10);
        pppppppuVar23 = (undefined8 *******)((longlong)pppppppuVar23 + 1);
        uVar36 = uVar36 + 8;
      } while (uVar25 << 3 != uVar36);
    }
    if ((ulonglong)((longlong)pppppppuVar38 - (longlong)pppppppuVar32) < 0xfffffffffffffffd) {
      pcVar20 = pcVar16 + ((longlong)pppppppuVar23 * 4 + 0xc) * 4;
      do {
        *(undefined8 *)(pcVar19 + (longlong)pppppppuVar23 * 8) = *(undefined8 *)(pcVar20 + -0x30);
        *(undefined8 *)(pcVar19 + ((longlong)pppppppuVar23 * 2 + 2) * 4) =
             *(undefined8 *)(pcVar20 + -0x20);
        *(undefined8 *)(pcVar19 + ((longlong)pppppppuVar23 * 2 + 4) * 4) =
             *(undefined8 *)(pcVar20 + -0x10);
        *(undefined8 *)(pcVar19 + ((longlong)pppppppuVar23 * 2 + 6) * 4) = *(undefined8 *)pcVar20;
        pppppppuVar23 = (undefined8 *******)((longlong)pppppppuVar23 + 4);
        pcVar20 = pcVar20 + 0x40;
      } while (pppppppuVar32 != pppppppuVar23);
    }
    pppppppuVar38 = (undefined8 *******)0x1;
    pcStack_e0 = pcVar17;
    pcStack_78 = pcVar19;
    if (pppppppuVar32 != (undefined8 *******)0x1) {
      lVar18 = 0;
      do {
        if (*(longlong *)(pcVar19 + (lVar18 * 2 + 2) * 4) == *(longlong *)(pcVar19 + lVar18 * 8)) {
          pppppppuVar23 = (undefined8 *******)(lVar18 + 2);
          pppppppuVar38 = (undefined8 *******)(lVar18 + 1);
          if (pppppppuVar23 < pppppppuVar32) {
            if ((uVar37 - (int)lVar18 & 1) != 0) {
              if (*(longlong *)(pcVar19 + (lVar18 * 2 + 4) * 4) !=
                  *(longlong *)(pcVar19 + lVar18 * 8)) {
                *(longlong *)(pcVar19 + (lVar18 * 2 + 2) * 4) =
                     *(longlong *)(pcVar19 + (lVar18 * 2 + 4) * 4);
                pppppppuVar38 = (undefined8 *******)(lVar18 + 2);
              }
              pppppppuVar23 = (undefined8 *******)(lVar18 + 3);
            }
            if ((longlong)pppppppuVar32 + -3 != lVar18) goto LAB_140372908;
          }
          break;
        }
        lVar18 = lVar18 + 1;
        pppppppuVar38 = pppppppuVar32;
      } while ((longlong)pppppppuVar32 + -1 != lVar18);
      goto LAB_1403728e2;
    }
    goto LAB_1403729c7;
  }
  goto LAB_140372d2e;
LAB_140372908:
  do {
    if (*(longlong *)(pcVar19 + (longlong)pppppppuVar23 * 8) ==
        *(longlong *)(pcVar19 + ((longlong)pppppppuVar38 * 2 + -2) * 4)) {
      lVar18 = *(longlong *)(pcVar19 + ((longlong)pppppppuVar23 * 2 + 2) * 4);
      if (lVar18 != *(longlong *)(pcVar19 + ((longlong)pppppppuVar38 * 2 + -2) * 4)) {
LAB_140372934:
        *(longlong *)(pcVar19 + (longlong)pppppppuVar38 * 8) = lVar18;
        pppppppuVar38 = (undefined8 *******)((longlong)pppppppuVar38 + 1);
      }
    }
    else {
      *(longlong *)(pcVar19 + (longlong)pppppppuVar38 * 8) =
           *(longlong *)(pcVar19 + (longlong)pppppppuVar23 * 8);
      pppppppuVar38 = (undefined8 *******)((longlong)pppppppuVar38 + 1);
      lVar18 = *(longlong *)(pcVar19 + ((longlong)pppppppuVar23 * 2 + 2) * 4);
      if (lVar18 != *(longlong *)(pcVar19 + ((longlong)pppppppuVar38 * 2 + -2) * 4))
      goto LAB_140372934;
    }
    pppppppuVar23 = (undefined8 *******)((longlong)pppppppuVar23 + 2);
  } while (pppppppuVar32 != pppppppuVar23);
LAB_1403728e2:
  uVar36 = (ulonglong)pppppppuVar38 >> 1;
  if (uVar36 != 0) {
    if (uVar36 == 1) {
      uVar34 = 0;
    }
    else {
      lVar18 = (longlong)pppppppuVar38 + -1;
      uVar34 = 0;
      do {
        uVar15 = *(undefined8 *)(pcVar19 + uVar34 * 8);
        *(undefined8 *)(pcVar19 + uVar34 * 8) = *(undefined8 *)(pcVar19 + lVar18 * 8);
        *(undefined8 *)(pcVar19 + lVar18 * 8) = uVar15;
        uVar15 = *(undefined8 *)(pcVar19 + (uVar34 * 2 + 2) * 4);
        *(undefined8 *)(pcVar19 + (uVar34 * 2 + 2) * 4) =
             *(undefined8 *)
              (pcVar19 + ((longlong)pppppppuVar38 * 2 + (uVar34 ^ 0x1ffffffffffffffe) * 2) * 4);
        *(undefined8 *)
         (pcVar19 + ((longlong)pppppppuVar38 * 2 + (uVar34 ^ 0x1ffffffffffffffe) * 2) * 4) = uVar15;
        uVar34 = uVar34 + 2;
        lVar18 = lVar18 + -2;
      } while ((uVar36 & 0xfffffffffffffffe) != uVar34);
      if ((uVar36 & 1) == 0) goto LAB_1403729be;
    }
    uVar15 = *(undefined8 *)(pcVar19 + uVar34 * 8);
    *(undefined8 *)(pcVar19 + uVar34 * 8) =
         *(undefined8 *)(pcVar19 + ((longlong)pppppppuVar38 * 2 + ~uVar34 * 2) * 4);
    *(undefined8 *)(pcVar19 + ((longlong)pppppppuVar38 * 2 + ~uVar34 * 2) * 4) = uVar15;
  }
LAB_1403729be:
  if (pppppppuVar38 != (undefined8 *******)0x0) {
LAB_1403729c7:
    pcStack_a8 = (code *)(lVar6 + 0x68);
    pdb_140a92220();
    if ((int)uStack_1a8 == 1) {
      lVar18 = (longlong)pppppppuVar38 * 8;
      pppppppuStack_c8 = (undefined8 *******)0x0;
      do {
        if (*(longlong *)(pcStack_78 + (longlong)pppppppuStack_c8 * 8) ==
            CONCAT44((float)uStack_1a0,uStack_1a8._4_4_)) {
          pppppppuVar23 = (undefined8 *******)0x1e;
          uVar15 = pdb_140dc6290(&UNK_142f452de);
          pppppppuStack_d8 = pppppppuVar23;
          pdb_140724ba0(&uStack_98,param_5,1,0);
          uVar41 = pdb_140724c30();
          uStack_1a8._0_4_ = (int)pcStack_78;
          uStack_1a8._4_4_ = (undefined4)((ulonglong)pcStack_78 >> 0x20);
          uStack_1a0._0_4_ = SUB84(pppppppuVar38,0);
          uStack_1a0._4_4_ = (float)((ulonglong)pppppppuVar38 >> 0x20);
          pppppppuStack_198 = &pppppppuStack_c8;
          cVar9 = pdb_140309940(pbStack_a0,uVar15,pppppppuStack_d8,&uStack_98,uVar41,&uStack_1a8);
          if (cVar9 == '\0') goto LAB_140372b1e;
          goto joined_r0x000140372b03;
        }
        pppppppuStack_c8 = (undefined8 *******)((longlong)pppppppuStack_c8 + 1);
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
    }
    pppppppuStack_c8 = (undefined8 *******)((longlong)pppppppuVar38 - 1);
joined_r0x000140372b03:
    if (pppppppuVar38 <= pppppppuStack_c8) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(pppppppuStack_c8,pppppppuVar38,&UNK_142f45300);
    }
    lVar18 = 0;
    do {
      lVar33 = lVar18;
      if ((longlong)pppppppuVar32 * 0x10 == lVar33) goto LAB_140372b1e;
      lVar18 = lVar33 + 0x10;
    } while (*(longlong *)(pcVar16 + lVar33) !=
             *(longlong *)(pcStack_78 + (longlong)pppppppuStack_c8 * 8));
    uVar15 = *(undefined8 *)(pcVar16 + lVar33);
    uVar14 = *(undefined8 *)(pcVar16 + lVar33 + 8);
    uStack_1a8._0_4_ = (int)uVar15;
    uStack_1a8._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
    uStack_1a0._0_4_ = (float)uVar14;
    uStack_1a0._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
    *(undefined4 *)(lVar6 + 0x68) = 1;
    *(undefined8 *)(lVar6 + 0x6c) = uVar15;
    *(undefined8 *)(lVar6 + 0x74) = uVar14;
    *param_6 = 1;
LAB_140372b1e:
    if (*(char *)(lVar6 + 0x68) != '\0') {
      uStack_1a0 = pcVar16 + (longlong)pppppppuVar32 * 0x10;
      uStack_208._0_4_ = *(undefined4 *)(lVar6 + 0x6c);
      uStack_208._4_4_ = *(undefined4 *)(lVar6 + 0x70);
      iStack_200 = *(int *)(lVar6 + 0x74);
      uStack_1fc = *(undefined4 *)(lVar6 + 0x78);
      uStack_1a8._0_4_ = (int)pcVar16;
      uStack_1a8._4_4_ = (undefined4)((ulonglong)pcVar16 >> 0x20);
      pppppppuStack_198 = (undefined8 *******)&uStack_208;
      pdb_140180940(&pppppppuStack_c8,&uStack_1a8);
      if ((undefined8 *******)0x1 < pppppppuStack_b8) {
        if (pppppppuStack_b8 < (undefined8 *******)0x15) {
          pcVar16 = pcStack_c0 + 4;
          lVar18 = 4;
          do {
            uVar25 = *(uint *)(pcVar16 + -4);
            uVar37 = *(uint *)pcVar16;
            lVar33 = lVar18;
            if (uVar37 < uVar25) {
              do {
                *(uint *)(pcStack_c0 + lVar33) = uVar25;
                pcVar17 = pcStack_c0;
                if (lVar33 == 4) goto LAB_140372df6;
                uVar25 = *(uint *)(pcStack_c0 + lVar33 + -8);
                lVar33 = lVar33 + -4;
              } while (uVar37 < uVar25);
              pcVar17 = pcStack_c0 + lVar33;
LAB_140372df6:
              *(uint *)pcVar17 = uVar37;
            }
            pcVar16 = pcVar16 + 4;
            lVar18 = lVar18 + 4;
          } while (pcVar16 != pcStack_c0 + (longlong)pppppppuStack_b8 * 4);
        }
        else {
          pcStack_1b8 = pcStack_c0;
          pdb_1402252b0();
        }
      }
      pdb_140173850();
      pppppppuVar32 = pppppppuStack_b8;
      pcVar16 = pcStack_c0;
      if (pppppppuStack_b8 != (undefined8 *******)0x0) {
        lVar18 = (longlong)pppppppuStack_b8 * 4;
        pppppppuStack_1e0 = (undefined8 *******)0x0;
        do {
          if (*(int *)(pcStack_c0 + (longlong)pppppppuStack_1e0 * 4) == iStack_200) {
            pcStack_1b8 = pcStack_c0;
            uVar14 = 0x1f;
            uVar15 = pdb_140dc6290(&UNK_142f45318);
            pcStack_1b8 = pcVar16;
            pdb_140724ba0(&uStack_98,param_5,1,0);
            pcStack_1b8 = pcVar16;
            uVar41 = pdb_140724c30();
            uStack_1a8._0_4_ = (int)pcVar16;
            uStack_1a8._4_4_ = (undefined4)((ulonglong)pcVar16 >> 0x20);
            uStack_1a0._0_4_ = SUB84(pppppppuVar32,0);
            uStack_1a0._4_4_ = (float)((ulonglong)pppppppuVar32 >> 0x20);
            pppppppuStack_198 = &pppppppuStack_1e0;
            pcStack_1b8 = pcVar16;
            cVar9 = pdb_14030b0a0(pbStack_a0,uVar15,uVar14,&uStack_98,uVar41,&uStack_1a8);
            if (cVar9 == '\0') goto LAB_140372cf4;
            goto joined_r0x000140372cd5;
          }
          pppppppuStack_1e0 = (undefined8 *******)((longlong)pppppppuStack_1e0 + 1);
          lVar18 = lVar18 + -4;
        } while (lVar18 != 0);
      }
      pppppppuStack_1e0 = (undefined8 *******)((longlong)pppppppuStack_b8 - 1);
joined_r0x000140372cd5:
      if (pppppppuVar32 <= pppppppuStack_1e0) {
        pcStack_1b8 = pcVar16;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppuStack_1e0,pppppppuVar32,&UNK_142f45338);
      }
      if (pppppppuStack_f8 != (undefined8 *******)0x0) {
        lVar18 = 0;
        do {
          if ((*(longlong *)(pcStack_100 + lVar18) ==
               CONCAT44(uStack_208._4_4_,(undefined4)uStack_208)) &&
             (*(int *)(pcStack_100 + lVar18 + 8) ==
              *(int *)(pcVar16 + (longlong)pppppppuStack_1e0 * 4))) {
            uVar15 = *(undefined8 *)(pcStack_100 + lVar18);
            uStack_1a0 = *(code **)(pcStack_100 + lVar18 + 8);
            uStack_1a8._0_4_ = (int)uVar15;
            uStack_1a8._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
            *(undefined4 *)pcStack_a8 = 1;
            *(undefined8 *)(lVar6 + 0x6c) = uVar15;
            *(code **)(lVar6 + 0x74) = uStack_1a0;
            *param_6 = 1;
            break;
          }
          lVar18 = lVar18 + 0x10;
        } while ((longlong)pppppppuStack_f8 << 4 != lVar18);
      }
LAB_140372cf4:
      if (pppppppuStack_c8 != (undefined8 *******)0x0) {
        pub_1406abac0((byte *)pcVar16,(longlong)pppppppuStack_c8 << 2,4);
      }
    }
  }
  pub_1406abac0((byte *)pcStack_78,(ulonglong)pcStack_e0,4);
LAB_140372d2e:
  if (pppppppuStack_108 != (undefined8 *******)0x0) {
    uVar36 = (longlong)pppppppuStack_108 << 4;
    uVar34 = 4;
    pcVar16 = pcStack_100;
LAB_140372d4b:
    pub_1406abac0((byte *)pcVar16,uVar36,uVar34);
  }
  return;
}

