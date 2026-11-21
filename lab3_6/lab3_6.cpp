#include <iostream>
#include <Windows.h>
#include "B1.h"
#include "B2.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include "D4.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    B1 o1(10);
    cout << "B1 o1(10);" << endl;
    cout << "sizeof(B1) = " << sizeof(B1) << endl;
    cout << endl << "Ієрархія класу B1:" << endl;
    o1.show_B1();

    B2 o2(20);
    cout << "B2 o2(20);" << endl;
    cout << "sizeof(B2) = " << sizeof(B2) << endl;
    cout << endl << "Ієрархія класу B2:" << endl;
    o2.show_B2();

    D1 o3(100, 10, 20);
    cout << "D1 o3(100, 10, 20);" << endl;
    cout << "sizeof(D1) = " << sizeof(D1) << endl;
    cout << endl << "Ієрархія класу D1:" << endl;
    o3.show_D1();

    D2 o4(200, 20);
    cout << "D2 o4(200, 20);" << endl;
    cout << "sizeof(D2) = " << sizeof(D2) << endl;
    cout << endl << "Ієрархія класу D2:" << endl;
    o4.show_D2();

    D3 o5(300, 100, 10, 20);
    cout << "D3 o5(300, 100, 10, 20);" << endl;
    cout << "sizeof(D3) = " << sizeof(D3) << endl;
    cout << endl << "Ієрархія класу D3:" << endl;
    o5.show_D3();

    D4 o6(400, 200, 20);
    cout << "D4 o6(400, 200, 20);" << endl;
    cout << "sizeof(D4) = " << sizeof(D4) << endl;
    cout << endl << "Ієрархія класу D4:" << endl;
    o6.show_D4();

    return 0;
}