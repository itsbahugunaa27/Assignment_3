#include<stdio.h>
int main()
{
    double a,b,c,d;
    printf("Enter the coefficients of a,b and c\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        printf("Roots are Real\n");
    }
    else if(d==0)
    {
        printf("Roots are Equal");
    }
    else
    {
        printf("Roots are Imaginary\n");
    }
    return 0;
}
