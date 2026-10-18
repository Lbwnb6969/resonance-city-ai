// VA 0x14170a040, PDB extent 2585 bytes
// png::encoder::Writer::write_image_data<ref_mut$<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::encoder::Writer::write_image_data<ref_mut$<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2585 */

int * pdb_14170a040(int *param_1,longlong param_2,byte *param_3,ulonglong param_4)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  byte *pbVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  byte *pbVar15;
  ulonglong uVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
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
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  byte *pbStack_110;
  uint *puStack_108;
  uint *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  uint *puStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  int *piStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  byte bStack_59;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if ((*(char *)(param_2 + 0x42) == '\x03') && (*(char *)(param_2 + 0x40) == '\0')) {
    param_1[0] = 3;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 3;
    return param_1;
  }
  pcVar1 = (char *)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x46) != '\0') {
    if (*pcVar1 == '\0') {
      if (*(longlong *)(param_2 + 8) != 0) goto LAB_14170a11c;
    }
    else if (*(char *)(param_2 + 0x35) == '\x02') {
LAB_14170a11c:
      param_1[0] = 3;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 7;
      return param_1;
    }
  }
  puVar11 = (uint *)(param_2 + 0x3c);
  puVar13 = (undefined4 *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x35) != '\x02') {
    puVar13 = (undefined4 *)(param_2 + 0x20);
    puVar11 = (uint *)(param_2 + 0x24);
  }
  uVar2 = *puVar11;
  piStack_78 = param_1;
  lVar7 = pdb_140dbda40(pcVar1,*puVar13);
  uVar16 = lVar7 - 1;
  lVar7 = uVar2 * uVar16;
  if (lVar7 - param_4 == 0) {
    if ((longlong)uVar16 < 0) {
      lVar7 = 0;
    }
    else {
      puStack_100 = (uint *)(param_2 + 0x1c);
      lStack_90 = param_2;
      uStack_70 = uVar16;
      if (uVar16 == 0) {
        pbStack_80 = (byte *)0x1;
        pbStack_88 = (byte *)0x1;
LAB_14170a1bd:
        uStack_f8 = (uint *)0x0;
        uStack_f0 = 1;
        uStack_e8 = 0;
        pdb_1402af8b0(&uStack_158,&uStack_f8,
                      *(undefined4 *)(&UNK_14332a0fc + (ulonglong)*(byte *)(lStack_90 + 0x41) * 4));
        uStack_49 = 1;
        uVar5 = pdb_140dbd8a0(pcVar1);
        pbStack_68 = (byte *)CONCAT71(pbStack_68._1_7_,uVar5);
        if (uStack_70 == 0) {
          uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143329de4,0x37,&UNK_143329e58);
        }
        puStack_98 = (uint *)CONCAT71(puStack_98._1_7_,*(undefined1 *)(lStack_90 + 0x44));
        puStack_108 = (uint *)CONCAT71(puStack_108._1_7_,*(undefined1 *)(lStack_90 + 0x47));
        uVar16 = uStack_70;
        pbVar12 = pbStack_80;
LAB_14170a240:
        uVar4 = uStack_70;
        pbVar15 = pbStack_88;
        if (param_4 != 0) {
          uVar14 = param_4;
          if (uStack_70 < param_4) {
            uVar14 = uStack_70;
          }
          if (uStack_70 <= param_4) {
            pbStack_58 = param_3;
            pub_142e32760(pbStack_88,param_3,uStack_70);
            uStack_49 = 1;
            bStack_59 = pdb_140db7510((ulonglong)puStack_108 & 0xff,(ulonglong)puStack_98 & 0xff,
                                      (ulonglong)pbStack_68 & 0xff,pbVar12,uVar16,pbVar15,uVar4);
            param_3 = pbStack_58 + uVar14;
            param_4 = param_4 - uVar14;
            pbVar12 = &bStack_59;
LAB_14170a30c:
            uStack_49 = 1;
            pdb_140c27f90(&uStack_f8,&uStack_158,pbVar12,1);
            uStack_b0 = (ulonglong)((char)uStack_f0 == '\x03');
            uStack_a8 = uStack_f8;
            if ((char)uStack_f0 == '\x03') {
              switch((uint)uStack_f8 & 3) {
              case 0:
                bVar6 = (byte)uStack_f8[4];
                break;
              case 1:
                bVar6 = *(byte *)((longlong)uStack_f8 + 0xf);
                break;
              case 2:
                goto code_r0x00014170a3a0;
              case 3:
                bVar6 = (byte)((ulonglong)uStack_f8 >> 0x20);
                if (0x29 < (uint)((ulonglong)uStack_f8 >> 0x20)) {
                  bVar6 = 0x2a;
                }
              }
              if (bVar6 == 0x23) {
                uStack_49 = 1;
                pdb_1404b38e0(&uStack_a8);
                goto LAB_14170a30c;
              }
code_r0x00014170a3a0:
              puVar11 = uStack_f8;
              if (uStack_f8 == (uint *)0x0) goto LAB_14170a3a9;
            }
            else {
              if (uStack_f8 != (uint *)0x0) {
                if (uStack_f8 < (uint *)0x2) goto code_r0x00014170a38b;
                uStack_49 = 1;
                pdb_142dc8420(uStack_f8,1,1,&UNK_1433274a0);
                goto LAB_14170a84b;
              }
              puVar11 = (uint *)&UNK_143327418;
            }
            piStack_78[0] = 2;
            piStack_78[1] = 0;
            *(uint **)(piStack_78 + 2) = puVar11;
            goto LAB_14170a6da;
          }
          uStack_49 = 1;
          pdb_142dc85e0(uStack_70,uVar14,&UNK_143329ea0);
          goto LAB_14170a84b;
        }
        uStack_b8 = uStack_118;
        uStack_c8 = uStack_128;
        uStack_c4 = uStack_124;
        uStack_c0 = uStack_120;
        uStack_bc = uStack_11c;
        uStack_d8 = uStack_138;
        uStack_d4 = uStack_134;
        uStack_d0 = uStack_130;
        uStack_cc = uStack_12c;
        uStack_e8 = CONCAT44(uStack_144,uStack_148);
        uStack_e0 = (byte *)CONCAT44(uStack_13c,uStack_140);
        uStack_f8 = (uint *)CONCAT44(uStack_154,uStack_158);
        uStack_f0 = CONCAT44(uStack_14c,uStack_150);
        pbVar8 = (byte *)pdb_140c28740(&uStack_f8);
        pbVar15 = uStack_e0;
        if (pbVar8 == (byte *)0x0) {
          uStack_e0 = (byte *)0x8000000000000000;
          if (SBORROW8(0,(longlong)pbVar15)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1433282a8);
          }
          pbStack_58 = pbVar15;
          pbStack_68 = (byte *)CONCAT44(uStack_d4,uStack_d8);
          pbVar12 = (byte *)CONCAT44(uStack_cc,uStack_d0);
        }
        else {
          pbStack_58 = (byte *)0x8000000000000000;
          pbStack_68 = pbVar8;
        }
        uStack_49 = 0;
        pdb_14099eb80(&uStack_f8);
        piVar17 = piStack_78;
        lVar7 = lStack_90;
        if (SBORROW8(0,(longlong)pbStack_58)) {
          piStack_78[0] = 2;
          piStack_78[1] = 0;
          *(byte **)(piStack_78 + 2) = pbStack_68;
          uVar16 = uStack_70;
          goto LAB_14170a6f8;
        }
        if (*(char *)(lStack_90 + 0x35) == '\x02') {
          pdb_14170b480(&uStack_f8,lStack_90,pbStack_68,pbVar12);
LAB_14170a50a:
          if ((int)uStack_f8 == 6) goto LAB_14170a517;
          *(undefined8 *)(piVar17 + 4) = uStack_e8;
          iVar18 = (int)uStack_f8;
          iVar19 = uStack_f8._4_4_;
          iVar20 = (int)uStack_f0;
          iVar21 = uStack_f0._4_4_;
        }
        else {
          if ((*(char *)(lStack_90 + 0x45) == '\x01') && (*(longlong *)(lStack_90 + 8) == 0)) {
            pdb_14170b480(&uStack_f8,lStack_90,pbStack_68,pbVar12);
            goto LAB_14170a50a;
          }
          uStack_f8 = *(uint **)puStack_100;
          uStack_f0 = *(undefined8 *)(puStack_100 + 2);
          uStack_e8 = *(undefined8 *)(puStack_100 + 4);
          uStack_e0 = (byte *)CONCAT44(uStack_e0._4_4_,puStack_100[6]);
          pdb_141a36cf0(&uStack_b0,&uStack_f8,lStack_90);
          if ((int)uStack_b0 == 6) {
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            *(int *)(lVar7 + 0x48) = *(int *)(lVar7 + 0x48) + 1;
            if (*(longlong *)(lVar7 + 8) == 0) {
              pdb_14170b480(&uStack_f8,lVar7,pbStack_68,pbVar12);
              goto LAB_14170a50a;
            }
            pbVar15 = (byte *)0x7ffffffb;
            if (pbVar12 < (byte *)0x7ffffffb) {
              pbVar15 = pbVar12;
            }
            pdb_14170c080(&uStack_b0,pbVar15 + 4);
            puStack_108 = uStack_a8 + 1;
            puVar11 = uStack_a8;
            pbVar15 = pbStack_68;
            goto joined_r0x00014170a611;
          }
          *(ulonglong *)(piVar17 + 4) = uStack_a0;
          iVar18 = (int)uStack_b0;
          iVar19 = uStack_b0._4_4_;
          iVar20 = (int)uStack_a8;
          iVar21 = uStack_a8._4_4_;
        }
        *piVar17 = iVar18;
        piVar17[1] = iVar19;
        piVar17[2] = iVar20;
        piVar17[3] = iVar21;
        goto LAB_14170a73c;
      }
      pdb_14007ee60();
      lVar7 = 1;
      pbStack_80 = pub_1406abae0(uVar16,1);
      if (pbStack_80 != (byte *)0x0) {
        pdb_14007ee60();
        pbStack_88 = pub_1406abae0(uVar16,1);
        if (pbStack_88 == (byte *)0x0) {
          pbStack_110 = pbStack_80;
          pdb_142dc7e2a(1,uVar16);
LAB_14170a84b:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        goto LAB_14170a1bd;
      }
    }
    pdb_142dc7e2a(lVar7,uVar16);
  }
  piStack_78[0] = 0;
  piStack_78[1] = 0;
  *(longlong *)(piStack_78 + 2) = lVar7;
  *(ulonglong *)(piStack_78 + 4) = param_4;
  return piStack_78;
