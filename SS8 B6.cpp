#include <stdio.h>
int main(){
	int list[4][4]={{2,20,4,6},{15,8,4,5},{44,6,5,6},{5,2,7,8}}, sum;
	for(int i = 0;i<4;i++){
		sum += list[i][i];
		printf("cheo sang phai %d \n",list[i][i]); 
	}
	for(int j = 3;j>=0;j--){
		sum+= list[j][j];
		printf("cheo sang trai %d \n",list[j][j]); 
	}
	printf("tong cua bien la %d",sum);
			
	return 0;
}

