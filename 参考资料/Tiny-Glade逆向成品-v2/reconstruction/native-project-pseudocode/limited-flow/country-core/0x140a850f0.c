// VA 0x140a850f0, PDB extent 21 bytes
// country_core::systems::wall::valid_enclosure::ShapeParameters::get_closest_u_from_pos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::ShapeParameters::get_closest_u_from_pos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 21 */

void pdb_140a850f0(int *param_1,longlong param_2,float param_3)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float in_XMM1_Da;
  float fVar8;
  float afStack_88 [4];
  float fStack_78;
  undefined8 uStack_74;
  float fStack_6c;
  float fStack_5c;
  float *pfStack_58;
  code *pcStack_50;
  
  fVar2 = _DAT_142e36f28;
  if (*param_1 == 1) {
    lVar3 = pdb_140df2c60();
    afStack_88[3] = (float)((ulonglong)*(undefined8 *)(param_1 + 5) >> 0x20);
    fStack_78 = (float)*(undefined8 *)(param_1 + 5);
    if (0.0 < fStack_78 * afStack_88[3]) {
      lVar5 = lVar3;
      if (lVar3 == 4) {
        lVar5 = 0;
      }
      afStack_88[1] = afStack_88[3] * _DAT_143057f30;
      afStack_88[0] = fStack_78 * _UNK_143057f34;
      afStack_88[3] = afStack_88[3] * _UNK_143057f38;
      fStack_78 = fStack_78 * _UNK_143057f3c;
      afStack_88[2] = afStack_88[0];
      uStack_74 = CONCAT44(fStack_78,afStack_88[3]);
      fStack_6c = afStack_88[1];
      lVar4 = 0;
      if (param_2 != 4) {
        lVar4 = param_2;
      }
      uStack_74 = CONCAT44(fStack_78,afStack_88[3]);
                    /* WARNING: Could not recover jumptable at 0x000140df2649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1431ffda4 + *(int *)(&UNK_1431ffda4 + lVar3 * 4)))
                (lVar4,0,*(undefined8 *)(param_1 + 3),*(undefined8 *)(afStack_88 + lVar5 * 2));
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffc38);
  }
  uVar1 = *(undefined8 *)(param_1 + 1);
  in_XMM1_Da = in_XMM1_Da - (float)uVar1;
  param_3 = param_3 - (float)((ulonglong)uVar1 >> 0x20);
  fVar8 = _DAT_142e36f28 / SQRT(param_3 * param_3 + in_XMM1_Da * in_XMM1_Da);
  if ((int)fVar8 - 1U < 0x7fffff || (int)ABS(fVar8) - 0x800000U < 0x7f000000 && (int)fVar8 >= 0) {
    pub_142e32850(CONCAT71((int7)((ulonglong)(param_1 + 1) >> 8),(int)fVar8 < 0),param_3 * fVar8);
    fVar6 = (float)pub_142e32980();
    fVar8 = _DAT_142f57bcc;
    fVar7 = (float)pub_142e32a70();
    fVar8 = fVar2 - (fVar6 - (float)(~-(uint)(fVar7 < 0.0) & (uint)fVar7 |
                                    (uint)(fVar7 + fVar8) & -(uint)(fVar7 < 0.0))) / fVar8;
    if (NAN(fVar8)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1433ed204,0x1d,&UNK_1433ed250);
    }
    fVar8 = (float)pub_142e32a70(fVar8,fVar2);
    fStack_5c = (float)(~-(uint)(fVar8 < 0.0) & (uint)fVar8 |
                       (uint)(fVar8 + fVar2) & -(uint)(fVar8 < 0.0));
    if ((fStack_5c < 0.0) || (fVar2 < fStack_5c)) {
      pfStack_58 = &fStack_5c;
      pcStack_50 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1433ecdc8,&pfStack_58,&UNK_1431ff840);
    }
  }
  return;
}

