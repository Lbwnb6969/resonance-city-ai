// VA 0x141adad60, PDB extent 511 bytes
// country_core::resources::clutter_meshes::_::impl$0::deserialize::impl$2::visit_enum<serde_core::de::value::StrDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000141adc014) overlaps instruction at (ram,0x000141adc011)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000141adaf78) */
/* WARNING: Removing unreachable block (ram,0x000141adb821) */
/* WARNING: Removing unreachable block (ram,0x000141adb426) */
/* WARNING: Removing unreachable block (ram,0x000141adb85d) */
/* WARNING: Removing unreachable block (ram,0x000141adb458) */
/* WARNING: Removing unreachable block (ram,0x000141adb747) */
/* WARNING: Removing unreachable block (ram,0x000141adb474) */
/* WARNING: Removing unreachable block (ram,0x000141adb490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::clutter_meshes::_::impl$0::deserialize::impl$2::visit_enum<serde_core::de::value::StrDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 511 */

int * pdb_141adad60(int *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar9;
  int *piVar10;
  undefined7 uVar14;
  ulonglong uVar11;
  int *piVar12;
  undefined8 uVar13;
  byte bVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 uVar18;
  longlong unaff_RBX;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined8 *unaff_RBP;
  byte *unaff_RDI;
  ulonglong uVar22;
  undefined *in_R10;
  int unaff_R13D;
  bool bVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_8449 [33609];
  undefined1 *puStack_100;
  undefined8 uStack_60;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  undefined *puStack_10;
  uint uVar8;
  
  puVar19 = (undefined8 *)auStack_38;
  auVar30._0_8_ = pdb_141adaf60(&uStack_18);
  auVar30._8_8_ = extraout_XMM0_Qb;
  if ((char)uStack_18 == '\x01') {
    *(undefined **)(param_1 + 2) = puStack_10;
    uVar6 = 1;
    goto LAB_141adaf54;
  }
  puStack_10 = &UNK_143389384;
  lVar9 = (longlong)*(int *)(&UNK_143389384 + (ulonglong)uStack_18._1_1_ * 4);
  piVar10 = (int *)(&UNK_143389384 + lVar9);
  bVar23 = piVar10 == (int *)0x0;
  cVar7 = (char)piVar10;
  uVar8 = (uint)piVar10;
  uVar14 = (undefined7)((ulonglong)piVar10 >> 8);
  uVar18 = SUB82(param_2,0);
  puVar20 = auStack_38;
  puVar21 = auStack_38;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uStack_18._1_1_) {
  case 0:
    *(undefined1 *)((longlong)param_1 + 1) = 0;
    break;
  case 1:
    *(undefined1 *)((longlong)param_1 + 1) = 1;
    break;
  case 2:
    *(undefined1 *)((longlong)param_1 + 1) = 2;
    break;
  case 3:
    *(undefined1 *)((longlong)param_1 + 1) = 3;
    break;
  case 4:
    *(undefined1 *)((longlong)param_1 + 1) = 4;
    break;
  case 5:
    *(undefined1 *)((longlong)param_1 + 1) = 5;
    break;
  case 6:
    *(undefined1 *)((longlong)param_1 + 1) = 6;
    break;
  case 7:
    *(undefined1 *)((longlong)param_1 + 1) = 7;
    break;
  case 8:
    *(undefined1 *)((longlong)param_1 + 1) = 8;
    break;
  case 9:
    *(undefined1 *)((longlong)param_1 + 1) = 9;
    break;
  case 10:
    *(undefined1 *)((longlong)param_1 + 1) = 10;
    break;
  case 0xb:
    *(undefined1 *)((longlong)param_1 + 1) = 0xb;
    break;
  case 0xc:
    *(undefined1 *)((longlong)param_1 + 1) = 0xc;
    break;
  case 0xd:
    *(undefined1 *)((longlong)param_1 + 1) = 0xd;
    break;
  case 0xe:
    *(undefined1 *)((longlong)param_1 + 1) = 0xe;
    break;
  case 0xf:
    *(undefined1 *)((longlong)param_1 + 1) = 0xf;
    break;
  case 0x10:
    *(undefined1 *)((longlong)param_1 + 1) = 0x10;
    break;
  case 0x11:
    *(undefined1 *)((longlong)param_1 + 1) = 0x11;
    break;
  case 0x12:
    *(undefined1 *)((longlong)param_1 + 1) = 0x12;
    break;
  case 0x13:
    *(undefined1 *)((longlong)param_1 + 1) = 0x13;
    break;
  case 0x14:
    *(undefined1 *)((longlong)param_1 + 1) = 0x14;
    break;
  case 0x15:
    *(undefined1 *)((longlong)param_1 + 1) = 0x15;
    break;
  case 0x16:
    *(undefined1 *)((longlong)param_1 + 1) = 0x16;
    break;
  case 0x17:
    *(undefined1 *)((longlong)param_1 + 1) = 0x17;
    break;
  case 0x18:
    *(undefined1 *)((longlong)param_1 + 1) = 0x18;
    break;
  case 0x19:
    *(undefined1 *)((longlong)param_1 + 1) = 0x19;
    break;
  case 0x1a:
    *(undefined1 *)((longlong)param_1 + 1) = 0x1a;
    break;
  case 0x1b:
    *(undefined1 *)((longlong)param_1 + 1) = 0x1b;
    break;
  case 0x1c:
    *(undefined1 *)((longlong)param_1 + 1) = 0x1c;
    break;
  case 0x1d:
    *(undefined1 *)((longlong)param_1 + 1) = 0x1d;
    break;
  case 0x1e:
    *(undefined1 *)((longlong)param_1 + 1) = 0x1e;
    break;
  case 0x1f:
    *(undefined1 *)((longlong)param_1 + 1) = 0x1f;
    break;
  case 0x20:
    *(undefined1 *)((longlong)param_1 + 1) = 0x20;
    break;
  case 0x21:
    *(undefined1 *)((longlong)param_1 + 1) = 0x21;
    break;
  case 0x22:
    *(undefined1 *)((longlong)param_1 + 1) = 0x22;
    break;
  case 0x23:
    *(undefined1 *)((longlong)param_1 + 1) = 0x23;
    break;
  case 0x24:
    *(undefined1 *)((longlong)param_1 + 1) = 0x24;
    break;
  case 0x25:
    *(undefined1 *)((longlong)param_1 + 1) = 0x25;
    break;
  case 0x26:
    *(undefined1 *)((longlong)param_1 + 1) = 0x26;
    break;
  case 0x27:
    *(undefined1 *)((longlong)param_1 + 1) = 0x27;
    break;
  case 0x28:
    *(undefined1 *)((longlong)param_1 + 1) = 0x28;
    break;
  case 0x29:
    *(undefined1 *)((longlong)param_1 + 1) = 0x29;
    break;
  case 0x2a:
    *(undefined1 *)((longlong)param_1 + 1) = 0x2a;
    break;
  case 0x2b:
    *(undefined1 *)((longlong)param_1 + 1) = 0x2b;
    break;
  case 0x2c:
    *(undefined1 *)((longlong)param_1 + 1) = 0x2c;
    break;
  case 0x2d:
    *(undefined1 *)((longlong)param_1 + 1) = 0x2d;
    break;
  case 0x2e:
    *(undefined1 *)((longlong)param_1 + 1) = 0x2e;
    break;
  case 0x2f:
    *(undefined1 *)((longlong)param_1 + 1) = 0x2f;
    break;
  case 0x30:
    *(undefined1 *)((longlong)param_1 + 1) = 0x30;
    break;
  case 0x31:
    *(undefined1 *)((longlong)param_1 + 1) = 0x31;
    break;
  case 0x32:
    *(undefined1 *)((longlong)param_1 + 1) = 0x32;
    break;
  case 0x33:
    *(undefined1 *)((longlong)param_1 + 1) = 0x33;
    break;
  case 0x34:
    *(undefined1 *)((longlong)param_1 + 1) = 0x34;
    break;
  case 0x35:
    *(undefined1 *)((longlong)param_1 + 1) = 0x35;
    break;
  case 0x36:
    *(undefined1 *)((longlong)param_1 + 1) = 0x36;
    break;
  case 0x37:
    *(undefined1 *)((longlong)param_1 + 1) = 0x37;
    break;
  case 0x38:
    param_1 = (int *)((longlong)param_1 + 1);
    *(char *)piVar10 = (char)*piVar10 + cVar7;
    _UNK_143389384 = _UNK_143389384 + unaff_R13D;
    break;
  case 0x39:
    puVar19 = (undefined8 *)(ulonglong)_UNK_1433893f2;
    if (in_R10 == (undefined *)0x0 && param_4 == 0) {
      (&UNK_143389385)[lVar9] = 6;
    }
    else if ((uint)param_2[1] == 0x32765f74 && (undefined *)*param_2 == &UNK_143389384) {
      (&UNK_143389385)[lVar9] = 0xf;
    }
    else {
      if ((uint)param_2[1] != 0x736c6c6f || *param_2 != 0x725f636972626166) goto LAB_141adb7c5;
      (&UNK_143389385)[lVar9] = 0x2d;
    }
    goto code_r0x000141adb891;
  case 0x3a:
    *(char *)piVar10 = (char)*piVar10 + cVar7;
    if ((char)*piVar10 == '\0') {
      (&UNK_143389385)[lVar9] = 0x1d;
    }
    else {
      auVar26[0] = -((char)*param_2 == UNK_1433882e0);
      auVar26[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433882e1);
      auVar26[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433882e2);
      auVar26[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433882e3);
      auVar26[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433882e4);
      auVar26[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433882e5);
      auVar26[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433882e6);
      auVar26[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433882e7);
      auVar26[8] = -((char)param_2[1] == UNK_1433882e8);
      auVar26[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433882e9);
      auVar26[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433882ea);
      auVar26[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433882eb);
      auVar26[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433882ec);
      auVar26[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433882ed);
      auVar26[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433882ee);
      auVar26[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433882ef);
      auVar31[0] = -((char)param_2[2] == UNK_143388380);
      auVar31[1] = -(UNK_143388381 == '\0');
      auVar31[2] = -(UNK_143388382 == '\0');
      auVar31[3] = -(UNK_143388383 == '\0');
      auVar31[4] = -(UNK_143388384 == '\0');
      auVar31[5] = -(UNK_143388385 == '\0');
      auVar31[6] = -(UNK_143388386 == '\0');
      auVar31[7] = -(UNK_143388387 == '\0');
      auVar31[8] = -(UNK_143388388 == '\0');
      auVar31[9] = -(UNK_143388389 == '\0');
      auVar31[10] = -(UNK_14338838a == '\0');
      auVar31[0xb] = -(UNK_14338838b == '\0');
      auVar31[0xc] = -(UNK_14338838c == '\0');
      auVar31[0xd] = -(UNK_14338838d == '\0');
      auVar31[0xe] = -(UNK_14338838e == '\0');
      auVar31[0xf] = -(UNK_14338838f == '\0');
      auVar31 = auVar31 & auVar26;
      if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) == 0xffff) {
        (&UNK_143389385)[lVar9] = 0x29;
      }
      else {
        auVar27[0] = -((char)*param_2 == UNK_143388390);
        auVar27[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388391);
        auVar27[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388392);
        auVar27[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388393);
        auVar27[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388394);
        auVar27[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388395);
        auVar27[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388396);
        auVar27[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388397);
        auVar27[8] = -((char)param_2[1] == UNK_143388398);
        auVar27[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388399);
        auVar27[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338839a);
        auVar27[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338839b);
        auVar27[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338839c);
        auVar27[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338839d);
        auVar27[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338839e);
        auVar27[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338839f);
        auVar32[0] = -((char)param_2[2] == UNK_142e478c0);
        auVar32[1] = -(UNK_142e478c1 == '\0');
        auVar32[2] = -(UNK_142e478c2 == '\0');
        auVar32[3] = -(UNK_142e478c3 == '\0');
        auVar32[4] = -(UNK_142e478c4 == '\0');
        auVar32[5] = -(UNK_142e478c5 == '\0');
        auVar32[6] = -(UNK_142e478c6 == '\0');
        auVar32[7] = -(UNK_142e478c7 == '\0');
        auVar32[8] = -(UNK_142e478c8 == '\0');
        auVar32[9] = -(UNK_142e478c9 == '\0');
        auVar32[10] = -(UNK_142e478ca == '\0');
        auVar32[0xb] = -(UNK_142e478cb == '\0');
        auVar32[0xc] = -(UNK_142e478cc == '\0');
        auVar32[0xd] = -(UNK_142e478cd == '\0');
        auVar32[0xe] = -(UNK_142e478ce == '\0');
        auVar32[0xf] = -(UNK_142e478cf == '\0');
        auVar32 = auVar32 & auVar27;
        if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
        (&UNK_143389385)[lVar9] = 0x35;
      }
    }
    goto code_r0x000141adb891;
  case 0x3b:
