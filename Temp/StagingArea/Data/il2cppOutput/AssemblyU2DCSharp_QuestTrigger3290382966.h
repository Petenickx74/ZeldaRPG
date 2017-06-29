#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// QuestManager
struct QuestManager_t2403116915;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestTrigger
struct  QuestTrigger_t3290382966  : public MonoBehaviour_t1158329972
{
public:
	// QuestManager QuestTrigger::theQM
	QuestManager_t2403116915 * ___theQM_2;
	// System.Int32 QuestTrigger::questNumber
	int32_t ___questNumber_3;
	// System.Boolean QuestTrigger::startQuest
	bool ___startQuest_4;
	// System.Boolean QuestTrigger::endQuest
	bool ___endQuest_5;

public:
	inline static int32_t get_offset_of_theQM_2() { return static_cast<int32_t>(offsetof(QuestTrigger_t3290382966, ___theQM_2)); }
	inline QuestManager_t2403116915 * get_theQM_2() const { return ___theQM_2; }
	inline QuestManager_t2403116915 ** get_address_of_theQM_2() { return &___theQM_2; }
	inline void set_theQM_2(QuestManager_t2403116915 * value)
	{
		___theQM_2 = value;
		Il2CppCodeGenWriteBarrier(&___theQM_2, value);
	}

	inline static int32_t get_offset_of_questNumber_3() { return static_cast<int32_t>(offsetof(QuestTrigger_t3290382966, ___questNumber_3)); }
	inline int32_t get_questNumber_3() const { return ___questNumber_3; }
	inline int32_t* get_address_of_questNumber_3() { return &___questNumber_3; }
	inline void set_questNumber_3(int32_t value)
	{
		___questNumber_3 = value;
	}

	inline static int32_t get_offset_of_startQuest_4() { return static_cast<int32_t>(offsetof(QuestTrigger_t3290382966, ___startQuest_4)); }
	inline bool get_startQuest_4() const { return ___startQuest_4; }
	inline bool* get_address_of_startQuest_4() { return &___startQuest_4; }
	inline void set_startQuest_4(bool value)
	{
		___startQuest_4 = value;
	}

	inline static int32_t get_offset_of_endQuest_5() { return static_cast<int32_t>(offsetof(QuestTrigger_t3290382966, ___endQuest_5)); }
	inline bool get_endQuest_5() const { return ___endQuest_5; }
	inline bool* get_address_of_endQuest_5() { return &___endQuest_5; }
	inline void set_endQuest_5(bool value)
	{
		___endQuest_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
