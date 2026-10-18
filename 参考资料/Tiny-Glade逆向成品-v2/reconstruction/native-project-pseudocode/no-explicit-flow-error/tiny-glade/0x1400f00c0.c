// VA 0x1400f00c0, PDB extent 1994 bytes
// tiny_glade::fs_util::copy_folder<ref$<std::path::PathBuf>,std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/fs_util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::fs_util::copy_folder<ref$<std::path::PathBuf>,std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/fs_util.rs
   Extent: 1994 */

longlong * pdb_1400f00c0(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uStack_860;
  longlong *plStack_858;
  longlong *plStack_850;
  undefined1 auStack_848 [600];
  longlong *plStack_5f0;
  longlong *plStack_5e8;
  undefined1 auStack_5e0 [31];
  byte bStack_5c1;
  longlong *plStack_380;
  longlong *plStack_378;
  longlong *aplStack_370 [76];
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *pbStack_68;
  ulonglong *puStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  plStack_380 = (longlong *)CONCAT71(plStack_380._1_7_,1);
  pbStack_68 = (byte *)param_2[1];
  uVar2 = param_2[2];
  uStack_f0 = uVar6;
  uStack_e8 = uVar1;
  puStack_60 = param_2;
  lVar4 = pdb_140f46c40(&plStack_380,pbStack_68,uVar2);
  if (lVar4 == 0) {
    pdb_140f4f710(&plStack_380,uVar6,uVar1);
    if ((int)plStack_380 == 2) {
      plStack_858 = plStack_378;
      uStack_860 = 2;
    }
    else {
      pub_142e32760(&uStack_860,&plStack_380,0x270);
    }
    pdb_140164df0(&plStack_5f0,&uStack_860,&uStack_f0);
    plVar5 = plStack_5e8;
    plVar3 = plStack_5f0;
    if (plStack_5f0 != (longlong *)0x2) {
      pub_142e32760(aplStack_370,auStack_5e0,0x260);
      plStack_380 = plVar3;
      plStack_378 = plVar5;
      while( true ) {
        pdb_140f59fa0(&uStack_860,&plStack_380);
        plVar3 = plStack_850;
        plVar5 = plStack_858;
        if ((int)uStack_860 != 1) break;
        if (plStack_858 == (longlong *)0x0) {
          plVar5 = (longlong *)pdb_142d88fc0(plStack_850);
LAB_1400f04de:
          if (plStack_380 != (longlong *)0x0) {
            pdb_140f590a0(&plStack_378);
          }
          LOCK();
          *aplStack_370[0] = *aplStack_370[0] + -1;
          UNLOCK();
          if (*aplStack_370[0] == 0) {
            pdb_140cd0de0(aplStack_370);
          }
          goto LAB_1400f050f;
        }
        pub_142e32760(auStack_5e0,auStack_848,0x248);
        plStack_5f0 = plVar5;
        plStack_5e8 = plVar3;
        pdb_140f46b10(&uStack_110,&plStack_5f0);
        if ((((ulonglong)plStack_5e8 & 0x10) == 0) ||
           (((ulonglong)plStack_5e8 & 0x400) != 0 && (bStack_5c1 & 0x20) != 0)) {
          uStack_88 = uStack_100;
          uStack_84 = uStack_fc;
          uStack_80 = uStack_f8;
          uStack_7c = uStack_f4;
          uStack_98 = uStack_110;
          uStack_94 = uStack_10c;
          uStack_90 = uStack_108;
          uStack_8c = uStack_104;
          pdb_140f46c20(&uStack_b8,&plStack_5f0);
          pbStack_58 = pbStack_b0;
          pdb_140f3e9e0(&uStack_d8,pbStack_68,uVar2,pbStack_b0,uStack_a8);
          if (uStack_b8 != 0) {
            pub_1406abac0(pbStack_58,uStack_b8,1);
          }
          plVar5 = (longlong *)CONCAT44(uStack_84,uStack_88);
          uVar6 = pdb_140f4f180(CONCAT44(uStack_8c,uStack_90),plVar5,pbStack_d0,uStack_c8);
          uVar7 = pdb_140164f40(uVar6);
          if ((uVar7 & 1) != 0) {
            if (uStack_d8 != 0) {
              pub_1406abac0(pbStack_d0,uStack_d8,1);
            }
            if (CONCAT44(uStack_94,uStack_98) != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_8c,uStack_90),CONCAT44(uStack_94,uStack_98),1);
            }
            goto LAB_1400f04c4;
          }
          if (uStack_d8 != 0) {
            pub_1406abac0(pbStack_d0,uStack_d8,1);
          }
          if (CONCAT44(uStack_94,uStack_98) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_8c,uStack_90),CONCAT44(uStack_94,uStack_98),1);
          }
        }
        else {
          uStack_49 = 1;
          pdb_140f46c20(&uStack_b8,&plStack_5f0);
          pbStack_58 = pbStack_b0;
          pdb_140f3e9e0(&uStack_d8,pbStack_68,uVar2,pbStack_b0,uStack_a8);
          if (uStack_b8 != 0) {
            pub_1406abac0(pbStack_58,uStack_b8,1);
          }
          uStack_49 = 0;
          plVar5 = (longlong *)pdb_1400ef890(&uStack_110,&uStack_d8);
          if (plVar5 != (longlong *)0x0) {
LAB_1400f04c4:
            LOCK();
            *plStack_5f0 = *plStack_5f0 + -1;
            UNLOCK();
            if (*plStack_5f0 == 0) {
              pdb_140cd0de0(&plStack_5f0);
            }
            goto LAB_1400f04de;
          }
        }
        LOCK();
        *plStack_5f0 = *plStack_5f0 + -1;
        UNLOCK();
        if (*plStack_5f0 == 0) {
          pdb_140cd0de0(&plStack_5f0);
        }
      }
      if (plStack_380 != (longlong *)0x0) {
        pdb_140f590a0(&plStack_378);
      }
      LOCK();
      *aplStack_370[0] = *aplStack_370[0] + -1;
      UNLOCK();
      if (*aplStack_370[0] == 0) {
        pdb_140cd0de0(aplStack_370);
      }
      plVar5 = (longlong *)0x0;
    }
  }
  else {
    plVar5 = (longlong *)pdb_142d88fc0(lVar4);
  }
LAB_1400f050f:
  if (*puStack_60 != 0) {
    pub_1406abac0(pbStack_68,*puStack_60,1);
  }
  return plVar5;
}

