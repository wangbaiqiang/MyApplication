#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_wbq_myapplication_HelloNDK_sayHelloNDK(JNIEnv *env, jclass type) {

    // TODO


    return env->NewStringUTF(returnValue);
}

extern "C"
jstring
Java_com_wbq_myapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
