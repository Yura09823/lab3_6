#include "D4.h"

D4::D4() : D2(), d4(0) {}
D4::D4(int x, int y, int z) : D2(y, z), d4(x) {}
D4::~D4() {}

void D4::show_D4() {
    cout << "class D4:" << endl;
    show_D2();
    cout << "show_D4()" << endl
        << "D4::d4 = " << d4 << endl << endl;
}