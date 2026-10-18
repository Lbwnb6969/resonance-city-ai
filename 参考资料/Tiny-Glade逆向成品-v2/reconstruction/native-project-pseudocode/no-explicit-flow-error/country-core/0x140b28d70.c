// VA 0x140b28d70, PDB extent 11536 bytes
// country_core::systems::steam::workshop_publish::drive_workshop_publish
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_publish::drive_workshop_publish
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_publish.rs
   Extent: 11536 */

void pdb_140b28d70(ulonglong *******param_1,undefined8 *param_2,undefined8 *param_3,
                  longlong *param_4,undefined8 *param_5)

{
  ulonglong *****pppppuVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong ******ppppppuVar6;
  code *pcVar7;
  undefined *puVar8;
  char cVar9;
  undefined4 uVar10;
  ulonglong *******pppppppuVar11;
  longlong lVar12;
  ulonglong *******pppppppuVar13;
  ulonglong uVar14;
  ulonglong *******pppppppuVar15;
  ulonglong *******pppppppuVar16;
  ulonglong *******extraout_RAX;
  undefined7 uVar17;
  ulonglong *******extraout_RAX_00;
  ulonglong *******extraout_RAX_01;
  ulonglong *******pppppppuVar18;
  ulonglong ******ppppppuVar19;
  ulonglong *puVar20;
  byte *pbVar21;
  byte bVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  ulonglong *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  bool bVar29;
  ulonglong ******ppppppuStack_868;
  undefined4 uStack_860;
  undefined4 uStack_85c;
  int iStack_858;
  int iStack_854;
  ulonglong *******pppppppuStack_850;
  ulonglong *******pppppppuStack_848;
  ulonglong *******pppppppuStack_7a8;
  ulonglong *******pppppppuStack_798;
  byte bStack_790;
  undefined1 uStack_78f;
  undefined8 uStack_788;
  undefined8 uStack_780;
  ulonglong *******pppppppuStack_778;
  ulonglong *******pppppppuStack_6c8;
  ulonglong *******pppppppuStack_6c0;
  ulonglong *******pppppppuStack_6b8;
  ulonglong *******pppppppuStack_6b0;
  ulonglong *******pppppppuStack_6a8;
  ulonglong uStack_6a0;
  byte *pbStack_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  ulonglong uStack_680;
  byte *pbStack_678;
  undefined8 *puStack_670;
  ulonglong uStack_660;
  byte *pbStack_658;
  ulonglong uStack_640;
  byte *pbStack_638;
  longlong lStack_628;
  byte *pbStack_620;
  longlong lStack_618;
  ulonglong *******pppppppuStack_610;
  ulonglong *******pppppppuStack_608;
  ulonglong *******pppppppuStack_600;
  ulonglong *******pppppppuStack_5f8;
  byte bStack_5f0;
  byte bStack_5ef;
  undefined4 uStack_5ee;
  undefined2 uStack_5ea;
  undefined1 uStack_5d0;
  ulonglong ******ppppppuStack_2b8;
  ulonglong ******ppppppuStack_2b0;
  ulonglong ******ppppppuStack_2a8;
  longlong *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulonglong *******pppppppuStack_288;
  ulonglong *******pppppppuStack_280;
  undefined *puStack_278;
  ulonglong uStack_270;
  byte *pbStack_268;
  undefined8 uStack_260;
  ulonglong uStack_250;
  byte *pbStack_248;
  ulonglong uStack_230;
  byte *pbStack_228;
  ulonglong uStack_210;
  byte *pbStack_208;
  longlong lStack_1f8;
  byte *pbStack_1f0;
  ulonglong *******pppppppuStack_1e8;
  ulonglong *******pppppppuStack_1e0;
  ulonglong *******pppppppuStack_1d8;
  ulonglong *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulonglong *******pppppppuStack_1b8;
  ulonglong ******ppppppuStack_1b0;
  ulonglong ******ppppppuStack_1a8;
  ulonglong ******ppppppuStack_1a0;
  ulonglong *******pppppppuStack_108;
  ulonglong ******ppppppuStack_100;
  ulonglong *******pppppppuStack_f8;
  ulonglong *******pppppppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong *******pppppppuStack_d8;
  undefined8 uStack_c8;
  int iStack_c0;
  int iStack_bc;
  ulonglong *******pppppppuStack_b8;
  ulonglong *******pppppppuStack_b0;
  ulonglong *******pppppppuStack_a8;
  ulonglong *******pppppppuStack_a0;
  ulonglong *******pppppppuStack_98;
  undefined8 uStack_90;
  ulonglong *puStack_88;
  ulonglong *******pppppppuStack_80;
  ulonglong *******pppppppuStack_78;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  char cStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  ulonglong *puStack_68;
  ulonglong *******pppppppuStack_60;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c == '\0') {
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    pppppppuVar16 = (ulonglong *******)*param_5;
    lVar12 = param_5[1];
    ppppppuVar19 = *pppppppuVar16;
    uVar26 = 0;
    uVar14 = (longlong)ppppppuVar19 - *(ulonglong *)(lVar12 + 0x18);
    if (ppppppuVar19 < *(ulonglong *******)(lVar12 + 0x18)) {
      uVar14 = uVar26;
    }
    uVar27 = (longlong)ppppppuVar19 - *(ulonglong *)(lVar12 + 0x38);
    if (ppppppuVar19 < *(ulonglong *******)(lVar12 + 0x38)) {
      uVar27 = uVar26;
    }
    pppppppuVar11 = (ulonglong *******)(uVar14 * 0x28 + *(longlong *)(lVar12 + 8));
    uVar4 = *(ulonglong *)(lVar12 + 0x10);
    uVar23 = uVar4 - uVar14;
    if (uVar4 < uVar14) {
      uVar23 = uVar26;
    }
    puVar5 = (ulonglong *)*param_3;
    if (uVar4 < uVar14) {
      pppppppuVar11 = (ulonglong *******)0x8;
    }
    pppppppuVar18 = (ulonglong *******)(uVar27 * 0x28 + *(longlong *)(lVar12 + 0x28));
    uVar14 = *(ulonglong *)(lVar12 + 0x30) - uVar27;
    if (*(ulonglong *)(lVar12 + 0x30) < uVar27) {
      pppppppuVar18 = (ulonglong *******)0x8;
      uVar14 = uVar26;
    }
    pppppppuStack_78 = (ulonglong *******)(puVar5 + 0x1c);
    *pppppppuVar16 = (ulonglong ******)((*(longlong *)(lVar12 + 0x40) - uVar14) - uVar23);
    pppppppuStack_a8 = pppppppuVar11 + uVar23 * 5;
    pppppppuStack_f8 = pppppppuVar18 + uVar14 * 5;
    puStack_88 = puVar5 + 0x1d;
    puVar20 = puVar5 + 0x1f;
    pppppppuStack_108 = (ulonglong *******)*param_2;
    puStack_1d0 = puVar5 + 1;
    puVar24 = puVar5;
    puVar25 = _DAT_143ca8e90;
    plStack_2a0 = param_4;
    pppppppuStack_a0 = pppppppuVar16;
    puStack_68 = puVar5;
LAB_140b28eab:
    while ((pppppppuVar11 != (ulonglong *******)0x0 && (pppppppuVar11 != pppppppuStack_a8))) {
      pppppppuStack_80 = pppppppuVar11 + 5;
      *pppppppuVar16 = (ulonglong ******)((longlong)*pppppppuVar16 + 1);
      pppppppuVar13 = pppppppuVar11;
      pppppppuStack_60 = pppppppuVar18;
      if ((int)*puVar24 != 4) goto LAB_140b28fbc;
LAB_140b28ee3:
      ppppppuVar19 = pppppppuVar11[2];
      lVar12 = pdb_140f3ecf0(pppppppuVar11[1],ppppppuVar19);
      if (lVar12 != 0) {
        pdb_140f5fd10(&pppppppuStack_6c8,lVar12,ppppppuVar19);
        pppppppuVar18 = pppppppuStack_6b8;
        pppppppuVar16 = pppppppuStack_6c0;
        pppppppuVar13 = pppppppuStack_6c0;
        pppppppuVar15 = pppppppuStack_6c8;
        if (!SBORROW8(0,(longlong)pppppppuStack_6c8)) goto LAB_140b290db;
        if ((longlong)pppppppuStack_6b8 < 0) goto LAB_140b293e6;
        if (pppppppuStack_6b8 == (ulonglong *******)0x0) goto LAB_140b290d0;
        pdb_14007ee60();
        uVar28 = 1;
        pppppppuVar13 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar18,1);
        if (pppppppuVar13 != (ulonglong *******)0x0) {
          pub_142e32760(pppppppuVar13,pppppppuVar16,pppppppuVar18);
          pppppppuVar15 = pppppppuVar18;
          goto LAB_140b290db;
        }
LAB_140b293e9:
        pdb_142dc7e2a(uVar28,pppppppuVar18);
LAB_140b293f4:
        uVar28 = 0;
LAB_140b293f6:
        uStack_4f = 1;
        pdb_142dc7e2a(uVar28,pppppppuVar11);
LAB_140b2ae6c:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
LAB_140b290d0:
      pppppppuVar13 = (ulonglong *******)0x1;
      pppppppuVar15 = (ulonglong *******)0x0;
      pppppppuVar18 = (ulonglong *******)0x0;
LAB_140b290db:
      ppppppuVar19 = *pppppppuStack_78;
      uVar14 = (ulonglong)ppppppuVar19 ^ 0x8000000000000000;
      if (-1 < (longlong)ppppppuVar19) {
        uVar14 = 5;
      }
      lVar12 = 8;
      if (uVar14 - 1 < 4) {
        ppppppuVar19 = pppppppuStack_78[1];
joined_r0x000140b29182:
        if (ppppppuVar19 != (ulonglong ******)0x0) {
          pub_1406abac0(*(byte **)((longlong)pppppppuStack_78 + lVar12 + 8),(ulonglong)ppppppuVar19,
                        1);
        }
      }
      else if (uVar14 != 0) {
        lVar12 = 0x18;
        if (ppppppuVar19 != (ulonglong ******)0x0) {
          pub_1406abac0((byte *)*puStack_88,(ulonglong)ppppppuVar19,1);
        }
        ppppppuVar19 = pppppppuStack_78[3];
        goto joined_r0x000140b29182;
      }
      puVar24 = puStack_68;
      puStack_68[0x1c] = 0x8000000000000001;
      puStack_68[0x1d] = (ulonglong)pppppppuVar15;
      puStack_68[0x1e] = (ulonglong)pppppppuVar13;
      puStack_68[0x1f] = (ulonglong)pppppppuVar18;
      lVar12 = pdb_140f2ccc0();
      pppppppuVar13 = (ulonglong *******)pppppppuVar11[2];
      if ((longlong)pppppppuVar13 < 0) {
        uVar28 = 0;
LAB_140b293db:
        pdb_142dc7e2a(uVar28,pppppppuVar13);
LAB_140b293e6:
        uVar28 = 0;
        goto LAB_140b293e9;
      }
      if (pppppppuVar13 == (ulonglong *******)0x0) {
        pppppppuVar15 = (ulonglong *******)0x1;
        pppppppuStack_b0 = param_1;
      }
      else {
        ppppppuVar19 = pppppppuVar11[1];
        pppppppuStack_b0 = param_1;
        pdb_14007ee60();
        uVar28 = 1;
        pppppppuVar15 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar13,1);
        if (pppppppuVar15 == (ulonglong *******)0x0) goto LAB_140b293db;
        pub_142e32760(pppppppuVar15,ppppppuVar19,pppppppuVar13);
        puVar24 = puStack_68;
      }
      pppppppuVar16 = pppppppuStack_a0;
      param_1 = pppppppuStack_b0;
      uVar2 = *(undefined1 *)(pppppppuVar11 + 3);
      pppppppuVar18 = (ulonglong *******)*pppppppuStack_108;
      LOCK();
      ppppppuVar19 = *pppppppuVar18;
      *pppppppuVar18 = (ulonglong ******)((longlong)*pppppppuVar18 + 1);
      UNLOCK();
      if (*pppppppuVar18 == (ulonglong ******)0x0 ||
          SCARRY8((longlong)ppppppuVar19,1) != (longlong)*pppppppuVar18 < 0) goto LAB_140b2ae6c;
      pppppppuStack_6b0 = (ulonglong *******)CONCAT71(pppppppuStack_6b0._1_7_,uVar2);
      uStack_5d0 = 0;
      pppppppuStack_6c8 = pppppppuVar13;
      pppppppuStack_6c0 = pppppppuVar15;
      pppppppuStack_6b8 = pppppppuVar13;
      pppppppuStack_6a8 = pppppppuVar18;
      ppppppuStack_868 =
           (ulonglong ******)pdb_141ae6b00(*(longlong *)(lVar12 + 0x18) + 0x10,&pppppppuStack_6c8);
      ppppppuVar19 = pppppppuVar11[2];
      uStack_4f = 1;
      ppppppuStack_100 = ppppppuStack_868;
      lVar12 = pdb_140f3ecf0(pppppppuVar11[1],ppppppuVar19);
      puVar25 = _DAT_143ca8e90;
      if (lVar12 == 0) {
        pppppppuStack_1e0 = (ulonglong *******)0x1;
        pppppppuStack_1d8 = (ulonglong *******)0x0;
        pppppppuStack_f0 = (ulonglong *******)0x0;
        pppppppuVar18 = pppppppuStack_1e0;
        pppppppuVar13 = pppppppuStack_1d8;
        pppppppuVar11 = pppppppuStack_f0;
        goto LAB_140b29383;
      }
      uStack_4f = 1;
      pdb_140f5fd10(&pppppppuStack_6c8,lVar12,ppppppuVar19);
      pppppppuVar11 = pppppppuStack_6b8;
      pppppppuVar15 = pppppppuStack_6c0;
      param_1 = pppppppuStack_b0;
      pppppppuVar18 = pppppppuStack_6c0;
      pppppppuVar13 = pppppppuStack_6c8;
      if (!SBORROW8(0,(longlong)pppppppuStack_6c8)) goto LAB_140b29383;
      if ((longlong)pppppppuStack_6b8 < 0) goto LAB_140b293f4;
      if (pppppppuStack_6b8 != (ulonglong *******)0x0) {
        pdb_14007ee60();
        uVar28 = 1;
        pppppppuVar18 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar11,1);
        if (pppppppuVar18 != (ulonglong *******)0x0) {
          pub_142e32760(pppppppuVar18,pppppppuVar15,pppppppuVar11);
          puVar24 = puStack_68;
          param_1 = pppppppuStack_b0;
          pppppppuVar13 = pppppppuVar11;
          goto LAB_140b29383;
        }
        goto LAB_140b293f6;
      }
      pppppppuVar18 = (ulonglong *******)0x1;
      pppppppuVar13 = (ulonglong *******)0x0;
      pppppppuVar11 = (ulonglong *******)0x0;
