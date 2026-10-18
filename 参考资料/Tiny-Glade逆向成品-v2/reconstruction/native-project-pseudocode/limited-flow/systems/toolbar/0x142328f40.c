// VA 0x142328f40, PDB extent 1904 bytes
// toolbar::menu::mods_workshop_tab::subscription_status
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_workshop_tab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::mods_workshop_tab::subscription_status
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/mods_workshop_tab.rs
   Extent: 1904 */

ulonglong *
pdb_142328f40(ulonglong *param_1,longlong param_2,longlong param_3,longlong *param_4,
             longlong param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  longlong lVar13;
  undefined1 uVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_d0;
  double *pdStack_c8;
  code *pcStack_c0;
  double dStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  double dStack_68;
  double *pdStack_60;
  code *pcStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  lStack_d0 = param_2;
  if ((param_3 == 0) || (pdb_140bd8520(&uStack_98,param_3,param_2), uStack_98 == 0x8000000000000005)
     ) {
    if (param_4[3] != 0) {
      uVar3 = pdb_1400af0a0(param_4 + 4,&lStack_d0);
      lVar4 = *param_4;
      bVar15 = (byte)(uVar3 >> 0x39);
      auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
      auVar16 = pshuflw(auVar16,auVar16,0);
      lVar10 = 0;
      while( true ) {
        uVar3 = uVar3 & param_4[1];
        auVar17 = *(undefined1 (*) [16])(lVar4 + uVar3);
        auVar19[0] = -(auVar17[0] == auVar16[0]);
        auVar19[1] = -(auVar17[1] == auVar16[1]);
        auVar19[2] = -(auVar17[2] == auVar16[2]);
        auVar19[3] = -(auVar17[3] == auVar16[3]);
        auVar19[4] = -(auVar17[4] == auVar16[4]);
        auVar19[5] = -(auVar17[5] == auVar16[5]);
        auVar19[6] = -(auVar17[6] == auVar16[6]);
        auVar19[7] = -(auVar17[7] == auVar16[7]);
        auVar19[8] = -(auVar17[8] == auVar16[0]);
        auVar19[9] = -(auVar17[9] == auVar16[1]);
        auVar19[10] = -(auVar17[10] == auVar16[2]);
        auVar19[0xb] = -(auVar17[0xb] == auVar16[3]);
        auVar19[0xc] = -(auVar17[0xc] == auVar16[4]);
        auVar19[0xd] = -(auVar17[0xd] == auVar16[5]);
        auVar19[0xe] = -(auVar17[0xe] == auVar16[6]);
        auVar19[0xf] = -(auVar17[0xf] == auVar16[7]);
        uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
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
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf
        ;
        uVar11 = (uint)uVar12;
        while (uVar12 != 0) {
          uVar1 = 0;
          for (uVar2 = uVar11; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            uVar1 = uVar1 + 1;
          }
          lVar13 = (uVar1 + uVar3 & param_4[1]) * -0x30;
          if (param_2 == *(longlong *)(lVar4 + -0x30 + lVar13)) {
            pdb_142328de0(param_1,lVar4 + lVar13 + -0x28);
            goto LAB_1423294fb;
          }
          uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
        }
        auVar18[0] = -(auVar17[0] == -1);
        auVar18[1] = -(auVar17[1] == -1);
        auVar18[2] = -(auVar17[2] == -1);
        auVar18[3] = -(auVar17[3] == -1);
        auVar18[4] = -(auVar17[4] == -1);
        auVar18[5] = -(auVar17[5] == -1);
        auVar18[6] = -(auVar17[6] == -1);
        auVar18[7] = -(auVar17[7] == -1);
        auVar18[8] = -(auVar17[8] == -1);
        auVar18[9] = -(auVar17[9] == -1);
        auVar18[10] = -(auVar17[10] == -1);
        auVar18[0xb] = -(auVar17[0xb] == -1);
        auVar18[0xc] = -(auVar17[0xc] == -1);
        auVar18[0xd] = -(auVar17[0xd] == -1);
        auVar18[0xe] = -(auVar17[0xe] == -1);
        auVar18[0xf] = -(auVar17[0xf] == -1);
        if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar18 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar18 >> 0x1f,0) & 1) != 0) || (SUB161(auVar18 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') break;
        uVar3 = uVar3 + lVar10 + 0x10;
        lVar10 = lVar10 + 0x10;
      }
    }
    if ((param_5 == 0) ||
       (pdb_140bd7fb0(&pdStack_60,param_5,param_2), uVar3 = uStack_50, pdStack_60 == (double *)0x2))
    {
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    if ((int)pdStack_60 == 1) {
      if (uStack_50 == 0) {
        uVar3 = 0x15;
        uVar6 = pdb_140dc6290(&UNK_1434da492);
        goto joined_r0x000142329300;
      }
      uVar8 = 0x1a;
      uVar6 = pdb_140dc6290(&UNK_1434da4a7,0x1a);
      auVar16._8_4_ = (int)((ulonglong)pcStack_58 >> 0x20);
      auVar16._0_8_ = pcStack_58;
      auVar16._12_4_ = _UNK_142e42374;
      if (pcStack_58 < 0x100000) {
        puVar9 = &UNK_1434da430;
        dStack_b8 = _DAT_142e6ade0;
      }
      else {
        puVar9 = &UNK_1434da43c;
        dStack_b8 = _DAT_142e6ade8;
      }
      pdStack_60 = &dStack_b8;
      dStack_b8 = ((auVar16._8_8_ - _UNK_142e42388) +
                  ((double)CONCAT44(_DAT_142e42370,(int)pcStack_58) - _DAT_142e42380)) * dStack_b8;
      pcStack_58 = pdb_140f71790;
      pdb_140f60760(&uStack_98,puVar9,&pdStack_60);
      pbStack_48 = pbStack_90;
      pdb_142328660(&dStack_b8,uVar6,uVar8,&UNK_1434da4c1,6,pbStack_90,uStack_88);
      pbStack_40 = pbStack_b0;
      auVar17._8_4_ = (int)(uVar3 >> 0x20);
      auVar17._0_8_ = uVar3;
      auVar17._12_4_ = _UNK_142e42374;
      dStack_68 = (auVar17._8_8_ - _UNK_142e42388) +
                  ((double)CONCAT44(_DAT_142e42370,(int)uVar3) - _DAT_142e42380);
      if (uVar3 < 0x100000) {
        dStack_68 = dStack_68 * _DAT_142e6ade0;
        pdStack_c8 = &dStack_68;
        pcStack_c0 = pdb_140f71790;
        pdb_140f60760(&pdStack_60,&UNK_1434da430,&pdStack_c8);
      }
      else {
        dStack_68 = dStack_68 * _DAT_142e6ade8;
        pdStack_c8 = &dStack_68;
        pcStack_c0 = pdb_140f71790;
        pdb_140f60760(&pdStack_60,&UNK_1434da43c,&pdStack_c8);
      }
      pcStack_a0 = pcStack_58;
      pdb_142328660(&uStack_80,pbStack_40,uStack_a8,&UNK_1434da4c7,7,pcStack_58,uStack_50);
      if (pdStack_60 != (double *)0x0) {
        pub_1406abac0((byte *)pcStack_a0,(ulonglong)pdStack_60,1);
      }
      if (dStack_b8 != 0.0) {
        pub_1406abac0(pbStack_40,(ulonglong)dStack_b8,1);
      }
      if (uStack_98 != 0) {
        pub_1406abac0(pbStack_48,uStack_98,1);
      }
    }
    else {
      uVar3 = 0x19;
      uVar6 = pdb_140dc6290(&UNK_1434da479);
joined_r0x000142329300:
      if ((longlong)uVar3 < 0) goto LAB_142329231;
      uStack_80 = uVar3;
      uStack_70 = uVar3;
      if (uVar3 == 0) {
        pbStack_78 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar8 = 1;
        pbStack_78 = pub_1406abab0(uVar3,1);
        if (pbStack_78 == (byte *)0x0) goto LAB_142329234;
        pub_142e32760(pbStack_78,uVar6,uVar3);
      }
    }
    param_1[2] = uStack_70;
    *param_1 = uStack_80;
    param_1[1] = (ulonglong)pbStack_78;
  }
  else {
    lVar4 = 2;
    if (0x8000000000000002 < uStack_98) {
      lVar4 = uStack_98 + 0x7ffffffffffffffd;
    }
    if (lVar4 == 0) {
      uVar3 = 0x14;
      uVar6 = pdb_140dc6290(&UNK_1434da4ce);
      if ((longlong)uVar3 < 0) goto LAB_142329231;
      if (uVar3 != 0) goto LAB_1423290cb;
LAB_1423291c3:
      pbVar5 = (byte *)0x1;
    }
    else {
      if (lVar4 != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001423291fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar7 = (ulonglong *)
                 (*(code *)(&UNK_1434da5d0 +
                           *(int *)(&UNK_1434da5d0 +
                                   ((longlong)uStack_98 >> 0x3f & uStack_98 + 0x8000000000000001) *
                                   4)))
                           (&UNK_1434da5d0 +
                            *(int *)(&UNK_1434da5d0 +
                                    ((longlong)uStack_98 >> 0x3f & uStack_98 + 0x8000000000000001) *
                                    4));
        return puVar7;
      }
      uVar3 = 0x1c;
      uVar6 = pdb_140dc6290(&UNK_1434da4e2);
      if ((longlong)uVar3 < 0) {
LAB_142329231:
        uVar8 = 0;
LAB_142329234:
        pdb_142dc7e2a(uVar8,uVar3);
        uVar3 = 0x18;
        uVar6 = pdb_140dc6290(&UNK_1434da514);
        uVar14 = uVar3 == 0;
        if ((longlong)uVar3 < 0) {
          pdb_142dc7e2a(0,uVar3);
          uVar3 = 0x16;
          uVar6 = pdb_140dc6290(&UNK_1434da4fe);
          uVar14 = uVar3 == 0;
          if ((longlong)uVar3 < 0) {
            uVar8 = 0;
            uVar14 = true;
            goto LAB_14232929d;
          }
        }
        do {
          if ((bool)uVar14) {
            pbStack_40 = (byte *)0x1;
            pbStack_48 = (byte *)0x0;
LAB_142329528:
            pbVar5 = pbStack_48;
            uVar8 = 0x17;
            uVar6 = pdb_140dc6290(&UNK_1434da53f,0x17);
            pdb_142328660(&pdStack_60,uVar6,uVar8,&UNK_1434da556,8,pbStack_40,pbVar5);
            param_1[2] = uStack_50;
            *param_1 = (ulonglong)pdStack_60;
            param_1[1] = (ulonglong)pcStack_58;
            *(undefined4 *)(param_1 + 3) = 0xff6b6bff;
            if (pbStack_48 == (byte *)0x0) {
              return param_1;
            }
            pub_1406abac0(pbStack_40,(ulonglong)pbStack_48,1);
            return param_1;
          }
          pdb_14007ee60();
          uVar8 = 1;
          pbStack_40 = pub_1406abab0(uVar3,1);
          uVar14 = pbStack_40 == (byte *)0x0;
          if (!(bool)uVar14) {
            pub_142e32760(pbStack_40,uVar6,uVar3);
            pbStack_48 = (byte *)uVar3;
            goto LAB_142329528;
          }
LAB_14232929d:
          uVar6 = pdb_142dc7e2a(uVar8,uVar3);
        } while( true );
      }
      if (uVar3 == 0) goto LAB_1423291c3;
LAB_1423290cb:
      pdb_14007ee60();
      uVar8 = 1;
      pbVar5 = pub_1406abab0(uVar3,1);
      if (pbVar5 == (byte *)0x0) goto LAB_142329234;
      pub_142e32760(pbVar5,uVar6,uVar3);
    }
    *param_1 = uVar3;
    param_1[1] = (ulonglong)pbVar5;
    param_1[2] = uVar3;
  }
LAB_1423294fb:
  *(undefined4 *)(param_1 + 3) = 0xffffffa0;
  return param_1;
}

