// VA 0x140b7f3e0, PDB extent 2688 bytes
// country_core::resources::init_populate_ssbo_library
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::init_populate_ssbo_library
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/mod.rs
   Extent: 2688 */

void pdb_140b7f3e0(undefined8 *param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  char *pcVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  ushort uVar47;
  ulonglong uVar48;
  ulonglong *puVar49;
  byte *pbVar50;
  undefined8 *puVar51;
  undefined8 uVar52;
  uint uVar53;
  ulonglong uVar54;
  longlong lVar55;
  undefined1 auVar56 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar57 [16];
  ulonglong uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  longlong *plStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar55 = *param_2;
  plVar3 = (longlong *)*param_1;
  pdb_141542990(lVar55,*plVar3 + 0x10);
  pdb_141540430(lVar55,*plVar3 + 0x10);
  pdb_14153e560(lVar55,*plVar3 + 0x10);
  pdb_14153dc70(lVar55,*plVar3 + 0x10);
  pdb_14153ffd0(lVar55,*plVar3 + 0x10);
  pdb_141542300(lVar55,*plVar3 + 0x10);
  pdb_14153bb70(lVar55,*plVar3 + 0x10);
  pdb_14153e790(lVar55,*plVar3 + 0x10);
  pdb_14153cf20(lVar55,*plVar3 + 0x10);
  pdb_14153f2b0(lVar55,*plVar3 + 0x10);
  pdb_141541150(lVar55,*plVar3 + 0x10);
  pdb_14153e0d0(lVar55,*plVar3 + 0x10);
  pdb_14153dea0(lVar55,*plVar3 + 0x10);
  pdb_14153d380(lVar55,*plVar3 + 0x10);
  pdb_14153f4e0(lVar55,*plVar3 + 0x10);
  pdb_1415413b0(lVar55,*plVar3 + 0x10);
  pdb_14153ee20(lVar55,*plVar3 + 0x10);
  pdb_14153d5b0(lVar55,*plVar3 + 0x10);
  pdb_14153c430(lVar55,*plVar3 + 0x10);
  pdb_14153ac20(lVar55,*plVar3 + 0x10);
  pdb_14153bfd0(lVar55,*plVar3 + 0x10);
  pdb_14153fda0(lVar55,*plVar3 + 0x10);
  pdb_14153f710(lVar55,*plVar3 + 0x10);
  pdb_141542530(lVar55,*plVar3 + 0x10);
  pdb_141543050(lVar55,*plVar3 + 0x10);
  pdb_141541c70(lVar55,*plVar3 + 0x10);
  pdb_14153b940(lVar55,*plVar3 + 0x10);
  pdb_141540f20(lVar55,*plVar3 + 0x10);
  pdb_141542760(lVar55,*plVar3 + 0x10);
  pdb_141540890(lVar55,*plVar3 + 0x10);
  pdb_14153b4e0(lVar55,*plVar3 + 0x10);
  pdb_14153c200(lVar55,*plVar3 + 0x10);
  pdb_14153d150(lVar55,*plVar3 + 0x10);
  pdb_1415436e0(lVar55,*plVar3 + 0x10);
  pdb_14153ebf0(lVar55,*plVar3 + 0x10);
  pdb_14153bda0(lVar55,*plVar3 + 0x10);
  pdb_14153b710(lVar55,*plVar3 + 0x10);
  pdb_141540660(lVar55,*plVar3 + 0x10);
  pdb_1415415e0(lVar55,*plVar3 + 0x10);
  pdb_14153b080(lVar55,*plVar3 + 0x10);
  pdb_14153b2b0(lVar55,*plVar3 + 0x10);
  pdb_141543910(lVar55,*plVar3 + 0x10);
  pdb_14153cac0(lVar55,*plVar3 + 0x10);
  pdb_14153d810(lVar55,*plVar3 + 0x10);
  pdb_141541810(lVar55,*plVar3 + 0x10);
  uStack_c8 = 0xffffffffffffffff;
  uStack_c0 = 0xffffffffffffffff;
  plStack_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  uStack_ac = (undefined4)_DAT_142e37950;
  uStack_a8 = (undefined4)((ulonglong)_DAT_142e37950 >> 0x20);
  uVar48 = pdb_141b13030(*plVar3 + 0x10,&uStack_c8,0x24);
  uStack_98 = uVar48;
  pdb_14007ee60();
  puVar49 = (ulonglong *)pub_1406abab0(8,8);
  if (puVar49 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *puVar49 = uVar48;
  pdb_141523cd0(lVar55,puVar49,&UNK_14331b490);
  pdb_141540cf0(lVar55,*plVar3 + 0x10);
  pdb_14153a7c0(lVar55,*plVar3 + 0x10);
  pdb_14153c890(lVar55,*plVar3 + 0x10);
  pdb_14153e300(lVar55,*plVar3 + 0x10);
  pdb_14153fb70(lVar55,*plVar3 + 0x10);
  pdb_141543b40(lVar55,*plVar3 + 0x10);
  lVar4 = *plVar3;
  pdb_14007ee60();
  pbVar50 = pub_1406abae0(0x56000,4);
  if (pbVar50 != (byte *)0x0) {
    pbStack_90 = pbVar50;
    pdb_14152f2d0(lVar55,lVar4 + 0x10,pbVar50,0x15800);
    pub_1406abac0(pbStack_90,0x56000,4);
    lVar4 = *plVar3;
    pdb_14007ee60();
    pbVar50 = pub_1406abae0(0x56000,4);
    if (pbVar50 != (byte *)0x0) {
      pbStack_90 = pbVar50;
      pdb_14152f090(lVar55,lVar4 + 0x10,pbVar50);
      pub_1406abac0(pbStack_90,0x56000,4);
      pdb_14153f080(lVar55,*plVar3 + 0x10);
      pdb_14153f940(lVar55,*plVar3 + 0x10);
      pdb_141541ea0(lVar55,*plVar3 + 0x10);
      pdb_141542e20(lVar55,*plVar3 + 0x10);
      pdb_141540200(lVar55,*plVar3 + 0x10);
      pdb_14153e9c0(lVar55,*plVar3 + 0x10);
      pdb_14153c660(lVar55,*plVar3 + 0x10);
      pdb_1415420d0(lVar55,*plVar3 + 0x10);
      pdb_141541a40(lVar55,*plVar3 + 0x10);
      pdb_14153ccf0(lVar55,*plVar3 + 0x10);
      pdb_141543280(lVar55,*plVar3 + 0x10);
      pdb_141540ac0(lVar55,*plVar3 + 0x10);
      pdb_141542bf0(lVar55,*plVar3 + 0x10);
      pdb_1415434b0(lVar55,*plVar3 + 0x10);
      pdb_14153da40(lVar55,*plVar3 + 0x10);
      pdb_14153ae50(lVar55,*plVar3 + 0x10);
      pdb_141543d70(lVar55,*plVar3 + 0x10);
      pdb_1409620e0(*plVar3 + 0x10,lVar55,*(longlong *)(*param_3 + 0x30) + 0x10);
      pdb_14153a9f0(lVar55,*plVar3 + 0x10);
      puVar51 = (undefined8 *)pdb_140bf45b0(lVar55,&UNK_14331a528);
      if (puVar51 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14305cae0);
      }
      puVar49 = (ulonglong *)(**(code **)(puVar51[1] + 0x28))(*puVar51);
      uVar48 = *puVar49;
      LOCK();
      piVar2 = (int *)((uVar48 & 0xffffffffffffffc0) + 0x10 + (ulonglong)((uint)uVar48 & 0x3f) * 4);
      *piVar2 = *piVar2 + 1;
      cVar45 = UNK_143022d0f;
      cVar44 = UNK_143022d0e;
      cVar43 = UNK_143022d0d;
      cVar42 = UNK_143022d0c;
      cVar41 = UNK_143022d0b;
      cVar40 = UNK_143022d0a;
      cVar39 = UNK_143022d09;
      cVar38 = UNK_143022d08;
      cVar37 = UNK_143022d07;
      cVar36 = UNK_143022d06;
      cVar35 = UNK_143022d05;
      cVar34 = UNK_143022d04;
      cVar33 = UNK_143022d03;
      cVar32 = UNK_143022d02;
      cVar31 = UNK_143022d01;
      cVar30 = DAT_143022d00;
      UNLOCK();
      uStack_98 = uVar48;
      if (*(char *)(lVar55 + 8) != '\0') {
        uStack_c8 = lVar55 + 0x10;
        uStack_81 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143066330,0x2b,&uStack_c8,&UNK_143066310,&UNK_143066458);
      }
      lVar4 = lStack_d8;
      pbStack_90 = param_4;
      if (*(longlong *)(lVar55 + 0x28) != 0) {
        lVar5 = *(longlong *)(lVar55 + 0x10);
        uVar6 = *(ulonglong *)(lVar55 + 0x18);
        uVar54 = 0xd0f0827e7ff22799;
        lVar55 = 0;
        iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                  CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                        CONCAT13(unaff_XMM7_Bd,
                                 CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
        iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                  CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                        CONCAT13(unaff_XMM7_Bh,
                                 CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
        iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                        CONCAT13(unaff_XMM7_Bl,
                                 CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
        iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                        CONCAT13(unaff_XMM7_Bp,
                                 CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
        while( true ) {
          uVar54 = uVar54 & uVar6;
          pcVar1 = (char *)(lVar5 + uVar54);
          cVar14 = *pcVar1;
          cVar15 = pcVar1[1];
          cVar16 = pcVar1[2];
          cVar17 = pcVar1[3];
          cVar18 = pcVar1[4];
          cVar19 = pcVar1[5];
          cVar20 = pcVar1[6];
          cVar21 = pcVar1[7];
          cVar22 = pcVar1[8];
          cVar23 = pcVar1[9];
          cVar24 = pcVar1[10];
          cVar25 = pcVar1[0xb];
          cVar26 = pcVar1[0xc];
          cVar27 = pcVar1[0xd];
          cVar28 = pcVar1[0xe];
          cVar29 = pcVar1[0xf];
          auVar56[0] = -(cVar14 == cVar30);
          auVar56[1] = -(cVar15 == cVar31);
          auVar56[2] = -(cVar16 == cVar32);
          auVar56[3] = -(cVar17 == cVar33);
          auVar56[4] = -(cVar18 == cVar34);
          auVar56[5] = -(cVar19 == cVar35);
          auVar56[6] = -(cVar20 == cVar36);
          auVar56[7] = -(cVar21 == cVar37);
          auVar56[8] = -(cVar22 == cVar38);
          auVar56[9] = -(cVar23 == cVar39);
          auVar56[10] = -(cVar24 == cVar40);
          auVar56[0xb] = -(cVar25 == cVar41);
          auVar56[0xc] = -(cVar26 == cVar42);
          auVar56[0xd] = -(cVar27 == cVar43);
          auVar56[0xe] = -(cVar28 == cVar44);
          auVar56[0xf] = -(cVar29 == cVar45);
          uVar47 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar56[0xf] >> 7) << 0xf;
          uVar53 = (uint)uVar47;
          lVar4 = lStack_d8;
          while (lStack_d8 = lVar55, uVar47 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar53; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            lVar55 = lVar5 + (uVar8 + uVar54 & uVar6) * -0x10;
            uStack_81 = 1;
            uStack_d0 = uVar48;
            cVar46 = pdb_140df4430(&UNK_14331a528,lVar55 + -0x10);
            if (cVar46 != '\0') {
              puVar51 = *(undefined8 **)(lVar55 + -8);
              uStack_81 = 1;
              uVar52 = (**(code **)(puVar51[1] + 0x30))(*puVar51);
              uStack_81 = 1;
              lVar55 = pdb_140e17350(uVar52);
              if ((*(char *)(lVar55 + 0x17) == '\x01') ||
                 (uVar48 = *(ulonglong *)(lVar55 + 0x48), uVar48 == 0)) goto LAB_140b7fc01;
              if ((uVar48 & 3) == 0) {
                uVar53 = *(uint *)(lVar55 + 0x10);
                if ((uVar53 & 0xf) == 0) {
                  uStack_e0 = (ulonglong)(uVar53 >> 4);
                  if (uVar53 == 0x10) {
                    plVar3 = (longlong *)*plVar3;
                    LOCK();
                    lVar55 = *plVar3;
                    *plVar3 = *plVar3 + 1;
                    UNLOCK();
                    if (*plVar3 != 0 && SCARRY8(lVar55,1) == *plVar3 < 0) {
                      **(undefined4 **)(pbStack_90 + 0x10) = *(undefined4 *)(pbStack_90 + 0x1c);
                      lVar55 = *(longlong *)pbStack_90;
                      uStack_b0 = (undefined4)*(undefined8 *)(lVar55 + 0x40);
                      uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(lVar55 + 0x40) >> 0x20);
                      uStack_c0 = uStack_d0;
                      lVar4 = *(longlong *)(lVar55 + 0x30);
                      uStack_c8 = uVar48;
                      plStack_b8 = plVar3;
                      if (lVar4 == *(longlong *)(lVar55 + 0x20)) {
                        pdb_142d7e6e0(lVar55 + 0x20);
                      }
                      lVar5 = *(longlong *)(lVar55 + 0x28);
                      puVar51 = (undefined8 *)(lVar5 + 0x10 + lVar4 * 0x20);
                      *puVar51 = plStack_b8;
                      puVar51[1] = CONCAT44(uStack_ac,uStack_b0);
                      puVar49 = (ulonglong *)(lVar5 + lVar4 * 0x20);
                      *puVar49 = uStack_c8;
                      puVar49[1] = uStack_c0;
                      *(longlong *)(lVar55 + 0x30) = lVar4 + 1;
                      *(longlong *)(lVar55 + 0x40) = *(longlong *)(lVar55 + 0x40) + 1;
                      return;
                    }
                  }
                  else {
                    uStack_81 = 1;
                    pdb_142dc7fb4(0,&uStack_e0,&UNK_14305cb40,0);
                  }
                  goto LAB_140b7fc4a;
                }
                uVar52 = 1;
              }
              else {
                uVar52 = 0;
              }
              uStack_81 = 1;
              pdb_142ded1a0(&UNK_14305cd20,0xe,uVar52);
              goto LAB_140b7fc4a;
            }
            uVar47 = (ushort)(uVar53 - 1) & (ushort)uVar53;
            uVar53 = CONCAT22((short)(uVar53 - 1 >> 0x10),uVar47);
            uVar48 = uStack_d0;
            lVar55 = lStack_d8;
            lVar4 = lStack_d8;
          }
          auVar57[0] = -(cVar14 == (char)iVar10);
          auVar57[1] = -(cVar15 == (char)((uint)iVar10 >> 8));
          auVar57[2] = -(cVar16 == (char)((uint)iVar10 >> 0x10));
          auVar57[3] = -(cVar17 == (char)((uint)iVar10 >> 0x18));
          auVar57[4] = -(cVar18 == (char)iVar11);
          auVar57[5] = -(cVar19 == (char)((uint)iVar11 >> 8));
          auVar57[6] = -(cVar20 == (char)((uint)iVar11 >> 0x10));
          auVar57[7] = -(cVar21 == (char)((uint)iVar11 >> 0x18));
          auVar57[8] = -(cVar22 == (char)iVar12);
          auVar57[9] = -(cVar23 == (char)((uint)iVar12 >> 8));
          auVar57[10] = -(cVar24 == (char)((uint)iVar12 >> 0x10));
          auVar57[0xb] = -(cVar25 == (char)((uint)iVar12 >> 0x18));
          auVar57[0xc] = -(cVar26 == (char)iVar13);
          auVar57[0xd] = -(cVar27 == (char)((uint)iVar13 >> 8));
          auVar57[0xe] = -(cVar28 == (char)((uint)iVar13 >> 0x10));
          auVar57[0xf] = -(cVar29 == (char)((uint)iVar13 >> 0x18));
          if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar57 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x2f,0) & 1) != 0) || (SUB161(auVar57 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
          uVar54 = uVar54 + lStack_d8 + 0x10;
          lVar55 = lStack_d8 + 0x10;
          lStack_d8 = lVar4;
        }
      }
      lStack_d8 = lVar4;
      uStack_81 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305caf8);
    }
  }
  pdb_142dc7e2a(4,0x56000);
LAB_140b7fc01:
  uStack_81 = 1;
  pdb_142dc8110(&UNK_14305cb10,0x17,&UNK_14305cb28);
LAB_140b7fc4a:
                    /* WARNING: Does not return */
  pcVar7 = (code *)invalidInstructionException();
  (*pcVar7)();
}

