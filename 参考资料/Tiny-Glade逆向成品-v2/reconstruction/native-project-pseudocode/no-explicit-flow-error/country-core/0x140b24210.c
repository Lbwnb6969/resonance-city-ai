// VA 0x140b24210, PDB extent 970 bytes
// country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_piece_groups
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_piece_groups
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 970 */

longlong * pdb_140b24210(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong lStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  undefined4 *puStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  longlong *plStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_5c = 0;
  pbStack_b8 = *(byte **)(param_2 + 0x68);
  lStack_b0 = (longlong)pbStack_b8 + *(longlong *)(param_2 + 0x70) * 0x48;
  uStack_a8 = 0;
  uStack_90 = 0;
  puStack_c0 = &uStack_5c;
  pdb_1415fd480(&lStack_d8,&puStack_c0);
  if ((uStack_c8 == 0) || (pbStack_d0 + uStack_c8 * 0x18 == (byte *)0x18)) {
    pdb_142dc8110(&UNK_143056107,0x21,&UNK_143056158);
    goto LAB_140b244f6;
  }
  uVar10 = *(ulonglong *)(pbStack_d0 + uStack_c8 * 0x18 + -8);
  uVar8 = uVar10 * 8;
  if (uVar8 < 0x7ffffffffffffffd && uVar10 >> 0x3d == 0) {
    uVar1 = *(undefined8 *)(pbStack_d0 + uStack_c8 * 0x18 + -0x10);
    if (uVar8 == 0) {
      pbStack_50 = (byte *)0x4;
      uStack_58 = 0;
      uVar9 = uStack_58;
    }
    else {
      pdb_14007ee60();
      uVar6 = 4;
      pbStack_50 = pub_1406abab0(uVar8,4);
      uVar9 = uVar10;
      if (pbStack_50 == (byte *)0x0) goto LAB_140b242d0;
    }
    uStack_58 = uVar9;
    if (uVar10 != 0) {
      pub_142e32760(pbStack_50,uVar1,uVar8);
    }
    plStack_78 = param_1;
    uStack_68 = uVar10;
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(0x5400,4);
    if (pbVar5 != (byte *)0x0) {
      puStack_c0 = (undefined4 *)0xa80;
      lStack_b0 = 0;
      pbStack_70 = pbStack_d0;
      puVar11 = (ulonglong *)(pbStack_d0 + 0x10);
      uVar10 = 0;
      pbStack_b8 = pbVar5;
      do {
        pbVar7 = pbStack_50;
        uVar9 = uStack_68;
        if (uVar10 < uStack_c8) {
          pbVar7 = (byte *)puVar11[-1];
          uVar9 = *puVar11;
          uVar8 = uVar9 * 8;
        }
        if ((ulonglong)((longlong)puStack_c0 - lStack_b0) < uVar9) {
          pdb_142d7f1b0(&puStack_c0,lStack_b0,uVar9,4,8);
          pbVar5 = pbStack_b8;
LAB_140b24380:
          lVar3 = lStack_b0;
          pub_142e32760(pbVar5 + lStack_b0 * 8,pbVar7,uVar8);
          lStack_b0 = lVar3;
        }
        else if (uVar9 != 0) goto LAB_140b24380;
        plVar4 = plStack_78;
        uVar10 = uVar10 + 1;
        lStack_b0 = lStack_b0 + uVar9;
        puVar11 = puVar11 + 3;
        uVar8 = uStack_68 * 8;
        if (uVar10 == 0x38) {
          plStack_78[2] = lStack_b0;
          *plStack_78 = (longlong)puStack_c0;
          plStack_78[1] = (longlong)pbStack_b8;
          if (uStack_58 != 0) {
            pub_1406abac0(pbStack_50,uStack_58 << 3,4);
          }
          pbVar7 = pbStack_70;
          pbVar5 = pbStack_70 + 8;
          uVar8 = uStack_c8;
          do {
            if (*(longlong *)(pbVar5 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar5,*(longlong *)(pbVar5 + -8) << 3,4);
            }
            pbVar5 = pbVar5 + 0x18;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
          if (lStack_d8 != 0) {
            pub_1406abac0(pbVar7,lStack_d8 * 0x18,8);
          }
          return plVar4;
        }
      } while( true );
    }
    pdb_142dc7e2a(4,0x5400);
  }
  else {
    uVar6 = 0;
LAB_140b242d0:
    pdb_142dc7e2a(uVar6,uVar8);
  }
LAB_140b244f6:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

