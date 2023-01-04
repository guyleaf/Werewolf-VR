#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags>
struct Action_2_t200A26AA6AFF8C50FAAC2D6D43B25E7718E3A18A;
// System.Action`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32>
struct Dictionary_2_tC5EFC8C0218B7680694715DA3F5E01A6F20D84A5;
// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice>
struct Dictionary_2_t9BCB1EF5FB3243318BCCD0B9F1205D8982078DB6;
// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32>
struct Dictionary_2_t1D92928E7113014048919339CEDEDE36D840D433;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>>
struct Dictionary_2_t4D6C72EB38C86FF1A6F195CBF4C5F9490574834A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>>
struct Dictionary_2_t773C42CA748B22AFB473FAB0E78E4607520F48A6;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode>
struct Dictionary_2_tC75B15D6BE3719CB8EEF14082A03D3744B788B4F;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Int16>
struct FactoryPrimitiveArrayPool_1_tB055A6ACC068A4C7F8EFC1044FC41318895C11DC;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Object>
struct FactoryPrimitiveArrayPool_1_tBA96E4D81636F01E0D94A0CD0C1DAA4F084DC151;
// Photon.Voice.FactoryPrimitiveArrayPool`1<System.Single>
struct FactoryPrimitiveArrayPool_1_tA8D0BF61C8C68AE9A7CB48A34477EE922C3DE819;
// Photon.Voice.Framer`1<System.Int16>
struct Framer_1_t2248AB183633142E9ECB9AF3887CD0BCFBC53E49;
// Photon.Voice.Framer`1<System.Object>
struct Framer_1_tAEE454F324B66F92067906017D46B5217F363B6C;
// Photon.Voice.Framer`1<System.Single>
struct Framer_1_t16E279F64AC5E7960C414BC32A949C3201DE3D3F;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227;
// System.Func`3<System.Byte,System.Int32,Photon.Voice.LocalVoice>
struct Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622;
// System.Func`3<System.Byte,System.Int32,System.Object>
struct Func_3_t47C050995DF9BD235A841BC0DBBBD05F2E5EDF2E;
// System.Func`4<UnityEngine.UIElements.Experimental.StyleValues,UnityEngine.UIElements.Experimental.StyleValues,System.Single,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Int16>
struct LevelMeter_1_t559A7216FC269315AE65ED3047BB7C8EF6F6D6BE;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Object>
struct LevelMeter_1_tC0B2CE83A650EE9AA90BE85B328C2DDACAC1EBBA;
// Photon.Voice.AudioUtil/LevelMeter`1<System.Single>
struct LevelMeter_1_t7E2F5A99073FF94E3A16E448C1ADB40C2E7D30BD;
// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Int32>>
struct List_1_t941E36F7444B6E85114CF22035CB833E55C9D086;
// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Single>>
struct List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0;
// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Texture2D>>
struct List_1_t087A9CD6ECE16049438D0BA69E67668E8EABBD90;
// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector3>>
struct List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B;
// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector4>>
struct List_1_t9CEEFCCC9B23A162158811AC97949D814329569E;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Int16>>
struct List_1_t56C399170B8C69EBC036B77887F390023096B41E;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Object>>
struct List_1_tA781798CD5F51DFFC0158FF6EAD1B72D0D77E6B6;
// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<System.Single>>
struct List_1_t5D8363CA3072E22D576E4A89AE3FBA73294733CB;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode>
struct List_1_tC18B126FC489EF27D70BE515FE2369EB10D5FD4C;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t79793DEA4E6913264A149098BA68EC7B5EB77D0E;
// Photon.Voice.LocalVoiceAudio`1<System.Object>
struct LocalVoiceAudio_1_tFDA93450E354F098FAC4236B9E0027906C346932;
// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_t6BD9B22B1E26EE56F5CB5B8E5018880195D19A14;
// Photon.Voice.LocalVoiceFramed`1<System.Object>
struct LocalVoiceFramed_1_t21DADC8C3248CDE14C3DF660AC0CC689D5CAABF9;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>>
struct ObjectPool_1_t048E004E7532AED8FD10569876C6065B7527D2AE;
// System.Collections.Generic.Queue`1<System.Int16[]>
struct Queue_1_t14EF0606E13D5B3F00CC8BB3D1A884D4EBC902F1;
// System.Collections.Generic.Queue`1<System.Object[]>
struct Queue_1_t63151ABE83115FA4760EE1D959AAE3D855FD18F0;
// System.Collections.Generic.Queue`1<System.Single[]>
struct Queue_1_t9F32AD4F084E1C073F589733BD477395C0E3BDF2;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Int16>
struct VoiceDetectorCalibration_1_t4C76F5F954EC4E034F19CE3D593BD670BE50D18E;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Object>
struct VoiceDetectorCalibration_1_tB49D36D90B2FF6040DDC4FDA49E3D73A2217C6C3;
// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<System.Single>
struct VoiceDetectorCalibration_1_t41D99B779BA06DABD1A4F1FF8FEF4E57AB4D3A51;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Int16>
struct VoiceDetector_1_t7BDAD9540189437AC15AA78B81E91DBEE49FBC1E;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Object>
struct VoiceDetector_1_t092E4B9BE813827A7F58FC853524EF6230F57804;
// Photon.Voice.AudioUtil/VoiceDetector`1<System.Single>
struct VoiceDetector_1_t30CE0AE84EA0D6D904546C4C28DEA3561850FB6B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Int32>[]
struct ExtensionEntry_1U5BU5D_t0DF78E1782DFE069C762A6E1933005FD0A9D4B58;
// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Single>[]
struct ExtensionEntry_1U5BU5D_tA08F5932FBCA7FC0E6354CEF4D2BB933D2FBA8B9;
// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector3>[]
struct ExtensionEntry_1U5BU5D_t14CB4D103D667F38A0758E88AB19D3D41E9A0152;
// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector4>[]
struct ExtensionEntry_1U5BU5D_t9634D1D2F1107B97919C05989FAA0AE32749E0A9;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange[]
struct BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// Photon.Voice.IAudioDesc
struct IAudioDesc_t3DEEF61ECB638E82CFBFC6F26D590E2ECD3F99C2;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Photon.Voice.IEncoder
struct IEncoder_t4EBB18A3C5DE954C3B6FD1BA0B88EB415C28CABE;
// Photon.Voice.ILogger
struct ILogger_tE41EB161CB1205DD786A7A636AB6AC37A186E075;
// Photon.Voice.IServiceable
struct IServiceable_t717325017517B6117BB2D4085FD3DBB06F6B56CA;
// UnityEngine.ISubsystem
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
// Photon.Voice.IVoiceTransport
struct IVoiceTransport_t8AB8CE7B17DD68C5ED96760062FC9FF152FCEB4C;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// Photon.Voice.LocalVoice
struct LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// POpusCodec.OpusEncoder
struct OpusEncoder_t185F1B5A0522F6EC47DB0F685DFE7A9D7E0CC6A8;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Photon.Voice.SpacingProfile
struct SpacingProfile_t0483DDC2A366FC7433811227ED441A9A9A7DDB8F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleValueCollection
struct StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// System.Type
struct Type_t;
// Photon.Voice.UnsupportedCodecException
struct UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// Photon.Voice.VoiceClient
struct VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Facebook.WitAi.Lib.WitResponseClass
struct WitResponseClass_t739569309AE400E308EB8DD834327086751C855C;
// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// Photon.Voice.OpusCodec/EncoderFloat
struct EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116;
// Photon.Voice.OpusCodec/EncoderShort
struct EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;
// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate
struct RemoteVoiceInfoDelegate_t81A54103825934710986FC301ADF0FF4030AAA50;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66;
IL2CPP_EXTERN_C String_t* _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral366F5191491A26847B86A1FB7FD732FA3F244D50;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral53CF3B92E92F867DD4C66BE295D4BD1F4304E602;
IL2CPP_EXTERN_C String_t* _stringLiteral6FAC12148561FEC937CFC59BDE618CF0AF9BA64D;
IL2CPP_EXTERN_C String_t* _stringLiteral7914AD61B1796D20A05DBD353FFBD9CEF133C6A9;
IL2CPP_EXTERN_C String_t* _stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C;
IL2CPP_EXTERN_C String_t* _stringLiteralA6931633B5386D569408197501A33540EA923D82;
IL2CPP_EXTERN_C String_t* _stringLiteralAE1F596541AD0A4778038C3FF0FF43A22F80A274;
IL2CPP_EXTERN_C String_t* _stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E;
IL2CPP_EXTERN_C const RuntimeMethod* DecoderFactory_Create_TisRuntimeObject_mC6382E2970FBE9C24E7C75A3854B399F1F0858F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Factory_CreateEncoder_TisRuntimeObject_m3C68BF815169707D40FEDFBF9B248274276583F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WitResponseClass_t739569309AE400E308EB8DD834327086751C855C_0_0_0_var;
struct BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries_1;
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
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Int32>>
struct List_1_t941E36F7444B6E85114CF22035CB833E55C9D086  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExtensionEntry_1U5BU5D_t0DF78E1782DFE069C762A6E1933005FD0A9D4B58* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t941E36F7444B6E85114CF22035CB833E55C9D086_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExtensionEntry_1U5BU5D_t0DF78E1782DFE069C762A6E1933005FD0A9D4B58* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Single>>
struct List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExtensionEntry_1U5BU5D_tA08F5932FBCA7FC0E6354CEF4D2BB933D2FBA8B9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExtensionEntry_1U5BU5D_tA08F5932FBCA7FC0E6354CEF4D2BB933D2FBA8B9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector3>>
struct List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExtensionEntry_1U5BU5D_t14CB4D103D667F38A0758E88AB19D3D41E9A0152* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExtensionEntry_1U5BU5D_t14CB4D103D667F38A0758E88AB19D3D41E9A0152* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector4>>
struct List_1_t9CEEFCCC9B23A162158811AC97949D814329569E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExtensionEntry_1U5BU5D_t9634D1D2F1107B97919C05989FAA0AE32749E0A9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9CEEFCCC9B23A162158811AC97949D814329569E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExtensionEntry_1U5BU5D_t9634D1D2F1107B97919C05989FAA0AE32749E0A9* ___s_emptyArray_5;
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

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// Photon.Voice.VoiceClient
struct VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E  : public RuntimeObject
{
	// Photon.Voice.IVoiceTransport Photon.Voice.VoiceClient::transport
	RuntimeObject* ___transport_0;
	// Photon.Voice.ILogger Photon.Voice.VoiceClient::logger
	RuntimeObject* ___logger_1;
	// System.Int32 Photon.Voice.VoiceClient::<FramesLost>k__BackingField
	int32_t ___U3CFramesLostU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceClient::<FramesReceived>k__BackingField
	int32_t ___U3CFramesReceivedU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTime>k__BackingField
	int32_t ___U3CRoundTripTimeU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceClient::<RoundTripTimeVariance>k__BackingField
	int32_t ___U3CRoundTripTimeVarianceU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.VoiceClient::<SuppressInfoDuplicateWarning>k__BackingField
	bool ___U3CSuppressInfoDuplicateWarningU3Ek__BackingField_6;
	// Photon.Voice.VoiceClient/RemoteVoiceInfoDelegate Photon.Voice.VoiceClient::<OnRemoteVoiceInfoAction>k__BackingField
	RemoteVoiceInfoDelegate_t81A54103825934710986FC301ADF0FF4030AAA50* ___U3COnRemoteVoiceInfoActionU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceClient::<DebugLostPercent>k__BackingField
	int32_t ___U3CDebugLostPercentU3Ek__BackingField_8;
	// System.Int32 Photon.Voice.VoiceClient::prevRtt
	int32_t ___prevRtt_9;
	// System.Collections.Generic.Dictionary`2<Photon.Voice.Codec,System.Int32> Photon.Voice.VoiceClient::remoteVoiceDelayFrames
	Dictionary_2_t1D92928E7113014048919339CEDEDE36D840D433* ___remoteVoiceDelayFrames_10;
	// System.Byte Photon.Voice.VoiceClient::voiceIDMin
	uint8_t ___voiceIDMin_11;
	// System.Byte Photon.Voice.VoiceClient::voiceIDMax
	uint8_t ___voiceIDMax_12;
	// System.Byte Photon.Voice.VoiceClient::voiceIdLast
	uint8_t ___voiceIdLast_13;
	// System.Byte Photon.Voice.VoiceClient::globalInterestGroup
	uint8_t ___globalInterestGroup_14;
	// System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.LocalVoice> Photon.Voice.VoiceClient::localVoices
	Dictionary_2_t9BCB1EF5FB3243318BCCD0B9F1205D8982078DB6* ___localVoices_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Photon.Voice.LocalVoice>> Photon.Voice.VoiceClient::localVoicesPerChannel
	Dictionary_2_t773C42CA748B22AFB473FAB0E78E4607520F48A6* ___localVoicesPerChannel_16;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Byte,Photon.Voice.RemoteVoice>> Photon.Voice.VoiceClient::remoteVoices
	Dictionary_2_t4D6C72EB38C86FF1A6F195CBF4C5F9490574834A* ___remoteVoices_17;
	// System.Random Photon.Voice.VoiceClient::rnd
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rnd_18;
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// Facebook.WitAi.Lib.WitResponseNode
struct WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// Photon.Voice.OpusCodec/DecoderFactory
struct DecoderFactory_tE6D427EEEE73CBE10A9B929801BA0CED520A894E  : public RuntimeObject
{
};

// Photon.Voice.OpusCodec/Factory
struct Factory_t05B4D8E1BA312F36E72DBFC0D95F7F296BF563CC  : public RuntimeObject
{
};

// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries
struct ExtensionEntries_t2B5F6450518AD72E0D31B0DC581F8B36448B50AF  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector3>> Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::_vector3Entries
	List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B* ____vector3Entries_1;
	// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector4>> Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::_vector4Entries
	List_1_t9CEEFCCC9B23A162158811AC97949D814329569E* ____vector4Entries_2;
	// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Single>> Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::_floatEntries
	List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0* ____floatEntries_3;
	// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Int32>> Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::_intEntries
	List_1_t941E36F7444B6E85114CF22035CB833E55C9D086* ____intEntries_4;
	// System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Texture2D>> Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::_textureEntries
	List_1_t087A9CD6ECE16049438D0BA69E67668E8EABBD90* ____textureEntries_5;
};

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters_0;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Int32>
struct ExtensionEntry_1_tF2C4369D973C4DBC0C068E5D57B9696534CCDA19 
{
	// System.String Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1::_name
	String_t* ____name_0;
	// T Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1::_payload
	int32_t ____payload_1;
};

// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Single>
struct ExtensionEntry_1_tA92D0E18425FA6278BFDE762213B76BE8DC0FBF8 
{
	// System.String Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1::_name
	String_t* ____name_0;
	// T Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1::_payload
	float ____payload_1;
};

