// VA 0x140c8a3b0, PDB extent 1162 bytes
// country_core::resources::clutter_packs::collect_files
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_packs::collect_files
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 1162 */

longlong * pdb_140c8a3b0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plStack_7b8;
  longlong *plStack_7b0;
  undefined1 auStack_7a8 [584];
  int iStack_560;
  undefined4 uStack_55c;
  longlong *plStack_558;
  longlong *plStack_550;
  undefined1 auStack_548 [600];
  longlong lStack_2f0;
  longlong *plStack_2e8;
  longlong *aplStack_2e0 [76];
  ulonglong uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f4f710(&iStack_560,param_1,param_2);
  plStack_2e8 = plStack_558;
  lStack_2f0 = CONCAT44(uStack_55c,iStack_560);
  if (lStack_2f0 != 2) {
    pub_142e32760(aplStack_2e0,&plStack_550,0x260);
    while (pdb_140f59fa0(&iStack_560,&lStack_2f0), plVar8 = plStack_550, plVar5 = plStack_558,
          iStack_560 == 1) {
      if (plStack_558 == (longlong *)0x0) {
LAB_140c8a5ee:
        if (lStack_2f0 != 0) {
          pdb_140f590a0(&plStack_2e8);
        }
        LOCK();
        *aplStack_2e0[0] = *aplStack_2e0[0] + -1;
        UNLOCK();
        if (*aplStack_2e0[0] != 0) {
          return plVar8;
        }
        pdb_140cd0de0(aplStack_2e0);
        return plVar8;
      }
      pub_142e32760(auStack_7a8,auStack_548,0x248);
      plStack_7b8 = plVar5;
      plStack_7b0 = plVar8;
      pdb_140f46b10(&uStack_80,&plStack_7b8);
      LOCK();
      *plStack_7b8 = *plStack_7b8 + -1;
      UNLOCK();
      if (*plStack_7b8 == 0) {
        uStack_49 = 1;
        pdb_140cd0de0(&plStack_7b8);
      }
      uVar6 = uStack_70;
      pbVar3 = pbStack_78;
      uStack_49 = 1;
      cVar7 = pdb_140f3ea80(pbStack_78,uStack_70);
      if (cVar7 == '\0') {
        pbStack_60 = pbVar3;
        uStack_58 = uStack_80;
        lVar4 = param_3[2];
        if (lVar4 == *param_3) {
          pdb_142d8a600(param_3);
        }
        lVar2 = param_3[1];
        lVar9 = lVar4 * 0x20;
        *(ulonglong *)(lVar2 + lVar9) = uStack_58;
        *(byte **)(lVar2 + 8 + lVar9) = pbStack_60;
        puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar9);
        *puVar1 = uStack_70;
        puVar1[1] = uStack_68;
        param_3[2] = lVar4 + 1;
      }
      else {
        uStack_49 = 1;
        plVar8 = (longlong *)pdb_140c8a3b0(pbVar3,uVar6,param_3);
        if (plVar8 != (longlong *)0x0) {
          if (uStack_80 != 0) {
            pub_1406abac0(pbVar3,uStack_80,1);
          }
          goto LAB_140c8a5ee;
        }
        if (uStack_80 != 0) {
          pub_1406abac0(pbVar3,uStack_80,1);
        }
      }
    }
    if (lStack_2f0 != 0) {
      pdb_140f590a0(&plStack_2e8);
    }
    LOCK();
    *aplStack_2e0[0] = *aplStack_2e0[0] + -1;
    UNLOCK();
    if (*aplStack_2e0[0] == 0) {
      pdb_140cd0de0(aplStack_2e0);
    }
    plStack_558 = (longlong *)0x0;
  }
  return plStack_558;
}

