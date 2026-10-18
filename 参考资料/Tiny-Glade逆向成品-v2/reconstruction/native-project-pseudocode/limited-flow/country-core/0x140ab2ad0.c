// VA 0x140ab2ad0, PDB extent 720 bytes
// country_core::utils::debug_viz::impl$3::emit::closure$0<country_core::utils::debug_viz::impl$3::show_for::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::debug_viz::impl$3::emit::closure$0<country_core::utils::debug_viz::impl$3::show_for::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 720 */

void pdb_140ab2ad0(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong arg0;
  undefined8 uVar3;
  byte *pbStack_58;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  arg0 = uVar1 * 0xc;
  if (uVar1 < 0xaaaaaaaaaaaaaab) goto LAB_140ab2b23;
  uVar3 = 0;
  while( true ) {
    param_2 = arg0;
    pdb_142dc7e2a(uVar3);
LAB_140ab2b23:
    uVar2 = *(undefined8 *)(param_2 + 8);
    if (arg0 == 0) break;
    pdb_14007ee60();
    uVar3 = 4;
    pbStack_58 = pub_1406abab0(arg0,4);
    if (pbStack_58 != (byte *)0x0) {
      if (uVar1 != 0) {
LAB_140ab2b70:
        pub_142e32760(pbStack_58,uVar2,arg0);
      }
LAB_140ab2b7c:
                    /* WARNING: Could not recover jumptable at 0x000140ab2b8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14304aaa0 +
                *(int *)(&UNK_14304aaa0 + (ulonglong)*(uint *)(param_2 + 0x18) * 4)))();
      return;
    }
  }
  pbStack_58 = (byte *)0x4;
  if (uVar1 == 0) goto LAB_140ab2b7c;
  goto LAB_140ab2b70;
}