code_r0x000141adb551:
    goto code_r0x000141adb891;
  case 0x3c:
    if ((param_4 | 0x143389384) == 0) {
      (&UNK_143389385)[lVar9] = 0x1c;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 6) != 0x676f6c5f65657274 ||
          *param_2 != 0x72745f6e65646c6f) {
        puVar19 = (undefined8 *)auStack_38;
        if (*(longlong *)((longlong)param_2 + 6) == 0x656361665f775f6e &&
            *param_2 == 0x5f6e696b706d7570) {
          (&UNK_143389385)[lVar9] = 0x27;
          goto code_r0x000141adb551;
        }
        goto LAB_141adb7c5;
      }
      (&UNK_143389385)[lVar9] = 0x23;
    }
    goto code_r0x000141adb891;
  case 0x3d:
    if (bVar23) {
      (&UNK_143389385)[lVar9] = 0xc;
    }
    else if (*(longlong *)((longlong)param_2 + 3) == 0x6b6361735f6f7461 &&
             *param_2 == 0x735f6f7461746f70) {
      (&UNK_143389385)[lVar9] = 0x14;
    }
    else if (*(longlong *)((longlong)param_2 + 3) == 0x64616572625f6c6c &&
             *param_2 == 0x72625f6c6c617473) {
      (&UNK_143389385)[lVar9] = 0x2e;
    }
    else {
      puVar19 = unaff_RBP + 1;
      if (*(longlong *)((longlong)param_2 + 3) != 0x736d6f6f72625f6b ||
          *param_2 != 0x6f72625f6b636172) goto LAB_141adb7c5;
      (&UNK_143389385)[lVar9] = 0x31;
    }
    goto code_r0x000141adb891;
  case 0x3e:
    UNK_143389307 = UNK_143389307 | 0x84;
    pcVar5 = (code *)swi(1);
    piVar10 = (int *)(*pcVar5)();
    return piVar10;
  case 0x3f:
    if (bVar23) {
      (&UNK_143389385)[lVar9] = 0x1b;
    }
    else {
      auVar24[0] = -((char)*param_2 == UNK_143388300);
      auVar24[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388301);
      auVar24[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388302);
      auVar24[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388303);
      auVar24[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388304);
      auVar24[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388305);
      auVar24[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388306);
      auVar24[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388307);
      auVar24[8] = -((char)param_2[1] == UNK_143388308);
      auVar24[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388309);
      auVar24[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338830a);
      auVar24[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338830b);
      auVar24[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338830c);
      auVar24[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338830d);
      auVar24[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338830e);
      auVar24[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338830f);
      if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
        (&UNK_143389385)[lVar9] = 0x24;
      }
      else {
        auVar25[0] = -((char)*param_2 == UNK_143388330);
        auVar25[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388331);
        auVar25[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388332);
        auVar25[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388333);
        auVar25[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388334);
        auVar25[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388335);
        auVar25[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388336);
        auVar25[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388337);
        auVar25[8] = -((char)param_2[1] == UNK_143388338);
        auVar25[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388339);
        auVar25[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338833a);
        auVar25[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338833b);
        auVar25[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338833c);
        auVar25[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338833d);
        auVar25[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338833e);
        auVar25[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338833f);
        puVar19 = (undefined8 *)auStack_38;
        if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar25[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
        (&UNK_143389385)[lVar9] = 0x2b;
      }
    }
    goto code_r0x000141adb891;
  case 0x40:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x41:
    puVar19 = (undefined8 *)auStack_38;
