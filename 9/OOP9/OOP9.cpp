#include <iostream>
#include <Windows.h>
#include"D3.h";
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    B1 o0(777);
    cout << "B1 o0(777);" << endl;
    cout << endl << "Ієрархія класу B1: " << endl;
    o0.show_B1();
    cout << "~~~~~~" << endl;

    B2 o1(111);
    cout << "B2 o1(111);" << endl;
    cout << endl << "Ієрархія класу B2: " << endl;
    o1.show_B2();
    cout << "~~~~~~" << endl;
    D1 o2(333,111,222);
    cout << "D1 o2(333,111,222);" << endl;
    cout << endl << "Ієрархія класу D1: " << endl;
    o2.show_D1();
    cout << "~~~~~~" << endl;
    D2 o3(444,333,222,111);
    cout << "D3 o4(444,333,222,111);" << endl;
    cout << endl << "Ієрархія класу D2: " << endl;
    o3.show_D2();
    cout << "~~~~~~" << endl;
    D3 o4( 555, 444, 333, 222, 111);
    cout << "D3 o4( 555, 444, 333, 222, 111);" << endl;
    cout << endl << "Ієрархія класу D3: " << endl;
    o4.show_D3();
    cout << "~~~~~~" << endl;
}

