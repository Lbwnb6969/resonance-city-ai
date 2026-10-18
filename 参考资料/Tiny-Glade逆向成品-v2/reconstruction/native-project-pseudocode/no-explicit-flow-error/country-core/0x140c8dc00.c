// VA 0x140c8dc00, PDB extent 2758 bytes
// country_core::resources::clutter_packs::verify_pack_checksums
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_packs::verify_pack_checksums
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 2758 */

undefined8 * pdb_140c8dc00(undefined8 *param_1,code *param_2,code *param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  code *pcVar5;
  code *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  code *pcVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  byte *pbStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code **ppcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  code **ppcStack_b8;
  code *pcStack_b0;
  code **ppcStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  code *pcStack_68;
  longlong lStack_60;
  undefined1 uStack_51;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcStack_c0 = param_2;
  pcStack_80 = param_3;
  pdb_140f3e9e0(&uStack_158);
  pbStack_118 = pbStack_150;
  pdb_140f55fb0(&uStack_98,pbStack_150,uStack_148);
  if (SBORROW8(0,(longlong)uStack_98)) {
    pcStack_70 = uStack_90;
    ppcStack_b8 = (code **)&UNK_143076278;
    pcStack_b0 = pdb_1402ed400;
    ppcStack_a8 = &pcStack_70;
    pcStack_a0 = pdb_140f59780;
    pdb_140f60760(&uStack_108,&UNK_1430760a6,&ppcStack_b8);
    param_1[2] = CONCAT44(uStack_f4,uStack_f8);
    *(undefined4 *)param_1 = (undefined4)uStack_108;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_108._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_100._4_4_;
    pdb_1404b38e0(&pcStack_70);
  }
  else {
    ppcStack_d0 = uStack_98;
    pcStack_c8 = uStack_90;
    pdb_14164c110(&uStack_108,uStack_90,uStack_88);
    if ((char)uStack_108 == '\0') {
      lStack_128 = lStack_f0;
      uStack_138 = (undefined4)uStack_100;
      uStack_134 = uStack_100._4_4_;
      uStack_130 = uStack_f8;
      uStack_12c = uStack_f4;
      bVar12 = uStack_100 != (code *)0x0;
      lVar8 = lStack_f0;
      if (!bVar12) {
        lVar8 = 0;
      }
      pcVar9 = (code *)0x0;
      pcVar3 = uStack_100;
      uVar4 = CONCAT44(uStack_f4,uStack_f8);
      puStack_78 = param_1;
      while (param_1 = puStack_78, bVar11 = lVar8 != 0, lVar8 = lVar8 + -1, bVar11) {
        if (!bVar12) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143359188);
        }
        if (pcVar9 == (code *)0x0) {
          pcVar10 = pcVar3;
          if (uVar4 != 0) {
            uVar7 = uVar4;
            if ((uVar4 & 7) != 0) {
              uVar7 = 0;
              do {
                pcVar3 = *(code **)(pcVar3 + 0x220);
                uVar7 = uVar7 + 1;
              } while ((uVar4 & 7) != uVar7);
              uVar7 = uVar4 - uVar7;
            }
            pcVar10 = pcVar3;
            if (7 < uVar4) {
              do {
                pcVar3 = *(code **)(*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)
                                             (*(longlong *)(*(longlong *)(pcVar3 + 0x220) + 0x220) +
                                             0x220) + 0x220) + 0x220) + 0x220) + 0x220) + 0x220);
                uVar7 = uVar7 - 8;
                pcVar10 = pcVar3;
              } while (uVar7 != 0);
            }
          }
          uVar4 = 0;
          pcVar3 = (code *)0x0;
          if (*(short *)(pcVar10 + 0x21a) == 0) goto LAB_140c8dee0;
        }
        else {
          pcVar10 = pcVar9;
          if (*(ushort *)(pcVar9 + 0x21a) <= uVar4) {
LAB_140c8dee0:
            do {
              pcVar9 = *(code **)pcVar10;
              if (pcVar9 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143359c48);
              }
              pcVar3 = pcVar3 + 1;
              pcVar5 = pcVar10 + 0x218;
              uVar4 = (ulonglong)*(ushort *)pcVar5;
              pcVar10 = pcVar9;
            } while (*(ushort *)(pcVar9 + 0x21a) <= *(ushort *)pcVar5);
          }
        }
        pcVar9 = pcVar10;
        if (pcVar3 == (code *)0x0) {
          uVar7 = uVar4 + 1;
        }
        else {
          pcVar5 = pcVar10 + uVar4 * 8 + 0x228;
          pcVar6 = pcVar3;
          if (((ulonglong)pcVar3 & 7) != 0) {
            uVar7 = 0;
            do {
              pcVar9 = *(code **)pcVar5;
              pcVar5 = pcVar9 + 0x220;
              uVar7 = uVar7 + 1;
            } while (((ulonglong)pcVar3 & 7) != uVar7);
            pcVar6 = pcVar3 + -uVar7;
          }
          if ((code *)0x7 < pcVar3) {
            do {
              pcVar9 = *(code **)(*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)
                                         (*(longlong *)
                                           (*(longlong *)(*(longlong *)pcVar5 + 0x220) + 0x220) +
                                         0x220) + 0x220) + 0x220) + 0x220) + 0x220);
              pcVar5 = pcVar9 + 0x220;
              pcVar6 = pcVar6 + -8;
            } while (pcVar6 != (code *)0x0);
          }
          uVar7 = 0;
        }
        pcStack_e8 = pcVar10 + uVar4 * 0x18 + 8;
        cVar1 = pdb_140c8da50(*(undefined8 *)(pcVar10 + uVar4 * 0x18 + 0x10),
                              *(undefined8 *)(pcVar10 + uVar4 * 0x18 + 0x18));
        if (cVar1 == '\0') {
          uStack_108 = &pcStack_e8;
          uStack_100 = pdb_140493ec0;
          pdb_140f60760(&ppcStack_b8,&UNK_1430762de,&uStack_108);
          puStack_78[2] = ppcStack_a8;
          *puStack_78 = ppcStack_b8;
          puStack_78[1] = pcStack_b0;
          param_1 = puStack_78;
LAB_140c8e2d7:
          pdb_14096d420(&uStack_138);
          goto LAB_140c8e2e1;
        }
        pdb_140f3e9e0(&uStack_108,pcStack_c0,pcStack_80,
                      *(undefined8 *)(pcVar10 + uVar4 * 0x18 + 0x10),
                      *(undefined8 *)(pcVar10 + uVar4 * 0x18 + 0x18));
        pcStack_e0 = uStack_100;
        pdb_140f55fb0(&pcStack_70,uStack_100,CONCAT44(uStack_f4,uStack_f8));
        if (SBORROW8(0,(longlong)pcStack_70)) {
          pcStack_110 = pcStack_68;
          ppcStack_b8 = &pcStack_e8;
          pcStack_b0 = pdb_140493ec0;
          ppcStack_a8 = &pcStack_110;
          pcStack_a0 = pdb_140f59780;
          pdb_140f60760(&uStack_98,&UNK_143076319,&ppcStack_b8);
          puStack_78[2] = uStack_88;
          *(undefined4 *)puStack_78 = (undefined4)uStack_98;
          *(undefined4 *)((longlong)puStack_78 + 4) = uStack_98._4_4_;
          *(undefined4 *)(puStack_78 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)puStack_78 + 0xc) = uStack_90._4_4_;
          pdb_1404b38e0(&pcStack_110);
          param_1 = puStack_78;
