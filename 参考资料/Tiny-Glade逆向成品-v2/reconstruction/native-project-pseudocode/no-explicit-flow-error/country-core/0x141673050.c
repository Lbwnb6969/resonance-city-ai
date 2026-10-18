// VA 0x141673050, PDB extent 4985 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::startup::load_glade_audio::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::startup::load_glade_audio::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 4985 */

byte *******
pdb_141673050(byte *******param_1,byte *******param_2,undefined8 param_3,byte *******param_4)

{
  byte bVar1;
  int iVar2;
  byte ******ppppppbVar3;
  byte *******pppppppbVar4;
  byte ******ppppppbVar5;
  byte *******extraout_RAX;
  byte *******extraout_RAX_00;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  byte *******pppppppbVar8;
  undefined8 uVar9;
  byte *******arg1;
  byte *******unaff_RSI;
  byte *******pppppppbVar10;
  byte *******pppppppbVar11;
  byte *******in_R10;
  undefined7 uVar13;
  byte *******pppppppbVar12;
  byte *******pppppppbVar14;
  undefined1 auVar15 [16];
  undefined1 auVar17 [11];
  undefined1 auVar16 [16];
  byte *******pppppppbStack_148;
  undefined1 uStack_140;
  byte *******pppppppbStack_138;
  byte ******ppppppbStack_130;
  undefined8 uStack_128;
  byte *******pppppppbStack_120;
  byte *******pppppppbStack_118;
  byte *******pppppppbStack_110;
  byte *******pppppppbStack_108;
  undefined1 uStack_fd;
  uint uStack_fc;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  undefined8 uStack_e8;
  byte *******pppppppbStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  byte *******pppppppbStack_c8;
  byte *******pppppppbStack_c0;
  byte *******pppppppbStack_b8;
  byte *******pppppppbStack_b0;
  byte *******pppppppbStack_a8;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  pppppppbVar11 = (byte *******)&uStack_e8;
  uStack_48 = 0xfffffffffffffffe;
  pppppppbVar8 = (byte *******)param_2[4];
  pppppppbVar4 = (byte *******)param_2[5];
  if (pppppppbVar4 < pppppppbVar8) {
    do {
      pppppppbVar4 = (byte *******)((longlong)pppppppbVar4 + 1);
      bVar1 = *(byte *)((longlong)pppppppbVar4 + (longlong)param_2[3] + -1);
      pppppppbVar6 = (byte *******)(ulonglong)bVar1;
      if (((byte *******)0x20 < pppppppbVar6) ||
         ((0x100002600U >> ((ulonglong)pppppppbVar6 & 0x3f) & 1) == 0)) {
        pppppppbStack_f8 = param_1;
        pppppppbStack_f0 = param_2;
        if (bVar1 != 0x5b) {
          if (bVar1 != 0x7b) {
            pppppppbVar8 = (byte *******)pdb_142de8b10(param_2,&uStack_fd,&UNK_143323e60);
            goto LAB_141673cf3;
          }
          pppppppbVar6 = param_2 + 9;
          *(byte *)pppppppbVar6 = *(byte *)pppppppbVar6 - 1;
          if (*(byte *)pppppppbVar6 == 0) {
LAB_141673e79:
            uStack_e8 = (byte *******)0x18;
            goto LAB_1416730cb;
          }
          param_2[5] = (byte ******)pppppppbVar4;
          uStack_140 = 1;
          pppppppbStack_60 = (byte *******)0x8000000000000000;
          pppppppbStack_118 = (byte *******)0x8000000000000000;
          pppppppbStack_58 = (byte *******)0x8000000000000001;
          uVar9 = CONCAT71((int7)((ulonglong)-(longlong)pppppppbVar8 >> 8),1);
          pppppppbVar10 = (byte *******)0x7b;
          pppppppbStack_120 = pppppppbVar4;
          pppppppbStack_148 = param_2;
          goto LAB_14167312c;
        }
        pppppppbVar8 = param_2 + 9;
        *(byte *)pppppppbVar8 = *(byte *)pppppppbVar8 - 1;
        if (*(byte *)pppppppbVar8 == 0) goto LAB_141673e79;
        param_2[5] = (byte ******)pppppppbVar4;
        pppppppbStack_110 = (byte *******)CONCAT71(pppppppbStack_110._1_7_,1);
        pppppppbVar10 = (byte *******)&pppppppbStack_118;
        pppppppbStack_118 = param_2;
        pdb_140407e70(pppppppbVar11);
        if ((char)uStack_e8 == '\x01') {
LAB_1416735be:
          pppppppbStack_60 = pppppppbVar10;
          pppppppbVar14 = (byte *******)0x8000000000000000;
          pppppppbVar8 = pppppppbStack_e0;
          arg1 = unaff_RSI;
          pppppppbStack_e0 = pppppppbVar6;
          pppppppbVar10 = param_4;
          pppppppbVar11 = in_R10;
          pppppppbVar7 = (byte *******)0x100002600;
          pppppppbVar4 = param_1;
          goto LAB_141673b0d;
        }
        if (uStack_e8._1_1_ != '\x01') {
          pppppppbVar10 = (byte *******)&UNK_143322a58;
          pppppppbVar6 = (byte *******)&UNK_143322608;
          pppppppbStack_e0 = (byte *******)pdb_142d8f0e0(0);
          goto LAB_1416735be;
        }
        pppppppbVar10 = pppppppbStack_118;
        pdb_141659920(pppppppbVar11);
        pppppppbVar4 = pppppppbStack_d8;
        pppppppbVar8 = pppppppbStack_e0;
        pppppppbVar14 = uStack_e8;
        if (SBORROW8(0,(longlong)uStack_e8)) goto LAB_1416735be;
        pppppppbStack_90 = uStack_e8;
        pppppppbStack_88 = pppppppbStack_e0;
        pppppppbStack_80 = pppppppbStack_d8;
        pppppppbVar10 = (byte *******)&pppppppbStack_118;
        pdb_140407e70(pppppppbVar11);
        pppppppbVar7 = pppppppbStack_e0;
        if ((char)uStack_e8 != '\x01') {
          if (uStack_e8._1_1_ == '\x01') {
            pppppppbVar10 = pppppppbStack_118;
            pdb_14165c290(pppppppbVar11);
            arg1 = pppppppbStack_d8;
            pppppppbStack_60 = uStack_e8;
            pppppppbVar7 = pppppppbStack_e0;
            if (!SBORROW8(0,(longlong)uStack_e8)) {
              pppppppbStack_68 = pppppppbStack_e0;
              pdb_140407e70(pppppppbVar11,&pppppppbStack_118);
              if ((char)uStack_e8 != '\x01') {
                if (uStack_e8._1_1_ == '\x01') {
                  pdb_140c6c860(pppppppbVar11,pppppppbStack_118);
                  pppppppbVar6 = pppppppbStack_e0;
                  pppppppbVar10 = pppppppbStack_d8;
                  pppppppbVar11 = uStack_e8;
                  in_R10 = uStack_e8;
                  pppppppbVar7 = pppppppbStack_68;
                  if (uStack_e8 != (byte *******)0x8000000000000001) goto LAB_141673b0d;
                }
                else {
                  pppppppbVar6 = (byte *******)&UNK_143322608;
                  pppppppbStack_e0 = (byte *******)pdb_142d8f0e0(2,&UNK_143322a58);
                }
              }
              pppppppbVar10 = pppppppbStack_60;
              unaff_RSI = arg1;
              pppppppbVar7 = pppppppbStack_e0;
              if (pppppppbStack_60 != (byte *******)0x0) {
                pppppppbVar6 = (byte *******)0x1;
                pub_1406abac0((byte *)pppppppbStack_68,(ulonglong)pppppppbStack_60,1);
              }
            }
          }
          else {
            pppppppbVar10 = (byte *******)&UNK_143322a58;
            pppppppbVar6 = (byte *******)&UNK_143322608;
            pppppppbVar7 = (byte *******)pdb_142d8f0e0(1);
          }
        }
        arg1 = unaff_RSI;
        if (pppppppbVar4 != (byte *******)0x0) {
          pppppppbVar11 = pppppppbVar8 + 1;
          pppppppbVar12 = pppppppbVar4;
          do {
            pppppppbVar10 = (byte *******)pppppppbVar11[-1];
            if (pppppppbVar10 != (byte *******)0x0) {
              pppppppbVar6 = (byte *******)0x1;
              pub_1406abac0((byte *)*pppppppbVar11,(ulonglong)pppppppbVar10,1);
            }
            pppppppbVar11 = pppppppbVar11 + 3;
            pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + -1);
            pppppppbVar4 = (byte *******)0x0;
          } while (pppppppbVar12 != (byte *******)0x0);
        }
        pppppppbStack_e0 = pppppppbVar6;
        if (pppppppbVar14 != (byte *******)0x0) {
          pppppppbVar10 = (byte *******)((longlong)pppppppbVar14 * 0x18);
          pppppppbVar11 = (byte *******)0x8;
          pub_1406abac0((byte *)pppppppbVar8,(ulonglong)pppppppbVar10,8);
          pppppppbStack_e0 = pppppppbVar11;
        }
        pppppppbStack_60 = pppppppbVar10;
        pppppppbVar14 = (byte *******)0x8000000000000000;
        pppppppbVar8 = pppppppbVar7;
        pppppppbVar10 = param_4;
        pppppppbVar11 = in_R10;
LAB_141673b0d:
        *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) + 1;
        uStack_e8 = pppppppbVar14;
        pppppppbStack_b0 = pppppppbStack_e0;
        pppppppbStack_e0 = pppppppbVar8;
        pppppppbStack_d8 = pppppppbVar4;
        pppppppbStack_d0 = pppppppbStack_60;
        pppppppbStack_c8 = pppppppbVar7;
        pppppppbStack_c0 = arg1;
        pppppppbStack_b8 = pppppppbVar11;
        pppppppbStack_a8 = pppppppbVar10;
        pppppppbStack_98 = pppppppbStack_b0;
        pppppppbVar6 = (byte *******)pdb_140404e50(param_2);
        param_2 = pppppppbStack_f0;
        param_1 = pppppppbStack_f8;
        if (SBORROW8(0,(longlong)pppppppbVar14)) {
          if (pppppppbVar6 == (byte *******)0x0) goto LAB_141673cf3;
          ppppppbVar5 = *pppppppbVar6;
          pppppppbStack_58 = pppppppbVar6;
          if (ppppppbVar5 != (byte ******)0x1) goto LAB_141673c53;
          pdb_1404b38e0(pppppppbVar6 + 1);
          goto LAB_141673cdc;
        }
        if (pppppppbVar6 == (byte *******)0x0) goto LAB_141673b61;
        pppppppbStack_68 = pppppppbVar7;
        if (pppppppbVar4 != (byte *******)0x0) {
          pppppppbVar10 = pppppppbVar8 + 1;
          do {
            if (pppppppbVar10[-1] != (byte ******)0x0) {
              pub_1406abac0((byte *)*pppppppbVar10,(ulonglong)pppppppbVar10[-1],1);
            }
            pppppppbVar10 = pppppppbVar10 + 3;
            pppppppbVar4 = (byte *******)((longlong)pppppppbVar4 + -1);
          } while (pppppppbVar4 != (byte *******)0x0);
        }
        if (pppppppbVar14 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbVar8,(longlong)pppppppbVar14 * 0x18,8);
        }
        param_1 = pppppppbStack_f8;
        if (pppppppbStack_60 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_68,(ulonglong)pppppppbStack_60,1);
        }
        param_2 = pppppppbStack_f0;
        pppppppbVar8 = pppppppbVar6;
        if (((ulonglong)pppppppbVar11 & 0x7fffffffffffffff) != 0) {
          pub_1406abac0((byte *)pppppppbStack_98,(ulonglong)pppppppbVar11,1);
        }
        goto LAB_141673cf3;
      }
      param_2[5] = (byte ******)pppppppbVar4;
    } while (pppppppbVar4 != pppppppbVar8);
  }
  uStack_e8 = (byte *******)0x5;
