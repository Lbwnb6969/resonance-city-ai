// VA 0x141d03570, PDB extent 915 bytes
// rhapsody_dof::shader::fullres::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   rhapsody_dof::shader::fullres::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
   Extent: 915 */

longlong * pdb_141d03570(longlong *param_1,longlong param_2)

{
  ulonglong arg0;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 *arg0_00;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined4 *puStack_58;
  longlong lStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lStack_60 = 0;
  puStack_58 = (undefined4 *)0x8;
  lStack_50 = 0;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x11,1);
  uVar4 = _UNK_1433c98cc;
  uVar3 = _UNK_1433c98c8;
  uVar2 = _UNK_1433c98c4;
  if (pbVar5 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x11);
  }
  else {
    *(undefined4 *)pbVar5 = _DAT_1433c98c0;
    *(undefined4 *)(pbVar5 + 4) = uVar2;
    *(undefined4 *)(pbVar5 + 8) = uVar3;
    *(undefined4 *)(pbVar5 + 0xc) = uVar4;
    pbVar5[0x10] = 0x74;
    lVar6 = (ulonglong)*(byte *)(param_2 + 0x4c) * 8;
    arg0 = *(ulonglong *)(&UNK_1433c9a38 + lVar6);
    uVar8 = *(undefined8 *)(&UNK_1433c9b88 + lVar6);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(arg0,1);
    if (pbVar7 == (byte *)0x0) {
      pbStack_48 = pbVar5;
      pdb_142dc7e2a(1,arg0);
    }
    else {
      pub_142e32760(pbVar7,uVar8,arg0);
      uStack_90 = 0x11;
      uStack_80 = 0x11;
      uStack_88 = pbVar5;
      uStack_78 = (undefined8 *)arg0;
      uStack_70 = pbVar7;
      uStack_68 = (undefined8 *)arg0;
      pdb_142d89a50(&lStack_60);
      puStack_58[8] = (undefined4)uStack_70;
      puStack_58[9] = uStack_70._4_4_;
      puStack_58[10] = (undefined4)uStack_68;
      puStack_58[0xb] = uStack_68._4_4_;
      puStack_58[4] = (undefined4)uStack_80;
      puStack_58[5] = uStack_80._4_4_;
      puStack_58[6] = (undefined4)uStack_78;
      puStack_58[7] = uStack_78._4_4_;
      *puStack_58 = (undefined4)uStack_90;
      puStack_58[1] = uStack_90._4_4_;
      puStack_58[2] = (undefined4)uStack_88;
      puStack_58[3] = uStack_88._4_4_;
      lStack_50 = 1;
      pdb_14007ee60();
      pbVar5 = pub_1406abab0(7,1);
      if (pbVar5 == (byte *)0x0) {
        pdb_142dc7e2a(1,7);
      }
      else {
        pbVar5[3] = 0x6c;
        pbVar5[4] = 0x69;
        pbVar5[5] = 0x74;
        pbVar5[6] = 0x79;
        pbVar5[0] = 0x71;
        pbVar5[1] = 0x75;
        pbVar5[2] = 0x61;
        pbVar5[3] = 0x6c;
        arg0_00 = &uStack_90;
        pbStack_48 = pbVar5;
        uVar8 = pdb_140f679c0(*(undefined4 *)(param_2 + 0x48),arg0_00,10);
        if ((longlong)arg0_00 < 0) {
          uVar9 = 0;
        }
        else {
          if (arg0_00 == (undefined8 *)0x0) {
            pbVar5 = (byte *)0x1;
LAB_141d0370d:
            lVar6 = lStack_50;
            uStack_90 = 7;
            uStack_88 = pbStack_48;
            uStack_80 = 7;
            uStack_78 = arg0_00;
            uStack_70 = pbVar5;
            uStack_68 = arg0_00;
            if (lStack_50 == lStack_60) {
              pdb_142d89a50(&lStack_60);
            }
            *(byte **)(puStack_58 + lVar6 * 0xc + 8) = uStack_70;
            *(undefined8 **)((longlong)(puStack_58 + lVar6 * 0xc + 8) + 8) = uStack_68;
            *(undefined8 *)(puStack_58 + lVar6 * 0xc + 4) = uStack_80;
            *(undefined8 **)((longlong)(puStack_58 + lVar6 * 0xc + 4) + 8) = uStack_78;
            *(undefined8 *)(puStack_58 + lVar6 * 0xc) = uStack_90;
            *(byte **)((longlong)(puStack_58 + lVar6 * 0xc) + 8) = uStack_88;
            param_1[2] = lVar6 + 1;
            *param_1 = lStack_60;
            param_1[1] = (longlong)puStack_58;
            return param_1;
          }
          pdb_14007ee60();
          uVar9 = 1;
          pbVar5 = pub_1406abab0((ulonglong)arg0_00,1);
          if (pbVar5 != (byte *)0x0) {
            pub_142e32760(pbVar5,uVar8,arg0_00);
            goto LAB_141d0370d;
          }
        }
        pdb_142dc7e2a(uVar9,arg0_00);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