LAB_141adb7c5:
    *(undefined8 *)((longlong)puVar19 + -8) = 0x141adb7e3;
    uVar13 = pdb_142d8f140(param_2,param_3,&UNK_1433888a0,0x39);
    *(undefined8 *)(&UNK_14338938c + lVar9) = uVar13;
    cVar7 = '\x01';
    goto LAB_141adb893;
  case 0x42:
    if (bVar23) {
      out(*(undefined4 *)(ulonglong)*(uint *)((longlong)param_2 + 0x61),uVar18);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_4 == 0x6873 && (short)param_2[1] == 0) {
      (&UNK_143389385)[lVar9] = 0x30;
    }
    else {
      puVar19 = (undefined8 *)auStack_30;
      if ((short)param_2[1] != 0x736e || *param_2 != 0x61726b5f726f6f64) goto LAB_141adb7c5;
      (&UNK_143389385)[lVar9] = 0x34;
    }
    goto code_r0x000141adb891;
  case 0x43:
    _UNK_141ae31b8 = _UNK_141ae31b8 + (uint)param_2;
    iRam0000000188742bc3 = iRam0000000188742bc3 + (int)param_4;
    *param_1 = *param_1 + uVar8;
    break;
  case 0x44:
    *piVar10 = *piVar10 + (int)auStack_38;
    break;
  case 0x45:
    *(int *)(&UNK_14338930d + lVar9) = *(int *)(&UNK_14338930d + lVar9) + 0x43389384;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x46:
  case 0x47:
  case 0x49:
  case 0x4a:
  case 0x4c:
    auVar28[0] = -((char)auVar30._0_8_ == UNK_143388350);
    auVar28[1] = -((char)((ulonglong)auVar30._0_8_ >> 8) == UNK_143388351);
    auVar28[2] = -((char)((ulonglong)auVar30._0_8_ >> 0x10) == UNK_143388352);
    auVar28[3] = -((char)((ulonglong)auVar30._0_8_ >> 0x18) == UNK_143388353);
    auVar28[4] = -((char)((ulonglong)auVar30._0_8_ >> 0x20) == UNK_143388354);
    auVar28[5] = -((char)((ulonglong)auVar30._0_8_ >> 0x28) == UNK_143388355);
    auVar28[6] = -((char)((ulonglong)auVar30._0_8_ >> 0x30) == UNK_143388356);
    auVar28[7] = -((char)((ulonglong)auVar30._0_8_ >> 0x38) == UNK_143388357);
    auVar28[8] = -((char)extraout_XMM0_Qb == UNK_143388358);
    auVar28[9] = -((char)((ulonglong)extraout_XMM0_Qb >> 8) == UNK_143388359);
    auVar28[10] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x10) == UNK_14338835a);
    auVar28[0xb] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x18) == UNK_14338835b);
    auVar28[0xc] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x20) == UNK_14338835c);
    auVar28[0xd] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x28) == UNK_14338835d);
    auVar28[0xe] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x30) == UNK_14338835e);
    auVar28[0xf] = -((char)((ulonglong)extraout_XMM0_Qb >> 0x38) == UNK_14338835f);
    auVar28 = auVar28 & in_XMM1;
    puVar19 = (undefined8 *)auStack_38;
    if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
    (&UNK_143389385)[lVar9] = 0x13;
    goto code_r0x000141adb891;
  case 0x48:
    pcVar2 = (char *)(CONCAT71(uVar14,cVar7 + (char)*piVar10) + -0x47);
    *pcVar2 = *pcVar2 + (*unaff_RDI | 0x84);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x4b:
    puVar19 = (undefined8 *)auStack_38;
    if (*(longlong *)((longlong)param_2 + 5) != 0x736569676765765f ||
        (undefined *)*param_2 != &UNK_143389384) goto LAB_141adb7c5;
    (&UNK_143389385)[lVar9] = 0x2f;
    goto code_r0x000141adb891;
  case 0x4d:
    if (*(int *)((longlong)param_2 + 3) == 0x64617079 && (uint)*param_2 == 0x796c696c) {
      (&UNK_143389385)[lVar9] = 0x1f;
    }
    else {
      puVar19 = (undefined8 *)auStack_38;
      if (*(int *)((longlong)param_2 + 3) != 0x6e696b70 || (uint)*param_2 != 0x706d7570)
      goto LAB_141adb7c5;
      (&UNK_143389385)[lVar9] = 0x25;
    }
    goto code_r0x000141adb891;
  case 0x4e:
    *(uint *)param_2 = (uint)*param_2 + 0x43389384;
