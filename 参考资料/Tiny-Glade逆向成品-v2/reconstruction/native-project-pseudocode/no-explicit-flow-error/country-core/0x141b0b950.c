// VA 0x141b0b950, PDB extent 633 bytes
// country_core::startup::load_clutter_packs::install_built_clutter_packs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_clutter_packs::install_built_clutter_packs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 633 */

undefined8
pdb_141b0b950(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5,undefined8 *param_6)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong arg1;
  undefined1 *puVar7;
  longlong in_R10;
  ulonglong uVar8;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 (*pauStack_f0) [16];
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 *puStack_80;
  undefined1 (*pauStack_78) [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_128 = *param_1;
  uStack_120 = param_1[1];
  uStack_118 = param_1[2];
  uStack_110 = param_1[3];
  uStack_108 = *(undefined4 *)(param_1 + 4);
  uStack_104 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_100 = *(undefined4 *)(param_1 + 5);
  uStack_fc = *(undefined4 *)((longlong)param_1 + 0x2c);
  pdb_141b06d80(&pauStack_90,&uStack_128,param_2,param_3,*(longlong *)*param_6 + 0x10,param_6[2],
                param_6[3],*(undefined4 *)(param_6 + 4),*(undefined4 *)(param_6 + 5),param_6[9]);
  if (pauStack_90 == (undefined1 (*) [16])0x0) {
    uVar5 = 1;
  }
  else {
    uStack_a0 = uStack_40;
    uStack_98 = uStack_38;
    uStack_b0 = uStack_50;
    uStack_ac = uStack_4c;
    uStack_a8 = uStack_48;
    uStack_a4 = uStack_44;
    uStack_c0 = uStack_60;
    uStack_bc = uStack_5c;
    uStack_b8 = (undefined4)uStack_58;
    uStack_b4 = uStack_58._4_4_;
    uStack_d0 = (undefined4)uStack_70;
    uStack_cc = uStack_70._4_4_;
    uStack_c8 = (undefined4)uStack_68;
    uStack_c4 = uStack_68._4_4_;
    uStack_e0 = puStack_80;
    uStack_d8 = pauStack_78;
    pauStack_f0 = pauStack_90;
    lStack_e8 = (longlong)pauStack_88;
    uStack_29 = 1;
    pdb_141b054e0(param_6,param_5);
    uStack_70 = (undefined1 (*) [16])CONCAT44(uStack_a4,uStack_a8);
    puVar1 = param_4 + 3;
    if (*puVar1 < uStack_70) {
      pauStack_90 = (undefined1 (*) [16])*param_4;
      plVar2 = param_4 + 1;
      param_4 = (undefined8 *)&uStack_c0;
      puStack_80 = *pauStack_90 + *plVar2;
      uStack_70 = (undefined1 (*) [16])*puVar1;
    }
    else {
      pauStack_90 = (undefined1 (*) [16])CONCAT44(uStack_bc,uStack_c0);
      puStack_80 = *pauStack_90 + CONCAT44(uStack_b4,uStack_b8);
    }
    pauStack_88 = pauStack_90 + 1;
    puStack_80 = puStack_80 + 1;
    auVar3 = *pauStack_90;
    pauStack_78 = (undefined1 (*) [16])
                  CONCAT62(pauStack_78._2_6_,
                           ~((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar3[0xf] >> 7) << 0xf));
    uStack_29 = 1;
    puVar7 = &uStack_2a;
    lVar6 = pdb_1417a8700(&pauStack_90,0,param_4);
    lVar4 = param_6[8];
    plVar2 = (longlong *)(lVar4 + 0x80);
    *plVar2 = *plVar2 + lVar6;
    auVar3 = *pauStack_f0;
    if (lStack_e8 == 0) {
      pauStack_90 = (undefined1 (*) [16])0x0;
    }
    else {
      uVar8 = lStack_e8 * 8 + 0x17U & 0xfffffffffffffff0;
      puVar7 = (undefined1 *)(lStack_e8 + uVar8 + 0x11);
      in_R10 = (longlong)pauStack_f0 - uVar8;
      pauStack_90 = (undefined1 (*) [16])0x10;
    }
    uStack_70 = pauStack_f0 + 1;
    uStack_68 = *pauStack_f0 + lStack_e8 + 1;
    pauStack_78 = pauStack_f0;
    uStack_60 = CONCAT22(uStack_60._2_2_,
                         ~((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar3[0xf] >> 7) << 0xf));
    uStack_58 = uStack_d8;
    uStack_29 = 0;
    pauStack_88 = (undefined1 (*) [16])puVar7;
    puStack_80 = (undefined1 *)in_R10;
    pdb_1417a80b0(lVar4 + 0x18,&pauStack_90);
    lVar4 = CONCAT44(uStack_b4,uStack_b8);
    if (lVar4 != 0) {
      uVar8 = lVar4 * 8 + 0x17U & 0xfffffffffffffff0;
      arg1 = lVar4 + uVar8 + 0x11;
      if (arg1 != 0) {
        pub_1406abac0((byte *)(CONCAT44(uStack_bc,uStack_c0) - uVar8),arg1,0x10);
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

