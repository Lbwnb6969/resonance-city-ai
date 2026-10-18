// VA 0x14030c690, PDB extent 1295 bytes
// toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableEnum<tiny_glade::gui::settings::DisplayMode> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableEnum<tiny_glade::gui::settings::DisplayMode>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 1295 */

ulonglong pdb_14030c690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       float param_5,char *param_6)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined7 uVar13;
  ulonglong uVar12;
  undefined4 uVar14;
  ushort uVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  ulonglong uStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  byte *pbStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pcStack_d8 = param_6;
  pdb_1403073d0(auStack_120,param_1,param_2,param_3);
  uVar5 = pdb_140724bb0(auStack_120);
  lVar6 = pdb_1406d0830(auStack_120);
  uVar7 = pdb_140725900(lVar6);
  cVar4 = pdb_140732b60(uVar7);
  uVar14 = 0xffffffb0;
  if (cVar4 != '\0') {
    pdb_140724bc0(param_4);
    uVar14 = 0xffffffff;
  }
  pdb_140734440(&lStack_c8,lVar6,param_2,param_3);
  uVar7 = pdb_140726ff0(&lStack_c8);
  pdb_14060a7e0(uVar7);
  uStack_68 = uStack_b8;
  lStack_78 = lStack_c8;
  lStack_70 = lStack_c0;
  pdb_140727080(&lStack_c8,&lStack_78,1);
  pdb_140727100(&lStack_78,&lStack_c8,_DAT_142f3b330);
  pdb_1407270c0(&lStack_c8,&lStack_78,700);
  pdb_140727040(&lStack_78,&lStack_c8,uVar14);
  pdb_1406ccf20(&lStack_c8,&lStack_78);
  lVar10 = *(longlong *)(lVar6 + 8);
  lStack_78 = 0;
  lStack_c8 = pdb_140315970(&lStack_78);
  lStack_c0 = _DAT_142f3b4f0;
  uStack_b8 = _UNK_142f3b4f8;
  lStack_c0 = pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar10;
  uVar7 = pdb_1400b0130(&lStack_c8);
  pdb_14072caa0(&lStack_78,lVar6,uVar7);
  pdb_140737410(&lStack_c8);
  pdb_14072cf30(auStack_108,&lStack_78,&lStack_c8);
  uVar13 = (undefined7)((ulonglong)&lStack_c8 >> 8);
  if ((int)uVar5 < 1) {
    if ((int)uVar5 < 0) {
      if (*param_6 != '\0') {
        *param_6 = '\0';
      }
      uVar12 = CONCAT71(uVar13,1);
      do {
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    cVar4 = *param_6;
    uVar11 = uVar5;
    if ((uVar5 & 3) != 0) {
      uVar11 = 0;
      do {
        if (cVar4 == '\0') {
          *param_6 = '\x01';
          cVar4 = '\x01';
        }
        uVar11 = uVar11 + 1;
      } while ((uVar5 & 3) != uVar11);
      uVar11 = uVar5 - uVar11;
    }
    uVar12 = CONCAT71(uVar13,1);
    if (3 < uVar5) {
      uVar12 = CONCAT71(uVar13,1);
      iVar9 = uVar11 + 4;
      do {
        if (cVar4 == '\0') {
          *param_6 = '\x01';
          cVar4 = '\x01';
        }
        iVar9 = iVar9 + -4;
      } while (4 < iVar9);
    }
  }
  pdb_140733f40(&lStack_c8,auStack_108,&UNK_142f3bcad,5);
  uVar7 = pdb_140725e80(&lStack_c8);
  pdb_14060a7e0(uVar7,_DAT_142f3b334);
  uStack_68 = uStack_b8;
  lStack_78 = lStack_c8;
  lStack_70 = lStack_c0;
  pdb_140726180(&lStack_c8,&lStack_78,5);
  uVar7 = pdb_140725900(&lStack_c8);
  cVar4 = pdb_140732b50(uVar7);
  if ((cVar4 != '\0') && (uVar12 = CONCAT71((int7)(uVar12 >> 8),1), *param_6 != '\0')) {
    *param_6 = '\0';
  }
  pdb_140163f10(&uStack_f0,&pcStack_d8);
  pbStack_d0 = pbStack_e8;
  pdb_140734440(&lStack_c8,auStack_108,pbStack_e8,uStack_e0);
  uVar7 = pdb_140726ff0(&lStack_c8);
  pdb_14060a7e0(uVar7);
  uStack_68 = uStack_b8;
  lStack_78 = lStack_c8;
  lStack_70 = lStack_c0;
  pdb_140727080(&lStack_c8,&lStack_78,1);
  pdb_140727040(&lStack_78,&lStack_c8,uVar14);
  pdb_140727000(&lStack_c8,&lStack_78,2);
  pdb_1406ccf20(&lStack_78,&lStack_c8);
  lVar6 = lStack_78;
  if (*(longlong *)(lStack_78 + 0x1c8) != 0) {
    param_5 = param_5 * _DAT_142e382c0;
    uVar8 = pdb_1400af0a0(lStack_78 + 0x1d0,&lStack_70);
    lVar10 = *(longlong *)(lVar6 + 0x1b0);
    uVar2 = *(ulonglong *)(lVar6 + 0x1b8);
    bVar17 = (byte)(uVar8 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar6 = 0;
    while( true ) {
      uVar8 = uVar8 & uVar2;
      auVar1 = *(undefined1 (*) [16])(lVar10 + uVar8);
      auVar20[0] = -(auVar1[0] == auVar18[0]);
      auVar20[1] = -(auVar1[1] == auVar18[1]);
      auVar20[2] = -(auVar1[2] == auVar18[2]);
      auVar20[3] = -(auVar1[3] == auVar18[3]);
      auVar20[4] = -(auVar1[4] == auVar18[4]);
      auVar20[5] = -(auVar1[5] == auVar18[5]);
      auVar20[6] = -(auVar1[6] == auVar18[6]);
      auVar20[7] = -(auVar1[7] == auVar18[7]);
      auVar20[8] = -(auVar1[8] == auVar18[0]);
      auVar20[9] = -(auVar1[9] == auVar18[1]);
      auVar20[10] = -(auVar1[10] == auVar18[2]);
      auVar20[0xb] = -(auVar1[0xb] == auVar18[3]);
      auVar20[0xc] = -(auVar1[0xc] == auVar18[4]);
      auVar20[0xd] = -(auVar1[0xd] == auVar18[5]);
      auVar20[0xe] = -(auVar1[0xe] == auVar18[6]);
      auVar20[0xf] = -(auVar1[0xf] == auVar18[7]);
      uVar15 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar5 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar11 = 0;
        for (uVar3 = uVar5; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        lVar16 = (uVar11 + uVar8 & uVar2) * -0xd8;
        if (lStack_70 == *(longlong *)(lVar10 + -0xd8 + lVar16)) {
          lVar10 = lVar10 + lVar16;
          *(undefined4 *)(lVar10 + -0x90) = 0;
          *(float *)(lVar10 + -0x8c) = param_5;
          pdb_140733f40(&lStack_c8,auStack_108,&UNK_142f3bcb2,5);
          pdb_140726180(&lStack_78,&lStack_c8,5);
          uVar7 = pdb_140725e80(&lStack_78);
          pdb_14060a7e0(uVar7);
          uStack_b8 = uStack_68;
          lStack_c8 = lStack_78;
          lStack_c0 = lStack_70;
          uVar7 = pdb_140725900(&lStack_c8);
          cVar4 = pdb_140732b50(uVar7);
          if ((cVar4 != '\0') && (uVar12 = CONCAT71((int7)(uVar12 >> 8),1), *param_6 == '\0')) {
            *param_6 = '\x01';
          }
          if (uStack_f0 != 0) {
            pub_1406abac0(pbStack_d0,uStack_f0,1);
          }
          return uVar12 & 0xffffffff;
        }
        uVar15 = (ushort)(uVar5 - 1) & (ushort)uVar5;
        uVar5 = CONCAT22((short)(uVar5 - 1 >> 0x10),uVar15);
      }
      auVar19[0] = -(auVar1[0] == -1);
      auVar19[1] = -(auVar1[1] == -1);
      auVar19[2] = -(auVar1[2] == -1);
      auVar19[3] = -(auVar1[3] == -1);
      auVar19[4] = -(auVar1[4] == -1);
      auVar19[5] = -(auVar1[5] == -1);
      auVar19[6] = -(auVar1[6] == -1);
      auVar19[7] = -(auVar1[7] == -1);
      auVar19[8] = -(auVar1[8] == -1);
      auVar19[9] = -(auVar1[9] == -1);
      auVar19[10] = -(auVar1[10] == -1);
      auVar19[0xb] = -(auVar1[0xb] == -1);
      auVar19[0xc] = -(auVar1[0xc] == -1);
      auVar19[0xd] = -(auVar1[0xd] == -1);
      auVar19[0xe] = -(auVar1[0xe] == -1);
      auVar19[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar8 = uVar8 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f3b578);
}

