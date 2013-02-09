/* -*- Mode: c++; c-basic-offset: 4; tab-width: 20; indent-tabs-mode: nil; -*-
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef AndroidJNIWrapper_h__
#define AndroidJNIWrapper_h__

#include <jni.h>
#include <android/log.h>

extern "C" jclass jsjni_FindClass(const char *className);
extern "C" jmethodID jsjni_GetStaticMethodID(jclass methodClass,
                                       const char *methodName,
                                       const char *signature);
extern "C" bool jsjni_ExceptionCheck();
extern "C" void jsjni_CallStaticVoidMethodA(jclass cls, jmethodID method, jvalue *values);
extern "C" int jsjni_CallStaticIntMethodA(jclass cls, jmethodID method, jvalue *values);


#endif /* AndroidJNIWrapper_h__ */
