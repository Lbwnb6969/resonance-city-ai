// VA 0x1409ccb50, PDB extent 2532 bytes
// country_core::systems::debug::human_scale_ref::human_scale_ref
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/debug/human_scale_ref.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::debug::human_scale_ref::human_scale_ref
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/debug/human_scale_ref.rs
   Extent: 2532 */

void pdb_1409ccb50(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong unaff_RSI;
  undefined *unaff_R12;
  undefined *unaff_R13;
  longlong *plVar14;
  longlong *plStack_e0;
  undefined8 uStack_d8;
  char cStack_c0;
  
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') {
    cVar6 = '\0';
    plVar10 = param_4;
    plVar14 = param_3;
    goto LAB_1409ccd77;
  }
  unaff_R12 = &UNK_14302cecb;
  unaff_RSI = 0x3e;
  uVar13 = 0x3e;
  lVar7 = pdb_1409d0880(&UNK_14302cecb);
  if (lVar7 == 1) {
    if (uVar13 < 0x3f) {
      unaff_R12 = &UNK_14302cecb;
      uVar8 = pdb_1409d0880(&UNK_14302cecb);
      if ((uVar8 & 1) != 0) {
        if (0x3e < uVar13 + 2) goto LAB_1409cd33d;
        unaff_RSI = 0x3c - uVar13;
        unaff_R12 = &UNK_14302cecd + uVar13;
      }
      goto LAB_1409ccc26;
    }
  }
  else {
LAB_1409ccc26:
    puVar9 = &UNK_14302c900;
    unaff_R13 = &UNK_14302c8c8;
    do {
      pbVar1 = puVar9 + -1;
      uVar12 = (uint)(char)*pbVar1;
      if ((int)uVar12 < 0) {
        bVar3 = puVar9[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar9[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar9 + -4;
            puVar9 = puVar9 + -4;
            uVar12 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar9 = puVar9 + -3;
            uVar12 = bVar4 & 0xf;
          }
          uVar12 = bVar3 & 0x3f | uVar12 << 6;
        }
        else {
          puVar9 = puVar9 + -2;
          uVar12 = bVar3 & 0x1f;
        }
        uVar12 = (uint)(*pbVar1 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_1409cccb9;
LAB_1409cccdc:
        if ((undefined *)0x38 < puVar9 + -0x14302c8c7) goto LAB_1409cd2fa;
        plVar14 = (longlong *)(0x37 - (longlong)(puVar9 + -0x14302c8c8));
        unaff_R13 = puVar9 + 1;
        goto LAB_1409ccd06;
      }
      puVar9 = puVar9 + -1;
      if (uVar12 == 0x5c) goto LAB_1409cccdc;
LAB_1409cccb9:
      if (uVar12 == 0x2f) goto LAB_1409cccdc;
    } while (puVar9 != &UNK_14302c8c8);
    plVar14 = (longlong *)0x38;
LAB_1409ccd06:
    plVar10 = (longlong *)pdb_140e97000();
    plStack_e0 = param_2;
    if ((char)plVar10[0xd] != '\x01') goto LAB_1409cd2c6;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        uStack_d8 = pdb_140e94f10(plVar10 + 1,unaff_R12,unaff_RSI,unaff_R13,plVar14,1,0);
        *plVar10 = *plVar10 + 1;
        param_2 = plStack_e0;
        plVar10 = param_4;
        plVar14 = param_3;
        cStack_c0 = cVar6;
LAB_1409ccd77:
        if (*(char *)(*param_5 + 200) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001409ccda5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_14302d10c +
                    *(int *)(&UNK_14302d10c + (ulonglong)*(uint *)(*param_2 + 0x120) * 4)))
                    (&UNK_14302d10c +
                     *(int *)(&UNK_14302d10c + (ulonglong)*(uint *)(*param_2 + 0x120) * 4));
          return;
        }
        if (cVar6 == '\0') {
          return;
        }
        plVar11 = (longlong *)pdb_140e97000();
        if (((char)plVar11[0xd] != '\x01') &&
           (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0)) break;
        param_4 = param_2;
        param_3 = plVar10;
        cVar6 = cStack_c0;
        if (*plVar11 == 0) {
          *plVar11 = -1;
          pdb_140e95370(plVar11 + 1,uStack_d8);
          *plVar11 = *plVar11 + 1;
          return;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1409cd2c6:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_1409cd2fa:
    pdb_142dc8070(&UNK_14302c8c8,0x38);
  }
  pdb_142dc8070(&UNK_14302cecb,0x3e,0);
LAB_1409cd33d:
  pdb_142dc8070(&UNK_14302cecb,0x3e);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

