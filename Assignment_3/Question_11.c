#include<stdio.h>
int main()
{
    float English,Maths,Accounts,Business,Economics,total,percentage;
    printf("Enter the marks:\n");
    scanf("%f %f %f %f %f",&English,&Maths,&Accounts,&Business,&Economics);

    total=(English+Maths+Accounts+Business+Economics);
    printf("Total marks is %f\n ",total);

    percentage=(total/500)*100;
    printf("Percentage is %f \n",percentage);
    if(percentage>=33)
    {
        printf("Student is passed");
    }
    else
    {
        printf("Student is failed");
    }

    return 0;
}
