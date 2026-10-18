// VA 0x1418c4050, PDB extent 489 bytes
// country_core::resources::rt::DirtyCow::get_mut<country_core::resources::rt::RtMesh>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::rt::DirtyCow::get_mut<country_core::resources::rt::RtMesh>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
   Extent: 489 */

byte * pdb_1418c4050(undefined8 *param_1)

{
  byte *pbVar1;
  byte *arg0;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *arg1;
  byte *pbVar9;
  ulonglong arg0_00;
  bool bVar10;
  
  *(undefined1 *)(param_1 + 1) = 1;
  LOCK();
  bVar10 = *(longlong *)*param_1 == 1;
  if (bVar10) {
    *(longlong *)*param_1 = 0;
  }
  UNLOCK();
  arg0 = (byte *)*param_1;
  if (bVar10) {
    if (*(longlong *)(arg0 + 8) == 1) {
      arg0[0] = 1;
      arg0[1] = 0;
      arg0[2] = 0;
      arg0[3] = 0;
      arg0[4] = 0;
      arg0[5] = 0;
      arg0[6] = 0;
      arg0[7] = 0;
      pbVar9 = arg0;
    }
    else {
      pbVar1 = arg0 + 8;
      arg0_00 = 0x60;
      arg1 = (byte *)pdb_140f606e0(0x10);
      pbVar9 = arg1;
      if (arg0_00 != 0) {
        pdb_14007ee60();
        pbVar9 = pub_1406abab0(arg0_00,(ulonglong)arg1);
      }
      if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(arg1,arg0_00);
      }
      pbVar9[0] = 1;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      pbVar9[8] = 1;
      pbVar9[9] = 0;
      pbVar9[10] = 0;
      pbVar9[0xb] = 0;
      pbVar9[0xc] = 0;
      pbVar9[0xd] = 0;
      pbVar9[0xe] = 0;
      pbVar9[0xf] = 0;
      uVar2 = *(undefined8 *)(arg0 + 0x18);
      uVar3 = *(undefined8 *)(arg0 + 0x20);
      uVar4 = *(undefined8 *)(arg0 + 0x28);
      uVar5 = *(undefined8 *)(arg0 + 0x30);
      uVar6 = *(undefined8 *)(arg0 + 0x38);
      uVar7 = *(undefined8 *)(arg0 + 0x40);
      uVar8 = *(undefined8 *)(arg0 + 0x48);
      *(undefined8 *)(pbVar9 + 0x10) = *(undefined8 *)(arg0 + 0x10);
      *(undefined8 *)(pbVar9 + 0x18) = uVar2;
      *(undefined8 *)(pbVar9 + 0x20) = uVar3;
      *(undefined8 *)(pbVar9 + 0x28) = uVar4;
      *(undefined8 *)(pbVar9 + 0x30) = uVar5;
      *(undefined8 *)(pbVar9 + 0x38) = uVar6;
      *(undefined8 *)(pbVar9 + 0x40) = uVar7;
      *(undefined8 *)(pbVar9 + 0x48) = uVar8;
      uVar2 = *(undefined8 *)(arg0 + 0x58);
      *(undefined8 *)(pbVar9 + 0x50) = *(undefined8 *)(arg0 + 0x50);
      *(undefined8 *)(pbVar9 + 0x58) = uVar2;
      uVar2 = *(undefined8 *)(arg0 + 0x68);
      *(undefined8 *)(pbVar9 + 0x60) = *(undefined8 *)(arg0 + 0x60);
      *(undefined8 *)(pbVar9 + 0x68) = uVar2;
      *param_1 = pbVar9;
      if (arg0 != (byte *)0xffffffffffffffff) {
        LOCK();
        *(longlong *)pbVar1 = *(longlong *)pbVar1 + -1;
        UNLOCK();
        if (*(longlong *)pbVar1 == 0) {
          pub_1406abac0(arg0,0x70,0x10);
        }
      }
    }
  }
  else {
    pbVar9 = (byte *)pdb_140c79c00(arg0 + 0x10);
    LOCK();
    *(longlong *)arg0 = *(longlong *)arg0 + -1;
    UNLOCK();
    if (*(longlong *)arg0 == 0) {
      pdb_140c7b740(param_1);
    }
    *param_1 = pbVar9;
  }
  return pbVar9 + 0x10;
}