code_r0x000141adb891:
    cVar7 = '\0';
LAB_141adb893:
    *(char *)piVar10 = cVar7;
    return piVar10;
  case 0x4f:
    goto code_r0x000141adb92a;
  case 0x50:
    puStack_100 = &stack0xffffffffffffffc0;
    puVar19 = (undefined8 *)&stack0xffffffffffffffc0;
    cVar4 = '\x17';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar19 = puVar19 + -1;
      *puVar19 = *unaff_RBP;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    puVar20 = auStack_8449;
    piVar10 = (int *)(CONCAT71(uVar14,cVar7 + 't') & 0xffffffffffffff49);
    if ((int)piVar10 == 6) {
      bVar23 = *(short *)((longlong)param_2 + 4) == 0x6572 && (uint)*param_2 == 0x7574614e;
      puVar20 = auStack_8449;
      goto code_r0x000141adb8ca;
    }
    puStack_100 = &stack0xffffffffffffffc0;
    if (param_3 == 9) {
      uVar11 = *param_2 ^ 0x727574696e727546;
      param_4 = (ulonglong)(byte)param_2[1];
      puVar20 = auStack_8449;
      puStack_100 = &stack0xffffffffffffffc0;
      goto code_r0x000141adb900;
    }
    goto LAB_141adb91d;
  case 0x51:
    auVar33[0] = -(*(char *)((longlong)param_2 + 7) == UNK_1433883a0);
    auVar33[1] = -((char)param_2[1] == UNK_1433883a1);
    auVar33[2] = -(*(char *)((longlong)param_2 + 9) == UNK_1433883a2);
    auVar33[3] = -(*(char *)((longlong)param_2 + 10) == UNK_1433883a3);
    auVar33[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433883a4);
    auVar33[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433883a5);
    auVar33[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433883a6);
    auVar33[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433883a7);
    auVar33[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433883a8);
    auVar33[9] = -((char)param_2[2] == UNK_1433883a9);
    auVar33[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433883aa);
    auVar33[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433883ab);
    auVar33[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433883ac);
    auVar33[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433883ad);
    auVar33[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433883ae);
    auVar33[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433883af);
    auVar29[0] = -((char)*param_2 == UNK_143062230);
    auVar29[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143062231);
    auVar29[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143062232);
    auVar29[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143062233);
    auVar29[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143062234);
    auVar29[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143062235);
    auVar29[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143062236);
    auVar29[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143062237);
    auVar29[8] = -((char)param_2[1] == UNK_143062238);
    auVar29[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143062239);
    auVar29[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14306223a);
    auVar29[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14306223b);
    auVar29[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14306223c);
    auVar29[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14306223d);
    auVar29[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14306223e);
    auVar29[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14306223f);
    auVar30 = auVar29 & auVar33;
    goto code_r0x000141adba49;
  case 0x52:
    *(int *)((longlong)param_1 + 0xf) = *(int *)((longlong)param_1 + 0xf) + (int)auStack_38;
