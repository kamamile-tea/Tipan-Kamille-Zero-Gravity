#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// ArrowShooting
struct ArrowShooting_tC11251306B2EC1996581A7108B71118B921151C8;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// ButtonFunctions
struct ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Difficulty
struct Difficulty_t17A86ED975E6C5C9F72E821655C0B340769B9707;
// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HeroAttack
struct HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6;
// HighScores
struct HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PauseResume
struct PauseResume_t4323EBEBA85DBB30EDFA2A7A5039483981AFDC12;
// PersistentData
struct PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// Scorekeeper
struct Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShipMovement
struct ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral04C6816CA4DBA0D3C4D054346E6C7FADC874951B;
IL2CPP_EXTERN_C String_t* _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103;
IL2CPP_EXTERN_C String_t* _stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral28DEB4F59339E565808F3F3A3F52E8429BC0FD09;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral330BC37D8463B5B010EF864F4DEDBCB8387FDEA8;
IL2CPP_EXTERN_C String_t* _stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3;
IL2CPP_EXTERN_C String_t* _stringLiteral39A52AD7D455C487F48BCC3B6B1AAB4A4395D337;
IL2CPP_EXTERN_C String_t* _stringLiteral59E45D4FC5F2F4E3F0826C84CE9DB3CDD754C496;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8581D5A87B78FA002EEA61AEECAA9ECF2A45F78B;
IL2CPP_EXTERN_C String_t* _stringLiteral91102268025FF1A124204E2BD4B3A1F5729DE9F7;
IL2CPP_EXTERN_C String_t* _stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0;
IL2CPP_EXTERN_C String_t* _stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3;
IL2CPP_EXTERN_C String_t* _stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49;
IL2CPP_EXTERN_C String_t* _stringLiteralC83B6926DE498999BC7E3D5467A98CDE9B139901;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScorekeeper_t0603804069E988793489B35AF37699F36395BFFA_m02FC8C27774DC1C6CFB1DBDD446E7205D09A8E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ArrowShooting
struct ArrowShooting_tC11251306B2EC1996581A7108B71118B921151C8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ArrowShooting::speed
	int32_t ___speed_4;
	// UnityEngine.Rigidbody2D ArrowShooting::rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigid_5;
	// UnityEngine.GameObject ArrowShooting::controller
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___controller_6;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ButtonFunctions
struct ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField ButtonFunctions::playerNameInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___playerNameInput_4;
};

// Difficulty
struct Difficulty_t17A86ED975E6C5C9F72E821655C0B340769B9707  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// EnemyMovement
struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 EnemyMovement::dir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir_4;
	// UnityEngine.Rigidbody2D EnemyMovement::rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigid_5;
	// System.Single EnemyMovement::speed
	float ___speed_6;
	// System.Boolean EnemyMovement::isFacingRight
	bool ___isFacingRight_7;
	// UnityEngine.AudioClip EnemyMovement::popSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___popSound_8;
	// UnityEngine.GameObject EnemyMovement::controller
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___controller_9;
	// System.Boolean EnemyMovement::diff
	bool ___diff_10;
	// System.Single EnemyMovement::jumpForce
	float ___jumpForce_11;
	// System.Boolean EnemyMovement::isGrounded
	bool ___isGrounded_12;
	// System.Int32 EnemyMovement::rand
	int32_t ___rand_13;
	// System.Int32 EnemyMovement::points
	int32_t ___points_14;
};

struct EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields
{
	// UnityEngine.Vector2 EnemyMovement::xy
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___xy_15;
};

// HeroAttack
struct HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HeroAttack::cooldown
	float ___cooldown_4;
	// UnityEngine.Transform HeroAttack::shootingPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shootingPos_5;
	// UnityEngine.GameObject HeroAttack::arrows
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___arrows_6;
	// UnityEngine.AudioClip HeroAttack::gulpSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___gulpSound_7;
	// Movement HeroAttack::movement
	Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* ___movement_8;
	// Scorekeeper HeroAttack::score
	Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* ___score_9;
	// System.Single HeroAttack::cdTimer
	float ___cdTimer_10;
};

// HighScores
struct HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String HighScores::playerName
	String_t* ___playerName_7;
	// System.Int32 HighScores::playerScore
	int32_t ___playerScore_8;
	// UnityEngine.UI.Text[] HighScores::nameTexts
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___nameTexts_9;
	// UnityEngine.UI.Text[] HighScores::scoreTexts
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___scoreTexts_10;
};

// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody2D Movement::rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigid_4;
	// System.Single Movement::movement
	float ___movement_5;
	// System.Int32 Movement::speed
	int32_t ___speed_6;
	// System.Boolean Movement::isFacingRight
	bool ___isFacingRight_7;
	// System.Boolean Movement::jumpPressed
	bool ___jumpPressed_8;
	// System.Single Movement::jumpForce
	float ___jumpForce_9;
	// System.Boolean Movement::isGrounded
	bool ___isGrounded_10;
	// UnityEngine.Animator Movement::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_11;
};

// PauseResume
struct PauseResume_t4323EBEBA85DBB30EDFA2A7A5039483981AFDC12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] PauseResume::pauseModeObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___pauseModeObjects_4;
	// UnityEngine.GameObject[] PauseResume::resumeModeObjects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___resumeModeObjects_5;
};

// PersistentData
struct PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String PersistentData::playerName
	String_t* ___playerName_4;
	// System.Int32 PersistentData::playerScore
	int32_t ___playerScore_5;
	// System.Int32 PersistentData::gameDifficulty
	int32_t ___gameDifficulty_6;
};

struct PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields
{
	// PersistentData PersistentData::Instance
	PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* ___Instance_7;
};

// Scorekeeper
struct Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Scorekeeper::score
	int32_t ___score_4;
	// UnityEngine.UI.Text Scorekeeper::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_5;
	// UnityEngine.UI.Text Scorekeeper::sceneText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___sceneText_6;
};

struct Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_StaticFields
{
	// System.Int32 Scorekeeper::level
	int32_t ___level_9;
	// System.String Scorekeeper::playerName
	String_t* ___playerName_10;
};

// ShipMovement
struct ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 ShipMovement::dir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir_4;
	// UnityEngine.Rigidbody2D ShipMovement::rigid
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rigid_5;
	// System.Single ShipMovement::speed
	float ___speed_6;
};

struct ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C_StaticFields
{
	// UnityEngine.Vector2 ShipMovement::xy
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___xy_7;
};

// SoundManager
struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource SoundManager::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_5;
	// UnityEngine.UI.Slider SoundManager::volumeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___volumeSlider_6;
};

