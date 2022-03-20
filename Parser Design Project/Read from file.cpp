#include <bits/stdc++.h>
using namespace std;

int main()
{
    FILE *fp;
    char in;
    int i = 0, j, k;
    //while((fp = fopen("D://ACM Solution//23-02-13//File//read.txt", "r")) != NULL)
    if((fp = fopen("E://File//Read.txt", "r")) == NULL)
    {
        puts("Invalid File");
        return 0;
    }
    do
    {
        in = getchar();
        putc(in,fp);
    }
    scanf("%c", &in);
    while(in != '\n');
    fclose(fp);
    return 0;
}
