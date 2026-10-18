// VA 0x141ad9d30, PDB extent 867 bytes
// country_core::resources::walls::inner_wall_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 867 */

longlong pdb_141ad9d30(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 uStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong alStack_70 [6];
  
  fVar1 = *(float *)(param_1 + 0x58);
  fVar2 = *(float *)(param_1 + 0x60);
  cVar3 = *(char *)(param_1 + 0x68);
  cVar4 = *(char *)(param_1 + 0x6e);
  cVar5 = *(char *)(param_1 + 0x69);
  cVar6 = *(char *)(param_1 + 0x6a);
  cVar7 = *(char *)(param_1 + 0x6b);
  cVar8 = *(char *)(param_1 + 0x6c);
  cVar9 = *(char *)(param_1 + 0x6d);
  plVar10 = (longlong *)*param_2;
  lVar11 = plVar10[2];
  if (*plVar10 == lVar11) {
    plStack_78 = param_2;
    pdb_142d7f1b0(plVar10,lVar11,1,1,1);
    lVar11 = plVar10[2];
    param_2 = plStack_78;
  }
  *(undefined1 *)(plVar10[1] + lVar11) = 0x7b;
  plVar10[2] = lVar11 + 1;
  uStack_88 = 0x100;
  plStack_80 = param_2;
  alStack_70[0] = param_1;
  lVar11 = pdb_141b79210(&uStack_88,&UNK_143388e29,5,alStack_70);
  if (lVar11 != 0) {
    return lVar11;
  }
  if ((char)uStack_88 == '\0') {
    lVar11 = pdb_141b82660(&uStack_88,&UNK_143388e2e,6,param_1 + 0x54);
    if (lVar11 != 0) {
      return lVar11;
    }
    if ((char)uStack_88 == '\0') {
      lVar11 = pdb_141b7b890(&uStack_88,&UNK_143388e34,0xb,param_1 + 0x38);
      if (lVar11 != 0) {
        return lVar11;
      }
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        if ((char)uStack_88 != '\0') goto LAB_141ad9dd3;
        lVar11 = pdb_141b82660(&uStack_88,&UNK_143388e3f,9,param_1 + 0x58);
        if (lVar11 != 0) {
          return lVar11;
        }
      }
      if ((*(float *)(param_1 + 0x5c) != _DAT_14301920c) ||
         (NAN(*(float *)(param_1 + 0x5c)) || NAN(_DAT_14301920c))) {
        if ((char)uStack_88 != '\0') goto LAB_141ad9dd3;
        lVar11 = pdb_141b82660(&uStack_88,&UNK_143388e48,0xb);
        if (lVar11 != 0) {
          return lVar11;
        }
      }
      if ((cVar3 != '\0') && (lVar11 = pdb_141adc710(&uStack_88,param_1 + 0x68), lVar11 != 0)) {
        return lVar11;
      }
      if ((cVar4 != '\0') && (lVar11 = pdb_141adc6d0(&uStack_88,param_1 + 0x6e), lVar11 != 0)) {
        return lVar11;
      }
      if ((cVar5 != '\0') && (lVar11 = pdb_141adc6f0(&uStack_88,param_1 + 0x69), lVar11 != 0)) {
        return lVar11;
      }
      if ((cVar6 != '\0') && (lVar11 = pdb_141adc750(&uStack_88,param_1 + 0x6a), lVar11 != 0)) {
        return lVar11;
      }
      if ((*(char *)(param_1 + 0x6f) != '\0') && (lVar11 = pdb_141adc730(&uStack_88), lVar11 != 0))
      {
        return lVar11;
      }
      if ((cVar7 != '\0') && (lVar11 = pdb_141adc690(&uStack_88,param_1 + 0x6b), lVar11 != 0)) {
        return lVar11;
      }
      if (((fVar2 != 0.0) || (NAN(fVar2))) &&
         (lVar11 = pdb_141adc6b0(&uStack_88,param_1 + 0x60), lVar11 != 0)) {
        return lVar11;
      }
      if ((cVar8 != '\0') && (lVar11 = pdb_141adc770(&uStack_88,param_1 + 0x6c), lVar11 != 0)) {
        return lVar11;
      }
      if (cVar9 != '\0') {
        if ((char)uStack_88 != '\0') goto LAB_141ad9dd3;
        lVar11 = pdb_141b85940(&uStack_88,&UNK_143388ea5,0x10,param_1 + 0x6d);
        if (lVar11 != 0) {
          return lVar11;
        }
      }
      if ((char)uStack_88 == '\0') {
        lVar11 = pdb_141b82660(&uStack_88,&UNK_143388eb5,0x17,param_1 + 100);
        if (lVar11 != 0) {
          return lVar11;
        }
        if ((uStack_88 & 1) != 0) {
          return 0;
        }
        if (uStack_88._1_1_ == '\0') {
          return 0;
        }
        pdb_140172c20(*plStack_80,&UNK_1433885d0,1);
        return 0;
      }
    }
  }
LAB_141ad9dd3:
  lVar11 = pdb_142db8610();
  return lVar11;
}

