#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
	int tcase, caseno = 0, ll, i;
	int bb, ww, tt, aa;
	scanf("%d", &tcase);
	while(tcase--)
	{
		scanf("%d", &ll);
		char match[ll+3];
		for(i = 0; i < ll; i++)
		{
			cin>>match[i];
		}
		bb = 0; ww = 0; tt = 0; aa = 0;
		for(i = 0; i < ll; i++)
		{
			if(match[i] == 'B')
			{
				bb++;
			}
			else if(match[i] == 'W')
			{
				ww++;
			}
			else if(match[i] == 'A')
			{
				aa++;
			}
			else if(match[i] == 'T')
			{
				tt++;
			}
		}
		int res;
		if(bb > ww && ww == 0 && tt == 0)
		{
			printf("Case %d: BANGLAWASH\n", ++caseno);
		}
		else if(ww > bb && bb == 0 && tt == 0)
		{
			printf("Case %d: WHITEWASH\n", ++caseno);
		}
		else if(aa == ll)
		{
			printf("Case %d: ABANDONED\n", ++caseno);
		}
		else
		{
			if(bb > ww)
			{
				res = (ll - ww - aa - tt);
				printf("Case %d: BANGLADESH %d - %d\n", ++caseno, res, ww);
			}
			else if(ww > bb)
			{
				res = (ll - bb - aa - tt);
				printf("Case %d: WWW %d - %d\n", ++caseno, res, bb);
			}
			else
			{
				printf("Case %d: DRAW %d %d\n", ++caseno, bb, tt);
			}
		}
	}
	return 0;
}

