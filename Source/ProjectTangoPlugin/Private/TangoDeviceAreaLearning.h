/*Copyright 2016 Opaque Media Group

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.*/
#include "TangoDataTypes.h"

#pragma once
#if PLATFORM_ANDROID
#include "tango_client_api.h"
#include <pthread.h>
#endif

/**
 * 
 */
class TangoDeviceAreaLearning
{
public:
	TangoDeviceAreaLearning();
	~TangoDeviceAreaLearning();

	//Tango Area Learning functions
	bool DeleteAreaDescription(FString UUID);
	FTangoAreaDescription SaveCurrentArea(FString Filename, bool& IsSuccessful);
	void SaveMetaData(FString UUID, FTangoAreaDescriptionMetaData NewMetaData, bool& IsSuccessful);
};