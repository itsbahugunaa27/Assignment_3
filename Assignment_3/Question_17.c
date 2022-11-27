#include<stdio.h>
int main()
{
    float x,y,z;
    printf("Enter the sides of a triangle\n");
    scanf("%f %f %f",&x,&y,&z);
    if((x+y)>z)
    {
        printf("Traingle is Valid");
    }
    else if((x+z)>y)
    {
        printf("Triangle is valid");
    }
    else if((y+z)>x)
    {
        printf("Traingle is valid");
    }
    else
    {
        printf("Traingle is not valid");
    }
    return 0;
    }
