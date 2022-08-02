#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000010 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000012 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000014 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000017 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000018 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001B System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001C System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001F System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000020 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000021 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000022 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000026 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000027 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000002B System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000002C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002E System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000002F System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000030 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000031 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000034 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000035 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000036 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000037 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000038 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000039 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003A System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000003B System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000003C System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003E System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000003F System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000040 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000041 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000042 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000043 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000044 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004B System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004D System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004E System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004F System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000050 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000051 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000052 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000054 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000057 System.Int32 System.Collections.Generic.HashSet`1::RemoveWhere(System.Predicate`1<T>)
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000059 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005B System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005C System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005D System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005E System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005F System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000060 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000061 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000062 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[98] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[98] = 
{
	3883,
	4055,
	4055,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[34] = 
{
	{ 0x02000004, { 61, 4 } },
	{ 0x02000005, { 65, 9 } },
	{ 0x02000006, { 76, 7 } },
	{ 0x02000007, { 85, 10 } },
	{ 0x02000008, { 97, 11 } },
	{ 0x02000009, { 111, 9 } },
	{ 0x0200000A, { 123, 12 } },
	{ 0x0200000B, { 138, 1 } },
	{ 0x0200000C, { 139, 2 } },
	{ 0x0200000D, { 141, 2 } },
	{ 0x0200000E, { 143, 4 } },
	{ 0x0200000F, { 147, 23 } },
	{ 0x02000011, { 170, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 3 } },
	{ 0x06000009, { 33, 4 } },
	{ 0x0600000A, { 37, 4 } },
	{ 0x0600000B, { 41, 3 } },
	{ 0x0600000C, { 44, 1 } },
	{ 0x0600000D, { 45, 1 } },
	{ 0x0600000E, { 46, 3 } },
	{ 0x0600000F, { 49, 3 } },
	{ 0x06000010, { 52, 2 } },
	{ 0x06000011, { 54, 2 } },
	{ 0x06000012, { 56, 5 } },
	{ 0x06000022, { 74, 2 } },
	{ 0x06000027, { 83, 2 } },
	{ 0x0600002C, { 95, 2 } },
	{ 0x06000032, { 108, 3 } },
	{ 0x06000037, { 120, 3 } },
	{ 0x0600003C, { 135, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[172] = 
{
	{ (Il2CppRGCTXDataType)2, 2138 },
	{ (Il2CppRGCTXDataType)3, 7885 },
	{ (Il2CppRGCTXDataType)2, 3376 },
	{ (Il2CppRGCTXDataType)2, 2891 },
	{ (Il2CppRGCTXDataType)3, 13712 },
	{ (Il2CppRGCTXDataType)2, 2221 },
	{ (Il2CppRGCTXDataType)2, 2898 },
	{ (Il2CppRGCTXDataType)3, 13747 },
	{ (Il2CppRGCTXDataType)2, 2893 },
	{ (Il2CppRGCTXDataType)3, 13724 },
	{ (Il2CppRGCTXDataType)2, 2139 },
	{ (Il2CppRGCTXDataType)3, 7886 },
	{ (Il2CppRGCTXDataType)2, 3400 },
	{ (Il2CppRGCTXDataType)2, 2903 },
	{ (Il2CppRGCTXDataType)3, 13762 },
	{ (Il2CppRGCTXDataType)2, 2246 },
	{ (Il2CppRGCTXDataType)2, 2911 },
	{ (Il2CppRGCTXDataType)3, 13948 },
	{ (Il2CppRGCTXDataType)2, 2907 },
	{ (Il2CppRGCTXDataType)3, 13847 },
	{ (Il2CppRGCTXDataType)2, 756 },
	{ (Il2CppRGCTXDataType)3, 31 },
	{ (Il2CppRGCTXDataType)3, 32 },
	{ (Il2CppRGCTXDataType)2, 1293 },
	{ (Il2CppRGCTXDataType)3, 5378 },
	{ (Il2CppRGCTXDataType)2, 758 },
	{ (Il2CppRGCTXDataType)3, 43 },
	{ (Il2CppRGCTXDataType)3, 44 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)3, 5383 },
	{ (Il2CppRGCTXDataType)2, 908 },
	{ (Il2CppRGCTXDataType)3, 931 },
	{ (Il2CppRGCTXDataType)3, 932 },
	{ (Il2CppRGCTXDataType)2, 1896 },
	{ (Il2CppRGCTXDataType)2, 1447 },
	{ (Il2CppRGCTXDataType)2, 1572 },
	{ (Il2CppRGCTXDataType)2, 1677 },
	{ (Il2CppRGCTXDataType)2, 1897 },
	{ (Il2CppRGCTXDataType)2, 1448 },
	{ (Il2CppRGCTXDataType)2, 1573 },
	{ (Il2CppRGCTXDataType)2, 1678 },
	{ (Il2CppRGCTXDataType)2, 1574 },
	{ (Il2CppRGCTXDataType)2, 1679 },
	{ (Il2CppRGCTXDataType)3, 5379 },
	{ (Il2CppRGCTXDataType)2, 1137 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)2, 1566 },
	{ (Il2CppRGCTXDataType)2, 1675 },
	{ (Il2CppRGCTXDataType)3, 5377 },
	{ (Il2CppRGCTXDataType)2, 1564 },
	{ (Il2CppRGCTXDataType)2, 1674 },
	{ (Il2CppRGCTXDataType)3, 5376 },
	{ (Il2CppRGCTXDataType)2, 1446 },
	{ (Il2CppRGCTXDataType)2, 1571 },
	{ (Il2CppRGCTXDataType)2, 1445 },
	{ (Il2CppRGCTXDataType)3, 16595 },
	{ (Il2CppRGCTXDataType)3, 4761 },
	{ (Il2CppRGCTXDataType)2, 1207 },
	{ (Il2CppRGCTXDataType)2, 1568 },
	{ (Il2CppRGCTXDataType)2, 1676 },
	{ (Il2CppRGCTXDataType)2, 1770 },
	{ (Il2CppRGCTXDataType)3, 7887 },
	{ (Il2CppRGCTXDataType)3, 7889 },
	{ (Il2CppRGCTXDataType)2, 568 },
	{ (Il2CppRGCTXDataType)3, 7888 },
	{ (Il2CppRGCTXDataType)3, 7897 },
	{ (Il2CppRGCTXDataType)2, 2142 },
	{ (Il2CppRGCTXDataType)2, 2894 },
	{ (Il2CppRGCTXDataType)3, 13725 },
	{ (Il2CppRGCTXDataType)3, 7898 },
	{ (Il2CppRGCTXDataType)2, 1612 },
	{ (Il2CppRGCTXDataType)2, 1706 },
	{ (Il2CppRGCTXDataType)3, 5389 },
	{ (Il2CppRGCTXDataType)3, 16555 },
	{ (Il2CppRGCTXDataType)2, 2908 },
	{ (Il2CppRGCTXDataType)3, 13848 },
	{ (Il2CppRGCTXDataType)3, 7890 },
	{ (Il2CppRGCTXDataType)2, 2141 },
	{ (Il2CppRGCTXDataType)2, 2892 },
	{ (Il2CppRGCTXDataType)3, 13713 },
	{ (Il2CppRGCTXDataType)3, 5388 },
	{ (Il2CppRGCTXDataType)3, 7891 },
	{ (Il2CppRGCTXDataType)3, 16554 },
	{ (Il2CppRGCTXDataType)2, 2904 },
	{ (Il2CppRGCTXDataType)3, 13763 },
	{ (Il2CppRGCTXDataType)3, 7904 },
	{ (Il2CppRGCTXDataType)2, 2143 },
	{ (Il2CppRGCTXDataType)2, 2899 },
	{ (Il2CppRGCTXDataType)3, 13748 },
	{ (Il2CppRGCTXDataType)3, 8525 },
	{ (Il2CppRGCTXDataType)3, 3674 },
	{ (Il2CppRGCTXDataType)3, 5390 },
	{ (Il2CppRGCTXDataType)3, 3673 },
	{ (Il2CppRGCTXDataType)3, 7905 },
	{ (Il2CppRGCTXDataType)3, 16556 },
	{ (Il2CppRGCTXDataType)2, 2912 },
	{ (Il2CppRGCTXDataType)3, 13949 },
	{ (Il2CppRGCTXDataType)3, 7918 },
	{ (Il2CppRGCTXDataType)2, 2145 },
	{ (Il2CppRGCTXDataType)2, 2910 },
	{ (Il2CppRGCTXDataType)3, 13850 },
	{ (Il2CppRGCTXDataType)3, 7919 },
	{ (Il2CppRGCTXDataType)2, 1615 },
	{ (Il2CppRGCTXDataType)2, 1709 },
	{ (Il2CppRGCTXDataType)3, 5394 },
	{ (Il2CppRGCTXDataType)3, 5393 },
	{ (Il2CppRGCTXDataType)2, 2896 },
	{ (Il2CppRGCTXDataType)3, 13727 },
	{ (Il2CppRGCTXDataType)3, 16561 },
	{ (Il2CppRGCTXDataType)2, 2909 },
	{ (Il2CppRGCTXDataType)3, 13849 },
	{ (Il2CppRGCTXDataType)3, 7911 },
	{ (Il2CppRGCTXDataType)2, 2144 },
	{ (Il2CppRGCTXDataType)2, 2906 },
	{ (Il2CppRGCTXDataType)3, 13765 },
	{ (Il2CppRGCTXDataType)3, 5392 },
	{ (Il2CppRGCTXDataType)3, 5391 },
	{ (Il2CppRGCTXDataType)3, 7912 },
	{ (Il2CppRGCTXDataType)2, 2895 },
	{ (Il2CppRGCTXDataType)3, 13726 },
	{ (Il2CppRGCTXDataType)3, 16560 },
	{ (Il2CppRGCTXDataType)2, 2905 },
	{ (Il2CppRGCTXDataType)3, 13764 },
	{ (Il2CppRGCTXDataType)3, 7925 },
	{ (Il2CppRGCTXDataType)2, 2146 },
	{ (Il2CppRGCTXDataType)2, 2914 },
	{ (Il2CppRGCTXDataType)3, 13951 },
	{ (Il2CppRGCTXDataType)3, 8526 },
	{ (Il2CppRGCTXDataType)3, 3676 },
	{ (Il2CppRGCTXDataType)3, 5396 },
	{ (Il2CppRGCTXDataType)3, 5395 },
	{ (Il2CppRGCTXDataType)3, 3675 },
	{ (Il2CppRGCTXDataType)3, 7926 },
	{ (Il2CppRGCTXDataType)2, 2897 },
	{ (Il2CppRGCTXDataType)3, 13728 },
	{ (Il2CppRGCTXDataType)3, 16562 },
	{ (Il2CppRGCTXDataType)2, 2913 },
	{ (Il2CppRGCTXDataType)3, 13950 },
	{ (Il2CppRGCTXDataType)3, 5386 },
	{ (Il2CppRGCTXDataType)3, 5387 },
	{ (Il2CppRGCTXDataType)3, 5400 },
	{ (Il2CppRGCTXDataType)2, 3408 },
	{ (Il2CppRGCTXDataType)2, 1138 },
	{ (Il2CppRGCTXDataType)2, 1451 },
	{ (Il2CppRGCTXDataType)2, 3403 },
	{ (Il2CppRGCTXDataType)2, 1589 },
	{ (Il2CppRGCTXDataType)2, 1684 },
	{ (Il2CppRGCTXDataType)3, 4779 },
	{ (Il2CppRGCTXDataType)2, 1216 },
	{ (Il2CppRGCTXDataType)3, 5801 },
	{ (Il2CppRGCTXDataType)3, 5802 },
	{ (Il2CppRGCTXDataType)3, 5807 },
	{ (Il2CppRGCTXDataType)2, 1778 },
	{ (Il2CppRGCTXDataType)3, 5804 },
	{ (Il2CppRGCTXDataType)3, 17236 },
	{ (Il2CppRGCTXDataType)2, 1172 },
	{ (Il2CppRGCTXDataType)3, 3664 },
	{ (Il2CppRGCTXDataType)1, 1525 },
	{ (Il2CppRGCTXDataType)2, 3414 },
	{ (Il2CppRGCTXDataType)3, 5803 },
	{ (Il2CppRGCTXDataType)1, 3414 },
	{ (Il2CppRGCTXDataType)1, 1778 },
	{ (Il2CppRGCTXDataType)2, 3471 },
	{ (Il2CppRGCTXDataType)2, 3414 },
	{ (Il2CppRGCTXDataType)3, 12388 },
	{ (Il2CppRGCTXDataType)3, 5808 },
	{ (Il2CppRGCTXDataType)3, 5809 },
	{ (Il2CppRGCTXDataType)3, 5806 },
	{ (Il2CppRGCTXDataType)3, 5805 },
	{ (Il2CppRGCTXDataType)2, 445 },
	{ (Il2CppRGCTXDataType)3, 3677 },
	{ (Il2CppRGCTXDataType)2, 577 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	98,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	34,
	s_rgctxIndices,
	172,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
