// VA 0x142b38c10, PDB extent 221 bytes
// system_onboarding::hint_binding_renderer::render_hints::fmtinput
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_binding_renderer::render_hints::fmtinput
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
   Extent: 221 */

void pdb_142b38c10(undefined8 *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uStack_38;
  int iStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_28 = pub_1406abab0(1,1);
  if (pbStack_28 != (byte *)0x0) {
    *pbStack_28 = 0x3f;
    if (*param_2 == 0xc4) {
      *param_1 = 1;
      param_1[1] = pbStack_28;
      param_1[2] = 1;
    }
    else {
      iStack_30 = param_2[2];
      uStack_38 = *(undefined8 *)param_2;
      pdb_140a17220(param_1,&uStack_38,0,1);
      pub_1406abac0(pbStack_28,1,1);
    }
    return;
  }
  pdb_142dc7e2a(1,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

