// VA 0x140b8f650, PDB extent 2151 bytes
// country_core::render::load_texture::load_packaged_texture_image
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/load_texture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::load_texture::load_packaged_texture_image
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/load_texture.rs
   Extent: 2151 */

code *** pdb_140b8f650(undefined8 param_1,undefined8 param_2,undefined8 param_3,code ***param_4,
                      undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  code *pcVar11;
  code ***pppcVar12;
  longlong unaff_RBX;
  undefined *puVar13;
  undefined *puVar14;
  longlong unaff_R14;
  undefined8 in_stack_fffffffffffffe90;
  undefined4 uVar15;
  byte ***pppbStack_130;
  undefined *puStack_128;
  ulonglong uStack_110;
  byte ***pppbStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  code ***pppcStack_e8;
  byte ***pppbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code ***pppcStack_c0;
  byte ***pppbStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  byte ****ppppbStack_68;
  undefined1 uStack_59;
  byte ***pppbStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe90 >> 0x20);
  uStack_48 = 0xfffffffffffffffe;
  puStack_128 = param_5;
  pppbStack_130 = (byte ***)param_4;
  uStack_f0 = param_1;
  cStack_49 = pdb_140e94b40();
  if (cStack_49 == '\0') goto LAB_140b8f845;
  puVar14 = &UNK_14305ed96;
  unaff_R14 = 0x3f;
  uVar10 = 0x3f;
  lVar5 = pdb_140b95f50(&UNK_14305ed96);
  if (lVar5 == 1) {
    if (0x3f < uVar10) {
LAB_140b8fbef:
      pdb_142dc8070(&UNK_14305ed96,0x3f,0);
LAB_140b8fc0f:
      pdb_142dc8070(&UNK_14305ed96,0x3f);
      pcVar11 = (code *)swi(3);
      uVar8 = (*pcVar11)();
      return (code ***)uVar8;
    }
    puVar14 = &UNK_14305ed96;
    uVar6 = pdb_140b95f50(&UNK_14305ed96);
    if ((uVar6 & 1) != 0) {
      if (0x3f < uVar10 + 2) goto LAB_140b8fc0f;
      unaff_R14 = 0x3d - uVar10;
      puVar14 = &UNK_14305ed98 + uVar10;
    }
  }
  puVar7 = &UNK_14305e335;
  puVar13 = &UNK_14305e307;
  do {
    pbVar1 = puVar7 + -1;
    uVar9 = (uint)(char)*pbVar1;
    if ((int)uVar9 < 0) {
      bVar3 = puVar7[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar7[-3];
        if ((char)bVar4 < -0x40) {
          pbVar2 = puVar7 + -4;
          puVar7 = puVar7 + -4;
          uVar9 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar7 = puVar7 + -3;
          uVar9 = bVar4 & 0xf;
        }
        uVar9 = bVar3 & 0x3f | uVar9 << 6;
      }
      else {
        puVar7 = puVar7 + -2;
        uVar9 = bVar3 & 0x1f;
      }
      uVar9 = (uint)(*pbVar1 & 0x3f) | uVar9 << 6;
      if (uVar9 != 0x5c) goto LAB_140b8f799;
LAB_140b8f7b5:
      if (puVar7 + -0x14305e306 < (undefined *)0x2f) {
        unaff_RBX = 0x2d - (longlong)(puVar7 + -0x14305e307);
        puVar13 = puVar7 + 1;
        goto LAB_140b8f7d8;
      }
      pdb_142dc8070(&UNK_14305e307,0x2e,puVar7 + -0x14305e306,0x2e,&UNK_14305ee38);
      goto LAB_140b8fbef;
    }
    puVar7 = puVar7 + -1;
    if (uVar9 == 0x5c) goto LAB_140b8f7b5;
LAB_140b8f799:
    if (uVar9 == 0x2f) goto LAB_140b8f7b5;
  } while (puVar7 != &UNK_14305e307);
  unaff_RBX = 0x2e;
