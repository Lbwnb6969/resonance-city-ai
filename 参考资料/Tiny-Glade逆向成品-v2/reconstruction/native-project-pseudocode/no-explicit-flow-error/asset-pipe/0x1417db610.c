// VA 0x1417db610, PDB extent 2007 bytes
// asset_pipe::texture_processing::process_image_array_from_layers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset_pipe::texture_processing::process_image_array_from_layers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 2007 */

ulonglong * pdb_1417db610(ulonglong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  char cVar8;
  short sVar9;
  char cVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  char *pcStack_148;
  char *pcStack_140;
  short *psStack_138;
  undefined8 **ppuStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 *puStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  longlong lStack_e8;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  undefined8 *puStack_c0;
  int iStack_b8;
  short sStack_b4;
  undefined2 uStack_b2;
  char cStack_b0;
  char cStack_af;
  undefined2 uStack_ae;
  undefined4 uStack_ac;
  longlong *plStack_a8;
  undefined1 uStack_99;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  code *pcStack_70;
  longlong *plStack_68;
  code *pcStack_60;
  short sStack_4c;
  char cStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_d8 = 0x8000000000000000;
  uStack_f8 = *param_3;
  puStack_108 = (undefined8 *)param_3[1];
  puStack_f0 = puStack_108 + param_3[2];
  lStack_e8 = 0;
  uStack_98 = param_2[5];
  pcStack_100 = (code *)puStack_108;
  while (pcStack_100 != (code *)puStack_f0) {
    puVar1 = (undefined8 *)((longlong)pcStack_100 + 8);
    plStack_a8 = *(longlong **)pcStack_100;
    lVar2 = lStack_e8 + 1;
    lStack_110 = lStack_e8;
    pcStack_100 = (code *)puVar1;
    lStack_e8 = lVar2;
    if (!SBORROW8(0,uStack_d8)) {
      ppuStack_130 = &puStack_c0;
      psStack_138 = &sStack_b4;
      pcStack_148 = &cStack_b0;
      pcStack_140 = &cStack_af;
      if (puStack_c0 == (undefined8 *)plStack_a8[5] && (int)plStack_a8[6] == iStack_b8) {
        if (sStack_b4 == *(short *)((longlong)plStack_a8 + 0x34)) {
          if (cStack_af == *(char *)((longlong)plStack_a8 + 0x39)) {
            if (cStack_b0 == (char)plStack_a8[7]) {
              lVar2 = plStack_a8[3];
              uVar7 = plStack_a8[4];
              if (uStack_d8 - uStack_c8 < uVar7) {
                pdb_142d7f1b0(&uStack_d8,uStack_c8,uVar7,1,1);
LAB_1417db82c:
                uVar11 = uStack_c8;
                pub_142e32760(pbStack_d0 + uStack_c8,lVar2,uVar7);
              }
              else {
                uVar11 = uStack_c8;
                if (uVar7 != 0) goto LAB_1417db82c;
              }
              LOCK();
              *plStack_a8 = *plStack_a8 + -1;
              lVar2 = *plStack_a8;
              UNLOCK();
              uStack_c8 = uVar11 + uVar7;
              goto joined_r0x0001417db84d;
            }
            plStack_68 = plStack_a8 + 7;
            uStack_88 = (undefined8 ***)&pcStack_148;
            uStack_80 = pdb_142569d10;
            plStack_78 = &lStack_110;
            pcStack_70 = pdb_140f72a40;
            pcStack_60 = pdb_1417dd440;
            pdb_140f60760(&uStack_128,&UNK_143339165,&uStack_88);
            uStack_88 = (undefined8 ***)CONCAT44(uStack_124,uStack_128);
            uStack_80 = (code *)CONCAT44(uStack_11c,uStack_120);
            plStack_78 = (longlong *)uStack_118;
            uVar7 = pdb_142dff5b0(&uStack_88);
          }
          else {
            plStack_68 = (longlong *)((longlong)plStack_a8 + 0x39);
            uStack_88 = (undefined8 ***)&pcStack_140;
            uStack_80 = pdb_142569ce0;
            plStack_78 = &lStack_110;
            pcStack_70 = pdb_140f72a40;
            pcStack_60 = pdb_1417dd4a0;
            pdb_140f60760(&uStack_128,&UNK_143339199,&uStack_88);
            uStack_88 = (undefined8 ***)CONCAT44(uStack_124,uStack_128);
            uStack_80 = (code *)CONCAT44(uStack_11c,uStack_120);
            plStack_78 = (longlong *)uStack_118;
            uVar7 = pdb_142dff5b0(&uStack_88);
          }
        }
        else {
          plStack_68 = (longlong *)((longlong)plStack_a8 + 0x34);
          uStack_88 = (undefined8 ***)&psStack_138;
          uStack_80 = pdb_1403d7630;
          plStack_78 = &lStack_110;
          pcStack_70 = pdb_140f72a40;
          pcStack_60 = pdb_1401634c0;
          pdb_140f60760(&uStack_128,&UNK_1433391d1,&uStack_88);
          uStack_88 = (undefined8 ***)CONCAT44(uStack_124,uStack_128);
          uStack_80 = (code *)CONCAT44(uStack_11c,uStack_120);
          plStack_78 = (longlong *)uStack_118;
          uVar7 = pdb_142dff5b0(&uStack_88);
        }
      }
      else {
        plStack_68 = plStack_a8 + 5;
        uStack_88 = &ppuStack_130;
        uStack_80 = pdb_142569be0;
        plStack_78 = &lStack_110;
        pcStack_70 = pdb_140f72a40;
        pcStack_60 = pdb_142569c60;
        pdb_140f60760(&uStack_128,&UNK_143339207,&uStack_88);
        uStack_88 = (undefined8 ***)CONCAT44(uStack_124,uStack_128);
        uStack_80 = (code *)CONCAT44(uStack_11c,uStack_120);
        plStack_78 = (longlong *)uStack_118;
        uVar7 = pdb_142dff5b0(&uStack_88);
      }
      param_1[1] = uVar7;
      *param_1 = 0x8000000000000000;
      LOCK();
      *plStack_a8 = *plStack_a8 + -1;
      UNLOCK();
      if (*plStack_a8 == 0) {
        pdb_141746b00(&plStack_a8);
      }
      uStack_49 = 0;
      pdb_141db3600(&puStack_108);
      if (SBORROW8(0,uStack_d8)) {
        return param_1;
      }
      pbVar6 = pbStack_d0;
      uVar7 = uStack_d8;
      if (uStack_d8 == 0) {
        return param_1;
      }
      goto LAB_1417dbc4d;
    }
    uVar3 = (undefined4)plStack_a8[6];
    uStack_88 = (undefined8 ***)plStack_a8[5];
    uStack_80._0_4_ = uVar3;
    if (0xffff < uStack_98) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143339370,0x2b,&uStack_99,&UNK_143339350,&UNK_143339240);
    }
    uVar7 = plStack_a8[4];
    if ((longlong)uVar7 < 0) {
      uVar12 = 0;
LAB_1417db8da:
      pdb_142dc7e2a(uVar12,uVar7);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    sVar9 = *(short *)((longlong)plStack_a8 + 0x34);
    cVar8 = *(char *)((longlong)plStack_a8 + 0x39);
    cVar10 = (char)plStack_a8[7];
    if (uVar7 == 0) {
      uStack_88 = (undefined8 ***)plStack_a8[5];
      uStack_80 = (code *)CONCAT44(uStack_80._4_4_,(int)plStack_a8[6]);
      pbVar6 = (byte *)0x1;
    }
    else {
      pbStack_90 = (byte *)CONCAT71(pbStack_90._1_7_,cVar8);
      lVar2 = plStack_a8[3];
      sStack_4c = sVar9;
      cStack_4a = cVar10;
      pdb_14007ee60();
      uVar12 = 1;
      pbVar6 = pub_1406abab0(uVar7,1);
      if (pbVar6 == (byte *)0x0) goto LAB_1417db8da;
      pub_142e32760(pbVar6,lVar2,uVar7);
      uStack_120 = (int)uStack_80;
      if ((!SBORROW8(0,uStack_d8)) && (uStack_d8 != 0)) {
        pub_1406abac0(pbStack_d0,uStack_d8,1);
      }
      sVar9 = sStack_4c;
      cVar10 = cStack_4a;
      cVar8 = (char)pbStack_90;
    }
    uStack_b2 = (undefined2)uStack_98;
    LOCK();
    *plStack_a8 = *plStack_a8 + -1;
    lVar2 = *plStack_a8;
    UNLOCK();
    uStack_c8 = uVar7;
    uStack_d8 = uVar7;
    pbStack_d0 = pbVar6;
    puStack_c0 = uStack_88;
    iStack_b8 = (int)uStack_80;
    sStack_b4 = sVar9;
    cStack_b0 = cVar10;
    cStack_af = cVar8;
joined_r0x0001417db84d:
    if (lVar2 == 0) {
      pdb_141746b00(&plStack_a8);
    }
  }
  uStack_49 = 0;
  pdb_141db3600(&puStack_108);
  if (SBORROW8(0,uStack_d8)) {
    uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1433390f8);
  }
  if (cStack_b0 == '\0') {
    uVar5 = 1;
LAB_1417dbbbb:
    *param_1 = uStack_d8;
    param_1[1] = (ulonglong)pbStack_d0;
    param_1[2] = uStack_c8;
    param_1[3] = (ulonglong)puStack_c0;
    param_1[4] = CONCAT26(uStack_b2,CONCAT24(sStack_b4,iStack_b8));
    *(undefined1 *)(param_1 + 5) = uVar5;
    *(uint *)((longlong)param_1 + 0x29) =
         CONCAT13((undefined1)uStack_ac,CONCAT21(uStack_ae,cStack_af));
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_ac;
  }
  else {
    puStack_108 = param_2;
    if (cStack_b0 == '\x04') {
      pbStack_90 = pbStack_d0;
      uStack_98 = uStack_d8;
      pcStack_100 = pdb_140094770;
      pdb_140f60760(&uStack_88,&UNK_143339110,&puStack_108);
      puStack_108 = uStack_88;
      pcStack_100 = uStack_80;
      uStack_f8 = plStack_78;
      uVar7 = pdb_142dff5b0(&puStack_108);
    }
    else {
      if (cStack_b0 == '\x02') {
        uVar5 = 3;
        goto LAB_1417dbbbb;
      }
      pbStack_90 = pbStack_d0;
      uStack_98 = uStack_d8;
      pcStack_100 = pdb_140094770;
      pdb_140f60760(&uStack_88,&UNK_143339138,&puStack_108);
      puStack_108 = uStack_88;
      pcStack_100 = uStack_80;
      uStack_f8 = plStack_78;
      uVar7 = pdb_142dff5b0(&puStack_108);
    }
    param_1[1] = uVar7;
    *param_1 = 0x8000000000000000;
    pbVar6 = pbStack_90;
    uVar7 = uStack_98;
    if (uStack_98 != 0) {
LAB_1417dbc4d:
      pub_1406abac0(pbVar6,uVar7,1);
    }
  }
  return param_1;
}

