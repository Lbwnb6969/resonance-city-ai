// VA 0x141740e10, PDB extent 676 bytes
// country_core::utils::geo::update_curve_mesh<core::iter::adapters::copied::Copied<core::slice::iter::Iter<glam::f32::vec3::Vec3> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::geo::update_curve_mesh<core::iter::adapters::copied::Copied<core::slice::iter::Iter<glam::f32::vec3::Vec3>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
   Extent: 676 */

void pdb_141740e10(ulonglong param_1,ulonglong param_2,int *param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong *puVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *unaff_RBX;
  ulonglong *unaff_RDI;
  longlong lVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined8 uStack_60;
  undefined4 uStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  ulonglong uStack_40;
  
  uVar18 = param_2 - param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar18;
  uVar15 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
  if (*param_3 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14332bfa0);
  }
  puVar12 = (ulonglong *)pdb_140a2d890(param_4,*(undefined8 *)(param_3 + 2));
  if (puVar12 == (ulonglong *)0x0) {
    pdb_142dc8110(&UNK_14332bfb8,8,&UNK_14332bfc0);
LAB_141741066:
    pbVar13 = unaff_RBX;
    uVar18 = pdb_142dc7e2a(4,param_2);
  }
  else {
    if (uVar18 < 0x7ffffffffffffffd) goto LAB_141740e7d;
    uVar17 = 0;
    do {
      pdb_142dc7e2a(uVar17,uVar18);
LAB_141740e7d:
      uVar15 = uVar15 >> 3;
      unaff_RBX = (byte *)0x4;
      if (param_2 == param_1) {
        pbStack_48 = (byte *)0x4;
        uStack_50 = 0;
        goto LAB_141740f4c;
      }
      pdb_14007ee60();
      uVar17 = 4;
      pbStack_48 = pub_1406abab0(uVar18,4);
    } while (pbStack_48 == (byte *)0x0);
    uStack_50 = uVar15;
    if (uVar18 - 0xc < 0xc) {
      uVar14 = 0;
LAB_141740f29:
      lVar16 = uVar14 * 0xc;
      uVar2 = *(undefined4 *)(param_1 + 8 + lVar16);
      *(undefined8 *)(pbStack_48 + lVar16) = *(undefined8 *)(param_1 + lVar16);
      *(undefined4 *)(pbStack_48 + lVar16 + 8) = uVar2;
    }
    else {
      lVar16 = 0x14;
      uVar14 = 0;
      do {
        uVar2 = *(undefined4 *)((param_1 - 0xc) + lVar16);
        *(undefined8 *)(pbStack_48 + lVar16 + -0x14) = *(undefined8 *)((param_1 - 0x14) + lVar16);
        *(undefined4 *)(pbStack_48 + lVar16 + -0xc) = uVar2;
        uVar2 = *(undefined4 *)(param_1 + lVar16);
        *(undefined8 *)(pbStack_48 + lVar16 + -8) = *(undefined8 *)((param_1 - 8) + lVar16);
        *(undefined4 *)(pbStack_48 + lVar16) = uVar2;
        uVar14 = uVar14 + 2;
        lVar16 = lVar16 + 0x18;
      } while ((uVar15 & 0xffffffffffffffe) != uVar14);
      if ((uVar15 & 1) != 0) goto LAB_141740f29;
    }
LAB_141740f4c:
    uStack_40 = uStack_50;
    pdb_140c93200(puVar12,&UNK_14332bfd8,0xf,&uStack_50);
    uStack_60 = _DAT_142e37950;
    uStack_58 = 0x3f800000;
    pdb_1415e43a0(&uStack_50,&uStack_60,uVar15);
    pdb_140c93200(puVar12,&UNK_14332bfe7,0xc,&uStack_50);
    if (param_2 == param_1) {
      uVar15 = 0;
      goto LAB_14174107e;
    }
    param_2 = uVar15 * 4;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(param_2,4);
    iVar11 = _UNK_1430342ac;
    iVar10 = _UNK_1430342a8;
    iVar9 = _UNK_1430342a4;
    iVar8 = _DAT_1430342a0;
    iVar7 = _UNK_14303429c;
    iVar6 = _UNK_143034298;
    iVar5 = _UNK_143034294;
    iVar4 = _DAT_143034290;
    unaff_RDI = puVar12;
    if (pbVar13 == (byte *)0x0) goto LAB_141741066;
    if (0x5f < uVar18) {
      uVar18 = uVar15 & 0xffffffffffffff8;
      uVar14 = 0;
      iVar19 = _DAT_143034280;
      iVar20 = _UNK_143034284;
      iVar21 = _UNK_143034288;
      iVar22 = _UNK_14303428c;
      do {
        pbVar1 = pbVar13 + uVar14 * 4;
        *(int *)pbVar1 = iVar19;
        *(int *)(pbVar1 + 4) = iVar20;
        *(int *)(pbVar1 + 8) = iVar21;
        *(int *)(pbVar1 + 0xc) = iVar22;
        pbVar1 = pbVar13 + uVar14 * 4 + 0x10;
        *(int *)pbVar1 = iVar19 + iVar4;
        *(int *)(pbVar1 + 4) = iVar20 + iVar5;
        *(int *)(pbVar1 + 8) = iVar21 + iVar6;
        *(int *)(pbVar1 + 0xc) = iVar22 + iVar7;
        uVar14 = uVar14 + 8;
        iVar19 = iVar19 + iVar8;
        iVar20 = iVar20 + iVar9;
        iVar21 = iVar21 + iVar10;
        iVar22 = iVar22 + iVar11;
        if (uVar18 == uVar14) goto LAB_141741079;
      } while( true );
    }
    uVar18 = 0;
  }
  do {
    *(int *)(pbVar13 + uVar18 * 4) = (int)uVar18;
    uVar18 = uVar18 + 1;
LAB_141741079:
    unaff_RBX = pbVar13;
    puVar12 = unaff_RDI;
  } while (uVar15 != uVar18);
LAB_14174107e:
  if (*puVar12 != 0) {
    pub_1406abac0((byte *)puVar12[1],*puVar12 << 2,4);
  }
  *puVar12 = uVar15;
  puVar12[1] = (ulonglong)unaff_RBX;
  puVar12[2] = uVar15;
  return;
}

