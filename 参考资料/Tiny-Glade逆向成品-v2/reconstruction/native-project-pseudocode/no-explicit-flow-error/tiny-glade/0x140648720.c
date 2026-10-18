// VA 0x140648720, PDB extent 1835 bytes
// tiny_glade::sdl_event_loop::convert_keyboard_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::sdl_event_loop::convert_keyboard_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/sdl_event_loop.rs
   Extent: 1835 */

void pdb_140648720(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5
                  ,undefined1 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined1 auStack_30 [24];
  
  if (param_2 != 1) {
LAB_140648c50:
    param_1[0x10] = 0xc3;
    return;
  }
  switch(param_3) {
  case 4:
    param_3 = 0x14;
    break;
  case 5:
    param_3 = 0x15;
    break;
  case 6:
    param_3 = 0x16;
    break;
  case 7:
    param_3 = 0x17;
    break;
  case 8:
    param_3 = 0x18;
    break;
  case 9:
    param_3 = 0x19;
    break;
  case 10:
    param_3 = 0x1a;
    break;
  case 0xb:
    param_3 = 0x1b;
    break;
  case 0xc:
    param_3 = 0x1c;
    break;
  case 0xd:
    param_3 = 0x1d;
    break;
  case 0xe:
    param_3 = 0x1e;
    break;
  case 0xf:
    param_3 = 0x1f;
    break;
  case 0x10:
    param_3 = 0x20;
    break;
  case 0x11:
    param_3 = 0x21;
    break;
  case 0x12:
    param_3 = 0x22;
    break;
  case 0x13:
    param_3 = 0x23;
    break;
  case 0x14:
    param_3 = 0x24;
    break;
  case 0x15:
    param_3 = 0x25;
    break;
  case 0x16:
    param_3 = 0x26;
    break;
  case 0x17:
    param_3 = 0x27;
    break;
  case 0x18:
    param_3 = 0x28;
    break;
  case 0x19:
    param_3 = 0x29;
    break;
  case 0x1a:
    param_3 = 0x2a;
    break;
  case 0x1b:
    param_3 = 0x2b;
    break;
  case 0x1c:
    param_3 = 0x2c;
    break;
  case 0x1d:
    param_3 = 0x2d;
    break;
  case 0x1e:
    param_3 = 7;
    break;
  case 0x1f:
    param_3 = 8;
    break;
  case 0x20:
    param_3 = 9;
    break;
  case 0x21:
    param_3 = 10;
    break;
  case 0x22:
    param_3 = 0xb;
    break;
  case 0x23:
    param_3 = 0xc;
    break;
  case 0x24:
    param_3 = 0xd;
    break;
  case 0x25:
    param_3 = 0xe;
    break;
  case 0x26:
    param_3 = 0xf;
    break;
  case 0x27:
    param_3 = 6;
    break;
  case 0x28:
    param_3 = 0x3a;
    break;
  case 0x29:
    param_3 = 0x73;
    break;
  case 0x2a:
    param_3 = 0x35;
    break;
  case 0x2b:
    param_3 = 0x40;
    break;
  case 0x2c:
    param_3 = 0x3f;
    break;
  case 0x2d:
    param_3 = 0x2e;
    break;
  case 0x2e:
    param_3 = 0x10;
    break;
  case 0x2f:
    param_3 = 3;
    break;
  case 0x30:
    param_3 = 4;
    break;
  case 0x31:
    param_3 = 2;
    break;
  default:
    goto LAB_140648c50;
  case 0x33:
    param_3 = 0x31;
    break;
  case 0x34:
    param_3 = 0x30;
    break;
  case 0x35:
    param_3 = 1;
    break;
  case 0x36:
    param_3 = 5;
    break;
  case 0x37:
    param_3 = 0x2f;
    break;
  case 0x38:
    param_3 = 0x32;
    break;
  case 0x39:
    param_3 = 0x36;
    break;
  case 0x3a:
    param_3 = 0xa0;
    break;
  case 0x3b:
    param_3 = 0xa1;
    break;
  case 0x3c:
    param_3 = 0xa2;
    break;
  case 0x3d:
    param_3 = 0xa3;
    break;
  case 0x3e:
    param_3 = 0xa4;
    break;
  case 0x3f:
    param_3 = 0xa5;
    break;
  case 0x40:
    param_3 = 0xa6;
    break;
  case 0x41:
    param_3 = 0xa7;
    break;
  case 0x42:
    param_3 = 0xa8;
    break;
  case 0x43:
    param_3 = 0xa9;
    break;
  case 0x44:
    param_3 = 0xaa;
    break;
  case 0x45:
    param_3 = 0xab;
    break;
  case 0x46:
    param_3 = 0x76;
    break;
  case 0x47:
    param_3 = 0x77;
    break;
  case 0x48:
    param_3 = 0x78;
    break;
  case 0x49:
    param_3 = 0x4d;
    break;
  case 0x4a:
    param_3 = 0x4c;
    break;
  case 0x4b:
    param_3 = 0x4f;
    break;
  case 0x4c:
    param_3 = 0x49;
    break;
  case 0x4d:
    param_3 = 0x4a;
    break;
  case 0x4e:
  case 0x67:
    break;
  case 0x4f:
    param_3 = 0x52;
    break;
  case 0x50:
    param_3 = 0x51;
    break;
  case 0x51:
    param_3 = 0x50;
    break;
  case 0x52:
    param_3 = 0x53;
    break;
  case 0x54:
    param_3 = 0x65;
    break;
  case 0x55:
    param_3 = 0x6e;
    break;
  case 0x56:
    param_3 = 0x72;
    break;
  case 0x57:
    param_3 = 0x5f;
    break;
  case 0x58:
    param_3 = 0x66;
    break;
  case 0x59:
    param_3 = 0x56;
    break;
  case 0x5a:
    param_3 = 0x57;
    break;
  case 0x5b:
    param_3 = 0x58;
    break;
  case 0x5c:
    param_3 = 0x59;
    break;
  case 0x5d:
    param_3 = 0x5a;
    break;
  case 0x5e:
    param_3 = 0x5b;
    break;
  case 0x5f:
    param_3 = 0x5c;
    break;
  case 0x60:
    param_3 = 0x5d;
    break;
  case 0x61:
    param_3 = 0x5e;
    break;
  case 0x62:
    param_3 = 0x55;
    break;
  case 99:
    param_3 = 100;
    break;
  case 100:
    param_3 = 0x11;
    break;
  case 0xe0:
    param_3 = 0x38;
    break;
  case 0xe1:
    param_3 = 0x3d;
    break;
  case 0xe2:
    param_3 = 0x33;
    break;
  case 0xe3:
    param_3 = 0x3b;
    break;
  case 0xe4:
    param_3 = 0x39;
    break;
  case 0xe5:
    param_3 = 0x3e;
    break;
  case 0xe6:
    param_3 = 0x34;
    break;
  case 0xe7:
    param_3 = 0x3c;
  }
  if (param_4 != 1) goto LAB_140648c50;
  switch(param_5) {
  case 0x40000039:
    uVar1 = 5;
    break;
  case 0x4000003a:
    uVar1 = 0x112;
    break;
  case 0x4000003b:
    uVar1 = 0x113;
    break;
  case 0x4000003c:
    uVar1 = 0x114;
    break;
  case 0x4000003d:
    uVar1 = 0x115;
    break;
  case 0x4000003e:
    uVar1 = 0x116;
    break;
  case 0x4000003f:
    uVar1 = 0x117;
    break;
  case 0x40000040:
    uVar1 = 0x118;
    break;
  case 0x40000041:
    uVar1 = 0x119;
    break;
  case 0x40000042:
    uVar1 = 0x11a;
    break;
  case 0x40000043:
    uVar1 = 0x11b;
    break;
  case 0x40000044:
    uVar1 = 0x11c;
    break;
  case 0x40000045:
    uVar1 = 0x11d;
    break;
  case 0x40000046:
    uVar1 = 0x3d;
    break;
  case 0x40000047:
    uVar1 = 10;
    break;
  case 0x40000048:
    uVar1 = 0x31;
    break;
  case 0x40000049:
    uVar1 = 0x24;
    break;
  case 0x4000004a:
    uVar1 = 0x19;
    break;
  case 0x4000004b:
    uVar1 = 0x1b;
    break;
  case 0x4000004c:
  case 0x40000058:
  case 0x40000064:
  case 0x40000066:
  case 0x40000068:
  case 0x40000069:
  case 0x4000006a:
  case 0x4000006b:
  case 0x4000006c:
  case 0x4000006d:
  case 0x4000006e:
  case 0x4000006f:
  case 0x40000070:
  case 0x40000071:
  case 0x40000072:
  case 0x40000073:
  case 0x40000074:
  case 0x40000076:
  case 0x40000077:
  case 0x40000078:
  case 0x40000079:
  case 0x4000007a:
  case 0x4000007b:
  case 0x4000007c:
  case 0x4000007d:
  case 0x4000007e:
  case 0x4000007f:
  case 0x40000082:
  case 0x40000083:
  case 0x40000084:
  case 0x40000085:
  case 0x40000086:
  case 0x40000087:
  case 0x40000088:
  case 0x40000089:
  case 0x4000008a:
  case 0x4000008b:
  case 0x4000008c:
  case 0x4000008d:
  case 0x4000008e:
  case 0x4000008f:
  case 0x40000090:
  case 0x40000091:
  case 0x40000092:
  case 0x40000093:
  case 0x40000094:
  case 0x40000095:
  case 0x40000096:
  case 0x40000097:
  case 0x40000098:
  case 0x40000099:
  case 0x4000009a:
  case 0x4000009b:
  case 0x4000009c:
  case 0x4000009d:
  case 0x4000009e:
  case 0x4000009f:
  case 0x400000a0:
  case 0x400000a1:
  case 0x400000a2:
  case 0x400000a3:
  case 0x400000a4:
  case 0x400000a5:
  case 0x400000a6:
  case 0x400000a7:
  case 0x400000a8:
  case 0x400000a9:
  case 0x400000aa:
  case 0x400000ab:
  case 0x400000ac:
  case 0x400000ad:
  case 0x400000ae:
  case 0x400000af:
  case 0x400000b0:
  case 0x400000b1:
  case 0x400000b2:
  case 0x400000b3:
  case 0x400000b4:
  case 0x400000b5:
  case 0x400000b6:
  case 0x400000b7:
  case 0x400000b8:
  case 0x400000b9:
  case 0x400000ba:
  case 0x400000bb:
  case 0x400000bc:
  case 0x400000bd:
  case 0x400000be:
  case 0x400000bf:
  case 0x400000c0:
  case 0x400000c1:
  case 0x400000c2:
  case 0x400000c3:
  case 0x400000c4:
  case 0x400000c5:
  case 0x400000c6:
  case 0x400000c7:
  case 0x400000c8:
  case 0x400000c9:
  case 0x400000ca:
  case 0x400000cb:
  case 0x400000cc:
  case 0x400000cd:
  case 0x400000ce:
  case 0x400000cf:
  case 0x400000d0:
  case 0x400000d1:
  case 0x400000d2:
  case 0x400000d3:
  case 0x400000d4:
  case 0x400000d5:
  case 0x400000d6:
  case 0x400000d7:
  case 0x400000d8:
  case 0x400000d9:
  case 0x400000da:
  case 0x400000db:
  case 0x400000dc:
  case 0x400000dd:
  case 0x400000de:
  case 0x400000df:
  case 0x400000e8:
  case 0x400000e9:
  case 0x400000ea:
  case 0x400000eb:
  case 0x400000ec:
  case 0x400000ed:
  case 0x400000ee:
  case 0x400000ef:
  case 0x400000f0:
  case 0x400000f1:
  case 0x400000f2:
  case 0x400000f3:
  case 0x400000f4:
  case 0x400000f5:
  case 0x400000f6:
  case 0x400000f7:
  case 0x400000f8:
  case 0x400000f9:
  case 0x400000fa:
  case 0x400000fb:
  case 0x400000fc:
  case 0x400000fd:
  case 0x400000fe:
  case 0x400000ff:
  case 0x40000100:
  case 0x40000101:
  case 0x40000107:
  case 0x40000108:
  case 0x40000109:
  case 0x4000010a:
  case 0x4000010b:
    goto LAB_140648c50;
  case 0x4000004d:
    uVar1 = 0x18;
    break;
  case 0x4000004e:
    uVar1 = 0x1a;
    break;
  case 0x4000004f:
    uVar1 = 0x16;
    break;
  case 0x40000050:
    uVar1 = 0x15;
    break;
  case 0x40000051:
    uVar1 = 0x14;
    break;
  case 0x40000052:
    uVar1 = 0x17;
    break;
  case 0x40000053:
    uVar1 = 9;
    break;
  case 0x40000054:
  case 0x40000055:
  case 0x40000056:
  case 0x40000057:
  case 0x40000059:
  case 0x4000005a:
  case 0x4000005b:
  case 0x4000005c:
  case 0x4000005d:
  case 0x4000005e:
  case 0x4000005f:
  case 0x40000060:
  case 0x40000061:
  case 0x40000062:
  case 0x40000063:
  case 0x40000067:
code_r0x000140648bcd:
    pdb_1406d19f0(auStack_30);
    pdb_1406404c0(auStack_48,auStack_30);
    uStack_60 = (undefined4)auStack_48._0_8_;
    uStack_5c = SUB84(auStack_48._0_8_,4);
    uStack_58 = (undefined4)auStack_48._8_8_;
    uStack_54 = SUB84(auStack_48._8_8_,4);
    uStack_50 = uStack_38;
    uVar1 = 0;
    break;
  case 0x40000065:
    uVar1 = 0x2c;
    break;
  case 0x40000075:
    uVar1 = 0x30;
    break;
  case 0x40000080:
    uVar1 = 0x84;
    break;
  case 0x40000081:
    uVar1 = 0x83;
    break;
  case 0x400000e0:
  case 0x400000e4:
    uVar1 = 6;
    break;
  case 0x400000e1:
  case 0x400000e5:
    uVar1 = 0xb;
    break;
  case 0x400000e2:
  case 0x400000e6:
    uVar1 = 3;
    break;
  case 0x400000e3:
  case 0x400000e7:
    uVar1 = 0x10;
    break;
  case 0x40000102:
    uVar1 = 0x70;
    break;
  case 0x40000103:
    uVar1 = 0x71;
    break;
  case 0x40000104:
    uVar1 = 0x6f;
    break;
  case 0x40000105:
    uVar1 = 0x6b;
    break;
  case 0x40000106:
    uVar1 = 0x85;
    break;
  case 0x4000010c:
    uVar1 = 0x9e;
    break;
  case 0x4000010d:
    uVar1 = 0x9c;
    break;
  case 0x4000010e:
    uVar1 = 0x99;
    break;
  case 0x4000010f:
    uVar1 = 0x9b;
    break;
  case 0x40000110:
    uVar1 = 0x9f;
    break;
  case 0x40000111:
    uVar1 = 0x9d;
    break;
  case 0x40000112:
    uVar1 = 0x9a;
    break;
  default:
    switch(param_5) {
    case 8:
      uVar1 = 0x1c;
      break;
    case 9:
      uVar1 = 0x12;
      break;
    default:
      goto LAB_140648c50;
    case 0xd:
      uVar1 = 0x11;
      break;
    case 0x1b:
      uVar1 = 0x2d;
      break;
    case 0x20:
      uVar1 = 0x13;
      break;
    case 0x27:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3b:
    case 0x3d:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
      goto code_r0x000140648bcd;
    case 0x7f:
      uVar1 = 0x21;
    }
  }
  *param_1 = uVar1;
  *(ulonglong *)(param_1 + 1) = CONCAT44(uStack_60,uStack_64);
  *(ulonglong *)(param_1 + 3) = CONCAT44(uStack_58,uStack_5c);
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_54,uStack_58);
  *(undefined8 *)(param_1 + 6) = uStack_50;
  *(undefined1 *)(param_1 + 8) = 0x1b;
  *(undefined8 *)(param_1 + 0xe) = 1;
  param_1[0x10] = param_3;
  *(undefined1 *)(param_1 + 0x13) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x4d) = param_7;
  return;
}

