// VA 0x141ad9510, PDB extent 614 bytes
// country_core::resources::walls::wall_attachment::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_attachment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_attachment::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_attachment.rs
   Extent: 614 */

undefined1 * pdb_141ad9510(undefined1 *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
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
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  fVar1 = *(float *)(param_2 + 2);
  fVar2 = *(float *)((longlong)param_2 + 0xc);
  lVar5 = *param_2;
  cVar3 = *(char *)((longlong)param_2 + 0x19);
  cVar4 = *(char *)((longlong)param_2 + 0x1a);
  uStack_a8 = 0x8000000000000000;
  uStack_90 = 0;
  uStack_80 = 0;
  if ((*(float *)(param_2 + 1) != 0.0) || (NAN(*(float *)(param_2 + 1)))) {
    uStack_71 = 1;
    lVar6 = pdb_141c06050(&uStack_a8,&UNK_1433884c0,0x16,param_2 + 1);
    if (lVar6 != 0) goto LAB_141ad96b6;
  }
  if ((fVar2 != 0.0 || fVar1 != 0.0) || *(float *)((longlong)param_2 + 0x14) != 0.0) {
    uStack_71 = 1;
    lVar6 = pdb_141c08af0(&uStack_a8,&UNK_1433884d6,9,(longlong)param_2 + 0xc);
    if (lVar6 != 0) goto LAB_141ad96b6;
  }
  uStack_71 = 1;
  lVar6 = pdb_141c04d30(&uStack_a8,&UNK_1433884df,6,param_2 + 3);
  if (lVar6 != 0) {
LAB_141ad96b6:
    *(longlong *)(param_1 + 8) = lVar6;
    *param_1 = 6;
    pdb_141adc130(&uStack_a8);
    return param_1;
  }
  if (lVar5 != 0) {
    uStack_71 = 1;
    lVar6 = pdb_141bffb50(&uStack_a8,&UNK_1433884e5,8,param_2);
    if (lVar6 != 0) goto LAB_141ad96b6;
  }
  if (cVar3 != '\0') {
    uStack_71 = 1;
    lVar6 = pdb_141c06370(&uStack_a8,&UNK_1433884ed,0xe,(longlong)param_2 + 0x19);
    if (lVar6 != 0) goto LAB_141ad96b6;
  }
  if (cVar4 == '\0') {
    uStack_71 = 1;
    lVar6 = pdb_141c077a0(&uStack_a8,&UNK_1433884fb,4,(longlong)param_2 + 0x1a);
    if (lVar6 != 0) goto LAB_141ad96b6;
  }
  uStack_b8 = uStack_88;
  uStack_b4 = uStack_84;
  uStack_b0 = (undefined4)uStack_80;
  uStack_ac = uStack_80._4_4_;
  uStack_c8 = uStack_98;
  uStack_c4 = uStack_94;
  uStack_c0 = (undefined4)uStack_90;
  uStack_bc = uStack_90._4_4_;
  uStack_d8 = (undefined4)uStack_a8;
  uStack_d4 = uStack_a8._4_4_;
  uStack_d0 = uStack_a0;
  uStack_cc = uStack_9c;
  uStack_71 = 0;
  pdb_140ddcdc0(param_1,&uStack_d8);
  return param_1;
}

