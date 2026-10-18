// VA 0x140392130, PDB extent 1130 bytes
// ron::options::Options::from_str_seed<core::marker::PhantomData<alloc::vec::Vec<tiny_glade::app_config::VulkanLayerAllowlistDefaults,alloc::alloc::Global> >,alloc::vec::Vec<tiny_glade::app_config::VulkanLayerAllowlistDefaults,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::options::Options::from_str_seed<core::marker::PhantomData<alloc::vec::Vec<tiny_glade::app_config::VulkanLayerAllowlistDefaults,alloc::alloc::Global>
   >,alloc::vec::Vec<tiny_glade::app_config::VulkanLayerAllowlistDefaults,alloc::alloc::Global> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1130 */

undefined8 *
pdb_140392130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *arg0;
  byte *arg0_00;
  longlong lVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined1 uStack_1c9;
  undefined7 uStack_1c8;
  longlong lStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140dca470(&lStack_198,param_3,param_4,param_2);
  uStack_b8 = uStack_190;
  uStack_b4 = uStack_18c;
  uStack_b0 = uStack_188;
  uStack_ac = uStack_184;
  uStack_a0 = CONCAT44(uStack_174,uStack_178);
  uStack_a8 = uStack_180;
  uStack_a4 = uStack_17c;
  uStack_98 = CONCAT44(uStack_16c,uStack_170);
  uStack_90 = CONCAT44(uStack_164,uStack_168);
  uStack_88 = CONCAT44(uStack_15c,uStack_160);
  uStack_80 = CONCAT44(uStack_154,uStack_158);
  uStack_78 = uStack_150;
  uStack_70 = uStack_148;
  uStack_68 = uStack_140;
  uStack_60 = uStack_138;
  uStack_58 = uStack_130;
  if (lStack_198 == 2) {
    param_1[0xc] = uStack_130;
    param_1[10] = uStack_140;
    param_1[0xb] = uStack_138;
    param_1[8] = uStack_150;
    param_1[9] = uStack_148;
    param_1[6] = uStack_88;
    param_1[7] = uStack_80;
    param_1[4] = uStack_98;
    param_1[5] = uStack_90;
    param_1[2] = CONCAT44(uStack_17c,uStack_180);
    param_1[3] = uStack_a0;
    *param_1 = CONCAT44(uStack_18c,uStack_190);
    param_1[1] = CONCAT44(uStack_184,uStack_188);
  }
  else {
    pdb_1402cb450(&uStack_128,&lStack_198);
    if ((char)uStack_128 == '2') {
      lStack_c8 = CONCAT44(uStack_10c,uStack_110);
      uStack_d8 = uStack_120;
      uStack_d4 = uStack_11c;
      uStack_d0 = uStack_118;
      uStack_cc = uStack_114;
      pdb_140dca810(&uStack_128,&lStack_198);
      if ((char)uStack_128 == '2') {
        param_1[3] = lStack_c8;
        param_1[1] = CONCAT44(uStack_d4,uStack_d8);
        param_1[2] = CONCAT44(uStack_cc,uStack_d0);
        *(undefined1 *)param_1 = 0x32;
      }
      else {
        uStack_238 = uStack_e8;
        uStack_248 = uStack_f8;
        uStack_244 = uStack_f4;
        uStack_240 = uStack_f0;
        uStack_23c = uStack_ec;
        uStack_258 = uStack_108;
        uStack_254 = uStack_104;
        uStack_250 = uStack_100;
        uStack_24c = uStack_fc;
        uStack_268 = uStack_118;
        uStack_264 = uStack_114;
        uStack_260 = uStack_110;
        uStack_25c = uStack_10c;
        uStack_278 = uStack_128;
        uStack_274 = uStack_124;
        uStack_270 = uStack_120;
        uStack_26c = uStack_11c;
        pdb_140dca460(&uStack_b8,&lStack_198,&uStack_278);
        param_1[0xc] = uStack_58;
        param_1[10] = uStack_68;
        param_1[0xb] = uStack_60;
        param_1[8] = uStack_78;
        param_1[9] = uStack_70;
        param_1[6] = uStack_88;
        param_1[7] = uStack_80;
        param_1[4] = uStack_98;
        param_1[5] = uStack_90;
        param_1[2] = CONCAT44(uStack_a4,uStack_a8);
        param_1[3] = uStack_a0;
        *param_1 = CONCAT44(uStack_b4,uStack_b8);
        param_1[1] = CONCAT44(uStack_ac,uStack_b0);
        arg0_00 = (byte *)CONCAT44(uStack_cc,uStack_d0);
        lStack_e0 = lStack_c8;
        if (lStack_c8 != 0) {
          lVar4 = 0;
          do {
            lVar1 = lVar4 * 0x20;
            arg0 = *(byte **)(arg0_00 + lVar1 + 8);
            lVar2 = *(longlong *)(arg0_00 + lVar1 + 0x10);
            if (lVar2 != 0) {
              pbVar3 = arg0 + 0x10;
              do {
                if (*(ulonglong *)(pbVar3 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar3,*(ulonglong *)(pbVar3 + -8),1);
                }
                pbVar3 = pbVar3 + 0x20;
                lVar2 = lVar2 + -1;
              } while (lVar2 != 0);
            }
            if (*(longlong *)(arg0_00 + lVar1) != 0) {
              pub_1406abac0(arg0,*(longlong *)(arg0_00 + lVar1) << 5,8);
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 != lStack_e0);
        }
        if (CONCAT44(uStack_d4,uStack_d8) != 0) {
          pub_1406abac0(arg0_00,CONCAT44(uStack_d4,uStack_d8) << 5,8);
        }
      }
    }
    else {
      uStack_1e8 = uStack_e8;
      uStack_1f8 = uStack_f8;
      uStack_1f4 = uStack_f4;
      uStack_1f0 = uStack_f0;
      uStack_1ec = uStack_ec;
      uStack_208 = uStack_108;
      uStack_204 = uStack_104;
      uStack_200 = uStack_100;
      uStack_1fc = uStack_fc;
      uStack_218 = uStack_118;
      uStack_214 = uStack_114;
      uStack_210 = uStack_110;
      uStack_20c = uStack_10c;
      uStack_228 = uStack_128;
      uStack_224 = uStack_124;
      uStack_220 = uStack_120;
      uStack_21c = uStack_11c;
      pdb_140dca460(&uStack_b8,&lStack_198,&uStack_228);
      uStack_1c9 = (undefined1)uStack_a8;
      uStack_1c8 = (undefined7)(CONCAT44(uStack_a4,uStack_a8) >> 8);
      param_1[0xc] = uStack_58;
      param_1[10] = uStack_68;
      param_1[0xb] = uStack_60;
      param_1[8] = uStack_78;
      param_1[9] = uStack_70;
      param_1[6] = uStack_88;
      param_1[7] = uStack_80;
      param_1[4] = uStack_98;
      param_1[5] = uStack_90;
      param_1[2] = CONCAT71(uStack_1c8,uStack_1c9);
      param_1[3] = uStack_a0;
      *(ulonglong *)((longlong)param_1 + 1) =
           CONCAT17((undefined1)uStack_b0,CONCAT43(uStack_b4,uStack_b8._1_3_));
      *(ulonglong *)((longlong)param_1 + 9) =
           CONCAT17(uStack_1c9,CONCAT43(uStack_ac,uStack_b0._1_3_));
      *(undefined1 *)param_1 = (undefined1)uStack_b8;
    }
  }
  return param_1;
}

