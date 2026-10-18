// VA 0x14036f490, PDB extent 490 bytes
// tiny_glade::crash_pickup::server::impl$1::create_minidump_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/server.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::crash_pickup::server::impl$1::create_minidump_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/server.rs
   Extent: 490 */

longlong * pdb_14036f490(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong uStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  ulonglong *puStack_60;
  code *pcStack_58;
  undefined4 uStack_50;
  undefined5 uStack_4c;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined4 uStack_43;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puStack_60 = (ulonglong *)CONCAT71(puStack_60._1_7_,1);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = pdb_140f46c40(&puStack_60,uVar1,uVar2);
  if (lVar3 == 0) {
    pdb_140eacc10(&uStack_88);
    pcStack_58 = pdb_140eaccb0;
    puStack_60 = &uStack_88;
    pdb_140f60760(&uStack_a0,&UNK_142f44617,&puStack_60);
    pbStack_38 = (byte *)uStack_a0;
    pbStack_68 = pbStack_98;
    pdb_140f3e9e0(&uStack_88,uVar1,uVar2,pbStack_98,uStack_90);
    if (pbStack_38 != (byte *)0x0) {
      pub_1406abac0(pbStack_68,(ulonglong)pbStack_38,1);
    }
    puStack_60 = (ulonglong *)((ulonglong)puStack_60 & 0xffffffff00000000);
    pcStack_58 = (code *)0x0;
    uStack_50 = 7;
    uStack_4c = 0;
    uStack_46 = 0;
    uStack_43 = 0;
    uStack_47 = 1;
    uStack_44 = 1;
    uStack_45 = 1;
    pbStack_38 = pbStack_80;
    pbVar5 = pbStack_80;
    uVar4 = pdb_140f4a2a0(&puStack_60,pbStack_80,lStack_78);
    if ((uVar4 & 1) == 0) {
      param_1[3] = lStack_78;
      param_1[4] = lStack_70;
      param_1[1] = uStack_88;
      param_1[2] = (longlong)pbStack_80;
      *param_1 = (longlong)pbVar5;
    }
    else {
      *param_1 = (longlong)pbVar5;
      param_1[1] = -0x8000000000000000;
      if (uStack_88 != 0) {
        pub_1406abac0(pbStack_38,uStack_88,1);
      }
    }
  }
  else {
    *param_1 = lVar3;
    param_1[1] = -0x8000000000000000;
  }
  return param_1;
}

