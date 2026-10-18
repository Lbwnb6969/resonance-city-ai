// VA 0x1426ca390, PDB extent 2929 bytes
// png::encoder::Writer::write_image_data<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::encoder::Writer::write_image_data<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 2929 */

int * pdb_1426ca390(int *param_1,longlong *param_2,uint *param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  uint *puStack_120;
  uint *puStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  longlong *plStack_98;
  byte *pbStack_90;
  int *piStack_88;
  uint *puStack_80;
  undefined4 uStack_74;
  uint *puStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if ((*(char *)((longlong)param_2 + 0x42) == '\x03') && ((char)param_2[8] == '\0')) {
    param_1[0] = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 3;
    return param_1;
  }
  plVar11 = param_2 + 2;
  if (*(char *)((longlong)param_2 + 0x46) != '\0') {
    if ((char)*plVar11 == '\0') {
      if (param_2[1] != 0) goto LAB_1426ca46c;
    }
    else if (*(char *)((longlong)param_2 + 0x35) == '\x02') {
LAB_1426ca46c:
      param_1[0] = 3;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 7;
      return param_1;
    }
  }
  puVar9 = (uint *)((longlong)param_2 + 0x3c);
  plVar12 = param_2 + 7;
  if (*(char *)((longlong)param_2 + 0x35) != '\x02') {
    plVar12 = param_2 + 4;
    puVar9 = (uint *)((longlong)param_2 + 0x24);
  }
  uVar4 = *puVar9;
  piStack_88 = param_1;
  lVar5 = pdb_140dbda40(plVar11,(int)*plVar12);
  uVar14 = lVar5 - 1;
  lVar5 = uVar4 * uVar14;
  if (lVar5 - param_4 == 0) {
    if ((longlong)uVar14 < 0) {
      lVar5 = 0;
    }
    else {
      puStack_f0 = (uint *)((longlong)param_2 + 0x1c);
      plStack_98 = param_2;
      uStack_60 = uVar14;
      if (uVar14 == 0) {
        puStack_80 = (uint *)0x1;
        pbStack_90 = (byte *)0x1;
LAB_1426ca50d:
        uStack_e8 = (undefined *)0x0;
        uStack_e0 = (uint *)0x1;
        uStack_d8 = 0;
        pdb_1402af8b0(&uStack_168,&uStack_e8,
                      *(undefined4 *)
                       (&UNK_143581650 + (ulonglong)*(byte *)((longlong)plStack_98 + 0x41) * 4));
        uStack_49 = 1;
        uVar2 = pdb_140dbd8a0(plVar11);
        uStack_68 = CONCAT71(uStack_68._1_7_,uVar2);
        if (uStack_60 == 0) {
          uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143581578,0x37,&UNK_1435815f0);
        }
        pbStack_58 = (byte *)CONCAT71(pbStack_58._1_7_,*(undefined1 *)((longlong)plStack_98 + 0x44))
        ;
        uStack_a0 = CONCAT71(uStack_a0._1_7_,*(undefined1 *)((longlong)plStack_98 + 0x47));
        uVar14 = uStack_60;
        puVar9 = puStack_80;
LAB_1426ca590:
        uVar8 = uStack_60;
        pbVar6 = pbStack_90;
        if (param_4 != 0) {
          uVar13 = param_4;
          if (uStack_60 < param_4) {
            uVar13 = uStack_60;
          }
          if (uStack_60 <= param_4) {
            puStack_70 = param_3;
            pub_142e32760(pbStack_90,param_3,uStack_60);
            uStack_49 = 1;
            uVar2 = pdb_140db7510(uStack_a0 & 0xff,(ulonglong)pbStack_58 & 0xff,uStack_68 & 0xff,
                                  puVar9,uVar14,pbVar6,uVar8);
            param_3 = (uint *)((longlong)puStack_70 + uVar13);
            param_4 = param_4 - uVar13;
            uStack_74 = CONCAT31(uStack_74._1_3_,uVar2);
            puVar10 = &uStack_74;
LAB_1426ca633:
            uStack_49 = 1;
            pdb_1426c9a40(&uStack_e8,&uStack_168,puVar10,1);
            uStack_108 = (ulonglong)((char)uStack_e0 == '\x03');
            uStack_100 = uStack_e8;
            if ((char)uStack_e0 == '\x03') {
              switch((uint)uStack_e8 & 3) {
              case 0:
                cVar3 = uStack_e8[0x10];
                break;
              case 1:
                cVar3 = uStack_e8[0xf];
                break;
              case 2:
                goto code_r0x0001426ca6f0;
              case 3:
                cVar3 = (char)((ulonglong)uStack_e8 >> 0x20);
                if (0x29 < (uint)((ulonglong)uStack_e8 >> 0x20)) {
                  cVar3 = '*';
                }
              }
              if (cVar3 == '#') {
                uStack_49 = 1;
                pdb_1404b38e0(&uStack_100);
                goto LAB_1426ca633;
              }
code_r0x0001426ca6f0:
              puVar7 = uStack_e8;
              if (uStack_e8 == (undefined *)0x0) goto LAB_1426ca6f9;
            }
            else {
              if (uStack_e8 != (undefined *)0x0) {
                if (uStack_e8 < (undefined *)0x2) goto code_r0x0001426ca6de;
                uStack_49 = 1;
                pdb_142dc8420(uStack_e8,1,1,&UNK_1436414d8);
                goto LAB_1426cacf8;
              }
              puVar7 = &UNK_143641450;
            }
            piStack_88[0] = 2;
            piStack_88[1] = 0;
            *(undefined **)(piStack_88 + 2) = puVar7;
            goto LAB_1426cab92;
          }
          uStack_49 = 1;
          pdb_142dc85e0(uStack_60,uVar13,&UNK_143581638);
          goto LAB_1426cacf8;
        }
        uStack_a8 = uStack_128;
        uStack_b8 = uStack_138;
        uStack_b4 = uStack_134;
        uStack_b0 = uStack_130;
        uStack_ac = uStack_12c;
        uStack_c8 = uStack_148;
        uStack_c4 = uStack_144;
        uStack_c0 = uStack_140;
        uStack_bc = uStack_13c;
        uStack_d8 = CONCAT44(uStack_154,uStack_158);
        uStack_d0 = CONCAT44(uStack_14c,uStack_150);
        uStack_e8 = (undefined *)CONCAT44(uStack_164,uStack_168);
        uStack_e0 = (uint *)CONCAT44(uStack_15c,uStack_160);
        pbVar6 = (byte *)pdb_1426c9ce0(&uStack_e8);
        uVar8 = uStack_d0;
        if (pbVar6 == (byte *)0x0) {
          uStack_d0 = 0x8000000000000000;
          if (SBORROW8(0,uVar8)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143641548);
          }
          uStack_68 = uVar8;
          pbStack_58 = (byte *)CONCAT44(uStack_c4,uStack_c8);
          uVar14 = CONCAT44(uStack_bc,uStack_c0);
        }
        else {
          uStack_68 = 0x8000000000000000;
          pbStack_58 = pbVar6;
        }
        uStack_49 = 0;
        pdb_141d560c0(&uStack_e8);
        piVar15 = piStack_88;
        plVar11 = plStack_98;
        if (SBORROW8(0,uStack_68)) {
          piStack_88[0] = 2;
          piStack_88[1] = 0;
          *(byte **)(piStack_88 + 2) = pbStack_58;
          uVar8 = uStack_60;
          goto LAB_1426cabb0;
        }
        if (*(char *)((longlong)plStack_98 + 0x35) == '\x02') {
          pdb_1426caf10(&uStack_e8,plStack_98,pbStack_58,uVar14);
LAB_1426ca85d:
          uVar8 = uStack_60;
          if ((int)uStack_e8 == 6) goto LAB_1426ca86a;
          *(ulonglong *)(piVar15 + 4) = uStack_d8;
          iVar16 = (int)uStack_e8;
          iVar17 = uStack_e8._4_4_;
          iVar18 = (int)uStack_e0;
          iVar19 = uStack_e0._4_4_;
        }
        else {
          if ((*(char *)((longlong)plStack_98 + 0x45) == '\x01') && (plStack_98[1] == 0)) {
            pdb_1426caf10(&uStack_e8,plStack_98,pbStack_58,uVar14);
            goto LAB_1426ca85d;
          }
          uStack_e8 = *(undefined **)puStack_f0;
          uStack_e0 = *(uint **)(puStack_f0 + 2);
          uStack_d8 = *(ulonglong *)(puStack_f0 + 4);
          uStack_d0 = CONCAT44(uStack_d0._4_4_,puStack_f0[6]);
          pdb_142ad7f90(&uStack_108,&uStack_e8,plStack_98);
          if ((int)uStack_108 == 6) {
            *(int *)((longlong)plVar11 + 0x1c) = *(int *)((longlong)plVar11 + 0x1c) + 1;
            *(int *)(plVar11 + 9) = (int)plVar11[9] + 1;
            if (plVar11[1] == 0) {
              pdb_1426caf10(&uStack_e8,plVar11,pbStack_58,uVar14);
              goto LAB_1426ca85d;
            }
            uVar8 = 0x7ffffffb;
            if (uVar14 < 0x7ffffffb) {
              uVar8 = uVar14;
            }
            pdb_14170c080(&uStack_e8,uVar8 + 4);
            uStack_110 = uStack_d8 - 4;
            puStack_120 = uStack_e0 + 1;
            uStack_a0 = uStack_d8;
            puStack_70 = uStack_e0;
            uVar8 = uStack_60;
            pbVar6 = pbStack_58;
            goto joined_r0x0001426ca972;
          }
          *(undefined8 *)(piVar15 + 4) = uStack_f8;
          iVar16 = (int)uStack_108;
          iVar17 = uStack_108._4_4_;
          iVar18 = (int)uStack_100;
          iVar19 = uStack_100._4_4_;
        }
        *piVar15 = iVar16;
        piVar15[1] = iVar17;
        piVar15[2] = iVar18;
        piVar15[3] = iVar19;
        uVar8 = uStack_60;
        if (uStack_68 != 0) {
          pub_1406abac0(pbStack_58,uStack_68,1);
          uVar8 = uStack_60;
        }
        goto LAB_1426cabb0;
      }
      pdb_14007ee60();
      lVar5 = 1;
      puStack_80 = (uint *)pub_1406abae0(uVar14,1);
      if (puStack_80 != (uint *)0x0) {
        pdb_14007ee60();
        pbStack_90 = pub_1406abae0(uVar14,1);
        if (pbStack_90 == (byte *)0x0) {
          puStack_118 = puStack_80;
          pdb_142dc7e2a(1,uVar14);
LAB_1426cacf8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        goto LAB_1426ca50d;
      }
    }
    pdb_142dc7e2a(lVar5,uVar14);
  }
  piStack_88[0] = 0;
  piStack_88[1] = 0;
  *(longlong *)(piStack_88 + 2) = lVar5;
  *(ulonglong *)(piStack_88 + 4) = param_4;
  return piStack_88;
