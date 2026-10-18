// VA 0x140309f30, PDB extent 1519 bytes
// toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableList<country_core::render::render_config::ImageQualityPreset> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$13::tweaker<toolbar::mei::widgets::tweaker::TweakableList<country_core::render::render_config::ImageQualityPreset>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 1519 */

undefined8
pdb_140309f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float param_5,longlong param_6)

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
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  longlong lVar17;
  bool bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  ulonglong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_1403073d0(auStack_118,param_1,param_2,param_3);
  uVar5 = pdb_140724bb0(auStack_118);
  lVar6 = pdb_1406d0830(auStack_118);
  uVar7 = pdb_140725900(lVar6);
  cVar4 = pdb_140732b60(uVar7);
  uVar13 = 0xffffffb0;
  if (cVar4 != '\0') {
    pdb_140724bc0(param_4);
    uVar13 = 0xffffffff;
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
  pdb_140727040(&lStack_78,&lStack_c8,uVar13);
  pdb_1406ccf20(&lStack_c8,&lStack_78);
  lVar11 = *(longlong *)(lVar6 + 8);
  lStack_78 = 0;
  lStack_c8 = pdb_140315970(&lStack_78);
  lStack_c0 = _DAT_142f3b4f0;
  uStack_b8 = _UNK_142f3b4f8;
  lStack_c0 = pdb_1400affa0(&lStack_c8);
  lStack_c8 = lVar11;
  uVar7 = pdb_1400b0130(&lStack_c8);
  pdb_14072caa0(&lStack_78,lVar6,uVar7);
  pdb_140737410(&lStack_c8);
  pdb_14072cf30(auStack_100,&lStack_78);
  if ((int)uVar5 < 1) {
    if (-1 < (int)uVar5) {
      uVar7 = 0;
      goto LAB_14030a11d;
    }
    uVar9 = **(ulonglong **)(param_6 + 0x10);
    uVar15 = uVar5;
    if ((-uVar5 & 3) != 0) {
      iVar14 = 0;
      do {
        uVar9 = (uVar9 - 1) + (ulonglong)(uVar9 == 0);
        iVar14 = iVar14 + -1;
      } while (-(-uVar5 & 3) != iVar14);
      uVar15 = uVar5 - iVar14;
    }
    if (uVar5 < 0xfffffffd) {
      do {
        bVar18 = uVar9 < 4;
        uVar9 = uVar9 - 4;
        if (bVar18) {
          uVar9 = 0;
        }
        uVar15 = uVar15 + 4;
      } while (uVar15 != 0);
    }
    **(ulonglong **)(param_6 + 0x10) = uVar9;
  }
  else {
    uVar9 = *(ulonglong *)(param_6 + 8);
    uVar10 = uVar9 - 1;
    uVar12 = **(ulonglong **)(param_6 + 0x10);
    uVar15 = uVar5;
    if ((uVar5 & 3) != 0) {
      uVar15 = 0;
      do {
        uVar12 = uVar12 + 1;
        if (uVar10 < uVar12) {
          uVar12 = uVar10;
        }
        uVar15 = uVar15 + 1;
      } while ((uVar5 & 3) != uVar15);
      uVar15 = uVar5 - uVar15;
    }
    if (3 < uVar5) {
      iVar14 = uVar15 + 4;
      do {
        uVar3 = uVar9;
        if (uVar12 + 1 <= uVar10) {
          uVar3 = uVar12 + 2;
        }
        uVar12 = uVar9;
        if (uVar3 <= uVar10) {
          uVar12 = uVar3 + 1;
        }
        uVar3 = uVar9;
        if (uVar12 <= uVar10) {
          uVar3 = uVar12 + 1;
        }
        uVar12 = uVar10;
        if (uVar3 <= uVar10) {
          uVar12 = uVar3;
        }
        iVar14 = iVar14 + -4;
      } while (4 < iVar14);
    }
    **(ulonglong **)(param_6 + 0x10) = uVar12;
  }
  uVar7 = CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
LAB_14030a11d:
  pdb_140733f40(&lStack_c8,auStack_100,&UNK_142f3bcad,5);
  uVar8 = pdb_140725e80(&lStack_c8);
  pdb_14060a7e0(uVar8,_DAT_142f3b334);
  uStack_68 = uStack_b8;
  lStack_78 = lStack_c8;
  lStack_70 = lStack_c0;
  pdb_140726180(&lStack_c8,&lStack_78,5);
  uVar8 = pdb_140725900(&lStack_c8);
  cVar4 = pdb_140732b50(uVar8);
  if (cVar4 != '\0') {
    lVar6 = **(longlong **)(param_6 + 0x10);
    **(longlong **)(param_6 + 0x10) = lVar6 + -1 + (ulonglong)(lVar6 == 0);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  pdb_140164340(&uStack_e8,param_6);
  pbStack_d0 = pbStack_e0;
  pdb_140734440(&lStack_c8,auStack_100,pbStack_e0,uStack_d8);
  uVar8 = pdb_140726ff0(&lStack_c8);
  pdb_14060a7e0(uVar8);
  uStack_68 = uStack_b8;
  lStack_78 = lStack_c8;
  lStack_70 = lStack_c0;
  pdb_140727080(&lStack_c8,&lStack_78,1);
  pdb_140727040(&lStack_78,&lStack_c8,uVar13);
  pdb_140727000(&lStack_c8,&lStack_78,2);
  pdb_1406ccf20(&lStack_78,&lStack_c8);
  lVar6 = lStack_78;
  if (*(longlong *)(lStack_78 + 0x1c8) != 0) {
    param_5 = param_5 * _DAT_142e382c0;
    uVar12 = pdb_1400af0a0(lStack_78 + 0x1d0,&lStack_70);
    lVar11 = *(longlong *)(lVar6 + 0x1b0);
    uVar9 = *(ulonglong *)(lVar6 + 0x1b8);
    bVar19 = (byte)(uVar12 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar6 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar9;
      auVar1 = *(undefined1 (*) [16])(lVar11 + uVar12);
      auVar22[0] = -(auVar1[0] == auVar20[0]);
      auVar22[1] = -(auVar1[1] == auVar20[1]);
      auVar22[2] = -(auVar1[2] == auVar20[2]);
      auVar22[3] = -(auVar1[3] == auVar20[3]);
      auVar22[4] = -(auVar1[4] == auVar20[4]);
      auVar22[5] = -(auVar1[5] == auVar20[5]);
      auVar22[6] = -(auVar1[6] == auVar20[6]);
      auVar22[7] = -(auVar1[7] == auVar20[7]);
      auVar22[8] = -(auVar1[8] == auVar20[0]);
      auVar22[9] = -(auVar1[9] == auVar20[1]);
      auVar22[10] = -(auVar1[10] == auVar20[2]);
      auVar22[0xb] = -(auVar1[0xb] == auVar20[3]);
      auVar22[0xc] = -(auVar1[0xc] == auVar20[4]);
      auVar22[0xd] = -(auVar1[0xd] == auVar20[5]);
      auVar22[0xe] = -(auVar1[0xe] == auVar20[6]);
      auVar22[0xf] = -(auVar1[0xf] == auVar20[7]);
      uVar16 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar5 = (uint)uVar16;
      while (uVar16 != 0) {
        uVar15 = 0;
        for (uVar2 = uVar5; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        lVar17 = (uVar15 + uVar12 & uVar9) * -0xd8;
        if (lStack_70 == *(longlong *)(lVar11 + -0xd8 + lVar17)) {
          lVar11 = lVar11 + lVar17;
          *(undefined4 *)(lVar11 + -0x90) = 0;
          *(float *)(lVar11 + -0x8c) = param_5;
          pdb_140733f40(&lStack_c8,auStack_100,&UNK_142f3bcb2,5);
          pdb_140726180(&lStack_78,&lStack_c8,5);
          uVar8 = pdb_140725e80(&lStack_78);
          pdb_14060a7e0(uVar8);
          uStack_b8 = uStack_68;
          lStack_c8 = lStack_78;
          lStack_c0 = lStack_70;
          uVar8 = pdb_140725900(&lStack_c8);
          cVar4 = pdb_140732b50(uVar8);
          if (cVar4 != '\0') {
            uVar12 = **(ulonglong **)(param_6 + 0x10) + 1;
            uVar9 = *(longlong *)(param_6 + 8) - 1;
            if (uVar12 <= uVar9) {
              uVar9 = uVar12;
            }
            **(ulonglong **)(param_6 + 0x10) = uVar9;
            uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          }
          if (uStack_e8 != 0) {
            pub_1406abac0(pbStack_d0,uStack_e8,1);
          }
          return uVar7;
        }
        uVar16 = (ushort)(uVar5 - 1) & (ushort)uVar5;
        uVar5 = CONCAT22((short)(uVar5 - 1 >> 0x10),uVar16);
      }
      auVar21[0] = -(auVar1[0] == -1);
      auVar21[1] = -(auVar1[1] == -1);
      auVar21[2] = -(auVar1[2] == -1);
      auVar21[3] = -(auVar1[3] == -1);
      auVar21[4] = -(auVar1[4] == -1);
      auVar21[5] = -(auVar1[5] == -1);
      auVar21[6] = -(auVar1[6] == -1);
      auVar21[7] = -(auVar1[7] == -1);
      auVar21[8] = -(auVar1[8] == -1);
      auVar21[9] = -(auVar1[9] == -1);
      auVar21[10] = -(auVar1[10] == -1);
      auVar21[0xb] = -(auVar1[0xb] == -1);
      auVar21[0xc] = -(auVar1[0xc] == -1);
      auVar21[0xd] = -(auVar1[0xd] == -1);
      auVar21[0xe] = -(auVar1[0xe] == -1);
      auVar21[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar12 = uVar12 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f3b578);
}

