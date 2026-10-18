// VA 0x1417c3600, PDB extent 319 bytes
// country_core::resources::walls::decorator::impl$122::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000143337878) overlaps instruction at (ram,0x000143337877)
    */
/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$122::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 319 */

void pdb_1417c3600(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcStack_8;
  
  cVar2 = '\x06';
  if (1 < (byte)param_1[0x17]) {
    cVar2 = param_1[0x17] - 2;
  }
  pcStack_8 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar2) {
  case '\0':
    puVar3 = &UNK_143336cc8;
    uVar4 = 4;
    break;
  case '\x01':
    puVar3 = &UNK_143336aff;
    uVar4 = 7;
    break;
  case '\x02':
    puVar5 = &UNK_1433372f8;
    puVar3 = &UNK_143336aed;
    goto code_r0x0001417c36f5;
  case '\x03':
    pdb_140f66090(param_2,&UNK_143336afb,4,&pcStack_8,&UNK_143337318);
    return;
  case '\x04':
    pdb_140f66090(param_2,&UNK_143337358,6,&pcStack_8,&UNK_143337338);
    return;
  case '\x05':
    puVar5 = &UNK_143337360;
    puVar3 = &UNK_143336af4;
code_r0x0001417c36f5:
    pdb_140f66090(param_2,puVar3,7,&pcStack_8,puVar5);
    return;
  case '\x06':
    pdb_140f66090(param_2,&UNK_143336a6b,5,&pcStack_8,&UNK_143337380);
    return;
  case '\a':
  case '\b':
  case '\t':
    pcVar1 = (char *)(unaff_RSI + 0x48 + unaff_RDI * 4);
    *pcVar1 = *pcVar1 + -1;
    *param_1 = *param_1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *(char *)(unaff_RDI + 0x4cfe48bd) = *(char *)(unaff_RDI + 0x4cfe48bd) + '\x01';
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + '\x01';
    *(char *)(unaff_RBP + -0x42) = *(char *)(unaff_RBP + -0x42) + '\x01';
    cRam00000000becf4706 = cRam00000000becf4706 + '\x01';
    cVar2 = (char)param_2;
    *param_2 = *param_2 + cVar2;
    *param_2 = *param_2 + cVar2;
    *param_2 = *param_2 + cVar2;
    *param_2 = *param_2 + cVar2;
    *param_2 = *param_2 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_2 + 8) + 0x18))
            (*(undefined8 *)param_2,puVar3,uVar4,*(code **)(*(longlong *)(param_2 + 8) + 0x18));
  return;
}

