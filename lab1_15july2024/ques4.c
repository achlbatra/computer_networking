// 4. merge 2 strings into a single string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    char res[200];
    printf("enter 1st string : ");
    gets(str1);
    printf("enter 2nd string : ");
    gets(str2);
    int ind = 0;
    for(int i=0;i<strlen(str1);i++)
    {
        res[ind++] = str1[i];
    }
    for(int i=0;i<strlen(str2);i++)
    {
        res[ind++] = str2[i];
    }
    printf("The resultant string after merging s1 and s2 is : %s", res);
}