// VA 0x1406d0840, PDB extent 281 bytes
// usdl::sdl::get_error
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::sdl::get_error
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/sdl.rs
   Extent: 281 */

ulonglong * pdb_1406d0840(ulonglong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  
  lVar2 = pdb_14100a640();
  if ((lVar2 != 0) && (lVar3 = pub_142e32b70(lVar2), lVar3 != 0)) {
    pdb_140f5e160(&uStack_40,lVar2,lVar3);
    if (!SBORROW8(0,uStack_40)) {
      param_1[2] = uStack_30;
      *param_1 = uStack_40;
      param_1[1] = uStack_38;
      return param_1;
    }
    if ((longlong)uStack_30 < 0) {
      uVar6 = 0;
    }
    else {
      if (uStack_30 == 0) {
        pbVar4 = (byte *)0x1;
LAB_1406d092f:
        *param_1 = uStack_30;
        param_1[1] = (ulonglong)pbVar4;
        param_1[2] = uStack_30;
        return param_1;
      }
      pdb_14007ee60();
      uVar6 = 1;
      pbVar4 = pub_1406abab0(uStack_30,1);
      if (pbVar4 != (byte *)0x0) {
        pub_142e32760(pbVar4,uStack_38,uStack_30);
        goto LAB_1406d092f;
      }
    }
    pdb_142dc7e2a(uVar6,uStack_30);
  }
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x12,1);
  uVar6 = _UNK_142f99dad;
  if (pbVar4 != (byte *)0x0) {
    *(undefined8 *)pbVar4 = _DAT_142f99da5;
    *(undefined8 *)(pbVar4 + 8) = uVar6;
    pbVar4[0x10] = 0x6f;
    pbVar4[0x11] = 0x72;
    *param_1 = 0x12;
    param_1[1] = (ulonglong)pbVar4;
    param_1[2] = 0x12;
    return param_1;
  }
  pdb_142dc7e2a(1,0x12);
  pcVar1 = (code *)swi(3);
  puVar5 = (ulonglong *)(*pcVar1)();
  return puVar5;
}

