#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Text
struct Text_t356221433;
// PlayerHealthManager
struct PlayerHealthManager_t3067865410;
// PlayerStats
struct PlayerStats_t2629781060;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t2519183485  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Slider UIManager::healthBar
	Slider_t297367283 * ___healthBar_2;
	// UnityEngine.UI.Text UIManager::HPText
	Text_t356221433 * ___HPText_3;
	// PlayerHealthManager UIManager::playerHealth
	PlayerHealthManager_t3067865410 * ___playerHealth_4;
	// PlayerStats UIManager::thePS
	PlayerStats_t2629781060 * ___thePS_5;
	// UnityEngine.UI.Text UIManager::levelText
	Text_t356221433 * ___levelText_6;

public:
	inline static int32_t get_offset_of_healthBar_2() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___healthBar_2)); }
	inline Slider_t297367283 * get_healthBar_2() const { return ___healthBar_2; }
	inline Slider_t297367283 ** get_address_of_healthBar_2() { return &___healthBar_2; }
	inline void set_healthBar_2(Slider_t297367283 * value)
	{
		___healthBar_2 = value;
		Il2CppCodeGenWriteBarrier(&___healthBar_2, value);
	}

	inline static int32_t get_offset_of_HPText_3() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___HPText_3)); }
	inline Text_t356221433 * get_HPText_3() const { return ___HPText_3; }
	inline Text_t356221433 ** get_address_of_HPText_3() { return &___HPText_3; }
	inline void set_HPText_3(Text_t356221433 * value)
	{
		___HPText_3 = value;
		Il2CppCodeGenWriteBarrier(&___HPText_3, value);
	}

	inline static int32_t get_offset_of_playerHealth_4() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___playerHealth_4)); }
	inline PlayerHealthManager_t3067865410 * get_playerHealth_4() const { return ___playerHealth_4; }
	inline PlayerHealthManager_t3067865410 ** get_address_of_playerHealth_4() { return &___playerHealth_4; }
	inline void set_playerHealth_4(PlayerHealthManager_t3067865410 * value)
	{
		___playerHealth_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_4, value);
	}

	inline static int32_t get_offset_of_thePS_5() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___thePS_5)); }
	inline PlayerStats_t2629781060 * get_thePS_5() const { return ___thePS_5; }
	inline PlayerStats_t2629781060 ** get_address_of_thePS_5() { return &___thePS_5; }
	inline void set_thePS_5(PlayerStats_t2629781060 * value)
	{
		___thePS_5 = value;
		Il2CppCodeGenWriteBarrier(&___thePS_5, value);
	}

	inline static int32_t get_offset_of_levelText_6() { return static_cast<int32_t>(offsetof(UIManager_t2519183485, ___levelText_6)); }
	inline Text_t356221433 * get_levelText_6() const { return ___levelText_6; }
	inline Text_t356221433 ** get_address_of_levelText_6() { return &___levelText_6; }
	inline void set_levelText_6(Text_t356221433 * value)
	{
		___levelText_6 = value;
		Il2CppCodeGenWriteBarrier(&___levelText_6, value);
	}
};

struct UIManager_t2519183485_StaticFields
{
public:
	// System.Boolean UIManager::UIExists
	bool ___UIExists_7;

public:
	inline static int32_t get_offset_of_UIExists_7() { return static_cast<int32_t>(offsetof(UIManager_t2519183485_StaticFields, ___UIExists_7)); }
	inline bool get_UIExists_7() const { return ___UIExists_7; }
	inline bool* get_address_of_UIExists_7() { return &___UIExists_7; }
	inline void set_UIExists_7(bool value)
	{
		___UIExists_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
