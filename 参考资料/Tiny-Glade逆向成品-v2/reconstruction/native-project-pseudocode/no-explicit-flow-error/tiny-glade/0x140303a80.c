// VA 0x140303a80, PDB extent 5932 bytes
// tiny_glade::app_config::impl$5::from_arg_matches_mut
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: tiny_glade::app_config::impl$5::from_arg_matches_mut
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_config.rs
   Extent: 5932 */

undefined8 * pdb_140303a80(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulonglong uStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  undefined8 uStack_108;
  ulonglong uStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  char cStack_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140681bc0(&uStack_70,param_2,&UNK_142f39cb2,0x15);
  cVar1 = pdb_140681500(param_2,&UNK_142f39cc7,0x1d);
  if (cVar1 == '\x02') {
    uVar5 = pdb_14026b1e0(9,&UNK_142f3af71,0x4f);
  }
  else {
    cVar2 = pdb_1406801a0(param_2,&UNK_142f39ce4,0xe);
    if (cVar2 == '\x02') {
      uVar5 = pdb_14026b1e0(9,&UNK_142f3b082,0x40);
    }
    else {
      pdb_140681bc0(&uStack_138,param_2,&UNK_142f39cf2,0x10);
      uVar5 = uStack_128;
      if (!SBORROW8(0,uStack_138)) {
        uStack_50 = uStack_138;
        pbStack_58 = pbStack_130;
        uVar10 = 0x9d02;
        uVar6 = pdb_140682890(param_2,&UNK_142f39d02,0x12);
        if ((uVar6 & 1) == 0) {
          uVar5 = pdb_14026b1e0(9,&UNK_142f3add2,0x44);
LAB_140303c29:
          param_1[1] = uVar5;
          *param_1 = 2;
        }
        else {
          cVar3 = pdb_140681500(param_2,&UNK_142f39d14,0x12);
          if (cVar3 == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3aee3,0x44);
            goto LAB_140303c29;
          }
          cStack_7d = pdb_140681500(param_2,&UNK_142f39d26,0x15);
          if (cStack_7d == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3ad8b,0x47);
            goto LAB_140303c29;
          }
          cStack_7c = pdb_140681500(param_2,&UNK_142f39d3b,0x1b);
          if (cStack_7c == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3abb0,0x4d);
            goto LAB_140303c29;
          }
          cStack_7b = pdb_140681500(param_2,&UNK_142f39d56,10);
          if (cStack_7b == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3b046,0x3c);
            goto LAB_140303c29;
          }
          cStack_7a = pdb_140681500(param_2,&UNK_142f39d60,0x10);
          if (cStack_7a == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3ae5a,0x42);
            goto LAB_140303c29;
          }
          cStack_79 = pdb_140681500(param_2,&UNK_142f39d70,0x10);
          if (cStack_79 == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3ad0c,0x42);
            goto LAB_140303c29;
          }
          cStack_78 = pdb_140681500(param_2,&UNK_142f39d80,0x10);
          if (cStack_78 == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3abfd,0x42);
            goto LAB_140303c29;
          }
          puVar11 = &UNK_142f39d90;
          uVar7 = pdb_140680860(param_2,&UNK_142f39d90,0x10);
          cStack_77 = pdb_140681500(param_2,&UNK_142f39da0,0x18);
          if (cStack_77 == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3af27,0x4a);
            goto LAB_140303c29;
          }
          pdb_140682230(&uStack_a0,param_2,&UNK_142f39db8,0x12);
          puVar12 = &UNK_142f39dca;
          uVar8 = pdb_140680eb0(param_2,&UNK_142f39dca,0x1a);
          pdb_140682230(&uStack_c0,param_2,&UNK_142f39de4,0xc);
          pdb_140682230(&uStack_e0,param_2,&UNK_142f39df0,0xc);
          pdb_140682230(&uStack_100,param_2,&UNK_142f39dfc,0xb);
          puVar13 = &UNK_142f39e07;
          uVar9 = pdb_140680860(param_2,&UNK_142f39e07,0x12);
          cStack_76 = pdb_140681500(param_2,&UNK_142f39e19,0xb);
          if (cStack_76 == '\x02') {
            uVar5 = pdb_14026b1e0(9,&UNK_142f3ad4e,0x3d);
            param_1[1] = uVar5;
            *param_1 = 2;
            if ((!SBORROW8(0,uStack_100)) && (uStack_100 != 0)) {
              pub_1406abac0(pbStack_f8,uStack_100,1);
            }
            if ((!SBORROW8(0,uStack_e0)) && (uStack_e0 != 0)) {
              pub_1406abac0(pbStack_d8,uStack_e0,1);
            }
            if ((!SBORROW8(0,uStack_c0)) && (uStack_c0 != 0)) {
              pub_1406abac0(pbStack_b8,uStack_c0,1);
            }
            if ((!SBORROW8(0,uStack_a0)) && (uStack_a0 != 0)) {
              pub_1406abac0(pbStack_98,uStack_a0,1);
            }
          }
          else {
            cStack_75 = pdb_140681500(param_2,&UNK_142f39e24,0x11);
            if (cStack_75 == '\x02') {
              uVar5 = pdb_14026b1e0(9,&UNK_142f3ac81,0x43);
LAB_140304002:
              param_1[1] = uVar5;
              *param_1 = 2;
            }
            else {
              cStack_74 = pdb_140681500(param_2,&UNK_142f39e35,0xb);
              if (cStack_74 == '\x02') {
                uVar5 = pdb_14026b1e0(9,&UNK_142f3afc0,0x3d);
                goto LAB_140304002;
              }
              pdb_140682230(&uStack_158,param_2,&UNK_142f39e40,2);
              pdb_140682230(&uStack_138,param_2,&UNK_142f39e42,0x14);
              pdb_140681bc0(&uStack_118,param_2,&UNK_142f39e56,0x13);
              cStack_73 = pdb_140681500(param_2,&UNK_142f39e69,0x16);
              if (cStack_73 == '\x02') {
                uVar5 = pdb_14026b1e0(9,&UNK_142f3acc4,0x48);
              }
              else {
                cStack_72 = pdb_140681500(param_2,&UNK_142f39e7f,0x17);
                if (cStack_72 == '\x02') {
                  uVar5 = pdb_14026b1e0(9,&UNK_142f3affd,0x49);
                }
                else {
                  cStack_71 = pdb_140681500(param_2,&UNK_142f39e96,0x15);
                  if (cStack_71 == '\x02') {
                    uVar5 = pdb_14026b1e0(9,&UNK_142f3ae9c,0x47);
                  }
                  else {
                    cVar4 = pdb_140681500(param_2,&UNK_142f39eab,0x12);
                    if (cVar4 != '\x02') {
                      param_1[0xb] = uStack_60;
                      param_1[9] = uStack_70;
                      param_1[10] = pbStack_68;
                      param_1[6] = uStack_50;
                      param_1[7] = pbStack_58;
                      param_1[8] = uVar5;
                      param_1[0xe] = uStack_90;
                      param_1[0xf] = uStack_88;
                      param_1[0xc] = uStack_a0;
                      param_1[0xd] = pbStack_98;
                      param_1[0x12] = uStack_b0;
                      param_1[0x13] = uStack_a8;
                      param_1[0x10] = uStack_c0;
                      param_1[0x11] = pbStack_b8;
                      param_1[0x16] = uStack_d0;
                      param_1[0x17] = uStack_c8;
                      param_1[0x14] = uStack_e0;
                      param_1[0x15] = pbStack_d8;
                      param_1[0x1a] = uStack_f0;
                      param_1[0x1b] = uStack_e8;
                      param_1[0x18] = uStack_100;
                      param_1[0x19] = pbStack_f8;
                      param_1[0x1e] = uStack_148;
                      param_1[0x1f] = uStack_140;
                      param_1[0x1c] = uStack_158;
                      param_1[0x1d] = pbStack_150;
                      param_1[0x22] = uStack_128;
                      param_1[0x23] = uStack_120;
                      param_1[0x20] = uStack_138;
                      param_1[0x21] = pbStack_130;
                      param_1[0x26] = uStack_108;
                      param_1[0x24] = uStack_118;
                      param_1[0x25] = pbStack_110;
                      *param_1 = uVar7;
                      param_1[1] = puVar11;
                      param_1[2] = uVar8;
                      param_1[3] = puVar12;
                      param_1[4] = uVar9;
                      param_1[5] = puVar13;
                      *(undefined2 *)(param_1 + 0x27) = uVar10;
                      *(char *)((longlong)param_1 + 0x13a) = cVar1;
                      *(char *)((longlong)param_1 + 0x13b) = cVar2;
                      *(char *)((longlong)param_1 + 0x13c) = cVar3;
                      *(char *)((longlong)param_1 + 0x13d) = cStack_7d;
                      *(char *)((longlong)param_1 + 0x13e) = cStack_7c;
                      *(char *)((longlong)param_1 + 0x13f) = cStack_7b;
                      *(char *)(param_1 + 0x28) = cStack_7a;
                      *(char *)((longlong)param_1 + 0x141) = cStack_79;
                      *(char *)((longlong)param_1 + 0x142) = cStack_78;
                      *(char *)((longlong)param_1 + 0x143) = cStack_77;
                      *(char *)((longlong)param_1 + 0x144) = cStack_76;
                      *(char *)((longlong)param_1 + 0x145) = cStack_75;
                      *(char *)((longlong)param_1 + 0x146) = cStack_74;
                      *(char *)((longlong)param_1 + 0x147) = cStack_73;
                      *(char *)(param_1 + 0x29) = cStack_72;
                      *(char *)((longlong)param_1 + 0x149) = cStack_71;
                      *(char *)((longlong)param_1 + 0x14a) = cVar4;
                      return param_1;
                    }
                    uVar5 = pdb_14026b1e0(9,&UNK_142f3ae16,0x44);
                  }
                }
              }
              param_1[1] = uVar5;
              *param_1 = 2;
              if ((!SBORROW8(0,uStack_118)) && (uStack_118 != 0)) {
                pub_1406abac0(pbStack_110,uStack_118,1);
              }
              if ((!SBORROW8(0,uStack_138)) && (uStack_138 != 0)) {
                pub_1406abac0(pbStack_130,uStack_138,1);
              }
              if ((!SBORROW8(0,uStack_158)) && (uStack_158 != 0)) {
                pub_1406abac0(pbStack_150,uStack_158,1);
              }
            }
            if ((!SBORROW8(0,uStack_100)) && (uStack_100 != 0)) {
              pub_1406abac0(pbStack_f8,uStack_100,1);
            }
            if ((!SBORROW8(0,uStack_e0)) && (uStack_e0 != 0)) {
              pub_1406abac0(pbStack_d8,uStack_e0,1);
            }
            if ((!SBORROW8(0,uStack_c0)) && (uStack_c0 != 0)) {
              pub_1406abac0(pbStack_b8,uStack_c0,1);
            }
            if ((!SBORROW8(0,uStack_a0)) && (uStack_a0 != 0)) {
              pub_1406abac0(pbStack_98,uStack_a0,1);
            }
          }
        }
        if (uStack_50 != 0) {
          pub_1406abac0(pbStack_58,uStack_50,1);
        }
        goto joined_r0x000140303c5f;
      }
      uVar5 = pdb_14026b1e0(9,&UNK_142f3ac3f,0x42);
    }
  }
  param_1[1] = uVar5;
  *param_1 = 2;
joined_r0x000140303c5f:
  if ((!SBORROW8(0,uStack_70)) && (uStack_70 != 0)) {
    pub_1406abac0(pbStack_68,uStack_70,1);
  }
  return param_1;
}

