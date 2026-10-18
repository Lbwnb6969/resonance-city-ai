// VA 0x140164130, PDB extent 255 bytes
// toolbar::mei::widgets::tweaker::impl$8::format<ref$<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$8::format<ref$<alloc::string::String> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 255 */

undefined8 * pdb_140164130(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
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
  uStack_38 = 0;
  uStack_30 = 1;
  uStack_28 = 0;
  uStack_40 = 0x60000020;
  puStack_50 = &uStack_38;
  puStack_48 = &UNK_142e4c178;
  lVar2 = *(longlong *)(*param_2 + uVar1 * 8);
  cVar3 = pdb_140f73140(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),&puStack_50);
  if (cVar3 == '\0') {
    param_1[2] = uStack_28;
    *param_1 = uStack_38;
    param_1[1] = uStack_30;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e4c1a8,0x37,&uStack_19,&UNK_142e4c298,&UNK_142e4c250);
}

