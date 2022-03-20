#include<stdio.h>
int main()
{
    int number;
    printf("plase enter a number:");
    scanf("%d",&number);
    switch (number){
    case 1:
    printf("Input was 1");
    break;
    case 2:
    printf("Input was 2");
    printf("\n it is a even number");
    break;
    case 3:
    case 4:
    case 5:
    printf("Input was 3,4,5");
    break;
    defualt:
    printf("your input greater than 5");
    }
}
