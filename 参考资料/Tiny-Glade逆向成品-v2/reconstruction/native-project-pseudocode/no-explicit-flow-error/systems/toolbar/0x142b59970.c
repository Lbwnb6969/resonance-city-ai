// VA 0x142b59970, PDB extent 2443 bytes
// toolbar::resouces_and_components::undo_redo_layout::UndoRedoLayout::setup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/undo_redo_layout.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   toolbar::resouces_and_components::undo_redo_layout::UndoRedoLayout::setup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/resouces_and_components/undo_redo_layout.rs
   Extent: 2443 */

void pdb_142b59970(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  byte *pbVar25;
  longlong lVar26;
  longlong *plVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 in_stack_fffffffffffffcf8;
  undefined4 uVar32;
  undefined8 uVar31;
  undefined4 uVar33;
  int iStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  byte abStack_298 [8];
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined1 uStack_280;
  ulonglong uStack_278;
  byte *pbStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulonglong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined2 uStack_128;
  undefined1 uStack_126;
  undefined4 *puStack_120;
  undefined8 uStack_118;
  ulonglong uStack_110;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  
  uVar22 = _UNK_1434d7918;
  uVar21 = _DAT_1434d7910;
  uVar20 = _UNK_1434d7908;
  uVar19 = _DAT_1434d7900;
  uVar14 = _UNK_1434d78c8;
  uVar13 = _DAT_1434d78c0;
  uVar12 = _UNK_1434d78b0;
  uVar11 = _DAT_1434d78a8;
  uVar29 = _DAT_1434d78a0;
  uVar10 = _UNK_1434d7898;
  uVar9 = _DAT_1434d7890;
  uVar30 = _DAT_1434d7888;
  uVar8 = _UNK_1434d7880;
  uVar7 = _DAT_1434d7878;
  uVar6 = _DAT_142e378e0;
  uVar32 = (undefined4)((ulonglong)in_stack_fffffffffffffcf8 >> 0x20);
  uStack_210 = _DAT_14367e8e0;
  uStack_208 = _UNK_14367e8e8;
  uStack_200 = _DAT_14367e8e0;
  uStack_1f8 = _UNK_14367e8e8;
  uStack_1c0 = _DAT_1434d7930;
  uStack_1b8 = _UNK_1434d7938;
  uStack_1b0 = _DAT_1434d7940;
  uStack_1a8 = _UNK_1434d7948;
  uStack_1a0 = _DAT_1434d7950;
  uStack_198 = _UNK_1434d7958;
  uStack_190 = _DAT_1434d7960;
  uStack_188 = _UNK_1434d7968;
  uStack_180 = _DAT_1434d7970;
  uStack_178 = _UNK_1434d7978;
  uStack_218 = 0;
  uStack_170 = _DAT_1434d7980;
  uStack_168 = _UNK_1434d7988;
  uStack_160 = CONCAT44(_UNK_1434d7994,_DAT_1434d7990);
  uStack_158 = CONCAT44(_UNK_1434d799c,_UNK_1434d7998);
  uStack_1e0 = _DAT_1434d7910;
  uStack_1d8 = _UNK_1434d7918;
  uStack_1f0 = _DAT_1434d7900;
  uStack_1e8 = _UNK_1434d7908;
  uStack_128 = 0x907;
  uStack_126 = 4;
  uStack_1d0 = CONCAT44(_UNK_1434d7924,_DAT_1434d7920);
  uStack_1c8 = CONCAT44(_UNK_1434d792c,_UNK_1434d7928);
  uStack_150 = 2;
  uStack_138 = _DAT_142e378e0;
  uStack_278 = _DAT_1434d7878;
  pbStack_270 = (byte *)_UNK_1434d7880;
  uStack_268 = _DAT_1434d7888;
  uStack_260 = _DAT_1434d7890;
  uStack_258 = _UNK_1434d7898;
  uStack_250 = _DAT_1434d78a0;
  uStack_238 = _DAT_1434d78b8;
  uStack_248 = _DAT_1434d78a8;
  uStack_240 = _UNK_1434d78b0;
  uStack_220 = _DAT_1434d78d0;
  uStack_230 = _DAT_1434d78c0;
  uStack_228 = _UNK_1434d78c8;
  uStack_130 = 0x707020000000000;
  uStack_148 = 0;
  uStack_140 = 0;
  pdb_1411bded0(&iStack_2e8,param_2,&uStack_278);
  uVar24 = uStack_2e0;
  uVar33 = uStack_2e4;
  if (iStack_2e8 == 4) {
    lVar26 = *(longlong *)(param_2 + 0xa8);
    if (lVar26 == *(longlong *)(param_2 + 0x98)) {
      pdb_142d7ede0(param_2 + 0x98);
    }
    lVar3 = *(longlong *)(param_2 + 0xa0);
    puVar1 = (undefined8 *)(lVar3 + lVar26 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(lVar3 + 0x10 + lVar26 * 0x28) = uVar33;
    *(undefined4 *)(lVar3 + 0x14 + lVar26 * 0x28) = uVar24;
    *(undefined1 *)(lVar3 + 0x24 + lVar26 * 0x28) = 4;
    uVar18 = _UNK_1434d78f8;
    uVar17 = _DAT_1434d78f0;
    uVar16 = _UNK_1434d78e8;
    uVar15 = _DAT_1434d78e0;
    uStack_1d0 = _DAT_14367e320;
    uStack_1c8 = _UNK_14367e328;
    uStack_1c0 = _DAT_1434d7930;
    uStack_1b8 = _UNK_1434d7938;
    uStack_1b0 = _DAT_1434d7940;
    uStack_1a8 = _UNK_1434d7948;
    uStack_1a0 = _DAT_1434d7950;
    uStack_198 = _UNK_1434d7958;
    uStack_190 = _DAT_1434d7960;
    uStack_188 = _UNK_1434d7968;
    uStack_180 = _DAT_1434d7970;
    uStack_178 = _UNK_1434d7978;
    uStack_218 = 0;
    uStack_170 = _DAT_1434d7980;
    uStack_168 = _UNK_1434d7988;
    uStack_160 = CONCAT44(_UNK_1434d7994,_DAT_1434d7990);
    uStack_158 = CONCAT44(_UNK_1434d799c,_UNK_1434d7998);
    uStack_200 = _DAT_1434d78f0;
    uStack_1f8 = _UNK_1434d78f8;
    uStack_210 = _DAT_1434d78e0;
    uStack_208 = _UNK_1434d78e8;
    uStack_1e0 = uVar21;
    uStack_1d8 = uVar22;
    uStack_1f0 = uVar19;
    uStack_1e8 = uVar20;
    uStack_128 = 0x907;
    uStack_126 = 4;
    uStack_150 = 2;
    uStack_138 = uVar6;
    uStack_268 = uVar30;
    uStack_278 = uVar7;
    pbStack_270 = (byte *)uVar8;
    uStack_250 = uVar29;
    uStack_260 = uVar9;
    uStack_258 = uVar10;
    uStack_238 = _DAT_1434d78b8;
    uStack_248 = uVar11;
    uStack_240 = uVar12;
    uStack_220 = _DAT_1434d78d0;
    uStack_230 = uVar13;
    uStack_228 = uVar14;
    uStack_130 = 0x707040000000000;
    uStack_148 = 0;
    uStack_140 = 0;
    *(longlong *)(param_2 + 0xa8) = lVar26 + 1;
    pdb_1411bded0(&iStack_2e8,param_2,&uStack_278);
    uVar23 = uStack_2e4;
    if (iStack_2e8 == 4) {
      uVar31 = CONCAT44(uVar32,uStack_2e4);
      pdb_1411be050(&iStack_2b8,param_2,uVar33,uVar24,uVar31,uStack_2e0);
      if (iStack_2b8 != 4) {
        uStack_2d8 = (undefined4)uStack_2a8;
        uStack_2d4 = uStack_2a8._4_4_;
        uStack_2d0 = (undefined4)uStack_2a0;
        uStack_2cc = uStack_2a0._4_4_;
LAB_142b5a2be:
        uStack_268 = CONCAT44(uStack_2d4,uStack_2d8);
        uStack_260 = CONCAT44(uStack_2cc,uStack_2d0);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1436088e0,0x2b,&uStack_278,&UNK_1436088c0,&UNK_143608b10);
      }
      uStack_2c0 = uVar24;
      uStack_2bc = uVar33;
      uStack_2a8 = &UNK_14367e900;
      uStack_2a0 = 9;
      abStack_298[0] = 0;
      puStack_290 = &UNK_14367e909;
      uStack_288 = 9;
      uStack_280 = 1;
      uStack_110 = 0;
      lVar26 = 0;
      puStack_120 = param_1;
      do {
        uVar33 = (undefined4)((ulonglong)uVar31 >> 0x20);
        bVar2 = abStack_298[lVar26 * 0x18];
        if (bVar2 == 2) break;
        uVar4 = (&uStack_2a8)[lVar26 * 3];
        uVar5 = *(ulonglong *)(abStack_298 + lVar26 * 0x18 + -8);
        uStack_1b0 = _DAT_1434d7940;
        uStack_1a8 = _UNK_1434d7948;
        uStack_1c0 = _DAT_1434d7930;
        uStack_1b8 = _UNK_1434d7938;
        uStack_1a0 = _DAT_1434d7950;
        uStack_198 = _UNK_1434d7958;
        uStack_190 = _DAT_1434d7960;
        uStack_188 = _UNK_1434d7968;
        uStack_180 = _DAT_1434d7970;
        uStack_178 = _UNK_1434d7978;
        uStack_218 = 0;
        uStack_160 = CONCAT44(_UNK_1434d7994,_DAT_1434d7990);
        uStack_158 = CONCAT44(_UNK_1434d799c,_UNK_1434d7998);
        uStack_170 = _DAT_1434d7980;
        uStack_168 = _UNK_1434d7988;
        uStack_200 = uVar17;
        uStack_1f8 = uVar18;
        uStack_210 = uVar15;
        uStack_208 = uVar16;
        uStack_1e0 = uVar21;
        uStack_1d8 = uVar22;
        uStack_1f0 = uVar19;
        uStack_1e8 = uVar20;
        uStack_128 = 0x907;
        uStack_126 = 4;
        uStack_1d0 = CONCAT44(_UNK_1434d7924,_DAT_1434d7920);
        uStack_1c8 = CONCAT44(_UNK_1434d792c,_UNK_1434d7928);
        uStack_150 = 2;
        uStack_138 = uVar6;
        uStack_278 = uVar7;
        pbStack_270 = (byte *)uVar8;
        uStack_260 = uVar9;
        uStack_258 = uVar10;
        uStack_238 = _DAT_1434d78b8;
        uStack_248 = uVar11;
        uStack_240 = uVar12;
        uStack_220 = _DAT_1434d78d0;
        uStack_230 = uVar13;
        uStack_228 = uVar14;
        uStack_130 = 0x707040000000000;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_268 = uVar30;
        uStack_250 = uVar29;
        pdb_1411bded0(&iStack_108,param_2,&uStack_278);
        if (iStack_108 != 4) {
          uStack_2d8 = uStack_f8;
          uStack_2d4 = uStack_f4;
          uStack_2d0 = uStack_f0;
          uStack_2cc = uStack_ec;
          iStack_2e8 = iStack_108;
          uStack_2e4 = uStack_104;
          uStack_2e0 = uStack_100;
          uStack_2dc = uStack_fc;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_1436088e0,0x2b,&iStack_2e8,&UNK_1436088c0,&UNK_143608af8);
        }
        uVar31 = CONCAT44(uVar33,uStack_104);
        pdb_1411be050(&iStack_2e8,param_2,uVar23,uStack_2e0,uVar31,uStack_100);
        if (iStack_2e8 != 4) goto LAB_142b5a2be;
        uStack_248 = 0;
        uStack_240 = 0;
        if ((longlong)uVar5 < 0) {
          uVar30 = 0;
LAB_142b5a181:
          pdb_142dc7e2a(uVar30,uVar5);
          break;
        }
        if (uVar5 == 0) {
          pbVar25 = (byte *)0x1;
        }
        else {
          uStack_118 = param_3;
          pdb_14007ee60();
          uVar30 = 1;
          pbVar25 = pub_1406abab0(uVar5,1);
          if (pbVar25 == (byte *)0x0) goto LAB_142b5a181;
          pub_142e32760(pbVar25,uVar4,uVar5);
          param_3 = uStack_118;
        }
        uStack_260 = uStack_260 & 0xffffffff00000000;
        uStack_220 = CONCAT53(uStack_220._3_5_,1);
        uStack_258 = (ulonglong)_DAT_142e36f28;
        uStack_250 = CONCAT35((int3)((ulonglong)uStack_250 >> 0x28),0x200000000);
        uStack_230 = CONCAT44(_UNK_14367e8f4,_DAT_14367e8f0);
        uStack_228 = CONCAT44(_UNK_14367e8fc,_UNK_14367e8f8);
        uStack_218 = 0;
        puVar28 = &UNK_14367e3b0;
        uStack_278 = uVar5;
        pbStack_270 = pbVar25;
        uStack_268 = uVar5;
        pdb_1411b0a20(&iStack_2e8,param_3,&uStack_278,&UNK_14367e3b0);
        uVar30 = _DAT_1434d7888;
        uVar4 = CONCAT44(uStack_2e4,iStack_2e8);
        plVar27 = (longlong *)CONCAT44(uStack_2d4,uStack_2d8);
        if (plVar27 == (longlong *)0x0) {
          plVar27 = (longlong *)CONCAT44(uStack_2cc,uStack_2d0);
        }
        lVar26 = plVar27[2];
        if ((ulonglong)(*plVar27 - lVar26) < 0x18) {
          uVar31 = 0;
          puVar28 = (undefined *)0x0;
          pdb_142d7f1b0(plVar27,lVar26,0x18,1,1);
        }
        lVar3 = plVar27[1];
        *(code **)(lVar3 + lVar26) = pdb_1411aec70;
        *(undefined8 *)(lVar3 + 8 + lVar26) = uVar4;
        *(byte *)(lVar3 + 0x10 + lVar26) = bVar2 & 1;
        *(undefined1 *)(lVar3 + 0x11 + lVar26) = 0;
        lVar3 = lVar26 + 0x18;
        plVar27[2] = lVar3;
        uVar29 = _DAT_1434d78a0;
        if ((ulonglong)(*plVar27 - lVar3) < 0x18) {
          uVar31 = 0;
          puVar28 = (undefined *)0x0;
          pdb_142d7f1b0(plVar27,lVar3,0x18,1,1);
        }
        lVar3 = plVar27[1];
        *(code **)(lVar3 + 0x18 + lVar26) = pdb_1411af5c0;
        *(undefined8 *)(lVar3 + 0x20 + lVar26) = uVar4;
        *(undefined1 *)(lVar3 + 0x28 + lVar26) = 0;
        plVar27[2] = lVar26 + 0x30;
        lVar26 = 1;
        uVar5 = uStack_110 & 1;
        uStack_110 = CONCAT71((int7)((ulonglong)puVar28 >> 8),1);
      } while (uVar5 == 0);
      *puStack_120 = uStack_2bc;
      puStack_120[1] = uStack_2c0;
      puStack_120[2] = uVar23;
      puStack_120[3] = uStack_2e0;
      puStack_120[4] = 0;
      return;
    }
  }
  iStack_2b8 = iStack_2e8;
  uStack_2b4 = uStack_2e4;
  uStack_2b0 = uStack_2e0;
  uStack_2ac = uStack_2dc;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1436088e0,0x2b,&iStack_2b8,&UNK_1436088c0,&UNK_143608af8);
}