struct SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields
{
	// SoundManager SoundManager::<instance>k__BackingField
	SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___U3CinstanceU3Ek__BackingField_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_23;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_24;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_25;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_26;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_27;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_28;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_29;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_30;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_31;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_34;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_35;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_37;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_38;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_39;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_40;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_42;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_43;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_46;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_47;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_48;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_49;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_50;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_51;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_52;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_53;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_54;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_55;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_56;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_59;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_60;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_63;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_64;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_65;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_66;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_67;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_68;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_69;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_70;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_73;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EnemyMovement>()
inline EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void EnemyMovement::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Pop_mCBC29DCA3D78F18742F03DEF23ABC457486DB79A (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Scorekeeper>()
inline Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* GameObject_GetComponent_TisScorekeeper_t0603804069E988793489B35AF37699F36395BFFA_m02FC8C27774DC1C6CFB1DBDD446E7205D09A8E43 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 EnemyMovement::getPoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyMovement_getPoints_mB81FAF4BA59C91DF6918C4BB0C5727B7DFEAE0FD_inline (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) ;
// System.Void Scorekeeper::AddPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_AddPoints_m3EDED9C0291746C89C8FD7B1654B73FEEA95F751 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, int32_t ___pointsToAdd0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void PersistentData::SetName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PersistentData_SetName_m62E14A80A1C0929F0F1EB241D06B41521DB85629_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void PersistentData::SetScore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PersistentData_SetScore_m140E9D9A8F1176D74D7CF5909B8E9AAC789AD0C3_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, int32_t ___score0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void PersistentData::SetDifficulty(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PersistentData_SetDifficulty_mAE8395DB91A21EEB8EA6316E124BB25DB3B24440_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, int32_t ___difficulty0, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Int32 PersistentData::GetDifficulty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PersistentData_GetDifficulty_m3ADB027EC81CD03A54D14A714E7FD683302E1A84_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void EnemyMovement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Jump_m387F5F1C916597B3312CD915ACCCD6BB7260DFB6 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// SoundManager SoundManager::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline (const RuntimeMethod* method) ;
// System.Void SoundManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___s0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void EnemyMovement::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Restart_mA097526599E5F1154E1D2A583B2394B83C9F4D06 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Movement>()
inline Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean Movement::canAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Movement_canAttack_mE58DF8F9EFDABAD5D44F0687FA3F7BA88A781CD3 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Void HeroAttack::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroAttack_Attack_m1E63B9219C6412EBF2D452275A423196212D519B (HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.String PersistentData::GetName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PersistentData_GetName_m56BBA84ADD40EBE6A4DAC2C24FC73CB28D8F371B_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) ;
// System.Int32 PersistentData::GetScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PersistentData_GetScore_m97E1E3FAA7010A5CE2B410A64893730F5E09ADC6_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) ;
// System.Void HighScores::SaveHighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScores_SaveHighScores_mDA918B2B8AFA7FA889A8D1671C87E63D73BF94CD (HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void HighScores::ShowHighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScores_ShowHighScores_mE92C42907C042ADAFD7B2CF7C638CDEFE2147205 (HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void Movement::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Flip_m605B809475F6C0AC7BBE24AA41EF1831B629775A (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Void Movement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Jump_m6A09324D0F641252A3006E80C51443FC7B3F06A9 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void Scorekeeper::DisplayScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_DisplayScore_mF8D219206AF5724F17D566F1D88632D90C7531E0 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) ;
// System.Void Scorekeeper::AdvanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_AdvanceLevel_mB54ACFD2B6131CB3DB5D90BC906E44B158ADE766 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void SoundManager::set_instance(SoundManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SoundManager_set_instance_m4DD71E6E286CE2049FFD42F6D91F7C975230C70D_inline (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void SoundManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Load_m81C4ED23078B900527F751415116163FB375C443 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___value0, const RuntimeMethod* method) ;
// System.Void SoundManager::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Save_m0C2FF8C3046ECE947DC82897C490B3B95E94ED25 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Void ArrowShooting::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowShooting_Start_m8629B57386B2328CA0F9D607508A63C06E9A0B51 (ArrowShooting_tC11251306B2EC1996581A7108B71118B921151C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (controller == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___controller_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// controller = GameObject.FindGameObjectWithTag("GameController");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4, NULL);
		__this->___controller_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_6), (void*)L_2);
	}

IL_001e:
	{
		// if (rigid == null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rigid_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5;
		L_5 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigid_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_5), (void*)L_5);
	}

IL_0038:
	{
		// rigid.velocity = transform.right * speed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigid_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_7, NULL);
		int32_t L_9 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, ((float)L_9), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_10, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_6, L_11, NULL);
		// }
		return;
	}
}
// System.Void ArrowShooting::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowShooting_OnCollisionEnter2D_m42D8A27DA4723FDA4551068F3BF112DF62CAE063 (ArrowShooting_tC11251306B2EC1996581A7108B71118B921151C8* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScorekeeper_t0603804069E988793489B35AF37699F36395BFFA_m02FC8C27774DC1C6CFB1DBDD446E7205D09A8E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* V_0 = NULL;
	{
		// if(collision.gameObject.tag != "Player"){
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
	}