joined_r0x000140c8e2c5:
          if (uStack_108 != (code **)0x0) {
            pub_1406abac0((byte *)pcStack_e0,(ulonglong)uStack_108,1);
          }
          goto LAB_140c8e2d7;
        }
        pcStack_50 = pcStack_70;
        pcStack_d8 = pcStack_68;
        pdb_140faf160(&ppcStack_b8,pcStack_68,lStack_60);
        pcStack_70 = (code *)0x0;
        pcStack_68 = (code *)0x1;
        lStack_60 = 0;
        uStack_88 = 0x60000020;
        uStack_90 = (code *)&UNK_143076710;
        uStack_98 = &pcStack_70;
        cVar1 = pdb_140fae350(&ppcStack_b8,&uStack_98);
        pcVar5 = pcStack_68;
        pcVar3 = pcStack_70;
        if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143076740,0x37,&uStack_51,&UNK_143076800,&UNK_1430767e8);
        }
        if ((lStack_60 != *(longlong *)(pcVar10 + uVar4 * 0x18 + 0x120)) ||
           (iVar2 = pub_142e32750(pcStack_68,*(undefined8 *)(pcVar10 + uVar4 * 0x18 + 0x118)),
           iVar2 != 0)) {
          pcStack_c0 = pcVar5;
          pcStack_80 = pcVar3;
          uStack_98 = &pcStack_e8;
          uStack_90 = pdb_140493ec0;
          pdb_140f60760(&ppcStack_b8,&UNK_143076303,&uStack_98);
          param_1 = puStack_78;
          puStack_78[2] = ppcStack_a8;
          *puStack_78 = ppcStack_b8;
          puStack_78[1] = pcStack_b0;
          if (pcStack_80 != (code *)0x0) {
            pub_1406abac0((byte *)pcStack_c0,(ulonglong)pcStack_80,1);
          }
          if (pcStack_50 != (code *)0x0) {
            pub_1406abac0((byte *)pcStack_d8,(ulonglong)pcStack_50,1);
          }
          goto joined_r0x000140c8e2c5;
        }
        if (pcVar3 != (code *)0x0) {
          pub_1406abac0((byte *)pcVar5,(ulonglong)pcVar3,1);
        }
        if (pcStack_50 != (code *)0x0) {
          pub_1406abac0((byte *)pcStack_d8,(ulonglong)pcStack_50,1);
        }
        if (uStack_108 != (code **)0x0) {
          pub_1406abac0((byte *)pcStack_e0,(ulonglong)uStack_108,1);
        }
        bVar12 = true;
        pcVar3 = (code *)0x0;
        uVar4 = uVar7;
      }
      *puStack_78 = 0x8000000000000000;
      pdb_14096d420(&uStack_138);
    }
    else {
      pcStack_70 = uStack_100;
      ppcStack_b8 = (code **)&UNK_143076278;
      pcStack_b0 = pdb_1402ed400;
      ppcStack_a8 = &pcStack_70;
      pcStack_a0 = pdb_140de07e0;
      pdb_140f60760(&uStack_98,&UNK_1430761eb,&ppcStack_b8);
      param_1[2] = uStack_88;
      *(undefined4 *)param_1 = (undefined4)uStack_98;
      *(undefined4 *)((longlong)param_1 + 4) = uStack_98._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_90._4_4_;
      pcStack_50 = pcStack_70;
      if (*(longlong *)pcStack_70 == 1) {
        pdb_1404b38e0(pcStack_70 + 8);
      }
      else if ((*(longlong *)pcStack_70 == 0) && (*(ulonglong *)(pcStack_70 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(pcStack_70 + 8),*(ulonglong *)(pcStack_70 + 0x10),1);
      }
      pub_1406abac0((byte *)pcStack_50,0x28,8);
    }
LAB_140c8e2e1:
    if (ppcStack_d0 != (code **)0x0) {
      pub_1406abac0((byte *)pcStack_c8,(ulonglong)ppcStack_d0,1);
    }
  }
  if (uStack_158 != 0) {
    pub_1406abac0(pbStack_118,uStack_158,1);
  }
  return param_1;
}

