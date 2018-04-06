//
// Created by julien@macmini on 05/04/2018.
//

#ifndef LINKTEST_ANDROID_FOO_H
#define LINKTEST_ANDROID_FOO_H


class Foo {
public:
    Foo();
    Foo(int tempo);
    bool isEnabled();
    void enable(bool flag);
    int getTempo();
    bool enabled;
private:

    int tempo;
};


#endif //LINKTEST_ANDROID_FOO_H
