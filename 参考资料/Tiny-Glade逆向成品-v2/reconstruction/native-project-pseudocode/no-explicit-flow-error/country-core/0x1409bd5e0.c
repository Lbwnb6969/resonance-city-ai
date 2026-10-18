// VA 0x1409bd5e0, PDB extent 859 bytes
// country_core::systems::ui::signifiers::impl$2::build::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui::signifiers::impl$2::build::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/signifiers/mod.rs
   Extent: 859 */

void pdb_1409bd5e0(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong *param_7)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined1 (*pauStack_b8) [16];
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_58;
  undefined4 uStack_50;
  byte *pbStack_48;
  char cStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  cStack_3a = param_2;
  if (param_2 == '\x01') {
    if (SBORROW8(0,*param_7)) {
      uStack_70 = _DAT_142e37950;
      uStack_68 = 0x3f800000;
      uStack_39 = 0;
      pdb_1415e43a0(&lStack_f0,&uStack_70,param_6);
    }
    else {
      pbStack_e8 = (byte *)param_7[1];
      lStack_e0 = param_7[2];
      lStack_f0 = *param_7;
    }
    pbStack_48 = pbStack_e8;
    pdb_1409fca20(param_1,param_3,param_4,param_5,param_6,pbStack_e8,lStack_e0);
    if (lStack_f0 != 0) {
      pub_1406abac0(pbStack_48,lStack_f0 * 0xc,4);
    }
  }
  else {
    uStack_39 = 1;
    pdb_1409fc690(&lStack_f0,param_3,param_4,param_5,param_5 + param_6 * 0xc);
    pbStack_48 = (byte *)CONCAT71(pbStack_48._1_7_,SBORROW8(0,*param_7));
    if (SBORROW8(0,*param_7)) {
      uStack_58 = _DAT_142e37950;
      uStack_50 = 0x3f800000;
      if (lStack_a0 != 0) {
        auVar1 = *pauStack_b8;
        uVar2 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
        pauVar5 = pauStack_b8;
        pauVar6 = pauStack_b8;
        while (uVar4 = uVar2 ^ 0xffff, uVar4 == 0) {
          pauVar6 = pauVar6 + 1;
          auVar1 = *pauVar6;
          pauVar5 = pauVar5 + -0x38;
          uVar2 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
        }
        uVar3 = 0;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        pdb_1415e43a0(&uStack_70,&uStack_58,
                      *(undefined8 *)((longlong)pauVar5 + (ulonglong)uVar3 * -0x38 + -8));
        pdb_140c93200(&lStack_f0,&DAT_143045cc8,0xc,&uStack_70);
      }
    }
    else {
      lStack_f8 = param_7[2];
      lStack_108 = *param_7;
      lStack_100 = param_7[1];
      pdb_140c93200(&lStack_f0,&UNK_14302b3d8,0xc,&lStack_108);
    }
    param_1[0xe] = lStack_80;
    param_1[0xf] = lStack_78;
    param_1[0xc] = lStack_90;
    param_1[0xd] = lStack_88;
    param_1[10] = lStack_a0;
    param_1[0xb] = lStack_98;
    param_1[8] = lStack_b0;
    param_1[9] = lStack_a8;
    param_1[6] = lStack_c0;
    param_1[7] = (longlong)pauStack_b8;
    param_1[4] = lStack_d0;
    param_1[5] = lStack_c8;
    param_1[2] = lStack_e0;
    param_1[3] = lStack_d8;
    *param_1 = lStack_f0;
    param_1[1] = (longlong)pbStack_e8;
  }
  return;
}

