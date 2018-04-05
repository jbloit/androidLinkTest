#include <jni.h>
#include <string>
#include "Dummy.h"
extern "C"
{
    JNIEXPORT jdouble JNICALL
    Java_com_jbloit_linktest_MainActivity_nativeGetTempo(
            JNIEnv *env,
            jobject /* this */) {

//        Dummy* dummy = new Dummy();
        Dummy dummy(44);
        return dummy.getCount();
    }


}