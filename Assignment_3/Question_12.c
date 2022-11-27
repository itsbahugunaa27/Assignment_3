#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if((ch>=97)&&(ch<=122))
       {
           printf("Lower Case");
       }
       else
        {
            printf("Upper Case");
        }
    return 0;
}
