#include <bits/stdc++.h>
using namespace std;
int Add(int a, int b);
int main()
    {
        int x, y, c;
        scanf("%d %d", &x, &y);
        c = Add(x,y);
        printf("%d", c);
    }
int Add(int a, int b)
 {
    return (a+b);
 }
