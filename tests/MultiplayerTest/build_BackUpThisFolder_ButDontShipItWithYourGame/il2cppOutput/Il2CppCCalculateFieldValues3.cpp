#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType>
struct Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<System.Int32,System.String>
struct Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6;
// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean>
struct Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495;
// System.String
struct String_t;
// Facebook.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6;
// Facebook.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl
struct VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B;
// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding
struct VoiceSDKLoggerBinding_t598AF60F0F768523822B787A1E3123212A27D759;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1<Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKLoggerBinding>
struct BaseAndroidConnectionImpl_1_tB843327F5F7A38DC3005ED10F716728EF7135C09  : public RuntimeObject
{
	// System.String Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::fragmentClassName
	String_t* ___fragmentClassName_0;
	// T Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::service
	VoiceSDKLoggerBinding_t598AF60F0F768523822B787A1E3123212A27D759* ___service_1;
	// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection Oculus.Voice.Core.Bindings.Android.BaseAndroidConnectionImpl`1::serviceConnection
	AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB* ___serviceConnection_2;
};

// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::mAssistantServiceConnection
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___mAssistantServiceConnection_0;
	// System.String Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::serviceFragmentClass
	String_t* ___serviceFragmentClass_1;
	// System.String Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::serviceGetter
	String_t* ___serviceGetter_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::binding
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___binding_0;
};

// UnityEngineInternal.Input.NativeInputSystem
struct NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE  : public RuntimeObject
{
};

struct NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields
{
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_tC5CA5A9117B79251968A4DA3758552EFE1D37495* ___onUpdate_0;
	// System.Action`1<UnityEngineInternal.Input.NativeInputUpdateType> UnityEngineInternal.Input.NativeInputSystem::onBeforeUpdate
	Action_1_t7797D4D8783204B10C3D28B96B049C48276C3B1B* ___onBeforeUpdate_1;
	// System.Func`2<UnityEngineInternal.Input.NativeInputUpdateType,System.Boolean> UnityEngineInternal.Input.NativeInputSystem::onShouldRunUpdate
	Func_2_t880CA675AE5D39E081BEEF14DC092D82674DE4F2* ___onShouldRunUpdate_2;
	// System.Action`2<System.Int32,System.String> UnityEngineInternal.Input.NativeInputSystem::s_OnDeviceDiscoveredCallback
	Action_2_t6AAF2E215E74E16A4EEF0A0749A4A325D99F5BA6* ___s_OnDeviceDiscoveredCallback_3;
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

// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl
struct VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B  : public RuntimeObject
{
	// System.Boolean Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl::<IsUsingPlatformIntegration>k__BackingField
	bool ___U3CIsUsingPlatformIntegrationU3Ek__BackingField_0;
	// System.String Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl::<WitApplication>k__BackingField
	String_t* ___U3CWitApplicationU3Ek__BackingField_1;
	// System.Boolean Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl::<ShouldLogToConsole>k__BackingField
	bool ___U3CShouldLogToConsoleU3Ek__BackingField_2;
};

struct VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B_StaticFields
{
	// System.String Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl::TAG
	String_t* ___TAG_3;
};

// UnityEngine.XR.XRDevice
struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194  : public RuntimeObject
{
};

struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields
{
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___deviceLoaded_0;
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// UnityEngineInternal.Input.NativeInputEventBuffer
#pragma pack(push, tp, 1)
struct NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Void* UnityEngineInternal.Input.NativeInputEventBuffer::eventBuffer
					void* ___eventBuffer_0;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					void* ___eventBuffer_0_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding[8];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::eventCount
					int32_t ___eventCount_1;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___eventCount_1_OffsetPadding_forAlignmentOnly[8];
					int32_t ___eventCount_1_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding[12];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::sizeInBytes
					int32_t ___sizeInBytes_2;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___sizeInBytes_2_OffsetPadding_forAlignmentOnly[12];
					int32_t ___sizeInBytes_2_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding[16];
					// System.Int32 UnityEngineInternal.Input.NativeInputEventBuffer::capacityInBytes
					int32_t ___capacityInBytes_3;
				};
				#pragma pack(pop, tp)
				#pragma pack(push, tp, 1)
				struct
				{
					char ___capacityInBytes_3_OffsetPadding_forAlignmentOnly[16];
					int32_t ___capacityInBytes_3_forAlignmentOnly;
				};
				#pragma pack(pop, tp)
			};
		};
		uint8_t NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD__padding[20];
	};
};
#pragma pack(pop, tp)

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 UnityEngine.PropertyAttribute::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl
struct VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993  : public BaseAndroidConnectionImpl_1_tB843327F5F7A38DC3005ED10F716728EF7135C09
{
	// System.Boolean Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::<IsUsingPlatformIntegration>k__BackingField
	bool ___U3CIsUsingPlatformIntegrationU3Ek__BackingField_3;
	// System.String Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::<WitApplication>k__BackingField
	String_t* ___U3CWitApplicationU3Ek__BackingField_4;
	// Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKConsoleLoggerImpl Oculus.Voice.Core.Bindings.Android.PlatformLogger.VoiceSDKPlatformLoggerImpl::consoleLoggerImpl
	VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B* ___consoleLoggerImpl_5;
};

// Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute
struct ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute::varname
	String_t* ___varname_1;
	// System.String Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute::fallbackName
	String_t* ___fallbackName_2;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerAudioClip::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerAudioClip
struct DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners
struct ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector4 Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::r
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___r_9;
	// UnityEngine.Material Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_10;
	// UnityEngine.Vector4 Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::rect2props
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rect2props_11;
	// UnityEngine.UI.MaskableGraphic Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::image
	MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* ___image_12;
};

struct ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778_StaticFields
{
	// System.Int32 Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::prop_halfSize
	int32_t ___prop_halfSize_4;
	// System.Int32 Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::prop_radiuses
	int32_t ___prop_radiuses_5;
	// System.Int32 Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::prop_rect2props
	int32_t ___prop_rect2props_6;
	// UnityEngine.Vector2 Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::wNorm
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___wNorm_7;
	// UnityEngine.Vector2 Nobi.UiRoundedCorners.ImageWithIndependentRoundedCorners::hNorm
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___hNorm_8;
};

// Nobi.UiRoundedCorners.ImageWithRoundedCorners
struct ImageWithRoundedCorners_t5EA484D5543D66245875844930337267FFF3E364  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Nobi.UiRoundedCorners.ImageWithRoundedCorners::radius
	float ___radius_5;
	// UnityEngine.Material Nobi.UiRoundedCorners.ImageWithRoundedCorners::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	// UnityEngine.UI.MaskableGraphic Nobi.UiRoundedCorners.ImageWithRoundedCorners::image
	MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E* ___image_7;
};

struct ImageWithRoundedCorners_t5EA484D5543D66245875844930337267FFF3E364_StaticFields
{
	// System.Int32 Nobi.UiRoundedCorners.ImageWithRoundedCorners::Props
	int32_t ___Props_4;
};

// Facebook.WitAi.TTS.Samples.TTSCacheToggle
struct TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Facebook.WitAi.TTS.Integrations.TTSDiskCache Facebook.WitAi.TTS.Samples.TTSCacheToggle::_diskCache
	TTSDiskCache_tA643131D15EFA604E185780B90A2034C582CA2F6* ____diskCache_4;
	// UnityEngine.UI.Text Facebook.WitAi.TTS.Samples.TTSCacheToggle::_cacheLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____cacheLabel_5;
	// UnityEngine.UI.Button Facebook.WitAi.TTS.Samples.TTSCacheToggle::_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____button_6;
	// Facebook.WitAi.TTS.Data.TTSDiskCacheLocation Facebook.WitAi.TTS.Samples.TTSCacheToggle::_cacheLocation
	int32_t ____cacheLocation_7;
};

// Facebook.WitAi.TTS.Samples.TTSErrorText
struct TTSErrorText_t137C15C0282435D336D5BB765691739CFAB05EF1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Facebook.WitAi.TTS.Samples.TTSErrorText::_errorLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____errorLabel_4;
	// System.String Facebook.WitAi.TTS.Samples.TTSErrorText::_error
	String_t* ____error_5;
};

