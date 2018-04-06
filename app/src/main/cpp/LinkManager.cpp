//
// Created by julien@macmini on 05/04/2018.
//

#include "LinkManager.h"
#include <iostream>
LinkManager::LinkManager(): link(120.), foo(666){

    link.enable(true);
    if (foo.isEnabled()){
        std::cout << "sdfsdf" << std::endl;
    }
}
void LinkManager::enable() {
    foo.enable(true);
}

double LinkManager::getTempo() {
//   auto state = link.captureAppSessionState();
//    return  state.tempo();
//    auto linkPtr = &link;
//    auto fooPtr = &foo;
//    std::cout << linkPtr << std::endl;
//    std::cout << fooPtr << std::endl;
    bool flag = (bool) foo.enabled;
    if (flag) {
        return (double) foo.getTempo();
    }
    else {
        return 12345.0;
    }
}
