#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// QuestObject[]
struct QuestObjectU5BU5D_t392199300;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// DialogueManager
struct DialogueManager_t3878200441;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestManager
struct  QuestManager_t2403116915  : public MonoBehaviour_t1158329972
{
public:
	// QuestObject[] QuestManager::quests
	QuestObjectU5BU5D_t392199300* ___quests_2;
	// System.Boolean[] QuestManager::questCompleted
	BooleanU5BU5D_t3568034315* ___questCompleted_3;
	// DialogueManager QuestManager::theDM
	DialogueManager_t3878200441 * ___theDM_4;

public:
	inline static int32_t get_offset_of_quests_2() { return static_cast<int32_t>(offsetof(QuestManager_t2403116915, ___quests_2)); }
	inline QuestObjectU5BU5D_t392199300* get_quests_2() const { return ___quests_2; }
	inline QuestObjectU5BU5D_t392199300** get_address_of_quests_2() { return &___quests_2; }
	inline void set_quests_2(QuestObjectU5BU5D_t392199300* value)
	{
		___quests_2 = value;
		Il2CppCodeGenWriteBarrier(&___quests_2, value);
	}

	inline static int32_t get_offset_of_questCompleted_3() { return static_cast<int32_t>(offsetof(QuestManager_t2403116915, ___questCompleted_3)); }
	inline BooleanU5BU5D_t3568034315* get_questCompleted_3() const { return ___questCompleted_3; }
	inline BooleanU5BU5D_t3568034315** get_address_of_questCompleted_3() { return &___questCompleted_3; }
	inline void set_questCompleted_3(BooleanU5BU5D_t3568034315* value)
	{
		___questCompleted_3 = value;
		Il2CppCodeGenWriteBarrier(&___questCompleted_3, value);
	}

	inline static int32_t get_offset_of_theDM_4() { return static_cast<int32_t>(offsetof(QuestManager_t2403116915, ___theDM_4)); }
	inline DialogueManager_t3878200441 * get_theDM_4() const { return ___theDM_4; }
	inline DialogueManager_t3878200441 ** get_address_of_theDM_4() { return &___theDM_4; }
	inline void set_theDM_4(DialogueManager_t3878200441 * value)
	{
		___theDM_4 = value;
		Il2CppCodeGenWriteBarrier(&___theDM_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
