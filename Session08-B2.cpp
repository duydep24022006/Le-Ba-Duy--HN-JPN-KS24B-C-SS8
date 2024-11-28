#include<stdio.h>

int main(){
	int array[5] = {1,2,9,8,7};
	int number;
	printf("MOI ban nhap phan tu vao  ");
	scanf("%d",&number);
	for(int i = 0 ; i < 5 ; i++){
			if( number == array[i]){
				printf("Vi tri trong mang la = %d",i);
				return 0;
				} 
	}
			printf("phan tu khong ton tai trong mang");
			return 0;
}
	
	
	
	