LAB_1416730cb:
  ppppppbVar5 = (byte ******)pdb_142d84ef0(param_2,pppppppbVar11);
  goto LAB_141673cfe;
LAB_14167312c:
  uStack_fc = (uint)uVar9;
  pppppppbVar4 = param_1;
LAB_141673141:
  uStack_49 = 1;
  pppppppbStack_78 = pppppppbStack_58;
  pppppppbStack_70 = pppppppbStack_60;
  pdb_140407a40(pppppppbVar11,&pppppppbStack_148);
  param_1 = pppppppbStack_148;
  pppppppbVar8 = pppppppbStack_e0;
  if ((char)uStack_e8 == '\x01') goto LAB_141673601;
  if (uStack_e8._1_1_ == '\0') {
    if ((uStack_fc & 1) == 0) {
      pppppppbStack_d8 = pppppppbStack_108;
      uStack_e8 = pppppppbStack_118;
      pppppppbStack_e0 = pppppppbStack_110;
      if (!SBORROW8(0,(longlong)pppppppbStack_60)) {
        pppppppbStack_b0 = pppppppbStack_98;
        arg1 = pppppppbStack_138;
        pppppppbVar8 = pppppppbStack_110;
        pppppppbVar10 = pppppppbStack_120;
        pppppppbVar11 = (byte *******)0x8000000000000000;
        pppppppbVar7 = pppppppbStack_68;
        pppppppbVar4 = pppppppbStack_108;
        pppppppbVar14 = pppppppbStack_118;
        if (pppppppbStack_58 != (byte *******)0x8000000000000001) {
          pppppppbVar11 = pppppppbStack_58;
        }
        goto LAB_1416736bd;
      }
      ppppppbStack_130 = (byte ******)&UNK_143322a15;
      uStack_128 = 8;
      pppppppbStack_90 = &ppppppbStack_130;
      pppppppbStack_88 = (byte *******)pdb_1402ed400;
      pppppppbVar8 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&pppppppbStack_90);
      pppppppbStack_70 = (byte *******)0x8000000000000000;
      pppppppbStack_78 = pppppppbStack_58;
      uStack_49 = 0;
      pdb_1404ca240(pppppppbVar11);
    }
    else {
      ppppppbStack_130 = (byte ******)&UNK_143322a10;
      uStack_128 = 5;
      pppppppbStack_90 = &ppppppbStack_130;
      pppppppbStack_88 = (byte *******)pdb_1402ed400;
      pppppppbStack_70 = pppppppbStack_60;
      pppppppbStack_78 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar8 = (byte *******)pdb_142d872f0(&UNK_143044fe5,&pppppppbStack_90);
    }
    pppppppbVar4 = (byte *******)(ulonglong)uStack_fc;
    pppppppbVar11 = pppppppbStack_60;
    goto LAB_141673619;
  }
  pppppppbVar6 = pppppppbStack_148 + 3;
  pppppppbStack_148[5] = (byte ******)((longlong)pppppppbStack_148[5] + 1);
  pppppppbStack_148[2] = (byte ******)0x0;
  pppppppbStack_70 = pppppppbStack_60;
  pppppppbStack_78 = pppppppbStack_58;
  uStack_49 = 1;
  pppppppbVar10 = pppppppbStack_148;
  pdb_140de3310(pppppppbVar11,pppppppbVar6);
  pppppppbVar8 = pppppppbStack_e0;
  pppppppbVar4 = param_1;
  if ((int)uStack_e8 == 2) goto LAB_141673601;
  uVar13 = (undefined7)((ulonglong)param_1 >> 8);
  if (pppppppbStack_d8 == (byte *******)0x14) {
    auVar15[0] = -(DAT_143340b9e == *(byte *)pppppppbStack_e0);
    auVar15[1] = -(UNK_143340b9f == *(byte *)((longlong)pppppppbStack_e0 + 1));
    auVar15[2] = -(UNK_143340ba0 == *(byte *)((longlong)pppppppbStack_e0 + 2));
    auVar15[3] = -(UNK_143340ba1 == *(byte *)((longlong)pppppppbStack_e0 + 3));
    auVar15[4] = -(UNK_143340ba2 == *(byte *)((longlong)pppppppbStack_e0 + 4));
    auVar15[5] = -(UNK_143340ba3 == *(byte *)((longlong)pppppppbStack_e0 + 5));
    auVar15[6] = -(UNK_143340ba4 == *(byte *)((longlong)pppppppbStack_e0 + 6));
    auVar15[7] = -(UNK_143340ba5 == *(byte *)((longlong)pppppppbStack_e0 + 7));
    auVar15[8] = -(UNK_143340ba6 == *(byte *)(pppppppbStack_e0 + 1));
    auVar15[9] = -(UNK_143340ba7 == *(byte *)((longlong)pppppppbStack_e0 + 9));
    auVar15[10] = -(UNK_143340ba8 == *(byte *)((longlong)pppppppbStack_e0 + 10));
    auVar15[0xb] = -(UNK_143340ba9 == *(byte *)((longlong)pppppppbStack_e0 + 0xb));
    auVar15[0xc] = -(UNK_143340baa == *(byte *)((longlong)pppppppbStack_e0 + 0xc));
    auVar15[0xd] = -(UNK_143340bab == *(byte *)((longlong)pppppppbStack_e0 + 0xd));
    auVar15[0xe] = -(UNK_143340bac == *(byte *)((longlong)pppppppbStack_e0 + 0xe));
    auVar15[0xf] = -(UNK_143340bad == *(byte *)((longlong)pppppppbStack_e0 + 0xf));
    iVar2 = *(int *)(pppppppbStack_e0 + 2);
    auVar16[0] = -(DAT_143340bae == (char)iVar2);
    auVar16[1] = -(UNK_143340baf == (char)((uint)iVar2 >> 8));
    auVar16[2] = -(UNK_143340bb0 == (char)((uint)iVar2 >> 0x10));
    auVar16[3] = -(UNK_143340bb1 == (char)((uint)iVar2 >> 0x18));
    auVar17 = SUB1211((undefined1  [12])0x0,1);
    auVar16[4] = 0xff;
    auVar16[5] = 0xff;
    auVar16[6] = 0xff;
    auVar16[7] = 0xff;
    auVar16[8] = 0xff;
    auVar16[9] = 0xff;
    auVar16[10] = 0xff;
    auVar16[0xb] = 0xff;
    auVar16[0xc] = 0xff;
    auVar16[0xd] = -(auVar17[8] == '\0');
    auVar16[0xe] = -(auVar17[9] == '\0');
    auVar16[0xf] = -(auVar17[10] == '\0');
    auVar16 = auVar16 & auVar15;
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
      if (pppppppbStack_58 != (byte *******)0x8000000000000001) {
        pppppppbStack_90 = (byte *******)&UNK_143322a1d;
        pppppppbStack_88 = (byte *******)0x14;
        uStack_e8 = (byte *******)&pppppppbStack_90;
        pppppppbStack_e0 = (byte *******)pdb_1402ed400;
        pppppppbStack_70 = pppppppbStack_60;
        pppppppbStack_78 = pppppppbStack_58;
        uStack_49 = 1;
        pppppppbVar8 = (byte *******)pdb_142d872f0(&UNK_143045061,pppppppbVar11);
        goto LAB_141673601;
      }
      ppppppbVar5 = param_1[5];
      if (ppppppbVar5 < param_1[4]) {
        ppppppbVar3 = *pppppppbVar6;
        while( true ) {
          ppppppbVar5 = (byte ******)((longlong)ppppppbVar5 + 1);
          pppppppbVar10 =
               (byte *******)
               (ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar5);
          if ((byte *******)0x3a < pppppppbVar10) goto LAB_141673feb;
          if ((0x100002600U >> ((ulonglong)pppppppbVar10 & 0x3f) & 1) == 0) break;
          param_1[5] = ppppppbVar5;
          if (ppppppbVar5 == param_1[4]) {
            pppppppbVar10 = (byte *******)0x1;
            goto LAB_141673d15;
          }
        }
        if (pppppppbVar10 == (byte *******)0x3a) {
          param_1[5] = ppppppbVar5;
          pppppppbStack_70 = pppppppbStack_60;
          pppppppbStack_78 = (byte *******)0x8000000000000001;
          uStack_49 = 1;
          pdb_140c6c860(&pppppppbStack_90,param_1);
          pppppppbStack_98 = pppppppbStack_88;
          arg1 = pppppppbStack_90;
          pppppppbVar8 = pppppppbStack_88;
          if (pppppppbStack_90 != (byte *******)0x8000000000000001) {
            pppppppbStack_120 = pppppppbStack_80;
            pppppppbStack_58 = pppppppbStack_90;
            goto LAB_141673141;
          }
        }
        else {
LAB_141673feb:
          uStack_e8 = (byte *******)0x6;
          pppppppbStack_70 = pppppppbStack_60;
          pppppppbStack_78 = (byte *******)0x8000000000000001;
          uStack_49 = 1;
          pppppppbVar8 = (byte *******)pdb_142d84ef0(param_1);
          arg1 = pppppppbVar11;
        }
      }
      else {
LAB_141673d15:
        uStack_e8 = (byte *******)0x3;
        pppppppbStack_70 = pppppppbStack_60;
        pppppppbStack_78 = (byte *******)0x8000000000000001;
        uStack_49 = 1;
        pppppppbVar8 = (byte *******)pdb_142d84ef0(param_1);
        arg1 = pppppppbVar11;
      }
      pppppppbVar4 = (byte *******)CONCAT71(uVar13,1);
      pppppppbVar6 = pppppppbStack_68;
      pppppppbVar11 = pppppppbStack_60;
      goto joined_r0x000141673d68;
    }
