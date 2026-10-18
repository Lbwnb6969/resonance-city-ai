// VA 0x140a3bf60, PDB extent 2963 bytes
// country_core::systems::save::save_backup_list::SaveBackupList::new_from_session
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_backup_list.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140a3c663) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::save_backup_list::SaveBackupList::new_from_session
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_backup_list.rs
   Extent: 2963 */

longlong * pdb_140a3bf60(longlong *param_1)

{
  undefined8 *puVar1;
  code cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  code **ppcVar18;
  ulonglong uVar19;
  code *pcVar20;
  longlong *plStack_f58;
  undefined1 auStack_f50 [592];
  code *pcStack_d00;
  code *apcStack_cf8 [74];
  code **ppcStack_aa8;
  code *pcStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined *puStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined *puStack_a58;
  byte ***pppbStack_a50;
  undefined8 uStack_848;
  code **ppcStack_5e8;
  byte *pbStack_5e0;
  longlong *aplStack_5d8 [76];
  code **ppcStack_378;
  code *pcStack_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  byte ***pppbStack_b8;
  code **ppcStack_b0;
  code *pcStack_a8;
  ulonglong uStack_a0;
  code *pcStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  uint uStack_68;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_90 = 0;
  lStack_88 = 8;
  lStack_80 = 0;
  pdb_140a939a0(&uStack_d8);
  pbVar5 = pbStack_d0;
  cVar6 = pdb_140f3ea80(pbStack_d0,uStack_c8);
  if (cVar6 == '\0') {
    ppcStack_aa8 = (code **)CONCAT71(ppcStack_aa8._1_7_,1);
    pcVar10 = (code *)pdb_140f46c40(&ppcStack_aa8,pbVar5,uStack_c8);
    uVar8 = 0;
    if (pcVar10 != (code *)0x0) {
      pcStack_d00 = pcVar10;
      if (*_DAT_143ca8e90 != 0) {
        ppcStack_378 = &pcStack_d00;
        pcStack_370 = pdb_140f56800;
        ppcStack_aa8 = (code **)0x0;
        pcStack_aa0 = (code *)&UNK_14303baa4;
        uStack_a98 = (code *)0x2d;
        uStack_a90 = 0;
        uStack_a88 = &UNK_14303ba6b;
        uStack_a80 = 0x38;
        uStack_a78 = 1;
        puStack_a70 = &UNK_14303baa4;
        uStack_a68 = 0x2d;
        uStack_a60 = 0xb000000001;
        puStack_a58 = &UNK_14303ba45;
        pppbStack_a50 = (byte ***)&ppcStack_378;
        pdb_140f332f0(&uStack_63,&ppcStack_aa8);
      }
      pdb_1404b38e0(&pcStack_d00);
    }
  }
  else {
    pdb_140f4f710(&ppcStack_378,pbVar5,uStack_c8);
    ppcVar18 = ppcStack_378;
    if (ppcStack_378 == (code **)0x2) {
      pcStack_d00 = pcStack_370;
      uStack_62 = 1;
      pdb_140f3f5b0(&ppcStack_aa8);
      uStack_358 = (undefined4)uStack_a88;
      uStack_354 = uStack_a88._4_4_;
      uStack_350 = (undefined4)uStack_a80;
      uStack_34c = uStack_a80._4_4_;
      uStack_368 = (undefined4)uStack_a98;
      uStack_364 = uStack_a98._4_4_;
      uStack_360 = (undefined4)uStack_a90;
      uStack_35c = uStack_a90._4_4_;
      ppcStack_378 = ppcStack_aa8;
      pcVar10 = pcStack_aa0;
      ppcStack_aa8 = (code **)&UNK_14303bb3c;
      pcStack_aa0 = (code *)0x23;
      uStack_a98 = pcStack_370;
      uStack_62 = 0;
      pcStack_370 = pcVar10;
      pcStack_d00 = (code *)pdb_142dea990(&ppcStack_aa8,&ppcStack_378);
      if (*_DAT_143ca8e90 != 0) {
        ppcStack_378 = &pcStack_d00;
        pcStack_370 = pdb_140a3a1c0;
        ppcStack_aa8 = (code **)0x0;
        pcStack_aa0 = (code *)&UNK_14303baa4;
        uStack_a98 = (code *)0x2d;
        uStack_a90 = 0;
        uStack_a88 = &UNK_14303ba6b;
        uStack_a80 = 0x38;
        uStack_a78 = 1;
        puStack_a70 = &UNK_14303baa4;
        uStack_a68 = 0x2d;
        uStack_a60 = 0xad00000001;
        puStack_a58 = &UNK_14303bb14;
        pppbStack_a50 = (byte ***)&ppcStack_378;
        pdb_140f332f0(&uStack_63,&ppcStack_aa8);
      }
      pdb_140f36c40(&pcStack_d00);
      uVar8 = 0;
    }
    else {
      pub_142e32760(aplStack_5d8,&uStack_368,0x260);
      ppcStack_aa8 = (code **)0x0;
      uStack_848 = 0;
      uStack_68 = 0;
      ppcStack_5e8 = ppcVar18;
      while (ppcStack_5e8 != (code **)0x2) {
        pppbStack_b8 = (byte ***)&ppcStack_378;
LAB_140a3c31d:
        pdb_140f59fa0(&ppcStack_378,&ppcStack_5e8);
        if ((int)ppcStack_378 != 1) {
          if (ppcStack_5e8 == (code **)0x0) {
LAB_140a3c683:
            LOCK();
            *aplStack_5d8[0] = *aplStack_5d8[0] + -1;
            UNLOCK();
            if (*aplStack_5d8[0] == 0) {
              pdb_140cd0de0(aplStack_5d8);
            }
          }
          else if ((int)ppcStack_5e8 != 2) {
            pdb_140f590a0(&pbStack_5e0);
            goto LAB_140a3c683;
          }
          ppcStack_5e8 = (code **)0x2;
          break;
        }
        pub_142e32760(&pcStack_d00,&pcStack_370,600);
        pcVar10 = pcStack_d00;
        if (pcStack_d00 == (code *)0x0) {
          pdb_1404b38e0(apcStack_cf8);
          goto LAB_140a3c31d;
        }
        pub_142e32760(auStack_f50,&uStack_368,0x250);
        plStack_f58 = (longlong *)0x0;
        pub_142e32760(apcStack_cf8,&uStack_368,0x250);
        pcStack_d00 = pcVar10;
        pdb_1418c16a0(&lStack_108,&pppbStack_b8,&pcStack_d00);
        uVar4 = uStack_f0;
        uVar3 = uStack_f8;
        if (SBORROW8(0,lStack_108)) {
          if (plStack_f58 != (longlong *)0x0) {
            LOCK();
            *plStack_f58 = *plStack_f58 + -1;
            UNLOCK();
            if (*plStack_f58 == 0) {
              pdb_140cd0de0(&plStack_f58);
            }
          }
          goto LAB_140a3c31d;
        }
        lStack_70 = lStack_108;
        uStack_78 = uStack_100;
        if (plStack_f58 != (longlong *)0x0) {
          LOCK();
          *plStack_f58 = *plStack_f58 + -1;
          UNLOCK();
          if (*plStack_f58 == 0) {
            pdb_140cd0de0(&plStack_f58);
          }
        }
        uStack_61 = 1;
        uVar14 = uVar3;
        lVar11 = pdb_140f3ee10(uStack_78,uVar3);
        if (lVar11 != 0) {
          uStack_61 = 1;
          pdb_140f69110(&ppcStack_378,lVar11,uVar14);
          if ((int)ppcStack_378 == 1) {
            uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14303bad8);
          }
          pcStack_98 = pcStack_370;
          uVar12 = CONCAT44(uStack_364,uStack_368);
          pcStack_d00 = (code *)&UNK_14303bb00;
          apcStack_cf8[0] = pdb_1402ed400;
          uStack_61 = 1;
          pdb_140f60760(&ppcStack_378,&UNK_14303bb10,&pcStack_d00);
          uVar15 = CONCAT44(uStack_364,uStack_368);
          pcVar10 = pcStack_370;
          ppcVar18 = ppcStack_378;
          uVar8 = uStack_68;
          if (uVar15 <= uVar12) {
            ppcStack_b0 = ppcStack_378;
            pcStack_a8 = pcStack_370;
            uStack_a0 = uVar12 - uVar15;
            iVar7 = pub_142e32750(pcStack_370,pcStack_98);
            pcVar10 = pcStack_a8;
            ppcVar18 = ppcStack_b0;
            uVar8 = uStack_68;
            if ((iVar7 == 0) && (uStack_a0 != 0)) {
              pcVar20 = pcStack_98 + uVar15;
              if (uStack_a0 == 1) {
                cVar2 = *pcVar20;
                if ((cVar2 == (code)0x2b) || (cVar2 == (code)0x2d)) goto LAB_140a3c4f8;
              }
              else {
                cVar2 = *pcVar20;
              }
              uVar15 = (ulonglong)(cVar2 == (code)0x2b);
              uVar19 = uStack_a0 - uVar15;
              uVar12 = 0;
              if (uVar19 < 9) {
                if (uStack_a0 != uVar15) {
                  uVar17 = 0;
                  do {
                    if (9 < (byte)pcVar20[uVar17 + uVar15] - 0x30) goto LAB_140a3c4f8;
                    uVar12 = (ulonglong)(((byte)pcVar20[uVar17 + uVar15] - 0x30) + (int)uVar12 * 10)
                    ;
                    uVar17 = uVar17 + 1;
                  } while (uVar19 != uVar17);
                }
LAB_140a3c5e4:
                uVar8 = (int)uVar12 + 1;
                if (uVar8 <= uStack_68) {
                  uVar8 = uStack_68;
                }
              }
              else {
                uVar17 = 0;
                while( true ) {
                  if (uVar19 == uVar17) goto LAB_140a3c5e4;
                  uVar9 = (uint)(uVar12 * 10);
                  if ((int)(uVar12 * 10 >> 0x20) != 0) break;
                  uVar16 = (byte)pcVar20[uVar17 + uVar15] - 0x30;
                  uVar12 = (ulonglong)(uVar9 + uVar16);
                  if ((9 < uVar16) || (uVar17 = uVar17 + 1, CARRY4(uVar9,uVar16))) break;
                }
              }
            }
          }
LAB_140a3c4f8:
          uStack_68 = uVar8;
          if (ppcVar18 != (code **)0x0) {
            pub_1406abac0((byte *)pcVar10,(ulonglong)ppcVar18,1);
          }
        }
        lVar11 = lStack_80;
        if (lStack_80 == lStack_90) {
          pdb_142d8a600(&lStack_90);
        }
        lVar13 = lVar11 * 0x20;
        *(longlong *)(lStack_88 + lVar13) = lStack_70;
        *(undefined8 *)(lStack_88 + 8 + lVar13) = uStack_78;
        puVar1 = (undefined8 *)(lStack_88 + 0x10 + lVar13);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        lStack_80 = lVar11 + 1;
      }
      pdb_14099c400(&ppcStack_aa8);
      uVar8 = uStack_68;
    }
  }
  param_1[2] = lStack_80;
  *param_1 = lStack_90;
  param_1[1] = lStack_88;
  *(uint *)(param_1 + 3) = uVar8;
  if (uStack_d8 != 0) {
    pub_1406abac0(pbStack_d0,uStack_d8,1);
  }
  return param_1;
}

