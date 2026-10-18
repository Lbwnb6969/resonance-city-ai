// VA 0x142b5a4a0, PDB extent 382 bytes
// toolbar::resouces_and_components::taffy_layout::make_layout_absolute<taffy::node::Taffy>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::resouces_and_components::taffy_layout::make_layout_absolute<taffy::node::Taffy>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/taffy_layout.rs
   Extent: 382 */

void pdb_142b5a4a0(longlong param_1,int param_2,uint param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar10;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  bVar5 = *(byte *)(param_1 + 0x90) & *(byte *)(param_1 + 0x91);
  lVar4 = 0x310;
  if (bVar5 != 0) {
    lVar4 = 0x2fc;
  }
  if ((ulonglong)param_3 < *(ulonglong *)(param_1 + 0x10)) {
    lVar7 = *(longlong *)(param_1 + 8);
    if ((lVar7 != 0) &&
       (lVar8 = (ulonglong)param_3 * 0x330, *(int *)(lVar7 + 0x328 + lVar8) == param_2)) {
      lVar7 = lVar7 + lVar8;
      uVar1 = *(undefined8 *)(lVar7 + 8 + lVar4);
      param_4 = param_4 + (float)uVar1;
      param_5 = param_5 + (float)((ulonglong)uVar1 >> 0x20);
      *(ulonglong *)(lVar7 + 8 + lVar4) = CONCAT44(param_5,param_4);
      pdb_1411bdbc0(&iStack_88,param_1,param_2);
      if (iStack_88 == 4) {
        lVar4 = pdb_1411be3a0(param_1,param_2,param_3);
        if (lVar4 != 0) {
          lVar7 = 0;
          do {
            uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
            lVar7 = lVar7 + 1;
            iVar6 = param_2;
            uVar3 = pdb_1411be4c0(param_1,param_2,param_3);
            in_stack_ffffffffffffff68 = CONCAT44(uVar10,param_5);
            pdb_142b5a4a0(param_1,uVar3,iVar6,param_4,in_stack_ffffffffffffff68);
          } while (lVar4 != lVar7);
        }
        return;
      }
      uStack_58 = uStack_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      iStack_68 = iStack_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14367e938,0x2b,&iStack_68,&UNK_14367e918,&UNK_14367eb50);
    }
  }
  puVar9 = &UNK_14367ead8;
  if (bVar5 != 0) {
    puVar9 = &UNK_14367eaf0;
  }
  pdb_142dc664f(&UNK_1436d9880,0x18,puVar9);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

