// VA 0x1409d4b30, PDB extent 2415 bytes
// country_core::resources::clutter_meshes::ClutterMeshTy::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::clutter_meshes::ClutterMeshTy::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 2415 */

undefined8 pdb_1409d4b30(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  
  bVar3 = false;
  switch(param_2 + -8) {
  case 0:
    if (*param_1 == 0x676f6c5f65657274) {
      return 0x23;
    }
    goto LAB_1409d5486;
  default:
    goto LAB_1409d5349;
  case 2:
    if ((short)param_1[1] == 0x706d && *param_1 == 0x7574735f65657274) {
      return 0x24;
    }
    goto LAB_1409d5486;
  case 4:
    if ((int)param_1[1] == 0x64656572 && *param_1 == 0x2f72657474756c63) {
      return 0x2f72657474756c1e;
    }
    if ((int)param_1[1] == 0x74726163 && *param_1 == 0x2f72657474756c63) {
      return 0x17;
    }
    break;
  case 5:
    if (*(longlong *)((longlong)param_1 + 5) == 0x6c656568772f7265 && *param_1 == 0x2f72657474756c63
       ) {
      return 0x2f72657474756c02;
    }
    if (*(longlong *)((longlong)param_1 + 5) == 0x73657661656c5f6e && *param_1 == 0x6c5f6e656c6c6166
       ) {
      return 0x2f72657474756c20;
    }
    if (*(longlong *)((longlong)param_1 + 5) == 0x736c617465705f6e && *param_1 == 0x705f6e656c6c6166
       ) {
      return 0x2f72657474756c21;
    }
    if (*(longlong *)((longlong)param_1 + 5) == 0x68636e65622f7265 && *param_1 == 0x2f72657474756c63
       ) {
      return 0x2f72657474756c0a;
    }
    if (*(longlong *)((longlong)param_1 + 5) == 0x32747261632f7265 && *param_1 == 0x2f72657474756c63
       ) {
      return 0x18;
    }
    iVar4 = pub_142e32750(param_1,&UNK_14302e5b7);
    if (iVar4 == 0) {
      return 0x2c;
    }
    goto code_r0x0001409d4f30;
  case 6:
    if (*(longlong *)((longlong)param_1 + 6) == 0x72656464616c2f72 && *param_1 == 0x2f72657474756c63
       ) {
      return 0x2f72657474756c01;
    }
    if (*(longlong *)((longlong)param_1 + 6) == 0x6c65766f68732f72 && *param_1 == 0x2f72657474756c63
       ) {
      return 0x2f72657474756c04;
    }
    if (*(longlong *)((longlong)param_1 + 6) == 0x74656b6375622f72 && *param_1 == 0x2f72657474756c63
       ) {
      return 0x2f72657474756c08;
    }
    if (*(longlong *)((longlong)param_1 + 6) == 0x74656b7361622f72 && *param_1 == 0x2f72657474756c63
       ) {
      return 0x11;
    }
    break;
  case 7:
    if (*(longlong *)((longlong)param_1 + 7) == 0x646170796c696c2f && *param_1 == 0x2f72657474756c63
       ) {
      return 0x2f72657474756c1f;
    }
    if (*(longlong *)((longlong)param_1 + 7) == 0x6e696b706d75702f && *param_1 == 0x2f72657474756c63
       ) {
      return 0x25;
    }
    break;
  case 8:
    auVar16[0] = -((char)*param_1 == UNK_14302df40);
    auVar16[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302df41);
    auVar16[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302df42);
    auVar16[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df43);
    auVar16[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df44);
    auVar16[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df45);
    auVar16[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df46);
    auVar16[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df47);
    auVar16[8] = -((char)param_1[1] == UNK_14302df48);
    auVar16[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df49);
    auVar16[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df4a);
    auVar16[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df4b);
    auVar16[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df4c);
    auVar16[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df4d);
    auVar16[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df4e);
    auVar16[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df4f);
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe | (ushort)(auVar16[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return 0xff09;
    }
    auVar17[0] = -((char)*param_1 == UNK_14302df50);
    auVar17[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302df51);
    auVar17[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302df52);
    auVar17[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df53);
    auVar17[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df54);
    auVar17[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df55);
    auVar17[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df56);
    auVar17[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df57);
    auVar17[8] = -((char)param_1[1] == UNK_14302df58);
    auVar17[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df59);
    auVar17[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df5a);
    auVar17[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df5b);
    auVar17[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df5c);
    auVar17[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df5d);
    auVar17[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df5e);
    auVar17[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df5f);
    if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return 0xff07;
    }
    auVar18[0] = -((char)*param_1 == UNK_14302df60);
    auVar18[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302df61);
    auVar18[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302df62);
    auVar18[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df63);
    auVar18[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df64);
    auVar18[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df65);
    auVar18[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df66);
    auVar18[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df67);
    auVar18[8] = -((char)param_1[1] == UNK_14302df68);
    auVar18[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df69);
    auVar18[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df6a);
    auVar18[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df6b);
    auVar18[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df6c);
    auVar18[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df6d);
    auVar18[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df6e);
    auVar18[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df6f);
    if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return 0xff22;
    }
    auVar19[0] = -((char)*param_1 == UNK_14302df70);
    auVar19[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302df71);
    auVar19[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302df72);
    auVar19[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df73);
    auVar19[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df74);
    auVar19[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df75);
    auVar19[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df76);
    auVar19[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df77);
    auVar19[8] = -((char)param_1[1] == UNK_14302df78);
    auVar19[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df79);
    auVar19[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df7a);
    auVar19[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df7b);
    auVar19[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df7c);
    auVar19[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df7d);
    auVar19[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df7e);
    auVar19[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df7f);
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return 0xff0e;
    }
    auVar20[0] = -((char)*param_1 == UNK_14302df80);
    auVar20[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302df81);
    auVar20[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302df82);
    auVar20[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df83);
    auVar20[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df84);
    auVar20[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df85);
    auVar20[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df86);
    auVar20[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df87);
    auVar20[8] = -((char)param_1[1] == UNK_14302df88);
    auVar20[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df89);
    auVar20[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df8a);
    auVar20[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df8b);
    auVar20[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df8c);
    auVar20[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df8d);
    auVar20[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df8e);
    auVar20[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df8f);
    if ((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return 0xff26;
    }
    break;
  case 9:
    auVar21[0] = -((char)*param_1 == UNK_14302def0);
    auVar21[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302def1);
    auVar21[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302def2);
    auVar21[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302def3);
    auVar21[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302def4);
    auVar21[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302def5);
    auVar21[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302def6);
    auVar21[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302def7);
    auVar21[8] = -((char)param_1[1] == UNK_14302def8);
    auVar21[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302def9);
    auVar21[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302defa);
    auVar21[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302defb);
    auVar21[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302defc);
    auVar21[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302defd);
    auVar21[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302defe);
    auVar21[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302deff);
    auVar49[0] = -((char)param_1[2] == UNK_14302df00);
    auVar49[1] = -(UNK_14302df01 == '\0');
    auVar49[2] = -(UNK_14302df02 == '\0');
    auVar49[3] = -(UNK_14302df03 == '\0');
    auVar49[4] = -(UNK_14302df04 == '\0');
    auVar49[5] = -(UNK_14302df05 == '\0');
    auVar49[6] = -(UNK_14302df06 == '\0');
    auVar49[7] = -(UNK_14302df07 == '\0');
    auVar49[8] = -(UNK_14302df08 == '\0');
    auVar49[9] = -(UNK_14302df09 == '\0');
    auVar49[10] = -(UNK_14302df0a == '\0');
    auVar49[0xb] = -(UNK_14302df0b == '\0');
    auVar49[0xc] = -(UNK_14302df0c == '\0');
    auVar49[0xd] = -(UNK_14302df0d == '\0');
    auVar49[0xe] = -(UNK_14302df0e == '\0');
    auVar49[0xf] = -(UNK_14302df0f == '\0');
    auVar49 = auVar49 & auVar21;
    if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar49[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff03;
    }
    auVar22[0] = -((char)*param_1 == UNK_14302df10);
    auVar22[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302df11);
    auVar22[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302df12);
    auVar22[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df13);
    auVar22[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df14);
    auVar22[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df15);
    auVar22[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df16);
    auVar22[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df17);
    auVar22[8] = -((char)param_1[1] == UNK_14302df18);
    auVar22[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df19);
    auVar22[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df1a);
    auVar22[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df1b);
    auVar22[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df1c);
    auVar22[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df1d);
    auVar22[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df1e);
    auVar22[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df1f);
    auVar50[0] = -((char)param_1[2] == DAT_142e505d0);
    auVar50[1] = -(UNK_142e505d1 == '\0');
    auVar50[2] = -(UNK_142e505d2 == '\0');
    auVar50[3] = -(UNK_142e505d3 == '\0');
    auVar50[4] = -(UNK_142e505d4 == '\0');
    auVar50[5] = -(UNK_142e505d5 == '\0');
    auVar50[6] = -(UNK_142e505d6 == '\0');
    auVar50[7] = -(UNK_142e505d7 == '\0');
    auVar50[8] = -(UNK_142e505d8 == '\0');
    auVar50[9] = -(UNK_142e505d9 == '\0');
    auVar50[10] = -(UNK_142e505da == '\0');
    auVar50[0xb] = -(UNK_142e505db == '\0');
    auVar50[0xc] = -(UNK_142e505dc == '\0');
    auVar50[0xd] = -(UNK_142e505dd == '\0');
    auVar50[0xe] = -(UNK_142e505de == '\0');
    auVar50[0xf] = -(UNK_142e505df == '\0');
    auVar50 = auVar50 & auVar22;
    if ((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff10;
    }
    auVar23[0] = -((char)*param_1 == UNK_14302df20);
    auVar23[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302df21);
    auVar23[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302df22);
    auVar23[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df23);
    auVar23[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df24);
    auVar23[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df25);
    auVar23[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df26);
    auVar23[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df27);
    auVar23[8] = -((char)param_1[1] == UNK_14302df28);
    auVar23[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df29);
    auVar23[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df2a);
    auVar23[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df2b);
    auVar23[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df2c);
    auVar23[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df2d);
    auVar23[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df2e);
    auVar23[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df2f);
    auVar51[0] = -((char)param_1[2] == UNK_142e478c0);
    auVar51[1] = -(UNK_142e478c1 == '\0');
    auVar51[2] = -(UNK_142e478c2 == '\0');
    auVar51[3] = -(UNK_142e478c3 == '\0');
    auVar51[4] = -(UNK_142e478c4 == '\0');
    auVar51[5] = -(UNK_142e478c5 == '\0');
    auVar51[6] = -(UNK_142e478c6 == '\0');
    auVar51[7] = -(UNK_142e478c7 == '\0');
    auVar51[8] = -(UNK_142e478c8 == '\0');
    auVar51[9] = -(UNK_142e478c9 == '\0');
    auVar51[10] = -(UNK_142e478ca == '\0');
    auVar51[0xb] = -(UNK_142e478cb == '\0');
    auVar51[0xc] = -(UNK_142e478cc == '\0');
    auVar51[0xd] = -(UNK_142e478cd == '\0');
    auVar51[0xe] = -(UNK_142e478ce == '\0');
    auVar51[0xf] = -(UNK_142e478cf == '\0');
    auVar51 = auVar51 & auVar23;
    if ((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff15;
    }
    auVar24[0] = -((char)*param_1 == UNK_14302df30);
    auVar24[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302df31);
    auVar24[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302df32);
    auVar24[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df33);
    auVar24[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df34);
    auVar24[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df35);
    auVar24[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df36);
    auVar24[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df37);
    auVar24[8] = -((char)param_1[1] == UNK_14302df38);
    auVar24[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df39);
    auVar24[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df3a);
    auVar24[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df3b);
    auVar24[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df3c);
    auVar24[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df3d);
    auVar24[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df3e);
    auVar24[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df3f);
    auVar52[0] = -((char)param_1[2] == UNK_142f53950);
    auVar52[1] = -(UNK_142f53951 == '\0');
    auVar52[2] = -(UNK_142f53952 == '\0');
    auVar52[3] = -(UNK_142f53953 == '\0');
    auVar52[4] = -(UNK_142f53954 == '\0');
    auVar52[5] = -(UNK_142f53955 == '\0');
    auVar52[6] = -(UNK_142f53956 == '\0');
    auVar52[7] = -(UNK_142f53957 == '\0');
    auVar52[8] = -(UNK_142f53958 == '\0');
    auVar52[9] = -(UNK_142f53959 == '\0');
    auVar52[10] = -(UNK_142f5395a == '\0');
    auVar52[0xb] = -(UNK_142f5395b == '\0');
    auVar52[0xc] = -(UNK_142f5395c == '\0');
    auVar52[0xd] = -(UNK_142f5395d == '\0');
    auVar52[0xe] = -(UNK_142f5395e == '\0');
    auVar52[0xf] = -(UNK_142f5395f == '\0');
    auVar52 = auVar52 & auVar24;
    if ((ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff16;
    }
    iVar4 = pub_142e32750(param_1,&UNK_14302e5c4,param_2);
    if (iVar4 == 0) {
      return 0x32;
    }
    iVar4 = pub_142e32750(param_1,&UNK_14302e5f6,param_2);
    uVar5 = 0x33;
    goto code_r0x0001409d530e;
  case 10:
    auVar35[0] = -((char)*param_1 == UNK_14302dd90);
    auVar35[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302dd91);
    auVar35[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302dd92);
    auVar35[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dd93);
    auVar35[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dd94);
    auVar35[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dd95);
    auVar35[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dd96);
    auVar35[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dd97);
    auVar35[8] = -((char)param_1[1] == UNK_14302dd98);
    auVar35[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dd99);
    auVar35[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302dd9a);
    auVar35[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302dd9b);
    auVar35[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302dd9c);
    auVar35[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dd9d);
    auVar35[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dd9e);
    auVar35[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302dd9f);
    auVar63[0] = -((char)(short)param_1[2] == DAT_14302dda0);
    auVar63[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_14302dda1);
    auVar63[2] = -(UNK_14302dda2 == '\0');
    auVar63[3] = -(UNK_14302dda3 == '\0');
    auVar63[4] = -(UNK_14302dda4 == '\0');
    auVar63[5] = -(UNK_14302dda5 == '\0');
    auVar63[6] = -(UNK_14302dda6 == '\0');
    auVar63[7] = -(UNK_14302dda7 == '\0');
    auVar63[8] = -(UNK_14302dda8 == '\0');
    auVar63[9] = -(UNK_14302dda9 == '\0');
    auVar63[10] = -(UNK_14302ddaa == '\0');
    auVar63[0xb] = -(UNK_14302ddab == '\0');
    auVar63[0xc] = -(UNK_14302ddac == '\0');
    auVar63[0xd] = -(UNK_14302ddad == '\0');
    auVar63[0xe] = -(UNK_14302ddae == '\0');
    auVar63[0xf] = -(UNK_14302ddaf == '\0');
    auVar63 = auVar63 & auVar35;
    if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar63[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff30;
    }
    iVar4 = pub_142e32750(param_1,&UNK_14302e607,param_2);
    uVar5 = 0x34;
code_r0x0001409d530e:
    if (iVar4 == 0) {
      return uVar5;
    }
    goto LAB_1409d5486;
  case 0xb:
    auVar58[0] = -(*(char *)((longlong)param_1 + 3) == UNK_14302df90);
    auVar58[1] = -(*(char *)((longlong)param_1 + 4) == UNK_14302df91);
    auVar58[2] = -(*(char *)((longlong)param_1 + 5) == UNK_14302df92);
    auVar58[3] = -(*(char *)((longlong)param_1 + 6) == UNK_14302df93);
    auVar58[4] = -(*(char *)((longlong)param_1 + 7) == UNK_14302df94);
    auVar58[5] = -((char)param_1[1] == UNK_14302df95);
    auVar58[6] = -(*(char *)((longlong)param_1 + 9) == UNK_14302df96);
    auVar58[7] = -(*(char *)((longlong)param_1 + 10) == UNK_14302df97);
    auVar58[8] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302df98);
    auVar58[9] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302df99);
    auVar58[10] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302df9a);
    auVar58[0xb] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302df9b);
    auVar58[0xc] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302df9c);
    auVar58[0xd] = -((char)param_1[2] == UNK_14302df9d);
    auVar58[0xe] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302df9e);
    auVar58[0xf] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302df9f);
    auVar30[0] = -((char)*param_1 == UNK_14302dfa0);
    auVar30[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302dfa1);
    auVar30[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302dfa2);
    auVar30[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dfa3);
    auVar30[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dfa4);
    auVar30[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dfa5);
    auVar30[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dfa6);
    auVar30[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dfa7);
    auVar30[8] = -((char)param_1[1] == UNK_14302dfa8);
    auVar30[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dfa9);
    auVar30[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302dfaa);
    auVar30[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302dfab);
    auVar30[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302dfac);
    auVar30[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dfad);
    auVar30[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dfae);
    auVar30[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302dfaf);
    auVar30 = auVar30 & auVar58;
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
      return 0xff05;
    }
    auVar59[0] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dfb0);
    auVar59[1] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dfb1);
    auVar59[2] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dfb2);
    auVar59[3] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dfb3);
    auVar59[4] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dfb4);
    auVar59[5] = -((char)param_1[1] == UNK_14302dfb5);
    auVar59[6] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dfb6);
    auVar59[7] = -(*(char *)((longlong)param_1 + 10) == UNK_14302dfb7);
    auVar59[8] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302dfb8);
    auVar59[9] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302dfb9);
    auVar59[10] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dfba);
    auVar59[0xb] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dfbb);
    auVar59[0xc] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302dfbc);
    auVar59[0xd] = -((char)param_1[2] == UNK_14302dfbd);
    auVar59[0xe] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302dfbe);
    auVar59[0xf] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302dfbf);
    auVar31[0] = -((char)*param_1 == UNK_14302dfc0);
    auVar31[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302dfc1);
    auVar31[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302dfc2);
    auVar31[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dfc3);
    auVar31[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dfc4);
    auVar31[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dfc5);
    auVar31[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dfc6);
    auVar31[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dfc7);
    auVar31[8] = -((char)param_1[1] == UNK_14302dfc8);
    auVar31[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dfc9);
    auVar31[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302dfca);
    auVar31[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302dfcb);
    auVar31[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302dfcc);
    auVar31[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dfcd);
    auVar31[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dfce);
    auVar31[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302dfcf);
    auVar31 = auVar31 & auVar59;
    if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
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
      return 0xff0c;
    }
    auVar60[0] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dfd0);
    auVar60[1] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dfd1);
    auVar60[2] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dfd2);
    auVar60[3] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dfd3);
    auVar60[4] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dfd4);
    auVar60[5] = -((char)param_1[1] == UNK_14302dfd5);
    auVar60[6] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dfd6);
    auVar60[7] = -(*(char *)((longlong)param_1 + 10) == UNK_14302dfd7);
    auVar60[8] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302dfd8);
    auVar60[9] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302dfd9);
    auVar60[10] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dfda);
    auVar60[0xb] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dfdb);
    auVar60[0xc] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302dfdc);
    auVar60[0xd] = -((char)param_1[2] == UNK_14302dfdd);
    auVar60[0xe] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302dfde);
    auVar60[0xf] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302dfdf);
    auVar32[0] = -((char)*param_1 == UNK_14302dfe0);
    auVar32[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302dfe1);
    auVar32[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302dfe2);
    auVar32[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dfe3);
    auVar32[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dfe4);
    auVar32[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dfe5);
    auVar32[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dfe6);
    auVar32[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dfe7);
    auVar32[8] = -((char)param_1[1] == UNK_14302dfe8);
    auVar32[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dfe9);
    auVar32[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302dfea);
    auVar32[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302dfeb);
    auVar32[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302dfec);
    auVar32[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dfed);
    auVar32[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dfee);
    auVar32[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302dfef);
    auVar32 = auVar32 & auVar60;
    if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff14;
    }
    auVar61[0] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dff0);
    auVar61[1] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dff1);
    auVar61[2] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dff2);
    auVar61[3] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dff3);
    auVar61[4] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dff4);
    auVar61[5] = -((char)param_1[1] == UNK_14302dff5);
    auVar61[6] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dff6);
    auVar61[7] = -(*(char *)((longlong)param_1 + 10) == UNK_14302dff7);
    auVar61[8] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302dff8);
    auVar61[9] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302dff9);
    auVar61[10] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dffa);
    auVar61[0xb] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dffb);
    auVar61[0xc] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302dffc);
    auVar61[0xd] = -((char)param_1[2] == UNK_14302dffd);
    auVar61[0xe] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302dffe);
    auVar61[0xf] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302dfff);
    auVar33[0] = -((char)*param_1 == UNK_14302e000);
    auVar33[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302e001);
    auVar33[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302e002);
    auVar33[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302e003);
    auVar33[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302e004);
    auVar33[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302e005);
    auVar33[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302e006);
    auVar33[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302e007);
    auVar33[8] = -((char)param_1[1] == UNK_14302e008);
    auVar33[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302e009);
    auVar33[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302e00a);
    auVar33[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302e00b);
    auVar33[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302e00c);
    auVar33[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302e00d);
    auVar33[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302e00e);
    auVar33[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302e00f);
    auVar33 = auVar33 & auVar61;
    if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff2e;
    }
    auVar62[0] = -(*(char *)((longlong)param_1 + 3) == UNK_14302e010);
    auVar62[1] = -(*(char *)((longlong)param_1 + 4) == UNK_14302e011);
    auVar62[2] = -(*(char *)((longlong)param_1 + 5) == UNK_14302e012);
    auVar62[3] = -(*(char *)((longlong)param_1 + 6) == UNK_14302e013);
    auVar62[4] = -(*(char *)((longlong)param_1 + 7) == UNK_14302e014);
    auVar62[5] = -((char)param_1[1] == UNK_14302e015);
    auVar62[6] = -(*(char *)((longlong)param_1 + 9) == UNK_14302e016);
    auVar62[7] = -(*(char *)((longlong)param_1 + 10) == UNK_14302e017);
    auVar62[8] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302e018);
    auVar62[9] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302e019);
    auVar62[10] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302e01a);
    auVar62[0xb] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302e01b);
    auVar62[0xc] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302e01c);
    auVar62[0xd] = -((char)param_1[2] == UNK_14302e01d);
    auVar62[0xe] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302e01e);
    auVar62[0xf] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302e01f);
    auVar34[0] = -((char)*param_1 == UNK_14302e020);
    auVar34[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302e021);
    auVar34[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302e022);
    auVar34[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302e023);
    auVar34[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302e024);
    auVar34[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302e025);
    auVar34[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302e026);
    auVar34[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302e027);
    auVar34[8] = -((char)param_1[1] == UNK_14302e028);
    auVar34[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302e029);
    auVar34[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302e02a);
    auVar34[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302e02b);
    auVar34[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302e02c);
    auVar34[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302e02d);
    auVar34[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302e02e);
    auVar34[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302e02f);
    auVar34 = auVar34 & auVar62;
    uVar6 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar34[0xf] >> 7) << 0xf;
    uVar5 = 0x31;
    goto code_r0x0001409d53c9;
  case 0xc:
    uVar2 = (undefined4)param_1[2];
    auVar40[0] = -((char)uVar2 == UNK_14302e030);
    auVar40[1] = -((char)((uint)uVar2 >> 8) == UNK_14302e031);
    auVar40[2] = -((char)((uint)uVar2 >> 0x10) == UNK_14302e032);
    auVar40[3] = -((char)((uint)uVar2 >> 0x18) == UNK_14302e033);
    auVar40[4] = -(UNK_14302e034 == '\0');
    auVar40[5] = -(UNK_14302e035 == '\0');
    auVar40[6] = -(UNK_14302e036 == '\0');
    auVar40[7] = -(UNK_14302e037 == '\0');
    auVar40[8] = -(UNK_14302e038 == '\0');
    auVar40[9] = -(UNK_14302e039 == '\0');
    auVar40[10] = -(UNK_14302e03a == '\0');
    auVar40[0xb] = -(UNK_14302e03b == '\0');
    auVar40[0xc] = -(UNK_14302e03c == '\0');
    auVar40[0xd] = -(UNK_14302e03d == '\0');
    auVar40[0xe] = -(UNK_14302e03e == '\0');
    auVar40[0xf] = -(UNK_14302e03f == '\0');
    auVar8[0] = -((char)*param_1 == UNK_14302e040);
    auVar8[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302e041);
    auVar8[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302e042);
    auVar8[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302e043);
    auVar8[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302e044);
    auVar8[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302e045);
    auVar8[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302e046);
    auVar8[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302e047);
    auVar8[8] = -((char)param_1[1] == UNK_14302e048);
    auVar8[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302e049);
    auVar8[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302e04a);
    auVar8[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302e04b);
    auVar8[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302e04c);
    auVar8[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302e04d);
    auVar8[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302e04e);
    auVar8[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302e04f);
    auVar8 = auVar8 & auVar40;
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) == 0xffff) {
      return 0;
    }
    uVar2 = (undefined4)param_1[2];
    auVar41[0] = -((char)uVar2 == UNK_14302e050);
    auVar41[1] = -((char)((uint)uVar2 >> 8) == UNK_14302e051);
    auVar41[2] = -((char)((uint)uVar2 >> 0x10) == UNK_14302e052);
    auVar41[3] = -((char)((uint)uVar2 >> 0x18) == UNK_14302e053);
    auVar41[4] = -(UNK_14302e054 == '\0');
    auVar41[5] = -(UNK_14302e055 == '\0');
    auVar41[6] = -(UNK_14302e056 == '\0');
    auVar41[7] = -(UNK_14302e057 == '\0');
    auVar41[8] = -(UNK_14302e058 == '\0');
    auVar41[9] = -(UNK_14302e059 == '\0');
    auVar41[10] = -(UNK_14302e05a == '\0');
    auVar41[0xb] = -(UNK_14302e05b == '\0');
    auVar41[0xc] = -(UNK_14302e05c == '\0');
    auVar41[0xd] = -(UNK_14302e05d == '\0');
    auVar41[0xe] = -(UNK_14302e05e == '\0');
    auVar41[0xf] = -(UNK_14302e05f == '\0');
    auVar9[0] = -((char)*param_1 == UNK_14302e060);
    auVar9[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302e061);
    auVar9[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302e062);
    auVar9[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302e063);
    auVar9[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302e064);
    auVar9[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302e065);
    auVar9[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302e066);
    auVar9[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302e067);
    auVar9[8] = -((char)param_1[1] == UNK_14302e068);
    auVar9[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302e069);
    auVar9[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302e06a);
    auVar9[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302e06b);
    auVar9[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302e06c);
    auVar9[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302e06d);
    auVar9[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302e06e);
    auVar9[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302e06f);
    auVar9 = auVar9 & auVar41;
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff06;
    }
    uVar2 = (undefined4)param_1[2];
    auVar67[0] = -((char)uVar2 == UNK_14302e070);
    auVar67[1] = -((char)((uint)uVar2 >> 8) == UNK_14302e071);
    auVar67[2] = -((char)((uint)uVar2 >> 0x10) == UNK_14302e072);
    auVar67[3] = -((char)((uint)uVar2 >> 0x18) == UNK_14302e073);
    auVar67[4] = -(UNK_14302e074 == '\0');
    auVar67[5] = -(UNK_14302e075 == '\0');
    auVar67[6] = -(UNK_14302e076 == '\0');
    auVar67[7] = -(UNK_14302e077 == '\0');
    auVar67[8] = -(UNK_14302e078 == '\0');
    auVar67[9] = -(UNK_14302e079 == '\0');
    auVar67[10] = -(UNK_14302e07a == '\0');
    auVar67[0xb] = -(UNK_14302e07b == '\0');
    auVar67[0xc] = -(UNK_14302e07c == '\0');
    auVar67[0xd] = -(UNK_14302e07d == '\0');
    auVar67[0xe] = -(UNK_14302e07e == '\0');
    auVar67[0xf] = -(UNK_14302e07f == '\0');
    auVar42[0] = -((char)*param_1 == 'c');
    auVar42[1] = -(*(char *)((longlong)param_1 + 1) == 'l');
    auVar42[2] = -(*(char *)((longlong)param_1 + 2) == 'u');
    auVar42[3] = -(*(char *)((longlong)param_1 + 3) == 't');
    auVar42[4] = -(*(char *)((longlong)param_1 + 4) == 't');
    auVar42[5] = -(*(char *)((longlong)param_1 + 5) == 'e');
    auVar42[6] = -(*(char *)((longlong)param_1 + 6) == 'r');
    auVar42[7] = -(*(char *)((longlong)param_1 + 7) == '/');
    auVar42[8] = -((char)param_1[1] == 'p');
    auVar42[9] = -(*(char *)((longlong)param_1 + 9) == 'l');
    auVar42[10] = -(*(char *)((longlong)param_1 + 10) == 'a');
    auVar42[0xb] = -(*(char *)((longlong)param_1 + 0xb) == 'n');
    auVar42[0xc] = -(*(char *)((longlong)param_1 + 0xc) == 't');
    auVar42[0xd] = -(*(char *)((longlong)param_1 + 0xd) == '_');
    auVar42[0xe] = -(*(char *)((longlong)param_1 + 0xe) == 'p');
    auVar42[0xf] = -(*(char *)((longlong)param_1 + 0xf) == 'o');
    auVar67 = auVar67 & auVar42;
    if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff0f;
    }
    uVar2 = (undefined4)param_1[2];
    auVar43[0] = -((char)uVar2 == UNK_14302e080);
    auVar43[1] = -((char)((uint)uVar2 >> 8) == UNK_14302e081);
    auVar43[2] = -((char)((uint)uVar2 >> 0x10) == UNK_14302e082);
    auVar43[3] = -((char)((uint)uVar2 >> 0x18) == UNK_14302e083);
    auVar43[4] = -(UNK_14302e084 == '\0');
    auVar43[5] = -(UNK_14302e085 == '\0');
    auVar43[6] = -(UNK_14302e086 == '\0');
    auVar43[7] = -(UNK_14302e087 == '\0');
    auVar43[8] = -(UNK_14302e088 == '\0');
    auVar43[9] = -(UNK_14302e089 == '\0');
    auVar43[10] = -(UNK_14302e08a == '\0');
    auVar43[0xb] = -(UNK_14302e08b == '\0');
    auVar43[0xc] = -(UNK_14302e08c == '\0');
    auVar43[0xd] = -(UNK_14302e08d == '\0');
    auVar43[0xe] = -(UNK_14302e08e == '\0');
    auVar43[0xf] = -(UNK_14302e08f == '\0');
    auVar10[0] = -((char)*param_1 == UNK_14302e090);
    auVar10[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302e091);
    auVar10[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302e092);
    auVar10[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302e093);
    auVar10[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302e094);
    auVar10[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302e095);
    auVar10[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302e096);
    auVar10[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302e097);
    auVar10[8] = -((char)param_1[1] == UNK_14302e098);
    auVar10[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302e099);
    auVar10[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302e09a);
    auVar10[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302e09b);
    auVar10[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302e09c);
    auVar10[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302e09d);
    auVar10[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302e09e);
    auVar10[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302e09f);
    auVar10 = auVar10 & auVar43;
    if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar10[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff2d;
    }
    break;
  case 0xd:
    auVar47[0] = -(*(char *)((longlong)param_1 + 5) == UNK_14302ddd0);
    auVar47[1] = -(*(char *)((longlong)param_1 + 6) == UNK_14302ddd1);
    auVar47[2] = -(*(char *)((longlong)param_1 + 7) == UNK_14302ddd2);
    auVar47[3] = -((char)param_1[1] == UNK_14302ddd3);
    auVar47[4] = -(*(char *)((longlong)param_1 + 9) == UNK_14302ddd4);
    auVar47[5] = -(*(char *)((longlong)param_1 + 10) == UNK_14302ddd5);
    auVar47[6] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302ddd6);
    auVar47[7] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302ddd7);
    auVar47[8] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302ddd8);
    auVar47[9] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302ddd9);
    auVar47[10] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302ddda);
    auVar47[0xb] = -((char)param_1[2] == UNK_14302dddb);
    auVar47[0xc] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302dddc);
    auVar47[0xd] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302dddd);
    auVar47[0xe] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302ddde);
    auVar47[0xf] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302dddf);
    auVar14[0] = -((char)*param_1 == UNK_14302dde0);
    auVar14[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302dde1);
    auVar14[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302dde2);
    auVar14[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dde3);
    auVar14[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dde4);
    auVar14[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dde5);
    auVar14[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dde6);
    auVar14[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dde7);
    auVar14[8] = -((char)param_1[1] == UNK_14302dde8);
    auVar14[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dde9);
    auVar14[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302ddea);
    auVar14[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302ddeb);
    auVar14[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302ddec);
    auVar14[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dded);
    auVar14[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302ddee);
    auVar14[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302ddef);
    auVar14 = auVar14 & auVar47;
    if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff12;
    }
    auVar48[0] = -(*(char *)((longlong)param_1 + 5) == UNK_14302ddf0);
    auVar48[1] = -(*(char *)((longlong)param_1 + 6) == UNK_14302ddf1);
    auVar48[2] = -(*(char *)((longlong)param_1 + 7) == UNK_14302ddf2);
    auVar48[3] = -((char)param_1[1] == UNK_14302ddf3);
    auVar48[4] = -(*(char *)((longlong)param_1 + 9) == UNK_14302ddf4);
    auVar48[5] = -(*(char *)((longlong)param_1 + 10) == UNK_14302ddf5);
    auVar48[6] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302ddf6);
    auVar48[7] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302ddf7);
    auVar48[8] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302ddf8);
    auVar48[9] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302ddf9);
    auVar48[10] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302ddfa);
    auVar48[0xb] = -((char)param_1[2] == UNK_14302ddfb);
    auVar48[0xc] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302ddfc);
    auVar48[0xd] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302ddfd);
    auVar48[0xe] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302ddfe);
    auVar48[0xf] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302ddff);
    auVar15[0] = -((char)*param_1 == UNK_14302de00);
    auVar15[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de01);
    auVar15[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de02);
    auVar15[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de03);
    auVar15[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de04);
    auVar15[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de05);
    auVar15[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de06);
    auVar15[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de07);
    auVar15[8] = -((char)param_1[1] == UNK_14302de08);
    auVar15[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de09);
    auVar15[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de0a);
    auVar15[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de0b);
    auVar15[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de0c);
    auVar15[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de0d);
    auVar15[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de0e);
    auVar15[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de0f);
    auVar15 = auVar15 & auVar48;
    uVar6 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar15[0xf] >> 7) << 0xf;
    uVar5 = 0x2f;
    goto code_r0x0001409d53c9;
  case 0xe:
    auVar44[0] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de60);
    auVar44[1] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de61);
    auVar44[2] = -((char)param_1[1] == UNK_14302de62);
    auVar44[3] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de63);
    auVar44[4] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de64);
    auVar44[5] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de65);
    auVar44[6] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de66);
    auVar44[7] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de67);
    auVar44[8] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de68);
    auVar44[9] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de69);
    auVar44[10] = -((char)param_1[2] == UNK_14302de6a);
    auVar44[0xb] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302de6b);
    auVar44[0xc] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302de6c);
    auVar44[0xd] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302de6d);
    auVar44[0xe] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302de6e);
    auVar44[0xf] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302de6f);
    auVar11[0] = -((char)*param_1 == UNK_14302de70);
    auVar11[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de71);
    auVar11[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de72);
    auVar11[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de73);
    auVar11[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de74);
    auVar11[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de75);
    auVar11[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de76);
    auVar11[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de77);
    auVar11[8] = -((char)param_1[1] == UNK_14302de78);
    auVar11[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de79);
    auVar11[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de7a);
    auVar11[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de7b);
    auVar11[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de7c);
    auVar11[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de7d);
    auVar11[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de7e);
    auVar11[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de7f);
    auVar11 = auVar11 & auVar44;
    if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar11[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff1c;
    }
    auVar45[0] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de80);
    auVar45[1] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de81);
    auVar45[2] = -((char)param_1[1] == UNK_14302de82);
    auVar45[3] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de83);
    auVar45[4] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de84);
    auVar45[5] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de85);
    auVar45[6] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de86);
    auVar45[7] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de87);
    auVar45[8] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de88);
    auVar45[9] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de89);
    auVar45[10] = -((char)param_1[2] == UNK_14302de8a);
    auVar45[0xb] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302de8b);
    auVar45[0xc] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302de8c);
    auVar45[0xd] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302de8d);
    auVar45[0xe] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302de8e);
    auVar45[0xf] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302de8f);
    auVar12[0] = -((char)*param_1 == UNK_14302de90);
    auVar12[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de91);
    auVar12[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de92);
    auVar12[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de93);
    auVar12[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de94);
    auVar12[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de95);
    auVar12[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de96);
    auVar12[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de97);
    auVar12[8] = -((char)param_1[1] == UNK_14302de98);
    auVar12[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de99);
    auVar12[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de9a);
    auVar12[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de9b);
    auVar12[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de9c);
    auVar12[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de9d);
    auVar12[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de9e);
    auVar12[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de9f);
    auVar12 = auVar12 & auVar45;
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff0b;
    }
    auVar46[0] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dea0);
    auVar46[1] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dea1);
    auVar46[2] = -((char)param_1[1] == UNK_14302dea2);
    auVar46[3] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dea3);
    auVar46[4] = -(*(char *)((longlong)param_1 + 10) == UNK_14302dea4);
    auVar46[5] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302dea5);
    auVar46[6] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302dea6);
    auVar46[7] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302dea7);
    auVar46[8] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dea8);
    auVar46[9] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302dea9);
    auVar46[10] = -((char)param_1[2] == UNK_14302deaa);
    auVar46[0xb] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302deab);
    auVar46[0xc] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302deac);
    auVar46[0xd] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302dead);
    auVar46[0xe] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302deae);
    auVar46[0xf] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302deaf);
    auVar13[0] = -((char)*param_1 == UNK_14302de50);
    auVar13[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de51);
    auVar13[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de52);
    auVar13[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de53);
    auVar13[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de54);
    auVar13[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de55);
    auVar13[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de56);
    auVar13[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de57);
    auVar13[8] = -((char)param_1[1] == UNK_14302de58);
    auVar13[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de59);
    auVar13[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de5a);
    auVar13[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de5b);
    auVar13[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de5c);
    auVar13[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de5d);
    auVar13[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de5e);
    auVar13[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de5f);
    auVar13 = auVar13 & auVar46;
    if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff19;
    }
    iVar4 = pub_142e32750(auVar13._0_8_,&UNK_14302e5a1);
    if (iVar4 == 0) {
      return 0x27;
    }
