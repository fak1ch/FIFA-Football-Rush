#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.EventHandler`1<AppodealStack.ConsentManagement.Common.ConsentEventArgs>
struct EventHandler_1_tA4EC2945999A62623C374C17274126CA76646ACA;
// System.EventHandler`1<AppodealStack.ConsentManagement.Common.ConsentManagerExceptionEventArgs>
struct EventHandler_1_tE53C1941F3FF01A451E47CFE1B3EAF48289027AB;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.List`1<AppodealStack.ConsentManagement.Common.IVendor>
struct List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// AppodealStack.ConsentManagement.Common.IVendor[]
struct IVendorU5BU5D_t26D63CFD274A4A6C551E576862044CB1C387F33E;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent
struct AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC;
// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm
struct AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084;
// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager
struct AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA;
// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException
struct AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor
struct AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357;
// AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder
struct AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks
struct ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB;
// AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks
struct ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// AppodealStack.ConsentManagement.Common.IConsent
struct IConsent_t2CACE48343EC415708492EA53D1AE3E0DB4A75E0;
// AppodealStack.ConsentManagement.Common.IConsentFormListener
struct IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034;
// AppodealStack.ConsentManagement.Common.IConsentFormProxyListener
struct IConsentFormProxyListener_t258A2A37B735EB9493B45E1E66899D780E507B94;
// AppodealStack.ConsentManagement.Common.IConsentInfoProxyListener
struct IConsentInfoProxyListener_t0EB7089A900F66A4617A6D7747F35AD801DDCE93;
// AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener
struct IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// AppodealStack.ConsentManagement.Common.IVendor
struct IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm
struct ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99;
// AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo
struct ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7;

IL2CPP_EXTERN_C RuntimeClass* AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentManagerStorage_t76393D6CADED404F58F9C10E266A3A7B6FF124F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentFormProxyListener_t258A2A37B735EB9493B45E1E66899D780E507B94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentInfoProxyListener_t0EB7089A900F66A4617A6D7747F35AD801DDCE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00288B513100362780858CB74360F1428A41E103;
IL2CPP_EXTERN_C String_t* _stringLiteral027D4E65C85EAD446CEECBDFC398B7B5FE00E363;
IL2CPP_EXTERN_C String_t* _stringLiteral04DB4E8C53CAF2E5899153EC73654AF132BAC651;
IL2CPP_EXTERN_C String_t* _stringLiteral07AFF70E2D7872F6BAFA0FEBCA5A0193BB1D7657;
IL2CPP_EXTERN_C String_t* _stringLiteral08B092F55F0B0E4868121E5EDCDF74CCF10F1760;
IL2CPP_EXTERN_C String_t* _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4;
IL2CPP_EXTERN_C String_t* _stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098;
IL2CPP_EXTERN_C String_t* _stringLiteral1BC63FF421F62EE96441FB3B559C7EE9380F0C81;
IL2CPP_EXTERN_C String_t* _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251;
IL2CPP_EXTERN_C String_t* _stringLiteral244940E192616C6FDCE2CD494CC5BE9AA60F5CD8;
IL2CPP_EXTERN_C String_t* _stringLiteral261D65DB27F836D37BA4527898B196866E06A9F3;
IL2CPP_EXTERN_C String_t* _stringLiteral26A612E5A76C2D46A0AAC053EB617D1E0DC06232;
IL2CPP_EXTERN_C String_t* _stringLiteral2FCE983D70DEDD25C3565391BB2267C1FEACB998;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral41B244E6AA749FD04A6C56697A4AFF71754B6BC5;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral45966EBE84A62CCDA3936D340CB1080CFD8C5245;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4FAEDD3BBBF3EB1586E5B015540051A763913F77;
IL2CPP_EXTERN_C String_t* _stringLiteral56BF390C9F045F05BFBDC34198159B67E34AE0FC;
IL2CPP_EXTERN_C String_t* _stringLiteral58B7C1DC5E9373231313E1ED4D24D979B8F1D91F;
IL2CPP_EXTERN_C String_t* _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297;
IL2CPP_EXTERN_C String_t* _stringLiteral58EE23AEAB2EB6F53978479F1509F36CD454C675;
IL2CPP_EXTERN_C String_t* _stringLiteral5D4E12AB663BD905E8A54DBA4CEA6FA69D149959;
IL2CPP_EXTERN_C String_t* _stringLiteral62C4F290035999D38AC685022DE08073F5D9F532;
IL2CPP_EXTERN_C String_t* _stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7;
IL2CPP_EXTERN_C String_t* _stringLiteral6A7A90C709778DF9F03F3AAA45575C47062C1293;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80;
IL2CPP_EXTERN_C String_t* _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A;
IL2CPP_EXTERN_C String_t* _stringLiteral80A4A9B5AC5F2DD1275727E79AF411332396C2ED;
IL2CPP_EXTERN_C String_t* _stringLiteral831E35F4C37C6166A3836B738CFDF8B769E60598;
IL2CPP_EXTERN_C String_t* _stringLiteral8AEA598D13F7E4CB0C36E992D1EEA8F8D0067C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069;
IL2CPP_EXTERN_C String_t* _stringLiteral92CDA416B74E86920647DCDA5C6EDA8E3FF90663;
IL2CPP_EXTERN_C String_t* _stringLiteralA41AAF808A08EAD6EDB62C7F765EE1927776B9F9;
IL2CPP_EXTERN_C String_t* _stringLiteralA67CCEC913A1098D6B12516502C7BC0754EE44F9;
IL2CPP_EXTERN_C String_t* _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728;
IL2CPP_EXTERN_C String_t* _stringLiteralA75B29E45031776B05134F86F9681A22468B2F8C;
IL2CPP_EXTERN_C String_t* _stringLiteralB23E706FF00D633FB41D1C79E76AF99189BFEBA0;
IL2CPP_EXTERN_C String_t* _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95;
IL2CPP_EXTERN_C String_t* _stringLiteralB93088E8DD61CBB09F8EF1207707651A71283BB9;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8CE884DE2FF26EDD57452E57A0CA7475823B0C;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA282B7E697F69044EC81FC75BBBF68360BE4CF;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralBFD316D9D52164FAF250D4794B931D20DF82B201;
IL2CPP_EXTERN_C String_t* _stringLiteralC13AE9B6094CDFEEBC397FAFE92AB403BCD4A6EC;
IL2CPP_EXTERN_C String_t* _stringLiteralC522B58E3ECA14FA374E2886C2FF83B8E8B79434;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD3B40E10455D3D9520774A2623BD1BB670D04175;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F5E7DD3ADDDD9810B44F1C52423D45DC15E47E;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FFEFC755015A9A8267A6646F80EE72E127FFF0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7AE765FF6929786919E21E65F90E7A03754C18;
IL2CPP_EXTERN_C String_t* _stringLiteralE0A00739C2E37323FB6F1942CBF96EE4AF59B5CB;
IL2CPP_EXTERN_C String_t* _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EE9D8CF7F350B2601FB896D5592C2983FF0B95;
IL2CPP_EXTERN_C String_t* _stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152;
IL2CPP_EXTERN_C String_t* _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA;
IL2CPP_EXTERN_C String_t* _stringLiteralF604593806FBB7E2744F369349751F1E96DD4B41;
IL2CPP_EXTERN_C String_t* _stringLiteralF8EAEB0A536B3E1AADAC643A31504E57FC2644AD;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidConsentManager_SetStorage_m70084B2D6E68504B754700C5BE68A02D90EED48D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE9DF0DB2AA9872D19180B3364D8EC992E6B393E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4611A4BE250DC6DE926CA62808A2DA529209F7AE_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t04CC3B17AC24D8AA54F78F1DA7F326746E19BB45 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<AppodealStack.ConsentManagement.Common.IVendor>
struct List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IVendorU5BU5D_t26D63CFD274A4A6C551E576862044CB1C387F33E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IVendorU5BU5D_t26D63CFD274A4A6C551E576862044CB1C387F33E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent
struct AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::_consent
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____consent_0;
	// AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::<NativeConsent>k__BackingField
	RuntimeObject* ___U3CNativeConsentU3Ek__BackingField_1;
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm
struct AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::_consentForm
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____consentForm_0;
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::_activity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____activity_1;
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager
struct AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::_consentManager
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____consentManager_0;
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::_activity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____activity_1;
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException
struct AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::_consentManagerException
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____consentManagerException_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor
struct AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::_vendor
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____vendor_0;
	// AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::<NativeVendor>k__BackingField
	RuntimeObject* ___U3CNativeVendorU3Ek__BackingField_1;
};

// AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder
struct AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::_vendorBuilder
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____vendorBuilder_0;
	// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::_vendor
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ____vendor_1;
};
struct Il2CppArrayBounds;

// AppodealStack.ConsentManagement.Platforms.Android.Helper
struct Helper_tAFF6DF8A687E3DB26864652EAFE58056DA5DEC0D  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm
struct ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99  : public RuntimeObject
{
	// AppodealStack.ConsentManagement.Common.IConsentFormProxyListener AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::_consentFormEventsImpl
	RuntimeObject* ____consentFormEventsImpl_2;
};

struct ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99_StaticFields
{
	// AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::_instance
	ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99* ____instance_0;
	// System.Object AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::OnLoaded
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnLoaded_3;
	// System.EventHandler`1<AppodealStack.ConsentManagement.Common.ConsentManagerExceptionEventArgs> AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::OnExceptionOccurred
	EventHandler_1_tE53C1941F3FF01A451E47CFE1B3EAF48289027AB* ___OnExceptionOccurred_4;
	// System.EventHandler AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::OnOpened
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___OnOpened_5;
	// System.EventHandler`1<AppodealStack.ConsentManagement.Common.ConsentEventArgs> AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::OnClosed
	EventHandler_1_tA4EC2945999A62623C374C17274126CA76646ACA* ___OnClosed_6;
};

// AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo
struct ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7  : public RuntimeObject
{
	// AppodealStack.ConsentManagement.Common.IConsentInfoProxyListener AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo::_consentInfoEventsImpl
	RuntimeObject* ____consentInfoEventsImpl_2;
};

struct ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7_StaticFields
{
	// AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo::_instance
	ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7* ____instance_0;
	// System.Object AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo::Lock
	RuntimeObject* ___Lock_1;
	// System.EventHandler`1<AppodealStack.ConsentManagement.Common.ConsentEventArgs> AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo::OnUpdated
	EventHandler_1_tA4EC2945999A62623C374C17274126CA76646ACA* ___OnUpdated_3;
	// System.EventHandler`1<AppodealStack.ConsentManagement.Common.ConsentManagerExceptionEventArgs> AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo::OnFailedToUpdate
	EventHandler_1_tE53C1941F3FF01A451E47CFE1B3EAF48289027AB* ___OnFailedToUpdate_4;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks
struct ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.ConsentManagement.Common.IConsentFormListener AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks
struct ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::_listener
	RuntimeObject* ____listener_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::GetConsentJavaObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsent_GetConsentJavaObject_m08523060F6808A51393A3256588BFEC7FC6CB2E4_inline (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Object AppodealStack.ConsentManagement.Platforms.Android.Helper::GetJavaObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helper_GetJavaObject_mDE1A110D1C53829AA195F261FB178DE34BBC1170 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void System.Collections.Generic.List`1<AppodealStack.ConsentManagement.Common.IVendor>::.ctor()
inline void List_1__ctor_m4611A4BE250DC6DE926CA62808A2DA529209F7AE (List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.AndroidJNI::PushLocalFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVendor__ctor_m4014B8E13849D94DA9DBAD1C94699A76BD51496E (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___vendor0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<AppodealStack.ConsentManagement.Common.IVendor>::Add(T)
inline void List_1_Add_mE9DF0DB2AA9872D19180B3364D8EC992E6B393E4_inline (List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___methodName0, ___args1, method);
}
// System.IntPtr UnityEngine.AndroidJNI::PopLocalFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609 (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99* ConsentForm_get_Instance_mD2753821AA46FC6830DCA795A485B4B7E394AE49 (const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IConsentFormProxyListener AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentForm::get_ConsentFormEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentForm_get_ConsentFormEventsImpl_m2A45FD363C6D60BB89C65419E8E34B748368DCAD (ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::.ctor(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks__ctor_m462F91001EFA1A5B6474B5EF435D67BCDEFF17C3 (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentForm_GetActivity_m589C7EB61BE940256F61156F94DD1257B981C24F (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::GetConsentFormCallback(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* AndroidConsentForm_GetConsentFormCallback_mB0478D1179C215AC584F4814AE5D8494191C8404 (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::GetConsentFormJavaObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentForm_GetConsentFormJavaObject_m8207C814F741E1996ABE25C33A3A1FF4DD5E0043_inline (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7* ConsentInfo_get_Instance_m83B58F52E26BD61A46D0F2D5930870D418C0E112 (const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Common.IConsentInfoProxyListener AppodealStack.ConsentManagement.Common.ConsentManagerCallbacks/ConsentInfo::get_ConsentInfoEventsImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConsentInfo_get_ConsentInfoEventsImpl_m0C3BF7E21B0D5E67BB8E5AA2A4519E6482D3C32F (ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::.ctor(AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInfoUpdateCallbacks__ctor_m5B89FBAABF7DD2F969935D5A625B4F60AF5DDB5A (ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetConsentManagerJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentManager_GetActivity_mCC1C6C8BC8C86D77109C2B97422DF9EEF433CF08 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) ;
// AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetConsentInfoCallback(AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* AndroidConsentManager_GetConsentInfoCallback_m28BC287D42B73E5F12004AB225B80552244A60A9 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.String AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidVendor_GetBundle_mA272C4C6B82B36E9A1F829C8163F8459DB2B4750 (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetVendorJavaObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___joConsent0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::GetConsentManagerExceptionJavaObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentManagerException_GetConsentManagerExceptionJavaObject_mF5E214AA38C38A86CE38A20AB6A133F189CBBFA1_inline (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetNativeList(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* AndroidVendor_GetNativeList_mB7FD71942F6B891034711165FF2415164DA2A616 (String_t* ___methodName0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::GetVendorBuilderJavaObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidVendorBuilder_GetVendorBuilderJavaObject_m05C968FF68D71954FF22069F4D803B100D9EF94C_inline (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::SetNativeList(System.Collections.Generic.IEnumerable`1<System.Int32>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVendorBuilder_SetNativeList_m9818A8C03688DDE0F5CCAE3808AAD797E496780F (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, RuntimeObject* ___list0, String_t* ___methodName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManagerException__ctor_mF02DFE87AFF87164F6092860A7A4C8016CACF0DA (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject0, const RuntimeMethod* method) ;
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
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::GetConsentJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsent_GetConsentJavaObject_m08523060F6808A51393A3256588BFEC7FC6CB2E4 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) 
{
	{
		// return _consent;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____consent_0;
		return L_0;
	}
}
// AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::get_NativeConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidConsent_get_NativeConsent_m43CB80E6B075EBA228E5FD512CFC8033FF10FD34 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) 
{
	{
		// public IConsent NativeConsent { get; }
		RuntimeObject* L_0 = __this->___U3CNativeConsentU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___joConsent0, const RuntimeMethod* method) 
{
	{
		// public AndroidConsent(AndroidJavaObject joConsent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _consent = joConsent;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___joConsent0;
		__this->____consent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consent_0), (void*)L_0);
		// NativeConsent = this;
		__this->___U3CNativeConsentU3Ek__BackingField_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeConsentU3Ek__BackingField_1), (void*)__this);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentZone AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::GetZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsent_GetZone_m9F93C0B2F9144203563AA32A7588A23571DDF671 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FAEDD3BBBF3EB1586E5B015540051A763913F77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62C4F290035999D38AC685022DE08073F5D9F532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// var zone = ConsentZone.Unknown;
		V_0 = 0;
		// switch (GetConsentJavaObject().Call<AndroidJavaObject>("getZone").Call<string>("name"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsent_GetConsentJavaObject_m08523060F6808A51393A3256588BFEC7FC6CB2E4_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral4FAEDD3BBBF3EB1586E5B015540051A763913F77, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098, NULL);
		if (L_6)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral62C4F290035999D38AC685022DE08073F5D9F532, NULL);
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152, NULL);
		if (L_12)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_006b;
	}

IL_005d:
	{
		// zone = ConsentZone.Unknown;
		V_0 = 0;
		// break;
		goto IL_006b;
	}

IL_0061:
	{
		// zone = ConsentZone.None;
		V_0 = 1;
		// break;
		goto IL_006b;
	}

