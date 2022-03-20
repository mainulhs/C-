#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char side[10];
    int north,south,east,west,top,bottom,tempB,tempT;

    while (scanf("%d",&n) == 1)
    {
        if(n == 0)
            break;
        top = 1;
        bottom = 6;
        east = 4;
        west = 3;
        north = 2;
        south = 5;
        while (n--)
        {
            scanf("%s",&side);
            if (strcmp(side, "north") == 0)
            {
                tempB = bottom;
                tempT = top;
                top = south;
                bottom = north;
                south = tempB;
                north = tempT;
            }
            else if (strcmp(side, "south") == 0)
            {
                tempB = bottom;
                tempT = top;
                top = north;
                bottom = south;
                south = tempT;
                north = tempB;
            }
            else if (strcmp(side, "east") == 0)
            {
                tempB = bottom;
                tempT = top;
                top = west;
                bottom = east;
                west = tempB;
                east = tempT;
            }
            else if (strcmp(side, "west") == 0)
            {
                tempB = bottom;
                tempT = top;
                top = east;
                bottom = west;
                east = tempB;
                west = tempT;
            }
        }
        printf("%d\n",top);
    }
}
