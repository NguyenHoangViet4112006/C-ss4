#include <stdio.h>

int main() {
    int num;

    printf("nhap mot so nguyen");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) {
        printf("chia het cho ca 3 va 5", num);
    } else if (num % 3 == 0) {
        printf("chia het cho 3", num);
    } else if (num % 5 == 0) {
        printf("chia het cho 5", num);
    } else {
        printf("khong chia het cho 3 hoac 5", num);
    }

    return 0;
}

