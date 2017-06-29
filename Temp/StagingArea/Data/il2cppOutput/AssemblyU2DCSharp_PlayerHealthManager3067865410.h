#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// SFXManager
struct SFXManager_t3589933374;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerHealthManager
struct  PlayerHealthManager_t3067865410  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PlayerHealthManager::playerMaxHealth
	int32_t ___playerMaxHealth_2;
	// System.Int32 PlayerHealthManager::playerCurrentHealth
	int32_t ___playerCurrentHealth_3;
	// System.Boolean PlayerHealthManager::flashActive
	bool ___flashActive_4;
	// System.Single PlayerHealthManager::flashLength
	float ___flashLength_5;
	// System.Single PlayerHealthManager::flashCounter
	float ___flashCounter_6;
	// UnityEngine.SpriteRenderer PlayerHealthManager::playerSprite
	SpriteRenderer_t1209076198 * ___playerSprite_7;
	// SFXManager PlayerHealthManager::sfxMan
	SFXManager_t3589933374 * ___sfxMan_8;

public:
	inline static int32_t get_offset_of_playerMaxHealth_2() { return static_cast<int32_t>(offsetof(PlayerHealthManager_t3067865410, ___playerMaxHealth_2)); }
	inline int32_t get_playerMaxHealth_2() const { return ___playerMaxHealth_2; }
	inline int32_t* get_address_of_playerMaxHealth_2() { return &___playerMaxHealth_2; }
	inline void set_playerMaxHealth_2(int32_t value)
	{
		___playerMaxHealth_2 = value;
	}

	inline static int32_t get_offset_of_playerCurrentHealth_3() { return static_cast<int32_t>(offsetof(PlayerHealthManager_t3067865410, ___playerCurrentHealth_3)); }
	inline int32_t get_playerCurrentHealth_3() const { return ___playerCurrentHealth_3; }
	inline int32_t* get_address_of_playerCurrentHealth_3() { return &___playerCurrentHealth_3; }
	inline void set_playerCurrentHealth_3(int32_t value)
	{
		___playerCurrentHealth_3 = value;
	}

	inline static int32_t get_offset_of_flashActive_4() { return static_cast<int32_t>(offsetof(PlayerHealthManager_t3067865410, ___flashActive_4)); }
	inline bool get_flashActive_4() const { return ___flashActive_4; }
	inline bool* get_address_of_flashActive_4() { return &___flashActive_4; }
	inline void set_flashActive_4(bool value)
	{
		___flashActive_4 = value;
	}

	inline static int32_t get_offset_of_flashLength_5() { return static_cast<int32_t>(offsetof(PlayerHealthManager_t3067865410, ___flashLength_5)); }
	inline float get_flashLength_5() const { return ___flashLength_5; }
	inline float* get_address_of_flashLength_5() { return &___flashLength_5; }
	inline void set_flashLength_5(float value)
	{
		___flashLength_5 = value;
	}

	inline static int32_t get_offset_of_flashCounter_6() { return static_cast<int32_t>(offsetof(PlayerHealthManager_t3067865410, ___flashCounter_6)); }
	inline float get_flashCounter_6() const { return ___flashCounter_6; }
	inline float* get_address_of_flashCounter_6() { return &___flashCounter_6; }
	inline void set_flashCounter_6(float value)
	{
		___flashCounter_6 = value;
	}

	inline static int32_t get_offset_of_playerSprite_7() { return static_cast<int32_t>(offsetof(PlayerHealthManager_t3067865410, ___playerSprite_7)); }
	inline SpriteRenderer_t1209076198 * get_playerSprite_7() const { return ___playerSprite_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_playerSprite_7() { return &___playerSprite_7; }
	inline void set_playerSprite_7(SpriteRenderer_t1209076198 * value)
	{
		___playerSprite_7 = value;
		Il2CppCodeGenWriteBarrier(&___playerSprite_7, value);
	}

	inline static int32_t get_offset_of_sfxMan_8() { return static_cast<int32_t>(offsetof(PlayerHealthManager_t3067865410, ___sfxMan_8)); }
	inline SFXManager_t3589933374 * get_sfxMan_8() const { return ___sfxMan_8; }
	inline SFXManager_t3589933374 ** get_address_of_sfxMan_8() { return &___sfxMan_8; }
	inline void set_sfxMan_8(SFXManager_t3589933374 * value)
	{
		___sfxMan_8 = value;
		Il2CppCodeGenWriteBarrier(&___sfxMan_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
