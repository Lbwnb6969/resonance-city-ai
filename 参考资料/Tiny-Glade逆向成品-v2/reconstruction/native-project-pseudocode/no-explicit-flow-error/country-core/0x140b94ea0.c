// VA 0x140b94ea0, PDB extent 2858 bytes
// country_core::systems::backend::icc::inner::update_window_icc_profile
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/icc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::icc::inner::update_window_icc_profile
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/icc.rs
   Extent: 2858 */

void pdb_140b94ea0(byte ******param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte *******pppppppbVar3;
  code *pcVar4;
  byte *****pppppbVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *******pppppppbVar8;
  byte ******ppppppbVar9;
  byte ******ppppppbVar10;
  byte *******pppppppbVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 *arg0;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  undefined8 in_stack_fffffffffffffe18;
  undefined4 uVar26;
  ulonglong in_stack_fffffffffffffe28;
  undefined8 uStack_1c8;
  byte *****pppppbStack_1c0;
  undefined4 uStack_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  byte ******ppppppbStack_170;
  undefined8 uStack_150;
  byte ******ppppppbStack_f0;
  byte *****pppppbStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 *puStack_a0;
  undefined4 *puStack_98;
  byte ******ppppppbStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  byte *****pppppbStack_78;
  byte ******ppppppbStack_70;
  byte *****pppppbStack_68;
  undefined1 uStack_59;
  ulonglong *puStack_58;
  byte *****pppppbStack_50;
  undefined8 uStack_48;
  
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffe18 >> 0x20);
  uStack_48 = 0xfffffffffffffffe;
  lVar7 = param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  uVar20 = 0;
  uVar13 = uVar6 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar13 = uVar20;
  }
  uVar15 = uVar6 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar15 = uVar20;
  }
  lVar18 = uVar13 * 0x28 + *(longlong *)(lVar7 + 8);
  lVar21 = uVar15 * 0x28 + *(longlong *)(lVar7 + 0x28);
  bVar22 = *(ulonglong *)(lVar7 + 0x10) < uVar13;
  uVar13 = *(ulonglong *)(lVar7 + 0x10) - uVar13;
  bVar24 = uVar13 == 0;
  if (bVar22) {
    uVar13 = uVar20;
  }
  if (bVar22) {
    lVar18 = 8;
  }
  uVar6 = lVar18 + -0x28 + uVar13 * 0x28;
  if (bVar22 || bVar24) {
    uVar6 = uVar20;
  }
  bVar23 = *(ulonglong *)(lVar7 + 0x30) < uVar15;
  uVar15 = *(ulonglong *)(lVar7 + 0x30) - uVar15;
  bVar25 = uVar15 == 0;
  if (bVar23) {
    lVar21 = 8;
    uVar15 = uVar20;
  }
  uVar19 = lVar21 + -0x28 + uVar15 * 0x28;
  if (bVar23 || bVar25) {
    uVar19 = uVar6;
  }
  uVar6 = uVar15 + uVar13;
  if (!bVar22 && !bVar24 || !bVar23 && !bVar25) {
    uVar6 = uVar20;
  }
  *(ulonglong *)*param_3 = *(longlong *)(lVar7 + 0x40) - uVar6;
  if ((bVar22 || bVar24) && (bVar23 || bVar25)) {
    return;
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar2 = (undefined4 *)param_2[2];
  *puVar2 = uVar1;
  puVar14 = (ulonglong *)*param_2;
  puStack_58 = puVar14;
  pppppbStack_50 = (byte *****)param_1;
  if (!SBORROW8(0,*puVar14)) {
    pdb_14098a200(puVar14 + 3);
    puVar14 = puStack_58;
    if (*puStack_58 != 0) {
      pub_1406abac0((byte *)puStack_58[1],*puStack_58,1);
    }
  }
  *puVar14 = 0x8000000000000000;
  pppppppbVar3 = *(byte ********)(uVar19 + 8);
  uVar16 = *(undefined8 *)(uVar19 + 0x10);
  ppppppbStack_f0 = (byte ******)0x0;
  pppppbStack_e8 = (byte *****)0x1;
  uStack_e0 = 0;
  uStack_1c8 = (byte *******)((ulonglong)uStack_1c8._4_4_ << 0x20);
  pppppbStack_1c0 = (byte *****)0x0;
  uStack_1b8 = 7;
  iStack_1b4 = 0;
  uStack_1ac = 0;
  uStack_1a8 = uStack_1a8 & 0xffffff00;
  uStack_1b0 = 1;
  pppppppbVar11 = pppppppbVar3;
  uVar6 = pdb_140f4a2a0(&uStack_1c8,pppppppbVar3,uVar16);
  pppppppbVar8 = pppppppbVar11;
  if ((uVar6 & 1) == 0) {
    pppppppbVar8 = &ppppppbStack_f0;
    ppppppbStack_90 = (byte ******)pppppppbVar11;
    lVar7 = pdb_140f5aaf0(&ppppppbStack_90,pppppppbVar8);
    if (lVar7 == 1) {
      CloseHandle(ppppppbStack_90);
      goto LAB_140b95342;
    }
    CloseHandle(ppppppbStack_90);
    if (uStack_e0 == 0) {
      pppppppbVar8 = (byte *******)0x2800000003;
      goto LAB_140b95342;
    }
    pppppppbVar8 = (byte *******)pdb_141ab6360(0,pppppbStack_e8);
    if ((byte *******)ppppppbStack_f0 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppbStack_e8,(ulonglong)ppppppbStack_f0,1);
    }
    if (pppppppbVar8 != (byte *******)0x0) {
      pppppbStack_68 = (byte *****)pdb_141c6c690(0);
      ppppppbStack_70 = (byte ******)pppppppbVar8;
      if (pppppbStack_68 == (byte *****)0x0) {
        uStack_1c8 = (byte *******)((ulonglong)uStack_1c8 & 0xffffffffffffff00);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305eac8,0x2b,&uStack_1c8,&UNK_14305eaa8,&UNK_14305ebc0);
      }
      ppppppbVar9 = (byte ******)
                    pdb_141a9ed10(0,pppppbStack_68,0x4009a,pppppppbVar8,CONCAT44(uVar26,0x4009a),0,
                                  in_stack_fffffffffffffe28 & 0xffffffff00000000);
      if (ppppppbVar9 == (byte ******)0x0) {
        ppppppbVar9 = (byte ******)pdb_142deac30(0);
        pdb_141ab61f0(pppppbStack_68);
        pdb_141ab61f0(ppppppbStack_70);
        goto LAB_140b95380;
      }
      puStack_a0 = (undefined4 *)CONCAT44(puStack_a0._4_4_,uVar1);
      uStack_1c8 = (byte *******)0x1;
      pppppbStack_1c0 = (byte *****)0x0;
      uStack_1b8 = 0x20;
      iStack_1b4 = 0;
      uStack_1b0 = 2;
      uStack_1ac = 0;
      uStack_150 = 2;
      puStack_98 = puVar2;
      pppppbStack_78 = (byte *****)ppppppbVar9;
      pdb_1415eeb10(&ppppppbStack_f0,&uStack_1c8);
      pppppbVar5 = pppppbStack_78;
      uVar6 = uStack_e0;
      ppppppbVar9 = (byte ******)pppppbStack_e8;
      if (0xfffffffe < uStack_e0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14305ebd8,0x2f,&UNK_14305ec68);
      }
      pdb_141a9e080(pppppbStack_78,pppppbStack_e8,pppppbStack_e8,uStack_e0 & 0xffffffff);
      ppppppbVar10 = ppppppbStack_f0;
      pdb_141a9dfd0(pppppbVar5);
      pdb_141ab61f0(pppppbStack_68);
      pdb_141ab61f0(ppppppbStack_70);
      ppppppbStack_70 = ppppppbVar10;
      if (SBORROW8(0,(longlong)ppppppbVar10)) goto LAB_140b95380;
      ppppppbStack_90 = (byte ******)0x20002000000000;
      uStack_88 = 0x15b010800010020;
      uStack_80 = 4;
      pppppbStack_68 = (byte *****)ppppppbVar9;
      pppppbStack_1c0 = (byte *****)ppppppbVar9;
      uStack_1b8 = (undefined4)(uVar6 << 3);
      iStack_1b4 = (int)((uVar6 << 3) >> 0x20);
      uStack_1c8 = (byte *******)0x3;
      pdb_1415d4a60(&ppppppbStack_f0,**pppppbStack_50 + 2,&UNK_14305e989,3,&ppppppbStack_90,1,
                    &uStack_1c8);
      puVar14 = puStack_58;
      ppppppbVar9 = (byte ******)pppppbStack_e8;
      uVar26 = puStack_a0._0_4_;
      if ((int)ppppppbStack_f0 != 0xb) {
        uStack_188 = uStack_b0;
        uStack_180 = uStack_a8;
        uStack_1a8 = uStack_d0;
        uStack_1a4 = uStack_cc;
        uStack_1b8 = (undefined4)uStack_e0;
        iStack_1b4 = uStack_e0._4_4_;
        uStack_1b0 = uStack_d8;
        uStack_1ac = uStack_d4;
        uStack_1c8 = (byte *******)ppppppbStack_f0;
        pppppbStack_1c0 = pppppbStack_e8;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305e98c,0xf,&uStack_1c8,&UNK_14305ea68,&UNK_14305e9a0);
      }
      ppppppbStack_f0 = (byte ******)pppppbStack_e8;
      uVar12 = uVar16;
      lVar7 = pdb_140f3ecf0(pppppppbVar3,uVar16);
      puVar2 = puStack_98;
      if (lVar7 == 0) {
        pdb_140f5fd10(&uStack_1c8,pppppppbVar3,uVar16);
        arg0 = (undefined4 *)CONCAT44(iStack_1b4,uStack_1b8);
        puVar17 = (undefined4 *)uStack_1c8;
        ppppppbVar10 = (byte ******)pppppbStack_1c0;
        if (!SBORROW8(0,(longlong)uStack_1c8)) goto LAB_140b954ce;
        if (iStack_1b4 < 0) {
          uVar16 = 0;
        }
        else {
          if (arg0 == (undefined4 *)0x0) goto LAB_140b954c4;
          pppppbStack_50 = pppppbStack_1c0;
          pdb_14007ee60();
          uVar16 = 1;
          ppppppbVar10 = (byte ******)pub_1406abab0((ulonglong)arg0,1);
          if (ppppppbVar10 != (byte ******)0x0) goto LAB_140b954aa;
        }
        pdb_142dc7e2a(uVar16,arg0);
      }
      else {
        pdb_140f5fd10(&uStack_1c8,lVar7,uVar12);
        arg0 = (undefined4 *)CONCAT44(iStack_1b4,uStack_1b8);
        puVar17 = (undefined4 *)uStack_1c8;
        ppppppbVar10 = (byte ******)pppppbStack_1c0;
        if (!SBORROW8(0,(longlong)uStack_1c8)) goto LAB_140b954ce;
        if (iStack_1b4 < 0) {
          uVar16 = 0;
        }
        else {
          if (arg0 == (undefined4 *)0x0) {
LAB_140b954c4:
            arg0 = (undefined4 *)0x0;
            puVar17 = (undefined4 *)0x0;
            ppppppbVar10 = (byte ******)0x1;
LAB_140b954ce:
            *puVar2 = uVar26;
            if (!SBORROW8(0,*puVar14)) {
              pppppbStack_78 = (byte *****)ppppppbVar9;
              puStack_a0 = arg0;
              puStack_98 = puVar17;
              pppppbStack_50 = (byte *****)ppppppbVar10;
              pdb_14098a200(puVar14 + 3);
              ppppppbVar10 = (byte ******)pppppbStack_50;
              puVar14 = puStack_58;
              ppppppbVar9 = (byte ******)pppppbStack_78;
              puVar17 = puStack_98;
              arg0 = puStack_a0;
              if (*puStack_58 != 0) {
                pub_1406abac0((byte *)puStack_58[1],*puStack_58,1);
              }
            }
            *puVar14 = (ulonglong)puVar17;
            puVar14[1] = (ulonglong)ppppppbVar10;
            puVar14[2] = (ulonglong)arg0;
            puVar14[3] = (ulonglong)ppppppbVar9;
            if ((byte *******)ppppppbStack_70 == (byte *******)0x0) {
              return;
            }
            pub_1406abac0((byte *)pppppbStack_68,(longlong)ppppppbStack_70 << 3,2);
            return;
          }
          pppppbStack_50 = pppppbStack_1c0;
          pdb_14007ee60();
          uVar16 = 1;
          ppppppbVar10 = (byte ******)pub_1406abab0((ulonglong)arg0,1);
          if (ppppppbVar10 != (byte ******)0x0) {
LAB_140b954aa:
            pub_142e32760(ppppppbVar10,pppppbStack_50,arg0);
            puVar17 = arg0;
            goto LAB_140b954ce;
          }
        }
        pdb_142dc7e2a(uVar16,arg0);
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    pppppppbVar8 = (byte *******)0x2800000003;
  }
  else {
LAB_140b95342:
    if ((byte *******)ppppppbStack_f0 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppbStack_e8,(ulonglong)ppppppbStack_f0,1);
    }
  }
  ppppppbVar9 = (byte ******)pdb_142deaf00(pppppppbVar8);
LAB_140b95380:
  ppppppbStack_90 = ppppppbVar9;
  if (1 < *_DAT_143ca8e90) {
    ppppppbStack_f0 = (byte ******)&ppppppbStack_90;
    pppppbStack_e8 = (byte *****)pdb_140f36c20;
    uStack_1c8 = (byte *******)0x0;
    pppppbStack_1c0 = (byte *****)&UNK_14305e9d7;
    uStack_1b8 = 0x2a;
    iStack_1b4 = 0;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0x4305e95a;
    uStack_1a4 = 1;
    uStack_1a0 = 0x2e;
    uStack_198 = 2;
    puStack_190 = &UNK_14305e9d7;
    uStack_188 = 0x2a;
    uStack_180 = 0x5500000001;
    puStack_178 = &UNK_14305e9b8;
    ppppppbStack_170 = (byte ******)&ppppppbStack_f0;
    pdb_140f332f0(&uStack_59,&uStack_1c8);
  }
  pdb_140f36c40(&ppppppbStack_90);
  return;
}

