// VA 0x1409f9870, PDB extent 146 bytes
// country_core::systems::collision::world::impl$42::into_transformed_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::world::impl$42::into_transformed_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 146 */

undefined8 *
pdb_1409f9870(undefined8 *param_1,undefined4 *param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uVar8 = (ulonglong)*(byte *)(param_2 + 2);
  if (param_4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar8,param_4,&UNK_143033d18);
  }
  lVar7 = pdb_140cd4bd0(param_3 + uVar8 * 0x390,*param_2,param_2[1]);
  if (lVar7 != 0) {
    uVar4 = *(undefined8 *)(lVar7 + 0x34);
    uVar5 = *(undefined8 *)(lVar7 + 0x3c);
    uVar6 = *(undefined8 *)(lVar7 + 0x48);
    uStack_18 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x40) >> 0x20);
    uStack_1c = (undefined4)((ulonglong)uVar5 >> 0x20);
    plVar1 = *(longlong **)(lVar7 + 0x10);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    LOCK();
    lVar7 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 != 0 && SCARRY8(lVar7,1) == *plVar1 < 0) {
      *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(uStack_18,uStack_1c);
      *(undefined8 *)((longlong)param_1 + 0x14) = uVar6;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[4] = plVar1;
      param_1[5] = uVar2;
      return param_1;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143033d30);
}

