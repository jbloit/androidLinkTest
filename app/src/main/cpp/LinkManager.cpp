//
// Created by julien@macmini on 05/04/2018.
//

#include "LinkManager.h"


LinkManager::LinkManager(): foo(44), link(120.){
    count = 10;

    link.enable(true);
}

double LinkManager::getTempo() {
    auto state = link.captureAppSessionState();
    return  state.tempo();
}


double LinkManager::getCount() {
return foo.getCount();
}