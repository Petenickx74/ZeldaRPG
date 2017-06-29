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
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QuestObject
struct  QuestObject_t2496690553  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 QuestObject::questNumber
	int32_t ___questNumber_2;
	// QuestManager QuestObject::theQM
	QuestManager_t2403116915 * ___theQM_3;
	// System.String QuestObject::startText
	String_t* ___startText_4;
	// System.String QuestObject::endText
	String_t* ___endText_5;

public:
	inline static int32_t get_offset_of_questNumber_2() { return static_cast<int32_t>(offsetof(QuestObject_t2496690553, ___questNumber_2)); }
	inline int32_t get_questNumber_2() const { return ___questNumber_2; }
	inline int32_t* get_address_of_questNumber_2() { return &___questNumber_2; }
	inline void set_questNumber_2(int32_t value)
	{
		___questNumber_2 = value;
	}

	inline static int32_t get_offset_of_theQM_3() { return static_cast<int32_t>(offsetof(QuestObject_t2496690553, ___theQM_3)); }
	inline QuestManager_t2403116915 * get_theQM_3() const { return ___theQM_3; }
	inline QuestManager_t2403116915 ** get_address_of_theQM_3() { return &___theQM_3; }
	inline void set_theQM_3(QuestManager_t2403116915 * value)
	{
		___theQM_3 = value;
		Il2CppCodeGenWriteBarrier(&___theQM_3, value);
	}

	inline static int32_t get_offset_of_startText_4() { return static_cast<int32_t>(offsetof(QuestObject_t2496690553, ___startText_4)); }
	inline String_t* get_startText_4() const { return ___startText_4; }
	inline String_t** get_address_of_startText_4() { return &___startText_4; }
	inline void set_startText_4(String_t* value)
	{
		___startText_4 = value;
		Il2CppCodeGenWriteBarrier(&___startText_4, value);
	}

	inline static int32_t get_offset_of_endText_5() { return static_cast<int32_t>(offsetof(QuestObject_t2496690553, ___endText_5)); }
	inline String_t* get_endText_5() const { return ___endText_5; }
	inline String_t** get_address_of_endText_5() { return &___endText_5; }
	inline void set_endText_5(String_t* value)
	{
		___endText_5 = value;
		Il2CppCodeGenWriteBarrier(&___endText_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
