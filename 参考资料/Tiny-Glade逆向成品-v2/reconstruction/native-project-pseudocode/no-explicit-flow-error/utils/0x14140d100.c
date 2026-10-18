// VA 0x14140d100, PDB extent 839 bytes
// utils::threshold_range::threshold_range<system_wall_constructor::construct_fences::process_segment::emit_fences::closure_env$0<system_wall_constructor::construct_fences::construct_fences::closure_env$0>,system_wall_constructor::construct_fences::process_segment::emit_fences::closure_env$1<system_wall_constructor::construct_fences::construct_fences::closure_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/threshold_range.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::threshold_range::threshold_range<system_wall_constructor::construct_fences::process_segment::emit_fences::closure_env$0<system_wall_constructor::construct_fences::construct_fences::closure_env$0>,system_wall_constructor::construct_fences::process_segment::emit_fences::closure_env$1<system_wall_constructor::construct_fences::construct_fences::closure_env$0>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/threshold_range.rs
   Extent: 839 */

void pdb_14140d100(longlong param_1,ulonglong param_2,float param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  code *pcVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar4;
  
  fVar21 = _UNK_143021a7c;
  fVar20 = _UNK_143021a78;
  fVar19 = _UNK_143021a74;
  fVar18 = _DAT_143021a70;
  if (param_2 != 0) {
    lVar6 = param_4[2];
    uVar7 = param_4[4];
    lVar8 = param_4[3];
    pcVar9 = (char *)param_4[5];
    uVar10 = param_4[6];
    uVar11 = param_4[7];
    plVar12 = (longlong *)*param_4;
    plVar13 = (longlong *)param_4[1];
    plVar14 = (longlong *)param_4[8];
    uVar26 = 0;
    do {
      while( true ) {
        uVar25 = uVar26 + 1;
        if (uVar26 + 1 < param_2) {
          uVar25 = param_2;
        }
        uVar1 = uVar25 - 1;
        uVar27 = uVar26;
        if (*(float *)(param_1 + uVar26 * 4) <= param_3) break;
        do {
          if (uVar1 == uVar26) {
            return;
          }
          lVar23 = uVar26 * 4;
          uVar26 = uVar26 + 1;
        } while (param_3 < *(float *)(param_1 + 4 + lVar23));
        if (param_2 <= uVar26) {
          return;
        }
      }
      do {
        uVar24 = uVar1;
        uVar28 = uVar25;
        if (uVar1 == uVar27) break;
        uVar28 = uVar27 + 1;
        lVar23 = uVar27 * 4;
        uVar24 = uVar27;
        uVar27 = uVar28;
      } while (*(float *)(param_1 + 4 + lVar23) <= param_3);
      if ((uVar7 <= uVar24) || (uVar28 < uVar26)) {
        pdb_142dc8420(uVar26,uVar28,uVar7,&UNK_143307c80);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uVar5 = *(undefined4 *)(lVar6 + 0x274);
      uVar2 = *(undefined4 *)(lVar6 + 0x288);
      if (*pcVar9 == '\0') {
        lVar23 = *(longlong *)(lVar6 + 0x10);
        fVar33 = fVar18;
        fVar35 = fVar19;
        fVar37 = fVar20;
        fVar39 = fVar21;
        if (lVar23 != 0) {
          puVar15 = *(undefined8 **)(lVar6 + 8);
          uVar25 = lVar23 * 8 - 8;
          puVar22 = puVar15;
          if ((uVar25 & 8) == 0) {
            puVar22 = puVar15 + 1;
            fVar33 = (float)*puVar15;
            fVar35 = (float)((ulonglong)*puVar15 >> 0x20);
            uVar29 = -(uint)(fVar18 < fVar33);
            uVar30 = -(uint)(fVar19 < fVar35);
            fVar37 = (float)*puVar15;
            fVar39 = (float)((ulonglong)*puVar15 >> 0x20);
            uVar31 = -(uint)(fVar37 < fVar20);
            uVar32 = -(uint)(fVar39 < fVar21);
            fVar33 = (float)(~uVar29 & (uint)fVar33 | (uint)fVar18 & uVar29);
            fVar35 = (float)(~uVar30 & (uint)fVar35 | (uint)fVar19 & uVar30);
            fVar37 = (float)(~uVar31 & (uint)fVar37 | (uint)fVar20 & uVar31);
            fVar39 = (float)(~uVar32 & (uint)fVar39 | (uint)fVar21 & uVar32);
          }
          if (uVar25 != 0) {
            do {
              fVar34 = (float)*puVar22;
              fVar36 = (float)((ulonglong)*puVar22 >> 0x20);
              uVar29 = -(uint)(fVar33 < fVar34);
              uVar30 = -(uint)(fVar35 < fVar36);
              fVar38 = (float)*puVar22;
              fVar40 = (float)((ulonglong)*puVar22 >> 0x20);
              uVar31 = -(uint)(fVar38 < fVar37);
              uVar32 = -(uint)(fVar40 < fVar39);
              fVar34 = (float)(~uVar29 & (uint)fVar34 | (uint)fVar33 & uVar29);
              fVar36 = (float)(~uVar30 & (uint)fVar36 | (uint)fVar35 & uVar30);
              fVar38 = (float)(~uVar31 & (uint)fVar38 | (uint)fVar37 & uVar31);
              fVar40 = (float)(~uVar32 & (uint)fVar40 | (uint)fVar39 & uVar32);
              uVar3 = puVar22[1];
              uVar4 = puVar22[1];
              fVar33 = (float)uVar3;
              fVar35 = (float)((ulonglong)uVar3 >> 0x20);
              uVar29 = -(uint)(fVar34 < fVar33);
              uVar30 = -(uint)(fVar36 < fVar35);
              fVar37 = (float)uVar4;
              fVar39 = (float)((ulonglong)uVar4 >> 0x20);
              uVar31 = -(uint)(fVar37 < fVar38);
              uVar32 = -(uint)(fVar39 < fVar40);
              fVar33 = (float)(~uVar29 & (uint)fVar33 | (uint)fVar34 & uVar29);
              fVar35 = (float)(~uVar30 & (uint)fVar35 | (uint)fVar36 & uVar30);
              fVar37 = (float)(~uVar31 & (uint)fVar37 | (uint)fVar38 & uVar31);
              fVar39 = (float)(~uVar32 & (uint)fVar39 | (uint)fVar40 & uVar32);
              puVar22 = puVar22 + 2;
            } while (puVar22 != puVar15 + lVar23);
          }
        }
        pcVar9[0] = '\x01';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        *(float *)(pcVar9 + 4) = fVar33;
        *(float *)(pcVar9 + 8) = fVar35;
        *(float *)(pcVar9 + 0xc) = fVar37;
        *(float *)(pcVar9 + 0x10) = fVar39;
      }
      lVar23 = pdb_140315970(uVar10);
      lVar23 = pdb_141467c30(uVar5,uVar2,lVar8 + uVar26 * 0xc,uVar28 - uVar26,pcVar9 + 4,
                             lVar23 + uVar28 + uVar26,uVar26,uVar28,*(undefined8 *)(lVar6 + 0x98),
                             uVar11);
      *plVar12 = *plVar12 + lVar23;
      lVar23 = pdb_140315970(uVar10);
      *plVar13 = *plVar13 + lVar23 + uVar28 + uVar26;
      lVar23 = plVar14[2];
      if (lVar23 == *plVar14) {
        pdb_142d7e980(plVar14);
      }
      lVar16 = plVar14[1];
      *(ulonglong *)(lVar16 + lVar23 * 0x10) = uVar26;
      *(ulonglong *)(lVar16 + 8 + lVar23 * 0x10) = uVar28;
      plVar14[2] = lVar23 + 1;
      uVar26 = uVar28;
    } while (uVar28 < param_2);
  }
  return;
}

