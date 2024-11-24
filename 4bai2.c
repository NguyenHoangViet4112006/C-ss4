#include <stdio.h>

int main(){
	
	int num;
	printf("nhap so nguyen");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		printf("la so chan", num);
	
	} else {
		printf("la so le", num);
	}
	
	
	return 0;
}
