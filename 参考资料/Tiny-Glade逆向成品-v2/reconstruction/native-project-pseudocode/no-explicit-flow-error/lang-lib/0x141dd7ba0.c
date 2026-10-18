// VA 0x141dd7ba0, PDB extent 1112 bytes
// lang_lib::language_library::LanguageLibrary::try_from_yml
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/language_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: lang_lib::language_library::LanguageLibrary::try_from_yml
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/language_library.rs
   Extent: 1112 */

ulonglong *
pdb_141dd7ba0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong lVar1;
  char *pcVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  char *pcStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong lStack_e8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  byte *pbStack_70;
  ulonglong uStack_68;
  ulonglong *puStack_60;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_52 = 1;
  puStack_60 = param_4;
  pdb_140f55d10(&uStack_a8);
  pbVar9 = (byte *)CONCAT44(uStack_9c,uStack_a0);
  if (SBORROW8(0,uStack_a8)) {
    uStack_52 = 1;
    uVar5 = pdb_142e24720(pbVar9);
    param_1[1] = uVar5;
    *param_1 = 0;
  }
  else {
    uStack_68 = uStack_a8;
    uStack_51 = 1;
    pbStack_70 = pbVar9;
    pdb_141ddc610(&uStack_128,pbVar9,uStack_98);
    uStack_d0 = pcStack_118;
    pcVar2 = uStack_d0;
    lStack_c8 = lStack_110;
    uStack_d0._0_4_ = SUB84(pcStack_118,0);
    uStack_d0._4_4_ = (undefined4)((ulonglong)pcStack_118 >> 0x20);
    uStack_d0 = pcVar2;
    if (SBORROW8(0,CONCAT44(uStack_124,uStack_128))) {
      uStack_f8 = uStack_120;
      uStack_f4 = uStack_11c;
      uStack_f0 = (undefined4)uStack_d0;
      uStack_ec = uStack_d0._4_4_;
      lStack_e8 = lStack_110;
      uStack_53 = lStack_110 != 0;
      uVar5 = CONCAT71((int7)((ulonglong)pbVar9 >> 8),uStack_53);
      if (lStack_110 == 0) {
        uStack_b0 = *puStack_60;
        uStack_b8 = puStack_60[1];
        uVar10 = puStack_60[2];
        puVar6 = (ulonglong *)pdb_140f3bda0();
        if ((char)puVar6[2] == '\x01') {
          uVar8 = *puVar6;
          uVar5 = puVar6[1];
        }
        else {
          uVar8 = pdb_140f4fd10();
          *puVar6 = uVar8;
          puVar6[1] = uVar5;
          *(undefined1 *)(puVar6 + 2) = 1;
        }
        *puVar6 = uVar8 + 1;
        pdb_14007ee60();
        uVar4 = _UNK_1433e03b8;
        param_1[4] = _DAT_1433e03b0;
        param_1[5] = uVar4;
        uVar13 = _UNK_1433e03ac;
        uVar12 = _UNK_1433e03a8;
        uVar11 = _UNK_1433e03a4;
        *(undefined4 *)(param_1 + 2) = _DAT_1433e03a0;
        *(undefined4 *)((longlong)param_1 + 0x14) = uVar11;
        *(undefined4 *)(param_1 + 3) = uVar12;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uVar13;
        param_1[6] = uVar8;
        param_1[7] = uVar5;
        uVar5 = uStack_b8;
      }
      else {
        if (*pcStack_118 != '\x05') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1433e0320);
        }
        lVar1 = *(longlong *)(pcStack_118 + 0x28);
        if (lVar1 == 0) {
          uVar11 = 0;
          uVar12 = 0;
          uVar13 = 0;
          uVar14 = 0;
        }
        else {
          uVar11 = *(undefined4 *)(lVar1 + 0x70);
          uVar12 = *(undefined4 *)(lVar1 + 0x74);
          uVar13 = *(undefined4 *)(lVar1 + 0x78);
          uVar14 = *(undefined4 *)(lVar1 + 0x7c);
        }
        pcVar2 = *(char **)(pcStack_118 + 0x20);
        plVar7 = (longlong *)pdb_14008d710(0);
        if (plVar7 == (longlong *)0x0) {
          pdb_142dc7890(&UNK_1435882a8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        uStack_88 = *plVar7;
        uStack_80 = plVar7[1];
        *plVar7 = *plVar7 + 1;
        uStack_98 = _DAT_1435881d0;
        uStack_90 = _UNK_1435881d8;
        uStack_a8 = CONCAT44(_UNK_1435881c4,_DAT_1435881c0);
        uStack_a0 = _UNK_1435881c8;
        uStack_9c = _UNK_1435881cc;
        if (pcVar2 != (char *)0x0) {
          pdb_142e23d20(&uStack_a8,pcVar2,&uStack_88,1);
        }
        uStack_128 = uVar11;
        uStack_124 = uVar12;
        uStack_120 = uVar13;
        uStack_11c = uVar14;
        pcStack_118 = pcVar2;
        pdb_1426ee580(&uStack_128,&uStack_a8);
        *(undefined4 *)(param_1 + 6) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)param_1 + 0x34) = uStack_88._4_4_;
        *(undefined4 *)(param_1 + 7) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_80._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)uStack_98;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_98._4_4_;
        *(undefined4 *)(param_1 + 5) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_90._4_4_;
        *(undefined4 *)(param_1 + 2) = (undefined4)uStack_a8;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_a8._4_4_;
        *(undefined4 *)(param_1 + 3) = uStack_a0;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_9c;
        uVar5 = puStack_60[1];
        uVar10 = puStack_60[2];
        pdb_14007ee60();
      }
      *param_1 = uVar5;
      param_1[1] = uVar10;
      uStack_51 = 0;
      pdb_141dd7710(&uStack_f8);
      uVar5 = uStack_68;
      if (uStack_68 == 0) {
        return param_1;
      }
      goto LAB_141dd7df8;
    }
    uStack_88 = lStack_108;
    uStack_80 = lStack_100;
    uStack_a0 = uStack_120;
    uStack_9c = uStack_11c;
    uStack_98 = pcStack_118;
    uStack_90 = lStack_110;
    uStack_51 = 1;
    uStack_a8 = CONCAT44(uStack_124,uStack_128);
    uVar5 = pdb_142e24680(&uStack_a8);
    param_1[1] = uVar5;
    *param_1 = 0;
    if (uStack_68 != 0) {
      pub_1406abac0(pbStack_70,uStack_68,1);
    }
  }
  if (*puStack_60 == 0) {
    return param_1;
  }
  pbStack_70 = (byte *)puStack_60[1];
  uVar5 = *puStack_60;
LAB_141dd7df8:
  pub_1406abac0(pbStack_70,uVar5,1);
  return param_1;
}

