// RVA 0x10d0af0 | FuryStudios.FurySDK.Utils.PlatformSystemMessengerBase$$Discard
// PDB: PlatformSystemMessengerBase_Discard_m8EC4B48C156E35451D8442ABBAABBA0F27229668
// Body: [[110d0af0, 110d0b32]]
// Direct callees:
// 10f04510 String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B

void __cdecl
PlatformSystemMessengerBase_Discard_m8EC4B48C156E35451D8442ABBAABBA0F27229668
          (PlatformSystemMessengerBase_t0DAC2C6021ACFA4428ACF4A1231D2CE0521A5F84 *param_1,
          String_t *param_2,MethodInfo *param_3)

{
  bool bVar1;

  if (param_1->___activeMessage_4 != (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0) {
    bVar1 = String_Equals_mAFC6038D294F341434D9D67D7EADC7F97C556C9B
                      (param_1->___activeMessage_4->___message_2,param_2,(MethodInfo *)0x0);
    if (bVar1) {
      param_1->___activeMessage_4 = (Message_tF9014B5C4DF3B4DF8A24C2D6979F4918360E6EB9 *)0x0;
      (**(code **)(param_1->_padding_ + 300))
                (param_1,param_2,*(undefined4 *)(param_1->_padding_ + 0x130));
    }
  }
  return;
}
