// VA 0x140c45c90, PDB extent 273 bytes
// country_core::resources::walls::cached_decorator_transforms::CachedDecoratorTransforms::insert
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/cached_decorator_transforms.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::cached_decorator_transforms::CachedDecoratorTransforms::insert
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/cached_decorator_transforms.rs
   Extent: 273 */

void pdb_140c45c90(undefined8 param_1,undefined4 param_2,uint *param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auStack_48 [64];
  
  bVar1 = (param_3[6] & 0x7fffffff) < 0x7f800000;
  if ((0x7f7fffff < (param_3[4] & 0x7fffffff) || 0x7f7fffff < (param_3[5] & 0x7fffffff)) || (!bVar1)
     ) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306d870,0x33,&UNK_14306d8f0);
  }
  auVar2._4_4_ = -(uint)((float)(param_3[1] & _UNK_142e377e4) < _UNK_14301cce4);
  auVar2._0_4_ = -(uint)((float)(*param_3 & _DAT_142e377e0) < _DAT_14301cce0);
  auVar2._8_4_ = -(uint)((float)(param_3[2] & _UNK_142e377e8) < _UNK_14301cce8);
  auVar2._12_4_ = -(uint)((float)(param_3[3] & _UNK_142e377ec) < _UNK_14301ccec);
  iVar3 = movmskps(CONCAT31((int3)((param_3[5] & 0x7fffffff) >> 8),bVar1),auVar2);
  if (iVar3 != 0xf) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306d908,0x30,&UNK_14306d938);
  }
  if (((param_3[7] & 0x7fffffff) < 0x7f800000 && (param_3[8] & 0x7fffffff) < 0x7f800000) &&
     ((param_3[9] & 0x7fffffff) < 0x7f800000)) {
    pdb_1417b7520(auStack_48,param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14306d950,0x2d,&UNK_14306d980);
}

