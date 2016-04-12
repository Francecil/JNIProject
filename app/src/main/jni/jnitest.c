#include "com_france_jniproject_NdkJniUtil.h"
JNIEXPORT jstring JNICALL Java_com_france_jniproject_NdkJniUtil_getCString
        (JNIEnv *env, jobject obj){
     return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
  }