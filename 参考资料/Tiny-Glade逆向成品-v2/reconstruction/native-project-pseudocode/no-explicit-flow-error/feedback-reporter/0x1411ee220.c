// VA 0x1411ee220, PDB extent 3351 bytes
// feedback_reporter::zip_dir<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   feedback_reporter::zip_dir<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/feedback-reporter/src/lib.rs
   Extent: 3351 */

undefined8 *
pdb_1411ee220(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined2 param_5,undefined2 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  ulonglong *puVar6;
  byte ***pppbVar7;
  byte ***arg1;
  byte ***pppbVar8;
  undefined8 *puVar9;
  byte ***unaff_R12;
  byte ***arg0;
  undefined8 uVar10;
  byte ***pppbStack_258;
  code *pcStack_250;
  undefined4 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  byte ***pppbStack_228;
  code *pcStack_220;
  undefined4 uStack_218;
  int iStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  byte **ppbStack_1c0;
  byte ***pppbStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  code *pcStack_198;
  byte ***pppbStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined *puStack_138;
  byte **ppbStack_130;
  byte ***pppbStack_128;
  undefined8 uStack_120;
  ulonglong uStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 *puStack_e8;
  byte **ppbStack_d8;
  byte **ppbStack_d0;
  byte ***pppbStack_c8;
  byte **ppbStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  byte ***pppbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  ppbStack_c0 = (byte **)0x8000000000000000;
  uStack_b8 = (undefined4)param_3;
  iStack_b4 = (int)((ulonglong)param_3 >> 0x20);
  uStack_b0 = (undefined4)param_4;
  uStack_ac = (undefined4)((ulonglong)param_4 >> 0x20);
  pppbStack_c8 = (byte ***)0x8000000000000001;
  uStack_188 = (byte ***)0x0;
  uStack_180 = (code *)0x8;
  uStack_178 = (undefined4 *)0x0;
  pdb_140dbfa40(&ppbStack_130);
  ppbStack_1c0 = ppbStack_130;
  pppbStack_1b8 = pppbStack_128;
  uStack_208 = CONCAT22(uStack_a6,CONCAT11(uStack_a7,uStack_a8));
  uStack_204 = CONCAT22(uStack_a2,uStack_a4);
  uStack_200 = CONCAT13(uStack_9d,CONCAT12(uStack_9e,uStack_a0));
  pppbStack_228 = pppbStack_c8;
  pcStack_220 = (code *)ppbStack_c0;
  uStack_218 = uStack_b8;
  iStack_214 = iStack_b4;
  uStack_210 = uStack_b0;
  uStack_20c = uStack_ac;
  uStack_1fc = uStack_9c;
  uStack_1f8 = (undefined4)uStack_98;
  uStack_1f4 = uStack_98._4_4_;
  uStack_1f0 = (undefined4)uStack_90;
  uStack_1ec = uStack_90._4_4_;
  uStack_1e8 = uStack_88;
  uStack_1e0 = uStack_80;
  puStack_1d8 = puStack_78;
  puStack_1d0 = puStack_70;
  uStack_1c8 = uStack_68;
  puStack_248 = uStack_178;
  pppbStack_258 = uStack_188;
  pcStack_250 = uStack_180;
  uStack_240 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  uStack_238 = 1;
  uStack_230 = 0;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = pdb_140f3ecf0(*(undefined8 *)(param_2 + 8),uVar10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1432b0ab8);
  }
  pdb_140f69110(&pppbStack_c8,lVar5,uVar10);
  iVar3 = iStack_b4;
  uVar2 = uStack_b8;
  if ((int)pppbStack_c8 == 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1432b0ad0);
  }
  pcStack_198 = (code *)ppbStack_c0;
  arg0 = (byte ***)CONCAT44(iStack_b4,uStack_b8);
  uStack_110 = 0;
  pbStack_108 = (byte *)0x1;
  uStack_100 = 0;
  pppbVar7 = *(byte ****)(param_2 + 0x28);
  pppbVar8 = pppbVar7 + *(longlong *)(param_2 + 0x30) * 3;
  puStack_60 = param_1;
  if (pppbVar7 != pppbVar8) {
    do {
      pdb_1423a96d0(&ppbStack_130,pppbVar7[1],pppbVar7[2],param_2);
      if (iVar3 < 0) {
        uVar10 = 0;
        arg0 = unaff_R12;
LAB_1411ee9d4:
        uStack_4a = 1;
        pdb_142dc7e2a(uVar10,arg0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      ppbStack_d8 = (byte **)(pppbVar7 + 3);
      if (arg0 == (byte ***)0x0) {
        unaff_R12 = (byte ***)0x1;
      }
      else {
        pdb_14007ee60();
        uVar10 = 1;
        unaff_R12 = (byte ***)pub_1406abab0((ulonglong)arg0,1);
        if (unaff_R12 == (byte ***)0x0) goto LAB_1411ee9d4;
        if (arg0 != (byte ***)0x0) {
          pub_142e32760(unaff_R12,pcStack_198,arg0);
        }
      }
      pppbStack_c8 = arg0;
      ppbStack_c0 = (byte **)unaff_R12;
      uStack_b8 = uVar2;
      iStack_b4 = iVar3;
      pdb_1423a9b80(&pppbStack_c8,pppbVar7);
      ppbStack_d0 = ppbStack_c0;
      pppbStack_58 = pppbStack_c8;
      uVar10 = CONCAT44(iStack_b4,uStack_b8);
      uStack_188 = (byte ***)0x0;
      uStack_180 = (code *)0x1;
      uStack_178 = (undefined4 *)0x0;
      uStack_b8 = 0x60000020;
      iStack_b4 = 0;
      pppbStack_c8 = (byte ***)&uStack_188;
      ppbStack_c0 = (byte **)&UNK_1432b0c00;
      cVar4 = pdb_140f73140(ppbStack_d0,uVar10,&pppbStack_c8);
      if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1432b0c30,0x37,&uStack_4b,&UNK_1432b0cf0,&UNK_1432b0cd8);
      }
      puStack_e8 = uStack_178;
      uStack_f8 = (undefined4)uStack_188;
      uStack_f4 = uStack_188._4_4_;
      uStack_f0 = (undefined4)uStack_180;
      uStack_ec = uStack_180._4_4_;
      if (pppbStack_58 != (byte ***)0x0) {
        pub_1406abac0((byte *)ppbStack_d0,(ulonglong)pppbStack_58,1);
      }
      uStack_49 = 1;
      pdb_140f4f620(&pppbStack_c8,pppbStack_128,uStack_120);
      if ((int)pppbStack_c8 == 2) {
        uStack_188 = (byte ***)0x2;
LAB_1411ee5ce:
        uStack_180 = (code *)ppbStack_c0;
        uStack_49 = 1;
        pdb_1404b38e0(&uStack_180);
        if (CONCAT44(uStack_f4,uStack_f8) != 0) {
          pub_1406abac0((byte *)CONCAT44(uStack_ec,uStack_f0),CONCAT44(uStack_f4,uStack_f8),1);
        }
        pppbVar7 = pppbStack_128;
        arg1 = (byte ***)ppbStack_130;
        if ((byte ***)ppbStack_130 != (byte ***)0x0) {
LAB_1411ee8f1:
          pub_1406abac0((byte *)pppbVar7,(ulonglong)arg1,1);
        }
      }
      else {
        uStack_168 = CONCAT22(uStack_a6,CONCAT11(uStack_a7,uStack_a8));
        uStack_164 = CONCAT22(uStack_a2,uStack_a4);
        uStack_160 = CONCAT13(uStack_9d,CONCAT12(uStack_9e,uStack_a0));
        uStack_188 = pppbStack_c8;
        uStack_180 = (code *)ppbStack_c0;
        puStack_138 = puStack_78;
        uStack_148 = (undefined4)uStack_88;
        uStack_144 = uStack_88._4_4_;
        uStack_140 = (undefined4)uStack_80;
        uStack_13c = uStack_80._4_4_;
        uStack_158 = (undefined4)uStack_98;
        uStack_154 = uStack_98._4_4_;
        uStack_150 = (undefined4)uStack_90;
        uStack_14c = uStack_90._4_4_;
        uStack_15c = uStack_9c;
        uStack_178 = (undefined4 *)CONCAT44(iStack_b4,uStack_b8);
        uStack_170 = (code *)CONCAT44(uStack_ac,uStack_b0);
        if (pppbStack_c8 == (byte ***)0x2) goto LAB_1411ee5ce;
        uStack_49 = 1;
        cVar4 = pdb_140f3ec10(pppbStack_128,uStack_120);
        if (cVar4 == '\0') {
          uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1432b0ae8,0x13,&UNK_1432b0b00);
        }
        if (4 < *_DAT_143ca8e90) {
          uStack_180 = pdb_140f58250;
          uStack_178 = &uStack_f8;
          uStack_170 = pdb_140094770;
          pppbStack_c8 = (byte ***)0x0;
          ppbStack_c0 = (byte **)&UNK_1432b0b41;
          uStack_b8 = 0x11;
          iStack_b4 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0x90;
          uStack_a7 = 10;
          uStack_a6 = 0x432b;
          uStack_a4 = 1;
          uStack_a2 = 0;
          uStack_a0 = 0x23;
          uStack_9e = 0;
          uStack_9d = 0;
          uStack_9c = 0;
          uStack_98 = 5;
          uStack_90 = &UNK_1432b0b41;
          uStack_88 = 0x11;
          uStack_80 = 0x11000000001;
          puStack_78 = &UNK_1432b0b18;
          puStack_70 = &uStack_188;
          uStack_49 = 1;
          uStack_188 = &ppbStack_130;
          pdb_140f332f0(&uStack_4b,&pppbStack_c8);
        }
        pppbStack_c8 = (byte ***)0x0;
        ppbStack_c0 = (byte **)0x1ed00000001;
        uStack_b8 = 0;
        uStack_a8 = (undefined1)param_5;
        uStack_a7 = (undefined1)((ushort)param_5 >> 8);
        uStack_a6 = param_6;
        uStack_a4 = 0x7bc;
        uStack_a2 = 0x101;
        uStack_a0 = 0;
        uStack_9e = 0;
        uStack_9c = uStack_9c & 0xffffff00;
        uStack_49 = 1;
        pdb_1411ef5a0(&uStack_188,&pppbStack_258,&uStack_f8,&pppbStack_c8);
        puVar9 = puStack_60;
        if (uStack_188 != (byte ***)0x4) {
          puStack_60[1] = uStack_180;
          puStack_60[2] = uStack_178;
          *puStack_60 = uStack_188;
          if (CONCAT44(uStack_f4,uStack_f8) != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_ec,uStack_f0),CONCAT44(uStack_f4,uStack_f8),1);
          }
          if ((byte ***)ppbStack_130 != (byte ***)0x0) {
LAB_1411eea94:
            pub_1406abac0((byte *)pppbStack_128,(ulonglong)ppbStack_130,1);
          }
          goto LAB_1411eea9f;
        }
        pppbStack_58 = (byte ***)ppbStack_130;
        pppbStack_c8 = (byte ***)((ulonglong)pppbStack_c8 & 0xffffffff00000000);
        ppbStack_c0 = (byte **)0x0;
        uStack_b8 = 7;
        uStack_ac = 0;
        uStack_a8 = 0;
        iStack_b4 = 0;
        uStack_b0 = 1;
        pppbStack_190 = pppbStack_128;
        pppbVar7 = pppbStack_128;
        ppbStack_d0 = (byte **)pppbVar8;
        lVar5 = pdb_140f4a2a0(&pppbStack_c8,pppbStack_128,uStack_120);
        if (pppbStack_58 != (byte ***)0x0) {
          pub_1406abac0((byte *)pppbStack_190,(ulonglong)pppbStack_58,1);
        }
        if (lVar5 == 1) {
          *puStack_60 = 0;
          puStack_60[1] = pppbVar7;
          puVar9 = puStack_60;
LAB_1411eea81:
          ppbStack_130 = (byte **)CONCAT44(uStack_f4,uStack_f8);
          if ((byte ***)ppbStack_130 != (byte ***)0x0) {
            pppbStack_128 = (byte ***)CONCAT44(uStack_ec,uStack_f0);
            goto LAB_1411eea94;
          }
          goto LAB_1411eea9f;
        }
        puVar6 = &uStack_110;
        uStack_188 = pppbVar7;
        lVar5 = pdb_140f5aaf0(&uStack_188);
        pppbVar8 = (byte ***)ppbStack_d0;
        if ((lVar5 == 1) ||
           (puVar6 = (ulonglong *)pdb_1411ef1d0(&pppbStack_258,pbStack_108,uStack_100),
           puVar6 != (ulonglong *)0x0)) {
          puVar9 = puStack_60;
          *puStack_60 = 0;
          puStack_60[1] = puVar6;
          CloseHandle(uStack_188);
          goto LAB_1411eea81;
        }
        uStack_100 = 0;
        CloseHandle(uStack_188);
        if ((byte ***)CONCAT44(uStack_f4,uStack_f8) != (byte ***)0x0) {
          pppbVar7 = (byte ***)CONCAT44(uStack_ec,uStack_f0);
          arg1 = (byte ***)CONCAT44(uStack_f4,uStack_f8);
          goto LAB_1411ee8f1;
        }
      }
      pppbVar7 = (byte ***)ppbStack_d8;
    } while ((byte ***)ppbStack_d8 != pppbVar8);
  }
  pdb_1411f0cd0(&uStack_188,&pppbStack_258);
  pppbVar8 = pppbStack_228;
  puVar9 = puStack_60;
  if (uStack_188 == (byte ***)0x4) {
    pppbStack_c8 = pppbStack_228;
    ppbStack_c0 = (byte **)pcStack_220;
    uStack_b8 = uStack_218;
    iStack_b4 = iStack_214;
    uStack_b0 = uStack_210;
    uStack_ac = uStack_20c;
    uStack_a8 = (undefined1)uStack_208;
    uStack_a7 = (undefined1)((uint)uStack_208 >> 8);
    uStack_a6 = (undefined2)((uint)uStack_208 >> 0x10);
    uStack_a4 = (undefined2)uStack_204;
    uStack_a2 = (undefined2)((uint)uStack_204 >> 0x10);
    uStack_a0 = (undefined2)uStack_200;
    uStack_9e = (undefined1)((uint)uStack_200 >> 0x10);
    uStack_9d = (undefined1)((uint)uStack_200 >> 0x18);
    uStack_9c = uStack_1fc;
    uStack_98 = CONCAT44(uStack_1f4,uStack_1f8);
    uStack_90 = (undefined *)CONCAT44(uStack_1ec,uStack_1f0);
    uStack_88 = uStack_1e8;
    uStack_80 = uStack_1e0;
    puStack_78 = puStack_1d8;
    puStack_70 = puStack_1d0;
    uStack_68 = uStack_1c8;
    pppbStack_228 = (byte ***)0x8000000000000000;
    if ((pppbVar8 != (byte ***)0x8000000000000001) || (!SBORROW8(0,(longlong)pcStack_220))) {
      pppbStack_58 = pppbVar8;
      ppbStack_d8 = (byte **)pcStack_220;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_1434e3d62,0x73,&UNK_1434e3df0);
    }
    *puStack_60 = 4;
  }
  else {
    *puStack_60 = uStack_188;
    puStack_60[1] = uStack_180;
    puStack_60[2] = uStack_178;
  }
LAB_1411eea9f:
  if (uStack_110 != 0) {
    pub_1406abac0(pbStack_108,uStack_110,1);
  }
  pdb_1411dab80(&pppbStack_258);
  return puVar9;
}