// Unity.Collections.NativeArray`1<UnityEngine.BoneWeight>
struct NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Color>
struct NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector4>
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A 
{
	// UnityEngine.UIElements.StyleValueCollection UnityEngine.UIElements.Experimental.StyleValues::m_StyleValues
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 
{
	// Photon.Voice.Codec Photon.Voice.VoiceInfo::<Codec>k__BackingField
	int32_t ___U3CCodecU3Ek__BackingField_0;
	// System.Int32 Photon.Voice.VoiceInfo::<SamplingRate>k__BackingField
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	// System.Int32 Photon.Voice.VoiceInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 Photon.Voice.VoiceInfo::<FrameDurationUs>k__BackingField
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.VoiceInfo::<Bitrate>k__BackingField
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	// System.Int32 Photon.Voice.VoiceInfo::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;
	// System.Int32 Photon.Voice.VoiceInfo::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_6;
	// System.Int32 Photon.Voice.VoiceInfo::<FPS>k__BackingField
	int32_t ___U3CFPSU3Ek__BackingField_7;
	// System.Int32 Photon.Voice.VoiceInfo::<KeyFrameInt>k__BackingField
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	// System.Object Photon.Voice.VoiceInfo::<UserData>k__BackingField
	RuntimeObject* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for P/Invoke marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404_marshaled_pinvoke
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Photon.Voice.VoiceInfo
struct VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404_marshaled_com
{
	int32_t ___U3CCodecU3Ek__BackingField_0;
	int32_t ___U3CSamplingRateU3Ek__BackingField_1;
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	int32_t ___U3CFrameDurationUsU3Ek__BackingField_3;
	int32_t ___U3CBitrateU3Ek__BackingField_4;
	int32_t ___U3CWidthU3Ek__BackingField_5;
	int32_t ___U3CHeightU3Ek__BackingField_6;
	int32_t ___U3CFPSU3Ek__BackingField_7;
	int32_t ___U3CKeyFrameIntU3Ek__BackingField_8;
	Il2CppIUnknown* ___U3CUserDataU3Ek__BackingField_9;
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

// Facebook.WitAi.Lib.WitResponseArray
struct WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05  : public WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB
{
	// System.Collections.Generic.List`1<Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseArray::m_List
	List_1_tC18B126FC489EF27D70BE515FE2369EB10D5FD4C* ___m_List_0;
};

// Facebook.WitAi.Lib.WitResponseClass
struct WitResponseClass_t739569309AE400E308EB8DD834327086751C855C  : public WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB
{
	// System.Collections.Generic.Dictionary`2<System.String,Facebook.WitAi.Lib.WitResponseNode> Facebook.WitAi.Lib.WitResponseClass::m_Dict
	Dictionary_2_tC75B15D6BE3719CB8EEF14082A03D3744B788B4F* ___m_Dict_0;
};

// Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry
struct ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C 
{
	// Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntryType Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry::entryType
	int32_t ___entryType_0;
	// System.UInt32 Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry::nameBufferSize
	uint32_t ___nameBufferSize_1;
	// System.UInt32 Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry::dataBufferSize
	uint32_t ___dataBufferSize_2;
};

// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker
struct VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C 
{
	// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::ranges
	BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* ___ranges_0;
	// System.Int32 Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::totalVerts
	int32_t ___totalVerts_1;
	// System.Boolean Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::needsRepacking
	bool ___needsRepacking_2;
};
// Native definition for P/Invoke marshalling of Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker
struct VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C_marshaled_pinvoke
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* ___ranges_0;
	int32_t ___totalVerts_1;
	int32_t ___needsRepacking_2;
};
// Native definition for COM marshalling of Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker
struct VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C_marshaled_com
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* ___ranges_0;
	int32_t ___totalVerts_1;
	int32_t ___needsRepacking_2;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange
struct BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE 
{
	// System.Int32 Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::_firstIndex
	int32_t ____firstIndex_0;
	// System.Int32 Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::_lastIndex
	int32_t ____lastIndex_1;
	// System.Int32 Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::_sliceLength
	int32_t ____sliceLength_2;
};

// Photon.Voice.VoiceClient/<>c__DisplayClass50_0`1<System.Object>
struct U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF  : public RuntimeObject
{
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<>c__DisplayClass50_0`1::<>4__this
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___U3CU3E4__this_0;
	// Photon.Voice.IEncoder Photon.Voice.VoiceClient/<>c__DisplayClass50_0`1::encoder
	RuntimeObject* ___encoder_1;
	// Photon.Voice.VoiceInfo Photon.Voice.VoiceClient/<>c__DisplayClass50_0`1::voiceInfo
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___voiceInfo_2;
	// System.Int32 Photon.Voice.VoiceClient/<>c__DisplayClass50_0`1::frameSize
	int32_t ___frameSize_3;
};

// Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1<System.Int16>
struct U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4  : public RuntimeObject
{
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::<>4__this
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___U3CU3E4__this_0;
	// Photon.Voice.IEncoder Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::encoder
	RuntimeObject* ___encoder_1;
	// Photon.Voice.VoiceInfo Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::voiceInfo
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___voiceInfo_2;
	// Photon.Voice.IAudioDesc Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::audioSourceDesc
	RuntimeObject* ___audioSourceDesc_3;
};

// Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1<System.Object>
struct U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0  : public RuntimeObject
{
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::<>4__this
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___U3CU3E4__this_0;
	// Photon.Voice.IEncoder Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::encoder
	RuntimeObject* ___encoder_1;
	// Photon.Voice.VoiceInfo Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::voiceInfo
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___voiceInfo_2;
	// Photon.Voice.IAudioDesc Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::audioSourceDesc
	RuntimeObject* ___audioSourceDesc_3;
};

// Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1<System.Single>
struct U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054  : public RuntimeObject
{
	// Photon.Voice.VoiceClient Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::<>4__this
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___U3CU3E4__this_0;
	// Photon.Voice.IEncoder Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::encoder
	RuntimeObject* ___encoder_1;
	// Photon.Voice.VoiceInfo Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::voiceInfo
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___voiceInfo_2;
	// Photon.Voice.IAudioDesc Photon.Voice.VoiceClient/<>c__DisplayClass51_0`1::audioSourceDesc
	RuntimeObject* ___audioSourceDesc_3;
};

// Photon.Voice.OpusCodec/Encoder`1<System.Int16>
struct Encoder_1_t2842F88FA239B8D1A704F222556A99B53E77F796  : public RuntimeObject
{
	// POpusCodec.OpusEncoder Photon.Voice.OpusCodec/Encoder`1::encoder
	OpusEncoder_t185F1B5A0522F6EC47DB0F685DFE7A9D7E0CC6A8* ___encoder_0;
	// System.Boolean Photon.Voice.OpusCodec/Encoder`1::disposed
	bool ___disposed_1;
	// System.String Photon.Voice.OpusCodec/Encoder`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> Photon.Voice.OpusCodec/Encoder`1::<Output>k__BackingField
	Action_2_t200A26AA6AFF8C50FAAC2D6D43B25E7718E3A18A* ___U3COutputU3Ek__BackingField_3;
};

struct Encoder_1_t2842F88FA239B8D1A704F222556A99B53E77F796_StaticFields
{
	// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/Encoder`1::EmptyBuffer
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___EmptyBuffer_4;
};

// Photon.Voice.OpusCodec/Encoder`1<System.Single>
struct Encoder_1_t46069E40DA962B35E5C8B5F6DAA6864D1A649EB8  : public RuntimeObject
{
	// POpusCodec.OpusEncoder Photon.Voice.OpusCodec/Encoder`1::encoder
	OpusEncoder_t185F1B5A0522F6EC47DB0F685DFE7A9D7E0CC6A8* ___encoder_0;
	// System.Boolean Photon.Voice.OpusCodec/Encoder`1::disposed
	bool ___disposed_1;
	// System.String Photon.Voice.OpusCodec/Encoder`1::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Action`2<System.ArraySegment`1<System.Byte>,Photon.Voice.FrameFlags> Photon.Voice.OpusCodec/Encoder`1::<Output>k__BackingField
	Action_2_t200A26AA6AFF8C50FAAC2D6D43B25E7718E3A18A* ___U3COutputU3Ek__BackingField_3;
};

struct Encoder_1_t46069E40DA962B35E5C8B5F6DAA6864D1A649EB8_StaticFields
{
	// System.ArraySegment`1<System.Byte> Photon.Voice.OpusCodec/Encoder`1::EmptyBuffer
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___EmptyBuffer_4;
};

// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector3>
struct ExtensionEntry_1_t3122008635A0240B51467C3F8B72DB740693D3E7 
{
	// System.String Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1::_name
	String_t* ____name_0;
	// T Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1::_payload
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____payload_1;
};

// Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector4>
struct ExtensionEntry_1_tB2BE801FD5C4993FB45DEE1343D057605BBFF0F2 
{
	// System.String Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1::_name
	String_t* ____name_0;
	// T Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1::_payload
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____payload_1;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_StartTimeMs
	int64_t ___m_StartTimeMs_0;
	// System.Int32 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_DurationMs
	int32_t ___m_DurationMs_1;
	// System.Func`2<System.Single,System.Single> UnityEngine.UIElements.Experimental.ValueAnimation`1::<easingCurve>k__BackingField
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___U3CeasingCurveU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<isRunning>k__BackingField
	bool ___U3CisRunningU3Ek__BackingField_3;
	// System.Action UnityEngine.UIElements.Experimental.ValueAnimation`1::<onAnimationCompleted>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConAnimationCompletedU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<autoRecycle>k__BackingField
	bool ___U3CautoRecycleU3Ek__BackingField_5;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<recycled>k__BackingField
	bool ___U3CrecycledU3Ek__BackingField_6;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Experimental.ValueAnimation`1::<owner>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CownerU3Ek__BackingField_8;
	// System.Action`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<valueUpdated>k__BackingField
	Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___U3CvalueUpdatedU3Ek__BackingField_9;
	// System.Func`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<initialValue>k__BackingField
	Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___U3CinitialValueU3Ek__BackingField_10;
	// System.Func`4<T,T,System.Single,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<interpolator>k__BackingField
	Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5* ___U3CinterpolatorU3Ek__BackingField_11;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::_from
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ____from_12;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::fromValueSet
	bool ___fromValueSet_13;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::<to>k__BackingField
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___U3CtoU3Ek__BackingField_14;
};

struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t048E004E7532AED8FD10569876C6065B7527D2AE* ___sObjectPool_7;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
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

// Photon.Voice.LocalVoice
struct LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5  : public RuntimeObject
{
	// System.Byte Photon.Voice.LocalVoice::<InterestGroup>k__BackingField
	uint8_t ___U3CInterestGroupU3Ek__BackingField_1;
	// System.Boolean Photon.Voice.LocalVoice::transmitEnabled
	bool ___transmitEnabled_2;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSent>k__BackingField
	int32_t ___U3CFramesSentU3Ek__BackingField_3;
	// System.Int32 Photon.Voice.LocalVoice::<FramesSentBytes>k__BackingField
	int32_t ___U3CFramesSentBytesU3Ek__BackingField_4;
	// System.Boolean Photon.Voice.LocalVoice::<Reliable>k__BackingField
	bool ___U3CReliableU3Ek__BackingField_5;
	// System.Boolean Photon.Voice.LocalVoice::<Encrypt>k__BackingField
	bool ___U3CEncryptU3Ek__BackingField_6;
	// Photon.Voice.IServiceable Photon.Voice.LocalVoice::<LocalUserServiceable>k__BackingField
	RuntimeObject* ___U3CLocalUserServiceableU3Ek__BackingField_7;
	// System.Boolean Photon.Voice.LocalVoice::debugEchoMode
	bool ___debugEchoMode_8;
	// Photon.Voice.VoiceInfo Photon.Voice.LocalVoice::info
	VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___info_9;
	// Photon.Voice.IEncoder Photon.Voice.LocalVoice::encoder
	RuntimeObject* ___encoder_10;
	// System.Byte Photon.Voice.LocalVoice::id
	uint8_t ___id_11;
	// System.Int32 Photon.Voice.LocalVoice::channelId
	int32_t ___channelId_12;
	// System.Byte Photon.Voice.LocalVoice::evNumber
	uint8_t ___evNumber_13;
	// Photon.Voice.VoiceClient Photon.Voice.LocalVoice::voiceClient
	VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* ___voiceClient_14;
	// System.ArraySegment`1<System.Byte> Photon.Voice.LocalVoice::configFrame
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___configFrame_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Photon.Voice.LocalVoice::disposed
	bool ___disposed_16;
	// System.Object Photon.Voice.LocalVoice::disposeLock
	RuntimeObject* ___disposeLock_17;
	// System.Int32 Photon.Voice.LocalVoice::lastTransmitTime
	int32_t ___lastTransmitTime_19;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> Photon.Voice.LocalVoice::eventTimestamps
	Dictionary_2_tC5EFC8C0218B7680694715DA3F5E01A6F20D84A5* ___eventTimestamps_20;
	// Photon.Voice.SpacingProfile Photon.Voice.LocalVoice::sendSpacingProfile
	SpacingProfile_t0483DDC2A366FC7433811227ED441A9A9A7DDB8F* ___sendSpacingProfile_21;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
};

// Photon.Voice.LocalVoiceFramedBase
struct LocalVoiceFramedBase_tC699DAAA29C0169332C1044A51E5F3DC3FC934CD  : public LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5
{
	// System.Int32 Photon.Voice.LocalVoiceFramedBase::<FrameSize>k__BackingField
	int32_t ___U3CFrameSizeU3Ek__BackingField_22;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
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

// Photon.Voice.UnsupportedCodecException
struct UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD  : public Exception_t
{
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_7;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_8;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_13;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_15;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_16;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_17;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_19;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_20;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_25;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_27;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_28;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_29;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_32;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_33;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_34;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_35;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_36;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_37;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_38;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_39;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_40;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_41;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_42;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_44;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_45;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_47;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_49;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_51;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_52;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_53;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_54;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_55;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_57;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_58;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_59;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_61;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_62;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_6;
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_9;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_10;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_11;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_30;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_46;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_48;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_56;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_60;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_63;
};

// Photon.Voice.OpusCodec/EncoderFloat
struct EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116  : public Encoder_1_t46069E40DA962B35E5C8B5F6DAA6864D1A649EB8
{
};

// Photon.Voice.OpusCodec/EncoderShort
struct EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD  : public Encoder_1_t2842F88FA239B8D1A704F222556A99B53E77F796
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227  : public MulticastDelegate_t
{
};

// System.Func`3<System.Byte,System.Int32,Photon.Voice.LocalVoice>
struct Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622  : public MulticastDelegate_t
{
};

// Photon.Voice.LocalVoiceFramed`1<System.Int16>
struct LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685  : public LocalVoiceFramedBase_tC699DAAA29C0169332C1044A51E5F3DC3FC934CD
{
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t2248AB183633142E9ECB9AF3887CD0BCFBC53E49* ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t56C399170B8C69EBC036B77887F390023096B41E* ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t14EF0606E13D5B3F00CC8BB3D1A884D4EBC902F1* ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_tB055A6ACC068A4C7F8EFC1044FC41318895C11DC* ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;
};

// Photon.Voice.LocalVoiceFramed`1<System.Object>
struct LocalVoiceFramed_1_t21DADC8C3248CDE14C3DF660AC0CC689D5CAABF9  : public LocalVoiceFramedBase_tC699DAAA29C0169332C1044A51E5F3DC3FC934CD
{
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_tAEE454F324B66F92067906017D46B5217F363B6C* ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_tA781798CD5F51DFFC0158FF6EAD1B72D0D77E6B6* ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t63151ABE83115FA4760EE1D959AAE3D855FD18F0* ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_tBA96E4D81636F01E0D94A0CD0C1DAA4F084DC151* ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;
};

// Photon.Voice.LocalVoiceFramed`1<System.Single>
struct LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903  : public LocalVoiceFramedBase_tC699DAAA29C0169332C1044A51E5F3DC3FC934CD
{
	// Photon.Voice.Framer`1<T> Photon.Voice.LocalVoiceFramed`1::framer
	Framer_1_t16E279F64AC5E7960C414BC32A949C3201DE3D3F* ___framer_23;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::preProcessorsCnt
	int32_t ___preProcessorsCnt_24;
	// System.Collections.Generic.List`1<Photon.Voice.IProcessor`1<T>> Photon.Voice.LocalVoiceFramed`1::processors
	List_1_t5D8363CA3072E22D576E4A89AE3FBA73294733CB* ___processors_25;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::dataEncodeThreadStarted
	bool ___dataEncodeThreadStarted_26;
	// System.Collections.Generic.Queue`1<T[]> Photon.Voice.LocalVoiceFramed`1::pushDataQueue
	Queue_1_t9F32AD4F084E1C073F589733BD477395C0E3BDF2* ___pushDataQueue_27;
	// System.Threading.AutoResetEvent Photon.Voice.LocalVoiceFramed`1::pushDataQueueReady
	AutoResetEvent_t7F792F3F7AD11BEF7B411E771D98E5266A8CE7C0* ___pushDataQueueReady_28;
	// Photon.Voice.FactoryPrimitiveArrayPool`1<T> Photon.Voice.LocalVoiceFramed`1::bufferFactory
	FactoryPrimitiveArrayPool_1_tA8D0BF61C8C68AE9A7CB48A34477EE922C3DE819* ___bufferFactory_29;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkippedNextLog
	int32_t ___framesSkippedNextLog_30;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::framesSkipped
	int32_t ___framesSkipped_31;
	// System.Boolean Photon.Voice.LocalVoiceFramed`1::exitThread
	bool ___exitThread_32;
	// System.Int32 Photon.Voice.LocalVoiceFramed`1::processNullFramesCnt
	int32_t ___processNullFramesCnt_33;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// Photon.Voice.LocalVoiceAudio`1<System.Int16>
struct LocalVoiceAudio_1_t79793DEA4E6913264A149098BA68EC7B5EB77D0E  : public LocalVoiceFramed_1_tFA780290F30CCA1685CC3DD270208285A1BDE685
{
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t7BDAD9540189437AC15AA78B81E91DBEE49FBC1E* ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_t4C76F5F954EC4E034F19CE3D593BD670BE50D18E* ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t559A7216FC269315AE65ED3047BB7C8EF6F6D6BE* ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;
};

// Photon.Voice.LocalVoiceAudio`1<System.Object>
struct LocalVoiceAudio_1_tFDA93450E354F098FAC4236B9E0027906C346932  : public LocalVoiceFramed_1_t21DADC8C3248CDE14C3DF660AC0CC689D5CAABF9
{
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t092E4B9BE813827A7F58FC853524EF6230F57804* ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_tB49D36D90B2FF6040DDC4FDA49E3D73A2217C6C3* ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_tC0B2CE83A650EE9AA90BE85B328C2DDACAC1EBBA* ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;
};

// Photon.Voice.LocalVoiceAudio`1<System.Single>
struct LocalVoiceAudio_1_t6BD9B22B1E26EE56F5CB5B8E5018880195D19A14  : public LocalVoiceFramed_1_t413190758F8F973F0B050AB3B41D39DB9D3EA903
{
	// Photon.Voice.AudioUtil/VoiceDetector`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetector
	VoiceDetector_1_t30CE0AE84EA0D6D904546C4C28DEA3561850FB6B* ___voiceDetector_34;
	// Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> Photon.Voice.LocalVoiceAudio`1::voiceDetectorCalibration
	VoiceDetectorCalibration_1_t41D99B779BA06DABD1A4F1FF8FEF4E57AB4D3A51* ___voiceDetectorCalibration_35;
	// Photon.Voice.AudioUtil/LevelMeter`1<T> Photon.Voice.LocalVoiceAudio`1::levelMeter
	LevelMeter_1_t7E2F5A99073FF94E3A16E448C1ADB40C2E7D30BD* ___levelMeter_36;
	// System.Int32 Photon.Voice.LocalVoiceAudio`1::channels
	int32_t ___channels_37;
	// System.Boolean Photon.Voice.LocalVoiceAudio`1::resampleSource
	bool ___resampleSource_38;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
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
// Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange[]
struct BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D  : public RuntimeArray
{
	ALIGN_FIELD (8) BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE m_Items[1];

	inline BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Func`3<System.Byte,System.Int32,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_3__ctor_mBB76D3DCC2FC5FF0EFDF22DF507856798CE64B53_gshared (Func_3_t47C050995DF9BD235A841BC0DBBBD05F2E5EDF2E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Int32>::.ctor(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionEntry_1__ctor_m772B54D27B63B1AE579E70E23B318AA05132CAC9_gshared (ExtensionEntry_1_tF2C4369D973C4DBC0C068E5D57B9696534CCDA19* __this, String_t* ___name0, int32_t ___payload1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Single>::.ctor(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionEntry_1__ctor_m4C5EFF7625F8EF4BD83AAE39E5AA03F25914F7C4_gshared (ExtensionEntry_1_tA92D0E18425FA6278BFDE762213B76BE8DC0FBF8* __this, String_t* ___name0, float ___payload1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector3>::.ctor(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionEntry_1__ctor_m75F4811FBDC907117BB0D81A21A00141FC7ABAA6_gshared (ExtensionEntry_1_t3122008635A0240B51467C3F8B72DB740693D3E7* __this, String_t* ___name0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___payload1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector4>::.ctor(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensionEntry_1__ctor_m72CEA0472FA3DB590252B49E40B4682151794D52_gshared (ExtensionEntry_1_tB2BE801FD5C4993FB45DEE1343D057605BBFF0F2* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___payload1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8_gshared (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___input0, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___buffer0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_gshared (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<System.Single>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___input0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<System.Single>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___buffer0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___input0, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___buffer0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector4>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m583C7489D7AAC57700B48C9035CC3BE3379872E4_gshared (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___input0, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___buffer0, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___input0, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method) ;
// T[] Unity.Collections.NativeArray`1<UnityEngine.BoneWeight>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* NativeArray_1_ToArray_m441FA1D89C6036CFEBD2B2C4FC75BDC43E92AEC7_gshared (NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* __this, const RuntimeMethod* method) ;
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___buffer0, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method) ;
// T[] Unity.Collections.NativeArray`1<UnityEngine.Vector3>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NativeArray_1_ToArray_m819258262F28D1547F1CD1DDF79FFE7ED75EE869_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method) ;

// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase,UnityEngine.UIElements.IVisualTreeUpdater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Func`3<System.Byte,System.Int32,Photon.Voice.LocalVoice>::.ctor(System.Object,System.IntPtr)
inline void Func_3__ctor_m8D407AAD82D7ECD513E495E93FB77E2CDD555D1B (Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_3__ctor_mBB76D3DCC2FC5FF0EFDF22DF507856798CE64B53_gshared)(__this, ___object0, ___method1, method);
}
// Photon.Voice.LocalVoice Photon.Voice.VoiceClient::createLocalVoice(System.Int32,System.Func`3<System.Byte,System.Int32,Photon.Voice.LocalVoice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* VoiceClient_createLocalVoice_m68F991380E45D58F523C81903B7B8E74F02A925C (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, int32_t ___channelId0, Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622* ___voiceFactory1, const RuntimeMethod* method) ;
// System.Boolean Facebook.WitAi.Lib.WitResponseClass::HasChild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WitResponseClass_HasChild_m299BE438792953C23A8BE30B83096CC1BDE5CD38 (WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* __this, String_t* ___child0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::Remove(TKey)
inline bool Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___localref0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Photon.Voice.OpusCodec/EncoderFloat::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderFloat__ctor_m0991241DD1FE17E2F3746983B476AD2A0140A918 (EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116* __this, VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method) ;
// System.Void Photon.Voice.OpusCodec/EncoderShort::.ctor(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EncoderShort__ctor_m8EF1D2500A53BCBFD9307669E3663E960A34DEF6 (EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD* __this, VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method) ;
// Photon.Voice.Codec Photon.Voice.VoiceInfo::get_Codec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_m163BADA5CCA44EF0C9E48346ED20E7CC33B24BE2_inline (VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404* __this, const RuntimeMethod* method) ;
// System.Void Photon.Voice.UnsupportedCodecException::.ctor(System.String,Photon.Voice.Codec)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedCodecException__ctor_mED5DA50DE20213B277BBDF990064B930B98F4D63 (UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD* __this, String_t* ___info0, int32_t ___codec1, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarLog::Assert(System.Boolean,System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C (bool ___condition0, String_t* ___scope1, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context2, const RuntimeMethod* method) ;
// System.Boolean Oculus.Avatar2.CAPI::OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,System.Byte*,System.UInt32,System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32 (int32_t ___id0, uint32_t ___materialExtensionIndex1, uint32_t ___entryIndex2, uint8_t* ___nameBuffer3, uint32_t ___nameBufferSize4, uint8_t* ___dataBuffer5, uint32_t ___dataBufferSize6, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarLog::LogWarning(System.String,System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatarLog_LogWarning_mB4F2526B60482139DB8CAC344DEAFA92040AAFA5 (String_t* ___msg0, String_t* ___scope1, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context2, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A (intptr_t ___ptr0, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Int32>::.ctor(System.String,T)
inline void ExtensionEntry_1__ctor_m772B54D27B63B1AE579E70E23B318AA05132CAC9 (ExtensionEntry_1_tF2C4369D973C4DBC0C068E5D57B9696534CCDA19* __this, String_t* ___name0, int32_t ___payload1, const RuntimeMethod* method)
{
	((  void (*) (ExtensionEntry_1_tF2C4369D973C4DBC0C068E5D57B9696534CCDA19*, String_t*, int32_t, const RuntimeMethod*))ExtensionEntry_1__ctor_m772B54D27B63B1AE579E70E23B318AA05132CAC9_gshared)(__this, ___name0, ___payload1, method);
}
// System.Void Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<System.Single>::.ctor(System.String,T)
inline void ExtensionEntry_1__ctor_m4C5EFF7625F8EF4BD83AAE39E5AA03F25914F7C4 (ExtensionEntry_1_tA92D0E18425FA6278BFDE762213B76BE8DC0FBF8* __this, String_t* ___name0, float ___payload1, const RuntimeMethod* method)
{
	((  void (*) (ExtensionEntry_1_tA92D0E18425FA6278BFDE762213B76BE8DC0FBF8*, String_t*, float, const RuntimeMethod*))ExtensionEntry_1__ctor_m4C5EFF7625F8EF4BD83AAE39E5AA03F25914F7C4_gshared)(__this, ___name0, ___payload1, method);
}
// System.Void Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector3>::.ctor(System.String,T)
inline void ExtensionEntry_1__ctor_m75F4811FBDC907117BB0D81A21A00141FC7ABAA6 (ExtensionEntry_1_t3122008635A0240B51467C3F8B72DB740693D3E7* __this, String_t* ___name0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___payload1, const RuntimeMethod* method)
{
	((  void (*) (ExtensionEntry_1_t3122008635A0240B51467C3F8B72DB740693D3E7*, String_t*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))ExtensionEntry_1__ctor_m75F4811FBDC907117BB0D81A21A00141FC7ABAA6_gshared)(__this, ___name0, ___payload1, method);
}
// System.Void Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<UnityEngine.Vector4>::.ctor(System.String,T)
inline void ExtensionEntry_1__ctor_m72CEA0472FA3DB590252B49E40B4682151794D52 (ExtensionEntry_1_tB2BE801FD5C4993FB45DEE1343D057605BBFF0F2* __this, String_t* ___name0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___payload1, const RuntimeMethod* method)
{
	((  void (*) (ExtensionEntry_1_tB2BE801FD5C4993FB45DEE1343D057605BBFF0F2*, String_t*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3, const RuntimeMethod*))ExtensionEntry_1__ctor_m72CEA0472FA3DB590252B49E40B4682151794D52_gshared)(__this, ___name0, ___payload1, method);
}
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___condition0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Color>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8 (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___input0, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC_gshared)(__this, ___buffer0, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Single>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004 (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<System.Single>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___input0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<System.Single>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B_gshared)(__this, ___buffer0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391 (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___input0, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46_gshared)(__this, ___buffer0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7 (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510_gshared)(__this, ___buffer0, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector4>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m583C7489D7AAC57700B48C9035CC3BE3379872E4 (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m583C7489D7AAC57700B48C9035CC3BE3379872E4_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___input0, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F_gshared)(__this, ___input0, ___output1, ___outputOffset2, method);
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&)
inline NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___buffer0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*, const RuntimeMethod*))VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01_gshared)(__this, ___buffer0, method);
}
// System.Void Oculus.Avatar2.OvrAvatarLog::LogException(System.String,System.Exception,System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatarLog_LogException_m8D351920B4DD1FB833FB65857850CC8D3192F44D (String_t* ___operationName0, Exception_t* ___exception1, String_t* ___scope2, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context3, const RuntimeMethod* method) ;
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7 (const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarLog::LogError(System.String,System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OvrAvatarLog_LogError_m9BE615217156816F14E948BC84FFEB88A52C3567 (String_t* ___msg0, String_t* ___scope1, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context2, const RuntimeMethod* method) ;
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86 (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___input0, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*, int32_t, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86_gshared)(__this, ___input0, ___output1, ___outputLength2, ___outputOffset3, method);
}
// T[] Unity.Collections.NativeArray`1<UnityEngine.BoneWeight>::ToArray()
inline BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* NativeArray_1_ToArray_m441FA1D89C6036CFEBD2B2C4FC75BDC43E92AEC7 (NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* __this, const RuntimeMethod* method)
{
	return ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*, const RuntimeMethod*))NativeArray_1_ToArray_m441FA1D89C6036CFEBD2B2C4FC75BDC43E92AEC7_gshared)(__this, method);
}
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&)
inline BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___buffer0, const RuntimeMethod* method)
{
	return ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*, const RuntimeMethod*))VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71_gshared)(__this, ___buffer0, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
inline void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method)
{
	((  void (*) (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, int32_t*, const RuntimeMethod*))BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D_gshared)(__this, ___input0, ___output1, ___outputLength2, ___outputOffset3, method);
}
// T[] Unity.Collections.NativeArray`1<UnityEngine.Vector3>::ToArray()
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* NativeArray_1_ToArray_m819258262F28D1547F1CD1DDF79FFE7ED75EE869 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_ToArray_m819258262F28D1547F1CD1DDF79FFE7ED75EE869_gshared)(__this, method);
}
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
inline Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097 (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method)
{
	return ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097_gshared)(__this, ___buffer0, method);
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<UnityEngine.UIElements.Experimental.StyleValues>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* VisualElement_StartAnimation_TisStyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_m85813DA3F6490D0F12C2CB27905500928CAF79EB_gshared (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* ___anim0, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___fromValueGetter1, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___to2, int32_t ___durationMs3, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___onValueChanged4, const RuntimeMethod* method) 
{
	ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* V_0 = NULL;
	{
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_0 = ___anim0;
		Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* L_1 = ___fromValueGetter1;
		NullCheck(L_0);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_2 = ___anim0;
		StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_3 = ___to2;
		NullCheck(L_2);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_4 = ___anim0;
		int32_t L_5 = ___durationMs3;
		NullCheck(L_4);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_6 = ___anim0;
		Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* L_7 = ___onValueChanged4;
		NullCheck(L_6);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_8 = ___anim0;
		NullCheck(L_8);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_9 = ___anim0;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::SetUpdater<System.Object>(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisRuntimeObject_m8476DF92DC347257A6AFCA48272BE51985407784_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = L_4;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)__this->___m_Panel_0;
		NullCheck((RuntimeObject*)(V_1));
		InterfaceActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(0 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::set_panel(UnityEngine.UIElements.BaseVisualElementPanel) */, IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1), L_5);
		RuntimeObject* L_6 = V_1;
		V_0 = L_6;
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_7 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_8 = ___phase0;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_7);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_7, L_8, (RuntimeObject*)L_9, NULL);
		return;
	}
}
// Photon.Voice.LocalVoiceAudio`1<T> Photon.Voice.VoiceClient::CreateLocalVoiceAudio<System.Int16>(Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,Photon.Voice.IEncoder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoiceAudio_1_t79793DEA4E6913264A149098BA68EC7B5EB77D0E* VoiceClient_CreateLocalVoiceAudio_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mFD7389F2D9B705F93600D8718D2ECE42B646BE07_gshared (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___voiceInfo0, RuntimeObject* ___audioSourceDesc1, RuntimeObject* ___encoder2, int32_t ___channelId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4* V_0 = NULL;
	LocalVoiceAudio_1_t79793DEA4E6913264A149098BA68EC7B5EB77D0E* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4* L_0 = (U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4* L_2 = V_0;
		RuntimeObject* L_3 = ___encoder2;
		NullCheck(L_2);
		L_2->___encoder_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___encoder_1), (void*)L_3);
		U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4* L_4 = V_0;
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_5 = ___voiceInfo0;
		NullCheck(L_4);
		L_4->___voiceInfo_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_4->___voiceInfo_2))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
		U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4* L_6 = V_0;
		RuntimeObject* L_7 = ___audioSourceDesc1;
		NullCheck(L_6);
		L_6->___audioSourceDesc_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___audioSourceDesc_3), (void*)L_7);
		// return (LocalVoiceAudio<T>)createLocalVoice(channelId, (vId, chId) => LocalVoiceAudio<T>.Create(this, vId, encoder, voiceInfo, audioSourceDesc, chId));
		int32_t L_8 = ___channelId3;
		U3CU3Ec__DisplayClass51_0_1_t0DF2D4210F062749146449078CE94FDE0D049AD4* L_9 = V_0;
		Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622* L_10 = (Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622*)il2cpp_codegen_object_new(Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_3__ctor_m8D407AAD82D7ECD513E495E93FB77E2CDD555D1B(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_11;
		L_11 = VoiceClient_createLocalVoice_m68F991380E45D58F523C81903B7B8E74F02A925C(__this, L_8, L_10, NULL);
		V_1 = ((LocalVoiceAudio_1_t79793DEA4E6913264A149098BA68EC7B5EB77D0E*)CastclassClass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 3)));
		goto IL_003f;
	}

