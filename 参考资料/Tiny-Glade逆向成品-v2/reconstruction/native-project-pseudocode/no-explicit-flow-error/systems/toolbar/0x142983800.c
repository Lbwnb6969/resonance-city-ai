// VA 0x142983800, PDB extent 2594 bytes
// toolbar::toolbar_systems::toolbar_steal_mouse_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::toolbar_systems::toolbar_steal_mouse_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_systems.rs
   Extent: 2594 */

void pdb_142983800(float **param_1,float **param_2,float **param_3,float *param_4,float **param_5,
                  undefined8 *param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float *pfVar14;
  longlong *plVar15;
  float **ppfVar16;
  float *pfVar17;
  float **ppfVar18;
  undefined *puVar19;
  int *piVar20;
  undefined *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined auStack_2f8 [96];
  int iStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  float fStack_288;
  float fStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float *pfStack_138;
  undefined8 uStack_130;
  float *apfStack_128 [8];
  float **ppfStack_e8;
  undefined8 uStack_e0;
  float *pfStack_d8;
  float *pfStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  float **ppfStack_b8;
  float *pfStack_b0;
  undefined1 uStack_a3;
  char cStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  ppfVar18 = param_2;
  cStack_a2 = pdb_140e94b40();
  if (cStack_a2 == '\0') {
    uStack_e0 = 0;
    pfVar17 = param_4;
    ppfVar18 = param_5;
    if (*(char *)((longlong)*param_5 + 199) != '\0') goto LAB_142983a64;
    return;
  }
  pfVar17 = (float *)0x33;
  pfStack_c0 = param_4;
  lVar12 = pdb_142981b30(0x33);
  piVar20 = (int *)&UNK_143607da1;
  if (lVar12 == 1) {
    if (ppfVar18 < (float **)0x34) {
      uVar13 = pdb_142981b30(ppfVar18);
      if ((uVar13 & 1) != 0) {
        if (0x33 < (longlong)ppfVar18 + 2U) goto LAB_142983e46;
        pfVar17 = (float *)(0x31 - (longlong)ppfVar18);
        piVar20 = (int *)((longlong)ppfVar18 + 0x143607da3);
      }
      goto LAB_1429838ce;
    }
  }
  else {
LAB_1429838ce:
    puVar19 = &UNK_143607eed;
    puVar21 = &UNK_143607ec0;
    do {
      bVar4 = puVar19[-1];
      uVar11 = (uint)(char)bVar4;
      ppfStack_b8 = param_1;
      if ((char)bVar4 < '\0') {
        bVar5 = puVar19[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar19[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar19 + -4;
            puVar19 = puVar19 + -4;
            uVar11 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar19 = puVar19 + -3;
            uVar11 = bVar6 & 0xf;
          }
          uVar11 = bVar5 & 0x3f | uVar11 << 6;
        }
        else {
          puVar19 = puVar19 + -2;
          uVar11 = bVar5 & 0x1f;
        }
        uVar11 = (uint)(bVar4 & 0x3f) | uVar11 << 6;
        if (uVar11 != 0x5c) goto LAB_142983964;
LAB_14298399e:
        if ((undefined *)0x2d < puVar19 + -0x143607ebf) goto LAB_142983e03;
        ppfVar18 = (float **)(0x2d - (longlong)(puVar19 + -0x143607ebf));
        puVar21 = puVar19 + 1;
        goto LAB_1429839c9;
      }
      puVar19 = puVar19 + -1;
      if (uVar11 == 0x5c) goto LAB_14298399e;
LAB_142983964:
      if (uVar11 == 0x2f) goto LAB_14298399e;
    } while (puVar19 != &UNK_143607ec0);
    ppfVar18 = (float **)0x2d;
LAB_1429839c9:
    pfVar14 = (float *)pdb_140e97000();
    if (*(char *)(pfVar14 + 0x1a) != '\x01') goto LAB_142983db3;
    do {
      if (*(longlong *)pfVar14 == 0) {
        pfVar14[0] = -NAN;
        pfVar14[1] = -NAN;
        pfStack_b0 = pfVar14;
        pfVar17 = (float *)pdb_140e94f10(pfVar14 + 2,piVar20,pfVar17,puVar21,ppfVar18,1,0);
        *(longlong *)pfStack_b0 = *(longlong *)pfStack_b0 + 1;
        pfStack_d8 = pfVar17;
        uStack_e0 = 1;
        if (*(char *)((longlong)*param_5 + 199) == '\0') {
          plVar15 = (longlong *)pdb_140e97000();
          if (((char)plVar15[0xd] != '\x01') &&
             (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0)) break;
          if (*plVar15 == 0) {
            *plVar15 = -1;
            pfStack_b0 = (float *)plVar15;
            pdb_140e95370(plVar15 + 1,pfVar17);
            goto LAB_142983d22;
          }
        }
        else {
          pfStack_c8 = pfVar17;
          pfVar17 = pfStack_c0;
          param_1 = ppfStack_b8;
LAB_142983a64:
          fVar10 = _DAT_142e37878;
          fVar9 = _UNK_142e36f64;
          fVar8 = _DAT_142e36f60;
          uStack_130 = 2;
          apfStack_128[0] = *param_1;
          apfStack_128[1] = *param_2;
          pfStack_b0 = *param_3;
          pfStack_c0 = (float *)*param_6;
          ppfStack_b8 = *(float ***)pfVar17;
          piVar20 = &iStack_298;
          puVar21 = auStack_2f8;
          pfVar14 = (float *)0x0;
LAB_142983ad3:
          if (pfVar14 != (float *)0x2) {
            pfVar17 = (float *)((longlong)pfVar14 + 1);
            pfStack_138 = pfVar17;
            pfVar14 = apfStack_128[(longlong)pfVar14];
            pfStack_d0 = *(float **)(pfVar14 + 8);
            ppfVar16 = *(float ***)(pfVar14 + 2);
            param_1 = ppfVar16 + *(longlong *)(pfVar14 + 4) * 4;
            param_3 = &pfStack_d0;
            if (&pfStack_d0 == (float **)0x0) goto LAB_142983b40;
            do {
              if (param_3 == &pfStack_c8) goto LAB_142983b40;
              ppfVar18 = param_3 + 1;
              while( true ) {
                ppfStack_e8 = param_3;
                pdb_1411bdd00(&uStack_1e8,pfStack_b0,*(undefined4 *)param_3,
                              *(undefined4 *)((longlong)param_3 + 4));
                if ((int)uStack_1e8 != 4) {
                  fStack_288 = fStack_1d8;
                  fStack_284 = fStack_1d4;
                  uStack_280 = uStack_1d0;
                  uStack_27c = uStack_1cc;
                  iStack_298 = (int)uStack_1e8;
                  uStack_294 = uStack_1e8._4_4_;
                  uStack_290 = (undefined4)uStack_1e0;
                  uStack_28c = uStack_1e0._4_4_;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8170(&UNK_143607c58,0x2b,&iStack_298,&UNK_143607c38,&UNK_143607ef0);
                }
                fVar25 = *pfStack_c0;
                uVar2 = *(undefined8 *)uStack_1e0;
                uVar3 = *(undefined8 *)((longlong)uStack_1e0 + 8);
                uStack_1e8 = &ppfStack_e8;
                uStack_1e0 = pdb_1411bd5f0;
                pdb_140f60760(piVar20,&UNK_143607f08,&uStack_1e8);
                fVar25 = fVar25 * fVar10 + fVar25 * fVar10;
                fVar23 = ((float)uVar2 + fVar25) * fVar8;
                fVar24 = ((float)((ulonglong)uVar2 >> 0x20) + fVar25) * fVar9;
                fVar25 = (float)uVar3 + fVar23;
                fVar22 = (float)((ulonglong)uVar3 >> 0x20) + fVar24;
                fStack_1d8 = fVar25 + fVar23;
                fStack_1d4 = fVar22 + fVar24;
                uStack_1e0 = (code *)CONCAT44(fVar22 - fVar24,fVar25 - fVar23);
                uStack_1e8 = (float ***)CONCAT44(0x3ca3d70a,(int)uStack_1e8);
                uStack_1e8 = (float ***)CONCAT71(uStack_1e8._1_7_,3);
                auStack_2f8[0] = 0;
                uStack_a1 = 1;
                pdb_140c9dcb0(piVar20,&uStack_1e8,puVar21);
                uStack_a1 = 1;
                pdb_140c9dc40(&uStack_1e8,piVar20);
                uStack_a3 = 1;
                pdb_140c9dee0(puVar21);
                uStack_a3 = 0;
                pdb_140c9dd20(piVar20,&uStack_1e8,puVar21);
                uStack_a1 = 0;
                pdb_1409008d0(ppfStack_b8);
                param_3 = ppfVar18;
                if (ppfVar18 != (float **)0x0) break;
LAB_142983b40:
                do {
                  param_3 = ppfVar16;
                  pfVar14 = pfVar17;
                  if (param_3 == param_1) goto LAB_142983ad3;
                  ppfVar16 = param_3 + 4;
                } while (*(int *)(param_3 + 2) == 0);
                param_3 = param_3 + 2;
                ppfVar18 = (float **)0x0;
              }
            } while( true );
          }
          if (cStack_a2 == '\0') {
            return;
          }
          plVar15 = (longlong *)pdb_140e97000();
          if (((char)plVar15[0xd] != '\x01') &&
             (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0)) break;
          param_5 = param_3;
          param_3 = (float **)&uStack_1e8;
          param_2 = param_1;
          if (*plVar15 == 0) {
            *plVar15 = -1;
            pfStack_b0 = (float *)plVar15;
            pdb_140e95370(plVar15 + 1);
LAB_142983d22:
            *(longlong *)pfStack_b0 = *(longlong *)pfStack_b0 + 1;
            return;
          }
        }
      }
      pfVar14 = (float *)pdb_142dc8090(&UNK_1432a7f58);
LAB_142983db3:
      pfVar14 = (float *)pdb_142dcf3a0(pfVar14,0);
    } while (pfVar14 != (float *)0x0);
    pdb_142dc7890(&UNK_1432a7ee8);
LAB_142983e03:
    pdb_142dc8070(&UNK_143607ec0,0x2d);
  }
  pdb_142dc8070(&UNK_143607da1,0x33,0);
LAB_142983e46:
  pdb_142dc8070(&UNK_143607da1,0x33);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

