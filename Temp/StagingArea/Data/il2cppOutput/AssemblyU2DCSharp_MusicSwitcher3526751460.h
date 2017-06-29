#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// MusicController
struct MusicController_t4192593383;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicSwitcher
struct  MusicSwitcher_t3526751460  : public MonoBehaviour_t1158329972
{
public:
	// MusicController MusicSwitcher::theMC
	MusicController_t4192593383 * ___theMC_2;
	// System.Int32 MusicSwitcher::newTrack
	int32_t ___newTrack_3;
	// System.Boolean MusicSwitcher::switchOnStart
	bool ___switchOnStart_4;

public:
	inline static int32_t get_offset_of_theMC_2() { return static_cast<int32_t>(offsetof(MusicSwitcher_t3526751460, ___theMC_2)); }
	inline MusicController_t4192593383 * get_theMC_2() const { return ___theMC_2; }
	inline MusicController_t4192593383 ** get_address_of_theMC_2() { return &___theMC_2; }
	inline void set_theMC_2(MusicController_t4192593383 * value)
	{
		___theMC_2 = value;
		Il2CppCodeGenWriteBarrier(&___theMC_2, value);
	}

	inline static int32_t get_offset_of_newTrack_3() { return static_cast<int32_t>(offsetof(MusicSwitcher_t3526751460, ___newTrack_3)); }
	inline int32_t get_newTrack_3() const { return ___newTrack_3; }
	inline int32_t* get_address_of_newTrack_3() { return &___newTrack_3; }
	inline void set_newTrack_3(int32_t value)
	{
		___newTrack_3 = value;
	}

	inline static int32_t get_offset_of_switchOnStart_4() { return static_cast<int32_t>(offsetof(MusicSwitcher_t3526751460, ___switchOnStart_4)); }
	inline bool get_switchOnStart_4() const { return ___switchOnStart_4; }
	inline bool* get_address_of_switchOnStart_4() { return &___switchOnStart_4; }
	inline void set_switchOnStart_4(bool value)
	{
		___switchOnStart_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
