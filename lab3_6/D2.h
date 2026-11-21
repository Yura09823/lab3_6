#pragma once
#include "B2.h"

class D2 : protected B2 {
    int d2;
public:
    D2();
    D2(int x, int y);
    ~D2();
    void show_D2();
};