IL_003f:
	{
		// }
		LocalVoiceAudio_1_t79793DEA4E6913264A149098BA68EC7B5EB77D0E* L_12 = V_1;
		return L_12;
	}
}
// Photon.Voice.LocalVoiceAudio`1<T> Photon.Voice.VoiceClient::CreateLocalVoiceAudio<System.Object>(Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,Photon.Voice.IEncoder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoiceAudio_1_tFDA93450E354F098FAC4236B9E0027906C346932* VoiceClient_CreateLocalVoiceAudio_TisRuntimeObject_m714331EE3066DAF7F5354E2BC170D9F92360D389_gshared (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___voiceInfo0, RuntimeObject* ___audioSourceDesc1, RuntimeObject* ___encoder2, int32_t ___channelId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0* V_0 = NULL;
	LocalVoiceAudio_1_tFDA93450E354F098FAC4236B9E0027906C346932* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0* L_0 = (U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0* L_2 = V_0;
		RuntimeObject* L_3 = ___encoder2;
		NullCheck(L_2);
		L_2->___encoder_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___encoder_1), (void*)L_3);
		U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0* L_4 = V_0;
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_5 = ___voiceInfo0;
		NullCheck(L_4);
		L_4->___voiceInfo_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_4->___voiceInfo_2))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
		U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0* L_6 = V_0;
		RuntimeObject* L_7 = ___audioSourceDesc1;
		NullCheck(L_6);
		L_6->___audioSourceDesc_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___audioSourceDesc_3), (void*)L_7);
		// return (LocalVoiceAudio<T>)createLocalVoice(channelId, (vId, chId) => LocalVoiceAudio<T>.Create(this, vId, encoder, voiceInfo, audioSourceDesc, chId));
		int32_t L_8 = ___channelId3;
		U3CU3Ec__DisplayClass51_0_1_t5B70D1F82DE8B31184C38F6FABE1FB6DC8D405E0* L_9 = V_0;
		Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622* L_10 = (Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622*)il2cpp_codegen_object_new(Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_3__ctor_m8D407AAD82D7ECD513E495E93FB77E2CDD555D1B(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_11;
		L_11 = VoiceClient_createLocalVoice_m68F991380E45D58F523C81903B7B8E74F02A925C(__this, L_8, L_10, NULL);
		V_1 = ((LocalVoiceAudio_1_tFDA93450E354F098FAC4236B9E0027906C346932*)CastclassClass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 3)));
		goto IL_003f;
	}