IL_0065:
	{
		// zone = ConsentZone.Gdpr;
		V_0 = 2;
		// break;
		goto IL_006b;
	}

IL_0069:
	{
		// zone = ConsentZone.Ccpa;
		V_0 = 3;
	}

IL_006b:
	{
		// return zone;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentStatus AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::GetStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsent_GetStatus_m874CEB8301F393F1713C7DBCEB44C266DFE9A265 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04DB4E8C53CAF2E5899153EC73654AF132BAC651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41AAF808A08EAD6EDB62C7F765EE1927776B9F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC8CE884DE2FF26EDD57452E57A0CA7475823B0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FFEFC755015A9A8267A6646F80EE72E127FFF0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// var status = ConsentStatus.Unknown;
		V_0 = 0;
		// switch (GetConsentJavaObject().Call<AndroidJavaObject>("getStatus").Call<string>("name"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsent_GetConsentJavaObject_m08523060F6808A51393A3256588BFEC7FC6CB2E4_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralBC8CE884DE2FF26EDD57452E57A0CA7475823B0C, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098, NULL);
		if (L_6)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralA41AAF808A08EAD6EDB62C7F765EE1927776B9F9, NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralD4FFEFC755015A9A8267A6646F80EE72E127FFF0, NULL);
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteral04DB4E8C53CAF2E5899153EC73654AF132BAC651, NULL);
		if (L_12)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_006b;
	}

IL_005d:
	{
		// status = ConsentStatus.Unknown;
		V_0 = 0;
		// break;
		goto IL_006b;
	}

IL_0061:
	{
		// status = ConsentStatus.NonPersonalized;
		V_0 = 1;
		// break;
		goto IL_006b;
	}

IL_0065:
	{
		// status = ConsentStatus.PartlyPersonalized;
		V_0 = 2;
		// break;
		goto IL_006b;
	}

IL_0069:
	{
		// status = ConsentStatus.Personalized;
		V_0 = 3;
	}

IL_006b:
	{
		// return status;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentAuthorizationStatus AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::GetAuthorizationStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsent_GetAuthorizationStatus_m007649C61B7A141A99138E8AF01B733C989E7303 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8EAEB0A536B3E1AADAC643A31504E57FC2644AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[APDUnity] [Consent] GetAuthorizationStatus() not supported on Android platform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF8EAEB0A536B3E1AADAC643A31504E57FC2644AD, NULL);
		// return ConsentAuthorizationStatus.NotDetermined;
		return (int32_t)(0);
	}
}
// AppodealStack.ConsentManagement.Common.HasConsent AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::HasConsentForVendor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsent_HasConsentForVendor_m6F2F4441B76A8E4F898566BF8882349594A6B215 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, String_t* ___bundle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56BF390C9F045F05BFBDC34198159B67E34AE0FC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var hasConsent = HasConsent.Unknown;
		V_0 = 0;
		// switch (GetConsentJavaObject().Call<bool>("hasConsentForVendor", Helper.GetJavaObject(bundle)))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsent_GetConsentJavaObject_m08523060F6808A51393A3256588BFEC7FC6CB2E4_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___bundle0;
		RuntimeObject* L_4;
		L_4 = Helper_GetJavaObject_mDE1A110D1C53829AA195F261FB178DE34BBC1170(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral56BF390C9F045F05BFBDC34198159B67E34AE0FC, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// hasConsent = HasConsent.True;
		V_0 = 1;
		// break;
		goto IL_0029;
	}

IL_0027:
	{
		// hasConsent = HasConsent.False;
		V_0 = 2;
	}

