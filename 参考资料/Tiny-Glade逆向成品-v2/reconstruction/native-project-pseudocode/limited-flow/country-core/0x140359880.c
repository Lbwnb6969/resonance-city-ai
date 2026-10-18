// VA 0x140359880, PDB extent 247 bytes
// country_core::resources::walls::decorator::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000142f42556) overlaps instruction at (ram,0x000142f42554)
    */
/* WARNING: Removing unreachable block (ram,0x000142f424fe) */
/* WARNING: Removing unreachable block (ram,0x000142f42537) */
/* WARNING: Removing unreachable block (ram,0x000142f425ae) */
/* WARNING: Removing unreachable block (ram,0x000142f4250a) */
/* WARNING: Removing unreachable block (ram,0x000142f4253d) */
/* WARNING: Removing unreachable block (ram,0x000142f425a4) */
/* WARNING: Removing unreachable block (ram,0x000142f4253f) */
/* WARNING: Removing unreachable block (ram,0x000142f4253b) */
/* WARNING: Removing unreachable block (ram,0x000142f42541) */
/* WARNING: Removing unreachable block (ram,0x000142f42565) */
/* WARNING: Removing unreachable block (ram,0x000142f42545) */
/* WARNING: Removing unreachable block (ram,0x000142f42547) */
/* WARNING: Removing unreachable block (ram,0x000142f4254f) */
/* WARNING: Removing unreachable block (ram,0x000142f42551) */
/* WARNING: Removing unreachable block (ram,0x000142f42553) */
/* WARNING: Removing unreachable block (ram,0x000142f425bc) */
/* WARNING: Removing unreachable block (ram,0x000142f425a7) */
/* WARNING: Removing unreachable block (ram,0x000142f425af) */
/* WARNING: Removing unreachable block (ram,0x000142f425bd) */
/* WARNING: Removing unreachable block (ram,0x000142f42492) */
/* WARNING: Removing unreachable block (ram,0x000142f424e0) */
/* WARNING: Removing unreachable block (ram,0x000142f424e2) */
/* WARNING: Removing unreachable block (ram,0x000142f424e4) */
/* WARNING: Removing unreachable block (ram,0x000142f42554) */
/* WARNING: Removing unreachable block (ram,0x000142f42556) */
/* WARNING: Removing unreachable block (ram,0x000142f42559) */
/* WARNING: Removing unreachable block (ram,0x000142f424a2) */
/* WARNING: Removing unreachable block (ram,0x000142f424c2) */
/* WARNING: Removing unreachable block (ram,0x000142f425e4) */
/* WARNING: Removing unreachable block (ram,0x000142f42483) */
/* WARNING: Removing unreachable block (ram,0x000142f4248b) */
/* WARNING: Removing unreachable block (ram,0x000142f42507) */
/* WARNING: Removing unreachable block (ram,0x000142f42509) */
/* WARNING: Removing unreachable block (ram,0x000142f4250e) */
/* WARNING: Removing unreachable block (ram,0x000142f42595) */
/* WARNING: Removing unreachable block (ram,0x000142f42520) */
/* WARNING: Removing unreachable block (ram,0x000142f42522) */
/* WARNING: Removing unreachable block (ram,0x000142f42596) */
/* WARNING: Removing unreachable block (ram,0x000142f42581) */
/* WARNING: Removing unreachable block (ram,0x000142f42583) */
/* WARNING: Removing unreachable block (ram,0x000142f42585) */
/* WARNING: Removing unreachable block (ram,0x000142f425b6) */
/* WARNING: Removing unreachable block (ram,0x000142f425b8) */
/* WARNING: Removing unreachable block (ram,0x000142f425ea) */
/* WARNING: Removing unreachable block (ram,0x000142f42587) */
/* WARNING: Removing unreachable block (ram,0x000142f42589) */
/* WARNING: Removing unreachable block (ram,0x000142f4258c) */
/* WARNING: Removing unreachable block (ram,0x000142f425b9) */
/* WARNING: Removing unreachable block (ram,0x000142f425c7) */
/* WARNING: Removing unreachable block (ram,0x000142f425cb) */
/* WARNING: Removing unreachable block (ram,0x000142f425ef) */
/* WARNING: Removing unreachable block (ram,0x000142f425f2) */
/* WARNING: Removing unreachable block (ram,0x000142f4247e) */
/* WARNING: Removing unreachable block (ram,0x000142f424c4) */
/* WARNING: Removing unreachable block (ram,0x000142f424ca) */
/* WARNING: Removing unreachable block (ram,0x000142f424cc) */
/* WARNING: Removing unreachable block (ram,0x000142f424b8) */
/* WARNING: Removing unreachable block (ram,0x000142f424b3) */
/* WARNING: Removing unreachable block (ram,0x000142f424bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 247 */

