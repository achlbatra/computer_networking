//wap to perform the following operations on a string without using built in functions
// 1. reverse of a string
// 2. count the number of words in a text line
// 3. convert a string into its opposite case
// 4. merge 2 strings itno a single string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string: ");
    gets(str);
    printf("The original string is : %s\n", str);
    int i=0;
    int j=strlen(str)-1;
    while(i<=j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("The string after reversing is : %s", str);
    return 0;
}