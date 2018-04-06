#include <jni.h>
#include <string>
#include "LinkManager.h"

extern "C"
{

    JNIEXPORT jlong JNICALL
    Java_com_jbloit_linktest_LinkWrapper_nativeCreateLinkManager(
            JNIEnv *env,
            jclass) {

        // We use std::nothrow so `new` returns a nullptr if the engine creation fails
        LinkManager *manager = new(std::nothrow) LinkManager();
        return (jlong) manager;
    }


    JNIEXPORT jdouble JNICALL
    Java_com_jbloit_linktest_LinkWrapper_nativeGetTempo(
            JNIEnv *env,
            jlong managerHandle) {

        LinkManager *manager = (LinkManager *) managerHandle;
        if (manager == nullptr) {

            return 0;
        }

        return manager->getTempo();
    }


}