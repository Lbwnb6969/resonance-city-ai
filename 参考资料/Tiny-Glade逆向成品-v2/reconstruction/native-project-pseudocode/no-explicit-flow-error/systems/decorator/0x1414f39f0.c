// VA 0x1414f39f0, PDB extent 1313 bytes
// rhapsody::raw::device::GraphicsDevice::create_buffer<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody::raw::device::GraphicsDevice::create_buffer<ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/lib.rs
   Extent: 1313 */

void pdb_1414f39f0(int *param_1,char *param_2,ulonglong param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcStack_c0 = param_5;
  pcStack_c8 = param_4;
  uVar5 = pdb_140e56170(param_2);
  uVar6 = param_3 | 0x200000000;
  if (param_5 == (char *)0x0) {
    uVar6 = param_3;
  }
  pdb_140e547f0(&pcStack_b8,param_2 + 0x90,uVar5,*(longlong *)(param_2 + 0x660) + 0x10,
                *(longlong *)(param_2 + 0x6a8) + 0x10,
                param_3 & 0xffff0000ffffffff | uVar6 & 0xffff00000000,&UNK_1433174c0,0x12);
  pcVar4 = pcStack_b0;
  if (pcStack_b8 != (char *)0xb) {
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(iStack_74,iStack_78);
    *(ulonglong *)(param_1 + 0x12) = CONCAT44(iStack_6c,iStack_70);
    *(ulonglong *)(param_1 + 0xc) = CONCAT44(iStack_84,iStack_88);
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(iStack_7c,iStack_80);
    *(undefined8 *)(param_1 + 8) = uStack_98;
    *(ulonglong *)(param_1 + 10) = CONCAT44(iStack_8c,iStack_90);
    *(char **)param_1 = pcStack_b8;
    *(char **)(param_1 + 2) = pcStack_b0;
    *(char **)(param_1 + 4) = pcStack_a8;
    *(char **)(param_1 + 6) = pcStack_a0;
    return;
  }
  pcStack_60 = pcStack_b0;
  if (param_5 == (char *)0x0) {
LAB_1414f3b06:
    *(char **)(param_1 + 2) = pcVar4;
    param_1[0] = 0xb;
    param_1[1] = 0;
    return;
  }
  pcVar8 = (char *)(param_3 & 0xffffffff);
  if (pcVar8 < param_5) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143317590,0x41,&UNK_143317628);
  }
  if (pcStack_a8 == (char *)0x0) {
    pcStack_58 = (char *)pdb_140e1d170(pcVar8,1);
    if ((uint)param_3 < 0x40001 && (param_3 & 0xfd0000000000) == 0) {
      if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143317490);
      }
      pcVar1 = param_2 + 8;
      LOCK();
      bVar9 = param_2[8] == '\0';
      if (bVar9) {
        param_2[8] = '\x01';
      }
      UNLOCK();
      if (!bVar9) {
        pdb_142dbd1a0(pcVar1);
      }
      pdb_140e9a150(pcVar1);
      pcStack_58 = pcVar1;
      pdb_140e26410(&pcStack_b8,param_2 + 0x10,param_2,pcVar8,0);
      pcVar8 = param_2 + 8;
      pdb_140e9a350();
      LOCK();
      cVar2 = *pcVar8;
      if (cVar2 == '\x01') {
        *pcVar8 = '\0';
      }
      UNLOCK();
      pcStack_a0 = pcStack_b0;
      pcStack_68 = pcStack_a8;
      iVar7 = iStack_90;
      if (cVar2 != '\x01') {
        pdb_142dbcef0(pcVar8,0);
        pcStack_a0 = pcStack_b0;
        pcStack_68 = pcStack_a8;
        iVar7 = iStack_90;
      }
    }
    else {
      uVar5 = pdb_140e56170(param_2);
      pdb_140e547f0(&pcStack_b8,param_2 + 0x90,uVar5,*(longlong *)(param_2 + 0x660) + 0x10,
                    *(longlong *)(param_2 + 0x6a8) + 0x10,pcStack_58,&UNK_143317658,0x13);
      if (pcStack_b8 != (char *)0xb) {
        param_1[0x10] = iStack_78;
        param_1[0x11] = iStack_74;
        param_1[0x12] = iStack_70;
        param_1[0x13] = iStack_6c;
        param_1[0xc] = iStack_88;
        param_1[0xd] = iStack_84;
        param_1[0xe] = iStack_80;
        param_1[0xf] = iStack_7c;
        param_1[8] = (int)uStack_98;
        param_1[9] = uStack_98._4_4_;
        param_1[10] = iStack_90;
        param_1[0xb] = iStack_8c;
        *(char **)param_1 = pcStack_b8;
        *(char **)(param_1 + 2) = pcStack_b0;
        *(char **)(param_1 + 4) = pcStack_a8;
        *(char **)(param_1 + 6) = pcStack_a0;
        goto LAB_1414f3d42;
      }
      pcStack_68 = pcStack_b0;
      pcStack_b8 = pcStack_a8;
      iVar7 = 0;
      if (pcStack_a8 == (char *)0x0) {
        uStack_49 = 1;
        pdb_142dc8110(&UNK_14331766b,0x14,&UNK_143317680);
        goto LAB_1414f3df0;
      }
    }
    if (param_5 <= pcStack_a0) {
      uStack_49 = 1;
      pdb_140e19340(&pcStack_c8,pcStack_b8,param_5);
      uStack_98 = *(undefined8 *)
                   (((ulonglong)pcVar4 & 0xffffffffffffffc0) + 0x110 +
                   (ulonglong)((uint)pcVar4 & 0x3f) * 8);
      pcStack_a0 = param_5;
      uStack_49 = 0;
      pcStack_b8 = param_2;
      pcStack_a8 = param_4;
      iStack_90 = iVar7;
      pdb_140e57530(&iStack_118,param_2,&pcStack_b8);
      if (iStack_118 != 0xb) {
        *(undefined8 *)(param_1 + 0x10) = uStack_d8;
        *(undefined8 *)(param_1 + 0x12) = uStack_d0;
        *(undefined8 *)(param_1 + 0xc) = uStack_e8;
        *(undefined8 *)(param_1 + 0xe) = uStack_e0;
        param_1[8] = iStack_f8;
        param_1[9] = iStack_f4;
        param_1[10] = iStack_f0;
        param_1[0xb] = iStack_ec;
        param_1[4] = iStack_108;
        param_1[5] = iStack_104;
        param_1[6] = iStack_100;
        param_1[7] = iStack_fc;
        *param_1 = iStack_118;
        param_1[1] = iStack_114;
        param_1[2] = iStack_110;
        param_1[3] = iStack_10c;
LAB_1414f3d42:
        pdb_14149d0a0(&pcStack_60);
        return;
      }
      goto LAB_1414f3b06;
    }
    uStack_49 = 1;
    pdb_142dc8420(0,param_5,pcStack_a0,&UNK_143317698);
  }
  else {
    if (param_5 <= pcStack_a0) {
      pdb_140e19340(&pcStack_c8,pcStack_a8,param_5);
      goto LAB_1414f3b06;
    }
    pdb_142dc8420(0,param_5,pcStack_a0,&UNK_143317640);
  }
LAB_1414f3df0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

