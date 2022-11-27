#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    if((num>99)&&(num<1000))
    {
        printf("Number is three digit");
    }
    else
    {
        printf("Number is not three digit");
    }
    return 0;
}
