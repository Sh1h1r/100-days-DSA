#include <stdio.h>
#include <stdlib.h>
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
		for(int j = i; j < length; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	int target;
	printf("enter the target value:");
	scanf("%d",&target);
	int* start = arr;
	int* end = (arr + length - 1);
	int min_sum = 100;
	int a = 0;
	int b = 0;
	while(start < end){
		int sum = *start + *end;
		if(abs(target - sum) < abs(target - min_sum)){
			min_sum = sum;
			a = *start;
			b = *end;
		}
		else if(sum < target){
			start++;
		}
		else{
			end--;
		}
	}
	printf("the closest pair is: %d %d",a,b);
}
