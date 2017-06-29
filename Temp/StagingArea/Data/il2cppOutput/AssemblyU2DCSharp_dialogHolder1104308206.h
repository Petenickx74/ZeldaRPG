#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// DialogueManager
struct DialogueManager_t3878200441;
// System.String[]
struct StringU5BU5D_t1642385972;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// dialogHolder
struct  dialogHolder_t1104308206  : public MonoBehaviour_t1158329972
{
public:
	// System.String dialogHolder::dialogue
	String_t* ___dialogue_2;
	// DialogueManager dialogHolder::dMAn
	DialogueManager_t3878200441 * ___dMAn_3;
	// System.String[] dialogHolder::dialogueLines
	StringU5BU5D_t1642385972* ___dialogueLines_4;

public:
	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(dialogHolder_t1104308206, ___dialogue_2)); }
	inline String_t* get_dialogue_2() const { return ___dialogue_2; }
	inline String_t** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(String_t* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier(&___dialogue_2, value);
	}

	inline static int32_t get_offset_of_dMAn_3() { return static_cast<int32_t>(offsetof(dialogHolder_t1104308206, ___dMAn_3)); }
	inline DialogueManager_t3878200441 * get_dMAn_3() const { return ___dMAn_3; }
	inline DialogueManager_t3878200441 ** get_address_of_dMAn_3() { return &___dMAn_3; }
	inline void set_dMAn_3(DialogueManager_t3878200441 * value)
	{
		___dMAn_3 = value;
		Il2CppCodeGenWriteBarrier(&___dMAn_3, value);
	}

	inline static int32_t get_offset_of_dialogueLines_4() { return static_cast<int32_t>(offsetof(dialogHolder_t1104308206, ___dialogueLines_4)); }
	inline StringU5BU5D_t1642385972* get_dialogueLines_4() const { return ___dialogueLines_4; }
	inline StringU5BU5D_t1642385972** get_address_of_dialogueLines_4() { return &___dialogueLines_4; }
	inline void set_dialogueLines_4(StringU5BU5D_t1642385972* value)
	{
		___dialogueLines_4 = value;
		Il2CppCodeGenWriteBarrier(&___dialogueLines_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
