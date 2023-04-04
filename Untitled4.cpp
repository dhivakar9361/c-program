4. #include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int vowels = 0;
    
    printf("Enter a string: ");
    fgets(string, 100, stdin);
    
    for(int i=0; i<strlen(string); i++) {
        switch(string[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels++;
                break;
            default:
                break;
        }
    }
    
    printf("The number of vowels in the string is: %d\n", vowels);
    
    return 0;

