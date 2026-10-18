// VA 0x140307d10, PDB extent 1631 bytes
// toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableList<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableList<alloc::string::String>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 1631 */

undefined8
pdb_140307d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5,longlong *param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  ulonglong *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  ulonglong uStack_d8;
  byte *pbStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_1403073d0(auStack_108,param_1,param_2,param_3);
  uVar5 = pdb_140724bb0(auStack_108);
  lVar6 = pdb_1406d0830(auStack_108);
  uVar7 = pdb_140725900(lVar6);
  cVar4 = pdb_140732b60(uVar7);
  uVar12 = 0xffffffb0;
  if (cVar4 != '\0') {
    pdb_140724bc0(param_4);
    uVar12 = 0xffffffff;
  }
  pdb_140734440(&lStack_c8,lVar6,param_2);
  uVar7 = pdb_140726ff0(&lStack_c8);
  pdb_14060a7e0(uVar7);
  uStack_68 = uStack_b8;
  lStack_78 = lStack_c8;
  lStack_70 = lStack_c0;
  pdb_140727080(&lStack_c8,&lStack_78,1);
  pdb_140727100(&lStack_78,&lStack_c8,_DAT_142f3b330);
  pdb_1407270c0(&lStack_c8,&lStack_78,700);
  pdb_140727040(&lStack_78,&lStack_c8,uVar12);
  pdb_1406ccf20(&lStack_c8,&lStack_78);
  lVar18 = *(longlong *)(lVar6 + 8);
  lStack_78 = 0;
  lStack_c8 = pdb_140315970(&lStack_78);
  lStack_c0 = _DAT_142f3b4f0;
  uStack_b8 = _UNK_142f3b4f8;
  lStack_c0 = pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar18;
  uVar7 = pdb_1400b0130(&lStack_c8);
  pdb_14072caa0(&lStack_78,lVar6,uVar7);
  pdb_140737410(&lStack_c8);
  pdb_14072cf30(auStack_f0,&lStack_78);
  if ((int)uVar5 < 1) {
    if (-1 < (int)uVar5) {
      uVar7 = 0;
      goto LAB_140307efe;
    }
    uVar10 = *(ulonglong *)param_6[2];
    uVar14 = uVar5;
    if ((-uVar5 & 3) != 0) {
      iVar13 = 0;
      do {
        uVar10 = (uVar10 - 1) + (ulonglong)(uVar10 == 0);
        iVar13 = iVar13 + -1;
      } while (-(-uVar5 & 3) != iVar13);
      uVar14 = uVar5 - iVar13;
    }
    if (uVar5 < 0xfffffffd) {
      do {
        bVar19 = uVar10 < 4;
        uVar10 = uVar10 - 4;
        if (bVar19) {
          uVar10 = 0;
        }
        uVar14 = uVar14 + 4;
      } while (uVar14 != 0);
    }
    *(ulonglong *)param_6[2] = uVar10;
  }
  else {
    uVar10 = param_6[1];
    uVar9 = uVar10 - 1;
    uVar11 = *(ulonglong *)param_6[2];
    uVar14 = uVar5;
    if ((uVar5 & 3) != 0) {
      uVar14 = 0;
      do {
        uVar11 = uVar11 + 1;
        if (uVar9 < uVar11) {
          uVar11 = uVar9;
        }
        uVar14 = uVar14 + 1;
      } while ((uVar5 & 3) != uVar14);
      uVar14 = uVar5 - uVar14;
    }
    if (3 < uVar5) {
      iVar13 = uVar14 + 4;
      do {
        uVar3 = uVar10;
        if (uVar11 + 1 <= uVar9) {
          uVar3 = uVar11 + 2;
        }
        uVar11 = uVar10;
        if (uVar3 <= uVar9) {
          uVar11 = uVar3 + 1;
        }
        uVar3 = uVar10;
        if (uVar11 <= uVar9) {
          uVar3 = uVar11 + 1;
        }
        uVar11 = uVar9;
        if (uVar3 <= uVar9) {
          uVar11 = uVar3;
        }
        iVar13 = iVar13 + -4;
      } while (4 < iVar13);
    }
    *(ulonglong *)param_6[2] = uVar11;
  }
  uVar7 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
