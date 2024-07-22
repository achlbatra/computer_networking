// 2. count the number of words in a text line
#include<stdio.h>
#include<string.h>
int main()
{
    char str2[100];
    printf("enter the text line : ");
    gets(str2);
    int len = strlen(str2);
    int i=0;
    int cnt = 1;
    while(i<len)
    {
        if(str2[i]=='\0'||str2[i]==' ')
        { 
            cnt++;
        }
        i++;
    }
    printf("the number of words in this string are : %d", cnt);
    return 0;
}
