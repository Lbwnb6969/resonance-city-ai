// VA 0x1403dc0f0, PDB extent 668 bytes
// country_core::resources::roofs::roof_shape::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::roofs::roof_shape::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/roofs/roof_shape.rs
   Extent: 668 */

undefined1 * pdb_1403dc0f0(undefined1 *param_1,char *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
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
  if (*param_2 == '\0') {
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(8,1);
    if (pbVar3 == (byte *)0x0) {
LAB_1403dc342:
      pdb_142dc7e2a(1,8);
      pcVar1 = (code *)swi(3);
      puVar5 = (undefined1 *)(*pcVar1)();
      return puVar5;
    }
    pbVar3[0] = 0x4d;
    pbVar3[1] = 0x61;
    pbVar3[2] = 0x74;
    pbVar3[3] = 99;
    pbVar3[4] = 0x68;
    pbVar3[5] = 0x69;
    pbVar3[6] = 0x6e;
    pbVar3[7] = 0x67;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 8;
    *(byte **)(param_1 + 0x10) = pbVar3;
    *(undefined8 *)(param_1 + 0x18) = 8;
  }
  else if (*param_2 == '\x01') {
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(0x11,1);
    uVar2 = _UNK_142f50439;
    if (pbVar3 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x11);
      goto LAB_1403dc342;
    }
    *(undefined8 *)pbVar3 = _DAT_142f50431;
    *(undefined8 *)(pbVar3 + 8) = uVar2;
    pbVar3[0x10] = 0x79;
    *param_1 = 3;
    *(undefined8 *)(param_1 + 8) = 0x11;
    *(byte **)(param_1 + 0x10) = pbVar3;
    *(undefined8 *)(param_1 + 0x18) = 0x11;
  }
  else {
    pdb_140ddcab0(&uStack_a8,&UNK_142f5041c,0xd,2,&UNK_142f50442,8,3);
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
      lVar4 = pdb_1403bc360(&uStack_58,&UNK_142f5044a,8,param_2 + 4);
      if (lVar4 == 0) {
        uStack_21 = 1;
        lVar4 = pdb_1403bc660(&uStack_58,&UNK_142f50452,8,param_2 + 1);
        if (lVar4 == 0) {
          uStack_21 = 1;
          lVar4 = pdb_1403bc360(&uStack_58,&UNK_142f5045a,10,param_2 + 8);
          if (lVar4 == 0) {
            uStack_88 = CONCAT44(uStack_34,uStack_38);
            uStack_80 = CONCAT44(uStack_2c,uStack_30);
            uStack_98 = CONCAT44(uStack_44,uStack_48);
            uStack_90 = CONCAT44(uStack_3c,uStack_40);
            uStack_a8 = uStack_58;
            pbStack_a0 = pbStack_50;
            uStack_21 = 0;
            pdb_140ddc650(param_1,&uStack_a8);
            return param_1;
          }
        }
      }
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
      pdb_1404a0530(&uStack_a8);
    }
  }
  return param_1;
}

