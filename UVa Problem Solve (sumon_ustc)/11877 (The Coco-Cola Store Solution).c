#include <stdio.h>
int main(){
    int n;
    int coke=0;
    while(scanf("%d",&n)==1){
        if(n==0)

break;
        coke=0;
        while(n>=3){

n=n-3;

coke++;
            n+=1;
            }
    if(n==2)
        printf("%d\n",(coke+1));
    else
        printf("%d\n",coke);
    }
return 0;
}
