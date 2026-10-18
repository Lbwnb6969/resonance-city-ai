// VA 0x1408dc9a0, PDB extent 961 bytes
// system_decorator::cull_oob_decorators::cull_stair_attached_decorators
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::cull_oob_decorators::cull_stair_attached_decorators
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 961 */

void pdb_1408dc9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  undefined8 uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  undefined *unaff_R12;
  undefined *unaff_R13;
  longlong unaff_R15;
  longlong *plStack_58;
  
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') {
    uVar11 = 0;
    goto LAB_1408dcb62;
  }
  unaff_R12 = &UNK_143019fe3;
  plStack_58 = (longlong *)0x45;
  uVar12 = 0x45;
  lVar8 = pdb_1408dd5e0(&UNK_143019fe3);
  if (lVar8 == 1) {
    if (uVar12 < 0x46) {
      unaff_R12 = &UNK_143019fe3;
      uVar9 = pdb_1408dd5e0(&UNK_143019fe3);
      if ((uVar9 & 1) != 0) {
        if (0x45 < uVar12 + 2) goto LAB_1408dcc65;
        plStack_58 = (longlong *)(0x43 - uVar12);
        unaff_R12 = &UNK_143019fe5 + uVar12;
      }
      goto LAB_1408dca3d;
    }
  }
  else {
LAB_1408dca3d:
    puVar13 = &UNK_143019d67;
    unaff_R13 = &UNK_143019d34;
    do {
      bVar2 = puVar13[-1];
      uVar7 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar13[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar13[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar13 + -4;
            puVar13 = puVar13 + -4;
            uVar7 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar13 = puVar13 + -3;
            uVar7 = bVar4 & 0xf;
          }
          uVar7 = bVar3 & 0x3f | uVar7 << 6;
        }
        else {
          puVar13 = puVar13 + -2;
          uVar7 = bVar3 & 0x1f;
        }
        uVar7 = (uint)(bVar2 & 0x3f) | uVar7 << 6;
        if (uVar7 != 0x5c) goto LAB_1408dcac4;
LAB_1408dcadd:
        if ((undefined *)0x33 < puVar13 + -0x143019d33) goto LAB_1408dcc22;
        unaff_R15 = 0x33 - (longlong)(puVar13 + -0x143019d33);
        unaff_R13 = puVar13 + 1;
        goto LAB_1408dcb00;
      }
      puVar13 = puVar13 + -1;
      if (uVar7 == 0x5c) goto LAB_1408dcadd;
LAB_1408dcac4:
      if (uVar7 == 0x2f) goto LAB_1408dcadd;
    } while (puVar13 != &UNK_143019d34);
    unaff_R15 = 0x33;
LAB_1408dcb00:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_1408dcbf2;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        unaff_R15 = pdb_140e94f10(plVar10 + 1,unaff_R12,plStack_58,unaff_R13,unaff_R15,1,0);
        *plVar10 = *plVar10 + 1;
        uVar11 = 1;
        plStack_58 = plVar10;
LAB_1408dcb62:
        pdb_1414f8970(param_6,param_1,param_2,param_3,param_4,param_5,param_7,param_8,uVar11);
        if (cVar6 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] != '\x01') &&
           (plVar10 = (longlong *)pdb_142dde6e0(plVar10,0), plVar10 == (longlong *)0x0)) break;
        if (*plVar10 == 0) {
          *plVar10 = -1;
          pdb_140e95370(plVar10 + 1,unaff_R15);
          *plVar10 = *plVar10 + 1;
          return;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408dcbf2:
      plVar10 = (longlong *)pdb_142dde6e0(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_14330e598);
LAB_1408dcc22:
    pdb_142dc8070(&UNK_143019d34,0x33);
  }
  pdb_142dc8070(&UNK_143019fe3,0x45,0);
LAB_1408dcc65:
  pdb_142dc8070(&UNK_143019fe3,0x45);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

