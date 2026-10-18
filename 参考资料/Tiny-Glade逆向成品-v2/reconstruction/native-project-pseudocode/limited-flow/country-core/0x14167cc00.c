// VA 0x14167cc00, PDB extent 3088 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::ui_settings::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::resources::ui_settings::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 3088 */

longlong *
pdb_14167cc00(longlong *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte *arg0;
  code *pcVar5;
  code *pcVar6;
  undefined1 uVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  byte bVar14;
  undefined8 *puVar15;
  code *pcVar16;
  uint uVar17;
  undefined1 uVar18;
  code *pcVar19;
  byte bVar20;
  ulonglong uVar21;
  byte bVar22;
  uint uVar23;
  undefined1 unaff_R13B;
  undefined1 unaff_R14B;
  undefined1 unaff_R15B;
  bool bVar24;
  undefined4 uVar25;
  undefined4 unaff_XMM6_Da;
  undefined4 uVar26;
  undefined4 unaff_XMM7_Da;
  longlong in_stack_000000e0;
  undefined8 in_stack_000000f0;
  longlong in_stack_000000f8;
  longlong in_stack_00000100;
  byte *in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined5 in_stack_00000190;
  undefined5 in_stack_00000198;
  char cStack00000000000001b8;
  undefined1 uStack00000000000001b9;
  code *in_stack_000001c0;
  char cStack0000000000000208;
  char cStack0000000000000209;
  code *in_stack_00000210;
  byte in_stack_000002e4;
  byte in_stack_000002e8;
  byte *in_stack_00000300;
  char in_stack_0000030f;
  longlong in_stack_00000310;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  int iStack_c4;
  int iStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined1 uStack_b1;
  code *pcStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  byte bStack_9b;
  char cStack_9a;
  byte bStack_99;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar9 = *(ulonglong *)(param_2 + 0x28);
  if (uVar9 < *(ulonglong *)(param_2 + 0x20)) {
    pcVar19 = (code *)0x100002600;
    do {
      uVar9 = uVar9 + 1;
      bVar14 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar9);
      if ((0x20 < (ulonglong)bVar14) || ((0x100002600U >> ((ulonglong)bVar14 & 0x3f) & 1) == 0)) {
        if (bVar14 == 0x5b) {
          pcVar13 = param_2 + 0x48;
          *pcVar13 = (code)((char)*pcVar13 - 1);
          if (*pcVar13 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar9;
            pcStack_90 = (code *)CONCAT71(pcStack_90._1_7_,1);
            uVar17 = (uint)&uStack_98;
            uStack_98 = param_2;
            uVar12 = pdb_140407e70(&uStack_88);
            if ((char)uStack_88 == '\x01') {
LAB_14167d4a0:
              uVar18 = SUB81(pcVar19,0);
              uVar23 = (uint)CONCAT71((int7)((ulonglong)uVar12 >> 8),2);
              pcVar13 = uStack_80;
            }
            else {
              uVar26 = _DAT_142e36f28;
              if (uStack_88._1_1_ == '\x01') {
                pcVar13 = uStack_98;
                uVar12 = pdb_1416546a0(&uStack_88);
                uVar17 = (uint)pcVar13;
                if ((int)uStack_88 == 1) goto LAB_14167d4a0;
                uVar26 = uStack_88._4_4_;
              }
              uVar17 = (uint)&uStack_98;
              uVar12 = pdb_140407e70(&uStack_88);
              if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
              if (uStack_88._1_1_ == '\x01') {
                pcVar13 = uStack_98;
                uVar12 = pdb_141c6e390(&uStack_88);
                uVar17 = (uint)pcVar13;
                if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
                pcVar19 = (code *)((ulonglong)uStack_88 >> 8 & 0xff);
              }
              else {
                pcVar19 = (code *)0x0;
              }
              uVar18 = SUB81(pcVar19,0);
              uVar17 = (uint)&uStack_98;
              uVar12 = pdb_140407e70(&uStack_88);
              if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
              if (uStack_88._1_1_ == '\x01') {
                pcVar13 = uStack_98;
                uVar12 = pdb_14165b920(&uStack_88);
                uVar17 = (uint)pcVar13;
                if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
                unaff_R14B = (undefined1)((ulonglong)uStack_88 >> 8);
              }
              else {
                unaff_R14B = 0;
              }
              uVar17 = (uint)&uStack_98;
              uVar12 = pdb_140407e70(&uStack_88);
              if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
              unaff_R15B = 1;
              uVar7 = 1;
              if (uStack_88._1_1_ == '\x01') {
                pcVar13 = uStack_98;
                uVar12 = pdb_14165b920(&uStack_88);
                uVar17 = (uint)pcVar13;
                if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
                uVar7 = (char)((ulonglong)uStack_88 >> 8);
              }
              unaff_R15B = uVar7;
              uVar17 = (uint)&uStack_98;
              uVar12 = pdb_140407e70(&uStack_88);
              if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
              unaff_R13B = 1;
              if (uStack_88._1_1_ == '\x01') {
                pcVar13 = uStack_98;
                uVar12 = pdb_14165b920(&uStack_88);
                uVar17 = (uint)pcVar13;
                if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
                unaff_R13B = uStack_88._1_1_;
              }
              uVar17 = (uint)&uStack_98;
              uVar12 = pdb_140407e70(&uStack_88);
              if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
              if (uStack_88._1_1_ == '\x01') {
                pcVar13 = uStack_98;
                uVar12 = pdb_14165b920(&uStack_88);
                uVar17 = (uint)pcVar13;
                if ((char)uStack_88 == '\x01') goto LAB_14167d4a0;
                uVar23 = (uint)uStack_88._1_1_;
              }
              else {
                uVar23 = 0;
              }
              uVar17 = (uint)&uStack_98;
              uVar12 = pdb_14164bd50(&uStack_88);
              if ((int)uStack_88 == 1) goto LAB_14167d4a0;
              uVar25 = _DAT_142f57bc4;
              if (uStack_88._4_1_ != '\0') {
                uVar25 = (uint)uStack_80;
              }
              uStack_d8 = (code *)CONCAT44(uVar25,uVar26);
              pcVar13 = uStack_d8;
            }
            pcVar19 = uStack_80;
            param_2[0x48] = (code)((char)param_2[0x48] + 1);
            uStack_80._0_2_ = CONCAT11(unaff_R14B,uVar18);
            uStack_80._0_3_ = CONCAT12(unaff_R15B,(undefined2)uStack_80);
            uStack_80._0_4_ = CONCAT13(unaff_R13B,(undefined3)uStack_80);
            uStack_80._5_3_ = SUB83(pcVar19,5);
            uStack_80._0_5_ = CONCAT14((char)uVar23,(uint)uStack_80);
            uStack_a0 = uVar23;
            uStack_88 = pcVar13;
            pcVar19 = (code *)pdb_140404e50(param_2);
            if ((byte)uStack_a0 != '\x02') {
              bVar24 = pcVar19 == (code *)0x0;
              uVar17 = (uint)uStack_80;
              if (!bVar24) {
                pcVar13 = pcVar19;
              }
              goto LAB_14167d51b;
            }
            cVar8 = '\x02';
            if (pcVar19 == (code *)0x0) goto LAB_14167d546;
            lVar10 = *(longlong *)pcVar19;
            pcStack_b0 = pcVar19;
            if (lVar10 != 1) goto LAB_14167d4e7;
            pdb_1404b38e0(pcVar19 + 8);
            goto LAB_14167d532;
          }
        }
        else {
          if (bVar14 != 0x7b) {
            pcVar13 = (code *)pdb_142de8b10(param_2,&uStack_b1,&UNK_143323f00);
            goto LAB_14167d5d2;
          }
          pcVar13 = param_2 + 0x48;
          *pcVar13 = (code)((char)*pcVar13 - 1);
          if (*pcVar13 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar9;
            uStack_d0 = 1;
            bVar14 = (byte)&uStack_88;
            uVar17 = (uint)&uStack_d8;
            uStack_d8 = param_2;
            pcVar11 = (code *)pdb_140407a40();
            bVar22 = (byte)param_4;
            pcVar13 = uStack_80;
            pcVar6 = uStack_a8;
            if ((char)uStack_88 != '\0') goto LAB_14167ccda;
            iStack_c4 = 0;
            pcStack_b0 = (code *)CONCAT71(pcStack_b0._1_7_,2);
            cStack_9a = '\x04';
            uStack_b8 = 0;
            bStack_99 = 2;
            bStack_9b = 2;
            uStack_a0 = CONCAT31(uStack_a0._1_3_,2);
            uStack_bc = 0;
            iStack_c0 = 0;
            goto LAB_14167ce06;
          }
        }
        uStack_88 = (code *)0x18;
        goto LAB_14167cc80;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar9;
    } while (uVar9 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_88 = (code *)0x5;
LAB_14167cc80:
  lVar10 = pdb_142d84ef0(param_2,&uStack_88);
  goto LAB_14167cc8c;
LAB_14167ce06:
  pcVar16 = uStack_d8;
  if (uStack_88._1_1_ == '\0') {
    if ((uStack_b8 & 1) == 0) {
      unaff_XMM6_Da = _DAT_142e36f28;
    }
    cVar8 = cStack_9a;
    if (cStack_9a == '\x04') {
      cVar8 = '\0';
    }
    bVar14 = bStack_99 & 1;
    if (bStack_99 == 2) {
      bVar14 = 1;
    }
    uVar17 = (uint)(bStack_9b & 1);
    if (bStack_9b == 2) {
      uVar17 = 1;
    }
    if ((uStack_bc & 1) == 0) {
      unaff_XMM7_Da = _DAT_142f57bc4;
    }
    bVar22 = (byte)pcStack_b0 & 1;
    bVar20 = (byte)uStack_a0 & 1;
    uStack_a8 = (code *)CONCAT44(unaff_XMM7_Da,unaff_XMM6_Da);
    pcVar13 = uStack_a8;
    goto LAB_14167ccdd;
  }
  pcVar1 = uStack_d8 + 0x18;
  *(longlong *)(uStack_d8 + 0x28) = *(longlong *)(uStack_d8 + 0x28) + 1;
  *(longlong *)(uStack_d8 + 0x10) = 0;
  puVar15 = &uStack_88;
  pcVar13 = pcVar1;
  pcVar11 = (code *)pdb_140de3310(&uStack_88,pcVar1,uStack_d8);
  pcVar5 = uStack_80;
  bVar22 = (byte)param_4;
  uVar17 = (uint)pcVar13;
  bVar14 = (byte)puVar15;
  pcVar13 = uStack_80;
  pcVar6 = uStack_a8;
  if ((int)uStack_88 == 2) goto LAB_14167ccda;
  bVar14 = (byte)&uStack_98;
  pcVar11 = (code *)pdb_141c6f170();
  bVar22 = (byte)param_4;
  uVar17 = (uint)pcVar13;
  pcVar13 = pcStack_90;
  pcVar6 = uStack_a8;
  if ((char)uStack_98 == '\x01') goto LAB_14167ccda;
  uVar9 = (ulonglong)uStack_98 >> 8 & 0xff;
  pcVar13 = (code *)(&UNK_1433245c0 + *(int *)(&UNK_1433245c0 + uVar9 * 4));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar9) {
  case 0:
    if (iStack_c4 == 0) {
      uVar9 = *(ulonglong *)(pcVar16 + 0x28);
      if (*(ulonglong *)(pcVar16 + 0x20) <= uVar9) break;
      lVar10 = *(longlong *)pcVar1;
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar21 = (ulonglong)*(byte *)(lVar10 + -1 + uVar9);
        if (0x3a < uVar21) goto code_r0x00014167d587;
        if ((0x100002600U >> (uVar21 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar16 + 0x28) = uVar9;
        if (uVar9 == *(ulonglong *)(pcVar16 + 0x20)) goto code_r0x00014167d44a;
      }
      if (uVar21 != 0x3a) {
code_r0x00014167d587:
        uStack_88 = (code *)0x6;
        goto code_r0x00014167d452;
      }
      *(ulonglong *)(pcVar16 + 0x28) = uVar9;
      bVar14 = (byte)&uStack_98;
      pcVar11 = (code *)pdb_1416546a0();
      bVar22 = (byte)param_4;
      uVar17 = (uint)pcVar16;
      pcVar13 = pcStack_90;
      pcVar6 = pcStack_90;
      if ((char)uStack_98 == '\0') {
        uStack_b8 = (uint)CONCAT71((int7)((ulonglong)pcVar11 >> 8),1);
        iStack_c4 = 1;
        unaff_XMM6_Da = uStack_98._4_4_;
        goto code_r0x00014167cdf0;
      }
    }
    else {
      uStack_98 = (code *)&UNK_143322768;
      pcStack_90 = (code *)0xe;
code_r0x00014167d667:
      uStack_88 = (code *)&uStack_98;
      uStack_80 = pdb_1402ed400;
      bVar14 = 0x61;
      uVar17 = (uint)&uStack_88;
      pcVar11 = (code *)pdb_142d872f0();
      pcVar13 = pcVar11;
      pcVar6 = pcVar11;
    }
    goto LAB_14167ccda;
  case 1:
    if (cStack_9a != '\x04') {
      uStack_98 = (code *)&UNK_143322776;
code_r0x00014167d646:
      pcStack_90 = (code *)0x11;
      goto code_r0x00014167d667;
    }
    uVar9 = *(ulonglong *)(pcVar16 + 0x28);
    if (*(ulonglong *)(pcVar16 + 0x20) <= uVar9) break;
    lVar10 = *(longlong *)pcVar1;
    while( true ) {
      uVar9 = uVar9 + 1;
      uVar21 = (ulonglong)*(byte *)(lVar10 + -1 + uVar9);
      if (0x3a < uVar21) goto code_r0x00014167d587;
      if ((0x100002600U >> (uVar21 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(pcVar16 + 0x28) = uVar9;
      if (uVar9 == *(ulonglong *)(pcVar16 + 0x20)) goto code_r0x00014167d44a;
    }
    if (uVar21 != 0x3a) goto code_r0x00014167d587;
    *(ulonglong *)(pcVar16 + 0x28) = uVar9;
    bVar14 = (byte)&uStack_98;
    pcVar11 = (code *)pdb_141c6e390();
    bVar22 = (byte)param_4;
    uVar17 = (uint)pcVar16;
    pcVar13 = pcStack_90;
    pcVar6 = pcStack_90;
    if ((char)uStack_98 != '\0') goto LAB_14167ccda;
    cStack_9a = uStack_98._1_1_;
code_r0x00014167cdf0:
    uVar17 = (uint)&uStack_d8;
    puVar15 = &uStack_88;
    pcVar11 = (code *)pdb_140407a40();
    bVar22 = (byte)param_4;
    bVar14 = (byte)puVar15;
    pcVar13 = uStack_80;
    pcVar6 = uStack_a8;
    if ((char)uStack_88 != '\0') goto LAB_14167ccda;
    goto LAB_14167ce06;
  case 2:
    if ((byte)pcStack_b0 != '\x02') {
      uStack_98 = (code *)&UNK_143322787;
      goto code_r0x00014167d646;
    }
    uVar9 = *(ulonglong *)(pcVar16 + 0x28);
    if (uVar9 < *(ulonglong *)(pcVar16 + 0x20)) {
      lVar10 = *(longlong *)pcVar1;
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar21 = (ulonglong)*(byte *)(lVar10 + -1 + uVar9);
        if (0x3a < uVar21) goto code_r0x00014167d587;
        if ((0x100002600U >> (uVar21 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar16 + 0x28) = uVar9;
        if (uVar9 == *(ulonglong *)(pcVar16 + 0x20)) goto code_r0x00014167d44a;
      }
      if (uVar21 != 0x3a) goto code_r0x00014167d587;
      *(ulonglong *)(pcVar16 + 0x28) = uVar9;
      bVar14 = (byte)&uStack_98;
      pcVar11 = (code *)pdb_14165b920();
      bVar22 = (byte)param_4;
      uVar17 = (uint)pcVar16;
      pcVar13 = pcStack_90;
      pcVar6 = pcStack_90;
      if ((char)uStack_98 == '\0') {
        pcStack_b0 = (code *)CONCAT71(pcStack_b0._1_7_,uStack_98._1_1_);
        goto code_r0x00014167cdf0;
      }
      goto LAB_14167ccda;
    }
    break;
  case 3:
    if (bStack_99 != 2) {
      uStack_98 = (code *)&UNK_143322798;
      pcStack_90 = (code *)0x13;
      goto code_r0x00014167d667;
    }
    uVar9 = *(ulonglong *)(pcVar16 + 0x28);
    if (uVar9 < *(ulonglong *)(pcVar16 + 0x20)) {
      lVar10 = *(longlong *)pcVar1;
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar21 = (ulonglong)*(byte *)(lVar10 + -1 + uVar9);
        if (0x3a < uVar21) goto code_r0x00014167d587;
        if ((0x100002600U >> (uVar21 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar16 + 0x28) = uVar9;
        if (uVar9 == *(ulonglong *)(pcVar16 + 0x20)) goto code_r0x00014167d44a;
      }
      if (uVar21 != 0x3a) goto code_r0x00014167d587;
      *(ulonglong *)(pcVar16 + 0x28) = uVar9;
      bVar14 = (byte)&uStack_98;
      pcVar11 = (code *)pdb_14165b920();
      bVar22 = (byte)param_4;
      uVar17 = (uint)pcVar16;
      pcVar13 = pcStack_90;
      pcVar6 = pcStack_90;
      if ((char)uStack_98 == '\0') {
        bStack_99 = uStack_98._1_1_;
        goto code_r0x00014167cdf0;
      }
      goto LAB_14167ccda;
    }
    break;
  case 4:
    if (bStack_9b != 2) {
      uStack_98 = (code *)&UNK_1433227ab;
      pcStack_90 = (code *)0x9;
      goto code_r0x00014167d667;
    }
    uVar9 = *(ulonglong *)(pcVar16 + 0x28);
    if (uVar9 < *(ulonglong *)(pcVar16 + 0x20)) {
      lVar10 = *(longlong *)pcVar1;
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar21 = (ulonglong)*(byte *)(lVar10 + -1 + uVar9);
        if (0x3a < uVar21) goto code_r0x00014167d587;
        if ((0x100002600U >> (uVar21 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar16 + 0x28) = uVar9;
        if (uVar9 == *(ulonglong *)(pcVar16 + 0x20)) goto code_r0x00014167d44a;
      }
      if (uVar21 != 0x3a) goto code_r0x00014167d587;
      *(ulonglong *)(pcVar16 + 0x28) = uVar9;
      bVar14 = (byte)&uStack_98;
      pcVar11 = (code *)pdb_14165b920();
      bVar22 = (byte)param_4;
      uVar17 = (uint)pcVar16;
      pcVar13 = pcStack_90;
      pcVar6 = pcStack_90;
      if ((char)uStack_98 == '\0') {
        bStack_9b = uStack_98._1_1_;
        goto code_r0x00014167cdf0;
      }
      goto LAB_14167ccda;
    }
    break;
  case 5:
    if ((byte)uStack_a0 != '\x02') {
      uStack_98 = (code *)&UNK_1433227b4;
      pcStack_90 = (code *)0xd;
      goto code_r0x00014167d667;
    }
    uVar9 = *(ulonglong *)(pcVar16 + 0x28);
    if (uVar9 < *(ulonglong *)(pcVar16 + 0x20)) {
      lVar10 = *(longlong *)pcVar1;
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar21 = (ulonglong)*(byte *)(lVar10 + -1 + uVar9);
        if (0x3a < uVar21) goto code_r0x00014167d587;
        if ((0x100002600U >> (uVar21 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar16 + 0x28) = uVar9;
        if (uVar9 == *(ulonglong *)(pcVar16 + 0x20)) goto code_r0x00014167d44a;
      }
      if (uVar21 != 0x3a) goto code_r0x00014167d587;
      *(ulonglong *)(pcVar16 + 0x28) = uVar9;
      bVar14 = (byte)&uStack_98;
      pcVar11 = (code *)pdb_14165b920();
      bVar22 = (byte)param_4;
      uVar17 = (uint)pcVar16;
      pcVar13 = pcStack_90;
      pcVar6 = pcStack_90;
      if ((char)uStack_98 == '\0') {
        uStack_a0 = CONCAT31(uStack_a0._1_3_,uStack_98._1_1_);
        goto code_r0x00014167cdf0;
      }
      goto LAB_14167ccda;
    }
    break;
  case 6:
    if (iStack_c0 != 0) {
      uStack_98 = (code *)&UNK_1433227c1;
      pcStack_90 = (code *)0x12;
      goto code_r0x00014167d667;
    }
    uVar9 = *(ulonglong *)(pcVar16 + 0x28);
    if (uVar9 < *(ulonglong *)(pcVar16 + 0x20)) {
      lVar10 = *(longlong *)pcVar1;
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar21 = (ulonglong)*(byte *)(lVar10 + -1 + uVar9);
        if (0x3a < uVar21) goto code_r0x00014167d587;
        if ((0x100002600U >> (uVar21 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar16 + 0x28) = uVar9;
        if (uVar9 == *(ulonglong *)(pcVar16 + 0x20)) goto code_r0x00014167d44a;
      }
      if (uVar21 != 0x3a) goto code_r0x00014167d587;
      *(ulonglong *)(pcVar16 + 0x28) = uVar9;
      bVar14 = (byte)&uStack_98;
      pcVar11 = (code *)pdb_1416546a0();
      bVar22 = (byte)param_4;
      uVar17 = (uint)pcVar16;
      pcVar13 = pcStack_90;
      pcVar6 = pcStack_90;
      if ((char)uStack_98 == '\0') {
        uStack_bc = (uint)CONCAT71((int7)((ulonglong)pcVar11 >> 8),1);
        iStack_c0 = 1;
        unaff_XMM7_Da = uStack_98._4_4_;
        goto code_r0x00014167cdf0;
      }
      goto LAB_14167ccda;
    }
    break;
  case 7:
    uVar9 = *(ulonglong *)(pcVar16 + 0x28);
    if (uVar9 < *(ulonglong *)(pcVar16 + 0x20)) {
      lVar10 = *(longlong *)pcVar1;
      while( true ) {
        uVar9 = uVar9 + 1;
        uVar21 = (ulonglong)*(byte *)(lVar10 + -1 + uVar9);
        if (0x3a < uVar21) goto code_r0x00014167d696;
        if ((0x100002600U >> (uVar21 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pcVar16 + 0x28) = uVar9;
        if (uVar9 == *(ulonglong *)(pcVar16 + 0x20)) goto code_r0x00014167d46a;
      }
      if (uVar21 == 0x3a) {
        *(ulonglong *)(pcVar16 + 0x28) = uVar9;
        pcVar11 = (code *)pdb_14164c7b0();
        bVar22 = (byte)param_4;
        uVar17 = (uint)lVar10;
        bVar14 = (byte)pcVar16;
        pcVar13 = pcVar11;
        pcVar6 = uStack_a8;
        if (pcVar11 == (code *)0x0) goto code_r0x00014167cdf0;
        goto LAB_14167ccda;
      }
code_r0x00014167d696:
      uStack_88 = (code *)0x6;
    }
    else {
code_r0x00014167d46a:
      uStack_88 = (code *)0x3;
    }
    uVar17 = (uint)&uStack_88;
    pcVar11 = (code *)pdb_142d84ef0();
    bVar14 = (byte)pcVar16;
    pcVar13 = pcVar11;
    pcVar6 = uStack_a8;
    goto LAB_14167ccda;
  case 8:
    goto code_r0x00014167eca1;
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x00014167d44a:
  uStack_88 = (code *)0x3;
code_r0x00014167d452:
  uVar17 = (uint)&uStack_88;
  pcVar11 = (code *)pdb_142d84ef0();
  bVar14 = (byte)pcVar16;
  pcVar13 = pcVar11;
  pcVar6 = pcVar11;
  goto LAB_14167ccda;
code_r0x00014167eca1:
  if (pcVar13 != (code *)0x0) {
code_r0x00014167f55f:
    bVar24 = true;
code_r0x00014167f562:
    lVar10 = -0x8000000000000000;
    if (!(bool)(bVar24 ^ 1U | SBORROW8(0,in_stack_00000310))) {
      if (in_stack_00000310 != 0) {
        pub_1406abac0(in_stack_00000300,in_stack_00000310 * 0xc,4);
      }
      if (CONCAT44(param_10._4_4_,(undefined4)param_10) != 0) {
        pub_1406abac0((byte *)CONCAT44(param_11._4_4_,(undefined4)param_11),
                      CONCAT44(param_10._4_4_,(undefined4)param_10) << 2,4);
      }
    }
code_r0x00014167f5c6:
    arg0 = in_stack_00000108;
    lVar4 = in_stack_00000100;
    lVar3 = in_stack_000000f8;
    param_2[0x48] = (code)((char)param_2[0x48] + 1);
    _cStack0000000000000208 = lVar10;
    in_stack_00000210 = pcVar19;
    pcVar13 = (code *)pdb_140404da0(param_2);
    pub_142e32760(&param_7,&stack0x00000230,0xa8);
    if (SBORROW8(0,lVar10)) {
      lVar10 = -0x8000000000000000;
      if (pcVar13 != (code *)0x0) {
        if (*(longlong *)pcVar13 == 1) {
          pdb_1404b38e0(pcVar13 + 8);
        }
        else if ((*(longlong *)pcVar13 == 0) && (*(ulonglong *)(pcVar13 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pcVar13 + 8),*(ulonglong *)(pcVar13 + 0x10),1);
        }
        pub_1406abac0((byte *)pcVar13,0x28,8);
      }
    }
    else if (pcVar13 == (code *)0x0) {
      pub_142e32760(&iStack_c0,&param_7,0xa8);
    }
    else {
      if (lVar10 != 0) {
        pub_1406abac0((byte *)pcVar19,lVar10 * 0xc,4);
      }
      lVar10 = -0x8000000000000000;
      pcVar19 = pcVar13;
      if (lVar4 != 0) {
        pub_1406abac0(arg0,lVar4 << 2,4);
      }
    }
    if (SBORROW8(0,lVar10)) {
      lVar10 = pdb_142d86ed0(pcVar19,param_2);
      param_1[1] = lVar10;
      *param_1 = -0x8000000000000000;
    }
    else {
      param_1[2] = lVar3;
      param_1[3] = lVar4;
      param_1[4] = (longlong)arg0;
      pub_142e32760(param_1 + 5,&iStack_c0,0xa8);
      *param_1 = lVar10;
      param_1[1] = (longlong)pcVar19;
    }
    return param_1;
  }
  pdb_140407a40(pcVar5,&stack0x000000e0);
  lVar10 = in_stack_000000e0;
  pcVar19 = in_stack_00000210;
  if (cStack0000000000000208 == '\x01') goto code_r0x00014167f55f;
  if (cStack0000000000000209 == '\0') {
    bVar24 = SBORROW8(0,in_stack_00000310);
    if (bVar24) {
      _cStack00000000000001b8 = &stack0x000002f0;
      in_stack_000001c0 = pdb_1402ed400;
      pcVar19 = (code *)pdb_142d872f0(&UNK_143044fe5,&stack0x000001b8);
      goto code_r0x00014167f562;
    }
    _cStack0000000000000208 = CONCAT44(param_7._4_4_,(undefined4)param_7);
    in_stack_00000210 = (code *)CONCAT44(param_8._4_4_,(undefined4)param_8);
    if ((in_stack_000002e4 & 1) == 0) {
      _cStack00000000000001b8 = &stack0x000002f0;
      in_stack_000001c0 = pdb_1402ed400;
      pcVar19 = (code *)pdb_142d872f0(&UNK_143044fe5,&stack0x000001b8);
    }
    else if ((in_stack_000002e8 & 1) == 0) {
      _cStack00000000000001b8 = &stack0x000002f0;
      in_stack_000001c0 = pdb_1402ed400;
      pcVar19 = (code *)pdb_142d872f0(&UNK_143044fe5,&stack0x000001b8);
    }
    else {
      if (in_stack_0000030f != '\x02') {
        in_stack_000000f8 = CONCAT44(param_9._4_4_,(undefined4)param_9);
        in_stack_00000100 = CONCAT44(param_10._4_4_,(undefined4)param_10);
        in_stack_00000108 = (byte *)CONCAT44(param_11._4_4_,(undefined4)param_11);
        in_stack_00000110 = CONCAT44(param_12._4_4_,(undefined4)param_12);
        in_stack_00000118 = CONCAT44(param_13._4_4_,(undefined4)param_13);
        in_stack_00000120 = CONCAT44(param_14._4_4_,(undefined4)param_14);
        in_stack_00000128 = param_15;
        in_stack_00000130 = param_16;
        in_stack_00000138 = param_17;
        in_stack_00000140 = param_18;
        in_stack_00000148 = param_19;
        pcVar19 = in_stack_00000210;
        lVar10 = _cStack0000000000000208;
        goto code_r0x00014167f5c6;
      }
      _cStack00000000000001b8 = &stack0x000002f0;
      in_stack_000001c0 = pdb_1402ed400;
      pcVar19 = (code *)pdb_142d872f0(&UNK_143044fe5,&stack0x000001b8);
    }
    pdb_1400d9b40(&stack0x00000208);
    goto code_r0x00014167f562;
  }
  *(longlong *)(in_stack_000000e0 + 0x28) = *(longlong *)(in_stack_000000e0 + 0x28) + 1;
  plVar2 = (longlong *)(in_stack_000000e0 + 0x18);
  *(undefined8 *)(in_stack_000000e0 + 0x10) = 0;
  pdb_140de3310(pcVar5,plVar2);
  pcVar19 = in_stack_00000210;
  if (_cStack0000000000000208 == 2) goto code_r0x00014167f55f;
  pdb_141c6ecf0(&stack0x000001b8,in_stack_00000210);
  pcVar19 = in_stack_000001c0;
  if (cStack00000000000001b8 == '\x01') goto code_r0x00014167f55f;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(uStack00000000000001b9) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar9 = *(ulonglong *)(lVar10 + 0x28);
  if (*(ulonglong *)(lVar10 + 0x20) <= uVar9) {
code_r0x00014167f095:
    _cStack0000000000000208 = 3;
    pcVar19 = (code *)pdb_142d84ef0(lVar10,&stack0x00000208);
    goto code_r0x00014167f55f;
  }
  lVar3 = *plVar2;
  while( true ) {
    uVar9 = uVar9 + 1;
    uVar21 = (ulonglong)*(byte *)(lVar3 + -1 + uVar9);
    if (0x3a < uVar21) goto code_r0x00014167fb55;
    if (((ulonglong)pcVar16 >> (uVar21 & 0x3f) & 1) == 0) break;
    *(ulonglong *)(lVar10 + 0x28) = uVar9;
    if (uVar9 == *(ulonglong *)(lVar10 + 0x20)) goto code_r0x00014167f095;
  }
  if (uVar21 != 0x3a) {
code_r0x00014167fb55:
    _cStack0000000000000208 = 6;
    pcVar19 = (code *)pdb_142d84ef0(lVar10,&stack0x00000208);
    goto code_r0x00014167f55f;
  }
  *(ulonglong *)(lVar10 + 0x28) = uVar9;
  pcVar13 = (code *)pdb_14164c7b0(lVar10);
  pcVar19 = pcVar13;
  goto code_r0x00014167eca1;
LAB_14167ccda:
  uStack_a8 = pcVar6;
  cVar8 = (char)pcVar11;
  bVar20 = 2;
LAB_14167ccdd:
  pcVar19 = uStack_80;
  uStack_a0 = CONCAT31(uStack_a0._1_3_,bVar20);
  param_2[0x48] = (code)((char)param_2[0x48] + 1);
  uStack_80._0_2_ = CONCAT11(bVar22,cVar8);
  uStack_80._0_3_ = CONCAT12(bVar14,(undefined2)uStack_80);
  uStack_80._0_4_ = CONCAT13((char)uVar17,(undefined3)uStack_80);
  uStack_80._5_3_ = SUB83(pcVar19,5);
  uStack_80._0_5_ = CONCAT14(bVar20,(uint)uStack_80);
  uStack_88 = pcVar13;
  pcVar19 = (code *)pdb_140404da0(param_2);
  if ((byte)uStack_a0 == '\x02') {
    cVar8 = '\x02';
    if (pcVar19 != (code *)0x0) {
      lVar10 = *(longlong *)pcVar19;
      pcStack_b0 = pcVar19;
      if (lVar10 == 1) {
        pdb_1404b38e0(pcVar19 + 8);
      }
      else {
LAB_14167d4e7:
        if ((lVar10 == 0) && (*(ulonglong *)(pcStack_b0 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pcStack_b0 + 8),*(ulonglong *)(pcStack_b0 + 0x10),1);
        }
      }
LAB_14167d532:
      uVar17 = 0x28;
      pub_1406abac0((byte *)pcStack_b0,0x28,8);
      cVar8 = '\x02';
    }
  }
  else {
    bVar24 = pcVar19 == (code *)0x0;
    uVar17 = (uint)uStack_80;
    if (!bVar24) {
      pcVar13 = pcVar19;
    }
LAB_14167d51b:
    cVar8 = '\x02';
    if (bVar24) {
      cVar8 = (byte)uStack_a0;
    }
  }
LAB_14167d546:
  if (cVar8 != '\x02') {
    *param_1 = (longlong)pcVar13;
    *(uint *)(param_1 + 1) = uVar17;
    goto LAB_14167d555;
  }
LAB_14167d5d2:
  lVar10 = pdb_142d86ed0(pcVar13,param_2);
LAB_14167cc8c:
  *param_1 = lVar10;
  cVar8 = '\x02';
LAB_14167d555:
  *(char *)((longlong)param_1 + 0xc) = cVar8;
  return param_1;
}

