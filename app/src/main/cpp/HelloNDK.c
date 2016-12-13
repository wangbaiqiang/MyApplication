//
// Created by Administrator on 2016/12/13.
//
#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_wbq_myapplication_HelloNDK_sayHelloNDK(JNIEnv *env, jclass type) {
    return (*env)->NewStringUTF(env,"this String come from C");
}
