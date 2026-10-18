// VA 0x141740c50, PDB extent 436 bytes
// country_core::utils::geo::update_curve_mesh<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec2::Vec2>,country_core::systems::wall::shapes::circle::signifiers::edit_line::signifier_edit_circle_line::closure_env$1> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::geo::update_curve_mesh<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec2::Vec2>,country_core::systems::wall::shapes::circle::signifiers::edit_line::signifier_edit_circle_line::closure_env$1>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
   Extent: 436 */

void pdb_141740c50(byte *param_1,int *param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
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
  ulonglong *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong unaff_R14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uStack_60;
  undefined4 uStack_58;
  byte abStack_50 [24];
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14332bfa0);
  }
  lVar2 = *(longlong *)param_1;
  lVar3 = *(longlong *)(param_1 + 8);
  puVar12 = (ulonglong *)pdb_140a2d890(param_3,*(undefined8 *)(param_2 + 2));
  if (puVar12 == (ulonglong *)0x0) {
    pdb_142dc8110(&UNK_14332bfb8,8,&UNK_14332bfc0);
LAB_141740db6:
    pbVar13 = param_1;
    uVar15 = pdb_142dc7e2a(4,unaff_R14);
  }
  else {
    uVar15 = lVar3 - lVar2;
    unaff_RDI = uVar15 >> 3;
    pdb_1415f9be0(abStack_50,param_1);
    pdb_140c93200(puVar12,&UNK_14332bfd8,0xf,abStack_50);
    uStack_60 = _DAT_142e37950;
    uStack_58 = 0x3f800000;
    pdb_1415e43a0(abStack_50,&uStack_60,unaff_RDI);
    pdb_140c93200(puVar12,&UNK_14332bfe7,0xc,abStack_50);
    if (lVar3 == lVar2) {
      pbVar13 = (byte *)0x4;
      unaff_RDI = 0;
      goto LAB_141740dce;
    }
    unaff_R14 = uVar15 >> 1;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(unaff_R14,4);
    iVar11 = _UNK_1430342ac;
    iVar10 = _UNK_1430342a8;
    iVar9 = _UNK_1430342a4;
    iVar8 = _DAT_1430342a0;
    iVar7 = _UNK_14303429c;
    iVar6 = _UNK_143034298;
    iVar5 = _UNK_143034294;
    iVar4 = _DAT_143034290;
    param_1 = abStack_50;
    unaff_RSI = puVar12;
    if (pbVar13 == (byte *)0x0) goto LAB_141740db6;
    if (0x3f < uVar15) {
      uVar15 = unaff_RDI & 0xfffffffffffffff8;
      uVar14 = 0;
      iVar16 = _DAT_143034280;
      iVar17 = _UNK_143034284;
      iVar18 = _UNK_143034288;
      iVar19 = _UNK_14303428c;
      do {
        pbVar1 = pbVar13 + uVar14 * 4;
        *(int *)pbVar1 = iVar16;
        *(int *)(pbVar1 + 4) = iVar17;
        *(int *)(pbVar1 + 8) = iVar18;
        *(int *)(pbVar1 + 0xc) = iVar19;
        pbVar1 = pbVar13 + uVar14 * 4 + 0x10;
        *(int *)pbVar1 = iVar16 + iVar4;
        *(int *)(pbVar1 + 4) = iVar17 + iVar5;
        *(int *)(pbVar1 + 8) = iVar18 + iVar6;
        *(int *)(pbVar1 + 0xc) = iVar19 + iVar7;
        uVar14 = uVar14 + 8;
        iVar16 = iVar16 + iVar8;
        iVar17 = iVar17 + iVar9;
        iVar18 = iVar18 + iVar10;
        iVar19 = iVar19 + iVar11;
        if (uVar15 == uVar14) goto LAB_141740dc9;
      } while( true );
    }
    uVar15 = 0;
  }
  do {
    *(int *)(pbVar13 + uVar15 * 4) = (int)uVar15;
    uVar15 = uVar15 + 1;
LAB_141740dc9:
    puVar12 = unaff_RSI;
  } while (unaff_RDI != uVar15);
LAB_141740dce:
  if (*puVar12 != 0) {
    pub_1406abac0((byte *)puVar12[1],*puVar12 << 2,4);
  }
  *puVar12 = unaff_RDI;
  puVar12[1] = (ulonglong)pbVar13;
  puVar12[2] = unaff_RDI;
  return;
}

