// VA 0x142ad5590, PDB extent 1894 bytes
// png::decoder::Reader::next_frame<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   png::decoder::Reader::next_frame<std::io::cursor::Cursor<ref$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 1894 */

ulonglong * pdb_142ad5590(ulonglong *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  byte bVar6;
  byte bVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined ****ppppuVar12;
  undefined ****ppppuVar13;
  ulonglong uVar14;
  longlong lVar15;
  char cVar16;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined8 ****ppppuStack_98;
  code *pcStack_90;
  ulonglong uStack_88;
  undefined ****ppppuStack_78;
  undefined ****ppppuStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char cStack_60;
  byte bStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  byte bStack_57;
  undefined2 uStack_56;
  undefined4 uStack_54;
  char cStack_4a;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar15 = param_2;
  pdb_142ad6420(&ppppuStack_78,param_2,0);
  uVar9 = (uint)lVar15;
  pcStack_90 = (code *)CONCAT44(uStack_64,uStack_68);
  ppppuStack_98 = (undefined8 ****)ppppuStack_70;
  uStack_88 = CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60)));
  if (ppppuStack_78 != (undefined ****)0x4) {
    param_1[3] = uStack_88;
    param_1[1] = (ulonglong)ppppuStack_70;
    param_1[2] = (ulonglong)pcStack_90;
    *param_1 = (ulonglong)ppppuStack_78;
    return param_1;
  }
  bVar6 = pdb_142ad5dc0();
  if (SBORROW8(0,*(longlong *)(param_2 + 0x80))) goto LAB_142ad5bca;
  cStack_4a = (char)uVar9;
  uVar1 = *(uint *)(param_2 + 0x19c);
  uVar2 = *(uint *)(param_2 + 0x1a0);
  bStack_49 = bVar6;
  bVar6 = pdb_142ad5dc0(param_2);
  uVar14 = (ulonglong)uVar1 * *(longlong *)(&UNK_1436410e8 + (ulonglong)bVar6 * 8);
  bVar6 = (byte)uVar9;
  if (bVar6 != 8) {
    if ((uVar9 & 0xff) == 0x10) {
      uVar14 = uVar14 * 2;
    }
    else {
      if (8 < bVar6) goto LAB_142ad5c9f;
      if (uVar14 >> 0x20 == 0) {
        uVar14 = uVar14 & 0xffffffff;
      }
      uVar10 = uVar14 % (ulonglong)(8 / bVar6);
      uVar9 = (uint)uVar10;
      uVar14 = (uVar14 / (8 / bVar6) + 1) - (ulonglong)(uVar10 == 0);
    }
  }
  if (param_4 < uVar2 * uVar14) {
    if (!SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
      uVar1 = *(uint *)(param_2 + 0x19c);
      uVar2 = *(uint *)(param_2 + 0x1a0);
      bVar6 = pdb_142ad5dc0(param_2);
      uVar14 = (ulonglong)uVar1 * *(longlong *)(&UNK_1436410e8 + (ulonglong)bVar6 * 8);
      bVar6 = (byte)uVar9;
      if (bVar6 != 8) {
        if ((uVar9 & 0xff) == 0x10) {
          uVar14 = uVar14 * 2;
        }
        else {
          if (8 < bVar6) {
LAB_142ad5c9f:
                    /* WARNING: Subroutine does not return */
            pdb_142dc84f0(&UNK_143640c38);
          }
          if (uVar14 >> 0x20 == 0) {
            uVar14 = uVar14 & 0xffffffff;
          }
          uVar14 = (uVar14 / (8 / bVar6) + 1) - (ulonglong)(uVar14 % (ulonglong)(8 / bVar6) == 0);
        }
      }
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = param_4;
      param_1[3] = uVar2 * uVar14;
      return param_1;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x238) = 0;
    *(undefined8 *)(param_2 + 0x290) = 0;
    if (!SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
      if (*(char *)(param_2 + 0x1a4) != '\0') {
        uVar3 = *(undefined4 *)(param_2 + 0x19c);
        pdb_142ad5ef0(&ppppuStack_78,param_2);
        uVar14 = CONCAT44(uStack_64,uStack_68);
        if ((char)ppppuStack_78 == '\0') {
          cVar16 = cStack_4a * (char)(0x4000201030001 >> ((bStack_49 & 7) << 3));
          do {
            if (cStack_60 == '\x02') goto LAB_142ad58b7;
            if (cStack_60 != '\x01') {
              ppppuStack_78 = (undefined ****)&UNK_143640ce8;
              ppppuStack_70 = (undefined ****)pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143640cf8,&ppppuStack_78,&UNK_143640d28);
            }
            pdb_140db5190(param_3,param_4,uVar3,ppppuStack_70,uVar14,bStack_5f,uStack_5c,cVar16);
            pdb_142ad5ef0(&ppppuStack_78,param_2);
            uVar14 = CONCAT44(uStack_64,uStack_68);
          } while ((char)ppppuStack_78 == '\0');
        }
        *param_1 = (ulonglong)ppppuStack_70;
        param_1[1] = uVar14;
        *(char *)(param_1 + 2) = cStack_60;
        *(byte *)((longlong)param_1 + 0x11) = bStack_5f;
        *(undefined2 *)((longlong)param_1 + 0x12) = uStack_5e;
        *(ulonglong *)((longlong)param_1 + 0x14) =
             CONCAT26(uStack_56,CONCAT15(bStack_57,CONCAT14(uStack_58,uStack_5c)));
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_54;
        return param_1;
      }
      uVar14 = 0;
      while( true ) {
        pdb_142ad5ef0(&ppppuStack_78,param_2);
        if ((char)ppppuStack_78 == '\0') {
          if (cStack_60 == '\x02') goto LAB_142ad58b7;
          uVar10 = CONCAT44(uStack_64,uStack_68);
          ppppuVar12 = ppppuStack_70;
        }
        else {
          ppppuVar12 = (undefined ****)CONCAT44(uStack_64,uStack_68);
          if (ppppuStack_70 != (undefined ****)0x4) {
            *param_1 = (ulonglong)ppppuStack_70;
            param_1[1] = (ulonglong)ppppuVar12;
            param_1[2] = CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60)));
            param_1[3] = CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(bStack_57,uStack_58)));
            return param_1;
          }
          uVar10 = CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60)));
        }
        if (ppppuVar12 == (undefined ****)0x0) goto LAB_142ad58b7;
        if (param_4 < uVar14) break;
        if (param_4 - uVar14 < uVar10) {
          uVar10 = param_4 - uVar14;
        }
        pub_142e32760(param_3 + uVar14,ppppuVar12,uVar10);
        uVar14 = uVar14 + uVar10;
      }
      pdb_142dc8420(uVar14,param_4,param_4,&UNK_143640cb0);
    }
  }
  goto LAB_142ad5bca;
