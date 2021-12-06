//
// Created by Valentin on 3/12/21.
//

#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_samplekotlin_home_MainActivity_getClientKey(JNIEnv *env, jobject object) {
    std::string clientKey = "12ab34cd56ef78gh9i";
    return env->NewStringUTF(clientKey.c_str());
}

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_samplekotlin_home_MainActivity_getSharedPreferenceName(JNIEnv *env, jobject object) {
std::string sharedPreferenceName = "A7m38ank";
return env->NewStringUTF(sharedPreferenceName.c_str());
}

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_samplekotlin_SignUpActivity_getSharedPreferenceName(JNIEnv *env, jobject object) {
std::string sharedPreferenceName = "A7m38ank";
return env->NewStringUTF(sharedPreferenceName.c_str());
}

