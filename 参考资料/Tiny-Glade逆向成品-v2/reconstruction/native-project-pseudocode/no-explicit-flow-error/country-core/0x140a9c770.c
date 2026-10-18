// VA 0x140a9c770, PDB extent 5034 bytes
// country_core::render::texture_export::export_packaged_textures
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/texture_export.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::texture_export::export_packaged_textures
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/texture_export.rs
   Extent: 5034 */

undefined8 *
pdb_140a9c770(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,byte *******param_4,
             undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *******pppppppbVar8;
  ulonglong uVar9;
  code *pcVar10;
  longlong lVar11;
  undefined4 uVar12;
  code *pcVar13;
  byte *******pppppppbVar14;
  byte *******pppppppbVar15;
  undefined8 uVar16;
  byte *******pppppppbVar17;
  uint uVar18;
  code *pcVar19;
  longlong *plVar20;
  bool bVar21;
  undefined4 uVar23;
  undefined1 *puVar22;
  longlong lStack_788;
  byte *******pppppppbStack_780;
  longlong lStack_778;
  byte *******pppppppbStack_698;
  byte *******pppppppbStack_690;
  byte *******pppppppbStack_688;
  code *pcStack_680;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  byte *******pppppppbStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 uStack_4a0;
  byte *******apppppppbStack_438 [2];
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  longlong *plStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  byte *******pppppppbStack_380;
  byte *******pppppppbStack_378;
  byte *******pppppppbStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  uint uStack_1a0;
  longlong alStack_198 [6];
  longlong *plStack_168;
  code *pcStack_160;
  undefined1 auStack_158 [32];
  longlong lStack_138;
  byte *******pppppppbStack_130;
  byte *******pppppppbStack_128;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  byte *******pppppppbStack_100;
  byte *******pppppppbStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  longlong *plStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  byte *******pppppppbStack_a0;
  longlong lStack_98;
  undefined4 uStack_8c;
  byte *******pppppppbStack_88;
  code *pcStack_80;
  byte *******pppppppbStack_78;
  byte ******ppppppbStack_70;
  uint uStack_68;
  uint uStack_64;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  byte bStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pppppppbVar14 = (byte *******)&pppppppbStack_378;
  pdb_1417fc060(pppppppbVar14,&UNK_143046310,0x1f);
  pdb_141706a70(&pppppppbStack_698,pppppppbVar14,&UNK_143046310,0x1f);
  if (SBORROW8(0,(longlong)pppppppbStack_698)) {
    param_1[1] = pppppppbStack_690;
    *param_1 = 1;
    return param_1;
  }
  pppppppbStack_110 = pppppppbStack_698;
  pppppppbStack_108 = pppppppbStack_690;
  pppppppbStack_100 = pppppppbStack_688;
  pppppppbStack_130 = param_4;
  if (pppppppbStack_688 != (byte *******)0x0) {
    pppppppbVar17 = pppppppbStack_690 + (longlong)pppppppbStack_688 * 8;
    pppppppbVar8 = pppppppbStack_690;
    do {
      plVar5 = (longlong *)pdb_14043b7e0(pppppppbVar8 + 2);
      if (((pppppppbVar14 == (byte *******)0xc) &&
          ((int)plVar5[1] == 0x7473696c && *plVar5 == 0x2d65727574786574)) &&
         (pppppppbVar8[7] == (byte ******)0x25)) {
        pppppppbVar14 = (byte *******)&DAT_14333e441;
        iVar4 = pub_142e32750(pppppppbVar8[6],&DAT_14333e441,0x25);
        if (iVar4 == 0) {
          pdb_1417fc430(&lStack_788,&UNK_143046310,0x1f,*pppppppbVar8,pppppppbVar8[1]);
          if (SBORROW8(0,lStack_788)) {
            apppppppbStack_438[0] = pppppppbStack_780;
            uStack_4b = 1;
            pdb_140f3f5b0(&pppppppbStack_378);
            uStack_678 = (undefined4)uStack_358;
            uStack_674 = uStack_358._4_4_;
            uStack_670 = (undefined4)uStack_350;
            uStack_66c = uStack_350._4_4_;
            pppppppbStack_688 = uStack_368;
            pcStack_680 = uStack_360;
            pppppppbStack_698 = pppppppbStack_378;
            pppppppbStack_690 = pppppppbStack_370;
            pppppppbStack_378 = (byte *******)&UNK_143046356;
            pppppppbStack_370 = (byte *******)0x21;
            uStack_368 = pppppppbStack_780;
            uStack_4b = 0;
            uVar6 = pdb_142dea990(&pppppppbStack_378,&pppppppbStack_698);
            goto LAB_140a9c97d;
          }
          lStack_a8 = lStack_788;
          pppppppbStack_a0 = pppppppbStack_780;
          lStack_98 = lStack_778;
          pppppppbStack_378 = (byte *******)CONCAT44(pppppppbStack_378._4_4_,0xb);
          pppppppbStack_370 = (byte *******)0x0;
          uStack_368 = (byte *******)CONCAT44(_UNK_142f41494,_DAT_142f41490);
          uStack_360 = (code *)CONCAT44(_UNK_142f4149c,_UNK_142f41498);
          plVar5 = (longlong *)*param_2;
          iVar4 = (*(code *)plVar5[0x32])(plVar5[0xcd],&pppppppbStack_378,0,&pppppppbStack_698);
          if (iVar4 != 0) {
            pppppppbStack_698 = (byte *******)CONCAT44(pppppppbStack_698._4_4_,iVar4);
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14302c1c8,0x1b,&pppppppbStack_698,&UNK_14302be38,&UNK_14302c1e8);
          }
          LOCK();
          lVar7 = *plVar5;
          *plVar5 = *plVar5 + 1;
          UNLOCK();
          if (*plVar5 == 0 || SCARRY8(lVar7,1) != *plVar5 < 0) goto LAB_140a9d726;
          uStack_408 = 8;
          uStack_388 = 0;
          uStack_400 = 0;
          uStack_3f8 = 0;
          uStack_3e8 = _DAT_14302c210;
          uStack_3e4 = _UNK_14302c214;
          uStack_3e0 = _UNK_14302c218;
          uStack_3dc = _UNK_14302c21c;
          uStack_3d8 = _DAT_14302c220;
          uStack_3d4 = _UNK_14302c224;
          uStack_3d0 = _UNK_14302c228;
          uStack_3cc = _UNK_14302c22c;
          uStack_3c8 = 0;
          uStack_3c0 = 0;
          uStack_3b8 = _DAT_14302c210;
          uStack_3b4 = _UNK_14302c214;
          uStack_3b0 = _UNK_14302c218;
          uStack_3ac = _UNK_14302c21c;
          uStack_3a8 = _DAT_14302c220;
          uStack_3a4 = _UNK_14302c224;
          uStack_3a0 = _UNK_14302c228;
          uStack_39c = _UNK_14302c22c;
          uStack_398 = 0;
          uStack_390 = 0;
          pppppppbStack_380 = pppppppbStack_698;
          apppppppbStack_438[0] = (byte *******)0x0;
          uStack_428 = 0;
          uStack_420 = 8;
          uStack_418 = 0;
          uStack_410 = 0;
          plVar20 = plVar5 + 2;
          plStack_3f0 = plVar5;
          pdb_140e38350(&lStack_788,plVar20);
          pppppppbStack_c0 = pppppppbStack_a0 + lStack_98 * 10;
          lStack_b0 = 0;
          lStack_b8 = 0;
          pppppppbVar14 = pppppppbStack_a0;
          plStack_d0 = plVar20;
          if (pppppppbStack_a0 != pppppppbStack_c0) goto LAB_140a9cb81;
          goto LAB_140a9d5bd;
        }
      }
      pppppppbVar8 = pppppppbVar8 + 8;
    } while (pppppppbVar8 != pppppppbVar17);
  }
  pdb_140f3f5b0(&pppppppbStack_378);
  uVar6 = pdb_142dea6e0(&UNK_14304632f,0x27,&pppppppbStack_378);
