// VA 0x140ac92a0, PDB extent 281 bytes
// ron::parse::Parser::parse_integer<i64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer<i64>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 281 */

void pdb_140ac92a0(undefined1 *param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  
  cVar1 = pdb_140dcdeb0(param_2,&UNK_14304cadb,2);
  uVar6 = 2;
  if (cVar1 == '\0') {
    cVar1 = pdb_140dcdeb0(param_2,&UNK_14304cadd,2);
    uVar6 = 8;
    if (cVar1 == '\0') {
      cVar1 = pdb_140dcdeb0(param_2,&UNK_14304cadf,2);
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
    if (*(char *)(lVar3 + uVar2) < -0x40) goto LAB_140ac9371;
LAB_140ac9355:
    if ('\0' < param_3) {
      pcVar4 = pdb_140631800;
      goto LAB_140ac9392;
    }
  }
  else {
    if (lVar3 != 0 && uVar2 == uVar5) goto LAB_140ac9355;
LAB_140ac9371:
    lVar3 = pdb_142dc8070(lVar3);
  }
  pcVar4 = pdb_140631810;
LAB_140ac9392:
  pdb_140aca3c0(param_1,param_2,lVar3,uVar2,uVar6,pcVar4);
  return;
}

