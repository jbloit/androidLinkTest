//
// Created by julien@macmini on 05/04/2018.
//

#ifndef LINKTEST_ANDROID_DUMMY_H
#define LINKTEST_ANDROID_DUMMY_H

#include <ableton/Link.hpp>
#include "Foo.h"

class LinkManager {

public:
    LinkManager();
    double getTempo();
private:
    Foo foo;
    ableton::Link link;

};


#endif //LINKTEST_ANDROID_DUMMY_H