LAB_140307efe:
  pdb_140733f40(&lStack_c8,auStack_f0,&UNK_142f3bcad,5);
  uVar8 = pdb_140725e80(&lStack_c8);
  pdb_14060a7e0(uVar8,_DAT_142f3b334);
  uStack_68 = uStack_b8;
  lStack_78 = lStack_c8;
  lStack_70 = lStack_c0;
  pdb_140726180(&lStack_c8,&lStack_78,5);
  uVar8 = pdb_140725900(&lStack_c8);
  cVar4 = pdb_140732b50(uVar8);
  if (cVar4 == '\0') {
    puVar17 = (ulonglong *)param_6[2];
    uVar10 = *puVar17;
  }
  else {
    puVar17 = (ulonglong *)param_6[2];
    uVar10 = (*puVar17 - 1) + (ulonglong)(*puVar17 == 0);
    *puVar17 = uVar10;
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  uVar11 = param_6[1];
  if (uVar11 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar10,uVar11,&UNK_142e4c138);
  }
  lVar6 = *param_6;
  lVar18 = uVar10 * 3;
  uVar10 = *(ulonglong *)(lVar6 + 0x10 + uVar10 * 0x18);
  uVar20 = uVar10 == 0;
  if (-1 < (longlong)uVar10) goto LAB_140307fb6;
  lVar18 = 0;
  uVar20 = true;
  while( true ) {
    lVar6 = pdb_142dc7e2a(lVar18,uVar10);
LAB_140307fb6:
    if ((bool)uVar20) break;
    uVar8 = *(undefined8 *)(lVar6 + 8 + lVar18 * 8);
    pdb_14007ee60();
    lVar18 = 1;
    pbStack_d0 = pub_1406abab0(uVar10,1);
    uVar20 = pbStack_d0 == (byte *)0x0;
    if (!(bool)uVar20) {
      pub_142e32760(pbStack_d0,uVar8,uVar10);
LAB_140308075:
      uStack_d8 = uVar10;
      pdb_140734440(&lStack_c8,auStack_f0,pbStack_d0,uVar10);
      uVar8 = pdb_140726ff0(&lStack_c8);
      pdb_14060a7e0(uVar8);
      uStack_68 = uStack_b8;
      lStack_78 = lStack_c8;
      lStack_70 = lStack_c0;
      pdb_140727080(&lStack_c8,&lStack_78,1);
      pdb_140727040(&lStack_78,&lStack_c8,uVar12);
      pdb_140727000(&lStack_c8,&lStack_78,2);
      pdb_1406ccf20(&lStack_78,&lStack_c8);
      lVar6 = lStack_78;
      if (*(longlong *)(lStack_78 + 0x1c8) != 0) {
        param_5 = param_5 * _DAT_142e382c0;
        uVar9 = pdb_1400af0a0(lStack_78 + 0x1d0,&lStack_70);
        lVar18 = *(longlong *)(lVar6 + 0x1b0);
        uVar10 = *(ulonglong *)(lVar6 + 0x1b8);
        bVar21 = (byte)(uVar9 >> 0x39);
        auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
        auVar22 = pshuflw(auVar22,auVar22,0);
        lVar6 = 0;
        while( true ) {
          uVar9 = uVar9 & uVar10;
          auVar1 = *(undefined1 (*) [16])(lVar18 + uVar9);
          auVar24[0] = -(auVar1[0] == auVar22[0]);
          auVar24[1] = -(auVar1[1] == auVar22[1]);
          auVar24[2] = -(auVar1[2] == auVar22[2]);
          auVar24[3] = -(auVar1[3] == auVar22[3]);
          auVar24[4] = -(auVar1[4] == auVar22[4]);
          auVar24[5] = -(auVar1[5] == auVar22[5]);
          auVar24[6] = -(auVar1[6] == auVar22[6]);
          auVar24[7] = -(auVar1[7] == auVar22[7]);
          auVar24[8] = -(auVar1[8] == auVar22[0]);
          auVar24[9] = -(auVar1[9] == auVar22[1]);
          auVar24[10] = -(auVar1[10] == auVar22[2]);
          auVar24[0xb] = -(auVar1[0xb] == auVar22[3]);
          auVar24[0xc] = -(auVar1[0xc] == auVar22[4]);
          auVar24[0xd] = -(auVar1[0xd] == auVar22[5]);
          auVar24[0xe] = -(auVar1[0xe] == auVar22[6]);
          auVar24[0xf] = -(auVar1[0xf] == auVar22[7]);
          uVar15 = (ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar24[0xf] >> 7) << 0xf;
          uVar5 = (uint)uVar15;
          while (uVar15 != 0) {
            uVar14 = 0;
            for (uVar2 = uVar5; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            lVar16 = (uVar14 + uVar9 & uVar10) * -0xd8;
            if (lStack_70 == *(longlong *)(lVar18 + -0xd8 + lVar16)) {
              lVar18 = lVar18 + lVar16;
              *(undefined4 *)(lVar18 + -0x90) = 0;
              *(float *)(lVar18 + -0x8c) = param_5;
              pdb_140733f40(&lStack_c8,auStack_f0,&UNK_142f3bcb2,5);
              pdb_140726180(&lStack_78,&lStack_c8,5);
              uVar8 = pdb_140725e80(&lStack_78);
              pdb_14060a7e0(uVar8);
              uStack_b8 = uStack_68;
              lStack_c8 = lStack_78;
              lStack_c0 = lStack_70;
              uVar8 = pdb_140725900(&lStack_c8);
              cVar4 = pdb_140732b50(uVar8);
              if (cVar4 != '\0') {
                uVar10 = uVar11 - 1;
                if (*puVar17 + 1 <= uVar11 - 1) {
                  uVar10 = *puVar17 + 1;
                }
                *puVar17 = uVar10;
                uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              }
              if (uStack_d8 != 0) {
                pub_1406abac0(pbStack_d0,uStack_d8,1);
              }
              return uVar7;
            }
            uVar15 = (ushort)(uVar5 - 1) & (ushort)uVar5;
            uVar5 = CONCAT22((short)(uVar5 - 1 >> 0x10),uVar15);
          }
          auVar23[0] = -(auVar1[0] == -1);
          auVar23[1] = -(auVar1[1] == -1);
          auVar23[2] = -(auVar1[2] == -1);
          auVar23[3] = -(auVar1[3] == -1);
          auVar23[4] = -(auVar1[4] == -1);
          auVar23[5] = -(auVar1[5] == -1);
          auVar23[6] = -(auVar1[6] == -1);
          auVar23[7] = -(auVar1[7] == -1);
          auVar23[8] = -(auVar1[8] == -1);
          auVar23[9] = -(auVar1[9] == -1);
          auVar23[10] = -(auVar1[10] == -1);
          auVar23[0xb] = -(auVar1[0xb] == -1);
          auVar23[0xc] = -(auVar1[0xc] == -1);
          auVar23[0xd] = -(auVar1[0xd] == -1);
          auVar23[0xe] = -(auVar1[0xe] == -1);
          auVar23[0xf] = -(auVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x2f,0) & 1) != 0) || (SUB161(auVar23 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
          uVar9 = uVar9 + lVar6 + 0x10;
          lVar6 = lVar6 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142f3b578);
    }
  }
  pbStack_d0 = (byte *)0x1;
  goto LAB_140308075;
}

