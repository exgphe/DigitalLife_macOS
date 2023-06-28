#include "GameSaveObject.h"

UGameSaveObject::UGameSaveObject() {
#if PLATFORM_ANDROID || PLATFORM_IOS
	FOVValue = 0.121429f;
#endif
}