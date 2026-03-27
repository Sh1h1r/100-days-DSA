#include <stdio.h>
int main(){
	int length;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length];
	for(int i = 0; i < length; i++){
		printf("enter the %d element of the array:",i + 1);
		scanf("%d",&arr[i]);
	}
	int count = 0;
	for(int i = 0; i < length; i++){
		int sum = 0;
		for(int j = i; j < length; j++){
			sum += arr[j];
			if(sum == 0){
				for(int k = i; k <= j; k++){
					printf("%d",arr[k]);
				}
				count++;
			}
		}
	}
	printf("the count is: %d",count);
}
