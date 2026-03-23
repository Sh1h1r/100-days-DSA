#include <stdio.h>
int main(){
	int row,col,flag=1;
	printf("enter the number of rows and columns:");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("enter the %d row and %d column value:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("checking symmetric matrix..");
	for(int i = 0; i < row;i++){
		for(int j = 0; j <col; j++){
			if(arr[i][j] != arr[j][i]){
				flag = 0;
			}
		}
	}
	if(!flag) printf("not a symmetric matrix\n");
	else printf("symmetric matrix\n");
}
