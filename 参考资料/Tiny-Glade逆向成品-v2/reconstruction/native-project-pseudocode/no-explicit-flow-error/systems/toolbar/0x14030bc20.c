// VA 0x14030bc20, PDB extent 1243 bytes
// toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableBool>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableBool>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 1243 */

undefined8
pdb_14030bc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  ulonglong uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_70 = param_6;
  pdb_1403073d0(auStack_108,param_1,param_2,param_3);
  iVar5 = pdb_140724bb0(auStack_108);
  lVar6 = pdb_1406d0830(auStack_108);
  uVar7 = pdb_140725900(lVar6);
  cVar4 = pdb_140732b60(uVar7);
  uVar13 = 0xffffffb0;
  if (cVar4 != '\0') {
    pdb_140724bc0(param_4);
    uVar13 = 0xffffffff;
  }
  pdb_140734440(&lStack_b8,lVar6,param_2,param_3);
  uVar7 = pdb_140726ff0(&lStack_b8);
  pdb_14060a7e0(uVar7);
  uStack_58 = uStack_a8;
  lStack_68 = lStack_b8;
  lStack_60 = lStack_b0;
  pdb_140727080(&lStack_b8,&lStack_68,1);
  pdb_140727100(&lStack_68,&lStack_b8,_DAT_142f3b330);
  pdb_1407270c0(&lStack_b8,&lStack_68,700);
  pdb_140727040(&lStack_68,&lStack_b8,uVar13);
  pdb_1406ccf20(&lStack_b8,&lStack_68);
  lVar10 = *(longlong *)(lVar6 + 8);
  lStack_68 = 0;
  lStack_b8 = pdb_140315970(&lStack_68);
  lStack_b0 = _DAT_142f3b4f0;
  uStack_a8 = _UNK_142f3b4f8;
  lStack_b0 = pdb_1400affa0(&lStack_b8);
  lStack_b8 = lVar10;
  uVar7 = pdb_1400b0130(&lStack_b8);
  pdb_14072caa0(&lStack_68,lVar6,uVar7);
  pdb_140737410(&lStack_b8);
  pdb_14072cf30(auStack_f0,&lStack_68,&lStack_b8);
  if (iVar5 < 1) {
    if (-1 < iVar5) {
      uVar7 = 0;
      goto LAB_14030bdcc;
    }
    do {
      pdb_140724990(&uStack_70);
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
    uVar12 = 0;
  }
  else {
    uVar12 = (ulonglong)(iVar5 + 1);
    do {
      pdb_1407249a0(&uStack_70);
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    } while (1 < uVar11);
  }
  uVar7 = CONCAT71((int7)(uVar12 >> 8),1);
LAB_14030bdcc:
  pdb_140733f40(&lStack_b8,auStack_f0,&UNK_142f3bcad,5);
  uVar8 = pdb_140725e80(&lStack_b8);
  pdb_14060a7e0(uVar8,_DAT_142f3b334);
  uStack_58 = uStack_a8;
  lStack_68 = lStack_b8;
  lStack_60 = lStack_b0;
  pdb_140726180(&lStack_b8,&lStack_68,5);
  uVar8 = pdb_140725900(&lStack_b8);
  cVar4 = pdb_140732b50(uVar8);
  if (cVar4 != '\0') {
    pdb_140724990(&uStack_70);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  pdb_1407248e0(&uStack_d8,&uStack_70);
  pbStack_c0 = pbStack_d0;
  pdb_140734440(&lStack_b8,auStack_f0,pbStack_d0,uStack_c8);
  uVar8 = pdb_140726ff0(&lStack_b8);
  pdb_14060a7e0(uVar8);
  uStack_58 = uStack_a8;
  lStack_68 = lStack_b8;
  lStack_60 = lStack_b0;
  pdb_140727080(&lStack_b8,&lStack_68,1);
  pdb_140727040(&lStack_68,&lStack_b8,uVar13);
  pdb_140727000(&lStack_b8,&lStack_68,2);
  pdb_1406ccf20(&lStack_68,&lStack_b8);
  lVar6 = lStack_68;
  if (*(longlong *)(lStack_68 + 0x1c8) != 0) {
    param_5 = param_5 * _DAT_142e382c0;
    uVar9 = pdb_1400af0a0(lStack_68 + 0x1d0,&lStack_60);
    lVar10 = *(longlong *)(lVar6 + 0x1b0);
    uVar12 = *(ulonglong *)(lVar6 + 0x1b8);
    bVar16 = (byte)(uVar9 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar6 = 0;
    while( true ) {
      uVar9 = uVar9 & uVar12;
      auVar1 = *(undefined1 (*) [16])(lVar10 + uVar9);
      auVar19[0] = -(auVar1[0] == auVar17[0]);
      auVar19[1] = -(auVar1[1] == auVar17[1]);
      auVar19[2] = -(auVar1[2] == auVar17[2]);
      auVar19[3] = -(auVar1[3] == auVar17[3]);
      auVar19[4] = -(auVar1[4] == auVar17[4]);
      auVar19[5] = -(auVar1[5] == auVar17[5]);
      auVar19[6] = -(auVar1[6] == auVar17[6]);
      auVar19[7] = -(auVar1[7] == auVar17[7]);
      auVar19[8] = -(auVar1[8] == auVar17[0]);
      auVar19[9] = -(auVar1[9] == auVar17[1]);
      auVar19[10] = -(auVar1[10] == auVar17[2]);
      auVar19[0xb] = -(auVar1[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar1[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar1[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar1[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar1[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar15 = (uVar2 + uVar9 & uVar12) * -0xd8;
        if (lStack_60 == *(longlong *)(lVar10 + -0xd8 + lVar15)) {
          lVar10 = lVar10 + lVar15;
          *(undefined4 *)(lVar10 + -0x90) = 0;
          *(float *)(lVar10 + -0x8c) = param_5;
          pdb_140733f40(&lStack_b8,auStack_f0,&UNK_142f3bcb2,5);
          pdb_140726180(&lStack_68,&lStack_b8,5);
          uVar8 = pdb_140725e80(&lStack_68);
          pdb_14060a7e0(uVar8);
          uStack_a8 = uStack_58;
          lStack_b8 = lStack_68;
          lStack_b0 = lStack_60;
          uVar8 = pdb_140725900(&lStack_b8);
          cVar4 = pdb_140732b50(uVar8);
          if (cVar4 != '\0') {
            uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
            pdb_1407249a0(&uStack_70);
          }
          if (uStack_d8 != 0) {
            pub_1406abac0(pbStack_c0,uStack_d8,1);
          }
          return uVar7;
        }
        uVar14 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(auVar1[0] == -1);
      auVar18[1] = -(auVar1[1] == -1);
      auVar18[2] = -(auVar1[2] == -1);
      auVar18[3] = -(auVar1[3] == -1);
      auVar18[4] = -(auVar1[4] == -1);
      auVar18[5] = -(auVar1[5] == -1);
      auVar18[6] = -(auVar1[6] == -1);
      auVar18[7] = -(auVar1[7] == -1);
      auVar18[8] = -(auVar1[8] == -1);
      auVar18[9] = -(auVar1[9] == -1);
      auVar18[10] = -(auVar1[10] == -1);
      auVar18[0xb] = -(auVar1[0xb] == -1);
      auVar18[0xc] = -(auVar1[0xc] == -1);
      auVar18[0xd] = -(auVar1[0xd] == -1);
      auVar18[0xe] = -(auVar1[0xe] == -1);
      auVar18[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar9 = uVar9 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f3b578);
}

