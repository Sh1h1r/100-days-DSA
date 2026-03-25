#include <stdio.h>
int main(){
	int length;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length];
	for(int i = 0; i < length; i++){
		printf("enter the %d element:",i + 1);
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < length; i++){
		for(int j = 0; j < length; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("the maximum value is: %d\n",arr[length - 1]);
	printf("the minimum value is %d\n",arr[0]);
}
