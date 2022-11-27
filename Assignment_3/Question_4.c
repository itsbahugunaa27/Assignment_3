#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);;
    if((num&1)==1)
    {
        printf("%d is Odd number",num);
    }
    else
    {
        printf("%d is Even number",num);
    }
    return 0;
}
