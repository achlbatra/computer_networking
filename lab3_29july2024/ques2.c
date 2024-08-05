#include <stdio.h>
#include <string.h>
int main() {
    char frames[100][50], st[50][50];
    char esc[10] = "esc";
    char flag[10] = "flag";
    int i, k = 0;
    strcpy(frames[k++], "flag");
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar();  
    printf("Enter the strings:\n");
    for(i = 0; i < n; i++) {
        fgets(st[i], 50, stdin);
        st[i][strcspn(st[i], "\n")] = '\0';  
    }
    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        puts(st[i]);
    }
    for(i = 0; i < n; i++) {
        if(strcmp(st[i], flag) == 0 || strcmp(st[i], esc) == 0) {
            strcpy(frames[k++], esc);
        }
        strcpy(frames[k++], st[i]);
    }
    strcpy(frames[k++], "flag");
    printf("\nAfter Byte stuffing:\n");
    for(i = 0; i < k; i++) {
        printf("%s ", frames[i]);
    }
    return 0;
}
