#include <stdio.h>
int mani(){
    int n;
    printf("Nhap mot so nguyen bat ky: ");
    scanf("%d",&n);

    if(n < 0){
        printf("So nay la so am. Chu so lan luot la:\n- ");
        n = abs(n);
    }else{
        printf("Cac chu so lan luot la:\n");
    }
    if(n == 0){
        printf("0\n");
    }
    int temp = n;
    int reversed = 0;
    while(temp > 0){
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }    
    while(reversed > 0){
        int digit = reversed % 10;
        printf("%d ",digit);
        reversed /= 10;
    }
    printf("\n");
}


