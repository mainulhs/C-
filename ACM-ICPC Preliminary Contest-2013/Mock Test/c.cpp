#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

char m[12][13];
int d[12][12][12][12];
int neigh[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int a[8];
int cd[9][2];
int main()
{
     int test,caseno = 0;
     cin>>test;
     while(test--)
     {
          int R,C;
          cin>>R>>C;

          for(int i=0;i<R;i++)

          cin>>m[i];

          int count = 1;

          for(int i = 0; i < R; i++)
               for(int j = 0; j < C; j++)
               {
                    for(int k = 0; k < R; k++)
                         for(int l = 0; l < C; l++)
                              d[i][j][k][l]=1000000;
                    if(m[i][j] != '#')
                        d[i][j][i][j]=0;
                    if(m[i][j] == 'H')
                        {
                            cd[0][0]=i;cd[0][1]=j;
                    }
                    else if(m[i][j] == 'F')
                     {
                         cd[count][0]=i;cd[count++][1]=j;
                    }
               }

         for(int ch = 0;ch < 144; ch++)
              for(int i = 0;i < R; i++)
                   for(int j = 0; j < C; j++)
                   {
                        for(int q = 0; q < 4; q++)
                        {
                             int k = i + neigh[q][0], l = j + neigh[q][1];
                             if(k >= 0 && k < R && l >= 0 && l < C && m[k][l] != '#')
                                  for(int m = 0; m < R; m++)
                                       for(int n = 0; n < C; n++)
                                            if(d[m][n][k][l] > d[m][n][i][j])
                                                 d[m][n][k][l] = d[m][n][i][j]+1;
                        }
                   }
          count--;

          for(int i = 0; i < count; i++)
               a[i] = i + 1;
          int mid=1000000;

          do
          {
               int start=0,dis=0;

               for(int i = 0; i < count; start = a[i++])
                    dis = dis + d[cd[start][0]][cd[start][1]][cd[a[i]][0]][cd[a[i]][1]];

               dis = dis + d[cd[start][0]][cd[start][1]][cd[0][0]][cd[0][1]];
               dis >>= 1;

               if(mid>dis)
                mid=dis;
          }
          while(next_permutation(a,a+count));

          printf("Case %d: %d\n",++caseno,mid > 10000?-1:mid);
     }
     return 0;
}
