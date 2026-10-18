// VA 0x140a27d90, PDB extent 2503 bytes
// country_core::systems::steam::missing_mods::collect_missing_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::steam::missing_mods::collect_missing_mods
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 2503 */

void pdb_140a27d90(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  uint ******ppppppuVar4;
  uint ******ppppppuVar5;
  code *pcVar6;
  uint *******pppppppuVar7;
  uint *******pppppppuVar8;
  uint *******pppppppuVar9;
  int iVar10;
  uint *******pppppppuVar11;
  longlong *plVar12;
  undefined8 uVar13;
  uint *******pppppppuVar14;
  uint uVar15;
  uint uVar16;
  uint *******pppppppuVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  uint *******pppppppuVar24;
  longlong *plVar25;
  ulonglong uVar26;
  uint *******pppppppuVar27;
  longlong lVar28;
  uint *******pppppppuVar29;
  bool bVar30;
  bool bVar31;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  uint ******ppppppuStack_108;
  uint *******pppppppuStack_100;
  uint *******pppppppuStack_f8;
  uint *******pppppppuStack_f0;
  uint *******pppppppuStack_e8;
  uint *******pppppppuStack_e0;
  uint ******ppppppuStack_d8;
  uint *******pppppppuStack_d0;
  uint *******pppppppuStack_c8;
  uint *******pppppppuStack_c0;
  uint *******pppppppuStack_b8;
  uint *******pppppppuStack_b0;
  undefined8 uStack_a8;
  uint *******pppppppuStack_a0;
  uint *******pppppppuStack_98;
  uint ******ppppppuStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  uint *******pppppppuStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint ******ppppppuStack_68;
  uint *******pppppppuStack_60;
  uint *******pppppppuStack_58;
  uint *******pppppppuStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pppppppuStack_78 = (uint *******)0x0;
  ppppppuStack_68 = (uint ******)0x0;
  plVar12 = (longlong *)*param_2;
  bVar31 = plVar12 != (longlong *)0x0;
  lVar21 = 0;
  if (bVar31) {
    lVar21 = param_2[2];
  }
  pppppppuVar14 = (uint *******)param_2[1];
  plVar18 = (longlong *)0x0;
LAB_140a27e24:
  bVar30 = lVar21 != 0;
  lVar21 = lVar21 + -1;
  if (bVar30) {
    if (!bVar31) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143359188);
    }
    if (plVar18 == (longlong *)0x0) {
      plVar18 = plVar12;
      if (pppppppuVar14 != (uint *******)0x0) {
        pppppppuVar29 = pppppppuVar14;
        if (((ulonglong)pppppppuVar14 & 7) != 0) {
          uVar26 = 0;
          do {
            plVar12 = (longlong *)plVar12[0xd];
            uVar26 = uVar26 + 1;
          } while (((ulonglong)pppppppuVar14 & 7) != uVar26);
          pppppppuVar29 = (uint *******)((longlong)pppppppuVar14 - uVar26);
        }
        plVar18 = plVar12;
        if ((uint *******)0x7 < pppppppuVar14) {
          do {
            plVar12 = *(longlong **)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(plVar12[0xd] + 0x68) + 0x68) + 0x68) +
                             0x68) + 0x68) + 0x68) + 0x68);
            pppppppuVar29 = pppppppuVar29 + -1;
            plVar18 = plVar12;
          } while (pppppppuVar29 != (uint *******)0x0);
        }
      }
      plVar12 = (longlong *)0x0;
      pppppppuVar14 = (uint *******)0x0;
      if (*(short *)((longlong)plVar18 + 0x62) == 0) goto LAB_140a27ef0;
    }
    else if ((uint *******)(ulonglong)*(ushort *)((longlong)plVar18 + 0x62) <= pppppppuVar14) {
LAB_140a27ef0:
      do {
        plVar23 = (longlong *)*plVar18;
        if (plVar23 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143359c48);
        }
        plVar12 = (longlong *)((longlong)plVar12 + 1);
        puVar1 = (ushort *)(plVar18 + 0xc);
        pppppppuVar14 = (uint *******)(ulonglong)*puVar1;
        plVar18 = plVar23;
      } while (*(ushort *)((longlong)plVar23 + 0x62) <= *puVar1);
    }
    if (plVar12 == (longlong *)0x0) {
      pppppppuVar29 = (uint *******)((longlong)pppppppuVar14 + 1);
      pppppppuVar17 = (uint *******)plVar18[(longlong)pppppppuVar14 + 1];
      ppppppuVar4 = pppppppuVar17[-1];
    }
    else {
      plVar23 = plVar18 + (longlong)pppppppuVar14 + 0xe;
      plVar25 = plVar12;
      plVar19 = plVar18;
      if (((ulonglong)plVar12 & 7) != 0) {
        uVar26 = 0;
        do {
          plVar19 = (longlong *)*plVar23;
          plVar23 = plVar19 + 0xd;
          uVar26 = uVar26 + 1;
        } while (((ulonglong)plVar12 & 7) != uVar26);
        plVar25 = (longlong *)((longlong)plVar12 - uVar26);
      }
      if ((longlong *)0x7 < plVar12) {
        do {
          plVar19 = *(longlong **)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(*plVar23 + 0x68) + 0x68) + 0x68) + 0x68) +
                         0x68) + 0x68) + 0x68);
          plVar23 = plVar19 + 0xd;
          plVar25 = plVar25 + -1;
        } while (plVar25 != (longlong *)0x0);
      }
      pppppppuVar29 = (uint *******)0x0;
      pppppppuVar17 = (uint *******)plVar18[(longlong)pppppppuVar14 + 1];
      ppppppuVar4 = pppppppuVar17[-1];
      plVar18 = plVar19;
    }
    pppppppuVar14 = pppppppuVar29;
    if (((uint ******)0x3 < ppppppuVar4) &&
       (uVar16 = *(uint *)pppppppuVar17,
       uVar15 = _DAT_14306af20 >> 0x18 | (_DAT_14306af20 & 0xff0000) >> 8 |
                (_DAT_14306af20 & 0xff00) << 8 | _DAT_14306af20 << 0x18,
       uVar16 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 | uVar16 << 0x18,
       (uVar15 >= uVar16 && uVar15 != uVar16) == uVar15 < uVar16)) {
      pppppppuStack_c8 = (uint *******)((longlong)ppppppuVar4 - 4);
      pppppppuStack_c0 = (uint *******)0x0;
      uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
      pppppppuStack_b0 = (uint *******)0x2f0000002f;
      pppppppuStack_e0 = pppppppuVar17;
      pppppppuStack_d0 = (uint *******)((longlong)pppppppuVar17 + 4);
      pppppppuStack_b8 = pppppppuStack_c8;
      pppppppuStack_50 = pppppppuVar29;
      pdb_140c22af0(&pppppppuStack_100);
      pppppppuVar14 = pppppppuStack_50;
      if ((char)pppppppuStack_100 == '\0') goto LAB_140a27e20;
      pdb_141b4aca0(&pppppppuStack_100,(uint ******)((longlong)pppppppuVar17 + 4),pppppppuStack_f8);
      pppppppuVar17 = pppppppuStack_f0;
      pppppppuVar29 = pppppppuStack_f8;
      ppppppuStack_108 = (uint ******)pppppppuStack_100;
      pppppppuVar14 = pppppppuStack_50;
      if (SBORROW8(0,(longlong)pppppppuStack_100)) goto LAB_140a27e20;
      pppppppuVar14 = pppppppuStack_f8;
      ppppppuVar4 = (uint ******)pppppppuStack_f0;
      if (pppppppuStack_78 != (uint *******)0x0) {
        ppppppuStack_d8 = (uint ******)CONCAT44(uStack_6c,uStack_70);
        pppppppuStack_58 = pppppppuStack_78;
        do {
          uVar3 = *(ushort *)((longlong)pppppppuStack_58 + 0x21a);
          lVar28 = (ulonglong)((uint)uVar3 * 8) * 3;
          pppppppuVar27 = (uint *******)0xffffffffffffffff;
          pppppppuVar11 = pppppppuStack_58 + 1;
          do {
            pppppppuVar8 = (uint *******)(ulonglong)uVar3;
            pppppppuVar24 = pppppppuStack_b0;
            pppppppuVar7 = pppppppuStack_a0;
            pppppppuVar9 = pppppppuStack_58;
            if (lVar28 == 0) goto joined_r0x000140a28133;
            pppppppuStack_60 = pppppppuVar11 + 3;
            ppppppuVar5 = pppppppuVar11[2];
            pppppppuVar24 = (uint *******)ppppppuVar5;
            if (pppppppuVar17 < ppppppuVar5) {
              pppppppuVar24 = pppppppuVar17;
            }
            iVar10 = pub_142e32750(pppppppuVar29,pppppppuVar11[1],pppppppuVar24);
            lVar22 = (longlong)pppppppuVar17 - (longlong)ppppppuVar5;
            if (iVar10 != 0) {
              lVar22 = (longlong)iVar10;
            }
            pppppppuVar27 = (uint *******)((longlong)pppppppuVar27 + 1);
            lVar28 = lVar28 + -0x18;
            pppppppuVar11 = pppppppuStack_60;
          } while ((char)((0 < lVar22) - (lVar22 < 0)) == '\x01');
          pppppppuVar8 = pppppppuVar27;
          pppppppuVar24 = pppppppuStack_b0;
          pppppppuVar7 = pppppppuStack_a0;
          pppppppuVar9 = pppppppuStack_58;
          if (0 < lVar22 == lVar22 < 0) {
            pppppppuStack_c8 = pppppppuStack_58;
            pppppppuStack_c0 = (uint *******)ppppppuStack_d8;
            pppppppuStack_b0 = (uint *******)&pppppppuStack_78;
            pppppppuStack_d0 = (uint *******)0x8000000000000000;
            pppppppuStack_b8 = pppppppuVar27;
            if (ppppppuStack_108 != (uint ******)0x0) {
              pub_1406abac0((byte *)pppppppuVar29,(ulonglong)ppppppuStack_108,1);
            }
            goto LAB_140a281d3;
          }
joined_r0x000140a28133:
          pppppppuStack_b0 = pppppppuVar9;
          pppppppuStack_a0 = pppppppuVar8;
          if (ppppppuStack_d8 == (uint ******)0x0) goto LAB_140a28205;
          ppppppuStack_d8 = (uint ******)((longlong)ppppppuStack_d8 + -1);
          pppppppuStack_58 =
               (uint *******)pppppppuStack_b0[(longlong)((longlong)pppppppuStack_a0 + 0x44)];
          pppppppuStack_b0 = pppppppuVar24;
          pppppppuStack_a0 = pppppppuVar7;
        } while( true );
      }
      pppppppuStack_d0 = pppppppuStack_100;
      pppppppuStack_c8 = pppppppuStack_f8;
      pppppppuStack_c0 = pppppppuStack_f0;
      pppppppuStack_b8 = (uint *******)&pppppppuStack_78;
      pppppppuStack_b0 = (uint *******)0x0;
      goto LAB_140a281d3;
    }
    goto LAB_140a27e20;
  }
  pppppppuStack_b8 = (uint *******)CONCAT44(uStack_6c,uStack_70);
  ppppppuStack_90 = (uint ******)0x0;
  if (pppppppuStack_78 != (uint *******)0x0) {
    ppppppuStack_90 = ppppppuStack_68;
  }
  pppppppuStack_d0 = (uint *******)(ulonglong)(pppppppuStack_78 != (uint *******)0x0);
  pppppppuStack_c8 = (uint *******)0x0;
  pppppppuStack_c0 = pppppppuStack_78;
  uStack_a8 = 0;
  pppppppuStack_a0 = pppppppuStack_78;
  pppppppuStack_b0 = pppppppuStack_d0;
  pppppppuStack_98 = pppppppuStack_b8;
  pdb_1416003b0(&lStack_120,&pppppppuStack_d0);
  pdb_140d920f0(&pppppppuStack_d0,param_3,param_4);
  pppppppuStack_e8 = pppppppuStack_c8 + (longlong)pppppppuStack_c0 * 3;
  pppppppuStack_100 = pppppppuStack_c8;
  pppppppuStack_f8 = pppppppuStack_c8;
  pppppppuStack_f0 = pppppppuStack_d0;
  pppppppuVar14 = pppppppuStack_c8;
  if (pppppppuStack_c8 != pppppppuStack_e8) {
    do {
      pppppppuStack_f8 = pppppppuVar14 + 3;
      pppppppuVar29 = (uint *******)*pppppppuVar14;
      if (SBORROW8(0,(longlong)pppppppuVar29)) break;
      uStack_158 = SUB84(pppppppuVar14[1],0);
      uStack_154 = (undefined4)((ulonglong)pppppppuVar14[1] >> 0x20);
      uStack_70 = uStack_158;
      uStack_6c = uStack_154;
      pppppppuVar17 = (uint *******)&pppppppuStack_78;
      pppppppuStack_78 = pppppppuVar29;
      ppppppuStack_68 = pppppppuVar14[2];
      pppppppuStack_60 = pppppppuVar29;
      pdb_141b4a8e0(&pppppppuStack_d0);
      pppppppuVar14 = pppppppuStack_d0;
      if (SBORROW8(0,(longlong)pppppppuStack_d0)) {
        uVar13 = pdb_14043b7e0(&pppppppuStack_78);
        if ((longlong)pppppppuVar17 < 0) {
          pppppppuVar29 = (uint *******)0x0;
          pppppppuVar17 = pppppppuStack_58;
LAB_140a28537:
          pppppppuStack_58 = pppppppuVar17;
          pdb_142dc7e2a(pppppppuVar29,pppppppuStack_58);
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        pppppppuStack_e0 = pppppppuVar14;
        if (pppppppuVar17 == (uint *******)0x0) {
          pppppppuStack_50 = (uint *******)0x0;
          pppppppuStack_58 = (uint *******)0x1;
          pppppppuVar29 = (uint *******)0x1;
          pppppppuVar14 = (uint *******)0x1;
          pppppppuVar17 = (uint *******)0x0;
        }
        else {
          pdb_14007ee60();
          pppppppuVar29 = (uint *******)0x1;
          pppppppuVar14 = (uint *******)pub_1406abab0((ulonglong)pppppppuVar17,1);
          if (pppppppuVar14 == (uint *******)0x0) goto LAB_140a28537;
          pub_142e32760(pppppppuVar14,uVar13,pppppppuVar17);
          pppppppuStack_58 = pppppppuVar14;
          pppppppuStack_50 = pppppppuVar17;
        }
      }
      else {
        pppppppuStack_e0 = pppppppuStack_d0;
        pppppppuStack_50 = pppppppuStack_d0;
        pppppppuVar29 = (uint *******)0x0;
        pppppppuVar14 = pppppppuStack_c8;
        pppppppuVar17 = pppppppuStack_c0;
      }
      lVar28 = lStack_110;
      lVar21 = lStack_118;
      lVar22 = lStack_110 * 0x58;
      if (lStack_110 != 0) {
        lVar20 = 0;
        do {
          if (((*(int *)(lVar21 + lVar20) == (int)pppppppuVar29) &&
              (*(uint ********)(lVar21 + 0x18 + lVar20) == pppppppuVar17)) &&
             (iVar10 = pub_142e32750(*(undefined8 *)(lVar21 + 0x10 + lVar20),pppppppuVar14,
                                     pppppppuVar17), pppppppuVar11 = pppppppuStack_60, iVar10 == 0))
          {
            pppppppuStack_e0 = (uint *******)-(longlong)pppppppuStack_e0;
            *(undefined1 *)(lVar21 + 0x50 + lVar20) = 1;
            if (pppppppuStack_50 != (uint *******)0x0) {
              pub_1406abac0((byte *)pppppppuVar14,(ulonglong)pppppppuStack_50,1);
            }
            goto LAB_140a284df;
          }
          lVar20 = lVar20 + 0x58;
        } while (lVar22 - lVar20 != 0);
      }
      pppppppuStack_c8 = pppppppuStack_50;
      pppppppuStack_b0 = (uint *******)0x0;
      uStack_a8 = 8;
      pppppppuStack_a0 = (uint *******)0x0;
      uStack_80 = 1;
      pppppppuStack_98 = (uint *******)0x8000000000000000;
      pppppppuStack_d0 = pppppppuVar29;
      pppppppuStack_c0 = pppppppuVar14;
      pppppppuStack_b8 = pppppppuVar17;
      if (lVar28 == lStack_120) {
        pdb_142d7ebb0(&lStack_120);
        lVar21 = lStack_118;
      }
      *(ulonglong *)(lVar21 + 0x50 + lVar22) = CONCAT71(uStack_7f,uStack_80);
      puVar2 = (undefined8 *)(lVar21 + 0x40 + lVar22);
      *puVar2 = ppppppuStack_90;
      puVar2[1] = uStack_88;
      puVar2 = (undefined8 *)(lVar21 + 0x30 + lVar22);
      *puVar2 = pppppppuStack_a0;
      puVar2[1] = pppppppuStack_98;
      puVar2 = (undefined8 *)(lVar21 + 0x20 + lVar22);
      *puVar2 = pppppppuStack_b0;
      puVar2[1] = uStack_a8;
      puVar2 = (undefined8 *)(lVar21 + 0x10 + lVar22);
      *puVar2 = pppppppuStack_c0;
      puVar2[1] = pppppppuStack_b8;
      *(undefined8 *)(lVar21 + lVar22) = pppppppuStack_d0;
      ((undefined8 *)(lVar21 + lVar22))[1] = pppppppuStack_c8;
      lStack_110 = lVar28 + 1;
      pppppppuVar11 = pppppppuStack_60;
LAB_140a284df:
      if (pppppppuVar11 != (uint *******)0x0) {
        pub_1406abac0((byte *)CONCAT44(uStack_6c,uStack_70),(ulonglong)pppppppuVar11,1);
      }
      pppppppuVar14 = pppppppuStack_f8;
    } while (pppppppuStack_f8 != pppppppuStack_e8);
  }
  if (pppppppuStack_e8 != pppppppuStack_f8) {
    uVar26 = (ulonglong)((longlong)pppppppuStack_e8 - (longlong)pppppppuStack_f8) / 0x18;
    pppppppuVar14 = pppppppuStack_f8 + 1;
    do {
      if (pppppppuVar14[-1] != (uint ******)0x0) {
        pub_1406abac0((byte *)*pppppppuVar14,(ulonglong)pppppppuVar14[-1],1);
      }
      pppppppuVar14 = pppppppuVar14 + 3;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  if (pppppppuStack_f0 != (uint *******)0x0) {
    pub_1406abac0((byte *)pppppppuStack_100,(longlong)pppppppuStack_f0 * 0x18,8);
  }
  param_1[2] = lStack_110;
  *param_1 = lStack_120;
  param_1[1] = lStack_118;
  return;
LAB_140a28205:
  uStack_a8 = 0;
  ppppppuStack_d8 = (uint ******)0x0;
  pppppppuStack_d0 = (uint *******)ppppppuStack_108;
  pppppppuStack_c8 = pppppppuVar14;
  pppppppuStack_c0 = (uint *******)ppppppuVar4;
  pppppppuStack_b8 = (uint *******)&pppppppuStack_78;
  pppppppuStack_58 = pppppppuStack_b0;
LAB_140a281d3:
  plVar12 = (longlong *)pdb_140c33710(&pppppppuStack_d0);
  lVar28 = plVar12[2];
  if (lVar28 == *plVar12) {
    pdb_142d7e8a0(plVar12);
  }
  *(uint ********)(plVar12[1] + lVar28 * 8) = pppppppuStack_e0;
  plVar12[2] = lVar28 + 1;
  pppppppuVar14 = pppppppuStack_50;
LAB_140a27e20:
  bVar31 = true;
  plVar12 = (longlong *)0x0;
  goto LAB_140a27e24;
}

