#include <stdio.h>
int main() {
    int N, i, tong = 0;
    printf("Nhap N = ");
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        tong = tong + i;
    }
    printf("Tong = %d", tong);
}

