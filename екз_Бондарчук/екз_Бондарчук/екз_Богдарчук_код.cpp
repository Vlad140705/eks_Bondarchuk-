#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstdio>
using namespace std;

int gcd(int a, int b , int c);

int main()
{
    setlocale(LC_ALL, "Russian");
    int k, a, b, i;
    int c = 0;
    cout << "¬ведите количество чисел:";
    cin >> k;
    cout << "¬ведиче число #1: ";
    cin >> a;
    for (i = 0; i < k - 1; i++)
    {
        cout << "¬ведите число #" << i + 2 << ": ";
        cin >> b;
        a = gcd(a, b,c);
    }
    cout << "gcd=" << a;
}


int gcd(int a, int b, int c)
{
    while (a != b)
        if (a > b) a -= b;
        else b -= a;
    return a;
}