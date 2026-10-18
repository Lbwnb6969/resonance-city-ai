// VA 0x142b4fd30, PDB extent 432 bytes
// system_critters::boids::BoidFlock::remove<system_critters::fish::fish::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/boids.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_critters::boids::BoidFlock::remove<system_critters::fish::fish::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/boids.rs
   Extent: 432 */

void pdb_142b4fd30(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte bVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  byte *pbVar28;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_70 = *param_2;
  pbStack_68 = (byte *)param_2[1];
  pbVar28 = pbStack_68 + param_2[2] * 8;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x20);
  uVar5 = *param_3;
  uVar22 = param_3[1];
  uVar23 = param_3[2];
  uVar6 = param_3[3];
  while( true ) {
    if (pbStack_68 == pbVar28) {
      if (lStack_70 != 0) {
        pub_1406abac0(pbStack_68,lStack_70 << 3,8);
      }
      return;
    }
    uVar7 = *(ulonglong *)(pbVar28 + -8);
    if (*(ulonglong *)(param_1 + 0x10) <= uVar7) break;
    lVar26 = *(ulonglong *)(param_1 + 0x10) - 1;
    puVar2 = (undefined4 *)(lVar3 + lVar26 * 0x18);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    uVar13 = puVar2[2];
    uVar14 = puVar2[3];
    *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18) = *(undefined8 *)(lVar3 + 0x10 + lVar26 * 0x18);
    puVar2 = (undefined4 *)(lVar3 + uVar7 * 0x18);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    puVar2[2] = uVar13;
    puVar2[3] = uVar14;
    *(longlong *)(param_1 + 0x10) = lVar26;
    if (*(ulonglong *)(param_1 + 0x28) <= uVar7) {
      pdb_142dc7eb2();
      goto LAB_142b4fe8d;
    }
    lVar26 = uVar7 * 0x38;
    uVar8 = *(undefined8 *)(lVar4 + 0x10 + lVar26);
    lVar27 = *(ulonglong *)(param_1 + 0x28) - 1;
    lVar25 = lVar27 * 0x38;
    uVar9 = *(undefined8 *)(lVar4 + 0x30 + lVar25);
    puVar2 = (undefined4 *)(lVar4 + lVar25);
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar25);
    uVar14 = *puVar1;
    uVar15 = puVar1[1];
    uVar16 = puVar1[2];
    uVar17 = puVar1[3];
    puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar25);
    uVar18 = *puVar1;
    uVar19 = puVar1[1];
    uVar20 = puVar1[2];
    uVar21 = puVar1[3];
    puVar1 = (undefined4 *)(lVar4 + lVar26);
    *puVar1 = *puVar2;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    *(undefined8 *)(lVar4 + 0x30 + lVar26) = uVar9;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar26);
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    puVar2[2] = uVar20;
    puVar2[3] = uVar21;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar26);
    *puVar2 = uVar14;
    puVar2[1] = uVar15;
    puVar2[2] = uVar16;
    puVar2[3] = uVar17;
    *(longlong *)(param_1 + 0x28) = lVar27;
    bVar24 = pdb_140ed63a0(uVar5,uVar8);
    pbVar28 = pbVar28 + -8;
    if ((bVar24 & (int)uVar8 != 0) == 1) {
      uStack_98 = uVar8;
      uStack_90 = uVar5;
      uStack_88 = uVar22;
      uStack_80 = uVar23;
      uStack_78 = uVar6;
      pdb_140f04aa0(&uStack_98,&UNK_14367dc80);
    }
  }
  pdb_142dc7eb2();
LAB_142b4fe8d:
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}