code_r0x0001426ca6de:
  puVar10 = (undefined4 *)((longlong)puVar10 + (longlong)uStack_e8);
  if (uStack_e8 == (undefined *)0x1) goto LAB_1426ca6f9;
  goto LAB_1426ca633;
LAB_1426ca6f9:
  uStack_49 = 1;
  lVar5 = pdb_142ad7dd0(&uStack_168,pbStack_90,uStack_60);
  uVar14 = uVar13;
  puVar9 = puStack_70;
  if (lVar5 != 0) goto code_r0x0001426ca72a;
  goto LAB_1426ca590;
code_r0x0001426ca72a:
  piStack_88[0] = 2;
  piStack_88[1] = 0;
  *(longlong *)(piStack_88 + 2) = lVar5;
LAB_1426cab92:
  piVar15 = piStack_88;
  pdb_141d560c0(&uStack_168);
  uVar8 = uStack_60;
  goto LAB_1426cabb0;
joined_r0x0001426ca972:
  uStack_60 = uVar8;
  if (uVar14 == 0) goto LAB_1426cac14;
  uVar8 = 0x7ffffffb;
  if (uVar14 < 0x7ffffffb) {
    uVar8 = uVar14;
  }
  if (uStack_a0 < 4) {
    pdb_142dc8420(0,4,uStack_a0,&UNK_143581608);
    goto LAB_1426cacf8;
  }
  uVar4 = *puStack_f0;
  *puStack_70 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if (uStack_110 < uVar8) {
    pdb_142dc8420(0,uVar8,uStack_110,&UNK_143581620);
    goto LAB_1426cacf8;
  }
  pub_142e32760(puStack_120,pbVar6,uVar8);
  uStack_74 = 0x54416466;
  plVar11 = (longlong *)*plVar11;
  lVar5 = plVar11[2];
  if ((ulonglong)(*plVar11 - lVar5) < 4) {
    pdb_142d7f1b0(plVar11,lVar5,4,1,1);
    lVar5 = plVar11[2];
  }
  uVar13 = uVar8 + 4;
  uVar4 = (uint)uVar13;
  *(uint *)(plVar11[1] + lVar5) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  lVar5 = lVar5 + 4;
  plVar11[2] = lVar5;
  if ((ulonglong)(*plVar11 - lVar5) < 4) {
    pdb_142d7f1b0(plVar11,lVar5,4,1,1);
    lVar5 = plVar11[2];
  }
  *(undefined4 *)(plVar11[1] + lVar5) = 0x54416466;
  lVar5 = lVar5 + 4;
  plVar11[2] = lVar5;
  if ((ulonglong)(*plVar11 - lVar5) < uVar13) {
    pdb_142d7f1b0(plVar11,lVar5,uVar13,1,1);
    lVar5 = plVar11[2];
  }
  pub_142e32760(plVar11[1] + lVar5,puStack_70,uVar13);
  plVar11[2] = lVar5 + uVar13;
  pdb_140dbfa40(&uStack_108);
  pdb_140dbfd20(&uStack_108,&uStack_74,4);
  pdb_140dbfd20(&uStack_108,puStack_70,uVar13);
  uVar4 = uStack_108._4_4_;
  lVar5 = plVar11[2];
  if ((ulonglong)(*plVar11 - lVar5) < 4) {
    pdb_142d7f1b0(plVar11,lVar5,4,1,1);
    lVar5 = plVar11[2];
  }
  pbVar6 = pbVar6 + uVar8;
  uVar14 = uVar14 - uVar8;
  *(uint *)(plVar11[1] + lVar5) =
       uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  plVar11[2] = lVar5 + 4;
  *puStack_f0 = *puStack_f0 + 1;
  plVar11 = plStack_98;
  piVar15 = piStack_88;
  uVar8 = uStack_60;
  goto joined_r0x0001426ca972;
LAB_1426cac14:
  if (uStack_e8 != (undefined *)0x0) {
    pub_1406abac0((byte *)puStack_70,(ulonglong)uStack_e8,1);
  }
LAB_1426ca86a:
  lVar5 = -1;
  if (plVar11[1] + 1 != 0) {
    lVar5 = plVar11[1] + 1;
  }
  plVar11[1] = lVar5;
  if (((char)plVar11[2] != '\0') && (*(uint *)((longlong)plVar11 + 0x14) <= *(uint *)(plVar11 + 9)))
  {
    *(undefined1 *)((longlong)plVar11 + 0x35) = 2;
  }
  piVar15[0] = 6;
  piVar15[1] = 0;
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_58,uStack_68,1);
  }
LAB_1426cabb0:
  pub_1406abac0(pbStack_90,uVar8,1);
  pub_1406abac0((byte *)puStack_80,uVar8,1);
  return piVar15;
}

