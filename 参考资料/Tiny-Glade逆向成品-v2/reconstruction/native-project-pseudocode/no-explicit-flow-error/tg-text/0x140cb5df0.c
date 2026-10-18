// VA 0x140cb5df0, PDB extent 27 bytes
// tg_text::TextFragment::set_max_width
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::set_max_width
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 27 */

void pdb_140cb5df0(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *arg0;
  ulonglong uVar3;
  byte *arg1;
  byte *pbVar4;
  bool bVar5;
  
  if ((param_2 == *(float *)(param_1 + 0x248)) &&
     (!NAN(param_2) && !NAN(*(float *)(param_1 + 0x248)))) {
    return;
  }
  *(float *)(param_1 + 0x248) = param_2;
  uVar3 = *(longlong *)(param_1 + 0x38) >> 0x3f &
          *(longlong *)(param_1 + 0x38) + 0x8000000000000001U;
  if (uVar3 == 0) {
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  else if (uVar3 == 1) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x138) = 1;
  }
  else {
    LOCK();
    bVar5 = **(longlong **)(param_1 + 0x40) == 1;
    if (bVar5) {
      **(longlong **)(param_1 + 0x40) = 0;
    }
    UNLOCK();
    puVar1 = (undefined8 *)(param_1 + 0x40);
    arg0 = *(byte **)(param_1 + 0x40);
    if (bVar5) {
      if (*(longlong *)(arg0 + 8) == 1) {
        arg0[0] = 1;
        arg0[1] = 0;
        arg0[2] = 0;
        arg0[3] = 0;
        arg0[4] = 0;
        arg0[5] = 0;
        arg0[6] = 0;
        arg0[7] = 0;
        pbVar4 = arg0;
      }
      else {
        pbVar2 = arg0 + 8;
        uVar3 = 0x140;
        arg1 = (byte *)pdb_140f606e0(8);
        pbVar4 = arg1;
        if (uVar3 != 0) {
          pdb_14007ee60();
          pbVar4 = pub_1406abab0(uVar3,(ulonglong)arg1);
        }
        if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(arg1,uVar3);
        }
        pbVar4[0] = 1;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        pbVar4[8] = 1;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        pub_142e32760(pbVar4 + 0x10,arg0 + 0x10,0x140);
        *puVar1 = pbVar4;
        if (arg0 != (byte *)0xffffffffffffffff) {
          LOCK();
          *(longlong *)pbVar2 = *(longlong *)pbVar2 + -1;
          UNLOCK();
          if (*(longlong *)pbVar2 == 0) {
            pub_1406abac0(arg0,0x150,8);
          }
        }
      }
    }
    else {
      pbVar4 = (byte *)pdb_140cb5540(arg0 + 0x10);
      LOCK();
      *(longlong *)arg0 = *(longlong *)arg0 + -1;
      UNLOCK();
      if (*(longlong *)arg0 == 0) {
        pdb_140cbfb70(puVar1);
      }
      *puVar1 = pbVar4;
    }
    pbVar4[0x148] = 1;
  }
  return;
}

