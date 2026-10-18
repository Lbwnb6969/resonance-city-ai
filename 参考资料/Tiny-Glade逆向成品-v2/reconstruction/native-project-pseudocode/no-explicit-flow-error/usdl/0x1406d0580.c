// VA 0x1406d0580, PDB extent 173 bytes
// usdl::sdl::Sdl::event_pump
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::sdl::Sdl::event_pump
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
   Extent: 173 */

undefined8 * pdb_1406d0580(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  
  cVar3 = DAT_143cb2be0;
  LOCK();
  DAT_143cb2be0 = 1;
  UNLOCK();
  if (cVar3 == '\0') {
    LOCK();
    UNLOCK();
    if (_DAT_143cb2bdc != 0) {
      _DAT_143cb2bdc = _DAT_143cb2bdc + 1;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    _DAT_143cb2bdc = _DAT_143cb2bdc + 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142f99db7,0x53,&UNK_142f99df8);
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x1d,1);
  uVar2 = _UNK_142f99d9d;
  if (pbVar4 != (byte *)0x0) {
    *(ulonglong *)(pbVar4 + 0xd) = CONCAT53(_UNK_142f99d98,_DAT_142f99d95);
    *(undefined8 *)(pbVar4 + 0x15) = uVar2;
    uVar2 = CONCAT35(_DAT_142f99d95,_UNK_142f99d90);
    *(undefined8 *)pbVar4 = _DAT_142f99d88;
    *(undefined8 *)(pbVar4 + 8) = uVar2;
    *param_1 = 0x1d;
    param_1[1] = pbVar4;
    param_1[2] = 0x1d;
    return param_1;
  }
  pdb_142dc7e2a(1,0x1d);
  pcVar1 = (code *)swi(3);
  puVar5 = (undefined8 *)(*pcVar1)();
  return puVar5;
}

