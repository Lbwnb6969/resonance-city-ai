// VA 0x140adc3d0, PDB extent 751 bytes
// country_core::systems::wall::shapes::rectangle::ui_create_rectangle::rectangle_signifier::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_create_rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_create_rectangle::rectangle_signifier::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_create_rectangle.rs
   Extent: 751 */

undefined8 *
pdb_140adc3d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uStack_168;
  byte *pbStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  byte *pbStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_40 = pub_1406abab0(8,8);
  if (pbStack_40 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_d0 = pub_1406abab0(0x18,4);
  if (pbStack_d0 != (byte *)0x0) {
    *(undefined8 *)(pbStack_d0 + 0x10) = param_2[2];
    uVar4 = param_2[1];
    *(undefined8 *)pbStack_d0 = *param_2;
    *(undefined8 *)(pbStack_d0 + 8) = uVar4;
    uStack_5c = 0x3f80000000000000;
    uStack_64 = 0;
    uStack_d8 = 0x8000000000000004;
    plStack_c8 = (longlong *)&UNK_14304e790;
    uStack_a8 = _DAT_142e4e650;
    uStack_a0 = _UNK_142e4e658;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 2;
    uStack_78 = 1;
    uStack_70 = CONCAT22(uStack_70._2_2_,0x100);
    uStack_6c = (ulonglong)_DAT_142e36f28;
    uStack_54 = (uint)uStack_54._3_1_ << 0x18;
    bVar1 = *(byte *)(param_2 + 3);
    uStack_84 = pdb_140df3ee0(param_2);
    uStack_88 = (uint)bVar1;
    uStack_168 = uStack_d8;
    pbStack_160 = pbStack_d0;
    plStack_158 = plStack_c8;
    plStack_150 = plStack_c0;
    uStack_148 = uStack_b8;
    uStack_140 = uStack_b0;
    uStack_138 = (undefined4)uStack_a8;
    uStack_134 = uStack_a8._4_4_;
    uStack_130 = (undefined4)uStack_a0;
    uStack_12c = uStack_a0._4_4_;
    uStack_128 = CONCAT44(uStack_94,uStack_98);
    uStack_120 = CONCAT44(uStack_8c,uStack_90);
    uStack_118 = CONCAT44(uStack_84,uStack_88);
    uStack_108 = uStack_78;
    uStack_104 = uStack_74;
    uStack_100 = uStack_70;
    uStack_fc = (undefined4)uStack_6c;
    uStack_f8 = uStack_6c._4_4_;
    uStack_f4 = (undefined4)uStack_64;
    uStack_f0 = uStack_64._4_4_;
    uStack_ec = (undefined4)uStack_5c;
    uStack_e8 = uStack_5c._4_4_;
    iStack_e4 = uStack_54;
    uStack_e0 = uStack_50;
    uStack_dc = uStack_4c;
    uStack_110 = 0x4040000000000000;
    pdb_1409bba50(&uStack_d8,&uStack_168,param_3,param_4,param_5);
    uVar4 = uStack_d8;
    plVar5 = plStack_c8;
    if (plStack_c8 == (longlong *)0x0) {
      plVar5 = plStack_c0;
    }
    lVar2 = plVar5[2];
    if ((ulonglong)(*plVar5 - lVar2) < 0x18) {
      pdb_142d7f1b0(plVar5,lVar2,0x18,1,1);
    }
    lVar3 = plVar5[1];
    *(code **)(lVar3 + lVar2) = pdb_14160bb80;
    *(undefined8 *)(lVar3 + 8 + lVar2) = uVar4;
    *(undefined1 *)(lVar3 + 0x10 + lVar2) = 0;
    plVar5[2] = lVar2 + 0x18;
    *(undefined8 *)pbStack_40 = uVar4;
    *param_1 = 1;
    param_1[1] = pbStack_40;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x18);
}

