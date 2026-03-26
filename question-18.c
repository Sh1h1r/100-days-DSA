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

	int k;
	printf("enter the number of rotations:");
	scanf("%d",&k);
	k = k % length;
	while(k > 0){
		int element = arr[length - 1];
		for(int i = length - 2; i >= 0; i--){
			arr[i + 1] = arr[i];
		}
		arr[0] = element;
		k--;
	}
	for(int i = 0;i < length; i++){
		printf("%d",arr[i]);
	}
}
