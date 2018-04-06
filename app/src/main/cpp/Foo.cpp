//
// Created by julien@macmini on 05/04/2018.
//

#include "Foo.h"

Foo::Foo(): tempo(0) {
    enabled = false;
}

Foo::Foo(int _tempo) {
    enabled = false;
    tempo = _tempo;
}

int Foo::getTempo() {
    return tempo;
}

bool Foo::isEnabled() {
    return enabled;
}

void Foo::enable(bool flag) {
    enabled = flag;
}