code_r0x00014170a38b:
  pbVar12 = pbVar12 + (longlong)uStack_f8;
  if (uStack_f8 == (uint *)0x1) goto LAB_14170a3a9;
  goto LAB_14170a30c;
LAB_14170a3a9:
  uStack_49 = 1;
  lVar7 = pdb_141705550(&uStack_158,pbStack_88,uStack_70);
  uVar16 = uVar14;
  pbVar12 = pbStack_58;
  if (lVar7 != 0) goto code_r0x00014170a3da;
  goto LAB_14170a240;
code_r0x00014170a3da:
  piStack_78[0] = 2;
  piStack_78[1] = 0;
  *(longlong *)(piStack_78 + 2) = lVar7;
LAB_14170a6da:
  piVar17 = piStack_78;
  pdb_14099eb80(&uStack_158);
  uVar16 = uStack_70;
  goto LAB_14170a6f8;
joined_r0x00014170a611:
  puStack_98 = puVar11;
  if (pbVar12 == (byte *)0x0) goto LAB_14170a690;
  pbVar8 = (byte *)0x7ffffffb;
  if (pbVar12 < (byte *)0x7ffffffb) {
    pbVar8 = pbVar12;
  }
  if (uStack_a0 < 4) {
    pdb_142dc8420(0,4,uStack_a0,&UNK_143329e70);
    goto LAB_14170a84b;
  }
  uVar2 = *puStack_100;
  *puVar11 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  if ((byte *)(uStack_a0 - 4) < pbVar8) {
    pdb_142dc8420(0,pbVar8,(byte *)(uStack_a0 - 4),&UNK_143329e88);
    goto LAB_14170a84b;
  }
  pub_142e32760(puStack_108,pbVar15,pbVar8);
  pdb_141709d80(&uStack_f8,lStack_90,0x54416466,puVar11,pbVar8 + 4);
  piVar17 = piStack_78;
  if ((int)uStack_f8 != 6) {
    *(undefined8 *)(piStack_78 + 4) = uStack_e8;
    *(uint **)piStack_78 = uStack_f8;
    *(undefined8 *)(piStack_78 + 2) = uStack_f0;
    if (uStack_b0 != 0) {
      pub_1406abac0((byte *)puStack_98,uStack_b0,1);
    }
LAB_14170a73c:
    uVar16 = uStack_70;
    if (pbStack_58 != (byte *)0x0) {
      pub_1406abac0(pbStack_68,(ulonglong)pbStack_58,1);
      uVar16 = uStack_70;
    }
    goto LAB_14170a6f8;
  }
  pbVar15 = pbVar15 + (longlong)pbVar8;
  pbVar12 = pbVar12 + -(longlong)pbVar8;
  *puStack_100 = *puStack_100 + 1;
  puVar11 = puStack_98;
  goto joined_r0x00014170a611;
LAB_14170a690:
  lVar7 = lStack_90;
  piVar17 = piStack_78;
  if (uStack_b0 != 0) {
    pub_1406abac0((byte *)puVar11,uStack_b0,1);
    lVar7 = lStack_90;
    piVar17 = piStack_78;
  }
LAB_14170a517:
  uVar16 = uStack_70;
  lVar9 = *(longlong *)(lVar7 + 8) + 1;
  lVar10 = -1;
  if (lVar9 != 0) {
    lVar10 = lVar9;
  }
  *(longlong *)(lVar7 + 8) = lVar10;
  if ((*(char *)(lVar7 + 0x10) != '\0') && (*(uint *)(lVar7 + 0x14) <= *(uint *)(lVar7 + 0x48))) {
    *(undefined1 *)(lVar7 + 0x35) = 2;
  }
  piVar17[0] = 6;
  piVar17[1] = 0;
  if (pbStack_58 != (byte *)0x0) {
    pub_1406abac0(pbStack_68,(ulonglong)pbStack_58,1);
  }
LAB_14170a6f8:
  pub_1406abac0(pbStack_88,uVar16,1);
  pub_1406abac0(pbStack_80,uVar16,1);
  return piVar17;
}

