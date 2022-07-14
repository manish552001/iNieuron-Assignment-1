/*6. WAP to print the name of the user in double quotes.
Expected output format – “Hello , Amit Kumar*/
#include<stdio.h>

int main()
{
    char name[40];
    printf("Enter your name: ");
    scanf("%s",&name);
    printf(" \"Hello, %s\" ",name);
return 0;
}