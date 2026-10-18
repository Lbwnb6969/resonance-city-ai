// VA 0x140ae55f0, PDB extent 311 bytes
// country_core::resources::toolbar::Toolbar::switch_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::toolbar::Toolbar::switch_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/toolbar.rs
   Extent: 311 */

void pdb_140ae55f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar7 = 1;
  lVar5 = 0;
  lVar3 = lVar1;
  do {
    if (lVar4 << 5 == lVar5) {
      pcStack_50 = pdb_140ae6b10;
      puStack_58 = param_2;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304f680,&puStack_58,&UNK_14304f6c8);
    }
    uStack_48 = param_2[2];
    puStack_58 = (undefined8 *)*param_2;
    pcStack_50 = (code *)param_2[1];
    cVar2 = pdb_141b6f050(&puStack_58,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    lVar5 = lVar5 + 0x20;
    lVar7 = lVar7 + -1;
    lVar3 = lVar3 + 0x20;
  } while (cVar2 == '\0');
  if ((ulonglong)-lVar7 < 0xb) {
    lVar4 = *(longlong *)(lVar1 + -0x10 + lVar5);
    if (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar1 + -0x18 + lVar5);
      lVar4 = lVar4 * 0x18;
      lVar6 = 0;
      do {
        cVar2 = pdb_140ae6da0(lVar3,param_2);
        if (cVar2 != '\0') {
          *(longlong *)(lVar1 + -8 + lVar5) = lVar6;
          *(char *)(param_1 + 0x18) = -(char)lVar7;
          return;
        }
        lVar3 = lVar3 + 0x18;
        lVar6 = lVar6 + 1;
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != 0);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14304f668);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14304eed9,0x28,&UNK_14304ef30);
}

