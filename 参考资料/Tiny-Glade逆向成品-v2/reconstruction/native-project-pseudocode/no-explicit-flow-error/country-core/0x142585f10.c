// VA 0x142585f10, PDB extent 1598 bytes
// country_core::startup::load_shaders::preload_shaders::closure$1::closure$4<country_core::startup::load_shaders::LoadOnlyBootupShaders>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::load_shaders::preload_shaders::closure$1::closure$4<country_core::startup::load_shaders::LoadOnlyBootupShaders>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_shaders.rs
   Extent: 1598 */

longlong *
pdb_142585f10(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4,
             undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong *plStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong *plStack_a8;
  code *pcStack_a0;
  longlong *plStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  longlong lStack_60;
  byte *pbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_100 = param_2;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(10,1);
  if (pbVar5 == (byte *)0x0) {
    uStack_4b = 1;
    pdb_142dc7e2a(1,10);
  }
  else {
    pbVar5[0] = 0x53;
    pbVar5[1] = 0x68;
    pbVar5[2] = 0x61;
    pbVar5[3] = 100;
    pbVar5[4] = 0x65;
    pbVar5[5] = 0x72;
    pbVar5[6] = 0x4d;
    pbVar5[7] = 0x6f;
    pbVar5[8] = 100;
    pbVar5[9] = 0x65;
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(param_4,1);
    if (pbVar6 == (byte *)0x0) {
      pbStack_58 = pbVar5;
      pdb_142dc7e2a(1,param_4);
    }
    else {
      pub_142e32760(pbVar6,param_3,param_4);
      plStack_a8 = (longlong *)0x0;
      pcStack_a0 = (code *)0x1;
      plStack_98 = (longlong *)0xa;
      uStack_88 = 10;
      uStack_4b = 1;
      pcStack_90 = (code *)pbVar5;
      uStack_80 = param_4;
      pbStack_78 = pbVar6;
      uStack_70 = param_4;
      pdb_1415faef0(&lStack_118,&plStack_a8);
      uStack_49 = 1;
      pdb_140e9d970(&plStack_a8,&lStack_118,*param_1 + 0x18);
      if (plStack_a8 == (longlong *)0x0) {
        lVar7 = *(longlong *)(param_1[3] + 8);
        lVar8 = 0;
        do {
          if (*(longlong *)(param_1[3] + 0x10) << 4 == lVar8) {
            plStack_a8 = (longlong *)param_1[2];
            pcStack_a0 = pdb_1402ed420;
            pcStack_90 = pdb_142594fa0;
            uStack_49 = 1;
            plStack_98 = &lStack_118;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14351e070,&plStack_a8,&UNK_14351e098);
          }
          lVar1 = lVar8 + 0x10;
          plVar9 = (longlong *)(lVar7 + 8 + lVar8);
          lVar8 = lVar1;
        } while ((code *)*plVar9 != pcStack_a0);
        uStack_49 = 1;
        pdb_1408f8b70(&lStack_e8,*(longlong *)(lVar7 + -0x10 + lVar1) + 0x10);
        plVar9 = (longlong *)param_1[4];
        if (SBORROW8(0,*plVar9)) {
          uStack_4a = 1;
          pdb_1415e6f90(&plStack_a8,&lStack_e8);
          lStack_b8 = (longlong)plStack_98;
          plStack_c8 = plStack_a8;
          lStack_c0 = (longlong)pcStack_a0;
          lVar8 = *plVar9;
          if (!SBORROW8(0,lVar8)) {
            pbStack_58 = (byte *)plVar9[1];
            lVar10 = plVar9[2];
            lStack_60 = lVar7;
            if (lVar10 != 0) {
              pbVar5 = pbStack_58 + 8;
              do {
                if (*(longlong *)(pbVar5 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar5,*(longlong *)(pbVar5 + -8) * 0x18,8);
                }
                pbVar5 = pbVar5 + 0x20;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
            }
            lVar7 = lStack_60;
            if (lVar8 != 0) {
              pub_1406abac0(pbStack_58,lVar8 << 5,8);
            }
          }
          plVar9[2] = lStack_b8;
          *plVar9 = (longlong)plStack_c8;
          plVar9[1] = lStack_c0;
        }
        else {
          lStack_d0 = plVar9[2];
          plStack_f8 = param_2;
          plStack_f0 = param_1;
          plStack_c8 = plVar9;
          plStack_a8 = &lStack_e8;
          lStack_60 = lVar7;
          if (lStack_d0 != lStack_d8) {
LAB_142586342:
            uStack_4a = 1;
            pdb_142deb4ea(0,&plStack_c8,&plStack_a8,0);
            goto LAB_1425863de;
          }
          if (lStack_d0 != 0) {
            pbStack_58 = (byte *)CONCAT44(uStack_dc,uStack_e0);
            lVar8 = plVar9[1];
            lVar10 = 0;
            do {
              lVar7 = lVar10 * 0x20;
              if (*(int *)(lVar8 + 0x18 + lVar7) != *(int *)(pbStack_58 + lVar7 + 0x18))
              goto LAB_142586342;
              lVar2 = lVar8 + lVar7;
              lVar11 = *(longlong *)(lVar2 + 0x10);
              if (lVar11 != *(longlong *)(pbStack_58 + lVar7 + 0x10)) goto LAB_142586342;
              if (lVar11 != 0) {
                lVar7 = *(longlong *)(pbStack_58 + lVar7 + 8);
                lVar2 = *(longlong *)(lVar2 + 8);
                lVar12 = 0x14;
                do {
                  if ((((*(longlong *)(lVar2 + -0xc + lVar12) !=
                         *(longlong *)(lVar7 + -0xc + lVar12)) ||
                       (iVar4 = pub_142e32750(*(undefined8 *)(lVar2 + -0x14 + lVar12),
                                              *(undefined8 *)(lVar7 + -0x14 + lVar12)), iVar4 != 0))
                      || (*(int *)(lVar2 + -4 + lVar12) != *(int *)(lVar7 + -4 + lVar12))) ||
                     (*(char *)(lVar2 + lVar12) != *(char *)(lVar7 + lVar12))) goto LAB_142586342;
                  lVar12 = lVar12 + 0x18;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
              lVar10 = lVar10 + 1;
              param_1 = plStack_f0;
              param_2 = plStack_f8;
              lVar7 = lStack_60;
            } while (lVar10 != lStack_d0);
          }
        }
        lVar8 = **(longlong **)param_1[5];
        plVar9 = *(longlong **)(lVar7 + -0x10 + lVar1);
        LOCK();
        lVar7 = *plVar9;
        *plVar9 = *plVar9 + 1;
        UNLOCK();
        if (*plVar9 != 0 && SCARRY8(lVar7,1) == *plVar9 < 0) {
          lStack_c0 = CONCAT44(lStack_c0._4_4_,param_5);
          plStack_98 = (longlong *)lStack_d8;
          uStack_4a = 0;
          plStack_c8 = param_2;
          lVar7 = pdb_1415d28f0(lVar8 + 0x10,plVar9,&plStack_c8,&plStack_a8);
          if (lVar7 == 1) {
            plStack_a8 = plVar9;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14351e220,0x2b,&plStack_a8,&UNK_14351e200,&UNK_14351dfd8);
          }
          if (lStack_108 != 0) {
            pbVar5 = pbStack_110 + 0x20;
            lVar7 = lStack_108;
            do {
              if (*(ulonglong *)(pbVar5 + -0x20) != 0) {
                pub_1406abac0(*(byte **)(pbVar5 + -0x18),*(ulonglong *)(pbVar5 + -0x20),1);
              }
              if (*(ulonglong *)(pbVar5 + -8) != 0) {
                pub_1406abac0(*(byte **)pbVar5,*(ulonglong *)(pbVar5 + -8),1);
              }
              pbVar5 = pbVar5 + 0x30;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (lStack_118 != 0) {
            pub_1406abac0(pbStack_110,lStack_118 * 0x30,8);
          }
          return plVar9;
        }
      }
      else {
        uStack_49 = 1;
        pdb_142e1ec30(param_1[1]);
      }
    }
  }
LAB_1425863de:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

