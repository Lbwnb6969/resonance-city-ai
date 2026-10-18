// VA 0x14052d3c0, PDB extent 1282 bytes
// country_core::resources::history::decorator_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 1282 */

longlong pdb_14052d3c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  undefined2 uStack_88;
  longlong *plStack_80;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  
  iVar4 = *(int *)(param_1 + 0x40);
  lVar10 = param_1 + 0x67;
  pdb_140901380(lVar10);
  fVar3 = *(float *)(param_1 + 0x48);
  lVar1 = param_1 + 0x60;
  pdb_1408ff980(lVar1);
  iVar5 = *(int *)(param_1 + 0x4c);
  lVar2 = param_1 + 0x50;
  pdb_140c47250(lVar2);
  pdb_1408ff980(param_1 + 0x61);
  pdb_140c47250(param_1 + 0x54);
  iStack_70 = *(int *)(param_1 + 0x10);
  iStack_6c = *(int *)(param_1 + 0x58);
  iStack_74 = *(int *)(param_1 + 0x5c);
  uVar6 = *(uint *)(param_1 + 0x62);
  plVar7 = (longlong *)*param_2;
  lVar9 = plVar7[2];
  if (*plVar7 == lVar9) {
    pdb_142d7f1b0(plVar7,lVar9,1,1,1);
    lVar9 = plVar7[2];
  }
  *(undefined1 *)(plVar7[1] + lVar9) = 0x7b;
  plVar7[2] = lVar9 + 1;
  uStack_88 = 0x100;
  plStack_80 = param_2;
  lVar9 = pdb_140543440(&uStack_88,&UNK_142f64ddc,3,param_1 + 0x18);
  if (lVar9 == 0) {
    if ((char)uStack_88 != '\0') {
LAB_14052d4aa:
      lVar10 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar10;
    }
    lVar9 = pdb_14054dfe0(&uStack_88,&UNK_142f64ddf,2,param_1);
    if (lVar9 == 0) {
      if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
      lVar9 = pdb_140547940(&uStack_88,&UNK_142f64de1,4,param_1 + 0x66);
      if (lVar9 == 0) {
        if (iVar4 != 0) {
          if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
          lVar9 = pdb_14054a9f0(&uStack_88,&UNK_142f64de5,8,param_1 + 0x40);
          if (lVar9 != 0) {
            return lVar9;
          }
        }
        lVar9 = pdb_14052dfd0(&uStack_88,param_1 + 0x44);
        if ((lVar9 == 0) &&
           ((cVar8 = pdb_140901380(lVar10), cVar8 != '\0' ||
            (lVar9 = pdb_14052df90(&uStack_88,lVar10), lVar9 == 0)))) {
          if ((fVar3 != 0.0) || (NAN(fVar3))) {
            if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
            lVar10 = pdb_1405432b0(&uStack_88,&UNK_142f64df4,8,param_1 + 0x48);
            if (lVar10 != 0) {
              return lVar10;
            }
          }
          cVar8 = pdb_1408ff980(lVar1);
          if (cVar8 == '\0') {
            if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
            lVar10 = pdb_14053e0d0(&uStack_88,&UNK_142f64dfc,0x10,lVar1);
            if (lVar10 != 0) {
              return lVar10;
            }
          }
          if (iVar5 != 0) {
            if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
            lVar10 = pdb_14054a9f0(&uStack_88,&UNK_142f64e0c,0x12,param_1 + 0x4c);
            if (lVar10 != 0) {
              return lVar10;
            }
          }
          cVar8 = pdb_140c47250(lVar2);
          if (cVar8 == '\0') {
            if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
            lVar10 = pdb_1405432b0(&uStack_88,&UNK_142f64e1e,0x12,lVar2);
            if (lVar10 != 0) {
              return lVar10;
            }
          }
          cVar8 = pdb_1408ff980(param_1 + 0x61);
          if (cVar8 == '\0') {
            if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
            lVar10 = pdb_14053e0d0(&uStack_88,&UNK_142f64e30,0xd,param_1 + 0x61);
            if (lVar10 != 0) {
              return lVar10;
            }
          }
          cVar8 = pdb_140c47250(param_1 + 0x54);
          if (cVar8 == '\0') {
            if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
            lVar10 = pdb_1405432b0(&uStack_88,&UNK_142f64e3d,0xb,param_1 + 0x54);
            if (lVar10 != 0) {
              return lVar10;
            }
          }
          if (iStack_6c != 0) {
            if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
            lVar10 = pdb_14054a9f0(&uStack_88,&UNK_142f64e48,0xc,param_1 + 0x58);
            if (lVar10 != 0) {
              return lVar10;
            }
          }
          if ((iStack_70 == 0) || (lVar9 = pdb_14052e010(&uStack_88,param_1 + 0x10), lVar9 == 0)) {
            if (((char)(uVar6 >> 0x18) == '\0') ||
               (lVar9 = pdb_14052dfb0(&uStack_88,param_1 + 0x65), lVar9 == 0)) {
              if ((char)uVar6 != '\0') {
                if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
                lVar10 = pdb_14053e0d0(&uStack_88,&UNK_142f64e68,9,param_1 + 0x62);
                if (lVar10 != 0) {
                  return lVar10;
                }
              }
              auVar11 = ZEXT416(uVar6 << 8);
              if ((char)(uVar6 >> 8) != '\0') {
                lVar10 = pdb_14052df70(&uStack_88,param_1 + 99);
                auVar11._8_8_ = extraout_XMM0_Qb;
                auVar11._0_8_ = extraout_XMM0_Qa;
                if (lVar10 != 0) {
                  return lVar10;
                }
              }
              if (iStack_74 != 0) {
                if ((char)uStack_88 != '\0') goto LAB_14052d4aa;
                lVar10 = pdb_14054a9f0(&uStack_88,&UNK_142f64e80,0xb,param_1 + 0x5c);
                auVar11._8_8_ = extraout_XMM0_Qb_00;
                auVar11._0_8_ = extraout_XMM0_Qa_00;
                if (lVar10 != 0) {
                  return lVar10;
                }
              }
              auVar11 = pshuflw(auVar11,ZEXT416(uVar6),0x55);
              if ((((auVar11[4] == '\0') ||
                   (lVar9 = pdb_14052dff0(&uStack_88,param_1 + 100), lVar9 == 0)) &&
                  (lVar9 = 0, (uStack_88 & 1) == 0)) && (uStack_88._1_1_ != '\0')) {
                pdb_140172c20(*plStack_80,&UNK_142f64c40,1);
                lVar9 = 0;
              }
            }
          }
        }
      }
    }
  }
  return lVar9;
}

