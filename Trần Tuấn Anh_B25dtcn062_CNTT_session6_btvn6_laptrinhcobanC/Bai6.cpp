#include <stdio.h>
int main() {
    int choice;
    float a, b;

    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Tong = %.2f\n", a + b);
                break;
            case 2:
                printf("Hieu = %.2f\n", a - b);
                break;
            case 3:
                printf("Tich = %.2f\n", a * b);
                break;
            case 4:
                if(b == 0)
                    printf("Loi! Khong the chia cho 0.\n");
                else
                    printf("Thuong = %.2f\n", a / b);
                break;
            case 5:
                printf("Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Vui long chon lai.\n");
        }
    } while(choice != 5);
}

