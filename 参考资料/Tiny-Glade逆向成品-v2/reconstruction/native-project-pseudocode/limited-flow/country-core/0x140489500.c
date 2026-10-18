// VA 0x140489500, PDB extent 1160 bytes
// country_core::game_profile::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140489840) */
/* WARNING: Removing unreachable block (ram,0x000140489936) */
/* WARNING: Removing unreachable block (ram,0x00014048985d) */
/* WARNING: Removing unreachable block (ram,0x000140489867) */
/* WARNING: Removing unreachable block (ram,0x00014048991b) */
/* Matched PDB project procedure:
   country_core::game_profile::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
   Extent: 1160 */

undefined1 * pdb_140489500(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined1 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  if (param_3 == 0x11) {
    auVar10[0] = -((char)*param_2 == DAT_142f5d930);
    auVar10[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d931);
    auVar10[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d932);
    auVar10[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d933);
    auVar10[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d934);
    auVar10[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d935);
    auVar10[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d936);
    auVar10[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d937);
    auVar10[8] = -((char)param_2[1] == UNK_142f5d938);
    auVar10[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d939);
    auVar10[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d93a);
    auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d93b);
    auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d93c);
    auVar10[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d93d);
    auVar10[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d93e);
    auVar10[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d93f);
    auVar19[0] = -((char)param_2[2] == DAT_142e505d0);
    auVar19[1] = -(UNK_142e505d1 == '\0');
    auVar19[2] = -(UNK_142e505d2 == '\0');
    auVar19[3] = -(UNK_142e505d3 == '\0');
    auVar19[4] = -(UNK_142e505d4 == '\0');
    auVar19[5] = -(UNK_142e505d5 == '\0');
    auVar19[6] = -(UNK_142e505d6 == '\0');
    auVar19[7] = -(UNK_142e505d7 == '\0');
    auVar19[8] = -(UNK_142e505d8 == '\0');
    auVar19[9] = -(UNK_142e505d9 == '\0');
    auVar19[10] = -(UNK_142e505da == '\0');
    auVar19[0xb] = -(UNK_142e505db == '\0');
    auVar19[0xc] = -(UNK_142e505dc == '\0');
    auVar19[0xd] = -(UNK_142e505dd == '\0');
    auVar19[0xe] = -(UNK_142e505de == '\0');
    auVar19[0xf] = -(UNK_142e505df == '\0');
    auVar19 = auVar19 & auVar10;
    bVar2 = false;
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
      bVar5 = 0;
      goto LAB_140489970;
    }