LAB_140a9c97d:
  param_1[1] = uVar6;
  *param_1 = 1;
code_r0x000140a9c988:
  pppppppbVar14 = pppppppbStack_108;
  if (pppppppbStack_100 != (byte *******)0x0) {
    pppppppbVar8 = pppppppbStack_108 + 6;
    pppppppbVar17 = pppppppbStack_100;
    do {
      if (pppppppbVar8[-4] != (byte ******)0x0) {
        pub_1406abac0((byte *)pppppppbVar8[-3],(ulonglong)pppppppbVar8[-4],1);
      }
      if (pppppppbVar8[-1] != (byte ******)0x0) {
        pub_1406abac0((byte *)*pppppppbVar8,(ulonglong)pppppppbVar8[-1],1);
      }
      pppppppbVar8 = pppppppbVar8 + 8;
      pppppppbVar17 = (byte *******)((longlong)pppppppbVar17 + -1);
    } while (pppppppbVar17 != (byte *******)0x0);
  }
  if (pppppppbStack_110 == (byte *******)0x0) {
    return param_1;
  }
  pub_1406abac0((byte *)pppppppbVar14,(longlong)pppppppbStack_110 << 6,0x10);
  return param_1;
LAB_140a9cb81:
  cVar3 = pdb_141b028d0(pppppppbVar14[3],pppppppbVar14[4]);
  pppppppbStack_c8 = pppppppbVar14 + 10;
  pppppppbStack_78 = pppppppbVar14 + 2;
  if (cVar3 == '\0') {
    if (2 < *_DAT_143ca8e90) {
      pppppppbStack_690 = (byte *******)pdb_140094770;
      pppppppbStack_378 = (byte *******)&UNK_1430463f0;
      pppppppbStack_370 = (byte *******)0x24;
      uStack_368 = (byte *******)&UNK_1430463f0;
      uStack_360 = (code *)0x24;
      uStack_358 = (uint *)&UNK_1430463d8;
      pppppppbStack_698 = pppppppbStack_78;
      pdb_1400c9be0(&UNK_143046377,&pppppppbStack_698,3,&pppppppbStack_378);
    }
  }
  else if (((ulonglong)pppppppbVar14[8] & 6) == 2) {
    ppppppbStack_70 =
         (byte ******)
         pdb_140b8f650(plVar20,&UNK_143046310,0x1f,pppppppbVar14[3],pppppppbVar14[4],*pppppppbVar14,
                       pppppppbVar14[1]);
    pppppppbStack_128 = pppppppbVar14;
    lVar7 = pdb_140e17390(&ppppppbStack_70);
    uStack_4a = *(code *)(lVar7 + 0x90);
    bStack_4c = *(byte *)(lVar7 + 0x8e);
    uStack_68 = (uint)*(ushort *)(lVar7 + 0x84);
    uStack_64 = (uint)*(ushort *)(lVar7 + 0x86);
    uVar1 = *(ushort *)(lVar7 + 0x8a);
    uVar18 = (uint)bStack_4c;
    pppppppbStack_58 = (byte *******)CONCAT44(pppppppbStack_58._4_4_,uVar18);
    if (uVar18 - 9 < 0x8a) {
      uVar12 = 0;
      switch(uVar18) {
      case 9:
      case 0x10:
      case 0x17:
      case 0x1e:
      case 0x25:
      case 0x2c:
      case 0x33:
      case 0x83:
      case 0x85:
      case 0x87:
      case 0x89:
      case 0x8b:
      case 0x8d:
      case 0x91:
        break;
      default:
        goto LAB_140a9d420;
      case 0xf:
      case 0x16:
      case 0x1d:
      case 0x24:
      case 0x2b:
      case 0x32:
      case 0x39:
      case 0x84:
      case 0x86:
      case 0x88:
      case 0x8a:
      case 0x92:
        uVar12 = 1;
      }
      pppppppbVar8 = (byte *******)(ulonglong)(uStack_64 * uStack_68);
      pcVar2 = (code *)((longlong)pppppppbVar8 * 4);
      pcVar19 = (code *)((longlong)pcVar2 * (ulonglong)uVar1);
      uStack_8c = uVar12;
      pppppppbStack_60 = pppppppbVar8;
      uVar9 = pdb_140e1d0f0(pcVar19,CONCAT62((int6)((ulonglong)
                                                    (&UNK_143048928 +
                                                    *(int *)(&UNK_143048928 +
                                                            (ulonglong)(uVar18 - 9) * 4)) >> 0x10),
                                             0x30));
      pdb_140e55ce0(&pppppppbStack_698,plVar20,&UNK_143046414,0x17,uVar9);
      pppppppbVar14 = pppppppbStack_688;
      if (pppppppbStack_698 == (byte *******)0xb) {
        pcStack_80 = pcStack_680;
        pppppppbStack_88 = pppppppbStack_690;
        uStack_d8 = uStack_68;
        uStack_d4 = uStack_64;
        uStack_11c = uStack_68;
        uStack_118 = uStack_64;
        uStack_114 = (uint)uVar1;
        pdb_140e6c160(auStack_158,plStack_d0);
        pdb_1409c6480(&pppppppbStack_378,apppppppbStack_438,auStack_158,&lStack_788,
                      uVar9 & 0xffffffff00000000);
        pub_142e32760(&pppppppbStack_698,&pppppppbStack_378,0x1d8);
        uVar9 = (ulonglong)uStack_1a0;
        if (uVar9 != 0) {
          lVar7 = 0;
          do {
            if (*(longlong *)((longlong)alStack_198 + lVar7) != 0) {
              pub_1406abac0(*(byte **)((longlong)alStack_198 + lVar7 + 8),
                            *(longlong *)((longlong)alStack_198 + lVar7) * 0x18,8);
            }
            lVar7 = lVar7 + 0x18;
          } while (uVar9 * 0x18 != lVar7);
        }
        pppppppbStack_378 = pppppppbStack_130;
        pppppppbStack_370 = &ppppppbStack_70;
        uStack_368 = (byte *******)&pppppppbStack_88;
        uStack_360 = (code *)&uStack_4a;
        uStack_358 = &uStack_d8;
        uStack_350 = &uStack_8c;
        uStack_348 = &uStack_11c;
        uStack_49 = 1;
        puVar22 = auStack_158;
        pppppppbVar17 = (byte *******)&pppppppbStack_378;
        pdb_1409c9640(&pppppppbStack_4b8,&pppppppbStack_698,&UNK_14304642b,0xe,param_3,puVar22,
                      &pppppppbStack_378);
        if (pppppppbStack_4b8 != (byte *******)0x0) {
          uStack_e0 = uStack_4a0;
          uStack_f0 = (code *)CONCAT44(uStack_4ac,uStack_4b0);
          uStack_e8 = uStack_4a8;
          uStack_e4 = uStack_4a4;
          pppppppbStack_f8 = pppppppbStack_4b8;
          uStack_49 = 1;
          pdb_140ca56d0(&pppppppbStack_f8,&uStack_d8,0x20,0x10);
          pub_142e32760(&pppppppbStack_378,&pppppppbStack_698,0x1d8);
          uStack_49 = 0;
          pdb_1409c7fa0(&pppppppbStack_4b8,&pppppppbStack_378);
          if (!SBORROW8(0,(longlong)pppppppbStack_4b8)) {
            uStack_49 = 0;
            pdb_1409702b0(&pppppppbStack_4b8);
          }
          if (pcStack_80 <= pcVar19 && (longlong)pcVar19 - (longlong)pcStack_80 != 0) {
            uStack_49 = 0;
            pdb_142dc8420(0,pcVar19,pcStack_80,&UNK_143046440);
LAB_140a9d726:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          uStack_49 = 0;
          pdb_140e1d2c0(&pppppppbStack_378,(ulonglong)pppppppbStack_58 & 0xffffffff);
          if ((pcVar19 != (code *)0x0) && ((int)pppppppbStack_378 == 1)) {
            pcVar13 = pcVar19 + -4;
            pcVar10 = pcVar19;
            pppppppbVar15 = pppppppbVar14;
            if ((~(uint)pcVar13 & 0xc) != 0) {
              uVar18 = ((uint)((ulonglong)pcVar13 >> 2) & 0x3fffffff) + 1 & 3;
              uVar9 = (ulonglong)uVar18;
              pcVar10 = pcVar19 + -(ulonglong)(uVar18 * 4);
              do {
                *(undefined1 *)((longlong)pppppppbVar15 + 1) = *(undefined1 *)pppppppbVar15;
                *(undefined1 *)((longlong)pppppppbVar15 + 2) = *(undefined1 *)pppppppbVar15;
                pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 + 4);
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            if ((code *)0xb < pcVar13) {
              pcVar13 = (code *)0x0;
              do {
                ((undefined *)((longlong)pppppppbVar15 + 1))[(longlong)pcVar13] =
                     *(code *)((longlong)pppppppbVar15 + (longlong)pcVar13);
                ((undefined *)((longlong)pppppppbVar15 + 2))[(longlong)pcVar13] =
                     *(code *)((longlong)pppppppbVar15 + (longlong)pcVar13);
                ((undefined *)((longlong)pppppppbVar15 + 5))[(longlong)pcVar13] =
                     ((undefined *)((longlong)pppppppbVar15 + 4))[(longlong)pcVar13];
                ((undefined *)((longlong)pppppppbVar15 + 6))[(longlong)pcVar13] =
                     ((undefined *)((longlong)pppppppbVar15 + 4))[(longlong)pcVar13];
                ((undefined *)((longlong)pppppppbVar15 + 9))[(longlong)pcVar13] =
                     *(code *)((longlong)(pppppppbVar15 + 1) + (longlong)pcVar13);
                ((undefined *)((longlong)pppppppbVar15 + 10))[(longlong)pcVar13] =
                     *(code *)((longlong)(pppppppbVar15 + 1) + (longlong)pcVar13);
                ((undefined *)((longlong)pppppppbVar15 + 0xd))[(longlong)pcVar13] =
                     ((undefined *)((longlong)pppppppbVar15 + 0xc))[(longlong)pcVar13];
                ((undefined *)((longlong)pppppppbVar15 + 0xe))[(longlong)pcVar13] =
                     ((undefined *)((longlong)pppppppbVar15 + 0xc))[(longlong)pcVar13];
                pcVar13 = pcVar13 + 0x10;
              } while (pcVar10 != pcVar13);
            }
          }
          if ((int)pppppppbStack_60 == 0) {
            uStack_49 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143046ab0,0x37,&UNK_143046458);
          }
          lVar7 = 0;
          while( true ) {
            uVar23 = (undefined4)((ulonglong)puVar22 >> 0x20);
            uVar12 = (undefined4)((ulonglong)pppppppbVar17 >> 0x20);
            bVar21 = pcVar19 < pcVar2;
            pcVar19 = pcVar19 + (longlong)pppppppbVar8 * -4;
            if (bVar21) break;
            lStack_138 = lVar7;
            if (uStack_4a == (code)0x3) {
              uStack_49 = 0;
              pdb_140f3e9e0(&pppppppbStack_378,param_5,param_6,pppppppbStack_128[3],
                            pppppppbStack_128[4]);
              pppppppbVar17 = uStack_368;
              pppppppbStack_58 = pppppppbStack_370;
              plStack_168 = &lStack_138;
              pcStack_160 = pdb_140f72a40;
              pdb_140f60760(&pppppppbStack_f8,&UNK_143046470,&plStack_168);
              pppppppbStack_60 = pppppppbStack_f8;
              pcStack_80 = uStack_f0;
              pdb_140f3e9e0(&pppppppbStack_4b8,pppppppbStack_58,pppppppbVar17,uStack_f0,
                            CONCAT44(uStack_e4,uStack_e8));
              pppppppbVar17 = pppppppbStack_58;
              pppppppbVar15 = pppppppbStack_378;
              if (pppppppbStack_60 != (byte *******)0x0) {
                pub_1406abac0((byte *)pcStack_80,(ulonglong)pppppppbStack_60,1);
                pppppppbVar17 = pppppppbStack_58;
                pppppppbVar15 = pppppppbStack_378;
              }
            }
            else {
              pppppppbStack_f8 = pppppppbStack_78;
              uStack_f0 = pdb_140001020;
              uStack_49 = 0;
              pdb_140f60760(&pppppppbStack_378,&UNK_143046470,&pppppppbStack_f8);
              pppppppbStack_58 = pppppppbStack_378;
              pppppppbStack_60 = pppppppbStack_370;
              pdb_140f3e9e0(&pppppppbStack_4b8,param_5,param_6,pppppppbStack_370,uStack_368);
              pppppppbVar17 = pppppppbStack_60;
              pppppppbVar15 = pppppppbStack_58;
            }
            if (pppppppbVar15 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbVar17,(ulonglong)pppppppbVar15,1);
            }
            pppppppbStack_58 = (byte *******)CONCAT44(uStack_4ac,uStack_4b0);
            uVar6 = CONCAT44(uStack_4a4,uStack_4a8);
            uVar16 = uVar6;
            lVar11 = pdb_140f3eaf0(pppppppbStack_58,uVar6);
            if (lVar11 == 0) {
              pdb_142dc8110(&UNK_143046477,0x1c,&UNK_143046498);
              goto LAB_140a9d726;
            }
            pppppppbStack_378 = (byte *******)CONCAT71(pppppppbStack_378._1_7_,1);
            lVar11 = pdb_140f46c40(&pppppppbStack_378,lVar11,uVar16);
            if (lVar11 != 0) {
              lVar11 = pdb_142deaf00(lVar11);
code_r0x000140a9d4e8:
              param_1[1] = lVar11;
              *param_1 = 1;
              if (pppppppbStack_4b8 != (byte *******)0x0) {
                pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_4b8,1);
              }
              goto code_r0x000140a9d512;
            }
            pppppppbVar17 = (byte *******)CONCAT44(uVar12,uStack_64);
            puVar22 = (undefined1 *)CONCAT44(uVar23,uStack_68);
            pdb_140d9dfe0(&pppppppbStack_378,pppppppbStack_58,uVar6,pppppppbVar14,pcVar2,puVar22,
                          pppppppbVar17,0x10);
            lVar11 = pdb_141706090(&pppppppbStack_378,&pppppppbStack_4b8);
            if (lVar11 != 0) goto code_r0x000140a9d4e8;
            if (pppppppbStack_4b8 != (byte *******)0x0) {
              pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_4b8,1);
            }
            pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + (longlong)pcVar2);
            lVar7 = lVar7 + 1;
          }
          pdb_1404bccd0(auStack_158);
          pdb_140989660(&pppppppbStack_88);
          plVar20 = plStack_d0;
          pdb_14098a200(&ppppppbStack_70);
          lStack_b8 = lStack_b8 + 1;
          pppppppbVar14 = pppppppbStack_c8;
          if (pppppppbStack_c8 == pppppppbStack_c0) goto LAB_140a9d5bd;
          goto LAB_140a9cb81;
        }
        uStack_49 = 1;
        uVar6 = pdb_142deb060();
        param_1[1] = uVar6;
        *param_1 = 1;
        pdb_140970510(&pppppppbStack_698);
