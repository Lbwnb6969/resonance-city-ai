// VA 0x14016eca0, PDB extent 1626 bytes
// serde_json::value::de::impl$0::deserialize::impl$0::visit_map<ref_mut$<serde::private::de::content::MapDeserializer<serde_json::error::Error> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::value::de::impl$0::deserialize::impl$0::visit_map<ref_mut$<serde::private::de::content::MapDeserializer<serde_json::error::Error>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1626 */

char * pdb_14016eca0(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined2 uStack_ab;
  undefined1 uStack_a9;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  char cStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined4 uStack_77;
  undefined2 uStack_73;
  undefined1 uStack_71;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  char *pcStack_60;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcVar2 = *(char **)(param_2 + 0x28);
  if (pcVar2 != *(char **)(param_2 + 0x38)) {
    *(char **)(param_2 + 0x28) = pcVar2 + 0x40;
    cStack_80 = *pcVar2;
    if (cStack_80 != '\x16') {
      *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
      uVar8 = *(undefined8 *)(pcVar2 + 9);
      uStack_68 = *(undefined8 *)(pcVar2 + 0x18);
      uStack_7f = (undefined7)*(undefined8 *)(pcVar2 + 1);
      uStack_78 = (undefined1)((ulonglong)*(undefined8 *)(pcVar2 + 1) >> 0x38);
      uStack_77 = (undefined4)uVar8;
      uStack_73 = (undefined2)((ulonglong)uVar8 >> 0x20);
      uStack_71 = (undefined1)((ulonglong)uVar8 >> 0x30);
      uStack_70 = (undefined4)*(undefined8 *)(pcVar2 + 0x10);
      uStack_6c = (undefined4)((ulonglong)*(undefined8 *)(pcVar2 + 0x10) >> 0x20);
      uStack_b8 = *(undefined4 *)(pcVar2 + 0x20);
      uVar4 = *(undefined4 *)(pcVar2 + 0x24);
      uStack_b0 = *(undefined4 *)(pcVar2 + 0x28);
      uVar5 = *(undefined4 *)(pcVar2 + 0x2c);
      uStack_a8 = *(undefined4 *)(pcVar2 + 0x30);
      uStack_a4 = *(undefined4 *)(pcVar2 + 0x34);
      uStack_a0 = *(undefined4 *)(pcVar2 + 0x38);
      uStack_9c = *(undefined4 *)(pcVar2 + 0x3c);
      uStack_b4 = (undefined1)uVar4;
      uStack_b3 = (undefined2)((uint)uVar4 >> 8);
      uStack_b1 = (undefined1)((uint)uVar4 >> 0x18);
      uStack_ac = (undefined1)uVar5;
      uStack_ab = (undefined2)((uint)uVar5 >> 8);
      uStack_a9 = (undefined1)((uint)uVar5 >> 0x18);
      pcStack_60 = param_2;
      if (*param_2 != '\x16') {
        pdb_14046f110(param_2);
      }
      pcVar2 = pcStack_60;
      *(undefined4 *)(pcStack_60 + 0x10) = uStack_a8;
      *(undefined4 *)(pcStack_60 + 0x14) = uStack_a4;
      *(undefined4 *)(pcStack_60 + 0x18) = uStack_a0;
      *(undefined4 *)(pcStack_60 + 0x1c) = uStack_9c;
      *(ulonglong *)pcStack_60 =
           CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8)));
      *(ulonglong *)(pcStack_60 + 8) =
           CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0)));
      uStack_a8 = uStack_70;
      uStack_a4 = uStack_6c;
      uStack_a0 = (undefined4)uStack_68;
      uStack_9c = uStack_68._4_4_;
      uStack_b8 = CONCAT31((int3)uStack_7f,cStack_80);
      uStack_b4 = (undefined1)((uint7)uStack_7f >> 0x18);
      uStack_b3 = (undefined2)((uint7)uStack_7f >> 0x20);
      uStack_b1 = (undefined1)((uint7)uStack_7f >> 0x30);
      uStack_b0._1_3_ = (undefined3)uStack_77;
      uStack_b0 = CONCAT31(uStack_b0._1_3_,uStack_78);
      uStack_ac = (undefined1)((uint)uStack_77 >> 0x18);
      uStack_ab = uStack_73;
      uStack_a9 = uStack_71;
      uStack_49 = 0;
      pdb_140451c70(&pbStack_f0,&uStack_b8);
      if (pbStack_f0 == (byte *)0x8000000000000001) {
        *(byte **)(param_1 + 8) = pbStack_e8;
        *param_1 = '\x06';
        return param_1;
      }
      if (SBORROW8(0,(longlong)pbStack_f0)) {
        cVar1 = *pcVar2;
        *pcVar2 = '\x16';
        if (cVar1 != '\x16') {
          uVar4 = *(undefined4 *)(pcVar2 + 5);
          uVar5 = *(undefined4 *)(pcVar2 + 0xd);
          uStack_a4 = *(undefined4 *)(pcVar2 + 0x14);
          uStack_a0 = *(undefined4 *)(pcVar2 + 0x18);
          uStack_9c = *(undefined4 *)(pcVar2 + 0x1c);
          uStack_b4 = (undefined1)((uint)*(undefined4 *)(pcVar2 + 1) >> 0x18);
          uStack_b3 = (undefined2)uVar4;
          uStack_b1 = (undefined1)((uint)uVar4 >> 0x10);
          uStack_b0._1_3_ = (undefined3)*(undefined4 *)(pcVar2 + 9);
          uStack_b0 = CONCAT31(uStack_b0._1_3_,(char)((uint)uVar4 >> 0x18));
          uStack_ac = (undefined1)((uint)*(undefined4 *)(pcVar2 + 9) >> 0x18);
          uStack_ab = (undefined2)uVar5;
          uStack_a9 = (undefined1)((uint)uVar5 >> 0x10);
          uStack_a8._1_3_ = (undefined3)((uint)*(undefined4 *)(pcVar2 + 0x10) >> 8);
          uStack_a8._0_1_ = (undefined1)((uint)uVar5 >> 0x18);
          uStack_b8 = CONCAT31((int3)*(undefined4 *)(pcVar2 + 1),cVar1);
          pdb_140451f20(&cStack_80,&uStack_b8);
          pbStack_58 = (byte *)CONCAT71(uStack_7f,cStack_80);
          if (pbStack_58 == (byte *)0x0) {
            *(ulonglong *)(param_1 + 8) =
                 CONCAT17(uStack_71,CONCAT25(uStack_73,CONCAT41(uStack_77,uStack_78)));
            *param_1 = '\x06';
            return param_1;
          }
          pcStack_60 = (char *)CONCAT17(uStack_71,CONCAT25(uStack_73,CONCAT41(uStack_77,uStack_78)))
          ;
          pdb_140404f50(&uStack_b8);
          if ((char)uStack_b8 == '\x06') {
            uVar8 = pdb_142d87040(CONCAT17(uStack_a9,
                                           CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0))));
            *(undefined8 *)(param_1 + 8) = uVar8;
            *param_1 = '\x06';
          }
          else {
            *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_a4,uStack_a8);
            *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_9c,uStack_a0);
            *(ulonglong *)param_1 =
                 CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8)));
            *(ulonglong *)(param_1 + 8) =
                 CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0)));
          }
          if (pcStack_60 == (char *)0x0) {
            return param_1;
          }
          pub_1406abac0(pbStack_58,(ulonglong)pcStack_60,1);
          return param_1;
        }
        pdb_142dc8110(&UNK_142f5a140,0x2c,&UNK_142f5aaf0);
      }
      else {
        pbStack_c0 = pbStack_e8;
        uStack_d8 = 0;
        uStack_c8 = 0;
        pbStack_58 = pbStack_f0;
        cVar1 = *pcVar2;
        *pcVar2 = '\x16';
        if (cVar1 != '\x16') {
          uVar4 = *(undefined4 *)(pcVar2 + 5);
          uVar5 = *(undefined4 *)(pcVar2 + 0xd);
          uStack_a4 = *(undefined4 *)(pcVar2 + 0x14);
          uStack_a0 = *(undefined4 *)(pcVar2 + 0x18);
          uStack_9c = *(undefined4 *)(pcVar2 + 0x1c);
          uStack_b4 = (undefined1)((uint)*(undefined4 *)(pcVar2 + 1) >> 0x18);
          uStack_b3 = (undefined2)uVar4;
          uStack_b1 = (undefined1)((uint)uVar4 >> 0x10);
          uStack_b0._1_3_ = (undefined3)*(undefined4 *)(pcVar2 + 9);
          uStack_b0 = CONCAT31(uStack_b0._1_3_,(char)((uint)uVar4 >> 0x18));
          uStack_ac = (undefined1)((uint)*(undefined4 *)(pcVar2 + 9) >> 0x18);
          uStack_ab = (undefined2)uVar5;
          uStack_a9 = (undefined1)((uint)uVar5 >> 0x10);
          uStack_a8._1_3_ = (undefined3)((uint)*(undefined4 *)(pcVar2 + 0x10) >> 8);
          uStack_a8._0_1_ = (undefined1)((uint)uVar5 >> 0x18);
          uStack_b8 = CONCAT31((int3)*(undefined4 *)(pcVar2 + 1),cVar1);
          pdb_14043f720(param_1,&uStack_b8);
          if (*param_1 == '\x06') {
            if (pbStack_58 != (byte *)0x0) {
              pub_1406abac0(pbStack_c0,(ulonglong)pbStack_58,1);
            }
LAB_14016f06c:
            pdb_1404dfd20(&uStack_d8);
            return param_1;
          }
          uStack_128 = *(undefined4 *)param_1;
          uStack_124 = *(undefined4 *)(param_1 + 4);
          uStack_120 = *(undefined4 *)(param_1 + 8);
          uStack_11c = *(undefined4 *)(param_1 + 0xc);
          uStack_118 = *(undefined4 *)(param_1 + 0x10);
          uStack_114 = *(undefined4 *)(param_1 + 0x14);
          uStack_110 = *(undefined4 *)(param_1 + 0x18);
          uStack_10c = *(undefined4 *)(param_1 + 0x1c);
          pdb_14057e810(&cStack_80,&uStack_d8,&pbStack_f0,&uStack_128);
          switch(cStack_80) {
          case '\0':
          case '\x01':
          case '\x02':
          case '\x06':
            break;
          case '\x03':
            uVar7 = CONCAT17(uStack_71,CONCAT25(uStack_73,CONCAT41(uStack_77,uStack_78)));
            if (uVar7 != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_6c,uStack_70),uVar7,1);
            }
            break;
          case '\x04':
            pdb_1404c0820(&uStack_78);
            break;
          default:
            pdb_1404dfd20(&uStack_78);
          }
          do {
            pdb_140470b30(&uStack_b8,pcVar2);
            lVar6 = CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8)));
            if (SBORROW8(0,lVar6)) {
              uStack_b1 = (undefined1)uStack_d8;
              uStack_a9 = (undefined1)uStack_d0;
              *param_1 = '\x05';
              *(ulonglong *)(param_1 + 1) =
                   CONCAT17(uStack_b1,CONCAT25(uStack_b3,CONCAT14(uStack_b4,uStack_b8)));
              *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_a9,(int7)((ulonglong)uStack_d8 >> 8));
              *(undefined8 *)(param_1 + 0x10) = uStack_d0;
              *(undefined8 *)(param_1 + 0x18) = uStack_c8;
              return param_1;
            }
            if (lVar6 == -0x7fffffffffffffff) {
              *(ulonglong *)(param_1 + 8) =
                   CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0)));
              *param_1 = '\x06';
              goto LAB_14016f06c;
            }
            uStack_100 = CONCAT17(uStack_a9,CONCAT25(uStack_ab,CONCAT14(uStack_ac,uStack_b0)));
            uStack_f8 = CONCAT44(uStack_a4,uStack_a8);
            uStack_138 = uStack_90;
            uStack_134 = uStack_8c;
            uStack_130 = uStack_88;
            uStack_12c = uStack_84;
            uStack_148 = uStack_a0;
            uStack_144 = uStack_9c;
            uStack_140 = uStack_98;
            uStack_13c = uStack_94;
            lStack_108 = lVar6;
            pdb_14057e810(&cStack_80,&uStack_d8,&lStack_108,&uStack_148);
            switch(cStack_80) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x06':
              break;
            case '\x03':
              uVar7 = CONCAT17(uStack_71,CONCAT25(uStack_73,CONCAT41(uStack_77,uStack_78)));
              if (uVar7 != 0) {
                pub_1406abac0((byte *)CONCAT44(uStack_6c,uStack_70),uVar7,1);
              }
              break;
            case '\x04':
              pbStack_58 = (byte *)CONCAT44(uStack_6c,uStack_70);
              pdb_1404be800(pbStack_58,uStack_68);
              lVar6 = CONCAT17(uStack_71,CONCAT25(uStack_73,CONCAT41(uStack_77,uStack_78)));
              if (lVar6 != 0) {
                pub_1406abac0(pbStack_58,lVar6 << 5,8);
              }
              break;
            default:
              pdb_1404dfd20(&uStack_78);
            }
          } while( true );
        }
      }
      pdb_142dc8110(&UNK_142f5a140,0x2c,&UNK_142f5aaf0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  *param_1 = '\x05';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  return param_1;
}