IL_0022:
	{
		// EnemyMovement enemy = collision.gameObject.GetComponent<EnemyMovement>();
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_5, NULL);
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_7;
		L_7 = GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A(L_6, GameObject_GetComponent_TisEnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_mAAB5478BC03528464931592CD9382FFF5844DC2A_RuntimeMethod_var);
		V_0 = L_7;
		// if (collision.gameObject.tag == "Enemy")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_8 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_8, NULL);
		String_t* L_10;
		L_10 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (enemy != null)
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_006a;
		}
	}
	{
		// enemy.Pop();
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_14 = V_0;
		EnemyMovement_Pop_mCBC29DCA3D78F18742F03DEF23ABC457486DB79A(L_14, NULL);
		// controller.GetComponent<Scorekeeper>().AddPoints(enemy.getPoints());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___controller_6;
		Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* L_16;
		L_16 = GameObject_GetComponent_TisScorekeeper_t0603804069E988793489B35AF37699F36395BFFA_m02FC8C27774DC1C6CFB1DBDD446E7205D09A8E43(L_15, GameObject_GetComponent_TisScorekeeper_t0603804069E988793489B35AF37699F36395BFFA_m02FC8C27774DC1C6CFB1DBDD446E7205D09A8E43_RuntimeMethod_var);
		EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* L_17 = V_0;
		int32_t L_18;
		L_18 = EnemyMovement_getPoints_mB81FAF4BA59C91DF6918C4BB0C5727B7DFEAE0FD_inline(L_17, NULL);
		Scorekeeper_AddPoints_m3EDED9C0291746C89C8FD7B1654B73FEEA95F751(L_16, L_18, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void ArrowShooting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrowShooting__ctor_m6ECA8B2B2A9FF5E1AEB66368C968BC214002F376 (ArrowShooting_tC11251306B2EC1996581A7108B71118B921151C8* __this, const RuntimeMethod* method) 
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
// System.Void ButtonFunctions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions_Start_m796ADD53995942347B281CEA6F9DFA21A297650B (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ButtonFunctions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions_Update_m2300818C1B7A927CE072DF2A0E4E55C2161570D0 (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ButtonFunctions::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions_PlayGame_m3899D02A374CDCB8C89BC089575E2709F4635A90 (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39A52AD7D455C487F48BCC3B6B1AAB4A4395D337);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string inName = playerNameInput.text;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___playerNameInput_4;
		String_t* L_1;
		L_1 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_0, NULL);
		V_0 = L_1;
		// PersistentData.Instance.SetName(inName);
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_2 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		String_t* L_3 = V_0;
		PersistentData_SetName_m62E14A80A1C0929F0F1EB241D06B41521DB85629_inline(L_2, L_3, NULL);
		// PersistentData.Instance.SetScore(0);
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_4 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		PersistentData_SetScore_m140E9D9A8F1176D74D7CF5909B8E9AAC789AD0C3_inline(L_4, 0, NULL);
		// SceneManager.LoadScene("Difficulty");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral39A52AD7D455C487F48BCC3B6B1AAB4A4395D337, NULL);
		// }
		return;
	}
}
// System.Void ButtonFunctions::Level1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions_Level1_m887F25AFEB5991039C1199A0D49B53F3A0D0E30A (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC83B6926DE498999BC7E3D5467A98CDE9B139901);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Level1");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC83B6926DE498999BC7E3D5467A98CDE9B139901, NULL);
		// }
		return;
	}
}
// System.Void ButtonFunctions::Instructions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions_Instructions_m575EE8B7822DB74B9C4D8582F3DDF9E552C0490A (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8581D5A87B78FA002EEA61AEECAA9ECF2A45F78B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Instructions");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8581D5A87B78FA002EEA61AEECAA9ECF2A45F78B, NULL);
		// }
		return;
	}
}
// System.Void ButtonFunctions::Menu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions_Menu_mCB4F84C0DACC41B646DF857B2714AB239BB4D3B7 (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void ButtonFunctions::HighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions_HighScores_mDEB065BFA09B75F5B95540D8E85AAA934AE994E4 (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E45D4FC5F2F4E3F0826C84CE9DB3CDD754C496);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("HighScores");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral59E45D4FC5F2F4E3F0826C84CE9DB3CDD754C496, NULL);
		// }
		return;
	}
}
// System.Void ButtonFunctions::Settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions_Settings_mD71EF6035CBA3341A1C643DB763B7E93AA3CD9D6 (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Settings");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F, NULL);
		// }
		return;
	}
}
// System.Void ButtonFunctions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunctions__ctor_mCC9E4D968C4BADE54999BE639A3D2717DC35F3BF (ButtonFunctions_t607758A4E0B4694770378ABC3F8BF2B754ECFB0C* __this, const RuntimeMethod* method) 
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
// System.Void Difficulty::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Difficulty_Start_m284402F761C42FE8AB395E66EC0E88FB29C4A3C3 (Difficulty_t17A86ED975E6C5C9F72E821655C0B340769B9707* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Difficulty::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Difficulty_Update_m79D36E80349C245F94C4DD6CDC6E902B4587D4A7 (Difficulty_t17A86ED975E6C5C9F72E821655C0B340769B9707* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Difficulty::setEasy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Difficulty_setEasy_mCBCAD75BF7ED2971FD726ABF1CE6DF81295B442F (Difficulty_t17A86ED975E6C5C9F72E821655C0B340769B9707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PersistentData.Instance.SetDifficulty(0);
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_0 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		PersistentData_SetDifficulty_mAE8395DB91A21EEB8EA6316E124BB25DB3B24440_inline(L_0, 0, NULL);
		// }
		return;
	}
}
// System.Void Difficulty::setMedium()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Difficulty_setMedium_mC9960F581B920BD542156F2D7F4E1CF3FBA73016 (Difficulty_t17A86ED975E6C5C9F72E821655C0B340769B9707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PersistentData.Instance.SetDifficulty(1);
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_0 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		PersistentData_SetDifficulty_mAE8395DB91A21EEB8EA6316E124BB25DB3B24440_inline(L_0, 1, NULL);
		// }
		return;
	}
}
// System.Void Difficulty::setHard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Difficulty_setHard_mE95A7125AD841331C1144297BD2F2FAF8F62E313 (Difficulty_t17A86ED975E6C5C9F72E821655C0B340769B9707* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PersistentData.Instance.SetDifficulty(2);
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_0 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		PersistentData_SetDifficulty_mAE8395DB91A21EEB8EA6316E124BB25DB3B24440_inline(L_0, 2, NULL);
		// }
		return;
	}
}
// System.Void Difficulty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Difficulty__ctor_m32D4C2B4C30B90CB1E1F2F702B7CA584DAD120DB (Difficulty_t17A86ED975E6C5C9F72E821655C0B340769B9707* __this, const RuntimeMethod* method) 
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
// System.Void EnemyMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Start_m95403190C9B36406DE50131330EE999B92219947 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (controller == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___controller_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// controller = GameObject.FindGameObjectWithTag("GameController");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4, NULL);
		__this->___controller_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_9), (void*)L_2);
	}

IL_001e:
	{
		// if(SceneManager.GetActiveScene().name == "Level3"){
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_3;
		L_3 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9, NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// jumpForce = 600.0f;
		__this->___jumpForce_11 = (600.0f);
	}

IL_0042:
	{
		// if (rigid == null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rigid_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_8;
		L_8 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigid_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_5), (void*)L_8);
	}

IL_005c:
	{
		// InvokeRepeating("Scale", 1f, 1f);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral0970CF2FD3560786B3DFD69BC3EE83E1A9521103, (1.0f), (1.0f), NULL);
		// if(PersistentData.Instance.GetDifficulty() == 1){
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_9 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		int32_t L_10;
		L_10 = PersistentData_GetDifficulty_m3ADB027EC81CD03A54D14A714E7FD683302E1A84_inline(L_9, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_0085;
		}
	}
	{
		// diff = true;
		__this->___diff_10 = (bool)1;
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Update_mE16B0A7E944111B195856D2256F3FF0587224158 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral330BC37D8463B5B010EF864F4DEDBCB8387FDEA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.Translate(dir*speed*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___dir_4;
		float L_2 = __this->___speed_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_6, NULL);
		// if(transform.position.x <= -5) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		if ((!(((float)L_9) <= ((float)(-5.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// dir = Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		__this->___dir_4 = L_10;
	}

