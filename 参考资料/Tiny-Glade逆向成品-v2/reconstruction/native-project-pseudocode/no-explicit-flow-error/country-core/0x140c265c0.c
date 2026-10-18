// VA 0x140c265c0, PDB extent 662 bytes
// country_core::resources::clutter_registry::ClutterRegistry::register_builtin_inner
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::clutter_registry::ClutterRegistry::register_builtin_inner
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 662 */

void pdb_140c265c0(longlong param_1,byte param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  byte *pbStack_128;
  code *pcStack_120;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  byte *pbStack_58;
  byte abStack_49 [9];
  
  abStack_49[1] = 0xfe;
  abStack_49[2] = 0xff;
  abStack_49[3] = 0xff;
  abStack_49[4] = 0xff;
  abStack_49[5] = 0xff;
  abStack_49[6] = 0xff;
  abStack_49[7] = 0xff;
  abStack_49[8] = 0xff;
  pbStack_128 = abStack_49;
  pcStack_120 = pdb_140c2a9d0;
  abStack_49[0] = param_2;
  pdb_140f60760(&uStack_c0,&UNK_14306af45,&pbStack_128);
  pbStack_58 = pbStack_b8;
  uVar3 = pdb_140e940b0(pbStack_b8,uStack_b0);
  if (uStack_c0 != 0) {
    pub_1406abac0(pbStack_58,uStack_c0,1);
  }
  uStack_98 = pdb_1409d4a60();
  uStack_78 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  default:
    uStack_5b = 7;
    goto code_r0x000140c266ac;
  case 1:
    uStack_5b = 9;
    break;
  case 2:
    uStack_5b = 10;
    break;
  case 3:
    uStack_5b = 0xc;
    break;
  case 4:
    uStack_5b = 0xd;
    break;
  case 5:
  case 0x32:
    uStack_5b = 2;
    goto code_r0x000140c266ac;
  case 6:
    uStack_5b = 3;
    break;
  case 7:
    uStack_5b = 0xb;
    break;
  case 8:
    uStack_5b = 4;
    break;
  case 9:
    uStack_5b = 0;
    break;
  case 10:
  case 0xb:
    uStack_5b = 0x13;
    goto code_r0x000140c266ac;
  case 0xc:
    uStack_5b = 6;
    break;
  case 0xd:
  case 0x13:
  case 0x2b:
    uStack_5b = 0x17;
    goto code_r0x000140c266ac;
  case 0xe:
    uStack_5b = 0x18;
    break;
  case 0x10:
    uStack_5b = 0x14;
    break;
  case 0x11:
  case 0x12:
    uStack_5b = 0x19;
    goto code_r0x000140c266ac;
  case 0x14:
    uStack_5b = 0x15;
    break;
  case 0x15:
    uStack_5b = 0x16;
    break;
  case 0x17:
  case 0x18:
  case 0x28:
  case 0x36:
    uStack_5b = 5;
    goto code_r0x000140c266ac;
  case 0x19:
  case 0x1a:
  case 0x29:
  case 0x37:
    uStack_5b = 1;
    goto code_r0x000140c266ac;
  case 0x1c:
    uStack_5b = 0xe;
    break;
  case 0x1d:
  case 0x34:
  case 0x35:
    uStack_5b = 0x1f;
    goto code_r0x000140c266ac;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    uStack_5b = 0x11;
    goto code_r0x000140c266ac;
  case 0x22:
    uStack_5b = 0x1e;
    break;
  case 0x23:
    uStack_5b = 0x1c;
    break;
  case 0x24:
  case 0x2a:
    uStack_5b = 0x1d;
    goto code_r0x000140c266ac;
  case 0x25:
  case 0x26:
  case 0x27:
    uStack_5b = 0x1a;
code_r0x000140c266ac:
    if ((param_2 < 0x37) && ((0x40010001800000U >> ((ulonglong)param_2 & 0x3f) & 1) != 0)) {
      uStack_78 = 1;
    }
    goto code_r0x000140c2675b;
  case 0x2c:
    uStack_5b = 0x20;
    break;
  case 0x2d:
    uStack_5b = 0x21;
    break;
  case 0x2e:
    uStack_5b = 0x22;
    break;
  case 0x2f:
    uStack_5b = 0x23;
    break;
  case 0x30:
    uStack_5b = 0x24;
    break;
  case 0x31:
    uStack_5b = 0x25;
    break;
  case 0x33:
    uStack_5b = 0x26;
    break;
  case 0x38:
  case 0x39:
    return;
  }
  uStack_78 = 0;
code_r0x000140c2675b:
  uStack_88 = param_5;
  uStack_80 = param_6;
  uStack_c0 = 2;
  uStack_74 = _UNK_14306a9a0;
  uStack_6c = 0xbe03126f;
  uStack_68 = 0xbf800000;
  uStack_60 = 0;
  uStack_a0 = param_3;
  uStack_5c = param_4;
  pdb_1417b27b0(&pbStack_128,param_1 + 0x80,uVar3,&uStack_c0);
  if ((param_7 != '\0') && (cVar2 = pdb_1417bba20(param_1 + 0xb0,uVar3), cVar2 == '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (lVar1 == *(longlong *)(param_1 + 0x68)) {
      pdb_142d7e8a0(param_1 + 0x68);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar1 * 8) = uVar3;
    *(longlong *)(param_1 + 0x78) = lVar1 + 1;
  }
  return;
}

