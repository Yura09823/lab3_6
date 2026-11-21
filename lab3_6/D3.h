#pragma once
#include "D1.h"

class D3 : protected D1 {
    int d3;
public:
    D3();
    D3(int x, int y, int z, int w);
    ~D3();
    void show_D3();
};