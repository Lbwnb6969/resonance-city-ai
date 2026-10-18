// VA 0x140164440, PDB extent 303 bytes
// toolbar::mei::widgets::tweaker::impl$8::format<enum2$<tiny_glade::gui::settings::FpsCap> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::widgets::tweaker::impl$8::format<enum2$<tiny_glade::gui::settings::FpsCap> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 303 */

undefined8 * pdb_140164440(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  if (*(int *)(*param_2 + uVar1 * 8) == 1) {
    uVar4 = 0x20;
    uVar3 = pdb_140dc6290(&UNK_142f4544b,0x20);
    cVar2 = pdb_140f679a0(&puStack_50,uVar3,uVar4);
  }
  else {
    cVar2 = pdb_140f71a50(*param_2 + uVar1 * 8 + 4,&puStack_50);
  }
  if (cVar2 == '\0') {
    param_1[2] = uStack_28;
    *param_1 = uStack_38;
    param_1[1] = uStack_30;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142e4c1a8,0x37,&uStack_19,&UNK_142e4c298,&UNK_142e4c250);
}

