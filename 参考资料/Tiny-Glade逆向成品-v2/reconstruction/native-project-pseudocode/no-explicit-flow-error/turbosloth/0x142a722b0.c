// VA 0x142a722b0, PDB extent 786 bytes
// redb::tree_store::table_tree::TableTree::get_table<u128,ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   redb::tree_store::table_tree::TableTree::get_table<u128,ref$<slice2$<u8> > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
   Extent: 786 */

longlong *
pdb_142a722b0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  longlong lStack_220;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  longlong lStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  longlong lStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  longlong lStack_50;
  longlong lStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_141acdac0(&lStack_158,param_2,param_3,param_4,param_5);
  lStack_98 = lStack_150;
  lStack_90 = lStack_148;
  lStack_88 = lStack_140;
  uStack_80 = uStack_138;
  pbStack_78 = pbStack_130;
  lStack_70 = lStack_128;
  lStack_68 = lStack_120;
  uStack_60 = uStack_118;
  pbStack_58 = pbStack_110;
  lStack_50 = lStack_108;
  lStack_48 = lStack_100;
  if (lStack_158 == 3) {
    param_1[0xb] = lStack_100;
    param_1[9] = (longlong)pbStack_110;
    param_1[10] = lStack_108;
    param_1[7] = lStack_120;
    param_1[8] = uStack_118;
    param_1[5] = (longlong)pbStack_130;
    param_1[6] = lStack_128;
    param_1[3] = lStack_140;
    param_1[4] = uStack_138;
    param_1[1] = lStack_150;
    param_1[2] = lStack_148;
    *param_1 = 3;
  }
  else {
    uStack_178 = uStack_b8;
    uStack_170 = uStack_b0;
    uStack_1b8 = uStack_f8;
    uStack_1b4 = uStack_f4;
    uStack_1b0 = uStack_f0;
    uStack_1ac = uStack_ec;
    if ((int)lStack_158 != 2) {
      pdb_141c26f10(&lStack_270,&lStack_158,param_5,param_3,param_4);
      if (lStack_270 != -0x7ffffffffffffff9) {
        param_1[0xb] = lStack_220;
        param_1[9] = lStack_230;
        param_1[10] = lStack_228;
        param_1[7] = lStack_240;
        param_1[8] = lStack_238;
        param_1[5] = lStack_250;
        param_1[6] = lStack_248;
        param_1[3] = lStack_260;
        param_1[4] = lStack_258;
        param_1[1] = lStack_270;
        param_1[2] = lStack_268;
        *param_1 = 3;
        if (uStack_138 != 0) {
          pub_1406abac0(pbStack_130,uStack_138,1);
        }
        if (uStack_118 == 0) {
          return param_1;
        }
        pub_1406abac0(pbStack_110,uStack_118,1);
        return param_1;
      }
      pub_142e32760(&lStack_270,&lStack_150,0xb8);
    }
    *param_1 = lStack_158;
    pub_142e32760(param_1 + 1,&lStack_270,0xb8);
  }
  return param_1;
}

