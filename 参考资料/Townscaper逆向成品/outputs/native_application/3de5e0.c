// RVA 0x3de5e0 | Placemaker.Ui.ObjExporter$$Do
// PDB: ObjExporter_Do_mAE4A7AEF7ACDC3A97A024D2364A4630471D25083
// Body: [[103de5e0, 103def59] [103def5d, 103dfa95]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 1003e770 SetAt
// 1003fa10 List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
// 100547c0 List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
// 10068d20 Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
// 10068e90 List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 10069090 bankers_roundf
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e500 IsInst
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10192150 memset
// 10195ff0 _CIfmod
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 1021c740 Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 103dfae4 FUN_103dfae4
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10836080 ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
// 10a44e70 Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
// 10a45990 Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10c11700 Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
// 10cf6720 DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
// 10e13ac0 GridGenerator_HexToPlane_m5111038CB66C215D42B4436F75F77882EF48039F
// 10eae1e0 CultureInfo_GetCultureInfo_m757F4A8A690B1CDA1A498EBD2ED031B7A76546F3
// 10f04a30 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
// 10f04bc0 String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
// 10f04d40 String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
// 10f04ed0 String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11030e80 List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ObjExporter_Do_mAE4A7AEF7ACDC3A97A024D2364A4630471D25083
          (ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *param_1,String_t *param_2,
          MethodInfo *param_3)

