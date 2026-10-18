// VA 0x142623d10, PDB extent 366 bytes
// turbosloth::util::_::impl$0::deserialize::impl$2::visit_enum<ref_mut$<bincode::de::Deserializer<bincode::de::read::SliceReader,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::util::_::impl$0::deserialize::impl$2::visit_enum<ref_mut$<bincode::de::Deserializer<bincode::de::read::SliceReader,bincode::config::WithOtherLimit<bincode::config::WithOtherTrailing<bincode::config::WithOtherIntEncoding<bincode::config::DefaultOptions,bincode::config::int::FixintEncoding>,bincode::config::trailing::AllowTrailing>,bincode::config::limit::Infinite>
   > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/util.rs
   Extent: 366 */

undefined8 * pdb_142623d10(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  code *pcStack_60;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  ulonglong uStack_38;
  
  uVar2 = param_2[1];
  if (3 < uVar2) {
    puVar3 = (uint *)*param_2;
    uVar1 = *puVar3;
    uStack_38 = (ulonglong)uVar1;
    *param_2 = (longlong)(puVar3 + 1);
    param_2[1] = uVar2 - 4;
    if (uStack_38 != 0) {
      if (uVar1 == 1) {
        param_1[1] = 0;
        *param_1 = 2;
        return param_1;
      }
      auStack_40[0] = 1;
      puStack_50 = &UNK_143558690;
      puStack_48 = &UNK_1435586a0;
      uStack_78 = auStack_40;
      uStack_70 = pdb_140f35c80;
      ppuStack_68 = &puStack_50;
      pcStack_60 = pdb_140236590;
      ppuStack_68 = (undefined **)pdb_14261ffd0(&UNK_143557740,&uStack_78);
      goto LAB_142623dcf;
    }
    if (0xf < uVar2 - 4) {
      uVar5 = *(undefined8 *)(puVar3 + 1);
      uVar6 = *(undefined8 *)(puVar3 + 3);
      *param_2 = (longlong)(puVar3 + 5);
      param_2[1] = uVar2 - 0x14;
      if (7 < uVar2 - 0x14) {
        uVar4 = *(undefined8 *)(puVar3 + 5);
        *param_2 = (longlong)(puVar3 + 7);
        param_2[1] = uVar2 - 0x1c;
        pdb_142620f90(&uStack_78);
        auVar7[0] = -((char)uStack_78 == DAT_14300c7d0);
        auVar7[1] = -(uStack_78._1_1_ == UNK_14300c7d1);
        auVar7[2] = -(uStack_78._2_1_ == UNK_14300c7d2);
        auVar7[3] = -(uStack_78._3_1_ == UNK_14300c7d3);
        auVar7[4] = -(uStack_78._4_1_ == UNK_14300c7d4);
        auVar7[5] = -(uStack_78._5_1_ == UNK_14300c7d5);
        auVar7[6] = -(uStack_78._6_1_ == UNK_14300c7d6);
        auVar7[7] = -(uStack_78._7_1_ == UNK_14300c7d7);
        auVar7[8] = -((char)uStack_70 == UNK_14300c7d8);
        auVar7[9] = -(uStack_70._1_1_ == UNK_14300c7d9);
        auVar7[10] = -(uStack_70._2_1_ == UNK_14300c7da);
        auVar7[0xb] = -(uStack_70._3_1_ == UNK_14300c7db);
        auVar7[0xc] = -(uStack_70._4_1_ == UNK_14300c7dc);
        auVar7[0xd] = -(uStack_70._5_1_ == UNK_14300c7dd);
        auVar7[0xe] = -(uStack_70._6_1_ == UNK_14300c7de);
        auVar7[0xf] = -(uStack_70._7_1_ == UNK_14300c7df);
        if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar7[0xf] >> 7) << 0xf) != 0xffff) {
          param_1[4] = uVar4;
          param_1[1] = uStack_70;
          *param_1 = uStack_78;
          param_1[2] = ppuStack_68;
          param_1[3] = pcStack_60;
          param_1[6] = uVar5;
          param_1[7] = uVar6;
          return param_1;
        }
        goto LAB_142623dcf;
      }
    }
  }
  ppuStack_68 = (undefined **)pdb_141c8a290(0x2500000003);
LAB_142623dcf:
  param_1[2] = ppuStack_68;
  param_1[1] = 0;
  *param_1 = 3;
  return param_1;
}

