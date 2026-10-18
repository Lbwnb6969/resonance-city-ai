// VA 0x1421233e0, PDB extent 2158 bytes
// system_color::style_changes::StyleChanges::record
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_changes::StyleChanges::record
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
   Extent: 2158 */

void pdb_1421233e0(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 uStack_1a8;
  byte *pbStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  longlong lStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar9 = param_2;
  pdb_140a1aa60(&uStack_98);
  pbStack_70 = *(byte **)(param_1 + 8) + *(longlong *)(param_1 + 0x10) * 0x20;
  pbVar6 = pbStack_70;
  pbVar10 = *(byte **)(param_1 + 8);
  do {
    do {
      pbVar5 = pbVar10;
      if (pbVar5 == pbVar6) {
        uStack_61 = 1;
        lVar7 = pdb_140a1a890(&uStack_98);
        if (lVar7 == 0) {
          pbStack_78 = (byte *)CONCAT44(uStack_8c,uStack_90);
          lStack_80 = lStack_88;
          pbStack_70 = (byte *)0x0;
          pbVar6 = pbStack_78;
          while ((byte *)lStack_80 != pbStack_70) {
            pbStack_70 = (byte *)((longlong)pbStack_70 + 1);
            pdb_140975710(pbVar6);
            pbVar6 = pbVar6 + 0x18;
          }
          if (CONCAT44(uStack_94,uStack_98) != 0) {
            pub_1406abac0(pbStack_78,CONCAT44(uStack_94,uStack_98) * 0x18,8);
          }
        }
        else {
          puStack_198 = (undefined8 *)lStack_88;
          uStack_61 = 0;
          pbStack_1a0 = (byte *)pdb_140a1ac80(&uStack_1a8);
          uStack_1a8 = 7;
          uStack_61 = 0;
          puStack_198 = puVar9;
          pdb_140ae5180(param_2,&uStack_1a8,&UNK_14345fbb8);
        }
        return;
      }
      pbVar10 = pbVar5 + 0x20;
      bVar1 = *pbVar5;
    } while (0xf < bVar1);
    cVar8 = bVar1 - 3;
    if (bVar1 < 3) {
      cVar8 = '\v';
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(cVar8) {
    case '\0':
      pbStack_1a0 = *(byte **)(pbVar5 + 0x18);
      puStack_198 = (undefined8 *)CONCAT62(puStack_198._2_6_,*(undefined2 *)(pbVar5 + 1));
      uStack_1a8 = 0x8000000000000009;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pdb_140a1aa80(&uStack_98);
      break;
    case '\x01':
      pbStack_1a0 = *(byte **)(pbVar5 + 0x18);
      puStack_198 = (undefined8 *)CONCAT62(puStack_198._2_6_,*(undefined2 *)(pbVar5 + 1));
      uStack_1a8 = 0x8000000000000008;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pdb_140a1aa80(&uStack_98);
      break;
    case '\x02':
      pbStack_1a0 = *(byte **)(pbVar5 + 0x18);
      puStack_198 = (undefined8 *)CONCAT62(puStack_198._2_6_,*(undefined2 *)(pbVar5 + 1));
      uStack_1a8 = 0x800000000000000d;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pdb_140a1aa80(&uStack_98);
      break;
    case '\x03':
      pbStack_1a0 = *(byte **)(pbVar5 + 0x18);
      puStack_198 = *(undefined8 **)(pbVar5 + 4);
      uStack_1a8 = 0x800000000000000b;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pdb_140a1aa80(&uStack_98);
      break;
    case '\x04':
      uVar3 = *(undefined8 *)(pbVar5 + 4);
      uVar4 = *(undefined8 *)(pbVar5 + 0x18);
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(0x30,8);
      if (pbVar5 == (byte *)0x0) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar5[0] = 1;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 1;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0x18] = 3;
      *(undefined8 *)(pbVar5 + 0x20) = uVar4;
      *(undefined8 *)(pbVar5 + 0x28) = uVar3;
      uStack_1a8 = 9;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pbStack_1a0 = pbVar5;
      pdb_140ae5180(param_2,puVar9,&UNK_14345fbd0);
      break;
    case '\x05':
      uVar3 = *(undefined8 *)(pbVar5 + 4);
      uVar4 = *(undefined8 *)(pbVar5 + 0x18);
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(0x30,8);
      if (pbVar5 == (byte *)0x0) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar5[0] = 1;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 1;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0x18] = 4;
      *(undefined8 *)(pbVar5 + 0x20) = uVar4;
      *(undefined8 *)(pbVar5 + 0x28) = uVar3;
      uStack_1a8 = 9;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pbStack_1a0 = pbVar5;
      pdb_140ae5180(param_2,puVar9,&UNK_14345fbe8);
      break;
    case '\x06':
      uVar3 = *(undefined8 *)(pbVar5 + 4);
      uVar4 = *(undefined8 *)(pbVar5 + 0x18);
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(0x30,8);
      if (pbVar5 == (byte *)0x0) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar5[0] = 1;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 1;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0x18] = 0xb;
      *(undefined8 *)(pbVar5 + 0x20) = uVar4;
      *(undefined8 *)(pbVar5 + 0x28) = uVar3;
      uStack_1a8 = 9;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pbStack_1a0 = pbVar5;
      pdb_140ae5180(param_2,puVar9,&UNK_14345fc00);
      break;
    case '\a':
      uVar3 = *(undefined8 *)(pbVar5 + 4);
      uVar4 = *(undefined8 *)(pbVar5 + 0x18);
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(0x30,8);
      if (pbVar5 == (byte *)0x0) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar5[0] = 1;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 1;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0x18] = 6;
      *(undefined8 *)(pbVar5 + 0x20) = uVar4;
      *(undefined8 *)(pbVar5 + 0x28) = uVar3;
      uStack_1a8 = 9;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pbStack_1a0 = pbVar5;
      pdb_140ae5180(param_2,puVar9,&UNK_14345fc18);
      break;
    case '\b':
      uVar3 = *(undefined8 *)(pbVar5 + 4);
      uVar4 = *(undefined8 *)(pbVar5 + 0x18);
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(0x30,8);
      if (pbVar5 == (byte *)0x0) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar5[0] = 1;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 1;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0x18] = 5;
      *(undefined8 *)(pbVar5 + 0x20) = uVar4;
      *(undefined8 *)(pbVar5 + 0x28) = uVar3;
      uStack_1a8 = 9;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pbStack_1a0 = pbVar5;
      pdb_140ae5180(param_2,puVar9,&UNK_14345fc30);
      break;
    case '\t':
      pbStack_1a0 = *(byte **)(pbVar5 + 0x18);
      puStack_198 = *(undefined8 **)(pbVar5 + 4);
      uStack_1a8 = 0x800000000000000a;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pdb_140a1aa80(&uStack_98);
      break;
    case '\n':
      uVar3 = *(undefined8 *)(pbVar5 + 4);
      uVar4 = *(undefined8 *)(pbVar5 + 0x18);
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(0x30,8);
      if (pbVar5 == (byte *)0x0) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar5[0] = 1;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 1;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      pbVar5[0x18] = 7;
      *(undefined8 *)(pbVar5 + 0x20) = uVar4;
      *(undefined8 *)(pbVar5 + 0x28) = uVar3;
      uStack_1a8 = 9;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pbStack_1a0 = pbVar5;
      pdb_140ae5180(param_2,puVar9,&UNK_14345fc48);
      break;
    case '\v':
      pbStack_1a0 = (byte *)CONCAT44(pbStack_1a0._4_4_,*(undefined4 *)(pbVar5 + 8));
      uStack_1a8 = *(undefined8 *)pbVar5;
      uStack_a0 = *(undefined4 *)(pbVar5 + 0x14);
      uStack_a8 = *(undefined8 *)(pbVar5 + 0xc);
      uVar3 = *(undefined8 *)(pbVar5 + 0x18);
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(0x30,8);
      if (pbVar5 == (byte *)0x0) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar5[0] = 1;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 1;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      *(undefined8 *)(pbVar5 + 0x10) = uVar3;
      *(undefined4 *)(pbVar5 + 0x20) = pbStack_1a0._0_4_;
      *(undefined8 *)(pbVar5 + 0x18) = uStack_1a8;
      *(undefined4 *)(pbVar5 + 0x2c) = uStack_a0;
      *(undefined8 *)(pbVar5 + 0x24) = uStack_a8;
      uStack_1a8 = 9;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pbStack_1a0 = pbVar5;
      pdb_140ae5180(param_2,puVar9,&UNK_14345fc60);
      break;
    case '\f':
      bVar1 = pbVar5[1];
      bVar2 = pbVar5[2];
      uVar3 = *(undefined8 *)(pbVar5 + 0x18);
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(0x50,8);
      if (pbVar6 == (byte *)0x0) {
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x50);
      }
      pbVar6[0] = 1;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6[4] = 0;
      pbVar6[5] = 0;
      pbVar6[6] = 0;
      pbVar6[7] = 0;
      pbVar6[8] = 1;
      pbVar6[9] = 0;
      pbVar6[10] = 0;
      pbVar6[0xb] = 0;
      pbVar6[0xc] = 0;
      pbVar6[0xd] = 0;
      pbVar6[0xe] = 0;
      pbVar6[0xf] = 0;
      pbVar6[0x10] = 4;
      pbVar6[0x11] = bVar1;
      pbVar6[0x12] = bVar2;
      *(undefined8 *)(pbVar6 + 0x18) = uVar3;
      uStack_1a8 = 8;
      uStack_61 = 1;
      puVar9 = &uStack_1a8;
      pbStack_1a0 = pbVar6;
      pdb_140ae5180(param_2,puVar9,&UNK_14345fc78);
      pbVar6 = pbStack_70;
    }
  } while( true );
}

