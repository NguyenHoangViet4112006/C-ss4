#include <stdio.h>

int main(){
	
	int num1, num2, num3;
	printf("nhap so thu nhat");
	scanf("%d", &num1);
	printf("nhap so thu hai");
	scanf("%d", &num2);
	printf("nhap so thu ba");
	scanf("%d", &num3);
	if ((num3 > num1 && num3 < num2) || (num3 > num2 && num3 < num1)) {
		printf("so thu 3 nam trong khoang giua so thu hai va so thu nhat");
	}else 
	printf("so thu 3 khong nam trong khoang giua so hai va so thu nhat");
	
	
	return 0;
}