LAB_142ad58b7:
  if (*(char *)(param_2 + 0x284) == '\0') {
    ppppuVar12 = (undefined ****)0x2;
    ppppuVar13 = (undefined ****)(undefined8 ***)0x1;
    if (*(char *)(param_2 + 0x208) == '\0') {
      uVar14 = *(ulonglong *)(param_2 + 0x1e0);
      uVar10 = *(ulonglong *)(param_2 + 0x1e8);
      do {
        lVar15 = *(longlong *)(param_2 + 0x1d0);
        ppppuVar12 = (undefined ****)(uVar10 - uVar14);
        if (uVar10 < uVar14 || ppppuVar12 == (undefined ****)0x0) {
          uVar14 = *(ulonglong *)(param_2 + 0x200);
          uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x1f8) + 0x10);
          uVar11 = uVar14;
          if (uVar10 < uVar14) {
            uVar11 = uVar10;
          }
          ppppuVar13 = *(undefined *****)(param_2 + 0x1f0);
          ppppuVar12 = (undefined ****)(uVar10 - uVar11);
          if (*(undefined *****)(param_2 + 0x1d8) <= (undefined ****)(uVar10 - uVar11)) {
            ppppuVar12 = *(undefined *****)(param_2 + 0x1d8);
          }
          pub_142e32760(lVar15,uVar11 + *(longlong *)(*(longlong *)(param_2 + 0x1f8) + 8),ppppuVar12
                       );
          if (ppppuVar13 < ppppuVar12) {
            ppppuVar13 = ppppuVar12;
          }
          *(ulonglong *)(param_2 + 0x200) = uVar14 + (longlong)ppppuVar12;
          *(undefined8 *)(param_2 + 0x1e0) = 0;
          *(undefined *****)(param_2 + 0x1e8) = ppppuVar12;
          *(undefined *****)(param_2 + 0x1f0) = ppppuVar13;
          if (ppppuVar12 == (undefined ****)0x0) break;
        }
        else {
          if (lVar15 == 0) {
            ppppuVar13 = (undefined ****)(undefined8 ***)0x0;
            goto LAB_142ad591c;
          }
          lVar15 = lVar15 + uVar14;
        }
        ppppuStack_98 = (undefined8 ****)0x0;
        pcStack_90 = (code *)0x1;
        uStack_88 = 0;
        pdb_140dbaa70(&ppppuStack_78,param_2,lVar15,ppppuVar12,&ppppuStack_98);
        uVar5 = uStack_56;
        bVar6 = bStack_57;
        uVar4 = uStack_58;
        uVar3 = uStack_5c;
        ppppuVar13 = ppppuStack_70;
        ppppuVar12 = ppppuStack_78;
        if (bStack_57 == 0xd) {
          if (ppppuStack_98 != (undefined8 ****)0x0) {
            pub_1406abac0((byte *)pcStack_90,(ulonglong)ppppuStack_98,1);
          }
          ppppuVar12 = ppppuStack_70;
          ppppuVar13 = ppppuStack_78;
          uStack_d8 = CONCAT44(uStack_64,uStack_68);
          uStack_d0 = CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60)));
          if (ppppuStack_78 != (undefined ****)0x4) goto LAB_142ad591c;
          goto LAB_142ad58c0;
        }
        if (ppppuStack_98 != (undefined8 ****)0x0) {
          pub_1406abac0((byte *)pcStack_90,(ulonglong)ppppuStack_98,1);
        }
        uVar14 = (longlong)ppppuVar12 + *(longlong *)(param_2 + 0x1e0);
        uVar10 = *(ulonglong *)(param_2 + 0x1e8);
        if (uVar10 < uVar14) {
          uVar14 = uVar10;
        }
        *(ulonglong *)(param_2 + 0x1e0) = uVar14;
        bVar7 = bVar6 - 2;
        if (bVar6 < 2) {
          bVar7 = 6;
        }
        if (10 < bVar7) {
LAB_142ad5c5d:
          ppppuStack_78 = ppppuVar13;
          uStack_64 = uVar3;
          cStack_60 = uVar4;
          bStack_5f = bVar6;
          uStack_5e = uVar5;
          ppppuStack_98 = &ppppuStack_78;
          pcStack_90 = pdb_142ad7660;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143640cf8,&ppppuStack_98,&UNK_143640f08);
        }
        if ((0x28dU >> (bVar7 & 0x1f) & 1) == 0) {
          if (bVar7 == 8) goto LAB_142ad58c0;
          if (bVar7 != 10) goto LAB_142ad5c5d;
          *(undefined1 *)(param_2 + 0x208) = 1;
        }
      } while (*(char *)(param_2 + 0x208) == '\0');
      ppppuVar12 = (undefined ****)0x2;
      ppppuVar13 = (undefined ****)(undefined8 ***)0x1;
    }
LAB_142ad591c:
    param_1[2] = uStack_d8;
    param_1[3] = uStack_d0;
    *param_1 = (ulonglong)ppppuVar13;
    param_1[1] = (ulonglong)ppppuVar12;
    return param_1;
  }
LAB_142ad58c0:
  if (!SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
    if (*(char *)(param_2 + 0x144) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142ad58f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar8 = (ulonglong *)
               (*(code *)(&UNK_1436411e0 +
                         *(int *)(&UNK_1436411e0 + (ulonglong)*(uint *)(param_2 + 0x288) * 4)))
                         (&UNK_1436411e0 +
                          *(int *)(&UNK_1436411e0 + (ulonglong)*(uint *)(param_2 + 0x288) * 4));
      return puVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x000142ad5946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (ulonglong *)
             (*(code *)(&UNK_1436411d0 +
                       *(int *)(&UNK_1436411d0 + (ulonglong)*(uint *)(param_2 + 0x288) * 4)))
                       (&UNK_1436411d0 +
                        *(int *)(&UNK_1436411d0 + (ulonglong)*(uint *)(param_2 + 0x288) * 4));
    return puVar8;
  }
LAB_142ad5bca:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143640d40);
}

