// VA 0x141da7120, PDB extent 4885 bytes
// alloc::collections::btree::node::Handle::insert_recursing<alloc::string::String,enum2$<tg_mods::overlay::ModTextureBinding>,alloc::alloc::Global,alloc::collections::btree::map::entry::impl$8::insert_entry::closure_env$0<alloc::string::String,enum2$<tg_mods::overlay::ModTextureBinding>,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   alloc::collections::btree::node::Handle::insert_recursing<alloc::string::String,enum2$<tg_mods::overlay::ModTextureBinding>,alloc::alloc::Global,alloc::collections::btree::map::entry::impl$8::insert_entry::closure_env$0<alloc::string::String,enum2$<tg_mods::overlay::ModTextureBinding>,alloc::alloc::Global>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/lib.rs
   Extent: 4885 */

void pdb_141da7120(undefined8 *param_1,byte *param_2,ulonglong *param_3,ulonglong *param_4,
                  longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 unaff_RBX;
  undefined7 uVar16;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  short sVar17;
  ulonglong *puVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  byte *pbVar25;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  ulonglong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong uStack_168;
  ulonglong uStack_158;
  ulonglong *puStack_150;
  ulonglong *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  ulonglong *puStack_118;
  ulonglong uStack_110;
  ulonglong *puStack_108;
  ulonglong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_cc;
  undefined8 *puStack_c8;
  ulonglong *puStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong *puStack_a8;
  ulonglong uStack_a0;
  ulonglong *puStack_98;
  ulonglong *puStack_90;
  ulonglong *puStack_88;
  ulonglong uStack_80;
  ulonglong *puStack_78;
  ulonglong uStack_70;
  ulonglong *puStack_68;
  ulonglong *puStack_60;
  ulonglong *puStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar6 = *(ulonglong **)param_2;
  uVar1 = *(ushort *)((longlong)puVar6 + 0x2ca);
  pbVar8 = (byte *)(ulonglong)uVar1;
  puStack_c8 = param_1;
  puStack_58 = puVar6;
  if (pbVar8 < (byte *)0xb) {
    puVar23 = *(ulonglong **)((longlong)param_2 + 0x10);
    pbVar25 = (byte *)((longlong)puVar23 + 1);
    puVar5 = puVar6 + (longlong)puVar23 * 3 + 1;
    if (pbVar8 < pbVar25) {
      puVar6[(longlong)puVar23 * 3 + 3] = param_3[2];
      uVar10 = param_3[1];
      *puVar5 = *param_3;
      puVar6[(longlong)puVar23 * 3 + 2] = uVar10;
      uStack_138 = param_4[4];
      uStack_158 = *param_4;
      puStack_150 = (ulonglong *)param_4[1];
      puStack_148 = (ulonglong *)param_4[2];
      uStack_140 = param_4[3];
    }
    else {
      pbStack_50 = param_2;
      pub_142e32770(puVar6 + (longlong)pbVar25 * 3 + 1,puVar5,
                    ((longlong)pbVar8 - (longlong)puVar23) * 0x18);
      uVar10 = param_3[1];
      *puVar5 = *param_3;
      puVar6[(longlong)puVar23 * 3 + 2] = uVar10;
      puVar6[(longlong)puVar23 * 3 + 3] = param_3[2];
      uStack_138 = param_4[4];
      uStack_158 = *param_4;
      puStack_150 = (ulonglong *)param_4[1];
      puStack_148 = (ulonglong *)param_4[2];
      uStack_140 = param_4[3];
      pub_142e32770(puStack_58 + (longlong)pbVar25 * 5 + 0x22,
                    puStack_58 + (longlong)puVar23 * 5 + 0x22,
                    ((longlong)pbVar8 - (longlong)puVar23) * 0x28);
      param_2 = pbStack_50;
    }
    puStack_58[(longlong)puVar23 * 5 + 0x26] = uStack_138;
    puStack_58[(longlong)puVar23 * 5 + 0x24] = (ulonglong)puStack_148;
    (puStack_58 + (longlong)puVar23 * 5 + 0x24)[1] = uStack_140;
    puStack_58[(longlong)puVar23 * 5 + 0x22] = uStack_158;
    (puStack_58 + (longlong)puVar23 * 5 + 0x22)[1] = (ulonglong)puStack_150;
    *(ushort *)((longlong)puStack_58 + 0x2ca) = uVar1 + 1;
    uStack_b8 = *(ulonglong *)((longlong)param_2 + 8);
    puStack_c0 = puStack_58;
  }
  else {
    puStack_98 = *(ulonglong **)((longlong)param_2 + 0x10);
    if (puStack_98 < (ulonglong *)0x5) {
      uVar10 = 4;
      uVar12 = 0;
    }
    else if (puStack_98 == (ulonglong *)0x5) {
      uVar12 = 0;
      uVar10 = 5;
    }
    else {
      uVar16 = (undefined7)((ulonglong)unaff_RBX >> 8);
      if (puStack_98 == (ulonglong *)0x6) {
        uVar10 = 5;
        uVar12 = (undefined4)CONCAT71(uVar16,1);
        puStack_98 = (ulonglong *)0x0;
      }
      else {
        puStack_98 = (ulonglong *)((longlong)puStack_98 - 7);
        uVar10 = 6;
        uVar12 = (undefined4)CONCAT71(uVar16,1);
      }
    }
    uVar20 = *param_3;
    puVar6 = (ulonglong *)param_3[1];
    uVar7 = *(ulonglong *)((longlong)param_2 + 8);
    puStack_68 = param_4;
    pdb_14007ee60();
    puVar5 = (ulonglong *)pub_1406abab0(0x2d0,8);
    puVar15 = puStack_58;
    if (puVar5 == (ulonglong *)0x0) {
      puStack_58 = puVar6;
      pbStack_50 = (byte *)uVar20;
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x2d0);
    }
    pbStack_50 = (byte *)CONCAT44(pbStack_50._4_4_,uVar12);
    *puVar5 = 0;
    uVar13 = ~uVar10 + (ulonglong)*(ushort *)((longlong)puStack_58 + 0x2ca);
    *(short *)((longlong)puVar5 + 0x2ca) = (short)uVar13;
    uStack_80 = puStack_58[uVar10 * 3 + 1];
    puStack_60 = (ulonglong *)puStack_58[uVar10 * 3 + 2];
    uStack_138 = puStack_58[uVar10 * 5 + 0x26];
    uStack_158 = puStack_58[uVar10 * 5 + 0x22];
    puStack_150 = (ulonglong *)(puStack_58 + uVar10 * 5 + 0x22)[1];
    puStack_148 = (ulonglong *)puStack_58[uVar10 * 5 + 0x24];
    uStack_140 = (puStack_58 + uVar10 * 5 + 0x24)[1];
    puStack_90 = puVar5;
    if (0xb < uVar13) {
      puStack_58 = puVar6;
      pbStack_50 = (byte *)uVar20;
      pdb_142dc8420(0,uVar13,0xb,&UNK_1433d98b8);
LAB_141da80d0:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    puStack_a8 = (ulonglong *)puStack_58[uVar10 * 3 + 3];
    puStack_78 = param_3;
    pub_142e32760(puVar5 + 1,puStack_58 + (uVar10 + 1) * 3 + 1,uVar13 * 0x18);
    pub_142e32760(puVar5 + 0x22,puVar15 + (uVar10 + 1) * 5 + 0x22,uVar13 * 0x28);
    puVar23 = puStack_98;
    uVar20 = uStack_158;
    *(short *)((longlong)puStack_58 + 0x2ca) = (short)uVar10;
    uStack_188 = (undefined4)puVar15[uVar10 * 5 + 0x23];
    uStack_184 = *(undefined4 *)((longlong)puVar15 + uVar10 * 0x28 + 0x11c);
    uStack_180 = (undefined4)puVar15[uVar10 * 5 + 0x24];
    uStack_17c = *(undefined4 *)((longlong)puVar15 + uVar10 * 0x28 + 0x124);
    uStack_178 = (undefined4)puVar15[uVar10 * 5 + 0x25];
    uStack_174 = *(undefined4 *)((longlong)puVar15 + uVar10 * 0x28 + 300);
    uStack_170 = (undefined4)puVar15[uVar10 * 5 + 0x26];
    uStack_16c = *(undefined4 *)((longlong)puVar15 + uVar10 * 0x28 + 0x134);
    uStack_b8 = 0;
    if ((char)pbStack_50 == '\0') {
      uStack_b8 = uVar7;
      puVar5 = puStack_58;
    }
    uVar1 = *(ushort *)((longlong)puVar5 + 0x2ca);
    puVar6 = puVar5 + (longlong)puStack_98 * 3 + 1;
    uVar10 = (longlong)(ulonglong)uVar1 - (longlong)puStack_98;
    pbStack_50 = (byte *)uVar7;
    if ((ulonglong *)(ulonglong)uVar1 < puStack_98 || uVar10 == 0) {
      puVar6[2] = puStack_78[2];
      uVar7 = puStack_78[1];
      *puVar6 = *puStack_78;
      puVar6[1] = uVar7;
      uStack_138 = puStack_68[4];
      uStack_158 = *puStack_68;
      puStack_150 = (ulonglong *)puStack_68[1];
      puStack_148 = (ulonglong *)puStack_68[2];
      uStack_140 = puStack_68[3];
    }
    else {
      uVar10 = (ulonglong)(uint)((int)uVar10 << 3);
      pub_142e32770(puVar5 + (longlong)puStack_98 * 3 + 4,puVar6,uVar10 * 3);
      uVar7 = puStack_78[1];
      *puVar6 = *puStack_78;
      puVar6[1] = uVar7;
      puVar6[2] = puStack_78[2];
      uStack_138 = puStack_68[4];
      uStack_158 = *puStack_68;
      puStack_150 = (ulonglong *)puStack_68[1];
      puStack_148 = (ulonglong *)puStack_68[2];
      uStack_140 = puStack_68[3];
      pub_142e32770(puVar5 + (longlong)puVar23 * 5 + 0x27,puVar5 + (longlong)puVar23 * 5 + 0x22,
                    uVar10 * 5);
    }
    puVar5[(longlong)puVar23 * 5 + 0x26] = uStack_138;
    puVar5[(longlong)puVar23 * 5 + 0x24] = (ulonglong)puStack_148;
    (puVar5 + (longlong)puVar23 * 5 + 0x24)[1] = uStack_140;
    puVar5[(longlong)puVar23 * 5 + 0x22] = uStack_158;
    (puVar5 + (longlong)puVar23 * 5 + 0x22)[1] = (ulonglong)puStack_150;
    *(ushort *)((longlong)puVar5 + 0x2ca) = uVar1 + 1;
    uStack_1a8 = CONCAT44(uStack_184,uStack_188);
    uStack_1a0 = CONCAT44(uStack_17c,uStack_180);
    uStack_198 = CONCAT44(uStack_174,uStack_178);
    uStack_190 = CONCAT44(uStack_16c,uStack_170);
    puStack_c0 = puVar5;
    if (uVar20 != 2) {
      uStack_b0 = 0;
      uStack_1d8 = uVar20;
      puVar6 = puStack_90;
      uVar7 = uStack_b0;
      puVar5 = puStack_a8;
      puVar15 = puStack_58;
      uVar13 = uStack_80;
      puVar22 = puStack_60;
      puVar24 = puVar23;
      puVar18 = (ulonglong *)*puStack_58;
      puStack_98 = puVar23;
      if ((ulonglong *)*puStack_58 == (ulonglong *)0x0) {
        puStack_78 = puStack_a8;
        uStack_1b8 = uStack_b0;
        puVar21 = puStack_58;
        puVar23 = puStack_60;
        uVar10 = uStack_80;
        uStack_f8 = uStack_1a8;
        uStack_f0 = uStack_1a0;
        uStack_e8 = uStack_198;
        uStack_e0 = uStack_190;
      }
      else {
        do {
          puVar21 = puVar18;
          uVar1 = (ushort)puVar15[0x59];
          uStack_e0 = uStack_198;
          uStack_d8 = (undefined4)uStack_190;
          uStack_d4 = uStack_190._4_4_;
          uStack_f0 = uStack_1a8;
          uStack_e8 = uStack_1a0;
          uStack_f8 = uVar20;
          if ((byte *)uVar7 != pbStack_50) {
            uStack_80 = uVar13;
            puStack_60 = puVar22;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_1433d98e8,0x35,&UNK_1433d9920);
          }
          puVar18 = (ulonglong *)(ulonglong)uVar1;
          uVar2 = *(ushort *)((longlong)puVar21 + 0x2ca);
          uVar7 = (ulonglong)uVar2;
          if (uVar7 < 0xb) {
            pbVar25 = (byte *)((longlong)puVar18 + 1);
            puVar14 = puVar21 + (longlong)puVar18 * 3 + 1;
            puStack_68 = puVar24;
            if (uVar1 < uVar2) {
              puStack_a8 = puVar5;
              puStack_90 = puVar6;
              puStack_88 = puVar23;
              uStack_70 = uVar10;
              puStack_60 = puVar22;
              puStack_58 = puVar15;
              pub_142e32770(puVar21 + (longlong)pbVar25 * 3 + 1,puVar14,
                            (uVar7 - (longlong)puVar18) * 0x18);
              *puVar14 = uVar13;
              puVar21[(longlong)puVar18 * 3 + 2] = (ulonglong)puStack_60;
              puVar21[(longlong)puVar18 * 3 + 3] = (ulonglong)puStack_a8;
              pub_142e32770(puVar21 + (longlong)pbVar25 * 5 + 0x22,
                            puVar21 + (longlong)puVar18 * 5 + 0x22,
                            (uVar7 - (longlong)puVar18) * 0x28);
              uVar10 = uStack_70;
              puVar23 = puStack_88;
              puVar6 = puVar21 + (longlong)puVar18 * 5 + 0x22;
              *(undefined4 *)puVar6 = (undefined4)uStack_f8;
              *(undefined4 *)((longlong)puVar6 + 4) = uStack_f8._4_4_;
              *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_f0;
              *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_f0._4_4_;
              puVar6 = puVar21 + (longlong)puVar18 * 5 + 0x24;
              *(undefined4 *)puVar6 = (undefined4)uStack_e8;
              *(undefined4 *)((longlong)puVar6 + 4) = uStack_e8._4_4_;
              *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_e0;
              *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_e0._4_4_;
              puVar21[(longlong)puVar18 * 5 + 0x26] = CONCAT44(uStack_d4,uStack_d8);
              pub_142e32770(puVar21 + (longlong)((longlong)puVar18 + 0x5c),
                            puVar21 + (longlong)((longlong)puVar18 + 0x5b));
              puVar6 = puStack_90;
              puVar15 = puStack_58;
            }
            else {
              *puVar14 = uVar13;
              puVar21[(longlong)puVar18 * 3 + 2] = (ulonglong)puVar22;
              puVar21[(longlong)puVar18 * 3 + 3] = (ulonglong)puVar5;
              puVar21[(longlong)puVar18 * 5 + 0x26] = uStack_190;
              puVar21[(longlong)puVar18 * 5 + 0x24] = uStack_1a0;
              (puVar21 + (longlong)puVar18 * 5 + 0x24)[1] = uStack_198;
              puVar21[(longlong)puVar18 * 5 + 0x22] = uVar20;
              (puVar21 + (longlong)puVar18 * 5 + 0x22)[1] = uStack_1a8;
            }
            puVar21[(longlong)((longlong)puVar18 + 0x5b)] = (ulonglong)puVar6;
            *(ushort *)((longlong)puVar21 + 0x2ca) = uVar2 + 1;
            pbVar8 = (byte *)2;
            if ((uint)pbVar25 < (uint)(byte *)(uVar7 + 2)) {
              uVar11 = ((uint)uVar2 - (uint)uVar1) + 1 & 3;
              if (uVar11 != 0) {
                uVar20 = 0;
                do {
                  puVar3 = (undefined8 *)puVar21[(longlong)((longlong)puVar18 + uVar20 + 0x5b)];
                  *puVar3 = puVar21;
                  *(short *)(puVar3 + 0x59) = (short)uVar20 + (short)pbVar25;
                  uVar20 = uVar20 + 1;
                } while (uVar11 != uVar20);
                pbVar25 = pbVar25 + uVar20;
              }
              if (2 < (uint)uVar2 - (uint)uVar1) {
                do {
                  puVar3 = (undefined8 *)puVar21[(longlong)(pbVar25 + 0x5a)];
                  *puVar3 = puVar21;
                  sVar17 = (short)pbVar25;
                  *(short *)(puVar3 + 0x59) = sVar17;
                  puVar3 = (undefined8 *)puVar21[(longlong)(pbVar25 + 0x5b)];
                  *puVar3 = puVar21;
                  *(short *)(puVar3 + 0x59) = sVar17 + 1;
                  puVar3 = (undefined8 *)puVar21[(longlong)(pbVar25 + 0x5c)];
                  *puVar3 = puVar21;
                  *(short *)(puVar3 + 0x59) = sVar17 + 2;
                  puVar3 = (undefined8 *)puVar21[(longlong)(pbVar25 + 0x5d)];
                  *puVar3 = puVar21;
                  *(short *)(puVar3 + 0x59) = sVar17 + 3;
                  pbVar25 = pbVar25 + 4;
                } while (pbVar25 != (byte *)(uVar7 + 2));
                puVar6 = &uStack_b0;
                puVar21 = puVar15;
                goto LAB_141da7dd0;
              }
            }
            puVar6 = &uStack_b0;
            puVar21 = puVar15;
          }
          else {
            if (uVar1 < 5) {
              uStack_a0 = 4;
              uVar12 = 0;
            }
            else if (uVar1 == 5) {
              uVar12 = 0;
              uStack_a0 = 5;
            }
            else {
              uVar16 = (undefined7)((ulonglong)pbStack_50 >> 8);
              if (uVar1 == 6) {
                uVar12 = (undefined4)CONCAT71(uVar16,1);
                uStack_a0 = 5;
                puVar18 = (ulonglong *)0x0;
              }
              else {
                puVar18 = (ulonglong *)((longlong)puVar18 + -7);
                uVar12 = (undefined4)CONCAT71(uVar16,1);
                uStack_a0 = 6;
              }
            }
            uStack_1b0 = uVar7;
            puStack_a8 = puVar5;
            puStack_90 = puVar6;
            uStack_80 = uVar13;
            puStack_60 = puVar22;
            pdb_14007ee60();
            puVar6 = (ulonglong *)pub_1406abab0(0x330,8);
            if (puVar6 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x330);
            }
            *puVar6 = 0;
            ((byte *)((longlong)puVar6 + 0x2ca))[0] = 0;
            ((byte *)((longlong)puVar6 + 0x2ca))[1] = 0;
            uVar20 = ~uStack_a0 + (ulonglong)*(ushort *)((longlong)puVar21 + 0x2ca);
            *(short *)((longlong)puVar6 + 0x2ca) = (short)uVar20;
            uVar10 = puVar21[uStack_a0 * 3 + 1];
            puVar15 = (ulonglong *)puVar21[uStack_a0 * 3 + 2];
            puVar23 = (ulonglong *)puVar21[uStack_a0 * 3 + 3];
            uStack_168 = puVar21[uStack_a0 * 5 + 0x26];
            puVar5 = puVar21 + uStack_a0 * 5 + 0x22;
            uStack_188 = (undefined4)*puVar5;
            uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_180 = (undefined4)puVar5[1];
            uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
            puVar5 = puVar21 + uStack_a0 * 5 + 0x24;
            uStack_178 = (undefined4)*puVar5;
            uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_170 = (undefined4)puVar5[1];
            uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_cc = uVar12;
            puStack_88 = puVar15;
            uStack_70 = uVar10;
            puStack_68 = puVar6;
            puStack_58 = puVar18;
            if (0xb < uVar20) {
              pdb_142dc8420(0,uVar20,0xb,&UNK_1433d98b8);
              goto LAB_141da80d0;
            }
            puStack_78 = (ulonglong *)(uStack_a0 + 1);
            pub_142e32760(puVar6 + 1,puVar21 + (longlong)puStack_78 * 3 + 1,uVar20 * 0x18);
            pub_142e32760(puVar6 + 0x22,puVar21 + (longlong)puStack_78 * 5 + 0x22,uVar20 * 0x28);
            *(short *)((longlong)puVar21 + 0x2ca) = (short)uStack_a0;
            uStack_120 = uStack_168;
            uStack_130 = uStack_178;
            uStack_12c = uStack_174;
            uStack_128 = uStack_170;
            uStack_124 = uStack_16c;
            uStack_140 = CONCAT44(uStack_184,uStack_188);
            uStack_138 = CONCAT44(uStack_17c,uStack_180);
            uVar20 = (ulonglong)*(ushort *)((longlong)puVar6 + 0x2ca);
            uStack_158 = uVar10;
            puStack_150 = puVar15;
            puStack_148 = puVar23;
            puStack_78 = puVar23;
            if (0xb < uVar20) {
              pdb_142dc8420(0,uVar20 + 1,0xc,&UNK_1433d98d0);
              goto LAB_141da80d0;
            }
            iVar19 = (int)(uVar20 + 1);
            if ((uint)(ushort)uStack_1b0 - (int)uStack_a0 != iVar19) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_1433d9878,0x28,&UNK_1433d98a0);
            }
            pbStack_50 = (byte *)((longlong)pbStack_50 + 1);
            pub_142e32760(puVar6 + 0x5a,puVar21 + uStack_a0 + 0x5b,iVar19 << 3);
            puVar5 = puStack_58;
            uVar10 = 0;
            do {
              uVar7 = uVar10 + (uVar10 < uVar20);
              puVar3 = (undefined8 *)puVar6[uVar10 + 0x5a];
              *puVar3 = puVar6;
              *(short *)(puVar3 + 0x59) = (short)uVar10;
              if (uVar20 <= uVar10) break;
              uVar10 = uVar7;
            } while (uVar7 <= uVar20);
            uStack_188 = (undefined4)uStack_138;
            uStack_184 = uStack_138._4_4_;
            uStack_180 = uStack_130;
            uStack_17c = uStack_12c;
            uStack_178 = uStack_128;
            uStack_174 = uStack_124;
            uStack_170 = (undefined4)uStack_120;
            uStack_16c = uStack_120._4_4_;
            if ((char)uStack_cc == '\0') {
              puVar6 = puVar21;
            }
            uVar1 = *(ushort *)((longlong)puVar6 + 0x2ca);
            puVar23 = (ulonglong *)(ulonglong)uVar1;
            pbVar8 = (byte *)((longlong)puStack_58 + 1);
            puVar15 = puVar6 + (longlong)puStack_58 * 3 + 1;
            lVar9 = (longlong)puVar23 - (longlong)puStack_58;
            if (puVar23 < puStack_58 || lVar9 == 0) {
              *puVar15 = uStack_80;
              puVar6[(longlong)puStack_58 * 3 + 2] = (ulonglong)puStack_60;
              puVar6[(longlong)puStack_58 * 3 + 3] = (ulonglong)puStack_a8;
              puVar6[(longlong)puStack_58 * 5 + 0x26] = CONCAT44(uStack_d4,uStack_d8);
              puVar6[(longlong)puStack_58 * 5 + 0x24] = uStack_e8;
              (puVar6 + (longlong)puStack_58 * 5 + 0x24)[1] = uStack_e0;
              puVar6[(longlong)puStack_58 * 5 + 0x22] = uStack_f8;
              (puVar6 + (longlong)puStack_58 * 5 + 0x22)[1] = uStack_f0;
              puVar15 = puStack_58;
              uStack_b0 = uStack_140;
            }
            else {
              uVar10 = (ulonglong)(((uint)uVar1 - (int)puStack_58) * 8);
              uStack_a0 = uStack_140;
              pub_142e32770(puVar6 + (longlong)pbVar8 * 3 + 1,puVar15,uVar10 * 3);
              puVar24 = puStack_58;
              *puVar15 = uStack_80;
              puVar6[(longlong)puVar5 * 3 + 2] = (ulonglong)puStack_60;
              puVar6[(longlong)puVar5 * 3 + 3] = (ulonglong)puStack_a8;
              pub_142e32770(puVar6 + (longlong)pbVar8 * 5 + 0x22,
                            puVar6 + (longlong)puStack_58 * 5 + 0x22,uVar10 * 5);
              puVar15 = puStack_58;
              puVar22 = puVar6 + (longlong)puVar24 * 5 + 0x22;
              *(undefined4 *)puVar22 = (undefined4)uStack_f8;
              *(undefined4 *)((longlong)puVar22 + 4) = uStack_f8._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_f0;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_f0._4_4_;
              puVar22 = puVar6 + (longlong)puVar24 * 5 + 0x24;
              *(undefined4 *)puVar22 = (undefined4)uStack_e8;
              *(undefined4 *)((longlong)puVar22 + 4) = uStack_e8._4_4_;
              *(undefined4 *)(puVar22 + 1) = (undefined4)uStack_e0;
              *(undefined4 *)((longlong)puVar22 + 0xc) = uStack_e0._4_4_;
              puVar6[(longlong)puVar24 * 5 + 0x26] = CONCAT44(uStack_d4,uStack_d8);
              pub_142e32770(puVar6 + (longlong)((longlong)puStack_58 + 0x5c),
                            puVar6 + (longlong)((longlong)puVar5 + 0x5b),uVar10);
              uStack_b0 = uStack_a0;
            }
            puVar6[(longlong)((longlong)puVar15 + 0x5b)] = (ulonglong)puStack_90;
            *(ushort *)((longlong)puVar6 + 0x2ca) = uVar1 + 1;
            if ((uint)pbVar8 < (uint)(byte *)((longlong)puVar23 + 2)) {
              uVar11 = ((uint)uVar1 - (int)puVar15) + 1 & 3;
              if (uVar11 != 0) {
                uVar10 = 0;
                do {
                  puVar3 = (undefined8 *)puVar6[(longlong)((longlong)puVar15 + uVar10 + 0x5b)];
                  *puVar3 = puVar6;
                  *(short *)(puVar3 + 0x59) = (short)pbVar8 + (short)uVar10;
                  uVar10 = uVar10 + 1;
                } while (uVar11 != uVar10);
                pbVar8 = pbVar8 + uVar10;
              }
              if (2 < (uint)lVar9) {
                do {
                  puVar3 = (undefined8 *)puVar6[(longlong)(pbVar8 + 0x5a)];
                  *puVar3 = puVar6;
                  sVar17 = (short)pbVar8;
                  *(short *)(puVar3 + 0x59) = sVar17;
                  puVar3 = (undefined8 *)puVar6[(longlong)(pbVar8 + 0x5b)];
                  *puVar3 = puVar6;
                  *(short *)(puVar3 + 0x59) = sVar17 + 1;
                  puVar3 = (undefined8 *)puVar6[(longlong)(pbVar8 + 0x5c)];
                  *puVar3 = puVar6;
                  *(short *)(puVar3 + 0x59) = sVar17 + 2;
                  puVar3 = (undefined8 *)puVar6[(longlong)(pbVar8 + 0x5d)];
                  *puVar3 = puVar6;
                  *(short *)(puVar3 + 0x59) = sVar17 + 3;
                  pbVar8 = pbVar8 + 4;
                } while (pbVar8 != (byte *)((longlong)puVar23 + 2));
              }
            }
            uStack_1d8 = CONCAT44(uStack_184,uStack_188);
            uStack_1d0 = CONCAT44(uStack_17c,uStack_180);
            uStack_1c8 = CONCAT44(uStack_174,uStack_178);
            uStack_1c0 = CONCAT44(uStack_16c,uStack_170);
            puVar6 = &uStack_1b8;
            pbVar8 = pbStack_50;
            puVar23 = puStack_88;
            uVar10 = uStack_70;
          }
LAB_141da7dd0:
          *puVar6 = (ulonglong)pbVar8;
          if (uStack_b0 == 2) goto LAB_141da7f45;
          uStack_1a8 = uStack_1d8;
          uStack_1a0 = uStack_1d0;
          uStack_198 = uStack_1c8;
          uStack_190 = uStack_1c0;
          uVar20 = uStack_b0;
          puVar6 = puStack_68;
          uVar7 = uStack_1b8;
          puVar5 = puStack_78;
          puVar15 = puVar21;
          uVar13 = uVar10;
          puVar22 = puVar23;
          puVar24 = puStack_68;
          puVar18 = (ulonglong *)*puVar21;
        } while ((ulonglong *)*puVar21 != (ulonglong *)0x0);
      }
      puStack_148 = puStack_78;
      uStack_128 = (undefined4)uStack_198;
      uStack_124 = uStack_198._4_4_;
      uStack_120 = uStack_190;
      uStack_138 = uStack_1a8;
      uStack_130 = (undefined4)uStack_1a0;
      uStack_12c = uStack_1a0._4_4_;
      param_5 = (longlong *)*param_5;
      puVar3 = (undefined8 *)*param_5;
      uStack_158 = uVar10;
      puStack_150 = puVar23;
      uStack_140 = uVar20;
      puStack_118 = puVar21;
      uStack_110 = (ulonglong)pbStack_50;
      puStack_108 = puVar6;
      uStack_100 = uStack_1b8;
      uStack_70 = uVar10;
      if (puVar3 == (undefined8 *)0x0) {
        puStack_88 = puVar23;
        pbStack_50 = (byte *)puVar3;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433d97b0);
      }
      uVar10 = param_5[1];
      pdb_14007ee60();
      pbVar8 = pub_1406abab0(0x330,8);
      if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x330);
      }
      pbVar8[0] = 0;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      pbVar8[4] = 0;
      pbVar8[5] = 0;
      pbVar8[6] = 0;
      pbVar8[7] = 0;
      pbVar8[0x2ca] = 0;
      pbVar8[0x2cb] = 0;
      *(undefined8 **)(pbVar8 + 0x2d0) = puVar3;
      lVar9 = uVar10 + 1;
      if (lVar9 == 0) {
        pbStack_50 = pbVar8;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1433d9860);
      }
      *puVar3 = pbVar8;
      *(undefined2 *)(puVar3 + 0x59) = 0;
      *param_5 = (longlong)pbVar8;
      param_5[1] = lVar9;
      if (uStack_1b8 != uVar10) {
        puStack_88 = puVar23;
        pbStack_50 = (byte *)puVar3;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_1433d9800,0x30,&UNK_1433d9830);
      }
      pbVar8[0x2ca] = 1;
      pbVar8[0x2cb] = 0;
      *(ulonglong *)(pbVar8 + 8) = uStack_70;
      *(ulonglong **)(pbVar8 + 0x10) = puVar23;
      *(ulonglong **)(pbVar8 + 0x18) = puStack_78;
      *(ulonglong *)(pbVar8 + 0x110) = uStack_140;
      *(ulonglong *)(pbVar8 + 0x118) = uStack_138;
      *(ulonglong *)(pbVar8 + 0x120) = CONCAT44(uStack_12c,uStack_130);
      *(ulonglong *)(pbVar8 + 0x128) = CONCAT44(uStack_124,uStack_128);
      *(ulonglong *)(pbVar8 + 0x130) = uStack_120;
      *(ulonglong **)(pbVar8 + 0x2d8) = puVar6;
      *puVar6 = (ulonglong)pbVar8;
      *(undefined2 *)(puVar6 + 0x59) = 1;
LAB_141da7f45:
      *puStack_c8 = puStack_c0;
      puStack_c8[1] = uStack_b8;
      puStack_c8[2] = puStack_98;
      return;
    }
  }
  *puStack_c8 = puStack_c0;
  puStack_c8[1] = uStack_b8;
  puStack_c8[2] = puVar23;
  return;
}

