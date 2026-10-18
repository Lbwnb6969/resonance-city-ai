// VA 0x1406d1450, PDB extent 347 bytes
// usdl::video::VideoSubsystem::window
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl::video::VideoSubsystem::window
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 347 */

ulonglong *
pdb_1406d1450(ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
             undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar5 = param_4 == 0;
  uVar4 = param_3;
  if (-1 < (longlong)param_4) goto LAB_1406d147e;
  uVar5 = true;
  puVar2 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar2;
    pdb_142dc7e2a(param_1,param_4);
    uVar4 = param_3;
LAB_1406d147e:
    if ((bool)uVar5) break;
    param_3 = uVar4;
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(param_4,1);
    uVar5 = pbVar3 == (byte *)0x0;
    puVar2 = (ulonglong *)0x1;
    if (!(bool)uVar5) {
      pub_142e32760(pbVar3,uVar4,param_4);
LAB_1406d14be:
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
      if (_DAT_143cb2bdc != 0) {
        _DAT_143cb2bdc = _DAT_143cb2bdc + 1;
        _DAT_143cb2be4 = iVar1;
        *param_1 = param_4;
        param_1[1] = (ulonglong)pbVar3;
        param_1[2] = param_4;
        *(undefined4 *)(param_1 + 5) = param_5;
        *(undefined4 *)((longlong)param_1 + 0x2c) = param_6;
        *(undefined4 *)(param_1 + 3) = 0;
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 6) = 0;
        return param_1;
      }
      _DAT_143cb2bdc = _DAT_143cb2bdc + 1;
      _DAT_143cb2be4 = iVar1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142f99db7,0x53,&UNK_142f99df8);
    }
  }
  pbVar3 = (byte *)0x1;
  goto LAB_1406d14be;
}

