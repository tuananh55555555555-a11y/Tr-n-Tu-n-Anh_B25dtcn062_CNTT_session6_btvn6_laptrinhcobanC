#include <stdio.h>
int main() {
    int a, b, i, bcnn;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);
    if(a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
    } else {
        for(i = (a > b ? a : b); ; i++) {
            if(i % a == 0 && i % b == 0) {
                bcnn = i;
                break;
            }
        }
        printf("Boi chung nho nhat (BCNN) = %d\n", bcnn);
    }
}

