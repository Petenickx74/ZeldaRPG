#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// PlayerHealthManager
struct PlayerHealthManager_t3067865410;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerStats
struct  PlayerStats_t2629781060  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PlayerStats::currentLevel
	int32_t ___currentLevel_2;
	// System.Int32 PlayerStats::currentExp
	int32_t ___currentExp_3;
	// System.Int32[] PlayerStats::toLevelUp
	Int32U5BU5D_t3030399641* ___toLevelUp_4;
	// System.Int32[] PlayerStats::HPLevels
	Int32U5BU5D_t3030399641* ___HPLevels_5;
	// System.Int32[] PlayerStats::attackLevels
	Int32U5BU5D_t3030399641* ___attackLevels_6;
	// System.Int32[] PlayerStats::defenseLevels
	Int32U5BU5D_t3030399641* ___defenseLevels_7;
	// System.Int32 PlayerStats::currentHP
	int32_t ___currentHP_8;
	// System.Int32 PlayerStats::currentAttack
	int32_t ___currentAttack_9;
	// System.Int32 PlayerStats::currentDefense
	int32_t ___currentDefense_10;
	// PlayerHealthManager PlayerStats::thePlayerHealth
	PlayerHealthManager_t3067865410 * ___thePlayerHealth_11;

public:
	inline static int32_t get_offset_of_currentLevel_2() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___currentLevel_2)); }
	inline int32_t get_currentLevel_2() const { return ___currentLevel_2; }
	inline int32_t* get_address_of_currentLevel_2() { return &___currentLevel_2; }
	inline void set_currentLevel_2(int32_t value)
	{
		___currentLevel_2 = value;
	}

	inline static int32_t get_offset_of_currentExp_3() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___currentExp_3)); }
	inline int32_t get_currentExp_3() const { return ___currentExp_3; }
	inline int32_t* get_address_of_currentExp_3() { return &___currentExp_3; }
	inline void set_currentExp_3(int32_t value)
	{
		___currentExp_3 = value;
	}

	inline static int32_t get_offset_of_toLevelUp_4() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___toLevelUp_4)); }
	inline Int32U5BU5D_t3030399641* get_toLevelUp_4() const { return ___toLevelUp_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_toLevelUp_4() { return &___toLevelUp_4; }
	inline void set_toLevelUp_4(Int32U5BU5D_t3030399641* value)
	{
		___toLevelUp_4 = value;
		Il2CppCodeGenWriteBarrier(&___toLevelUp_4, value);
	}

	inline static int32_t get_offset_of_HPLevels_5() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___HPLevels_5)); }
	inline Int32U5BU5D_t3030399641* get_HPLevels_5() const { return ___HPLevels_5; }
	inline Int32U5BU5D_t3030399641** get_address_of_HPLevels_5() { return &___HPLevels_5; }
	inline void set_HPLevels_5(Int32U5BU5D_t3030399641* value)
	{
		___HPLevels_5 = value;
		Il2CppCodeGenWriteBarrier(&___HPLevels_5, value);
	}

	inline static int32_t get_offset_of_attackLevels_6() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___attackLevels_6)); }
	inline Int32U5BU5D_t3030399641* get_attackLevels_6() const { return ___attackLevels_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_attackLevels_6() { return &___attackLevels_6; }
	inline void set_attackLevels_6(Int32U5BU5D_t3030399641* value)
	{
		___attackLevels_6 = value;
		Il2CppCodeGenWriteBarrier(&___attackLevels_6, value);
	}

	inline static int32_t get_offset_of_defenseLevels_7() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___defenseLevels_7)); }
	inline Int32U5BU5D_t3030399641* get_defenseLevels_7() const { return ___defenseLevels_7; }
	inline Int32U5BU5D_t3030399641** get_address_of_defenseLevels_7() { return &___defenseLevels_7; }
	inline void set_defenseLevels_7(Int32U5BU5D_t3030399641* value)
	{
		___defenseLevels_7 = value;
		Il2CppCodeGenWriteBarrier(&___defenseLevels_7, value);
	}

	inline static int32_t get_offset_of_currentHP_8() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___currentHP_8)); }
	inline int32_t get_currentHP_8() const { return ___currentHP_8; }
	inline int32_t* get_address_of_currentHP_8() { return &___currentHP_8; }
	inline void set_currentHP_8(int32_t value)
	{
		___currentHP_8 = value;
	}

	inline static int32_t get_offset_of_currentAttack_9() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___currentAttack_9)); }
	inline int32_t get_currentAttack_9() const { return ___currentAttack_9; }
	inline int32_t* get_address_of_currentAttack_9() { return &___currentAttack_9; }
	inline void set_currentAttack_9(int32_t value)
	{
		___currentAttack_9 = value;
	}

	inline static int32_t get_offset_of_currentDefense_10() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___currentDefense_10)); }
	inline int32_t get_currentDefense_10() const { return ___currentDefense_10; }
	inline int32_t* get_address_of_currentDefense_10() { return &___currentDefense_10; }
	inline void set_currentDefense_10(int32_t value)
	{
		___currentDefense_10 = value;
	}

	inline static int32_t get_offset_of_thePlayerHealth_11() { return static_cast<int32_t>(offsetof(PlayerStats_t2629781060, ___thePlayerHealth_11)); }
	inline PlayerHealthManager_t3067865410 * get_thePlayerHealth_11() const { return ___thePlayerHealth_11; }
	inline PlayerHealthManager_t3067865410 ** get_address_of_thePlayerHealth_11() { return &___thePlayerHealth_11; }
	inline void set_thePlayerHealth_11(PlayerHealthManager_t3067865410 * value)
	{
		___thePlayerHealth_11 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayerHealth_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
