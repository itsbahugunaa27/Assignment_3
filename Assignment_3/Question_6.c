#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is greater number",num1);
    }
    else if(num1==num2)
    {
        printf("Bothe are equal");
    }
    else
    {
        printf("%d is greater number",num2);
    }
    return 0;
}
