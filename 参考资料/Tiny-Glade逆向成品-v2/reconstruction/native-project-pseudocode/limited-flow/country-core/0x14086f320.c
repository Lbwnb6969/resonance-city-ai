// VA 0x14086f320, PDB extent 319 bytes
// country_core::resources::walls::decorator::impl$134::eq
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure: country_core::resources::walls::decorator::impl$134::eq
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 319 */

uint pdb_14086f320(float *param_1,float *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x22);
  lVar2 = (ulonglong)bVar1 - 1;
  if ((ulonglong)bVar1 < 2) {
    lVar2 = 0;
  }
  lVar3 = (ulonglong)*(byte *)((longlong)param_2 + 0x22) - 1;
  if ((ulonglong)*(byte *)((longlong)param_2 + 0x22) < 2) {
    lVar3 = 0;
  }
  if (lVar2 != lVar3) {
    return 0;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 2:
  case 3:
    if ((param_1[2] == param_2[2]) && (!NAN(param_1[2]) && !NAN(param_2[2]))) {
      return -(uint)(*param_2 == *param_1 && param_2[1] == param_1[1]) & 0xffffff01;
    }
    break;
  case 4:
    if (((param_1[4] == param_2[4]) && (!NAN(param_1[4]) && !NAN(param_2[4]))) &&
       (iVar5 = -(uint)((int)*(undefined8 *)param_2 == (int)*(undefined8 *)param_1),
       iVar6 = -(uint)((int)((ulonglong)*(undefined8 *)param_2 >> 0x20) ==
                      (int)((ulonglong)*(undefined8 *)param_1 >> 0x20)), auVar4._4_4_ = iVar5,
       auVar4._0_4_ = iVar5, auVar4._8_4_ = iVar6, auVar4._12_4_ = iVar6,
       iVar5 = movmskpd(0x4300df10,auVar4), iVar5 == 3)) {
      return -(uint)(param_2[2] == param_1[2] && param_2[3] == param_1[3]) & 0xffffff01;
    }
    break;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

