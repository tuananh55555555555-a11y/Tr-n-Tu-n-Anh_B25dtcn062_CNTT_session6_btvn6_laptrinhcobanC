#include <stdio.h>
int main() {
    int n, t, d = 1;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    if(n < 0) n = -n;
    t = n;
    while(t >= 10) { t /= 10; d *= 10; }
    while(d > 0) {
        printf("%d ", n / d);
        n %= d;
        d /= 10;
    }
}

