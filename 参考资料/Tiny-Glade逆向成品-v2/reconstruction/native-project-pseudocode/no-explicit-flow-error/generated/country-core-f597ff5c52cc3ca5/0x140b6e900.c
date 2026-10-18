// VA 0x140b6e900, PDB extent 947 bytes
// country_core::shader::gauss_blur::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::gauss_blur::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 947 */

longlong * pdb_140b6e900(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong arg0;
  code *pcVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
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
  pbVar5 = pub_1406abab0(1,1);
  if (pbVar5 == (byte *)0x0) {
    pdb_142dc7e2a(1,1);
    goto LAB_140b6eb72;
  }
  *pbVar5 = 0x4e;
  puVar9 = &uStack_90;
  pbStack_48 = pbVar5;
  uVar6 = pdb_140f679c0(*(undefined4 *)(param_2 + 0x10),puVar9,10);
  if ((longlong)puVar9 < 0) {
    uVar10 = 0;
LAB_140b6e981:
    pdb_142dc7e2a(uVar10,puVar9);
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      pbVar5 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar10 = 1;
      pbVar5 = pub_1406abab0((ulonglong)puVar9,1);
      if (pbVar5 == (byte *)0x0) goto LAB_140b6e981;
      pub_142e32760(pbVar5,uVar6,puVar9);
    }
    lVar4 = lStack_50;
    uStack_90 = 1;
    uStack_88 = pbStack_48;
    uStack_80 = 1;
    uStack_78 = puVar9;
    uStack_70 = pbVar5;
    uStack_68 = puVar9;
    if (lStack_50 == lStack_60) {
      pdb_142d89a50(&lStack_60);
    }
    lVar8 = lVar4 * 0x30;
    puVar1 = (undefined4 *)(lStack_58 + 0x20 + lVar8);
    *puVar1 = (undefined4)uStack_70;
    puVar1[1] = uStack_70._4_4_;
    puVar1[2] = (undefined4)uStack_68;
    puVar1[3] = uStack_68._4_4_;
    puVar1 = (undefined4 *)(lStack_58 + 0x10 + lVar8);
    *puVar1 = (undefined4)uStack_80;
    puVar1[1] = uStack_80._4_4_;
    puVar1[2] = (undefined4)uStack_78;
    puVar1[3] = uStack_78._4_4_;
    puVar1 = (undefined4 *)(lStack_58 + lVar8);
    *puVar1 = (undefined4)uStack_90;
    puVar1[1] = uStack_90._4_4_;
    puVar1[2] = (undefined4)uStack_88;
    puVar1[3] = uStack_88._4_4_;
    lStack_50 = lVar4 + 1;
    pdb_14007ee60();
    pbVar5 = pub_1406abab0(0xe,1);
    if (pbVar5 == (byte *)0x0) {
      pdb_142dc7e2a(1,0xe);
    }
    else {
      pbVar5[6] = 0x74;
      pbVar5[7] = 0x5f;
      pbVar5[8] = 0x66;
      pbVar5[9] = 0x6f;
      pbVar5[10] = 0x72;
      pbVar5[0xb] = 0x6d;
      pbVar5[0xc] = 0x61;
      pbVar5[0xd] = 0x74;
      pbVar5[0] = 0x69;
      pbVar5[1] = 0x6d;
      pbVar5[2] = 0x67;
      pbVar5[3] = 0x5f;
      pbVar5[4] = 0x6f;
      pbVar5[5] = 0x75;
      pbVar5[6] = 0x74;
      pbVar5[7] = 0x5f;
      arg0 = *(ulonglong *)(&UNK_14305bcd0 + (ulonglong)*(byte *)(param_2 + 0x18) * 8);
      iVar2 = *(int *)(&UNK_14305be20 + (ulonglong)*(byte *)(param_2 + 0x18) * 4);
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(arg0,1);
      if (pbVar7 != (byte *)0x0) {
        pub_142e32760(pbVar7,&UNK_14305be20 + iVar2,arg0);
        lVar4 = lStack_50;
        uStack_90 = 0xe;
        uStack_80 = 0xe;
        uStack_88 = pbVar5;
        uStack_78 = (undefined8 *)arg0;
        uStack_70 = pbVar7;
        uStack_68 = (undefined8 *)arg0;
        if (lStack_50 == lStack_60) {
          pdb_142d89a50(&lStack_60);
        }
        lVar8 = lVar4 * 0x30;
        puVar9 = (undefined8 *)(lStack_58 + 0x20 + lVar8);
        *puVar9 = uStack_70;
        puVar9[1] = uStack_68;
        puVar9 = (undefined8 *)(lStack_58 + 0x10 + lVar8);
        *puVar9 = uStack_80;
        puVar9[1] = uStack_78;
        *(undefined8 *)(lStack_58 + lVar8) = uStack_90;
        ((undefined8 *)(lStack_58 + lVar8))[1] = uStack_88;
        param_1[2] = lVar4 + 1;
        *param_1 = lStack_60;
        param_1[1] = lStack_58;
        return param_1;
      }
      pbStack_48 = pbVar5;
      pdb_142dc7e2a(1,arg0);
    }
  }
LAB_140b6eb72:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

