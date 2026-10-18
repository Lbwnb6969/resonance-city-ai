// VA 0x141b6e4c0, PDB extent 857 bytes
// country_core::systems::mode_manager::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mode_manager::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 857 */

void pdb_141b6e4c0(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  
  if (param_3 == 7) {
    if (*(int *)((longlong)param_2 + 3) == 0x676e6974 && (int)*param_2 == 0x74696445) {
      param_1[1] = 0;
    }
    else {
      if (*(int *)((longlong)param_2 + 3) != 0x6e696172 || (int)*param_2 != 0x72726554)
      goto LAB_141b6e7c1;
      param_1[1] = 5;
    }
  }
  else {
    bVar1 = param_3 != 4;
    if (param_3 == 4) {
      if ((int)*param_2 == 0x6c6c6157) {
        param_1[1] = 1;
      }
      else {
        if ((int)*param_2 != 0x68746150) goto LAB_141b6e618;
        param_1[1] = 2;
      }
    }
    else if (param_3 == 6) {
      if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x73617245) {
        param_1[1] = 4;
      }
      else {
LAB_141b6e618:
        bVar5 = param_3 == 4;
joined_r0x000141b6e623:
        if ((param_3 == 5) &&
           (*(char *)((longlong)param_2 + 4) == 'r' && (int)*param_2 == 0x6f6c6f43)) {
          param_1[1] = 7;
        }
        else if ((bVar1) && (iVar2 = pub_142e32750(param_2,&UNK_143397ac0), iVar2 == 0)) {
          param_1[1] = 9;
        }
        else if (param_3 == 8) {
          if (*param_2 == 0x656d614764616f4c) {
            param_1[1] = 10;
          }
          else {
LAB_141b6e6ba:
            if ((bVar5) && (iVar2 = pub_142e32750(param_2,&UNK_143397ad3), iVar2 == 0)) {
              param_1[1] = 0xc;
            }
            else if ((bVar1) && (iVar2 = pub_142e32750(param_2,&UNK_143397ad7), iVar2 == 0)) {
              param_1[1] = 0xd;
            }
            else if ((param_3 == 10) &&
                    ((short)param_2[1] == 0x746e && *param_2 == 0x696150746e616c50)) {
              param_1[1] = 0xe;
            }
            else if ((bVar1) && (iVar2 = pub_142e32750(param_2,&UNK_143397ae7), iVar2 == 0)) {
              param_1[1] = 0xf;
            }
            else {
              if ((param_3 != 0xc) ||
                 ((int)param_2[1] != 0x72657474 || *param_2 != 0x756c43656e6f6c43))
              goto LAB_141b6e7c1;
              param_1[1] = 0x11;
            }
          }
        }
        else {
          if ((param_3 != 5) ||
             (*(char *)((longlong)param_2 + 4) != 'r' || (int)*param_2 != 0x65746157))
          goto LAB_141b6e6ba;
          param_1[1] = 0xb;
        }
      }
    }
    else if (param_3 == 9) {
      if ((char)param_2[1] == 'r' && *param_2 == 0x6f7461726f636544) {
        param_1[1] = 6;
      }
      else {
        if ((char)param_2[1] != 'e' || *param_2 != 0x646f6d6f746f6850) {
LAB_141b6e7c1:
          uVar3 = pdb_142d8f140(param_2,param_3,&UNK_143397b08,0x12);
          *(undefined8 *)(param_1 + 8) = uVar3;
          uVar4 = 1;
          goto LAB_141b6e80b;
        }
        param_1[1] = 0x10;
      }
    }
    else {
      if (param_3 != 0xb) {
        bVar5 = false;
        bVar1 = false;
        goto joined_r0x000141b6e623;
      }
      if (*(longlong *)((longlong)param_2 + 3) == 0x656e6f7473656c62 &&
          *param_2 == 0x7473656c62626f43) {
        param_1[1] = 3;
      }
      else {
        if (*(longlong *)((longlong)param_2 + 3) != 0x72656b636950656c ||
            *param_2 != 0x636950656c797453) goto LAB_141b6e7c1;
        param_1[1] = 8;
      }
    }
  }
  uVar4 = 0;
LAB_141b6e80b:
  *param_1 = uVar4;
  return;
}

