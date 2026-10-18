// VA 0x141740a90, PDB extent 434 bytes
// country_core::utils::geo::update_curve_mesh<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec2::Vec2>,country_core::systems::wall::shapes::rectangle::signifier_edit_dims_line::signifier_edit_dims::closure_env$1> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::geo::update_curve_mesh<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec2::Vec2>,country_core::systems::wall::shapes::rectangle::signifier_edit_dims_line::signifier_edit_dims::closure_env$1>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/geo.rs
   Extent: 434 */

void pdb_141740a90(byte *param_1,byte *param_2,int *param_3,undefined8 param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong *unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  if (*param_3 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14332bfa0);
  }
  puVar10 = (ulonglong *)pdb_140a2d890(param_4,*(undefined8 *)(param_3 + 2));
  if (puVar10 == (ulonglong *)0x0) {
    pdb_142dc8110(&UNK_14332bfb8,8,&UNK_14332bfc0);
LAB_141740bf6:
    uVar13 = pdb_142dc7e2a(4,param_1);
    pbVar11 = param_2;
  }
  else {
    uVar13 = (longlong)param_2 - (longlong)param_1;
    unaff_RDI = uVar13 >> 3;
    pdb_1415f9d50(auStack_48,param_1,param_2);
    pdb_140c93200(puVar10,&UNK_14332bfd8,0xf,auStack_48);
    uStack_58 = _DAT_142e37950;
    uStack_50 = 0x3f800000;
    pdb_1415e43a0(auStack_48,&uStack_58,unaff_RDI);
    pdb_140c93200(puVar10,&UNK_14332bfe7,0xc,auStack_48);
    if (param_2 == param_1) {
      pbVar11 = (byte *)0x4;
      unaff_RDI = 0;
      goto LAB_141740c0e;
    }
    param_1 = (byte *)(uVar13 >> 1);
    pdb_14007ee60();
    pbVar11 = pub_1406abab0((ulonglong)param_1,4);
    iVar9 = _UNK_1430342ac;
    iVar8 = _UNK_1430342a8;
    iVar7 = _UNK_1430342a4;
    iVar6 = _DAT_1430342a0;
    iVar5 = _UNK_14303429c;
    iVar4 = _UNK_143034298;
    iVar3 = _UNK_143034294;
    iVar2 = _DAT_143034290;
    unaff_RSI = puVar10;
    if (pbVar11 == (byte *)0x0) goto LAB_141740bf6;
    if (0x3f < uVar13) {
      uVar13 = unaff_RDI & 0xfffffffffffffff8;
      uVar12 = 0;
      iVar14 = _DAT_143034280;
      iVar15 = _UNK_143034284;
      iVar16 = _UNK_143034288;
      iVar17 = _UNK_14303428c;
      do {
        pbVar1 = pbVar11 + uVar12 * 4;
        *(int *)pbVar1 = iVar14;
        *(int *)(pbVar1 + 4) = iVar15;
        *(int *)(pbVar1 + 8) = iVar16;
        *(int *)(pbVar1 + 0xc) = iVar17;
        pbVar1 = pbVar11 + uVar12 * 4 + 0x10;
        *(int *)pbVar1 = iVar14 + iVar2;
        *(int *)(pbVar1 + 4) = iVar15 + iVar3;
        *(int *)(pbVar1 + 8) = iVar16 + iVar4;
        *(int *)(pbVar1 + 0xc) = iVar17 + iVar5;
        uVar12 = uVar12 + 8;
        iVar14 = iVar14 + iVar6;
        iVar15 = iVar15 + iVar7;
        iVar16 = iVar16 + iVar8;
        iVar17 = iVar17 + iVar9;
        if (uVar13 == uVar12) goto LAB_141740c09;
      } while( true );
    }
    uVar13 = 0;
  }
  do {
    *(int *)(pbVar11 + uVar13 * 4) = (int)uVar13;
    uVar13 = uVar13 + 1;
LAB_141740c09:
    puVar10 = unaff_RSI;
  } while (unaff_RDI != uVar13);
LAB_141740c0e:
  if (*puVar10 != 0) {
    pub_1406abac0((byte *)puVar10[1],*puVar10 << 2,4);
  }
  *puVar10 = unaff_RDI;
  puVar10[1] = (ulonglong)pbVar11;
  puVar10[2] = unaff_RDI;
  return;
}

