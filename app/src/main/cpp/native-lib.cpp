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
        jlong returnHandle = (jlong) manager;
        return returnHandle;
    }

    JNIEXPORT jdouble JNICALL
    Java_com_jbloit_linktest_LinkWrapper_nativeGetTempo(
            JNIEnv *env,
            jclass,
            jlong managerHandle) {
        LinkManager *manager = (LinkManager *) managerHandle;
        if (manager == nullptr) {
            return 0;
        }
        return manager->getTempo();
    }

    JNIEXPORT void JNICALL
    Java_com_jbloit_linktest_LinkWrapper_nativeEnable(
            JNIEnv *env,
            jclass,
            jlong managerHandle) {
        LinkManager *manager = (LinkManager *) managerHandle;
        if (manager != nullptr) {
            manager->enable();
        }
    }
}