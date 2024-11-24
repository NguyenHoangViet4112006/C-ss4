#include <stdio.h>

int main() {
    int num;

    printf("nhap mot so nguyen: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("la so duong.\n", num);
    } else if (num < 0) {
        printf("la so am.\n", num);
    } else {
        printf("la so khong.\n", num);
    }

    return 0;
}

