// VA 0x14289fe90, PDB extent 571 bytes
// system_onboarding::hint_binding_renderer::render_hints::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_binding_renderer::render_hints::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding_renderer.rs
   Extent: 571 */

void pdb_14289fe90(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined1 auStack_a0 [96];
  
  lVar9 = *(longlong *)(*param_1 + 0x10);
  if (lVar9 != 0) {
    lVar1 = *(longlong *)(*param_1 + 8);
    pcVar2 = (char *)param_1[1];
    lVar10 = param_1[2];
    plVar3 = (longlong *)param_1[3];
    uVar8 = *(undefined8 *)(param_2 + 8);
    lStack_d8 = 0;
    uStack_d0 = pdb_140315970(&lStack_d8);
    uVar7 = _UNK_1435ad320;
    uVar6 = _DAT_1435ad318;
    uStack_c8 = _DAT_1435ad318;
    uStack_c0 = _UNK_1435ad320;
    uStack_c8 = pdb_142b38eb0(&uStack_d0);
    uStack_d0 = uVar8;
    uVar8 = pdb_142b39020(&uStack_d0);
    pdb_14072caa0(auStack_a0,param_2,uVar8);
    plStack_b8 = plVar3;
    lStack_b0 = lVar10;
    pdb_142b37b50(lVar1,lVar10,auStack_a0,*plVar3 + 1,*pcVar2);
    uVar5 = _DAT_1435ad108;
    uVar4 = _DAT_142f9515c;
    if (lVar9 != 1) {
      lVar10 = lVar9 * 0x30 + -0x30;
      lVar11 = 0xf4241;
      lVar9 = lVar1 + 0x30;
      do {
        pdb_1428a1da0(&uStack_d0,param_2,lVar11,&UNK_1435ad232,1);
        uVar12 = uVar5;
        if (*pcVar2 == '\0') {
          uVar12 = uVar4;
        }
        lStack_a8 = lVar9 + 0x30;
        uVar8 = pdb_140726ff0(&uStack_d0);
        pdb_142b39190(uVar8,uVar12);
        uVar8 = *(undefined8 *)(param_2 + 8);
        lStack_d8 = lVar11 + -1000000;
        uStack_d0 = pdb_140315970(&lStack_d8);
        uStack_c8 = uVar6;
        uStack_c0 = uVar7;
        uStack_c8 = pdb_142b38eb0(&uStack_d0);
        uStack_d0 = uVar8;
        uVar8 = pdb_142b39020(&uStack_d0);
        pdb_14072caa0(auStack_a0,param_2,uVar8);
        pdb_142b37b50(lVar9,lStack_b0,auStack_a0,*plStack_b8 + 1,*pcVar2);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + -0x30;
        lVar9 = lStack_a8;
      } while (lVar10 != 0);
    }
  }
  return;
}

