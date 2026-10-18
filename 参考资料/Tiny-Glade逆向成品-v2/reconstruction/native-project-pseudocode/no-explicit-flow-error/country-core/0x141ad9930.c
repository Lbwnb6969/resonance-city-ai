// VA 0x141ad9930, PDB extent 1010 bytes
// country_core::resources::walls::inner_wall_state::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_wall_state::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 1010 */

undefined1 * pdb_141ad9930(undefined1 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  longlong lStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  char cStack_73;
  char cStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  fVar1 = *(float *)(param_2 + 0x58);
  fVar2 = *(float *)(param_2 + 0x60);
  cVar3 = *(char *)(param_2 + 0x68);
  cVar4 = *(char *)(param_2 + 0x6e);
  cVar5 = *(char *)(param_2 + 0x69);
  cVar6 = *(char *)(param_2 + 0x6a);
  cVar7 = *(char *)(param_2 + 0x6b);
  cStack_73 = *(char *)(param_2 + 0x6c);
  cStack_72 = *(char *)(param_2 + 0x6d);
  lStack_a8 = -0x8000000000000000;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_71 = 1;
  lStack_d8 = param_2;
  lVar8 = pdb_141c05d30(&lStack_a8,&UNK_143388e29,5,&lStack_d8);
  if (lVar8 == 0) {
    uStack_71 = 1;
    lVar8 = pdb_141c06050(&lStack_a8,&UNK_143388e2e,6,param_2 + 0x54);
    if (lVar8 == 0) {
      uStack_71 = 1;
      lVar8 = pdb_141c07b90(&lStack_a8,&UNK_143388e34,0xb,param_2 + 0x38);
      if (lVar8 == 0) {
        if ((fVar1 != 0.0) || (NAN(fVar1))) {
          uStack_71 = 1;
          lVar8 = pdb_141c06050(&lStack_a8,&UNK_143388e3f,9,param_2 + 0x58);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if ((*(float *)(param_2 + 0x5c) != _DAT_14301920c) ||
           (NAN(*(float *)(param_2 + 0x5c)) || NAN(_DAT_14301920c))) {
          uStack_71 = 1;
          lVar8 = pdb_141c06050(&lStack_a8,&UNK_143388e48,0xb);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if (cVar3 != '\0') {
          uStack_71 = 1;
          lVar8 = pdb_141c08d60(&lStack_a8,&UNK_143388e53,7,param_2 + 0x68);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if (cVar4 != '\0') {
          uStack_71 = 1;
          lVar8 = pdb_141c01840(&lStack_a8,&UNK_143388e5a,5,param_2 + 0x6e);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if (cVar5 != '\0') {
          uStack_71 = 1;
          lVar8 = pdb_141c09160(&lStack_a8,&UNK_143388e5f,8,param_2 + 0x69);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if (cVar6 != '\0') {
          uStack_71 = 1;
          lVar8 = pdb_141c038f0(&lStack_a8,&UNK_143388e67,0xc,param_2 + 0x6a);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if (*(char *)(param_2 + 0x6f) != '\0') {
          uStack_71 = 1;
          lVar8 = pdb_141c04d30(&lStack_a8,&UNK_143388e73,0xf);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if (cVar7 != '\0') {
          uStack_71 = 1;
          lVar8 = pdb_141c086f0(&lStack_a8,&UNK_143388e82,0xb,param_2 + 0x6b);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if ((fVar2 != 0.0) || (NAN(fVar2))) {
          uStack_71 = 1;
          lVar8 = pdb_141c05af0(&lStack_a8,&UNK_143388e8d,0xc,param_2 + 0x60);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if (cStack_73 != '\0') {
          uStack_71 = 1;
          lVar8 = pdb_141c00f90(&lStack_a8,&UNK_143388e99,0xc,param_2 + 0x6c);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        if (cStack_72 != '\0') {
          uStack_71 = 1;
          lVar8 = pdb_141c06370(&lStack_a8,&UNK_143388ea5,0x10,param_2 + 0x6d);
          if (lVar8 != 0) goto LAB_141ad9a1a;
        }
        uStack_71 = 1;
        lVar8 = pdb_141c06050(&lStack_a8,&UNK_143388eb5,0x17,param_2 + 100);
        if (lVar8 == 0) {
          uStack_b8 = uStack_88;
          uStack_b4 = uStack_84;
          uStack_b0 = (undefined4)uStack_80;
          uStack_ac = uStack_80._4_4_;
          uStack_c8 = uStack_98;
          uStack_c4 = uStack_94;
          uStack_c0 = (undefined4)uStack_90;
          uStack_bc = uStack_90._4_4_;
          lStack_d8 = lStack_a8;
          uStack_d0 = uStack_a0;
          uStack_cc = uStack_9c;
          uStack_71 = 0;
          pdb_140ddcdc0(param_1,&lStack_d8);
          return param_1;
        }
      }
    }
  }
LAB_141ad9a1a:
  *(longlong *)(param_1 + 8) = lVar8;
  *param_1 = 6;
  pdb_141adc130(&lStack_a8);
  return param_1;
}