IL_003f:
	{
		// }
		LocalVoiceAudio_1_tFDA93450E354F098FAC4236B9E0027906C346932* L_12 = V_1;
		return L_12;
	}
}
// Photon.Voice.LocalVoiceAudio`1<T> Photon.Voice.VoiceClient::CreateLocalVoiceAudio<System.Single>(Photon.Voice.VoiceInfo,Photon.Voice.IAudioDesc,Photon.Voice.IEncoder,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoiceAudio_1_t6BD9B22B1E26EE56F5CB5B8E5018880195D19A14* VoiceClient_CreateLocalVoiceAudio_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mD9D16E957A2931DF7B8B98204FA0BA7E4BCF7C8D_gshared (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___voiceInfo0, RuntimeObject* ___audioSourceDesc1, RuntimeObject* ___encoder2, int32_t ___channelId3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054* V_0 = NULL;
	LocalVoiceAudio_1_t6BD9B22B1E26EE56F5CB5B8E5018880195D19A14* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054* L_0 = (U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054* L_2 = V_0;
		RuntimeObject* L_3 = ___encoder2;
		NullCheck(L_2);
		L_2->___encoder_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___encoder_1), (void*)L_3);
		U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054* L_4 = V_0;
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_5 = ___voiceInfo0;
		NullCheck(L_4);
		L_4->___voiceInfo_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_4->___voiceInfo_2))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
		U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054* L_6 = V_0;
		RuntimeObject* L_7 = ___audioSourceDesc1;
		NullCheck(L_6);
		L_6->___audioSourceDesc_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___audioSourceDesc_3), (void*)L_7);
		// return (LocalVoiceAudio<T>)createLocalVoice(channelId, (vId, chId) => LocalVoiceAudio<T>.Create(this, vId, encoder, voiceInfo, audioSourceDesc, chId));
		int32_t L_8 = ___channelId3;
		U3CU3Ec__DisplayClass51_0_1_tAE9CADD59824ABBA8237E804BAAE66DD90F5C054* L_9 = V_0;
		Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622* L_10 = (Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622*)il2cpp_codegen_object_new(Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_3__ctor_m8D407AAD82D7ECD513E495E93FB77E2CDD555D1B(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_11;
		L_11 = VoiceClient_createLocalVoice_m68F991380E45D58F523C81903B7B8E74F02A925C(__this, L_8, L_10, NULL);
		V_1 = ((LocalVoiceAudio_1_t6BD9B22B1E26EE56F5CB5B8E5018880195D19A14*)CastclassClass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 3)));
		goto IL_003f;
	}

IL_003f:
	{
		// }
		LocalVoiceAudio_1_t6BD9B22B1E26EE56F5CB5B8E5018880195D19A14* L_12 = V_1;
		return L_12;
	}
}
// Photon.Voice.LocalVoiceFramed`1<T> Photon.Voice.VoiceClient::CreateLocalVoiceFramed<System.Object>(Photon.Voice.VoiceInfo,System.Int32,System.Int32,Photon.Voice.IEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocalVoiceFramed_1_t21DADC8C3248CDE14C3DF660AC0CC689D5CAABF9* VoiceClient_CreateLocalVoiceFramed_TisRuntimeObject_mC1F707DD548EE4C6F61D108E9A8CA4EC120B2A04_gshared (VoiceClient_t8038478A87E8F714C44193FC74D2A22BC7FDFB4E* __this, VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___voiceInfo0, int32_t ___frameSize1, int32_t ___channelId2, RuntimeObject* ___encoder3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF* V_0 = NULL;
	LocalVoiceFramed_1_t21DADC8C3248CDE14C3DF660AC0CC689D5CAABF9* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF* L_0 = (U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF* L_2 = V_0;
		RuntimeObject* L_3 = ___encoder3;
		NullCheck(L_2);
		L_2->___encoder_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___encoder_1), (void*)L_3);
		U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF* L_4 = V_0;
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_5 = ___voiceInfo0;
		NullCheck(L_4);
		L_4->___voiceInfo_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_4->___voiceInfo_2))->___U3CUserDataU3Ek__BackingField_9), (void*)NULL);
		U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF* L_6 = V_0;
		int32_t L_7 = ___frameSize1;
		NullCheck(L_6);
		L_6->___frameSize_3 = L_7;
		// return (LocalVoiceFramed<T>)createLocalVoice(channelId, (vId, chId) => new LocalVoiceFramed<T>(this, encoder, vId, voiceInfo, chId, frameSize));
		int32_t L_8 = ___channelId2;
		U3CU3Ec__DisplayClass50_0_1_t9645BD2CC19803B683EF49695C029F0D79D60DAF* L_9 = V_0;
		Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622* L_10 = (Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622*)il2cpp_codegen_object_new(Func_3_t5F6FA9AD9B8961AB03DA94B6316304FC26319622_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_3__ctor_m8D407AAD82D7ECD513E495E93FB77E2CDD555D1B(L_10, (RuntimeObject*)L_9, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		LocalVoice_t4FB5D04C1B69E04C83BD6A67C9B63F6A84BA14F5* L_11;
		L_11 = VoiceClient_createLocalVoice_m68F991380E45D58F523C81903B7B8E74F02A925C(__this, L_8, L_10, NULL);
		V_1 = ((LocalVoiceFramed_1_t21DADC8C3248CDE14C3DF660AC0CC689D5CAABF9*)CastclassClass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 3)));
		goto IL_003f;
	}

IL_003f:
	{
		// }
		LocalVoiceFramed_1_t21DADC8C3248CDE14C3DF660AC0CC689D5CAABF9* L_12 = V_1;
		return L_12;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// T Facebook.WitAi.Lib.WitResponseClass::GetChild<System.Object>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitResponseClass_GetChild_TisRuntimeObject_m41C09C603F222BC807529F59FE835E43DF15868E_gshared (WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* __this, String_t* ___aKey0, RuntimeObject* ___defaultValue1, const RuntimeMethod* method) 
{
	WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		// if (!HasChild(aKey))
		String_t* L_0 = ___aKey0;
		bool L_1;
		L_1 = WitResponseClass_HasChild_m299BE438792953C23A8BE30B83096CC1BDE5CD38(__this, L_0, NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return defaultValue;
		RuntimeObject* L_3 = ___defaultValue1;
		V_2 = L_3;
		goto IL_0026;
	}

IL_0014:
	{
		// WitResponseNode node = this[aKey];
		String_t* L_4 = ___aKey0;
		NullCheck((WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*)__this);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_5;
		L_5 = VirtualFuncInvoker1< WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*, String_t* >::Invoke(7 /* Facebook.WitAi.Lib.WitResponseNode Facebook.WitAi.Lib.WitResponseNode::get_Item(System.String) */, (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB*)__this, L_4);
		V_0 = L_5;
		// return node.Cast<T>(defaultValue);
		WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* L_6 = V_0;
		RuntimeObject* L_7 = ___defaultValue1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = GenericVirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), L_6, L_7);
		V_2 = L_8;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// T Facebook.WitAi.Lib.WitResponseNode::Cast<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WitResponseNode_Cast_TisRuntimeObject_m0EAFCB47FBF6C6622CCDF9603BF1D1976EC5786D_gshared (WitResponseNode_tACC149B056FE33C54D55A5EAB653A77902617DBB* __this, RuntimeObject* ___defaultValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WitResponseClass_t739569309AE400E308EB8DD834327086751C855C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53CF3B92E92F867DD4C66BE295D4BD1F4304E602);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FAC12148561FEC937CFC59BDE618CF0AF9BA64D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	RuntimeObject* V_10 = NULL;
	{
		// object result = defaultValue;
		RuntimeObject* L_0 = ___defaultValue0;
		V_0 = L_0;
		// string typeName = typeof(T).ToString();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck((RuntimeObject*)L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_2);
		V_1 = L_3;
		// if (string.Equals(typeName, typeof(string).ToString()))
		String_t* L_4 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck((RuntimeObject*)L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_6);
		bool L_8;
		L_8 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_4, L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// result = this.Value;
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String Facebook.WitAi.Lib.WitResponseNode::get_Value() */, __this);
		V_0 = (RuntimeObject*)L_10;
		goto IL_017f;
	}

IL_003f:
	{
		// else if (string.Equals(typeName, typeof(int).ToString()))
		String_t* L_11 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		NullCheck((RuntimeObject*)L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_13);
		bool L_15;
		L_15 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_11, L_14, NULL);
		V_3 = L_15;
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_006b;
		}
	}
	{
		// result = this.AsInt;
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 Facebook.WitAi.Lib.WitResponseNode::get_AsInt() */, __this);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		V_0 = L_19;
		goto IL_017f;
	}

IL_006b:
	{
		// else if (string.Equals(typeName, typeof(float).ToString()))
		String_t* L_20 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		bool L_24;
		L_24 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_20, L_23, NULL);
		V_4 = L_24;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_0099;
		}
	}
	{
		// result = this.AsFloat;
		float L_26;
		L_26 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single Facebook.WitAi.Lib.WitResponseNode::get_AsFloat() */, __this);
		float L_27 = L_26;
		RuntimeObject* L_28 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_27);
		V_0 = L_28;
		goto IL_017f;
	}

IL_0099:
	{
		// else if (string.Equals(typeName, typeof(double).ToString()))
		String_t* L_29 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		NullCheck((RuntimeObject*)L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_31);
		bool L_33;
		L_33 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_29, L_32, NULL);
		V_5 = L_33;
		bool L_34 = V_5;
		if (!L_34)
		{
			goto IL_00c7;
		}
	}
	{
		// result = this.AsDouble;
		double L_35;
		L_35 = VirtualFuncInvoker0< double >::Invoke(22 /* System.Double Facebook.WitAi.Lib.WitResponseNode::get_AsDouble() */, __this);
		double L_36 = L_35;
		RuntimeObject* L_37 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_36);
		V_0 = L_37;
		goto IL_017f;
	}

IL_00c7:
	{
		// else if (string.Equals(typeName, typeof(bool).ToString()))
		String_t* L_38 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		NullCheck((RuntimeObject*)L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_40);
		bool L_42;
		L_42 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_38, L_41, NULL);
		V_6 = L_42;
		bool L_43 = V_6;
		if (!L_43)
		{
			goto IL_00f5;
		}
	}
	{
		// result = this.AsBool;
		bool L_44;
		L_44 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean Facebook.WitAi.Lib.WitResponseNode::get_AsBool() */, __this);
		bool L_45 = L_44;
		RuntimeObject* L_46 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_45);
		V_0 = L_46;
		goto IL_017f;
	}

IL_00f5:
	{
		// else if (string.Equals(typeName, typeof(string[]).ToString()))
		String_t* L_47 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		NullCheck((RuntimeObject*)L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_49);
		bool L_51;
		L_51 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_47, L_50, NULL);
		V_7 = L_51;
		bool L_52 = V_7;
		if (!L_52)
		{
			goto IL_011b;
		}
	}
	{
		// result = this.AsStringArray;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53;
		L_53 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(27 /* System.String[] Facebook.WitAi.Lib.WitResponseNode::get_AsStringArray() */, __this);
		V_0 = (RuntimeObject*)L_53;
		goto IL_017f;
	}

IL_011b:
	{
		// else if (string.Equals(typeName, typeof(WitResponseArray).ToString()))
		String_t* L_54 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		NullCheck((RuntimeObject*)L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_56);
		bool L_58;
		L_58 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_54, L_57, NULL);
		V_8 = L_58;
		bool L_59 = V_8;
		if (!L_59)
		{
			goto IL_0141;
		}
	}
	{
		// result = this.AsArray;
		WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* L_60;
		L_60 = VirtualFuncInvoker0< WitResponseArray_tB302DB8BD3C7CC1CF016D86CC5606920A2235E05* >::Invoke(26 /* Facebook.WitAi.Lib.WitResponseArray Facebook.WitAi.Lib.WitResponseNode::get_AsArray() */, __this);
		V_0 = (RuntimeObject*)L_60;
		goto IL_017f;
	}

IL_0141:
	{
		// else if (string.Equals(typeName, typeof(WitResponseClass).ToString()))
		String_t* L_61 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (WitResponseClass_t739569309AE400E308EB8DD834327086751C855C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		NullCheck((RuntimeObject*)L_63);
		String_t* L_64;
		L_64 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_63);
		bool L_65;
		L_65 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_61, L_64, NULL);
		V_9 = L_65;
		bool L_66 = V_9;
		if (!L_66)
		{
			goto IL_0167;
		}
	}
	{
		// result = this.AsObject;
		WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* L_67;
		L_67 = VirtualFuncInvoker0< WitResponseClass_t739569309AE400E308EB8DD834327086751C855C* >::Invoke(28 /* Facebook.WitAi.Lib.WitResponseClass Facebook.WitAi.Lib.WitResponseNode::get_AsObject() */, __this);
		V_0 = (RuntimeObject*)L_67;
		goto IL_017f;
	}

