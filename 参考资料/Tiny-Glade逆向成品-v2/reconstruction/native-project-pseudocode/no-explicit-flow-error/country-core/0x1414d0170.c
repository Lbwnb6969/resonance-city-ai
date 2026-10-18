// VA 0x1414d0170, PDB extent 1021 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storage<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::archive_current_decorators_in_storage<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 1021 */

void pdb_1414d0170(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,ulonglong param_6,ulonglong param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar7 = param_2;
  lVar5 = pdb_140c41030(param_4);
  if (lVar5 != 0) {
    pdb_1414ce2b0(param_1,param_2,param_3,lVar5,param_5);
    return;
  }
  uVar9 = param_7 == 0;
  if (-1 < (longlong)param_7) goto LAB_1414d0213;
  uVar8 = 0;
  while( true ) {
    uVar9 = 1;
    uVar7 = param_7;
    pdb_142dc7e2a(uVar8);
LAB_1414d0213:
    if ((bool)uVar9) break;
    pdb_14007ee60();
    uVar8 = 1;
    pbStack_80 = pub_1406abab0(param_7,1);
    if (pbStack_80 != (byte *)0x0) {
      pub_142e32760(pbStack_80,param_6,param_7);
      uVar7 = param_6;
LAB_1414d024f:
      uStack_88 = param_7;
      uStack_78 = param_7;
      plVar6 = (longlong *)pdb_14008d710(0);
      if (plVar6 == (longlong *)0x0) {
        pdb_142dc7890(&UNK_14330e598);
      }
      else {
        uStack_98 = (undefined4)*plVar6;
        uStack_94 = *(undefined4 *)((longlong)plVar6 + 4);
        uStack_90 = (undefined4)plVar6[1];
        uStack_8c = *(undefined4 *)((longlong)plVar6 + 0xc);
        *plVar6 = *plVar6 + 1;
        uVar4 = _UNK_143512188;
        uVar3 = _DAT_143512180;
        uVar2 = _UNK_143512178;
        uVar8 = _DAT_143512170;
        uStack_a8 = _DAT_143512180;
        uStack_a0 = _UNK_143512188;
        uStack_b8 = (ulonglong *)_DAT_143512170;
        uStack_b0 = (code *)_UNK_143512178;
        plVar6 = (longlong *)pdb_140f3bda0();
        if ((char)plVar6[2] == '\x01') {
          uStack_c8 = *plVar6;
          uVar7 = plVar6[1];
        }
        else {
          uStack_c8 = pdb_140f4fd10();
          *plVar6 = uStack_c8;
          plVar6[1] = uVar7;
          *(undefined1 *)(plVar6 + 2) = 1;
        }
        *plVar6 = uStack_c8 + 1;
        uStack_d8 = _DAT_143313e50;
        uStack_d0 = _UNK_143313e58;
        uStack_e8 = _DAT_143313e40;
        uStack_e4 = _UNK_143313e44;
        uStack_e0 = _UNK_143313e48;
        uStack_dc = _UNK_143313e4c;
        uStack_c0 = uVar7;
        plVar6 = (longlong *)pdb_14008d710(0);
        if (plVar6 != (longlong *)0x0) {
          uStack_f8 = (undefined4)*plVar6;
          uStack_f4 = *(undefined4 *)((longlong)plVar6 + 4);
          uStack_f0 = (undefined4)plVar6[1];
          uStack_ec = *(undefined4 *)((longlong)plVar6 + 0xc);
          *plVar6 = *plVar6 + 1;
          uStack_128 = CONCAT44(uStack_94,uStack_98);
          uStack_120 = CONCAT44(uStack_8c,uStack_90);
          uStack_138 = uStack_a8;
          uStack_130 = uStack_a0;
          uStack_148 = uStack_b8;
          uStack_140 = uStack_b0;
          uStack_178 = uStack_e8;
          uStack_174 = uStack_e4;
          uStack_170 = uStack_e0;
          uStack_16c = uStack_dc;
          uStack_168 = (undefined4)uStack_d8;
          uStack_164 = uStack_d8._4_4_;
          uStack_160 = (undefined4)uStack_d0;
          uStack_15c = uStack_d0._4_4_;
          uStack_158 = (undefined4)uStack_c8;
          uStack_154 = uStack_c8._4_4_;
          uStack_150 = (undefined4)uStack_c0;
          uStack_14c = uStack_c0._4_4_;
          uStack_118 = uVar8;
          uStack_110 = uVar2;
          uStack_108 = uVar3;
          uStack_100 = uVar4;
          uStack_b8 = &uStack_88;
          uStack_b0 = pdb_140001020;
          pdb_140f60760(&uStack_e8,&UNK_143313e18,&uStack_b8);
          uStack_b8 = (ulonglong *)CONCAT44(uStack_e4,uStack_e8);
          uStack_b0 = (code *)CONCAT44(uStack_dc,uStack_e0);
          uStack_a8 = uStack_d8;
          pdb_1414cf0c0(param_1,param_2,param_3,&uStack_178,*param_5,param_5[4],&uStack_b8);
          pdb_1404d6920(&uStack_178);
          if (uStack_88 == 0) {
            return;
          }
          pub_1406abac0(pbStack_80,uStack_88,1);
          return;
        }
        pdb_142dc7890(&UNK_14330e598);
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  pbStack_80 = (byte *)0x1;
  goto LAB_1414d024f;
}

