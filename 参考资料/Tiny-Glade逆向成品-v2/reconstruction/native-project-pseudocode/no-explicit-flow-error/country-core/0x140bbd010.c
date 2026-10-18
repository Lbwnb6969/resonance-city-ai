// VA 0x140bbd010, PDB extent 1272 bytes
// country_core::resources::history::decorator_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 1272 */

longlong pdb_140bbd010(longlong param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined2 uStack_78;
  longlong *plStack_70;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x40);
  fVar1 = *(float *)(param_1 + 0x48);
  iVar4 = *(int *)(param_1 + 0x4c);
  iVar5 = *(int *)(param_1 + 0x58);
  iVar6 = *(int *)(param_1 + 0x5c);
  uVar7 = *(uint *)(param_1 + 0x62);
  plVar8 = (longlong *)*param_2;
  lVar9 = plVar8[2];
  if (*plVar8 == lVar9) {
    pdb_142d7f1b0(plVar8,lVar9,1,1,1);
    lVar9 = plVar8[2];
  }
  *(undefined1 *)(plVar8[1] + lVar9) = 0x7b;
  plVar8[2] = lVar9 + 1;
  uStack_78 = 0x100;
  plStack_70 = param_2;
  lVar9 = pdb_141b83810(&uStack_78,&UNK_1430623c8,3,param_1 + 0x18);
  if (lVar9 == 0) {
    if ((char)uStack_78 != '\0') {
LAB_140bbd0b6:
      lVar9 = pdb_142db9040(&stack0xffffffffffffffe8,0,0);
      return lVar9;
    }
    lVar9 = pdb_141b840d0(&uStack_78,&UNK_1430623cb,2,param_1);
    if (lVar9 == 0) {
      if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
      lVar9 = pdb_141b803d0(&uStack_78,&UNK_1430623cd,4,param_1 + 0x66);
      if (lVar9 == 0) {
        if (iVar3 != 0) {
          if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
          lVar9 = pdb_141b7dc80(&uStack_78,&UNK_1430623d1,8,param_1 + 0x40);
          if (lVar9 != 0) {
            return lVar9;
          }
        }
        lVar9 = pdb_140bc0b90(&uStack_78,param_1 + 0x44);
        if ((lVar9 == 0) &&
           ((*(char *)(param_1 + 0x67) == '\0' || (lVar9 = pdb_140bc0bd0(&uStack_78), lVar9 == 0))))
        {
          if ((fVar1 != 0.0) || (NAN(fVar1))) {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b82660(&uStack_78,&UNK_1430623ec,8,param_1 + 0x48);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if (*(char *)(param_1 + 0x60) == '\0') {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b85940(&uStack_78,&UNK_1430623f4,0x10);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if (iVar4 != 0) {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b7dc80(&uStack_78,&UNK_143062404,0x12,param_1 + 0x4c);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if ((*(float *)(param_1 + 0x50) != _DAT_142e36f28) ||
             (NAN(*(float *)(param_1 + 0x50)) || NAN(_DAT_142e36f28))) {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b82660(&uStack_78,&UNK_143062416,0x12);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if (*(char *)(param_1 + 0x61) == '\0') {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b85940(&uStack_78,&UNK_143062428,0xd);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if ((*(float *)(param_1 + 0x54) != _DAT_142e36f28) ||
             (NAN(*(float *)(param_1 + 0x54)) || NAN(_DAT_142e36f28))) {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b82660(&uStack_78,&UNK_143062435,0xb);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if (iVar5 != 0) {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b7dc80(&uStack_78,&UNK_143062440,0xc,param_1 + 0x58);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if (iVar2 != 0) {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b7a830(&uStack_78,&UNK_14306244c,0xd,param_1 + 0x10);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if ((char)(uVar7 >> 0x18) != '\0') {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b7aaa0(&uStack_78,&UNK_143062459,7,param_1 + 0x65);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if ((char)uVar7 != '\0') {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b85940(&uStack_78,&UNK_143062460,9,param_1 + 0x62);
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          auVar10 = ZEXT416(uVar7 << 8);
          if ((char)(uVar7 >> 8) != '\0') {
            lVar9 = pdb_140bc0af0(&uStack_78,param_1 + 99);
            auVar10._8_8_ = extraout_XMM0_Qb;
            auVar10._0_8_ = extraout_XMM0_Qa;
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          if (iVar6 != 0) {
            if ((char)uStack_78 != '\0') goto LAB_140bbd0b6;
            lVar9 = pdb_141b7dc80(&uStack_78,&UNK_143062488,0xb,param_1 + 0x5c);
            auVar10._8_8_ = extraout_XMM0_Qb_00;
            auVar10._0_8_ = extraout_XMM0_Qa_00;
            if (lVar9 != 0) {
              return lVar9;
            }
          }
          auVar10 = pshuflw(auVar10,ZEXT416(uVar7),0x55);
          if ((((auVar10[4] == '\0') ||
               (lVar9 = pdb_140bc0ad0(&uStack_78,param_1 + 100), lVar9 == 0)) &&
              (lVar9 = 0, (uStack_78 & 1) == 0)) && (uStack_78._1_1_ != '\0')) {
            pdb_140172c20(*plStack_70,&UNK_143062635,1);
            lVar9 = 0;
          }
        }
      }
    }
  }
  return lVar9;
}

