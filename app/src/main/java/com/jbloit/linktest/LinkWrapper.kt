package com.jbloit.linktest

/**
 * Created by bloit on 05/04/2018.
 */


object LinkWrapper {

    private var managerHandle: Long = 0

    fun create(): Boolean{
        if (managerHandle == 0L) {
            managerHandle = native_createLinkManager()
        }
        return managerHandle != 0L
    }

    fun getTempo(): Double {
        return nativeGetTempo()
    }


    external fun native_createLinkManager(): Long

    // LINK API
    external fun nativeGetTempo(): Double
}