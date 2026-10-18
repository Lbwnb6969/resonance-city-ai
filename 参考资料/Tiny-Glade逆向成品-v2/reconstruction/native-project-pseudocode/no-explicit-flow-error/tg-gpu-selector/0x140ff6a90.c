// VA 0x140ff6a90, PDB extent 646 bytes
// tg_gpu_selector::vulkan_config::impl$3::workarounds_view::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/vulkan_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tg_gpu_selector::vulkan_config::impl$3::workarounds_view::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-gpu-selector/src/vulkan_config.rs
   Extent: 646 */

void pdb_140ff6a90(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
                  undefined1 *param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  byte *pbVar5;
  undefined1 auStack_1f0 [200];
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte *pbStack_100;
  undefined *puStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined8 uStack_b0;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if ((longlong)param_5 - param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1432702c8,0x27,&UNK_1432702f0);
  }
  uVar1 = *param_5;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(param_4,1);
  if (pbVar5 != (byte *)0x0) {
    pub_142e32760(pbVar5,param_3,param_4);
    pbStack_100 = (byte *)0x0;
    uStack_f0 = uStack_128;
    uStack_ec = uStack_124;
    uStack_e8 = _DAT_143434a28;
    uStack_e4 = _UNK_143434a2c;
    uStack_e0 = _UNK_143434a30;
    uStack_dc = _UNK_143434a34;
    uStack_d8 = _DAT_143434a38;
    uStack_d0 = _UNK_143434a40;
    uStack_c8 = 0;
    uStack_c0 = 0x3fa6666600000000;
    uStack_b8 = 0xf00c;
    uStack_b4 = 0;
    uStack_b0 = 6;
    uStack_78 = 0;
    uStack_70 = 0x3fa6666600000000;
    uStack_68 = 0x4416000000000003;
    uStack_60 = 0;
    uStack_50 = _DAT_142f97f60;
    uStack_47 = 0;
    uStack_90 = param_4;
    pbStack_88 = pbVar5;
    uStack_80 = param_4;
    uStack_48 = uVar1;
    pdb_141f5adb0(auStack_1f0,&pbStack_100,(longlong)param_5 - param_1);
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(0xc0,8);
    if (pbVar5 != (byte *)0x0) {
      pub_142e32760(pbVar5,auStack_1f0,0xc0);
      puStack_f8 = &UNK_14326f2b8;
      lVar2 = param_2[2];
      if (lVar2 == *param_2) {
        pbStack_100 = pbVar5;
        pdb_142d7e980(param_2);
      }
      lVar3 = param_2[1];
      *(byte **)(lVar3 + lVar2 * 0x10) = pbVar5;
      *(undefined **)(lVar3 + 8 + lVar2 * 0x10) = &UNK_14326f2b8;
      param_2[2] = lVar2 + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0xc0);
  }
  pdb_142dc7e2a(1,param_4);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

