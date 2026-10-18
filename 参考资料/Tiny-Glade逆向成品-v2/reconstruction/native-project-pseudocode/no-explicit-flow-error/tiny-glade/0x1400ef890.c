// VA 0x1400ef890, PDB extent 2090 bytes
// tiny_glade::fs_util::copy_folder<std::path::PathBuf,std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/fs_util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::fs_util::copy_folder<std::path::PathBuf,std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/fs_util.rs
   Extent: 2090 */

longlong * pdb_1400ef890(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uStack_870;
  longlong *plStack_868;
  longlong *plStack_860;
  undefined1 auStack_858 [600];
  longlong *plStack_600;
  longlong *plStack_5f8;
  undefined1 auStack_5f0 [31];
  byte bStack_5d1;
  longlong *plStack_390;
  longlong *plStack_388;
  longlong *aplStack_380 [76];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  byte *pbStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong *puStack_80;
  byte *pbStack_70;
  byte *pbStack_68;
  ulonglong *puStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_100 = (byte *)param_1[1];
  uVar6 = param_1[2];
  plStack_390 = (longlong *)CONCAT71(plStack_390._1_7_,1);
  pbStack_68 = (byte *)param_2[1];
  uVar1 = param_2[2];
  uStack_f8 = uVar6;
  puStack_80 = param_1;
  pbStack_70 = pbStack_100;
  puStack_60 = param_2;
  lVar3 = pdb_140f46c40(&plStack_390,pbStack_68,uVar1);
  if (lVar3 == 0) {
    pdb_140f4f710(&plStack_390,pbStack_70,uVar6);
    if ((int)plStack_390 == 2) {
      plStack_868 = plStack_388;
      uStack_870 = 2;
    }
    else {
      pub_142e32760(&uStack_870,&plStack_390,0x270);
    }
    pdb_140164df0(&plStack_600,&uStack_870,&pbStack_100);
    plVar4 = plStack_5f8;
    plVar2 = plStack_600;
    if (plStack_600 != (longlong *)0x2) {
      pub_142e32760(aplStack_380,auStack_5f0,0x260);
      plStack_390 = plVar2;
      plStack_388 = plVar4;
      while( true ) {
        pdb_140f59fa0(&uStack_870,&plStack_390);
        plVar2 = plStack_860;
        plVar4 = plStack_868;
        if ((int)uStack_870 != 1) break;
        if (plStack_868 == (longlong *)0x0) {
          plVar4 = (longlong *)pdb_142d88fc0(plStack_860);
LAB_1400efcd1:
          if (plStack_390 != (longlong *)0x0) {
            pdb_140f590a0(&plStack_388);
          }
          LOCK();
          *aplStack_380[0] = *aplStack_380[0] + -1;
          UNLOCK();
          if (*aplStack_380[0] == 0) {
            pdb_140cd0de0(aplStack_380);
          }
          goto LAB_1400efd02;
        }
        pub_142e32760(auStack_5f0,auStack_858,0x248);
        plStack_600 = plVar4;
        plStack_5f8 = plVar2;
        pdb_140f46b10(&uStack_120,&plStack_600);
        if ((((ulonglong)plStack_5f8 & 0x10) == 0) ||
           (((ulonglong)plStack_5f8 & 0x400) != 0 && (bStack_5d1 & 0x20) != 0)) {
          uStack_98 = uStack_110;
          uStack_94 = uStack_10c;
          uStack_90 = uStack_108;
          uStack_8c = uStack_104;
          uStack_a8 = uStack_120;
          uStack_a4 = uStack_11c;
          uStack_a0 = uStack_118;
          uStack_9c = uStack_114;
          pdb_140f46c20(&uStack_c8,&plStack_600);
          pbStack_58 = pbStack_c0;
          pdb_140f3e9e0(&uStack_e8,pbStack_68,uVar1,pbStack_c0,uStack_b8);
          if (uStack_c8 != 0) {
            pub_1406abac0(pbStack_58,uStack_c8,1);
          }
          plVar4 = (longlong *)CONCAT44(uStack_94,uStack_98);
          uVar5 = pdb_140f4f180(CONCAT44(uStack_9c,uStack_a0),plVar4,pbStack_e0,uStack_d8);
          uVar6 = pdb_140164f40(uVar5);
          if ((uVar6 & 1) != 0) {
            if (uStack_e8 != 0) {
              pub_1406abac0(pbStack_e0,uStack_e8,1);
            }
            if (CONCAT44(uStack_a4,uStack_a8) != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,uStack_a8),1);
            }
            goto LAB_1400efcb7;
          }
          if (uStack_e8 != 0) {
            pub_1406abac0(pbStack_e0,uStack_e8,1);
          }
          if (CONCAT44(uStack_a4,uStack_a8) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,uStack_a8),1);
          }
        }
        else {
          uStack_49 = 1;
          pdb_140f46c20(&uStack_c8,&plStack_600);
          pbStack_58 = pbStack_c0;
          pdb_140f3e9e0(&uStack_e8,pbStack_68,uVar1,pbStack_c0,uStack_b8);
          if (uStack_c8 != 0) {
            pub_1406abac0(pbStack_58,uStack_c8,1);
          }
          uStack_49 = 0;
          plVar4 = (longlong *)pdb_1400ef890(&uStack_120,&uStack_e8);
          if (plVar4 != (longlong *)0x0) {
LAB_1400efcb7:
            LOCK();
            *plStack_600 = *plStack_600 + -1;
            UNLOCK();
            if (*plStack_600 == 0) {
              pdb_140cd0de0(&plStack_600);
            }
            goto LAB_1400efcd1;
          }
        }
        LOCK();
        *plStack_600 = *plStack_600 + -1;
        UNLOCK();
        if (*plStack_600 == 0) {
          pdb_140cd0de0(&plStack_600);
        }
      }
      if (plStack_390 != (longlong *)0x0) {
        pdb_140f590a0(&plStack_388);
      }
      LOCK();
      *aplStack_380[0] = *aplStack_380[0] + -1;
      UNLOCK();
      if (*aplStack_380[0] == 0) {
        pdb_140cd0de0(aplStack_380);
      }
      uVar6 = *puStack_60;
      plVar4 = (longlong *)0x0;
      goto joined_r0x0001400efc5f;
    }
  }
  else {
    plVar4 = (longlong *)pdb_142d88fc0(lVar3);
  }
LAB_1400efd02:
  uVar6 = *puStack_60;
joined_r0x0001400efc5f:
  if (uVar6 != 0) {
    pub_1406abac0(pbStack_68,uVar6,1);
  }
  if (*puStack_80 != 0) {
    pub_1406abac0(pbStack_70,*puStack_80,1);
  }
  return plVar4;
}

