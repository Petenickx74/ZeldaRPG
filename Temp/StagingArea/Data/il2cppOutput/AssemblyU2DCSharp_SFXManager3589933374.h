#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SFXManager
struct  SFXManager_t3589933374  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource SFXManager::playerHurt
	AudioSource_t1135106623 * ___playerHurt_2;
	// UnityEngine.AudioSource SFXManager::playerDead
	AudioSource_t1135106623 * ___playerDead_3;
	// UnityEngine.AudioSource SFXManager::playerAttack
	AudioSource_t1135106623 * ___playerAttack_4;

public:
	inline static int32_t get_offset_of_playerHurt_2() { return static_cast<int32_t>(offsetof(SFXManager_t3589933374, ___playerHurt_2)); }
	inline AudioSource_t1135106623 * get_playerHurt_2() const { return ___playerHurt_2; }
	inline AudioSource_t1135106623 ** get_address_of_playerHurt_2() { return &___playerHurt_2; }
	inline void set_playerHurt_2(AudioSource_t1135106623 * value)
	{
		___playerHurt_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerHurt_2, value);
	}

	inline static int32_t get_offset_of_playerDead_3() { return static_cast<int32_t>(offsetof(SFXManager_t3589933374, ___playerDead_3)); }
	inline AudioSource_t1135106623 * get_playerDead_3() const { return ___playerDead_3; }
	inline AudioSource_t1135106623 ** get_address_of_playerDead_3() { return &___playerDead_3; }
	inline void set_playerDead_3(AudioSource_t1135106623 * value)
	{
		___playerDead_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerDead_3, value);
	}

	inline static int32_t get_offset_of_playerAttack_4() { return static_cast<int32_t>(offsetof(SFXManager_t3589933374, ___playerAttack_4)); }
	inline AudioSource_t1135106623 * get_playerAttack_4() const { return ___playerAttack_4; }
	inline AudioSource_t1135106623 ** get_address_of_playerAttack_4() { return &___playerAttack_4; }
	inline void set_playerAttack_4(AudioSource_t1135106623 * value)
	{
		___playerAttack_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerAttack_4, value);
	}
};

struct SFXManager_t3589933374_StaticFields
{
public:
	// System.Boolean SFXManager::sfxmanExists
	bool ___sfxmanExists_5;

public:
	inline static int32_t get_offset_of_sfxmanExists_5() { return static_cast<int32_t>(offsetof(SFXManager_t3589933374_StaticFields, ___sfxmanExists_5)); }
	inline bool get_sfxmanExists_5() const { return ___sfxmanExists_5; }
	inline bool* get_address_of_sfxmanExists_5() { return &___sfxmanExists_5; }
	inline void set_sfxmanExists_5(bool value)
	{
		___sfxmanExists_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