LAB_141673254:
    ppppppbVar5 = param_1[5];
    if (param_1[4] <= ppppppbVar5) {
LAB_141673562:
      uStack_e8 = (byte *******)0x3;
      pppppppbStack_70 = pppppppbStack_60;
      pppppppbStack_78 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar8 = (byte *******)pdb_142d84ef0(param_1,pppppppbVar11);
      goto LAB_141673601;
    }
    ppppppbVar3 = *pppppppbVar6;
    while( true ) {
      ppppppbVar5 = (byte ******)((longlong)ppppppbVar5 + 1);
      pppppppbVar10 =
           (byte *******)(ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar5);
      if ((byte *******)0x3a < pppppppbVar10) goto LAB_141673e43;
      if ((0x100002600U >> ((ulonglong)pppppppbVar10 & 0x3f) & 1) == 0) break;
      param_1[5] = ppppppbVar5;
      if (ppppppbVar5 == param_1[4]) {
        pppppppbVar10 = (byte *******)0x1;
        goto LAB_141673562;
      }
    }
    if (pppppppbVar10 != (byte *******)0x3a) {
LAB_141673e43:
      uStack_e8 = (byte *******)0x6;
      pppppppbStack_70 = pppppppbStack_60;
      pppppppbStack_78 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar8 = (byte *******)pdb_142d84ef0(param_1,pppppppbVar11);
      goto LAB_141673601;
    }
    param_1[5] = ppppppbVar5;
    pppppppbStack_70 = pppppppbStack_60;
    pppppppbStack_78 = pppppppbStack_58;
    uStack_49 = 1;
    pppppppbVar8 = (byte *******)pdb_14164c7b0(param_1);
    if (pppppppbVar8 != (byte *******)0x0) goto LAB_141673e1d;
    goto LAB_141673141;
  }
  if (pppppppbStack_d8 == (byte *******)0x8) {
    if (*pppppppbStack_e0 != _DAT_143340b96) goto LAB_141673254;
    if (!SBORROW8(0,(longlong)pppppppbStack_60)) {
      pppppppbStack_90 = (byte *******)&UNK_143322a15;
      pppppppbStack_88 = (byte *******)0x8;
      uStack_e8 = (byte *******)&pppppppbStack_90;
      pppppppbStack_e0 = (byte *******)pdb_1402ed400;
      pppppppbStack_70 = pppppppbStack_60;
      pppppppbStack_78 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar8 = (byte *******)pdb_142d872f0(&UNK_143045061,pppppppbVar11);
      goto LAB_141673601;
    }
    ppppppbVar5 = param_1[5];
    if (param_1[4] <= ppppppbVar5) {
LAB_141673d84:
      uStack_e8 = (byte *******)0x3;
      pppppppbStack_70 = (byte *******)0x8000000000000000;
      pppppppbStack_78 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar8 = (byte *******)pdb_142d84ef0(param_1,pppppppbVar11);
LAB_141673dbb:
      pppppppbVar4 = (byte *******)CONCAT71(uVar13,1);
      pppppppbVar11 = (byte *******)0x8000000000000000;
      goto LAB_141673619;
    }
    ppppppbVar3 = *pppppppbVar6;
    while( true ) {
      ppppppbVar5 = (byte ******)((longlong)ppppppbVar5 + 1);
      pppppppbVar10 =
           (byte *******)(ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar5);
      if ((byte *******)0x3a < pppppppbVar10) goto LAB_141673fb2;
      if ((0x100002600U >> ((ulonglong)pppppppbVar10 & 0x3f) & 1) == 0) break;
      param_1[5] = ppppppbVar5;
      if (ppppppbVar5 == param_1[4]) {
        pppppppbVar10 = (byte *******)0x1;
        goto LAB_141673d84;
      }
    }
    if (pppppppbVar10 != (byte *******)0x3a) {
LAB_141673fb2:
      uStack_e8 = (byte *******)0x6;
      pppppppbStack_70 = (byte *******)0x8000000000000000;
      pppppppbStack_78 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar8 = (byte *******)pdb_142d84ef0(param_1,pppppppbVar11);
      goto LAB_141673dbb;
    }
    param_1[5] = ppppppbVar5;
    pppppppbStack_70 = (byte *******)0x8000000000000000;
    pppppppbStack_78 = pppppppbStack_58;
    uStack_49 = 1;
    pdb_14165c290(&pppppppbStack_90,param_1);
    pppppppbVar8 = pppppppbStack_88;
    if (SBORROW8(0,(longlong)pppppppbStack_90)) goto LAB_141673dbb;
    pppppppbStack_138 = pppppppbStack_80;
    pppppppbStack_68 = pppppppbStack_88;
    pppppppbStack_60 = pppppppbStack_90;
    goto LAB_141673141;
  }
  if ((pppppppbStack_d8 != (byte *******)0x5) ||
     (*(byte *)((longlong)pppppppbStack_e0 + 4) != DAT_143340b95 ||
      *(int *)pppppppbStack_e0 != _DAT_143340b91)) goto LAB_141673254;
  if ((uStack_fc & 1) == 0) {
    pppppppbStack_90 = (byte *******)&UNK_143322a10;
    pppppppbStack_88 = (byte *******)0x5;
    uStack_e8 = (byte *******)&pppppppbStack_90;
    pppppppbStack_e0 = (byte *******)pdb_1402ed400;
    pppppppbStack_70 = pppppppbStack_60;
    pppppppbStack_78 = pppppppbStack_58;
    uStack_49 = 1;
    pppppppbVar8 = (byte *******)pdb_142d872f0(&UNK_143045061,pppppppbVar11);
LAB_141673601:
    pppppppbVar4 = (byte *******)CONCAT71((int7)((ulonglong)pppppppbVar4 >> 8),1);
    pppppppbVar11 = pppppppbStack_60;
    goto LAB_141673619;
  }
  ppppppbVar5 = param_1[5];
  if (ppppppbVar5 < param_1[4]) {
    ppppppbVar3 = *pppppppbVar6;
    while( true ) {
      ppppppbVar5 = (byte ******)((longlong)ppppppbVar5 + 1);
      pppppppbVar10 =
           (byte *******)(ulonglong)*(byte *)((longlong)ppppppbVar3 + -1 + (longlong)ppppppbVar5);
      if ((byte *******)0x3a < pppppppbVar10) goto LAB_141674024;
      if ((0x100002600U >> ((ulonglong)pppppppbVar10 & 0x3f) & 1) == 0) break;
      param_1[5] = ppppppbVar5;
      if (ppppppbVar5 == param_1[4]) {
        pppppppbVar10 = (byte *******)0x1;
        goto LAB_141673ddb;
      }
    }
    if (pppppppbVar10 != (byte *******)0x3a) {
LAB_141674024:
      uStack_e8 = (byte *******)0x6;
      pppppppbStack_70 = pppppppbStack_60;
      pppppppbStack_78 = pppppppbStack_58;
      uStack_49 = 1;
      pppppppbVar8 = (byte *******)pdb_142d84ef0(param_1,pppppppbVar11);
      goto LAB_141673e1d;
    }
    param_1[5] = ppppppbVar5;
    pppppppbStack_70 = pppppppbStack_60;
    pppppppbStack_78 = pppppppbStack_58;
    uStack_49 = 1;
    pdb_141659920(&pppppppbStack_90,param_1);
    pppppppbVar8 = pppppppbStack_88;
    if (SBORROW8(0,(longlong)pppppppbStack_90)) goto LAB_141673e1d;
    pppppppbStack_108 = pppppppbStack_80;
    uVar9 = 0;
    pppppppbStack_118 = pppppppbStack_90;
    pppppppbStack_110 = pppppppbStack_88;
    goto LAB_14167312c;
  }
