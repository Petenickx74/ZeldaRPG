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
// PlayerController
struct PlayerController_t4148409433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoadNewArea
struct  LoadNewArea_t39956151  : public MonoBehaviour_t1158329972
{
public:
	// System.String LoadNewArea::levelToLoad
	String_t* ___levelToLoad_2;
	// System.String LoadNewArea::exitPoint
	String_t* ___exitPoint_3;
	// PlayerController LoadNewArea::thePlayer
	PlayerController_t4148409433 * ___thePlayer_4;

public:
	inline static int32_t get_offset_of_levelToLoad_2() { return static_cast<int32_t>(offsetof(LoadNewArea_t39956151, ___levelToLoad_2)); }
	inline String_t* get_levelToLoad_2() const { return ___levelToLoad_2; }
	inline String_t** get_address_of_levelToLoad_2() { return &___levelToLoad_2; }
	inline void set_levelToLoad_2(String_t* value)
	{
		___levelToLoad_2 = value;
		Il2CppCodeGenWriteBarrier(&___levelToLoad_2, value);
	}

	inline static int32_t get_offset_of_exitPoint_3() { return static_cast<int32_t>(offsetof(LoadNewArea_t39956151, ___exitPoint_3)); }
	inline String_t* get_exitPoint_3() const { return ___exitPoint_3; }
	inline String_t** get_address_of_exitPoint_3() { return &___exitPoint_3; }
	inline void set_exitPoint_3(String_t* value)
	{
		___exitPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___exitPoint_3, value);
	}

	inline static int32_t get_offset_of_thePlayer_4() { return static_cast<int32_t>(offsetof(LoadNewArea_t39956151, ___thePlayer_4)); }
	inline PlayerController_t4148409433 * get_thePlayer_4() const { return ___thePlayer_4; }
	inline PlayerController_t4148409433 ** get_address_of_thePlayer_4() { return &___thePlayer_4; }
	inline void set_thePlayer_4(PlayerController_t4148409433 * value)
	{
		___thePlayer_4 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
