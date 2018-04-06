//
// Created by julien@macmini on 05/04/2018.
//

#include "LinkManager.h"

LinkManager::LinkManager(): link(120.){
    link.enable(true);
}

void LinkManager::enable() {
    link.enable(true);
}

double LinkManager::getTempo() {
    if (link.isEnabled()) {
        auto state = link.captureAppSessionState();
        return state.tempo();
    } else {
        return -1;
    }
}