// Facebook.WitAi.TTS.Samples.TTSSpeakerInput
struct TTSSpeakerInput_t14DD0717A053EC18CA979543DE9D287D69267B88  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Facebook.WitAi.TTS.Samples.TTSSpeakerInput::_title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____title_4;
	// UnityEngine.UI.InputField Facebook.WitAi.TTS.Samples.TTSSpeakerInput::_input
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ____input_5;
	// Facebook.WitAi.TTS.Utilities.TTSSpeaker Facebook.WitAi.TTS.Samples.TTSSpeakerInput::_speaker
	TTSSpeaker_t2A8C099DEA26115D3C5CD3946D92F2E8FC3E13FB* ____speaker_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9000[4] = 
{
	static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___eventBuffer_0)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___eventCount_1)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___sizeInBytes_2)) + static_cast<int32_t>(sizeof(RuntimeObject)),static_cast<int32_t>(offsetof(NativeInputEventBuffer_t4EE5873AD7998E0E83C9F8585C338AB14C9101FD, ___capacityInBytes_3)) + static_cast<int32_t>(sizeof(RuntimeObject)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9001[6] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9002[4] = 
{
	static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onUpdate_0)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onBeforeUpdate_1)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___onShouldRunUpdate_2)),static_cast<int32_t>(offsetof(NativeInputSystem_tCFE5554EBC0D3EE1DAD80FC55CE0DE38A3DDC5EE_StaticFields, ___s_OnDeviceDiscoveredCallback_3)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9005[1] = 
{
	static_cast<int32_t>(offsetof(DownloadHandlerAudioClip_t11D829901BD9F3137CBB5D7BEA99FEAD976E56AC, ___m_NativeData_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9007[2] = 
{
	static_cast<int32_t>(offsetof(ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0, ___varname_1)),static_cast<int32_t>(offsetof(ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0, ___fallbackName_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9011[3] = 
{
	static_cast<int32_t>(offsetof(AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB, ___mAssistantServiceConnection_0)),static_cast<int32_t>(offsetof(AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB, ___serviceFragmentClass_1)),static_cast<int32_t>(offsetof(AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB, ___serviceGetter_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9012[3] = 
{
	0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9013[1] = 
{
	static_cast<int32_t>(offsetof(BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01, ___binding_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9014[4] = 
{
	static_cast<int32_t>(offsetof(VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B, ___U3CIsUsingPlatformIntegrationU3Ek__BackingField_0)),static_cast<int32_t>(offsetof(VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B, ___U3CWitApplicationU3Ek__BackingField_1)),static_cast<int32_t>(offsetof(VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B, ___U3CShouldLogToConsoleU3Ek__BackingField_2)),static_cast<int32_t>(offsetof(VoiceSDKConsoleLoggerImpl_tD830A3FDBCDEFAA68417E5F31BFB7B875818F59B_StaticFields, ___TAG_3)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9016[3] = 
{
	static_cast<int32_t>(offsetof(VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993, ___U3CIsUsingPlatformIntegrationU3Ek__BackingField_3)),static_cast<int32_t>(offsetof(VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993, ___U3CWitApplicationU3Ek__BackingField_4)),static_cast<int32_t>(offsetof(VoiceSDKPlatformLoggerImpl_tBAA8C01C9FBD0E25B084121DD1701BC00F0E0993, ___consoleLoggerImpl_5)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9022[1] = 
{
	static_cast<int32_t>(offsetof(XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields, ___deviceLoaded_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9032[3] = 
{
	static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___IsTextualNodeBitmap_0)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___CanReadContentAsBitmap_1)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___HasValueBitmap_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9036[9] = 
{
	static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778_StaticFields, ___prop_halfSize_4)),static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778_StaticFields, ___prop_radiuses_5)),static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778_StaticFields, ___prop_rect2props_6)),static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778_StaticFields, ___wNorm_7)),static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778_StaticFields, ___hNorm_8)),static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778, ___r_9)),static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778, ___material_10)),static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778, ___rect2props_11)),static_cast<int32_t>(offsetof(ImageWithIndependentRoundedCorners_t1DAB35BE6FA939B685D43549AA6D0F0D64CE8778, ___image_12)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9037[4] = 
{
	static_cast<int32_t>(offsetof(ImageWithRoundedCorners_t5EA484D5543D66245875844930337267FFF3E364_StaticFields, ___Props_4)),static_cast<int32_t>(offsetof(ImageWithRoundedCorners_t5EA484D5543D66245875844930337267FFF3E364, ___radius_5)),static_cast<int32_t>(offsetof(ImageWithRoundedCorners_t5EA484D5543D66245875844930337267FFF3E364, ___material_6)),static_cast<int32_t>(offsetof(ImageWithRoundedCorners_t5EA484D5543D66245875844930337267FFF3E364, ___image_7)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9039[4] = 
{
	static_cast<int32_t>(offsetof(TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC, ____diskCache_4)),static_cast<int32_t>(offsetof(TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC, ____cacheLabel_5)),static_cast<int32_t>(offsetof(TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC, ____button_6)),static_cast<int32_t>(offsetof(TTSCacheToggle_t9923F0B703ED8E8CBE0C5DB410B48AFB9CF5F9FC, ____cacheLocation_7)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9040[2] = 
{
	static_cast<int32_t>(offsetof(TTSErrorText_t137C15C0282435D336D5BB765691739CFAB05EF1, ____errorLabel_4)),static_cast<int32_t>(offsetof(TTSErrorText_t137C15C0282435D336D5BB765691739CFAB05EF1, ____error_5)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9041[3] = 
{
	static_cast<int32_t>(offsetof(TTSSpeakerInput_t14DD0717A053EC18CA979543DE9D287D69267B88, ____title_4)),static_cast<int32_t>(offsetof(TTSSpeakerInput_t14DD0717A053EC18CA979543DE9D287D69267B88, ____input_5)),static_cast<int32_t>(offsetof(TTSSpeakerInput_t14DD0717A053EC18CA979543DE9D287D69267B88, ____speaker_6)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9046[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
