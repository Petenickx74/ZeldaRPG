#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// PlayerStats
struct PlayerStats_t2629781060;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyHealthManager
struct  EnemyHealthManager_t1082718723  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 EnemyHealthManager::MaxHealth
	int32_t ___MaxHealth_2;
	// System.Int32 EnemyHealthManager::CurrentHealth
	int32_t ___CurrentHealth_3;
	// PlayerStats EnemyHealthManager::thePlayerStats
	PlayerStats_t2629781060 * ___thePlayerStats_4;
	// System.Int32 EnemyHealthManager::expToGive
	int32_t ___expToGive_5;

public:
	inline static int32_t get_offset_of_MaxHealth_2() { return static_cast<int32_t>(offsetof(EnemyHealthManager_t1082718723, ___MaxHealth_2)); }
	inline int32_t get_MaxHealth_2() const { return ___MaxHealth_2; }
	inline int32_t* get_address_of_MaxHealth_2() { return &___MaxHealth_2; }
	inline void set_MaxHealth_2(int32_t value)
	{
		___MaxHealth_2 = value;
	}

	inline static int32_t get_offset_of_CurrentHealth_3() { return static_cast<int32_t>(offsetof(EnemyHealthManager_t1082718723, ___CurrentHealth_3)); }
	inline int32_t get_CurrentHealth_3() const { return ___CurrentHealth_3; }
	inline int32_t* get_address_of_CurrentHealth_3() { return &___CurrentHealth_3; }
	inline void set_CurrentHealth_3(int32_t value)
	{
		___CurrentHealth_3 = value;
	}

	inline static int32_t get_offset_of_thePlayerStats_4() { return static_cast<int32_t>(offsetof(EnemyHealthManager_t1082718723, ___thePlayerStats_4)); }
	inline PlayerStats_t2629781060 * get_thePlayerStats_4() const { return ___thePlayerStats_4; }
	inline PlayerStats_t2629781060 ** get_address_of_thePlayerStats_4() { return &___thePlayerStats_4; }
	inline void set_thePlayerStats_4(PlayerStats_t2629781060 * value)
	{
		___thePlayerStats_4 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayerStats_4, value);
	}

	inline static int32_t get_offset_of_expToGive_5() { return static_cast<int32_t>(offsetof(EnemyHealthManager_t1082718723, ___expToGive_5)); }
	inline int32_t get_expToGive_5() const { return ___expToGive_5; }
	inline int32_t* get_address_of_expToGive_5() { return &___expToGive_5; }
	inline void set_expToGive_5(int32_t value)
	{
		___expToGive_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
