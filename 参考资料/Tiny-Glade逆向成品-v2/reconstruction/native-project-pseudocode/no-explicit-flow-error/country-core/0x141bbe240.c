// VA 0x141bbe240, PDB extent 1207 bytes
// serde_json::value::de::impl$3::deserialize_enum<country_core::resources::walls::inner_wall_state::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::value::de::impl$3::deserialize_enum<country_core::resources::walls::inner_wall_state::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1207 */

undefined1 * pdb_141bbe240(undefined1 *param_1,longlong *param_2)

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
  longlong lStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  ulonglong auStack_118 [3];
  longlong lStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  char cStack_d0;
  undefined7 uStack_cf;
  longlong lStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong uStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  byte *pbStack_48;
  ulonglong uStack_40;
  byte *pbStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  auStack_118[2] = *param_2;
  lStack_100 = param_2[1];
  auStack_118[0] = (ulonglong)(auStack_118[2] != 0);
  lStack_d8 = 0;
  if (auStack_118[2] != 0) {
    lStack_d8 = param_2[2];
  }
  auStack_118[1] = 0;
  uStack_f0 = 0;
  uStack_f8 = auStack_118[0];
  lStack_e8 = auStack_118[2];
  lStack_e0 = lStack_100;
  pdb_14192c4b0(&uStack_88,auStack_118);
  if (uStack_88 != 0) {
    uStack_40 = *(ulonglong *)(uStack_88 + 0x168 + lStack_78 * 0x18);
    if (!SBORROW8(0,uStack_40)) {
      pbStack_48 = *(byte **)(uStack_88 + 0x170 + lStack_78 * 0x18);
      lVar5 = *(longlong *)(uStack_88 + 0x178 + lStack_78 * 0x18);
      puVar1 = (uint *)(uStack_88 + lStack_78 * 0x20);
      uStack_a8 = *puVar1;
      uStack_a4 = puVar1[1];
      uStack_a0 = puVar1[2];
      uStack_9c = puVar1[3];
      puVar2 = (undefined4 *)(uStack_88 + 0x10 + lStack_78 * 0x20);
      uStack_98 = *puVar2;
      uStack_94 = puVar2[1];
      uStack_90 = puVar2[2];
      uStack_8c = puVar2[3];
      uStack_29 = 1;
      pdb_14192c4b0(&cStack_d0,auStack_118);
      lVar6 = CONCAT71(uStack_cf,cStack_d0);
      if (lVar6 != 0) {
        lVar7 = CONCAT44(uStack_bc,uStack_c0);
        lStack_78 = *(longlong *)(lVar6 + 0x178 + lVar7 * 0x18);
        puVar4 = (ulonglong *)(lVar6 + 0x168 + lVar7 * 0x18);
        uStack_88 = *puVar4;
        pbStack_80 = (byte *)puVar4[1];
        puVar1 = (uint *)(lVar6 + lVar7 * 0x20);
        uStack_70 = *puVar1;
        uStack_6c = puVar1[1];
        uStack_68 = puVar1[2];
        uStack_64 = puVar1[3];
        puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar7 * 0x20);
        uStack_60 = (byte *)*puVar3;
        uStack_58 = puVar3[1];
        if (!SBORROW8(0,uStack_88)) {
          if (uStack_88 != 0) {
            pub_1406abac0(pbStack_80,uStack_88,1);
          }
          uVar8 = uStack_70 & 0xff;
          if (2 < uVar8) {
            if (uVar8 == 3) {
              uVar11 = CONCAT44(uStack_64,uStack_68);
              if (uVar11 != 0) {
                uVar12 = 1;
                pbVar10 = uStack_60;
LAB_141bbe494:
                pub_1406abac0(pbVar10,uVar11,uVar12);
              }
            }
            else if (uVar8 == 4) {
              pbStack_38 = uStack_60;
              pdb_14098ae50(uStack_60,uStack_58);
              if (CONCAT44(uStack_64,uStack_68) != 0) {
                uVar11 = CONCAT44(uStack_64,uStack_68) << 5;
                uVar12 = 8;
                pbVar10 = pbStack_38;
                goto LAB_141bbe494;
              }
            }
            else {
              uStack_29 = 1;
              pdb_1409a45e0(&uStack_68);
            }
          }
          uStack_88 = CONCAT71(uStack_88._1_7_,0xb);
          uStack_29 = 1;
          uVar9 = pdb_142db9150(&uStack_88,&UNK_143398e70,&UNK_143398e38);
          *(undefined8 *)(param_1 + 8) = uVar9;
          *param_1 = 1;
          uVar8 = uStack_a8 & 0xff;
          if (2 < uVar8) {
            if (uVar8 == 3) {
              uVar11 = CONCAT44(uStack_9c,uStack_a0);
              if (uVar11 != 0) {
                pbVar10 = (byte *)CONCAT44(uStack_94,uStack_98);
                uVar12 = 1;
LAB_141bbe52a:
                pub_1406abac0(pbVar10,uVar11,uVar12);
              }
            }
            else if (uVar8 == 4) {
              pbStack_38 = (byte *)CONCAT44(uStack_94,uStack_98);
              pdb_14098ae50(pbStack_38,CONCAT44(uStack_8c,uStack_90));
              if (CONCAT44(uStack_9c,uStack_a0) != 0) {
                uVar11 = CONCAT44(uStack_9c,uStack_a0) << 5;
                uVar12 = 8;
                pbVar10 = pbStack_38;
                goto LAB_141bbe52a;
              }
            }
            else {
              uStack_2a = 1;
              pdb_1409a45e0(&uStack_a0);
            }
          }
          if (uStack_40 != 0) {
            pub_1406abac0(pbStack_48,uStack_40,1);
          }
          goto LAB_141bbe560;
        }
      }
      uStack_88 = uStack_40;
      pbStack_80 = pbStack_48;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      uStack_64 = uStack_9c;
      uStack_60 = (byte *)CONCAT44(uStack_94,uStack_98);
      uStack_58 = CONCAT44(uStack_8c,uStack_90);
      uStack_29 = 0;
      lStack_78 = lVar5;
      pdb_141be7060(&cStack_d0,&uStack_88);
      if (cStack_d0 != '\x02') {
        uStack_120 = uStack_b0;
        uStack_130 = uStack_c0;
        uStack_12c = uStack_bc;
        uStack_128 = uStack_b8;
        uStack_124 = uStack_b4;
        lStack_138 = lStack_c8;
        uStack_29 = 0;
        lStack_c8 = pdb_140de26b0(&lStack_138);
        if (lStack_c8 == 0) {
          param_1[1] = cStack_d0;
          *param_1 = 0;
          goto LAB_141bbe560;
        }
      }
      *(longlong *)(param_1 + 8) = lStack_c8;
      *param_1 = 1;
      goto LAB_141bbe560;
    }
  }
  uStack_88 = CONCAT71(uStack_88._1_7_,0xb);
  uVar9 = pdb_142db9150(&uStack_88,&UNK_143398e70,&UNK_143398e38);
  *(undefined8 *)(param_1 + 8) = uVar9;
  *param_1 = 1;
LAB_141bbe560:
  pdb_1409880a0(auStack_118);
  return param_1;
}