LAB_141673ddb:
  uStack_e8 = (byte *******)0x3;
  pppppppbStack_70 = pppppppbStack_60;
  pppppppbStack_78 = pppppppbStack_58;
  uStack_49 = 1;
  pppppppbVar8 = (byte *******)pdb_142d84ef0(param_1,pppppppbVar11);
LAB_141673e1d:
  pppppppbVar4 = (byte *******)CONCAT71(uVar13,1);
  pppppppbVar11 = pppppppbStack_60;
LAB_141673619:
  pppppppbVar6 = pppppppbStack_68;
  arg1 = pppppppbStack_58;
  if ((-0x7fffffffffffffff < (longlong)pppppppbStack_58) && (pppppppbStack_58 != (byte *******)0x0))
  {
    pppppppbVar10 = (byte *******)0x1;
    pub_1406abac0((byte *)pppppppbStack_98,(ulonglong)pppppppbStack_58,1);
  }
joined_r0x000141673d68:
  if (((ulonglong)pppppppbVar11 & 0x7fffffffffffffff) != 0) {
    pppppppbVar10 = (byte *******)0x1;
    pub_1406abac0((byte *)pppppppbVar6,(ulonglong)pppppppbVar11,1);
    arg1 = pppppppbVar11;
  }
  pppppppbVar12 = pppppppbStack_110;
  pppppppbVar6 = pppppppbStack_118;
  pppppppbStack_b0 =
       (byte *******)
       CONCAT71((int7)((ulonglong)-(longlong)pppppppbStack_118 >> 8),
                !SBORROW8(0,(longlong)pppppppbStack_118));
  pppppppbVar14 = (byte *******)0x8000000000000000;
  pppppppbVar11 = param_4;
  pppppppbVar7 = in_R10;
  if (((byte)pppppppbVar4 & !SBORROW8(0,(longlong)pppppppbStack_118)) != 0) {
    if (pppppppbStack_108 != (byte *******)0x0) {
      pppppppbVar11 = pppppppbStack_110 + 1;
      pppppppbVar4 = pppppppbStack_108;
      do {
        arg1 = (byte *******)pppppppbVar11[-1];
        if (arg1 != (byte *******)0x0) {
          pppppppbVar10 = (byte *******)0x1;
          pub_1406abac0((byte *)*pppppppbVar11,(ulonglong)arg1,1);
          pppppppbStack_b0 = extraout_RAX;
        }
        pppppppbVar11 = pppppppbVar11 + 3;
        pppppppbVar4 = (byte *******)((longlong)pppppppbVar4 + -1);
      } while (pppppppbVar4 != (byte *******)0x0);
    }
    pppppppbVar11 = param_4;
    pppppppbVar7 = in_R10;
    pppppppbVar4 = (byte *******)0x0;
    if (pppppppbVar6 != (byte *******)0x0) {
      arg1 = (byte *******)((longlong)pppppppbVar6 * 0x18);
      pppppppbVar10 = (byte *******)0x8;
      pub_1406abac0((byte *)pppppppbVar12,(ulonglong)arg1,8);
      pppppppbStack_b0 = extraout_RAX_00;
      pppppppbVar11 = param_4;
      pppppppbVar7 = in_R10;
    }
  }
