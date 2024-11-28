#include <stdio.h>
int main(){
	int list[2][3]={{2,20,4},
			{15,8,7}
			};
	int max = list[0][0];
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			if(max<list[i][j]){
				max=list[i][j];
			}
		}
	}
	printf("so lon nhat cua mang la %d",max);		
	return 0;
}

