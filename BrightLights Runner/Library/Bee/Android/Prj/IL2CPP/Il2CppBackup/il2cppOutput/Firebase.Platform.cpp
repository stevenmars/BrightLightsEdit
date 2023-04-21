#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Dictionary_2_tAE981FFB8675A3AFB674EE2636BE5565849941A4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t584E66CD0123CFB6503AC3E597748948194AAA5E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_tB7504948EAC2AECFD233197DBE83D74D0D12CFA8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Threading.ManualResetEvent>
struct KeyCollection_t4F700C23BDF1E14E2E52EBA12576364A2B59E406;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// Firebase.Platform.MainThreadProperty`1<System.Boolean>
struct MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97;
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_t87759E63E3496C207528111673C9A61DA2471344;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Threading.ManualResetEvent>
struct ValueCollection_t04637302418E50CC664F5763757EFA471396883C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_t88D79B5C078B734AE8BB3266E34E12AF08FCEEEF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Threading.ManualResetEvent>[]
struct EntryU5BU5D_tEAD5EF40B7E79B2A5CB55F4135EC117EAC616F9A;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>[]
struct Tuple_2U5BU5D_t075A6E3BE33C4C5967544F6B2DA4381897C13E08;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Firebase.Platform.DebugLogger
struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Firebase.Dispatcher
struct Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// Firebase.ExceptionAggregator
struct ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02;
// Firebase.Platform.FirebaseEditorDispatcher
struct FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C;
// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586;
// Firebase.Platform.FirebaseLogger
struct FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42;
// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418;
// Firebase.Platform.IClockService
struct IClockService_t62FFADE4F3DABB6EBE3869EEBE8C577963F1A026;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Firebase.Platform.IFirebaseAppPlatform
struct IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391;
// Firebase.Platform.ILoggingService
struct ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// Firebase.Platform.Default.SystemClock
struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152;
// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB;
// Firebase.Unity.UnityPlatformServices
struct UnityPlatformServices_t7D48ED4FE484C77B2D6E77155BF53BFFD6BC60B4;
// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD;
// Firebase.Platform.FirebaseHandler/<>c
struct U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422;
// Firebase.Platform.FirebaseHandler/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08;
// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD;
// Firebase.Platform.PlatformInformation/<>c
struct U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9;
// Firebase.Platform.Default.UnityConfigExtensions/<>c
struct U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA;
// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72;
// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1
struct U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E;
// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52;
// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1
struct U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC;
// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13
struct U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3
struct U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t3120911701D83248A030816742AE8B622F6E7124____2645F90AC4AC37B7007C26BF8B1EF0A570251899_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837;
IL2CPP_EXTERN_C String_t* _stringLiteral28C266F303F178CE0931272538E30F328A704472;
IL2CPP_EXTERN_C String_t* _stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7;
IL2CPP_EXTERN_C String_t* _stringLiteral3BE6E51A121FE961DE7A83B45B4640474186C9EB;
IL2CPP_EXTERN_C String_t* _stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D;
IL2CPP_EXTERN_C String_t* _stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1;
IL2CPP_EXTERN_C String_t* _stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5;
IL2CPP_EXTERN_C String_t* _stringLiteral69A7A27A97142E232EA28BA2557E507697865243;
IL2CPP_EXTERN_C String_t* _stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE;
IL2CPP_EXTERN_C String_t* _stringLiteral896A2A117718A23135B6923C80A00C014390CF99;
IL2CPP_EXTERN_C String_t* _stringLiteral8B600FF89C754A6094C3604CCCB7D8E99C423166;
IL2CPP_EXTERN_C String_t* _stringLiteral947107DA743C5DEC8247B198CC466791C8222A85;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF6B54868904D9D06D525E97D1016EAA23EBBAA;
IL2CPP_EXTERN_C String_t* _stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF5669C0E0C44A1066B0D5F3BDB19A31F49AAFFCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2;
IL2CPP_EXTERN_C const RuntimeMethod* AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_PlayModeStateChanged_m8598B90E768E7F3792A8F5621A642B11B6D92D48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_U3CUpdateU3Eb__36_0_mF9F0EE2B1EA48002FA4AAF4E90A45F0CD28183BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m0F425143BB2FEABADE7FD419C02C0545941BD633_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignaledCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_mD22ABA2279A7D4EE51960968BDE530FCD48F4972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m85F03652CF544E4A9AE0E1CFCB02377AE7354FC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetWriteablePathU3Eb__3_0_m6BF2953246439D404B2CAB4F328657BA7D8FD05C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSetEditorP12FileNameU3Eb__4_0_m5077158F730DC3B25C0D5EBB222CE9CAF4745730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStopMonoBehaviourU3Eb__19_0_mB990EC27D5AB7A305AAA79490EE3DECA513B2507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_DefaultConfigLocationU3Eb__6_0_m3AB345EB876894BBEF4EA889DB7C050149A84ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_RuntimeVersionU3Eb__18_0_m534FD38D257EAEFB9FB15D828D2177701A9FC47F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_1_U3CSendCoroutineU3Eb__0_mB82F155D459254ADAF8B4BBFC403757C5A21DE2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_1_U3CSendU3Eb__0_mE2861360FB9F457F08CCB9240711D8A785BEAD09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_0_U3CCreatePartialOnMainThreadU3Eb__0_mF30FC5B54AA56E8760A72FCF6F7B4E228921A701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySynchronizationContext_U3CPostCoroutineU3Eb__12_0_m98AA393674BACD2813A9EC4962D8338781193EEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
struct LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t470C01FFE5A91E977C611A22059B0CD8B99DB7F3 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t88D79B5C078B734AE8BB3266E34E12AF08FCEEEF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB7504948EAC2AECFD233197DBE83D74D0D12CFA8* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t87759E63E3496C207528111673C9A61DA2471344* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEAD5EF40B7E79B2A5CB55F4135EC117EAC616F9A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t4F700C23BDF1E14E2E52EBA12576364A2B59E406* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t04637302418E50CC664F5763757EFA471396883C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Firebase.Platform.MainThreadProperty`1<System.Boolean>
struct MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97  : public RuntimeObject
{
	// System.Func`1<T> Firebase.Platform.MainThreadProperty`1::getPropertyDelegate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___getPropertyDelegate_0;
	// System.Int32 Firebase.Platform.MainThreadProperty`1::lastGetPropertyTickCount
	int32_t ___lastGetPropertyTickCount_1;
	// T Firebase.Platform.MainThreadProperty`1::cachedValue
	bool ___cachedValue_2;
};

// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	Tuple_2U5BU5D_t075A6E3BE33C4C5967544F6B2DA4381897C13E08* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Firebase.Platform.DebugLogger
struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1  : public RuntimeObject
{
};

