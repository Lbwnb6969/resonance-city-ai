// VA 0x140b15430, PDB extent 1470 bytes
// country_core::resources::stairs::visual::StairsVisualState::remove_edge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/visual.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::visual::StairsVisualState::remove_edge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/visual.rs
   Extent: 1470 */

void pdb_140b15430(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong arg1;
  byte *pbVar9;
  longlong lVar10;
  byte *arg0;
  byte *pbVar11;
  byte *pbStack_318;
  byte *pbStack_310;
  longlong lStack_308;
  byte *pbStack_300;
  byte *pbStack_2f8;
  byte *pbStack_2f0;
  longlong lStack_2e8;
  byte *pbStack_2e0;
  longlong lStack_1d8;
  byte *pbStack_1d0;
  longlong lStack_1c8;
  longlong lStack_1c0;
  byte *pbStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  byte *pbStack_1a0;
  longlong lStack_190;
  byte *pbStack_188;
  undefined1 auStack_178 [72];
  longlong lStack_130;
  byte *pbStack_128;
  longlong lStack_118;
  byte *pbStack_110;
  longlong lStack_100;
  longlong lStack_f8;
  longlong alStack_d0 [2];
  longlong alStack_c0 [4];
  byte *pbStack_a0;
  ulonglong uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte *pbStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_90 = param_2;
  uStack_8c = param_3;
  uVar7 = pdb_1400af680(param_1 + 0x20,&uStack_90);
  pdb_140caa7a0(&pbStack_318,param_1,uVar7,&uStack_90);
  if (!SBORROW8(0,(longlong)pbStack_310)) {
    pub_142e32760(&lStack_1d8,&pbStack_310,0x138);
    lVar3 = lStack_1c8;
    lStack_70 = lStack_1d8;
    if (!SBORROW8(0,lStack_1d8)) {
      pbStack_88 = pbStack_1d0;
      lStack_78 = lStack_1c0;
      pbStack_80 = pbStack_1b8;
      if (alStack_d0[0] != 0) {
        pdb_140977610(alStack_d0);
      }
      if (alStack_c0[0] != 0) {
        pdb_140977610(alStack_c0);
      }
      if (lStack_f8 != 0) {
        uVar8 = lStack_f8 * 2 + 0x11U & 0xfffffffffffffff0;
        arg1 = lStack_f8 + uVar8 + 0x11;
        if (arg1 != 0) {
          pub_1406abac0((byte *)(lStack_100 - uVar8),arg1,0x10);
        }
      }
      if (lStack_1a8 != 0) {
        pub_1406abac0(pbStack_1a0,lStack_1a8 << 4,0x10);
      }
      if (lStack_190 != 0) {
        pub_1406abac0(pbStack_188,lStack_190 * 0x18,8);
      }
      pdb_140997870(auStack_178);
      if (lStack_130 != 0) {
        pub_1406abac0(pbStack_128,lStack_130 * 0x2c,4);
      }
      if (lStack_118 != 0) {
        pub_1406abac0(pbStack_110,lStack_118 << 5,4);
      }
      *(undefined1 *)(param_1 + 0x30) = 1;
      pbVar1 = pbStack_88 + lVar3 * 8;
      pbStack_2e0 = pbStack_80 + lStack_1b0 * 8;
      pbVar2 = (byte *)param_4[3];
      lVar3 = param_4[2];
      pbVar4 = (byte *)*param_4;
      lVar5 = param_4[1];
      uStack_98 = lStack_70 * 8;
      pbStack_300 = pbVar1;
      pbStack_a0 = pbStack_2e0;
      pbStack_318 = pbStack_88;
      pbStack_310 = pbStack_88;
      lStack_308 = lStack_70;
      pbStack_2f8 = pbStack_80;
      pbStack_2f0 = pbStack_80;
      lStack_2e8 = lStack_78;
      arg0 = pbStack_88;
      pbVar11 = pbStack_88;
      pbVar6 = pbStack_80;
      do {
        if (arg0 == (byte *)0x0) {
LAB_140b156d3:
          if (pbVar6 == pbStack_a0) {
LAB_140b15749:
            if (lStack_2e8 == 0) {
              return;
            }
            pub_1406abac0(pbStack_80,lStack_2e8 << 3,8);
            return;
          }
          pbVar9 = pbVar6 + 8;
          lVar10 = *(longlong *)pbVar6;
          pbStack_2f0 = pbVar9;
          if ((int)lVar10 == 0) goto LAB_140b15749;
          arg0 = (byte *)0x0;
        }
        else {
          pbVar9 = pbVar6;
          if (pbVar11 == pbVar1) {
            lVar10 = 0;
            pbVar11 = pbVar1;
joined_r0x000140b1573e:
            if (lStack_70 != 0) {
              pub_1406abac0(arg0,uStack_98,8);
            }
            pbStack_318 = (byte *)0x0;
            if ((int)lVar10 == 0) goto LAB_140b156d3;
            arg0 = (byte *)0x0;
          }
          else {
            pbStack_310 = pbVar11 + 8;
            lVar10 = *(longlong *)pbVar11;
            pbVar11 = pbStack_310;
            if ((int)lVar10 == 0) goto joined_r0x000140b1573e;
          }
        }
        lStack_1d8 = lVar10;
        pbStack_1d0 = pbVar4;
        lStack_1c8 = lVar5;
        lStack_1c0 = lVar3;
        pbStack_1b8 = pbVar2;
        pdb_140f04aa0(&lStack_1d8,&UNK_1430551f8);
        pbVar6 = pbVar9;
      } while( true );
    }
  }
  return;
}