LAB_140b8f7d8:
  pppbStack_58 = (byte ***)pdb_140e97000();
  if ((char)pppbStack_58[0xd] != '\x01') goto LAB_140b8fb5d;
  do {
    if (*pppbStack_58 == (byte **)0x0) {
      *pppbStack_58 = (byte **)0xffffffffffffffff;
      pppcVar12 = param_4;
      unaff_R14 = pdb_140e94f10(pppbStack_58 + 1,puVar14,unaff_R14,puVar13,unaff_RBX,param_4,param_5
                               );
      uVar15 = (undefined4)((ulonglong)pppcVar12 >> 0x20);
      *pppbStack_58 = (byte **)((longlong)*pppbStack_58 + 1);
LAB_140b8f845:
      pdb_141c2d570(&pppcStack_c0,param_6,param_7);
      pppbStack_58 = pppbStack_b8;
      pdb_140f3e9e0(&uStack_110,param_2,param_3,pppbStack_b8,CONCAT44(uStack_ac,uStack_b0));
      if (pppcStack_c0 != (code ***)0x0) {
        pub_1406abac0((byte *)pppbStack_58,(ulonglong)pppcStack_c0,1);
      }
      if (4 < *_DAT_143ca8e90) {
        pppcStack_e8 = (code ***)&pppbStack_130;
        pppbStack_e0 = (byte ***)pdb_1402ed420;
        uStack_d0 = pdb_140f58250;
        pppcStack_c0 = (code ***)0x0;
        pppbStack_b8 = (byte ***)&UNK_14305e357;
        uStack_b0 = 0x22;
        uStack_ac = 0;
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0xc0;
        uStack_9f = 0x14305e2;
        uStack_98 = 0x2e;
        uStack_90 = 5;
        puStack_88 = &UNK_14305e357;
        uStack_80 = 0x22;
        uStack_78 = 0x1100000001;
        puStack_70 = &UNK_14305e335;
        ppppbStack_68 = (byte ****)&pppcStack_e8;
        uStack_d8 = &uStack_110;
        pdb_140f332f0(&uStack_59,&pppcStack_c0);
      }
      pppcStack_c0 = (code ***)((ulonglong)pppcStack_c0 & 0xffffffff00000000);
      pppbStack_b8 = (byte ***)0x0;
      uStack_b0 = 7;
      uStack_ac = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_a8 = 1;
      pppcVar12 = (code ***)pppbStack_108;
      lVar5 = pdb_140f4a2a0(&pppcStack_c0,pppbStack_108,uStack_100);
      if (lVar5 == 1) {
        pdb_142d90230(&uStack_110);
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
      pppbStack_58 = (byte ***)pppcVar12;
      uVar10 = pdb_140cd10f0(pppcVar12);
      if (((uVar10 & 1) != 0) ||
         (pdb_141ab4bb0(&pppcStack_c0), pppcVar12 = (code ***)pppbStack_b8,
         (byte ****)pppcStack_c0 == (byte ****)0x2)) goto LAB_140b8fb91;
      uStack_c8 = CONCAT71(uStack_9f,uStack_a0);
      uStack_d8 = (ulonglong *)CONCAT44(uStack_ac,uStack_b0);
      uStack_d0 = (code *)CONCAT44(uStack_a4,uStack_a8);
      pppcStack_e8 = pppcStack_c0;
      pppbStack_e0 = pppbStack_b8;
      pcVar11 = (code *)0x0;
      if ((code *)0x1b < uStack_d0) {
        pcVar11 = uStack_d0 + -0x1c;
      }
      pppcStack_c0 = *(code ****)((longlong)uStack_d8 + (longlong)pcVar11);
      pppbStack_b8 = (byte ***)
                     CONCAT44(pppbStack_b8._4_4_,
                              *(undefined4 *)((longlong)uStack_d8 + (longlong)(pcVar11 + 8)));
      puVar13 = (undefined *)(longlong)*(int *)((longlong)uStack_d8 + (longlong)(pcVar11 + 0x14));
      lVar5 = pdb_140b8f460(uStack_f0,param_4,param_5,&pppcStack_c0,
                            *(code *)((longlong)uStack_d8 + (longlong)(pcVar11 + 0x11)),
                            CONCAT44(uVar15,(uint)(byte)*(code *)((longlong)uStack_d8 +
                                                                 (longlong)(pcVar11 + 0x10))),
                            *(undefined2 *)((longlong)uStack_d8 + (longlong)(pcVar11 + 0xc)),
                            *(undefined2 *)((longlong)uStack_d8 + (longlong)(pcVar11 + 0xe)),
                            (undefined *)
                            ((longlong)uStack_d8 + (longlong)(puVar13 + 0x14 + (longlong)pcVar11)),
                            *(undefined4 *)((longlong)uStack_d8 + (longlong)(pcVar11 + 0x18)));
      if (lVar5 == 1) {
        pppcStack_c0 = param_4;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14305eac8,0x2b,&pppcStack_c0,&UNK_14305eaf8,&UNK_14305e3a0);
      }
      pdb_141ab4b30(&pppcStack_e8);
      CloseHandle(pppbStack_58);
      if (uStack_110 != 0) {
        pub_1406abac0((byte *)pppbStack_108,uStack_110,1);
      }
      if (cStack_49 == '\0') {
        return param_4;
      }
      pppbStack_58 = (byte ***)pdb_140e97000();
      if ((char)pppbStack_58[0xd] != '\x01') {
        pppcVar12 = (code ***)0x0;
        pppbStack_58 = (byte ***)pdb_142d8ec20(pppbStack_58);
        if (pppbStack_58 == (byte ***)0x0) break;
      }
      puVar14 = param_5;
      if (*pppbStack_58 == (byte **)0x0) {
        *pppbStack_58 = (byte **)0xffffffffffffffff;
        pdb_140e95370(pppbStack_58 + 1,unaff_R14);
        *pppbStack_58 = (byte **)((longlong)*pppbStack_58 + 1);
        return param_4;
      }
    }
    pppbStack_58 = (byte ***)pdb_142dc8090(&UNK_143326a50);
LAB_140b8fb5d:
    pppcVar12 = (code ***)0x0;
    pppbStack_58 = (byte ***)pdb_142d8ec20(pppbStack_58);
  } while (pppbStack_58 != (byte ***)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140b8fb91:
  pppcStack_c0 = pppcVar12;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14305e379,10,&pppcStack_c0,&UNK_14305ea88,&UNK_14305e388);
}

