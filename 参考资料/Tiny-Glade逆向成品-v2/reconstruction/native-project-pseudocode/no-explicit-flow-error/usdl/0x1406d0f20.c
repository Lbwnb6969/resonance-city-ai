// VA 0x1406d0f20, PDB extent 404 bytes
// usdl::video::WindowBuilder::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::video::WindowBuilder::build
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 404 */

longlong * pdb_1406d0f20(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lStack_50;
  byte *pbStack_48;
  ulonglong uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140f60950(&lStack_50,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (SBORROW8(0,lStack_50)) {
    uVar4 = 0x1fff0000;
    uVar3 = 0x1fff0000;
    if (*(char *)(param_2 + 0x18) != '\0') {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
    }
    uStack_30 = uStack_40;
    if (*(char *)(param_2 + 0x20) != '\0') {
      uVar4 = *(undefined4 *)(param_2 + 0x24);
    }
    pbStack_28 = pbStack_48;
    lVar2 = pdb_14100acc0(pbStack_48,uVar3,uVar4,*(undefined4 *)(param_2 + 0x28),
                          *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30));
    if (lVar2 == 0) {
      pdb_1406d0840(&pbStack_48);
      param_1[2] = uStack_40;
      param_1[3] = lStack_38;
      *param_1 = -0x8000000000000000;
      param_1[1] = (longlong)pbStack_48;
    }
    else {
      LOCK();
      iVar1 = _DAT_143cb2be4 + 1;
      UNLOCK();
      if (_DAT_143cb2be4 == 0) {
        _DAT_143cb2be4 = iVar1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142f99e39,0x71,&UNK_142f99e78);
      }
      LOCK();
      UNLOCK();
      if (_DAT_143cb2bdc == 0) {
        _DAT_143cb2bdc = _DAT_143cb2bdc + 1;
        _DAT_143cb2be4 = iVar1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_142f99db7,0x53,&UNK_142f99df8);
      }
      _DAT_143cb2bdc = _DAT_143cb2bdc + 1;
      _DAT_143cb2be4 = iVar1;
      param_1[1] = lVar2;
      *param_1 = -0x7fffffffffffffff;
    }
    *pbStack_28 = 0;
    if (uStack_30 != 0) {
      pub_1406abac0(pbStack_28,uStack_30,1);
    }
  }
  else {
    *param_1 = lStack_50;
    param_1[1] = (longlong)pbStack_48;
    param_1[2] = uStack_40;
    param_1[3] = lStack_38;
  }
  return param_1;
}

