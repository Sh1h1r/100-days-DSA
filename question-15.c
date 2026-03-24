#include <stdio.h>
int main(){
	int row,col;
	printf("enter the number of rows and cols:");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("enter the %d of the %d column element:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	int sum = 0;

	for(int i = 0; i < row; i++){
		sum += arr[i][i];
	}
	printf("the sum is: %d",sum);
}