IL_004d:
	{
		// if (transform.position.x >= 5) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___x_2;
		if ((!(((float)L_13) >= ((float)(5.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		// dir = Vector2.left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		__this->___dir_4 = L_14;
	}

IL_006f:
	{
		// if(SceneManager.GetActiveScene().name == "Level2" || SceneManager.GetActiveScene().name == "Level3"){
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_15;
		L_15 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteral330BC37D8463B5B010EF864F4DEDBCB8387FDEA8, NULL);
		if (L_17)
		{
			goto IL_00a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_18;
		L_18 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_18;
		String_t* L_19;
		L_19 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral7D341415782A02FC2C80E5EF6D3EAAE65DC089D9, NULL);
		if (!L_20)
		{
			goto IL_00c7;
		}
	}

IL_00a1:
	{
		// rand = Random.Range(0,10);
		int32_t L_21;
		L_21 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)10), NULL);
		__this->___rand_13 = L_21;
		// if(isGrounded && rand % 2 == 0){
		bool L_22 = __this->___isGrounded_12;
		if (!L_22)
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_23 = __this->___rand_13;
		if (((int32_t)(L_23%2)))
		{
			goto IL_00c7;
		}
	}
	{
		// Jump();
		EnemyMovement_Jump_m387F5F1C916597B3312CD915ACCCD6BB7260DFB6(__this, NULL);
	}

IL_00c7:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_FixedUpdate_mE6CCD7FD1ABCA13D83C45218F069340455B0E400 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Flip_mAB02C5489DA39189099B6A0C97C2FD0A0DBD3501 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), (180.0f), (0.0f), NULL);
		// isFacingRight = !isFacingRight;
		bool L_1 = __this->___isFacingRight_7;
		__this->___isFacingRight_7 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void EnemyMovement::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Pop_mCBC29DCA3D78F18742F03DEF23ABC457486DB79A (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SoundManager.instance.PlaySound(popSound);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0;
		L_0 = SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___popSound_8;
		SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400(L_0, L_1, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Int32 EnemyMovement::getPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnemyMovement_getPoints_mB81FAF4BA59C91DF6918C4BB0C5727B7DFEAE0FD (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// return points;
		int32_t L_0 = __this->___points_14;
		return L_0;
	}
}
// System.Void EnemyMovement::Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Scale_mD2E333D57B94B72B46EEBC57B0CD3C4BAB868980 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (diff)
		bool L_0 = __this->___diff_10;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		// points -= 2;
		int32_t L_1 = __this->___points_14;
		__this->___points_14 = ((int32_t)il2cpp_codegen_subtract(L_1, 2));
		// xy = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		((EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields*)il2cpp_codegen_static_fields_for(EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var))->___xy_15 = L_4;
		// xy.x += 0.3f;
		float* L_5 = (&(&((EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields*)il2cpp_codegen_static_fields_for(EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var))->___xy_15)->___x_0);
		float* L_6 = L_5;
		float L_7 = *((float*)L_6);
		*((float*)L_6) = (float)((float)il2cpp_codegen_add(L_7, (0.300000012f)));
		// xy.y += 0.3f;
		float* L_8 = (&(&((EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields*)il2cpp_codegen_static_fields_for(EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var))->___xy_15)->___y_1);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		*((float*)L_9) = (float)((float)il2cpp_codegen_add(L_10, (0.300000012f)));
		goto IL_009c;
	}

IL_0053:
	{
		// points -= 1;
		int32_t L_11 = __this->___points_14;
		__this->___points_14 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		// xy = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_12, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		((EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields*)il2cpp_codegen_static_fields_for(EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var))->___xy_15 = L_14;
		// xy.x += 0.2f;
		float* L_15 = (&(&((EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields*)il2cpp_codegen_static_fields_for(EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var))->___xy_15)->___x_0);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		*((float*)L_16) = (float)((float)il2cpp_codegen_add(L_17, (0.200000003f)));
		// xy.y += 0.2f;
		float* L_18 = (&(&((EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields*)il2cpp_codegen_static_fields_for(EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var))->___xy_15)->___y_1);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_add(L_20, (0.200000003f)));
	}

IL_009c:
	{
		// transform.localScale = xy;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ((EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields*)il2cpp_codegen_static_fields_for(EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var))->___xy_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_22, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_23, NULL);
		// if (xy.x > 6f)
		float L_24 = (&((EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_StaticFields*)il2cpp_codegen_static_fields_for(EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C_il2cpp_TypeInfo_var))->___xy_15)->___x_0;
		if ((!(((float)L_24) > ((float)(6.0f)))))
		{
			goto IL_00ce;
		}
	}
	{
		// Pop();
		EnemyMovement_Pop_mCBC29DCA3D78F18742F03DEF23ABC457486DB79A(__this, NULL);
		// Restart();
		EnemyMovement_Restart_mA097526599E5F1154E1D2A583B2394B83C9F4D06(__this, NULL);
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Jump_m387F5F1C916597B3312CD915ACCCD6BB7260DFB6 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// rigid.velocity = new Vector2(rigid.velocity.x, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_5;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rigid_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_1, NULL);
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_3, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_4, NULL);
		// rigid.AddForce(new Vector2(0, jumpForce));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rigid_5;
		float L_6 = __this->___jumpForce_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_5, L_7, NULL);
		// isGrounded = false;
		__this->___isGrounded_12 = (bool)0;
		// }
		return;
	}
}
// System.Void EnemyMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_OnCollisionEnter2D_mD0A6EBBD7BB7B02CE073F7C5E4135AB27B313AC2 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Ground"){
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// isGrounded = true;
		__this->___isGrounded_12 = (bool)1;
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void EnemyMovement::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement_Restart_mA097526599E5F1154E1D2A583B2394B83C9F4D06 (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void EnemyMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMovement__ctor_mFA5BD794CC67E008E8043CBDB7CDFB437D26180B (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 dir = Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		__this->___dir_4 = L_0;
		// [SerializeField] bool isFacingRight = true;
		__this->___isFacingRight_7 = (bool)1;
		// [SerializeField] float jumpForce = 300.0f;
		__this->___jumpForce_11 = (300.0f);
		// [SerializeField] bool isGrounded = true;
		__this->___isGrounded_12 = (bool)1;
		// private int points = 30;
		__this->___points_14 = ((int32_t)30);
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
// System.Void HeroAttack::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroAttack_Awake_m9AF3B7CCD7505035CB4187034CFBEBE7913E50E8 (HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement = GetComponent<Movement>();
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_0;
		L_0 = Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E(__this, Component_GetComponent_TisMovement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7_m7392062F6041B86B49F62CF72693536A9FB61E6E_RuntimeMethod_var);
		__this->___movement_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movement_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void HeroAttack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroAttack_Start_mEB52119D171E9861B53D3C6533D492FFA6AB8329 (HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HeroAttack::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroAttack_Update_m5664582350A2BF38D93C1C73A2DEA17A39BF85D1 (HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.F) && cdTimer > cooldown && movement.canAttack()) {
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)102), NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		float L_1 = __this->___cdTimer_10;
		float L_2 = __this->___cooldown_4;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* L_3 = __this->___movement_8;
		bool L_4;
		L_4 = Movement_canAttack_mE58DF8F9EFDABAD5D44F0687FA3F7BA88A781CD3(L_3, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// Attack();
		HeroAttack_Attack_m1E63B9219C6412EBF2D452275A423196212D519B(__this, NULL);
	}

IL_002a:
	{
		// cdTimer += Time.deltaTime;
		float L_5 = __this->___cdTimer_10;
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___cdTimer_10 = ((float)il2cpp_codegen_add(L_5, L_6));
		// }
		return;
	}
}
// System.Void HeroAttack::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroAttack_Attack_m1E63B9219C6412EBF2D452275A423196212D519B (HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(arrows, shootingPos.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___arrows_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___shootingPos_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// cdTimer = 0;
		__this->___cdTimer_10 = (0.0f);
		// }
		return;
	}
}
// System.Void HeroAttack::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroAttack_OnCollisionEnter2D_mAC983724DB030672A0D837DCB5288665CDB234C4 (HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Enemy")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// SoundManager.instance.PlaySound(gulpSound);
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_4;
		L_4 = SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline(NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___gulpSound_7;
		SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400(L_4, L_5, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// SceneManager.LoadScene("Lose");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral74B83A50A58269C4EECA165C2ABB62B80AAFC9D0, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void HeroAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeroAttack__ctor_mFA25D9A43FD6D08E9BD09F6E5919F7BDA9888B54 (HeroAttack_t7FF5E55C1004F04808AB9B830CE67CED9B97C0A6* __this, const RuntimeMethod* method) 
{
	{
		// private float cdTimer = 999;
		__this->___cdTimer_10 = (999.0f);
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
// System.Void HighScores::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScores_Start_m879DD378941B66F464416671ED5AD127D60AA96F (HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// playerName = PersistentData.Instance.GetName();
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_0 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		String_t* L_1;
		L_1 = PersistentData_GetName_m56BBA84ADD40EBE6A4DAC2C24FC73CB28D8F371B_inline(L_0, NULL);
		__this->___playerName_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerName_7), (void*)L_1);
		// playerScore = PersistentData.Instance.GetScore();
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_2 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		int32_t L_3;
		L_3 = PersistentData_GetScore_m97E1E3FAA7010A5CE2B410A64893730F5E09ADC6_inline(L_2, NULL);
		__this->___playerScore_8 = L_3;
		// SaveHighScores();
		HighScores_SaveHighScores_mDA918B2B8AFA7FA889A8D1671C87E63D73BF94CD(__this, NULL);
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		V_0 = 1;
		goto IL_0098;
	}

IL_002a:
	{
		// Debug.Log(i + " " + PlayerPrefs.GetString(NAME_KEY + i) + " ");
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, L_5, NULL);
		String_t* L_7;
		L_7 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_8, NULL);
		// Debug.Log(i + " " + PlayerPrefs.GetInt(SCORE_KEY + i) + " ");
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_10, NULL);
		int32_t L_12;
		L_12 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_11, NULL);
		V_1 = L_12;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_14;
		L_14 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_13, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0098:
	{
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) <= ((int32_t)5)))
		{
			goto IL_002a;
		}
	}
	{
		// ShowHighScores();
		HighScores_ShowHighScores_mE92C42907C042ADAFD7B2CF7C638CDEFE2147205(__this, NULL);
		// }
		return;
	}
}
// System.Void HighScores::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScores_Update_m4F28F55BCF0B026E097063425E3AA14A6151A7D3 (HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HighScores::SaveHighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScores_SaveHighScores_mDA918B2B8AFA7FA889A8D1671C87E63D73BF94CD (HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	{
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		V_0 = 1;
		goto IL_0072;
	}

