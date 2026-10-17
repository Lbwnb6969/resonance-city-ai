// RVA 0x80ca70 | Placemaker.RapidButton$$Press
// PDB: RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
// Body: [[1080ca70, 1080cb35]]
// Direct callees:
// 1066d8c0 Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0
// 1066d9d0 Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84

bool __cdecl
RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
          (RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05 *param_1,float param_2,
          MethodInfo *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  iVar2 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0((MethodInfo *)0x0);
  if (iVar2 != param_1->___lastFrame_0) {
    if (iVar2 != param_1->___lastFrame_0 + 1) {
      param_1->___lastFrame_0 = iVar2;
      param_1->___t_2 = 0.0;
      param_1->___count_1 = 0;
      return true;
    }
    if (param_1->___count_1 < param_1->___countThreshold_3) {
      fVar4 = param_1->___slowSpeed_4;
    }
    else {
      fVar4 = param_1->___fastSpeed_5;
    }
    fVar3 = param_1->___t_2;
    fVar5 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84((MethodInfo *)0x0);
    fVar1 = __real_3f800000;
    param_1->___lastFrame_0 = iVar2;
    fVar3 = fVar5 * fVar4 * param_2 + fVar3;
    param_1->___t_2 = fVar3;
    if (fVar1 < fVar3) {
      do {
        fVar4 = param_1->___t_2 - fVar1;
        param_1->___t_2 = fVar4;
      } while (fVar1 < fVar4);
      param_1->___count_1 = param_1->___count_1 + 1;
      return true;
    }
  }
  return false;
}