LAB_140b29383:
      pppppppuStack_f0 = pppppppuVar11;
      pppppppuStack_1d8 = pppppppuVar13;
      pppppppuStack_1e0 = pppppppuVar18;
      pdb_140b2ec80(puVar24);
      *puStack_68 = 2;
      puStack_68[1] = (ulonglong)pppppppuStack_1d8;
      puStack_68[2] = (ulonglong)pppppppuStack_1e0;
      puStack_68[3] = (ulonglong)pppppppuStack_f0;
      puStack_68[4] = (ulonglong)ppppppuStack_100;
      pppppppuVar11 = pppppppuStack_80;
      pppppppuVar18 = pppppppuStack_60;
      puVar24 = puStack_68;
    }
    if ((pppppppuVar18 != (ulonglong *******)0x0) && (pppppppuVar18 != pppppppuStack_f8)) {
      pppppppuStack_60 = pppppppuVar18 + 5;
      pppppppuStack_80 = (ulonglong *******)0x0;
      *pppppppuVar16 = (ulonglong ******)((longlong)*pppppppuVar16 + 1);
      pppppppuVar13 = pppppppuVar18;
      pppppppuVar11 = pppppppuVar18;
      if ((int)*puVar24 == 4) goto LAB_140b28ee3;
LAB_140b28fbc:
      pppppppuVar11 = pppppppuStack_80;
      pppppppuVar18 = pppppppuStack_60;
      if (1 < *puVar25) {
        pdb_141b1e240(&ppppppuStack_868,pppppppuVar13[1],pppppppuVar13[2],2);
        uStack_1c0 = pdb_140f58250;
        pppppppuStack_6c8 = (ulonglong *******)0x0;
        pppppppuStack_6c0 = (ulonglong *******)&UNK_143056ee8;
        pppppppuStack_6b8 = (ulonglong *******)0x2e;
        pppppppuStack_6b0 = (ulonglong *******)0x0;
        pppppppuStack_6a8 = (ulonglong *******)&UNK_143056d04;
        uStack_6a0 = 0x39;
        pbStack_698 = (byte *)0x2;
        puStack_690 = &UNK_143056ee8;
        uStack_688 = 0x2e;
        uStack_680 = 0xae00000001;
        pbStack_678 = &UNK_143057116;
        puStack_670 = &uStack_1c8;
        uStack_1c8 = &ppppppuStack_868;
        pdb_140f332f0((longlong)&uStack_90 + 7,&pppppppuStack_6c8);
        pppppppuVar11 = pppppppuStack_80;
        pppppppuVar18 = pppppppuStack_60;
        if (ppppppuStack_868 != (ulonglong ******)0x0) {
          pub_1406abac0((byte *)CONCAT44(uStack_85c,uStack_860),(ulonglong)ppppppuStack_868,1);
          pppppppuVar11 = pppppppuStack_80;
          pppppppuVar18 = pppppppuStack_60;
        }
      }
      goto LAB_140b28eab;
    }
    ppppppuVar19 = (ulonglong ******)*puVar24;
    *puVar24 = 4;
    if (ppppppuVar19 == (ulonglong ******)0x4) {
      return;
    }
    ppppppuStack_868 = ppppppuVar19;
    pub_142e32760(&uStack_860,puStack_1d0,0xd8);
    lVar12 = 2;
    if ((ulonglong ******)0x1 < ppppppuVar19) {
      lVar12 = (longlong)ppppppuVar19 - 2;
    }
    if (lVar12 == 0) {
      pppppppuStack_b8 = pppppppuStack_850;
      uStack_c8 = (ulonglong *******)CONCAT44(uStack_85c,uStack_860);
      iStack_c0 = iStack_858;
      iStack_bc = iStack_854;
      pppppppuStack_98 = pppppppuStack_848;
      uStack_1c8 = (ulonglong *******)&pppppppuStack_98;
      pppppppuStack_6c8 = (ulonglong *******)&uStack_1c8;
      uStack_4e = 1;
      pdb_1416fd6c0(&uStack_788,&UNK_143386450,&pppppppuStack_6c8);
      pppppppuVar11 = pppppppuStack_78;
      if (uStack_788 == (ulonglong *******)0x2) {
        uStack_298 = uStack_780;
        if (*puVar25 != 0) {
          uStack_1c8 = (ulonglong *******)&uStack_c8;
          uStack_1c0 = pdb_140094770;
          pppppppuStack_1b8 = (ulonglong *******)&uStack_298;
          ppppppuStack_1b0 = (ulonglong ******)pdb_140f36c30;
          pppppppuStack_6c8 = (ulonglong *******)&UNK_143056ee8;
          pppppppuStack_6c0 = (ulonglong *******)0x2e;
          pppppppuStack_6b8 = (ulonglong *******)&UNK_143056ee8;
          pppppppuStack_6b0 = (ulonglong *******)0x2e;
          pppppppuStack_6a8 = (ulonglong *******)&UNK_143056ed0;
          uStack_69 = 1;
          pdb_1400c9be0(&UNK_143056ea8,&uStack_1c8,1,&pppppppuStack_6c8);
        }
        pppppppuVar16 = pppppppuStack_b8;
        pppppppuStack_60 = uStack_c8;
        pppppppuStack_80 = (ulonglong *******)CONCAT44(iStack_bc,iStack_c0);
        uStack_1c8 = (ulonglong *******)&uStack_298;
        uStack_1c0 = pdb_140f36c30;
        pdb_140f60760(&pppppppuStack_6c8,&UNK_143056f16,&uStack_1c8);
        uStack_1c8 = pppppppuStack_6c8;
        uStack_1c0 = (code *)pppppppuStack_6c0;
        pppppppuStack_1b8 = pppppppuStack_6b8;
        ppppppuVar19 = *pppppppuVar11;
        uVar14 = 5;
        if ((longlong)ppppppuVar19 < 0) {
          uVar14 = (ulonglong)ppppppuVar19 ^ 0x8000000000000000;
        }
        lVar12 = 8;
        if (uVar14 - 1 < 4) {
LAB_140b299fc:
          if (*(ulonglong *)((longlong)pppppppuVar11 + lVar12) != 0) {
            pub_1406abac0(*(byte **)((longlong)pppppppuVar11 + lVar12 + 8),
                          *(ulonglong *)((longlong)pppppppuVar11 + lVar12),1);
          }
        }
        else if (uVar14 != 0) {
          lVar12 = 0x18;
          if (ppppppuVar19 != (ulonglong ******)0x0) {
            pub_1406abac0((byte *)*puStack_88,(ulonglong)ppppppuVar19,1);
          }
          goto LAB_140b299fc;
        }
        puVar25 = puStack_68;
        puStack_68[0x1c] = (ulonglong)pppppppuStack_60;
        puStack_68[0x1d] = (ulonglong)pppppppuStack_80;
        puStack_68[0x1e] = (ulonglong)pppppppuVar16;
        puVar5[0x21] = (ulonglong)pppppppuStack_1b8;
        *(int *)puVar20 = (int)uStack_1c8;
        *(int *)((longlong)puVar5 + 0xfc) = uStack_1c8._4_4_;
        *(int *)(puVar5 + 0x20) = (int)uStack_1c0;
        *(int *)((longlong)puVar5 + 0x104) = uStack_1c0._4_4_;
        uStack_4e = 0;
        pdb_140f36c40(&uStack_298);
        uStack_50 = 0;
        pdb_140977ff0(&pppppppuStack_98);
        pppppppuVar11 = (ulonglong *******)0x4;
        pppppppuStack_60 = pppppppuVar11;
      }
      else if ((int)uStack_788 == 3) {
        pppppppuStack_d8 = pppppppuStack_b8;
        uStack_e0 = (ulonglong *******)CONCAT44(iStack_bc,iStack_c0);
        uStack_e8 = uStack_c8;
        pppppppuStack_a8 = pppppppuStack_98;
        pppppppuVar11 = (ulonglong *******)0x2;
        puVar25 = puStack_68;
        pppppppuStack_60 = pppppppuVar11;
      }
      else {
        pub_142e32760(&uStack_298,&uStack_788,0xb8);
        pppppppuVar18 = (ulonglong *******)uStack_290;
        ppppppuVar19 = *param_1;
        pppppppuStack_60 = uStack_298;
        if (uStack_298 == (ulonglong *******)0x1) {
          pub_142e32760(&uStack_1c8,&uStack_788,0xb8);
          pdb_140b270a0(&pppppppuStack_6c8,*ppppppuVar19,pppppppuVar11,&uStack_1c8,pppppppuVar18,0,0
                       );
          pppppppuStack_a0 = pppppppuStack_608;
          puVar20 = (ulonglong *)(ulonglong)bStack_5f0;
          pppppppuVar18 = (ulonglong *******)(ulonglong)bStack_5ef;
          puVar25 = puStack_68;
          pppppppuVar16 = pppppppuStack_5f8;
          param_1 = pppppppuStack_600;
        }
        else {
          pdb_140f60be0(&pppppppuStack_6c8,&pppppppuStack_288);
          pppppppuStack_1b8 = pppppppuStack_6b8;
          uStack_1c8 = pppppppuStack_6c8;
          uStack_1c0 = (code *)pppppppuStack_6c0;
          ppppppuVar6 = *pppppppuVar11;
          uVar14 = 5;
          if ((longlong)ppppppuVar6 < 0) {
            uVar14 = (ulonglong)ppppppuVar6 ^ 0x8000000000000000;
          }
          lVar12 = 8;
          if (uVar14 - 1 < 4) {
LAB_140b2a09e:
            if (*(ulonglong *)((longlong)pppppppuVar11 + lVar12) != 0) {
              pub_1406abac0(*(byte **)((longlong)pppppppuVar11 + lVar12 + 8),
                            *(ulonglong *)((longlong)pppppppuVar11 + lVar12),1);
            }
          }
          else if (uVar14 != 0) {
            lVar12 = 0x18;
            if (ppppppuVar6 != (ulonglong ******)0x0) {
              pub_1406abac0((byte *)*puStack_88,(ulonglong)ppppppuVar6,1);
            }
            goto LAB_140b2a09e;
          }
          *pppppppuVar11 = (ulonglong ******)0x8000000000000002;
          puStack_88[2] = (ulonglong)pppppppuStack_1b8;
          *(int *)puStack_88 = (int)uStack_1c8;
          *(int *)((longlong)puStack_88 + 4) = uStack_1c8._4_4_;
          *(int *)(puStack_88 + 1) = (int)uStack_1c0;
          *(int *)((longlong)puStack_88 + 0xc) = uStack_1c0._4_4_;
          pdb_14007ee60();
          pppppppuVar18 = (ulonglong *******)pub_1406abab0(0x28,8);
          if (pppppppuVar18 == (ulonglong *******)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x28);
          }
          *pppppppuVar18 = (ulonglong ******)0x1;
          pppppppuVar18[1] = (ulonglong ******)0x1;
          *(undefined1 *)(pppppppuVar18 + 2) = 0;
          *(undefined1 *)(pppppppuVar18 + 4) = 3;
          LOCK();
          ppppppuVar6 = *pppppppuVar18;
          *pppppppuVar18 = (ulonglong ******)((longlong)*pppppppuVar18 + 1);
          UNLOCK();
          uStack_e8 = pppppppuVar18;
          if (*pppppppuVar18 == (ulonglong ******)0x0 ||
              SCARRY8((longlong)ppppppuVar6,1) != (longlong)*pppppppuVar18 < 0) goto LAB_140b2ae6c;
          pppppppuVar13 = (ulonglong *******)pub_142e32030();
          pppppppuVar11 = (ulonglong *******)*ppppppuVar19;
          LOCK();
          ppppppuVar6 = *pppppppuVar11;
          *pppppppuVar11 = (ulonglong ******)((longlong)*pppppppuVar11 + 1);
          UNLOCK();
          if (*pppppppuVar11 == (ulonglong ******)0x0 ||
              SCARRY8((longlong)ppppppuVar6,1) != (longlong)*pppppppuVar11 < 0) goto LAB_140b2ae6c;
          uStack_1c8 = pppppppuVar11;
          uStack_1c0 = (code *)pppppppuVar13;
          pppppppuVar11 = (ulonglong *******)pub_142e31f10();
          ppppppuVar19 = (ulonglong ******)*ppppppuVar19;
          LOCK();
          pppppuVar1 = *ppppppuVar19;
          *ppppppuVar19 = (ulonglong *****)((longlong)*ppppppuVar19 + 1);
          UNLOCK();
          if (*ppppppuVar19 == (ulonglong *****)0x0 ||
              SCARRY8((longlong)pppppuVar1,1) != (longlong)*ppppppuVar19 < 0) goto LAB_140b2ae6c;
          pppppppuStack_6c8 = (ulonglong *******)ppppppuVar19;
          pppppppuStack_6c0 = pppppppuVar11;
          uVar10 = pub_142e32000(pppppppuVar11);
          pppppppuStack_a0 = pppppppuVar18;
          pdb_141a56040(&uStack_1c8,uVar10,0,pppppppuVar18);
          puVar25 = puStack_68;
          LOCK();
          *pppppppuStack_6c8 = (ulonglong ******)((longlong)*pppppppuStack_6c8 + -1);
          UNLOCK();
          if (*pppppppuStack_6c8 == (ulonglong ******)0x0) {
            pdb_140cb1c10(&pppppppuStack_6c8);
          }
          LOCK();
          *uStack_1c8 = (ulonglong ******)((longlong)*uStack_1c8 - 1);
          UNLOCK();
          if (*uStack_1c8 == (ulonglong ******)0x0) {
            pdb_140cb1c10(&uStack_1c8);
          }
          pub_142e32760(&pppppppuStack_6c0,&uStack_298,0xb8);
          pppppppuStack_6c8 = (ulonglong *******)0x3;
        }
        pppppppuVar13 = pppppppuStack_6c8;
        uStack_e8 = pppppppuStack_6c0;
        uStack_e0 = pppppppuStack_6b8;
        pppppppuStack_d8 = pppppppuStack_6b0;
        pppppppuStack_a8 = pppppppuStack_6a8;
        pppppppuStack_608 = pppppppuStack_a0;
        pub_142e32760(&uStack_1c8,&uStack_6a0,0x90);
        uStack_90._0_4_ = uStack_5ee;
        uStack_90._4_2_ = uStack_5ea;
        uStack_50 = 1;
        pppppppuVar11 = (ulonglong *******)pdb_140977ff0(&pppppppuStack_98);
        pppppppuStack_f8 = (ulonglong *******)CONCAT71(pppppppuStack_f8._1_7_,(char)pppppppuVar18);
        pppppppuStack_78 = pppppppuStack_610;
        pppppppuStack_108 = param_1;
        pppppppuStack_b0 = pppppppuVar16;
        pppppppuStack_60 = pppppppuVar13;
        if (uStack_c8 != (ulonglong *******)0x0) {
          pub_1406abac0((byte *)CONCAT44(iStack_bc,iStack_c0),(ulonglong)uStack_c8,1);
          pppppppuVar11 = extraout_RAX_01;
        }
      }
      pppppppuStack_80 = (ulonglong *******)CONCAT71(pppppppuStack_80._1_7_,(char)puVar20);
      uVar28 = CONCAT71((int7)((ulonglong)pppppppuVar11 >> 8),1);
      puStack_88 = (ulonglong *)CONCAT44(puStack_88._4_4_,(int)uVar28);
      ppppppuStack_100 = (ulonglong ******)((ulonglong)ppppppuStack_100 & 0xffffffff00000000);
    }
    else {
      if (lVar12 != 1) {
        pub_142e32760(&pppppppuStack_6c8,&ppppppuStack_868,0xb8);
        pppppppuStack_f8 = (ulonglong *******)CONCAT71(pppppppuStack_f8._1_7_,uStack_78f);
        pppppppuStack_b8 = (ulonglong *******)puStack_68[0x19];
        uStack_c8 = (ulonglong *******)puStack_68[0x17];
        iStack_c0 = (int)puStack_68[0x18];
        iStack_bc = *(int *)((longlong)puStack_68 + 0xc4);
        pppppppuStack_98 = pppppppuStack_798;
        uStack_298 = (ulonglong *******)0x0;
        uStack_1c8 = (ulonglong *******)0x0;
        pub_142e321c0(puStack_68[0x18],pppppppuStack_b8,&uStack_298,&uStack_1c8);
        pppppppuVar16 = uStack_1c8;
        ppppppuVar6 = (ulonglong ******)uStack_298;
        pdb_140f60be0(&uStack_1c8,&pppppppuStack_6b8);
        pppppppuStack_288 = pppppppuStack_1b8;
        uStack_298 = uStack_1c8;
        uStack_290 = uStack_1c0;
        ppppppuVar19 = *pppppppuStack_78;
        uVar14 = 5;
        if ((longlong)ppppppuVar19 < 0) {
          uVar14 = (ulonglong)ppppppuVar19 ^ 0x8000000000000000;
        }
        lVar12 = 8;
        if (uVar14 - 1 < 4) {
LAB_140b29755:
          if (*(ulonglong *)((longlong)pppppppuStack_78 + lVar12) != 0) {
            pub_1406abac0(*(byte **)((longlong)pppppppuStack_78 + lVar12 + 8),
                          *(ulonglong *)((longlong)pppppppuStack_78 + lVar12),1);
          }
        }
        else if (uVar14 != 0) {
          lVar12 = 0x18;
          if (ppppppuVar19 != (ulonglong ******)0x0) {
            pub_1406abac0((byte *)*puStack_88,(ulonglong)ppppppuVar19,1);
          }
          goto LAB_140b29755;
        }
        pppppppuVar11 = pppppppuStack_98;
        puStack_68[0x1c] = 0x8000000000000003;
        puStack_88[2] = (ulonglong)pppppppuStack_288;
        *(int *)puStack_88 = (int)uStack_298;
        *(int *)((longlong)puStack_88 + 4) = uStack_298._4_4_;
        *(int *)(puStack_88 + 1) = (int)uStack_290;
        *(int *)((longlong)puStack_88 + 0xc) = uStack_290._4_4_;
        puStack_68[0x20] = (ulonglong)ppppppuVar6;
        puStack_68[0x21] = (ulonglong)pppppppuVar16;
        pppppppuVar16 = pppppppuStack_98 + 2;
        LOCK();
        bVar29 = *(char *)(pppppppuStack_98 + 2) == '\0';
        if (bVar29) {
          *(char *)(pppppppuStack_98 + 2) = '\x01';
        }
        UNLOCK();
        if (!bVar29) {
          pdb_142dbd1a0(pppppppuVar16,puStack_88,1000000000);
        }
        pdb_140e9a150(pppppppuVar16);
        pppppppuVar18 = (ulonglong *******)pppppppuVar11[3];
        bVar22 = *(byte *)(pppppppuVar11 + 4);
        *(undefined1 *)(pppppppuVar11 + 4) = 3;
        pdb_140e9a350();
        LOCK();
        cVar9 = *(char *)pppppppuVar16;
        if (cVar9 == '\x01') {
          *(char *)pppppppuVar16 = '\0';
        }
        UNLOCK();
        if (cVar9 != '\x01') {
          pdb_142dbcef0(pppppppuVar16,0);
        }
        if (bVar22 == 2) {
          uStack_90._0_4_ = CONCAT31(uStack_90._1_3_,(char)pppppppuVar18);
          if (*puVar25 != 0) {
            uStack_290 = pdb_140094770;
            pppppppuStack_288 = (ulonglong *******)&uStack_90;
            pppppppuStack_280 = (ulonglong *******)pdb_140cb3520;
            uStack_1c8 = (ulonglong *******)&UNK_143056ee8;
            uStack_1c0 = (code *)0x2e;
            pppppppuStack_1b8 = (ulonglong *******)&UNK_143056ee8;
            ppppppuStack_1b0 = (ulonglong ******)0x2e;
            ppppppuStack_1a8 = (ulonglong ******)&UNK_143057050;
            uStack_298 = (ulonglong *******)&pppppppuStack_6b8;
            pdb_1400c9be0(&UNK_143057030,&uStack_298,1,&uStack_1c8);
          }
          pppppppuVar16 = pppppppuStack_6c0;
          if ((char)pppppppuVar18 == '\a' && bStack_790 == 0) {
            if ((char)pppppppuStack_6c8 != '\0') {
              pdb_140f3e9e0(&uStack_788,pbStack_698,puStack_690,&UNK_143056cf7,0xd);
              pppppppuVar11 = (ulonglong *******)pdb_140f4eda0(uStack_780,pppppppuStack_778);
              if (pppppppuVar11 != (ulonglong *******)0x0) {
                uStack_e8 = pppppppuVar11;
                if (1 < *puVar25) {
                  uStack_290 = pdb_140f58250;
                  pppppppuStack_288 = (ulonglong *******)&uStack_e8;
                  pppppppuStack_280 = (ulonglong *******)pdb_140f59780;
                  uStack_1c8 = (ulonglong *******)&UNK_143056ee8;
                  uStack_1c0 = (code *)0x2e;
                  pppppppuStack_1b8 = (ulonglong *******)&UNK_143056ee8;
                  ppppppuStack_1b0 = (ulonglong ******)0x2e;
                  ppppppuStack_1a8 = (ulonglong ******)&UNK_143057098;
                  uStack_298 = (ulonglong *******)&uStack_788;
                  pdb_1400c9be0(&UNK_143057068,&uStack_298,2,&uStack_1c8);
                }
                pdb_1404b38e0(&uStack_e8);
              }
              *(undefined4 *)plStack_2a0[2] = *(undefined4 *)((longlong)plStack_2a0 + 0x1c);
              pdb_1403b05d0(*plStack_2a0 + 0x18,pppppppuVar16);
              if (uStack_788 != (ulonglong *******)0x0) {
                pub_1406abac0((byte *)uStack_780,(ulonglong)uStack_788,1);
              }
            }
            pdb_140b25270(&ppppppuStack_2b8);
          }
          else {
            pdb_140b2ebb0(&ppppppuStack_2b8,&uStack_90);
          }
          pppppppuVar16 = pppppppuStack_78;
          pppppppuStack_1b8 = pppppppuStack_6a8;
          uStack_1c8 = pppppppuStack_6b8;
          uStack_1c0 = (code *)pppppppuStack_6b0;
          ppppppuStack_1a0 = ppppppuStack_2a8;
          ppppppuStack_1b0 = ppppppuStack_2b8;
          ppppppuStack_1a8 = ppppppuStack_2b0;
          ppppppuVar19 = *pppppppuStack_78;
          uVar14 = 5;
          if ((longlong)ppppppuVar19 < 0) {
            uVar14 = (ulonglong)ppppppuVar19 ^ 0x8000000000000000;
          }
          lVar12 = 8;
          if (uVar14 - 1 < 4) {
LAB_140b2a27f:
            if (*(ulonglong *)((longlong)pppppppuVar16 + lVar12) != 0) {
              pub_1406abac0(*(byte **)((longlong)pppppppuVar16 + lVar12 + 8),
                            *(ulonglong *)((longlong)pppppppuVar16 + lVar12),1);
            }
          }
          else if (uVar14 != 0) {
            lVar12 = 0x18;
            if (ppppppuVar19 != (ulonglong ******)0x0) {
              pub_1406abac0((byte *)*puStack_88,(ulonglong)ppppppuVar19,1);
            }
            goto LAB_140b2a27f;
          }
          pppppppuVar16[4] = ppppppuStack_1a8;
          pppppppuVar16[5] = ppppppuStack_1a0;
          pppppppuVar16[2] = (ulonglong ******)pppppppuStack_1b8;
          pppppppuVar16[3] = ppppppuStack_1b0;
          *(int *)pppppppuVar16 = (int)uStack_1c8;
          *(int *)((longlong)pppppppuVar16 + 4) = uStack_1c8._4_4_;
          *(int *)(pppppppuVar16 + 1) = (int)uStack_1c0;
          *(int *)((longlong)pppppppuVar16 + 0xc) = uStack_1c0._4_4_;
        }
        else {
          if (bVar22 == 3) {
            pppppppuStack_60 = pppppppuStack_6c8;
            uStack_e8 = pppppppuStack_6c0;
            uStack_e0 = pppppppuStack_6b8;
            pppppppuStack_d8 = pppppppuStack_6b0;
            pppppppuStack_a8 = pppppppuStack_6a8;
            pub_142e32760(&uStack_1c8,&uStack_6a0,0x90);
            pppppppuStack_78 = uStack_c8;
            pppppppuStack_a0 = (ulonglong *******)CONCAT44(iStack_bc,iStack_c0);
            pppppppuStack_108 = pppppppuStack_b8;
            pppppppuStack_b0 = pppppppuStack_98;
            pppppppuVar16 = pppppppuStack_98;
            goto LAB_140b2a610;
          }
          uStack_e8 = pppppppuVar18;
          if (2 < *puVar25) {
            uStack_788 = (ulonglong *******)&UNK_143056fc0;
            if (bStack_790 != 0) {
              uStack_788 = (ulonglong *******)&UNK_143056fc7;
            }
            uStack_780 = (ulonglong *******)((ulonglong)bStack_790 * 2 + 7);
            uStack_1c8 = (ulonglong *******)&uStack_788;
            uStack_1c0 = pdb_1402ed400;
            ppppppuStack_1b0 = (ulonglong ******)pdb_140094770;
            ppppppuStack_1a8 = (ulonglong ******)&uStack_e8;
            ppppppuStack_1a0 = (ulonglong ******)pdb_140f72a40;
            uStack_298 = (ulonglong *******)&UNK_143056ee8;
            uStack_290 = (code *)0x2e;
            pppppppuStack_288 = (ulonglong *******)&UNK_143056ee8;
            pppppppuStack_280 = (ulonglong *******)0x2e;
            puStack_278 = &UNK_143056ff0;
            pppppppuStack_1b8 = (ulonglong *******)&pppppppuStack_6b8;
            pdb_1400c9be0(&UNK_143056fd0,&uStack_1c8,3,&uStack_298);
          }
          pdb_140f4c4e0(&uStack_1c8,&UNK_143057008,0x28);
          pppppppuVar16 = uStack_1c8;
          if ((!SBORROW8(0,(longlong)uStack_1c8)) && (uStack_1c8 != (ulonglong *******)0x0)) {
            pub_1406abac0((byte *)uStack_1c0,(ulonglong)uStack_1c8,1);
          }
          pppppppuStack_1b8 = pppppppuStack_6a8;
          uStack_1c8 = pppppppuStack_6b8;
          uStack_1c0 = (code *)pppppppuStack_6b0;
          bVar29 = (byte)pppppppuStack_f8 != bVar22;
          bVar22 = !SBORROW8(0,(longlong)pppppppuVar16) | (byte)pppppppuStack_f8;
          ppppppuVar19 = *pppppppuStack_78;
          uVar14 = 5;
          if ((longlong)ppppppuVar19 < 0) {
            uVar14 = (ulonglong)ppppppuVar19 ^ 0x8000000000000000;
          }
          lVar12 = 8;
          if (uVar14 - 1 < 4) {
LAB_140b29fdf:
            if (*(ulonglong *)((longlong)pppppppuStack_78 + lVar12) != 0) {
              pub_1406abac0(*(byte **)((longlong)pppppppuStack_78 + lVar12 + 8),
                            *(ulonglong *)((longlong)pppppppuStack_78 + lVar12),1);
            }
          }
          else if (uVar14 != 0) {
            lVar12 = 0x18;
            if (ppppppuVar19 != (ulonglong ******)0x0) {
              pub_1406abac0((byte *)*puStack_88,(ulonglong)ppppppuVar19,1);
            }
            goto LAB_140b29fdf;
          }
          puStack_68[0x1c] = 0x8000000000000004;
          puStack_88[2] = (ulonglong)pppppppuStack_1b8;
          *(int *)puStack_88 = (int)uStack_1c8;
          *(int *)((longlong)puStack_88 + 4) = uStack_1c8._4_4_;
          *(int *)(puStack_88 + 1) = (int)uStack_1c0;
          *(int *)((longlong)puStack_88 + 0xc) = uStack_1c0._4_4_;
          puStack_68[0x20] = (ulonglong)pppppppuVar18;
          *(byte *)(puStack_68 + 0x21) = bVar22 | bVar29;
        }
        LOCK();
        *pppppppuStack_98 = (ulonglong ******)((longlong)*pppppppuStack_98 - 1);
        UNLOCK();
        if (*pppppppuStack_98 == (ulonglong ******)0x0) {
          uStack_6d = 0;
          pdb_140c7b120(&pppppppuStack_98);
        }
        LOCK();
        *uStack_c8 = (ulonglong ******)((longlong)*uStack_c8 - 1);
        UNLOCK();
        if (*uStack_c8 == (ulonglong ******)0x0) {
          uStack_6e = 0;
          pdb_140cb1c10(&uStack_c8);
        }
        if (uStack_6a0 != 0) {
          pub_1406abac0(pbStack_698,uStack_6a0,1);
        }
        if (uStack_680 != 0) {
          pub_1406abac0(pbStack_678,uStack_680,1);
        }
        if (uStack_660 != 0) {
          pub_1406abac0(pbStack_658,uStack_660,1);
        }
        if (uStack_640 != 0) {
          pub_1406abac0(pbStack_638,uStack_640,1);
        }
        if (lStack_618 != 0) {
          pbVar21 = pbStack_620 + 8;
          lVar12 = lStack_618;
          do {
            if (*(ulonglong *)(pbVar21 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar21,*(ulonglong *)(pbVar21 + -8),1);
            }
            pbVar21 = pbVar21 + 0x18;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        pppppppuStack_60 = (ulonglong *******)0x4;
        pppppppuVar16 = (ulonglong *******)0x0;
        if (lStack_628 != 0) {
          pub_1406abac0(pbStack_620,lStack_628 * 0x18,8);
          pppppppuVar16 = extraout_RAX;
        }
LAB_140b2a610:
        pppppppuStack_80 = (ulonglong *******)CONCAT71(pppppppuStack_80._1_7_,bStack_790);
        uVar17 = (undefined7)((ulonglong)pppppppuVar16 >> 8);
        ppppppuStack_100 =
             (ulonglong ******)CONCAT44(ppppppuStack_100._4_4_,(int)CONCAT71(uVar17,1));
        pppppppuStack_f0 = (ulonglong *******)((ulonglong)pppppppuStack_f0 & 0xffffffff00000000);
        puStack_88 = (ulonglong *)CONCAT44(puStack_88._4_4_,(int)CONCAT71(uVar17,1));
        puVar25 = puStack_68;
        goto LAB_140b2ab0e;
      }
      pppppppuStack_b0 = param_1;
      pub_142e32760(&uStack_298,&uStack_860,0xb8);
      uStack_c8 = pppppppuStack_7a8;
      pppppppuVar16 = pppppppuStack_7a8 + 2;
      LOCK();
      bVar29 = *(char *)(pppppppuStack_7a8 + 2) == '\0';
      if (bVar29) {
        *(char *)(pppppppuStack_7a8 + 2) = '\x01';
      }
      UNLOCK();
      if (!bVar29) {
        uStack_49 = 1;
        uStack_4a = 1;
        pdb_142dbd1a0(pppppppuVar16);
      }
      uStack_49 = 1;
      uStack_4a = 1;
      pdb_140e9a150(pppppppuVar16);
      pppppppuVar11 = (ulonglong *******)pppppppuStack_7a8[3];
      cVar3 = *(char *)(pppppppuStack_7a8 + 4);
      pppppppuVar18 = (ulonglong *******)CONCAT71((int7)((ulonglong)param_1 >> 8),cVar3);
      *(undefined1 *)(pppppppuStack_7a8 + 4) = 3;
      uStack_49 = 1;
      uStack_4a = 1;
      pdb_140e9a350();
      LOCK();
      cVar9 = *(char *)pppppppuVar16;
      if (cVar9 == '\x01') {
        *(char *)pppppppuVar16 = '\0';
      }
      UNLOCK();
      if (cVar9 != '\x01') {
        uStack_49 = 1;
        uStack_4a = 1;
        pdb_142dbcef0(pppppppuVar16,0);
      }
      pbVar21 = pbStack_268;
      if (cVar3 == '\x02') {
        uStack_e8 = (ulonglong *******)CONCAT71(uStack_e8._1_7_,(char)pppppppuVar11);
        if (*puVar25 != 0) {
          uStack_1c8 = (ulonglong *******)&pppppppuStack_288;
          uStack_1c0 = pdb_140094770;
          pppppppuStack_1b8 = (ulonglong *******)&uStack_e8;
          ppppppuStack_1b0 = (ulonglong ******)pdb_140cb3520;
          pppppppuStack_6c8 = (ulonglong *******)&UNK_143056ee8;
          pppppppuStack_6c0 = (ulonglong *******)0x2e;
          pppppppuStack_6b8 = (ulonglong *******)&UNK_143056ee8;
          pppppppuStack_6b0 = (ulonglong *******)0x2e;
          pppppppuStack_6a8 = (ulonglong *******)&UNK_143056fa8;
          uStack_49 = 1;
          uStack_4a = 1;
          pdb_1400c9be0(&UNK_143056f70,&uStack_1c8,1,&pppppppuStack_6c8);
        }
        puVar8 = puStack_278;
        pppppppuStack_60 = pppppppuStack_288;
        pppppppuStack_80 = pppppppuStack_280;
        uStack_1c8 = (ulonglong *******)0x0;
        uStack_1c0 = (code *)0x1;
        pppppppuStack_1b8 = (ulonglong *******)0x0;
        pppppppuStack_6b8 = (ulonglong *******)0x60000020;
        pppppppuStack_6c8 = (ulonglong *******)&uStack_1c8;
        pppppppuStack_6c0 = (ulonglong *******)&UNK_143057378;
        cVar9 = pdb_140cb3520(&uStack_e8,&pppppppuStack_6c8);
        pppppppuVar16 = pppppppuStack_78;
        if (cVar9 != '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_1430573a8,0x37,(longlong)&uStack_90 + 7,&UNK_1430574f8,&UNK_143057450);
        }
        pppppppuStack_778 = pppppppuStack_1b8;
        uStack_788 = uStack_1c8;
        uStack_780 = (ulonglong *******)uStack_1c0;
        ppppppuVar19 = *pppppppuStack_78;
        uVar14 = 5;
        if ((longlong)ppppppuVar19 < 0) {
          uVar14 = (ulonglong)ppppppuVar19 ^ 0x8000000000000000;
        }
        lVar12 = 8;
        if (uVar14 - 1 < 4) {
LAB_140b29c63:
          if (*(ulonglong *)((longlong)pppppppuVar16 + lVar12) != 0) {
            pub_1406abac0(*(byte **)((longlong)pppppppuVar16 + lVar12 + 8),
                          *(ulonglong *)((longlong)pppppppuVar16 + lVar12),1);
          }
        }
        else if (uVar14 != 0) {
          lVar12 = 0x18;
          if (ppppppuVar19 != (ulonglong ******)0x0) {
            pub_1406abac0((byte *)*puStack_88,(ulonglong)ppppppuVar19,1);
          }
          goto LAB_140b29c63;
        }
        puStack_68[0x1c] = (ulonglong)pppppppuStack_60;
        puStack_68[0x1d] = (ulonglong)pppppppuStack_80;
        puStack_68[0x1e] = (ulonglong)puVar8;
        puVar5[0x21] = (ulonglong)pppppppuStack_778;
        *(int *)puVar20 = (int)uStack_788;
        *(int *)((longlong)puVar5 + 0xfc) = uStack_788._4_4_;
        *(int *)(puVar5 + 0x20) = (int)uStack_780;
        *(int *)((longlong)puVar5 + 0x104) = uStack_780._4_4_;
        pppppppuVar11 = (ulonglong *******)0x4;
        cVar9 = '\x01';
        pppppppuStack_610 = pppppppuVar18;
      }
      else {
        if (cVar3 == '\x03') {
          pppppppuStack_d8 = pppppppuStack_288;
          uStack_e8 = uStack_298;
          uStack_e0 = (ulonglong *******)uStack_290;
          pppppppuStack_a8 = pppppppuStack_280;
          pub_142e32760(&uStack_1c8,&puStack_278,0x90);
          pppppppuStack_78 = pppppppuStack_1e8;
          pppppppuStack_a0 = uStack_c8;
          pppppppuVar18 = (ulonglong *******)0x0;
          pppppppuStack_60 = (ulonglong *******)0x3;
          puVar25 = puStack_68;
          goto LAB_140b2a827;
        }
        uStack_788 = pppppppuVar11;
        pdb_14007ee60();
        pppppppuVar16 = (ulonglong *******)pub_1406abab0(0x80,1);
        if (pppppppuVar16 == (ulonglong *******)0x0) {
          uStack_49 = 1;
          uStack_4a = 1;
          pdb_142dc7e2a(1,0x80);
          goto LAB_140b2ae6c;
        }
        uStack_1c8 = (ulonglong *******)0x80;
        pppppppuStack_1b8 = (ulonglong *******)0x0;
        pppppppuStack_6c8 = (ulonglong *******)&uStack_1c8;
        pppppppuStack_6c0 = (ulonglong *******)&UNK_143056a25;
        pppppppuStack_6b8 = (ulonglong *******)0x2;
        pppppppuStack_6b0 = (ulonglong *******)0x0;
        pppppppuStack_6a8 = (ulonglong *******)((ulonglong)pppppppuStack_6a8 & 0xffffffffffffff00);
        uStack_1c0 = (code *)pppppppuVar16;
        pppppppuVar16 = (ulonglong *******)pdb_141c37ae0(&uStack_788,&pppppppuStack_6c8);
        if (pppppppuVar16 == (ulonglong *******)0x0) {
          pppppppuStack_60 = uStack_1c8;
          pppppppuVar16 = (ulonglong *******)uStack_1c0;
          if (SBORROW8(0,(longlong)uStack_1c8)) goto LAB_140b2a2bf;
          pppppppuStack_80 = (ulonglong *******)uStack_1c0;
          pppppppuStack_a8 = pppppppuStack_1b8;
          uStack_51 = 0;
          pdb_140f3e9e0(&pppppppuStack_6c8,pbVar21,uStack_260,&UNK_143056cf7,0xd);
          uStack_1c8 = pppppppuStack_60;
          uStack_1c0 = (code *)pppppppuStack_80;
          pppppppuStack_1b8 = pppppppuStack_a8;
          uStack_51 = 1;
          lVar12 = pdb_141705470(&pppppppuStack_6c8,&uStack_1c8);
          if (lVar12 != 0) {
            uStack_51 = 1;
            uStack_788 = (ulonglong *******)pdb_142deaf00(lVar12);
            goto LAB_140b2a2d6;
          }
          ppppppuVar19 = *pppppppuStack_b0;
          pub_142e32760(&uStack_1c8,&uStack_298,0xb8);
          uStack_49 = 0;
          uStack_4a = 0;
          pdb_140b270a0(&pppppppuStack_6c8,*ppppppuVar19,pppppppuStack_78,&uStack_1c8,pppppppuVar11,
                        1,cVar3);
          pppppppuVar16 = pppppppuStack_6a8;
          pppppppuVar11 = pppppppuStack_6c8;
          uStack_e8 = pppppppuStack_6c0;
          uStack_e0 = pppppppuStack_6b8;
          pppppppuStack_d8 = pppppppuStack_6b0;
          pub_142e32760(&uStack_1c8,&uStack_6a0,0x90);
          pppppppuStack_a0 = pppppppuStack_608;
          pppppppuStack_108 = pppppppuStack_600;
          pppppppuStack_b0 = pppppppuStack_5f8;
          pppppppuStack_80 = (ulonglong *******)CONCAT71(pppppppuStack_80._1_7_,bStack_5f0);
          pppppppuStack_f8 = (ulonglong *******)CONCAT71(pppppppuStack_f8._1_7_,bStack_5ef);
          uStack_90._0_4_ = uStack_5ee;
          uStack_90._4_2_ = uStack_5ea;
          cVar9 = '\0';
        }
        else {
          if (uStack_1c8 != (ulonglong *******)0x0) {
            pub_1406abac0((byte *)uStack_1c0,(ulonglong)uStack_1c8,1);
          }
LAB_140b2a2bf:
          uStack_49 = 1;
          uStack_4a = 1;
          uStack_788 = (ulonglong *******)pdb_142dead00(pppppppuVar16);
LAB_140b2a2d6:
          pppppppuVar16 = pppppppuStack_78;
          if (*puVar25 != 0) {
            uStack_1c8 = (ulonglong *******)&pppppppuStack_288;
            uStack_1c0 = pdb_140094770;
            ppppppuStack_1b0 = (ulonglong ******)pdb_140f36c30;
            pppppppuStack_6c8 = (ulonglong *******)&UNK_143056ee8;
            pppppppuStack_6c0 = (ulonglong *******)0x2e;
            pppppppuStack_6b8 = (ulonglong *******)&UNK_143056ee8;
            pppppppuStack_6b0 = (ulonglong *******)0x2e;
            pppppppuStack_6a8 = (ulonglong *******)&UNK_143056f58;
            uStack_6a = 1;
            pppppppuStack_1b8 = (ulonglong *******)&uStack_788;
            pdb_1400c9be0(&UNK_143056f1c,&uStack_1c8,1,&pppppppuStack_6c8);
          }
          puVar8 = puStack_278;
          pppppppuStack_60 = pppppppuStack_288;
          pppppppuStack_80 = pppppppuStack_280;
          uStack_1c0 = pdb_140f36c30;
          uStack_1c8 = (ulonglong *******)&uStack_788;
          pdb_140f60760(&pppppppuStack_6c8,&UNK_143056f16,&uStack_1c8);
          uStack_1c8 = pppppppuStack_6c8;
          uStack_1c0 = (code *)pppppppuStack_6c0;
          pppppppuStack_1b8 = pppppppuStack_6b8;
          ppppppuVar19 = *pppppppuVar16;
          uVar14 = 5;
          if ((longlong)ppppppuVar19 < 0) {
            uVar14 = (ulonglong)ppppppuVar19 ^ 0x8000000000000000;
          }
          lVar12 = 8;
          if (uVar14 - 1 < 4) {
LAB_140b2a421:
            if (*(ulonglong *)((longlong)pppppppuVar16 + lVar12) != 0) {
              pub_1406abac0(*(byte **)((longlong)pppppppuVar16 + lVar12 + 8),
                            *(ulonglong *)((longlong)pppppppuVar16 + lVar12),1);
            }
          }
          else if (uVar14 != 0) {
            lVar12 = 0x18;
            if (ppppppuVar19 != (ulonglong ******)0x0) {
              pub_1406abac0((byte *)*puStack_88,(ulonglong)ppppppuVar19,1);
            }
            goto LAB_140b2a421;
          }
          puStack_68[0x1c] = (ulonglong)pppppppuStack_60;
          puStack_68[0x1d] = (ulonglong)pppppppuStack_80;
          puStack_68[0x1e] = (ulonglong)puVar8;
          puVar5[0x21] = (ulonglong)pppppppuStack_1b8;
          *(int *)puVar20 = (int)uStack_1c8;
          *(int *)((longlong)puVar5 + 0xfc) = uStack_1c8._4_4_;
          *(int *)(puVar5 + 0x20) = (int)uStack_1c0;
          *(int *)((longlong)puVar5 + 0x104) = uStack_1c0._4_4_;
          uStack_49 = 1;
          uStack_4a = 0;
          pdb_140f36c40(&uStack_788);
          pppppppuVar11 = (ulonglong *******)0x4;
          cVar9 = '\x01';
          pppppppuStack_610 = pppppppuVar18;
        }
      }
      puVar25 = puStack_68;
      LOCK();
      *uStack_c8 = (ulonglong ******)((longlong)*uStack_c8 - 1);
      UNLOCK();
      pppppppuVar18 = uStack_c8;
      pppppppuStack_a8 = pppppppuVar16;
      pppppppuStack_78 = pppppppuStack_610;
      pppppppuStack_60 = pppppppuVar11;
      if (*uStack_c8 == (ulonglong ******)0x0) {
        uStack_6c = 0;
        cStack_6b = cVar9;
        pppppppuVar18 = (ulonglong *******)pdb_140c7b120(&uStack_c8);
      }
      if (cVar9 != '\0') {
        if (uStack_270 != 0) {
          pub_1406abac0(pbStack_268,uStack_270,1);
        }
        if (uStack_250 != 0) {
          pub_1406abac0(pbStack_248,uStack_250,1);
        }
        if (uStack_230 != 0) {
          pub_1406abac0(pbStack_228,uStack_230,1);
        }
        if (uStack_210 != 0) {
          pub_1406abac0(pbStack_208,uStack_210,1);
        }
        if (pppppppuStack_1e8 != (ulonglong *******)0x0) {
          pbVar21 = pbStack_1f0 + 8;
          pppppppuVar16 = pppppppuStack_1e8;
          do {
            if (*(ulonglong *)(pbVar21 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar21,*(ulonglong *)(pbVar21 + -8),1);
            }
            pbVar21 = pbVar21 + 0x18;
            pppppppuVar16 = (ulonglong *******)((longlong)pppppppuVar16 + -1);
          } while (pppppppuVar16 != (ulonglong *******)0x0);
        }
        pppppppuVar18 = (ulonglong *******)0x0;
        puVar25 = puStack_68;
        if (lStack_1f8 != 0) {
          pub_1406abac0(pbStack_1f0,lStack_1f8 * 0x18,8);
          pppppppuVar18 = extraout_RAX_00;
          puVar25 = puStack_68;
        }
      }
LAB_140b2a827:
      uVar28 = CONCAT71((int7)((ulonglong)pppppppuVar18 >> 8),1);
      ppppppuStack_100 = (ulonglong ******)CONCAT44(ppppppuStack_100._4_4_,(int)uVar28);
      puStack_88 = (ulonglong *)((ulonglong)puStack_88 & 0xffffffff00000000);
    }
    pppppppuStack_f0 =
         (ulonglong *******)
         CONCAT44(pppppppuStack_f0._4_4_,(int)CONCAT71((int7)((ulonglong)uVar28 >> 8),1));
LAB_140b2ab0e:
    pdb_140b2ec80(puVar25);
    puVar5 = puStack_68;
    *puStack_68 = (ulonglong)pppppppuStack_60;
    puStack_1d0[2] = (ulonglong)pppppppuStack_d8;
    *(int *)puStack_1d0 = (int)uStack_e8;
    *(int *)((longlong)puStack_1d0 + 4) = uStack_e8._4_4_;
    *(int *)(puStack_1d0 + 1) = (int)uStack_e0;
    *(int *)((longlong)puStack_1d0 + 0xc) = uStack_e0._4_4_;
    puStack_68[4] = (ulonglong)pppppppuStack_a8;
    pub_142e32760(puStack_68 + 5,&uStack_1c8,0x90);
    puVar5[0x17] = (ulonglong)pppppppuStack_78;
    puVar5[0x18] = (ulonglong)pppppppuStack_a0;
    puVar5[0x19] = (ulonglong)pppppppuStack_108;
    puVar5[0x1a] = (ulonglong)pppppppuStack_b0;
    *(undefined1 *)(puVar5 + 0x1b) = pppppppuStack_80._0_1_;
    *(byte *)((longlong)puVar5 + 0xd9) = (byte)pppppppuStack_f8;
    *(undefined4 *)((longlong)puVar5 + 0xda) = (undefined4)uStack_90;
    *(undefined2 *)((longlong)puVar5 + 0xde) = uStack_90._4_2_;
  }
  return;
}

