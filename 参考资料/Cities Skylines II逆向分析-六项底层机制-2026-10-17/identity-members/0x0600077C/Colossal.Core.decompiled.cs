using Unity.Entities;

public void Write(Entity value)
{
	if (value.Index >= 0 && value.Index < m_EntityTable.Length)
	{
		Entity entity = m_EntityTable[value.Index];
		if (entity.Version == value.Version)
		{
			Write(entity.Index);
			return;
		}
	}
	int value2 = -1;
	Write(value2);
}
