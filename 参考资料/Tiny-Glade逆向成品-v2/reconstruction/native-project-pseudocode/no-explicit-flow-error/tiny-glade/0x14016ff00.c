// VA 0x14016ff00, PDB extent 1905 bytes
// serde_json::value::de::impl$0::deserialize::impl$0::visit_map<serde_json::de::MapAccess<serde_json::read::StrRead> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::value::de::impl$0::deserialize::impl$0::visit_map<serde_json::de::MapAccess<serde_json::read::StrRead>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1905 */

char * pdb_14016ff00(char *param_1,longlong param_2,undefined1 param_3)

{
  undefined7 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
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
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  byte *pbStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined1 uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  char cStack_78;
  char cStack_77;
  undefined5 uStack_76;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_a0 = param_2;
  uStack_98 = param_3;
  pdb_140407a40(&cStack_78,&lStack_a0);
  lVar2 = lStack_a0;
  if (cStack_78 == '\x01') {
    pbStack_b0 = (byte *)CONCAT17(uStack_69,uStack_70);
  }
  else {
    if (cStack_77 != '\x01') {
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
    pdb_1401707e0(&cStack_78,lStack_a0);
    pbStack_b8 = (byte *)CONCAT17(uStack_71,CONCAT52(uStack_76,CONCAT11(cStack_77,cStack_78)));
    pbStack_b0 = (byte *)CONCAT17(uStack_69,uStack_70);
    if (pbStack_b8 != (byte *)0x8000000000000001) {
      if (SBORROW8(0,(longlong)pbStack_b8)) {
        uVar3 = *(ulonglong *)(lVar2 + 0x28);
        if (uVar3 < *(ulonglong *)(lVar2 + 0x20)) {
          do {
            uVar3 = uVar3 + 1;
            uVar6 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar3);
            if (0x3a < uVar6) {
LAB_140170486:
              cStack_78 = '\x06';
              goto LAB_14016ffe8;
            }
            if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
              if (uVar6 != 0x3a) goto LAB_140170486;
              *(ulonglong *)(lVar2 + 0x28) = uVar3;
              pdb_14040eec0(&pbStack_90,lVar2);
              if (pbStack_90 != (byte *)0x0) {
                pbStack_58 = pbStack_90;
                pbStack_50 = (byte *)uStack_88;
                pdb_140404f50(&cStack_78);
                if (cStack_78 == '\x06') {
                  uVar4 = pdb_142d87040(CONCAT17(uStack_69,uStack_70));
                  *(undefined8 *)(param_1 + 8) = uVar4;
                  *param_1 = '\x06';
                }
                else {
                  *(ulonglong *)(param_1 + 0x10) = CONCAT17(uStack_61,uStack_68);
                  *(ulonglong *)(param_1 + 0x18) = CONCAT17(uStack_59,uStack_60);
                  *(ulonglong *)param_1 =
                       CONCAT17(uStack_71,CONCAT52(uStack_76,CONCAT11(cStack_77,cStack_78)));
                  *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_69,uStack_70);
                }
                if (pbStack_50 == (byte *)0x0) {
                  return param_1;
                }
                pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,1);
                return param_1;
              }
              goto LAB_140170163;
            }
            *(ulonglong *)(lVar2 + 0x28) = uVar3;
          } while (uVar3 != *(ulonglong *)(lVar2 + 0x20));
        }
        cStack_78 = '\x03';
LAB_14016ffe8:
        uStack_71 = 0;
        uStack_76 = 0;
        cStack_77 = 0;
        uStack_88 = pdb_142d84ef0(lVar2,&cStack_78);
LAB_140170163:
        *(ulonglong *)(param_1 + 8) = uStack_88;
        *param_1 = '\x06';
        return param_1;
      }
      uStack_a8 = CONCAT17(uStack_61,uStack_68);
      uStack_d0 = 0;
      uStack_c0 = 0;
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
      pbStack_58 = pbStack_b0;
      pbStack_50 = pbStack_b8;
      if (uVar3 < *(ulonglong *)(lVar2 + 0x20)) {
        do {
          uVar3 = uVar3 + 1;
          uVar6 = (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x18) + -1 + uVar3);
          if (0x3a < uVar6) {
LAB_1401704b0:
            pbStack_90 = (byte *)0x6;
            uVar4 = pdb_142d84ef0(lVar2,&pbStack_90);
            goto LAB_1401700b8;
          }
          if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
            if (uVar6 != 0x3a) goto LAB_1401704b0;
            *(ulonglong *)(lVar2 + 0x28) = uVar3;
            pdb_140405940(param_1,lVar2);
            if (*param_1 == '\x06') goto LAB_140170138;
            uStack_128 = *(undefined4 *)param_1;
            uStack_124 = *(undefined4 *)(param_1 + 4);
            uStack_120 = *(undefined4 *)(param_1 + 8);
            uStack_11c = *(undefined4 *)(param_1 + 0xc);
            uStack_118 = *(undefined4 *)(param_1 + 0x10);
            uStack_114 = *(undefined4 *)(param_1 + 0x14);
            uStack_110 = *(undefined4 *)(param_1 + 0x18);
            uStack_10c = *(undefined4 *)(param_1 + 0x1c);
            pdb_14057e810(&cStack_78,&uStack_d0,&pbStack_b8,&uStack_128);
            switch(cStack_78) {
            case '\0':
            case '\x01':
            case '\x02':
            case '\x06':
              break;
            case '\x03':
              if (CONCAT17(uStack_69,uStack_70) != 0) {
                pub_1406abac0((byte *)CONCAT17(uStack_61,uStack_68),CONCAT17(uStack_69,uStack_70),1)
                ;
              }
              break;
            case '\x04':
              pdb_1404c0820(&uStack_70);
              break;
            default:
              pdb_1404dfd20(&uStack_70);
            }
            goto LAB_1401701fa;
          }
          *(ulonglong *)(lVar2 + 0x28) = uVar3;
        } while (uVar3 != *(ulonglong *)(lVar2 + 0x20));
      }
      pbStack_90 = (byte *)0x3;
      uVar4 = pdb_142d84ef0(lVar2,&pbStack_90);
