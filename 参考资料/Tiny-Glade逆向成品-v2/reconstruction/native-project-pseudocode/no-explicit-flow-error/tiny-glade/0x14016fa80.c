// VA 0x14016fa80, PDB extent 1144 bytes
// serde_json::value::de::impl$0::deserialize::impl$0::visit_map<ref_mut$<serde::private::de::content::MapRefDeserializer<serde_json::error::Error> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::value::de::impl$0::deserialize::impl$0::visit_map<ref_mut$<serde::private::de::content::MapRefDeserializer<serde_json::error::Error>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1144 */

char * pdb_14016fa80(char *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
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
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  char cStack_90;
  undefined6 uStack_8f;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  if (lVar1 == param_2[1]) {
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
  }
  else {
    *param_2 = lVar1 + 0x40;
    lVar1 = lVar1 + 0x20;
    param_2[3] = param_2[3] + 1;
    param_2[2] = lVar1;
    pdb_1404564b0(&cStack_90);
    pbStack_b0 = (byte *)CONCAT17(uStack_89,CONCAT61(uStack_8f,cStack_90));
    pbStack_a8 = (byte *)CONCAT17(uStack_81,uStack_88);
    if (pbStack_b0 == (byte *)0x8000000000000001) {
      *(byte **)(param_1 + 8) = pbStack_a8;
      *param_1 = '\x06';
    }
    else if (SBORROW8(0,(longlong)pbStack_b0)) {
      param_2[2] = 0;
      pdb_1404563b0(&cStack_90,lVar1);
      pbStack_58 = (byte *)CONCAT17(uStack_89,CONCAT61(uStack_8f,cStack_90));
      if (pbStack_58 == (byte *)0x0) {
        *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_81,uStack_88);
        *param_1 = '\x06';
      }
      else {
        pbStack_50 = (byte *)CONCAT17(uStack_81,uStack_88);
        pdb_140404f50(&cStack_90);
        if (cStack_90 == '\x06') {
          uVar2 = pdb_142d87040(CONCAT17(uStack_81,uStack_88));
          *(undefined8 *)(param_1 + 8) = uVar2;
          *param_1 = '\x06';
        }
        else {
          *(ulonglong *)(param_1 + 0x10) = CONCAT17(uStack_79,uStack_80);
          *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_74,uStack_78);
          *(ulonglong *)param_1 = CONCAT17(uStack_89,CONCAT61(uStack_8f,cStack_90));
          *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_81,uStack_88);
        }
        if (pbStack_50 != (byte *)0x0) {
          pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,1);
        }
      }
    }
    else {
      pbStack_a0 = (byte *)CONCAT17(uStack_79,uStack_80);
      uStack_c8 = 0;
      uStack_b8 = 0;
      param_2[2] = 0;
      pbStack_58 = pbStack_a8;
      pbStack_50 = pbStack_b0;
      pdb_140455c70(param_1,lVar1);
      if (*param_1 == '\x06') {
        if (pbStack_50 != (byte *)0x0) {
          pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,1);
        }
LAB_14016fd36:
        pdb_1404dfd20(&uStack_c8);
      }
      else {
        uStack_108 = *(undefined4 *)param_1;
        uStack_104 = *(undefined4 *)(param_1 + 4);
        uStack_100 = *(undefined4 *)(param_1 + 8);
        uStack_fc = *(undefined4 *)(param_1 + 0xc);
        uStack_f8 = *(undefined4 *)(param_1 + 0x10);
        uStack_f4 = *(undefined4 *)(param_1 + 0x14);
        uStack_f0 = *(undefined4 *)(param_1 + 0x18);
        uStack_ec = *(undefined4 *)(param_1 + 0x1c);
        pdb_14057e810(&cStack_90,&uStack_c8,&pbStack_b0,&uStack_108);
        switch(cStack_90) {
        case '\0':
        case '\x01':
        case '\x02':
        case '\x06':
          break;
        case '\x03':
          if (CONCAT17(uStack_81,uStack_88) != 0) {
            pub_1406abac0((byte *)CONCAT17(uStack_79,uStack_80),CONCAT17(uStack_81,uStack_88),1);
          }
          break;
        case '\x04':
          pdb_1404c0820(&uStack_88);
          break;
        default:
          pdb_1404dfd20(&uStack_88);
        }
LAB_14016fc30:
        pdb_14043e560(&cStack_90,param_2);
        lVar1 = CONCAT17(uStack_89,CONCAT61(uStack_8f,cStack_90));
        if (!SBORROW8(0,lVar1)) {
          if (lVar1 == -0x7fffffffffffffff) {
            *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_81,uStack_88);
            *param_1 = '\x06';
            goto LAB_14016fd36;
          }
          uStack_118 = uStack_68;
          uStack_114 = uStack_64;
          uStack_110 = uStack_60;
          uStack_10c = uStack_5c;
          uStack_128 = uStack_78;
          uStack_124 = uStack_74;
          uStack_120 = uStack_70;
          uStack_11c = uStack_6c;
          pdb_14057e810(&pbStack_b0,&uStack_c8,auStack_e0,&uStack_128);
          switch((ulonglong)pbStack_b0 & 0xff) {
          case 0:
          case 1:
          case 2:
          case 6:
            break;
          case 3:
            if (pbStack_a8 != (byte *)0x0) {
              pub_1406abac0(pbStack_a0,(ulonglong)pbStack_a8,1);
            }
            break;
          case 4:
            pbStack_50 = pbStack_a0;
            pdb_1404be800(pbStack_a0,uStack_98);
            if (pbStack_a8 != (byte *)0x0) {
              pub_1406abac0(pbStack_50,(longlong)pbStack_a8 << 5,8);
            }
            break;
          default:
            pdb_1404dfd20(&pbStack_a8);
          }
          goto LAB_14016fc30;
        }
        uStack_89 = (undefined1)uStack_c8;
        uStack_88 = (undefined7)((ulonglong)uStack_c8 >> 8);
        uStack_81 = (undefined1)uStack_c0;
        *param_1 = '\x05';
        *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_89,CONCAT61(uStack_8f,cStack_90));
        *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_81,uStack_88);
        *(undefined8 *)(param_1 + 0x10) = uStack_c0;
        *(undefined8 *)(param_1 + 0x18) = uStack_b8;
      }
    }
  }
  return param_1;
}