code_r0x000141adba49:
    if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) == 0xffff) {
      (&UNK_143389385)[lVar9] = 0xe;
      *(char *)piVar10 = '\0';
      return piVar10;
    }
LAB_141adbbe7:
    *(char *)((longlong)piVar10 + 1) = '\x0f';
    *(char *)piVar10 = '\0';
    return piVar10;
  case 0x53:
code_r0x000141adb8ca:
    if (bVar23) {
      *(char *)((longlong)piVar10 + 1) = '\x02';
LAB_141adb913:
      *(char *)piVar10 = '\0';
      return piVar10;
    }
    goto LAB_141adb91d;
  case 0x54:
    *(byte *)((longlong)param_1 + -0x3d) = *(byte *)((longlong)param_1 + -0x3d) & (byte)unaff_RBX;
    pcVar5 = (code *)swi(3);
    piVar10 = (int *)(*pcVar5)();
    return piVar10;
  case 0x55:
    piVar10 = (int *)(ulonglong)(uVar8 | 0x18ac9fa);
    in_XMM1 = in_XMM1 & auVar30;
    if ((ushort)((ushort)(SUB161(in_XMM1 >> 7,0) & 1) | (ushort)(SUB161(in_XMM1 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(in_XMM1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(in_XMM1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(in_XMM1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(in_XMM1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(in_XMM1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(in_XMM1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(in_XMM1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(in_XMM1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(in_XMM1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(in_XMM1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(in_XMM1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(in_XMM1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(in_XMM1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(in_XMM1[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adbbe7;
code_r0x000141adbbf0:
    *(char *)((longlong)piVar10 + 1) = '\x02';
code_r0x000141adbbf5:
    *(char *)piVar10 = '\0';
    return piVar10;
  case 0x56:
  case 0x57:
  case 0x5a:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    lVar17 = CONCAT71(0x1433893,UNK_14338933c | 0x84);
    uVar16 = (int)lVar17 + *(int *)(lVar17 + 9);
    puStack_10 = (undefined *)(ulonglong)uVar16;
    puVar19 = (undefined8 *)&stack0xffffffffffffffa8;
    cVar4 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar19 = puVar19 + -1;
      *puVar19 = *unaff_RBP;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    *piVar10 = *piVar10 + uVar8;
    pbVar1 = &UNK_14338933d + lVar9;
    bVar3 = *pbVar1;
    bVar15 = (byte)uVar16;
    *pbVar1 = *pbVar1 + bVar15;
    if (CARRY1(bVar3,bVar15)) {
      *(char *)piVar10 = (char)*piVar10 + cVar7;
      (&UNK_14338933d)[lVar9] = (&UNK_14338933d)[lVar9] + bVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    goto code_r0x000141adbad7;
  case 0x58:
    out((char)*param_1,uVar18);
    if (*(longlong *)((longlong)param_2 + 3) == 0x6465736f6c636e65 && (uint)*param_2 == 0x43389384)
    goto code_r0x000141adbbf0;
    if (*(longlong *)((longlong)param_2 + 3) == 0x7468676965685f68 && *param_2 == 0x6965685f68637261
       ) {
      (&UNK_143389385)[lVar9] = 4;
      *(char *)piVar10 = '\0';
      return piVar10;
    }
    uVar11 = *param_2 ^ 0x646e616865657266;
    goto code_r0x000141adbad9;
  case 0x59:
    if (*(short *)((longlong)param_2 + 4) == 0x7468 && (uint)*param_2 == 0x43389384) {
      (&UNK_143389385)[lVar9] = 1;
      *(char *)piVar10 = '\0';
      return piVar10;
    }
    goto LAB_141adbbe7;
  case 0x5b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x60:
    uVar11 = (ulonglong)(byte)param_2[1];
    puVar20 = auStack_38;
code_r0x000141adb900:
    if (param_4 == 0x65 && uVar11 == 0) {
      *(char *)((longlong)piVar10 + 1) = '\x03';
      goto LAB_141adb913;
    }
LAB_141adb91d:
    in_R10 = &UNK_143388c48;
    puVar21 = puVar20;
code_r0x000141adb92a:
    *(undefined8 *)(puVar21 + -8) = 0x141adb93b;
    uVar13 = pdb_142d8f140(param_2,param_3,in_R10);
    *(undefined8 *)(piVar10 + 2) = uVar13;
    *(char *)piVar10 = '\x01';
    return piVar10;
  case 0x61:
code_r0x000141adbad7:
    uVar11 = (ulonglong)((uint)puStack_10 ^ (uint)*param_2);
code_r0x000141adbad9:
    if (*(longlong *)((longlong)param_2 + 3) == 0x79745f646e616865 && uVar11 == 0) {
      puStack_10 = (undefined *)CONCAT71((int7)(uVar11 >> 8),10);
      (&UNK_143389385)[lVar9] = 10;
code_r0x000141adbaed:
      *(char *)piVar10 = (char)*piVar10 + cVar7;
      puStack_10[0x148880a] = puStack_10[0x148880a] + (char)((ulonglong)param_2 >> 8);
      *(char *)piVar10 = '\0';
      return piVar10;
    }
    goto LAB_141adbbe7;
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x6a:
    (&UNK_143389385)[lVar9] = 0xc;
    *(char *)piVar10 = '\0';
    return piVar10;
  case 0x68:
    puVar19 = (undefined8 *)&stack0xffffffffffffffc0;
    cVar4 = '\a';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar19 = puVar19 + -1;
      *puVar19 = *unaff_RBP;
      cVar4 = cVar4 + -1;
    } while ('\0' < cVar4);
    *(char *)piVar10 = (char)*piVar10 + cVar7;
    pcVar2 = &UNK_14338933d + lVar9;
    cVar7 = *pcVar2;
    *pcVar2 = *pcVar2 + -0x7c;
    if (!SCARRY1(cVar7,-0x7c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar18 = CONCAT11(0x52,(char)param_2);
    (&UNK_143389307)[lVar9] = (&UNK_143389307)[lVar9] | 0x84;
    while (puStack_10 != (undefined *)0x0) {
      puStack_10 = puStack_10 + -1;
      out((char)*param_1,uVar18);
      param_1 = (int *)((longlong)param_1 + 1);
    }
    bVar23 = CONCAT62((int6)((ulonglong)param_2 >> 0x10),uVar18) == 0;
    goto code_r0x000141adbb94;
  case 0x69:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6b:
    goto code_r0x000141adbaed;
  case 0x6c:
    bVar23 = ((uint)param_2 | 0x43389384) == 0;
code_r0x000141adbb94:
    if (bVar23) {
      (&UNK_143389385)[lVar9] = 3;
      *(char *)piVar10 = '\0';
      return piVar10;
    }
    goto LAB_141adbbe7;
  default:
code_r0x000141adbc56:
    piVar12 = piVar10;
    if (*(char *)((longlong)param_2 + 4) != 'e' || (uint)*param_2 != 0x6e6f7453) {
LAB_141adbcdf:
      uVar13 = pdb_142d8f140(param_2,param_3,&UNK_143389038,4);
      *(undefined8 *)(piVar12 + 2) = uVar13;
      *(char *)piVar12 = '\x01';
      return piVar12;
    }
    *(char *)((longlong)piVar10 + 1) = '\0';
    goto code_r0x000141adbcd5;
  case 0x6e:
    goto code_r0x000141adbbf5;
  case 0x70:
    uVar11 = func_0x00015113bd34();
    piVar10 = (int *)CONCAT71((int7)(uVar11 >> 8),*(undefined1 *)(unaff_RBX + (uVar11 & 0xff)));
    puVar19 = (undefined8 *)&stack0xffffffffffffffb8;
    cVar7 = '\x1e';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar19 = puVar19 + -1;
      *puVar19 = *unaff_RBP;
      cVar7 = cVar7 + -1;
    } while ('\0' < cVar7);
    *piVar10 = *piVar10 + 1;
    *(undefined1 *)((longlong)piVar10 + 1) = 0xd;
    *(undefined1 *)piVar10 = 0;
    return piVar10;
  case 0x71:
    return piVar10;
  case 0x76:
    piVar10 = (int *)0x43389384;
    piVar12 = piVar10;
    switch(param_3) {
    case 5:
      goto code_r0x000141adbc56;
    default:
      goto LAB_141adbcdf;
    case 0xc:
      uVar11 = *param_2 ^ 0x626d6954666c6148;
      uVar22 = (ulonglong)(uint)param_2[1] ^ 0x64657265;
      break;
    case 0xd:
      uVar11 = *param_2 ^ 0x6e41656c74746157;
      uVar22 = *(ulonglong *)((longlong)param_2 + 5) ^ 0x62756144646e4165;
      break;
    case 0xf:
      piVar12 = (int *)0x43389384;
      if (*(longlong *)((longlong)param_2 + 7) != 0x737472696b536874 ||
          *param_2 != 0x746957656e6f7453) goto LAB_141adbcdf;
      uRam0000000043389385 = 1;
      goto code_r0x000141adbcd5;
    }
    piVar12 = (int *)0x43389384;
    if (uVar22 != 0 || uVar11 != 0) goto LAB_141adbcdf;
    uRam0000000043389385 = 2;
code_r0x000141adbcd5:
    *(char *)piVar10 = '\0';
    return piVar10;
  case 0x7e:
    bVar3 = in(uVar18);
    *unaff_RDI = bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x85:
    piVar10 = (int *)(ulonglong)(uVar8 + 0x18ad2c2 + (uint)((byte)(&UNK_143389311)[lVar9] < 0x84));
    goto code_r0x000141adc016;
  case 0x82:
    _UNK_14338933c = _UNK_14338933c << 1 | (uint)((int)_UNK_14338933c < 0);
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar10 = (int *)(**(code **)(_UNK_14338938c + 0x18))
                               (CONCAT44(_UNK_143389388,_UNK_143389384),uVar8 + 0x48000000);
    return piVar10;
  case 0x83:
    if (lVar9 < -0x143389384) {
      puStack_10 = (undefined *)0x4338938c;
    }
    else {
      piVar10 = (int *)CONCAT71(uVar14,UNK_143389384);
    }
    goto code_r0x000141adc016;
  case 0x84:
    piVar10 = (int *)CONCAT71(uVar14,UNK_143389384);
code_r0x000141adc016:
    uStack_18 = 0xb;
    piVar10 = (int *)pdb_140f67100(piVar10,&UNK_143389232,0xb,&UNK_14338913d);
    return piVar10;
  }
  uVar6 = 0;
LAB_141adaf54:
  *(undefined1 *)param_1 = uVar6;
  return param_1;
}

