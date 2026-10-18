// VA 0x140a07fe0, PDB extent 734 bytes
// country_core::systems::ui::debug_visualize_volumes::debug_visualize_volumes::closure$4
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/debug_visualize_volumes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::debug_visualize_volumes::debug_visualize_volumes::closure$4
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/debug_visualize_volumes.rs
   Extent: 734 */

undefined8 *
pdb_140a07fe0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 auStack_110 [2];
  longlong *plStack_100;
  longlong *plStack_f8;
  undefined8 uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  ulonglong uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined2 uStack_64;
  undefined1 uStack_62;
  byte *pbStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(8,8);
  if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbVar8 = pub_1406abab0(0x18,4);
  pbStack_48 = pbVar7;
  if (pbVar8 != (byte *)0x0) {
    fVar1 = *(float *)((longlong)param_2 + 0x14);
    fVar2 = *(float *)(param_2 + 1);
    uVar3 = *(undefined8 *)((longlong)param_2 + 0xc);
    uVar4 = *param_2;
    *(undefined4 *)(pbVar8 + 8) = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)pbVar8 = *param_2;
    *(ulonglong *)(pbVar8 + 0xc) =
         CONCAT44((float)((ulonglong)uVar4 >> 0x20) + (float)((ulonglong)uVar3 >> 0x20),
                  (float)uVar4 + (float)uVar3);
    *(float *)(pbVar8 + 0x14) = fVar1 + fVar2;
    pdb_14007ee60();
    pbStack_c8 = pub_1406abab0(0x18,4);
    uVar3 = _UNK_1430348e8;
    if (pbStack_c8 != (byte *)0x0) {
      *(undefined8 *)pbStack_c8 = _DAT_1430348e0;
      *(undefined8 *)(pbStack_c8 + 8) = uVar3;
      *(undefined8 *)(pbStack_c8 + 0x10) = _DAT_1430348f0;
      uStack_6c = 0x3f80000000000000;
      uStack_74 = 0;
      uStack_e8 = 2;
      uStack_d8 = 2;
      uStack_d0 = 2;
      uStack_c0 = 2;
      uStack_b8 = _DAT_142e4e650;
      uStack_b0 = _UNK_142e4e658;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0x4000000000000000;
      uStack_88 = 1;
      uStack_80 = 0x100;
      uStack_7c = (ulonglong)_DAT_142e36f28;
      uStack_64 = 0;
      uStack_62 = 0;
      pbStack_e0 = pbVar8;
      pdb_1409bba50(auStack_110,&uStack_e8,param_3,param_4,param_5);
      if (plStack_100 == (longlong *)0x0) {
        plStack_100 = plStack_f8;
      }
      lVar5 = plStack_100[2];
      if ((ulonglong)(*plStack_100 - lVar5) < 0x18) {
        pdb_142d7f1b0(plStack_100,lVar5,0x18,1,1);
      }
      lVar6 = plStack_100[1];
      *(code **)(lVar6 + lVar5) = pdb_141608f40;
      *(undefined8 *)(lVar6 + 8 + lVar5) = auStack_110[0];
      *(undefined1 *)(lVar6 + 0x10 + lVar5) = 0;
      plStack_100[2] = lVar5 + 0x18;
      *(undefined8 *)pbStack_48 = auStack_110[0];
      *param_1 = 1;
      param_1[1] = pbStack_48;
      param_1[2] = 1;
      return param_1;
    }
    pbStack_50 = pbVar8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(4,0x18);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x18);
}

