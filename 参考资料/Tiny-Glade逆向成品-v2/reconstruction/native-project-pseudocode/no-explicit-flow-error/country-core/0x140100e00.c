// VA 0x140100e00, PDB extent 886 bytes
// country_core::resources::walls::inner_wall_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 886 */

longlong pdb_140100e00(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  longlong *plVar9;
  char cVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 uStack_80;
  longlong *plStack_78;
  longlong alStack_70 [6];
  
  fVar1 = *(float *)(param_1 + 0x58);
  lVar13 = param_1 + 0x5c;
  pdb_140c33130(lVar13);
  cVar11 = *(char *)(param_1 + 0x68);
  cVar3 = *(char *)(param_1 + 0x69);
  cVar4 = *(char *)(param_1 + 0x6e);
  cVar5 = *(char *)(param_1 + 0x6a);
  pdb_140901380(param_1 + 0x6f);
  cVar6 = *(char *)(param_1 + 0x6b);
  fVar2 = *(float *)(param_1 + 0x60);
  cVar7 = *(char *)(param_1 + 0x6c);
  cVar8 = *(char *)(param_1 + 0x6d);
  plVar9 = (longlong *)*param_2;
  lVar12 = plVar9[2];
  if (*plVar9 == lVar12) {
    pdb_142d7f1b0(plVar9,lVar12,1,1,1);
    lVar12 = plVar9[2];
  }
  *(undefined1 *)(plVar9[1] + lVar12) = 0x7b;
  plVar9[2] = lVar12 + 1;
  uStack_80 = 0x100;
  plStack_78 = param_2;
  alStack_70[0] = param_1;
  lVar12 = pdb_14053ffb0(&uStack_80,&UNK_142e42de3,5,alStack_70);
  if (lVar12 != 0) {
    return lVar12;
  }
  if ((char)uStack_80 == '\0') {
    lVar12 = pdb_1405432b0(&uStack_80,&UNK_142e42de8,6,param_1 + 0x54);
    if (lVar12 != 0) {
      return lVar12;
    }
    if ((char)uStack_80 == '\0') {
      lVar12 = pdb_140541910(&uStack_80,&UNK_142e42dee,0xb,param_1 + 0x38);
      if (lVar12 != 0) {
        return lVar12;
      }
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        if ((char)uStack_80 != '\0') goto LAB_140100ec1;
        lVar12 = pdb_1405432b0(&uStack_80,&UNK_142e42df9,9,param_1 + 0x58);
        if (lVar12 != 0) {
          return lVar12;
        }
      }
      cVar10 = pdb_140c33130(lVar13);
      if (cVar10 == '\0') {
        if ((char)uStack_80 != '\0') goto LAB_140100ec1;
        lVar13 = pdb_1405432b0(&uStack_80,&UNK_142e42e02,0xb,lVar13);
        if (lVar13 != 0) {
          return lVar13;
        }
      }
      if ((cVar11 != '\0') && (lVar13 = pdb_140101730(&uStack_80,param_1 + 0x68), lVar13 != 0)) {
        return lVar13;
      }
      if ((cVar4 != '\0') && (lVar13 = pdb_1401017d0(&uStack_80,param_1 + 0x6e), lVar13 != 0)) {
        return lVar13;
      }
      if ((cVar3 != '\0') && (lVar13 = pdb_140101750(&uStack_80,param_1 + 0x69), lVar13 != 0)) {
        return lVar13;
      }
      if ((cVar5 != '\0') && (lVar13 = pdb_140101810(&uStack_80,param_1 + 0x6a), lVar13 != 0)) {
        return lVar13;
      }
      cVar11 = pdb_140901380(param_1 + 0x6f);
      if ((cVar11 == '\0') && (lVar13 = pdb_140101790(&uStack_80,param_1 + 0x6f), lVar13 != 0)) {
        return lVar13;
      }
      if ((cVar6 != '\0') && (lVar13 = pdb_140101710(&uStack_80,param_1 + 0x6b), lVar13 != 0)) {
        return lVar13;
      }
      if (((fVar2 != 0.0) || (NAN(fVar2))) &&
         (lVar13 = pdb_1401017f0(&uStack_80,param_1 + 0x60), lVar13 != 0)) {
        return lVar13;
      }
      if ((cVar7 != '\0') && (lVar13 = pdb_140101770(&uStack_80,param_1 + 0x6c), lVar13 != 0)) {
        return lVar13;
      }
      if (cVar8 != '\0') {
        if ((char)uStack_80 != '\0') goto LAB_140100ec1;
        lVar13 = pdb_14053e0d0(&uStack_80,&UNK_142e42e5f,0x10,param_1 + 0x6d);
        if (lVar13 != 0) {
          return lVar13;
        }
      }
      if ((char)uStack_80 == '\0') {
        lVar13 = pdb_1405432b0(&uStack_80,&UNK_142e42e6f,0x17,param_1 + 100);
        if (lVar13 != 0) {
          return lVar13;
        }
        if ((uStack_80 & 1) != 0) {
          return 0;
        }
        if (uStack_80._1_1_ == '\0') {
          return 0;
        }
        pdb_140172c20(*plStack_78,&UNK_142e42d43,1);
        return 0;
      }
    }
  }
LAB_140100ec1:
  lVar13 = pdb_142db8610();
  return lVar13;
}

