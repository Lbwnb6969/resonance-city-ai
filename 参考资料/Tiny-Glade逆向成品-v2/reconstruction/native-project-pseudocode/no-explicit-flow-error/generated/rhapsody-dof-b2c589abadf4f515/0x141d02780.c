// VA 0x141d02780, PDB extent 916 bytes
// rhapsody_dof::shader::halfres::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   rhapsody_dof::shader::halfres::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/rhapsody-dof-b2c589abadf4f515/out/shabriri.rs
   Extent: 916 */

longlong * pdb_141d02780(longlong *param_1,longlong param_2)

{
  int iVar1;
  ulonglong arg0;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 *arg0_00;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined4 *puStack_60;
  longlong lStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_68 = 0;
  puStack_60 = (undefined4 *)0x8;
  lStack_58 = 0;
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(0x11,1);
  uVar5 = _UNK_1433c94c4;
  uVar4 = _UNK_1433c94c0;
  uVar3 = _UNK_1433c94bc;
  if (pbVar7 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x11);
  }
  else {
    *(undefined4 *)pbVar7 = _DAT_1433c94b8;
    *(undefined4 *)(pbVar7 + 4) = uVar3;
    *(undefined4 *)(pbVar7 + 8) = uVar4;
    *(undefined4 *)(pbVar7 + 0xc) = uVar5;
    pbVar7[0x10] = 0x74;
    arg0 = *(ulonglong *)(&UNK_1433c96c8 + (ulonglong)*(byte *)(param_2 + 0x3c) * 8);
    iVar1 = *(int *)(&UNK_1433c9818 + (ulonglong)*(byte *)(param_2 + 0x3c) * 4);
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(arg0,1);
    if (pbVar8 == (byte *)0x0) {
      pbStack_50 = pbVar7;
      pdb_142dc7e2a(1,arg0);
    }
    else {
      pub_142e32760(pbVar8,&UNK_1433c9818 + iVar1,arg0);
      uStack_98 = 0x11;
      uStack_88 = 0x11;
      uStack_90 = pbVar7;
      uStack_80 = (undefined8 *)arg0;
      uStack_78 = pbVar8;
      uStack_70 = (undefined8 *)arg0;
      pdb_142d89a50(&lStack_68);
      puStack_60[8] = (undefined4)uStack_78;
      puStack_60[9] = uStack_78._4_4_;
      puStack_60[10] = (undefined4)uStack_70;
      puStack_60[0xb] = uStack_70._4_4_;
      puStack_60[4] = (undefined4)uStack_88;
      puStack_60[5] = uStack_88._4_4_;
      puStack_60[6] = (undefined4)uStack_80;
      puStack_60[7] = uStack_80._4_4_;
      *puStack_60 = (undefined4)uStack_98;
      puStack_60[1] = uStack_98._4_4_;
      puStack_60[2] = (undefined4)uStack_90;
      puStack_60[3] = uStack_90._4_4_;
      lStack_58 = 1;
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(7,1);
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(1,7);
      }
      else {
        pbVar7[3] = 0x6c;
        pbVar7[4] = 0x69;
        pbVar7[5] = 0x74;
        pbVar7[6] = 0x79;
        pbVar7[0] = 0x71;
        pbVar7[1] = 0x75;
        pbVar7[2] = 0x61;
        pbVar7[3] = 0x6c;
        arg0_00 = &uStack_98;
        pbStack_50 = pbVar7;
        uVar9 = pdb_140f679c0(*(undefined4 *)(param_2 + 0x38),arg0_00,10);
        if ((longlong)arg0_00 < 0) {
          uVar10 = 0;
        }
        else {
          if (arg0_00 == (undefined8 *)0x0) {
            pbVar7 = (byte *)0x1;
LAB_141d02919:
            lVar6 = lStack_58;
            uStack_98 = 7;
            uStack_90 = pbStack_50;
            uStack_88 = 7;
            uStack_80 = arg0_00;
            uStack_78 = pbVar7;
            uStack_70 = arg0_00;
            if (lStack_58 == lStack_68) {
              pdb_142d89a50(&lStack_68);
            }
            *(byte **)(puStack_60 + lVar6 * 0xc + 8) = uStack_78;
            *(undefined8 **)((longlong)(puStack_60 + lVar6 * 0xc + 8) + 8) = uStack_70;
            *(undefined8 *)(puStack_60 + lVar6 * 0xc + 4) = uStack_88;
            *(undefined8 **)((longlong)(puStack_60 + lVar6 * 0xc + 4) + 8) = uStack_80;
            *(undefined8 *)(puStack_60 + lVar6 * 0xc) = uStack_98;
            *(byte **)((longlong)(puStack_60 + lVar6 * 0xc) + 8) = uStack_90;
            param_1[2] = lVar6 + 1;
            *param_1 = lStack_68;
            param_1[1] = (longlong)puStack_60;
            return param_1;
          }
          pdb_14007ee60();
          uVar10 = 1;
          pbVar7 = pub_1406abab0((ulonglong)arg0_00,1);
          if (pbVar7 != (byte *)0x0) {
            pub_142e32760(pbVar7,uVar9,arg0_00);
            goto LAB_141d02919;
          }
        }
        pdb_142dc7e2a(uVar10,arg0_00);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

