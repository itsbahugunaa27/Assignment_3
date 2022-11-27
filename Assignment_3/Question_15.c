#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number is positive");
    }
    else if(num==0)
    {
        printf("Number is zero");
    }
    else
    {
        printf("Number is Negative");
    }
    return 0;
}
