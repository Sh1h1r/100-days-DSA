#include <stdio.h>
int main(){
	int row,col,flag = 1;
	printf("enter the number of rows and columns:");
	scanf("%d %d",&row,&col);
	int arr[row][col];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("enter the %d row and %d coulmn elements:",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			if(i == j){
				if(arr[i][j] != 1){
					flag = 0;
					break;
				}
			}
			else{
				if(arr[i][j] != 0){
					flag = 0;
					break;
				}
			}
		}
	}
	if(!flag) printf("not an identity matrix");
	else printf("identity matirx");
}
