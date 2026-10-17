using System;
using System.Collections.Generic;
using System.Reflection;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Entities.Serialization;
using UnityEngine;

namespace Unity.Entities;

public static class EntityRemapUtility
{
	public struct EntityRemapInfo
	{
		public int SourceVersion;

		public Entity Target;
	}

	public struct EntityPatchInfo
	{
		public int Offset;

		public int Stride;
	}

	public struct BufferEntityPatchInfo
	{
		public int BufferOffset;

		public int BufferStride;

		public int ElementOffset;

		public int ElementStride;
	}

	public enum HasRefResult
	{
		NoRef,
		MayHaveRef,
		HasRef
	}

	public struct EntityBlobRefResult(HasRefResult hasEntityRef, HasRefResult hasBlobRef, HasRefResult hasUnityObjectRef)
	{
		public HasRefResult HasEntityRef = hasEntityRef;

		public HasRefResult HasBlobRef = hasBlobRef;

		public HasRefResult HasUnityObjectRef = hasUnityObjectRef;
	}

	public unsafe static void GetTargets(out NativeArray<Entity> output, NativeArray<EntityRemapInfo> remapping)
	{
		NativeArray<Entity> nativeArray = new NativeArray<Entity>(remapping.Length, Allocator.TempJob);
		int num = 0;
		for (int i = 0; i < remapping.Length; i++)
		{
			if (remapping[i].Target != Entity.Null)
			{
				nativeArray[num++] = remapping[i].Target;
			}
		}
		output = new NativeArray<Entity>(num, Allocator.Persistent);
		UnsafeUtility.MemCpy(output.GetUnsafePtr(), nativeArray.GetUnsafePtr(), sizeof(Entity) * num);
		nativeArray.Dispose();
	}

	public static void AddEntityRemapping(ref NativeArray<EntityRemapInfo> remapping, Entity source, Entity target)
	{
		remapping[source.Index] = new EntityRemapInfo
		{
			SourceVersion = source.Version,
			Target = target
		};
	}

	public unsafe static Entity RemapEntity(ref NativeArray<EntityRemapInfo> remapping, Entity source)
	{
		return RemapEntity((EntityRemapInfo*)remapping.GetUnsafeReadOnlyPtr(), source);
	}

	public unsafe static Entity RemapEntity(EntityRemapInfo* remapping, Entity source)
	{
		if (source.Version == remapping[source.Index].SourceVersion)
		{
			return remapping[source.Index].Target;
		}
		return Entity.Null;
	}

	public unsafe static Entity RemapEntityForPrefab(Entity* remapSrc, Entity* remapDst, int remappingCount, Entity source)
	{
		for (int i = 0; i != remappingCount; i++)
		{
			if (source == remapSrc[i])
			{
				return remapDst[i];
			}
		}
		return source;
	}

	public static void CalculateFieldOffsetsUnmanaged(Type type, out bool hasEntityRefs, out bool hasBlobRefs, out bool hasWeakAssetRefs, out bool hasUnityObjectRefs, ref NativeList<TypeManager.EntityOffsetInfo> entityOffsets, ref NativeList<TypeManager.EntityOffsetInfo> blobOffsets, ref NativeList<TypeManager.EntityOffsetInfo> weakAssetRefOffsets, ref NativeList<TypeManager.EntityOffsetInfo> unityObjectRefOffsets, HashSet<Type> cache = null)
	{
		if (cache == null)
		{
			cache = new HashSet<Type>();
		}
		int length = entityOffsets.Length;
		int length2 = blobOffsets.Length;
		int length3 = weakAssetRefOffsets.Length;
		int length4 = unityObjectRefOffsets.Length;
		CalculateOffsetsRecurse(ref entityOffsets, ref blobOffsets, ref weakAssetRefOffsets, ref unityObjectRefOffsets, type, 0, cache);
		hasEntityRefs = entityOffsets.Length != length;
		hasBlobRefs = blobOffsets.Length != length2;
		hasWeakAssetRefs = weakAssetRefOffsets.Length != length3;
		hasUnityObjectRefs = unityObjectRefOffsets.Length != length4;
	}

