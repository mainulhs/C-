#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#define MOD 1000003

using namespace std;

int main()
{
    int tcase, caseno = 0;
    long num;
    long long res;
    scanf("%d", &tcase);
	while(tcase--)
	{
		    scanf("%ld", &num);
            res = ((num*(num-1)) - (num-1)) % MOD;
            printf("Case %d: %lld\n", ++caseno, res);
	}
	return 0;
}
