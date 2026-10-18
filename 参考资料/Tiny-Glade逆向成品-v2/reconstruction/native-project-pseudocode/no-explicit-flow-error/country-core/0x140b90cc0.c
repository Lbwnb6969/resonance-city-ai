// VA 0x140b90cc0, PDB extent 935 bytes
// country_core::render::vao::Vao::rebuild
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::vao::Vao::rebuild
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/vao.rs
   Extent: 935 */

void pdb_140b90cc0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iStack_148;
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
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_68 = param_2;
  pdb_140b90070(&lStack_90,param_3,param_4,1,0);
  uStack_78 = *(undefined8 *)(param_3 + 8);
  lStack_60 = *(longlong *)(param_3 + 0x10);
  lVar1 = param_1[1];
  uVar10 = param_1[2];
  if (uStack_80 < (ulonglong)param_1[2]) {
    uVar10 = uStack_80;
  }
  lStack_58 = param_3;
  puStack_50 = param_1;
  lVar2 = pdb_140e17350();
  uStack_70 = lStack_60 * 4;
  if (uStack_70 < *(uint *)(lVar2 + 0x10) || uStack_70 - *(uint *)(lVar2 + 0x10) == 0) {
    uVar9 = 0;
    do {
      if (uVar10 <= uVar9) {
        bVar8 = true;
        puVar3 = param_1 + 3;
        uVar9 = 0;
        goto LAB_140b90e20;
      }
      uVar7 = *(ulonglong *)(pbStack_88 + uVar9 * 0x18 + 0x10);
      lVar2 = pdb_140e17350(lVar1 + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while (uVar7 <= *(uint *)(lVar2 + 0x10));
  }
  pdb_140b8fec0(&iStack_f8,uStack_68,lStack_58,pbStack_88,uStack_80);
  pdb_140989a40(puStack_50);
  puStack_50[4] = CONCAT44(uStack_d4,uStack_d8);
  puStack_50[2] = CONCAT44(uStack_e4,uStack_e8);
  puStack_50[3] = CONCAT44(uStack_dc,uStack_e0);
  *puStack_50 = CONCAT44(uStack_f4,iStack_f8);
  puStack_50[1] = CONCAT44(uStack_ec,uStack_f0);
  if (uStack_80 != 0) {
LAB_140b90f39:
    pbVar5 = pbStack_88 + 8;
    uVar10 = uStack_80;
    do {
      if (*(ulonglong *)(pbVar5 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar5,*(ulonglong *)(pbVar5 + -8),1);
      }
      pbVar5 = pbVar5 + 0x18;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
LAB_140b90f62:
  if (lStack_90 != 0) {
    pub_1406abac0(pbStack_88,lStack_90 * 0x18,8);
  }
  return;
LAB_140b90e20:
  puVar4 = puVar3;
  if (bVar8) {
    bVar8 = true;
    puVar4 = (undefined8 *)0x0;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140b90e53;
    puVar4 = (undefined8 *)0x0;
    uStack_98 = uStack_70;
    uVar6 = uStack_78;
    uVar7 = uVar9;
  }
  else {
LAB_140b90e53:
    if (uVar10 <= uVar9) {
      *(int *)(puStack_50 + 4) = (int)lStack_60;
      *(undefined1 *)((longlong)puStack_50 + 0x24) = *(undefined1 *)(lStack_58 + 0x78);
      if (uStack_80 == 0) goto LAB_140b90f62;
      goto LAB_140b90f39;
    }
    puVar3 = (undefined8 *)(lVar1 + uVar9 * 8);
    uVar7 = uVar9 + 1;
    uVar6 = *(undefined8 *)(pbStack_88 + uVar9 * 0x18 + 8);
    uStack_98 = *(ulonglong *)(pbStack_88 + uVar9 * 0x18 + 0x10);
    bVar8 = false;
  }
  uStack_a0 = 0;
  pdb_140e55470(&iStack_148,uStack_68,puVar3,uVar6,uStack_98,&uStack_a0,1,0);
  puVar3 = puVar4;
  uVar9 = uVar7;
  if (iStack_148 != 0xb) {
    uStack_b8 = uStack_108;
    uStack_b0 = uStack_100;
    uStack_c8 = uStack_118;
    uStack_c4 = uStack_114;
    uStack_c0 = uStack_110;
    uStack_bc = uStack_10c;
    uStack_d8 = uStack_128;
    uStack_d4 = uStack_124;
    uStack_d0 = uStack_120;
    uStack_cc = uStack_11c;
    uStack_e8 = uStack_138;
    uStack_e4 = uStack_134;
    uStack_e0 = uStack_130;
    uStack_dc = uStack_12c;
    iStack_f8 = iStack_148;
    uStack_f4 = uStack_144;
    uStack_f0 = uStack_140;
    uStack_ec = uStack_13c;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14305eac8,0x2b,&iStack_f8,&UNK_14305ea68,&UNK_14305e4f0);
  }
  goto LAB_140b90e20;
}