	private static bool CalculateOffsetsRecurse(ref NativeList<TypeManager.EntityOffsetInfo> entityOffsets, ref NativeList<TypeManager.EntityOffsetInfo> blobOffsets, ref NativeList<TypeManager.EntityOffsetInfo> weakAssetRefOffsets, ref NativeList<TypeManager.EntityOffsetInfo> unityObjectRefOffsets, Type type, int baseOffset, HashSet<Type> noOffsetTypes)
	{
		if (noOffsetTypes.Contains(type))
		{
			return false;
		}
		if (type == typeof(Entity))
		{
			TypeManager.EntityOffsetInfo value = new TypeManager.EntityOffsetInfo
			{
				Offset = baseOffset
			};
			entityOffsets.Add(in value);
			return true;
		}
		if (type == typeof(BlobAssetReferenceData))
		{
			TypeManager.EntityOffsetInfo value = new TypeManager.EntityOffsetInfo
			{
				Offset = baseOffset
			};
			blobOffsets.Add(in value);
			return true;
		}
		if (type == typeof(UntypedWeakReferenceId))
		{
			TypeManager.EntityOffsetInfo value = new TypeManager.EntityOffsetInfo
			{
				Offset = baseOffset
			};
			weakAssetRefOffsets.Add(in value);
			return true;
		}
		if (type == typeof(UntypedUnityObjectRef))
		{
			TypeManager.EntityOffsetInfo value = new TypeManager.EntityOffsetInfo
			{
				Offset = baseOffset
			};
			unityObjectRefOffsets.Add(in value);
			return true;
		}
		bool flag = false;
		FieldInfo[] fields = type.GetFields(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic);
		foreach (FieldInfo fieldInfo in fields)
		{
			if (fieldInfo.FieldType.IsValueType && !fieldInfo.FieldType.IsPrimitive)
			{
				flag |= CalculateOffsetsRecurse(ref entityOffsets, ref blobOffsets, ref weakAssetRefOffsets, ref unityObjectRefOffsets, fieldInfo.FieldType, baseOffset + UnsafeUtility.GetFieldOffset(fieldInfo), noOffsetTypes);
			}
		}
		if (!flag)
		{
			noOffsetTypes.Add(type);
		}
		return flag;
	}

	public static void HasEntityReferencesManaged(Type type, out HasRefResult hasEntityReferences, out HasRefResult hasBlobReferences, out HasRefResult hasUnityObjectReferences, Dictionary<Type, EntityBlobRefResult> cache = null, int maxDepth = 128)
	{
		hasEntityReferences = HasRefResult.NoRef;
		hasBlobReferences = HasRefResult.NoRef;
		hasUnityObjectReferences = HasRefResult.NoRef;
		if (cache == null)
		{
			cache = new Dictionary<Type, EntityBlobRefResult>();
		}
		ProcessEntityOrBlobReferencesRecursiveManaged(type, ref hasEntityReferences, ref hasBlobReferences, ref hasUnityObjectReferences, 0, ref cache, maxDepth);
	}

	private static void ProcessEntityOrBlobReferencesRecursiveManaged(Type type, ref HasRefResult hasEntityReferences, ref HasRefResult hasBlobReferences, ref HasRefResult hasUnityObjectReferences, int depth, ref Dictionary<Type, EntityBlobRefResult> cache, int maxDepth = 10)
	{
		if (depth > maxDepth)
		{
			hasEntityReferences = HasRefResult.MayHaveRef;
			hasBlobReferences = HasRefResult.MayHaveRef;
			hasUnityObjectReferences = HasRefResult.MayHaveRef;
			return;
		}
		if (cache.ContainsKey(type))
		{
			EntityBlobRefResult entityBlobRefResult = cache[type];
			hasEntityReferences = entityBlobRefResult.HasEntityRef;
			hasBlobReferences = entityBlobRefResult.HasBlobRef;
			hasUnityObjectReferences = entityBlobRefResult.HasUnityObjectRef;
			return;
		}
		HasRefResult hasRefResult = HasRefResult.NoRef;
		HasRefResult hasRefResult2 = HasRefResult.NoRef;
		HasRefResult hasRefResult3 = HasRefResult.NoRef;
		FieldInfo[] fields = type.GetFields(BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic);
		foreach (FieldInfo fieldInfo in fields)
		{
			if (hasRefResult > HasRefResult.NoRef && hasRefResult2 > HasRefResult.NoRef && hasRefResult3 > HasRefResult.NoRef)
			{
				break;
			}
			Type type2 = fieldInfo.FieldType;
			if (type2.IsArray)
			{
				type2 = type2.GetElementType();
			}
			else if (type2.IsGenericType && type2.GetGenericTypeDefinition() == typeof(List<>))
			{
				type2 = type2.GetGenericArguments()[0];
			}
			if (!type2.IsPrimitive && !typeof(UnityEngine.Object).IsAssignableFrom(type2))
			{
				if (type2 == typeof(Entity))
				{
					hasRefResult = HasRefResult.HasRef;
				}
				else if (type == typeof(BlobAssetReferenceData))
				{
					hasRefResult2 = HasRefResult.HasRef;
				}
				else if (type2 == typeof(UntypedUnityObjectRef))
				{
					hasRefResult3 = HasRefResult.HasRef;
				}
				else if (type2.IsValueType || type2.IsSealed)
				{
					HasRefResult hasEntityReferences2 = HasRefResult.NoRef;
					HasRefResult hasBlobReferences2 = HasRefResult.NoRef;
					HasRefResult hasUnityObjectReferences2 = HasRefResult.NoRef;
					ProcessEntityOrBlobReferencesRecursiveManaged(type2, ref hasEntityReferences2, ref hasBlobReferences2, ref hasUnityObjectReferences2, depth + 1, ref cache, maxDepth);
					hasRefResult = ((hasRefResult > hasEntityReferences2) ? hasRefResult : hasEntityReferences2);
					hasRefResult2 = ((hasRefResult2 > hasBlobReferences2) ? hasRefResult2 : hasBlobReferences2);
					hasRefResult3 = ((hasRefResult3 > hasUnityObjectReferences2) ? hasRefResult3 : hasUnityObjectReferences2);
				}
				else
				{
					hasRefResult = HasRefResult.MayHaveRef;
					hasRefResult2 = HasRefResult.MayHaveRef;
					hasRefResult3 = HasRefResult.MayHaveRef;
				}
			}
		}
		if (!cache.ContainsKey(type))
		{
			cache[type] = new EntityBlobRefResult(hasRefResult, hasRefResult2, hasRefResult3);
		}
		hasEntityReferences = ((hasEntityReferences > hasRefResult) ? hasEntityReferences : hasRefResult);
		hasBlobReferences = ((hasBlobReferences > hasRefResult2) ? hasBlobReferences : hasRefResult2);
		hasUnityObjectReferences = ((hasUnityObjectReferences > hasRefResult3) ? hasUnityObjectReferences : hasRefResult3);
	}

