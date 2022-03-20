#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int tcase, caseno = 0;
    char t1[12], t2[12], c, t3[12];
    int sc1, sc2, rr;
    scanf("%d", &tcase);
    while(tcase--)
    {
        cin>>t1>>sc1>>c>>sc2>>t2;
        cin>>t3;
        if(!strcmp(t3, t1))
        {
            printf("Case %d: ", ++caseno);
            if(sc1 > sc2)
            {
                rr = sc1 - 1;
                cout<<t2<<" "<<rr<<" - "<<sc2<<" "<<t1<<endl;
            }
            else if(sc2 > sc1)
            {
                rr = sc1 + 1;
                cout<<t2<<" "<<rr<<" - "<<sc2<<" "<<t1<<endl;
            }
            else
            {
                cout<<t2<<" 0 "<<" - 0 "<<" "<<t1<<endl;
            }
        }
        else
        {
            printf("Case %d: ", ++caseno);
            if(sc1 > sc2)
            {
                rr = sc1 + 1;
                cout<<t2<<" "<<rr<<" - "<<sc2<<" "<<t1<<endl;
            }
            else if(sc2 > sc1)
            {
                rr = sc1 - 1;
                cout<<t2<<" "<<rr<<" - "<<sc2<<" "<<t1<<endl;
            }
            else
            {
                cout<<t2<<" 0 "<<" - 0 "<<" "<<t1<<endl;
            }
        }
    }
    return 0;
}
