// VA 0x140d94b80, PDB extent 2134 bytes
// tg_mods::discovery::mod_at_root
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::discovery::mod_at_root
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 2134 */

ulonglong * pdb_140d94b80(ulonglong *param_1,ulonglong *param_2,ulonglong param_3,code *param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  byte *pbVar10;
  code *pcStack_158;
  byte *pbStack_150;
  code *pcStack_148;
  code *pcStack_130;
  byte *pbStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  byte bStack_110;
  undefined7 uStack_10f;
  code **ppcStack_108;
  code *pcStack_100;
  byte *pbStack_f8;
  code *pcStack_f0;
  byte *pbStack_e8;
  code *pcStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code ***pppcStack_90;
  ulonglong *puStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  code *pcStack_70;
  code *pcStack_68;
  code *pcStack_60;
  byte *pbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_58 = (byte *)param_2[1];
  uVar1 = param_2[2];
  puStack_88 = param_2;
  pdb_140f3e9e0(&pbStack_e8,pbStack_58,uVar1,&UNK_143396434,0xb);
  pcStack_68 = pcStack_e0;
  pdb_141b49cc0(&pcStack_130,pcStack_e0,pbStack_d8);
  if (pbStack_e8 != (byte *)0x0) {
    pub_1406abac0((byte *)pcStack_68,(ulonglong)pbStack_e8,1);
  }
  uVar4 = uStack_120;
  if (SBORROW8(0,(longlong)pcStack_130)) {
    if (*_DAT_143ca8e90 != 0) {
      pdb_141b1e240(&pcStack_130,pbStack_58,uVar1,2);
      pcStack_100 = pdb_140f58250;
      pbStack_e8 = (byte *)0x0;
      pcStack_e0 = (code *)&UNK_1431e55d2;
      pbStack_d8 = (byte *)0x12;
      uStack_d0 = 0;
      puStack_c8 = &UNK_1431e555f;
      uStack_c0 = 0x1f;
      puStack_b8 = (undefined *)0x1;
      puStack_b0 = &UNK_1431e55d2;
      puStack_a8 = (undefined *)0x12;
      uStack_a0 = 0x14f00000001;
      puStack_98 = &UNK_1431e55a4;
      ppcStack_108 = &pcStack_130;
      pppcStack_90 = &ppcStack_108;
      pdb_140f332f0(&uStack_4b,&pbStack_e8);
      if (pcStack_130 != (code *)0x0) {
        pub_1406abac0(pbStack_128,(ulonglong)pcStack_130,1);
      }
    }
    *param_1 = 2;
    puVar9 = puStack_88;
  }
  else {
    pcStack_68 = pcStack_130;
    pbStack_80 = pbStack_128;
    uStack_4a = 1;
    pdb_140d9aa70(&pcStack_130,pbStack_58,uVar1);
    pcVar2 = pcStack_130;
    if ((!SBORROW8(0,(longlong)pcStack_130) | bStack_110) == 1) {
      if ((param_3 & 1) == 0) {
        pcStack_70 = pcStack_130;
        uStack_49 = 1;
        uVar8 = uVar1;
        lVar5 = pdb_140f3ecf0(pbStack_58,uVar1);
        if (lVar5 == 0) {
          pcStack_60 = (code *)0x1;
          pbStack_78 = (byte *)0x0;
          pbVar10 = (byte *)0x0;
        }
        else {
          pcStack_70 = pcVar2;
          uStack_49 = 1;
          pdb_140f5fd10(&pbStack_e8,lVar5,uVar8);
          pbVar10 = pbStack_d8;
          if (SBORROW8(0,(longlong)pbStack_e8)) {
            if ((longlong)pbStack_d8 < 0) {
              uVar7 = 0;
LAB_140d94f60:
              pcStack_70 = pcVar2;
              uStack_49 = 1;
              pdb_142dc7e2a(uVar7,pbStack_d8);
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            if (pbStack_d8 == (byte *)0x0) {
              pcStack_60 = (code *)0x1;
              pbStack_78 = (byte *)0x0;
              pbVar10 = (byte *)0x0;
            }
            else {
              pcStack_60 = pcStack_e0;
              pdb_14007ee60();
              pcVar6 = (code *)pub_1406abab0((ulonglong)pbStack_d8,1);
              uVar7 = 1;
              if (pcVar6 == (code *)0x0) goto LAB_140d94f60;
              pub_142e32760(pcVar6,pcStack_60,pbStack_d8);
              pbStack_78 = pbStack_d8;
              pcStack_60 = pcVar6;
            }
          }
          else {
            pcStack_60 = pcStack_e0;
            pbStack_78 = pbStack_e8;
          }
        }
      }
      else {
        ppcStack_108 = &pcStack_158;
        pcStack_100 = pdb_140f72a40;
        pcStack_70 = pcStack_130;
        uStack_49 = 1;
        pcStack_158 = param_4;
        pdb_140f60760(&pbStack_e8,&UNK_1431e5598,&ppcStack_108);
        pbStack_78 = pbStack_e8;
        pcStack_60 = pcStack_e0;
        pbVar10 = pbStack_d8;
      }
      pbStack_d8 = (byte *)0x0;
      uStack_d0 = 3;
      puStack_c8 = &UNK_1431e56c3;
      uStack_c0 = 0xd;
      puStack_b8 = &UNK_1431e56d0;
      puStack_b0 = (undefined *)0xe;
      puStack_a8 = &UNK_1431e56de;
      uStack_a0 = 0xd;
      pbStack_e8 = pbStack_58;
      pcStack_e0 = (code *)uVar1;
      pdb_141daebe0(&ppcStack_108,&pbStack_e8);
      if (!SBORROW8(0,(longlong)ppcStack_108)) {
        pcStack_148 = pcStack_f0;
        pcStack_158 = pcStack_100;
        pbStack_150 = pbStack_f8;
      }
      uVar1 = *puStack_88;
      uVar8 = puStack_88[1];
      uVar3 = puStack_88[3];
      param_1[10] = puStack_88[2];
      param_1[0xb] = uVar3;
      param_1[8] = uVar1;
      param_1[9] = uVar8;
      param_1[0xc] = (ulonglong)pcStack_130;
      param_1[0xd] = (ulonglong)pbStack_128;
      param_1[0xe] = uStack_120;
      param_1[0xf] = uStack_118;
      param_1[0x10] = CONCAT71(uStack_10f,bStack_110);
      param_1[2] = (ulonglong)pcStack_68;
      param_1[3] = (ulonglong)pbStack_80;
      param_1[4] = uVar4;
      param_1[5] = (ulonglong)pbStack_78;
      param_1[6] = (ulonglong)pcStack_60;
      param_1[7] = (ulonglong)pbVar10;
      param_1[0x12] = (ulonglong)pcStack_158;
      param_1[0x13] = (ulonglong)pbStack_150;
      param_1[0x14] = (ulonglong)pcStack_148;
      *param_1 = param_3;
      param_1[1] = (ulonglong)param_4;
      param_1[0x11] = (ulonglong)ppcStack_108;
      *(undefined1 *)(param_1 + 0x15) = 0;
      return param_1;
    }
    if (2 < *_DAT_143ca8e90) {
      pcStack_70 = (code *)0x8000000000000000;
      uStack_49 = 1;
      pdb_141b1e240(&pcStack_158,pbStack_58,uVar1,2);
      pcStack_100 = pdb_140f58250;
      pbStack_f8 = &UNK_1431e55f8;
      pcStack_f0 = pdb_1402ed400;
      pbStack_e8 = (byte *)0x0;
      pcStack_e0 = (code *)&UNK_1431e55d2;
      pbStack_d8 = (byte *)0x12;
      uStack_d0 = 0;
      puStack_c8 = &UNK_1431e555f;
      uStack_c0 = 0x1f;
      puStack_b8 = (undefined *)0x3;
      puStack_b0 = &UNK_1431e55d2;
      puStack_a8 = (undefined *)0x12;
      uStack_a0 = 0x16f00000001;
      puStack_98 = &UNK_1431e5608;
      ppcStack_108 = &pcStack_158;
      pppcStack_90 = &ppcStack_108;
      pdb_140f332f0(&uStack_4b,&pbStack_e8);
      if (pcStack_158 != (code *)0x0) {
        pub_1406abac0(pbStack_150,(ulonglong)pcStack_158,1);
      }
    }
    puVar9 = puStack_88;
    *param_1 = 2;
    if (pcStack_68 != (code *)0x0) {
      pub_1406abac0(pbStack_80,(ulonglong)pcStack_68,1);
    }
  }
  if (*puVar9 != 0) {
    pub_1406abac0(pbStack_58,*puVar9,1);
  }
  return param_1;
}

