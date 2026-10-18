// VA 0x140364e50, PDB extent 976 bytes
// country_core::render::render_config::impl$42::clone
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::render_config::impl$42::clone
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 976 */

void pdb_140364e50(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  undefined4 uStack_bc;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  bVar13 = *(int *)(param_2 + 0x68) == 1;
  if (bVar13) {
    uStack_148 = *(undefined4 *)(param_2 + 0x6c);
    uStack_144 = *(undefined4 *)(param_2 + 0x70);
    uStack_140 = *(undefined4 *)(param_2 + 0x74);
    uStack_13c = *(undefined4 *)(param_2 + 0x78);
  }
  uStack_d4 = *(undefined4 *)(param_2 + 0x90);
  uVar5 = *(undefined1 *)(param_2 + 0x7c);
  uVar6 = *(undefined1 *)(param_2 + 0x7d);
  uVar7 = *(undefined1 *)(param_2 + 0x7e);
  uVar9 = *(undefined8 *)(param_2 + 0x60);
  lStack_c8 = *(longlong *)(param_2 + 0x38);
  if (!SBORROW8(0,lStack_c8)) {
    if (lStack_c8 == -0x7fffffffffffffff) goto LAB_140364f0e;
    pdb_140f60be0(&lStack_108,param_2 + 0x38);
    uStack_e0 = uStack_100;
    uStack_e8 = uStack_f8;
    lStack_c8 = lStack_108;
  }
  unaff_XMM6_Da = *(undefined4 *)(param_2 + 0x50);
  unaff_XMM6_Db = *(undefined4 *)(param_2 + 0x54);
  unaff_XMM6_Dc = *(undefined4 *)(param_2 + 0x58);
  unaff_XMM6_Dd = *(undefined4 *)(param_2 + 0x5c);
LAB_140364f0e:
  uStack_d0 = *(undefined4 *)(param_2 + 0x80);
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uStack_cc = *(undefined4 *)(param_2 + 0x88);
  uVar2 = *(undefined4 *)(param_2 + 0x8c);
  uVar3 = *(undefined4 *)(param_2 + 0xaa);
  uStack_b5 = *(undefined1 *)(param_2 + 0xc5);
  uStack_b4 = *(undefined1 *)(param_2 + 0xc6);
  uVar10 = *(undefined8 *)(param_2 + 0x94);
  uVar11 = *(undefined8 *)(param_2 + 0x9c);
  uVar12 = pdb_140174fb0(&uStack_120,param_2);
  if (*(char *)(param_2 + 0xae) == '\x01') {
    uStack_138 = *(undefined4 *)(param_2 + 0xaf);
    uStack_134 = *(undefined4 *)(param_2 + 0xb3);
    uStack_130 = *(undefined4 *)(param_2 + 0xb7);
    uStack_12c = *(undefined4 *)(param_2 + 0xbb);
    uStack_bc = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
  }
  else {
    uStack_bc = 0;
  }
  uVar4 = *(undefined4 *)(param_2 + 0xbf);
  uStack_b2 = *(undefined1 *)(param_2 + 0xc3);
  uStack_b1 = *(undefined1 *)(param_2 + 0xc4);
  uVar8 = *(undefined4 *)(param_2 + 0x30);
  uStack_b3 = uVar7;
  pdb_140175e80(&lStack_108,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x12) = uStack_d4;
  param_1[7] = lStack_c8;
  param_1[8] = uStack_e0;
  param_1[9] = uStack_e8;
  *(undefined4 *)(param_1 + 10) = unaff_XMM6_Da;
  *(undefined4 *)((longlong)param_1 + 0x54) = unaff_XMM6_Db;
  *(undefined4 *)(param_1 + 0xb) = unaff_XMM6_Dc;
  *(undefined4 *)((longlong)param_1 + 0x5c) = unaff_XMM6_Dd;
  param_1[0xc] = uVar9;
  *(uint *)(param_1 + 0xd) = (uint)bVar13;
  *(ulonglong *)((longlong)param_1 + 0x6c) = CONCAT44(uStack_144,uStack_148);
  *(ulonglong *)((longlong)param_1 + 0x74) = CONCAT44(uStack_13c,uStack_140);
  *(undefined1 *)((longlong)param_1 + 0x7c) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x7d) = uVar6;
  *(undefined1 *)((longlong)param_1 + 0x7e) = uStack_b3;
  *(undefined4 *)(param_1 + 0x10) = uStack_d0;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uStack_cc;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xaa) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0xc5) = uStack_b5;
  *(undefined1 *)((longlong)param_1 + 0xc6) = uStack_b4;
  *(undefined8 *)((longlong)param_1 + 0x94) = uVar10;
  *(undefined8 *)((longlong)param_1 + 0x9c) = uVar11;
  param_1[2] = uStack_110;
  *param_1 = uStack_120;
  param_1[1] = uStack_118;
  *(char *)((longlong)param_1 + 0xae) = (char)uStack_bc;
  *(ulonglong *)((longlong)param_1 + 0xaf) = CONCAT44(uStack_134,uStack_138);
  *(ulonglong *)((longlong)param_1 + 0xb7) = CONCAT44(uStack_12c,uStack_130);
  *(undefined4 *)((longlong)param_1 + 0xbf) = uVar4;
  *(undefined1 *)((longlong)param_1 + 0xc3) = uStack_b2;
  *(undefined1 *)((longlong)param_1 + 0xc4) = uStack_b1;
  uVar1 = *(undefined4 *)(param_2 + 0xa8);
  param_1[5] = uStack_f8;
  param_1[6] = CONCAT44(uStack_ec,uVar8);
  param_1[3] = lStack_108;
  param_1[4] = uStack_100;
  *(short *)(param_1 + 0x15) = (short)uVar1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  return;
}

