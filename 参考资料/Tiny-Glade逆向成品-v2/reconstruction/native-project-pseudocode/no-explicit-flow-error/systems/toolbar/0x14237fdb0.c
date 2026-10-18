// VA 0x14237fdb0, PDB extent 893 bytes
// toolbar::text::update_text_renderer_scale
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::text::update_text_renderer_scale
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/text.rs
   Extent: 893 */

void pdb_14237fdb0(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong unaff_RBX;
  undefined *puVar11;
  longlong unaff_R12;
  undefined *unaff_R14;
  undefined *unaff_R15;
  
  plVar10 = param_2;
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') goto LAB_14237ff61;
  unaff_RBX = 0x29;
  lVar8 = pdb_14237e8c0(0x29);
  unaff_R14 = &UNK_1434dd903;
  if (lVar8 == 1) {
    if (plVar10 < (longlong *)0x2a) {
      uVar9 = pdb_14237e8c0(plVar10);
      if ((uVar9 & 1) != 0) {
        if (0x29 < (longlong)plVar10 + 2U) goto LAB_14238004e;
        unaff_RBX = 0x27 - (longlong)plVar10;
        unaff_R14 = &UNK_1434dd905 + (longlong)plVar10;
      }
      goto LAB_14237fe36;
    }
  }
  else {
LAB_14237fe36:
    puVar11 = &UNK_1434ddaca;
    unaff_R15 = &UNK_1434ddaa8;
    do {
      bVar2 = puVar11[-1];
      uVar7 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar11[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar11[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar11 + -4;
            puVar11 = puVar11 + -4;
            uVar7 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar11 = puVar11 + -3;
            uVar7 = bVar4 & 0xf;
          }
          uVar7 = bVar3 & 0x3f | uVar7 << 6;
        }
        else {
          puVar11 = puVar11 + -2;
          uVar7 = bVar3 & 0x1f;
        }
        uVar7 = (uint)(bVar2 & 0x3f) | uVar7 << 6;
        if (uVar7 != 0x5c) goto LAB_14237fec4;
LAB_14237fedd:
        if ((undefined *)0x22 < puVar11 + -0x1434ddaa7) goto LAB_14238000b;
        unaff_R12 = 0x22 - (longlong)(puVar11 + -0x1434ddaa7);
        unaff_R15 = puVar11 + 1;
        goto LAB_14237ff00;
      }
      puVar11 = puVar11 + -1;
      if (uVar7 == 0x5c) goto LAB_14237fedd;
LAB_14237fec4:
      if (uVar7 == 0x2f) goto LAB_14237fedd;
    } while (puVar11 != &UNK_1434ddaa8);
    unaff_R12 = 0x22;
LAB_14237ff00:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_14237ffdb;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        unaff_RBX = pdb_140e94f10(plVar10 + 1,unaff_R14,unaff_RBX,unaff_R15,unaff_R12,1,0);
        *plVar10 = *plVar10 + 1;
LAB_14237ff61:
        *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
        pdb_140cb6a90(*param_1,(float)*(uint *)(*param_2 + 4) / _DAT_142e4bfe4);
        if (cVar6 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] != '\x01') &&
           (plVar10 = (longlong *)pdb_142dcf3a0(plVar10,0), plVar10 == (longlong *)0x0)) break;
        if (*plVar10 == 0) {
          *plVar10 = -1;
          pdb_140e95370(plVar10 + 1,unaff_RBX);
          *plVar10 = *plVar10 + 1;
          return;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14237ffdb:
      plVar10 = (longlong *)pdb_142dcf3a0(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_1432a7ee8);
LAB_14238000b:
    pdb_142dc8070(&UNK_1434ddaa8,0x22);
  }
  pdb_142dc8070(&UNK_1434dd903,0x29,0);
LAB_14238004e:
  pdb_142dc8070(&UNK_1434dd903,0x29);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