code_r0x000140a9d512:
        pdb_1404bccd0(auStack_158);
        pdb_140989660(&pppppppbStack_88);
      }
      else {
        uStack_338 = uStack_658;
        uStack_334 = uStack_654;
        uStack_330 = uStack_650;
        uStack_32c = uStack_64c;
        uStack_348 = (uint *)CONCAT44(uStack_664,uStack_668);
        uStack_340 = uStack_660;
        uStack_33c = uStack_65c;
        uStack_358 = (uint *)CONCAT44(uStack_674,uStack_678);
        uStack_350 = (undefined4 *)CONCAT44(uStack_66c,uStack_670);
        pppppppbStack_378 = pppppppbStack_698;
        pppppppbStack_370 = pppppppbStack_690;
        uStack_368 = pppppppbStack_688;
        uStack_360 = pcStack_680;
        uVar6 = pdb_142deb090(&pppppppbStack_378);
        param_1[1] = uVar6;
        *param_1 = 1;
      }
      pdb_14098a200(&ppppppbStack_70);
      pdb_14098f3d0(&lStack_788);
      pdb_14096b7a0(apppppppbStack_438);
      pppppppbVar14 = pppppppbStack_a0;
      if (lStack_98 != 0) {
        pppppppbVar8 = pppppppbStack_a0 + 3;
        lVar7 = lStack_98;
        do {
          if (pppppppbVar8[-1] != (byte ******)0x0) {
            pub_1406abac0((byte *)*pppppppbVar8,(ulonglong)pppppppbVar8[-1],1);
          }
          pppppppbVar8 = pppppppbVar8 + 10;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lStack_a8 != 0) {
        pub_1406abac0((byte *)pppppppbVar14,lStack_a8 * 0x50,0x10);
      }
      goto code_r0x000140a9c988;
    }
