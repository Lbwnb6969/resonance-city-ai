// VA 0x1411f0520, PDB extent 1629 bytes
// zip::write::zip_writer::ZipWriter::finish_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::write::zip_writer::ZipWriter::finish_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
   Extent: 1629 */

void pdb_1411f0520(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  short sVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  short sVar14;
  ulonglong uVar15;
  ulonglong in_stack_fffffffffffffed8;
  undefined4 uVar16;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  longlong lStack_d8;
  longlong lStack_d0;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0xb9) != '\0') {
    if (*(longlong *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1432b1530);
    }
    lVar13 = *(longlong *)(param_2 + 8);
    lVar10 = *(longlong *)(param_2 + 0x10) * 0xb0;
    pdb_140d9c6d0(&iStack_c8,lVar13 + lVar10 + -0xb0);
    uVar16 = (undefined4)(in_stack_fffffffffffffed8 >> 0x20);
    lVar7 = CONCAT44(iStack_c4,iStack_c8);
    if (lVar7 != 4) goto LAB_1411f07bc;
    if (*(char *)(param_2 + 0xba) == '\0') {
      if ((*(longlong *)(param_2 + 0x30) != -0x7fffffffffffffff) ||
         (!SBORROW8(0,*(longlong *)(param_2 + 0x38)))) goto LAB_1411f0a5d;
      lVar13 = lVar13 + lVar10;
      uVar3 = *(undefined8 *)(lVar13 + -0x78);
      uVar8 = *(ulonglong *)(lVar13 + -0x70);
      puVar4 = *(ulonglong **)(param_2 + 0x40);
      uVar12 = *(ulonglong *)(param_2 + 0x48);
      uVar15 = uVar12 + uVar8;
      uVar11 = 0xffffffffffffffff;
      if (!CARRY8(uVar12,uVar8)) {
        uVar11 = uVar15;
      }
      lStack_50 = param_2;
      if (*puVar4 < uVar11) {
        uVar5 = puVar4[2];
        if (uVar11 - uVar5 <= *puVar4 - uVar5) goto LAB_1411f060a;
        uVar16 = 0;
        pdb_142d7f1b0(puVar4,uVar5,uVar11 - uVar5,1,1);
        uVar11 = puVar4[2];
      }
      else {
LAB_1411f060a:
        uVar11 = puVar4[2];
      }
      if (uVar11 < uVar12) {
        pub_142e32780(uVar11 + puVar4[1],0);
        puVar4[2] = uVar12;
      }
      pub_142e32760(uVar12 + puVar4[1],uVar3,uVar8);
      if (puVar4[2] < uVar15) {
        puVar4[2] = uVar15;
      }
      *(ulonglong *)(lStack_50 + 0x48) = uVar15;
      lVar7 = *(longlong *)(lVar13 + -0x70);
      lVar9 = *(longlong *)(lVar13 + -0x20) + lVar7;
      *(longlong *)(lStack_50 + 0xa8) = lVar9;
      *(longlong *)(lVar13 + -0x20) = lVar9;
      lVar10 = *(longlong *)(lVar13 + -0x30);
      uVar8 = lVar10 + 0x1c;
      cVar2 = *(char *)(lVar13 + -8);
      sVar6 = (short)lVar7;
      *(ulonglong *)(lStack_50 + 0x48) = uVar8;
      sVar14 = sVar6 + 0x14;
      if (cVar2 == '\0') {
        sVar14 = sVar6;
      }
      puVar4 = *(ulonglong **)(lStack_50 + 0x40);
      uVar12 = 0xffffffffffffffff;
      if (uVar8 < 0xfffffffffffffffe) {
        uVar12 = lVar10 + 0x1e;
      }
      if (*puVar4 < uVar12) {
        uVar11 = puVar4[2];
        if (uVar12 - uVar11 <= *puVar4 - uVar11) goto LAB_1411f06ae;
        uVar16 = 0;
        pdb_142d7f1b0(puVar4,uVar11,uVar12 - uVar11,1,1);
        uVar12 = puVar4[2];
      }
      else {
LAB_1411f06ae:
        uVar12 = puVar4[2];
      }
      if (uVar12 < uVar8) {
        pub_142e32780(uVar12 + puVar4[1],0);
        puVar4[2] = uVar8;
      }
      param_2 = lStack_50;
      *(short *)(puVar4[1] + 0x1c + lVar10) = sVar14;
      if (puVar4[2] < lVar10 + 0x1eU) {
        puVar4[2] = lVar10 + 0x1eU;
      }
      *(longlong *)(lStack_50 + 0x48) = lVar9;
      in_stack_fffffffffffffed8 = CONCAT44(uVar16,*(undefined4 *)(lVar13 + -0x50));
      pdb_1423aa1e0(&iStack_c8,lStack_50 + 0x30,*(undefined2 *)(lVar13 + -0x18),
                    *(undefined2 *)(lVar13 + -0x16),in_stack_fffffffffffffed8,
                    *(undefined4 *)(lVar13 + -0x4c));
      lVar7 = CONCAT44(iStack_c4,iStack_c8);
      if (lVar7 != 4) {
LAB_1411f07bc:
        *param_1 = lVar7;
        param_1[1] = CONCAT44(uStack_bc,uStack_c0);
        param_1[2] = CONCAT44(uStack_b4,uStack_b8);
        return;
      }
    }
    *(undefined2 *)(param_2 + 0xb9) = 0;
  }
  puVar4 = (ulonglong *)(param_2 + 0x30);
  uVar8 = in_stack_fffffffffffffed8 & 0xffffffff00000000;
  pdb_1423aa1e0(&iStack_c8,puVar4,0);
  if (iStack_c8 != 4) {
LAB_1411f09f2:
    param_1[2] = CONCAT44(uStack_b4,uStack_b8);
    *param_1 = CONCAT44(iStack_c4,iStack_c8);
    param_1[1] = CONCAT44(uStack_bc,uStack_c0);
    return;
  }
  uStack_68 = *(undefined8 *)(param_2 + 0x90);
  uStack_78 = *(undefined8 *)(param_2 + 0x80);
  uStack_70 = *(undefined8 *)(param_2 + 0x88);
  uStack_88 = *(undefined8 *)(param_2 + 0x70);
  uStack_80 = *(undefined8 *)(param_2 + 0x78);
  iStack_c8 = *(int *)puVar4;
  iStack_c4 = *(int *)(param_2 + 0x34);
  uVar12 = *puVar4;
  uStack_c0 = *(undefined4 *)(param_2 + 0x38);
  uStack_bc = *(undefined4 *)(param_2 + 0x3c);
  uStack_b8 = *(undefined4 *)(param_2 + 0x40);
  uStack_b4 = *(undefined4 *)(param_2 + 0x44);
  uStack_b0 = *(undefined4 *)(param_2 + 0x48);
  uStack_ac = *(undefined4 *)(param_2 + 0x4c);
  uStack_a8 = *(undefined4 *)(param_2 + 0x50);
  uStack_a4 = *(undefined4 *)(param_2 + 0x54);
  uStack_a0 = *(undefined4 *)(param_2 + 0x58);
  uStack_9c = *(undefined4 *)(param_2 + 0x5c);
  uStack_98 = *(undefined4 *)(param_2 + 0x60);
  uStack_94 = *(undefined4 *)(param_2 + 100);
  uStack_90 = *(undefined4 *)(param_2 + 0x68);
  uStack_8c = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x30) = 0x8000000000000000;
  if (uVar12 != 0x8000000000000001) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1432b1498,0x28,&UNK_1432b1518,uStack_98,uVar8);
  }
  puVar1 = (ulonglong *)(param_2 + 0x38);
  if (SBORROW8(0,*(longlong *)(param_2 + 0x38))) {
    *puVar4 = 0x8000000000000001;
  }
  else {
    uStack_e8 = *(undefined8 *)(param_2 + 0x68);
    uStack_118 = *(undefined4 *)puVar1;
    uStack_114 = *(undefined4 *)(param_2 + 0x3c);
    uStack_110 = *(undefined4 *)(param_2 + 0x40);
    uStack_10c = *(undefined4 *)(param_2 + 0x44);
    uStack_108 = *(undefined4 *)(param_2 + 0x48);
    uStack_104 = *(undefined4 *)(param_2 + 0x4c);
    uStack_100 = *(undefined4 *)(param_2 + 0x50);
    uStack_fc = *(undefined4 *)(param_2 + 0x54);
    uStack_f8 = *(undefined4 *)(param_2 + 0x58);
    uStack_f4 = *(undefined4 *)(param_2 + 0x5c);
    uStack_f0 = *(undefined4 *)(param_2 + 0x60);
    uStack_ec = *(undefined4 *)(param_2 + 100);
    pdb_1423abea0(&lStack_d8,&uStack_118,*(undefined4 *)(param_2 + 0x9c));
    if (lStack_d8 == 0) {
      *param_1 = 0;
      param_1[1] = lStack_d0;
      if (CONCAT44(iStack_c4,iStack_c8) == 0x8000000000000001) {
        return;
      }
      uVar8 = 2;
      if (iStack_c4 < 0) {
        uVar8 = CONCAT44(iStack_c4,iStack_c8) ^ 0x8000000000000000;
      }
      if (uVar8 == 0) {
        return;
      }
      if (uVar8 != 1) {
        pdb_1411daf60(&iStack_c8);
        return;
      }
      uVar8 = CONCAT44(uStack_bc,uStack_c0);
      if (SBORROW8(0,uVar8)) {
        return;
      }
      if (uVar8 == 0) {
        return;
      }
      pub_1406abac0((byte *)CONCAT44(uStack_b4,uStack_b8),uVar8,1);
      return;
    }
    lStack_60 = lStack_d8;
    lStack_58 = lStack_d0;
    uVar8 = 2;
    if ((longlong)*puVar4 < 0) {
      uVar8 = *puVar4 ^ 0x8000000000000000;
    }
    lStack_50 = param_2;
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        uVar8 = *puVar1;
        if ((!SBORROW8(0,uVar8)) && (uVar8 != 0)) {
          pub_1406abac0(*(byte **)(param_2 + 0x40),uVar8,1);
        }
      }
      else {
        pdb_1411daf60(puVar4);
      }
    }
    param_2 = lStack_50;
    *(undefined8 *)(lStack_50 + 0x30) = 0x8000000000000001;
    *(undefined8 *)(lStack_50 + 0x38) = 0x8000000000000000;
    *(longlong *)(lStack_50 + 0x40) = lStack_60;
    *(longlong *)(lStack_50 + 0x48) = lStack_58;
    if (CONCAT44(iStack_c4,iStack_c8) != 0x8000000000000001) {
      uVar8 = 2;
      if (iStack_c4 < 0) {
        uVar8 = CONCAT44(iStack_c4,iStack_c8) ^ 0x8000000000000000;
      }
      if (uVar8 != 0) {
        if (uVar8 == 1) {
          uVar8 = CONCAT44(uStack_bc,uStack_c0);
          if ((!SBORROW8(0,uVar8)) && (uVar8 != 0)) {
            pub_1406abac0((byte *)CONCAT44(uStack_b4,uStack_b8),uVar8,1);
          }
        }
        else {
          pdb_1411daf60(&iStack_c8);
        }
      }
    }
  }
  if ((*puVar4 != 0x8000000000000001) || (!SBORROW8(0,*puVar1))) {
LAB_1411f0a5d:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1434e3d62,0x73,&UNK_1434e3e08);
  }
  if (*(char *)(param_2 + 0xbb) == '\0') {
    if (*(longlong *)(param_2 + 0x10) == 0) goto LAB_1411f09e9;
    lVar13 = *(longlong *)(param_2 + 8);
    lVar10 = *(longlong *)(param_2 + 0x10) * 0xb0;
    *(undefined4 *)(lVar13 + -0x14 + lVar10) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined8 *)(lVar13 + -0x38 + lVar10) = *(undefined8 *)(param_2 + 0xb0);
    lVar7 = *(longlong *)(param_2 + 0x48);
    *(longlong *)(lVar13 + -0x40 + lVar10) = lVar7 - *(longlong *)(param_2 + 0xa8);
    pdb_1423a9f50(&iStack_c8,param_2 + 0x40,lVar13 + lVar10 + -0xb0);
    if (iStack_c8 != 4) goto LAB_1411f09f2;
    *(longlong *)(param_2 + 0x48) = lVar7;
  }
  *(undefined1 *)(param_2 + 0xb8) = 0;
  *(undefined1 *)(param_2 + 0xbb) = 0;
LAB_1411f09e9:
  *param_1 = 4;
  return;
}

