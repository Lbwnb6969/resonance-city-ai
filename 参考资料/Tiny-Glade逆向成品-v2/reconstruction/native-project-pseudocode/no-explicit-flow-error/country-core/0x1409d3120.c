// VA 0x1409d3120, PDB extent 1181 bytes
// country_core::render::nani::gpu_world::GpuWorld::set_draw_list_params
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::GpuWorld::set_draw_list_params
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 1181 */

void pdb_1409d3120(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  ulonglong arg0;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  byte *pbStack_50;
  undefined8 *puStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 4);
  puStack_58 = param_2;
  if (uVar3 == 0) goto LAB_1409d32ca;
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar10 = *(longlong *)(param_2 + 2);
  arg0 = uVar3 * 4;
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(arg0,4);
  if (pbStack_50 == (byte *)0x0) {
    uStack_39 = 1;
    pdb_142dc7e2a(4,arg0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if ((ulonglong)((longlong)pbStack_50 - lVar10) < 0x20 || uVar3 < 8) {
    uVar14 = 0;
LAB_1409d31d0:
    uVar12 = uVar14;
    for (uVar13 = uVar3 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)(pbStack_50 + uVar12 * 4) = *(undefined4 *)(lVar10 + uVar12 * 4);
      uVar12 = uVar12 + 1;
    }
    if (uVar14 - uVar3 < 0xfffffffffffffffd) {
      do {
        *(undefined4 *)(pbStack_50 + uVar12 * 4) = *(undefined4 *)(lVar10 + uVar12 * 4);
        *(undefined4 *)(pbStack_50 + uVar12 * 4 + 4) = *(undefined4 *)(lVar10 + 4 + uVar12 * 4);
        *(undefined4 *)(pbStack_50 + uVar12 * 4 + 8) = *(undefined4 *)(lVar10 + 8 + uVar12 * 4);
        *(undefined4 *)(pbStack_50 + uVar12 * 4 + 0xc) = *(undefined4 *)(lVar10 + 0xc + uVar12 * 4);
        uVar12 = uVar12 + 4;
      } while (uVar3 != uVar12);
    }
  }
  else {
    uVar14 = uVar3 & 0xfffffffffffffff8;
    uVar13 = 0;
    do {
      puVar1 = (undefined8 *)(lVar10 + uVar13 * 4);
      uVar7 = puVar1[1];
      puVar2 = (undefined8 *)(lVar10 + 0x10 + uVar13 * 4);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      *(undefined8 *)(pbStack_50 + uVar13 * 4) = *puVar1;
      *(undefined8 *)(pbStack_50 + uVar13 * 4 + 8) = uVar7;
      *(undefined8 *)(pbStack_50 + uVar13 * 4 + 0x10) = uVar8;
      *(undefined8 *)(pbStack_50 + uVar13 * 4 + 0x10 + 8) = uVar9;
      uVar13 = uVar13 + 8;
    } while (uVar14 != uVar13);
    if (uVar3 != uVar14) goto LAB_1409d31d0;
  }
  puStack_48 = (undefined8 *)arg0;
  lVar10 = pdb_140e17350(param_1 + 0x20);
  if ((ulonglong)*(uint *)(lVar10 + 0x10) < puStack_48) {
    uStack_d8 = 0xb;
  }
  else {
    uStack_e8 = 0;
    uStack_e0 = (ulonglong)puStack_48;
    pdb_140e55470(&uStack_d8,lVar4 + 0x10,param_1 + 0x20,pbStack_50,puStack_48,&uStack_e8,1,0);
    if (uStack_d8 == 0xb) {
      pub_1406abac0(pbStack_50,(ulonglong)puStack_48,4);
LAB_1409d32ca:
      uStack_68 = *(undefined8 *)(puStack_58 + 0x18);
      uStack_60 = *(undefined8 *)(puStack_58 + 0x1a);
      uStack_78 = *(undefined8 *)(puStack_58 + 0x14);
      uStack_70 = *(undefined8 *)(puStack_58 + 0x16);
      uStack_88 = *(undefined8 *)(puStack_58 + 0x10);
      uStack_80 = *(undefined8 *)(puStack_58 + 0x12);
      uStack_c8 = *puStack_58;
      uStack_c4 = puStack_58[1];
      uStack_c0 = puStack_58[2];
      uStack_bc = puStack_58[3];
      uStack_b8 = puStack_58[4];
      uStack_b4 = puStack_58[5];
      uStack_b0 = puStack_58[6];
      uStack_ac = puStack_58[7];
      uStack_a8 = puStack_58[8];
      uStack_a4 = puStack_58[9];
      uStack_a0 = puStack_58[10];
      uStack_9c = puStack_58[0xb];
      uStack_98 = puStack_58[0xc];
      uStack_94 = puStack_58[0xd];
      uStack_90 = *(undefined8 *)(puStack_58 + 0xe);
      uStack_d8 = 1;
      uStack_d0 = 1;
      pdb_14007ee60();
      pbVar11 = pub_1406abab0(0x80,8);
      if (pbVar11 != (byte *)0x0) {
        *(undefined8 *)(pbVar11 + 0x70) = uStack_68;
        *(undefined8 *)(pbVar11 + 0x78) = uStack_60;
        *(undefined8 *)(pbVar11 + 0x60) = uStack_78;
        *(undefined8 *)(pbVar11 + 0x68) = uStack_70;
        *(undefined8 *)(pbVar11 + 0x50) = uStack_88;
        *(undefined8 *)(pbVar11 + 0x58) = uStack_80;
        *(ulonglong *)(pbVar11 + 0x40) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(pbVar11 + 0x48) = uStack_90;
        *(undefined4 *)(pbVar11 + 0x30) = uStack_a8;
        *(undefined4 *)(pbVar11 + 0x34) = uStack_a4;
        *(undefined4 *)(pbVar11 + 0x38) = uStack_a0;
        *(undefined4 *)(pbVar11 + 0x3c) = uStack_9c;
        *(undefined4 *)(pbVar11 + 0x20) = uStack_b8;
        *(undefined4 *)(pbVar11 + 0x24) = uStack_b4;
        *(undefined4 *)(pbVar11 + 0x28) = uStack_b0;
        *(undefined4 *)(pbVar11 + 0x2c) = uStack_ac;
        *(undefined4 *)(pbVar11 + 0x10) = uStack_c8;
        *(undefined4 *)(pbVar11 + 0x14) = uStack_c4;
        *(undefined4 *)(pbVar11 + 0x18) = uStack_c0;
        *(undefined4 *)(pbVar11 + 0x1c) = uStack_bc;
        *(undefined4 *)pbVar11 = (undefined4)uStack_d8;
        *(undefined4 *)(pbVar11 + 4) = uStack_d8._4_4_;
        *(undefined4 *)(pbVar11 + 8) = (undefined4)uStack_d0;
        *(undefined4 *)(pbVar11 + 0xc) = uStack_d0._4_4_;
        plVar5 = *(longlong **)(param_1 + 0x30);
        puStack_48 = (undefined8 *)(param_1 + 0x30);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        pbStack_50 = pbVar11;
        if (*plVar5 == 0) {
          pdb_140c7aeb0(puStack_48);
        }
        *puStack_48 = pbStack_50;
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x80);
    }
    uStack_f8 = uStack_90;
    uStack_130 = CONCAT44(uStack_c4,uStack_c8);
    uStack_128 = CONCAT44(uStack_bc,uStack_c0);
    uStack_120 = CONCAT44(uStack_b4,uStack_b8);
    uStack_118 = CONCAT44(uStack_ac,uStack_b0);
    uStack_110 = CONCAT44(uStack_a4,uStack_a8);
    uStack_108 = CONCAT44(uStack_9c,uStack_a0);
    uStack_100 = CONCAT44(uStack_94,uStack_98);
    uStack_138 = uStack_d0;
  }
  uStack_d0 = uStack_138;
  uStack_c8 = (undefined4)uStack_130;
  uStack_c4 = uStack_130._4_4_;
  uStack_c0 = (undefined4)uStack_128;
  uStack_bc = uStack_128._4_4_;
  uStack_b8 = (undefined4)uStack_120;
  uStack_b4 = uStack_120._4_4_;
  uStack_b0 = (undefined4)uStack_118;
  uStack_ac = uStack_118._4_4_;
  uStack_a8 = (undefined4)uStack_110;
  uStack_a4 = uStack_110._4_4_;
  uStack_a0 = (undefined4)uStack_108;
  uStack_9c = uStack_108._4_4_;
  uStack_98 = (undefined4)uStack_100;
  uStack_94 = uStack_100._4_4_;
  uStack_90 = uStack_f8;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14302d918,0x2b,&uStack_d8,&UNK_14302d8f8,&UNK_14302d708);
}