char * pdb_140359880(char *param_1,byte *param_2)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  char unaff_BL;
  undefined7 unaff_00000019;
  undefined8 uVar6;
  
  bVar2 = *param_2;
  pdb_14007ee60();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
    uVar6 = 4;
    pbVar4 = pub_1406abab0(4,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[0] = 0x4e;
      pbVar4[1] = 0x6f;
      pbVar4[2] = 0x6e;
      pbVar4[3] = 0x65;
code_r0x000140359930:
      *param_1 = '\x03';
      *(undefined8 *)(param_1 + 8) = uVar6;
      *(byte **)(param_1 + 0x10) = pbVar4;
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      return param_1;
    }
    goto code_r0x000140359949;
  case 1:
    uVar6 = 3;
    pbVar4 = pub_1406abab0(3,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[2] = 0x77;
      pbVar4[0] = 0x4c;
      pbVar4[1] = 0x6f;
      goto code_r0x000140359930;
    }
    goto code_r0x000140359967;
  case 2:
    uVar6 = 4;
    pbVar4 = pub_1406abab0(4,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[0] = 0x48;
      pbVar4[1] = 0x69;
      pbVar4[2] = 0x67;
      pbVar4[3] = 0x68;
      goto code_r0x000140359930;
    }
code_r0x000140359949:
    pdb_142dc7e2a(1,4);
code_r0x000140359958:
    pdb_142dc7e2a(1,6);
code_r0x000140359967:
    pdb_142dc7e2a(1,3);
    pcVar3 = (code *)swi(3);
    pcVar5 = (char *)(*pcVar3)();
    return pcVar5;
  case 3:
    uVar6 = 6;
    pbVar4 = pub_1406abab0(6,1);
    if (pbVar4 != (byte *)0x0) {
      pbVar4[4] = 0x65;
      pbVar4[5] = 0x6e;
      pbVar4[0] = 0x57;
      pbVar4[1] = 0x6f;
      pbVar4[2] = 0x6f;
      pbVar4[3] = 100;
      goto code_r0x000140359930;
    }
    goto code_r0x000140359958;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x0001403599d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar5 = (char *)(*(code *)(&UNK_142f42480 + *(int *)(&UNK_142f42480 + (longlong)param_2 * 4)))
                               (&UNK_142f42470 + *(int *)(&UNK_142f42470 + (ulonglong)bVar2 * 4),
                                &UNK_142f42480 + *(int *)(&UNK_142f42480 + (longlong)param_2 * 4));
    return pcVar5;
  case 5:
    pcVar5 = (char *)(ulonglong)(_UNK_142f42470 | 0x42f42470);
    *pcVar5 = *pcVar5 + (char)(_UNK_142f42470 | 0x42f42470);
    break;
  case 6:
    _UNK_142f42470 = CONCAT31(_UNK_142f42471,UNK_142f42470 + 0x70);
    pcVar5 = (char *)pdb_140f66090(&UNK_142f42470);
    return pcVar5;
  case 7:
    pcVar5 = (char *)CONCAT71(0x142f424,UNK_142f42470 | 0x70);
    *pcVar5 = *pcVar5 + (UNK_142f42470 | 0x70);
    break;
  case 8:
    pcVar5 = (char *)CONCAT71(0x142f424,UNK_142f42470 | 0x70);
    *pcVar5 = *pcVar5 + (UNK_142f42470 | 0x70);
    break;
  default:
    puVar1 = (uint *)((longlong)*(int *)(&UNK_142f42470 + (ulonglong)bVar2 * 4) + 0x3c8dc6d4d);
    *puVar1 = *puVar1 ^ (uint)param_1;
    _UNK_142f4245d = _UNK_142f4245d + 0x42f4245d;
    _UNK_142f4245e = (undefined3)((uint)_UNK_142f4245d >> 8);
    cRam0000000042f4245d = cRam0000000042f4245d + ']';
    UNK_142f4245d = UNK_142f4245d + '\x17';
    *param_1 = *param_1 + unaff_BL;
    _UNK_142f4245d = CONCAT31(_UNK_142f4245e,UNK_142f4245d + ']');
    pcVar5 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + 0x72);
    *pcVar5 = *pcVar5 + '$';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar5 = (char *)(**(code **)(*(longlong *)(pcVar5 + 8) + 0x18))(*(undefined8 *)pcVar5);
  return pcVar5;
}

