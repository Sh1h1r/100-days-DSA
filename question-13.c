#include <stdio.h>
int main(){
	int row,col;
	printf("enter the row and column of the matrix:");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("enter element of %d row and %d column:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	for(int i = 0; i <row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	printf("running clockwise..");

	int top = 0, bottom = row - 1, left = 0, right = col - 1;

	while(top <= bottom){
		if(left <= right){
			for(int i = left; i <= right; i++){
				printf("%d ",arr[top][i]);
			}
			top++;
		}

		if(top <= bottom){
			for(int i = top; i <= bottom; i++){
				printf("%d ",arr[i][right]);
			}
			right--;
		}
		if(top <=bottom ){
			for(int i = right; i >= left; i--){
				printf("%d ",arr[bottom][i]);
			}
			bottom--;
		}
		if(left <= right){
			for(int i = bottom; i >= top; i--){
				printf("%d ",arr[i][left]);
			}
			left++;
		}
	}
}
