// VA 0x141bbf4a0, PDB extent 1013 bytes
// serde_json::value::de::impl$3::deserialize_enum<country_core::resources::history::decorator_edit::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::value::de::impl$3::deserialize_enum<country_core::resources::history::decorator_edit::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1013 */

undefined8 * pdb_141bbf4a0(undefined8 *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong alStack_f8 [2];
  longlong lStack_e8;
  ulonglong auStack_e0 [3];
  longlong lStack_c8;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong uStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  byte *pbStack_40;
  ulonglong uStack_38;
  byte *pbStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  auStack_e0[2] = *param_2;
  lStack_c8 = param_2[1];
  auStack_e0[0] = (ulonglong)(auStack_e0[2] != 0);
  lStack_a0 = 0;
  if (auStack_e0[2] != 0) {
    lStack_a0 = param_2[2];
  }
  auStack_e0[1] = 0;
  uStack_b8 = 0;
  uStack_c0 = auStack_e0[0];
  lStack_b0 = auStack_e0[2];
  lStack_a8 = lStack_c8;
  pdb_14192c4b0(&uStack_78,auStack_e0);
  if (uStack_78 != 0) {
    uStack_38 = *(ulonglong *)(uStack_78 + 0x168 + lStack_68 * 0x18);
    if (!SBORROW8(0,uStack_38)) {
      pbStack_40 = *(byte **)(uStack_78 + 0x170 + lStack_68 * 0x18);
      lVar5 = *(longlong *)(uStack_78 + 0x178 + lStack_68 * 0x18);
      puVar1 = (uint *)(uStack_78 + lStack_68 * 0x20);
      uStack_98 = *puVar1;
      uStack_94 = puVar1[1];
      uStack_90 = puVar1[2];
      uStack_8c = puVar1[3];
      puVar2 = (undefined4 *)(uStack_78 + 0x10 + lStack_68 * 0x20);
      uStack_88 = *puVar2;
      uStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      uStack_21 = 1;
      pdb_14192c4b0(alStack_f8,auStack_e0);
      if (alStack_f8[0] != 0) {
        lStack_68 = *(longlong *)(alStack_f8[0] + 0x178 + lStack_e8 * 0x18);
        puVar4 = (ulonglong *)(alStack_f8[0] + 0x168 + lStack_e8 * 0x18);
        uStack_78 = *puVar4;
        pbStack_70 = (byte *)puVar4[1];
        puVar1 = (uint *)(alStack_f8[0] + lStack_e8 * 0x20);
        uStack_60 = *puVar1;
        uStack_5c = puVar1[1];
        uStack_58 = puVar1[2];
        uStack_54 = puVar1[3];
        puVar3 = (undefined8 *)(alStack_f8[0] + 0x10 + lStack_e8 * 0x20);
        uStack_50 = (byte *)*puVar3;
        uStack_48 = puVar3[1];
        if (!SBORROW8(0,uStack_78)) {
          if (uStack_78 != 0) {
            pub_1406abac0(pbStack_70,uStack_78,1);
          }
          uVar6 = uStack_60 & 0xff;
          if (2 < uVar6) {
            if (uVar6 == 3) {
              uVar9 = CONCAT44(uStack_54,uStack_58);
              if (uVar9 != 0) {
                uVar10 = 1;
                pbVar8 = uStack_50;
LAB_141bbf685:
                pub_1406abac0(pbVar8,uVar9,uVar10);
              }
            }
            else if (uVar6 == 4) {
              pbStack_30 = uStack_50;
              pdb_14098ae50(uStack_50,uStack_48);
              if (CONCAT44(uStack_54,uStack_58) != 0) {
                uVar9 = CONCAT44(uStack_54,uStack_58) << 5;
                uVar10 = 8;
                pbVar8 = pbStack_30;
                goto LAB_141bbf685;
              }
            }
            else {
              uStack_21 = 1;
              pdb_1409a45e0(&uStack_58);
            }
          }
          uStack_78 = CONCAT71(uStack_78._1_7_,0xb);
          uStack_21 = 1;
          uVar7 = pdb_142db9150(&uStack_78,&UNK_143398e70,&UNK_143398e38);
          param_1[1] = uVar7;
          *param_1 = 6;
          uVar6 = uStack_98 & 0xff;
          if (2 < uVar6) {
            if (uVar6 == 3) {
              uVar9 = CONCAT44(uStack_8c,uStack_90);
              if (uVar9 != 0) {
                pbVar8 = (byte *)CONCAT44(uStack_84,uStack_88);
                uVar10 = 1;
LAB_141bbf713:
                pub_1406abac0(pbVar8,uVar9,uVar10);
              }
            }
            else if (uVar6 == 4) {
              pbStack_30 = (byte *)CONCAT44(uStack_84,uStack_88);
              pdb_14098ae50(pbStack_30,CONCAT44(uStack_7c,uStack_80));
              if (CONCAT44(uStack_8c,uStack_90) != 0) {
                uVar9 = CONCAT44(uStack_8c,uStack_90) << 5;
                uVar10 = 8;
                pbVar8 = pbStack_30;
                goto LAB_141bbf713;
              }
            }
            else {
              uStack_22 = 1;
              pdb_1409a45e0(&uStack_90);
            }
          }
          if (uStack_38 != 0) {
            pub_1406abac0(pbStack_40,uStack_38,1);
          }
          goto LAB_141bbf740;
        }
      }
      uStack_78 = uStack_38;
      pbStack_70 = pbStack_40;
      uStack_60 = uStack_98;
      uStack_5c = uStack_94;
      uStack_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_50 = (byte *)CONCAT44(uStack_84,uStack_88);
      uStack_48 = CONCAT44(uStack_7c,uStack_80);
      uStack_21 = 0;
      lStack_68 = lVar5;
      pdb_140bbeed0(param_1,&uStack_78);
      goto LAB_141bbf740;
    }
  }
  uStack_78 = CONCAT71(uStack_78._1_7_,0xb);
  uVar7 = pdb_142db9150(&uStack_78,&UNK_143398e70,&UNK_143398e38);
  param_1[1] = uVar7;
  *param_1 = 6;
LAB_141bbf740:
  pdb_1409880a0(auStack_e0);
  return param_1;
}

