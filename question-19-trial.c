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
	printf("enter target:");
	scanf("%d",&target);
	int a=0,b=0,c=0;
	int* fix = arr;
	int min_sum = 10000;
	while(fix < arr + length - 2){
		int* start = fix + 1;
		int* end = (arr + length - 1);
		while(start < end){
			int sum = *start + *end + *fix;
			if(abs(target - sum) < abs(target - min_sum)){
				min_sum = sum;
				a = *start;
				b = *end;
				c = *fix;
			}
			else if(sum < target){
				start++;
			}
			else{
				end--;
			}
		}
		fix++;
	}
	printf("the pair of numbers closest to %d %d %d ",a,b,c);
}
