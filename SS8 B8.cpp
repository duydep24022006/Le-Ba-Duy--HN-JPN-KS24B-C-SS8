#include <stdio.h>
int main(){
	int list[4][4]={{2,20,4,6},{15,8,4,5},{44,6,5,6},{5,2,7,8}}, sum,i=0,j=4;
	do{
		sum += list[i][j];
		printf("duong cheo phu la %d \n",list[i][j]); 
		i++;
		j--;
	} while(i!=4&&j!=0);
	printf("tong cua bien la %d",sum);	
	return 0;
}

