// VA 0x140a3cc40, PDB extent 3265 bytes
// country_core::systems::save::save_backup_list::SaveBackupList::adopt_legacy_upgrade_backups
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_backup_list.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::save_backup_list::SaveBackupList::adopt_legacy_upgrade_backups
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_backup_list.rs
   Extent: 3265 */

void pdb_140a3cc40(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 uStack_48;
  
  uStack_48 = 0x140a3cc56;
  lVar9 = pdb_142d7c6d0();
  lVar9 = -lVar9;
  *(undefined8 *)(&stack0x000011e0 + lVar9) = 0xfffffffffffffffe;
  *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cc7b;
  pdb_140a937d0(&stack0xfffffffffffffff0 + lVar9,param_1);
  *(undefined8 *)(&stack0x000011c8 + lVar9) = *(undefined8 *)(&stack0xfffffffffffffff8 + lVar9);
  *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cc96;
  pdb_140f4f710(&stack0x00000260 + lVar9,*(undefined8 *)(&stack0xfffffffffffffff8 + lVar9),
                *(undefined8 *)(&stack0x00000000 + lVar9));
  if (*(int *)(&stack0x00000260 + lVar9) == 2) {
    *(undefined8 *)(&stack0x00000998 + lVar9) = *(undefined8 *)(&stack0x00000268 + lVar9);
    *(undefined8 *)(&stack0x00000990 + lVar9) = 2;
    uVar3 = *(ulonglong *)(&stack0xfffffffffffffff0 + lVar9);
  }
  else {
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ccdd;
    pub_142e32760(&stack0x00000990 + lVar9,&stack0x00000260 + lVar9,0x270);
    uVar3 = *(ulonglong *)(&stack0xfffffffffffffff0 + lVar9);
  }
  if (uVar3 != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ccf8;
    pub_1406abac0(*(byte **)(&stack0x000011c8 + lVar9),uVar3,1);
  }
  if (*(int *)(&stack0x00000990 + lVar9) == 2) {
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cd0d;
    pdb_1404b38e0(&stack0x00000998 + lVar9);
  }
  else {
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cd28;
    pub_142e32760(&stack0xfffffffffffffff0 + lVar9,&stack0x00000990 + lVar9,0x270);
    *(undefined **)(&stack0x00000990 + lVar9) = &UNK_14303bb70;
    *(code **)(&stack0x00000998 + lVar9) = pdb_1402ed400;
    (&stack0x000011df)[lVar9] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cd65;
    pdb_140f60760(&stack0x00000260 + lVar9,&UNK_14303bb10,&stack0x00000990 + lVar9);
    *(undefined8 *)(&stack0x000011c8 + lVar9) = *(undefined8 *)(&stack0x00000260 + lVar9);
    *(undefined8 *)(&stack0x000011b8 + lVar9) = *(undefined8 *)(&stack0x00000268 + lVar9);
    uVar3 = *(ulonglong *)(&stack0x00000270 + lVar9);
    (&stack0x000011de)[lVar9] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cd9f;
    pdb_140a939a0(&stack0x00001120 + lVar9,param_1);
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cdb6;
    pub_142e32760(&stack0x00000be8 + lVar9,&stack0xfffffffffffffff0 + lVar9,0x270);
    puVar1 = &stack0x00000990 + lVar9;
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cdd2;
    pub_142e32760(&stack0x000004c8 + lVar9,puVar1,0x4c8);
    *(undefined8 *)(&stack0x00000260 + lVar9) = 0;
    *(undefined8 *)(&stack0x000004c0 + lVar9) = 0;
    puVar11 = &stack0x00000720 + lVar9;
    puVar2 = &stack0x00000e58 + lVar9;
LAB_140a3ce00:
    if (*(int *)(&stack0x00000720 + lVar9) != 2) {
      *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ce18;
      pdb_140f59fa0(puVar1,puVar11);
      if ((&stack0x00000990)[lVar9] == '\0') {
        if (*(longlong *)(&stack0x00000720 + lVar9) == 0) {
LAB_140a3d37b:
          plVar5 = *(longlong **)(&stack0x00000730 + lVar9);
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (*plVar5 == 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d394;
            pdb_140cd0de0(&stack0x00000730 + lVar9);
          }
        }
        else if ((int)*(longlong *)(&stack0x00000720 + lVar9) != 2) {
          *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d37a;
          pdb_140f590a0(&stack0x00000728 + lVar9);
          goto LAB_140a3d37b;
        }
        *(undefined8 *)(&stack0x00000720 + lVar9) = 2;
        goto LAB_140a3d3a0;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ce3a;
      pub_142e32760(puVar2,&stack0x00000998 + lVar9,600);
      *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ce4b;
      pub_142e32760(puVar1,puVar2,600);
      lVar10 = *(longlong *)(&stack0x00000990 + lVar9);
      if (lVar10 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ce82;
        pub_142e32760(&stack0x00000998 + lVar9,&stack0x00000e60 + lVar9,0x250);
        *(longlong *)(&stack0x00000990 + lVar9) = lVar10;
        *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ce98;
        pdb_140f46c20(&stack0x00001100 + lVar9,puVar1);
        *(undefined8 *)(&stack0x000011c0 + lVar9) = *(undefined8 *)(&stack0x00001108 + lVar9);
        *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ceb9;
        pdb_140f69110(puVar2,*(undefined8 *)(&stack0x00001108 + lVar9),
                      *(undefined8 *)(&stack0x00001110 + lVar9));
        uVar4 = *(ulonglong *)(&stack0x00000e68 + lVar9);
        if (uVar3 <= uVar4 && (&stack0x00000e58)[lVar9] == '\0') {
          lVar10 = *(longlong *)(&stack0x00000e60 + lVar9);
          *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ceeb;
          iVar8 = pub_142e32750(*(undefined8 *)(&stack0x000011b8 + lVar9),lVar10,uVar3);
          if (iVar8 == 0) {
            *(ulonglong *)(&stack0x000010f0 + lVar9) = lVar10 + uVar3;
            *(ulonglong *)(&stack0x000010f8 + lVar9) = uVar4 - uVar3;
            uVar6 = *(undefined8 *)(&stack0x00001128 + lVar9);
            uVar7 = *(undefined8 *)(&stack0x00001130 + lVar9);
            *(undefined1 **)(&stack0x00001190 + lVar9) = &stack0x000010f0 + lVar9;
            *(code **)(&stack0x00001198 + lVar9) = pdb_1402ed400;
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cf8a;
            pdb_140f60760(puVar2,&UNK_14303bb80,&stack0x00001190 + lVar9);
            *(undefined8 *)(&stack0x000011d0 + lVar9) = *(undefined8 *)(&stack0x00000e58 + lVar9);
            *(undefined8 *)(&stack0xffffffffffffffe0 + lVar9) =
                 *(undefined8 *)(&stack0x00000e68 + lVar9);
            *(undefined8 *)(&stack0x00001140 + lVar9) = uVar6;
            *(undefined8 *)(&stack0x00001148 + lVar9) = uVar7;
            *(undefined8 *)(&stack0x000011b0 + lVar9) = *(undefined8 *)(&stack0x00000e60 + lVar9);
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cfd3;
            pdb_140f3e9e0(&stack0x00001170 + lVar9,uVar6,uVar7);
            puVar11 = &stack0x00000720 + lVar9;
            if (*(ulonglong *)(&stack0x000011d0 + lVar9) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d006;
              pub_1406abac0(*(byte **)(&stack0x000011b0 + lVar9),
                            *(ulonglong *)(&stack0x000011d0 + lVar9),1);
            }
            if (2 < *_DAT_143ca8e90) {
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d029;
              pdb_140f46b10(&stack0x000010b0 + lVar9,puVar1);
              *(undefined8 *)(&stack0x000011d0 + lVar9) = *(undefined8 *)(&stack0x000010b8 + lVar9);
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d051;
              pdb_141b1e240(&stack0x000010d0 + lVar9,*(undefined8 *)(&stack0x000010b8 + lVar9),
                            *(undefined8 *)(&stack0x000010c0 + lVar9),3);
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d075;
              pdb_141b1e240(&stack0x00001150 + lVar9,*(undefined8 *)(&stack0x00001178 + lVar9),
                            *(undefined8 *)(&stack0x00001180 + lVar9),3);
              *(undefined1 **)(&stack0x00001190 + lVar9) = &stack0x000010d0 + lVar9;
              *(code **)(&stack0x00001198 + lVar9) = pdb_140f58250;
              *(undefined1 **)(&stack0x000011a0 + lVar9) = &stack0x00001150 + lVar9;
              *(code **)(&stack0x000011a8 + lVar9) = pdb_140f58250;
              *(undefined8 *)(&stack0x00000e58 + lVar9) = 0;
              *(undefined **)(&stack0x00000e60 + lVar9) = &UNK_14303baa4;
              *(undefined8 *)(&stack0x00000e68 + lVar9) = 0x2d;
              *(undefined8 *)(&stack0x00000e70 + lVar9) = 0;
              *(undefined **)(&stack0x00000e78 + lVar9) = &UNK_14303ba6b;
              *(undefined8 *)(&stack0x00000e80 + lVar9) = 0x38;
              *(undefined8 *)(&stack0x00000e88 + lVar9) = 3;
              *(undefined **)(&stack0x00000e90 + lVar9) = &UNK_14303baa4;
              *(undefined8 *)(&stack0x00000e98 + lVar9) = 0x2d;
              *(undefined8 *)(&stack0x00000ea0 + lVar9) = 0x8300000001;
              *(undefined **)(&stack0x00000ea8 + lVar9) = &UNK_14303bb9a;
              *(undefined1 **)(&stack0x00000eb0 + lVar9) = &stack0x00001190 + lVar9;
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d141;
              pdb_140f332f0(&stack0x000011dd + lVar9,puVar2);
              if (*(ulonglong *)(&stack0x00001150 + lVar9) != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d160;
                pub_1406abac0(*(byte **)(&stack0x00001158 + lVar9),
                              *(ulonglong *)(&stack0x00001150 + lVar9),1);
              }
              if (*(ulonglong *)(&stack0x000010d0 + lVar9) != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d17e;
                pub_1406abac0(*(byte **)(&stack0x000010d8 + lVar9),
                              *(ulonglong *)(&stack0x000010d0 + lVar9),1);
              }
              if (*(ulonglong *)(&stack0x000010b0 + lVar9) != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d19c;
                pub_1406abac0(*(byte **)(&stack0x000011d0 + lVar9),
                              *(ulonglong *)(&stack0x000010b0 + lVar9),1);
              }
            }
            (&stack0x00000e58)[lVar9] = 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d1b9;
            lVar10 = pdb_140f46c40(puVar2,*(undefined8 *)(&stack0x00001140 + lVar9),
                                   *(undefined8 *)(&stack0x00001148 + lVar9));
            if (lVar10 == 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d1ca;
              pdb_140f46b10(puVar2,puVar1);
              *(undefined8 *)(&stack0x000011d0 + lVar9) = *(undefined8 *)(&stack0x00000e60 + lVar9);
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d1f3;
              lVar10 = pdb_140f4f450(*(undefined8 *)(&stack0x00000e60 + lVar9),
                                     *(undefined8 *)(&stack0x00000e68 + lVar9),
                                     *(undefined8 *)(&stack0x00001178 + lVar9),
                                     *(undefined8 *)(&stack0x00001180 + lVar9));
              if (*(ulonglong *)(&stack0x00000e58 + lVar9) != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d215;
                pub_1406abac0(*(byte **)(&stack0x000011d0 + lVar9),
                              *(ulonglong *)(&stack0x00000e58 + lVar9),1);
              }
              if (lVar10 != 0) goto LAB_140a3d224;
            }
            else {
LAB_140a3d224:
              *(longlong *)(&stack0x00001150 + lVar9) = lVar10;
              if (*_DAT_143ca8e90 != 0) {
                *(undefined1 **)(&stack0x00001190 + lVar9) = &stack0x00001150 + lVar9;
                *(code **)(&stack0x00001198 + lVar9) = pdb_140f56800;
                *(undefined8 *)(&stack0x00000e58 + lVar9) = 0;
                *(undefined **)(&stack0x00000e60 + lVar9) = &UNK_14303baa4;
                *(undefined8 *)(&stack0x00000e68 + lVar9) = 0x2d;
                *(undefined8 *)(&stack0x00000e70 + lVar9) = 0;
                *(undefined **)(&stack0x00000e78 + lVar9) = &UNK_14303ba6b;
                *(undefined8 *)(&stack0x00000e80 + lVar9) = 0x38;
                *(undefined8 *)(&stack0x00000e88 + lVar9) = 1;
                *(undefined **)(&stack0x00000e90 + lVar9) = &UNK_14303baa4;
                *(undefined8 *)(&stack0x00000e98 + lVar9) = 0x2d;
                *(undefined8 *)(&stack0x00000ea0 + lVar9) = 0x8c00000001;
                *(undefined **)(&stack0x00000ea8 + lVar9) = &UNK_14303bbc0;
                *(undefined1 **)(&stack0x00000eb0 + lVar9) = &stack0x00001190 + lVar9;
                *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d2f4;
                pdb_140f332f0(&stack0x000011dd + lVar9,puVar2);
              }
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d301;
              pdb_1404b38e0(&stack0x00001150 + lVar9);
            }
            if (*(ulonglong *)(&stack0x00001170 + lVar9) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d320;
              pub_1406abac0(*(byte **)(&stack0x00001178 + lVar9),
                            *(ulonglong *)(&stack0x00001170 + lVar9),1);
            }
            if (*(ulonglong *)(&stack0x00001100 + lVar9) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d33e;
              pub_1406abac0(*(byte **)(&stack0x000011c0 + lVar9),
                            *(ulonglong *)(&stack0x00001100 + lVar9),1);
            }
            plVar5 = *(longlong **)(&stack0x00000990 + lVar9);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d357;
              pdb_140cd0de0(puVar1);
            }
            goto LAB_140a3ce00;
          }
        }
        if (*(ulonglong *)(&stack0x00001100 + lVar9) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cf10;
          pub_1406abac0(*(byte **)(&stack0x000011c0 + lVar9),
                        *(ulonglong *)(&stack0x00001100 + lVar9),1);
        }
        plVar5 = *(longlong **)(&stack0x00000990 + lVar9);
        LOCK();
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        puVar11 = &stack0x00000720 + lVar9;
        if (*plVar5 == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3cf33;
          pdb_140cd0de0(puVar1);
        }
        goto LAB_140a3ce00;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3ce63;
      pdb_1404b38e0(&stack0x00000998 + lVar9);
      goto LAB_140a3ce00;
    }
LAB_140a3d3a0:
    *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d3ac;
    pdb_14099c400(&stack0x00000260 + lVar9);
    if (*(ulonglong *)(&stack0x00001120 + lVar9) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d3cb;
      pub_1406abac0(*(byte **)(&stack0x00001128 + lVar9),*(ulonglong *)(&stack0x00001120 + lVar9),1)
      ;
    }
    if (*(ulonglong *)(&stack0x000011c8 + lVar9) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar9) = 0x140a3d3e9;
      pub_1406abac0(*(byte **)(&stack0x000011b8 + lVar9),*(ulonglong *)(&stack0x000011c8 + lVar9),1)
      ;
    }
  }
  return;
}

