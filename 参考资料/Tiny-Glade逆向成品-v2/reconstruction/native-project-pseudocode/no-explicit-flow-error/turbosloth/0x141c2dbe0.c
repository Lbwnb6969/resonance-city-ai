// VA 0x141c2dbe0, PDB extent 471 bytes
// turbosloth::store::PackageManifest::insert
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::PackageManifest::insert
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 471 */

void pdb_141c2dbe0(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte *arg0;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong *puVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong *puStack_60;
  ulonglong uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar22 = param_1[1];
  uStack_58 = param_1[2];
  lVar21 = uStack_58 * 0x40;
  puStack_60 = param_1;
  if (uStack_58 != 0) {
    uVar2 = param_2[3];
    lVar3 = param_2[4];
    lVar23 = 0;
    do {
      if (*(longlong *)(uVar22 + 0x20 + lVar23) == lVar3) {
        arg0 = *(byte **)(uVar22 + 0x18 + lVar23);
        iVar20 = pub_142e32750(arg0,uVar2,lVar3);
        if (iVar20 == 0) {
          uVar24 = *(ulonglong *)(uVar22 + 0x10 + lVar23);
          if (uVar24 != 0) {
            pub_1406abac0(arg0,uVar24,1);
          }
          puVar1 = (undefined4 *)(uVar22 + lVar23);
          uVar24 = *(ulonglong *)(uVar22 + 0x28 + lVar23);
          if (uVar24 != 0) {
            pub_1406abac0(*(byte **)(uVar22 + 0x30 + lVar23),uVar24,1);
          }
          uVar4 = *(undefined4 *)param_2;
          uVar5 = *(undefined4 *)((longlong)param_2 + 4);
          uVar6 = *(undefined4 *)(param_2 + 1);
          uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
          uVar8 = *(undefined4 *)(param_2 + 2);
          uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
          uVar10 = *(undefined4 *)(param_2 + 3);
          uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
          uVar12 = *(undefined4 *)(param_2 + 4);
          uVar13 = *(undefined4 *)((longlong)param_2 + 0x24);
          uVar14 = *(undefined4 *)(param_2 + 5);
          uVar15 = *(undefined4 *)((longlong)param_2 + 0x2c);
          uVar16 = *(undefined4 *)((longlong)param_2 + 0x34);
          uVar17 = *(undefined4 *)(param_2 + 7);
          uVar18 = *(undefined4 *)((longlong)param_2 + 0x3c);
          puVar1[0xc] = *(undefined4 *)(param_2 + 6);
          puVar1[0xd] = uVar16;
          puVar1[0xe] = uVar17;
          puVar1[0xf] = uVar18;
          puVar1[8] = uVar12;
          puVar1[9] = uVar13;
          puVar1[10] = uVar14;
          puVar1[0xb] = uVar15;
          puVar1[4] = uVar8;
          puVar1[5] = uVar9;
          puVar1[6] = uVar10;
          puVar1[7] = uVar11;
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1[3] = uVar7;
          uVar24 = uStack_58;
          goto LAB_141c2dd27;
        }
      }
      lVar23 = lVar23 + 0x40;
    } while (lVar21 != lVar23);
  }
  uVar24 = uStack_58;
  puVar19 = puStack_60;
  puStack_a8 = (undefined1 *)*param_2;
  uStack_a0 = *(undefined4 *)(param_2 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_98 = *(undefined4 *)(param_2 + 2);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_90 = *(undefined4 *)(param_2 + 3);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_88 = *(undefined4 *)(param_2 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_80 = *(undefined4 *)(param_2 + 5);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_78 = *(undefined4 *)(param_2 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_70 = *(undefined4 *)(param_2 + 7);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (uStack_58 == *puStack_60) {
    pdb_142d8d860(puStack_60);
    uVar22 = puVar19[1];
  }
  uVar4 = *(undefined4 *)param_2;
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  uVar6 = *(undefined4 *)(param_2 + 1);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar8 = *(undefined4 *)(param_2 + 2);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar10 = *(undefined4 *)(param_2 + 3);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar12 = *(undefined4 *)(param_2 + 4);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar14 = *(undefined4 *)(param_2 + 5);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar17 = *(undefined4 *)(param_2 + 7);
  uVar18 = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar1 = (undefined4 *)(uVar22 + 0x30 + lVar21);
  *puVar1 = *(undefined4 *)(param_2 + 6);
  puVar1[1] = uVar16;
  puVar1[2] = uVar17;
  puVar1[3] = uVar18;
  puVar1 = (undefined4 *)(uVar22 + 0x20 + lVar21);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  puVar1 = (undefined4 *)(uVar22 + 0x10 + lVar21);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  puVar1 = (undefined4 *)(uVar22 + lVar21);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  uVar24 = uVar24 + 1;
  puVar19[2] = uVar24;
  uVar22 = puVar19[1];
LAB_141c2dd27:
  puStack_a8 = &uStack_49;
  if (1 < uVar24) {
    if (uVar24 < 0x15) {
      pdb_142624cf0(uVar22,uVar24,1,&puStack_a8);
    }
    else {
      pdb_142625400(uVar22,uVar24,&puStack_a8);
    }
  }
  return;
}