// Firebase.Dispatcher
struct Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6  : public RuntimeObject
{
	// System.Int32 Firebase.Dispatcher::ownerThreadId
	int32_t ___ownerThreadId_0;
	// System.Collections.Generic.Queue`1<System.Action> Firebase.Dispatcher::queue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___queue_1;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// Firebase.ExceptionAggregator
struct ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3  : public RuntimeObject
{
};

// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02  : public RuntimeObject
{
};

// Firebase.Platform.FirebaseEditorDispatcher
struct FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C  : public RuntimeObject
{
};

// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586  : public RuntimeObject
{
	// System.Boolean Firebase.Platform.FirebaseHandler::<IsPlayMode>k__BackingField
	bool ___U3CIsPlayModeU3Ek__BackingField_4;
	// System.EventHandler`1<System.EventArgs> Firebase.Platform.FirebaseHandler::Updated
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___Updated_6;
	// System.Action Firebase.Platform.FirebaseHandler::UpdatedEventWrapper
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdatedEventWrapper_7;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs> Firebase.Platform.FirebaseHandler::ApplicationFocusChanged
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* ___ApplicationFocusChanged_8;
};

// Firebase.Platform.FirebaseLogger
struct FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

// Firebase.Platform.PlatformInformation
struct PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94  : public RuntimeObject
{
};

// Firebase.Platform.Services
struct Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// Firebase.Platform.Default.SystemClock
struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13  : public RuntimeObject
{
};

// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB  : public RuntimeObject
{
};

// Firebase.Unity.UnityPlatformServices
struct UnityPlatformServices_t7D48ED4FE484C77B2D6E77155BF53BFFD6BC60B4  : public RuntimeObject
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Firebase.Platform.FirebaseHandler/<>c
struct U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422  : public RuntimeObject
{
};

// Firebase.Platform.FirebaseHandler/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08  : public RuntimeObject
{
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler/<>c__DisplayClass34_0::appUtils
	RuntimeObject* ___appUtils_0;
};

// Firebase.Platform.PlatformInformation/<>c
struct U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9  : public RuntimeObject
{
};

// Firebase.Platform.Default.UnityConfigExtensions/<>c
struct U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA  : public RuntimeObject
{
};

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72  : public RuntimeObject
{
	// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0::<>4__this
	UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* ___U3CU3E4__this_0;
	// System.Func`1<System.Collections.IEnumerator> Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0::coroutine
	Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine_1;
};

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1
struct U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E  : public RuntimeObject
{
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1::newSignal
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal_0;
	// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0 Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* ___CSU24U3CU3E8__locals1_1;
};

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52  : public RuntimeObject
{
	// System.Threading.SendOrPostCallback Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_0::d
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___d_0;
};

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1
struct U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC  : public RuntimeObject
{
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1::newSignal
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal_0;
	// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_0 Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* ___CSU24U3CU3E8__locals1_1;
};

// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13
struct U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400  : public RuntimeObject
{
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Func`1<System.Collections.IEnumerator> Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::coroutine
	Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine_2;
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::newSignal
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal_3;
	// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::<>4__this
	UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* ___U3CU3E4__this_4;
};

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3
struct U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E  : public RuntimeObject
{
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::<>4__this
	SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* ___U3CU3E4__this_2;
	// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::<entry>5__1
	Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* ___U3CentryU3E5__1_3;
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::<>s__2
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* ___U3CU3Es__2_4;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::<>s__3
	bool ___U3CU3Es__3_5;
	// System.Exception Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::<e>5__4
	Exception_t* ___U3CeU3E5__4_6;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD* ___cached_add_event_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152  : public AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48
{
};

// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690  : public SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0
{
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext::queue
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* ___queue_2;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext::behavior
	SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* ___behavior_3;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext::mainThreadId
	int32_t ___mainThreadId_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tAE42A1C996C57C5EC67F8D5BF5F6603ACE24D120 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tAE42A1C996C57C5EC67F8D5BF5F6603ACE24D120__padding[20];
	};
};

// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::<HasFocus>k__BackingField
	bool ___U3CHasFocusU3Ek__BackingField_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3120911701D83248A030816742AE8B622F6E7124  : public RuntimeObject
{
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.LogType
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::callbackQueue
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* ___callbackQueue_4;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Exception>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// Firebase.Platform.MainThreadProperty`1<System.Boolean>

// Firebase.Platform.MainThreadProperty`1<System.Boolean>

// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>

// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>

// System.Collections.Generic.Queue`1<System.Action>

// System.Collections.Generic.Queue`1<System.Action>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>

// System.Tuple`2<System.Object,System.Object>

// System.Tuple`2<System.Object,System.Object>

// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>

// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>

// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields
{
	// System.Uri Firebase.Platform.Default.AppConfigExtensions::DefaultUpdateUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___DefaultUpdateUrl_0;
	// System.String Firebase.Platform.Default.AppConfigExtensions::Default
	String_t* ___Default_1;
	// System.Object Firebase.Platform.Default.AppConfigExtensions::Sync
	RuntimeObject* ___Sync_2;
	// Firebase.Platform.Default.AppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::_instance
	AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* ____instance_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>> Firebase.Platform.Default.AppConfigExtensions::SStringState
	Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* ___SStringState_4;
};

// Firebase.Platform.Default.AppConfigExtensions

// Firebase.Platform.DebugLogger
struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields
{
	// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::_instance
	DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* ____instance_0;
};

// Firebase.Platform.DebugLogger

// Firebase.Dispatcher

// Firebase.Dispatcher

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.EventArgs

// Firebase.ExceptionAggregator

// Firebase.ExceptionAggregator
struct ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields
{
	// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::threadLocalExceptions
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ___threadLocalExceptions_0;
};

// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields
{
	// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::_instance
	FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* ____instance_0;
};

// Firebase.Platform.FirebaseAppUtilsStub

// Firebase.Platform.FirebaseEditorDispatcher

// Firebase.Platform.FirebaseEditorDispatcher

// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields
{
	// Firebase.Platform.FirebaseMonoBehaviour Firebase.Platform.FirebaseHandler::firebaseMonoBehaviour
	FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___firebaseMonoBehaviour_0;
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::<AppUtils>k__BackingField
	RuntimeObject* ___U3CAppUtilsU3Ek__BackingField_1;
	// System.Int32 Firebase.Platform.FirebaseHandler::tickCount
	int32_t ___tickCount_2;
	// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::<ThreadDispatcher>k__BackingField
	Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___U3CThreadDispatcherU3Ek__BackingField_3;
	// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::firebaseHandler
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* ___firebaseHandler_5;
};

// Firebase.Platform.FirebaseHandler

// Firebase.Platform.FirebaseLogger
struct FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields
{
	// Firebase.Platform.MainThreadProperty`1<System.Boolean> Firebase.Platform.FirebaseLogger::incompatibleStackUnwindingEnabled
	MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* ___incompatibleStackUnwindingEnabled_0;
};

// Firebase.Platform.FirebaseLogger

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// System.IO.Path

// Firebase.Platform.PlatformInformation
struct PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields
{
	// System.String Firebase.Platform.PlatformInformation::runtimeVersion
	String_t* ___runtimeVersion_0;
	// System.Single Firebase.Platform.PlatformInformation::<RealtimeSinceStartupSafe>k__BackingField
	float ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1;
};

// Firebase.Platform.PlatformInformation

// Firebase.Platform.Services
struct Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields
{
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_1;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_2;
};

// Firebase.Platform.Services

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.SynchronizationContext

// System.Threading.SynchronizationContext

// Firebase.Platform.Default.SystemClock
struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields
{
	// Firebase.Platform.IClockService Firebase.Platform.Default.SystemClock::Instance
	RuntimeObject* ___Instance_0;
};

// Firebase.Platform.Default.SystemClock

// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields
{
	// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::_instance
	UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* ____instance_0;
};

// Firebase.Unity.UnityLoggingService

// Firebase.Unity.UnityPlatformServices

// Firebase.Unity.UnityPlatformServices

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// Firebase.Platform.FirebaseHandler/<>c
struct U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_StaticFields
{
	// Firebase.Platform.FirebaseHandler/<>c Firebase.Platform.FirebaseHandler/<>c::<>9
	U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422* ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseHandler/<>c::<>9__19_0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3E9__19_0_1;
};

// Firebase.Platform.FirebaseHandler/<>c

// Firebase.Platform.FirebaseHandler/<>c__DisplayClass34_0

// Firebase.Platform.FirebaseHandler/<>c__DisplayClass34_0

// Firebase.Platform.PlatformInformation/<>c
struct U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields
{
	// Firebase.Platform.PlatformInformation/<>c Firebase.Platform.PlatformInformation/<>c::<>9
	U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9* ___U3CU3E9_0;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation/<>c::<>9__6_0
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3E9__6_0_1;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation/<>c::<>9__18_0
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3E9__18_0_2;
};

// Firebase.Platform.PlatformInformation/<>c

// Firebase.Platform.Default.UnityConfigExtensions/<>c
struct U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields
{
	// Firebase.Platform.Default.UnityConfigExtensions/<>c Firebase.Platform.Default.UnityConfigExtensions/<>c::<>9
	U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA* ___U3CU3E9_0;
	// System.Func`1<System.String> Firebase.Platform.Default.UnityConfigExtensions/<>c::<>9__3_0
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3E9__3_0_1;
	// System.Func`1<System.String> Firebase.Platform.Default.UnityConfigExtensions/<>c::<>9__4_0
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3E9__4_0_2;
};

// Firebase.Platform.Default.UnityConfigExtensions/<>c

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_0

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_0

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1

// Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1

// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13

// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Reflection.EventInfo

// System.Reflection.EventInfo

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// System.Single

// System.Single

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields
{
	// Firebase.Platform.Default.UnityConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::_instance
	UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* ____instance_5;
};

// Firebase.Platform.Default.UnityConfigExtensions

// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields
{
	// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::_instance
	UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* ____instance_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent> Firebase.Unity.UnitySynchronizationContext::signalDictionary
	Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* ___signalDictionary_6;
};

// Firebase.Unity.UnitySynchronizationContext

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20

// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs

// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3120911701D83248A030816742AE8B622F6E7124_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::2645F90AC4AC37B7007C26BF8B1EF0A570251899
	__StaticArrayInitTypeSizeU3D20_tAE42A1C996C57C5EC67F8D5BF5F6603ACE24D120 ___2645F90AC4AC37B7007C26BF8B1EF0A570251899_0;
};

// <PrivateImplementationDetails>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.LogType

// UnityEngine.LogType

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};

// System.Threading.WaitHandle

// System.AggregateException

// System.AggregateException

// UnityEngine.Component

// UnityEngine.Component

// System.Threading.EventWaitHandle

// System.Threading.EventWaitHandle

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.EventHandler`1<System.EventArgs>

// System.EventHandler`1<System.EventArgs>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<System.Object>

// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>

// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Func`1<System.Collections.IEnumerator>

// System.Func`1<System.Collections.IEnumerator>

// System.Func`1<System.Object>

// System.Func`1<System.Object>

// System.Func`1<System.String>

// System.Func`1<System.String>

// System.Action

// System.Action

// System.InvalidOperationException

// System.InvalidOperationException

// System.Threading.ManualResetEvent

// System.Threading.ManualResetEvent

// System.NotSupportedException

// System.NotSupportedException

// System.Threading.SendOrPostCallback

// System.Threading.SendOrPostCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Firebase.Platform.FirebaseMonoBehaviour

