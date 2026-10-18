// VA 0x140c70000, PDB extent 1206 bytes
// country_core::resources::session::import::copy_glade
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::session::import::copy_glade
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
   Extent: 1206 */

code * pdb_140c70000(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                    longlong param_5)

{
  int iVar1;
  undefined8 **ppuVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 **ppuStack_1c8;
  code *pcStack_1c0;
  undefined8 ***pppuStack_1b8;
  code *pcStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 **ppuStack_158;
  code *pcStack_150;
  undefined8 **ppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 **ppuStack_118;
  code *pcStack_110;
  undefined8 **ppuStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_78;
  code *pcStack_70;
  undefined8 **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  ppuStack_118 = (undefined8 **)((ulonglong)ppuStack_118 & 0xffffffffffffff00);
  puStack_128 = param_3;
  uStack_120 = param_4;
  ppuVar2 = (undefined8 **)pdb_140f46c40(&ppuStack_118,param_3,param_4);
  if (ppuVar2 != (undefined8 **)0x0) {
    uStack_41 = 1;
    ppuStack_78 = ppuVar2;
    pdb_140f3f5b0(&ppuStack_118);
    uStack_1a8 = uStack_f8;
    uStack_1a4 = uStack_f4;
    uStack_1a0 = (undefined4)uStack_f0;
    uStack_19c = uStack_f0._4_4_;
    pppuStack_1b8 = (undefined8 ***)ppuStack_108;
    pcStack_1b0 = (code *)uStack_100;
    ppuStack_1c8 = ppuStack_118;
    pcStack_1c0 = pcStack_110;
    ppuStack_118 = (undefined8 **)&UNK_1430728c6;
    pcStack_110 = (code *)0x16;
    uStack_41 = 0;
    ppuStack_108 = ppuVar2;
    pcVar3 = (code *)pdb_142dea990(&ppuStack_118,&ppuStack_1c8);
    return pcVar3;
  }
  pcVar3 = (code *)pdb_140c704c0(param_1,param_2,param_3,param_4);
  if (pcVar3 == (code *)0x0) {
    pdb_140c70e60(&ppuStack_118,param_3,param_4,(undefined8 *)(param_5 + 0x18));
    pcVar3 = pcStack_110;
    ppuVar2 = ppuStack_118;
    if (!SBORROW8(0,(longlong)ppuStack_118)) {
      auVar4[0] = -(*(char *)(param_5 + 0x18) == (char)uStack_100);
      auVar4[1] = -(*(char *)(param_5 + 0x19) == (char)((ulonglong)uStack_100 >> 8));
      auVar4[2] = -(*(char *)(param_5 + 0x1a) == (char)((ulonglong)uStack_100 >> 0x10));
      auVar4[3] = -(*(char *)(param_5 + 0x1b) == (char)((ulonglong)uStack_100 >> 0x18));
      auVar4[4] = -(*(char *)(param_5 + 0x1c) == (char)((ulonglong)uStack_100 >> 0x20));
      auVar4[5] = -(*(char *)(param_5 + 0x1d) == (char)((ulonglong)uStack_100 >> 0x28));
      auVar4[6] = -(*(char *)(param_5 + 0x1e) == (char)((ulonglong)uStack_100 >> 0x30));
      auVar4[7] = -(*(char *)(param_5 + 0x1f) == (char)((ulonglong)uStack_100 >> 0x38));
      auVar4[8] = -(*(char *)(param_5 + 0x20) == (char)uStack_f8);
      auVar4[9] = -(*(char *)(param_5 + 0x21) == (char)((uint)uStack_f8 >> 8));
      auVar4[10] = -(*(char *)(param_5 + 0x22) == (char)((uint)uStack_f8 >> 0x10));
      auVar4[0xb] = -(*(char *)(param_5 + 0x23) == (char)((uint)uStack_f8 >> 0x18));
      auVar4[0xc] = -(*(char *)(param_5 + 0x24) == (char)uStack_f4);
      auVar4[0xd] = -(*(char *)(param_5 + 0x25) == (char)((uint)uStack_f4 >> 8));
      auVar4[0xe] = -(*(char *)(param_5 + 0x26) == (char)((uint)uStack_f4 >> 0x10));
      auVar4[0xf] = -(*(char *)(param_5 + 0x27) == (char)((uint)uStack_f4 >> 0x18));
      if ((((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar4[0xf] >> 7) << 0xf) != 0xffff) ||
          ((undefined8 ***)ppuStack_108 != *(undefined8 ****)(param_5 + 0x10))) ||
         (iVar1 = pub_142e32750(pcStack_110,*(undefined8 *)(param_5 + 8)), iVar1 != 0)) {
        if (ppuVar2 != (undefined8 **)0x0) {
          pub_1406abac0((byte *)pcVar3,(ulonglong)ppuVar2,1);
        }
        pcVar3 = (code *)pdb_142de9270(&UNK_143072961,0x40);
        goto LAB_140c70272;
      }
      if (ppuVar2 != (undefined8 **)0x0) {
        pub_1406abac0((byte *)pcVar3,(ulonglong)ppuVar2,1);
      }
      pdb_140a92500(&ppuStack_118,param_3,param_4);
      pcVar3 = pcStack_110;
      ppuVar2 = ppuStack_118;
      if (!SBORROW8(0,(longlong)ppuStack_118)) {
        pub_142e32760(&pppuStack_1b8,&ppuStack_108,0x90);
        ppuStack_1c8 = ppuVar2;
        pcStack_1c0 = pcVar3;
        uStack_100 = *(undefined8 *)(param_5 + 0x18);
        uStack_f8 = (undefined4)*(undefined8 *)(param_5 + 0x20);
        uStack_f4 = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 0x20) >> 0x20);
        pdb_140f60be0(&ppuStack_118,param_5);
        uStack_58 = CONCAT44(uStack_f4,uStack_f8);
        ppuStack_68 = ppuStack_108;
        uStack_60 = uStack_100;
        ppuStack_78 = ppuStack_118;
        pcStack_70 = pcStack_110;
        if ((!SBORROW8(0,(longlong)ppuStack_158)) && (ppuStack_158 != (undefined8 **)0x0)) {
          pub_1406abac0((byte *)pcStack_150,(ulonglong)ppuStack_158,1);
        }
        uStack_138 = uStack_58;
        ppuStack_148 = ppuStack_68;
        uStack_140 = uStack_60;
        ppuStack_158 = ppuStack_78;
        pcStack_150 = pcStack_70;
        pdb_140f3e9e0(&ppuStack_118,param_3,param_4,&UNK_1430450d2,9);
        pcVar3 = (code *)pdb_14191dfa0(&ppuStack_118,&ppuStack_1c8);
        pdb_1404cc180(&ppuStack_1c8);
      }
    }
    if (pcVar3 == (code *)0x0) {
      return (code *)0x0;
    }
  }
LAB_140c70272:
  pcStack_50 = pcVar3;
  ppuStack_78 = (undefined8 **)pdb_140f4ef90(param_3,param_4);
  if (ppuStack_78 != (undefined8 **)0x0) {
    if (1 < *_DAT_143ca8e90) {
      ppuStack_1c8 = &puStack_128;
      pcStack_1c0 = pdb_140117670;
      pppuStack_1b8 = &ppuStack_78;
      pcStack_1b0 = pdb_140f59780;
      ppuStack_118 = (undefined8 **)0x0;
      pcStack_110 = (code *)&UNK_143072939;
      ppuStack_108 = (undefined8 ***)0x28;
      uStack_100 = 0;
      uStack_f8 = 0x43072905;
      uStack_f4 = 1;
      uStack_f0 = 0x33;
      uStack_e8 = 2;
      puStack_e0 = &UNK_143072939;
      uStack_d8 = 0x28;
      uStack_d0 = 0x7600000001;
      puStack_c8 = &UNK_1430728dc;
      ppuStack_c0 = &ppuStack_1c8;
      pdb_140f332f0(&uStack_42,&ppuStack_118);
    }
    pdb_1404b38e0(&ppuStack_78);
  }
  return pcVar3;
}

