// VA 0x140b40890, PDB extent 816 bytes
// country_core::resources::glade_border::GladeBorder::search_lerped_shape_that_fits_into_glade
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_border.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::glade_border::GladeBorder::search_lerped_shape_that_fits_into_glade
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_border.rs
   Extent: 816 */

int * pdb_140b40890(int *param_1,undefined8 param_2,int *param_3,char *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  char *pcVar18;
  int iVar19;
  longlong lVar20;
  undefined8 uStack_c8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  iVar19 = *param_3;
  iVar3 = param_3[1];
  iVar4 = param_3[2];
  iVar5 = param_3[3];
  iVar6 = param_3[4];
  iVar7 = param_3[5];
  iVar8 = param_3[6];
  param_1[3] = param_3[3];
  param_1[4] = iVar6;
  param_1[5] = iVar7;
  param_1[6] = iVar8;
  *param_1 = iVar19;
  param_1[1] = iVar3;
  param_1[2] = iVar4;
  param_1[3] = iVar5;
  iVar19 = *param_1;
  piVar1 = param_3 + 1;
  piVar2 = param_1 + 1;
  pcVar18 = param_4 + 4;
  if (*param_3 == 1) {
    if (*param_4 == '\0') {
LAB_140b40ba7:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143058765,0x9f,&UNK_1430587e8);
    }
    uStack_88 = *(undefined8 *)(param_3 + 5);
    uStack_98 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(param_3 + 3);
    uStack_68 = *(undefined8 *)(param_4 + 0x14);
    uStack_78 = *(undefined4 *)pcVar18;
    uStack_74 = *(undefined4 *)(param_4 + 8);
    uStack_70 = *(undefined4 *)(param_4 + 0xc);
    uStack_6c = *(undefined4 *)(param_4 + 0x10);
    pdb_140df34c0(&uStack_b4,&uStack_98,&uStack_78,0);
    uStack_9c = uStack_a0;
    uVar14 = uStack_a8;
    uVar13 = uStack_ac;
    uVar12 = uStack_b0;
    uVar11 = uStack_b4;
    uVar9 = CONCAT44(uStack_a0,uStack_a4);
    uStack_b4 = 1;
    uStack_a0 = uStack_a4;
    uStack_b0 = uVar11;
    uStack_ac = uVar12;
    uStack_a8 = uVar13;
    uStack_a4 = uVar14;
    cVar17 = pdb_140b404c0(param_2,&uStack_b4);
    if (cVar17 == '\0') {
LAB_140b40b85:
      *param_1 = iVar19;
      return param_1;
    }
    *(undefined8 *)(param_1 + 5) = uVar9;
    *(ulonglong *)piVar2 = CONCAT44(uVar12,uVar11);
    *(ulonglong *)(param_1 + 3) = CONCAT44(uVar14,uVar13);
    fVar10 = _DAT_142e382c8;
    lVar20 = 1;
    do {
      uStack_88 = *(undefined8 *)(param_3 + 5);
      uStack_98 = *(undefined8 *)piVar1;
      uStack_90 = *(undefined8 *)(param_3 + 3);
      uStack_68 = *(undefined8 *)(param_4 + 0x14);
      uStack_78 = *(undefined4 *)pcVar18;
      uStack_74 = *(undefined4 *)(param_4 + 8);
      uStack_70 = *(undefined4 *)(param_4 + 0xc);
      uStack_6c = *(undefined4 *)(param_4 + 0x10);
      pdb_140df34c0(&uStack_b4,&uStack_98,&uStack_78,(float)lVar20 / fVar10);
      uStack_9c = uStack_a0;
      uVar14 = uStack_a8;
      uVar13 = uStack_ac;
      uVar12 = uStack_b0;
      uVar11 = uStack_b4;
      uVar9 = CONCAT44(uStack_a0,uStack_a4);
      uStack_b4 = 1;
      uStack_a0 = uStack_a4;
      uStack_b0 = uVar11;
      uStack_ac = uVar12;
      uStack_a8 = uVar13;
      uStack_a4 = uVar14;
      cVar17 = pdb_140b404c0(param_2,&uStack_b4);
      if (cVar17 == '\0') {
        iVar19 = 1;
        goto LAB_140b40b85;
      }
      lVar20 = lVar20 + 1;
      *(undefined8 *)(param_1 + 5) = uVar9;
      *(ulonglong *)piVar2 = CONCAT44(uVar12,uVar11);
      *(ulonglong *)(param_1 + 3) = CONCAT44(uVar14,uVar13);
    } while (lVar20 != 0x14);
    iVar19 = 1;
  }
  else {
    if (*param_4 != '\0') goto LAB_140b40ba7;
    uStack_98 = *(undefined8 *)piVar1;
    uStack_90 = *(undefined8 *)(param_3 + 3);
    uStack_78 = *(undefined4 *)pcVar18;
    uStack_74 = *(undefined4 *)(param_4 + 8);
    uStack_70 = *(undefined4 *)(param_4 + 0xc);
    uStack_6c = *(undefined4 *)(param_4 + 0x10);
    pdb_140defaf0(&uStack_b4,&uStack_98,&uStack_78,0);
    uVar14 = uStack_a8;
    uVar13 = uStack_ac;
    uVar12 = uStack_b0;
    uVar11 = uStack_b4;
    uStack_b4 = 0;
    uStack_a0 = (undefined4)uStack_c8;
    uVar15 = uStack_a0;
    uStack_9c = (undefined4)((ulonglong)uStack_c8 >> 0x20);
    uVar16 = uStack_9c;
    uStack_b0 = uVar11;
    uStack_ac = uVar12;
    uStack_a8 = uVar13;
    uStack_a4 = uVar14;
    cVar17 = pdb_140b404c0(param_2,&uStack_b4);
    if (cVar17 == '\0') goto LAB_140b40b85;
    *(undefined8 *)(param_1 + 5) = uStack_c8;
    *(ulonglong *)piVar2 = CONCAT44(uVar12,uVar11);
    *(ulonglong *)(param_1 + 3) = CONCAT44(uVar14,uVar13);
    fVar10 = _DAT_142e382c8;
    lVar20 = 1;
    do {
      uStack_98 = *(undefined8 *)piVar1;
      uStack_90 = *(undefined8 *)(param_3 + 3);
      uStack_78 = *(undefined4 *)pcVar18;
      uStack_74 = *(undefined4 *)(param_4 + 8);
      uStack_70 = *(undefined4 *)(param_4 + 0xc);
      uStack_6c = *(undefined4 *)(param_4 + 0x10);
      pdb_140defaf0(&uStack_b4,&uStack_98,&uStack_78,(float)lVar20 / fVar10);
      uVar14 = uStack_a8;
      uVar13 = uStack_ac;
      uVar12 = uStack_b0;
      uVar11 = uStack_b4;
      uStack_b4 = 0;
      uStack_b0 = uVar11;
      uStack_ac = uVar12;
      uStack_a8 = uVar13;
      uStack_a4 = uVar14;
      uStack_a0 = uVar15;
      uStack_9c = uVar16;
      cVar17 = pdb_140b404c0(param_2,&uStack_b4);
      if (cVar17 == '\0') {
        iVar19 = 0;
        goto LAB_140b40b85;
      }
      lVar20 = lVar20 + 1;
      *(undefined8 *)(param_1 + 5) = uStack_c8;
      *(ulonglong *)piVar2 = CONCAT44(uVar12,uVar11);
      *(ulonglong *)(param_1 + 3) = CONCAT44(uVar14,uVar13);
    } while (lVar20 != 0x14);
    iVar19 = 0;
  }
  *param_1 = iVar19;
  return param_1;
}

