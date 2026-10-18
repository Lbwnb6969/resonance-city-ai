// VA 0x140aa5830, PDB extent 830 bytes
// image::codecs::png::PngEncoder::encode_inner<ref_mut$<std::io::buffered::bufwriter::BufWriter<std::fs::File> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   image::codecs::png::PngEncoder::encode_inner<ref_mut$<std::io::buffered::bufwriter::BufWriter<std::fs::File>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 830 */

void pdb_140aa5830(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,char param_7,undefined1 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1e8;
  undefined8 uStack_1d0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_184;
  undefined4 uStack_178;
  undefined1 uStack_14c;
  undefined1 uStack_12f;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined2 uStack_10f;
  undefined1 uStack_10d;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if ((byte)(param_7 - 0xdU) < 8) {
    bVar3 = (param_7 - 0xdU) * '\b';
    uStack_123 = *(undefined1 *)((longlong)param_2 + 9);
    uStack_118 = *param_2;
    uStack_248 = 0;
    uStack_240 = 8;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 8;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 8;
    uStack_208 = 0;
    uStack_200 = 0x8000000000000001;
    uStack_1e8 = 0x8000000000000001;
    uStack_1d0 = 0x8000000000000001;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_184 = 0;
    uStack_178 = 0;
    uStack_14c = 2;
    uStack_12f = 2;
    uStack_12c = param_5;
    uStack_128 = param_6;
    uStack_124 = 0;
    uStack_122 = 4;
    uStack_10f = 0;
    uStack_121 = (undefined1)(0x602040006020400 >> (bVar3 & 0x3f));
    uStack_120 = (undefined1)(0x1010101008080808 >> (bVar3 & 0x3f));
    uStack_10d = (undefined1)(0x10403020100 >> (*(char *)(param_2 + 1) << 3 & 0x3fU));
    uStack_110 = (undefined1)(0x101010101 >> (*(char *)(param_2 + 1) << 3 & 0x3fU));
    pdb_14170b5c0(&iStack_80,&uStack_248);
    if (iStack_70 == 2) {
      uStack_88 = uStack_58;
      uStack_98 = uStack_68;
      uStack_94 = uStack_64;
      uStack_90 = uStack_60;
      uStack_8c = uStack_5c;
      uVar2 = pdb_140dbd2a0(&uStack_98);
      *param_1 = 0x8000000000000009;
      param_1[1] = uVar2;
    }
    else {
      uStack_e0 = uStack_58;
      uStack_d8 = uStack_50;
      uStack_d4 = uStack_4c;
      uStack_d0 = uStack_48;
      uStack_cc = uStack_44;
      uStack_c8 = uStack_40;
      uStack_c4 = uStack_3c;
      uStack_c0 = uStack_38;
      uStack_bc = uStack_34;
      iStack_108 = iStack_80;
      uStack_104 = uStack_7c;
      uStack_100 = uStack_78;
      uStack_fc = uStack_74;
      pdb_14170aa60(&iStack_80,&iStack_108,param_3,param_4);
      if (iStack_80 == 6) {
        *param_1 = 0x800000000000000a;
      }
      else {
        iStack_b8 = iStack_80;
        uStack_b4 = uStack_7c;
        uStack_b0 = uStack_78;
        uStack_ac = uStack_74;
        uVar2 = pdb_140dbd2a0(&iStack_b8);
        *param_1 = 0x8000000000000009;
        param_1[1] = uVar2;
      }
      if ((char)uStack_bc == '\0') {
        uVar1 = (uint)uStack_bc >> 8;
        uStack_bc = CONCAT31((int3)uVar1,1);
        pdb_141709bd0(&iStack_80,&iStack_108,0x444e4549,1,0);
        if ((CONCAT44(uStack_7c,iStack_80) != 6) && (iStack_80 == 2)) {
          pdb_1404b38e0(&uStack_78);
        }
      }
    }
  }
  else {
    *param_1 = 0x8000000000000000;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[4] = 0x8000000000000004;
    *(char *)(param_1 + 5) = param_7;
    *(undefined1 *)((longlong)param_1 + 0x29) = param_8;
  }
  return;
}