	public unsafe static EntityPatchInfo* AppendEntityPatches(EntityPatchInfo* patches, TypeManager.EntityOffsetInfo* offsets, int offsetCount, int baseOffset, int stride)
	{
		if (offsets == null)
		{
			return patches;
		}
		for (int i = 0; i < offsetCount; i++)
		{
			patches[i] = new EntityPatchInfo
			{
				Offset = baseOffset + offsets[i].Offset,
				Stride = stride
			};
		}
		return patches + offsetCount;
	}

	public unsafe static BufferEntityPatchInfo* AppendBufferEntityPatches(BufferEntityPatchInfo* patches, TypeManager.EntityOffsetInfo* offsets, int offsetCount, int bufferBaseOffset, int bufferStride, int elementStride)
	{
		if (offsets == null)
		{
			return patches;
		}
		for (int i = 0; i < offsetCount; i++)
		{
			patches[i] = new BufferEntityPatchInfo
			{
				BufferOffset = bufferBaseOffset,
				BufferStride = bufferStride,
				ElementOffset = offsets[i].Offset,
				ElementStride = elementStride
			};
		}
		return patches + offsetCount;
	}

	public unsafe static void PatchEntities(EntityPatchInfo* scalarPatches, int scalarPatchCount, BufferEntityPatchInfo* bufferPatches, int bufferPatchCount, byte* chunkBuffer, int entityCount, ref NativeArray<EntityRemapInfo> remapping)
	{
		for (int i = 0; i < scalarPatchCount; i++)
		{
			byte* ptr = chunkBuffer + scalarPatches[i].Offset;
			for (int j = 0; j != entityCount; j++)
			{
				Entity* ptr2 = (Entity*)ptr;
				*ptr2 = RemapEntity(ref remapping, *ptr2);
				ptr += scalarPatches[i].Stride;
			}
		}
		for (int k = 0; k < bufferPatchCount; k++)
		{
			byte* ptr3 = chunkBuffer + bufferPatches[k].BufferOffset;
			for (int l = 0; l != entityCount; l++)
			{
				BufferHeader* ptr4 = (BufferHeader*)ptr3;
				byte* ptr5 = BufferHeader.GetElementPointer(ptr4) + bufferPatches[k].ElementOffset;
				int length = ptr4->Length;
				for (int m = 0; m != length; m++)
				{
					Entity* ptr6 = (Entity*)ptr5;
					*ptr6 = RemapEntity(ref remapping, *ptr6);
					ptr5 += bufferPatches[k].ElementStride;
				}
				ptr3 += bufferPatches[k].BufferStride;
			}
		}
	}

	public unsafe static void PatchEntitiesForPrefab(EntityPatchInfo* scalarPatches, int scalarPatchCount, BufferEntityPatchInfo* bufferPatches, int bufferPatchCount, byte* chunkBuffer, int indexInChunk, int entityCount, Entity* remapSrc, Entity* remapDst, int remappingCount)
	{
		for (int i = 0; i < scalarPatchCount; i++)
		{
			byte* ptr = chunkBuffer + scalarPatches[i].Offset;
			for (int j = 0; j != entityCount; j++)
			{
				Entity* ptr2 = (Entity*)(ptr + scalarPatches[i].Stride * (j + indexInChunk));
				*ptr2 = RemapEntityForPrefab(remapSrc, remapDst + j * remappingCount, remappingCount, *ptr2);
			}
		}
		for (int k = 0; k < bufferPatchCount; k++)
		{
			byte* ptr3 = chunkBuffer + bufferPatches[k].BufferOffset;
			for (int l = 0; l != entityCount; l++)
			{
				BufferHeader* ptr4 = (BufferHeader*)(ptr3 + bufferPatches[k].BufferStride * (l + indexInChunk));
				byte* ptr5 = BufferHeader.GetElementPointer(ptr4) + bufferPatches[k].ElementOffset;
				int length = ptr4->Length;
				for (int m = 0; m != length; m++)
				{
					Entity* ptr6 = (Entity*)ptr5;
					*ptr6 = RemapEntityForPrefab(remapSrc, remapDst + l * remappingCount, remappingCount, *ptr6);
					ptr5 += bufferPatches[k].ElementStride;
				}
			}
		}
	}
}
