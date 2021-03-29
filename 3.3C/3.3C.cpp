//3.3C
#include <iostream>
#include <Windows.h> 
#include "LongLong.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    LongLong A;
    LongLong B;   

    cout << " Введіть A числа: " << endl;
    cin >> A;
    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
    cout << " Введіть B числа: " << endl;
    cin >> B;
    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
    cout << " A + B: " << endl;
    cout << A + B << endl;
    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
    
    cout << " A * C:" << endl;
    cout << A * B << endl;
    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;

    cout << " A > B " << endl;
    if (A > B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A < B " << endl;
    if (A < B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A == B " << endl;
    if (A == B) cout << " Yes " << endl; else cout << " No " << endl;

    cout << " A++ " << endl; cout << A++ << endl;
    cout << " A-- " << endl; cout << A-- << endl;
    cout << " ++A " << endl; cout << ++A << endl;
    cout << " --A " << endl; cout << --A << endl;
    cout << " Кількість елементів класу LongLong: " << Object::Count() << endl;
   
    return 0;
}