IL_0004:
	{
		// Debug.Log(i + " " + PlayerPrefs.GetString(NAME_KEY + i) + " ");
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, L_1, NULL);
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_3, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// Debug.Log(i + " " + PlayerPrefs.GetInt(SCORE_KEY + i) + " ");
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_6, NULL);
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_7, NULL);
		V_1 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_10;
		L_10 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_9, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0072:
	{
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) <= ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		V_2 = 1;
		goto IL_0113;
	}

IL_007d:
	{
		// string currentNameKey = NAME_KEY + i;
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, L_13, NULL);
		V_3 = L_14;
		// string currentScoreKey = SCORE_KEY + i;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_15, NULL);
		V_4 = L_16;
		// if (PlayerPrefs.HasKey(currentScoreKey))
		String_t* L_17 = V_4;
		bool L_18;
		L_18 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(L_17, NULL);
		if (!L_18)
		{
			goto IL_00f5;
		}
	}
	{
		// int currentScore = PlayerPrefs.GetInt(currentScoreKey);
		String_t* L_19 = V_4;
		int32_t L_20;
		L_20 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_19, NULL);
		V_5 = L_20;
		// if (playerScore > currentScore)
		int32_t L_21 = __this->___playerScore_8;
		int32_t L_22 = V_5;
		if ((((int32_t)L_21) <= ((int32_t)L_22)))
		{
			goto IL_010f;
		}
	}
	{
		// int tempScore = currentScore;
		int32_t L_23 = V_5;
		V_6 = L_23;
		// string tempName = PlayerPrefs.GetString(currentNameKey);
		String_t* L_24 = V_3;
		String_t* L_25;
		L_25 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_24, NULL);
		V_7 = L_25;
		// PlayerPrefs.SetString(currentNameKey, playerName);
		String_t* L_26 = V_3;
		String_t* L_27 = __this->___playerName_7;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_26, L_27, NULL);
		// PlayerPrefs.SetInt(currentScoreKey, playerScore);
		String_t* L_28 = V_4;
		int32_t L_29 = __this->___playerScore_8;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_28, L_29, NULL);
		// playerName = tempName;
		String_t* L_30 = V_7;
		__this->___playerName_7 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerName_7), (void*)L_30);
		// playerScore = tempScore;
		int32_t L_31 = V_6;
		__this->___playerScore_8 = L_31;
		goto IL_010f;
	}

IL_00f5:
	{
		// PlayerPrefs.SetString(currentNameKey, playerName);
		String_t* L_32 = V_3;
		String_t* L_33 = __this->___playerName_7;
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(L_32, L_33, NULL);
		// PlayerPrefs.SetInt(currentScoreKey, playerScore);
		String_t* L_34 = V_4;
		int32_t L_35 = __this->___playerScore_8;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(L_34, L_35, NULL);
		// return;
		return;
	}

IL_010f:
	{
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_0113:
	{
		// for (int i = 1; i <= NUM_HIGH_SCORES; i++)
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) <= ((int32_t)5)))
		{
			goto IL_007d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HighScores::ShowHighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScores_ShowHighScores_mE92C42907C042ADAFD7B2CF7C638CDEFE2147205 (HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < NUM_HIGH_SCORES; i++)
		V_0 = 0;
		goto IL_005e;
	}

IL_0004:
	{
		// nameTexts[i].text = PlayerPrefs.GetString(NAME_KEY + (i + 1));
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_0 = __this->___nameTexts_9;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, L_5, NULL);
		String_t* L_7;
		L_7 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// scoreTexts[i].text = PlayerPrefs.GetInt(SCORE_KEY + (i + 1)).ToString();
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_8 = __this->___scoreTexts_10;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral336B029D04847DC4F36985E1B89D1A0B11D299A3, L_13, NULL);
		int32_t L_15;
		L_15 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(L_14, NULL);
		V_1 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_16);
		// for (int i = 0; i < NUM_HIGH_SCORES; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005e:
	{
		// for (int i = 0; i < NUM_HIGH_SCORES; i++)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HighScores::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScores__ctor_mBC298486D1892FF551509DF5779D58B6EE572355 (HighScores_tBE0BCCF3D6EBDC0C77036F5AC5C9572195E39336* __this, const RuntimeMethod* method) 
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
// System.Void Movement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Start_m3D09153FD03F06C31BBD151C21BA361EA49FA72B (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(rigid == null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigid_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_4), (void*)L_2);
	}

