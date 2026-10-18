// VA 0x1417bdbd0, PDB extent 588 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 588 */

undefined1 * pdb_1417bdbd0(undefined1 *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  iVar2 = 2;
  if (1 < *param_2) {
    iVar2 = *param_2 - 2;
  }
  if (iVar2 == 0) {
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(2,1);
    if (pbVar3 == (byte *)0x0) {
LAB_1417bddd3:
      pdb_142dc7e2a(1,2);
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined1 *)(*pcVar1)();
      return puVar5;
    }
    pbVar3[0] = 0x4e;
    pbVar3[1] = 0x6f;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 2;
    *(byte **)(param_1 + 0x10) = pbVar3;
    *(undefined8 *)(param_1 + 0x18) = 2;
  }
  else if (iVar2 == 1) {
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(3,1);
    if (pbVar3 == (byte *)0x0) {
      pdb_142dc7e2a(1,3);
      goto LAB_1417bddd3;
    }
    pbVar3[2] = 0x73;
    pbVar3[0] = 0x59;
    pbVar3[1] = 0x65;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 3;
    *(byte **)(param_1 + 0x10) = pbVar3;
    *(undefined8 *)(param_1 + 0x18) = 3;
  }
  else {
    pdb_140ddcab0(&uStack_a8,&UNK_143336870,10,2,&UNK_14333687f,0xc,1);
    if (SBORROW8(0,uStack_a8)) {
      *(byte **)(param_1 + 8) = pbStack_a0;
      *param_1 = 6;
    }
    else {
      uStack_38 = (undefined4)uStack_88;
      uStack_34 = uStack_88._4_4_;
      uStack_30 = (undefined4)uStack_80;
      uStack_2c = uStack_80._4_4_;
      uStack_48 = (undefined4)uStack_98;
      uStack_44 = uStack_98._4_4_;
      uStack_40 = (undefined4)uStack_90;
      uStack_3c = uStack_90._4_4_;
      uStack_58 = uStack_a8;
      pbStack_50 = pbStack_a0;
      uStack_21 = 1;
      lVar4 = pdb_141bfab10(&uStack_58,&UNK_14333688b,6,param_2);
      if (lVar4 == 0) {
        uStack_88 = CONCAT44(uStack_34,uStack_38);
        uStack_80 = CONCAT44(uStack_2c,uStack_30);
        uStack_98 = CONCAT44(uStack_44,uStack_48);
        uStack_90 = CONCAT44(uStack_3c,uStack_40);
        uStack_a8 = uStack_58;
        pbStack_a0 = pbStack_50;
        uStack_21 = 0;
        pdb_140ddc650(param_1,&uStack_a8);
      }
      else {
        *(longlong *)(param_1 + 8) = lVar4;
        *param_1 = 6;
        if (uStack_58 != 0) {
          pub_1406abac0(pbStack_50,uStack_58,1);
        }
        lVar4 = CONCAT44(uStack_3c,uStack_40);
        if (lVar4 == 0) {
          uStack_68 = 0;
        }
        else {
          uStack_90 = CONCAT44(uStack_34,uStack_38);
          uStack_68 = CONCAT44(uStack_2c,uStack_30);
          pbStack_a0 = (byte *)0x0;
          uStack_80 = 0;
          uStack_98 = lVar4;
          lStack_78 = lVar4;
          uStack_70 = uStack_90;
        }
        uStack_a8 = (ulonglong)(lVar4 != 0);
        uStack_88 = uStack_a8;
        pdb_14096e700(&uStack_a8);
      }
    }
  }
  return param_1;
}

