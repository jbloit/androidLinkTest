//
// Created by julien@macmini on 05/04/2018.
//

#include "LinkManager.h"
#include <iostream>
LinkManager::LinkManager(): link(120.), foo(23){

    link.enable(true);
}

double LinkManager::getTempo() {
 //   auto state = link.captureAppSessionState();
//    return  state.tempo();
    auto linkPtr = &link;
    auto fooPtr = &foo;
    std::cout << linkPtr << std::endl;
    std::cout << fooPtr << std::endl;
    return foo.getCount();
}
