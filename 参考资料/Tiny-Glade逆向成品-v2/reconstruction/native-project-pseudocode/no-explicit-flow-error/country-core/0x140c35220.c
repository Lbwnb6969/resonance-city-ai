// VA 0x140c35220, PDB extent 359 bytes
// country_core::systems::wall::eraser::archivist::WallEraserArchivist::record_rewiring_event
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::eraser::archivist::WallEraserArchivist::record_rewiring_event
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
   Extent: 359 */

void pdb_140c35220(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong lStack_e0;
  byte *pbStack_d8;
  longlong lStack_c8;
  byte *pbStack_c0;
  longlong lStack_70;
  byte *pbStack_68;
  longlong lStack_58;
  byte *pbStack_50;
  
  uStack_168 = param_3[0xc];
  uStack_160 = param_3[0xd];
  uStack_178 = param_3[10];
  uStack_170 = param_3[0xb];
  uStack_188 = param_3[8];
  uStack_180 = param_3[9];
  uStack_1c8 = *param_3;
  uStack_1c0 = param_3[1];
  uStack_1b8 = param_3[2];
  uStack_1b0 = param_3[3];
  uStack_1a8 = param_3[4];
  uStack_1a0 = param_3[5];
  uStack_198 = param_3[6];
  uStack_190 = param_3[7];
  uStack_158 = *param_4;
  uStack_150 = param_4[1];
  uStack_148 = *(undefined4 *)(param_4 + 2);
  uStack_144 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_140 = *(undefined4 *)(param_4 + 3);
  uStack_13c = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_138 = *(undefined4 *)(param_4 + 4);
  uStack_134 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_130 = *(undefined4 *)(param_4 + 5);
  uStack_12c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_128 = *(undefined4 *)(param_4 + 6);
  uStack_124 = *(undefined4 *)((longlong)param_4 + 0x34);
  uStack_120 = *(undefined4 *)(param_4 + 7);
  uStack_11c = *(undefined4 *)((longlong)param_4 + 0x3c);
  uStack_118 = param_4[8];
  uStack_110 = param_4[9];
  uStack_108 = param_4[10];
  uStack_100 = param_4[0xb];
  uStack_f8 = *(undefined4 *)(param_4 + 0xc);
  uStack_f4 = *(undefined4 *)((longlong)param_4 + 100);
  uStack_f0 = *(undefined4 *)(param_4 + 0xd);
  uStack_ec = *(undefined4 *)((longlong)param_4 + 0x6c);
  pdb_1417b4d20(&lStack_e0,param_1 + 0x30,param_2,&uStack_1c8);
  if (!SBORROW8(0,lStack_e0)) {
    if (lStack_e0 != 0) {
      pub_1406abac0(pbStack_d8,lStack_e0 << 3,4);
    }
    if (lStack_c8 != 0) {
      pub_1406abac0(pbStack_c0,lStack_c8 << 2,4);
    }
    if (lStack_70 != 0) {
      pub_1406abac0(pbStack_68,lStack_70 << 3,4);
    }
    if (lStack_58 != 0) {
      pub_1406abac0(pbStack_50,lStack_58 << 2,4);
    }
  }
  return;
}

