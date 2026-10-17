using Unity.Entities;

namespace Game.Tools;

public struct Temp(Entity original, TempFlags flags) : IComponentData, IQueryTypeParameter
{
	public Entity m_Original = original;

	public float m_CurvePosition = 0f;

	public int m_Value = 0;

	public int m_Cost = 0;

	public TempFlags m_Flags = flags;
}
