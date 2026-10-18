// VA 0x14091a910, PDB extent 1524 bytes
// country_core::systems::collision::visualize_colliders::visualize_colliders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/visualize_colliders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure:
   country_core::systems::collision::visualize_colliders::visualize_colliders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/visualize_colliders.rs
   Extent: 1524 */

void pdb_14091a910(int *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  byte bVar8;
  int *unaff_RDI;
  int *piVar9;
  undefined *puVar10;
  undefined *puVar11;
  int *unaff_R13;
  byte bVar12;
  undefined *puVar13;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined8 uStack_70;
  int *piStack_68;
  int *piStack_60;
  longlong *plStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar7 = param_2;
  cStack_49 = pdb_140e94b40();
  if (cStack_49 == '\0') {
    uStack_70 = 0;
    lVar5 = *param_2;
    param_2 = (longlong *)(ulonglong)*(byte *)(lVar5 + 0xd5);
    if (*(byte *)(lVar5 + 0xd5) != 0) goto LAB_14091aaf6;
    return;
  }
  unaff_RDI = (int *)0x4a;
  lVar5 = pdb_14091b300(0x4a);
  puVar13 = &UNK_1430201d3;
  if (lVar5 == 1) {
    if (plVar7 < (longlong *)0x4b) {
      uVar6 = pdb_14091b300(plVar7);
      if ((uVar6 & 1) != 0) {
        if (0x4a < (longlong)plVar7 + 2U) goto LAB_14091adc4;
        unaff_RDI = (int *)(0x48 - (longlong)plVar7);
        puVar13 = &UNK_1430201d5 + (longlong)plVar7;
      }
      goto LAB_14091a9a1;
    }
  }
  else {
LAB_14091a9a1:
    puVar10 = &UNK_143020040;
    puVar11 = &UNK_143020000;
    do {
      bVar8 = puVar10[-1];
      uVar4 = (uint)(char)bVar8;
      if ((char)bVar8 < '\0') {
        bVar12 = puVar10[-2];
        if ((char)bVar12 < -0x40) {
          bVar2 = puVar10[-3];
          if ((char)bVar2 < -0x40) {
            pbVar1 = puVar10 + -4;
            puVar10 = puVar10 + -4;
            uVar4 = bVar2 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar10 = puVar10 + -3;
            uVar4 = bVar2 & 0xf;
          }
          uVar4 = bVar12 & 0x3f | uVar4 << 6;
        }
        else {
          puVar10 = puVar10 + -2;
          uVar4 = bVar12 & 0x1f;
        }
        uVar4 = (uint)(bVar8 & 0x3f) | uVar4 << 6;
        if (uVar4 != 0x5c) goto LAB_14091aa24;
LAB_14091aa57:
        if ((undefined *)0x40 < puVar10 + -0x14301ffff) goto LAB_14091ad81;
        unaff_R13 = (int *)(0x40 - (longlong)(puVar10 + -0x14301ffff));
        puVar11 = puVar10 + 1;
        goto LAB_14091aa7a;
      }
      puVar10 = puVar10 + -1;
      if (uVar4 == 0x5c) goto LAB_14091aa57;
LAB_14091aa24:
      if (uVar4 == 0x2f) goto LAB_14091aa57;
    } while (puVar10 != &UNK_143020000);
    unaff_R13 = (int *)0x40;
LAB_14091aa7a:
    plVar7 = (longlong *)pdb_140e97000();
    if ((char)plVar7[0xd] != '\x01') goto LAB_14091ad34;
    do {
      if (*plVar7 == 0) {
        *plVar7 = -1;
        plStack_58 = plVar7;
        unaff_RDI = (int *)pdb_140e94f10(plVar7 + 1,puVar13,unaff_RDI,puVar11,unaff_R13,1,0);
        *plStack_58 = *plStack_58 + 1;
        piStack_68 = unaff_RDI;
        uStack_70 = 1;
        lVar5 = *param_2;
        param_2 = (longlong *)(ulonglong)*(byte *)(lVar5 + 0xd5);
        if (*(byte *)(lVar5 + 0xd5) == 0) {
          plVar7 = (longlong *)pdb_140e97000();
          if (((char)plVar7[0xd] != '\x01') &&
             (plVar7 = (longlong *)pdb_142d8ec20(plVar7,0), plVar7 == (longlong *)0x0)) break;
          if (*plVar7 == 0) {
            *plVar7 = -1;
            plStack_58 = plVar7;
            pdb_140e95370(plVar7 + 1,unaff_RDI);
LAB_14091acf2:
            *plStack_58 = *plStack_58 + 1;
            return;
          }
        }
        else {
          piStack_60 = unaff_RDI;
LAB_14091aaf6:
          puVar13 = *(undefined **)param_1;
          param_3 = (undefined8 *)*param_3;
          puVar11 = &UNK_143020558;
          param_1 = &iStack_a8;
          plVar7 = (longlong *)0x20;
LAB_14091ab14:
          if (plVar7 != (longlong *)0x3cb0) {
            plStack_58 = plVar7 + 0x72;
            unaff_R13 = *(int **)(puVar13 + 8 + (longlong)plVar7) +
                        *(longlong *)(puVar13 + 0x10 + (longlong)plVar7) * 0x30;
            piVar9 = *(int **)(puVar13 + 8 + (longlong)plVar7);
LAB_14091ab86:
            do {
              unaff_RDI = piVar9;
              plVar7 = plStack_58;
              if (unaff_RDI == unaff_R13) goto LAB_14091ab14;
              piVar9 = unaff_RDI + 0x30;
              if (*unaff_RDI == 1) {
                uVar6 = *(ulonglong *)(unaff_RDI + 4) & 0xffffffff;
                if (((*(ulonglong *)(puVar13 + 0x10) <= uVar6) ||
                    (lVar5 = *(longlong *)(puVar13 + 8), lVar5 == 0)) ||
                   (*(uint *)(lVar5 + 0x20 + uVar6 * 0x28) !=
                    ((uint)(*(ulonglong *)(unaff_RDI + 4) >> 0x20) | 1))) {
                  pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143020040);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                bVar8 = *(byte *)(lVar5 + uVar6 * 0x28);
                bVar12 = (byte)param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(bVar8) {
                case 0:
                  bVar8 = 1;
                  if (bVar12 == 1) break;
                  goto code_r0x00014091ac59;
                case 1:
                  bVar8 = 8;
                  if (bVar12 != 8) goto code_r0x00014091ac59;
                  break;
                case 2:
                case 3:
                  goto code_r0x00014091ac50;
                case 4:
                case 5:
                  bVar8 = 4;
                  if (bVar12 != 4) goto code_r0x00014091ac59;
                  break;
                case 6:
                  bVar8 = 5;
                  if (bVar12 != 5) goto code_r0x00014091ac59;
                  break;
                default:
                  bVar8 = 0xb;
                  if (bVar12 != 0xb) goto code_r0x00014091ac59;
                  break;
                case 8:
                  bVar8 = 6;
                  if (bVar12 != 6) goto code_r0x00014091ac59;
                  break;
                case 9:
                  bVar8 = 7;
                  if (bVar12 != 7) goto code_r0x00014091ac59;
                  break;
                case 10:
                case 0xb:
                  goto LAB_14091ab86;
                case 0xc:
                  bVar8 = 9;
code_r0x00014091ac50:
                  if (bVar8 != bVar12) {
code_r0x00014091ac59:
                    if ((bVar12 != 10) || ((bVar8 < 0xe && ((0x3010U >> (bVar8 & 0x1f) & 1) != 0))))
                    goto LAB_14091ab86;
                  }
                  break;
                case 0xf:
                  bVar8 = 0xc;
                  if (bVar12 != 0xc) goto code_r0x00014091ac59;
                  break;
                case 0x10:
                  bVar8 = 0xd;
                  if (bVar12 != 0xd) goto code_r0x00014091ac59;
                  break;
                case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iStack_a8 = unaff_RDI[0x11];
                iStack_a4 = unaff_RDI[0x12];
                iStack_a0 = unaff_RDI[0x13];
                iStack_9c = unaff_RDI[0x14];
                iStack_98 = unaff_RDI[0x15];
                iStack_94 = unaff_RDI[0x16];
                iStack_90 = unaff_RDI[0x17];
                pdb_14091a020(*(longlong *)(unaff_RDI + 8) +
                              (*(longlong *)(*(longlong *)(unaff_RDI + 10) + 0x10) - 1U &
                              0xfffffffffffffff0) + 0x10,*(longlong *)(unaff_RDI + 10),param_1,
                              param_3);
              }
            } while( true );
          }
          if (cStack_49 == '\0') {
            return;
          }
          plVar7 = (longlong *)pdb_140e97000();
          if (((char)plVar7[0xd] != '\x01') &&
             (plVar7 = (longlong *)pdb_142d8ec20(plVar7,0), plVar7 == (longlong *)0x0)) break;
          if (*plVar7 == 0) {
            *plVar7 = -1;
            plStack_58 = plVar7;
            pdb_140e95370(plVar7 + 1);
            goto LAB_14091acf2;
          }
        }
      }
      plVar7 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_14091ad34:
      plVar7 = (longlong *)pdb_142d8ec20(plVar7,0);
    } while (plVar7 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_14091ad81:
    pdb_142dc8070(&UNK_143020000,0x40);
  }
  pdb_142dc8070(&UNK_1430201d3,0x4a,0);
LAB_14091adc4:
  pdb_142dc8070(&UNK_1430201d3,0x4a);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

