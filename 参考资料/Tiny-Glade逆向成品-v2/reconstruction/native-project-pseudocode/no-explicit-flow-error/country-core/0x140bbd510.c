// VA 0x140bbd510, PDB extent 1176 bytes
// country_core::resources::history::decorator_edit::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 1176 */

undefined1 * pdb_140bbd510(undefined1 *param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int iStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  iVar3 = *(int *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x40);
  fVar1 = *(float *)(param_2 + 0x48);
  iVar5 = *(int *)(param_2 + 0x4c);
  iVar6 = *(int *)(param_2 + 0x58);
  cVar2 = *(char *)(param_2 + 0x65);
  cStack_64 = *(char *)(param_2 + 0x62);
  cStack_63 = *(char *)(param_2 + 99);
  iStack_9c = *(int *)(param_2 + 0x5c);
  cStack_62 = *(char *)(param_2 + 100);
  uStack_98 = 0x8000000000000000;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_61 = 1;
  lVar7 = pdb_141c03ce0(&uStack_98,&UNK_1430623c8,3,param_2 + 0x18);
  if (lVar7 == 0) {
    uStack_61 = 1;
    lVar7 = pdb_141c002d0(&uStack_98,&UNK_1430623cb,2,param_2);
    if (lVar7 == 0) {
      uStack_61 = 1;
      lVar7 = pdb_141c02bf0(&uStack_98,&UNK_1430623cd,4,param_2 + 0x66);
      if (lVar7 == 0) {
        if (iVar4 != 0) {
          uStack_61 = 1;
          lVar7 = pdb_141c08530(&uStack_98,&UNK_1430623d1,8,param_2 + 0x40);
          if (lVar7 != 0) goto LAB_140bbd5f9;
        }
        uStack_61 = 1;
        lVar7 = pdb_141c00d00(&uStack_98,&UNK_1430623d9,4,param_2 + 0x44);
        if (lVar7 == 0) {
          if (*(char *)(param_2 + 0x67) != '\0') {
            uStack_61 = 1;
            lVar7 = pdb_141c04d30(&uStack_98,&UNK_143062b70,3);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if ((fVar1 != 0.0) || (NAN(fVar1))) {
            uStack_61 = 1;
            lVar7 = pdb_141c06050(&uStack_98,&UNK_1430623ec,8,param_2 + 0x48);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (*(char *)(param_2 + 0x60) == '\0') {
            uStack_61 = 1;
            lVar7 = pdb_141c06370(&uStack_98,&UNK_1430623f4,0x10);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (iVar5 != 0) {
            uStack_61 = 1;
            lVar7 = pdb_141c08530(&uStack_98,&UNK_143062404,0x12,param_2 + 0x4c);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if ((*(float *)(param_2 + 0x50) != _DAT_142e36f28) ||
             (NAN(*(float *)(param_2 + 0x50)) || NAN(_DAT_142e36f28))) {
            uStack_61 = 1;
            lVar7 = pdb_141c06050(&uStack_98,&UNK_143062416,0x12);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (*(char *)(param_2 + 0x61) == '\0') {
            uStack_61 = 1;
            lVar7 = pdb_141c06370(&uStack_98,&UNK_143062428,0xd);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if ((*(float *)(param_2 + 0x54) != _DAT_142e36f28) ||
             (NAN(*(float *)(param_2 + 0x54)) || NAN(_DAT_142e36f28))) {
            uStack_61 = 1;
            lVar7 = pdb_141c06050(&uStack_98,&UNK_143062435,0xb);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (iVar6 != 0) {
            uStack_61 = 1;
            lVar7 = pdb_141c08530(&uStack_98,&UNK_143062440,0xc,param_2 + 0x58);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (iVar3 != 0) {
            uStack_61 = 1;
            lVar7 = pdb_141c04260(&uStack_98,&UNK_14306244c,0xd,param_2 + 0x10);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (cVar2 != '\0') {
            uStack_61 = 1;
            lVar7 = pdb_141c01ff0(&uStack_98,&UNK_143062459,7,param_2 + 0x65);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (cStack_64 != '\0') {
            uStack_61 = 1;
            lVar7 = pdb_141c06370(&uStack_98,&UNK_143062460,9,param_2 + 0x62);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (cStack_63 != '\0') {
            uStack_61 = 1;
            lVar7 = pdb_141c005f0(&uStack_98,&UNK_143062b73,0xf,param_2 + 99);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (iStack_9c != 0) {
            uStack_61 = 1;
            lVar7 = pdb_141c08530(&uStack_98,&UNK_143062488,0xb,param_2 + 0x5c);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          if (cStack_62 != '\0') {
            uStack_61 = 1;
            lVar7 = pdb_141bff760(&uStack_98,&UNK_143062493,0xe,param_2 + 100);
            if (lVar7 != 0) goto LAB_140bbd5f9;
          }
          uStack_b8 = uStack_78;
          uStack_b4 = uStack_74;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c8 = uStack_88;
          uStack_c4 = uStack_84;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          uStack_d8 = (undefined4)uStack_98;
          uStack_d4 = uStack_98._4_4_;
          uStack_d0 = uStack_90;
          uStack_cc = uStack_8c;
          uStack_61 = 0;
          pdb_140ddcdc0(param_1,&uStack_d8);
          return param_1;
        }
      }
    }
  }
LAB_140bbd5f9:
  *(longlong *)(param_1 + 8) = lVar7;
  *param_1 = 6;
  pdb_140bc0010(&uStack_98);
  return param_1;
}

