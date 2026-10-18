// VA 0x1419bc990, PDB extent 1713 bytes
// country_core::startup::startup_window_cut_sdf::distance_transform
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_window_cut_sdf::distance_transform
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_window_cut_sdf.rs
   Extent: 1713 */

void pdb_1419bc990(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *arg0;
  byte *arg0_00;
  ulonglong uVar16;
  byte *pbVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  byte *pbVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  byte *pbStack_b8;
  longlong lStack_b0;
  
  pdb_14007ee60();
  pbVar15 = pub_1406abae0(0x100000,4);
  if (pbVar15 == (byte *)0x0) {
    pdb_142dc7e2a(4,0x100000);
  }
  else {
    pdb_14007ee60();
    arg0 = pub_1406abae0(0x800,4);
    if (arg0 != (byte *)0x0) {
      pdb_14007ee60();
      arg0_00 = pub_1406abae0(0x800,4);
      uVar13 = _DAT_14335fdc0;
      uVar12 = _UNK_14335fdbc;
      uVar11 = _UNK_14335fdb8;
      uVar10 = _UNK_14335fdb4;
      uVar9 = _DAT_14335fdb0;
      if (arg0_00 == (byte *)0x0) {
        pdb_142dc7e2a(4,0x800);
      }
      else {
        pbVar29 = (byte *)(param_2 + 0x600);
        pbStack_b8 = pbVar15 + 0x1800;
        uVar20 = 0x401ff;
        lStack_b0 = 0x200;
        uVar21 = 0;
        while( true ) {
          uVar26 = uVar20 >> 9;
          uVar25 = 0x1ff;
          if (uVar26 < 0x1ff) {
            uVar25 = uVar26;
          }
          uVar22 = uVar21;
          if (param_3 < uVar21) {
            uVar22 = param_3;
          }
          uVar23 = 0;
          if (param_3 >= uVar21) {
            uVar23 = param_3 - uVar21;
          }
          uVar22 = (param_3 + 0x1ff) - uVar22 >> 9;
          if (0x1fe < uVar22) {
            uVar22 = 0x1ff;
          }
          uVar16 = uVar23 + 0x1ff >> 9;
          if (0x1fe < uVar16) {
            uVar16 = 0x1ff;
          }
          if (0x1ff < uVar21) break;
          if (uVar23 < 0x601) {
            lVar27 = 0;
            lVar18 = 0;
          }
          else {
            uVar16 = uVar16 + 1;
            uVar23 = (ulonglong)((uint)uVar16 & 3);
            if ((uVar16 & 3) == 0) {
              uVar23 = 4;
            }
            lVar27 = uVar16 - uVar23;
            lVar18 = lVar27 * 4;
            lVar28 = 0;
            pbVar17 = pbVar29;
            do {
              bVar3 = *pbVar17;
              bVar4 = pbVar17[-0x200];
              bVar5 = pbVar17[-0x400];
              puVar1 = (uint *)(arg0 + lVar28 * 4);
              *puVar1 = ~((int)((uint)pbVar17[-0x600] << 0x1f) >> 0x1f) & uVar9;
              puVar1[1] = ~((int)((uint)bVar5 << 0x1f) >> 0x1f) & uVar10;
              puVar1[2] = ~((int)((uint)bVar4 << 0x1f) >> 0x1f) & uVar11;
              puVar1[3] = ~((int)((uint)bVar3 << 0x1f) >> 0x1f) & uVar12;
              lVar28 = lVar28 + 4;
              pbVar17 = pbVar17 + 0x800;
            } while ((uVar22 - uVar23) + 1 != lVar28);
          }
          iVar24 = (int)uVar25;
          uVar22 = lVar27 * 0x200 + uVar21;
          do {
            if (param_3 <= uVar22) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar22,param_3,&UNK_143360ac8);
            }
            uVar31 = 0;
            if (*(char *)(param_2 + uVar22) == '\0') {
              uVar31 = uVar13;
            }
            *(undefined4 *)(arg0 + lVar18) = uVar31;
            lVar18 = lVar18 + 4;
            uVar22 = uVar22 + 0x200;
          } while (lVar18 != 0x800);
          pdb_1419bc400(arg0,0x200,uVar21 + 1,arg0_00,0x200);
          uVar19 = iVar24 + 1U & 3;
          uVar22 = (ulonglong)uVar19;
          if (uVar19 == 0) {
            uVar22 = 4;
          }
          lVar18 = 0;
          pbVar17 = pbStack_b8;
          do {
            pbVar2 = arg0_00 + lVar18 * 4;
            uVar7 = *(undefined4 *)(pbVar2 + 4);
            uVar8 = *(undefined4 *)(pbVar2 + 0xc);
            uVar31 = *(undefined4 *)(arg0_00 + lVar18 * 4 + 8);
            *(undefined4 *)(pbVar17 + -0x1800) = *(undefined4 *)pbVar2;
            *(undefined4 *)(pbVar17 + -0x1000) = uVar7;
            *(undefined4 *)(pbVar17 + -0x800) = uVar31;
            *(undefined4 *)pbVar17 = uVar8;
            lVar18 = lVar18 + 4;
            pbVar17 = pbVar17 + 0x2000;
          } while ((uVar25 - uVar22) + 1 != lVar18);
          lVar18 = ~uVar25 + uVar26 + uVar22;
          lVar27 = ((ulonglong)(uint)(iVar24 << 9) + lStack_b0) -
                   (ulonglong)(uint)((int)uVar22 << 9);
          lVar28 = (ulonglong)(uint)(iVar24 * 4) - (ulonglong)(uint)((int)uVar22 << 2);
          do {
            bVar30 = lVar18 == 0;
            lVar18 = lVar18 + -1;
            if (bVar30) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(lVar27,0x40000,&UNK_143360ab0);
            }
            *(undefined4 *)(pbVar15 + lVar27 * 4) = *(undefined4 *)(arg0_00 + lVar28 + 4);
            lVar27 = lVar27 + 0x200;
            lVar28 = lVar28 + 4;
          } while (lVar28 != 0x7fc);
          uVar20 = uVar20 - 1;
          pbVar29 = pbVar29 + 1;
          pbStack_b8 = pbStack_b8 + 4;
          lStack_b0 = lStack_b0 + 1;
          uVar21 = uVar21 + 1;
        }
        uVar21 = 0;
        do {
          lVar18 = uVar21 * 0x800;
          pub_142e32760(arg0,pbVar15 + lVar18,0x800);
          pdb_1419bc400(arg0,0x200);
          uVar21 = uVar21 + 1;
          pub_142e32760(pbVar15 + lVar18,arg0_00,0x800);
        } while (uVar21 < 0x200);
        pdb_14007ee60();
        pbVar29 = pub_1406abab0(0x100000,4);
        if (pbVar29 != (byte *)0x0) {
          lVar18 = 0xc;
          do {
            auVar32 = sqrtps(*(undefined1 (*) [16])(pbVar15 + lVar18 * 4 + -0x30),
                             *(undefined1 (*) [16])(pbVar15 + lVar18 * 4 + -0x30));
            *(undefined1 (*) [16])(pbVar29 + lVar18 * 4 + -0x30) = auVar32;
            auVar32 = sqrtps(*(undefined1 (*) [16])(pbVar15 + lVar18 * 4 + -0x20),
                             *(undefined1 (*) [16])(pbVar15 + lVar18 * 4 + -0x20));
            *(undefined1 (*) [16])(pbVar29 + lVar18 * 4 + -0x20) = auVar32;
            auVar32 = sqrtps(*(undefined1 (*) [16])(pbVar15 + lVar18 * 4 + -0x10),
                             *(undefined1 (*) [16])(pbVar15 + lVar18 * 4 + -0x10));
            *(undefined1 (*) [16])(pbVar29 + lVar18 * 4 + -0x10) = auVar32;
            auVar32 = sqrtps(*(undefined1 (*) [16])(pbVar15 + lVar18 * 4),
                             *(undefined1 (*) [16])(pbVar15 + lVar18 * 4));
            *(undefined1 (*) [16])(pbVar29 + lVar18 * 4) = auVar32;
            lVar18 = lVar18 + 0x10;
          } while (lVar18 != 0x4000c);
          *param_1 = 0x40000;
          param_1[1] = pbVar29;
          param_1[2] = 0x40000;
          pub_1406abac0(arg0_00,0x800,4);
          pub_1406abac0(arg0,0x800,4);
          uVar14 = GetProcessHeap(pbVar15,0x100000);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          HeapFree(uVar14,0,pbVar15);
          return;
        }
        pdb_142dc7e2a(4,0x100000);
      }
      goto LAB_1419bced1;
    }
  }
  pdb_142dc7e2a(4,0x800);
LAB_1419bced1:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

