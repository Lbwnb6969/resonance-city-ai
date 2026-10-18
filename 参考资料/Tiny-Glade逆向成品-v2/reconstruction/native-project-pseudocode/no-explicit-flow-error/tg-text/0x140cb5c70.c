// VA 0x140cb5c70, PDB extent 29 bytes
// tg_text::TextFragment::set_weight
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::set_weight
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 29 */

void pdb_140cb5c70(longlong param_1,short param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte *arg0;
  ulonglong uVar6;
  byte *arg1;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_100 [72];
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined8 uStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  if (param_2 == *(short *)(param_1 + 0x22c)) {
    return;
  }
  *(short *)(param_1 + 0x22c) = param_2;
  plVar1 = (longlong *)(param_1 + 0x200);
  uStack_60 = 0xfffffffffffffffe;
  uVar6 = *(longlong *)(param_1 + 0x38) >> 0x3f &
          *(longlong *)(param_1 + 0x38) + 0x8000000000000001U;
  if (uVar6 == 0) {
    pbStack_78 = (byte *)param_1;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x48) * 0xb0;
      uVar2 = *(undefined8 *)(param_1 + 0x218);
      pbStack_80 = *(byte **)(param_1 + 0x208);
      pbStack_70 = (byte *)(*plVar1 >> 0x3f & *plVar1 + 0x8000000000000001U);
      uStack_88 = *(undefined8 *)(param_1 + 0x210);
      uStack_62 = *(undefined1 *)(param_1 + 0x22f);
      uStack_61 = *(undefined1 *)(param_1 + 0x22e);
      uVar3 = *(undefined2 *)(param_1 + 0x22c);
      uVar5 = *(undefined8 *)(param_1 + 0x220);
      uVar4 = *(undefined4 *)(param_1 + 0x228);
      lVar8 = *(longlong *)(param_1 + 0x40);
      do {
        uStack_b8 = (ulonglong)pbStack_70;
        uStack_b0 = pbStack_80;
        uStack_a8 = uStack_88;
        uStack_89 = uStack_62;
        uStack_8a = uStack_61;
        uStack_a0 = uVar2;
        uStack_98 = uVar5;
        uStack_90 = uVar4;
        uStack_8c = uVar3;
        pdb_140cb9ba0(auStack_100,&uStack_b8);
        pdb_141cc6670(lVar8,auStack_100);
        lVar9 = lVar9 + -0xb0;
        lVar8 = lVar8 + 0xb0;
      } while (lVar9 != 0);
    }
    *(undefined1 *)((longlong)pbStack_78 + 0x170) = 1;
  }
  else if (uVar6 == 1) {
    pbStack_78 = *(byte **)(param_1 + 0x40);
    if (*(longlong *)((longlong)pbStack_78 + 0x10) != 0) {
      lVar9 = *(longlong *)((longlong)pbStack_78 + 0x10) * 0xb0;
      uVar2 = *(undefined8 *)(param_1 + 0x218);
      pbStack_80 = *(byte **)(param_1 + 0x208);
      pbStack_70 = (byte *)(*plVar1 >> 0x3f & *plVar1 + 0x8000000000000001U);
      uStack_88 = *(undefined8 *)(param_1 + 0x210);
      uStack_62 = *(undefined1 *)(param_1 + 0x22f);
      uStack_61 = *(undefined1 *)(param_1 + 0x22e);
      uVar3 = *(undefined2 *)(param_1 + 0x22c);
      uVar5 = *(undefined8 *)(param_1 + 0x220);
      uVar4 = *(undefined4 *)(param_1 + 0x228);
      lVar8 = *(longlong *)((longlong)pbStack_78 + 8);
      do {
        uStack_b8 = (ulonglong)pbStack_70;
        uStack_b0 = pbStack_80;
        uStack_a8 = uStack_88;
        uStack_89 = uStack_62;
        uStack_8a = uStack_61;
        uStack_a0 = uVar2;
        uStack_98 = uVar5;
        uStack_90 = uVar4;
        uStack_8c = uVar3;
        pdb_140cb9ba0(auStack_100,&uStack_b8);
        pdb_141cc6670(lVar8,auStack_100);
        lVar9 = lVar9 + -0xb0;
        lVar8 = lVar8 + 0xb0;
      } while (lVar9 != 0);
    }
    *(undefined1 *)((longlong)pbStack_78 + 0x138) = 1;
  }
  else {
    LOCK();
    bVar10 = **(longlong **)(param_1 + 0x40) == 1;
    if (bVar10) {
      **(longlong **)(param_1 + 0x40) = 0;
    }
    UNLOCK();
    pbVar7 = *(byte **)(param_1 + 0x40);
    if (bVar10) {
      if (*(longlong *)(pbVar7 + 8) == 1) {
        pbVar7[0] = 1;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7[4] = 0;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
      }
      else {
        pbStack_80 = pbVar7 + 8;
        uVar6 = 0x140;
        pbStack_70 = pbVar7;
        arg1 = (byte *)pdb_140f606e0(8);
        pbVar7 = arg1;
        arg0 = pbStack_70;
        if (uVar6 != 0) {
          pdb_14007ee60();
          pbVar7 = pub_1406abab0(uVar6,(ulonglong)arg1);
          arg0 = pbStack_70;
        }
        pbStack_70 = arg0;
        if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(arg1,uVar6);
        }
        pbVar7[0] = 1;
        pbVar7[1] = 0;
        pbVar7[2] = 0;
        pbVar7[3] = 0;
        pbVar7[4] = 0;
        pbVar7[5] = 0;
        pbVar7[6] = 0;
        pbVar7[7] = 0;
        pbVar7[8] = 1;
        pbVar7[9] = 0;
        pbVar7[10] = 0;
        pbVar7[0xb] = 0;
        pbVar7[0xc] = 0;
        pbVar7[0xd] = 0;
        pbVar7[0xe] = 0;
        pbVar7[0xf] = 0;
        pub_142e32760(pbVar7 + 0x10,arg0 + 0x10,0x140);
        *(byte **)(param_1 + 0x40) = pbVar7;
        if (arg0 != (byte *)0xffffffffffffffff) {
          LOCK();
          *(longlong *)pbStack_80 = *(longlong *)pbStack_80 + -1;
          UNLOCK();
          if (*(longlong *)pbStack_80 == 0) {
            pub_1406abac0(arg0,0x150,8);
          }
        }
      }
    }
    else {
      pbStack_70 = (byte *)(param_1 + 0x40);
      pbStack_78 = (byte *)pdb_140cb5540(pbVar7 + 0x10);
      LOCK();
      *(longlong *)pbVar7 = *(longlong *)pbVar7 + -1;
      UNLOCK();
      if (*(longlong *)pbVar7 == 0) {
        pdb_140cbfb70(pbStack_70);
      }
      *(byte **)pbStack_70 = pbStack_78;
      pbVar7 = pbStack_78;
    }
    pbStack_78 = pbVar7;
    if (*(longlong *)(pbVar7 + 0x20) != 0) {
      lVar9 = *(longlong *)(pbVar7 + 0x20) * 0xb0;
      uVar2 = *(undefined8 *)(param_1 + 0x218);
      pbStack_80 = *(byte **)(param_1 + 0x208);
      pbStack_70 = (byte *)(*plVar1 >> 0x3f & *plVar1 + 0x8000000000000001U);
      uStack_88 = *(undefined8 *)(param_1 + 0x210);
      uStack_62 = *(undefined1 *)(param_1 + 0x22f);
      uStack_61 = *(undefined1 *)(param_1 + 0x22e);
      uVar3 = *(undefined2 *)(param_1 + 0x22c);
      uVar5 = *(undefined8 *)(param_1 + 0x220);
      uVar4 = *(undefined4 *)(param_1 + 0x228);
      lVar8 = *(longlong *)(pbVar7 + 0x18);
      do {
        uStack_b8 = (ulonglong)pbStack_70;
        uStack_b0 = pbStack_80;
        uStack_a8 = uStack_88;
        uStack_89 = uStack_62;
        uStack_8a = uStack_61;
        uStack_a0 = uVar2;
        uStack_98 = uVar5;
        uStack_90 = uVar4;
        uStack_8c = uVar3;
        pdb_140cb9ba0(auStack_100,&uStack_b8);
        pdb_141cc6670(lVar8,auStack_100);
        lVar9 = lVar9 + -0xb0;
        lVar8 = lVar8 + 0xb0;
      } while (lVar9 != 0);
    }
    pbStack_78[0x148] = 1;
  }
  return;
}