LAB_140489643:
    uVar1 = param_3 - 0x10U >> 1;
    if ((uVar1 | (ulonglong)((param_3 - 0x10U & 1) != 0) << 0x3f) < 6) {
                    /* WARNING: Could not recover jumptable at 0x000140489661. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar7 = (undefined1 *)(*(code *)(&UNK_142f5e3a4 + *(int *)(&UNK_142f5e3a4 + uVar1 * 4)))();
      return puVar7;
    }
    if (param_3 != 0x11) {
      bVar9 = false;
      bVar8 = false;
      if (param_3 == 0xd) goto LAB_140489616;
LAB_140489702:
      if (param_3 != 0x1b) {
        if ((param_3 == 0xe) &&
           (*(longlong *)((longlong)param_2 + 6) == 0x73776f646e69775f &&
            *param_2 == 0x775f6b6e696c6e75)) {
          bVar5 = 9;
          goto LAB_140489970;
        }
        goto LAB_140489732;
      }
      auVar24[0] = -(*(char *)((longlong)param_2 + 0xb) == DAT_142f5d940);
      auVar24[1] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d941);
      auVar24[2] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d942);
      auVar24[3] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d943);
      auVar24[4] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d944);
      auVar24[5] = -((char)param_2[2] == UNK_142f5d945);
      auVar24[6] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f5d946);
      auVar24[7] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f5d947);
      auVar24[8] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142f5d948);
      auVar24[9] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142f5d949);
      auVar24[10] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142f5d94a);
      auVar24[0xb] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142f5d94b);
      auVar24[0xc] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142f5d94c);
      auVar24[0xd] = -((char)param_2[3] == UNK_142f5d94d);
      auVar24[0xe] = -(*(char *)((longlong)param_2 + 0x19) == UNK_142f5d94e);
      auVar24[0xf] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_142f5d94f);
      auVar15[0] = -((char)*param_2 == DAT_142e50620);
      auVar15[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e50621);
      auVar15[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e50622);
      auVar15[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e50623);
      auVar15[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e50624);
      auVar15[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e50625);
      auVar15[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e50626);
      auVar15[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e50627);
      auVar15[8] = -((char)param_2[1] == UNK_142e50628);
      auVar15[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e50629);
      auVar15[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e5062a);
      auVar15[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e5062b);
      auVar15[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e5062c);
      auVar15[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e5062d);
      auVar15[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e5062e);
      auVar15[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e5062f);
      auVar15 = auVar15 & auVar24;
      if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
        bVar5 = 0xb;
        goto LAB_140489970;
      }
      bVar3 = true;
      bVar4 = true;
      if (bVar9) goto LAB_1404897b1;
      goto LAB_1404897cb;
    }
    auVar14[0] = -((char)*param_2 == DAT_142f5d970);
    auVar14[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d971);
    auVar14[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d972);
    auVar14[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d973);
    auVar14[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d974);
    auVar14[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d975);
    auVar14[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d976);
    auVar14[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d977);
    auVar14[8] = -((char)param_2[1] == UNK_142f5d978);
    auVar14[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d979);
    auVar14[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d97a);
    auVar14[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d97b);
    auVar14[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d97c);
    auVar14[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d97d);
    auVar14[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d97e);
    auVar14[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d97f);
    auVar23[0] = -((char)param_2[2] == DAT_142e505d0);
    auVar23[1] = -(UNK_142e505d1 == '\0');
    auVar23[2] = -(UNK_142e505d2 == '\0');
    auVar23[3] = -(UNK_142e505d3 == '\0');
    auVar23[4] = -(UNK_142e505d4 == '\0');
    auVar23[5] = -(UNK_142e505d5 == '\0');
    auVar23[6] = -(UNK_142e505d6 == '\0');
    auVar23[7] = -(UNK_142e505d7 == '\0');
    auVar23[8] = -(UNK_142e505d8 == '\0');
    auVar23[9] = -(UNK_142e505d9 == '\0');
    auVar23[10] = -(UNK_142e505da == '\0');
    auVar23[0xb] = -(UNK_142e505db == '\0');
    auVar23[0xc] = -(UNK_142e505dc == '\0');
    auVar23[0xd] = -(UNK_142e505dd == '\0');
    auVar23[0xe] = -(UNK_142e505de == '\0');
    auVar23[0xf] = -(UNK_142e505df == '\0');
    auVar23 = auVar23 & auVar14;
    if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar23[0xf] >> 7) << 0xf) == 0xffff) {
      bVar5 = 8;
      goto LAB_140489970;
    }
    bVar5 = 0x16;
    if (!bVar2) goto LAB_140489970;
    bVar8 = false;
LAB_1404898a7:
    iVar6 = pub_142e32750(param_2,&UNK_142f5dfe2,param_3);
    if (iVar6 == 0) {
      bVar5 = 0x12;
      goto LAB_140489970;
    }
    iVar6 = pub_142e32750(param_2,&UNK_142f5dff7,param_3);
    if (iVar6 == 0) {
      bVar5 = 0x13;
      goto LAB_140489970;
    }
  }
  else {
    if (param_3 == 0x15) {
      auVar20[0] = -(*(char *)((longlong)param_2 + 5) == DAT_142f5d910);
      auVar20[1] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d911);
      auVar20[2] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d912);
      auVar20[3] = -((char)param_2[1] == UNK_142f5d913);
      auVar20[4] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d914);
      auVar20[5] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d915);
      auVar20[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d916);
      auVar20[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d917);
      auVar20[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d918);
      auVar20[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d919);
      auVar20[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d91a);
      auVar20[0xb] = -((char)param_2[2] == UNK_142f5d91b);
      auVar20[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f5d91c);
      auVar20[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f5d91d);
      auVar20[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142f5d91e);
      auVar20[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142f5d91f);
      auVar11[0] = -((char)*param_2 == DAT_142f5d920);
      auVar11[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d921);
      auVar11[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d922);
      auVar11[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d923);
      auVar11[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d924);
      auVar11[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d925);
      auVar11[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d926);
      auVar11[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d927);
      auVar11[8] = -((char)param_2[1] == UNK_142f5d928);
      auVar11[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d929);
      auVar11[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d92a);
      auVar11[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d92b);
      auVar11[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d92c);
      auVar11[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d92d);
      auVar11[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d92e);
      auVar11[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d92f);
      auVar11 = auVar11 & auVar20;
      bVar2 = true;
      if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) == 0xffff) {
        bVar5 = 1;
        goto LAB_140489970;
      }
      goto LAB_140489643;
    }
    bVar8 = param_3 != 0x13;
    if (param_3 == 0x13) {
      auVar22[0] = -(*(char *)((longlong)param_2 + 3) == DAT_142f5d8d0);
      auVar22[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d8d1);
      auVar22[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d8d2);
      auVar22[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d8d3);
      auVar22[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d8d4);
      auVar22[5] = -((char)param_2[1] == UNK_142f5d8d5);
      auVar22[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d8d6);
      auVar22[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d8d7);
      auVar22[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d8d8);
      auVar22[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d8d9);
      auVar22[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d8da);
      auVar22[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d8db);
      auVar22[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d8dc);
      auVar22[0xd] = -((char)param_2[2] == UNK_142f5d8dd);
      auVar22[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f5d8de);
      auVar22[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f5d8df);
      auVar13[0] = -((char)*param_2 == DAT_142f5d8e0);
      auVar13[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d8e1);
      auVar13[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d8e2);
      auVar13[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d8e3);
      auVar13[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d8e4);
      auVar13[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d8e5);
      auVar13[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d8e6);
      auVar13[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d8e7);
      auVar13[8] = -((char)param_2[1] == UNK_142f5d8e8);
      auVar13[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d8e9);
      auVar13[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d8ea);
      auVar13[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d8eb);
      auVar13[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d8ec);
      auVar13[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d8ed);
      auVar13[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d8ee);
      auVar13[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d8ef);
      auVar13 = auVar13 & auVar22;
      if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
        bVar5 = 2;
        goto LAB_140489970;
      }
    }
    else {
      if (param_3 != 0x16) {
        bVar2 = false;
        goto LAB_140489643;
      }
      auVar21[0] = -(*(char *)((longlong)param_2 + 6) == DAT_142f5d8f0);
      auVar21[1] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d8f1);
      auVar21[2] = -((char)param_2[1] == UNK_142f5d8f2);
      auVar21[3] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d8f3);
      auVar21[4] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d8f4);
      auVar21[5] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d8f5);
      auVar21[6] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d8f6);
      auVar21[7] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d8f7);
      auVar21[8] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d8f8);
      auVar21[9] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d8f9);
      auVar21[10] = -((char)param_2[2] == UNK_142f5d8fa);
      auVar21[0xb] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f5d8fb);
      auVar21[0xc] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f5d8fc);
      auVar21[0xd] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142f5d8fd);
      auVar21[0xe] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142f5d8fe);
      auVar21[0xf] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142f5d8ff);
      auVar12[0] = -((char)*param_2 == DAT_142f5d900);
      auVar12[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d901);
      auVar12[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d902);
      auVar12[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d903);
      auVar12[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d904);
      auVar12[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d905);
      auVar12[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d906);
      auVar12[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d907);
      auVar12[8] = -((char)param_2[1] == UNK_142f5d908);
      auVar12[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d909);
      auVar12[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d90a);
      auVar12[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d90b);
      auVar12[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d90c);
      auVar12[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d90d);
      auVar12[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d90e);
      auVar12[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d90f);
      auVar12 = auVar12 & auVar21;
      if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
        bVar5 = 3;
        goto LAB_140489970;
      }
    }
    bVar9 = param_3 == 0x13;
    bVar2 = false;
    if (param_3 != 0xd) goto LAB_140489702;
LAB_140489616:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6574656c706d6f63 && *param_2 == 0x6d6f635f6f646e75
       ) {
      bVar5 = 10;
      goto LAB_140489970;
    }
LAB_140489732:
    bVar3 = false;
    bVar4 = false;
    if (bVar9) {
LAB_1404897b1:
      bVar3 = bVar4;
      iVar6 = pub_142e32750(param_2,&UNK_142f5df8a,param_3);
      if (iVar6 == 0) {
        bVar5 = 0xc;
        goto LAB_140489970;
      }
    }
LAB_1404897cb:
    if ((bVar8) && (iVar6 = pub_142e32750(param_2,&UNK_142f5df9d,param_3), iVar6 == 0)) {
      bVar5 = 0xd;
      goto LAB_140489970;
    }
    if ((bVar3) && (iVar6 = pub_142e32750(param_2,&UNK_142f5dfb3,param_3), iVar6 == 0)) {
      bVar5 = 0xe;
      goto LAB_140489970;
    }
    if ((param_3 == 0x1c) &&
       (auVar25[0] = -(*(char *)((longlong)param_2 + 0xc) == DAT_142f5d950),
       auVar25[1] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d951),
       auVar25[2] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d952),
       auVar25[3] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d953),
       auVar25[4] = -((char)param_2[2] == UNK_142f5d954),
       auVar25[5] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f5d955),
       auVar25[6] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f5d956),
       auVar25[7] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142f5d957),
       auVar25[8] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142f5d958),
       auVar25[9] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142f5d959),
       auVar25[10] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142f5d95a),
       auVar25[0xb] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142f5d95b),
       auVar25[0xc] = -((char)param_2[3] == UNK_142f5d95c),
       auVar25[0xd] = -(*(char *)((longlong)param_2 + 0x19) == UNK_142f5d95d),
       auVar25[0xe] = -(*(char *)((longlong)param_2 + 0x1a) == UNK_142f5d95e),
       auVar25[0xf] = -(*(char *)((longlong)param_2 + 0x1b) == UNK_142f5d95f),
       auVar16[0] = -((char)*param_2 == DAT_142f5d960),
       auVar16[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d961),
       auVar16[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d962),
       auVar16[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d963),
       auVar16[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d964),
       auVar16[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d965),
       auVar16[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d966),
       auVar16[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d967),
       auVar16[8] = -((char)param_2[1] == UNK_142f5d968),
       auVar16[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d969),
       auVar16[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d96a),
       auVar16[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d96b),
       auVar16[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d96c),
       auVar16[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d96d),
       auVar16[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d96e),
       auVar16[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d96f),
       auVar16 = auVar16 & auVar25,
       (ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff)) {
      bVar5 = 0xf;
      goto LAB_140489970;
    }
    if ((param_3 == 0x17) &&
       (auVar26[0] = -(*(char *)((longlong)param_2 + 7) == DAT_142f5d980),
       auVar26[1] = -((char)param_2[1] == UNK_142f5d981),
       auVar26[2] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d982),
       auVar26[3] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d983),
       auVar26[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d984),
       auVar26[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d985),
       auVar26[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d986),
       auVar26[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d987),
       auVar26[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d988),
       auVar26[9] = -((char)param_2[2] == UNK_142f5d989),
       auVar26[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f5d98a),
       auVar26[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f5d98b),
       auVar26[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142f5d98c),
       auVar26[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142f5d98d),
       auVar26[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142f5d98e),
       auVar26[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142f5d98f),
       auVar17[0] = -((char)*param_2 == DAT_142f5d990),
       auVar17[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d991),
       auVar17[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d992),
       auVar17[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d993),
       auVar17[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d994),
       auVar17[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d995),
       auVar17[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d996),
       auVar17[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d997),
       auVar17[8] = -((char)param_2[1] == UNK_142f5d998),
       auVar17[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d999),
       auVar17[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d99a),
       auVar17[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d99b),
       auVar17[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d99c),
       auVar17[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d99d),
       auVar17[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d99e),
       auVar17[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d99f),
       auVar17 = auVar17 & auVar26,
       (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff)) {
      bVar5 = 0x11;
      goto LAB_140489970;
    }
    bVar8 = param_3 == 0x17;
    if (bVar2) goto LAB_1404898a7;
  }
  if (bVar8) {
    auVar18[0] = -(*(char *)((longlong)param_2 + 7) == DAT_142f5d9a0);
    auVar18[1] = -((char)param_2[1] == UNK_142f5d9a1);
    auVar18[2] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d9a2);
    auVar18[3] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d9a3);
    auVar18[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d9a4);
    auVar18[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d9a5);
    auVar18[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d9a6);
    auVar18[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d9a7);
    auVar18[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d9a8);
    auVar18[9] = -((char)param_2[2] == UNK_142f5d9a9);
    auVar18[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f5d9aa);
    auVar18[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f5d9ab);
    auVar18[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142f5d9ac);
    auVar18[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142f5d9ad);
    auVar18[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142f5d9ae);
    auVar18[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142f5d9af);
    auVar27[0] = -((char)*param_2 == DAT_142f5d9b0);
    auVar27[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d9b1);
    auVar27[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d9b2);
    auVar27[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d9b3);
    auVar27[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d9b4);
    auVar27[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d9b5);
    auVar27[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d9b6);
    auVar27[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d9b7);
    auVar27[8] = -((char)param_2[1] == UNK_142f5d9b8);
    auVar27[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d9b9);
    auVar27[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d9ba);
    auVar27[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d9bb);
    auVar27[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d9bc);
    auVar27[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d9bd);
    auVar27[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d9be);
    auVar27[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d9bf);
    auVar27 = auVar27 & auVar18;
    bVar5 = ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) != 0xffff) * '\x02' | 0x14;
  }
  else {
    bVar5 = 0x16;
  }
LAB_140489970:
  param_1[1] = bVar5;
  *param_1 = 0x32;
  return param_1;
}

