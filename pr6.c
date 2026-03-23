// question 1
#include <stdio.h>
#include <string.h>

int main() {
    int i, len, j = 0;
    char str[20];
    char rev[20];

    printf("Enter the string: ");
    fgets(str, 20, stdin);

    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    for(i = len - 1; i >= 0; i--){
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';

    if(strcmp(rev, str) == 0){
        printf("This is palindrome");
    }
    else{
        printf("This is not palindrome");
    }

    return 0;
}

// question 2
#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str,100,stdin);
    
     str[strcspn(str, "\n")] = '\0';
    
    for(i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] > 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}