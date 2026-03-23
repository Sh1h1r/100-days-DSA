#include <stdio.h>
int main(){
	int n,m;
	printf("enter the number of rows,columnss:");
	scanf("%d %d",&n,&m);
	int arr[n][m],arr2[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m;j++ ){
			printf("enter the %dth element of the %d row",j + 1,i + 1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("now array 2->>\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m;j++ ){
			printf("enter the %dth element of the %d row:",j + 1,i + 1);
			scanf("%d",&arr2[i][j]);
		}
	}

	int sum_arr[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			sum_arr[i][j] = arr[i][j] + arr2[i][j];
			printf("%d ",sum_arr[i][j]);
		}
		printf("\n");
	}
}