IL_0029:
	{
		// return hasConsent;
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Collections.Generic.List`1<AppodealStack.ConsentManagement.Common.IVendor> AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::GetAcceptedVendors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868* AndroidConsent_GetAcceptedVendors_mF6C329D6081A1F7FC673033370286E0B306CE7EF (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE9DF0DB2AA9872D19180B3364D8EC992E6B393E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4611A4BE250DC6DE926CA62808A2DA529209F7AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFD316D9D52164FAF250D4794B931D20DF82B201);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	int32_t V_2 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	{
		// var vendors = new List<IVendor>();
		List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868* L_0 = (List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868*)il2cpp_codegen_object_new(List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m4611A4BE250DC6DE926CA62808A2DA529209F7AE(L_0, List_1__ctor_m4611A4BE250DC6DE926CA62808A2DA529209F7AE_RuntimeMethod_var);
		V_0 = L_0;
		// AndroidJNI.PushLocalFrame(100);
		int32_t L_1;
		L_1 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)100), NULL);
		// using (var joPurposeIdsList = GetConsentJavaObject().Call<AndroidJavaObject>("getAcceptedVendors"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidConsent_GetConsentJavaObject_m08523060F6808A51393A3256588BFEC7FC6CB2E4_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteralBFD316D9D52164FAF250D4794B931D20DF82B201, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
					if (!L_5)
					{
						goto IL_007d;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_007d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// for (var i = 0; i < joPurposeIdsList.Call<int>("size"); i++)
				V_2 = 0;
				goto IL_005f_1;
			}

IL_0028_1:
			{
				// using (var vendor = joPurposeIdsList.Call<AndroidJavaObject>("get", i))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
				int32_t L_10 = V_2;
				int32_t L_11 = L_10;
				RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
				NullCheck(L_9);
				ArrayElementTypeCheck (L_9, L_12);
				(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
				NullCheck(L_7);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
				L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_9, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				V_3 = L_13;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0051_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_3;
							if (!L_14)
							{
								goto IL_005a_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_3;
							NullCheck(L_15);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_15);
						}

IL_005a_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// vendors.Add((new AndroidVendor(vendor)));
					List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868* L_16 = V_0;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = V_3;
					AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* L_18 = (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357*)il2cpp_codegen_object_new(AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var);
					NullCheck(L_18);
					AndroidVendor__ctor_m4014B8E13849D94DA9DBAD1C94699A76BD51496E(L_18, L_17, NULL);
					NullCheck(L_16);
					List_1_Add_mE9DF0DB2AA9872D19180B3364D8EC992E6B393E4_inline(L_16, L_18, List_1_Add_mE9DF0DB2AA9872D19180B3364D8EC992E6B393E4_RuntimeMethod_var);
					// }
					goto IL_005b_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005b_1:
			{
				// for (var i = 0; i < joPurposeIdsList.Call<int>("size"); i++)
				int32_t L_19 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			}

IL_005f_1:
			{
				// for (var i = 0; i < joPurposeIdsList.Call<int>("size"); i++)
				int32_t L_20 = V_2;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22;
				L_22 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_21);
				int32_t L_23;
				L_23 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_21, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, L_22, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
				if ((((int32_t)L_20) < ((int32_t)L_23)))
				{
					goto IL_0028_1;
				}
			}
			{
				// }
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		// AndroidJNI.PopLocalFrame(IntPtr.Zero);
		intptr_t L_24 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_25;
		L_25 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(L_24, NULL);
		// return vendors;
		List_1_tE836F97333E7EC048D05C8E94C4AB58E94A17868* L_26 = V_0;
		return L_26;
	}
}
// System.String AppodealStack.ConsentManagement.Platforms.Android.AndroidConsent::GetIabConsentString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidConsent_GetIabConsentString_mAD6C5ED81F9CCF8822C2E5EB037E0165B7722F84 (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4E12AB663BD905E8A54DBA4CEA6FA69D149959);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetConsentJavaObject().Call<string>("getIABConsentString");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsent_GetConsentJavaObject_m08523060F6808A51393A3256588BFEC7FC6CB2E4_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral5D4E12AB663BD905E8A54DBA4CEA6FA69D149959, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
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
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentForm_GetActivity_m589C7EB61BE940256F61156F94DD1257B981C24F (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B2_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B1_0 = NULL;
	{
		// return _activity ?? (_activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____activity_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0027;
		}
	}
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3;
		V_0 = L_4;
		__this->____activity_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activity_1), (void*)L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0027:
	{
		return G_B2_0;
	}
}
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::GetConsentFormJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentForm_GetConsentFormJavaObject_m8207C814F741E1996ABE25C33A3A1FF4DD5E0043 (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) 
{
	{
		// return _consentForm;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____consentForm_0;
		return L_0;
	}
}
// AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::GetConsentFormCallback(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* AndroidConsentForm_GetConsentFormCallback_mB0478D1179C215AC584F4814AE5D8494191C8404 (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormProxyListener_t258A2A37B735EB9493B45E1E66899D780E507B94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConsentManagerCallbacks.ConsentForm.Instance.ConsentFormEventsImpl.Listener = listener;
		il2cpp_codegen_runtime_class_init_inline(ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99_il2cpp_TypeInfo_var);
		ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99* L_0;
		L_0 = ConsentForm_get_Instance_mD2753821AA46FC6830DCA795A485B4B7E394AE49(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConsentForm_get_ConsentFormEventsImpl_m2A45FD363C6D60BB89C65419E8E34B748368DCAD(L_0, NULL);
		RuntimeObject* L_2 = ___listener0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormProxyListener::set_Listener(AppodealStack.ConsentManagement.Common.IConsentFormListener) */, IConsentFormProxyListener_t258A2A37B735EB9493B45E1E66899D780E507B94_il2cpp_TypeInfo_var, L_1, L_2);
		// return new ConsentFormCallbacks(ConsentManagerCallbacks.ConsentForm.Instance.ConsentFormEventsImpl);
		ConsentForm_t64823E55BD7D5DE562C6AD3910B5BF15F892BA99* L_3;
		L_3 = ConsentForm_get_Instance_mD2753821AA46FC6830DCA795A485B4B7E394AE49(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ConsentForm_get_ConsentFormEventsImpl_m2A45FD363C6D60BB89C65419E8E34B748368DCAD(L_3, NULL);
		ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* L_5 = (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB*)il2cpp_codegen_object_new(ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConsentFormCallbacks__ctor_m462F91001EFA1A5B6474B5EF435D67BCDEFF17C3(L_5, L_4, NULL);
		return L_5;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentForm__ctor_mAC642F10CE9FA6DE7C3905C7451968BF4EF2AC66 (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___builder0, const RuntimeMethod* method) 
{
	{
		// public AndroidConsentForm(AndroidJavaObject builder)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _consentForm = builder;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___builder0;
		__this->____consentForm_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentForm_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::.ctor(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentForm__ctor_mE0630405DC87AEA3C4394B8F071A486010E31DA8 (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, RuntimeObject* ___consentFormListener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BC63FF421F62EE96441FB3B559C7EE9380F0C81);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidConsentForm(IConsentFormListener consentFormListener)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _consentForm = new AndroidJavaObject("com.appodeal.consent.ConsentForm", GetActivity(), GetConsentFormCallback(consentFormListener));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidConsentForm_GetActivity_m589C7EB61BE940256F61156F94DD1257B981C24F(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		RuntimeObject* L_4 = ___consentFormListener0;
		ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* L_5;
		L_5 = AndroidConsentForm_GetConsentFormCallback_mB0478D1179C215AC584F4814AE5D8494191C8404(__this, L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_6, _stringLiteral1BC63FF421F62EE96441FB3B559C7EE9380F0C81, L_3, NULL);
		__this->____consentForm_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentForm_0), (void*)L_6);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentForm_Load_m48B31F22FEDA06711579DB6278AB55056E1CE707 (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetConsentFormJavaObject().Call("load");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentForm_GetConsentFormJavaObject_m8207C814F741E1996ABE25C33A3A1FF4DD5E0043_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80, L_1, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentForm_Show_mD3F7C72952EA02DDEB3419454D46847BE5B19C24 (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetConsentFormJavaObject().Call("show");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentForm_GetConsentFormJavaObject_m8207C814F741E1996ABE25C33A3A1FF4DD5E0043_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidConsentForm_IsLoaded_mC6D102C6C02FF34E26C9866A3A851C37CC21D60C (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26A612E5A76C2D46A0AAC053EB617D1E0DC06232);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetConsentFormJavaObject().Call<bool>("isLoaded");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentForm_GetConsentFormJavaObject_m8207C814F741E1996ABE25C33A3A1FF4DD5E0043_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral26A612E5A76C2D46A0AAC053EB617D1E0DC06232, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentForm::IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidConsentForm_IsShowing_mB22D870FF4A72359BBAD7C6006533A80253E9E24 (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB23E706FF00D633FB41D1C79E76AF99189BFEBA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetConsentFormJavaObject().Call<bool>("isShowing");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentForm_GetConsentFormJavaObject_m8207C814F741E1996ABE25C33A3A1FF4DD5E0043_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteralB23E706FF00D633FB41D1C79E76AF99189BFEBA0, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_2;
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
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetConsentManagerJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA75B29E45031776B05134F86F9681A22468B2F8C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B2_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B1_0 = NULL;
	{
		// return _consentManager ?? (_consentManager = new AndroidJavaObject("com.appodeal.consent.ConsentManager"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____consentManager_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0022;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_3, _stringLiteralA75B29E45031776B05134F86F9681A22468B2F8C, L_2, NULL);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3;
		V_0 = L_4;
		__this->____consentManager_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentManager_0), (void*)L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0022:
	{
		return G_B2_0;
	}
}
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentManager_GetActivity_mCC1C6C8BC8C86D77109C2B97422DF9EEF433CF08 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B2_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B1_0 = NULL;
	{
		// return _activity ?? (_activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____activity_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0027;
		}
	}
	{
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3;
		V_0 = L_4;
		__this->____activity_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activity_1), (void*)L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		G_B2_0 = L_5;
	}

IL_0027:
	{
		return G_B2_0;
	}
}
// AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetConsentInfoCallback(AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* AndroidConsentManager_GetConsentInfoCallback_m28BC287D42B73E5F12004AB225B80552244A60A9 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentInfoProxyListener_t0EB7089A900F66A4617A6D7747F35AD801DDCE93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ConsentManagerCallbacks.ConsentInfo.Instance.ConsentInfoEventsImpl.Listener = listener;
		il2cpp_codegen_runtime_class_init_inline(ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7_il2cpp_TypeInfo_var);
		ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7* L_0;
		L_0 = ConsentInfo_get_Instance_m83B58F52E26BD61A46D0F2D5930870D418C0E112(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = ConsentInfo_get_ConsentInfoEventsImpl_m0C3BF7E21B0D5E67BB8E5AA2A4519E6482D3C32F(L_0, NULL);
		RuntimeObject* L_2 = ___listener0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentInfoProxyListener::set_Listener(AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener) */, IConsentInfoProxyListener_t0EB7089A900F66A4617A6D7747F35AD801DDCE93_il2cpp_TypeInfo_var, L_1, L_2);
		// return new ConsentInfoUpdateCallbacks(ConsentManagerCallbacks.ConsentInfo.Instance.ConsentInfoEventsImpl);
		ConsentInfo_t3E42979F9CD79D5D0130FCDAD107188FBCDBC9A7* L_3;
		L_3 = ConsentInfo_get_Instance_m83B58F52E26BD61A46D0F2D5930870D418C0E112(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ConsentInfo_get_ConsentInfoEventsImpl_m0C3BF7E21B0D5E67BB8E5AA2A4519E6482D3C32F(L_3, NULL);
		ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* L_5 = (ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675*)il2cpp_codegen_object_new(ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConsentInfoUpdateCallbacks__ctor_m5B89FBAABF7DD2F969935D5A625B4F60AF5DDB5A(L_5, L_4, NULL);
		return L_5;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::RequestConsentInfoUpdate(System.String,AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManager_RequestConsentInfoUpdate_m4445E27F33F00016A6651BD08F7B7088DE45DD2F (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, String_t* ___appodealAppKey0, RuntimeObject* ___listener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41B244E6AA749FD04A6C56697A4AFF71754B6BC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetConsentManagerJavaObject().CallStatic("requestConsentInfoUpdate", GetActivity(), appodealAppKey, GetConsentInfoCallback(listener));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidConsentManager_GetActivity_mCC1C6C8BC8C86D77109C2B97422DF9EEF433CF08(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___appodealAppKey0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___listener1;
		ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* L_8;
		L_8 = AndroidConsentManager_GetConsentInfoCallback_m28BC287D42B73E5F12004AB225B80552244A60A9(__this, L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral41B244E6AA749FD04A6C56697A4AFF71754B6BC5, L_6, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::SetCustomVendor(AppodealStack.ConsentManagement.Common.IVendor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManager_SetCustomVendor_m78F9DE9953E51E8BEA88E382AA9EF8F2F9614BD9 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, RuntimeObject* ___customVendor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EE9D8CF7F350B2601FB896D5592C2983FF0B95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA);
		s_Il2CppMethodInitialized = true;
	}
	AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* V_0 = NULL;
	{
		// var androidVendor = customVendor.NativeVendor as AndroidVendor;
		RuntimeObject* L_0 = ___customVendor0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(6 /* AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Common.IVendor::get_NativeVendor() */, IVendor_t4A6ECBCA89F9B189328A86C96FC233435F24BB04_il2cpp_TypeInfo_var, L_0);
		V_0 = ((AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357*)IsInstClass((RuntimeObject*)L_1, AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var));
		// if (androidVendor == null) return;
		AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		// if (androidVendor == null) return;
		return;
	}

IL_0010:
	{
		// GetConsentManagerJavaObject().CallStatic<AndroidJavaObject>("getCustomVendors").Call<AndroidJavaObject>("put", androidVendor.GetBundle(), androidVendor.GetVendorJavaObject());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_3, _stringLiteralE2EE9D8CF7F350B2601FB896D5592C2983FF0B95, L_4, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = AndroidVendor_GetBundle_mA272C4C6B82B36E9A1F829C8163F8459DB2B4750(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* L_11 = V_0;
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12;
		L_12 = AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_5, _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA, L_10, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetCustomVendor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidConsentManager_GetCustomVendor_m0C67FB394EC2ED4CBA5B8925B32B11EC166BC0E9 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, String_t* ___bundle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EE9D8CF7F350B2601FB896D5592C2983FF0B95);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// var vendor = GetConsentManagerJavaObject().CallStatic<AndroidJavaObject>("getCustomVendors").Call<AndroidJavaObject>("get", Helper.GetJavaObject(bundle));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralE2EE9D8CF7F350B2601FB896D5592C2983FF0B95, L_1, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___bundle0;
		RuntimeObject* L_6;
		L_6 = Helper_GetJavaObject_mDE1A110D1C53829AA195F261FB178DE34BBC1170(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_7;
		// return vendor == null ? null : new AndroidVendor(vendor);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* L_10 = (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357*)il2cpp_codegen_object_new(AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidVendor__ctor_m4014B8E13849D94DA9DBAD1C94699A76BD51496E(L_10, L_9, NULL);
		return L_10;
	}

IL_0039:
	{
		return (RuntimeObject*)NULL;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentManagerStorage AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetStorage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsentManager_GetStorage_mDA9CE6BD44A6D2F3890A4680EDAFF08752BA916E (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B40E10455D3D9520774A2623BD1BB670D04175);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0A00739C2E37323FB6F1942CBF96EE4AF59B5CB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// var storage = ConsentManagerStorage.None;
		V_0 = 0;
		// switch (GetConsentManagerJavaObject().CallStatic<AndroidJavaObject>("getStorage").Call<string>("name"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralE0A00739C2E37323FB6F1942CBF96EE4AF59B5CB, L_1, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, NULL);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralD3B40E10455D3D9520774A2623BD1BB670D04175, NULL);
		if (L_8)
		{
			goto IL_0047;
		}
	}
	{
		goto IL_0049;
	}

IL_0043:
	{
		// storage = ConsentManagerStorage.None;
		V_0 = 0;
		// break;
		goto IL_0049;
	}

IL_0047:
	{
		// storage = ConsentManagerStorage.SharedPreference;
		V_0 = 1;
	}

IL_0049:
	{
		// return storage;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::SetStorage(AppodealStack.ConsentManagement.Common.ConsentManagerStorage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManager_SetStorage_m70084B2D6E68504B754700C5BE68A02D90EED48D (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, int32_t ___iabStorage0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00288B513100362780858CB74360F1428A41E103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B40E10455D3D9520774A2623BD1BB670D04175);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F5E7DD3ADDDD9810B44F1C52423D45DC15E47E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___iabStorage0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___iabStorage0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_0065;
	}

IL_0009:
	{
		// GetConsentManagerJavaObject().CallStatic("setStorage",
		//     new AndroidJavaClass("com.appodeal.consent.ConsentManager$Storage")
		//         .GetStatic<AndroidJavaObject>("NONE"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_5, _stringLiteralD4F5E7DD3ADDDD9810B44F1C52423D45DC15E47E, NULL);
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_5, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_2, _stringLiteral00288B513100362780858CB74360F1428A41E103, L_4, NULL);
		// break;
		return;
	}

IL_0037:
	{
		// GetConsentManagerJavaObject().CallStatic("setStorage",
		//     new AndroidJavaClass("com.appodeal.consent.ConsentManager$Storage")
		//         .GetStatic<AndroidJavaObject>("SHARED_PREFERENCE"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_10 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_10, _stringLiteralD4F5E7DD3ADDDD9810B44F1C52423D45DC15E47E, NULL);
		NullCheck(L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_10, _stringLiteralD3B40E10455D3D9520774A2623BD1BB670D04175, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		NullCheck(L_7);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_7, _stringLiteral00288B513100362780858CB74360F1428A41E103, L_9, NULL);
		// break;
		return;
	}

IL_0065:
	{
		// throw new ArgumentOutOfRangeException(nameof(iabStorage), iabStorage, null);
		int32_t L_12 = ___iabStorage0;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentManagerStorage_t76393D6CADED404F58F9C10E266A3A7B6FF124F8_il2cpp_TypeInfo_var)), &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB93088E8DD61CBB09F8EF1207707651A71283BB9)), L_14, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidConsentManager_SetStorage_m70084B2D6E68504B754700C5BE68A02D90EED48D_RuntimeMethod_var)));
	}
}
// AppodealStack.ConsentManagement.Common.ConsentShouldShow AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::ShouldShowConsentDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsentManager_ShouldShowConsentDialog_mDD5F5D9EB3C3C2DA3232FE8B3D7BCE9116AF670F (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7AE765FF6929786919E21E65F90E7A03754C18);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var shouldShow = ConsentShouldShow.Unknown;
		V_0 = 0;
		// switch (GetConsentManagerJavaObject().CallStatic<bool>("getShouldShow"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_0, _stringLiteralDA7AE765FF6929786919E21E65F90E7A03754C18, L_1, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// shouldShow = ConsentShouldShow.True;
		V_0 = 1;
		// break;
		goto IL_001f;
	}

IL_001d:
	{
		// shouldShow = ConsentShouldShow.False;
		V_0 = 2;
	}

IL_001f:
	{
		// return shouldShow;
		int32_t L_3 = V_0;
		return L_3;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentZone AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetConsentZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsentManager_GetConsentZone_m030EAFBE66675AE26A327EB23504B5A620FADAAA (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62C4F290035999D38AC685022DE08073F5D9F532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF604593806FBB7E2744F369349751F1E96DD4B41);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// var zone = ConsentZone.Unknown;
		V_0 = 0;
		// switch (GetConsentManagerJavaObject().CallStatic<AndroidJavaObject>("getConsentZone").Call<string>("name"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralF604593806FBB7E2744F369349751F1E96DD4B41, L_1, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098, NULL);
		if (L_6)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteral62C4F290035999D38AC685022DE08073F5D9F532, NULL);
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralE6AED819E646816B4C6FBDDED96E8F2672E40152, NULL);
		if (L_12)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_006b;
	}

IL_005d:
	{
		// zone = ConsentZone.Unknown;
		V_0 = 0;
		// break;
		goto IL_006b;
	}

IL_0061:
	{
		// zone = ConsentZone.None;
		V_0 = 1;
		// break;
		goto IL_006b;
	}

IL_0065:
	{
		// zone = ConsentZone.Gdpr;
		V_0 = 2;
		// break;
		goto IL_006b;
	}

IL_0069:
	{
		// zone = ConsentZone.Ccpa;
		V_0 = 3;
	}

IL_006b:
	{
		// return zone;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// AppodealStack.ConsentManagement.Common.ConsentStatus AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsentManager_GetConsentStatus_mF82FCAA207E5EEE445A56D26C3194D30595DFEF4 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04DB4E8C53CAF2E5899153EC73654AF132BAC651);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244940E192616C6FDCE2CD494CC5BE9AA60F5CD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA41AAF808A08EAD6EDB62C7F765EE1927776B9F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FFEFC755015A9A8267A6646F80EE72E127FFF0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// var status = ConsentStatus.Unknown;
		V_0 = 0;
		// switch (GetConsentManagerJavaObject().CallStatic<AndroidJavaObject>("getConsentStatus").Call<string>("name"))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteral244940E192616C6FDCE2CD494CC5BE9AA60F5CD8, L_1, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		V_1 = L_4;
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteral1938FDF81D9EFE09E9786A7A7DDFFBD755961098, NULL);
		if (L_6)
		{
			goto IL_005d;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, _stringLiteral04DB4E8C53CAF2E5899153EC73654AF132BAC651, NULL);
		if (L_8)
		{
			goto IL_0061;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, _stringLiteralA41AAF808A08EAD6EDB62C7F765EE1927776B9F9, NULL);
		if (L_10)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralD4FFEFC755015A9A8267A6646F80EE72E127FFF0, NULL);
		if (L_12)
		{
			goto IL_0069;
		}
	}
	{
		goto IL_006b;
	}

IL_005d:
	{
		// status = ConsentStatus.Unknown;
		V_0 = 0;
		// break;
		goto IL_006b;
	}

IL_0061:
	{
		// status = ConsentStatus.Personalized;
		V_0 = 3;
		// break;
		goto IL_006b;
	}

IL_0065:
	{
		// status = ConsentStatus.NonPersonalized;
		V_0 = 1;
		// break;
		goto IL_006b;
	}

IL_0069:
	{
		// status = ConsentStatus.PartlyPersonalized;
		V_0 = 2;
	}

IL_006b:
	{
		// return status;
		int32_t L_13 = V_0;
		return L_13;
	}
}
// AppodealStack.ConsentManagement.Common.IConsent AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::GetConsent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidConsentManager_GetConsent_mE4270CC2F9B58EC904BDF1FD17D6AA430A5BC573 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B7C1DC5E9373231313E1ED4D24D979B8F1D91F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new AndroidConsent(GetConsentManagerJavaObject().CallStatic<AndroidJavaObject>("getConsent"));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManager_GetConsentManagerJavaObject_m227D39E45199B1D0B10A39C1DF227AA4D5782D1E(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteral58B7C1DC5E9373231313E1ED4D24D979B8F1D91F, L_1, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* L_3 = (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC*)il2cpp_codegen_object_new(AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8(L_3, L_2, NULL);
		return L_3;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::DisableAppTrackingTransparencyRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManager_DisableAppTrackingTransparencyRequest_m6A88E917F21C1D73B5BEA713ABBB6A77EDE4EB69 (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45966EBE84A62CCDA3936D340CB1080CFD8C5245);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Not supported on Android platform");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral45966EBE84A62CCDA3936D340CB1080CFD8C5245, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManager__ctor_mA7B3892732D8B7F8ED84E0F2C4FEABBABEA6C2EB (AndroidConsentManager_t52ABF564E869281D51D839E7FCF73E6C85D68FBA* __this, const RuntimeMethod* method) 
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
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::GetConsentManagerExceptionJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentManagerException_GetConsentManagerExceptionJavaObject_mF5E214AA38C38A86CE38A20AB6A133F189CBBFA1 (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, const RuntimeMethod* method) 
{
	{
		// return _consentManagerException;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____consentManagerException_0;
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidConsentManagerException__ctor_mF02DFE87AFF87164F6092860A7A4C8016CACF0DA (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject0, const RuntimeMethod* method) 
{
	{
		// public AndroidConsentManagerException(AndroidJavaObject androidJavaObject)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _consentManagerException = androidJavaObject;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___androidJavaObject0;
		__this->____consentManagerException_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentManagerException_0), (void*)L_0);
		// }
		return;
	}
}
// System.String AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::GetReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidConsentManagerException_GetReason_mAAA3E7579BCA81C5D9112AEB8C265710A2154493 (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FCE983D70DEDD25C3565391BB2267C1FEACB998);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetConsentManagerExceptionJavaObject().Call<string>("getMessage");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManagerException_GetConsentManagerExceptionJavaObject_mF5E214AA38C38A86CE38A20AB6A133F189CBBFA1_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral2FCE983D70DEDD25C3565391BB2267C1FEACB998, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 AppodealStack.ConsentManagement.Platforms.Android.AndroidConsentManagerException::GetCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidConsentManagerException_GetCode_mCD9CF5EDBCF8EBAB6C5AA13AF358FAFDD30A5F15 (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07AFF70E2D7872F6BAFA0FEBCA5A0193BB1D7657);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08B092F55F0B0E4868121E5EDCDF74CCF10F1760);
		s_Il2CppMethodInitialized = true;
	}
	{
		// string reason = GetConsentManagerExceptionJavaObject().Call<string>("getEvent");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidConsentManagerException_GetConsentManagerExceptionJavaObject_mF5E214AA38C38A86CE38A20AB6A133F189CBBFA1_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral07AFF70E2D7872F6BAFA0FEBCA5A0193BB1D7657, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		// return reason == "LoadingError" ? 2 : 1;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral08B092F55F0B0E4868121E5EDCDF74CCF10F1760, NULL);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		return 1;
	}

IL_0023:
	{
		return 2;
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
// AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::get_NativeVendor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidVendor_get_NativeVendor_mAD5348E353DA4F9F850655C5683A25F8C633AEA9 (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	{
		// public IVendor NativeVendor { get; }
		RuntimeObject* L_0 = __this->___U3CNativeVendorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::.ctor(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVendor__ctor_m4014B8E13849D94DA9DBAD1C94699A76BD51496E (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___vendor0, const RuntimeMethod* method) 
{
	{
		// public AndroidVendor(AndroidJavaObject vendor)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _vendor = vendor;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___vendor0;
		__this->____vendor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vendor_0), (void*)L_0);
		// NativeVendor = this;
		__this->___U3CNativeVendorU3Ek__BackingField_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativeVendorU3Ek__BackingField_1), (void*)__this);
		// }
		return;
	}
}
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetVendorJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21 (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	{
		// return _vendor;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____vendor_0;
		return L_0;
	}
}
// System.String AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidVendor_GetName_m7C65BF5F300BBD5A2E596B1B7596CC0DB88F5B22 (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetVendorJavaObject().Call<string>("getName");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral58BB47D89B96E4992A8CEB702213DCC616635297, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidVendor_GetBundle_mA272C4C6B82B36E9A1F829C8163F8459DB2B4750 (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AEA598D13F7E4CB0C36E992D1EEA8F8D0067C4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetVendorJavaObject().Call<string>("getBundle");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral8AEA598D13F7E4CB0C36E992D1EEA8F8D0067C4A, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.String AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetPolicyUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidVendor_GetPolicyUrl_m3D6496239B70D3E29ED45AF256157FD936FDD978 (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA67CCEC913A1098D6B12516502C7BC0754EE44F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetVendorJavaObject().Call<string>("getPolicyUrl");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteralA67CCEC913A1098D6B12516502C7BC0754EE44F9, L_1, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_2;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetPurposeIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* AndroidVendor_GetPurposeIds_m272EDCCF26D1E253837E41055BE498C3247F1CE6 (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92CDA416B74E86920647DCDA5C6EDA8E3FF90663);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeList("getPurposeIds", GetVendorJavaObject());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline(__this, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = AndroidVendor_GetNativeList_mB7FD71942F6B891034711165FF2415164DA2A616(_stringLiteral92CDA416B74E86920647DCDA5C6EDA8E3FF90663, L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetFeatureIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* AndroidVendor_GetFeatureIds_m2D047F6EDC363E3CAD15465F8C4CA28C12CE6CF9 (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral261D65DB27F836D37BA4527898B196866E06A9F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeList("getFeatureIds", GetVendorJavaObject());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline(__this, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = AndroidVendor_GetNativeList_mB7FD71942F6B891034711165FF2415164DA2A616(_stringLiteral261D65DB27F836D37BA4527898B196866E06A9F3, L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetLegitimateInterestPurposeIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* AndroidVendor_GetLegitimateInterestPurposeIds_mAD0550C648A781EC075AF7F03F65C44376E535FD (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A7A90C709778DF9F03F3AAA45575C47062C1293);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetNativeList("getLegitimateInterestPurposeIds", GetVendorJavaObject());
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline(__this, NULL);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1;
		L_1 = AndroidVendor_GetNativeList_mB7FD71942F6B891034711165FF2415164DA2A616(_stringLiteral6A7A90C709778DF9F03F3AAA45575C47062C1293, L_0, NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Int32> AppodealStack.ConsentManagement.Platforms.Android.AndroidVendor::GetNativeList(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* AndroidVendor_GetNativeList_mB7FD71942F6B891034711165FF2415164DA2A616 (String_t* ___methodName0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	int32_t V_2 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	{
		// var csList = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		V_0 = L_0;
		// AndroidJNI.PushLocalFrame(100);
		int32_t L_1;
		L_1 = AndroidJNI_PushLocalFrame_m2D8050A3799AEBB4A7E506E6790839EB66932E10(((int32_t)100), NULL);
		// using (var joList = androidJavaObject.Call<AndroidJavaObject>(methodName))
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___androidJavaObject1;
		String_t* L_3 = ___methodName0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, L_3, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
					if (!L_6)
					{
						goto IL_007e;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_007e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// for (var i = 0; i < joList.Call<int>("size"); i++)
				V_2 = 0;
				goto IL_0060_1;
			}

IL_001f_1:
			{
				// using (var joElement = joList.Call<AndroidJavaObject>("get", i))
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
				int32_t L_11 = V_2;
				int32_t L_12 = L_11;
				RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, L_13);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
				NullCheck(L_8);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14;
				L_14 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_8, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_10, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				V_3 = L_14;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0052_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_3;
							if (!L_15)
							{
								goto IL_005b_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_3;
							NullCheck(L_16);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
						}

IL_005b_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// csList.Add(joElement.Call<int>("intValue"));
					List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = V_0;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_3;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19;
					L_19 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
					NullCheck(L_18);
					int32_t L_20;
					L_20 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_18, _stringLiteral768F82A25AC6375BDD08F33D316E23F3C9E9872A, L_19, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
					NullCheck(L_17);
					List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_17, L_20, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
					// }
					goto IL_005c_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_005c_1:
			{
				// for (var i = 0; i < joList.Call<int>("size"); i++)
				int32_t L_21 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
			}

IL_0060_1:
			{
				// for (var i = 0; i < joList.Call<int>("size"); i++)
				int32_t L_22 = V_2;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24;
				L_24 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_23);
				int32_t L_25;
				L_25 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_23, _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B, L_24, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
				if ((((int32_t)L_22) < ((int32_t)L_25)))
				{
					goto IL_001f_1;
				}
			}
			{
				// }
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		// AndroidJNI.PopLocalFrame(IntPtr.Zero);
		intptr_t L_26 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		intptr_t L_27;
		L_27 = AndroidJNI_PopLocalFrame_m32AF6F9065F09D80BFDD3F573B62C782F392E609(L_26, NULL);
		// return csList;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_28 = V_0;
		return L_28;
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
// UnityEngine.AndroidJavaObject AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::GetVendorBuilderJavaObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidVendorBuilder_GetVendorBuilderJavaObject_m05C968FF68D71954FF22069F4D803B100D9EF94C (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, const RuntimeMethod* method) 
{
	{
		// return _vendorBuilder;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____vendorBuilder_0;
		return L_0;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVendorBuilder__ctor_m8F0BC447A66AF0D2690C6C860CFC35A83B7B6A02 (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, String_t* ___name0, String_t* ___bundle1, String_t* ___policyUrl2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral027D4E65C85EAD446CEECBDFC398B7B5FE00E363);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidVendorBuilder(string name, string bundle, string policyUrl)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _vendorBuilder = new AndroidJavaObject("com.appodeal.consent.Vendor$Builder", name, bundle, policyUrl);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___bundle1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___policyUrl2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_7, _stringLiteral027D4E65C85EAD446CEECBDFC398B7B5FE00E363, L_5, NULL);
		__this->____vendorBuilder_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vendorBuilder_0), (void*)L_7);
		// }
		return;
	}
}
// AppodealStack.ConsentManagement.Common.IVendor AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidVendorBuilder_Build_m42BEFD19DD4D973A3A9913C78F4BDF2DEC27FA78 (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _vendor = GetVendorBuilderJavaObject().Call<AndroidJavaObject>("build");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AndroidVendorBuilder_GetVendorBuilderJavaObject_m05C968FF68D71954FF22069F4D803B100D9EF94C_inline(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		__this->____vendor_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vendor_1), (void*)L_2);
		// return new AndroidVendor(_vendor);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = __this->____vendor_1;
		AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* L_4 = (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357*)il2cpp_codegen_object_new(AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidVendor__ctor_m4014B8E13849D94DA9DBAD1C94699A76BD51496E(L_4, L_3, NULL);
		return L_4;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::SetPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVendorBuilder_SetPurposeIds_mA8286C654A4199D43192F215AB92E38258BA3BD2 (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, RuntimeObject* ___purposeIds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58EE23AEAB2EB6F53978479F1509F36CD454C675);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetNativeList(purposeIds, "purposeIds");
		RuntimeObject* L_0 = ___purposeIds0;
		AndroidVendorBuilder_SetNativeList_m9818A8C03688DDE0F5CCAE3808AAD797E496780F(__this, L_0, _stringLiteral58EE23AEAB2EB6F53978479F1509F36CD454C675, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::SetFeatureIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVendorBuilder_SetFeatureIds_mC0860106F9F2711CF8195C5DD1A21954B80D4AAC (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, RuntimeObject* ___featureIds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC13AE9B6094CDFEEBC397FAFE92AB403BCD4A6EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetNativeList(featureIds, "featureIds");
		RuntimeObject* L_0 = ___featureIds0;
		AndroidVendorBuilder_SetNativeList_m9818A8C03688DDE0F5CCAE3808AAD797E496780F(__this, L_0, _stringLiteralC13AE9B6094CDFEEBC397FAFE92AB403BCD4A6EC, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::SetLegitimateInterestPurposeIds(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVendorBuilder_SetLegitimateInterestPurposeIds_m5FA983C265596240529F7337E276E8D7DC163F30 (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, RuntimeObject* ___legitimateInterestPurposeIds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA282B7E697F69044EC81FC75BBBF68360BE4CF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetNativeList(legitimateInterestPurposeIds, "legitimateInterestPurposeIds");
		RuntimeObject* L_0 = ___legitimateInterestPurposeIds0;
		AndroidVendorBuilder_SetNativeList_m9818A8C03688DDE0F5CCAE3808AAD797E496780F(__this, L_0, _stringLiteralBDA282B7E697F69044EC81FC75BBBF68360BE4CF, NULL);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.AndroidVendorBuilder::SetNativeList(System.Collections.Generic.IEnumerable`1<System.Int32>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidVendorBuilder_SetNativeList_m9818A8C03688DDE0F5CCAE3808AAD797E496780F (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, RuntimeObject* ___list0, String_t* ___methodName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC522B58E3ECA14FA374E2886C2FF83B8E8B79434);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var joList = new AndroidJavaObject("java.util.ArrayList");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteralC522B58E3ECA14FA374E2886C2FF83B8E8B79434, L_0, NULL);
		V_0 = L_1;
		// foreach (var obj in list)
		RuntimeObject* L_2 = ___list0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0040_1;
			}

