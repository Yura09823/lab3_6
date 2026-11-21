#include "D3.h"

D3::D3() : D1(), d3(0) {}
D3::D3(int x, int y, int z, int w) : D1(y, z, w), d3(x) {}
D3::~D3() {}

void D3::show_D3() {
    cout << "class D3:" << endl;
    show_D1();
    cout << "show_D3()" << endl
        << "D3::d3 = " << d3 << endl << endl;
}