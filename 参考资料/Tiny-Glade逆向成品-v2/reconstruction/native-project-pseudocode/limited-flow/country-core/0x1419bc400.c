// VA 0x1419bc400, PDB extent 1415 bytes
// country_core::startup::startup_window_cut_sdf::lower_envelope
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_window_cut_sdf::lower_envelope
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
   Extent: 1415 */

void pdb_1419bc400(longlong param_1,ulonglong param_2,float param_3,float *param_4,longlong param_5)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong arg0;
  ulonglong arg0_00;
  ulonglong uVar3;
  longlong lVar4;
  byte *pbVar5;
  code *pcVar6;
  byte *pbVar7;
  byte *arg0_01;
  ulonglong uVar8;
  float *pfVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  
  uVar19 = 0xfffffffffffffffe;
  arg0_00 = param_2 * 8;
  pfVar11 = param_4;
  fVar18 = param_3;
  if (param_2 >> 0x3c == 0) goto LAB_1419bc43f;
  lVar12 = 0;
  do {
    param_1 = lVar12;
    param_2 = arg0_00;
    pdb_142dc7e2a();
    pfVar11 = param_4;
    fVar18 = param_3;
LAB_1419bc43f:
    if (param_2 == 0) {
      pbVar7 = (byte *)0x8;
      break;
    }
    param_4 = pfVar11;
    param_3 = fVar18;
    pdb_14007ee60();
    pbVar7 = pub_1406abae0(arg0_00,8);
    lVar12 = 8;
  } while (pbVar7 == (byte *)0x0);
  arg0 = param_2 * 4 + 4;
  pdb_14007ee60();
  arg0_01 = pub_1406abae0(arg0,4);
  if (arg0_01 == (byte *)0x0) {
    pdb_142dc7e2a(4,arg0);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar3 = param_2 + 1;
  arg0_01[0] = 0;
  arg0_01[1] = 0;
  arg0_01[2] = 0x80;
  arg0_01[3] = 0xff;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(1,1,&UNK_143360a08);
  }
  fVar18 = fVar18 * fVar18;
  arg0_01[4] = 0;
  arg0_01[5] = 0;
  arg0_01[6] = 0x80;
  arg0_01[7] = 0x7f;
  if (param_2 != 1) {
    uVar10 = 1;
    uVar8 = 0;
    fVar14 = _DAT_143053cb0;
    do {
      uVar2 = *(ulonglong *)(pbVar7 + uVar8 * 8);
      if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar2,param_2,&UNK_143360a80);
      }
      uVar13 = uVar10 * uVar10;
      if ((longlong)uVar13 < 0) {
        fVar15 = (float)uVar13;
        if (-1 < (longlong)(uVar2 * uVar2)) goto LAB_1419bc655;
LAB_1419bc5ee:
        fVar16 = (float)(uVar2 * uVar2);
        uVar13 = uVar10 - uVar2;
        if ((longlong)uVar13 < 0) goto LAB_1419bc60f;
LAB_1419bc665:
        fVar17 = (float)(longlong)uVar13;
      }
      else {
        fVar15 = (float)(longlong)uVar13;
        if ((longlong)(uVar2 * uVar2) < 0) goto LAB_1419bc5ee;
LAB_1419bc655:
        fVar16 = (float)(longlong)(uVar2 * uVar2);
        uVar13 = uVar10 - uVar2;
        if (-1 < (longlong)uVar13) goto LAB_1419bc665;
LAB_1419bc60f:
        fVar17 = (float)uVar13;
        uVar13 = (ulonglong)((uint)uVar13 & 1) | uVar13 >> 1;
      }
      fVar15 = fVar15 * fVar18 + *(float *)(param_1 + uVar10 * 4);
      fVar16 = (fVar15 - (fVar16 * fVar18 + *(float *)(param_1 + uVar2 * 4))) /
               (fVar17 * (fVar18 + fVar18));
      if (fVar16 <= fVar14) {
        do {
          uVar8 = uVar8 - 1;
          if (param_2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar8,param_2,&UNK_143360a68,uVar13,arg0_01,arg0,param_2,arg0_00,pbVar7,
                          uVar19);
          }
          uVar2 = *(ulonglong *)(pbVar7 + uVar8 * 8);
          if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar2,param_2,&UNK_143360a80,uVar13,arg0_01,arg0,param_2,arg0_00,pbVar7,
                          uVar19);
          }
          uVar13 = uVar2 * uVar2;
          if ((longlong)uVar13 < 0) {
            fVar14 = (float)uVar13;
            uVar13 = uVar10 - uVar2;
            if (-1 < (longlong)uVar13) goto LAB_1419bc6f0;
LAB_1419bc785:
            fVar16 = (float)uVar13;
            uVar13 = (ulonglong)((uint)uVar13 & 1) | uVar13 >> 1;
          }
          else {
            fVar14 = (float)(longlong)uVar13;
            uVar13 = uVar10 - uVar2;
            if ((longlong)uVar13 < 0) goto LAB_1419bc785;
LAB_1419bc6f0:
            fVar16 = (float)(longlong)uVar13;
          }
          fVar16 = (fVar15 - (fVar14 * fVar18 + *(float *)(param_1 + uVar2 * 4))) /
                   (fVar16 * (fVar18 + fVar18));
        } while (fVar16 <= *(float *)(arg0_01 + uVar8 * 4));
      }
      uVar2 = uVar8 + 1;
      if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar2,param_2,&UNK_143360a50,uVar13,arg0_01,arg0,param_2,arg0_00,pbVar7,uVar19
                     );
      }
      *(ulonglong *)(pbVar7 + uVar8 * 8 + 8) = uVar10;
      uVar10 = uVar10 + 1;
      *(float *)(arg0_01 + uVar8 * 4 + 4) = fVar16;
      pbVar5 = arg0_01 + uVar8 * 4 + 8;
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0x80;
      pbVar5[3] = 0x7f;
      uVar8 = uVar2;
      fVar14 = fVar16;
    } while (uVar10 != param_2);
  }
  if (param_5 != 0) {
    lVar12 = 0;
    uVar8 = 0;
    pfVar9 = pfVar11;
    do {
      fVar14 = (float)lVar12;
      pfVar1 = pfVar9 + 1;
      lVar12 = lVar12 + 1;
      uVar10 = uVar8 - 1;
      do {
        if (param_2 < uVar10 + 2) {
          uVar10 = uVar8 + 1;
          if (uVar8 + 1 < uVar3) {
            uVar10 = uVar3;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10,uVar3,&UNK_143360a20,lVar12,arg0_01,arg0,param_2,arg0_00,pbVar7,
                        uVar19);
        }
        uVar2 = uVar10 + 1;
        lVar4 = uVar10 * 4;
        uVar10 = uVar2;
      } while (*(float *)(arg0_01 + lVar4 + 8) <= fVar14 &&
               fVar14 != *(float *)(arg0_01 + lVar4 + 8));
      if (param_2 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar2,param_2,&UNK_143360a38,lVar12,arg0_01,arg0,param_2,arg0_00,pbVar7,uVar19
                     );
      }
      uVar8 = *(ulonglong *)(pbVar7 + uVar2 * 8);
      if (param_2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar8,param_2,&UNK_143360a98,lVar12,arg0_01,arg0,param_2,arg0_00,pbVar7,uVar19
                     );
      }
      *pfVar9 = fVar18 * (fVar14 - (float)(longlong)uVar8) * (fVar14 - (float)(longlong)uVar8) +
                *(float *)(param_1 + uVar8 * 4);
      uVar8 = uVar2;
      pfVar9 = pfVar1;
    } while (pfVar1 != pfVar11 + param_5);
  }
  pub_1406abac0(arg0_01,arg0,4);
  uVar19 = GetProcessHeap(pbVar7,arg0_00);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar19,0,pbVar7);
  return;
}