code_r0x0001409d4f30:
    bVar3 = false;
    goto LAB_1409d5349;
  case 0xf:
    auVar39[0] = -(*(char *)((longlong)param_1 + 7) == UNK_14302ddb0);
    auVar39[1] = -((char)param_1[1] == UNK_14302ddb1);
    auVar39[2] = -(*(char *)((longlong)param_1 + 9) == UNK_14302ddb2);
    auVar39[3] = -(*(char *)((longlong)param_1 + 10) == UNK_14302ddb3);
    auVar39[4] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302ddb4);
    auVar39[5] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302ddb5);
    auVar39[6] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302ddb6);
    auVar39[7] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302ddb7);
    auVar39[8] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302ddb8);
    auVar39[9] = -((char)param_1[2] == UNK_14302ddb9);
    auVar39[10] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302ddba);
    auVar39[0xb] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302ddbb);
    auVar39[0xc] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302ddbc);
    auVar39[0xd] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302ddbd);
    auVar39[0xe] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302ddbe);
    auVar39[0xf] = -(*(char *)((longlong)param_1 + 0x16) == UNK_14302ddbf);
    auVar7[0] = -((char)*param_1 == DAT_14302ddc0);
    auVar7[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302ddc1);
    auVar7[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302ddc2);
    auVar7[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302ddc3);
    auVar7[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302ddc4);
    auVar7[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302ddc5);
    auVar7[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302ddc6);
    auVar7[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302ddc7);
    auVar7[8] = -((char)param_1[1] == UNK_14302ddc8);
    auVar7[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302ddc9);
    auVar7[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302ddca);
    auVar7[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302ddcb);
    auVar7[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302ddcc);
    auVar7[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302ddcd);
    auVar7[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302ddce);
    auVar7[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302ddcf);
    auVar7 = auVar7 & auVar39;
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff28;
    }
    break;
  case 0x10:
    lVar1 = param_1[2];
    auVar53[0] = -((char)lVar1 == UNK_14302deb0);
    auVar53[1] = -((char)((ulonglong)lVar1 >> 8) == UNK_14302deb1);
    auVar53[2] = -((char)((ulonglong)lVar1 >> 0x10) == UNK_14302deb2);
    auVar53[3] = -((char)((ulonglong)lVar1 >> 0x18) == UNK_14302deb3);
    auVar53[4] = -((char)((ulonglong)lVar1 >> 0x20) == UNK_14302deb4);
    auVar53[5] = -((char)((ulonglong)lVar1 >> 0x28) == UNK_14302deb5);
    auVar53[6] = -((char)((ulonglong)lVar1 >> 0x30) == UNK_14302deb6);
    auVar53[7] = -((char)((ulonglong)lVar1 >> 0x38) == UNK_14302deb7);
    auVar53[8] = -(UNK_14302deb8 == '\0');
    auVar53[9] = -(UNK_14302deb9 == '\0');
    auVar53[10] = -(UNK_14302deba == '\0');
    auVar53[0xb] = -(UNK_14302debb == '\0');
    auVar53[0xc] = -(UNK_14302debc == '\0');
    auVar53[0xd] = -(UNK_14302debd == '\0');
    auVar53[0xe] = -(UNK_14302debe == '\0');
    auVar53[0xf] = -(UNK_14302debf == '\0');
    auVar25[0] = -((char)*param_1 == UNK_14302dec0);
    auVar25[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302dec1);
    auVar25[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302dec2);
    auVar25[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302dec3);
    auVar25[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302dec4);
    auVar25[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302dec5);
    auVar25[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302dec6);
    auVar25[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302dec7);
    auVar25[8] = -((char)param_1[1] == UNK_14302dec8);
    auVar25[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302dec9);
    auVar25[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302deca);
    auVar25[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302decb);
    auVar25[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302decc);
    auVar25[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302decd);
    auVar25[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302dece);
    auVar25[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302decf);
    auVar25 = auVar25 & auVar53;
    if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
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
                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff1b;
    }
    lVar1 = param_1[2];
    auVar54[0] = -((char)lVar1 == UNK_14302ded0);
    auVar54[1] = -((char)((ulonglong)lVar1 >> 8) == UNK_14302ded1);
    auVar54[2] = -((char)((ulonglong)lVar1 >> 0x10) == UNK_14302ded2);
    auVar54[3] = -((char)((ulonglong)lVar1 >> 0x18) == UNK_14302ded3);
    auVar54[4] = -((char)((ulonglong)lVar1 >> 0x20) == UNK_14302ded4);
    auVar54[5] = -((char)((ulonglong)lVar1 >> 0x28) == UNK_14302ded5);
    auVar54[6] = -((char)((ulonglong)lVar1 >> 0x30) == UNK_14302ded6);
    auVar54[7] = -((char)((ulonglong)lVar1 >> 0x38) == UNK_14302ded7);
    auVar54[8] = -(UNK_14302ded8 == '\0');
    auVar54[9] = -(UNK_14302ded9 == '\0');
    auVar54[10] = -(UNK_14302deda == '\0');
    auVar54[0xb] = -(UNK_14302dedb == '\0');
    auVar54[0xc] = -(UNK_14302dedc == '\0');
    auVar54[0xd] = -(UNK_14302dedd == '\0');
    auVar54[0xe] = -(UNK_14302dede == '\0');
    auVar54[0xf] = -(UNK_14302dedf == '\0');
    auVar26[0] = -((char)*param_1 == UNK_14302de50);
    auVar26[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de51);
    auVar26[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de52);
    auVar26[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de53);
    auVar26[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de54);
    auVar26[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de55);
    auVar26[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de56);
    auVar26[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de57);
    auVar26[8] = -((char)param_1[1] == UNK_14302de58);
    auVar26[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de59);
    auVar26[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de5a);
    auVar26[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de5b);
    auVar26[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de5c);
    auVar26[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de5d);
    auVar26[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de5e);
    auVar26[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de5f);
    auVar26 = auVar26 & auVar54;
    if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff1a;
    }
    lVar1 = param_1[2];
    auVar55[0] = -((char)lVar1 == UNK_14302dee0);
    auVar55[1] = -((char)((ulonglong)lVar1 >> 8) == UNK_14302dee1);
    auVar55[2] = -((char)((ulonglong)lVar1 >> 0x10) == UNK_14302dee2);
    auVar55[3] = -((char)((ulonglong)lVar1 >> 0x18) == UNK_14302dee3);
    auVar55[4] = -((char)((ulonglong)lVar1 >> 0x20) == UNK_14302dee4);
    auVar55[5] = -((char)((ulonglong)lVar1 >> 0x28) == UNK_14302dee5);
    auVar55[6] = -((char)((ulonglong)lVar1 >> 0x30) == UNK_14302dee6);
    auVar55[7] = -((char)((ulonglong)lVar1 >> 0x38) == UNK_14302dee7);
    auVar55[8] = -(UNK_14302dee8 == '\0');
    auVar55[9] = -(UNK_14302dee9 == '\0');
    auVar55[10] = -(UNK_14302deea == '\0');
    auVar55[0xb] = -(UNK_14302deeb == '\0');
    auVar55[0xc] = -(UNK_14302deec == '\0');
    auVar55[0xd] = -(UNK_14302deed == '\0');
    auVar55[0xe] = -(UNK_14302deee == '\0');
    auVar55[0xf] = -(UNK_14302deef == '\0');
    auVar27[0] = -((char)*param_1 == UNK_14302de20);
    auVar27[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de21);
    auVar27[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de22);
    auVar27[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de23);
    auVar27[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de24);
    auVar27[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de25);
    auVar27[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de26);
    auVar27[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de27);
    auVar27[8] = -((char)param_1[1] == UNK_14302de28);
    auVar27[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de29);
    auVar27[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de2a);
    auVar27[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de2b);
    auVar27[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de2c);
    auVar27[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de2d);
    auVar27[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de2e);
    auVar27[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de2f);
    auVar27 = auVar27 & auVar55;
    if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff2b;
    }
    break;
  case 0x11:
    auVar56[0] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de30);
    auVar56[1] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de31);
    auVar56[2] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de32);
    auVar56[3] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de33);
    auVar56[4] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de34);
    auVar56[5] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de35);
    auVar56[6] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de36);
    auVar56[7] = -((char)param_1[2] == UNK_14302de37);
    auVar56[8] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302de38);
    auVar56[9] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302de39);
    auVar56[10] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302de3a);
    auVar56[0xb] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302de3b);
    auVar56[0xc] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302de3c);
    auVar56[0xd] = -(*(char *)((longlong)param_1 + 0x16) == UNK_14302de3d);
    auVar56[0xe] = -(*(char *)((longlong)param_1 + 0x17) == UNK_14302de3e);
    auVar56[0xf] = -((char)param_1[3] == UNK_14302de3f);
    auVar28[0] = -((char)*param_1 == UNK_14302de20);
    auVar28[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de21);
    auVar28[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de22);
    auVar28[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de23);
    auVar28[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de24);
    auVar28[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de25);
    auVar28[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de26);
    auVar28[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de27);
    auVar28[8] = -((char)param_1[1] == UNK_14302de28);
    auVar28[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de29);
    auVar28[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de2a);
    auVar28[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de2b);
    auVar28[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de2c);
    auVar28[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de2d);
    auVar28[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de2e);
    auVar28[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de2f);
    auVar28 = auVar28 & auVar56;
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
                (ushort)(byte)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff0d;
    }
    auVar57[0] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de40);
    auVar57[1] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de41);
    auVar57[2] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de42);
    auVar57[3] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de43);
    auVar57[4] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de44);
    auVar57[5] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de45);
    auVar57[6] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de46);
    auVar57[7] = -((char)param_1[2] == UNK_14302de47);
    auVar57[8] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302de48);
    auVar57[9] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302de49);
    auVar57[10] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302de4a);
    auVar57[0xb] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302de4b);
    auVar57[0xc] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302de4c);
    auVar57[0xd] = -(*(char *)((longlong)param_1 + 0x16) == UNK_14302de4d);
    auVar57[0xe] = -(*(char *)((longlong)param_1 + 0x17) == UNK_14302de4e);
    auVar57[0xf] = -((char)param_1[3] == UNK_14302de4f);
    auVar29[0] = -((char)*param_1 == UNK_14302de50);
    auVar29[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de51);
    auVar29[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de52);
    auVar29[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de53);
    auVar29[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de54);
    auVar29[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de55);
    auVar29[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de56);
    auVar29[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de57);
    auVar29[8] = -((char)param_1[1] == UNK_14302de58);
    auVar29[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de59);
    auVar29[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de5a);
    auVar29[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de5b);
    auVar29[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de5c);
    auVar29[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de5d);
    auVar29[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de5e);
    auVar29[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de5f);
    auVar29 = auVar29 & auVar57;
    bVar3 = true;
    if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff29;
    }
    goto LAB_1409d5349;
  case 0x14:
    auVar64[0] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de10);
    auVar64[1] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de11);
    auVar64[2] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de12);
    auVar64[3] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de13);
    auVar64[4] = -((char)param_1[2] == UNK_14302de14);
    auVar64[5] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302de15);
    auVar64[6] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302de16);
    auVar64[7] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302de17);
    auVar64[8] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302de18);
    auVar64[9] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302de19);
    auVar64[10] = -(*(char *)((longlong)param_1 + 0x16) == UNK_14302de1a);
    auVar64[0xb] = -(*(char *)((longlong)param_1 + 0x17) == UNK_14302de1b);
    auVar64[0xc] = -((char)param_1[3] == UNK_14302de1c);
    auVar64[0xd] = -(*(char *)((longlong)param_1 + 0x19) == UNK_14302de1d);
    auVar64[0xe] = -(*(char *)((longlong)param_1 + 0x1a) == UNK_14302de1e);
    auVar64[0xf] = -(*(char *)((longlong)param_1 + 0x1b) == UNK_14302de1f);
    auVar36[0] = -((char)*param_1 == UNK_14302de20);
    auVar36[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302de21);
    auVar36[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302de22);
    auVar36[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302de23);
    auVar36[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302de24);
    auVar36[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302de25);
    auVar36[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302de26);
    auVar36[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302de27);
    auVar36[8] = -((char)param_1[1] == UNK_14302de28);
    auVar36[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302de29);
    auVar36[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302de2a);
    auVar36[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302de2b);
    auVar36[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302de2c);
    auVar36[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302de2d);
    auVar36[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302de2e);
    auVar36[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302de2f);
    auVar36 = auVar36 & auVar64;
    if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) == 0xffff) {
      return 0xff13;
    }
  }
  bVar3 = false;
