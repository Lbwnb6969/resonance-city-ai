// VA 0x142b42b00, PDB extent 1409 bytes
// rhapsody::raw::device::GraphicsDevice::create_buffer<enum2$<core::option::Option<ref$<slice2$<u8> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody::raw::device::GraphicsDevice::create_buffer<enum2$<core::option::Option<ref$<slice2$<u8>
   > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/lib.rs
   Extent: 1409 */

int * pdb_142b42b00(int *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5,char *param_6,undefined8 param_7)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  undefined8 uStack_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  char *pcStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcStack_68 = param_6;
  uStack_60 = param_7;
  pcStack_58 = (char *)param_3;
  lVar4 = pdb_140e17200(&pcStack_68);
  uVar10 = (ulonglong)((uint)(param_5 >> 0x20) | 2);
  if (lVar4 == 0) {
    uVar10 = param_5 >> 0x20;
  }
  uVar5 = pdb_140e56170(param_2);
  uVar11 = param_5 & 0xffffffff;
  pcStack_d8 = param_2;
  pdb_140e547f0(&pcStack_c8,param_2 + 0x90,uVar5,*(longlong *)(param_2 + 0x660) + 0x10,
                *(longlong *)(param_2 + 0x6a8) + 0x10,
                (uVar10 & 0xffff) << 0x20 | param_5 & 0xffff000000000000 | uVar11,pcStack_58,param_4
               );
  pcVar3 = pcStack_b0;
  pcVar9 = pcStack_b8;
  if (pcStack_c8 != (char *)0xb) {
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(iStack_84,iStack_88);
    *(ulonglong *)(param_1 + 0x12) = CONCAT44(iStack_7c,iStack_80);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(iStack_94,iStack_98);
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(iStack_8c,iStack_90);
    *(undefined8 *)(param_1 + 8) = uStack_a8;
    *(ulonglong *)(param_1 + 10) = CONCAT44(iStack_9c,iStack_a0);
    *(char **)param_1 = pcStack_c8;
    *(char **)(param_1 + 2) = pcStack_c0;
    *(char **)(param_1 + 4) = pcStack_b8;
    *(char **)(param_1 + 6) = pcStack_b0;
    return param_1;
  }
  pcStack_58 = pcStack_c0;
  pcStack_70 = pcStack_c0;
  lVar4 = pdb_140e17200(&pcStack_68);
  pcVar7 = pcStack_d8;
  if (lVar4 == 0) {
LAB_142b42c66:
    *(char **)(param_1 + 2) = pcStack_58;
    param_1[0] = 0xb;
    param_1[1] = 0;
    return param_1;
  }
  uVar6 = pdb_140e17200(&pcStack_68);
  if (uVar11 < uVar6) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14366d338,0x41,&UNK_14366d3d0);
  }
  if (pcVar9 == (char *)0x0) {
    uVar5 = pdb_140e1d170(uVar11,1);
    if (((uint)param_5 < 0x40001) && ((uVar10 & 0xfd00) == 0)) {
      if (*pcVar7 == '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14366d498);
      }
      pcVar9 = pcVar7 + 8;
      LOCK();
      bVar13 = pcVar7[8] == '\0';
      if (bVar13) {
        pcVar7[8] = '\x01';
      }
      UNLOCK();
      if (!bVar13) {
        pdb_142dbd1a0(pcVar9);
      }
      pdb_140e9a150(pcVar9);
      pcStack_d0 = pcVar9;
      pdb_140e26410(&pcStack_c8,pcVar7 + 0x10,pcVar7,uVar11,0);
      pcVar9 = pcVar7 + 8;
      pdb_140e9a350();
      LOCK();
      cVar1 = *pcVar9;
      if (cVar1 == '\x01') {
        *pcVar9 = '\0';
      }
      UNLOCK();
      pcStack_b0 = pcStack_c0;
      pcStack_78 = pcStack_b8;
      iVar12 = iStack_a0;
      if (cVar1 != '\x01') {
        pdb_142dbcef0(pcVar9,0);
        pcStack_b0 = pcStack_c0;
        pcStack_78 = pcStack_b8;
        iVar12 = iStack_a0;
      }
    }
    else {
      uVar8 = pdb_140e56170(pcVar7);
      pdb_140e547f0(&pcStack_c8,param_2 + 0x90,uVar8,*(longlong *)(pcVar7 + 0x660) + 0x10,
                    *(longlong *)(pcVar7 + 0x6a8) + 0x10,uVar5,&UNK_14366d400,0x13);
      if (pcStack_c8 != (char *)0xb) {
        param_1[0x10] = iStack_88;
        param_1[0x11] = iStack_84;
        param_1[0x12] = iStack_80;
        param_1[0x13] = iStack_7c;
        param_1[0xc] = iStack_98;
        param_1[0xd] = iStack_94;
        param_1[0xe] = iStack_90;
        param_1[0xf] = iStack_8c;
        param_1[8] = (int)uStack_a8;
        param_1[9] = uStack_a8._4_4_;
        param_1[10] = iStack_a0;
        param_1[0xb] = iStack_9c;
        *(char **)param_1 = pcStack_c8;
        *(char **)(param_1 + 2) = pcStack_c0;
        *(char **)(param_1 + 4) = pcStack_b8;
        *(char **)(param_1 + 6) = pcStack_b0;
        goto LAB_142b42eb4;
      }
      pcStack_78 = pcStack_c0;
      pcStack_c8 = pcStack_b8;
      iVar12 = 0;
      if (pcStack_b8 == (char *)0x0) {
        uStack_49 = 1;
        pdb_142dc8110(&UNK_14366d413,0x14,&UNK_14366d428);
        goto LAB_142b42f68;
      }
    }
    uStack_49 = 1;
    pcVar9 = (char *)pdb_140e17200(&pcStack_68);
    if (pcVar9 <= pcStack_b0) {
      uStack_49 = 1;
      pdb_140e17210(&pcStack_68,pcStack_c8,pcVar9);
      pcStack_b8 = *(char **)(((ulonglong)pcStack_58 & 0xffffffffffffffc0) + 0x110 +
                             (ulonglong)((uint)pcStack_58 & 0x3f) * 8);
      pcStack_c8 = pcVar7;
      pcStack_b0 = param_6;
      uStack_a8 = param_7;
      uStack_49 = 0;
      iStack_a0 = iVar12;
      pdb_140e561a0(&iStack_128,pcVar7,&pcStack_c8);
      if (iStack_128 != 0xb) {
        *(undefined8 *)(param_1 + 0x10) = uStack_e8;
        *(undefined8 *)(param_1 + 0x12) = uStack_e0;
        *(undefined8 *)(param_1 + 0xc) = uStack_f8;
        *(undefined8 *)(param_1 + 0xe) = uStack_f0;
        param_1[8] = iStack_108;
        param_1[9] = iStack_104;
        param_1[10] = iStack_100;
        param_1[0xb] = iStack_fc;
        param_1[4] = iStack_118;
        param_1[5] = iStack_114;
        param_1[6] = iStack_110;
        param_1[7] = iStack_10c;
        *param_1 = iStack_128;
        param_1[1] = iStack_124;
        param_1[2] = iStack_120;
        param_1[3] = iStack_11c;
LAB_142b42eb4:
        pdb_14109e6e0(&pcStack_70);
        return param_1;
      }
      goto LAB_142b42c66;
    }
    uStack_49 = 1;
    pdb_142dc8420(0,pcVar9,pcStack_b0,&UNK_14366d4b0);
  }
  else {
    pcVar7 = (char *)pdb_140e17200(&pcStack_68);
    if (pcVar7 <= pcVar3) {
      pdb_140e17210(&pcStack_68,pcVar9,pcVar7);
      goto LAB_142b42c66;
    }
    pdb_142dc8420(0,pcVar7,pcVar3,&UNK_14366d3e8);
  }
LAB_142b42f68:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

