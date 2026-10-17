using Unity.Entities;

public void Read(out Entity value)
{
	Read(out int value2);
	if (value2 >= 0 && value2 < m_EntityTable.Length)
	{
		value = m_EntityTable[value2];
	}
	else
	{
		value = Entity.Null;
	}
}
