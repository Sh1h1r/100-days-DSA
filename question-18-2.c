#include <stdio.h>
int reverse(int *arr,int start,int end){
	while(start < end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	return *arr;
}

int main(){
	int length;
	printf("enter the length of the array:");
	scanf("%d",&length);
	int arr[length];
	for(int i = 0; i < length; i++){
		printf("enter the %d element:",i+1);
		scanf("%d",&arr[i]);
	}

	int k;
	printf("enter the number of rotations:");
	scanf("%d",&k);
	
	reverse(arr,0,length - 1);
	reverse(arr,0,k - 1);
	reverse(arr,k,length - 1);

	for(int i = 0; i < length; i++){
		printf("%d",arr[i]);
	}
}
