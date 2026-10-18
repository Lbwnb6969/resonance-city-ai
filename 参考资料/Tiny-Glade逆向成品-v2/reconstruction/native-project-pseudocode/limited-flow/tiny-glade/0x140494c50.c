// VA 0x140494c50, PDB extent 1878 bytes
// png::decoder::Reader::next_frame<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   png::decoder::Reader::next_frame<std::io::buffered::bufreader::BufReader<std::fs::File> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1878 */

ulonglong * pdb_140494c50(ulonglong *param_1,longlong param_2,longlong param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte ***pppbVar4;
  undefined8 uVar5;
  byte ****ppppbVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  ulonglong *puVar11;
  byte ****ppppbVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte ****ppppbVar17;
  char cVar18;
  byte *pbVar19;
  byte ****ppppbVar20;
  byte ****ppppbStack_d8;
  ulonglong uStack_d0;
  byte ****ppppbStack_98;
  byte ****ppppbStack_90;
  ulonglong uStack_88;
  byte ****ppppbStack_78;
  byte ****ppppbStack_70;
  undefined8 uStack_68;
  char cStack_60;
  byte bStack_5f;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  byte bStack_57;
  undefined2 uStack_56;
  undefined4 uStack_54;
  byte bStack_4b;
  undefined2 uStack_4a;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar14 = param_2;
  pdb_140495ad0(&ppppbStack_78,param_2,0);
  uVar13 = (uint)lVar14;
  ppppbStack_98 = ppppbStack_70;
  ppppbStack_90 = uStack_68;
  uStack_88 = CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60)));
  if (ppppbStack_78 != (byte ****)0x4) {
    param_1[3] = uStack_88;
    param_1[1] = (ulonglong)ppppbStack_70;
    param_1[2] = (ulonglong)uStack_68;
    *param_1 = (ulonglong)ppppbStack_78;
    return param_1;
  }
  bVar9 = pdb_140495470();
  if (SBORROW8(0,*(longlong *)(param_2 + 0x80))) goto LAB_1404952c0;
  uStack_4a = CONCAT11(uStack_4a._1_1_,(char)uVar13);
  uVar1 = *(uint *)(param_2 + 0x19c);
  uVar2 = *(uint *)(param_2 + 0x1a0);
  bStack_4b = bVar9;
  bVar9 = pdb_140495470(param_2);
  uVar16 = (ulonglong)uVar1 * *(longlong *)(&UNK_142f60260 + (ulonglong)bVar9 * 8);
  bVar9 = (byte)uVar13;
  if (bVar9 != 8) {
    if ((uVar13 & 0xff) == 0x10) {
      uVar16 = uVar16 * 2;
    }
    else {
      if (8 < bVar9) goto LAB_140495353;
      if (uVar16 >> 0x20 == 0) {
        uVar16 = uVar16 & 0xffffffff;
      }
      uVar15 = uVar16 % (ulonglong)(8 / bVar9);
      uVar13 = (uint)uVar15;
      uVar16 = (uVar16 / (8 / bVar9) + 1) - (ulonglong)(uVar15 == 0);
    }
  }
  if (param_4 < (byte *)(uVar2 * uVar16)) {
    if (!SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
      uVar1 = *(uint *)(param_2 + 0x19c);
      uVar2 = *(uint *)(param_2 + 0x1a0);
      bVar9 = pdb_140495470(param_2);
      uVar16 = (ulonglong)uVar1 * *(longlong *)(&UNK_142f60260 + (ulonglong)bVar9 * 8);
      bVar9 = (byte)uVar13;
      if (bVar9 != 8) {
        if ((uVar13 & 0xff) == 0x10) {
          uVar16 = uVar16 * 2;
        }
        else {
          if (8 < bVar9) {
LAB_140495353:
                    /* WARNING: Subroutine does not return */
            pdb_142dc84f0(&UNK_142f5fcd0);
          }
          if (uVar16 >> 0x20 == 0) {
            uVar16 = uVar16 & 0xffffffff;
          }
          uVar16 = (uVar16 / (8 / bVar9) + 1) - (ulonglong)(uVar16 % (ulonglong)(8 / bVar9) == 0);
        }
      }
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = (ulonglong)param_4;
      param_1[3] = uVar2 * uVar16;
      return param_1;
    }
  }
  else {
    *(undefined8 *)(param_2 + 600) = 0;
    *(undefined8 *)(param_2 + 0x2b0) = 0;
    if (!SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
      if (*(char *)(param_2 + 0x1a4) != '\0') {
        uVar3 = *(undefined4 *)(param_2 + 0x19c);
        pdb_1404955a0(&ppppbStack_78,param_2);
        if ((char)ppppbStack_78 == '\0') {
          cVar18 = (char)uStack_4a * (char)(0x4000201030001 >> ((bStack_4b & 7) << 3));
          do {
            if (cStack_60 == '\x02') goto LAB_140494f77;
            if (cStack_60 != '\x01') {
              ppppbStack_78 = (byte ****)&UNK_142f5fd80;
              ppppbStack_70 = (byte ****)pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_142f5fd90,&ppppbStack_78,&UNK_142f5fdc0);
            }
            pdb_140db5190(param_3,param_4,uVar3,ppppbStack_70,uStack_68,bStack_5f,uStack_5c,cVar18);
            pdb_1404955a0(&ppppbStack_78,param_2);
          } while ((char)ppppbStack_78 == '\0');
        }
        *param_1 = (ulonglong)ppppbStack_70;
        param_1[1] = (ulonglong)uStack_68;
        *(char *)(param_1 + 2) = cStack_60;
        *(byte *)((longlong)param_1 + 0x11) = bStack_5f;
        *(undefined2 *)((longlong)param_1 + 0x12) = uStack_5e;
        *(ulonglong *)((longlong)param_1 + 0x14) =
             CONCAT26(uStack_56,CONCAT15(bStack_57,CONCAT14(uStack_58,uStack_5c)));
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_54;
        return param_1;
      }
      pbVar19 = (byte *)0x0;
      while( true ) {
        pdb_1404955a0(&ppppbStack_78,param_2);
        if ((char)ppppbStack_78 == '\0') {
          ppppbVar17 = ppppbStack_70;
          ppppbVar20 = uStack_68;
          if (cStack_60 == '\x02') goto LAB_140494f77;
        }
        else {
          if (ppppbStack_70 != (byte ****)0x4) {
            *param_1 = (ulonglong)ppppbStack_70;
            param_1[1] = (ulonglong)uStack_68;
            param_1[2] = CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60)));
            param_1[3] = CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(bStack_57,uStack_58)));
            return param_1;
          }
          ppppbVar17 = uStack_68;
          ppppbVar20 = (byte ****)
                       CONCAT44(uStack_5c,CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60)));
        }
        if (ppppbVar17 == (byte ****)0x0) goto LAB_140494f77;
        if (param_4 < pbVar19) break;
        if (param_4 + -(longlong)pbVar19 < ppppbVar20) {
          ppppbVar20 = (byte ****)(param_4 + -(longlong)pbVar19);
        }
        pub_142e32760(pbVar19 + param_3,ppppbVar17,ppppbVar20);
        pbVar19 = pbVar19 + (longlong)ppppbVar20;
      }
      pdb_142dc8420(pbVar19,param_4,param_4,&UNK_142f5fd48);
    }
  }
  goto LAB_1404952c0;