IL_0167:
	{
		// Debug.LogWarning($"WitResponseNode - Cast to {typeName} not supported");
		String_t* L_68 = V_1;
		String_t* L_69;
		L_69 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral53CF3B92E92F867DD4C66BE295D4BD1F4304E602, L_68, _stringLiteral6FAC12148561FEC937CFC59BDE618CF0AF9BA64D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)L_69, NULL);
	}

IL_017f:
	{
		// return (T)result;
		RuntimeObject* L_70 = V_0;
		V_10 = ((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0189;
	}

IL_0189:
	{
		// }
		RuntimeObject* L_71 = V_10;
		return L_71;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateIntegratedSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_mBAF3746971CDCF6B58182FF66E5A2B681461DFC7_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateStandaloneSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_m4A018972895E62D6EF6C8AED44E9F620D5A14199_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (descriptors == null)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		V_0 = (bool)((((RuntimeObject*)(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_RuntimeMethod_var)));
	}

IL_0014:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = ___descriptors0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		// if (descriptors.Count > 0)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___descriptors0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_00b2;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7 = ___descriptors0;
		NullCheck(L_7);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_8;
		L_8 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a2:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_2), il2cpp_rgctx_method(method->rgctx_data, 11));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0097_1;
			}

IL_0036_1:
			{
				// foreach (var descriptor in descriptors)
				RuntimeObject* L_9;
				L_9 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_2), il2cpp_rgctx_method(method->rgctx_data, 4));
				V_3 = L_9;
				// ISubsystem subsys = null;
				V_4 = (RuntimeObject*)NULL;
				// if (String.Compare(descriptor.id, id, true) == 0)
				NullCheck((RuntimeObject*)(V_3));
				String_t* L_10;
				L_10 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
				String_t* L_11 = ___id1;
				int32_t L_12;
				L_12 = String_Compare_m9772C6EB9834E1AD625F4663FB9A519AB10A3A14(L_10, L_11, (bool)1, NULL);
				V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
				bool L_13 = V_5;
				if (!L_13)
				{
					goto IL_0070_1;
				}
			}
			{
				// subsys = descriptor.Create();
				NullCheck((RuntimeObject*)(V_3));
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_3));
				V_4 = L_14;
			}

IL_0070_1:
			{
				// if (subsys != null)
				RuntimeObject* L_15 = V_4;
				V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_16 = V_6;
				if (!L_16)
				{
					goto IL_0096_1;
				}
			}
			{
				// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
				Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_17 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_19;
				L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
				RuntimeObject* L_20 = V_4;
				NullCheck(L_17);
				Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6(L_17, L_19, L_20, Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
				// break;
				goto IL_00a0_1;
			}

IL_0096_1:
			{
			}

IL_0097_1:
			{
				// foreach (var descriptor in descriptors)
				bool L_21;
				L_21 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_2), il2cpp_rgctx_method(method->rgctx_data, 9));
				if (L_21)
				{
					goto IL_0036_1;
				}
			}

IL_00a0_1:
			{
				goto IL_00b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b1:
	{
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Type_t* V_2 = NULL;
	bool V_3 = false;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_004b;
		}
	}
	{
		// var subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		V_2 = L_4;
		// if (m_SubsystemInstanceMap.ContainsKey(subsystemType))
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_5 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_6 = V_2;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838(L_5, L_6, Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// m_SubsystemInstanceMap.Remove(subsystemType);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_9 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_10 = V_2;
		NullCheck(L_9);
		bool L_11;
		L_11 = Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533(L_9, L_10, Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
	}

IL_003e:
	{
		// subsystem.Destroy();
		RuntimeObject* L_12 = V_0;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_12);
	}

IL_004b:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_mA4965EC76CEF5709AA6B2611C065E12BD5CA8ACB_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_2 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0029;
	}

IL_0029:
	{
		// }
		RuntimeObject* L_6 = V_2;
		return L_6;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject* L_3 = V_0;
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
	}

IL_0021:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_m9672E32C32CA1F82DB7CE86C58E9B91C5A8983CD_gshared (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return activeLoader as T;
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0;
		L_0 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0014;
	}

IL_0014:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBF1AB84DE0B50E7C206BAD3C170D1F5AD2D9E343_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(bool));
		bool L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		bool L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppChar V_24 = 0x0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m9ECB51B699AB7B96368F39CC9F7C481340DD0BBC_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(Il2CppChar));
		Il2CppChar L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		Il2CppChar L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	double V_24 = 0.0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m1F7F249CC7CDA2D6E136C627D983569B3674EA73_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(double));
		double L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		double L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int16_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int16_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m901F767E3189385BB47B5B021C40507AAF67D477_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int16_t));
		int16_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int16_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int32_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m37A94A4CA9F6456009CABE27D4AA2ED7B8365168_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int32_t));
		int32_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int32_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int64_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mBE697F1C4D60A7F2BB06784B5CB0C540B7FBF664_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int64_t));
		int64_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int64_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject* V_24 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m14AEE119AA362E7E6CA1E751688932596432A71D_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject*));
		RuntimeObject* L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		RuntimeObject* L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m01777984AFB915C1167148BC6056336EB200B151_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int8_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_16, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_22, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_28, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_34, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_40, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_46, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_52, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_58, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m6634501B2BC58937A4D852F6F2D8D55A9DFB6F64_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Boolean>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE35E2A7AB2A1739DB9AEE2664DB6FA8E85B8897A_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Int32>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFD988C7487D7A7810D33F985E48AB82A006E1B7B_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mB0307C88BEC6D444FA5AE28CE89EEBEA0D01F23A_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Single>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m646B71E5782A91A5A247FFAEEA04D44FB31AA619_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5C5661781E8C49E962C2556FC75101FD0E862AFD_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m465627642B00BC71088A5883058BB86DDBADABE0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mA32D3320555971B585058A28FC5F5EC84DC10A34_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF0D2DB5B885B01587820A9F88C6CAD67C8DC1512_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB340108BAAC2DA25B45971B719093FDF9B13E745_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mF114D8205E13517DE4F8DB9772E9C40C7C43BD85_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m7BB44CFD4D80045298CF68828C0FA8F3E1FFE51C_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m362BBB1CC3B8834A056A8F709649BD182E24E9BD_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m86B190CF71EDCB08177B90F98C76A9545AF09FCB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m1BB764DB4D3E393C60E69169020A7EC792D639D5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mD783834059E75BFC7A7FEB544B6ABA307E91B2C4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m74C4D07DCE96BE5E61ED2AAED270DF7469C5F341_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m1E079B67FDC93E1BBE5C29D9C2BC09338DA0A5AA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA85CEF9411BD97B51F86CC460B32C46C2B873B12_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m847042ADF26044DDB60469E1C3477EBBB1B55E11_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m7CC50A493D0C6897ECB2692A7CEFB3A2CD3655A5_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEAD40CF5E1A04E27AE3991DAB10ABB9EC6F37FBB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDD367BE518367698F0093E97FCF201D89B5790CB_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// Photon.Voice.IEncoder Photon.Voice.OpusCodec/DecoderFactory::Create<System.Object>(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DecoderFactory_Create_TisRuntimeObject_mC6382E2970FBE9C24E7C75A3854B399F1F0858F1_gshared (VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	Type_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Type_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// var x = new T[1];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		V_0 = L_0;
		// if (x[0].GetType() == typeof(float))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		NullCheck(L_1);
		NullCheck((*((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
		Type_t* L_2;
		L_2 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((*((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), il2cpp_rgctx_method(method->rgctx_data, 2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// return new EncoderFloat(i, logger);
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_7 = ___i0;
		RuntimeObject* L_8 = ___logger1;
		EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116* L_9 = (EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116*)il2cpp_codegen_object_new(EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EncoderFloat__ctor_m0991241DD1FE17E2F3746983B476AD2A0140A918(L_9, L_7, L_8, NULL);
		V_2 = (RuntimeObject*)L_9;
		goto IL_00a6;
	}

IL_0039:
	{
		// else if (x[0].GetType() == typeof(short))
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		NullCheck(L_10);
		NullCheck((*((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
		Type_t* L_11;
		L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((*((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), il2cpp_rgctx_method(method->rgctx_data, 2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		// return new EncoderShort(i, logger);
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_16 = ___i0;
		RuntimeObject* L_17 = ___logger1;
		EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD* L_18 = (EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD*)il2cpp_codegen_object_new(EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		EncoderShort__ctor_m8EF1D2500A53BCBFD9307669E3663E960A34DEF6(L_18, L_16, L_17, NULL);
		V_2 = (RuntimeObject*)L_18;
		goto IL_00a6;
	}

IL_006a:
	{
		// throw new UnsupportedCodecException("EncoderFactory.Create<" + x[0].GetType() + ">", i.Codec);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		NullCheck(L_19);
		NullCheck((*((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))));
		Type_t* L_20;
		L_20 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((*((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))), il2cpp_rgctx_method(method->rgctx_data, 2));
		Type_t* L_21 = L_20;
		G_B5_0 = L_21;
		G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral366F5191491A26847B86A1FB7FD732FA3F244D50));
		if (L_21)
		{
			G_B6_0 = L_21;
			G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral366F5191491A26847B86A1FB7FD732FA3F244D50));
			goto IL_008a;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_008f;
	}

IL_008a:
	{
		NullCheck((RuntimeObject*)G_B6_0);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B6_0);
		G_B7_0 = L_22;
		G_B7_1 = G_B6_1;
	}

IL_008f:
	{
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B7_1, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5)), NULL);
		int32_t L_24;
		L_24 = VoiceInfo_get_Codec_m163BADA5CCA44EF0C9E48346ED20E7CC33B24BE2_inline((&___i0), NULL);
		UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD* L_25 = (UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		UnsupportedCodecException__ctor_mED5DA50DE20213B277BBDF990064B930B98F4D63(L_25, L_23, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DecoderFactory_Create_TisRuntimeObject_mC6382E2970FBE9C24E7C75A3854B399F1F0858F1_RuntimeMethod_var)));
	}

IL_00a6:
	{
		// }
		RuntimeObject* L_26 = V_2;
		return L_26;
	}
}
// Photon.Voice.IEncoder Photon.Voice.OpusCodec/Factory::CreateEncoder<System.Object>(Photon.Voice.VoiceInfo,Photon.Voice.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Factory_CreateEncoder_TisRuntimeObject_m3C68BF815169707D40FEDFBF9B248274276583F9_gshared (VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 ___i0, RuntimeObject* ___logger1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	Type_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Type_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// if (typeof(B) == typeof(float[]))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// return new EncoderFloat(i, logger);
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_6 = ___i0;
		RuntimeObject* L_7 = ___logger1;
		EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116* L_8 = (EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116*)il2cpp_codegen_object_new(EncoderFloat_t32CD8EA442AD7B738862E4A4DBF766F16A994116_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EncoderFloat__ctor_m0991241DD1FE17E2F3746983B476AD2A0140A918(L_8, L_6, L_7, NULL);
		V_1 = (RuntimeObject*)L_8;
		goto IL_0081;
	}

IL_0028:
	{
		// else if (typeof(B) == typeof(short[]))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		// return new EncoderShort(i, logger);
		VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404 L_15 = ___i0;
		RuntimeObject* L_16 = ___logger1;
		EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD* L_17 = (EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD*)il2cpp_codegen_object_new(EncoderShort_tFDF029ED59B9B1E15EE9E018D8CDF1BF92E72DAD_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EncoderShort__ctor_m8EF1D2500A53BCBFD9307669E3663E960A34DEF6(L_17, L_15, L_16, NULL);
		V_1 = (RuntimeObject*)L_17;
		goto IL_0081;
	}

IL_004f:
	{
		// throw new UnsupportedCodecException("Factory.CreateEncoder<" + typeof(B) + ">", i.Codec);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		Type_t* L_20 = L_19;
		G_B5_0 = L_20;
		G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7914AD61B1796D20A05DBD353FFBD9CEF133C6A9));
		if (L_20)
		{
			G_B6_0 = L_20;
			G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7914AD61B1796D20A05DBD353FFBD9CEF133C6A9));
			goto IL_0065;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_006a;
	}

IL_0065:
	{
		NullCheck((RuntimeObject*)G_B6_0);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B6_0);
		G_B7_0 = L_21;
		G_B7_1 = G_B6_1;
	}

IL_006a:
	{
		String_t* L_22;
		L_22 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B7_1, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5)), NULL);
		int32_t L_23;
		L_23 = VoiceInfo_get_Codec_m163BADA5CCA44EF0C9E48346ED20E7CC33B24BE2_inline((&___i0), NULL);
		UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD* L_24 = (UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedCodecException_t2B908721484FC1A47694922658703E37A2F23DBD_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		UnsupportedCodecException__ctor_mED5DA50DE20213B277BBDF990064B930B98F4D63(L_24, L_22, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Factory_CreateEncoder_TisRuntimeObject_m3C68BF815169707D40FEDFBF9B248274276583F9_RuntimeMethod_var)));
	}

IL_0081:
	{
		// }
		RuntimeObject* L_25 = V_1;
		return L_25;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::GetNameAndPayloadForEntry<System.Int32>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.String&,T*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_GetNameAndPayloadForEntry_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8588F504DB7EFE418170C3AC608B400CE7708BE9_gshared (int32_t ___primitiveId0, uint32_t ___extensionIndex1, uint32_t ___entryIndex2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, String_t** ___entryName4, int32_t* ___outPayload5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// OvrAvatarLog.Assert(metaData.nameBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_0 = ___metaData3;
		uint32_t L_1 = (uint32_t)L_0->___nameBufferSize_1;
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// OvrAvatarLog.Assert(metaData.dataBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_2 = ___metaData3;
		uint32_t L_3 = (uint32_t)L_2->___dataBufferSize_2;
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// uint nameBufferSize = metaData.nameBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_4 = ___metaData3;
		uint32_t L_5 = (uint32_t)L_4->___nameBufferSize_1;
		V_0 = L_5;
		// var nameBuffer = stackalloc byte[(int)nameBufferSize];
		uint32_t L_6 = V_0;
		int8_t* L_7 = (int8_t*) alloca(((uintptr_t)L_6));
		memset(L_7, 0, ((uintptr_t)L_6));
		V_1 = (uint8_t*)(L_7);
		// uint managedSize = (uint)UnsafeUtility.SizeOf<T>();
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_3 = (uint32_t)L_8;
		// uint dataBufferSize = metaData.dataBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_9 = ___metaData3;
		uint32_t L_10 = (uint32_t)L_9->___dataBufferSize_2;
		V_4 = L_10;
		// bool noMarshal = managedSize == dataBufferSize;
		uint32_t L_11 = V_3;
		uint32_t L_12 = V_4;
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		// if (noMarshal)
		bool L_13 = V_5;
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     (byte*)outPayload,
		//     managedSize);
		int32_t L_15 = ___primitiveId0;
		uint32_t L_16 = ___extensionIndex1;
		uint32_t L_17 = ___entryIndex2;
		uint8_t* L_18 = V_1;
		uint32_t L_19 = V_0;
		int32_t* L_20 = ___outPayload5;
		uint32_t L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_15, L_16, L_17, L_18, L_19, (uint8_t*)L_20, L_21, NULL);
		V_2 = L_22;
		goto IL_009a;
	}

IL_0066:
	{
		// var dataBuffer = stackalloc byte[(int)dataBufferSize];
		uint32_t L_23 = V_4;
		int8_t* L_24 = (int8_t*) alloca(((uintptr_t)L_23));
		memset(L_24, 0, ((uintptr_t)L_23));
		V_7 = (uint8_t*)(L_24);
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     dataBuffer,
		//     dataBufferSize);
		int32_t L_25 = ___primitiveId0;
		uint32_t L_26 = ___extensionIndex1;
		uint32_t L_27 = ___entryIndex2;
		uint8_t* L_28 = V_1;
		uint32_t L_29 = V_0;
		uint8_t* L_30 = V_7;
		uint32_t L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_25, L_26, L_27, L_28, L_29, L_30, L_31, NULL);
		V_2 = L_32;
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		bool L_33 = V_2;
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_0099;
		}
	}
	{
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		int32_t* L_35 = ___outPayload5;
		uint8_t* L_36 = V_7;
		intptr_t L_37;
		L_37 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = ((  int32_t (*) (intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int32_t*)L_35 = L_38;
	}

IL_0099:
	{
	}

IL_009a:
	{
		// if (!success)
		bool L_39 = V_2;
		V_9 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00fe;
		}
	}
	{
		// OvrAvatarLog.LogWarning(
		//     @$"MaterialExtensionEntryDataByIndex (extensionIdx:{extensionIndex}, entryIdx:{entryIndex})"
		//     + $"nameSize:{nameBufferSize} managedSize:{managedSize} bufferSize:{dataBufferSize}"
		//     , LOG_SCOPE);
		uint32_t L_41 = ___extensionIndex1;
		uint32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_42);
		uint32_t L_44 = ___entryIndex2;
		uint32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E, L_43, L_46, NULL);
		uint32_t L_48 = V_0;
		uint32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_49);
		uint32_t L_51 = V_3;
		uint32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_52);
		uint32_t L_54 = V_4;
		uint32_t L_55 = L_54;
		RuntimeObject* L_56 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_55);
		String_t* L_57;
		L_57 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66, L_50, L_53, L_56, NULL);
		String_t* L_58;
		L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_47, L_57, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogWarning_mB4F2526B60482139DB8CAC344DEAFA92040AAFA5(L_58, _stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// entryName = string.Empty;
		String_t** L_59 = ___entryName4;
		String_t* L_60 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_59) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)(RuntimeObject*)L_60);
		// *outPayload = default;
		int32_t* L_61 = ___outPayload5;
		il2cpp_codegen_initobj(L_61, sizeof(int32_t));
		// return false;
		V_10 = (bool)0;
		goto IL_0111;
	}