IL_0019_1:
			{
				// foreach (var obj in list)
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// joList.Call<bool>("add", Helper.GetJavaObject(obj));
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
				int32_t L_11 = V_2;
				int32_t L_12 = L_11;
				RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
				RuntimeObject* L_14;
				L_14 = Helper_GetJavaObject_mDE1A110D1C53829AA195F261FB178DE34BBC1170(L_13, NULL);
				NullCheck(L_10);
				ArrayElementTypeCheck (L_10, L_14);
				(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
				NullCheck(L_8);
				bool L_15;
				L_15 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_8, _stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7, L_10, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
			}

IL_0040_1:
			{
				// foreach (var obj in list)
				RuntimeObject* L_16 = V_1;
				NullCheck(L_16);
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_16);
				if (L_17)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_0054;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// GetVendorBuilderJavaObject().Call<AndroidJavaObject>(methodName, joList);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18;
		L_18 = AndroidVendorBuilder_GetVendorBuilderJavaObject_m05C968FF68D71954FF22069F4D803B100D9EF94C_inline(__this, NULL);
		String_t* L_19 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_20;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		NullCheck(L_18);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23;
		L_23 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_18, L_19, L_21, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
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
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::.ctor(AppodealStack.ConsentManagement.Common.IConsentFormListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks__ctor_m462F91001EFA1A5B6474B5EF435D67BCDEFF17C3 (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral831E35F4C37C6166A3836B738CFDF8B769E60598);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConsentFormCallbacks(IConsentFormListener listener) : base("com.appodeal.consent.IConsentFormListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral831E35F4C37C6166A3836B738CFDF8B769E60598, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::onConsentFormLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks_onConsentFormLoaded_mE4D74D4A2C703183AE71CBE6345F8FC1BFF029F7 (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___consentForm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentFormLoaded();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormLoaded() */, IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::onConsentFormError(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks_onConsentFormError_m7B02D1071FBA82601287D311BAFD88F94499287E (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentFormError(new AndroidConsentManagerException(exception));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___exception0;
		AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* L_3 = (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55*)il2cpp_codegen_object_new(AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsentManagerException__ctor_mF02DFE87AFF87164F6092860A7A4C8016CACF0DA(L_3, L_2, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormError(AppodealStack.ConsentManagement.Common.IConsentManagerException) */, IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::onConsentFormOpened()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks_onConsentFormOpened_m6327B88E18EC17A4CCAEBC77656701477F5E8B3B (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentFormOpened();
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormOpened() */, IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentFormCallbacks::onConsentFormClosed(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormCallbacks_onConsentFormClosed_mDA770CC23D74B20214571229BAD4BC42507616AC (ConsentFormCallbacks_t46286EF11153C26C72863A76673DFAC8F568D5DB* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___consent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentFormClosed(new AndroidConsent(consent));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___consent0;
		AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* L_3 = (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC*)il2cpp_codegen_object_new(AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8(L_3, L_2, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(3 /* System.Void AppodealStack.ConsentManagement.Common.IConsentFormListener::OnConsentFormClosed(AppodealStack.ConsentManagement.Common.IConsent) */, IConsentFormListener_t9BD88AF1049A4B41FFE39F7EA747647AA7667034_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// }
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
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::.ctor(AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInfoUpdateCallbacks__ctor_m5B89FBAABF7DD2F969935D5A625B4F60AF5DDB5A (ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* __this, RuntimeObject* ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80A4A9B5AC5F2DD1275727E79AF411332396C2ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal ConsentInfoUpdateCallbacks(IConsentInfoUpdateListener listener) : base("com.appodeal.consent.IConsentInfoUpdateListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral80A4A9B5AC5F2DD1275727E79AF411332396C2ED, NULL);
		// _listener = listener;
		RuntimeObject* L_0 = ___listener0;
		__this->____listener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::onConsentInfoUpdated(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInfoUpdateCallbacks_onConsentInfoUpdated_mD49AE705A375C281279BB9AF1F6B33E0372925E9 (ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___consent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnConsentInfoUpdated(new AndroidConsent(consent));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___consent0;
		AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* L_3 = (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC*)il2cpp_codegen_object_new(AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsent__ctor_mEB9974AAF9D04EFCEAFFF39FCE37001EDBB1E2B8(L_3, L_2, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener::OnConsentInfoUpdated(AppodealStack.ConsentManagement.Common.IConsent) */, IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// }
		return;
	}
}
// System.Void AppodealStack.ConsentManagement.Platforms.Android.ConsentInfoUpdateCallbacks::onFailedToUpdateConsentInfo(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInfoUpdateCallbacks_onFailedToUpdateConsentInfo_m1115B50A14622CD1389ABFF67207BFC7525CC794 (ConsentInfoUpdateCallbacks_tDEEA16DC1740C04652ED07BB1F11230D34158675* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// _listener?.OnFailedToUpdateConsentInfo(new AndroidConsentManagerException(error));
		RuntimeObject* L_0 = __this->____listener_4;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___error0;
		AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* L_3 = (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55*)il2cpp_codegen_object_new(AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidConsentManagerException__ctor_mF02DFE87AFF87164F6092860A7A4C8016CACF0DA(L_3, L_2, NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void AppodealStack.ConsentManagement.Common.IConsentInfoUpdateListener::OnFailedToUpdateConsentInfo(AppodealStack.ConsentManagement.Common.IConsentManagerException) */, IConsentInfoUpdateListener_t45CA6ADBDF227E602391658872C9493163C47C67_il2cpp_TypeInfo_var, G_B2_0, L_3);
		// }
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
// System.Object AppodealStack.ConsentManagement.Platforms.Android.Helper::GetJavaObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Helper_GetJavaObject_mDE1A110D1C53829AA195F261FB178DE34BBC1170 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value is string)
		RuntimeObject* L_0 = ___value0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		RuntimeObject* L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		// if (value is char)
		RuntimeObject* L_2 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_2, Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		// return new AndroidJavaObject("java.lang.Character", value);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		RuntimeObject* L_5 = ___value0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_6, _stringLiteralB67B6D43B97430C37AE65F7A05E78E358F2B6A95, L_4, NULL);
		return L_6;
	}

IL_0027:
	{
		// if (value is bool)
		RuntimeObject* L_7 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_7, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var)))
		{
			goto IL_0044;
		}
	}
	{
		// return new AndroidJavaObject("java.lang.Boolean", value);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		RuntimeObject* L_10 = ___value0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_11, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_9, NULL);
		return L_11;
	}

IL_0044:
	{
		// if (value is int)
		RuntimeObject* L_12 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_12, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))
		{
			goto IL_0061;
		}
	}
	{
		// return new AndroidJavaObject("java.lang.Integer", value);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		RuntimeObject* L_15 = ___value0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_15);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_16, _stringLiteralE2666F1B1EF39D348E39EC6CC2DDE8F96EBEEA0E, L_14, NULL);
		return L_16;
	}

IL_0061:
	{
		// if (value is long)
		RuntimeObject* L_17 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_17, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		// return new AndroidJavaObject("java.lang.Long", value);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
		RuntimeObject* L_20 = ___value0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_21, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_19, NULL);
		return L_21;
	}

IL_007e:
	{
		// if (value is float)
		RuntimeObject* L_22 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_22, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var)))
		{
			goto IL_009b;
		}
	}
	{
		// return new AndroidJavaObject("java.lang.Float", value);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		RuntimeObject* L_25 = ___value0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_25);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_26 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_26, _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_24, NULL);
		return L_26;
	}

IL_009b:
	{
		// if (value is double)
		RuntimeObject* L_27 = ___value0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_27, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)))
		{
			goto IL_00b8;
		}
	}
	{
		// return new AndroidJavaObject("java.lang.Float", value);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_28;
		RuntimeObject* L_30 = ___value0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_31, _stringLiteral0A06530F3DEED5B3FCAB0F2A287E32BD8B25F2D4, L_29, NULL);
		return L_31;
	}

IL_00b8:
	{
		// return null;
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsent_GetConsentJavaObject_m08523060F6808A51393A3256588BFEC7FC6CB2E4_inline (AndroidConsent_t12F97882B98E00AEB97705419BED32150530A0BC* __this, const RuntimeMethod* method) 
{
	{
		// return _consent;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____consent_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentForm_GetConsentFormJavaObject_m8207C814F741E1996ABE25C33A3A1FF4DD5E0043_inline (AndroidConsentForm_t265DD47E428A093ABB00B9E0BDFC24C4893CC084* __this, const RuntimeMethod* method) 
{
	{
		// return _consentForm;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____consentForm_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidVendor_GetVendorJavaObject_m1C67B3ED8F1C3F36868D840A11ED5C099B273B21_inline (AndroidVendor_t0A7EE5AC39C4834DC5FDAFC567ED87F2FC05C357* __this, const RuntimeMethod* method) 
{
	{
		// return _vendor;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____vendor_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidConsentManagerException_GetConsentManagerExceptionJavaObject_mF5E214AA38C38A86CE38A20AB6A133F189CBBFA1_inline (AndroidConsentManagerException_t4F1B83C47891425072B58CBF07B4D33F5A3D4A55* __this, const RuntimeMethod* method) 
{
	{
		// return _consentManagerException;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____consentManagerException_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidVendorBuilder_GetVendorBuilderJavaObject_m05C968FF68D71954FF22069F4D803B100D9EF94C_inline (AndroidVendorBuilder_tAA731B9FA856D20253A59D6E52B5BFB26C4F8098* __this, const RuntimeMethod* method) 
{
	{
		// return _vendorBuilder;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->____vendorBuilder_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
