using Unity.Entities;

public void Write(Entity value, bool ignoreVersion)
{
	if (value.Index >= 0 && value.Index < m_EntityTable.Length)
	{
		Entity entity = m_EntityTable[value.Index];
		if (ignoreVersion || entity.Version == value.Version)
		{
			Write(entity.Index);
			return;
		}
	}
	int value2 = -1;
	Write(value2);
}