IL_00fe:
	{
		// entryName = Marshal.PtrToStringAnsi((IntPtr)nameBuffer);
		String_t** L_62 = ___entryName4;
		uint8_t* L_63 = V_1;
		intptr_t L_64;
		L_64 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_63, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_65;
		L_65 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_64, NULL);
		*((RuntimeObject**)L_62) = (RuntimeObject*)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_62, (void*)(RuntimeObject*)L_65);
		// return true;
		V_10 = (bool)1;
		goto IL_0111;
	}

IL_0111:
	{
		// }
		bool L_66 = V_10;
		return L_66;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::GetNameAndPayloadForEntry<System.Int32Enum>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.String&,T*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_GetNameAndPayloadForEntry_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m5E31C164CBFE93BB3602ED1BC794BF341B4702F3_gshared (int32_t ___primitiveId0, uint32_t ___extensionIndex1, uint32_t ___entryIndex2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, String_t** ___entryName4, int32_t* ___outPayload5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// OvrAvatarLog.Assert(metaData.nameBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_0 = ___metaData3;
		uint32_t L_1 = (uint32_t)L_0->___nameBufferSize_1;
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// OvrAvatarLog.Assert(metaData.dataBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_2 = ___metaData3;
		uint32_t L_3 = (uint32_t)L_2->___dataBufferSize_2;
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// uint nameBufferSize = metaData.nameBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_4 = ___metaData3;
		uint32_t L_5 = (uint32_t)L_4->___nameBufferSize_1;
		V_0 = L_5;
		// var nameBuffer = stackalloc byte[(int)nameBufferSize];
		uint32_t L_6 = V_0;
		int8_t* L_7 = (int8_t*) alloca(((uintptr_t)L_6));
		memset(L_7, 0, ((uintptr_t)L_6));
		V_1 = (uint8_t*)(L_7);
		// uint managedSize = (uint)UnsafeUtility.SizeOf<T>();
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_3 = (uint32_t)L_8;
		// uint dataBufferSize = metaData.dataBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_9 = ___metaData3;
		uint32_t L_10 = (uint32_t)L_9->___dataBufferSize_2;
		V_4 = L_10;
		// bool noMarshal = managedSize == dataBufferSize;
		uint32_t L_11 = V_3;
		uint32_t L_12 = V_4;
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		// if (noMarshal)
		bool L_13 = V_5;
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     (byte*)outPayload,
		//     managedSize);
		int32_t L_15 = ___primitiveId0;
		uint32_t L_16 = ___extensionIndex1;
		uint32_t L_17 = ___entryIndex2;
		uint8_t* L_18 = V_1;
		uint32_t L_19 = V_0;
		int32_t* L_20 = ___outPayload5;
		uint32_t L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_15, L_16, L_17, L_18, L_19, (uint8_t*)L_20, L_21, NULL);
		V_2 = L_22;
		goto IL_009a;
	}

IL_0066:
	{
		// var dataBuffer = stackalloc byte[(int)dataBufferSize];
		uint32_t L_23 = V_4;
		int8_t* L_24 = (int8_t*) alloca(((uintptr_t)L_23));
		memset(L_24, 0, ((uintptr_t)L_23));
		V_7 = (uint8_t*)(L_24);
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     dataBuffer,
		//     dataBufferSize);
		int32_t L_25 = ___primitiveId0;
		uint32_t L_26 = ___extensionIndex1;
		uint32_t L_27 = ___entryIndex2;
		uint8_t* L_28 = V_1;
		uint32_t L_29 = V_0;
		uint8_t* L_30 = V_7;
		uint32_t L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_25, L_26, L_27, L_28, L_29, L_30, L_31, NULL);
		V_2 = L_32;
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		bool L_33 = V_2;
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_0099;
		}
	}
	{
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		int32_t* L_35 = ___outPayload5;
		uint8_t* L_36 = V_7;
		intptr_t L_37;
		L_37 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_38;
		L_38 = ((  int32_t (*) (intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(int32_t*)L_35 = L_38;
	}

IL_0099:
	{
	}

IL_009a:
	{
		// if (!success)
		bool L_39 = V_2;
		V_9 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00fe;
		}
	}
	{
		// OvrAvatarLog.LogWarning(
		//     @$"MaterialExtensionEntryDataByIndex (extensionIdx:{extensionIndex}, entryIdx:{entryIndex})"
		//     + $"nameSize:{nameBufferSize} managedSize:{managedSize} bufferSize:{dataBufferSize}"
		//     , LOG_SCOPE);
		uint32_t L_41 = ___extensionIndex1;
		uint32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_42);
		uint32_t L_44 = ___entryIndex2;
		uint32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E, L_43, L_46, NULL);
		uint32_t L_48 = V_0;
		uint32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_49);
		uint32_t L_51 = V_3;
		uint32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_52);
		uint32_t L_54 = V_4;
		uint32_t L_55 = L_54;
		RuntimeObject* L_56 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_55);
		String_t* L_57;
		L_57 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66, L_50, L_53, L_56, NULL);
		String_t* L_58;
		L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_47, L_57, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogWarning_mB4F2526B60482139DB8CAC344DEAFA92040AAFA5(L_58, _stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// entryName = string.Empty;
		String_t** L_59 = ___entryName4;
		String_t* L_60 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_59) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)(RuntimeObject*)L_60);
		// *outPayload = default;
		int32_t* L_61 = ___outPayload5;
		il2cpp_codegen_initobj(L_61, sizeof(int32_t));
		// return false;
		V_10 = (bool)0;
		goto IL_0111;
	}

IL_00fe:
	{
		// entryName = Marshal.PtrToStringAnsi((IntPtr)nameBuffer);
		String_t** L_62 = ___entryName4;
		uint8_t* L_63 = V_1;
		intptr_t L_64;
		L_64 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_63, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_65;
		L_65 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_64, NULL);
		*((RuntimeObject**)L_62) = (RuntimeObject*)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_62, (void*)(RuntimeObject*)L_65);
		// return true;
		V_10 = (bool)1;
		goto IL_0111;
	}

IL_0111:
	{
		// }
		bool L_66 = V_10;
		return L_66;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::GetNameAndPayloadForEntry<System.Single>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.String&,T*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_GetNameAndPayloadForEntry_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA5F23C0D250DD674FDF6FD40B59DA2C7DE4216D5_gshared (int32_t ___primitiveId0, uint32_t ___extensionIndex1, uint32_t ___entryIndex2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, String_t** ___entryName4, float* ___outPayload5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// OvrAvatarLog.Assert(metaData.nameBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_0 = ___metaData3;
		uint32_t L_1 = (uint32_t)L_0->___nameBufferSize_1;
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// OvrAvatarLog.Assert(metaData.dataBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_2 = ___metaData3;
		uint32_t L_3 = (uint32_t)L_2->___dataBufferSize_2;
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// uint nameBufferSize = metaData.nameBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_4 = ___metaData3;
		uint32_t L_5 = (uint32_t)L_4->___nameBufferSize_1;
		V_0 = L_5;
		// var nameBuffer = stackalloc byte[(int)nameBufferSize];
		uint32_t L_6 = V_0;
		int8_t* L_7 = (int8_t*) alloca(((uintptr_t)L_6));
		memset(L_7, 0, ((uintptr_t)L_6));
		V_1 = (uint8_t*)(L_7);
		// uint managedSize = (uint)UnsafeUtility.SizeOf<T>();
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_3 = (uint32_t)L_8;
		// uint dataBufferSize = metaData.dataBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_9 = ___metaData3;
		uint32_t L_10 = (uint32_t)L_9->___dataBufferSize_2;
		V_4 = L_10;
		// bool noMarshal = managedSize == dataBufferSize;
		uint32_t L_11 = V_3;
		uint32_t L_12 = V_4;
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		// if (noMarshal)
		bool L_13 = V_5;
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     (byte*)outPayload,
		//     managedSize);
		int32_t L_15 = ___primitiveId0;
		uint32_t L_16 = ___extensionIndex1;
		uint32_t L_17 = ___entryIndex2;
		uint8_t* L_18 = V_1;
		uint32_t L_19 = V_0;
		float* L_20 = ___outPayload5;
		uint32_t L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_15, L_16, L_17, L_18, L_19, (uint8_t*)L_20, L_21, NULL);
		V_2 = L_22;
		goto IL_009a;
	}

IL_0066:
	{
		// var dataBuffer = stackalloc byte[(int)dataBufferSize];
		uint32_t L_23 = V_4;
		int8_t* L_24 = (int8_t*) alloca(((uintptr_t)L_23));
		memset(L_24, 0, ((uintptr_t)L_23));
		V_7 = (uint8_t*)(L_24);
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     dataBuffer,
		//     dataBufferSize);
		int32_t L_25 = ___primitiveId0;
		uint32_t L_26 = ___extensionIndex1;
		uint32_t L_27 = ___entryIndex2;
		uint8_t* L_28 = V_1;
		uint32_t L_29 = V_0;
		uint8_t* L_30 = V_7;
		uint32_t L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_25, L_26, L_27, L_28, L_29, L_30, L_31, NULL);
		V_2 = L_32;
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		bool L_33 = V_2;
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_0099;
		}
	}
	{
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		float* L_35 = ___outPayload5;
		uint8_t* L_36 = V_7;
		intptr_t L_37;
		L_37 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		float L_38;
		L_38 = ((  float (*) (intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(float*)L_35 = L_38;
	}

IL_0099:
	{
	}

IL_009a:
	{
		// if (!success)
		bool L_39 = V_2;
		V_9 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00fe;
		}
	}
	{
		// OvrAvatarLog.LogWarning(
		//     @$"MaterialExtensionEntryDataByIndex (extensionIdx:{extensionIndex}, entryIdx:{entryIndex})"
		//     + $"nameSize:{nameBufferSize} managedSize:{managedSize} bufferSize:{dataBufferSize}"
		//     , LOG_SCOPE);
		uint32_t L_41 = ___extensionIndex1;
		uint32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_42);
		uint32_t L_44 = ___entryIndex2;
		uint32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E, L_43, L_46, NULL);
		uint32_t L_48 = V_0;
		uint32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_49);
		uint32_t L_51 = V_3;
		uint32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_52);
		uint32_t L_54 = V_4;
		uint32_t L_55 = L_54;
		RuntimeObject* L_56 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_55);
		String_t* L_57;
		L_57 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66, L_50, L_53, L_56, NULL);
		String_t* L_58;
		L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_47, L_57, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogWarning_mB4F2526B60482139DB8CAC344DEAFA92040AAFA5(L_58, _stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// entryName = string.Empty;
		String_t** L_59 = ___entryName4;
		String_t* L_60 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_59) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)(RuntimeObject*)L_60);
		// *outPayload = default;
		float* L_61 = ___outPayload5;
		il2cpp_codegen_initobj(L_61, sizeof(float));
		// return false;
		V_10 = (bool)0;
		goto IL_0111;
	}

IL_00fe:
	{
		// entryName = Marshal.PtrToStringAnsi((IntPtr)nameBuffer);
		String_t** L_62 = ___entryName4;
		uint8_t* L_63 = V_1;
		intptr_t L_64;
		L_64 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_63, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_65;
		L_65 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_64, NULL);
		*((RuntimeObject**)L_62) = (RuntimeObject*)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_62, (void*)(RuntimeObject*)L_65);
		// return true;
		V_10 = (bool)1;
		goto IL_0111;
	}

IL_0111:
	{
		// }
		bool L_66 = V_10;
		return L_66;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::GetNameAndPayloadForEntry<UnityEngine.Vector3>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.String&,T*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_GetNameAndPayloadForEntry_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m9C5FAE193ECDCC210F8D2A8EE07ED4FB23FEFD42_gshared (int32_t ___primitiveId0, uint32_t ___extensionIndex1, uint32_t ___entryIndex2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, String_t** ___entryName4, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___outPayload5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// OvrAvatarLog.Assert(metaData.nameBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_0 = ___metaData3;
		uint32_t L_1 = (uint32_t)L_0->___nameBufferSize_1;
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// OvrAvatarLog.Assert(metaData.dataBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_2 = ___metaData3;
		uint32_t L_3 = (uint32_t)L_2->___dataBufferSize_2;
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// uint nameBufferSize = metaData.nameBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_4 = ___metaData3;
		uint32_t L_5 = (uint32_t)L_4->___nameBufferSize_1;
		V_0 = L_5;
		// var nameBuffer = stackalloc byte[(int)nameBufferSize];
		uint32_t L_6 = V_0;
		int8_t* L_7 = (int8_t*) alloca(((uintptr_t)L_6));
		memset(L_7, 0, ((uintptr_t)L_6));
		V_1 = (uint8_t*)(L_7);
		// uint managedSize = (uint)UnsafeUtility.SizeOf<T>();
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_3 = (uint32_t)L_8;
		// uint dataBufferSize = metaData.dataBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_9 = ___metaData3;
		uint32_t L_10 = (uint32_t)L_9->___dataBufferSize_2;
		V_4 = L_10;
		// bool noMarshal = managedSize == dataBufferSize;
		uint32_t L_11 = V_3;
		uint32_t L_12 = V_4;
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		// if (noMarshal)
		bool L_13 = V_5;
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     (byte*)outPayload,
		//     managedSize);
		int32_t L_15 = ___primitiveId0;
		uint32_t L_16 = ___extensionIndex1;
		uint32_t L_17 = ___entryIndex2;
		uint8_t* L_18 = V_1;
		uint32_t L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___outPayload5;
		uint32_t L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_15, L_16, L_17, L_18, L_19, (uint8_t*)L_20, L_21, NULL);
		V_2 = L_22;
		goto IL_009a;
	}

