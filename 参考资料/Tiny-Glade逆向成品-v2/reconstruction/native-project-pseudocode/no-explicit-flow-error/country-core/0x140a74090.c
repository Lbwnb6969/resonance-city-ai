// VA 0x140a74090, PDB extent 1396 bytes
// country_core::systems::ivy::ivy_branch_thickness_animation::ivy_branch_thickness_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_branch_thickness_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ivy::ivy_branch_thickness_animation::ivy_branch_thickness_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_branch_thickness_animation.rs
   Extent: 1396 */

void pdb_140a74090(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  unkuint9 Var9;
  float fVar10;
  float fVar11;
  char cVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined *unaff_RSI;
  longlong lVar24;
  longlong lVar25;
  ulonglong unaff_R12;
  undefined1 (*unaff_R14) [16];
  undefined1 (*unaff_R15) [16];
  float fVar26;
  float fVar27;
  
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') goto LAB_140a7425b;
  unaff_R14 = (undefined1 (*) [16])&UNK_143041930;
  unaff_RSI = (undefined *)0x5a;
  uVar21 = 0x5a;
  lVar13 = pdb_140a76ad0(&UNK_143041930);
  if (lVar13 == 1) {
    if (uVar21 < 0x5b) {
      unaff_R14 = (undefined1 (*) [16])&UNK_143041930;
      uVar14 = pdb_140a76ad0(&UNK_143041930);
      if ((uVar14 & 1) != 0) {
        if (0x5a < uVar21 + 2) goto LAB_140a7452a;
        unaff_RSI = (undefined *)(0x58 - uVar21);
        unaff_R14 = (undefined1 (*) [16])(&UNK_143041932 + uVar21);
      }
      goto LAB_140a74134;
    }
  }
  else {
LAB_140a74134:
    puVar15 = &UNK_1430414b2;
    unaff_R15 = (undefined1 (*) [16])&UNK_14304146d;
    do {
      pbVar1 = puVar15 + -1;
      uVar19 = (uint)(char)*pbVar1;
      if ((int)uVar19 < 0) {
        bVar4 = puVar15[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar15[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar15 + -4;
            puVar15 = puVar15 + -4;
            uVar19 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar15 = puVar15 + -3;
            uVar19 = bVar5 & 0xf;
          }
          uVar19 = bVar4 & 0x3f | uVar19 << 6;
        }
        else {
          puVar15 = puVar15 + -2;
          uVar19 = bVar4 & 0x1f;
        }
        uVar19 = (uint)(*pbVar1 & 0x3f) | uVar19 << 6;
        if (uVar19 != 0x5c) goto LAB_140a741c9;
LAB_140a741df:
        if ((undefined *)0x45 < puVar15 + -0x14304146c) goto LAB_140a744e7;
        unaff_R12 = 0x44 - (longlong)(puVar15 + -0x14304146d);
        unaff_R15 = (undefined1 (*) [16])(puVar15 + 1);
        goto LAB_140a74203;
      }
      puVar15 = puVar15 + -1;
      if (uVar19 == 0x5c) goto LAB_140a741df;
LAB_140a741c9:
      if (uVar19 == 0x2f) goto LAB_140a741df;
    } while (puVar15 != &UNK_14304146d);
    unaff_R12 = 0x45;
LAB_140a74203:
    plVar16 = (longlong *)pdb_140e97000();
    if ((char)plVar16[0xd] != '\x01') goto LAB_140a744b7;
    do {
      if (*plVar16 == 0) {
        *plVar16 = -1;
        pdb_140e94f10(plVar16 + 1,unaff_R14,unaff_RSI,unaff_R15,unaff_R12,1,0);
        *plVar16 = *plVar16 + 1;
LAB_140a7425b:
        *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
        fVar11 = _DAT_142fa5b20;
        fVar10 = _DAT_142e36f28;
        lVar13 = ((undefined8 *)*param_1)[3];
        if (lVar13 != 0) {
          unaff_R14 = *(undefined1 (**) [16])*param_1;
          auVar3 = *unaff_R14;
          unaff_R12 = (ulonglong)
                      ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
          unaff_R15 = unaff_R14 + 1;
          do {
            uVar19 = (uint)unaff_R12;
            if ((short)unaff_R12 == 0) {
              do {
                auVar3 = *unaff_R15;
                unaff_R14 = unaff_R14 + -0x98;
                unaff_R15 = unaff_R15 + 1;
                uVar19 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar19 == 0);
            }
            uVar7 = 0;
            for (uVar8 = uVar19; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            uVar21 = *(ulonglong *)((longlong)unaff_R14 + (ulonglong)uVar7 * -0x98 + -0x78);
            unaff_RSI = (undefined *)((ulonglong)uVar7 * -0x98 + (longlong)unaff_R14);
            fVar26 = (float)pub_142e32a20((float)uVar21 / fVar11);
            if (uVar21 == 0) {
              lVar17 = 0;
              uVar14 = 0;
LAB_140a74364:
              lVar24 = 0;
            }
            else {
              uVar14 = *(ulonglong *)(unaff_RSI + -0x90);
              uVar22 = 0;
              if (uVar14 <= *(ulonglong *)(unaff_RSI + -0x80)) {
                uVar22 = uVar14;
              }
              lVar17 = *(ulonglong *)(unaff_RSI + -0x80) - uVar22;
              lVar24 = uVar21 - (uVar14 - lVar17);
              if (uVar21 < uVar14 - lVar17 || lVar24 == 0) {
                uVar14 = lVar17 + uVar21;
                goto LAB_140a74364;
              }
            }
            lVar25 = *(longlong *)(unaff_RSI + -0x88);
            lVar13 = lVar13 + -1;
            unaff_R12 = (ulonglong)(uVar19 - 1 & uVar19);
            lVar17 = lVar25 + lVar17 * 0x28;
            lVar23 = lVar25 + uVar14 * 0x28;
            uVar14 = 0;
            lVar24 = lVar25 + lVar24 * 0x28;
            while ((lVar18 = lVar25, lVar20 = lVar24, lVar17 != lVar23 ||
                   (lVar18 = lVar17, lVar20 = lVar17, lVar23 = lVar24, lVar17 = lVar25,
                   lVar25 != lVar24))) {
              Var9 = (unkuint9)uVar14;
              uVar14 = uVar14 + 1;
              fVar27 = fVar10 - (float)(unkint9)Var9 / (float)(uVar21 - 1);
              *(float *)(lVar17 + 0x20) = fVar27 * (fVar10 - fVar26) + (fVar10 - fVar27) * 0.0;
              lVar17 = lVar17 + 0x28;
              lVar24 = lVar20;
              lVar25 = lVar18;
            }
          } while (lVar13 != 0);
        }
        param_1 = (undefined8 *)0x0;
        if (cVar12 == '\0') {
          return;
        }
        plVar16 = (longlong *)pdb_140e97000();
        if (((char)plVar16[0xd] != '\x01') &&
           (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 == (longlong *)0x0)) break;
        if (*plVar16 == 0) {
          *plVar16 = -1;
          pdb_140e95370(plVar16 + 1);
          *plVar16 = *plVar16 + 1;
          return;
        }
      }
      plVar16 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a744b7:
      plVar16 = (longlong *)pdb_142d8ec20(plVar16,0);
    } while (plVar16 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140a744e7:
    pdb_142dc8070(&UNK_14304146d,0x45);
  }
  pdb_142dc8070(&UNK_143041930,0x5a,0);
LAB_140a7452a:
  pdb_142dc8070(&UNK_143041930,0x5a);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

