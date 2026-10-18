// VA 0x140c44bc0, PDB extent 583 bytes
// country_core::resources::walls::decorator_subtype::DecoratorCollision::empty
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_subtype::DecoratorCollision::empty
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 583 */

undefined8 * pdb_140c44bc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  uStack_68 = 0;
  uStack_108 = 0x3f8000003f800000;
  uStack_100 = CONCAT44(uStack_100._4_4_,0x3f800000);
  puVar4 = &uStack_68;
  pdb_140df3fd0(&uStack_128,puVar4,&uStack_108,_DAT_142e36f28,0,&UNK_14306d7a8);
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uVar2 = pdb_140bbaff0(&uStack_108);
  uStack_78 = pdb_141b3b160(0,0,0);
  puStack_70 = puVar4;
  uStack_30 = uStack_78;
  pdb_140de80d0(&uStack_108,&uStack_40);
  uVar1 = uStack_100;
  uStack_a8 = uStack_108;
  uStack_98 = (undefined4)uStack_f8;
  uStack_94 = uStack_f8._4_4_;
  uStack_50 = (undefined4)uStack_f8;
  uStack_4c = uStack_f8._4_4_;
  uStack_48 = (undefined4)uStack_f0;
  uStack_44 = uStack_f0._4_4_;
  uStack_60 = uStack_108;
  uStack_58 = uStack_100;
  uStack_108 = 1;
  uStack_100 = 1;
  uStack_f8 = 4;
  uStack_f0 = 0;
  uStack_e8 = 4;
  uStack_e0 = 0;
  uStack_d8 = uStack_30;
  uStack_c8 = 0;
  uStack_b8 = 0;
  uStack_b0 = uStack_68;
  uStack_58._0_4_ = (undefined4)uVar1;
  uStack_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_a0 = (undefined4)uStack_58;
  uStack_9c = uStack_58._4_4_;
  puStack_d0 = puVar4;
  uStack_88 = uVar2;
  uStack_58 = uVar1;
  pdb_14007ee60();
  pbVar3 = pub_1406abab0(0x90,0x10);
  if (pbVar3 != (byte *)0x0) {
    pub_142e32760(pbVar3,&uStack_108,0x90);
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[4] = uStack_128;
    param_1[5] = uStack_120;
    param_1[6] = uStack_118;
    param_1[7] = uStack_110;
    param_1[3] = pbVar3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(0x10,0x90);
}

