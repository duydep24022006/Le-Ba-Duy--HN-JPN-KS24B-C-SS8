#include <stdio.h>
int main(){
	int rows = 4, cols = 5, sum;
	int list[4][5]={{2,20,4,6,9},
			{15,8,7,4,5},
			{44,6,3,5,6},
			{5,2,6,7,8}
				};
	for(int i = 0;i<4;i++){
		for(int j = 0;j<5;j++){
			if(i!=0&&i!=3&&j!=0&&j!=4){
				continue;
			}else{
				sum+= list[i][j];
				}
			}
	}
	printf("tong cua bien la %d",sum);		
	return 0;
}

