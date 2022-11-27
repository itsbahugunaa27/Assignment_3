#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&x,&y,&z);
    if((x>y)&&(x>z))
    {
        printf("%d is greatest number",x);
    }
    else if((y>x)&&(y>z))
    {
        printf("%d is greater number",y);
    }
    else if((x==y)||(y==z)||(x==z))
    {
        printf("Greatest number is repeated");
    }
    else
    {
        printf("%d is greatest number",z);
    }

    return 0;
}
