//
// Created by julien@macmini on 05/04/2018.
//

#ifndef LINKTEST_ANDROID_DUMMY_H
#define LINKTEST_ANDROID_DUMMY_H
#include "Foo.h"
#include <ableton/Link.hpp>

class LinkManager {

public:
    LinkManager();
    double getCount();
    double getTempo();
private:
    double count = 5;
    Foo foo;
    ableton::Link link;
};


#endif //LINKTEST_ANDROID_DUMMY_H
