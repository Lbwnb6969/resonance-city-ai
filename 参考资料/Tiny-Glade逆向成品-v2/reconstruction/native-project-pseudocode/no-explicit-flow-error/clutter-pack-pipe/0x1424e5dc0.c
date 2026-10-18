// VA 0x1424e5dc0, PDB extent 2132 bytes
// clutter_pack_pipe::impl$31::deserialize<rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clutter_pack_pipe::impl$31::deserialize<rancor::Strategy<rkyv::de::pooling::alloc::Pool,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 2132 */

ulonglong * pdb_1424e5dc0(ulonglong *param_1,int *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  bool bVar5;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_58 = (ulonglong)(uint)param_2[1];
  uVar1 = uStack_58 * 4;
  pbStack_60 = (byte *)0x4;
  pbVar4 = (byte *)0x4;
  if (uStack_58 != 0) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(uVar1,4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,uVar1);
    }
    pub_142e32760(pbVar4,(longlong)*param_2 + (longlong)param_2,uVar1);
  }
  uStack_68 = (ulonglong)(uint)param_2[3];
  uVar2 = uStack_68 * 0xc;
  uStack_c0 = uVar1;
  pbStack_50 = pbVar4;
  if (uStack_68 != 0) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(uVar2,4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,uVar2);
    }
    pbStack_60 = pbVar4;
    pub_142e32760(pbVar4,(longlong)param_2[2] + (longlong)(param_2 + 2),
                  ((uVar2 - 0xc) / 0xc) * 0xc + 0xc);
  }
  uStack_80 = (ulonglong)(uint)param_2[5];
  uVar1 = uStack_80 * 0xc;
  pbStack_88 = (byte *)0x4;
  pbVar4 = (byte *)0x4;
  uStack_f8 = param_3;
  uStack_70 = uVar2;
  if (uStack_80 != 0) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(uVar1,4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,uVar1);
    }
    pub_142e32760(pbVar4,(longlong)param_2[4] + (longlong)(param_2 + 4),
                  ((uVar1 - 0xc) / 0xc) * 0xc + 0xc);
  }
  uVar3 = (ulonglong)(uint)param_2[7];
  uVar2 = uVar3 * 0xc;
  uStack_90 = uVar1;
  pbStack_78 = pbVar4;
  if (uVar3 != 0) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(uVar2,4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,uVar2);
    }
    pbStack_88 = pbVar4;
    pub_142e32760(pbVar4,(longlong)param_2[6] + (longlong)(param_2 + 6),
                  ((uVar2 - 0xc) / 0xc) * 0xc + 0xc);
  }
  uStack_b0 = (ulonglong)(uint)param_2[9];
  uVar1 = uStack_b0 * 8;
  pbStack_b8 = (byte *)0x4;
  pbStack_a0 = (byte *)0x4;
  uStack_a8 = uVar2;
  uStack_98 = uVar3;
  if (uStack_b0 != 0) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(uVar1,4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,uVar1);
    }
    pbStack_a0 = pbVar4;
    pub_142e32760(pbVar4,(longlong)param_2[8] + (longlong)(param_2 + 8),uVar1);
  }
  uVar3 = (ulonglong)(uint)param_2[0xb];
  uVar2 = uVar3 * 4;
  uStack_c8 = uVar1;
  if (uVar3 != 0) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(uVar2,4);
    if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,uVar2);
    }
    pbStack_b8 = pbVar4;
    pub_142e32760(pbVar4,(longlong)param_2[10] + (longlong)(param_2 + 10),uVar2);
  }
  uStack_d8 = uVar2;
  uStack_d0 = uVar3;
  pdb_1417c3980(&uStack_110,param_2 + 0xc);
  pbVar4 = pbStack_50;
  uVar1 = uStack_58;
  if (SBORROW8(0,uStack_110)) {
    *param_1 = 0x8000000000000000;
    if ((int)uStack_d0 != 0) {
      pub_1406abac0(pbStack_b8,uStack_d8,4);
    }
    uVar3 = uStack_90;
    uVar2 = uStack_a8;
    if ((int)uStack_b0 != 0) {
      pub_1406abac0(pbStack_a0,uStack_c8,4);
    }
    if ((int)uStack_98 != 0) {
      pub_1406abac0(pbStack_88,uVar2,4);
    }
    if ((int)uStack_80 != 0) {
      pub_1406abac0(pbStack_78,uVar3,4);
    }
    if ((int)uStack_68 != 0) {
      pub_1406abac0(pbStack_60,uStack_70,4);
    }
    if ((int)uVar1 != 0) {
      pub_1406abac0(pbVar4,uVar1 * 4,4);
    }
  }
  else {
    bVar5 = (char)param_2[0xe] == '\x01';
    if (bVar5) {
      iStack_dc = param_2[0x14];
      uStack_e4 = (undefined4)*(undefined8 *)(param_2 + 0x12);
      uStack_e0 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x12) >> 0x20);
      uStack_f0 = *(undefined8 *)(param_2 + 0xf);
      iStack_e8 = param_2[0x11];
    }
    *(ulonglong *)((longlong)param_1 + 0xbc) = CONCAT44(iStack_dc,uStack_e0);
    *(undefined8 *)((longlong)param_1 + 0xac) = uStack_f0;
    *(int *)((longlong)param_1 + 0xb4) = iStack_e8;
    *(undefined4 *)(param_1 + 0x17) = uStack_e4;
    *param_1 = uStack_58;
    param_1[1] = (ulonglong)pbStack_50;
    param_1[2] = uStack_58;
    param_1[3] = uStack_68;
    param_1[4] = (ulonglong)pbStack_60;
    param_1[5] = uStack_68;
    param_1[6] = uStack_80;
    param_1[7] = (ulonglong)pbStack_78;
    param_1[8] = uStack_80;
    param_1[9] = uStack_98;
    param_1[10] = (ulonglong)pbStack_88;
    param_1[0xb] = uStack_98;
    param_1[0xc] = uStack_b0;
    param_1[0xd] = (ulonglong)pbStack_a0;
    param_1[0xe] = uStack_b0;
    param_1[0xf] = uStack_d0;
    param_1[0x10] = (ulonglong)pbStack_b8;
    param_1[0x11] = uStack_d0;
    param_1[0x12] = uStack_110;
    param_1[0x13] = uStack_108;
    param_1[0x14] = uStack_100;
    *(uint *)(param_1 + 0x15) = (uint)bVar5;
  }
  return param_1;
}

