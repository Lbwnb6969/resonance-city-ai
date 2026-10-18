// VA 0x140bd6350, PDB extent 687 bytes
// country_core::resources::active_raster_stroke::InProgressRasterStroke::solidify_fluid_into
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::active_raster_stroke::InProgressRasterStroke::solidify_fluid_into
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
   Extent: 687 */

void pdb_140bd6350(longlong param_1,longlong param_2,ulonglong *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  byte *arg0;
  longlong lVar3;
  undefined4 auStack_e0 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 *puStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  auStack_e0[0] = 0;
  uStack_70 = (byte *)(param_1 + param_2 * 0xc);
  uStack_68 = auStack_e0;
  uStack_78 = (byte *)param_1;
  pdb_1415f5100(&uStack_d0,&uStack_78);
  if (puStack_c0 < (undefined4 *)0x2) {
    lVar3 = CONCAT44(uStack_cc,uStack_d0);
    arg0 = (byte *)CONCAT44(uStack_c4,uStack_c8);
    uVar2 = param_3[2];
    puVar1 = puStack_c0;
  }
  else {
    puStack_a8 = puStack_c0;
    uStack_b8 = uStack_d0;
    uStack_b4 = uStack_cc;
    uStack_b0 = uStack_c8;
    uStack_ac = uStack_c4;
    pdb_1419aa3f0(&uStack_78,&uStack_b8);
    if (SBORROW8(0,(longlong)uStack_78)) {
      uStack_b8 = (undefined4)uStack_70;
      uStack_b4 = uStack_70._4_4_;
      uStack_b0 = (undefined4)uStack_68;
      uStack_ac = uStack_68._4_4_;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_b8,&UNK_14335e258,&UNK_143064960);
    }
    uStack_88 = uStack_48;
    pbStack_98 = pbStack_58;
    uStack_90 = uStack_50;
    puStack_a8 = uStack_68;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_b8 = (undefined4)uStack_78;
    uStack_b4 = uStack_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    pdb_1419a9230(&uStack_78,&uStack_b8,_DAT_142e36f50);
    puVar1 = uStack_68;
    arg0 = uStack_70;
    lVar3 = (longlong)uStack_78;
    if (uStack_60 != (byte *)0x0) {
      pub_1406abac0(pbStack_58,(longlong)uStack_60 << 2,4);
    }
    if (CONCAT44(uStack_b4,uStack_b8) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_ac,uStack_b0),CONCAT44(uStack_b4,uStack_b8) * 0xc,4);
    }
    if (CONCAT44(uStack_9c,uStack_a0) != 0) {
      pub_1406abac0(pbStack_98,CONCAT44(uStack_9c,uStack_a0) << 2,4);
    }
    uVar2 = param_3[2];
  }
  if (uVar2 != 0) {
    uStack_60 = arg0 + (longlong)puVar1 * 0xc;
    pbStack_58 = (byte *)0x1;
    uStack_78 = arg0;
    uStack_70 = arg0;
    uStack_68 = (undefined4 *)lVar3;
    pdb_140177720(param_3,&uStack_78);
    return;
  }
  if ((undefined4 *)*param_3 < puVar1) {
    pbStack_80 = arg0;
    lStack_40 = lVar3;
    pdb_142d7f1b0(param_3,0,puVar1,4,0xc);
    uVar2 = param_3[2];
    arg0 = pbStack_80;
    lVar3 = lStack_40;
  }
  else {
    uVar2 = 0;
    if (puVar1 == (undefined4 *)0x0) goto LAB_140bd64e3;
  }
  pub_142e32760(uVar2 * 0xc + param_3[1],arg0,(longlong)puVar1 * 0xc);
LAB_140bd64e3:
  param_3[2] = uVar2 + (longlong)puVar1;
  if (lVar3 != 0) {
    pub_1406abac0(arg0,lVar3 * 0xc,4);
  }
  return;
}

