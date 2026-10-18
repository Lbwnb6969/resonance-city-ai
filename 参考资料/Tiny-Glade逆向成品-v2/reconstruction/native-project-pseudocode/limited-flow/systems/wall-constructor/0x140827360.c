// VA 0x140827360, PDB extent 1209 bytes
// system_wall_constructor::construct_playermade_stairs::wooden_supports::add_support_piece
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::wooden_supports::add_support_piece
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/wooden_supports.rs
   Extent: 1209 */

void pdb_140827360(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  uint *param_5,int *param_6,undefined4 param_7)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  byte *pbStack_70;
  uint *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*param_6 == 1) {
    iStack_c4 = param_6[3];
    uStack_cc = (undefined4)*(undefined8 *)(param_6 + 1);
    uStack_c8 = (undefined4)((ulonglong)*(undefined8 *)(param_6 + 1) >> 0x20);
    iVar2 = param_6[7];
    puStack_68 = param_5;
    uVar3 = *param_5;
    uVar10 = pdb_140c017b0(param_2,param_3);
    lVar4 = param_1[2];
    if (lVar4 == *param_1) {
      pdb_142d8dc50(param_1);
    }
    uVar10 = uVar10 ^ param_4 * -0x61c8864680b583eb ^ (ulonglong)uVar3 * -0x40a7b892e31b1a47;
    lVar5 = param_1[1];
    lVar12 = lVar4 * 0x38;
    *(undefined4 *)(lVar5 + lVar12) = 0;
    plVar1 = (longlong *)(lVar5 + 4 + lVar12);
    *plVar1 = (longlong)pbStack_d8;
    plVar1[1] = CONCAT44(uStack_cc,uStack_d0);
    *(ulonglong *)(lVar5 + 0x14 + lVar12) = CONCAT44(iStack_c4,uStack_c8);
    *(undefined8 *)(lVar5 + 0x1c + lVar12) = *(undefined8 *)(param_6 + 4);
    *(int *)(lVar5 + 0x24 + lVar12) = param_6[6];
    *(int *)(lVar5 + 0x28 + lVar12) = iVar2;
    *(undefined4 *)(lVar5 + 0x2c + lVar12) = param_7;
    *(uint *)(lVar5 + 0x30 + lVar12) = (uint)(uVar10 >> 0x20) ^ (uint)uVar10;
    *(undefined4 *)(lVar5 + 0x34 + lVar12) = 0x100;
    param_1[2] = lVar4 + 1;
    *puStack_68 = uVar3 + 1;
    return;
  }
  puVar6 = *(uint **)(param_6 + 2);
  puVar7 = *(undefined8 **)(param_6 + 4);
  uVar10 = *(ulonglong *)(param_6 + 6);
  if (uVar10 < 2) {
    puVar8 = puStack_78;
    puVar9 = puStack_68;
    if (uVar10 == 0) goto joined_r0x0001408276dc;
    lVar4 = (longlong)puVar7 + uVar10 * 0xc;
  }
  else {
    uStack_90 = 0;
    puStack_a0 = puVar7;
    uStack_98 = uVar10;
    uStack_88 = uVar10;
    puStack_78 = puVar7;
    puStack_68 = puVar6;
    pdb_1413efab0(&lStack_f0,&puStack_a0);
    pbStack_70 = pbStack_e8;
    pdb_1407fbce0(&pbStack_d8,pbStack_e8,uStack_e0,0x13,0x3e28f5c3,0x3de353f8,0x3d343958,0);
    if (lStack_f0 != 0) {
      pub_1406abac0(pbStack_70,lStack_f0 * 0x18,4);
    }
    if (!SBORROW8(0,(longlong)pbStack_d8)) {
      pbStack_70 = pbStack_d8;
      uStack_80 = CONCAT44(uStack_cc,uStack_d0);
      lVar4 = param_1[5];
      if (lVar4 == param_1[3]) {
        pdb_142d7ee50(param_1 + 3);
      }
      lVar5 = param_1[4];
      lVar12 = lVar4 * 0x40;
      *(undefined4 *)(lVar5 + lVar12) = param_7;
      *(byte **)(lVar5 + 8 + lVar12) = pbStack_70;
      *(undefined8 *)(lVar5 + 0x10 + lVar12) = uStack_80;
      puVar7 = (undefined8 *)(lVar5 + 0x18 + lVar12);
      *puVar7 = CONCAT44(iStack_c4,uStack_c8);
      puVar7[1] = uStack_c0;
      puVar7 = (undefined8 *)(lVar5 + 0x28 + lVar12);
      *puVar7 = uStack_b8;
      puVar7[1] = uStack_b0;
      *(undefined8 *)(lVar5 + 0x38 + lVar12) = uStack_a8;
      param_1[5] = lVar4 + 1;
      puVar7 = puStack_78;
      puVar8 = puStack_78;
      puVar6 = puStack_68;
      puVar9 = puStack_68;
      goto joined_r0x0001408276dc;
    }
    lVar4 = (longlong)puStack_78 + uVar10 * 0xc;
    puVar7 = puStack_78;
    puVar8 = puStack_78;
    puVar6 = puStack_68;
    puVar9 = puStack_68;
  }
  puStack_68 = puVar6;
  puStack_78 = puVar7;
  puVar7 = puStack_78;
  puVar6 = puStack_68;
  if ((longlong *)(lVar4 + -0xc) != (longlong *)0x0) {
    uVar10 = uStack_98 >> 0x20;
    uStack_98 = CONCAT44((int)uVar10,*(undefined4 *)(lVar4 + -4));
    puStack_a0 = *(undefined8 **)(lVar4 + -0xc);
    iStack_c4 = *(int *)(puStack_78 + 1);
    uStack_cc = (undefined4)*puStack_78;
    uStack_c8 = (undefined4)((ulonglong)*puStack_78 >> 0x20);
    uVar3 = *param_5;
    uVar10 = pdb_140c017b0(param_2,param_3);
    lVar4 = param_1[2];
    if (lVar4 == *param_1) {
      pdb_142d8dc50(param_1);
    }
    uVar10 = uVar10 ^ param_4 * -0x61c8864680b583eb ^ (ulonglong)uVar3 * -0x40a7b892e31b1a47;
    lVar5 = param_1[1];
    lVar12 = lVar4 * 0x38;
    *(undefined4 *)(lVar5 + lVar12) = 0;
    plVar1 = (longlong *)(lVar5 + 4 + lVar12);
    *plVar1 = (longlong)pbStack_d8;
    plVar1[1] = CONCAT44(uStack_cc,uStack_d0);
    *(ulonglong *)(lVar5 + 0x14 + lVar12) = CONCAT44(iStack_c4,uStack_c8);
    *(undefined8 **)(lVar5 + 0x1c + lVar12) = puStack_a0;
    *(undefined4 *)(lVar5 + 0x24 + lVar12) = (undefined4)uStack_98;
    *(undefined4 *)(lVar5 + 0x28 + lVar12) = 0x3e2e147b;
    *(undefined4 *)(lVar5 + 0x2c + lVar12) = param_7;
    *(uint *)(lVar5 + 0x30 + lVar12) = (uint)(uVar10 >> 0x20) ^ (uint)uVar10;
    *(undefined4 *)(lVar5 + 0x34 + lVar12) = 0x100;
    param_1[2] = lVar4 + 1;
    *param_5 = uVar3 + 1;
    puVar7 = puStack_78;
    puVar8 = puStack_78;
    puVar6 = puStack_68;
    puVar9 = puStack_68;
  }
joined_r0x0001408276dc:
  puStack_68 = puVar9;
  puStack_78 = puVar8;
  if (puVar6 == (uint *)0x0) {
    return;
  }
  uVar11 = GetProcessHeap(puVar7,(longlong)puVar6 * 0xc);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar11,0,puVar7);
  return;
}

