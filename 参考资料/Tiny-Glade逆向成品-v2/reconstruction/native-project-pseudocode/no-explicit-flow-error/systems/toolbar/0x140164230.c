// VA 0x140164230, PDB extent 271 bytes
// toolbar::mei::widgets::tweaker::impl$8::format<tiny_glade::gui::settings::Resolution>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$8::format<tiny_glade::gui::settings::Resolution>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 271 */

undefined8 * pdb_140164230(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong lStack_58;
  code *pcStack_50;
  longlong lStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)param_2[2];
  if ((ulonglong)param_2[1] <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,param_2[1],&UNK_142e4c138);
  }
  lStack_58 = *param_2 + uVar1 * 8;
  uStack_38 = 0;
  uStack_30 = 1;
  uStack_28 = 0;
  lStack_48 = *param_2 + 4 + uVar1 * 8;
  pcStack_50 = pdb_140f71a50;
  pcStack_40 = pdb_140f71a50;
  cVar2 = pdb_140f681d0(&uStack_38,&UNK_142e4c178,&UNK_142f4546b,&lStack_58);
  if (cVar2 == '\0') {
    param_1[2] = uStack_28;
    *param_1 = uStack_38;
    param_1[1] = uStack_30;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e4c1a8,0x37,&uStack_19,&UNK_142e4c298,&UNK_142e4c250);
}

