// VA 0x1417ca880, PDB extent 5 bytes
// turbosloth::id::impl$1::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/id.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::id::impl$1::default
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/id.rs
   Extent: 5 */

undefined8 * pdb_1417ca880(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0xc0,1);
  if (pbVar3 != (byte *)0x0) {
    pub_142e32760(pbVar3,&UNK_1435167a0,0xc0);
    pub_142e32780(param_1 + 2,0,0x108);
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    *param_1 = pbVar3;
    param_1[1] = 0xc0;
    param_1[0x23] = 0;
    uVar2 = _UNK_143516868;
    param_1[0x24] = _UNK_143516860;
    param_1[0x25] = uVar2;
    uVar2 = _UNK_143516878;
    param_1[0x26] = _UNK_143516870;
    param_1[0x27] = uVar2;
    uVar2 = _UNK_143516888;
    param_1[0x28] = _UNK_143516880;
    param_1[0x29] = uVar2;
    uVar2 = _UNK_143516898;
    param_1[0x2a] = _UNK_143516890;
    param_1[0x2b] = uVar2;
    return param_1;
  }
  pdb_142dc7e2a(1,0xc0);
  pcVar1 = (code *)swi(3);
  puVar4 = (undefined8 *)(*pcVar1)();
  return puVar4;
}

