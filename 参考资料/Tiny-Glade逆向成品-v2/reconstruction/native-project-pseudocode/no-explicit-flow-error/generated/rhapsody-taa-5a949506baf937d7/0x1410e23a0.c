// VA 0x1410e23a0, PDB extent 900 bytes
// rhapsody_taa::shader::tgsr2::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-taa-5a949506baf937d7/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody_taa::shader::tgsr2::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-taa-5a949506baf937d7/out/shabriri.rs
   Extent: 900 */

longlong * pdb_1410e23a0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  code *pcVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong lStack_60;
  undefined4 *puStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_60 = 0;
  puStack_58 = (undefined4 *)0x8;
  lStack_50 = 0;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0xb,1);
  if (pbVar4 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xb);
  }
  else {
    pbVar4[0] = 0x75;
    pbVar4[1] = 0x73;
    pbVar4[2] = 0x65;
    pbVar4[3] = 0x5f;
    pbVar4[4] = 0x73;
    pbVar4[5] = 0x68;
    pbVar4[6] = 0x61;
    pbVar4[7] = 0x72;
    pbVar4[7] = 0x72;
    pbVar4[8] = 0x70;
    pbVar4[9] = 0x65;
    pbVar4[10] = 0x6e;
    bVar1 = *(byte *)(param_2 + 0x44);
    uVar8 = (ulonglong)bVar1 ^ 5;
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(uVar8,1);
    if (pbVar5 == (byte *)0x0) {
      pdb_142dc7e2a(1,uVar8);
    }
    else {
      puVar7 = &UNK_14328c9f1;
      puVar6 = &UNK_14328c9f1;
      if (bVar1 != 0) {
        puVar6 = &UNK_14328c9f6;
      }
      pub_142e32760(pbVar5,puVar6,uVar8);
      pdb_142d89a50(&lStack_60);
      uStack_90 = SUB84(pbVar4,0);
      uStack_8c = (undefined4)((ulonglong)pbVar4 >> 0x20);
      uStack_80 = (undefined4)uVar8;
      uStack_78 = SUB84(pbVar5,0);
      uStack_74 = (undefined4)((ulonglong)pbVar5 >> 0x20);
      puStack_58[8] = uStack_78;
      puStack_58[9] = uStack_74;
      puStack_58[10] = uStack_80;
      puStack_58[0xb] = 0;
      puStack_58[4] = 0xb;
      puStack_58[5] = 0;
      puStack_58[6] = uStack_80;
      puStack_58[7] = 0;
      *puStack_58 = 0xb;
      puStack_58[1] = 0;
      puStack_58[2] = uStack_90;
      puStack_58[3] = uStack_8c;
      lStack_50 = 1;
      pdb_14007ee60();
      pbVar4 = pub_1406abab0(6,1);
      if (pbVar4 == (byte *)0x0) {
        pdb_142dc7e2a(1,6);
      }
      else {
        pbVar4[4] = 0x33;
        pbVar4[5] = 0x32;
        pbVar4[0] = 0x77;
        pbVar4[1] = 0x61;
        pbVar4[2] = 0x76;
        pbVar4[3] = 0x65;
        bVar1 = *(byte *)(param_2 + 0x45);
        uVar8 = (ulonglong)bVar1 ^ 5;
        pdb_14007ee60();
        pbVar5 = pub_1406abab0(uVar8,1);
        if (pbVar5 != (byte *)0x0) {
          if (bVar1 != 0) {
            puVar7 = &UNK_14328c9f6;
          }
          pub_142e32760(pbVar5,puVar7,uVar8);
          lVar3 = lStack_50;
          if (lStack_50 == lStack_60) {
            pdb_142d89a50(&lStack_60);
          }
          *(byte **)(puStack_58 + lVar3 * 0xc + 8) = pbVar5;
          *(ulonglong *)((longlong)(puStack_58 + lVar3 * 0xc + 8) + 8) = uVar8;
          *(undefined8 *)(puStack_58 + lVar3 * 0xc + 4) = 6;
          *(ulonglong *)((longlong)(puStack_58 + lVar3 * 0xc + 4) + 8) = uVar8;
          *(undefined8 *)(puStack_58 + lVar3 * 0xc) = 6;
          *(byte **)((longlong)(puStack_58 + lVar3 * 0xc) + 8) = pbVar4;
          param_1[2] = lVar3 + 1;
          *param_1 = lStack_60;
          param_1[1] = (longlong)puStack_58;
          return param_1;
        }
        pdb_142dc7e2a(1,uVar8);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