IL_0066:
	{
		// var dataBuffer = stackalloc byte[(int)dataBufferSize];
		uint32_t L_23 = V_4;
		int8_t* L_24 = (int8_t*) alloca(((uintptr_t)L_23));
		memset(L_24, 0, ((uintptr_t)L_23));
		V_7 = (uint8_t*)(L_24);
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     dataBuffer,
		//     dataBufferSize);
		int32_t L_25 = ___primitiveId0;
		uint32_t L_26 = ___extensionIndex1;
		uint32_t L_27 = ___entryIndex2;
		uint8_t* L_28 = V_1;
		uint32_t L_29 = V_0;
		uint8_t* L_30 = V_7;
		uint32_t L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_25, L_26, L_27, L_28, L_29, L_30, L_31, NULL);
		V_2 = L_32;
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		bool L_33 = V_2;
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_0099;
		}
	}
	{
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___outPayload5;
		uint8_t* L_36 = V_7;
		intptr_t L_37;
		L_37 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_35 = L_38;
	}

IL_0099:
	{
	}

IL_009a:
	{
		// if (!success)
		bool L_39 = V_2;
		V_9 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00fe;
		}
	}
	{
		// OvrAvatarLog.LogWarning(
		//     @$"MaterialExtensionEntryDataByIndex (extensionIdx:{extensionIndex}, entryIdx:{entryIndex})"
		//     + $"nameSize:{nameBufferSize} managedSize:{managedSize} bufferSize:{dataBufferSize}"
		//     , LOG_SCOPE);
		uint32_t L_41 = ___extensionIndex1;
		uint32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_42);
		uint32_t L_44 = ___entryIndex2;
		uint32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E, L_43, L_46, NULL);
		uint32_t L_48 = V_0;
		uint32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_49);
		uint32_t L_51 = V_3;
		uint32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_52);
		uint32_t L_54 = V_4;
		uint32_t L_55 = L_54;
		RuntimeObject* L_56 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_55);
		String_t* L_57;
		L_57 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66, L_50, L_53, L_56, NULL);
		String_t* L_58;
		L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_47, L_57, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogWarning_mB4F2526B60482139DB8CAC344DEAFA92040AAFA5(L_58, _stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// entryName = string.Empty;
		String_t** L_59 = ___entryName4;
		String_t* L_60 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_59) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)(RuntimeObject*)L_60);
		// *outPayload = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_61 = ___outPayload5;
		il2cpp_codegen_initobj(L_61, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		V_10 = (bool)0;
		goto IL_0111;
	}

IL_00fe:
	{
		// entryName = Marshal.PtrToStringAnsi((IntPtr)nameBuffer);
		String_t** L_62 = ___entryName4;
		uint8_t* L_63 = V_1;
		intptr_t L_64;
		L_64 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_63, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_65;
		L_65 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_64, NULL);
		*((RuntimeObject**)L_62) = (RuntimeObject*)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_62, (void*)(RuntimeObject*)L_65);
		// return true;
		V_10 = (bool)1;
		goto IL_0111;
	}

IL_0111:
	{
		// }
		bool L_66 = V_10;
		return L_66;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::GetNameAndPayloadForEntry<UnityEngine.Vector4>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.String&,T*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_GetNameAndPayloadForEntry_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mDD9F86A34785394C91732FB7238EBF21BB8BD517_gshared (int32_t ___primitiveId0, uint32_t ___extensionIndex1, uint32_t ___entryIndex2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, String_t** ___entryName4, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___outPayload5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// OvrAvatarLog.Assert(metaData.nameBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_0 = ___metaData3;
		uint32_t L_1 = (uint32_t)L_0->___nameBufferSize_1;
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// OvrAvatarLog.Assert(metaData.dataBufferSize > 0);
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_2 = ___metaData3;
		uint32_t L_3 = (uint32_t)L_2->___dataBufferSize_2;
		OvrAvatarLog_Assert_m5E3C112EC854B77DE524FE6781086E3E183D699C((bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0), _stringLiteral23D1DC61607515749D3B5ACF72CC5D8FF5EAA40E, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// uint nameBufferSize = metaData.nameBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_4 = ___metaData3;
		uint32_t L_5 = (uint32_t)L_4->___nameBufferSize_1;
		V_0 = L_5;
		// var nameBuffer = stackalloc byte[(int)nameBufferSize];
		uint32_t L_6 = V_0;
		int8_t* L_7 = (int8_t*) alloca(((uintptr_t)L_6));
		memset(L_7, 0, ((uintptr_t)L_6));
		V_1 = (uint8_t*)(L_7);
		// uint managedSize = (uint)UnsafeUtility.SizeOf<T>();
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_3 = (uint32_t)L_8;
		// uint dataBufferSize = metaData.dataBufferSize;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_9 = ___metaData3;
		uint32_t L_10 = (uint32_t)L_9->___dataBufferSize_2;
		V_4 = L_10;
		// bool noMarshal = managedSize == dataBufferSize;
		uint32_t L_11 = V_3;
		uint32_t L_12 = V_4;
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		// if (noMarshal)
		bool L_13 = V_5;
		V_6 = L_13;
		bool L_14 = V_6;
		if (!L_14)
		{
			goto IL_0066;
		}
	}
	{
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     (byte*)outPayload,
		//     managedSize);
		int32_t L_15 = ___primitiveId0;
		uint32_t L_16 = ___extensionIndex1;
		uint32_t L_17 = ___entryIndex2;
		uint8_t* L_18 = V_1;
		uint32_t L_19 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_20 = ___outPayload5;
		uint32_t L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_15, L_16, L_17, L_18, L_19, (uint8_t*)L_20, L_21, NULL);
		V_2 = L_22;
		goto IL_009a;
	}

IL_0066:
	{
		// var dataBuffer = stackalloc byte[(int)dataBufferSize];
		uint32_t L_23 = V_4;
		int8_t* L_24 = (int8_t*) alloca(((uintptr_t)L_23));
		memset(L_24, 0, ((uintptr_t)L_23));
		V_7 = (uint8_t*)(L_24);
		// success = CAPI.OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex(
		//     primitiveId,
		//     extensionIndex,
		//     entryIndex,
		//     nameBuffer,
		//     nameBufferSize,
		//     dataBuffer,
		//     dataBufferSize);
		int32_t L_25 = ___primitiveId0;
		uint32_t L_26 = ___extensionIndex1;
		uint32_t L_27 = ___entryIndex2;
		uint8_t* L_28 = V_1;
		uint32_t L_29 = V_0;
		uint8_t* L_30 = V_7;
		uint32_t L_31 = V_4;
		il2cpp_codegen_runtime_class_init_inline(CAPI_t197FD593B055BFED18FFEEE4BC5F57302582ABE0_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = CAPI_OvrAvatar2Primitive_MaterialExtensionEntryDataByIndex_m21559DA47C57D17B4A30AD1062A4B0217DE96B32(L_25, L_26, L_27, L_28, L_29, L_30, L_31, NULL);
		V_2 = L_32;
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		bool L_33 = V_2;
		V_8 = L_33;
		bool L_34 = V_8;
		if (!L_34)
		{
			goto IL_0099;
		}
	}
	{
		// if (success) { *outPayload = Marshal.PtrToStructure<T>((IntPtr)dataBuffer); }
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_35 = ___outPayload5;
		uint8_t* L_36 = V_7;
		intptr_t L_37;
		L_37 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_38;
		L_38 = ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)L_35 = L_38;
	}

IL_0099:
	{
	}

IL_009a:
	{
		// if (!success)
		bool L_39 = V_2;
		V_9 = (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0);
		bool L_40 = V_9;
		if (!L_40)
		{
			goto IL_00fe;
		}
	}
	{
		// OvrAvatarLog.LogWarning(
		//     @$"MaterialExtensionEntryDataByIndex (extensionIdx:{extensionIndex}, entryIdx:{entryIndex})"
		//     + $"nameSize:{nameBufferSize} managedSize:{managedSize} bufferSize:{dataBufferSize}"
		//     , LOG_SCOPE);
		uint32_t L_41 = ___extensionIndex1;
		uint32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_42);
		uint32_t L_44 = ___entryIndex2;
		uint32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF167A855E56FC300B913FA958FF9D1C154EECE3E, L_43, L_46, NULL);
		uint32_t L_48 = V_0;
		uint32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_49);
		uint32_t L_51 = V_3;
		uint32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_52);
		uint32_t L_54 = V_4;
		uint32_t L_55 = L_54;
		RuntimeObject* L_56 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_55);
		String_t* L_57;
		L_57 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral05BB1BF19FC67CAC0701B76A27334641E84D0A66, L_50, L_53, L_56, NULL);
		String_t* L_58;
		L_58 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_47, L_57, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogWarning_mB4F2526B60482139DB8CAC344DEAFA92040AAFA5(L_58, _stringLiteral7CF27F88625B9920CD90B9398BFF51E81E4D556C, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// entryName = string.Empty;
		String_t** L_59 = ___entryName4;
		String_t* L_60 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		*((RuntimeObject**)L_59) = (RuntimeObject*)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)(RuntimeObject*)L_60);
		// *outPayload = default;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_61 = ___outPayload5;
		il2cpp_codegen_initobj(L_61, sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		// return false;
		V_10 = (bool)0;
		goto IL_0111;
	}

IL_00fe:
	{
		// entryName = Marshal.PtrToStringAnsi((IntPtr)nameBuffer);
		String_t** L_62 = ___entryName4;
		uint8_t* L_63 = V_1;
		intptr_t L_64;
		L_64 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_63, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_65;
		L_65 = Marshal_PtrToStringAnsi_m8DF88D9F22FCF791C538A36C9233B3882F579B4A(L_64, NULL);
		*((RuntimeObject**)L_62) = (RuntimeObject*)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_62, (void*)(RuntimeObject*)L_65);
		// return true;
		V_10 = (bool)1;
		goto IL_0111;
	}

