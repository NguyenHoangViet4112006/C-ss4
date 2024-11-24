#include <stdio.h>
int main(){
	
	int ngay, thang, nam;
	
	printf("moi ban nhap ngay");
	scanf("%d", &ngay);
	printf("moi ban nhap thang");
	scanf("%d", &thang);
	printf("moi ban nhap nam");
	scanf("%d", &nam);
	
	if(ngay > 31 && ngay <1){
		printf("ngay khong hop le");
	}else if(thang > 12 && thang < 1){
		printf("thang khong hop le");
	}else
	printf("ngay thang nam la %d %d %d", ngay, thang, nam);
	
	
	
	return 0;
}