LAB_1401700b8:
      *(undefined8 *)(param_1 + 8) = uVar4;
      *param_1 = '\x06';
LAB_140170138:
      if (pbStack_50 != (byte *)0x0) {
        pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,1);
      }
      goto LAB_140170478;
    }
  }
  *(byte **)(param_1 + 8) = pbStack_b0;
  *param_1 = '\x06';
  return param_1;
LAB_1401701fa:
  pdb_140407d80(&pbStack_b8,&lStack_a0);
  uVar4 = uStack_a8;
  pbVar5 = pbStack_b0;
  if (pbStack_b8 != (byte *)0x8000000000000001) {
    if (SBORROW8(0,(longlong)pbStack_b8)) {
LAB_1401703d6:
      uStack_71 = (undefined1)uStack_d0;
      uStack_70 = (undefined7)((ulonglong)uStack_d0 >> 8);
      uStack_69 = (undefined1)uStack_c8;
      *param_1 = '\x05';
      *(ulonglong *)(param_1 + 1) =
           CONCAT17(uStack_71,CONCAT52(uStack_76,CONCAT11(cStack_77,cStack_78)));
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_69,uStack_70);
      *(undefined8 *)(param_1 + 0x10) = uStack_c8;
      *(undefined8 *)(param_1 + 0x18) = uStack_c0;
      return param_1;
    }
    pbStack_58 = pbStack_b0;
    uVar3 = *(ulonglong *)(lStack_a0 + 0x28);
    pbStack_50 = pbStack_b8;
    if (*(ulonglong *)(lStack_a0 + 0x20) <= uVar3) {
LAB_140170394:
      pbStack_90 = (byte *)0x3;
      pbVar5 = (byte *)pdb_142d84ef0(lStack_a0,&pbStack_90);
joined_r0x000140170462:
      if (pbStack_50 != (byte *)0x0) {
        pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,1);
      }
      goto LAB_140170471;
    }
    while( true ) {
      uVar3 = uVar3 + 1;
      uVar6 = (ulonglong)*(byte *)(*(longlong *)(lStack_a0 + 0x18) + -1 + uVar3);
      if (0x3a < uVar6) goto LAB_140170493;
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lStack_a0 + 0x28) = uVar3;
      if (uVar3 == *(ulonglong *)(lStack_a0 + 0x20)) goto LAB_140170394;
    }
    if (uVar6 != 0x3a) {
LAB_140170493:
      pbStack_90 = (byte *)0x6;
      pbVar5 = (byte *)pdb_142d84ef0(lStack_a0,&pbStack_90);
      goto joined_r0x000140170462;
    }
    *(ulonglong *)(lStack_a0 + 0x28) = uVar3;
    pdb_140405940(&cStack_78);
    if (cStack_78 == '\x06') {
      pbVar5 = (byte *)CONCAT17(uStack_69,uStack_70);
      goto joined_r0x000140170462;
    }
    uVar1 = CONCAT52(uStack_76,CONCAT11(cStack_77,cStack_78));
    if (SBORROW8(0,(longlong)pbStack_50)) goto LAB_1401703d6;
    pbVar5 = pbStack_58;
    if (pbStack_50 == (byte *)0x8000000000000001) goto LAB_140170471;
    pbStack_e8 = pbStack_50;
    pbStack_e0 = pbStack_58;
    uStack_d8 = uVar4;
    uStack_108 = (undefined4)uVar1;
    uStack_104 = (undefined4)(CONCAT17(uStack_71,uVar1) >> 0x20);
    uStack_100 = (undefined4)uStack_70;
    uStack_fc = (undefined4)(CONCAT17(uStack_69,uStack_70) >> 0x20);
    uStack_f8 = (undefined4)uStack_68;
    uStack_f4 = (undefined4)(CONCAT17(uStack_61,uStack_68) >> 0x20);
    uStack_f0 = (undefined4)uStack_60;
    uStack_ec = (undefined4)(CONCAT17(uStack_59,uStack_60) >> 0x20);
    uStack_148 = uStack_108;
    uStack_144 = uStack_104;
    uStack_140 = uStack_100;
    uStack_13c = uStack_fc;
    uStack_138 = uStack_f8;
    uStack_134 = uStack_f4;
    uStack_130 = uStack_f0;
    uStack_12c = uStack_ec;
    pdb_14057e810(&cStack_78,&uStack_d0,&pbStack_e8,&uStack_148);
    switch(cStack_78) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x06':
      break;
    case '\x03':
      if (CONCAT17(uStack_69,uStack_70) != 0) {
        pub_1406abac0((byte *)CONCAT17(uStack_61,uStack_68),CONCAT17(uStack_69,uStack_70),1);
      }
      break;
    case '\x04':
      pbStack_50 = (byte *)CONCAT17(uStack_61,uStack_68);
      pdb_1404be800(pbStack_50,CONCAT17(uStack_59,uStack_60));
      if (CONCAT17(uStack_69,uStack_70) != 0) {
        pub_1406abac0(pbStack_50,CONCAT17(uStack_69,uStack_70) << 5,8);
      }
      break;
    default:
      pdb_1404dfd20(&uStack_70);
    }
    goto LAB_1401701fa;
  }
LAB_140170471:
  *(byte **)(param_1 + 8) = pbVar5;
  *param_1 = '\x06';
LAB_140170478:
  pdb_1404dfd20(&uStack_d0);
  return param_1;
}