IL_0111:
	{
		// }
		bool L_66 = V_10;
		return L_66;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::StoreNameAndPayloadForEntry<System.Int32>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<T>>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_StoreNameAndPayloadForEntry_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1208013433D04DA4F0C65F5D958CF7E196B3068B_gshared (int32_t ___primitiveId0, uint32_t ___extensionIdx1, uint32_t ___entryIdx2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, List_1_t941E36F7444B6E85114CF22035CB833E55C9D086** ___listToStoreInto4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// success = GetNameAndPayloadForEntry(
		//     primitiveId,
		//     extensionIdx,
		//     entryIdx,
		//     metaData,
		//     out entryName,
		//     &payload);
		int32_t L_0 = ___primitiveId0;
		uint32_t L_1 = ___extensionIdx1;
		uint32_t L_2 = ___entryIdx2;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_3 = ___metaData3;
		bool L_4;
		L_4 = ((  bool (*) (int32_t, uint32_t, uint32_t, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C*, String_t**, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, (&V_1), (int32_t*)((uintptr_t)(&V_2)), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		// if (success) { listToStoreInto.Add(new ExtensionEntry<T>(entryName, payload)); }
		bool L_5 = V_0;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		// if (success) { listToStoreInto.Add(new ExtensionEntry<T>(entryName, payload)); }
		List_1_t941E36F7444B6E85114CF22035CB833E55C9D086** L_7 = ___listToStoreInto4;
		List_1_t941E36F7444B6E85114CF22035CB833E55C9D086* L_8 = *((List_1_t941E36F7444B6E85114CF22035CB833E55C9D086**)L_7);
		String_t* L_9 = V_1;
		int32_t L_10 = V_2;
		ExtensionEntry_1_tF2C4369D973C4DBC0C068E5D57B9696534CCDA19 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ExtensionEntry_1__ctor_m772B54D27B63B1AE579E70E23B318AA05132CAC9((&L_11), L_9, L_10, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_8);
		((  void (*) (List_1_t941E36F7444B6E85114CF22035CB833E55C9D086*, ExtensionEntry_1_tF2C4369D973C4DBC0C068E5D57B9696534CCDA19, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_8, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0029:
	{
		// return success;
		bool L_12 = V_0;
		V_4 = L_12;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_13 = V_4;
		return L_13;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::StoreNameAndPayloadForEntry<System.Single>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<T>>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_StoreNameAndPayloadForEntry_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m06F124B3CD2D998A101517AACEC9354D870D8A92_gshared (int32_t ___primitiveId0, uint32_t ___extensionIdx1, uint32_t ___entryIdx2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0** ___listToStoreInto4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	{
		// success = GetNameAndPayloadForEntry(
		//     primitiveId,
		//     extensionIdx,
		//     entryIdx,
		//     metaData,
		//     out entryName,
		//     &payload);
		int32_t L_0 = ___primitiveId0;
		uint32_t L_1 = ___extensionIdx1;
		uint32_t L_2 = ___entryIdx2;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_3 = ___metaData3;
		bool L_4;
		L_4 = ((  bool (*) (int32_t, uint32_t, uint32_t, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C*, String_t**, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, (&V_1), (float*)((uintptr_t)(&V_2)), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		// if (success) { listToStoreInto.Add(new ExtensionEntry<T>(entryName, payload)); }
		bool L_5 = V_0;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		// if (success) { listToStoreInto.Add(new ExtensionEntry<T>(entryName, payload)); }
		List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0** L_7 = ___listToStoreInto4;
		List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0* L_8 = *((List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0**)L_7);
		String_t* L_9 = V_1;
		float L_10 = V_2;
		ExtensionEntry_1_tA92D0E18425FA6278BFDE762213B76BE8DC0FBF8 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ExtensionEntry_1__ctor_m4C5EFF7625F8EF4BD83AAE39E5AA03F25914F7C4((&L_11), L_9, L_10, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_8);
		((  void (*) (List_1_t3D2138A7C2EB312C0132190151D7E29594071BA0*, ExtensionEntry_1_tA92D0E18425FA6278BFDE762213B76BE8DC0FBF8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_8, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0029:
	{
		// return success;
		bool L_12 = V_0;
		V_4 = L_12;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_13 = V_4;
		return L_13;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::StoreNameAndPayloadForEntry<UnityEngine.Vector3>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<T>>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_StoreNameAndPayloadForEntry_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m46C47BA449DD0CEAA4166202380A4D11FC92B537_gshared (int32_t ___primitiveId0, uint32_t ___extensionIdx1, uint32_t ___entryIdx2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B** ___listToStoreInto4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	{
		// success = GetNameAndPayloadForEntry(
		//     primitiveId,
		//     extensionIdx,
		//     entryIdx,
		//     metaData,
		//     out entryName,
		//     &payload);
		int32_t L_0 = ___primitiveId0;
		uint32_t L_1 = ___extensionIdx1;
		uint32_t L_2 = ___entryIdx2;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_3 = ___metaData3;
		bool L_4;
		L_4 = ((  bool (*) (int32_t, uint32_t, uint32_t, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C*, String_t**, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, (&V_1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((uintptr_t)(&V_2)), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		// if (success) { listToStoreInto.Add(new ExtensionEntry<T>(entryName, payload)); }
		bool L_5 = V_0;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		// if (success) { listToStoreInto.Add(new ExtensionEntry<T>(entryName, payload)); }
		List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B** L_7 = ___listToStoreInto4;
		List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B* L_8 = *((List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B**)L_7);
		String_t* L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_2;
		ExtensionEntry_1_t3122008635A0240B51467C3F8B72DB740693D3E7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ExtensionEntry_1__ctor_m75F4811FBDC907117BB0D81A21A00141FC7ABAA6((&L_11), L_9, L_10, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_8);
		((  void (*) (List_1_t39ADBAF6BCCB03EE530D05F996A684735270E45B*, ExtensionEntry_1_t3122008635A0240B51467C3F8B72DB740693D3E7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_8, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0029:
	{
		// return success;
		bool L_12 = V_0;
		V_4 = L_12;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_13 = V_4;
		return L_13;
	}
}
// System.Boolean Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntries::StoreNameAndPayloadForEntry<UnityEngine.Vector4>(Oculus.Avatar2.CAPI/ovrAvatar2Id,System.UInt32,System.UInt32,Oculus.Avatar2.CAPI/ovrAvatar2MaterialExtensionEntry&,System.Collections.Generic.List`1<Oculus.Avatar2.OvrAvatarMaterialExtension/ExtensionEntry`1<T>>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExtensionEntries_StoreNameAndPayloadForEntry_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3E2E1D40D41A2BC54BE7A8269BDA3FB5AD455EE2_gshared (int32_t ___primitiveId0, uint32_t ___extensionIdx1, uint32_t ___entryIdx2, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* ___metaData3, List_1_t9CEEFCCC9B23A162158811AC97949D814329569E** ___listToStoreInto4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	{
		// success = GetNameAndPayloadForEntry(
		//     primitiveId,
		//     extensionIdx,
		//     entryIdx,
		//     metaData,
		//     out entryName,
		//     &payload);
		int32_t L_0 = ___primitiveId0;
		uint32_t L_1 = ___extensionIdx1;
		uint32_t L_2 = ___entryIdx2;
		ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C* L_3 = ___metaData3;
		bool L_4;
		L_4 = ((  bool (*) (int32_t, uint32_t, uint32_t, ovrAvatar2MaterialExtensionEntry_t8A7243B808BCE6CCA508C75E1E4AB8E170A3146C*, String_t**, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, (&V_1), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((uintptr_t)(&V_2)), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_4;
		// if (success) { listToStoreInto.Add(new ExtensionEntry<T>(entryName, payload)); }
		bool L_5 = V_0;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		// if (success) { listToStoreInto.Add(new ExtensionEntry<T>(entryName, payload)); }
		List_1_t9CEEFCCC9B23A162158811AC97949D814329569E** L_7 = ___listToStoreInto4;
		List_1_t9CEEFCCC9B23A162158811AC97949D814329569E* L_8 = *((List_1_t9CEEFCCC9B23A162158811AC97949D814329569E**)L_7);
		String_t* L_9 = V_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_2;
		ExtensionEntry_1_tB2BE801FD5C4993FB45DEE1343D057605BBFF0F2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		ExtensionEntry_1__ctor_m72CEA0472FA3DB590252B49E40B4682151794D52((&L_11), L_9, L_10, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 2));
		NullCheck(L_8);
		((  void (*) (List_1_t9CEEFCCC9B23A162158811AC97949D814329569E*, ExtensionEntry_1_tB2BE801FD5C4993FB45DEE1343D057605BBFF0F2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_8, L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0029:
	{
		// return success;
		bool L_12 = V_0;
		V_4 = L_12;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_13 = V_4;
		return L_13;
	}
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_mE3E0CC624396EE2CF282ADD8B942B09323AF30E8((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mA01159F0E1B4680B39C7A27EF7430A54FA7B96CC(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<System.Single>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_m4D540A81E1062EEC2C4B0697A34A4EEFB9BC9004((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mA207AD511188C26BC024FF612B563032AC22AD2B(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m4AE3EA78DA8EB18B50CBB39FD3BDA19DC305BD46(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13E6B7880548032F70DDD23639453CACDE7A7510(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::CreateRepackedAttributes<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_3 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// Assert.IsTrue(needsRepacking);
		bool L_0 = (bool)__this->___needsRepacking_2;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663(L_0, NULL);
		// var packedResult = new NativeArray<T>(totalVerts, _nativeAllocator, _nativeArrayInit);
		int32_t L_1 = (int32_t)__this->___totalVerts_1;
		NativeArray_1__ctor_m583C7489D7AAC57700B48C9035CC3BE3379872E4((&V_0), L_1, (int32_t)4, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 0));
		// int packedOffset = 0;
		V_1 = 0;
		// for (int idx = 0; idx < ranges.Length; idx++)
		V_2 = 0;
		goto IL_004a;
	}

IL_0022:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_2 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		V_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// range.CopyRelevantSlice(in buffer, in packedResult, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_4 = V_3;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_5 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_4);
		V_4 = L_5;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* L_6 = ___buffer0;
		BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F((&V_4), L_6, (&V_0), (&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_004a:
	{
		// for (int idx = 0; idx < ranges.Length; idx++)
		int32_t L_8 = V_2;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_9 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_9);
		V_5 = (bool)((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))? 1 : 0);
		bool L_10 = V_5;
		if (L_10)
		{
			goto IL_0022;
		}
	}
	{
		// return packedResult;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_11 = V_0;
		V_6 = L_11;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_12 = V_6;
		return L_12;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 _returnValue;
	_returnValue = VertexRepacker_CreateRepackedAttributes_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m43BD96A543168A6AEB66F73D0D74D9983976FD01(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6931633B5386D569408197501A33540EA923D82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* V_2 = NULL;
	bool V_3 = false;
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_9 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (buffer.Length == 0) { return Array.Empty<T>(); }
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* L_0 = ___buffer0;
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 L_1 = (*(NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*)L_0);
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (buffer.Length == 0) { return Array.Empty<T>(); }
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_4;
		L_4 = ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_4;
		goto IL_0104;
	}

IL_0022:
	{
		// if (needsRepacking)
		bool L_5 = (bool)__this->___needsRepacking_2;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00f2;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// try { attrBuffer = new T[totalVerts]; }
		int32_t L_7 = (int32_t)__this->___totalVerts_1;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_8 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_7);
		V_4 = L_8;
		goto IL_005d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// OvrAvatarLog.LogException("allocate primitive buffer (new T[len])", e, primitiveLogScope);
		Exception_t* L_9 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var)));
		OvrAvatarLog_LogException_m8D351920B4DD1FB833FB65857850CC8D3192F44D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE1F596541AD0A4778038C3FF0FF43A22F80A274)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8)), (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// attrBuffer = null;
		V_4 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005d;
	}// end catch (depth: 1)

IL_005d:
	{
		// if (attrBuffer == null)
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_10 = V_4;
		V_7 = (bool)((((RuntimeObject*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_00a2;
		}
	}
	{
		// System.GC.Collect();
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7(NULL);
		// OvrAvatarLog.LogError(
		//     $"Failed to allocate primitive buffer of type {typeof(T)} with length {totalVerts}"
		//     , primitiveLogScope);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		int32_t L_14 = (int32_t)__this->___totalVerts_1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA6931633B5386D569408197501A33540EA923D82, (RuntimeObject*)L_13, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogError_m9BE615217156816F14E948BC84FFEB88A52C3567(L_17, _stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// return Array.Empty<T>();
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_18;
		L_18 = ((  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_18;
		goto IL_0104;
	}

IL_00a2:
	{
		// int packedOffset = 0;
		V_5 = 0;
		// for (var idx = 0; idx < ranges.Length; idx++)
		V_8 = 0;
		goto IL_00db;
	}

IL_00aa:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_19 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_20 = V_8;
		NullCheck(L_19);
		V_9 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		// range.CopyRelevantSlice(in buffer, attrBuffer, attrBuffer.Length, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_21 = V_9;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_22 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_21);
		V_10 = L_22;
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* L_23 = ___buffer0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_24 = V_4;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_25 = V_4;
		NullCheck(L_25);
		BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86((&V_10), L_23, L_24, ((int32_t)(((RuntimeArray*)L_25)->max_length)), (&V_5), il2cpp_rgctx_method(method->rgctx_data, 3));
		// for (var idx = 0; idx < ranges.Length; idx++)
		int32_t L_26 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00db:
	{
		// for (var idx = 0; idx < ranges.Length; idx++)
		int32_t L_27 = V_8;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_28 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_28);
		V_11 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))? 1 : 0);
		bool L_29 = V_11;
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// return attrBuffer;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_30 = V_4;
		V_2 = L_30;
		goto IL_0104;
	}

IL_00f2:
	{
		// else { return buffer.ToArray(); }
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* L_31 = ___buffer0;
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 L_32 = (*(NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*)L_31);
		V_1 = L_32;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_33;
		L_33 = NativeArray_1_ToArray_m441FA1D89C6036CFEBD2B2C4FC75BDC43E92AEC7((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = L_33;
		goto IL_0104;
	}

IL_0104:
	{
		// }
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C  BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* _returnValue;
	_returnValue = VertexRepacker_RepackAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m88DDCB3497AE27B4B816006F11F82B8A877F5B71(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// T[] Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker::RepackAttribute<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097_gshared (VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6931633B5386D569408197501A33540EA923D82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	bool V_3 = false;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_4 = NULL;
	int32_t V_5 = 0;
	Exception_t* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* V_9 = NULL;
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (buffer.Length == 0) { return Array.Empty<T>(); }
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_0 = ___buffer0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_1 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_0);
		V_1 = L_1;
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_1))->___m_Length_1);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (buffer.Length == 0) { return Array.Empty<T>(); }
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4;
		L_4 = ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_4;
		goto IL_0104;
	}

IL_0022:
	{
		// if (needsRepacking)
		bool L_5 = (bool)__this->___needsRepacking_2;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00f2;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// try { attrBuffer = new T[totalVerts]; }
		int32_t L_7 = (int32_t)__this->___totalVerts_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_7);
		V_4 = L_8;
		goto IL_005d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// OvrAvatarLog.LogException("allocate primitive buffer (new T[len])", e, primitiveLogScope);
		Exception_t* L_9 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var)));
		OvrAvatarLog_LogException_m8D351920B4DD1FB833FB65857850CC8D3192F44D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE1F596541AD0A4778038C3FF0FF43A22F80A274)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8)), (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// attrBuffer = null;
		V_4 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005d;
	}// end catch (depth: 1)

IL_005d:
	{
		// if (attrBuffer == null)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_4;
		V_7 = (bool)((((RuntimeObject*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_10) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_00a2;
		}
	}
	{
		// System.GC.Collect();
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_Collect_m43D435501E4B72E382DB08A0431DE01D550F76A7(NULL);
		// OvrAvatarLog.LogError(
		//     $"Failed to allocate primitive buffer of type {typeof(T)} with length {totalVerts}"
		//     , primitiveLogScope);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		int32_t L_14 = (int32_t)__this->___totalVerts_1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA6931633B5386D569408197501A33540EA923D82, (RuntimeObject*)L_13, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(OvrAvatarLog_tCB2144FA2EF43876EE488F9AB86724E69A83AE8D_il2cpp_TypeInfo_var);
		OvrAvatarLog_LogError_m9BE615217156816F14E948BC84FFEB88A52C3567(L_17, _stringLiteralC37A8538EFCDF4F4B5B8E834E67A20E6B9676FC8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		// return Array.Empty<T>();
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18;
		L_18 = ((  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_18;
		goto IL_0104;
	}

IL_00a2:
	{
		// int packedOffset = 0;
		V_5 = 0;
		// for (var idx = 0; idx < ranges.Length; idx++)
		V_8 = 0;
		goto IL_00db;
	}

IL_00aa:
	{
		// ref readonly var range = ref ranges[idx];
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_19 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		int32_t L_20 = V_8;
		NullCheck(L_19);
		V_9 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)));
		// range.CopyRelevantSlice(in buffer, attrBuffer, attrBuffer.Length, ref packedOffset);
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* L_21 = V_9;
		BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE L_22 = (*(BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*)L_21);
		V_10 = L_22;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_23 = ___buffer0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_24 = V_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = V_4;
		NullCheck(L_25);
		BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D((&V_10), L_23, L_24, ((int32_t)(((RuntimeArray*)L_25)->max_length)), (&V_5), il2cpp_rgctx_method(method->rgctx_data, 3));
		// for (var idx = 0; idx < ranges.Length; idx++)
		int32_t L_26 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00db:
	{
		// for (var idx = 0; idx < ranges.Length; idx++)
		int32_t L_27 = V_8;
		BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D* L_28 = (BufferRangeU5BU5D_t543554B50EFBC01643A5DA8016F45A814A2C405D*)__this->___ranges_0;
		NullCheck(L_28);
		V_11 = (bool)((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))? 1 : 0);
		bool L_29 = V_11;
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		// return attrBuffer;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = V_4;
		V_2 = L_30;
		goto IL_0104;
	}

IL_00f2:
	{
		// else { return buffer.ToArray(); }
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_31 = ___buffer0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_32 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_31);
		V_1 = L_32;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33;
		L_33 = NativeArray_1_ToArray_m819258262F28D1547F1CD1DDF79FFE7ED75EE869((&V_1), il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = L_33;
		goto IL_0104;
	}

IL_0104:
	{
		// }
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C  Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___buffer0, const RuntimeMethod* method)
{
	VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<VertexRepacker_t52B37CD48961A41CC00C1A2BE6B2CF23D51EF28C*>(__this + _offset);
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* _returnValue;
	_returnValue = VertexRepacker_RepackAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mAE1F8BD1717DC7DE754877D896385E40BCEF3097(_thisAdjusted, ___buffer0, method);
	return _returnValue;
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Color>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___input0, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_0 = ___input0;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_1 = (*(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* L_3 = ___output1;
		NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D L_4 = (*(NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___input0, NativeArray_1_t6AE72D578EEA854475A487A2795F8C90FD258D8D* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mACE01E4BFC91490E95C90BDD86F8CA3D15947A8E(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<System.Single>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___input0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_0 = ___input0;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_1 = (*(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* L_3 = ___output1;
		NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_4 = (*(NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, int32_t, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___input0, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB892DE8225A5AB76B9E47390821764D364329BD(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector2>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___input0, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___input0;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_1 = (*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_3 = ___output1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_4 = (*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70, int32_t, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___input0, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m332E2F3D63685A2670380517BA1D805206BF2391(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_0 = ___input0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_1 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_3 = ___output1;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_4 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, int32_t, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m271991D47686346468B67E71C147C1E1DFB0D8C7(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector4>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.NativeArray`1<T>&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___input0, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* L_0 = ___input0;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_1 = (*(NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* L_3 = ___output1;
		NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 L_4 = (*(NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8*)L_3);
		int32_t* L_5 = ___outputOffset2;
		int32_t L_6 = *((int32_t*)L_5);
		int32_t L_7 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, int32_t, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_4, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_8 = ___outputOffset2;
		int32_t* L_9 = ___outputOffset2;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___input0, NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8* ___output1, int32_t* ___outputOffset2, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m45F566F63276C3A8DF939780467471645C2EF89F(_thisAdjusted, ___input0, ___output1, ___outputOffset2, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.BoneWeight>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___input0, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* L_0 = ___input0;
		NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 L_1 = (*(NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_3 = ___output1;
		int32_t* L_4 = ___outputOffset3;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7, int32_t, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_7 = ___outputOffset3;
		int32_t* L_8 = ___outputOffset3;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7* ___input0, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m2D3262112E267C9BECBB23755AEAF7645A8C6B86(_thisAdjusted, ___input0, ___output1, ___outputLength2, ___outputOffset3, method);
}
// System.Void Oculus.Avatar2.OvrAvatarPrimitive/VertexRepacker/BufferRange::CopyRelevantSlice<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>&,T[],System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D_gshared (BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method) 
{
	{
		// NativeArray<T>.Copy(input, _firstIndex, output, outputOffset, _sliceLength);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_0 = ___input0;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_1 = (*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_0);
		int32_t L_2 = (int32_t)__this->____firstIndex_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___output1;
		int32_t* L_4 = ___outputOffset3;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6 = (int32_t)__this->____sliceLength_2;
		((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD, int32_t, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		// outputOffset += _sliceLength;
		int32_t* L_7 = ___outputOffset3;
		int32_t* L_8 = ___outputOffset3;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = (int32_t)__this->____sliceLength_2;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D_AdjustorThunk (RuntimeObject* __this, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___input0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___output1, int32_t ___outputLength2, int32_t* ___outputOffset3, const RuntimeMethod* method)
{
	BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BufferRange_tA59EB184D19CB0BDF9EC91A402F74EB02DAE7CCE*>(__this + _offset);
	BufferRange_CopyRelevantSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5A9CF8F99C04C83BA3BF931ED3E9FC46C1120E8D(_thisAdjusted, ___input0, ___output1, ___outputLength2, ___outputOffset3, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VoiceInfo_get_Codec_m163BADA5CCA44EF0C9E48346ED20E7CC33B24BE2_inline (VoiceInfo_t24C5680EF3DC3C51FBB108E737403E2BE60BB404* __this, const RuntimeMethod* method) 
{
	{
		// public Codec Codec { get; set; }
		int32_t L_0 = __this->___U3CCodecU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
