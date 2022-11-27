#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if((ch>=97)&&(ch<=122))
       {
           printf("Lower Case");
       }
       else if((ch>=65)&&(ch<=90))
        {
            printf("Upper Case");
        }
        else if((ch>=47)&&(ch<=58))
        {
            printf("Digit");
        }
        else
        {
            printf("Special Character");
        }
    return 0;
}
