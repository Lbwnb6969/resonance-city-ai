// VA 0x140f76c30, PDB extent 4021 bytes
// theme_fetcher::checked_zip::verify_folder_checksums
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/checked_zip.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: theme_fetcher::checked_zip::verify_folder_checksums
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/checked_zip.rs
   Extent: 4021 */

ulonglong ***** pdb_140f76c30(undefined8 param_1,undefined8 param_2)

{
  ulonglong ****ppppuVar1;
  ulonglong ****ppppuVar2;
  ulonglong ****ppppuVar3;
  ulonglong ***pppuVar4;
  byte *arg0;
  char cVar5;
  int iVar6;
  ulonglong *****pppppuVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  ulonglong *****pppppuVar11;
  ulonglong *****pppppuVar12;
  undefined4 uVar13;
  ulonglong *****arg1;
  ulonglong ****ppppuStack_968;
  ulonglong ****ppppuStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined7 uStack_908;
  undefined4 uStack_901;
  undefined1 uStack_8fd;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined4 uStack_8d8;
  ulonglong ****ppppuStack_1e8;
  ulonglong ***pppuStack_1e0;
  ulonglong ****ppppuStack_1d8;
  ulonglong ****ppppuStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  ulonglong ***pppuStack_170;
  byte *pbStack_168;
  ulonglong ***pppuStack_160;
  ulonglong ****ppppuStack_158;
  ulonglong ****ppppuStack_150;
  ulonglong ****ppppuStack_148;
  ulonglong uStack_140;
  byte *pbStack_138;
  ulonglong ****ppppuStack_130;
  ulonglong ****ppppuStack_128;
  ulonglong ****ppppuStack_120;
  undefined8 uStack_118;
  ulonglong ****ppppuStack_110;
  ulonglong ****ppppuStack_108;
  ulonglong ****ppppuStack_100;
  ulonglong ****ppppuStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  ulonglong ****ppppuStack_e0;
  ulonglong ***pppuStack_d0;
  ulonglong ****ppppuStack_c8;
  ulonglong ****ppppuStack_c0;
  ulonglong ****ppppuStack_b8;
  ulonglong ****ppppuStack_b0;
  ulonglong ****ppppuStack_a8;
  ulonglong ***pppuStack_a0;
  ulonglong ***pppuStack_98;
  ulonglong ****ppppuStack_90;
  ulonglong ****ppppuStack_88;
  ulonglong ****ppppuStack_80;
  undefined4 uStack_74;
  ulonglong ****ppppuStack_70;
  ulonglong ****ppppuStack_68;
  ulonglong ****ppppuStack_60;
  undefined4 uStack_54;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  char cStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&ppppuStack_968,param_1,param_2,&UNK_1432512f5,9);
  ppppuStack_60 = ppppuStack_960;
  pdb_140f55fb0(&ppppuStack_108,ppppuStack_960,uStack_958);
  if ((ulonglong *****)ppppuStack_968 != (ulonglong *****)0x0) {
    pub_1406abac0((byte *)ppppuStack_60,(ulonglong)ppppuStack_968,1);
  }
  if (SBORROW8(0,(longlong)ppppuStack_108)) {
    ppppuStack_158 = ppppuStack_100;
    uStack_4d = 1;
    pdb_140f3f5b0(&ppppuStack_968);
    uStack_1b8 = (uint)uStack_948;
    uStack_1b4 = uStack_948._4_4_;
    uStack_1c8 = (undefined4)uStack_958;
    uStack_1c4 = uStack_958._4_4_;
    uStack_1c0 = (undefined4)uStack_950;
    uStack_1bc = uStack_950._4_4_;
    ppppuStack_968 = (ulonglong ****)&UNK_1432512fe;
    ppppuStack_960 = (ulonglong ****)0x16;
    uStack_958 = (ulonglong *****)ppppuStack_100;
    uStack_4d = 0;
    pppppuVar7 = (ulonglong *****)pdb_142dc8d80(&ppppuStack_968,&ppppuStack_1d8);
  }
  else {
    ppppuStack_60 = ppppuStack_108;
    ppppuStack_110 = ppppuStack_100;
    pdb_140fa9200(&ppppuStack_108,ppppuStack_100,ppppuStack_f8);
    ppppuVar2 = ppppuStack_100;
    ppppuVar1 = ppppuStack_108;
    if (SBORROW8(0,(longlong)ppppuStack_108)) {
      ppppuStack_c0 = ppppuStack_100;
      uStack_4e = 1;
      pdb_140f3f5b0(&ppppuStack_968);
      uStack_1b8 = (uint)uStack_948;
      uStack_1b4 = uStack_948._4_4_;
      uStack_1b0 = uStack_940;
      uStack_1c8 = (undefined4)uStack_958;
      uStack_1c4 = uStack_958._4_4_;
      uStack_1c0 = (undefined4)uStack_950;
      uStack_1bc = uStack_950._4_4_;
      ppppuStack_1d8 = ppppuStack_968;
      ppppuStack_1d0 = ppppuStack_960;
      ppppuStack_968 = (ulonglong ****)&UNK_143251314;
      ppppuStack_960 = (ulonglong ****)0x16;
      uStack_958 = (ulonglong *****)ppppuVar2;
      uStack_4e = 0;
      pppppuVar7 = (ulonglong *****)pdb_142dc8a30(&ppppuStack_968,&ppppuStack_1d8);
      arg1 = (ulonglong *****)ppppuStack_60;
    }
    else {
      pbStack_138 = pbStack_e8;
      ppppuStack_130 = ppppuStack_e0;
      ppppuStack_148 = ppppuStack_f8;
      uStack_140 = uStack_f0;
      ppppuStack_158 = ppppuStack_108;
      ppppuStack_150 = ppppuStack_100;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      uStack_1c8 = 0;
      uStack_1c4 = 0;
      uStack_1c0 = 0;
      uStack_1bc = 0;
      ppppuStack_1d8 = (ulonglong ****)0x0;
      ppppuStack_1d0 = (ulonglong ****)0x0;
      uStack_198 = _DAT_143251480;
      uStack_190 = _UNK_143251488;
      uStack_188 = _DAT_143251490;
      uStack_180 = _UNK_143251498;
      uStack_8f8 = _DAT_143251480;
      uStack_8f0 = _UNK_143251488;
      uStack_8e8 = _DAT_143251490;
      uStack_8e0 = _UNK_143251498;
      ppppuStack_968 = (ulonglong ****)0x0;
      ppppuStack_960 = (ulonglong ****)0x0;
      uStack_958 = (ulonglong *****)0x0;
      uStack_950 = 0;
      uStack_948 = 0;
      uStack_940 = 0;
      uStack_938 = 0;
      uStack_930 = 0;
      uStack_928 = _DAT_143251480;
      uStack_920 = _UNK_143251488;
      uStack_918 = _DAT_143251490;
      uStack_910 = _UNK_143251498;
      uStack_908 = 0;
      uStack_901 = 0;
      uStack_8fd = 1;
      uStack_8d8 = 0;
      pppppuVar7 = (ulonglong *****)(ppppuStack_100 + (longlong)ppppuStack_f8 * 6);
      for (pppppuVar12 = (ulonglong *****)ppppuStack_100; pppppuVar12 != pppppuVar7;
          pppppuVar12 = pppppuVar12 + 6) {
        uStack_49 = 1;
        pdb_140fafcc0(&ppppuStack_968,pppppuVar12[1],pppppuVar12[2]);
        uStack_49 = 1;
        pdb_140fafcc0(&ppppuStack_968,pppppuVar12[4],pppppuVar12[5]);
      }
      uStack_49 = 1;
      pdb_140fb0450(&ppppuStack_1d8,&ppppuStack_968);
      ppppuStack_c0 = (ulonglong ****)0x0;
      ppppuStack_b8 = (ulonglong ****)0x1;
      ppppuStack_b0 = (ulonglong ****)0x0;
      ppppuStack_f8 = (ulonglong ****)0x60000020;
      ppppuStack_108 = (ulonglong ****)&ppppuStack_c0;
      ppppuStack_100 = (ulonglong ****)&UNK_143251370;
      cVar5 = pdb_140fae350(&ppppuStack_1d8,&ppppuStack_108);
      ppppuVar3 = ppppuStack_b8;
      pppppuVar12 = (ulonglong *****)ppppuStack_c0;
      if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1432513a0,0x37,&uStack_4f,&UNK_143251460,&UNK_143251448);
      }
      if ((ppppuStack_b0 == ppppuStack_130) &&
         (iVar6 = pub_142e32750(ppppuStack_b8,pbStack_138), iVar6 == 0)) {
        if (pppppuVar12 != (ulonglong *****)0x0) {
          pub_1406abac0((byte *)ppppuVar3,(ulonglong)pppppuVar12,1);
        }
        ppppuStack_c0 = ppppuVar2;
        ppppuStack_b8 = ppppuVar2;
        ppppuStack_b0 = ppppuVar1;
        ppppuStack_a8 = (ulonglong ****)pppppuVar7;
        while (pppppuVar7 = (ulonglong *****)ppppuStack_b8, ppppuStack_b8 != ppppuStack_a8) {
          ppppuVar1 = (ulonglong ****)*ppppuStack_b8;
          pppppuVar7 = (ulonglong *****)(ppppuStack_b8 + 6);
          if (SBORROW8(0,(longlong)ppppuVar1)) break;
          pppppuVar7 = (ulonglong *****)ppppuStack_b8[1];
          ppppuVar2 = (ulonglong ****)ppppuStack_b8[2];
          pppuStack_98 = ppppuStack_b8[3];
          pppuStack_d0 = ppppuStack_b8[4];
          ppppuVar3 = (ulonglong ****)ppppuStack_b8[5];
          ppppuStack_1d8 = (ulonglong ****)((ulonglong)ppppuStack_1d8 & 0xffffffff00000000);
          ppppuStack_1d0 = (ulonglong ****)0x0;
          uStack_1c8 = 7;
          uStack_1bc = 0;
          uStack_1b8 = uStack_1b8 & 0xffffff00;
          uStack_1c4 = 0;
          uStack_1c0 = 1;
          ppppuStack_1e8 = (ulonglong ****)pppppuVar7;
          pppuStack_1e0 = (ulonglong ***)ppppuVar2;
          ppppuStack_c8 = (ulonglong ****)pppppuVar7;
          ppppuStack_b8 = ppppuStack_b8 + 6;
          pppuStack_a0 = (ulonglong ***)ppppuVar1;
          uVar8 = pdb_140f4a2a0(&ppppuStack_1d8,pppppuVar7,ppppuVar2);
          uVar9 = pdb_141ed79d0(uVar8);
          arg1 = (ulonglong *****)ppppuStack_60;
          ppppuStack_70 = (ulonglong ****)pppppuVar7;
          if ((uVar9 & 1) != 0) {
LAB_140f77663:
            pppuVar4 = pppuStack_a0;
            if ((ulonglong ****)pppuStack_98 != (ulonglong ****)0x0) {
              pub_1406abac0((byte *)pppuStack_d0,(ulonglong)pppuStack_98,1);
            }
            if ((ulonglong ****)pppuVar4 != (ulonglong ****)0x0) {
              pub_1406abac0((byte *)ppppuStack_c8,(ulonglong)pppuVar4,1);
            }
            if (ppppuStack_a8 != ppppuStack_b8) {
              uVar9 = (ulonglong)((longlong)ppppuStack_a8 - (longlong)ppppuStack_b8) / 0x30;
              pppppuVar12 = (ulonglong *****)(ppppuStack_b8 + 4);
              do {
                if (pppppuVar12[-4] != (ulonglong ****)0x0) {
                  pub_1406abac0((byte *)pppppuVar12[-3],(ulonglong)pppppuVar12[-4],1);
                }
                if (pppppuVar12[-1] != (ulonglong ****)0x0) {
                  pub_1406abac0((byte *)*pppppuVar12,(ulonglong)pppppuVar12[-1],1);
                }
                pppppuVar12 = pppppuVar12 + 6;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            if ((ulonglong *****)ppppuStack_b0 != (ulonglong *****)0x0) {
              pub_1406abac0((byte *)ppppuStack_c0,(longlong)ppppuStack_b0 * 0x30,8);
            }
            goto LAB_140f7704c;
          }
          cStack_4a = 1;
          uVar9 = pdb_140cd10f0(pppppuVar7);
          if ((uVar9 & 1) != 0) {
LAB_140f77217:
            ppppuStack_108 = (ulonglong ****)0x2;
            ppppuStack_100 = (ulonglong ****)pppppuVar7;
LAB_140f77229:
            CloseHandle(ppppuStack_70);
            ppppuStack_90 = ppppuStack_68;
            uStack_4b = 0;
            uStack_4c = 0;
            ppppuStack_88 = (ulonglong ****)pppppuVar12;
            pdb_140f55fb0(&ppppuStack_1d8,ppppuStack_c8,ppppuVar2);
            if (!SBORROW8(0,(longlong)ppppuStack_1d8)) {
              uVar9 = CONCAT44(uStack_1c4,uStack_1c8);
              uStack_54 = (undefined4)CONCAT71((int7)((ulonglong)-(longlong)ppppuStack_1d8 >> 8),1);
              uVar13 = 0;
              ppppuStack_90 = ppppuStack_1d0;
              pppppuVar7 = (ulonglong *****)ppppuStack_1d0;
              pppppuVar12 = (ulonglong *****)ppppuStack_1d8;
              goto LAB_140f77294;
            }
            ppppuStack_90 = ppppuStack_68;
            uStack_4b = 0;
            uStack_4c = 0;
            ppppuStack_88 = (ulonglong ****)pppppuVar12;
            pppppuVar7 = (ulonglong *****)pdb_142dc8e60(ppppuStack_1d0);
            uVar13 = 0;
LAB_140f77619:
            cVar5 = (char)uVar13;
            cStack_4a = cVar5;
            if ((ulonglong *****)ppppuStack_108 == (ulonglong *****)0x2) {
              pdb_1404b38e0(&ppppuStack_100);
            }
            else {
              pdb_141ab4b30(&ppppuStack_108);
            }
            arg1 = (ulonglong *****)ppppuStack_60;
            if (cVar5 != '\0') {
              CloseHandle(ppppuStack_70);
            }
            goto LAB_140f77663;
          }
          cStack_4a = 1;
          pdb_141ab4bb0();
          pppppuVar7 = (ulonglong *****)ppppuStack_1d0;
          if ((int)ppppuStack_1d8 == 2) goto LAB_140f77217;
          pppppuVar7 = (ulonglong *****)CONCAT44(uStack_1c4,uStack_1c8);
          uVar9 = CONCAT44(uStack_1bc,uStack_1c0);
          ppppuStack_108 = ppppuStack_1d8;
          ppppuStack_100 = ppppuStack_1d0;
          pbStack_e8 = (byte *)CONCAT44(uStack_1b4,uStack_1b8);
          ppppuStack_f8 = (ulonglong ****)pppppuVar7;
          uStack_f0 = uVar9;
          if ((ulonglong *****)ppppuStack_1d8 == (ulonglong *****)0x2) goto LAB_140f77229;
          uVar13 = (undefined4)CONCAT71((int7)((ulonglong)ppppuVar2 >> 8),1);
          uStack_54 = 0;
          ppppuStack_90 = ppppuStack_68;
LAB_140f77294:
          uStack_4b = (undefined1)uStack_54;
          uStack_4c = (undefined1)uVar13;
          ppppuStack_88 = (ulonglong ****)pppppuVar12;
          ppppuStack_68 = ppppuStack_90;
          pdb_140faf160(&ppppuStack_1d8,pppppuVar7,uVar9);
          pppuStack_170 = (ulonglong ***)0x0;
          pbStack_168 = (byte *)0x1;
          pppuStack_160 = (ulonglong ***)0x0;
          uStack_118 = 0x60000020;
          ppppuStack_128 = &pppuStack_170;
          ppppuStack_120 = (ulonglong ****)&UNK_143251370;
          ppppuStack_80 = (ulonglong ****)pppppuVar12;
          uStack_74 = uVar13;
          cVar5 = pdb_140fae350(&ppppuStack_1d8,&ppppuStack_128);
          arg0 = pbStack_168;
          pppuVar4 = pppuStack_170;
          if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_1432513a0,0x37,&uStack_4f,&UNK_143251460,&UNK_143251448);
          }
          if (((ulonglong ****)pppuStack_160 != ppppuVar3) ||
             (iVar6 = pub_142e32750(pbStack_168,pppuStack_d0,ppppuVar3), iVar6 != 0)) {
            if ((ulonglong ****)pppuVar4 != (ulonglong ****)0x0) {
              pub_1406abac0(arg0,(ulonglong)pppuVar4,1);
            }
            uVar13 = uStack_74;
            ppppuVar1 = ppppuStack_80;
            ppppuStack_128 = (ulonglong ****)&ppppuStack_1e8;
            ppppuStack_120 = (ulonglong ****)pdb_140117670;
            ppppuStack_88 = ppppuStack_80;
            ppppuStack_90 = ppppuStack_68;
            uStack_4b = (undefined1)uStack_54;
            uVar10 = (undefined1)uStack_74;
            uStack_4c = uVar10;
            pdb_140f60760(&ppppuStack_1d8,&UNK_14325132a,&ppppuStack_128);
            ppppuStack_128 = ppppuStack_1d8;
            ppppuStack_120 = ppppuStack_1d0;
            uStack_118 = CONCAT44(uStack_1c4,uStack_1c8);
            ppppuStack_88 = ppppuVar1;
            ppppuStack_90 = ppppuStack_68;
            uStack_4b = (undefined1)uStack_54;
            uStack_4c = uVar10;
            pppppuVar7 = (ulonglong *****)pdb_142dc8630(&ppppuStack_128);
            if (((byte)uStack_54 & (ulonglong *****)ppppuVar1 != (ulonglong *****)0x0) != 0) {
              pub_1406abac0((byte *)ppppuStack_68,(ulonglong)ppppuVar1,1);
            }
            goto LAB_140f77619;
          }
          if ((ulonglong ****)pppuVar4 != (ulonglong ****)0x0) {
            pub_1406abac0(arg0,(ulonglong)pppuVar4,1);
          }
          if (((byte)uStack_54 & (ulonglong *****)ppppuStack_80 != (ulonglong *****)0x0) != 0) {
            pub_1406abac0((byte *)ppppuStack_68,(ulonglong)ppppuStack_80,1);
          }
          cVar5 = (char)uStack_74;
          cStack_4a = cVar5;
          if ((ulonglong *****)ppppuStack_108 == (ulonglong *****)0x2) {
            pdb_1404b38e0(&ppppuStack_100);
          }
          else {
            pdb_141ab4b30(&ppppuStack_108);
          }
          if (cVar5 != '\0') {
            CloseHandle(ppppuStack_70);
          }
          pppuVar4 = pppuStack_a0;
          if ((ulonglong ****)pppuStack_98 != (ulonglong ****)0x0) {
            pub_1406abac0((byte *)pppuStack_d0,(ulonglong)pppuStack_98,1);
          }
          pppppuVar12 = (ulonglong *****)ppppuStack_80;
          if ((ulonglong ****)pppuVar4 != (ulonglong ****)0x0) {
            pub_1406abac0((byte *)ppppuStack_c8,(ulonglong)pppuVar4,1);
            pppppuVar12 = (ulonglong *****)ppppuStack_80;
          }
        }
        ppppuStack_b8 = (ulonglong ****)pppppuVar7;
        uStack_49 = 0;
        pdb_14096cdb0(&ppppuStack_c0);
        ppppuVar1 = ppppuStack_110;
        if (uStack_140 != 0) {
          pub_1406abac0(pbStack_138,uStack_140,1);
        }
        if ((ulonglong *****)ppppuStack_60 != (ulonglong *****)0x0) {
          pub_1406abac0((byte *)ppppuVar1,(ulonglong)ppppuStack_60,1);
        }
        return (ulonglong *****)0x0;
      }
      if (pppppuVar12 != (ulonglong *****)0x0) {
        pub_1406abac0((byte *)ppppuVar3,(ulonglong)pppppuVar12,1);
      }
      uStack_49 = 1;
      pppppuVar7 = (ulonglong *****)pdb_142dc86e0(&UNK_143251341,0x10);
      arg1 = (ulonglong *****)ppppuStack_60;
      ppppuVar1 = ppppuStack_150;
      if ((ulonglong *****)ppppuStack_148 != (ulonglong *****)0x0) {
        pppppuVar12 = (ulonglong *****)(ppppuStack_150 + 4);
        pppppuVar11 = (ulonglong *****)ppppuStack_148;
        do {
          if (pppppuVar12[-4] != (ulonglong ****)0x0) {
            pub_1406abac0((byte *)pppppuVar12[-3],(ulonglong)pppppuVar12[-4],1);
          }
          if (pppppuVar12[-1] != (ulonglong ****)0x0) {
            pub_1406abac0((byte *)*pppppuVar12,(ulonglong)pppppuVar12[-1],1);
          }
          pppppuVar12 = pppppuVar12 + 6;
          pppppuVar11 = (ulonglong *****)((longlong)pppppuVar11 + -1);
        } while (pppppuVar11 != (ulonglong *****)0x0);
      }
      if ((ulonglong *****)ppppuStack_158 != (ulonglong *****)0x0) {
        pub_1406abac0((byte *)ppppuVar1,(longlong)ppppuStack_158 * 0x30,8);
      }
LAB_140f7704c:
      if (uStack_140 != 0) {
        pub_1406abac0(pbStack_138,uStack_140,1);
      }
    }
    if (arg1 != (ulonglong *****)0x0) {
      pub_1406abac0((byte *)ppppuStack_110,(ulonglong)arg1,1);
    }
  }
  return pppppuVar7;
}