LAB_1416736bd:
  *(byte *)(pppppppbStack_f0 + 9) = *(byte *)(pppppppbStack_f0 + 9) + 1;
  pppppppbStack_d0 = pppppppbStack_60;
  uStack_e8 = pppppppbVar14;
  pppppppbStack_e0 = pppppppbVar8;
  pppppppbStack_d8 = pppppppbVar4;
  pppppppbStack_c8 = pppppppbVar7;
  pppppppbStack_c0 = arg1;
  pppppppbStack_b8 = pppppppbVar11;
  pppppppbStack_a8 = pppppppbVar10;
  pppppppbStack_98 = pppppppbStack_b0;
  pppppppbVar6 = (byte *******)pdb_140404da0();
  param_2 = pppppppbStack_f0;
  param_1 = pppppppbStack_f8;
  if (SBORROW8(0,(longlong)pppppppbVar14)) {
    if (pppppppbVar6 != (byte *******)0x0) {
      ppppppbVar5 = *pppppppbVar6;
      pppppppbStack_58 = pppppppbVar6;
      if (ppppppbVar5 == (byte ******)0x1) {
        pdb_1404b38e0(pppppppbVar6 + 1,-(longlong)pppppppbVar14);
      }
      else {
LAB_141673c53:
        param_2 = pppppppbStack_f0;
        param_1 = pppppppbStack_f8;
        if ((ppppppbVar5 == (byte ******)0x0) && (pppppppbStack_58[2] != (byte ******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_58[1],(ulonglong)pppppppbStack_58[2],1);
        }
      }
LAB_141673cdc:
      pub_1406abac0((byte *)pppppppbStack_58,0x28,8);
    }
  }
  else {
    if (pppppppbVar6 == (byte *******)0x0) {
LAB_141673b61:
      pppppppbStack_f8[2] = (byte ******)pppppppbVar4;
      pppppppbStack_f8[3] = (byte ******)pppppppbStack_60;
      pppppppbStack_f8[4] = (byte ******)pppppppbVar7;
      pppppppbStack_f8[5] = (byte ******)arg1;
      pppppppbStack_f8[6] = (byte ******)pppppppbVar11;
      pppppppbStack_f8[7] = (byte ******)pppppppbStack_98;
      pppppppbStack_f8[8] = (byte ******)pppppppbVar10;
      *pppppppbStack_f8 = (byte ******)pppppppbVar14;
      pppppppbStack_f8[1] = (byte ******)pppppppbVar8;
      return pppppppbStack_f8;
    }
    pppppppbStack_68 = pppppppbVar7;
    pppppppbStack_58 = pppppppbVar6;
    if (pppppppbVar4 != (byte *******)0x0) {
      pppppppbVar10 = pppppppbVar8 + 1;
      do {
        if (pppppppbVar10[-1] != (byte ******)0x0) {
          pub_1406abac0((byte *)*pppppppbVar10,(ulonglong)pppppppbVar10[-1],1);
        }
        pppppppbVar10 = pppppppbVar10 + 3;
        pppppppbVar4 = (byte *******)((longlong)pppppppbVar4 + -1);
      } while (pppppppbVar4 != (byte *******)0x0);
    }
    if (pppppppbVar14 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbVar8,(longlong)pppppppbVar14 * 0x18,8);
    }
    param_2 = pppppppbStack_f0;
    if (pppppppbStack_60 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_68,(ulonglong)pppppppbStack_60,1);
      param_2 = pppppppbStack_f0;
    }
    pppppppbVar8 = pppppppbStack_58;
    pppppppbStack_f0 = param_2;
    if (((ulonglong)pppppppbVar11 & 0x7fffffffffffffff) != 0) {
      pub_1406abac0((byte *)pppppppbStack_98,(ulonglong)pppppppbVar11,1);
      pppppppbVar8 = pppppppbStack_58;
    }
  }
LAB_141673cf3:
  ppppppbVar5 = (byte ******)pdb_142d86ed0(pppppppbVar8,param_2);
LAB_141673cfe:
  param_1[1] = ppppppbVar5;
  *param_1 = (byte ******)0x8000000000000000;
  return param_1;
}

