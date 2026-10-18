// VA 0x1409ec050, PDB extent 191 bytes
// country_core::resources::feedback_report_resources::FeedbackReportResources::clear_screenshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::feedback_report_resources::FeedbackReportResources::clear_screenshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
   Extent: 191 */

void pdb_1409ec050(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 0) {
    if ((int)*param_1 == 1) {
      plVar1 = (longlong *)param_1[1];
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        pdb_140c7b370();
      }
    }
    else {
      pdb_14098a200();
    }
  }
  *param_1 = 0;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pdb_140c7a980(param_1 + 2);
    }
  }
  param_1[2] = 0;
  return;
}