IL_001a:
	{
		// if (animator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_11), (void*)L_5);
	}

IL_0034:
	{
		// animator.SetInteger("motion", IDLE);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_11;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_6, _stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49, 0, NULL);
		// }
		return;
	}
}
// System.Void Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Update_m4B99F519DF0A29B476F90FE4314A770CD53EC418 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movement = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___movement_5 = L_0;
		// if(Input.GetButtonDown("Jump"))
		bool L_1;
		L_1 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// jumpPressed = true;
		__this->___jumpPressed_8 = (bool)1;
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Movement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_FixedUpdate_mBAFAFB0C3B305F3F3FCDE7E0AE3B61C89E84B6CC (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid.velocity = new Vector2(movement * speed, rigid.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_4;
		float L_1 = __this->___movement_5;
		int32_t L_2 = __this->___speed_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->___rigid_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_3, NULL);
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, ((float)L_2))), L_5, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_6, NULL);
		// if (!jumpPressed && isGrounded){
		bool L_7 = __this->___jumpPressed_8;
		if (L_7)
		{
			goto IL_007c;
		}
	}
	{
		bool L_8 = __this->___isGrounded_10;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// if (movement > 0 || movement < 0)
		float L_9 = __this->___movement_5;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0058;
		}
	}
	{
		float L_10 = __this->___movement_5;
		if ((!(((float)L_10) < ((float)(0.0f)))))
		{
			goto IL_006b;
		}
	}

IL_0058:
	{
		// animator.SetInteger("motion", RUN);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___animator_11;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_11, _stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49, 1, NULL);
		goto IL_007c;
	}

IL_006b:
	{
		// animator.SetInteger("motion", IDLE);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_11;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_12, _stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49, 0, NULL);
	}

IL_007c:
	{
		// if(movement < 0 && isFacingRight || movement > 0 && !isFacingRight)
		float L_13 = __this->___movement_5;
		if ((!(((float)L_13) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		bool L_14 = __this->___isFacingRight_7;
		if (L_14)
		{
			goto IL_00a6;
		}
	}

IL_0091:
	{
		float L_15 = __this->___movement_5;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_00ac;
		}
	}
	{
		bool L_16 = __this->___isFacingRight_7;
		if (L_16)
		{
			goto IL_00ac;
		}
	}

IL_00a6:
	{
		// Flip();
		Movement_Flip_m605B809475F6C0AC7BBE24AA41EF1831B629775A(__this, NULL);
	}

IL_00ac:
	{
		// if(jumpPressed && isGrounded)
		bool L_17 = __this->___jumpPressed_8;
		if (!L_17)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_18 = __this->___isGrounded_10;
		if (!L_18)
		{
			goto IL_00c2;
		}
	}
	{
		// Jump();
		Movement_Jump_m6A09324D0F641252A3006E80C51443FC7B3F06A9(__this, NULL);
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Void Movement::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Flip_m605B809475F6C0AC7BBE24AA41EF1831B629775A (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(0,180,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_0, (0.0f), (180.0f), (0.0f), NULL);
		// isFacingRight = !isFacingRight;
		bool L_1 = __this->___isFacingRight_7;
		__this->___isFacingRight_7 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void Movement::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Jump_m6A09324D0F641252A3006E80C51443FC7B3F06A9 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid.velocity = new Vector2(rigid.velocity.x, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rigid_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_1, NULL);
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_3, (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_4, NULL);
		// rigid.AddForce(new Vector2(0, jumpForce));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___rigid_4;
		float L_6 = __this->___jumpForce_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_5, L_7, NULL);
		// isGrounded = false;
		__this->___isGrounded_10 = (bool)0;
		// jumpPressed = false;
		__this->___jumpPressed_8 = (bool)0;
		// animator.SetInteger("motion", JUMP);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___animator_11;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_8, _stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49, 2, NULL);
		// }
		return;
	}
}
// System.Void Movement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_OnCollisionEnter2D_m856F0E8A2BE6EC056A72D147FB4E09E506B3BB8F (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Ground"){
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// isGrounded = true;
		__this->___isGrounded_10 = (bool)1;
		// animator.SetInteger("motion", IDLE);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_11;
		Animator_SetInteger_m7B4BB5FD5BD8DE3F713D8E9AD2870C1AAF8E19EF(L_4, _stringLiteralB160AEF5BC4008C16BA28707EDF662DD67932F49, 0, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Boolean Movement::canAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Movement_canAttack_mE58DF8F9EFDABAD5D44F0687FA3F7BA88A781CD3 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mCB72C1AD57256D73959D74FB86C5D0AA69EAE7ED (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] int speed = 15;
		__this->___speed_6 = ((int32_t)15);
		// [SerializeField] bool isFacingRight = true;
		__this->___isFacingRight_7 = (bool)1;
		// [SerializeField] float jumpForce = 500.0f;
		__this->___jumpForce_9 = (500.0f);
		// [SerializeField] bool isGrounded = true;
		__this->___isGrounded_10 = (bool)1;
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
// System.Void PauseResume::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseResume_Start_m444D64745B48D765164361CFB0C53D18243B3861 (PauseResume_t4323EBEBA85DBB30EDFA2A7A5039483981AFDC12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28DEB4F59339E565808F3F3A3F52E8429BC0FD09);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// pauseModeObjects = GameObject.FindGameObjectsWithTag("ShowWhenPaused");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral28DEB4F59339E565808F3F3A3F52E8429BC0FD09, NULL);
		__this->___pauseModeObjects_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pauseModeObjects_4), (void*)L_0);
		// foreach (GameObject g in pauseModeObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___pauseModeObjects_4;
		V_0 = L_1;
		V_1 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// foreach (GameObject g in pauseModeObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// g.SetActive(false);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		// foreach (GameObject g in pauseModeObjects)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PauseResume::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseResume_Update_m65ED76358C6CAEE1BFD654431DD710A246E48084 (PauseResume_t4323EBEBA85DBB30EDFA2A7A5039483981AFDC12* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PauseResume::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseResume_Pause_m588826AED3A5BE0BBFEA04D1C167373696DD04F7 (PauseResume_t4323EBEBA85DBB30EDFA2A7A5039483981AFDC12* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Time.timeScale = 0.0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// foreach(GameObject g in pauseModeObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___pauseModeObjects_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0022;
	}

