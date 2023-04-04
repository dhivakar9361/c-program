. #include <stdio.h>

int main() {
    int decimalNumber, binaryNumber = 0, remainder, i = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        decimalNumber /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }

    printf("Binary number: %d", binaryNumber);

    return 0;
}	

