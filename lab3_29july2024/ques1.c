// // bit stuffing
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int i=0, count = 0;
//     char databits[80];
//     //0011111100011011111001
//     printf("enter the bits : ");
//     scanf("%s", databits);
//     printf("Data bits before stuffing : %s \n", databits);
//     printf("Data bits after stuffing : ");
//     for(int i=0; i<strlen(databits);i++)
//     {
//         if(databits[i]=='1')
//             count++;
//         else count = 0;
//         printf("%c", databits[i]);
//         if(count == 5)
//         {
//             printf("0");
//             count = 0;
//         }
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>

void bitStuffing(char *input, char *stuffed) {
    int count = 0;
    int j = 0;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == '1') {
            count++;
        } else {
            count = 0;
        }
        stuffed[j++] = input[i];
        if (count == 5) {
            stuffed[j++] = '0';
            count = 0;
        }
    }
    stuffed[j] = '\0';
}

void bitUnstuffing(char *stuffed, char *unstuffed) {
    int count = 0;
    int j = 0;
    for (int i = 0; i < strlen(stuffed); i++) {
        if (stuffed[i] == '1') {
            count++;
        } else {
            count = 0;
        }
        unstuffed[j++] = stuffed[i];
        if (count == 5 && stuffed[i + 1] == '0') {
            i++;
            count = 0;
        }
    }
    unstuffed[j] = '\0';
}

int main() {
    char input[100], stuffed[200], unstuffed[100];
    
    printf("Enter the input bits: ");
    scanf("%s", input);
    
    printf("Original bits: %s\n", input);
    
    bitStuffing(input, stuffed);
    printf("Bits after stuffing: %s\n", stuffed);
    
    bitUnstuffing(stuffed, unstuffed);
    printf("Bits after unstuffing: %s\n", unstuffed);
    
    return 0;
}