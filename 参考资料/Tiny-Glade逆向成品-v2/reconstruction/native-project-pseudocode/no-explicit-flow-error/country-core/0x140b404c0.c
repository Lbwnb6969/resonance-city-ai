// VA 0x140b404c0, PDB extent 744 bytes
// country_core::resources::glade_border::GladeBorder::is_shape_inside
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_border.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::glade_border::GladeBorder::is_shape_inside
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_border.rs
   Extent: 744 */

char pdb_140b404c0(byte *param_1,char *param_2)

{
  float *pfVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  float *pfStack_c8;
  code *pcStack_c0;
  float afStack_b8 [4];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  fVar7 = _DAT_142e36f28;
  pfVar1 = (float *)(param_1 + 4);
  fStack_98 = *pfVar1;
  uStack_94 = *(undefined4 *)(param_1 + 8);
  uStack_90 = *(undefined4 *)(param_1 + 0xc);
  uStack_8c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  if ((*param_1 & 1) == 0) {
    if (*param_2 == '\0') {
      fVar7 = (float)*(undefined8 *)pfVar1 - (float)*(undefined8 *)(param_2 + 4);
      fVar11 = (float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20) -
               (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
      cVar2 = SQRT(fVar11 * fVar11 + fVar7 * fVar7) + *(float *)(param_2 + 0xc) <
              (float)*(undefined8 *)(param_1 + 0xc);
    }
    else {
      uStack_d8 = *(undefined8 *)(param_2 + 0x14);
      uStack_e8 = *(undefined4 *)(param_2 + 4);
      uStack_e4 = *(undefined4 *)(param_2 + 8);
      uStack_e0 = *(undefined4 *)(param_2 + 0xc);
      uStack_dc = *(undefined4 *)(param_2 + 0x10);
      pdb_140df0010(&fStack_78,&uStack_e8);
      uStack_a8 = uStack_68;
      uStack_a0 = uStack_60;
      afStack_b8[0] = fStack_78;
      afStack_b8[1] = (float)uStack_74;
      afStack_b8[2] = (float)uStack_70;
      afStack_b8[3] = (float)uStack_6c;
      lVar5 = 0;
      do {
        cVar2 = pdb_140def450(&fStack_98,afStack_b8[lVar5 * 2],afStack_b8[lVar5 * 2 + 1]);
        if (cVar2 == '\0') {
          return '\0';
        }
        bVar6 = lVar5 != 3;
        lVar5 = lVar5 + 1;
      } while (bVar6);
    }
  }
  else {
    uStack_88 = *(undefined8 *)(param_1 + 0x14);
    if (*param_2 == '\0') {
      uStack_e8 = *(undefined4 *)(param_2 + 4);
      uStack_e4 = *(undefined4 *)(param_2 + 8);
      uStack_e0 = *(undefined4 *)(param_2 + 0xc);
      uStack_dc = *(undefined4 *)(param_2 + 0x10);
      fStack_78 = *pfVar1;
      uStack_74 = *(undefined4 *)(param_1 + 8);
      uStack_70 = *(undefined4 *)(param_1 + 0xc);
      uStack_6c = uStack_8c;
      uStack_68 = uStack_88;
      pdb_140def170(&pfStack_c8,&uStack_e8,_DAT_142e36f28);
      uVar4 = CONCAT44(afStack_b8[1],afStack_b8[0]);
      fVar11 = (float)pcStack_c0 + _DAT_142e36f34;
      do {
        if (CONCAT44(afStack_b8[3],afStack_b8[2]) <= uVar4) {
          return '\x01';
        }
        uVar10 = 0;
        fVar9 = (float)uVar4 / fVar11;
        fStack_98 = fVar9;
        if ((fVar9 < 0.0) || (fVar7 < fVar9)) {
          pfStack_c8 = &fStack_98;
          pcStack_c0 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14335ec38,&pfStack_c8,&UNK_1430589b8);
        }
        uVar4 = uVar4 + 1;
        uVar8 = pdb_140def2c0(pfStack_c8);
        cVar3 = pdb_140df1700(&fStack_78,uVar8,CONCAT44(uVar10,fVar9));
        cVar2 = '\0';
      } while (cVar3 != '\0');
    }
    else {
      uStack_d8 = *(undefined8 *)(param_2 + 0x14);
      uStack_e8 = *(undefined4 *)(param_2 + 4);
      uStack_e4 = *(undefined4 *)(param_2 + 8);
      uStack_e0 = *(undefined4 *)(param_2 + 0xc);
      uStack_dc = *(undefined4 *)(param_2 + 0x10);
      fStack_98 = *pfVar1;
      uStack_94 = *(undefined4 *)(param_1 + 8);
      uStack_90 = *(undefined4 *)(param_1 + 0xc);
      pdb_140df0010(&fStack_78,&uStack_e8);
      uStack_a8 = uStack_68;
      uStack_a0 = uStack_60;
      afStack_b8[0] = fStack_78;
      afStack_b8[1] = (float)uStack_74;
      afStack_b8[2] = (float)uStack_70;
      afStack_b8[3] = (float)uStack_6c;
      lVar5 = 0;
      do {
        cVar2 = pdb_140df1700(&fStack_98,afStack_b8[lVar5 * 2],afStack_b8[lVar5 * 2 + 1]);
        if (cVar2 == '\0') {
          return '\0';
        }
        bVar6 = lVar5 != 3;
        lVar5 = lVar5 + 1;
      } while (bVar6);
    }
  }
  return cVar2;
}

