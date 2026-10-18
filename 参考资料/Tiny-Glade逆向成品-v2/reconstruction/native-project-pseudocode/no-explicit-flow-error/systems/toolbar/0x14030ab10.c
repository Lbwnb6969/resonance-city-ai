// VA 0x14030ab10, PDB extent 1423 bytes
// toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableEnum<country_core::game_config::ScreenshotFormat> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableEnum<country_core::game_config::ScreenshotFormat>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 1423 */

undefined8
pdb_14030ab10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5,char *param_6)

{
  undefined1 auVar1 [16];
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  ushort uVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 ***pppuStack_d8;
  byte *pbStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_79;
  undefined8 ****ppppuStack_78;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_1403073d0(auStack_108,param_1,param_2,param_3);
  uVar7 = pdb_140724bb0(auStack_108);
  uVar11 = (ulonglong)uVar7;
  lVar8 = pdb_1406d0830(auStack_108);
  uVar9 = pdb_140725900(lVar8);
  cVar6 = pdb_140732b60(uVar9);
  uVar12 = 0xffffffb0;
  if (cVar6 != '\0') {
    pdb_140724bc0(param_4);
    uVar12 = 0xffffffff;
  }
  pdb_140734440(&ppppuStack_c8,lVar8,param_2,param_3);
  uVar9 = pdb_140726ff0(&ppppuStack_c8);
  pdb_14060a7e0(uVar9);
  uStack_68 = uStack_b8;
  ppppuStack_78 = ppppuStack_c8;
  ppuStack_70 = ppuStack_c0;
  pdb_140727080(&ppppuStack_c8,&ppppuStack_78,1);
  pdb_140727100(&ppppuStack_78,&ppppuStack_c8,_DAT_142f3b330);
  pdb_1407270c0(&ppppuStack_c8,&ppppuStack_78,700);
  pdb_140727040(&ppppuStack_78,&ppppuStack_c8,uVar12);
  pdb_1406ccf20(&ppppuStack_c8,&ppppuStack_78);
  ppppuVar2 = *(undefined8 *****)(lVar8 + 8);
  ppppuStack_78 = (undefined8 ****)0x0;
  ppppuStack_c8 = (undefined8 ****)pdb_140315970(&ppppuStack_78);
  ppuStack_c0 = (undefined8 **)_DAT_142f3b4f0;
  uStack_b8 = _UNK_142f3b4f8;
  ppuStack_c0 = (undefined8 **)pdb_1400affa0(&ppppuStack_c8);
  ppppuStack_c8 = ppppuVar2;
  uVar9 = pdb_1400b0130(&ppppuStack_c8);
  pdb_14072caa0(&ppppuStack_78,lVar8,uVar9);
  pdb_140737410(&ppppuStack_c8);
  pdb_14072cf30(auStack_f0,&ppppuStack_78,&ppppuStack_c8);
  if ((int)uVar7 < 1) {
    if (-1 < (int)uVar7) {
      uVar9 = 0;
      goto LAB_14030acd7;
    }
    do {
      cVar6 = pdb_140a31ae0(param_6);
      if (cVar6 != '\x02') {
        *param_6 = cVar6;
      }
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
    } while (uVar7 != 0);
  }
  else {
    uVar11 = (ulonglong)(uVar7 + 1);
    do {
      cVar6 = pdb_140948120(param_6);
      if (cVar6 != '\x02') {
        *param_6 = cVar6;
      }
      uVar7 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar7;
    } while (1 < uVar7);
  }
  uVar9 = CONCAT71((int7)(uVar11 >> 8),1);
LAB_14030acd7:
  pdb_140733f40(&ppppuStack_c8,auStack_f0,&UNK_142f3bcad,5);
  uVar10 = pdb_140725e80(&ppppuStack_c8);
  pdb_14060a7e0(uVar10,_DAT_142f3b334);
  uStack_68 = uStack_b8;
  ppppuStack_78 = ppppuStack_c8;
  ppuStack_70 = ppuStack_c0;
  pdb_140726180(&ppppuStack_c8,&ppppuStack_78,5);
  uVar10 = pdb_140725900(&ppppuStack_c8);
  cVar6 = pdb_140732b50(uVar10);
  if (cVar6 != '\0') {
    cVar6 = pdb_140a31ae0(param_6);
    uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    if (cVar6 != '\x02') {
      *param_6 = cVar6;
    }
  }
  ppppuStack_78 = (undefined8 ****)0x0;
  ppuStack_70 = (undefined8 **)0x1;
  uStack_68 = 0;
  uStack_b8 = 0x60000020;
  ppuStack_c0 = (undefined8 **)&UNK_142e4c178;
  ppppuStack_c8 = &ppppuStack_78;
  cVar6 = pdb_140a39750(param_6,&ppppuStack_c8);
  if (cVar6 == '\0') {
    pppuStack_d8 = ppppuStack_78;
    pbStack_d0 = (byte *)ppuStack_70;
    pdb_140734440(&ppppuStack_c8,auStack_f0,ppuStack_70,uStack_68);
    uVar10 = pdb_140726ff0(&ppppuStack_c8);
    pdb_14060a7e0(uVar10);
    uStack_68 = uStack_b8;
    ppppuStack_78 = ppppuStack_c8;
    ppuStack_70 = ppuStack_c0;
    pdb_140727080(&ppppuStack_c8,&ppppuStack_78,1);
    pdb_140727040(&ppppuStack_78,&ppppuStack_c8,uVar12);
    pdb_140727000(&ppppuStack_c8,&ppppuStack_78,2);
    pdb_1406ccf20(&ppppuStack_78,&ppppuStack_c8);
    ppppuVar2 = ppppuStack_78;
    if ((undefined8 ****)ppppuStack_78[0x39] != (undefined8 ****)0x0) {
      param_5 = param_5 * _DAT_142e382c0;
      uVar11 = pdb_1400af0a0(ppppuStack_78 + 0x3a,&ppuStack_70);
      ppppuVar3 = (undefined8 ****)ppppuVar2[0x36];
      ppppuVar2 = (undefined8 ****)ppppuVar2[0x37];
      bVar15 = (byte)(uVar11 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar8 = 0;
      while( true ) {
        uVar11 = uVar11 & (ulonglong)ppppuVar2;
        auVar1 = *(undefined1 (*) [16])((longlong)ppppuVar3 + uVar11);
        auVar18[0] = -(auVar1[0] == auVar16[0]);
        auVar18[1] = -(auVar1[1] == auVar16[1]);
        auVar18[2] = -(auVar1[2] == auVar16[2]);
        auVar18[3] = -(auVar1[3] == auVar16[3]);
        auVar18[4] = -(auVar1[4] == auVar16[4]);
        auVar18[5] = -(auVar1[5] == auVar16[5]);
        auVar18[6] = -(auVar1[6] == auVar16[6]);
        auVar18[7] = -(auVar1[7] == auVar16[7]);
        auVar18[8] = -(auVar1[8] == auVar16[0]);
        auVar18[9] = -(auVar1[9] == auVar16[1]);
        auVar18[10] = -(auVar1[10] == auVar16[2]);
        auVar18[0xb] = -(auVar1[0xb] == auVar16[3]);
        auVar18[0xc] = -(auVar1[0xc] == auVar16[4]);
        auVar18[0xd] = -(auVar1[0xd] == auVar16[5]);
        auVar18[0xe] = -(auVar1[0xe] == auVar16[6]);
        auVar18[0xf] = -(auVar1[0xf] == auVar16[7]);
        uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf
        ;
        uVar7 = (uint)uVar13;
        while (uVar13 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar7; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar14 = uVar4 + uVar11 & (ulonglong)ppppuVar2;
          if ((undefined8 ***)ppuStack_70 == ppppuVar3[uVar14 * -0x1b + -0x1b]) {
            *(undefined4 *)(ppppuVar3 + uVar14 * -0x1b + -0x12) = 0;
            *(float *)((longlong)ppppuVar3 + uVar14 * -0xd8 + -0x8c) = param_5;
            pdb_140733f40(&ppppuStack_c8,auStack_f0,&UNK_142f3bcb2,5);
            pdb_140726180(&ppppuStack_78,&ppppuStack_c8,5);
            uVar10 = pdb_140725e80(&ppppuStack_78);
            pdb_14060a7e0(uVar10);
            uStack_b8 = uStack_68;
            ppppuStack_c8 = ppppuStack_78;
            ppuStack_c0 = ppuStack_70;
            uVar10 = pdb_140725900(&ppppuStack_c8);
            cVar6 = pdb_140732b50(uVar10);
            if (cVar6 != '\0') {
              cVar6 = pdb_140948120(param_6);
              uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              if (cVar6 != '\x02') {
                *param_6 = cVar6;
              }
            }
            if ((undefined8 ****)pppuStack_d8 != (undefined8 ****)0x0) {
              pub_1406abac0(pbStack_d0,(ulonglong)pppuStack_d8,1);
            }
            return uVar9;
          }
          uVar13 = (ushort)(uVar7 - 1) & (ushort)uVar7;
          uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar13);
        }
        auVar17[0] = -(auVar1[0] == -1);
        auVar17[1] = -(auVar1[1] == -1);
        auVar17[2] = -(auVar1[2] == -1);
        auVar17[3] = -(auVar1[3] == -1);
        auVar17[4] = -(auVar1[4] == -1);
        auVar17[5] = -(auVar1[5] == -1);
        auVar17[6] = -(auVar1[6] == -1);
        auVar17[7] = -(auVar1[7] == -1);
        auVar17[8] = -(auVar1[8] == -1);
        auVar17[9] = -(auVar1[9] == -1);
        auVar17[10] = -(auVar1[10] == -1);
        auVar17[0xb] = -(auVar1[0xb] == -1);
        auVar17[0xc] = -(auVar1[0xc] == -1);
        auVar17[0xd] = -(auVar1[0xd] == -1);
        auVar17[0xe] = -(auVar1[0xe] == -1);
        auVar17[0xf] = -(auVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar17 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar17 >> 0x1f,0) & 1) != 0) || (SUB161(auVar17 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') break;
        uVar11 = uVar11 + lVar8 + 0x10;
        lVar8 = lVar8 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142f3b578);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e4c1a8,0x37,&uStack_79,&UNK_142e4c298,&UNK_142e4c250);
}

