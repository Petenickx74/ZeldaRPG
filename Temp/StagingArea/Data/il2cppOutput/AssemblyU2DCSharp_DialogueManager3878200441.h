#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.String[]
struct StringU5BU5D_t1642385972;
// PlayerController
struct PlayerController_t4148409433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DialogueManager
struct  DialogueManager_t3878200441  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject DialogueManager::dBox
	GameObject_t1756533147 * ___dBox_2;
	// UnityEngine.UI.Text DialogueManager::dText
	Text_t356221433 * ___dText_3;
	// System.Boolean DialogueManager::dialogActive
	bool ___dialogActive_4;
	// System.String[] DialogueManager::dialogLines
	StringU5BU5D_t1642385972* ___dialogLines_5;
	// System.Int32 DialogueManager::currentLine
	int32_t ___currentLine_6;
	// PlayerController DialogueManager::thePlayer
	PlayerController_t4148409433 * ___thePlayer_7;

public:
	inline static int32_t get_offset_of_dBox_2() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dBox_2)); }
	inline GameObject_t1756533147 * get_dBox_2() const { return ___dBox_2; }
	inline GameObject_t1756533147 ** get_address_of_dBox_2() { return &___dBox_2; }
	inline void set_dBox_2(GameObject_t1756533147 * value)
	{
		___dBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___dBox_2, value);
	}

	inline static int32_t get_offset_of_dText_3() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dText_3)); }
	inline Text_t356221433 * get_dText_3() const { return ___dText_3; }
	inline Text_t356221433 ** get_address_of_dText_3() { return &___dText_3; }
	inline void set_dText_3(Text_t356221433 * value)
	{
		___dText_3 = value;
		Il2CppCodeGenWriteBarrier(&___dText_3, value);
	}

	inline static int32_t get_offset_of_dialogActive_4() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dialogActive_4)); }
	inline bool get_dialogActive_4() const { return ___dialogActive_4; }
	inline bool* get_address_of_dialogActive_4() { return &___dialogActive_4; }
	inline void set_dialogActive_4(bool value)
	{
		___dialogActive_4 = value;
	}

	inline static int32_t get_offset_of_dialogLines_5() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___dialogLines_5)); }
	inline StringU5BU5D_t1642385972* get_dialogLines_5() const { return ___dialogLines_5; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogLines_5() { return &___dialogLines_5; }
	inline void set_dialogLines_5(StringU5BU5D_t1642385972* value)
	{
		___dialogLines_5 = value;
		Il2CppCodeGenWriteBarrier(&___dialogLines_5, value);
	}

	inline static int32_t get_offset_of_currentLine_6() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___currentLine_6)); }
	inline int32_t get_currentLine_6() const { return ___currentLine_6; }
	inline int32_t* get_address_of_currentLine_6() { return &___currentLine_6; }
	inline void set_currentLine_6(int32_t value)
	{
		___currentLine_6 = value;
	}

	inline static int32_t get_offset_of_thePlayer_7() { return static_cast<int32_t>(offsetof(DialogueManager_t3878200441, ___thePlayer_7)); }
	inline PlayerController_t4148409433 * get_thePlayer_7() const { return ___thePlayer_7; }
	inline PlayerController_t4148409433 ** get_address_of_thePlayer_7() { return &___thePlayer_7; }
	inline void set_thePlayer_7(PlayerController_t4148409433 * value)
	{
		___thePlayer_7 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
