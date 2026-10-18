// VA 0x14173be50, PDB extent 300 bytes
// turbosloth::asset::downcast_build_artifact<asset::texture::SourceImageAsset>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::downcast_build_artifact<asset::texture::SourceImageAsset>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 300 */

void pdb_14173be50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_2 == 0) {
    lStack_28 = param_2[1];
    lVar1 = param_2[2];
    (**(code **)(lVar1 + 0x18))
              (&uStack_38,lStack_28 + (*(longlong *)(lVar1 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10
              );
    auVar4[0] = -((char)uStack_38 == DAT_14332a650);
    auVar4[1] = -(uStack_38._1_1_ == UNK_14332a651);
    auVar4[2] = -(uStack_38._2_1_ == UNK_14332a652);
    auVar4[3] = -(uStack_38._3_1_ == UNK_14332a653);
    auVar4[4] = -(uStack_38._4_1_ == UNK_14332a654);
    auVar4[5] = -(uStack_38._5_1_ == UNK_14332a655);
    auVar4[6] = -(uStack_38._6_1_ == UNK_14332a656);
    auVar4[7] = -(uStack_38._7_1_ == UNK_14332a657);
    auVar4[8] = -((char)uStack_30 == UNK_14332a658);
    auVar4[9] = -(uStack_30._1_1_ == UNK_14332a659);
    auVar4[10] = -(uStack_30._2_1_ == UNK_14332a65a);
    auVar4[0xb] = -(uStack_30._3_1_ == UNK_14332a65b);
    auVar4[0xc] = -(uStack_30._4_1_ == UNK_14332a65c);
    auVar4[0xd] = -(uStack_30._5_1_ == UNK_14332a65d);
    auVar4[0xe] = -(uStack_30._6_1_ == UNK_14332a65e);
    auVar4[0xf] = -(uStack_30._7_1_ == UNK_14332a65f);
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf)
        != 0xffff) {
      uStack_38 = lStack_28;
      uStack_30 = lVar1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14332b0b8,8,&uStack_38,&UNK_14332b870,&UNK_14332b470);
    }
    param_1[1] = lStack_28;
    *param_1 = 0;
  }
  else {
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    *param_1 = lVar1;
    param_1[1] = lVar2;
  }
  return;
}

