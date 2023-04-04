#include <stdio.h>

int main() {
    int num, sum=0, digit;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    for(int i=num; i>0; i/=10) {
        digit = i % 10;
        sum += digit;
    }
    
    printf("Sum of digits: %d\n", sum);
    
    return 0;