LAB_1409d5349:
  if (param_2 == 0x21) {
    iVar4 = pub_142e32750(param_1,&UNK_14302e5d5,0x21);
    if (iVar4 == 0) {
      return 0x37;
    }
  }
  else if ((param_2 == 0x1f) &&
          (auVar65[0] = -(*(char *)((longlong)param_1 + 0xf) == DAT_14302e0a0),
          auVar65[1] = -((char)param_1[2] == UNK_14302e0a1),
          auVar65[2] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302e0a2),
          auVar65[3] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302e0a3),
          auVar65[4] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302e0a4),
          auVar65[5] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302e0a5),
          auVar65[6] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302e0a6),
          auVar65[7] = -(*(char *)((longlong)param_1 + 0x16) == UNK_14302e0a7),
          auVar65[8] = -(*(char *)((longlong)param_1 + 0x17) == UNK_14302e0a8),
          auVar65[9] = -((char)param_1[3] == UNK_14302e0a9),
          auVar65[10] = -(*(char *)((longlong)param_1 + 0x19) == UNK_14302e0aa),
          auVar65[0xb] = -(*(char *)((longlong)param_1 + 0x1a) == UNK_14302e0ab),
          auVar65[0xc] = -(*(char *)((longlong)param_1 + 0x1b) == UNK_14302e0ac),
          auVar65[0xd] = -(*(char *)((longlong)param_1 + 0x1c) == UNK_14302e0ad),
          auVar65[0xe] = -(*(char *)((longlong)param_1 + 0x1d) == UNK_14302e0ae),
          auVar65[0xf] = -(*(char *)((longlong)param_1 + 0x1e) == UNK_14302e0af),
          auVar37[0] = -((char)*param_1 == DAT_14302ddc0),
          auVar37[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302ddc1),
          auVar37[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302ddc2),
          auVar37[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302ddc3),
          auVar37[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302ddc4),
          auVar37[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302ddc5),
          auVar37[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302ddc6),
          auVar37[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302ddc7),
          auVar37[8] = -((char)param_1[1] == UNK_14302ddc8),
          auVar37[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302ddc9),
          auVar37[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302ddca),
          auVar37[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302ddcb),
          auVar37[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302ddcc),
          auVar37[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302ddcd),
          auVar37[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302ddce),
          auVar37[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302ddcf),
          auVar37 = auVar37 & auVar65,
          (ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) == 0xffff)) {
    return 0xff36;
  }
  if (bVar3) {
    auVar66[0] = -(*(char *)((longlong)param_1 + 9) == DAT_14302e0b0);
    auVar66[1] = -(*(char *)((longlong)param_1 + 10) == UNK_14302e0b1);
    auVar66[2] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302e0b2);
    auVar66[3] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302e0b3);
    auVar66[4] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302e0b4);
    auVar66[5] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302e0b5);
    auVar66[6] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302e0b6);
    auVar66[7] = -((char)param_1[2] == UNK_14302e0b7);
    auVar66[8] = -(*(char *)((longlong)param_1 + 0x11) == UNK_14302e0b8);
    auVar66[9] = -(*(char *)((longlong)param_1 + 0x12) == UNK_14302e0b9);
    auVar66[10] = -(*(char *)((longlong)param_1 + 0x13) == UNK_14302e0ba);
    auVar66[0xb] = -(*(char *)((longlong)param_1 + 0x14) == UNK_14302e0bb);
    auVar66[0xc] = -(*(char *)((longlong)param_1 + 0x15) == UNK_14302e0bc);
    auVar66[0xd] = -(*(char *)((longlong)param_1 + 0x16) == UNK_14302e0bd);
    auVar66[0xe] = -(*(char *)((longlong)param_1 + 0x17) == UNK_14302e0be);
    auVar66[0xf] = -((char)param_1[3] == UNK_14302e0bf);
    auVar38[0] = -((char)*param_1 == DAT_14302e0c0);
    auVar38[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14302e0c1);
    auVar38[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14302e0c2);
    auVar38[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14302e0c3);
    auVar38[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14302e0c4);
    auVar38[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14302e0c5);
    auVar38[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14302e0c6);
    auVar38[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14302e0c7);
    auVar38[8] = -((char)param_1[1] == UNK_14302e0c8);
    auVar38[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14302e0c9);
    auVar38[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14302e0ca);
    auVar38[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14302e0cb);
    auVar38[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14302e0cc);
    auVar38[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14302e0cd);
    auVar38[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14302e0ce);
    auVar38[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14302e0cf);
    auVar38 = auVar38 & auVar66;
    uVar6 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar38[0xf] >> 7) << 0xf;
    uVar5 = 0x35;
code_r0x0001409d53c9:
    if (uVar6 == 0xffff) {
      return uVar5;
    }
  }
LAB_1409d5486:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14302e619,0x28,&UNK_14302e678);
}

