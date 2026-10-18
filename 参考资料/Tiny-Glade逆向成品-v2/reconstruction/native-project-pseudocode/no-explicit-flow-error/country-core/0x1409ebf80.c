// VA 0x1409ebf80, PDB extent 152 bytes
// country_core::resources::feedback_report_resources::FeedbackReportTags::to_list
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::feedback_report_resources::FeedbackReportTags::to_list
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
   Extent: 152 */

undefined8 pdb_1409ebf80(undefined8 param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 uStack_10;
  
  puVar1 = (undefined *)0x0;
  puStack_48 = &UNK_14303293f;
  if (*param_2 == '\0') {
    puStack_48 = puVar1;
  }
  puStack_38 = &UNK_143032942;
  if (param_2[1] == '\0') {
    puStack_38 = puVar1;
  }
  puStack_28 = &UNK_143032947;
  if (param_2[2] == '\0') {
    puStack_28 = puVar1;
  }
  puStack_18 = &UNK_14303294c;
  if (param_2[3] == '\0') {
    puStack_18 = puVar1;
  }
  uStack_40 = 3;
  uStack_30 = 5;
  uStack_20 = 5;
  uStack_10 = 3;
  pdb_1415f4130(param_1,&puStack_48,&stack0xfffffffffffffff8);
  return param_1;
}

