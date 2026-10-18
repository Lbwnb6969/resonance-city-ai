// VA 0x140631cb0, PDB extent 281 bytes
// ron::parse::Parser::parse_integer<u8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer<u8>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 281 */

void pdb_140631cb0(undefined1 *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  
  cVar1 = pdb_140dcdeb0(param_2,&UNK_142f89e7c,2);
  uVar6 = 2;
  if (cVar1 == '\0') {
    cVar1 = pdb_140dcdeb0(param_2,&UNK_142f89e7e,2);
    uVar6 = 8;
    if (cVar1 == '\0') {
      cVar1 = pdb_140dcdeb0(param_2,&UNK_142f89e80,2);
      uVar6 = 10;
      if (cVar1 != '\0') {
        uVar6 = 0x10;
      }
    }
  }
  uVar2 = pdb_140dd1cf0(param_2,pdb_1406318f0);
  if (uVar2 == 0) {
    *param_1 = 0xe;
    return;
  }
  uVar5 = 0x5f;
  cVar1 = pdb_140dccd90(param_2);
  if (cVar1 != '\0') {
    *param_1 = 0x23;
    return;
  }
  lVar3 = pdb_140dd3680(param_2);
  if (uVar2 < uVar5) {
    if (*(char *)(lVar3 + uVar2) < -0x40) goto LAB_140631d81;
LAB_140631d65:
    if ('\0' < param_3) {
      pcVar4 = pdb_140631770;
      goto LAB_140631da2;
    }
  }
  else {
    if (lVar3 != 0 && uVar2 == uVar5) goto LAB_140631d65;
LAB_140631d81:
    lVar3 = pdb_142dc8070(lVar3);
  }
  pcVar4 = pdb_140631780;
LAB_140631da2:
  pdb_140632890(param_1,param_2,lVar3,uVar2,uVar6,pcVar4);
  return;
}

