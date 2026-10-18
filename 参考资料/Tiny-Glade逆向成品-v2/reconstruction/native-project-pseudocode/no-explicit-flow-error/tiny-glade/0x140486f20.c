// VA 0x140486f20, PDB extent 3986 bytes
// tiny_glade::sdl_setup::SdlWindowBackend::setup_window
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::sdl_setup::SdlWindowBackend::setup_window
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_setup.rs
   Extent: 3986 */

undefined8 pdb_140486f20(longlong param_1,ulonglong ******param_2)

{
  uint uVar1;
  ulonglong ******ppppppuVar2;
  ulonglong *****arg1;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *******pppppppuVar14;
  uint uVar15;
  ulonglong *******pppppppuVar16;
  ulonglong *******pppppppuVar17;
  int iStack_1c8;
  undefined4 uStack_1c4;
  ulonglong *******pppppppuStack_1c0;
  int iStack_1b8;
  undefined4 uStack_1b4;
  ulonglong ******ppppppuStack_1b0;
  ulonglong *******pppppppuStack_1a8;
  ulonglong *******pppppppuStack_1a0;
  ulonglong *******pppppppuStack_198;
  ulonglong ******ppppppuStack_190;
  ulonglong *******pppppppuStack_188;
  ulonglong *******pppppppuStack_180;
  ulonglong *******pppppppuStack_178;
  ulonglong *******pppppppuStack_170;
  ulonglong ******ppppppuStack_168;
  ulonglong ******ppppppuStack_160;
  ulonglong *******pppppppuStack_150;
  ulonglong *******pppppppuStack_148;
  ulonglong *******pppppppuStack_140;
  ulonglong *******pppppppuStack_138;
  ulonglong ******ppppppuStack_130;
  ulonglong ******ppppppuStack_128;
  undefined1 auStack_114 [4];
  ulonglong *******pppppppuStack_110;
  code *pcStack_108;
  ulonglong *******pppppppuStack_100;
  ulonglong *******pppppppuStack_f8;
  ulonglong *******pppppppuStack_f0;
  ulonglong *******pppppppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  ulonglong *******pppppppuStack_a8;
  ulonglong *******pppppppuStack_a0;
  ulonglong *******pppppppuStack_98;
  ulonglong *******pppppppuStack_90;
  ulonglong *******pppppppuStack_88;
  ulonglong *******pppppppuStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*param_2 == (ulonglong *****)0x8000000000000001) {
LAB_1404871c2:
    if (2 < *_DAT_143ca8e90) {
      pppppppuStack_100 = (ulonglong *******)0x0;
      pppppppuStack_f8 = (ulonglong *******)&UNK_142f5dd4e;
      pppppppuStack_f0 = (ulonglong *******)0x15;
      pppppppuStack_e8 = (ulonglong *******)0x0;
      uStack_e0 = (ulonglong ******)&UNK_142f5dcf3;
      uStack_d8 = (ulonglong ******)0x22;
      uStack_d0 = 3;
      puStack_c8 = &UNK_142f5dd4e;
      uStack_c0 = 0x15;
      uStack_b8 = 0x3a00000001;
      puStack_b0 = &UNK_142f5dd63;
      pppppppuStack_a8 = (ulonglong *******)0x5b;
      pdb_140f332f0(&uStack_61,&pppppppuStack_100);
    }
    pdb_140487ec0(&pppppppuStack_100,param_1);
    pppppppuVar14 = pppppppuStack_f8;
    pppppppuVar16 = pppppppuStack_100;
    if (pppppppuStack_f0 == (ulonglong *******)0x0) {
      pppppppuStack_188 = (ulonglong *******)0x8000000000000001;
      pppppppuVar17 = pppppppuStack_f8;
    }
    else {
      pppppppuStack_188 = (ulonglong *******)*pppppppuStack_f8;
      pppppppuStack_180 = (ulonglong *******)pppppppuStack_f8[1];
      pppppppuStack_178 = (ulonglong *******)pppppppuStack_f8[2];
      pppppppuStack_170 = (ulonglong *******)pppppppuStack_f8[3];
      ppppppuStack_168 = pppppppuStack_f8[4];
      ppppppuStack_160 = pppppppuStack_f8[5];
      pppppppuVar17 = pppppppuStack_f8 + 6;
    }
    if (pppppppuStack_f8 + (longlong)pppppppuStack_f0 * 6 != pppppppuVar17) {
      uVar13 = (ulonglong)
               ((longlong)(pppppppuStack_f8 + (longlong)pppppppuStack_f0 * 6) -
               (longlong)pppppppuVar17) / 0x30;
      pppppppuVar17 = pppppppuVar17 + 1;
      do {
        ppppppuVar2 = pppppppuVar17[-1];
        if ((!SBORROW8(0,(longlong)ppppppuVar2)) && (ppppppuVar2 != (ulonglong ******)0x0)) {
          pub_1406abac0((byte *)*pppppppuVar17,(ulonglong)ppppppuVar2,1);
        }
        pppppppuVar17 = pppppppuVar17 + 6;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (pppppppuVar16 != (ulonglong *******)0x0) {
      pub_1406abac0((byte *)pppppppuVar14,(longlong)pppppppuVar16 * 0x30,8);
    }
    if (pppppppuStack_188 != (ulonglong *******)0x8000000000000001) goto LAB_140487391;
    *(undefined1 *)((longlong)param_2 + 0x46) = 0;
  }
  else {
    pppppppuStack_188 = (ulonglong *******)param_2;
    if (2 < *_DAT_143ca8e90) {
      pppppppuStack_90 = (ulonglong *******)pdb_1401435d0;
      pppppppuStack_100 = (ulonglong *******)0x0;
      pppppppuStack_f8 = (ulonglong *******)&UNK_142f5dd4e;
      pppppppuStack_f0 = (ulonglong *******)0x15;
      pppppppuStack_e8 = (ulonglong *******)0x0;
      uStack_e0 = (ulonglong ******)&UNK_142f5dcf3;
      uStack_d8 = (ulonglong ******)0x22;
      uStack_d0 = 3;
      puStack_c8 = &UNK_142f5dd4e;
      uStack_c0 = 0x15;
      uStack_b8 = 0x3600000001;
      puStack_b0 = &UNK_142f5dd20;
      pppppppuStack_a8 = (ulonglong *******)&pppppppuStack_98;
      pppppppuStack_98 = (ulonglong *******)&pppppppuStack_188;
      pdb_140f332f0(&uStack_61,&pppppppuStack_100);
    }
    pdb_140487ec0(&pppppppuStack_100,param_1);
    pppppppuStack_80 = pppppppuStack_f8 + (longlong)pppppppuStack_f0 * 6;
    pppppppuStack_98 = pppppppuStack_f8;
    pppppppuStack_88 = pppppppuStack_100;
    pppppppuStack_90 = pppppppuStack_f8;
    pdb_1406a5ff0(&pppppppuStack_100,&pppppppuStack_98,param_2);
    pppppppuVar16 = pppppppuStack_100;
    if (pppppppuStack_100 == (ulonglong *******)0x8000000000000001) {
      if (pppppppuStack_80 != pppppppuStack_90) {
        uVar13 = (ulonglong)((longlong)pppppppuStack_80 - (longlong)pppppppuStack_90) / 0x30;
        pppppppuVar16 = pppppppuStack_90 + 1;
        do {
          ppppppuVar2 = pppppppuVar16[-1];
          if ((!SBORROW8(0,(longlong)ppppppuVar2)) && (ppppppuVar2 != (ulonglong ******)0x0)) {
            pub_1406abac0((byte *)*pppppppuVar16,(ulonglong)ppppppuVar2,1);
          }
          pppppppuVar16 = pppppppuVar16 + 6;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (pppppppuStack_88 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_98,(longlong)pppppppuStack_88 * 0x30,8);
      }
      goto LAB_1404871c2;
    }
    ppppppuStack_128 = uStack_d8;
    pppppppuStack_138 = pppppppuStack_e8;
    ppppppuStack_130 = uStack_e0;
    pppppppuStack_148 = pppppppuStack_f8;
    pppppppuStack_140 = pppppppuStack_f0;
    if (pppppppuStack_80 != pppppppuStack_90) {
      uVar13 = (ulonglong)((longlong)pppppppuStack_80 - (longlong)pppppppuStack_90) / 0x30;
      pppppppuVar14 = pppppppuStack_90 + 1;
      do {
        ppppppuVar2 = pppppppuVar14[-1];
        if ((!SBORROW8(0,(longlong)ppppppuVar2)) && (ppppppuVar2 != (ulonglong ******)0x0)) {
          pub_1406abac0((byte *)*pppppppuVar14,(ulonglong)ppppppuVar2,1);
        }
        pppppppuVar14 = pppppppuVar14 + 6;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (pppppppuStack_88 != (ulonglong *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_98,(longlong)pppppppuStack_88 * 0x30,8);
    }
    pppppppuStack_188 = pppppppuVar16;
    pppppppuStack_180 = pppppppuStack_148;
    pppppppuStack_178 = pppppppuStack_140;
    pppppppuStack_170 = pppppppuStack_138;
    ppppppuStack_168 = ppppppuStack_130;
    ppppppuStack_160 = ppppppuStack_128;
LAB_140487391:
    if (SBORROW8(0,(longlong)pppppppuStack_188)) {
      pppppppuStack_100 = (ulonglong *******)0x8000000000000000;
    }
    else {
      pdb_140f60be0(&pppppppuStack_100,&pppppppuStack_188);
    }
    ppppppuVar2 = ppppppuStack_168;
    pppppppuVar16 = pppppppuStack_170;
    pppppppuStack_148 = pppppppuStack_100;
    pppppppuStack_140 = pppppppuStack_f8;
    pppppppuStack_138 = pppppppuStack_f0;
    arg1 = *param_2;
    if (((arg1 != (ulonglong *****)0x8000000000000001) && (!SBORROW8(0,(longlong)arg1))) &&
       (arg1 != (ulonglong *****)0x0)) {
      pub_1406abac0((byte *)param_2[1],(ulonglong)arg1,1);
    }
    param_2[2] = (ulonglong *****)pppppppuStack_138;
    *param_2 = (ulonglong *****)pppppppuStack_148;
    param_2[1] = (ulonglong *****)pppppppuStack_140;
    param_2[3] = (ulonglong *****)pppppppuVar16;
    param_2[4] = (ulonglong *****)ppppppuVar2;
  }
  uVar5 = *(uint *)(param_2 + 5);
  uVar1 = *(uint *)((longlong)param_2 + 0x2c);
  lVar12 = param_1;
  pdb_1406d1450(&pppppppuStack_148,param_1,&UNK_142f5dce9,10,uVar5,uVar1);
  piVar10 = (int *)pdb_1406d1390(param_1);
  if ((lVar12 != 7) || (*(int *)((longlong)piVar10 + 3) != 0x646e616c || *piVar10 != 0x6c796177)) {
    pdb_1406d10c0(&pppppppuStack_148);
  }
  uVar11 = pdb_1406d1100(&pppppppuStack_148);
  uVar11 = pdb_1406d10d0(uVar11);
  pdb_1406d0f10(uVar11);
  if (pppppppuStack_188 != (ulonglong *******)0x8000000000000001) {
    if (*(char *)((longlong)param_2 + 0x44) == '\0') {
      pdb_1406d1250(&pppppppuStack_100,param_1,(ulonglong)ppppppuStack_160 & 0xffffffff);
      if (SBORROW8(0,(longlong)pppppppuStack_100)) {
        pppppppuStack_98 = pppppppuStack_f8;
        pppppppuStack_90 = pppppppuStack_f0;
        uVar4 = pdb_1406d09a0(&pppppppuStack_98);
        uVar15 = uVar4 - uVar5;
        if (uVar4 < uVar5) {
          uVar15 = 0;
        }
        uVar5 = pdb_1406d09b0(&pppppppuStack_98);
        uVar4 = uVar5 - uVar1;
        if (uVar5 < uVar1) {
          uVar4 = 0;
        }
        iVar6 = pdb_14007e750(&pppppppuStack_98);
        iVar7 = pdb_1406d0960(&pppppppuStack_98);
        pdb_1406d10e0(&pppppppuStack_148,iVar6 + (uVar15 >> 1),iVar7 + (uVar4 >> 1));
      }
      else if (pppppppuStack_100 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_f8,(ulonglong)pppppppuStack_100,1);
      }
    }
    else {
      pdb_1406d1250(&pppppppuStack_100,param_1,(ulonglong)ppppppuStack_160 & 0xffffffff);
      pppppppuVar16 = pppppppuStack_f8;
      if (SBORROW8(0,(longlong)pppppppuStack_100)) {
        pppppppuStack_98 = pppppppuStack_f8;
        pppppppuStack_90 = pppppppuStack_f0;
      }
      else {
        pppppppuStack_150 = pppppppuStack_100;
        pdb_1406d0970(&pppppppuStack_98,0,0,uVar5,uVar1);
        if (pppppppuStack_150 != (ulonglong *******)0x0) {
          pub_1406abac0((byte *)pppppppuVar16,(ulonglong)pppppppuStack_150,1);
        }
      }
      uVar8 = pdb_14007e750(&pppppppuStack_98);
      uVar9 = pdb_1406d0960(&pppppppuStack_98);
      pdb_1406d10e0(&pppppppuStack_148,uVar8,uVar9);
    }
  }
  pdb_1406d0f20(&iStack_1c8,&pppppppuStack_148);
  if (CONCAT44(uStack_1c4,iStack_1c8) != -0x7fffffffffffffff) {
    ppppppuStack_190 = ppppppuStack_1b0;
    pppppppuStack_1a0 = pppppppuStack_1c0;
    uStack_62 = 1;
    pdb_140f3f5b0(&pppppppuStack_100);
    uStack_78 = (undefined4)uStack_e0;
    uStack_74 = uStack_e0._4_4_;
    uStack_70 = (undefined4)uStack_d8;
    uStack_6c = uStack_d8._4_4_;
    pppppppuStack_88 = pppppppuStack_f0;
    pppppppuStack_80 = pppppppuStack_e8;
    pppppppuStack_98 = pppppppuStack_100;
    pppppppuStack_90 = pppppppuStack_f8;
    pppppppuStack_f0 = (ulonglong *******)CONCAT44(uStack_1c4,iStack_1c8);
    uStack_e0 = (ulonglong ******)CONCAT44(uStack_1b4,iStack_1b8);
    uStack_d8 = ppppppuStack_1b0;
    pppppppuStack_e8 = pppppppuStack_1c0;
    pppppppuStack_100 = (ulonglong *******)&UNK_142f5dd16;
    pppppppuStack_f8 = (ulonglong *******)0xa;
    uStack_62 = 0;
    pdb_142d88760(&pppppppuStack_100,&pppppppuStack_98);
    if (pppppppuStack_148 != (ulonglong *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_140,(ulonglong)pppppppuStack_148,1);
    }
    pdb_1406d1ba0(auStack_114);
    pdb_1406d1b60(auStack_114);
    uVar11 = 1;
    goto joined_r0x0001404877e1;
  }
  pppppppuStack_a0 = pppppppuStack_1c0;
  if (*(char *)((longlong)param_2 + 0x44) != '\0') {
    if (((pppppppuStack_188 != (ulonglong *******)0x8000000000000001) &&
        (*(char *)((longlong)param_2 + 0x46) != '\0')) &&
       (pdb_140488270(&iStack_1c8,param_1,(ulonglong)ppppppuStack_160 & 0xffffffff,param_2),
       iStack_1c8 == 1)) {
      pdb_1406d1820(&pppppppuStack_1a8,&pppppppuStack_a0,&iStack_1c8);
      if (SBORROW8(0,(longlong)pppppppuStack_1a8)) {
        pdb_1406d17b0(&pppppppuStack_1a8,&pppppppuStack_a0,1);
        if (SBORROW8(0,(longlong)pppppppuStack_1a8)) {
          sVar3 = pdb_1406d15b0();
          iVar6 = 0;
          if (0 < iStack_1b8) {
            iVar6 = iStack_1b8;
          }
          *(undefined4 *)(param_2 + 6) = 1;
          *(ulonglong *)((longlong)param_2 + 0x34) =
               CONCAT44(-(uint)(0 < (int)((ulonglong)pppppppuStack_1c0 >> 0x20)),
                        -(uint)(0 < (int)pppppppuStack_1c0)) & (ulonglong)pppppppuStack_1c0;
          *(int *)((longlong)param_2 + 0x3c) = iVar6 * 1000;
          *(short *)(param_2 + 8) = sVar3 << 3;
          goto joined_r0x000140487af8;
        }
        pppppppuStack_88 = pppppppuStack_198;
        pppppppuStack_98 = pppppppuStack_1a8;
        pppppppuStack_90 = pppppppuStack_1a0;
        if (1 < *_DAT_143ca8e90) {
          pppppppuStack_110 = (ulonglong *******)&pppppppuStack_98;
          pcStack_108 = pdb_140094770;
          pppppppuStack_100 = (ulonglong *******)&UNK_142f5dd4e;
          pppppppuStack_f8 = (ulonglong *******)0x15;
          pppppppuStack_f0 = (ulonglong *******)&UNK_142f5dd4e;
          pppppppuStack_e8 = (ulonglong *******)0x15;
          uStack_e0 = (ulonglong ******)&UNK_142f5de30;
          pdb_1400c9be0(&UNK_142f5dde8,&pppppppuStack_110,2,&pppppppuStack_100);
        }
      }
      else {
        pppppppuStack_88 = pppppppuStack_198;
        pppppppuStack_98 = pppppppuStack_1a8;
        pppppppuStack_90 = pppppppuStack_1a0;
        if (1 < *_DAT_143ca8e90) {
          pppppppuStack_110 = (ulonglong *******)&pppppppuStack_98;
          pcStack_108 = pdb_140094770;
          pppppppuStack_100 = (ulonglong *******)&UNK_142f5dd4e;
          pppppppuStack_f8 = (ulonglong *******)0x15;
          pppppppuStack_f0 = (ulonglong *******)&UNK_142f5dd4e;
          pppppppuStack_e8 = (ulonglong *******)0x15;
          uStack_e0 = (ulonglong ******)&UNK_142f5ddd0;
          pdb_1400c9be0(&UNK_142f5dd90,&pppppppuStack_110,2,&pppppppuStack_100);
        }
      }
      if (pppppppuStack_98 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_90,(ulonglong)pppppppuStack_98,1);
      }
    }
    *(undefined1 *)((longlong)param_2 + 0x46) = 0;
    pdb_1406d17b0(&pppppppuStack_1a8,&pppppppuStack_a0,0x1001);
    if (!SBORROW8(0,(longlong)pppppppuStack_1a8)) {
      pppppppuStack_88 = pppppppuStack_198;
      pppppppuStack_98 = pppppppuStack_1a8;
      pppppppuStack_90 = pppppppuStack_1a0;
      if (*_DAT_143ca8e90 != 0) {
        pppppppuStack_110 = (ulonglong *******)&pppppppuStack_98;
        pcStack_108 = pdb_140094770;
        pppppppuStack_100 = (ulonglong *******)0x0;
        pppppppuStack_f8 = (ulonglong *******)&UNK_142f5dd4e;
        pppppppuStack_f0 = (ulonglong *******)0x15;
        pppppppuStack_e8 = (ulonglong *******)0x0;
        uStack_e0 = (ulonglong ******)&UNK_142f5dcf3;
        uStack_d8 = (ulonglong ******)0x22;
        uStack_d0 = 1;
        puStack_c8 = &UNK_142f5dd4e;
        uStack_c0 = 0x15;
        uStack_b8 = 0x9400000001;
        puStack_b0 = &UNK_142f5de48;
        pppppppuStack_a8 = (ulonglong *******)&pppppppuStack_110;
        pdb_140f332f0(&uStack_61,&pppppppuStack_100);
      }
      *(undefined1 *)((longlong)param_2 + 0x44) = 0;
      if (pppppppuStack_98 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_90,(ulonglong)pppppppuStack_98,1);
      }
    }
  }
joined_r0x000140487af8:
  if (pppppppuStack_148 != (ulonglong *******)0x0) {
    pub_1406abac0((byte *)pppppppuStack_140,(ulonglong)pppppppuStack_148,1);
  }
  pdb_1406d1ba0(auStack_114);
  pdb_1406d1b60(auStack_114);
  uVar11 = 0;
joined_r0x0001404877e1:
  if (((pppppppuStack_188 != (ulonglong *******)0x8000000000000001) &&
      (!SBORROW8(0,(longlong)pppppppuStack_188))) && (pppppppuStack_188 != (ulonglong *******)0x0))
  {
    pub_1406abac0((byte *)pppppppuStack_180,(ulonglong)pppppppuStack_188,1);
  }
  return uVar11;
}

