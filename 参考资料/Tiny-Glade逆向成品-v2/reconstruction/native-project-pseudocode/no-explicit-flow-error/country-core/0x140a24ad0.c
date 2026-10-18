// VA 0x140a24ad0, PDB extent 717 bytes
// country_core::systems::render_loop::draw_passes::draw_shaders::stars::startup_stars
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_shaders/stars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_shaders::stars::startup_stars
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_shaders/stars.rs
   Extent: 717 */

void pdb_140a24ad0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined1 auStack_138 [40];
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong lStack_80;
  ulonglong *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  ulonglong uStack_60;
  undefined4 uStack_58;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_d8 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  puStack_78 = (ulonglong *)((ulonglong)puStack_78 & 0xffffffff00000000);
  uStack_6c = 0;
  uStack_68 = 1;
  uStack_64 = uStack_64 & 0xffffff00;
  puVar6 = &uStack_d8;
  pdb_1415edd10(&uStack_110);
  plVar2 = (longlong *)pdb_140f3bda0();
  if ((char)plVar2[2] == '\x01') {
    lStack_80 = *plVar2;
    puVar6 = (ulonglong *)plVar2[1];
  }
  else {
    lStack_80 = pdb_140f4fd10();
    *plVar2 = lStack_80;
    plVar2[1] = (longlong)puVar6;
    *(undefined1 *)(plVar2 + 2) = 1;
  }
  *plVar2 = lStack_80 + 1;
  uStack_d8 = uStack_110;
  uStack_d0 = uStack_108;
  uStack_c0 = 0x8000000000000000;
  uStack_a0 = _DAT_143038b00;
  uStack_98 = _UNK_143038b08;
  uStack_90 = CONCAT44(_UNK_143038b14,_DAT_143038b10);
  uStack_88 = _UNK_143038b18;
  uStack_84 = _UNK_143038b1c;
  uStack_70 = 0x43038e60;
  uStack_6c = 1;
  uStack_68 = 4;
  uStack_64 = 0;
  uStack_60 = uStack_60 & 0xffffffffffffff00;
  puStack_78 = puVar6;
  uVar3 = pdb_140b08d00(&uStack_d8,&UNK_143038e60,4,*param_4,*param_2);
  pdb_140a596f0(&uStack_110,*param_5,&UNK_143038e64,0x11,&UNK_143038ec8);
  lVar1 = *(longlong *)*param_1;
  uVar5 = *param_3;
  uStack_41 = 1;
  uVar4 = pdb_140df4400(&UNK_143038e60,4);
  uStack_41 = 1;
  uVar5 = pdb_140a2e580(uVar5,uVar4);
  uStack_41 = 1;
  uStack_60 = pdb_141991370(&uStack_110,lVar1 + 0x10,uVar5);
  uStack_68 = (undefined4)uStack_e0;
  uStack_64 = (uint)((ulonglong)uStack_e0 >> 0x20);
  uStack_70 = uStack_e8;
  uStack_6c = uStack_e4;
  uStack_88 = uStack_100;
  uStack_84 = uStack_fc;
  uStack_98 = uStack_110;
  uStack_90 = uStack_108;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  uStack_b8 = 0;
  uStack_b0 = 0;
  _uStack_c8 = CONCAT44(_UNK_142e4e654,_DAT_142e4e650);
  uStack_c0 = CONCAT44(_UNK_142e4e65c,_UNK_142e4e658);
  uStack_ac = 0x3f800000;
  uStack_a8 = 0x3f800000;
  uStack_a4 = 0x3f800000;
  uStack_58 = 6000;
  uStack_41 = 0;
  uStack_d0 = uVar3;
  pdb_14161f500(auStack_138,param_6,&uStack_d8,&UNK_143038ee0);
  return;
}

