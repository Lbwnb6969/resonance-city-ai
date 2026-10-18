// VA 0x140a88660, PDB extent 816 bytes
// country_core::utils::debug_viz::impl$4::show::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::impl$4::show::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 816 */

void pdb_140a88660(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong arg0;
  byte *pbVar4;
  undefined8 uVar5;
  
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(8,8);
  if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  arg0 = uVar1 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    uVar5 = 0;
LAB_140a886d5:
    pdb_142dc7e2a(uVar5,arg0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  if (arg0 == 0) {
    pbVar4 = (byte *)0x4;
  }
  else {
    pdb_14007ee60();
    uVar5 = 4;
    pbVar4 = pub_1406abab0(arg0,4);
    if (pbVar4 == (byte *)0x0) goto LAB_140a886d5;
  }
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a8876b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143044870 + *(int *)(&UNK_143044870 + (ulonglong)*(uint *)(param_2 + 0x18) * 4))
    )(&UNK_143044870,uVar2);
    return;
  }
  pub_142e32760(pbVar4,uVar2,arg0);
                    /* WARNING: Could not recover jumptable at 0x000140a88741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143044870 + *(int *)(&UNK_143044870 + (ulonglong)*(uint *)(param_2 + 0x18) * 4)))
            ();
  return;
}

