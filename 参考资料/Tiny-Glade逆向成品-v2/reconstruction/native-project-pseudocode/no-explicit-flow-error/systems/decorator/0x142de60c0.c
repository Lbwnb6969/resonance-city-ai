// VA 0x142de60c0, PDB extent 430 bytes
// system_decorator::ui_systems::decorator_interaction_intent::calculate_decorator_interaction_intent::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/decorator_interaction_intent.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::decorator_interaction_intent::calculate_decorator_interaction_intent::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/decorator_interaction_intent.rs
   Extent: 430 */

void pdb_142de60c0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  ulonglong *puStack_60;
  code *pcStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_38 = pdb_140c017b0(*(undefined4 *)*param_1,((undefined4 *)*param_1)[1]);
  pbStack_48 = (byte *)0x4;
  if (param_3 != 0) {
    pdb_14007ee60();
    pbStack_48 = pub_1406abab0(param_3 * 8,4);
    if (pbStack_48 == (byte *)0x0) {
      pbStack_48 = (byte *)pdb_142dc7e2a(4);
    }
    uVar1 = (ulonglong)((uint)param_3 & 3);
    if (param_3 < 4) {
      uVar2 = 0;
    }
    else {
      puVar3 = (undefined8 *)(param_2 + 0x518);
      uVar2 = 0;
      do {
        *(undefined8 *)(pbStack_48 + uVar2 * 8) = puVar3[-0x7e];
        *(undefined8 *)(pbStack_48 + uVar2 * 8 + 8) = puVar3[-0x54];
        *(undefined8 *)(pbStack_48 + uVar2 * 8 + 0x10) = puVar3[-0x2a];
        *(undefined8 *)(pbStack_48 + uVar2 * 8 + 0x18) = *puVar3;
        uVar2 = uVar2 + 4;
        puVar3 = puVar3 + 0xa8;
      } while ((param_3 & 0xfffffffffffffffc) != uVar2);
      if (uVar1 == 0) goto LAB_142de61c6;
    }
    puVar3 = (undefined8 *)(uVar2 * 0x150 + param_2 + 0x128);
    uVar4 = 0;
    do {
      *(undefined8 *)(pbStack_48 + uVar4 * 8 + uVar2 * 8) = *puVar3;
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 0x2a;
    } while (uVar1 != uVar4);
  }
LAB_142de61c6:
  pcStack_78 = pdb_1424e4500;
  puStack_70 = &uStack_38;
  pcStack_68 = pdb_1414c9730;
  puStack_60 = &uStack_50;
  pcStack_58 = pdb_141495830;
  puStack_80 = param_1;
  uStack_50 = param_3;
  uStack_40 = param_3;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143313750,&puStack_80,&UNK_143313778);
}

