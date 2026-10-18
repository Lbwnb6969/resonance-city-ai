// VA 0x141a275c0, PDB extent 486 bytes
// country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::set_clutter_ids<core::iter::adapters::map::Map<core::slice::iter::Iter<country_core::resources::clutter_packs::ClutterPackObject>,country_core::systems::steam::workshop_clutter::workshop_clutter_hot_install::closure_env$6> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::set_clutter_ids<core::iter::adapters::map::Map<core::slice::iter::Iter<country_core::resources::clutter_packs::ClutterPackObject>,country_core::systems::steam::workshop_clutter::workshop_clutter_hot_install::closure_env$6>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
   Extent: 486 */

void pdb_141a275c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  longlong lStack_50;
  ulonglong uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  lStack_50 = param_2;
  uVar6 = pdb_1400af0a0(param_1 + 0x58,&lStack_50);
  lVar2 = *(longlong *)(param_1 + 0x38);
  bVar13 = (byte)(uVar6 >> 0x39);
  auVar14 = ZEXT216(CONCAT11(bVar13,bVar13));
  auVar14 = pshuflw(auVar14,auVar14,0);
  lVar8 = 0;
  do {
    uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x40);
    auVar1 = *(undefined1 (*) [16])(lVar2 + uVar6);
    auVar16[0] = -(auVar1[0] == auVar14[0]);
    auVar16[1] = -(auVar1[1] == auVar14[1]);
    auVar16[2] = -(auVar1[2] == auVar14[2]);
    auVar16[3] = -(auVar1[3] == auVar14[3]);
    auVar16[4] = -(auVar1[4] == auVar14[4]);
    auVar16[5] = -(auVar1[5] == auVar14[5]);
    auVar16[6] = -(auVar1[6] == auVar14[6]);
    auVar16[7] = -(auVar1[7] == auVar14[7]);
    auVar16[8] = -(auVar1[8] == auVar14[0]);
    auVar16[9] = -(auVar1[9] == auVar14[1]);
    auVar16[10] = -(auVar1[10] == auVar14[2]);
    auVar16[0xb] = -(auVar1[0xb] == auVar14[3]);
    auVar16[0xc] = -(auVar1[0xc] == auVar14[4]);
    auVar16[0xd] = -(auVar1[0xd] == auVar14[5]);
    auVar16[0xe] = -(auVar1[0xe] == auVar14[6]);
    auVar16[0xf] = -(auVar1[0xf] == auVar14[7]);
    uVar11 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf;
    uVar10 = (uint)uVar11;
    while (uVar11 != 0) {
      uVar4 = 0;
      for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar12 = uVar4 + uVar6 & *(ulonglong *)(param_1 + 0x40);
      if (param_2 == *(longlong *)(lVar2 + -0x28 + uVar12 * -0x28)) {
        if (param_4 == param_3) {
          uVar6 = 0;
          pbStack_40 = (byte *)0x8;
          lVar2 = lVar2 + uVar12 * -0x28;
          lVar8 = *(longlong *)(lVar2 + -0x20);
        }
        else {
          uVar6 = (ulonglong)(param_4 - param_3) / 0x90;
          pdb_14007ee60();
          uStack_48 = uVar6 * 8;
          pbStack_40 = pub_1406abab0(uVar6 * 8,8);
          if (pbStack_40 == (byte *)0x0) {
            pdb_142dc7e2a(8,uStack_48);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = 0;
          do {
            uVar7 = pdb_140c8aa20(param_3);
            *(undefined8 *)(pbStack_40 + uVar9 * 8) = uVar7;
            uVar9 = uVar9 + 1;
            param_3 = param_3 + 0x90;
          } while (uVar6 != uVar9);
          lVar2 = lVar2 + uVar12 * -0x28;
          lVar8 = *(longlong *)(lVar2 + -0x20);
        }
        if (lVar8 != 0) {
          pub_1406abac0(*(byte **)(lVar2 + -0x18),lVar8 << 3,8);
        }
        *(ulonglong *)(lVar2 + -0x20) = uVar6;
        *(byte **)(lVar2 + -0x18) = pbStack_40;
        *(ulonglong *)(lVar2 + -0x10) = uVar6;
        return;
      }
      uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
      uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
    }
    auVar15[0] = -(auVar1[0] == -1);
    auVar15[1] = -(auVar1[1] == -1);
    auVar15[2] = -(auVar1[2] == -1);
    auVar15[3] = -(auVar1[3] == -1);
    auVar15[4] = -(auVar1[4] == -1);
    auVar15[5] = -(auVar1[5] == -1);
    auVar15[6] = -(auVar1[6] == -1);
    auVar15[7] = -(auVar1[7] == -1);
    auVar15[8] = -(auVar1[8] == -1);
    auVar15[9] = -(auVar1[9] == -1);
    auVar15[10] = -(auVar1[10] == -1);
    auVar15[0xb] = -(auVar1[0xb] == -1);
    auVar15[0xc] = -(auVar1[0xc] == -1);
    auVar15[0xd] = -(auVar1[0xd] == -1);
    auVar15[0xe] = -(auVar1[0xe] == -1);
    auVar15[0xf] = -(auVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0') {
      return;
    }
    uVar6 = uVar6 + lVar8 + 0x10;
    lVar8 = lVar8 + 0x10;
  } while( true );
}

