// VA 0x140164010, PDB extent 287 bytes
// toolbar::mei::widgets::tweaker::impl$8::format<tiny_glade::gui::settings::RefreshRateMillihertz>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$8::format<tiny_glade::gui::settings::RefreshRateMillihertz>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 287 */

undefined8 * pdb_140164010(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  float *pfStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  float fStack_20;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)param_2[2];
  if ((ulonglong)param_2[1] <= uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar1,param_2[1],&UNK_142e4c138);
  }
  uStack_38 = 0;
  uStack_30 = 1;
  uStack_28 = 0;
  fStack_20 = (float)*(uint *)(*param_2 + uVar1 * 4) / _DAT_142e4bfe4;
  pfStack_48 = &fStack_20;
  pcStack_40 = pdb_140f70fc0;
  cVar2 = pdb_140f681d0(&uStack_38,&UNK_142e4c178,&UNK_142f454ac,&pfStack_48);
  if (cVar2 == '\0') {
    param_1[2] = uStack_28;
    *param_1 = uStack_38;
    param_1[1] = uStack_30;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e4c1a8,0x37,&uStack_19,&UNK_142e4c298,&UNK_142e4c250);
}

