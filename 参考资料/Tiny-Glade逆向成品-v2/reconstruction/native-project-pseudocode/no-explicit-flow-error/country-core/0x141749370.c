// VA 0x141749370, PDB extent 2048 bytes
// rhapsody::rg::temporal::impl$10::get_or_create_temporal<alloc::string::String>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   rhapsody::rg::temporal::impl$10::get_or_create_temporal<alloc::string::String>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2048 */

void pdb_141749370(undefined4 *param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 uStack_160;
  int iStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  longlong *plStack_110;
  code *pcStack_108;
  longlong lStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  int *piStack_d8;
  longlong *plStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  longlong **pplStack_78;
  longlong *plStack_70;
  longlong lStack_68;
  undefined1 uStack_59;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_68 = pdb_140e94310(param_3);
  plVar5 = *(longlong **)(param_2 + 0x1f8);
  LOCK();
  lVar15 = *plVar5;
  *plVar5 = *plVar5 + 1;
  UNLOCK();
  if (*plVar5 == 0 || SCARRY8(lVar15,1) != *plVar5 < 0) {
LAB_1417499f6:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  plVar1 = plVar5 + 2;
  LOCK();
  bVar16 = (char)plVar5[2] == '\0';
  if (bVar16) {
    *(char *)(plVar5 + 2) = '\x01';
  }
  UNLOCK();
  plStack_70 = plVar5;
  if (!bVar16) {
    pdb_142dbd1a0(plVar1);
  }
  pdb_140e9a150(plVar1);
  plStack_58 = plVar1;
  if (plVar5[6] == 0) {
LAB_141749509:
    pdb_140e9a350();
    LOCK();
    bVar16 = (char)*plVar1 == '\x01';
    if (bVar16) {
      *(char *)plVar1 = '\0';
    }
    UNLOCK();
    if (!bVar16) {
      pdb_142dbcef0(plVar1,0);
    }
LAB_141749528:
    plStack_110 = (longlong *)0x0;
    iStack_158 = *(int *)(param_4 + 0x10);
    uStack_168 = *(undefined8 *)param_4;
    uStack_160 = *(undefined8 *)(param_4 + 8);
    pdb_1415d4a60(&plStack_d0,*(undefined8 *)(param_2 + 0x1e8),lStack_68,
                  *(undefined8 *)(lStack_68 + -8),&uStack_168,1,&plStack_110);
    lVar15 = pdb_141707a30(&plStack_d0);
    if (lVar15 == 1) {
      *(code **)(param_1 + 2) = param_4;
      *param_1 = 1;
    }
    else {
      uStack_49 = 1;
      pcStack_118 = param_4;
      pdb_140e1e6e0(&uStack_148,param_4,param_2,0,&UNK_143330058);
      lVar15 = *(longlong *)(param_2 + 0x1f8);
      plVar5 = (longlong *)(lVar15 + 0x10);
      LOCK();
      bVar16 = *(char *)(lVar15 + 0x10) == '\0';
      if (bVar16) {
        *(char *)(lVar15 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar16) {
        uStack_49 = 1;
        pdb_142dbd1a0(plVar5);
      }
      uStack_49 = 1;
      pdb_140e9a150(plVar5);
      puStack_b0 = puStack_138;
      uStack_c0 = uStack_148;
      uStack_b8 = uStack_140;
      plStack_d0 = (longlong *)0x0;
      pcStack_c8 = param_4;
      plStack_58 = plVar5;
      pdb_141769390(&plStack_110,lVar15 + 0x18,lStack_68,&plStack_d0);
      if (plStack_110 != (longlong *)0x2) {
        if (plStack_110 == (longlong *)0x0) {
          pdb_14098a200(&pcStack_108);
        }
        else {
          pdb_140989660();
        }
      }
      plVar5 = plStack_58;
      uStack_49 = 0;
      pdb_140e9a350();
      LOCK();
      bVar16 = (char)*plVar5 == '\x01';
      if (bVar16) {
        *(char *)plVar5 = '\0';
      }
      UNLOCK();
      if (!bVar16) {
        uStack_49 = 0;
        pdb_142dbcef0(plVar5,0);
      }
      *(undefined **)(param_1 + 5) = puStack_138;
      *(undefined8 *)(param_1 + 1) = uStack_148;
      *(undefined8 *)(param_1 + 3) = uStack_140;
      *(undefined1 *)(param_1 + 7) = 0;
      *param_1 = 0;
    }
LAB_141749992:
    LOCK();
    *plStack_70 = *plStack_70 + -1;
    UNLOCK();
    if (*plStack_70 == 0) {
      pdb_140e40cc0(&plStack_70);
    }
    return;
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = *(ulonglong *)(lStack_68 + -0x10) ^ 0x9dc0fe5cef68def1;
  uVar12 = SUB168(auVar18 * ZEXT816(0xc0ac29b7c97c50dd),8) ^
           SUB168(auVar18 * ZEXT816(0xc0ac29b7c97c50dd),0);
  lVar15 = plVar5[3];
  bVar17 = (byte)(uVar12 >> 0x39);
  auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
  auVar18 = pshuflw(auVar18,auVar18,0);
  lVar11 = 0;
  do {
    uVar12 = uVar12 & plVar5[4];
    auVar3 = *(undefined1 (*) [16])(lVar15 + uVar12);
    auVar20[0] = -(auVar3[0] == auVar18[0]);
    auVar20[1] = -(auVar3[1] == auVar18[1]);
    auVar20[2] = -(auVar3[2] == auVar18[2]);
    auVar20[3] = -(auVar3[3] == auVar18[3]);
    auVar20[4] = -(auVar3[4] == auVar18[4]);
    auVar20[5] = -(auVar3[5] == auVar18[5]);
    auVar20[6] = -(auVar3[6] == auVar18[6]);
    auVar20[7] = -(auVar3[7] == auVar18[7]);
    auVar20[8] = -(auVar3[8] == auVar18[0]);
    auVar20[9] = -(auVar3[9] == auVar18[1]);
    auVar20[10] = -(auVar3[10] == auVar18[2]);
    auVar20[0xb] = -(auVar3[0xb] == auVar18[3]);
    auVar20[0xc] = -(auVar3[0xc] == auVar18[4]);
    auVar20[0xd] = -(auVar3[0xd] == auVar18[5]);
    auVar20[0xe] = -(auVar3[0xe] == auVar18[6]);
    auVar20[0xf] = -(auVar3[0xf] == auVar18[7]);
    uVar14 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar20[0xf] >> 7) << 0xf);
    while ((short)uVar14 != 0) {
      uVar7 = 0;
      for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = (uVar7 + uVar12 & plVar5[4]) * -0x30;
      if (lStack_68 == *(longlong *)(lVar15 + -0x30 + lVar13)) {
        lVar15 = lVar15 + lVar13;
        if (*(char *)(lVar15 + -4) == '\x03') {
          if (*(int *)(lVar15 + -0x28) == 1) {
            plStack_d0 = &lStack_68;
            pcStack_c8 = pdb_140e94010;
            pdb_140f60760(auStack_180,&UNK_143330128,&plStack_d0);
            uVar10 = pdb_142de92b0(auStack_180);
            goto LAB_1417495df;
          }
          uVar4 = *(undefined1 *)(lVar15 + -0x18);
          puVar2 = (undefined8 *)(lVar15 + -0x20);
          lVar11 = pdb_140e17390(puVar2);
          if ((ulonglong)*(uint6 *)(lVar11 + 0x84) != (ulonglong)*(uint6 *)(param_4 + 4)) {
            if (4 < *_DAT_143ca8e90) {
              lStack_100 = pdb_140e17390(puVar2);
              lStack_100 = lStack_100 + 0x84;
              plStack_110 = &lStack_68;
              pcStack_108 = pdb_140e94010;
              pcStack_f8 = pdb_1417cd430;
              pcStack_e8 = pdb_1417cd430;
              plStack_d0 = (longlong *)0x0;
              pcStack_c8 = (code *)&UNK_1433300f6;
              uStack_c0 = 0x16;
              uStack_b8 = 0;
              puStack_b0 = &UNK_14332ffb0;
              uStack_a8 = 0x53;
              uStack_a0 = 5;
              puStack_98 = &UNK_1433300f6;
              uStack_90 = 0x16;
              uStack_88 = 0xd200000001;
              puStack_80 = &UNK_1433300c9;
              pplStack_78 = &plStack_110;
              pcStack_f0 = param_4 + 4;
              pdb_140f332f0(&uStack_59,&plStack_d0);
            }
            plVar5 = plStack_58;
            pdb_140e9a350();
            LOCK();
            bVar16 = (char)*plVar5 == '\x01';
            if (bVar16) {
              *(char *)plVar5 = '\0';
            }
            UNLOCK();
            if (!bVar16) {
              pdb_142dbcef0(plVar5,0);
            }
            goto LAB_141749528;
          }
          lVar11 = pdb_140e17390(puVar2);
          piStack_d8 = (int *)(lVar11 + 0x80);
          pcStack_e0 = param_4;
          if (((((*(code *)(lVar11 + 0x8d) != param_4[0xd]) ||
                (*(code *)(lVar11 + 0x90) != param_4[0x10])) ||
               (*(code *)(lVar11 + 0x8c) != param_4[0xc])) ||
              ((*piStack_d8 != *(int *)param_4 || (*(code *)(lVar11 + 0x8e) != param_4[0xe])))) ||
             (((ulonglong)*(uint6 *)(lVar11 + 0x84) != (ulonglong)*(uint6 *)(param_4 + 4) ||
              ((*(short *)(lVar11 + 0x8a) != *(short *)(param_4 + 10) ||
               (*(code *)(lVar11 + 0x8f) != param_4[0xf])))))) {
            pdb_142db9e7f(0,&piStack_d8,&pcStack_e0,0);
            goto LAB_1417499f6;
          }
          pdb_140e1e6e0(&uStack_130,*puVar2,param_2,
                        CONCAT71((int7)((ulonglong)plVar5 >> 8),uVar4) & 0xffffffff,&UNK_143330058);
          *(undefined8 *)(lVar15 + -8) = uStack_120;
          *(undefined8 *)(lVar15 + -0x18) = uStack_130;
          *(undefined8 *)(lVar15 + -0x10) = uStack_128;
          *(undefined8 *)(param_1 + 5) = uStack_120;
          *(undefined8 *)(param_1 + 1) = uStack_130;
          *(undefined8 *)(param_1 + 3) = uStack_128;
          *(undefined1 *)(param_1 + 7) = 1;
          uVar9 = 0;
        }
        else {
          plStack_d0 = &lStack_68;
          pcStack_c8 = pdb_140e94010;
          pdb_140f60760(auStack_198,&UNK_1433300a5,&plStack_d0);
          uVar10 = pdb_142de92b0(auStack_198);
LAB_1417495df:
          *(undefined8 *)(param_1 + 2) = uVar10;
          uVar9 = 1;
        }
        plVar5 = plStack_58;
        *param_1 = uVar9;
        pdb_140e9a350();
        LOCK();
        bVar16 = (char)*plVar5 == '\x01';
        if (bVar16) {
          *(char *)plVar5 = '\0';
        }
        UNLOCK();
        if (!bVar16) {
          pdb_142dbcef0(plVar5,0);
        }
        goto LAB_141749992;
      }
    }
    auVar19[0] = -(auVar3[0] == -1);
    auVar19[1] = -(auVar3[1] == -1);
    auVar19[2] = -(auVar3[2] == -1);
    auVar19[3] = -(auVar3[3] == -1);
    auVar19[4] = -(auVar3[4] == -1);
    auVar19[5] = -(auVar3[5] == -1);
    auVar19[6] = -(auVar3[6] == -1);
    auVar19[7] = -(auVar3[7] == -1);
    auVar19[8] = -(auVar3[8] == -1);
    auVar19[9] = -(auVar3[9] == -1);
    auVar19[10] = -(auVar3[10] == -1);
    auVar19[0xb] = -(auVar3[0xb] == -1);
    auVar19[0xc] = -(auVar3[0xc] == -1);
    auVar19[0xd] = -(auVar3[0xd] == -1);
    auVar19[0xe] = -(auVar3[0xe] == -1);
    auVar19[0xf] = -(auVar3[0xf] == -1);
    if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') goto LAB_141749509;
    uVar12 = uVar12 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  } while( true );
}

