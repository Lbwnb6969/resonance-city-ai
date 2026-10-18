// VA 0x1408f6430, PDB extent 945 bytes
// system_decorator::blueprint::instantiate_blueprint_colliders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::blueprint::instantiate_blueprint_colliders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 945 */

void pdb_1408f6430(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined *puVar15;
  undefined *unaff_R12;
  undefined *unaff_R13;
  longlong unaff_R15;
  longlong *plStack_58;
  
  cVar9 = pdb_140e94b40();
  if (cVar9 == '\0') goto LAB_1408f65f2;
  unaff_R12 = &UNK_14301d1ef;
  plStack_58 = (longlong *)0x3c;
  uVar14 = 0x3c;
  lVar11 = pdb_1408f7870(&UNK_14301d1ef);
  if (lVar11 == 1) {
    if (uVar14 < 0x3d) {
      unaff_R12 = &UNK_14301d1ef;
      uVar12 = pdb_1408f7870(&UNK_14301d1ef);
      if ((uVar12 & 1) != 0) {
        if (0x3c < uVar14 + 2) goto LAB_1408f66e2;
        plStack_58 = (longlong *)(0x3a - uVar14);
        unaff_R12 = &UNK_14301d1f1 + uVar14;
      }
      goto LAB_1408f64cd;
    }
  }
  else {
LAB_1408f64cd:
    puVar15 = &UNK_14301ce21;
    unaff_R13 = &UNK_14301cdf8;
    do {
      bVar2 = puVar15[-1];
      uVar10 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar15[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar15[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar15 + -4;
            puVar15 = puVar15 + -4;
            uVar10 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar15 = puVar15 + -3;
            uVar10 = bVar4 & 0xf;
          }
          uVar10 = bVar3 & 0x3f | uVar10 << 6;
        }
        else {
          puVar15 = puVar15 + -2;
          uVar10 = bVar3 & 0x1f;
        }
        uVar10 = (uint)(bVar2 & 0x3f) | uVar10 << 6;
        if (uVar10 != 0x5c) goto LAB_1408f6554;
LAB_1408f656d:
        if ((undefined *)0x29 < puVar15 + -0x14301cdf7) goto LAB_1408f669f;
        unaff_R15 = 0x29 - (longlong)(puVar15 + -0x14301cdf7);
        unaff_R13 = puVar15 + 1;
        goto LAB_1408f6590;
      }
      puVar15 = puVar15 + -1;
      if (uVar10 == 0x5c) goto LAB_1408f656d;
LAB_1408f6554:
      if (uVar10 == 0x2f) goto LAB_1408f656d;
    } while (puVar15 != &UNK_14301cdf8);
    unaff_R15 = 0x29;
LAB_1408f6590:
    plVar13 = (longlong *)pdb_140e97000();
    if ((char)plVar13[0xd] != '\x01') goto LAB_1408f666f;
    do {
      if (*plVar13 == 0) {
        *plVar13 = -1;
        unaff_R15 = pdb_140e94f10(plVar13 + 1,unaff_R12,plStack_58,unaff_R13,unaff_R15,1,0);
        *plVar13 = *plVar13 + 1;
        plStack_58 = plVar13;
LAB_1408f65f2:
        *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
        uVar5 = *param_2;
        uVar6 = *param_3;
        uVar7 = *param_4;
        *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
        pdb_1408f67f0(uVar5,uVar6,uVar7,*param_1);
        if (cVar9 == '\0') {
          return;
        }
        plVar13 = (longlong *)pdb_140e97000();
        if (((char)plVar13[0xd] != '\x01') &&
           (plVar13 = (longlong *)pdb_142dde6e0(plVar13,0), plVar13 == (longlong *)0x0)) break;
        if (*plVar13 == 0) {
          *plVar13 = -1;
          pdb_140e95370(plVar13 + 1,unaff_R15);
          *plVar13 = *plVar13 + 1;
          return;
        }
      }
      plVar13 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408f666f:
      plVar13 = (longlong *)pdb_142dde6e0(plVar13,0);
    } while (plVar13 != (longlong *)0x0);
    pdb_142dc7890(&UNK_14330e598);
LAB_1408f669f:
    pdb_142dc8070(&UNK_14301cdf8,0x29);
  }
  pdb_142dc8070(&UNK_14301d1ef,0x3c,0);
LAB_1408f66e2:
  pdb_142dc8070(&UNK_14301d1ef,0x3c);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

