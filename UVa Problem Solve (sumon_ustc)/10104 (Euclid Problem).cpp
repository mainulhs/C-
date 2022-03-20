//Mainul Hassan
//Department of CSE
//FSET,USTC
//UVa Id: sumon_ustc
#include <iostream>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <cmath>
using namespace std;

long gcd(long a, long b, long *x, long *y)
{
    long tx, ty;
    long g;

    if (b > a)
        return gcd(b, a, y, x);

    if (b == 0)
    {
        *x = 1;
        *y = 0;

        return a;
    }

    g = gcd(b, a % b, &tx, &ty);

    *x = ty;
    *y = tx - floor(a / b) * ty;

    return g;
}

int main(int ac, char *av[])
{
    long a, b;
    long g;
    long x, y;

    while (cin >> a >> b)
    {
        g = gcd(a, b, &x, &y);
        cout << x << " " << y << " " << g << endl;
    }
    return 0;
}