LAB_140a9d420:
    if (2 < *_DAT_143ca8e90) {
      pppppppbStack_698 = pppppppbStack_78;
      pppppppbStack_690 = (byte *******)pdb_140094770;
      pppppppbStack_688 = (byte *******)&bStack_4c;
      pcStack_680 = pdb_140aa5eb0;
      pppppppbStack_378 = (byte *******)&UNK_1430463f0;
      pppppppbStack_370 = (byte *******)0x24;
      uStack_368 = (byte *******)&UNK_1430463f0;
      uStack_360 = (code *)0x24;
      uStack_358 = (uint *)&UNK_1430464e8;
      pdb_1400c9be0(&UNK_1430464b0,&pppppppbStack_698,3,&pppppppbStack_378);
    }
    pdb_14098a200(&ppppppbStack_70);
  }
  else if (2 < *_DAT_143ca8e90) {
    pppppppbStack_688 = pppppppbVar14 + 8;
    pppppppbStack_690 = (byte *******)pdb_140094770;
    pcStack_680 = pdb_140aa5ee0;
    pppppppbStack_378 = (byte *******)&UNK_1430463f0;
    pppppppbStack_370 = (byte *******)0x24;
    uStack_368 = (byte *******)&UNK_1430463f0;
    uStack_360 = (code *)0x24;
    uStack_358 = (uint *)&UNK_143046530;
    pppppppbStack_698 = pppppppbStack_78;
    pdb_1400c9be0(&UNK_143046500,&pppppppbStack_698,3,&pppppppbStack_378);
  }
  lStack_b0 = lStack_b0 + 1;
  pppppppbVar14 = pppppppbStack_c8;
  if (pppppppbStack_c8 == pppppppbStack_c0) {
LAB_140a9d5bd:
    param_1[1] = lStack_b8;
    param_1[2] = lStack_b0;
    *param_1 = 0;
    pdb_14098f3d0(&lStack_788);
    pdb_14096b7a0(apppppppbStack_438);
    pdb_140967a60(&lStack_a8);
    pdb_14098b740(&pppppppbStack_110);
    return param_1;
  }
  goto LAB_140a9cb81;
}

