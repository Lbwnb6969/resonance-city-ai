// VA 0x1408f60b0, PDB extent 893 bytes
// system_decorator::blueprint::copy_blueprints_to_prev
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::blueprint::copy_blueprints_to_prev
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 893 */

void pdb_1408f60b0(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong unaff_RBX;
  undefined *puVar15;
  longlong unaff_R12;
  undefined *unaff_R14;
  undefined *unaff_R15;
  
  cVar9 = pdb_140e94b40();
  if (cVar9 == '\0') goto LAB_1408f6271;
  unaff_R14 = &UNK_14301d1b8;
  unaff_RBX = 0x34;
  uVar14 = 0x34;
  lVar11 = pdb_1408f7870(&UNK_14301d1b8);
  if (lVar11 == 1) {
    if (uVar14 < 0x35) {
      unaff_R14 = &UNK_14301d1b8;
      uVar12 = pdb_1408f7870(&UNK_14301d1b8);
      if ((uVar12 & 1) != 0) {
        if (0x34 < uVar14 + 2) goto LAB_1408f635c;
        unaff_RBX = 0x32 - uVar14;
        unaff_R14 = &UNK_14301d1ba + uVar14;
      }
      goto LAB_1408f6143;
    }
  }
  else {
LAB_1408f6143:
    puVar15 = &UNK_14301ce21;
    unaff_R15 = &UNK_14301cdf8;
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
        if (uVar10 != 0x5c) goto LAB_1408f61d4;
LAB_1408f61ed:
        if ((undefined *)0x29 < puVar15 + -0x14301cdf7) goto LAB_1408f6319;
        unaff_R12 = 0x29 - (longlong)(puVar15 + -0x14301cdf7);
        unaff_R15 = puVar15 + 1;
        goto LAB_1408f6210;
      }
      puVar15 = puVar15 + -1;
      if (uVar10 == 0x5c) goto LAB_1408f61ed;
LAB_1408f61d4:
      if (uVar10 == 0x2f) goto LAB_1408f61ed;
    } while (puVar15 != &UNK_14301cdf8);
    unaff_R12 = 0x29;
LAB_1408f6210:
    plVar13 = (longlong *)pdb_140e97000();
    if ((char)plVar13[0xd] != '\x01') goto LAB_1408f62e9;
    do {
      if (*plVar13 == 0) {
        *plVar13 = -1;
        unaff_RBX = pdb_140e94f10(plVar13 + 1,unaff_R14,unaff_RBX,unaff_R15,unaff_R12,1,0);
        *plVar13 = *plVar13 + 1;
LAB_1408f6271:
        *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
        param_2 = (longlong *)*param_2;
        param_1 = (longlong *)*param_1;
        pdb_1414ac8a0(param_2,param_1);
        uVar6 = *(undefined4 *)((longlong)param_1 + 0x24);
        uVar7 = *(undefined4 *)(param_1 + 5);
        uVar8 = *(undefined4 *)((longlong)param_1 + 0x2c);
        *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)((longlong)param_2 + 0x24) = uVar6;
        *(undefined4 *)(param_2 + 5) = uVar7;
        *(undefined4 *)((longlong)param_2 + 0x2c) = uVar8;
        if (cVar9 == '\0') {
          return;
        }
        plVar13 = (longlong *)pdb_140e97000();
        if (((char)plVar13[0xd] != '\x01') &&
           (plVar13 = (longlong *)pdb_142dde6e0(plVar13,0), plVar13 == (longlong *)0x0)) break;
        if (*plVar13 == 0) {
          *plVar13 = -1;
          pdb_140e95370(plVar13 + 1,unaff_RBX);
          *plVar13 = *plVar13 + 1;
          return;
        }
      }
      plVar13 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408f62e9:
      plVar13 = (longlong *)pdb_142dde6e0(plVar13,0);
    } while (plVar13 != (longlong *)0x0);
    pdb_142dc7890(&UNK_14330e598);
LAB_1408f6319:
    pdb_142dc8070(&UNK_14301cdf8,0x29);
  }
  pdb_142dc8070(&UNK_14301d1b8,0x34,0);
LAB_1408f635c:
  pdb_142dc8070(&UNK_14301d1b8,0x34);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

