// VA 0x14163b170, PDB extent 1383 bytes
// country_core::shader::generate_hzb::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::shader::generate_hzb::impl$3::to_shader_permutation_key<rhapsody::rg::binding::RgProtocol>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1383 */

void pdb_14163b170(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *arg0;
  undefined8 uVar11;
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
  pbVar7 = pub_1406abab0(0xe,1);
  if (pbVar7 == (byte *)0x0) {
    pdb_142dc7e2a(1,0xe);
  }
  else {
    pbVar7[6] = 0x36;
    pbVar7[7] = 0x5f;
    pbVar7[8] = 0x66;
    pbVar7[9] = 0x6f;
    pbVar7[10] = 0x72;
    pbVar7[0xb] = 0x6d;
    pbVar7[0xc] = 0x61;
    pbVar7[0xd] = 0x74;
    pbVar7[0] = 0x69;
    pbVar7[1] = 0x6d;
    pbVar7[2] = 0x67;
    pbVar7[3] = 0x44;
    pbVar7[4] = 0x73;
    pbVar7[5] = 0x74;
    pbVar7[6] = 0x36;
    pbVar7[7] = 0x5f;
    lVar9 = (ulonglong)*(byte *)(param_2 + 0x9c) * 8;
    uVar2 = *(ulonglong *)(&UNK_1433210c0 + lVar9);
    uVar10 = *(undefined8 *)(&UNK_143321210 + lVar9);
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(uVar2,1);
    if (pbVar8 == (byte *)0x0) {
      pbStack_50 = pbVar7;
      pdb_142dc7e2a(1,uVar2);
    }
    else {
      pub_142e32760(pbVar8,uVar10,uVar2);
      uStack_98 = 0xe;
      uStack_88 = 0xe;
      uStack_90 = pbVar7;
      uStack_80 = (undefined8 *)uVar2;
      uStack_78 = pbVar8;
      uStack_70 = (undefined8 *)uVar2;
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
      pbVar7 = pub_1406abab0(0xd,1);
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(1,0xd);
      }
      else {
        pbVar7[5] = 0x74;
        pbVar7[6] = 0x5f;
        pbVar7[7] = 0x66;
        pbVar7[8] = 0x6f;
        pbVar7[9] = 0x72;
        pbVar7[10] = 0x6d;
        pbVar7[0xb] = 0x61;
        pbVar7[0xc] = 0x74;
        pbVar7[0] = 0x69;
        pbVar7[1] = 0x6d;
        pbVar7[2] = 0x67;
        pbVar7[3] = 0x44;
        pbVar7[4] = 0x73;
        pbVar7[5] = 0x74;
        pbVar7[6] = 0x5f;
        pbVar7[7] = 0x66;
        lVar9 = (ulonglong)*(byte *)(param_2 + 0x9d) * 8;
        uVar2 = *(ulonglong *)(&UNK_1433210c0 + lVar9);
        uVar10 = *(undefined8 *)(&UNK_143321210 + lVar9);
        pdb_14007ee60();
        pbVar8 = pub_1406abab0(uVar2,1);
        if (pbVar8 == (byte *)0x0) {
          pbStack_50 = pbVar7;
          pdb_142dc7e2a(1,uVar2);
        }
        else {
          pub_142e32760(pbVar8,uVar10,uVar2);
          lVar9 = lStack_58;
          uStack_98 = 0xd;
          uStack_88 = 0xd;
          uStack_90 = pbVar7;
          uStack_80 = (undefined8 *)uVar2;
          uStack_78 = pbVar8;
          uStack_70 = (undefined8 *)uVar2;
          if (lStack_58 == lStack_68) {
            pdb_142d89a50(&lStack_68);
          }
          puVar1 = puStack_60 + lVar9 * 0xc + 8;
          *puVar1 = (undefined4)uStack_78;
          puVar1[1] = uStack_78._4_4_;
          puVar1[2] = (undefined4)uStack_70;
          puVar1[3] = uStack_70._4_4_;
          puVar1 = puStack_60 + lVar9 * 0xc + 4;
          *puVar1 = (undefined4)uStack_88;
          puVar1[1] = uStack_88._4_4_;
          puVar1[2] = (undefined4)uStack_80;
          puVar1[3] = uStack_80._4_4_;
          puVar1 = puStack_60 + lVar9 * 0xc;
          *puVar1 = (undefined4)uStack_98;
          puVar1[1] = uStack_98._4_4_;
          puVar1[2] = (undefined4)uStack_90;
          puVar1[3] = uStack_90._4_4_;
          lStack_58 = lVar9 + 1;
          pdb_14007ee60();
          pbVar7 = pub_1406abab0(0x13,1);
          uVar6 = _UNK_1433208ec;
          uVar5 = _UNK_1433208e8;
          uVar4 = _UNK_1433208e4;
          if (pbVar7 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x13);
          }
          else {
            *(undefined4 *)pbVar7 = _DAT_1433208e0;
            *(undefined4 *)(pbVar7 + 4) = uVar4;
            *(undefined4 *)(pbVar7 + 8) = uVar5;
            *(undefined4 *)(pbVar7 + 0xc) = uVar6;
            pbVar7[0xf] = 0x6d;
            pbVar7[0x10] = 0x6f;
            pbVar7[0x11] = 100;
            pbVar7[0x12] = 0x65;
            arg0 = &uStack_98;
            pbStack_50 = pbVar7;
            uVar10 = pdb_140f679c0(*(undefined4 *)(param_2 + 0x98),arg0,10);
            if ((longlong)arg0 < 0) {
              uVar11 = 0;
            }
            else {
              if (arg0 == (undefined8 *)0x0) {
                pbVar7 = (byte *)0x1;
LAB_14163b401:
                lVar9 = lStack_58;
                uStack_98 = 0x13;
                uStack_90 = pbStack_50;
                uStack_88 = 0x13;
                uStack_80 = arg0;
                uStack_78 = pbVar7;
                uStack_70 = arg0;
                if (lStack_58 == lStack_68) {
                  pdb_142d89a50(&lStack_68);
                }
                *(byte **)(puStack_60 + lVar9 * 0xc + 8) = uStack_78;
                *(undefined8 **)((longlong)(puStack_60 + lVar9 * 0xc + 8) + 8) = uStack_70;
                *(undefined8 *)(puStack_60 + lVar9 * 0xc + 4) = uStack_88;
                *(undefined8 **)((longlong)(puStack_60 + lVar9 * 0xc + 4) + 8) = uStack_80;
                *(undefined8 *)(puStack_60 + lVar9 * 0xc) = uStack_98;
                *(byte **)((longlong)(puStack_60 + lVar9 * 0xc) + 8) = uStack_90;
                param_1[2] = lVar9 + 1;
                *param_1 = lStack_68;
                param_1[1] = (longlong)puStack_60;
                return;
              }
              pdb_14007ee60();
              uVar11 = 1;
              pbVar7 = pub_1406abab0((ulonglong)arg0,1);
              if (pbVar7 != (byte *)0x0) {
                pub_142e32760(pbVar7,uVar10,arg0);
                goto LAB_14163b401;
              }
            }
            pdb_142dc7e2a(uVar11,arg0);
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

