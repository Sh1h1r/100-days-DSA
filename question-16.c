#include <stdio.h>
int main(){
	int length,k = 0;
	printf("enter the length of array:");
	scanf("%d",&length);
	int arr[length];
	int arr_frequency[length];
	arr_frequency[0] = 1;
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
	int *pointer = arr;
	int arr_unique[length];
	arr_unique[0] = arr[0];
	for(int i = 1; i < length; i++){
		if(arr[i] == *pointer){
			arr_frequency[k]++;
		}
		else{
			k++;
			arr_unique[k] = arr[i];
			arr_frequency[k] = 1;
			pointer = &arr[i];
		}
	}
	for(int i = 0; i <= k; i++){
		printf("%d frequency is %d:\n",arr_unique[i],arr_frequency[i]);
	}
}
