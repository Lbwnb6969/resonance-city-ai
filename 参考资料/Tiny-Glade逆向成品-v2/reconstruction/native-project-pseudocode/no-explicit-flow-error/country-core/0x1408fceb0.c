// VA 0x1408fceb0, PDB extent 496 bytes
// country_core::resources::loading_screen::update_loading_screen
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/loading_screen.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::loading_screen::update_loading_screen
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/loading_screen.rs
   Extent: 496 */

void pdb_1408fceb0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  float fStack_60;
  undefined8 uStack_5c;
  longlong lStack_50;
  longlong lStack_48;
  longlong *plStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pfVar2 = (float *)*param_1;
  if (pfVar2 != (float *)0x0) {
    fVar8 = (float)pdb_1417031b0(param_3);
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
    puVar3 = (undefined4 *)param_1[2];
    *puVar3 = uVar1;
    *pfVar2 = fVar8 + *pfVar2;
    fVar8 = *(float *)(*param_2 + 0x20);
    *puVar3 = uVar1;
    pfVar2[1] = fVar8;
    if (*(longlong *)(param_1[8] + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14301da60);
    }
    plVar4 = (longlong *)*param_4;
    lStack_50 = pdb_140e51270(*plVar4 + 0x10,param_1[8] + 0x28);
    lVar5 = *plVar4;
    uVar6 = *param_5;
    uStack_31 = 1;
    lStack_48 = lStack_50;
    uVar7 = pdb_140df4400(&UNK_14301da78,7);
    uStack_31 = 1;
    uStack_68 = pdb_140a2e580(uVar6,uVar7);
    fStack_60 = (float)*(uint *)*param_6 / (float)((uint *)*param_6)[1];
    uStack_5c = *(undefined8 *)pfVar2;
    uStack_80 = 0x8000000000000000;
    puStack_78 = &UNK_14301da7f;
    uStack_70 = 0x29;
    uStack_88 = 0;
    uStack_31 = 1;
    pdb_1415aeb50(lVar5 + 0x10,&lStack_50,1,&uStack_88,&uStack_68);
    *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
    plStack_40 = (longlong *)param_1[4];
    if (*plStack_40 != 0) {
      pdb_14098d520(plStack_40);
    }
    *plStack_40 = lStack_48;
  }
  return;
}

