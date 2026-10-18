// VA 0x1417410c0, PDB extent 736 bytes
// country_core::utils::geo::update_curve_mesh<alloc::vec::into_iter::IntoIter<glam::f32::vec3::Vec3,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::geo::update_curve_mesh<alloc::vec::into_iter::IntoIter<glam::f32::vec3::Vec3,alloc::alloc::Global>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
   Extent: 736 */

void pdb_1417410c0(longlong *param_1,char *param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong *puVar14;
  byte *pbVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uStack_70;
  undefined4 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  longlong *plStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lVar3 = param_1[1];
  lVar4 = param_1[3];
  uVar17 = lVar4 - lVar3;
  plStack_48 = param_1;
  if (*param_2 != '\0') {
    uStack_39 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14332bfa0);
  }
  uStack_39 = 1;
  puVar14 = (ulonglong *)pdb_140a2d890(param_3,*(undefined8 *)(param_2 + 8));
  if (puVar14 == (ulonglong *)0x0) {
    uStack_39 = 1;
    pdb_142dc8110(&UNK_14332bfb8,8,&UNK_14332bfc0);
    goto LAB_141741308;
  }
  uVar18 = uVar17 / 0xc;
  lStack_58 = *plStack_48;
  lStack_60 = plStack_48[2];
  if (lVar4 != lVar3) {
    if (uVar17 - 0xc < 0xc) {
      uVar16 = 0;
    }
    else {
      lVar19 = 0x14;
      uVar16 = 0;
      do {
        uVar2 = *(undefined4 *)(lVar3 + -0xc + lVar19);
        *(undefined8 *)(lStack_58 + -0x14 + lVar19) = *(undefined8 *)(lVar3 + -0x14 + lVar19);
        *(undefined4 *)(lStack_58 + -0xc + lVar19) = uVar2;
        uVar2 = *(undefined4 *)(lVar3 + lVar19);
        uVar16 = uVar16 + 2;
        *(undefined8 *)(lStack_58 + -8 + lVar19) = *(undefined8 *)(lVar3 + -8 + lVar19);
        *(undefined4 *)(lStack_58 + lVar19) = uVar2;
        lVar19 = lVar19 + 0x18;
      } while ((uVar18 & 0xfffffffffffffffe) != uVar16);
      if ((uVar18 & 1) == 0) goto LAB_1417411c9;
    }
    lVar19 = uVar16 * 0xc;
    uVar2 = *(undefined4 *)(lVar3 + 8 + lVar19);
    *(undefined8 *)(lStack_58 + lVar19) = *(undefined8 *)(lVar3 + lVar19);
    *(undefined4 *)(lStack_58 + 8 + lVar19) = uVar2;
  }
LAB_1417411c9:
  uStack_39 = 0;
  uStack_50 = uVar18;
  pdb_140c93200(puVar14,&UNK_14332bfd8,0xf,&lStack_60);
  uStack_70 = _DAT_142e37950;
  uStack_68 = 0x3f800000;
  uStack_39 = 0;
  pdb_1415e43a0(&lStack_60,&uStack_70,uVar18);
  uStack_39 = 0;
  pdb_140c93200(puVar14,&UNK_14332bfe7,0xc,&lStack_60);
  if (lVar4 == lVar3) {
    uVar18 = 0;
    pbVar15 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    pbVar15 = pub_1406abab0(uVar18 * 4,4);
    iVar13 = _UNK_1430342ac;
    iVar12 = _UNK_1430342a8;
    iVar11 = _UNK_1430342a4;
    iVar10 = _DAT_1430342a0;
    iVar9 = _UNK_14303429c;
    iVar8 = _UNK_143034298;
    iVar7 = _UNK_143034294;
    iVar6 = _DAT_143034290;
    if (pbVar15 == (byte *)0x0) {
      uStack_39 = 0;
      pdb_142dc7e2a(4,uVar18 * 4);
LAB_141741308:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (0x5f < uVar17) {
      uVar17 = uVar18 & 0xfffffffffffffff8;
      uVar16 = 0;
      iVar20 = _DAT_143034280;
      iVar21 = _UNK_143034284;
      iVar22 = _UNK_143034288;
      iVar23 = _UNK_14303428c;
      do {
        pbVar1 = pbVar15 + uVar16 * 4;
        *(int *)pbVar1 = iVar20;
        *(int *)(pbVar1 + 4) = iVar21;
        *(int *)(pbVar1 + 8) = iVar22;
        *(int *)(pbVar1 + 0xc) = iVar23;
        pbVar1 = pbVar15 + uVar16 * 4 + 0x10;
        *(int *)pbVar1 = iVar20 + iVar6;
        *(int *)(pbVar1 + 4) = iVar21 + iVar7;
        *(int *)(pbVar1 + 8) = iVar22 + iVar8;
        *(int *)(pbVar1 + 0xc) = iVar23 + iVar9;
        uVar16 = uVar16 + 8;
        iVar20 = iVar20 + iVar10;
        iVar21 = iVar21 + iVar11;
        iVar22 = iVar22 + iVar12;
        iVar23 = iVar23 + iVar13;
        if (uVar17 == uVar16) goto LAB_141741311;
      } while( true );
    }
    uVar17 = 0;
    do {
      *(int *)(pbVar15 + uVar17 * 4) = (int)uVar17;
      uVar17 = uVar17 + 1;
LAB_141741311:
    } while (uVar18 != uVar17);
  }
  if (*puVar14 != 0) {
    pub_1406abac0((byte *)puVar14[1],*puVar14 << 2,4);
  }
  *puVar14 = uVar18;
  puVar14[1] = (ulonglong)pbVar15;
  puVar14[2] = uVar18;
  return;
}

