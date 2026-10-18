// VA 0x1409fc690, PDB extent 899 bytes
// country_core::utils::geo::mesh_from_pts
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::geo::mesh_from_pts
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
   Extent: 899 */

ulonglong *
pdb_1409fc690(ulonglong *param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
             longlong param_5)

{
  byte *pbVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined4 uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar12 = param_5 - param_4;
  if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430342d0,0x1d,&UNK_143034318);
  }
  puVar9 = (ulonglong *)pdb_14008d710(0);
  if (puVar9 == (ulonglong *)0x0) {
    pdb_142dc7890(&UNK_143326860);
LAB_1409fc929:
    pdb_142dc7e2a(4,param_3);
  }
  else {
    uStack_90 = *puVar9;
    uStack_88 = puVar9[1];
    *puVar9 = *puVar9 + 1;
    uStack_a0 = _DAT_143046120;
    uStack_98 = _UNK_143046128;
    uStack_b0 = _DAT_143046110;
    uStack_a8 = _UNK_143046118;
    lStack_e8 = 0;
    pbStack_e0 = (byte *)0x4;
    uStack_d8 = 0;
    uStack_d0 = 0x8000000000000000;
    uStack_70 = 0;
    uStack_80 = param_2;
    uStack_78 = param_3;
    if (uVar12 < 0x7ffffffffffffffd) {
      pdb_14007ee60();
      uVar15 = 4;
      pbVar10 = pub_1406abab0(uVar12,4);
      if (pbVar10 != (byte *)0x0) {
        uVar13 = (ulonglong)(param_5 - param_4) / 0xc;
        if (uVar12 - 0xc < 0xc) {
          uVar11 = 0;
LAB_1409fc7f9:
          lVar14 = uVar11 * 0xc;
          uVar2 = *(undefined4 *)(param_4 + 8 + lVar14);
          *(undefined8 *)(pbVar10 + lVar14) = *(undefined8 *)(param_4 + lVar14);
          *(undefined4 *)(pbVar10 + lVar14 + 8) = uVar2;
        }
        else {
          lVar14 = 0x14;
          uVar11 = 0;
          do {
            uVar2 = *(undefined4 *)(param_4 + -0xc + lVar14);
            *(undefined8 *)(pbVar10 + lVar14 + -0x14) = *(undefined8 *)(param_4 + -0x14 + lVar14);
            *(undefined4 *)(pbVar10 + lVar14 + -0xc) = uVar2;
            uVar2 = *(undefined4 *)(param_4 + lVar14);
            *(undefined8 *)(pbVar10 + lVar14 + -8) = *(undefined8 *)(param_4 + -8 + lVar14);
            *(undefined4 *)(pbVar10 + lVar14) = uVar2;
            uVar11 = uVar11 + 2;
            lVar14 = lVar14 + 0x18;
          } while ((uVar13 & 0xffffffffffffffe) != uVar11);
          if ((uVar13 & 1) != 0) goto LAB_1409fc7f9;
        }
        uStack_58 = uVar13;
        pbStack_50 = pbVar10;
        uStack_48 = uVar13;
        pdb_140c93200(&lStack_e8,&UNK_143034330,0xf,&uStack_58);
        uStack_68 = _DAT_142e37950;
        uStack_60 = 0x3f800000;
        pdb_1415e43a0(&uStack_58,&uStack_68,uVar13);
        pdb_140c93200(&lStack_e8,&UNK_14303433f,0xc,&uStack_58);
        param_3 = uVar13 * 4;
        pdb_14007ee60();
        pbVar10 = pub_1406abab0(param_3,4);
        iVar8 = _UNK_1430342ac;
        iVar7 = _UNK_1430342a8;
        iVar6 = _UNK_1430342a4;
        iVar5 = _DAT_1430342a0;
        auVar4 = _DAT_143034290;
        if (pbVar10 != (byte *)0x0) {
          if (0x5f < uVar12) {
            uVar12 = uVar13 & 0xffffffffffffff8;
            uVar11 = 0;
            iVar16 = _DAT_143034280;
            iVar17 = _UNK_143034284;
            iVar18 = _UNK_143034288;
            iVar19 = _UNK_14303428c;
            do {
              pbVar1 = pbVar10 + uVar11 * 4;
              *(int *)pbVar1 = iVar16;
              *(int *)(pbVar1 + 4) = iVar17;
              *(int *)(pbVar1 + 8) = iVar18;
              *(int *)(pbVar1 + 0xc) = iVar19;
              pbVar1 = pbVar10 + uVar11 * 4 + 0x10;
              *(int *)pbVar1 = iVar16 + auVar4._0_4_;
              *(int *)(pbVar1 + 4) = iVar17 + auVar4._4_4_;
              *(int *)(pbVar1 + 8) = iVar18 + auVar4._8_4_;
              *(int *)(pbVar1 + 0xc) = iVar19 + auVar4._12_4_;
              uVar11 = uVar11 + 8;
              iVar16 = iVar16 + iVar5;
              iVar17 = iVar17 + iVar6;
              iVar18 = iVar18 + iVar7;
              iVar19 = iVar19 + iVar8;
            } while (uVar12 != uVar11);
            for (; uVar13 != uVar12; uVar12 = uVar12 + 1) {
LAB_1409fc939:
              *(int *)(pbVar10 + uVar12 * 4) = (int)uVar12;
            }
            if (lStack_e8 != 0) {
              pub_1406abac0(pbStack_e0,lStack_e8 << 2,4);
            }
            param_1[4] = uStack_c8;
            param_1[5] = uStack_c0;
            param_1[6] = uStack_b8;
            param_1[7] = uStack_b0;
            param_1[8] = uStack_a8;
            param_1[9] = uStack_a0;
            param_1[10] = uStack_98;
            param_1[0xb] = uStack_90;
            param_1[0xc] = uStack_88;
            param_1[0xd] = uStack_80;
            param_1[0xe] = uStack_78;
            param_1[0xf] = CONCAT71(uStack_6f,uStack_70);
            *param_1 = uVar13;
            param_1[1] = (ulonglong)pbVar10;
            param_1[2] = uVar13;
            param_1[3] = uStack_d0;
            return param_1;
          }
          uVar12 = 0;
          goto LAB_1409fc939;
        }
        goto LAB_1409fc929;
      }
    }
    else {
      uVar15 = 0;
    }
    pdb_142dc7e2a(uVar15,uVar12);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

