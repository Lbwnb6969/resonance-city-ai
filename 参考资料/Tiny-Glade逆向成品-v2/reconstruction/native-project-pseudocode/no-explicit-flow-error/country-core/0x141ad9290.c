// VA 0x141ad9290, PDB extent 638 bytes
// country_core::resources::walls::wall_attachment::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_attachment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_attachment::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_attachment.rs
   Extent: 638 */

longlong pdb_141ad9290(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 uStack_88;
  longlong *plStack_80;
  undefined *puStack_40;
  
  fVar1 = *(float *)(param_1 + 1);
  fVar2 = *(float *)(param_1 + 2);
  fVar3 = *(float *)((longlong)param_1 + 0xc);
  lVar9 = *param_1;
  cVar4 = *(char *)((longlong)param_1 + 0x19);
  cVar5 = *(char *)((longlong)param_1 + 0x1a);
  plVar6 = (longlong *)*param_2;
  lVar8 = plVar6[2];
  if (*plVar6 == lVar8) {
    pdb_142d7f1b0(plVar6,lVar8,1,1,1);
    lVar8 = plVar6[2];
  }
  *(undefined1 *)(plVar6[1] + lVar8) = 0x7b;
  plVar6[2] = lVar8 + 1;
  uStack_88 = 0x100;
  plStack_80 = param_2;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    lVar8 = pdb_141b82660(&uStack_88,&UNK_1433884c0,0x16,param_1 + 1);
    if (lVar8 != 0) {
      return lVar8;
    }
  }
  else {
    uStack_88._0_1_ = '\0';
  }
  cVar7 = (char)uStack_88;
  if ((fVar3 != 0.0 || fVar2 != 0.0) || *(float *)((longlong)param_1 + 0x14) != 0.0) {
    if ((char)uStack_88 != '\0') goto LAB_141ad9418;
    lVar8 = pdb_141b7fc10(&uStack_88,&UNK_1433884d6,9,(longlong)param_1 + 0xc);
    if (lVar8 != 0) {
      return lVar8;
    }
    cVar7 = (char)uStack_88;
  }
  if (cVar7 == '\0') {
    lVar8 = pdb_141b86350(&uStack_88,&UNK_1433884df,6,param_1 + 3);
    if (lVar8 == 0) {
      if (lVar9 != 0) {
        if ((char)uStack_88 == '\x01') goto LAB_141ad9418;
        lVar9 = pdb_141b7a020(&uStack_88,&UNK_1433884e5,8,param_1);
        if (lVar9 != 0) {
          return lVar9;
        }
      }
      if (cVar4 != '\0') {
        if ((char)uStack_88 != '\0') goto LAB_141ad9418;
        lVar9 = pdb_141b85940(&uStack_88,&UNK_1433884ed,0xe,(longlong)param_1 + 0x19);
        if (lVar9 != 0) {
          return lVar9;
        }
      }
      if ((((cVar5 != '\0') ||
           (lVar8 = pdb_141adc670(&uStack_88,(longlong)param_1 + 0x1a), lVar8 == 0)) &&
          (lVar8 = 0, (uStack_88 & 1) == 0)) && (uStack_88._1_1_ != '\0')) {
        pdb_140172c20(*plStack_80,&UNK_1433885d0,1);
        lVar8 = 0;
      }
    }
    return lVar8;
  }
LAB_141ad9418:
  puStack_40 = &UNK_142db862c;
  lVar9 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
  return lVar9;
}

