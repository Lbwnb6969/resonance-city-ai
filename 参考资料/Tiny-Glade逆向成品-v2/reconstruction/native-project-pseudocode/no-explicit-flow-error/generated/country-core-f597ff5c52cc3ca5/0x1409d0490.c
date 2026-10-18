// VA 0x1409d0490, PDB extent 963 bytes
// country_core::shader::nani::cull_and_bucket_smoke::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::nani::cull_and_bucket_smoke::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 963 */

longlong * pdb_1409d0490(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lStack_60 = 0;
  lStack_58 = 8;
  lStack_50 = 0;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(7,1);
  if (pbVar4 == (byte *)0x0) {
    pdb_142dc7e2a(1,7);
    goto LAB_1409d0717;
  }
  pbVar4[3] = 0x70;
  pbVar4[4] = 0x61;
  pbVar4[5] = 0x73;
  pbVar4[6] = 0x73;
  pbVar4[0] = 0x6f;
  pbVar4[1] = 99;
  pbVar4[2] = 0x5f;
  pbVar4[3] = 0x70;
  puVar7 = &uStack_90;
  pbStack_48 = pbVar4;
  uVar5 = pdb_140f679c0(*(undefined4 *)(param_2 + 0x70),puVar7,10);
  if ((longlong)puVar7 < 0) {
    uVar8 = 0;
LAB_1409d051b:
    pdb_142dc7e2a(uVar8,puVar7);
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      pbVar4 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar8 = 1;
      pbVar4 = pub_1406abab0((ulonglong)puVar7,1);
      if (pbVar4 == (byte *)0x0) goto LAB_1409d051b;
      pub_142e32760(pbVar4,uVar5,puVar7);
    }
    lVar3 = lStack_50;
    uStack_90 = 7;
    uStack_88 = pbStack_48;
    uStack_80 = 7;
    uStack_78 = puVar7;
    uStack_70 = pbVar4;
    uStack_68 = puVar7;
    if (lStack_50 == lStack_60) {
      pdb_142d89a50(&lStack_60);
    }
    lVar6 = lVar3 * 0x30;
    puVar1 = (undefined4 *)(lStack_58 + 0x20 + lVar6);
    *puVar1 = (undefined4)uStack_70;
    puVar1[1] = uStack_70._4_4_;
    puVar1[2] = (undefined4)uStack_68;
    puVar1[3] = uStack_68._4_4_;
    puVar1 = (undefined4 *)(lStack_58 + 0x10 + lVar6);
    *puVar1 = (undefined4)uStack_80;
    puVar1[1] = uStack_80._4_4_;
    puVar1[2] = (undefined4)uStack_78;
    puVar1[3] = uStack_78._4_4_;
    puVar1 = (undefined4 *)(lStack_58 + lVar6);
    *puVar1 = (undefined4)uStack_90;
    puVar1[1] = uStack_90._4_4_;
    puVar1[2] = (undefined4)uStack_88;
    puVar1[3] = uStack_88._4_4_;
    lStack_50 = lVar3 + 1;
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0xb,1);
    if (pbVar4 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xb);
    }
    else {
      pbVar4[0] = 0x70;
      pbVar4[1] = 0x65;
      pbVar4[2] = 0x72;
      pbVar4[3] = 0x6d;
      pbVar4[4] = 0x5f;
      pbVar4[5] = 0x73;
      pbVar4[6] = 0x68;
      pbVar4[7] = 0x61;
      pbVar4[7] = 0x61;
      pbVar4[8] = 100;
      pbVar4[9] = 0x6f;
      pbVar4[10] = 0x77;
      puVar7 = &uStack_90;
      pbStack_48 = pbVar4;
      uVar5 = pdb_140f679c0(*(undefined4 *)(param_2 + 0x74),puVar7,10);
      if ((longlong)puVar7 < 0) {
        uVar8 = 0;
      }
      else {
        if (puVar7 == (undefined8 *)0x0) {
          pbVar4 = (byte *)0x1;
LAB_1409d0670:
          lVar3 = lStack_50;
          uStack_90 = 0xb;
          uStack_88 = pbStack_48;
          uStack_80 = 0xb;
          uStack_78 = puVar7;
          uStack_70 = pbVar4;
          uStack_68 = puVar7;
          if (lStack_50 == lStack_60) {
            pdb_142d89a50(&lStack_60);
          }
          lVar6 = lVar3 * 0x30;
          puVar7 = (undefined8 *)(lStack_58 + 0x20 + lVar6);
          *puVar7 = uStack_70;
          puVar7[1] = uStack_68;
          puVar7 = (undefined8 *)(lStack_58 + 0x10 + lVar6);
          *puVar7 = uStack_80;
          puVar7[1] = uStack_78;
          *(undefined8 *)(lStack_58 + lVar6) = uStack_90;
          ((undefined8 *)(lStack_58 + lVar6))[1] = uStack_88;
          param_1[2] = lVar3 + 1;
          *param_1 = lStack_60;
          param_1[1] = lStack_58;
          return param_1;
        }
        pdb_14007ee60();
        uVar8 = 1;
        pbVar4 = pub_1406abab0((ulonglong)puVar7,1);
        if (pbVar4 != (byte *)0x0) {
          pub_142e32760(pbVar4,uVar5,puVar7);
          goto LAB_1409d0670;
        }
      }
      pdb_142dc7e2a(uVar8,puVar7);
    }
  }
LAB_1409d0717:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

