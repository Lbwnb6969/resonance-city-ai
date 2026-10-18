// VA 0x141828820, PDB extent 3712 bytes
// country_core::game_key_bindings::_::impl$0::deserialize::impl$0::visit_bytes<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_key_bindings::_::impl$0::deserialize::impl$0::visit_bytes<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_key_bindings.rs
   Extent: 3712 */

void pdb_141828820(undefined1 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 uVar2;
  
  switch(param_3) {
  case 4:
    switch(*param_2) {
    case 'p':
      if (((param_2[1] == 'a') && (param_2[2] == 't')) && (uVar2 = 0xd, param_2[3] == 'h'))
      goto code_r0x000141829657;
      break;
    case 'r':
      if ((param_2[1] == 'e') && (param_2[2] == 'd')) {
        uVar2 = 0x18;
code_r0x0001418294d6:
        if (param_2[3] == 'o') goto code_r0x000141829657;
      }
      break;
    case 't':
      if ((param_2[1] == 'r') && (param_2[2] == 'e')) {
        uVar2 = 0x13;
        cVar1 = param_2[3];
        goto joined_r0x000141828ffc;
      }
      break;
    case 'u':
      if ((param_2[1] == 'n') && (param_2[2] == 'd')) {
        uVar2 = 0x17;
        goto code_r0x0001418294d6;
      }
    }
    break;
  case 5:
    if (*param_2 == 'u') {
      if (((param_2[1] == 'i') && (param_2[2] == '_')) && (param_2[3] == 'u')) {
        uVar2 = 0x25;
        cVar1 = param_2[4];
joined_r0x000141828c8b:
        if (cVar1 == 'p') goto code_r0x000141829657;
      }
    }
    else if (((*param_2 == 'w') && (param_2[1] == 'a')) &&
            ((param_2[2] == 't' && (param_2[3] == 'e')))) {
      uVar2 = 0x14;
      cVar1 = param_2[4];
joined_r0x000141828ce2:
      if (cVar1 == 'r') goto code_r0x000141829657;
    }
    break;
  case 6:
    cVar1 = *param_2;
    if (cVar1 == 'd') {
      if (((param_2[1] == 'e') && (param_2[2] == 'l')) &&
         ((param_2[3] == 'e' && (param_2[4] == 't')))) {
        uVar2 = 0x19;
        cVar1 = param_2[5];
        goto joined_r0x000141828ffc;
      }
    }
    else if (cVar1 == 'g') {
      if ((((param_2[1] == 'a') && (param_2[2] == 'r')) && (param_2[3] == 'd')) &&
         (param_2[4] == 'e')) {
        uVar2 = 0x12;
        cVar1 = param_2[5];
        goto joined_r0x000141829653;
      }
    }
    else if (((cVar1 == 'e') && (param_2[1] == 'r')) &&
            ((param_2[2] == 'a' && ((param_2[3] == 's' && (param_2[4] == 'e')))))) {
      uVar2 = 0x10;
      cVar1 = param_2[5];
      goto joined_r0x000141828ce2;
    }
    break;
  case 7:
    switch(*param_2) {
    case 'm':
      if ((((param_2[1] == 'o') && (param_2[2] == 'v')) && (param_2[3] == 'e')) &&
         ((param_2[4] == '_' && (param_2[5] == 'u')))) {
        uVar2 = 4;
        cVar1 = param_2[6];
        goto joined_r0x000141828c8b;
      }
      break;
    case 't':
      if (((param_2[1] == 'e') && (param_2[2] == 'r')) &&
         ((param_2[3] == 'r' && ((param_2[4] == 'a' && (param_2[5] == 'i')))))) {
        uVar2 = 0x11;
code_r0x00014182964f:
        cVar1 = param_2[6];
joined_r0x000141829653:
        if (cVar1 == 'n') goto code_r0x000141829657;
      }
      break;
    case 'u':
      if ((param_2[1] == 'i') && (param_2[2] == '_')) {
        if (param_2[3] == 'd') {
          if ((param_2[4] == 'o') && (param_2[5] == 'w')) {
            uVar2 = 0x24;
            goto code_r0x00014182964f;
          }
        }
        else if (((param_2[3] == 'l') && (param_2[4] == 'e')) && (param_2[5] == 'f')) {
          uVar2 = 0x22;
          cVar1 = param_2[6];
          goto joined_r0x000141828f4b;
        }
      }
      break;
    case 'z':
      if (((param_2[1] == 'o') && (param_2[2] == 'o')) &&
         ((param_2[3] == 'm' && ((param_2[4] == '_' && (param_2[5] == 'i')))))) {
        uVar2 = 10;
        goto code_r0x00014182964f;
      }
    }
    break;
  case 8:
    switch(*param_2) {
    case 'b':
      if (((((param_2[1] == 'u') && (param_2[2] == 'i')) && (param_2[3] == 'l')) &&
          ((param_2[4] == 'd' && (param_2[5] == 'i')))) && (param_2[6] == 'n')) {
        uVar2 = 0xc;
        cVar1 = param_2[7];
        goto joined_r0x0001418289e5;
      }
      break;
    case 'f':
      if ((((param_2[1] == 'e') && (param_2[2] == 'e')) &&
          ((param_2[3] == 'd' && ((param_2[4] == 'b' && (param_2[5] == 'a')))))) &&
         (param_2[6] == 'c')) {
        uVar2 = 0x1e;
        cVar1 = param_2[7];
joined_r0x0001418293bd:
        if (cVar1 == 'k') goto code_r0x000141829657;
      }
      break;
    case 'u':
      if (((param_2[1] == 'i') && (param_2[2] == '_')) &&
         ((param_2[3] == 'r' &&
          (((param_2[4] == 'i' && (param_2[5] == 'g')) && (param_2[6] == 'h')))))) {
        uVar2 = 0x23;
code_r0x000141829421:
        cVar1 = param_2[7];
joined_r0x000141828f4b:
        if (cVar1 == 't') goto code_r0x000141829657;
      }
      break;
    case 'z':
      if (((((param_2[1] == 'o') && (param_2[2] == 'o')) && (param_2[3] == 'm')) &&
          ((param_2[4] == '_' && (param_2[5] == 'o')))) && (param_2[6] == 'u')) {
        uVar2 = 0xb;
        goto code_r0x000141829421;
      }
    }
    break;
  case 9:
    switch(*param_2) {
    case 'c':
      if (((((param_2[1] == 'u') && (param_2[2] == 's')) &&
           ((param_2[3] == 't' && ((param_2[4] == 'o' && (param_2[5] == 'm')))))) &&
          (param_2[6] == 'i')) && (param_2[7] == 'z')) {
        uVar2 = 0xf;
code_r0x00014182928c:
        cVar1 = param_2[8];
        goto joined_r0x000141828ffc;
      }
      break;
    case 'm':
      if (((param_2[1] == 'o') && (param_2[2] == 'v')) &&
         ((param_2[3] == 'e' && (param_2[4] == '_')))) {
        cVar1 = param_2[5];
        if (cVar1 == 'l') {
          if ((param_2[6] == 'e') && (param_2[7] == 'f')) {
            uVar2 = 2;
            cVar1 = param_2[8];
            goto joined_r0x000141828f4b;
          }
        }
        else if (cVar1 == 'd') {
          if ((param_2[6] == 'o') && (param_2[7] == 'w')) {
            uVar2 = 5;
            cVar1 = param_2[8];
            goto joined_r0x000141829653;
          }
        }
        else if (((cVar1 == 'b') && (param_2[6] == 'a')) && (param_2[7] == 'c')) {
          uVar2 = 1;
          cVar1 = param_2[8];
          goto joined_r0x0001418293bd;
        }
      }
      break;
    case 'p':
      if (((param_2[1] == 'h') &&
          (((param_2[2] == 'o' && (param_2[3] == 't')) && (param_2[4] == 'o')))) &&
         (((param_2[5] == 'm' && (param_2[6] == 'o')) && (param_2[7] == 'd')))) {
        uVar2 = 0x15;
        goto code_r0x00014182928c;
      }
      break;
    case 'u':
      if ((((((param_2[1] == 'i') && (param_2[2] == '_')) && (param_2[3] == 'c')) &&
           ((param_2[4] == 'a' && (param_2[5] == 'n')))) && (param_2[6] == 'c')) &&
         ((param_2[7] == 'e' && (uVar2 = 0x20, param_2[8] == 'l')))) goto code_r0x000141829657;
    }
    break;
  case 10:
    switch(*param_2) {
    case 'd':
      if ((((param_2[1] == 'e') && (param_2[2] == 'c')) && (param_2[3] == 'o')) &&
         (((param_2[4] == 'r' && (param_2[5] == 'a')) &&
          (((param_2[6] == 't' && ((param_2[7] == 'o' && (param_2[8] == 'r')))) &&
           (uVar2 = 0xe, param_2[9] == 's')))))) goto code_r0x000141829657;
      break;
    case 'f':
      if ((((param_2[1] == 'o') && (param_2[2] == 'c')) && (param_2[3] == 'u')) &&
         (((param_2[4] == 's' && (param_2[5] == '_')) &&
          ((param_2[6] == 'e' && ((param_2[7] == 'd' && (param_2[8] == 'i')))))))) {
        uVar2 = 0x1a;
code_r0x0001418295ff:
        cVar1 = param_2[9];
        goto joined_r0x000141828f4b;
      }
      break;
    case 'm':
      if (((((param_2[1] == 'o') && (param_2[2] == 'v')) && (param_2[3] == 'e')) &&
          ((param_2[4] == '_' && (param_2[5] == 'r')))) &&
         ((param_2[6] == 'i' && ((param_2[7] == 'g' && (param_2[8] == 'h')))))) {
        uVar2 = 3;
        goto code_r0x0001418295ff;
      }
      break;
    case 's':
      if ((((param_2[1] == 'c') && (param_2[2] == 'r')) &&
          ((param_2[3] == 'e' && ((param_2[4] == 'e' && (param_2[5] == 'n')))))) &&
         ((param_2[6] == 's' && ((param_2[7] == 'h' && (param_2[8] == 'o')))))) {
        uVar2 = 0x1d;
        goto code_r0x0001418295ff;
      }
      break;
    case 'u':
      if (((param_2[1] == 'i') && (param_2[2] == '_')) &&
         (((param_2[3] == 'c' && ((param_2[4] == 'o' && (param_2[5] == 'n')))) &&
          ((param_2[6] == 'f' &&
           (((param_2[7] == 'i' && (param_2[8] == 'r')) && (uVar2 = 0x21, param_2[9] == 'm'))))))))
      goto code_r0x000141829657;
    }
    break;
  case 0xb:
    cVar1 = *param_2;
    if (cVar1 == 'u') {
      if ((((param_2[1] == 'i') && (param_2[2] == '_')) && (param_2[3] == 't')) &&
         (((param_2[4] == 'a' && (param_2[5] == 'b')) && (param_2[6] == '_')))) {
        if (param_2[7] == 'n') {
          if ((param_2[8] == 'e') && (param_2[9] == 'x')) {
            uVar2 = 0x27;
            goto code_r0x000141829698;
          }
        }
        else if ((((param_2[7] == 'p') && (param_2[8] == 'r')) && (param_2[9] == 'e')) &&
                (uVar2 = 0x26, param_2[10] == 'v')) goto code_r0x000141829657;
      }
    }
    else if (cVar1 == 't') {
      if ((((param_2[1] == 'i') && (param_2[2] == 'm')) &&
          ((param_2[3] == 'e' && ((param_2[4] == '_' && (param_2[5] == 'o')))))) &&
         ((param_2[6] == 'f' &&
          ((((param_2[7] == '_' && (param_2[8] == 'd')) && (param_2[9] == 'a')) &&
           (uVar2 = 0x16, param_2[10] == 'y')))))) goto code_r0x000141829657;
    }
    else if ((((((cVar1 == 'r') && (param_2[1] == 'o')) &&
               ((param_2[2] == 't' && ((param_2[3] == 'a' && (param_2[4] == 't')))))) &&
              (param_2[5] == 'e')) &&
             (((param_2[6] == '_' && (param_2[7] == 'l')) && (param_2[8] == 'e')))) &&
            (param_2[9] == 'f')) {
      uVar2 = 6;
code_r0x000141829698:
      cVar1 = param_2[10];
      goto joined_r0x000141828f4b;
    }
    break;
  case 0xc:
    if (*param_2 == 'm') {
      if ((((param_2[1] == 'o') && (param_2[2] == 'v')) &&
          ((param_2[3] == 'e' &&
           (((((param_2[4] == '_' && (param_2[5] == 'f')) && (param_2[6] == 'o')) &&
             ((param_2[7] == 'r' && (param_2[8] == 'w')))) && (param_2[9] == 'a')))))) &&
         ((param_2[10] == 'r' && (param_2[0xb] == 'd')))) {
        param_1[1] = 0;
        *param_1 = 0x32;
        return;
      }
    }
    else if (((((*param_2 == 'r') && (param_2[1] == 'o')) && (param_2[2] == 't')) &&
             (((param_2[3] == 'a' && (param_2[4] == 't')) &&
              ((param_2[5] == 'e' && ((param_2[6] == '_' && (param_2[7] == 'r')))))))) &&
            ((param_2[8] == 'i' && ((param_2[9] == 'g' && (param_2[10] == 'h')))))) {
      uVar2 = 7;
      cVar1 = param_2[0xb];
      goto joined_r0x000141828f4b;
    }
    break;
  case 0xf:
    if ((((*param_2 == 'c') && (param_2[1] == 'a')) && (param_2[2] == 'm')) &&
       (((((param_2[3] == 'e' && (param_2[4] == 'r')) &&
          ((param_2[5] == 'a' && ((param_2[6] == '_' && (param_2[7] == 'p')))))) &&
         (param_2[8] == 'a')) &&
        ((((param_2[9] == 'n' && (param_2[10] == '_')) && (param_2[0xb] == 'm')) &&
         ((param_2[0xc] == 'o' && (param_2[0xd] == 'd')))))))) {
      uVar2 = 9;
      cVar1 = param_2[0xe];
joined_r0x000141828ffc:
      if (cVar1 == 'e') goto code_r0x000141829657;
    }
    break;
  case 0x10:
    if (((*param_2 == 'd') && (param_2[1] == 'i')) &&
       ((((param_2[2] == 's' && ((param_2[3] == 'a' && (param_2[4] == 'b')))) && (param_2[5] == 'l')
         ) && ((((((param_2[6] == 'e' && (param_2[7] == '_')) && (param_2[8] == 's')) &&
                 ((param_2[9] == 'n' && (param_2[10] == 'a')))) &&
                ((param_2[0xb] == 'p' && ((param_2[0xc] == 'p' && (param_2[0xd] == 'i')))))) &&
               (param_2[0xe] == 'n')))))) {
      uVar2 = 0x1b;
      cVar1 = param_2[0xf];
joined_r0x0001418289e5:
      if (cVar1 == 'g') goto code_r0x000141829657;
    }
    break;
  case 0x11:
    if (((*param_2 == 'h') && (param_2[1] == 'i')) &&
       (((((param_2[2] == 'd' &&
           (((param_2[3] == 'e' && (param_2[4] == '_')) && (param_2[5] == 'u')))) &&
          (((param_2[6] == 'i' && (param_2[7] == '_')) && (param_2[8] == 'p')))) &&
         (((param_2[9] == 'h' && (param_2[10] == 'o')) &&
          ((param_2[0xb] == 't' &&
           (((param_2[0xc] == 'o' && (param_2[0xd] == 'm')) && (param_2[0xe] == 'o')))))))) &&
        (param_2[0xf] == 'd')))) {
      uVar2 = 0x1f;
      cVar1 = param_2[0x10];
      goto joined_r0x000141828ffc;
    }
    break;
  case 0x12:
    if (*param_2 == 'q') {
      if ((((((((param_2[1] == 'u') && (param_2[2] == 'i')) && (param_2[3] == 'c')) &&
             ((param_2[4] == 'k' && (param_2[5] == '_')))) && (param_2[6] == 't')) &&
           ((param_2[7] == 'o' && (param_2[8] == 'o')))) && (param_2[9] == 'l')) &&
         ((((param_2[10] == '_' && (param_2[0xb] == 'p')) && (param_2[0xc] == 'a')) &&
          (((param_2[0xd] == 'l' && (param_2[0xe] == 'e')) &&
           ((param_2[0xf] == 't' && (param_2[0x10] == 't')))))))) {
        uVar2 = 0x1c;
        goto code_r0x000141828ff8;
      }
    }
    else if ((((*param_2 == 'c') && (param_2[1] == 'a')) &&
             ((((param_2[2] == 'm' &&
                (((param_2[3] == 'e' && (param_2[4] == 'r')) && (param_2[5] == 'a')))) &&
               (((param_2[6] == '_' && (param_2[7] == 'r')) && (param_2[8] == 'o')))) &&
              ((param_2[9] == 't' && (param_2[10] == 'a')))))) &&
            ((param_2[0xb] == 't' &&
             ((((param_2[0xc] == 'e' && (param_2[0xd] == '_')) && (param_2[0xe] == 'm')) &&
              ((param_2[0xf] == 'o' && (param_2[0x10] == 'd')))))))) {
      uVar2 = 8;
code_r0x000141828ff8:
      cVar1 = param_2[0x11];
      goto joined_r0x000141828ffc;
    }
    break;
  case 0x13:
    if ((((((((*param_2 == 'e') && (param_2[1] == 'x')) && (param_2[2] == 'p')) &&
           (((param_2[3] == 'e' && (param_2[4] == 'r')) &&
            ((param_2[5] == 'i' && ((param_2[6] == 'm' && (param_2[7] == 'e')))))))) &&
          (param_2[8] == 'n')) &&
         (((param_2[9] == 't' && (param_2[10] == 'a')) && (param_2[0xb] == 'l')))) &&
        ((param_2[0xc] == '_' && (param_2[0xd] == 'c')))) &&
       (((param_2[0xe] == 'a' && ((param_2[0xf] == 'm' && (param_2[0x10] == 'e')))) &&
        ((param_2[0x11] == 'r' && (uVar2 = 0x28, param_2[0x12] == 'a'))))))
    goto code_r0x000141829657;
  }
  uVar2 = 0x29;
code_r0x000141829657:
  param_1[1] = uVar2;
  *param_1 = 0x32;
  return;
}

