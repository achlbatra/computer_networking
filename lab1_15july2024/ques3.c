// 3. convert a string into its opposite case
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string:");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    printf("String after changing the case is : %s",str);
    return 0;
}