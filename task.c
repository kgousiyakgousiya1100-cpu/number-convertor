#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int num) {
    int binary[32], i = 0;

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Function to convert decimal to octal
void decimalToOctal(int num) {
    int octal[32], i = 0;

    while (num > 0) {
        octal[i] = num % 8;
        num = num / 8;
        i++;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int num) {
    char hex[32];
    int i = 0, remainder;

    while (num > 0) {
        remainder = num % 16;

        if (remainder < 10)
            hex[i] = remainder + '0';
        else
            hex[i] = remainder - 10 + 'A';

        num = num / 16;
        i++;
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Binary: 0\nOctal: 0\nHexadecimal: 0\n");
    } else {
        decimalToBinary(number);
        decimalToOctal(number);
        decimalToHexadecimal(number);
    }

    return 0;
}
