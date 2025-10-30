#include <stdio.h>
int main() {
    int num1, num2, num3, option, isEntered = 0;
    do {
        printf("\n MENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                printf("Nhap so thu nhat: ");
                scanf("%d", &num1);
                printf("Nhap so thu hai: ");
                scanf("%d", &num2);
                printf("Nhap so thu ba: ");
                scanf("%d", &num3);
                isEntered = 1;
                break;
            case 2:
                if(!isEntered)
                    printf("Vui long nhap 3 so truoc!\n");
                else
                    printf("Tong 3 so = %d\n", num1 + num2 + num3);
                break;
            case 3:
                if(!isEntered)
                    printf("Vui long nhap 3 so truoc!\n");
                else
                    printf("Trung binh cong 3 so = %.2f\n", (num1 + num2 + num3) / 3.0);
                break;
            case 4:
                if(!isEntered)
                    printf("Vui long nhap 3 so truoc!\n");
                else {
                    int min = num1;
                    if(num2 < min) min = num2;
                    if(num3 < min) min = num3;
                    printf("So nho nhat = %d\n", min);
                }
                break;
            case 5:
                if(!isEntered)
                    printf("Vui long nhap 3 so truoc!\n");
                else {
                    int max = num1;
                    if(num2 > max) max = num2;
                    if(num3 > max) max = num3;
                    printf("So lon nhat = %d\n", max);
                }
                break;
            case 6:
                printf("Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while(option != 6);
}

