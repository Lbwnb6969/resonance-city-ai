// VA 0x140c704c0, PDB extent 2458 bytes
// country_core::resources::session::import::copy_folder
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::import::copy_folder
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
   Extent: 2458 */

longlong pdb_140c704c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  byte *arg0;
  undefined8 uVar4;
  short *psVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  int iStack_828;
  undefined4 uStack_824;
  longlong *plStack_820;
  ulonglong uStack_818;
  undefined1 auStack_810 [600];
  longlong *plStack_5b8;
  ulonglong uStack_5b0;
  undefined1 auStack_5a8 [584];
  longlong lStack_360;
  longlong *plStack_358;
  longlong *aplStack_350 [76];
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong lStack_e0;
  uint *puStack_d8;
  code *pcStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  byte *pbStack_88;
  byte *pbStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  byte *pbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f4f710(&iStack_828,param_1,param_2);
  plVar1 = plStack_820;
  lVar6 = CONCAT44(uStack_824,iStack_828);
  if (lVar6 == 2) {
    lVar6 = pdb_142deaf00(plStack_820);
  }
  else {
    pub_142e32760(aplStack_350,&uStack_818,0x260);
    plStack_358 = plVar1;
    lStack_360 = lVar6;
    while (pdb_140f59fa0(&iStack_828,&lStack_360), uVar2 = uStack_818, plVar1 = plStack_820,
          iStack_828 == 1) {
      if (plStack_820 == (longlong *)0x0) {
        lVar6 = pdb_142deaf00(uStack_818);
        goto LAB_140c709ec;
      }
      pub_142e32760(auStack_5a8,auStack_810,0x248);
      uVar3 = auStack_5a8._28_4_;
      plStack_5b8 = plVar1;
      uStack_5b0 = uVar2;
      pdb_140f46c20(&pbStack_c8,&plStack_5b8);
      uStack_4a = 1;
      pdb_140f46b10(&uStack_78,&plStack_5b8);
      pbStack_58 = (byte *)CONCAT44(uStack_6c,uStack_70);
      lVar6 = lStack_68;
      psVar5 = (short *)pdb_140f3ec80();
      if ((lVar6 == 3 && psVar5 != (short *)0x0) && ((char)psVar5[1] == 'p' && *psVar5 == 0x6d74)) {
        if (CONCAT44(uStack_74,uStack_78) != 0) {
          pub_1406abac0(pbStack_58,CONCAT44(uStack_74,uStack_78),1);
        }
        if (pbStack_c8 != (byte *)0x0) {
          pub_1406abac0(pbStack_c0,(ulonglong)pbStack_c8,1);
        }
        LOCK();
        *plStack_5b8 = *plStack_5b8 + -1;
        UNLOCK();
        if (*plStack_5b8 == 0) {
          pdb_140cd0de0(&plStack_5b8);
        }
      }
      else {
        if (CONCAT44(uStack_74,uStack_78) != 0) {
          pub_1406abac0(pbStack_58,CONCAT44(uStack_74,uStack_78),1);
        }
        pbStack_58 = pbStack_c8;
        pbStack_80 = pbStack_c0;
        pdb_140f3e9e0(&pbStack_a8,param_3,param_4,pbStack_c0,uStack_b8);
        if (pbStack_58 != (byte *)0x0) {
          pub_1406abac0(pbStack_80,(ulonglong)pbStack_58,1);
        }
        uVar4 = uStack_98;
        arg0 = pbStack_a0;
        bVar8 = (byte)(uVar2 >> 10) & SUB41(uVar3,3) >> 5 & 1;
        if (((uVar2 & 0x10) == 0) || (bVar8 == 1)) {
          if ((char)(((uint)uVar2 & 0x10) >> 4) != '\0' || bVar8 != 0) {
            uStack_49 = 1;
            pdb_140f46b10(&uStack_78,&plStack_5b8);
            pcStack_d0 = pdb_140f58250;
            puStack_d8 = &uStack_78;
            pdb_140f60760(&uStack_f0,&UNK_1430729a1,&puStack_d8);
            if (CONCAT44(uStack_74,uStack_78) != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_6c,uStack_70),CONCAT44(uStack_74,uStack_78),1);
            }
            uStack_78 = uStack_f0;
            uStack_74 = uStack_ec;
            uStack_70 = uStack_e8;
            uStack_6c = uStack_e4;
            lStack_68 = lStack_e0;
            uStack_49 = 1;
            lVar6 = pdb_142de92b0(&uStack_78);
            goto LAB_140c709b4;
          }
          uStack_49 = 1;
          pdb_140f46b10(&uStack_78,&plStack_5b8);
          pbStack_58 = pbStack_a8;
          pbStack_80 = (byte *)CONCAT44(uStack_6c,uStack_70);
          pbStack_88 = pbStack_a0;
          lVar6 = lStack_68;
          lVar7 = pdb_140f4f180(pbStack_80,lStack_68,pbStack_a0,uStack_98);
          if (pbStack_58 != (byte *)0x0) {
            pub_1406abac0(pbStack_88,(ulonglong)pbStack_58,1);
          }
          if (CONCAT44(uStack_74,uStack_78) != 0) {
            pub_1406abac0(pbStack_80,CONCAT44(uStack_74,uStack_78),1);
          }
          if (lVar7 != 1) goto LAB_140c7080c;
          uStack_49 = 0;
          lVar6 = pdb_142deaf00(lVar6);
LAB_140c709d2:
          LOCK();
          *plStack_5b8 = *plStack_5b8 + -1;
          UNLOCK();
          if (*plStack_5b8 == 0) {
            pdb_140cd0de0(&plStack_5b8);
          }
LAB_140c709ec:
          if (lStack_360 != 0) {
            pdb_140f590a0(&plStack_358);
          }
          LOCK();
          *aplStack_350[0] = *aplStack_350[0] + -1;
          UNLOCK();
          if (*aplStack_350[0] != 0) {
            return lVar6;
          }
          pdb_140cd0de0(aplStack_350);
          return lVar6;
        }
        uStack_78 = uStack_78 & 0xffffff00;
        uStack_49 = 1;
        lVar6 = pdb_140f46c40(&uStack_78,pbStack_a0,uStack_98);
        if (lVar6 != 0) {
          uStack_49 = 1;
          lVar6 = pdb_142deaf00(lVar6);
LAB_140c709b4:
          if (pbStack_a8 != (byte *)0x0) {
            pub_1406abac0(pbStack_a0,(ulonglong)pbStack_a8,1);
          }
          goto LAB_140c709d2;
        }
        uStack_49 = 1;
        pdb_140f46b10(&uStack_78,&plStack_5b8);
        pbStack_58 = (byte *)CONCAT44(uStack_6c,uStack_70);
        lVar6 = pdb_140c704c0(pbStack_58,lStack_68,arg0,uVar4);
        if (lVar6 != 0) {
          if (CONCAT44(uStack_74,uStack_78) != 0) {
            pub_1406abac0(pbStack_58,CONCAT44(uStack_74,uStack_78),1);
          }
          goto LAB_140c709b4;
        }
        if (CONCAT44(uStack_74,uStack_78) != 0) {
          pub_1406abac0(pbStack_58,CONCAT44(uStack_74,uStack_78),1);
        }
        if (pbStack_a8 != (byte *)0x0) {
          pub_1406abac0(arg0,(ulonglong)pbStack_a8,1);
        }
LAB_140c7080c:
        LOCK();
        *plStack_5b8 = *plStack_5b8 + -1;
        UNLOCK();
        if (*plStack_5b8 == 0) {
          pdb_140cd0de0(&plStack_5b8);
        }
      }
    }
    if (lStack_360 != 0) {
      pdb_140f590a0(&plStack_358);
    }
    LOCK();
    *aplStack_350[0] = *aplStack_350[0] + -1;
    UNLOCK();
    if (*aplStack_350[0] == 0) {
      pdb_140cd0de0(aplStack_350);
    }
    lVar6 = 0;
  }
  return lVar6;
}