// Firebase.Platform.FirebaseMonoBehaviour

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C  : public RuntimeArray
{
	ALIGN_FIELD (8) Exception_t* m_Items[1];

	inline Exception_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Exception_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Exception_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Exception_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Exception_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Exception_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LogType[]
struct LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_f, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) ;
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_RunOnMainThread_TisRuntimeObject_mAFD03CE3D144923FEEF275BF12B46CBBD81B908C_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_f, const RuntimeMethod* method) ;
// T Firebase.Platform.MainThreadProperty`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_gshared (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.MainThreadProperty`1<System.Boolean>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_gshared (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_getPropertyDelegate, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetState<System.Object>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,T,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetState_TisRuntimeObject_m1F78B3FB6712E0F50249BBCF26F656331CF7E248_gshared (RuntimeObject* ___0_app, int32_t ___1_state, RuntimeObject* ___2_value, Dictionary_2_tAE981FFB8675A3AFB674EE2636BE5565849941A4* ___3_store, const RuntimeMethod* method) ;
// T Firebase.Platform.Default.AppConfigExtensions::GetState<System.Object>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_GetState_TisRuntimeObject_m5F6BB3B11F220A0CE1D753F69AB6ECC53CA6DF82_gshared (RuntimeObject* ___0_app, int32_t ___1_state, Dictionary_2_tAE981FFB8675A3AFB674EE2636BE5565849941A4* ___2_store, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
inline void List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ExceptionAggregator_get_Exceptions_m4458200DA9F107A00E8237CD41DE17E7834C0913 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
inline Exception_t* List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
inline ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	return ((  ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.AggregateException::.ctor(System.Exception[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_mE5898BED8E2DBD0CDB82837AEF7E9A26A6074AA9 (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___0_innerExceptions, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
inline void List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Exception Firebase.ExceptionAggregator::GetAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_GetAndClearPendingExceptions_mA4395620FC225FC126511A21E6709E9FA86A7ED7 (const RuntimeMethod* method) ;
// System.Exception Firebase.ExceptionAggregator::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_LogException_m30ADE417F64E724741FB051CE03F3A2D81F3A1F0 (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.AggregateException System.AggregateException::Flatten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* AggregateException_Flatten_m60F51FEE2794F91B3E47529599BE98971B7CA291 (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
inline void List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, Exception_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, Exception_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31 (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* __this, const RuntimeMethod* method) ;
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m549B8B6A3C1F683B8498D5A3C928CB1A0D973BEB (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* UnityLoggingService_get_Instance_m021E0B3DDED042B341A7CE9885B8C26722481A19 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_m37D995A90765D897A69B7767A14E70E8F1845532 (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir>()
inline SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048 (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, int32_t ___0_key, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, int32_t, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___0_initialState, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884 (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, int32_t ___0_key, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, int32_t, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6 (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ed__13__ctor_m073F18DBA57820EF6B20EC97A46D6246A48ED2A3 (U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m71F85406259CC9E07BABFC4C9C3534B60D1188B4 (U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Collections.IEnumerator>::Invoke()
inline RuntimeObject* Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_1__ctor_mA297006BB71E8DC6C8F9544843121E2BB0E191FA (U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* __this, const RuntimeMethod* method) ;
// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext::GetThreadEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Collections.IEnumerator>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m46EE8C5F7DAECC4CF1353D682ABEC3A55D0AFAAC (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext::PostCoroutine(System.Func`1<System.Collections.IEnumerator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_PostCoroutine_m1617464E6E5099766BED9E002891EB87E0413C40 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___0_coroutine, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::.ctor(T1,T2)
inline void Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject*, const RuntimeMethod*))Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared)(__this, ___0_item1, ___1_item2, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Enqueue(T)
inline void Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83 (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mE5A94FA226B6D545714950BAC1684E5B99E9BA9B (U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_1__ctor_m614CECB53A481A4CAE1FF29E4311490C145185DC (U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::.ctor()
inline void Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::.ctor()
inline void Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701 (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3__ctor_m35E3CB0C51C8D66808E279EC08986685FB35F0B4 (U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::get_Count()
inline int32_t Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_inline (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Dequeue()
inline Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	return ((  Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// T1 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item1()
inline SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, const RuntimeMethod* method)
{
	return ((  SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item2()
inline RuntimeObject* Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_inline (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext::SignaledCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitySynchronizationContext_SignaledCoroutine_m1C124CEDE9D2F102B3C5932739DE3DCAE918B1C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___0_coroutine, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___1_newSignal, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* __this, const RuntimeMethod* method) ;
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_m5B36D38B2B9B77779577C1903669B0C4622BC0A3 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Clock_mD344BF4787A29D1C67D08109D75F7481DD5CEB74_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* DebugLogger_get_Instance_m4CB5A78C6B263A8DE29330C339515830785AB43E (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* FirebaseAppUtilsStub_get_Instance_m244EC63DAE4F4E0E3C15F0D27684ACFFA3DAFE52 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_mD79BA67FB01EE951514BBA6B0137A707DE923624 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340 (bool ___0_start, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_mA98611A34FD3DB10A0E61CA4CCB33863B16877E9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Firebase.Platform.FirebaseMonoBehaviour>()
inline FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_mF6BE8C8E97EC0AD01648FDBB68E30ACE260B2352 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_f, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_gshared)(___0_f, method);
}
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline (const RuntimeMethod* method) ;
// System.Boolean Firebase.Dispatcher::ManagesThisThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_ManagesThisThread_mF00448368389637B00847E99D9DA66DEF82E118D (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mF57098ECC5E1BDC40DC0479FFFF8462C4286FF0D (U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_mA40B80D6BC5D9D1DCEAB433495451ECC436027C5 (RuntimeObject* ___0_appUtils, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_mF1859373165CEFDF10CAB66606BAF8CC47B13A06 (const RuntimeMethod* method) ;
// System.Void Firebase.Dispatcher::PollJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) ;
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline (const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::ThrowAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mAB03BE8CA671F3AB54D452480618930A1CADEE09_inline (EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* __this, RuntimeObject* ___0_sender, ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*, RuntimeObject*, ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Terminate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Terminate_m60BF7BDCEFBD8E25FFB41DEE28CF787B4B9B1E9C (bool ___0_isPlayMode, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___0_sender, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___1_e, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___0_sender, ___1_e, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD106D0E3573CF90E581E70D2894A38124C3755BA (U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m9094753D08FC93D95972F6F8918C23A570B87DF1 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void Firebase.Dispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mC81DFF9F890B338F76B7499DCAF8D738B7D93AEE_inline (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.String>(System.Func`1<TResult>)
inline String_t* FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5 (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___0_f, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisRuntimeObject_mAFD03CE3D144923FEEF275BF12B46CBBD81B908C_gshared)(___0_f, method);
}
// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.PlatformInformation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6741C1EC646C313F640C936AFA67DBB23B75A397 (U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m9D61E661685855C6CDC6C84B3DDDB1BF2754CF2B (int32_t ___0_logType, const RuntimeMethod* method) ;
// T Firebase.Platform.MainThreadProperty`1<System.Boolean>::get_Value()
inline bool MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42 (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*, const RuntimeMethod*))MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_gshared)(__this, method);
}
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B (FieldInfo_t* ___0_left, FieldInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.MainThreadProperty`1<System.Boolean>::.ctor(System.Func`1<T>)
inline void MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083 (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_getPropertyDelegate, const RuntimeMethod* method)
{
	((  void (*) (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_gshared)(__this, ___0_getPropertyDelegate, method);
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC (const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) ;
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_m04B2E9239B3CF640EAE374E1AFA74B6EF3F2F76A (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mF2DD01812E69B3C0A7B9821BFB764002CC26FABE_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___0_hasFocus, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_mA8F66B5127AFF337B3D27EE1EC59D27053A6534B (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___0_behaviour, const RuntimeMethod* method) ;
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8 (const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___0_left, PropertyInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3 (FieldInfo_t* ___0_eventField, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, RuntimeObject* ___2_target, bool ___3_add, String_t* ___4_errorMessage, const RuntimeMethod* method) ;
// System.Reflection.EventInfo System.Type::GetEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t* Type_GetEvent_mB4D71EF747D967D102846CB4FADA5DA0291E6A83 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.EventInfo::op_Inequality(System.Reflection.EventInfo,System.Reflection.EventInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventInfo_op_Inequality_m4B5352D516359B10994084CAE273A1EF64E50B40 (EventInfo_t* ___0_left, EventInfo_t* ___1_right, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7 (Type_t* ___0_type, RuntimeObject* ___1_firstArgument, MethodInfo_t* ___2_method, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_m9588295D3A7A49CA6DA4E8D838245967DD0F7DDC (const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDC0D88CA2E26A59A8DA923E16A729B8F3894F432 (const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetState<System.String>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,T,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
inline void AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E (RuntimeObject* ___0_app, int32_t ___1_state, String_t* ___2_value, Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* ___3_store, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, String_t*, Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*, const RuntimeMethod*))AppConfigExtensions_SetState_TisRuntimeObject_m1F78B3FB6712E0F50249BBCF26F656331CF7E248_gshared)(___0_app, ___1_state, ___2_value, ___3_store, method);
}
// T Firebase.Platform.Default.AppConfigExtensions::GetState<System.String>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
inline String_t* AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A (RuntimeObject* ___0_app, int32_t ___1_state, Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* ___2_store, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, int32_t, Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*, const RuntimeMethod*))AppConfigExtensions_GetState_TisRuntimeObject_m5F6BB3B11F220A0CE1D753F69AB6ECC53CA6DF82_gshared)(___0_app, ___1_state, ___2_store, method);
}
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m64BE981CDF88B751677B80D883B201BF3CFD83F7 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri1, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_uri2, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorP12FileName_m54E25CCCD2E61CDC34E8E195C570FC9F0F8621BD (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, String_t* ___1_p12Filename, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854 (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.UnityConfigExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m58E1D1CBE36FBA6715806B230C9E19DBEA8D00A6 (U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ExceptionAggregator_get_Exceptions_m4458200DA9F107A00E8237CD41DE17E7834C0913 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_0 = ((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0;
		V_0 = (bool)((((RuntimeObject*)(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_2 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)il2cpp_codegen_object_new(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3(L_2, List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0), (void*)L_2);
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_3 = ((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0;
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_4 = V_1;
		return L_4;
	}
}
// System.Exception Firebase.ExceptionAggregator::GetAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_GetAndClearPendingExceptions_mA4395620FC225FC126511A21E6709E9FA86A7ED7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_0;
		L_0 = ExceptionAggregator_get_Exceptions_m4458200DA9F107A00E8237CD41DE17E7834C0913(NULL);
		V_0 = L_0;
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline(L_1, List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = (Exception_t*)NULL;
		int32_t L_3 = V_1;
		V_3 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_5 = V_0;
		NullCheck(L_5);
		Exception_t* L_6;
		L_6 = List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23(L_5, 0, List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var);
		V_2 = L_6;
		goto IL_003c;
	}

IL_0024:
	{
		int32_t L_7 = V_1;
		V_4 = (bool)((((int32_t)L_7) > ((int32_t)1))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_9 = V_0;
		NullCheck(L_9);
		ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* L_10;
		L_10 = List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674(L_9, List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_11 = (AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)il2cpp_codegen_object_new(AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AggregateException__ctor_mE5898BED8E2DBD0CDB82837AEF7E9A26A6074AA9(L_11, L_10, NULL);
		V_2 = L_11;
	}

IL_003c:
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_12 = V_0;
		NullCheck(L_12);
		List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_inline(L_12, List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var);
		Exception_t* L_13 = V_2;
		V_5 = L_13;
		goto IL_0048;
	}

IL_0048:
	{
		Exception_t* L_14 = V_5;
		return L_14;
	}
}
// System.Void Firebase.ExceptionAggregator::ThrowAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = ExceptionAggregator_GetAndClearPendingExceptions_mA4395620FC225FC126511A21E6709E9FA86A7ED7(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var)));
		Exception_t* L_4;
		L_4 = ExceptionAggregator_LogException_m30ADE417F64E724741FB051CE03F3A2D81F3A1F0(L_3, NULL);
		Exception_t* L_5 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9_RuntimeMethod_var)));
	}

IL_0019:
	{
		return;
	}
}
// System.Exception Firebase.ExceptionAggregator::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_LogException_m30ADE417F64E724741FB051CE03F3A2D81F3A1F0 (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* V_1 = NULL;
	bool V_2 = false;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	{
		Exception_t* L_0 = ___0_exception;
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0093;
		}
	}
	{
		Exception_t* L_2 = ___0_exception;
		V_1 = ((AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)IsInstClass((RuntimeObject*)L_2, AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var));
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0083;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_5, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_3 = L_5;
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_6 = V_1;
		NullCheck(L_6);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_7;
		L_7 = AggregateException_Flatten_m60F51FEE2794F91B3E47529599BE98971B7CA291(L_6, NULL);
		NullCheck(L_7);
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_8;
		L_8 = AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline(L_7, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC(L_8, ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		V_4 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005c:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_4;
					if (!L_10)
					{
						goto IL_0068;
					}
				}
				{
					RuntimeObject* L_11 = V_4;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0068:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0051_1;
			}

IL_0038_1:
			{
				RuntimeObject* L_12 = V_4;
				NullCheck(L_12);
				Exception_t* L_13;
				L_13 = InterfaceFuncInvoker0< Exception_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var, L_12);
				V_5 = L_13;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_3;
				Exception_t* L_15 = V_5;
				NullCheck(L_15);
				String_t* L_16;
				L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
				NullCheck(L_14);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0051_1:
			{
				RuntimeObject* L_17 = V_4;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_19 = V_3;
		NullCheck(L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20;
		L_20 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_19, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_21;
		L_21 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(4, L_21, NULL);
		goto IL_0092;
	}

IL_0083:
	{
		Exception_t* L_22 = ___0_exception;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(4, L_23, NULL);
	}

IL_0092:
	{
	}

IL_0093:
	{
		Exception_t* L_24 = ___0_exception;
		V_6 = L_24;
		goto IL_0098;
	}

IL_0098:
	{
		Exception_t* L_25 = V_6;
		return L_25;
	}
}
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000c;
		}
		throw e;
	}

CATCH_000c:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var)));
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1;
		L_1 = ExceptionAggregator_get_Exceptions_m4458200DA9F107A00E8237CD41DE17E7834C0913(NULL);
		Exception_t* L_2 = V_0;
		NullCheck(L_1);
		List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline(L_1, L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.ExceptionAggregator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator__ctor_m4CBCF8A532FC8FBECDD242CA0983596A236D8E37 (ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.ExceptionAggregator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator__cctor_m5F1FD4F23378B5121739AC1B2055BA43547C9642 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0), (void*)(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Dispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		__this->___queue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___ownerThreadId_0 = L_2;
		return;
	}
}
// System.Boolean Firebase.Dispatcher::ManagesThisThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_ManagesThisThread_mF00448368389637B00847E99D9DA66DEF82E118D (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		int32_t L_2 = __this->___ownerThreadId_0;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Dispatcher::PollJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		goto IL_0052;
	}

IL_0003:
	{
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___queue_1;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_0049;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_4 = __this->___queue_1;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_4, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
				V_3 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
				bool L_6 = V_3;
				if (!L_6)
				{
					goto IL_0039_1;
				}
			}
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_7 = __this->___queue_1;
				NullCheck(L_7);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
				L_8 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_7, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
				V_0 = L_8;
				goto IL_003c_1;
			}

IL_0039_1:
			{
				goto IL_0057;
			}

IL_003c_1:
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_9, NULL);
	}

IL_0052:
	{
		V_4 = (bool)1;
		goto IL_0003;
	}

IL_0057:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* UnityLoggingService_get_Instance_m021E0B3DDED042B341A7CE9885B8C26722481A19 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_0 = ((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService_LogMessage_m0ADAA4CB5B1C937E56A61E5D0187A3926562DF22 (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* __this, int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_level;
		String_t* L_1 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(L_0, L_1, NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31 (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__cctor_m9C4AF209E4B43DCEC6C08532326D7F9DB636ED06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_0 = (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB*)il2cpp_codegen_object_new(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31(L_0, NULL);
		((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_mF1859373165CEFDF10CAB66606BAF8CC47B13A06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = UnityConfigExtensions_get_DefaultInstance_m549B8B6A3C1F683B8498D5A3C928CB1A0D973BEB(NULL);
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_1;
		L_1 = UnityLoggingService_get_Instance_m021E0B3DDED042B341A7CE9885B8C26722481A19(NULL);
		Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736_inline(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnityPlatformServices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices__ctor_mD6C7932A0FECA1A848359AB6E2B1D2BEA6F9D997 (UnityPlatformServices_t7D48ED4FE484C77B2D6E77155BF53BFFD6BC60B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext__ctor_m37D995A90765D897A69B7767A14E70E8F1845532(__this, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		__this->___mainThreadId_4 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_gameObject;
		NullCheck(L_2);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_3;
		L_3 = GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3(L_2, GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var);
		__this->___behavior_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___behavior_3), (void*)L_3);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_4 = __this->___behavior_3;
		NullCheck(L_4);
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_5;
		L_5 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_4, NULL);
		__this->___queue_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_2), (void*)L_5);
		return;
	}
}
// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_0 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1;
		V_0 = (bool)((((RuntimeObject*)(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEF6B54868904D9D06D525E97D1016EAA23EBBAA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64_RuntimeMethod_var)));
	}

IL_0019:
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_3 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1;
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_4 = V_1;
		return L_4;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_mF6BE8C8E97EC0AD01648FDBB68E30ACE260B2352 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_gameObject, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_0 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1;
		V_0 = (bool)((((RuntimeObject*)(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_gameObject;
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_3 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)il2cpp_codegen_object_new(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9(L_3, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)L_3);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m9094753D08FC93D95972F6F8918C23A570B87DF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL);
		return;
	}
}
// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext::GetThreadEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* V_0 = NULL;
	Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* V_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_0 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_005c;
					}
				}
				{
					Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_2 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_3 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_2), NULL);
				il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
				Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_4 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5;
				L_5 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
				NullCheck(L_5);
				int32_t L_6;
				L_6 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_5, NULL);
				NullCheck(L_4);
				bool L_7;
				L_7 = Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048(L_4, L_6, (&V_0), Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var);
				V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_004f_1;
				}
			}
			{
				ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_9 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_9, (bool)0, NULL);
				V_0 = L_9;
				il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
				Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_10 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_11;
				L_11 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
				NullCheck(L_11);
				int32_t L_12;
				L_12 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_11, NULL);
				ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_13 = V_0;
				NullCheck(L_10);
				Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884(L_10, L_12, L_13, Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var);
			}

IL_004f_1:
			{
				goto IL_005d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005d:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_14, NULL);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_16 = V_0;
		V_4 = L_16;
		goto IL_0069;
	}

IL_0069:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_17 = V_4;
		return L_17;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::PostCoroutine(System.Func`1<System.Collections.IEnumerator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_PostCoroutine_m1617464E6E5099766BED9E002891EB87E0413C40 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___0_coroutine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_U3CPostCoroutineU3Eb__12_0_m98AA393674BACD2813A9EC4962D8338781193EEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_0 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_0, __this, (intptr_t)((void*)UnitySynchronizationContext_U3CPostCoroutineU3Eb__12_0_m98AA393674BACD2813A9EC4962D8338781193EEB_RuntimeMethod_var), NULL);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_1 = ___0_coroutine;
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext::SignaledCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitySynchronizationContext_SignaledCoroutine_m1C124CEDE9D2F102B3C5932739DE3DCAE918B1C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___0_coroutine, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___1_newSignal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* L_0 = (U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400*)il2cpp_codegen_object_new(U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSignaledCoroutineU3Ed__13__ctor_m073F18DBA57820EF6B20EC97A46D6246A48ED2A3(L_0, 0, NULL);
		U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_4), (void*)__this);
		U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* L_2 = L_1;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_3 = ___0_coroutine;
		NullCheck(L_2);
		L_2->___coroutine_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___coroutine_2), (void*)L_3);
		U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* L_4 = L_2;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_5 = ___1_newSignal;
		NullCheck(L_4);
		L_4->___newSignal_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___newSignal_3), (void*)L_5);
		return L_4;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::SendCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_SendCoroutine_mE4FA1E7A5DE78112436BD2AF080A0C557C93AA7B (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___0_coroutine, int32_t ___1_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_1_U3CSendCoroutineU3Eb__0_mB82F155D459254ADAF8B4BBFC403757C5A21DE2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* V_0 = NULL;
	bool V_1 = false;
	U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* L_0 = (U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_m71F85406259CC9E07BABFC4C9C3534B60D1188B4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* L_2 = V_0;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_3 = ___0_coroutine;
		NullCheck(L_2);
		L_2->___coroutine_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___coroutine_1), (void*)L_3);
		int32_t L_4 = __this->___mainThreadId_4;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5;
		L_5 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_5, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_8 = __this->___behavior_3;
		U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* L_9 = V_0;
		NullCheck(L_9);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_10 = L_9->___coroutine_1;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_10, NULL);
		NullCheck(L_8);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_8, L_11, NULL);
		goto IL_0081;
	}

IL_0046:
	{
		U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* L_13 = (U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		U3CU3Ec__DisplayClass14_1__ctor_mA297006BB71E8DC6C8F9544843121E2BB0E191FA(L_13, NULL);
		V_2 = L_13;
		U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* L_14 = V_2;
		U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* L_15 = V_0;
		NullCheck(L_14);
		L_14->___CSU24U3CU3E8__locals1_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___CSU24U3CU3E8__locals1_1), (void*)L_15);
		U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* L_16 = V_2;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_17;
		L_17 = UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0(__this, NULL);
		NullCheck(L_16);
		L_16->___newSignal_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___newSignal_0), (void*)L_17);
		U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* L_18 = V_2;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_19 = (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*)il2cpp_codegen_object_new(Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_1__ctor_m46EE8C5F7DAECC4CF1353D682ABEC3A55D0AFAAC(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass14_1_U3CSendCoroutineU3Eb__0_mB82F155D459254ADAF8B4BBFC403757C5A21DE2F_RuntimeMethod_var), NULL);
		UnitySynchronizationContext_PostCoroutine_m1617464E6E5099766BED9E002891EB87E0413C40(__this, L_19, NULL);
		U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* L_20 = V_2;
		NullCheck(L_20);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_21 = L_20->___newSignal_0;
		int32_t L_22 = ___1_timeout;
		NullCheck(L_21);
		bool L_23;
		L_23 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_21, L_22);
	}

IL_0081:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_m27CEEE71D49CB394434E47807272ADBB1B00B7A9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___0_d, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* V_0 = NULL;
	bool V_1 = false;
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_0 = __this->___queue_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_4 = __this->___queue_2;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = ___0_d;
			RuntimeObject* L_6 = ___1_state;
			Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_7 = (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)il2cpp_codegen_object_new(Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F(L_7, L_5, L_6, Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var);
			NullCheck(L_4);
			Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83(L_4, L_7, Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var);
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Send_m6287E48D5488043652D3E93E610AE279CD616D00 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___0_d, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_1_U3CSendU3Eb__0_mE2861360FB9F457F08CCB9240711D8A785BEAD09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* V_0 = NULL;
	bool V_1 = false;
	U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* L_0 = (U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass16_0__ctor_mE5A94FA226B6D545714950BAC1684E5B99E9BA9B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* L_1 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_2 = ___0_d;
		NullCheck(L_1);
		L_1->___d_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___d_0), (void*)L_2);
		int32_t L_3 = __this->___mainThreadId_4;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4;
		L_4 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_4, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* L_7 = V_0;
		NullCheck(L_7);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_8 = L_7->___d_0;
		RuntimeObject* L_9 = ___1_state;
		NullCheck(L_8);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_8, L_9, NULL);
		goto IL_0075;
	}

IL_0035:
	{
		U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* L_10 = (U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		U3CU3Ec__DisplayClass16_1__ctor_m614CECB53A481A4CAE1FF29E4311490C145185DC(L_10, NULL);
		V_2 = L_10;
		U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* L_11 = V_2;
		U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* L_12 = V_0;
		NullCheck(L_11);
		L_11->___CSU24U3CU3E8__locals1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___CSU24U3CU3E8__locals1_1), (void*)L_12);
		U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* L_13 = V_2;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_14;
		L_14 = UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0(__this, NULL);
		NullCheck(L_13);
		L_13->___newSignal_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___newSignal_0), (void*)L_14);
		U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* L_15 = V_2;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_16 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass16_1_U3CSendU3Eb__0_mE2861360FB9F457F08CCB9240711D8A785BEAD09_RuntimeMethod_var), NULL);
		RuntimeObject* L_17 = ___1_state;
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, __this, L_16, L_17);
		U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* L_18 = V_2;
		NullCheck(L_18);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_19 = L_18->___newSignal_0;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker1< bool, int32_t >::Invoke(10 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_19, ((int32_t)15000));
	}

IL_0075:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__cctor_mA297F4ED255BC983DBB17CE889957C5AE8A08758 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL);
		Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_0 = (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*)il2cpp_codegen_object_new(Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D(L_0, Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::<PostCoroutine>b__12_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_U3CPostCoroutineU3Eb__12_0_m98AA393674BACD2813A9EC4962D8338781193EEB (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_x;
		V_0 = ((Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*)Castclass((RuntimeObject*)L_0, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var));
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_1 = __this->___behavior_3;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_2, NULL);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_3, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* V_1 = NULL;
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_0 = __this->___callbackQueue_4;
		V_0 = (bool)((((RuntimeObject*)(Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_2 = (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*)il2cpp_codegen_object_new(Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701(L_2, Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var);
		__this->___callbackQueue_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackQueue_4), (void*)L_2);
	}

IL_001b:
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_3 = __this->___callbackQueue_4;
		V_1 = L_3;
		goto IL_0024;
	}

IL_0024:
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_4 = V_1;
		return L_4;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SynchronizationContextBehavoir_Start_m138FD9256FCC72808F0F211B4578B4F1B400A507 (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* L_0 = (U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E*)il2cpp_codegen_object_new(U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__3__ctor_m35E3CB0C51C8D66808E279EC08986685FB35F0B4(L_0, 0, NULL);
		U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContextBehavoir__ctor_m535727BFD0F4884E295BF1DD883A4A47DB5CA226 (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3__ctor_m35E3CB0C51C8D66808E279EC08986685FB35F0B4 (U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_System_IDisposable_Dispose_m6BFEE452494CADFC903A5DE0A0391FE66BE0732B (U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__3_MoveNext_mAFA0389B4DED6BFC59975113737EE832A6051ABA (U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B18_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0115;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0124;
	}

IL_0028:
	{
		__this->___U3CentryU3E5__1_3 = (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CentryU3E5__1_3), (void*)(Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)NULL);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_4;
		L_4 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_3, NULL);
		__this->___U3CU3Es__2_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)L_4);
		__this->___U3CU3Es__3_5 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				{
					bool L_5 = __this->___U3CU3Es__3_5;
					if (!L_5)
					{
						goto IL_00a1;
					}
				}
				{
					Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_6 = __this->___U3CU3Es__2_4;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_6, NULL);
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_7 = __this->___U3CU3Es__2_4;
				bool* L_8 = (&__this->___U3CU3Es__3_5);
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_7, L_8, NULL);
				SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_9 = __this->___U3CU3E4__this_2;
				NullCheck(L_9);
				Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_10;
				L_10 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_9, NULL);
				NullCheck(L_10);
				int32_t L_11;
				L_11 = Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_inline(L_10, Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var);
				V_1 = (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
				bool L_12 = V_1;
				if (!L_12)
				{
					goto IL_008a_1;
				}
			}
			{
				SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_13 = __this->___U3CU3E4__this_2;
				NullCheck(L_13);
				Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_14;
				L_14 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_13, NULL);
				NullCheck(L_14);
				Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_15;
				L_15 = Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A(L_14, Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var);
				__this->___U3CentryU3E5__1_3 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CentryU3E5__1_3), (void*)L_15);
			}

IL_008a_1:
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		__this->___U3CU3Es__2_4 = (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)(Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*)NULL);
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_16 = __this->___U3CentryU3E5__1_3;
		if (!L_16)
		{
			goto IL_00c1;
		}
	}
	{
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_17 = __this->___U3CentryU3E5__1_3;
		NullCheck(L_17);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_18;
		L_18 = Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline(L_17, Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		G_B18_0 = ((!(((RuntimeObject*)(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)L_18) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B18_0 = 0;
	}

IL_00c2:
	{
		V_2 = (bool)G_B18_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_0105;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_20 = __this->___U3CentryU3E5__1_3;
		NullCheck(L_20);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_21;
		L_21 = Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline(L_20, Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_22 = __this->___U3CentryU3E5__1_3;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_inline(L_22, Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var);
		NullCheck(L_21);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_21, L_23, NULL);
		goto IL_0104;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e7;
		}
		throw e;
	}

CATCH_00e7:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_24 = V_3;
		__this->___U3CeU3E5__4_6 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__4_6), (void*)L_24);
		Exception_t* L_25 = __this->___U3CeU3E5__4_6;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_26, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0104;
	}// end catch (depth: 1)

IL_0104:
	{
	}

IL_0105:
	{
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0115:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CentryU3E5__1_3 = (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CentryU3E5__1_3), (void*)(Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)NULL);
	}

IL_0124:
	{
		V_4 = (bool)1;
		goto IL_0028;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE7D5524D4D60AEB5589BBE0C16EEB6B4FCE158B5 (U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m85F03652CF544E4A9AE0E1CFCB02377AE7354FC5 (U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__3_System_Collections_IEnumerator_Reset_m85F03652CF544E4A9AE0E1CFCB02377AE7354FC5_RuntimeMethod_var)));
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__3_System_Collections_IEnumerator_get_Current_m6A22713E2B13BDEFA00F6E7D7258603D92C9ABAD (U3CStartU3Ed__3_tAC8672F06FE29927727900CCBCD2D9F5EBE3E62E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ed__13__ctor_m073F18DBA57820EF6B20EC97A46D6246A48ED2A3 (U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ed__13_System_IDisposable_Dispose_m8DC198C230D0F10E1C6E2B57CB39372239DA2BD6 (U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSignaledCoroutineU3Ed__13_MoveNext_m8BCA7385AFDF3D364511EE9B5AEE1260061E8009 (U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_003a;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_3 = __this->___coroutine_2;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_5 = __this->___newSignal_3;
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_5, NULL);
		return (bool)0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignaledCoroutineU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB412D5AF5C82FAD9142C7F419F915EC9A0476925 (U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_mD22ABA2279A7D4EE51960968BDE530FCD48F4972 (U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignaledCoroutineU3Ed__13_System_Collections_IEnumerator_Reset_mD22ABA2279A7D4EE51960968BDE530FCD48F4972_RuntimeMethod_var)));
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignaledCoroutineU3Ed__13_System_Collections_IEnumerator_get_Current_m8B92EAB33C25F9984FD2769747DF4FA49A6EA59C (U3CSignaledCoroutineU3Ed__13_tD317E5CD2DC80594D2FC19E36DC6291167C20400* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_m71F85406259CC9E07BABFC4C9C3534B60D1188B4 (U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_1__ctor_mA297006BB71E8DC6C8F9544843121E2BB0E191FA (U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass14_1::<SendCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass14_1_U3CSendCoroutineU3Eb__0_mB82F155D459254ADAF8B4BBFC403757C5A21DE2F (U3CU3Ec__DisplayClass14_1_t970893C976A68177C68809098A4BDF2A800AD01E* __this, const RuntimeMethod* method) 
{
	{
		U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_1 = L_0->___U3CU3E4__this_0;
		U3CU3Ec__DisplayClass14_0_t4405F94B1E0528A72FA6BFDDB16D079BAF5B0C72* L_2 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_2);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_3 = L_2->___coroutine_1;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = __this->___newSignal_0;
		NullCheck(L_1);
		RuntimeObject* L_5;
		L_5 = UnitySynchronizationContext_SignaledCoroutine_m1C124CEDE9D2F102B3C5932739DE3DCAE918B1C9(L_1, L_3, L_4, NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mE5A94FA226B6D545714950BAC1684E5B99E9BA9B (U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_1__ctor_m614CECB53A481A4CAE1FF29E4311490C145185DC (U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<>c__DisplayClass16_1::<Send>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_1_U3CSendU3Eb__0_mE2861360FB9F457F08CCB9240711D8A785BEAD09 (U3CU3Ec__DisplayClass16_1_t5F4D0368B5DBEF45A998289FF53F9895237840CC* __this, RuntimeObject* ___0_x, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		U3CU3Ec__DisplayClass16_0_tE35D99F15CFFF1EBA40FE01E66F2C5E5EA9C3E52* L_0 = __this->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_0);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = L_0->___d_0;
		RuntimeObject* L_2 = ___0_x;
		NullCheck(L_1);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_1, L_2, NULL);
		goto IL_0028;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0028;
	}// end catch (depth: 1)

IL_0028:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_5 = __this->___newSignal_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_5, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* DebugLogger_get_Instance_m4CB5A78C6B263A8DE29330C339515830785AB43E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_0 = ((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Platform.DebugLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogMessage_m4146EA44504F20093150685C0D01791AF4539D1B (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* __this, int32_t ___0_level, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Firebase.Platform.DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.DebugLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__cctor_m0176E974D2D66B3A574A7FB919DAD103095C882E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_0 = (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1*)il2cpp_codegen_object_new(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B(L_0, NULL);
		((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.Services::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services__cctor_mA49E5137FA072E8742842A11423FBB8D3F1C41F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = AppConfigExtensions_get_Instance_m5B36D38B2B9B77779577C1903669B0C4622BC0A3(NULL);
		Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0;
		Services_set_Clock_mD344BF4787A29D1C67D08109D75F7481DD5CEB74_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_2;
		L_2 = DebugLogger_get_Instance_m4CB5A78C6B263A8DE29330C339515830785AB43E(NULL);
		Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736_inline(L_2, NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Firebase.Platform.IClockService Firebase.Platform.Services::get_Clock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Clock_m2429211439B5115AC7E5223E549E60B0C645BFE2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Clock_mD344BF4787A29D1C67D08109D75F7481DD5CEB74 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Firebase.Platform.ILoggingService Firebase.Platform.Services::get_Logging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* FirebaseAppUtilsStub_get_Instance_m244EC63DAE4F4E0E3C15F0D27684ACFFA3DAFE52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0 = ((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_TranslateDllNotFoundException_mDDDE0AFBE2714E5A360C9C26184C46E0FD6169E7 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_PollCallbacks_mB4F4C4556E7FE81BCAFAB9D06A2AF268E62F9463 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Firebase.Platform.IFirebaseAppPlatform Firebase.Platform.FirebaseAppUtilsStub::GetDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseAppUtilsStub_GetDefaultInstance_mC20A8C9F16A70117B9BB5D5081146CB75CBCD4BF (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		V_0 = (RuntimeObject*)NULL;
		goto IL_0005;
	}

IL_0005:
	{
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.String Firebase.Platform.FirebaseAppUtilsStub::GetDefaultInstanceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAppUtilsStub_GetDefaultInstanceName_mDAFC215F046D6B4E4319AAA6AF04C2ECF89B5DCE (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B600FF89C754A6094C3604CCCB7D8E99C423166);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral8B600FF89C754A6094C3604CCCB7D8E99C423166;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtilsStub::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseAppUtilsStub_GetLogLevel_mE32FBF80367DE28198974386C8E0F17CFD2B925F (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		goto IL_0005;
	}

IL_0005:
	{
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__cctor_m49126C4C89278662AD9FC83D8A33DE9B484ACAE5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0 = (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02*)il2cpp_codegen_object_new(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132(L_0, NULL);
		((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 Firebase.Platform.FirebaseHandler::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseHandler_get_TickCount_m767D64257A083D3EA0176DEBBE86ACB52D2171D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mC81DFF9F890B338F76B7499DCAF8D738B7D93AEE (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPlayModeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsPlayModeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__cctor_mB834BEBC4967AA6D7BECB601F72F86D9C4C21BEC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0 = (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0), (void*)(FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72*)NULL);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2 = 0;
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0;
		L_0 = FirebaseAppUtilsStub_get_Instance_m244EC63DAE4F4E0E3C15F0D27684ACFFA3DAFE52(NULL);
		FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091_inline(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		__this->___UpdatedEventWrapper_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UpdatedEventWrapper_7), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		bool L_2;
		L_2 = FirebaseEditorDispatcher_get_EditorIsPlaying_mD79BA67FB01EE951514BBA6B0137A707DE923624(NULL);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(__this, L_2, NULL);
		FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340((bool)1, NULL);
		goto IL_0039;
	}

IL_002f:
	{
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(__this, (bool)1, NULL);
	}

IL_0039:
	{
		bool L_3;
		L_3 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(__this, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246(__this, NULL);
		goto IL_0056;
	}

IL_004e:
	{
		FirebaseEditorDispatcher_StartEditorUpdate_mA98611A34FD3DB10A0E61CA4CCB33863B16877E9(NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		V_1 = (bool)((((RuntimeObject*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)__this);
	}

IL_0013:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5, NULL);
		V_0 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_4;
		L_4 = GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A(L_3, GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0), (void*)L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Create_mF6BE8C8E97EC0AD01648FDBB68E30ACE260B2352(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_6, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStopMonoBehaviourU3Eb__19_0_mB990EC27D5AB7A305AAA79490EE3DECA513B2507_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B3_0 = NULL;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* G_B2_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = ((U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_1;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var);
		U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422* L_5 = ((U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_6 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CStopMonoBehaviourU3Eb__19_0_mB990EC27D5AB7A305AAA79490EE3DECA513B2507_RuntimeMethod_var), NULL);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_7 = L_6;
		((U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var))->___U3CU3E9__19_0_1), (void*)L_7);
		G_B3_0 = L_7;
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4(G_B3_0, FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var);
	}

IL_0037:
	{
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::IsMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_IsMainThread_m08E16B823C1D5BC34C0810802660E29D98F0F5CB (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0;
		L_0 = FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline(NULL);
		V_0 = (bool)((!(((RuntimeObject*)(Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_2;
		L_2 = FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = Dispatcher_ManagesThisThread_mF00448368389637B00847E99D9DA66DEF82E118D(L_2, NULL);
		V_1 = L_3;
		goto IL_0020;
	}

IL_001b:
	{
		V_1 = (bool)0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::add_Updated(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_add_Updated_mD82DB01DF3C7F417BA8C651B9110536C40C83733 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_2 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___Updated_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_4, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var));
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_5 = (&__this->___Updated_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::remove_Updated(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_remove_Updated_mA29976610BB4ADFCBD7B35C89DC05CB7E830C7B9 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_2 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___Updated_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_4, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var));
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_5 = (&__this->___Updated_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::add_ApplicationFocusChanged(System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_add_ApplicationFocusChanged_mAF28459B6FD593725A9391EAB1A8C679766F8CC1 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_0 = NULL;
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_1 = NULL;
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_2 = NULL;
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_0 = __this->___ApplicationFocusChanged_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_2 = V_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)Castclass((RuntimeObject*)L_4, EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var));
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E** L_5 = (&__this->___ApplicationFocusChanged_8);
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_6 = V_2;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_7 = V_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_9 = V_0;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_9) == ((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::remove_ApplicationFocusChanged(System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_remove_ApplicationFocusChanged_m4ECEB5BD050757A5C1BC7E17D18A778C6943344C (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_0 = NULL;
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_1 = NULL;
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_2 = NULL;
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_0 = __this->___ApplicationFocusChanged_8;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_2 = V_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)Castclass((RuntimeObject*)L_4, EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var));
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E** L_5 = (&__this->___ApplicationFocusChanged_8);
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_6 = V_2;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_7 = V_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*>(L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_9 = V_0;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_9) == ((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_mA40B80D6BC5D9D1DCEAB433495451ECC436027C5 (RuntimeObject* ___0_appUtils, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_U3CCreatePartialOnMainThreadU3Eb__0_mF30FC5B54AA56E8760A72FCF6F7B4E228921A701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08* L_0 = (U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass34_0__ctor_mF57098ECC5E1BDC40DC0479FFFF8462C4286FF0D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08* L_1 = V_0;
		RuntimeObject* L_2 = ___0_appUtils;
		NullCheck(L_1);
		L_1->___appUtils_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___appUtils_0), (void*)L_2);
		U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___appUtils_0;
		U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass34_0_U3CCreatePartialOnMainThreadU3Eb__0_mF30FC5B54AA56E8760A72FCF6F7B4E228921A701_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void Firebase.Platform.IFirebaseAppUtils::TranslateDllNotFoundException(System.Action) */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_4, L_6);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Create_mDC243F751CBDC835EDF2388C04C1A48FD9238FE9 (RuntimeObject* ___0_appUtils, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_appUtils;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_CreatePartialOnMainThread_mA40B80D6BC5D9D1DCEAB433495451ECC436027C5(L_0, NULL);
		UnityPlatformServices_SetupServices_mF1859373165CEFDF10CAB66606BAF8CC47B13A06(NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_U3CUpdateU3Eb__36_0_mF9F0EE2B1EA48002FA4AAF4E90A45F0CD28183BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0;
		L_0 = FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline(NULL);
		NullCheck(L_0);
		Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE(L_0, NULL);
		RuntimeObject* L_1;
		L_1 = FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline(NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Firebase.Platform.IFirebaseAppUtils::PollCallbacks() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_1);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___Updated_6;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___UpdatedEventWrapper_7;
		V_1 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, __this, (intptr_t)((void*)FirebaseHandler_U3CUpdateU3Eb__36_0_mF9F0EE2B1EA48002FA4AAF4E90A45F0CD28183BE_RuntimeMethod_var), NULL);
		__this->___UpdatedEventWrapper_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UpdatedEventWrapper_7), (void*)L_6);
	}

IL_0046:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = __this->___UpdatedEventWrapper_7;
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_7, NULL);
	}

IL_0053:
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		int32_t L_8 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2;
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___0_hasFocus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_0 = __this->___ApplicationFocusChanged_8;
		V_0 = (bool)((!(((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_2 = __this->___ApplicationFocusChanged_8;
		ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* L_3 = (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD*)il2cpp_codegen_object_new(ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE(L_3, NULL);
		ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* L_4 = L_3;
		bool L_5 = ___0_hasFocus;
		NullCheck(L_4);
		ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline(L_4, L_5, NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_mAB03BE8CA671F3AB54D452480618930A1CADEE09_inline(L_2, NULL, L_4, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Terminate_mC220D81AC451121CE4A9EF309F3D23C203290A6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		V_0 = (bool)((!(((RuntimeObject*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_2 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		NullCheck(L_2);
		bool L_3;
		L_3 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(L_2, NULL);
		FirebaseEditorDispatcher_Terminate_m60BF7BDCEFBD8E25FFB41DEE28CF787B4B9B1E9C(L_3, NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_4 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		NullCheck(L_4);
		FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451(L_4, NULL);
	}

IL_002a:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_mA8F66B5127AFF337B3D27EE1EC59D27053A6534B (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___0_behaviour, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ___0_behaviour;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_1 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0 = (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0), (void*)(FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72*)NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::<Update>b__36_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_U3CUpdateU3Eb__36_0_mF9F0EE2B1EA48002FA4AAF4E90A45F0CD28183BE (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___Updated_6;
		NullCheck(L_0);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_0, __this, (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*)NULL, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::get_HasFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApplicationFocusChangedEventArgs_get_HasFocus_mB6FF8C7C84ED1B7DC25AAD0AABFF8C86D96BA3CF (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasFocusU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107 (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CHasFocusU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.FirebaseHandler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1BD514AEA2B9A294224E3B0EAD670BEC8BBDB245 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422* L_0 = (U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422*)il2cpp_codegen_object_new(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD106D0E3573CF90E581E70D2894A38124C3755BA(L_0, NULL);
		((U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD106D0E3573CF90E581E70D2894A38124C3755BA (U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler/<>c::<StopMonoBehaviour>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStopMonoBehaviourU3Eb__19_0_mB990EC27D5AB7A305AAA79490EE3DECA513B2507 (U3CU3Ec_tACBF313B604FD543F2DB34C3833DE54957B78422* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Destroy_m9094753D08FC93D95972F6F8918C23A570B87DF1(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_3 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0028:
	{
		V_1 = (bool)1;
		goto IL_002c;
	}

IL_002c:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.FirebaseHandler/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_mF57098ECC5E1BDC40DC0479FFFF8462C4286FF0D (U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/<>c__DisplayClass34_0::<CreatePartialOnMainThread>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0_U3CCreatePartialOnMainThreadU3Eb__0_mF30FC5B54AA56E8760A72FCF6F7B4E228921A701 (U3CU3Ec__DisplayClass34_0_tE3D18106558CC198CD57D17F7F7937D650FADD08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0058:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0062;
					}
				}
				{
					Type_t* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0062:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Type_t* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_5 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
				V_2 = (bool)((!(((RuntimeObject*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0063;
			}

IL_0026_1:
			{
				RuntimeObject* L_7 = __this->___appUtils_0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091_inline(L_7, NULL);
				Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_8;
				L_8 = FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline(NULL);
				V_3 = (bool)((((RuntimeObject*)(Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
				bool L_9 = V_3;
				if (!L_9)
				{
					goto IL_004b_1;
				}
			}
			{
				Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_10 = (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6*)il2cpp_codegen_object_new(Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A(L_10, NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_set_ThreadDispatcher_mC81DFF9F890B338F76B7499DCAF8D738B7D93AEE_inline(L_10, NULL);
			}

IL_004b_1:
			{
				FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_11 = (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)il2cpp_codegen_object_new(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442(L_11, NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)L_11);
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B (const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082 (const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)((int32_t)31)))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_mAC7DD97F2C49460091AA1709BF677FFFA1D4BC74 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_DefaultConfigLocationU3Eb__6_0_m3AB345EB876894BBEF4EA889DB7C050149A84ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* G_B2_0 = NULL;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_0 = ((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var);
		U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9* L_2 = ((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_3 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3Cget_DefaultConfigLocationU3Eb__6_0_m3AB345EB876894BBEF4EA889DB7C050149A84ED5_RuntimeMethod_var), NULL);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_4 = L_3;
		((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9__6_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5(G_B2_0, FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0028;
	}

IL_0028:
	{
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Threading.SynchronizationContext Firebase.Platform.PlatformInformation::get_SynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* PlatformInformation_get_SynchronizationContext_m6304D399636B2EEA57B32158E1C112C265F6A590 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_0;
		L_0 = UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_1 = V_0;
		return L_1;
	}
}
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_m04B2E9239B3CF640EAE374E1AFA74B6EF3F2F76A (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartupSafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartupSafe_mE4F24C3025FAC23BED29D3E46AE01309E308739F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mF2DD01812E69B3C0A7B9821BFB764002CC26FABE (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_value;
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_m3412CC566E5CE3DFA00A4C2DF5AAC46C548B7B4A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_mD8F3490DE409C7635E2876FE28631DC79240A45B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_RuntimeVersionU3Eb__18_0_m534FD38D257EAEFB9FB15D828D2177701A9FC47F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* G_B3_0 = NULL;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* G_B2_0 = NULL;
	{
		String_t* L_0 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_2 = ((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_2;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var);
		U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9* L_4 = ((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_5 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3Cget_RuntimeVersionU3Eb__18_0_m534FD38D257EAEFB9FB15D828D2177701A9FC47F_RuntimeMethod_var), NULL);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_6 = L_5;
		((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9__18_0_2), (void*)L_6);
		G_B3_0 = L_6;
	}

IL_002d:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5(G_B3_0, FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0), (void*)L_7);
	}

IL_0038:
	{
		String_t* L_8 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0;
		V_1 = L_8;
		goto IL_0040;
	}

IL_0040:
	{
		String_t* L_9 = V_1;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.PlatformInformation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3367584607E4A95D7F6933BE6A07296AD70B3FE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9* L_0 = (U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9*)il2cpp_codegen_object_new(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6741C1EC646C313F640C936AFA67DBB23B75A397(L_0, NULL);
		((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Platform.PlatformInformation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6741C1EC646C313F640C936AFA67DBB23B75A397 (U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Firebase.Platform.PlatformInformation/<>c::<get_DefaultConfigLocation>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_DefaultConfigLocationU3Eb__6_0_m3AB345EB876894BBEF4EA889DB7C050149A84ED5 (U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Firebase.Platform.PlatformInformation/<>c::<get_RuntimeVersion>b__18_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_RuntimeVersionU3Eb__18_0_m534FD38D257EAEFB9FB15D828D2177701A9FC47F (U3CU3Ec_t32BCE5FB3C0FAA34E0B21C57645B9914C722EDC9* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Firebase.Platform.FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m9D61E661685855C6CDC6C84B3DDDB1BF2754CF2B (int32_t ___0_logType, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_logType;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_logType;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000d:
	{
		G_B3_0 = 0;
	}

IL_000e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m0F425143BB2FEABADE7FD419C02C0545941BD633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t3120911701D83248A030816742AE8B622F6E7124____2645F90AC4AC37B7007C26BF8B1EF0A570251899_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	bool V_1 = false;
	LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B, NULL);
		V_0 = L_2;
		MethodInfo_t* L_3 = V_0;
		bool L_4;
		L_4 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_3, (MethodInfo_t*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0078;
		}
	}
	{
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_6 = (LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063*)(LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063*)SZArrayNew(LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var, (uint32_t)5);
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3120911701D83248A030816742AE8B622F6E7124____2645F90AC4AC37B7007C26BF8B1EF0A570251899_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_7, L_8, NULL);
		V_2 = L_7;
		V_3 = 0;
		goto IL_0071;
	}

IL_0039:
	{
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (int32_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		MethodInfo_t* L_13 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		int32_t L_16 = V_4;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		NullCheck(L_13);
		RuntimeObject* L_19;
		L_19 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_13, NULL, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m9D61E661685855C6CDC6C84B3DDDB1BF2754CF2B(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_19, StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var)))), NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_006c;
		}
	}
	{
		V_6 = (bool)1;
		goto IL_007d;
	}

IL_006c:
	{
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0071:
	{
		int32_t L_23 = V_3;
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_24 = V_2;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0039;
		}
	}
	{
	}

IL_0078:
	{
		V_6 = (bool)0;
		goto IL_007d;
	}

IL_007d:
	{
		bool L_25 = V_6;
		return L_25;
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::get_CanRedirectNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_get_CanRedirectNativeLogs_m1EEC26D9564564880A37D4DCBE6D4E288CD6C7DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* L_0 = ((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42(L_0, MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0055;
	}

IL_0013:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_4);
		FieldInfo_t* L_5;
		L_5 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_4, _stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B, NULL);
		V_0 = L_5;
		FieldInfo_t* L_6 = V_0;
		bool L_7;
		L_7 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_6, (FieldInfo_t*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		FieldInfo_t* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m9D61E661685855C6CDC6C84B3DDDB1BF2754CF2B(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_10, StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var)))), NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0055;
	}

IL_0050:
	{
	}

IL_0051:
	{
		V_2 = (bool)1;
		goto IL_0055;
	}

IL_0055:
	{
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4 (int32_t ___0_logLevel, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* Firebase.Platform.PlatformLogLevel Firebase.Platform.IFirebaseAppUtils::GetLogLevel() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = ___0_logLevel;
		int32_t L_3 = V_0;
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0055;
	}

IL_0016:
	{
		int32_t L_5 = ___0_logLevel;
		V_2 = L_5;
		int32_t L_6 = V_2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0038;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_004a;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0055;
	}

IL_0038:
	{
		String_t* L_7 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		goto IL_0055;
	}

IL_0041:
	{
		String_t* L_8 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_8, NULL);
		goto IL_0055;
	}

IL_004a:
	{
		String_t* L_9 = ___1_message;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		goto IL_0055;
	}

IL_0053:
	{
		goto IL_0055;
	}

IL_0055:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger__ctor_m6AEAF49EDF57271E2BFBC238EACBCDA92CFB000B (FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger__cctor_mD2B909D7406D19E8777175B1494DB1CAE549B159 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m0F425143BB2FEABADE7FD419C02C0545941BD633_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_0, NULL, (intptr_t)((void*)FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m0F425143BB2FEABADE7FD419C02C0545941BD633_RuntimeMethod_var), NULL);
		MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* L_1 = (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*)il2cpp_codegen_object_new(MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083(L_1, L_0, MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var);
		((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	bool V_1 = false;
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC(NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_001b:
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_4 = V_0;
		V_2 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_5 = V_2;
		return L_5;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnEnable_mF2CFA86462A454B9C0206AAC3ACEF950FF3E3631 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_Update_m7DEE72CA7C251D41465F5997BA4455A33B429A6C (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	bool V_1 = false;
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		float L_3;
		L_3 = PlatformInformation_get_RealtimeSinceStartup_m04B2E9239B3CF640EAE374E1AFA74B6EF3F2F76A(NULL);
		PlatformInformation_set_RealtimeSinceStartupSafe_mF2DD01812E69B3C0A7B9821BFB764002CC26FABE_inline(L_3, NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_4 = V_0;
		NullCheck(L_4);
		FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138(L_4, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnApplicationFocus_m47DCA45653CBECEC3CD2ED4AA93CFED775F7508C (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, bool ___0_hasFocus, const RuntimeMethod* method) 
{
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	bool V_1 = false;
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_3 = V_0;
		bool L_4 = ___0_hasFocus;
		NullCheck(L_3);
		FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054(L_3, L_4, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnDestroy_m92D958429C5A513836C9CD93BC6A79F1E3632BB5 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_OnMonoBehaviourDestroyed_mA8F66B5127AFF337B3D27EE1EC59D27053A6534B(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour__ctor_mE65E0F0D449146C96EF81AB694A08D627CE61870 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral896A2A117718A23135B6923C80A00C014390CF99);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = il2cpp_codegen_get_type(_stringLiteral896A2A117718A23135B6923C80A00C014390CF99, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8_RuntimeMethod_var);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Type_t* L_2 = V_1;
		return L_2;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_mD79BA67FB01EE951514BBA6B0137A707DE923624 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	PropertyInfo_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, (Type_t*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		PropertyInfo_t* L_5;
		L_5 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_4, _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1, NULL);
		V_2 = L_5;
		PropertyInfo_t* L_6 = V_2;
		bool L_7;
		L_7 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_6, (PropertyInfo_t*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		PropertyInfo_t* L_9 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_9, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		V_4 = ((*(bool*)((bool*)(bool*)UnBox(L_10, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_0042;
	}

IL_003c:
	{
	}

IL_003d:
	{
		V_4 = (bool)1;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_11 = V_4;
		return L_11;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDC0D88CA2E26A59A8DA923E16A729B8F3894F432 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	PropertyInfo_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, (Type_t*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		PropertyInfo_t* L_5;
		L_5 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_4, _stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE, NULL);
		V_2 = L_5;
		PropertyInfo_t* L_6 = V_2;
		bool L_7;
		L_7 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_6, (PropertyInfo_t*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003c;
		}
	}
	{
		PropertyInfo_t* L_9 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_9, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		V_4 = ((*(bool*)((bool*)(bool*)UnBox(L_10, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
		goto IL_0042;
	}

IL_003c:
	{
	}

IL_003d:
	{
		V_4 = (bool)1;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_11 = V_4;
		return L_11;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_mA98611A34FD3DB10A0E61CA4CCB33863B16877E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, (Type_t*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		FieldInfo_t* L_5;
		L_5 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_4, _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var), NULL);
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3(L_5, L_6, NULL, (bool)1, _stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7, NULL);
	}

IL_0038:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_m9588295D3A7A49CA6DA4E8D838245967DD0F7DDC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, (Type_t*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		FieldInfo_t* L_5;
		L_5 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_4, _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var), NULL);
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3(L_5, L_6, NULL, (bool)0, (String_t*)NULL, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC(NULL);
		NullCheck(L_0);
		FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340 (bool ___0_start, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_PlayModeStateChanged_m8598B90E768E7F3792A8F5621A642B11B6D92D48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C266F303F178CE0931272538E30F328A704472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69A7A27A97142E232EA28BA2557E507697865243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	EventInfo_t* V_2 = NULL;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	MethodInfo_t* V_6 = NULL;
	Delegate_t* V_7 = NULL;
	bool V_8 = false;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, (Type_t*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00ca;
		}
	}
	{
		Type_t* L_4 = V_0;
		NullCheck(L_4);
		EventInfo_t* L_5;
		L_5 = Type_GetEvent_mB4D71EF747D967D102846CB4FADA5DA0291E6A83(L_4, _stringLiteral69A7A27A97142E232EA28BA2557E507697865243, NULL);
		V_2 = L_5;
		EventInfo_t* L_6 = V_2;
		bool L_7;
		L_7 = EventInfo_op_Inequality_m4B5352D516359B10994084CAE273A1EF64E50B40(L_6, (EventInfo_t*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00a9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = il2cpp_codegen_get_type(_stringLiteral28C266F303F178CE0931272538E30F328A704472, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340_RuntimeMethod_var);
		V_4 = L_9;
		Type_t* L_10 = V_4;
		bool L_11;
		L_11 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_10, (Type_t*)NULL, NULL);
		V_5 = L_11;
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00a8;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NullCheck(L_14);
		MethodInfo_t* L_15;
		L_15 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_14, _stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2, ((int32_t)40), NULL);
		V_6 = L_15;
		MethodInfo_t* L_16 = V_6;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18 = L_17;
		Type_t* L_19 = V_4;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_19);
		NullCheck(L_16);
		MethodInfo_t* L_20;
		L_20 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(40 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_16, L_18);
		V_6 = L_20;
		EventInfo_t* L_21 = V_2;
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker0< Type_t* >::Invoke(19 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, L_21);
		MethodInfo_t* L_23 = V_6;
		Delegate_t* L_24;
		L_24 = Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7(L_22, NULL, L_23, NULL);
		V_7 = L_24;
		bool L_25 = ___0_start;
		V_8 = L_25;
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_009a;
		}
	}
	{
		EventInfo_t* L_27 = V_2;
		Delegate_t* L_28 = V_7;
		NullCheck(L_27);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(21 /* System.Void System.Reflection.EventInfo::AddEventHandler(System.Object,System.Delegate) */, L_27, NULL, L_28);
		goto IL_00a6;
	}

IL_009a:
	{
		EventInfo_t* L_29 = V_2;
		Delegate_t* L_30 = V_7;
		NullCheck(L_29);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(20 /* System.Void System.Reflection.EventInfo::RemoveEventHandler(System.Object,System.Delegate) */, L_29, NULL, L_30);
	}

IL_00a6:
	{
		goto IL_00ca;
	}

IL_00a8:
	{
	}

IL_00a9:
	{
		Type_t* L_31 = V_0;
		NullCheck(L_31);
		FieldInfo_t* L_32;
		L_32 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_31, _stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_33 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_33, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_PlayModeStateChanged_m8598B90E768E7F3792A8F5621A642B11B6D92D48_RuntimeMethod_var), NULL);
		bool L_34 = ___0_start;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3(L_32, L_33, NULL, L_34, (String_t*)NULL, NULL);
	}

IL_00ca:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::PlayModeStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_PlayModeStateChanged_m8598B90E768E7F3792A8F5621A642B11B6D92D48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		bool L_2;
		L_2 = FirebaseEditorDispatcher_get_EditorIsPlaying_mD79BA67FB01EE951514BBA6B0137A707DE923624(NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		FirebaseEditorDispatcher_StopEditorUpdate_m9588295D3A7A49CA6DA4E8D838245967DD0F7DDC(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_4;
		L_4 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC(NULL);
		NullCheck(L_4);
		FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246(L_4, NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_5;
		L_5 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC(NULL);
		NullCheck(L_5);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(L_5, (bool)1, NULL);
		goto IL_0074;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_6;
		L_6 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0050;
		}
	}
	{
		bool L_8;
		L_8 = FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDC0D88CA2E26A59A8DA923E16A729B8F3894F432(NULL);
		G_B8_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_0051;
	}

IL_0050:
	{
		G_B8_0 = 0;
	}

IL_0051:
	{
		V_1 = (bool)G_B8_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_10;
		L_10 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC(NULL);
		NullCheck(L_10);
		FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451(L_10, NULL);
		FirebaseEditorDispatcher_StartEditorUpdate_mA98611A34FD3DB10A0E61CA4CCB33863B16877E9(NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_11;
		L_11 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC(NULL);
		NullCheck(L_11);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(L_11, (bool)0, NULL);
	}

IL_0074:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3 (FieldInfo_t* ___0_eventField, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_callback, RuntimeObject* ___2_target, bool ___3_add, String_t* ___4_errorMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Delegate_t* V_1 = NULL;
	bool V_2 = false;
	Delegate_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Delegate_t* V_6 = NULL;
	bool V_7 = false;
	{
		FieldInfo_t* L_0 = ___0_eventField;
		bool L_1;
		L_1 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_0, (FieldInfo_t*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0092;
		}
	}
	{
		FieldInfo_t* L_3 = ___0_eventField;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_3, NULL);
		V_1 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_4, Delegate_t_il2cpp_TypeInfo_var));
		bool L_5 = ___3_add;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		FieldInfo_t* L_7 = ___0_eventField;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_7);
		RuntimeObject* L_9 = ___2_target;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___1_callback;
		NullCheck(L_10);
		MethodInfo_t* L_11;
		L_11 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_10, NULL);
		Delegate_t* L_12;
		L_12 = Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7(L_8, L_9, L_11, NULL);
		V_3 = L_12;
		Delegate_t* L_13 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(Delegate_t*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		FieldInfo_t* L_15 = ___0_eventField;
		Delegate_t* L_16 = V_1;
		Delegate_t* L_17 = V_3;
		Delegate_t* L_18;
		L_18 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_16, L_17, NULL);
		NullCheck(L_15);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_15, NULL, L_18, NULL);
		goto IL_005e;
	}

IL_0053:
	{
		FieldInfo_t* L_19 = ___0_eventField;
		Delegate_t* L_20 = V_3;
		NullCheck(L_19);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_19, NULL, L_20, NULL);
	}

IL_005e:
	{
		goto IL_00ad;
	}

IL_0060:
	{
		Delegate_t* L_21 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(Delegate_t*)L_21) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0091;
		}
	}
	{
		FieldInfo_t* L_23 = ___0_eventField;
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_23);
		RuntimeObject* L_25 = ___2_target;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = ___1_callback;
		NullCheck(L_26);
		MethodInfo_t* L_27;
		L_27 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_26, NULL);
		Delegate_t* L_28;
		L_28 = Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7(L_24, L_25, L_27, NULL);
		V_6 = L_28;
		FieldInfo_t* L_29 = ___0_eventField;
		Delegate_t* L_30 = V_1;
		Delegate_t* L_31 = V_6;
		Delegate_t* L_32;
		L_32 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_30, L_31, NULL);
		NullCheck(L_29);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_29, NULL, L_32, NULL);
		goto IL_00ad;
	}

IL_0091:
	{
	}

IL_0092:
	{
		String_t* L_33 = ___4_errorMessage;
		bool L_34;
		L_34 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_33, NULL);
		V_7 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_36 = ___4_errorMessage;
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(4, L_36, NULL);
	}

IL_00ad:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Terminate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Terminate_m60BF7BDCEFBD8E25FFB41DEE28CF787B4B9B1E9C (bool ___0_isPlayMode, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340((bool)0, NULL);
		bool L_0 = ___0_isPlayMode;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		FirebaseEditorDispatcher_StopEditorUpdate_m9588295D3A7A49CA6DA4E8D838245967DD0F7DDC(NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher__ctor_m393C0846188EFFC3FDAB3896A9B1FE9BCF196032 (FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_m5B36D38B2B9B77779577C1903669B0C4622BC0A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* L_0 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetWriteablePath(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetWriteablePath_m5C52729FFE052FECB9679E14ED42579744616426 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetDatabaseUrl_mC4D6A6B6F7A6C855DC5BBFA6E46D0C317CA9DF72 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, String_t* ___1_databaseUrl, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_app;
		String_t* L_1 = ___1_databaseUrl;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 0, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetDatabaseUrl_m2B0BEFE705912EF00E39B23ABE51BA2046A28D5B (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B7_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 0, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_5 = ___0_app;
		G_B3_0 = ((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_7 = ___0_app;
		NullCheck(L_7);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8;
		L_8 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri Firebase.Platform.IFirebaseAppPlatform::get_DatabaseUrl() */, IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228_il2cpp_TypeInfo_var, L_7);
		V_2 = L_8;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Uri_op_Inequality_m64BE981CDF88B751677B80D883B201BF3CFD83F7(L_9, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		goto IL_003b;
	}

IL_0035:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		G_B7_0 = L_12;
	}

IL_003b:
	{
		V_0 = G_B7_0;
	}

IL_003d:
	{
		String_t* L_13 = V_0;
		V_3 = L_13;
		goto IL_0041;
	}

IL_0041:
	{
		String_t* L_14 = V_3;
		return L_14;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorP12Password(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorP12Password_m98ADE552ACD32D8A882116B8AA4426A103532561 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, String_t* ___1_p12Password, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_app;
		String_t* L_1 = ___1_p12Password;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 2, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetEditorP12Password(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetEditorP12Password_m24C86EB13AB4DF5A60DCCCD8AE5593D294A6C322 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 2, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorP12FileName_m54E25CCCD2E61CDC34E8E195C570FC9F0F8621BD (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, String_t* ___1_p12Filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_app;
		String_t* L_1 = ___1_p12Filename;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 1, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetEditorP12FileName_mB69AC105451EE34D6EFBBAA96A8989904A6A402D (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 1, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorServiceAccountEmail(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorServiceAccountEmail_mEA49372C5BDD4A53B37530C3792D29CB87CA6A1D (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, String_t* ___1_email, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_app;
		String_t* L_1 = ___1_email;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 3, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetEditorServiceAccountEmail(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetEditorServiceAccountEmail_mCFD5F80F3B0452C3DEEE9548AC6582E76344ED92 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 3, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetCertPemFile(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetCertPemFile_mF510037EABCD9EA1708F7954112B9F2F41B73D59 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, String_t* ___1_certName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_app;
		String_t* L_1 = ___1_certName;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 4, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetCertPemFile(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetCertPemFile_m15B99A9210DD875A7E0DC0D4D6FB9328889BBB92 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 4, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		String_t* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetCertUpdateUrl(Firebase.Platform.IFirebaseAppPlatform,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetCertUpdateUrl_m0C2A2179D5D8C04CD240FDD9E06611C0DD6649F1 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_certUrl, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_app;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___1_certUrl;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_3 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 5, L_2, L_3, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.Uri Firebase.Platform.Default.AppConfigExtensions::GetCertUpdateUrl(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* AppConfigExtensions_GetCertUpdateUrl_mB875B5B57538717AC09D4D353B67F65E8876DE89 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_app;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 5, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___DefaultUpdateUrl_0;
		V_2 = L_6;
		goto IL_002a;
	}

IL_0021:
	{
		String_t* L_7 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_8, L_7, NULL);
		V_2 = L_8;
		goto IL_002a;
	}

IL_002a:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_9 = V_2;
		return L_9;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__cctor_m6837C81C09BF5052B844FD3B68AC8A445498B12E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_0, _stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___DefaultUpdateUrl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___DefaultUpdateUrl_0), (void*)L_0);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Default_1 = _stringLiteral947107DA743C5DEC8247B198CC466791C8222A85;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Default_1), (void*)_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Sync_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Sync_2), (void*)L_1);
		AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* L_2 = (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48*)il2cpp_codegen_object_new(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F(L_2, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3), (void*)L_2);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_3 = (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*)il2cpp_codegen_object_new(Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C(L_3, Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.DateTime Firebase.Platform.Default.SystemClock::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SystemClock_get_Now_mF545A8CFF00D1FA486FF4B2FD894284B00882370 (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		return L_1;
	}
}
// System.DateTime Firebase.Platform.Default.SystemClock::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SystemClock_get_UtcNow_m469D7DBAE9F16FB45B4EB066C59D08CBA1F493E8 (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Platform.Default.SystemClock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__cctor_m99317E7A10E85BC5C8A63D709A1FD257B46F06DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* L_0 = (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13*)il2cpp_codegen_object_new(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A(L_0, NULL);
		((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m549B8B6A3C1F683B8498D5A3C928CB1A0D973BEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* L_0 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.String Firebase.Platform.Default.UnityConfigExtensions::GetWriteablePath(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityConfigExtensions_GetWriteablePath_m5D26360887C19296CB6F5854A631D0D22F4D69BE (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, RuntimeObject* ___0_app, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetWriteablePathU3Eb__3_0_m6BF2953246439D404B2CAB4F328657BA7D8FD05C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* G_B2_0 = NULL;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_0 = ((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var);
		U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA* L_2 = ((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_3 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CGetWriteablePathU3Eb__3_0_m6BF2953246439D404B2CAB4F328657BA7D8FD05C_RuntimeMethod_var), NULL);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_4 = L_3;
		((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9__3_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5(G_B2_0, FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0028;
	}

IL_0028:
	{
		String_t* L_6 = V_0;
		return L_6;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::SetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions_SetEditorP12FileName_m235577E05D33C175FAD8CEDEB62EA3B6305C805B (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, RuntimeObject* ___0_app, String_t* ___1_p12Filename, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSetEditorP12FileNameU3Eb__4_0_m5077158F730DC3B25C0D5EBB222CE9CAF4745730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BE6E51A121FE961DE7A83B45B4640474186C9EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5669C0E0C44A1066B0D5F3BDB19A31F49AAFFCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* G_B2_0 = NULL;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* G_B1_0 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_0 = ((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_2;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var);
		U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA* L_2 = ((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_3 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CSetEditorP12FileNameU3Eb__4_0_m5077158F730DC3B25C0D5EBB222CE9CAF4745730_RuntimeMethod_var), NULL);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_4 = L_3;
		((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_2), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5(G_B2_0, FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		V_0 = L_5;
		String_t* L_6 = ___1_p12Filename;
		V_1 = L_6;
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (L_8)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_9, NULL);
		G_B5_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_16 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		V_3 = L_16;
		String_t* L_17;
		L_17 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_15;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3BE6E51A121FE961DE7A83B45B4640474186C9EB);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3BE6E51A121FE961DE7A83B45B4640474186C9EB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_18;
		Il2CppChar L_20 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		V_3 = L_20;
		String_t* L_21;
		L_21 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_3), NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_19;
		String_t* L_23 = V_1;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_23);
		String_t* L_24;
		L_24 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_22, NULL);
		V_1 = L_24;
	}

IL_007e:
	{
		String_t* L_25 = V_1;
		bool L_26;
		L_26 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_25, NULL);
		if (L_26)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_27 = V_1;
		bool L_28;
		L_28 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_27, NULL);
		G_B10_0 = ((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		goto IL_0092;
	}

IL_0091:
	{
		G_B10_0 = 0;
	}

IL_0092:
	{
		V_4 = (bool)G_B10_0;
		bool L_29 = V_4;
		if (!L_29)
		{
			goto IL_00ad;
		}
	}
	{
		String_t* L_30 = ___1_p12Filename;
		String_t* L_31 = V_1;
		String_t* L_32;
		L_32 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_30, _stringLiteralF5669C0E0C44A1066B0D5F3BDB19A31F49AAFFCC, L_31, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(3, L_32, NULL);
	}

IL_00ad:
	{
		RuntimeObject* L_33 = ___0_app;
		String_t* L_34 = V_1;
		AppConfigExtensions_SetEditorP12FileName_m54E25CCCD2E61CDC34E8E195C570FC9F0F8621BD(__this, L_33, L_34, NULL);
		return;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854 (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__cctor_m05339F49C7C012366A9AF76FA2844DE8A6C203BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* L_0 = (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152*)il2cpp_codegen_object_new(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854(L_0, NULL);
		((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.Default.UnityConfigExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2842FA2E841FC4715BC9C764A188E9ADE6B77DC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA* L_0 = (U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA*)il2cpp_codegen_object_new(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m58E1D1CBE36FBA6715806B230C9E19DBEA8D00A6(L_0, NULL);
		((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m58E1D1CBE36FBA6715806B230C9E19DBEA8D00A6 (U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Firebase.Platform.Default.UnityConfigExtensions/<>c::<GetWriteablePath>b__3_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetWriteablePathU3Eb__3_0_m6BF2953246439D404B2CAB4F328657BA7D8FD05C (U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Firebase.Platform.Default.UnityConfigExtensions/<>c::<SetEditorP12FileName>b__4_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CSetEditorP12FileNameU3Eb__4_0_m5077158F730DC3B25C0D5EBB222CE9CAF4745730 (U3CU3Ec_t414BA4A9B09005DB0525F32BE9DE0F47D0B97BEA* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_0 = __this->___m_innerExceptions_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_state, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Clock_mD344BF4787A29D1C67D08109D75F7481DD5CEB74_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsPlayModeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPlayModeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CHasFocusU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mC81DFF9F890B338F76B7499DCAF8D738B7D93AEE_inline (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mF2DD01812E69B3C0A7B9821BFB764002CC26FABE_inline (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_value;
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_sender, RuntimeObject* ___1_e, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_e, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
