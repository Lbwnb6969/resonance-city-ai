// VA 0x1409d12c0, PDB extent 2934 bytes
// country_core::render::nani::gpu_world::OwnedGpuWorldSubset::extend_no_data
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::OwnedGpuWorldSubset::extend_no_data
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 2934 */

ulonglong pdb_1409d12c0(longlong param_1,undefined1 param_2,undefined8 param_3,ulonglong param_4,
                       ulonglong param_5,undefined8 *param_6,longlong param_7,undefined8 param_8,
                       longlong param_9,undefined8 *param_10)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char cVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined8 uStack_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined8 *puStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined *puStack_a8;
  undefined8 *puStack_a0;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined8 *puStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 auStack_4a [2];
  undefined8 uStack_48;
  
  uVar6 = param_5;
  uStack_48 = 0xfffffffffffffffe;
  if (param_7 == 0) {
    return param_4;
  }
  puVar15 = param_6 + param_7 * 2;
  pcVar2 = *(code **)(param_9 + 0x20);
  uVar3 = *param_10;
  uVar4 = param_10[1];
  uStack_8c = *(undefined4 *)(param_10 + 2);
  puVar13 = param_6;
  uStack_4b = param_2;
  auStack_4a[0] = param_2;
  do {
    puVar16 = puVar13;
    uVar14 = param_4 * 2;
    if (uVar6 < param_4 * 2) {
      uVar14 = uVar6;
    }
    while( true ) {
      if (puVar16 == puVar15) {
        return param_4;
      }
      puVar13 = puVar16 + 2;
      uVar17 = param_4;
      if (*(ulonglong *)(param_1 + 0x80) < param_4) break;
      if (uVar14 == param_4) {
        uStack_f8 = (undefined8 *)auStack_4a;
        uStack_f0 = 0x409d4a30;
        uStack_ec = 1;
        puStack_e8 = &param_5;
        pcStack_e0 = pdb_140f72a40;
        pdb_140f60760(&uStack_68,&UNK_14302d553,&uStack_f8);
        uStack_88 = (uint)uStack_68;
        uStack_84 = uStack_68._4_4_;
        uStack_80 = (uint)uStack_60;
        uStack_7c = uStack_60._4_4_;
        puStack_78 = puStack_58;
        if (_DAT_143ca42a4 != 0) {
          uStack_68 = (uint *)CONCAT71(uStack_68._1_7_,1);
          uStack_f8 = &uStack_68;
          pdb_142dc7060(&DAT_143ca42a4,0,&uStack_f8,&UNK_14302d828,param_10);
        }
        pdb_1400f0d40(&uStack_f8,_DAT_143cb2c90);
        if ((uint)uStack_f8 == 1) {
          uStack_68 = (uint *)CONCAT44(uStack_ec,uStack_f0);
          uStack_60 = (code *)CONCAT71(uStack_60._1_7_,(char)puStack_e8);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14302d502,0x13,&uStack_68,&UNK_14302d8d8,param_10);
        }
        pcStack_70 = (char *)CONCAT44(uStack_ec,uStack_f0);
        auStack_4a[1] = (char)puStack_e8;
        pdb_14007ee60();
        pbVar9 = pub_1406abab0(0xf,1);
        if (pbVar9 == (byte *)0x0) {
          pdb_142dc7e2a(1,0xf);
          goto LAB_1409d1b4b;
        }
        pbVar9[7] = 0x70;
        pbVar9[8] = 0x61;
        pbVar9[9] = 0x74;
        pbVar9[10] = 0x68;
        pbVar9[0xb] = 0x21;
        pbVar9[0xc] = 0x20;
        pbVar9[0xd] = 0x28;
        pbVar9[0xe] = 0x29;
        pbVar9[0] = 0x6d;
        pbVar9[1] = 0x6f;
        pbVar9[2] = 100;
        pbVar9[3] = 0x75;
        pbVar9[4] = 0x6c;
        pbVar9[5] = 0x65;
        pbVar9[6] = 0x5f;
        pbVar9[7] = 0x70;
        uStack_f8._0_4_ = 0xf;
        uStack_f8._4_4_ = 0;
        uStack_f0 = (uint)pbVar9;
        uStack_ec = (undefined4)((ulonglong)pbVar9 >> 0x20);
        puStack_e8 = (undefined8 *)0xf;
        pdb_142d7f1b0(&uStack_f8,0xf,0x17,1,1);
        puVar1 = puStack_78;
        uVar5 = _UNK_14302d51d;
        puVar16 = (undefined8 *)(CONCAT44(uStack_ec,uStack_f0) + (longlong)puStack_e8);
        *puVar16 = _DAT_14302d515;
        puVar16[1] = uVar5;
        *(undefined8 *)(CONCAT44(uStack_ec,uStack_f0) + 0xf + (longlong)puStack_e8) =
             0x6e726157203a3a20;
        puVar16 = (undefined8 *)((longlong)puStack_e8 + 0x17);
        uStack_68 = (uint *)CONCAT44(uStack_f8._4_4_,(uint)uStack_f8);
        uStack_60 = (code *)CONCAT44(uStack_ec,uStack_f0);
        uVar5 = CONCAT44(uStack_7c,uStack_80);
        puStack_58 = puVar16;
        if ((undefined8 *)((longlong)uStack_68 - (longlong)puVar16) < puStack_78) {
          pdb_142d7f1b0(&uStack_68,puVar16,puStack_78,1,1);
LAB_1409d14f4:
          puVar16 = puStack_58;
          pub_142e32760(uStack_60 + (longlong)puStack_58,uVar5,puVar1);
        }
        else if (puStack_78 != (undefined8 *)0x0) goto LAB_1409d14f4;
        puStack_e8 = (undefined8 *)((longlong)puVar16 + (longlong)puVar1);
        uStack_f8._0_4_ = (uint)uStack_68;
        uStack_f8._4_4_ = uStack_68._4_4_;
        uStack_f0 = (uint)uStack_60;
        uStack_ec = uStack_60._4_4_;
        puStack_58 = puStack_e8;
        cVar8 = pdb_14192b470(pcStack_70 + 8,&uStack_f8);
        if ((cVar8 == '\0') && (1 < *_DAT_143ca8e90)) {
          uStack_68 = &uStack_88;
          uStack_60 = pdb_140001020;
          uStack_f8._0_4_ = 0;
          uStack_f8._4_4_ = 0;
          uStack_f0 = 0x4302d52e;
          uStack_ec = 1;
          puStack_e8 = (undefined8 *)0x25;
          pcStack_e0 = (code *)0x0;
          uStack_c8 = 2;
          puStack_c0 = &UNK_14302d52e;
          uStack_b8 = 0x25;
          uStack_b0 = 1;
          uStack_ac = uStack_8c;
          puStack_a8 = &UNK_14302d52c;
          puStack_a0 = &uStack_68;
          uStack_d8 = uVar3;
          uStack_d0 = uVar4;
          pdb_140f332f0(&uStack_4c,&uStack_f8);
        }
        pcVar7 = pcStack_70;
        if (((auStack_4a[1] == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
           (cVar8 = pdb_142dc79e0(), cVar8 == '\0')) {
          pcVar7[1] = '\x01';
        }
        LOCK();
        cVar8 = *pcVar7;
        *pcVar7 = '\0';
        UNLOCK();
        if (cVar8 == '\x02') {
          pdb_142dc6ca0(pcVar7);
        }
        puVar16 = puVar13;
        if (CONCAT44(uStack_84,uStack_88) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_7c,uStack_80),CONCAT44(uStack_84,uStack_88),1);
        }
      }
      else {
        cVar8 = pdb_1409d1e50(param_1,param_3,uVar14);
        uVar17 = uVar14;
        if (cVar8 != '\0') break;
        uStack_68 = (uint *)auStack_4a;
        uStack_60 = pdb_1409d4a30;
        pdb_140f60760(&uStack_f8,&UNK_14302d4e0,&uStack_68);
        uStack_88 = (uint)uStack_f8;
        uStack_84 = uStack_f8._4_4_;
        uStack_80 = uStack_f0;
        uStack_7c = uStack_ec;
        puStack_78 = puStack_e8;
        if (_DAT_143ca42a0 != 0) {
          uStack_68 = (uint *)CONCAT71(uStack_68._1_7_,1);
          uStack_f8 = &uStack_68;
          pdb_142dc7060(&DAT_143ca42a0,0,&uStack_f8,&UNK_14302d800,param_10);
        }
        pdb_1400f0d40(&uStack_f8,_DAT_143cb2c88);
        if ((uint)uStack_f8 == 1) {
          uStack_68 = (uint *)CONCAT44(uStack_ec,uStack_f0);
          uStack_60 = (code *)CONCAT71(uStack_60._1_7_,(char)puStack_e8);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14302d502,0x13,&uStack_68,&UNK_14302d8d8,param_10);
        }
        pcStack_70 = (char *)CONCAT44(uStack_ec,uStack_f0);
        auStack_4a[1] = (char)puStack_e8;
        pdb_14007ee60();
        pbVar9 = pub_1406abab0(0xf,1);
        if (pbVar9 == (byte *)0x0) {
          pdb_142dc7e2a(1,0xf);
LAB_1409d1b4b:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pbVar9[7] = 0x70;
        pbVar9[8] = 0x61;
        pbVar9[9] = 0x74;
        pbVar9[10] = 0x68;
        pbVar9[0xb] = 0x21;
        pbVar9[0xc] = 0x20;
        pbVar9[0xd] = 0x28;
        pbVar9[0xe] = 0x29;
        pbVar9[0] = 0x6d;
        pbVar9[1] = 0x6f;
        pbVar9[2] = 100;
        pbVar9[3] = 0x75;
        pbVar9[4] = 0x6c;
        pbVar9[5] = 0x65;
        pbVar9[6] = 0x5f;
        pbVar9[7] = 0x70;
        uStack_f8._0_4_ = 0xf;
        uStack_f8._4_4_ = 0;
        uStack_f0 = (uint)pbVar9;
        uStack_ec = (undefined4)((ulonglong)pbVar9 >> 0x20);
        puStack_e8 = (undefined8 *)0xf;
        pdb_142d7f1b0(&uStack_f8,0xf,0x17,1,1);
        puVar1 = puStack_78;
        uVar5 = _UNK_14302d51d;
        puVar16 = (undefined8 *)(CONCAT44(uStack_ec,uStack_f0) + (longlong)puStack_e8);
        *puVar16 = _DAT_14302d515;
        puVar16[1] = uVar5;
        *(undefined8 *)(CONCAT44(uStack_ec,uStack_f0) + 0xf + (longlong)puStack_e8) =
             0x6e726157203a3a20;
        puVar16 = (undefined8 *)((longlong)puStack_e8 + 0x17);
        uStack_68 = (uint *)CONCAT44(uStack_f8._4_4_,(uint)uStack_f8);
        uStack_60 = (code *)CONCAT44(uStack_ec,uStack_f0);
        uVar5 = CONCAT44(uStack_7c,uStack_80);
        puStack_58 = puVar16;
        if ((undefined8 *)((longlong)uStack_68 - (longlong)puVar16) < puStack_78) {
          pdb_142d7f1b0(&uStack_68,puVar16,puStack_78,1,1);
LAB_1409d177c:
          puVar16 = puStack_58;
          pub_142e32760(uStack_60 + (longlong)puStack_58,uVar5,puVar1);
        }
        else if (puStack_78 != (undefined8 *)0x0) goto LAB_1409d177c;
        puStack_e8 = (undefined8 *)((longlong)puVar16 + (longlong)puVar1);
        uStack_f8._0_4_ = (uint)uStack_68;
        uStack_f8._4_4_ = uStack_68._4_4_;
        uStack_f0 = (uint)uStack_60;
        uStack_ec = uStack_60._4_4_;
        puStack_58 = puStack_e8;
        cVar8 = pdb_14192b470(pcStack_70 + 8,&uStack_f8);
        if ((cVar8 == '\0') && (1 < *_DAT_143ca8e90)) {
          uStack_68 = &uStack_88;
          uStack_60 = pdb_140001020;
          uStack_f8._0_4_ = 0;
          uStack_f8._4_4_ = 0;
          uStack_f0 = 0x4302d52e;
          uStack_ec = 1;
          puStack_e8 = (undefined8 *)0x25;
          pcStack_e0 = (code *)0x0;
          uStack_c8 = 2;
          puStack_c0 = &UNK_14302d52e;
          uStack_b8 = 0x25;
          uStack_b0 = 1;
          uStack_ac = uStack_8c;
          puStack_a8 = &UNK_14302d52c;
          puStack_a0 = &uStack_68;
          uStack_d8 = uVar3;
          uStack_d0 = uVar4;
          pdb_140f332f0(&uStack_4c,&uStack_f8);
        }
        pcVar7 = pcStack_70;
        if (((auStack_4a[1] == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
           (cVar8 = pdb_142dc79e0(), cVar8 == '\0')) {
          pcVar7[1] = '\x01';
        }
        LOCK();
        cVar8 = *pcVar7;
        *pcVar7 = '\0';
        UNLOCK();
        if (cVar8 == '\x02') {
          pdb_142dc6ca0(pcVar7);
        }
        puVar16 = puVar13;
        if (CONCAT44(uStack_84,uStack_88) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_7c,uStack_80),CONCAT44(uStack_84,uStack_88),1);
        }
      }
    }
    *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
    pdb_1416429a0(&uStack_f8,param_1);
    if ((uint)uStack_f8 == 1) {
      do {
        *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
        pdb_1416429a0(&uStack_f8,param_1);
      } while ((char)uStack_f8 != '\0');
    }
    uVar14 = (ulonglong)uStack_f0;
    uStack_f8._0_4_ = uStack_f8._4_4_;
    uStack_f8._4_4_ = uStack_f0;
    uStack_f0 = CONCAT31(uStack_f0._1_3_,uStack_4b);
    (*pcVar2)(param_8,&uStack_f8);
    if (*(ulonglong *)(param_1 + 0x58) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar14,*(ulonglong *)(param_1 + 0x58),&UNK_143382cf0);
    }
    uVar5 = puVar16[1];
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + uVar14 * 0x10);
    *puVar1 = *puVar16;
    puVar1[1] = uVar5;
    uVar10 = *(ulonglong *)(param_1 + 0x60);
    do {
      uVar12 = uVar14;
      if (uVar10 <= uVar14) {
        uVar12 = uVar10;
      }
      LOCK();
      uVar11 = *(ulonglong *)(param_1 + 0x60);
      bVar18 = uVar10 == uVar11;
      if (bVar18) {
        *(ulonglong *)(param_1 + 0x60) = uVar12;
        uVar11 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar11;
    } while (!bVar18);
    uVar10 = *(ulonglong *)(param_1 + 0x68);
    do {
      uVar12 = uVar14;
      if (uVar14 < uVar10) {
        uVar12 = uVar10;
      }
      LOCK();
      uVar11 = *(ulonglong *)(param_1 + 0x68);
      bVar18 = uVar10 == uVar11;
      if (bVar18) {
        *(ulonglong *)(param_1 + 0x68) = uVar12;
        uVar11 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar11;
    } while (!bVar18);
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 1;
    param_4 = uVar17;
  } while( true );
}

