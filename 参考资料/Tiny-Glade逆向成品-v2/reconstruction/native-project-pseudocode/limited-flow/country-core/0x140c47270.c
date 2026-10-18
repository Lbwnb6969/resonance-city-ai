// VA 0x140c47270, PDB extent 821 bytes
// country_core::resources::history::decorator_edit::convert_before_after_states_to_changes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure:
   country_core::resources::history::decorator_edit::convert_before_after_states_to_changes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/decorator_edit.rs
   Extent: 821 */

void pdb_140c47270(longlong *param_1,int *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  code *pcVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  char cVar20;
  char *pcVar21;
  ulonglong uVar22;
  longlong lVar23;
  float fVar24;
  int iVar25;
  char cVar26;
  longlong lVar27;
  float fVar28;
  longlong lVar29;
  undefined4 uStack_58;
  char cStack_54;
  
  fVar8 = *(float *)(param_3 + 5);
  fVar9 = *(float *)((longlong)param_3 + 0x2c);
  fVar15 = *(float *)(param_3 + 7);
  uVar16 = *(undefined4 *)((longlong)param_3 + 0x3c);
  lVar18 = param_3[8];
  uVar17 = *(undefined4 *)((longlong)param_3 + 0x44);
  lVar19 = param_3[9];
  cVar20 = *(char *)((longlong)param_3 + 0x49);
  bVar5 = *(byte *)((longlong)param_3 + 0x4a);
  lVar11 = param_3[2];
  lVar12 = param_3[3];
  cVar6 = *(char *)((longlong)param_3 + 0x76);
  iVar25 = *(int *)((longlong)param_3 + 0x54);
  fVar1 = *(float *)(param_3 + 0xb);
  fVar2 = *(float *)((longlong)param_3 + 100);
  lVar29 = *param_3;
  lVar13 = param_3[1];
  fVar28 = (float)((ulonglong)param_3[6] >> 0x20);
  fVar24 = (float)param_3[6];
  if ((*param_2 == (int)lVar29) && ((lVar29 != 0 || (*(longlong *)(param_2 + 2) == lVar13)))) {
    bVar7 = *(byte *)((longlong)param_2 + 0x4a);
    lVar27 = (ulonglong)bVar7 - 1;
    if ((ulonglong)bVar7 < 2) {
      lVar27 = 0;
    }
    lVar23 = (ulonglong)bVar5 - 1;
    if (bVar5 < 2) {
      lVar23 = 0;
    }
    if (lVar27 == lVar23) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar7) {
      case 2:
      case 3:
        if (((float)param_2[0xc] == fVar24) && (!NAN((float)param_2[0xc]) && !NAN(fVar24))) {
          if (((float)param_2[10] == fVar8) && (!NAN((float)param_2[10]) && !NAN(fVar8))) {
            if (((float)param_2[0xb] == fVar9) && (!NAN((float)param_2[0xb]) && !NAN(fVar9))) {
code_r0x000140c47398:
              lVar29 = 3;
              goto code_r0x000140c474af;
            }
          }
        }
        break;
      case 4:
        if (((((float)param_2[0xe] == fVar15) && (!NAN((float)param_2[0xe]) && !NAN(fVar15))) &&
            ((float)param_2[10] == fVar8)) && ((float)param_2[0xb] == fVar9)) {
          if (((float)param_2[0xc] == fVar24) && (!NAN((float)param_2[0xc]) && !NAN(fVar24))) {
            if (((float)param_2[0xd] == fVar28) && (!NAN((float)param_2[0xd]) && !NAN(fVar28)))
            goto code_r0x000140c47398;
          }
        }
        break;
      default:
        uVar10 = *(uint *)((ulonglong)bVar5 - 0x6b4b0243);
        cVar20 = (char)param_1;
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)(lVar12 + 0x66) = *(char *)(lVar12 + 0x66) + (char)((ulonglong)param_1 >> 8);
        out(0x3f,cVar20);
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        lVar11 = *param_1;
        *(char *)param_1 = (char)*param_1 + cVar20;
        if (SCARRY1((char)lVar11,cVar20)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        lVar11 = *param_1;
        *(char *)param_1 = (char)*param_1 + cVar20;
        if (SCARRY1((char)lVar11,cVar20)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        *(char *)param_1 = (char)*param_1 + cVar20;
        pcVar14 = (code *)swi(0xcc);
        pcVar21 = (char *)(*pcVar14)(&UNK_14306de98,(uint)param_2 | uVar10);
        *pcVar21 = *pcVar21 + (char)pcVar21;
        *pcVar21 = *pcVar21 + (char)pcVar21;
        pcVar14 = (code *)swi(0xcc);
        (*pcVar14)();
        pcVar14 = (code *)swi(0xcc);
        (*pcVar14)();
        pcVar14 = (code *)swi(0xcc);
        uVar22 = (*pcVar14)();
        pcVar21 = (char *)(uVar22 | 0x3f);
        *pcVar21 = *pcVar21 + (char)pcVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  }
  cStack_54 = *(char *)((longlong)param_3 + 0x4f);
  uStack_58 = *(undefined4 *)((longlong)param_3 + 0x4b);
code_r0x000140c474af:
  fVar3 = (float)param_2[0x16];
  cVar26 = '\x02';
  if ((char)param_2[0x1c] != (char)param_3[0xe]) {
    cVar26 = (char)param_3[0xe];
  }
  fVar4 = (float)param_2[0x19];
  lVar27 = 8;
  if (*(longlong *)(param_2 + 6) != lVar12) {
    lVar27 = lVar11;
  }
  if (*(longlong *)(param_2 + 4) != 6) {
    lVar27 = 8;
  }
  if (*(longlong *)(param_2 + 4) != lVar11) {
    lVar27 = lVar11;
  }
  *param_1 = lVar29;
  param_1[1] = lVar13;
  *(float *)(param_1 + 2) = fVar8;
  *(float *)((longlong)param_1 + 0x14) = fVar9;
  *(float *)(param_1 + 3) = fVar24;
  *(float *)((longlong)param_1 + 0x1c) = fVar28;
  *(float *)(param_1 + 4) = fVar15;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar16;
  *(int *)(param_1 + 5) = (int)lVar18;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar17;
  *(char *)(param_1 + 6) = (char)lVar19;
  iVar25 = iVar25 - param_2[0x15];
  *(char *)((longlong)param_1 + 0x31) = cVar20;
  *(byte *)((longlong)param_1 + 0x32) = bVar5;
  *(bool *)((longlong)param_1 + 0x62) = iVar25 != 0;
  *(undefined4 *)((longlong)param_1 + 0x33) = uStack_58;
  cVar20 = *(char *)((longlong)param_2 + 0x76);
  *(char *)((longlong)param_1 + 0x37) = cStack_54;
  *(char *)(param_1 + 7) = cVar6;
  *(char *)((longlong)param_1 + 0x61) = cVar6;
  *(bool *)(param_1 + 0xc) = cVar20 != cVar6;
  *(char *)((longlong)param_1 + 99) = (char)iVar25;
  *(uint *)(param_1 + 10) = -(uint)(fVar3 != fVar1) & 1;
  *(float *)((longlong)param_1 + 0x54) = fVar1;
  *(char *)((longlong)param_1 + 100) = cVar26;
  *(uint *)(param_1 + 0xb) = -(uint)(fVar4 != fVar2) & 1;
  *(float *)((longlong)param_1 + 0x5c) = fVar2;
  param_1[8] = lVar27;
  param_1[9] = lVar12;
  return;
}

