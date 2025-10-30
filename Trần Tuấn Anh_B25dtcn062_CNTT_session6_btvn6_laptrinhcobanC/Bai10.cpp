#include <stdio.h>
#include <math.h>
int main() {
    int number, temp, digits = 0;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);
    if (number < 0) {
        number = -number;
        printf("- ");
    }
    temp = number;
    if (temp == 0) {
        digits = 1;
    } else {
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
    }
    for (int i = digits - 1; i >= 0; i--) {
        int divisor = (int)pow(10, i);
        int digit = number / divisor;
        printf("%d ", digit);
        number %= divisor;
    }
    printf("\n");
}
