// VA 0x140307630, PDB extent 1753 bytes
// toolbar::mei::widgets::tweaker::impl$13::tweaker_w_font_size<toolbar::mei::widgets::tweaker::TweakableEnum<tiny_glade::gui::gui_controls::GuiKeyBindingsCategory> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$13::tweaker_w_font_size<toolbar::mei::widgets::tweaker::TweakableEnum<tiny_glade::gui::gui_controls::GuiKeyBindingsCategory>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 1753 */

ulonglong pdb_140307630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       float param_5,float param_6,longlong *param_7)

{
  undefined1 auVar1 [16];
  undefined8 ******ppppppuVar2;
  undefined8 ******ppppppuVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined8 *******pppppppuVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined7 uVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar23;
  ulonglong uVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined8 ******ppppppuStack_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
  undefined8 *****pppppuStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_89;
  undefined8 *******pppppppuStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  fVar7 = _DAT_142e382c0;
  uStack_70 = 0xfffffffffffffffe;
  param_6 = param_6 * _DAT_142e382c0;
  pdb_1403073d0(auStack_118,param_1,param_2,param_3);
  uVar10 = pdb_140724bb0(auStack_118);
  lVar11 = pdb_1406d0830(auStack_118);
  uVar12 = pdb_140725900(lVar11);
  cVar9 = pdb_140732b60(uVar12);
  uVar18 = 0xffffffb0;
  if (cVar9 != '\0') {
    pdb_140724bc0(param_4);
    uVar18 = 0xffffffff;
  }
  pdb_140734440(&pppppppuStack_d8,lVar11,param_2,param_3);
  uVar12 = pdb_140726ff0(&pppppppuStack_d8);
  pdb_14060a7e0(uVar12,param_6);
  uStack_78 = uStack_c8;
  pppppppuStack_88 = pppppppuStack_d8;
  pppppuStack_80 = pppppuStack_d0;
  pdb_140727080(&pppppppuStack_d8,&pppppppuStack_88,1);
  pdb_140727100(&pppppppuStack_88,&pppppppuStack_d8,_DAT_142f3b330);
  pdb_1407270c0(&pppppppuStack_d8,&pppppppuStack_88,700);
  pdb_140727040(&pppppppuStack_88,&pppppppuStack_d8,uVar18);
  pdb_1406ccf20(&pppppppuStack_d8,&pppppppuStack_88);
  ppppppuVar2 = *(undefined8 *******)(lVar11 + 8);
  pppppppuStack_88 = (undefined8 *******)0x0;
  pppppppuStack_d8 = (undefined8 *******)pdb_140315970(&pppppppuStack_88);
  pppppuStack_d0 = (undefined8 *****)_DAT_142f3b4f0;
  uStack_c8 = _UNK_142f3b4f8;
  pppppuStack_d0 = (undefined8 *****)pdb_1400affa0(&pppppppuStack_d8);
  pppppppuStack_d8 = (undefined8 *******)ppppppuVar2;
  uVar12 = pdb_1400b0130(&pppppppuStack_d8);
  pdb_14072caa0(&pppppppuStack_88,lVar11,uVar12);
  pdb_140737410(&pppppppuStack_d8);
  pdb_14072cf30(auStack_100,&pppppppuStack_88,&pppppppuStack_d8);
  if ((int)uVar10 < 1) {
    if ((int)uVar10 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001403078c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (*(code *)(&UNK_142f3bcb8 + *(int *)(&UNK_142f3bcb8 + *param_7 * 4)))
                         (0,*param_7,&UNK_142f3bcb8 + *(int *)(&UNK_142f3bcb8 + *param_7 * 4));
      return uVar13;
    }
    uVar13 = 0;
  }
  else {
    lVar11 = *param_7;
    uVar17 = (undefined7)((ulonglong)&pppppppuStack_d8 >> 8);
    uVar16 = uVar10;
    if ((uVar10 & 3) != 0) {
      uVar16 = 0;
      do {
        lVar19 = lVar11 + 1;
        lVar11 = 6;
        if (lVar19 != 7) {
          *param_7 = lVar19;
          lVar11 = lVar19;
        }
        uVar16 = uVar16 + 1;
      } while ((uVar10 & 3) != uVar16);
      uVar16 = uVar10 - uVar16;
    }
    uVar13 = CONCAT71(uVar17,1);
    if (3 < uVar10) {
      uVar13 = CONCAT71(uVar17,1);
      iVar15 = uVar16 + 4;
      do {
        lVar19 = lVar11 + 1;
        lVar21 = lVar11 + 2;
        if (lVar19 == 7) {
          lVar21 = lVar19;
        }
        lVar20 = lVar21 + 1;
        lVar11 = lVar21;
        if (lVar21 == 7) {
          lVar20 = lVar21;
          lVar11 = lVar19;
        }
        lVar23 = lVar20 + 1;
        lVar5 = lVar20;
        if (lVar20 == 7) {
          lVar23 = lVar20;
          lVar5 = lVar11;
        }
        lVar11 = lVar23;
        lVar6 = lVar23;
        if (lVar23 == 7) {
          lVar11 = 6;
          lVar6 = lVar5;
        }
        if ((((lVar19 != 7) || (lVar21 != 7)) || (lVar20 != 7)) || (lVar23 != 7)) {
          *param_7 = lVar6;
        }
        iVar15 = iVar15 + -4;
      } while (4 < iVar15);
    }
  }
  pdb_140733f40(&pppppppuStack_d8,auStack_100,&UNK_142f3bcad,5);
  uVar12 = pdb_140725e80(&pppppppuStack_d8);
  pdb_14060a7e0(uVar12,param_6);
  uStack_78 = uStack_c8;
  pppppppuStack_88 = pppppppuStack_d8;
  pppppuStack_80 = pppppuStack_d0;
  pdb_140726180(&pppppppuStack_d8,&pppppppuStack_88,5);
  uVar12 = pdb_140725900(&pppppppuStack_d8);
  cVar9 = pdb_140732b50(uVar12);
  if (cVar9 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140307942. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar13 = (*(code *)(&UNK_142f3bcd4 + *(int *)(&UNK_142f3bcd4 + *param_7 * 4)))();
    return uVar13;
  }
  pppppppuStack_88 = (undefined8 *******)0x0;
  pppppuStack_80 = (undefined8 *****)0x1;
  uStack_78 = 0;
  uStack_c8 = 0x60000020;
  pppppuStack_d0 = (undefined8 *****)&UNK_142e4c178;
  pppppppuStack_d8 = &pppppppuStack_88;
  cVar9 = pdb_1402a58f0(param_7,&pppppppuStack_d8);
  if (cVar9 != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142e4c1a8,0x37,&uStack_89,&UNK_142e4c298,&UNK_142e4c250);
  }
  ppppppuStack_e8 = pppppppuStack_88;
  ppppuStack_e0 = pppppuStack_80;
  pdb_140734440(&pppppppuStack_d8,auStack_100,pppppuStack_80,uStack_78);
  uVar12 = pdb_140726ff0(&pppppppuStack_d8);
  pdb_14060a7e0(uVar12);
  uStack_78 = uStack_c8;
  pppppppuStack_88 = pppppppuStack_d8;
  pppppuStack_80 = pppppuStack_d0;
  pdb_140727080(&pppppppuStack_d8,&pppppppuStack_88,1);
  pdb_140727040(&pppppppuStack_88,&pppppppuStack_d8,uVar18);
  pdb_140727000(&pppppppuStack_d8,&pppppppuStack_88,2);
  pdb_1406ccf20(&pppppppuStack_88,&pppppppuStack_d8);
  pppppppuVar8 = pppppppuStack_88;
  if (pppppppuStack_88[0x39] != (undefined8 ******)0x0) {
    uVar14 = pdb_1400af0a0(pppppppuStack_88 + 0x3a,&pppppuStack_80);
    ppppppuVar2 = pppppppuVar8[0x36];
    ppppppuVar3 = pppppppuVar8[0x37];
    bVar25 = (byte)(uVar14 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
    auVar26 = pshuflw(auVar26,auVar26,0);
    lVar11 = 0;
    while( true ) {
      uVar14 = uVar14 & (ulonglong)ppppppuVar3;
      auVar1 = *(undefined1 (*) [16])((longlong)ppppppuVar2 + uVar14);
      auVar28[0] = -(auVar1[0] == auVar26[0]);
      auVar28[1] = -(auVar1[1] == auVar26[1]);
      auVar28[2] = -(auVar1[2] == auVar26[2]);
      auVar28[3] = -(auVar1[3] == auVar26[3]);
      auVar28[4] = -(auVar1[4] == auVar26[4]);
      auVar28[5] = -(auVar1[5] == auVar26[5]);
      auVar28[6] = -(auVar1[6] == auVar26[6]);
      auVar28[7] = -(auVar1[7] == auVar26[7]);
      auVar28[8] = -(auVar1[8] == auVar26[0]);
      auVar28[9] = -(auVar1[9] == auVar26[1]);
      auVar28[10] = -(auVar1[10] == auVar26[2]);
      auVar28[0xb] = -(auVar1[0xb] == auVar26[3]);
      auVar28[0xc] = -(auVar1[0xc] == auVar26[4]);
      auVar28[0xd] = -(auVar1[0xd] == auVar26[5]);
      auVar28[0xe] = -(auVar1[0xe] == auVar26[6]);
      auVar28[0xf] = -(auVar1[0xf] == auVar26[7]);
      uVar22 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar22;
      while (uVar22 != 0) {
        uVar16 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        uVar24 = uVar16 + uVar14 & (ulonglong)ppppppuVar3;
        if (pppppuStack_80 == ppppppuVar2[uVar24 * -0x1b + -0x1b]) {
          *(undefined4 *)(ppppppuVar2 + uVar24 * -0x1b + -0x12) = 0;
          *(float *)((longlong)ppppppuVar2 + uVar24 * -0xd8 + -0x8c) = fVar7 * param_5;
          pdb_140733f40(&pppppppuStack_d8,auStack_100,&UNK_142f3bcb2,5);
          pdb_140726180(&pppppppuStack_88,&pppppppuStack_d8,5);
          uVar12 = pdb_140725e80(&pppppppuStack_88);
          pdb_14060a7e0(uVar12,param_6);
          uStack_c8 = uStack_78;
          pppppppuStack_d8 = pppppppuStack_88;
          pppppuStack_d0 = pppppuStack_80;
          uVar12 = pdb_140725900(&pppppppuStack_d8);
          cVar9 = pdb_140732b50(uVar12);
          if (cVar9 != '\0') {
            uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
            if (*param_7 + 1 != 7) {
              *param_7 = *param_7 + 1;
            }
          }
          if (ppppppuStack_e8 != (undefined8 ******)0x0) {
            pub_1406abac0((byte *)ppppuStack_e0,(ulonglong)ppppppuStack_e8,1);
          }
          return uVar13 & 0xffffffff;
        }
        uVar22 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar22);
      }
      auVar27[0] = -(auVar1[0] == -1);
      auVar27[1] = -(auVar1[1] == -1);
      auVar27[2] = -(auVar1[2] == -1);
      auVar27[3] = -(auVar1[3] == -1);
      auVar27[4] = -(auVar1[4] == -1);
      auVar27[5] = -(auVar1[5] == -1);
      auVar27[6] = -(auVar1[6] == -1);
      auVar27[7] = -(auVar1[7] == -1);
      auVar27[8] = -(auVar1[8] == -1);
      auVar27[9] = -(auVar1[9] == -1);
      auVar27[10] = -(auVar1[10] == -1);
      auVar27[0xb] = -(auVar1[0xb] == -1);
      auVar27[0xc] = -(auVar1[0xc] == -1);
      auVar27[0xd] = -(auVar1[0xd] == -1);
      auVar27[0xe] = -(auVar1[0xe] == -1);
      auVar27[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar14 = uVar14 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f3b578);
}

