// VA 0x140a00630, PDB extent 369 bytes
// country_core::resources::gui::DebugGui::log_to_screen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gui::DebugGui::log_to_screen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gui.rs
   Extent: 369 */

void pdb_140a00630(longlong param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  uVar5 = param_3 == 0;
  uVar4 = param_4;
  if (-1 < (longlong)param_3) goto LAB_140a00661;
  uVar5 = true;
  lVar1 = 0;
  while( true ) {
    param_1 = lVar1;
    param_2 = param_3;
    pdb_142dc7e2a(param_1,param_3);
    uVar4 = param_4;
LAB_140a00661:
    if ((bool)uVar5) break;
    param_4 = uVar4;
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(param_3,1);
    uVar5 = pbVar3 == (byte *)0x0;
    lVar1 = 1;
    if (!(bool)uVar5) {
      pub_142e32760(pbVar3,param_2,param_3);
      uVar2 = *(ulonglong *)(param_1 + 0xb0);
joined_r0x000140a0073e:
      if (uVar2 < 5) {
        lVar1 = param_1 + uVar2 * 0x20;
        uVar2 = *(ulonglong *)(param_1 + 0x10 + uVar2 * 0x20);
        if ((!SBORROW8(0,uVar2)) && (uVar2 != 0)) {
          pub_1406abac0(*(byte **)(lVar1 + 0x18),uVar2,1);
        }
        *(ulonglong *)(lVar1 + 0x10) = param_3;
        *(byte **)(lVar1 + 0x18) = pbVar3;
        *(ulonglong *)(lVar1 + 0x20) = param_3;
        *(undefined4 *)(lVar1 + 0x28) = uVar4;
        *(undefined4 *)(lVar1 + 0x2c) = 0x40a00000;
        *(ulonglong *)(param_1 + 0xb0) =
             ((*(longlong *)(param_1 + 0xb0) + 1U) / 5) * -5 + *(longlong *)(param_1 + 0xb0) + 1;
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar2,5,&UNK_1430347a8);
    }
  }
  pbVar3 = (byte *)0x1;
  uVar2 = *(ulonglong *)(param_1 + 0xb0);
  goto joined_r0x000140a0073e;
}

