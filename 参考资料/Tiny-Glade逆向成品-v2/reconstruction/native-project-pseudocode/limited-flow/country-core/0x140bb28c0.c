// VA 0x140bb28c0, PDB extent 7723 bytes
// country_core::systems::ivy::ivy_grower::ivy_grower
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_grower.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::ivy::ivy_grower::ivy_grower
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_grower.rs
   Extent: 7723 */

void pdb_140bb28c0(void)

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
  uint uVar11;
  ulonglong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  longlong lVar15;
  longlong *in_stack_00000040;
  
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140bb2a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1430620a0 +
              *(int *)(&UNK_1430620a0 + (ulonglong)*(uint *)(*in_stack_00000040 + 0x128) * 4)))
              (*in_stack_00000040,
               &UNK_1430620a0 +
               *(int *)(&UNK_1430620a0 + (ulonglong)*(uint *)(*in_stack_00000040 + 0x128) * 4));
    return;
  }
  puVar13 = &UNK_143061ecd;
  lVar15 = 0x32;
  uVar12 = 0x32;
  lVar7 = pdb_140bb9660(&UNK_143061ecd);
  if (lVar7 == 1) {
    if (0x32 < uVar12) {
      pdb_142dc8070(&UNK_143061ecd,0x32,0,uVar12,&UNK_143061f88);
LAB_140bb4167:
      pdb_142dc8070(&UNK_143061ecd,0x32);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar13 = &UNK_143061ecd;
    uVar8 = pdb_140bb9660(&UNK_143061ecd);
    if ((uVar8 & 1) != 0) {
      if (0x32 < uVar12 + 2) goto LAB_140bb4167;
      lVar15 = 0x30 - uVar12;
      puVar13 = &UNK_143061ecf + uVar12;
    }
  }
  puVar9 = &UNK_1430614f3;
  puVar14 = &UNK_1430614c2;
  do {
    pbVar1 = puVar9 + -1;
    uVar11 = (uint)(char)*pbVar1;
    if ((int)uVar11 < 0) {
      bVar3 = puVar9[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar9[-3];
        if ((char)bVar4 < -0x40) {
          pbVar2 = puVar9 + -4;
          puVar9 = puVar9 + -4;
          uVar11 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar9 = puVar9 + -3;
          uVar11 = bVar4 & 0xf;
        }
        uVar11 = bVar3 & 0x3f | uVar11 << 6;
      }
      else {
        puVar9 = puVar9 + -2;
        uVar11 = bVar3 & 0x1f;
      }
      uVar11 = (uint)(*pbVar1 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_140bb2a59;
LAB_140bb2a90:
      if ((undefined *)0x31 < puVar9 + -0x1430614c1) {
        pdb_142dc8070(&UNK_1430614c2,0x31,puVar9 + -0x1430614c1,0x31,&UNK_143061f68);
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2();
      }
      lVar7 = 0x30 - (longlong)(puVar9 + -0x1430614c2);
      puVar14 = puVar9 + 1;
      goto LAB_140bb2ab3;
    }
    puVar9 = puVar9 + -1;
    if (uVar11 == 0x5c) goto LAB_140bb2a90;
LAB_140bb2a59:
    if (uVar11 == 0x2f) goto LAB_140bb2a90;
  } while (puVar9 != &UNK_1430614c2);
  lVar7 = 0x31;
LAB_140bb2ab3:
  plVar10 = (longlong *)pdb_140e97000();
  if (((char)plVar10[0xd] != '\x01') &&
     (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 == (longlong *)0x0)) {
    pdb_142dc7890(&UNK_143326860);
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2();
  }
  if (*plVar10 != 0) {
    pdb_142dc8090(&UNK_143326a50);
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143061510);
  }
  *plVar10 = -1;
  pdb_140e94f10(plVar10 + 1,puVar13,lVar15,puVar14,lVar7,1,0);
  *plVar10 = *plVar10 + 1;
                    /* WARNING: Could not recover jumptable at 0x000140bb2b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1430620a0 +
            *(int *)(&UNK_1430620a0 + (ulonglong)*(uint *)(*in_stack_00000040 + 0x128) * 4)))
            (*in_stack_00000040,
             &UNK_1430620a0 +
             *(int *)(&UNK_1430620a0 + (ulonglong)*(uint *)(*in_stack_00000040 + 0x128) * 4));
  return;
}

