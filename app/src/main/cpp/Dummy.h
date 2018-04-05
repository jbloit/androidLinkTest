//
// Created by julien@macmini on 05/04/2018.
//

#ifndef LINKTEST_ANDROID_DUMMY_H
#define LINKTEST_ANDROID_DUMMY_H
#include "Foo.h"

class Dummy {

public:
    Dummy(double arg);
    double getCount();

private:
    double count = 5;
    Foo foo;
};


#endif //LINKTEST_ANDROID_DUMMY_H
