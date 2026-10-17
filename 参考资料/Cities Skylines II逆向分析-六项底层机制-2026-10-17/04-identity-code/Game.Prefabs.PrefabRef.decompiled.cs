using Colossal.Serialization.Entities;
using Unity.Entities;

namespace Game.Prefabs;

public struct PrefabRef(Entity prefab) : IComponentData, IQueryTypeParameter, IStrideSerializable, ISerializable
{
	public Entity m_Prefab = prefab;

	public void Serialize<TWriter>(TWriter writer) where TWriter : IWriter
	{
		writer.Write(m_Prefab);
	}

	public void Deserialize<TReader>(TReader reader) where TReader : IReader
	{
		reader.Read(out m_Prefab);
	}

	public int GetStride(Context context)
	{
		return 4;
	}

	public static implicit operator Entity(PrefabRef prefabRef)
	{
		return prefabRef.m_Prefab;
	}
}
