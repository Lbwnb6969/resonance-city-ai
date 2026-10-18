// VA 0x1400ca000, PDB extent 558 bytes
// minidumper::ipc::windows::UnixListener::bind<ref$<std::path::Path> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: minidumper::ipc::windows::UnixListener::bind<ref$<std::path::Path>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 558 */

undefined8 pdb_1400ca000(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined6 uStack_c0;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined2 uStack_b2;
  uint uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined4 uStack_8e;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined4 uStack_7e;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined4 uStack_6e;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined4 uStack_5e;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined6 uStack_42;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar4 = param_2;
  pdb_1407ee9a0();
  uVar3 = pdb_1407eeb70();
  if ((uVar3 & 1) == 0) {
    uStack_38 = uVar4;
    pdb_140f69110(&uStack_a8,param_1,param_2);
    if (uStack_a8 == 1) {
      pdb_140f370c0(0x15,&UNK_142e3dcaa,0x11);
    }
    else {
      uVar1 = CONCAT26(uStack_9a,uStack_a0);
      uVar3 = CONCAT26(uStack_92,uStack_98);
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_42 = 0;
      uStack_58 = 0;
      uStack_56 = 0;
      uStack_52 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      uStack_68 = 0;
      uStack_66 = 0;
      uStack_62 = 0;
      uStack_60 = 0;
      uStack_5e = 0;
      uStack_5a = 0;
      uStack_78 = 0;
      uStack_76 = 0;
      uStack_72 = 0;
      uStack_70 = 0;
      uStack_6e = 0;
      uStack_6a = 0;
      uStack_88 = 0;
      uStack_86 = 0;
      uStack_82 = 0;
      uStack_80 = 0;
      uStack_7e = 0;
      uStack_7a = 0;
      uStack_98 = 0;
      uStack_92 = 0;
      uStack_90 = 0;
      uStack_8e = 0;
      uStack_8a = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a2 = 0;
      uStack_a0 = 0;
      uStack_9a = 0;
      if (uVar3 < 0x6c) {
        pub_142e32760(&uStack_a8,uVar1);
        uStack_b8 = uStack_42;
        uStack_130 = CONCAT26(uStack_4c,CONCAT42(uStack_50,uStack_52));
        uStack_c0 = CONCAT42(uStack_48,uStack_4a);
        uStack_ba = uStack_44;
        uStack_140 = CONCAT22(uStack_60,uStack_62);
        uStack_138 = CONCAT22(uStack_58,uStack_5a);
        uStack_d4 = uStack_5e;
        uStack_cc = uStack_56;
        uStack_150 = CONCAT22(uStack_70,uStack_72);
        uStack_148 = CONCAT22(uStack_68,uStack_6a);
        uStack_e4 = uStack_6e;
        uStack_dc = uStack_66;
        uStack_160 = CONCAT22(uStack_80,uStack_82);
        uStack_158 = CONCAT22(uStack_78,uStack_7a);
        uStack_f4 = uStack_7e;
        uStack_ec = uStack_76;
        uStack_170 = CONCAT22(uStack_90,uStack_92);
        uStack_168 = CONCAT22(uStack_88,uStack_8a);
        uStack_104 = uStack_8e;
        uStack_fc = uStack_86;
        uStack_180 = CONCAT62(uStack_a0,uStack_a2);
        uStack_178 = CONCAT62(uStack_98,uStack_9a);
        lStack_188 = ((ulonglong)CONCAT22(uStack_a2,uStack_a4) << 0x30) + 1 +
                     (ulonglong)uStack_a8 * 0x10000;
        uStack_120 = CONCAT26(uStack_b2,uStack_42);
        uStack_128 = CONCAT26(uStack_44,uStack_c0);
        uStack_13c = uStack_5e;
        uStack_134 = uStack_56;
        uStack_14c = uStack_6e;
        uStack_144 = uStack_66;
        uStack_15c = uStack_7e;
        uStack_154 = uStack_76;
        uStack_16c = uStack_8e;
        uStack_164 = uStack_86;
        uStack_118 = uStack_180;
        uStack_110 = uStack_178;
        uStack_108 = uStack_170;
        uStack_100 = uStack_168;
        uStack_f8 = uStack_160;
        uStack_f0 = uStack_158;
        uStack_e8 = uStack_150;
        uStack_e0 = uStack_148;
        uStack_d8 = uStack_140;
        uStack_d0 = uStack_138;
        uStack_c8 = uStack_130;
        iVar2 = bind(uVar4,&lStack_188,0x6e);
        if (iVar2 == 0) {
          iVar2 = listen(uStack_38,0x80);
          if (iVar2 == 0) {
            return 0;
          }
          WSAGetLastError();
        }
        else {
          pdb_140f550f0();
        }
      }
      else {
        pdb_140f370c0(0x15,&UNK_142e3dc90,0x1a);
      }
    }
    pdb_1407eed30(&uStack_38);
  }
  return 1;
}