LAB_140494f77:
  if (*(char *)(param_2 + 0x2a4) == '\0') {
    ppppbVar20 = (byte ****)0x2;
    ppppbVar17 = (byte ****)0x1;
    if (*(char *)(param_2 + 0x228) == '\0') {
      ppppbVar17 = *(byte *****)(param_2 + 0x1e0);
      ppppbVar12 = *(byte *****)(param_2 + 0x1e8);
      do {
        pppbVar4 = *(byte ****)(param_2 + 0x1d0);
        if (ppppbVar12 <= ppppbVar17) {
          ppppbStack_70 = *(byte *****)(param_2 + 0x1d8);
          uStack_68 = (byte ****)0x0;
          uVar5 = *(undefined8 *)(param_2 + 0x1f0);
          cStack_60 = (char)uVar5;
          bStack_5f = (byte)((ulonglong)uVar5 >> 8);
          uStack_5e = (undefined2)((ulonglong)uVar5 >> 0x10);
          uStack_5c = (undefined4)((ulonglong)uVar5 >> 0x20);
          ppppbStack_78 = (byte ****)pppbVar4;
          ppppbVar20 = (byte ****)pdb_140592bc0(param_2 + 0x1f8,&ppppbStack_78);
          *(undefined8 *)(param_2 + 0x1e0) = 0;
          *(undefined4 *)(param_2 + 0x1e8) = (undefined4)uStack_68;
          *(undefined4 *)(param_2 + 0x1ec) = uStack_68._4_4_;
          *(uint *)(param_2 + 0x1f0) = CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60));
          *(undefined4 *)(param_2 + 500) = uStack_5c;
          if (ppppbVar20 != (byte ****)0x0) {
            ppppbVar17 = (byte ****)0x0;
            goto LAB_140494fdc;
          }
          ppppbVar17 = (byte ****)0x0;
          ppppbVar12 = uStack_68;
        }
        ppppbVar20 = (byte ****)((longlong)ppppbVar12 - (longlong)ppppbVar17);
        if (pppbVar4 == (byte ***)0x0) {
          ppppbVar17 = (byte ****)0x0;
          goto LAB_140494fdc;
        }
        if (ppppbVar12 == ppppbVar17) break;
        ppppbStack_98 = (byte ****)0x0;
        ppppbStack_90 = (byte ****)0x1;
        uStack_88 = 0;
        pdb_140dbaa70(&ppppbStack_78,param_2,(byte *)((longlong)ppppbVar17 + (longlong)pppbVar4),
                      ppppbVar20,&ppppbStack_98);
        bVar9 = bStack_57;
        uVar8 = uStack_58;
        uVar7 = uStack_5c;
        ppppbVar6 = uStack_68;
        ppppbVar20 = ppppbStack_70;
        ppppbVar17 = ppppbStack_78;
        uVar3 = CONCAT22(uStack_5e,CONCAT11(bStack_5f,cStack_60));
        uVar16 = CONCAT44(uStack_5c,uVar3);
        if (bStack_57 == 0xd) {
          ppppbStack_d8 = uStack_68;
          if (ppppbStack_98 != (byte ****)0x0) {
            pub_1406abac0((byte *)ppppbStack_90,(ulonglong)ppppbStack_98,1);
          }
          uStack_d0 = uVar16;
          if (ppppbVar17 == (byte ****)0x4) goto LAB_140494f80;
          goto LAB_140494fdc;
        }
        uStack_4a = uStack_56;
        if (ppppbStack_98 != (byte ****)0x0) {
          pub_1406abac0((byte *)ppppbStack_90,(ulonglong)ppppbStack_98,1);
        }
        ppppbVar17 = (byte ****)((longlong)ppppbVar17 + *(longlong *)(param_2 + 0x1e0));
        ppppbVar12 = *(byte *****)(param_2 + 0x1e8);
        if (ppppbVar12 < ppppbVar17) {
          ppppbVar17 = ppppbVar12;
        }
        *(byte *****)(param_2 + 0x1e0) = ppppbVar17;
        bVar10 = bVar9 - 2;
        if (bVar9 < 2) {
          bVar10 = 6;
        }
        if (10 < bVar10) {
LAB_140495213:
          ppppbStack_78 = ppppbVar20;
          ppppbStack_70 = ppppbVar6;
          uStack_68 = (byte ****)CONCAT44(uVar7,uVar3);
          cStack_60 = uVar8;
          bStack_5f = bVar9;
          uStack_5e = uStack_4a;
          ppppbStack_90 = (byte ****)pdb_140497ed0;
          ppppbStack_98 = (byte ****)&ppppbStack_78;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_142f5fd90,&ppppbStack_98,&UNK_142f5ffa0);
        }
        if ((0x28dU >> (bVar10 & 0x1f) & 1) == 0) {
          if (bVar10 == 8) goto LAB_140494f80;
          if (bVar10 != 10) goto LAB_140495213;
          *(undefined1 *)(param_2 + 0x228) = 1;
        }
      } while (*(char *)(param_2 + 0x228) == '\0');
      ppppbVar17 = (byte ****)0x1;
      ppppbVar20 = (byte ****)0x2;
    }
