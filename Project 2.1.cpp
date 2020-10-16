// Lab_02.cpp
// Кузів Назар
// Лабораторна робота No 2.1
// Лінійні програми.
// Варіант 2
#include <iostream>
#include <cmath>
using namespace std;
//z1  = cos a + sin a +cos 3a + sin 3a
//z2 = 2√2cos a * sin( п/4 + 2а)
int main()
{
    double Pi = 4 * atan(1.); // число пі
    double a;   // вхідний параметр
    double z1;  // результат 1 виразу
    double z2;  // результат 2 виразу

    cout << "a = "; cin >> a;

    z1 = cos(a) + sin(a) + cos(3 * a) + sin(3 * a);
    z2 = 2 * sqrt(2) * cos(a) * sin((Pi / 4) + 2 * a);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;

}