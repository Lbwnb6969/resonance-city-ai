// VA 0x142b3e3a0, PDB extent 147 bytes
// country_core::systems::collision::world::impl$13::ray_intersects_filtered::closure$0<system_color::autoclose_color_menu::autoclose_color_menu::closure$5::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$13::ray_intersects_filtered::closure$0<system_color::autoclose_color_menu::autoclose_color_menu::closure$5::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 147 */

undefined8 pdb_142b3e3a0(longlong *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar8 = (ulonglong)*param_4;
  uStack_20 = pdb_1409012c0(param_4[1] | 1);
  lVar3 = *(longlong *)(*param_1 + 8);
  uVar4 = *(ulonglong *)(*param_1 + 0x10);
  uStack_1c = (undefined4)uVar8;
  iVar6 = pdb_1409fb190(&uStack_20);
  uVar8 = uVar8 & 0xffffffff;
  if (((uVar8 < uVar4) && (lVar3 != 0)) && (*(int *)(lVar3 + 0x20 + uVar8 * 0x28) == iVar6)) {
    pcVar1 = (char *)(lVar3 + uVar8 * 0x28);
    cVar2 = *pcVar1;
    lVar3 = *(longlong *)(pcVar1 + 8);
    if (((cVar2 == '\x02') || (cVar2 == '\0')) && (lVar3 == **(longlong **)param_1[1])) {
      uVar7 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    else {
      uVar7 = 0;
    }
    return uVar7;
  }
  pdb_142dc664f(&UNK_1436b9648,0x18,&UNK_14366ce50);
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return uVar7;
}

