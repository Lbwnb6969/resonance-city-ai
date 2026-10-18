// VA 0x141c2e0c0, PDB extent 1354 bytes
// turbosloth::store::remove_hex_named_files
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::remove_hex_named_files
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1354 */

longlong * pdb_141c2e0c0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plStack_7d0;
  longlong *plStack_7c8;
  undefined1 auStack_7c0 [584];
  longlong *plStack_578;
  longlong *plStack_570;
  longlong *plStack_568;
  undefined1 auStack_560 [600];
  longlong *plStack_308;
  longlong *plStack_300;
  longlong *aplStack_2f8 [76];
  char acStack_98 [8];
  char *pcStack_90;
  longlong lStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f4f710(&plStack_578,param_1,param_2);
  plStack_300 = plStack_570;
  plStack_308 = plStack_578;
  if (plStack_578 == (longlong *)0x2) {
    cVar4 = pdb_141c2aa90(plStack_570);
    if (cVar4 != '\0') {
      return plStack_570;
    }
    plStack_578 = plStack_570;
    pdb_1404b38e0(&plStack_578);
  }
  else {
    pub_142e32760(aplStack_2f8,&plStack_568,0x260);
    while( true ) {
      pdb_140f59fa0(&plStack_578,&plStack_308);
      plVar6 = plStack_568;
      plVar2 = plStack_570;
      if ((int)plStack_578 != 1) break;
      if (plStack_570 == (longlong *)0x0) {
LAB_141c2e3c2:
        if (plStack_308 != (longlong *)0x0) {
          pdb_140f590a0(&plStack_300);
        }
        LOCK();
        *aplStack_2f8[0] = *aplStack_2f8[0] + -1;
        UNLOCK();
        if (*aplStack_2f8[0] != 0) {
          return plVar6;
        }
        pdb_140cd0de0(aplStack_2f8);
        return plVar6;
      }
      pub_142e32760(auStack_7c0,auStack_560,0x248);
      plStack_7d0 = plVar2;
      plStack_7c8 = plVar6;
      pdb_140f46b10(&uStack_80,&plStack_7d0);
      uVar3 = uStack_70;
      uStack_49 = 1;
      pbStack_58 = pbStack_78;
      cVar4 = pdb_140f3ec10(pbStack_78,uStack_70);
      if (cVar4 == '\0') {
        if (uStack_80 != 0) {
          pub_1406abac0(pbStack_58,uStack_80,1);
        }
        LOCK();
        *plStack_7d0 = *plStack_7d0 + -1;
        UNLOCK();
        if (*plStack_7d0 == 0) {
          pdb_140cd0de0(&plStack_7d0);
        }
      }
      else {
        uStack_49 = 1;
        uVar7 = uVar3;
        lVar5 = pdb_140f3ee10(pbStack_58,uVar3);
        if (lVar5 == 0) {
LAB_141c2e340:
          if (uStack_80 != 0) {
            pub_1406abac0(pbStack_58,uStack_80,1);
          }
        }
        else {
          uStack_49 = 1;
          pdb_140f69110(acStack_98,lVar5,uVar7);
          if ((acStack_98[0] != '\0') || (lStack_88 != 0x20)) goto LAB_141c2e340;
          lVar5 = 0;
          do {
            bVar1 = pcStack_90[lVar5 + (ulonglong)(*pcStack_90 == '+')];
            uVar8 = bVar1 - 0x30;
            if (0x39 < bVar1) {
              uVar8 = (bVar1 - 0x41 & 0xffffffde) + 10;
            }
            if (0xf < uVar8) goto LAB_141c2e340;
            lVar5 = lVar5 + 1;
          } while (0x20 - (ulonglong)(*pcStack_90 == '+') != lVar5);
          uStack_60 = uStack_80;
          plVar6 = (longlong *)pdb_140f4eda0(pbStack_58,uVar3);
          if (uStack_60 != 0) {
            pub_1406abac0(pbStack_58,uStack_60,1);
          }
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *plStack_7d0 = *plStack_7d0 + -1;
            UNLOCK();
            if (*plStack_7d0 == 0) {
              pdb_140cd0de0(&plStack_7d0);
            }
            goto LAB_141c2e3c2;
          }
        }
        LOCK();
        *plStack_7d0 = *plStack_7d0 + -1;
        UNLOCK();
        if (*plStack_7d0 == 0) {
          pdb_140cd0de0(&plStack_7d0);
        }
      }
    }
    if (plStack_308 != (longlong *)0x0) {
      pdb_140f590a0(&plStack_300);
    }
    LOCK();
    *aplStack_2f8[0] = *aplStack_2f8[0] + -1;
    UNLOCK();
    if (*aplStack_2f8[0] == 0) {
      pdb_140cd0de0(aplStack_2f8);
    }
  }
  return (longlong *)0x0;
}

