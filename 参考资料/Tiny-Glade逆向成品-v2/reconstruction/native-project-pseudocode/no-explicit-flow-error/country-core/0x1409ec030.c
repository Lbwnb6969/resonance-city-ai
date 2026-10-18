// VA 0x1409ec030, PDB extent 18 bytes
// country_core::resources::feedback_report_resources::FeedbackReportResources::reset_choices
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::feedback_report_resources::FeedbackReportResources::reset_choices
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
   Extent: 18 */

void pdb_1409ec030(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0x101;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

