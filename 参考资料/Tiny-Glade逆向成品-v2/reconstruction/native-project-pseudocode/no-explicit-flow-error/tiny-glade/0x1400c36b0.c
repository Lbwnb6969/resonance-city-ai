// VA 0x1400c36b0, PDB extent 1837 bytes
// zip::write::zip_writer::ZipWriter::finish_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::write::zip_writer::ZipWriter::finish_file<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1837 */

void pdb_1400c36b0(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  short sVar6;
  ulonglong *puVar7;
  undefined1 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  short sVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  ulonglong in_stack_fffffffffffffee8;
  undefined4 uVar20;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(char *)(param_2 + 0xb9) != '\0') {
    if (*(longlong *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_142e3cc40);
    }
    lVar16 = *(longlong *)(param_2 + 8);
    lVar13 = *(longlong *)(param_2 + 0x10) * 0xb0;
    pdb_140d9c6d0(&iStack_108,lVar16 + lVar13 + -0xb0);
    uVar20 = (undefined4)(in_stack_fffffffffffffee8 >> 0x20);
    lVar9 = CONCAT44(iStack_104,iStack_108);
    if (lVar9 != 4) goto LAB_1400c394c;
    if (*(char *)(param_2 + 0xba) == '\0') {
      if ((*(longlong *)(param_2 + 0x30) != -0x7fffffffffffffff) ||
         (!SBORROW8(0,*(longlong *)(param_2 + 0x38)))) goto LAB_1400c3c3a;
      lVar16 = lVar16 + lVar13;
      uVar3 = *(undefined8 *)(lVar16 + -0x78);
      uVar10 = *(ulonglong *)(lVar16 + -0x70);
      puVar4 = *(ulonglong **)(param_2 + 0x40);
      uVar14 = *(ulonglong *)(param_2 + 0x48);
      uVar18 = uVar14 + uVar10;
      uVar15 = 0xffffffffffffffff;
      if (!CARRY8(uVar14,uVar10)) {
        uVar15 = uVar18;
      }
      lStack_50 = param_2;
      if (*puVar4 < uVar15) {
        uVar5 = puVar4[2];
        if (uVar15 - uVar5 <= *puVar4 - uVar5) goto LAB_1400c3798;
        uVar20 = 0;
        pdb_142d7f1b0(puVar4,uVar5,uVar15 - uVar5,1,1);
        uVar15 = puVar4[2];
      }
      else {
LAB_1400c3798:
        uVar15 = puVar4[2];
      }
      if (uVar15 < uVar14) {
        pub_142e32780(uVar15 + puVar4[1],0);
        puVar4[2] = uVar14;
      }
      pub_142e32760(uVar14 + puVar4[1],uVar3,uVar10);
      if (puVar4[2] < uVar18) {
        puVar4[2] = uVar18;
      }
      *(ulonglong *)(lStack_50 + 0x48) = uVar18;
      lVar9 = *(longlong *)(lVar16 + -0x70);
      lVar11 = *(longlong *)(lVar16 + -0x20) + lVar9;
      *(longlong *)(lStack_50 + 0xa8) = lVar11;
      *(longlong *)(lVar16 + -0x20) = lVar11;
      lVar13 = *(longlong *)(lVar16 + -0x30);
      uVar10 = lVar13 + 0x1c;
      cVar2 = *(char *)(lVar16 + -8);
      sVar6 = (short)lVar9;
      *(ulonglong *)(lStack_50 + 0x48) = uVar10;
      sVar17 = sVar6 + 0x14;
      if (cVar2 == '\0') {
        sVar17 = sVar6;
      }
      puVar4 = *(ulonglong **)(lStack_50 + 0x40);
      uVar14 = 0xffffffffffffffff;
      if (uVar10 < 0xfffffffffffffffe) {
        uVar14 = lVar13 + 0x1e;
      }
      if (*puVar4 < uVar14) {
        uVar15 = puVar4[2];
        if (uVar14 - uVar15 <= *puVar4 - uVar15) goto LAB_1400c383c;
        uVar20 = 0;
        pdb_142d7f1b0(puVar4,uVar15,uVar14 - uVar15,1,1);
        uVar14 = puVar4[2];
      }
      else {
LAB_1400c383c:
        uVar14 = puVar4[2];
      }
      if (uVar14 < uVar10) {
        pub_142e32780(uVar14 + puVar4[1],0);
        puVar4[2] = uVar10;
      }
      param_2 = lStack_50;
      *(short *)(puVar4[1] + 0x1c + lVar13) = sVar17;
      if (puVar4[2] < lVar13 + 0x1eU) {
        puVar4[2] = lVar13 + 0x1eU;
      }
      *(longlong *)(lStack_50 + 0x48) = lVar11;
      in_stack_fffffffffffffee8 = CONCAT44(uVar20,*(undefined4 *)(lVar16 + -0x50));
      pdb_1402232f0(&iStack_108,lStack_50 + 0x30,*(undefined2 *)(lVar16 + -0x18),
                    *(undefined2 *)(lVar16 + -0x16),in_stack_fffffffffffffee8,
                    *(undefined4 *)(lVar16 + -0x4c));
      lVar9 = CONCAT44(iStack_104,iStack_108);
      if (lVar9 != 4) {
LAB_1400c394c:
        *param_1 = lVar9;
        param_1[1] = CONCAT44(uStack_fc,uStack_100);
        param_1[2] = CONCAT44(uStack_f4,uStack_f8);
        return;
      }
    }
    *(undefined2 *)(param_2 + 0xb9) = 0;
  }
  puVar4 = (ulonglong *)(param_2 + 0x30);
  uVar10 = in_stack_fffffffffffffee8 & 0xffffffff00000000;
  pdb_1402232f0(&iStack_108,puVar4,0);
  if (iStack_108 != 4) {
LAB_1400c3bd6:
    param_1[2] = CONCAT44(uStack_f4,uStack_f8);
    *param_1 = CONCAT44(iStack_104,iStack_108);
    param_1[1] = CONCAT44(uStack_fc,uStack_100);
    return;
  }
  uStack_a8 = *(undefined8 *)(param_2 + 0x90);
  uStack_b8 = *(undefined8 *)(param_2 + 0x80);
  uStack_b0 = *(undefined8 *)(param_2 + 0x88);
  uStack_c8 = *(undefined8 *)(param_2 + 0x70);
  uStack_c0 = *(undefined8 *)(param_2 + 0x78);
  iStack_108 = *(int *)puVar4;
  iStack_104 = *(int *)(param_2 + 0x34);
  uVar14 = *puVar4;
  uStack_100 = *(undefined4 *)(param_2 + 0x38);
  uStack_fc = *(undefined4 *)(param_2 + 0x3c);
  uStack_f8 = *(undefined4 *)(param_2 + 0x40);
  uStack_f4 = *(undefined4 *)(param_2 + 0x44);
  uStack_f0 = *(undefined4 *)(param_2 + 0x48);
  uStack_ec = *(undefined4 *)(param_2 + 0x4c);
  uStack_e8 = *(undefined4 *)(param_2 + 0x50);
  uStack_e4 = *(undefined4 *)(param_2 + 0x54);
  uStack_e0 = *(undefined4 *)(param_2 + 0x58);
  uStack_dc = *(undefined4 *)(param_2 + 0x5c);
  uStack_d8 = *(undefined4 *)(param_2 + 0x60);
  uStack_d4 = *(undefined4 *)(param_2 + 100);
  uStack_d0 = *(undefined4 *)(param_2 + 0x68);
  uStack_cc = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x30) = 0x8000000000000000;
  if (uVar14 != 0x8000000000000001) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_142e3cb68,0x28,&UNK_142e3cc28,uStack_d8,uVar10);
  }
  puVar1 = (ulonglong *)(param_2 + 0x38);
  if (SBORROW8(0,*(longlong *)(param_2 + 0x38))) {
    *puVar4 = 0x8000000000000001;
  }
  else {
    uStack_68 = *(undefined8 *)(param_2 + 0x68);
    uStack_98 = *(undefined4 *)puVar1;
    uStack_94 = *(undefined4 *)(param_2 + 0x3c);
    uStack_90 = *(undefined4 *)(param_2 + 0x40);
    uStack_8c = *(undefined4 *)(param_2 + 0x44);
    puVar19 = *(undefined1 **)(param_2 + 0x40);
    uStack_88 = *(undefined4 *)(param_2 + 0x48);
    uStack_84 = *(undefined4 *)(param_2 + 0x4c);
    uVar10 = *(ulonglong *)(param_2 + 0x48);
    uStack_80 = *(undefined4 *)(param_2 + 0x50);
    uStack_7c = *(undefined4 *)(param_2 + 0x54);
    uStack_78 = *(ulonglong *)(param_2 + 0x58);
    uStack_70 = *(undefined4 *)(param_2 + 0x60);
    uStack_6c = *(undefined4 *)(param_2 + 100);
    if (uVar10 < 0xc) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0xb,uVar10,&UNK_142e3ce00);
    }
    puVar19[0xb] = (char)((uint)*(undefined4 *)(param_2 + 0x9c) >> 0x18);
    puVar12 = puVar19 + uVar10;
    lStack_50 = param_2;
    uVar10 = uStack_78;
    for (; uStack_78 = uVar10, puVar19 != puVar12; puVar19 = puVar19 + 1) {
      uVar8 = pdb_140d9c8b0(&uStack_70,*puVar19);
      *puVar19 = uVar8;
      uVar10 = uStack_78;
    }
    uVar3 = CONCAT44(uStack_8c,uStack_90);
    uVar14 = CONCAT44(uStack_84,uStack_88);
    puVar7 = (ulonglong *)CONCAT44(uStack_7c,uStack_80);
    uStack_58 = uVar10 + uVar14;
    uVar15 = 0xffffffffffffffff;
    if (!CARRY8(uVar10,uVar14)) {
      uVar15 = uStack_58;
    }
    if (*puVar7 < uVar15) {
      uVar18 = puVar7[2];
      if (*puVar7 - uVar18 < uVar15 - uVar18) {
        pdb_142d7f1b0(puVar7,uVar18,uVar15 - uVar18,1,1);
      }
    }
    if (puVar7[2] < uVar10) {
      pub_142e32780(puVar7[2] + puVar7[1],0);
      puVar7[2] = uVar10;
    }
    pub_142e32760(uVar10 + puVar7[1],uVar3,uVar14);
    if (puVar7[2] < uStack_58) {
      puVar7[2] = uStack_58;
    }
    uStack_78 = uStack_58;
    uStack_60 = CONCAT44(uStack_7c,uStack_80);
    if (CONCAT44(uStack_94,uStack_98) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_8c,uStack_90),CONCAT44(uStack_94,uStack_98),1);
    }
    uVar10 = 2;
    if ((longlong)*puVar4 < 0) {
      uVar10 = *puVar4 ^ 0x8000000000000000;
    }
    if (uVar10 != 0) {
      if (uVar10 == 1) {
        uVar10 = *puVar1;
        if ((!SBORROW8(0,uVar10)) && (uVar10 != 0)) {
          pub_1406abac0(*(byte **)(lStack_50 + 0x40),uVar10,1);
        }
      }
      else {
        pdb_1404ab470(puVar4);
      }
    }
    param_2 = lStack_50;
    *(undefined8 *)(lStack_50 + 0x30) = 0x8000000000000001;
    *(undefined8 *)(lStack_50 + 0x38) = 0x8000000000000000;
    *(undefined8 *)(lStack_50 + 0x40) = uStack_60;
    *(ulonglong *)(lStack_50 + 0x48) = uStack_58;
    if (CONCAT44(iStack_104,iStack_108) != 0x8000000000000001) {
      uVar10 = 2;
      if (iStack_104 < 0) {
        uVar10 = CONCAT44(iStack_104,iStack_108) ^ 0x8000000000000000;
      }
      if (uVar10 != 0) {
        if (uVar10 == 1) {
          uVar10 = CONCAT44(uStack_fc,uStack_100);
          if ((!SBORROW8(0,uVar10)) && (uVar10 != 0)) {
            pub_1406abac0((byte *)CONCAT44(uStack_f4,uStack_f8),uVar10,1);
          }
        }
        else {
          pdb_1404ab470(&iStack_108);
        }
      }
    }
  }
  if ((*puVar4 != 0x8000000000000001) || (!SBORROW8(0,*puVar1))) {
LAB_1400c3c3a:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142e61a2a,0x73,&UNK_142e61ad0);
  }
  if (*(char *)(param_2 + 0xbb) == '\0') {
    if (*(longlong *)(param_2 + 0x10) == 0) goto LAB_1400c3bcd;
    lVar16 = *(longlong *)(param_2 + 8);
    lVar13 = *(longlong *)(param_2 + 0x10) * 0xb0;
    *(undefined4 *)(lVar16 + -0x14 + lVar13) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined8 *)(lVar16 + -0x38 + lVar13) = *(undefined8 *)(param_2 + 0xb0);
    lVar9 = *(longlong *)(param_2 + 0x48);
    *(longlong *)(lVar16 + -0x40 + lVar13) = lVar9 - *(longlong *)(param_2 + 0xa8);
    pdb_140223060(&iStack_108,param_2 + 0x40,lVar16 + lVar13 + -0xb0);
    if (iStack_108 != 4) goto LAB_1400c3bd6;
    *(longlong *)(param_2 + 0x48) = lVar9;
  }
  *(undefined1 *)(param_2 + 0xb8) = 0;
  *(undefined1 *)(param_2 + 0xbb) = 0;
LAB_1400c3bcd:
  *param_1 = 4;
  return;
}