{
  ByteFloat2_tDEB1B3A6999D4A1C80B012958C668D9FAAB3B581 BVar1;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar2;
  MaterialToExportU5BU5D_t43F4DF2F51BEE3F7F7120F11D1C3367DE738ADA3 *pMVar3;
  MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *pMVar4;
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar5;
  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *pLVar6;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar7;
  ActionU5BU5D_t3FA7448F5CB2D8B68DBEB43EC534F7DE8D06342E *pAVar8;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar9;
  Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *pSVar10;
  undefined4 uVar11;
  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *pLVar12;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar13;
  BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *pBVar14;
  List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *pLVar15;
  float fVar16;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar17;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar18;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar19;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar20;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar26;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar28;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar29;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar30;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar31;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar32;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar33;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar35;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar36;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar37;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar38;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar39;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar40;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar41;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar42;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar43;
  int *piVar44;
  int *piVar45;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar46;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar47;
  undefined1 *puVar48;
  undefined1 *puVar49;
  bool bVar50;
  uchar uVar51;
  String_t *pSVar52;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar53;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar54;
  unkbyte9 *extraout_EAX;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar55;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar56;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *pEVar57;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar58;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar59;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 *peVar60;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar61;
  String_t *pSVar62;
  String_t *pSVar63;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar64;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar65;
  Il2CppObject *pIVar66;
  Il2CppObject *pIVar67;
  int iVar68;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar69;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar70;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar71;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar72;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar73;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar74;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar75;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar76;
  Exception_t *pEVar77;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar78;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar79;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar80;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar81;
  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 *pCVar82;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar83;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar84;
  undefined2 uVar85;
  undefined2 uVar86;
  MethodInfo *pMVar87;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MStack_4d0;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_490;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B local_450;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B local_440;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 AStack_430;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B EStack_420;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_410;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_400;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_3c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_380;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 eStack_370;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 eStack_360;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 local_350;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 local_340;
  undefined1 local_330 [52];
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_298;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_288;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 local_278;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 local_268;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_258;
  int iStack_24c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_244;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_240;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_23c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_238;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_234;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_230;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_22c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_228;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_224;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_220;
  undefined8 local_21c;
  float local_214;
  undefined8 local_210;
  float local_208;
  undefined8 local_204;
  float local_1fc;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VStack_1f8;
  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *local_1f0;
  int local_1ec;
  float local_1e8;
  float fStack_1e4;
  undefined8 local_1e0;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_1d8;
  undefined8 local_1cc;
  String_t *local_1c4;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_1c0;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_1bc;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_1b8;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1b0;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_1a8;
  undefined8 local_1a0;
  String_t *local_198;
  undefined8 local_194;
  String_t *local_18c;
  undefined8 local_188;
  String_t *local_180;
  undefined8 local_17c;
  String_t *local_174;
  undefined4 auStack_170 [4];
  int local_160;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *local_15c;
  double local_158;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_150;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *local_144;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *local_140;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *local_13c;
  undefined8 uStack_138;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_130;
  List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *local_120;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *local_11c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_118;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_114;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_110;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_10c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_108;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_104;
  undefined8 uStack_100;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_f8;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_f4;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_f0;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_ec;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_e8;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_e4;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_e0;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_dc;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_d8;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_d4;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_d0;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_cc;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_c8;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_c4;
  int iStack_c0;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_bc;
  char local_b5;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_b4;
  undefined8 local_b0;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_a8 [2];
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_a0;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_9c;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *local_98;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *local_94;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_90;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_88;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_84;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_80;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_7c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_78;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_74;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_70;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_6c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_68;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_64;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_60;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_5c;
  undefined4 local_58;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_54;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_50;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_4c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_48;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_44;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_40;
  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 *local_3c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_38;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDStack_34;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_30;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *local_2c;
  undefined1 *puStack_24;
  undefined1 *local_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  int local_14;

  puStack_24 = &stack0xfffffffc;
  local_14._0_1_ = 0xff;
  local_14._1_3_ = 0xffffff;
  puStack_18 = &__ehhandler__ObjExporter_Do_mAE4A7AEF7ACDC3A97A024D2364A4630471D25083;
  pvStack_1c = ExceptionList;
  local_20 = &stack0xfffffb20;
  ExceptionList = &pvStack_1c;
  puVar48 = &stack0xfffffffc;
  puVar49 = &stack0xfffffb20;
  if (DAT_1151c898 == '\0') {
    ExceptionList = &pvStack_1c;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m6CCB6E2E588C6CCECCC927291FB4291B1FE73289_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisPropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69_mA0FF3023F767502EF6640CB87F6D15748433BBDD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DictPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m38D3FAFE9B60D88A306B4698E236A0064E7F76A2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DictPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5BD0D2BF815778FED87B53F0C5F407237A937297_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DictPool_2_Get_m3D2F22CC6C3BC3C3AB44D2177C4BCEDFBD1272D3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DictPool_2_Get_mFD6AD6182BD97D67F06BA7EA4B89C4B075FB6502_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DictPool_2_t740B064567E4938A0FD3731EB6B4919E3E1D6873_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DictPool_2_tA7791DB2EB9C5E4311E469A2513FF29B32BCE677_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m2BFB6987D35DE2246B731A46FEBD4D47776B7E78_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_m191DF7FB0C93C167D7030AACC2CAC71225D1CDA9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m480514E651BC90B3F524CCE1462E6426D0F12364_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m7D3BCACC482CB33BB9A162BFA7D99263F5EF731B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m8222297DD2654B108B75C908CDFBD7D6AF7C8E69_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_m4FFF46C2277B3F90E529CF62038401690164A494_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mC8EFC64ACD0BD264530EC1341BFD1FA2D06F7CBA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mDC261D7340126A64E1CC38D3FEA974BF7E068DD4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_m707C6B3F24CCF8A17B9480542093F3707CADE3FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_mCD29EC53097D0B338A44A70DAFD43D31B142588B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_mDBC0822D1F86A1D090DF5564ABA801C5A07DCA04_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisString_t_mD4C08C7926077CD5FDDF31BCBEB44C29BA7EC1C6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m299487B2E6F43A8D051ADDC2FC119D134497387D_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m8CA671D4142D0597A69B71DE8F838D74E2DD76AE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t02AAA7CEE4ABE3672AFBB9482A86504F365AE749_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m27D5DE804DC04EC004BADF42DA9C256C0472AF27_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_m437694725739E4A4A5D602CBF3F2C85B0ACFA6A4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_mA58E0AE60306C128DC9F0D41DA121171F040F9AC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_m415CC40F3C018F1D693A921F3C55EBA0C7E36086_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m320FF0DD39F83A684F9E277C6A0D07BC3CEDA7D9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65035CF9CB2C49CFD5E7AB76FE5A7D860BDCD530_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mC5C87EB162C43A4BC22E218C3A2D95DB961F5420_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mD6469330B5381EC92DDF375773100F6372E6114C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mA819AC4D6EC8BABA8328B8366A4F71E7BB7FB982_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2B4DAE1EA8E16D10FE05654C07C69EFF8140A997);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3673FF002279CCCC33A113C482FD3DB9FE3D429A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral367C6EC3CDECA0FCEB60D2A8D96666C62FD861DA);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5B1A1DCC176F13C7CEA6985683AF3FF7CD492098);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral79443EA6B541034C604FE9A19395BF95CCE71A22);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral93F9354DB37CAD8FD3A321410534387A582EED79);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralC65A16629EB62B0A99CB5A8DFF89A793CDD2D02B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD3A51F9772FB32EDF87B5B88D5BDD5815CBD9890);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD76B42AEB8D67783912E24BD8B96B10B5B34EF5B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralEDB278EBA330168DC99FC7057854369F7BFD0B42);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralF5C71C34EAA84294A9E69E1D19897A749024C0FF);
    DAT_1151c898 = '\x01';
    puVar48 = puStack_24;
    puVar49 = local_20;
  }
  local_20 = puVar49;
  puStack_24 = puVar48;
  local_c8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_ec = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_288.___list_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0;
  local_288.___index_1 = 0;
  local_288.___version_2 = 0;
  local_288.___current_3 = (Il2CppObject *)0x0;
  local_e8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_278.___list_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0;
  local_278.___index_1 = 0;
  local_278.___version_2 = 0;
  local_278.___current_3 = (Il2CppObject *)0x0;
  local_1d8.___z_2 = 0;
  local_1d8.___x_0 = 0;
  local_1d8.___y_1 = 0;
  local_1a8.___x_0 = 0;
  local_1a8.___y_1 = 0;
  local_1cc = 0;
  local_1c4 = (String_t *)0x0;
  uStack_138 = (double)(ulonglong)(uint)uStack_138;
  local_1ec = 0;
  local_298.___list_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0;
  local_298.___index_1 = 0;
  local_298.___version_2 = 0;
  local_298.___current_3 = (Il2CppObject *)0x0;
  local_1f0 = (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0;
  memset((uchar *)&local_400,'\0',0x40);
  local_e4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_e0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_d8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_17c = 0;
  local_174 = (String_t *)0x0;
  local_1b8.___x_0 = 0;
  local_1b8.___y_1 = 0;
  local_188 = 0;
  local_180 = (String_t *)0x0;
  local_204 = 0;
  local_1fc = 0.0;
  local_1e0 = 0;
  local_210 = 0;
  local_208 = 0.0;
  local_1e8 = 0.0;
  fStack_1e4 = 0.0;
  memset((uchar *)&local_3c0,'\0',0x40);
  local_214 = 0.0;
  local_f0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_21c = 0;
  local_cc = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_f4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_194 = 0;
  local_18c = (String_t *)0x0;
  local_1b0.___x_0 = 0.0;
  local_1b0.___y_1 = 0.0;
  local_1a0 = 0;
  local_198 = (String_t *)0x0;
  local_58 = 0;
  local_2c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0;
  local_160 = 0;
  pSVar52 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17
                      (_stringLiteralC65A16629EB62B0A99CB5A8DFF89A793CDD2D02B,
                       (Il2CppObject *)param_2,(MethodInfo *)0x0);
  param_1->___outputString_6 = pSVar52;
  if ((DictPool_2_t740B064567E4938A0FD3731EB6B4919E3E1D6873_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (DictPool_2_t740B064567E4938A0FD3731EB6B4919E3E1D6873_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (DictPool_2_t740B064567E4938A0FD3731EB6B4919E3E1D6873_il2cpp_TypeInfo_var);
  }
  local_13c = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
              DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
                        (4,
                         DictPool_2_Get_mFD6AD6182BD97D67F06BA7EA4B89C4B075FB6502_RuntimeMethod_var)
  ;
  local_15c = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
              DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
                        (4,
                         DictPool_2_Get_mFD6AD6182BD97D67F06BA7EA4B89C4B075FB6502_RuntimeMethod_var)
  ;
  if ((DictPool_2_tA7791DB2EB9C5E4311E469A2513FF29B32BCE677_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (DictPool_2_tA7791DB2EB9C5E4311E469A2513FF29B32BCE677_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (DictPool_2_tA7791DB2EB9C5E4311E469A2513FF29B32BCE677_il2cpp_TypeInfo_var);
  }
  local_140 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
              DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
                        (4,
                         DictPool_2_Get_m3D2F22CC6C3BC3C3AB44D2177C4BCEDFBD1272D3_RuntimeMethod_var)
  ;
  local_144 = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
              DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
                        (4,
                         DictPool_2_Get_mFD6AD6182BD97D67F06BA7EA4B89C4B075FB6502_RuntimeMethod_var)
  ;
  if ((ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
  }
  local_9c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
  if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
  }
  local_88 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
  if ((ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var);
  }
  local_11c = (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)
              ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                        (ListPool_1_Get_m8CA671D4142D0597A69B71DE8F838D74E2DD76AE_RuntimeMethod_var)
  ;
  local_118 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
              ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                        (ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var)
  ;
  if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
  }
  local_1c0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
              ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                        (ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var)
  ;
  uStack_100 = (double)CONCAT44(local_1c0,(undefined4)uStack_100);
  local_d4 = local_1c0;
  local_38 = local_1c0;
  if ((ListPool_1_t02AAA7CEE4ABE3672AFBB9482A86504F365AE749_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t02AAA7CEE4ABE3672AFBB9482A86504F365AE749_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t02AAA7CEE4ABE3672AFBB9482A86504F365AE749_il2cpp_TypeInfo_var);
  }
  local_5c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_m299487B2E6F43A8D051ADDC2FC119D134497387D_RuntimeMethod_var);
  local_60 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_m299487B2E6F43A8D051ADDC2FC119D134497387D_RuntimeMethod_var);
  local_a0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_m299487B2E6F43A8D051ADDC2FC119D134497387D_RuntimeMethod_var);
  local_64 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                       (ListPool_1_Get_m299487B2E6F43A8D051ADDC2FC119D134497387D_RuntimeMethod_var);
  local_80 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_f8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_44 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_d0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_4c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_c4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  if ((CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var->cctor_finished
         == 0)) {
    il2cpp_runtime_class_init
              (CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
  }
  local_3c = CultureInfo_GetCultureInfo_m757F4A8A690B1CDA1A498EBD2ED031B7A76546F3
                       (_stringLiteral3A971881AF6B7B211E34707E857DEC5F36487877,(MethodInfo *)0x0);
  local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar2 = param_1->___master_4->___graph_7,
     local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
     pGVar2 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    local_258.___x_2 = (float)(pGVar2->___bounds_28).___c0_0.___x_0;
    local_258.___y_3 = (float)(pGVar2->___bounds_28).___c0_0.___y_1;
    local_258.___z_4 = (float)(pGVar2->___bounds_28).___c0_0.___z_2;
    iStack_24c = (pGVar2->___bounds_28).___c1_1.___x_0;
    local_90.___x_0 = (float)(pGVar2->___bounds_28).___c1_1.___y_1;
    local_90.___y_1 = (float)(pGVar2->___bounds_28).___c1_1.___z_2;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    iVar21.___c0_0.___y_1 = (int)local_258.___y_3;
    iVar21.___c0_0.___x_0 = (int)local_258.___x_2;
    iVar21.___c0_0.___z_2 = (int)local_258.___z_4;
    iVar21.___c1_1.___x_0 = iStack_24c;
    iVar21.___c1_1.___y_1._0_2_ = local_90.___x_0._0_2_;
    iVar21.___c1_1.___y_1._2_2_ = local_90.___x_0._2_2_;
    iVar21.___c1_1.___z_2._0_1_ = local_90.___y_1._0_1_;
    iVar21.___c1_1.___z_2._1_1_ = local_90.___y_1._1_1_;
    iVar21.___c1_1.___z_2._2_2_ = local_90.___y_1._2_2_;
    piVar53 = ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
                        (&local_130,iVar21,(MethodInfo *)0x0);
    local_90.___x_0 = (float)piVar53->___x_0;
    local_90.___y_1 = (float)piVar53->___y_1;
    iVar68 = piVar53->___z_2;
    if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
    }
    iVar34.___z_2._0_1_ = (char)iVar68;
    iVar34.___x_0 = (int)local_90.___x_0;
    iVar34.___y_1 = (int)local_90.___y_1;
    iVar34.___z_2._1_1_ = (char)((uint)iVar68 >> 8);
    iVar34.___z_2._2_2_ = (short)((uint)iVar68 >> 0x10);
    fVar83 = GridGenerator_HexToPlane_m5111038CB66C215D42B4436F75F77882EF48039F
                       (iVar34,(MethodInfo *)0x0);
    pfVar54 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                        ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)&local_268,fVar83,0.0,
                         (MethodInfo *)0x0);
    local_130.___x_0 = (int)pfVar54->___x_0;
    local_130.___y_1 = (int)pfVar54->___y_1;
    local_150 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pfVar54->___z_2;
    local_158 = *(double *)pfVar54;
    local_130.___z_2 = (uint)local_150 ^ __xmm_80000000800000008000000080000000;
    local_b0._0_4_ = local_130.___x_0;
    local_b0._4_4_ = (float)local_130.___y_1;
    local_a8[0] = local_150;
    Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_268,
               (float)(local_130.___x_0 ^ __xmm_80000000800000008000000080000000),
               (float)(local_130.___y_1 ^ __xmm_80000000800000008000000080000000),
               (float)local_130.___z_2,(MethodInfo *)0x0);
    VVar35.___z_4._1_1_ = (char)((uint)*(undefined4 *)((int)extraout_EAX + 8) >> 8);
    VVar35._0_9_ = *extraout_EAX;
    VVar35.___z_4._2_2_ = (short)((uint)*(undefined4 *)((int)extraout_EAX + 8) >> 0x10);
    pMVar55 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A
                        (&local_490,VVar35,(MethodInfo *)0x0);
    local_330._0_4_ = pMVar55->___m00_0;
    local_330._4_4_ = pMVar55->___m10_1;
    local_330._8_4_ = pMVar55->___m20_2;
    local_330._12_4_ = pMVar55->___m30_3;
    local_330._16_4_ = pMVar55->___m01_4;
    local_330._20_4_ = pMVar55->___m11_5;
    local_330._24_4_ = pMVar55->___m21_6;
    local_330._28_4_ = pMVar55->___m31_7;
    local_330._32_4_ = pMVar55->___m02_8;
    local_330._36_4_ = pMVar55->___m12_9;
    local_330._40_4_ = pMVar55->___m22_10;
    local_330._44_4_ = pMVar55->___m32_11;
    local_330._48_4_ = pMVar55->___m03_12;
    fStack_2fc = pMVar55->___m13_13;
    fStack_2f8 = pMVar55->___m23_14;
    fStack_2f4 = pMVar55->___m33_15;
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      local_1bc = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                  param_1->___master_4->___bigMeshMaster_36;
      local_dc = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
      while( true ) {
        pMVar3 = param_1->___materialsToExport_5;
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (pMVar3 == (MaterialToExportU5BU5D_t43F4DF2F51BEE3F7F7120F11D1C3367DE738ADA3 *)0x0)
        break;
        if (pMVar3->_padding_ <= (int)local_dc) {
          pWVar75 = param_1->___master_4;
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (((pWVar75 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
              (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
              pWVar75->___sandbanker_22 !=
              (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) &&
             (pLVar9 = pWVar75->___sandbanker_22->___verts_6,
             local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
             pLVar9 != (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)) {
            pDStack_bc = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         pLVar9->____size_2;
            if ((int)pDStack_bc < 1) goto LAB_103e13ea;
            local_54 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       ((int)&local_44->_padding_ + 1);
            local_50 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       ((int)&local_4c->_padding_ + 1);
            local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
            local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
            goto LAB_103e0d03;
          }
          break;
        }
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pMVar3->_padding_ <= local_dc)
        goto LAB_103e28be;
        pDVar70 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                  pMVar3->m_Items[(int)local_dc];
        local_b4 = pDVar70;
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if ((pDVar70 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) ||
           (iVar68 = ((Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 *)&pDVar70->___count_2)->
                     ___hashCode_0, local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
           iVar68 == 0)) break;
        if (*(int *)(iVar68 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_40 = *(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 **)
                    (*(int *)(iVar68 + 8) + 0x10);
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pMVar4 = param_1->___master_4->___materialMaster_13,
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
              pMVar4 == (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0)) break;
        local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                   pMVar4->___fenceMaterial_14;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        local_b5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_40,
                              (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_30,
                              (MethodInfo *)0x0);
        pLVar79 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                  ((Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 *)&pDVar70->___count_2)->
                  ___hashCode_0;
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (pLVar79 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) break;
        pOVar56 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                  List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                            (pLVar79,0,
                             List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var
                            );
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pMVar4 = param_1->___master_4->___materialMaster_13,
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
              pMVar4 == (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0)) break;
        Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                  (pOVar56,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                           pMVar4->___doorMaterial_11,(MethodInfo *)0x0);
        pLVar5 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                 ((Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 *)&pDVar70->___count_2)->
                 ___hashCode_0;
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || ((pMVar4 = param_1->___master_4->___materialMaster_13,
               local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
               pMVar4 == (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0 ||
               (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
               pLVar5 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)))) break;
        bVar50 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                           (pLVar5,(Il2CppObject *)pMVar4->___houseMaterial_7,
                            List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var
                           );
        if (!bVar50) {
          pLVar5 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                   ((Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 *)&pDVar70->___count_2)->
                   ___hashCode_0;
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) || (pMVar4 = param_1->___master_4->___materialMaster_13,
                    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
                    pMVar4 == (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0)) ||
             (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
             pLVar5 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)) break;
          bVar50 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                             (pLVar5,(Il2CppObject *)pMVar4->___doorMaterial_11,
                              List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var
                             );
          if (!bVar50) {
            pLVar5 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
                     ((Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 *)&pDVar70->___count_2)->
                     ___hashCode_0;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (((param_1->___master_4 ==
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                (pMVar4 = param_1->___master_4->___materialMaster_13,
                local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
                pMVar4 == (MaterialMaster_t05C2ECC9C51C32378E694E1CCEBD25CAC007B7B5 *)0x0)) ||
               (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
               pLVar5 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)) break;
            List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                      (pLVar5,(Il2CppObject *)pMVar4->___propMaterial_10,
                       List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var);
          }
        }
        pOVar65 = local_2c;
        if (*(char *)((int)&local_b4->___entries_1 + 1) != '\0') {
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (local_13c != (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) {
            Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)local_13c,
                       Dictionary_2_Clear_m191DF7FB0C93C167D7030AACC2CAC71225D1CDA9_RuntimeMethod_var
                      );
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if ((local_1bc != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) &&
               (pLVar6 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)
                         ((Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 *)&local_1bc->___count_2)
                         ->___hashCode_0, local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0)
               , pLVar6 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0)) {
              pEVar57 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                                  (&local_440,pLVar6,
                                   List_1_GetEnumerator_mA58E0AE60306C128DC9F0D41DA121171F040F9AC_RuntimeMethod_var
                                  );
              local_288.___list_0 =
                   (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pEVar57->___list_0;
              local_288.___index_1 = pEVar57->___index_1;
              local_288.___version_2 = pEVar57->___version_2;
              local_288.___current_3 = (Il2CppObject *)pEVar57->___current_3;
              local_14._0_1_ = 0;
              local_14._1_3_ = 0;
              goto LAB_103df110;
            }
          }
          break;
        }
        if (*(char *)&local_b4->___entries_1 != '\0') {
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
               ) || (pGVar2 = param_1->___master_4->___graph_7,
                    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
                    pGVar2 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
             (pTVar69 = pGVar2->___squares_8,
             local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
             pTVar69 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
          local_54 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                               (pTVar69,(MethodInfo *)0x0);
          while( true ) {
            local_54 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       ((int)&local_54[-1].____syncRoot_9 + 3);
            if ((int)local_54 < 0) break;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (((param_1->___master_4 ==
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                (pGVar2 = param_1->___master_4->___graph_7,
                local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
                pGVar2 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
               (pTVar69 = pGVar2->___squares_8,
               local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
               pTVar69 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
            goto LAB_103e28c9;
            local_150 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                        Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                  (pTVar69,(int)local_54,(MethodInfo *)0x0);
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_150 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_103e28c9;
            local_50 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                 ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_150,
                                  (MethodInfo *)0x0);
            while (local_50 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                              ((int)&local_50[-1].____syncRoot_9 + 3), -1 < (int)local_50) {
              local_120 = (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)
                          Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                    ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                     local_150,(int)local_50,(MethodInfo *)0x0);
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if (local_120 == (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0)
              goto LAB_103e28c9;
              iVar68 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                 ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_120,
                                  (MethodInfo *)0x0);
              local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)(iVar68 - 1);
              if (-1 < (int)local_30) {
                pTVar69 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                    ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                     local_120,(int)local_30,(MethodInfo *)0x0);
                pIVar66 = UnityFunctions_EnumerateHirearchy_m8A04476FCF673A5DFFF9E223E223B97DCDAA0263
                                    (pTVar69,false,(MethodInfo *)0x0);
                local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
                if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e28c9;
                pDVar70 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                          InterfaceFuncInvoker0<int>::Invoke
                                    (0,
                                     IEnumerable_1_t64A142138D8BB01DB1E632636D7FAF3A561F0792_il2cpp_TypeInfo_var
                                     ,pIVar66);
                local_14._0_1_ = 4;
                local_14._1_3_ = 0;
                local_84 = pDVar70;
                goto LAB_103dfd08;
              }
            }
          }
        }
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (local_5c == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) break;
        if (0 < (int)local_5c->___entries_1) {
          local_150 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                      _stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2;
          local_120 = (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)param_1->___outputString_6
          ;
          pOVar65 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                    il2cpp_array_new_specific
                              (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                               ,6);
          pAVar8 = (ActionU5BU5D_t3FA7448F5CB2D8B68DBEB43EC534F7DE8D06342E *)local_b4->___buckets_0;
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (pOVar65 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) break;
          if (pAVar8 != (ActionU5BU5D_t3FA7448F5CB2D8B68DBEB43EC534F7DE8D06342E *)0x0) {
            pIVar66 = IsInst((Il2CppObject *)pAVar8,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
            if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
          }
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    (pOVar65,0,(Il2CppObject *)pAVar8);
          pDVar70 = local_150;
          if ((local_150 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) &&
             (pIVar66 = IsInst((Il2CppObject *)local_150,
                               *(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
             pIVar66 == (Il2CppObject *)0x0)) {
            pMVar87 = (MethodInfo *)0x0;
            pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
          }
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    (pOVar65,1,(Il2CppObject *)pDVar70);
          pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                              ((Il2CppObject *)local_5c,(MethodInfo *)0x0);
          if ((pSVar52 != (String_t *)0x0) &&
             (pIVar66 = IsInst((Il2CppObject *)pSVar52,*(Il2CppClass **)(pOVar65->_padding_ + 0x20))
             , pIVar66 == (Il2CppObject *)0x0)) {
            pMVar87 = (MethodInfo *)0x0;
            pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
          }
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    (pOVar65,2,(Il2CppObject *)pSVar52);
          pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                              ((Il2CppObject *)local_60,(MethodInfo *)0x0);
          if ((pSVar52 != (String_t *)0x0) &&
             (pIVar66 = IsInst((Il2CppObject *)pSVar52,*(Il2CppClass **)(pOVar65->_padding_ + 0x20))
             , pIVar66 == (Il2CppObject *)0x0)) {
            pMVar87 = (MethodInfo *)0x0;
            pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
          }
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    (pOVar65,3,(Il2CppObject *)pSVar52);
          pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                              ((Il2CppObject *)local_a0,(MethodInfo *)0x0);
          if ((pSVar52 != (String_t *)0x0) &&
             (pIVar66 = IsInst((Il2CppObject *)pSVar52,*(Il2CppClass **)(pOVar65->_padding_ + 0x20))
             , pIVar66 == (Il2CppObject *)0x0)) {
            pMVar87 = (MethodInfo *)0x0;
            pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
          }
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    (pOVar65,4,(Il2CppObject *)pSVar52);
          pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                              ((Il2CppObject *)local_64,(MethodInfo *)0x0);
          if ((pSVar52 != (String_t *)0x0) &&
             (pIVar66 = IsInst((Il2CppObject *)pSVar52,*(Il2CppClass **)(pOVar65->_padding_ + 0x20))
             , pIVar66 == (Il2CppObject *)0x0)) {
            pMVar87 = (MethodInfo *)0x0;
            pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
          }
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    (pOVar65,5,(Il2CppObject *)pSVar52);
          pSVar52 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                              (_stringLiteral367C6EC3CDECA0FCEB60D2A8D96666C62FD861DA,pOVar65,
                               (MethodInfo *)0x0);
          pSVar52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                              ((String_t *)local_120,pSVar52,(MethodInfo *)0x0);
          pDVar70 = local_5c;
          param_1->___outputString_6 = pSVar52;
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_5c,
                     List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (local_60 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) break;
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_60,
                     List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (local_a0 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) break;
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_a0,
                     List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (local_64 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) break;
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_64,
                     List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar70,
                     List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
        }
        local_dc = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                   ((int)&local_dc->_padding_ + 1);
      }
    }
  }
  goto LAB_103e28c9;
  while( true ) {
    if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pLVar9->____size_2 <= local_30) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    uVar11 = *(undefined4 *)((int)&pLVar9->____items_1->m_Items[0].___z_4 + (int)local_40);
    VVar39.___z_4._0_1_ = (char)uVar11;
    VVar39._0_8_ = *(undefined8 *)
                    ((int)&local_40->_padding_ + (int)&pLVar9->____items_1->m_Items[0].___x_2);
    VVar39.___z_4._1_1_ = (char)((uint)uVar11 >> 8);
    VVar39.___z_4._2_2_ = (short)((uint)uVar11 >> 0x10);
    pVVar61 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                        (&local_258,(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)local_330
                         ,VVar39,(MethodInfo *)0x0);
    local_204._0_4_ = pVVar61->___x_2;
    local_204._4_4_ = pVVar61->___y_3;
    local_1fc = pVVar61->___z_4;
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pSVar10 = param_1->___master_4->___sandbanker_22,
       local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
       pSVar10 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) goto LAB_103e28c9;
    BVar1 = pSVar10->___uvPos_11;
    pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                 CONCAT22(pDStack_34._2_2_,BVar1);
    VVar84 = ByteFloat2_op_Explicit_mA190C650DB530CC9E7D6733D1B7263F03A1518A5
                       (BVar1,(MethodInfo *)0x0);
    fVar16 = local_90.___x_0;
    local_90.___y_1 = VVar84.___y_1;
    local_1e0 = CONCAT44(local_90.___y_1,fVar16);
    local_90 = VVar84;
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pSVar10 = param_1->___master_4->___sandbanker_22,
       local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
       pSVar10 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) goto LAB_103e28c9;
    local_a8[0] = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                  ByteFloat2_get_fy_m969AAC2C226E6109D97DC8DE3377702DE051126A
                            (&pSVar10->___uvSize_12,(MethodInfo *)0x0);
    pCVar82 = local_3c;
    local_1e0 = CONCAT44(local_204._4_4_ * __real_40800000 * (float)local_a8[0] + local_90.___y_1,
                         (float)local_1e0);
    pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                        ((float *)&local_204,_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                         (Il2CppObject *)local_3c,(MethodInfo *)0x0);
    pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                        ((float *)((int)&local_204 + 4),
                         _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                         (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
    pSVar63 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                        (&local_1fc,_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                         (Il2CppObject *)local_3c,(MethodInfo *)0x0);
    OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
             String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                       (_stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF,
                        (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,(Il2CppObject *)pSVar63,
                        (MethodInfo *)0x0);
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (local_5c == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
    goto LAB_103e28c9;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_5c,OVar64,
               List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    pCVar82 = local_3c;
    pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                        ((float *)&local_1e0,_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                         (Il2CppObject *)local_3c,(MethodInfo *)0x0);
    pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                        ((float *)((int)&local_1e0 + 4),
                         _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                         (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
    OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
             String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                       (_stringLiteral79443EA6B541034C604FE9A19395BF95CCE71A22,
                        (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,(MethodInfo *)0x0);
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (local_60 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
    goto LAB_103e28c9;
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_60,OVar64,
               List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
    local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ((int)&local_30->_padding_ + 1);
    local_44 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ((int)&local_44->_padding_ + 1);
    local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)&local_40->___entries_1;
    local_4c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ((int)&local_4c->_padding_ + 1);
    if ((int)pDStack_bc <= (int)local_30) break;
LAB_103e0d03:
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
        (pSVar10 = param_1->___master_4->___sandbanker_22,
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
        pSVar10 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) ||
       (pLVar9 = pSVar10->___verts_6, local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
       pLVar9 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0)) goto LAB_103e28c9;
  }
  pDVar70 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
  if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
      (pSVar10 = param_1->___master_4->___sandbanker_22,
      local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
      pSVar10 != (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) &&
     (pLVar12 = pSVar10->___tris_7, local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
     pLVar12 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0)) {
    pDStack_114 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                  (pLVar12->____size_2 / 2);
    if (0 < (int)pDStack_114) {
      do {
        pWVar75 = param_1->___master_4;
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (((pWVar75 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
            (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
            pWVar75->___sandbanker_22 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0
            )) || (pLVar12 = pWVar75->___sandbanker_22->___tris_7, pDStack_34 = pDVar70,
                  local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
                  pLVar12 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0))
        goto LAB_103e28c9;
        if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pLVar12->____size_2 <= pDVar70
           ) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                   pLVar12->____items_1->m_Items[(int)pDVar70];
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if ((pWVar75 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
           (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
           pWVar75->___sandbanker_22 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)
           ) goto LAB_103e28c9;
        pLVar12 = pWVar75->___sandbanker_22->___tris_7;
        pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     ((int)&pDVar70->_padding_ + 1);
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (pLVar12 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) goto LAB_103e28c9;
        if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pLVar12->____size_2 <=
            pDStack_34) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                   pLVar12->____items_1->m_Items[(int)((int)&pDVar70->_padding_ + 1)];
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if ((pWVar75 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
           (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
           pWVar75->___sandbanker_22 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)
           ) goto LAB_103e28c9;
        pLVar12 = pWVar75->___sandbanker_22->___tris_7;
        piVar44 = &pDVar70->_padding_;
        pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)((int)piVar44 + 2);
        pDVar70 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                  ((int)&pDVar70->_padding_ + 3);
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (pLVar12 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) goto LAB_103e28c9;
        if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pLVar12->____size_2 <=
            pDStack_34) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_48 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                   pLVar12->____items_1[1].m_Items[(int)(piVar44 + -1)];
        pOVar65 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                  il2cpp_array_new_specific
                            (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                             ,6);
        local_a8[0] = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                      ((int)&local_30->_padding_ + (int)&local_54->_padding_);
        pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                      ,local_a8);
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (pOVar65 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
        goto LAB_103e28c9;
        if (pDStack_34 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
          pIVar66 = IsInst((Il2CppObject *)pDStack_34,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
          if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
        }
        if (pOVar65->_padding_ == 0) goto LAB_103e28be;
        pOVar65->m_Items[0] = (Il2CppObject *)pDStack_34;
        pDStack_bc = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     ((int)&local_50->_padding_ + (int)&local_30->_padding_);
        pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                      ,&pDStack_bc);
        if (pDStack_34 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
          pIVar66 = IsInst((Il2CppObject *)pDStack_34,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
          if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
        }
        if ((uint)pOVar65->_padding_ < 2) goto LAB_103e28be;
        *(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 **)&pOVar65->field_0x14 =
             pDStack_34;
        pDStack_104 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                      ((int)&local_54->_padding_ + (int)&local_40->_padding_);
        pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                      ,&pDStack_104);
        if (pDStack_34 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
          pIVar66 = IsInst((Il2CppObject *)pDStack_34,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
          if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
        }
        if ((uint)pOVar65->_padding_ < 3) goto LAB_103e28be;
        pOVar65[1]._padding_ = (int)pDStack_34;
        pDStack_108 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                      ((int)&local_50->_padding_ + (int)&local_40->_padding_);
        pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                      ,&pDStack_108);
        if (pDStack_34 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
          pIVar66 = IsInst((Il2CppObject *)pDStack_34,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
          if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
        }
        if ((uint)pOVar65->_padding_ < 4) goto LAB_103e28be;
        pOVar65[1]._padding_ = (int)pDStack_34;
        pDStack_10c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                      ((int)&local_54->_padding_ + (int)&local_48->_padding_);
        pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                      ,&pDStack_10c);
        if (pDStack_34 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
          pIVar66 = IsInst((Il2CppObject *)pDStack_34,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
          if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
        }
        if ((uint)pOVar65->_padding_ < 5) goto LAB_103e28be;
        pOVar65[1]._padding_ = (int)pDStack_34;
        pDStack_110 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                      ((int)&local_50->_padding_ + (int)&local_48->_padding_);
        pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                      ,&pDStack_110);
        if (pDStack_34 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
          pIVar66 = IsInst((Il2CppObject *)pDStack_34,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
          if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
        }
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if ((uint)pOVar65->_padding_ < 6) goto LAB_103e28be;
        pOVar65[1]._padding_ = (int)pDStack_34;
        OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                 String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                           (_stringLiteralF5C71C34EAA84294A9E69E1D19897A749024C0FF,pOVar65,
                            (MethodInfo *)0x0);
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (local_64 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
        goto LAB_103e28c9;
        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                  ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_64,OVar64,
                   List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
      } while ((int)pDVar70 < (int)pDStack_114);
    }
    pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                 param_1->___outputString_6;
    pOVar65 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
              il2cpp_array_new_specific
                        (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var,
                         5);
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (pOVar65 != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
      if ((_stringLiteral2B4DAE1EA8E16D10FE05654C07C69EFF8140A997 != (String_t *)0x0) &&
         (pIVar66 = IsInst((Il2CppObject *)_stringLiteral2B4DAE1EA8E16D10FE05654C07C69EFF8140A997,
                           *(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
         pIVar66 == (Il2CppObject *)0x0)) {
        pMVar87 = (MethodInfo *)0x0;
        pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      if (pOVar65->_padding_ == 0) {
        pMVar87 = (MethodInfo *)0x0;
        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      pOVar65->m_Items[0] = (Il2CppObject *)_stringLiteral2B4DAE1EA8E16D10FE05654C07C69EFF8140A997;
      if ((_stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C != (String_t *)0x0) &&
         (pIVar66 = IsInst((Il2CppObject *)_stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C,
                           *(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
         pIVar66 == (Il2CppObject *)0x0)) {
        pMVar87 = (MethodInfo *)0x0;
        pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      pMVar87 = (MethodInfo *)0x0;
      if ((uint)pOVar65->_padding_ < 2) {
        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      *(String_t **)&pOVar65->field_0x14 = _stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C;
      pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                          ((Il2CppObject *)local_5c,(MethodInfo *)0x0);
      if ((pSVar52 != (String_t *)0x0) &&
         (pIVar66 = IsInst((Il2CppObject *)pSVar52,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
         pIVar66 == (Il2CppObject *)0x0)) {
        pMVar87 = (MethodInfo *)0x0;
        pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      pMVar87 = (MethodInfo *)0x0;
      if ((uint)pOVar65->_padding_ < 3) {
        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      pOVar65[1]._padding_ = (int)pSVar52;
      pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                          ((Il2CppObject *)local_60,(MethodInfo *)0x0);
      if ((pSVar52 != (String_t *)0x0) &&
         (pIVar66 = IsInst((Il2CppObject *)pSVar52,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
         pIVar66 == (Il2CppObject *)0x0)) {
        pMVar87 = (MethodInfo *)0x0;
        pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      pMVar87 = (MethodInfo *)0x0;
      if ((uint)pOVar65->_padding_ < 4) {
        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      pOVar65[1]._padding_ = (int)pSVar52;
      pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                          ((Il2CppObject *)local_64,(MethodInfo *)0x0);
      if ((pSVar52 != (String_t *)0x0) &&
         (pIVar66 = IsInst((Il2CppObject *)pSVar52,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
         pIVar66 == (Il2CppObject *)0x0)) {
        pMVar87 = (MethodInfo *)0x0;
        pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      pMVar87 = (MethodInfo *)0x0;
      if ((uint)pOVar65->_padding_ < 5) {
        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
      }
      pOVar65[1]._padding_ = (int)pSVar52;
      pSVar52 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                          (_stringLiteral3673FF002279CCCC33A113C482FD3DB9FE3D429A,pOVar65,
                           (MethodInfo *)0x0);
      pSVar52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                          ((String_t *)pDStack_34,pSVar52,(MethodInfo *)0x0);
      param_1->___outputString_6 = pSVar52;
      local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
      if (local_5c != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_5c,
                   List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (local_60 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_60,
                     List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
          local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
          if (local_64 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
            List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_64,
                       List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
            pWVar75 = param_1->___master_4;
LAB_103e13ea:
            local_54 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       ((int)&local_44->_padding_ + 1);
            local_50 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       ((int)&local_4c->_padding_ + 1);
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (((pWVar75 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
                pWVar75->___sandbanker_22 !=
                (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) &&
               (pMVar7 = pWVar75->___sandbanker_22->___waterMf_10,
               local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
               pMVar7 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)) {
              pMVar76 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                  (pMVar7,(MethodInfo *)0x0);
              pDVar70 = local_9c;
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if (pMVar76 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
                Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015
                          (pMVar76,(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_9c,
                           (MethodInfo *)0x0);
                Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
                          (pMVar76,0,(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_88,
                           (MethodInfo *)0x0);
                Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
                          (pMVar76,(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)local_38,0,
                           (MethodInfo *)0x0);
                local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
                if ((param_1->___master_4 !=
                     (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
                   (pSVar10 = param_1->___master_4->___sandbanker_22,
                   local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
                   pSVar10 != (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)) {
                  BVar1 = pSVar10->___uvPos_11;
                  local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                             CONCAT22(local_30._2_2_,BVar1);
                  uVar51 = BVar1.___x_0 + 0xfe;
                  local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                             CONCAT31(local_30._1_3_,uVar51);
                  BVar1.___y_1 = BVar1.___y_1;
                  BVar1.___x_0 = uVar51;
                  local_90 = ByteFloat2_op_Explicit_mA190C650DB530CC9E7D6733D1B7263F03A1518A5
                                       (BVar1,(MethodInfo *)0x0);
                  local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
                  if (pDVar70 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                    pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                 pDVar70->___entries_1;
                    if (0 < (int)pDStack_34) {
                      local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
                      do {
                        if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                            pDVar70->___entries_1 <= local_30) {
                    /* WARNING: Subroutine does not return */
                          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                    ((MethodInfo *)0x0);
                        }
                        uVar11 = *(undefined4 *)
                                  ((int)&local_40->_padding_ +
                                  (int)&((eoeYwvfgkcyqvOuhSvCpfjKvcGWU5BU5D_t7DFC1F3755A399E1EC69108C7CA1187FD004393C
                                          *)pDVar70->___buckets_0)->m_Items[0].
                                        ___pMiBnalMLaKhnIIVCmUXzEYnDvX_2);
                        VVar40.___z_4._0_1_ = (char)uVar11;
                        VVar40._0_8_ = *(undefined8 *)
                                        ((int)&local_40->_padding_ +
                                        (int)&((eoeYwvfgkcyqvOuhSvCpfjKvcGWU5BU5D_t7DFC1F3755A399E1EC69108C7CA1187FD004393C
                                                *)pDVar70->___buckets_0)->m_Items[0].
                                              ___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0);
                        VVar40.___z_4._1_1_ = (char)((uint)uVar11 >> 8);
                        VVar40.___z_4._2_2_ = (short)((uint)uVar11 >> 0x10);
                        pVVar61 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                            (&local_258,
                                             (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                             local_330,VVar40,(MethodInfo *)0x0);
                        pCVar82 = local_3c;
                        local_210._0_4_ = pVVar61->___x_2;
                        local_210._4_4_ = pVVar61->___y_3;
                        local_208 = pVVar61->___z_4;
                        pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                            ((float *)&local_210,
                                             _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                             (Il2CppObject *)local_3c,(MethodInfo *)0x0);
                        pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                            ((float *)((int)&local_210 + 4),
                                             _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                             (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
                        pSVar63 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                            (&local_208,
                                             _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                             (Il2CppObject *)local_3c,(MethodInfo *)0x0);
                        OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                 String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                           (_stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF,
                                            (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                            (Il2CppObject *)pSVar63,(MethodInfo *)0x0);
                        if (local_5c ==
                            (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                        goto LAB_103e28c9;
                        List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                  ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_5c,
                                   OVar64,
                                   List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                                  );
                        local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                   ((int)&local_30->_padding_ + 1);
                        local_44 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                   ((int)&local_44->_padding_ + 1);
                        local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                   &local_40->___entries_1;
                        pDVar70 = local_9c;
                      } while ((int)local_30 < (int)pDStack_34);
                    }
                    pEVar80 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
                    if (local_88 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                      pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                   local_88->___entries_1;
                      if (0 < (int)pDStack_34) {
                        local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x10;
                        do {
                          if (local_88->___entries_1 <= pEVar80) {
                    /* WARNING: Subroutine does not return */
                            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                      ((MethodInfo *)0x0);
                          }
                          local_1e8 = local_90.___x_0;
                          fStack_1e4 = local_90.___y_1;
                          if (*(float *)((int)&local_30[-1].___comparer_6 +
                                        (int)&((Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA
                                                *)local_88->___buckets_0)->m_Items[0].___x_0) <
                              __real_3f800000) {
                            if ((param_1->___master_4 ==
                                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                               (pSVar10 = param_1->___master_4->___sandbanker_22,
                               pSVar10 ==
                               (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0))
                            goto LAB_103e28c9;
                            fStack_1e4 = ByteFloat2_get_fy_m969AAC2C226E6109D97DC8DE3377702DE051126A
                                                   (&pSVar10->___uvSize_12,(MethodInfo *)0x0);
                            fStack_1e4 = fStack_1e4 + local_90.___y_1;
                          }
                          pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                              (&local_1e8,
                                               _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                               ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                          local_b0 = (double)fStack_1e4;
                          _CIfmod();
                          uStack_138 = (double)CONCAT44((float)extraout_ST0_01,(uint)uStack_138);
                          pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                              ((float *)((int)&uStack_138 + 4),
                                               _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                               ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                          OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                   String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                                             (_stringLiteral79443EA6B541034C604FE9A19395BF95CCE71A22
                                              ,(Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                              (MethodInfo *)0x0);
                          if (local_60 ==
                              (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                          goto LAB_103e28c9;
                          List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_60,
                                     OVar64,
                                     List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                                    );
                          pEVar80 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                                    ((int)&pEVar80->_padding_ + 1);
                          local_4c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                     ((int)&local_4c->_padding_ + 1);
                          local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                     &local_30->___buckets_0;
                        } while ((int)pEVar80 < (int)pDStack_34);
                      }
                      pEVar80 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
                      if (local_38 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                      {
                        pDStack_114 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                      local_38->___entries_1;
                        if (0 < (int)pDStack_114) {
                          do {
                            pEVar13 = local_38->___entries_1;
                            if (pEVar13 <= pEVar80) {
                    /* WARNING: Subroutine does not return */
                              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                        ((MethodInfo *)0x0);
                            }
                            pAVar8 = (ActionU5BU5D_t3FA7448F5CB2D8B68DBEB43EC534F7DE8D06342E *)
                                     local_38->___buckets_0;
                            local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                       (&pAVar8->m_Items[0].___hexPos_0.___x_0)[(int)pEVar80];
                            if (pEVar13 <=
                                (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                                ((int)&pEVar80->_padding_ + 1U)) {
                    /* WARNING: Subroutine does not return */
                              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                        ((MethodInfo *)0x0);
                            }
                            local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                       (&pAVar8->m_Items[0].___hexPos_0.___y_1)
                                       [(int)&pEVar80->_padding_];
                            piVar44 = &pEVar80->_padding_;
                            pEVar80 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                                      ((int)&pEVar80->_padding_ + 3);
                            if (pEVar13 <=
                                (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                                ((int)piVar44 + 2U)) {
                    /* WARNING: Subroutine does not return */
                              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                        ((MethodInfo *)0x0);
                            }
                            local_48 = *(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 **)
                                        (&pAVar8->m_Items[0].___height_1 + (int)piVar44 * 4);
                            pOVar65 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                                      il2cpp_array_new_specific
                                                (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                                 ,6);
                            pDStack_34 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                         ((int)&local_30->_padding_ + (int)&local_54->_padding_);
                            local_a8[0] = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&pDStack_34);
                            if (pOVar65 ==
                                (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
                            goto LAB_103e28c9;
                            if (local_a8[0] !=
                                (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                              pIVar66 = IsInst((Il2CppObject *)local_a8[0],
                                               *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                              if (pIVar66 == (Il2CppObject *)0x0) {
LAB_103e29d8:
                                pMVar87 = (MethodInfo *)0x0;
                                pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                                il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                              }
                            }
                            if (pOVar65->_padding_ == 0) {
LAB_103e28be:
                              pMVar87 = (MethodInfo *)0x0;
                              pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                              il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                            }
                            pOVar65->m_Items[0] = (Il2CppObject *)local_a8[0];
                            pDStack_bc = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                         ((int)&local_50->_padding_ + (int)&local_30->_padding_);
                            local_a8[0] = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&pDStack_bc);
                            if (local_a8[0] !=
                                (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                              pIVar66 = IsInst((Il2CppObject *)local_a8[0],
                                               *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                              if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
                            }
                            if ((uint)pOVar65->_padding_ < 2) goto LAB_103e28be;
                            *(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 **)
                             &pOVar65->field_0x14 = local_a8[0];
                            pDStack_104 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          ((int)&local_54->_padding_ + (int)&local_40->_padding_);
                            local_a8[0] = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&pDStack_104);
                            if (local_a8[0] !=
                                (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                              pIVar66 = IsInst((Il2CppObject *)local_a8[0],
                                               *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                              if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
                            }
                            if ((uint)pOVar65->_padding_ < 3) goto LAB_103e28be;
                            pOVar65[1]._padding_ = (int)local_a8[0];
                            pDStack_108 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          ((int)&local_50->_padding_ + (int)&local_40->_padding_);
                            local_a8[0] = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&pDStack_108);
                            if (local_a8[0] !=
                                (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                              pIVar66 = IsInst((Il2CppObject *)local_a8[0],
                                               *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                              if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
                            }
                            if ((uint)pOVar65->_padding_ < 4) goto LAB_103e28be;
                            pOVar65[1]._padding_ = (int)local_a8[0];
                            pDStack_10c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          ((int)&local_54->_padding_ + (int)&local_48->_padding_);
                            local_a8[0] = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&pDStack_10c);
                            if (local_a8[0] !=
                                (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                              pIVar66 = IsInst((Il2CppObject *)local_a8[0],
                                               *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                              if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
                            }
                            if ((uint)pOVar65->_padding_ < 5) goto LAB_103e28be;
                            pOVar65[1]._padding_ = (int)local_a8[0];
                            pDStack_110 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          ((int)&local_50->_padding_ + (int)&local_48->_padding_);
                            local_a8[0] = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&pDStack_110);
                            if (local_a8[0] !=
                                (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                              pIVar66 = IsInst((Il2CppObject *)local_a8[0],
                                               *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                              if (pIVar66 == (Il2CppObject *)0x0) goto LAB_103e29d8;
                            }
                            if ((uint)pOVar65->_padding_ < 6) goto LAB_103e28be;
                            pOVar65[1]._padding_ = (int)local_a8[0];
                            OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                                     String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                                               (_stringLiteralF5C71C34EAA84294A9E69E1D19897A749024C0FF
                                                ,pOVar65,(MethodInfo *)0x0);
                            if (local_64 ==
                                (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                            goto LAB_103e28c9;
                            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_64,
                                       OVar64,
                                       List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                                      );
                          } while ((int)pEVar80 < (int)pDStack_114);
                        }
                        uStack_100 = (double)CONCAT44(param_1->___outputString_6,
                                                      (undefined4)uStack_100);
                        pOVar65 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                                  il2cpp_array_new_specific
                                            (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                             ,5);
                        if (pOVar65 != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0
                           ) {
                          if (_stringLiteral5B1A1DCC176F13C7CEA6985683AF3FF7CD492098 !=
                              (String_t *)0x0) {
                            pIVar66 = IsInst((Il2CppObject *)
                                             _stringLiteral5B1A1DCC176F13C7CEA6985683AF3FF7CD492098,
                                             *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                            if (pIVar66 == (Il2CppObject *)0x0) {
                              pMVar87 = (MethodInfo *)0x0;
                              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                              il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                            }
                          }
                          if (pOVar65->_padding_ == 0) {
                            pMVar87 = (MethodInfo *)0x0;
                            pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                          }
                          pOVar65->m_Items[0] =
                               (Il2CppObject *)
                               _stringLiteral5B1A1DCC176F13C7CEA6985683AF3FF7CD492098;
                          if (_stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C !=
                              (String_t *)0x0) {
                            pIVar66 = IsInst((Il2CppObject *)
                                             _stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C,
                                             *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                            if (pIVar66 == (Il2CppObject *)0x0) {
                              pMVar87 = (MethodInfo *)0x0;
                              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                              il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                            }
                          }
                          pMVar87 = (MethodInfo *)0x0;
                          if ((uint)pOVar65->_padding_ < 2) {
                            pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                          }
                          *(String_t **)&pOVar65->field_0x14 =
                               _stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C;
                          pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                                              ((Il2CppObject *)local_5c,(MethodInfo *)0x0);
                          if (pSVar52 != (String_t *)0x0) {
                            pIVar66 = IsInst((Il2CppObject *)pSVar52,
                                             *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                            if (pIVar66 == (Il2CppObject *)0x0) {
                              pMVar87 = (MethodInfo *)0x0;
                              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                              il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                            }
                          }
                          pMVar87 = (MethodInfo *)0x0;
                          if ((uint)pOVar65->_padding_ < 3) {
                            pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                          }
                          pOVar65[1]._padding_ = (int)pSVar52;
                          pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                                              ((Il2CppObject *)local_60,(MethodInfo *)0x0);
                          if (pSVar52 != (String_t *)0x0) {
                            pIVar66 = IsInst((Il2CppObject *)pSVar52,
                                             *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                            if (pIVar66 == (Il2CppObject *)0x0) {
                              pMVar87 = (MethodInfo *)0x0;
                              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                              il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                            }
                          }
                          pMVar87 = (MethodInfo *)0x0;
                          if ((uint)pOVar65->_padding_ < 4) {
                            pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                          }
                          pOVar65[1]._padding_ = (int)pSVar52;
                          pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                                              ((Il2CppObject *)local_64,(MethodInfo *)0x0);
                          if (pSVar52 != (String_t *)0x0) {
                            pIVar66 = IsInst((Il2CppObject *)pSVar52,
                                             *(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                            if (pIVar66 == (Il2CppObject *)0x0) {
                              pMVar87 = (MethodInfo *)0x0;
                              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                              il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                            }
                          }
                          pMVar87 = (MethodInfo *)0x0;
                          if ((uint)pOVar65->_padding_ < 5) {
                            pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                            il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                          }
                          pOVar65[1]._padding_ = (int)pSVar52;
                          pSVar52 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                                              (_stringLiteral3673FF002279CCCC33A113C482FD3DB9FE3D429A
                                               ,pOVar65,(MethodInfo *)0x0);
                          pSVar52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                                              (uStack_100._4_4_,pSVar52,(MethodInfo *)0x0);
                          pDVar70 = local_5c;
                          param_1->___outputString_6 = pSVar52;
                          if (local_5c !=
                              (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                            List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_5c,
                                       List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var
                                      );
                            if (local_60 !=
                                (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                              List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                        ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                         local_60,
                                         List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var
                                        );
                              if (local_64 !=
                                  (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
                                List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                                           local_64,
                                           List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var
                                          );
                                if (local_13c !=
                                    (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) {
                                  Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                                            ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920
                                              *)local_13c,
                                             Dictionary_2_Clear_m191DF7FB0C93C167D7030AACC2CAC71225D1CDA9_RuntimeMethod_var
                                            );
                                  if (((param_1->___master_4 !=
                                        (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0
                                       ) && (pBVar14 = param_1->___master_4->___flock_21,
                                            pBVar14 !=
                                            (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)
                                            0x0)) &&
                                     (pLVar15 = pBVar14->___birds_17,
                                     pLVar15 !=
                                     (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0)) {
                                    local_7c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                *)(pLVar15->____size_2 - 1);
                                    if (-1 < (int)local_7c) {
                                      iStack_c0 = (int)local_7c * 4 + 0x10;
                                      do {
                                        if (((param_1->___master_4 ==
                                              (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A
                                               *)0x0) ||
                                            (pBVar14 = param_1->___master_4->___flock_21,
                                            pBVar14 ==
                                            (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)
                                            0x0)) || (pLVar15 = pBVar14->___birds_17,
                                                     pLVar15 ==
                                                     (
                                                  List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *
                                                  )0x0)) goto LAB_103e28c9;
                                        if ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                             *)pLVar15->____size_2 <= local_7c) {
                    /* WARNING: Subroutine does not return */
                                          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                                                    ((MethodInfo *)0x0);
                                        }
                                        iVar68 = *(int *)(pLVar15->____items_1 + iStack_c0);
                                        if ((iVar68 == 0) ||
                                           (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **
                                             )(iVar68 + 0x14) ==
                                            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                            0x0)) goto LAB_103e28c9;
                                        pTVar69 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                            (*(
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  **)(iVar68 + 0x14),(MethodInfo *)0x0);
                                        if (pTVar69 ==
                                            (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                            0x0) goto LAB_103e28c9;
                                        pVVar61 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                                            (&local_258,pTVar69,(MethodInfo *)0x0);
                                        uStack_100 = (double)CONCAT44(pVVar61->___x_2,
                                                                      (undefined4)uStack_100);
                                        if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **
                                             )(iVar68 + 0x18) ==
                                            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                            0x0) goto LAB_103e28c9;
                                        pTVar69 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                            (*(
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  **)(iVar68 + 0x18),(MethodInfo *)0x0);
                                        if (pTVar69 ==
                                            (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)
                                            0x0) goto LAB_103e28c9;
                                        pVVar61 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                                            (&VStack_380,pTVar69,(MethodInfo *)0x0);
                                        if ((float)uStack_100._4_4_ < pVVar61->___x_2 ||
                                            (float)uStack_100._4_4_ == pVVar61->___x_2) {
                                          local_30 = *(
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  **)(iVar68 + 0x18);
                                        }
                                        else {
                                          local_30 = *(
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  **)(iVar68 + 0x14);
                                        }
                                        if (local_30 ==
                                            (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                             *)0x0) goto LAB_103e28c9;
                                        pOVar56 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
                                                   *)
                                                  MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                                            ((
                                                  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A
                                                  *)local_30,(MethodInfo *)0x0);
                                        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                             ->has_cctor != '\0') &&
                                           (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                            ->cctor_finished == 0)) {
                                          il2cpp_runtime_class_init
                                                    (
                                                  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                                  );
                                        }
                                        bVar50 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                                           (pOVar56,(MethodInfo *)0x0);
                                        if (bVar50) {
                                          Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                    ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)local_30,(MethodInfo *)0x0);
                                          if (pOVar56 ==
                                              (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                                              0x0) goto LAB_103e28c9;
                                          Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015
                                                    ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6
                                                      *)pOVar56,
                                                     (
                                                  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *
                                                  )local_9c,(MethodInfo *)0x0);
                                          Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
                                                    ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6
                                                      *)pOVar56,0,
                                                     (
                                                  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *
                                                  )local_88,(MethodInfo *)0x0);
                                          Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243
                                                    ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6
                                                      *)pOVar56,
                                                     (
                                                  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *
                                                  )local_118,(MethodInfo *)0x0);
                                          Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
                                                    ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6
                                                      *)pOVar56,
                                                     (
                                                  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *
                                                  )local_38,0,(MethodInfo *)0x0);
                                          fStack_2e8 = (float)local_330._0_4_;
                                          fStack_2e4 = (float)local_330._4_4_;
                                          fStack_2e0 = (float)local_330._8_4_;
                                          fStack_2dc = (float)local_330._12_4_;
                                          fStack_2d8 = (float)local_330._16_4_;
                                          fStack_2d4 = (float)local_330._20_4_;
                                          fStack_2d0 = (float)local_330._24_4_;
                                          fStack_2cc = (float)local_330._28_4_;
                                          fStack_2c8 = (float)local_330._32_4_;
                                          fStack_2c4 = (float)local_330._36_4_;
                                          fStack_2c0 = (float)local_330._40_4_;
                                          fStack_2bc = (float)local_330._44_4_;
                                          fStack_2b8 = (float)local_330._48_4_;
                                          fStack_2b4 = fStack_2fc;
                                          fStack_2b0 = fStack_2f8;
                                          fStack_2ac = fStack_2f4;
                                          if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                **)(iVar68 + 0xc) ==
                                              (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *
                                              )0x0) goto LAB_103e28c9;
                                          pTVar69 =
                                                  Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                            (*(
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  **)(iVar68 + 0xc),(MethodInfo *)0x0);
                                          if (pTVar69 ==
                                              (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *
                                              )0x0) goto LAB_103e28c9;
                                          pMVar55 =
                                                  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                                                            (&MStack_4d0,pTVar69,(MethodInfo *)0x0);
                                          fVar16 = pMVar55->___m33_15;
                                          MVar18.___m10_1 = fStack_2e4;
                                          MVar18.___m00_0 = fStack_2e8;
                                          MVar18.___m20_2 = fStack_2e0;
                                          MVar18.___m30_3 = fStack_2dc;
                                          MVar18.___m01_4 = fStack_2d8;
                                          MVar18.___m11_5 = fStack_2d4;
                                          MVar18.___m21_6 = fStack_2d0;
                                          MVar18.___m31_7 = fStack_2cc;
                                          MVar18.___m02_8 = fStack_2c8;
                                          MVar18.___m12_9 = fStack_2c4;
                                          MVar18.___m22_10 = fStack_2c0;
                                          MVar18.___m32_11 = fStack_2bc;
                                          MVar18.___m03_12 = fStack_2b8;
                                          MVar18.___m13_13 = fStack_2b4;
                                          MVar18.___m23_14 = fStack_2b0;
                                          MVar18.___m33_15 = fStack_2ac;
                                          MVar20.___m23_14._2_2_ =
                                               (short)((uint)pMVar55->___m23_14 >> 0x10);
                                          MVar20._0_58_ = *(undefined1 (*) [58])pMVar55;
                                          MVar20.___m33_15._0_1_ = SUB41(fVar16,0);
                                          MVar20.___m33_15._1_1_ = (char)((uint)fVar16 >> 8);
                                          MVar20.___m33_15._2_2_ = (short)((uint)fVar16 >> 0x10);
                                          pMVar55 =
                                                  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                                                            (&local_490,MVar18,MVar20,
                                                             (MethodInfo *)0x0);
                                          local_3c0.___m00_0 = pMVar55->___m00_0;
                                          local_3c0.___m10_1 = pMVar55->___m10_1;
                                          local_3c0.___m20_2 = pMVar55->___m20_2;
                                          local_3c0.___m30_3 = pMVar55->___m30_3;
                                          local_3c0.___m01_4 = pMVar55->___m01_4;
                                          local_3c0.___m11_5 = pMVar55->___m11_5;
                                          local_3c0.___m21_6 = pMVar55->___m21_6;
                                          local_3c0.___m31_7 = pMVar55->___m31_7;
                                          local_3c0.___m02_8 = pMVar55->___m02_8;
                                          local_3c0.___m12_9 = pMVar55->___m12_9;
                                          local_3c0.___m22_10 = pMVar55->___m22_10;
                                          local_3c0.___m32_11 = pMVar55->___m32_11;
                                          local_3c0.___m03_12 = pMVar55->___m03_12;
                                          local_3c0.___m13_13 = pMVar55->___m13_13;
                                          local_3c0.___m23_14 = pMVar55->___m23_14;
                                          local_3c0.___m33_15 = pMVar55->___m33_15;
                                          local_6c = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)local_38->___entries_1 / 2);
                                          local_30 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0x0;
                                          pEVar80 = local_9c->___entries_1;
                                          uStack_100 = (double)CONCAT44(pEVar80,(undefined4)
                                                                                uStack_100);
                                          if (0 < (int)pEVar80) {
                                            local_44 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&pEVar80->m_Items[0].___hashCode_0 +
                                                    (int)&local_44[-1].___comparer_6);
                                            do {
                                              peVar60 =
                                                  List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                                            (&eStack_370,
                                                             (
                                                  List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *
                                                  )local_9c,(int)local_30,
                                                  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                                  );
                                              VVar41.___z_4._1_1_ =
                                                   (char)((uint)peVar60->
                                                  ___pMiBnalMLaKhnIIVCmUXzEYnDvX_2 >> 8);
                                              VVar41._0_9_ = *(unkbyte9 *)peVar60;
                                              VVar41.___z_4._2_2_ =
                                                   (short)((uint)peVar60->
                                                  ___pMiBnalMLaKhnIIVCmUXzEYnDvX_2 >> 0x10);
                                              pVVar61 =
                                                  Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                                            ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)&eStack_360,&local_3c0,VVar41,(MethodInfo *)0x0)
                                              ;
                                              pCVar82 = local_3c;
                                              local_21c._0_4_ = pVVar61->___x_2;
                                              local_21c._4_4_ = pVVar61->___y_3;
                                              local_214 = pVVar61->___z_4;
                                              pSVar52 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)&local_21c,

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                                              pSVar62 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)((int)&local_21c + 4),

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)pCVar82,(MethodInfo *)0x0);
                                              pSVar63 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            (&local_214,

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                                              OVar64 = (
                                                  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                  )
                                                  String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                                            (
                                                  _stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF
                                                  ,(Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                                  (Il2CppObject *)pSVar63,(MethodInfo *)0x0);
                                              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                                        ((
                                                  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *
                                                  )local_5c,OVar64,
                                                  List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                                                  );
                                              local_30 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_30->_padding_ + 1);
                                            } while ((int)local_30 < (int)uStack_100._4_4_);
                                          }
                                          pDVar70 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0x0;
                                          if (0 < (int)local_6c) {
                                            do {
                                              local_f0 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_54 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_68 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_cc = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_50 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_40 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_f4 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_48 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_30 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0xffffffff;
                                              local_70 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0x0;
                                              local_74 = pDVar70;
                                              do {
                                                pDVar70 = local_74;
                                                local_74 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_74->_padding_ + 1);
                                                pGVar58 =
                                                  List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                                            ((
                                                  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *
                                                  )local_38,(int)pDVar70,
                                                  List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                                  );
                                                peVar60 =
                                                  List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                                            (&local_350,
                                                             (
                                                  List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *
                                                  )local_9c,(int)pGVar58,
                                                  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                                  );
                                                local_194._0_4_ =
                                                     peVar60->___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0;
                                                local_194._4_4_ =
                                                     peVar60->___JcmgDDuATuYwIOWhebgtdHoiXsW_1;
                                                local_18c = peVar60->
                                                  ___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
                                                VVar84 =
                                                  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                                            ((
                                                  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *
                                                  )local_88,(int)pGVar58,
                                                  List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                                                  );
                                                local_1b0.___x_0 = local_b0._4_4_;
                                                local_b0._4_4_ = VVar84.___x_0;
                                                local_a8[0] = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)VVar84.___y_1;
                                                local_1b0.___y_1 = (float)local_a8[0];
                                                if (local_118 ==
                                                    (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0x0) goto LAB_103e28c9;
                                                peVar60 =
                                                  List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                                            (&local_340,
                                                             (
                                                  List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *
                                                  )local_118,(int)pGVar58,
                                                  List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                                  );
                                                local_1a0._0_4_ =
                                                     peVar60->___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0;
                                                local_1a0._4_4_ =
                                                     peVar60->___JcmgDDuATuYwIOWhebgtdHoiXsW_1;
                                                local_198 = peVar60->
                                                  ___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
                                                VVar42.___z_4._0_1_ = (char)local_18c;
                                                VVar42.___x_2 = (float)(undefined4)local_194;
                                                VVar42.___y_3 = (float)local_194._4_4_;
                                                VVar42.___z_4._1_1_ = (char)((uint)local_18c >> 8);
                                                VVar42.___z_4._2_2_ =
                                                     (short)((uint)local_18c >> 0x10);
                                                pVVar61 =
                                                  Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                                            ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)&local_268,&local_3c0,VVar42,(MethodInfo *)0x0);
                                                local_194._0_4_ = pVVar61->___x_2;
                                                local_194._4_4_ = pVVar61->___y_3;
                                                local_18c = (String_t *)pVVar61->___z_4;
                                                VVar43.___z_4._0_1_ = (char)local_198;
                                                VVar43.___x_2 = (float)(undefined4)local_1a0;
                                                VVar43.___y_3 = (float)local_1a0._4_4_;
                                                VVar43.___z_4._1_1_ = (char)((uint)local_198 >> 8);
                                                VVar43.___z_4._2_2_ =
                                                     (short)((uint)local_198 >> 0x10);
                                                pVVar61 =
                                                  Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                                                            ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)&local_130,&local_3c0,VVar43,(MethodInfo *)0x0);
                                                pDVar46 = local_15c;
                                                local_1a0._0_4_ = pVVar61->___x_2;
                                                local_1a0._4_4_ = pVVar61->___y_3;
                                                local_198 = (String_t *)pVVar61->___z_4;
                                                if (local_15c ==
                                                    (
                                                  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086
                                                  *)0x0) goto LAB_103e28c9;
                                                VVar30.___z_4._0_2_ = (short)local_18c;
                                                VVar30.___x_2 = (float)(undefined4)local_194;
                                                VVar30.___y_3 = (float)local_194._4_4_;
                                                VVar30.___z_4._2_2_ =
                                                     (short)((uint)local_18c >> 0x10);
                                                bVar50 =
                                                  Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                                            ((
                                                  Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7
                                                  *)local_15c,VVar30,(int *)&local_f0,
                                                  Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                                                  );
                                                pDVar70 = local_44;
                                                if (!bVar50) {
                                                  local_f0 = local_44;
                                                  iVar31.___z_2._0_2_ = (short)local_18c;
                                                  iVar31.___x_0 = (undefined4)local_194;
                                                  iVar31.___y_1 = local_194._4_4_;
                                                  iVar31.___z_2._2_2_ =
                                                       (short)((uint)local_18c >> 0x10);
                                                  local_44 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_44->_padding_ + 1);
                                                  Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                                                            (pDVar46,iVar31,(Il2CppObject *)pDVar70,

                                                  Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var
                                                  );
                                                  pCVar82 = local_3c;
                                                  pSVar52 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)&local_194,

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                                                  pSVar62 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)((int)&local_194 + 4),

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)pCVar82,(MethodInfo *)0x0);
                                                  pSVar63 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)&local_18c,

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                                                  OVar64 = (
                                                  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                  )
                                                  String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                                            (
                                                  _stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF
                                                  ,(Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                                  (Il2CppObject *)pSVar63,(MethodInfo *)0x0);
                                                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                                            ((
                                                  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *
                                                  )local_5c,OVar64,
                                                  List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                                                  );
                                                }
                                                pDVar47 = local_140;
                                                if (local_140 ==
                                                    (
                                                  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920
                                                  *)0x0) goto LAB_103e28c9;
                                                bVar50 =
                                                  Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265
                                                            ((
                                                  Dictionary_2_tA645DE43FD5B5A6AE2D4951786E19178B477CF49
                                                  *)local_140,local_1b0,(int *)&local_cc,
                                                  Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265_RuntimeMethod_var
                                                  );
                                                pDVar70 = local_4c;
                                                pCVar82 = local_3c;
                                                if (!bVar50) {
                                                  local_cc = local_4c;
                                                  local_4c = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_4c->_padding_ + 1);
                                                  Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                                                            (pDVar47,(
                                                  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)
                                                  local_1b0,(Il2CppObject *)pDVar70,
                                                  Dictionary_2_Add_m2BFB6987D35DE2246B731A46FEBD4D47776B7E78_RuntimeMethod_var
                                                  );
                                                  pCVar82 = local_3c;
                                                  pSVar52 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            (&local_1b0.___x_0,

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                                                  uStack_100 = (double)local_1b0.___y_1;
                                                  _CIfmod();
                                                  uStack_138 = (double)CONCAT44((float)
                                                  extraout_ST0_02,(uint)uStack_138);
                                                  pSVar62 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)((int)&uStack_138 + 4),

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)pCVar82,(MethodInfo *)0x0);
                                                  OVar64 = (
                                                  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                  )
                                                  String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                                                            (
                                                  _stringLiteral79443EA6B541034C604FE9A19395BF95CCE71A22
                                                  ,(Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                                  (MethodInfo *)0x0);
                                                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                                            ((
                                                  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *
                                                  )local_60,OVar64,
                                                  List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                                                  );
                                                }
                                                pDVar46 = local_144;
                                                if (local_144 ==
                                                    (
                                                  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086
                                                  *)0x0) goto LAB_103e28c9;
                                                VVar32.___z_4._0_2_ = (short)local_198;
                                                VVar32.___x_2 = (float)(undefined4)local_1a0;
                                                VVar32.___y_3 = (float)local_1a0._4_4_;
                                                VVar32.___z_4._2_2_ =
                                                     (short)((uint)local_198 >> 0x10);
                                                bVar50 =
                                                  Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                                            ((
                                                  Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7
                                                  *)local_144,VVar32,(int *)&local_f4,
                                                  Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                                                  );
                                                pDVar70 = local_80;
                                                if (!bVar50) {
                                                  local_f4 = local_80;
                                                  iVar33.___z_2._0_2_ = (short)local_198;
                                                  iVar33.___x_0 = (undefined4)local_1a0;
                                                  iVar33.___y_1 = local_1a0._4_4_;
                                                  iVar33.___z_2._2_2_ =
                                                       (short)((uint)local_198 >> 0x10);
                                                  local_80 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_80->_padding_ + 1);
                                                  Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                                                            (pDVar46,iVar33,(Il2CppObject *)pDVar70,

                                                  Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var
                                                  );
                                                  pSVar52 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)&local_1a0,

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)pCVar82,(MethodInfo *)0x0);
                                                  pSVar62 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)((int)&local_1a0 + 4),

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                                                  pSVar63 =
                                                  Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                                            ((float *)&local_198,

                                                  _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3
                                                  ,(Il2CppObject *)local_3c,(MethodInfo *)0x0);
                                                  OVar64 = (
                                                  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                  )
                                                  String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                                            (
                                                  _stringLiteral93F9354DB37CAD8FD3A321410534387A582EED79
                                                  ,(Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                                  (Il2CppObject *)pSVar63,(MethodInfo *)0x0);
                                                  if (local_a0 ==
                                                      (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)0x0) goto LAB_103e28c9;
                                                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                                            ((
                                                  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *
                                                  )local_a0,OVar64,
                                                  List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                                                  );
                                                }
                                                pDVar70 = local_54;
                                                pDVar74 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_f0->_padding_ + 1);
                                                pDVar78 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_f4->_padding_ + 1);
                                                local_f0 = local_54;
                                                local_54 = local_68;
                                                local_f4 = local_48;
                                                local_48 = local_30;
                                                pDStack_34 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_cc->_padding_ + 1);
                                                local_cc = local_50;
                                                local_50 = local_40;
                                                local_70 = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_70->_padding_ + 1);
                                                local_68 = pDVar74;
                                                local_40 = pDStack_34;
                                                local_30 = pDVar78;
                                              } while ((int)local_70 < 3);
                                              pOVar65 = (
                                                  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                                  *)il2cpp_array_new_specific
                                                              (
                                                  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                                  ,9);
                                              local_1c0 = local_f0;
                                              local_2c = pOVar65;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&local_1c0);
                                              uStack_100 = (double)CONCAT44(pIVar66,(undefined4)
                                                                                    uStack_100);
                                              if (pOVar65 ==
                                                  (
                                                  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                                  *)0x0) goto LAB_103e28c9;
                                              ArrayElementTypeCheck((Il2CppArray *)pOVar65,pIVar66);
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(pOVar65,0,(Il2CppObject *)uStack_100._4_4_);
                                              local_1bc = local_cc;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&local_1bc);
                                              ArrayElementTypeCheck((Il2CppArray *)local_2c,pIVar66)
                                              ;
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(local_2c,1,pIVar66);
                                              local_dc = local_f4;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&local_dc);
                                              ArrayElementTypeCheck((Il2CppArray *)local_2c,pIVar66)
                                              ;
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(local_2c,2,pIVar66);
                                              local_84 = local_54;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&local_84);
                                              ArrayElementTypeCheck((Il2CppArray *)local_2c,pIVar66)
                                              ;
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(local_2c,3,pIVar66);
                                              local_d4 = local_50;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&local_d4);
                                              ArrayElementTypeCheck((Il2CppArray *)local_2c,pIVar66)
                                              ;
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(local_2c,4,pIVar66);
                                              local_78 = local_48;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&local_78);
                                              ArrayElementTypeCheck((Il2CppArray *)local_2c,pIVar66)
                                              ;
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(local_2c,5,pIVar66);
                                              local_b4 = local_68;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&local_b4);
                                              ArrayElementTypeCheck((Il2CppArray *)local_2c,pIVar66)
                                              ;
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(local_2c,6,pIVar66);
                                              VStack_1f8.___y_1 = (float)pDStack_34;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&VStack_1f8.___y_1);
                                              ArrayElementTypeCheck((Il2CppArray *)local_2c,pIVar66)
                                              ;
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(local_2c,7,pIVar66);
                                              local_90.___y_1 = (float)pDVar78;
                                              pIVar66 = il2cpp_value_box(
                                                  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                  ,&local_90.___y_1);
                                              pOVar65 = local_2c;
                                              ArrayElementTypeCheck((Il2CppArray *)local_2c,pIVar66)
                                              ;
                                              ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                              ::SetAt(pOVar65,8,pIVar66);
                                              OVar64 = (
                                                  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360
                                                  )
                                                  String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                                                            (
                                                  _stringLiteralD3A51F9772FB32EDF87B5B88D5BDD5815CBD9890
                                                  ,pOVar65,(MethodInfo *)0x0);
                                              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                                                        ((
                                                  List_1_tAC387D40AA794C98425777894B362093CF4E78AC *
                                                  )local_64,OVar64,
                                                  List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                                                  );
                                              pDVar70 = local_74;
                                            } while ((int)local_74 < (int)local_6c);
                                          }
                                        }
                                        local_7c = (
                                                  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)((int)&local_7c[-1].____syncRoot_9 + 3);
                                        iStack_c0 = iStack_c0 + -4;
                                        pDVar70 = local_5c;
                                      } while (-1 < (int)local_7c);
                                    }
                                    if ((int)pDVar70->___entries_1 < 1) {
LAB_103e27e4:
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                (local_9c,
                                                 ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                (local_118,
                                                 ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                (local_88,
                                                 ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                (local_38,
                                                 ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                (pDVar70,
                                                 ListPoolExtension_ReturnToPool_TisString_t_mD4C08C7926077CD5FDDF31BCBEB44C29BA7EC1C6_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                (local_60,
                                                 ListPoolExtension_ReturnToPool_TisString_t_mD4C08C7926077CD5FDDF31BCBEB44C29BA7EC1C6_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                (local_a0,
                                                 ListPoolExtension_ReturnToPool_TisString_t_mD4C08C7926077CD5FDDF31BCBEB44C29BA7EC1C6_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                (local_64,
                                                 ListPoolExtension_ReturnToPool_TisString_t_mD4C08C7926077CD5FDDF31BCBEB44C29BA7EC1C6_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)local_13c,
                                                 DictPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5BD0D2BF815778FED87B53F0C5F407237A937297_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)local_140,
                                                 DictPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m38D3FAFE9B60D88A306B4698E236A0064E7F76A2_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)local_144,
                                                 DictPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5BD0D2BF815778FED87B53F0C5F407237A937297_RuntimeMethod_var
                                                );
                                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                                ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08
                                                  *)local_15c,
                                                 DictPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5BD0D2BF815778FED87B53F0C5F407237A937297_RuntimeMethod_var
                                                );
                                      ExceptionList = pvStack_1c;
                                      return;
                                    }
                                    uStack_100 = (double)CONCAT44(param_1->___outputString_6,
                                                                  (undefined4)uStack_100);
                                    pOVar65 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE
                                               *)il2cpp_array_new_specific
                                                           (
                                                  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                                  ,6);
                                    if (pOVar65 !=
                                        (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                                        0x0) {
                                      if (_stringLiteralD76B42AEB8D67783912E24BD8B96B10B5B34EF5B !=
                                          (String_t *)0x0) {
                                        pIVar66 = IsInst((Il2CppObject *)

                                                  _stringLiteralD76B42AEB8D67783912E24BD8B96B10B5B34EF5B
                                                  ,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                                        if (pIVar66 == (Il2CppObject *)0x0) {
                                          pMVar87 = (MethodInfo *)0x0;
                                          pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception
                                                              ();
                    /* WARNING: Subroutine does not return */
                                          il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                        }
                                      }
                                      if (pOVar65->_padding_ == 0) {
                                        pMVar87 = (MethodInfo *)0x0;
                                        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                      }
                                      pOVar65->m_Items[0] =
                                           (Il2CppObject *)
                                           _stringLiteralD76B42AEB8D67783912E24BD8B96B10B5B34EF5B;
                                      if (_stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C !=
                                          (String_t *)0x0) {
                                        pIVar66 = IsInst((Il2CppObject *)

                                                  _stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C
                                                  ,*(Il2CppClass **)(pOVar65->_padding_ + 0x20));
                                        if (pIVar66 == (Il2CppObject *)0x0) {
                                          pMVar87 = (MethodInfo *)0x0;
                                          pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception
                                                              ();
                    /* WARNING: Subroutine does not return */
                                          il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                        }
                                      }
                                      pMVar87 = (MethodInfo *)0x0;
                                      if ((uint)pOVar65->_padding_ < 2) {
                                        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                      }
                                      *(String_t **)&pOVar65->field_0x14 =
                                           _stringLiteral3297E004BF75B05A03E39D998F746EF9D558592C;
                                      pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                                                          ((Il2CppObject *)pDVar70,(MethodInfo *)0x0
                                                          );
                                      if (pSVar52 != (String_t *)0x0) {
                                        pIVar66 = IsInst((Il2CppObject *)pSVar52,
                                                         *(Il2CppClass **)
                                                          (pOVar65->_padding_ + 0x20));
                                        if (pIVar66 == (Il2CppObject *)0x0) {
                                          pMVar87 = (MethodInfo *)0x0;
                                          pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception
                                                              ();
                    /* WARNING: Subroutine does not return */
                                          il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                        }
                                      }
                                      pMVar87 = (MethodInfo *)0x0;
                                      if ((uint)pOVar65->_padding_ < 3) {
                                        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                      }
                                      pOVar65[1]._padding_ = (int)pSVar52;
                                      pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                                                          ((Il2CppObject *)local_60,
                                                           (MethodInfo *)0x0);
                                      if (pSVar52 != (String_t *)0x0) {
                                        pIVar66 = IsInst((Il2CppObject *)pSVar52,
                                                         *(Il2CppClass **)
                                                          (pOVar65->_padding_ + 0x20));
                                        if (pIVar66 == (Il2CppObject *)0x0) {
                                          pMVar87 = (MethodInfo *)0x0;
                                          pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception
                                                              ();
                    /* WARNING: Subroutine does not return */
                                          il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                        }
                                      }
                                      pMVar87 = (MethodInfo *)0x0;
                                      if ((uint)pOVar65->_padding_ < 4) {
                                        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                      }
                                      pOVar65[1]._padding_ = (int)pSVar52;
                                      pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                                                          ((Il2CppObject *)local_a0,
                                                           (MethodInfo *)0x0);
                                      if (pSVar52 != (String_t *)0x0) {
                                        pIVar66 = IsInst((Il2CppObject *)pSVar52,
                                                         *(Il2CppClass **)
                                                          (pOVar65->_padding_ + 0x20));
                                        if (pIVar66 == (Il2CppObject *)0x0) {
                                          pMVar87 = (MethodInfo *)0x0;
                                          pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception
                                                              ();
                    /* WARNING: Subroutine does not return */
                                          il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                        }
                                      }
                                      pMVar87 = (MethodInfo *)0x0;
                                      if ((uint)pOVar65->_padding_ < 5) {
                                        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                      }
                                      pOVar65[1]._padding_ = (int)pSVar52;
                                      pSVar52 = String_Concat_mA962133CBA0A279A3D621F19EE959A433A39B12B
                                                          ((Il2CppObject *)local_64,
                                                           (MethodInfo *)0x0);
                                      if (pSVar52 != (String_t *)0x0) {
                                        pIVar66 = IsInst((Il2CppObject *)pSVar52,
                                                         *(Il2CppClass **)
                                                          (pOVar65->_padding_ + 0x20));
                                        if (pIVar66 == (Il2CppObject *)0x0) {
                                          pMVar87 = (MethodInfo *)0x0;
                                          pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception
                                                              ();
                    /* WARNING: Subroutine does not return */
                                          il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                        }
                                      }
                                      pMVar87 = (MethodInfo *)0x0;
                                      if ((uint)pOVar65->_padding_ < 6) {
                                        pEVar77 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
                                        il2cpp_codegen_raise_exception(pEVar77,pMVar87);
                                      }
                                      pOVar65[1]._padding_ = (int)pSVar52;
                                      pSVar52 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                                                          (
                                                  _stringLiteralEDB278EBA330168DC99FC7057854369F7BFD0B42
                                                  ,pOVar65,(MethodInfo *)0x0);
                                      pSVar52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                                                          (uStack_100._4_4_,pSVar52,
                                                           (MethodInfo *)0x0);
                                      pDVar70 = local_5c;
                                      param_1->___outputString_6 = pSVar52;
                                      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *
                                                 )local_5c,
                                                 List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var
                                                );
                                      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *
                                                 )local_60,
                                                 List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var
                                                );
                                      if (local_a0 !=
                                          (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                          0x0) {
                                        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7
                                                    *)local_a0,

                                                  List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var
                                                  );
                                        List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                                                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7
                                                    *)local_64,

                                                  List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var
                                                  );
                                        goto LAB_103e27e4;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_103e28c9;
  while( true ) {
    bVar50 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                       (pLVar5,*(Il2CppObject **)((int)local_288.___current_3 + 0xc),
                        List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var)
    ;
    if (bVar50) break;
LAB_103df110:
    pOVar65 = local_2c;
    bVar50 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                       (&local_288,
                        Enumerator_MoveNext_mC8EFC64ACD0BD264530EC1341BFD1FA2D06F7CBA_RuntimeMethod_var
                       );
    pIVar66 = local_288.___current_3;
    if (!bVar50) {
      auStack_170[(int)pOVar65] = 0x53b;
      local_160 = local_160 + 1;
      FUN_103dfb8d();
      return;
    }
    pLVar5 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)
             ((Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 *)&local_b4->___count_2)->
             ___hashCode_0;
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (((String_t *)local_288.___current_3 == (String_t *)0x0) ||
       (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
       pLVar5 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0)) goto LAB_103e28c9;
  }
  local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
  if ((List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)
      ((String_t *)((int)pIVar66 + 0x10))->_padding_ !=
      (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
    pEVar57 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                        (&local_450,
                         (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)
                         ((String_t *)((int)pIVar66 + 0x10))->_padding_,
                         List_1_GetEnumerator_m437694725739E4A4A5D602CBF3F2C85B0ACFA6A4_RuntimeMethod_var
                        );
    local_278.___list_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pEVar57->___list_0;
    local_278.___index_1 = pEVar57->___index_1;
    local_278.___version_2 = pEVar57->___version_2;
    local_278.___current_3 = (Il2CppObject *)pEVar57->___current_3;
    local_14._0_1_ = 1;
    while( true ) {
      bVar50 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                         (&local_278,
                          Enumerator_MoveNext_mDC261D7340126A64E1CC38D3FEA974BF7E068DD4_RuntimeMethod_var
                         );
      if (!bVar50) {
        local_14 = (uint)local_14._1_3_ << 8;
        auStack_170[(int)local_2c] = 0x51f;
        local_160 = local_160 + 1;
        FUN_103dfae4();
        return;
      }
      local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
      if ((String_t *)local_278.___current_3 == (String_t *)0x0) break;
      local_30 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                 ((String_t *)((int)local_278.___current_3 + 0x20))->_padding_;
      pDVar70 = *(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 **)
                 &((String_t *)((int)local_278.___current_3 + 0x20))->___m_firstChar_1;
      local_94 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                 ((String_t *)((int)local_278.___current_3 + 0x30))->_padding_;
      local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                 ((String_t *)((int)local_278.___current_3 + 0x30))->_padding_;
      local_120 = (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)
                  ((String_t *)((int)local_278.___current_3 + 0x20))->___m_stringLength_0;
      local_50 = pDVar70;
      local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
      if ((pDVar70 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) ||
         (local_48 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pDVar70->___entries_1
         , local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
         local_94 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)) break;
      local_68 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_94->____size_2;
      pEVar80 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
      pLVar79 = local_94;
      local_98 = pEVar80;
      while ((int)pEVar80 < (int)local_68) {
        if ((int)local_48 < 1) {
LAB_103df261:
          local_84 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_6c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_ec = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_78 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_74 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_e8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_7c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_70 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_c8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          for (local_54 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
              (int)local_54 < 3;
              local_54 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         ((int)&local_54->_padding_ + 1)) {
            local_98 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                       ((int)&pEVar80->_padding_ + 1);
            pGVar58 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                (pLVar79,(int)pEVar80,
                                 List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                );
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_30 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_103e28c9;
            peVar60 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                (&local_268,
                                 (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)local_30,
                                 (int)pGVar58,
                                 List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                );
            VVar36.___z_4._1_1_ = (char)((uint)peVar60->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2 >> 8);
            VVar36._0_9_ = *(unkbyte9 *)peVar60;
            VVar36.___z_4._2_2_ = (short)((uint)peVar60->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2 >> 0x10);
            pVVar61 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_340,
                                 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)local_330,
                                 VVar36,(MethodInfo *)0x0);
            local_1d8.___x_0 = (int)pVVar61->___x_2;
            local_1d8.___y_1 = (int)pVVar61->___y_3;
            local_1d8.___z_2 = (int)pVVar61->___z_4;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_40 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_103e28c9;
            VVar84 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                               ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_40,
                                (int)pGVar58,
                                List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                               );
            fVar16 = local_90.___x_0;
            local_90.___y_1 = VVar84.___y_1;
            local_1a8.___y_1 = (int)local_90.___y_1;
            local_1a8.___x_0 = (int)fVar16;
            local_90 = VVar84;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_120 == (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0)
            goto LAB_103e28c9;
            peVar60 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                (&local_350,local_120,(int)pGVar58,
                                 List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                );
            local_1cc._0_4_ = peVar60->___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0;
            local_1cc._4_4_ = peVar60->___JcmgDDuATuYwIOWhebgtdHoiXsW_1;
            local_1c4 = peVar60->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
            local_130.___x_0 = local_1d8.___x_0;
            local_130.___y_1 = local_1d8.___y_1;
            local_130.___z_2 = local_1d8.___z_2;
            local_150 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                        bankers_roundf((float)local_1d8.___x_0 * ___real_43800000);
            local_130.___x_0 = (int)local_150;
            local_150 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                        bankers_roundf((float)local_130.___y_1 * ___real_43800000);
            local_130.___y_1 = (int)local_150;
            local_150 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                        bankers_roundf((float)local_130.___z_2 * ___real_43800000);
            pDVar46 = local_13c;
            uVar85 = SUB42(local_150,0);
            uVar86 = (undefined2)((uint)local_150 >> 0x10);
            VVar22.___z_4._0_2_ = uVar85;
            VVar22.___x_2 = (float)local_130.___x_0;
            VVar22.___y_3 = (float)local_130.___y_1;
            VVar22.___z_4._2_2_ = uVar86;
            local_130.___z_2 = (int)local_150;
            bVar50 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                               ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)local_13c,
                                VVar22,(int *)&local_c8,
                                Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                               );
            pDVar70 = local_44;
            if (!bVar50) {
              local_d0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         ((int)&local_44->_padding_ + 1);
              local_c8 = local_44;
              iVar23.___z_2._0_2_ = uVar85;
              iVar23.___x_0 = local_130.___x_0;
              iVar23.___y_1 = local_130.___y_1;
              iVar23.___z_2._2_2_ = uVar86;
              local_44 = local_d0;
              Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                        (pDVar46,iVar23,(Il2CppObject *)pDVar70,
                         Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var
                        );
              pCVar82 = local_3c;
              pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_1d8,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_1d8.___y_1,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
              pSVar63 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_1d8.___z_2,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                 (_stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF,
                                  (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                  (Il2CppObject *)pSVar63,(MethodInfo *)0x0);
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if (local_5c == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_5c,OVar64,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            pDVar47 = local_140;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_140 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
            goto LAB_103e28c9;
            bVar50 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                               (local_140,local_1a8,(Il2CppObject **)&local_ec,
                                Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265_RuntimeMethod_var
                               );
            pDVar70 = local_4c;
            pCVar82 = local_3c;
            if (!bVar50) {
              local_c4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         ((int)&local_4c->_padding_ + 1);
              local_ec = local_4c;
              local_4c = local_c4;
              Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                        (pDVar47,local_1a8,(Il2CppObject *)pDVar70,
                         Dictionary_2_Add_m2BFB6987D35DE2246B731A46FEBD4D47776B7E78_RuntimeMethod_var
                        );
              pCVar82 = local_3c;
              pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_1a8,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              local_158 = (double)(float)local_1a8.___y_1;
              _CIfmod();
              uStack_138 = (double)CONCAT44((float)extraout_ST0,(uint)uStack_138);
              pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)((int)&uStack_138 + 4),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
              OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                                 (_stringLiteral79443EA6B541034C604FE9A19395BF95CCE71A22,
                                  (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,(MethodInfo *)0x0)
              ;
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if (local_60 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_60,OVar64,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            pDVar46 = local_144;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_144 == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0)
            goto LAB_103e28c9;
            VVar24.___z_4._0_2_ = (short)local_1c4;
            VVar24.___x_2 = (float)(undefined4)local_1cc;
            VVar24.___y_3 = (float)local_1cc._4_4_;
            VVar24.___z_4._2_2_ = (short)((uint)local_1c4 >> 0x10);
            bVar50 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                               ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)local_144,
                                VVar24,(int *)&local_e8,
                                Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                               );
            pDVar70 = local_80;
            if (!bVar50) {
              local_f8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         ((int)&local_80->_padding_ + 1);
              local_e8 = local_80;
              iVar25.___z_2._0_2_ = (short)local_1c4;
              iVar25.___x_0 = (undefined4)local_1cc;
              iVar25.___y_1 = local_1cc._4_4_;
              iVar25.___z_2._2_2_ = (short)((uint)local_1c4 >> 0x10);
              local_80 = local_f8;
              Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                        (pDVar46,iVar25,(Il2CppObject *)pDVar70,
                         Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var
                        );
              pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_1cc,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
              pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)((int)&local_1cc + 4),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              pSVar63 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_1c4,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                 (_stringLiteral93F9354DB37CAD8FD3A321410534387A582EED79,
                                  (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                  (Il2CppObject *)pSVar63,(MethodInfo *)0x0);
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if (local_a0 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_a0,OVar64,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            pDVar70 = local_6c;
            local_6c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       ((int)&local_c8->_padding_ + 1);
            pDVar74 = local_7c;
            local_7c = local_70;
            local_70 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       ((int)&local_e8->_padding_ + 1);
            piVar44 = &local_ec->_padding_;
            local_ec = local_78;
            local_78 = local_74;
            pLVar79 = local_94;
            local_c8 = local_84;
            pEVar80 = local_98;
            local_e8 = pDVar74;
            local_84 = pDVar70;
            local_74 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)((int)piVar44 + 1);
          }
          pDVar70 = local_50;
          if (local_c8 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff) {
            pOVar65 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                      il2cpp_array_new_specific
                                (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                 ,9);
            local_228 = local_c8;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_228);
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (pOVar65 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
            goto LAB_103e28c9;
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,0,pIVar66);
            local_224 = local_ec;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_224);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,1,pIVar66);
            local_220 = local_e8;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_220);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,2,pIVar66);
            local_244 = local_84;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_244);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,3,pIVar66);
            local_23c = local_78;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_23c);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,4,pIVar66);
            local_240 = local_7c;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_240);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,5,pIVar66);
            local_22c = local_6c;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_22c);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,6,pIVar66);
            local_230 = local_74;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_230);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,7,pIVar66);
            local_234 = local_70;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&local_234);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,8,pIVar66);
            OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                     String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                               (_stringLiteralD3A51F9772FB32EDF87B5B88D5BDD5815CBD9890,pOVar65,
                                (MethodInfo *)0x0);
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_64 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_103e28c9;
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_64,OVar64,
                       List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            pLVar79 = local_94;
            pDVar70 = local_50;
            pEVar80 = local_98;
          }
        }
        else {
          pGVar58 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                              (pLVar79,(int)pEVar80,
                               List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                              );
          pAVar59 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                              (&local_410,
                               (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)pDVar70,
                               (int)pGVar58,
                               List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                              );
          pLVar79 = local_94;
          if (__real_3f000000 < (float)pAVar59->___actionId_4 ||
              __real_3f000000 == (float)pAVar59->___actionId_4) goto LAB_103df261;
          pEVar80 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                    ((int)&pEVar80->_padding_ + 3);
          local_98 = pEVar80;
        }
      }
    }
  }
  goto LAB_103e28c9;
  while( true ) {
    iVar68 = InterfaceFuncInvoker0<int>::Invoke
                       (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                        (Il2CppObject *)pDVar70);
    if ((char)iVar68 == '\0') {
      auStack_170[(int)pOVar65] = 0xa15;
      local_160 = local_160 + 1;
      FUN_103e0a46();
      return;
    }
    pCVar71 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
              InterfaceFuncInvoker0<int>::Invoke
                        (0,
                         IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var
                         ,(Il2CppObject *)pDVar70);
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (pCVar71 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_103e28c9;
    pOVar72 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                        (pCVar71,SUB41(&local_1ec,0),
                         Component_TryGetComponent_TisPropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69_mA0FF3023F767502EF6640CB87F6D15748433BBDD_RuntimeMethod_var
                        );
    if ((char)pOVar72 != '\0') break;
LAB_103dfd08:
    local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
    if (pDVar70 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) goto LAB_103e28c9;
  }
  local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
  if ((local_1ec != 0) &&
     (local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
     *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(local_1ec + 0xc) !=
     (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0)) {
    pEVar57 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                        (&EStack_420,
                         *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(local_1ec + 0xc),
                         List_1_GetEnumerator_m27D5DE804DC04EC004BADF42DA9C256C0472AF27_RuntimeMethod_var
                        );
    local_298.___list_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pEVar57->___list_0;
    local_298.___index_1 = pEVar57->___index_1;
    local_298.___version_2 = pEVar57->___version_2;
    local_298.___current_3 = (Il2CppObject *)pEVar57->___current_3;
    local_14._0_1_ = 5;
    while( true ) {
      do {
        do {
          do {
            do {
              bVar50 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                                 (&local_298,
                                  Enumerator_MoveNext_m4FFF46C2277B3F90E529CF62038401690164A494_RuntimeMethod_var
                                 );
              if (!bVar50) {
                local_14 = CONCAT31(local_14._1_3_,4);
                auStack_170[(int)local_2c] = 0x9fb;
                local_160 = local_160 + 1;
                FUN_103e0997();
                return;
              }
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if ((String_t *)local_298.___current_3 == (String_t *)0x0) goto LAB_103e28c9;
              pMVar7 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)
                        ((int)local_298.___current_3 + 8);
            } while ((char)((String_t *)((int)local_298.___current_3 + 0x10))->_padding_ != '\0');
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (pMVar7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
            goto LAB_103e28c9;
            pOVar56 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                      MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                (pMVar7,(MethodInfo *)0x0);
            if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
                 '\0') &&
               (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
                == 0)) {
              il2cpp_runtime_class_init
                        (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
            }
            bVar50 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                               (pOVar56,(MethodInfo *)0x0);
          } while (!bVar50);
          pOVar65 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar7,
                               SUB41(&local_1f0,0),
                               Component_TryGetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m6CCB6E2E588C6CCECCC927291FB4291B1FE73289_RuntimeMethod_var
                              );
        } while ((char)pOVar65 == '\0');
        local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                   ((Entry_tCDC4EA498E71B056C8C5CAA79DCC23A3051ABBA2 *)&local_b4->___count_2)->
                   ___hashCode_0;
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (local_1f0 == (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0)
        goto LAB_103e28c9;
        pMVar73 = Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                            (local_1f0,(MethodInfo *)0x0);
        local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
        if (local_40 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
        goto LAB_103e28c9;
        bVar50 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                           ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)local_40,
                            (Il2CppObject *)pMVar73,
                            List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var
                           );
      } while (!bVar50);
      local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
      if (local_15c == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0) break;
      Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)local_15c,
                 Dictionary_2_Clear_m191DF7FB0C93C167D7030AACC2CAC71225D1CDA9_RuntimeMethod_var);
      local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
      if (pOVar56 == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) break;
      Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015
                ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar56,
                 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_9c,(MethodInfo *)0x0);
      Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
                ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar56,0,
                 (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_88,(MethodInfo *)0x0);
      Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243
                ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar56,
                 (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_118,(MethodInfo *)0x0);
      Mesh_GetTangents_m950F26B38C1009C9B65C3C5B27785A2076C28351
                ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar56,
                 (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)local_11c,(MethodInfo *)0x0);
      Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
                ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar56,
                 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)local_38,0,(MethodInfo *)0x0);
      fStack_2b8 = (float)local_330._0_4_;
      fStack_2b4 = (float)local_330._4_4_;
      fStack_2b0 = (float)local_330._8_4_;
      fStack_2ac = (float)local_330._12_4_;
      fStack_2c8 = (float)local_330._16_4_;
      fStack_2c4 = (float)local_330._20_4_;
      fStack_2c0 = (float)local_330._24_4_;
      fStack_2bc = (float)local_330._28_4_;
      fStack_2d8 = (float)local_330._32_4_;
      fStack_2d4 = (float)local_330._36_4_;
      fStack_2d0 = (float)local_330._40_4_;
      fStack_2cc = (float)local_330._44_4_;
      fStack_2e8 = (float)local_330._48_4_;
      fStack_2e4 = fStack_2fc;
      fStack_2e0 = fStack_2f8;
      fStack_2dc = fStack_2f4;
      pTVar69 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar7,
                           (MethodInfo *)0x0);
      local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
      if (pTVar69 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      pMVar55 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                          (&local_490,pTVar69,(MethodInfo *)0x0);
      fVar16 = pMVar55->___m33_15;
      MVar17.___m10_1 = fStack_2b4;
      MVar17.___m00_0 = fStack_2b8;
      MVar17.___m20_2 = fStack_2b0;
      MVar17.___m30_3 = fStack_2ac;
      MVar17.___m01_4 = fStack_2c8;
      MVar17.___m11_5 = fStack_2c4;
      MVar17.___m21_6 = fStack_2c0;
      MVar17.___m31_7 = fStack_2bc;
      MVar17.___m02_8 = fStack_2d8;
      MVar17.___m12_9 = fStack_2d4;
      MVar17.___m22_10 = fStack_2d0;
      MVar17.___m32_11 = fStack_2cc;
      MVar17.___m03_12 = fStack_2e8;
      MVar17.___m13_13 = fStack_2e4;
      MVar17.___m23_14 = fStack_2e0;
      MVar17.___m33_15 = fStack_2dc;
      MVar19.___m23_14._2_2_ = (short)((uint)pMVar55->___m23_14 >> 0x10);
      MVar19._0_58_ = *(undefined1 (*) [58])pMVar55;
      MVar19.___m33_15._0_1_ = SUB41(fVar16,0);
      MVar19.___m33_15._1_1_ = (char)((uint)fVar16 >> 8);
      MVar19.___m33_15._2_2_ = (short)((uint)fVar16 >> 0x10);
      pMVar55 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                          (&MStack_4d0,MVar17,MVar19,(MethodInfo *)0x0);
      local_400.___m00_0 = pMVar55->___m00_0;
      local_400.___m10_1 = pMVar55->___m10_1;
      local_400.___m20_2 = pMVar55->___m20_2;
      local_400.___m30_3 = pMVar55->___m30_3;
      local_400.___m01_4 = pMVar55->___m01_4;
      local_400.___m11_5 = pMVar55->___m11_5;
      local_400.___m21_6 = pMVar55->___m21_6;
      local_400.___m31_7 = pMVar55->___m31_7;
      local_400.___m02_8 = pMVar55->___m02_8;
      local_400.___m12_9 = pMVar55->___m12_9;
      local_400.___m22_10 = pMVar55->___m22_10;
      local_400.___m32_11 = pMVar55->___m32_11;
      local_400.___m03_12 = pMVar55->___m03_12;
      local_400.___m13_13 = pMVar55->___m13_13;
      local_400.___m23_14 = pMVar55->___m23_14;
      local_400.___m33_15 = pMVar55->___m33_15;
      local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
      if ((local_11c == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) ||
         (local_78 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_11c->____size_2
         , local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0),
         local_38 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)) break;
      local_98 = local_38->___entries_1;
      if (local_b5 != '\0') {
        local_6c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)((int)local_98 / 2);
        pDVar70 = local_6c;
        while (pDVar74 = local_6c,
              pDVar78 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                        ((int)&pDVar70[-1].____syncRoot_9 + 1), -1 < (int)pDVar78) {
          local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                               ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_38,
                                (int)pDVar78,
                                List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                               );
          local_68 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                               ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_38,
                                (int)((int)&pDVar70[-1].____syncRoot_9 + 2),
                                List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                               );
          local_74 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                               ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_38,
                                (int)((int)&pDVar70[-1].____syncRoot_9 + 3),
                                List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                               );
          iVar68 = (int)&pDVar78->_padding_ + (int)&pDVar74->_padding_;
          local_48 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                               ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_38,iVar68,
                                List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                               );
          local_70 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                               ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_38,
                                iVar68 + 2,
                                List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                               );
          pDVar74 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                    List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                              ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_38,
                               iVar68 + 1,
                               List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                              );
          pDVar70 = pDVar78;
          if (((local_40 == local_48) && (local_68 == local_70)) && (local_74 == pDVar74)) {
            List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_38,iVar68,3,
                       List_1_RemoveRange_m415CC40F3C018F1D693A921F3C55EBA0C7E36086_RuntimeMethod_var
                      );
          }
        }
        local_98 = local_38->___entries_1;
      }
      pLVar79 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0;
      pLVar81 = local_11c;
      local_94 = pLVar79;
      while ((int)pLVar79 < (int)local_98) {
        if (local_78 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
LAB_103e0159:
          local_48 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_74 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_e0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_68 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_6c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_d8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_70 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_7c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          local_e4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff;
          for (local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
              (int)local_40 < 3;
              local_40 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         ((int)&local_40->_padding_ + 1)) {
            local_94 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                       ((int)&pLVar79->_padding_ + 1);
            pGVar58 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_38,
                                 (int)pLVar79,
                                 List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                );
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_9c == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_103e28c9;
            peVar60 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                (&eStack_360,
                                 (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)local_9c,
                                 (int)pGVar58,
                                 List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                );
            local_17c._0_4_ = peVar60->___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0;
            local_17c._4_4_ = peVar60->___JcmgDDuATuYwIOWhebgtdHoiXsW_1;
            local_174 = peVar60->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_88 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_103e28c9;
            VVar84 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                               ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_88,
                                (int)pGVar58,
                                List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                               );
            fVar16 = VStack_1f8.___x_0;
            VStack_1f8.___y_1 = VVar84.___y_1;
            local_1b8.___y_1 = (int)VStack_1f8.___y_1;
            local_1b8.___x_0 = (int)fVar16;
            VStack_1f8 = VVar84;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_118 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_103e28c9;
            peVar60 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                (&eStack_370,
                                 (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)local_118,
                                 (int)pGVar58,
                                 List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                );
            local_188._0_4_ = peVar60->___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0;
            local_188._4_4_ = peVar60->___JcmgDDuATuYwIOWhebgtdHoiXsW_1;
            local_180 = peVar60->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
            VVar37.___z_4._0_1_ = (char)local_174;
            VVar37.___x_2 = (float)(undefined4)local_17c;
            VVar37.___y_3 = (float)local_17c._4_4_;
            VVar37.___z_4._1_1_ = (char)((uint)local_174 >> 8);
            VVar37.___z_4._2_2_ = (short)((uint)local_174 >> 0x10);
            pVVar61 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                (&VStack_380,&local_400,VVar37,(MethodInfo *)0x0);
            local_17c._0_4_ = pVVar61->___x_2;
            local_17c._4_4_ = pVVar61->___y_3;
            local_174 = (String_t *)pVVar61->___z_4;
            VVar38.___z_4._0_1_ = (char)local_180;
            VVar38.___x_2 = (float)(undefined4)local_188;
            VVar38.___y_3 = (float)local_188._4_4_;
            VVar38.___z_4._1_1_ = (char)((uint)local_180 >> 8);
            VVar38.___z_4._2_2_ = (short)((uint)local_180 >> 0x10);
            pVVar61 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                                (&local_258,&local_400,VVar38,(MethodInfo *)0x0);
            pDVar46 = local_15c;
            local_188._0_4_ = pVVar61->___x_2;
            local_188._4_4_ = pVVar61->___y_3;
            local_180 = (String_t *)pVVar61->___z_4;
            VVar26.___z_4._0_2_ = (short)local_174;
            VVar26.___x_2 = (float)(undefined4)local_17c;
            VVar26.___y_3 = (float)local_17c._4_4_;
            VVar26.___z_4._2_2_ = (short)((uint)local_174 >> 0x10);
            bVar50 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                               ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)local_15c,
                                VVar26,(int *)&local_e4,
                                Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                               );
            pDVar70 = local_44;
            if (!bVar50) {
              local_d0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         ((int)&local_44->_padding_ + 1);
              local_e4 = local_44;
              iVar27.___z_2._0_2_ = (short)local_174;
              iVar27.___x_0 = (undefined4)local_17c;
              iVar27.___y_1 = local_17c._4_4_;
              iVar27.___z_2._2_2_ = (short)((uint)local_174 >> 0x10);
              local_44 = local_d0;
              Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                        (pDVar46,iVar27,(Il2CppObject *)pDVar70,
                         Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var
                        );
              pCVar82 = local_3c;
              pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_17c,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)((int)&local_17c + 4),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
              pSVar63 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_174,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                 (_stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF,
                                  (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                  (Il2CppObject *)pSVar63,(MethodInfo *)0x0);
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if (local_5c == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_5c,OVar64,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            pDVar47 = local_140;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_140 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
            goto LAB_103e28c9;
            bVar50 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                               (local_140,local_1b8,(Il2CppObject **)&local_e0,
                                Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265_RuntimeMethod_var
                               );
            pDVar70 = local_4c;
            pCVar82 = local_3c;
            if (!bVar50) {
              local_c4 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         ((int)&local_4c->_padding_ + 1);
              local_e0 = local_4c;
              local_4c = local_c4;
              Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                        (pDVar47,local_1b8,(Il2CppObject *)pDVar70,
                         Dictionary_2_Add_m2BFB6987D35DE2246B731A46FEBD4D47776B7E78_RuntimeMethod_var
                        );
              pCVar82 = local_3c;
              pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_1b8,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              uStack_138 = (double)(float)local_1b8.___y_1;
              _CIfmod();
              uStack_138 = (double)CONCAT44((float)extraout_ST0_00,(uint)uStack_138);
              pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)((int)&uStack_138 + 4),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
              OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                                 (_stringLiteral79443EA6B541034C604FE9A19395BF95CCE71A22,
                                  (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,(MethodInfo *)0x0)
              ;
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if (local_60 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_60,OVar64,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            pDVar46 = local_144;
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_144 == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0)
            goto LAB_103e28c9;
            VVar28.___z_4._0_2_ = (short)local_180;
            VVar28.___x_2 = (float)(undefined4)local_188;
            VVar28.___y_3 = (float)local_188._4_4_;
            VVar28.___z_4._2_2_ = (short)((uint)local_180 >> 0x10);
            bVar50 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                               ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)local_144,
                                VVar28,(int *)&local_d8,
                                Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                               );
            pDVar70 = local_80;
            if (!bVar50) {
              local_f8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                         ((int)&local_80->_padding_ + 1);
              local_d8 = local_80;
              iVar29.___z_2._0_2_ = (short)local_180;
              iVar29.___x_0 = (undefined4)local_188;
              iVar29.___y_1 = local_188._4_4_;
              iVar29.___z_2._2_2_ = (short)((uint)local_180 >> 0x10);
              local_80 = local_f8;
              Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                        (pDVar46,iVar29,(Il2CppObject *)pDVar70,
                         Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var
                        );
              pSVar52 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_188,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)pCVar82,(MethodInfo *)0x0);
              pSVar62 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)((int)&local_188 + 4),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              pSVar63 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)&local_180,
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   (Il2CppObject *)local_3c,(MethodInfo *)0x0);
              OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                 (_stringLiteral93F9354DB37CAD8FD3A321410534387A582EED79,
                                  (Il2CppObject *)pSVar52,(Il2CppObject *)pSVar62,
                                  (Il2CppObject *)pSVar63,(MethodInfo *)0x0);
              local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
              if (local_a0 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_a0,OVar64,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            pDVar70 = local_74;
            local_74 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                       ((int)&local_e4->_padding_ + 1);
            piVar44 = &local_d8->_padding_;
            local_d8 = local_70;
            local_70 = local_7c;
            piVar45 = &local_e0->_padding_;
            local_e0 = local_68;
            local_68 = local_6c;
            local_e4 = local_48;
            pLVar79 = local_94;
            local_7c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)((int)piVar44 + 1);
            local_6c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)((int)piVar45 + 1);
            local_48 = pDVar70;
          }
          pLVar81 = local_11c;
          if (local_e4 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0xffffffff) {
            pOVar65 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                      il2cpp_array_new_specific
                                (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                 ,9);
            pDStack_238 = local_e4;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&pDStack_238);
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (pOVar65 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
            goto LAB_103e28c9;
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,0,pIVar66);
            pDStack_114 = local_e0;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&pDStack_114);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,1,pIVar66);
            pDStack_110 = local_d8;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&pDStack_110);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,2,pIVar66);
            pDStack_10c = local_48;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&pDStack_10c);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,3,pIVar66);
            pDStack_108 = local_68;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&pDStack_108);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,4,pIVar66);
            pDStack_104 = local_70;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&pDStack_104);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,5,pIVar66);
            pDStack_bc = local_74;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&pDStack_bc);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,6,pIVar66);
            local_a8[0] = local_6c;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,local_a8);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,7,pIVar66);
            pDStack_34 = local_7c;
            pIVar66 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,&pDStack_34);
            if ((pIVar66 != (Il2CppObject *)0x0) &&
               (pIVar67 = IsInst(pIVar66,*(Il2CppClass **)(pOVar65->_padding_ + 0x20)),
               pIVar67 == (Il2CppObject *)0x0)) {
              pEVar77 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
              il2cpp_codegen_raise_exception(pEVar77,(MethodInfo *)0x0);
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar65,8,pIVar66);
            OVar64 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                     String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                               (_stringLiteralD3A51F9772FB32EDF87B5B88D5BDD5815CBD9890,pOVar65,
                                (MethodInfo *)0x0);
            local_b0 = (double)CONCAT44(local_b0._4_4_,(uint)local_b0);
            if (local_64 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_103e28c9;
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_64,OVar64,
                       List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            pLVar79 = local_94;
            pLVar81 = local_11c;
          }
        }
        else {
          pGVar58 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                              ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_38,
                               (int)pLVar79,
                               List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                              );
          pAVar59 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                              (&AStack_430,pLVar81,(int)pGVar58,
                               List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                              );
          if (__real_3f000000 < (float)pAVar59->___actionId_4 ||
              __real_3f000000 == (float)pAVar59->___actionId_4) goto LAB_103e0159;
          pLVar79 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)
                    ((int)&pLVar79->_padding_ + 3);
          local_94 = pLVar79;
        }
      }
    }
  }
LAB_103e28c9:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