IL_0015:
	{
		// foreach(GameObject g in pauseModeObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// g.SetActive(true);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0022:
	{
		// foreach(GameObject g in pauseModeObjects)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PauseResume::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseResume_Resume_m4FA2D1098EF7815A5BB2786811093F0FAB1A389C (PauseResume_t4323EBEBA85DBB30EDFA2A7A5039483981AFDC12* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Time.timeScale = 1.0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// foreach (GameObject g in pauseModeObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___pauseModeObjects_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0022;
	}

IL_0015:
	{
		// foreach (GameObject g in pauseModeObjects)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// g.SetActive(false);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0022:
	{
		// foreach (GameObject g in pauseModeObjects)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PauseResume::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseResume__ctor_m59279AA303DF6BB743859B65E0A26BD6FF2E2B0B (PauseResume_t4323EBEBA85DBB30EDFA2A7A5039483981AFDC12* __this, const RuntimeMethod* method) 
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
// System.Void PersistentData::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentData_Awake_mF2EE72D24DFC4245A0250E48684D54EEC7EED97B (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_0 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// DontDestroyOnLoad(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(__this, NULL);
		// Instance = this;
		((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7), (void*)__this);
		return;
	}

IL_001a:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void PersistentData::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentData_Start_m2B8688D39C24AA911229C9CCDDD466AFFF2BF203 (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerName = "";
		__this->___playerName_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerName_4), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// playerScore = 0;
		__this->___playerScore_5 = 0;
		// gameDifficulty = 0;
		__this->___gameDifficulty_6 = 0;
		// }
		return;
	}
}
// System.Void PersistentData::SetName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentData_SetName_m62E14A80A1C0929F0F1EB241D06B41521DB85629 (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// playerName = name;
		String_t* L_0 = ___name0;
		__this->___playerName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerName_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PersistentData::SetScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentData_SetScore_m140E9D9A8F1176D74D7CF5909B8E9AAC789AD0C3 (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	{
		// playerScore = score;
		int32_t L_0 = ___score0;
		__this->___playerScore_5 = L_0;
		// }
		return;
	}
}
// System.Void PersistentData::SetDifficulty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentData_SetDifficulty_mAE8395DB91A21EEB8EA6316E124BB25DB3B24440 (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, int32_t ___difficulty0, const RuntimeMethod* method) 
{
	{
		// gameDifficulty = difficulty;
		int32_t L_0 = ___difficulty0;
		__this->___gameDifficulty_6 = L_0;
		// }
		return;
	}
}
// System.String PersistentData::GetName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PersistentData_GetName_m56BBA84ADD40EBE6A4DAC2C24FC73CB28D8F371B (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	{
		// return playerName;
		String_t* L_0 = __this->___playerName_4;
		return L_0;
	}
}
// System.Int32 PersistentData::GetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistentData_GetScore_m97E1E3FAA7010A5CE2B410A64893730F5E09ADC6 (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	{
		// return playerScore;
		int32_t L_0 = __this->___playerScore_5;
		return L_0;
	}
}
// System.Int32 PersistentData::GetDifficulty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PersistentData_GetDifficulty_m3ADB027EC81CD03A54D14A714E7FD683302E1A84 (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	{
		// return gameDifficulty;
		int32_t L_0 = __this->___gameDifficulty_6;
		return L_0;
	}
}
// System.Void PersistentData::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentData_Update_mC77E5FDD6BBA023E5D9E683332CB882982C11FC6 (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PersistentData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PersistentData__ctor_m538FF11FA3981F1174588435F97FD9D0B8475401 (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
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
// System.Void Scorekeeper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_Start_m10C2EC2674724E2C69A1C20F8F006FE56978F3C5 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// score = PersistentData.Instance.GetScore();
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_0 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		int32_t L_1;
		L_1 = PersistentData_GetScore_m97E1E3FAA7010A5CE2B410A64893730F5E09ADC6_inline(L_0, NULL);
		__this->___score_4 = L_1;
		// playerName = PersistentData.Instance.GetName();
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_2 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		String_t* L_3;
		L_3 = PersistentData_GetName_m56BBA84ADD40EBE6A4DAC2C24FC73CB28D8F371B_inline(L_2, NULL);
		((Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_StaticFields*)il2cpp_codegen_static_fields_for(Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_il2cpp_TypeInfo_var))->___playerName_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_StaticFields*)il2cpp_codegen_static_fields_for(Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_il2cpp_TypeInfo_var))->___playerName_10), (void*)L_3);
		// level = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		((Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_StaticFields*)il2cpp_codegen_static_fields_for(Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_il2cpp_TypeInfo_var))->___level_9 = L_5;
		// DisplayScore();
		Scorekeeper_DisplayScore_mF8D219206AF5724F17D566F1D88632D90C7531E0(__this, NULL);
		// sceneText.text = "Level " + (level);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___sceneText_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_StaticFields*)il2cpp_codegen_static_fields_for(Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_il2cpp_TypeInfo_var))->___level_9), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA68AF01D35B427079781DE3A8B2923BD14263BE3, L_7, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void Scorekeeper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_Update_mA149DBC6F78D0F6C3A8A7366E6C78C73672CA62D (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Scorekeeper::AddPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_AddPoints_m3EDED9C0291746C89C8FD7B1654B73FEEA95F751 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, int32_t ___pointsToAdd0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += pointsToAdd;
		int32_t L_0 = __this->___score_4;
		int32_t L_1 = ___pointsToAdd0;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		// PersistentData.Instance.SetScore(score);
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_2 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		int32_t L_3 = __this->___score_4;
		PersistentData_SetScore_m140E9D9A8F1176D74D7CF5909B8E9AAC789AD0C3_inline(L_2, L_3, NULL);
		// DisplayScore();
		Scorekeeper_DisplayScore_mF8D219206AF5724F17D566F1D88632D90C7531E0(__this, NULL);
		// AdvanceLevel();
		Scorekeeper_AdvanceLevel_mB54ACFD2B6131CB3DB5D90BC906E44B158ADE766(__this, NULL);
		// }
		return;
	}
}
// System.Void Scorekeeper::AddPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_AddPoints_m85C84534F5F8454C54E2A98F55FD841617031F00 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) 
{
	{
		// AddPoints(DEFAULT_POINTS);
		Scorekeeper_AddPoints_m3EDED9C0291746C89C8FD7B1654B73FEEA95F751(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Scorekeeper::AdvanceLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_AdvanceLevel_mB54ACFD2B6131CB3DB5D90BC906E44B158ADE766 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void Scorekeeper::DisplayScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_DisplayScore_mF8D219206AF5724F17D566F1D88632D90C7531E0 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04C6816CA4DBA0D3C4D054346E6C7FADC874951B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91102268025FF1A124204E2BD4B3A1F5729DE9F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "Welcome " + playerName + " Score: " + score;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___scoreText_5;
		String_t* L_1 = ((Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_StaticFields*)il2cpp_codegen_static_fields_for(Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA_il2cpp_TypeInfo_var))->___playerName_10;
		int32_t* L_2 = (&__this->___score_4);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral04C6816CA4DBA0D3C4D054346E6C7FADC874951B, L_1, _stringLiteral91102268025FF1A124204E2BD4B3A1F5729DE9F7, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void Scorekeeper::ResetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper_ResetScore_mB13B8788DCD60C7E5D1171257D542340CEB49EDB (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = 0;
		__this->___score_4 = 0;
		// PersistentData.Instance.SetScore(score);
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_0 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		int32_t L_1 = __this->___score_4;
		PersistentData_SetScore_m140E9D9A8F1176D74D7CF5909B8E9AAC789AD0C3_inline(L_0, L_1, NULL);
		// DisplayScore();
		Scorekeeper_DisplayScore_mF8D219206AF5724F17D566F1D88632D90C7531E0(__this, NULL);
		// }
		return;
	}
}
// System.Void Scorekeeper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scorekeeper__ctor_m5028FF88821B651FB332EB82B55EC98827C4D3B1 (Scorekeeper_t0603804069E988793489B35AF37699F36395BFFA* __this, const RuntimeMethod* method) 
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
// System.Void ShipMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipMovement_Start_m661EFECBF065F2A6F83B8F9530CEB733C4BBE0FD (ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rigid == null)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___rigid_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rigid_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_5), (void*)L_2);
	}

IL_001a:
	{
		// if(PersistentData.Instance.GetDifficulty() == 2){
		PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* L_3 = ((PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_StaticFields*)il2cpp_codegen_static_fields_for(PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B_il2cpp_TypeInfo_var))->___Instance_7;
		int32_t L_4;
		L_4 = PersistentData_GetDifficulty_m3ADB027EC81CD03A54D14A714E7FD683302E1A84_inline(L_3, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0037;
		}
	}
	{
		// gameObject.tag  = "Enemy";
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_5, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void ShipMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipMovement_Update_m89570A31777673181F25A3206B38F1984DC1DAC9 (ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C* __this, const RuntimeMethod* method) 
{
	{
		// transform.Translate(dir*speed*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___dir_4;
		float L_2 = __this->___speed_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_6, NULL);
		// if(transform.position.x <= -5) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		if ((!(((float)L_9) <= ((float)(-5.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// dir = Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		__this->___dir_4 = L_10;
	}

IL_004d:
	{
		// if (transform.position.x >= 5) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___x_2;
		if ((!(((float)L_13) >= ((float)(5.0f)))))
		{
			goto IL_006f;
		}
	}
	{
		// dir = Vector2.left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline(NULL);
		__this->___dir_4 = L_14;
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void ShipMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipMovement_FixedUpdate_mDEEA94E8FE56D679ADB3F81E76A7D15D6D248E57 (ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ShipMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShipMovement__ctor_mCAA01E0F49241DA312AB32000E4B96F090ADAA0E (ShipMovement_t5182296277D5168B29F32AC306FC16DC43F6841C* __this, const RuntimeMethod* method) 
{
	{
		// private Vector2 dir = Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		__this->___dir_4 = L_0;
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
// SoundManager SoundManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance { get; private set; }
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void SoundManager::set_instance(SoundManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_set_instance_m4DD71E6E286CE2049FFD42F6D91F7C975230C70D (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance { get; private set; }
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ___value0;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_mEB5694CE6F2913D14C32C4AF41C936AA76007825 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___source_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_5), (void*)L_0);
		// instance = this;
		SoundManager_set_instance_m4DD71E6E286CE2049FFD42F6D91F7C975230C70D_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_PlaySound_mBF7370B8539FC563D5D7FFE2D1F58B35E530E400 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___s0, const RuntimeMethod* method) 
{
	{
		// source.PlayOneShot(s);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___source_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___s0;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Start_m114BCC9E38EB73FB08543ABE6B95FFA5756D7AF7 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(SceneManager.GetActiveScene().name == "Settings"){
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral0E3E7A9A92462225FFAF23BB1259E1BCFCEDDD0F, NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// if(!PlayerPrefs.HasKey("musicVolume")){
		bool L_3;
		L_3 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, NULL);
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		// PlayerPrefs.SetFloat("musicVolume", 1);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, (1.0f), NULL);
		// Load();
		SoundManager_Load_m81C4ED23078B900527F751415116163FB375C443(__this, NULL);
		return;
	}

IL_003b:
	{
		// Load();
		SoundManager_Load_m81C4ED23078B900527F751415116163FB375C443(__this, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void SoundManager::ChangeVolume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_ChangeVolume_mE21FD36EB515F0CCC486B62E073CA13306588BC2 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		// AudioListener.volume = volumeSlider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeSlider_6;
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721(L_1, NULL);
		// Save();
		SoundManager_Save_m0C2FF8C3046ECE947DC82897C490B3B95E94ED25(__this, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Load_m81C4ED23078B900527F751415116163FB375C443 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// volumeSlider.value = PlayerPrefs.GetFloat("musicVolume");
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeSlider_6;
		float L_1;
		L_1 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void SoundManager::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Save_m0C2FF8C3046ECE947DC82897C490B3B95E94ED25 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("musicVolume", volumeSlider.value);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeSlider_6;
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral963B75D56FACFB9CB8B20F6F310BF75BF77893C0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m27816732AF730AF6BEDE4A67ABC9D1A094777213 (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EnemyMovement_getPoints_mB81FAF4BA59C91DF6918C4BB0C5727B7DFEAE0FD_inline (EnemyMovement_t4EB72613E533CC1548DC956119D38F9ED643C48C* __this, const RuntimeMethod* method) 
{
	{
		// return points;
		int32_t L_0 = __this->___points_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_40;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PersistentData_SetName_m62E14A80A1C0929F0F1EB241D06B41521DB85629_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// playerName = name;
		String_t* L_0 = ___name0;
		__this->___playerName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerName_4), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PersistentData_SetScore_m140E9D9A8F1176D74D7CF5909B8E9AAC789AD0C3_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, int32_t ___score0, const RuntimeMethod* method) 
{
	{
		// playerScore = score;
		int32_t L_0 = ___score0;
		__this->___playerScore_5 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PersistentData_SetDifficulty_mAE8395DB91A21EEB8EA6316E124BB25DB3B24440_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, int32_t ___difficulty0, const RuntimeMethod* method) 
{
	{
		// gameDifficulty = difficulty;
		int32_t L_0 = ___difficulty0;
		__this->___gameDifficulty_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PersistentData_GetDifficulty_m3ADB027EC81CD03A54D14A714E7FD683302E1A84_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	{
		// return gameDifficulty;
		int32_t L_0 = __this->___gameDifficulty_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m851D1A435131CE336F60115E19FC8C21480284BC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* SoundManager_get_instance_m10FA1DB1ED9095A9DB26BECC4DF18A7B258BE7EF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance { get; private set; }
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PersistentData_GetName_m56BBA84ADD40EBE6A4DAC2C24FC73CB28D8F371B_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	{
		// return playerName;
		String_t* L_0 = __this->___playerName_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PersistentData_GetScore_m97E1E3FAA7010A5CE2B410A64893730F5E09ADC6_inline (PersistentData_tAD15D5F90AFA8DF6B494AD6C50CDB2E86118726B* __this, const RuntimeMethod* method) 
{
	{
		// return playerScore;
		int32_t L_0 = __this->___playerScore_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SoundManager_set_instance_m4DD71E6E286CE2049FFD42F6D91F7C975230C70D_inline (SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SoundManager instance { get; private set; }
		SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734* L_0 = ___value0;
		((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_tCA2CCAC5CDF1BA10E525C01C8D1D0DFAC9BE3734_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
