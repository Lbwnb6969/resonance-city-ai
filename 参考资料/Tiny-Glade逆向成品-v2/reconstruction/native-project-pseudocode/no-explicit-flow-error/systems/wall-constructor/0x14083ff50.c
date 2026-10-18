// VA 0x14083ff50, PDB extent 719 bytes
// system_wall_constructor::stone_foundation_surface_systems::despawn_stone_foundation_surface
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/stone_foundation_surface_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::stone_foundation_surface_systems::despawn_stone_foundation_surface
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/stone_foundation_surface_systems.rs
   Extent: 719 */

void pdb_14083ff50(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  undefined8 uVar11;
  byte *pbVar12;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  undefined8 *puStack_78;
  longlong lStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar2 = *param_1;
  pbVar9 = (byte *)&uStack_d0;
  uStack_d0 = param_3;
  uVar7 = pdb_1400af0a0(lVar2 + 0x20,pbVar9);
  pdb_140269750(&lStack_b8,lVar2,uVar7,pbVar9);
  pbVar8 = pbStack_b0;
  if (!SBORROW8(0,(longlong)pbStack_b0)) {
    pbStack_e8 = pbStack_a8;
    lStack_e0 = (longlong)pbStack_a0;
  }
  lStack_b8 = (longlong)pbStack_b0;
  pbStack_b0 = pbStack_e8;
  pbStack_a8 = (byte *)lStack_e0;
  pbStack_a0 = (byte *)0x0;
  pbStack_80 = (byte *)0x0;
  uVar7 = param_2[3];
  uVar3 = param_2[2];
  uVar4 = *param_2;
  uVar5 = param_2[1];
LAB_14083ffed:
  uStack_c0 = (longlong)pbVar8 * 8;
  lStack_c8 = (longlong)pbVar8;
  pbVar12 = pbStack_a0;
  pbVar8 = pbStack_a0;
  do {
    if (pbVar8 == (byte *)0x0) {
LAB_14084007a:
      pbVar8 = (byte *)lStack_b8;
      lVar2 = lStack_b8;
      if (lStack_b8 != -0x7fffffffffffffff) {
        lStack_b8 = -0x8000000000000000;
        if (!SBORROW8(0,(longlong)pbVar8)) break;
      }
      if (pbStack_80 == (byte *)0x0) {
        return;
      }
      if (puStack_78 == puStack_68) {
        uVar11 = 0;
      }
      else {
        puVar1 = puStack_78 + 1;
        uVar11 = *puStack_78;
        puStack_78 = puVar1;
        if ((int)uVar11 != 0) goto LAB_1408400f5;
      }
      if (lStack_70 != 0) {
        pub_1406abac0(pbStack_80,lStack_70 << 3,8);
      }
      pbStack_80 = (byte *)0x0;
LAB_1408400f5:
      pbVar8 = (byte *)0x0;
      iVar10 = (int)uVar11;
      uVar6 = uStack_110;
    }
    else {
      if (pbVar12 == pbVar9) {
        uVar11 = 0;
LAB_140840055:
        if (lStack_c8 != 0) {
          pub_1406abac0(pbVar8,uStack_c0,8);
        }
        pbStack_a0 = (byte *)0x0;
        if ((int)uVar11 == 0) goto LAB_14084007a;
        goto LAB_1408400f5;
      }
      pbStack_98 = pbVar12 + 8;
      uVar11 = *(undefined8 *)pbVar12;
      iVar10 = (int)uVar11;
      pbVar12 = pbStack_98;
      uVar6 = uStack_110;
      if (iVar10 == 0) goto LAB_140840055;
    }
    uStack_110 = uVar11;
    if (iVar10 == 0) {
      uStack_110 = uVar6;
      if ((-0x7fffffffffffffff < lStack_b8) && (lStack_b8 != 0)) {
        pub_1406abac0(pbStack_b0,lStack_b8 << 3,8);
      }
      if ((pbVar8 != (byte *)0x0) && (lStack_90 != 0)) {
        pub_1406abac0(pbVar8,lStack_90 << 3,8);
      }
      if ((pbStack_80 != (byte *)0x0) && (lStack_70 != 0)) {
        pub_1406abac0(pbStack_80,lStack_70 << 3,8);
      }
      return;
    }
    uStack_108 = uVar4;
    uStack_100 = uVar5;
    uStack_f8 = uVar3;
    uStack_f0 = uVar7;
    pdb_140f04aa0(&uStack_110,&UNK_14300b1a8);
  } while( true );
  pbVar9 = pbStack_b0 + (longlong)pbStack_a8 * 8;
  pbStack_a0 = pbStack_b0;
  pbStack_98 = pbStack_b0;
  lStack_90 = lVar2;
  pbStack_88 = pbVar9;
  goto LAB_14083ffed;
}

