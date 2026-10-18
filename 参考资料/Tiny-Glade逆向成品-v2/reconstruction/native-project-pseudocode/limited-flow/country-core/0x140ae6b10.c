// VA 0x140ae6b10, PDB extent 641 bytes
// country_core::systems::mode_manager::impl$52::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140ae6d83) overlaps instruction at (ram,0x000140ae6d82)
    */
/* WARNING: Removing unreachable block (ram,0x000140ae6de0) */
/* Matched PDB project procedure: country_core::systems::mode_manager::impl$52::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 641 */

ulonglong pdb_140ae6b10(byte *param_1,byte *param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  int *unaff_RDI;
  undefined *puVar7;
  byte *pbStack_8;
  
  puVar7 = &UNK_14304fbdc;
  iVar1 = *(int *)(&UNK_14304fbdc + (ulonglong)*param_1 * 4);
  puVar6 = &UNK_14304fbdc + iVar1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    pbStack_8 = param_1 + 8;
    uVar5 = pdb_140f66090(param_2,&UNK_14304f9b0,7,&pbStack_8);
    return uVar5;
  case 1:
    pbStack_8 = param_1 + 1;
    uVar5 = pdb_140f66090(param_2,&UNK_14304f82f,4,&pbStack_8);
    return uVar5;
  case 2:
    puVar6 = &UNK_14304f7d8;
    puVar7 = (undefined *)0x4;
    break;
  case 3:
    pbStack_8 = param_1 + 8;
    uVar5 = pdb_140f66090(param_2,&UNK_14304f9f8,0xb,&pbStack_8);
    return uVar5;
  case 4:
    pbStack_8 = param_1 + 1;
    uVar5 = pdb_140f66090(param_2,&UNK_14304fa28,6,&pbStack_8);
    return uVar5;
  case 5:
    puVar6 = &UNK_14304f7ac;
    puVar7 = (undefined *)0x7;
    break;
  case 6:
    pbStack_8 = param_1 + 8;
    uVar5 = pdb_140f66090(param_2,&UNK_14304f8a8,9,&pbStack_8);
    return uVar5;
  case 7:
    puVar6 = &UNK_14304f880;
    puVar7 = (undefined *)0x5;
    break;
  case 8:
    puVar6 = &UNK_14304fa50;
    puVar7 = (undefined *)0xb;
    param_1 = param_2;
  case 0x18:
code_r0x000140ae6d88:
    param_2 = param_1;
    break;
  case 9:
    puVar6 = &UNK_14304fa5b;
    puVar7 = (undefined *)0x6;
    break;
  case 10:
    puVar6 = &UNK_14304fa61;
    puVar7 = (undefined *)0x8;
    break;
  case 0xb:
    puVar6 = &UNK_14304f824;
    puVar7 = (undefined *)0x5;
    break;
  case 0xc:
    puVar6 = &UNK_14304f8e4;
    puVar7 = (undefined *)0x4;
    break;
  case 0xd:
    puVar6 = &UNK_14304f829;
    puVar7 = (undefined *)0x6;
    break;
  case 0xe:
    pbStack_8 = param_1 + 1;
    uVar5 = pdb_140f66090(param_2,&UNK_14304f960,10,&pbStack_8);
    return uVar5;
  case 0xf:
    puVar6 = &UNK_14304fa90;
    puVar7 = (undefined *)0x6;
    break;
  case 0x10:
    puVar6 = &UNK_14304fa96;
    puVar7 = (undefined *)0x9;
    break;
  case 0x11:
    puVar6 = &UNK_14304fa9f;
    puVar7 = (undefined *)0xc;
    break;
  case 0x12:
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  case 0x13:
  case 0x16:
  case 0x20:
    puVar4 = (uint *)CONCAT71((int7)((ulonglong)param_2 >> 8),(char)param_2 + param_1[-0x48]);
    uVar3 = (uint)puVar4 | *puVar4;
    param_1 = (byte *)(ulonglong)uVar3;
    *param_1 = *param_1 + (char)uVar3;
    goto code_r0x000140ae6d88;
  case 0x15:
    *unaff_RDI = *unaff_RDI + (int)param_1;
  default:
    *unaff_RDI = *unaff_RDI + (int)param_1;
    uVar5 = (ulonglong)*(uint *)(param_1 + 8);
    if (*(undefined **)(&UNK_14304fbe4 + iVar1) != &UNK_14304fbdc) {
      uVar5 = 0;
    }
    return uVar5;
  case 0x21:
  case 0x22:
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  case 0x23:
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  case 0x24:
  case 0x25:
  case 0x26:
    *param_2 = *param_2 + (char)param_2;
    param_2[-0x77] = param_2[-0x77] + (char)param_1;
    puVar4 = (uint *)(param_2 + -0x7d);
    *puVar4 = *puVar4 >> 4 | *puVar4 << 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*(longlong *)(param_2 + 8) + 0x18))
                    (*(undefined8 *)param_2,puVar6,puVar7,
                     *(code **)(*(longlong *)(param_2 + 8) + 0x18));
  return uVar5;
}

