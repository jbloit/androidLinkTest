package com.jbloit.linktest

/**
 * Created by bloit on 05/04/2018.
 */

object LinkWrapper {

    private var managerHandle: Long = 0

    fun create(): Boolean{
        if (managerHandle == 0L) {
            managerHandle = nativeCreateLinkManager()
        }
        return managerHandle != 0L
    }

    fun getTempo(): Double {
        if (managerHandle != 0L) {
            return nativeGetTempo(managerHandle)
        }
        return 0.0
    }
    fun getPhase(): Double {
        if (managerHandle != 0L) {
            return nativeGetPhase(managerHandle)
        }
        return 0.0
    }

    fun setEnable() {
        if (managerHandle != 0L) {
            nativeEnable(managerHandle)
        }
    }

    external fun nativeCreateLinkManager(): Long

    // LINK API
    external fun nativeGetTempo(handle: Long): Double
    external fun nativeGetPhase(handle: Long): Double
    external fun nativeEnable(handle: Long)
}