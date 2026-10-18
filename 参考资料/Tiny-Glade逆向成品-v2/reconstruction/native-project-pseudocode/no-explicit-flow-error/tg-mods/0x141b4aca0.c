// VA 0x141b4aca0, PDB extent 611 bytes
// tg_mods::identity::ModId::parse
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::identity::ModId::parse
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/identity.rs
   Extent: 611 */

undefined8 * pdb_141b4aca0(undefined8 *param_1,char *param_2,char *param_3)

{
  longlong lVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  
  pcVar6 = (char *)0x0;
  while( true ) {
    pcVar5 = param_2 + (longlong)pcVar6;
    if (param_3 + -(longlong)pcVar6 < (char *)0x10) {
      pcVar4 = (char *)0x0;
      if (param_3 == pcVar6) goto LAB_141b4ae41;
      while (pcVar5[(longlong)pcVar4] != '-') {
        pcVar4 = pcVar4 + 1;
        if (param_3 + -(longlong)pcVar6 == pcVar4) goto LAB_141b4ae41;
      }
    }
    else {
      lVar1 = pdb_140f69320(0x2d);
      pcVar4 = pcVar5;
      if (lVar1 != 1) goto LAB_141b4ae41;
    }
    pcVar2 = pcVar4 + (longlong)pcVar6 + 1;
    pcVar5 = pcVar4 + (longlong)pcVar6;
    if ((pcVar5 < param_3) && (param_2[(longlong)pcVar5] == '-')) break;
    pcVar6 = pcVar2;
    if (param_3 < pcVar2) {
LAB_141b4ae41:
      *param_1 = 0x8000000000000000;
      return param_1;
    }
  }
  if (((pcVar5 == (char *)0x8) &&
      ((((0xf5 < (byte)(*param_2 - 0x3aU) || 0xf9 < (byte)(*param_2 + 0x99U) &&
         (0xf5 < (byte)(param_2[1] - 0x3aU) || 0xf9 < (byte)(param_2[1] + 0x99U))) &&
        (0xf5 < (byte)(param_2[2] - 0x3aU) || 0xf9 < (byte)(param_2[2] + 0x99U))) &&
       ((0xf5 < (byte)(param_2[3] - 0x3aU) || 0xf9 < (byte)(param_2[3] + 0x99U) &&
        (0xf5 < (byte)(param_2[4] - 0x3aU) || 0xf9 < (byte)(param_2[4] + 0x99U))))))) &&
     ((0xf5 < (byte)(param_2[5] - 0x3aU) || 0xf9 < (byte)(param_2[5] + 0x99U) &&
      (((0xf5 < (byte)(param_2[6] - 0x3aU) || 0xf9 < (byte)(param_2[6] + 0x99U) &&
        ((byte)(param_2[7] - 0x30U) < 10 || (byte)(param_2[7] + 0x9fU) < 6)) &&
       ((longlong)param_3 - (longlong)pcVar2 == 0x10)))))) {
    pcVar4 = pcVar4 + (longlong)pcVar6;
    do {
      pcVar4 = pcVar4 + 1;
      if (param_3 == pcVar4) {
        if (-1 < (longlong)param_3) goto LAB_141b4aec5;
        uVar7 = 0;
        do {
          pdb_142dc7e2a(uVar7,param_3);
LAB_141b4aec5:
          pdb_14007ee60();
          uVar7 = 1;
          pbVar3 = pub_1406abab0((ulonglong)param_3,1);
        } while (pbVar3 == (byte *)0x0);
        pub_142e32760(pbVar3,param_2,param_3);
        *param_1 = param_3;
        param_1[1] = pbVar3;
        param_1[2] = param_3;
        return param_1;
      }
    } while (0xf9 < (byte)(param_2[(longlong)pcVar4] + 0x99U) ||
             0xf5 < (byte)(param_2[(longlong)pcVar4] - 0x3aU));
  }
  goto LAB_141b4ae41;
}

