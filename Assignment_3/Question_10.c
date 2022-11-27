#include<stdio.h>
int main()
{
    float SP,CP,Loss,Profit,total;
    printf("Enter the SP and CP\n");
    scanf("%f %f",&SP,&CP);
    if((SP-CP)>0)
    {
        Profit=(SP/(SP+CP)*100);
        printf("Profit percentage is %4.3f",Profit);
    }
    else
    {
        Loss=(CP/(SP+CP)*100);
        printf("Loss percentage is %4.3f",Loss);
    }

    return 0;
}