LAB_140494fdc:
    param_1[2] = (ulonglong)ppppbStack_d8;
    param_1[3] = uStack_d0;
    *param_1 = (ulonglong)ppppbVar17;
    param_1[1] = (ulonglong)ppppbVar20;
    return param_1;
  }
LAB_140494f80:
  if (!SBORROW8(0,*(longlong *)(param_2 + 0x80))) {
    if (*(char *)(param_2 + 0x144) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140495006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar11 = (ulonglong *)
                (*(code *)(&UNK_142f60360 +
                          *(int *)(&UNK_142f60360 + (ulonglong)*(uint *)(param_2 + 0x2a8) * 4)))
                          (&UNK_142f60360 +
                           *(int *)(&UNK_142f60360 + (ulonglong)*(uint *)(param_2 + 0x2a8) * 4));
      return puVar11;
    }
                    /* WARNING: Could not recover jumptable at 0x000140494fb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (ulonglong *)
              (*(code *)(&UNK_142f60370 +
                        *(int *)(&UNK_142f60370 + (ulonglong)*(uint *)(param_2 + 0x2a8) * 4)))
                        (&UNK_142f60370 +
                         *(int *)(&UNK_142f60370 + (ulonglong)*(uint *)(param_2 + 0x2a8) * 4));
    return puVar11;
  }
LAB_1404952c0:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142f5fdd8);
}

