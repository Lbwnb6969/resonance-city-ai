// VA 0x141bc4210, PDB extent 1301 bytes
// serde_json::value::de::impl$3::deserialize_enum<country_core::resources::history::wall_compound_edit::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::value::de::impl$3::deserialize_enum<country_core::resources::history::wall_compound_edit::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1301 */

undefined4 * pdb_141bc4210(undefined4 *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong auStack_128 [3];
  longlong lStack_110;
  ulonglong uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  char cStack_c0;
  undefined7 uStack_bf;
  longlong lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
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
  auStack_128[2] = *param_2;
  lStack_110 = param_2[1];
  auStack_128[0] = (ulonglong)(auStack_128[2] != 0);
  lStack_e8 = 0;
  if (auStack_128[2] != 0) {
    lStack_e8 = param_2[2];
  }
  auStack_128[1] = 0;
  uStack_100 = 0;
  uStack_108 = auStack_128[0];
  lStack_f8 = auStack_128[2];
  lStack_f0 = lStack_110;
  pdb_14192c4b0(&uStack_78,auStack_128);
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
      pdb_14192c4b0(&cStack_c0,auStack_128);
      lVar6 = CONCAT71(uStack_bf,cStack_c0);
      if (lVar6 != 0) {
        lVar7 = CONCAT44(uStack_ac,uStack_b0);
        lStack_68 = *(longlong *)(lVar6 + 0x178 + lVar7 * 0x18);
        puVar4 = (ulonglong *)(lVar6 + 0x168 + lVar7 * 0x18);
        uStack_78 = *puVar4;
        pbStack_70 = (byte *)puVar4[1];
        puVar1 = (uint *)(lVar6 + lVar7 * 0x20);
        uStack_60 = *puVar1;
        uStack_5c = puVar1[1];
        uStack_58 = puVar1[2];
        uStack_54 = puVar1[3];
        puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar7 * 0x20);
        uStack_50 = (byte *)*puVar3;
        uStack_48 = puVar3[1];
        if (!SBORROW8(0,uStack_78)) {
          if (uStack_78 != 0) {
            pub_1406abac0(pbStack_70,uStack_78,1);
          }
          uVar8 = uStack_60 & 0xff;
          if (2 < uVar8) {
            if (uVar8 == 3) {
              uVar11 = CONCAT44(uStack_54,uStack_58);
              if (uVar11 != 0) {
                uVar12 = 1;
                pbVar10 = uStack_50;
LAB_141bc44da:
                pub_1406abac0(pbVar10,uVar11,uVar12);
              }
            }
            else if (uVar8 == 4) {
              pbStack_30 = uStack_50;
              pdb_14098ae50(uStack_50,uStack_48);
              if (CONCAT44(uStack_54,uStack_58) != 0) {
                uVar11 = CONCAT44(uStack_54,uStack_58) << 5;
                uVar12 = 8;
                pbVar10 = pbStack_30;
                goto LAB_141bc44da;
              }
            }
            else {
              uStack_21 = 1;
              pdb_1409a45e0(&uStack_58);
            }
          }
          uStack_78 = CONCAT71(uStack_78._1_7_,0xb);
          uStack_21 = 1;
          uVar9 = pdb_142db9150(&uStack_78,&UNK_143398e70,&UNK_143398e38);
          *(undefined8 *)(param_1 + 2) = uVar9;
          *param_1 = 1;
          uVar8 = uStack_98 & 0xff;
          if (2 < uVar8) {
            if (uVar8 == 3) {
              uVar11 = CONCAT44(uStack_8c,uStack_90);
              if (uVar11 != 0) {
                pbVar10 = (byte *)CONCAT44(uStack_84,uStack_88);
                uVar12 = 1;
LAB_141bc4573:
                pub_1406abac0(pbVar10,uVar11,uVar12);
              }
            }
            else if (uVar8 == 4) {
              pbStack_30 = (byte *)CONCAT44(uStack_84,uStack_88);
              pdb_14098ae50(pbStack_30,CONCAT44(uStack_7c,uStack_80));
              if (CONCAT44(uStack_8c,uStack_90) != 0) {
                uVar11 = CONCAT44(uStack_8c,uStack_90) << 5;
                uVar12 = 8;
                pbVar10 = pbStack_30;
                goto LAB_141bc4573;
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
          goto LAB_141bc45a9;
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
      pdb_141be7d90(&cStack_c0,&uStack_78);
      if (cStack_c0 != '\x03') {
        uStack_c8 = uStack_a0;
        uStack_d8 = uStack_b0;
        uStack_d4 = uStack_ac;
        uStack_d0 = uStack_a8;
        uStack_cc = uStack_a4;
        lStack_e0 = lStack_b8;
        if (cStack_c0 == '\0') {
          uStack_21 = 0;
          pdb_141beafc0(param_1,&lStack_e0,&UNK_14335ae48,2);
          goto LAB_141bc45a9;
        }
        if (cStack_c0 == '\x01') {
          uStack_21 = 0;
          pdb_141be9120(param_1,&lStack_e0,&UNK_14335ae48,2);
          goto LAB_141bc45a9;
        }
        uStack_21 = 0;
        lStack_b8 = pdb_140de26b0(&lStack_e0);
        if (lStack_b8 == 0) {
          param_1[1] = 2;
          *param_1 = 0;
          goto LAB_141bc45a9;
        }
      }
      *(longlong *)(param_1 + 2) = lStack_b8;
      *param_1 = 1;
      goto LAB_141bc45a9;
    }
  }
  uStack_78 = CONCAT71(uStack_78._1_7_,0xb);
  uVar9 = pdb_142db9150(&uStack_78,&UNK_143398e70,&UNK_143398e38);
  *(undefined8 *)(param_1 + 2) = uVar9;
  *param_1 = 1;
LAB_141bc45a9:
  pdb_1409880a0(auStack_128);
  return param_1;
}

